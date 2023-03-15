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


def run_tigress(path, transformation):
    program_name = path.split('/')[-1]
    output_name = f'{program_name}-{transformation.lower()}-tigress'

    file_in = os.path.join(path, f'{program_name}.c')
    tigress_out = os.path.join(path, 'tigress', f'{output_name}.c')
    emscripten_out = os.path.join(binary_path, f'{output_name}.html')

    # don't do anything if binary already exists
    if os.path.exists(emscripten_out):
        return {'desc': f'Exists: {emscripten_out}', 'code': 0}

    # only build if tigress output exists to allow for manual fixes
    if os.path.exists(tigress_out):
        code = os.system(
            f'/bin/sh {path}/build.sh {tigress_out} {emscripten_out} >/dev/null 2>&1')
        return {'desc': f'Build: {output_name}', 'code': code}

    # obfuscate and build
    print(file_in, tigress_out, emscripten_out, transformation)
    code = os.system(
        f'/bin/sh {path}/obfuscate.sh {file_in} {tigress_out} {emscripten_out} {transformation} ')
    return {'desc': f'Obfuscate: {output_name}', 'code': code}


def print_result(result):
    print(colored(result, 'red'))


if __name__ == '__main__':
    errors = []

    for dir in os.listdir(dataset_path):
        path = os.path.join(dataset_path, dir)
        for transformation in transformations:
            result = run_tigress(path, transformation)
            if result['code'] != 0:
                print(colored(result,  'red'))
                errors.append(result)
            else:
                print(colored(result,  'green'))

    print(f'\n --- {len(errors)} ERRORS --- \n')
    for error in errors:
        print(colored(error, 'red'))
