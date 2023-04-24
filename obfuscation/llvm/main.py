import os

from termcolor import colored
from mongodb.utils import add_document, get_file_out, get_unobfuscated_documents, get_failed_obfuscation_attempts

binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


# If you changed this, you need to also change therequired_entries_count
# in mongodb/utils.py/get_unobfuscated_documents
transformations = [
    {'name': 'bcfobf', 'flags': '-mllvm -enable-bcfobf -mllvm -bcf_prob=30'},
    {'name': 'cffobf', 'flags': '-mllvm -enable-cffobf'},
    {'name': 'splitobf', 'flags': '-mllvm -enable-splitobf'},
    {'name': 'strcry', 'flags': '-mllvm -enable-strcry'},
    {'name': 'constenc', 'flags': '-mllvm -enable-constenc'},
    {'name': 'subobf', 'flags': '-mllvm -enable-subobf'},
    {'name': 'indibran', 'flags': '-mllvm -enable-indibran'},
    {'name': 'funcwra', 'flags': '-mllvm -enable-funcwra'},
]


def get_number_of_transformations():
    return len(transformations)


def print_result(result):
    color = 'green' if result['code'] == 0 else 'red'
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
        'file': result['file_out'],
        'unobfuscated_file': document['file'],
        'category': document['category'],
        'transformation': transformation['name'],
        'flags': transformation['flags'],
        'code': result['code'],
    }
    add_document('llvm', data)


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

    file_out = file_out.replace('html', 'wasm')

    return {'desc': f'Build: {file_out}', 'file_out': file_out, 'code': code}


def obfuscate_document(document, transformation):
    result = run_emcc(document, transformation)
    handle_result(result, document, transformation)
    return result['code']


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
    unobfuscated_documents = get_unobfuscated_documents('llvm')
    if len(unobfuscated_documents) > 0:
        obfuscate_documents(unobfuscated_documents)

    # obfuscate failed obfuscation attempts
    failed_documents = get_failed_obfuscation_attempts('llvm')
    if len(failed_documents) > 0:
        print('\nRetrying failed obfuscation attempts...')
        obfuscate_documents(failed_documents)

    # no binaires to obfuscate
    if len(unobfuscated_documents) == 0 and len(failed_documents) == 0:
        print('No binaries to obfuscate!')


if __name__ == '__main__':
    main()
