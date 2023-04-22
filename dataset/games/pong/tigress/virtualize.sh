#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f virtualize.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Virtualize \
--Functions=bounce_ball_off_paddle,clamp,frand_range,paddle_intersects_ball,rand_range,restart_round,set_ghost_bias,set_ghost_idle_offset,set_ghost_speed,set_ghost_velocity,set_tonegen_tone,sign,square_wave_sample,tonegen_generate,tonegen_queue,update_ball,update_paddle \
--out=virtualize.c ../main.c

sed -i 's/_BARRIER_0 = 1;/int _BARRIER_0 = 1;/g' virtualize.c

rm -f a.out 
rm -f a.wasm
