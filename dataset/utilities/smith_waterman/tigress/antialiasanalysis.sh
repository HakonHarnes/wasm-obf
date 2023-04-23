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
--Functions=main,_ensure_history_capacity,_follow_hit,_init_history,_loading_error,_rndup2pow64,_scoring_check_wildcards,_seq_read_fasta_f_buf,_seq_read_fasta_gz,_seq_read_fasta_gz_buf,_seq_read_fastq_f_buf,_seq_read_fastq_gz,_seq_read_fastq_gz_buf,_seq_read_plain_f_buf,_seq_read_plain_gz,_seq_read_plain_gz_buf,_seq_read_unknown_f_buf,_seq_read_unknown_gz,_seq_read_unknown_gz_buf,_seq_setup,align_pair_from_file,align_scoring_load_matrix,align_scoring_load_pairwise,bitset_alloc,bitset_dealloc,bitset_set_length,cbuf_append_char,cbuf_capacity,cbuf_chomp,cmdline_free,cmdline_get_file1,cmdline_get_file2,cmdline_get_num_of_file_pairs,cmdline_new,gzgetc_buf,gzread2,gzreadline,gzreadline_buf,gzskipline,gzskipline_buf,main smith_waterman_align,smith_waterman_align2,smith_waterman_fetch,smith_waterman_free,smith_waterman_get_aligner,smith_waterman_new \
--out=antialiasanalysis.c ../main.c

rm -f a.out 
rm -f a.wasm
