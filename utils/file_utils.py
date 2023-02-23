import os
import sys
import json


def get_unanalyzed_binaries(dir_path, method):
    files = []
    for root, dirs, filenames in os.walk(dir_path):
        for filename in filenames:

            # check for .wasm extension
            if not filename.endswith(".wasm"):
                continue

            # check if the file has been analyzed
            if get_metadata_filename(filename, method) in filenames:
                continue

            files.append({"path": root, "filename": filename})

    return files


def get_metadata_filename(filename, method):
    return f"{filename.split('.')[0]}-{method}.json"


def read_json(filepath):
    try:
        with open(filepath, 'r') as filepath:
            return json.load(filepath)
    except (FileNotFoundError, json.decoder.JSONDecodeError):
        print(f'File {filepath} not found', file=sys.stderr)
        sys.exit(1)


def write_json(filepath, data):
    with open(filepath, 'w') as file:
        json.dump(data, file, indent=4)


def merge_json(dirpath, outfile, keyword):
    data = []

    for filename in os.listdir(dirpath):
        if keyword in filename and filename.endswith(".json"):
            filepath = os.path.join(dirpath, filename)
            if os.path.isfile(filepath):
                data.append(read_json(filepath))

    write_json(os.path.join(dirpath, outfile), data)
