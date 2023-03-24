# API LIMITATIONS:
# - 4 lookups per min
# - 500 lookups per day
# - 15k lookups per month

import vt
import hashlib
import json
import time
import sys
import os

from utils.file_utils import get_unanalyzed_binaries, get_metadata_filename, write_json
from vt.error import APIError
from termcolor import colored
from dotenv import load_dotenv

load_dotenv()


dir_path = os.path.dirname(os.path.realpath(__file__))

binary_path = f'{dir_path}/binaries'
metadata_path = f'{dir_path}/data'

analysis_ids = []


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
        file = client.get_object(f'/files/{file_hash}')
        return file, False
    except APIError as error:
        if error.code == 'QuotaExceededError' or error.code == 'WrongCredentialsError':
            return None, error.code
        return None, None


def upload_file(client, file_path):
    """
    Uploads a file to VirusTotal and returns the analysis ID.
    """
    print(f'Uploading file: {file_path}')
    with open(file_path, 'rb') as file:
        try:
            analysis = client.scan_file(file)
            return analysis.id, False
        except APIError as error:
            if error.code == 'QuotaExceededError' or error.code == 'WrongCredentialsError':
                return None, error.code
            return None, None


def check_scan_results(client, analysis_id, file_hash):
    """
    Checks the scan results for the specified file hashes and reports whether each file was detected as malicious or not.
    """
    print(f'Checking scan results for analysis ID: {analysis_id}')
    try:
        analysis = client.get_object(f'/analyses/{analysis_id}')
        if analysis.status == 'completed':
            file = client.get_object(f'/files/{file_hash}')
            return file, None
        else:
            return None, None
    except APIError as error:
        if error.code == 'QuotaExceededError' or error.code == 'WrongCredentialsError':
            return None, error.code
        return None, None


def write_result_to_file(file, file_hash, binary):
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


def analyze_binaries(api_key, binaries):

    client = vt.Client(api_key)

    for i, binary in enumerate(binaries):
        input_path = os.path.join(binary["path"], binary["filename"])
        print(f'Processing [{i}/{len(binaries)}] {input_path}')

        # Existing file
        file_hash = calculate_file_hash(input_path)
        file, api_error = check_existing_file(client, file_hash)
        if file is not None:
            write_result_to_file(file, file_hash, binary)

        # Upload file
        if file is None and not api_error:
            analysis_id, api_error = upload_file(client, input_path)
            analysis_ids.append(analysis_id)

        # Check analysis results for uploaded files
        if i % 10 == 0 and len(analysis_ids) > 0 and not api_error:
            time.sleep(10)
            print(analysis_ids)
            for analysis_id in analysis_ids and i % 10 == 0:
                file, api_error = check_scan_results(
                    client, analysis_id, file_hash)
                if file is not None:
                    analysis_ids.remove(analysis_id)
                    write_result_to_file(file, file_hash, binary)

        # Try next API key if quota exceeded
        if api_error:
            print(colored(f'{api_error}: {api_key}\n', 'red'))
            client.close()
            return

    # Check remaining analysis results
    while(len(analysis_ids) > 0 and not api_error):
        time.sleep(10)
        for analysis_id in analysis_ids:
            file, api_error = check_scan_results(
                client, analysis_id, file_hash)
            if file is not None:
                analysis_ids.remove(analysis_id)
                write_result_to_file(file, file_hash, binary)

            # Try next API key if quota exceeded
            if api_error:
                print(colored(f'{api_error}: {api_key}\n', 'red'))
                client.close()
                return

    client.close()


if __name__ == '__main__':

    api_keys = json.loads(os.environ['API_KEYS'])
    for api_key in api_keys:
        binaries = get_unanalyzed_binaries(
            f'{dir_path}/binaries', metadata_path, 'virustotal')
        if not binaries:
            print('No binaries to analyze', file=sys.stderr)
            exit(0)

        analyze_binaries(api_key, binaries)
