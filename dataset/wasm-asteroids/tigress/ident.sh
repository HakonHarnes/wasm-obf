#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f ident.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Ident \
--out=ident.c ../wasm-asteroids.c

rm -f a.out 
rm -f a.wasm
