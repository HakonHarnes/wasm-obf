#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f virtualize.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Virtualize \
--Functions=* \
--out=virtualize.c ../main.c

sed -i 's/_BARRIER_0 = 1;/int _BARRIER_0 = 1;/g' virtualize.c

rm -f a.out 
rm -f a.wasm
