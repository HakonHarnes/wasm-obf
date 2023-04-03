#!/bin/bash

# Create the binaries directory if it doesn't exist
mkdir -p ../../binaries

# Loop through all the directories
for dir in */; do
  # Remove trailing slash from directory name
  dir=${dir%*/}

  # Navigate to the directory
  pushd "${dir}" > /dev/null

  # Call the build.sh script with the appropriate arguments
  c_file="${dir}.c"
  output_html="../../binaries/${dir}.html"
  ./build.sh "${c_file}" "${output_html}" > /dev/null

  # Output the exit code
  exit_code=$?
  echo "${dir}: Exit code ${exit_code}"

  # Copy and rename the metadata.json file
  cp metadata.json "../../binaries/${dir}.json"

  # Navigate back to the root directory
  popd > /dev/null
done
