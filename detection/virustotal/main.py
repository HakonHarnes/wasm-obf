import vt
import time
import hashlib
import json
import os

from mongodb.utils import get_unanalyzed_files, upsert_metadata, update_entry, clear_field
from vt.error import APIError
from termcolor import colored
from dotenv import load_dotenv

load_dotenv()

binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']

analysis_ids = []


def calculate_file_hash(file_path):
    with open(file_path, 'rb') as f:
        file_data = f.read()
        return hashlib.sha256(file_data).hexdigest()


def check_existing_file(client, file_hash):
    try:
        file = client.get_object(f'/files/{file_hash}')
        return file, False
    except APIError as error:
        if error.code == 'QuotaExceededError' or error.code == 'WrongCredentialsError':
            return None, error.code
        return None, None


def upload_file(client, file_path):
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


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def analyze_files(api_key, files):

    client = vt.Client(api_key)

    for i, file in enumerate(files):
        input_path = os.path.join(binary_path, file)
        print_file(i, len(files), file)

        # Existing file
        file_hash = calculate_file_hash(input_path)
        vt_file, api_error = check_existing_file(client, file_hash)
        if vt_file is not None:
            malicious_count = vt_file.last_analysis_stats["malicious"]
            print(colored(f'Result: {malicious_count}\n',
                  'red' if malicious_count > 0 else 'green'))

            data = {
                'virustotal': {
                    'result': malicious_count,
                    'last_analysis_stats': vt_file.last_analysis_stats
                }
            }
            update_entry({'file': file}, data)

        # Upload file
        if vt_file is None and not api_error:
            analysis_id, api_error = upload_file(client, input_path)
            analysis_ids.append(analysis_id)

        if api_error:
            print(colored(f'{api_error}: {api_key}\n', 'red'))
            client.close()
            return

    # Check remaining analysis results
    while analysis_ids and len(analysis_ids) > 0 and not api_error:
        time.sleep(10)
        for analysis_id in analysis_ids:
            file, api_error = check_scan_results(
                client, analysis_id, file_hash)
            if file is not None:
                analysis_ids.remove(analysis_id)
                malicious_count = file.last_analysis_stats["malicious"]
                print(colored(f'Result: {malicious_count}\n',
                              'red' if malicious_count > 0 else 'green'))

                data = {
                    'virustotal': {
                        'result': malicious_count,
                        'last_analysis_stats': file.last_analysis_stats
                    }
                }
                update_entry({'file': file}, data)

            # Try next API key if quota exceeded
            if api_error:
                print(colored(f'{api_error}: {api_key}\n', 'red'))
                client.close()
                return

    client.close()


def main():
    upsert_metadata(dataset_path)
    api_keys = json.loads(os.environ['API_KEYS'])
    for api_key in api_keys:
        files = get_unanalyzed_files('virustotal')
        if not files:
            print('No binaries to analyze.')
            exit(0)

        analyze_files(api_key, files)


if __name__ == '__main__':
    # clear_field('virustotal')
    main()
