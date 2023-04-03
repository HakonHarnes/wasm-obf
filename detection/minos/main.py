import os

from mongodb.utils import update_metadata, get_unanalyzed_documents, update_document
from src.imaginator import encode
from termcolor import colored


binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


def print_result(malicious):
    color = 'red' if malicious else 'green'
    print("Result:", colored(malicious, color))


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def run_minos(document):
    file = document['file']
    path = os.path.join(binary_path, file)
    status = os.system(f"python src/minio.py {path} >/dev/null 2>&1")

    if status > 1:
        print("Error while running minos.")
        exit(1)

    # encode(file, "./data/img")
    document.update({
        'minos': {
            'result': status
        }})
    update_document(document)

    return status


def main():
    update_metadata(dataset_path)
    documents = get_unanalyzed_documents('minos')
    if len(documents) == 0:
        print("No binaries to analyze.")
        return

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        status = run_minos(document)
        print_result(status)


if __name__ == "__main__":
    main()
