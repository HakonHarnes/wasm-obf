#!/bin/bash

# Check arguments
if [ "$#" -lt 1 ]; then
  echo "Usage: $0 <field_name> [collection_name]"
  exit 1
fi

field_name="$1"
collection_name="$2"
database="wasm-obf"
collections=("unobfuscated" "llvm" "tigress" "wasm-mutate")

# Function to remove the specified field from all documents in the specified collection
remove_field_from_collection() {
  local collection="$1"
  echo "Removing '${field_name}' from '${collection}' collection..."
  docker exec "mongodb" sh -c "mongosh ${database} --eval 'db[\"${collection}\"].updateMany({}, { \$unset: { \"${field_name}\": \"\" } })'"
  echo "The '${field_name}' field has been removed from all documents in the '${collection}' collection."
}

if [ -z "$collection_name" ]; then
  # Remove the field from all collections
  for collection in "${collections[@]}"; do
    remove_field_from_collection "$collection"
  done
else
  # Remove the field from the specified collection
  remove_field_from_collection "$collection_name"
fi
