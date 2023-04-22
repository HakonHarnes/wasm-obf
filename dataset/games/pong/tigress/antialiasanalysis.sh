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
--Functions=bounce_ball_off_paddle,clamp,frand_range,paddle_intersects_ball,rand_range,restart_round,set_ghost_bias,set_ghost_idle_offset,set_ghost_speed,set_ghost_velocity,set_tonegen_tone,sign,square_wave_sample,tonegen_generate,tonegen_queue,update_ball,update_paddle \
--out=antialiasanalysis.c ../main.c



rm -f a.out 
rm -f a.wasm
