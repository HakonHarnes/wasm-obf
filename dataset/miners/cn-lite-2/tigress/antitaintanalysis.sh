#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f antitaintanalysis.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=AntiTaintAnalysis --Functions=* \
--out=antitaintanalysis.c ../main.c

rm -f a.out
rm -f a.wasm
