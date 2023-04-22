#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f virtualize.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Virtualize --Functions=* \
--out=virtualize.c ../main.c

rm -f a.out 
rm -f a.wasm
