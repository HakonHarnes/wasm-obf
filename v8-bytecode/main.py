import signal
import os
import time
import signal
import subprocess

from termcolor import colored
from mongodb.utils import update_document, get_documents_without_bytecode

miner_path = os.environ['MINER_PATH']
binary_path = os.environ['BINARY_PATH']

# How long to capture bytecode for
website_timeout = 50


def print_file(count, length, file, color='blue'):
    print(
        colored(f'\n[{count}/{length}] Processing {file}', color), flush=True)


def launch_chrome(domain, bytecode_file, screenshot_file):

    # Take screenshot
    os.system(
        (
            "google-chrome-stable "
            "--no-sandbox "
            "--headless "
            "--disable-gpu "
            "--window-size=1920x1080 "
            f"--screenshot={screenshot_file} "
            f"{domain} "
            "& sleep 5 "
            "&& pkill chrome"
        )
    )

    print(colored('Captured screenshot', 'green'), flush=True)

    # Extract bytecode
    os.system(
        (
            "google-chrome-stable "
            "--no-sandbox "
            '--js-flags="--print-bytecode" '
            f"--app={domain} "
            f"&>>{bytecode_file} "
            f"& sleep {website_timeout} "
            "&& pkill chrome"
        )
    )

    print(colored('Extracted bytecode', 'green'), flush=True)


def move_files_to_miner(wasm_file):
    wasm_file = os.path.join(binary_path, wasm_file)
    js_file = wasm_file.replace(".wasm", ".js")
    os.system(f'cp {wasm_file} {miner_path}/src')
    os.system(f'cp {js_file} {miner_path}/src')


def modify_worker_file(wasm_file):
    import_file = wasm_file.replace(".wasm", ".js")
    import_file = os.path.basename(import_file)
    worker_file = os.path.join(miner_path, 'src', 'worker.js')
    os.system(
        f"sed -i 's|importScripts([^)]*)|importScripts(\"{import_file}\")|g' \"{worker_file}\"")


def modify_index_file(algo):
    index_file = os.path.join(miner_path, 'index.html')
    os.system(
        f"sed -i 's|const algo = .*;|const algo = \"{algo}\";|g' {index_file}")
    os.system(
        f"sed -i 's|const stopTime = .*;|const stopTime = {website_timeout * 1000};|g' {index_file}")


def extract_bytecode(document):
    domain = 'http://google.com'
    output_file = os.path.join(
        binary_path, document['file'].replace('.wasm', '.v8'))
    screenshot_file = os.path.join(
        binary_path, document['file'].replace('.wasm', '.png'))

    if document['category'] == 'miners':
        algo = document['name']
        file = document['file']

        move_files_to_miner(file)
        modify_worker_file(file)
        modify_index_file(algo)

        domain = 'http://miner-client:8080/analysis'

    launch_chrome(domain, output_file, screenshot_file)


def main():
    documents = get_documents_without_bytecode()
    print(
        colored(f'Extracting bytecode for {len(documents)} binaries', 'yellow'))

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        if document['category'] != 'miners':
            continue
        extract_bytecode(document)
        break


if __name__ == '__main__':
    main()
