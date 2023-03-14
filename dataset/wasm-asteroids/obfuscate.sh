#/bin/sh

FILE_IN=$1
TRANSFORM=$2
TRANSFORM_LOWER=$(echo "$TRANSFORM" | tr '[:upper:]' '[:lower:]')
FILE_BASENAME=$(basename -s .c "$FILE_IN")
FILE_OUT=$FILE_BASENAME-$TRANSFORM_LOWER.c

tigress \
--out=$FILE_OUT $FILE_IN \
--envmachine \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=${TRANSFORM} \
--Functions=main \
-O2 \
-I$EMSDKPATH \
-I/usr/lib/emsdk/upstream/emscripten/system/include/SDL \
-sUSE_SDL=2 \
-sWASM=1 \
-sASSERTIONS=1 \
-sALLOW_MEMORY_GROWTH=1 \
-sAGGRESSIVE_VARIABLE_ELIMINATION=1 \
-sERROR_ON_UNDEFINED_SYMBOLS=0 \
-sUSE_WEBGL2=0 \
-sUSE_GLFW=3 \
-sFULL_ES3=0 \
-sUSE_SDL=2 \
-fmacro-backtrace-limit=0

if [ $? -ne 0 ]; then
    echo "TIGRESS FAILED: EXITING"
    exit 1
fi

mv a.wasm $FILE_BASENAME-$TRANSFORM_LOWER.wasm
rm a.out
