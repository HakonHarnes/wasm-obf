import os
import sys
import json


def get_unanalyzed_binaries(dir_path, metadata_path, method):
    metadata_files = get_metadata_files(metadata_path)

    files = []
    for root, dirs, filenames in os.walk(dir_path):
        for filename in filenames:

            # check for .wasm extension
            if not filename.endswith(".wasm"):
                continue

            # check if the file has been analyzed
            if get_metadata_filename(filename, method) in metadata_files:
                continue

            files.append({"path": root, "filename": filename})

    return files


def get_metadata_filename(filename, method):
    return f".{filename.split('.')[0]}-{method}.json"


def get_metadata_files(metadata_path):
    metadata_files = []
    for root, dirs, filenames in os.walk(metadata_path):
        for filename in filenames:
            metadata_files.append(filename)

    return metadata_files


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
    count = 0

    for filename in os.listdir(dirpath):
        if keyword in filename and filename.startswith('.') and filename.endswith('.json'):
            filepath = os.path.join(dirpath, filename)
            if os.path.isfile(filepath):
                count += 1
                data.append(read_json(filepath))

    write_json(os.path.join(dirpath, outfile), data)
    print(f'{count} files merged into {outfile}')
