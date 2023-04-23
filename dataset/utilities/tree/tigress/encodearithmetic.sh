#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f encodearithmetic.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=EncodeArithmetic \
--Functions=* \
--out=encodearithmetic.c ../main.c

rm -f a.out 
rm -f a.wasm
