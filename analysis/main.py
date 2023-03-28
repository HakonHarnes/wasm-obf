import os

from utils.file_utils import merge_json
from scripts.dtw import calculate_dtw_for_binaries

dir_path = os.path.dirname(os.path.realpath(__file__))

metadata_path = f'{dir_path}/data'


def calculate_metrics():
    print('\n-----------------')
    print('Calculating metrics')
    print('-----------------\n')

    print('-- Calculating DTW --')
    # calculate_dtw_for_binaries()


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


def plot():
    print('\n--------')
    print('Plotting')
    print('--------\n')


def main():
    calculate_metrics()
    preprocess()
    analyze()
    plot()


if __name__ == '__main__':
    main()
