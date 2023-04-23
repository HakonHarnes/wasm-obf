import os

from enum import Enum
from termcolor import colored
from mongodb.utils import add_document, get_file_out, get_unobfuscated_documents, get_failed_obfuscation_attempts

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


# If you changed this, you need to also change therequired_entries_count
# in mongodb/utils.py/get_unobfuscated_documents
transformations = [
    Transformations.RandomFuns.name,  # Random Functions / Bogus control flow
    Transformations.Flatten.name,  # Control Flow Flattening
    Transformations.Split.name,  # Split functions into smaller parts
    Transformations.EncodeLiterals.name,  # String and const encryption
    Transformations.EncodeArithmetic.name,
    Transformations.AntiTaintAnalysis.name,
    Transformations.AntiAliasAnalysis.name,
    Transformations.Virtualize.name,
]


def print_result(result):
    color = 'green' if result['code'] == 0 else 'red'
    if 'Exists' in result['desc']:
        color = 'white'
    for key, value in result.items():
        if not key == 'code' and not key == 'file_out':
            print(colored(value, color), end='\t')
    print()


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def handle_result(result, document, transformation):
    print_result(result)

    data = {
        'name': document['name'],
        'file': result.get('file_out'),  # empty if obfuscation failed
        'unobfuscated_file': document['file'],
        'category': document['category'],
        'transformation': transformation,
        'code': result['code'],
    }
    # add_document('tigress', data)


def run_emcc(document, transformation):
    path = os.path.join(dataset_path, document["category"], document["name"])

    # get emscripten output and check if it already exists
    emcc_out = get_file_out('tigress', document["name"], transformation)
    emcc_out_path = os.path.join(binary_path, emcc_out)

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
    log_file = emcc_out_path.replace('.html', '.emcc.log')
    os.makedirs(os.path.dirname(emcc_out_path), exist_ok=True)

    # run build script
    code = os.system(
        f'/bin/sh {script} {file_in} {emcc_out_path} > {log_file} 2>&1')

    # check output file size
    binary_out = emcc_out_path.replace('.html', '.wasm')
    if os.path.exists(emcc_out_path):
        binary_size = os.path.getsize(binary_out)
        if binary_size < 5:
            return {'desc': f'Build: {binary_out}', 'size': f'Size: {binary_size}', 'code': 1}

    return {'desc': f'Build: {binary_out}', 'file_out': binary_out, 'code': code}


def run_tigress(document, transformation):
    path = os.path.join(dataset_path, document["category"], document["name"])

    # get emscripten output and check if it already exists
    emcc_out = get_file_out('tigress', document["name"], transformation)
    emcc_out = os.path.join(binary_path, emcc_out)

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
    os.makedirs(os.path.dirname(emcc_out), exist_ok=True)

    # run tigress
    code = os.system(f'/bin/sh {script} > {log_file} 2>&1')

    # check output file size
    if os.path.exists(tigress_out):
        file_size = os.path.getsize(tigress_out)
        if file_size < 5:
            return {'desc': f'Obfuscate: {tigress_out}', 'size': f'Size: {file_size}', 'code': 1}

    return {'desc': f'Obfuscate: {path} {transformation}', 'code': code}


def obfuscate_document(document, transformation):
    transformation = transformation.lower()

    # run tigress (obfuscate)
    obf_result = run_tigress(document, transformation)
    if obf_result['code'] != 0:
        handle_result(obf_result, document, transformation)
        return
    else:
        print_result(obf_result)

    # run emcc (build)
    build_result = run_emcc(document, transformation)
    handle_result(build_result, document, transformation)
    return build_result['code']


def obfuscate_documents(documents):
    error_count = 0

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])

        # apply a single transformation
        if 'transformation' in document:
            code = obfuscate_document(document, document['transformation'])
            if code != 0:
                error_count += 1
            continue

        # apply all transformations
        for transformation in transformations:
            code = obfuscate_document(document, transformation)
            if code != 0:
                error_count += 1

    color = 'red' if error_count > 0 else 'green'
    print(colored(f'\nErrors: {error_count}', color))


def main():

    # obfuscate unobfuscated binaries
    unobfuscated_documents = get_unobfuscated_documents('tigress')
    if len(unobfuscated_documents) > 0:
        obfuscate_documents(unobfuscated_documents)

    # obfuscate failed obfuscation attempts
    failed_documents = get_failed_obfuscation_attempts('tigress')
    if len(failed_documents) > 0 and len(unobfuscated_documents) == 0:
        print('\nRetrying failed obfuscation attempts...')
        obfuscate_documents(failed_documents)

    # no binaires to obfuscate
    if len(unobfuscated_documents) == 0 and len(failed_documents) == 0:
        print('No binaries to obfuscate!')


if __name__ == '__main__':
    main()
