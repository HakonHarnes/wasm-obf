import os
import glob

from termcolor import colored
from mongodb.utils import get_unoptimized_documents, update_document

binary_path = os.environ['BINARY_PATH']


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Optimizing {file}', color))


def print_result(code):
    color = 'green' if code == 0 else 'red'
    print(f'Exit code: {colored(code, color)}')


def handle_result(code, document):
    print_result(code)

    document.update({'opt': code})
    update_document(document)


def optimize_wasm_file(file):
    code = os.system(f'wasm-opt {file} -O3 -o {file}')
    return code


def main():
    error_count = 0

    documents = get_unoptimized_documents()
    print(colored(f'Optimizing {len(documents)} binaries', 'yellow'))

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        file_path = os.path.join(binary_path, document['file'])
        code = optimize_wasm_file(file_path)
        handle_result(code, document)
        if code != 0:
            error_count += 1

    color = 'green' if error_count == 0 else 'red'
    print(colored(f'\nErrors: {error_count}', color))


if __name__ == '__main__':
    main()
