#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f flatten.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Flatten --Functions=cryptonight_hash \
--out=flatten.c ../*.c

rm -f a.out 
rm -f a.wasm
