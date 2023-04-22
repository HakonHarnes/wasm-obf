#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f antialiasanalysis.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=InitOpaque --Functions=main \
--Transform=InitEntropy --UpdateEntropyKinds=vars \
--InitOpaqueStructs=list,array,env,input,plugin \
--Transform=AntiAliasAnalysis \
--Functions=add_vector,add_vector_new,apply_force,bounds_asteroids,bounds_player,clear_pixels,collision_asteroids,divide_vector,draw_asteroids,draw_line,draw_pixel,draw_player,get_direction,init_asteroids,init_player,limit_vector,magnitude_vector,main,multiply_vector,normalise_vector,print_vector,rotate_player,rotate_vector,shoot_bullet,shrink_asteroid,spawn_asteroids,update_asteroids,update_player \
--out=antialiasanalysis.c ../main.c


rm -f a.out 
rm -f a.wasm
