#!/bin/sh 

FILE_IN=$1
FILE_OUT=$2
OBF_ARGS="${@:3}"

emcc "$FILE_IN" -o "$FILE_OUT" -O3 \
-Wall -lm \
-sNO_FILESYSTEM=1 \
-s'EXTRA_EXPORTED_RUNTIME_METHODS=["ccall", "cwrap"]' \
-sWASM=1 \
-sTOTAL_MEMORY=67108864 \
-sEXPORTED_FUNCTIONS="['_hash_cn']" \
--llvm-lto 1 \
$OBF_ARGS
