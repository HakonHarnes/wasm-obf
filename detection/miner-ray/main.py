from utils.file_utils import get_unanalyzed_binaries, get_metadata_filename, write_json
import subprocess
import json
import os

dir_path = os.path.dirname(os.path.realpath(__file__))
binary_path = f'{dir_path}/binaries'
metadata_path = f'{dir_path}/data'


WAT_FILE = "module.wat"


def run_miner_ray(file):
    try:
        print('Converting to wat file')
        subprocess.check_output(f"wasm2wat {file} -o {WAT_FILE}", shell=True)
    except subprocess.CalledProcessError as e:
        print(f"Error: {e.output.decode('utf-8')}")
        return {'malicous': False, 'error': 'wasm2wat failed'}

    print('Running miner-ray')
    command = f'node --expose-gc --max-old-space-size=8192 src/parser.js --file {WAT_FILE}'
    try:
        output = subprocess.check_output(
            command, shell=True, stderr=subprocess.STDOUT, timeout=120).decode('utf-8')

        if 'error' in output.lower():
            return {'malicous': False, 'error': 'MinerRay failed'}

        output = json.loads(output)
        return {'malicous': len(output['certain']) > 0, 'error': None, 'output': output}
    except subprocess.CalledProcessError:
        return {'malicous': False, 'error': 'MinerRay failed'}
    except subprocess.TimeoutExpired:
        print("Error: Command timed out")
        return {'malicous': False, 'error': 'Timeout'}


if __name__ == "__main__":
    binaries = get_unanalyzed_binaries(binary_path, metadata_path, "miner-ray")
    if not binaries:
        print("No binaries to analyze!")
        exit(0)

    for i, binary in enumerate(binaries):
        input_path = os.path.join(binary["path"], binary["filename"])
        print(f'\nProcessing [{i}/{len(binaries)}] {input_path}')

        result = run_miner_ray(input_path)
        print(result)

        metadata_filename = get_metadata_filename(
            binary["filename"], "miner-ray")
        output_path = os.path.join(metadata_path, metadata_filename)

        data = {
            "method": "miner-ray",
            "malicious": result['malicous'],

            "input": {
                "path": binary["path"],
                "filename": binary["filename"]
            },
        }

        data.update(result)

        write_json(output_path, data)
