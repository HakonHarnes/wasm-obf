import json
import os

from enum import Enum
from termcolor import colored
from mongodb.utils import upsert_metadata, upsert_entry, get_data_in_collection, get_unobfuscated_files

binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


class Transformations(Enum):
    AddOpaque = 0
    AntiAliasAnalysis = 1
    AntiBranchAnalysis = 2
    AntiTaintAnalysis = 3
    Checksum = 4
    CheckEnvironment = 5
    CleanUp = 6
    Copy = 7
    EncodeArithmetic = 8
    EncodeData = 9
    EncodeExternal = 10
    EncodeLiterals = 11
    Flatten = 12
    Ident = 13
    Info = 14
    InitBranchFuns = 15
    InitCheckEnvironment = 16
    InitEncodeExternal = 17
    InitEntropy = 18
    InitImplicitFlow = 19
    InitOpaque = 20
    InitPlugins = 21
    InitTiming = 22
    Inline = 23
    Jit = 24
    JitDynamic = 25
    Leak = 26
    Measure = 27
    Merge = 28
    Optimize = 29
    RandomFuns = 30
    RndArgs = 31
    SelfModify = 32
    SoftwareMetrics = 33
    Split = 34
    UnitTest = 35
    UpdateEntropy = 36
    UpdateOpaque = 37
    Virtualize = 38


transformations = [
    Transformations.Flatten.name,
    Transformations.Virtualize.name,
    Transformations.AddOpaque.name,
    Transformations.Copy.name,
    Transformations.AntiTaintAnalysis.name,
    Transformations.AntiAliasAnalysis.name,
    Transformations.EncodeLiterals.name,
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
    binary_name = f'{program_name}-tigress-{transformation}.html'
    return os.path.join(binary_path, f'{binary_name}')


def run_emcc(file, transformation):
    path = os.path.join(dataset_path, file.replace('.wasm', ''))

    # get emscripten output file
    emcc_out = get_emcc_out(path, transformation)

    # get build script
    script = os.path.join(path, 'build.sh')
    if not os.path.exists(script):
        return {'desc': f'Missing script: {script}', 'code': 1}

    # input file
    file_in = os.path.join(path, 'tigress', f'{transformation}.c')
    if os.path.exists(file_in):
        file_size = os.path.getsize(file_in)
        if file_size < 5:
            return {'desc': f'Build: {file_in}', 'size': f'Size: {file_size}', 'code': 1}

    # log file
    log_file = emcc_out.replace('.html', '.emcc.log')

    # run build script
    code = os.system(
        f'/bin/sh {script} {file_in} {emcc_out} > {log_file} 2>&1')

    # check output file size
    binary_out = emcc_out.replace('.html', '.wasm')
    if os.path.exists(emcc_out):
        binary_size = os.path.getsize(binary_out)
        if binary_size < 5:
            return {'desc': f'Build: {binary_out}', 'size': f'Size: {binary_size}', 'code': 1}

    # write data to db
    if code == 0:
        data = {
            'file': os.path.basename(emcc_out.replace('html', 'wasm')),
            'unobfuscated_file': file,
            'transformation': transformation,
        }
        upsert_entry('tigress', {'file': os.path.basename(
            emcc_out), 'transformation': transformation}, data)

    return {'desc': f'Build: {path} {transformation}', 'code': code}


def run_tigress(file, transformation):
    path = os.path.join(dataset_path, file.replace('.wasm', ''))

    # get emscripten output and check if it already exists
    emcc_out = get_emcc_out(path, transformation)
    if os.path.exists(emcc_out):
        return {'desc': f'Exists: {emcc_out}', 'code': 0}

    # get tigress script
    script = os.path.join(path, 'tigress', f'{transformation}.sh')
    if not os.path.exists(script):
        return {'desc': f'Missing script: {script}', 'code': 1}

    # get tigress output and check if it exists
    tigress_out = script.replace('.sh', '.c')
    if os.path.exists(tigress_out):
        file_size = os.path.getsize(tigress_out)
        if file_size > 5:
            return {'desc': f'Exists: {tigress_out}', 'code': 0}

    # log file
    log_file = emcc_out.replace('.html', '.obf.log')

    # run tigress
    code = os.system(f'/bin/sh {script} > {log_file} 2>&1')

    # check output file size
    if os.path.exists(tigress_out):
        file_size = os.path.getsize(tigress_out)
        if file_size < 5:
            return {'desc': f'Obfuscate: {tigress_out}', 'size': f'Size: {file_size}', 'code': 1}

    return {'desc': f'Obfuscate: {path} {transformation}', 'code': code}


def main():
    errors = []

    files = get_unobfuscated_files('tigress')
    if len(files) == 0:
        print('No files to obfuscate.')
        return

    count = 0
    for file in files:
        count += 1
        print_file(count, len(files), file)
        for transformation in transformations:
            transformation = transformation.lower()
            obf_result = run_tigress(file, transformation)
            print_result(obf_result)
            if obf_result['code'] != 0:
                errors.append(obf_result)
                continue

            build_result = run_emcc(file, transformation)
            print_result(build_result)
            if build_result['code'] != 0:
                errors.append(build_result)

    print(colored(f'\n{len(errors)} errors', 'red'))
    for error in errors:
        print_result(error)


if __name__ == '__main__':
    main()
