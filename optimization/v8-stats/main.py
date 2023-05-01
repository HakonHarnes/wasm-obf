import os

from mongodb.utils import update_document, get_documents_without_v8_stats
from termcolor import colored

miner_path = os.environ['MINER_PATH']
binary_path = os.environ['BINARY_PATH']

# How long to capture v8 data for
website_timeout = 60


def print_file(count, length, file, color='blue'):
    print(
        colored(f'\n[{count}/{length}] Processing {file}', color), flush=True)


def handle_result(document, data):
    if 'error' in data:
        print(colored(data['error'], 'red'), flush=True)
    else:
        print(
            f"{colored('Liftoff:', 'green')} {data['liftoff_size']}", flush=True)
        print(
            f"{colored('TurboFan:', 'green')} {data['turbofan_size']}", flush=True)

    document.update({'v8': data})
    update_document(document)


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


def get_url(document):
    if document['category'] == 'miners':
        return f'http://miner-client:8080/analysis'

    html_file = document['file'].replace('.wasm', '.html')
    html_file = html_file.replace('/app/binaries/', '')
    return f'http://localhost:8080/binaries/{html_file}'


def get_index(entry):
    index = None
    try:
        index = int(entry.split('index: ')[1].split('\n')[0].strip())
    except:
        pass
    try:
        index = int(entry.split('index: ')[1].split('\n')[1].strip())
    except:
        pass

    return index


def get_liftoff_size(data):

    function_sizes = {}
    for entry in data:
        if 'Liftoff' not in entry:
            continue

        index = get_index(entry)
        if index is None:
            continue
        size = int(entry.split('size = ')[2].split(',')[0].strip())
        if index in function_sizes:
            if function_sizes[index] > size:
                function_sizes[index] = size
        else:
            function_sizes[index] = size

    liftoff_size = 0
    for size in function_sizes.values():
        liftoff_size += size

    return liftoff_size


def get_turbofan_size(data):
    function_sizes = {}
    for entry in data:
        if 'Liftoff' not in entry and 'TurboFan' not in entry:
            continue

        index = get_index(entry)
        if index is None:
            continue
        size = int(entry.split('size = ')[2].split(',')[0].strip())
        if index in function_sizes:
            if function_sizes[index] > size:
                function_sizes[index] = size
        else:
            function_sizes[index] = size

    turbofan_size = 0
    for size in function_sizes.values():
        turbofan_size += size

    return turbofan_size


def extract_data(v8_file):
    file_data = None
    with open(v8_file, 'r') as f:
        file_data = f.read()
        f.close()

    if file_data is None:
        return {
            'file': v8_file,
            'error': 'Could not read v8 file'
        }

    # Calculate liftoff and turbofan sizes (before and after optimization)
    file_data = file_data.split('--- WebAssembly code ---')[1:-1]
    liftoff_size = get_liftoff_size(file_data)
    turbofan_size = get_turbofan_size(file_data)

    return {
        'file': v8_file,
        'liftoff_size': liftoff_size,
        'turbofan_size': turbofan_size
    }


def get_v8_stats(document):
    v8_file = os.path.join(
        binary_path, document['file'].replace('.wasm', '.v8'))

    # Create the v8 file if it doesn't exist
    if not os.path.exists(v8_file):
        with open(v8_file, "w"):
            pass  # Do nothing, just create the file

    if document['category'] == 'miners':
        algo = document['name']
        file = document['file']

        move_files_to_miner(file)
        modify_worker_file(file)
        modify_index_file(algo)

    url = get_url(document)

    try:
        os.system(
            (
                "chromium-browser "
                "--no-sandbox "
                "--disable-gpu "
                "--disable-software-rasterizer "
                "--disable-logging "
                "--log-level=3 "
                '--js-flags="--print-wasm-code" '
                f"--app={url} "
                f">{v8_file} 2>&1 "
                f"& sleep {website_timeout} "
                "&& pkill chromium"
            )
        )
    except Exception as error:
        print(error)

    return v8_file


def main():
    documents = get_documents_without_v8_stats()
    if len(documents) == 0:
        print('No documents to get v8 stats for.')
        exit(0)

    print(
        colored(f'Extracting bytecode for {len(documents)} binaries', 'yellow'))

    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        v8_file = get_v8_stats(document)
        data = extract_data(v8_file)
        handle_result(document, data)


if __name__ == '__main__':
    main()
