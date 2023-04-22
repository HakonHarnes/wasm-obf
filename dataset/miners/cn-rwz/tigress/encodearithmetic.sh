#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f encodearithmetic.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=EncodeArithmetic \
--Functions=Skein1024_Update,Skein_256_Final,Skein_256_Process_Block,Skein_256_Update,Skein_512_Final,Skein_512_Init,Skein_512_Process_Block,Skein_512_Update,Skein_Get64_LSB_First,Skein_Put64_LSB_First,SubAndShiftAndMixAddRound,SubAndShiftAndMixAddRoundInPlace,Transform,Update,blake,blake224_final,blake224_hash,blake224_init,blake224_update,blake256_compress,blake256_final,blake256_final_h,blake256_hash,blake256_init,blake256_update,cryptonight,cryptonight_hash_ctx,do_blake_hash,do_groestl_hash,do_jh_hash,do_skein_hash,groestl,hash_cn,hmac_blake224_final,hmac_blake224_hash,hmac_blake224_init,hmac_blake224_update,hmac_blake256_final,hmac_blake256_hash,hmac_blake256_init,hmac_blake256_update,jh,keccak,keccak1600,keccakf,mul64to128,oaes_alloc,oaes_decrypt,oaes_decrypt_block,oaes_encrypt,oaes_encrypt_block,oaes_encryption_round,oaes_free,oaes_get_seed,oaes_gf_mul,oaes_inv_mix_cols,oaes_inv_shift_rows,oaes_inv_sub_byte,oaes_key_destroy,oaes_key_expand,oaes_key_export,oaes_key_export_data,oaes_key_gen,oaes_key_gen_128,oaes_key_gen_192,oaes_key_gen_256,oaes_key_import,oaes_key_import_data,oaes_mix_cols,oaes_pseudo_encrypt_ecb,oaes_set_option,oaes_shift_rows,oaes_sprintf,oaes_sub_byte,oaes_word_rot_left,skein,sum_xor_dst,xor_blocks,xor_blocks_dst \
--out=encodearithmetic.c ../main.c

rm -f a.out 
rm -f a.wasm
