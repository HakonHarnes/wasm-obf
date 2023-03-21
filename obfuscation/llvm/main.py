import os

from termcolor import colored

dir_path = os.path.dirname(os.path.realpath(__file__))

binary_path = f'{dir_path}/binaries/llvm'
dataset_path = f'{dir_path}/dataset'

transformations = [
    {'desc': 'bcfobf', 'flags': '-mllvm -enable-bcfobf'},
    {'desc': 'cffobf', 'flags': '-mllvm -enable-cffobf'},
    {'desc': 'splitobf', 'flags': '-mllvm -enable-splitobf'},
    {'desc': 'strcry', 'flags': '-mllvm -enable-strcry'},
    {'desc': 'constenc', 'flags': '-mllvm -enable-constenc'},
    {'desc': 'subobf', 'flags': '-mllvm -enable-subobf'},
    {'desc': 'indibran', 'flags': '-mllvm -enable-indibran'},
    {'desc': 'funcwra', 'flags': '-mllvm -enable-funcwra'},
    {'desc': 'fco', 'flags': '-mllvm -enable-fco'},
    {'desc': 'acdobf', 'flags': '-mllvm -enable-acdobf'},
    {'desc': 'antihook', 'flags': '-mllvm -enable-antihook'},
    {'desc': 'adb', 'flags': '-mllvm -enable-adb'},
]


def get_emcc_out(path, transformation):
    program_name = path.split('/')[-1]
    binary_name = f'{program_name}-{transformation}-llvm.html'
    return os.path.join(binary_path, f'{binary_name}')


def get_file_in(path, transformation):
    program_name = path.split('/')[-1]
    return os.path.join(path, f'{program_name}.c')


def run_emcc(path, transformation):
    emcc_out = get_emcc_out(path, transformation['desc'])
    if os.path.exists(emcc_out):
        return {'desc': f'Exists: {emcc_out}', 'code': 0}

    file_in = get_file_in(path, transformation['desc'])
    if not os.path.exists(file_in):
        return {'desc': f'Missing input: {file_in}', 'code': 1}

    script = os.path.join(path, 'build.sh')
    if not os.path.exists(script):
        return {'desc': f'Missing script: {script}', 'code': 1}

    code = os.system(
        f'/bin/sh {script} {file_in} {emcc_out} {transformation["flags"]} >/dev/null 2>&1')

    return {'desc': f'Build: {emcc_out} {transformation["flags"]}', 'code': code}


def main():
    errors = []

    for dir in os.listdir(dataset_path):
        path = os.path.join(dataset_path, dir)
        for transformation in transformations:
            result = run_emcc(path, transformation)
            if result['code'] != 0:
                print(colored(result,  'red'))
                errors.append(result)
                continue
            print(colored(result,  'green'))

    print(f'\n --- {len(errors)} ERRORS --- \n')
    for error in errors:
        print(colored(error, 'red'))


if __name__ == '__main__':
    main()
