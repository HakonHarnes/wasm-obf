#!/bin/bash

database="wasm-obf"
collections=("unobfuscated" "llvm" "tigress" "wasm-mutate")
dump_directory="dump"
container_name="mongodb"

# Check if the dump directory exists
if [ ! -d "${dump_directory}" ]; then
  echo "The dump directory '${dump_directory}' does not exist. Please make sure it exists and contains the dumped JSON files."
  exit 1
fi

# Drop the entire database
echo "Dropping the '${database}' database..."
docker exec "${container_name}" sh -c "mongosh --eval 'db.getSiblingDB(\"${database}\").dropDatabase()'"

# Create the /tmp/dump directory in the container
docker exec "${container_name}" sh -c "mkdir -p /tmp/dump"

# Restore data to the new database
for collection in "${collections[@]}"; do
  if [ -f "${dump_directory}/${collection}.json" ]; then
    echo "Copying data for collection '${collection}' to the container..."
    docker cp "${dump_directory}/${collection}.json" "${container_name}:/tmp/dump/${collection}.json"
    
    echo "Restoring data for collection '${collection}'..."
    docker exec "${container_name}" sh -c "mongoimport -d ${database} -c ${collection} --file /tmp/dump/${collection}.json --jsonArray"
  else
    echo "The file '${dump_directory}/${collection}.json' does not exist. Skipping import for collection '${collection}'."
  fi
done

echo "Data restoration completed."

