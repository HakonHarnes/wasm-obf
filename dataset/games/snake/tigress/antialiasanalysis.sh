#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f antialiasanalysis.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=InitOpaque --Functions=main \
--Transform=InitEntropy --UpdateEntropyKinds=vars \
--InitOpaqueStructs=list,array,env,input,plugin \
--Functions=change_snake_direction,check_collision,free_tails,get_apple_posX,get_apple_posY,handle_events,init_snake,push_tail,set_freeze,update_snake \
--Transform=AntiAliasAnalysis \
--Functions=change_snake_direction,check_collision,free_tails,get_apple_posX,get_apple_posY,handle_events,init_snake,push_tail,set_freeze,update_snake \
--out=antialiasanalysis.c ../main.c


rm -f a.out 
rm -f a.wasm
