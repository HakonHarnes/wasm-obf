#!/bin/bash

database="wasm-obf"
collections=("unobfuscated" "llvm" "tigress" "wasm-mutate")
dump_directory="dump"

# Check if the dump directory exists
if [ ! -d "${dump_directory}" ]; then
  echo "The dump directory '${dump_directory}' does not exist. Please make sure it exists and contains the dumped JSON files."
  exit 1
fi

# Drop the entire database
echo "Dropping the '${database}' database..."
docker exec "mongodb" sh -c "mongosh --eval 'db.getSiblingDB(\"${database}\").dropDatabase()'"

# Restore data to the new database
for collection in "${collections[@]}"; do
  if [ -f "${dump_directory}/${collection}.json" ]; then
    echo "Restoring data for collection '${collection}'..."
    docker exec "mongodb" sh -c "mongoimport -d ${database} -c ${collection} --file /tmp/dump/${collection}.json --jsonArray"
  else
    echo "The file '${dump_directory}/${collection}.json' does not exist. Skipping import for collection '${collection}'."
  fi
done

echo "Data restoration completed."
