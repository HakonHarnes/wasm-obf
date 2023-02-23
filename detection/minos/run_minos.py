from utils.file_utils import get_unanalyzed_binaries, get_metadata_filename, write_json

import os

dir_path = os.path.dirname(os.path.realpath(__file__))


def run_minos(file):
    status = os.system(f"python src/minio.py {file} >/dev/null 2>&1")
    malicious = status != 0

    return malicious


if __name__ == "__main__":

    binaries = get_unanalyzed_binaries(f'{dir_path}/binaries', "minos")
    if not binaries:
        print("No binaries to analyze")
        exit(0)

    for binary in binaries:
        input_path = os.path.join(binary["path"], binary["filename"])
        print(f'Processing {input_path}...')

        malicious = run_minos(input_path)
        print(f'Malicious: {malicious}\n')

        metadata_filename = get_metadata_filename(binary["filename"], "minos")
        output_path = os.path.join(binary["path"], metadata_filename)

        data = {
            "method": "minos",
            "malicious": malicious,

            "input": {
                "path": binary["path"],
                "filename": binary["filename"]
            },
        }

        write_json(output_path, data)
