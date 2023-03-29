import os
import json

from utils.file_utils import get_unanalyzed_binaries, get_metadata_filename, write_json
from src.imaginator import encode
from termcolor import colored


binary_path = os.environ['BINARY_PATH']
data_path = os.environ['DATA_PATH']


def print_result(malicious):
    color = 'red' if malicious else 'green'
    print("Malicious:", colored(malicious, color))


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def run_minos(file):
    status = os.system(f"python src/minio.py {file} >/dev/null 2>&1")
    malicious = status != 0

    if not os.path.exists("./data/img"):
        os.makedirs("./data/img")
    encode(file, "./data/img")

    return malicious


if __name__ == "__main__":

    binaries = get_unanalyzed_binaries(binary_path, data_path, "minos")
    if not binaries:
        print(colored("No binaries to analyze!", "blue"))
        exit(0)

    for i, binary in enumerate(binaries):
        input_path = os.path.join(binary["path"], binary["filename"])
        print_file(i + 1, len(binaries), input_path)

        malicious = run_minos(input_path)
        print_result(malicious)

        metadata_filename = get_metadata_filename(binary["filename"], "minos")
        output_path = os.path.join(data_path, metadata_filename)

        data = {
            "method": "minos",
            "malicious": malicious,

            "input": {
                "path": binary["path"],
                "filename": binary["filename"]
            },
        }

        write_json(output_path, data)
