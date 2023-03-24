int main(){}
#line 139 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned long size_t;
#line 410
struct __locale_struct ;
#line 410 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __locale_struct *locale_t;
#line 144 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned long uintptr_t;
#line 159 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef long intptr_t;
#line 175 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef signed char int8_t;
#line 180 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef short int16_t;
#line 185 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int int32_t;
#line 190 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef long long int64_t;
#line 195 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef long long intmax_t;
#line 200 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned char uint8_t;
#line 205 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned short uint16_t;
#line 210 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int uint32_t;
#line 215 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned long long uint64_t;
#line 225 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned long long uintmax_t;
#line 22 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef int8_t int_fast8_t;
#line 23 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef int64_t int_fast64_t;
#line 25 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef int8_t int_least8_t;
#line 26 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef int16_t int_least16_t;
#line 27 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef int32_t int_least32_t;
#line 28 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef int64_t int_least64_t;
#line 30 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef uint8_t uint_fast8_t;
#line 31 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef uint64_t uint_fast64_t;
#line 33 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef uint8_t uint_least8_t;
#line 34 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef uint16_t uint_least16_t;
#line 35 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef uint32_t uint_least32_t;
#line 36 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdint.h"
typedef uint64_t uint_least64_t;
#line 1 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/stdint.h"
typedef int32_t int_fast16_t;
#line 2 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/stdint.h"
typedef int32_t int_fast32_t;
#line 3 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/stdint.h"
typedef uint32_t uint_fast16_t;
#line 4 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/stdint.h"
typedef uint32_t uint_fast32_t;
#line 15 "blake.c"
struct __anonstruct_state_458909354 {
   uint32_t h[8] ;
   uint32_t s[4] ;
   uint32_t t[2] ;
   int buflen ;
   int nullt ;
   uint8_t buf[64] ;
};
#line 15 "blake.c"
typedef struct __anonstruct_state_458909354 state;
#line 21 "blake.c"
struct __anonstruct_hmac_state_64111697 {
   state inner ;
   state outer ;
};
#line 21 "blake.c"
typedef struct __anonstruct_hmac_state_64111697 hmac_state;
#line 38 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int wchar_t;
#line 64 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdlib.h"
struct __anonstruct_div_t_109580352 {
   int quot ;
   int rem ;
};
#line 64 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdlib.h"
typedef struct __anonstruct_div_t_109580352 div_t;
#line 65 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdlib.h"
struct __anonstruct_ldiv_t_721778306 {
   long quot ;
   long rem ;
};
#line 65 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdlib.h"
typedef struct __anonstruct_ldiv_t_721778306 ldiv_t;
#line 66 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdlib.h"
struct __anonstruct_lldiv_t_989260392 {
   long long quot ;
   long long rem ;
};
#line 66 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdlib.h"
typedef struct __anonstruct_lldiv_t_989260392 lldiv_t;
#line 58 "./oaes_lib.h"
typedef void OAES_CTX;
#line 60
enum __anonenum_OAES_RET_978995053 {
    OAES_RET_FIRST = 0,
    OAES_RET_SUCCESS = 0,
    OAES_RET_UNKNOWN = 1,
    OAES_RET_ARG1 = 2,
    OAES_RET_ARG2 = 3,
    OAES_RET_ARG3 = 4,
    OAES_RET_ARG4 = 5,
    OAES_RET_ARG5 = 6,
    OAES_RET_NOKEY = 7,
    OAES_RET_MEM = 8,
    OAES_RET_BUF = 9,
    OAES_RET_HEADER = 10,
    OAES_RET_COUNT = 11
} ;
#line 60 "./oaes_lib.h"
typedef enum __anonenum_OAES_RET_978995053 OAES_RET;
#line 103 "./oaes_lib.h"
typedef uint16_t OAES_OPTION;
#line 105 "./oaes_lib.h"
struct _oaes_key {
   size_t data_len ;
   uint8_t *data ;
   size_t exp_data_len ;
   uint8_t *exp_data ;
   size_t num_keys ;
   size_t key_base ;
};
#line 105 "./oaes_lib.h"
typedef struct _oaes_key oaes_key;
#line 115 "./oaes_lib.h"
struct _oaes_ctx {
   oaes_key *key ;
   OAES_OPTION options ;
   uint8_t iv[16] ;
};
#line 115 "./oaes_lib.h"
typedef struct _oaes_ctx oaes_ctx;
#line 58 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef float float_t;
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef double double_t;
#line 57 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_477865197 {
   float __f ;
   unsigned int __i ;
};
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_302425027 {
   double __f ;
   unsigned long long __i ;
};
#line 6 "./variant4_random_math.h"
typedef uint32_t v4_reg;
#line 8
enum V4_Settings {
    TOTAL_LATENCY = 45,
    NUM_INSTRUCTIONS_MIN = 60,
    NUM_INSTRUCTIONS_MAX = 70,
    ALU_COUNT_MUL = 1,
    ALU_COUNT = 3
} ;
#line 28
enum V4_InstructionList {
    MUL = 0,
    ADD = 1,
    SUB = 2,
    ROR = 3,
    ROL = 4,
    XOR = 5,
    RET = 6,
    V4_INSTRUCTION_COUNT = 6
} ;
#line 47
enum V4_InstructionDefinition {
    V4_OPCODE_BITS = 3,
    V4_DST_INDEX_BITS = 2,
    V4_SRC_INDEX_BITS = 3
} ;
#line 55 "./variant4_random_math.h"
struct V4_Instruction {
   uint8_t dst_index ;
   uint8_t src_index ;
   uint8_t opcode ;
   uint32_t C ;
};
#line 90
enum __anonenum_290349631 {
    REG_BITS = 32
} ;
#line 283 "cryptonight.c"
#pragma pack(push,1)
#line 284 "cryptonight.c"
union hash_state {
   uint8_t b[200] ;
   uint64_t w[25] ;
};
#line 288
#pragma pack(pop)
#line 290
#pragma pack(push,1)
#line 291 "cryptonight.c"
struct __anonstruct____missing_field_name_569059773 {
   uint8_t k[64] ;
   uint8_t init[128] ;
};
#line 291 "cryptonight.c"
union cn_slow_hash_state {
   union hash_state hs ;
   struct __anonstruct____missing_field_name_569059773 __annonCompField1 ;
};
#line 299
#pragma pack(pop)
#line 15 "groestl.c"
typedef unsigned char BitSequence;
#line 16 "groestl.c"
typedef unsigned long long DataLength;
#line 17
enum __anonenum_HashReturn_168286652 {
    SUCCESS = 0,
    FAIL = 1,
    BAD_HASHLEN = 2
} ;
#line 17 "groestl.c"
typedef enum __anonenum_HashReturn_168286652 HashReturn;
#line 38 "groestl.c"
struct __anonstruct_groestlHashState_1007981897 {
   uint32_t chaining[64UL / sizeof(uint32_t )] ;
   uint32_t block_counter1 ;
   uint32_t block_counter2 ;
   BitSequence buffer[64] ;
   int buf_ptr ;
   int bits_in_last_byte ;
};
#line 38 "groestl.c"
typedef struct __anonstruct_groestlHashState_1007981897 groestlHashState;
#line 23 "jh_ansi_opt64.c"
typedef unsigned long long uint64;
#line 37 "jh_ansi_opt64.c"
struct __anonstruct_hashState_550063874 {
   int hashbitlen ;
   unsigned long long databitlen ;
   unsigned long long datasize_in_buffer ;
   uint64 x[8][2]  __attribute__((__aligned__(16))) ;
   unsigned char buffer[64] ;
};
#line 37 "jh_ansi_opt64.c"
typedef struct __anonstruct_hashState_550063874 hashState;
#line 94 "keccak.c"
typedef uint64_t state_t[25];
#line 35 "/usr/lib/emsdk/upstream/lib/clang/17/include/stddef.h"
typedef long ptrdiff_t;
#line 19 "/usr/lib/emsdk/upstream/lib/clang/17/include/__stddef_max_align_t.h"
struct __anonstruct_max_align_t_835649992 {
   long long __clang_max_align_nonce1  __attribute__((__aligned__(__alignof__(long long )))) ;
   long double __clang_max_align_nonce2  __attribute__((__aligned__(__alignof__(long double )))) ;
};
#line 19 "/usr/lib/emsdk/upstream/lib/clang/17/include/__stddef_max_align_t.h"
typedef struct __anonstruct_max_align_t_835649992 max_align_t;
#line 52 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef unsigned long __wasi_size_t;
#line 60 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint64_t __wasi_filesize_t;
#line 68 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint64_t __wasi_timestamp_t;
#line 76 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint32_t __wasi_clockid_t;
#line 111 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_errno_t;
#line 504 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint64_t __wasi_rights_t;
#line 669 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint32_t __wasi_fd_t;
#line 677 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_iovec_t {
   uint8_t *buf ;
   __wasi_size_t buf_len ;
};
#line 677 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_iovec_t __wasi_iovec_t;
#line 698 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_ciovec_t {
   uint8_t const   *buf ;
   __wasi_size_t buf_len ;
};
#line 698 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_ciovec_t __wasi_ciovec_t;
#line 719 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef int64_t __wasi_filedelta_t;
#line 727 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint8_t __wasi_whence_t;
#line 752 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint64_t __wasi_dircookie_t;
#line 760 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint32_t __wasi_dirnamlen_t;
#line 768 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint64_t __wasi_inode_t;
#line 776 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint8_t __wasi_filetype_t;
#line 824 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_dirent_t {
   __wasi_dircookie_t d_next ;
   __wasi_inode_t d_ino ;
   __wasi_dirnamlen_t d_namlen ;
   __wasi_filetype_t d_type ;
};
#line 824 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_dirent_t __wasi_dirent_t;
#line 857 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint8_t __wasi_advice_t;
#line 895 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_fdflags_t;
#line 930 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_fdstat_t {
   __wasi_filetype_t fs_filetype ;
   __wasi_fdflags_t fs_flags ;
   __wasi_rights_t fs_rights_base ;
   __wasi_rights_t fs_rights_inheriting ;
};
#line 930 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_fdstat_t __wasi_fdstat_t;
#line 965 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint64_t __wasi_device_t;
#line 973 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_fstflags_t;
#line 1001 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint32_t __wasi_lookupflags_t;
#line 1014 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_oflags_t;
#line 1042 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint64_t __wasi_linkcount_t;
#line 1050 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_filestat_t {
   __wasi_device_t dev ;
   __wasi_inode_t ino ;
   __wasi_filetype_t filetype ;
   __wasi_linkcount_t nlink ;
   __wasi_filesize_t size ;
   __wasi_timestamp_t atim ;
   __wasi_timestamp_t mtim ;
   __wasi_timestamp_t ctim ;
};
#line 1050 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_filestat_t __wasi_filestat_t;
#line 1108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint64_t __wasi_userdata_t;
#line 1116 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint8_t __wasi_eventtype_t;
#line 1143 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_eventrwflags_t;
#line 1157 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_event_fd_readwrite_t {
   __wasi_filesize_t nbytes ;
   __wasi_eventrwflags_t flags ;
};
#line 1157 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_event_fd_readwrite_t __wasi_event_fd_readwrite_t;
#line 1178 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
union __wasi_event_u_t {
   __wasi_event_fd_readwrite_t fd_readwrite ;
};
#line 1178 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef union __wasi_event_u_t __wasi_event_u_t;
#line 1192 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_event_t {
   __wasi_userdata_t userdata ;
   __wasi_errno_t error ;
   __wasi_eventtype_t type ;
   __wasi_event_u_t u ;
};
#line 1192 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_event_t __wasi_event_t;
#line 1226 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_subclockflags_t;
#line 1243 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_subscription_clock_t {
   __wasi_clockid_t id ;
   __wasi_timestamp_t timeout ;
   __wasi_timestamp_t precision ;
   __wasi_subclockflags_t flags ;
};
#line 1243 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_subscription_clock_t __wasi_subscription_clock_t;
#line 1278 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_subscription_fd_readwrite_t {
   __wasi_fd_t file_descriptor ;
};
#line 1278 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_subscription_fd_readwrite_t __wasi_subscription_fd_readwrite_t;
#line 1293 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
union __wasi_subscription_u_t {
   __wasi_subscription_clock_t clock ;
   __wasi_subscription_fd_readwrite_t fd_readwrite ;
};
#line 1293 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef union __wasi_subscription_u_t __wasi_subscription_u_t;
#line 1312 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_subscription_t {
   __wasi_userdata_t userdata ;
   __wasi_eventtype_t type ;
   __wasi_subscription_u_t u ;
};
#line 1312 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_subscription_t __wasi_subscription_t;
#line 1340 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint32_t __wasi_exitcode_t;
#line 1348 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint8_t __wasi_signal_t;
#line 1542 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_riflags_t;
#line 1560 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_roflags_t;
#line 1574 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint16_t __wasi_siflags_t;
#line 1582 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint8_t __wasi_sdflags_t;
#line 1600 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef uint8_t __wasi_preopentype_t;
#line 1613 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_prestat_dir_t {
   __wasi_size_t pr_name_len ;
};
#line 1613 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_prestat_dir_t __wasi_prestat_dir_t;
#line 1628 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
union __wasi_prestat_u_t {
   __wasi_prestat_dir_t dir ;
};
#line 1628 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef union __wasi_prestat_u_t __wasi_prestat_u_t;
#line 1642 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
struct __wasi_prestat_t {
   __wasi_preopentype_t pr_type ;
   __wasi_prestat_u_t u ;
};
#line 1642 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
typedef struct __wasi_prestat_t __wasi_prestat_t;
#line 13 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef __builtin_va_list va_list;
#line 18 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef __builtin_va_list __isoc_va_list;
#line 154 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef long ssize_t;
#line 241 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef long long off_t;
#line 398
struct _IO_FILE ;
#line 398 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct _IO_FILE FILE;
#line 66 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdio.h"
union _G_fpos64_t {
   char __opaque[16] ;
   long long __lldata ;
   double __align ;
};
#line 66 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdio.h"
typedef union _G_fpos64_t fpos_t;
#line 81 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef long long time_t;
#line 287 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef void *timer_t;
#line 292 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int clockid_t;
#line 297 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int clock_t;
#line 312 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct timespec {
   time_t tv_sec ;
   long tv_nsec ;
};
#line 318 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int pid_t;
#line 40 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/time.h"
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const   *tm_zone ;
};
#line 82 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/time.h"
struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};
#line 109
struct sigevent ;
#line 57 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_477865197___0 {
   float __f ;
   unsigned int __i ;
};
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_302425027___0 {
   double __f ;
   unsigned long long __i ;
};
#line 10 "./cryptonight.h"
struct cryptonight_ctx ;
#line 21 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/compat/sys/timeb.h"
struct timeb {
   time_t time ;
   unsigned short millitm ;
   short timezone ;
   short dstflag ;
};
#line 13 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/compat/malloc.h"
struct mallinfo {
   int arena ;
   int ordblks ;
   int smblks ;
   int hblks ;
   int hblkhd ;
   int usmblks ;
   int fsmblks ;
   int uordblks ;
   int fordblks ;
   int keepcost ;
};
#line 86 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int suseconds_t;
#line 92 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_898357595 {
   int __i[10] ;
   int volatile   __vi[10] ;
   unsigned long __s[10] ;
};
#line 92 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_attr_t_569149330 {
   union __anonunion___u_898357595 __u ;
   char const   *_a_transferredcanvases ;
};
#line 92 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_attr_t_569149330 pthread_attr_t;
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_546072648 {
   int __i[6] ;
   int volatile   __vi[6] ;
   void volatile   *__p[6] ;
};
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_mutex_t_858866153 {
   union __anonunion___u_546072648 __u ;
};
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_mutex_t_858866153 pthread_mutex_t;
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_357071066 {
   int __i[12] ;
   int volatile   __vi[12] ;
   void *__p[12] ;
};
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_cond_t_569797212 {
   union __anonunion___u_357071066 __u ;
};
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_cond_t_569797212 pthread_cond_t;
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_638102165 {
   int __i[8] ;
   int volatile   __vi[8] ;
   void *__p[8] ;
};
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_rwlock_t_638102164 {
   union __anonunion___u_638102165 __u ;
};
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_rwlock_t_638102164 pthread_rwlock_t;
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_638102166 {
   int __i[5] ;
   int volatile   __vi[5] ;
   void *__p[5] ;
};
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_barrier_t_632319124 {
   union __anonunion___u_638102166 __u ;
};
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_barrier_t_632319124 pthread_barrier_t;
#line 169 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef long register_t;
#line 220 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned long long u_int64_t;
#line 231 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int mode_t;
#line 236 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned long nlink_t;
#line 246 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned long long ino_t;
#line 251 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int dev_t;
#line 256 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int blksize_t;
#line 261 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int blkcnt_t;
#line 266 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int fsblkcnt_t;
#line 271 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int fsfilcnt_t;
#line 323 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int id_t;
#line 328 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int uid_t;
#line 333 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int gid_t;
#line 338 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int key_t;
#line 343 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int useconds_t;
#line 356
struct __pthread ;
#line 356 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __pthread *pthread_t;
#line 362 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int pthread_once_t;
#line 367 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned int pthread_key_t;
#line 372 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int pthread_spinlock_t;
#line 377 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_mutexattr_t_32904001 {
   unsigned int __attr ;
};
#line 377 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_mutexattr_t_32904001 pthread_mutexattr_t;
#line 382 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_condattr_t_32904002 {
   unsigned int __attr ;
};
#line 382 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_condattr_t_32904002 pthread_condattr_t;
#line 387 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_barrierattr_t_32904003 {
   unsigned int __attr ;
};
#line 387 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_barrierattr_t_32904003 pthread_barrierattr_t;
#line 392 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_rwlockattr_t_32904004 {
   unsigned int __attr[2] ;
};
#line 392 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_rwlockattr_t_32904004 pthread_rwlockattr_t;
#line 60 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned char u_int8_t;
#line 61 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned short u_int16_t;
#line 62 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned int u_int32_t;
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef char *caddr_t;
#line 64 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned char u_char;
#line 65 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned short u_short;
#line 65 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned short ushort;
#line 66 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned int u_int;
#line 66 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned int uint;
#line 67 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned long u_long;
#line 67 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned long ulong;
#line 68 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef long long quad_t;
#line 69 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/types.h"
typedef unsigned long long u_quad_t;
#line 307 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct timeval {
   time_t tv_sec ;
   suseconds_t tv_usec ;
};
#line 416 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __sigset_t {
   unsigned long __bits[128UL / sizeof(long )] ;
};
#line 416 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __sigset_t sigset_t;
#line 20 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/select.h"
typedef unsigned long fd_mask;
#line 22 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/select.h"
struct __anonstruct_fd_set_143082958 {
   unsigned long fds_bits[128UL / sizeof(long )] ;
};
#line 22 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/select.h"
typedef struct __anonstruct_fd_set_143082958 fd_set;
#line 61 "./skein_port.h"
typedef unsigned int uint_t;
#line 62 "./skein_port.h"
typedef uint8_t u08b_t;
#line 63 "./skein_port.h"
typedef uint64_t u64b_t;
#line 18 "skein.c"
enum __anonenum_SkeinHashReturn_432432649 {
    SKEIN_SUCCESS = 0,
    SKEIN_FAIL = 1,
    SKEIN_BAD_HASHLEN = 2
} ;
#line 18 "skein.c"
typedef enum __anonenum_SkeinHashReturn_432432649 SkeinHashReturn;
#line 27 "skein.c"
typedef u08b_t SkeinBitSequence;
#line 63 "skein.c"
struct __anonstruct_Skein_Ctxt_Hdr_t_294318545 {
   size_t hashBitLen ;
   size_t bCnt ;
   u64b_t T[2] ;
};
#line 63 "skein.c"
typedef struct __anonstruct_Skein_Ctxt_Hdr_t_294318545 Skein_Ctxt_Hdr_t;
#line 70 "skein.c"
struct __anonstruct_Skein_256_Ctxt_t_613066829 {
   Skein_Ctxt_Hdr_t h ;
   u64b_t X[4] ;
   u08b_t b[32] ;
};
#line 70 "skein.c"
typedef struct __anonstruct_Skein_256_Ctxt_t_613066829 Skein_256_Ctxt_t;
#line 77 "skein.c"
struct __anonstruct_Skein_512_Ctxt_t_613066830 {
   Skein_Ctxt_Hdr_t h ;
   u64b_t X[8] ;
   u08b_t b[64] ;
};
#line 77 "skein.c"
typedef struct __anonstruct_Skein_512_Ctxt_t_613066830 Skein_512_Ctxt_t;
#line 84 "skein.c"
struct __anonstruct_Skein1024_Ctxt_t_613066831 {
   Skein_Ctxt_Hdr_t h ;
   u64b_t X[16] ;
   u08b_t b[128] ;
};
#line 84 "skein.c"
typedef struct __anonstruct_Skein1024_Ctxt_t_613066831 Skein1024_Ctxt_t;
#line 284
enum __anonenum_124377417 {
    R_256_0_0 = 14,
    R_256_0_1 = 16,
    R_256_1_0 = 52,
    R_256_1_1 = 57,
    R_256_2_0 = 23,
    R_256_2_1 = 40,
    R_256_3_0 = 5,
    R_256_3_1 = 37,
    R_256_4_0 = 25,
    R_256_4_1 = 33,
    R_256_5_0 = 46,
    R_256_5_1 = 12,
    R_256_6_0 = 58,
    R_256_6_1 = 22,
    R_256_7_0 = 32,
    R_256_7_1 = 32,
    R_512_0_0 = 46,
    R_512_0_1 = 36,
    R_512_0_2 = 19,
    R_512_0_3 = 37,
    R_512_1_0 = 33,
    R_512_1_1 = 27,
    R_512_1_2 = 14,
    R_512_1_3 = 42,
    R_512_2_0 = 17,
    R_512_2_1 = 49,
    R_512_2_2 = 36,
    R_512_2_3 = 39,
    R_512_3_0 = 44,
    R_512_3_1 = 9,
    R_512_3_2 = 54,
    R_512_3_3 = 56,
    R_512_4_0 = 39,
    R_512_4_1 = 30,
    R_512_4_2 = 34,
    R_512_4_3 = 24,
    R_512_5_0 = 13,
    R_512_5_1 = 50,
    R_512_5_2 = 10,
    R_512_5_3 = 17,
    R_512_6_0 = 25,
    R_512_6_1 = 29,
    R_512_6_2 = 39,
    R_512_6_3 = 43,
    R_512_7_0 = 8,
    R_512_7_1 = 35,
    R_512_7_2 = 56,
    R_512_7_3 = 22,
    R1024_0_0 = 24,
    R1024_0_1 = 13,
    R1024_0_2 = 8,
    R1024_0_3 = 47,
    R1024_0_4 = 8,
    R1024_0_5 = 17,
    R1024_0_6 = 22,
    R1024_0_7 = 37,
    R1024_1_0 = 38,
    R1024_1_1 = 19,
    R1024_1_2 = 10,
    R1024_1_3 = 55,
    R1024_1_4 = 49,
    R1024_1_5 = 18,
    R1024_1_6 = 23,
    R1024_1_7 = 52,
    R1024_2_0 = 33,
    R1024_2_1 = 4,
    R1024_2_2 = 51,
    R1024_2_3 = 13,
    R1024_2_4 = 34,
    R1024_2_5 = 41,
    R1024_2_6 = 59,
    R1024_2_7 = 17,
    R1024_3_0 = 5,
    R1024_3_1 = 20,
    R1024_3_2 = 48,
    R1024_3_3 = 41,
    R1024_3_4 = 47,
    R1024_3_5 = 28,
    R1024_3_6 = 16,
    R1024_3_7 = 25,
    R1024_4_0 = 41,
    R1024_4_1 = 9,
    R1024_4_2 = 37,
    R1024_4_3 = 31,
    R1024_4_4 = 12,
    R1024_4_5 = 47,
    R1024_4_6 = 44,
    R1024_4_7 = 30,
    R1024_5_0 = 16,
    R1024_5_1 = 34,
    R1024_5_2 = 56,
    R1024_5_3 = 51,
    R1024_5_4 = 4,
    R1024_5_5 = 53,
    R1024_5_6 = 42,
    R1024_5_7 = 41,
    R1024_6_0 = 31,
    R1024_6_1 = 44,
    R1024_6_2 = 47,
    R1024_6_3 = 46,
    R1024_6_4 = 19,
    R1024_6_5 = 42,
    R1024_6_6 = 44,
    R1024_6_7 = 25,
    R1024_7_0 = 9,
    R1024_7_1 = 48,
    R1024_7_2 = 35,
    R1024_7_3 = 52,
    R1024_7_4 = 23,
    R1024_7_5 = 31,
    R1024_7_6 = 37,
    R1024_7_7 = 20
} ;
#line 546
enum __anonenum_816264633 {
    WCNT = 4
} ;
#line 731
enum __anonenum_816264634 {
    WCNT___0 = 8
} ;
#line 939
enum __anonenum_816264635 {
    WCNT___1 = 16
} ;
#line 1401 "skein.c"
union __anonunion_cfg_200192499 {
   u08b_t b[64] ;
   u64b_t w[8] ;
};
#line 1600 "skein.c"
union __anonunion_cfg_200192500 {
   u08b_t b[128] ;
   u64b_t w[16] ;
};
#line 1934 "skein.c"
union __anonunion_u_1050245620 {
   Skein_Ctxt_Hdr_t h ;
   Skein_256_Ctxt_t ctx_256 ;
   Skein_512_Ctxt_t ctx_512 ;
   Skein1024_Ctxt_t ctx1024 ;
};
#line 1934 "skein.c"
struct __anonstruct_hashState_369367684 {
   uint_t statebits ;
   union __anonunion_u_1050245620 u ;
};
#line 1934 "skein.c"
typedef struct __anonstruct_hashState_369367684 hashState___0;
/* compiler builtin: 
   void __builtin_va_copy(__builtin_va_list  , __builtin_va_list  ) ;  */
/* compiler builtin: 
   void *__builtin_frob_return_address(void * ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_and_and_fetch(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_fetch_and_or(...) ;  */
/* compiler builtin: 
   int __builtin_popcountll(unsigned long long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_or_fetch(...) ;  */
/* compiler builtin: 
   float __builtin_atanf(float  ) ;  */
/* compiler builtin: 
   float __attribute__((____vector_size____(16)))  __builtin_ia32_addps(float __attribute__((____vector_size____(16)))   ,
                                                                        float __attribute__((____vector_size____(16)))   ) ;  */
/* compiler builtin: 
   unsigned long __builtin_strcspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   float __builtin_asinf(float  ) ;  */
/* compiler builtin: 
   float __attribute__((____vector_size____(16)))  __builtin_ia32_maxps(float __attribute__((____vector_size____(16)))   ,
                                                                        float __attribute__((____vector_size____(16)))   ) ;  */
/* compiler builtin: 
   float __attribute__((____vector_size____(16)))  __builtin_ia32_unpckhps(float __attribute__((____vector_size____(16)))   ,
                                                                           float __attribute__((____vector_size____(16)))   ) ;  */
/* compiler builtin: 
   double __builtin_acos(double  ) ;  */
/* compiler builtin: 
   int __builtin___sprintf_chk(char * , int  , unsigned long  , char const   *  , ...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_nand_fetch_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_and(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_xor_fetch_16(...) ;  */
/* compiler builtin: 
   double __builtin_cosh(double  ) ;  */
/* compiler builtin: 
   float __builtin_tanhf(float  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_nand_16(...) ;  */
/* compiler builtin: 
   void *__builtin_mempcpy(void * , void const   * , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_sub_fetch_1(...) ;  */
/* compiler builtin: 
   long double __builtin_sqrtl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_parity(unsigned int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_or(...) ;  */
/* compiler builtin: 
   long double __builtin_coshl(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_cosl(long double  ) ;  */
/* compiler builtin: 
   float __builtin_cosf(float  ) ;  */
/* compiler builtin: 
   void __sync_synchronize(...) ;  */
/* compiler builtin: 
   long double __builtin_acosl(long double  ) ;  */
/* compiler builtin: 
   void *__builtin___mempcpy_chk(void * , void const   * , unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_or_and_fetch(...) ;  */
/* compiler builtin: 
   int __builtin_clz(unsigned int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_nand_fetch_4(...) ;  */
/* compiler builtin: 
   double __builtin_log10(double  ) ;  */
/* compiler builtin: 
   char *__builtin___strcat_chk(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_modff(float  , float * ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_sub_fetch_4(...) ;  */
/* compiler builtin: 
   _Bool __atomic_compare_exchange_n(...) ;  */
/* compiler builtin: 
   double __builtin_sin(double  ) ;  */
/* compiler builtin: 
   double __builtin_frexp(double  , int * ) ;  */
/* compiler builtin: 
   float __builtin_acosf(float  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_add_and_fetch(...) ;  */
/* compiler builtin: 
   long double __builtin_sinhl(long double  ) ;  */
/* compiler builtin: 
   char *__builtin___stpcpy_chk(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   void __atomic_signal_fence(int  ) ;  */
/* compiler builtin: 
   double __builtin_fabs(double  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_nand_1(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_and_fetch_16(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_fetch_and_nand(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_xor_fetch_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_xor_fetch_2(...) ;  */
/* compiler builtin: 
   void __atomic_thread_fence(int  ) ;  */
/* compiler builtin: 
   void __atomic_store_16(...) ;  */
/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_and_8(...) ;  */
/* compiler builtin: 
   short __builtin_bswap16(short  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_and_fetch_2(...) ;  */
/* compiler builtin: 
   _Bool __atomic_test_and_set(void * , int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_add_8(...) ;  */
/* compiler builtin: 
   int __builtin_ctz(unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin_strpbrk(char const   * , char const   * ) ;  */
/* compiler builtin: 
   char *__builtin_strcpy(char * , char const   * ) ;  */
/* compiler builtin: 
   double __builtin_sqrt(double  ) ;  */
/* compiler builtin: 
   __builtin_va_list __builtin_next_arg(void) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_nand(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_exchange_16(...) ;  */
/* compiler builtin: 
   void __atomic_clear(_Bool * , int  ) ;  */
/* compiler builtin: 
   void __atomic_store(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_add_fetch_2(...) ;  */
/* compiler builtin: 
   float __builtin_log10f(float  ) ;  */
/* compiler builtin: 
   long double __builtin_fabsl(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_floorl(long double  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_xor_1(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_and_fetch(...) ;  */
/* compiler builtin: 
   float __builtin_floorf(float  ) ;  */
/* compiler builtin: 
   _Bool __atomic_compare_exchange_4(...) ;  */
/* compiler builtin: 
   void *__builtin_memcpy(void * , void const   * , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_sub_and_fetch(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_nand_and_fetch(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_load_16(...) ;  */
/* compiler builtin: 
   float __attribute__((____vector_size____(16)))  __builtin_ia32_subps(float __attribute__((____vector_size____(16)))   ,
                                                                        float __attribute__((____vector_size____(16)))   ) ;  */
/* compiler builtin: 
   int __builtin_parityll(unsigned long long  ) ;  */
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __builtin_bzero(void * , unsigned long  ) ;  */
/* compiler builtin: 
   _Bool __atomic_always_lock_free(unsigned long  , void * ) ;  */
/* compiler builtin: 
   int __builtin_strncmp(char const   * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_nand_fetch_16(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_xor_and_fetch(...) ;  */
/* compiler builtin: 
   int __builtin___vsprintf_chk(char * , int  , unsigned long  , char const   * ,
                                __builtin_va_list  ) ;  */
/* compiler builtin: 
   float __builtin_sqrtf(float  ) ;  */
/* compiler builtin: 
   double __builtin_nans(char const   * ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_xor_8(...) ;  */
/* compiler builtin: 
   double __builtin_exp(double  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_exchange_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_exchange_1(...) ;  */
/* compiler builtin: 
   int __builtin_strcmp(char const   * , char const   * ) ;  */
/* compiler builtin: 
   float __builtin_ldexpf(float  , int  ) ;  */
/* compiler builtin: 
   float __builtin_powif(float  , int  ) ;  */
/* compiler builtin: 
   long double __builtin_log10l(long double  ) ;  */
/* compiler builtin: 
   void *__builtin___memmove_chk(void * , void const   * , unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_fetch_and_and(...) ;  */
/* compiler builtin: 
   void *__builtin_return_address(unsigned int  ) ;  */
/* compiler builtin: 
   void __atomic_feraiseexcept(int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_and_fetch_4(...) ;  */
/* compiler builtin: 
   float __builtin_fabsf(float  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_or_fetch_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_or_fetch_4(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_or_fetch_1(...) ;  */
/* compiler builtin: 
   unsigned long __builtin_object_size(void * , int  ) ;  */
/* compiler builtin: 
   void *__builtin_alloca(unsigned long  ) ;  */
/* compiler builtin: 
   int __builtin_va_arg_pack_len(void) ;  */
/* compiler builtin: 
   long double __builtin_tanl(long double  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_and_2(...) ;  */
/* compiler builtin: 
   void __sync_lock_release(...) ;  */
/* compiler builtin: 
   long double __builtin_modfl(long double  , long double * ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_nand_8(...) ;  */
/* compiler builtin: 
   char *__builtin_stpcpy(char * , char const   * ) ;  */
/* compiler builtin: 
   long double __builtin_sinl(long double  ) ;  */
/* compiler builtin: 
   double __builtin_asin(double  ) ;  */
/* compiler builtin: 
   float __builtin_sinhf(float  ) ;  */
/* compiler builtin: 
   int __builtin_ctzl(unsigned long  ) ;  */
/* compiler builtin: 
   long double __builtin_tanhl(long double  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_add(...) ;  */
/* compiler builtin: 
   long long __builtin_bswap64(long long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_nand_fetch_1(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_nand_2(...) ;  */
/* compiler builtin: 
   float __attribute__((____vector_size____(16)))  __builtin_ia32_mulps(float __attribute__((____vector_size____(16)))   ,
                                                                        float __attribute__((____vector_size____(16)))   ) ;  */
/* compiler builtin: 
   double __builtin_tan(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strncpy(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_inff(void) ;  */
/* compiler builtin: 
   void *__builtin___memset_chk(void * , int  , unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_load_n(...) ;  */
/* compiler builtin: 
   double __builtin_huge_val(void) ;  */
/* compiler builtin: 
   int __builtin_clzl(unsigned long  ) ;  */
/* compiler builtin: 
   _Bool __atomic_compare_exchange_16(...) ;  */
/* compiler builtin: 
   float __builtin_frexpf(float  , int * ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_exchange_n(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_or_1(...) ;  */
/* compiler builtin: 
   long double __builtin_fmodl(long double  ) ;  */
/* compiler builtin: 
   double __builtin_atan(double  ) ;  */
/* compiler builtin: 
   int __builtin___fprintf_chk(void * , int  , char const   *  , ...) ;  */
/* compiler builtin: 
   float __builtin_ceilf(float  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_or_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_add_1(...) ;  */
/* compiler builtin: 
   void __builtin_return(void const   * ) ;  */
/* compiler builtin: 
   long double __builtin_asinl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_ffsll(unsigned long long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_sub_1(...) ;  */
/* compiler builtin: 
   int __builtin_va_arg_pack(void) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_or_4(...) ;  */
/* compiler builtin: 
   char *__builtin___strncpy_chk(char * , char const   * , unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_powi(double  , int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_load_2(...) ;  */
/* compiler builtin: 
   char *__builtin_strchr(char * , int  ) ;  */
/* compiler builtin: 
   char *__builtin___strncat_chk(char * , char const   * , unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   void __atomic_store_2(...) ;  */
/* compiler builtin: 
   long double __builtin_huge_vall(void) ;  */
/* compiler builtin: 
   int __builtin_ffsl(unsigned long  ) ;  */
/* compiler builtin: 
   int __builtin___vprintf_chk(int  , char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   float __attribute__((____vector_size____(16)))  __builtin_ia32_unpcklps(float __attribute__((____vector_size____(16)))   ,
                                                                           float __attribute__((____vector_size____(16)))   ) ;  */
/* compiler builtin: 
   char *__builtin_strncat(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   int __builtin_ctzll(unsigned long long  ) ;  */
/* compiler builtin: 
   void __builtin_stdarg_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_exchange_4(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_fetch_and_xor(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_sub_4(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_and_4(...) ;  */
/* compiler builtin: 
   long double __builtin_frexpl(long double  , int * ) ;  */
/* compiler builtin: 
   _Bool __atomic_compare_exchange(...) ;  */
/* compiler builtin: 
   float __builtin_tanf(float  ) ;  */
/* compiler builtin: 
   long double __builtin_logl(long double  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned long  , void * ) ;  */
/* compiler builtin: 
   long __builtin_expect(long  , long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_load_1(...) ;  */
/* compiler builtin: 
   _Bool __atomic_compare_exchange_1(...) ;  */
/* compiler builtin: 
   int __builtin___printf_chk(int  , char const   *  , ...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_xor_2(...) ;  */
/* compiler builtin: 
   int __builtin___vfprintf_chk(void * , int  , char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   void __builtin_prefetch(void const   *  , ...) ;  */
/* compiler builtin: 
   long double __builtin_nansl(char const   * ) ;  */
/* compiler builtin: 
   double __builtin_fmod(double  ) ;  */
/* compiler builtin: 
   void __atomic_load(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_or_fetch_16(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_add_fetch_16(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_val_compare_and_swap(...) ;  */
/* compiler builtin: 
   void __atomic_store_4(...) ;  */
/* compiler builtin: 
   double __builtin_tanh(double  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_and_1(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_nand_4(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_add_16(...) ;  */
/* compiler builtin: 
   void __builtin_unreachable(void) ;  */
/* compiler builtin: 
   _Bool __atomic_compare_exchange_2(...) ;  */
/* compiler builtin: 
   long double __builtin_ldexpl(long double  , int  ) ;  */
/* compiler builtin: 
   void *__builtin_apply(void (*)() , void * , unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_sinf(float  ) ;  */
/* compiler builtin: 
   double __builtin_ceil(double  ) ;  */
/* compiler builtin: 
   void __atomic_exchange(...) ;  */
/* compiler builtin: 
   long double __builtin_powil(long double  , int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_sub_fetch_8(...) ;  */
/* compiler builtin: 
   long double __builtin_expl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_constant_p(int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_sub_16(...) ;  */
/* compiler builtin: 
   double __builtin_log(double  ) ;  */
/* compiler builtin: 
   float __builtin_expf(float  ) ;  */
/* compiler builtin: 
   int __builtin_types_compatible_p(unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   long double __builtin_atan2l(long double  , long double  ) ;  */
/* compiler builtin: 
   void *__builtin_apply_args(void) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_exchange_2(...) ;  */
/* compiler builtin: 
   float __builtin_logf(float  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_sub_fetch_2(...) ;  */
/* compiler builtin: 
   unsigned long __builtin_strlen(char const   * ) ;  */
/* compiler builtin: 
   int __builtin_ffs(unsigned int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_xor_16(...) ;  */
/* compiler builtin: 
   double __builtin_inf(void) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_or_16(...) ;  */
/* compiler builtin: 
   void *__builtin___memcpy_chk(void * , void const   * , unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_load_4(...) ;  */
/* compiler builtin: 
   void __atomic_store_n(...) ;  */
/* compiler builtin: 
   void __builtin_trap(void) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_add_4(...) ;  */
/* compiler builtin: 
   int __builtin_parityl(unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_nand_fetch_2(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_lock_test_and_set(...) ;  */
/* compiler builtin: 
   unsigned long __builtin_strspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void __builtin_varargs_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_sub_fetch(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_and_16(...) ;  */
/* compiler builtin: 
   _Bool __atomic_compare_exchange_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_nand_fetch(...) ;  */
/* compiler builtin: 
   double __builtin_nan(char const   * ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_load_8(...) ;  */
/* compiler builtin: 
   int __builtin___snprintf_chk(char * , unsigned long  , int  , unsigned long  ,
                                char const   *  , ...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_xor_fetch_4(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_sub_2(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_add_fetch(...) ;  */
/* compiler builtin: 
   long double __builtin_atanl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_clzll(unsigned long long  ) ;  */
/* compiler builtin: 
   float __builtin_huge_valf(void) ;  */
/* compiler builtin: 
   float __builtin_coshf(float  ) ;  */
/* compiler builtin: 
   float __builtin_nansf(char const   * ) ;  */
/* compiler builtin: 
   void __atomic_store_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_xor_fetch(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_fetch_and_add(...) ;  */
/* compiler builtin: 
   int __builtin___vsnprintf_chk(char * , unsigned long  , int  , unsigned long  ,
                                 char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   float __builtin_nanf(char const   * ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_or_fetch_2(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_add_fetch_1(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_xor(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_add_fetch_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_xor_4(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_sub_8(...) ;  */
/* compiler builtin: 
   _Bool __sync_bool_compare_and_swap(...) ;  */
/* compiler builtin: 
   double __builtin_atan2(double  , double  ) ;  */
/* compiler builtin: 
   int __builtin_popcountl(unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_and_fetch_1(...) ;  */
/* compiler builtin: 
   long double __builtin_ceill(long double  ) ;  */
/* compiler builtin: 
   void __atomic_store_1(...) ;  */
/* compiler builtin: 
   char *__builtin___strcpy_chk(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_xor_fetch_1(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_or_2(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_sub_fetch_16(...) ;  */
/* compiler builtin: 
   double __builtin_floor(double  ) ;  */
/* compiler builtin: 
   double __builtin_cos(double  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __sync_fetch_and_sub(...) ;  */
/* compiler builtin: 
   void *__builtin_memset(void * , int  , int  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_add_2(...) ;  */
/* compiler builtin: 
   long double __builtin_nanl(char const   * ) ;  */
/* compiler builtin: 
   float __builtin_atan2f(float  , float  ) ;  */
/* compiler builtin: 
   _Bool __atomic_is_lock_free(unsigned long  , void * ) ;  */
/* compiler builtin: 
   int __builtin_popcount(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_sinh(double  ) ;  */
/* compiler builtin: 
   void __builtin_bcopy(void const   * , void * , unsigned long  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_and_fetch_8(...) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_fetch_sub(...) ;  */
/* compiler builtin: 
   void *__builtin_extract_return_addr(void * ) ;  */
/* compiler builtin: 
   int __builtin_bswap32(int  ) ;  */
/* compiler builtin: 
   double __builtin_ldexp(double  , int  ) ;  */
/* compiler builtin: 
   long double __builtin_infl(void) ;  */
/* compiler builtin: 
   float __builtin_fmodf(float  ) ;  */
/* compiler builtin: 
   void __attribute__((__overloaded__))  __atomic_add_fetch_4(...) ;  */
/* compiler builtin: 
   void *__builtin_frame_address(unsigned int  ) ;  */
#line 1 "cil-7xYVIcG9.o"
#pragma merger("0","/tmp/cil-WXa0hKKB.i","")
#line 8 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/compat/string.h"
extern char *strlwr(char * ) ;
#line 9
extern char *strupr(char * ) ;
#line 27 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/string.h"
extern void *memcpy(void * __restrict   , void const   * __restrict   , size_t  ) ;
#line 28
extern void *memmove(void * , void const   * , size_t  ) ;
#line 29
extern void *memset(void * , int  , size_t  ) ;
#line 30
extern int memcmp(void const   * , void const   * , size_t  ) ;
#line 31
extern void *memchr(void const   * , int  , size_t  ) ;
#line 33
extern char *strcpy(char * __restrict   , char const   * __restrict   ) ;
#line 34
extern char *strncpy(char * __restrict   , char const   * __restrict   , size_t  ) ;
#line 36
extern char *strcat(char * __restrict   , char const   * __restrict   ) ;
#line 37
extern char *strncat(char * __restrict   , char const   * __restrict   , size_t  ) ;
#line 39
extern int strcmp(char const   * , char const   * ) ;
#line 40
extern int strncmp(char const   * , char const   * , size_t  ) ;
#line 42
extern int strcoll(char const   * , char const   * ) ;
#line 43
extern size_t strxfrm(char * __restrict   , char const   * __restrict   , size_t  ) ;
#line 45
extern char *strchr(char const   * , int  ) ;
#line 46
extern char *strrchr(char const   * , int  ) ;
#line 48
extern size_t strcspn(char const   * , char const   * ) ;
#line 49
extern size_t strspn(char const   * , char const   * ) ;
#line 50
extern char *strpbrk(char const   * , char const   * ) ;
#line 51
extern char *strstr(char const   * , char const   * ) ;
#line 52
extern char *strtok(char * __restrict   , char const   * __restrict   ) ;
#line 54
extern size_t strlen(char const   * ) ;
#line 56
extern char *strerror(int  ) ;
#line 16 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/strings.h"
extern int bcmp(void const   * , void const   * , size_t  ) ;
#line 17
extern void bcopy(void const   * , void * , size_t  ) ;
#line 18
extern void bzero(void * , size_t  ) ;
#line 19
extern char *index(char const   * , int  ) ;
#line 20
extern char *rindex(char const   * , int  ) ;
#line 24
extern int ffs(int  ) ;
#line 25
extern int ffsl(long  ) ;
#line 26
extern int ffsll(long long  ) ;
#line 29
extern int strcasecmp(char const   * , char const   * ) ;
#line 30
extern int strncasecmp(char const   * , char const   * , size_t  ) ;
#line 32
extern int strcasecmp_l(char const   * , char const   * , locale_t  ) ;
#line 33
extern int strncasecmp_l(char const   * , char const   * , size_t  , locale_t  ) ;
#line 65 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/string.h"
extern char *strtok_r(char * __restrict   , char const   * __restrict   , char ** __restrict   ) ;
#line 66
extern int strerror_r(int  , char * , size_t  ) ;
#line 67
extern char *stpcpy(char * __restrict   , char const   * __restrict   ) ;
#line 68
extern char *stpncpy(char * __restrict   , char const   * __restrict   , size_t  ) ;
#line 69
extern size_t strnlen(char const   * , size_t  ) ;
#line 70
extern char *strdup(char const   * ) ;
#line 71
extern char *strndup(char const   * , size_t  ) ;
#line 72
extern char *strsignal(int  ) ;
#line 73
extern char *strerror_l(int  , locale_t  ) ;
#line 74
extern int strcoll_l(char const   * , char const   * , locale_t  ) ;
#line 75
extern size_t strxfrm_l(char * __restrict   , char const   * __restrict   , size_t  ,
                        locale_t  ) ;
#line 80
extern void *memccpy(void * __restrict   , void const   * __restrict   , int  , size_t  ) ;
#line 84
extern char *strsep(char ** , char const   * ) ;
#line 85
extern size_t strlcat(char * , char const   * , size_t  ) ;
#line 86
extern size_t strlcpy(char * , char const   * , size_t  ) ;
#line 87
extern void explicit_bzero(void * , size_t  ) ;
#line 34 "blake.c"
uint8_t const   sigma[14][16]  = 
#line 34 "blake.c"
  { {        (uint8_t const   )0,        (uint8_t const   )1,        (uint8_t const   )2,        (uint8_t const   )3, 
            (uint8_t const   )4,        (uint8_t const   )5,        (uint8_t const   )6,        (uint8_t const   )7, 
            (uint8_t const   )8,        (uint8_t const   )9,        (uint8_t const   )10,        (uint8_t const   )11, 
            (uint8_t const   )12,        (uint8_t const   )13,        (uint8_t const   )14,        (uint8_t const   )15}, 
   {        (uint8_t const   )14,        (uint8_t const   )10,        (uint8_t const   )4,        (uint8_t const   )8, 
            (uint8_t const   )9,        (uint8_t const   )15,        (uint8_t const   )13,        (uint8_t const   )6, 
            (uint8_t const   )1,        (uint8_t const   )12,        (uint8_t const   )0,        (uint8_t const   )2, 
            (uint8_t const   )11,        (uint8_t const   )7,        (uint8_t const   )5,        (uint8_t const   )3}, 
   {        (uint8_t const   )11,        (uint8_t const   )8,        (uint8_t const   )12,        (uint8_t const   )0, 
            (uint8_t const   )5,        (uint8_t const   )2,        (uint8_t const   )15,        (uint8_t const   )13, 
            (uint8_t const   )10,        (uint8_t const   )14,        (uint8_t const   )3,        (uint8_t const   )6, 
            (uint8_t const   )7,        (uint8_t const   )1,        (uint8_t const   )9,        (uint8_t const   )4}, 
   {        (uint8_t const   )7,        (uint8_t const   )9,        (uint8_t const   )3,        (uint8_t const   )1, 
            (uint8_t const   )13,        (uint8_t const   )12,        (uint8_t const   )11,        (uint8_t const   )14, 
            (uint8_t const   )2,        (uint8_t const   )6,        (uint8_t const   )5,        (uint8_t const   )10, 
            (uint8_t const   )4,        (uint8_t const   )0,        (uint8_t const   )15,        (uint8_t const   )8}, 
   {        (uint8_t const   )9,        (uint8_t const   )0,        (uint8_t const   )5,        (uint8_t const   )7, 
            (uint8_t const   )2,        (uint8_t const   )4,        (uint8_t const   )10,        (uint8_t const   )15, 
            (uint8_t const   )14,        (uint8_t const   )1,        (uint8_t const   )11,        (uint8_t const   )12, 
            (uint8_t const   )6,        (uint8_t const   )8,        (uint8_t const   )3,        (uint8_t const   )13}, 
   {        (uint8_t const   )2,        (uint8_t const   )12,        (uint8_t const   )6,        (uint8_t const   )10, 
            (uint8_t const   )0,        (uint8_t const   )11,        (uint8_t const   )8,        (uint8_t const   )3, 
            (uint8_t const   )4,        (uint8_t const   )13,        (uint8_t const   )7,        (uint8_t const   )5, 
            (uint8_t const   )15,        (uint8_t const   )14,        (uint8_t const   )1,        (uint8_t const   )9}, 
   {        (uint8_t const   )12,        (uint8_t const   )5,        (uint8_t const   )1,        (uint8_t const   )15, 
            (uint8_t const   )14,        (uint8_t const   )13,        (uint8_t const   )4,        (uint8_t const   )10, 
            (uint8_t const   )0,        (uint8_t const   )7,        (uint8_t const   )6,        (uint8_t const   )3, 
            (uint8_t const   )9,        (uint8_t const   )2,        (uint8_t const   )8,        (uint8_t const   )11}, 
   {        (uint8_t const   )13,        (uint8_t const   )11,        (uint8_t const   )7,        (uint8_t const   )14, 
            (uint8_t const   )12,        (uint8_t const   )1,        (uint8_t const   )3,        (uint8_t const   )9, 
            (uint8_t const   )5,        (uint8_t const   )0,        (uint8_t const   )15,        (uint8_t const   )4, 
            (uint8_t const   )8,        (uint8_t const   )6,        (uint8_t const   )2,        (uint8_t const   )10}, 
   {        (uint8_t const   )6,        (uint8_t const   )15,        (uint8_t const   )14,        (uint8_t const   )9, 
            (uint8_t const   )11,        (uint8_t const   )3,        (uint8_t const   )0,        (uint8_t const   )8, 
            (uint8_t const   )12,        (uint8_t const   )2,        (uint8_t const   )13,        (uint8_t const   )7, 
            (uint8_t const   )1,        (uint8_t const   )4,        (uint8_t const   )10,        (uint8_t const   )5}, 
   {        (uint8_t const   )10,        (uint8_t const   )2,        (uint8_t const   )8,        (uint8_t const   )4, 
            (uint8_t const   )7,        (uint8_t const   )6,        (uint8_t const   )1,        (uint8_t const   )5, 
            (uint8_t const   )15,        (uint8_t const   )11,        (uint8_t const   )9,        (uint8_t const   )14, 
            (uint8_t const   )3,        (uint8_t const   )12,        (uint8_t const   )13,        (uint8_t const   )0}, 
   {        (uint8_t const   )0,        (uint8_t const   )1,        (uint8_t const   )2,        (uint8_t const   )3, 
            (uint8_t const   )4,        (uint8_t const   )5,        (uint8_t const   )6,        (uint8_t const   )7, 
            (uint8_t const   )8,        (uint8_t const   )9,        (uint8_t const   )10,        (uint8_t const   )11, 
            (uint8_t const   )12,        (uint8_t const   )13,        (uint8_t const   )14,        (uint8_t const   )15}, 
   {        (uint8_t const   )14,        (uint8_t const   )10,        (uint8_t const   )4,        (uint8_t const   )8, 
            (uint8_t const   )9,        (uint8_t const   )15,        (uint8_t const   )13,        (uint8_t const   )6, 
            (uint8_t const   )1,        (uint8_t const   )12,        (uint8_t const   )0,        (uint8_t const   )2, 
            (uint8_t const   )11,        (uint8_t const   )7,        (uint8_t const   )5,        (uint8_t const   )3}, 
   {        (uint8_t const   )11,        (uint8_t const   )8,        (uint8_t const   )12,        (uint8_t const   )0, 
            (uint8_t const   )5,        (uint8_t const   )2,        (uint8_t const   )15,        (uint8_t const   )13, 
            (uint8_t const   )10,        (uint8_t const   )14,        (uint8_t const   )3,        (uint8_t const   )6, 
            (uint8_t const   )7,        (uint8_t const   )1,        (uint8_t const   )9,        (uint8_t const   )4}, 
   {        (uint8_t const   )7,        (uint8_t const   )9,        (uint8_t const   )3,        (uint8_t const   )1, 
            (uint8_t const   )13,        (uint8_t const   )12,        (uint8_t const   )11,        (uint8_t const   )14, 
            (uint8_t const   )2,        (uint8_t const   )6,        (uint8_t const   )5,        (uint8_t const   )10, 
            (uint8_t const   )4,        (uint8_t const   )0,        (uint8_t const   )15,        (uint8_t const   )8}};
#line 51 "blake.c"
uint32_t const   cst[16]  = 
#line 51
  {      (uint32_t const   )608135816,      (uint32_t const   )2242054355U,      (uint32_t const   )320440878,      (uint32_t const   )57701188, 
        (uint32_t const   )2752067618U,      (uint32_t const   )698298832,      (uint32_t const   )137296536,      (uint32_t const   )3964562569U, 
        (uint32_t const   )1160258022,      (uint32_t const   )953160567,      (uint32_t const   )3193202383U,      (uint32_t const   )887688300, 
        (uint32_t const   )3232508343U,      (uint32_t const   )3380367581U,      (uint32_t const   )1065670069,      (uint32_t const   )3041331479U};
#line 58 "blake.c"
static uint8_t const   padding[64]  = 
#line 58
  {      (uint8_t const   )128,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0, 
        (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0,      (uint8_t const   )0};
#line 64 "blake.c"
void blake256_compress(state *S , uint8_t const   *block ) 
{ 
  uint32_t v[16] ;
  uint32_t m[16] ;
  uint32_t i ;

  {
#line 78
  i = (uint32_t )0;
#line 78
  while (i < 16U) {
#line 78
    m[i] = ((((uint32_t )*((block + i * 4U) + 0) << 24) | ((uint32_t )*((block + i * 4U) + 1) << 16)) | ((uint32_t )*((block + i * 4U) + 2) << 8)) | (uint32_t )*((block + i * 4U) + 3);
#line 78
    i ++;
  }
#line 79
  i = (uint32_t )0;
#line 79
  while (i < 8U) {
#line 79
    v[i] = S->h[i];
#line 79
    i ++;
  }
#line 80
  v[8] = S->s[0] ^ 608135816U;
#line 81
  v[9] = S->s[1] ^ 2242054355U;
#line 82
  v[10] = S->s[2] ^ 320440878U;
#line 83
  v[11] = S->s[3] ^ 57701188U;
#line 84
  v[12] = 2752067618U;
#line 85
  v[13] = (uint32_t )698298832;
#line 86
  v[14] = (uint32_t )137296536;
#line 87
  v[15] = 3964562569U;
#line 89
  if (S->nullt == 0) {
#line 90
    v[12] ^= S->t[0];
#line 91
    v[13] ^= S->t[0];
#line 92
    v[14] ^= S->t[1];
#line 93
    v[15] ^= S->t[1];
  }
#line 96
  i = (uint32_t )0;
#line 96
  while (i < 14U) {
#line 97
    v[0] += (m[sigma[i][0]] ^ (unsigned int )cst[sigma[i][1]]) + v[4];
#line 97
    v[12] = ((v[12] ^ v[0]) << 16) | ((v[12] ^ v[0]) >> 16);
#line 97
    v[8] += v[12];
#line 97
    v[4] = ((v[4] ^ v[8]) << 20) | ((v[4] ^ v[8]) >> 12);
#line 97
    v[0] += (m[sigma[i][1]] ^ (unsigned int )cst[sigma[i][0]]) + v[4];
#line 97
    v[12] = ((v[12] ^ v[0]) << 24) | ((v[12] ^ v[0]) >> 8);
#line 97
    v[8] += v[12];
#line 97
    v[4] = ((v[4] ^ v[8]) << 25) | ((v[4] ^ v[8]) >> 7);
#line 98
    v[1] += (m[sigma[i][2]] ^ (unsigned int )cst[sigma[i][3]]) + v[5];
#line 98
    v[13] = ((v[13] ^ v[1]) << 16) | ((v[13] ^ v[1]) >> 16);
#line 98
    v[9] += v[13];
#line 98
    v[5] = ((v[5] ^ v[9]) << 20) | ((v[5] ^ v[9]) >> 12);
#line 98
    v[1] += (m[sigma[i][3]] ^ (unsigned int )cst[sigma[i][2]]) + v[5];
#line 98
    v[13] = ((v[13] ^ v[1]) << 24) | ((v[13] ^ v[1]) >> 8);
#line 98
    v[9] += v[13];
#line 98
    v[5] = ((v[5] ^ v[9]) << 25) | ((v[5] ^ v[9]) >> 7);
#line 99
    v[2] += (m[sigma[i][4]] ^ (unsigned int )cst[sigma[i][5]]) + v[6];
#line 99
    v[14] = ((v[14] ^ v[2]) << 16) | ((v[14] ^ v[2]) >> 16);
#line 99
    v[10] += v[14];
#line 99
    v[6] = ((v[6] ^ v[10]) << 20) | ((v[6] ^ v[10]) >> 12);
#line 99
    v[2] += (m[sigma[i][5]] ^ (unsigned int )cst[sigma[i][4]]) + v[6];
#line 99
    v[14] = ((v[14] ^ v[2]) << 24) | ((v[14] ^ v[2]) >> 8);
#line 99
    v[10] += v[14];
#line 99
    v[6] = ((v[6] ^ v[10]) << 25) | ((v[6] ^ v[10]) >> 7);
#line 100
    v[3] += (m[sigma[i][6]] ^ (unsigned int )cst[sigma[i][7]]) + v[7];
#line 100
    v[15] = ((v[15] ^ v[3]) << 16) | ((v[15] ^ v[3]) >> 16);
#line 100
    v[11] += v[15];
#line 100
    v[7] = ((v[7] ^ v[11]) << 20) | ((v[7] ^ v[11]) >> 12);
#line 100
    v[3] += (m[sigma[i][7]] ^ (unsigned int )cst[sigma[i][6]]) + v[7];
#line 100
    v[15] = ((v[15] ^ v[3]) << 24) | ((v[15] ^ v[3]) >> 8);
#line 100
    v[11] += v[15];
#line 100
    v[7] = ((v[7] ^ v[11]) << 25) | ((v[7] ^ v[11]) >> 7);
#line 101
    v[3] += (m[sigma[i][14]] ^ (unsigned int )cst[sigma[i][15]]) + v[4];
#line 101
    v[14] = ((v[14] ^ v[3]) << 16) | ((v[14] ^ v[3]) >> 16);
#line 101
    v[9] += v[14];
#line 101
    v[4] = ((v[4] ^ v[9]) << 20) | ((v[4] ^ v[9]) >> 12);
#line 101
    v[3] += (m[sigma[i][15]] ^ (unsigned int )cst[sigma[i][14]]) + v[4];
#line 101
    v[14] = ((v[14] ^ v[3]) << 24) | ((v[14] ^ v[3]) >> 8);
#line 101
    v[9] += v[14];
#line 101
    v[4] = ((v[4] ^ v[9]) << 25) | ((v[4] ^ v[9]) >> 7);
#line 102
    v[2] += (m[sigma[i][12]] ^ (unsigned int )cst[sigma[i][13]]) + v[7];
#line 102
    v[13] = ((v[13] ^ v[2]) << 16) | ((v[13] ^ v[2]) >> 16);
#line 102
    v[8] += v[13];
#line 102
    v[7] = ((v[7] ^ v[8]) << 20) | ((v[7] ^ v[8]) >> 12);
#line 102
    v[2] += (m[sigma[i][13]] ^ (unsigned int )cst[sigma[i][12]]) + v[7];
#line 102
    v[13] = ((v[13] ^ v[2]) << 24) | ((v[13] ^ v[2]) >> 8);
#line 102
    v[8] += v[13];
#line 102
    v[7] = ((v[7] ^ v[8]) << 25) | ((v[7] ^ v[8]) >> 7);
#line 103
    v[0] += (m[sigma[i][8]] ^ (unsigned int )cst[sigma[i][9]]) + v[5];
#line 103
    v[15] = ((v[15] ^ v[0]) << 16) | ((v[15] ^ v[0]) >> 16);
#line 103
    v[10] += v[15];
#line 103
    v[5] = ((v[5] ^ v[10]) << 20) | ((v[5] ^ v[10]) >> 12);
#line 103
    v[0] += (m[sigma[i][9]] ^ (unsigned int )cst[sigma[i][8]]) + v[5];
#line 103
    v[15] = ((v[15] ^ v[0]) << 24) | ((v[15] ^ v[0]) >> 8);
#line 103
    v[10] += v[15];
#line 103
    v[5] = ((v[5] ^ v[10]) << 25) | ((v[5] ^ v[10]) >> 7);
#line 104
    v[1] += (m[sigma[i][10]] ^ (unsigned int )cst[sigma[i][11]]) + v[6];
#line 104
    v[12] = ((v[12] ^ v[1]) << 16) | ((v[12] ^ v[1]) >> 16);
#line 104
    v[11] += v[12];
#line 104
    v[6] = ((v[6] ^ v[11]) << 20) | ((v[6] ^ v[11]) >> 12);
#line 104
    v[1] += (m[sigma[i][11]] ^ (unsigned int )cst[sigma[i][10]]) + v[6];
#line 104
    v[12] = ((v[12] ^ v[1]) << 24) | ((v[12] ^ v[1]) >> 8);
#line 104
    v[11] += v[12];
#line 104
    v[6] = ((v[6] ^ v[11]) << 25) | ((v[6] ^ v[11]) >> 7);
#line 96
    i ++;
  }
#line 107
  i = (uint32_t )0;
#line 107
  while (i < 16U) {
#line 107
    S->h[i % 8U] ^= v[i];
#line 107
    i ++;
  }
#line 108
  i = (uint32_t )0;
#line 108
  while (i < 8U) {
#line 108
    S->h[i] ^= S->s[i % 4U];
#line 108
    i ++;
  }
#line 109
  return;
}
}
#line 111 "blake.c"
void blake256_init(state *S ) 
{ 
  uint32_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  uint32_t tmp___2 ;
  uint32_t tmp___3 ;
  uint32_t tmp___4 ;

  {
#line 112
  S->h[0] = (uint32_t )1779033703;
#line 113
  S->h[1] = 3144134277U;
#line 114
  S->h[2] = (uint32_t )1013904242;
#line 115
  S->h[3] = 2773480762U;
#line 116
  S->h[4] = (uint32_t )1359893119;
#line 117
  S->h[5] = 2600822924U;
#line 118
  S->h[6] = (uint32_t )528734635;
#line 119
  S->h[7] = (uint32_t )1541459225;
#line 120
  tmp___1 = 0;
#line 120
  S->nullt = tmp___1;
#line 120
  tmp___0 = tmp___1;
#line 120
  S->buflen = tmp___0;
#line 120
  tmp = (uint32_t )tmp___0;
#line 120
  S->t[1] = tmp;
#line 120
  S->t[0] = tmp;
#line 121
  tmp___4 = (uint32_t )0;
#line 121
  S->s[3] = tmp___4;
#line 121
  tmp___3 = tmp___4;
#line 121
  S->s[2] = tmp___3;
#line 121
  tmp___2 = tmp___3;
#line 121
  S->s[1] = tmp___2;
#line 121
  S->s[0] = tmp___2;
#line 122
  return;
}
}
#line 124 "blake.c"
void blake224_init(state *S ) 
{ 
  uint32_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  uint32_t tmp___2 ;
  uint32_t tmp___3 ;
  uint32_t tmp___4 ;

  {
#line 125
  S->h[0] = 3238371032U;
#line 126
  S->h[1] = (uint32_t )914150663;
#line 127
  S->h[2] = (uint32_t )812702999;
#line 128
  S->h[3] = 4144912697U;
#line 129
  S->h[4] = 4290775857U;
#line 130
  S->h[5] = (uint32_t )1750603025;
#line 131
  S->h[6] = (uint32_t )1694076839;
#line 132
  S->h[7] = 3204075428U;
#line 133
  tmp___1 = 0;
#line 133
  S->nullt = tmp___1;
#line 133
  tmp___0 = tmp___1;
#line 133
  S->buflen = tmp___0;
#line 133
  tmp = (uint32_t )tmp___0;
#line 133
  S->t[1] = tmp;
#line 133
  S->t[0] = tmp;
#line 134
  tmp___4 = (uint32_t )0;
#line 134
  S->s[3] = tmp___4;
#line 134
  tmp___3 = tmp___4;
#line 134
  S->s[2] = tmp___3;
#line 134
  tmp___2 = tmp___3;
#line 134
  S->s[1] = tmp___2;
#line 134
  S->s[0] = tmp___2;
#line 135
  return;
}
}
#line 138 "blake.c"
void blake256_update(state *S , uint8_t const   *data , uint64_t datalen ) 
{ 
  int left ;
  int fill ;

  {
#line 139
  left = S->buflen >> 3;
#line 140
  fill = 64 - left;
#line 142
  if (left) {
#line 142
    if (((datalen >> 3) & 63ULL) >= (unsigned long long )((unsigned int )fill)) {
#line 143
      memcpy((void * __restrict  )((void *)(S->buf + left)), (void const   * __restrict  )((void *)data),
             (size_t )fill);
#line 144
      S->t[0] += 512U;
#line 145
      if (S->t[0] == 0U) {
#line 145
        (S->t[1]) ++;
      }
#line 146
      blake256_compress(S, (uint8_t const   *)(S->buf));
#line 147
      data += fill;
#line 148
      datalen -= (uint64_t )(fill << 3);
#line 149
      left = 0;
    }
  }
#line 152
  while (datalen >= 512ULL) {
#line 153
    S->t[0] += 512U;
#line 154
    if (S->t[0] == 0U) {
#line 154
      (S->t[1]) ++;
    }
#line 155
    blake256_compress(S, data);
#line 156
    data += 64;
#line 157
    datalen -= 512ULL;
  }
#line 160
  if (datalen > 0ULL) {
#line 161
    memcpy((void * __restrict  )((void *)(S->buf + left)), (void const   * __restrict  )((void *)data),
           (size_t )(datalen >> 3));
#line 162
    S->buflen = (int )((uint64_t )(left << 3) + datalen);
  } else {
#line 164
    S->buflen = 0;
  }
#line 166
  return;
}
}
#line 169 "blake.c"
void blake224_update(state *S , uint8_t const   *data , uint64_t datalen ) 
{ 


  {
#line 170
  blake256_update(S, data, datalen);
#line 171
  return;
}
}
#line 173 "blake.c"
void blake256_final_h(state *S , uint8_t *digest , uint8_t pa , uint8_t pb ) 
{ 
  uint8_t msglen[8] ;
  uint32_t lo ;
  uint32_t hi ;

  {
#line 175
  lo = S->t[0] + (uint32_t )S->buflen;
#line 175
  hi = S->t[1];
#line 176
  if (lo < (unsigned int )S->buflen) {
#line 176
    hi ++;
  }
#line 177
  *((msglen + 0) + 0) = (uint8_t )(hi >> 24);
#line 177
  *((msglen + 0) + 1) = (uint8_t )(hi >> 16);
#line 177
  *((msglen + 0) + 2) = (uint8_t )(hi >> 8);
#line 177
  *((msglen + 0) + 3) = (uint8_t )hi;
#line 178
  *((msglen + 4) + 0) = (uint8_t )(lo >> 24);
#line 178
  *((msglen + 4) + 1) = (uint8_t )(lo >> 16);
#line 178
  *((msglen + 4) + 2) = (uint8_t )(lo >> 8);
#line 178
  *((msglen + 4) + 3) = (uint8_t )lo;
#line 180
  if (S->buflen == 440) {
#line 181
    S->t[0] -= 8U;
#line 182
    blake256_update(S, (uint8_t const   *)(& pa), (uint64_t )8);
  } else {
#line 184
    if (S->buflen < 440) {
#line 185
      if (S->buflen == 0) {
#line 185
        S->nullt = 1;
      }
#line 186
      S->t[0] -= (uint32_t )(440 - S->buflen);
#line 187
      blake256_update(S, padding, (uint64_t )(440 - S->buflen));
    } else {
#line 189
      S->t[0] -= (uint32_t )(512 - S->buflen);
#line 190
      blake256_update(S, padding, (uint64_t )(512 - S->buflen));
#line 191
      S->t[0] -= 440U;
#line 192
      blake256_update(S, padding + 1, (uint64_t )440);
#line 193
      S->nullt = 1;
    }
#line 195
    blake256_update(S, (uint8_t const   *)(& pb), (uint64_t )8);
#line 196
    S->t[0] -= 8U;
  }
#line 198
  S->t[0] -= 64U;
#line 199
  blake256_update(S, (uint8_t const   *)(msglen), (uint64_t )64);
#line 201
  *((digest + 0) + 0) = (uint8_t )(S->h[0] >> 24);
#line 201
  *((digest + 0) + 1) = (uint8_t )(S->h[0] >> 16);
#line 201
  *((digest + 0) + 2) = (uint8_t )(S->h[0] >> 8);
#line 201
  *((digest + 0) + 3) = (uint8_t )S->h[0];
#line 202
  *((digest + 4) + 0) = (uint8_t )(S->h[1] >> 24);
#line 202
  *((digest + 4) + 1) = (uint8_t )(S->h[1] >> 16);
#line 202
  *((digest + 4) + 2) = (uint8_t )(S->h[1] >> 8);
#line 202
  *((digest + 4) + 3) = (uint8_t )S->h[1];
#line 203
  *((digest + 8) + 0) = (uint8_t )(S->h[2] >> 24);
#line 203
  *((digest + 8) + 1) = (uint8_t )(S->h[2] >> 16);
#line 203
  *((digest + 8) + 2) = (uint8_t )(S->h[2] >> 8);
#line 203
  *((digest + 8) + 3) = (uint8_t )S->h[2];
#line 204
  *((digest + 12) + 0) = (uint8_t )(S->h[3] >> 24);
#line 204
  *((digest + 12) + 1) = (uint8_t )(S->h[3] >> 16);
#line 204
  *((digest + 12) + 2) = (uint8_t )(S->h[3] >> 8);
#line 204
  *((digest + 12) + 3) = (uint8_t )S->h[3];
#line 205
  *((digest + 16) + 0) = (uint8_t )(S->h[4] >> 24);
#line 205
  *((digest + 16) + 1) = (uint8_t )(S->h[4] >> 16);
#line 205
  *((digest + 16) + 2) = (uint8_t )(S->h[4] >> 8);
#line 205
  *((digest + 16) + 3) = (uint8_t )S->h[4];
#line 206
  *((digest + 20) + 0) = (uint8_t )(S->h[5] >> 24);
#line 206
  *((digest + 20) + 1) = (uint8_t )(S->h[5] >> 16);
#line 206
  *((digest + 20) + 2) = (uint8_t )(S->h[5] >> 8);
#line 206
  *((digest + 20) + 3) = (uint8_t )S->h[5];
#line 207
  *((digest + 24) + 0) = (uint8_t )(S->h[6] >> 24);
#line 207
  *((digest + 24) + 1) = (uint8_t )(S->h[6] >> 16);
#line 207
  *((digest + 24) + 2) = (uint8_t )(S->h[6] >> 8);
#line 207
  *((digest + 24) + 3) = (uint8_t )S->h[6];
#line 208
  *((digest + 28) + 0) = (uint8_t )(S->h[7] >> 24);
#line 208
  *((digest + 28) + 1) = (uint8_t )(S->h[7] >> 16);
#line 208
  *((digest + 28) + 2) = (uint8_t )(S->h[7] >> 8);
#line 208
  *((digest + 28) + 3) = (uint8_t )S->h[7];
#line 209
  return;
}
}
#line 211 "blake.c"
void blake256_final(state *S , uint8_t *digest ) 
{ 


  {
#line 212
  blake256_final_h(S, digest, (uint8_t )129, (uint8_t )1);
#line 213
  return;
}
}
#line 215 "blake.c"
void blake224_final(state *S , uint8_t *digest ) 
{ 


  {
#line 216
  blake256_final_h(S, digest, (uint8_t )128, (uint8_t )0);
#line 217
  return;
}
}
#line 220 "blake.c"
void blake256_hash(uint8_t *out , uint8_t const   *in , uint64_t inlen ) 
{ 
  state S ;

  {
#line 222
  blake256_init(& S);
#line 223
  blake256_update(& S, in, inlen * 8ULL);
#line 224
  blake256_final(& S, out);
#line 225
  return;
}
}
#line 227 "blake.c"
void blake(uint8_t const   *input , uint64_t len , uint8_t *output___0 ) 
{ 


  {
#line 229
  blake256_hash(output___0, input, len);
#line 230
  return;
}
}
#line 233 "blake.c"
void blake224_hash(uint8_t *out , uint8_t const   *in , uint64_t inlen ) 
{ 
  state S ;

  {
#line 235
  blake224_init(& S);
#line 236
  blake224_update(& S, in, inlen * 8ULL);
#line 237
  blake224_final(& S, out);
#line 238
  return;
}
}
#line 241 "blake.c"
void hmac_blake256_init(hmac_state *S , uint8_t const   *_key , uint64_t keylen ) 
{ 
  uint8_t const   *key ;
  uint8_t keyhash[32] ;
  uint8_t pad[64] ;
  uint64_t i ;

  {
#line 242
  key = _key;
#line 247
  if (keylen > 64ULL) {
#line 248
    blake256_hash(keyhash, key, keylen);
#line 249
    key = (uint8_t const   *)(keyhash);
#line 250
    keylen = (uint64_t )32;
  }
#line 253
  blake256_init(& S->inner);
#line 254
  memset((void *)(pad), 54, (size_t )64);
#line 255
  i = (uint64_t )0;
#line 255
  while (i < keylen) {
#line 256
    pad[i] = (uint8_t )((int )pad[i] ^ (int )*(key + i));
#line 255
    i ++;
  }
#line 258
  blake256_update(& S->inner, (uint8_t const   *)(pad), (uint64_t )512);
#line 260
  blake256_init(& S->outer);
#line 261
  memset((void *)(pad), 92, (size_t )64);
#line 262
  i = (uint64_t )0;
#line 262
  while (i < keylen) {
#line 263
    pad[i] = (uint8_t )((int )pad[i] ^ (int )*(key + i));
#line 262
    i ++;
  }
#line 265
  blake256_update(& S->outer, (uint8_t const   *)(pad), (uint64_t )512);
#line 267
  memset((void *)(keyhash), 0, (size_t )32);
#line 268
  return;
}
}
#line 271 "blake.c"
void hmac_blake224_init(hmac_state *S , uint8_t const   *_key , uint64_t keylen ) 
{ 
  uint8_t const   *key ;
  uint8_t keyhash[32] ;
  uint8_t pad[64] ;
  uint64_t i ;

  {
#line 272
  key = _key;
#line 277
  if (keylen > 64ULL) {
#line 278
    blake256_hash(keyhash, key, keylen);
#line 279
    key = (uint8_t const   *)(keyhash);
#line 280
    keylen = (uint64_t )28;
  }
#line 283
  blake224_init(& S->inner);
#line 284
  memset((void *)(pad), 54, (size_t )64);
#line 285
  i = (uint64_t )0;
#line 285
  while (i < keylen) {
#line 286
    pad[i] = (uint8_t )((int )pad[i] ^ (int )*(key + i));
#line 285
    i ++;
  }
#line 288
  blake224_update(& S->inner, (uint8_t const   *)(pad), (uint64_t )512);
#line 290
  blake224_init(& S->outer);
#line 291
  memset((void *)(pad), 92, (size_t )64);
#line 292
  i = (uint64_t )0;
#line 292
  while (i < keylen) {
#line 293
    pad[i] = (uint8_t )((int )pad[i] ^ (int )*(key + i));
#line 292
    i ++;
  }
#line 295
  blake224_update(& S->outer, (uint8_t const   *)(pad), (uint64_t )512);
#line 297
  memset((void *)(keyhash), 0, (size_t )32);
#line 298
  return;
}
}
#line 301 "blake.c"
void hmac_blake256_update(hmac_state *S , uint8_t const   *data , uint64_t datalen ) 
{ 


  {
#line 303
  blake256_update(& S->inner, data, datalen);
#line 304
  return;
}
}
#line 307 "blake.c"
void hmac_blake224_update(hmac_state *S , uint8_t const   *data , uint64_t datalen ) 
{ 


  {
#line 309
  blake224_update(& S->inner, data, datalen);
#line 310
  return;
}
}
#line 312 "blake.c"
void hmac_blake256_final(hmac_state *S , uint8_t *digest ) 
{ 
  uint8_t ihash[32] ;

  {
#line 314
  blake256_final(& S->inner, ihash);
#line 315
  blake256_update(& S->outer, (uint8_t const   *)(ihash), (uint64_t )256);
#line 316
  blake256_final(& S->outer, digest);
#line 317
  memset((void *)(ihash), 0, (size_t )32);
#line 318
  return;
}
}
#line 320 "blake.c"
void hmac_blake224_final(hmac_state *S , uint8_t *digest ) 
{ 
  uint8_t ihash[32] ;

  {
#line 322
  blake224_final(& S->inner, ihash);
#line 323
  blake224_update(& S->outer, (uint8_t const   *)(ihash), (uint64_t )224);
#line 324
  blake224_final(& S->outer, digest);
#line 325
  memset((void *)(ihash), 0, (size_t )32);
#line 326
  return;
}
}
#line 329 "blake.c"
void hmac_blake256_hash(uint8_t *out , uint8_t const   *key , uint64_t keylen , uint8_t const   *in ,
                        uint64_t inlen ) 
{ 
  hmac_state S ;

  {
#line 331
  hmac_blake256_init(& S, key, keylen);
#line 332
  hmac_blake256_update(& S, in, inlen * 8ULL);
#line 333
  hmac_blake256_final(& S, out);
#line 334
  return;
}
}
#line 337 "blake.c"
void hmac_blake224_hash(uint8_t *out , uint8_t const   *key , uint64_t keylen , uint8_t const   *in ,
                        uint64_t inlen ) 
{ 
  hmac_state S ;

  {
#line 339
  hmac_blake224_init(& S, key, keylen);
#line 340
  hmac_blake224_update(& S, in, inlen * 8ULL);
#line 341
  hmac_blake224_final(& S, out);
#line 342
  return;
}
}
#line 1 "cil-N3KKLmE8.o"
#pragma merger("0","/tmp/cil-dsYneYbG.i","")
#line 8 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/compat/stdlib.h"
extern int getloadavg(double *loadavg , int nelem ) ;
#line 23 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdlib.h"
extern int atoi(char const   * ) ;
#line 24
extern long atol(char const   * ) ;
#line 25
extern long long atoll(char const   * ) ;
#line 26
extern double atof(char const   * ) ;
#line 28
extern float strtof(char const   * __restrict   , char ** __restrict   ) ;
#line 29
extern double strtod(char const   * __restrict   , char ** __restrict   ) ;
#line 30
extern long double strtold(char const   * __restrict   , char ** __restrict   ) ;
#line 32
extern long strtol(char const   * __restrict   , char ** __restrict   , int  ) ;
#line 33
extern unsigned long strtoul(char const   * __restrict   , char ** __restrict   ,
                             int  ) ;
#line 34
extern long long strtoll(char const   * __restrict   , char ** __restrict   , int  ) ;
#line 35
extern unsigned long long strtoull(char const   * __restrict   , char ** __restrict   ,
                                   int  ) ;
#line 37
extern int rand(void) ;
#line 38
extern void srand(unsigned int  ) ;
#line 40
extern void *malloc(size_t  ) ;
#line 41
extern void *calloc(size_t  , size_t  ) ;
#line 42
extern void *realloc(void * , size_t  ) ;
#line 43
extern void free(void * ) ;
#line 44
extern void *aligned_alloc(size_t  , size_t  ) ;
#line 46
extern void abort(void) ;
#line 47
extern int atexit(void (*)(void) ) ;
#line 48
extern void exit(int  ) ;
#line 49
extern void _Exit(int  ) ;
#line 50
extern int at_quick_exit(void (*)(void) ) ;
#line 51
extern void quick_exit(int  ) ;
#line 53
extern char *getenv(char const   * ) ;
#line 55
extern int system(char const   * ) ;
#line 57
extern void *bsearch(void const   * , void const   * , size_t  , size_t  , int (*)(void const   * ,
                                                                                   void const   * ) ) ;
#line 58
extern void qsort(void * , size_t  , size_t  , int (*)(void const   * , void const   * ) ) ;
#line 60
extern int abs(int  ) ;
#line 61
extern long labs(long  ) ;
#line 62
extern long long llabs(long long  ) ;
#line 68
extern div_t div(int  , int  ) ;
#line 69
extern ldiv_t ldiv(long  , long  ) ;
#line 70
extern lldiv_t lldiv(long long  , long long  ) ;
#line 72
extern int mblen(char const   * , size_t  ) ;
#line 73
extern int mbtowc(wchar_t * __restrict   , char const   * __restrict   , size_t  ) ;
#line 74
extern int wctomb(char * , wchar_t  ) ;
#line 75
extern size_t mbstowcs(wchar_t * __restrict   , char const   * __restrict   , size_t  ) ;
#line 76
extern size_t wcstombs(char * __restrict   , wchar_t const   * __restrict   , size_t  ) ;
#line 81
extern size_t __ctype_get_mb_cur_max(void) ;
#line 101
extern int posix_memalign(void ** , size_t  , size_t  ) ;
#line 102
extern int setenv(char const   * , char const   * , int  ) ;
#line 103
extern int unsetenv(char const   * ) ;
#line 104
extern int mkstemp(char * ) ;
#line 105
extern int mkostemp(char * , int  ) ;
#line 106
extern char *mkdtemp(char * ) ;
#line 107
extern int getsubopt(char ** , char * const  * , char ** ) ;
#line 108
extern int rand_r(unsigned int * ) ;
#line 115
extern char *realpath(char const   * __restrict   , char * __restrict   ) ;
#line 116
extern long random(void) ;
#line 117
extern void srandom(unsigned int  ) ;
#line 118
extern char *initstate(unsigned int  , char * , size_t  ) ;
#line 119
extern char *setstate(char * ) ;
#line 120
extern int putenv(char * ) ;
#line 121
extern int posix_openpt(int  ) ;
#line 122
extern int grantpt(int  ) ;
#line 123
extern int unlockpt(int  ) ;
#line 124
extern char *ptsname(int  ) ;
#line 125
extern char *l64a(long  ) ;
#line 126
extern long a64l(char const   * ) ;
#line 127
extern void setkey(char const   * ) ;
#line 128
extern double drand48(void) ;
#line 129
extern double erand48(unsigned short * ) ;
#line 130
extern long lrand48(void) ;
#line 131
extern long nrand48(unsigned short * ) ;
#line 132
extern long mrand48(void) ;
#line 133
extern long jrand48(unsigned short * ) ;
#line 134
extern void srand48(long  ) ;
#line 135
extern unsigned short *seed48(unsigned short * ) ;
#line 136
extern void lcong48(unsigned short * ) ;
#line 11 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/alloca.h"
extern void *alloca(size_t  ) ;
#line 141 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdlib.h"
extern char *mktemp(char * ) ;
#line 142
extern int mkstemps(char * , int  ) ;
#line 143
extern int mkostemps(char * , int  , int  ) ;
#line 144
extern void *valloc(size_t  ) ;
#line 145
extern void *memalign(size_t  , size_t  ) ;
#line 147
extern int clearenv(void) ;
#line 150
extern void *reallocarray(void * , size_t  , size_t  ) ;
#line 151
extern void qsort_r(void * , size_t  , size_t  , int (*)(void const   * , void const   * ,
                                                         void * ) , void * ) ;
#line 14 "./keccak.h"
void keccak(uint8_t const   *in , int inlen , uint8_t *md , int mdlen ) ;
#line 16
void keccakf(uint64_t *st , int rounds ) ;
#line 18
void keccak1600(uint8_t const   *in , int inlen , uint8_t *md ) ;
#line 9 "./skein.h"
enum __anonenum_SkeinHashReturn_432432649 skein(int hashbitlen , SkeinBitSequence const   *data ,
                                                size_t databitlen , SkeinBitSequence *hashval ) ;
#line 10 "./jh.h"
void jh(unsigned int bit_len , uint8_t const   *input , size_t input_bit_length ,
        uint8_t *output___0 ) ;
#line 9 "./groestl.h"
void groestl(BitSequence const   *data , DataLength databitlen , BitSequence *hashval ) ;
#line 164 "./oaes_lib.h"
OAES_CTX *oaes_alloc(void) ;
#line 166
OAES_RET oaes_free(OAES_CTX **ctx ) ;
#line 168
OAES_RET oaes_set_option(OAES_CTX *ctx , OAES_OPTION option , void const   *value ) ;
#line 171
OAES_RET oaes_key_gen_128(OAES_CTX *ctx ) ;
#line 173
OAES_RET oaes_key_gen_192(OAES_CTX *ctx ) ;
#line 175
OAES_RET oaes_key_gen_256(OAES_CTX *ctx ) ;
#line 179
OAES_RET oaes_key_export(OAES_CTX *ctx , uint8_t *data , size_t *data_len ) ;
#line 184
OAES_RET oaes_key_export_data(OAES_CTX *ctx , uint8_t *data , size_t *data_len ) ;
#line 188
OAES_RET oaes_key_import(OAES_CTX *ctx , uint8_t const   *data , size_t data_len ) ;
#line 192
OAES_RET oaes_key_import_data(OAES_CTX *ctx , uint8_t const   *data , size_t data_len ) ;
#line 196
OAES_RET oaes_encrypt(OAES_CTX *ctx , uint8_t const   *m , size_t m_len , uint8_t *c ,
                      size_t *c_len ) ;
#line 200
OAES_RET oaes_decrypt(OAES_CTX *ctx , uint8_t const   *c , size_t c_len , uint8_t *m ,
                      size_t *m_len ) ;
#line 204
OAES_RET oaes_sprintf(char *buf , size_t *buf_len , uint8_t const   *data , size_t data_len ) ;
#line 207
OAES_RET oaes_encryption_round(uint8_t const   *key , uint8_t *c ) ;
#line 209
OAES_RET oaes_pseudo_encrypt_ecb(OAES_CTX *ctx , uint8_t *c ) ;
#line 51 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
extern int __fpclassify(double  ) ;
#line 52
extern int __fpclassifyf(float  ) ;
#line 53
extern int __fpclassifyl(long double  ) ;
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned int __FLOAT_BITS(float __f ) 
{ 
  union __anonunion___u_477865197 __u ;

  {
#line 58
  __u.__f = __f;
#line 59
  return (__u.__i);
}
}
#line 61 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned long long __DOUBLE_BITS(double __f ) 
{ 
  union __anonunion___u_302425027 __u ;

  {
#line 64
  __u.__f = __f;
#line 65
  return (__u.__i);
}
}
#line 93
extern int __signbit(double  ) ;
#line 94
extern int __signbitf(float  ) ;
#line 95
extern int __signbitl(long double  ) ;
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessf(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 108
  if (sizeof(__x) == sizeof(float )) {
#line 108
    tmp___10 = __FLOAT_BITS(__x);
#line 108
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 108
    if (sizeof(__x) == sizeof(double )) {
#line 108
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 108
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 108
      tmp___12 = __fpclassifyl((long double )__x);
#line 108
      tmp___13 = tmp___12 == 0;
    }
#line 108
    tmp___14 = tmp___13;
  }
#line 108
  if (tmp___14) {
#line 108
    tmp___9 = 1;
  } else {
#line 108
    if (sizeof(__y) == sizeof(float )) {
#line 108
      tmp___4 = __FLOAT_BITS(__y);
#line 108
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 108
      if (sizeof(__y) == sizeof(double )) {
#line 108
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 108
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 108
        tmp___6 = __fpclassifyl((long double )__y);
#line 108
        tmp___7 = tmp___6 == 0;
      }
#line 108
      tmp___8 = tmp___7;
    }
#line 108
    tmp___9 = tmp___8;
  }
#line 108
  if (tmp___9) {
#line 108
    tmp___15 = 0;
  } else
#line 108
  if (__x < __y) {
#line 108
    tmp___15 = 1;
  } else {
#line 108
    tmp___15 = 0;
  }
#line 108
  return (tmp___15);
}
}
#line 109 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isless(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 109
  if (sizeof(__x) == sizeof(float )) {
#line 109
    tmp___10 = __FLOAT_BITS((float )__x);
#line 109
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 109
    if (sizeof(__x) == sizeof(double )) {
#line 109
      tmp___11 = __DOUBLE_BITS(__x);
#line 109
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 109
      tmp___12 = __fpclassifyl((long double )__x);
#line 109
      tmp___13 = tmp___12 == 0;
    }
#line 109
    tmp___14 = tmp___13;
  }
#line 109
  if (tmp___14) {
#line 109
    tmp___9 = 1;
  } else {
#line 109
    if (sizeof(__y) == sizeof(float )) {
#line 109
      tmp___4 = __FLOAT_BITS((float )__y);
#line 109
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 109
      if (sizeof(__y) == sizeof(double )) {
#line 109
        tmp___5 = __DOUBLE_BITS(__y);
#line 109
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 109
        tmp___6 = __fpclassifyl((long double )__y);
#line 109
        tmp___7 = tmp___6 == 0;
      }
#line 109
      tmp___8 = tmp___7;
    }
#line 109
    tmp___9 = tmp___8;
  }
#line 109
  if (tmp___9) {
#line 109
    tmp___15 = 0;
  } else
#line 109
  if (__x < __y) {
#line 109
    tmp___15 = 1;
  } else {
#line 109
    tmp___15 = 0;
  }
#line 109
  return (tmp___15);
}
}
#line 110 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessl(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 110
  if (sizeof(__x) == sizeof(float )) {
#line 110
    tmp___10 = __FLOAT_BITS((float )__x);
#line 110
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 110
    if (sizeof(__x) == sizeof(double )) {
#line 110
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 110
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 110
      tmp___12 = __fpclassifyl(__x);
#line 110
      tmp___13 = tmp___12 == 0;
    }
#line 110
    tmp___14 = tmp___13;
  }
#line 110
  if (tmp___14) {
#line 110
    tmp___9 = 1;
  } else {
#line 110
    if (sizeof(__y) == sizeof(float )) {
#line 110
      tmp___4 = __FLOAT_BITS((float )__y);
#line 110
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 110
      if (sizeof(__y) == sizeof(double )) {
#line 110
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 110
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 110
        tmp___6 = __fpclassifyl(__y);
#line 110
        tmp___7 = tmp___6 == 0;
      }
#line 110
      tmp___8 = tmp___7;
    }
#line 110
    tmp___9 = tmp___8;
  }
#line 110
  if (tmp___9) {
#line 110
    tmp___15 = 0;
  } else
#line 110
  if (__x < __y) {
#line 110
    tmp___15 = 1;
  } else {
#line 110
    tmp___15 = 0;
  }
#line 110
  return (tmp___15);
}
}
#line 111 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessequalf(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 111
  if (sizeof(__x) == sizeof(float )) {
#line 111
    tmp___10 = __FLOAT_BITS(__x);
#line 111
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 111
    if (sizeof(__x) == sizeof(double )) {
#line 111
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 111
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 111
      tmp___12 = __fpclassifyl((long double )__x);
#line 111
      tmp___13 = tmp___12 == 0;
    }
#line 111
    tmp___14 = tmp___13;
  }
#line 111
  if (tmp___14) {
#line 111
    tmp___9 = 1;
  } else {
#line 111
    if (sizeof(__y) == sizeof(float )) {
#line 111
      tmp___4 = __FLOAT_BITS(__y);
#line 111
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 111
      if (sizeof(__y) == sizeof(double )) {
#line 111
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 111
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 111
        tmp___6 = __fpclassifyl((long double )__y);
#line 111
        tmp___7 = tmp___6 == 0;
      }
#line 111
      tmp___8 = tmp___7;
    }
#line 111
    tmp___9 = tmp___8;
  }
#line 111
  if (tmp___9) {
#line 111
    tmp___15 = 0;
  } else
#line 111
  if (__x <= __y) {
#line 111
    tmp___15 = 1;
  } else {
#line 111
    tmp___15 = 0;
  }
#line 111
  return (tmp___15);
}
}
#line 112 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessequal(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 112
  if (sizeof(__x) == sizeof(float )) {
#line 112
    tmp___10 = __FLOAT_BITS((float )__x);
#line 112
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 112
    if (sizeof(__x) == sizeof(double )) {
#line 112
      tmp___11 = __DOUBLE_BITS(__x);
#line 112
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 112
      tmp___12 = __fpclassifyl((long double )__x);
#line 112
      tmp___13 = tmp___12 == 0;
    }
#line 112
    tmp___14 = tmp___13;
  }
#line 112
  if (tmp___14) {
#line 112
    tmp___9 = 1;
  } else {
#line 112
    if (sizeof(__y) == sizeof(float )) {
#line 112
      tmp___4 = __FLOAT_BITS((float )__y);
#line 112
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 112
      if (sizeof(__y) == sizeof(double )) {
#line 112
        tmp___5 = __DOUBLE_BITS(__y);
#line 112
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 112
        tmp___6 = __fpclassifyl((long double )__y);
#line 112
        tmp___7 = tmp___6 == 0;
      }
#line 112
      tmp___8 = tmp___7;
    }
#line 112
    tmp___9 = tmp___8;
  }
#line 112
  if (tmp___9) {
#line 112
    tmp___15 = 0;
  } else
#line 112
  if (__x <= __y) {
#line 112
    tmp___15 = 1;
  } else {
#line 112
    tmp___15 = 0;
  }
#line 112
  return (tmp___15);
}
}
#line 113 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessequall(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 113
  if (sizeof(__x) == sizeof(float )) {
#line 113
    tmp___10 = __FLOAT_BITS((float )__x);
#line 113
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 113
    if (sizeof(__x) == sizeof(double )) {
#line 113
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 113
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 113
      tmp___12 = __fpclassifyl(__x);
#line 113
      tmp___13 = tmp___12 == 0;
    }
#line 113
    tmp___14 = tmp___13;
  }
#line 113
  if (tmp___14) {
#line 113
    tmp___9 = 1;
  } else {
#line 113
    if (sizeof(__y) == sizeof(float )) {
#line 113
      tmp___4 = __FLOAT_BITS((float )__y);
#line 113
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 113
      if (sizeof(__y) == sizeof(double )) {
#line 113
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 113
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 113
        tmp___6 = __fpclassifyl(__y);
#line 113
        tmp___7 = tmp___6 == 0;
      }
#line 113
      tmp___8 = tmp___7;
    }
#line 113
    tmp___9 = tmp___8;
  }
#line 113
  if (tmp___9) {
#line 113
    tmp___15 = 0;
  } else
#line 113
  if (__x <= __y) {
#line 113
    tmp___15 = 1;
  } else {
#line 113
    tmp___15 = 0;
  }
#line 113
  return (tmp___15);
}
}
#line 114 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessgreaterf(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 114
  if (sizeof(__x) == sizeof(float )) {
#line 114
    tmp___10 = __FLOAT_BITS(__x);
#line 114
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 114
    if (sizeof(__x) == sizeof(double )) {
#line 114
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 114
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 114
      tmp___12 = __fpclassifyl((long double )__x);
#line 114
      tmp___13 = tmp___12 == 0;
    }
#line 114
    tmp___14 = tmp___13;
  }
#line 114
  if (tmp___14) {
#line 114
    tmp___9 = 1;
  } else {
#line 114
    if (sizeof(__y) == sizeof(float )) {
#line 114
      tmp___4 = __FLOAT_BITS(__y);
#line 114
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 114
      if (sizeof(__y) == sizeof(double )) {
#line 114
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 114
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 114
        tmp___6 = __fpclassifyl((long double )__y);
#line 114
        tmp___7 = tmp___6 == 0;
      }
#line 114
      tmp___8 = tmp___7;
    }
#line 114
    tmp___9 = tmp___8;
  }
#line 114
  if (tmp___9) {
#line 114
    tmp___15 = 0;
  } else
#line 114
  if (__x != __y) {
#line 114
    tmp___15 = 1;
  } else {
#line 114
    tmp___15 = 0;
  }
#line 114
  return (tmp___15);
}
}
#line 115 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessgreater(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 115
  if (sizeof(__x) == sizeof(float )) {
#line 115
    tmp___10 = __FLOAT_BITS((float )__x);
#line 115
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 115
    if (sizeof(__x) == sizeof(double )) {
#line 115
      tmp___11 = __DOUBLE_BITS(__x);
#line 115
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 115
      tmp___12 = __fpclassifyl((long double )__x);
#line 115
      tmp___13 = tmp___12 == 0;
    }
#line 115
    tmp___14 = tmp___13;
  }
#line 115
  if (tmp___14) {
#line 115
    tmp___9 = 1;
  } else {
#line 115
    if (sizeof(__y) == sizeof(float )) {
#line 115
      tmp___4 = __FLOAT_BITS((float )__y);
#line 115
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 115
      if (sizeof(__y) == sizeof(double )) {
#line 115
        tmp___5 = __DOUBLE_BITS(__y);
#line 115
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 115
        tmp___6 = __fpclassifyl((long double )__y);
#line 115
        tmp___7 = tmp___6 == 0;
      }
#line 115
      tmp___8 = tmp___7;
    }
#line 115
    tmp___9 = tmp___8;
  }
#line 115
  if (tmp___9) {
#line 115
    tmp___15 = 0;
  } else
#line 115
  if (__x != __y) {
#line 115
    tmp___15 = 1;
  } else {
#line 115
    tmp___15 = 0;
  }
#line 115
  return (tmp___15);
}
}
#line 116 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessgreaterl(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 116
  if (sizeof(__x) == sizeof(float )) {
#line 116
    tmp___10 = __FLOAT_BITS((float )__x);
#line 116
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 116
    if (sizeof(__x) == sizeof(double )) {
#line 116
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 116
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 116
      tmp___12 = __fpclassifyl(__x);
#line 116
      tmp___13 = tmp___12 == 0;
    }
#line 116
    tmp___14 = tmp___13;
  }
#line 116
  if (tmp___14) {
#line 116
    tmp___9 = 1;
  } else {
#line 116
    if (sizeof(__y) == sizeof(float )) {
#line 116
      tmp___4 = __FLOAT_BITS((float )__y);
#line 116
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 116
      if (sizeof(__y) == sizeof(double )) {
#line 116
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 116
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 116
        tmp___6 = __fpclassifyl(__y);
#line 116
        tmp___7 = tmp___6 == 0;
      }
#line 116
      tmp___8 = tmp___7;
    }
#line 116
    tmp___9 = tmp___8;
  }
#line 116
  if (tmp___9) {
#line 116
    tmp___15 = 0;
  } else
#line 116
  if (__x != __y) {
#line 116
    tmp___15 = 1;
  } else {
#line 116
    tmp___15 = 0;
  }
#line 116
  return (tmp___15);
}
}
#line 117 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterf(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 117
  if (sizeof(__x) == sizeof(float )) {
#line 117
    tmp___10 = __FLOAT_BITS(__x);
#line 117
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 117
    if (sizeof(__x) == sizeof(double )) {
#line 117
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 117
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 117
      tmp___12 = __fpclassifyl((long double )__x);
#line 117
      tmp___13 = tmp___12 == 0;
    }
#line 117
    tmp___14 = tmp___13;
  }
#line 117
  if (tmp___14) {
#line 117
    tmp___9 = 1;
  } else {
#line 117
    if (sizeof(__y) == sizeof(float )) {
#line 117
      tmp___4 = __FLOAT_BITS(__y);
#line 117
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 117
      if (sizeof(__y) == sizeof(double )) {
#line 117
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 117
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 117
        tmp___6 = __fpclassifyl((long double )__y);
#line 117
        tmp___7 = tmp___6 == 0;
      }
#line 117
      tmp___8 = tmp___7;
    }
#line 117
    tmp___9 = tmp___8;
  }
#line 117
  if (tmp___9) {
#line 117
    tmp___15 = 0;
  } else
#line 117
  if (__x > __y) {
#line 117
    tmp___15 = 1;
  } else {
#line 117
    tmp___15 = 0;
  }
#line 117
  return (tmp___15);
}
}
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreater(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 118
  if (sizeof(__x) == sizeof(float )) {
#line 118
    tmp___10 = __FLOAT_BITS((float )__x);
#line 118
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 118
    if (sizeof(__x) == sizeof(double )) {
#line 118
      tmp___11 = __DOUBLE_BITS(__x);
#line 118
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 118
      tmp___12 = __fpclassifyl((long double )__x);
#line 118
      tmp___13 = tmp___12 == 0;
    }
#line 118
    tmp___14 = tmp___13;
  }
#line 118
  if (tmp___14) {
#line 118
    tmp___9 = 1;
  } else {
#line 118
    if (sizeof(__y) == sizeof(float )) {
#line 118
      tmp___4 = __FLOAT_BITS((float )__y);
#line 118
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 118
      if (sizeof(__y) == sizeof(double )) {
#line 118
        tmp___5 = __DOUBLE_BITS(__y);
#line 118
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 118
        tmp___6 = __fpclassifyl((long double )__y);
#line 118
        tmp___7 = tmp___6 == 0;
      }
#line 118
      tmp___8 = tmp___7;
    }
#line 118
    tmp___9 = tmp___8;
  }
#line 118
  if (tmp___9) {
#line 118
    tmp___15 = 0;
  } else
#line 118
  if (__x > __y) {
#line 118
    tmp___15 = 1;
  } else {
#line 118
    tmp___15 = 0;
  }
#line 118
  return (tmp___15);
}
}
#line 119 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterl(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 119
  if (sizeof(__x) == sizeof(float )) {
#line 119
    tmp___10 = __FLOAT_BITS((float )__x);
#line 119
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 119
    if (sizeof(__x) == sizeof(double )) {
#line 119
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 119
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 119
      tmp___12 = __fpclassifyl(__x);
#line 119
      tmp___13 = tmp___12 == 0;
    }
#line 119
    tmp___14 = tmp___13;
  }
#line 119
  if (tmp___14) {
#line 119
    tmp___9 = 1;
  } else {
#line 119
    if (sizeof(__y) == sizeof(float )) {
#line 119
      tmp___4 = __FLOAT_BITS((float )__y);
#line 119
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 119
      if (sizeof(__y) == sizeof(double )) {
#line 119
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 119
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 119
        tmp___6 = __fpclassifyl(__y);
#line 119
        tmp___7 = tmp___6 == 0;
      }
#line 119
      tmp___8 = tmp___7;
    }
#line 119
    tmp___9 = tmp___8;
  }
#line 119
  if (tmp___9) {
#line 119
    tmp___15 = 0;
  } else
#line 119
  if (__x > __y) {
#line 119
    tmp___15 = 1;
  } else {
#line 119
    tmp___15 = 0;
  }
#line 119
  return (tmp___15);
}
}
#line 120 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterequalf(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 120
  if (sizeof(__x) == sizeof(float )) {
#line 120
    tmp___10 = __FLOAT_BITS(__x);
#line 120
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 120
    if (sizeof(__x) == sizeof(double )) {
#line 120
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 120
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 120
      tmp___12 = __fpclassifyl((long double )__x);
#line 120
      tmp___13 = tmp___12 == 0;
    }
#line 120
    tmp___14 = tmp___13;
  }
#line 120
  if (tmp___14) {
#line 120
    tmp___9 = 1;
  } else {
#line 120
    if (sizeof(__y) == sizeof(float )) {
#line 120
      tmp___4 = __FLOAT_BITS(__y);
#line 120
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 120
      if (sizeof(__y) == sizeof(double )) {
#line 120
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 120
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 120
        tmp___6 = __fpclassifyl((long double )__y);
#line 120
        tmp___7 = tmp___6 == 0;
      }
#line 120
      tmp___8 = tmp___7;
    }
#line 120
    tmp___9 = tmp___8;
  }
#line 120
  if (tmp___9) {
#line 120
    tmp___15 = 0;
  } else
#line 120
  if (__x >= __y) {
#line 120
    tmp___15 = 1;
  } else {
#line 120
    tmp___15 = 0;
  }
#line 120
  return (tmp___15);
}
}
#line 121 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterequal(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 121
  if (sizeof(__x) == sizeof(float )) {
#line 121
    tmp___10 = __FLOAT_BITS((float )__x);
#line 121
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 121
    if (sizeof(__x) == sizeof(double )) {
#line 121
      tmp___11 = __DOUBLE_BITS(__x);
#line 121
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 121
      tmp___12 = __fpclassifyl((long double )__x);
#line 121
      tmp___13 = tmp___12 == 0;
    }
#line 121
    tmp___14 = tmp___13;
  }
#line 121
  if (tmp___14) {
#line 121
    tmp___9 = 1;
  } else {
#line 121
    if (sizeof(__y) == sizeof(float )) {
#line 121
      tmp___4 = __FLOAT_BITS((float )__y);
#line 121
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 121
      if (sizeof(__y) == sizeof(double )) {
#line 121
        tmp___5 = __DOUBLE_BITS(__y);
#line 121
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 121
        tmp___6 = __fpclassifyl((long double )__y);
#line 121
        tmp___7 = tmp___6 == 0;
      }
#line 121
      tmp___8 = tmp___7;
    }
#line 121
    tmp___9 = tmp___8;
  }
#line 121
  if (tmp___9) {
#line 121
    tmp___15 = 0;
  } else
#line 121
  if (__x >= __y) {
#line 121
    tmp___15 = 1;
  } else {
#line 121
    tmp___15 = 0;
  }
#line 121
  return (tmp___15);
}
}
#line 122 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterequall(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 122
  if (sizeof(__x) == sizeof(float )) {
#line 122
    tmp___10 = __FLOAT_BITS((float )__x);
#line 122
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 122
    if (sizeof(__x) == sizeof(double )) {
#line 122
      tmp___11 = __DOUBLE_BITS((double )__x);
#line 122
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 122
      tmp___12 = __fpclassifyl(__x);
#line 122
      tmp___13 = tmp___12 == 0;
    }
#line 122
    tmp___14 = tmp___13;
  }
#line 122
  if (tmp___14) {
#line 122
    tmp___9 = 1;
  } else {
#line 122
    if (sizeof(__y) == sizeof(float )) {
#line 122
      tmp___4 = __FLOAT_BITS((float )__y);
#line 122
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 122
      if (sizeof(__y) == sizeof(double )) {
#line 122
        tmp___5 = __DOUBLE_BITS((double )__y);
#line 122
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 122
        tmp___6 = __fpclassifyl(__y);
#line 122
        tmp___7 = tmp___6 == 0;
      }
#line 122
      tmp___8 = tmp___7;
    }
#line 122
    tmp___9 = tmp___8;
  }
#line 122
  if (tmp___9) {
#line 122
    tmp___15 = 0;
  } else
#line 122
  if (__x >= __y) {
#line 122
    tmp___15 = 1;
  } else {
#line 122
    tmp___15 = 0;
  }
#line 122
  return (tmp___15);
}
}
#line 135
extern double acos(double  ) ;
#line 136
extern float acosf(float  ) ;
#line 137
extern long double acosl(long double  ) ;
#line 139
extern double acosh(double  ) ;
#line 140
extern float acoshf(float  ) ;
#line 141
extern long double acoshl(long double  ) ;
#line 143
extern double asin(double  ) ;
#line 144
extern float asinf(float  ) ;
#line 145
extern long double asinl(long double  ) ;
#line 147
extern double asinh(double  ) ;
#line 148
extern float asinhf(float  ) ;
#line 149
extern long double asinhl(long double  ) ;
#line 151
extern double atan(double  ) ;
#line 152
extern float atanf(float  ) ;
#line 153
extern long double atanl(long double  ) ;
#line 155
extern double atan2(double  , double  ) ;
#line 156
extern float atan2f(float  , float  ) ;
#line 157
extern long double atan2l(long double  , long double  ) ;
#line 159
extern double atanh(double  ) ;
#line 160
extern float atanhf(float  ) ;
#line 161
extern long double atanhl(long double  ) ;
#line 163
extern double cbrt(double  ) ;
#line 164
extern float cbrtf(float  ) ;
#line 165
extern long double cbrtl(long double  ) ;
#line 167
extern double ceil(double  ) ;
#line 168
extern float ceilf(float  ) ;
#line 169
extern long double ceill(long double  ) ;
#line 171
extern double copysign(double  , double  ) ;
#line 172
extern float copysignf(float  , float  ) ;
#line 173
extern long double copysignl(long double  , long double  ) ;
#line 175
extern double cos(double  ) ;
#line 176
extern float cosf(float  ) ;
#line 177
extern long double cosl(long double  ) ;
#line 179
extern double cosh(double  ) ;
#line 180
extern float coshf(float  ) ;
#line 181
extern long double coshl(long double  ) ;
#line 183
extern double erf(double  ) ;
#line 184
extern float erff(float  ) ;
#line 185
extern long double erfl(long double  ) ;
#line 187
extern double erfc(double  ) ;
#line 188
extern float erfcf(float  ) ;
#line 189
extern long double erfcl(long double  ) ;
#line 191
extern double exp(double  ) ;
#line 192
extern float expf(float  ) ;
#line 193
extern long double expl(long double  ) ;
#line 195
extern double exp2(double  ) ;
#line 196
extern float exp2f(float  ) ;
#line 197
extern long double exp2l(long double  ) ;
#line 199
extern double expm1(double  ) ;
#line 200
extern float expm1f(float  ) ;
#line 201
extern long double expm1l(long double  ) ;
#line 203
extern double fabs(double  ) ;
#line 204
extern float fabsf(float  ) ;
#line 205
extern long double fabsl(long double  ) ;
#line 207
extern double fdim(double  , double  ) ;
#line 208
extern float fdimf(float  , float  ) ;
#line 209
extern long double fdiml(long double  , long double  ) ;
#line 211
extern double floor(double  ) ;
#line 212
extern float floorf(float  ) ;
#line 213
extern long double floorl(long double  ) ;
#line 215
extern double fma(double  , double  , double  ) ;
#line 216
extern float fmaf(float  , float  , float  ) ;
#line 217
extern long double fmal(long double  , long double  , long double  ) ;
#line 219
extern double fmax(double  , double  ) ;
#line 220
extern float fmaxf(float  , float  ) ;
#line 221
extern long double fmaxl(long double  , long double  ) ;
#line 223
extern double fmin(double  , double  ) ;
#line 224
extern float fminf(float  , float  ) ;
#line 225
extern long double fminl(long double  , long double  ) ;
#line 227
extern double fmod(double  , double  ) ;
#line 228
extern float fmodf(float  , float  ) ;
#line 229
extern long double fmodl(long double  , long double  ) ;
#line 231
extern double frexp(double  , int * ) ;
#line 232
extern float frexpf(float  , int * ) ;
#line 233
extern long double frexpl(long double  , int * ) ;
#line 235
extern double hypot(double  , double  ) ;
#line 236
extern float hypotf(float  , float  ) ;
#line 237
extern long double hypotl(long double  , long double  ) ;
#line 239
extern int ilogb(double  ) ;
#line 240
extern int ilogbf(float  ) ;
#line 241
extern int ilogbl(long double  ) ;
#line 243
extern double ldexp(double  , int  ) ;
#line 244
extern float ldexpf(float  , int  ) ;
#line 245
extern long double ldexpl(long double  , int  ) ;
#line 247
extern double lgamma(double  ) ;
#line 248
extern float lgammaf(float  ) ;
#line 249
extern long double lgammal(long double  ) ;
#line 251
extern long long llrint(double  ) ;
#line 252
extern long long llrintf(float  ) ;
#line 253
extern long long llrintl(long double  ) ;
#line 255
extern long long llround(double  ) ;
#line 256
extern long long llroundf(float  ) ;
#line 257
extern long long llroundl(long double  ) ;
#line 259
extern double log(double  ) ;
#line 260
extern float logf(float  ) ;
#line 261
extern long double logl(long double  ) ;
#line 263
extern double log10(double  ) ;
#line 264
extern float log10f(float  ) ;
#line 265
extern long double log10l(long double  ) ;
#line 267
extern double log1p(double  ) ;
#line 268
extern float log1pf(float  ) ;
#line 269
extern long double log1pl(long double  ) ;
#line 271
extern double log2(double  ) ;
#line 272
extern float log2f(float  ) ;
#line 273
extern long double log2l(long double  ) ;
#line 275
extern double logb(double  ) ;
#line 276
extern float logbf(float  ) ;
#line 277
extern long double logbl(long double  ) ;
#line 279
extern long lrint(double  ) ;
#line 280
extern long lrintf(float  ) ;
#line 281
extern long lrintl(long double  ) ;
#line 283
extern long lround(double  ) ;
#line 284
extern long lroundf(float  ) ;
#line 285
extern long lroundl(long double  ) ;
#line 287
extern double modf(double  , double * ) ;
#line 288
extern float modff(float  , float * ) ;
#line 289
extern long double modfl(long double  , long double * ) ;
#line 291
extern double nan(char const   * ) ;
#line 292
extern float nanf(char const   * ) ;
#line 293
extern long double nanl(char const   * ) ;
#line 295
extern double nearbyint(double  ) ;
#line 296
extern float nearbyintf(float  ) ;
#line 297
extern long double nearbyintl(long double  ) ;
#line 299
extern double nextafter(double  , double  ) ;
#line 300
extern float nextafterf(float  , float  ) ;
#line 301
extern long double nextafterl(long double  , long double  ) ;
#line 303
extern double nexttoward(double  , long double  ) ;
#line 304
extern float nexttowardf(float  , long double  ) ;
#line 305
extern long double nexttowardl(long double  , long double  ) ;
#line 307
extern double pow(double  , double  ) ;
#line 308
extern float powf(float  , float  ) ;
#line 309
extern long double powl(long double  , long double  ) ;
#line 311
extern double remainder(double  , double  ) ;
#line 312
extern float remainderf(float  , float  ) ;
#line 313
extern long double remainderl(long double  , long double  ) ;
#line 315
extern double remquo(double  , double  , int * ) ;
#line 316
extern float remquof(float  , float  , int * ) ;
#line 317
extern long double remquol(long double  , long double  , int * ) ;
#line 319
extern double rint(double  ) ;
#line 320
extern float rintf(float  ) ;
#line 321
extern long double rintl(long double  ) ;
#line 323
extern double round(double  ) ;
#line 324
extern float roundf(float  ) ;
#line 325
extern long double roundl(long double  ) ;
#line 327
extern double scalbln(double  , long  ) ;
#line 328
extern float scalblnf(float  , long  ) ;
#line 329
extern long double scalblnl(long double  , long  ) ;
#line 331
extern double scalbn(double  , int  ) ;
#line 332
extern float scalbnf(float  , int  ) ;
#line 333
extern long double scalbnl(long double  , int  ) ;
#line 335
extern double sin(double  ) ;
#line 336
extern float sinf(float  ) ;
#line 337
extern long double sinl(long double  ) ;
#line 339
extern double sinh(double  ) ;
#line 340
extern float sinhf(float  ) ;
#line 341
extern long double sinhl(long double  ) ;
#line 343
extern double sqrt(double  ) ;
#line 344
extern float sqrtf(float  ) ;
#line 345
extern long double sqrtl(long double  ) ;
#line 347
extern double tan(double  ) ;
#line 348
extern float tanf(float  ) ;
#line 349
extern long double tanl(long double  ) ;
#line 351
extern double tanh(double  ) ;
#line 352
extern float tanhf(float  ) ;
#line 353
extern long double tanhl(long double  ) ;
#line 355
extern double tgamma(double  ) ;
#line 356
extern float tgammaf(float  ) ;
#line 357
extern long double tgammal(long double  ) ;
#line 359
extern double trunc(double  ) ;
#line 360
extern float truncf(float  ) ;
#line 361
extern long double truncl(long double  ) ;
#line 384
extern int signgam ;
#line 386
extern double j0(double  ) ;
#line 387
extern double j1(double  ) ;
#line 388
extern double jn(int  , double  ) ;
#line 390
extern double y0(double  ) ;
#line 391
extern double y1(double  ) ;
#line 392
extern double yn(int  , double  ) ;
#line 398
extern double drem(double  , double  ) ;
#line 399
extern float dremf(float  , float  ) ;
#line 401
extern int finite(double  ) ;
#line 402
extern int finitef(float  ) ;
#line 404
extern double scalb(double  , double  ) ;
#line 405
extern float scalbf(float  , float  ) ;
#line 407
extern double significand(double  ) ;
#line 408
extern float significandf(float  ) ;
#line 410
extern double lgamma_r(double  , int * ) ;
#line 411
extern float lgammaf_r(float  , int * ) ;
#line 413
extern float j0f(float  ) ;
#line 414
extern float j1f(float  ) ;
#line 415
extern float jnf(int  , float  ) ;
#line 417
extern float y0f(float  ) ;
#line 418
extern float y1f(float  ) ;
#line 419
extern float ynf(int  , float  ) ;
#line 49 "./variant2_int_sqrt.h"
__inline static uint32_t integer_square_root_v2(uint64_t n ) 
{ 
  uint64_t r___0 ;
  uint64_t bit ;
  _Bool b ;
  uint64_t n_next ;
  uint64_t r_next ;
  int tmp ;

  {
#line 51
  r___0 = 1ULL << 63;
#line 53
  bit = 1ULL << 60;
#line 53
  while (bit) {
#line 55
    b = (_Bool )(n < r___0 + bit);
#line 56
    n_next = n - (r___0 + bit);
#line 57
    r_next = r___0 + bit * 2ULL;
#line 58
    if (b) {
#line 58
      n = n;
    } else {
#line 58
      n = n_next;
    }
#line 59
    if (b) {
#line 59
      r___0 = r___0;
    } else {
#line 59
      r___0 = r_next;
    }
#line 60
    r___0 >>= 1;
#line 53
    bit >>= 2;
  }
#line 63
  if (n > r___0) {
#line 63
    tmp = 1;
  } else {
#line 63
    tmp = 0;
  }
#line 63
  return ((uint32_t )(r___0 * 2ULL + (uint64_t )tmp));
}
}
#line 88 "./variant4_random_math.h"
__inline static void ( __attribute__((__always_inline__)) v4_random_math)(struct V4_Instruction  const  *code___0 ,
                                                                          v4_reg *r___0 ) 
{ 
  struct V4_Instruction  const  *op ;
  v4_reg src ;
  v4_reg *dst ;
  uint32_t shift ;
  uint32_t shift___0 ;
  struct V4_Instruction  const  *op___0 ;
  v4_reg src___0 ;
  v4_reg *dst___0 ;
  uint32_t shift___1 ;
  uint32_t shift___2 ;
  struct V4_Instruction  const  *op___1 ;
  v4_reg src___1 ;
  v4_reg *dst___1 ;
  uint32_t shift___3 ;
  uint32_t shift___4 ;
  struct V4_Instruction  const  *op___2 ;
  v4_reg src___2 ;
  v4_reg *dst___2 ;
  uint32_t shift___5 ;
  uint32_t shift___6 ;
  struct V4_Instruction  const  *op___3 ;
  v4_reg src___3 ;
  v4_reg *dst___3 ;
  uint32_t shift___7 ;
  uint32_t shift___8 ;
  struct V4_Instruction  const  *op___4 ;
  v4_reg src___4 ;
  v4_reg *dst___4 ;
  uint32_t shift___9 ;
  uint32_t shift___10 ;
  struct V4_Instruction  const  *op___5 ;
  v4_reg src___5 ;
  v4_reg *dst___5 ;
  uint32_t shift___11 ;
  uint32_t shift___12 ;
  struct V4_Instruction  const  *op___6 ;
  v4_reg src___6 ;
  v4_reg *dst___6 ;
  uint32_t shift___13 ;
  uint32_t shift___14 ;
  struct V4_Instruction  const  *op___7 ;
  v4_reg src___7 ;
  v4_reg *dst___7 ;
  uint32_t shift___15 ;
  uint32_t shift___16 ;
  struct V4_Instruction  const  *op___8 ;
  v4_reg src___8 ;
  v4_reg *dst___8 ;
  uint32_t shift___17 ;
  uint32_t shift___18 ;
  struct V4_Instruction  const  *op___9 ;
  v4_reg src___9 ;
  v4_reg *dst___9 ;
  uint32_t shift___19 ;
  uint32_t shift___20 ;
  struct V4_Instruction  const  *op___10 ;
  v4_reg src___10 ;
  v4_reg *dst___10 ;
  uint32_t shift___21 ;
  uint32_t shift___22 ;
  struct V4_Instruction  const  *op___11 ;
  v4_reg src___11 ;
  v4_reg *dst___11 ;
  uint32_t shift___23 ;
  uint32_t shift___24 ;
  struct V4_Instruction  const  *op___12 ;
  v4_reg src___12 ;
  v4_reg *dst___12 ;
  uint32_t shift___25 ;
  uint32_t shift___26 ;
  struct V4_Instruction  const  *op___13 ;
  v4_reg src___13 ;
  v4_reg *dst___13 ;
  uint32_t shift___27 ;
  uint32_t shift___28 ;
  struct V4_Instruction  const  *op___14 ;
  v4_reg src___14 ;
  v4_reg *dst___14 ;
  uint32_t shift___29 ;
  uint32_t shift___30 ;
  struct V4_Instruction  const  *op___15 ;
  v4_reg src___15 ;
  v4_reg *dst___15 ;
  uint32_t shift___31 ;
  uint32_t shift___32 ;
  struct V4_Instruction  const  *op___16 ;
  v4_reg src___16 ;
  v4_reg *dst___16 ;
  uint32_t shift___33 ;
  uint32_t shift___34 ;
  struct V4_Instruction  const  *op___17 ;
  v4_reg src___17 ;
  v4_reg *dst___17 ;
  uint32_t shift___35 ;
  uint32_t shift___36 ;
  struct V4_Instruction  const  *op___18 ;
  v4_reg src___18 ;
  v4_reg *dst___18 ;
  uint32_t shift___37 ;
  uint32_t shift___38 ;
  struct V4_Instruction  const  *op___19 ;
  v4_reg src___19 ;
  v4_reg *dst___19 ;
  uint32_t shift___39 ;
  uint32_t shift___40 ;
  struct V4_Instruction  const  *op___20 ;
  v4_reg src___20 ;
  v4_reg *dst___20 ;
  uint32_t shift___41 ;
  uint32_t shift___42 ;
  struct V4_Instruction  const  *op___21 ;
  v4_reg src___21 ;
  v4_reg *dst___21 ;
  uint32_t shift___43 ;
  uint32_t shift___44 ;
  struct V4_Instruction  const  *op___22 ;
  v4_reg src___22 ;
  v4_reg *dst___22 ;
  uint32_t shift___45 ;
  uint32_t shift___46 ;
  struct V4_Instruction  const  *op___23 ;
  v4_reg src___23 ;
  v4_reg *dst___23 ;
  uint32_t shift___47 ;
  uint32_t shift___48 ;
  struct V4_Instruction  const  *op___24 ;
  v4_reg src___24 ;
  v4_reg *dst___24 ;
  uint32_t shift___49 ;
  uint32_t shift___50 ;
  struct V4_Instruction  const  *op___25 ;
  v4_reg src___25 ;
  v4_reg *dst___25 ;
  uint32_t shift___51 ;
  uint32_t shift___52 ;
  struct V4_Instruction  const  *op___26 ;
  v4_reg src___26 ;
  v4_reg *dst___26 ;
  uint32_t shift___53 ;
  uint32_t shift___54 ;
  struct V4_Instruction  const  *op___27 ;
  v4_reg src___27 ;
  v4_reg *dst___27 ;
  uint32_t shift___55 ;
  uint32_t shift___56 ;
  struct V4_Instruction  const  *op___28 ;
  v4_reg src___28 ;
  v4_reg *dst___28 ;
  uint32_t shift___57 ;
  uint32_t shift___58 ;
  struct V4_Instruction  const  *op___29 ;
  v4_reg src___29 ;
  v4_reg *dst___29 ;
  uint32_t shift___59 ;
  uint32_t shift___60 ;
  struct V4_Instruction  const  *op___30 ;
  v4_reg src___30 ;
  v4_reg *dst___30 ;
  uint32_t shift___61 ;
  uint32_t shift___62 ;
  struct V4_Instruction  const  *op___31 ;
  v4_reg src___31 ;
  v4_reg *dst___31 ;
  uint32_t shift___63 ;
  uint32_t shift___64 ;
  struct V4_Instruction  const  *op___32 ;
  v4_reg src___32 ;
  v4_reg *dst___32 ;
  uint32_t shift___65 ;
  uint32_t shift___66 ;
  struct V4_Instruction  const  *op___33 ;
  v4_reg src___33 ;
  v4_reg *dst___33 ;
  uint32_t shift___67 ;
  uint32_t shift___68 ;
  struct V4_Instruction  const  *op___34 ;
  v4_reg src___34 ;
  v4_reg *dst___34 ;
  uint32_t shift___69 ;
  uint32_t shift___70 ;
  struct V4_Instruction  const  *op___35 ;
  v4_reg src___35 ;
  v4_reg *dst___35 ;
  uint32_t shift___71 ;
  uint32_t shift___72 ;
  struct V4_Instruction  const  *op___36 ;
  v4_reg src___36 ;
  v4_reg *dst___36 ;
  uint32_t shift___73 ;
  uint32_t shift___74 ;
  struct V4_Instruction  const  *op___37 ;
  v4_reg src___37 ;
  v4_reg *dst___37 ;
  uint32_t shift___75 ;
  uint32_t shift___76 ;
  struct V4_Instruction  const  *op___38 ;
  v4_reg src___38 ;
  v4_reg *dst___38 ;
  uint32_t shift___77 ;
  uint32_t shift___78 ;
  struct V4_Instruction  const  *op___39 ;
  v4_reg src___39 ;
  v4_reg *dst___39 ;
  uint32_t shift___79 ;
  uint32_t shift___80 ;
  struct V4_Instruction  const  *op___40 ;
  v4_reg src___40 ;
  v4_reg *dst___40 ;
  uint32_t shift___81 ;
  uint32_t shift___82 ;
  struct V4_Instruction  const  *op___41 ;
  v4_reg src___41 ;
  v4_reg *dst___41 ;
  uint32_t shift___83 ;
  uint32_t shift___84 ;
  struct V4_Instruction  const  *op___42 ;
  v4_reg src___42 ;
  v4_reg *dst___42 ;
  uint32_t shift___85 ;
  uint32_t shift___86 ;
  struct V4_Instruction  const  *op___43 ;
  v4_reg src___43 ;
  v4_reg *dst___43 ;
  uint32_t shift___87 ;
  uint32_t shift___88 ;
  struct V4_Instruction  const  *op___44 ;
  v4_reg src___44 ;
  v4_reg *dst___44 ;
  uint32_t shift___89 ;
  uint32_t shift___90 ;
  struct V4_Instruction  const  *op___45 ;
  v4_reg src___45 ;
  v4_reg *dst___45 ;
  uint32_t shift___91 ;
  uint32_t shift___92 ;
  struct V4_Instruction  const  *op___46 ;
  v4_reg src___46 ;
  v4_reg *dst___46 ;
  uint32_t shift___93 ;
  uint32_t shift___94 ;
  struct V4_Instruction  const  *op___47 ;
  v4_reg src___47 ;
  v4_reg *dst___47 ;
  uint32_t shift___95 ;
  uint32_t shift___96 ;
  struct V4_Instruction  const  *op___48 ;
  v4_reg src___48 ;
  v4_reg *dst___48 ;
  uint32_t shift___97 ;
  uint32_t shift___98 ;
  struct V4_Instruction  const  *op___49 ;
  v4_reg src___49 ;
  v4_reg *dst___49 ;
  uint32_t shift___99 ;
  uint32_t shift___100 ;
  struct V4_Instruction  const  *op___50 ;
  v4_reg src___50 ;
  v4_reg *dst___50 ;
  uint32_t shift___101 ;
  uint32_t shift___102 ;
  struct V4_Instruction  const  *op___51 ;
  v4_reg src___51 ;
  v4_reg *dst___51 ;
  uint32_t shift___103 ;
  uint32_t shift___104 ;
  struct V4_Instruction  const  *op___52 ;
  v4_reg src___52 ;
  v4_reg *dst___52 ;
  uint32_t shift___105 ;
  uint32_t shift___106 ;
  struct V4_Instruction  const  *op___53 ;
  v4_reg src___53 ;
  v4_reg *dst___53 ;
  uint32_t shift___107 ;
  uint32_t shift___108 ;
  struct V4_Instruction  const  *op___54 ;
  v4_reg src___54 ;
  v4_reg *dst___54 ;
  uint32_t shift___109 ;
  uint32_t shift___110 ;
  struct V4_Instruction  const  *op___55 ;
  v4_reg src___55 ;
  v4_reg *dst___55 ;
  uint32_t shift___111 ;
  uint32_t shift___112 ;
  struct V4_Instruction  const  *op___56 ;
  v4_reg src___56 ;
  v4_reg *dst___56 ;
  uint32_t shift___113 ;
  uint32_t shift___114 ;
  struct V4_Instruction  const  *op___57 ;
  v4_reg src___57 ;
  v4_reg *dst___57 ;
  uint32_t shift___115 ;
  uint32_t shift___116 ;
  struct V4_Instruction  const  *op___58 ;
  v4_reg src___58 ;
  v4_reg *dst___58 ;
  uint32_t shift___117 ;
  uint32_t shift___118 ;
  struct V4_Instruction  const  *op___59 ;
  v4_reg src___59 ;
  v4_reg *dst___59 ;
  uint32_t shift___119 ;
  uint32_t shift___120 ;
  struct V4_Instruction  const  *op___60 ;
  v4_reg src___60 ;
  v4_reg *dst___60 ;
  uint32_t shift___121 ;
  uint32_t shift___122 ;
  struct V4_Instruction  const  *op___61 ;
  v4_reg src___61 ;
  v4_reg *dst___61 ;
  uint32_t shift___123 ;
  uint32_t shift___124 ;
  struct V4_Instruction  const  *op___62 ;
  v4_reg src___62 ;
  v4_reg *dst___62 ;
  uint32_t shift___125 ;
  uint32_t shift___126 ;
  struct V4_Instruction  const  *op___63 ;
  v4_reg src___63 ;
  v4_reg *dst___63 ;
  uint32_t shift___127 ;
  uint32_t shift___128 ;
  struct V4_Instruction  const  *op___64 ;
  v4_reg src___64 ;
  v4_reg *dst___64 ;
  uint32_t shift___129 ;
  uint32_t shift___130 ;
  struct V4_Instruction  const  *op___65 ;
  v4_reg src___65 ;
  v4_reg *dst___65 ;
  uint32_t shift___131 ;
  uint32_t shift___132 ;
  struct V4_Instruction  const  *op___66 ;
  v4_reg src___66 ;
  v4_reg *dst___66 ;
  uint32_t shift___133 ;
  uint32_t shift___134 ;
  struct V4_Instruction  const  *op___67 ;
  v4_reg src___67 ;
  v4_reg *dst___67 ;
  uint32_t shift___135 ;
  uint32_t shift___136 ;
  struct V4_Instruction  const  *op___68 ;
  v4_reg src___68 ;
  v4_reg *dst___68 ;
  uint32_t shift___137 ;
  uint32_t shift___138 ;

  {
#line 161
  op = (code___0 + 0) + 0;
#line 161
  src = *(r___0 + op->src_index);
#line 161
  dst = r___0 + (int const   )op->dst_index;
#line 161
  switch ((int const   )op->opcode) {
  case 0: 
#line 161
  *dst *= src;
#line 161
  break;
  case 1: 
#line 161
  *dst += src + (v4_reg )op->C;
#line 161
  break;
  case 2: 
#line 161
  *dst -= src;
#line 161
  break;
  case 3: 
#line 161
  shift = src % 32U;
#line 161
  *dst = (*dst >> shift) | (*dst << (32U - shift) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___0 = src % 32U;
#line 161
  *dst = (*dst << shift___0) | (*dst >> (32U - shift___0) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst ^= src;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___0 = (code___0 + 0) + 1;
#line 161
  src___0 = *(r___0 + op___0->src_index);
#line 161
  dst___0 = r___0 + (int const   )op___0->dst_index;
#line 161
  switch ((int const   )op___0->opcode) {
  case 0: 
#line 161
  *dst___0 *= src___0;
#line 161
  break;
  case 1: 
#line 161
  *dst___0 += src___0 + (v4_reg )op___0->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___0 -= src___0;
#line 161
  break;
  case 3: 
#line 161
  shift___1 = src___0 % 32U;
#line 161
  *dst___0 = (*dst___0 >> shift___1) | (*dst___0 << (32U - shift___1) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___2 = src___0 % 32U;
#line 161
  *dst___0 = (*dst___0 << shift___2) | (*dst___0 >> (32U - shift___2) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___0 ^= src___0;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___1 = (code___0 + 0) + 2;
#line 161
  src___1 = *(r___0 + op___1->src_index);
#line 161
  dst___1 = r___0 + (int const   )op___1->dst_index;
#line 161
  switch ((int const   )op___1->opcode) {
  case 0: 
#line 161
  *dst___1 *= src___1;
#line 161
  break;
  case 1: 
#line 161
  *dst___1 += src___1 + (v4_reg )op___1->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___1 -= src___1;
#line 161
  break;
  case 3: 
#line 161
  shift___3 = src___1 % 32U;
#line 161
  *dst___1 = (*dst___1 >> shift___3) | (*dst___1 << (32U - shift___3) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___4 = src___1 % 32U;
#line 161
  *dst___1 = (*dst___1 << shift___4) | (*dst___1 >> (32U - shift___4) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___1 ^= src___1;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___2 = (code___0 + 0) + 3;
#line 161
  src___2 = *(r___0 + op___2->src_index);
#line 161
  dst___2 = r___0 + (int const   )op___2->dst_index;
#line 161
  switch ((int const   )op___2->opcode) {
  case 0: 
#line 161
  *dst___2 *= src___2;
#line 161
  break;
  case 1: 
#line 161
  *dst___2 += src___2 + (v4_reg )op___2->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___2 -= src___2;
#line 161
  break;
  case 3: 
#line 161
  shift___5 = src___2 % 32U;
#line 161
  *dst___2 = (*dst___2 >> shift___5) | (*dst___2 << (32U - shift___5) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___6 = src___2 % 32U;
#line 161
  *dst___2 = (*dst___2 << shift___6) | (*dst___2 >> (32U - shift___6) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___2 ^= src___2;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___3 = (code___0 + 0) + 4;
#line 161
  src___3 = *(r___0 + op___3->src_index);
#line 161
  dst___3 = r___0 + (int const   )op___3->dst_index;
#line 161
  switch ((int const   )op___3->opcode) {
  case 0: 
#line 161
  *dst___3 *= src___3;
#line 161
  break;
  case 1: 
#line 161
  *dst___3 += src___3 + (v4_reg )op___3->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___3 -= src___3;
#line 161
  break;
  case 3: 
#line 161
  shift___7 = src___3 % 32U;
#line 161
  *dst___3 = (*dst___3 >> shift___7) | (*dst___3 << (32U - shift___7) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___8 = src___3 % 32U;
#line 161
  *dst___3 = (*dst___3 << shift___8) | (*dst___3 >> (32U - shift___8) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___3 ^= src___3;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___4 = (code___0 + 0) + 5;
#line 161
  src___4 = *(r___0 + op___4->src_index);
#line 161
  dst___4 = r___0 + (int const   )op___4->dst_index;
#line 161
  switch ((int const   )op___4->opcode) {
  case 0: 
#line 161
  *dst___4 *= src___4;
#line 161
  break;
  case 1: 
#line 161
  *dst___4 += src___4 + (v4_reg )op___4->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___4 -= src___4;
#line 161
  break;
  case 3: 
#line 161
  shift___9 = src___4 % 32U;
#line 161
  *dst___4 = (*dst___4 >> shift___9) | (*dst___4 << (32U - shift___9) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___10 = src___4 % 32U;
#line 161
  *dst___4 = (*dst___4 << shift___10) | (*dst___4 >> (32U - shift___10) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___4 ^= src___4;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___5 = (code___0 + 0) + 6;
#line 161
  src___5 = *(r___0 + op___5->src_index);
#line 161
  dst___5 = r___0 + (int const   )op___5->dst_index;
#line 161
  switch ((int const   )op___5->opcode) {
  case 0: 
#line 161
  *dst___5 *= src___5;
#line 161
  break;
  case 1: 
#line 161
  *dst___5 += src___5 + (v4_reg )op___5->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___5 -= src___5;
#line 161
  break;
  case 3: 
#line 161
  shift___11 = src___5 % 32U;
#line 161
  *dst___5 = (*dst___5 >> shift___11) | (*dst___5 << (32U - shift___11) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___12 = src___5 % 32U;
#line 161
  *dst___5 = (*dst___5 << shift___12) | (*dst___5 >> (32U - shift___12) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___5 ^= src___5;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___6 = (code___0 + 0) + 7;
#line 161
  src___6 = *(r___0 + op___6->src_index);
#line 161
  dst___6 = r___0 + (int const   )op___6->dst_index;
#line 161
  switch ((int const   )op___6->opcode) {
  case 0: 
#line 161
  *dst___6 *= src___6;
#line 161
  break;
  case 1: 
#line 161
  *dst___6 += src___6 + (v4_reg )op___6->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___6 -= src___6;
#line 161
  break;
  case 3: 
#line 161
  shift___13 = src___6 % 32U;
#line 161
  *dst___6 = (*dst___6 >> shift___13) | (*dst___6 << (32U - shift___13) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___14 = src___6 % 32U;
#line 161
  *dst___6 = (*dst___6 << shift___14) | (*dst___6 >> (32U - shift___14) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___6 ^= src___6;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___7 = (code___0 + 0) + 8;
#line 161
  src___7 = *(r___0 + op___7->src_index);
#line 161
  dst___7 = r___0 + (int const   )op___7->dst_index;
#line 161
  switch ((int const   )op___7->opcode) {
  case 0: 
#line 161
  *dst___7 *= src___7;
#line 161
  break;
  case 1: 
#line 161
  *dst___7 += src___7 + (v4_reg )op___7->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___7 -= src___7;
#line 161
  break;
  case 3: 
#line 161
  shift___15 = src___7 % 32U;
#line 161
  *dst___7 = (*dst___7 >> shift___15) | (*dst___7 << (32U - shift___15) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___16 = src___7 % 32U;
#line 161
  *dst___7 = (*dst___7 << shift___16) | (*dst___7 >> (32U - shift___16) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___7 ^= src___7;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 161
  op___8 = (code___0 + 0) + 9;
#line 161
  src___8 = *(r___0 + op___8->src_index);
#line 161
  dst___8 = r___0 + (int const   )op___8->dst_index;
#line 161
  switch ((int const   )op___8->opcode) {
  case 0: 
#line 161
  *dst___8 *= src___8;
#line 161
  break;
  case 1: 
#line 161
  *dst___8 += src___8 + (v4_reg )op___8->C;
#line 161
  break;
  case 2: 
#line 161
  *dst___8 -= src___8;
#line 161
  break;
  case 3: 
#line 161
  shift___17 = src___8 % 32U;
#line 161
  *dst___8 = (*dst___8 >> shift___17) | (*dst___8 << (32U - shift___17) % 32U);
#line 161
  break;
  case 4: 
#line 161
  shift___18 = src___8 % 32U;
#line 161
  *dst___8 = (*dst___8 << shift___18) | (*dst___8 >> (32U - shift___18) % 32U);
#line 161
  break;
  case 5: 
#line 161
  *dst___8 ^= src___8;
#line 161
  break;
  case 6: 
#line 161
  return;
  default: 
#line 161
  __builtin_unreachable();
#line 161
  break;
  }
#line 162
  op___9 = (code___0 + 10) + 0;
#line 162
  src___9 = *(r___0 + op___9->src_index);
#line 162
  dst___9 = r___0 + (int const   )op___9->dst_index;
#line 162
  switch ((int const   )op___9->opcode) {
  case 0: 
#line 162
  *dst___9 *= src___9;
#line 162
  break;
  case 1: 
#line 162
  *dst___9 += src___9 + (v4_reg )op___9->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___9 -= src___9;
#line 162
  break;
  case 3: 
#line 162
  shift___19 = src___9 % 32U;
#line 162
  *dst___9 = (*dst___9 >> shift___19) | (*dst___9 << (32U - shift___19) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___20 = src___9 % 32U;
#line 162
  *dst___9 = (*dst___9 << shift___20) | (*dst___9 >> (32U - shift___20) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___9 ^= src___9;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___10 = (code___0 + 10) + 1;
#line 162
  src___10 = *(r___0 + op___10->src_index);
#line 162
  dst___10 = r___0 + (int const   )op___10->dst_index;
#line 162
  switch ((int const   )op___10->opcode) {
  case 0: 
#line 162
  *dst___10 *= src___10;
#line 162
  break;
  case 1: 
#line 162
  *dst___10 += src___10 + (v4_reg )op___10->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___10 -= src___10;
#line 162
  break;
  case 3: 
#line 162
  shift___21 = src___10 % 32U;
#line 162
  *dst___10 = (*dst___10 >> shift___21) | (*dst___10 << (32U - shift___21) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___22 = src___10 % 32U;
#line 162
  *dst___10 = (*dst___10 << shift___22) | (*dst___10 >> (32U - shift___22) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___10 ^= src___10;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___11 = (code___0 + 10) + 2;
#line 162
  src___11 = *(r___0 + op___11->src_index);
#line 162
  dst___11 = r___0 + (int const   )op___11->dst_index;
#line 162
  switch ((int const   )op___11->opcode) {
  case 0: 
#line 162
  *dst___11 *= src___11;
#line 162
  break;
  case 1: 
#line 162
  *dst___11 += src___11 + (v4_reg )op___11->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___11 -= src___11;
#line 162
  break;
  case 3: 
#line 162
  shift___23 = src___11 % 32U;
#line 162
  *dst___11 = (*dst___11 >> shift___23) | (*dst___11 << (32U - shift___23) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___24 = src___11 % 32U;
#line 162
  *dst___11 = (*dst___11 << shift___24) | (*dst___11 >> (32U - shift___24) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___11 ^= src___11;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___12 = (code___0 + 10) + 3;
#line 162
  src___12 = *(r___0 + op___12->src_index);
#line 162
  dst___12 = r___0 + (int const   )op___12->dst_index;
#line 162
  switch ((int const   )op___12->opcode) {
  case 0: 
#line 162
  *dst___12 *= src___12;
#line 162
  break;
  case 1: 
#line 162
  *dst___12 += src___12 + (v4_reg )op___12->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___12 -= src___12;
#line 162
  break;
  case 3: 
#line 162
  shift___25 = src___12 % 32U;
#line 162
  *dst___12 = (*dst___12 >> shift___25) | (*dst___12 << (32U - shift___25) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___26 = src___12 % 32U;
#line 162
  *dst___12 = (*dst___12 << shift___26) | (*dst___12 >> (32U - shift___26) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___12 ^= src___12;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___13 = (code___0 + 10) + 4;
#line 162
  src___13 = *(r___0 + op___13->src_index);
#line 162
  dst___13 = r___0 + (int const   )op___13->dst_index;
#line 162
  switch ((int const   )op___13->opcode) {
  case 0: 
#line 162
  *dst___13 *= src___13;
#line 162
  break;
  case 1: 
#line 162
  *dst___13 += src___13 + (v4_reg )op___13->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___13 -= src___13;
#line 162
  break;
  case 3: 
#line 162
  shift___27 = src___13 % 32U;
#line 162
  *dst___13 = (*dst___13 >> shift___27) | (*dst___13 << (32U - shift___27) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___28 = src___13 % 32U;
#line 162
  *dst___13 = (*dst___13 << shift___28) | (*dst___13 >> (32U - shift___28) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___13 ^= src___13;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___14 = (code___0 + 10) + 5;
#line 162
  src___14 = *(r___0 + op___14->src_index);
#line 162
  dst___14 = r___0 + (int const   )op___14->dst_index;
#line 162
  switch ((int const   )op___14->opcode) {
  case 0: 
#line 162
  *dst___14 *= src___14;
#line 162
  break;
  case 1: 
#line 162
  *dst___14 += src___14 + (v4_reg )op___14->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___14 -= src___14;
#line 162
  break;
  case 3: 
#line 162
  shift___29 = src___14 % 32U;
#line 162
  *dst___14 = (*dst___14 >> shift___29) | (*dst___14 << (32U - shift___29) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___30 = src___14 % 32U;
#line 162
  *dst___14 = (*dst___14 << shift___30) | (*dst___14 >> (32U - shift___30) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___14 ^= src___14;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___15 = (code___0 + 10) + 6;
#line 162
  src___15 = *(r___0 + op___15->src_index);
#line 162
  dst___15 = r___0 + (int const   )op___15->dst_index;
#line 162
  switch ((int const   )op___15->opcode) {
  case 0: 
#line 162
  *dst___15 *= src___15;
#line 162
  break;
  case 1: 
#line 162
  *dst___15 += src___15 + (v4_reg )op___15->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___15 -= src___15;
#line 162
  break;
  case 3: 
#line 162
  shift___31 = src___15 % 32U;
#line 162
  *dst___15 = (*dst___15 >> shift___31) | (*dst___15 << (32U - shift___31) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___32 = src___15 % 32U;
#line 162
  *dst___15 = (*dst___15 << shift___32) | (*dst___15 >> (32U - shift___32) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___15 ^= src___15;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___16 = (code___0 + 10) + 7;
#line 162
  src___16 = *(r___0 + op___16->src_index);
#line 162
  dst___16 = r___0 + (int const   )op___16->dst_index;
#line 162
  switch ((int const   )op___16->opcode) {
  case 0: 
#line 162
  *dst___16 *= src___16;
#line 162
  break;
  case 1: 
#line 162
  *dst___16 += src___16 + (v4_reg )op___16->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___16 -= src___16;
#line 162
  break;
  case 3: 
#line 162
  shift___33 = src___16 % 32U;
#line 162
  *dst___16 = (*dst___16 >> shift___33) | (*dst___16 << (32U - shift___33) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___34 = src___16 % 32U;
#line 162
  *dst___16 = (*dst___16 << shift___34) | (*dst___16 >> (32U - shift___34) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___16 ^= src___16;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___17 = (code___0 + 10) + 8;
#line 162
  src___17 = *(r___0 + op___17->src_index);
#line 162
  dst___17 = r___0 + (int const   )op___17->dst_index;
#line 162
  switch ((int const   )op___17->opcode) {
  case 0: 
#line 162
  *dst___17 *= src___17;
#line 162
  break;
  case 1: 
#line 162
  *dst___17 += src___17 + (v4_reg )op___17->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___17 -= src___17;
#line 162
  break;
  case 3: 
#line 162
  shift___35 = src___17 % 32U;
#line 162
  *dst___17 = (*dst___17 >> shift___35) | (*dst___17 << (32U - shift___35) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___36 = src___17 % 32U;
#line 162
  *dst___17 = (*dst___17 << shift___36) | (*dst___17 >> (32U - shift___36) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___17 ^= src___17;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 162
  op___18 = (code___0 + 10) + 9;
#line 162
  src___18 = *(r___0 + op___18->src_index);
#line 162
  dst___18 = r___0 + (int const   )op___18->dst_index;
#line 162
  switch ((int const   )op___18->opcode) {
  case 0: 
#line 162
  *dst___18 *= src___18;
#line 162
  break;
  case 1: 
#line 162
  *dst___18 += src___18 + (v4_reg )op___18->C;
#line 162
  break;
  case 2: 
#line 162
  *dst___18 -= src___18;
#line 162
  break;
  case 3: 
#line 162
  shift___37 = src___18 % 32U;
#line 162
  *dst___18 = (*dst___18 >> shift___37) | (*dst___18 << (32U - shift___37) % 32U);
#line 162
  break;
  case 4: 
#line 162
  shift___38 = src___18 % 32U;
#line 162
  *dst___18 = (*dst___18 << shift___38) | (*dst___18 >> (32U - shift___38) % 32U);
#line 162
  break;
  case 5: 
#line 162
  *dst___18 ^= src___18;
#line 162
  break;
  case 6: 
#line 162
  return;
  default: 
#line 162
  __builtin_unreachable();
#line 162
  break;
  }
#line 163
  op___19 = (code___0 + 20) + 0;
#line 163
  src___19 = *(r___0 + op___19->src_index);
#line 163
  dst___19 = r___0 + (int const   )op___19->dst_index;
#line 163
  switch ((int const   )op___19->opcode) {
  case 0: 
#line 163
  *dst___19 *= src___19;
#line 163
  break;
  case 1: 
#line 163
  *dst___19 += src___19 + (v4_reg )op___19->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___19 -= src___19;
#line 163
  break;
  case 3: 
#line 163
  shift___39 = src___19 % 32U;
#line 163
  *dst___19 = (*dst___19 >> shift___39) | (*dst___19 << (32U - shift___39) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___40 = src___19 % 32U;
#line 163
  *dst___19 = (*dst___19 << shift___40) | (*dst___19 >> (32U - shift___40) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___19 ^= src___19;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___20 = (code___0 + 20) + 1;
#line 163
  src___20 = *(r___0 + op___20->src_index);
#line 163
  dst___20 = r___0 + (int const   )op___20->dst_index;
#line 163
  switch ((int const   )op___20->opcode) {
  case 0: 
#line 163
  *dst___20 *= src___20;
#line 163
  break;
  case 1: 
#line 163
  *dst___20 += src___20 + (v4_reg )op___20->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___20 -= src___20;
#line 163
  break;
  case 3: 
#line 163
  shift___41 = src___20 % 32U;
#line 163
  *dst___20 = (*dst___20 >> shift___41) | (*dst___20 << (32U - shift___41) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___42 = src___20 % 32U;
#line 163
  *dst___20 = (*dst___20 << shift___42) | (*dst___20 >> (32U - shift___42) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___20 ^= src___20;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___21 = (code___0 + 20) + 2;
#line 163
  src___21 = *(r___0 + op___21->src_index);
#line 163
  dst___21 = r___0 + (int const   )op___21->dst_index;
#line 163
  switch ((int const   )op___21->opcode) {
  case 0: 
#line 163
  *dst___21 *= src___21;
#line 163
  break;
  case 1: 
#line 163
  *dst___21 += src___21 + (v4_reg )op___21->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___21 -= src___21;
#line 163
  break;
  case 3: 
#line 163
  shift___43 = src___21 % 32U;
#line 163
  *dst___21 = (*dst___21 >> shift___43) | (*dst___21 << (32U - shift___43) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___44 = src___21 % 32U;
#line 163
  *dst___21 = (*dst___21 << shift___44) | (*dst___21 >> (32U - shift___44) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___21 ^= src___21;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___22 = (code___0 + 20) + 3;
#line 163
  src___22 = *(r___0 + op___22->src_index);
#line 163
  dst___22 = r___0 + (int const   )op___22->dst_index;
#line 163
  switch ((int const   )op___22->opcode) {
  case 0: 
#line 163
  *dst___22 *= src___22;
#line 163
  break;
  case 1: 
#line 163
  *dst___22 += src___22 + (v4_reg )op___22->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___22 -= src___22;
#line 163
  break;
  case 3: 
#line 163
  shift___45 = src___22 % 32U;
#line 163
  *dst___22 = (*dst___22 >> shift___45) | (*dst___22 << (32U - shift___45) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___46 = src___22 % 32U;
#line 163
  *dst___22 = (*dst___22 << shift___46) | (*dst___22 >> (32U - shift___46) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___22 ^= src___22;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___23 = (code___0 + 20) + 4;
#line 163
  src___23 = *(r___0 + op___23->src_index);
#line 163
  dst___23 = r___0 + (int const   )op___23->dst_index;
#line 163
  switch ((int const   )op___23->opcode) {
  case 0: 
#line 163
  *dst___23 *= src___23;
#line 163
  break;
  case 1: 
#line 163
  *dst___23 += src___23 + (v4_reg )op___23->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___23 -= src___23;
#line 163
  break;
  case 3: 
#line 163
  shift___47 = src___23 % 32U;
#line 163
  *dst___23 = (*dst___23 >> shift___47) | (*dst___23 << (32U - shift___47) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___48 = src___23 % 32U;
#line 163
  *dst___23 = (*dst___23 << shift___48) | (*dst___23 >> (32U - shift___48) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___23 ^= src___23;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___24 = (code___0 + 20) + 5;
#line 163
  src___24 = *(r___0 + op___24->src_index);
#line 163
  dst___24 = r___0 + (int const   )op___24->dst_index;
#line 163
  switch ((int const   )op___24->opcode) {
  case 0: 
#line 163
  *dst___24 *= src___24;
#line 163
  break;
  case 1: 
#line 163
  *dst___24 += src___24 + (v4_reg )op___24->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___24 -= src___24;
#line 163
  break;
  case 3: 
#line 163
  shift___49 = src___24 % 32U;
#line 163
  *dst___24 = (*dst___24 >> shift___49) | (*dst___24 << (32U - shift___49) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___50 = src___24 % 32U;
#line 163
  *dst___24 = (*dst___24 << shift___50) | (*dst___24 >> (32U - shift___50) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___24 ^= src___24;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___25 = (code___0 + 20) + 6;
#line 163
  src___25 = *(r___0 + op___25->src_index);
#line 163
  dst___25 = r___0 + (int const   )op___25->dst_index;
#line 163
  switch ((int const   )op___25->opcode) {
  case 0: 
#line 163
  *dst___25 *= src___25;
#line 163
  break;
  case 1: 
#line 163
  *dst___25 += src___25 + (v4_reg )op___25->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___25 -= src___25;
#line 163
  break;
  case 3: 
#line 163
  shift___51 = src___25 % 32U;
#line 163
  *dst___25 = (*dst___25 >> shift___51) | (*dst___25 << (32U - shift___51) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___52 = src___25 % 32U;
#line 163
  *dst___25 = (*dst___25 << shift___52) | (*dst___25 >> (32U - shift___52) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___25 ^= src___25;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___26 = (code___0 + 20) + 7;
#line 163
  src___26 = *(r___0 + op___26->src_index);
#line 163
  dst___26 = r___0 + (int const   )op___26->dst_index;
#line 163
  switch ((int const   )op___26->opcode) {
  case 0: 
#line 163
  *dst___26 *= src___26;
#line 163
  break;
  case 1: 
#line 163
  *dst___26 += src___26 + (v4_reg )op___26->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___26 -= src___26;
#line 163
  break;
  case 3: 
#line 163
  shift___53 = src___26 % 32U;
#line 163
  *dst___26 = (*dst___26 >> shift___53) | (*dst___26 << (32U - shift___53) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___54 = src___26 % 32U;
#line 163
  *dst___26 = (*dst___26 << shift___54) | (*dst___26 >> (32U - shift___54) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___26 ^= src___26;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___27 = (code___0 + 20) + 8;
#line 163
  src___27 = *(r___0 + op___27->src_index);
#line 163
  dst___27 = r___0 + (int const   )op___27->dst_index;
#line 163
  switch ((int const   )op___27->opcode) {
  case 0: 
#line 163
  *dst___27 *= src___27;
#line 163
  break;
  case 1: 
#line 163
  *dst___27 += src___27 + (v4_reg )op___27->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___27 -= src___27;
#line 163
  break;
  case 3: 
#line 163
  shift___55 = src___27 % 32U;
#line 163
  *dst___27 = (*dst___27 >> shift___55) | (*dst___27 << (32U - shift___55) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___56 = src___27 % 32U;
#line 163
  *dst___27 = (*dst___27 << shift___56) | (*dst___27 >> (32U - shift___56) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___27 ^= src___27;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 163
  op___28 = (code___0 + 20) + 9;
#line 163
  src___28 = *(r___0 + op___28->src_index);
#line 163
  dst___28 = r___0 + (int const   )op___28->dst_index;
#line 163
  switch ((int const   )op___28->opcode) {
  case 0: 
#line 163
  *dst___28 *= src___28;
#line 163
  break;
  case 1: 
#line 163
  *dst___28 += src___28 + (v4_reg )op___28->C;
#line 163
  break;
  case 2: 
#line 163
  *dst___28 -= src___28;
#line 163
  break;
  case 3: 
#line 163
  shift___57 = src___28 % 32U;
#line 163
  *dst___28 = (*dst___28 >> shift___57) | (*dst___28 << (32U - shift___57) % 32U);
#line 163
  break;
  case 4: 
#line 163
  shift___58 = src___28 % 32U;
#line 163
  *dst___28 = (*dst___28 << shift___58) | (*dst___28 >> (32U - shift___58) % 32U);
#line 163
  break;
  case 5: 
#line 163
  *dst___28 ^= src___28;
#line 163
  break;
  case 6: 
#line 163
  return;
  default: 
#line 163
  __builtin_unreachable();
#line 163
  break;
  }
#line 164
  op___29 = (code___0 + 30) + 0;
#line 164
  src___29 = *(r___0 + op___29->src_index);
#line 164
  dst___29 = r___0 + (int const   )op___29->dst_index;
#line 164
  switch ((int const   )op___29->opcode) {
  case 0: 
#line 164
  *dst___29 *= src___29;
#line 164
  break;
  case 1: 
#line 164
  *dst___29 += src___29 + (v4_reg )op___29->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___29 -= src___29;
#line 164
  break;
  case 3: 
#line 164
  shift___59 = src___29 % 32U;
#line 164
  *dst___29 = (*dst___29 >> shift___59) | (*dst___29 << (32U - shift___59) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___60 = src___29 % 32U;
#line 164
  *dst___29 = (*dst___29 << shift___60) | (*dst___29 >> (32U - shift___60) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___29 ^= src___29;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___30 = (code___0 + 30) + 1;
#line 164
  src___30 = *(r___0 + op___30->src_index);
#line 164
  dst___30 = r___0 + (int const   )op___30->dst_index;
#line 164
  switch ((int const   )op___30->opcode) {
  case 0: 
#line 164
  *dst___30 *= src___30;
#line 164
  break;
  case 1: 
#line 164
  *dst___30 += src___30 + (v4_reg )op___30->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___30 -= src___30;
#line 164
  break;
  case 3: 
#line 164
  shift___61 = src___30 % 32U;
#line 164
  *dst___30 = (*dst___30 >> shift___61) | (*dst___30 << (32U - shift___61) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___62 = src___30 % 32U;
#line 164
  *dst___30 = (*dst___30 << shift___62) | (*dst___30 >> (32U - shift___62) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___30 ^= src___30;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___31 = (code___0 + 30) + 2;
#line 164
  src___31 = *(r___0 + op___31->src_index);
#line 164
  dst___31 = r___0 + (int const   )op___31->dst_index;
#line 164
  switch ((int const   )op___31->opcode) {
  case 0: 
#line 164
  *dst___31 *= src___31;
#line 164
  break;
  case 1: 
#line 164
  *dst___31 += src___31 + (v4_reg )op___31->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___31 -= src___31;
#line 164
  break;
  case 3: 
#line 164
  shift___63 = src___31 % 32U;
#line 164
  *dst___31 = (*dst___31 >> shift___63) | (*dst___31 << (32U - shift___63) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___64 = src___31 % 32U;
#line 164
  *dst___31 = (*dst___31 << shift___64) | (*dst___31 >> (32U - shift___64) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___31 ^= src___31;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___32 = (code___0 + 30) + 3;
#line 164
  src___32 = *(r___0 + op___32->src_index);
#line 164
  dst___32 = r___0 + (int const   )op___32->dst_index;
#line 164
  switch ((int const   )op___32->opcode) {
  case 0: 
#line 164
  *dst___32 *= src___32;
#line 164
  break;
  case 1: 
#line 164
  *dst___32 += src___32 + (v4_reg )op___32->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___32 -= src___32;
#line 164
  break;
  case 3: 
#line 164
  shift___65 = src___32 % 32U;
#line 164
  *dst___32 = (*dst___32 >> shift___65) | (*dst___32 << (32U - shift___65) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___66 = src___32 % 32U;
#line 164
  *dst___32 = (*dst___32 << shift___66) | (*dst___32 >> (32U - shift___66) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___32 ^= src___32;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___33 = (code___0 + 30) + 4;
#line 164
  src___33 = *(r___0 + op___33->src_index);
#line 164
  dst___33 = r___0 + (int const   )op___33->dst_index;
#line 164
  switch ((int const   )op___33->opcode) {
  case 0: 
#line 164
  *dst___33 *= src___33;
#line 164
  break;
  case 1: 
#line 164
  *dst___33 += src___33 + (v4_reg )op___33->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___33 -= src___33;
#line 164
  break;
  case 3: 
#line 164
  shift___67 = src___33 % 32U;
#line 164
  *dst___33 = (*dst___33 >> shift___67) | (*dst___33 << (32U - shift___67) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___68 = src___33 % 32U;
#line 164
  *dst___33 = (*dst___33 << shift___68) | (*dst___33 >> (32U - shift___68) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___33 ^= src___33;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___34 = (code___0 + 30) + 5;
#line 164
  src___34 = *(r___0 + op___34->src_index);
#line 164
  dst___34 = r___0 + (int const   )op___34->dst_index;
#line 164
  switch ((int const   )op___34->opcode) {
  case 0: 
#line 164
  *dst___34 *= src___34;
#line 164
  break;
  case 1: 
#line 164
  *dst___34 += src___34 + (v4_reg )op___34->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___34 -= src___34;
#line 164
  break;
  case 3: 
#line 164
  shift___69 = src___34 % 32U;
#line 164
  *dst___34 = (*dst___34 >> shift___69) | (*dst___34 << (32U - shift___69) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___70 = src___34 % 32U;
#line 164
  *dst___34 = (*dst___34 << shift___70) | (*dst___34 >> (32U - shift___70) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___34 ^= src___34;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___35 = (code___0 + 30) + 6;
#line 164
  src___35 = *(r___0 + op___35->src_index);
#line 164
  dst___35 = r___0 + (int const   )op___35->dst_index;
#line 164
  switch ((int const   )op___35->opcode) {
  case 0: 
#line 164
  *dst___35 *= src___35;
#line 164
  break;
  case 1: 
#line 164
  *dst___35 += src___35 + (v4_reg )op___35->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___35 -= src___35;
#line 164
  break;
  case 3: 
#line 164
  shift___71 = src___35 % 32U;
#line 164
  *dst___35 = (*dst___35 >> shift___71) | (*dst___35 << (32U - shift___71) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___72 = src___35 % 32U;
#line 164
  *dst___35 = (*dst___35 << shift___72) | (*dst___35 >> (32U - shift___72) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___35 ^= src___35;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___36 = (code___0 + 30) + 7;
#line 164
  src___36 = *(r___0 + op___36->src_index);
#line 164
  dst___36 = r___0 + (int const   )op___36->dst_index;
#line 164
  switch ((int const   )op___36->opcode) {
  case 0: 
#line 164
  *dst___36 *= src___36;
#line 164
  break;
  case 1: 
#line 164
  *dst___36 += src___36 + (v4_reg )op___36->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___36 -= src___36;
#line 164
  break;
  case 3: 
#line 164
  shift___73 = src___36 % 32U;
#line 164
  *dst___36 = (*dst___36 >> shift___73) | (*dst___36 << (32U - shift___73) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___74 = src___36 % 32U;
#line 164
  *dst___36 = (*dst___36 << shift___74) | (*dst___36 >> (32U - shift___74) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___36 ^= src___36;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___37 = (code___0 + 30) + 8;
#line 164
  src___37 = *(r___0 + op___37->src_index);
#line 164
  dst___37 = r___0 + (int const   )op___37->dst_index;
#line 164
  switch ((int const   )op___37->opcode) {
  case 0: 
#line 164
  *dst___37 *= src___37;
#line 164
  break;
  case 1: 
#line 164
  *dst___37 += src___37 + (v4_reg )op___37->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___37 -= src___37;
#line 164
  break;
  case 3: 
#line 164
  shift___75 = src___37 % 32U;
#line 164
  *dst___37 = (*dst___37 >> shift___75) | (*dst___37 << (32U - shift___75) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___76 = src___37 % 32U;
#line 164
  *dst___37 = (*dst___37 << shift___76) | (*dst___37 >> (32U - shift___76) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___37 ^= src___37;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 164
  op___38 = (code___0 + 30) + 9;
#line 164
  src___38 = *(r___0 + op___38->src_index);
#line 164
  dst___38 = r___0 + (int const   )op___38->dst_index;
#line 164
  switch ((int const   )op___38->opcode) {
  case 0: 
#line 164
  *dst___38 *= src___38;
#line 164
  break;
  case 1: 
#line 164
  *dst___38 += src___38 + (v4_reg )op___38->C;
#line 164
  break;
  case 2: 
#line 164
  *dst___38 -= src___38;
#line 164
  break;
  case 3: 
#line 164
  shift___77 = src___38 % 32U;
#line 164
  *dst___38 = (*dst___38 >> shift___77) | (*dst___38 << (32U - shift___77) % 32U);
#line 164
  break;
  case 4: 
#line 164
  shift___78 = src___38 % 32U;
#line 164
  *dst___38 = (*dst___38 << shift___78) | (*dst___38 >> (32U - shift___78) % 32U);
#line 164
  break;
  case 5: 
#line 164
  *dst___38 ^= src___38;
#line 164
  break;
  case 6: 
#line 164
  return;
  default: 
#line 164
  __builtin_unreachable();
#line 164
  break;
  }
#line 165
  op___39 = (code___0 + 40) + 0;
#line 165
  src___39 = *(r___0 + op___39->src_index);
#line 165
  dst___39 = r___0 + (int const   )op___39->dst_index;
#line 165
  switch ((int const   )op___39->opcode) {
  case 0: 
#line 165
  *dst___39 *= src___39;
#line 165
  break;
  case 1: 
#line 165
  *dst___39 += src___39 + (v4_reg )op___39->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___39 -= src___39;
#line 165
  break;
  case 3: 
#line 165
  shift___79 = src___39 % 32U;
#line 165
  *dst___39 = (*dst___39 >> shift___79) | (*dst___39 << (32U - shift___79) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___80 = src___39 % 32U;
#line 165
  *dst___39 = (*dst___39 << shift___80) | (*dst___39 >> (32U - shift___80) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___39 ^= src___39;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___40 = (code___0 + 40) + 1;
#line 165
  src___40 = *(r___0 + op___40->src_index);
#line 165
  dst___40 = r___0 + (int const   )op___40->dst_index;
#line 165
  switch ((int const   )op___40->opcode) {
  case 0: 
#line 165
  *dst___40 *= src___40;
#line 165
  break;
  case 1: 
#line 165
  *dst___40 += src___40 + (v4_reg )op___40->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___40 -= src___40;
#line 165
  break;
  case 3: 
#line 165
  shift___81 = src___40 % 32U;
#line 165
  *dst___40 = (*dst___40 >> shift___81) | (*dst___40 << (32U - shift___81) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___82 = src___40 % 32U;
#line 165
  *dst___40 = (*dst___40 << shift___82) | (*dst___40 >> (32U - shift___82) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___40 ^= src___40;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___41 = (code___0 + 40) + 2;
#line 165
  src___41 = *(r___0 + op___41->src_index);
#line 165
  dst___41 = r___0 + (int const   )op___41->dst_index;
#line 165
  switch ((int const   )op___41->opcode) {
  case 0: 
#line 165
  *dst___41 *= src___41;
#line 165
  break;
  case 1: 
#line 165
  *dst___41 += src___41 + (v4_reg )op___41->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___41 -= src___41;
#line 165
  break;
  case 3: 
#line 165
  shift___83 = src___41 % 32U;
#line 165
  *dst___41 = (*dst___41 >> shift___83) | (*dst___41 << (32U - shift___83) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___84 = src___41 % 32U;
#line 165
  *dst___41 = (*dst___41 << shift___84) | (*dst___41 >> (32U - shift___84) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___41 ^= src___41;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___42 = (code___0 + 40) + 3;
#line 165
  src___42 = *(r___0 + op___42->src_index);
#line 165
  dst___42 = r___0 + (int const   )op___42->dst_index;
#line 165
  switch ((int const   )op___42->opcode) {
  case 0: 
#line 165
  *dst___42 *= src___42;
#line 165
  break;
  case 1: 
#line 165
  *dst___42 += src___42 + (v4_reg )op___42->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___42 -= src___42;
#line 165
  break;
  case 3: 
#line 165
  shift___85 = src___42 % 32U;
#line 165
  *dst___42 = (*dst___42 >> shift___85) | (*dst___42 << (32U - shift___85) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___86 = src___42 % 32U;
#line 165
  *dst___42 = (*dst___42 << shift___86) | (*dst___42 >> (32U - shift___86) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___42 ^= src___42;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___43 = (code___0 + 40) + 4;
#line 165
  src___43 = *(r___0 + op___43->src_index);
#line 165
  dst___43 = r___0 + (int const   )op___43->dst_index;
#line 165
  switch ((int const   )op___43->opcode) {
  case 0: 
#line 165
  *dst___43 *= src___43;
#line 165
  break;
  case 1: 
#line 165
  *dst___43 += src___43 + (v4_reg )op___43->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___43 -= src___43;
#line 165
  break;
  case 3: 
#line 165
  shift___87 = src___43 % 32U;
#line 165
  *dst___43 = (*dst___43 >> shift___87) | (*dst___43 << (32U - shift___87) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___88 = src___43 % 32U;
#line 165
  *dst___43 = (*dst___43 << shift___88) | (*dst___43 >> (32U - shift___88) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___43 ^= src___43;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___44 = (code___0 + 40) + 5;
#line 165
  src___44 = *(r___0 + op___44->src_index);
#line 165
  dst___44 = r___0 + (int const   )op___44->dst_index;
#line 165
  switch ((int const   )op___44->opcode) {
  case 0: 
#line 165
  *dst___44 *= src___44;
#line 165
  break;
  case 1: 
#line 165
  *dst___44 += src___44 + (v4_reg )op___44->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___44 -= src___44;
#line 165
  break;
  case 3: 
#line 165
  shift___89 = src___44 % 32U;
#line 165
  *dst___44 = (*dst___44 >> shift___89) | (*dst___44 << (32U - shift___89) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___90 = src___44 % 32U;
#line 165
  *dst___44 = (*dst___44 << shift___90) | (*dst___44 >> (32U - shift___90) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___44 ^= src___44;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___45 = (code___0 + 40) + 6;
#line 165
  src___45 = *(r___0 + op___45->src_index);
#line 165
  dst___45 = r___0 + (int const   )op___45->dst_index;
#line 165
  switch ((int const   )op___45->opcode) {
  case 0: 
#line 165
  *dst___45 *= src___45;
#line 165
  break;
  case 1: 
#line 165
  *dst___45 += src___45 + (v4_reg )op___45->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___45 -= src___45;
#line 165
  break;
  case 3: 
#line 165
  shift___91 = src___45 % 32U;
#line 165
  *dst___45 = (*dst___45 >> shift___91) | (*dst___45 << (32U - shift___91) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___92 = src___45 % 32U;
#line 165
  *dst___45 = (*dst___45 << shift___92) | (*dst___45 >> (32U - shift___92) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___45 ^= src___45;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___46 = (code___0 + 40) + 7;
#line 165
  src___46 = *(r___0 + op___46->src_index);
#line 165
  dst___46 = r___0 + (int const   )op___46->dst_index;
#line 165
  switch ((int const   )op___46->opcode) {
  case 0: 
#line 165
  *dst___46 *= src___46;
#line 165
  break;
  case 1: 
#line 165
  *dst___46 += src___46 + (v4_reg )op___46->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___46 -= src___46;
#line 165
  break;
  case 3: 
#line 165
  shift___93 = src___46 % 32U;
#line 165
  *dst___46 = (*dst___46 >> shift___93) | (*dst___46 << (32U - shift___93) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___94 = src___46 % 32U;
#line 165
  *dst___46 = (*dst___46 << shift___94) | (*dst___46 >> (32U - shift___94) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___46 ^= src___46;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___47 = (code___0 + 40) + 8;
#line 165
  src___47 = *(r___0 + op___47->src_index);
#line 165
  dst___47 = r___0 + (int const   )op___47->dst_index;
#line 165
  switch ((int const   )op___47->opcode) {
  case 0: 
#line 165
  *dst___47 *= src___47;
#line 165
  break;
  case 1: 
#line 165
  *dst___47 += src___47 + (v4_reg )op___47->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___47 -= src___47;
#line 165
  break;
  case 3: 
#line 165
  shift___95 = src___47 % 32U;
#line 165
  *dst___47 = (*dst___47 >> shift___95) | (*dst___47 << (32U - shift___95) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___96 = src___47 % 32U;
#line 165
  *dst___47 = (*dst___47 << shift___96) | (*dst___47 >> (32U - shift___96) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___47 ^= src___47;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 165
  op___48 = (code___0 + 40) + 9;
#line 165
  src___48 = *(r___0 + op___48->src_index);
#line 165
  dst___48 = r___0 + (int const   )op___48->dst_index;
#line 165
  switch ((int const   )op___48->opcode) {
  case 0: 
#line 165
  *dst___48 *= src___48;
#line 165
  break;
  case 1: 
#line 165
  *dst___48 += src___48 + (v4_reg )op___48->C;
#line 165
  break;
  case 2: 
#line 165
  *dst___48 -= src___48;
#line 165
  break;
  case 3: 
#line 165
  shift___97 = src___48 % 32U;
#line 165
  *dst___48 = (*dst___48 >> shift___97) | (*dst___48 << (32U - shift___97) % 32U);
#line 165
  break;
  case 4: 
#line 165
  shift___98 = src___48 % 32U;
#line 165
  *dst___48 = (*dst___48 << shift___98) | (*dst___48 >> (32U - shift___98) % 32U);
#line 165
  break;
  case 5: 
#line 165
  *dst___48 ^= src___48;
#line 165
  break;
  case 6: 
#line 165
  return;
  default: 
#line 165
  __builtin_unreachable();
#line 165
  break;
  }
#line 166
  op___49 = (code___0 + 50) + 0;
#line 166
  src___49 = *(r___0 + op___49->src_index);
#line 166
  dst___49 = r___0 + (int const   )op___49->dst_index;
#line 166
  switch ((int const   )op___49->opcode) {
  case 0: 
#line 166
  *dst___49 *= src___49;
#line 166
  break;
  case 1: 
#line 166
  *dst___49 += src___49 + (v4_reg )op___49->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___49 -= src___49;
#line 166
  break;
  case 3: 
#line 166
  shift___99 = src___49 % 32U;
#line 166
  *dst___49 = (*dst___49 >> shift___99) | (*dst___49 << (32U - shift___99) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___100 = src___49 % 32U;
#line 166
  *dst___49 = (*dst___49 << shift___100) | (*dst___49 >> (32U - shift___100) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___49 ^= src___49;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___50 = (code___0 + 50) + 1;
#line 166
  src___50 = *(r___0 + op___50->src_index);
#line 166
  dst___50 = r___0 + (int const   )op___50->dst_index;
#line 166
  switch ((int const   )op___50->opcode) {
  case 0: 
#line 166
  *dst___50 *= src___50;
#line 166
  break;
  case 1: 
#line 166
  *dst___50 += src___50 + (v4_reg )op___50->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___50 -= src___50;
#line 166
  break;
  case 3: 
#line 166
  shift___101 = src___50 % 32U;
#line 166
  *dst___50 = (*dst___50 >> shift___101) | (*dst___50 << (32U - shift___101) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___102 = src___50 % 32U;
#line 166
  *dst___50 = (*dst___50 << shift___102) | (*dst___50 >> (32U - shift___102) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___50 ^= src___50;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___51 = (code___0 + 50) + 2;
#line 166
  src___51 = *(r___0 + op___51->src_index);
#line 166
  dst___51 = r___0 + (int const   )op___51->dst_index;
#line 166
  switch ((int const   )op___51->opcode) {
  case 0: 
#line 166
  *dst___51 *= src___51;
#line 166
  break;
  case 1: 
#line 166
  *dst___51 += src___51 + (v4_reg )op___51->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___51 -= src___51;
#line 166
  break;
  case 3: 
#line 166
  shift___103 = src___51 % 32U;
#line 166
  *dst___51 = (*dst___51 >> shift___103) | (*dst___51 << (32U - shift___103) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___104 = src___51 % 32U;
#line 166
  *dst___51 = (*dst___51 << shift___104) | (*dst___51 >> (32U - shift___104) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___51 ^= src___51;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___52 = (code___0 + 50) + 3;
#line 166
  src___52 = *(r___0 + op___52->src_index);
#line 166
  dst___52 = r___0 + (int const   )op___52->dst_index;
#line 166
  switch ((int const   )op___52->opcode) {
  case 0: 
#line 166
  *dst___52 *= src___52;
#line 166
  break;
  case 1: 
#line 166
  *dst___52 += src___52 + (v4_reg )op___52->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___52 -= src___52;
#line 166
  break;
  case 3: 
#line 166
  shift___105 = src___52 % 32U;
#line 166
  *dst___52 = (*dst___52 >> shift___105) | (*dst___52 << (32U - shift___105) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___106 = src___52 % 32U;
#line 166
  *dst___52 = (*dst___52 << shift___106) | (*dst___52 >> (32U - shift___106) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___52 ^= src___52;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___53 = (code___0 + 50) + 4;
#line 166
  src___53 = *(r___0 + op___53->src_index);
#line 166
  dst___53 = r___0 + (int const   )op___53->dst_index;
#line 166
  switch ((int const   )op___53->opcode) {
  case 0: 
#line 166
  *dst___53 *= src___53;
#line 166
  break;
  case 1: 
#line 166
  *dst___53 += src___53 + (v4_reg )op___53->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___53 -= src___53;
#line 166
  break;
  case 3: 
#line 166
  shift___107 = src___53 % 32U;
#line 166
  *dst___53 = (*dst___53 >> shift___107) | (*dst___53 << (32U - shift___107) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___108 = src___53 % 32U;
#line 166
  *dst___53 = (*dst___53 << shift___108) | (*dst___53 >> (32U - shift___108) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___53 ^= src___53;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___54 = (code___0 + 50) + 5;
#line 166
  src___54 = *(r___0 + op___54->src_index);
#line 166
  dst___54 = r___0 + (int const   )op___54->dst_index;
#line 166
  switch ((int const   )op___54->opcode) {
  case 0: 
#line 166
  *dst___54 *= src___54;
#line 166
  break;
  case 1: 
#line 166
  *dst___54 += src___54 + (v4_reg )op___54->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___54 -= src___54;
#line 166
  break;
  case 3: 
#line 166
  shift___109 = src___54 % 32U;
#line 166
  *dst___54 = (*dst___54 >> shift___109) | (*dst___54 << (32U - shift___109) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___110 = src___54 % 32U;
#line 166
  *dst___54 = (*dst___54 << shift___110) | (*dst___54 >> (32U - shift___110) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___54 ^= src___54;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___55 = (code___0 + 50) + 6;
#line 166
  src___55 = *(r___0 + op___55->src_index);
#line 166
  dst___55 = r___0 + (int const   )op___55->dst_index;
#line 166
  switch ((int const   )op___55->opcode) {
  case 0: 
#line 166
  *dst___55 *= src___55;
#line 166
  break;
  case 1: 
#line 166
  *dst___55 += src___55 + (v4_reg )op___55->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___55 -= src___55;
#line 166
  break;
  case 3: 
#line 166
  shift___111 = src___55 % 32U;
#line 166
  *dst___55 = (*dst___55 >> shift___111) | (*dst___55 << (32U - shift___111) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___112 = src___55 % 32U;
#line 166
  *dst___55 = (*dst___55 << shift___112) | (*dst___55 >> (32U - shift___112) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___55 ^= src___55;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___56 = (code___0 + 50) + 7;
#line 166
  src___56 = *(r___0 + op___56->src_index);
#line 166
  dst___56 = r___0 + (int const   )op___56->dst_index;
#line 166
  switch ((int const   )op___56->opcode) {
  case 0: 
#line 166
  *dst___56 *= src___56;
#line 166
  break;
  case 1: 
#line 166
  *dst___56 += src___56 + (v4_reg )op___56->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___56 -= src___56;
#line 166
  break;
  case 3: 
#line 166
  shift___113 = src___56 % 32U;
#line 166
  *dst___56 = (*dst___56 >> shift___113) | (*dst___56 << (32U - shift___113) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___114 = src___56 % 32U;
#line 166
  *dst___56 = (*dst___56 << shift___114) | (*dst___56 >> (32U - shift___114) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___56 ^= src___56;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___57 = (code___0 + 50) + 8;
#line 166
  src___57 = *(r___0 + op___57->src_index);
#line 166
  dst___57 = r___0 + (int const   )op___57->dst_index;
#line 166
  switch ((int const   )op___57->opcode) {
  case 0: 
#line 166
  *dst___57 *= src___57;
#line 166
  break;
  case 1: 
#line 166
  *dst___57 += src___57 + (v4_reg )op___57->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___57 -= src___57;
#line 166
  break;
  case 3: 
#line 166
  shift___115 = src___57 % 32U;
#line 166
  *dst___57 = (*dst___57 >> shift___115) | (*dst___57 << (32U - shift___115) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___116 = src___57 % 32U;
#line 166
  *dst___57 = (*dst___57 << shift___116) | (*dst___57 >> (32U - shift___116) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___57 ^= src___57;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 166
  op___58 = (code___0 + 50) + 9;
#line 166
  src___58 = *(r___0 + op___58->src_index);
#line 166
  dst___58 = r___0 + (int const   )op___58->dst_index;
#line 166
  switch ((int const   )op___58->opcode) {
  case 0: 
#line 166
  *dst___58 *= src___58;
#line 166
  break;
  case 1: 
#line 166
  *dst___58 += src___58 + (v4_reg )op___58->C;
#line 166
  break;
  case 2: 
#line 166
  *dst___58 -= src___58;
#line 166
  break;
  case 3: 
#line 166
  shift___117 = src___58 % 32U;
#line 166
  *dst___58 = (*dst___58 >> shift___117) | (*dst___58 << (32U - shift___117) % 32U);
#line 166
  break;
  case 4: 
#line 166
  shift___118 = src___58 % 32U;
#line 166
  *dst___58 = (*dst___58 << shift___118) | (*dst___58 >> (32U - shift___118) % 32U);
#line 166
  break;
  case 5: 
#line 166
  *dst___58 ^= src___58;
#line 166
  break;
  case 6: 
#line 166
  return;
  default: 
#line 166
  __builtin_unreachable();
#line 166
  break;
  }
#line 167
  op___59 = (code___0 + 60) + 0;
#line 167
  src___59 = *(r___0 + op___59->src_index);
#line 167
  dst___59 = r___0 + (int const   )op___59->dst_index;
#line 167
  switch ((int const   )op___59->opcode) {
  case 0: 
#line 167
  *dst___59 *= src___59;
#line 167
  break;
  case 1: 
#line 167
  *dst___59 += src___59 + (v4_reg )op___59->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___59 -= src___59;
#line 167
  break;
  case 3: 
#line 167
  shift___119 = src___59 % 32U;
#line 167
  *dst___59 = (*dst___59 >> shift___119) | (*dst___59 << (32U - shift___119) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___120 = src___59 % 32U;
#line 167
  *dst___59 = (*dst___59 << shift___120) | (*dst___59 >> (32U - shift___120) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___59 ^= src___59;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___60 = (code___0 + 60) + 1;
#line 167
  src___60 = *(r___0 + op___60->src_index);
#line 167
  dst___60 = r___0 + (int const   )op___60->dst_index;
#line 167
  switch ((int const   )op___60->opcode) {
  case 0: 
#line 167
  *dst___60 *= src___60;
#line 167
  break;
  case 1: 
#line 167
  *dst___60 += src___60 + (v4_reg )op___60->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___60 -= src___60;
#line 167
  break;
  case 3: 
#line 167
  shift___121 = src___60 % 32U;
#line 167
  *dst___60 = (*dst___60 >> shift___121) | (*dst___60 << (32U - shift___121) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___122 = src___60 % 32U;
#line 167
  *dst___60 = (*dst___60 << shift___122) | (*dst___60 >> (32U - shift___122) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___60 ^= src___60;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___61 = (code___0 + 60) + 2;
#line 167
  src___61 = *(r___0 + op___61->src_index);
#line 167
  dst___61 = r___0 + (int const   )op___61->dst_index;
#line 167
  switch ((int const   )op___61->opcode) {
  case 0: 
#line 167
  *dst___61 *= src___61;
#line 167
  break;
  case 1: 
#line 167
  *dst___61 += src___61 + (v4_reg )op___61->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___61 -= src___61;
#line 167
  break;
  case 3: 
#line 167
  shift___123 = src___61 % 32U;
#line 167
  *dst___61 = (*dst___61 >> shift___123) | (*dst___61 << (32U - shift___123) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___124 = src___61 % 32U;
#line 167
  *dst___61 = (*dst___61 << shift___124) | (*dst___61 >> (32U - shift___124) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___61 ^= src___61;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___62 = (code___0 + 60) + 3;
#line 167
  src___62 = *(r___0 + op___62->src_index);
#line 167
  dst___62 = r___0 + (int const   )op___62->dst_index;
#line 167
  switch ((int const   )op___62->opcode) {
  case 0: 
#line 167
  *dst___62 *= src___62;
#line 167
  break;
  case 1: 
#line 167
  *dst___62 += src___62 + (v4_reg )op___62->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___62 -= src___62;
#line 167
  break;
  case 3: 
#line 167
  shift___125 = src___62 % 32U;
#line 167
  *dst___62 = (*dst___62 >> shift___125) | (*dst___62 << (32U - shift___125) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___126 = src___62 % 32U;
#line 167
  *dst___62 = (*dst___62 << shift___126) | (*dst___62 >> (32U - shift___126) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___62 ^= src___62;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___63 = (code___0 + 60) + 4;
#line 167
  src___63 = *(r___0 + op___63->src_index);
#line 167
  dst___63 = r___0 + (int const   )op___63->dst_index;
#line 167
  switch ((int const   )op___63->opcode) {
  case 0: 
#line 167
  *dst___63 *= src___63;
#line 167
  break;
  case 1: 
#line 167
  *dst___63 += src___63 + (v4_reg )op___63->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___63 -= src___63;
#line 167
  break;
  case 3: 
#line 167
  shift___127 = src___63 % 32U;
#line 167
  *dst___63 = (*dst___63 >> shift___127) | (*dst___63 << (32U - shift___127) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___128 = src___63 % 32U;
#line 167
  *dst___63 = (*dst___63 << shift___128) | (*dst___63 >> (32U - shift___128) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___63 ^= src___63;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___64 = (code___0 + 60) + 5;
#line 167
  src___64 = *(r___0 + op___64->src_index);
#line 167
  dst___64 = r___0 + (int const   )op___64->dst_index;
#line 167
  switch ((int const   )op___64->opcode) {
  case 0: 
#line 167
  *dst___64 *= src___64;
#line 167
  break;
  case 1: 
#line 167
  *dst___64 += src___64 + (v4_reg )op___64->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___64 -= src___64;
#line 167
  break;
  case 3: 
#line 167
  shift___129 = src___64 % 32U;
#line 167
  *dst___64 = (*dst___64 >> shift___129) | (*dst___64 << (32U - shift___129) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___130 = src___64 % 32U;
#line 167
  *dst___64 = (*dst___64 << shift___130) | (*dst___64 >> (32U - shift___130) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___64 ^= src___64;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___65 = (code___0 + 60) + 6;
#line 167
  src___65 = *(r___0 + op___65->src_index);
#line 167
  dst___65 = r___0 + (int const   )op___65->dst_index;
#line 167
  switch ((int const   )op___65->opcode) {
  case 0: 
#line 167
  *dst___65 *= src___65;
#line 167
  break;
  case 1: 
#line 167
  *dst___65 += src___65 + (v4_reg )op___65->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___65 -= src___65;
#line 167
  break;
  case 3: 
#line 167
  shift___131 = src___65 % 32U;
#line 167
  *dst___65 = (*dst___65 >> shift___131) | (*dst___65 << (32U - shift___131) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___132 = src___65 % 32U;
#line 167
  *dst___65 = (*dst___65 << shift___132) | (*dst___65 >> (32U - shift___132) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___65 ^= src___65;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___66 = (code___0 + 60) + 7;
#line 167
  src___66 = *(r___0 + op___66->src_index);
#line 167
  dst___66 = r___0 + (int const   )op___66->dst_index;
#line 167
  switch ((int const   )op___66->opcode) {
  case 0: 
#line 167
  *dst___66 *= src___66;
#line 167
  break;
  case 1: 
#line 167
  *dst___66 += src___66 + (v4_reg )op___66->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___66 -= src___66;
#line 167
  break;
  case 3: 
#line 167
  shift___133 = src___66 % 32U;
#line 167
  *dst___66 = (*dst___66 >> shift___133) | (*dst___66 << (32U - shift___133) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___134 = src___66 % 32U;
#line 167
  *dst___66 = (*dst___66 << shift___134) | (*dst___66 >> (32U - shift___134) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___66 ^= src___66;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___67 = (code___0 + 60) + 8;
#line 167
  src___67 = *(r___0 + op___67->src_index);
#line 167
  dst___67 = r___0 + (int const   )op___67->dst_index;
#line 167
  switch ((int const   )op___67->opcode) {
  case 0: 
#line 167
  *dst___67 *= src___67;
#line 167
  break;
  case 1: 
#line 167
  *dst___67 += src___67 + (v4_reg )op___67->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___67 -= src___67;
#line 167
  break;
  case 3: 
#line 167
  shift___135 = src___67 % 32U;
#line 167
  *dst___67 = (*dst___67 >> shift___135) | (*dst___67 << (32U - shift___135) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___136 = src___67 % 32U;
#line 167
  *dst___67 = (*dst___67 << shift___136) | (*dst___67 >> (32U - shift___136) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___67 ^= src___67;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 167
  op___68 = (code___0 + 60) + 9;
#line 167
  src___68 = *(r___0 + op___68->src_index);
#line 167
  dst___68 = r___0 + (int const   )op___68->dst_index;
#line 167
  switch ((int const   )op___68->opcode) {
  case 0: 
#line 167
  *dst___68 *= src___68;
#line 167
  break;
  case 1: 
#line 167
  *dst___68 += src___68 + (v4_reg )op___68->C;
#line 167
  break;
  case 2: 
#line 167
  *dst___68 -= src___68;
#line 167
  break;
  case 3: 
#line 167
  shift___137 = src___68 % 32U;
#line 167
  *dst___68 = (*dst___68 >> shift___137) | (*dst___68 << (32U - shift___137) % 32U);
#line 167
  break;
  case 4: 
#line 167
  shift___138 = src___68 % 32U;
#line 167
  *dst___68 = (*dst___68 << shift___138) | (*dst___68 >> (32U - shift___138) % 32U);
#line 167
  break;
  case 5: 
#line 167
  *dst___68 ^= src___68;
#line 167
  break;
  case 6: 
#line 167
  return;
  default: 
#line 167
  __builtin_unreachable();
#line 167
  break;
  }
#line 171
  return;
}
}
#line 174 "./variant4_random_math.h"
__inline static void ( __attribute__((__always_inline__)) check_data)(size_t *data_index ,
                                                                      size_t const   bytes_needed ,
                                                                      int8_t *data ,
                                                                      size_t const   data_size ) 
{ 


  {
#line 176
  if (*data_index + (size_t )bytes_needed > (size_t )data_size) {
#line 179
    blake((uint8_t const   *)((uint8_t *)data), (uint64_t )data_size, (uint8_t *)data);
#line 180
    *data_index = (size_t )0;
  }
#line 182
  return;
}
}
#line 186 "./variant4_random_math.h"
__inline static int v4_random_math_init(struct V4_Instruction *code___0 , uint64_t const   height ) 
{ 
  int op_latency[6] ;
  int asic_op_latency[6] ;
  int op_ALUs[6] ;
  int8_t data[32] ;
  uint64_t tmp ;
  size_t data_index ;
  int code_size ;
  _Bool r8_used ;
  int latency[9] ;
  int asic_latency[9] ;
  uint32_t inst_data[9] ;
  _Bool alu_busy[46][3] ;
  _Bool is_rotation[6] ;
  _Bool rotated[4] ;
  int rotate_count ;
  int num_retries ;
  int total_iterations ;
  uint8_t c ;
  size_t tmp___0 ;
  uint8_t opcode ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  uint8_t dst_index ;
  uint8_t src_index ;
  int a ;
  int b ;
  int next_latency ;
  int tmp___3 ;
  int alu_index ;
  int i ;
  int tmp___4 ;
  uint32_t t ;
  int prev_code_size ;
  int min_idx ;
  int max_idx ;
  int i___0 ;
  uint8_t pattern[3] ;
  uint8_t opcode___0 ;

  {
#line 195
  op_latency[0] = 3;
#line 195
  op_latency[1] = 2;
#line 195
  op_latency[2] = 1;
#line 195
  op_latency[3] = 2;
#line 195
  op_latency[4] = 2;
#line 195
  op_latency[5] = 1;
#line 198
  asic_op_latency[0] = 3;
#line 198
  asic_op_latency[1] = 1;
#line 198
  asic_op_latency[2] = 1;
#line 198
  asic_op_latency[3] = 1;
#line 198
  asic_op_latency[4] = 1;
#line 198
  asic_op_latency[5] = 1;
#line 201
  op_ALUs[0] = 1;
#line 201
  op_ALUs[1] = 3;
#line 201
  op_ALUs[2] = 3;
#line 201
  op_ALUs[3] = 3;
#line 201
  op_ALUs[4] = 3;
#line 201
  op_ALUs[5] = 3;
#line 204
  memset((void *)(data), 0, sizeof(data));
#line 205
  tmp = (uint64_t )height;
#line 206
  memcpy((void * __restrict  )(data), (void const   * __restrict  )(& tmp), sizeof(uint64_t ));
#line 207
  data[20] = (int8_t )218;
#line 212
  data_index = sizeof(data);
#line 219
  while (1) {
#line 230
    inst_data[0] = (uint32_t )0;
#line 230
    inst_data[1] = (uint32_t )1;
#line 230
    inst_data[2] = (uint32_t )2;
#line 230
    inst_data[3] = (uint32_t )3;
#line 230
    inst_data[4] = (uint32_t )16777215;
#line 230
    inst_data[5] = (uint32_t )16777215;
#line 230
    inst_data[6] = (uint32_t )16777215;
#line 230
    inst_data[7] = (uint32_t )16777215;
#line 230
    inst_data[8] = (uint32_t )16777215;
#line 235
    rotate_count = 0;
#line 237
    memset((void *)(latency), 0, sizeof(latency));
#line 238
    memset((void *)(asic_latency), 0, sizeof(asic_latency));
#line 239
    memset((void *)(alu_busy), 0, sizeof(alu_busy));
#line 240
    memset((void *)(is_rotation), 0, sizeof(is_rotation));
#line 241
    memset((void *)(rotated), 0, sizeof(rotated));
#line 242
    is_rotation[3] = (_Bool)1;
#line 243
    is_rotation[4] = (_Bool)1;
#line 245
    num_retries = 0;
#line 246
    code_size = 0;
#line 248
    total_iterations = 0;
#line 249
    r8_used = (_Bool)0;
#line 253
    while (1) {
#line 253
      if (latency[0] < 45) {
#line 253
        goto _L___0;
      } else
#line 253
      if (latency[1] < 45) {
#line 253
        goto _L___0;
      } else
#line 253
      if (latency[2] < 45) {
#line 253
        goto _L___0;
      } else
#line 253
      if (latency[3] < 45) {
        _L___0: /* CIL Label */ 
#line 253
        if (! (num_retries < 64)) {
#line 253
          break;
        }
      } else {
#line 253
        break;
      }
#line 256
      total_iterations ++;
#line 257
      if (total_iterations > 256) {
#line 258
        break;
      }
#line 260
      check_data(& data_index, (size_t const   )1, data, (size_t const   )sizeof(data));
#line 262
      tmp___0 = data_index;
#line 262
      data_index ++;
#line 262
      c = *((uint8_t *)(data) + tmp___0);
#line 269
      opcode = (uint8_t )((int )c & ((1 << 3) - 1));
#line 270
      if ((int )opcode == 5) {
#line 272
        check_data(& data_index, (size_t const   )1, data, (size_t const   )sizeof(data));
#line 273
        tmp___2 = data_index;
#line 273
        data_index ++;
#line 273
        if ((int )data[tmp___2] >= 0) {
#line 273
          opcode = (uint8_t )3;
        } else {
#line 273
          opcode = (uint8_t )4;
        }
      } else
#line 275
      if ((int )opcode >= 6) {
#line 277
        opcode = (uint8_t )5;
      } else
#line 281
      if ((int )opcode <= 2) {
#line 281
        opcode = (uint8_t )0;
      } else {
#line 281
        opcode = (uint8_t )((int )opcode - 2);
      }
#line 284
      dst_index = (uint8_t )(((int )c >> 3) & ((1 << 2) - 1));
#line 285
      src_index = (uint8_t )(((int )c >> 5) & ((1 << 3) - 1));
#line 287
      a = (int )dst_index;
#line 288
      b = (int )src_index;
#line 291
      if ((int )opcode == 1) {
#line 291
        goto _L;
      } else
#line 291
      if ((int )opcode == 2) {
#line 291
        goto _L;
      } else
#line 291
      if ((int )opcode == 5) {
        _L: /* CIL Label */ 
#line 291
        if (a == b) {
#line 294
          b = 8;
#line 295
          src_index = (uint8_t )8;
        }
      }
#line 299
      if (is_rotation[opcode]) {
#line 299
        if (rotated[a]) {
#line 301
          continue;
        }
      }
#line 307
      if ((int )opcode != 0) {
#line 307
        if ((inst_data[a] & 16776960U) == (unsigned int )((int )opcode << 8) + ((inst_data[b] & 255U) << 16)) {
#line 309
          continue;
        }
      }
#line 313
      if (latency[a] > latency[b]) {
#line 313
        tmp___3 = latency[a];
      } else {
#line 313
        tmp___3 = latency[b];
      }
#line 313
      next_latency = tmp___3;
#line 314
      alu_index = -1;
#line 315
      while (next_latency < 45) {
#line 317
        i = op_ALUs[opcode] - 1;
#line 317
        while (i >= 0) {
#line 319
          if (! alu_busy[next_latency][i]) {
#line 322
            if ((int )opcode == 1) {
#line 322
              if (alu_busy[next_latency + 1][i]) {
#line 324
                goto __Cont;
              }
            }
#line 328
            if (is_rotation[opcode]) {
#line 328
              if (next_latency < rotate_count * op_latency[opcode]) {
#line 330
                goto __Cont;
              }
            }
#line 333
            alu_index = i;
#line 334
            break;
          }
          __Cont: /* CIL Label */ 
#line 317
          i --;
        }
#line 337
        if (alu_index >= 0) {
#line 339
          break;
        }
#line 341
        next_latency ++;
      }
#line 345
      if (next_latency > latency[a] + 7) {
#line 347
        continue;
      }
#line 350
      next_latency += op_latency[opcode];
#line 352
      if (next_latency <= 45) {
#line 354
        if (is_rotation[opcode]) {
#line 356
          rotate_count ++;
        }
#line 360
        alu_busy[next_latency - op_latency[opcode]][alu_index] = (_Bool)1;
#line 361
        latency[a] = next_latency;
#line 364
        if (asic_latency[a] > asic_latency[b]) {
#line 364
          tmp___4 = asic_latency[a];
        } else {
#line 364
          tmp___4 = asic_latency[b];
        }
#line 364
        asic_latency[a] = tmp___4 + asic_op_latency[opcode];
#line 366
        rotated[a] = is_rotation[opcode];
#line 368
        inst_data[a] = (unsigned int )(code_size + ((int )opcode << 8)) + ((inst_data[b] & 255U) << 16);
#line 370
        (code___0 + code_size)->opcode = opcode;
#line 371
        (code___0 + code_size)->dst_index = dst_index;
#line 372
        (code___0 + code_size)->src_index = src_index;
#line 373
        (code___0 + code_size)->C = (uint32_t )0;
#line 375
        if ((int )src_index == 8) {
#line 377
          r8_used = (_Bool)1;
        }
#line 380
        if ((int )opcode == 1) {
#line 383
          alu_busy[(next_latency - op_latency[opcode]) + 1][alu_index] = (_Bool)1;
#line 386
          check_data(& data_index, (size_t const   )sizeof(uint32_t ), data, (size_t const   )sizeof(data));
#line 388
          memcpy((void * __restrict  )(& t), (void const   * __restrict  )(data + data_index),
                 sizeof(uint32_t ));
#line 389
          (code___0 + code_size)->C = t;
#line 390
          data_index += sizeof(uint32_t );
        }
#line 393
        code_size ++;
#line 394
        if (code_size >= 60) {
#line 396
          break;
        }
      } else {
#line 401
        num_retries ++;
      }
    }
#line 408
    prev_code_size = code_size;
#line 409
    while (1) {
#line 409
      if (code_size < 70) {
#line 409
        if (asic_latency[0] < 45) {
#line 409
          if (asic_latency[1] < 45) {
#line 409
            if (asic_latency[2] < 45) {
#line 409
              if (! (asic_latency[3] < 45)) {
#line 409
                break;
              }
            } else {
#line 409
              break;
            }
          } else {
#line 409
            break;
          }
        } else {
#line 409
          break;
        }
      } else {
#line 409
        break;
      }
#line 411
      min_idx = 0;
#line 412
      max_idx = 0;
#line 413
      i___0 = 1;
#line 413
      while (i___0 < 4) {
#line 415
        if (asic_latency[i___0] < asic_latency[min_idx]) {
#line 415
          min_idx = i___0;
        }
#line 416
        if (asic_latency[i___0] > asic_latency[max_idx]) {
#line 416
          max_idx = i___0;
        }
#line 413
        i___0 ++;
      }
#line 419
      pattern[0] = (uint8_t )3;
#line 419
      pattern[1] = (uint8_t )0;
#line 419
      pattern[2] = (uint8_t )0;
#line 420
      opcode___0 = pattern[(code_size - prev_code_size) % 3];
#line 421
      latency[min_idx] = latency[max_idx] + op_latency[opcode___0];
#line 422
      asic_latency[min_idx] = asic_latency[max_idx] + asic_op_latency[opcode___0];
#line 424
      (code___0 + code_size)->opcode = opcode___0;
#line 425
      (code___0 + code_size)->dst_index = (uint8_t )min_idx;
#line 426
      (code___0 + code_size)->src_index = (uint8_t )max_idx;
#line 427
      (code___0 + code_size)->C = (uint32_t )0;
#line 428
      code_size ++;
    }
#line 219
    if (! (! r8_used)) {
#line 219
      if (! (code_size < 60)) {
#line 219
        if (! (code_size > 70)) {
#line 219
          break;
        }
      }
    }
  }
#line 437
  (code___0 + code_size)->opcode = (uint8_t )6;
#line 438
  (code___0 + code_size)->dst_index = (uint8_t )0;
#line 439
  (code___0 + code_size)->src_index = (uint8_t )0;
#line 440
  (code___0 + code_size)->C = (uint32_t )0;
#line 442
  return (code_size);
}
}
#line 145 "cryptonight.c"
struct V4_Instruction code[71]  ;
#line 146 "cryptonight.c"
int lastHeight  =    -1;
#line 147 "cryptonight.c"
v4_reg r[9]  ;
#line 241 "cryptonight.c"
static void xor64(uint8_t *a , uint64_t const   b ) 
{ 


  {
#line 243
  *((uint64_t *)a) ^= (unsigned long long )b;
#line 244
  return;
}
}
#line 246 "cryptonight.c"
static void copy_block(uint8_t *dst , uint8_t const   *src ) 
{ 


  {
#line 248
  *((uint64_t *)dst + 0) = *((uint64_t *)src + 0);
#line 249
  *((uint64_t *)dst + 1) = *((uint64_t *)src + 1);
#line 250
  return;
}
}
#line 252 "cryptonight.c"
void do_blake_hash(void const   *input , size_t len , char *output___0 ) 
{ 


  {
#line 254
  blake((uint8_t const   *)input, (uint64_t )len, (unsigned char *)output___0);
#line 255
  return;
}
}
#line 257 "cryptonight.c"
void do_groestl_hash(void const   *input , size_t len , char *output___0 ) 
{ 


  {
#line 259
  groestl((unsigned char const   *)input, (unsigned long long )(len * 8UL), (uint8_t *)output___0);
#line 260
  return;
}
}
#line 262 "cryptonight.c"
void do_jh_hash(void const   *input , size_t len , char *output___0 ) 
{ 


  {
#line 264
  jh(256U, (uint8_t const   *)input, 8UL * len, (uint8_t *)output___0);
#line 265
  return;
}
}
#line 267 "cryptonight.c"
void do_skein_hash(void const   *input , size_t len , char *output___0 ) 
{ 


  {
#line 269
  skein(256, (unsigned char const   *)input, 8UL * len, (uint8_t *)output___0);
#line 270
  return;
}
}
#line 272 "cryptonight.c"
void (* const  extra_hashes[4])(void const   * , size_t  , char * )  = {      (void (* const  )(void const   * , size_t  , char * ))(& do_blake_hash),      (void (* const  )(void const   * , size_t  , char * ))(& do_groestl_hash),      (void (* const  )(void const   * , size_t  , char * ))(& do_jh_hash),      (void (* const  )(void const   * , size_t  , char * ))(& do_skein_hash)};
#line 275 "cryptonight.c"
void xor_blocks_dst(uint8_t const   *a , uint8_t const   *b , uint8_t *dst ) 
{ 


  {
#line 277
  *((uint64_t *)dst + 0) = *((uint64_t *)a + 0) ^ *((uint64_t *)b + 0);
#line 278
  *((uint64_t *)dst + 1) = *((uint64_t *)a + 1) ^ *((uint64_t *)b + 1);
#line 279
  return;
}
}
#line 301 "cryptonight.c"
uint32_t const   TestTable1[256]  __attribute__((__aligned__(16)))  = 
#line 301
  {      (uint32_t const   )2774754246U,      (uint32_t const   )2222750968U,      (uint32_t const   )2574743534U,      (uint32_t const   )2373680118U, 
        (uint32_t const   )234025727,      (uint32_t const   )3177933782U,      (uint32_t const   )2976870366U,      (uint32_t const   )1422247313, 
        (uint32_t const   )1345335392,      (uint32_t const   )50397442,      (uint32_t const   )2842126286U,      (uint32_t const   )2099981142, 
        (uint32_t const   )436141799,      (uint32_t const   )1658312629,      (uint32_t const   )3870010189U,      (uint32_t const   )2591454956U, 
        (uint32_t const   )1170918031,      (uint32_t const   )2642575903U,      (uint32_t const   )1086966153,      (uint32_t const   )2273148410U, 
        (uint32_t const   )368769775,      (uint32_t const   )3948501426U,      (uint32_t const   )3376891790U,      (uint32_t const   )200339707, 
        (uint32_t const   )3970805057U,      (uint32_t const   )1742001331,      (uint32_t const   )4255294047U,      (uint32_t const   )3937382213U, 
        (uint32_t const   )3214711843U,      (uint32_t const   )4154762323U,      (uint32_t const   )2524082916U,      (uint32_t const   )1539358875, 
        (uint32_t const   )3266819957U,      (uint32_t const   )486407649,      (uint32_t const   )2928907069U,      (uint32_t const   )1780885068, 
        (uint32_t const   )1513502316,      (uint32_t const   )1094664062,      (uint32_t const   )49805301,      (uint32_t const   )1338821763, 
        (uint32_t const   )1546925160,      (uint32_t const   )4104496465U,      (uint32_t const   )887481809,      (uint32_t const   )150073849, 
        (uint32_t const   )2473685474U,      (uint32_t const   )1943591083,      (uint32_t const   )1395732834,      (uint32_t const   )1058346282, 
        (uint32_t const   )201589768,      (uint32_t const   )1388824469,      (uint32_t const   )1696801606,      (uint32_t const   )1589887901, 
        (uint32_t const   )672667696,      (uint32_t const   )2711000631U,      (uint32_t const   )251987210,      (uint32_t const   )3046808111U, 
        (uint32_t const   )151455502,      (uint32_t const   )907153956,      (uint32_t const   )2608889883U,      (uint32_t const   )1038279391, 
        (uint32_t const   )652995533,      (uint32_t const   )1764173646,      (uint32_t const   )3451040383U,      (uint32_t const   )2675275242U, 
        (uint32_t const   )453576978,      (uint32_t const   )2659418909U,      (uint32_t const   )1949051992,      (uint32_t const   )773462580, 
        (uint32_t const   )756751158,      (uint32_t const   )2993581788U,      (uint32_t const   )3998898868U,      (uint32_t const   )4221608027U, 
        (uint32_t const   )4132590244U,      (uint32_t const   )1295727478,      (uint32_t const   )1641469623,      (uint32_t const   )3467883389U, 
        (uint32_t const   )2066295122,      (uint32_t const   )1055122397,      (uint32_t const   )1898917726,      (uint32_t const   )2542044179U, 
        (uint32_t const   )4115878822U,      (uint32_t const   )1758581177,      (uint32_t const   )0,      (uint32_t const   )753790401, 
        (uint32_t const   )1612718144,      (uint32_t const   )536673507,      (uint32_t const   )3367088505U,      (uint32_t const   )3982187446U, 
        (uint32_t const   )3194645204U,      (uint32_t const   )1187761037,      (uint32_t const   )3653156455U,      (uint32_t const   )1262041458, 
        (uint32_t const   )3729410708U,      (uint32_t const   )3561770136U,      (uint32_t const   )3898103984U,      (uint32_t const   )1255133061, 
        (uint32_t const   )1808847035,      (uint32_t const   )720367557,      (uint32_t const   )3853167183U,      (uint32_t const   )385612781, 
        (uint32_t const   )3309519750U,      (uint32_t const   )3612167578U,      (uint32_t const   )1429418854,      (uint32_t const   )2491778321U, 
        (uint32_t const   )3477423498U,      (uint32_t const   )284817897,      (uint32_t const   )100794884,      (uint32_t const   )2172616702U, 
        (uint32_t const   )4031795360U,      (uint32_t const   )1144798328,      (uint32_t const   )3131023141U,      (uint32_t const   )3819481163U, 
        (uint32_t const   )4082192802U,      (uint32_t const   )4272137053U,      (uint32_t const   )3225436288U,      (uint32_t const   )2324664069U, 
        (uint32_t const   )2912064063U,      (uint32_t const   )3164445985U,      (uint32_t const   )1211644016,      (uint32_t const   )83228145, 
        (uint32_t const   )3753688163U,      (uint32_t const   )3249976951U,      (uint32_t const   )1977277103,      (uint32_t const   )1663115586, 
        (uint32_t const   )806359072,      (uint32_t const   )452984805,      (uint32_t const   )250868733,      (uint32_t const   )1842533055, 
        (uint32_t const   )1288555905,      (uint32_t const   )336333848,      (uint32_t const   )890442534,      (uint32_t const   )804056259, 
        (uint32_t const   )3781124030U,      (uint32_t const   )2727843637U,      (uint32_t const   )3427026056U,      (uint32_t const   )957814574, 
        (uint32_t const   )1472513171,      (uint32_t const   )4071073621U,      (uint32_t const   )2189328124U,      (uint32_t const   )1195195770, 
        (uint32_t const   )2892260552U,      (uint32_t const   )3881655738U,      (uint32_t const   )723065138,      (uint32_t const   )2507371494U, 
        (uint32_t const   )2690670784U,      (uint32_t const   )2558624025U,      (uint32_t const   )3511635870U,      (uint32_t const   )2145180835, 
        (uint32_t const   )1713513028,      (uint32_t const   )2116692564,      (uint32_t const   )2878378043U,      (uint32_t const   )2206763019U, 
        (uint32_t const   )3393603212U,      (uint32_t const   )703524551,      (uint32_t const   )3552098411U,      (uint32_t const   )1007948840, 
        (uint32_t const   )2044649127,      (uint32_t const   )3797835452U,      (uint32_t const   )487262998,      (uint32_t const   )1994120109, 
        (uint32_t const   )1004593371,      (uint32_t const   )1446130276,      (uint32_t const   )1312438900,      (uint32_t const   )503974420, 
        (uint32_t const   )3679013266U,      (uint32_t const   )168166924,      (uint32_t const   )1814307912,      (uint32_t const   )3831258296U, 
        (uint32_t const   )1573044895,      (uint32_t const   )1859376061,      (uint32_t const   )4021070915U,      (uint32_t const   )2791465668U, 
        (uint32_t const   )2828112185U,      (uint32_t const   )2761266481U,      (uint32_t const   )937747667,      (uint32_t const   )2339994098U, 
        (uint32_t const   )854058965,      (uint32_t const   )1137232011,      (uint32_t const   )1496790894,      (uint32_t const   )3077402074U, 
        (uint32_t const   )2358086913U,      (uint32_t const   )1691735473,      (uint32_t const   )3528347292U,      (uint32_t const   )3769215305U, 
        (uint32_t const   )3027004632U,      (uint32_t const   )4199962284U,      (uint32_t const   )133494003,      (uint32_t const   )636152527, 
        (uint32_t const   )2942657994U,      (uint32_t const   )2390391540U,      (uint32_t const   )3920539207U,      (uint32_t const   )403179536, 
        (uint32_t const   )3585784431U,      (uint32_t const   )2289596656U,      (uint32_t const   )1864705354,      (uint32_t const   )1915629148, 
        (uint32_t const   )605822008,      (uint32_t const   )4054230615U,      (uint32_t const   )3350508659U,      (uint32_t const   )1371981463, 
        (uint32_t const   )602466507,      (uint32_t const   )2094914977,      (uint32_t const   )2624877800U,      (uint32_t const   )555687742, 
        (uint32_t const   )3712699286U,      (uint32_t const   )3703422305U,      (uint32_t const   )2257292045U,      (uint32_t const   )2240449039U, 
        (uint32_t const   )2423288032U,      (uint32_t const   )1111375484,      (uint32_t const   )3300242801U,      (uint32_t const   )2858837708U, 
        (uint32_t const   )3628615824U,      (uint32_t const   )84083462,      (uint32_t const   )32962295,      (uint32_t const   )302911004, 
        (uint32_t const   )2741068226U,      (uint32_t const   )1597322602,      (uint32_t const   )4183250862U,      (uint32_t const   )3501832553U, 
        (uint32_t const   )2441512471U,      (uint32_t const   )1489093017,      (uint32_t const   )656219450,      (uint32_t const   )3114180135U, 
        (uint32_t const   )954327513,      (uint32_t const   )335083755,      (uint32_t const   )3013122091U,      (uint32_t const   )856756514, 
        (uint32_t const   )3144247762U,      (uint32_t const   )1893325225,      (uint32_t const   )2307821063U,      (uint32_t const   )2811532339U, 
        (uint32_t const   )3063651117U,      (uint32_t const   )572399164,      (uint32_t const   )2458355477U,      (uint32_t const   )552200649, 
        (uint32_t const   )1238290055,      (uint32_t const   )4283782570U,      (uint32_t const   )2015897680,      (uint32_t const   )2061492133, 
        (uint32_t const   )2408352771U,      (uint32_t const   )4171342169U,      (uint32_t const   )2156497161U,      (uint32_t const   )386731290, 
        (uint32_t const   )3669999461U,      (uint32_t const   )837215959,      (uint32_t const   )3326231172U,      (uint32_t const   )3093850320U, 
        (uint32_t const   )3275833730U,      (uint32_t const   )2962856233U,      (uint32_t const   )1999449434,      (uint32_t const   )286199582, 
        (uint32_t const   )3417354363U,      (uint32_t const   )4233385128U,      (uint32_t const   )3602627437U,      (uint32_t const   )974525996};
#line 335 "cryptonight.c"
uint32_t const   TestTable2[256]  __attribute__((__aligned__(16)))  = 
#line 335
  {      (uint32_t const   )1667483301,      (uint32_t const   )2088564868,      (uint32_t const   )2004348569,      (uint32_t const   )2071721613, 
        (uint32_t const   )4076011277U,      (uint32_t const   )1802229437,      (uint32_t const   )1869602481,      (uint32_t const   )3318059348U, 
        (uint32_t const   )808476752,      (uint32_t const   )16843267,      (uint32_t const   )1734856361,      (uint32_t const   )724260477, 
        (uint32_t const   )4278118169U,      (uint32_t const   )3621238114U,      (uint32_t const   )2880130534U,      (uint32_t const   )1987505306, 
        (uint32_t const   )3402272581U,      (uint32_t const   )2189565853U,      (uint32_t const   )3385428288U,      (uint32_t const   )2105408135, 
        (uint32_t const   )4210749205U,      (uint32_t const   )1499050731,      (uint32_t const   )1195871945,      (uint32_t const   )4042324747U, 
        (uint32_t const   )2913812972U,      (uint32_t const   )3570709351U,      (uint32_t const   )2728550397U,      (uint32_t const   )2947499498U, 
        (uint32_t const   )2627478463U,      (uint32_t const   )2762232823U,      (uint32_t const   )1920132246,      (uint32_t const   )3233848155U, 
        (uint32_t const   )3082253762U,      (uint32_t const   )4261273884U,      (uint32_t const   )2475900334U,      (uint32_t const   )640044138, 
        (uint32_t const   )909536346,      (uint32_t const   )1061125697,      (uint32_t const   )4160222466U,      (uint32_t const   )3435955023U, 
        (uint32_t const   )875849820,      (uint32_t const   )2779075060U,      (uint32_t const   )3857043764U,      (uint32_t const   )4059166984U, 
        (uint32_t const   )1903288979,      (uint32_t const   )3638078323U,      (uint32_t const   )825320019,      (uint32_t const   )353708607, 
        (uint32_t const   )67373068,      (uint32_t const   )3351745874U,      (uint32_t const   )589514341,      (uint32_t const   )3284376926U, 
        (uint32_t const   )404238376,      (uint32_t const   )2526427041U,      (uint32_t const   )84216335,      (uint32_t const   )2593796021U, 
        (uint32_t const   )117902857,      (uint32_t const   )303178806,      (uint32_t const   )2155879323U,      (uint32_t const   )3806519101U, 
        (uint32_t const   )3958099238U,      (uint32_t const   )656887401,      (uint32_t const   )2998042573U,      (uint32_t const   )1970662047, 
        (uint32_t const   )151589403,      (uint32_t const   )2206408094U,      (uint32_t const   )741103732,      (uint32_t const   )437924910, 
        (uint32_t const   )454768173,      (uint32_t const   )1852759218,      (uint32_t const   )1515893998,      (uint32_t const   )2694863867U, 
        (uint32_t const   )1381147894,      (uint32_t const   )993752653,      (uint32_t const   )3604395873U,      (uint32_t const   )3014884814U, 
        (uint32_t const   )690573947,      (uint32_t const   )3823361342U,      (uint32_t const   )791633521,      (uint32_t const   )2223248279U, 
        (uint32_t const   )1397991157,      (uint32_t const   )3520182632U,      (uint32_t const   )0,      (uint32_t const   )3991781676U, 
        (uint32_t const   )538984544,      (uint32_t const   )4244431647U,      (uint32_t const   )2981198280U,      (uint32_t const   )1532737261, 
        (uint32_t const   )1785386174,      (uint32_t const   )3419114822U,      (uint32_t const   )3200149465U,      (uint32_t const   )960066123, 
        (uint32_t const   )1246401758,      (uint32_t const   )1280088276,      (uint32_t const   )1482207464,      (uint32_t const   )3486483786U, 
        (uint32_t const   )3503340395U,      (uint32_t const   )4025468202U,      (uint32_t const   )2863288293U,      (uint32_t const   )4227591446U, 
        (uint32_t const   )1128498885,      (uint32_t const   )1296931543,      (uint32_t const   )859006549,      (uint32_t const   )2240090516U, 
        (uint32_t const   )1162185423,      (uint32_t const   )4193904912U,      (uint32_t const   )33686534,      (uint32_t const   )2139094657, 
        (uint32_t const   )1347461360,      (uint32_t const   )1010595908,      (uint32_t const   )2678007226U,      (uint32_t const   )2829601763U, 
        (uint32_t const   )1364304627,      (uint32_t const   )2745392638U,      (uint32_t const   )1077969088,      (uint32_t const   )2408514954U, 
        (uint32_t const   )2459058093U,      (uint32_t const   )2644320700U,      (uint32_t const   )943222856,      (uint32_t const   )4126535940U, 
        (uint32_t const   )3166462943U,      (uint32_t const   )3065411521U,      (uint32_t const   )3671764853U,      (uint32_t const   )555827811, 
        (uint32_t const   )269492272,      (uint32_t const   )4294960410U,      (uint32_t const   )4092853518U,      (uint32_t const   )3537026925U, 
        (uint32_t const   )3452797260U,      (uint32_t const   )202119188,      (uint32_t const   )320022069,      (uint32_t const   )3974939439U, 
        (uint32_t const   )1600110305,      (uint32_t const   )2543269282U,      (uint32_t const   )1145342156,      (uint32_t const   )387395129, 
        (uint32_t const   )3301217111U,      (uint32_t const   )2812761586U,      (uint32_t const   )2122251394,      (uint32_t const   )1027439175, 
        (uint32_t const   )1684326572,      (uint32_t const   )1566423783,      (uint32_t const   )421081643,      (uint32_t const   )1936975509, 
        (uint32_t const   )1616953504,      (uint32_t const   )2172721560U,      (uint32_t const   )1330618065,      (uint32_t const   )3705447295U, 
        (uint32_t const   )572671078,      (uint32_t const   )707417214,      (uint32_t const   )2425371563U,      (uint32_t const   )2290617219U, 
        (uint32_t const   )1179028682,      (uint32_t const   )4008625961U,      (uint32_t const   )3099093971U,      (uint32_t const   )336865340, 
        (uint32_t const   )3739133817U,      (uint32_t const   )1583267042,      (uint32_t const   )185275933,      (uint32_t const   )3688607094U, 
        (uint32_t const   )3772832571U,      (uint32_t const   )842163286,      (uint32_t const   )976909390,      (uint32_t const   )168432670, 
        (uint32_t const   )1229558491,      (uint32_t const   )101059594,      (uint32_t const   )606357612,      (uint32_t const   )1549580516, 
        (uint32_t const   )3267534685U,      (uint32_t const   )3553869166U,      (uint32_t const   )2896970735U,      (uint32_t const   )1650640038, 
        (uint32_t const   )2442213800U,      (uint32_t const   )2509582756U,      (uint32_t const   )3840201527U,      (uint32_t const   )2038035083, 
        (uint32_t const   )3890730290U,      (uint32_t const   )3368586051U,      (uint32_t const   )926379609,      (uint32_t const   )1835915959, 
        (uint32_t const   )2374828428U,      (uint32_t const   )3587551588U,      (uint32_t const   )1313774802,      (uint32_t const   )2846444000U, 
        (uint32_t const   )1819072692,      (uint32_t const   )1448520954,      (uint32_t const   )4109693703U,      (uint32_t const   )3941256997U, 
        (uint32_t const   )1701169839,      (uint32_t const   )2054878350,      (uint32_t const   )2930657257U,      (uint32_t const   )134746136, 
        (uint32_t const   )3132780501U,      (uint32_t const   )2021191816,      (uint32_t const   )623200879,      (uint32_t const   )774790258, 
        (uint32_t const   )471611428,      (uint32_t const   )2795919345U,      (uint32_t const   )3031724999U,      (uint32_t const   )3334903633U, 
        (uint32_t const   )3907570467U,      (uint32_t const   )3722289532U,      (uint32_t const   )1953818780,      (uint32_t const   )522141217, 
        (uint32_t const   )1263245021,      (uint32_t const   )3183305180U,      (uint32_t const   )2341145990U,      (uint32_t const   )2324303749U, 
        (uint32_t const   )1886445712,      (uint32_t const   )1044282434,      (uint32_t const   )3048567236U,      (uint32_t const   )1718013098, 
        (uint32_t const   )1212715224,      (uint32_t const   )50529797,      (uint32_t const   )4143380225U,      (uint32_t const   )235805714, 
        (uint32_t const   )1633796771,      (uint32_t const   )892693087,      (uint32_t const   )1465364217,      (uint32_t const   )3115936208U, 
        (uint32_t const   )2256934801U,      (uint32_t const   )3250690392U,      (uint32_t const   )488454695,      (uint32_t const   )2661164985U, 
        (uint32_t const   )3789674808U,      (uint32_t const   )4177062675U,      (uint32_t const   )2560109491U,      (uint32_t const   )286335539, 
        (uint32_t const   )1768542907,      (uint32_t const   )3654920560U,      (uint32_t const   )2391672713U,      (uint32_t const   )2492740519U, 
        (uint32_t const   )2610638262U,      (uint32_t const   )505297954,      (uint32_t const   )2273777042U,      (uint32_t const   )3924412704U, 
        (uint32_t const   )3469641545U,      (uint32_t const   )1431677695,      (uint32_t const   )673730680,      (uint32_t const   )3755976058U, 
        (uint32_t const   )2357986191U,      (uint32_t const   )2711706104U,      (uint32_t const   )2307459456U,      (uint32_t const   )218962455, 
        (uint32_t const   )3216991706U,      (uint32_t const   )3873888049U,      (uint32_t const   )1111655622,      (uint32_t const   )1751699640, 
        (uint32_t const   )1094812355,      (uint32_t const   )2576951728U,      (uint32_t const   )757946999,      (uint32_t const   )252648977, 
        (uint32_t const   )2964356043U,      (uint32_t const   )1414834428,      (uint32_t const   )3149622742U,      (uint32_t const   )370551866};
#line 369 "cryptonight.c"
uint32_t const   TestTable3[256]  __attribute__((__aligned__(16)))  = 
#line 369
  {      (uint32_t const   )1673962851,      (uint32_t const   )2096661628,      (uint32_t const   )2012125559,      (uint32_t const   )2079755643, 
        (uint32_t const   )4076801522U,      (uint32_t const   )1809235307,      (uint32_t const   )1876865391,      (uint32_t const   )3314635973U, 
        (uint32_t const   )811618352,      (uint32_t const   )16909057,      (uint32_t const   )1741597031,      (uint32_t const   )727088427, 
        (uint32_t const   )4276558334U,      (uint32_t const   )3618988759U,      (uint32_t const   )2874009259U,      (uint32_t const   )1995217526, 
        (uint32_t const   )3398387146U,      (uint32_t const   )2183110018U,      (uint32_t const   )3381215433U,      (uint32_t const   )2113570685, 
        (uint32_t const   )4209972730U,      (uint32_t const   )1504897881,      (uint32_t const   )1200539975,      (uint32_t const   )4042984432U, 
        (uint32_t const   )2906778797U,      (uint32_t const   )3568527316U,      (uint32_t const   )2724199842U,      (uint32_t const   )2940594863U, 
        (uint32_t const   )2619588508U,      (uint32_t const   )2756966308U,      (uint32_t const   )1927583346,      (uint32_t const   )3231407040U, 
        (uint32_t const   )3077948087U,      (uint32_t const   )4259388669U,      (uint32_t const   )2470293139U,      (uint32_t const   )642542118, 
        (uint32_t const   )913070646,      (uint32_t const   )1065238847,      (uint32_t const   )4160029431U,      (uint32_t const   )3431157708U, 
        (uint32_t const   )879254580,      (uint32_t const   )2773611685U,      (uint32_t const   )3855693029U,      (uint32_t const   )4059629809U, 
        (uint32_t const   )1910674289,      (uint32_t const   )3635114968U,      (uint32_t const   )828527409,      (uint32_t const   )355090197, 
        (uint32_t const   )67636228,      (uint32_t const   )3348452039U,      (uint32_t const   )591815971,      (uint32_t const   )3281870531U, 
        (uint32_t const   )405809176,      (uint32_t const   )2520228246U,      (uint32_t const   )84545285,      (uint32_t const   )2586817946U, 
        (uint32_t const   )118360327,      (uint32_t const   )304363026,      (uint32_t const   )2149292928U,      (uint32_t const   )3806281186U, 
        (uint32_t const   )3956090603U,      (uint32_t const   )659450151,      (uint32_t const   )2994720178U,      (uint32_t const   )1978310517, 
        (uint32_t const   )152181513,      (uint32_t const   )2199756419U,      (uint32_t const   )743994412,      (uint32_t const   )439627290, 
        (uint32_t const   )456535323,      (uint32_t const   )1859957358,      (uint32_t const   )1521806938,      (uint32_t const   )2690382752U, 
        (uint32_t const   )1386542674,      (uint32_t const   )997608763,      (uint32_t const   )3602342358U,      (uint32_t const   )3011366579U, 
        (uint32_t const   )693271337,      (uint32_t const   )3822927587U,      (uint32_t const   )794718511,      (uint32_t const   )2215876484U, 
        (uint32_t const   )1403450707,      (uint32_t const   )3518589137U,      (uint32_t const   )0,      (uint32_t const   )3988860141U, 
        (uint32_t const   )541089824,      (uint32_t const   )4242743292U,      (uint32_t const   )2977548465U,      (uint32_t const   )1538714971, 
        (uint32_t const   )1792327274,      (uint32_t const   )3415033547U,      (uint32_t const   )3194476990U,      (uint32_t const   )963791673, 
        (uint32_t const   )1251270218,      (uint32_t const   )1285084236,      (uint32_t const   )1487988824,      (uint32_t const   )3481619151U, 
        (uint32_t const   )3501943760U,      (uint32_t const   )4022676207U,      (uint32_t const   )2857362858U,      (uint32_t const   )4226619131U, 
        (uint32_t const   )1132905795,      (uint32_t const   )1301993293,      (uint32_t const   )862344499,      (uint32_t const   )2232521861U, 
        (uint32_t const   )1166724933,      (uint32_t const   )4192801017U,      (uint32_t const   )33818114,      (uint32_t const   )2147385727, 
        (uint32_t const   )1352724560,      (uint32_t const   )1014514748,      (uint32_t const   )2670049951U,      (uint32_t const   )2823545768U, 
        (uint32_t const   )1369633617,      (uint32_t const   )2740846243U,      (uint32_t const   )1082179648,      (uint32_t const   )2399505039U, 
        (uint32_t const   )2453646738U,      (uint32_t const   )2636233885U,      (uint32_t const   )946882616,      (uint32_t const   )4126213365U, 
        (uint32_t const   )3160661948U,      (uint32_t const   )3061301686U,      (uint32_t const   )3668932058U,      (uint32_t const   )557998881, 
        (uint32_t const   )270544912,      (uint32_t const   )4293204735U,      (uint32_t const   )4093447923U,      (uint32_t const   )3535760850U, 
        (uint32_t const   )3447803085U,      (uint32_t const   )202904588,      (uint32_t const   )321271059,      (uint32_t const   )3972214764U, 
        (uint32_t const   )1606345055,      (uint32_t const   )2536874647U,      (uint32_t const   )1149815876,      (uint32_t const   )388905239, 
        (uint32_t const   )3297990596U,      (uint32_t const   )2807427751U,      (uint32_t const   )2130477694,      (uint32_t const   )1031423805, 
        (uint32_t const   )1690872932,      (uint32_t const   )1572530013,      (uint32_t const   )422718233,      (uint32_t const   )1944491379, 
        (uint32_t const   )1623236704,      (uint32_t const   )2165938305U,      (uint32_t const   )1335808335,      (uint32_t const   )3701702620U, 
        (uint32_t const   )574907938,      (uint32_t const   )710180394,      (uint32_t const   )2419829648U,      (uint32_t const   )2282455944U, 
        (uint32_t const   )1183631942,      (uint32_t const   )4006029806U,      (uint32_t const   )3094074296U,      (uint32_t const   )338181140, 
        (uint32_t const   )3735517662U,      (uint32_t const   )1589437022,      (uint32_t const   )185998603,      (uint32_t const   )3685578459U, 
        (uint32_t const   )3772464096U,      (uint32_t const   )845436466,      (uint32_t const   )980700730,      (uint32_t const   )169090570, 
        (uint32_t const   )1234361161,      (uint32_t const   )101452294,      (uint32_t const   )608726052,      (uint32_t const   )1555620956, 
        (uint32_t const   )3265224130U,      (uint32_t const   )3552407251U,      (uint32_t const   )2890133420U,      (uint32_t const   )1657054818, 
        (uint32_t const   )2436475025U,      (uint32_t const   )2503058581U,      (uint32_t const   )3839047652U,      (uint32_t const   )2045938553, 
        (uint32_t const   )3889509095U,      (uint32_t const   )3364570056U,      (uint32_t const   )929978679,      (uint32_t const   )1843050349, 
        (uint32_t const   )2365688973U,      (uint32_t const   )3585172693U,      (uint32_t const   )1318900302,      (uint32_t const   )2840191145U, 
        (uint32_t const   )1826141292,      (uint32_t const   )1454176854,      (uint32_t const   )4109567988U,      (uint32_t const   )3939444202U, 
        (uint32_t const   )1707781989,      (uint32_t const   )2062847610,      (uint32_t const   )2923948462U,      (uint32_t const   )135272456, 
        (uint32_t const   )3127891386U,      (uint32_t const   )2029029496,      (uint32_t const   )625635109,      (uint32_t const   )777810478, 
        (uint32_t const   )473441308,      (uint32_t const   )2790781350U,      (uint32_t const   )3027486644U,      (uint32_t const   )3331805638U, 
        (uint32_t const   )3905627112U,      (uint32_t const   )3718347997U,      (uint32_t const   )1961401460,      (uint32_t const   )524165407, 
        (uint32_t const   )1268178251,      (uint32_t const   )3177307325U,      (uint32_t const   )2332919435U,      (uint32_t const   )2316273034U, 
        (uint32_t const   )1893765232,      (uint32_t const   )1048330814,      (uint32_t const   )3044132021U,      (uint32_t const   )1724688998, 
        (uint32_t const   )1217452104,      (uint32_t const   )50726147,      (uint32_t const   )4143383030U,      (uint32_t const   )236720654, 
        (uint32_t const   )1640145761,      (uint32_t const   )896163637,      (uint32_t const   )1471084887,      (uint32_t const   )3110719673U, 
        (uint32_t const   )2249691526U,      (uint32_t const   )3248052417U,      (uint32_t const   )490350365,      (uint32_t const   )2653403550U, 
        (uint32_t const   )3789109473U,      (uint32_t const   )4176155640U,      (uint32_t const   )2553000856U,      (uint32_t const   )287453969, 
        (uint32_t const   )1775418217,      (uint32_t const   )3651760345U,      (uint32_t const   )2382858638U,      (uint32_t const   )2486413204U, 
        (uint32_t const   )2603464347U,      (uint32_t const   )507257374,      (uint32_t const   )2266337927U,      (uint32_t const   )3922272489U, 
        (uint32_t const   )3464972750U,      (uint32_t const   )1437269845,      (uint32_t const   )676362280,      (uint32_t const   )3752164063U, 
        (uint32_t const   )2349043596U,      (uint32_t const   )2707028129U,      (uint32_t const   )2299101321U,      (uint32_t const   )219813645, 
        (uint32_t const   )3211123391U,      (uint32_t const   )3872862694U,      (uint32_t const   )1115997762,      (uint32_t const   )1758509160, 
        (uint32_t const   )1099088705,      (uint32_t const   )2569646233U,      (uint32_t const   )760903469,      (uint32_t const   )253628687, 
        (uint32_t const   )2960903088U,      (uint32_t const   )1420360788,      (uint32_t const   )3144537787U,      (uint32_t const   )371997206};
#line 403 "cryptonight.c"
uint32_t const   TestTable4[256]  __attribute__((__aligned__(16)))  = 
#line 403
  {      (uint32_t const   )3332727651U,      (uint32_t const   )4169432188U,      (uint32_t const   )4003034999U,      (uint32_t const   )4136467323U, 
        (uint32_t const   )4279104242U,      (uint32_t const   )3602738027U,      (uint32_t const   )3736170351U,      (uint32_t const   )2438251973U, 
        (uint32_t const   )1615867952,      (uint32_t const   )33751297,      (uint32_t const   )3467208551U,      (uint32_t const   )1451043627, 
        (uint32_t const   )3877240574U,      (uint32_t const   )3043153879U,      (uint32_t const   )1306962859,      (uint32_t const   )3969545846U, 
        (uint32_t const   )2403715786U,      (uint32_t const   )530416258,      (uint32_t const   )2302724553U,      (uint32_t const   )4203183485U, 
        (uint32_t const   )4011195130U,      (uint32_t const   )3001768281U,      (uint32_t const   )2395555655U,      (uint32_t const   )4211863792U, 
        (uint32_t const   )1106029997,      (uint32_t const   )3009926356U,      (uint32_t const   )1610457762,      (uint32_t const   )1173008303, 
        (uint32_t const   )599760028,      (uint32_t const   )1408738468,      (uint32_t const   )3835064946U,      (uint32_t const   )2606481600U, 
        (uint32_t const   )1975695287,      (uint32_t const   )3776773629U,      (uint32_t const   )1034851219,      (uint32_t const   )1282024998, 
        (uint32_t const   )1817851446,      (uint32_t const   )2118205247,      (uint32_t const   )4110612471U,      (uint32_t const   )2203045068U, 
        (uint32_t const   )1750873140,      (uint32_t const   )1374987685,      (uint32_t const   )3509904869U,      (uint32_t const   )4178113009U, 
        (uint32_t const   )3801313649U,      (uint32_t const   )2876496088U,      (uint32_t const   )1649619249,      (uint32_t const   )708777237, 
        (uint32_t const   )135005188,      (uint32_t const   )2505230279U,      (uint32_t const   )1181033251,      (uint32_t const   )2640233411U, 
        (uint32_t const   )807933976,      (uint32_t const   )933336726,      (uint32_t const   )168756485,      (uint32_t const   )800430746, 
        (uint32_t const   )235472647,      (uint32_t const   )607523346,      (uint32_t const   )463175808,      (uint32_t const   )3745374946U, 
        (uint32_t const   )3441880043U,      (uint32_t const   )1315514151,      (uint32_t const   )2144187058,      (uint32_t const   )3936318837U, 
        (uint32_t const   )303761673,      (uint32_t const   )496927619,      (uint32_t const   )1484008492,      (uint32_t const   )875436570, 
        (uint32_t const   )908925723,      (uint32_t const   )3702681198U,      (uint32_t const   )3035519578U,      (uint32_t const   )1543217312, 
        (uint32_t const   )2767606354U,      (uint32_t const   )1984772923,      (uint32_t const   )3076642518U,      (uint32_t const   )2110698419, 
        (uint32_t const   )1383803177,      (uint32_t const   )3711886307U,      (uint32_t const   )1584475951,      (uint32_t const   )328696964, 
        (uint32_t const   )2801095507U,      (uint32_t const   )3110654417U,      (uint32_t const   )0,      (uint32_t const   )3240947181U, 
        (uint32_t const   )1080041504,      (uint32_t const   )3810524412U,      (uint32_t const   )2043195825,      (uint32_t const   )3069008731U, 
        (uint32_t const   )3569248874U,      (uint32_t const   )2370227147U,      (uint32_t const   )1742323390,      (uint32_t const   )1917532473, 
        (uint32_t const   )2497595978U,      (uint32_t const   )2564049996U,      (uint32_t const   )2968016984U,      (uint32_t const   )2236272591U, 
        (uint32_t const   )3144405200U,      (uint32_t const   )3307925487U,      (uint32_t const   )1340451498,      (uint32_t const   )3977706491U, 
        (uint32_t const   )2261074755U,      (uint32_t const   )2597801293U,      (uint32_t const   )1716859699,      (uint32_t const   )294946181, 
        (uint32_t const   )2328839493U,      (uint32_t const   )3910203897U,      (uint32_t const   )67502594,      (uint32_t const   )4269899647U, 
        (uint32_t const   )2700103760U,      (uint32_t const   )2017737788,      (uint32_t const   )632987551,      (uint32_t const   )1273211048, 
        (uint32_t const   )2733855057U,      (uint32_t const   )1576969123,      (uint32_t const   )2160083008U,      (uint32_t const   )92966799, 
        (uint32_t const   )1068339858,      (uint32_t const   )566009245,      (uint32_t const   )1883781176,      (uint32_t const   )4043634165U, 
        (uint32_t const   )1675607228,      (uint32_t const   )2009183926,      (uint32_t const   )2943736538U,      (uint32_t const   )1113792801, 
        (uint32_t const   )540020752,      (uint32_t const   )3843751935U,      (uint32_t const   )4245615603U,      (uint32_t const   )3211645650U, 
        (uint32_t const   )2169294285U,      (uint32_t const   )403966988,      (uint32_t const   )641012499,      (uint32_t const   )3274697964U, 
        (uint32_t const   )3202441055U,      (uint32_t const   )899848087,      (uint32_t const   )2295088196U,      (uint32_t const   )775493399, 
        (uint32_t const   )2472002756U,      (uint32_t const   )1441965991,      (uint32_t const   )4236410494U,      (uint32_t const   )2051489085, 
        (uint32_t const   )3366741092U,      (uint32_t const   )3135724893U,      (uint32_t const   )841685273,      (uint32_t const   )3868554099U, 
        (uint32_t const   )3231735904U,      (uint32_t const   )429425025,      (uint32_t const   )2664517455U,      (uint32_t const   )2743065820U, 
        (uint32_t const   )1147544098,      (uint32_t const   )1417554474,      (uint32_t const   )1001099408,      (uint32_t const   )193169544, 
        (uint32_t const   )2362066502U,      (uint32_t const   )3341414126U,      (uint32_t const   )1809037496,      (uint32_t const   )675025940, 
        (uint32_t const   )2809781982U,      (uint32_t const   )3168951902U,      (uint32_t const   )371002123,      (uint32_t const   )2910247899U, 
        (uint32_t const   )3678134496U,      (uint32_t const   )1683370546,      (uint32_t const   )1951283770,      (uint32_t const   )337512970, 
        (uint32_t const   )2463844681U,      (uint32_t const   )201983494,      (uint32_t const   )1215046692,      (uint32_t const   )3101973596U, 
        (uint32_t const   )2673722050U,      (uint32_t const   )3178157011U,      (uint32_t const   )1139780780,      (uint32_t const   )3299238498U, 
        (uint32_t const   )967348625,      (uint32_t const   )832869781,      (uint32_t const   )3543655652U,      (uint32_t const   )4069226873U, 
        (uint32_t const   )3576883175U,      (uint32_t const   )2336475336U,      (uint32_t const   )1851340599,      (uint32_t const   )3669454189U, 
        (uint32_t const   )25988493,      (uint32_t const   )2976175573U,      (uint32_t const   )2631028302U,      (uint32_t const   )1239460265, 
        (uint32_t const   )3635702892U,      (uint32_t const   )2902087254U,      (uint32_t const   )4077384948U,      (uint32_t const   )3475368682U, 
        (uint32_t const   )3400492389U,      (uint32_t const   )4102978170U,      (uint32_t const   )1206496942,      (uint32_t const   )270010376, 
        (uint32_t const   )1876277946,      (uint32_t const   )4035475576U,      (uint32_t const   )1248797989,      (uint32_t const   )1550986798, 
        (uint32_t const   )941890588,      (uint32_t const   )1475454630,      (uint32_t const   )1942467764,      (uint32_t const   )2538718918U, 
        (uint32_t const   )3408128232U,      (uint32_t const   )2709315037U,      (uint32_t const   )3902567540U,      (uint32_t const   )1042358047, 
        (uint32_t const   )2531085131U,      (uint32_t const   )1641856445,      (uint32_t const   )226921355,      (uint32_t const   )260409994, 
        (uint32_t const   )3767562352U,      (uint32_t const   )2084716094,      (uint32_t const   )1908716981,      (uint32_t const   )3433719398U, 
        (uint32_t const   )2430093384U,      (uint32_t const   )100991747,      (uint32_t const   )4144101110U,      (uint32_t const   )470945294, 
        (uint32_t const   )3265487201U,      (uint32_t const   )1784624437,      (uint32_t const   )2935576407U,      (uint32_t const   )1775286713, 
        (uint32_t const   )395413126,      (uint32_t const   )2572730817U,      (uint32_t const   )975641885,      (uint32_t const   )666476190, 
        (uint32_t const   )3644383713U,      (uint32_t const   )3943954680U,      (uint32_t const   )733190296,      (uint32_t const   )573772049, 
        (uint32_t const   )3535497577U,      (uint32_t const   )2842745305U,      (uint32_t const   )126455438,      (uint32_t const   )866620564, 
        (uint32_t const   )766942107,      (uint32_t const   )1008868894,      (uint32_t const   )361924487,      (uint32_t const   )3374377449U, 
        (uint32_t const   )2269761230U,      (uint32_t const   )2868860245U,      (uint32_t const   )1350051880,      (uint32_t const   )2776293343U, 
        (uint32_t const   )59739276,      (uint32_t const   )1509466529,      (uint32_t const   )159418761,      (uint32_t const   )437718285, 
        (uint32_t const   )1708834751,      (uint32_t const   )3610371814U,      (uint32_t const   )2227585602U,      (uint32_t const   )3501746280U, 
        (uint32_t const   )2193834305U,      (uint32_t const   )699439513,      (uint32_t const   )1517759789,      (uint32_t const   )504434447, 
        (uint32_t const   )2076946608,      (uint32_t const   )2835108948U,      (uint32_t const   )1842789307,      (uint32_t const   )742004246};
#line 437 "cryptonight.c"
void mul64to128(uint8_t *op1 , uint8_t *op2 , uint8_t *dst ) 
{ 
  uint64_t hi ;
  uint64_t lo ;
  uint64_t u1 ;
  uint64_t v1 ;
  uint64_t t ;
  uint64_t w3 ;
  uint64_t k ;

  {
#line 439
  hi = *((uint64_t *)op1 + 0);
#line 440
  lo = *((uint64_t *)op2 + 0);
#line 442
  u1 = hi & 4294967295ULL;
#line 443
  v1 = lo & 4294967295ULL;
#line 444
  t = u1 * v1;
#line 445
  w3 = t & 4294967295ULL;
#line 446
  k = t >> 32;
#line 448
  hi >>= 32;
#line 449
  t = hi * v1 + k;
#line 450
  k = t & 4294967295ULL;
#line 451
  v1 = t >> 32;
#line 453
  lo >>= 32;
#line 454
  t = u1 * lo + k;
#line 455
  k = t >> 32;
#line 457
  hi = (hi * lo + v1) + k;
#line 458
  lo = (t << 32) + w3;
#line 460
  *((uint64_t *)dst + 0) = hi;
#line 461
  *((uint64_t *)dst + 1) = lo;
#line 462
  return;
}
}
#line 464 "cryptonight.c"
void sum_xor_dst(uint8_t const   *a , uint8_t *c , uint8_t *dst ) 
{ 
  uint64_t hi ;
  uint64_t lo ;

  {
#line 466
  hi = *((uint64_t *)a + 0);
#line 467
  lo = *((uint64_t *)a + 1);
#line 469
  lo += *((uint64_t *)c + 1);
#line 470
  hi += *((uint64_t *)c + 0);
#line 472
  *((uint64_t *)c + 0) = *((uint64_t *)dst + 0) ^ hi;
#line 473
  *((uint64_t *)c + 1) = *((uint64_t *)dst + 1) ^ lo;
#line 474
  *((uint64_t *)dst + 0) = hi;
#line 475
  *((uint64_t *)dst + 1) = lo;
#line 476
  return;
}
}
#line 478 "cryptonight.c"
void xor_blocks(uint8_t *a , uint8_t const   *b ) 
{ 


  {
#line 480
  *((uint64_t *)a + 0) ^= *((uint64_t *)b + 0);
#line 481
  *((uint64_t *)a + 1) ^= *((uint64_t *)b + 1);
#line 482
  return;
}
}
#line 484 "cryptonight.c"
void SubAndShiftAndMixAddRound(uint32_t *out , uint8_t *temp , uint32_t *AesEncKey ) 
{ 


  {
#line 486
  *(out + 0) = (uint32_t )((((TestTable1[*(temp + 0)] ^ TestTable2[*(temp + 5)]) ^ TestTable3[*(temp + 10)]) ^ TestTable4[*(temp + 15)]) ^ (unsigned int const   )*(AesEncKey + 0));
#line 487
  *(out + 1) = (uint32_t )((((TestTable4[*(temp + 3)] ^ TestTable1[*(temp + 4)]) ^ TestTable2[*(temp + 9)]) ^ TestTable3[*(temp + 14)]) ^ (unsigned int const   )*(AesEncKey + 1));
#line 488
  *(out + 2) = (uint32_t )((((TestTable3[*(temp + 2)] ^ TestTable4[*(temp + 7)]) ^ TestTable1[*(temp + 8)]) ^ TestTable2[*(temp + 13)]) ^ (unsigned int const   )*(AesEncKey + 2));
#line 489
  *(out + 3) = (uint32_t )((((TestTable2[*(temp + 1)] ^ TestTable3[*(temp + 6)]) ^ TestTable4[*(temp + 11)]) ^ TestTable1[*(temp + 12)]) ^ (unsigned int const   )*(AesEncKey + 3));
#line 490
  return;
}
}
#line 492 "cryptonight.c"
void SubAndShiftAndMixAddRoundInPlace(uint32_t *temp , uint32_t *AesEncKey ) 
{ 
  uint8_t *state ;
  uint8_t saved[6] ;

  {
#line 494
  state = (uint8_t *)(temp + 0);
#line 497
  saved[0] = *(state + 3);
#line 498
  saved[1] = *(state + 2);
#line 499
  saved[2] = *(state + 7);
#line 500
  saved[3] = *(state + 1);
#line 501
  saved[4] = *(state + 6);
#line 502
  saved[5] = *(state + 11);
#line 504
  *(temp + 0) = (uint32_t )((((TestTable1[*(state + 0)] ^ TestTable2[*(state + 5)]) ^ TestTable3[*(state + 10)]) ^ TestTable4[*(state + 15)]) ^ (unsigned int const   )*(AesEncKey + 0));
#line 505
  *(temp + 1) = (uint32_t )((((TestTable4[saved[0]] ^ TestTable1[*(state + 4)]) ^ TestTable2[*(state + 9)]) ^ TestTable3[*(state + 14)]) ^ (unsigned int const   )*(AesEncKey + 1));
#line 506
  *(temp + 2) = (uint32_t )((((TestTable3[saved[1]] ^ TestTable4[saved[2]]) ^ TestTable1[*(state + 8)]) ^ TestTable2[*(state + 13)]) ^ (unsigned int const   )*(AesEncKey + 2));
#line 507
  *(temp + 3) = (uint32_t )((((TestTable2[saved[3]] ^ TestTable3[saved[4]]) ^ TestTable4[saved[5]]) ^ TestTable1[*(state + 12)]) ^ (unsigned int const   )*(AesEncKey + 3));
#line 508
  return;
}
}
#line 510 "cryptonight.c"
uint8_t text[128]  ;
#line 627
void cryptonight_hash_ctx(void *output___0 , void const   *input , size_t len , int algo ,
                          int variant , int height ) ;
#line 627 "cryptonight.c"
static unsigned int const   table  =    (uint32_t const   )480016;
#line 637 "cryptonight.c"
static unsigned int const   table___0  =    (uint32_t const   )480016;
#line 512 "cryptonight.c"
void cryptonight_hash_ctx(void *output___0 , void const   *input , size_t len , int algo ,
                          int variant , int height ) 
{ 
  uint8_t *long_state ;
  oaes_ctx *aes_ctx ;
  union cn_slow_hash_state state ;
  uint8_t a[16] ;
  uint8_t b[16] ;
  uint8_t c[16] ;
  uint8_t d[16] ;
  uint8_t e[16] ;
  uint8_t f[16] ;
  size_t memory ;
  size_t iter ;
  size_t rvs ;
  uint32_t mask ;
  void *tmp ;
  OAES_CTX *tmp___0 ;
  size_t i ;
  size_t j ;
  uint64_t tweak1_2 ;
  unsigned long long tmp___1 ;
  uint64_t division_result ;
  uint64_t sqrt_result ;
  int i___0 ;
  uint32_t *ptr ;
  uint8_t tmp___2 ;
  uint8_t index___0 ;
  uint8_t tmp___3 ;
  uint8_t index___1 ;
  uint64_t *chunk1 ;
  uint64_t *chunk2 ;
  uint64_t *chunk3 ;
  uint64_t chunk1_old0 ;
  uint64_t chunk1_old1 ;
  uint64_t dividend ;
  uint32_t divisor ;
  uint64_t aa ;
  uint64_t sqrt_input ;
  double tmp___4 ;
  uint64_t s ;
  uint64_t b___0 ;
  uint64_t r2 ;
  int tmp___5 ;
  int tmp___6 ;
  uint64_t *chunk1___0 ;
  uint64_t *chunk2___0 ;
  uint64_t *chunk3___0 ;
  uint64_t chunk1_old0___0 ;
  uint64_t chunk1_old1___0 ;
  uint64_t *chunk1___1 ;
  uint64_t *chunk2___1 ;
  uint64_t *chunk3___1 ;
  uint64_t chunk1_old0___1 ;
  uint64_t chunk1_old1___1 ;
  uint64_t dividend___0 ;
  uint32_t divisor___0 ;
  uint64_t aa___0 ;
  uint64_t sqrt_input___0 ;
  double tmp___7 ;
  uint64_t s___0 ;
  uint64_t b___1 ;
  uint64_t r2___0 ;
  int tmp___8 ;
  int tmp___9 ;
  uint64_t *chunk1___2 ;
  uint64_t *chunk2___2 ;
  uint64_t *chunk3___2 ;
  uint64_t chunk1_old0___2 ;
  uint64_t chunk1_old1___2 ;
  uint64_t *chunk1___3 ;
  uint64_t *chunk2___3 ;
  uint64_t *chunk3___3 ;
  uint64_t chunk1_old0___3 ;
  uint64_t chunk1_old1___3 ;
  uint64_t dividend___1 ;
  uint32_t divisor___1 ;
  uint64_t aa___1 ;
  uint64_t sqrt_input___1 ;
  double tmp___10 ;
  uint64_t s___1 ;
  uint64_t b___2 ;
  uint64_t r2___1 ;
  int tmp___11 ;
  int tmp___12 ;
  uint64_t *chunk1___4 ;
  uint64_t *chunk2___4 ;
  uint64_t *chunk3___4 ;
  uint64_t chunk1_old0___4 ;
  uint64_t chunk1_old1___4 ;
  uint64_t *chunk1___5 ;
  uint64_t *chunk2___5 ;
  uint64_t *chunk3___5 ;
  uint64_t chunk1_old0___5 ;
  uint64_t chunk1_old1___5 ;
  uint64_t dividend___2 ;
  uint32_t divisor___2 ;
  uint64_t aa___2 ;
  uint64_t sqrt_input___2 ;
  double tmp___13 ;
  uint64_t s___2 ;
  uint64_t b___3 ;
  uint64_t r2___2 ;
  int tmp___14 ;
  int tmp___15 ;
  uint64_t *chunk1___6 ;
  uint64_t *chunk2___6 ;
  uint64_t *chunk3___6 ;
  uint64_t chunk1_old0___6 ;
  uint64_t chunk1_old1___6 ;
  uint64_t *chunk1___7 ;
  uint64_t *chunk2___7 ;
  uint64_t *chunk3___7 ;
  uint64_t *out_chunk ;
  uint64_t chunk1_old0___7 ;
  uint64_t chunk1_old1___7 ;
  uint64_t chunk2_old0 ;
  uint64_t chunk2_old1 ;
  uint64_t chunk3_old0 ;
  uint64_t chunk3_old1 ;
  uint64_t t[2] ;
  uint64_t *chunk1___8 ;
  uint64_t *chunk2___8 ;
  uint64_t *chunk3___8 ;
  uint64_t *out_chunk___0 ;
  uint64_t chunk1_old0___8 ;
  uint64_t chunk1_old1___8 ;
  uint64_t chunk2_old0___0 ;
  uint64_t chunk2_old1___0 ;
  uint64_t chunk3_old0___0 ;
  uint64_t chunk3_old1___0 ;
  uint64_t *chunk1___9 ;
  uint64_t *chunk2___9 ;
  uint64_t *chunk3___9 ;
  uint64_t *out_chunk___1 ;
  uint64_t chunk1_old0___9 ;
  uint64_t chunk1_old1___9 ;
  uint64_t chunk2_old0___1 ;
  uint64_t chunk2_old1___1 ;
  uint64_t chunk3_old0___1 ;
  uint64_t chunk3_old1___1 ;
  uint64_t t___0[2] ;
  uint64_t *chunk1___10 ;
  uint64_t *chunk2___10 ;
  uint64_t *chunk3___10 ;
  uint64_t *out_chunk___2 ;
  uint64_t chunk1_old0___10 ;
  uint64_t chunk1_old1___10 ;
  uint64_t chunk2_old0___2 ;
  uint64_t chunk2_old1___2 ;
  uint64_t chunk3_old0___2 ;
  uint64_t chunk3_old1___2 ;
  OAES_CTX *tmp___16 ;
  uint32_t *ptr___0 ;

  {
#line 528
  memory = (size_t )(1 << 21);
#line 529
  iter = (size_t )((1 << 20) / 4);
#line 530
  mask = (uint32_t )2097136;
#line 531
  rvs = (size_t )0;
#line 533
  switch (algo) {
  case 0: 
#line 536
  break;
  case 1: 
#line 538
  memory = (size_t )((1 << 21) / 2);
#line 539
  iter = (size_t )((1 << 20) / 8);
#line 540
  mask = (uint32_t )1048560;
#line 541
  break;
  case 2: 
#line 543
  memory = (size_t )((1 << 21) / 8);
#line 544
  iter = (size_t )((1 << 20) / 32);
#line 545
  mask = (uint32_t )131056;
#line 546
  break;
  case 3: 
#line 548
  memory = (size_t )(1 << 21);
#line 549
  iter = (size_t )((1 << 20) / 8);
#line 550
  mask = (uint32_t )2097136;
#line 551
  break;
  case 4: 
#line 553
  memory = (size_t )(1 << 21);
#line 554
  iter = (size_t )((3 * (1 << 20)) / 16);
#line 555
  mask = (uint32_t )2097136;
#line 556
  rvs = (size_t )1;
#line 557
  break;
  }
#line 560
  tmp = malloc(memory * sizeof(uint8_t ));
#line 560
  long_state = (uint8_t *)tmp;
#line 561
  tmp___0 = oaes_alloc();
#line 561
  aes_ctx = (oaes_ctx *)tmp___0;
#line 565
  keccak((uint8_t const   *)input, (int )len, state.hs.b, 200);
#line 566
  memcpy((void * __restrict  )(text), (void const   * __restrict  )(state.__annonCompField1.init),
         (size_t )128);
#line 568
  if (variant == 1) {
#line 568
    tmp___1 = *((uint64_t const   *)((uint8_t const   *)input + 35)) ^ (unsigned long long const   )state.hs.w[24];
  } else {
#line 568
    tmp___1 = (unsigned long long const   )0;
  }
#line 568
  tweak1_2 = (uint64_t )tmp___1;
#line 569
  division_result = (uint64_t )0;
#line 569
  sqrt_result = (uint64_t )0;
#line 569
  while (1) {
#line 569
    if (variant >= 2) {
#line 569
      *((uint64_t *)(d) + 0) = state.hs.w[8] ^ state.hs.w[10];
#line 569
      *((uint64_t *)(d) + 1) = state.hs.w[9] ^ state.hs.w[11];
#line 569
      division_result = state.hs.w[12];
#line 569
      sqrt_result = state.hs.w[13];
    }
#line 569
    break;
  }
#line 571
  while (1) {
#line 571
    if (variant >= 4) {
#line 571
      i___0 = 0;
#line 571
      while (i___0 < 4) {
#line 571
        while (1) {
#line 571
          memcpy((void * __restrict  )(r + i___0), (void const   * __restrict  )((uint8_t *)(state.hs.w + 12) + sizeof(v4_reg ) * (unsigned long )i___0),
                 sizeof(v4_reg ));
#line 571
          *(r + i___0) = *(r + i___0);
#line 571
          break;
        }
#line 571
        i___0 ++;
      }
#line 571
      if (lastHeight != height) {
#line 571
        v4_random_math_init(code, (uint64_t const   )height);
#line 571
        lastHeight = height;
      }
    }
#line 571
    break;
  }
#line 573
  oaes_key_import_data((OAES_CTX *)aes_ctx, (uint8_t const   *)(state.hs.b), (size_t )32);
#line 575
  i = (size_t )0;
#line 575
  while (i < memory) {
#line 577
    j = (size_t )0;
#line 577
    while (j < 10UL) {
#line 579
      ptr = (uint32_t *)((aes_ctx->key)->exp_data + (j << 4));
#line 581
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[0]), ptr);
#line 582
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[16]), ptr);
#line 583
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[32]), ptr);
#line 584
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[48]), ptr);
#line 585
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[64]), ptr);
#line 586
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[80]), ptr);
#line 587
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[96]), ptr);
#line 588
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[112]), ptr);
#line 577
      j ++;
    }
#line 590
    memcpy((void * __restrict  )(long_state + i), (void const   * __restrict  )(text),
           (size_t )128);
#line 575
    i += 128UL;
  }
#line 593
  i = (size_t )0;
#line 593
  while (i < 2UL) {
#line 595
    *((uint64_t *)(a) + i) = *((uint64_t *)(state.__annonCompField1.k) + i) ^ *((uint64_t *)(state.__annonCompField1.k) + (i + 4UL));
#line 596
    *((uint64_t *)(b) + i) = *((uint64_t *)(state.__annonCompField1.k) + (i + 2UL)) ^ *((uint64_t *)(state.__annonCompField1.k) + (i + 6UL));
#line 593
    i ++;
  }
#line 599
  if (variant == 0) {
#line 601
    i = (size_t )0;
#line 601
    while (i < iter) {
#line 603
      j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 604
      SubAndShiftAndMixAddRound((uint32_t *)(c), long_state + j, (uint32_t *)(a));
#line 605
      xor_blocks_dst((uint8_t const   *)(c), (uint8_t const   *)(b), long_state + j);
#line 607
      j = (size_t )(*((uint32_t *)(c) + 0) & mask);
#line 608
      mul64to128(c, long_state + j, e);
#line 609
      sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 611
      j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 612
      SubAndShiftAndMixAddRound((uint32_t *)(b), long_state + j, (uint32_t *)(a));
#line 613
      xor_blocks_dst((uint8_t const   *)(b), (uint8_t const   *)(c), long_state + j);
#line 615
      j = (size_t )(*((uint32_t *)(b) + 0) & mask);
#line 616
      mul64to128(b, long_state + j, e);
#line 617
      sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 601
      i ++;
    }
  } else
#line 620
  if (variant == 1) {
#line 622
    i = (size_t )0;
#line 622
    while (i < iter) {
#line 624
      j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 625
      SubAndShiftAndMixAddRound((uint32_t *)(c), long_state + j, (uint32_t *)(a));
#line 626
      xor_blocks_dst((uint8_t const   *)(c), (uint8_t const   *)(b), long_state + j);
#line 627
      while (1) {
#line 627
        tmp___2 = (uint8_t )*((uint8_t const   *)(long_state + j) + 11);
#line 627
        index___0 = (uint8_t )(((((int )tmp___2 >> 3) & 6) | ((int )tmp___2 & 1)) << 1);
#line 627
        *((long_state + j) + 11) = (uint8_t )((unsigned int const   )tmp___2 ^ ((table >> (int )index___0) & 48U));
#line 627
        break;
      }
#line 629
      j = (size_t )(*((uint32_t *)(c) + 0) & mask);
#line 630
      mul64to128(c, long_state + j, e);
#line 631
      sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 632
      while (1) {
#line 632
        xor64((long_state + j) + 8, (uint64_t const   )tweak1_2);
#line 632
        break;
      }
#line 634
      j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 635
      SubAndShiftAndMixAddRound((uint32_t *)(b), long_state + j, (uint32_t *)(a));
#line 636
      xor_blocks_dst((uint8_t const   *)(b), (uint8_t const   *)(c), long_state + j);
#line 637
      while (1) {
#line 637
        tmp___3 = (uint8_t )*((uint8_t const   *)(long_state + j) + 11);
#line 637
        index___1 = (uint8_t )(((((int )tmp___3 >> 3) & 6) | ((int )tmp___3 & 1)) << 1);
#line 637
        *((long_state + j) + 11) = (uint8_t )((unsigned int const   )tmp___3 ^ ((table___0 >> (int )index___1) & 48U));
#line 637
        break;
      }
#line 639
      j = (size_t )(*((uint32_t *)(b) + 0) & mask);
#line 640
      mul64to128(b, long_state + j, e);
#line 641
      sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 642
      while (1) {
#line 642
        xor64((long_state + j) + 8, (uint64_t const   )tweak1_2);
#line 642
        break;
      }
#line 622
      i ++;
    }
  } else
#line 645
  if (variant == 2) {
#line 645
    goto _L;
  } else
#line 645
  if (variant == 3) {
    _L: /* CIL Label */ 
#line 647
    if (rvs) {
#line 649
      i = (size_t )0;
#line 649
      while (i < iter) {
#line 651
        j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 652
        while (1) {
#line 652
          chunk1 = (uint64_t *)(long_state + (j ^ 16UL));
#line 652
          chunk2 = (uint64_t *)(long_state + (j ^ 32UL));
#line 652
          chunk3 = (uint64_t *)(long_state + (j ^ 48UL));
#line 652
          chunk1_old0 = *(chunk3 + 0);
#line 652
          chunk1_old1 = *(chunk3 + 1);
#line 652
          *(chunk1 + 0) += *((uint64_t *)(d) + 0);
#line 652
          *(chunk1 + 1) += *((uint64_t *)(d) + 1);
#line 652
          *(chunk3 + 0) = *(chunk2 + 0) + *((uint64_t *)(a) + 0);
#line 652
          *(chunk3 + 1) = *(chunk2 + 1) + *((uint64_t *)(a) + 1);
#line 652
          *(chunk2 + 0) = chunk1_old0 + *((uint64_t *)(b) + 0);
#line 652
          *(chunk2 + 1) = chunk1_old1 + *((uint64_t *)(b) + 1);
#line 652
          break;
        }
#line 653
        SubAndShiftAndMixAddRound((uint32_t *)(c), long_state + j, (uint32_t *)(a));
#line 654
        xor_blocks_dst((uint8_t const   *)(c), (uint8_t const   *)(b), long_state + j);
#line 656
        j = (size_t )(*((uint32_t *)(c) + 0) & mask);
#line 657
        while (1) {
#line 657
          *((uint64_t *)(long_state + j) + 0) ^= division_result ^ (sqrt_result << 32);
#line 657
          dividend = *((uint64_t *)(c) + 1);
#line 657
          divisor = (uint32_t )((*((uint64_t *)(c) + 0) + (sqrt_result << 1)) | 2147483649ULL);
#line 657
          aa = dividend / (uint64_t )divisor;
#line 657
          division_result = (aa & 4294967295ULL) + ((dividend - aa * (uint64_t )divisor) << 32);
#line 657
          sqrt_input = *((uint64_t *)(c) + 0) + division_result;
#line 657
          while (1) {
#line 657
            tmp___4 = sqrt((double )sqrt_input + 18446744073709551616.0);
#line 657
            sqrt_result = (uint64_t )(tmp___4 * 2.0 - 8589934592.0);
#line 657
            break;
          }
#line 657
          while (1) {
#line 657
            s = sqrt_result >> 1;
#line 657
            b___0 = sqrt_result & 1ULL;
#line 657
            r2 = s * (s + b___0) + (sqrt_result << 32);
#line 657
            if (r2 + b___0 > sqrt_input) {
#line 657
              tmp___5 = -1;
            } else {
#line 657
              tmp___5 = 0;
            }
#line 657
            if (r2 + (1ULL << 32) < sqrt_input - s) {
#line 657
              tmp___6 = 1;
            } else {
#line 657
              tmp___6 = 0;
            }
#line 657
            sqrt_result += (uint64_t )(tmp___5 + tmp___6);
#line 657
            break;
          }
#line 657
          break;
        }
#line 658
        mul64to128(c, long_state + j, e);
#line 659
        while (1) {
#line 659
          xor_blocks(long_state + (j ^ 16UL), (uint8_t const   *)(e));
#line 659
          xor_blocks(e, (uint8_t const   *)(long_state + (j ^ 32UL)));
#line 659
          break;
        }
#line 660
        while (1) {
#line 660
          chunk1___0 = (uint64_t *)(long_state + (j ^ 16UL));
#line 660
          chunk2___0 = (uint64_t *)(long_state + (j ^ 32UL));
#line 660
          chunk3___0 = (uint64_t *)(long_state + (j ^ 48UL));
#line 660
          chunk1_old0___0 = *(chunk3___0 + 0);
#line 660
          chunk1_old1___0 = *(chunk3___0 + 1);
#line 660
          *(chunk1___0 + 0) += *((uint64_t *)(d) + 0);
#line 660
          *(chunk1___0 + 1) += *((uint64_t *)(d) + 1);
#line 660
          *(chunk3___0 + 0) = *(chunk2___0 + 0) + *((uint64_t *)(a) + 0);
#line 660
          *(chunk3___0 + 1) = *(chunk2___0 + 1) + *((uint64_t *)(a) + 1);
#line 660
          *(chunk2___0 + 0) = chunk1_old0___0 + *((uint64_t *)(b) + 0);
#line 660
          *(chunk2___0 + 1) = chunk1_old1___0 + *((uint64_t *)(b) + 1);
#line 660
          break;
        }
#line 661
        sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 662
        copy_block(d, (uint8_t const   *)(b));
#line 664
        j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 665
        while (1) {
#line 665
          chunk1___1 = (uint64_t *)(long_state + (j ^ 16UL));
#line 665
          chunk2___1 = (uint64_t *)(long_state + (j ^ 32UL));
#line 665
          chunk3___1 = (uint64_t *)(long_state + (j ^ 48UL));
#line 665
          chunk1_old0___1 = *(chunk3___1 + 0);
#line 665
          chunk1_old1___1 = *(chunk3___1 + 1);
#line 665
          *(chunk1___1 + 0) += *((uint64_t *)(d) + 0);
#line 665
          *(chunk1___1 + 1) += *((uint64_t *)(d) + 1);
#line 665
          *(chunk3___1 + 0) = *(chunk2___1 + 0) + *((uint64_t *)(a) + 0);
#line 665
          *(chunk3___1 + 1) = *(chunk2___1 + 1) + *((uint64_t *)(a) + 1);
#line 665
          *(chunk2___1 + 0) = chunk1_old0___1 + *((uint64_t *)(c) + 0);
#line 665
          *(chunk2___1 + 1) = chunk1_old1___1 + *((uint64_t *)(c) + 1);
#line 665
          break;
        }
#line 666
        SubAndShiftAndMixAddRound((uint32_t *)(b), long_state + j, (uint32_t *)(a));
#line 667
        xor_blocks_dst((uint8_t const   *)(b), (uint8_t const   *)(c), long_state + j);
#line 669
        j = (size_t )(*((uint32_t *)(b) + 0) & mask);
#line 670
        while (1) {
#line 670
          *((uint64_t *)(long_state + j) + 0) ^= division_result ^ (sqrt_result << 32);
#line 670
          dividend___0 = *((uint64_t *)(b) + 1);
#line 670
          divisor___0 = (uint32_t )((*((uint64_t *)(b) + 0) + (sqrt_result << 1)) | 2147483649ULL);
#line 670
          aa___0 = dividend___0 / (uint64_t )divisor___0;
#line 670
          division_result = (aa___0 & 4294967295ULL) + ((dividend___0 - aa___0 * (uint64_t )divisor___0) << 32);
#line 670
          sqrt_input___0 = *((uint64_t *)(b) + 0) + division_result;
#line 670
          while (1) {
#line 670
            tmp___7 = sqrt((double )sqrt_input___0 + 18446744073709551616.0);
#line 670
            sqrt_result = (uint64_t )(tmp___7 * 2.0 - 8589934592.0);
#line 670
            break;
          }
#line 670
          while (1) {
#line 670
            s___0 = sqrt_result >> 1;
#line 670
            b___1 = sqrt_result & 1ULL;
#line 670
            r2___0 = s___0 * (s___0 + b___1) + (sqrt_result << 32);
#line 670
            if (r2___0 + b___1 > sqrt_input___0) {
#line 670
              tmp___8 = -1;
            } else {
#line 670
              tmp___8 = 0;
            }
#line 670
            if (r2___0 + (1ULL << 32) < sqrt_input___0 - s___0) {
#line 670
              tmp___9 = 1;
            } else {
#line 670
              tmp___9 = 0;
            }
#line 670
            sqrt_result += (uint64_t )(tmp___8 + tmp___9);
#line 670
            break;
          }
#line 670
          break;
        }
#line 671
        mul64to128(b, long_state + j, e);
#line 672
        while (1) {
#line 672
          xor_blocks(long_state + (j ^ 16UL), (uint8_t const   *)(e));
#line 672
          xor_blocks(e, (uint8_t const   *)(long_state + (j ^ 32UL)));
#line 672
          break;
        }
#line 673
        while (1) {
#line 673
          chunk1___2 = (uint64_t *)(long_state + (j ^ 16UL));
#line 673
          chunk2___2 = (uint64_t *)(long_state + (j ^ 32UL));
#line 673
          chunk3___2 = (uint64_t *)(long_state + (j ^ 48UL));
#line 673
          chunk1_old0___2 = *(chunk3___2 + 0);
#line 673
          chunk1_old1___2 = *(chunk3___2 + 1);
#line 673
          *(chunk1___2 + 0) += *((uint64_t *)(d) + 0);
#line 673
          *(chunk1___2 + 1) += *((uint64_t *)(d) + 1);
#line 673
          *(chunk3___2 + 0) = *(chunk2___2 + 0) + *((uint64_t *)(a) + 0);
#line 673
          *(chunk3___2 + 1) = *(chunk2___2 + 1) + *((uint64_t *)(a) + 1);
#line 673
          *(chunk2___2 + 0) = chunk1_old0___2 + *((uint64_t *)(c) + 0);
#line 673
          *(chunk2___2 + 1) = chunk1_old1___2 + *((uint64_t *)(c) + 1);
#line 673
          break;
        }
#line 674
        sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 675
        copy_block(d, (uint8_t const   *)(c));
#line 649
        i ++;
      }
    } else {
#line 680
      i = (size_t )0;
#line 680
      while (i < iter) {
#line 682
        j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 683
        while (1) {
#line 683
          chunk1___3 = (uint64_t *)(long_state + (j ^ 16UL));
#line 683
          chunk2___3 = (uint64_t *)(long_state + (j ^ 32UL));
#line 683
          chunk3___3 = (uint64_t *)(long_state + (j ^ 48UL));
#line 683
          chunk1_old0___3 = *(chunk1___3 + 0);
#line 683
          chunk1_old1___3 = *(chunk1___3 + 1);
#line 683
          *(chunk1___3 + 0) = *(chunk3___3 + 0) + *((uint64_t *)(d) + 0);
#line 683
          *(chunk1___3 + 1) = *(chunk3___3 + 1) + *((uint64_t *)(d) + 1);
#line 683
          *(chunk3___3 + 0) = *(chunk2___3 + 0) + *((uint64_t *)(a) + 0);
#line 683
          *(chunk3___3 + 1) = *(chunk2___3 + 1) + *((uint64_t *)(a) + 1);
#line 683
          *(chunk2___3 + 0) = chunk1_old0___3 + *((uint64_t *)(b) + 0);
#line 683
          *(chunk2___3 + 1) = chunk1_old1___3 + *((uint64_t *)(b) + 1);
#line 683
          break;
        }
#line 684
        SubAndShiftAndMixAddRound((uint32_t *)(c), long_state + j, (uint32_t *)(a));
#line 685
        xor_blocks_dst((uint8_t const   *)(c), (uint8_t const   *)(b), long_state + j);
#line 687
        j = (size_t )(*((uint32_t *)(c) + 0) & mask);
#line 688
        while (1) {
#line 688
          *((uint64_t *)(long_state + j) + 0) ^= division_result ^ (sqrt_result << 32);
#line 688
          dividend___1 = *((uint64_t *)(c) + 1);
#line 688
          divisor___1 = (uint32_t )((*((uint64_t *)(c) + 0) + (sqrt_result << 1)) | 2147483649ULL);
#line 688
          aa___1 = dividend___1 / (uint64_t )divisor___1;
#line 688
          division_result = (aa___1 & 4294967295ULL) + ((dividend___1 - aa___1 * (uint64_t )divisor___1) << 32);
#line 688
          sqrt_input___1 = *((uint64_t *)(c) + 0) + division_result;
#line 688
          while (1) {
#line 688
            tmp___10 = sqrt((double )sqrt_input___1 + 18446744073709551616.0);
#line 688
            sqrt_result = (uint64_t )(tmp___10 * 2.0 - 8589934592.0);
#line 688
            break;
          }
#line 688
          while (1) {
#line 688
            s___1 = sqrt_result >> 1;
#line 688
            b___2 = sqrt_result & 1ULL;
#line 688
            r2___1 = s___1 * (s___1 + b___2) + (sqrt_result << 32);
#line 688
            if (r2___1 + b___2 > sqrt_input___1) {
#line 688
              tmp___11 = -1;
            } else {
#line 688
              tmp___11 = 0;
            }
#line 688
            if (r2___1 + (1ULL << 32) < sqrt_input___1 - s___1) {
#line 688
              tmp___12 = 1;
            } else {
#line 688
              tmp___12 = 0;
            }
#line 688
            sqrt_result += (uint64_t )(tmp___11 + tmp___12);
#line 688
            break;
          }
#line 688
          break;
        }
#line 689
        mul64to128(c, long_state + j, e);
#line 690
        while (1) {
#line 690
          xor_blocks(long_state + (j ^ 16UL), (uint8_t const   *)(e));
#line 690
          xor_blocks(e, (uint8_t const   *)(long_state + (j ^ 32UL)));
#line 690
          break;
        }
#line 691
        while (1) {
#line 691
          chunk1___4 = (uint64_t *)(long_state + (j ^ 16UL));
#line 691
          chunk2___4 = (uint64_t *)(long_state + (j ^ 32UL));
#line 691
          chunk3___4 = (uint64_t *)(long_state + (j ^ 48UL));
#line 691
          chunk1_old0___4 = *(chunk1___4 + 0);
#line 691
          chunk1_old1___4 = *(chunk1___4 + 1);
#line 691
          *(chunk1___4 + 0) = *(chunk3___4 + 0) + *((uint64_t *)(d) + 0);
#line 691
          *(chunk1___4 + 1) = *(chunk3___4 + 1) + *((uint64_t *)(d) + 1);
#line 691
          *(chunk3___4 + 0) = *(chunk2___4 + 0) + *((uint64_t *)(a) + 0);
#line 691
          *(chunk3___4 + 1) = *(chunk2___4 + 1) + *((uint64_t *)(a) + 1);
#line 691
          *(chunk2___4 + 0) = chunk1_old0___4 + *((uint64_t *)(b) + 0);
#line 691
          *(chunk2___4 + 1) = chunk1_old1___4 + *((uint64_t *)(b) + 1);
#line 691
          break;
        }
#line 692
        sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 693
        copy_block(d, (uint8_t const   *)(b));
#line 695
        j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 696
        while (1) {
#line 696
          chunk1___5 = (uint64_t *)(long_state + (j ^ 16UL));
#line 696
          chunk2___5 = (uint64_t *)(long_state + (j ^ 32UL));
#line 696
          chunk3___5 = (uint64_t *)(long_state + (j ^ 48UL));
#line 696
          chunk1_old0___5 = *(chunk1___5 + 0);
#line 696
          chunk1_old1___5 = *(chunk1___5 + 1);
#line 696
          *(chunk1___5 + 0) = *(chunk3___5 + 0) + *((uint64_t *)(d) + 0);
#line 696
          *(chunk1___5 + 1) = *(chunk3___5 + 1) + *((uint64_t *)(d) + 1);
#line 696
          *(chunk3___5 + 0) = *(chunk2___5 + 0) + *((uint64_t *)(a) + 0);
#line 696
          *(chunk3___5 + 1) = *(chunk2___5 + 1) + *((uint64_t *)(a) + 1);
#line 696
          *(chunk2___5 + 0) = chunk1_old0___5 + *((uint64_t *)(c) + 0);
#line 696
          *(chunk2___5 + 1) = chunk1_old1___5 + *((uint64_t *)(c) + 1);
#line 696
          break;
        }
#line 697
        SubAndShiftAndMixAddRound((uint32_t *)(b), long_state + j, (uint32_t *)(a));
#line 698
        xor_blocks_dst((uint8_t const   *)(b), (uint8_t const   *)(c), long_state + j);
#line 700
        j = (size_t )(*((uint32_t *)(b) + 0) & mask);
#line 701
        while (1) {
#line 701
          *((uint64_t *)(long_state + j) + 0) ^= division_result ^ (sqrt_result << 32);
#line 701
          dividend___2 = *((uint64_t *)(b) + 1);
#line 701
          divisor___2 = (uint32_t )((*((uint64_t *)(b) + 0) + (sqrt_result << 1)) | 2147483649ULL);
#line 701
          aa___2 = dividend___2 / (uint64_t )divisor___2;
#line 701
          division_result = (aa___2 & 4294967295ULL) + ((dividend___2 - aa___2 * (uint64_t )divisor___2) << 32);
#line 701
          sqrt_input___2 = *((uint64_t *)(b) + 0) + division_result;
#line 701
          while (1) {
#line 701
            tmp___13 = sqrt((double )sqrt_input___2 + 18446744073709551616.0);
#line 701
            sqrt_result = (uint64_t )(tmp___13 * 2.0 - 8589934592.0);
#line 701
            break;
          }
#line 701
          while (1) {
#line 701
            s___2 = sqrt_result >> 1;
#line 701
            b___3 = sqrt_result & 1ULL;
#line 701
            r2___2 = s___2 * (s___2 + b___3) + (sqrt_result << 32);
#line 701
            if (r2___2 + b___3 > sqrt_input___2) {
#line 701
              tmp___14 = -1;
            } else {
#line 701
              tmp___14 = 0;
            }
#line 701
            if (r2___2 + (1ULL << 32) < sqrt_input___2 - s___2) {
#line 701
              tmp___15 = 1;
            } else {
#line 701
              tmp___15 = 0;
            }
#line 701
            sqrt_result += (uint64_t )(tmp___14 + tmp___15);
#line 701
            break;
          }
#line 701
          break;
        }
#line 702
        mul64to128(b, long_state + j, e);
#line 703
        while (1) {
#line 703
          xor_blocks(long_state + (j ^ 16UL), (uint8_t const   *)(e));
#line 703
          xor_blocks(e, (uint8_t const   *)(long_state + (j ^ 32UL)));
#line 703
          break;
        }
#line 704
        while (1) {
#line 704
          chunk1___6 = (uint64_t *)(long_state + (j ^ 16UL));
#line 704
          chunk2___6 = (uint64_t *)(long_state + (j ^ 32UL));
#line 704
          chunk3___6 = (uint64_t *)(long_state + (j ^ 48UL));
#line 704
          chunk1_old0___6 = *(chunk1___6 + 0);
#line 704
          chunk1_old1___6 = *(chunk1___6 + 1);
#line 704
          *(chunk1___6 + 0) = *(chunk3___6 + 0) + *((uint64_t *)(d) + 0);
#line 704
          *(chunk1___6 + 1) = *(chunk3___6 + 1) + *((uint64_t *)(d) + 1);
#line 704
          *(chunk3___6 + 0) = *(chunk2___6 + 0) + *((uint64_t *)(a) + 0);
#line 704
          *(chunk3___6 + 1) = *(chunk2___6 + 1) + *((uint64_t *)(a) + 1);
#line 704
          *(chunk2___6 + 0) = chunk1_old0___6 + *((uint64_t *)(c) + 0);
#line 704
          *(chunk2___6 + 1) = chunk1_old1___6 + *((uint64_t *)(c) + 1);
#line 704
          break;
        }
#line 705
        sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 706
        copy_block(d, (uint8_t const   *)(c));
#line 680
        i ++;
      }
    }
  } else {
#line 712
    i = (size_t )0;
#line 712
    while (i < iter) {
#line 714
      j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 715
      SubAndShiftAndMixAddRound((uint32_t *)(c), long_state + j, (uint32_t *)(a));
#line 716
      while (1) {
#line 716
        chunk1___7 = (uint64_t *)(long_state + (j ^ 16UL));
#line 716
        chunk2___7 = (uint64_t *)(long_state + (j ^ 32UL));
#line 716
        chunk3___7 = (uint64_t *)(long_state + (j ^ 48UL));
#line 716
        out_chunk = (uint64_t *)(c);
#line 716
        chunk1_old0___7 = *(chunk1___7 + 0);
#line 716
        chunk1_old1___7 = *(chunk1___7 + 1);
#line 716
        chunk2_old0 = *(chunk2___7 + 0);
#line 716
        chunk2_old1 = *(chunk2___7 + 1);
#line 716
        chunk3_old0 = *(chunk3___7 + 0);
#line 716
        chunk3_old1 = *(chunk3___7 + 1);
#line 716
        *(chunk1___7 + 0) = chunk3_old0 + *((uint64_t *)(d) + 0);
#line 716
        *(chunk1___7 + 1) = chunk3_old1 + *((uint64_t *)(d) + 1);
#line 716
        *(chunk3___7 + 0) = chunk2_old0 + *((uint64_t *)(a) + 0);
#line 716
        *(chunk3___7 + 1) = chunk2_old1 + *((uint64_t *)(a) + 1);
#line 716
        *(chunk2___7 + 0) = chunk1_old0___7 + *((uint64_t *)(b) + 0);
#line 716
        *(chunk2___7 + 1) = chunk1_old1___7 + *((uint64_t *)(b) + 1);
#line 716
        chunk1_old0___7 ^= chunk2_old0;
#line 716
        chunk1_old1___7 ^= chunk2_old1;
#line 716
        *(out_chunk + 0) ^= chunk3_old0;
#line 716
        *(out_chunk + 1) ^= chunk3_old1;
#line 716
        *(out_chunk + 0) ^= chunk1_old0___7;
#line 716
        *(out_chunk + 1) ^= chunk1_old1___7;
#line 716
        break;
      }
#line 717
      xor_blocks_dst((uint8_t const   *)(c), (uint8_t const   *)(b), long_state + j);
#line 719
      j = (size_t )(*((uint32_t *)(c) + 0) & mask);
#line 720
      copy_block(f, (uint8_t const   *)(a));
#line 721
      while (1) {
#line 721
        if (variant >= 4) {
#line 721
          memcpy((void * __restrict  )(t), (void const   * __restrict  )(long_state + j),
                 sizeof(uint64_t ));
#line 721
          if (sizeof(v4_reg ) == sizeof(uint32_t )) {
#line 721
            t[0] ^= (unsigned long long )(r[0] + r[1]) | ((uint64_t )(r[2] + r[3]) << 32);
          } else {
#line 721
            t[0] ^= (unsigned long long )((r[0] + r[1]) ^ (r[2] + r[3]));
          }
#line 721
          memcpy((void * __restrict  )(long_state + j), (void const   * __restrict  )(t),
                 sizeof(uint64_t ));
#line 721
          while (1) {
#line 721
            memcpy((void * __restrict  )(r + 4), (void const   * __restrict  )(a),
                   sizeof(v4_reg ));
#line 721
            *(r + 4) = *(r + 4);
#line 721
            break;
          }
#line 721
          while (1) {
#line 721
            memcpy((void * __restrict  )(r + 5), (void const   * __restrict  )((uint64_t *)(a) + 1),
                   sizeof(v4_reg ));
#line 721
            *(r + 5) = *(r + 5);
#line 721
            break;
          }
#line 721
          while (1) {
#line 721
            memcpy((void * __restrict  )(r + 6), (void const   * __restrict  )(b),
                   sizeof(v4_reg ));
#line 721
            *(r + 6) = *(r + 6);
#line 721
            break;
          }
#line 721
          while (1) {
#line 721
            memcpy((void * __restrict  )(r + 7), (void const   * __restrict  )(d),
                   sizeof(v4_reg ));
#line 721
            *(r + 7) = *(r + 7);
#line 721
            break;
          }
#line 721
          while (1) {
#line 721
            memcpy((void * __restrict  )(r + 8), (void const   * __restrict  )((uint64_t *)(d) + 1),
                   sizeof(v4_reg ));
#line 721
            *(r + 8) = *(r + 8);
#line 721
            break;
          }
#line 721
          v4_random_math((struct V4_Instruction  const  *)(code), r);
#line 721
          memcpy((void * __restrict  )(t), (void const   * __restrict  )(a), sizeof(uint64_t ) * 2UL);
#line 721
          if (sizeof(v4_reg ) == sizeof(uint32_t )) {
#line 721
            t[0] ^= (unsigned long long )r[2] | ((uint64_t )r[3] << 32);
#line 721
            t[1] ^= (unsigned long long )r[0] | ((uint64_t )r[1] << 32);
          } else {
#line 721
            t[0] ^= (unsigned long long )(r[2] ^ r[3]);
#line 721
            t[1] ^= (unsigned long long )(r[0] ^ r[1]);
          }
#line 721
          memcpy((void * __restrict  )(a), (void const   * __restrict  )(t), sizeof(uint64_t ) * 2UL);
        }
#line 721
        break;
      }
#line 722
      mul64to128(c, long_state + j, e);
#line 723
      while (1) {
#line 723
        chunk1___8 = (uint64_t *)(long_state + (j ^ 16UL));
#line 723
        chunk2___8 = (uint64_t *)(long_state + (j ^ 32UL));
#line 723
        chunk3___8 = (uint64_t *)(long_state + (j ^ 48UL));
#line 723
        out_chunk___0 = (uint64_t *)(c);
#line 723
        chunk1_old0___8 = *(chunk1___8 + 0);
#line 723
        chunk1_old1___8 = *(chunk1___8 + 1);
#line 723
        chunk2_old0___0 = *(chunk2___8 + 0);
#line 723
        chunk2_old1___0 = *(chunk2___8 + 1);
#line 723
        chunk3_old0___0 = *(chunk3___8 + 0);
#line 723
        chunk3_old1___0 = *(chunk3___8 + 1);
#line 723
        *(chunk1___8 + 0) = chunk3_old0___0 + *((uint64_t *)(d) + 0);
#line 723
        *(chunk1___8 + 1) = chunk3_old1___0 + *((uint64_t *)(d) + 1);
#line 723
        *(chunk3___8 + 0) = chunk2_old0___0 + *((uint64_t *)(f) + 0);
#line 723
        *(chunk3___8 + 1) = chunk2_old1___0 + *((uint64_t *)(f) + 1);
#line 723
        *(chunk2___8 + 0) = chunk1_old0___8 + *((uint64_t *)(b) + 0);
#line 723
        *(chunk2___8 + 1) = chunk1_old1___8 + *((uint64_t *)(b) + 1);
#line 723
        chunk1_old0___8 ^= chunk2_old0___0;
#line 723
        chunk1_old1___8 ^= chunk2_old1___0;
#line 723
        *(out_chunk___0 + 0) ^= chunk3_old0___0;
#line 723
        *(out_chunk___0 + 1) ^= chunk3_old1___0;
#line 723
        *(out_chunk___0 + 0) ^= chunk1_old0___8;
#line 723
        *(out_chunk___0 + 1) ^= chunk1_old1___8;
#line 723
        break;
      }
#line 724
      sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 725
      copy_block(d, (uint8_t const   *)(b));
#line 727
      j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 728
      SubAndShiftAndMixAddRound((uint32_t *)(b), long_state + j, (uint32_t *)(a));
#line 729
      while (1) {
#line 729
        chunk1___9 = (uint64_t *)(long_state + (j ^ 16UL));
#line 729
        chunk2___9 = (uint64_t *)(long_state + (j ^ 32UL));
#line 729
        chunk3___9 = (uint64_t *)(long_state + (j ^ 48UL));
#line 729
        out_chunk___1 = (uint64_t *)(b);
#line 729
        chunk1_old0___9 = *(chunk1___9 + 0);
#line 729
        chunk1_old1___9 = *(chunk1___9 + 1);
#line 729
        chunk2_old0___1 = *(chunk2___9 + 0);
#line 729
        chunk2_old1___1 = *(chunk2___9 + 1);
#line 729
        chunk3_old0___1 = *(chunk3___9 + 0);
#line 729
        chunk3_old1___1 = *(chunk3___9 + 1);
#line 729
        *(chunk1___9 + 0) = chunk3_old0___1 + *((uint64_t *)(d) + 0);
#line 729
        *(chunk1___9 + 1) = chunk3_old1___1 + *((uint64_t *)(d) + 1);
#line 729
        *(chunk3___9 + 0) = chunk2_old0___1 + *((uint64_t *)(a) + 0);
#line 729
        *(chunk3___9 + 1) = chunk2_old1___1 + *((uint64_t *)(a) + 1);
#line 729
        *(chunk2___9 + 0) = chunk1_old0___9 + *((uint64_t *)(c) + 0);
#line 729
        *(chunk2___9 + 1) = chunk1_old1___9 + *((uint64_t *)(c) + 1);
#line 729
        chunk1_old0___9 ^= chunk2_old0___1;
#line 729
        chunk1_old1___9 ^= chunk2_old1___1;
#line 729
        *(out_chunk___1 + 0) ^= chunk3_old0___1;
#line 729
        *(out_chunk___1 + 1) ^= chunk3_old1___1;
#line 729
        *(out_chunk___1 + 0) ^= chunk1_old0___9;
#line 729
        *(out_chunk___1 + 1) ^= chunk1_old1___9;
#line 729
        break;
      }
#line 730
      xor_blocks_dst((uint8_t const   *)(b), (uint8_t const   *)(c), long_state + j);
#line 732
      j = (size_t )(*((uint32_t *)(b) + 0) & mask);
#line 733
      copy_block(f, (uint8_t const   *)(a));
#line 734
      while (1) {
#line 734
        if (variant >= 4) {
#line 734
          memcpy((void * __restrict  )(t___0), (void const   * __restrict  )(long_state + j),
                 sizeof(uint64_t ));
#line 734
          if (sizeof(v4_reg ) == sizeof(uint32_t )) {
#line 734
            t___0[0] ^= (unsigned long long )(r[0] + r[1]) | ((uint64_t )(r[2] + r[3]) << 32);
          } else {
#line 734
            t___0[0] ^= (unsigned long long )((r[0] + r[1]) ^ (r[2] + r[3]));
          }
#line 734
          memcpy((void * __restrict  )(long_state + j), (void const   * __restrict  )(t___0),
                 sizeof(uint64_t ));
#line 734
          while (1) {
#line 734
            memcpy((void * __restrict  )(r + 4), (void const   * __restrict  )(a),
                   sizeof(v4_reg ));
#line 734
            *(r + 4) = *(r + 4);
#line 734
            break;
          }
#line 734
          while (1) {
#line 734
            memcpy((void * __restrict  )(r + 5), (void const   * __restrict  )((uint64_t *)(a) + 1),
                   sizeof(v4_reg ));
#line 734
            *(r + 5) = *(r + 5);
#line 734
            break;
          }
#line 734
          while (1) {
#line 734
            memcpy((void * __restrict  )(r + 6), (void const   * __restrict  )(c),
                   sizeof(v4_reg ));
#line 734
            *(r + 6) = *(r + 6);
#line 734
            break;
          }
#line 734
          while (1) {
#line 734
            memcpy((void * __restrict  )(r + 7), (void const   * __restrict  )(d),
                   sizeof(v4_reg ));
#line 734
            *(r + 7) = *(r + 7);
#line 734
            break;
          }
#line 734
          while (1) {
#line 734
            memcpy((void * __restrict  )(r + 8), (void const   * __restrict  )((uint64_t *)(d) + 1),
                   sizeof(v4_reg ));
#line 734
            *(r + 8) = *(r + 8);
#line 734
            break;
          }
#line 734
          v4_random_math((struct V4_Instruction  const  *)(code), r);
#line 734
          memcpy((void * __restrict  )(t___0), (void const   * __restrict  )(a), sizeof(uint64_t ) * 2UL);
#line 734
          if (sizeof(v4_reg ) == sizeof(uint32_t )) {
#line 734
            t___0[0] ^= (unsigned long long )r[2] | ((uint64_t )r[3] << 32);
#line 734
            t___0[1] ^= (unsigned long long )r[0] | ((uint64_t )r[1] << 32);
          } else {
#line 734
            t___0[0] ^= (unsigned long long )(r[2] ^ r[3]);
#line 734
            t___0[1] ^= (unsigned long long )(r[0] ^ r[1]);
          }
#line 734
          memcpy((void * __restrict  )(a), (void const   * __restrict  )(t___0), sizeof(uint64_t ) * 2UL);
        }
#line 734
        break;
      }
#line 735
      mul64to128(b, long_state + j, e);
#line 736
      while (1) {
#line 736
        chunk1___10 = (uint64_t *)(long_state + (j ^ 16UL));
#line 736
        chunk2___10 = (uint64_t *)(long_state + (j ^ 32UL));
#line 736
        chunk3___10 = (uint64_t *)(long_state + (j ^ 48UL));
#line 736
        out_chunk___2 = (uint64_t *)(b);
#line 736
        chunk1_old0___10 = *(chunk1___10 + 0);
#line 736
        chunk1_old1___10 = *(chunk1___10 + 1);
#line 736
        chunk2_old0___2 = *(chunk2___10 + 0);
#line 736
        chunk2_old1___2 = *(chunk2___10 + 1);
#line 736
        chunk3_old0___2 = *(chunk3___10 + 0);
#line 736
        chunk3_old1___2 = *(chunk3___10 + 1);
#line 736
        *(chunk1___10 + 0) = chunk3_old0___2 + *((uint64_t *)(d) + 0);
#line 736
        *(chunk1___10 + 1) = chunk3_old1___2 + *((uint64_t *)(d) + 1);
#line 736
        *(chunk3___10 + 0) = chunk2_old0___2 + *((uint64_t *)(f) + 0);
#line 736
        *(chunk3___10 + 1) = chunk2_old1___2 + *((uint64_t *)(f) + 1);
#line 736
        *(chunk2___10 + 0) = chunk1_old0___10 + *((uint64_t *)(c) + 0);
#line 736
        *(chunk2___10 + 1) = chunk1_old1___10 + *((uint64_t *)(c) + 1);
#line 736
        chunk1_old0___10 ^= chunk2_old0___2;
#line 736
        chunk1_old1___10 ^= chunk2_old1___2;
#line 736
        *(out_chunk___2 + 0) ^= chunk3_old0___2;
#line 736
        *(out_chunk___2 + 1) ^= chunk3_old1___2;
#line 736
        *(out_chunk___2 + 0) ^= chunk1_old0___10;
#line 736
        *(out_chunk___2 + 1) ^= chunk1_old1___10;
#line 736
        break;
      }
#line 737
      sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 738
      copy_block(d, (uint8_t const   *)(c));
#line 712
      i ++;
    }
  }
#line 742
  memcpy((void * __restrict  )(text), (void const   * __restrict  )(state.__annonCompField1.init),
         (size_t )128);
#line 744
  oaes_free((OAES_CTX **)(& aes_ctx));
#line 745
  tmp___16 = oaes_alloc();
#line 745
  aes_ctx = (oaes_ctx *)tmp___16;
#line 747
  oaes_key_import_data((OAES_CTX *)aes_ctx, (uint8_t const   *)(& state.hs.b[32]),
                       (size_t )32);
#line 749
  i = (size_t )0;
#line 749
  while (i < memory) {
#line 751
    xor_blocks(& text[0], (uint8_t const   *)(long_state + i));
#line 752
    xor_blocks(& text[16], (uint8_t const   *)(long_state + (i + 16UL)));
#line 753
    xor_blocks(& text[32], (uint8_t const   *)(long_state + (i + 32UL)));
#line 754
    xor_blocks(& text[48], (uint8_t const   *)(long_state + (i + 48UL)));
#line 755
    xor_blocks(& text[64], (uint8_t const   *)(long_state + (i + 64UL)));
#line 756
    xor_blocks(& text[80], (uint8_t const   *)(long_state + (i + 80UL)));
#line 757
    xor_blocks(& text[96], (uint8_t const   *)(long_state + (i + 96UL)));
#line 758
    xor_blocks(& text[112], (uint8_t const   *)(long_state + (i + 112UL)));
#line 760
    j = (size_t )0;
#line 760
    while (j < 10UL) {
#line 762
      ptr___0 = (uint32_t *)((aes_ctx->key)->exp_data + (j << 4));
#line 764
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[0]), ptr___0);
#line 765
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[16]), ptr___0);
#line 766
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[32]), ptr___0);
#line 767
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[48]), ptr___0);
#line 768
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[64]), ptr___0);
#line 769
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[80]), ptr___0);
#line 770
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[96]), ptr___0);
#line 771
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[112]), ptr___0);
#line 760
      j ++;
    }
#line 749
    i += 128UL;
  }
#line 775
  memcpy((void * __restrict  )(state.__annonCompField1.init), (void const   * __restrict  )(text),
         (size_t )128);
#line 776
  keccakf((uint64_t *)((uint64_t *)(state.hs.b)), 24);
#line 777
  (*(extra_hashes[(int )state.hs.b[0] & 3]))((void const   *)(& state), (size_t )200,
                                             (char *)output___0);
#line 778
  oaes_free((OAES_CTX **)(& aes_ctx));
#line 779
  free((void *)long_state);
#line 780
  return;
}
}
#line 782 "cryptonight.c"
void cryptonight(void *output___0 , void const   *input , size_t len , int algo ,
                 int variant , int height ) 
{ 


  {
#line 784
  cryptonight_hash_ctx(output___0, input, len, algo, variant, height);
#line 785
  return;
}
}
#line 1 "cil-NZpT1hwT.o"
#pragma merger("0","/tmp/cil-rN1NwyQj.i","")
#line 6 "./groestl_tables.h"
uint32_t const   T[512]  = 
#line 6 "./groestl_tables.h"
  {      (uint32_t const   )2784244422U,      (uint32_t const   )3332741108U,      (uint32_t const   )2224517112U,      (uint32_t const   )4169460631U, 
        (uint32_t const   )2578472686U,      (uint32_t const   )4003055536U,      (uint32_t const   )2374793974U,      (uint32_t const   )4136499084U, 
        (uint32_t const   )219670783,      (uint32_t const   )4279100695U,      (uint32_t const   )3185314518U,      (uint32_t const   )3602757596U, 
        (uint32_t const   )2982680286U,      (uint32_t const   )3736184776U,      (uint32_t const   )1425829265,      (uint32_t const   )2438216188U, 
        (uint32_t const   )1357942880,      (uint32_t const   )1615905008,      (uint32_t const   )50661122,      (uint32_t const   )33752069, 
        (uint32_t const   )2850041550U,      (uint32_t const   )3467216864U,      (uint32_t const   )2106052950,      (uint32_t const   )1451076743, 
        (uint32_t const   )422300903,      (uint32_t const   )3877229867U,      (uint32_t const   )1655051189,      (uint32_t const   )3043127718U, 
        (uint32_t const   )3862002765U,      (uint32_t const   )1306958385,      (uint32_t const   )2595576300U,      (uint32_t const   )3969565621U, 
        (uint32_t const   )1171210383,      (uint32_t const   )2403665359U,      (uint32_t const   )2646385439U,      (uint32_t const   )530398908, 
        (uint32_t const   )1086343561,      (uint32_t const   )2302675392U,      (uint32_t const   )2274519290U,      (uint32_t const   )4203212690U, 
        (uint32_t const   )356503791,      (uint32_t const   )4011181375U,      (uint32_t const   )3945174194U,      (uint32_t const   )3001777958U, 
        (uint32_t const   )3376467598U,      (uint32_t const   )2395539264U,      (uint32_t const   )186509051,      (uint32_t const   )4211862813U, 
        (uint32_t const   )3962531393U,      (uint32_t const   )1106018863,      (uint32_t const   )1739135667,      (uint32_t const   )3009904041U, 
        (uint32_t const   )4246487903U,      (uint32_t const   )1610464796,      (uint32_t const   )3928318021U,      (uint32_t const   )1172998693, 
        (uint32_t const   )3218798883U,      (uint32_t const   )599738074,      (uint32_t const   )4144124243U,      (uint32_t const   )1408738818, 
        (uint32_t const   )2527151588U,      (uint32_t const   )3835089825U,      (uint32_t const   )1542289051,      (uint32_t const   )2606444013U, 
        (uint32_t const   )3260885109U,      (uint32_t const   )1975708253,      (uint32_t const   )472172001,      (uint32_t const   )3776764196U, 
        (uint32_t const   )2934559805U,      (uint32_t const   )1034844905,      (uint32_t const   )1790898764,      (uint32_t const   )1282054334, 
        (uint32_t const   )1525580396,      (uint32_t const   )1817893102,      (uint32_t const   )1103347070,      (uint32_t const   )2118253763, 
        (uint32_t const   )34010101,      (uint32_t const   )4110610694U,      (uint32_t const   )1339118211,      (uint32_t const   )2203000273U, 
        (uint32_t const   )1558482024,      (uint32_t const   )1750913252,      (uint32_t const   )4094121553U,      (uint32_t const   )1374986759, 
        (uint32_t const   )878480849,      (uint32_t const   )3509893468U,      (uint32_t const   )135848441,      (uint32_t const   )4178110744U, 
        (uint32_t const   )2477673698U,      (uint32_t const   )3801341870U,      (uint32_t const   )1939160747,      (uint32_t const   )2876460437U, 
        (uint32_t const   )1408604002,      (uint32_t const   )1649657077,      (uint32_t const   )1061251882,      (uint32_t const   )708793409, 
        (uint32_t const   )202644488,      (uint32_t const   )135008276,      (uint32_t const   )1391879061,      (uint32_t const   )2505191926U, 
        (uint32_t const   )1706027334,      (uint32_t const   )1181060271,      (uint32_t const   )1591902109,      (uint32_t const   )2640191970U, 
        (uint32_t const   )678971440,      (uint32_t const   )807952504,      (uint32_t const   )2717437751U,      (uint32_t const   )933326584, 
        (uint32_t const   )252779274,      (uint32_t const   )168760337,      (uint32_t const   )3049581359U,      (uint32_t const   )800415428, 
        (uint32_t const   )152769806,      (uint32_t const   )235478043,      (uint32_t const   )911900196,      (uint32_t const   )607537242, 
        (uint32_t const   )2612440347U,      (uint32_t const   )463156918,      (uint32_t const   )1028102367,      (uint32_t const   )3745359175U, 
        (uint32_t const   )644523981,      (uint32_t const   )3441852778U,      (uint32_t const   )1773925710,      (uint32_t const   )1315544251, 
        (uint32_t const   )3444323199U,      (uint32_t const   )2144206412,      (uint32_t const   )2679787754U,      (uint32_t const   )3936341946U, 
        (uint32_t const   )455950098,      (uint32_t const   )303768621,      (uint32_t const   )2662966301U,      (uint32_t const   )496908985, 
        (uint32_t const   )1956430936,      (uint32_t const   )1484042396,      (uint32_t const   )779241012,      (uint32_t const   )875456626, 
        (uint32_t const   )762790198,      (uint32_t const   )908946551,      (uint32_t const   )2999783900U,      (uint32_t const   )3702694861U, 
        (uint32_t const   )3995704756U,      (uint32_t const   )3035525929U,      (uint32_t const   )4212542811U,      (uint32_t const   )1543222806, 
        (uint32_t const   )4127303076U,      (uint32_t const   )2767606529U,      (uint32_t const   )1305977206,      (uint32_t const   )1984818391, 
        (uint32_t const   )1638077623,      (uint32_t const   )3076617635U,      (uint32_t const   )3460904061U,      (uint32_t const   )2110716489, 
        (uint32_t const   )2072895314,      (uint32_t const   )1383834765,      (uint32_t const   )1044553693,      (uint32_t const   )3711869250U, 
        (uint32_t const   )1905511774,      (uint32_t const   )1584512147,      (uint32_t const   )2544021779U,      (uint32_t const   )328672930, 
        (uint32_t const   )4110721702U,      (uint32_t const   )2801096452U,      (uint32_t const   )1756889529,      (uint32_t const   )3110627768U, 
        (uint32_t const   )0,      (uint32_t const   )0,      (uint32_t const   )745846209,      (uint32_t const   )3240925556U, 
        (uint32_t const   )1621155904,      (uint32_t const   )1080066208,      (uint32_t const   )522306275,      (uint32_t const   )3810516257U, 
        (uint32_t const   )3359849081U,      (uint32_t const   )2043212355,      (uint32_t const   )3979123382U,      (uint32_t const   )3069015852U, 
        (uint32_t const   )3201895892U,      (uint32_t const   )3569267673U,      (uint32_t const   )1187661709,      (uint32_t const   )2370175434U, 
        (uint32_t const   )3648001895U,      (uint32_t const   )1742327408,      (uint32_t const   )1272819570,      (uint32_t const   )1917576413, 
        (uint32_t const   )3732532628U,      (uint32_t const   )2497590137U,      (uint32_t const   )3563585432U,      (uint32_t const   )2564041575U, 
        (uint32_t const   )3894645680U,      (uint32_t const   )2968025891U,      (uint32_t const   )1256086405,      (uint32_t const   )2236223966U, 
        (uint32_t const   )1807550139,      (uint32_t const   )3144379837U,      (uint32_t const   )712948677,      (uint32_t const   )3307901310U, 
        (uint32_t const   )3845421903U,      (uint32_t const   )1340448308,      (uint32_t const   )372955117,      (uint32_t const   )3977691450U, 
        (uint32_t const   )3310670470U,      (uint32_t const   )2261063508U,      (uint32_t const   )3613587610U,      (uint32_t const   )2597793634U, 
        (uint32_t const   )1442814310,      (uint32_t const   )1716899071,      (uint32_t const   )2494019089U,      (uint32_t const   )294920871, 
        (uint32_t const   )3477782666U,      (uint32_t const   )2328825674U,      (uint32_t const   )271636969,      (uint32_t const   )3910191408U, 
        (uint32_t const   )101322244,      (uint32_t const   )67504138,      (uint32_t const   )2174248702U,      (uint32_t const   )4269926296U, 
        (uint32_t const   )4027296672U,      (uint32_t const   )2700106507U,      (uint32_t const   )1154266232,      (uint32_t const   )2017784012, 
        (uint32_t const   )3134582821U,      (uint32_t const   )632965845,      (uint32_t const   )3812521291U,      (uint32_t const   )1273206334, 
        (uint32_t const   )4077825186U,      (uint32_t const   )2733858574U,      (uint32_t const   )4263068765U,      (uint32_t const   )1576974873, 
        (uint32_t const   )3227245440U,      (uint32_t const   )2160073563U,      (uint32_t const   )2324004869U,      (uint32_t const   )92932741, 
        (uint32_t const   )2917978943U,      (uint32_t const   )1068334828,      (uint32_t const   )3168796193U,      (uint32_t const   )565986015, 
        (uint32_t const   )1222158448,      (uint32_t const   )1883824344,      (uint32_t const   )67960305,      (uint32_t const   )4043634956U, 
        (uint32_t const   )3749321059U,      (uint32_t const   )1675609722,      (uint32_t const   )3243782007U,      (uint32_t const   )2009198168, 
        (uint32_t const   )1973366959,      (uint32_t const   )2943698335U,      (uint32_t const   )1671817026,      (uint32_t const   )1113818277, 
        (uint32_t const   )810577952,      (uint32_t const   )540033104,      (uint32_t const   )439274469,      (uint32_t const   )3843739950U, 
        (uint32_t const   )236122109,      (uint32_t const   )4245610770U,      (uint32_t const   )1840711871,      (uint32_t const   )3211617719U, 
        (uint32_t const   )1288983937,      (uint32_t const   )2169248212U,      (uint32_t const   )339485720,      (uint32_t const   )403976252, 
        (uint32_t const   )895449382,      (uint32_t const   )641027167,      (uint32_t const   )795980483,      (uint32_t const   )3274677617U, 
        (uint32_t const   )3778578110U,      (uint32_t const   )3202443064U,      (uint32_t const   )2734540853U,      (uint32_t const   )899836669, 
        (uint32_t const   )3427780488U,      (uint32_t const   )2295073615U,      (uint32_t const   )961242414,      (uint32_t const   )775511115, 
        (uint32_t const   )1475963539,      (uint32_t const   )2471968249U,      (uint32_t const   )4060960853U,      (uint32_t const   )1441966605, 
        (uint32_t const   )2191352316U,      (uint32_t const   )4236436381U,      (uint32_t const   )1204401018,      (uint32_t const   )2051536073, 
        (uint32_t const   )2901354440U,      (uint32_t const   )3366751215U,      (uint32_t const   )3878848698U,      (uint32_t const   )3135729458U, 
        (uint32_t const   )729632562,      (uint32_t const   )841704573,      (uint32_t const   )2510570214U,      (uint32_t const   )3868579748U, 
        (uint32_t const   )2700819392U,      (uint32_t const   )3231751163U,      (uint32_t const   )2561911321U,      (uint32_t const   )429404851, 
        (uint32_t const   )3513317022U,      (uint32_t const   )2664507240U,      (uint32_t const   )2139169443,      (uint32_t const   )2743033217U, 
        (uint32_t const   )1722478148,      (uint32_t const   )1147570346,      (uint32_t const   )2122503764,      (uint32_t const   )1417586818, 
        (uint32_t const   )2884033851U,      (uint32_t const   )1001092838,      (uint32_t const   )2208208139U,      (uint32_t const   )193140382, 
        (uint32_t const   )3393571212U,      (uint32_t const   )2362049349U,      (uint32_t const   )695975111,      (uint32_t const   )3341391227U, 
        (uint32_t const   )3547202923U,      (uint32_t const   )1809045102,      (uint32_t const   )1011117096,      (uint32_t const   )675041348, 
        (uint32_t const   )2039164071,      (uint32_t const   )2809746827U,      (uint32_t const   )3795681724U,      (uint32_t const   )3168953149U, 
        (uint32_t const   )489107734,      (uint32_t const   )371010599,      (uint32_t const   )1989818285,      (uint32_t const   )2910208410U, 
        (uint32_t const   )994940635,      (uint32_t const   )3678121293U,      (uint32_t const   )1459265124,      (uint32_t const   )1683409146, 
        (uint32_t const   )1322428020,      (uint32_t const   )1951328466,      (uint32_t const   )505558548,      (uint32_t const   )337520674, 
        (uint32_t const   )3682002066U,      (uint32_t const   )2463842166U,      (uint32_t const   )169742860,      (uint32_t const   )201988126, 
        (uint32_t const   )1823800392,      (uint32_t const   )1215074484,      (uint32_t const   )3828846520U,      (uint32_t const   )3101977399U, 
        (uint32_t const   )1575450783,      (uint32_t const   )2673681895U,      (uint32_t const   )1857163197,      (uint32_t const   )3178127794U, 
        (uint32_t const   )4012534083U,      (uint32_t const   )1139770922,      (uint32_t const   )2800825796U,      (uint32_t const   )3299251185U, 
        (uint32_t const   )2833504825U,      (uint32_t const   )967340771,      (uint32_t const   )2767701553U,      (uint32_t const   )832856823, 
        (uint32_t const   )928615123,      (uint32_t const   )3543645529U,      (uint32_t const   )2340844786U,      (uint32_t const   )4069261190U, 
        (uint32_t const   )844530645,      (uint32_t const   )3576869206U,      (uint32_t const   )1137004171,      (uint32_t const   )2336427461U, 
        (uint32_t const   )1508607342,      (uint32_t const   )1851383019,      (uint32_t const   )3082950874U,      (uint32_t const   )3669471170U, 
        (uint32_t const   )2358218241U,      (uint32_t const   )25952911,      (uint32_t const   )1689001393,      (uint32_t const   )2976151980U, 
        (uint32_t const   )3530420636U,      (uint32_t const   )2631017325U,      (uint32_t const   )3761992265U,      (uint32_t const   )1239454267, 
        (uint32_t const   )3032948696U,      (uint32_t const   )3635719111U,      (uint32_t const   )4195727788U,      (uint32_t const   )2902082325U, 
        (uint32_t const   )118094579,      (uint32_t const   )4077387017U,      (uint32_t const   )628072655,      (uint32_t const   )3475342703U, 
        (uint32_t const   )2951356618U,      (uint32_t const   )3400503274U,      (uint32_t const   )2391375348U,      (uint32_t const   )4103009161U, 
        (uint32_t const   )3911214919U,      (uint32_t const   )1206488608,      (uint32_t const   )405288976,      (uint32_t const   )270016552, 
        (uint32_t const   )3580103535U,      (uint32_t const   )1876287076,      (uint32_t const   )2290316272U,      (uint32_t const   )4035509123U, 
        (uint32_t const   )1873935178,      (uint32_t const   )1248826545,      (uint32_t const   )1922484828,      (uint32_t const   )1551022230, 
        (uint32_t const   )611079224,      (uint32_t const   )941912172,      (uint32_t const   )4043857751U,      (uint32_t const   )1475456520, 
        (uint32_t const   )3344048499U,      (uint32_t const   )1942480466,      (uint32_t const   )1374905495,      (uint32_t const   )2538681843U, 
        (uint32_t const   )593866443,      (uint32_t const   )3408104805U,      (uint32_t const   )2089035169,      (uint32_t const   )2709281156U, 
        (uint32_t const   )2629785576U,      (uint32_t const   )3902589887U,      (uint32_t const   )560160062,      (uint32_t const   )1042381923, 
        (uint32_t const   )3715951254U,      (uint32_t const   )2531080060U,      (uint32_t const   )3699318369U,      (uint32_t const   )1641857663, 
        (uint32_t const   )2257689613U,      (uint32_t const   )226892433,      (uint32_t const   )2241108751U,      (uint32_t const   )260382356, 
        (uint32_t const   )2427145184U,      (uint32_t const   )3767589803U,      (uint32_t const   )1120320124,      (uint32_t const   )2084763846, 
        (uint32_t const   )3294045809U,      (uint32_t const   )1908728407,      (uint32_t const   )2867145164U,      (uint32_t const   )3433726949U, 
        (uint32_t const   )3631473552U,      (uint32_t const   )2430090099U,      (uint32_t const   )84871430,      (uint32_t const   )100994063, 
        (uint32_t const   )17036535,      (uint32_t const   )4144100611U,      (uint32_t const   )305539612,      (uint32_t const   )470956086, 
        (uint32_t const   )2751347906U,      (uint32_t const   )3265503230U,      (uint32_t const   )1608616810,      (uint32_t const   )1784665313, 
        (uint32_t const   )4178624174U,      (uint32_t const   )2935572240U,      (uint32_t const   )3496673897U,      (uint32_t const   )1775293035, 
        (uint32_t const   )2443755287U,      (uint32_t const   )395390632,      (uint32_t const   )1491628441,      (uint32_t const   )2572691944U, 
        (uint32_t const   )661214010,      (uint32_t const   )975664233,      (uint32_t const   )3117479719U,      (uint32_t const   )666455760, 
        (uint32_t const   )944280025,      (uint32_t const   )3644369224U,      (uint32_t const   )322297579,      (uint32_t const   )3943943477U, 
        (uint32_t const   )3016680747U,      (uint32_t const   )733173454,      (uint32_t const   )861239074,      (uint32_t const   )573785173, 
        (uint32_t const   )3151365330U,      (uint32_t const   )3535519702U,      (uint32_t const   )1888500137,      (uint32_t const   )2842708368U, 
        (uint32_t const   )2306901767U,      (uint32_t const   )126422656,      (uint32_t const   )2817704243U,      (uint32_t const   )866608882, 
        (uint32_t const   )3066162221U,      (uint32_t const   )766925505,      (uint32_t const   )577133116,      (uint32_t const   )1008892006, 
        (uint32_t const   )2460858389U,      (uint32_t const   )361900717,      (uint32_t const   )543205833,      (uint32_t const   )3374352736U, 
        (uint32_t const   )1239112839,      (uint32_t const   )2269713883U,      (uint32_t const   )4279939242U,      (uint32_t const   )2868858650U, 
        (uint32_t const   )2022234192,      (uint32_t const   )1350082696,      (uint32_t const   )2056137637,      (uint32_t const   )2776256910U, 
        (uint32_t const   )2408220931U,      (uint32_t const   )59704970,      (uint32_t const   )4162013785U,      (uint32_t const   )1509470739, 
        (uint32_t const   )2157679113U,      (uint32_t const   )159388315,      (uint32_t const   )389620506,      (uint32_t const   )437728313, 
        (uint32_t const   )3665104997U,      (uint32_t const   )1708837493,      (uint32_t const   )827557079,      (uint32_t const   )3610359123U, 
        (uint32_t const   )3327251844U,      (uint32_t const   )2227573585U,      (uint32_t const   )3100836816U,      (uint32_t const   )3501767635U, 
        (uint32_t const   )3277773954U,      (uint32_t const   )2193825630U,      (uint32_t const   )2966151721U,      (uint32_t const   )699421387, 
        (uint32_t const   )2006565722,      (uint32_t const   )1517794457,      (uint32_t const   )288566558,      (uint32_t const   )504446003, 
        (uint32_t const   )3410378107U,      (uint32_t const   )2076964422,      (uint32_t const   )4229937064U,      (uint32_t const   )2835106591U, 
        (uint32_t const   )3596684397U,      (uint32_t const   )1842797153,      (uint32_t const   )978215468,      (uint32_t const   )742021198};
#line 51 "groestl.c"
uint8_t const   shift_Values[2][8]  = { {        (uint8_t const   )0,        (uint8_t const   )1,        (uint8_t const   )2,        (uint8_t const   )3, 
            (uint8_t const   )4,        (uint8_t const   )5,        (uint8_t const   )6,        (uint8_t const   )7}, 
   {        (uint8_t const   )1,        (uint8_t const   )3,        (uint8_t const   )5,        (uint8_t const   )7, 
            (uint8_t const   )0,        (uint8_t const   )2,        (uint8_t const   )4,        (uint8_t const   )6}};
#line 53 "groestl.c"
uint8_t const   indices_cyclic[15]  = 
#line 53
  {      (uint8_t const   )0,      (uint8_t const   )1,      (uint8_t const   )2,      (uint8_t const   )3, 
        (uint8_t const   )4,      (uint8_t const   )5,      (uint8_t const   )6,      (uint8_t const   )7, 
        (uint8_t const   )0,      (uint8_t const   )1,      (uint8_t const   )2,      (uint8_t const   )3, 
        (uint8_t const   )4,      (uint8_t const   )5,      (uint8_t const   )6};
#line 101 "groestl.c"
static void RND512P(uint8_t *x , uint32_t *y , uint32_t r___0 ) 
{ 
  uint32_t temp_v1 ;
  uint32_t temp_v2 ;
  uint32_t temp_upper_value ;
  uint32_t temp_lower_value ;
  uint32_t temp ;
  uint32_t *x32 ;

  {
#line 103
  x32 = (uint32_t *)x;
#line 104
  *(x32 + 0) ^= r___0;
#line 105
  *(x32 + 2) ^= 16U ^ r___0;
#line 106
  *(x32 + 4) ^= 32U ^ r___0;
#line 107
  *(x32 + 6) ^= 48U ^ r___0;
#line 108
  *(x32 + 8) ^= 64U ^ r___0;
#line 109
  *(x32 + 10) ^= 80U ^ r___0;
#line 110
  *(x32 + 12) ^= 96U ^ r___0;
#line 111
  *(x32 + 14) ^= 112U ^ r___0;
#line 112
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 0)];
#line 112
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 0) + 1U];
#line 112
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 9)];
#line 112
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 9) + 1U];
#line 112
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 112
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 112
  temp_v1 = temp;
#line 112
  temp_upper_value ^= temp_v1;
#line 112
  temp_lower_value ^= temp_v2;
#line 112
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 18)];
#line 112
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 18) + 1U];
#line 112
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 112
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 112
  temp_v1 = temp;
#line 112
  temp_upper_value ^= temp_v1;
#line 112
  temp_lower_value ^= temp_v2;
#line 112
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 27)];
#line 112
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 27) + 1U];
#line 112
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 112
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 112
  temp_v1 = temp;
#line 112
  temp_upper_value ^= temp_v1;
#line 112
  temp_lower_value ^= temp_v2;
#line 112
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 36)];
#line 112
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 36) + 1U];
#line 112
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 45)];
#line 112
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 45) + 1U];
#line 112
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 112
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 112
  temp_v1 = temp;
#line 112
  temp_lower_value ^= temp_v1;
#line 112
  temp_upper_value ^= temp_v2;
#line 112
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 54)];
#line 112
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 54) + 1U];
#line 112
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 112
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 112
  temp_v1 = temp;
#line 112
  temp_lower_value ^= temp_v1;
#line 112
  temp_upper_value ^= temp_v2;
#line 112
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 63)];
#line 112
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 63) + 1U];
#line 112
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 112
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 112
  temp_v1 = temp;
#line 112
  temp_lower_value ^= temp_v1;
#line 112
  temp_upper_value ^= temp_v2;
#line 112
  *(y + 0) = temp_upper_value;
#line 112
  *(y + 1) = temp_lower_value;
#line 113
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 8)];
#line 113
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 8) + 1U];
#line 113
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 17)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 17) + 1U];
#line 113
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 113
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 113
  temp_v1 = temp;
#line 113
  temp_upper_value ^= temp_v1;
#line 113
  temp_lower_value ^= temp_v2;
#line 113
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 26)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 26) + 1U];
#line 113
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 113
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 113
  temp_v1 = temp;
#line 113
  temp_upper_value ^= temp_v1;
#line 113
  temp_lower_value ^= temp_v2;
#line 113
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 35)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 35) + 1U];
#line 113
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 113
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 113
  temp_v1 = temp;
#line 113
  temp_upper_value ^= temp_v1;
#line 113
  temp_lower_value ^= temp_v2;
#line 113
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 44)];
#line 113
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 44) + 1U];
#line 113
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 53)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 53) + 1U];
#line 113
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 113
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 113
  temp_v1 = temp;
#line 113
  temp_lower_value ^= temp_v1;
#line 113
  temp_upper_value ^= temp_v2;
#line 113
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 62)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 62) + 1U];
#line 113
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 113
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 113
  temp_v1 = temp;
#line 113
  temp_lower_value ^= temp_v1;
#line 113
  temp_upper_value ^= temp_v2;
#line 113
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 7)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 7) + 1U];
#line 113
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 113
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 113
  temp_v1 = temp;
#line 113
  temp_lower_value ^= temp_v1;
#line 113
  temp_upper_value ^= temp_v2;
#line 113
  *(y + 2) = temp_upper_value;
#line 113
  *(y + 3) = temp_lower_value;
#line 114
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 16)];
#line 114
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 16) + 1U];
#line 114
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 25)];
#line 114
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 25) + 1U];
#line 114
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 114
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 114
  temp_v1 = temp;
#line 114
  temp_upper_value ^= temp_v1;
#line 114
  temp_lower_value ^= temp_v2;
#line 114
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 34)];
#line 114
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 34) + 1U];
#line 114
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 114
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 114
  temp_v1 = temp;
#line 114
  temp_upper_value ^= temp_v1;
#line 114
  temp_lower_value ^= temp_v2;
#line 114
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 43)];
#line 114
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 43) + 1U];
#line 114
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 114
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 114
  temp_v1 = temp;
#line 114
  temp_upper_value ^= temp_v1;
#line 114
  temp_lower_value ^= temp_v2;
#line 114
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 52)];
#line 114
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 52) + 1U];
#line 114
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 61)];
#line 114
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 61) + 1U];
#line 114
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 114
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 114
  temp_v1 = temp;
#line 114
  temp_lower_value ^= temp_v1;
#line 114
  temp_upper_value ^= temp_v2;
#line 114
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 6)];
#line 114
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 6) + 1U];
#line 114
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 114
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 114
  temp_v1 = temp;
#line 114
  temp_lower_value ^= temp_v1;
#line 114
  temp_upper_value ^= temp_v2;
#line 114
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 15)];
#line 114
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 15) + 1U];
#line 114
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 114
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 114
  temp_v1 = temp;
#line 114
  temp_lower_value ^= temp_v1;
#line 114
  temp_upper_value ^= temp_v2;
#line 114
  *(y + 4) = temp_upper_value;
#line 114
  *(y + 5) = temp_lower_value;
#line 115
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 24)];
#line 115
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 24) + 1U];
#line 115
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 33)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 33) + 1U];
#line 115
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 115
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 115
  temp_v1 = temp;
#line 115
  temp_upper_value ^= temp_v1;
#line 115
  temp_lower_value ^= temp_v2;
#line 115
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 42)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 42) + 1U];
#line 115
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 115
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 115
  temp_v1 = temp;
#line 115
  temp_upper_value ^= temp_v1;
#line 115
  temp_lower_value ^= temp_v2;
#line 115
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 51)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 51) + 1U];
#line 115
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 115
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 115
  temp_v1 = temp;
#line 115
  temp_upper_value ^= temp_v1;
#line 115
  temp_lower_value ^= temp_v2;
#line 115
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 60)];
#line 115
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 60) + 1U];
#line 115
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 5)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 5) + 1U];
#line 115
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 115
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 115
  temp_v1 = temp;
#line 115
  temp_lower_value ^= temp_v1;
#line 115
  temp_upper_value ^= temp_v2;
#line 115
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 14)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 14) + 1U];
#line 115
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 115
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 115
  temp_v1 = temp;
#line 115
  temp_lower_value ^= temp_v1;
#line 115
  temp_upper_value ^= temp_v2;
#line 115
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 23)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 23) + 1U];
#line 115
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 115
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 115
  temp_v1 = temp;
#line 115
  temp_lower_value ^= temp_v1;
#line 115
  temp_upper_value ^= temp_v2;
#line 115
  *(y + 6) = temp_upper_value;
#line 115
  *(y + 7) = temp_lower_value;
#line 116
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 32)];
#line 116
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 32) + 1U];
#line 116
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 41)];
#line 116
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 41) + 1U];
#line 116
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 116
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 116
  temp_v1 = temp;
#line 116
  temp_upper_value ^= temp_v1;
#line 116
  temp_lower_value ^= temp_v2;
#line 116
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 50)];
#line 116
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 50) + 1U];
#line 116
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 116
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 116
  temp_v1 = temp;
#line 116
  temp_upper_value ^= temp_v1;
#line 116
  temp_lower_value ^= temp_v2;
#line 116
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 59)];
#line 116
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 59) + 1U];
#line 116
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 116
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 116
  temp_v1 = temp;
#line 116
  temp_upper_value ^= temp_v1;
#line 116
  temp_lower_value ^= temp_v2;
#line 116
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 4)];
#line 116
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 4) + 1U];
#line 116
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 13)];
#line 116
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 13) + 1U];
#line 116
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 116
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 116
  temp_v1 = temp;
#line 116
  temp_lower_value ^= temp_v1;
#line 116
  temp_upper_value ^= temp_v2;
#line 116
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 22)];
#line 116
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 22) + 1U];
#line 116
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 116
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 116
  temp_v1 = temp;
#line 116
  temp_lower_value ^= temp_v1;
#line 116
  temp_upper_value ^= temp_v2;
#line 116
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 31)];
#line 116
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 31) + 1U];
#line 116
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 116
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 116
  temp_v1 = temp;
#line 116
  temp_lower_value ^= temp_v1;
#line 116
  temp_upper_value ^= temp_v2;
#line 116
  *(y + 8) = temp_upper_value;
#line 116
  *(y + 9) = temp_lower_value;
#line 117
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 40)];
#line 117
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 40) + 1U];
#line 117
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 49)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 49) + 1U];
#line 117
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 117
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 117
  temp_v1 = temp;
#line 117
  temp_upper_value ^= temp_v1;
#line 117
  temp_lower_value ^= temp_v2;
#line 117
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 58)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 58) + 1U];
#line 117
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 117
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 117
  temp_v1 = temp;
#line 117
  temp_upper_value ^= temp_v1;
#line 117
  temp_lower_value ^= temp_v2;
#line 117
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 3)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 3) + 1U];
#line 117
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 117
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 117
  temp_v1 = temp;
#line 117
  temp_upper_value ^= temp_v1;
#line 117
  temp_lower_value ^= temp_v2;
#line 117
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 12)];
#line 117
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 12) + 1U];
#line 117
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 21)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 21) + 1U];
#line 117
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 117
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 117
  temp_v1 = temp;
#line 117
  temp_lower_value ^= temp_v1;
#line 117
  temp_upper_value ^= temp_v2;
#line 117
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 30)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 30) + 1U];
#line 117
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 117
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 117
  temp_v1 = temp;
#line 117
  temp_lower_value ^= temp_v1;
#line 117
  temp_upper_value ^= temp_v2;
#line 117
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 39)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 39) + 1U];
#line 117
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 117
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 117
  temp_v1 = temp;
#line 117
  temp_lower_value ^= temp_v1;
#line 117
  temp_upper_value ^= temp_v2;
#line 117
  *(y + 10) = temp_upper_value;
#line 117
  *(y + 11) = temp_lower_value;
#line 118
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 48)];
#line 118
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 48) + 1U];
#line 118
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 57)];
#line 118
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 57) + 1U];
#line 118
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 118
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 118
  temp_v1 = temp;
#line 118
  temp_upper_value ^= temp_v1;
#line 118
  temp_lower_value ^= temp_v2;
#line 118
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 2)];
#line 118
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 2) + 1U];
#line 118
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 118
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 118
  temp_v1 = temp;
#line 118
  temp_upper_value ^= temp_v1;
#line 118
  temp_lower_value ^= temp_v2;
#line 118
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 11)];
#line 118
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 11) + 1U];
#line 118
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 118
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 118
  temp_v1 = temp;
#line 118
  temp_upper_value ^= temp_v1;
#line 118
  temp_lower_value ^= temp_v2;
#line 118
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 20)];
#line 118
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 20) + 1U];
#line 118
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 29)];
#line 118
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 29) + 1U];
#line 118
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 118
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 118
  temp_v1 = temp;
#line 118
  temp_lower_value ^= temp_v1;
#line 118
  temp_upper_value ^= temp_v2;
#line 118
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 38)];
#line 118
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 38) + 1U];
#line 118
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 118
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 118
  temp_v1 = temp;
#line 118
  temp_lower_value ^= temp_v1;
#line 118
  temp_upper_value ^= temp_v2;
#line 118
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 47)];
#line 118
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 47) + 1U];
#line 118
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 118
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 118
  temp_v1 = temp;
#line 118
  temp_lower_value ^= temp_v1;
#line 118
  temp_upper_value ^= temp_v2;
#line 118
  *(y + 12) = temp_upper_value;
#line 118
  *(y + 13) = temp_lower_value;
#line 119
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 56)];
#line 119
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 56) + 1U];
#line 119
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 1)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 1) + 1U];
#line 119
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 119
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 119
  temp_v1 = temp;
#line 119
  temp_upper_value ^= temp_v1;
#line 119
  temp_lower_value ^= temp_v2;
#line 119
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 10)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 10) + 1U];
#line 119
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 119
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 119
  temp_v1 = temp;
#line 119
  temp_upper_value ^= temp_v1;
#line 119
  temp_lower_value ^= temp_v2;
#line 119
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 19)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 19) + 1U];
#line 119
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 119
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 119
  temp_v1 = temp;
#line 119
  temp_upper_value ^= temp_v1;
#line 119
  temp_lower_value ^= temp_v2;
#line 119
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 28)];
#line 119
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 28) + 1U];
#line 119
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 37)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 37) + 1U];
#line 119
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 119
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 119
  temp_v1 = temp;
#line 119
  temp_lower_value ^= temp_v1;
#line 119
  temp_upper_value ^= temp_v2;
#line 119
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 46)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 46) + 1U];
#line 119
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 119
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 119
  temp_v1 = temp;
#line 119
  temp_lower_value ^= temp_v1;
#line 119
  temp_upper_value ^= temp_v2;
#line 119
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 55)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 55) + 1U];
#line 119
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 119
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 119
  temp_v1 = temp;
#line 119
  temp_lower_value ^= temp_v1;
#line 119
  temp_upper_value ^= temp_v2;
#line 119
  *(y + 14) = temp_upper_value;
#line 119
  *(y + 15) = temp_lower_value;
#line 120
  return;
}
}
#line 123 "groestl.c"
static void RND512Q(uint8_t *x , uint32_t *y , uint32_t r___0 ) 
{ 
  uint32_t temp_v1 ;
  uint32_t temp_v2 ;
  uint32_t temp_upper_value ;
  uint32_t temp_lower_value ;
  uint32_t temp ;
  uint32_t *x32 ;

  {
#line 125
  x32 = (uint32_t *)x;
#line 126
  *(x32 + 0) = ~ *(x32 + 0);
#line 127
  *(x32 + 1) ^= 4294967295U ^ r___0;
#line 128
  *(x32 + 2) = ~ *(x32 + 2);
#line 129
  *(x32 + 3) ^= 4026531839U ^ r___0;
#line 130
  *(x32 + 4) = ~ *(x32 + 4);
#line 131
  *(x32 + 5) ^= 3758096383U ^ r___0;
#line 132
  *(x32 + 6) = ~ *(x32 + 6);
#line 133
  *(x32 + 7) ^= 3489660927U ^ r___0;
#line 134
  *(x32 + 8) = ~ *(x32 + 8);
#line 135
  *(x32 + 9) ^= 3221225471U ^ r___0;
#line 136
  *(x32 + 10) = ~ *(x32 + 10);
#line 137
  *(x32 + 11) ^= 2952790015U ^ r___0;
#line 138
  *(x32 + 12) = ~ *(x32 + 12);
#line 139
  *(x32 + 13) ^= 2684354559U ^ r___0;
#line 140
  *(x32 + 14) = ~ *(x32 + 14);
#line 141
  *(x32 + 15) ^= 2415919103U ^ r___0;
#line 142
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 8)];
#line 142
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 8) + 1U];
#line 142
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 25)];
#line 142
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 25) + 1U];
#line 142
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 142
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 142
  temp_v1 = temp;
#line 142
  temp_upper_value ^= temp_v1;
#line 142
  temp_lower_value ^= temp_v2;
#line 142
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 42)];
#line 142
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 42) + 1U];
#line 142
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 142
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 142
  temp_v1 = temp;
#line 142
  temp_upper_value ^= temp_v1;
#line 142
  temp_lower_value ^= temp_v2;
#line 142
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 59)];
#line 142
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 59) + 1U];
#line 142
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 142
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 142
  temp_v1 = temp;
#line 142
  temp_upper_value ^= temp_v1;
#line 142
  temp_lower_value ^= temp_v2;
#line 142
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 4)];
#line 142
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 4) + 1U];
#line 142
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 21)];
#line 142
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 21) + 1U];
#line 142
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 142
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 142
  temp_v1 = temp;
#line 142
  temp_lower_value ^= temp_v1;
#line 142
  temp_upper_value ^= temp_v2;
#line 142
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 38)];
#line 142
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 38) + 1U];
#line 142
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 142
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 142
  temp_v1 = temp;
#line 142
  temp_lower_value ^= temp_v1;
#line 142
  temp_upper_value ^= temp_v2;
#line 142
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 55)];
#line 142
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 55) + 1U];
#line 142
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 142
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 142
  temp_v1 = temp;
#line 142
  temp_lower_value ^= temp_v1;
#line 142
  temp_upper_value ^= temp_v2;
#line 142
  *(y + 0) = temp_upper_value;
#line 142
  *(y + 1) = temp_lower_value;
#line 143
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 16)];
#line 143
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 16) + 1U];
#line 143
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 33)];
#line 143
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 33) + 1U];
#line 143
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 143
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 143
  temp_v1 = temp;
#line 143
  temp_upper_value ^= temp_v1;
#line 143
  temp_lower_value ^= temp_v2;
#line 143
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 50)];
#line 143
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 50) + 1U];
#line 143
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 143
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 143
  temp_v1 = temp;
#line 143
  temp_upper_value ^= temp_v1;
#line 143
  temp_lower_value ^= temp_v2;
#line 143
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 3)];
#line 143
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 3) + 1U];
#line 143
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 143
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 143
  temp_v1 = temp;
#line 143
  temp_upper_value ^= temp_v1;
#line 143
  temp_lower_value ^= temp_v2;
#line 143
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 12)];
#line 143
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 12) + 1U];
#line 143
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 29)];
#line 143
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 29) + 1U];
#line 143
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 143
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 143
  temp_v1 = temp;
#line 143
  temp_lower_value ^= temp_v1;
#line 143
  temp_upper_value ^= temp_v2;
#line 143
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 46)];
#line 143
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 46) + 1U];
#line 143
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 143
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 143
  temp_v1 = temp;
#line 143
  temp_lower_value ^= temp_v1;
#line 143
  temp_upper_value ^= temp_v2;
#line 143
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 63)];
#line 143
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 63) + 1U];
#line 143
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 143
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 143
  temp_v1 = temp;
#line 143
  temp_lower_value ^= temp_v1;
#line 143
  temp_upper_value ^= temp_v2;
#line 143
  *(y + 2) = temp_upper_value;
#line 143
  *(y + 3) = temp_lower_value;
#line 144
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 24)];
#line 144
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 24) + 1U];
#line 144
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 41)];
#line 144
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 41) + 1U];
#line 144
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 144
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 144
  temp_v1 = temp;
#line 144
  temp_upper_value ^= temp_v1;
#line 144
  temp_lower_value ^= temp_v2;
#line 144
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 58)];
#line 144
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 58) + 1U];
#line 144
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 144
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 144
  temp_v1 = temp;
#line 144
  temp_upper_value ^= temp_v1;
#line 144
  temp_lower_value ^= temp_v2;
#line 144
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 11)];
#line 144
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 11) + 1U];
#line 144
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 144
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 144
  temp_v1 = temp;
#line 144
  temp_upper_value ^= temp_v1;
#line 144
  temp_lower_value ^= temp_v2;
#line 144
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 20)];
#line 144
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 20) + 1U];
#line 144
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 37)];
#line 144
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 37) + 1U];
#line 144
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 144
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 144
  temp_v1 = temp;
#line 144
  temp_lower_value ^= temp_v1;
#line 144
  temp_upper_value ^= temp_v2;
#line 144
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 54)];
#line 144
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 54) + 1U];
#line 144
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 144
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 144
  temp_v1 = temp;
#line 144
  temp_lower_value ^= temp_v1;
#line 144
  temp_upper_value ^= temp_v2;
#line 144
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 7)];
#line 144
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 7) + 1U];
#line 144
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 144
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 144
  temp_v1 = temp;
#line 144
  temp_lower_value ^= temp_v1;
#line 144
  temp_upper_value ^= temp_v2;
#line 144
  *(y + 4) = temp_upper_value;
#line 144
  *(y + 5) = temp_lower_value;
#line 145
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 32)];
#line 145
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 32) + 1U];
#line 145
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 49)];
#line 145
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 49) + 1U];
#line 145
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 145
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 145
  temp_v1 = temp;
#line 145
  temp_upper_value ^= temp_v1;
#line 145
  temp_lower_value ^= temp_v2;
#line 145
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 2)];
#line 145
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 2) + 1U];
#line 145
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 145
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 145
  temp_v1 = temp;
#line 145
  temp_upper_value ^= temp_v1;
#line 145
  temp_lower_value ^= temp_v2;
#line 145
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 19)];
#line 145
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 19) + 1U];
#line 145
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 145
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 145
  temp_v1 = temp;
#line 145
  temp_upper_value ^= temp_v1;
#line 145
  temp_lower_value ^= temp_v2;
#line 145
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 28)];
#line 145
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 28) + 1U];
#line 145
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 45)];
#line 145
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 45) + 1U];
#line 145
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 145
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 145
  temp_v1 = temp;
#line 145
  temp_lower_value ^= temp_v1;
#line 145
  temp_upper_value ^= temp_v2;
#line 145
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 62)];
#line 145
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 62) + 1U];
#line 145
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 145
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 145
  temp_v1 = temp;
#line 145
  temp_lower_value ^= temp_v1;
#line 145
  temp_upper_value ^= temp_v2;
#line 145
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 15)];
#line 145
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 15) + 1U];
#line 145
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 145
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 145
  temp_v1 = temp;
#line 145
  temp_lower_value ^= temp_v1;
#line 145
  temp_upper_value ^= temp_v2;
#line 145
  *(y + 6) = temp_upper_value;
#line 145
  *(y + 7) = temp_lower_value;
#line 146
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 40)];
#line 146
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 40) + 1U];
#line 146
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 57)];
#line 146
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 57) + 1U];
#line 146
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 146
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 146
  temp_v1 = temp;
#line 146
  temp_upper_value ^= temp_v1;
#line 146
  temp_lower_value ^= temp_v2;
#line 146
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 10)];
#line 146
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 10) + 1U];
#line 146
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 146
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 146
  temp_v1 = temp;
#line 146
  temp_upper_value ^= temp_v1;
#line 146
  temp_lower_value ^= temp_v2;
#line 146
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 27)];
#line 146
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 27) + 1U];
#line 146
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 146
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 146
  temp_v1 = temp;
#line 146
  temp_upper_value ^= temp_v1;
#line 146
  temp_lower_value ^= temp_v2;
#line 146
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 36)];
#line 146
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 36) + 1U];
#line 146
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 53)];
#line 146
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 53) + 1U];
#line 146
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 146
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 146
  temp_v1 = temp;
#line 146
  temp_lower_value ^= temp_v1;
#line 146
  temp_upper_value ^= temp_v2;
#line 146
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 6)];
#line 146
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 6) + 1U];
#line 146
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 146
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 146
  temp_v1 = temp;
#line 146
  temp_lower_value ^= temp_v1;
#line 146
  temp_upper_value ^= temp_v2;
#line 146
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 23)];
#line 146
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 23) + 1U];
#line 146
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 146
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 146
  temp_v1 = temp;
#line 146
  temp_lower_value ^= temp_v1;
#line 146
  temp_upper_value ^= temp_v2;
#line 146
  *(y + 8) = temp_upper_value;
#line 146
  *(y + 9) = temp_lower_value;
#line 147
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 48)];
#line 147
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 48) + 1U];
#line 147
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 1)];
#line 147
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 1) + 1U];
#line 147
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 147
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 147
  temp_v1 = temp;
#line 147
  temp_upper_value ^= temp_v1;
#line 147
  temp_lower_value ^= temp_v2;
#line 147
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 18)];
#line 147
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 18) + 1U];
#line 147
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 147
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 147
  temp_v1 = temp;
#line 147
  temp_upper_value ^= temp_v1;
#line 147
  temp_lower_value ^= temp_v2;
#line 147
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 35)];
#line 147
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 35) + 1U];
#line 147
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 147
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 147
  temp_v1 = temp;
#line 147
  temp_upper_value ^= temp_v1;
#line 147
  temp_lower_value ^= temp_v2;
#line 147
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 44)];
#line 147
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 44) + 1U];
#line 147
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 61)];
#line 147
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 61) + 1U];
#line 147
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 147
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 147
  temp_v1 = temp;
#line 147
  temp_lower_value ^= temp_v1;
#line 147
  temp_upper_value ^= temp_v2;
#line 147
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 14)];
#line 147
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 14) + 1U];
#line 147
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 147
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 147
  temp_v1 = temp;
#line 147
  temp_lower_value ^= temp_v1;
#line 147
  temp_upper_value ^= temp_v2;
#line 147
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 31)];
#line 147
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 31) + 1U];
#line 147
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 147
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 147
  temp_v1 = temp;
#line 147
  temp_lower_value ^= temp_v1;
#line 147
  temp_upper_value ^= temp_v2;
#line 147
  *(y + 10) = temp_upper_value;
#line 147
  *(y + 11) = temp_lower_value;
#line 148
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 56)];
#line 148
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 56) + 1U];
#line 148
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 9)];
#line 148
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 9) + 1U];
#line 148
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 148
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 148
  temp_v1 = temp;
#line 148
  temp_upper_value ^= temp_v1;
#line 148
  temp_lower_value ^= temp_v2;
#line 148
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 26)];
#line 148
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 26) + 1U];
#line 148
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 148
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 148
  temp_v1 = temp;
#line 148
  temp_upper_value ^= temp_v1;
#line 148
  temp_lower_value ^= temp_v2;
#line 148
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 43)];
#line 148
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 43) + 1U];
#line 148
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 148
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 148
  temp_v1 = temp;
#line 148
  temp_upper_value ^= temp_v1;
#line 148
  temp_lower_value ^= temp_v2;
#line 148
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 52)];
#line 148
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 52) + 1U];
#line 148
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 5)];
#line 148
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 5) + 1U];
#line 148
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 148
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 148
  temp_v1 = temp;
#line 148
  temp_lower_value ^= temp_v1;
#line 148
  temp_upper_value ^= temp_v2;
#line 148
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 22)];
#line 148
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 22) + 1U];
#line 148
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 148
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 148
  temp_v1 = temp;
#line 148
  temp_lower_value ^= temp_v1;
#line 148
  temp_upper_value ^= temp_v2;
#line 148
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 39)];
#line 148
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 39) + 1U];
#line 148
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 148
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 148
  temp_v1 = temp;
#line 148
  temp_lower_value ^= temp_v1;
#line 148
  temp_upper_value ^= temp_v2;
#line 148
  *(y + 12) = temp_upper_value;
#line 148
  *(y + 13) = temp_lower_value;
#line 149
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 0)];
#line 149
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 0) + 1U];
#line 149
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 17)];
#line 149
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 17) + 1U];
#line 149
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 149
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 149
  temp_v1 = temp;
#line 149
  temp_upper_value ^= temp_v1;
#line 149
  temp_lower_value ^= temp_v2;
#line 149
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 34)];
#line 149
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 34) + 1U];
#line 149
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 149
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 149
  temp_v1 = temp;
#line 149
  temp_upper_value ^= temp_v1;
#line 149
  temp_lower_value ^= temp_v2;
#line 149
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 51)];
#line 149
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 51) + 1U];
#line 149
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 149
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 149
  temp_v1 = temp;
#line 149
  temp_upper_value ^= temp_v1;
#line 149
  temp_lower_value ^= temp_v2;
#line 149
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 60)];
#line 149
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 60) + 1U];
#line 149
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 13)];
#line 149
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 13) + 1U];
#line 149
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 149
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 149
  temp_v1 = temp;
#line 149
  temp_lower_value ^= temp_v1;
#line 149
  temp_upper_value ^= temp_v2;
#line 149
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 30)];
#line 149
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 30) + 1U];
#line 149
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 149
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 149
  temp_v1 = temp;
#line 149
  temp_lower_value ^= temp_v1;
#line 149
  temp_upper_value ^= temp_v2;
#line 149
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 47)];
#line 149
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 47) + 1U];
#line 149
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 149
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 149
  temp_v1 = temp;
#line 149
  temp_lower_value ^= temp_v1;
#line 149
  temp_upper_value ^= temp_v2;
#line 149
  *(y + 14) = temp_upper_value;
#line 149
  *(y + 15) = temp_lower_value;
#line 150
  return;
}
}
#line 153 "groestl.c"
static void F512(uint32_t *h , uint32_t const   *m ) 
{ 
  int i ;
  uint32_t Ptmp[16] ;
  uint32_t Qtmp[16] ;
  uint32_t y[16] ;
  uint32_t z[16] ;

  {
#line 160
  i = 0;
#line 160
  while (i < 16) {
#line 161
    z[i] = (uint32_t )*(m + i);
#line 162
    Ptmp[i] = *(h + i) ^ (unsigned int )*(m + i);
#line 160
    i ++;
  }
#line 166
  RND512Q((uint8_t *)(z), y, (uint32_t )0);
#line 167
  RND512Q((uint8_t *)(y), z, (uint32_t )16777216);
#line 168
  RND512Q((uint8_t *)(z), y, (uint32_t )33554432);
#line 169
  RND512Q((uint8_t *)(y), z, (uint32_t )50331648);
#line 170
  RND512Q((uint8_t *)(z), y, (uint32_t )67108864);
#line 171
  RND512Q((uint8_t *)(y), z, (uint32_t )83886080);
#line 172
  RND512Q((uint8_t *)(z), y, (uint32_t )100663296);
#line 173
  RND512Q((uint8_t *)(y), z, (uint32_t )117440512);
#line 174
  RND512Q((uint8_t *)(z), y, (uint32_t )134217728);
#line 175
  RND512Q((uint8_t *)(y), Qtmp, (uint32_t )150994944);
#line 178
  RND512P((uint8_t *)(Ptmp), y, (uint32_t )0);
#line 179
  RND512P((uint8_t *)(y), z, (uint32_t )1);
#line 180
  RND512P((uint8_t *)(z), y, (uint32_t )2);
#line 181
  RND512P((uint8_t *)(y), z, (uint32_t )3);
#line 182
  RND512P((uint8_t *)(z), y, (uint32_t )4);
#line 183
  RND512P((uint8_t *)(y), z, (uint32_t )5);
#line 184
  RND512P((uint8_t *)(z), y, (uint32_t )6);
#line 185
  RND512P((uint8_t *)(y), z, (uint32_t )7);
#line 186
  RND512P((uint8_t *)(z), y, (uint32_t )8);
#line 187
  RND512P((uint8_t *)(y), Ptmp, (uint32_t )9);
#line 190
  i = 0;
#line 190
  while (i < 16) {
#line 191
    *(h + i) ^= Ptmp[i] ^ Qtmp[i];
#line 190
    i ++;
  }
#line 193
  return;
}
}
#line 197 "groestl.c"
static void Transform(groestlHashState *ctx , uint8_t const   *input , int msglen ) 
{ 


  {
#line 202
  while (msglen >= 64) {
#line 204
    F512(ctx->chaining, (uint32_t const   *)((uint32_t *)input));
#line 207
    (ctx->block_counter1) ++;
#line 208
    if (ctx->block_counter1 == 0U) {
#line 208
      (ctx->block_counter2) ++;
    }
#line 202
    msglen -= 64;
#line 202
    input += 64;
  }
#line 210
  return;
}
}
#line 213 "groestl.c"
static void OutputTransformation(groestlHashState *ctx ) 
{ 
  int j ;
  uint32_t temp[16] ;
  uint32_t y[16] ;
  uint32_t z[16] ;

  {
#line 221
  j = 0;
#line 221
  while (j < 16) {
#line 222
    temp[j] = ctx->chaining[j];
#line 221
    j ++;
  }
#line 224
  RND512P((uint8_t *)(temp), y, (uint32_t )0);
#line 225
  RND512P((uint8_t *)(y), z, (uint32_t )1);
#line 226
  RND512P((uint8_t *)(z), y, (uint32_t )2);
#line 227
  RND512P((uint8_t *)(y), z, (uint32_t )3);
#line 228
  RND512P((uint8_t *)(z), y, (uint32_t )4);
#line 229
  RND512P((uint8_t *)(y), z, (uint32_t )5);
#line 230
  RND512P((uint8_t *)(z), y, (uint32_t )6);
#line 231
  RND512P((uint8_t *)(y), z, (uint32_t )7);
#line 232
  RND512P((uint8_t *)(z), y, (uint32_t )8);
#line 233
  RND512P((uint8_t *)(y), temp, (uint32_t )9);
#line 234
  j = 0;
#line 234
  while (j < 16) {
#line 235
    ctx->chaining[j] ^= temp[j];
#line 234
    j ++;
  }
#line 237
  return;
}
}
#line 240 "groestl.c"
static void Init(groestlHashState *ctx ) 
{ 
  int i ;

  {
#line 241
  i = 0;
#line 244
  while ((unsigned long )i < 64UL / sizeof(uint32_t )) {
#line 246
    ctx->chaining[i] = (uint32_t )0;
#line 244
    i ++;
  }
#line 250
  ctx->chaining[15] = ((((256U << 8) | (256U >> 24)) & 4294967295U) & 16711935U) | ((((256U << 24) | (256U >> 8)) & 4294967295U) & 4278255360U);
#line 253
  ctx->buf_ptr = 0;
#line 254
  ctx->block_counter1 = (uint32_t )0;
#line 255
  ctx->block_counter2 = (uint32_t )0;
#line 256
  ctx->bits_in_last_byte = 0;
#line 257
  return;
}
}
#line 260 "groestl.c"
static void Update(groestlHashState *ctx , BitSequence const   *input , DataLength databitlen ) 
{ 
  int index___0 ;
  int msglen ;
  int rem ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;

  {
#line 263
  index___0 = 0;
#line 264
  msglen = (int )(databitlen / 8ULL);
#line 265
  rem = (int )(databitlen % 8ULL);
#line 269
  if (ctx->buf_ptr) {
#line 270
    while (1) {
#line 270
      if (ctx->buf_ptr < 64) {
#line 270
        if (! (index___0 < msglen)) {
#line 270
          break;
        }
      } else {
#line 270
        break;
      }
#line 271
      tmp = ctx->buf_ptr;
#line 271
      (ctx->buf_ptr) ++;
#line 271
      tmp___0 = index___0;
#line 271
      index___0 ++;
#line 271
      ctx->buffer[tmp] = (BitSequence )*(input + tmp___0);
    }
#line 273
    if (ctx->buf_ptr < 64) {
#line 275
      if (rem) {
#line 276
        ctx->bits_in_last_byte = rem;
#line 277
        tmp___1 = ctx->buf_ptr;
#line 277
        (ctx->buf_ptr) ++;
#line 277
        ctx->buffer[tmp___1] = (BitSequence )*(input + index___0);
      }
#line 279
      return;
    }
#line 283
    ctx->buf_ptr = 0;
#line 284
    Transform(ctx, (uint8_t const   *)(ctx->buffer), 64);
  }
#line 288
  Transform(ctx, input + index___0, msglen - index___0);
#line 289
  index___0 += ((msglen - index___0) / 64) * 64;
#line 292
  while (index___0 < msglen) {
#line 293
    tmp___2 = ctx->buf_ptr;
#line 293
    (ctx->buf_ptr) ++;
#line 293
    tmp___3 = index___0;
#line 293
    index___0 ++;
#line 293
    ctx->buffer[tmp___2] = (BitSequence )*(input + tmp___3);
  }
#line 299
  if (rem) {
#line 300
    ctx->bits_in_last_byte = rem;
#line 301
    tmp___4 = ctx->buf_ptr;
#line 301
    (ctx->buf_ptr) ++;
#line 301
    ctx->buffer[tmp___4] = (BitSequence )*(input + index___0);
  }
#line 303
  return;
}
}
#line 309 "groestl.c"
static void Final(groestlHashState *ctx , BitSequence *output___0 ) 
{ 
  int i ;
  int j ;
  int hashbytelen ;
  uint8_t *s ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
#line 311
  j = 0;
#line 311
  hashbytelen = 32;
#line 312
  s = (BitSequence *)(ctx->chaining);
#line 315
  if (ctx->bits_in_last_byte) {
#line 316
    ctx->buffer[ctx->buf_ptr - 1] = (BitSequence )((int )ctx->buffer[ctx->buf_ptr - 1] & (((1 << ctx->bits_in_last_byte) - 1) << (8 - ctx->bits_in_last_byte)));
#line 317
    ctx->buffer[ctx->buf_ptr - 1] = (BitSequence )((int )ctx->buffer[ctx->buf_ptr - 1] ^ (1 << (7 - ctx->bits_in_last_byte)));
#line 318
    ctx->bits_in_last_byte = 0;
  } else {
#line 320
    tmp = ctx->buf_ptr;
#line 320
    (ctx->buf_ptr) ++;
#line 320
    ctx->buffer[tmp] = (BitSequence )128;
  }
#line 323
  if (ctx->buf_ptr > 56) {
#line 325
    while (ctx->buf_ptr < 64) {
#line 326
      tmp___0 = ctx->buf_ptr;
#line 326
      (ctx->buf_ptr) ++;
#line 326
      ctx->buffer[tmp___0] = (BitSequence )0;
    }
#line 329
    Transform(ctx, (uint8_t const   *)(ctx->buffer), 64);
#line 330
    ctx->buf_ptr = 0;
  }
#line 332
  while (ctx->buf_ptr < 56) {
#line 333
    tmp___1 = ctx->buf_ptr;
#line 333
    (ctx->buf_ptr) ++;
#line 333
    ctx->buffer[tmp___1] = (BitSequence )0;
  }
#line 337
  (ctx->block_counter1) ++;
#line 338
  if (ctx->block_counter1 == 0U) {
#line 338
    (ctx->block_counter2) ++;
  }
#line 339
  ctx->buf_ptr = 64;
#line 341
  while (ctx->buf_ptr > 64 - (int )sizeof(uint32_t )) {
#line 342
    (ctx->buf_ptr) --;
#line 342
    ctx->buffer[ctx->buf_ptr] = (uint8_t )ctx->block_counter1;
#line 343
    ctx->block_counter1 >>= 8;
  }
#line 345
  while (ctx->buf_ptr > 56) {
#line 346
    (ctx->buf_ptr) --;
#line 346
    ctx->buffer[ctx->buf_ptr] = (uint8_t )ctx->block_counter2;
#line 347
    ctx->block_counter2 >>= 8;
  }
#line 350
  Transform(ctx, (uint8_t const   *)(ctx->buffer), 64);
#line 352
  OutputTransformation(ctx);
#line 355
  i = 64 - hashbytelen;
#line 355
  while (i < 64) {
#line 356
    *(output___0 + j) = *(s + i);
#line 355
    i ++;
#line 355
    j ++;
  }
#line 360
  i = 0;
#line 360
  while (i < 8) {
#line 361
    ctx->chaining[i] = (uint32_t )0;
#line 360
    i ++;
  }
#line 363
  i = 0;
#line 363
  while (i < 64) {
#line 364
    ctx->buffer[i] = (BitSequence )0;
#line 363
    i ++;
  }
#line 366
  return;
}
}
#line 369 "groestl.c"
void groestl(BitSequence const   *data , DataLength databitlen , BitSequence *hashval ) 
{ 
  groestlHashState context ;

  {
#line 376
  Init(& context);
#line 380
  Update(& context, data, databitlen);
#line 383
  Final(& context, hashval);
#line 384
  return;
}
}
#line 1 "cil-KrShJruU.o"
#pragma merger("0","/tmp/cil-VZeE_BHh.i","")
#line 19 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/assert.h"
extern void __assert_fail(char const   * , char const   * , int  , char const   * ) ;
#line 47 "jh_ansi_opt64.c"
static unsigned char const   JH224_H0[128]  = 
#line 47 "jh_ansi_opt64.c"
  {      (unsigned char const   )45,      (unsigned char const   )254,      (unsigned char const   )221,      (unsigned char const   )98, 
        (unsigned char const   )249,      (unsigned char const   )154,      (unsigned char const   )152,      (unsigned char const   )172, 
        (unsigned char const   )174,      (unsigned char const   )124,      (unsigned char const   )172,      (unsigned char const   )214, 
        (unsigned char const   )25,      (unsigned char const   )214,      (unsigned char const   )52,      (unsigned char const   )231, 
        (unsigned char const   )164,      (unsigned char const   )131,      (unsigned char const   )16,      (unsigned char const   )5, 
        (unsigned char const   )188,      (unsigned char const   )48,      (unsigned char const   )18,      (unsigned char const   )22, 
        (unsigned char const   )184,      (unsigned char const   )96,      (unsigned char const   )56,      (unsigned char const   )198, 
        (unsigned char const   )201,      (unsigned char const   )102,      (unsigned char const   )20,      (unsigned char const   )148, 
        (unsigned char const   )102,      (unsigned char const   )217,      (unsigned char const   )137,      (unsigned char const   )159, 
        (unsigned char const   )37,      (unsigned char const   )128,      (unsigned char const   )112,      (unsigned char const   )111, 
        (unsigned char const   )206,      (unsigned char const   )158,      (unsigned char const   )163,      (unsigned char const   )27, 
        (unsigned char const   )29,      (unsigned char const   )155,      (unsigned char const   )26,      (unsigned char const   )220, 
        (unsigned char const   )17,      (unsigned char const   )232,      (unsigned char const   )50,      (unsigned char const   )95, 
        (unsigned char const   )123,      (unsigned char const   )54,      (unsigned char const   )110,      (unsigned char const   )16, 
        (unsigned char const   )249,      (unsigned char const   )148,      (unsigned char const   )133,      (unsigned char const   )127, 
        (unsigned char const   )2,      (unsigned char const   )250,      (unsigned char const   )6,      (unsigned char const   )193, 
        (unsigned char const   )27,      (unsigned char const   )79,      (unsigned char const   )27,      (unsigned char const   )92, 
        (unsigned char const   )216,      (unsigned char const   )200,      (unsigned char const   )64,      (unsigned char const   )179, 
        (unsigned char const   )151,      (unsigned char const   )246,      (unsigned char const   )161,      (unsigned char const   )127, 
        (unsigned char const   )110,      (unsigned char const   )115,      (unsigned char const   )128,      (unsigned char const   )153, 
        (unsigned char const   )220,      (unsigned char const   )223,      (unsigned char const   )147,      (unsigned char const   )165, 
        (unsigned char const   )173,      (unsigned char const   )234,      (unsigned char const   )163,      (unsigned char const   )211, 
        (unsigned char const   )164,      (unsigned char const   )49,      (unsigned char const   )232,      (unsigned char const   )222, 
        (unsigned char const   )201,      (unsigned char const   )83,      (unsigned char const   )154,      (unsigned char const   )104, 
        (unsigned char const   )34,      (unsigned char const   )180,      (unsigned char const   )169,      (unsigned char const   )138, 
        (unsigned char const   )236,      (unsigned char const   )134,      (unsigned char const   )161,      (unsigned char const   )228, 
        (unsigned char const   )213,      (unsigned char const   )116,      (unsigned char const   )172,      (unsigned char const   )149, 
        (unsigned char const   )156,      (unsigned char const   )229,      (unsigned char const   )108,      (unsigned char const   )240, 
        (unsigned char const   )21,      (unsigned char const   )150,      (unsigned char const   )13,      (unsigned char const   )234, 
        (unsigned char const   )181,      (unsigned char const   )171,      (unsigned char const   )43,      (unsigned char const   )191, 
        (unsigned char const   )150,      (unsigned char const   )17,      (unsigned char const   )220,      (unsigned char const   )240, 
        (unsigned char const   )221,      (unsigned char const   )100,      (unsigned char const   )234,      (unsigned char const   )110};
#line 48 "jh_ansi_opt64.c"
static unsigned char const   JH256_H0[128]  = 
#line 48
  {      (unsigned char const   )235,      (unsigned char const   )152,      (unsigned char const   )163,      (unsigned char const   )65, 
        (unsigned char const   )44,      (unsigned char const   )32,      (unsigned char const   )211,      (unsigned char const   )235, 
        (unsigned char const   )146,      (unsigned char const   )205,      (unsigned char const   )190,      (unsigned char const   )123, 
        (unsigned char const   )156,      (unsigned char const   )178,      (unsigned char const   )69,      (unsigned char const   )193, 
        (unsigned char const   )28,      (unsigned char const   )147,      (unsigned char const   )81,      (unsigned char const   )145, 
        (unsigned char const   )96,      (unsigned char const   )212,      (unsigned char const   )199,      (unsigned char const   )250, 
        (unsigned char const   )38,      (unsigned char const   )0,      (unsigned char const   )130,      (unsigned char const   )214, 
        (unsigned char const   )126,      (unsigned char const   )80,      (unsigned char const   )138,      (unsigned char const   )3, 
        (unsigned char const   )164,      (unsigned char const   )35,      (unsigned char const   )158,      (unsigned char const   )38, 
        (unsigned char const   )119,      (unsigned char const   )38,      (unsigned char const   )185,      (unsigned char const   )69, 
        (unsigned char const   )224,      (unsigned char const   )251,      (unsigned char const   )26,      (unsigned char const   )72, 
        (unsigned char const   )212,      (unsigned char const   )26,      (unsigned char const   )148,      (unsigned char const   )119, 
        (unsigned char const   )205,      (unsigned char const   )181,      (unsigned char const   )171,      (unsigned char const   )38, 
        (unsigned char const   )2,      (unsigned char const   )107,      (unsigned char const   )23,      (unsigned char const   )122, 
        (unsigned char const   )86,      (unsigned char const   )240,      (unsigned char const   )36,      (unsigned char const   )66, 
        (unsigned char const   )15,      (unsigned char const   )255,      (unsigned char const   )47,      (unsigned char const   )168, 
        (unsigned char const   )113,      (unsigned char const   )163,      (unsigned char const   )150,      (unsigned char const   )137, 
        (unsigned char const   )127,      (unsigned char const   )46,      (unsigned char const   )77,      (unsigned char const   )117, 
        (unsigned char const   )29,      (unsigned char const   )20,      (unsigned char const   )73,      (unsigned char const   )8, 
        (unsigned char const   )247,      (unsigned char const   )125,      (unsigned char const   )226,      (unsigned char const   )98, 
        (unsigned char const   )39,      (unsigned char const   )118,      (unsigned char const   )149,      (unsigned char const   )247, 
        (unsigned char const   )118,      (unsigned char const   )36,      (unsigned char const   )143,      (unsigned char const   )148, 
        (unsigned char const   )135,      (unsigned char const   )213,      (unsigned char const   )182,      (unsigned char const   )87, 
        (unsigned char const   )71,      (unsigned char const   )128,      (unsigned char const   )41,      (unsigned char const   )108, 
        (unsigned char const   )92,      (unsigned char const   )94,      (unsigned char const   )39,      (unsigned char const   )45, 
        (unsigned char const   )172,      (unsigned char const   )142,      (unsigned char const   )13,      (unsigned char const   )108, 
        (unsigned char const   )81,      (unsigned char const   )132,      (unsigned char const   )80,      (unsigned char const   )198, 
        (unsigned char const   )87,      (unsigned char const   )5,      (unsigned char const   )122,      (unsigned char const   )15, 
        (unsigned char const   )123,      (unsigned char const   )228,      (unsigned char const   )211,      (unsigned char const   )103, 
        (unsigned char const   )112,      (unsigned char const   )36,      (unsigned char const   )18,      (unsigned char const   )234, 
        (unsigned char const   )137,      (unsigned char const   )227,      (unsigned char const   )171,      (unsigned char const   )19, 
        (unsigned char const   )211,      (unsigned char const   )28,      (unsigned char const   )215,      (unsigned char const   )105};
#line 49 "jh_ansi_opt64.c"
static unsigned char const   JH384_H0[128]  = 
#line 49
  {      (unsigned char const   )72,      (unsigned char const   )30,      (unsigned char const   )59,      (unsigned char const   )198, 
        (unsigned char const   )216,      (unsigned char const   )19,      (unsigned char const   )57,      (unsigned char const   )138, 
        (unsigned char const   )109,      (unsigned char const   )59,      (unsigned char const   )94,      (unsigned char const   )137, 
        (unsigned char const   )74,      (unsigned char const   )222,      (unsigned char const   )135,      (unsigned char const   )155, 
        (unsigned char const   )99,      (unsigned char const   )250,      (unsigned char const   )234,      (unsigned char const   )104, 
        (unsigned char const   )212,      (unsigned char const   )128,      (unsigned char const   )173,      (unsigned char const   )46, 
        (unsigned char const   )51,      (unsigned char const   )44,      (unsigned char const   )203,      (unsigned char const   )33, 
        (unsigned char const   )72,      (unsigned char const   )15,      (unsigned char const   )130,      (unsigned char const   )103, 
        (unsigned char const   )152,      (unsigned char const   )174,      (unsigned char const   )200,      (unsigned char const   )77, 
        (unsigned char const   )144,      (unsigned char const   )130,      (unsigned char const   )185,      (unsigned char const   )40, 
        (unsigned char const   )212,      (unsigned char const   )85,      (unsigned char const   )234,      (unsigned char const   )48, 
        (unsigned char const   )65,      (unsigned char const   )17,      (unsigned char const   )66,      (unsigned char const   )73, 
        (unsigned char const   )54,      (unsigned char const   )245,      (unsigned char const   )85,      (unsigned char const   )178, 
        (unsigned char const   )146,      (unsigned char const   )72,      (unsigned char const   )71,      (unsigned char const   )236, 
        (unsigned char const   )199,      (unsigned char const   )37,      (unsigned char const   )10,      (unsigned char const   )147, 
        (unsigned char const   )186,      (unsigned char const   )244,      (unsigned char const   )60,      (unsigned char const   )225, 
        (unsigned char const   )86,      (unsigned char const   )155,      (unsigned char const   )127,      (unsigned char const   )138, 
        (unsigned char const   )39,      (unsigned char const   )219,      (unsigned char const   )69,      (unsigned char const   )76, 
        (unsigned char const   )158,      (unsigned char const   )252,      (unsigned char const   )189,      (unsigned char const   )73, 
        (unsigned char const   )99,      (unsigned char const   )151,      (unsigned char const   )175,      (unsigned char const   )14, 
        (unsigned char const   )88,      (unsigned char const   )159,      (unsigned char const   )194,      (unsigned char const   )125, 
        (unsigned char const   )38,      (unsigned char const   )170,      (unsigned char const   )128,      (unsigned char const   )205, 
        (unsigned char const   )128,      (unsigned char const   )192,      (unsigned char const   )139,      (unsigned char const   )140, 
        (unsigned char const   )157,      (unsigned char const   )235,      (unsigned char const   )46,      (unsigned char const   )218, 
        (unsigned char const   )138,      (unsigned char const   )121,      (unsigned char const   )129,      (unsigned char const   )232, 
        (unsigned char const   )248,      (unsigned char const   )213,      (unsigned char const   )55,      (unsigned char const   )58, 
        (unsigned char const   )244,      (unsigned char const   )57,      (unsigned char const   )103,      (unsigned char const   )173, 
        (unsigned char const   )221,      (unsigned char const   )209,      (unsigned char const   )122,      (unsigned char const   )113, 
        (unsigned char const   )169,      (unsigned char const   )180,      (unsigned char const   )211,      (unsigned char const   )189, 
        (unsigned char const   )164,      (unsigned char const   )117,      (unsigned char const   )211,      (unsigned char const   )148, 
        (unsigned char const   )151,      (unsigned char const   )108,      (unsigned char const   )63,      (unsigned char const   )186, 
        (unsigned char const   )152,      (unsigned char const   )66,      (unsigned char const   )115,      (unsigned char const   )127};
#line 50 "jh_ansi_opt64.c"
static unsigned char const   JH512_H0[128]  = 
#line 50
  {      (unsigned char const   )111,      (unsigned char const   )209,      (unsigned char const   )75,      (unsigned char const   )150, 
        (unsigned char const   )62,      (unsigned char const   )0,      (unsigned char const   )170,      (unsigned char const   )23, 
        (unsigned char const   )99,      (unsigned char const   )106,      (unsigned char const   )46,      (unsigned char const   )5, 
        (unsigned char const   )122,      (unsigned char const   )21,      (unsigned char const   )213,      (unsigned char const   )67, 
        (unsigned char const   )138,      (unsigned char const   )34,      (unsigned char const   )94,      (unsigned char const   )141, 
        (unsigned char const   )12,      (unsigned char const   )151,      (unsigned char const   )239,      (unsigned char const   )11, 
        (unsigned char const   )233,      (unsigned char const   )52,      (unsigned char const   )18,      (unsigned char const   )89, 
        (unsigned char const   )242,      (unsigned char const   )179,      (unsigned char const   )195,      (unsigned char const   )97, 
        (unsigned char const   )137,      (unsigned char const   )29,      (unsigned char const   )160,      (unsigned char const   )193, 
        (unsigned char const   )83,      (unsigned char const   )111,      (unsigned char const   )128,      (unsigned char const   )30, 
        (unsigned char const   )42,      (unsigned char const   )169,      (unsigned char const   )5,      (unsigned char const   )107, 
        (unsigned char const   )234,      (unsigned char const   )43,      (unsigned char const   )109,      (unsigned char const   )128, 
        (unsigned char const   )88,      (unsigned char const   )142,      (unsigned char const   )204,      (unsigned char const   )219, 
        (unsigned char const   )32,      (unsigned char const   )117,      (unsigned char const   )186,      (unsigned char const   )166, 
        (unsigned char const   )169,      (unsigned char const   )15,      (unsigned char const   )58,      (unsigned char const   )118, 
        (unsigned char const   )186,      (unsigned char const   )248,      (unsigned char const   )59,      (unsigned char const   )247, 
        (unsigned char const   )1,      (unsigned char const   )105,      (unsigned char const   )230,      (unsigned char const   )5, 
        (unsigned char const   )65,      (unsigned char const   )227,      (unsigned char const   )74,      (unsigned char const   )105, 
        (unsigned char const   )70,      (unsigned char const   )181,      (unsigned char const   )138,      (unsigned char const   )142, 
        (unsigned char const   )46,      (unsigned char const   )111,      (unsigned char const   )230,      (unsigned char const   )90, 
        (unsigned char const   )16,      (unsigned char const   )71,      (unsigned char const   )167,      (unsigned char const   )208, 
        (unsigned char const   )193,      (unsigned char const   )132,      (unsigned char const   )60,      (unsigned char const   )36, 
        (unsigned char const   )59,      (unsigned char const   )110,      (unsigned char const   )113,      (unsigned char const   )177, 
        (unsigned char const   )45,      (unsigned char const   )90,      (unsigned char const   )193,      (unsigned char const   )153, 
        (unsigned char const   )207,      (unsigned char const   )87,      (unsigned char const   )246,      (unsigned char const   )236, 
        (unsigned char const   )157,      (unsigned char const   )177,      (unsigned char const   )248,      (unsigned char const   )86, 
        (unsigned char const   )167,      (unsigned char const   )6,      (unsigned char const   )136,      (unsigned char const   )124, 
        (unsigned char const   )87,      (unsigned char const   )22,      (unsigned char const   )177,      (unsigned char const   )86, 
        (unsigned char const   )227,      (unsigned char const   )194,      (unsigned char const   )252,      (unsigned char const   )223, 
        (unsigned char const   )230,      (unsigned char const   )133,      (unsigned char const   )23,      (unsigned char const   )251, 
        (unsigned char const   )84,      (unsigned char const   )90,      (unsigned char const   )70,      (unsigned char const   )120, 
        (unsigned char const   )204,      (unsigned char const   )140,      (unsigned char const   )221,      (unsigned char const   )75};
#line 53 "jh_ansi_opt64.c"
static unsigned char const   E8_bitslice_roundconstant[42][32]  = 
#line 53
  { {        (unsigned char const   )114,        (unsigned char const   )213,        (unsigned char const   )222,        (unsigned char const   )162, 
            (unsigned char const   )223,        (unsigned char const   )21,        (unsigned char const   )248,        (unsigned char const   )103, 
            (unsigned char const   )123,        (unsigned char const   )132,        (unsigned char const   )21,        (unsigned char const   )10, 
            (unsigned char const   )183,        (unsigned char const   )35,        (unsigned char const   )21,        (unsigned char const   )87, 
            (unsigned char const   )129,        (unsigned char const   )171,        (unsigned char const   )214,        (unsigned char const   )144, 
            (unsigned char const   )77,        (unsigned char const   )90,        (unsigned char const   )135,        (unsigned char const   )246, 
            (unsigned char const   )78,        (unsigned char const   )159,        (unsigned char const   )79,        (unsigned char const   )197, 
            (unsigned char const   )195,        (unsigned char const   )209,        (unsigned char const   )43,        (unsigned char const   )64}, 
   {        (unsigned char const   )234,        (unsigned char const   )152,        (unsigned char const   )58,        (unsigned char const   )224, 
            (unsigned char const   )92,        (unsigned char const   )69,        (unsigned char const   )250,        (unsigned char const   )156, 
            (unsigned char const   )3,        (unsigned char const   )197,        (unsigned char const   )210,        (unsigned char const   )153, 
            (unsigned char const   )102,        (unsigned char const   )178,        (unsigned char const   )153,        (unsigned char const   )154, 
            (unsigned char const   )102,        (unsigned char const   )2,        (unsigned char const   )150,        (unsigned char const   )180, 
            (unsigned char const   )242,        (unsigned char const   )187,        (unsigned char const   )83,        (unsigned char const   )138, 
            (unsigned char const   )181,        (unsigned char const   )86,        (unsigned char const   )20,        (unsigned char const   )26, 
            (unsigned char const   )136,        (unsigned char const   )219,        (unsigned char const   )162,        (unsigned char const   )49}, 
   {        (unsigned char const   )3,        (unsigned char const   )163,        (unsigned char const   )90,        (unsigned char const   )92, 
            (unsigned char const   )154,        (unsigned char const   )25,        (unsigned char const   )14,        (unsigned char const   )219, 
            (unsigned char const   )64,        (unsigned char const   )63,        (unsigned char const   )178,        (unsigned char const   )10, 
            (unsigned char const   )135,        (unsigned char const   )193,        (unsigned char const   )68,        (unsigned char const   )16, 
            (unsigned char const   )28,        (unsigned char const   )5,        (unsigned char const   )25,        (unsigned char const   )128, 
            (unsigned char const   )132,        (unsigned char const   )158,        (unsigned char const   )149,        (unsigned char const   )29, 
            (unsigned char const   )111,        (unsigned char const   )51,        (unsigned char const   )235,        (unsigned char const   )173, 
            (unsigned char const   )94,        (unsigned char const   )231,        (unsigned char const   )205,        (unsigned char const   )220}, 
   {        (unsigned char const   )16,        (unsigned char const   )186,        (unsigned char const   )19,        (unsigned char const   )146, 
            (unsigned char const   )2,        (unsigned char const   )191,        (unsigned char const   )107,        (unsigned char const   )65, 
            (unsigned char const   )220,        (unsigned char const   )120,        (unsigned char const   )101,        (unsigned char const   )21, 
            (unsigned char const   )247,        (unsigned char const   )187,        (unsigned char const   )39,        (unsigned char const   )208, 
            (unsigned char const   )10,        (unsigned char const   )44,        (unsigned char const   )129,        (unsigned char const   )57, 
            (unsigned char const   )55,        (unsigned char const   )170,        (unsigned char const   )120,        (unsigned char const   )80, 
            (unsigned char const   )63,        (unsigned char const   )26,        (unsigned char const   )191,        (unsigned char const   )210, 
            (unsigned char const   )65,        (unsigned char const   )0,        (unsigned char const   )145,        (unsigned char const   )211}, 
   {        (unsigned char const   )66,        (unsigned char const   )45,        (unsigned char const   )90,        (unsigned char const   )13, 
            (unsigned char const   )246,        (unsigned char const   )204,        (unsigned char const   )126,        (unsigned char const   )144, 
            (unsigned char const   )221,        (unsigned char const   )98,        (unsigned char const   )159,        (unsigned char const   )156, 
            (unsigned char const   )146,        (unsigned char const   )192,        (unsigned char const   )151,        (unsigned char const   )206, 
            (unsigned char const   )24,        (unsigned char const   )92,        (unsigned char const   )167,        (unsigned char const   )11, 
            (unsigned char const   )199,        (unsigned char const   )43,        (unsigned char const   )68,        (unsigned char const   )172, 
            (unsigned char const   )209,        (unsigned char const   )223,        (unsigned char const   )101,        (unsigned char const   )214, 
            (unsigned char const   )99,        (unsigned char const   )198,        (unsigned char const   )252,        (unsigned char const   )35}, 
   {        (unsigned char const   )151,        (unsigned char const   )110,        (unsigned char const   )108,        (unsigned char const   )3, 
            (unsigned char const   )158,        (unsigned char const   )224,        (unsigned char const   )184,        (unsigned char const   )26, 
            (unsigned char const   )33,        (unsigned char const   )5,        (unsigned char const   )69,        (unsigned char const   )126, 
            (unsigned char const   )68,        (unsigned char const   )108,        (unsigned char const   )236,        (unsigned char const   )168, 
            (unsigned char const   )238,        (unsigned char const   )241,        (unsigned char const   )3,        (unsigned char const   )187, 
            (unsigned char const   )93,        (unsigned char const   )142,        (unsigned char const   )97,        (unsigned char const   )250, 
            (unsigned char const   )253,        (unsigned char const   )150,        (unsigned char const   )151,        (unsigned char const   )178, 
            (unsigned char const   )148,        (unsigned char const   )131,        (unsigned char const   )129,        (unsigned char const   )151}, 
   {        (unsigned char const   )74,        (unsigned char const   )142,        (unsigned char const   )133,        (unsigned char const   )55, 
            (unsigned char const   )219,        (unsigned char const   )3,        (unsigned char const   )48,        (unsigned char const   )47, 
            (unsigned char const   )42,        (unsigned char const   )103,        (unsigned char const   )141,        (unsigned char const   )45, 
            (unsigned char const   )251,        (unsigned char const   )159,        (unsigned char const   )106,        (unsigned char const   )149, 
            (unsigned char const   )138,        (unsigned char const   )254,        (unsigned char const   )115,        (unsigned char const   )129, 
            (unsigned char const   )248,        (unsigned char const   )184,        (unsigned char const   )105,        (unsigned char const   )108, 
            (unsigned char const   )138,        (unsigned char const   )199,        (unsigned char const   )114,        (unsigned char const   )70, 
            (unsigned char const   )192,        (unsigned char const   )127,        (unsigned char const   )66,        (unsigned char const   )20}, 
   {        (unsigned char const   )197,        (unsigned char const   )244,        (unsigned char const   )21,        (unsigned char const   )143, 
            (unsigned char const   )189,        (unsigned char const   )199,        (unsigned char const   )94,        (unsigned char const   )196, 
            (unsigned char const   )117,        (unsigned char const   )68,        (unsigned char const   )111,        (unsigned char const   )167, 
            (unsigned char const   )143,        (unsigned char const   )17,        (unsigned char const   )187,        (unsigned char const   )128, 
            (unsigned char const   )82,        (unsigned char const   )222,        (unsigned char const   )117,        (unsigned char const   )183, 
            (unsigned char const   )174,        (unsigned char const   )228,        (unsigned char const   )136,        (unsigned char const   )188, 
            (unsigned char const   )130,        (unsigned char const   )184,        (unsigned char const   )0,        (unsigned char const   )30, 
            (unsigned char const   )152,        (unsigned char const   )166,        (unsigned char const   )163,        (unsigned char const   )244}, 
   {        (unsigned char const   )142,        (unsigned char const   )244,        (unsigned char const   )143,        (unsigned char const   )51, 
            (unsigned char const   )169,        (unsigned char const   )163,        (unsigned char const   )99,        (unsigned char const   )21, 
            (unsigned char const   )170,        (unsigned char const   )95,        (unsigned char const   )86,        (unsigned char const   )36, 
            (unsigned char const   )213,        (unsigned char const   )183,        (unsigned char const   )249,        (unsigned char const   )137, 
            (unsigned char const   )182,        (unsigned char const   )241,        (unsigned char const   )237,        (unsigned char const   )32, 
            (unsigned char const   )124,        (unsigned char const   )90,        (unsigned char const   )224,        (unsigned char const   )253, 
            (unsigned char const   )54,        (unsigned char const   )202,        (unsigned char const   )233,        (unsigned char const   )90, 
            (unsigned char const   )6,        (unsigned char const   )66,        (unsigned char const   )44,        (unsigned char const   )54}, 
   {        (unsigned char const   )206,        (unsigned char const   )41,        (unsigned char const   )53,        (unsigned char const   )67, 
            (unsigned char const   )78,        (unsigned char const   )254,        (unsigned char const   )152,        (unsigned char const   )61, 
            (unsigned char const   )83,        (unsigned char const   )58,        (unsigned char const   )249,        (unsigned char const   )116, 
            (unsigned char const   )115,        (unsigned char const   )154,        (unsigned char const   )75,        (unsigned char const   )167, 
            (unsigned char const   )208,        (unsigned char const   )245,        (unsigned char const   )31,        (unsigned char const   )89, 
            (unsigned char const   )111,        (unsigned char const   )78,        (unsigned char const   )129,        (unsigned char const   )134, 
            (unsigned char const   )14,        (unsigned char const   )157,        (unsigned char const   )173,        (unsigned char const   )129, 
            (unsigned char const   )175,        (unsigned char const   )216,        (unsigned char const   )90,        (unsigned char const   )159}, 
   {        (unsigned char const   )167,        (unsigned char const   )5,        (unsigned char const   )6,        (unsigned char const   )103, 
            (unsigned char const   )238,        (unsigned char const   )52,        (unsigned char const   )98,        (unsigned char const   )106, 
            (unsigned char const   )139,        (unsigned char const   )11,        (unsigned char const   )40,        (unsigned char const   )190, 
            (unsigned char const   )110,        (unsigned char const   )185,        (unsigned char const   )23,        (unsigned char const   )39, 
            (unsigned char const   )71,        (unsigned char const   )116,        (unsigned char const   )7,        (unsigned char const   )38, 
            (unsigned char const   )198,        (unsigned char const   )128,        (unsigned char const   )16,        (unsigned char const   )63, 
            (unsigned char const   )224,        (unsigned char const   )160,        (unsigned char const   )126,        (unsigned char const   )111, 
            (unsigned char const   )198,        (unsigned char const   )126,        (unsigned char const   )72,        (unsigned char const   )123}, 
   {        (unsigned char const   )13,        (unsigned char const   )85,        (unsigned char const   )10,        (unsigned char const   )165, 
            (unsigned char const   )74,        (unsigned char const   )248,        (unsigned char const   )164,        (unsigned char const   )192, 
            (unsigned char const   )145,        (unsigned char const   )227,        (unsigned char const   )231,        (unsigned char const   )159, 
            (unsigned char const   )151,        (unsigned char const   )142,        (unsigned char const   )241,        (unsigned char const   )158, 
            (unsigned char const   )134,        (unsigned char const   )118,        (unsigned char const   )114,        (unsigned char const   )129, 
            (unsigned char const   )80,        (unsigned char const   )96,        (unsigned char const   )141,        (unsigned char const   )212, 
            (unsigned char const   )126,        (unsigned char const   )158,        (unsigned char const   )90,        (unsigned char const   )65, 
            (unsigned char const   )243,        (unsigned char const   )229,        (unsigned char const   )176,        (unsigned char const   )98}, 
   {        (unsigned char const   )252,        (unsigned char const   )159,        (unsigned char const   )31,        (unsigned char const   )236, 
            (unsigned char const   )64,        (unsigned char const   )84,        (unsigned char const   )32,        (unsigned char const   )122, 
            (unsigned char const   )227,        (unsigned char const   )228,        (unsigned char const   )26,        (unsigned char const   )0, 
            (unsigned char const   )206,        (unsigned char const   )244,        (unsigned char const   )201,        (unsigned char const   )132, 
            (unsigned char const   )79,        (unsigned char const   )215,        (unsigned char const   )148,        (unsigned char const   )245, 
            (unsigned char const   )157,        (unsigned char const   )250,        (unsigned char const   )149,        (unsigned char const   )216, 
            (unsigned char const   )85,        (unsigned char const   )46,        (unsigned char const   )126,        (unsigned char const   )17, 
            (unsigned char const   )36,        (unsigned char const   )195,        (unsigned char const   )84,        (unsigned char const   )165}, 
   {        (unsigned char const   )91,        (unsigned char const   )223,        (unsigned char const   )114,        (unsigned char const   )40, 
            (unsigned char const   )189,        (unsigned char const   )254,        (unsigned char const   )110,        (unsigned char const   )40, 
            (unsigned char const   )120,        (unsigned char const   )245,        (unsigned char const   )127,        (unsigned char const   )226, 
            (unsigned char const   )15,        (unsigned char const   )165,        (unsigned char const   )196,        (unsigned char const   )178, 
            (unsigned char const   )5,        (unsigned char const   )137,        (unsigned char const   )124,        (unsigned char const   )239, 
            (unsigned char const   )238,        (unsigned char const   )73,        (unsigned char const   )211,        (unsigned char const   )46, 
            (unsigned char const   )68,        (unsigned char const   )126,        (unsigned char const   )147,        (unsigned char const   )133, 
            (unsigned char const   )235,        (unsigned char const   )40,        (unsigned char const   )89,        (unsigned char const   )127}, 
   {        (unsigned char const   )112,        (unsigned char const   )95,        (unsigned char const   )105,        (unsigned char const   )55, 
            (unsigned char const   )179,        (unsigned char const   )36,        (unsigned char const   )49,        (unsigned char const   )74, 
            (unsigned char const   )94,        (unsigned char const   )134,        (unsigned char const   )40,        (unsigned char const   )241, 
            (unsigned char const   )29,        (unsigned char const   )214,        (unsigned char const   )228,        (unsigned char const   )101, 
            (unsigned char const   )199,        (unsigned char const   )27,        (unsigned char const   )119,        (unsigned char const   )4, 
            (unsigned char const   )81,        (unsigned char const   )185,        (unsigned char const   )32,        (unsigned char const   )231, 
            (unsigned char const   )116,        (unsigned char const   )254,        (unsigned char const   )67,        (unsigned char const   )232, 
            (unsigned char const   )35,        (unsigned char const   )212,        (unsigned char const   )135,        (unsigned char const   )138}, 
   {        (unsigned char const   )125,        (unsigned char const   )41,        (unsigned char const   )232,        (unsigned char const   )163, 
            (unsigned char const   )146,        (unsigned char const   )118,        (unsigned char const   )148,        (unsigned char const   )242, 
            (unsigned char const   )221,        (unsigned char const   )203,        (unsigned char const   )122,        (unsigned char const   )9, 
            (unsigned char const   )155,        (unsigned char const   )48,        (unsigned char const   )217,        (unsigned char const   )193, 
            (unsigned char const   )29,        (unsigned char const   )27,        (unsigned char const   )48,        (unsigned char const   )251, 
            (unsigned char const   )91,        (unsigned char const   )220,        (unsigned char const   )27,        (unsigned char const   )224, 
            (unsigned char const   )218,        (unsigned char const   )36,        (unsigned char const   )73,        (unsigned char const   )79, 
            (unsigned char const   )242,        (unsigned char const   )156,        (unsigned char const   )130,        (unsigned char const   )191}, 
   {        (unsigned char const   )164,        (unsigned char const   )231,        (unsigned char const   )186,        (unsigned char const   )49, 
            (unsigned char const   )180,        (unsigned char const   )112,        (unsigned char const   )191,        (unsigned char const   )255, 
            (unsigned char const   )13,        (unsigned char const   )50,        (unsigned char const   )68,        (unsigned char const   )5, 
            (unsigned char const   )222,        (unsigned char const   )248,        (unsigned char const   )188,        (unsigned char const   )72, 
            (unsigned char const   )59,        (unsigned char const   )174,        (unsigned char const   )252,        (unsigned char const   )50, 
            (unsigned char const   )83,        (unsigned char const   )187,        (unsigned char const   )211,        (unsigned char const   )57, 
            (unsigned char const   )69,        (unsigned char const   )159,        (unsigned char const   )195,        (unsigned char const   )193, 
            (unsigned char const   )224,        (unsigned char const   )41,        (unsigned char const   )139,        (unsigned char const   )160}, 
   {        (unsigned char const   )229,        (unsigned char const   )201,        (unsigned char const   )5,        (unsigned char const   )253, 
            (unsigned char const   )247,        (unsigned char const   )174,        (unsigned char const   )9,        (unsigned char const   )15, 
            (unsigned char const   )148,        (unsigned char const   )112,        (unsigned char const   )52,        (unsigned char const   )18, 
            (unsigned char const   )66,        (unsigned char const   )144,        (unsigned char const   )241,        (unsigned char const   )52, 
            (unsigned char const   )162,        (unsigned char const   )113,        (unsigned char const   )183,        (unsigned char const   )1, 
            (unsigned char const   )227,        (unsigned char const   )68,        (unsigned char const   )237,        (unsigned char const   )149, 
            (unsigned char const   )233,        (unsigned char const   )59,        (unsigned char const   )142,        (unsigned char const   )54, 
            (unsigned char const   )79,        (unsigned char const   )47,        (unsigned char const   )152,        (unsigned char const   )74}, 
   {        (unsigned char const   )136,        (unsigned char const   )64,        (unsigned char const   )29,        (unsigned char const   )99, 
            (unsigned char const   )160,        (unsigned char const   )108,        (unsigned char const   )246,        (unsigned char const   )21, 
            (unsigned char const   )71,        (unsigned char const   )193,        (unsigned char const   )68,        (unsigned char const   )75, 
            (unsigned char const   )135,        (unsigned char const   )82,        (unsigned char const   )175,        (unsigned char const   )255, 
            (unsigned char const   )126,        (unsigned char const   )187,        (unsigned char const   )74,        (unsigned char const   )241, 
            (unsigned char const   )226,        (unsigned char const   )10,        (unsigned char const   )198,        (unsigned char const   )48, 
            (unsigned char const   )70,        (unsigned char const   )112,        (unsigned char const   )182,        (unsigned char const   )197, 
            (unsigned char const   )204,        (unsigned char const   )110,        (unsigned char const   )140,        (unsigned char const   )230}, 
   {        (unsigned char const   )164,        (unsigned char const   )213,        (unsigned char const   )164,        (unsigned char const   )86, 
            (unsigned char const   )189,        (unsigned char const   )79,        (unsigned char const   )202,        (unsigned char const   )0, 
            (unsigned char const   )218,        (unsigned char const   )157,        (unsigned char const   )132,        (unsigned char const   )75, 
            (unsigned char const   )200,        (unsigned char const   )62,        (unsigned char const   )24,        (unsigned char const   )174, 
            (unsigned char const   )115,        (unsigned char const   )87,        (unsigned char const   )206,        (unsigned char const   )69, 
            (unsigned char const   )48,        (unsigned char const   )100,        (unsigned char const   )209,        (unsigned char const   )173, 
            (unsigned char const   )232,        (unsigned char const   )166,        (unsigned char const   )206,        (unsigned char const   )104, 
            (unsigned char const   )20,        (unsigned char const   )92,        (unsigned char const   )37,        (unsigned char const   )103}, 
   {        (unsigned char const   )163,        (unsigned char const   )218,        (unsigned char const   )140,        (unsigned char const   )242, 
            (unsigned char const   )203,        (unsigned char const   )14,        (unsigned char const   )225,        (unsigned char const   )22, 
            (unsigned char const   )51,        (unsigned char const   )233,        (unsigned char const   )6,        (unsigned char const   )88, 
            (unsigned char const   )154,        (unsigned char const   )148,        (unsigned char const   )153,        (unsigned char const   )154, 
            (unsigned char const   )31,        (unsigned char const   )96,        (unsigned char const   )178,        (unsigned char const   )32, 
            (unsigned char const   )194,        (unsigned char const   )111,        (unsigned char const   )132,        (unsigned char const   )123, 
            (unsigned char const   )209,        (unsigned char const   )206,        (unsigned char const   )172,        (unsigned char const   )127, 
            (unsigned char const   )160,        (unsigned char const   )209,        (unsigned char const   )133,        (unsigned char const   )24}, 
   {        (unsigned char const   )50,        (unsigned char const   )89,        (unsigned char const   )91,        (unsigned char const   )161, 
            (unsigned char const   )141,        (unsigned char const   )221,        (unsigned char const   )25,        (unsigned char const   )211, 
            (unsigned char const   )80,        (unsigned char const   )154,        (unsigned char const   )28,        (unsigned char const   )192, 
            (unsigned char const   )170,        (unsigned char const   )165,        (unsigned char const   )180,        (unsigned char const   )70, 
            (unsigned char const   )159,        (unsigned char const   )61,        (unsigned char const   )99,        (unsigned char const   )103, 
            (unsigned char const   )228,        (unsigned char const   )4,        (unsigned char const   )107,        (unsigned char const   )186, 
            (unsigned char const   )246,        (unsigned char const   )202,        (unsigned char const   )25,        (unsigned char const   )171, 
            (unsigned char const   )11,        (unsigned char const   )86,        (unsigned char const   )238,        (unsigned char const   )126}, 
   {        (unsigned char const   )31,        (unsigned char const   )177,        (unsigned char const   )121,        (unsigned char const   )234, 
            (unsigned char const   )169,        (unsigned char const   )40,        (unsigned char const   )33,        (unsigned char const   )116, 
            (unsigned char const   )233,        (unsigned char const   )189,        (unsigned char const   )247,        (unsigned char const   )53, 
            (unsigned char const   )59,        (unsigned char const   )54,        (unsigned char const   )81,        (unsigned char const   )238, 
            (unsigned char const   )29,        (unsigned char const   )87,        (unsigned char const   )172,        (unsigned char const   )90, 
            (unsigned char const   )117,        (unsigned char const   )80,        (unsigned char const   )211,        (unsigned char const   )118, 
            (unsigned char const   )58,        (unsigned char const   )70,        (unsigned char const   )194,        (unsigned char const   )254, 
            (unsigned char const   )163,        (unsigned char const   )125,        (unsigned char const   )112,        (unsigned char const   )1}, 
   {        (unsigned char const   )247,        (unsigned char const   )53,        (unsigned char const   )193,        (unsigned char const   )175, 
            (unsigned char const   )152,        (unsigned char const   )164,        (unsigned char const   )216,        (unsigned char const   )66, 
            (unsigned char const   )120,        (unsigned char const   )237,        (unsigned char const   )236,        (unsigned char const   )32, 
            (unsigned char const   )158,        (unsigned char const   )107,        (unsigned char const   )103,        (unsigned char const   )121, 
            (unsigned char const   )65,        (unsigned char const   )131,        (unsigned char const   )99,        (unsigned char const   )21, 
            (unsigned char const   )234,        (unsigned char const   )58,        (unsigned char const   )219,        (unsigned char const   )168, 
            (unsigned char const   )250,        (unsigned char const   )195,        (unsigned char const   )59,        (unsigned char const   )77, 
            (unsigned char const   )50,        (unsigned char const   )131,        (unsigned char const   )44,        (unsigned char const   )131}, 
   {        (unsigned char const   )167,        (unsigned char const   )64,        (unsigned char const   )59,        (unsigned char const   )31, 
            (unsigned char const   )28,        (unsigned char const   )39,        (unsigned char const   )71,        (unsigned char const   )243, 
            (unsigned char const   )89,        (unsigned char const   )64,        (unsigned char const   )240,        (unsigned char const   )52, 
            (unsigned char const   )183,        (unsigned char const   )45,        (unsigned char const   )118,        (unsigned char const   )154, 
            (unsigned char const   )231,        (unsigned char const   )62,        (unsigned char const   )78,        (unsigned char const   )108, 
            (unsigned char const   )210,        (unsigned char const   )33,        (unsigned char const   )79,        (unsigned char const   )253, 
            (unsigned char const   )184,        (unsigned char const   )253,        (unsigned char const   )141,        (unsigned char const   )57, 
            (unsigned char const   )220,        (unsigned char const   )87,        (unsigned char const   )89,        (unsigned char const   )239}, 
   {        (unsigned char const   )141,        (unsigned char const   )155,        (unsigned char const   )12,        (unsigned char const   )73, 
            (unsigned char const   )43,        (unsigned char const   )73,        (unsigned char const   )235,        (unsigned char const   )218, 
            (unsigned char const   )91,        (unsigned char const   )162,        (unsigned char const   )215,        (unsigned char const   )73, 
            (unsigned char const   )104,        (unsigned char const   )243,        (unsigned char const   )112,        (unsigned char const   )13, 
            (unsigned char const   )125,        (unsigned char const   )59,        (unsigned char const   )174,        (unsigned char const   )208, 
            (unsigned char const   )122,        (unsigned char const   )141,        (unsigned char const   )85,        (unsigned char const   )132, 
            (unsigned char const   )245,        (unsigned char const   )165,        (unsigned char const   )233,        (unsigned char const   )240, 
            (unsigned char const   )228,        (unsigned char const   )248,        (unsigned char const   )142,        (unsigned char const   )101}, 
   {        (unsigned char const   )160,        (unsigned char const   )184,        (unsigned char const   )162,        (unsigned char const   )244, 
            (unsigned char const   )54,        (unsigned char const   )16,        (unsigned char const   )59,        (unsigned char const   )83, 
            (unsigned char const   )12,        (unsigned char const   )168,        (unsigned char const   )7,        (unsigned char const   )158, 
            (unsigned char const   )117,        (unsigned char const   )62,        (unsigned char const   )236,        (unsigned char const   )90, 
            (unsigned char const   )145,        (unsigned char const   )104,        (unsigned char const   )148,        (unsigned char const   )146, 
            (unsigned char const   )86,        (unsigned char const   )232,        (unsigned char const   )136,        (unsigned char const   )79, 
            (unsigned char const   )91,        (unsigned char const   )176,        (unsigned char const   )92,        (unsigned char const   )85, 
            (unsigned char const   )248,        (unsigned char const   )186,        (unsigned char const   )188,        (unsigned char const   )76}, 
   {        (unsigned char const   )227,        (unsigned char const   )187,        (unsigned char const   )59,        (unsigned char const   )153, 
            (unsigned char const   )243,        (unsigned char const   )135,        (unsigned char const   )148,        (unsigned char const   )123, 
            (unsigned char const   )117,        (unsigned char const   )218,        (unsigned char const   )244,        (unsigned char const   )214, 
            (unsigned char const   )114,        (unsigned char const   )107,        (unsigned char const   )28,        (unsigned char const   )93, 
            (unsigned char const   )100,        (unsigned char const   )174,        (unsigned char const   )172,        (unsigned char const   )40, 
            (unsigned char const   )220,        (unsigned char const   )52,        (unsigned char const   )179,        (unsigned char const   )109, 
            (unsigned char const   )108,        (unsigned char const   )52,        (unsigned char const   )165,        (unsigned char const   )80, 
            (unsigned char const   )184,        (unsigned char const   )40,        (unsigned char const   )219,        (unsigned char const   )113}, 
   {        (unsigned char const   )248,        (unsigned char const   )97,        (unsigned char const   )226,        (unsigned char const   )242, 
            (unsigned char const   )16,        (unsigned char const   )141,        (unsigned char const   )81,        (unsigned char const   )42, 
            (unsigned char const   )227,        (unsigned char const   )219,        (unsigned char const   )100,        (unsigned char const   )51, 
            (unsigned char const   )89,        (unsigned char const   )221,        (unsigned char const   )117,        (unsigned char const   )252, 
            (unsigned char const   )28,        (unsigned char const   )172,        (unsigned char const   )188,        (unsigned char const   )241, 
            (unsigned char const   )67,        (unsigned char const   )206,        (unsigned char const   )63,        (unsigned char const   )162, 
            (unsigned char const   )103,        (unsigned char const   )187,        (unsigned char const   )209,        (unsigned char const   )60, 
            (unsigned char const   )2,        (unsigned char const   )232,        (unsigned char const   )67,        (unsigned char const   )176}, 
   {        (unsigned char const   )51,        (unsigned char const   )10,        (unsigned char const   )91,        (unsigned char const   )202, 
            (unsigned char const   )136,        (unsigned char const   )41,        (unsigned char const   )161,        (unsigned char const   )117, 
            (unsigned char const   )127,        (unsigned char const   )52,        (unsigned char const   )25,        (unsigned char const   )77, 
            (unsigned char const   )180,        (unsigned char const   )22,        (unsigned char const   )83,        (unsigned char const   )92, 
            (unsigned char const   )146,        (unsigned char const   )59,        (unsigned char const   )148,        (unsigned char const   )195, 
            (unsigned char const   )14,        (unsigned char const   )121,        (unsigned char const   )77,        (unsigned char const   )30, 
            (unsigned char const   )121,        (unsigned char const   )116,        (unsigned char const   )117,        (unsigned char const   )215, 
            (unsigned char const   )182,        (unsigned char const   )238,        (unsigned char const   )175,        (unsigned char const   )63}, 
   {        (unsigned char const   )234,        (unsigned char const   )168,        (unsigned char const   )212,        (unsigned char const   )247, 
            (unsigned char const   )190,        (unsigned char const   )26,        (unsigned char const   )57,        (unsigned char const   )33, 
            (unsigned char const   )92,        (unsigned char const   )244,        (unsigned char const   )126,        (unsigned char const   )9, 
            (unsigned char const   )76,        (unsigned char const   )35,        (unsigned char const   )39,        (unsigned char const   )81, 
            (unsigned char const   )38,        (unsigned char const   )163,        (unsigned char const   )36,        (unsigned char const   )83, 
            (unsigned char const   )186,        (unsigned char const   )50,        (unsigned char const   )60,        (unsigned char const   )210, 
            (unsigned char const   )68,        (unsigned char const   )163,        (unsigned char const   )23,        (unsigned char const   )74, 
            (unsigned char const   )109,        (unsigned char const   )166,        (unsigned char const   )213,        (unsigned char const   )173}, 
   {        (unsigned char const   )181,        (unsigned char const   )29,        (unsigned char const   )62,        (unsigned char const   )166, 
            (unsigned char const   )175,        (unsigned char const   )242,        (unsigned char const   )201,        (unsigned char const   )8, 
            (unsigned char const   )131,        (unsigned char const   )89,        (unsigned char const   )61,        (unsigned char const   )152, 
            (unsigned char const   )145,        (unsigned char const   )107,        (unsigned char const   )60,        (unsigned char const   )86, 
            (unsigned char const   )76,        (unsigned char const   )248,        (unsigned char const   )124,        (unsigned char const   )161, 
            (unsigned char const   )114,        (unsigned char const   )134,        (unsigned char const   )96,        (unsigned char const   )77, 
            (unsigned char const   )70,        (unsigned char const   )226,        (unsigned char const   )62,        (unsigned char const   )204, 
            (unsigned char const   )8,        (unsigned char const   )110,        (unsigned char const   )199,        (unsigned char const   )246}, 
   {        (unsigned char const   )47,        (unsigned char const   )152,        (unsigned char const   )51,        (unsigned char const   )179, 
            (unsigned char const   )177,        (unsigned char const   )188,        (unsigned char const   )118,        (unsigned char const   )94, 
            (unsigned char const   )43,        (unsigned char const   )214,        (unsigned char const   )102,        (unsigned char const   )165, 
            (unsigned char const   )239,        (unsigned char const   )196,        (unsigned char const   )230,        (unsigned char const   )42, 
            (unsigned char const   )6,        (unsigned char const   )244,        (unsigned char const   )182,        (unsigned char const   )232, 
            (unsigned char const   )190,        (unsigned char const   )193,        (unsigned char const   )212,        (unsigned char const   )54, 
            (unsigned char const   )116,        (unsigned char const   )238,        (unsigned char const   )130,        (unsigned char const   )21, 
            (unsigned char const   )188,        (unsigned char const   )239,        (unsigned char const   )33,        (unsigned char const   )99}, 
   {        (unsigned char const   )253,        (unsigned char const   )193,        (unsigned char const   )78,        (unsigned char const   )13, 
            (unsigned char const   )244,        (unsigned char const   )83,        (unsigned char const   )201,        (unsigned char const   )105, 
            (unsigned char const   )167,        (unsigned char const   )125,        (unsigned char const   )90,        (unsigned char const   )196, 
            (unsigned char const   )6,        (unsigned char const   )88,        (unsigned char const   )88,        (unsigned char const   )38, 
            (unsigned char const   )126,        (unsigned char const   )193,        (unsigned char const   )20,        (unsigned char const   )22, 
            (unsigned char const   )6,        (unsigned char const   )224,        (unsigned char const   )250,        (unsigned char const   )22, 
            (unsigned char const   )126,        (unsigned char const   )144,        (unsigned char const   )175,        (unsigned char const   )61, 
            (unsigned char const   )40,        (unsigned char const   )99,        (unsigned char const   )157,        (unsigned char const   )63}, 
   {        (unsigned char const   )210,        (unsigned char const   )201,        (unsigned char const   )242,        (unsigned char const   )227, 
            (unsigned char const   )0,        (unsigned char const   )155,        (unsigned char const   )210,        (unsigned char const   )12, 
            (unsigned char const   )95,        (unsigned char const   )170,        (unsigned char const   )206,        (unsigned char const   )48, 
            (unsigned char const   )183,        (unsigned char const   )212,        (unsigned char const   )12,        (unsigned char const   )48, 
            (unsigned char const   )116,        (unsigned char const   )42,        (unsigned char const   )81,        (unsigned char const   )22, 
            (unsigned char const   )242,        (unsigned char const   )224,        (unsigned char const   )50,        (unsigned char const   )152, 
            (unsigned char const   )13,        (unsigned char const   )235,        (unsigned char const   )48,        (unsigned char const   )216, 
            (unsigned char const   )227,        (unsigned char const   )206,        (unsigned char const   )248,        (unsigned char const   )154}, 
   {        (unsigned char const   )75,        (unsigned char const   )197,        (unsigned char const   )158,        (unsigned char const   )123, 
            (unsigned char const   )181,        (unsigned char const   )241,        (unsigned char const   )121,        (unsigned char const   )146, 
            (unsigned char const   )255,        (unsigned char const   )81,        (unsigned char const   )230,        (unsigned char const   )110, 
            (unsigned char const   )4,        (unsigned char const   )134,        (unsigned char const   )104,        (unsigned char const   )211, 
            (unsigned char const   )155,        (unsigned char const   )35,        (unsigned char const   )77,        (unsigned char const   )87, 
            (unsigned char const   )230,        (unsigned char const   )150,        (unsigned char const   )103,        (unsigned char const   )49, 
            (unsigned char const   )204,        (unsigned char const   )230,        (unsigned char const   )166,        (unsigned char const   )243, 
            (unsigned char const   )23,        (unsigned char const   )10,        (unsigned char const   )117,        (unsigned char const   )5}, 
   {        (unsigned char const   )177,        (unsigned char const   )118,        (unsigned char const   )129,        (unsigned char const   )217, 
            (unsigned char const   )19,        (unsigned char const   )50,        (unsigned char const   )108,        (unsigned char const   )206, 
            (unsigned char const   )60,        (unsigned char const   )23,        (unsigned char const   )82,        (unsigned char const   )132, 
            (unsigned char const   )248,        (unsigned char const   )5,        (unsigned char const   )162,        (unsigned char const   )98, 
            (unsigned char const   )244,        (unsigned char const   )43,        (unsigned char const   )203,        (unsigned char const   )179, 
            (unsigned char const   )120,        (unsigned char const   )71,        (unsigned char const   )21,        (unsigned char const   )71, 
            (unsigned char const   )255,        (unsigned char const   )70,        (unsigned char const   )84,        (unsigned char const   )130, 
            (unsigned char const   )35,        (unsigned char const   )147,        (unsigned char const   )106,        (unsigned char const   )72}, 
   {        (unsigned char const   )56,        (unsigned char const   )223,        (unsigned char const   )88,        (unsigned char const   )7, 
            (unsigned char const   )78,        (unsigned char const   )94,        (unsigned char const   )101,        (unsigned char const   )101, 
            (unsigned char const   )242,        (unsigned char const   )252,        (unsigned char const   )124,        (unsigned char const   )137, 
            (unsigned char const   )252,        (unsigned char const   )134,        (unsigned char const   )80,        (unsigned char const   )142, 
            (unsigned char const   )49,        (unsigned char const   )112,        (unsigned char const   )46,        (unsigned char const   )68, 
            (unsigned char const   )208,        (unsigned char const   )11,        (unsigned char const   )202,        (unsigned char const   )134, 
            (unsigned char const   )240,        (unsigned char const   )64,        (unsigned char const   )9,        (unsigned char const   )162, 
            (unsigned char const   )48,        (unsigned char const   )120,        (unsigned char const   )71,        (unsigned char const   )78}, 
   {        (unsigned char const   )101,        (unsigned char const   )160,        (unsigned char const   )238,        (unsigned char const   )57, 
            (unsigned char const   )209,        (unsigned char const   )247,        (unsigned char const   )56,        (unsigned char const   )131, 
            (unsigned char const   )247,        (unsigned char const   )94,        (unsigned char const   )233,        (unsigned char const   )55, 
            (unsigned char const   )228,        (unsigned char const   )44,        (unsigned char const   )58,        (unsigned char const   )189, 
            (unsigned char const   )33,        (unsigned char const   )151,        (unsigned char const   )178,        (unsigned char const   )38, 
            (unsigned char const   )1,        (unsigned char const   )19,        (unsigned char const   )248,        (unsigned char const   )111, 
            (unsigned char const   )163,        (unsigned char const   )68,        (unsigned char const   )237,        (unsigned char const   )209, 
            (unsigned char const   )239,        (unsigned char const   )159,        (unsigned char const   )222,        (unsigned char const   )231}, 
   {        (unsigned char const   )139,        (unsigned char const   )160,        (unsigned char const   )223,        (unsigned char const   )21, 
            (unsigned char const   )118,        (unsigned char const   )37,        (unsigned char const   )146,        (unsigned char const   )217, 
            (unsigned char const   )60,        (unsigned char const   )133,        (unsigned char const   )247,        (unsigned char const   )246, 
            (unsigned char const   )18,        (unsigned char const   )220,        (unsigned char const   )66,        (unsigned char const   )190, 
            (unsigned char const   )216,        (unsigned char const   )167,        (unsigned char const   )236,        (unsigned char const   )124, 
            (unsigned char const   )171,        (unsigned char const   )39,        (unsigned char const   )176,        (unsigned char const   )126, 
            (unsigned char const   )83,        (unsigned char const   )141,        (unsigned char const   )125,        (unsigned char const   )218, 
            (unsigned char const   )170,        (unsigned char const   )62,        (unsigned char const   )168,        (unsigned char const   )222}, 
   {        (unsigned char const   )170,        (unsigned char const   )37,        (unsigned char const   )206,        (unsigned char const   )147, 
            (unsigned char const   )189,        (unsigned char const   )2,        (unsigned char const   )105,        (unsigned char const   )216, 
            (unsigned char const   )90,        (unsigned char const   )246,        (unsigned char const   )67,        (unsigned char const   )253, 
            (unsigned char const   )26,        (unsigned char const   )115,        (unsigned char const   )8,        (unsigned char const   )249, 
            (unsigned char const   )192,        (unsigned char const   )95,        (unsigned char const   )239,        (unsigned char const   )218, 
            (unsigned char const   )23,        (unsigned char const   )74,        (unsigned char const   )25,        (unsigned char const   )165, 
            (unsigned char const   )151,        (unsigned char const   )77,        (unsigned char const   )102,        (unsigned char const   )51, 
            (unsigned char const   )76,        (unsigned char const   )253,        (unsigned char const   )33,        (unsigned char const   )106}, 
   {        (unsigned char const   )53,        (unsigned char const   )180,        (unsigned char const   )152,        (unsigned char const   )49, 
            (unsigned char const   )219,        (unsigned char const   )65,        (unsigned char const   )21,        (unsigned char const   )112, 
            (unsigned char const   )234,        (unsigned char const   )30,        (unsigned char const   )15,        (unsigned char const   )187, 
            (unsigned char const   )237,        (unsigned char const   )205,        (unsigned char const   )84,        (unsigned char const   )155, 
            (unsigned char const   )154,        (unsigned char const   )208,        (unsigned char const   )99,        (unsigned char const   )161, 
            (unsigned char const   )81,        (unsigned char const   )151,        (unsigned char const   )64,        (unsigned char const   )114, 
            (unsigned char const   )246,        (unsigned char const   )117,        (unsigned char const   )157,        (unsigned char const   )191, 
            (unsigned char const   )145,        (unsigned char const   )71,        (unsigned char const   )111,        (unsigned char const   )226}};
#line 98
static void E8(hashState *state ) ;
#line 99
static void F8(hashState *state ) ;
#line 102
static HashReturn Init___0(hashState *state , int hashbitlen ) ;
#line 103
static HashReturn Update___0(hashState *state , BitSequence const   *data , DataLength databitlen ) ;
#line 104
static HashReturn Final___0(hashState *state , BitSequence *hashval ) ;
#line 105
static HashReturn Hash(int hashbitlen , BitSequence const   *data , DataLength databitlen ,
                       BitSequence *hashval ) ;
#line 158 "jh_ansi_opt64.c"
static void E8(hashState *state ) 
{ 
  uint64 i ;
  uint64 roundnumber ;
  uint64 temp0 ;
  uint64 temp1 ;

  {
#line 162
  roundnumber = (uint64 )0;
#line 162
  while (roundnumber < 42ULL) {
#line 164
    i = (uint64 )0;
#line 164
    while (i < 2ULL) {
#line 165
      state->x[6][i] = ~ state->x[6][i];
#line 165
      state->x[7][i] = ~ state->x[7][i];
#line 165
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber]) + i);
#line 165
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber]) + (i + 2ULL));
#line 165
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 165
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 165
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 165
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 165
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 165
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 165
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 165
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 165
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 165
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 165
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 165
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 165
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 165
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 165
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 165
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 165
      state->x[4][i] ^= temp0;
#line 165
      state->x[5][i] ^= temp1;
#line 166
      state->x[1][i] ^= state->x[2][i];
#line 166
      state->x[3][i] ^= state->x[4][i];
#line 166
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 166
      state->x[7][i] ^= state->x[0][i];
#line 166
      state->x[0][i] ^= state->x[3][i];
#line 166
      state->x[2][i] ^= state->x[5][i];
#line 166
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 166
      state->x[6][i] ^= state->x[1][i];
#line 167
      state->x[1][i] = ((state->x[1][i] & 6148914691236517205ULL) << 1) | ((state->x[1][i] & 0xaaaaaaaaaaaaaaaaULL) >> 1);
#line 167
      state->x[3][i] = ((state->x[3][i] & 6148914691236517205ULL) << 1) | ((state->x[3][i] & 0xaaaaaaaaaaaaaaaaULL) >> 1);
#line 167
      state->x[5][i] = ((state->x[5][i] & 6148914691236517205ULL) << 1) | ((state->x[5][i] & 0xaaaaaaaaaaaaaaaaULL) >> 1);
#line 167
      state->x[7][i] = ((state->x[7][i] & 6148914691236517205ULL) << 1) | ((state->x[7][i] & 0xaaaaaaaaaaaaaaaaULL) >> 1);
#line 164
      i ++;
    }
#line 171
    i = (uint64 )0;
#line 171
    while (i < 2ULL) {
#line 172
      state->x[6][i] = ~ state->x[6][i];
#line 172
      state->x[7][i] = ~ state->x[7][i];
#line 172
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 1ULL]) + i);
#line 172
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 1ULL]) + (i + 2ULL));
#line 172
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 1ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 172
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 1ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 172
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 172
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 172
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 172
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 172
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 172
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 172
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 172
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 172
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 172
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 172
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 172
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 172
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 172
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 172
      state->x[4][i] ^= temp0;
#line 172
      state->x[5][i] ^= temp1;
#line 173
      state->x[1][i] ^= state->x[2][i];
#line 173
      state->x[3][i] ^= state->x[4][i];
#line 173
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 173
      state->x[7][i] ^= state->x[0][i];
#line 173
      state->x[0][i] ^= state->x[3][i];
#line 173
      state->x[2][i] ^= state->x[5][i];
#line 173
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 173
      state->x[6][i] ^= state->x[1][i];
#line 174
      state->x[1][i] = ((state->x[1][i] & 3689348814741910323ULL) << 2) | ((state->x[1][i] & 0xccccccccccccccccULL) >> 2);
#line 174
      state->x[3][i] = ((state->x[3][i] & 3689348814741910323ULL) << 2) | ((state->x[3][i] & 0xccccccccccccccccULL) >> 2);
#line 174
      state->x[5][i] = ((state->x[5][i] & 3689348814741910323ULL) << 2) | ((state->x[5][i] & 0xccccccccccccccccULL) >> 2);
#line 174
      state->x[7][i] = ((state->x[7][i] & 3689348814741910323ULL) << 2) | ((state->x[7][i] & 0xccccccccccccccccULL) >> 2);
#line 171
      i ++;
    }
#line 178
    i = (uint64 )0;
#line 178
    while (i < 2ULL) {
#line 179
      state->x[6][i] = ~ state->x[6][i];
#line 179
      state->x[7][i] = ~ state->x[7][i];
#line 179
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 2ULL]) + i);
#line 179
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 2ULL]) + (i + 2ULL));
#line 179
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 2ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 179
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 2ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 179
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 179
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 179
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 179
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 179
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 179
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 179
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 179
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 179
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 179
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 179
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 179
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 179
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 179
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 179
      state->x[4][i] ^= temp0;
#line 179
      state->x[5][i] ^= temp1;
#line 180
      state->x[1][i] ^= state->x[2][i];
#line 180
      state->x[3][i] ^= state->x[4][i];
#line 180
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 180
      state->x[7][i] ^= state->x[0][i];
#line 180
      state->x[0][i] ^= state->x[3][i];
#line 180
      state->x[2][i] ^= state->x[5][i];
#line 180
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 180
      state->x[6][i] ^= state->x[1][i];
#line 181
      state->x[1][i] = ((state->x[1][i] & 1085102592571150095ULL) << 4) | ((state->x[1][i] & 0xf0f0f0f0f0f0f0f0ULL) >> 4);
#line 181
      state->x[3][i] = ((state->x[3][i] & 1085102592571150095ULL) << 4) | ((state->x[3][i] & 0xf0f0f0f0f0f0f0f0ULL) >> 4);
#line 181
      state->x[5][i] = ((state->x[5][i] & 1085102592571150095ULL) << 4) | ((state->x[5][i] & 0xf0f0f0f0f0f0f0f0ULL) >> 4);
#line 181
      state->x[7][i] = ((state->x[7][i] & 1085102592571150095ULL) << 4) | ((state->x[7][i] & 0xf0f0f0f0f0f0f0f0ULL) >> 4);
#line 178
      i ++;
    }
#line 185
    i = (uint64 )0;
#line 185
    while (i < 2ULL) {
#line 186
      state->x[6][i] = ~ state->x[6][i];
#line 186
      state->x[7][i] = ~ state->x[7][i];
#line 186
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 3ULL]) + i);
#line 186
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 3ULL]) + (i + 2ULL));
#line 186
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 3ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 186
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 3ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 186
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 186
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 186
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 186
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 186
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 186
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 186
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 186
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 186
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 186
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 186
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 186
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 186
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 186
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 186
      state->x[4][i] ^= temp0;
#line 186
      state->x[5][i] ^= temp1;
#line 187
      state->x[1][i] ^= state->x[2][i];
#line 187
      state->x[3][i] ^= state->x[4][i];
#line 187
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 187
      state->x[7][i] ^= state->x[0][i];
#line 187
      state->x[0][i] ^= state->x[3][i];
#line 187
      state->x[2][i] ^= state->x[5][i];
#line 187
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 187
      state->x[6][i] ^= state->x[1][i];
#line 188
      state->x[1][i] = ((state->x[1][i] & 71777214294589695ULL) << 8) | ((state->x[1][i] & 0xff00ff00ff00ff00ULL) >> 8);
#line 188
      state->x[3][i] = ((state->x[3][i] & 71777214294589695ULL) << 8) | ((state->x[3][i] & 0xff00ff00ff00ff00ULL) >> 8);
#line 188
      state->x[5][i] = ((state->x[5][i] & 71777214294589695ULL) << 8) | ((state->x[5][i] & 0xff00ff00ff00ff00ULL) >> 8);
#line 188
      state->x[7][i] = ((state->x[7][i] & 71777214294589695ULL) << 8) | ((state->x[7][i] & 0xff00ff00ff00ff00ULL) >> 8);
#line 185
      i ++;
    }
#line 192
    i = (uint64 )0;
#line 192
    while (i < 2ULL) {
#line 193
      state->x[6][i] = ~ state->x[6][i];
#line 193
      state->x[7][i] = ~ state->x[7][i];
#line 193
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 4ULL]) + i);
#line 193
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 4ULL]) + (i + 2ULL));
#line 193
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 4ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 193
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 4ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 193
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 193
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 193
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 193
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 193
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 193
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 193
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 193
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 193
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 193
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 193
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 193
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 193
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 193
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 193
      state->x[4][i] ^= temp0;
#line 193
      state->x[5][i] ^= temp1;
#line 194
      state->x[1][i] ^= state->x[2][i];
#line 194
      state->x[3][i] ^= state->x[4][i];
#line 194
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 194
      state->x[7][i] ^= state->x[0][i];
#line 194
      state->x[0][i] ^= state->x[3][i];
#line 194
      state->x[2][i] ^= state->x[5][i];
#line 194
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 194
      state->x[6][i] ^= state->x[1][i];
#line 195
      state->x[1][i] = ((state->x[1][i] & 281470681808895ULL) << 16) | ((state->x[1][i] & 0xffff0000ffff0000ULL) >> 16);
#line 195
      state->x[3][i] = ((state->x[3][i] & 281470681808895ULL) << 16) | ((state->x[3][i] & 0xffff0000ffff0000ULL) >> 16);
#line 195
      state->x[5][i] = ((state->x[5][i] & 281470681808895ULL) << 16) | ((state->x[5][i] & 0xffff0000ffff0000ULL) >> 16);
#line 195
      state->x[7][i] = ((state->x[7][i] & 281470681808895ULL) << 16) | ((state->x[7][i] & 0xffff0000ffff0000ULL) >> 16);
#line 192
      i ++;
    }
#line 199
    i = (uint64 )0;
#line 199
    while (i < 2ULL) {
#line 200
      state->x[6][i] = ~ state->x[6][i];
#line 200
      state->x[7][i] = ~ state->x[7][i];
#line 200
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 5ULL]) + i);
#line 200
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 5ULL]) + (i + 2ULL));
#line 200
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 5ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 200
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 5ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 200
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 200
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 200
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 200
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 200
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 200
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 200
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 200
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 200
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 200
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 200
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 200
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 200
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 200
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 200
      state->x[4][i] ^= temp0;
#line 200
      state->x[5][i] ^= temp1;
#line 201
      state->x[1][i] ^= state->x[2][i];
#line 201
      state->x[3][i] ^= state->x[4][i];
#line 201
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 201
      state->x[7][i] ^= state->x[0][i];
#line 201
      state->x[0][i] ^= state->x[3][i];
#line 201
      state->x[2][i] ^= state->x[5][i];
#line 201
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 201
      state->x[6][i] ^= state->x[1][i];
#line 202
      state->x[1][i] = (state->x[1][i] << 32) | (state->x[1][i] >> 32);
#line 202
      state->x[3][i] = (state->x[3][i] << 32) | (state->x[3][i] >> 32);
#line 202
      state->x[5][i] = (state->x[5][i] << 32) | (state->x[5][i] >> 32);
#line 202
      state->x[7][i] = (state->x[7][i] << 32) | (state->x[7][i] >> 32);
#line 199
      i ++;
    }
#line 206
    i = (uint64 )0;
#line 206
    while (i < 2ULL) {
#line 207
      state->x[6][i] = ~ state->x[6][i];
#line 207
      state->x[7][i] = ~ state->x[7][i];
#line 207
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 6ULL]) + i);
#line 207
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 6ULL]) + (i + 2ULL));
#line 207
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 6ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 207
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 6ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 207
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 207
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 207
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 207
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 207
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 207
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 207
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 207
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 207
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 207
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 207
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 207
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 207
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 207
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 207
      state->x[4][i] ^= temp0;
#line 207
      state->x[5][i] ^= temp1;
#line 208
      state->x[1][i] ^= state->x[2][i];
#line 208
      state->x[3][i] ^= state->x[4][i];
#line 208
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 208
      state->x[7][i] ^= state->x[0][i];
#line 208
      state->x[0][i] ^= state->x[3][i];
#line 208
      state->x[2][i] ^= state->x[5][i];
#line 208
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 208
      state->x[6][i] ^= state->x[1][i];
#line 206
      i ++;
    }
#line 211
    i = (uint64 )1;
#line 211
    while (i < 8ULL) {
#line 212
      temp0 = state->x[i][0];
#line 212
      state->x[i][0] = state->x[i][1];
#line 212
      state->x[i][1] = temp0;
#line 211
      i += 2ULL;
    }
#line 162
    roundnumber += 7ULL;
  }
#line 216
  return;
}
}
#line 219 "jh_ansi_opt64.c"
static void F8(hashState *state ) 
{ 
  uint64 i ;

  {
#line 224
  i = (uint64 )0;
#line 224
  while (i < 8ULL) {
#line 224
    state->x[i >> 1][i & 1ULL] ^= *((uint64 *)(state->buffer) + i);
#line 224
    i ++;
  }
#line 227
  E8(state);
#line 230
  i = (uint64 )0;
#line 230
  while (i < 8ULL) {
#line 230
    state->x[(8ULL + i) >> 1][(8ULL + i) & 1ULL] ^= *((uint64 *)(state->buffer) + i);
#line 230
    i ++;
  }
#line 231
  return;
}
}
#line 234 "jh_ansi_opt64.c"
static HashReturn Init___0(hashState *state , int hashbitlen ) 
{ 


  {
#line 236
  state->databitlen = 0ULL;
#line 237
  state->datasize_in_buffer = 0ULL;
#line 240
  state->hashbitlen = hashbitlen;
#line 243
  switch (hashbitlen) {
  case 224: 
#line 245
  memcpy((void * __restrict  )(state->x), (void const   * __restrict  )(JH224_H0),
         (size_t )128);
#line 245
  break;
  case 256: 
#line 246
  memcpy((void * __restrict  )(state->x), (void const   * __restrict  )(JH256_H0),
         (size_t )128);
#line 246
  break;
  case 384: 
#line 247
  memcpy((void * __restrict  )(state->x), (void const   * __restrict  )(JH384_H0),
         (size_t )128);
#line 247
  break;
  case 512: 
#line 248
  memcpy((void * __restrict  )(state->x), (void const   * __restrict  )(JH512_H0),
         (size_t )128);
#line 248
  break;
  }
#line 251
  return ((HashReturn )0);
}
}
#line 256 "jh_ansi_opt64.c"
static HashReturn Update___0(hashState *state , BitSequence const   *data , DataLength databitlen ) 
{ 
  DataLength index___0 ;

  {
#line 260
  state->databitlen += databitlen;
#line 261
  index___0 = (DataLength )0;
#line 267
  if (state->datasize_in_buffer > 0ULL) {
#line 267
    if (state->datasize_in_buffer + databitlen < 512ULL) {
#line 268
      if ((databitlen & 7ULL) == 0ULL) {
#line 269
        memcpy((void * __restrict  )(state->buffer + (state->datasize_in_buffer >> 3)),
               (void const   * __restrict  )data, (size_t )(64ULL - (state->datasize_in_buffer >> 3)));
      } else {
#line 271
        memcpy((void * __restrict  )(state->buffer + (state->datasize_in_buffer >> 3)),
               (void const   * __restrict  )data, (size_t )((64ULL - (state->datasize_in_buffer >> 3)) + 1ULL));
      }
#line 272
      state->datasize_in_buffer += databitlen;
#line 273
      databitlen = (DataLength )0;
    }
  }
#line 277
  if (state->datasize_in_buffer > 0ULL) {
#line 277
    if (state->datasize_in_buffer + databitlen >= 512ULL) {
#line 278
      memcpy((void * __restrict  )(state->buffer + (state->datasize_in_buffer >> 3)),
             (void const   * __restrict  )data, (size_t )(64ULL - (state->datasize_in_buffer >> 3)));
#line 279
      index___0 = 64ULL - (state->datasize_in_buffer >> 3);
#line 280
      databitlen -= 512ULL - state->datasize_in_buffer;
#line 281
      F8(state);
#line 282
      state->datasize_in_buffer = 0ULL;
    }
  }
#line 286
  while (databitlen >= 512ULL) {
#line 287
    memcpy((void * __restrict  )(state->buffer), (void const   * __restrict  )(data + index___0),
           (size_t )64);
#line 288
    F8(state);
#line 286
    index___0 += 64ULL;
#line 286
    databitlen -= 512ULL;
  }
#line 292
  if (databitlen > 0ULL) {
#line 293
    if ((databitlen & 7ULL) == 0ULL) {
#line 294
      memcpy((void * __restrict  )(state->buffer), (void const   * __restrict  )(data + index___0),
             (size_t )((databitlen & 511ULL) >> 3));
    } else {
#line 296
      memcpy((void * __restrict  )(state->buffer), (void const   * __restrict  )(data + index___0),
             (size_t )(((databitlen & 511ULL) >> 3) + 1ULL));
    }
#line 297
    state->datasize_in_buffer = databitlen;
  }
#line 300
  return ((HashReturn )0);
}
}
#line 304 "jh_ansi_opt64.c"
static HashReturn Final___0(hashState *state , BitSequence *hashval ) 
{ 
  unsigned int i ;

  {
#line 308
  if ((state->databitlen & 511ULL) == 0ULL) {
#line 310
    memset((void *)(state->buffer), 0, (size_t )64);
#line 311
    state->buffer[0] = (unsigned char)128;
#line 312
    state->buffer[63] = (unsigned char )(state->databitlen & 255ULL);
#line 313
    state->buffer[62] = (unsigned char )((state->databitlen >> 8) & 255ULL);
#line 314
    state->buffer[61] = (unsigned char )((state->databitlen >> 16) & 255ULL);
#line 315
    state->buffer[60] = (unsigned char )((state->databitlen >> 24) & 255ULL);
#line 316
    state->buffer[59] = (unsigned char )((state->databitlen >> 32) & 255ULL);
#line 317
    state->buffer[58] = (unsigned char )((state->databitlen >> 40) & 255ULL);
#line 318
    state->buffer[57] = (unsigned char )((state->databitlen >> 48) & 255ULL);
#line 319
    state->buffer[56] = (unsigned char )((state->databitlen >> 56) & 255ULL);
#line 320
    F8(state);
  } else {
#line 324
    if ((state->datasize_in_buffer & 7ULL) == 0ULL) {
#line 325
      i = (unsigned int )((state->databitlen & 511ULL) >> 3);
#line 325
      while (i < 64U) {
#line 325
        state->buffer[i] = (unsigned char)0;
#line 325
        i ++;
      }
    } else {
#line 327
      i = (unsigned int )(((state->databitlen & 511ULL) >> 3) + 1ULL);
#line 327
      while (i < 64U) {
#line 327
        state->buffer[i] = (unsigned char)0;
#line 327
        i ++;
      }
    }
#line 330
    state->buffer[(state->databitlen & 511ULL) >> 3] = (unsigned char )((int )state->buffer[(state->databitlen & 511ULL) >> 3] | (1 << (7ULL - (state->databitlen & 7ULL))));
#line 332
    F8(state);
#line 333
    memset((void *)(state->buffer), 0, (size_t )64);
#line 334
    state->buffer[63] = (unsigned char )(state->databitlen & 255ULL);
#line 335
    state->buffer[62] = (unsigned char )((state->databitlen >> 8) & 255ULL);
#line 336
    state->buffer[61] = (unsigned char )((state->databitlen >> 16) & 255ULL);
#line 337
    state->buffer[60] = (unsigned char )((state->databitlen >> 24) & 255ULL);
#line 338
    state->buffer[59] = (unsigned char )((state->databitlen >> 32) & 255ULL);
#line 339
    state->buffer[58] = (unsigned char )((state->databitlen >> 40) & 255ULL);
#line 340
    state->buffer[57] = (unsigned char )((state->databitlen >> 48) & 255ULL);
#line 341
    state->buffer[56] = (unsigned char )((state->databitlen >> 56) & 255ULL);
#line 342
    F8(state);
  }
#line 346
  switch (state->hashbitlen) {
  case 224: 
#line 347
  memcpy((void * __restrict  )hashval, (void const   * __restrict  )(((unsigned char *)(state->x) + 64) + 36),
         (size_t )28);
#line 347
  break;
  case 256: 
#line 348
  memcpy((void * __restrict  )hashval, (void const   * __restrict  )(((unsigned char *)(state->x) + 64) + 32),
         (size_t )32);
#line 348
  break;
  case 384: 
#line 349
  memcpy((void * __restrict  )hashval, (void const   * __restrict  )(((unsigned char *)(state->x) + 64) + 16),
         (size_t )48);
#line 349
  break;
  case 512: 
#line 350
  memcpy((void * __restrict  )hashval, (void const   * __restrict  )((unsigned char *)(state->x) + 64),
         (size_t )64);
#line 350
  break;
  }
#line 353
  return ((HashReturn )0);
}
}
#line 360 "jh_ansi_opt64.c"
static HashReturn Hash(int hashbitlen , BitSequence const   *data , DataLength databitlen ,
                       BitSequence *hashval ) 
{ 
  hashState state ;

  {
#line 364
  if (hashbitlen == 224) {
#line 365
    Init___0(& state, hashbitlen);
#line 366
    Update___0(& state, data, databitlen);
#line 367
    Final___0(& state, hashval);
#line 368
    return ((HashReturn )0);
  } else
#line 364
  if (hashbitlen == 256) {
#line 365
    Init___0(& state, hashbitlen);
#line 366
    Update___0(& state, data, databitlen);
#line 367
    Final___0(& state, hashval);
#line 368
    return ((HashReturn )0);
  } else
#line 364
  if (hashbitlen == 384) {
#line 365
    Init___0(& state, hashbitlen);
#line 366
    Update___0(& state, data, databitlen);
#line 367
    Final___0(& state, hashval);
#line 368
    return ((HashReturn )0);
  } else
#line 364
  if (hashbitlen == 512) {
#line 365
    Init___0(& state, hashbitlen);
#line 366
    Update___0(& state, data, databitlen);
#line 367
    Final___0(& state, hashval);
#line 368
    return ((HashReturn )0);
  } else {
#line 371
    return ((HashReturn )2);
  }
}
}
#line 374 "jh_ansi_opt64.c"
void jh(unsigned int bit_len , uint8_t const   *input , size_t input_bit_length ,
        uint8_t *output___0 ) 
{ 
  HashReturn ret ;
  HashReturn tmp ;
  int tmp___0 ;

  {
#line 376
  tmp = Hash((int )bit_len, input, (DataLength )input_bit_length, output___0);
#line 376
  ret = tmp;
#line 377
  if ((unsigned int )ret == 0U) {
#line 377
    tmp___0 = 1;
  } else {
#line 377
    __assert_fail("ret == SUCCESS", "jh_ansi_opt64.c", 377, "jh");
#line 377
    tmp___0 = 0;
  }
#line 378
  return;
}
}
#line 1 "cil-vdmaxD4e.o"
#pragma merger("0","/tmp/cil-Kf5tE_l6.i","")
#line 17 "keccak.c"
uint64_t const   keccakf_rndc[24]  = 
#line 17 "keccak.c"
  {      (uint64_t const   )1,      (uint64_t const   )32898,      (uint64_t const   )0x800000000000808aULL,      (uint64_t const   )0x8000000080008000ULL, 
        (uint64_t const   )32907,      (uint64_t const   )2147483649U,      (uint64_t const   )0x8000000080008081ULL,      (uint64_t const   )0x8000000000008009ULL, 
        (uint64_t const   )138,      (uint64_t const   )136,      (uint64_t const   )2147516425U,      (uint64_t const   )2147483658U, 
        (uint64_t const   )2147516555U,      (uint64_t const   )0x800000000000008bULL,      (uint64_t const   )0x8000000000008089ULL,      (uint64_t const   )0x8000000000008003ULL, 
        (uint64_t const   )0x8000000000008002ULL,      (uint64_t const   )0x8000000000000080ULL,      (uint64_t const   )32778,      (uint64_t const   )0x800000008000000aULL, 
        (uint64_t const   )0x8000000080008081ULL,      (uint64_t const   )0x8000000000008080ULL,      (uint64_t const   )2147483649U,      (uint64_t const   )0x8000000080008008ULL};
#line 29 "keccak.c"
int const   keccakf_rotc[24]  = 
#line 29
  {      (int const   )1,      (int const   )3,      (int const   )6,      (int const   )10, 
        (int const   )15,      (int const   )21,      (int const   )28,      (int const   )36, 
        (int const   )45,      (int const   )55,      (int const   )2,      (int const   )14, 
        (int const   )27,      (int const   )41,      (int const   )56,      (int const   )8, 
        (int const   )25,      (int const   )43,      (int const   )62,      (int const   )18, 
        (int const   )39,      (int const   )61,      (int const   )20,      (int const   )44};
#line 35 "keccak.c"
int const   keccakf_piln[24]  = 
#line 35
  {      (int const   )10,      (int const   )7,      (int const   )11,      (int const   )17, 
        (int const   )18,      (int const   )3,      (int const   )5,      (int const   )16, 
        (int const   )8,      (int const   )21,      (int const   )24,      (int const   )4, 
        (int const   )15,      (int const   )23,      (int const   )19,      (int const   )13, 
        (int const   )12,      (int const   )2,      (int const   )20,      (int const   )14, 
        (int const   )22,      (int const   )9,      (int const   )6,      (int const   )1};
#line 43 "keccak.c"
void keccakf(uint64_t *st , int rounds ) 
{ 
  int i ;
  int j ;
  int round___0 ;
  uint64_t t ;
  uint64_t bc[5] ;

  {
#line 48
  round___0 = 0;
#line 48
  while (round___0 < rounds) {
#line 51
    bc[0] = (((*(st + 0) ^ *(st + 5)) ^ *(st + 10)) ^ *(st + 15)) ^ *(st + 20);
#line 52
    bc[1] = (((*(st + 1) ^ *(st + 6)) ^ *(st + 11)) ^ *(st + 16)) ^ *(st + 21);
#line 53
    bc[2] = (((*(st + 2) ^ *(st + 7)) ^ *(st + 12)) ^ *(st + 17)) ^ *(st + 22);
#line 54
    bc[3] = (((*(st + 3) ^ *(st + 8)) ^ *(st + 13)) ^ *(st + 18)) ^ *(st + 23);
#line 55
    bc[4] = (((*(st + 4) ^ *(st + 9)) ^ *(st + 14)) ^ *(st + 19)) ^ *(st + 24);
#line 57
    i = 0;
#line 57
    while (i < 5) {
#line 58
      t = bc[(i + 4) % 5] ^ ((bc[(i + 1) % 5] << 1) | (bc[(i + 1) % 5] >> 63));
#line 59
      *(st + i) ^= t;
#line 60
      *(st + (i + 5)) ^= t;
#line 61
      *(st + (i + 10)) ^= t;
#line 62
      *(st + (i + 15)) ^= t;
#line 63
      *(st + (i + 20)) ^= t;
#line 57
      i ++;
    }
#line 67
    t = *(st + 1);
#line 68
    i = 0;
#line 68
    while (i < 24) {
#line 69
      bc[0] = *(st + keccakf_piln[i]);
#line 70
      *(st + keccakf_piln[i]) = (t << keccakf_rotc[i]) | (t >> (64 - (int )keccakf_rotc[i]));
#line 71
      t = bc[0];
#line 68
      i ++;
    }
#line 75
    j = 0;
#line 75
    while (j < 25) {
#line 76
      bc[0] = *(st + j);
#line 77
      bc[1] = *(st + (j + 1));
#line 78
      bc[2] = *(st + (j + 2));
#line 79
      bc[3] = *(st + (j + 3));
#line 80
      bc[4] = *(st + (j + 4));
#line 81
      *(st + j) ^= ~ bc[1] & bc[2];
#line 82
      *(st + (j + 1)) ^= ~ bc[2] & bc[3];
#line 83
      *(st + (j + 2)) ^= ~ bc[3] & bc[4];
#line 84
      *(st + (j + 3)) ^= ~ bc[4] & bc[0];
#line 85
      *(st + (j + 4)) ^= ~ bc[0] & bc[1];
#line 75
      j += 5;
    }
#line 89
    *(st + 0) ^= (unsigned long long )keccakf_rndc[round___0];
#line 48
    round___0 ++;
  }
#line 91
  return;
}
}
#line 96 "keccak.c"
void keccak(uint8_t const   *in , int inlen , uint8_t *md , int mdlen ) 
{ 
  state_t st ;
  uint8_t temp[144] ;
  int i ;
  int rsiz ;
  int rsizw ;
  int tmp ;

  {
#line 102
  if (sizeof(state_t ) == (unsigned long )mdlen) {
#line 102
    rsiz = 136;
  } else {
#line 102
    rsiz = 200 - 2 * mdlen;
  }
#line 103
  rsizw = rsiz / 8;
#line 105
  memset((void *)(st), 0, sizeof(st));
#line 107
  while (inlen >= rsiz) {
#line 108
    i = 0;
#line 108
    while (i < rsizw) {
#line 109
      st[i] ^= *((uint64_t *)in + i);
#line 108
      i ++;
    }
#line 110
    keccakf((uint64_t *)(st), 24);
#line 107
    inlen -= rsiz;
#line 107
    in += rsiz;
  }
#line 114
  memcpy((void * __restrict  )(temp), (void const   * __restrict  )in, (size_t )inlen);
#line 115
  tmp = inlen;
#line 115
  inlen ++;
#line 115
  temp[tmp] = (uint8_t )1;
#line 116
  memset((void *)(temp + inlen), 0, (size_t )(rsiz - inlen));
#line 117
  temp[rsiz - 1] = (uint8_t )((int )temp[rsiz - 1] | 128);
#line 119
  i = 0;
#line 119
  while (i < rsizw) {
#line 120
    st[i] ^= *((uint64_t *)(temp) + i);
#line 119
    i ++;
  }
#line 122
  keccakf((uint64_t *)(st), 24);
#line 124
  memcpy((void * __restrict  )md, (void const   * __restrict  )(st), (size_t )mdlen);
#line 125
  return;
}
}
#line 127 "keccak.c"
void keccak1600(uint8_t const   *in , int inlen , uint8_t *md ) 
{ 


  {
#line 129
  keccak(in, inlen, md, (int )sizeof(state_t ));
#line 130
  return;
}
}
#line 1 "cil-HGM8GGTh.o"
#pragma merger("0","/tmp/cil-RcQVGXbD.i","")
#line 1669 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/wasi/api.h"
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_args_get)(uint8_t **argv ,
                                                                                 uint8_t *argv_buf )  __attribute__((__import_name__("args_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1682
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_args_sizes_get)(__wasi_size_t *argc ,
                                                                                       __wasi_size_t *argv_buf_size )  __attribute__((__import_name__("args_sizes_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1701
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_environ_get)(uint8_t **environ ,
                                                                                    uint8_t *environ_buf )  __attribute__((__import_name__("environ_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1714
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_environ_sizes_get)(__wasi_size_t *argc ,
                                                                                          __wasi_size_t *argv_buf_size )  __attribute__((__import_name__("environ_sizes_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1735
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_clock_res_get)(__wasi_clockid_t id ,
                                                                                      __wasi_timestamp_t *resolution )  __attribute__((__import_name__("clock_res_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1755
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_clock_time_get)(__wasi_clockid_t id ,
                                                                                       __wasi_timestamp_t precision ,
                                                                                       __wasi_timestamp_t *time )  __attribute__((__import_name__("clock_time_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1780
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_advise)(__wasi_fd_t fd ,
                                                                                  __wasi_filesize_t offset ,
                                                                                  __wasi_filesize_t len ,
                                                                                  __wasi_advice_t advice )  __attribute__((__import_name__("fd_advise"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1807
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_allocate)(__wasi_fd_t fd ,
                                                                                    __wasi_filesize_t offset ,
                                                                                    __wasi_filesize_t len )  __attribute__((__import_name__("fd_allocate"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1829
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_close)(__wasi_fd_t fd )  __attribute__((__import_name__("fd_close"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1841
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_datasync)(__wasi_fd_t fd )  __attribute__((__import_name__("fd_datasync"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1853
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_fdstat_get)(__wasi_fd_t fd ,
                                                                                      __wasi_fdstat_t *stat )  __attribute__((__import_name__("fd_fdstat_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1870
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_fdstat_set_flags)(__wasi_fd_t fd ,
                                                                                            __wasi_fdflags_t flags )  __attribute__((__import_name__("fd_fdstat_set_flags"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1887
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_fdstat_set_rights)(__wasi_fd_t fd ,
                                                                                             __wasi_rights_t fs_rights_base ,
                                                                                             __wasi_rights_t fs_rights_inheriting )  __attribute__((__import_name__("fd_fdstat_set_rights"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1905
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_filestat_get)(__wasi_fd_t fd ,
                                                                                        __wasi_filestat_t *buf )  __attribute__((__import_name__("fd_filestat_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1922
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_filestat_set_size)(__wasi_fd_t fd ,
                                                                                             __wasi_filesize_t size )  __attribute__((__import_name__("fd_filestat_set_size"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1939
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_filestat_set_times)(__wasi_fd_t fd ,
                                                                                              __wasi_timestamp_t atim ,
                                                                                              __wasi_timestamp_t mtim ,
                                                                                              __wasi_fstflags_t fst_flags )  __attribute__((__import_name__("fd_filestat_set_times"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1966
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_pread)(__wasi_fd_t fd ,
                                                                                 __wasi_iovec_t const   *iovs ,
                                                                                 size_t iovs_len ,
                                                                                 __wasi_filesize_t offset ,
                                                                                 __wasi_size_t *nread )  __attribute__((__import_name__("fd_pread"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 1997
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_prestat_get)(__wasi_fd_t fd ,
                                                                                       __wasi_prestat_t *buf )  __attribute__((__import_name__("fd_prestat_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2013
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_prestat_dir_name)(__wasi_fd_t fd ,
                                                                                            uint8_t *path ,
                                                                                            __wasi_size_t path_len )  __attribute__((__import_name__("fd_prestat_dir_name"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2032
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_pwrite)(__wasi_fd_t fd ,
                                                                                  __wasi_ciovec_t const   *iovs ,
                                                                                  size_t iovs_len ,
                                                                                  __wasi_filesize_t offset ,
                                                                                  __wasi_size_t *nwritten )  __attribute__((__import_name__("fd_pwrite"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2064
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_read)(__wasi_fd_t fd ,
                                                                                __wasi_iovec_t const   *iovs ,
                                                                                size_t iovs_len ,
                                                                                __wasi_size_t *nread )  __attribute__((__import_name__("fd_read"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2098
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_readdir)(__wasi_fd_t fd ,
                                                                                   uint8_t *buf ,
                                                                                   __wasi_size_t buf_len ,
                                                                                   __wasi_dircookie_t cookie ,
                                                                                   __wasi_size_t *bufused )  __attribute__((__import_name__("fd_readdir"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2133
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_renumber)(__wasi_fd_t fd ,
                                                                                    __wasi_fd_t to )  __attribute__((__import_name__("fd_renumber"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2150
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_seek)(__wasi_fd_t fd ,
                                                                                __wasi_filedelta_t offset ,
                                                                                __wasi_whence_t whence ,
                                                                                __wasi_filesize_t *newoffset )  __attribute__((__import_name__("fd_seek"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2177
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_sync)(__wasi_fd_t fd )  __attribute__((__import_name__("fd_sync"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2189
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_tell)(__wasi_fd_t fd ,
                                                                                __wasi_filesize_t *offset )  __attribute__((__import_name__("fd_tell"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2206
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_fd_write)(__wasi_fd_t fd ,
                                                                                 __wasi_ciovec_t const   *iovs ,
                                                                                 size_t iovs_len ,
                                                                                 __wasi_size_t *nwritten )  __attribute__((__import_name__("fd_write"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2233
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_create_directory)(__wasi_fd_t fd ,
                                                                                              char const   *path ,
                                                                                              size_t path_len )  __attribute__((__import_name__("path_create_directory"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2255
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_filestat_get)(__wasi_fd_t fd ,
                                                                                          __wasi_lookupflags_t flags ,
                                                                                          char const   *path ,
                                                                                          size_t path_len ,
                                                                                          __wasi_filestat_t *buf )  __attribute__((__import_name__("path_filestat_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2287
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_filestat_set_times)(__wasi_fd_t fd ,
                                                                                                __wasi_lookupflags_t flags ,
                                                                                                char const   *path ,
                                                                                                size_t path_len ,
                                                                                                __wasi_timestamp_t atim ,
                                                                                                __wasi_timestamp_t mtim ,
                                                                                                __wasi_fstflags_t fst_flags )  __attribute__((__import_name__("path_filestat_set_times"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2329
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_link)(__wasi_fd_t old_fd ,
                                                                                  __wasi_lookupflags_t old_flags ,
                                                                                  char const   *old_path ,
                                                                                  size_t old_path_len ,
                                                                                  __wasi_fd_t new_fd ,
                                                                                  char const   *new_path ,
                                                                                  size_t new_path_len )  __attribute__((__import_name__("path_link"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2376
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_open)(__wasi_fd_t fd ,
                                                                                  __wasi_lookupflags_t dirflags ,
                                                                                  char const   *path ,
                                                                                  size_t path_len ,
                                                                                  __wasi_oflags_t oflags ,
                                                                                  __wasi_rights_t fs_rights_base ,
                                                                                  __wasi_rights_t fs_rights_inherting ,
                                                                                  __wasi_fdflags_t fdflags ,
                                                                                  __wasi_fd_t *opened_fd )  __attribute__((__import_name__("path_open"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2429
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_readlink)(__wasi_fd_t fd ,
                                                                                      char const   *path ,
                                                                                      size_t path_len ,
                                                                                      uint8_t *buf ,
                                                                                      __wasi_size_t buf_len ,
                                                                                      __wasi_size_t *bufused )  __attribute__((__import_name__("path_readlink"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2464
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_remove_directory)(__wasi_fd_t fd ,
                                                                                              char const   *path ,
                                                                                              size_t path_len )  __attribute__((__import_name__("path_remove_directory"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2486
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_rename)(__wasi_fd_t fd ,
                                                                                    char const   *old_path ,
                                                                                    size_t old_path_len ,
                                                                                    __wasi_fd_t new_fd ,
                                                                                    char const   *new_path ,
                                                                                    size_t new_path_len )  __attribute__((__import_name__("path_rename"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2523
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_symlink)(char const   *old_path ,
                                                                                     size_t old_path_len ,
                                                                                     __wasi_fd_t fd ,
                                                                                     char const   *new_path ,
                                                                                     size_t new_path_len )  __attribute__((__import_name__("path_symlink"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2556
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_path_unlink_file)(__wasi_fd_t fd ,
                                                                                         char const   *path ,
                                                                                         size_t path_len )  __attribute__((__import_name__("path_unlink_file"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2577
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_poll_oneoff)(__wasi_subscription_t const   *in ,
                                                                                    __wasi_event_t *out ,
                                                                                    __wasi_size_t nsubscriptions ,
                                                                                    __wasi_size_t *nevents )  __attribute__((__import_name__("poll_oneoff"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2608
extern void __wasi_proc_exit(__wasi_exitcode_t rval )  __attribute__((__import_name__("proc_exit"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2621
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_proc_raise)(__wasi_signal_t sig )  __attribute__((__import_name__("proc_raise"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2636
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_sched_yield)(void)  __attribute__((__import_name__("sched_yield"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2652
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_random_get)(uint8_t *buf ,
                                                                                   __wasi_size_t buf_len )  __attribute__((__import_name__("random_get"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2670
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_sock_recv)(__wasi_fd_t fd ,
                                                                                  __wasi_iovec_t const   *ri_data ,
                                                                                  size_t ri_data_len ,
                                                                                  __wasi_riflags_t ri_flags ,
                                                                                  __wasi_size_t *ro_datalen ,
                                                                                  __wasi_roflags_t *ro_flags )  __attribute__((__import_name__("sock_recv"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2707
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_sock_send)(__wasi_fd_t fd ,
                                                                                  __wasi_ciovec_t const   *si_data ,
                                                                                  size_t si_data_len ,
                                                                                  __wasi_siflags_t si_flags ,
                                                                                  __wasi_size_t *so_datalen )  __attribute__((__import_name__("sock_send"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 2739
extern __wasi_errno_t ( __attribute__((__warn_unused_result__)) __wasi_sock_shutdown)(__wasi_fd_t fd ,
                                                                                      __wasi_sdflags_t how )  __attribute__((__import_name__("sock_shutdown"),
__import_module__("wasi_snapshot_preview1"))) ;
#line 72 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/stdio.h"
extern FILE * const  stdin ;
#line 73
extern FILE * const  stdout ;
#line 74
extern FILE * const  stderr ;
#line 80
extern FILE *fopen(char const   * __restrict   , char const   * __restrict   ) ;
#line 81
extern FILE *freopen(char const   * __restrict   , char const   * __restrict   , FILE * __restrict   ) ;
#line 82
extern int fclose(FILE * ) ;
#line 84
extern int remove(char const   * ) ;
#line 85
extern int rename(char const   * , char const   * ) ;
#line 87
extern int feof(FILE * ) ;
#line 88
extern int ferror(FILE * ) ;
#line 89
extern int fflush(FILE * ) ;
#line 90
extern void clearerr(FILE * ) ;
#line 92
extern int fseek(FILE * , long  , int  ) ;
#line 93
extern long ftell(FILE * ) ;
#line 94
extern void rewind(FILE * ) ;
#line 96
extern int fgetpos(FILE * __restrict   , fpos_t * __restrict   ) ;
#line 97
extern int fsetpos(FILE * , fpos_t const   * ) ;
#line 99
extern size_t fread(void * __restrict   , size_t  , size_t  , FILE * __restrict   ) ;
#line 100
extern size_t fwrite(void const   * __restrict   , size_t  , size_t  , FILE * __restrict   ) ;
#line 102
extern int fgetc(FILE * ) ;
#line 103
extern int getc(FILE * ) ;
#line 104
extern int getchar(void) ;
#line 105
extern int ungetc(int  , FILE * ) ;
#line 107
extern int fputc(int  , FILE * ) ;
#line 108
extern int putc(int  , FILE * ) ;
#line 109
extern int putchar(int  ) ;
#line 111
extern char *fgets(char * __restrict   , int  , FILE * __restrict   ) ;
#line 116
extern int fputs(char const   * __restrict   , FILE * __restrict   ) ;
#line 117
extern int puts(char const   * ) ;
#line 119
extern int printf(char const   * __restrict    , ...) ;
#line 120
extern int fprintf(FILE * __restrict   , char const   * __restrict    , ...) ;
#line 121
extern int sprintf(char * __restrict   , char const   * __restrict    , ...) ;
#line 122
extern int snprintf(char * __restrict   , size_t  , char const   * __restrict    , ...) ;
#line 124
extern int vprintf(char const   * __restrict   , __isoc_va_list  ) ;
#line 125
extern int vfprintf(FILE * __restrict   , char const   * __restrict   , __isoc_va_list  ) ;
#line 126
extern int vsprintf(char * __restrict   , char const   * __restrict   , __isoc_va_list  ) ;
#line 127
extern int vsnprintf(char * __restrict   , size_t  , char const   * __restrict   ,
                     __isoc_va_list  ) ;
#line 129
extern int scanf(char const   * __restrict    , ...) ;
#line 130
extern int fscanf(FILE * __restrict   , char const   * __restrict    , ...) ;
#line 131
extern int sscanf(char const   * __restrict   , char const   * __restrict    , ...) ;
#line 132
extern int vscanf(char const   * __restrict   , __isoc_va_list  ) ;
#line 133
extern int vfscanf(FILE * __restrict   , char const   * __restrict   , __isoc_va_list  ) ;
#line 134
extern int vsscanf(char const   * __restrict   , char const   * __restrict   , __isoc_va_list  ) ;
#line 136
extern void perror(char const   * ) ;
#line 138
extern int setvbuf(FILE * __restrict   , char * __restrict   , int  , size_t  ) ;
#line 139
extern void setbuf(FILE * __restrict   , char * __restrict   ) ;
#line 141
extern char *tmpnam(char * ) ;
#line 142
extern FILE *tmpfile(void) ;
#line 147
extern FILE *fmemopen(void * __restrict   , size_t  , char const   * __restrict   ) ;
#line 148
extern FILE *open_memstream(char ** , size_t * ) ;
#line 149
extern FILE *fdopen(int  , char const   * ) ;
#line 150
extern FILE *popen(char const   * , char const   * ) ;
#line 151
extern int pclose(FILE * ) ;
#line 152
extern int fileno(FILE * ) ;
#line 153
extern int fseeko(FILE * , off_t  , int  ) ;
#line 154
extern off_t ftello(FILE * ) ;
#line 155
extern int dprintf(int  , char const   * __restrict    , ...) ;
#line 156
extern int vdprintf(int  , char const   * __restrict   , __isoc_va_list  ) ;
#line 157
extern void flockfile(FILE * ) ;
#line 158
extern int ftrylockfile(FILE * ) ;
#line 159
extern void funlockfile(FILE * ) ;
#line 160
extern int getc_unlocked(FILE * ) ;
#line 161
extern int getchar_unlocked(void) ;
#line 162
extern int putc_unlocked(int  , FILE * ) ;
#line 163
extern int putchar_unlocked(int  ) ;
#line 164
extern ssize_t getdelim(char ** __restrict   , size_t * __restrict   , int  , FILE * __restrict   ) ;
#line 165
extern ssize_t getline(char ** __restrict   , size_t * __restrict   , FILE * __restrict   ) ;
#line 166
extern int renameat(int  , char const   * , int  , char const   * ) ;
#line 167
extern char *ctermid(char * ) ;
#line 175
extern char *tempnam(char const   * , char const   * ) ;
#line 180
extern char *cuserid(char * ) ;
#line 181
extern void setlinebuf(FILE * ) ;
#line 182
extern void setbuffer(FILE * , char * , size_t  ) ;
#line 183
extern int fgetc_unlocked(FILE * ) ;
#line 184
extern int fputc_unlocked(int  , FILE * ) ;
#line 185
extern int fflush_unlocked(FILE * ) ;
#line 186
extern size_t fread_unlocked(void * , size_t  , size_t  , FILE * ) ;
#line 187
extern size_t fwrite_unlocked(void const   * , size_t  , size_t  , FILE * ) ;
#line 188
extern void clearerr_unlocked(FILE * ) ;
#line 189
extern int feof_unlocked(FILE * ) ;
#line 190
extern int ferror_unlocked(FILE * ) ;
#line 191
extern int fileno_unlocked(FILE * ) ;
#line 192
extern int getw(FILE * ) ;
#line 193
extern int putw(int  , FILE * ) ;
#line 194
extern char *fgetln(FILE * , size_t * ) ;
#line 195
extern int asprintf(char ** , char const   *  , ...) ;
#line 196
extern int vasprintf(char ** , char const   * , __isoc_va_list  ) ;
#line 8 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/compat/time.h"
extern int dysize(int year ) ;
#line 54 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/time.h"
extern clock_t clock(void) ;
#line 55
extern time_t time(time_t * ) ;
#line 56
extern double difftime(time_t  , time_t  ) ;
#line 57
extern time_t mktime(struct tm * ) ;
#line 58
extern size_t strftime(char * __restrict   , size_t  , char const   * __restrict   ,
                       struct tm  const  * __restrict   ) ;
#line 59
extern struct tm *gmtime(time_t const   * ) ;
#line 60
extern struct tm *localtime(time_t const   * ) ;
#line 61
extern char *asctime(struct tm  const  * ) ;
#line 62
extern char *ctime(time_t const   * ) ;
#line 63
extern int timespec_get(struct timespec * , int  ) ;
#line 73
extern size_t strftime_l(char * __restrict   , size_t  , char const   * __restrict   ,
                         struct tm  const  * __restrict   , locale_t  ) ;
#line 75
extern struct tm *gmtime_r(time_t const   * __restrict   , struct tm * __restrict   ) ;
#line 76
extern struct tm *localtime_r(time_t const   * __restrict   , struct tm * __restrict   ) ;
#line 77
extern char *asctime_r(struct tm  const  * __restrict   , char * __restrict   ) ;
#line 78
extern char *ctime_r(time_t const   * , char * ) ;
#line 80
extern void tzset(void) ;
#line 102
extern int nanosleep(struct timespec  const  * , struct timespec * ) ;
#line 103
extern int clock_getres(clockid_t  , struct timespec * ) ;
#line 104
extern int clock_gettime(clockid_t  , struct timespec * ) ;
#line 105
extern int clock_settime(clockid_t  , struct timespec  const  * ) ;
#line 106
extern int clock_nanosleep(clockid_t  , int  , struct timespec  const  * , struct timespec * ) ;
#line 107
extern int clock_getcpuclockid(pid_t  , clockid_t * ) ;
#line 110
extern int timer_create(clockid_t  , struct sigevent * __restrict   , timer_t * __restrict   ) ;
#line 111
extern int timer_delete(timer_t  ) ;
#line 112
extern int timer_settime(timer_t  , int  , struct itimerspec  const  * __restrict   ,
                         struct itimerspec * __restrict   ) ;
#line 113
extern int timer_gettime(timer_t  , struct itimerspec * ) ;
#line 114
extern int timer_getoverrun(timer_t  ) ;
#line 116
extern char *tzname[2] ;
#line 122
extern char *strptime(char const   * __restrict   , char const   * __restrict   ,
                      struct tm * __restrict   ) ;
#line 123
extern int daylight ;
#line 124
extern long timezone ;
#line 125
extern int getdate_err ;
#line 126
extern struct tm *getdate(char const   * ) ;
#line 131
extern int stime(time_t const   * ) ;
#line 132
extern time_t timegm(struct tm * ) ;
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned int __FLOAT_BITS___0(float __f ) 
{ 
  union __anonunion___u_477865197___0 __u ;

  {
#line 58
  __u.__f = __f;
#line 59
  return (__u.__i);
}
}
#line 61 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned long long __DOUBLE_BITS___0(double __f ) 
{ 
  union __anonunion___u_302425027___0 __u ;

  {
#line 64
  __u.__f = __f;
#line 65
  return (__u.__i);
}
}
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessf___0(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 108
  if (sizeof(__x) == sizeof(float )) {
#line 108
    tmp___10 = __FLOAT_BITS___0(__x);
#line 108
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 108
    if (sizeof(__x) == sizeof(double )) {
#line 108
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 108
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 108
      tmp___12 = __fpclassifyl((long double )__x);
#line 108
      tmp___13 = tmp___12 == 0;
    }
#line 108
    tmp___14 = tmp___13;
  }
#line 108
  if (tmp___14) {
#line 108
    tmp___9 = 1;
  } else {
#line 108
    if (sizeof(__y) == sizeof(float )) {
#line 108
      tmp___4 = __FLOAT_BITS___0(__y);
#line 108
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 108
      if (sizeof(__y) == sizeof(double )) {
#line 108
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 108
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 108
        tmp___6 = __fpclassifyl((long double )__y);
#line 108
        tmp___7 = tmp___6 == 0;
      }
#line 108
      tmp___8 = tmp___7;
    }
#line 108
    tmp___9 = tmp___8;
  }
#line 108
  if (tmp___9) {
#line 108
    tmp___15 = 0;
  } else
#line 108
  if (__x < __y) {
#line 108
    tmp___15 = 1;
  } else {
#line 108
    tmp___15 = 0;
  }
#line 108
  return (tmp___15);
}
}
#line 109 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isless___0(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 109
  if (sizeof(__x) == sizeof(float )) {
#line 109
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 109
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 109
    if (sizeof(__x) == sizeof(double )) {
#line 109
      tmp___11 = __DOUBLE_BITS___0(__x);
#line 109
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 109
      tmp___12 = __fpclassifyl((long double )__x);
#line 109
      tmp___13 = tmp___12 == 0;
    }
#line 109
    tmp___14 = tmp___13;
  }
#line 109
  if (tmp___14) {
#line 109
    tmp___9 = 1;
  } else {
#line 109
    if (sizeof(__y) == sizeof(float )) {
#line 109
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 109
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 109
      if (sizeof(__y) == sizeof(double )) {
#line 109
        tmp___5 = __DOUBLE_BITS___0(__y);
#line 109
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 109
        tmp___6 = __fpclassifyl((long double )__y);
#line 109
        tmp___7 = tmp___6 == 0;
      }
#line 109
      tmp___8 = tmp___7;
    }
#line 109
    tmp___9 = tmp___8;
  }
#line 109
  if (tmp___9) {
#line 109
    tmp___15 = 0;
  } else
#line 109
  if (__x < __y) {
#line 109
    tmp___15 = 1;
  } else {
#line 109
    tmp___15 = 0;
  }
#line 109
  return (tmp___15);
}
}
#line 110 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessl___0(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 110
  if (sizeof(__x) == sizeof(float )) {
#line 110
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 110
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 110
    if (sizeof(__x) == sizeof(double )) {
#line 110
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 110
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 110
      tmp___12 = __fpclassifyl(__x);
#line 110
      tmp___13 = tmp___12 == 0;
    }
#line 110
    tmp___14 = tmp___13;
  }
#line 110
  if (tmp___14) {
#line 110
    tmp___9 = 1;
  } else {
#line 110
    if (sizeof(__y) == sizeof(float )) {
#line 110
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 110
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 110
      if (sizeof(__y) == sizeof(double )) {
#line 110
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 110
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 110
        tmp___6 = __fpclassifyl(__y);
#line 110
        tmp___7 = tmp___6 == 0;
      }
#line 110
      tmp___8 = tmp___7;
    }
#line 110
    tmp___9 = tmp___8;
  }
#line 110
  if (tmp___9) {
#line 110
    tmp___15 = 0;
  } else
#line 110
  if (__x < __y) {
#line 110
    tmp___15 = 1;
  } else {
#line 110
    tmp___15 = 0;
  }
#line 110
  return (tmp___15);
}
}
#line 111 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessequalf___0(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 111
  if (sizeof(__x) == sizeof(float )) {
#line 111
    tmp___10 = __FLOAT_BITS___0(__x);
#line 111
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 111
    if (sizeof(__x) == sizeof(double )) {
#line 111
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 111
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 111
      tmp___12 = __fpclassifyl((long double )__x);
#line 111
      tmp___13 = tmp___12 == 0;
    }
#line 111
    tmp___14 = tmp___13;
  }
#line 111
  if (tmp___14) {
#line 111
    tmp___9 = 1;
  } else {
#line 111
    if (sizeof(__y) == sizeof(float )) {
#line 111
      tmp___4 = __FLOAT_BITS___0(__y);
#line 111
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 111
      if (sizeof(__y) == sizeof(double )) {
#line 111
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 111
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 111
        tmp___6 = __fpclassifyl((long double )__y);
#line 111
        tmp___7 = tmp___6 == 0;
      }
#line 111
      tmp___8 = tmp___7;
    }
#line 111
    tmp___9 = tmp___8;
  }
#line 111
  if (tmp___9) {
#line 111
    tmp___15 = 0;
  } else
#line 111
  if (__x <= __y) {
#line 111
    tmp___15 = 1;
  } else {
#line 111
    tmp___15 = 0;
  }
#line 111
  return (tmp___15);
}
}
#line 112 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessequal___0(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 112
  if (sizeof(__x) == sizeof(float )) {
#line 112
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 112
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 112
    if (sizeof(__x) == sizeof(double )) {
#line 112
      tmp___11 = __DOUBLE_BITS___0(__x);
#line 112
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 112
      tmp___12 = __fpclassifyl((long double )__x);
#line 112
      tmp___13 = tmp___12 == 0;
    }
#line 112
    tmp___14 = tmp___13;
  }
#line 112
  if (tmp___14) {
#line 112
    tmp___9 = 1;
  } else {
#line 112
    if (sizeof(__y) == sizeof(float )) {
#line 112
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 112
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 112
      if (sizeof(__y) == sizeof(double )) {
#line 112
        tmp___5 = __DOUBLE_BITS___0(__y);
#line 112
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 112
        tmp___6 = __fpclassifyl((long double )__y);
#line 112
        tmp___7 = tmp___6 == 0;
      }
#line 112
      tmp___8 = tmp___7;
    }
#line 112
    tmp___9 = tmp___8;
  }
#line 112
  if (tmp___9) {
#line 112
    tmp___15 = 0;
  } else
#line 112
  if (__x <= __y) {
#line 112
    tmp___15 = 1;
  } else {
#line 112
    tmp___15 = 0;
  }
#line 112
  return (tmp___15);
}
}
#line 113 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessequall___0(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 113
  if (sizeof(__x) == sizeof(float )) {
#line 113
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 113
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 113
    if (sizeof(__x) == sizeof(double )) {
#line 113
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 113
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 113
      tmp___12 = __fpclassifyl(__x);
#line 113
      tmp___13 = tmp___12 == 0;
    }
#line 113
    tmp___14 = tmp___13;
  }
#line 113
  if (tmp___14) {
#line 113
    tmp___9 = 1;
  } else {
#line 113
    if (sizeof(__y) == sizeof(float )) {
#line 113
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 113
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 113
      if (sizeof(__y) == sizeof(double )) {
#line 113
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 113
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 113
        tmp___6 = __fpclassifyl(__y);
#line 113
        tmp___7 = tmp___6 == 0;
      }
#line 113
      tmp___8 = tmp___7;
    }
#line 113
    tmp___9 = tmp___8;
  }
#line 113
  if (tmp___9) {
#line 113
    tmp___15 = 0;
  } else
#line 113
  if (__x <= __y) {
#line 113
    tmp___15 = 1;
  } else {
#line 113
    tmp___15 = 0;
  }
#line 113
  return (tmp___15);
}
}
#line 114 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessgreaterf___0(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 114
  if (sizeof(__x) == sizeof(float )) {
#line 114
    tmp___10 = __FLOAT_BITS___0(__x);
#line 114
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 114
    if (sizeof(__x) == sizeof(double )) {
#line 114
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 114
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 114
      tmp___12 = __fpclassifyl((long double )__x);
#line 114
      tmp___13 = tmp___12 == 0;
    }
#line 114
    tmp___14 = tmp___13;
  }
#line 114
  if (tmp___14) {
#line 114
    tmp___9 = 1;
  } else {
#line 114
    if (sizeof(__y) == sizeof(float )) {
#line 114
      tmp___4 = __FLOAT_BITS___0(__y);
#line 114
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 114
      if (sizeof(__y) == sizeof(double )) {
#line 114
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 114
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 114
        tmp___6 = __fpclassifyl((long double )__y);
#line 114
        tmp___7 = tmp___6 == 0;
      }
#line 114
      tmp___8 = tmp___7;
    }
#line 114
    tmp___9 = tmp___8;
  }
#line 114
  if (tmp___9) {
#line 114
    tmp___15 = 0;
  } else
#line 114
  if (__x != __y) {
#line 114
    tmp___15 = 1;
  } else {
#line 114
    tmp___15 = 0;
  }
#line 114
  return (tmp___15);
}
}
#line 115 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessgreater___0(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 115
  if (sizeof(__x) == sizeof(float )) {
#line 115
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 115
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 115
    if (sizeof(__x) == sizeof(double )) {
#line 115
      tmp___11 = __DOUBLE_BITS___0(__x);
#line 115
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 115
      tmp___12 = __fpclassifyl((long double )__x);
#line 115
      tmp___13 = tmp___12 == 0;
    }
#line 115
    tmp___14 = tmp___13;
  }
#line 115
  if (tmp___14) {
#line 115
    tmp___9 = 1;
  } else {
#line 115
    if (sizeof(__y) == sizeof(float )) {
#line 115
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 115
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 115
      if (sizeof(__y) == sizeof(double )) {
#line 115
        tmp___5 = __DOUBLE_BITS___0(__y);
#line 115
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 115
        tmp___6 = __fpclassifyl((long double )__y);
#line 115
        tmp___7 = tmp___6 == 0;
      }
#line 115
      tmp___8 = tmp___7;
    }
#line 115
    tmp___9 = tmp___8;
  }
#line 115
  if (tmp___9) {
#line 115
    tmp___15 = 0;
  } else
#line 115
  if (__x != __y) {
#line 115
    tmp___15 = 1;
  } else {
#line 115
    tmp___15 = 0;
  }
#line 115
  return (tmp___15);
}
}
#line 116 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessgreaterl___0(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 116
  if (sizeof(__x) == sizeof(float )) {
#line 116
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 116
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 116
    if (sizeof(__x) == sizeof(double )) {
#line 116
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 116
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 116
      tmp___12 = __fpclassifyl(__x);
#line 116
      tmp___13 = tmp___12 == 0;
    }
#line 116
    tmp___14 = tmp___13;
  }
#line 116
  if (tmp___14) {
#line 116
    tmp___9 = 1;
  } else {
#line 116
    if (sizeof(__y) == sizeof(float )) {
#line 116
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 116
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 116
      if (sizeof(__y) == sizeof(double )) {
#line 116
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 116
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 116
        tmp___6 = __fpclassifyl(__y);
#line 116
        tmp___7 = tmp___6 == 0;
      }
#line 116
      tmp___8 = tmp___7;
    }
#line 116
    tmp___9 = tmp___8;
  }
#line 116
  if (tmp___9) {
#line 116
    tmp___15 = 0;
  } else
#line 116
  if (__x != __y) {
#line 116
    tmp___15 = 1;
  } else {
#line 116
    tmp___15 = 0;
  }
#line 116
  return (tmp___15);
}
}
#line 117 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterf___0(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 117
  if (sizeof(__x) == sizeof(float )) {
#line 117
    tmp___10 = __FLOAT_BITS___0(__x);
#line 117
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 117
    if (sizeof(__x) == sizeof(double )) {
#line 117
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 117
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 117
      tmp___12 = __fpclassifyl((long double )__x);
#line 117
      tmp___13 = tmp___12 == 0;
    }
#line 117
    tmp___14 = tmp___13;
  }
#line 117
  if (tmp___14) {
#line 117
    tmp___9 = 1;
  } else {
#line 117
    if (sizeof(__y) == sizeof(float )) {
#line 117
      tmp___4 = __FLOAT_BITS___0(__y);
#line 117
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 117
      if (sizeof(__y) == sizeof(double )) {
#line 117
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 117
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 117
        tmp___6 = __fpclassifyl((long double )__y);
#line 117
        tmp___7 = tmp___6 == 0;
      }
#line 117
      tmp___8 = tmp___7;
    }
#line 117
    tmp___9 = tmp___8;
  }
#line 117
  if (tmp___9) {
#line 117
    tmp___15 = 0;
  } else
#line 117
  if (__x > __y) {
#line 117
    tmp___15 = 1;
  } else {
#line 117
    tmp___15 = 0;
  }
#line 117
  return (tmp___15);
}
}
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreater___0(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 118
  if (sizeof(__x) == sizeof(float )) {
#line 118
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 118
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 118
    if (sizeof(__x) == sizeof(double )) {
#line 118
      tmp___11 = __DOUBLE_BITS___0(__x);
#line 118
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 118
      tmp___12 = __fpclassifyl((long double )__x);
#line 118
      tmp___13 = tmp___12 == 0;
    }
#line 118
    tmp___14 = tmp___13;
  }
#line 118
  if (tmp___14) {
#line 118
    tmp___9 = 1;
  } else {
#line 118
    if (sizeof(__y) == sizeof(float )) {
#line 118
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 118
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 118
      if (sizeof(__y) == sizeof(double )) {
#line 118
        tmp___5 = __DOUBLE_BITS___0(__y);
#line 118
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 118
        tmp___6 = __fpclassifyl((long double )__y);
#line 118
        tmp___7 = tmp___6 == 0;
      }
#line 118
      tmp___8 = tmp___7;
    }
#line 118
    tmp___9 = tmp___8;
  }
#line 118
  if (tmp___9) {
#line 118
    tmp___15 = 0;
  } else
#line 118
  if (__x > __y) {
#line 118
    tmp___15 = 1;
  } else {
#line 118
    tmp___15 = 0;
  }
#line 118
  return (tmp___15);
}
}
#line 119 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterl___0(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 119
  if (sizeof(__x) == sizeof(float )) {
#line 119
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 119
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 119
    if (sizeof(__x) == sizeof(double )) {
#line 119
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 119
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 119
      tmp___12 = __fpclassifyl(__x);
#line 119
      tmp___13 = tmp___12 == 0;
    }
#line 119
    tmp___14 = tmp___13;
  }
#line 119
  if (tmp___14) {
#line 119
    tmp___9 = 1;
  } else {
#line 119
    if (sizeof(__y) == sizeof(float )) {
#line 119
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 119
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 119
      if (sizeof(__y) == sizeof(double )) {
#line 119
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 119
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 119
        tmp___6 = __fpclassifyl(__y);
#line 119
        tmp___7 = tmp___6 == 0;
      }
#line 119
      tmp___8 = tmp___7;
    }
#line 119
    tmp___9 = tmp___8;
  }
#line 119
  if (tmp___9) {
#line 119
    tmp___15 = 0;
  } else
#line 119
  if (__x > __y) {
#line 119
    tmp___15 = 1;
  } else {
#line 119
    tmp___15 = 0;
  }
#line 119
  return (tmp___15);
}
}
#line 120 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterequalf___0(float_t __x , float_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 120
  if (sizeof(__x) == sizeof(float )) {
#line 120
    tmp___10 = __FLOAT_BITS___0(__x);
#line 120
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 120
    if (sizeof(__x) == sizeof(double )) {
#line 120
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 120
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 120
      tmp___12 = __fpclassifyl((long double )__x);
#line 120
      tmp___13 = tmp___12 == 0;
    }
#line 120
    tmp___14 = tmp___13;
  }
#line 120
  if (tmp___14) {
#line 120
    tmp___9 = 1;
  } else {
#line 120
    if (sizeof(__y) == sizeof(float )) {
#line 120
      tmp___4 = __FLOAT_BITS___0(__y);
#line 120
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 120
      if (sizeof(__y) == sizeof(double )) {
#line 120
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 120
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 120
        tmp___6 = __fpclassifyl((long double )__y);
#line 120
        tmp___7 = tmp___6 == 0;
      }
#line 120
      tmp___8 = tmp___7;
    }
#line 120
    tmp___9 = tmp___8;
  }
#line 120
  if (tmp___9) {
#line 120
    tmp___15 = 0;
  } else
#line 120
  if (__x >= __y) {
#line 120
    tmp___15 = 1;
  } else {
#line 120
    tmp___15 = 0;
  }
#line 120
  return (tmp___15);
}
}
#line 121 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterequal___0(double_t __x , double_t __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 121
  if (sizeof(__x) == sizeof(float )) {
#line 121
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 121
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 121
    if (sizeof(__x) == sizeof(double )) {
#line 121
      tmp___11 = __DOUBLE_BITS___0(__x);
#line 121
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 121
      tmp___12 = __fpclassifyl((long double )__x);
#line 121
      tmp___13 = tmp___12 == 0;
    }
#line 121
    tmp___14 = tmp___13;
  }
#line 121
  if (tmp___14) {
#line 121
    tmp___9 = 1;
  } else {
#line 121
    if (sizeof(__y) == sizeof(float )) {
#line 121
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 121
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 121
      if (sizeof(__y) == sizeof(double )) {
#line 121
        tmp___5 = __DOUBLE_BITS___0(__y);
#line 121
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 121
        tmp___6 = __fpclassifyl((long double )__y);
#line 121
        tmp___7 = tmp___6 == 0;
      }
#line 121
      tmp___8 = tmp___7;
    }
#line 121
    tmp___9 = tmp___8;
  }
#line 121
  if (tmp___9) {
#line 121
    tmp___15 = 0;
  } else
#line 121
  if (__x >= __y) {
#line 121
    tmp___15 = 1;
  } else {
#line 121
    tmp___15 = 0;
  }
#line 121
  return (tmp___15);
}
}
#line 122 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __isgreaterequall___0(long double __x , long double __y ) 
{ 
  unsigned int tmp ;
  unsigned long long tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned int tmp___4 ;
  unsigned long long tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned int tmp___10 ;
  unsigned long long tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;

  {
#line 122
  if (sizeof(__x) == sizeof(float )) {
#line 122
    tmp___10 = __FLOAT_BITS___0((float )__x);
#line 122
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 122
    if (sizeof(__x) == sizeof(double )) {
#line 122
      tmp___11 = __DOUBLE_BITS___0((double )__x);
#line 122
      tmp___13 = (tmp___11 & (18446744073709551615 >> 1)) > 2047ULL << 52;
    } else {
#line 122
      tmp___12 = __fpclassifyl(__x);
#line 122
      tmp___13 = tmp___12 == 0;
    }
#line 122
    tmp___14 = tmp___13;
  }
#line 122
  if (tmp___14) {
#line 122
    tmp___9 = 1;
  } else {
#line 122
    if (sizeof(__y) == sizeof(float )) {
#line 122
      tmp___4 = __FLOAT_BITS___0((float )__y);
#line 122
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 122
      if (sizeof(__y) == sizeof(double )) {
#line 122
        tmp___5 = __DOUBLE_BITS___0((double )__y);
#line 122
        tmp___7 = (tmp___5 & (18446744073709551615 >> 1)) > 2047ULL << 52;
      } else {
#line 122
        tmp___6 = __fpclassifyl(__y);
#line 122
        tmp___7 = tmp___6 == 0;
      }
#line 122
      tmp___8 = tmp___7;
    }
#line 122
    tmp___9 = tmp___8;
  }
#line 122
  if (tmp___9) {
#line 122
    tmp___15 = 0;
  } else
#line 122
  if (__x >= __y) {
#line 122
    tmp___15 = 1;
  } else {
#line 122
    tmp___15 = 0;
  }
#line 122
  return (tmp___15);
}
}
#line 11 "main.c"
char output[65]  ;
#line 13 "main.c"
char *hash_cn(char *hex , int lite , int variant , int height ) 
{ 
  int len ;
  size_t tmp ;
  unsigned char *inp ;
  unsigned long __lengthofinp ;
  void *tmp___0 ;
  char *pos ;
  size_t i ;
  unsigned char hash[32] ;
  char *ptr ;
  size_t i___0 ;
  int tmp___1 ;

  {
#line 15
  tmp = strlen((char const   *)hex);
#line 15
  len = (int )(tmp / 2UL);
#line 17
  __lengthofinp = (unsigned long )len;
#line 17
  tmp___0 = __builtin_alloca(sizeof(*inp) * __lengthofinp);
#line 17
  inp = (unsigned char *)tmp___0;
#line 19
  lite = 4;
#line 20
  variant = 2;
#line 22
  pos = hex;
#line 23
  i = (size_t )0;
#line 23
  while (i < (size_t )len) {
#line 23
    sscanf((char const   * __restrict  )pos, (char const   * __restrict  )"%2hhx",
           inp + i);
#line 23
    pos += 2;
#line 23
    i ++;
  }
#line 27
  if (variant == -1) {
#line 28
    if ((int const   )*((uint8_t const   *)inp + 0) >= 7) {
#line 28
      variant = (int )((int const   )*((uint8_t const   *)inp + 0) - 6);
    } else {
#line 28
      variant = 0;
    }
  }
#line 30
  cryptonight((void *)(hash), (void const   *)inp, (size_t )len, lite, variant, height);
#line 32
  ptr = & output[0];
#line 34
  i___0 = (size_t )0;
#line 34
  while (i___0 < 32UL) {
#line 34
    tmp___1 = sprintf((char * __restrict  )ptr, (char const   * __restrict  )"%02x",
                      (int )hash[i___0]);
#line 34
    ptr += tmp___1;
#line 34
    i___0 ++;
  }
#line 36
  return (& output[0]);
}
}
#line 1 "cil-ycfBj8f5.o"
#pragma merger("0","/tmp/cil-GHbAIFq4.i","")
#line 29 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/compat/sys/timeb.h"
extern int ftime(struct timeb * ) ;
#line 28 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/compat/malloc.h"
extern struct mallinfo mallinfo(void) ;
#line 30
extern void malloc_stats(void) ;
#line 32
extern int mallopt(int  , int  ) ;
#line 34
extern size_t malloc_usable_size(void * ) ;
#line 19 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/endian.h"
__inline static uint16_t __bswap16(uint16_t __x ) 
{ 


  {
#line 21
  return ((uint16_t )(((int )__x << 8) | ((int )__x >> 8)));
}
}
#line 24 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/endian.h"
__inline static uint32_t __bswap32(uint32_t __x ) 
{ 


  {
#line 26
  return ((((__x >> 24) | ((__x >> 8) & 65280U)) | ((__x << 8) & 16711680U)) | (__x << 24));
}
}
#line 29 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/endian.h"
__inline static uint64_t __bswap64(uint64_t __x ) 
{ 
  uint32_t tmp ;
  uint32_t tmp___0 ;

  {
#line 31
  tmp = __bswap32((uint32_t )__x);
#line 31
  tmp___0 = __bswap32((uint32_t )(__x >> 32));
#line 31
  return (((unsigned long long )tmp << 32) | (unsigned long long )tmp___0);
}
}
#line 31 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/sys/select.h"
extern int select(int  , fd_set * __restrict   , fd_set * __restrict   , fd_set * __restrict   ,
                  struct timeval * __restrict   ) ;
#line 32
extern int pselect(int  , fd_set * __restrict   , fd_set * __restrict   , fd_set * __restrict   ,
                   struct timespec  const  * __restrict   , sigset_t const   * __restrict   ) ;
#line 49 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/unistd.h"
extern int pipe(int * ) ;
#line 50
extern int pipe2(int * , int  ) ;
#line 51
extern int close(int  ) ;
#line 52
extern int posix_close(int  , int  ) ;
#line 53
extern int dup(int  ) ;
#line 54
extern int dup2(int  , int  ) ;
#line 55
extern int dup3(int  , int  , int  ) ;
#line 56
extern off_t lseek(int  , off_t  , int  ) ;
#line 57
extern int fsync(int  ) ;
#line 58
extern int fdatasync(int  ) ;
#line 60
extern ssize_t read(int  , void * , size_t  ) ;
#line 61
extern ssize_t write(int  , void const   * , size_t  ) ;
#line 62
extern ssize_t pread(int  , void * , size_t  , off_t  ) ;
#line 63
extern ssize_t pwrite(int  , void const   * , size_t  , off_t  ) ;
#line 65
extern int chown(char const   * , uid_t  , gid_t  ) ;
#line 66
extern int fchown(int  , uid_t  , gid_t  ) ;
#line 67
extern int lchown(char const   * , uid_t  , gid_t  ) ;
#line 68
extern int fchownat(int  , char const   * , uid_t  , gid_t  , int  ) ;
#line 70
extern int link(char const   * , char const   * ) ;
#line 71
extern int linkat(int  , char const   * , int  , char const   * , int  ) ;
#line 72
extern int symlink(char const   * , char const   * ) ;
#line 73
extern int symlinkat(char const   * , int  , char const   * ) ;
#line 74
extern ssize_t readlink(char const   * __restrict   , char * __restrict   , size_t  ) ;
#line 75
extern ssize_t readlinkat(int  , char const   * __restrict   , char * __restrict   ,
                          size_t  ) ;
#line 76
extern int unlink(char const   * ) ;
#line 77
extern int unlinkat(int  , char const   * , int  ) ;
#line 78
extern int rmdir(char const   * ) ;
#line 79
extern int truncate(char const   * , off_t  ) ;
#line 80
extern int ftruncate(int  , off_t  ) ;
#line 87
extern int access(char const   * , int  ) ;
#line 88
extern int faccessat(int  , char const   * , int  , int  ) ;
#line 90
extern int chdir(char const   * ) ;
#line 91
extern int fchdir(int  ) ;
#line 92
extern char *getcwd(char * , size_t  ) ;
#line 94
extern unsigned int alarm(unsigned int  ) ;
#line 95
extern unsigned int sleep(unsigned int  ) ;
#line 96
extern int pause(void) ;
#line 98
extern pid_t fork(void) ;
#line 99
extern pid_t _Fork(void) ;
#line 100
extern int execve(char const   * , char * const  * , char * const  * ) ;
#line 101
extern int execv(char const   * , char * const  * ) ;
#line 102
extern int execle(char const   * , char const   *  , ...) ;
#line 103
extern int execl(char const   * , char const   *  , ...) ;
#line 104
extern int execvp(char const   * , char * const  * ) ;
#line 105
extern int execlp(char const   * , char const   *  , ...) ;
#line 106
extern int fexecve(int  , char * const  * , char * const  * ) ;
#line 107
extern void _exit(int  ) ;
#line 109
extern pid_t getpid(void) ;
#line 110
extern pid_t getppid(void) ;
#line 111
extern pid_t getpgrp(void) ;
#line 112
extern pid_t getpgid(pid_t  ) ;
#line 113
extern int setpgid(pid_t  , pid_t  ) ;
#line 114
extern pid_t setsid(void) ;
#line 115
extern pid_t getsid(pid_t  ) ;
#line 116
extern char *ttyname(int  ) ;
#line 117
extern int ttyname_r(int  , char * , size_t  ) ;
#line 118
extern int isatty(int  ) ;
#line 119
extern pid_t tcgetpgrp(int  ) ;
#line 120
extern int tcsetpgrp(int  , pid_t  ) ;
#line 122
extern uid_t getuid(void) ;
#line 123
extern uid_t geteuid(void) ;
#line 124
extern gid_t getgid(void) ;
#line 125
extern gid_t getegid(void) ;
#line 126
extern int getgroups(int  , gid_t * ) ;
#line 127
extern int setuid(uid_t  ) ;
#line 128
extern int seteuid(uid_t  ) ;
#line 129
extern int setgid(gid_t  ) ;
#line 130
extern int setegid(gid_t  ) ;
#line 132
extern char *getlogin(void) ;
#line 133
extern int getlogin_r(char * , size_t  ) ;
#line 134
extern int gethostname(char * , size_t  ) ;
#line 137
extern int getopt(int  , char * const  * , char const   * ) ;
#line 138
extern char *optarg ;
#line 139
extern int optind ;
#line 139
extern int opterr ;
#line 139
extern int optopt ;
#line 141
extern long pathconf(char const   * , int  ) ;
#line 142
extern long fpathconf(int  , int  ) ;
#line 143
extern long sysconf(int  ) ;
#line 144
extern size_t confstr(int  , char * , size_t  ) ;
#line 151
extern int setreuid(uid_t  , uid_t  ) ;
#line 152
extern int setregid(gid_t  , gid_t  ) ;
#line 153
extern int lockf(int  , int  , off_t  ) ;
#line 154
extern long gethostid(void) ;
#line 155
extern int nice(int  ) ;
#line 156
extern void sync(void) ;
#line 157
extern pid_t setpgrp(void) ;
#line 158
extern char *crypt(char const   * , char const   * ) ;
#line 159
extern void encrypt(char * , int  ) ;
#line 160
extern void swab(void const   * __restrict   , void * __restrict   , ssize_t  ) ;
#line 165
extern int usleep(unsigned int  ) ;
#line 166
extern unsigned int ualarm(unsigned int  , unsigned int  ) ;
#line 173
extern int brk(void * ) ;
#line 174
extern void *sbrk(intptr_t  ) ;
#line 175
extern pid_t vfork(void) ;
#line 176
extern int vhangup(void) ;
#line 177
extern int chroot(char const   * ) ;
#line 178
extern int getpagesize(void) ;
#line 179
extern int getdtablesize(void) ;
#line 180
extern int sethostname(char const   * , size_t  ) ;
#line 181
extern int getdomainname(char * , size_t  ) ;
#line 182
extern int setdomainname(char const   * , size_t  ) ;
#line 183
extern int setgroups(size_t  , gid_t const   * ) ;
#line 184
extern char *getpass(char const   * ) ;
#line 185
extern int daemon(int  , int  ) ;
#line 186
extern void setusershell(void) ;
#line 187
extern void endusershell(void) ;
#line 188
extern char *getusershell(void) ;
#line 189
extern int acct(char const   * ) ;
#line 191
extern int execvpe(char const   * , char * const  * , char * const  * ) ;
#line 192
extern int issetugid(void) ;
#line 193
extern int getentropy(void * , size_t  ) ;
#line 194
extern int optreset ;
#line 71 "oaes_lib.c"
static uint8_t oaes_header[16]  = 
#line 71 "oaes_lib.c"
  {      (uint8_t )79,      (uint8_t )65,      (uint8_t )69,      (uint8_t )83, 
        (uint8_t )1,      (uint8_t )2,      (uint8_t )0,      (uint8_t )0, 
        (uint8_t )0,      (uint8_t )0,      (uint8_t )0,      (uint8_t )0, 
        (uint8_t )0,      (uint8_t )0,      (uint8_t )0,      (uint8_t )0};
#line 75 "oaes_lib.c"
static uint8_t oaes_gf_8[10]  = 
#line 75
  {      (uint8_t )1,      (uint8_t )2,      (uint8_t )4,      (uint8_t )8, 
        (uint8_t )16,      (uint8_t )32,      (uint8_t )64,      (uint8_t )128, 
        (uint8_t )27,      (uint8_t )54};
#line 78 "oaes_lib.c"
static uint8_t oaes_sub_byte_value[16][16]  = 
#line 78
  { {        (uint8_t )99,        (uint8_t )124,        (uint8_t )119,        (uint8_t )123, 
            (uint8_t )242,        (uint8_t )107,        (uint8_t )111,        (uint8_t )197, 
            (uint8_t )48,        (uint8_t )1,        (uint8_t )103,        (uint8_t )43, 
            (uint8_t )254,        (uint8_t )215,        (uint8_t )171,        (uint8_t )118}, 
   {        (uint8_t )202,        (uint8_t )130,        (uint8_t )201,        (uint8_t )125, 
            (uint8_t )250,        (uint8_t )89,        (uint8_t )71,        (uint8_t )240, 
            (uint8_t )173,        (uint8_t )212,        (uint8_t )162,        (uint8_t )175, 
            (uint8_t )156,        (uint8_t )164,        (uint8_t )114,        (uint8_t )192}, 
   {        (uint8_t )183,        (uint8_t )253,        (uint8_t )147,        (uint8_t )38, 
            (uint8_t )54,        (uint8_t )63,        (uint8_t )247,        (uint8_t )204, 
            (uint8_t )52,        (uint8_t )165,        (uint8_t )229,        (uint8_t )241, 
            (uint8_t )113,        (uint8_t )216,        (uint8_t )49,        (uint8_t )21}, 
   {        (uint8_t )4,        (uint8_t )199,        (uint8_t )35,        (uint8_t )195, 
            (uint8_t )24,        (uint8_t )150,        (uint8_t )5,        (uint8_t )154, 
            (uint8_t )7,        (uint8_t )18,        (uint8_t )128,        (uint8_t )226, 
            (uint8_t )235,        (uint8_t )39,        (uint8_t )178,        (uint8_t )117}, 
   {        (uint8_t )9,        (uint8_t )131,        (uint8_t )44,        (uint8_t )26, 
            (uint8_t )27,        (uint8_t )110,        (uint8_t )90,        (uint8_t )160, 
            (uint8_t )82,        (uint8_t )59,        (uint8_t )214,        (uint8_t )179, 
            (uint8_t )41,        (uint8_t )227,        (uint8_t )47,        (uint8_t )132}, 
   {        (uint8_t )83,        (uint8_t )209,        (uint8_t )0,        (uint8_t )237, 
            (uint8_t )32,        (uint8_t )252,        (uint8_t )177,        (uint8_t )91, 
            (uint8_t )106,        (uint8_t )203,        (uint8_t )190,        (uint8_t )57, 
            (uint8_t )74,        (uint8_t )76,        (uint8_t )88,        (uint8_t )207}, 
   {        (uint8_t )208,        (uint8_t )239,        (uint8_t )170,        (uint8_t )251, 
            (uint8_t )67,        (uint8_t )77,        (uint8_t )51,        (uint8_t )133, 
            (uint8_t )69,        (uint8_t )249,        (uint8_t )2,        (uint8_t )127, 
            (uint8_t )80,        (uint8_t )60,        (uint8_t )159,        (uint8_t )168}, 
   {        (uint8_t )81,        (uint8_t )163,        (uint8_t )64,        (uint8_t )143, 
            (uint8_t )146,        (uint8_t )157,        (uint8_t )56,        (uint8_t )245, 
            (uint8_t )188,        (uint8_t )182,        (uint8_t )218,        (uint8_t )33, 
            (uint8_t )16,        (uint8_t )255,        (uint8_t )243,        (uint8_t )210}, 
   {        (uint8_t )205,        (uint8_t )12,        (uint8_t )19,        (uint8_t )236, 
            (uint8_t )95,        (uint8_t )151,        (uint8_t )68,        (uint8_t )23, 
            (uint8_t )196,        (uint8_t )167,        (uint8_t )126,        (uint8_t )61, 
            (uint8_t )100,        (uint8_t )93,        (uint8_t )25,        (uint8_t )115}, 
   {        (uint8_t )96,        (uint8_t )129,        (uint8_t )79,        (uint8_t )220, 
            (uint8_t )34,        (uint8_t )42,        (uint8_t )144,        (uint8_t )136, 
            (uint8_t )70,        (uint8_t )238,        (uint8_t )184,        (uint8_t )20, 
            (uint8_t )222,        (uint8_t )94,        (uint8_t )11,        (uint8_t )219}, 
   {        (uint8_t )224,        (uint8_t )50,        (uint8_t )58,        (uint8_t )10, 
            (uint8_t )73,        (uint8_t )6,        (uint8_t )36,        (uint8_t )92, 
            (uint8_t )194,        (uint8_t )211,        (uint8_t )172,        (uint8_t )98, 
            (uint8_t )145,        (uint8_t )149,        (uint8_t )228,        (uint8_t )121}, 
   {        (uint8_t )231,        (uint8_t )200,        (uint8_t )55,        (uint8_t )109, 
            (uint8_t )141,        (uint8_t )213,        (uint8_t )78,        (uint8_t )169, 
            (uint8_t )108,        (uint8_t )86,        (uint8_t )244,        (uint8_t )234, 
            (uint8_t )101,        (uint8_t )122,        (uint8_t )174,        (uint8_t )8}, 
   {        (uint8_t )186,        (uint8_t )120,        (uint8_t )37,        (uint8_t )46, 
            (uint8_t )28,        (uint8_t )166,        (uint8_t )180,        (uint8_t )198, 
            (uint8_t )232,        (uint8_t )221,        (uint8_t )116,        (uint8_t )31, 
            (uint8_t )75,        (uint8_t )189,        (uint8_t )139,        (uint8_t )138}, 
   {        (uint8_t )112,        (uint8_t )62,        (uint8_t )181,        (uint8_t )102, 
            (uint8_t )72,        (uint8_t )3,        (uint8_t )246,        (uint8_t )14, 
            (uint8_t )97,        (uint8_t )53,        (uint8_t )87,        (uint8_t )185, 
            (uint8_t )134,        (uint8_t )193,        (uint8_t )29,        (uint8_t )158}, 
   {        (uint8_t )225,        (uint8_t )248,        (uint8_t )152,        (uint8_t )17, 
            (uint8_t )105,        (uint8_t )217,        (uint8_t )142,        (uint8_t )148, 
            (uint8_t )155,        (uint8_t )30,        (uint8_t )135,        (uint8_t )233, 
            (uint8_t )206,        (uint8_t )85,        (uint8_t )40,        (uint8_t )223}, 
   {        (uint8_t )140,        (uint8_t )161,        (uint8_t )137,        (uint8_t )13, 
            (uint8_t )191,        (uint8_t )230,        (uint8_t )66,        (uint8_t )104, 
            (uint8_t )65,        (uint8_t )153,        (uint8_t )45,        (uint8_t )15, 
            (uint8_t )176,        (uint8_t )84,        (uint8_t )187,        (uint8_t )22}};
#line 98 "oaes_lib.c"
static uint8_t oaes_inv_sub_byte_value[16][16]  = 
#line 98
  { {        (uint8_t )82,        (uint8_t )9,        (uint8_t )106,        (uint8_t )213, 
            (uint8_t )48,        (uint8_t )54,        (uint8_t )165,        (uint8_t )56, 
            (uint8_t )191,        (uint8_t )64,        (uint8_t )163,        (uint8_t )158, 
            (uint8_t )129,        (uint8_t )243,        (uint8_t )215,        (uint8_t )251}, 
   {        (uint8_t )124,        (uint8_t )227,        (uint8_t )57,        (uint8_t )130, 
            (uint8_t )155,        (uint8_t )47,        (uint8_t )255,        (uint8_t )135, 
            (uint8_t )52,        (uint8_t )142,        (uint8_t )67,        (uint8_t )68, 
            (uint8_t )196,        (uint8_t )222,        (uint8_t )233,        (uint8_t )203}, 
   {        (uint8_t )84,        (uint8_t )123,        (uint8_t )148,        (uint8_t )50, 
            (uint8_t )166,        (uint8_t )194,        (uint8_t )35,        (uint8_t )61, 
            (uint8_t )238,        (uint8_t )76,        (uint8_t )149,        (uint8_t )11, 
            (uint8_t )66,        (uint8_t )250,        (uint8_t )195,        (uint8_t )78}, 
   {        (uint8_t )8,        (uint8_t )46,        (uint8_t )161,        (uint8_t )102, 
            (uint8_t )40,        (uint8_t )217,        (uint8_t )36,        (uint8_t )178, 
            (uint8_t )118,        (uint8_t )91,        (uint8_t )162,        (uint8_t )73, 
            (uint8_t )109,        (uint8_t )139,        (uint8_t )209,        (uint8_t )37}, 
   {        (uint8_t )114,        (uint8_t )248,        (uint8_t )246,        (uint8_t )100, 
            (uint8_t )134,        (uint8_t )104,        (uint8_t )152,        (uint8_t )22, 
            (uint8_t )212,        (uint8_t )164,        (uint8_t )92,        (uint8_t )204, 
            (uint8_t )93,        (uint8_t )101,        (uint8_t )182,        (uint8_t )146}, 
   {        (uint8_t )108,        (uint8_t )112,        (uint8_t )72,        (uint8_t )80, 
            (uint8_t )253,        (uint8_t )237,        (uint8_t )185,        (uint8_t )218, 
            (uint8_t )94,        (uint8_t )21,        (uint8_t )70,        (uint8_t )87, 
            (uint8_t )167,        (uint8_t )141,        (uint8_t )157,        (uint8_t )132}, 
   {        (uint8_t )144,        (uint8_t )216,        (uint8_t )171,        (uint8_t )0, 
            (uint8_t )140,        (uint8_t )188,        (uint8_t )211,        (uint8_t )10, 
            (uint8_t )247,        (uint8_t )228,        (uint8_t )88,        (uint8_t )5, 
            (uint8_t )184,        (uint8_t )179,        (uint8_t )69,        (uint8_t )6}, 
   {        (uint8_t )208,        (uint8_t )44,        (uint8_t )30,        (uint8_t )143, 
            (uint8_t )202,        (uint8_t )63,        (uint8_t )15,        (uint8_t )2, 
            (uint8_t )193,        (uint8_t )175,        (uint8_t )189,        (uint8_t )3, 
            (uint8_t )1,        (uint8_t )19,        (uint8_t )138,        (uint8_t )107}, 
   {        (uint8_t )58,        (uint8_t )145,        (uint8_t )17,        (uint8_t )65, 
            (uint8_t )79,        (uint8_t )103,        (uint8_t )220,        (uint8_t )234, 
            (uint8_t )151,        (uint8_t )242,        (uint8_t )207,        (uint8_t )206, 
            (uint8_t )240,        (uint8_t )180,        (uint8_t )230,        (uint8_t )115}, 
   {        (uint8_t )150,        (uint8_t )172,        (uint8_t )116,        (uint8_t )34, 
            (uint8_t )231,        (uint8_t )173,        (uint8_t )53,        (uint8_t )133, 
            (uint8_t )226,        (uint8_t )249,        (uint8_t )55,        (uint8_t )232, 
            (uint8_t )28,        (uint8_t )117,        (uint8_t )223,        (uint8_t )110}, 
   {        (uint8_t )71,        (uint8_t )241,        (uint8_t )26,        (uint8_t )113, 
            (uint8_t )29,        (uint8_t )41,        (uint8_t )197,        (uint8_t )137, 
            (uint8_t )111,        (uint8_t )183,        (uint8_t )98,        (uint8_t )14, 
            (uint8_t )170,        (uint8_t )24,        (uint8_t )190,        (uint8_t )27}, 
   {        (uint8_t )252,        (uint8_t )86,        (uint8_t )62,        (uint8_t )75, 
            (uint8_t )198,        (uint8_t )210,        (uint8_t )121,        (uint8_t )32, 
            (uint8_t )154,        (uint8_t )219,        (uint8_t )192,        (uint8_t )254, 
            (uint8_t )120,        (uint8_t )205,        (uint8_t )90,        (uint8_t )244}, 
   {        (uint8_t )31,        (uint8_t )221,        (uint8_t )168,        (uint8_t )51, 
            (uint8_t )136,        (uint8_t )7,        (uint8_t )199,        (uint8_t )49, 
            (uint8_t )177,        (uint8_t )18,        (uint8_t )16,        (uint8_t )89, 
            (uint8_t )39,        (uint8_t )128,        (uint8_t )236,        (uint8_t )95}, 
   {        (uint8_t )96,        (uint8_t )81,        (uint8_t )127,        (uint8_t )169, 
            (uint8_t )25,        (uint8_t )181,        (uint8_t )74,        (uint8_t )13, 
            (uint8_t )45,        (uint8_t )229,        (uint8_t )122,        (uint8_t )159, 
            (uint8_t )147,        (uint8_t )201,        (uint8_t )156,        (uint8_t )239}, 
   {        (uint8_t )160,        (uint8_t )224,        (uint8_t )59,        (uint8_t )77, 
            (uint8_t )174,        (uint8_t )42,        (uint8_t )245,        (uint8_t )176, 
            (uint8_t )200,        (uint8_t )235,        (uint8_t )187,        (uint8_t )60, 
            (uint8_t )131,        (uint8_t )83,        (uint8_t )153,        (uint8_t )97}, 
   {        (uint8_t )23,        (uint8_t )43,        (uint8_t )4,        (uint8_t )126, 
            (uint8_t )186,        (uint8_t )119,        (uint8_t )214,        (uint8_t )38, 
            (uint8_t )225,        (uint8_t )105,        (uint8_t )20,        (uint8_t )99, 
            (uint8_t )85,        (uint8_t )33,        (uint8_t )12,        (uint8_t )125}};
#line 118 "oaes_lib.c"
static uint8_t oaes_gf_mul_2[16][16]  = 
#line 118
  { {        (uint8_t )0,        (uint8_t )2,        (uint8_t )4,        (uint8_t )6, 
            (uint8_t )8,        (uint8_t )10,        (uint8_t )12,        (uint8_t )14, 
            (uint8_t )16,        (uint8_t )18,        (uint8_t )20,        (uint8_t )22, 
            (uint8_t )24,        (uint8_t )26,        (uint8_t )28,        (uint8_t )30}, 
   {        (uint8_t )32,        (uint8_t )34,        (uint8_t )36,        (uint8_t )38, 
            (uint8_t )40,        (uint8_t )42,        (uint8_t )44,        (uint8_t )46, 
            (uint8_t )48,        (uint8_t )50,        (uint8_t )52,        (uint8_t )54, 
            (uint8_t )56,        (uint8_t )58,        (uint8_t )60,        (uint8_t )62}, 
   {        (uint8_t )64,        (uint8_t )66,        (uint8_t )68,        (uint8_t )70, 
            (uint8_t )72,        (uint8_t )74,        (uint8_t )76,        (uint8_t )78, 
            (uint8_t )80,        (uint8_t )82,        (uint8_t )84,        (uint8_t )86, 
            (uint8_t )88,        (uint8_t )90,        (uint8_t )92,        (uint8_t )94}, 
   {        (uint8_t )96,        (uint8_t )98,        (uint8_t )100,        (uint8_t )102, 
            (uint8_t )104,        (uint8_t )106,        (uint8_t )108,        (uint8_t )110, 
            (uint8_t )112,        (uint8_t )114,        (uint8_t )116,        (uint8_t )118, 
            (uint8_t )120,        (uint8_t )122,        (uint8_t )124,        (uint8_t )126}, 
   {        (uint8_t )128,        (uint8_t )130,        (uint8_t )132,        (uint8_t )134, 
            (uint8_t )136,        (uint8_t )138,        (uint8_t )140,        (uint8_t )142, 
            (uint8_t )144,        (uint8_t )146,        (uint8_t )148,        (uint8_t )150, 
            (uint8_t )152,        (uint8_t )154,        (uint8_t )156,        (uint8_t )158}, 
   {        (uint8_t )160,        (uint8_t )162,        (uint8_t )164,        (uint8_t )166, 
            (uint8_t )168,        (uint8_t )170,        (uint8_t )172,        (uint8_t )174, 
            (uint8_t )176,        (uint8_t )178,        (uint8_t )180,        (uint8_t )182, 
            (uint8_t )184,        (uint8_t )186,        (uint8_t )188,        (uint8_t )190}, 
   {        (uint8_t )192,        (uint8_t )194,        (uint8_t )196,        (uint8_t )198, 
            (uint8_t )200,        (uint8_t )202,        (uint8_t )204,        (uint8_t )206, 
            (uint8_t )208,        (uint8_t )210,        (uint8_t )212,        (uint8_t )214, 
            (uint8_t )216,        (uint8_t )218,        (uint8_t )220,        (uint8_t )222}, 
   {        (uint8_t )224,        (uint8_t )226,        (uint8_t )228,        (uint8_t )230, 
            (uint8_t )232,        (uint8_t )234,        (uint8_t )236,        (uint8_t )238, 
            (uint8_t )240,        (uint8_t )242,        (uint8_t )244,        (uint8_t )246, 
            (uint8_t )248,        (uint8_t )250,        (uint8_t )252,        (uint8_t )254}, 
   {        (uint8_t )27,        (uint8_t )25,        (uint8_t )31,        (uint8_t )29, 
            (uint8_t )19,        (uint8_t )17,        (uint8_t )23,        (uint8_t )21, 
            (uint8_t )11,        (uint8_t )9,        (uint8_t )15,        (uint8_t )13, 
            (uint8_t )3,        (uint8_t )1,        (uint8_t )7,        (uint8_t )5}, 
   {        (uint8_t )59,        (uint8_t )57,        (uint8_t )63,        (uint8_t )61, 
            (uint8_t )51,        (uint8_t )49,        (uint8_t )55,        (uint8_t )53, 
            (uint8_t )43,        (uint8_t )41,        (uint8_t )47,        (uint8_t )45, 
            (uint8_t )35,        (uint8_t )33,        (uint8_t )39,        (uint8_t )37}, 
   {        (uint8_t )91,        (uint8_t )89,        (uint8_t )95,        (uint8_t )93, 
            (uint8_t )83,        (uint8_t )81,        (uint8_t )87,        (uint8_t )85, 
            (uint8_t )75,        (uint8_t )73,        (uint8_t )79,        (uint8_t )77, 
            (uint8_t )67,        (uint8_t )65,        (uint8_t )71,        (uint8_t )69}, 
   {        (uint8_t )123,        (uint8_t )121,        (uint8_t )127,        (uint8_t )125, 
            (uint8_t )115,        (uint8_t )113,        (uint8_t )119,        (uint8_t )117, 
            (uint8_t )107,        (uint8_t )105,        (uint8_t )111,        (uint8_t )109, 
            (uint8_t )99,        (uint8_t )97,        (uint8_t )103,        (uint8_t )101}, 
   {        (uint8_t )155,        (uint8_t )153,        (uint8_t )159,        (uint8_t )157, 
            (uint8_t )147,        (uint8_t )145,        (uint8_t )151,        (uint8_t )149, 
            (uint8_t )139,        (uint8_t )137,        (uint8_t )143,        (uint8_t )141, 
            (uint8_t )131,        (uint8_t )129,        (uint8_t )135,        (uint8_t )133}, 
   {        (uint8_t )187,        (uint8_t )185,        (uint8_t )191,        (uint8_t )189, 
            (uint8_t )179,        (uint8_t )177,        (uint8_t )183,        (uint8_t )181, 
            (uint8_t )171,        (uint8_t )169,        (uint8_t )175,        (uint8_t )173, 
            (uint8_t )163,        (uint8_t )161,        (uint8_t )167,        (uint8_t )165}, 
   {        (uint8_t )219,        (uint8_t )217,        (uint8_t )223,        (uint8_t )221, 
            (uint8_t )211,        (uint8_t )209,        (uint8_t )215,        (uint8_t )213, 
            (uint8_t )203,        (uint8_t )201,        (uint8_t )207,        (uint8_t )205, 
            (uint8_t )195,        (uint8_t )193,        (uint8_t )199,        (uint8_t )197}, 
   {        (uint8_t )251,        (uint8_t )249,        (uint8_t )255,        (uint8_t )253, 
            (uint8_t )243,        (uint8_t )241,        (uint8_t )247,        (uint8_t )245, 
            (uint8_t )235,        (uint8_t )233,        (uint8_t )239,        (uint8_t )237, 
            (uint8_t )227,        (uint8_t )225,        (uint8_t )231,        (uint8_t )229}};
#line 138 "oaes_lib.c"
static uint8_t oaes_gf_mul_3[16][16]  = 
#line 138
  { {        (uint8_t )0,        (uint8_t )3,        (uint8_t )6,        (uint8_t )5, 
            (uint8_t )12,        (uint8_t )15,        (uint8_t )10,        (uint8_t )9, 
            (uint8_t )24,        (uint8_t )27,        (uint8_t )30,        (uint8_t )29, 
            (uint8_t )20,        (uint8_t )23,        (uint8_t )18,        (uint8_t )17}, 
   {        (uint8_t )48,        (uint8_t )51,        (uint8_t )54,        (uint8_t )53, 
            (uint8_t )60,        (uint8_t )63,        (uint8_t )58,        (uint8_t )57, 
            (uint8_t )40,        (uint8_t )43,        (uint8_t )46,        (uint8_t )45, 
            (uint8_t )36,        (uint8_t )39,        (uint8_t )34,        (uint8_t )33}, 
   {        (uint8_t )96,        (uint8_t )99,        (uint8_t )102,        (uint8_t )101, 
            (uint8_t )108,        (uint8_t )111,        (uint8_t )106,        (uint8_t )105, 
            (uint8_t )120,        (uint8_t )123,        (uint8_t )126,        (uint8_t )125, 
            (uint8_t )116,        (uint8_t )119,        (uint8_t )114,        (uint8_t )113}, 
   {        (uint8_t )80,        (uint8_t )83,        (uint8_t )86,        (uint8_t )85, 
            (uint8_t )92,        (uint8_t )95,        (uint8_t )90,        (uint8_t )89, 
            (uint8_t )72,        (uint8_t )75,        (uint8_t )78,        (uint8_t )77, 
            (uint8_t )68,        (uint8_t )71,        (uint8_t )66,        (uint8_t )65}, 
   {        (uint8_t )192,        (uint8_t )195,        (uint8_t )198,        (uint8_t )197, 
            (uint8_t )204,        (uint8_t )207,        (uint8_t )202,        (uint8_t )201, 
            (uint8_t )216,        (uint8_t )219,        (uint8_t )222,        (uint8_t )221, 
            (uint8_t )212,        (uint8_t )215,        (uint8_t )210,        (uint8_t )209}, 
   {        (uint8_t )240,        (uint8_t )243,        (uint8_t )246,        (uint8_t )245, 
            (uint8_t )252,        (uint8_t )255,        (uint8_t )250,        (uint8_t )249, 
            (uint8_t )232,        (uint8_t )235,        (uint8_t )238,        (uint8_t )237, 
            (uint8_t )228,        (uint8_t )231,        (uint8_t )226,        (uint8_t )225}, 
   {        (uint8_t )160,        (uint8_t )163,        (uint8_t )166,        (uint8_t )165, 
            (uint8_t )172,        (uint8_t )175,        (uint8_t )170,        (uint8_t )169, 
            (uint8_t )184,        (uint8_t )187,        (uint8_t )190,        (uint8_t )189, 
            (uint8_t )180,        (uint8_t )183,        (uint8_t )178,        (uint8_t )177}, 
   {        (uint8_t )144,        (uint8_t )147,        (uint8_t )150,        (uint8_t )149, 
            (uint8_t )156,        (uint8_t )159,        (uint8_t )154,        (uint8_t )153, 
            (uint8_t )136,        (uint8_t )139,        (uint8_t )142,        (uint8_t )141, 
            (uint8_t )132,        (uint8_t )135,        (uint8_t )130,        (uint8_t )129}, 
   {        (uint8_t )155,        (uint8_t )152,        (uint8_t )157,        (uint8_t )158, 
            (uint8_t )151,        (uint8_t )148,        (uint8_t )145,        (uint8_t )146, 
            (uint8_t )131,        (uint8_t )128,        (uint8_t )133,        (uint8_t )134, 
            (uint8_t )143,        (uint8_t )140,        (uint8_t )137,        (uint8_t )138}, 
   {        (uint8_t )171,        (uint8_t )168,        (uint8_t )173,        (uint8_t )174, 
            (uint8_t )167,        (uint8_t )164,        (uint8_t )161,        (uint8_t )162, 
            (uint8_t )179,        (uint8_t )176,        (uint8_t )181,        (uint8_t )182, 
            (uint8_t )191,        (uint8_t )188,        (uint8_t )185,        (uint8_t )186}, 
   {        (uint8_t )251,        (uint8_t )248,        (uint8_t )253,        (uint8_t )254, 
            (uint8_t )247,        (uint8_t )244,        (uint8_t )241,        (uint8_t )242, 
            (uint8_t )227,        (uint8_t )224,        (uint8_t )229,        (uint8_t )230, 
            (uint8_t )239,        (uint8_t )236,        (uint8_t )233,        (uint8_t )234}, 
   {        (uint8_t )203,        (uint8_t )200,        (uint8_t )205,        (uint8_t )206, 
            (uint8_t )199,        (uint8_t )196,        (uint8_t )193,        (uint8_t )194, 
            (uint8_t )211,        (uint8_t )208,        (uint8_t )213,        (uint8_t )214, 
            (uint8_t )223,        (uint8_t )220,        (uint8_t )217,        (uint8_t )218}, 
   {        (uint8_t )91,        (uint8_t )88,        (uint8_t )93,        (uint8_t )94, 
            (uint8_t )87,        (uint8_t )84,        (uint8_t )81,        (uint8_t )82, 
            (uint8_t )67,        (uint8_t )64,        (uint8_t )69,        (uint8_t )70, 
            (uint8_t )79,        (uint8_t )76,        (uint8_t )73,        (uint8_t )74}, 
   {        (uint8_t )107,        (uint8_t )104,        (uint8_t )109,        (uint8_t )110, 
            (uint8_t )103,        (uint8_t )100,        (uint8_t )97,        (uint8_t )98, 
            (uint8_t )115,        (uint8_t )112,        (uint8_t )117,        (uint8_t )118, 
            (uint8_t )127,        (uint8_t )124,        (uint8_t )121,        (uint8_t )122}, 
   {        (uint8_t )59,        (uint8_t )56,        (uint8_t )61,        (uint8_t )62, 
            (uint8_t )55,        (uint8_t )52,        (uint8_t )49,        (uint8_t )50, 
            (uint8_t )35,        (uint8_t )32,        (uint8_t )37,        (uint8_t )38, 
            (uint8_t )47,        (uint8_t )44,        (uint8_t )41,        (uint8_t )42}, 
   {        (uint8_t )11,        (uint8_t )8,        (uint8_t )13,        (uint8_t )14, 
            (uint8_t )7,        (uint8_t )4,        (uint8_t )1,        (uint8_t )2, 
            (uint8_t )19,        (uint8_t )16,        (uint8_t )21,        (uint8_t )22, 
            (uint8_t )31,        (uint8_t )28,        (uint8_t )25,        (uint8_t )26}};
#line 158 "oaes_lib.c"
static uint8_t oaes_gf_mul_9[16][16]  = 
#line 158
  { {        (uint8_t )0,        (uint8_t )9,        (uint8_t )18,        (uint8_t )27, 
            (uint8_t )36,        (uint8_t )45,        (uint8_t )54,        (uint8_t )63, 
            (uint8_t )72,        (uint8_t )65,        (uint8_t )90,        (uint8_t )83, 
            (uint8_t )108,        (uint8_t )101,        (uint8_t )126,        (uint8_t )119}, 
   {        (uint8_t )144,        (uint8_t )153,        (uint8_t )130,        (uint8_t )139, 
            (uint8_t )180,        (uint8_t )189,        (uint8_t )166,        (uint8_t )175, 
            (uint8_t )216,        (uint8_t )209,        (uint8_t )202,        (uint8_t )195, 
            (uint8_t )252,        (uint8_t )245,        (uint8_t )238,        (uint8_t )231}, 
   {        (uint8_t )59,        (uint8_t )50,        (uint8_t )41,        (uint8_t )32, 
            (uint8_t )31,        (uint8_t )22,        (uint8_t )13,        (uint8_t )4, 
            (uint8_t )115,        (uint8_t )122,        (uint8_t )97,        (uint8_t )104, 
            (uint8_t )87,        (uint8_t )94,        (uint8_t )69,        (uint8_t )76}, 
   {        (uint8_t )171,        (uint8_t )162,        (uint8_t )185,        (uint8_t )176, 
            (uint8_t )143,        (uint8_t )134,        (uint8_t )157,        (uint8_t )148, 
            (uint8_t )227,        (uint8_t )234,        (uint8_t )241,        (uint8_t )248, 
            (uint8_t )199,        (uint8_t )206,        (uint8_t )213,        (uint8_t )220}, 
   {        (uint8_t )118,        (uint8_t )127,        (uint8_t )100,        (uint8_t )109, 
            (uint8_t )82,        (uint8_t )91,        (uint8_t )64,        (uint8_t )73, 
            (uint8_t )62,        (uint8_t )55,        (uint8_t )44,        (uint8_t )37, 
            (uint8_t )26,        (uint8_t )19,        (uint8_t )8,        (uint8_t )1}, 
   {        (uint8_t )230,        (uint8_t )239,        (uint8_t )244,        (uint8_t )253, 
            (uint8_t )194,        (uint8_t )203,        (uint8_t )208,        (uint8_t )217, 
            (uint8_t )174,        (uint8_t )167,        (uint8_t )188,        (uint8_t )181, 
            (uint8_t )138,        (uint8_t )131,        (uint8_t )152,        (uint8_t )145}, 
   {        (uint8_t )77,        (uint8_t )68,        (uint8_t )95,        (uint8_t )86, 
            (uint8_t )105,        (uint8_t )96,        (uint8_t )123,        (uint8_t )114, 
            (uint8_t )5,        (uint8_t )12,        (uint8_t )23,        (uint8_t )30, 
            (uint8_t )33,        (uint8_t )40,        (uint8_t )51,        (uint8_t )58}, 
   {        (uint8_t )221,        (uint8_t )212,        (uint8_t )207,        (uint8_t )198, 
            (uint8_t )249,        (uint8_t )240,        (uint8_t )235,        (uint8_t )226, 
            (uint8_t )149,        (uint8_t )156,        (uint8_t )135,        (uint8_t )142, 
            (uint8_t )177,        (uint8_t )184,        (uint8_t )163,        (uint8_t )170}, 
   {        (uint8_t )236,        (uint8_t )229,        (uint8_t )254,        (uint8_t )247, 
            (uint8_t )200,        (uint8_t )193,        (uint8_t )218,        (uint8_t )211, 
            (uint8_t )164,        (uint8_t )173,        (uint8_t )182,        (uint8_t )191, 
            (uint8_t )128,        (uint8_t )137,        (uint8_t )146,        (uint8_t )155}, 
   {        (uint8_t )124,        (uint8_t )117,        (uint8_t )110,        (uint8_t )103, 
            (uint8_t )88,        (uint8_t )81,        (uint8_t )74,        (uint8_t )67, 
            (uint8_t )52,        (uint8_t )61,        (uint8_t )38,        (uint8_t )47, 
            (uint8_t )16,        (uint8_t )25,        (uint8_t )2,        (uint8_t )11}, 
   {        (uint8_t )215,        (uint8_t )222,        (uint8_t )197,        (uint8_t )204, 
            (uint8_t )243,        (uint8_t )250,        (uint8_t )225,        (uint8_t )232, 
            (uint8_t )159,        (uint8_t )150,        (uint8_t )141,        (uint8_t )132, 
            (uint8_t )187,        (uint8_t )178,        (uint8_t )169,        (uint8_t )160}, 
   {        (uint8_t )71,        (uint8_t )78,        (uint8_t )85,        (uint8_t )92, 
            (uint8_t )99,        (uint8_t )106,        (uint8_t )113,        (uint8_t )120, 
            (uint8_t )15,        (uint8_t )6,        (uint8_t )29,        (uint8_t )20, 
            (uint8_t )43,        (uint8_t )34,        (uint8_t )57,        (uint8_t )48}, 
   {        (uint8_t )154,        (uint8_t )147,        (uint8_t )136,        (uint8_t )129, 
            (uint8_t )190,        (uint8_t )183,        (uint8_t )172,        (uint8_t )165, 
            (uint8_t )210,        (uint8_t )219,        (uint8_t )192,        (uint8_t )201, 
            (uint8_t )246,        (uint8_t )255,        (uint8_t )228,        (uint8_t )237}, 
   {        (uint8_t )10,        (uint8_t )3,        (uint8_t )24,        (uint8_t )17, 
            (uint8_t )46,        (uint8_t )39,        (uint8_t )60,        (uint8_t )53, 
            (uint8_t )66,        (uint8_t )75,        (uint8_t )80,        (uint8_t )89, 
            (uint8_t )102,        (uint8_t )111,        (uint8_t )116,        (uint8_t )125}, 
   {        (uint8_t )161,        (uint8_t )168,        (uint8_t )179,        (uint8_t )186, 
            (uint8_t )133,        (uint8_t )140,        (uint8_t )151,        (uint8_t )158, 
            (uint8_t )233,        (uint8_t )224,        (uint8_t )251,        (uint8_t )242, 
            (uint8_t )205,        (uint8_t )196,        (uint8_t )223,        (uint8_t )214}, 
   {        (uint8_t )49,        (uint8_t )56,        (uint8_t )35,        (uint8_t )42, 
            (uint8_t )21,        (uint8_t )28,        (uint8_t )7,        (uint8_t )14, 
            (uint8_t )121,        (uint8_t )112,        (uint8_t )107,        (uint8_t )98, 
            (uint8_t )93,        (uint8_t )84,        (uint8_t )79,        (uint8_t )70}};
#line 178 "oaes_lib.c"
static uint8_t oaes_gf_mul_b[16][16]  = 
#line 178
  { {        (uint8_t )0,        (uint8_t )11,        (uint8_t )22,        (uint8_t )29, 
            (uint8_t )44,        (uint8_t )39,        (uint8_t )58,        (uint8_t )49, 
            (uint8_t )88,        (uint8_t )83,        (uint8_t )78,        (uint8_t )69, 
            (uint8_t )116,        (uint8_t )127,        (uint8_t )98,        (uint8_t )105}, 
   {        (uint8_t )176,        (uint8_t )187,        (uint8_t )166,        (uint8_t )173, 
            (uint8_t )156,        (uint8_t )151,        (uint8_t )138,        (uint8_t )129, 
            (uint8_t )232,        (uint8_t )227,        (uint8_t )254,        (uint8_t )245, 
            (uint8_t )196,        (uint8_t )207,        (uint8_t )210,        (uint8_t )217}, 
   {        (uint8_t )123,        (uint8_t )112,        (uint8_t )109,        (uint8_t )102, 
            (uint8_t )87,        (uint8_t )92,        (uint8_t )65,        (uint8_t )74, 
            (uint8_t )35,        (uint8_t )40,        (uint8_t )53,        (uint8_t )62, 
            (uint8_t )15,        (uint8_t )4,        (uint8_t )25,        (uint8_t )18}, 
   {        (uint8_t )203,        (uint8_t )192,        (uint8_t )221,        (uint8_t )214, 
            (uint8_t )231,        (uint8_t )236,        (uint8_t )241,        (uint8_t )250, 
            (uint8_t )147,        (uint8_t )152,        (uint8_t )133,        (uint8_t )142, 
            (uint8_t )191,        (uint8_t )180,        (uint8_t )169,        (uint8_t )162}, 
   {        (uint8_t )246,        (uint8_t )253,        (uint8_t )224,        (uint8_t )235, 
            (uint8_t )218,        (uint8_t )209,        (uint8_t )204,        (uint8_t )199, 
            (uint8_t )174,        (uint8_t )165,        (uint8_t )184,        (uint8_t )179, 
            (uint8_t )130,        (uint8_t )137,        (uint8_t )148,        (uint8_t )159}, 
   {        (uint8_t )70,        (uint8_t )77,        (uint8_t )80,        (uint8_t )91, 
            (uint8_t )106,        (uint8_t )97,        (uint8_t )124,        (uint8_t )119, 
            (uint8_t )30,        (uint8_t )21,        (uint8_t )8,        (uint8_t )3, 
            (uint8_t )50,        (uint8_t )57,        (uint8_t )36,        (uint8_t )47}, 
   {        (uint8_t )141,        (uint8_t )134,        (uint8_t )155,        (uint8_t )144, 
            (uint8_t )161,        (uint8_t )170,        (uint8_t )183,        (uint8_t )188, 
            (uint8_t )213,        (uint8_t )222,        (uint8_t )195,        (uint8_t )200, 
            (uint8_t )249,        (uint8_t )242,        (uint8_t )239,        (uint8_t )228}, 
   {        (uint8_t )61,        (uint8_t )54,        (uint8_t )43,        (uint8_t )32, 
            (uint8_t )17,        (uint8_t )26,        (uint8_t )7,        (uint8_t )12, 
            (uint8_t )101,        (uint8_t )110,        (uint8_t )115,        (uint8_t )120, 
            (uint8_t )73,        (uint8_t )66,        (uint8_t )95,        (uint8_t )84}, 
   {        (uint8_t )247,        (uint8_t )252,        (uint8_t )225,        (uint8_t )234, 
            (uint8_t )219,        (uint8_t )208,        (uint8_t )205,        (uint8_t )198, 
            (uint8_t )175,        (uint8_t )164,        (uint8_t )185,        (uint8_t )178, 
            (uint8_t )131,        (uint8_t )136,        (uint8_t )149,        (uint8_t )158}, 
   {        (uint8_t )71,        (uint8_t )76,        (uint8_t )81,        (uint8_t )90, 
            (uint8_t )107,        (uint8_t )96,        (uint8_t )125,        (uint8_t )118, 
            (uint8_t )31,        (uint8_t )20,        (uint8_t )9,        (uint8_t )2, 
            (uint8_t )51,        (uint8_t )56,        (uint8_t )37,        (uint8_t )46}, 
   {        (uint8_t )140,        (uint8_t )135,        (uint8_t )154,        (uint8_t )145, 
            (uint8_t )160,        (uint8_t )171,        (uint8_t )182,        (uint8_t )189, 
            (uint8_t )212,        (uint8_t )223,        (uint8_t )194,        (uint8_t )201, 
            (uint8_t )248,        (uint8_t )243,        (uint8_t )238,        (uint8_t )229}, 
   {        (uint8_t )60,        (uint8_t )55,        (uint8_t )42,        (uint8_t )33, 
            (uint8_t )16,        (uint8_t )27,        (uint8_t )6,        (uint8_t )13, 
            (uint8_t )100,        (uint8_t )111,        (uint8_t )114,        (uint8_t )121, 
            (uint8_t )72,        (uint8_t )67,        (uint8_t )94,        (uint8_t )85}, 
   {        (uint8_t )1,        (uint8_t )10,        (uint8_t )23,        (uint8_t )28, 
            (uint8_t )45,        (uint8_t )38,        (uint8_t )59,        (uint8_t )48, 
            (uint8_t )89,        (uint8_t )82,        (uint8_t )79,        (uint8_t )68, 
            (uint8_t )117,        (uint8_t )126,        (uint8_t )99,        (uint8_t )104}, 
   {        (uint8_t )177,        (uint8_t )186,        (uint8_t )167,        (uint8_t )172, 
            (uint8_t )157,        (uint8_t )150,        (uint8_t )139,        (uint8_t )128, 
            (uint8_t )233,        (uint8_t )226,        (uint8_t )255,        (uint8_t )244, 
            (uint8_t )197,        (uint8_t )206,        (uint8_t )211,        (uint8_t )216}, 
   {        (uint8_t )122,        (uint8_t )113,        (uint8_t )108,        (uint8_t )103, 
            (uint8_t )86,        (uint8_t )93,        (uint8_t )64,        (uint8_t )75, 
            (uint8_t )34,        (uint8_t )41,        (uint8_t )52,        (uint8_t )63, 
            (uint8_t )14,        (uint8_t )5,        (uint8_t )24,        (uint8_t )19}, 
   {        (uint8_t )202,        (uint8_t )193,        (uint8_t )220,        (uint8_t )215, 
            (uint8_t )230,        (uint8_t )237,        (uint8_t )240,        (uint8_t )251, 
            (uint8_t )146,        (uint8_t )153,        (uint8_t )132,        (uint8_t )143, 
            (uint8_t )190,        (uint8_t )181,        (uint8_t )168,        (uint8_t )163}};
#line 198 "oaes_lib.c"
static uint8_t oaes_gf_mul_d[16][16]  = 
#line 198
  { {        (uint8_t )0,        (uint8_t )13,        (uint8_t )26,        (uint8_t )23, 
            (uint8_t )52,        (uint8_t )57,        (uint8_t )46,        (uint8_t )35, 
            (uint8_t )104,        (uint8_t )101,        (uint8_t )114,        (uint8_t )127, 
            (uint8_t )92,        (uint8_t )81,        (uint8_t )70,        (uint8_t )75}, 
   {        (uint8_t )208,        (uint8_t )221,        (uint8_t )202,        (uint8_t )199, 
            (uint8_t )228,        (uint8_t )233,        (uint8_t )254,        (uint8_t )243, 
            (uint8_t )184,        (uint8_t )181,        (uint8_t )162,        (uint8_t )175, 
            (uint8_t )140,        (uint8_t )129,        (uint8_t )150,        (uint8_t )155}, 
   {        (uint8_t )187,        (uint8_t )182,        (uint8_t )161,        (uint8_t )172, 
            (uint8_t )143,        (uint8_t )130,        (uint8_t )149,        (uint8_t )152, 
            (uint8_t )211,        (uint8_t )222,        (uint8_t )201,        (uint8_t )196, 
            (uint8_t )231,        (uint8_t )234,        (uint8_t )253,        (uint8_t )240}, 
   {        (uint8_t )107,        (uint8_t )102,        (uint8_t )113,        (uint8_t )124, 
            (uint8_t )95,        (uint8_t )82,        (uint8_t )69,        (uint8_t )72, 
            (uint8_t )3,        (uint8_t )14,        (uint8_t )25,        (uint8_t )20, 
            (uint8_t )55,        (uint8_t )58,        (uint8_t )45,        (uint8_t )32}, 
   {        (uint8_t )109,        (uint8_t )96,        (uint8_t )119,        (uint8_t )122, 
            (uint8_t )89,        (uint8_t )84,        (uint8_t )67,        (uint8_t )78, 
            (uint8_t )5,        (uint8_t )8,        (uint8_t )31,        (uint8_t )18, 
            (uint8_t )49,        (uint8_t )60,        (uint8_t )43,        (uint8_t )38}, 
   {        (uint8_t )189,        (uint8_t )176,        (uint8_t )167,        (uint8_t )170, 
            (uint8_t )137,        (uint8_t )132,        (uint8_t )147,        (uint8_t )158, 
            (uint8_t )213,        (uint8_t )216,        (uint8_t )207,        (uint8_t )194, 
            (uint8_t )225,        (uint8_t )236,        (uint8_t )251,        (uint8_t )246}, 
   {        (uint8_t )214,        (uint8_t )219,        (uint8_t )204,        (uint8_t )193, 
            (uint8_t )226,        (uint8_t )239,        (uint8_t )248,        (uint8_t )245, 
            (uint8_t )190,        (uint8_t )179,        (uint8_t )164,        (uint8_t )169, 
            (uint8_t )138,        (uint8_t )135,        (uint8_t )144,        (uint8_t )157}, 
   {        (uint8_t )6,        (uint8_t )11,        (uint8_t )28,        (uint8_t )17, 
            (uint8_t )50,        (uint8_t )63,        (uint8_t )40,        (uint8_t )37, 
            (uint8_t )110,        (uint8_t )99,        (uint8_t )116,        (uint8_t )121, 
            (uint8_t )90,        (uint8_t )87,        (uint8_t )64,        (uint8_t )77}, 
   {        (uint8_t )218,        (uint8_t )215,        (uint8_t )192,        (uint8_t )205, 
            (uint8_t )238,        (uint8_t )227,        (uint8_t )244,        (uint8_t )249, 
            (uint8_t )178,        (uint8_t )191,        (uint8_t )168,        (uint8_t )165, 
            (uint8_t )134,        (uint8_t )139,        (uint8_t )156,        (uint8_t )145}, 
   {        (uint8_t )10,        (uint8_t )7,        (uint8_t )16,        (uint8_t )29, 
            (uint8_t )62,        (uint8_t )51,        (uint8_t )36,        (uint8_t )41, 
            (uint8_t )98,        (uint8_t )111,        (uint8_t )120,        (uint8_t )117, 
            (uint8_t )86,        (uint8_t )91,        (uint8_t )76,        (uint8_t )65}, 
   {        (uint8_t )97,        (uint8_t )108,        (uint8_t )123,        (uint8_t )118, 
            (uint8_t )85,        (uint8_t )88,        (uint8_t )79,        (uint8_t )66, 
            (uint8_t )9,        (uint8_t )4,        (uint8_t )19,        (uint8_t )30, 
            (uint8_t )61,        (uint8_t )48,        (uint8_t )39,        (uint8_t )42}, 
   {        (uint8_t )177,        (uint8_t )188,        (uint8_t )171,        (uint8_t )166, 
            (uint8_t )133,        (uint8_t )136,        (uint8_t )159,        (uint8_t )146, 
            (uint8_t )217,        (uint8_t )212,        (uint8_t )195,        (uint8_t )206, 
            (uint8_t )237,        (uint8_t )224,        (uint8_t )247,        (uint8_t )250}, 
   {        (uint8_t )183,        (uint8_t )186,        (uint8_t )173,        (uint8_t )160, 
            (uint8_t )131,        (uint8_t )142,        (uint8_t )153,        (uint8_t )148, 
            (uint8_t )223,        (uint8_t )210,        (uint8_t )197,        (uint8_t )200, 
            (uint8_t )235,        (uint8_t )230,        (uint8_t )241,        (uint8_t )252}, 
   {        (uint8_t )103,        (uint8_t )106,        (uint8_t )125,        (uint8_t )112, 
            (uint8_t )83,        (uint8_t )94,        (uint8_t )73,        (uint8_t )68, 
            (uint8_t )15,        (uint8_t )2,        (uint8_t )21,        (uint8_t )24, 
            (uint8_t )59,        (uint8_t )54,        (uint8_t )33,        (uint8_t )44}, 
   {        (uint8_t )12,        (uint8_t )1,        (uint8_t )22,        (uint8_t )27, 
            (uint8_t )56,        (uint8_t )53,        (uint8_t )34,        (uint8_t )47, 
            (uint8_t )100,        (uint8_t )105,        (uint8_t )126,        (uint8_t )115, 
            (uint8_t )80,        (uint8_t )93,        (uint8_t )74,        (uint8_t )71}, 
   {        (uint8_t )220,        (uint8_t )209,        (uint8_t )198,        (uint8_t )203, 
            (uint8_t )232,        (uint8_t )229,        (uint8_t )242,        (uint8_t )255, 
            (uint8_t )180,        (uint8_t )185,        (uint8_t )174,        (uint8_t )163, 
            (uint8_t )128,        (uint8_t )141,        (uint8_t )154,        (uint8_t )151}};
#line 218 "oaes_lib.c"
static uint8_t oaes_gf_mul_e[16][16]  = 
#line 218
  { {        (uint8_t )0,        (uint8_t )14,        (uint8_t )28,        (uint8_t )18, 
            (uint8_t )56,        (uint8_t )54,        (uint8_t )36,        (uint8_t )42, 
            (uint8_t )112,        (uint8_t )126,        (uint8_t )108,        (uint8_t )98, 
            (uint8_t )72,        (uint8_t )70,        (uint8_t )84,        (uint8_t )90}, 
   {        (uint8_t )224,        (uint8_t )238,        (uint8_t )252,        (uint8_t )242, 
            (uint8_t )216,        (uint8_t )214,        (uint8_t )196,        (uint8_t )202, 
            (uint8_t )144,        (uint8_t )158,        (uint8_t )140,        (uint8_t )130, 
            (uint8_t )168,        (uint8_t )166,        (uint8_t )180,        (uint8_t )186}, 
   {        (uint8_t )219,        (uint8_t )213,        (uint8_t )199,        (uint8_t )201, 
            (uint8_t )227,        (uint8_t )237,        (uint8_t )255,        (uint8_t )241, 
            (uint8_t )171,        (uint8_t )165,        (uint8_t )183,        (uint8_t )185, 
            (uint8_t )147,        (uint8_t )157,        (uint8_t )143,        (uint8_t )129}, 
   {        (uint8_t )59,        (uint8_t )53,        (uint8_t )39,        (uint8_t )41, 
            (uint8_t )3,        (uint8_t )13,        (uint8_t )31,        (uint8_t )17, 
            (uint8_t )75,        (uint8_t )69,        (uint8_t )87,        (uint8_t )89, 
            (uint8_t )115,        (uint8_t )125,        (uint8_t )111,        (uint8_t )97}, 
   {        (uint8_t )173,        (uint8_t )163,        (uint8_t )177,        (uint8_t )191, 
            (uint8_t )149,        (uint8_t )155,        (uint8_t )137,        (uint8_t )135, 
            (uint8_t )221,        (uint8_t )211,        (uint8_t )193,        (uint8_t )207, 
            (uint8_t )229,        (uint8_t )235,        (uint8_t )249,        (uint8_t )247}, 
   {        (uint8_t )77,        (uint8_t )67,        (uint8_t )81,        (uint8_t )95, 
            (uint8_t )117,        (uint8_t )123,        (uint8_t )105,        (uint8_t )103, 
            (uint8_t )61,        (uint8_t )51,        (uint8_t )33,        (uint8_t )47, 
            (uint8_t )5,        (uint8_t )11,        (uint8_t )25,        (uint8_t )23}, 
   {        (uint8_t )118,        (uint8_t )120,        (uint8_t )106,        (uint8_t )100, 
            (uint8_t )78,        (uint8_t )64,        (uint8_t )82,        (uint8_t )92, 
            (uint8_t )6,        (uint8_t )8,        (uint8_t )26,        (uint8_t )20, 
            (uint8_t )62,        (uint8_t )48,        (uint8_t )34,        (uint8_t )44}, 
   {        (uint8_t )150,        (uint8_t )152,        (uint8_t )138,        (uint8_t )132, 
            (uint8_t )174,        (uint8_t )160,        (uint8_t )178,        (uint8_t )188, 
            (uint8_t )230,        (uint8_t )232,        (uint8_t )250,        (uint8_t )244, 
            (uint8_t )222,        (uint8_t )208,        (uint8_t )194,        (uint8_t )204}, 
   {        (uint8_t )65,        (uint8_t )79,        (uint8_t )93,        (uint8_t )83, 
            (uint8_t )121,        (uint8_t )119,        (uint8_t )101,        (uint8_t )107, 
            (uint8_t )49,        (uint8_t )63,        (uint8_t )45,        (uint8_t )35, 
            (uint8_t )9,        (uint8_t )7,        (uint8_t )21,        (uint8_t )27}, 
   {        (uint8_t )161,        (uint8_t )175,        (uint8_t )189,        (uint8_t )179, 
            (uint8_t )153,        (uint8_t )151,        (uint8_t )133,        (uint8_t )139, 
            (uint8_t )209,        (uint8_t )223,        (uint8_t )205,        (uint8_t )195, 
            (uint8_t )233,        (uint8_t )231,        (uint8_t )245,        (uint8_t )251}, 
   {        (uint8_t )154,        (uint8_t )148,        (uint8_t )134,        (uint8_t )136, 
            (uint8_t )162,        (uint8_t )172,        (uint8_t )190,        (uint8_t )176, 
            (uint8_t )234,        (uint8_t )228,        (uint8_t )246,        (uint8_t )248, 
            (uint8_t )210,        (uint8_t )220,        (uint8_t )206,        (uint8_t )192}, 
   {        (uint8_t )122,        (uint8_t )116,        (uint8_t )102,        (uint8_t )104, 
            (uint8_t )66,        (uint8_t )76,        (uint8_t )94,        (uint8_t )80, 
            (uint8_t )10,        (uint8_t )4,        (uint8_t )22,        (uint8_t )24, 
            (uint8_t )50,        (uint8_t )60,        (uint8_t )46,        (uint8_t )32}, 
   {        (uint8_t )236,        (uint8_t )226,        (uint8_t )240,        (uint8_t )254, 
            (uint8_t )212,        (uint8_t )218,        (uint8_t )200,        (uint8_t )198, 
            (uint8_t )156,        (uint8_t )146,        (uint8_t )128,        (uint8_t )142, 
            (uint8_t )164,        (uint8_t )170,        (uint8_t )184,        (uint8_t )182}, 
   {        (uint8_t )12,        (uint8_t )2,        (uint8_t )16,        (uint8_t )30, 
            (uint8_t )52,        (uint8_t )58,        (uint8_t )40,        (uint8_t )38, 
            (uint8_t )124,        (uint8_t )114,        (uint8_t )96,        (uint8_t )110, 
            (uint8_t )68,        (uint8_t )74,        (uint8_t )88,        (uint8_t )86}, 
   {        (uint8_t )55,        (uint8_t )57,        (uint8_t )43,        (uint8_t )37, 
            (uint8_t )15,        (uint8_t )1,        (uint8_t )19,        (uint8_t )29, 
            (uint8_t )71,        (uint8_t )73,        (uint8_t )91,        (uint8_t )85, 
            (uint8_t )127,        (uint8_t )113,        (uint8_t )99,        (uint8_t )109}, 
   {        (uint8_t )215,        (uint8_t )217,        (uint8_t )203,        (uint8_t )197, 
            (uint8_t )239,        (uint8_t )225,        (uint8_t )243,        (uint8_t )253, 
            (uint8_t )167,        (uint8_t )169,        (uint8_t )187,        (uint8_t )181, 
            (uint8_t )159,        (uint8_t )145,        (uint8_t )131,        (uint8_t )141}};
#line 238 "oaes_lib.c"
static OAES_RET oaes_sub_byte(uint8_t *byte ) 
{ 
  size_t _x ;
  size_t _y ;

  {
#line 242
  if ((unsigned int )((void *)0) == (unsigned int )byte) {
#line 243
    return ((OAES_RET )2);
  }
#line 245
  _x = (size_t )*byte;
#line 245
  _y = (_x >> 4) & 15UL;
#line 246
  _x &= 15UL;
#line 247
  *byte = oaes_sub_byte_value[_y][_x];
#line 249
  return ((OAES_RET )0);
}
}
#line 252 "oaes_lib.c"
static OAES_RET oaes_inv_sub_byte(uint8_t *byte ) 
{ 
  size_t _x ;
  size_t _y ;

  {
#line 256
  if ((unsigned int )((void *)0) == (unsigned int )byte) {
#line 257
    return ((OAES_RET )2);
  }
#line 259
  _y = (size_t )*byte;
#line 259
  _x = _y;
#line 260
  _x &= 15UL;
#line 261
  _y &= 240UL;
#line 262
  _y >>= 4;
#line 263
  *byte = oaes_inv_sub_byte_value[_y][_x];
#line 265
  return ((OAES_RET )0);
}
}
#line 283 "oaes_lib.c"
static OAES_RET oaes_word_rot_left(uint8_t *word ) 
{ 
  uint8_t _temp[4] ;

  {
#line 287
  if ((unsigned int )((void *)0) == (unsigned int )word) {
#line 288
    return ((OAES_RET )2);
  }
#line 290
  memcpy((void * __restrict  )(_temp), (void const   * __restrict  )(word + 1), (size_t )3);
#line 291
  _temp[3] = *(word + 0);
#line 292
  memcpy((void * __restrict  )word, (void const   * __restrict  )(_temp), (size_t )4);
#line 294
  return ((OAES_RET )0);
}
}
#line 297 "oaes_lib.c"
static OAES_RET oaes_shift_rows(uint8_t *block ) 
{ 
  uint8_t _temp[5] ;

  {
#line 299
  if ((unsigned int )((void *)0) == (unsigned int )block) {
#line 300
    return ((OAES_RET )2);
  }
#line 302
  _temp[0] = *(block + 3);
#line 302
  _temp[1] = *(block + 2);
#line 302
  _temp[2] = *(block + 1);
#line 302
  _temp[3] = *(block + 6);
#line 302
  _temp[4] = *(block + 11);
#line 304
  *(block + 11) = *(block + 7);
#line 305
  *(block + 1) = *(block + 5);
#line 306
  *(block + 2) = *(block + 10);
#line 307
  *(block + 3) = *(block + 15);
#line 308
  *(block + 5) = *(block + 9);
#line 309
  *(block + 6) = *(block + 14);
#line 310
  *(block + 7) = _temp[0];
#line 311
  *(block + 9) = *(block + 13);
#line 312
  *(block + 10) = _temp[1];
#line 313
  *(block + 13) = _temp[2];
#line 314
  *(block + 14) = _temp[3];
#line 315
  *(block + 15) = _temp[4];
#line 317
  return ((OAES_RET )0);
}
}
#line 320 "oaes_lib.c"
static OAES_RET oaes_inv_shift_rows(uint8_t *block ) 
{ 
  uint8_t _temp[16] ;

  {
#line 324
  if ((unsigned int )((void *)0) == (unsigned int )block) {
#line 325
    return ((OAES_RET )2);
  }
#line 327
  _temp[0] = *(block + 0);
#line 328
  _temp[1] = *(block + 13);
#line 329
  _temp[2] = *(block + 10);
#line 330
  _temp[3] = *(block + 7);
#line 331
  _temp[4] = *(block + 4);
#line 332
  _temp[5] = *(block + 1);
#line 333
  _temp[6] = *(block + 14);
#line 334
  _temp[7] = *(block + 11);
#line 335
  _temp[8] = *(block + 8);
#line 336
  _temp[9] = *(block + 5);
#line 337
  _temp[10] = *(block + 2);
#line 338
  _temp[11] = *(block + 15);
#line 339
  _temp[12] = *(block + 12);
#line 340
  _temp[13] = *(block + 9);
#line 341
  _temp[14] = *(block + 6);
#line 342
  _temp[15] = *(block + 3);
#line 343
  memcpy((void * __restrict  )block, (void const   * __restrict  )(_temp), (size_t )16);
#line 345
  return ((OAES_RET )0);
}
}
#line 348 "oaes_lib.c"
static uint8_t oaes_gf_mul(uint8_t left , uint8_t right ) 
{ 
  size_t _x ;
  size_t _y ;

  {
#line 352
  _x = (size_t )left;
#line 352
  _y = (_x >> 4) & 15UL;
#line 353
  _x &= 15UL;
#line 355
  switch ((int )right) {
  case 2: 
#line 358
  return (oaes_gf_mul_2[_y][_x]);
#line 359
  break;
  case 3: 
#line 361
  return (oaes_gf_mul_3[_y][_x]);
#line 362
  break;
  case 9: 
#line 364
  return (oaes_gf_mul_9[_y][_x]);
#line 365
  break;
  case 11: 
#line 367
  return (oaes_gf_mul_b[_y][_x]);
#line 368
  break;
  case 13: 
#line 370
  return (oaes_gf_mul_d[_y][_x]);
#line 371
  break;
  case 14: 
#line 373
  return (oaes_gf_mul_e[_y][_x]);
#line 374
  break;
  default: 
#line 376
  return (left);
#line 377
  break;
  }
#line 379
  return ((unsigned char)0);
}
}
#line 381 "oaes_lib.c"
static OAES_RET oaes_mix_cols(uint8_t *word ) 
{ 
  uint8_t _temp[4] ;
  uint8_t tmp ;
  uint8_t tmp___0 ;
  uint8_t tmp___1 ;
  uint8_t tmp___2 ;
  uint8_t tmp___3 ;
  uint8_t tmp___4 ;
  uint8_t tmp___5 ;
  uint8_t tmp___6 ;

  {
#line 385
  if ((unsigned int )((void *)0) == (unsigned int )word) {
#line 386
    return ((OAES_RET )2);
  }
#line 388
  tmp = oaes_gf_mul(*(word + 0), (uint8_t )2);
#line 388
  tmp___0 = oaes_gf_mul(*(word + 1), (uint8_t )3);
#line 388
  _temp[0] = (uint8_t )((((int )tmp ^ (int )tmp___0) ^ (int )*(word + 2)) ^ (int )*(word + 3));
#line 390
  tmp___1 = oaes_gf_mul(*(word + 1), (uint8_t )2);
#line 390
  tmp___2 = oaes_gf_mul(*(word + 2), (uint8_t )3);
#line 390
  _temp[1] = (uint8_t )((((int )*(word + 0) ^ (int )tmp___1) ^ (int )tmp___2) ^ (int )*(word + 3));
#line 392
  tmp___3 = oaes_gf_mul(*(word + 2), (uint8_t )2);
#line 392
  tmp___4 = oaes_gf_mul(*(word + 3), (uint8_t )3);
#line 392
  _temp[2] = (uint8_t )((((int )*(word + 0) ^ (int )*(word + 1)) ^ (int )tmp___3) ^ (int )tmp___4);
#line 394
  tmp___5 = oaes_gf_mul(*(word + 0), (uint8_t )3);
#line 394
  tmp___6 = oaes_gf_mul(*(word + 3), (uint8_t )2);
#line 394
  _temp[3] = (uint8_t )((((int )tmp___5 ^ (int )*(word + 1)) ^ (int )*(word + 2)) ^ (int )tmp___6);
#line 396
  memcpy((void * __restrict  )word, (void const   * __restrict  )(_temp), (size_t )4);
#line 398
  return ((OAES_RET )0);
}
}
#line 401 "oaes_lib.c"
static OAES_RET oaes_inv_mix_cols(uint8_t *word ) 
{ 
  uint8_t _temp[4] ;
  uint8_t tmp ;
  uint8_t tmp___0 ;
  uint8_t tmp___1 ;
  uint8_t tmp___2 ;
  uint8_t tmp___3 ;
  uint8_t tmp___4 ;
  uint8_t tmp___5 ;
  uint8_t tmp___6 ;
  uint8_t tmp___7 ;
  uint8_t tmp___8 ;
  uint8_t tmp___9 ;
  uint8_t tmp___10 ;
  uint8_t tmp___11 ;
  uint8_t tmp___12 ;
  uint8_t tmp___13 ;
  uint8_t tmp___14 ;

  {
#line 405
  if ((unsigned int )((void *)0) == (unsigned int )word) {
#line 406
    return ((OAES_RET )2);
  }
#line 408
  tmp = oaes_gf_mul(*(word + 0), (uint8_t )14);
#line 408
  tmp___0 = oaes_gf_mul(*(word + 1), (uint8_t )11);
#line 408
  tmp___1 = oaes_gf_mul(*(word + 2), (uint8_t )13);
#line 408
  tmp___2 = oaes_gf_mul(*(word + 3), (uint8_t )9);
#line 408
  _temp[0] = (uint8_t )((((int )tmp ^ (int )tmp___0) ^ (int )tmp___1) ^ (int )tmp___2);
#line 410
  tmp___3 = oaes_gf_mul(*(word + 0), (uint8_t )9);
#line 410
  tmp___4 = oaes_gf_mul(*(word + 1), (uint8_t )14);
#line 410
  tmp___5 = oaes_gf_mul(*(word + 2), (uint8_t )11);
#line 410
  tmp___6 = oaes_gf_mul(*(word + 3), (uint8_t )13);
#line 410
  _temp[1] = (uint8_t )((((int )tmp___3 ^ (int )tmp___4) ^ (int )tmp___5) ^ (int )tmp___6);
#line 412
  tmp___7 = oaes_gf_mul(*(word + 0), (uint8_t )13);
#line 412
  tmp___8 = oaes_gf_mul(*(word + 1), (uint8_t )9);
#line 412
  tmp___9 = oaes_gf_mul(*(word + 2), (uint8_t )14);
#line 412
  tmp___10 = oaes_gf_mul(*(word + 3), (uint8_t )11);
#line 412
  _temp[2] = (uint8_t )((((int )tmp___7 ^ (int )tmp___8) ^ (int )tmp___9) ^ (int )tmp___10);
#line 414
  tmp___11 = oaes_gf_mul(*(word + 0), (uint8_t )11);
#line 414
  tmp___12 = oaes_gf_mul(*(word + 1), (uint8_t )13);
#line 414
  tmp___13 = oaes_gf_mul(*(word + 2), (uint8_t )9);
#line 414
  tmp___14 = oaes_gf_mul(*(word + 3), (uint8_t )14);
#line 414
  _temp[3] = (uint8_t )((((int )tmp___11 ^ (int )tmp___12) ^ (int )tmp___13) ^ (int )tmp___14);
#line 416
  memcpy((void * __restrict  )word, (void const   * __restrict  )(_temp), (size_t )4);
#line 418
  return ((OAES_RET )0);
}
}
#line 421 "oaes_lib.c"
OAES_RET oaes_sprintf(char *buf , size_t *buf_len , uint8_t const   *data , size_t data_len ) 
{ 
  size_t _i ;
  size_t _buf_len_in ;
  char _temp[4] ;

  {
#line 427
  if ((unsigned int )((void *)0) == (unsigned int )buf_len) {
#line 428
    return ((OAES_RET )3);
  }
#line 430
  _buf_len_in = *buf_len;
#line 431
  *buf_len = (data_len * 3UL + data_len / 16UL) + 1UL;
#line 433
  if ((unsigned int )((void *)0) == (unsigned int )buf) {
#line 434
    return ((OAES_RET )0);
  }
#line 436
  if (*buf_len > _buf_len_in) {
#line 437
    return ((OAES_RET )9);
  }
#line 439
  if ((unsigned int )((void *)0) == (unsigned int )data) {
#line 440
    return ((OAES_RET )4);
  }
#line 442
  strcpy((char * __restrict  )buf, (char const   * __restrict  )"");
#line 444
  _i = (size_t )0;
#line 444
  while (_i < data_len) {
#line 446
    sprintf((char * __restrict  )(_temp), (char const   * __restrict  )"%02x ", (int const   )*(data + _i));
#line 447
    strcat((char * __restrict  )buf, (char const   * __restrict  )(_temp));
#line 448
    if (_i) {
#line 448
      if (0UL == (_i + 1UL) % 16UL) {
#line 449
        strcat((char * __restrict  )buf, (char const   * __restrict  )"\n");
      }
    }
#line 444
    _i ++;
  }
#line 452
  return ((OAES_RET )0);
}
}
#line 474 "oaes_lib.c"
static uint32_t oaes_get_seed(void) 
{ 
  struct timeb timer ;
  struct tm *gmTimer ;
  char *_test ;
  uint32_t _ret ;
  void *tmp ;
  pid_t tmp___0 ;

  {
#line 478
  _test = (char *)((void *)0);
#line 479
  _ret = (uint32_t )0;
#line 481
  ftime(& timer);
#line 482
  gmTimer = gmtime((time_t const   *)(& timer.time));
#line 483
  tmp = calloc(sizeof(char ), (size_t )timer.millitm);
#line 483
  _test = (char *)tmp;
#line 484
  tmp___0 = getpid();
#line 484
  _ret = (uint32_t )(((uintptr_t )((((((((gmTimer->tm_year + 1900) + gmTimer->tm_mon) + 1) + gmTimer->tm_mday) + gmTimer->tm_hour) + gmTimer->tm_min) + gmTimer->tm_sec) + (int )timer.millitm) + (uintptr_t )(_test + (int )timer.millitm)) + (uintptr_t )tmp___0);
#line 488
  if (_test) {
#line 489
    free((void *)_test);
  }
#line 491
  return (_ret);
}
}
#line 495 "oaes_lib.c"
static OAES_RET oaes_key_destroy(oaes_key **key ) 
{ 


  {
#line 497
  if ((unsigned int )((void *)0) == (unsigned int )*key) {
#line 498
    return ((OAES_RET )0);
  }
#line 500
  if ((*key)->data) {
#line 502
    free((void *)(*key)->data);
#line 503
    (*key)->data = (uint8_t *)((void *)0);
  }
#line 506
  if ((*key)->exp_data) {
#line 508
    free((void *)(*key)->exp_data);
#line 509
    (*key)->exp_data = (uint8_t *)((void *)0);
  }
#line 512
  (*key)->data_len = (size_t )0;
#line 513
  (*key)->exp_data_len = (size_t )0;
#line 514
  (*key)->num_keys = (size_t )0;
#line 515
  (*key)->key_base = (size_t )0;
#line 516
  free((void *)*key);
#line 517
  *key = (oaes_key *)((void *)0);
#line 519
  return ((OAES_RET )0);
}
}
#line 522 "oaes_lib.c"
static OAES_RET oaes_key_expand(OAES_CTX *ctx ) 
{ 
  size_t _i ;
  size_t _j ;
  oaes_ctx *_ctx ;
  void *tmp ;
  uint8_t _temp[4] ;

  {
#line 525
  _ctx = (oaes_ctx *)ctx;
#line 528
  (_ctx->key)->key_base = (size_t )8;
#line 530
  (_ctx->key)->num_keys = (size_t )15;
#line 533
  (_ctx->key)->exp_data_len = (size_t )240;
#line 535
  tmp = calloc((_ctx->key)->exp_data_len, sizeof(uint8_t ));
#line 535
  (_ctx->key)->exp_data = (uint8_t *)tmp;
#line 538
  memcpy((void * __restrict  )(_ctx->key)->exp_data, (void const   * __restrict  )(_ctx->key)->data,
         (_ctx->key)->data_len);
#line 542
  _i = (size_t )8;
#line 542
  while (_i < 60UL) {
#line 546
    memcpy((void * __restrict  )(_temp), (void const   * __restrict  )((_ctx->key)->exp_data + (_i - 1UL) * 4UL),
           (size_t )4);
#line 549
    if (0UL == _i % 8UL) {
#line 551
      oaes_word_rot_left((uint8_t *)(_temp));
#line 553
      _j = (size_t )0;
#line 553
      while (_j < 4UL) {
#line 554
        oaes_sub_byte(_temp + _j);
#line 553
        _j ++;
      }
#line 556
      _temp[0] = (uint8_t )((int )_temp[0] ^ (int )oaes_gf_8[_i / (_ctx->key)->key_base - 1UL]);
    } else
#line 558
    if (4UL == _i % (_ctx->key)->key_base) {
#line 560
      _j = (size_t )0;
#line 560
      while (_j < 4UL) {
#line 561
        oaes_sub_byte(_temp + _j);
#line 560
        _j ++;
      }
    }
#line 564
    _j = (size_t )0;
#line 564
    while (_j < 4UL) {
#line 566
      *((_ctx->key)->exp_data + (_i * 4UL + _j)) = (uint8_t )((int )*((_ctx->key)->exp_data + ((_i - (_ctx->key)->key_base) * 4UL + _j)) ^ (int )_temp[_j]);
#line 564
      _j ++;
    }
#line 542
    _i ++;
  }
#line 572
  return ((OAES_RET )0);
}
}
#line 575 "oaes_lib.c"
static OAES_RET oaes_key_gen(OAES_CTX *ctx , size_t key_size ) 
{ 
  size_t _i ;
  oaes_key *_key ;
  oaes_ctx *_ctx ;
  OAES_RET _rc ;
  void *tmp ;
  void *tmp___0 ;
  int tmp___1 ;
  OAES_RET tmp___2 ;
  int tmp___3 ;

  {
#line 578
  _key = (oaes_key *)((void *)0);
#line 579
  _ctx = (oaes_ctx *)ctx;
#line 580
  _rc = (OAES_RET )0;
#line 582
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 583
    return ((OAES_RET )2);
  }
#line 585
  tmp = calloc(sizeof(oaes_key ), (size_t )1);
#line 585
  _key = (oaes_key *)tmp;
#line 587
  if ((unsigned int )((void *)0) == (unsigned int )_key) {
#line 588
    return ((OAES_RET )8);
  }
#line 590
  if (_ctx->key) {
#line 591
    oaes_key_destroy(& _ctx->key);
  }
#line 593
  _key->data_len = key_size;
#line 594
  tmp___0 = calloc(key_size, sizeof(uint8_t ));
#line 594
  _key->data = (uint8_t *)tmp___0;
#line 596
  if ((unsigned int )((void *)0) == (unsigned int )_key->data) {
#line 597
    return ((OAES_RET )8);
  }
#line 599
  _i = (size_t )0;
#line 599
  while (_i < key_size) {
#line 603
    tmp___1 = rand();
#line 603
    *(_key->data + _i) = (uint8_t )tmp___1;
#line 599
    _i ++;
  }
#line 606
  _ctx->key = _key;
#line 607
  if (_rc) {
#line 607
    tmp___3 = 1;
  } else {
#line 607
    tmp___2 = oaes_key_expand(ctx);
#line 607
    if (tmp___2) {
#line 607
      tmp___3 = 1;
    } else {
#line 607
      tmp___3 = 0;
    }
  }
#line 607
  _rc = (OAES_RET )tmp___3;
#line 609
  if ((unsigned int )_rc != 0U) {
#line 611
    oaes_key_destroy(& _ctx->key);
#line 612
    return (_rc);
  }
#line 615
  return ((OAES_RET )0);
}
}
#line 618 "oaes_lib.c"
OAES_RET oaes_key_gen_128(OAES_CTX *ctx ) 
{ 
  OAES_RET tmp ;

  {
#line 620
  tmp = oaes_key_gen(ctx, (size_t )16);
#line 620
  return (tmp);
}
}
#line 623 "oaes_lib.c"
OAES_RET oaes_key_gen_192(OAES_CTX *ctx ) 
{ 
  OAES_RET tmp ;

  {
#line 625
  tmp = oaes_key_gen(ctx, (size_t )24);
#line 625
  return (tmp);
}
}
#line 628 "oaes_lib.c"
OAES_RET oaes_key_gen_256(OAES_CTX *ctx ) 
{ 
  OAES_RET tmp ;

  {
#line 630
  tmp = oaes_key_gen(ctx, (size_t )32);
#line 630
  return (tmp);
}
}
#line 633 "oaes_lib.c"
OAES_RET oaes_key_export(OAES_CTX *ctx , uint8_t *data , size_t *data_len ) 
{ 
  size_t _data_len_in ;
  oaes_ctx *_ctx ;

  {
#line 637
  _ctx = (oaes_ctx *)ctx;
#line 639
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 640
    return ((OAES_RET )2);
  }
#line 642
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 643
    return ((OAES_RET )7);
  }
#line 645
  if ((unsigned int )((void *)0) == (unsigned int )data_len) {
#line 646
    return ((OAES_RET )4);
  }
#line 648
  _data_len_in = *data_len;
#line 650
  *data_len = (_ctx->key)->data_len + 16UL;
#line 652
  if ((unsigned int )((void *)0) == (unsigned int )data) {
#line 653
    return ((OAES_RET )0);
  }
#line 655
  if (_data_len_in < *data_len) {
#line 656
    return ((OAES_RET )9);
  }
#line 659
  memcpy((void * __restrict  )data, (void const   * __restrict  )(oaes_header), (size_t )16);
#line 660
  *(data + 5) = (uint8_t )1;
#line 661
  *(data + 7) = (uint8_t )(_ctx->key)->data_len;
#line 662
  memcpy((void * __restrict  )(data + 16), (void const   * __restrict  )(_ctx->key)->data,
         (_ctx->key)->data_len);
#line 664
  return ((OAES_RET )0);
}
}
#line 667 "oaes_lib.c"
OAES_RET oaes_key_export_data(OAES_CTX *ctx , uint8_t *data , size_t *data_len ) 
{ 
  size_t _data_len_in ;
  oaes_ctx *_ctx ;

  {
#line 671
  _ctx = (oaes_ctx *)ctx;
#line 673
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 674
    return ((OAES_RET )2);
  }
#line 676
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 677
    return ((OAES_RET )7);
  }
#line 679
  if ((unsigned int )((void *)0) == (unsigned int )data_len) {
#line 680
    return ((OAES_RET )4);
  }
#line 682
  _data_len_in = *data_len;
#line 683
  *data_len = (_ctx->key)->data_len;
#line 685
  if ((unsigned int )((void *)0) == (unsigned int )data) {
#line 686
    return ((OAES_RET )0);
  }
#line 688
  if (_data_len_in < *data_len) {
#line 689
    return ((OAES_RET )9);
  }
#line 691
  memcpy((void * __restrict  )data, (void const   * __restrict  )(_ctx->key)->data,
         *data_len);
#line 693
  return ((OAES_RET )0);
}
}
#line 696 "oaes_lib.c"
OAES_RET oaes_key_import(OAES_CTX *ctx , uint8_t const   *data , size_t data_len ) 
{ 
  oaes_ctx *_ctx ;
  OAES_RET _rc ;
  int _key_length ;
  int tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  OAES_RET tmp___2 ;
  int tmp___3 ;

  {
#line 699
  _ctx = (oaes_ctx *)ctx;
#line 700
  _rc = (OAES_RET )0;
#line 703
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 704
    return ((OAES_RET )2);
  }
#line 706
  if ((unsigned int )((void *)0) == (unsigned int )data) {
#line 707
    return ((OAES_RET )3);
  }
#line 709
  switch (data_len) {
  case 48UL: 
  case 40UL: 
  case 32UL: 
#line 714
  break;
  default: 
#line 716
  return ((OAES_RET )4);
  }
#line 720
  tmp = memcmp((void const   *)data, (void const   *)(oaes_header), (size_t )4);
#line 720
  if (0 != tmp) {
#line 721
    return ((OAES_RET )10);
  }
#line 724
  switch ((int const   )*(data + 4)) {
  case 1: 
#line 727
  break;
  default: 
#line 729
  return ((OAES_RET )10);
  }
#line 733
  switch ((int const   )*(data + 5)) {
  case 1: 
#line 736
  break;
  default: 
#line 738
  return ((OAES_RET )10);
  }
#line 742
  _key_length = (int )*(data + 7);
#line 743
  switch (_key_length) {
  case 32: 
  case 24: 
  case 16: 
#line 748
  break;
  default: 
#line 750
  return ((OAES_RET )10);
  }
#line 753
  if ((int )data_len != _key_length + 16) {
#line 754
    return ((OAES_RET )4);
  }
#line 756
  if (_ctx->key) {
#line 757
    oaes_key_destroy(& _ctx->key);
  }
#line 759
  tmp___0 = calloc(sizeof(oaes_key ), (size_t )1);
#line 759
  _ctx->key = (oaes_key *)tmp___0;
#line 761
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 762
    return ((OAES_RET )8);
  }
#line 764
  (_ctx->key)->data_len = (size_t )_key_length;
#line 765
  tmp___1 = calloc((size_t )_key_length, sizeof(uint8_t ));
#line 765
  (_ctx->key)->data = (uint8_t *)tmp___1;
#line 768
  if ((unsigned int )((void *)0) == (unsigned int )(_ctx->key)->data) {
#line 770
    oaes_key_destroy(& _ctx->key);
#line 771
    return ((OAES_RET )8);
  }
#line 774
  memcpy((void * __restrict  )(_ctx->key)->data, (void const   * __restrict  )(data + 16),
         (size_t )_key_length);
#line 775
  if (_rc) {
#line 775
    tmp___3 = 1;
  } else {
#line 775
    tmp___2 = oaes_key_expand(ctx);
#line 775
    if (tmp___2) {
#line 775
      tmp___3 = 1;
    } else {
#line 775
      tmp___3 = 0;
    }
  }
#line 775
  _rc = (OAES_RET )tmp___3;
#line 777
  if ((unsigned int )_rc != 0U) {
#line 779
    oaes_key_destroy(& _ctx->key);
#line 780
    return (_rc);
  }
#line 783
  return ((OAES_RET )0);
}
}
#line 786 "oaes_lib.c"
OAES_RET oaes_key_import_data(OAES_CTX *ctx , uint8_t const   *data , size_t data_len ) 
{ 
  oaes_ctx *_ctx ;
  void *tmp ;
  void *tmp___0 ;

  {
#line 789
  _ctx = (oaes_ctx *)ctx;
#line 791
  tmp = calloc(sizeof(oaes_key ), (size_t )1);
#line 791
  _ctx->key = (oaes_key *)tmp;
#line 793
  (_ctx->key)->data_len = data_len;
#line 794
  tmp___0 = calloc(data_len, sizeof(uint8_t ));
#line 794
  (_ctx->key)->data = (uint8_t *)tmp___0;
#line 796
  memcpy((void * __restrict  )(_ctx->key)->data, (void const   * __restrict  )data,
         data_len);
#line 797
  oaes_key_expand(ctx);
#line 799
  return ((OAES_RET )0);
}
}
#line 802 "oaes_lib.c"
OAES_CTX *oaes_alloc(void) 
{ 
  oaes_ctx *_ctx ;
  void *tmp ;
  uint32_t tmp___0 ;

  {
#line 804
  tmp = calloc(sizeof(oaes_ctx ), (size_t )1);
#line 804
  _ctx = (oaes_ctx *)tmp;
#line 806
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 807
    return ((void *)0);
  }
#line 828
  tmp___0 = oaes_get_seed();
#line 828
  srand(tmp___0);
#line 831
  _ctx->key = (oaes_key *)((void *)0);
#line 832
  oaes_set_option((OAES_CTX *)_ctx, (OAES_OPTION )2, (void const   *)((void *)0));
#line 839
  return ((OAES_CTX *)_ctx);
}
}
#line 842 "oaes_lib.c"
OAES_RET oaes_free(OAES_CTX **ctx ) 
{ 
  oaes_ctx **_ctx ;

  {
#line 844
  _ctx = (oaes_ctx **)ctx;
#line 846
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 847
    return ((OAES_RET )2);
  }
#line 849
  if ((unsigned int )((void *)0) == (unsigned int )*_ctx) {
#line 850
    return ((OAES_RET )0);
  }
#line 852
  if ((*_ctx)->key) {
#line 853
    oaes_key_destroy(& (*_ctx)->key);
  }
#line 863
  free((void *)*_ctx);
#line 864
  *_ctx = (oaes_ctx *)((void *)0);
#line 866
  return ((OAES_RET )0);
}
}
#line 869 "oaes_lib.c"
OAES_RET oaes_set_option(OAES_CTX *ctx , OAES_OPTION option , void const   *value ) 
{ 
  size_t _i ;
  oaes_ctx *_ctx ;
  int tmp ;

  {
#line 873
  _ctx = (oaes_ctx *)ctx;
#line 875
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 876
    return ((OAES_RET )2);
  }
#line 878
  switch ((int )option) {
  case 1: 
#line 881
  _ctx->options = (OAES_OPTION )((int )_ctx->options & -3);
#line 882
  memset((void *)(_ctx->iv), 0, (size_t )16);
#line 883
  break;
  case 2: 
#line 886
  _ctx->options = (OAES_OPTION )((int )_ctx->options & -2);
#line 887
  if (value) {
#line 888
    memcpy((void * __restrict  )(_ctx->iv), (void const   * __restrict  )value, (size_t )16);
  } else {
#line 891
    _i = (size_t )0;
#line 891
    while (_i < 16UL) {
#line 895
      tmp = rand();
#line 895
      _ctx->iv[_i] = (uint8_t )tmp;
#line 891
      _i ++;
    }
  }
#line 898
  break;
  default: 
#line 925
  return ((OAES_RET )3);
  }
#line 928
  _ctx->options = (OAES_OPTION )((int )_ctx->options | (int )option);
#line 930
  return ((OAES_RET )0);
}
}
#line 933 "oaes_lib.c"
static OAES_RET oaes_encrypt_block(OAES_CTX *ctx , uint8_t *c , size_t c_len ) 
{ 
  size_t _i ;
  size_t _j ;
  oaes_ctx *_ctx ;

  {
#line 937
  _ctx = (oaes_ctx *)ctx;
#line 939
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 940
    return ((OAES_RET )2);
  }
#line 942
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 943
    return ((OAES_RET )3);
  }
#line 945
  if (c_len != 16UL) {
#line 946
    return ((OAES_RET )4);
  }
#line 948
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 949
    return ((OAES_RET )7);
  }
#line 957
  _i = (size_t )0;
#line 957
  while (_i < c_len) {
#line 958
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*((_ctx->key)->exp_data + _i));
#line 957
    _i ++;
  }
#line 969
  _i = (size_t )1;
#line 969
  while (_i < (_ctx->key)->num_keys - 1UL) {
#line 972
    _j = (size_t )0;
#line 972
    while (_j < c_len) {
#line 973
      oaes_sub_byte(c + _j);
#line 972
      _j ++;
    }
#line 981
    oaes_shift_rows((uint8_t *)c);
#line 989
    oaes_mix_cols((uint8_t *)c);
#line 990
    oaes_mix_cols((uint8_t *)(c + 4));
#line 991
    oaes_mix_cols((uint8_t *)(c + 8));
#line 992
    oaes_mix_cols((uint8_t *)(c + 12));
#line 1000
    _j = (size_t )0;
#line 1000
    while (_j < c_len) {
#line 1001
      *(c + _j) = (uint8_t )((int )*(c + _j) ^ (int )*((_ctx->key)->exp_data + ((_i * 4UL) * 4UL + _j)));
#line 1000
      _j ++;
    }
#line 969
    _i ++;
  }
#line 1016
  _i = (size_t )0;
#line 1016
  while (_i < c_len) {
#line 1017
    oaes_sub_byte(c + _i);
#line 1016
    _i ++;
  }
#line 1025
  oaes_shift_rows((uint8_t *)c);
#line 1033
  _i = (size_t )0;
#line 1033
  while (_i < c_len) {
#line 1034
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*((_ctx->key)->exp_data + ((((_ctx->key)->num_keys - 1UL) * 4UL) * 4UL + _i)));
#line 1033
    _i ++;
  }
#line 1047
  return ((OAES_RET )0);
}
}
#line 1050 "oaes_lib.c"
static OAES_RET oaes_decrypt_block(OAES_CTX *ctx , uint8_t *c , size_t c_len ) 
{ 
  size_t _i ;
  size_t _j ;
  oaes_ctx *_ctx ;

  {
#line 1054
  _ctx = (oaes_ctx *)ctx;
#line 1056
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1057
    return ((OAES_RET )2);
  }
#line 1059
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1060
    return ((OAES_RET )3);
  }
#line 1062
  if (c_len != 16UL) {
#line 1063
    return ((OAES_RET )4);
  }
#line 1065
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1066
    return ((OAES_RET )7);
  }
#line 1074
  _i = (size_t )0;
#line 1074
  while (_i < c_len) {
#line 1075
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*((_ctx->key)->exp_data + ((((_ctx->key)->num_keys - 1UL) * 4UL) * 4UL + _i)));
#line 1074
    _i ++;
  }
#line 1088
  _i = (_ctx->key)->num_keys - 2UL;
#line 1088
  while (_i > 0UL) {
#line 1091
    oaes_inv_shift_rows((uint8_t *)c);
#line 1099
    _j = (size_t )0;
#line 1099
    while (_j < c_len) {
#line 1100
      oaes_inv_sub_byte(c + _j);
#line 1099
      _j ++;
    }
#line 1108
    _j = (size_t )0;
#line 1108
    while (_j < c_len) {
#line 1109
      *(c + _j) = (uint8_t )((int )*(c + _j) ^ (int )*((_ctx->key)->exp_data + ((_i * 4UL) * 4UL + _j)));
#line 1108
      _j ++;
    }
#line 1122
    oaes_inv_mix_cols((uint8_t *)c);
#line 1123
    oaes_inv_mix_cols((uint8_t *)(c + 4));
#line 1124
    oaes_inv_mix_cols((uint8_t *)(c + 8));
#line 1125
    oaes_inv_mix_cols((uint8_t *)(c + 12));
#line 1088
    _i --;
  }
#line 1135
  oaes_inv_shift_rows((uint8_t *)c);
#line 1143
  _i = (size_t )0;
#line 1143
  while (_i < c_len) {
#line 1144
    oaes_inv_sub_byte(c + _i);
#line 1143
    _i ++;
  }
#line 1152
  _i = (size_t )0;
#line 1152
  while (_i < c_len) {
#line 1153
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*((_ctx->key)->exp_data + _i));
#line 1152
    _i ++;
  }
#line 1163
  return ((OAES_RET )0);
}
}
#line 1166 "oaes_lib.c"
OAES_RET oaes_encrypt(OAES_CTX *ctx , uint8_t const   *m , size_t m_len , uint8_t *c ,
                      size_t *c_len ) 
{ 
  size_t _i ;
  size_t _j ;
  size_t _c_len_in ;
  size_t _c_data_len ;
  size_t _pad_len ;
  unsigned long tmp ;
  oaes_ctx *_ctx ;
  OAES_RET _rc ;
  uint8_t _flags ;
  int tmp___0 ;
  uint8_t _block[16] ;
  size_t _block_size ;
  size_t tmp___1 ;
  OAES_RET tmp___2 ;
  int tmp___3 ;

  {
#line 1170
  if (m_len % 16UL == 0UL) {
#line 1170
    tmp = 0UL;
  } else {
#line 1170
    tmp = 16UL - m_len % 16UL;
  }
#line 1170
  _pad_len = tmp;
#line 1172
  _ctx = (oaes_ctx *)ctx;
#line 1173
  _rc = (OAES_RET )0;
#line 1174
  if (_pad_len) {
#line 1174
    tmp___0 = 1;
  } else {
#line 1174
    tmp___0 = 0;
  }
#line 1174
  _flags = (uint8_t )tmp___0;
#line 1176
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1177
    return ((OAES_RET )2);
  }
#line 1179
  if ((unsigned int )((void *)0) == (unsigned int )m) {
#line 1180
    return ((OAES_RET )3);
  }
#line 1182
  if ((unsigned int )((void *)0) == (unsigned int )c_len) {
#line 1183
    return ((OAES_RET )6);
  }
#line 1185
  _c_len_in = *c_len;
#line 1187
  _c_data_len = m_len + _pad_len;
#line 1189
  *c_len = (32UL + m_len) + _pad_len;
#line 1191
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1192
    return ((OAES_RET )0);
  }
#line 1194
  if (_c_len_in < *c_len) {
#line 1195
    return ((OAES_RET )9);
  }
#line 1197
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1198
    return ((OAES_RET )7);
  }
#line 1201
  memcpy((void * __restrict  )c, (void const   * __restrict  )(oaes_header), (size_t )16);
#line 1202
  memcpy((void * __restrict  )(c + 6), (void const   * __restrict  )(& _ctx->options),
         sizeof(_ctx->options));
#line 1203
  memcpy((void * __restrict  )(c + 8), (void const   * __restrict  )(& _flags), sizeof(_flags));
#line 1205
  memcpy((void * __restrict  )(c + 16), (void const   * __restrict  )(_ctx->iv), (size_t )16);
#line 1207
  memcpy((void * __restrict  )(c + 32), (void const   * __restrict  )m, m_len);
#line 1209
  _i = (size_t )0;
#line 1209
  while (_i < _c_data_len) {
#line 1212
    if (m_len - _i < 16UL) {
#line 1212
      tmp___1 = m_len - _i;
    } else {
#line 1212
      tmp___1 = (size_t )16;
    }
#line 1212
    _block_size = tmp___1;
#line 1214
    memcpy((void * __restrict  )(_block), (void const   * __restrict  )((c + 32) + _i),
           _block_size);
#line 1217
    _j = (size_t )0;
#line 1217
    while (_j < 16UL - _block_size) {
#line 1218
      _block[_block_size + _j] = (uint8_t )(_j + 1UL);
#line 1217
      _j ++;
    }
#line 1221
    if ((int )_ctx->options & 2) {
#line 1223
      _j = (size_t )0;
#line 1223
      while (_j < 16UL) {
#line 1224
        _block[_j] = (uint8_t )((int )_block[_j] ^ (int )_ctx->iv[_j]);
#line 1223
        _j ++;
      }
    }
#line 1227
    if (_rc) {
#line 1227
      tmp___3 = 1;
    } else {
#line 1227
      tmp___2 = oaes_encrypt_block(ctx, _block, (size_t )16);
#line 1227
      if (tmp___2) {
#line 1227
        tmp___3 = 1;
      } else {
#line 1227
        tmp___3 = 0;
      }
    }
#line 1227
    _rc = (OAES_RET )tmp___3;
#line 1229
    memcpy((void * __restrict  )((c + 32) + _i), (void const   * __restrict  )(_block),
           (size_t )16);
#line 1231
    if ((int )_ctx->options & 2) {
#line 1232
      memcpy((void * __restrict  )(_ctx->iv), (void const   * __restrict  )(_block),
             (size_t )16);
    }
#line 1209
    _i += 16UL;
  }
#line 1235
  return (_rc);
}
}
#line 1238 "oaes_lib.c"
OAES_RET oaes_decrypt(OAES_CTX *ctx , uint8_t const   *c , size_t c_len , uint8_t *m ,
                      size_t *m_len ) 
{ 
  size_t _i ;
  size_t _j ;
  size_t _m_len_in ;
  oaes_ctx *_ctx ;
  OAES_RET _rc ;
  uint8_t _iv[16] ;
  uint8_t _flags ;
  OAES_OPTION _options ;
  int tmp ;
  size_t tmp___0 ;
  OAES_RET tmp___1 ;
  int tmp___2 ;
  int _is_pad ;
  size_t _temp ;

  {
#line 1242
  _ctx = (oaes_ctx *)ctx;
#line 1243
  _rc = (OAES_RET )0;
#line 1248
  if ((unsigned int )((void *)0) == (unsigned int )ctx) {
#line 1249
    return ((OAES_RET )2);
  }
#line 1251
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1252
    return ((OAES_RET )3);
  }
#line 1254
  if (c_len % 16UL) {
#line 1255
    return ((OAES_RET )4);
  }
#line 1257
  if ((unsigned int )((void *)0) == (unsigned int )m_len) {
#line 1258
    return ((OAES_RET )6);
  }
#line 1260
  _m_len_in = *m_len;
#line 1261
  *m_len = c_len - 32UL;
#line 1263
  if ((unsigned int )((void *)0) == (unsigned int )m) {
#line 1264
    return ((OAES_RET )0);
  }
#line 1266
  if (_m_len_in < *m_len) {
#line 1267
    return ((OAES_RET )9);
  }
#line 1269
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1270
    return ((OAES_RET )7);
  }
#line 1273
  tmp = memcmp((void const   *)c, (void const   *)(oaes_header), (size_t )4);
#line 1273
  if (0 != tmp) {
#line 1274
    return ((OAES_RET )10);
  }
#line 1277
  switch ((int const   )*(c + 4)) {
  case 1: 
#line 1280
  break;
  default: 
#line 1282
  return ((OAES_RET )10);
  }
#line 1286
  switch ((int const   )*(c + 5)) {
  case 2: 
#line 1289
  break;
  default: 
#line 1291
  return ((OAES_RET )10);
  }
#line 1295
  memcpy((void * __restrict  )(& _options), (void const   * __restrict  )(c + 6),
         sizeof(_options));
#line 1297
  if ((int )_options & -4) {
#line 1305
    return ((OAES_RET )10);
  }
#line 1306
  if ((int )_options & 1) {
#line 1306
    if ((int )_options & 2) {
#line 1308
      return ((OAES_RET )10);
    }
  }
#line 1309
  if ((int )_options == 0) {
#line 1310
    return ((OAES_RET )10);
  }
#line 1313
  memcpy((void * __restrict  )(& _flags), (void const   * __restrict  )(c + 8), sizeof(_flags));
#line 1315
  if ((int )_flags & -2) {
#line 1318
    return ((OAES_RET )10);
  }
#line 1321
  memcpy((void * __restrict  )(_iv), (void const   * __restrict  )(c + 16), (size_t )16);
#line 1323
  memcpy((void * __restrict  )m, (void const   * __restrict  )(c + 32), *m_len);
#line 1325
  _i = (size_t )0;
#line 1325
  while (_i < *m_len) {
#line 1327
    if ((int )_options & 2) {
#line 1327
      if (_i > 0UL) {
#line 1328
        memcpy((void * __restrict  )(_iv), (void const   * __restrict  )((c + 16) + _i),
               (size_t )16);
      }
    }
#line 1330
    if (_rc) {
#line 1330
      tmp___2 = 1;
    } else {
#line 1330
      if (*m_len - _i < 16UL) {
#line 1330
        tmp___0 = *m_len - _i;
      } else {
#line 1330
        tmp___0 = (size_t )16;
      }
#line 1330
      tmp___1 = oaes_decrypt_block(ctx, m + _i, tmp___0);
#line 1330
      if (tmp___1) {
#line 1330
        tmp___2 = 1;
      } else {
#line 1330
        tmp___2 = 0;
      }
    }
#line 1330
    _rc = (OAES_RET )tmp___2;
#line 1334
    if ((int )_options & 2) {
#line 1336
      _j = (size_t )0;
#line 1336
      while (_j < 16UL) {
#line 1337
        *(m + (_i + _j)) = (uint8_t )((int )*(m + (_i + _j)) ^ (int )_iv[_j]);
#line 1336
        _j ++;
      }
    }
#line 1325
    _i += 16UL;
  }
#line 1342
  if ((int )_flags & 1) {
#line 1344
    _is_pad = 1;
#line 1345
    _temp = (size_t )*(m + (*m_len - 1UL));
#line 1347
    if (_temp <= 0UL) {
#line 1348
      return ((OAES_RET )10);
    } else
#line 1347
    if (_temp > 15UL) {
#line 1348
      return ((OAES_RET )10);
    }
#line 1349
    _i = (size_t )0;
#line 1349
    while (_i < _temp) {
#line 1350
      if ((size_t )*(m + ((*m_len - 1UL) - _i)) != _temp - _i) {
#line 1351
        _is_pad = 0;
      }
#line 1349
      _i ++;
    }
#line 1352
    if (_is_pad) {
#line 1354
      memset((void *)((m + *m_len) - _temp), 0, _temp);
#line 1355
      *m_len -= _temp;
    } else {
#line 1358
      return ((OAES_RET )10);
    }
  }
#line 1361
  return ((OAES_RET )0);
}
}
#line 1365 "oaes_lib.c"
OAES_RET oaes_encryption_round(uint8_t const   *key , uint8_t *c ) 
{ 
  size_t _i ;

  {
#line 1369
  if ((unsigned int )((void *)0) == (unsigned int )key) {
#line 1370
    return ((OAES_RET )2);
  }
#line 1372
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1373
    return ((OAES_RET )3);
  }
#line 1376
  _i = (size_t )0;
#line 1376
  while (_i < 16UL) {
#line 1377
    oaes_sub_byte(c + _i);
#line 1376
    _i ++;
  }
#line 1380
  oaes_shift_rows((uint8_t *)c);
#line 1383
  oaes_mix_cols((uint8_t *)c);
#line 1384
  oaes_mix_cols((uint8_t *)(c + 4));
#line 1385
  oaes_mix_cols((uint8_t *)(c + 8));
#line 1386
  oaes_mix_cols((uint8_t *)(c + 12));
#line 1389
  _i = (size_t )0;
#line 1389
  while (_i < 16UL) {
#line 1390
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*(key + _i));
#line 1389
    _i ++;
  }
#line 1392
  return ((OAES_RET )0);
}
}
#line 1395 "oaes_lib.c"
OAES_RET oaes_pseudo_encrypt_ecb(OAES_CTX *ctx , uint8_t *c ) 
{ 
  size_t _i ;
  oaes_ctx *_ctx ;

  {
#line 1398
  _ctx = (oaes_ctx *)ctx;
#line 1400
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1401
    return ((OAES_RET )2);
  }
#line 1403
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1404
    return ((OAES_RET )3);
  }
#line 1406
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1407
    return ((OAES_RET )7);
  }
#line 1409
  _i = (size_t )0;
#line 1409
  while (_i < 10UL) {
#line 1411
    oaes_encryption_round((uint8_t const   *)((_ctx->key)->exp_data + (_i * 4UL) * 4UL),
                          c);
#line 1409
    _i ++;
  }
#line 1414
  return ((OAES_RET )0);
}
}
#line 1 "cil-t8JhCb2f.o"
#pragma merger("0","/tmp/cil-4fKSgoBy.i","")
#line 145 "./skein_port.h"
void Skein_Put64_LSB_First(u08b_t *dst , u64b_t const   *src , size_t bCnt ) 
{ 
  size_t n ;

  {
#line 150
  n = (size_t )0;
#line 150
  while (n < bCnt) {
#line 151
    *(dst + n) = (u08b_t )(*(src + (n >> 3)) >> 8UL * (n & 7UL));
#line 150
    n ++;
  }
#line 152
  return;
}
}
#line 160 "./skein_port.h"
void Skein_Get64_LSB_First(u64b_t *dst , u08b_t const   *src , size_t wCnt ) 
{ 
  size_t n ;

  {
#line 165
  n = (size_t )0;
#line 165
  while (n < 8UL * wCnt) {
#line 166
    *(dst + n / 8UL) = (((((((u64b_t )*(src + n) + ((u64b_t )*(src + (n + 1UL)) << 8)) + ((u64b_t )*(src + (n + 2UL)) << 16)) + ((u64b_t )*(src + (n + 3UL)) << 24)) + ((u64b_t )*(src + (n + 4UL)) << 32)) + ((u64b_t )*(src + (n + 5UL)) << 40)) + ((u64b_t )*(src + (n + 6UL)) << 48)) + ((u64b_t )*(src + (n + 7UL)) << 56);
#line 165
    n += 8UL;
  }
#line 174
  return;
}
}
#line 95 "skein.c"
static int Skein_512_Init(Skein_512_Ctxt_t *ctx , size_t hashBitLen ) ;
#line 96
static int Skein1024_Init(Skein1024_Ctxt_t *ctx , size_t hashBitLen ) ;
#line 98
static int Skein_256_Update(Skein_256_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) ;
#line 99
static int Skein_512_Update(Skein_512_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) ;
#line 100
static int Skein1024_Update(Skein1024_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) ;
#line 102
static int Skein_256_Final(Skein_256_Ctxt_t *ctx , u08b_t *hashVal ) ;
#line 103
static int Skein_512_Final(Skein_512_Ctxt_t *ctx , u08b_t *hashVal ) ;
#line 104
static int Skein1024_Final(Skein1024_Ctxt_t *ctx , u08b_t *hashVal ) ;
#line 345 "skein.c"
u64b_t const   SKEIN_256_IV_128[4]  = {      (u64b_t const   )(2521657952ULL + (3775994118ULL << 32)),      (u64b_t const   )(2089648412ULL + (2285742759ULL << 32)),      (u64b_t const   )(2442530682ULL + (268963316ULL << 32)),      (u64b_t const   )(3025912258ULL + (3438796261ULL << 32))};
#line 354 "skein.c"
u64b_t const   SKEIN_256_IV_160[4]  = {      (u64b_t const   )(1921146520ULL + (337650452ULL << 32)),      (u64b_t const   )(1517806992ULL + (717547938ULL << 32)),      (u64b_t const   )(2285426238ULL + (3564787798ULL << 32)),      (u64b_t const   )(2240195453ULL + (768795798ULL << 32))};
#line 363 "skein.c"
u64b_t const   SKEIN_256_IV_224[4]  = {      (u64b_t const   )(2598758923ULL + (3322514060ULL << 32)),      (u64b_t const   )(147134748ULL + (2272089734ULL << 32)),      (u64b_t const   )(3623172228ULL + (2580252887ULL << 32)),      (u64b_t const   )(2933765598ULL + (944496049ULL << 32))};
#line 372 "skein.c"
u64b_t const   SKEIN_256_IV_256[4]  = {      (u64b_t const   )(3494425673ULL + (4238190688ULL << 32)),      (u64b_t const   )(2678577203ULL + (801793607ULL << 32)),      (u64b_t const   )(1716945935ULL + (3007038345ULL << 32)),      (u64b_t const   )(4259895913ULL + (1783949600ULL << 32))};
#line 381 "skein.c"
u64b_t const   SKEIN_512_IV_128[8]  = 
#line 381
  {      (u64b_t const   )(1874829138ULL + (2830924787ULL << 32)),      (u64b_t const   )(3172659370ULL + (513307342ULL << 32)),      (u64b_t const   )(3005321427ULL + (815470480ULL << 32)),      (u64b_t const   )(1066696796ULL + (3170613332ULL << 32)), 
        (u64b_t const   )(1848750363ULL + (228989901ULL << 32)),      (u64b_t const   )(3563729635ULL + (437840874ULL << 32)),      (u64b_t const   )(3464800898ULL + (2731301656ULL << 32)),      (u64b_t const   )(2638649389ULL + (1770171176ULL << 32))};
#line 394 "skein.c"
u64b_t const   SKEIN_512_IV_160[8]  = 
#line 394
  {      (u64b_t const   )(3759390097ULL + (683153962ULL << 32)),      (u64b_t const   )(3049125775ULL + (3270579816ULL << 32)),      (u64b_t const   )(4138037010ULL + (392222963ULL << 32)),      (u64b_t const   )(2184810575ULL + (1337411416ULL << 32)), 
        (u64b_t const   )(2125418582ULL + (569237631ULL << 32)),      (u64b_t const   )(1676505272ULL + (3641217582ULL << 32)),      (u64b_t const   )(3972748026ULL + (3102504703ULL << 32)),      (u64b_t const   )(2750577262ULL + (27556792ULL << 32))};
#line 407 "skein.c"
u64b_t const   SKEIN_512_IV_224[8]  = 
#line 407
  {      (u64b_t const   )(1214738980ULL + (3436208482ULL << 32)),      (u64b_t const   )(2837658095ULL + (3416677619ULL << 32)),      (u64b_t const   )(1392462692ULL + (2362272214ULL << 32)),      (u64b_t const   )(985174196ULL + (965406075ULL << 32)), 
        (u64b_t const   )(1165831120ULL + (257544625ULL << 32)),      (u64b_t const   )(1976888125ULL + (1735851621ULL << 32)),      (u64b_t const   )(2574521321ULL + (2583414542ULL << 32)),      (u64b_t const   )(3787726583ULL + (2653748431ULL << 32))};
#line 420 "skein.c"
u64b_t const   SKEIN_512_IV_256[8]  = 
#line 420
  {      (u64b_t const   )(802897427ULL + (3436201121ULL << 32)),      (u64b_t const   )(444180971ULL + (3895824432ULL << 32)),      (u64b_t const   )(1333882479ULL + (1437507681ULL << 32)),      (u64b_t const   )(2929431771ULL + (707225508ULL << 32)), 
        (u64b_t const   )(1960670851ULL + (3959816798ULL << 32)),      (u64b_t const   )(3295961681ULL + (3886298829ULL << 32)),      (u64b_t const   )(960156037ULL + (3278879481ULL << 32)),      (u64b_t const   )(871234579ULL + (1055767064ULL << 32))};
#line 433 "skein.c"
u64b_t const   SKEIN_512_IV_384[8]  = 
#line 433
  {      (u64b_t const   )(980807519ULL + (2750858943ULL << 32)),      (u64b_t const   )(4253350564ULL + (2969500108ULL << 32)),      (u64b_t const   )(1031212286ULL + (2641878374ULL << 32)),      (u64b_t const   )(3026779610ULL + (3617115123ULL << 32)), 
        (u64b_t const   )(2316190821ULL + (465872486ULL << 32)),      (u64b_t const   )(3850400775ULL + (2128073780ULL << 32)),      (u64b_t const   )(3572253910ULL + (1418707372ULL << 32)),      (u64b_t const   )(1788973048ULL + (644749140ULL << 32))};
#line 446 "skein.c"
u64b_t const   SKEIN_512_IV_512[8]  = 
#line 446
  {      (u64b_t const   )(1956401614ULL + (1224977919ULL << 32)),      (u64b_t const   )(2538004227ULL + (227925561ULL << 32)),      (u64b_t const   )(667392974ULL + (2412876609ULL << 32)),      (u64b_t const   )(4281674929ULL + (2586138153ULL << 32)), 
        (u64b_t const   )(3748439984ULL + (1572218265ULL << 32)),      (u64b_t const   )(2849358836ULL + (3938335052ULL << 32)),      (u64b_t const   )(443921699ULL + (2568032967ULL << 32)),      (u64b_t const   )(1712311347ULL + (2920850443ULL << 32))};
#line 459 "skein.c"
u64b_t const   SKEIN1024_IV_384[16]  = 
#line 459
  {      (u64b_t const   )(3247000117ULL + (1359132344ULL << 32)),      (u64b_t const   )(4270518554ULL + (4276865507ULL << 32)),      (u64b_t const   )(3811306865ULL + (209747718ULL << 32)),      (u64b_t const   )(3021640182ULL + (1623276114ULL << 32)), 
        (u64b_t const   )(3566304312ULL + (2534855517ULL << 32)),      (u64b_t const   )(1876106554ULL + (3883982610ULL << 32)),      (u64b_t const   )(3365417018ULL + (2037925558ULL << 32)),      (u64b_t const   )(3008834107ULL + (2977088168ULL << 32)), 
        (u64b_t const   )(2786085484ULL + (3384574467ULL << 32)),      (u64b_t const   )(3612746996ULL + (1703973688ULL << 32)),      (u64b_t const   )(1262453152ULL + (2495399272ULL << 32)),      (u64b_t const   )(283966790ULL + (1052505374ULL << 32)), 
        (u64b_t const   )(4004545858ULL + (771034891ULL << 32)),      (u64b_t const   )(230450454ULL + (995779888ULL << 32)),      (u64b_t const   )(377208033ULL + (1212914898ULL << 32)),      (u64b_t const   )(3570118634ULL + (756246855ULL << 32))};
#line 480 "skein.c"
u64b_t const   SKEIN1024_IV_512[16]  = 
#line 480
  {      (u64b_t const   )(2082151192ULL + (3404467805ULL << 32)),      (u64b_t const   )(1594091522ULL + (2686127620ULL << 32)),      (u64b_t const   )(3985713285ULL + (864289873ULL << 32)),      (u64b_t const   )(3941346844ULL + (927660804ULL << 32)), 
        (u64b_t const   )(2167767543ULL + (3743785186ULL << 32)),      (u64b_t const   )(2333276626ULL + (3825221779ULL << 32)),      (u64b_t const   )(3270326710ULL + (2791494969ULL << 32)),      (u64b_t const   )(1171834714ULL + (4203447759ULL << 32)), 
        (u64b_t const   )(703457174ULL + (2199317902ULL << 32)),      (u64b_t const   )(782209464ULL + (87198144ULL << 32)),      (u64b_t const   )(1834060659ULL + (3287871261ULL << 32)),      (u64b_t const   )(3589223214ULL + (3184444356ULL << 32)), 
        (u64b_t const   )(580338823ULL + (1419411026ULL << 32)),      (u64b_t const   )(1534367766ULL + (1728514162ULL << 32)),      (u64b_t const   )(4032306129ULL + (3117230331ULL << 32)),      (u64b_t const   )(360728948ULL + (237584568ULL << 32))};
#line 501 "skein.c"
u64b_t const   SKEIN1024_IV_1024[16]  = 
#line 501
  {      (u64b_t const   )(1105666901ULL + (3583236615ULL << 32)),      (u64b_t const   )(2893275148ULL + (364242193ULL << 32)),      (u64b_t const   )(3136472304ULL + (1367401902ULL << 32)),      (u64b_t const   )(4240224175ULL + (62734803ULL << 32)), 
        (u64b_t const   )(428058776ULL + (481216253ULL << 32)),      (u64b_t const   )(3452983455ULL + (1850805131ULL << 32)),      (u64b_t const   )(3325643482ULL + (2011348477ULL << 32)),      (u64b_t const   )(618442915ULL + (3239976373ULL << 32)), 
        (u64b_t const   )(3325205173ULL + (3604040441ULL << 32)),      (u64b_t const   )(1857453581ULL + (1788546044ULL << 32)),      (u64b_t const   )(3439268658ULL + (2453915149ULL << 32)),      (u64b_t const   )(1950286548ULL + (438246878ULL << 32)), 
        (u64b_t const   )(283970488ULL + (160855356ULL << 32)),      (u64b_t const   )(4071921306ULL + (1702026530ULL << 32)),      (u64b_t const   )(3490338714ULL + (1643982946ULL << 32)),      (u64b_t const   )(2256725305ULL + (501240686ULL << 32))};
#line 544 "skein.c"
static void Skein_256_Process_Block(Skein_256_Ctxt_t *ctx , u08b_t const   *blkPtr ,
                                    size_t blkCnt , size_t byteCntAdd ) 
{ 
  u64b_t kw[8] ;
  u64b_t X0 ;
  u64b_t X1 ;
  u64b_t X2 ;
  u64b_t X3 ;
  u64b_t w[4] ;

  {
#line 575
  *((kw + 0) + 0) = ctx->h.T[0];
#line 576
  *((kw + 0) + 1) = ctx->h.T[1];
#line 577
  while (1) {
#line 579
    *((kw + 0) + 0) += (u64b_t )byteCntAdd;
#line 582
    *((kw + 3) + 0) = ctx->X[0];
#line 583
    *((kw + 3) + 1) = ctx->X[1];
#line 584
    *((kw + 3) + 2) = ctx->X[2];
#line 585
    *((kw + 3) + 3) = ctx->X[3];
#line 586
    *((kw + 3) + 4) = (((*((kw + 3) + 0) ^ *((kw + 3) + 1)) ^ *((kw + 3) + 2)) ^ *((kw + 3) + 3)) ^ (2851871266ULL + (466688986ULL << 32));
#line 588
    *((kw + 0) + 2) = *((kw + 0) + 0) ^ *((kw + 0) + 1);
#line 590
    Skein_Get64_LSB_First(w, blkPtr, (size_t )4);
#line 594
    X0 = w[0] + *((kw + 3) + 0);
#line 595
    X1 = (w[1] + *((kw + 3) + 1)) + *((kw + 0) + 0);
#line 596
    X2 = (w[2] + *((kw + 3) + 2)) + *((kw + 0) + 1);
#line 597
    X3 = w[3] + *((kw + 3) + 3);
#line 601
    blkPtr += 32;
#line 649
    X0 += X1;
#line 649
    X1 = (X1 << 14) | (X1 >> 50);
#line 649
    X1 ^= X0;
#line 649
    X2 += X3;
#line 649
    X3 = (X3 << 16) | (X3 >> 48);
#line 649
    X3 ^= X2;
#line 649
    X0 += X3;
#line 649
    X3 = (X3 << 52) | (X3 >> 12);
#line 649
    X3 ^= X0;
#line 649
    X2 += X1;
#line 649
    X1 = (X1 << 57) | (X1 >> 7);
#line 649
    X1 ^= X2;
#line 649
    X0 += X1;
#line 649
    X1 = (X1 << 23) | (X1 >> 41);
#line 649
    X1 ^= X0;
#line 649
    X2 += X3;
#line 649
    X3 = (X3 << 40) | (X3 >> 24);
#line 649
    X3 ^= X2;
#line 649
    X0 += X3;
#line 649
    X3 = (X3 << 5) | (X3 >> 59);
#line 649
    X3 ^= X0;
#line 649
    X2 += X1;
#line 649
    X1 = (X1 << 37) | (X1 >> 27);
#line 649
    X1 ^= X2;
#line 649
    X0 += *((kw + 3) + 1);
#line 649
    X1 += *((kw + 3) + 2) + *((kw + 0) + 1);
#line 649
    X2 += *((kw + 3) + 3) + *((kw + 0) + 2);
#line 649
    X3 += *((kw + 3) + 4) + 1ULL;
#line 649
    X0 += X1;
#line 649
    X1 = (X1 << 25) | (X1 >> 39);
#line 649
    X1 ^= X0;
#line 649
    X2 += X3;
#line 649
    X3 = (X3 << 33) | (X3 >> 31);
#line 649
    X3 ^= X2;
#line 649
    X0 += X3;
#line 649
    X3 = (X3 << 46) | (X3 >> 18);
#line 649
    X3 ^= X0;
#line 649
    X2 += X1;
#line 649
    X1 = (X1 << 12) | (X1 >> 52);
#line 649
    X1 ^= X2;
#line 649
    X0 += X1;
#line 649
    X1 = (X1 << 58) | (X1 >> 6);
#line 649
    X1 ^= X0;
#line 649
    X2 += X3;
#line 649
    X3 = (X3 << 22) | (X3 >> 42);
#line 649
    X3 ^= X2;
#line 649
    X0 += X3;
#line 649
    X3 = (X3 << 32) | (X3 >> 32);
#line 649
    X3 ^= X0;
#line 649
    X2 += X1;
#line 649
    X1 = (X1 << 32) | (X1 >> 32);
#line 649
    X1 ^= X2;
#line 649
    X0 += *((kw + 3) + 2);
#line 649
    X1 += *((kw + 3) + 3) + *((kw + 0) + 2);
#line 649
    X2 += *((kw + 3) + 4) + *((kw + 0) + 0);
#line 649
    X3 += (*((kw + 3) + 0) + 1ULL) + 1ULL;
#line 654
    X0 += X1;
#line 654
    X1 = (X1 << 14) | (X1 >> 50);
#line 654
    X1 ^= X0;
#line 654
    X2 += X3;
#line 654
    X3 = (X3 << 16) | (X3 >> 48);
#line 654
    X3 ^= X2;
#line 654
    X0 += X3;
#line 654
    X3 = (X3 << 52) | (X3 >> 12);
#line 654
    X3 ^= X0;
#line 654
    X2 += X1;
#line 654
    X1 = (X1 << 57) | (X1 >> 7);
#line 654
    X1 ^= X2;
#line 654
    X0 += X1;
#line 654
    X1 = (X1 << 23) | (X1 >> 41);
#line 654
    X1 ^= X0;
#line 654
    X2 += X3;
#line 654
    X3 = (X3 << 40) | (X3 >> 24);
#line 654
    X3 ^= X2;
#line 654
    X0 += X3;
#line 654
    X3 = (X3 << 5) | (X3 >> 59);
#line 654
    X3 ^= X0;
#line 654
    X2 += X1;
#line 654
    X1 = (X1 << 37) | (X1 >> 27);
#line 654
    X1 ^= X2;
#line 654
    X0 += *((kw + 3) + 3);
#line 654
    X1 += *((kw + 3) + 4) + *((kw + 0) + 0);
#line 654
    X2 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 654
    X3 += (*((kw + 3) + 1) + 2ULL) + 1ULL;
#line 654
    X0 += X1;
#line 654
    X1 = (X1 << 25) | (X1 >> 39);
#line 654
    X1 ^= X0;
#line 654
    X2 += X3;
#line 654
    X3 = (X3 << 33) | (X3 >> 31);
#line 654
    X3 ^= X2;
#line 654
    X0 += X3;
#line 654
    X3 = (X3 << 46) | (X3 >> 18);
#line 654
    X3 ^= X0;
#line 654
    X2 += X1;
#line 654
    X1 = (X1 << 12) | (X1 >> 52);
#line 654
    X1 ^= X2;
#line 654
    X0 += X1;
#line 654
    X1 = (X1 << 58) | (X1 >> 6);
#line 654
    X1 ^= X0;
#line 654
    X2 += X3;
#line 654
    X3 = (X3 << 22) | (X3 >> 42);
#line 654
    X3 ^= X2;
#line 654
    X0 += X3;
#line 654
    X3 = (X3 << 32) | (X3 >> 32);
#line 654
    X3 ^= X0;
#line 654
    X2 += X1;
#line 654
    X1 = (X1 << 32) | (X1 >> 32);
#line 654
    X1 ^= X2;
#line 654
    X0 += *((kw + 3) + 4);
#line 654
    X1 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 654
    X2 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 654
    X3 += (*((kw + 3) + 2) + 3ULL) + 1ULL;
#line 657
    X0 += X1;
#line 657
    X1 = (X1 << 14) | (X1 >> 50);
#line 657
    X1 ^= X0;
#line 657
    X2 += X3;
#line 657
    X3 = (X3 << 16) | (X3 >> 48);
#line 657
    X3 ^= X2;
#line 657
    X0 += X3;
#line 657
    X3 = (X3 << 52) | (X3 >> 12);
#line 657
    X3 ^= X0;
#line 657
    X2 += X1;
#line 657
    X1 = (X1 << 57) | (X1 >> 7);
#line 657
    X1 ^= X2;
#line 657
    X0 += X1;
#line 657
    X1 = (X1 << 23) | (X1 >> 41);
#line 657
    X1 ^= X0;
#line 657
    X2 += X3;
#line 657
    X3 = (X3 << 40) | (X3 >> 24);
#line 657
    X3 ^= X2;
#line 657
    X0 += X3;
#line 657
    X3 = (X3 << 5) | (X3 >> 59);
#line 657
    X3 ^= X0;
#line 657
    X2 += X1;
#line 657
    X1 = (X1 << 37) | (X1 >> 27);
#line 657
    X1 ^= X2;
#line 657
    X0 += *((kw + 3) + 0);
#line 657
    X1 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 657
    X2 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 657
    X3 += (*((kw + 3) + 3) + 4ULL) + 1ULL;
#line 657
    X0 += X1;
#line 657
    X1 = (X1 << 25) | (X1 >> 39);
#line 657
    X1 ^= X0;
#line 657
    X2 += X3;
#line 657
    X3 = (X3 << 33) | (X3 >> 31);
#line 657
    X3 ^= X2;
#line 657
    X0 += X3;
#line 657
    X3 = (X3 << 46) | (X3 >> 18);
#line 657
    X3 ^= X0;
#line 657
    X2 += X1;
#line 657
    X1 = (X1 << 12) | (X1 >> 52);
#line 657
    X1 ^= X2;
#line 657
    X0 += X1;
#line 657
    X1 = (X1 << 58) | (X1 >> 6);
#line 657
    X1 ^= X0;
#line 657
    X2 += X3;
#line 657
    X3 = (X3 << 22) | (X3 >> 42);
#line 657
    X3 ^= X2;
#line 657
    X0 += X3;
#line 657
    X3 = (X3 << 32) | (X3 >> 32);
#line 657
    X3 ^= X0;
#line 657
    X2 += X1;
#line 657
    X1 = (X1 << 32) | (X1 >> 32);
#line 657
    X1 ^= X2;
#line 657
    X0 += *((kw + 3) + 1);
#line 657
    X1 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 657
    X2 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 657
    X3 += (*((kw + 3) + 4) + 5ULL) + 1ULL;
#line 660
    X0 += X1;
#line 660
    X1 = (X1 << 14) | (X1 >> 50);
#line 660
    X1 ^= X0;
#line 660
    X2 += X3;
#line 660
    X3 = (X3 << 16) | (X3 >> 48);
#line 660
    X3 ^= X2;
#line 660
    X0 += X3;
#line 660
    X3 = (X3 << 52) | (X3 >> 12);
#line 660
    X3 ^= X0;
#line 660
    X2 += X1;
#line 660
    X1 = (X1 << 57) | (X1 >> 7);
#line 660
    X1 ^= X2;
#line 660
    X0 += X1;
#line 660
    X1 = (X1 << 23) | (X1 >> 41);
#line 660
    X1 ^= X0;
#line 660
    X2 += X3;
#line 660
    X3 = (X3 << 40) | (X3 >> 24);
#line 660
    X3 ^= X2;
#line 660
    X0 += X3;
#line 660
    X3 = (X3 << 5) | (X3 >> 59);
#line 660
    X3 ^= X0;
#line 660
    X2 += X1;
#line 660
    X1 = (X1 << 37) | (X1 >> 27);
#line 660
    X1 ^= X2;
#line 660
    X0 += *((kw + 3) + 2);
#line 660
    X1 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 660
    X2 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 660
    X3 += (*((kw + 3) + 0) + 6ULL) + 1ULL;
#line 660
    X0 += X1;
#line 660
    X1 = (X1 << 25) | (X1 >> 39);
#line 660
    X1 ^= X0;
#line 660
    X2 += X3;
#line 660
    X3 = (X3 << 33) | (X3 >> 31);
#line 660
    X3 ^= X2;
#line 660
    X0 += X3;
#line 660
    X3 = (X3 << 46) | (X3 >> 18);
#line 660
    X3 ^= X0;
#line 660
    X2 += X1;
#line 660
    X1 = (X1 << 12) | (X1 >> 52);
#line 660
    X1 ^= X2;
#line 660
    X0 += X1;
#line 660
    X1 = (X1 << 58) | (X1 >> 6);
#line 660
    X1 ^= X0;
#line 660
    X2 += X3;
#line 660
    X3 = (X3 << 22) | (X3 >> 42);
#line 660
    X3 ^= X2;
#line 660
    X0 += X3;
#line 660
    X3 = (X3 << 32) | (X3 >> 32);
#line 660
    X3 ^= X0;
#line 660
    X2 += X1;
#line 660
    X1 = (X1 << 32) | (X1 >> 32);
#line 660
    X1 ^= X2;
#line 660
    X0 += *((kw + 3) + 3);
#line 660
    X1 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 660
    X2 += *((kw + 3) + 0) + *((kw + 0) + 0);
#line 660
    X3 += (*((kw + 3) + 1) + 7ULL) + 1ULL;
#line 663
    X0 += X1;
#line 663
    X1 = (X1 << 14) | (X1 >> 50);
#line 663
    X1 ^= X0;
#line 663
    X2 += X3;
#line 663
    X3 = (X3 << 16) | (X3 >> 48);
#line 663
    X3 ^= X2;
#line 663
    X0 += X3;
#line 663
    X3 = (X3 << 52) | (X3 >> 12);
#line 663
    X3 ^= X0;
#line 663
    X2 += X1;
#line 663
    X1 = (X1 << 57) | (X1 >> 7);
#line 663
    X1 ^= X2;
#line 663
    X0 += X1;
#line 663
    X1 = (X1 << 23) | (X1 >> 41);
#line 663
    X1 ^= X0;
#line 663
    X2 += X3;
#line 663
    X3 = (X3 << 40) | (X3 >> 24);
#line 663
    X3 ^= X2;
#line 663
    X0 += X3;
#line 663
    X3 = (X3 << 5) | (X3 >> 59);
#line 663
    X3 ^= X0;
#line 663
    X2 += X1;
#line 663
    X1 = (X1 << 37) | (X1 >> 27);
#line 663
    X1 ^= X2;
#line 663
    X0 += *((kw + 3) + 4);
#line 663
    X1 += *((kw + 3) + 0) + *((kw + 0) + 0);
#line 663
    X2 += *((kw + 3) + 1) + *((kw + 0) + 1);
#line 663
    X3 += (*((kw + 3) + 2) + 8ULL) + 1ULL;
#line 663
    X0 += X1;
#line 663
    X1 = (X1 << 25) | (X1 >> 39);
#line 663
    X1 ^= X0;
#line 663
    X2 += X3;
#line 663
    X3 = (X3 << 33) | (X3 >> 31);
#line 663
    X3 ^= X2;
#line 663
    X0 += X3;
#line 663
    X3 = (X3 << 46) | (X3 >> 18);
#line 663
    X3 ^= X0;
#line 663
    X2 += X1;
#line 663
    X1 = (X1 << 12) | (X1 >> 52);
#line 663
    X1 ^= X2;
#line 663
    X0 += X1;
#line 663
    X1 = (X1 << 58) | (X1 >> 6);
#line 663
    X1 ^= X0;
#line 663
    X2 += X3;
#line 663
    X3 = (X3 << 22) | (X3 >> 42);
#line 663
    X3 ^= X2;
#line 663
    X0 += X3;
#line 663
    X3 = (X3 << 32) | (X3 >> 32);
#line 663
    X3 ^= X0;
#line 663
    X2 += X1;
#line 663
    X1 = (X1 << 32) | (X1 >> 32);
#line 663
    X1 ^= X2;
#line 663
    X0 += *((kw + 3) + 0);
#line 663
    X1 += *((kw + 3) + 1) + *((kw + 0) + 1);
#line 663
    X2 += *((kw + 3) + 2) + *((kw + 0) + 2);
#line 663
    X3 += (*((kw + 3) + 3) + 9ULL) + 1ULL;
#line 666
    X0 += X1;
#line 666
    X1 = (X1 << 14) | (X1 >> 50);
#line 666
    X1 ^= X0;
#line 666
    X2 += X3;
#line 666
    X3 = (X3 << 16) | (X3 >> 48);
#line 666
    X3 ^= X2;
#line 666
    X0 += X3;
#line 666
    X3 = (X3 << 52) | (X3 >> 12);
#line 666
    X3 ^= X0;
#line 666
    X2 += X1;
#line 666
    X1 = (X1 << 57) | (X1 >> 7);
#line 666
    X1 ^= X2;
#line 666
    X0 += X1;
#line 666
    X1 = (X1 << 23) | (X1 >> 41);
#line 666
    X1 ^= X0;
#line 666
    X2 += X3;
#line 666
    X3 = (X3 << 40) | (X3 >> 24);
#line 666
    X3 ^= X2;
#line 666
    X0 += X3;
#line 666
    X3 = (X3 << 5) | (X3 >> 59);
#line 666
    X3 ^= X0;
#line 666
    X2 += X1;
#line 666
    X1 = (X1 << 37) | (X1 >> 27);
#line 666
    X1 ^= X2;
#line 666
    X0 += *((kw + 3) + 1);
#line 666
    X1 += *((kw + 3) + 2) + *((kw + 0) + 2);
#line 666
    X2 += *((kw + 3) + 3) + *((kw + 0) + 0);
#line 666
    X3 += (*((kw + 3) + 4) + 10ULL) + 1ULL;
#line 666
    X0 += X1;
#line 666
    X1 = (X1 << 25) | (X1 >> 39);
#line 666
    X1 ^= X0;
#line 666
    X2 += X3;
#line 666
    X3 = (X3 << 33) | (X3 >> 31);
#line 666
    X3 ^= X2;
#line 666
    X0 += X3;
#line 666
    X3 = (X3 << 46) | (X3 >> 18);
#line 666
    X3 ^= X0;
#line 666
    X2 += X1;
#line 666
    X1 = (X1 << 12) | (X1 >> 52);
#line 666
    X1 ^= X2;
#line 666
    X0 += X1;
#line 666
    X1 = (X1 << 58) | (X1 >> 6);
#line 666
    X1 ^= X0;
#line 666
    X2 += X3;
#line 666
    X3 = (X3 << 22) | (X3 >> 42);
#line 666
    X3 ^= X2;
#line 666
    X0 += X3;
#line 666
    X3 = (X3 << 32) | (X3 >> 32);
#line 666
    X3 ^= X0;
#line 666
    X2 += X1;
#line 666
    X1 = (X1 << 32) | (X1 >> 32);
#line 666
    X1 ^= X2;
#line 666
    X0 += *((kw + 3) + 2);
#line 666
    X1 += *((kw + 3) + 3) + *((kw + 0) + 0);
#line 666
    X2 += *((kw + 3) + 4) + *((kw + 0) + 1);
#line 666
    X3 += (*((kw + 3) + 0) + 11ULL) + 1ULL;
#line 669
    X0 += X1;
#line 669
    X1 = (X1 << 14) | (X1 >> 50);
#line 669
    X1 ^= X0;
#line 669
    X2 += X3;
#line 669
    X3 = (X3 << 16) | (X3 >> 48);
#line 669
    X3 ^= X2;
#line 669
    X0 += X3;
#line 669
    X3 = (X3 << 52) | (X3 >> 12);
#line 669
    X3 ^= X0;
#line 669
    X2 += X1;
#line 669
    X1 = (X1 << 57) | (X1 >> 7);
#line 669
    X1 ^= X2;
#line 669
    X0 += X1;
#line 669
    X1 = (X1 << 23) | (X1 >> 41);
#line 669
    X1 ^= X0;
#line 669
    X2 += X3;
#line 669
    X3 = (X3 << 40) | (X3 >> 24);
#line 669
    X3 ^= X2;
#line 669
    X0 += X3;
#line 669
    X3 = (X3 << 5) | (X3 >> 59);
#line 669
    X3 ^= X0;
#line 669
    X2 += X1;
#line 669
    X1 = (X1 << 37) | (X1 >> 27);
#line 669
    X1 ^= X2;
#line 669
    X0 += *((kw + 3) + 3);
#line 669
    X1 += *((kw + 3) + 4) + *((kw + 0) + 1);
#line 669
    X2 += *((kw + 3) + 0) + *((kw + 0) + 2);
#line 669
    X3 += (*((kw + 3) + 1) + 12ULL) + 1ULL;
#line 669
    X0 += X1;
#line 669
    X1 = (X1 << 25) | (X1 >> 39);
#line 669
    X1 ^= X0;
#line 669
    X2 += X3;
#line 669
    X3 = (X3 << 33) | (X3 >> 31);
#line 669
    X3 ^= X2;
#line 669
    X0 += X3;
#line 669
    X3 = (X3 << 46) | (X3 >> 18);
#line 669
    X3 ^= X0;
#line 669
    X2 += X1;
#line 669
    X1 = (X1 << 12) | (X1 >> 52);
#line 669
    X1 ^= X2;
#line 669
    X0 += X1;
#line 669
    X1 = (X1 << 58) | (X1 >> 6);
#line 669
    X1 ^= X0;
#line 669
    X2 += X3;
#line 669
    X3 = (X3 << 22) | (X3 >> 42);
#line 669
    X3 ^= X2;
#line 669
    X0 += X3;
#line 669
    X3 = (X3 << 32) | (X3 >> 32);
#line 669
    X3 ^= X0;
#line 669
    X2 += X1;
#line 669
    X1 = (X1 << 32) | (X1 >> 32);
#line 669
    X1 ^= X2;
#line 669
    X0 += *((kw + 3) + 4);
#line 669
    X1 += *((kw + 3) + 0) + *((kw + 0) + 2);
#line 669
    X2 += *((kw + 3) + 1) + *((kw + 0) + 0);
#line 669
    X3 += (*((kw + 3) + 2) + 13ULL) + 1ULL;
#line 672
    X0 += X1;
#line 672
    X1 = (X1 << 14) | (X1 >> 50);
#line 672
    X1 ^= X0;
#line 672
    X2 += X3;
#line 672
    X3 = (X3 << 16) | (X3 >> 48);
#line 672
    X3 ^= X2;
#line 672
    X0 += X3;
#line 672
    X3 = (X3 << 52) | (X3 >> 12);
#line 672
    X3 ^= X0;
#line 672
    X2 += X1;
#line 672
    X1 = (X1 << 57) | (X1 >> 7);
#line 672
    X1 ^= X2;
#line 672
    X0 += X1;
#line 672
    X1 = (X1 << 23) | (X1 >> 41);
#line 672
    X1 ^= X0;
#line 672
    X2 += X3;
#line 672
    X3 = (X3 << 40) | (X3 >> 24);
#line 672
    X3 ^= X2;
#line 672
    X0 += X3;
#line 672
    X3 = (X3 << 5) | (X3 >> 59);
#line 672
    X3 ^= X0;
#line 672
    X2 += X1;
#line 672
    X1 = (X1 << 37) | (X1 >> 27);
#line 672
    X1 ^= X2;
#line 672
    X0 += *((kw + 3) + 0);
#line 672
    X1 += *((kw + 3) + 1) + *((kw + 0) + 0);
#line 672
    X2 += *((kw + 3) + 2) + *((kw + 0) + 1);
#line 672
    X3 += (*((kw + 3) + 3) + 14ULL) + 1ULL;
#line 672
    X0 += X1;
#line 672
    X1 = (X1 << 25) | (X1 >> 39);
#line 672
    X1 ^= X0;
#line 672
    X2 += X3;
#line 672
    X3 = (X3 << 33) | (X3 >> 31);
#line 672
    X3 ^= X2;
#line 672
    X0 += X3;
#line 672
    X3 = (X3 << 46) | (X3 >> 18);
#line 672
    X3 ^= X0;
#line 672
    X2 += X1;
#line 672
    X1 = (X1 << 12) | (X1 >> 52);
#line 672
    X1 ^= X2;
#line 672
    X0 += X1;
#line 672
    X1 = (X1 << 58) | (X1 >> 6);
#line 672
    X1 ^= X0;
#line 672
    X2 += X3;
#line 672
    X3 = (X3 << 22) | (X3 >> 42);
#line 672
    X3 ^= X2;
#line 672
    X0 += X3;
#line 672
    X3 = (X3 << 32) | (X3 >> 32);
#line 672
    X3 ^= X0;
#line 672
    X2 += X1;
#line 672
    X1 = (X1 << 32) | (X1 >> 32);
#line 672
    X1 ^= X2;
#line 672
    X0 += *((kw + 3) + 1);
#line 672
    X1 += *((kw + 3) + 2) + *((kw + 0) + 1);
#line 672
    X2 += *((kw + 3) + 3) + *((kw + 0) + 2);
#line 672
    X3 += (*((kw + 3) + 4) + 15ULL) + 1ULL;
#line 675
    X0 += X1;
#line 675
    X1 = (X1 << 14) | (X1 >> 50);
#line 675
    X1 ^= X0;
#line 675
    X2 += X3;
#line 675
    X3 = (X3 << 16) | (X3 >> 48);
#line 675
    X3 ^= X2;
#line 675
    X0 += X3;
#line 675
    X3 = (X3 << 52) | (X3 >> 12);
#line 675
    X3 ^= X0;
#line 675
    X2 += X1;
#line 675
    X1 = (X1 << 57) | (X1 >> 7);
#line 675
    X1 ^= X2;
#line 675
    X0 += X1;
#line 675
    X1 = (X1 << 23) | (X1 >> 41);
#line 675
    X1 ^= X0;
#line 675
    X2 += X3;
#line 675
    X3 = (X3 << 40) | (X3 >> 24);
#line 675
    X3 ^= X2;
#line 675
    X0 += X3;
#line 675
    X3 = (X3 << 5) | (X3 >> 59);
#line 675
    X3 ^= X0;
#line 675
    X2 += X1;
#line 675
    X1 = (X1 << 37) | (X1 >> 27);
#line 675
    X1 ^= X2;
#line 675
    X0 += *((kw + 3) + 2);
#line 675
    X1 += *((kw + 3) + 3) + *((kw + 0) + 2);
#line 675
    X2 += *((kw + 3) + 4) + *((kw + 0) + 0);
#line 675
    X3 += (*((kw + 3) + 0) + 16ULL) + 1ULL;
#line 675
    X0 += X1;
#line 675
    X1 = (X1 << 25) | (X1 >> 39);
#line 675
    X1 ^= X0;
#line 675
    X2 += X3;
#line 675
    X3 = (X3 << 33) | (X3 >> 31);
#line 675
    X3 ^= X2;
#line 675
    X0 += X3;
#line 675
    X3 = (X3 << 46) | (X3 >> 18);
#line 675
    X3 ^= X0;
#line 675
    X2 += X1;
#line 675
    X1 = (X1 << 12) | (X1 >> 52);
#line 675
    X1 ^= X2;
#line 675
    X0 += X1;
#line 675
    X1 = (X1 << 58) | (X1 >> 6);
#line 675
    X1 ^= X0;
#line 675
    X2 += X3;
#line 675
    X3 = (X3 << 22) | (X3 >> 42);
#line 675
    X3 ^= X2;
#line 675
    X0 += X3;
#line 675
    X3 = (X3 << 32) | (X3 >> 32);
#line 675
    X3 ^= X0;
#line 675
    X2 += X1;
#line 675
    X1 = (X1 << 32) | (X1 >> 32);
#line 675
    X1 ^= X2;
#line 675
    X0 += *((kw + 3) + 3);
#line 675
    X1 += *((kw + 3) + 4) + *((kw + 0) + 0);
#line 675
    X2 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 675
    X3 += (*((kw + 3) + 1) + 17ULL) + 1ULL;
#line 700
    ctx->X[0] = X0 ^ w[0];
#line 701
    ctx->X[1] = X1 ^ w[1];
#line 702
    ctx->X[2] = X2 ^ w[2];
#line 703
    ctx->X[3] = X3 ^ w[3];
#line 707
    *((kw + 0) + 1) &= ~ (1ULL << 62);
#line 577
    blkCnt --;
#line 577
    if (! blkCnt) {
#line 577
      break;
    }
  }
#line 710
  ctx->h.T[0] = *((kw + 0) + 0);
#line 711
  ctx->h.T[1] = *((kw + 0) + 1);
#line 712
  return;
}
}
#line 729 "skein.c"
static void Skein_512_Process_Block(Skein_512_Ctxt_t *ctx , u08b_t const   *blkPtr ,
                                    size_t blkCnt , size_t byteCntAdd ) 
{ 
  u64b_t kw[12] ;
  u64b_t X0 ;
  u64b_t X1 ;
  u64b_t X2 ;
  u64b_t X3 ;
  u64b_t X4 ;
  u64b_t X5 ;
  u64b_t X6 ;
  u64b_t X7 ;
  u64b_t w[8] ;

  {
#line 762
  *((kw + 0) + 0) = ctx->h.T[0];
#line 763
  *((kw + 0) + 1) = ctx->h.T[1];
#line 764
  while (1) {
#line 766
    *((kw + 0) + 0) += (u64b_t )byteCntAdd;
#line 769
    *((kw + 3) + 0) = ctx->X[0];
#line 770
    *((kw + 3) + 1) = ctx->X[1];
#line 771
    *((kw + 3) + 2) = ctx->X[2];
#line 772
    *((kw + 3) + 3) = ctx->X[3];
#line 773
    *((kw + 3) + 4) = ctx->X[4];
#line 774
    *((kw + 3) + 5) = ctx->X[5];
#line 775
    *((kw + 3) + 6) = ctx->X[6];
#line 776
    *((kw + 3) + 7) = ctx->X[7];
#line 777
    *((kw + 3) + 8) = (((((((*((kw + 3) + 0) ^ *((kw + 3) + 1)) ^ *((kw + 3) + 2)) ^ *((kw + 3) + 3)) ^ *((kw + 3) + 4)) ^ *((kw + 3) + 5)) ^ *((kw + 3) + 6)) ^ *((kw + 3) + 7)) ^ (2851871266ULL + (466688986ULL << 32));
#line 780
    *((kw + 0) + 2) = *((kw + 0) + 0) ^ *((kw + 0) + 1);
#line 782
    Skein_Get64_LSB_First(w, blkPtr, (size_t )8);
#line 786
    X0 = w[0] + *((kw + 3) + 0);
#line 787
    X1 = w[1] + *((kw + 3) + 1);
#line 788
    X2 = w[2] + *((kw + 3) + 2);
#line 789
    X3 = w[3] + *((kw + 3) + 3);
#line 790
    X4 = w[4] + *((kw + 3) + 4);
#line 791
    X5 = (w[5] + *((kw + 3) + 5)) + *((kw + 0) + 0);
#line 792
    X6 = (w[6] + *((kw + 3) + 6)) + *((kw + 0) + 1);
#line 793
    X7 = w[7] + *((kw + 3) + 7);
#line 795
    blkPtr += 64;
#line 853
    X0 += X1;
#line 853
    X1 = (X1 << 46) | (X1 >> 18);
#line 853
    X1 ^= X0;
#line 853
    X2 += X3;
#line 853
    X3 = (X3 << 36) | (X3 >> 28);
#line 853
    X3 ^= X2;
#line 853
    X4 += X5;
#line 853
    X5 = (X5 << 19) | (X5 >> 45);
#line 853
    X5 ^= X4;
#line 853
    X6 += X7;
#line 853
    X7 = (X7 << 37) | (X7 >> 27);
#line 853
    X7 ^= X6;
#line 853
    X2 += X1;
#line 853
    X1 = (X1 << 33) | (X1 >> 31);
#line 853
    X1 ^= X2;
#line 853
    X4 += X7;
#line 853
    X7 = (X7 << 27) | (X7 >> 37);
#line 853
    X7 ^= X4;
#line 853
    X6 += X5;
#line 853
    X5 = (X5 << 14) | (X5 >> 50);
#line 853
    X5 ^= X6;
#line 853
    X0 += X3;
#line 853
    X3 = (X3 << 42) | (X3 >> 22);
#line 853
    X3 ^= X0;
#line 853
    X4 += X1;
#line 853
    X1 = (X1 << 17) | (X1 >> 47);
#line 853
    X1 ^= X4;
#line 853
    X6 += X3;
#line 853
    X3 = (X3 << 49) | (X3 >> 15);
#line 853
    X3 ^= X6;
#line 853
    X0 += X5;
#line 853
    X5 = (X5 << 36) | (X5 >> 28);
#line 853
    X5 ^= X0;
#line 853
    X2 += X7;
#line 853
    X7 = (X7 << 39) | (X7 >> 25);
#line 853
    X7 ^= X2;
#line 853
    X6 += X1;
#line 853
    X1 = (X1 << 44) | (X1 >> 20);
#line 853
    X1 ^= X6;
#line 853
    X0 += X7;
#line 853
    X7 = (X7 << 9) | (X7 >> 55);
#line 853
    X7 ^= X0;
#line 853
    X2 += X5;
#line 853
    X5 = (X5 << 54) | (X5 >> 10);
#line 853
    X5 ^= X2;
#line 853
    X4 += X3;
#line 853
    X3 = (X3 << 56) | (X3 >> 8);
#line 853
    X3 ^= X4;
#line 853
    X0 += *((kw + 3) + 1);
#line 853
    X1 += *((kw + 3) + 2);
#line 853
    X2 += *((kw + 3) + 3);
#line 853
    X3 += *((kw + 3) + 4);
#line 853
    X4 += *((kw + 3) + 5);
#line 853
    X5 += *((kw + 3) + 6) + *((kw + 0) + 1);
#line 853
    X6 += *((kw + 3) + 7) + *((kw + 0) + 2);
#line 853
    X7 += *((kw + 3) + 8) + 1ULL;
#line 853
    X0 += X1;
#line 853
    X1 = (X1 << 39) | (X1 >> 25);
#line 853
    X1 ^= X0;
#line 853
    X2 += X3;
#line 853
    X3 = (X3 << 30) | (X3 >> 34);
#line 853
    X3 ^= X2;
#line 853
    X4 += X5;
#line 853
    X5 = (X5 << 34) | (X5 >> 30);
#line 853
    X5 ^= X4;
#line 853
    X6 += X7;
#line 853
    X7 = (X7 << 24) | (X7 >> 40);
#line 853
    X7 ^= X6;
#line 853
    X2 += X1;
#line 853
    X1 = (X1 << 13) | (X1 >> 51);
#line 853
    X1 ^= X2;
#line 853
    X4 += X7;
#line 853
    X7 = (X7 << 50) | (X7 >> 14);
#line 853
    X7 ^= X4;
#line 853
    X6 += X5;
#line 853
    X5 = (X5 << 10) | (X5 >> 54);
#line 853
    X5 ^= X6;
#line 853
    X0 += X3;
#line 853
    X3 = (X3 << 17) | (X3 >> 47);
#line 853
    X3 ^= X0;
#line 853
    X4 += X1;
#line 853
    X1 = (X1 << 25) | (X1 >> 39);
#line 853
    X1 ^= X4;
#line 853
    X6 += X3;
#line 853
    X3 = (X3 << 29) | (X3 >> 35);
#line 853
    X3 ^= X6;
#line 853
    X0 += X5;
#line 853
    X5 = (X5 << 39) | (X5 >> 25);
#line 853
    X5 ^= X0;
#line 853
    X2 += X7;
#line 853
    X7 = (X7 << 43) | (X7 >> 21);
#line 853
    X7 ^= X2;
#line 853
    X6 += X1;
#line 853
    X1 = (X1 << 8) | (X1 >> 56);
#line 853
    X1 ^= X6;
#line 853
    X0 += X7;
#line 853
    X7 = (X7 << 35) | (X7 >> 29);
#line 853
    X7 ^= X0;
#line 853
    X2 += X5;
#line 853
    X5 = (X5 << 56) | (X5 >> 8);
#line 853
    X5 ^= X2;
#line 853
    X4 += X3;
#line 853
    X3 = (X3 << 22) | (X3 >> 42);
#line 853
    X3 ^= X4;
#line 853
    X0 += *((kw + 3) + 2);
#line 853
    X1 += *((kw + 3) + 3);
#line 853
    X2 += *((kw + 3) + 4);
#line 853
    X3 += *((kw + 3) + 5);
#line 853
    X4 += *((kw + 3) + 6);
#line 853
    X5 += *((kw + 3) + 7) + *((kw + 0) + 2);
#line 853
    X6 += *((kw + 3) + 8) + *((kw + 0) + 0);
#line 853
    X7 += (*((kw + 3) + 0) + 1ULL) + 1ULL;
#line 858
    X0 += X1;
#line 858
    X1 = (X1 << 46) | (X1 >> 18);
#line 858
    X1 ^= X0;
#line 858
    X2 += X3;
#line 858
    X3 = (X3 << 36) | (X3 >> 28);
#line 858
    X3 ^= X2;
#line 858
    X4 += X5;
#line 858
    X5 = (X5 << 19) | (X5 >> 45);
#line 858
    X5 ^= X4;
#line 858
    X6 += X7;
#line 858
    X7 = (X7 << 37) | (X7 >> 27);
#line 858
    X7 ^= X6;
#line 858
    X2 += X1;
#line 858
    X1 = (X1 << 33) | (X1 >> 31);
#line 858
    X1 ^= X2;
#line 858
    X4 += X7;
#line 858
    X7 = (X7 << 27) | (X7 >> 37);
#line 858
    X7 ^= X4;
#line 858
    X6 += X5;
#line 858
    X5 = (X5 << 14) | (X5 >> 50);
#line 858
    X5 ^= X6;
#line 858
    X0 += X3;
#line 858
    X3 = (X3 << 42) | (X3 >> 22);
#line 858
    X3 ^= X0;
#line 858
    X4 += X1;
#line 858
    X1 = (X1 << 17) | (X1 >> 47);
#line 858
    X1 ^= X4;
#line 858
    X6 += X3;
#line 858
    X3 = (X3 << 49) | (X3 >> 15);
#line 858
    X3 ^= X6;
#line 858
    X0 += X5;
#line 858
    X5 = (X5 << 36) | (X5 >> 28);
#line 858
    X5 ^= X0;
#line 858
    X2 += X7;
#line 858
    X7 = (X7 << 39) | (X7 >> 25);
#line 858
    X7 ^= X2;
#line 858
    X6 += X1;
#line 858
    X1 = (X1 << 44) | (X1 >> 20);
#line 858
    X1 ^= X6;
#line 858
    X0 += X7;
#line 858
    X7 = (X7 << 9) | (X7 >> 55);
#line 858
    X7 ^= X0;
#line 858
    X2 += X5;
#line 858
    X5 = (X5 << 54) | (X5 >> 10);
#line 858
    X5 ^= X2;
#line 858
    X4 += X3;
#line 858
    X3 = (X3 << 56) | (X3 >> 8);
#line 858
    X3 ^= X4;
#line 858
    X0 += *((kw + 3) + 3);
#line 858
    X1 += *((kw + 3) + 4);
#line 858
    X2 += *((kw + 3) + 5);
#line 858
    X3 += *((kw + 3) + 6);
#line 858
    X4 += *((kw + 3) + 7);
#line 858
    X5 += *((kw + 3) + 8) + *((kw + 0) + 0);
#line 858
    X6 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 858
    X7 += (*((kw + 3) + 1) + 2ULL) + 1ULL;
#line 858
    X0 += X1;
#line 858
    X1 = (X1 << 39) | (X1 >> 25);
#line 858
    X1 ^= X0;
#line 858
    X2 += X3;
#line 858
    X3 = (X3 << 30) | (X3 >> 34);
#line 858
    X3 ^= X2;
#line 858
    X4 += X5;
#line 858
    X5 = (X5 << 34) | (X5 >> 30);
#line 858
    X5 ^= X4;
#line 858
    X6 += X7;
#line 858
    X7 = (X7 << 24) | (X7 >> 40);
#line 858
    X7 ^= X6;
#line 858
    X2 += X1;
#line 858
    X1 = (X1 << 13) | (X1 >> 51);
#line 858
    X1 ^= X2;
#line 858
    X4 += X7;
#line 858
    X7 = (X7 << 50) | (X7 >> 14);
#line 858
    X7 ^= X4;
#line 858
    X6 += X5;
#line 858
    X5 = (X5 << 10) | (X5 >> 54);
#line 858
    X5 ^= X6;
#line 858
    X0 += X3;
#line 858
    X3 = (X3 << 17) | (X3 >> 47);
#line 858
    X3 ^= X0;
#line 858
    X4 += X1;
#line 858
    X1 = (X1 << 25) | (X1 >> 39);
#line 858
    X1 ^= X4;
#line 858
    X6 += X3;
#line 858
    X3 = (X3 << 29) | (X3 >> 35);
#line 858
    X3 ^= X6;
#line 858
    X0 += X5;
#line 858
    X5 = (X5 << 39) | (X5 >> 25);
#line 858
    X5 ^= X0;
#line 858
    X2 += X7;
#line 858
    X7 = (X7 << 43) | (X7 >> 21);
#line 858
    X7 ^= X2;
#line 858
    X6 += X1;
#line 858
    X1 = (X1 << 8) | (X1 >> 56);
#line 858
    X1 ^= X6;
#line 858
    X0 += X7;
#line 858
    X7 = (X7 << 35) | (X7 >> 29);
#line 858
    X7 ^= X0;
#line 858
    X2 += X5;
#line 858
    X5 = (X5 << 56) | (X5 >> 8);
#line 858
    X5 ^= X2;
#line 858
    X4 += X3;
#line 858
    X3 = (X3 << 22) | (X3 >> 42);
#line 858
    X3 ^= X4;
#line 858
    X0 += *((kw + 3) + 4);
#line 858
    X1 += *((kw + 3) + 5);
#line 858
    X2 += *((kw + 3) + 6);
#line 858
    X3 += *((kw + 3) + 7);
#line 858
    X4 += *((kw + 3) + 8);
#line 858
    X5 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 858
    X6 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 858
    X7 += (*((kw + 3) + 2) + 3ULL) + 1ULL;
#line 861
    X0 += X1;
#line 861
    X1 = (X1 << 46) | (X1 >> 18);
#line 861
    X1 ^= X0;
#line 861
    X2 += X3;
#line 861
    X3 = (X3 << 36) | (X3 >> 28);
#line 861
    X3 ^= X2;
#line 861
    X4 += X5;
#line 861
    X5 = (X5 << 19) | (X5 >> 45);
#line 861
    X5 ^= X4;
#line 861
    X6 += X7;
#line 861
    X7 = (X7 << 37) | (X7 >> 27);
#line 861
    X7 ^= X6;
#line 861
    X2 += X1;
#line 861
    X1 = (X1 << 33) | (X1 >> 31);
#line 861
    X1 ^= X2;
#line 861
    X4 += X7;
#line 861
    X7 = (X7 << 27) | (X7 >> 37);
#line 861
    X7 ^= X4;
#line 861
    X6 += X5;
#line 861
    X5 = (X5 << 14) | (X5 >> 50);
#line 861
    X5 ^= X6;
#line 861
    X0 += X3;
#line 861
    X3 = (X3 << 42) | (X3 >> 22);
#line 861
    X3 ^= X0;
#line 861
    X4 += X1;
#line 861
    X1 = (X1 << 17) | (X1 >> 47);
#line 861
    X1 ^= X4;
#line 861
    X6 += X3;
#line 861
    X3 = (X3 << 49) | (X3 >> 15);
#line 861
    X3 ^= X6;
#line 861
    X0 += X5;
#line 861
    X5 = (X5 << 36) | (X5 >> 28);
#line 861
    X5 ^= X0;
#line 861
    X2 += X7;
#line 861
    X7 = (X7 << 39) | (X7 >> 25);
#line 861
    X7 ^= X2;
#line 861
    X6 += X1;
#line 861
    X1 = (X1 << 44) | (X1 >> 20);
#line 861
    X1 ^= X6;
#line 861
    X0 += X7;
#line 861
    X7 = (X7 << 9) | (X7 >> 55);
#line 861
    X7 ^= X0;
#line 861
    X2 += X5;
#line 861
    X5 = (X5 << 54) | (X5 >> 10);
#line 861
    X5 ^= X2;
#line 861
    X4 += X3;
#line 861
    X3 = (X3 << 56) | (X3 >> 8);
#line 861
    X3 ^= X4;
#line 861
    X0 += *((kw + 3) + 5);
#line 861
    X1 += *((kw + 3) + 6);
#line 861
    X2 += *((kw + 3) + 7);
#line 861
    X3 += *((kw + 3) + 8);
#line 861
    X4 += *((kw + 3) + 0);
#line 861
    X5 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 861
    X6 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 861
    X7 += (*((kw + 3) + 3) + 4ULL) + 1ULL;
#line 861
    X0 += X1;
#line 861
    X1 = (X1 << 39) | (X1 >> 25);
#line 861
    X1 ^= X0;
#line 861
    X2 += X3;
#line 861
    X3 = (X3 << 30) | (X3 >> 34);
#line 861
    X3 ^= X2;
#line 861
    X4 += X5;
#line 861
    X5 = (X5 << 34) | (X5 >> 30);
#line 861
    X5 ^= X4;
#line 861
    X6 += X7;
#line 861
    X7 = (X7 << 24) | (X7 >> 40);
#line 861
    X7 ^= X6;
#line 861
    X2 += X1;
#line 861
    X1 = (X1 << 13) | (X1 >> 51);
#line 861
    X1 ^= X2;
#line 861
    X4 += X7;
#line 861
    X7 = (X7 << 50) | (X7 >> 14);
#line 861
    X7 ^= X4;
#line 861
    X6 += X5;
#line 861
    X5 = (X5 << 10) | (X5 >> 54);
#line 861
    X5 ^= X6;
#line 861
    X0 += X3;
#line 861
    X3 = (X3 << 17) | (X3 >> 47);
#line 861
    X3 ^= X0;
#line 861
    X4 += X1;
#line 861
    X1 = (X1 << 25) | (X1 >> 39);
#line 861
    X1 ^= X4;
#line 861
    X6 += X3;
#line 861
    X3 = (X3 << 29) | (X3 >> 35);
#line 861
    X3 ^= X6;
#line 861
    X0 += X5;
#line 861
    X5 = (X5 << 39) | (X5 >> 25);
#line 861
    X5 ^= X0;
#line 861
    X2 += X7;
#line 861
    X7 = (X7 << 43) | (X7 >> 21);
#line 861
    X7 ^= X2;
#line 861
    X6 += X1;
#line 861
    X1 = (X1 << 8) | (X1 >> 56);
#line 861
    X1 ^= X6;
#line 861
    X0 += X7;
#line 861
    X7 = (X7 << 35) | (X7 >> 29);
#line 861
    X7 ^= X0;
#line 861
    X2 += X5;
#line 861
    X5 = (X5 << 56) | (X5 >> 8);
#line 861
    X5 ^= X2;
#line 861
    X4 += X3;
#line 861
    X3 = (X3 << 22) | (X3 >> 42);
#line 861
    X3 ^= X4;
#line 861
    X0 += *((kw + 3) + 6);
#line 861
    X1 += *((kw + 3) + 7);
#line 861
    X2 += *((kw + 3) + 8);
#line 861
    X3 += *((kw + 3) + 0);
#line 861
    X4 += *((kw + 3) + 1);
#line 861
    X5 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 861
    X6 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 861
    X7 += (*((kw + 3) + 4) + 5ULL) + 1ULL;
#line 864
    X0 += X1;
#line 864
    X1 = (X1 << 46) | (X1 >> 18);
#line 864
    X1 ^= X0;
#line 864
    X2 += X3;
#line 864
    X3 = (X3 << 36) | (X3 >> 28);
#line 864
    X3 ^= X2;
#line 864
    X4 += X5;
#line 864
    X5 = (X5 << 19) | (X5 >> 45);
#line 864
    X5 ^= X4;
#line 864
    X6 += X7;
#line 864
    X7 = (X7 << 37) | (X7 >> 27);
#line 864
    X7 ^= X6;
#line 864
    X2 += X1;
#line 864
    X1 = (X1 << 33) | (X1 >> 31);
#line 864
    X1 ^= X2;
#line 864
    X4 += X7;
#line 864
    X7 = (X7 << 27) | (X7 >> 37);
#line 864
    X7 ^= X4;
#line 864
    X6 += X5;
#line 864
    X5 = (X5 << 14) | (X5 >> 50);
#line 864
    X5 ^= X6;
#line 864
    X0 += X3;
#line 864
    X3 = (X3 << 42) | (X3 >> 22);
#line 864
    X3 ^= X0;
#line 864
    X4 += X1;
#line 864
    X1 = (X1 << 17) | (X1 >> 47);
#line 864
    X1 ^= X4;
#line 864
    X6 += X3;
#line 864
    X3 = (X3 << 49) | (X3 >> 15);
#line 864
    X3 ^= X6;
#line 864
    X0 += X5;
#line 864
    X5 = (X5 << 36) | (X5 >> 28);
#line 864
    X5 ^= X0;
#line 864
    X2 += X7;
#line 864
    X7 = (X7 << 39) | (X7 >> 25);
#line 864
    X7 ^= X2;
#line 864
    X6 += X1;
#line 864
    X1 = (X1 << 44) | (X1 >> 20);
#line 864
    X1 ^= X6;
#line 864
    X0 += X7;
#line 864
    X7 = (X7 << 9) | (X7 >> 55);
#line 864
    X7 ^= X0;
#line 864
    X2 += X5;
#line 864
    X5 = (X5 << 54) | (X5 >> 10);
#line 864
    X5 ^= X2;
#line 864
    X4 += X3;
#line 864
    X3 = (X3 << 56) | (X3 >> 8);
#line 864
    X3 ^= X4;
#line 864
    X0 += *((kw + 3) + 7);
#line 864
    X1 += *((kw + 3) + 8);
#line 864
    X2 += *((kw + 3) + 0);
#line 864
    X3 += *((kw + 3) + 1);
#line 864
    X4 += *((kw + 3) + 2);
#line 864
    X5 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 864
    X6 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 864
    X7 += (*((kw + 3) + 5) + 6ULL) + 1ULL;
#line 864
    X0 += X1;
#line 864
    X1 = (X1 << 39) | (X1 >> 25);
#line 864
    X1 ^= X0;
#line 864
    X2 += X3;
#line 864
    X3 = (X3 << 30) | (X3 >> 34);
#line 864
    X3 ^= X2;
#line 864
    X4 += X5;
#line 864
    X5 = (X5 << 34) | (X5 >> 30);
#line 864
    X5 ^= X4;
#line 864
    X6 += X7;
#line 864
    X7 = (X7 << 24) | (X7 >> 40);
#line 864
    X7 ^= X6;
#line 864
    X2 += X1;
#line 864
    X1 = (X1 << 13) | (X1 >> 51);
#line 864
    X1 ^= X2;
#line 864
    X4 += X7;
#line 864
    X7 = (X7 << 50) | (X7 >> 14);
#line 864
    X7 ^= X4;
#line 864
    X6 += X5;
#line 864
    X5 = (X5 << 10) | (X5 >> 54);
#line 864
    X5 ^= X6;
#line 864
    X0 += X3;
#line 864
    X3 = (X3 << 17) | (X3 >> 47);
#line 864
    X3 ^= X0;
#line 864
    X4 += X1;
#line 864
    X1 = (X1 << 25) | (X1 >> 39);
#line 864
    X1 ^= X4;
#line 864
    X6 += X3;
#line 864
    X3 = (X3 << 29) | (X3 >> 35);
#line 864
    X3 ^= X6;
#line 864
    X0 += X5;
#line 864
    X5 = (X5 << 39) | (X5 >> 25);
#line 864
    X5 ^= X0;
#line 864
    X2 += X7;
#line 864
    X7 = (X7 << 43) | (X7 >> 21);
#line 864
    X7 ^= X2;
#line 864
    X6 += X1;
#line 864
    X1 = (X1 << 8) | (X1 >> 56);
#line 864
    X1 ^= X6;
#line 864
    X0 += X7;
#line 864
    X7 = (X7 << 35) | (X7 >> 29);
#line 864
    X7 ^= X0;
#line 864
    X2 += X5;
#line 864
    X5 = (X5 << 56) | (X5 >> 8);
#line 864
    X5 ^= X2;
#line 864
    X4 += X3;
#line 864
    X3 = (X3 << 22) | (X3 >> 42);
#line 864
    X3 ^= X4;
#line 864
    X0 += *((kw + 3) + 8);
#line 864
    X1 += *((kw + 3) + 0);
#line 864
    X2 += *((kw + 3) + 1);
#line 864
    X3 += *((kw + 3) + 2);
#line 864
    X4 += *((kw + 3) + 3);
#line 864
    X5 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 864
    X6 += *((kw + 3) + 5) + *((kw + 0) + 0);
#line 864
    X7 += (*((kw + 3) + 6) + 7ULL) + 1ULL;
#line 867
    X0 += X1;
#line 867
    X1 = (X1 << 46) | (X1 >> 18);
#line 867
    X1 ^= X0;
#line 867
    X2 += X3;
#line 867
    X3 = (X3 << 36) | (X3 >> 28);
#line 867
    X3 ^= X2;
#line 867
    X4 += X5;
#line 867
    X5 = (X5 << 19) | (X5 >> 45);
#line 867
    X5 ^= X4;
#line 867
    X6 += X7;
#line 867
    X7 = (X7 << 37) | (X7 >> 27);
#line 867
    X7 ^= X6;
#line 867
    X2 += X1;
#line 867
    X1 = (X1 << 33) | (X1 >> 31);
#line 867
    X1 ^= X2;
#line 867
    X4 += X7;
#line 867
    X7 = (X7 << 27) | (X7 >> 37);
#line 867
    X7 ^= X4;
#line 867
    X6 += X5;
#line 867
    X5 = (X5 << 14) | (X5 >> 50);
#line 867
    X5 ^= X6;
#line 867
    X0 += X3;
#line 867
    X3 = (X3 << 42) | (X3 >> 22);
#line 867
    X3 ^= X0;
#line 867
    X4 += X1;
#line 867
    X1 = (X1 << 17) | (X1 >> 47);
#line 867
    X1 ^= X4;
#line 867
    X6 += X3;
#line 867
    X3 = (X3 << 49) | (X3 >> 15);
#line 867
    X3 ^= X6;
#line 867
    X0 += X5;
#line 867
    X5 = (X5 << 36) | (X5 >> 28);
#line 867
    X5 ^= X0;
#line 867
    X2 += X7;
#line 867
    X7 = (X7 << 39) | (X7 >> 25);
#line 867
    X7 ^= X2;
#line 867
    X6 += X1;
#line 867
    X1 = (X1 << 44) | (X1 >> 20);
#line 867
    X1 ^= X6;
#line 867
    X0 += X7;
#line 867
    X7 = (X7 << 9) | (X7 >> 55);
#line 867
    X7 ^= X0;
#line 867
    X2 += X5;
#line 867
    X5 = (X5 << 54) | (X5 >> 10);
#line 867
    X5 ^= X2;
#line 867
    X4 += X3;
#line 867
    X3 = (X3 << 56) | (X3 >> 8);
#line 867
    X3 ^= X4;
#line 867
    X0 += *((kw + 3) + 0);
#line 867
    X1 += *((kw + 3) + 1);
#line 867
    X2 += *((kw + 3) + 2);
#line 867
    X3 += *((kw + 3) + 3);
#line 867
    X4 += *((kw + 3) + 4);
#line 867
    X5 += *((kw + 3) + 5) + *((kw + 0) + 0);
#line 867
    X6 += *((kw + 3) + 6) + *((kw + 0) + 1);
#line 867
    X7 += (*((kw + 3) + 7) + 8ULL) + 1ULL;
#line 867
    X0 += X1;
#line 867
    X1 = (X1 << 39) | (X1 >> 25);
#line 867
    X1 ^= X0;
#line 867
    X2 += X3;
#line 867
    X3 = (X3 << 30) | (X3 >> 34);
#line 867
    X3 ^= X2;
#line 867
    X4 += X5;
#line 867
    X5 = (X5 << 34) | (X5 >> 30);
#line 867
    X5 ^= X4;
#line 867
    X6 += X7;
#line 867
    X7 = (X7 << 24) | (X7 >> 40);
#line 867
    X7 ^= X6;
#line 867
    X2 += X1;
#line 867
    X1 = (X1 << 13) | (X1 >> 51);
#line 867
    X1 ^= X2;
#line 867
    X4 += X7;
#line 867
    X7 = (X7 << 50) | (X7 >> 14);
#line 867
    X7 ^= X4;
#line 867
    X6 += X5;
#line 867
    X5 = (X5 << 10) | (X5 >> 54);
#line 867
    X5 ^= X6;
#line 867
    X0 += X3;
#line 867
    X3 = (X3 << 17) | (X3 >> 47);
#line 867
    X3 ^= X0;
#line 867
    X4 += X1;
#line 867
    X1 = (X1 << 25) | (X1 >> 39);
#line 867
    X1 ^= X4;
#line 867
    X6 += X3;
#line 867
    X3 = (X3 << 29) | (X3 >> 35);
#line 867
    X3 ^= X6;
#line 867
    X0 += X5;
#line 867
    X5 = (X5 << 39) | (X5 >> 25);
#line 867
    X5 ^= X0;
#line 867
    X2 += X7;
#line 867
    X7 = (X7 << 43) | (X7 >> 21);
#line 867
    X7 ^= X2;
#line 867
    X6 += X1;
#line 867
    X1 = (X1 << 8) | (X1 >> 56);
#line 867
    X1 ^= X6;
#line 867
    X0 += X7;
#line 867
    X7 = (X7 << 35) | (X7 >> 29);
#line 867
    X7 ^= X0;
#line 867
    X2 += X5;
#line 867
    X5 = (X5 << 56) | (X5 >> 8);
#line 867
    X5 ^= X2;
#line 867
    X4 += X3;
#line 867
    X3 = (X3 << 22) | (X3 >> 42);
#line 867
    X3 ^= X4;
#line 867
    X0 += *((kw + 3) + 1);
#line 867
    X1 += *((kw + 3) + 2);
#line 867
    X2 += *((kw + 3) + 3);
#line 867
    X3 += *((kw + 3) + 4);
#line 867
    X4 += *((kw + 3) + 5);
#line 867
    X5 += *((kw + 3) + 6) + *((kw + 0) + 1);
#line 867
    X6 += *((kw + 3) + 7) + *((kw + 0) + 2);
#line 867
    X7 += (*((kw + 3) + 8) + 9ULL) + 1ULL;
#line 870
    X0 += X1;
#line 870
    X1 = (X1 << 46) | (X1 >> 18);
#line 870
    X1 ^= X0;
#line 870
    X2 += X3;
#line 870
    X3 = (X3 << 36) | (X3 >> 28);
#line 870
    X3 ^= X2;
#line 870
    X4 += X5;
#line 870
    X5 = (X5 << 19) | (X5 >> 45);
#line 870
    X5 ^= X4;
#line 870
    X6 += X7;
#line 870
    X7 = (X7 << 37) | (X7 >> 27);
#line 870
    X7 ^= X6;
#line 870
    X2 += X1;
#line 870
    X1 = (X1 << 33) | (X1 >> 31);
#line 870
    X1 ^= X2;
#line 870
    X4 += X7;
#line 870
    X7 = (X7 << 27) | (X7 >> 37);
#line 870
    X7 ^= X4;
#line 870
    X6 += X5;
#line 870
    X5 = (X5 << 14) | (X5 >> 50);
#line 870
    X5 ^= X6;
#line 870
    X0 += X3;
#line 870
    X3 = (X3 << 42) | (X3 >> 22);
#line 870
    X3 ^= X0;
#line 870
    X4 += X1;
#line 870
    X1 = (X1 << 17) | (X1 >> 47);
#line 870
    X1 ^= X4;
#line 870
    X6 += X3;
#line 870
    X3 = (X3 << 49) | (X3 >> 15);
#line 870
    X3 ^= X6;
#line 870
    X0 += X5;
#line 870
    X5 = (X5 << 36) | (X5 >> 28);
#line 870
    X5 ^= X0;
#line 870
    X2 += X7;
#line 870
    X7 = (X7 << 39) | (X7 >> 25);
#line 870
    X7 ^= X2;
#line 870
    X6 += X1;
#line 870
    X1 = (X1 << 44) | (X1 >> 20);
#line 870
    X1 ^= X6;
#line 870
    X0 += X7;
#line 870
    X7 = (X7 << 9) | (X7 >> 55);
#line 870
    X7 ^= X0;
#line 870
    X2 += X5;
#line 870
    X5 = (X5 << 54) | (X5 >> 10);
#line 870
    X5 ^= X2;
#line 870
    X4 += X3;
#line 870
    X3 = (X3 << 56) | (X3 >> 8);
#line 870
    X3 ^= X4;
#line 870
    X0 += *((kw + 3) + 2);
#line 870
    X1 += *((kw + 3) + 3);
#line 870
    X2 += *((kw + 3) + 4);
#line 870
    X3 += *((kw + 3) + 5);
#line 870
    X4 += *((kw + 3) + 6);
#line 870
    X5 += *((kw + 3) + 7) + *((kw + 0) + 2);
#line 870
    X6 += *((kw + 3) + 8) + *((kw + 0) + 0);
#line 870
    X7 += (*((kw + 3) + 0) + 10ULL) + 1ULL;
#line 870
    X0 += X1;
#line 870
    X1 = (X1 << 39) | (X1 >> 25);
#line 870
    X1 ^= X0;
#line 870
    X2 += X3;
#line 870
    X3 = (X3 << 30) | (X3 >> 34);
#line 870
    X3 ^= X2;
#line 870
    X4 += X5;
#line 870
    X5 = (X5 << 34) | (X5 >> 30);
#line 870
    X5 ^= X4;
#line 870
    X6 += X7;
#line 870
    X7 = (X7 << 24) | (X7 >> 40);
#line 870
    X7 ^= X6;
#line 870
    X2 += X1;
#line 870
    X1 = (X1 << 13) | (X1 >> 51);
#line 870
    X1 ^= X2;
#line 870
    X4 += X7;
#line 870
    X7 = (X7 << 50) | (X7 >> 14);
#line 870
    X7 ^= X4;
#line 870
    X6 += X5;
#line 870
    X5 = (X5 << 10) | (X5 >> 54);
#line 870
    X5 ^= X6;
#line 870
    X0 += X3;
#line 870
    X3 = (X3 << 17) | (X3 >> 47);
#line 870
    X3 ^= X0;
#line 870
    X4 += X1;
#line 870
    X1 = (X1 << 25) | (X1 >> 39);
#line 870
    X1 ^= X4;
#line 870
    X6 += X3;
#line 870
    X3 = (X3 << 29) | (X3 >> 35);
#line 870
    X3 ^= X6;
#line 870
    X0 += X5;
#line 870
    X5 = (X5 << 39) | (X5 >> 25);
#line 870
    X5 ^= X0;
#line 870
    X2 += X7;
#line 870
    X7 = (X7 << 43) | (X7 >> 21);
#line 870
    X7 ^= X2;
#line 870
    X6 += X1;
#line 870
    X1 = (X1 << 8) | (X1 >> 56);
#line 870
    X1 ^= X6;
#line 870
    X0 += X7;
#line 870
    X7 = (X7 << 35) | (X7 >> 29);
#line 870
    X7 ^= X0;
#line 870
    X2 += X5;
#line 870
    X5 = (X5 << 56) | (X5 >> 8);
#line 870
    X5 ^= X2;
#line 870
    X4 += X3;
#line 870
    X3 = (X3 << 22) | (X3 >> 42);
#line 870
    X3 ^= X4;
#line 870
    X0 += *((kw + 3) + 3);
#line 870
    X1 += *((kw + 3) + 4);
#line 870
    X2 += *((kw + 3) + 5);
#line 870
    X3 += *((kw + 3) + 6);
#line 870
    X4 += *((kw + 3) + 7);
#line 870
    X5 += *((kw + 3) + 8) + *((kw + 0) + 0);
#line 870
    X6 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 870
    X7 += (*((kw + 3) + 1) + 11ULL) + 1ULL;
#line 873
    X0 += X1;
#line 873
    X1 = (X1 << 46) | (X1 >> 18);
#line 873
    X1 ^= X0;
#line 873
    X2 += X3;
#line 873
    X3 = (X3 << 36) | (X3 >> 28);
#line 873
    X3 ^= X2;
#line 873
    X4 += X5;
#line 873
    X5 = (X5 << 19) | (X5 >> 45);
#line 873
    X5 ^= X4;
#line 873
    X6 += X7;
#line 873
    X7 = (X7 << 37) | (X7 >> 27);
#line 873
    X7 ^= X6;
#line 873
    X2 += X1;
#line 873
    X1 = (X1 << 33) | (X1 >> 31);
#line 873
    X1 ^= X2;
#line 873
    X4 += X7;
#line 873
    X7 = (X7 << 27) | (X7 >> 37);
#line 873
    X7 ^= X4;
#line 873
    X6 += X5;
#line 873
    X5 = (X5 << 14) | (X5 >> 50);
#line 873
    X5 ^= X6;
#line 873
    X0 += X3;
#line 873
    X3 = (X3 << 42) | (X3 >> 22);
#line 873
    X3 ^= X0;
#line 873
    X4 += X1;
#line 873
    X1 = (X1 << 17) | (X1 >> 47);
#line 873
    X1 ^= X4;
#line 873
    X6 += X3;
#line 873
    X3 = (X3 << 49) | (X3 >> 15);
#line 873
    X3 ^= X6;
#line 873
    X0 += X5;
#line 873
    X5 = (X5 << 36) | (X5 >> 28);
#line 873
    X5 ^= X0;
#line 873
    X2 += X7;
#line 873
    X7 = (X7 << 39) | (X7 >> 25);
#line 873
    X7 ^= X2;
#line 873
    X6 += X1;
#line 873
    X1 = (X1 << 44) | (X1 >> 20);
#line 873
    X1 ^= X6;
#line 873
    X0 += X7;
#line 873
    X7 = (X7 << 9) | (X7 >> 55);
#line 873
    X7 ^= X0;
#line 873
    X2 += X5;
#line 873
    X5 = (X5 << 54) | (X5 >> 10);
#line 873
    X5 ^= X2;
#line 873
    X4 += X3;
#line 873
    X3 = (X3 << 56) | (X3 >> 8);
#line 873
    X3 ^= X4;
#line 873
    X0 += *((kw + 3) + 4);
#line 873
    X1 += *((kw + 3) + 5);
#line 873
    X2 += *((kw + 3) + 6);
#line 873
    X3 += *((kw + 3) + 7);
#line 873
    X4 += *((kw + 3) + 8);
#line 873
    X5 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 873
    X6 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 873
    X7 += (*((kw + 3) + 2) + 12ULL) + 1ULL;
#line 873
    X0 += X1;
#line 873
    X1 = (X1 << 39) | (X1 >> 25);
#line 873
    X1 ^= X0;
#line 873
    X2 += X3;
#line 873
    X3 = (X3 << 30) | (X3 >> 34);
#line 873
    X3 ^= X2;
#line 873
    X4 += X5;
#line 873
    X5 = (X5 << 34) | (X5 >> 30);
#line 873
    X5 ^= X4;
#line 873
    X6 += X7;
#line 873
    X7 = (X7 << 24) | (X7 >> 40);
#line 873
    X7 ^= X6;
#line 873
    X2 += X1;
#line 873
    X1 = (X1 << 13) | (X1 >> 51);
#line 873
    X1 ^= X2;
#line 873
    X4 += X7;
#line 873
    X7 = (X7 << 50) | (X7 >> 14);
#line 873
    X7 ^= X4;
#line 873
    X6 += X5;
#line 873
    X5 = (X5 << 10) | (X5 >> 54);
#line 873
    X5 ^= X6;
#line 873
    X0 += X3;
#line 873
    X3 = (X3 << 17) | (X3 >> 47);
#line 873
    X3 ^= X0;
#line 873
    X4 += X1;
#line 873
    X1 = (X1 << 25) | (X1 >> 39);
#line 873
    X1 ^= X4;
#line 873
    X6 += X3;
#line 873
    X3 = (X3 << 29) | (X3 >> 35);
#line 873
    X3 ^= X6;
#line 873
    X0 += X5;
#line 873
    X5 = (X5 << 39) | (X5 >> 25);
#line 873
    X5 ^= X0;
#line 873
    X2 += X7;
#line 873
    X7 = (X7 << 43) | (X7 >> 21);
#line 873
    X7 ^= X2;
#line 873
    X6 += X1;
#line 873
    X1 = (X1 << 8) | (X1 >> 56);
#line 873
    X1 ^= X6;
#line 873
    X0 += X7;
#line 873
    X7 = (X7 << 35) | (X7 >> 29);
#line 873
    X7 ^= X0;
#line 873
    X2 += X5;
#line 873
    X5 = (X5 << 56) | (X5 >> 8);
#line 873
    X5 ^= X2;
#line 873
    X4 += X3;
#line 873
    X3 = (X3 << 22) | (X3 >> 42);
#line 873
    X3 ^= X4;
#line 873
    X0 += *((kw + 3) + 5);
#line 873
    X1 += *((kw + 3) + 6);
#line 873
    X2 += *((kw + 3) + 7);
#line 873
    X3 += *((kw + 3) + 8);
#line 873
    X4 += *((kw + 3) + 0);
#line 873
    X5 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 873
    X6 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 873
    X7 += (*((kw + 3) + 3) + 13ULL) + 1ULL;
#line 876
    X0 += X1;
#line 876
    X1 = (X1 << 46) | (X1 >> 18);
#line 876
    X1 ^= X0;
#line 876
    X2 += X3;
#line 876
    X3 = (X3 << 36) | (X3 >> 28);
#line 876
    X3 ^= X2;
#line 876
    X4 += X5;
#line 876
    X5 = (X5 << 19) | (X5 >> 45);
#line 876
    X5 ^= X4;
#line 876
    X6 += X7;
#line 876
    X7 = (X7 << 37) | (X7 >> 27);
#line 876
    X7 ^= X6;
#line 876
    X2 += X1;
#line 876
    X1 = (X1 << 33) | (X1 >> 31);
#line 876
    X1 ^= X2;
#line 876
    X4 += X7;
#line 876
    X7 = (X7 << 27) | (X7 >> 37);
#line 876
    X7 ^= X4;
#line 876
    X6 += X5;
#line 876
    X5 = (X5 << 14) | (X5 >> 50);
#line 876
    X5 ^= X6;
#line 876
    X0 += X3;
#line 876
    X3 = (X3 << 42) | (X3 >> 22);
#line 876
    X3 ^= X0;
#line 876
    X4 += X1;
#line 876
    X1 = (X1 << 17) | (X1 >> 47);
#line 876
    X1 ^= X4;
#line 876
    X6 += X3;
#line 876
    X3 = (X3 << 49) | (X3 >> 15);
#line 876
    X3 ^= X6;
#line 876
    X0 += X5;
#line 876
    X5 = (X5 << 36) | (X5 >> 28);
#line 876
    X5 ^= X0;
#line 876
    X2 += X7;
#line 876
    X7 = (X7 << 39) | (X7 >> 25);
#line 876
    X7 ^= X2;
#line 876
    X6 += X1;
#line 876
    X1 = (X1 << 44) | (X1 >> 20);
#line 876
    X1 ^= X6;
#line 876
    X0 += X7;
#line 876
    X7 = (X7 << 9) | (X7 >> 55);
#line 876
    X7 ^= X0;
#line 876
    X2 += X5;
#line 876
    X5 = (X5 << 54) | (X5 >> 10);
#line 876
    X5 ^= X2;
#line 876
    X4 += X3;
#line 876
    X3 = (X3 << 56) | (X3 >> 8);
#line 876
    X3 ^= X4;
#line 876
    X0 += *((kw + 3) + 6);
#line 876
    X1 += *((kw + 3) + 7);
#line 876
    X2 += *((kw + 3) + 8);
#line 876
    X3 += *((kw + 3) + 0);
#line 876
    X4 += *((kw + 3) + 1);
#line 876
    X5 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 876
    X6 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 876
    X7 += (*((kw + 3) + 4) + 14ULL) + 1ULL;
#line 876
    X0 += X1;
#line 876
    X1 = (X1 << 39) | (X1 >> 25);
#line 876
    X1 ^= X0;
#line 876
    X2 += X3;
#line 876
    X3 = (X3 << 30) | (X3 >> 34);
#line 876
    X3 ^= X2;
#line 876
    X4 += X5;
#line 876
    X5 = (X5 << 34) | (X5 >> 30);
#line 876
    X5 ^= X4;
#line 876
    X6 += X7;
#line 876
    X7 = (X7 << 24) | (X7 >> 40);
#line 876
    X7 ^= X6;
#line 876
    X2 += X1;
#line 876
    X1 = (X1 << 13) | (X1 >> 51);
#line 876
    X1 ^= X2;
#line 876
    X4 += X7;
#line 876
    X7 = (X7 << 50) | (X7 >> 14);
#line 876
    X7 ^= X4;
#line 876
    X6 += X5;
#line 876
    X5 = (X5 << 10) | (X5 >> 54);
#line 876
    X5 ^= X6;
#line 876
    X0 += X3;
#line 876
    X3 = (X3 << 17) | (X3 >> 47);
#line 876
    X3 ^= X0;
#line 876
    X4 += X1;
#line 876
    X1 = (X1 << 25) | (X1 >> 39);
#line 876
    X1 ^= X4;
#line 876
    X6 += X3;
#line 876
    X3 = (X3 << 29) | (X3 >> 35);
#line 876
    X3 ^= X6;
#line 876
    X0 += X5;
#line 876
    X5 = (X5 << 39) | (X5 >> 25);
#line 876
    X5 ^= X0;
#line 876
    X2 += X7;
#line 876
    X7 = (X7 << 43) | (X7 >> 21);
#line 876
    X7 ^= X2;
#line 876
    X6 += X1;
#line 876
    X1 = (X1 << 8) | (X1 >> 56);
#line 876
    X1 ^= X6;
#line 876
    X0 += X7;
#line 876
    X7 = (X7 << 35) | (X7 >> 29);
#line 876
    X7 ^= X0;
#line 876
    X2 += X5;
#line 876
    X5 = (X5 << 56) | (X5 >> 8);
#line 876
    X5 ^= X2;
#line 876
    X4 += X3;
#line 876
    X3 = (X3 << 22) | (X3 >> 42);
#line 876
    X3 ^= X4;
#line 876
    X0 += *((kw + 3) + 7);
#line 876
    X1 += *((kw + 3) + 8);
#line 876
    X2 += *((kw + 3) + 0);
#line 876
    X3 += *((kw + 3) + 1);
#line 876
    X4 += *((kw + 3) + 2);
#line 876
    X5 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 876
    X6 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 876
    X7 += (*((kw + 3) + 5) + 15ULL) + 1ULL;
#line 879
    X0 += X1;
#line 879
    X1 = (X1 << 46) | (X1 >> 18);
#line 879
    X1 ^= X0;
#line 879
    X2 += X3;
#line 879
    X3 = (X3 << 36) | (X3 >> 28);
#line 879
    X3 ^= X2;
#line 879
    X4 += X5;
#line 879
    X5 = (X5 << 19) | (X5 >> 45);
#line 879
    X5 ^= X4;
#line 879
    X6 += X7;
#line 879
    X7 = (X7 << 37) | (X7 >> 27);
#line 879
    X7 ^= X6;
#line 879
    X2 += X1;
#line 879
    X1 = (X1 << 33) | (X1 >> 31);
#line 879
    X1 ^= X2;
#line 879
    X4 += X7;
#line 879
    X7 = (X7 << 27) | (X7 >> 37);
#line 879
    X7 ^= X4;
#line 879
    X6 += X5;
#line 879
    X5 = (X5 << 14) | (X5 >> 50);
#line 879
    X5 ^= X6;
#line 879
    X0 += X3;
#line 879
    X3 = (X3 << 42) | (X3 >> 22);
#line 879
    X3 ^= X0;
#line 879
    X4 += X1;
#line 879
    X1 = (X1 << 17) | (X1 >> 47);
#line 879
    X1 ^= X4;
#line 879
    X6 += X3;
#line 879
    X3 = (X3 << 49) | (X3 >> 15);
#line 879
    X3 ^= X6;
#line 879
    X0 += X5;
#line 879
    X5 = (X5 << 36) | (X5 >> 28);
#line 879
    X5 ^= X0;
#line 879
    X2 += X7;
#line 879
    X7 = (X7 << 39) | (X7 >> 25);
#line 879
    X7 ^= X2;
#line 879
    X6 += X1;
#line 879
    X1 = (X1 << 44) | (X1 >> 20);
#line 879
    X1 ^= X6;
#line 879
    X0 += X7;
#line 879
    X7 = (X7 << 9) | (X7 >> 55);
#line 879
    X7 ^= X0;
#line 879
    X2 += X5;
#line 879
    X5 = (X5 << 54) | (X5 >> 10);
#line 879
    X5 ^= X2;
#line 879
    X4 += X3;
#line 879
    X3 = (X3 << 56) | (X3 >> 8);
#line 879
    X3 ^= X4;
#line 879
    X0 += *((kw + 3) + 8);
#line 879
    X1 += *((kw + 3) + 0);
#line 879
    X2 += *((kw + 3) + 1);
#line 879
    X3 += *((kw + 3) + 2);
#line 879
    X4 += *((kw + 3) + 3);
#line 879
    X5 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 879
    X6 += *((kw + 3) + 5) + *((kw + 0) + 0);
#line 879
    X7 += (*((kw + 3) + 6) + 16ULL) + 1ULL;
#line 879
    X0 += X1;
#line 879
    X1 = (X1 << 39) | (X1 >> 25);
#line 879
    X1 ^= X0;
#line 879
    X2 += X3;
#line 879
    X3 = (X3 << 30) | (X3 >> 34);
#line 879
    X3 ^= X2;
#line 879
    X4 += X5;
#line 879
    X5 = (X5 << 34) | (X5 >> 30);
#line 879
    X5 ^= X4;
#line 879
    X6 += X7;
#line 879
    X7 = (X7 << 24) | (X7 >> 40);
#line 879
    X7 ^= X6;
#line 879
    X2 += X1;
#line 879
    X1 = (X1 << 13) | (X1 >> 51);
#line 879
    X1 ^= X2;
#line 879
    X4 += X7;
#line 879
    X7 = (X7 << 50) | (X7 >> 14);
#line 879
    X7 ^= X4;
#line 879
    X6 += X5;
#line 879
    X5 = (X5 << 10) | (X5 >> 54);
#line 879
    X5 ^= X6;
#line 879
    X0 += X3;
#line 879
    X3 = (X3 << 17) | (X3 >> 47);
#line 879
    X3 ^= X0;
#line 879
    X4 += X1;
#line 879
    X1 = (X1 << 25) | (X1 >> 39);
#line 879
    X1 ^= X4;
#line 879
    X6 += X3;
#line 879
    X3 = (X3 << 29) | (X3 >> 35);
#line 879
    X3 ^= X6;
#line 879
    X0 += X5;
#line 879
    X5 = (X5 << 39) | (X5 >> 25);
#line 879
    X5 ^= X0;
#line 879
    X2 += X7;
#line 879
    X7 = (X7 << 43) | (X7 >> 21);
#line 879
    X7 ^= X2;
#line 879
    X6 += X1;
#line 879
    X1 = (X1 << 8) | (X1 >> 56);
#line 879
    X1 ^= X6;
#line 879
    X0 += X7;
#line 879
    X7 = (X7 << 35) | (X7 >> 29);
#line 879
    X7 ^= X0;
#line 879
    X2 += X5;
#line 879
    X5 = (X5 << 56) | (X5 >> 8);
#line 879
    X5 ^= X2;
#line 879
    X4 += X3;
#line 879
    X3 = (X3 << 22) | (X3 >> 42);
#line 879
    X3 ^= X4;
#line 879
    X0 += *((kw + 3) + 0);
#line 879
    X1 += *((kw + 3) + 1);
#line 879
    X2 += *((kw + 3) + 2);
#line 879
    X3 += *((kw + 3) + 3);
#line 879
    X4 += *((kw + 3) + 4);
#line 879
    X5 += *((kw + 3) + 5) + *((kw + 0) + 0);
#line 879
    X6 += *((kw + 3) + 6) + *((kw + 0) + 1);
#line 879
    X7 += (*((kw + 3) + 7) + 17ULL) + 1ULL;
#line 905
    ctx->X[0] = X0 ^ w[0];
#line 906
    ctx->X[1] = X1 ^ w[1];
#line 907
    ctx->X[2] = X2 ^ w[2];
#line 908
    ctx->X[3] = X3 ^ w[3];
#line 909
    ctx->X[4] = X4 ^ w[4];
#line 910
    ctx->X[5] = X5 ^ w[5];
#line 911
    ctx->X[6] = X6 ^ w[6];
#line 912
    ctx->X[7] = X7 ^ w[7];
#line 915
    *((kw + 0) + 1) &= ~ (1ULL << 62);
#line 764
    blkCnt --;
#line 764
    if (! blkCnt) {
#line 764
      break;
    }
  }
#line 918
  ctx->h.T[0] = *((kw + 0) + 0);
#line 919
  ctx->h.T[1] = *((kw + 0) + 1);
#line 920
  return;
}
}
#line 937 "skein.c"
static void Skein1024_Process_Block(Skein1024_Ctxt_t *ctx , u08b_t const   *blkPtr ,
                                    size_t blkCnt , size_t byteCntAdd ) 
{ 
  size_t r___0 ;
  u64b_t kw[40] ;
  u64b_t X00 ;
  u64b_t X01 ;
  u64b_t X02 ;
  u64b_t X03 ;
  u64b_t X04 ;
  u64b_t X05 ;
  u64b_t X06 ;
  u64b_t X07 ;
  u64b_t X08 ;
  u64b_t X09 ;
  u64b_t X10 ;
  u64b_t X11 ;
  u64b_t X12 ;
  u64b_t X13 ;
  u64b_t X14 ;
  u64b_t X15 ;
  u64b_t w[16] ;

  {
#line 974
  *((kw + 0) + 0) = ctx->h.T[0];
#line 975
  *((kw + 0) + 1) = ctx->h.T[1];
#line 976
  while (1) {
#line 978
    *((kw + 0) + 0) += (u64b_t )byteCntAdd;
#line 981
    *((kw + 3) + 0) = ctx->X[0];
#line 982
    *((kw + 3) + 1) = ctx->X[1];
#line 983
    *((kw + 3) + 2) = ctx->X[2];
#line 984
    *((kw + 3) + 3) = ctx->X[3];
#line 985
    *((kw + 3) + 4) = ctx->X[4];
#line 986
    *((kw + 3) + 5) = ctx->X[5];
#line 987
    *((kw + 3) + 6) = ctx->X[6];
#line 988
    *((kw + 3) + 7) = ctx->X[7];
#line 989
    *((kw + 3) + 8) = ctx->X[8];
#line 990
    *((kw + 3) + 9) = ctx->X[9];
#line 991
    *((kw + 3) + 10) = ctx->X[10];
#line 992
    *((kw + 3) + 11) = ctx->X[11];
#line 993
    *((kw + 3) + 12) = ctx->X[12];
#line 994
    *((kw + 3) + 13) = ctx->X[13];
#line 995
    *((kw + 3) + 14) = ctx->X[14];
#line 996
    *((kw + 3) + 15) = ctx->X[15];
#line 997
    *((kw + 3) + 16) = (((((((((((((((*((kw + 3) + 0) ^ *((kw + 3) + 1)) ^ *((kw + 3) + 2)) ^ *((kw + 3) + 3)) ^ *((kw + 3) + 4)) ^ *((kw + 3) + 5)) ^ *((kw + 3) + 6)) ^ *((kw + 3) + 7)) ^ *((kw + 3) + 8)) ^ *((kw + 3) + 9)) ^ *((kw + 3) + 10)) ^ *((kw + 3) + 11)) ^ *((kw + 3) + 12)) ^ *((kw + 3) + 13)) ^ *((kw + 3) + 14)) ^ *((kw + 3) + 15)) ^ (2851871266ULL + (466688986ULL << 32));
#line 1002
    *((kw + 0) + 2) = *((kw + 0) + 0) ^ *((kw + 0) + 1);
#line 1004
    Skein_Get64_LSB_First(w, blkPtr, (size_t )16);
#line 1008
    X00 = w[0] + *((kw + 3) + 0);
#line 1009
    X01 = w[1] + *((kw + 3) + 1);
#line 1010
    X02 = w[2] + *((kw + 3) + 2);
#line 1011
    X03 = w[3] + *((kw + 3) + 3);
#line 1012
    X04 = w[4] + *((kw + 3) + 4);
#line 1013
    X05 = w[5] + *((kw + 3) + 5);
#line 1014
    X06 = w[6] + *((kw + 3) + 6);
#line 1015
    X07 = w[7] + *((kw + 3) + 7);
#line 1016
    X08 = w[8] + *((kw + 3) + 8);
#line 1017
    X09 = w[9] + *((kw + 3) + 9);
#line 1018
    X10 = w[10] + *((kw + 3) + 10);
#line 1019
    X11 = w[11] + *((kw + 3) + 11);
#line 1020
    X12 = w[12] + *((kw + 3) + 12);
#line 1021
    X13 = (w[13] + *((kw + 3) + 13)) + *((kw + 0) + 0);
#line 1022
    X14 = (w[14] + *((kw + 3) + 14)) + *((kw + 0) + 1);
#line 1023
    X15 = w[15] + *((kw + 3) + 15);
#line 1086
    r___0 = (size_t )1;
#line 1086
    while (r___0 <= 20UL) {
#line 1101
      X00 += X01;
#line 1101
      X01 = (X01 << 24) | (X01 >> 40);
#line 1101
      X01 ^= X00;
#line 1101
      X02 += X03;
#line 1101
      X03 = (X03 << 13) | (X03 >> 51);
#line 1101
      X03 ^= X02;
#line 1101
      X04 += X05;
#line 1101
      X05 = (X05 << 8) | (X05 >> 56);
#line 1101
      X05 ^= X04;
#line 1101
      X06 += X07;
#line 1101
      X07 = (X07 << 47) | (X07 >> 17);
#line 1101
      X07 ^= X06;
#line 1101
      X08 += X09;
#line 1101
      X09 = (X09 << 8) | (X09 >> 56);
#line 1101
      X09 ^= X08;
#line 1101
      X10 += X11;
#line 1101
      X11 = (X11 << 17) | (X11 >> 47);
#line 1101
      X11 ^= X10;
#line 1101
      X12 += X13;
#line 1101
      X13 = (X13 << 22) | (X13 >> 42);
#line 1101
      X13 ^= X12;
#line 1101
      X14 += X15;
#line 1101
      X15 = (X15 << 37) | (X15 >> 27);
#line 1101
      X15 ^= X14;
#line 1101
      X00 += X09;
#line 1101
      X09 = (X09 << 38) | (X09 >> 26);
#line 1101
      X09 ^= X00;
#line 1101
      X02 += X13;
#line 1101
      X13 = (X13 << 19) | (X13 >> 45);
#line 1101
      X13 ^= X02;
#line 1101
      X06 += X11;
#line 1101
      X11 = (X11 << 10) | (X11 >> 54);
#line 1101
      X11 ^= X06;
#line 1101
      X04 += X15;
#line 1101
      X15 = (X15 << 55) | (X15 >> 9);
#line 1101
      X15 ^= X04;
#line 1101
      X10 += X07;
#line 1101
      X07 = (X07 << 49) | (X07 >> 15);
#line 1101
      X07 ^= X10;
#line 1101
      X12 += X03;
#line 1101
      X03 = (X03 << 18) | (X03 >> 46);
#line 1101
      X03 ^= X12;
#line 1101
      X14 += X05;
#line 1101
      X05 = (X05 << 23) | (X05 >> 41);
#line 1101
      X05 ^= X14;
#line 1101
      X08 += X01;
#line 1101
      X01 = (X01 << 52) | (X01 >> 12);
#line 1101
      X01 ^= X08;
#line 1101
      X00 += X07;
#line 1101
      X07 = (X07 << 33) | (X07 >> 31);
#line 1101
      X07 ^= X00;
#line 1101
      X02 += X05;
#line 1101
      X05 = (X05 << 4) | (X05 >> 60);
#line 1101
      X05 ^= X02;
#line 1101
      X04 += X03;
#line 1101
      X03 = (X03 << 51) | (X03 >> 13);
#line 1101
      X03 ^= X04;
#line 1101
      X06 += X01;
#line 1101
      X01 = (X01 << 13) | (X01 >> 51);
#line 1101
      X01 ^= X06;
#line 1101
      X12 += X15;
#line 1101
      X15 = (X15 << 34) | (X15 >> 30);
#line 1101
      X15 ^= X12;
#line 1101
      X14 += X13;
#line 1101
      X13 = (X13 << 41) | (X13 >> 23);
#line 1101
      X13 ^= X14;
#line 1101
      X08 += X11;
#line 1101
      X11 = (X11 << 59) | (X11 >> 5);
#line 1101
      X11 ^= X08;
#line 1101
      X10 += X09;
#line 1101
      X09 = (X09 << 17) | (X09 >> 47);
#line 1101
      X09 ^= X10;
#line 1101
      X00 += X15;
#line 1101
      X15 = (X15 << 5) | (X15 >> 59);
#line 1101
      X15 ^= X00;
#line 1101
      X02 += X11;
#line 1101
      X11 = (X11 << 20) | (X11 >> 44);
#line 1101
      X11 ^= X02;
#line 1101
      X06 += X13;
#line 1101
      X13 = (X13 << 48) | (X13 >> 16);
#line 1101
      X13 ^= X06;
#line 1101
      X04 += X09;
#line 1101
      X09 = (X09 << 41) | (X09 >> 23);
#line 1101
      X09 ^= X04;
#line 1101
      X14 += X01;
#line 1101
      X01 = (X01 << 47) | (X01 >> 17);
#line 1101
      X01 ^= X14;
#line 1101
      X08 += X05;
#line 1101
      X05 = (X05 << 28) | (X05 >> 36);
#line 1101
      X05 ^= X08;
#line 1101
      X10 += X03;
#line 1101
      X03 = (X03 << 16) | (X03 >> 48);
#line 1101
      X03 ^= X10;
#line 1101
      X12 += X07;
#line 1101
      X07 = (X07 << 25) | (X07 >> 39);
#line 1101
      X07 ^= X12;
#line 1101
      X00 += *((kw + 3) + r___0);
#line 1101
      X01 += *((kw + 3) + (r___0 + 1UL));
#line 1101
      X02 += *((kw + 3) + (r___0 + 2UL));
#line 1101
      X03 += *((kw + 3) + (r___0 + 3UL));
#line 1101
      X04 += *((kw + 3) + (r___0 + 4UL));
#line 1101
      X05 += *((kw + 3) + (r___0 + 5UL));
#line 1101
      X06 += *((kw + 3) + (r___0 + 6UL));
#line 1101
      X07 += *((kw + 3) + (r___0 + 7UL));
#line 1101
      X08 += *((kw + 3) + (r___0 + 8UL));
#line 1101
      X09 += *((kw + 3) + (r___0 + 9UL));
#line 1101
      X10 += *((kw + 3) + (r___0 + 10UL));
#line 1101
      X11 += *((kw + 3) + (r___0 + 11UL));
#line 1101
      X12 += *((kw + 3) + (r___0 + 12UL));
#line 1101
      X13 += *((kw + 3) + (r___0 + 13UL)) + *((kw + 0) + r___0);
#line 1101
      X14 += *((kw + 3) + (r___0 + 14UL)) + *((kw + 0) + (r___0 + 1UL));
#line 1101
      X15 += *((kw + 3) + (r___0 + 15UL)) + (u64b_t )r___0;
#line 1101
      *((kw + 3) + (r___0 + 16UL)) = *((kw + 3) + (r___0 - 1UL));
#line 1101
      *((kw + 0) + (r___0 + 2UL)) = *((kw + 0) + (r___0 - 1UL));
#line 1101
      X00 += X01;
#line 1101
      X01 = (X01 << 41) | (X01 >> 23);
#line 1101
      X01 ^= X00;
#line 1101
      X02 += X03;
#line 1101
      X03 = (X03 << 9) | (X03 >> 55);
#line 1101
      X03 ^= X02;
#line 1101
      X04 += X05;
#line 1101
      X05 = (X05 << 37) | (X05 >> 27);
#line 1101
      X05 ^= X04;
#line 1101
      X06 += X07;
#line 1101
      X07 = (X07 << 31) | (X07 >> 33);
#line 1101
      X07 ^= X06;
#line 1101
      X08 += X09;
#line 1101
      X09 = (X09 << 12) | (X09 >> 52);
#line 1101
      X09 ^= X08;
#line 1101
      X10 += X11;
#line 1101
      X11 = (X11 << 47) | (X11 >> 17);
#line 1101
      X11 ^= X10;
#line 1101
      X12 += X13;
#line 1101
      X13 = (X13 << 44) | (X13 >> 20);
#line 1101
      X13 ^= X12;
#line 1101
      X14 += X15;
#line 1101
      X15 = (X15 << 30) | (X15 >> 34);
#line 1101
      X15 ^= X14;
#line 1101
      X00 += X09;
#line 1101
      X09 = (X09 << 16) | (X09 >> 48);
#line 1101
      X09 ^= X00;
#line 1101
      X02 += X13;
#line 1101
      X13 = (X13 << 34) | (X13 >> 30);
#line 1101
      X13 ^= X02;
#line 1101
      X06 += X11;
#line 1101
      X11 = (X11 << 56) | (X11 >> 8);
#line 1101
      X11 ^= X06;
#line 1101
      X04 += X15;
#line 1101
      X15 = (X15 << 51) | (X15 >> 13);
#line 1101
      X15 ^= X04;
#line 1101
      X10 += X07;
#line 1101
      X07 = (X07 << 4) | (X07 >> 60);
#line 1101
      X07 ^= X10;
#line 1101
      X12 += X03;
#line 1101
      X03 = (X03 << 53) | (X03 >> 11);
#line 1101
      X03 ^= X12;
#line 1101
      X14 += X05;
#line 1101
      X05 = (X05 << 42) | (X05 >> 22);
#line 1101
      X05 ^= X14;
#line 1101
      X08 += X01;
#line 1101
      X01 = (X01 << 41) | (X01 >> 23);
#line 1101
      X01 ^= X08;
#line 1101
      X00 += X07;
#line 1101
      X07 = (X07 << 31) | (X07 >> 33);
#line 1101
      X07 ^= X00;
#line 1101
      X02 += X05;
#line 1101
      X05 = (X05 << 44) | (X05 >> 20);
#line 1101
      X05 ^= X02;
#line 1101
      X04 += X03;
#line 1101
      X03 = (X03 << 47) | (X03 >> 17);
#line 1101
      X03 ^= X04;
#line 1101
      X06 += X01;
#line 1101
      X01 = (X01 << 46) | (X01 >> 18);
#line 1101
      X01 ^= X06;
#line 1101
      X12 += X15;
#line 1101
      X15 = (X15 << 19) | (X15 >> 45);
#line 1101
      X15 ^= X12;
#line 1101
      X14 += X13;
#line 1101
      X13 = (X13 << 42) | (X13 >> 22);
#line 1101
      X13 ^= X14;
#line 1101
      X08 += X11;
#line 1101
      X11 = (X11 << 44) | (X11 >> 20);
#line 1101
      X11 ^= X08;
#line 1101
      X10 += X09;
#line 1101
      X09 = (X09 << 25) | (X09 >> 39);
#line 1101
      X09 ^= X10;
#line 1101
      X00 += X15;
#line 1101
      X15 = (X15 << 9) | (X15 >> 55);
#line 1101
      X15 ^= X00;
#line 1101
      X02 += X11;
#line 1101
      X11 = (X11 << 48) | (X11 >> 16);
#line 1101
      X11 ^= X02;
#line 1101
      X06 += X13;
#line 1101
      X13 = (X13 << 35) | (X13 >> 29);
#line 1101
      X13 ^= X06;
#line 1101
      X04 += X09;
#line 1101
      X09 = (X09 << 52) | (X09 >> 12);
#line 1101
      X09 ^= X04;
#line 1101
      X14 += X01;
#line 1101
      X01 = (X01 << 23) | (X01 >> 41);
#line 1101
      X01 ^= X14;
#line 1101
      X08 += X05;
#line 1101
      X05 = (X05 << 31) | (X05 >> 33);
#line 1101
      X05 ^= X08;
#line 1101
      X10 += X03;
#line 1101
      X03 = (X03 << 37) | (X03 >> 27);
#line 1101
      X03 ^= X10;
#line 1101
      X12 += X07;
#line 1101
      X07 = (X07 << 20) | (X07 >> 44);
#line 1101
      X07 ^= X12;
#line 1101
      X00 += *((kw + 3) + (r___0 + 1UL));
#line 1101
      X01 += *((kw + 3) + ((r___0 + 1UL) + 1UL));
#line 1101
      X02 += *((kw + 3) + ((r___0 + 1UL) + 2UL));
#line 1101
      X03 += *((kw + 3) + ((r___0 + 1UL) + 3UL));
#line 1101
      X04 += *((kw + 3) + ((r___0 + 1UL) + 4UL));
#line 1101
      X05 += *((kw + 3) + ((r___0 + 1UL) + 5UL));
#line 1101
      X06 += *((kw + 3) + ((r___0 + 1UL) + 6UL));
#line 1101
      X07 += *((kw + 3) + ((r___0 + 1UL) + 7UL));
#line 1101
      X08 += *((kw + 3) + ((r___0 + 1UL) + 8UL));
#line 1101
      X09 += *((kw + 3) + ((r___0 + 1UL) + 9UL));
#line 1101
      X10 += *((kw + 3) + ((r___0 + 1UL) + 10UL));
#line 1101
      X11 += *((kw + 3) + ((r___0 + 1UL) + 11UL));
#line 1101
      X12 += *((kw + 3) + ((r___0 + 1UL) + 12UL));
#line 1101
      X13 += *((kw + 3) + ((r___0 + 1UL) + 13UL)) + *((kw + 0) + (r___0 + 1UL));
#line 1101
      X14 += *((kw + 3) + ((r___0 + 1UL) + 14UL)) + *((kw + 0) + ((r___0 + 1UL) + 1UL));
#line 1101
      X15 += (*((kw + 3) + ((r___0 + 1UL) + 15UL)) + (u64b_t )r___0) + 1ULL;
#line 1101
      *((kw + 3) + ((r___0 + 1UL) + 16UL)) = *((kw + 3) + ((r___0 + 1UL) - 1UL));
#line 1101
      *((kw + 0) + ((r___0 + 1UL) + 2UL)) = *((kw + 0) + ((r___0 + 1UL) - 1UL));
#line 1086
      r___0 += 2UL;
    }
#line 1153
    ctx->X[0] = X00 ^ w[0];
#line 1154
    ctx->X[1] = X01 ^ w[1];
#line 1155
    ctx->X[2] = X02 ^ w[2];
#line 1156
    ctx->X[3] = X03 ^ w[3];
#line 1157
    ctx->X[4] = X04 ^ w[4];
#line 1158
    ctx->X[5] = X05 ^ w[5];
#line 1159
    ctx->X[6] = X06 ^ w[6];
#line 1160
    ctx->X[7] = X07 ^ w[7];
#line 1161
    ctx->X[8] = X08 ^ w[8];
#line 1162
    ctx->X[9] = X09 ^ w[9];
#line 1163
    ctx->X[10] = X10 ^ w[10];
#line 1164
    ctx->X[11] = X11 ^ w[11];
#line 1165
    ctx->X[12] = X12 ^ w[12];
#line 1166
    ctx->X[13] = X13 ^ w[13];
#line 1167
    ctx->X[14] = X14 ^ w[14];
#line 1168
    ctx->X[15] = X15 ^ w[15];
#line 1172
    *((kw + 0) + 1) &= ~ (1ULL << 62);
#line 1173
    blkPtr += 128;
#line 976
    blkCnt --;
#line 976
    if (! blkCnt) {
#line 976
      break;
    }
  }
#line 1176
  ctx->h.T[0] = *((kw + 0) + 0);
#line 1177
  ctx->h.T[1] = *((kw + 0) + 1);
#line 1178
  return;
}
}
#line 1304 "skein.c"
static int Skein_256_Update(Skein_256_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) 
{ 
  size_t n ;

  {
#line 1311
  if (msgByteCnt + ctx->h.bCnt > 32UL) {
#line 1313
    if (ctx->h.bCnt) {
#line 1315
      n = 32UL - ctx->h.bCnt;
#line 1316
      if (n) {
#line 1319
        memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
               n);
#line 1320
        msgByteCnt -= n;
#line 1321
        msg += n;
#line 1322
        ctx->h.bCnt += n;
      }
#line 1325
      Skein_256_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, (size_t )32);
#line 1326
      ctx->h.bCnt = (size_t )0;
    }
#line 1329
    if (msgByteCnt > 32UL) {
#line 1331
      n = (msgByteCnt - 1UL) / 32UL;
#line 1332
      Skein_256_Process_Block(ctx, msg, n, (size_t )32);
#line 1333
      msgByteCnt -= n * 32UL;
#line 1334
      msg += n * 32UL;
    }
  }
#line 1340
  if (msgByteCnt) {
#line 1343
    memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
           msgByteCnt);
#line 1344
    ctx->h.bCnt += msgByteCnt;
  }
#line 1347
  return (0);
}
}
#line 1352 "skein.c"
static int Skein_256_Final(Skein_256_Ctxt_t *ctx , u08b_t *hashVal ) 
{ 
  size_t i ;
  size_t n ;
  size_t byteCnt ;
  u64b_t X[4] ;

  {
#line 1358
  ctx->h.T[1] |= 1ULL << 63;
#line 1359
  if (ctx->h.bCnt < 32UL) {
#line 1360
    memset((void *)(& ctx->b[ctx->h.bCnt]), 0, 32UL - ctx->h.bCnt);
  }
#line 1362
  Skein_256_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, ctx->h.bCnt);
#line 1365
  byteCnt = (ctx->h.hashBitLen + 7UL) >> 3;
#line 1368
  memset((void *)(ctx->b), 0, sizeof(ctx->b));
#line 1369
  memcpy((void * __restrict  )(X), (void const   * __restrict  )(ctx->X), sizeof(X));
#line 1370
  i = (size_t )0;
#line 1370
  while (i < byteCnt) {
#line 1372
    *((u64b_t *)(ctx->b) + 0) = (((((((((u64b_t )i & 255ULL) << 56) | ((((u64b_t )i >> 8) & 255ULL) << 48)) | ((((u64b_t )i >> 16) & 255ULL) << 40)) | ((((u64b_t )i >> 24) & 255ULL) << 32)) | ((((u64b_t )i >> 32) & 255ULL) << 24)) | ((((u64b_t )i >> 40) & 255ULL) << 16)) | ((((u64b_t )i >> 48) & 255ULL) << 8)) | (((u64b_t )i >> 56) & 255ULL);
#line 1373
    ctx->h.T[0] = (u64b_t )0;
#line 1373
    ctx->h.T[1] = (1ULL << 62) | ((63ULL << 56) | (1ULL << 63));
#line 1373
    ctx->h.bCnt = (size_t )0;
#line 1374
    Skein_256_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, sizeof(u64b_t ));
#line 1375
    n = byteCnt - i;
#line 1376
    if (n >= 32UL) {
#line 1377
      n = (size_t )32;
    }
#line 1378
    Skein_Put64_LSB_First(hashVal + i, (u64b_t const   *)(ctx->X), n);
#line 1380
    memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(X), sizeof(X));
#line 1370
    i += 32UL;
  }
#line 1382
  return (0);
}
}
#line 1399 "skein.c"
static int Skein_512_Init(Skein_512_Ctxt_t *ctx , size_t hashBitLen ) 
{ 
  union __anonunion_cfg_200192499 cfg ;

  {
#line 1408
  ctx->h.hashBitLen = hashBitLen;
#line 1410
  switch (hashBitLen) {
  case 512UL: 
#line 1413
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN_512_IV_512),
         sizeof(ctx->X));
#line 1413
  break;
  case 384UL: 
#line 1414
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN_512_IV_384),
         sizeof(ctx->X));
#line 1414
  break;
  case 256UL: 
#line 1415
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN_512_IV_256),
         sizeof(ctx->X));
#line 1415
  break;
  case 224UL: 
#line 1416
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN_512_IV_224),
         sizeof(ctx->X));
#line 1416
  break;
  default: 
#line 1421
  ctx->h.T[0] = (u64b_t )0;
#line 1421
  ctx->h.T[1] = (1ULL << 62) | ((4ULL << 56) | (1ULL << 63));
#line 1421
  ctx->h.bCnt = (size_t )0;
#line 1423
  cfg.w[0] = (((((((((859916371ULL + (1ULL << 32)) & 255ULL) << 56) | ((((859916371ULL + (1ULL << 32)) >> 8) & 255ULL) << 48)) | ((((859916371ULL + (1ULL << 32)) >> 16) & 255ULL) << 40)) | ((((859916371ULL + (1ULL << 32)) >> 24) & 255ULL) << 32)) | ((((859916371ULL + (1ULL << 32)) >> 32) & 255ULL) << 24)) | ((((859916371ULL + (1ULL << 32)) >> 40) & 255ULL) << 16)) | ((((859916371ULL + (1ULL << 32)) >> 48) & 255ULL) << 8)) | (((859916371ULL + (1ULL << 32)) >> 56) & 255ULL);
#line 1424
  cfg.w[1] = (((((((((u64b_t )hashBitLen & 255ULL) << 56) | ((((u64b_t )hashBitLen >> 8) & 255ULL) << 48)) | ((((u64b_t )hashBitLen >> 16) & 255ULL) << 40)) | ((((u64b_t )hashBitLen >> 24) & 255ULL) << 32)) | ((((u64b_t )hashBitLen >> 32) & 255ULL) << 24)) | ((((u64b_t )hashBitLen >> 40) & 255ULL) << 16)) | ((((u64b_t )hashBitLen >> 48) & 255ULL) << 8)) | (((u64b_t )hashBitLen >> 56) & 255ULL);
#line 1425
  cfg.w[2] = 0ULL;
#line 1426
  memset((void *)(& cfg.w[3]), 0, sizeof(cfg) - 3UL * sizeof(cfg.w[0]));
#line 1429
  memset((void *)(ctx->X), 0, sizeof(ctx->X));
#line 1430
  Skein_512_Process_Block(ctx, (u08b_t const   *)(cfg.b), (size_t )1, (size_t )32);
#line 1431
  break;
  }
#line 1436
  ctx->h.T[0] = (u64b_t )0;
#line 1436
  ctx->h.T[1] = (1ULL << 62) | (48ULL << 56);
#line 1436
  ctx->h.bCnt = (size_t )0;
#line 1438
  return (0);
}
}
#line 1504 "skein.c"
static int Skein_512_Update(Skein_512_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) 
{ 
  size_t n ;

  {
#line 1511
  if (msgByteCnt + ctx->h.bCnt > 64UL) {
#line 1513
    if (ctx->h.bCnt) {
#line 1515
      n = 64UL - ctx->h.bCnt;
#line 1516
      if (n) {
#line 1519
        memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
               n);
#line 1520
        msgByteCnt -= n;
#line 1521
        msg += n;
#line 1522
        ctx->h.bCnt += n;
      }
#line 1525
      Skein_512_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, (size_t )64);
#line 1526
      ctx->h.bCnt = (size_t )0;
    }
#line 1529
    if (msgByteCnt > 64UL) {
#line 1531
      n = (msgByteCnt - 1UL) / 64UL;
#line 1532
      Skein_512_Process_Block(ctx, msg, n, (size_t )64);
#line 1533
      msgByteCnt -= n * 64UL;
#line 1534
      msg += n * 64UL;
    }
  }
#line 1540
  if (msgByteCnt) {
#line 1543
    memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
           msgByteCnt);
#line 1544
    ctx->h.bCnt += msgByteCnt;
  }
#line 1547
  return (0);
}
}
#line 1552 "skein.c"
static int Skein_512_Final(Skein_512_Ctxt_t *ctx , u08b_t *hashVal ) 
{ 
  size_t i ;
  size_t n ;
  size_t byteCnt ;
  u64b_t X[8] ;

  {
#line 1558
  ctx->h.T[1] |= 1ULL << 63;
#line 1559
  if (ctx->h.bCnt < 64UL) {
#line 1560
    memset((void *)(& ctx->b[ctx->h.bCnt]), 0, 64UL - ctx->h.bCnt);
  }
#line 1562
  Skein_512_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, ctx->h.bCnt);
#line 1565
  byteCnt = (ctx->h.hashBitLen + 7UL) >> 3;
#line 1568
  memset((void *)(ctx->b), 0, sizeof(ctx->b));
#line 1569
  memcpy((void * __restrict  )(X), (void const   * __restrict  )(ctx->X), sizeof(X));
#line 1570
  i = (size_t )0;
#line 1570
  while (i * 64UL < byteCnt) {
#line 1572
    *((u64b_t *)(ctx->b) + 0) = (((((((((u64b_t )i & 255ULL) << 56) | ((((u64b_t )i >> 8) & 255ULL) << 48)) | ((((u64b_t )i >> 16) & 255ULL) << 40)) | ((((u64b_t )i >> 24) & 255ULL) << 32)) | ((((u64b_t )i >> 32) & 255ULL) << 24)) | ((((u64b_t )i >> 40) & 255ULL) << 16)) | ((((u64b_t )i >> 48) & 255ULL) << 8)) | (((u64b_t )i >> 56) & 255ULL);
#line 1573
    ctx->h.T[0] = (u64b_t )0;
#line 1573
    ctx->h.T[1] = (1ULL << 62) | ((63ULL << 56) | (1ULL << 63));
#line 1573
    ctx->h.bCnt = (size_t )0;
#line 1574
    Skein_512_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, sizeof(u64b_t ));
#line 1575
    n = byteCnt - i * 64UL;
#line 1576
    if (n >= 64UL) {
#line 1577
      n = (size_t )64;
    }
#line 1578
    Skein_Put64_LSB_First(hashVal + i * 64UL, (u64b_t const   *)(ctx->X), n);
#line 1580
    memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(X), sizeof(X));
#line 1570
    i ++;
  }
#line 1582
  return (0);
}
}
#line 1598 "skein.c"
static int Skein1024_Init(Skein1024_Ctxt_t *ctx , size_t hashBitLen ) 
{ 
  union __anonunion_cfg_200192500 cfg ;

  {
#line 1607
  ctx->h.hashBitLen = hashBitLen;
#line 1609
  switch (hashBitLen) {
  case 512UL: 
#line 1612
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN1024_IV_512),
         sizeof(ctx->X));
#line 1612
  break;
  case 384UL: 
#line 1613
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN1024_IV_384),
         sizeof(ctx->X));
#line 1613
  break;
  case 1024UL: 
#line 1614
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN1024_IV_1024),
         sizeof(ctx->X));
#line 1614
  break;
  default: 
#line 1619
  ctx->h.T[0] = (u64b_t )0;
#line 1619
  ctx->h.T[1] = (1ULL << 62) | ((4ULL << 56) | (1ULL << 63));
#line 1619
  ctx->h.bCnt = (size_t )0;
#line 1621
  cfg.w[0] = (((((((((859916371ULL + (1ULL << 32)) & 255ULL) << 56) | ((((859916371ULL + (1ULL << 32)) >> 8) & 255ULL) << 48)) | ((((859916371ULL + (1ULL << 32)) >> 16) & 255ULL) << 40)) | ((((859916371ULL + (1ULL << 32)) >> 24) & 255ULL) << 32)) | ((((859916371ULL + (1ULL << 32)) >> 32) & 255ULL) << 24)) | ((((859916371ULL + (1ULL << 32)) >> 40) & 255ULL) << 16)) | ((((859916371ULL + (1ULL << 32)) >> 48) & 255ULL) << 8)) | (((859916371ULL + (1ULL << 32)) >> 56) & 255ULL);
#line 1622
  cfg.w[1] = (((((((((u64b_t )hashBitLen & 255ULL) << 56) | ((((u64b_t )hashBitLen >> 8) & 255ULL) << 48)) | ((((u64b_t )hashBitLen >> 16) & 255ULL) << 40)) | ((((u64b_t )hashBitLen >> 24) & 255ULL) << 32)) | ((((u64b_t )hashBitLen >> 32) & 255ULL) << 24)) | ((((u64b_t )hashBitLen >> 40) & 255ULL) << 16)) | ((((u64b_t )hashBitLen >> 48) & 255ULL) << 8)) | (((u64b_t )hashBitLen >> 56) & 255ULL);
#line 1623
  cfg.w[2] = 0ULL;
#line 1624
  memset((void *)(& cfg.w[3]), 0, sizeof(cfg) - 3UL * sizeof(cfg.w[0]));
#line 1627
  memset((void *)(ctx->X), 0, sizeof(ctx->X));
#line 1628
  Skein1024_Process_Block(ctx, (u08b_t const   *)(cfg.b), (size_t )1, (size_t )32);
#line 1629
  break;
  }
#line 1634
  ctx->h.T[0] = (u64b_t )0;
#line 1634
  ctx->h.T[1] = (1ULL << 62) | (48ULL << 56);
#line 1634
  ctx->h.bCnt = (size_t )0;
#line 1636
  return (0);
}
}
#line 1702 "skein.c"
static int Skein1024_Update(Skein1024_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) 
{ 
  size_t n ;

  {
#line 1709
  if (msgByteCnt + ctx->h.bCnt > 128UL) {
#line 1711
    if (ctx->h.bCnt) {
#line 1713
      n = 128UL - ctx->h.bCnt;
#line 1714
      if (n) {
#line 1717
        memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
               n);
#line 1718
        msgByteCnt -= n;
#line 1719
        msg += n;
#line 1720
        ctx->h.bCnt += n;
      }
#line 1723
      Skein1024_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, (size_t )128);
#line 1724
      ctx->h.bCnt = (size_t )0;
    }
#line 1727
    if (msgByteCnt > 128UL) {
#line 1729
      n = (msgByteCnt - 1UL) / 128UL;
#line 1730
      Skein1024_Process_Block(ctx, msg, n, (size_t )128);
#line 1731
      msgByteCnt -= n * 128UL;
#line 1732
      msg += n * 128UL;
    }
  }
#line 1738
  if (msgByteCnt) {
#line 1741
    memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
           msgByteCnt);
#line 1742
    ctx->h.bCnt += msgByteCnt;
  }
#line 1745
  return (0);
}
}
#line 1750 "skein.c"
static int Skein1024_Final(Skein1024_Ctxt_t *ctx , u08b_t *hashVal ) 
{ 
  size_t i ;
  size_t n ;
  size_t byteCnt ;
  u64b_t X[16] ;

  {
#line 1756
  ctx->h.T[1] |= 1ULL << 63;
#line 1757
  if (ctx->h.bCnt < 128UL) {
#line 1758
    memset((void *)(& ctx->b[ctx->h.bCnt]), 0, 128UL - ctx->h.bCnt);
  }
#line 1760
  Skein1024_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, ctx->h.bCnt);
#line 1763
  byteCnt = (ctx->h.hashBitLen + 7UL) >> 3;
#line 1766
  memset((void *)(ctx->b), 0, sizeof(ctx->b));
#line 1767
  memcpy((void * __restrict  )(X), (void const   * __restrict  )(ctx->X), sizeof(X));
#line 1768
  i = (size_t )0;
#line 1768
  while (i * 128UL < byteCnt) {
#line 1770
    *((u64b_t *)(ctx->b) + 0) = (((((((((u64b_t )i & 255ULL) << 56) | ((((u64b_t )i >> 8) & 255ULL) << 48)) | ((((u64b_t )i >> 16) & 255ULL) << 40)) | ((((u64b_t )i >> 24) & 255ULL) << 32)) | ((((u64b_t )i >> 32) & 255ULL) << 24)) | ((((u64b_t )i >> 40) & 255ULL) << 16)) | ((((u64b_t )i >> 48) & 255ULL) << 8)) | (((u64b_t )i >> 56) & 255ULL);
#line 1771
    ctx->h.T[0] = (u64b_t )0;
#line 1771
    ctx->h.T[1] = (1ULL << 62) | ((63ULL << 56) | (1ULL << 63));
#line 1771
    ctx->h.bCnt = (size_t )0;
#line 1772
    Skein1024_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, sizeof(u64b_t ));
#line 1773
    n = byteCnt - i * 128UL;
#line 1774
    if (n >= 128UL) {
#line 1775
      n = (size_t )128;
    }
#line 1776
    Skein_Put64_LSB_First(hashVal + i * 128UL, (u64b_t const   *)(ctx->X), n);
#line 1778
    memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(X), sizeof(X));
#line 1768
    i ++;
  }
#line 1780
  return (0);
}
}
#line 1948
static SkeinHashReturn Init___1(hashState___0 *state , int hashbitlen ) ;
#line 1949
static SkeinHashReturn Update___1(hashState___0 *state , SkeinBitSequence const   *data ,
                                  size_t databitlen ) ;
#line 1950
static SkeinHashReturn Final___1(hashState___0 *state , SkeinBitSequence *hashval ) ;
#line 1954 "skein.c"
static SkeinHashReturn Init___1(hashState___0 *state , int hashbitlen ) 
{ 
  int tmp ;
  int tmp___0 ;

  {
#line 1964
  if (hashbitlen <= 512) {
#line 1966
    state->statebits = (uint_t )512;
#line 1967
    tmp = Skein_512_Init(& state->u.ctx_512, (size_t )hashbitlen);
#line 1967
    return ((SkeinHashReturn )tmp);
  } else {
#line 1971
    state->statebits = (uint_t )1024;
#line 1972
    tmp___0 = Skein1024_Init(& state->u.ctx1024, (size_t )hashbitlen);
#line 1972
    return ((SkeinHashReturn )tmp___0);
  }
}
}
#line 1978 "skein.c"
static SkeinHashReturn Update___1(hashState___0 *state , SkeinBitSequence const   *data ,
                                  size_t databitlen ) 
{ 
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  size_t bCnt ;
  u08b_t b ;
  u08b_t mask ;

  {
#line 1984
  if ((databitlen & 7UL) == 0UL) {
#line 1986
    switch ((state->statebits >> 8) & 3U) {
    case 2U: 
#line 1988
    tmp = Skein_512_Update(& state->u.ctx_512, data, databitlen >> 3);
#line 1988
    return ((SkeinHashReturn )tmp);
    case 1U: 
#line 1989
    tmp___0 = Skein_256_Update(& state->u.ctx_256, data, databitlen >> 3);
#line 1989
    return ((SkeinHashReturn )tmp___0);
    case 0U: 
#line 1990
    tmp___1 = Skein1024_Update(& state->u.ctx1024, data, databitlen >> 3);
#line 1990
    return ((SkeinHashReturn )tmp___1);
    default: 
#line 1991
    return ((SkeinHashReturn )1);
    }
  } else {
#line 1996
    bCnt = (databitlen >> 3) + 1UL;
#line 1999
    mask = (u08b_t )(1U << (7UL - (databitlen & 7UL)));
#line 2000
    b = (u08b_t )(((int const   )*(data + (bCnt - 1UL)) & (int const   )(0 - (int )mask)) | (int const   )mask);
#line 2002
    switch ((state->statebits >> 8) & 3U) {
    case 2U: 
#line 2004
    Skein_512_Update(& state->u.ctx_512, data, bCnt - 1UL);
#line 2005
    Skein_512_Update(& state->u.ctx_512, (u08b_t const   *)(& b), (size_t )1);
#line 2006
    break;
    case 1U: 
#line 2007
    Skein_256_Update(& state->u.ctx_256, data, bCnt - 1UL);
#line 2008
    Skein_256_Update(& state->u.ctx_256, (u08b_t const   *)(& b), (size_t )1);
#line 2009
    break;
    case 0U: 
#line 2010
    Skein1024_Update(& state->u.ctx1024, data, bCnt - 1UL);
#line 2011
    Skein1024_Update(& state->u.ctx1024, (u08b_t const   *)(& b), (size_t )1);
#line 2012
    break;
    default: 
#line 2013
    return ((SkeinHashReturn )1);
    }
#line 2015
    state->u.h.T[1] |= 1ULL << 55;
#line 2017
    return ((SkeinHashReturn )0);
  }
}
}
#line 2023 "skein.c"
static SkeinHashReturn Final___1(hashState___0 *state , SkeinBitSequence *hashval ) 
{ 
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
#line 2026
  switch ((state->statebits >> 8) & 3U) {
  case 2U: 
#line 2028
  tmp = Skein_512_Final(& state->u.ctx_512, hashval);
#line 2028
  return ((SkeinHashReturn )tmp);
  case 1U: 
#line 2029
  tmp___0 = Skein_256_Final(& state->u.ctx_256, hashval);
#line 2029
  return ((SkeinHashReturn )tmp___0);
  case 0U: 
#line 2030
  tmp___1 = Skein1024_Final(& state->u.ctx1024, hashval);
#line 2030
  return ((SkeinHashReturn )tmp___1);
  default: 
#line 2031
  return ((SkeinHashReturn )1);
  }
}
}
#line 2037 "skein.c"
enum __anonenum_SkeinHashReturn_432432649 skein(int hashbitlen , SkeinBitSequence const   *data ,
                                                size_t databitlen , SkeinBitSequence *hashval ) 
{ 
  hashState___0 state ;
  SkeinHashReturn r___0 ;
  SkeinHashReturn tmp ;

  {
#line 2041
  tmp = Init___1(& state, hashbitlen);
#line 2041
  r___0 = tmp;
#line 2042
  if ((unsigned int )r___0 == 0U) {
#line 2044
    r___0 = Update___1(& state, data, databitlen);
#line 2045
    Final___1(& state, hashval);
  }
#line 2047
  return (r___0);
}
}
