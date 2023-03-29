import os
import time
import glob
import json

from enum import Enum


dir_path = os.path.dirname(os.path.realpath(__file__))
binaries_path = os.path.join(dir_path, 'binaries')
data_path = os.path.join(dir_path, 'data')


class Algorithm(Enum):
    CN_RWZ = "cn-rwz"
    CN_R = "cn-r"
    CN_LITE_0 = "cn-lite-0"
    CN_LITE_1 = "cn-lite-1"
    CN_LITE_2 = "cn-lite-2"
    CN_PICO_TRTL = "cn-pico-trtl"
    CN_HALF = "cn-half"
    CN_0 = "cn-0"
    CN_1 = "cn-1"
    CN_2 = "cn-2"


def get_files():
    return sorted(glob.glob(f'{binaries_path}/*/cn*.wasm'))


def measure_file_size(file):
    return os.path.getsize(file)


def get_mining_algorithm(wasm_file):
    for algo in Algorithm:
        if algo.value in wasm_file:
            return algo.value
    raise Exception(f'Algorithm not found for {wasm_file}')


def save_file_sizes_to_json(file_size_list):
    output_filename = "file_size.json"
    output_filepath = os.path.join(data_path, output_filename)

    with open(output_filepath, "w") as output_file:
        json.dump(file_size_list, output_file, indent=4)


def main():
    files = get_files()

    count = 0

    file_sizes_dict = {}
    for file in files:
        count += 1
        print(f'[{count}/{len(files)}] {file}', flush=True)

        algo = get_mining_algorithm(file)
        print(os.path.basename(file), algo)

        file_size = measure_file_size(file)

        basename = os.path.basename(file)
        if algo not in file_sizes_dict:
            file_sizes_dict[algo] = {"algorithm": algo}
        file_sizes_dict[algo][basename] = float(file_size)

    file_size_list = list(file_sizes_dict.values())
    save_file_sizes_to_json(file_size_list)


if __name__ == '__main__':
    main()
