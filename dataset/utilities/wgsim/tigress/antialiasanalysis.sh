#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f antialiasanalysis.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=InitOpaque --Functions=main \
--Transform=InitEntropy --UpdateEntropyKinds=vars \
--InitOpaqueStructs=list,array,env,input,plugin \
--Transform=AntiAliasAnalysis \
--Functions=ks_destroy,ks_getc,ks_getuntil,ks_init,kseq_destroy,kseq_init,kseq_read,ran_normal,wgsim_core,wgsim_mut_diref,wgsim_print_mutref \
--out=antialiasanalysis.c ../main.c

rm -f a.out 
rm -f a.wasm
