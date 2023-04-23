#!/bin/bash

database="wasm-obf"
collections=("unobfuscated" "llvm" "tigress" "wasm-mutate")

# Create dump dir
docker exec "mongodb" sh -c "mkdir -p /tmp/dump"

# Dump data
for collection in "${collections[@]}"; do
  docker exec "mongodb" sh -c "mongoexport -d ${database} -c ${collection} --out /tmp/dump/${collection}.json --jsonArray --pretty"
done

# Copy dump to host
docker cp "mongodb:/tmp/dump" .
