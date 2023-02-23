import json
import shutil
import datetime


def create_backup_file(file):
    backup_file = f".{file.name.split('.')[0]}-{datetime.datetime.now().strftime('%Y%m%d-%H%M%S')}.json"
    shutil.copy(file.name, backup_file)


def read_file(file):
    try:
        with open(file, 'r') as file:
            data = json.load(file)
            if data and len(data) > 0:
                create_backup_file(file)
                return data
            else:
                return []
    except (FileNotFoundError, json.decoder.JSONDecodeError):
        return []


def write_file(file, data):
    with open(file, 'w') as file:
        json.dump(data, file, indent=4)
        file.write('\n')


def get_files_in_folder():
    pass


def remove_duplicate_files():
    pass
