#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f virtualize.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Virtualize \
--Functions=assert_valid_pos,calc_cell_height,calc_cell_width,draw_cells,draw_grid,draw_scene,engine_destroy,engine_new,engine_step,field_adjust_size,field_cell_get,field_cell_set,field_copy,field_count_alive_cells_around,field_destroy,field_height,field_new,field_width,game_cell_get,game_cell_kill,game_cell_spawn,game_destroy,game_height,game_load,game_new_random,game_step,game_width,grid_destroy,grid_new,handle_user_input,main,main_loop,max,min,screen_clear,screen_present \
--out=virtualize.c ../main.c

sed -i 's/_BARRIER_0 = 1;/int _BARRIER_0 = 1;/g' virtualize.c

rm -f a.out 
rm -f a.wasm
