#/bin/sh

FILE_IN=$1
EMSCRIPTEN_OUT=$2

echo $FILE_IN
echo $EMSCRIPTEN_OUT

emcc $FILE_IN \
-O2 \
-o $EMSCRIPTEN_OUT \
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
-fmacro-backtrace-limit=0 \
