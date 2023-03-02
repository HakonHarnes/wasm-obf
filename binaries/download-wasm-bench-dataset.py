# Downloads dataset from https://github.com/sola-st/WasmBench/releases/download/v1.0/filtered-binaries-metadata.7z

import os
import urllib.request

dir_path = os.path.dirname(os.path.realpath(__file__))


def show_progress(block_num, block_size, total_size):
    print(
        f'Downloading dataset: {round(block_num * block_size / total_size * 100, 1):.1f}%', end="\r")


if __name__ == "__main__":

    # create wasm-bench directory if it doesn't exist
    if not os.path.exists(f'{dir_path}/wasm-bench'):
        os.makedirs(f'{dir_path}/wasm-bench')

    # download the dataset
    urllib.request.urlretrieve(
        'https://github.com/sola-st/WasmBench/releases/download/v1.0/filtered-binaries-metadata.7z', f'{dir_path}/filtered-binaries-metadata.7z', show_progress)

    # uncompress the dataset
    print('Uncompressing dataset...')
    os.system(
        f'7z x {dir_path}/filtered-binaries-metadata.7z')

    # move binaries to binaries folder
    os.system(
        f'mv {dir_path}/filtered/* {dir_path}/wasm-bench')
    os.system(
        f'mv {dir_path}/filtered.pretty.json {dir_path}/wasm-bench/metadata.json')
    os.system('rm -rf filtered.list.txt filtered/')
