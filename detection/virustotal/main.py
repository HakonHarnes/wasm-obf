# API LIMITATIONS:
# - 4 lookups per min
# - 500 lookups per day
# - 15k lookups per month

from utils.file_utils import get_unanalyzed_binaries, get_metadata_filename, write_json

import os
import time
import hashlib
import vt

dir_path = os.path.dirname(os.path.realpath(__file__))


def calculate_file_hash(file_path):
    """
    Calculates the SHA-256 hash of a file.
    """
    with open(file_path, 'rb') as f:
        file_data = f.read()
        return hashlib.sha256(file_data).hexdigest()


def check_existing_file(client, file_hash):
    """
    Checks if a file with the specified hash already exists on VirusTotal.
    """
    try:
        file_report = client.get_object('/files/{}'.format(file_hash))
        if file_report['attributes']['total_votes']['malicious'] > 0:
            print('File already detected as malicious on VirusTotal')
        else:
            print('File already uploaded to VirusTotal')
        return True
    except vt.error.APIError as e:
        if e.code != 404:
            raise
        return False


def upload_file(client, file_path):
    """
    Uploads a file to VirusTotal and returns the analysis ID.
    """
    print('Uploading file: {}'.format(file_path))
    with open(file_path, 'rb') as f:
        analysis = client.scan_file(f)
    return analysis.id


def poll_analysis_status(client, analysis_id):
    """
    Polls the status of a VirusTotal analysis until it is complete.
    """
    while True:
        analysis = client.get_object('/analyses/{}'.format(analysis_id))
        if analysis.status == 'completed':
            break

        time.sleep(10)


def check_scan_results(client, hashes):
    """
    Checks the scan results for the specified file hashes and reports whether each file was detected as malicious or not.
    """
    for file_hash in hashes:
        file_report = client.get_object('/files/{}'.format(file_hash))
        if file_report['attributes']['total_votes']['malicious'] > 0:
            print('File {} detected as malicious on VirusTotal'.format(
                file_report['attributes']['md5']))
        else:
            print('File {} not detected as malicious on VirusTotal'.format(
                file_report['attributes']['md5']))


if __name__ == "__main__":
    # Set up VirusTotal client
    api_key = '<your_api_key_here>'
    client = vt.Client(api_key)

    # Get list of unanalyzed binaries
    binaries = get_unanalyzed_binaries(f'{dir_path}/binaries', "minos")
    if not binaries:
        print("No binaries to analyze")
        exit(0)

    for binary in binaries:
        input_path = os.path.join(binary["path"], binary["filename"])
        print(f'Processing {input_path}...')

        # Calculate file hash for duplicate checking
        file_hash = calculate_file_hash(input_path)

        # Check if file already exists on VirusTotal
        if check_existing_file(client, file_hash):
            continue

        # Upload file to VirusTotal
        analysis_id = upload_file(client, input_path)

        # Poll analysis status until complete
        poll_analysis_status(client, analysis_id)

        # Check scan results
        check_scan_results(client, [file_hash])

        metadata_filename = get_metadata_filename(binary["filename"], "minos")
        output_path = os.path.join(binary["path"], metadata_filename)

        data = {
            "method": "vt-py",
            "malicious": None,

            "input": {
                "path": binary["path"],
                "filename": binary["filename"]
            },

            "vt_analysis_id": analysis_id,
            "vt_file_hash": file_hash
        }

        # Write metadata to file
        write_json(output_path, data)

        # Close VirusTotal client
        client.close()
