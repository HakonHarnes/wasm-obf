import os

from termcolor import colored
from mongodb.utils import get_unverified_miners, update_document

binary_path = os.environ['BINARY_PATH']


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Verifying hashes of {file}', color))


def print_result(code):
    color = 'green' if code == 0 else 'red'
    print(f'Exit code: {colored(code, color)}')


def handle_result(code, document, iterations):
    print_result(code)

    verified_hashes = iterations if code == 0 else 0

    document.update({'verified_hashes': verified_hashes})
    update_document(document)


def verify_hashes(file_path, name, iterations):
    code = os.system(
        f'node src/index.js --file="{file_path}" --name="{name}" --iterations="{iterations}"')
    return code


def main():
    error_count = 0

    # How many hashing iterations (i.e. how many hashes to verify)
    iterations = 100

    documents = get_unverified_miners()
    print(colored(f'Verifying {len(documents)} binaries', 'yellow'))

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        file_path = os.path.join(
            binary_path, document['file'].replace('.wasm', '.js'))
        name = document['name']
        code = verify_hashes(file_path, name, iterations)
        handle_result(code, document, iterations)
        if code != 0:
            error_count += 1

    color = 'green' if error_count == 0 else 'red'
    print(colored(f'\nErrors: {error_count}', color))


if __name__ == '__main__':
    main()
