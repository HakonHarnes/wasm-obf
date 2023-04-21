import os

from mongodb.utils import add_document, get_file_out
from termcolor import colored


binary_path = os.environ['BINARY_PATH']


def print_folder(folder, count):
    print(colored(f'Building {count} programs in {folder}', 'yellow'))


def print_build(name):
    print(colored(f'Building {name}', 'blue'))


def print_error(error):
    print(colored(error, 'red'))


def print_result(code, name):
    color = 'green' if code == 0 else 'red'
    print(f'Exit code: {colored(code, color)}\n')


def build_wasm(dir_path, folder):
    name = os.path.basename(dir_path)

    build_script = os.path.join(dir_path, 'build.sh')
    if not os.path.exists(build_script):
        print_error(f'No build script found in {dir_path}')
        exit(1)

    source_file = os.path.join(dir_path, 'main.c')
    if not os.path.exists(source_file):
        print_error(f'No source file found in {dir_path}')
        exit(1)

    file_out = get_file_out('unobfuscated', name)
    file_out_path = os.path.join(binary_path, file_out)

    log_file = file_out_path.replace('.wasm', '.emcc.log')

    os.makedirs(os.path.dirname(file_out_path), exist_ok=True)
    code = os.system(
        f'/bin/sh {build_script} {source_file} {file_out_path} > {log_file} 2>&1')

    if code == 0:
        data = {
            'name': name,
            'file': file_out.replace('html', 'wasm'),
            'category': folder,
            'code': code
        }
        add_document('unobfuscated', data)

    return code


def main():
    errors = []

    folders = ['utilities', 'games', 'miners']
    for folder in folders:
        print_folder(folder, len(os.listdir(folder)))
        for dir_name in os.listdir(folder):
            print_build(dir_name)
            dir_path = os.path.join(folder, dir_name)
            code = build_wasm(dir_path, folder)
            print_result(code, dir_name)
            if code != 0:
                errors.append(dir_name)

    color = 'green' if len(errors) == 0 else 'red'
    print(colored(f'Errors: {len(errors)}', color))
    for error in errors:
        print_error(error)


if __name__ == '__main__':
    main()
