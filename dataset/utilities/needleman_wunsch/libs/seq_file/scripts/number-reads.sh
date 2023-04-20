#!/bin/bash
set -eou pipefail
# Name reads r1, r2, r3 ...
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
DNACAT="$DIR/../bin/dnacat"
$DNACAT -M <(i=1; while [ 1 ]; do echo "r$i"; i=$[$i+1]; done)
