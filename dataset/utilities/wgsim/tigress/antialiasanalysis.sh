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
--Functions=__ac_X31_hash_string,cpy_kseq,cpy_kstr,find_next_cut,fqc_aux,kh_destroy_64,kh_destroy_reg,kh_get_64,kh_get_reg,kh_init_64,kh_init_reg,kh_put_64,kh_put_reg,kh_resize_64,kh_resize_reg,kr_rand,kr_srand,kr_srand0,ks_destroy,ks_getc,ks_getuntil,ks_getuntil2,ks_init,kseq_destroy,kseq_init,kseq_read,stk_mask,stk_printseq,stk_reg_destroy,stk_reg_read \
--out=antialiasanalysis.c ../main.c

rm -f a.out 
rm -f a.wasm
