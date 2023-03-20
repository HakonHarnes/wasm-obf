#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f encodeliterals.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=EncodeLiterals --Functions=* \
--out=encodeliterals.c ../wasm-asteroids.c -sUSE_SDL=2

rm -f a.out 
rm -f a.wasm
