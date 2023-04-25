import os
import time
import json

from termcolor import colored
from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By
from mongodb.utils import update_document, get_unmeasured_miner_documents


miner_path = os.environ['MINER_PATH']
binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']

# hashing duration in seconds
hashing_duration = 10


def print_file(count, length, file, color='blue'):
    print(
        colored(f'\n[{count}/{length}] Processing {file}', color), flush=True)


def init_driver(domain):
    chrome_options = Options()
    chrome_options.add_argument('--headless')
    chrome_options.add_argument('--no-sandbox')
    chrome_options.add_argument("--disable-setuid-sandbox")

    driver = webdriver.Chrome(options=chrome_options)

    driver.get(domain)

    return driver


def measure_hash_rate(domain):
    driver = init_driver(domain)

    timeout = hashing_duration + 60  # Timeout after hashing duration + 10 seconds
    poll_interval = 2  # Poll every 2 seconds
    time_elapsed = 0
    data = ""

    while len(data) == 0 and time_elapsed < timeout:

        # Check for errors
        for entry in driver.get_log('browser'):
            print(colored(entry['message'], 'red'))
            if 'error' in entry['message'].lower():
                driver.quit()
                return {'error': entry['message']}

        # Check for data
        data = driver.find_element(By.ID, "data").text
        time.sleep(poll_interval)
        time_elapsed += poll_interval

    driver.quit()

    if len(data) == 0:
        return {'error': 'No data received'}

    return json.loads(data)


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
        f"sed -i 's|const stopTime = .*;|const stopTime = {hashing_duration * 1000};|g' {index_file}")


def calculate_actual_hash_rate(data):
    measuring_time = len(data['hashes'])
    return round(data['hashes'][-1] / measuring_time, 1)


def calculate_raw_hash_rate(data):
    measuring_time = len(data['hashes'])
    hashing_time = measuring_time - (data['tth'] / 1000)
    return round(data['hashes'][-1] / hashing_time, 1)


def print_error(data):
    print(colored(data['error'], 'red'))


def print_data(data):
    print(
        f"{colored('Actual hash rate:', 'green')} {data['actual_hash_rate']}")
    print(f"{colored('Raw hash rate:', 'green')} {data['raw_hash_rate']}")
    print(f"{colored('TTH:', 'green')} {data['tth']}")


def main():
    documents = get_unmeasured_miner_documents()
    if len(documents) == 0:
        print("No binaries to measure hash rate for!")
        exit(1)

    for i, document in enumerate(documents):
        algo = document['name']
        file = document['file']

        print_file(i + 1, len(documents), file)

        move_files_to_miner(file)
        modify_worker_file(file)
        modify_index_file(algo)

        data = measure_hash_rate('http://miner-client:8080/analysis')

        # Print error
        if data.get('error'):
            print(colored(data['error'], 'red'))

        # Calculate hash rates
        else:
            data['actual_hash_rate'] = calculate_actual_hash_rate(data)
            data['raw_hash_rate'] = calculate_raw_hash_rate(data)
            print_data(data)

        # Update db
        document.update({'hash_rate': data})
        update_document(document)


if __name__ == '__main__':
    main()
