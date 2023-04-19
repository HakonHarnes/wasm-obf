import os

from termcolor import colored
from mongodb.utils import add_document, get_file_out, get_unobfuscated_documents

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


def run_emcc(document, transformation):
    path = os.path.join(dataset_path, document["category"], document["name"])

    # get emscripten output file
    file_out = get_file_out('llvm', document["name"], transformation["name"])
    file_out_path = os.path.join(binary_path, file_out)

    # get input file
    file_in = os.path.join(path, 'main.c')
    if not os.path.exists(file_in):
        return {'desc': f'Missing input: {file_in}', 'code': 1}

    # get build script
    script = os.path.join(path, 'build.sh')
    if not os.path.exists(script):
        return {'desc': f'Missing script: {script}', 'code': 1}

    # log file name
    log_file = file_out_path.replace('.html', '.emcc.log')
    os.makedirs(os.path.dirname(file_out_path), exist_ok=True)

    # run build script
    code = os.system(
        f'/bin/sh {script} {file_in} {file_out_path} {transformation["flags"]} > {log_file} 2>&1')

    # write data to db
    if code == 0:
        data = {
            'name': document['name'],
            'file': file_out.replace('html', 'wasm'),
            'unobfuscated_file': document['file'],
            'category': document['category'],
            'transformation': transformation['name'],
            'flags': transformation['flags'],
        }
        add_document('llvm', data)

    return {'desc': f'Build: {file_out}', 'code': code}


def main():
    errors = []

    documents = get_unobfuscated_documents('llvm')
    if len(documents) == 0:
        print('No files to obfuscate.')
        return

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        for transformation in transformations:
            result = run_emcc(document, transformation)
            print_result(result)
            if result['code'] != 0:
                errors.append(result)
                continue

    print(colored(f'\n{len(errors)} ERRORS', 'red'))
    for error in errors:
        print_result(error)


if __name__ == '__main__':
    main()
