from utils.file_utils import get_unanalyzed_binaries, get_metadata_filename, write_json
import subprocess
import os

dir_path = os.path.dirname(os.path.realpath(__file__))
binary_path = f'{dir_path}/binaries'
metadata_path = f'{dir_path}/data'


def run_miner_ray(file):
    print(file)
    command = f"timeout 2m node --expose-gc --max-old-space-size=8192 src/parser.js --file {file}"
    try:
        output = subprocess.check_output(
            command, shell=True, stderr=subprocess.STDOUT, timeout=120)
        print(output)
        return True
    except subprocess.CalledProcessError as e:
        print(f'Error: {e.output.decode("utf-8")}')
        return False
    except subprocess.TimeoutExpired:
        print('Error: Command timed out')
        return False


if __name__ == "__main__":
    binaries = get_unanalyzed_binaries(binary_path, metadata_path, "miner-ray")
    if not binaries:
        print("No binaries to analyze!")
        exit(0)

    for i, binary in enumerate(binaries):
        input_path = os.path.join(binary["path"], binary["filename"])
        print(f'Processing [{i}/{len(binaries)}] {input_path}')

        malicious = run_miner_ray(input_path)
        print(f'Malicious: {malicious}\n')

        metadata_filename = get_metadata_filename(
            binary["filename"], "miner-ray")
        output_path = os.path.join(metadata_path, metadata_filename)

        data = {
            "method": "miner-ray",
            "malicious": malicious,

            "input": {
                "path": binary["path"],
                "filename": binary["filename"]
            },
        }

        write_json(output_path, data)
