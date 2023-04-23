import os
import time
import requests


from mongodb.utils import get_unanalyzed_documents, update_document
from termcolor import colored


binary_path = os.environ['BINARY_PATH']
dataset_path = os.environ['DATASET_PATH']


def print_result(result):
    for key, val in result.items():
        if key == "code":
            continue
        color = "red" if key == "Cryptominer" else "green"
        print(colored("{0:<30} {1:.10f}".format(key, val), color))


def print_error(result):
    print(colored(f'Error: {result}', 'red'))


def print_file(count, length, file, color='blue'):
    print(colored(f'\n[{count}/{length}] Processing {file}', color))


def print_classifier(classifier):
    print(colored(f'\nClassifier: {classifier}', 'yellow'))


def update_db(document, data):
    document.update({
        'wasim': {
            'result': data
        }
    })
    update_document(document)


def run_wasim(wasm_binary_path, classifierType='neural'):
    url = 'http://wasim_web:4000/uploadFile'
    file_data = open(wasm_binary_path, 'rb')

    files = {'wasm-file': (wasm_binary_path, file_data,
                           'application/octet-stream')}
    data = {'action': 'upload', 'classifierType': classifierType}

    response = requests.post(url, files=files, data=data)
    file_data.close()

    if response.status_code != 200:
        return {'code': response.status_code, 'text': response.text}

    response_json = response.json()
    labels_list = response_json['fileResults'][0]['labels']
    labels_dict = {label: score for label, score in labels_list}
    labels_dict['code'] = response.status_code

    return labels_dict


def main():
    documents = get_unanalyzed_documents('wasim')
    if len(documents) == 0:
        print("No binaries to analyze.")
        return

    delay = 5
    print(
        f"Sleeping for {delay} seconds to allow wasim containers to start...")
    time.sleep(delay)

    classifiers = ['neural', 'random', 'svm', 'naive']
    for i, document in enumerate(documents):
        print_file(i + 1, len(documents), document['file'])
        file = os.path.join(binary_path, document['file'])

        data = {}
        for classifier in classifiers:
            print_classifier(classifier)
            result = run_wasim(file, classifier)
            if result['code'] == 200:
                print_result(result)
            else:
                print_error(result)
            data[classifier] = result

        update_db(document, data)


if __name__ == '__main__':
    main()
