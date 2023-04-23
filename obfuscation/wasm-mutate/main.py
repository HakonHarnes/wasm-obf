import os
import shutil
import random
import subprocess


from termcolor import colored
from mongodb.utils import add_document, get_file_out, get_unobfuscated_documents


binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']

# If you changed this, you need to also change therequired_entries_count
# in mongodb/utils.py/get_unobfuscated_documents
iterations = 1000


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def print_mutation(iteration, max_iterations, code, seed, mutator):
    template = "{:<10} {:<4} {:<15} {}"
    output = template.format(
        f'[{iteration}/{max_iterations}]',
        code,
        seed,
        mutator
    )

    color = 'green' if code == 0 else 'red'
    print(colored(output, color))


def update_db(document, file, iteration, mutator, code):
    data = {
        'name': document['name'],
        'file': file,
        'unobfuscated_file': document['file'],
        'category': document['category'],
        'iteration': iteration,
        'mutator': mutator,
        'code': code
    }
    add_document('wasm-mutate', data)


def copy_files_to_output(file_in_path, file_out_path):
    file_in_dir = os.path.dirname(file_in_path)
    file_out_dir = os.path.dirname(file_out_path)

    for file in os.listdir(file_in_dir):
        file_in = os.path.join(file_in_dir, file)
        file_out = os.path.join(file_out_dir, file)
        shutil.copy(file_in, file_out)


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

        code, mutator = run_wasm_mutate(file_in_path, file_out_path, seed)
        print_mutation(iteration, max_iterations, code, seed, mutator)

        # mutate next file
        if code == 0 and mutator:
            copy_files_to_output(file_in_path, file_out_path)
            update_db(document, file_out, iteration, mutator, code)
            iteration += 1
            errors_in_a_row = 0
            file_in_path = file_out_path

        # retry with different seed
        else:
            errors_in_a_row += 1


def run_wasm_mutate(file_in, file_out, seed, timeout=10):
    cmd = f'wasm-tools mutate {file_in} --seed {seed} -o {file_out} -vv --preserve-semantics'
    process = subprocess.Popen(
        cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    code = None
    mutator = None

    try:
        output, _ = process.communicate(timeout=timeout)
        output = output.decode('utf-8')

        if 'DEBUG' in output:
            mutator = output.split('`')[1]

        process.wait()
        code = process.returncode
    except subprocess.TimeoutExpired:
        process.terminate()
        print("Timeout expired. Process terminated.")

    return code, mutator


def main():
    documents = get_unobfuscated_documents('wasm-mutate')
    if len(documents) == 0:
        print('No files to obfuscate.')
        return

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        mutate(document, iterations)


if __name__ == '__main__':
    main()
