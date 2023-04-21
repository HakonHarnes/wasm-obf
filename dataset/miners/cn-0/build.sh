#!/bin/sh 

FILE_IN=$1
FILE_OUT=$2
ARGS="${@:3}"

emcc "$FILE_IN" -o "$FILE_OUT" \
-Wall -lm \
-Wbad-function-cast -Wcast-function-type \
-sEXPORTED_FUNCTIONS="['_hash_cn', '_main']" \
-sEXPORTED_RUNTIME_METHODS="['ccall', 'cwrap']" \
-sASSERTIONS=1 \
-sALLOW_MEMORY_GROWTH=1 \
-sAGGRESSIVE_VARIABLE_ELIMINATION=1 \
-sERROR_ON_UNDEFINED_SYMBOLS=0 \
-sTOTAL_MEMORY=67108864 \
-sNO_FILESYSTEM=1 \
-sWASM=1 \
-fmacro-backtrace-limit=0 \
$ARGS
