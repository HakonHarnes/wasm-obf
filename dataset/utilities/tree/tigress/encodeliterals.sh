#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f encodeliterals.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=InitOpaque --InitOpaqueStructs=list,array,env,input,plugin \
--Functions=* \
--Transform=InitEntropy --UpdateEntropyKinds=annotations,vars \
--Transform=EncodeLiterals \
--Functions=unix_getfulltree,listdir \
--out=encodeliterals.c ../main.c

rm -f a.out 
rm -f a.wasm
