import os
import json

from termcolor import colored
from mongodb.utils import upsert_metadata, upsert_entry, get_data_in_collection, get_unobfuscated_files

binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


transformations = [
    {'name': 'bcfobf', 'flags': '-mllvm -enable-bcfobf'},
    {'name': 'cffobf', 'flags': '-mllvm -enable-cffobf'},
    {'name': 'splitobf', 'flags': '-mllvm -enable-splitobf'},
    {'name': 'strcry', 'flags': '-mllvm -enable-strcry'},
    {'name': 'constenc', 'flags': '-mllvm -enable-constenc'},
    {'name': 'subobf', 'flags': '-mllvm -enable-subobf'},
    {'name': 'indibran', 'flags': '-mllvm -enable-indibran'},
    {'name': 'funcwra', 'flags': '-mllvm -enable-funcwra'},
    {'name': 'fco', 'flags': '-mllvm -enable-fco'},
    {'name': 'acdobf', 'flags': '-mllvm -enable-acdobf'},
    {'name': 'antihook', 'flags': '-mllvm -enable-antihook'},
    {'name': 'adb', 'flags': '-mllvm -enable-adb'},
]


def print_result(result):
    color = 'green' if result['code'] == 0 else 'red'
    for key, value in result.items():
        if not key == 'code':
            print(colored(value, color), end='\t')
    print()


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def get_emcc_out(path, transformation):
    program_name = path.split('/')[-1]
    binary_name = f'{program_name}-llvm-{transformation["name"]}.html'
    return os.path.join(binary_path, f'{binary_name}')


def get_file_in(path):
    program_name = path.split('/')[-1]
    return os.path.join(path, f'{program_name}.c')


def run_emcc(file, transformation):
    path = os.path.join(dataset_path, file.replace('.wasm', ''))

    # get emscripten output file
    emcc_out = get_emcc_out(path, transformation)

    # get input file
    file_in = get_file_in(path)
    if not os.path.exists(file_in):
        return {'desc': f'Missing input: {file_in}', 'code': 1}

    # get build script
    script = os.path.join(path, 'build.sh')
    if not os.path.exists(script):
        return {'desc': f'Missing script: {script}', 'code': 1}

    # log file name
    log_file = emcc_out.replace('.html', '.emcc.log')

    # run build script
    code = os.system(
        f'/bin/sh {script} {file_in} {emcc_out} {transformation["flags"]} > {log_file} 2>&1')

    # write data to db
    data = {
        'file': os.path.basename(emcc_out.replace('html', 'wasm')),
        'unobfuscated_file': file,
        'transformation': transformation['name'],
        'flags': transformation['flags'],
        'code': code,
        'log_file': log_file
    }

    upsert_entry('llvm', {'file': os.path.basename(
        emcc_out), 'transformation': transformation['name']}, data)

    return {'desc': f'Build: {emcc_out}', 'code': code}


def main():
    errors = []

    files = get_unobfuscated_files('llvm')
    if len(files) == 0:
        print('No files to obfuscate.')
        return

    count = 0
    for file in files:
        count += 1
        print_file(count, len(files), file)
        for transformation in transformations:
            result = run_emcc(file, transformation)
            print_result(result)
            if result['code'] != 0:
                errors.append(result)
                continue

    print(colored(f'\n{len(errors)} ERRORS', 'red'))
    for error in errors:
        print_result(error)


if __name__ == '__main__':
    main()
