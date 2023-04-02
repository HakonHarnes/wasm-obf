import os

from termcolor import colored
from mongodb.utils import get_unanalyzed_files, upsert_metadata, update_entry, get_all_files


binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def print_file_size(file_size):
    print(colored(f'File size: {file_size}', 'white'))


def main():
    upsert_metadata(dataset_path)

    files = get_all_files()
    for i, file in enumerate(files):
        print_file(i + 1, len(files), file)
        path = os.path.join(binary_path, file)
        file_size = os.path.getsize(path)
        print_file_size(file_size)
        update_entry({'file': file}, {'file_size': file_size})


if __name__ == '__main__':
    main()
