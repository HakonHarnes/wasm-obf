#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f encodeliterals.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=InitOpaque --InitOpaqueStructs=list,array,env,input,plugin \
--Functions=hash_cn,cryptonight,cryptonight_hash_ctx \
--Transform=InitEntropy --UpdateEntropyKinds=annotations,vars \
--Transform=EncodeLiterals \
--Functions=hash_cn,cryptonight,cryptonight_hash_ctx \
--out=encodeliterals.c ../main.c

rm -f a.out 
rm -f a.wasm
