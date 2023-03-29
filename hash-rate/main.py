import os
import time
import glob
import json

from enum import Enum
from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By


dir_path = os.path.dirname(os.path.realpath(__file__))
binaries_path = os.path.join(dir_path, 'binaries')
cryptominer_path = os.path.join(dir_path, 'cryptominer')
data_path = os.path.join(dir_path, 'data')


class Algorithm(Enum):
    CN_RWZ = "cn-rwz"
    CN_R = "cn-r"
    CN_LITE_0 = "cn-lite-0"
    CN_LITE_1 = "cn-lite-1"
    CN_LITE_2 = "cn-lite-2"
    CN_PICO_TRTL = "cn-pico-trtl"
    CN_HALF = "cn-half"
    CN_0 = "cn-0"
    CN_1 = "cn-1"
    CN_2 = "cn-2"


def measure_hash_rate(domain, hashrate_file):
    chrome_options = Options()
    chrome_options.add_argument('--headless')
    chrome_options.add_argument('--no-sandbox')
    chrome_options.add_argument("--disable-setuid-sandbox")

    driver = webdriver.Chrome(options=chrome_options)

    driver.get(domain)

    hash_rate = ''
    poll_interval = 5  # poll every 5 seconds
    timeout = 510  # timeout after 510 seconds
    time_elapsed = 0

    while len(hash_rate) == 0 and time_elapsed < timeout:
        hash_rate_element = driver.find_element(By.ID, "avg-hash-rate")
        hash_rate = hash_rate_element.text
        time.sleep(poll_interval)
        time_elapsed += poll_interval

    driver.quit()

    if hash_rate == '':
        return -1

    return hash_rate.split(' ')[1]


def move_files_to_miner(wasm_file, js_file):
    os.system(f'cp {wasm_file} {cryptominer_path}/src')
    os.system(f'cp {js_file} {cryptominer_path}/src')


def get_cryptomining_files():
    wasm_files = sorted(glob.glob(f'{binaries_path}/*/cn*.wasm'))

    files = []
    for wasm_file in wasm_files:
        js_file = wasm_file.replace('.wasm', '.js')
        if not os.path.isfile(js_file):
            print(f'JavaScript file missing for {wasm_file}')
            continue
        files.append({'wasm': wasm_file, 'js': js_file})
    return files


def modify_worker_file(worker_file, import_file):
    os.system(
        f"sed -i 's/importScripts([^)]*)/importScripts(\"{import_file}\")/g' {worker_file}")


def modify_index_file(index_file, algo):
    os.system(
        f"sed -i 's/const algo = \"[^)]*\"/const algo = \"{algo}\"/g' {index_file}")


def get_mining_algorithm(wasm_file):
    for algo in Algorithm:
        if algo.value in wasm_file:
            return algo.value
    raise Exception(f'Algorithm not found for {wasm_file}')


def save_hash_rates_to_json_file(hash_rates_list):
    output_filename = "hashrates.json"
    output_filepath = os.path.join(data_path, output_filename)

    with open(output_filepath, "w") as output_file:
        json.dump(hash_rates_list, output_file, indent=4)


def main():
    files = get_cryptomining_files()

    count = 0

    hash_rates_dict = {}
    for file in files:
        count += 1
        print(f'[{count}/{len(files)}] {file["wasm"]}', flush=True)
        move_files_to_miner(file['wasm'], file['js'])

        worker_file = os.path.join(cryptominer_path, 'src', 'worker.js')
        import_file = os.path.basename(file['js'])
        modify_worker_file(worker_file, import_file)

        index_file = os.path.join(cryptominer_path, 'index.html')
        algo = get_mining_algorithm(file['wasm'])
        print(os.path.basename(file['wasm']), algo)
        modify_index_file(index_file, algo)

        basename = os.path.basename(file['wasm']).replace('.wasm', '')
        hashrate_file = os.path.join(data_path, f'{basename}-hashrate.txt')
        hash_rate = measure_hash_rate(
            'http://localhost:8080', hashrate_file)

        print(f'Hash rate: {hash_rate}', flush=True)

        if algo not in hash_rates_dict:
            hash_rates_dict[algo] = {"algorithm": algo}
        hash_rates_dict[algo][basename] = float(hash_rate)

    hash_rates_list = list(hash_rates_dict.values())
    save_hash_rates_to_json_file(hash_rates_list)


if __name__ == '__main__':
    main()
