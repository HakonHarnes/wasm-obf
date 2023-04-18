import subprocess
import json
import os

from termcolor import colored
from mongodb.utils import get_unanalyzed_documents, update_document

binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']

WAT_FILE = "module.wat"


def print_result(malicious):
    color = 'red' if malicious else 'green'
    print("Result:", colored(malicious, color))


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def print_error(error):
    print(colored(f"Error: {error}", 'red'))


def run_miner_ray(file):
    try:
        print('Converting to wat file')
        subprocess.check_output(f"wasm2wat {file} -o {WAT_FILE}", shell=True)
    except subprocess.CalledProcessError as e:
        print_error(e.output.decode('utf-8'))
        return {'malicous': 0, 'error': 'wasm2wat failed'}

    print('Running miner-ray')
    command = f'node --expose-gc --max-old-space-size=8192 src/parser.js --file {WAT_FILE}'
    try:
        output = subprocess.check_output(
            command, shell=True, stderr=subprocess.STDOUT, timeout=120).decode('utf-8')

        print(output)

        if 'error' in output.lower():
            print_error('MinerRay failed')
            return {'malicous': 0, 'error': 'MinerRay failed'}

        output = json.loads(output)
        return {'malicous': len(output['certain']) > 0, 'error': None, 'output': output}
    except subprocess.CalledProcessError:
        print_error('MinerRay failed')
        return {'malicous': 0, 'error': 'MinerRay failed'}
    except subprocess.TimeoutExpired:
        print_error('Command timed out')
        return {'malicous': 0, 'error': 'Timeout'}


def main():
    documents = get_unanalyzed_documents('miner_ray')
    if len(documents) == 0:
        print("No binaries to analyze.")
        return

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        result = run_miner_ray(os.path.join(binary_path, document['file']))
        malicious = result['malicous']
        print_result(malicious)

        document.update({
            'miner_ray': {
                'result': malicious,
                'error': result['error'],
            }
        })
        update_document(document)


if __name__ == '__main__':
    main()
