import os

from pymongo import MongoClient
from termcolor import colored

mongodb_host = 'mongodb'
mongodb_port = '27017'

client = MongoClient(f"mongodb://{mongodb_host}:{mongodb_port}")
db = client['wasm-obf']


def get_file_out(collection_name, name, transformation=None, iteration=None):
    ext = 'html' if collection_name != 'wasm-mutate' else 'wasm'
    return os.path.join(name,
                        collection_name,
                        transformation if transformation else '',
                        f'iteration-{iteration}' if iteration else '',
                        f'{name}.{ext}')


def get_documents():
    documents = []
    for collection_name in ['unobfuscated', 'llvm', 'tigress', 'wasm-mutate']:
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

    required_entries_count = {'llvm': 8, 'tigress': 2, 'wasm-mutate': 100}

    # Get the count of unobfuscated_file values for each file in the obfuscation_method collection
    obfuscated_files_counts = obfuscation_collection.aggregate([
        {'$group': {'_id': '$unobfuscated_file', 'count': {'$sum': 1}}},
    ])

    # Create a dictionary with unobfuscated_file names and their counts
    obfuscated_files_dict = {
        item['_id']: item['count'] for item in obfuscated_files_counts if item['_id'] is not None
    }

    # Find files in the 'unobfuscated' collection that don't have the required number of entries
    unobfuscated_documents = []
    for unobfuscated_document in unobfuscated_collection.find():
        file = unobfuscated_document['file']
        if obfuscated_files_dict.get(file, 0) < required_entries_count[obfuscation_method]:
            unobfuscated_documents.append(unobfuscated_document)

    return unobfuscated_documents


def get_failed_obfuscation_attempts(obfuscation_method):
    obfuscation_collection = db[obfuscation_method]
    unobfuscated_collection = db['unobfuscated']

    # Find documents in the obfuscation_method collection with a non-zero code
    failed_attempts = list(obfuscation_collection.find({'code': {'$ne': 0}}))

    # Get the corresponding documents from the 'unobfuscated' collection and add the 'transformation' field
    result = []
    for attempt in failed_attempts:
        unobfuscated_file = attempt.get('unobfuscated_file')
        transformation = attempt.get('transformation')
        if unobfuscated_file:
            document = unobfuscated_collection.find_one(
                {'file': unobfuscated_file})
            if document:
                document['transformation'] = transformation
                result.append(document)

    return result


def get_unanalyzed_documents(analysis_method):
    unanalyzed_documents = []
    for collection_name in ['unobfuscated', 'llvm', 'tigress', 'wasm-mutate']:
        collection = db[collection_name]
        unanalyzed_documents.extend(
            list(collection.find({analysis_method: {'$exists': False}})))
    return unanalyzed_documents


def get_unmeasured_miner_documents():
    miner_documents = []
    for collection_name in ['unobfuscated', 'llvm', 'tigress', 'wasm-mutate']:
        collection = db[collection_name]

        query = {
            "$and": [
                {"category": "miners"},
                {"hash_rate": {"$exists": False}},
                {"code": 0}
            ]
        }

        if collection_name == 'wasm-mutate':
            query["$and"].append({"iteration": {"$mod": [100, 0]}})

        documents = list(collection.find(query))
        miner_documents.extend(documents)

    return miner_documents


def clear_field(field, collections=None):
    if collections is None:
        collections = ['unobfuscated', 'llvm', 'tigress', 'wasm-mutate']

    for collection_name in collections:
        collection = db[collection_name]
        result = collection.update_many({}, {"$unset": {field: ""}})
        print(colored(
            f"Removed field '{field}' from {result.modified_count} documents in the '{collection_name}' collection", "yellow"))


def add_document(collection_name, document):
    collection = db[collection_name]
    filter_ = {"file": document["file"], "name": document["name"]}

    if "code" in document:
        filter_["code"] = document["code"]

    result = collection.replace_one(filter_, document, upsert=True)
    return result


def update_document(data):
    result = None
    for collection_name in ['unobfuscated', 'llvm', 'tigress', 'wasm-mutate']:
        collection = db[collection_name]
        filter_ = {"_id": data["_id"]}
        update_ = {"$set": data}
        result = collection.update_one(filter_, update_)
    return result
