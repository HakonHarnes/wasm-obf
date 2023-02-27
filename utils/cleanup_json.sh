#!/bin/sh

# Get the directory path of the script
dir="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Set the keyword argument to an empty string if not provided
if [ $# -eq 0 ]; then
    keyword=""
else
    keyword="$1"
fi

# Remove files ending with "{keyword}.json" recursively in ../binaries
find "${dir}/../data" -name "*${keyword}.json" -type f -delete
