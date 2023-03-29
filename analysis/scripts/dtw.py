import os
import sys
import glob
import json
from typing import List

from fastdtw import fastdtw

dir_path = os.path.dirname(os.path.realpath(__file__))


def write_json(filepath, data):
    with open(filepath, 'w') as file:
        json.dump(data, file, indent=4)


def read_file(file_path: str) -> List[str]:
    with open(file_path, "r") as file:
        content = file.read()
        return content.splitlines()


def calculate_dtw(f1, f2):
    c1 = read_file(f1)
    c2 = read_file(f2)

    distance, _ = fastdtw(c1, c2)
    return distance


def calculate_dtw_for_binaries(binary_path, data_path):
    original_binaries_path = os.path.join(binary_path, 'original')
    original_binaries = sorted(glob.glob(original_binaries_path + '/*.wasm'))

    tigress_binaries_path = os.path.join(binary_path, 'tigress')
    tigress_binaries = sorted(glob.glob(tigress_binaries_path + '/*.wasm'))

    llvm_binaries_path = os.path.join(binary_path, 'llvm')
    llvm_binaries = sorted(glob.glob(llvm_binaries_path + '/*.wasm'))

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
                original_binary_wat = original_binary.replace('.wasm', '.wat')
                if not os.path.isfile(original_binary_wat):
                    os.system(
                        f'wasm2wat {original_binary} -o {original_binary_wat}')
                llvm_binary_wat = llvm_binary.replace('.wasm', '.wat')
                if not os.path.isfile(llvm_binary_wat):
                    os.system(
                        f'wasm2wat {llvm_binary} -o {llvm_binary_wat}')
                distance = calculate_dtw(original_binary_wat, llvm_binary_wat)
                dtw_data.update({
                    f'{os.path.basename(llvm_binary)}': distance,
                })

        # for tigress_binary in tigress_binaries:
        #     tigress_program_name = os.path.basename(
        #         tigress_binary).split('-tigress')[0]
        #     if original_program_name == tigress_program_name:
        #         distance = calculate_dtw(original_binary, tigress_binary)

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
