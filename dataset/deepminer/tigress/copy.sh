#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f copy.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Copy --Functions=* \
--out=copy.c ../*.c

rm -f a.out 
rm -f a.wasm
