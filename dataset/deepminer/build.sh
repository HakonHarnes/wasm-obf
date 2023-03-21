#!/bin/sh

FILE_IN=$1
FILE_OUT=$2
OBF_ARGS="${@:3}"

emcc "$FILE_IN" -o "$FILE_OUT" -O2 \
-I "$EMSDKPATH" \
-sWASM=1 \
-sDISABLE_EXCEPTION_CATCHING=1 \
-sBINARYEN_ASYNC_COMPILATION=1 \
-sALIASING_FUNCTION_POINTERS=1 \
-sALLOW_MEMORY_GROWTH=1 \
-sWASM=1 \
-sBINARYEN=1 \
-sNO_EXIT_RUNTIME=1 \
-sASSERTIONS=1 \
-sSTACK_OVERFLOW_CHECK=1 \
-sEXPORTED_FUNCTIONS="['_cryptonight_hash']" \
-sASSERTIONS=1 \
-sALLOW_MEMORY_GROWTH=1 \
-sAGGRESSIVE_VARIABLE_ELIMINATION=1 \
-sERROR_ON_UNDEFINED_SYMBOLS=0 \
-fmacro-backtrace-limit=0 \
$OBF_ARGS
