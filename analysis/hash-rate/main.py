import os
import time

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

    timeout = hashing_duration + 60  # timeout after hashing duration + 60 seconds
    poll_interval = 5  # poll every 5 seconds
    time_elapsed = 0
    hash_rate = ''

    while len(hash_rate) == 0 and time_elapsed < timeout:
        hash_rate_element = driver.find_element(By.ID, "avg-hash-rate")
        hash_rate = hash_rate_element.text
        time.sleep(poll_interval)
        time_elapsed += poll_interval

        for entry in driver.get_log('browser'):
            print(colored(entry['message'], 'red'))
            if 'error' in entry['message'].lower():
                driver.quit()
                return 0

    driver.quit()

    if len(hash_rate) == 0:
        return 0
    else:
        return float(hash_rate)


def move_files_to_miner(wasm_file):
    wasm_file = os.path.join(binary_path, wasm_file)
    js_file = wasm_file.replace(".wasm", ".js")
    os.system(f'cp {wasm_file} {miner_path}/src')
    os.system(f'cp {js_file} {miner_path}/src')


def modify_worker_file(wasm_file):
    import_file = wasm_file.replace(".wasm", ".js")
    worker_file = os.path.join(miner_path, 'src', 'worker.js')
    os.system(
        f"sed -i 's|importScripts([^)]*)|importScripts(\"{import_file}\")|g' \"{worker_file}\"")


def modify_index_file(algo):
    index_file = os.path.join(miner_path, 'index.html')
    os.system(
        f"sed -i 's|const algo = .*;|const algo = \"{algo}\";|g' {index_file}")
    os.system(
        f"sed -i 's|const stopTime = .*;|const stopTime = {hashing_duration * 1000};|g' {index_file}")


def main():
    documents = get_unmeasured_miner_documents()
    for i, document in enumerate(documents):
        algo = document['name']
        file = document['file']

        print_file(i + 1, len(documents), file)

        move_files_to_miner(file)
        modify_worker_file(file)
        modify_index_file(algo)

        hash_rate = measure_hash_rate('http://miner-client:8080/analysis')
        print(f'Hash rate: {hash_rate}', flush=True)

        document.update({'hash_rate': hash_rate})
        update_document(document)


if __name__ == '__main__':
    main()
