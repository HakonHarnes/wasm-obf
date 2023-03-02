from utils.file_utils import get_unanalyzed_binaries, get_metadata_filename, write_json

import os

dir_path = os.path.dirname(os.path.realpath(__file__))

binary_path = f'{dir_path}/binaries'
metadata_path = f'{dir_path}/data'


def run_miner_ray(file):
    status = os.system(
        f"node --expose-gc --max-old-space-size=8192 Parser/parser.js --file test.wat")

    return True


if __name__ == "__main__":

    binaries = get_unanalyzed_binaries(binary_path, metadata_path, "miner-ray")
    if not binaries:
        print("No binaries to analyze!")
        exit(0)

    for binary in binaries:
        input_path = os.path.join(binary["path"], binary["filename"])
        print(f'Processing {input_path}...')

        result = run_miner_ray(input_path)

        break

        metadata_filename = get_metadata_filename(binary["filename"], "minos")
        output_path = os.path.join(metadata_path, metadata_filename)

        data = {
            "method": "minos",
            "malicious": True,

            "input": {
                "path": binary["path"],
                "filename": binary["filename"]
            },
        }

        write_json(output_path, data)
