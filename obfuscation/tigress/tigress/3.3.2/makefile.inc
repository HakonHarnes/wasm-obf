
UNAME_S := $(shell uname -s)
UNAME_M := $(shell uname -m)

ifeq ($(strip $(UNAME_S)),Linux)
   ifeq "${UNAME_M}" "armv7l"
      UNAME_M=armv7
   endif
   ENV=${UNAME_M}:${UNAME_S}:Gcc:4.6
   SELFMOD_OPTIONS=--static -Wl,--omagic
   PTHREAD_OPTIONS=-pthread
else
   ifeq "${UNAME_M}" "arm64" 
      UNAME_M=armv8
   endif
   ENV=${UNAME_M}:${UNAME_S}:Clang:5.1
   SELFMOD_OPTIONS=-segprot __TEXT rwx rwx
   PTHREAD_OPTIONS=
endif

ifeq (${SELFMOD},1)
   CC_OPTIONS=${SELFMOD_OPTIONS} ${OPT_OPTIONS}
else
   CC_OPTIONS=${OPT_OPTIONS}
endif

