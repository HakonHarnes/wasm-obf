#!/bin/sh

FILE_IN=$1
FILE_OUT=$2
ARGS="${@:3}"

# Get the absolute path of the build.sh script
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

emcc "$FILE_IN" -o "$FILE_OUT" \
--shell-file "$SCRIPT_DIR/aioli.html" \
-I"$EMSDKPATH" \
-I"$SCRIPT_DIR/libs" \
-I"$SCRIPT_DIR/src" \
-L"$SCRIPT_DIR/libs/string_buffer" \
-L"$SCRIPT_DIR/src" \
"$SCRIPT_DIR/src/libalign.a" \
-lpthread \
-sWASM=1 \
-sASSERTIONS=1 \
-sUSE_ZLIB=1 \
-sAGGRESSIVE_VARIABLE_ELIMINATION=1 \
-sERROR_ON_UNDEFINED_SYMBOLS=0 \
-sINVOKE_RUN=0 \
-sFORCE_FILESYSTEM=1 \
-sEXPORTED_RUNTIME_METHODS=["callMain","FS","PROXYFS","WORKERFS"] \
-sMODULARIZE=1 \
-sENVIRONMENT="web,worker" \
-sALLOW_MEMORY_GROWTH=1 \
-lworkerfs.js \
-lproxyfs.js \
-fmacro-backtrace-limit=0 \
$ARGS
