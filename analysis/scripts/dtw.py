import os
import sys
import glob
import json
import numpy as np

from fastdtw import fastdtw

dir_path = os.path.dirname(os.path.realpath(__file__))


def write_json(filepath, data):
    with open(filepath, 'w') as file:
        json.dump(data, file, indent=4)


def read_binary_file(file_path):
    with open(file_path, 'rb') as file:
        content = file.read()
    return np.frombuffer(content, dtype=np.uint8)


def calculate_dtw(f1, f2):
    c1 = read_binary_file(f1)
    c2 = read_binary_file(f2)

    distance, _ = fastdtw(c1, c2)
    return distance


def calculate_dtw_for_binaries(binary_path, data_path):
    original_binaries_path = os.path.join(binary_path, 'original')
    original_binaries = glob.glob(original_binaries_path + '/*.wasm')

    tigress_binaries_path = os.path.join(binary_path, 'tigress')
    tigress_binaries = glob.glob(tigress_binaries_path + '/*.wasm')

    llvm_binaries_path = os.path.join(binary_path, 'llvm')
    llvm_binaries = glob.glob(llvm_binaries_path + '/*.wasm')

    program_count = len(original_binaries)
    count = 1

    for original_binary in original_binaries:
        original_program_name = os.path.basename(original_binary).split('.')[0]
        print(f'[{count}/{program_count}] {original_program_name}')
        dtw_data = {
            'program': os.path.basename(original_binary),
        }

        for llvm_binary in llvm_binaries:
            llvm_program_name = os.path.basename(llvm_binary).split('-llvm')[0]
            if original_program_name == llvm_program_name:
                distance = calculate_dtw(original_binary, llvm_binary)
                dtw_data.update({
                    f'{os.path.basename(llvm_binary)}': distance,
                })

        for tigress_binary in tigress_binaries:
            tigress_program_name = os.path.basename(
                tigress_binary).split('-llvm')[0]
            if original_program_name == tigress_program_name:
                distance = calculate_dtw(original_binary, tigress_binary)

        write_json(os.path.join(
            data_path, f'{original_program_name}-dtw.json'), dtw_data)

        count += 1


def main():
    if len(sys.argv) < 3:
        print('Usage: python3 dtw.py <path/to/binaries> <path/to/data> or python3 dtw.py <path/to/binary1> <path/to/binary2>')
        sys.exit(1)

    if os.path.isdir(sys.argv[1]) and os.path.isdir(sys.argv[2]):
        calculate_dtw_for_binaries(sys.argv[1], sys.argv[2])
    else:
        distance = calculate_dtw(sys.argv[1], sys.argv[2])
        print(distance)


if __name__ == '__main__':
    main()
