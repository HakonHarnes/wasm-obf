#/bin/sh

FILE_IN=$1
FILE_OUT=$2

emcc $FILE_IN -sUSE_SDL=2 -o $FILE_OUT
