#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f randomfuns.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=RandomFuns \
--RandomFunsFunctionCount=5 \
--out=randomfuns.c ../main.c

sed -i '/int main(int argc , char \*argv\[\] ) ;/d' randomfuns.c

rm -f a.out
rm -f a.wasm
