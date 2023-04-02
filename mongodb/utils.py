import os
import json
import glob

from pymongo import MongoClient
from termcolor import colored

mongodb_host = 'mongodb'
mongodb_port = '27017'

client = MongoClient(f"mongodb://{mongodb_host}:{mongodb_port}")
db = client['wasm-obf']


def update_metadata(dataset_path):
    collection = db['unobfuscated']

    metadata_files = glob.glob(os.path.join(
        dataset_path, '**', 'metadata.json'), recursive=True)

    for metadata_path in metadata_files:
        with open(metadata_path, 'r') as file:
            metadata = json.load(file)

        filter_ = {"file": metadata["file"]}
        update_ = {"$set": metadata}
        collection.update_one(filter_, update_, upsert=True)

    print(
        colored(f"Updated metadata for {len(metadata_files)} files", "yellow"))


def get_documents():
    documents = []
    for collection_name in ['unobfuscated', 'llvm', 'tigress']:
        collection = db[collection_name]
        documents.extend(list(collection.find()))
    return documents


def get_documents_in_collection(collection_name):
    collection = db[collection_name]
    documents = list(collection.find())
    return documents


def get_unobfuscated_documents(obfuscation_method):
    unobfuscated_collection = db['unobfuscated']
    obfuscation_collection = db[obfuscation_method]

    # Get the list of unobfuscated_file values from the obfuscation_method collection
    obfuscated_files = list(obfuscation_collection.find(
        {}, projection={'_id': 0, 'unobfuscated_file': 1}))
    obfuscated_files_list = [file.get('unobfuscated_file') for file in obfuscated_files if file.get(
        'unobfuscated_file') is not None]

    # Find files in the 'unobfuscated' collection that are not in the obfuscated_files_list
    unobfuscated_documents = list(unobfuscated_collection.find(
        {'file': {'$nin': obfuscated_files_list}}))

    return unobfuscated_documents


def get_unanalyzed_documents(analysis_method):
    unanalyzed_documents = []
    for collection_name in ['unobfuscated', 'llvm', 'tigress']:
        collection = db[collection_name]
        unanalyzed_documents.extend(
            list(collection.find({analysis_method: {'$exists': False}})))
    return unanalyzed_documents


def clear_field(field, collections=None):
    if collections is None:
        collections = ['unobfuscated', 'llvm', 'tigress']

    for collection_name in collections:
        collection = db[collection_name]
        result = collection.update_many({}, {"$unset": {field: ""}})
        print(colored(
            f"Removed field '{field}' from {result.modified_count} documents in the '{collection_name}' collection", "yellow"))


def add_document(collection_name, document):
    collection = db[collection_name]
    filter_ = {"file": document["file"]}
    result = collection.replace_one(filter_, document, upsert=True)
    return result


def update_document(data):
    result = None
    for collection_name in ['unobfuscated', 'llvm', 'tigress']:
        collection = db[collection_name]
        filter_ = {"_id": data["_id"]}
        update_ = {"$set": data}
        result = collection.update_one(filter_, update_)
    return result
