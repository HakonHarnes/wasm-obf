import os

from termcolor import colored

dir_path = os.path.dirname(os.path.realpath(__file__))

binary_path = f'{dir_path}/binaries/llvm'
dataset_path = f'{dir_path}/dataset'

transformations = [
    '-mllvm -enable-bcfobf',
    '-mllvm -enable-cffobf',
    '-mllvm -enable-splitobf',
    '-mllvm -enable-strcry',
    '-mllvm -enable-constenc',
    '-mllvm -enable-subobf',
    '-mllvm -enable-indibran',
    '-mllvm -enable-funcwra',
    '-mllvm -enable-fco',
    '-mllvm -enable-acdobf',
    '-mllvm -enable-antihook',
    '-mllvm -enable-adb',
]


def get_emcc_out(path, transformation):
    program_name = path.split('/')[-1]
    transformation_name = ''.join(
        [x for x in transformation.split(' ') if x != '-mllvm'])
    binary_name = f'{program_name}-llvm{transformation_name}.html'
    return os.path.join(binary_path, f'{binary_name}')


def get_file_in(path, transformation):
    program_name = path.split('/')[-1]
    return os.path.join(path, f'{program_name}.c')


def run_emcc(path, transformation):

    # get emscripten output file
    emcc_out = get_emcc_out(path, transformation)
    if os.path.exists(emcc_out):
        return {'desc': f'Exists: {emcc_out}', 'code': 0}

    # get input file
    file_in = get_file_in(path, transformation)
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
        f'/bin/sh {script} {file_in} {emcc_out} {transformation} > {log_file} 2>&1')

    return {'desc': f'Build: {emcc_out}', 'code': code}


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
