cn main• 50m 6s ❱ ./build.sh cn.c cn.js -v
 "/usr/lib/emsdk/upstream/bin/clang" --version
 "/usr/lib/emsdk/upstream/bin/clang" -target wasm32-unknown-emscripten -fignore-exceptions -fvisibility=default -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -DEMSCRIPTEN -Werror=implicit-function-declaration --sysroot=/usr/lib/emsdk/upstream/emscripten/cache/sysroot -Xclang -iwithsysroot/include/fakesdl -Xclang -iwithsysroot/include/compat -I/usr/lib/emsdk/upstream/include/c++/v1 -Wall -Wbad-function-cast -Wcast-function-type -fmacro-backtrace-limit=0 -v cn.c -c -o /tmp/emscripten_temp_8f32k50m/cn_0.o
clang version 17.0.0 (https://github.com/llvm/llvm-project df82394e7a2d06506718cafa347bf7827c79fc4f)
Target: wasm32-unknown-emscripten
Thread model: posix
InstalledDir: /usr/lib/emsdk/upstream/bin
 (in-process)
 "/usr/lib/emsdk/upstream/bin/clang-17" -cc1 -triple wasm32-unknown-emscripten -emit-obj -mrelax-all -disable-free -clear-ast-before-backend -disable-llvm-verifier -discard-value-names -main-file-name cn.c -mrelocation-model static -mframe-pointer=none -ffp-contract=on -fno-rounding-math -mconstructor-aliases -target-cpu generic -mllvm -treat-scalable-fixed-error-as-warning -debugger-tuning=gdb -v -fcoverage-compilation-dir=/home/hakon/wasm-obf/dataset/cn -resource-dir /usr/lib/emsdk/upstream/lib/clang/17 -D EMSCRIPTEN -I /usr/lib/emsdk/upstream/include/c++/v1 -isysroot /usr/lib/emsdk/upstream/emscripten/cache/sysroot -internal-isystem /usr/lib/emsdk/upstream/lib/clang/17/include -internal-isystem /usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasm32-emscripten -internal-isystem /usr/lib/emsdk/upstream/emscripten/cache/sysroot/include -Werror=implicit-function-declaration -Wall -Wbad-function-cast -Wcast-function-type -fdebug-compilation-dir=/home/hakon/wasm-obf/dataset/cn -ferror-limit 19 -fmacro-backtrace-limit 0 -fvisibility=default -fgnuc-version=4.2.1 -fignore-exceptions -fcolor-diagnostics -iwithsysroot/include/fakesdl -iwithsysroot/include/compat -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -o /tmp/emscripten_temp_8f32k50m/cn_0.o -x c cn.c
clang -cc1 version 17.0.0 based upon LLVM 17.0.0git default target x86_64-unknown-linux-gnu
ignoring nonexistent directory "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasm32-emscripten"
#include "..." search starts here:
#include <...> search starts here:
 /usr/lib/emsdk/upstream/include/c++/v1
 /usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/fakesdl
 /usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/compat
 /usr/lib/emsdk/upstream/lib/clang/17/include
 /usr/lib/emsdk/upstream/emscripten/cache/sysroot/include
End of search list.
cil-7xYVIcG9.o:1:9: warning: unknown pragma ignored [-Wunknown-pragmas]
#pragma merger("0","/tmp/cil-WXa0hKKB.i","")
        ^
cil-N3KKLmE8.o:1:9: warning: unknown pragma ignored [-Wunknown-pragmas]
#pragma merger("0","/tmp/cil-dsYneYbG.i","")
        ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:108:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:108:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:110:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:109:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:109:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:110:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:110:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:125:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:125:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:126:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:125:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:126:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:127:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:125:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:126:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:127:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:128:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
./variant2_int_sqrt.h:58:9: warning: explicitly assigning value of variable of type 'uint64_t' (aka 'unsigned long long') to itself [-Wself-assign]
      n = n;
      ~ ^ ~
./variant2_int_sqrt.h:59:13: warning: explicitly assigning value of variable of type 'uint64_t' (aka 'unsigned long long') to itself [-Wself-assign]
      r___0 = r___0;
      ~~~~~ ^ ~~~~~
./variant4_random_math.h:208:10: warning: unused variable 'tmp___1' [-Wunused-variable]
  size_t tmp___1 ;
         ^
cil-NZpT1hwT.o:1:9: warning: unknown pragma ignored [-Wunknown-pragmas]
#pragma merger("0","/tmp/cil-rN1NwyQj.i","")
        ^
cil-KrShJruU.o:1:9: warning: unknown pragma ignored [-Wunknown-pragmas]
#pragma merger("0","/tmp/cil-VZeE_BHh.i","")
        ^
cil-vdmaxD4e.o:1:9: warning: unknown pragma ignored [-Wunknown-pragmas]
#pragma merger("0","/tmp/cil-Kf5tE_l6.i","")
        ^
jh_ansi_opt64.c:379:7: warning: variable 'tmp___0' set but not used [-Wunused-but-set-variable]
  int tmp___0 ;
      ^
cil-HGM8GGTh.o:1:9: warning: unknown pragma ignored [-Wunknown-pragmas]
#pragma merger("0","/tmp/cil-RcQVGXbD.i","")
        ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:108:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:108:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:110:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:109:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:109:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:110:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:110:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:125:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:125:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:126:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:123:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:125:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:126:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:127:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:31: warning: integer literal is too large to be represented in a signed integer type, interpreting as unsigned [-Wimplicitly-unsigned-literal]
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
                              ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:124:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:125:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:126:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:127:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:128:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
cil-ycfBj8f5.o:1:9: warning: unknown pragma ignored [-Wunknown-pragmas]
#pragma merger("0","/tmp/cil-GHbAIFq4.i","")
        ^
cil-t8JhCb2f.o:1:9: warning: unknown pragma ignored [-Wunknown-pragmas]
#pragma merger("0","/tmp/cil-4fKSgoBy.i","")
        ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:108:21: warning: unused function '__islessf' [-Wunused-function]
__inline static int __islessf(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:109:21: warning: unused function '__isless' [-Wunused-function]
__inline static int __isless(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:110:21: warning: unused function '__islessl' [-Wunused-function]
__inline static int __islessl(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:21: warning: unused function '__islessequalf' [-Wunused-function]
__inline static int __islessequalf(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:21: warning: unused function '__islessequal' [-Wunused-function]
__inline static int __islessequal(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:21: warning: unused function '__islessequall' [-Wunused-function]
__inline static int __islessequall(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:21: warning: unused function '__islessgreaterf' [-Wunused-function]
__inline static int __islessgreaterf(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:21: warning: unused function '__islessgreater' [-Wunused-function]
__inline static int __islessgreater(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:21: warning: unused function '__islessgreaterl' [-Wunused-function]
__inline static int __islessgreaterl(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:21: warning: unused function '__isgreaterf' [-Wunused-function]
__inline static int __isgreaterf(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:21: warning: unused function '__isgreater' [-Wunused-function]
__inline static int __isgreater(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:21: warning: unused function '__isgreaterl' [-Wunused-function]
__inline static int __isgreaterl(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:21: warning: unused function '__isgreaterequalf' [-Wunused-function]
__inline static int __isgreaterequalf(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:21: warning: unused function '__isgreaterequal' [-Wunused-function]
__inline static int __isgreaterequal(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:21: warning: unused function '__isgreaterequall' [-Wunused-function]
__inline static int __isgreaterequall(long double __x , long double __y )
                    ^
./variant2_int_sqrt.h:49:26: warning: unused function 'integer_square_root_v2' [-Wunused-function]
__inline static uint32_t integer_square_root_v2(uint64_t n )
                         ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:108:21: warning: unused function '__islessf___0' [-Wunused-function]
__inline static int __islessf___0(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:109:21: warning: unused function '__isless___0' [-Wunused-function]
__inline static int __isless___0(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:110:21: warning: unused function '__islessl___0' [-Wunused-function]
__inline static int __islessl___0(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:111:21: warning: unused function '__islessequalf___0' [-Wunused-function]
__inline static int __islessequalf___0(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:112:21: warning: unused function '__islessequal___0' [-Wunused-function]
__inline static int __islessequal___0(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:113:21: warning: unused function '__islessequall___0' [-Wunused-function]
__inline static int __islessequall___0(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:114:21: warning: unused function '__islessgreaterf___0' [-Wunused-function]
__inline static int __islessgreaterf___0(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:115:21: warning: unused function '__islessgreater___0' [-Wunused-function]
__inline static int __islessgreater___0(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:116:21: warning: unused function '__islessgreaterl___0' [-Wunused-function]
__inline static int __islessgreaterl___0(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:117:21: warning: unused function '__isgreaterf___0' [-Wunused-function]
__inline static int __isgreaterf___0(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:118:21: warning: unused function '__isgreater___0' [-Wunused-function]
__inline static int __isgreater___0(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:119:21: warning: unused function '__isgreaterl___0' [-Wunused-function]
__inline static int __isgreaterl___0(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:120:21: warning: unused function '__isgreaterequalf___0' [-Wunused-function]
__inline static int __isgreaterequalf___0(float_t __x , float_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:121:21: warning: unused function '__isgreaterequal___0' [-Wunused-function]
__inline static int __isgreaterequal___0(double_t __x , double_t __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h:122:21: warning: unused function '__isgreaterequall___0' [-Wunused-function]
__inline static int __isgreaterequall___0(long double __x , long double __y )
                    ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/endian.h:19:26: warning: unused function '__bswap16' [-Wunused-function]
__inline static uint16_t __bswap16(uint16_t __x )
                         ^
/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/endian.h:29:26: warning: unused function '__bswap64' [-Wunused-function]
__inline static uint64_t __bswap64(uint64_t __x )
                         ^
255 warnings generated.
system_libs:WARNING: main() is in the input files, but "_main" is not in EXPORTED_FUNCTIONS, which means it may be eliminated as dead code. Export it if you want main() to run.
 "/usr/lib/emsdk/upstream/bin/wasm-ld" -o cn.wasm /tmp/emscripten_temp_8f32k50m/cn_0.o -L/usr/lib/emsdk/upstream/emscripten/cache/sysroot/lib/wasm32-emscripten -lGL -lal -lhtml5 -lstubs-debug -lnoexit -lc-debug -ldlmalloc -lcompiler_rt -lc++-noexcept -lc++abi-debug-noexcept -lsockets -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr --import-undefined --strip-debug --export-if-defined=hash_cn --export-if-defined=__start_em_asm --export-if-defined=__stop_em_asm --export-if-defined=__start_em_lib_deps --export-if-defined=__stop_em_lib_deps --export-if-defined=__start_em_js --export-if-defined=__stop_em_js --export-if-defined=fflush --export-if-defined=emscripten_stack_get_end --export-if-defined=emscripten_stack_get_free --export-if-defined=emscripten_stack_get_base --export-if-defined=emscripten_stack_get_current --export-if-defined=emscripten_stack_init --export-if-defined=stackSave --export-if-defined=stackRestore --export-if-defined=stackAlloc --export-if-defined=__errno_location --export-if-defined=__get_temp_ret --export-if-defined=__set_temp_ret --export-if-defined=__wasm_call_ctors --export-if-defined=malloc --export-table -z stack-size=65536 --initial-memory=67108864 --no-entry --max-memory=2147483648 --stack-first
 "/usr/lib/emsdk/upstream/bin/wasm-emscripten-finalize" --dyncalls-i64 --pass-arg=legalize-js-interface-exported-helpers cn.wasm -o cn.wasm --detect-features
 "/usr/lib/emsdk/node/14.18.2_64bit/bin/node" /usr/lib/emsdk/upstream/emscripten/src/compiler.js /tmp/tmp7a2dkw_h.json
 "/usr/lib/emsdk/upstream/bin/llvm-objcopy" cn.wasm cn.wasm --remove-section=.debug* --remove-section=producers
