import os

from termcolor import colored
from mongodb.utils import update_metadata, get_documents, update_document


binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def print_file_size(file_size):
    print(f'File size: {file_size}')


def main():
    update_metadata(dataset_path)

    documents = get_documents()
    for i, document in enumerate(documents):
        file = document['file']
        print_file(i + 1, len(documents), file)
        path = os.path.join(binary_path, file)
        file_size = os.path.getsize(path)
        print_file_size(file_size)
        document.update({'file_size': file_size})
        update_document(document)


if __name__ == '__main__':
    main()
