#!/bin/sh

FILE_IN=$1
FILE_OUT=$2
ARGS="${@:3}"

# Get the absolute path of the build.sh script
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

# Construct the path to the assets folder
ASSETS_DIR="$SCRIPT_DIR/assets"

echo $ASSETS_DIR

emcc "$FILE_IN" -o "$FILE_OUT" \
-I "$EMSDKPATH" \
--use-preload-plugins --preload-file "$ASSETS_DIR@assets" \
-sWASM=1 \
-sASSERTIONS=1 \
-sALLOW_MEMORY_GROWTH=1 \
-sAGGRESSIVE_VARIABLE_ELIMINATION=1 \
-sERROR_ON_UNDEFINED_SYMBOLS=0 \
-sUSE_SDL=2 \
-sUSE_SDL_MIXER=2 \
-fmacro-backtrace-limit=0 \
$ARGS
