import os
import random
import subprocess


from termcolor import colored
from mongodb.utils import add_document, get_file_out, get_unobfuscated_documents


binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def print_mutation(iteration, max_iterations, exit_code, seed, mutator):
    template = "{:<20} {:<10} {:<10} {}"
    output = template.format(
        f'[{iteration}/{max_iterations}]',
        exit_code,
        seed,
        mutator
    )

    color = 'green' if exit_code == 0 else 'red'
    print(colored(output, color))


def update_db(document, file, iteration, mutator):
    data = {
        'file': file,
        'unobfuscated_file': document['file'],
        'category': document['category'],
        'iteration': iteration,
        'mutator': mutator,
    }
    add_document('wasm-mutate', data)


def mutate(document, max_iterations):
    file_in_path = os.path.join(binary_path, document['file'])

    iteration = 1
    errors_in_a_row = 0
    while iteration <= max_iterations and errors_in_a_row < 20:
        seed = random.randint(0, 2**32 - 1)

        file_out = get_file_out(
            'wasm-mutate', document["name"], iteration=iteration)
        file_out_path = os.path.join(binary_path, file_out)

        os.makedirs(os.path.dirname(file_out_path), exist_ok=True)

        exit_code, mutator = run_wasm_mutate(file_in_path, file_out_path, seed)
        print_mutation(iteration, max_iterations, exit_code, seed, mutator)

        # mutate next file
        if exit_code == 0 and mutator:
            update_db(document, file_out, iteration, mutator)
            iteration += 1
            errors_in_a_row = 0
            file_in_path = file_out_path

        # retry with different seed
        else:
            errors_in_a_row += 1


def run_wasm_mutate(file_in, file_out, seed, timeout=10):
    cmd = f'wasm-tools mutate {file_in} --seed {seed} -o {file_out} -vv'
    process = subprocess.Popen(
        cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    exit_code = None
    mutator = None

    try:
        output, _ = process.communicate(timeout=timeout)
        output = output.decode('utf-8')

        if 'DEBUG' in output:
            mutator = output.split('`')[1]

        process.wait()
        exit_code = process.returncode
    except subprocess.TimeoutExpired:
        process.terminate()
        print("Timeout expired. Process terminated.")

    return exit_code, mutator


def main():
    documents = get_unobfuscated_documents('wasm-mutate')
    if len(documents) == 0:
        print('No files to obfuscate.')
        return

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        mutate(document, 100)


if __name__ == '__main__':
    main()
