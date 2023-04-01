import os

from mongodb.utils import get_unanalyzed_files, upsert_metadata, update_entry, clear_field
from src.imaginator import encode
from termcolor import colored


binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


def print_result(malicious):
    color = 'red' if malicious else 'green'
    print("Malicious:", colored(malicious, color))


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def run_minos(file):
    path = os.path.join(binary_path, file)
    status = os.system(f"python src/minio.py {path}")

    if status > 1:
        print("Error while running minos.")
        exit(1)

    # encode(file, "./data/img")
    data = {
        'minos': status
    }
    update_entry({'file': file}, data)

    return status != 0


def main():
    upsert_metadata(dataset_path)
    files = get_unanalyzed_files('minos')
    if len(files) == 0:
        print("No binaries to analyze.")
        return

    for i, file in enumerate(files):
        print_file(i + 1, len(files), file)
        malicious = run_minos(file)
        print_result(malicious)


if __name__ == "__main__":
    main()
