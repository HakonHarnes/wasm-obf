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
--Functions=Ftype,alnumsort,class,cmd,cond_lower,ctimesort,dirsfirst,do_date,emit_tree,filesfirst,fillinfo,filtercheck,findino,fprune,free_dir,freefiletree,fsizesort,getcharset,getinfo,gidtoname,gittrim,gnu_getcwd,infocheck,json_close,json_printinfo,listdir,mtimesort,new_comment,new_pattern,newent,nextpc,null_close,null_intro,null_outtro,parse_dir_colors,patignore,patinclude,patmatch,pop_filterstack,pop_infostack,print_color,prot,psize,push_files,push_filterstack,push_infostack,saveino,search,sizecmp,split,stat2info,strverscmp,uidtoname,unix_getfulltree,unix_newline,versort \
--out=antialiasanalysis.c ../main.c

rm -f a.out 
rm -f a.wasm
