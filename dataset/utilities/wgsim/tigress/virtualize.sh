#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f virtualize.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Virtualize \
--Functions=ks_destroy,ks_getc,ks_getuntil,ks_init,kseq_destroy,kseq_init,kseq_read,main,ran_normal,simu_usage,wgsim_mut_diref,wgsim_print_mutref \
--out=virtualize.c ../main.c

sed -i 's/_BARRIER_0 = 1;/int _BARRIER_0 = 1;/g' virtualize.c

rm -f a.out 
rm -f a.wasm
