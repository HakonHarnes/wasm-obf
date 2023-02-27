import os

from utils.file_utils import merge_json
from scripts.cosine_similarity import calculate_cosine_similarity

dir_path = os.path.dirname(os.path.realpath(__file__))

metadata_path = f'{dir_path}/data'


def preprocess():
    print('\n-------------')
    print('Preprocessing')
    print('-------------\n')

    print('-- Merging files --')
    merge_json(metadata_path, f'{metadata_path}/minos.json', 'minos')
    merge_json(metadata_path, f'{metadata_path}/virustotal.json', 'virustotal')


def analyze():
    print('\n---------')
    print('Analyzing')
    print('---------\n')

    similarity = calculate_cosine_similarity(
        "./binaries/original/mutated.wasm",
        "./binaries/original/original-miner.wasm", 8)

    print(similarity)


def plot():
    print('\n--------')
    print('Plotting')
    print('--------\n')


if __name__ == '__main__':
    preprocess()
    analyze()
    plot()
