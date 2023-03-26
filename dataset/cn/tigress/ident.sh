#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f ident.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
-I/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/ \
--gcc=emcc \
--envmachine \
--Transform=Ident \
--out=ident.c ../cn.c

rm -f a.out 
rm -f a.wasm
