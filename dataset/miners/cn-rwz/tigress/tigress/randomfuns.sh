#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f flatten.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=RandomFuns \
--RandomFunsFunctionCount=3 \
--out=randomfuns.c ../main.c

rm -f a.out
rm -f a.wasm
