from enum import Enum
import os

from termcolor import colored

dir_path = os.path.dirname(os.path.realpath(__file__))

binary_path = f'{dir_path}/binaries/tigress'
dataset_path = f'{dir_path}/dataset'


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


def get_emcc_out(path, transformation):
    program_name = path.split('/')[-1]
    binary_name = f'{program_name}-{transformation}-tigress.html'
    return os.path.join(binary_path, f'{binary_name}')


def build_binary(path, transformation):
    emcc_out = get_emcc_out(path, transformation)
    if os.path.exists(emcc_out):
        return {'desc': f'Exists: {emcc_out}', 'code': 0}

    script = os.path.join(path, 'build.sh')
    if not os.path.exists(script):
        return {'desc': f'Missing script: {script}', 'code': 1}

    file_in = os.path.join(path, 'tigress', f'{transformation}.c')

    code = os.system(f'/bin/sh {script} {file_in} {emcc_out} >/dev/null 2>&1')

    if os.path.exists(emcc_out):
        binary_out = emcc_out.replace('.html', '.wasm')
        binary_size = os.path.getsize(binary_out)
        if binary_size < 5:
            return {'desc': f'Build: {binary_out}', 'size': binary_size, 'code': 1}

    return {'desc': f'Build: {path} {transformation}', 'code': code}


def run_tigress(path, transformation):
    emcc_out = get_emcc_out(path, transformation)
    if os.path.exists(emcc_out):
        return {'desc': f'Exists: {emcc_out}', 'code': 0}

    script = os.path.join(path, 'tigress', f'{transformation}.sh')
    if not os.path.exists(script):
        return {'desc': f'Missing script: {script}', 'code': 1}

    code = os.system(f'/bin/sh {script} >/dev/null 2>&1')

    file_out = script.replace('.sh', '.c')
    if os.path.exists(file_out):
        file_size = os.path.getsize(file_out)
        if file_size < 5:
            return {'desc': f'Obfuscate: {file_out}', 'size': file_size, 'code': 1}

    return {'desc': f'Obfuscate: {path} {transformation}', 'code': code}


def main():
    errors = []

    for dir in os.listdir(dataset_path):
        path = os.path.join(dataset_path, dir)
        for transformation in transformations:
            transformation = transformation.lower()
            obf_result = run_tigress(path, transformation)
            if obf_result['code'] != 0:
                print(colored(obf_result,  'red'))
                errors.append(obf_result)
                continue

            build_result = build_binary(path, transformation)
            if build_result['code'] != 0:
                print(colored(build_result,  'red'))
                errors.append(build_result)
                continue

            print(colored(build_result,  'green'))

    print(f'\n --- {len(errors)} ERRORS --- \n')
    for error in errors:
        print(colored(error, 'red'))


if __name__ == '__main__':
    main()
