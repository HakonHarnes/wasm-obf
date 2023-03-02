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

binary_path = f'{dir_path}/binaries'
metadata_path = f'{dir_path}/data'


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
        return client.get_object(f'/files/{file_hash}')
    except:
        return None


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
        analysis = client.get_object(f'/analyses/{analysis_id}')
        if analysis.status == 'completed':
            break

        time.sleep(10)


def check_scan_results(client, file_hash):
    """
    Checks the scan results for the specified file hashes and reports whether each file was detected as malicious or not.
    """
    file_report = client.get_object(f'/files/{file_hash}')
    return file_report


if __name__ == "__main__":
    # Set up VirusTotal client
    api_key = '06824e020451c6b96e58f072e9cf1e25b61203a72afa61aab7773fd7d02f28cb'
    client = vt.Client(api_key)

    # Get list of unanalyzed binaries
    binaries = get_unanalyzed_binaries(
        f'{dir_path}/binaries', metadata_path, "virustotal")
    if not binaries:
        print("No binaries to analyze")
        exit(0)

    for binary in binaries:
        input_path = os.path.join(binary["path"], binary["filename"])
        print(f'Processing {input_path}...')

        file_hash = calculate_file_hash(input_path)
        file = check_existing_file(client, file_hash)

        if file is None:
            analysis_id = upload_file(client, input_path)
            poll_analysis_status(client, analysis_id)
            file = check_scan_results(client, file_hash)

        if file is None:
            continue

        # Write result to file
        metadata_filename = get_metadata_filename(
            binary["filename"], "virustotal")
        output_path = os.path.join(metadata_path, metadata_filename)

        data = {
            "method": "virustotal",
            "malicious": file.last_analysis_stats["malicious"] > 0,

            "input": {
                "path": binary["path"],
                "filename": binary["filename"]
            },

            "file_hash": file_hash,
            "result": {k: v for k, v in file.last_analysis_stats.items()}
        }

        print(f'Malicious: {file.last_analysis_stats["malicious"]}\n')

        write_json(output_path, data)
        client.close()
