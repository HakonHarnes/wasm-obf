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
--Functions=align_from_file, align_scoring_load_matrix, align_scoring_load_pairwise,alignment_create,main,_seq_read_fasta_f_buf,_seq_read_fasta_gz,_seq_read_fasta_gz_buf,_seq_read_fastq_f,_seq_read_fastq_f_buf,_seq_read_fastq_gz,_seq_read_fastq_gz_buf,_seq_read_plain_f,_seq_read_plain_f_buf,_seq_read_plain_gz,_seq_read_plain_gz_buf,_seq_read_unknown_f,_seq_read_unknown_f_buf,_seq_read_unknown_gz,_seq_read_unknown_gz_buf,_seq_setup,align_from_file \
--out=encodeliterals.c ../main.c

rm -f a.out 
rm -f a.wasm
