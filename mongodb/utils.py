import os
import json
import glob

from pymongo import MongoClient
from termcolor import colored

mongodb_host = 'mongodb'
mongodb_port = '27017'

client = MongoClient(f"mongodb://{mongodb_host}:{mongodb_port}")
db = client['wasm-obf']


def upsert_metadata(dataset_path):
    collection = db['unobfuscated']

    # Use globbing to find all metadata.json files
    metadata_files = glob.glob(os.path.join(
        dataset_path, '**', 'metadata.json'), recursive=True)

    for metadata_path in metadata_files:
        with open(metadata_path, 'r') as file:
            metadata = json.load(file)

        # Insert or update metadata in MongoDB
        filter_ = {"file": metadata["file"]}
        update_ = {"$set": metadata}
        collection.update_one(filter_, update_, upsert=True)

    print(
        colored(f"Upserted metadata for {len(metadata_files)} files", "yellow"))


def get_data_in_collection(collection_name):
    collection = db[collection_name]
    data = list(collection.find({}, projection={'_id': 0}))
    return data


def upsert_entry(collection_name, filter_, data):
    collection = db[collection_name]
    update_ = {"$set": data}
    result = collection.update_one(filter_, update_, upsert=True)
    return result


def get_unobfuscated_files(obfuscation_method):
    unobfuscated_collection = db['unobfuscated']
    obfuscation_collection = db[obfuscation_method]

    # Get the list of unobfuscated_file values from the obfuscation_method collection
    obfuscated_files = list(obfuscation_collection.find(
        {}, projection={'_id': 0, 'unobfuscated_file': 1}))
    obfuscated_files_list = [file.get('unobfuscated_file') for file in obfuscated_files if file.get(
        'unobfuscated_file') is not None]

    # Find files in the 'unobfuscated' collection that are not in the obfuscated_files_list
    unobfuscated_documents = list(unobfuscated_collection.find(
        {'file': {'$nin': obfuscated_files_list}}, projection={'_id': 0}))

    # Extract the file names from the documents
    unobfuscated_files = [doc['file'] for doc in unobfuscated_documents]
    return unobfuscated_files
