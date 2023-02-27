import os

from utils.file_utils import merge_json
from scripts.cosine_similarity import cosine_similarity

dir_path = os.path.dirname(os.path.realpath(__file__))

metadata_path = f'{dir_path}/data'


if __name__ == '__main__':
    print('Preprocessing...')

    merge_json(metadata_path, f'{metadata_path}/minos.json', 'minos')
    merge_json(metadata_path, f'{metadata_path}/virustotal.json', 'virustotal')
