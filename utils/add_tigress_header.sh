#!/bin/bash

# Get the directory path from the command-line argument
directory="$1"

# Check if the directory exists
if [ ! -d "$directory" ]; then
  echo "Directory not found: $directory"
  exit 1
fi

# Find all .c and .h files in the directory
files=$(find "$directory" -type f \( -name "*.c" -o -name "*.h" \))

# Loop through each file and add the line at the top
for file in $files; do
    sed -i '1s/^/#include "\/usr\/local\/bin\/tigress\/3.3.2\/tigress.h"\n/' "$file"
done
