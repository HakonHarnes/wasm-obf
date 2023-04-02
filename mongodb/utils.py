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


def clear_field(field, collections=None):
    if collections is None:
        collections = ['unobfuscated', 'llvm', 'tigress']

    for collection_name in collections:
        collection = db[collection_name]
        result = collection.update_many({}, {"$unset": {field: ""}})
        print(colored(
            f"Removed field '{field}' from {result.modified_count} documents in the '{collection_name}' collection", "yellow"))


def upsert_entry(collection_name, filter_, data):
    collection = db[collection_name]
    update_ = {"$set": data}
    result = collection.update_one(filter_, update_, upsert=True)
    return result


def update_entry(filter_, data):
    result = None
    for collection_name in ['unobfuscated', 'llvm', 'tigress']:
        collection = db[collection_name]
        update_ = {"$set": data}
        result = collection.update_one(filter_, update_)
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


def get_unanalyzed_files(analysis_method):
    unanalyzed_files = []

    # Iterate over the collections to be checked
    for collection_name in ['unobfuscated', 'llvm', 'tigress']:
        collection = db[collection_name]

        # Find documents that don't have the analysis_method field
        unanalyzed_documents = list(collection.find(
            {analysis_method: {'$exists': False}}, projection={'_id': 0}))

        # Extract the file names from the documents
        unanalyzed_files.extend([doc['file'] for doc in unanalyzed_documents])

    return unanalyzed_files


def get_all_files():
    files = []
    for collection_name in ['unobfuscated', 'llvm', 'tigress']:
        collection = db[collection_name]
        files.extend(list(collection.distinct('file')))
    return files


def get_all_entries():
    entries = []
    for collection_name in ['unobfuscated', 'llvm', 'tigress']:
        collection = db[collection_name]
        entries.extend(list(collection.find({}, projection={'_id': 0})))
    return entries
