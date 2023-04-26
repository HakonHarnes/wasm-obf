#!/bin/bash

database="wasm-obf"

# Drop the entire database
echo "Dropping the '${database}' database..."
docker exec "mongodb" sh -c "mongosh --eval 'db.getSiblingDB(\"${database}\").dropDatabase()'"

echo "Dropped the '${database}' database."
