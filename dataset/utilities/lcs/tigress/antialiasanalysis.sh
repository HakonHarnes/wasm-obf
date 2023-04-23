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
--Functions=main,_ensure_history_capacity,_follow_hit,_rndup2pow64,_rndup2pow64___0,_scoring_check_wildcards,_seq_read_fasta_f_buf,_seq_read_fasta_gz_buf,_seq_read_fastq_f_buf,_seq_read_fastq_gz,_seq_read_fastq_gz_buf,_seq_read_unknown_gz,align_scoring_load_matrix,aligner_align,aligner_destroy,alignment_create,alignment_fill_matrices,alignment_free,bitset_alloc,cbuf_append_char,cbuf_chomp,cmdline_get_file1,cmdline_get_num_of_file_pairs,cmdline_new,gzgetc_buf,gzreadline,gzreadline_buf,gzskipline_buf,main,parse_entire_int,scoring_init,scoring_print \
--out=antialiasanalysis.c ../main.c

rm -f a.out 
rm -f a.wasm
