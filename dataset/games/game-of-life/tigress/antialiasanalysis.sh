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
--Functions=assert_valid_pos,calc_cell_width,calc_cell_height,engine_step,field_adjust_size,field_cell_set,field_cell_get,field_copy,field_count_alive_cells_around,field_destroy,field_height,field_height,field_width,game_cell_get,game_cell_kill,game_cell_spawn,game_destroy,game_height,game_step,game_width,grid_destroy,grid_new,handle_user_input,main,main_loop,max,min \
--out=antialiasanalysis.c ../main.c

rm -f a.out 
rm -f a.wasm
