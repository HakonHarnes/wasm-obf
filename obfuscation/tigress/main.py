import os

from termcolor import colored

dir_path = os.path.dirname(os.path.realpath(__file__))

binary_path = f'{dir_path}/binaries/tigress'
dataset_path = f'{dir_path}/dataset'


transformations = ['Flatten', 'Virtualize']


def run_tigress(path, transformation):
    program_name = path.split('/')[-1]
    output_name = f'{program_name}-{transformation.lower()}-tigress'

    file_in = os.path.join(path, f'{program_name}.c')
    tigress_out = os.path.join(path, 'tigress', f'{output_name}.c')
    emscripten_out = os.path.join(binary_path, f'{output_name}.wasm')

    # don't do anything if binary already exists
    if os.path.exists(emscripten_out):
        return {'desc': f'Exists: {emscripten_out}', 'code': 0}

    # only build if tigress output exists to allow for manual fixes
    if os.path.exists(tigress_out):
        code = os.system(
            f'/bin/sh {path}/build.sh {tigress_out} {emscripten_out} >/dev/null 2>&1')
        return {'desc': f'Build: {output_name}', 'code': code}

    # obfuscate and build
    code = os.system(
        f'/bin/sh {path}/obfuscate.sh {file_in} {tigress_out} {emscripten_out} {transformation} >/dev/null 2>&1')
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
