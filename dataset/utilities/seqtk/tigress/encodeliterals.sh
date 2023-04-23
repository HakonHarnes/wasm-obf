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
--Functions=__ac_X31_hash_string,cpy_kseq,cpy_kstr,find_next_cut,fqc_aux,kh_destroy_64 \
--out=encodeliterals.c ../main.c

rm -f a.out 
rm -f a.wasm
