import os
import time

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
    start_time = time.time()
    code = os.system(
        f'wasm-opt {file} -O3 -o {file} --enable-reference-types --enable-multivalue --enable-simd')
    end_time = time.time()
    elapsed_time = end_time - start_time
    return code, elapsed_time


def main():
    error_count = 0
    times = []

    documents = get_unoptimized_documents()
    print(colored(f'Optimizing {len(documents)} binaries', 'yellow'))

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        file_path = os.path.join(binary_path, document['file'])
        code, elapsed_time = optimize_wasm_file(file_path)
        handle_result(code, document)
        if code != 0:
            error_count += 1

        times.append(elapsed_time)
        print(f'Time elapsed: {elapsed_time} seconds')
        print(f'Average time: {sum(times) / len(times)} seconds')
        print(f'Min time: {min(times)} seconds')
        print(f'Max time: {max(times)} seconds')

    color = 'green' if error_count == 0 else 'red'
    print(colored(f'\nErrors: {error_count}', color))


if __name__ == '__main__':
    main()
