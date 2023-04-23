#!/bin/sh

SCRIPT_DIR=$(dirname "$0")
cd "$SCRIPT_DIR" || exit 

rm -f virtualize.c

tigress \
--Environment=wasm:Linux:Emcc:4.6 \
--Transform=Virtualize \
--Functions=F1Race_CollisionCheck,F1Race_Crashing,F1Race_Cyclic_Timer,F1Race_Framemove,F1Race_Init,F1Race_Key_Down_Pressed,F1Race_Key_Down_Released,F1Race_Key_Fly_Pressed,F1Race_Key_Left_Pressed,F1Race_Key_Left_Released,F1Race_Key_Right_Pressed,F1Race_Key_Right_Released,F1Race_Key_Up_Pressed,F1Race_Key_Up_Released,F1Race_Main,F1Race_New_Opposite_Car,F1Race_Render,F1Race_Render_Background,F1Race_Render_Opposite_Car,F1Race_Render_Player_Car,F1Race_Render_Player_Car_Crash,F1Race_Render_Road,F1Race_Render_Score,F1Race_Render_Separator,F1Race_Render_Status,F1Race_Show_Game_Over_Screen,Music_Load,Music_Play,Music_Unload,Texture_Create_Bitmap,Texture_Draw,Texture_Load,Texture_Unload,main,main_loop,main_loop_emscripten \
--out=virtualize.c ../main.c

sed -i 's/_BARRIER_0 = 1;/int _BARRIER_0 = 1;/g' virtualize.c

rm -f a.out 
rm -f a.wasm
