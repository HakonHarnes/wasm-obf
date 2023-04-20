#!/bin/bash
set -eou pipefail
# Name interleaved PE reads r1, r1, r2, r2, r3, r3 ...
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
DNACAT="$DIR/../bin/dnacat"
$DNACAT -M <(i=2; while [ 1 ]; do echo "r"$[$i/2]; i=$[$i+1]; done)
