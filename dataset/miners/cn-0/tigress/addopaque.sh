#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f addopaque.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=InitOpaque --Functions=main \
--InitOpaqueStructs=list,array,env,input \
--Transform=InitEntropy --UpdateEntropyKinds=vars \
--Transform=AddOpaque --Functions=main \
--out=addopaque.c ../*.c -sUSE_SDL=2

rm -f a.out 
rm -f a.wasm
