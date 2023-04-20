#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f virtualize.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Virtualize --Functions=* \
--out=virtualize.c ../*.c -sUSE_SDL=2

rm -f a.out 
rm -f a.wasm
