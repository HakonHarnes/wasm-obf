#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f ident.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--gcc=emcc \
--envmachine \
--Transform=Ident \
--out=ident.c ../cn-0.c

rm -f a.out 
rm -f a.wasm
