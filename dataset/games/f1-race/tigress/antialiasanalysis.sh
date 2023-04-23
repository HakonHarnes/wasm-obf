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
--Functions=F1Race_CollisionCheck,F1Race_Crashing,F1Race_Cyclic_Timer,F1Race_Framemove,F1Race_Init,F1Race_Key_Down_Pressed,F1Race_Key_Down_Released,F1Race_Key_Fly_Pressed,F1Race_Key_Left_Pressed,F1Race_Key_Left_Released,F1Race_Key_Right_Pressed,F1Race_Key_Right_Released,F1Race_Key_Up_Pressed,F1Race_Key_Up_Released,F1Race_Main,F1Race_New_Opposite_Car,F1Race_Render_Opposite_Car,F1Race_Render_Player_Car,F1Race_Render_Player_Car_Crash,Texture_Create_Bitmap,Texture_Load,Texture_Unload \
--out=antialiasanalysis.c ../main.c

rm -f a.out 
rm -f a.wasm
