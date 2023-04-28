import os
import re
import sys
import subprocess

from termcolor import colored
from fastdtw import fastdtw
from mongodb.utils import get_documents_without_distance, update_document


binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def print_result(distance):
    formatted_distance = f"{distance:,}".replace(',', ' ')
    print(f"{colored('Distance:', 'green')} {formatted_distance}")


def _preprocess_wasm_file(wasm_file):
    wat = subprocess.check_output(['wasm2wat', wasm_file])
    wat = wat.decode('utf-8')
    lines = wat.splitlines()
    return lines


def _preprocess_v8_file(v8_file):
    lines = _read_lines_from_file(v8_file)
    instructions = []

    pattern = re.compile(r'@\s*\d+\s*:.*?([A-Z].*)')

    for line in lines:
        match = pattern.search(line)
        if match:
            instruction = match.group(1).strip()
            instructions.append(instruction)

    return instructions


def _read_lines_from_file(file):
    with open(file, 'r') as file:
        lines = file.readlines()
    return lines


def preprocess_file(file):
    if file.endswith('.wasm'):
        return _preprocess_wasm_file(file)
    elif file.endswith('.v8'):
        return _preprocess_v8_file(file)
    else:
        return _read_lines_from_file(file)


def lines_to_numbers(l1, l2):

    n1 = [hash(line) for line in l1]
    n2 = [hash(line) for line in l2]

    return n1, n2


def equal(a, b):
    return 0 if a == b else 1


def calc_distance(f1, f2):
    l1 = preprocess_file(f1)
    l2 = preprocess_file(f2)

    n1, n2 = lines_to_numbers(l1, l2)

    distance, _ = fastdtw(n1, n2, dist=equal)
    return distance


def handle_result(document, distance):
    print_result(distance)

    # update db
    document.update({'distance': distance})
    update_document(document)


def main():

    if len(sys.argv) == 3:
        f1 = sys.argv[1]
        f2 = sys.argv[2]
        distance = calc_distance(f1, f2)
        print(distance)
        exit(0)

    documents = get_documents_without_distance()
    if len(documents) == 0:
        print('No documents to calculate dtw for.')
        exit(0)

    print(
        colored(f'Calculating distance for {len(documents)} documents', 'yellow'))

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        file = os.path.join(binary_path, document['file'])
        unobfuscated_file = os.path.join(
            binary_path, document['unobfuscated_file'])
        distance = calc_distance(file, unobfuscated_file)
        handle_result(document, distance)


if __name__ == "__main__":
    main()
