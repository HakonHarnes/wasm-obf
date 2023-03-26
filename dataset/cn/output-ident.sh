cn main• ❱ ./build.sh tigress/ident.c cn.js -v
 "/usr/lib/emsdk/upstream/bin/clang" --version
 "/usr/lib/emsdk/upstream/bin/clang" -target wasm32-unknown-emscripten -fignore-exceptions -fvisibility=default -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -DEMSCRIPTEN -Werror=implicit-function-declaration --sysroot=/usr/lib/emsdk/upstream/emscripten/cache/sysroot -Xclang -iwithsysroot/include/fakesdl -Xclang -iwithsysroot/include/compat -I/usr/lib/emsdk/upstream/include/c++/v1 -Wall -Wbad-function-cast -Wcast-function-type -fmacro-backtrace-limit=0 -v tigress/ident.c -c -o /tmp/emscripten_temp_ms94c2eg/ident_0.o
clang version 17.0.0 (https://github.com/llvm/llvm-project df82394e7a2d06506718cafa347bf7827c79fc4f)
Target: wasm32-unknown-emscripten
Thread model: posix
InstalledDir: /usr/lib/emsdk/upstream/bin
 (in-process)
 "/usr/lib/emsdk/upstream/bin/clang-17" -cc1 -triple wasm32-unknown-emscripten -emit-obj -mrelax-all -disable-free -clear-ast-before-backend -disable-llvm-verifier -discard-value-names -main-file-name ident.c -mrelocation-model static -mframe-pointer=none -ffp-contract=on -fno-rounding-math -mconstructor-aliases -target-cpu generic -mllvm -treat-scalable-fixed-error-as-warning -debugger-tuning=gdb -v -fcoverage-compilation-dir=/home/hakon/wasm-obf/dataset/cn -resource-dir /usr/lib/emsdk/upstream/lib/clang/17 -D EMSCRIPTEN -I /usr/lib/emsdk/upstream/include/c++/v1 -isysroot /usr/lib/emsdk/upstream/emscripten/cache/sysroot -internal-isystem /usr/lib/emsdk/upstream/lib/clang/17/include -internal-isystem /usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasm32-emscripten -internal-isystem /usr/lib/emsdk/upstream/emscripten/cache/sysroot/include -Werror=implicit-function-declaration -Wall -Wbad-function-cast -Wcast-function-type -fdebug-compilation-dir=/home/hakon/wasm-obf/dataset/cn -ferror-limit 19 -fmacro-backtrace-limit 0 -fvisibility=default -fgnuc-version=4.2.1 -fignore-exceptions -fcolor-diagnostics -iwithsysroot/include/fakesdl -iwithsysroot/include/compat -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -o /tmp/emscripten_temp_ms94c2eg/ident_0.o -x c tigress/ident.c
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
tigress/ident.c:7020:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:7021:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:7022:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:7023:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:7024:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:7285:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:7286:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:7287:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:7288:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:7289:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:7351:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:7352:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:7353:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:7354:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:7355:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:7495:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:7496:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:7497:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:7498:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:7499:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:8722:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:8723:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:8724:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:8725:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:8726:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:8788:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:8789:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:8790:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:8791:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:8792:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:8854:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:8855:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:8856:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:8857:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:8858:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:8977:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:8978:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:8979:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:8980:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:8981:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:9082:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:9083:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:9084:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:9085:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:9086:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:9148:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:9149:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:9150:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:9151:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:9152:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:10176:7: warning: variable '_BARRIER_0' set but not used [-Wunused-but-set-variable]
  int _BARRIER_0 ;
      ^
tigress/ident.c:16627:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:16628:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:16629:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:16630:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:16631:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:16836:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:16837:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:16838:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:16839:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:16840:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:17238:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:17239:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:17240:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:17241:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:17242:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:17972:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:17973:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:17974:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:17975:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:17976:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:18038:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:18039:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:18040:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:18041:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:18042:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:18615:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:18616:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:18617:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:18618:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:18619:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:18681:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:18682:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:18683:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:18684:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:18685:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:21400:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:21401:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:21402:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:21403:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:21404:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:21533:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:21534:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:21535:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:21536:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:21537:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:21741:9: warning: explicitly assigning value of variable of type 'uint64_t' (aka 'unsigned long long') to itself [-Wself-assign]
      n = n;
      ~ ^ ~
tigress/ident.c:21746:13: warning: explicitly assigning value of variable of type 'uint64_t' (aka 'unsigned long long') to itself [-Wself-assign]
      r___0 = r___0;
      ~~~~~ ^ ~~~~~
tigress/ident.c:21766:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:21767:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:21768:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:21769:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:21770:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:21977:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:21978:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:21979:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:21980:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:21981:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:22066:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:22067:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:22068:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:22069:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:22070:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:22159:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:22160:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:22161:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:22162:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:22163:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:22245:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:22246:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:22247:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:22248:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:22249:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:23164:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:23165:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:23166:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:23167:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:23168:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:23268:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:23269:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:23270:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:23271:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:23272:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:23334:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:23335:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:23336:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:23337:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:23338:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:23456:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:23457:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:23458:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:23459:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:23460:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:23525:7: warning: variable 'tmp___0' set but not used [-Wunused-but-set-variable]
  int tmp___0 ;
      ^
tigress/ident.c:23736:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:23737:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:23738:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:23739:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:23740:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:24181:10: warning: unused variable 'tmp___1' [-Wunused-variable]
  size_t tmp___1 ;
         ^
tigress/ident.c:24505:16: warning: unused variable 'tmp' [-Wunused-variable]
  unsigned int tmp ;
               ^
tigress/ident.c:24506:22: warning: unused variable 'tmp___0' [-Wunused-variable]
  unsigned long long tmp___0 ;
                     ^
tigress/ident.c:24507:7: warning: unused variable 'tmp___1' [-Wunused-variable]
  int tmp___1 ;
      ^
tigress/ident.c:24508:7: warning: unused variable 'tmp___2' [-Wunused-variable]
  int tmp___2 ;
      ^
tigress/ident.c:24509:7: warning: unused variable 'tmp___3' [-Wunused-variable]
  int tmp___3 ;
      ^
tigress/ident.c:22064:21: warning: unused function '__isgreaterequalf' [-Wunused-function]
__inline static int __isgreaterequalf(float_t __x , float_t __y )
                    ^
tigress/ident.c:9080:21: warning: unused function '__isgreater___0' [-Wunused-function]
__inline static int __isgreater___0(double_t __x , double_t __y )
                    ^
tigress/ident.c:18036:21: warning: unused function '__isgreaterl___0' [-Wunused-function]
__inline static int __isgreaterl___0(long double __x , long double __y )
                    ^
tigress/ident.c:7004:26: warning: unused function '__bswap64' [-Wunused-function]
__inline static uint64_t __bswap64(uint64_t __x )
                         ^
tigress/ident.c:21764:21: warning: unused function '__isless' [-Wunused-function]
__inline static int __isless(double_t __x , double_t __y )
                    ^
tigress/ident.c:8975:21: warning: unused function '__islessgreater___0' [-Wunused-function]
__inline static int __islessgreater___0(double_t __x , double_t __y )
                    ^
tigress/ident.c:17236:21: warning: unused function '__islessf___0' [-Wunused-function]
__inline static int __islessf___0(float_t __x , float_t __y )
                    ^
tigress/ident.c:16834:21: warning: unused function '__isgreaterf___0' [-Wunused-function]
__inline static int __isgreaterf___0(float_t __x , float_t __y )
                    ^
tigress/ident.c:8852:21: warning: unused function '__islessequall___0' [-Wunused-function]
__inline static int __islessequall___0(long double __x , long double __y )
                    ^
tigress/ident.c:24503:21: warning: unused function '__isgreaterequalf___0' [-Wunused-function]
__inline static int __isgreaterequalf___0(float_t __x , float_t __y )
                    ^
tigress/ident.c:8786:21: warning: unused function '__islessgreaterf' [-Wunused-function]
__inline static int __islessgreaterf(float_t __x , float_t __y )
                    ^
tigress/ident.c:18613:21: warning: unused function '__islessl___0' [-Wunused-function]
__inline static int __islessl___0(long double __x , long double __y )
                    ^
tigress/ident.c:17302:26: warning: unused function '__bswap16' [-Wunused-function]
__inline static uint16_t __bswap16(uint16_t __x )
                         ^
tigress/ident.c:7493:21: warning: unused function '__isgreaterequal' [-Wunused-function]
__inline static int __isgreaterequal(double_t __x , double_t __y )
                    ^
tigress/ident.c:9146:21: warning: unused function '__islessf' [-Wunused-function]
__inline static int __islessf(float_t __x , float_t __y )
                    ^
tigress/ident.c:21724:26: warning: unused function 'integer_square_root_v2' [-Wunused-function]
__inline static uint32_t integer_square_root_v2(uint64_t n )
                         ^
tigress/ident.c:21531:21: warning: unused function '__isless___0' [-Wunused-function]
__inline static int __isless___0(double_t __x , double_t __y )
                    ^
tigress/ident.c:23734:21: warning: unused function '__islessequal___0' [-Wunused-function]
__inline static int __islessequal___0(double_t __x , double_t __y )
                    ^
tigress/ident.c:7349:21: warning: unused function '__isgreaterequall' [-Wunused-function]
__inline static int __isgreaterequall(long double __x , long double __y )
                    ^
tigress/ident.c:21975:21: warning: unused function '__isgreaterequal___0' [-Wunused-function]
__inline static int __isgreaterequal___0(double_t __x , double_t __y )
                    ^
tigress/ident.c:23454:21: warning: unused function '__islessgreater' [-Wunused-function]
__inline static int __islessgreater(double_t __x , double_t __y )
                    ^
tigress/ident.c:17970:21: warning: unused function '__islessequalf' [-Wunused-function]
__inline static int __islessequalf(float_t __x , float_t __y )
                    ^
tigress/ident.c:22157:21: warning: unused function '__islessgreaterl___0' [-Wunused-function]
__inline static int __islessgreaterl___0(long double __x , long double __y )
                    ^
tigress/ident.c:21398:21: warning: unused function '__isgreaterl' [-Wunused-function]
__inline static int __isgreaterl(long double __x , long double __y )
                    ^
tigress/ident.c:7018:21: warning: unused function '__isgreaterequall___0' [-Wunused-function]
__inline static int __isgreaterequall___0(long double __x , long double __y )
                    ^
tigress/ident.c:22243:21: warning: unused function '__isgreater' [-Wunused-function]
__inline static int __isgreater(double_t __x , double_t __y )
                    ^
tigress/ident.c:7283:21: warning: unused function '__islessequalf___0' [-Wunused-function]
__inline static int __islessequalf___0(float_t __x , float_t __y )
                    ^
tigress/ident.c:16625:21: warning: unused function '__islessequal' [-Wunused-function]
__inline static int __islessequal(double_t __x , double_t __y )
                    ^
tigress/ident.c:8720:21: warning: unused function '__isgreaterf' [-Wunused-function]
__inline static int __isgreaterf(float_t __x , float_t __y )
                    ^
tigress/ident.c:23266:21: warning: unused function '__islessequall' [-Wunused-function]
__inline static int __islessequall(long double __x , long double __y )
                    ^
tigress/ident.c:23332:21: warning: unused function '__islessgreaterl' [-Wunused-function]
__inline static int __islessgreaterl(long double __x , long double __y )
                    ^
tigress/ident.c:18679:21: warning: unused function '__islessgreaterf___0' [-Wunused-function]
__inline static int __islessgreaterf___0(float_t __x , float_t __y )
                    ^
tigress/ident.c:23162:21: warning: unused function '__islessl' [-Wunused-function]
__inline static int __islessl(long double __x , long double __y )
                    ^
188 warnings generated.
system_libs:WARNING: main() is in the input files, but "_main" is not in EXPORTED_FUNCTIONS, which means it may be eliminated as dead code. Export it if you want main() to run.
 "/usr/lib/emsdk/upstream/bin/wasm-ld" -o cn.wasm /tmp/emscripten_temp_ms94c2eg/ident_0.o -L/usr/lib/emsdk/upstream/emscripten/cache/sysroot/lib/wasm32-emscripten -lGL -lal -lhtml5 -lstubs-debug -lnoexit -lc-debug -ldlmalloc -lcompiler_rt -lc++-noexcept -lc++abi-debug-noexcept -lsockets -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr --import-undefined --strip-debug --export-if-defined=hash_cn --export-if-defined=__start_em_asm --export-if-defined=__stop_em_asm --export-if-defined=__start_em_lib_deps --export-if-defined=__stop_em_lib_deps --export-if-defined=__start_em_js --export-if-defined=__stop_em_js --export-if-defined=fflush --export-if-defined=emscripten_stack_get_end --export-if-defined=emscripten_stack_get_free --export-if-defined=emscripten_stack_get_base --export-if-defined=emscripten_stack_get_current --export-if-defined=emscripten_stack_init --export-if-defined=stackSave --export-if-defined=stackRestore --export-if-defined=stackAlloc --export-if-defined=__errno_location --export-if-defined=__get_temp_ret --export-if-defined=__set_temp_ret --export-if-defined=__wasm_call_ctors --export-if-defined=malloc --export-table -z stack-size=65536 --initial-memory=67108864 --no-entry --max-memory=2147483648 --stack-first
 "/usr/lib/emsdk/upstream/bin/wasm-emscripten-finalize" --dyncalls-i64 --pass-arg=legalize-js-interface-exported-helpers cn.wasm -o cn.wasm --detect-features
 "/usr/lib/emsdk/node/14.18.2_64bit/bin/node" /usr/lib/emsdk/upstream/emscripten/src/compiler.js /tmp/tmp32rkp46o.json
 "/usr/lib/emsdk/upstream/bin/llvm-objcopy" cn.wasm cn.wasm --remove-section=.debug* --remove-section=producers
