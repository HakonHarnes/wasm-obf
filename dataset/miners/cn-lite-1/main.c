int main(){}
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
#line 139 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef unsigned long size_t;
#line 410
struct __locale_struct ;
#line 410 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __locale_struct *locale_t;
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
#line 100 "./oaes_lib.h"
typedef uint16_t OAES_OPTION;
#line 102 "./oaes_lib.h"
struct _oaes_key {
   size_t data_len ;
   uint8_t *data ;
   size_t exp_data_len ;
   uint8_t *exp_data ;
   size_t num_keys ;
   size_t key_base ;
};
#line 102 "./oaes_lib.h"
typedef struct _oaes_key oaes_key;
#line 111 "./oaes_lib.h"
struct _oaes_ctx {
   oaes_key *key ;
   OAES_OPTION options ;
   uint8_t iv[16] ;
};
#line 111 "./oaes_lib.h"
typedef struct _oaes_ctx oaes_ctx;
#line 75 "cryptonight.c"
#pragma pack(push,1)
#line 76 "cryptonight.c"
union hash_state {
   uint8_t b[200] ;
   uint64_t w[25] ;
};
#line 80
#pragma pack(pop)
#line 82
#pragma pack(push,1)
#line 83 "cryptonight.c"
struct __anonstruct____missing_field_name_569059773 {
   uint8_t k[64] ;
   uint8_t init[128] ;
};
#line 83 "cryptonight.c"
union cn_slow_hash_state {
   union hash_state hs ;
   struct __anonstruct____missing_field_name_569059773 __annonCompField1 ;
};
#line 90
#pragma pack(pop)
#line 16 "groestl.c"
typedef unsigned char BitSequence;
#line 17 "groestl.c"
typedef unsigned long long DataLength;
#line 18
enum __anonenum_HashReturn_168286652 {
    SUCCESS = 0,
    FAIL = 1,
    BAD_HASHLEN = 2
} ;
#line 18 "groestl.c"
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
#line 36 "jh_ansi_opt64.c"
struct __anonstruct_hashState_550063874 {
   int hashbitlen ;
   unsigned long long databitlen ;
   unsigned long long datasize_in_buffer ;
   uint64 x[8][2]  __attribute__((__aligned__(16))) ;
   unsigned char buffer[64] ;
};
#line 36 "jh_ansi_opt64.c"
typedef struct __anonstruct_hashState_550063874 hashState;
#line 85 "keccak.c"
typedef uint64_t state_t[25];
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
#line 11 "./cryptonight.h"
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
struct __anonstruct_pthread_attr_t_778203665 {
   union __anonunion___u_898357595 __u ;
   char const   *_a_transferredcanvases ;
};
#line 92 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_attr_t_778203665 pthread_attr_t;
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_546072648 {
   int __i[6] ;
   int volatile   __vi[6] ;
   void volatile   *__p[6] ;
};
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_mutex_t_1068617698 {
   union __anonunion___u_546072648 __u ;
};
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_mutex_t_1068617698 pthread_mutex_t;
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_357071066 {
   int __i[12] ;
   int volatile   __vi[12] ;
   void *__p[12] ;
};
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_cond_t_183033632 {
   union __anonunion___u_357071066 __u ;
};
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_cond_t_183033632 pthread_cond_t;
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_906349300 {
   int __i[8] ;
   int volatile   __vi[8] ;
   void *__p[8] ;
};
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_rwlock_t_906349299 {
   union __anonunion___u_906349300 __u ;
};
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_rwlock_t_906349299 pthread_rwlock_t;
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_906349301 {
   int __i[5] ;
   int volatile   __vi[5] ;
   void *__p[5] ;
};
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_barrier_t_683752485 {
   union __anonunion___u_906349301 __u ;
};
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_barrier_t_683752485 pthread_barrier_t;
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
#line 63 "./skein_port.h"
typedef unsigned int uint_t;
#line 64 "./skein_port.h"
typedef uint8_t u08b_t;
#line 65 "./skein_port.h"
typedef uint64_t u64b_t;
#line 18 "skein.c"
enum __anonenum_SkeinHashReturn_432432649 {
    SKEIN_SUCCESS = 0,
    SKEIN_FAIL = 1,
    SKEIN_BAD_HASHLEN = 2
} ;
#line 18 "skein.c"
typedef enum __anonenum_SkeinHashReturn_432432649 SkeinHashReturn;
#line 25 "skein.c"
typedef u08b_t SkeinBitSequence;
#line 61 "skein.c"
struct __anonstruct_Skein_Ctxt_Hdr_t_294318545 {
   size_t hashBitLen ;
   size_t bCnt ;
   u64b_t T[2] ;
};
#line 61 "skein.c"
typedef struct __anonstruct_Skein_Ctxt_Hdr_t_294318545 Skein_Ctxt_Hdr_t;
#line 67 "skein.c"
struct __anonstruct_Skein_256_Ctxt_t_613066829 {
   Skein_Ctxt_Hdr_t h ;
   u64b_t X[4] ;
   u08b_t b[32] ;
};
#line 67 "skein.c"
typedef struct __anonstruct_Skein_256_Ctxt_t_613066829 Skein_256_Ctxt_t;
#line 74 "skein.c"
struct __anonstruct_Skein_512_Ctxt_t_613066830 {
   Skein_Ctxt_Hdr_t h ;
   u64b_t X[8] ;
   u08b_t b[64] ;
};
#line 74 "skein.c"
typedef struct __anonstruct_Skein_512_Ctxt_t_613066830 Skein_512_Ctxt_t;
#line 81 "skein.c"
struct __anonstruct_Skein1024_Ctxt_t_613066831 {
   Skein_Ctxt_Hdr_t h ;
   u64b_t X[16] ;
   u08b_t b[128] ;
};
#line 81 "skein.c"
typedef struct __anonstruct_Skein1024_Ctxt_t_613066831 Skein1024_Ctxt_t;
#line 318
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
#line 589
enum __anonenum_816264633 {
    WCNT = 4
} ;
#line 781
enum __anonenum_816264634 {
    WCNT___0 = 8
} ;
#line 1003
enum __anonenum_816264635 {
    WCNT___1 = 16
} ;
#line 1503 "skein.c"
union __anonunion_cfg_200192499 {
   u08b_t b[64] ;
   u64b_t w[8] ;
};
#line 1711 "skein.c"
union __anonunion_cfg_200192500 {
   u08b_t b[128] ;
   u64b_t w[16] ;
};
#line 2052 "skein.c"
union __anonunion_u_1050245620 {
   Skein_Ctxt_Hdr_t h ;
   Skein_256_Ctxt_t ctx_256 ;
   Skein_512_Ctxt_t ctx_512 ;
   Skein1024_Ctxt_t ctx1024 ;
};
#line 2052 "skein.c"
struct __anonstruct_hashState_302362330 {
   uint_t statebits ;
   union __anonunion_u_1050245620 u ;
};
#line 2052 "skein.c"
typedef struct __anonstruct_hashState_302362330 hashState___0;
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
#line 1 "cil-ZwCslC3P.o"
#pragma merger("0","/tmp/cil-PsfOtluT.i","")
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
#line 35 "blake.c"
uint8_t const   sigma[14][16]  = 
#line 35 "blake.c"
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
#line 56 "blake.c"
static uint8_t const   padding[64]  = 
#line 56
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
#line 61 "blake.c"
void blake256_compress(state *S , uint8_t const   *block ) 
{ 
  uint32_t v[16] ;
  uint32_t m[16] ;
  uint32_t i ;

  {
#line 75
  i = (uint32_t )0;
#line 75
  while (i < 16U) {
#line 76
    m[i] = ((((uint32_t )*((block + i * 4U) + 0) << 24) | ((uint32_t )*((block + i * 4U) + 1) << 16)) | ((uint32_t )*((block + i * 4U) + 2) << 8)) | (uint32_t )*((block + i * 4U) + 3);
#line 75
    i ++;
  }
#line 77
  i = (uint32_t )0;
#line 77
  while (i < 8U) {
#line 78
    v[i] = S->h[i];
#line 77
    i ++;
  }
#line 79
  v[8] = S->s[0] ^ 608135816U;
#line 80
  v[9] = S->s[1] ^ 2242054355U;
#line 81
  v[10] = S->s[2] ^ 320440878U;
#line 82
  v[11] = S->s[3] ^ 57701188U;
#line 83
  v[12] = 2752067618U;
#line 84
  v[13] = (uint32_t )698298832;
#line 85
  v[14] = (uint32_t )137296536;
#line 86
  v[15] = 3964562569U;
#line 88
  if (S->nullt == 0) {
#line 89
    v[12] ^= S->t[0];
#line 90
    v[13] ^= S->t[0];
#line 91
    v[14] ^= S->t[1];
#line 92
    v[15] ^= S->t[1];
  }
#line 95
  i = (uint32_t )0;
#line 95
  while (i < 14U) {
#line 96
    v[0] += (m[sigma[i][0]] ^ (unsigned int )cst[sigma[i][1]]) + v[4];
#line 96
    v[12] = ((v[12] ^ v[0]) << 16) | ((v[12] ^ v[0]) >> 16);
#line 96
    v[8] += v[12];
#line 96
    v[4] = ((v[4] ^ v[8]) << 20) | ((v[4] ^ v[8]) >> 12);
#line 96
    v[0] += (m[sigma[i][1]] ^ (unsigned int )cst[sigma[i][0]]) + v[4];
#line 96
    v[12] = ((v[12] ^ v[0]) << 24) | ((v[12] ^ v[0]) >> 8);
#line 96
    v[8] += v[12];
#line 96
    v[4] = ((v[4] ^ v[8]) << 25) | ((v[4] ^ v[8]) >> 7);
#line 97
    v[1] += (m[sigma[i][2]] ^ (unsigned int )cst[sigma[i][3]]) + v[5];
#line 97
    v[13] = ((v[13] ^ v[1]) << 16) | ((v[13] ^ v[1]) >> 16);
#line 97
    v[9] += v[13];
#line 97
    v[5] = ((v[5] ^ v[9]) << 20) | ((v[5] ^ v[9]) >> 12);
#line 97
    v[1] += (m[sigma[i][3]] ^ (unsigned int )cst[sigma[i][2]]) + v[5];
#line 97
    v[13] = ((v[13] ^ v[1]) << 24) | ((v[13] ^ v[1]) >> 8);
#line 97
    v[9] += v[13];
#line 97
    v[5] = ((v[5] ^ v[9]) << 25) | ((v[5] ^ v[9]) >> 7);
#line 98
    v[2] += (m[sigma[i][4]] ^ (unsigned int )cst[sigma[i][5]]) + v[6];
#line 98
    v[14] = ((v[14] ^ v[2]) << 16) | ((v[14] ^ v[2]) >> 16);
#line 98
    v[10] += v[14];
#line 98
    v[6] = ((v[6] ^ v[10]) << 20) | ((v[6] ^ v[10]) >> 12);
#line 98
    v[2] += (m[sigma[i][5]] ^ (unsigned int )cst[sigma[i][4]]) + v[6];
#line 98
    v[14] = ((v[14] ^ v[2]) << 24) | ((v[14] ^ v[2]) >> 8);
#line 98
    v[10] += v[14];
#line 98
    v[6] = ((v[6] ^ v[10]) << 25) | ((v[6] ^ v[10]) >> 7);
#line 99
    v[3] += (m[sigma[i][6]] ^ (unsigned int )cst[sigma[i][7]]) + v[7];
#line 99
    v[15] = ((v[15] ^ v[3]) << 16) | ((v[15] ^ v[3]) >> 16);
#line 99
    v[11] += v[15];
#line 99
    v[7] = ((v[7] ^ v[11]) << 20) | ((v[7] ^ v[11]) >> 12);
#line 99
    v[3] += (m[sigma[i][7]] ^ (unsigned int )cst[sigma[i][6]]) + v[7];
#line 99
    v[15] = ((v[15] ^ v[3]) << 24) | ((v[15] ^ v[3]) >> 8);
#line 99
    v[11] += v[15];
#line 99
    v[7] = ((v[7] ^ v[11]) << 25) | ((v[7] ^ v[11]) >> 7);
#line 100
    v[3] += (m[sigma[i][14]] ^ (unsigned int )cst[sigma[i][15]]) + v[4];
#line 100
    v[14] = ((v[14] ^ v[3]) << 16) | ((v[14] ^ v[3]) >> 16);
#line 100
    v[9] += v[14];
#line 100
    v[4] = ((v[4] ^ v[9]) << 20) | ((v[4] ^ v[9]) >> 12);
#line 100
    v[3] += (m[sigma[i][15]] ^ (unsigned int )cst[sigma[i][14]]) + v[4];
#line 100
    v[14] = ((v[14] ^ v[3]) << 24) | ((v[14] ^ v[3]) >> 8);
#line 100
    v[9] += v[14];
#line 100
    v[4] = ((v[4] ^ v[9]) << 25) | ((v[4] ^ v[9]) >> 7);
#line 101
    v[2] += (m[sigma[i][12]] ^ (unsigned int )cst[sigma[i][13]]) + v[7];
#line 101
    v[13] = ((v[13] ^ v[2]) << 16) | ((v[13] ^ v[2]) >> 16);
#line 101
    v[8] += v[13];
#line 101
    v[7] = ((v[7] ^ v[8]) << 20) | ((v[7] ^ v[8]) >> 12);
#line 101
    v[2] += (m[sigma[i][13]] ^ (unsigned int )cst[sigma[i][12]]) + v[7];
#line 101
    v[13] = ((v[13] ^ v[2]) << 24) | ((v[13] ^ v[2]) >> 8);
#line 101
    v[8] += v[13];
#line 101
    v[7] = ((v[7] ^ v[8]) << 25) | ((v[7] ^ v[8]) >> 7);
#line 102
    v[0] += (m[sigma[i][8]] ^ (unsigned int )cst[sigma[i][9]]) + v[5];
#line 102
    v[15] = ((v[15] ^ v[0]) << 16) | ((v[15] ^ v[0]) >> 16);
#line 102
    v[10] += v[15];
#line 102
    v[5] = ((v[5] ^ v[10]) << 20) | ((v[5] ^ v[10]) >> 12);
#line 102
    v[0] += (m[sigma[i][9]] ^ (unsigned int )cst[sigma[i][8]]) + v[5];
#line 102
    v[15] = ((v[15] ^ v[0]) << 24) | ((v[15] ^ v[0]) >> 8);
#line 102
    v[10] += v[15];
#line 102
    v[5] = ((v[5] ^ v[10]) << 25) | ((v[5] ^ v[10]) >> 7);
#line 103
    v[1] += (m[sigma[i][10]] ^ (unsigned int )cst[sigma[i][11]]) + v[6];
#line 103
    v[12] = ((v[12] ^ v[1]) << 16) | ((v[12] ^ v[1]) >> 16);
#line 103
    v[11] += v[12];
#line 103
    v[6] = ((v[6] ^ v[11]) << 20) | ((v[6] ^ v[11]) >> 12);
#line 103
    v[1] += (m[sigma[i][11]] ^ (unsigned int )cst[sigma[i][10]]) + v[6];
#line 103
    v[12] = ((v[12] ^ v[1]) << 24) | ((v[12] ^ v[1]) >> 8);
#line 103
    v[11] += v[12];
#line 103
    v[6] = ((v[6] ^ v[11]) << 25) | ((v[6] ^ v[11]) >> 7);
#line 95
    i ++;
  }
#line 106
  i = (uint32_t )0;
#line 106
  while (i < 16U) {
#line 107
    S->h[i % 8U] ^= v[i];
#line 106
    i ++;
  }
#line 108
  i = (uint32_t )0;
#line 108
  while (i < 8U) {
#line 109
    S->h[i] ^= S->s[i % 4U];
#line 108
    i ++;
  }
#line 110
  return;
}
}
#line 112 "blake.c"
void blake256_init(state *S ) 
{ 
  uint32_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  uint32_t tmp___2 ;
  uint32_t tmp___3 ;
  uint32_t tmp___4 ;

  {
#line 113
  S->h[0] = (uint32_t )1779033703;
#line 114
  S->h[1] = 3144134277U;
#line 115
  S->h[2] = (uint32_t )1013904242;
#line 116
  S->h[3] = 2773480762U;
#line 117
  S->h[4] = (uint32_t )1359893119;
#line 118
  S->h[5] = 2600822924U;
#line 119
  S->h[6] = (uint32_t )528734635;
#line 120
  S->h[7] = (uint32_t )1541459225;
#line 121
  tmp___1 = 0;
#line 121
  S->nullt = tmp___1;
#line 121
  tmp___0 = tmp___1;
#line 121
  S->buflen = tmp___0;
#line 121
  tmp = (uint32_t )tmp___0;
#line 121
  S->t[1] = tmp;
#line 121
  S->t[0] = tmp;
#line 122
  tmp___4 = (uint32_t )0;
#line 122
  S->s[3] = tmp___4;
#line 122
  tmp___3 = tmp___4;
#line 122
  S->s[2] = tmp___3;
#line 122
  tmp___2 = tmp___3;
#line 122
  S->s[1] = tmp___2;
#line 122
  S->s[0] = tmp___2;
#line 123
  return;
}
}
#line 125 "blake.c"
void blake224_init(state *S ) 
{ 
  uint32_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  uint32_t tmp___2 ;
  uint32_t tmp___3 ;
  uint32_t tmp___4 ;

  {
#line 126
  S->h[0] = 3238371032U;
#line 127
  S->h[1] = (uint32_t )914150663;
#line 128
  S->h[2] = (uint32_t )812702999;
#line 129
  S->h[3] = 4144912697U;
#line 130
  S->h[4] = 4290775857U;
#line 131
  S->h[5] = (uint32_t )1750603025;
#line 132
  S->h[6] = (uint32_t )1694076839;
#line 133
  S->h[7] = 3204075428U;
#line 134
  tmp___1 = 0;
#line 134
  S->nullt = tmp___1;
#line 134
  tmp___0 = tmp___1;
#line 134
  S->buflen = tmp___0;
#line 134
  tmp = (uint32_t )tmp___0;
#line 134
  S->t[1] = tmp;
#line 134
  S->t[0] = tmp;
#line 135
  tmp___4 = (uint32_t )0;
#line 135
  S->s[3] = tmp___4;
#line 135
  tmp___3 = tmp___4;
#line 135
  S->s[2] = tmp___3;
#line 135
  tmp___2 = tmp___3;
#line 135
  S->s[1] = tmp___2;
#line 135
  S->s[0] = tmp___2;
#line 136
  return;
}
}
#line 139 "blake.c"
void blake256_update(state *S , uint8_t const   *data , uint64_t datalen ) 
{ 
  int left ;
  int fill ;

  {
#line 140
  left = S->buflen >> 3;
#line 141
  fill = 64 - left;
#line 143
  if (left) {
#line 143
    if (((datalen >> 3) & 63ULL) >= (unsigned long long )((unsigned int )fill)) {
#line 144
      memcpy((void * __restrict  )((void *)(S->buf + left)), (void const   * __restrict  )((void *)data),
             (size_t )fill);
#line 145
      S->t[0] += 512U;
#line 146
      if (S->t[0] == 0U) {
#line 147
        (S->t[1]) ++;
      }
#line 148
      blake256_compress(S, (uint8_t const   *)(S->buf));
#line 149
      data += fill;
#line 150
      datalen -= (uint64_t )(fill << 3);
#line 151
      left = 0;
    }
  }
#line 154
  while (datalen >= 512ULL) {
#line 155
    S->t[0] += 512U;
#line 156
    if (S->t[0] == 0U) {
#line 157
      (S->t[1]) ++;
    }
#line 158
    blake256_compress(S, data);
#line 159
    data += 64;
#line 160
    datalen -= 512ULL;
  }
#line 163
  if (datalen > 0ULL) {
#line 164
    memcpy((void * __restrict  )((void *)(S->buf + left)), (void const   * __restrict  )((void *)data),
           (size_t )(datalen >> 3));
#line 165
    S->buflen = (int )((uint64_t )(left << 3) + datalen);
  } else {
#line 167
    S->buflen = 0;
  }
#line 169
  return;
}
}
#line 172 "blake.c"
void blake224_update(state *S , uint8_t const   *data , uint64_t datalen ) 
{ 


  {
#line 173
  blake256_update(S, data, datalen);
#line 174
  return;
}
}
#line 176 "blake.c"
void blake256_final_h(state *S , uint8_t *digest , uint8_t pa , uint8_t pb ) 
{ 
  uint8_t msglen[8] ;
  uint32_t lo ;
  uint32_t hi ;

  {
#line 178
  lo = S->t[0] + (uint32_t )S->buflen;
#line 178
  hi = S->t[1];
#line 179
  if (lo < (unsigned int )S->buflen) {
#line 180
    hi ++;
  }
#line 181
  *((msglen + 0) + 0) = (uint8_t )(hi >> 24);
#line 181
  *((msglen + 0) + 1) = (uint8_t )(hi >> 16);
#line 181
  *((msglen + 0) + 2) = (uint8_t )(hi >> 8);
#line 181
  *((msglen + 0) + 3) = (uint8_t )hi;
#line 182
  *((msglen + 4) + 0) = (uint8_t )(lo >> 24);
#line 182
  *((msglen + 4) + 1) = (uint8_t )(lo >> 16);
#line 182
  *((msglen + 4) + 2) = (uint8_t )(lo >> 8);
#line 182
  *((msglen + 4) + 3) = (uint8_t )lo;
#line 184
  if (S->buflen == 440) {
#line 185
    S->t[0] -= 8U;
#line 186
    blake256_update(S, (uint8_t const   *)(& pa), (uint64_t )8);
  } else {
#line 188
    if (S->buflen < 440) {
#line 189
      if (S->buflen == 0) {
#line 190
        S->nullt = 1;
      }
#line 191
      S->t[0] -= (uint32_t )(440 - S->buflen);
#line 192
      blake256_update(S, padding, (uint64_t )(440 - S->buflen));
    } else {
#line 194
      S->t[0] -= (uint32_t )(512 - S->buflen);
#line 195
      blake256_update(S, padding, (uint64_t )(512 - S->buflen));
#line 196
      S->t[0] -= 440U;
#line 197
      blake256_update(S, padding + 1, (uint64_t )440);
#line 198
      S->nullt = 1;
    }
#line 200
    blake256_update(S, (uint8_t const   *)(& pb), (uint64_t )8);
#line 201
    S->t[0] -= 8U;
  }
#line 203
  S->t[0] -= 64U;
#line 204
  blake256_update(S, (uint8_t const   *)(msglen), (uint64_t )64);
#line 206
  *((digest + 0) + 0) = (uint8_t )(S->h[0] >> 24);
#line 206
  *((digest + 0) + 1) = (uint8_t )(S->h[0] >> 16);
#line 206
  *((digest + 0) + 2) = (uint8_t )(S->h[0] >> 8);
#line 206
  *((digest + 0) + 3) = (uint8_t )S->h[0];
#line 207
  *((digest + 4) + 0) = (uint8_t )(S->h[1] >> 24);
#line 207
  *((digest + 4) + 1) = (uint8_t )(S->h[1] >> 16);
#line 207
  *((digest + 4) + 2) = (uint8_t )(S->h[1] >> 8);
#line 207
  *((digest + 4) + 3) = (uint8_t )S->h[1];
#line 208
  *((digest + 8) + 0) = (uint8_t )(S->h[2] >> 24);
#line 208
  *((digest + 8) + 1) = (uint8_t )(S->h[2] >> 16);
#line 208
  *((digest + 8) + 2) = (uint8_t )(S->h[2] >> 8);
#line 208
  *((digest + 8) + 3) = (uint8_t )S->h[2];
#line 209
  *((digest + 12) + 0) = (uint8_t )(S->h[3] >> 24);
#line 209
  *((digest + 12) + 1) = (uint8_t )(S->h[3] >> 16);
#line 209
  *((digest + 12) + 2) = (uint8_t )(S->h[3] >> 8);
#line 209
  *((digest + 12) + 3) = (uint8_t )S->h[3];
#line 210
  *((digest + 16) + 0) = (uint8_t )(S->h[4] >> 24);
#line 210
  *((digest + 16) + 1) = (uint8_t )(S->h[4] >> 16);
#line 210
  *((digest + 16) + 2) = (uint8_t )(S->h[4] >> 8);
#line 210
  *((digest + 16) + 3) = (uint8_t )S->h[4];
#line 211
  *((digest + 20) + 0) = (uint8_t )(S->h[5] >> 24);
#line 211
  *((digest + 20) + 1) = (uint8_t )(S->h[5] >> 16);
#line 211
  *((digest + 20) + 2) = (uint8_t )(S->h[5] >> 8);
#line 211
  *((digest + 20) + 3) = (uint8_t )S->h[5];
#line 212
  *((digest + 24) + 0) = (uint8_t )(S->h[6] >> 24);
#line 212
  *((digest + 24) + 1) = (uint8_t )(S->h[6] >> 16);
#line 212
  *((digest + 24) + 2) = (uint8_t )(S->h[6] >> 8);
#line 212
  *((digest + 24) + 3) = (uint8_t )S->h[6];
#line 213
  *((digest + 28) + 0) = (uint8_t )(S->h[7] >> 24);
#line 213
  *((digest + 28) + 1) = (uint8_t )(S->h[7] >> 16);
#line 213
  *((digest + 28) + 2) = (uint8_t )(S->h[7] >> 8);
#line 213
  *((digest + 28) + 3) = (uint8_t )S->h[7];
#line 214
  return;
}
}
#line 216 "blake.c"
void blake256_final(state *S , uint8_t *digest ) 
{ 


  {
#line 217
  blake256_final_h(S, digest, (uint8_t )129, (uint8_t )1);
#line 218
  return;
}
}
#line 220 "blake.c"
void blake224_final(state *S , uint8_t *digest ) 
{ 


  {
#line 221
  blake256_final_h(S, digest, (uint8_t )128, (uint8_t )0);
#line 222
  return;
}
}
#line 225 "blake.c"
void blake256_hash(uint8_t *out , uint8_t const   *in , uint64_t inlen ) 
{ 
  state S ;

  {
#line 227
  blake256_init(& S);
#line 228
  blake256_update(& S, in, inlen * 8ULL);
#line 229
  blake256_final(& S, out);
#line 230
  return;
}
}
#line 232 "blake.c"
void blake(uint8_t const   *input , uint64_t len , uint8_t *output___0 ) 
{ 


  {
#line 233
  blake256_hash(output___0, input, len);
#line 234
  return;
}
}
#line 237 "blake.c"
void blake224_hash(uint8_t *out , uint8_t const   *in , uint64_t inlen ) 
{ 
  state S ;

  {
#line 239
  blake224_init(& S);
#line 240
  blake224_update(& S, in, inlen * 8ULL);
#line 241
  blake224_final(& S, out);
#line 242
  return;
}
}
#line 245 "blake.c"
void hmac_blake256_init(hmac_state *S , uint8_t const   *_key , uint64_t keylen ) 
{ 
  uint8_t const   *key ;
  uint8_t keyhash[32] ;
  uint8_t pad[64] ;
  uint64_t i ;

  {
#line 246
  key = _key;
#line 251
  if (keylen > 64ULL) {
#line 252
    blake256_hash(keyhash, key, keylen);
#line 253
    key = (uint8_t const   *)(keyhash);
#line 254
    keylen = (uint64_t )32;
  }
#line 257
  blake256_init(& S->inner);
#line 258
  memset((void *)(pad), 54, (size_t )64);
#line 259
  i = (uint64_t )0;
#line 259
  while (i < keylen) {
#line 260
    pad[i] = (uint8_t )((int )pad[i] ^ (int )*(key + i));
#line 259
    i ++;
  }
#line 262
  blake256_update(& S->inner, (uint8_t const   *)(pad), (uint64_t )512);
#line 264
  blake256_init(& S->outer);
#line 265
  memset((void *)(pad), 92, (size_t )64);
#line 266
  i = (uint64_t )0;
#line 266
  while (i < keylen) {
#line 267
    pad[i] = (uint8_t )((int )pad[i] ^ (int )*(key + i));
#line 266
    i ++;
  }
#line 269
  blake256_update(& S->outer, (uint8_t const   *)(pad), (uint64_t )512);
#line 271
  memset((void *)(keyhash), 0, (size_t )32);
#line 272
  return;
}
}
#line 275 "blake.c"
void hmac_blake224_init(hmac_state *S , uint8_t const   *_key , uint64_t keylen ) 
{ 
  uint8_t const   *key ;
  uint8_t keyhash[32] ;
  uint8_t pad[64] ;
  uint64_t i ;

  {
#line 276
  key = _key;
#line 281
  if (keylen > 64ULL) {
#line 282
    blake256_hash(keyhash, key, keylen);
#line 283
    key = (uint8_t const   *)(keyhash);
#line 284
    keylen = (uint64_t )28;
  }
#line 287
  blake224_init(& S->inner);
#line 288
  memset((void *)(pad), 54, (size_t )64);
#line 289
  i = (uint64_t )0;
#line 289
  while (i < keylen) {
#line 290
    pad[i] = (uint8_t )((int )pad[i] ^ (int )*(key + i));
#line 289
    i ++;
  }
#line 292
  blake224_update(& S->inner, (uint8_t const   *)(pad), (uint64_t )512);
#line 294
  blake224_init(& S->outer);
#line 295
  memset((void *)(pad), 92, (size_t )64);
#line 296
  i = (uint64_t )0;
#line 296
  while (i < keylen) {
#line 297
    pad[i] = (uint8_t )((int )pad[i] ^ (int )*(key + i));
#line 296
    i ++;
  }
#line 299
  blake224_update(& S->outer, (uint8_t const   *)(pad), (uint64_t )512);
#line 301
  memset((void *)(keyhash), 0, (size_t )32);
#line 302
  return;
}
}
#line 305 "blake.c"
void hmac_blake256_update(hmac_state *S , uint8_t const   *data , uint64_t datalen ) 
{ 


  {
#line 308
  blake256_update(& S->inner, data, datalen);
#line 309
  return;
}
}
#line 312 "blake.c"
void hmac_blake224_update(hmac_state *S , uint8_t const   *data , uint64_t datalen ) 
{ 


  {
#line 315
  blake224_update(& S->inner, data, datalen);
#line 316
  return;
}
}
#line 318 "blake.c"
void hmac_blake256_final(hmac_state *S , uint8_t *digest ) 
{ 
  uint8_t ihash[32] ;

  {
#line 320
  blake256_final(& S->inner, ihash);
#line 321
  blake256_update(& S->outer, (uint8_t const   *)(ihash), (uint64_t )256);
#line 322
  blake256_final(& S->outer, digest);
#line 323
  memset((void *)(ihash), 0, (size_t )32);
#line 324
  return;
}
}
#line 326 "blake.c"
void hmac_blake224_final(hmac_state *S , uint8_t *digest ) 
{ 
  uint8_t ihash[32] ;

  {
#line 328
  blake224_final(& S->inner, ihash);
#line 329
  blake224_update(& S->outer, (uint8_t const   *)(ihash), (uint64_t )224);
#line 330
  blake224_final(& S->outer, digest);
#line 331
  memset((void *)(ihash), 0, (size_t )32);
#line 332
  return;
}
}
#line 335 "blake.c"
void hmac_blake256_hash(uint8_t *out , uint8_t const   *key , uint64_t keylen , uint8_t const   *in ,
                        uint64_t inlen ) 
{ 
  hmac_state S ;

  {
#line 338
  hmac_blake256_init(& S, key, keylen);
#line 339
  hmac_blake256_update(& S, in, inlen * 8ULL);
#line 340
  hmac_blake256_final(& S, out);
#line 341
  return;
}
}
#line 344 "blake.c"
void hmac_blake224_hash(uint8_t *out , uint8_t const   *key , uint64_t keylen , uint8_t const   *in ,
                        uint64_t inlen ) 
{ 
  hmac_state S ;

  {
#line 347
  hmac_blake224_init(& S, key, keylen);
#line 348
  hmac_blake224_update(& S, in, inlen * 8ULL);
#line 349
  hmac_blake224_final(& S, out);
#line 350
  return;
}
}
#line 1 "cil-9kCkQimM.o"
#pragma merger("0","/tmp/cil-Ze90FwFP.i","")
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
#line 9 "./groestl.h"
void groestl(BitSequence const   *data , DataLength databitlen , BitSequence *hashval ) ;
#line 10 "./jh.h"
void jh(unsigned int bit_len , uint8_t const   *input , size_t input_bit_length ,
        uint8_t *output___0 ) ;
#line 14 "./keccak.h"
void keccak(uint8_t const   *in , int inlen , uint8_t *md , int mdlen ) ;
#line 16
void keccakf(uint64_t *st , int rounds ) ;
#line 18
void keccak1600(uint8_t const   *in , int inlen , uint8_t *md ) ;
#line 159 "./oaes_lib.h"
OAES_CTX *oaes_alloc(void) ;
#line 161
OAES_RET oaes_free(OAES_CTX **ctx ) ;
#line 163
OAES_RET oaes_set_option(OAES_CTX *ctx , OAES_OPTION option , void const   *value ) ;
#line 166
OAES_RET oaes_key_gen_128(OAES_CTX *ctx ) ;
#line 168
OAES_RET oaes_key_gen_192(OAES_CTX *ctx ) ;
#line 170
OAES_RET oaes_key_gen_256(OAES_CTX *ctx ) ;
#line 174
OAES_RET oaes_key_export(OAES_CTX *ctx , uint8_t *data , size_t *data_len ) ;
#line 179
OAES_RET oaes_key_export_data(OAES_CTX *ctx , uint8_t *data , size_t *data_len ) ;
#line 183
OAES_RET oaes_key_import(OAES_CTX *ctx , uint8_t const   *data , size_t data_len ) ;
#line 187
OAES_RET oaes_key_import_data(OAES_CTX *ctx , uint8_t const   *data , size_t data_len ) ;
#line 191
OAES_RET oaes_encrypt(OAES_CTX *ctx , uint8_t const   *m , size_t m_len , uint8_t *c ,
                      size_t *c_len ) ;
#line 195
OAES_RET oaes_decrypt(OAES_CTX *ctx , uint8_t const   *c , size_t c_len , uint8_t *m ,
                      size_t *m_len ) ;
#line 199
OAES_RET oaes_sprintf(char *buf , size_t *buf_len , uint8_t const   *data , size_t data_len ) ;
#line 202
OAES_RET oaes_encryption_round(uint8_t const   *key , uint8_t *c ) ;
#line 204
OAES_RET oaes_pseudo_encrypt_ecb(OAES_CTX *ctx , uint8_t *c ) ;
#line 9 "./skein.h"
enum __anonenum_SkeinHashReturn_432432649 skein(int hashbitlen , SkeinBitSequence const   *data ,
                                                size_t databitlen , SkeinBitSequence *hashval ) ;
#line 42 "cryptonight.c"
static void xor64(uint8_t *a , uint64_t const   b ) 
{ 


  {
#line 42
  *((uint64_t *)a) ^= (unsigned long long )b;
#line 42
  return;
}
}
#line 44 "cryptonight.c"
static void copy_block(uint8_t *dst , uint8_t const   *src ) 
{ 


  {
#line 45
  *((uint64_t *)dst + 0) = *((uint64_t *)src + 0);
#line 46
  *((uint64_t *)dst + 1) = *((uint64_t *)src + 1);
#line 47
  return;
}
}
#line 49 "cryptonight.c"
void do_blake_hash(void const   *input , size_t len , char *output___0 ) 
{ 


  {
#line 50
  blake((uint8_t const   *)input, (uint64_t )len, (unsigned char *)output___0);
#line 51
  return;
}
}
#line 53 "cryptonight.c"
void do_groestl_hash(void const   *input , size_t len , char *output___0 ) 
{ 


  {
#line 54
  groestl((unsigned char const   *)input, (unsigned long long )(len * 8UL), (uint8_t *)output___0);
#line 55
  return;
}
}
#line 57 "cryptonight.c"
void do_jh_hash(void const   *input , size_t len , char *output___0 ) 
{ 


  {
#line 58
  jh(256U, (uint8_t const   *)input, 8UL * len, (uint8_t *)output___0);
#line 59
  return;
}
}
#line 61 "cryptonight.c"
void do_skein_hash(void const   *input , size_t len , char *output___0 ) 
{ 


  {
#line 62
  skein(256, (unsigned char const   *)input, 8UL * len, (uint8_t *)output___0);
#line 63
  return;
}
}
#line 65 "cryptonight.c"
void (* const  extra_hashes[4])(void const   * , size_t  , char * )  = {      (void (* const  )(void const   * , size_t  , char * ))(& do_blake_hash),      (void (* const  )(void const   * , size_t  , char * ))(& do_groestl_hash),      (void (* const  )(void const   * , size_t  , char * ))(& do_jh_hash),      (void (* const  )(void const   * , size_t  , char * ))(& do_skein_hash)};
#line 68 "cryptonight.c"
void xor_blocks_dst(uint8_t const   *a , uint8_t const   *b , uint8_t *dst ) 
{ 


  {
#line 69
  *((uint64_t *)dst + 0) = *((uint64_t *)a + 0) ^ *((uint64_t *)b + 0);
#line 70
  *((uint64_t *)dst + 1) = *((uint64_t *)a + 1) ^ *((uint64_t *)b + 1);
#line 71
  return;
}
}
#line 92 "cryptonight.c"
uint32_t const   TestTable1[256]  __attribute__((__aligned__(16)))  = 
#line 92
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
#line 137 "cryptonight.c"
uint32_t const   TestTable2[256]  __attribute__((__aligned__(16)))  = 
#line 137
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
#line 182 "cryptonight.c"
uint32_t const   TestTable3[256]  __attribute__((__aligned__(16)))  = 
#line 182
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
#line 227 "cryptonight.c"
uint32_t const   TestTable4[256]  __attribute__((__aligned__(16)))  = 
#line 227
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
#line 272 "cryptonight.c"
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
#line 273
  hi = *((uint64_t *)op1 + 0);
#line 274
  lo = *((uint64_t *)op2 + 0);
#line 276
  u1 = hi & 4294967295ULL;
#line 277
  v1 = lo & 4294967295ULL;
#line 278
  t = u1 * v1;
#line 279
  w3 = t & 4294967295ULL;
#line 280
  k = t >> 32;
#line 282
  hi >>= 32;
#line 283
  t = hi * v1 + k;
#line 284
  k = t & 4294967295ULL;
#line 285
  v1 = t >> 32;
#line 287
  lo >>= 32;
#line 288
  t = u1 * lo + k;
#line 289
  k = t >> 32;
#line 291
  hi = (hi * lo + v1) + k;
#line 292
  lo = (t << 32) + w3;
#line 294
  *((uint64_t *)dst + 0) = hi;
#line 295
  *((uint64_t *)dst + 1) = lo;
#line 296
  return;
}
}
#line 298 "cryptonight.c"
void sum_xor_dst(uint8_t const   *a , uint8_t *c , uint8_t *dst ) 
{ 
  uint64_t hi ;
  uint64_t lo ;

  {
#line 299
  hi = *((uint64_t *)a + 0);
#line 300
  lo = *((uint64_t *)a + 1);
#line 302
  lo += *((uint64_t *)c + 1);
#line 303
  hi += *((uint64_t *)c + 0);
#line 305
  *((uint64_t *)c + 0) = *((uint64_t *)dst + 0) ^ hi;
#line 306
  *((uint64_t *)c + 1) = *((uint64_t *)dst + 1) ^ lo;
#line 307
  *((uint64_t *)dst + 0) = hi;
#line 308
  *((uint64_t *)dst + 1) = lo;
#line 309
  return;
}
}
#line 311 "cryptonight.c"
void xor_blocks(uint8_t *a , uint8_t const   *b ) 
{ 


  {
#line 312
  *((uint64_t *)a + 0) ^= *((uint64_t *)b + 0);
#line 313
  *((uint64_t *)a + 1) ^= *((uint64_t *)b + 1);
#line 314
  return;
}
}
#line 316 "cryptonight.c"
void SubAndShiftAndMixAddRound(uint32_t *out , uint8_t *temp , uint32_t *AesEncKey ) 
{ 


  {
#line 318
  *(out + 0) = (uint32_t )((((TestTable1[*(temp + 0)] ^ TestTable2[*(temp + 5)]) ^ TestTable3[*(temp + 10)]) ^ TestTable4[*(temp + 15)]) ^ (unsigned int const   )*(AesEncKey + 0));
#line 320
  *(out + 1) = (uint32_t )((((TestTable4[*(temp + 3)] ^ TestTable1[*(temp + 4)]) ^ TestTable2[*(temp + 9)]) ^ TestTable3[*(temp + 14)]) ^ (unsigned int const   )*(AesEncKey + 1));
#line 322
  *(out + 2) = (uint32_t )((((TestTable3[*(temp + 2)] ^ TestTable4[*(temp + 7)]) ^ TestTable1[*(temp + 8)]) ^ TestTable2[*(temp + 13)]) ^ (unsigned int const   )*(AesEncKey + 2));
#line 324
  *(out + 3) = (uint32_t )((((TestTable2[*(temp + 1)] ^ TestTable3[*(temp + 6)]) ^ TestTable4[*(temp + 11)]) ^ TestTable1[*(temp + 12)]) ^ (unsigned int const   )*(AesEncKey + 3));
#line 326
  return;
}
}
#line 328 "cryptonight.c"
void SubAndShiftAndMixAddRoundInPlace(uint32_t *temp , uint32_t *AesEncKey ) 
{ 
  uint8_t *state ;
  uint8_t saved[6] ;

  {
#line 329
  state = (uint8_t *)(temp + 0);
#line 332
  saved[0] = *(state + 3);
#line 333
  saved[1] = *(state + 2);
#line 334
  saved[2] = *(state + 7);
#line 335
  saved[3] = *(state + 1);
#line 336
  saved[4] = *(state + 6);
#line 337
  saved[5] = *(state + 11);
#line 339
  *(temp + 0) = (uint32_t )((((TestTable1[*(state + 0)] ^ TestTable2[*(state + 5)]) ^ TestTable3[*(state + 10)]) ^ TestTable4[*(state + 15)]) ^ (unsigned int const   )*(AesEncKey + 0));
#line 341
  *(temp + 1) = (uint32_t )((((TestTable4[saved[0]] ^ TestTable1[*(state + 4)]) ^ TestTable2[*(state + 9)]) ^ TestTable3[*(state + 14)]) ^ (unsigned int const   )*(AesEncKey + 1));
#line 343
  *(temp + 2) = (uint32_t )((((TestTable3[saved[1]] ^ TestTable4[saved[2]]) ^ TestTable1[*(state + 8)]) ^ TestTable2[*(state + 13)]) ^ (unsigned int const   )*(AesEncKey + 2));
#line 345
  *(temp + 3) = (uint32_t )((((TestTable2[saved[3]] ^ TestTable3[saved[4]]) ^ TestTable4[saved[5]]) ^ TestTable1[*(state + 12)]) ^ (unsigned int const   )*(AesEncKey + 3));
#line 347
  return;
}
}
#line 349 "cryptonight.c"
uint8_t text[128]  ;
#line 411
void cryptonight_hash_ctx(void *output___0 , void const   *input , size_t len , int lite ,
                          int variant , int height ) ;
#line 411 "cryptonight.c"
static unsigned int const   table  =    (uint32_t const   )480016;
#line 421 "cryptonight.c"
static unsigned int const   table___0  =    (uint32_t const   )480016;
#line 351 "cryptonight.c"
void cryptonight_hash_ctx(void *output___0 , void const   *input , size_t len , int lite ,
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
  uint32_t *ptr ;
  uint8_t tmp___2 ;
  uint8_t index___0 ;
  uint8_t tmp___3 ;
  uint8_t index___1 ;
  OAES_CTX *tmp___4 ;
  uint32_t *ptr___0 ;

  {
#line 367
  memory = (size_t )((1 << 21) / 2);
#line 368
  iter = (size_t )((1 << 20) / 8);
#line 369
  mask = (uint32_t )1048560;
#line 370
  rvs = (size_t )0;
#line 372
  tmp = malloc(memory * sizeof(uint8_t ));
#line 372
  long_state = (uint8_t *)tmp;
#line 373
  tmp___0 = oaes_alloc();
#line 373
  aes_ctx = (oaes_ctx *)tmp___0;
#line 377
  keccak((uint8_t const   *)input, (int )len, state.hs.b, 200);
#line 378
  memcpy((void * __restrict  )(text), (void const   * __restrict  )(state.__annonCompField1.init),
         (size_t )128);
#line 380
  if (variant == 1) {
#line 380
    tmp___1 = *((uint64_t const   *)((uint8_t const   *)input + 35)) ^ (unsigned long long const   )state.hs.w[24];
  } else {
#line 380
    tmp___1 = (unsigned long long const   )0;
  }
#line 380
  tweak1_2 = (uint64_t )tmp___1;
#line 382
  oaes_key_import_data((OAES_CTX *)aes_ctx, (uint8_t const   *)(state.hs.b), (size_t )32);
#line 384
  i = (size_t )0;
#line 384
  while (i < memory) {
#line 385
    j = (size_t )0;
#line 385
    while (j < 10UL) {
#line 386
      ptr = (uint32_t *)((aes_ctx->key)->exp_data + (j << 4));
#line 388
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[0]), ptr);
#line 389
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[16]), ptr);
#line 390
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[32]), ptr);
#line 391
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[48]), ptr);
#line 392
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[64]), ptr);
#line 393
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[80]), ptr);
#line 394
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[96]), ptr);
#line 395
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[112]), ptr);
#line 385
      j ++;
    }
#line 397
    memcpy((void * __restrict  )(long_state + i), (void const   * __restrict  )(text),
           (size_t )128);
#line 384
    i += 128UL;
  }
#line 400
  i = (size_t )0;
#line 400
  while (i < 2UL) {
#line 401
    *((uint64_t *)(a) + i) = *((uint64_t *)(state.__annonCompField1.k) + i) ^ *((uint64_t *)(state.__annonCompField1.k) + (i + 4UL));
#line 403
    *((uint64_t *)(b) + i) = *((uint64_t *)(state.__annonCompField1.k) + (i + 2UL)) ^ *((uint64_t *)(state.__annonCompField1.k) + (i + 6UL));
#line 400
    i ++;
  }
#line 407
  i = (size_t )0;
#line 407
  while (i < iter) {
#line 408
    j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 409
    SubAndShiftAndMixAddRound((uint32_t *)(c), long_state + j, (uint32_t *)(a));
#line 410
    xor_blocks_dst((uint8_t const   *)(c), (uint8_t const   *)(b), long_state + j);
#line 411
    while (1) {
#line 411
      tmp___2 = (uint8_t )*((uint8_t const   *)(long_state + j) + 11);
#line 411
      index___0 = (uint8_t )(((((int )tmp___2 >> 3) & 6) | ((int )tmp___2 & 1)) << 1);
#line 411
      *((long_state + j) + 11) = (uint8_t )((unsigned int const   )tmp___2 ^ ((table >> (int )index___0) & 48U));
#line 411
      break;
    }
#line 413
    j = (size_t )(*((uint32_t *)(c) + 0) & mask);
#line 414
    mul64to128(c, long_state + j, e);
#line 415
    sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 416
    while (1) {
#line 416
      xor64((long_state + j) + 8, (uint64_t const   )tweak1_2);
#line 416
      break;
    }
#line 418
    j = (size_t )(*((uint32_t *)(a) + 0) & mask);
#line 419
    SubAndShiftAndMixAddRound((uint32_t *)(b), long_state + j, (uint32_t *)(a));
#line 420
    xor_blocks_dst((uint8_t const   *)(b), (uint8_t const   *)(c), long_state + j);
#line 421
    while (1) {
#line 421
      tmp___3 = (uint8_t )*((uint8_t const   *)(long_state + j) + 11);
#line 421
      index___1 = (uint8_t )(((((int )tmp___3 >> 3) & 6) | ((int )tmp___3 & 1)) << 1);
#line 421
      *((long_state + j) + 11) = (uint8_t )((unsigned int const   )tmp___3 ^ ((table___0 >> (int )index___1) & 48U));
#line 421
      break;
    }
#line 423
    j = (size_t )(*((uint32_t *)(b) + 0) & mask);
#line 424
    mul64to128(b, long_state + j, e);
#line 425
    sum_xor_dst((uint8_t const   *)(e), a, long_state + j);
#line 426
    while (1) {
#line 426
      xor64((long_state + j) + 8, (uint64_t const   )tweak1_2);
#line 426
      break;
    }
#line 407
    i ++;
  }
#line 429
  memcpy((void * __restrict  )(text), (void const   * __restrict  )(state.__annonCompField1.init),
         (size_t )128);
#line 431
  oaes_free((OAES_CTX **)(& aes_ctx));
#line 432
  tmp___4 = oaes_alloc();
#line 432
  aes_ctx = (oaes_ctx *)tmp___4;
#line 434
  oaes_key_import_data((OAES_CTX *)aes_ctx, (uint8_t const   *)(& state.hs.b[32]),
                       (size_t )32);
#line 436
  i = (size_t )0;
#line 436
  while (i < memory) {
#line 437
    xor_blocks(& text[0], (uint8_t const   *)(long_state + i));
#line 438
    xor_blocks(& text[16], (uint8_t const   *)(long_state + (i + 16UL)));
#line 439
    xor_blocks(& text[32], (uint8_t const   *)(long_state + (i + 32UL)));
#line 440
    xor_blocks(& text[48], (uint8_t const   *)(long_state + (i + 48UL)));
#line 441
    xor_blocks(& text[64], (uint8_t const   *)(long_state + (i + 64UL)));
#line 442
    xor_blocks(& text[80], (uint8_t const   *)(long_state + (i + 80UL)));
#line 443
    xor_blocks(& text[96], (uint8_t const   *)(long_state + (i + 96UL)));
#line 444
    xor_blocks(& text[112], (uint8_t const   *)(long_state + (i + 112UL)));
#line 446
    j = (size_t )0;
#line 446
    while (j < 10UL) {
#line 447
      ptr___0 = (uint32_t *)((aes_ctx->key)->exp_data + (j << 4));
#line 449
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[0]), ptr___0);
#line 450
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[16]), ptr___0);
#line 451
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[32]), ptr___0);
#line 452
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[48]), ptr___0);
#line 453
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[64]), ptr___0);
#line 454
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[80]), ptr___0);
#line 455
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[96]), ptr___0);
#line 456
      SubAndShiftAndMixAddRoundInPlace((uint32_t *)(& text[112]), ptr___0);
#line 446
      j ++;
    }
#line 436
    i += 128UL;
  }
#line 460
  memcpy((void * __restrict  )(state.__annonCompField1.init), (void const   * __restrict  )(text),
         (size_t )128);
#line 461
  keccakf((uint64_t *)((uint64_t *)(state.hs.b)), 24);
#line 462
  (*(extra_hashes[(int )state.hs.b[0] & 3]))((void const   *)(& state), (size_t )200,
                                             (char *)output___0);
#line 463
  oaes_free((OAES_CTX **)(& aes_ctx));
#line 464
  free((void *)long_state);
#line 465
  return;
}
}
#line 467 "cryptonight.c"
void cryptonight(void *output___0 , void const   *input , size_t len , int lite ,
                 int variant , int height ) 
{ 


  {
#line 469
  cryptonight_hash_ctx(output___0, input, len, lite, variant, height);
#line 470
  return;
}
}
#line 1 "cil-1TIVUfEn.o"
#pragma merger("0","/tmp/cil-AZyEj4NU.i","")
#line 5 "./groestl_tables.h"
uint32_t const   T[512]  = 
#line 5 "./groestl_tables.h"
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
#line 50 "groestl.c"
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
#line 102 "groestl.c"
static void RND512P(uint8_t *x , uint32_t *y , uint32_t r ) 
{ 
  uint32_t temp_v1 ;
  uint32_t temp_v2 ;
  uint32_t temp_upper_value ;
  uint32_t temp_lower_value ;
  uint32_t temp ;
  uint32_t *x32 ;

  {
#line 104
  x32 = (uint32_t *)x;
#line 105
  *(x32 + 0) ^= r;
#line 106
  *(x32 + 2) ^= 16U ^ r;
#line 107
  *(x32 + 4) ^= 32U ^ r;
#line 108
  *(x32 + 6) ^= 48U ^ r;
#line 109
  *(x32 + 8) ^= 64U ^ r;
#line 110
  *(x32 + 10) ^= 80U ^ r;
#line 111
  *(x32 + 12) ^= 96U ^ r;
#line 112
  *(x32 + 14) ^= 112U ^ r;
#line 113
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 0)];
#line 113
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 0) + 1U];
#line 113
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 9)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 9) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 18)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 18) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 27)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 27) + 1U];
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
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 36)];
#line 113
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 36) + 1U];
#line 113
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 45)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 45) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 54)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 54) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 63)];
#line 113
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 63) + 1U];
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
  *(y + 0) = temp_upper_value;
#line 113
  *(y + 1) = temp_lower_value;
#line 115
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 8)];
#line 115
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 8) + 1U];
#line 115
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 17)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 17) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 26)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 26) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 35)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 35) + 1U];
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
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 44)];
#line 115
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 44) + 1U];
#line 115
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 53)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 53) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 62)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 62) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 7)];
#line 115
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 7) + 1U];
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
  *(y + 2) = temp_upper_value;
#line 115
  *(y + 3) = temp_lower_value;
#line 117
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 16)];
#line 117
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 16) + 1U];
#line 117
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 25)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 25) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 34)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 34) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 43)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 43) + 1U];
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
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 52)];
#line 117
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 52) + 1U];
#line 117
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 61)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 61) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 6)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 6) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 15)];
#line 117
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 15) + 1U];
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
  *(y + 4) = temp_upper_value;
#line 117
  *(y + 5) = temp_lower_value;
#line 119
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 24)];
#line 119
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 24) + 1U];
#line 119
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 33)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 33) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 42)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 42) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 51)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 51) + 1U];
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
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 60)];
#line 119
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 60) + 1U];
#line 119
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 5)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 5) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 14)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 14) + 1U];
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
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 23)];
#line 119
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 23) + 1U];
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
  *(y + 6) = temp_upper_value;
#line 119
  *(y + 7) = temp_lower_value;
#line 121
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 32)];
#line 121
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 32) + 1U];
#line 121
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 41)];
#line 121
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 41) + 1U];
#line 121
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 121
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 121
  temp_v1 = temp;
#line 121
  temp_upper_value ^= temp_v1;
#line 121
  temp_lower_value ^= temp_v2;
#line 121
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 50)];
#line 121
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 50) + 1U];
#line 121
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 121
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 121
  temp_v1 = temp;
#line 121
  temp_upper_value ^= temp_v1;
#line 121
  temp_lower_value ^= temp_v2;
#line 121
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 59)];
#line 121
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 59) + 1U];
#line 121
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 121
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 121
  temp_v1 = temp;
#line 121
  temp_upper_value ^= temp_v1;
#line 121
  temp_lower_value ^= temp_v2;
#line 121
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 4)];
#line 121
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 4) + 1U];
#line 121
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 13)];
#line 121
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 13) + 1U];
#line 121
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 121
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 121
  temp_v1 = temp;
#line 121
  temp_lower_value ^= temp_v1;
#line 121
  temp_upper_value ^= temp_v2;
#line 121
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 22)];
#line 121
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 22) + 1U];
#line 121
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 121
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 121
  temp_v1 = temp;
#line 121
  temp_lower_value ^= temp_v1;
#line 121
  temp_upper_value ^= temp_v2;
#line 121
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 31)];
#line 121
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 31) + 1U];
#line 121
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 121
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 121
  temp_v1 = temp;
#line 121
  temp_lower_value ^= temp_v1;
#line 121
  temp_upper_value ^= temp_v2;
#line 121
  *(y + 8) = temp_upper_value;
#line 121
  *(y + 9) = temp_lower_value;
#line 123
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 40)];
#line 123
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 40) + 1U];
#line 123
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 49)];
#line 123
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 49) + 1U];
#line 123
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 123
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 123
  temp_v1 = temp;
#line 123
  temp_upper_value ^= temp_v1;
#line 123
  temp_lower_value ^= temp_v2;
#line 123
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 58)];
#line 123
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 58) + 1U];
#line 123
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 123
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 123
  temp_v1 = temp;
#line 123
  temp_upper_value ^= temp_v1;
#line 123
  temp_lower_value ^= temp_v2;
#line 123
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 3)];
#line 123
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 3) + 1U];
#line 123
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 123
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 123
  temp_v1 = temp;
#line 123
  temp_upper_value ^= temp_v1;
#line 123
  temp_lower_value ^= temp_v2;
#line 123
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 12)];
#line 123
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 12) + 1U];
#line 123
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 21)];
#line 123
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 21) + 1U];
#line 123
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 123
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 123
  temp_v1 = temp;
#line 123
  temp_lower_value ^= temp_v1;
#line 123
  temp_upper_value ^= temp_v2;
#line 123
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 30)];
#line 123
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 30) + 1U];
#line 123
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 123
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 123
  temp_v1 = temp;
#line 123
  temp_lower_value ^= temp_v1;
#line 123
  temp_upper_value ^= temp_v2;
#line 123
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 39)];
#line 123
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 39) + 1U];
#line 123
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 123
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 123
  temp_v1 = temp;
#line 123
  temp_lower_value ^= temp_v1;
#line 123
  temp_upper_value ^= temp_v2;
#line 123
  *(y + 10) = temp_upper_value;
#line 123
  *(y + 11) = temp_lower_value;
#line 125
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 48)];
#line 125
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 48) + 1U];
#line 125
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 57)];
#line 125
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 57) + 1U];
#line 125
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 125
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 125
  temp_v1 = temp;
#line 125
  temp_upper_value ^= temp_v1;
#line 125
  temp_lower_value ^= temp_v2;
#line 125
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 2)];
#line 125
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 2) + 1U];
#line 125
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 125
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 125
  temp_v1 = temp;
#line 125
  temp_upper_value ^= temp_v1;
#line 125
  temp_lower_value ^= temp_v2;
#line 125
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 11)];
#line 125
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 11) + 1U];
#line 125
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 125
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 125
  temp_v1 = temp;
#line 125
  temp_upper_value ^= temp_v1;
#line 125
  temp_lower_value ^= temp_v2;
#line 125
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 20)];
#line 125
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 20) + 1U];
#line 125
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 29)];
#line 125
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 29) + 1U];
#line 125
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 125
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 125
  temp_v1 = temp;
#line 125
  temp_lower_value ^= temp_v1;
#line 125
  temp_upper_value ^= temp_v2;
#line 125
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 38)];
#line 125
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 38) + 1U];
#line 125
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 125
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 125
  temp_v1 = temp;
#line 125
  temp_lower_value ^= temp_v1;
#line 125
  temp_upper_value ^= temp_v2;
#line 125
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 47)];
#line 125
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 47) + 1U];
#line 125
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 125
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 125
  temp_v1 = temp;
#line 125
  temp_lower_value ^= temp_v1;
#line 125
  temp_upper_value ^= temp_v2;
#line 125
  *(y + 12) = temp_upper_value;
#line 125
  *(y + 13) = temp_lower_value;
#line 127
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 56)];
#line 127
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 56) + 1U];
#line 127
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 1)];
#line 127
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 1) + 1U];
#line 127
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 127
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 127
  temp_v1 = temp;
#line 127
  temp_upper_value ^= temp_v1;
#line 127
  temp_lower_value ^= temp_v2;
#line 127
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 10)];
#line 127
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 10) + 1U];
#line 127
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 127
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 127
  temp_v1 = temp;
#line 127
  temp_upper_value ^= temp_v1;
#line 127
  temp_lower_value ^= temp_v2;
#line 127
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 19)];
#line 127
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 19) + 1U];
#line 127
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 127
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 127
  temp_v1 = temp;
#line 127
  temp_upper_value ^= temp_v1;
#line 127
  temp_lower_value ^= temp_v2;
#line 127
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 28)];
#line 127
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 28) + 1U];
#line 127
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 37)];
#line 127
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 37) + 1U];
#line 127
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 127
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 127
  temp_v1 = temp;
#line 127
  temp_lower_value ^= temp_v1;
#line 127
  temp_upper_value ^= temp_v2;
#line 127
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 46)];
#line 127
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 46) + 1U];
#line 127
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 127
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 127
  temp_v1 = temp;
#line 127
  temp_lower_value ^= temp_v1;
#line 127
  temp_upper_value ^= temp_v2;
#line 127
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 55)];
#line 127
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 55) + 1U];
#line 127
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 127
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 127
  temp_v1 = temp;
#line 127
  temp_lower_value ^= temp_v1;
#line 127
  temp_upper_value ^= temp_v2;
#line 127
  *(y + 14) = temp_upper_value;
#line 127
  *(y + 15) = temp_lower_value;
#line 129
  return;
}
}
#line 132 "groestl.c"
static void RND512Q(uint8_t *x , uint32_t *y , uint32_t r ) 
{ 
  uint32_t temp_v1 ;
  uint32_t temp_v2 ;
  uint32_t temp_upper_value ;
  uint32_t temp_lower_value ;
  uint32_t temp ;
  uint32_t *x32 ;

  {
#line 134
  x32 = (uint32_t *)x;
#line 135
  *(x32 + 0) = ~ *(x32 + 0);
#line 136
  *(x32 + 1) ^= 4294967295U ^ r;
#line 137
  *(x32 + 2) = ~ *(x32 + 2);
#line 138
  *(x32 + 3) ^= 4026531839U ^ r;
#line 139
  *(x32 + 4) = ~ *(x32 + 4);
#line 140
  *(x32 + 5) ^= 3758096383U ^ r;
#line 141
  *(x32 + 6) = ~ *(x32 + 6);
#line 142
  *(x32 + 7) ^= 3489660927U ^ r;
#line 143
  *(x32 + 8) = ~ *(x32 + 8);
#line 144
  *(x32 + 9) ^= 3221225471U ^ r;
#line 145
  *(x32 + 10) = ~ *(x32 + 10);
#line 146
  *(x32 + 11) ^= 2952790015U ^ r;
#line 147
  *(x32 + 12) = ~ *(x32 + 12);
#line 148
  *(x32 + 13) ^= 2684354559U ^ r;
#line 149
  *(x32 + 14) = ~ *(x32 + 14);
#line 150
  *(x32 + 15) ^= 2415919103U ^ r;
#line 151
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 8)];
#line 151
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 8) + 1U];
#line 151
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 25)];
#line 151
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 25) + 1U];
#line 151
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 151
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 151
  temp_v1 = temp;
#line 151
  temp_upper_value ^= temp_v1;
#line 151
  temp_lower_value ^= temp_v2;
#line 151
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 42)];
#line 151
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 42) + 1U];
#line 151
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 151
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 151
  temp_v1 = temp;
#line 151
  temp_upper_value ^= temp_v1;
#line 151
  temp_lower_value ^= temp_v2;
#line 151
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 59)];
#line 151
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 59) + 1U];
#line 151
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 151
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 151
  temp_v1 = temp;
#line 151
  temp_upper_value ^= temp_v1;
#line 151
  temp_lower_value ^= temp_v2;
#line 151
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 4)];
#line 151
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 4) + 1U];
#line 151
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 21)];
#line 151
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 21) + 1U];
#line 151
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 151
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 151
  temp_v1 = temp;
#line 151
  temp_lower_value ^= temp_v1;
#line 151
  temp_upper_value ^= temp_v2;
#line 151
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 38)];
#line 151
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 38) + 1U];
#line 151
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 151
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 151
  temp_v1 = temp;
#line 151
  temp_lower_value ^= temp_v1;
#line 151
  temp_upper_value ^= temp_v2;
#line 151
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 55)];
#line 151
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 55) + 1U];
#line 151
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 151
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 151
  temp_v1 = temp;
#line 151
  temp_lower_value ^= temp_v1;
#line 151
  temp_upper_value ^= temp_v2;
#line 151
  *(y + 0) = temp_upper_value;
#line 151
  *(y + 1) = temp_lower_value;
#line 153
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 16)];
#line 153
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 16) + 1U];
#line 153
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 33)];
#line 153
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 33) + 1U];
#line 153
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 153
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 153
  temp_v1 = temp;
#line 153
  temp_upper_value ^= temp_v1;
#line 153
  temp_lower_value ^= temp_v2;
#line 153
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 50)];
#line 153
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 50) + 1U];
#line 153
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 153
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 153
  temp_v1 = temp;
#line 153
  temp_upper_value ^= temp_v1;
#line 153
  temp_lower_value ^= temp_v2;
#line 153
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 3)];
#line 153
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 3) + 1U];
#line 153
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 153
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 153
  temp_v1 = temp;
#line 153
  temp_upper_value ^= temp_v1;
#line 153
  temp_lower_value ^= temp_v2;
#line 153
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 12)];
#line 153
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 12) + 1U];
#line 153
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 29)];
#line 153
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 29) + 1U];
#line 153
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 153
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 153
  temp_v1 = temp;
#line 153
  temp_lower_value ^= temp_v1;
#line 153
  temp_upper_value ^= temp_v2;
#line 153
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 46)];
#line 153
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 46) + 1U];
#line 153
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 153
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 153
  temp_v1 = temp;
#line 153
  temp_lower_value ^= temp_v1;
#line 153
  temp_upper_value ^= temp_v2;
#line 153
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 63)];
#line 153
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 63) + 1U];
#line 153
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 153
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 153
  temp_v1 = temp;
#line 153
  temp_lower_value ^= temp_v1;
#line 153
  temp_upper_value ^= temp_v2;
#line 153
  *(y + 2) = temp_upper_value;
#line 153
  *(y + 3) = temp_lower_value;
#line 155
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 24)];
#line 155
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 24) + 1U];
#line 155
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 41)];
#line 155
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 41) + 1U];
#line 155
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 155
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 155
  temp_v1 = temp;
#line 155
  temp_upper_value ^= temp_v1;
#line 155
  temp_lower_value ^= temp_v2;
#line 155
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 58)];
#line 155
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 58) + 1U];
#line 155
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 155
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 155
  temp_v1 = temp;
#line 155
  temp_upper_value ^= temp_v1;
#line 155
  temp_lower_value ^= temp_v2;
#line 155
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 11)];
#line 155
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 11) + 1U];
#line 155
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 155
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 155
  temp_v1 = temp;
#line 155
  temp_upper_value ^= temp_v1;
#line 155
  temp_lower_value ^= temp_v2;
#line 155
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 20)];
#line 155
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 20) + 1U];
#line 155
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 37)];
#line 155
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 37) + 1U];
#line 155
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 155
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 155
  temp_v1 = temp;
#line 155
  temp_lower_value ^= temp_v1;
#line 155
  temp_upper_value ^= temp_v2;
#line 155
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 54)];
#line 155
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 54) + 1U];
#line 155
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 155
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 155
  temp_v1 = temp;
#line 155
  temp_lower_value ^= temp_v1;
#line 155
  temp_upper_value ^= temp_v2;
#line 155
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 7)];
#line 155
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 7) + 1U];
#line 155
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 155
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 155
  temp_v1 = temp;
#line 155
  temp_lower_value ^= temp_v1;
#line 155
  temp_upper_value ^= temp_v2;
#line 155
  *(y + 4) = temp_upper_value;
#line 155
  *(y + 5) = temp_lower_value;
#line 157
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 32)];
#line 157
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 32) + 1U];
#line 157
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 49)];
#line 157
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 49) + 1U];
#line 157
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 157
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 157
  temp_v1 = temp;
#line 157
  temp_upper_value ^= temp_v1;
#line 157
  temp_lower_value ^= temp_v2;
#line 157
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 2)];
#line 157
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 2) + 1U];
#line 157
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 157
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 157
  temp_v1 = temp;
#line 157
  temp_upper_value ^= temp_v1;
#line 157
  temp_lower_value ^= temp_v2;
#line 157
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 19)];
#line 157
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 19) + 1U];
#line 157
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 157
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 157
  temp_v1 = temp;
#line 157
  temp_upper_value ^= temp_v1;
#line 157
  temp_lower_value ^= temp_v2;
#line 157
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 28)];
#line 157
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 28) + 1U];
#line 157
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 45)];
#line 157
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 45) + 1U];
#line 157
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 157
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 157
  temp_v1 = temp;
#line 157
  temp_lower_value ^= temp_v1;
#line 157
  temp_upper_value ^= temp_v2;
#line 157
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 62)];
#line 157
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 62) + 1U];
#line 157
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 157
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 157
  temp_v1 = temp;
#line 157
  temp_lower_value ^= temp_v1;
#line 157
  temp_upper_value ^= temp_v2;
#line 157
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 15)];
#line 157
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 15) + 1U];
#line 157
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 157
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 157
  temp_v1 = temp;
#line 157
  temp_lower_value ^= temp_v1;
#line 157
  temp_upper_value ^= temp_v2;
#line 157
  *(y + 6) = temp_upper_value;
#line 157
  *(y + 7) = temp_lower_value;
#line 159
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 40)];
#line 159
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 40) + 1U];
#line 159
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 57)];
#line 159
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 57) + 1U];
#line 159
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 159
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 159
  temp_v1 = temp;
#line 159
  temp_upper_value ^= temp_v1;
#line 159
  temp_lower_value ^= temp_v2;
#line 159
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 10)];
#line 159
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 10) + 1U];
#line 159
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 159
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 159
  temp_v1 = temp;
#line 159
  temp_upper_value ^= temp_v1;
#line 159
  temp_lower_value ^= temp_v2;
#line 159
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 27)];
#line 159
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 27) + 1U];
#line 159
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 159
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 159
  temp_v1 = temp;
#line 159
  temp_upper_value ^= temp_v1;
#line 159
  temp_lower_value ^= temp_v2;
#line 159
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 36)];
#line 159
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 36) + 1U];
#line 159
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 53)];
#line 159
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 53) + 1U];
#line 159
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 159
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 159
  temp_v1 = temp;
#line 159
  temp_lower_value ^= temp_v1;
#line 159
  temp_upper_value ^= temp_v2;
#line 159
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 6)];
#line 159
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 6) + 1U];
#line 159
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 159
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 159
  temp_v1 = temp;
#line 159
  temp_lower_value ^= temp_v1;
#line 159
  temp_upper_value ^= temp_v2;
#line 159
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 23)];
#line 159
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 23) + 1U];
#line 159
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 159
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 159
  temp_v1 = temp;
#line 159
  temp_lower_value ^= temp_v1;
#line 159
  temp_upper_value ^= temp_v2;
#line 159
  *(y + 8) = temp_upper_value;
#line 159
  *(y + 9) = temp_lower_value;
#line 161
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 48)];
#line 161
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 48) + 1U];
#line 161
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 1)];
#line 161
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 1) + 1U];
#line 161
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 161
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 161
  temp_v1 = temp;
#line 161
  temp_upper_value ^= temp_v1;
#line 161
  temp_lower_value ^= temp_v2;
#line 161
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 18)];
#line 161
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 18) + 1U];
#line 161
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 161
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 161
  temp_v1 = temp;
#line 161
  temp_upper_value ^= temp_v1;
#line 161
  temp_lower_value ^= temp_v2;
#line 161
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 35)];
#line 161
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 35) + 1U];
#line 161
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 161
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 161
  temp_v1 = temp;
#line 161
  temp_upper_value ^= temp_v1;
#line 161
  temp_lower_value ^= temp_v2;
#line 161
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 44)];
#line 161
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 44) + 1U];
#line 161
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 61)];
#line 161
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 61) + 1U];
#line 161
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 161
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 161
  temp_v1 = temp;
#line 161
  temp_lower_value ^= temp_v1;
#line 161
  temp_upper_value ^= temp_v2;
#line 161
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 14)];
#line 161
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 14) + 1U];
#line 161
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 161
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 161
  temp_v1 = temp;
#line 161
  temp_lower_value ^= temp_v1;
#line 161
  temp_upper_value ^= temp_v2;
#line 161
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 31)];
#line 161
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 31) + 1U];
#line 161
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 161
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 161
  temp_v1 = temp;
#line 161
  temp_lower_value ^= temp_v1;
#line 161
  temp_upper_value ^= temp_v2;
#line 161
  *(y + 10) = temp_upper_value;
#line 161
  *(y + 11) = temp_lower_value;
#line 163
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 56)];
#line 163
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 56) + 1U];
#line 163
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 9)];
#line 163
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 9) + 1U];
#line 163
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 163
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 163
  temp_v1 = temp;
#line 163
  temp_upper_value ^= temp_v1;
#line 163
  temp_lower_value ^= temp_v2;
#line 163
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 26)];
#line 163
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 26) + 1U];
#line 163
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 163
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 163
  temp_v1 = temp;
#line 163
  temp_upper_value ^= temp_v1;
#line 163
  temp_lower_value ^= temp_v2;
#line 163
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 43)];
#line 163
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 43) + 1U];
#line 163
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 163
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 163
  temp_v1 = temp;
#line 163
  temp_upper_value ^= temp_v1;
#line 163
  temp_lower_value ^= temp_v2;
#line 163
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 52)];
#line 163
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 52) + 1U];
#line 163
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 5)];
#line 163
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 5) + 1U];
#line 163
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 163
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 163
  temp_v1 = temp;
#line 163
  temp_lower_value ^= temp_v1;
#line 163
  temp_upper_value ^= temp_v2;
#line 163
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 22)];
#line 163
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 22) + 1U];
#line 163
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 163
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 163
  temp_v1 = temp;
#line 163
  temp_lower_value ^= temp_v1;
#line 163
  temp_upper_value ^= temp_v2;
#line 163
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 39)];
#line 163
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 39) + 1U];
#line 163
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 163
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 163
  temp_v1 = temp;
#line 163
  temp_lower_value ^= temp_v1;
#line 163
  temp_upper_value ^= temp_v2;
#line 163
  *(y + 12) = temp_upper_value;
#line 163
  *(y + 13) = temp_lower_value;
#line 165
  temp_upper_value = (uint32_t )T[2U * (uint32_t )*(x + 0)];
#line 165
  temp_lower_value = (uint32_t )T[2U * (uint32_t )*(x + 0) + 1U];
#line 165
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 17)];
#line 165
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 17) + 1U];
#line 165
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 165
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 165
  temp_v1 = temp;
#line 165
  temp_upper_value ^= temp_v1;
#line 165
  temp_lower_value ^= temp_v2;
#line 165
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 34)];
#line 165
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 34) + 1U];
#line 165
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 165
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 165
  temp_v1 = temp;
#line 165
  temp_upper_value ^= temp_v1;
#line 165
  temp_lower_value ^= temp_v2;
#line 165
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 51)];
#line 165
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 51) + 1U];
#line 165
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 165
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 165
  temp_v1 = temp;
#line 165
  temp_upper_value ^= temp_v1;
#line 165
  temp_lower_value ^= temp_v2;
#line 165
  temp_lower_value ^= (unsigned int )T[2U * (uint32_t )*(x + 60)];
#line 165
  temp_upper_value ^= (unsigned int )T[2U * (uint32_t )*(x + 60) + 1U];
#line 165
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 13)];
#line 165
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 13) + 1U];
#line 165
  temp = (temp_v1 << 8) | (temp_v2 >> 24);
#line 165
  temp_v2 = (temp_v2 << 8) | (temp_v1 >> 24);
#line 165
  temp_v1 = temp;
#line 165
  temp_lower_value ^= temp_v1;
#line 165
  temp_upper_value ^= temp_v2;
#line 165
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 30)];
#line 165
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 30) + 1U];
#line 165
  temp = (temp_v1 << 16) | (temp_v2 >> 16);
#line 165
  temp_v2 = (temp_v2 << 16) | (temp_v1 >> 16);
#line 165
  temp_v1 = temp;
#line 165
  temp_lower_value ^= temp_v1;
#line 165
  temp_upper_value ^= temp_v2;
#line 165
  temp_v1 = (uint32_t )T[2U * (uint32_t )*(x + 47)];
#line 165
  temp_v2 = (uint32_t )T[2U * (uint32_t )*(x + 47) + 1U];
#line 165
  temp = (temp_v1 << 24) | (temp_v2 >> 8);
#line 165
  temp_v2 = (temp_v2 << 24) | (temp_v1 >> 8);
#line 165
  temp_v1 = temp;
#line 165
  temp_lower_value ^= temp_v1;
#line 165
  temp_upper_value ^= temp_v2;
#line 165
  *(y + 14) = temp_upper_value;
#line 165
  *(y + 15) = temp_lower_value;
#line 167
  return;
}
}
#line 170 "groestl.c"
static void F512(uint32_t *h , uint32_t const   *m ) 
{ 
  int i ;
  uint32_t Ptmp[16] ;
  uint32_t Qtmp[16] ;
  uint32_t y[16] ;
  uint32_t z[16] ;

  {
#line 177
  i = 0;
#line 177
  while (i < 16) {
#line 178
    z[i] = (uint32_t )*(m + i);
#line 179
    Ptmp[i] = *(h + i) ^ (unsigned int )*(m + i);
#line 177
    i ++;
  }
#line 183
  RND512Q((uint8_t *)(z), y, (uint32_t )0);
#line 184
  RND512Q((uint8_t *)(y), z, (uint32_t )16777216);
#line 185
  RND512Q((uint8_t *)(z), y, (uint32_t )33554432);
#line 186
  RND512Q((uint8_t *)(y), z, (uint32_t )50331648);
#line 187
  RND512Q((uint8_t *)(z), y, (uint32_t )67108864);
#line 188
  RND512Q((uint8_t *)(y), z, (uint32_t )83886080);
#line 189
  RND512Q((uint8_t *)(z), y, (uint32_t )100663296);
#line 190
  RND512Q((uint8_t *)(y), z, (uint32_t )117440512);
#line 191
  RND512Q((uint8_t *)(z), y, (uint32_t )134217728);
#line 192
  RND512Q((uint8_t *)(y), Qtmp, (uint32_t )150994944);
#line 195
  RND512P((uint8_t *)(Ptmp), y, (uint32_t )0);
#line 196
  RND512P((uint8_t *)(y), z, (uint32_t )1);
#line 197
  RND512P((uint8_t *)(z), y, (uint32_t )2);
#line 198
  RND512P((uint8_t *)(y), z, (uint32_t )3);
#line 199
  RND512P((uint8_t *)(z), y, (uint32_t )4);
#line 200
  RND512P((uint8_t *)(y), z, (uint32_t )5);
#line 201
  RND512P((uint8_t *)(z), y, (uint32_t )6);
#line 202
  RND512P((uint8_t *)(y), z, (uint32_t )7);
#line 203
  RND512P((uint8_t *)(z), y, (uint32_t )8);
#line 204
  RND512P((uint8_t *)(y), Ptmp, (uint32_t )9);
#line 207
  i = 0;
#line 207
  while (i < 16) {
#line 208
    *(h + i) ^= Ptmp[i] ^ Qtmp[i];
#line 207
    i ++;
  }
#line 210
  return;
}
}
#line 213 "groestl.c"
static void Transform(groestlHashState *ctx , uint8_t const   *input , int msglen ) 
{ 


  {
#line 216
  while (msglen >= 64) {
#line 217
    F512(ctx->chaining, (uint32_t const   *)((uint32_t *)input));
#line 220
    (ctx->block_counter1) ++;
#line 221
    if (ctx->block_counter1 == 0U) {
#line 222
      (ctx->block_counter2) ++;
    }
#line 216
    msglen -= 64;
#line 216
    input += 64;
  }
#line 224
  return;
}
}
#line 227 "groestl.c"
static void OutputTransformation(groestlHashState *ctx ) 
{ 
  int j ;
  uint32_t temp[16] ;
  uint32_t y[16] ;
  uint32_t z[16] ;

  {
#line 233
  j = 0;
#line 233
  while (j < 16) {
#line 234
    temp[j] = ctx->chaining[j];
#line 233
    j ++;
  }
#line 236
  RND512P((uint8_t *)(temp), y, (uint32_t )0);
#line 237
  RND512P((uint8_t *)(y), z, (uint32_t )1);
#line 238
  RND512P((uint8_t *)(z), y, (uint32_t )2);
#line 239
  RND512P((uint8_t *)(y), z, (uint32_t )3);
#line 240
  RND512P((uint8_t *)(z), y, (uint32_t )4);
#line 241
  RND512P((uint8_t *)(y), z, (uint32_t )5);
#line 242
  RND512P((uint8_t *)(z), y, (uint32_t )6);
#line 243
  RND512P((uint8_t *)(y), z, (uint32_t )7);
#line 244
  RND512P((uint8_t *)(z), y, (uint32_t )8);
#line 245
  RND512P((uint8_t *)(y), temp, (uint32_t )9);
#line 246
  j = 0;
#line 246
  while (j < 16) {
#line 247
    ctx->chaining[j] ^= temp[j];
#line 246
    j ++;
  }
#line 249
  return;
}
}
#line 252 "groestl.c"
static void Init(groestlHashState *ctx ) 
{ 
  int i ;

  {
#line 253
  i = 0;
#line 256
  while ((unsigned long )i < 64UL / sizeof(uint32_t )) {
#line 257
    ctx->chaining[i] = (uint32_t )0;
#line 256
    i ++;
  }
#line 261
  ctx->chaining[15] = ((((256U << 8) | (256U >> 24)) & 4294967295U) & 16711935U) | ((((256U << 24) | (256U >> 8)) & 4294967295U) & 4278255360U);
#line 264
  ctx->buf_ptr = 0;
#line 265
  ctx->block_counter1 = (uint32_t )0;
#line 266
  ctx->block_counter2 = (uint32_t )0;
#line 267
  ctx->bits_in_last_byte = 0;
#line 268
  return;
}
}
#line 271 "groestl.c"
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
#line 273
  index___0 = 0;
#line 274
  msglen = (int )(databitlen / 8ULL);
#line 275
  rem = (int )(databitlen % 8ULL);
#line 279
  if (ctx->buf_ptr) {
#line 280
    while (1) {
#line 280
      if (ctx->buf_ptr < 64) {
#line 280
        if (! (index___0 < msglen)) {
#line 280
          break;
        }
      } else {
#line 280
        break;
      }
#line 281
      tmp = ctx->buf_ptr;
#line 281
      (ctx->buf_ptr) ++;
#line 281
      tmp___0 = index___0;
#line 281
      index___0 ++;
#line 281
      ctx->buffer[tmp] = (BitSequence )*(input + tmp___0);
    }
#line 283
    if (ctx->buf_ptr < 64) {
#line 285
      if (rem) {
#line 286
        ctx->bits_in_last_byte = rem;
#line 287
        tmp___1 = ctx->buf_ptr;
#line 287
        (ctx->buf_ptr) ++;
#line 287
        ctx->buffer[tmp___1] = (BitSequence )*(input + index___0);
      }
#line 289
      return;
    }
#line 293
    ctx->buf_ptr = 0;
#line 294
    Transform(ctx, (uint8_t const   *)(ctx->buffer), 64);
  }
#line 298
  Transform(ctx, input + index___0, msglen - index___0);
#line 299
  index___0 += ((msglen - index___0) / 64) * 64;
#line 302
  while (index___0 < msglen) {
#line 303
    tmp___2 = ctx->buf_ptr;
#line 303
    (ctx->buf_ptr) ++;
#line 303
    tmp___3 = index___0;
#line 303
    index___0 ++;
#line 303
    ctx->buffer[tmp___2] = (BitSequence )*(input + tmp___3);
  }
#line 309
  if (rem) {
#line 310
    ctx->bits_in_last_byte = rem;
#line 311
    tmp___4 = ctx->buf_ptr;
#line 311
    (ctx->buf_ptr) ++;
#line 311
    ctx->buffer[tmp___4] = (BitSequence )*(input + index___0);
  }
#line 313
  return;
}
}
#line 319 "groestl.c"
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
#line 320
  j = 0;
#line 320
  hashbytelen = 32;
#line 321
  s = (BitSequence *)(ctx->chaining);
#line 324
  if (ctx->bits_in_last_byte) {
#line 325
    ctx->buffer[ctx->buf_ptr - 1] = (BitSequence )((int )ctx->buffer[ctx->buf_ptr - 1] & (((1 << ctx->bits_in_last_byte) - 1) << (8 - ctx->bits_in_last_byte)));
#line 326
    ctx->buffer[ctx->buf_ptr - 1] = (BitSequence )((int )ctx->buffer[ctx->buf_ptr - 1] ^ (1 << (7 - ctx->bits_in_last_byte)));
#line 327
    ctx->bits_in_last_byte = 0;
  } else {
#line 329
    tmp = ctx->buf_ptr;
#line 329
    (ctx->buf_ptr) ++;
#line 329
    ctx->buffer[tmp] = (BitSequence )128;
  }
#line 332
  if (ctx->buf_ptr > 56) {
#line 334
    while (ctx->buf_ptr < 64) {
#line 335
      tmp___0 = ctx->buf_ptr;
#line 335
      (ctx->buf_ptr) ++;
#line 335
      ctx->buffer[tmp___0] = (BitSequence )0;
    }
#line 338
    Transform(ctx, (uint8_t const   *)(ctx->buffer), 64);
#line 339
    ctx->buf_ptr = 0;
  }
#line 341
  while (ctx->buf_ptr < 56) {
#line 342
    tmp___1 = ctx->buf_ptr;
#line 342
    (ctx->buf_ptr) ++;
#line 342
    ctx->buffer[tmp___1] = (BitSequence )0;
  }
#line 346
  (ctx->block_counter1) ++;
#line 347
  if (ctx->block_counter1 == 0U) {
#line 348
    (ctx->block_counter2) ++;
  }
#line 349
  ctx->buf_ptr = 64;
#line 351
  while (ctx->buf_ptr > 64 - (int )sizeof(uint32_t )) {
#line 352
    (ctx->buf_ptr) --;
#line 352
    ctx->buffer[ctx->buf_ptr] = (uint8_t )ctx->block_counter1;
#line 353
    ctx->block_counter1 >>= 8;
  }
#line 355
  while (ctx->buf_ptr > 56) {
#line 356
    (ctx->buf_ptr) --;
#line 356
    ctx->buffer[ctx->buf_ptr] = (uint8_t )ctx->block_counter2;
#line 357
    ctx->block_counter2 >>= 8;
  }
#line 360
  Transform(ctx, (uint8_t const   *)(ctx->buffer), 64);
#line 362
  OutputTransformation(ctx);
#line 365
  i = 64 - hashbytelen;
#line 365
  while (i < 64) {
#line 366
    *(output___0 + j) = *(s + i);
#line 365
    i ++;
#line 365
    j ++;
  }
#line 370
  i = 0;
#line 370
  while (i < 8) {
#line 371
    ctx->chaining[i] = (uint32_t )0;
#line 370
    i ++;
  }
#line 373
  i = 0;
#line 373
  while (i < 64) {
#line 374
    ctx->buffer[i] = (BitSequence )0;
#line 373
    i ++;
  }
#line 376
  return;
}
}
#line 379 "groestl.c"
void groestl(BitSequence const   *data , DataLength databitlen , BitSequence *hashval ) 
{ 
  groestlHashState context ;

  {
#line 385
  Init(& context);
#line 388
  Update(& context, data, databitlen);
#line 391
  Final(& context, hashval);
#line 392
  return;
}
}
#line 1 "cil-Ux8g28Rc.o"
#pragma merger("0","/tmp/cil-K3bWiZQv.i","")
#line 19 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/assert.h"
extern void __assert_fail(char const   * , char const   * , int  , char const   * ) ;
#line 49 "jh_ansi_opt64.c"
static unsigned char const   JH224_H0[128]  = 
#line 49 "jh_ansi_opt64.c"
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
#line 61 "jh_ansi_opt64.c"
static unsigned char const   JH256_H0[128]  = 
#line 61
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
#line 73 "jh_ansi_opt64.c"
static unsigned char const   JH384_H0[128]  = 
#line 73
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
#line 85 "jh_ansi_opt64.c"
static unsigned char const   JH512_H0[128]  = 
#line 85
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
#line 99 "jh_ansi_opt64.c"
static unsigned char const   E8_bitslice_roundconstant[42][32]  = 
#line 99
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
#line 227
static void E8(hashState *state ) ;
#line 229
static void F8(hashState *state ) ;
#line 232
static HashReturn Init___0(hashState *state , int hashbitlen ) ;
#line 233
static HashReturn Update___0(hashState *state , BitSequence const   *data , DataLength databitlen ) ;
#line 235
static HashReturn Final___0(hashState *state , BitSequence *hashval ) ;
#line 236
static HashReturn Hash(int hashbitlen , BitSequence const   *data , DataLength databitlen ,
                       BitSequence *hashval ) ;
#line 306 "jh_ansi_opt64.c"
static void E8(hashState *state ) 
{ 
  uint64 i ;
  uint64 roundnumber ;
  uint64 temp0 ;
  uint64 temp1 ;

  {
#line 309
  roundnumber = (uint64 )0;
#line 309
  while (roundnumber < 42ULL) {
#line 311
    i = (uint64 )0;
#line 311
    while (i < 2ULL) {
#line 312
      state->x[6][i] = ~ state->x[6][i];
#line 312
      state->x[7][i] = ~ state->x[7][i];
#line 312
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber]) + i);
#line 312
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber]) + (i + 2ULL));
#line 312
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 312
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 312
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 312
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 312
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 312
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 312
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 312
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 312
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 312
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 312
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 312
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 312
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 312
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 312
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 312
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 312
      state->x[4][i] ^= temp0;
#line 312
      state->x[5][i] ^= temp1;
#line 316
      state->x[1][i] ^= state->x[2][i];
#line 316
      state->x[3][i] ^= state->x[4][i];
#line 316
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 316
      state->x[7][i] ^= state->x[0][i];
#line 316
      state->x[0][i] ^= state->x[3][i];
#line 316
      state->x[2][i] ^= state->x[5][i];
#line 316
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 316
      state->x[6][i] ^= state->x[1][i];
#line 318
      state->x[1][i] = ((state->x[1][i] & 6148914691236517205ULL) << 1) | ((state->x[1][i] & 0xaaaaaaaaaaaaaaaaULL) >> 1);
#line 319
      state->x[3][i] = ((state->x[3][i] & 6148914691236517205ULL) << 1) | ((state->x[3][i] & 0xaaaaaaaaaaaaaaaaULL) >> 1);
#line 320
      state->x[5][i] = ((state->x[5][i] & 6148914691236517205ULL) << 1) | ((state->x[5][i] & 0xaaaaaaaaaaaaaaaaULL) >> 1);
#line 321
      state->x[7][i] = ((state->x[7][i] & 6148914691236517205ULL) << 1) | ((state->x[7][i] & 0xaaaaaaaaaaaaaaaaULL) >> 1);
#line 311
      i ++;
    }
#line 325
    i = (uint64 )0;
#line 325
    while (i < 2ULL) {
#line 326
      state->x[6][i] = ~ state->x[6][i];
#line 326
      state->x[7][i] = ~ state->x[7][i];
#line 326
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 1ULL]) + i);
#line 326
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 1ULL]) + (i + 2ULL));
#line 326
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 1ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 326
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 1ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 326
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 326
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 326
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 326
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 326
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 326
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 326
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 326
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 326
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 326
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 326
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 326
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 326
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 326
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 326
      state->x[4][i] ^= temp0;
#line 326
      state->x[5][i] ^= temp1;
#line 330
      state->x[1][i] ^= state->x[2][i];
#line 330
      state->x[3][i] ^= state->x[4][i];
#line 330
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 330
      state->x[7][i] ^= state->x[0][i];
#line 330
      state->x[0][i] ^= state->x[3][i];
#line 330
      state->x[2][i] ^= state->x[5][i];
#line 330
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 330
      state->x[6][i] ^= state->x[1][i];
#line 332
      state->x[1][i] = ((state->x[1][i] & 3689348814741910323ULL) << 2) | ((state->x[1][i] & 0xccccccccccccccccULL) >> 2);
#line 333
      state->x[3][i] = ((state->x[3][i] & 3689348814741910323ULL) << 2) | ((state->x[3][i] & 0xccccccccccccccccULL) >> 2);
#line 334
      state->x[5][i] = ((state->x[5][i] & 3689348814741910323ULL) << 2) | ((state->x[5][i] & 0xccccccccccccccccULL) >> 2);
#line 335
      state->x[7][i] = ((state->x[7][i] & 3689348814741910323ULL) << 2) | ((state->x[7][i] & 0xccccccccccccccccULL) >> 2);
#line 325
      i ++;
    }
#line 339
    i = (uint64 )0;
#line 339
    while (i < 2ULL) {
#line 340
      state->x[6][i] = ~ state->x[6][i];
#line 340
      state->x[7][i] = ~ state->x[7][i];
#line 340
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 2ULL]) + i);
#line 340
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 2ULL]) + (i + 2ULL));
#line 340
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 2ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 340
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 2ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 340
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 340
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 340
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 340
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 340
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 340
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 340
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 340
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 340
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 340
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 340
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 340
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 340
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 340
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 340
      state->x[4][i] ^= temp0;
#line 340
      state->x[5][i] ^= temp1;
#line 344
      state->x[1][i] ^= state->x[2][i];
#line 344
      state->x[3][i] ^= state->x[4][i];
#line 344
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 344
      state->x[7][i] ^= state->x[0][i];
#line 344
      state->x[0][i] ^= state->x[3][i];
#line 344
      state->x[2][i] ^= state->x[5][i];
#line 344
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 344
      state->x[6][i] ^= state->x[1][i];
#line 346
      state->x[1][i] = ((state->x[1][i] & 1085102592571150095ULL) << 4) | ((state->x[1][i] & 0xf0f0f0f0f0f0f0f0ULL) >> 4);
#line 347
      state->x[3][i] = ((state->x[3][i] & 1085102592571150095ULL) << 4) | ((state->x[3][i] & 0xf0f0f0f0f0f0f0f0ULL) >> 4);
#line 348
      state->x[5][i] = ((state->x[5][i] & 1085102592571150095ULL) << 4) | ((state->x[5][i] & 0xf0f0f0f0f0f0f0f0ULL) >> 4);
#line 349
      state->x[7][i] = ((state->x[7][i] & 1085102592571150095ULL) << 4) | ((state->x[7][i] & 0xf0f0f0f0f0f0f0f0ULL) >> 4);
#line 339
      i ++;
    }
#line 353
    i = (uint64 )0;
#line 353
    while (i < 2ULL) {
#line 354
      state->x[6][i] = ~ state->x[6][i];
#line 354
      state->x[7][i] = ~ state->x[7][i];
#line 354
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 3ULL]) + i);
#line 354
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 3ULL]) + (i + 2ULL));
#line 354
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 3ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 354
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 3ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 354
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 354
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 354
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 354
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 354
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 354
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 354
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 354
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 354
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 354
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 354
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 354
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 354
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 354
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 354
      state->x[4][i] ^= temp0;
#line 354
      state->x[5][i] ^= temp1;
#line 358
      state->x[1][i] ^= state->x[2][i];
#line 358
      state->x[3][i] ^= state->x[4][i];
#line 358
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 358
      state->x[7][i] ^= state->x[0][i];
#line 358
      state->x[0][i] ^= state->x[3][i];
#line 358
      state->x[2][i] ^= state->x[5][i];
#line 358
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 358
      state->x[6][i] ^= state->x[1][i];
#line 360
      state->x[1][i] = ((state->x[1][i] & 71777214294589695ULL) << 8) | ((state->x[1][i] & 0xff00ff00ff00ff00ULL) >> 8);
#line 361
      state->x[3][i] = ((state->x[3][i] & 71777214294589695ULL) << 8) | ((state->x[3][i] & 0xff00ff00ff00ff00ULL) >> 8);
#line 362
      state->x[5][i] = ((state->x[5][i] & 71777214294589695ULL) << 8) | ((state->x[5][i] & 0xff00ff00ff00ff00ULL) >> 8);
#line 363
      state->x[7][i] = ((state->x[7][i] & 71777214294589695ULL) << 8) | ((state->x[7][i] & 0xff00ff00ff00ff00ULL) >> 8);
#line 353
      i ++;
    }
#line 367
    i = (uint64 )0;
#line 367
    while (i < 2ULL) {
#line 368
      state->x[6][i] = ~ state->x[6][i];
#line 368
      state->x[7][i] = ~ state->x[7][i];
#line 368
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 4ULL]) + i);
#line 368
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 4ULL]) + (i + 2ULL));
#line 368
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 4ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 368
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 4ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 368
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 368
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 368
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 368
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 368
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 368
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 368
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 368
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 368
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 368
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 368
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 368
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 368
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 368
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 368
      state->x[4][i] ^= temp0;
#line 368
      state->x[5][i] ^= temp1;
#line 372
      state->x[1][i] ^= state->x[2][i];
#line 372
      state->x[3][i] ^= state->x[4][i];
#line 372
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 372
      state->x[7][i] ^= state->x[0][i];
#line 372
      state->x[0][i] ^= state->x[3][i];
#line 372
      state->x[2][i] ^= state->x[5][i];
#line 372
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 372
      state->x[6][i] ^= state->x[1][i];
#line 374
      state->x[1][i] = ((state->x[1][i] & 281470681808895ULL) << 16) | ((state->x[1][i] & 0xffff0000ffff0000ULL) >> 16);
#line 375
      state->x[3][i] = ((state->x[3][i] & 281470681808895ULL) << 16) | ((state->x[3][i] & 0xffff0000ffff0000ULL) >> 16);
#line 376
      state->x[5][i] = ((state->x[5][i] & 281470681808895ULL) << 16) | ((state->x[5][i] & 0xffff0000ffff0000ULL) >> 16);
#line 377
      state->x[7][i] = ((state->x[7][i] & 281470681808895ULL) << 16) | ((state->x[7][i] & 0xffff0000ffff0000ULL) >> 16);
#line 367
      i ++;
    }
#line 381
    i = (uint64 )0;
#line 381
    while (i < 2ULL) {
#line 382
      state->x[6][i] = ~ state->x[6][i];
#line 382
      state->x[7][i] = ~ state->x[7][i];
#line 382
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 5ULL]) + i);
#line 382
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 5ULL]) + (i + 2ULL));
#line 382
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 5ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 382
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 5ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 382
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 382
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 382
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 382
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 382
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 382
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 382
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 382
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 382
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 382
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 382
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 382
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 382
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 382
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 382
      state->x[4][i] ^= temp0;
#line 382
      state->x[5][i] ^= temp1;
#line 386
      state->x[1][i] ^= state->x[2][i];
#line 386
      state->x[3][i] ^= state->x[4][i];
#line 386
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 386
      state->x[7][i] ^= state->x[0][i];
#line 386
      state->x[0][i] ^= state->x[3][i];
#line 386
      state->x[2][i] ^= state->x[5][i];
#line 386
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 386
      state->x[6][i] ^= state->x[1][i];
#line 388
      state->x[1][i] = (state->x[1][i] << 32) | (state->x[1][i] >> 32);
#line 389
      state->x[3][i] = (state->x[3][i] << 32) | (state->x[3][i] >> 32);
#line 390
      state->x[5][i] = (state->x[5][i] << 32) | (state->x[5][i] >> 32);
#line 391
      state->x[7][i] = (state->x[7][i] << 32) | (state->x[7][i] >> 32);
#line 381
      i ++;
    }
#line 395
    i = (uint64 )0;
#line 395
    while (i < 2ULL) {
#line 396
      state->x[6][i] = ~ state->x[6][i];
#line 396
      state->x[7][i] = ~ state->x[7][i];
#line 396
      state->x[0][i] ^= ~ state->x[4][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 6ULL]) + i);
#line 396
      state->x[1][i] ^= ~ state->x[5][i] & *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 6ULL]) + (i + 2ULL));
#line 396
      temp0 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 6ULL]) + i) ^ (state->x[0][i] & state->x[2][i]);
#line 396
      temp1 = *((uint64 *)(E8_bitslice_roundconstant[roundnumber + 6ULL]) + (i + 2ULL)) ^ (state->x[1][i] & state->x[3][i]);
#line 396
      state->x[0][i] ^= state->x[4][i] & state->x[6][i];
#line 396
      state->x[1][i] ^= state->x[5][i] & state->x[7][i];
#line 396
      state->x[6][i] ^= ~ state->x[2][i] & state->x[4][i];
#line 396
      state->x[7][i] ^= ~ state->x[3][i] & state->x[5][i];
#line 396
      state->x[2][i] ^= state->x[0][i] & state->x[4][i];
#line 396
      state->x[3][i] ^= state->x[1][i] & state->x[5][i];
#line 396
      state->x[4][i] ^= state->x[0][i] & ~ state->x[6][i];
#line 396
      state->x[5][i] ^= state->x[1][i] & ~ state->x[7][i];
#line 396
      state->x[0][i] ^= state->x[2][i] | state->x[6][i];
#line 396
      state->x[1][i] ^= state->x[3][i] | state->x[7][i];
#line 396
      state->x[6][i] ^= state->x[2][i] & state->x[4][i];
#line 396
      state->x[7][i] ^= state->x[3][i] & state->x[5][i];
#line 396
      state->x[2][i] ^= temp0 & state->x[0][i];
#line 396
      state->x[3][i] ^= temp1 & state->x[1][i];
#line 396
      state->x[4][i] ^= temp0;
#line 396
      state->x[5][i] ^= temp1;
#line 400
      state->x[1][i] ^= state->x[2][i];
#line 400
      state->x[3][i] ^= state->x[4][i];
#line 400
      state->x[5][i] ^= state->x[0][i] ^ state->x[6][i];
#line 400
      state->x[7][i] ^= state->x[0][i];
#line 400
      state->x[0][i] ^= state->x[3][i];
#line 400
      state->x[2][i] ^= state->x[5][i];
#line 400
      state->x[4][i] ^= state->x[1][i] ^ state->x[7][i];
#line 400
      state->x[6][i] ^= state->x[1][i];
#line 395
      i ++;
    }
#line 404
    i = (uint64 )1;
#line 404
    while (i < 8ULL) {
#line 405
      temp0 = state->x[i][0];
#line 406
      state->x[i][0] = state->x[i][1];
#line 407
      state->x[i][1] = temp0;
#line 404
      i += 2ULL;
    }
#line 309
    roundnumber += 7ULL;
  }
#line 410
  return;
}
}
#line 413 "jh_ansi_opt64.c"
static void F8(hashState *state ) 
{ 
  uint64 i ;

  {
#line 417
  i = (uint64 )0;
#line 417
  while (i < 8ULL) {
#line 418
    state->x[i >> 1][i & 1ULL] ^= *((uint64 *)(state->buffer) + i);
#line 417
    i ++;
  }
#line 421
  E8(state);
#line 424
  i = (uint64 )0;
#line 424
  while (i < 8ULL) {
#line 425
    state->x[(8ULL + i) >> 1][(8ULL + i) & 1ULL] ^= *((uint64 *)(state->buffer) + i);
#line 424
    i ++;
  }
#line 426
  return;
}
}
#line 429 "jh_ansi_opt64.c"
static HashReturn Init___0(hashState *state , int hashbitlen ) 
{ 


  {
#line 430
  state->databitlen = 0ULL;
#line 431
  state->datasize_in_buffer = 0ULL;
#line 434
  state->hashbitlen = hashbitlen;
#line 437
  switch (hashbitlen) {
  case 224: 
#line 439
  memcpy((void * __restrict  )(state->x), (void const   * __restrict  )(JH224_H0),
         (size_t )128);
#line 440
  break;
  case 256: 
#line 442
  memcpy((void * __restrict  )(state->x), (void const   * __restrict  )(JH256_H0),
         (size_t )128);
#line 443
  break;
  case 384: 
#line 445
  memcpy((void * __restrict  )(state->x), (void const   * __restrict  )(JH384_H0),
         (size_t )128);
#line 446
  break;
  case 512: 
#line 448
  memcpy((void * __restrict  )(state->x), (void const   * __restrict  )(JH512_H0),
         (size_t )128);
#line 449
  break;
  }
#line 452
  return ((HashReturn )0);
}
}
#line 456 "jh_ansi_opt64.c"
static HashReturn Update___0(hashState *state , BitSequence const   *data , DataLength databitlen ) 
{ 
  DataLength index___0 ;

  {
#line 460
  state->databitlen += databitlen;
#line 461
  index___0 = (DataLength )0;
#line 470
  if (state->datasize_in_buffer > 0ULL) {
#line 470
    if (state->datasize_in_buffer + databitlen < 512ULL) {
#line 472
      if ((databitlen & 7ULL) == 0ULL) {
#line 473
        memcpy((void * __restrict  )(state->buffer + (state->datasize_in_buffer >> 3)),
               (void const   * __restrict  )data, (size_t )(64ULL - (state->datasize_in_buffer >> 3)));
      } else {
#line 476
        memcpy((void * __restrict  )(state->buffer + (state->datasize_in_buffer >> 3)),
               (void const   * __restrict  )data, (size_t )((64ULL - (state->datasize_in_buffer >> 3)) + 1ULL));
      }
#line 478
      state->datasize_in_buffer += databitlen;
#line 479
      databitlen = (DataLength )0;
    }
  }
#line 484
  if (state->datasize_in_buffer > 0ULL) {
#line 484
    if (state->datasize_in_buffer + databitlen >= 512ULL) {
#line 486
      memcpy((void * __restrict  )(state->buffer + (state->datasize_in_buffer >> 3)),
             (void const   * __restrict  )data, (size_t )(64ULL - (state->datasize_in_buffer >> 3)));
#line 488
      index___0 = 64ULL - (state->datasize_in_buffer >> 3);
#line 489
      databitlen -= 512ULL - state->datasize_in_buffer;
#line 490
      F8(state);
#line 491
      state->datasize_in_buffer = 0ULL;
    }
  }
#line 495
  while (databitlen >= 512ULL) {
#line 496
    memcpy((void * __restrict  )(state->buffer), (void const   * __restrict  )(data + index___0),
           (size_t )64);
#line 497
    F8(state);
#line 495
    index___0 += 64ULL;
#line 495
    databitlen -= 512ULL;
  }
#line 502
  if (databitlen > 0ULL) {
#line 503
    if ((databitlen & 7ULL) == 0ULL) {
#line 504
      memcpy((void * __restrict  )(state->buffer), (void const   * __restrict  )(data + index___0),
             (size_t )((databitlen & 511ULL) >> 3));
    } else {
#line 506
      memcpy((void * __restrict  )(state->buffer), (void const   * __restrict  )(data + index___0),
             (size_t )(((databitlen & 511ULL) >> 3) + 1ULL));
    }
#line 507
    state->datasize_in_buffer = databitlen;
  }
#line 510
  return ((HashReturn )0);
}
}
#line 515 "jh_ansi_opt64.c"
static HashReturn Final___0(hashState *state , BitSequence *hashval ) 
{ 
  unsigned int i ;

  {
#line 518
  if ((state->databitlen & 511ULL) == 0ULL) {
#line 521
    memset((void *)(state->buffer), 0, (size_t )64);
#line 522
    state->buffer[0] = (unsigned char)128;
#line 523
    state->buffer[63] = (unsigned char )(state->databitlen & 255ULL);
#line 524
    state->buffer[62] = (unsigned char )((state->databitlen >> 8) & 255ULL);
#line 525
    state->buffer[61] = (unsigned char )((state->databitlen >> 16) & 255ULL);
#line 526
    state->buffer[60] = (unsigned char )((state->databitlen >> 24) & 255ULL);
#line 527
    state->buffer[59] = (unsigned char )((state->databitlen >> 32) & 255ULL);
#line 528
    state->buffer[58] = (unsigned char )((state->databitlen >> 40) & 255ULL);
#line 529
    state->buffer[57] = (unsigned char )((state->databitlen >> 48) & 255ULL);
#line 530
    state->buffer[56] = (unsigned char )((state->databitlen >> 56) & 255ULL);
#line 531
    F8(state);
  } else {
#line 534
    if ((state->datasize_in_buffer & 7ULL) == 0ULL) {
#line 535
      i = (unsigned int )((state->databitlen & 511ULL) >> 3);
#line 535
      while (i < 64U) {
#line 536
        state->buffer[i] = (unsigned char)0;
#line 535
        i ++;
      }
    } else {
#line 538
      i = (unsigned int )(((state->databitlen & 511ULL) >> 3) + 1ULL);
#line 538
      while (i < 64U) {
#line 539
        state->buffer[i] = (unsigned char)0;
#line 538
        i ++;
      }
    }
#line 543
    state->buffer[(state->databitlen & 511ULL) >> 3] = (unsigned char )((int )state->buffer[(state->databitlen & 511ULL) >> 3] | (1 << (7ULL - (state->databitlen & 7ULL))));
#line 546
    F8(state);
#line 547
    memset((void *)(state->buffer), 0, (size_t )64);
#line 548
    state->buffer[63] = (unsigned char )(state->databitlen & 255ULL);
#line 549
    state->buffer[62] = (unsigned char )((state->databitlen >> 8) & 255ULL);
#line 550
    state->buffer[61] = (unsigned char )((state->databitlen >> 16) & 255ULL);
#line 551
    state->buffer[60] = (unsigned char )((state->databitlen >> 24) & 255ULL);
#line 552
    state->buffer[59] = (unsigned char )((state->databitlen >> 32) & 255ULL);
#line 553
    state->buffer[58] = (unsigned char )((state->databitlen >> 40) & 255ULL);
#line 554
    state->buffer[57] = (unsigned char )((state->databitlen >> 48) & 255ULL);
#line 555
    state->buffer[56] = (unsigned char )((state->databitlen >> 56) & 255ULL);
#line 556
    F8(state);
  }
#line 560
  switch (state->hashbitlen) {
  case 224: 
#line 562
  memcpy((void * __restrict  )hashval, (void const   * __restrict  )(((unsigned char *)(state->x) + 64) + 36),
         (size_t )28);
#line 563
  break;
  case 256: 
#line 565
  memcpy((void * __restrict  )hashval, (void const   * __restrict  )(((unsigned char *)(state->x) + 64) + 32),
         (size_t )32);
#line 566
  break;
  case 384: 
#line 568
  memcpy((void * __restrict  )hashval, (void const   * __restrict  )(((unsigned char *)(state->x) + 64) + 16),
         (size_t )48);
#line 569
  break;
  case 512: 
#line 571
  memcpy((void * __restrict  )hashval, (void const   * __restrict  )((unsigned char *)(state->x) + 64),
         (size_t )64);
#line 572
  break;
  }
#line 575
  return ((HashReturn )0);
}
}
#line 582 "jh_ansi_opt64.c"
static HashReturn Hash(int hashbitlen , BitSequence const   *data , DataLength databitlen ,
                       BitSequence *hashval ) 
{ 
  hashState state ;

  {
#line 586
  if (hashbitlen == 224) {
#line 588
    Init___0(& state, hashbitlen);
#line 589
    Update___0(& state, data, databitlen);
#line 590
    Final___0(& state, hashval);
#line 591
    return ((HashReturn )0);
  } else
#line 586
  if (hashbitlen == 256) {
#line 588
    Init___0(& state, hashbitlen);
#line 589
    Update___0(& state, data, databitlen);
#line 590
    Final___0(& state, hashval);
#line 591
    return ((HashReturn )0);
  } else
#line 586
  if (hashbitlen == 384) {
#line 588
    Init___0(& state, hashbitlen);
#line 589
    Update___0(& state, data, databitlen);
#line 590
    Final___0(& state, hashval);
#line 591
    return ((HashReturn )0);
  } else
#line 586
  if (hashbitlen == 512) {
#line 588
    Init___0(& state, hashbitlen);
#line 589
    Update___0(& state, data, databitlen);
#line 590
    Final___0(& state, hashval);
#line 591
    return ((HashReturn )0);
  } else {
#line 593
    return ((HashReturn )2);
  }
}
}
#line 596 "jh_ansi_opt64.c"
void jh(unsigned int bit_len , uint8_t const   *input , size_t input_bit_length ,
        uint8_t *output___0 ) 
{ 
  HashReturn ret ;
  HashReturn tmp ;
  int tmp___0 ;

  {
#line 598
  tmp = Hash((int )bit_len, input, (DataLength )input_bit_length, output___0);
#line 598
  ret = tmp;
#line 599
  if ((unsigned int )ret == 0U) {
#line 599
    tmp___0 = 1;
  } else {
#line 599
    __assert_fail("ret == SUCCESS", "jh_ansi_opt64.c", 599, "jh");
#line 599
    tmp___0 = 0;
  }
#line 600
  return;
}
}
#line 1 "cil-tojVQhHU.o"
#pragma merger("0","/tmp/cil-Lm4RoOHU.i","")
#line 17 "keccak.c"
uint64_t const   keccakf_rndc[24]  = 
#line 17 "keccak.c"
  {      (uint64_t const   )1,      (uint64_t const   )32898,      (uint64_t const   )0x800000000000808aULL,      (uint64_t const   )0x8000000080008000ULL, 
        (uint64_t const   )32907,      (uint64_t const   )2147483649U,      (uint64_t const   )0x8000000080008081ULL,      (uint64_t const   )0x8000000000008009ULL, 
        (uint64_t const   )138,      (uint64_t const   )136,      (uint64_t const   )2147516425U,      (uint64_t const   )2147483658U, 
        (uint64_t const   )2147516555U,      (uint64_t const   )0x800000000000008bULL,      (uint64_t const   )0x8000000000008089ULL,      (uint64_t const   )0x8000000000008003ULL, 
        (uint64_t const   )0x8000000000008002ULL,      (uint64_t const   )0x8000000000000080ULL,      (uint64_t const   )32778,      (uint64_t const   )0x800000008000000aULL, 
        (uint64_t const   )0x8000000080008081ULL,      (uint64_t const   )0x8000000000008080ULL,      (uint64_t const   )2147483649U,      (uint64_t const   )0x8000000080008008ULL};
#line 27 "keccak.c"
int const   keccakf_rotc[24]  = 
#line 27
  {      (int const   )1,      (int const   )3,      (int const   )6,      (int const   )10, 
        (int const   )15,      (int const   )21,      (int const   )28,      (int const   )36, 
        (int const   )45,      (int const   )55,      (int const   )2,      (int const   )14, 
        (int const   )27,      (int const   )41,      (int const   )56,      (int const   )8, 
        (int const   )25,      (int const   )43,      (int const   )62,      (int const   )18, 
        (int const   )39,      (int const   )61,      (int const   )20,      (int const   )44};
#line 30 "keccak.c"
int const   keccakf_piln[24]  = 
#line 30
  {      (int const   )10,      (int const   )7,      (int const   )11,      (int const   )17, 
        (int const   )18,      (int const   )3,      (int const   )5,      (int const   )16, 
        (int const   )8,      (int const   )21,      (int const   )24,      (int const   )4, 
        (int const   )15,      (int const   )23,      (int const   )19,      (int const   )13, 
        (int const   )12,      (int const   )2,      (int const   )20,      (int const   )14, 
        (int const   )22,      (int const   )9,      (int const   )6,      (int const   )1};
#line 35 "keccak.c"
void keccakf(uint64_t *st , int rounds ) 
{ 
  int i ;
  int j ;
  int round___0 ;
  uint64_t t ;
  uint64_t bc[5] ;

  {
#line 39
  round___0 = 0;
#line 39
  while (round___0 < rounds) {
#line 42
    bc[0] = (((*(st + 0) ^ *(st + 5)) ^ *(st + 10)) ^ *(st + 15)) ^ *(st + 20);
#line 43
    bc[1] = (((*(st + 1) ^ *(st + 6)) ^ *(st + 11)) ^ *(st + 16)) ^ *(st + 21);
#line 44
    bc[2] = (((*(st + 2) ^ *(st + 7)) ^ *(st + 12)) ^ *(st + 17)) ^ *(st + 22);
#line 45
    bc[3] = (((*(st + 3) ^ *(st + 8)) ^ *(st + 13)) ^ *(st + 18)) ^ *(st + 23);
#line 46
    bc[4] = (((*(st + 4) ^ *(st + 9)) ^ *(st + 14)) ^ *(st + 19)) ^ *(st + 24);
#line 48
    i = 0;
#line 48
    while (i < 5) {
#line 49
      t = bc[(i + 4) % 5] ^ ((bc[(i + 1) % 5] << 1) | (bc[(i + 1) % 5] >> 63));
#line 50
      *(st + i) ^= t;
#line 51
      *(st + (i + 5)) ^= t;
#line 52
      *(st + (i + 10)) ^= t;
#line 53
      *(st + (i + 15)) ^= t;
#line 54
      *(st + (i + 20)) ^= t;
#line 48
      i ++;
    }
#line 58
    t = *(st + 1);
#line 59
    i = 0;
#line 59
    while (i < 24) {
#line 60
      bc[0] = *(st + keccakf_piln[i]);
#line 61
      *(st + keccakf_piln[i]) = (t << keccakf_rotc[i]) | (t >> (64 - (int )keccakf_rotc[i]));
#line 62
      t = bc[0];
#line 59
      i ++;
    }
#line 66
    j = 0;
#line 66
    while (j < 25) {
#line 67
      bc[0] = *(st + j);
#line 68
      bc[1] = *(st + (j + 1));
#line 69
      bc[2] = *(st + (j + 2));
#line 70
      bc[3] = *(st + (j + 3));
#line 71
      bc[4] = *(st + (j + 4));
#line 72
      *(st + j) ^= ~ bc[1] & bc[2];
#line 73
      *(st + (j + 1)) ^= ~ bc[2] & bc[3];
#line 74
      *(st + (j + 2)) ^= ~ bc[3] & bc[4];
#line 75
      *(st + (j + 3)) ^= ~ bc[4] & bc[0];
#line 76
      *(st + (j + 4)) ^= ~ bc[0] & bc[1];
#line 66
      j += 5;
    }
#line 80
    *(st + 0) ^= (unsigned long long )keccakf_rndc[round___0];
#line 39
    round___0 ++;
  }
#line 82
  return;
}
}
#line 87 "keccak.c"
void keccak(uint8_t const   *in , int inlen , uint8_t *md , int mdlen ) 
{ 
  state_t st ;
  uint8_t temp[144] ;
  int i ;
  int rsiz ;
  int rsizw ;
  int tmp ;

  {
#line 92
  if (sizeof(state_t ) == (unsigned long )mdlen) {
#line 92
    rsiz = 136;
  } else {
#line 92
    rsiz = 200 - 2 * mdlen;
  }
#line 93
  rsizw = rsiz / 8;
#line 95
  memset((void *)(st), 0, sizeof(st));
#line 97
  while (inlen >= rsiz) {
#line 98
    i = 0;
#line 98
    while (i < rsizw) {
#line 99
      st[i] ^= *((uint64_t *)in + i);
#line 98
      i ++;
    }
#line 100
    keccakf((uint64_t *)(st), 24);
#line 97
    inlen -= rsiz;
#line 97
    in += rsiz;
  }
#line 104
  memcpy((void * __restrict  )(temp), (void const   * __restrict  )in, (size_t )inlen);
#line 105
  tmp = inlen;
#line 105
  inlen ++;
#line 105
  temp[tmp] = (uint8_t )1;
#line 106
  memset((void *)(temp + inlen), 0, (size_t )(rsiz - inlen));
#line 107
  temp[rsiz - 1] = (uint8_t )((int )temp[rsiz - 1] | 128);
#line 109
  i = 0;
#line 109
  while (i < rsizw) {
#line 110
    st[i] ^= *((uint64_t *)(temp) + i);
#line 109
    i ++;
  }
#line 112
  keccakf((uint64_t *)(st), 24);
#line 114
  memcpy((void * __restrict  )md, (void const   * __restrict  )(st), (size_t )mdlen);
#line 115
  return;
}
}
#line 117 "keccak.c"
void keccak1600(uint8_t const   *in , int inlen , uint8_t *md ) 
{ 


  {
#line 118
  keccak(in, inlen, md, (int )sizeof(state_t ));
#line 119
  return;
}
}
#line 1 "cil-y736rvgO.o"
#pragma merger("0","/tmp/cil-AGuvDyGi.i","")
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
#line 14
  lite = 1;
#line 15
  variant = 1;
#line 17
  tmp = strlen((char const   *)hex);
#line 17
  len = (int )(tmp / 2UL);
#line 19
  __lengthofinp = (unsigned long )len;
#line 19
  tmp___0 = __builtin_alloca(sizeof(*inp) * __lengthofinp);
#line 19
  inp = (unsigned char *)tmp___0;
#line 21
  pos = hex;
#line 22
  i = (size_t )0;
#line 22
  while (i < (size_t )len) {
#line 23
    sscanf((char const   * __restrict  )pos, (char const   * __restrict  )"%2hhx",
           inp + i);
#line 24
    pos += 2;
#line 22
    i ++;
  }
#line 29
  cryptonight((void *)(hash), (void const   *)inp, (size_t )len, lite, variant, height);
#line 31
  ptr = & output[0];
#line 33
  i___0 = (size_t )0;
#line 33
  while (i___0 < 32UL) {
#line 34
    tmp___1 = sprintf((char * __restrict  )ptr, (char const   * __restrict  )"%02x",
                      (int )hash[i___0]);
#line 34
    ptr += tmp___1;
#line 33
    i___0 ++;
  }
#line 37
  return (& output[0]);
}
}
#line 1 "cil-PmDLFxUW.o"
#pragma merger("0","/tmp/cil-mb3xwBeW.i","")
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
#line 72 "oaes_lib.c"
static uint8_t oaes_header[16]  = 
#line 72 "oaes_lib.c"
  {      (uint8_t )79,      (uint8_t )65,      (uint8_t )69,      (uint8_t )83, 
        (uint8_t )1,      (uint8_t )2,      (uint8_t )0,      (uint8_t )0, 
        (uint8_t )0,      (uint8_t )0,      (uint8_t )0,      (uint8_t )0, 
        (uint8_t )0,      (uint8_t )0,      (uint8_t )0,      (uint8_t )0};
#line 78 "oaes_lib.c"
static uint8_t oaes_gf_8[10]  = 
#line 78
  {      (uint8_t )1,      (uint8_t )2,      (uint8_t )4,      (uint8_t )8, 
        (uint8_t )16,      (uint8_t )32,      (uint8_t )64,      (uint8_t )128, 
        (uint8_t )27,      (uint8_t )54};
#line 81 "oaes_lib.c"
static uint8_t oaes_sub_byte_value[16][16]  = 
#line 81
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
#line 133 "oaes_lib.c"
static uint8_t oaes_inv_sub_byte_value[16][16]  = 
#line 133
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
#line 185 "oaes_lib.c"
static uint8_t oaes_gf_mul_2[16][16]  = 
#line 185
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
#line 237 "oaes_lib.c"
static uint8_t oaes_gf_mul_3[16][16]  = 
#line 237
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
#line 289 "oaes_lib.c"
static uint8_t oaes_gf_mul_9[16][16]  = 
#line 289
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
#line 341 "oaes_lib.c"
static uint8_t oaes_gf_mul_b[16][16]  = 
#line 341
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
#line 393 "oaes_lib.c"
static uint8_t oaes_gf_mul_d[16][16]  = 
#line 393
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
#line 445 "oaes_lib.c"
static uint8_t oaes_gf_mul_e[16][16]  = 
#line 445
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
#line 497 "oaes_lib.c"
static OAES_RET oaes_sub_byte(uint8_t *byte ) 
{ 
  size_t _x ;
  size_t _y ;

  {
#line 500
  if ((unsigned int )((void *)0) == (unsigned int )byte) {
#line 501
    return ((OAES_RET )2);
  }
#line 503
  _x = (size_t )*byte;
#line 503
  _y = (_x >> 4) & 15UL;
#line 504
  _x &= 15UL;
#line 505
  *byte = oaes_sub_byte_value[_y][_x];
#line 507
  return ((OAES_RET )0);
}
}
#line 510 "oaes_lib.c"
static OAES_RET oaes_inv_sub_byte(uint8_t *byte ) 
{ 
  size_t _x ;
  size_t _y ;

  {
#line 513
  if ((unsigned int )((void *)0) == (unsigned int )byte) {
#line 514
    return ((OAES_RET )2);
  }
#line 516
  _y = (size_t )*byte;
#line 516
  _x = _y;
#line 517
  _x &= 15UL;
#line 518
  _y &= 240UL;
#line 519
  _y >>= 4;
#line 520
  *byte = oaes_inv_sub_byte_value[_y][_x];
#line 522
  return ((OAES_RET )0);
}
}
#line 540 "oaes_lib.c"
static OAES_RET oaes_word_rot_left(uint8_t *word ) 
{ 
  uint8_t _temp[4] ;

  {
#line 543
  if ((unsigned int )((void *)0) == (unsigned int )word) {
#line 544
    return ((OAES_RET )2);
  }
#line 546
  memcpy((void * __restrict  )(_temp), (void const   * __restrict  )(word + 1), (size_t )3);
#line 547
  _temp[3] = *(word + 0);
#line 548
  memcpy((void * __restrict  )word, (void const   * __restrict  )(_temp), (size_t )4);
#line 550
  return ((OAES_RET )0);
}
}
#line 553 "oaes_lib.c"
static OAES_RET oaes_shift_rows(uint8_t *block ) 
{ 
  uint8_t _temp[5] ;

  {
#line 554
  if ((unsigned int )((void *)0) == (unsigned int )block) {
#line 555
    return ((OAES_RET )2);
  }
#line 557
  _temp[0] = *(block + 3);
#line 557
  _temp[1] = *(block + 2);
#line 557
  _temp[2] = *(block + 1);
#line 557
  _temp[3] = *(block + 6);
#line 557
  _temp[4] = *(block + 11);
#line 560
  *(block + 11) = *(block + 7);
#line 561
  *(block + 1) = *(block + 5);
#line 562
  *(block + 2) = *(block + 10);
#line 563
  *(block + 3) = *(block + 15);
#line 564
  *(block + 5) = *(block + 9);
#line 565
  *(block + 6) = *(block + 14);
#line 566
  *(block + 7) = _temp[0];
#line 567
  *(block + 9) = *(block + 13);
#line 568
  *(block + 10) = _temp[1];
#line 569
  *(block + 13) = _temp[2];
#line 570
  *(block + 14) = _temp[3];
#line 571
  *(block + 15) = _temp[4];
#line 573
  return ((OAES_RET )0);
}
}
#line 576 "oaes_lib.c"
static OAES_RET oaes_inv_shift_rows(uint8_t *block ) 
{ 
  uint8_t _temp[16] ;

  {
#line 579
  if ((unsigned int )((void *)0) == (unsigned int )block) {
#line 580
    return ((OAES_RET )2);
  }
#line 582
  _temp[0] = *(block + 0);
#line 583
  _temp[1] = *(block + 13);
#line 584
  _temp[2] = *(block + 10);
#line 585
  _temp[3] = *(block + 7);
#line 586
  _temp[4] = *(block + 4);
#line 587
  _temp[5] = *(block + 1);
#line 588
  _temp[6] = *(block + 14);
#line 589
  _temp[7] = *(block + 11);
#line 590
  _temp[8] = *(block + 8);
#line 591
  _temp[9] = *(block + 5);
#line 592
  _temp[10] = *(block + 2);
#line 593
  _temp[11] = *(block + 15);
#line 594
  _temp[12] = *(block + 12);
#line 595
  _temp[13] = *(block + 9);
#line 596
  _temp[14] = *(block + 6);
#line 597
  _temp[15] = *(block + 3);
#line 598
  memcpy((void * __restrict  )block, (void const   * __restrict  )(_temp), (size_t )16);
#line 600
  return ((OAES_RET )0);
}
}
#line 603 "oaes_lib.c"
static uint8_t oaes_gf_mul(uint8_t left , uint8_t right ) 
{ 
  size_t _x ;
  size_t _y ;

  {
#line 606
  _x = (size_t )left;
#line 606
  _y = (_x >> 4) & 15UL;
#line 607
  _x &= 15UL;
#line 609
  switch ((int )right) {
  case 2: 
#line 611
  return (oaes_gf_mul_2[_y][_x]);
#line 612
  break;
  case 3: 
#line 614
  return (oaes_gf_mul_3[_y][_x]);
#line 615
  break;
  case 9: 
#line 617
  return (oaes_gf_mul_9[_y][_x]);
#line 618
  break;
  case 11: 
#line 620
  return (oaes_gf_mul_b[_y][_x]);
#line 621
  break;
  case 13: 
#line 623
  return (oaes_gf_mul_d[_y][_x]);
#line 624
  break;
  case 14: 
#line 626
  return (oaes_gf_mul_e[_y][_x]);
#line 627
  break;
  default: 
#line 629
  return (left);
#line 630
  break;
  }
#line 632
  return ((unsigned char)0);
}
}
#line 634 "oaes_lib.c"
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
#line 637
  if ((unsigned int )((void *)0) == (unsigned int )word) {
#line 638
    return ((OAES_RET )2);
  }
#line 640
  tmp = oaes_gf_mul(*(word + 0), (uint8_t )2);
#line 640
  tmp___0 = oaes_gf_mul(*(word + 1), (uint8_t )3);
#line 640
  _temp[0] = (uint8_t )((((int )tmp ^ (int )tmp___0) ^ (int )*(word + 2)) ^ (int )*(word + 3));
#line 642
  tmp___1 = oaes_gf_mul(*(word + 1), (uint8_t )2);
#line 642
  tmp___2 = oaes_gf_mul(*(word + 2), (uint8_t )3);
#line 642
  _temp[1] = (uint8_t )((((int )*(word + 0) ^ (int )tmp___1) ^ (int )tmp___2) ^ (int )*(word + 3));
#line 644
  tmp___3 = oaes_gf_mul(*(word + 2), (uint8_t )2);
#line 644
  tmp___4 = oaes_gf_mul(*(word + 3), (uint8_t )3);
#line 644
  _temp[2] = (uint8_t )((((int )*(word + 0) ^ (int )*(word + 1)) ^ (int )tmp___3) ^ (int )tmp___4);
#line 646
  tmp___5 = oaes_gf_mul(*(word + 0), (uint8_t )3);
#line 646
  tmp___6 = oaes_gf_mul(*(word + 3), (uint8_t )2);
#line 646
  _temp[3] = (uint8_t )((((int )tmp___5 ^ (int )*(word + 1)) ^ (int )*(word + 2)) ^ (int )tmp___6);
#line 648
  memcpy((void * __restrict  )word, (void const   * __restrict  )(_temp), (size_t )4);
#line 650
  return ((OAES_RET )0);
}
}
#line 653 "oaes_lib.c"
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
#line 656
  if ((unsigned int )((void *)0) == (unsigned int )word) {
#line 657
    return ((OAES_RET )2);
  }
#line 659
  tmp = oaes_gf_mul(*(word + 0), (uint8_t )14);
#line 659
  tmp___0 = oaes_gf_mul(*(word + 1), (uint8_t )11);
#line 659
  tmp___1 = oaes_gf_mul(*(word + 2), (uint8_t )13);
#line 659
  tmp___2 = oaes_gf_mul(*(word + 3), (uint8_t )9);
#line 659
  _temp[0] = (uint8_t )((((int )tmp ^ (int )tmp___0) ^ (int )tmp___1) ^ (int )tmp___2);
#line 661
  tmp___3 = oaes_gf_mul(*(word + 0), (uint8_t )9);
#line 661
  tmp___4 = oaes_gf_mul(*(word + 1), (uint8_t )14);
#line 661
  tmp___5 = oaes_gf_mul(*(word + 2), (uint8_t )11);
#line 661
  tmp___6 = oaes_gf_mul(*(word + 3), (uint8_t )13);
#line 661
  _temp[1] = (uint8_t )((((int )tmp___3 ^ (int )tmp___4) ^ (int )tmp___5) ^ (int )tmp___6);
#line 663
  tmp___7 = oaes_gf_mul(*(word + 0), (uint8_t )13);
#line 663
  tmp___8 = oaes_gf_mul(*(word + 1), (uint8_t )9);
#line 663
  tmp___9 = oaes_gf_mul(*(word + 2), (uint8_t )14);
#line 663
  tmp___10 = oaes_gf_mul(*(word + 3), (uint8_t )11);
#line 663
  _temp[2] = (uint8_t )((((int )tmp___7 ^ (int )tmp___8) ^ (int )tmp___9) ^ (int )tmp___10);
#line 665
  tmp___11 = oaes_gf_mul(*(word + 0), (uint8_t )11);
#line 665
  tmp___12 = oaes_gf_mul(*(word + 1), (uint8_t )13);
#line 665
  tmp___13 = oaes_gf_mul(*(word + 2), (uint8_t )9);
#line 665
  tmp___14 = oaes_gf_mul(*(word + 3), (uint8_t )14);
#line 665
  _temp[3] = (uint8_t )((((int )tmp___11 ^ (int )tmp___12) ^ (int )tmp___13) ^ (int )tmp___14);
#line 667
  memcpy((void * __restrict  )word, (void const   * __restrict  )(_temp), (size_t )4);
#line 669
  return ((OAES_RET )0);
}
}
#line 672 "oaes_lib.c"
OAES_RET oaes_sprintf(char *buf , size_t *buf_len , uint8_t const   *data , size_t data_len ) 
{ 
  size_t _i ;
  size_t _buf_len_in ;
  char _temp[4] ;

  {
#line 677
  if ((unsigned int )((void *)0) == (unsigned int )buf_len) {
#line 678
    return ((OAES_RET )3);
  }
#line 680
  _buf_len_in = *buf_len;
#line 681
  *buf_len = (data_len * 3UL + data_len / 16UL) + 1UL;
#line 683
  if ((unsigned int )((void *)0) == (unsigned int )buf) {
#line 684
    return ((OAES_RET )0);
  }
#line 686
  if (*buf_len > _buf_len_in) {
#line 687
    return ((OAES_RET )9);
  }
#line 689
  if ((unsigned int )((void *)0) == (unsigned int )data) {
#line 690
    return ((OAES_RET )4);
  }
#line 692
  strcpy((char * __restrict  )buf, (char const   * __restrict  )"");
#line 694
  _i = (size_t )0;
#line 694
  while (_i < data_len) {
#line 695
    sprintf((char * __restrict  )(_temp), (char const   * __restrict  )"%02x ", (int const   )*(data + _i));
#line 696
    strcat((char * __restrict  )buf, (char const   * __restrict  )(_temp));
#line 697
    if (_i) {
#line 697
      if (0UL == (_i + 1UL) % 16UL) {
#line 698
        strcat((char * __restrict  )buf, (char const   * __restrict  )"\n");
      }
    }
#line 694
    _i ++;
  }
#line 701
  return ((OAES_RET )0);
}
}
#line 722 "oaes_lib.c"
static uint32_t oaes_get_seed(void) 
{ 
  struct timeb timer ;
  struct tm *gmTimer ;
  char *_test ;
  uint32_t _ret ;
  void *tmp ;
  pid_t tmp___0 ;

  {
#line 725
  _test = (char *)((void *)0);
#line 726
  _ret = (uint32_t )0;
#line 728
  ftime(& timer);
#line 729
  gmTimer = gmtime((time_t const   *)(& timer.time));
#line 730
  tmp = calloc(sizeof(char ), (size_t )timer.millitm);
#line 730
  _test = (char *)tmp;
#line 731
  tmp___0 = getpid();
#line 731
  _ret = (uint32_t )(((uintptr_t )((((((((gmTimer->tm_year + 1900) + gmTimer->tm_mon) + 1) + gmTimer->tm_mday) + gmTimer->tm_hour) + gmTimer->tm_min) + gmTimer->tm_sec) + (int )timer.millitm) + (uintptr_t )(_test + (int )timer.millitm)) + (uintptr_t )tmp___0);
#line 735
  if (_test) {
#line 736
    free((void *)_test);
  }
#line 738
  return (_ret);
}
}
#line 742 "oaes_lib.c"
static OAES_RET oaes_key_destroy(oaes_key **key ) 
{ 


  {
#line 743
  if ((unsigned int )((void *)0) == (unsigned int )*key) {
#line 744
    return ((OAES_RET )0);
  }
#line 746
  if ((*key)->data) {
#line 747
    free((void *)(*key)->data);
#line 748
    (*key)->data = (uint8_t *)((void *)0);
  }
#line 751
  if ((*key)->exp_data) {
#line 752
    free((void *)(*key)->exp_data);
#line 753
    (*key)->exp_data = (uint8_t *)((void *)0);
  }
#line 756
  (*key)->data_len = (size_t )0;
#line 757
  (*key)->exp_data_len = (size_t )0;
#line 758
  (*key)->num_keys = (size_t )0;
#line 759
  (*key)->key_base = (size_t )0;
#line 760
  free((void *)*key);
#line 761
  *key = (oaes_key *)((void *)0);
#line 763
  return ((OAES_RET )0);
}
}
#line 766 "oaes_lib.c"
static OAES_RET oaes_key_expand(OAES_CTX *ctx ) 
{ 
  size_t _i ;
  size_t _j ;
  oaes_ctx *_ctx ;
  void *tmp ;
  uint8_t _temp[4] ;

  {
#line 768
  _ctx = (oaes_ctx *)ctx;
#line 771
  (_ctx->key)->key_base = (size_t )8;
#line 773
  (_ctx->key)->num_keys = (size_t )15;
#line 777
  (_ctx->key)->exp_data_len = (size_t )240;
#line 779
  tmp = calloc((_ctx->key)->exp_data_len, sizeof(uint8_t ));
#line 779
  (_ctx->key)->exp_data = (uint8_t *)tmp;
#line 783
  memcpy((void * __restrict  )(_ctx->key)->exp_data, (void const   * __restrict  )(_ctx->key)->data,
         (_ctx->key)->data_len);
#line 788
  _i = (size_t )8;
#line 788
  while (_i < 60UL) {
#line 791
    memcpy((void * __restrict  )(_temp), (void const   * __restrict  )((_ctx->key)->exp_data + (_i - 1UL) * 4UL),
           (size_t )4);
#line 794
    if (0UL == _i % 8UL) {
#line 795
      oaes_word_rot_left((uint8_t *)(_temp));
#line 797
      _j = (size_t )0;
#line 797
      while (_j < 4UL) {
#line 798
        oaes_sub_byte(_temp + _j);
#line 797
        _j ++;
      }
#line 800
      _temp[0] = (uint8_t )((int )_temp[0] ^ (int )oaes_gf_8[_i / (_ctx->key)->key_base - 1UL]);
    } else
#line 801
    if (4UL == _i % (_ctx->key)->key_base) {
#line 802
      _j = (size_t )0;
#line 802
      while (_j < 4UL) {
#line 803
        oaes_sub_byte(_temp + _j);
#line 802
        _j ++;
      }
    }
#line 806
    _j = (size_t )0;
#line 806
    while (_j < 4UL) {
#line 807
      *((_ctx->key)->exp_data + (_i * 4UL + _j)) = (uint8_t )((int )*((_ctx->key)->exp_data + ((_i - (_ctx->key)->key_base) * 4UL + _j)) ^ (int )_temp[_j]);
#line 806
      _j ++;
    }
#line 788
    _i ++;
  }
#line 813
  return ((OAES_RET )0);
}
}
#line 816 "oaes_lib.c"
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
#line 818
  _key = (oaes_key *)((void *)0);
#line 819
  _ctx = (oaes_ctx *)ctx;
#line 820
  _rc = (OAES_RET )0;
#line 822
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 823
    return ((OAES_RET )2);
  }
#line 825
  tmp = calloc(sizeof(oaes_key ), (size_t )1);
#line 825
  _key = (oaes_key *)tmp;
#line 827
  if ((unsigned int )((void *)0) == (unsigned int )_key) {
#line 828
    return ((OAES_RET )8);
  }
#line 830
  if (_ctx->key) {
#line 831
    oaes_key_destroy(& _ctx->key);
  }
#line 833
  _key->data_len = key_size;
#line 834
  tmp___0 = calloc(key_size, sizeof(uint8_t ));
#line 834
  _key->data = (uint8_t *)tmp___0;
#line 836
  if ((unsigned int )((void *)0) == (unsigned int )_key->data) {
#line 837
    return ((OAES_RET )8);
  }
#line 839
  _i = (size_t )0;
#line 839
  while (_i < key_size) {
#line 843
    tmp___1 = rand();
#line 843
    *(_key->data + _i) = (uint8_t )tmp___1;
#line 839
    _i ++;
  }
#line 846
  _ctx->key = _key;
#line 847
  if (_rc) {
#line 847
    tmp___3 = 1;
  } else {
#line 847
    tmp___2 = oaes_key_expand(ctx);
#line 847
    if (tmp___2) {
#line 847
      tmp___3 = 1;
    } else {
#line 847
      tmp___3 = 0;
    }
  }
#line 847
  _rc = (OAES_RET )tmp___3;
#line 849
  if ((unsigned int )_rc != 0U) {
#line 850
    oaes_key_destroy(& _ctx->key);
#line 851
    return (_rc);
  }
#line 854
  return ((OAES_RET )0);
}
}
#line 857 "oaes_lib.c"
OAES_RET oaes_key_gen_128(OAES_CTX *ctx ) 
{ 
  OAES_RET tmp ;

  {
#line 857
  tmp = oaes_key_gen(ctx, (size_t )16);
#line 857
  return (tmp);
}
}
#line 859 "oaes_lib.c"
OAES_RET oaes_key_gen_192(OAES_CTX *ctx ) 
{ 
  OAES_RET tmp ;

  {
#line 859
  tmp = oaes_key_gen(ctx, (size_t )24);
#line 859
  return (tmp);
}
}
#line 861 "oaes_lib.c"
OAES_RET oaes_key_gen_256(OAES_CTX *ctx ) 
{ 
  OAES_RET tmp ;

  {
#line 861
  tmp = oaes_key_gen(ctx, (size_t )32);
#line 861
  return (tmp);
}
}
#line 863 "oaes_lib.c"
OAES_RET oaes_key_export(OAES_CTX *ctx , uint8_t *data , size_t *data_len ) 
{ 
  size_t _data_len_in ;
  oaes_ctx *_ctx ;

  {
#line 865
  _ctx = (oaes_ctx *)ctx;
#line 867
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 868
    return ((OAES_RET )2);
  }
#line 870
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 871
    return ((OAES_RET )7);
  }
#line 873
  if ((unsigned int )((void *)0) == (unsigned int )data_len) {
#line 874
    return ((OAES_RET )4);
  }
#line 876
  _data_len_in = *data_len;
#line 878
  *data_len = (_ctx->key)->data_len + 16UL;
#line 880
  if ((unsigned int )((void *)0) == (unsigned int )data) {
#line 881
    return ((OAES_RET )0);
  }
#line 883
  if (_data_len_in < *data_len) {
#line 884
    return ((OAES_RET )9);
  }
#line 887
  memcpy((void * __restrict  )data, (void const   * __restrict  )(oaes_header), (size_t )16);
#line 888
  *(data + 5) = (uint8_t )1;
#line 889
  *(data + 7) = (uint8_t )(_ctx->key)->data_len;
#line 890
  memcpy((void * __restrict  )(data + 16), (void const   * __restrict  )(_ctx->key)->data,
         (_ctx->key)->data_len);
#line 892
  return ((OAES_RET )0);
}
}
#line 895 "oaes_lib.c"
OAES_RET oaes_key_export_data(OAES_CTX *ctx , uint8_t *data , size_t *data_len ) 
{ 
  size_t _data_len_in ;
  oaes_ctx *_ctx ;

  {
#line 897
  _ctx = (oaes_ctx *)ctx;
#line 899
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 900
    return ((OAES_RET )2);
  }
#line 902
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 903
    return ((OAES_RET )7);
  }
#line 905
  if ((unsigned int )((void *)0) == (unsigned int )data_len) {
#line 906
    return ((OAES_RET )4);
  }
#line 908
  _data_len_in = *data_len;
#line 909
  *data_len = (_ctx->key)->data_len;
#line 911
  if ((unsigned int )((void *)0) == (unsigned int )data) {
#line 912
    return ((OAES_RET )0);
  }
#line 914
  if (_data_len_in < *data_len) {
#line 915
    return ((OAES_RET )9);
  }
#line 917
  memcpy((void * __restrict  )data, (void const   * __restrict  )(_ctx->key)->data,
         *data_len);
#line 919
  return ((OAES_RET )0);
}
}
#line 922 "oaes_lib.c"
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
#line 923
  _ctx = (oaes_ctx *)ctx;
#line 924
  _rc = (OAES_RET )0;
#line 927
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 928
    return ((OAES_RET )2);
  }
#line 930
  if ((unsigned int )((void *)0) == (unsigned int )data) {
#line 931
    return ((OAES_RET )3);
  }
#line 933
  switch (data_len) {
  case 48UL: 
  case 40UL: 
  case 32UL: 
#line 937
  break;
  default: 
#line 939
  return ((OAES_RET )4);
  }
#line 943
  tmp = memcmp((void const   *)data, (void const   *)(oaes_header), (size_t )4);
#line 943
  if (0 != tmp) {
#line 944
    return ((OAES_RET )10);
  }
#line 947
  switch ((int const   )*(data + 4)) {
  case 1: 
#line 949
  break;
  default: 
#line 951
  return ((OAES_RET )10);
  }
#line 955
  switch ((int const   )*(data + 5)) {
  case 1: 
#line 957
  break;
  default: 
#line 959
  return ((OAES_RET )10);
  }
#line 963
  _key_length = (int )*(data + 7);
#line 964
  switch (_key_length) {
  case 32: 
  case 24: 
  case 16: 
#line 968
  break;
  default: 
#line 970
  return ((OAES_RET )10);
  }
#line 973
  if ((int )data_len != _key_length + 16) {
#line 974
    return ((OAES_RET )4);
  }
#line 976
  if (_ctx->key) {
#line 977
    oaes_key_destroy(& _ctx->key);
  }
#line 979
  tmp___0 = calloc(sizeof(oaes_key ), (size_t )1);
#line 979
  _ctx->key = (oaes_key *)tmp___0;
#line 981
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 982
    return ((OAES_RET )8);
  }
#line 984
  (_ctx->key)->data_len = (size_t )_key_length;
#line 985
  tmp___1 = calloc((size_t )_key_length, sizeof(uint8_t ));
#line 985
  (_ctx->key)->data = (uint8_t *)tmp___1;
#line 987
  if ((unsigned int )((void *)0) == (unsigned int )(_ctx->key)->data) {
#line 988
    oaes_key_destroy(& _ctx->key);
#line 989
    return ((OAES_RET )8);
  }
#line 992
  memcpy((void * __restrict  )(_ctx->key)->data, (void const   * __restrict  )(data + 16),
         (size_t )_key_length);
#line 993
  if (_rc) {
#line 993
    tmp___3 = 1;
  } else {
#line 993
    tmp___2 = oaes_key_expand(ctx);
#line 993
    if (tmp___2) {
#line 993
      tmp___3 = 1;
    } else {
#line 993
      tmp___3 = 0;
    }
  }
#line 993
  _rc = (OAES_RET )tmp___3;
#line 995
  if ((unsigned int )_rc != 0U) {
#line 996
    oaes_key_destroy(& _ctx->key);
#line 997
    return (_rc);
  }
#line 1000
  return ((OAES_RET )0);
}
}
#line 1003 "oaes_lib.c"
OAES_RET oaes_key_import_data(OAES_CTX *ctx , uint8_t const   *data , size_t data_len ) 
{ 
  oaes_ctx *_ctx ;
  void *tmp ;
  void *tmp___0 ;

  {
#line 1005
  _ctx = (oaes_ctx *)ctx;
#line 1007
  tmp = calloc(sizeof(oaes_key ), (size_t )1);
#line 1007
  _ctx->key = (oaes_key *)tmp;
#line 1009
  (_ctx->key)->data_len = data_len;
#line 1010
  tmp___0 = calloc(data_len, sizeof(uint8_t ));
#line 1010
  (_ctx->key)->data = (uint8_t *)tmp___0;
#line 1012
  memcpy((void * __restrict  )(_ctx->key)->data, (void const   * __restrict  )data,
         data_len);
#line 1013
  oaes_key_expand(ctx);
#line 1015
  return ((OAES_RET )0);
}
}
#line 1018 "oaes_lib.c"
OAES_CTX *oaes_alloc(void) 
{ 
  oaes_ctx *_ctx ;
  void *tmp ;
  uint32_t tmp___0 ;

  {
#line 1019
  tmp = calloc(sizeof(oaes_ctx ), (size_t )1);
#line 1019
  _ctx = (oaes_ctx *)tmp;
#line 1021
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1022
    return ((void *)0);
  }
#line 1042
  tmp___0 = oaes_get_seed();
#line 1042
  srand(tmp___0);
#line 1045
  _ctx->key = (oaes_key *)((void *)0);
#line 1046
  oaes_set_option((OAES_CTX *)_ctx, (OAES_OPTION )2, (void const   *)((void *)0));
#line 1053
  return ((OAES_CTX *)_ctx);
}
}
#line 1056 "oaes_lib.c"
OAES_RET oaes_free(OAES_CTX **ctx ) 
{ 
  oaes_ctx **_ctx ;

  {
#line 1057
  _ctx = (oaes_ctx **)ctx;
#line 1059
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1060
    return ((OAES_RET )2);
  }
#line 1062
  if ((unsigned int )((void *)0) == (unsigned int )*_ctx) {
#line 1063
    return ((OAES_RET )0);
  }
#line 1065
  if ((*_ctx)->key) {
#line 1066
    oaes_key_destroy(& (*_ctx)->key);
  }
#line 1075
  free((void *)*_ctx);
#line 1076
  *_ctx = (oaes_ctx *)((void *)0);
#line 1078
  return ((OAES_RET )0);
}
}
#line 1081 "oaes_lib.c"
OAES_RET oaes_set_option(OAES_CTX *ctx , OAES_OPTION option , void const   *value ) 
{ 
  size_t _i ;
  oaes_ctx *_ctx ;
  int tmp ;

  {
#line 1083
  _ctx = (oaes_ctx *)ctx;
#line 1085
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1086
    return ((OAES_RET )2);
  }
#line 1088
  switch ((int )option) {
  case 1: 
#line 1090
  _ctx->options = (OAES_OPTION )((int )_ctx->options & -3);
#line 1091
  memset((void *)(_ctx->iv), 0, (size_t )16);
#line 1092
  break;
  case 2: 
#line 1095
  _ctx->options = (OAES_OPTION )((int )_ctx->options & -2);
#line 1096
  if (value) {
#line 1097
    memcpy((void * __restrict  )(_ctx->iv), (void const   * __restrict  )value, (size_t )16);
  } else {
#line 1099
    _i = (size_t )0;
#line 1099
    while (_i < 16UL) {
#line 1103
      tmp = rand();
#line 1103
      _ctx->iv[_i] = (uint8_t )tmp;
#line 1099
      _i ++;
    }
  }
#line 1106
  break;
  default: 
#line 1130
  return ((OAES_RET )3);
  }
#line 1133
  _ctx->options = (OAES_OPTION )((int )_ctx->options | (int )option);
#line 1135
  return ((OAES_RET )0);
}
}
#line 1138 "oaes_lib.c"
static OAES_RET oaes_encrypt_block(OAES_CTX *ctx , uint8_t *c , size_t c_len ) 
{ 
  size_t _i ;
  size_t _j ;
  oaes_ctx *_ctx ;

  {
#line 1140
  _ctx = (oaes_ctx *)ctx;
#line 1142
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1143
    return ((OAES_RET )2);
  }
#line 1145
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1146
    return ((OAES_RET )3);
  }
#line 1148
  if (c_len != 16UL) {
#line 1149
    return ((OAES_RET )4);
  }
#line 1151
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1152
    return ((OAES_RET )7);
  }
#line 1160
  _i = (size_t )0;
#line 1160
  while (_i < c_len) {
#line 1161
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*((_ctx->key)->exp_data + _i));
#line 1160
    _i ++;
  }
#line 1171
  _i = (size_t )1;
#line 1171
  while (_i < (_ctx->key)->num_keys - 1UL) {
#line 1173
    _j = (size_t )0;
#line 1173
    while (_j < c_len) {
#line 1174
      oaes_sub_byte(c + _j);
#line 1173
      _j ++;
    }
#line 1182
    oaes_shift_rows((uint8_t *)c);
#line 1190
    oaes_mix_cols((uint8_t *)c);
#line 1191
    oaes_mix_cols((uint8_t *)(c + 4));
#line 1192
    oaes_mix_cols((uint8_t *)(c + 8));
#line 1193
    oaes_mix_cols((uint8_t *)(c + 12));
#line 1201
    _j = (size_t )0;
#line 1201
    while (_j < c_len) {
#line 1202
      *(c + _j) = (uint8_t )((int )*(c + _j) ^ (int )*((_ctx->key)->exp_data + ((_i * 4UL) * 4UL + _j)));
#line 1201
      _j ++;
    }
#line 1171
    _i ++;
  }
#line 1215
  _i = (size_t )0;
#line 1215
  while (_i < c_len) {
#line 1216
    oaes_sub_byte(c + _i);
#line 1215
    _i ++;
  }
#line 1224
  oaes_shift_rows((uint8_t *)c);
#line 1232
  _i = (size_t )0;
#line 1232
  while (_i < c_len) {
#line 1233
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*((_ctx->key)->exp_data + ((((_ctx->key)->num_keys - 1UL) * 4UL) * 4UL + _i)));
#line 1232
    _i ++;
  }
#line 1246
  return ((OAES_RET )0);
}
}
#line 1249 "oaes_lib.c"
static OAES_RET oaes_decrypt_block(OAES_CTX *ctx , uint8_t *c , size_t c_len ) 
{ 
  size_t _i ;
  size_t _j ;
  oaes_ctx *_ctx ;

  {
#line 1251
  _ctx = (oaes_ctx *)ctx;
#line 1253
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1254
    return ((OAES_RET )2);
  }
#line 1256
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1257
    return ((OAES_RET )3);
  }
#line 1259
  if (c_len != 16UL) {
#line 1260
    return ((OAES_RET )4);
  }
#line 1262
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1263
    return ((OAES_RET )7);
  }
#line 1271
  _i = (size_t )0;
#line 1271
  while (_i < c_len) {
#line 1272
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*((_ctx->key)->exp_data + ((((_ctx->key)->num_keys - 1UL) * 4UL) * 4UL + _i)));
#line 1271
    _i ++;
  }
#line 1285
  _i = (_ctx->key)->num_keys - 2UL;
#line 1285
  while (_i > 0UL) {
#line 1287
    oaes_inv_shift_rows((uint8_t *)c);
#line 1295
    _j = (size_t )0;
#line 1295
    while (_j < c_len) {
#line 1296
      oaes_inv_sub_byte(c + _j);
#line 1295
      _j ++;
    }
#line 1304
    _j = (size_t )0;
#line 1304
    while (_j < c_len) {
#line 1305
      *(c + _j) = (uint8_t )((int )*(c + _j) ^ (int )*((_ctx->key)->exp_data + ((_i * 4UL) * 4UL + _j)));
#line 1304
      _j ++;
    }
#line 1317
    oaes_inv_mix_cols((uint8_t *)c);
#line 1318
    oaes_inv_mix_cols((uint8_t *)(c + 4));
#line 1319
    oaes_inv_mix_cols((uint8_t *)(c + 8));
#line 1320
    oaes_inv_mix_cols((uint8_t *)(c + 12));
#line 1285
    _i --;
  }
#line 1329
  oaes_inv_shift_rows((uint8_t *)c);
#line 1337
  _i = (size_t )0;
#line 1337
  while (_i < c_len) {
#line 1338
    oaes_inv_sub_byte(c + _i);
#line 1337
    _i ++;
  }
#line 1346
  _i = (size_t )0;
#line 1346
  while (_i < c_len) {
#line 1347
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*((_ctx->key)->exp_data + _i));
#line 1346
    _i ++;
  }
#line 1356
  return ((OAES_RET )0);
}
}
#line 1359 "oaes_lib.c"
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
#line 1362
  if (m_len % 16UL == 0UL) {
#line 1362
    tmp = 0UL;
  } else {
#line 1362
    tmp = 16UL - m_len % 16UL;
  }
#line 1362
  _pad_len = tmp;
#line 1365
  _ctx = (oaes_ctx *)ctx;
#line 1366
  _rc = (OAES_RET )0;
#line 1367
  if (_pad_len) {
#line 1367
    tmp___0 = 1;
  } else {
#line 1367
    tmp___0 = 0;
  }
#line 1367
  _flags = (uint8_t )tmp___0;
#line 1369
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1370
    return ((OAES_RET )2);
  }
#line 1372
  if ((unsigned int )((void *)0) == (unsigned int )m) {
#line 1373
    return ((OAES_RET )3);
  }
#line 1375
  if ((unsigned int )((void *)0) == (unsigned int )c_len) {
#line 1376
    return ((OAES_RET )6);
  }
#line 1378
  _c_len_in = *c_len;
#line 1380
  _c_data_len = m_len + _pad_len;
#line 1382
  *c_len = (32UL + m_len) + _pad_len;
#line 1384
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1385
    return ((OAES_RET )0);
  }
#line 1387
  if (_c_len_in < *c_len) {
#line 1388
    return ((OAES_RET )9);
  }
#line 1390
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1391
    return ((OAES_RET )7);
  }
#line 1394
  memcpy((void * __restrict  )c, (void const   * __restrict  )(oaes_header), (size_t )16);
#line 1395
  memcpy((void * __restrict  )(c + 6), (void const   * __restrict  )(& _ctx->options),
         sizeof(_ctx->options));
#line 1396
  memcpy((void * __restrict  )(c + 8), (void const   * __restrict  )(& _flags), sizeof(_flags));
#line 1398
  memcpy((void * __restrict  )(c + 16), (void const   * __restrict  )(_ctx->iv), (size_t )16);
#line 1400
  memcpy((void * __restrict  )(c + 32), (void const   * __restrict  )m, m_len);
#line 1402
  _i = (size_t )0;
#line 1402
  while (_i < _c_data_len) {
#line 1404
    if (m_len - _i < 16UL) {
#line 1404
      tmp___1 = m_len - _i;
    } else {
#line 1404
      tmp___1 = (size_t )16;
    }
#line 1404
    _block_size = tmp___1;
#line 1406
    memcpy((void * __restrict  )(_block), (void const   * __restrict  )((c + 32) + _i),
           _block_size);
#line 1409
    _j = (size_t )0;
#line 1409
    while (_j < 16UL - _block_size) {
#line 1410
      _block[_block_size + _j] = (uint8_t )(_j + 1UL);
#line 1409
      _j ++;
    }
#line 1413
    if ((int )_ctx->options & 2) {
#line 1414
      _j = (size_t )0;
#line 1414
      while (_j < 16UL) {
#line 1415
        _block[_j] = (uint8_t )((int )_block[_j] ^ (int )_ctx->iv[_j]);
#line 1414
        _j ++;
      }
    }
#line 1418
    if (_rc) {
#line 1418
      tmp___3 = 1;
    } else {
#line 1418
      tmp___2 = oaes_encrypt_block(ctx, _block, (size_t )16);
#line 1418
      if (tmp___2) {
#line 1418
        tmp___3 = 1;
      } else {
#line 1418
        tmp___3 = 0;
      }
    }
#line 1418
    _rc = (OAES_RET )tmp___3;
#line 1419
    memcpy((void * __restrict  )((c + 32) + _i), (void const   * __restrict  )(_block),
           (size_t )16);
#line 1421
    if ((int )_ctx->options & 2) {
#line 1422
      memcpy((void * __restrict  )(_ctx->iv), (void const   * __restrict  )(_block),
             (size_t )16);
    }
#line 1402
    _i += 16UL;
  }
#line 1425
  return (_rc);
}
}
#line 1428 "oaes_lib.c"
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
#line 1431
  _ctx = (oaes_ctx *)ctx;
#line 1432
  _rc = (OAES_RET )0;
#line 1437
  if ((unsigned int )((void *)0) == (unsigned int )ctx) {
#line 1438
    return ((OAES_RET )2);
  }
#line 1440
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1441
    return ((OAES_RET )3);
  }
#line 1443
  if (c_len % 16UL) {
#line 1444
    return ((OAES_RET )4);
  }
#line 1446
  if ((unsigned int )((void *)0) == (unsigned int )m_len) {
#line 1447
    return ((OAES_RET )6);
  }
#line 1449
  _m_len_in = *m_len;
#line 1450
  *m_len = c_len - 32UL;
#line 1452
  if ((unsigned int )((void *)0) == (unsigned int )m) {
#line 1453
    return ((OAES_RET )0);
  }
#line 1455
  if (_m_len_in < *m_len) {
#line 1456
    return ((OAES_RET )9);
  }
#line 1458
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1459
    return ((OAES_RET )7);
  }
#line 1462
  tmp = memcmp((void const   *)c, (void const   *)(oaes_header), (size_t )4);
#line 1462
  if (0 != tmp) {
#line 1463
    return ((OAES_RET )10);
  }
#line 1466
  switch ((int const   )*(c + 4)) {
  case 1: 
#line 1468
  break;
  default: 
#line 1470
  return ((OAES_RET )10);
  }
#line 1474
  switch ((int const   )*(c + 5)) {
  case 2: 
#line 1476
  break;
  default: 
#line 1478
  return ((OAES_RET )10);
  }
#line 1482
  memcpy((void * __restrict  )(& _options), (void const   * __restrict  )(c + 6),
         sizeof(_options));
#line 1484
  if ((int )_options & -4) {
#line 1489
    return ((OAES_RET )10);
  }
#line 1490
  if ((int )_options & 1) {
#line 1490
    if ((int )_options & 2) {
#line 1491
      return ((OAES_RET )10);
    }
  }
#line 1492
  if ((int )_options == 0) {
#line 1493
    return ((OAES_RET )10);
  }
#line 1496
  memcpy((void * __restrict  )(& _flags), (void const   * __restrict  )(c + 8), sizeof(_flags));
#line 1498
  if ((int )_flags & -2) {
#line 1499
    return ((OAES_RET )10);
  }
#line 1502
  memcpy((void * __restrict  )(_iv), (void const   * __restrict  )(c + 16), (size_t )16);
#line 1504
  memcpy((void * __restrict  )m, (void const   * __restrict  )(c + 32), *m_len);
#line 1506
  _i = (size_t )0;
#line 1506
  while (_i < *m_len) {
#line 1507
    if ((int )_options & 2) {
#line 1507
      if (_i > 0UL) {
#line 1508
        memcpy((void * __restrict  )(_iv), (void const   * __restrict  )((c + 16) + _i),
               (size_t )16);
      }
    }
#line 1510
    if (_rc) {
#line 1510
      tmp___2 = 1;
    } else {
#line 1510
      if (*m_len - _i < 16UL) {
#line 1510
        tmp___0 = *m_len - _i;
      } else {
#line 1510
        tmp___0 = (size_t )16;
      }
#line 1510
      tmp___1 = oaes_decrypt_block(ctx, m + _i, tmp___0);
#line 1510
      if (tmp___1) {
#line 1510
        tmp___2 = 1;
      } else {
#line 1510
        tmp___2 = 0;
      }
    }
#line 1510
    _rc = (OAES_RET )tmp___2;
#line 1514
    if ((int )_options & 2) {
#line 1515
      _j = (size_t )0;
#line 1515
      while (_j < 16UL) {
#line 1516
        *(m + (_i + _j)) = (uint8_t )((int )*(m + (_i + _j)) ^ (int )_iv[_j]);
#line 1515
        _j ++;
      }
    }
#line 1506
    _i += 16UL;
  }
#line 1521
  if ((int )_flags & 1) {
#line 1522
    _is_pad = 1;
#line 1523
    _temp = (size_t )*(m + (*m_len - 1UL));
#line 1525
    if (_temp <= 0UL) {
#line 1526
      return ((OAES_RET )10);
    } else
#line 1525
    if (_temp > 15UL) {
#line 1526
      return ((OAES_RET )10);
    }
#line 1527
    _i = (size_t )0;
#line 1527
    while (_i < _temp) {
#line 1528
      if ((size_t )*(m + ((*m_len - 1UL) - _i)) != _temp - _i) {
#line 1529
        _is_pad = 0;
      }
#line 1527
      _i ++;
    }
#line 1530
    if (_is_pad) {
#line 1531
      memset((void *)((m + *m_len) - _temp), 0, _temp);
#line 1532
      *m_len -= _temp;
    } else {
#line 1534
      return ((OAES_RET )10);
    }
  }
#line 1537
  return ((OAES_RET )0);
}
}
#line 1540 "oaes_lib.c"
OAES_RET oaes_encryption_round(uint8_t const   *key , uint8_t *c ) 
{ 
  size_t _i ;

  {
#line 1543
  if ((unsigned int )((void *)0) == (unsigned int )key) {
#line 1544
    return ((OAES_RET )2);
  }
#line 1546
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1547
    return ((OAES_RET )3);
  }
#line 1550
  _i = (size_t )0;
#line 1550
  while (_i < 16UL) {
#line 1551
    oaes_sub_byte(c + _i);
#line 1550
    _i ++;
  }
#line 1554
  oaes_shift_rows((uint8_t *)c);
#line 1557
  oaes_mix_cols((uint8_t *)c);
#line 1558
  oaes_mix_cols((uint8_t *)(c + 4));
#line 1559
  oaes_mix_cols((uint8_t *)(c + 8));
#line 1560
  oaes_mix_cols((uint8_t *)(c + 12));
#line 1563
  _i = (size_t )0;
#line 1563
  while (_i < 16UL) {
#line 1564
    *(c + _i) = (uint8_t )((int )*(c + _i) ^ (int )*(key + _i));
#line 1563
    _i ++;
  }
#line 1566
  return ((OAES_RET )0);
}
}
#line 1569 "oaes_lib.c"
OAES_RET oaes_pseudo_encrypt_ecb(OAES_CTX *ctx , uint8_t *c ) 
{ 
  size_t _i ;
  oaes_ctx *_ctx ;

  {
#line 1571
  _ctx = (oaes_ctx *)ctx;
#line 1573
  if ((unsigned int )((void *)0) == (unsigned int )_ctx) {
#line 1574
    return ((OAES_RET )2);
  }
#line 1576
  if ((unsigned int )((void *)0) == (unsigned int )c) {
#line 1577
    return ((OAES_RET )3);
  }
#line 1579
  if ((unsigned int )((void *)0) == (unsigned int )_ctx->key) {
#line 1580
    return ((OAES_RET )7);
  }
#line 1582
  _i = (size_t )0;
#line 1582
  while (_i < 10UL) {
#line 1583
    oaes_encryption_round((uint8_t const   *)((_ctx->key)->exp_data + (_i * 4UL) * 4UL),
                          c);
#line 1582
    _i ++;
  }
#line 1587
  return ((OAES_RET )0);
}
}
#line 1 "cil-FBKY5_MV.o"
#pragma merger("0","/tmp/cil-E2JfgFYV.i","")
#line 146 "./skein_port.h"
void Skein_Put64_LSB_First(u08b_t *dst , u64b_t const   *src , size_t bCnt ) 
{ 
  size_t n ;

  {
#line 151
  n = (size_t )0;
#line 151
  while (n < bCnt) {
#line 152
    *(dst + n) = (u08b_t )(*(src + (n >> 3)) >> 8UL * (n & 7UL));
#line 151
    n ++;
  }
#line 153
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
#line 170
  return;
}
}
#line 92 "skein.c"
static int Skein_512_Init(Skein_512_Ctxt_t *ctx , size_t hashBitLen ) ;
#line 93
static int Skein1024_Init(Skein1024_Ctxt_t *ctx , size_t hashBitLen ) ;
#line 95
static int Skein_256_Update(Skein_256_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) ;
#line 97
static int Skein_512_Update(Skein_512_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) ;
#line 99
static int Skein1024_Update(Skein1024_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) ;
#line 102
static int Skein_256_Final(Skein_256_Ctxt_t *ctx , u08b_t *hashVal ) ;
#line 103
static int Skein_512_Final(Skein_512_Ctxt_t *ctx , u08b_t *hashVal ) ;
#line 104
static int Skein1024_Final(Skein1024_Ctxt_t *ctx , u08b_t *hashVal ) ;
#line 466 "skein.c"
u64b_t const   SKEIN_256_IV_128[4]  = {      (u64b_t const   )(2521657952ULL + (3775994118ULL << 32)),      (u64b_t const   )(2089648412ULL + (2285742759ULL << 32)),      (u64b_t const   )(2442530682ULL + (268963316ULL << 32)),      (u64b_t const   )(3025912258ULL + (3438796261ULL << 32))};
#line 471 "skein.c"
u64b_t const   SKEIN_256_IV_160[4]  = {      (u64b_t const   )(1921146520ULL + (337650452ULL << 32)),      (u64b_t const   )(1517806992ULL + (717547938ULL << 32)),      (u64b_t const   )(2285426238ULL + (3564787798ULL << 32)),      (u64b_t const   )(2240195453ULL + (768795798ULL << 32))};
#line 476 "skein.c"
u64b_t const   SKEIN_256_IV_224[4]  = {      (u64b_t const   )(2598758923ULL + (3322514060ULL << 32)),      (u64b_t const   )(147134748ULL + (2272089734ULL << 32)),      (u64b_t const   )(3623172228ULL + (2580252887ULL << 32)),      (u64b_t const   )(2933765598ULL + (944496049ULL << 32))};
#line 481 "skein.c"
u64b_t const   SKEIN_256_IV_256[4]  = {      (u64b_t const   )(3494425673ULL + (4238190688ULL << 32)),      (u64b_t const   )(2678577203ULL + (801793607ULL << 32)),      (u64b_t const   )(1716945935ULL + (3007038345ULL << 32)),      (u64b_t const   )(4259895913ULL + (1783949600ULL << 32))};
#line 486 "skein.c"
u64b_t const   SKEIN_512_IV_128[8]  = 
#line 486
  {      (u64b_t const   )(1874829138ULL + (2830924787ULL << 32)),      (u64b_t const   )(3172659370ULL + (513307342ULL << 32)),      (u64b_t const   )(3005321427ULL + (815470480ULL << 32)),      (u64b_t const   )(1066696796ULL + (3170613332ULL << 32)), 
        (u64b_t const   )(1848750363ULL + (228989901ULL << 32)),      (u64b_t const   )(3563729635ULL + (437840874ULL << 32)),      (u64b_t const   )(3464800898ULL + (2731301656ULL << 32)),      (u64b_t const   )(2638649389ULL + (1770171176ULL << 32))};
#line 493 "skein.c"
u64b_t const   SKEIN_512_IV_160[8]  = 
#line 493
  {      (u64b_t const   )(3759390097ULL + (683153962ULL << 32)),      (u64b_t const   )(3049125775ULL + (3270579816ULL << 32)),      (u64b_t const   )(4138037010ULL + (392222963ULL << 32)),      (u64b_t const   )(2184810575ULL + (1337411416ULL << 32)), 
        (u64b_t const   )(2125418582ULL + (569237631ULL << 32)),      (u64b_t const   )(1676505272ULL + (3641217582ULL << 32)),      (u64b_t const   )(3972748026ULL + (3102504703ULL << 32)),      (u64b_t const   )(2750577262ULL + (27556792ULL << 32))};
#line 500 "skein.c"
u64b_t const   SKEIN_512_IV_224[8]  = 
#line 500
  {      (u64b_t const   )(1214738980ULL + (3436208482ULL << 32)),      (u64b_t const   )(2837658095ULL + (3416677619ULL << 32)),      (u64b_t const   )(1392462692ULL + (2362272214ULL << 32)),      (u64b_t const   )(985174196ULL + (965406075ULL << 32)), 
        (u64b_t const   )(1165831120ULL + (257544625ULL << 32)),      (u64b_t const   )(1976888125ULL + (1735851621ULL << 32)),      (u64b_t const   )(2574521321ULL + (2583414542ULL << 32)),      (u64b_t const   )(3787726583ULL + (2653748431ULL << 32))};
#line 507 "skein.c"
u64b_t const   SKEIN_512_IV_256[8]  = 
#line 507
  {      (u64b_t const   )(802897427ULL + (3436201121ULL << 32)),      (u64b_t const   )(444180971ULL + (3895824432ULL << 32)),      (u64b_t const   )(1333882479ULL + (1437507681ULL << 32)),      (u64b_t const   )(2929431771ULL + (707225508ULL << 32)), 
        (u64b_t const   )(1960670851ULL + (3959816798ULL << 32)),      (u64b_t const   )(3295961681ULL + (3886298829ULL << 32)),      (u64b_t const   )(960156037ULL + (3278879481ULL << 32)),      (u64b_t const   )(871234579ULL + (1055767064ULL << 32))};
#line 514 "skein.c"
u64b_t const   SKEIN_512_IV_384[8]  = 
#line 514
  {      (u64b_t const   )(980807519ULL + (2750858943ULL << 32)),      (u64b_t const   )(4253350564ULL + (2969500108ULL << 32)),      (u64b_t const   )(1031212286ULL + (2641878374ULL << 32)),      (u64b_t const   )(3026779610ULL + (3617115123ULL << 32)), 
        (u64b_t const   )(2316190821ULL + (465872486ULL << 32)),      (u64b_t const   )(3850400775ULL + (2128073780ULL << 32)),      (u64b_t const   )(3572253910ULL + (1418707372ULL << 32)),      (u64b_t const   )(1788973048ULL + (644749140ULL << 32))};
#line 521 "skein.c"
u64b_t const   SKEIN_512_IV_512[8]  = 
#line 521
  {      (u64b_t const   )(1956401614ULL + (1224977919ULL << 32)),      (u64b_t const   )(2538004227ULL + (227925561ULL << 32)),      (u64b_t const   )(667392974ULL + (2412876609ULL << 32)),      (u64b_t const   )(4281674929ULL + (2586138153ULL << 32)), 
        (u64b_t const   )(3748439984ULL + (1572218265ULL << 32)),      (u64b_t const   )(2849358836ULL + (3938335052ULL << 32)),      (u64b_t const   )(443921699ULL + (2568032967ULL << 32)),      (u64b_t const   )(1712311347ULL + (2920850443ULL << 32))};
#line 528 "skein.c"
u64b_t const   SKEIN1024_IV_384[16]  = 
#line 528
  {      (u64b_t const   )(3247000117ULL + (1359132344ULL << 32)),      (u64b_t const   )(4270518554ULL + (4276865507ULL << 32)),      (u64b_t const   )(3811306865ULL + (209747718ULL << 32)),      (u64b_t const   )(3021640182ULL + (1623276114ULL << 32)), 
        (u64b_t const   )(3566304312ULL + (2534855517ULL << 32)),      (u64b_t const   )(1876106554ULL + (3883982610ULL << 32)),      (u64b_t const   )(3365417018ULL + (2037925558ULL << 32)),      (u64b_t const   )(3008834107ULL + (2977088168ULL << 32)), 
        (u64b_t const   )(2786085484ULL + (3384574467ULL << 32)),      (u64b_t const   )(3612746996ULL + (1703973688ULL << 32)),      (u64b_t const   )(1262453152ULL + (2495399272ULL << 32)),      (u64b_t const   )(283966790ULL + (1052505374ULL << 32)), 
        (u64b_t const   )(4004545858ULL + (771034891ULL << 32)),      (u64b_t const   )(230450454ULL + (995779888ULL << 32)),      (u64b_t const   )(377208033ULL + (1212914898ULL << 32)),      (u64b_t const   )(3570118634ULL + (756246855ULL << 32))};
#line 539 "skein.c"
u64b_t const   SKEIN1024_IV_512[16]  = 
#line 539
  {      (u64b_t const   )(2082151192ULL + (3404467805ULL << 32)),      (u64b_t const   )(1594091522ULL + (2686127620ULL << 32)),      (u64b_t const   )(3985713285ULL + (864289873ULL << 32)),      (u64b_t const   )(3941346844ULL + (927660804ULL << 32)), 
        (u64b_t const   )(2167767543ULL + (3743785186ULL << 32)),      (u64b_t const   )(2333276626ULL + (3825221779ULL << 32)),      (u64b_t const   )(3270326710ULL + (2791494969ULL << 32)),      (u64b_t const   )(1171834714ULL + (4203447759ULL << 32)), 
        (u64b_t const   )(703457174ULL + (2199317902ULL << 32)),      (u64b_t const   )(782209464ULL + (87198144ULL << 32)),      (u64b_t const   )(1834060659ULL + (3287871261ULL << 32)),      (u64b_t const   )(3589223214ULL + (3184444356ULL << 32)), 
        (u64b_t const   )(580338823ULL + (1419411026ULL << 32)),      (u64b_t const   )(1534367766ULL + (1728514162ULL << 32)),      (u64b_t const   )(4032306129ULL + (3117230331ULL << 32)),      (u64b_t const   )(360728948ULL + (237584568ULL << 32))};
#line 550 "skein.c"
u64b_t const   SKEIN1024_IV_1024[16]  = 
#line 550
  {      (u64b_t const   )(1105666901ULL + (3583236615ULL << 32)),      (u64b_t const   )(2893275148ULL + (364242193ULL << 32)),      (u64b_t const   )(3136472304ULL + (1367401902ULL << 32)),      (u64b_t const   )(4240224175ULL + (62734803ULL << 32)), 
        (u64b_t const   )(428058776ULL + (481216253ULL << 32)),      (u64b_t const   )(3452983455ULL + (1850805131ULL << 32)),      (u64b_t const   )(3325643482ULL + (2011348477ULL << 32)),      (u64b_t const   )(618442915ULL + (3239976373ULL << 32)), 
        (u64b_t const   )(3325205173ULL + (3604040441ULL << 32)),      (u64b_t const   )(1857453581ULL + (1788546044ULL << 32)),      (u64b_t const   )(3439268658ULL + (2453915149ULL << 32)),      (u64b_t const   )(1950286548ULL + (438246878ULL << 32)), 
        (u64b_t const   )(283970488ULL + (160855356ULL << 32)),      (u64b_t const   )(4071921306ULL + (1702026530ULL << 32)),      (u64b_t const   )(3490338714ULL + (1643982946ULL << 32)),      (u64b_t const   )(2256725305ULL + (501240686ULL << 32))};
#line 586 "skein.c"
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
#line 620
  *((kw + 0) + 0) = ctx->h.T[0];
#line 621
  *((kw + 0) + 1) = ctx->h.T[1];
#line 622
  while (1) {
#line 625
    *((kw + 0) + 0) += (u64b_t )byteCntAdd;
#line 628
    *((kw + 3) + 0) = ctx->X[0];
#line 629
    *((kw + 3) + 1) = ctx->X[1];
#line 630
    *((kw + 3) + 2) = ctx->X[2];
#line 631
    *((kw + 3) + 3) = ctx->X[3];
#line 632
    *((kw + 3) + 4) = (((*((kw + 3) + 0) ^ *((kw + 3) + 1)) ^ *((kw + 3) + 2)) ^ *((kw + 3) + 3)) ^ (2851871266ULL + (466688986ULL << 32));
#line 634
    *((kw + 0) + 2) = *((kw + 0) + 0) ^ *((kw + 0) + 1);
#line 636
    Skein_Get64_LSB_First(w, blkPtr, (size_t )4);
#line 641
    X0 = w[0] + *((kw + 3) + 0);
#line 642
    X1 = (w[1] + *((kw + 3) + 1)) + *((kw + 0) + 0);
#line 643
    X2 = (w[2] + *((kw + 3) + 2)) + *((kw + 0) + 1);
#line 644
    X3 = w[3] + *((kw + 3) + 3);
#line 649
    blkPtr += 32;
#line 701
    X0 += X1;
#line 701
    X1 = (X1 << 14) | (X1 >> 50);
#line 701
    X1 ^= X0;
#line 701
    X2 += X3;
#line 701
    X3 = (X3 << 16) | (X3 >> 48);
#line 701
    X3 ^= X2;
#line 701
    X0 += X3;
#line 701
    X3 = (X3 << 52) | (X3 >> 12);
#line 701
    X3 ^= X0;
#line 701
    X2 += X1;
#line 701
    X1 = (X1 << 57) | (X1 >> 7);
#line 701
    X1 ^= X2;
#line 701
    X0 += X1;
#line 701
    X1 = (X1 << 23) | (X1 >> 41);
#line 701
    X1 ^= X0;
#line 701
    X2 += X3;
#line 701
    X3 = (X3 << 40) | (X3 >> 24);
#line 701
    X3 ^= X2;
#line 701
    X0 += X3;
#line 701
    X3 = (X3 << 5) | (X3 >> 59);
#line 701
    X3 ^= X0;
#line 701
    X2 += X1;
#line 701
    X1 = (X1 << 37) | (X1 >> 27);
#line 701
    X1 ^= X2;
#line 701
    X0 += *((kw + 3) + 1);
#line 701
    X1 += *((kw + 3) + 2) + *((kw + 0) + 1);
#line 701
    X2 += *((kw + 3) + 3) + *((kw + 0) + 2);
#line 701
    X3 += *((kw + 3) + 4) + 1ULL;
#line 701
    X0 += X1;
#line 701
    X1 = (X1 << 25) | (X1 >> 39);
#line 701
    X1 ^= X0;
#line 701
    X2 += X3;
#line 701
    X3 = (X3 << 33) | (X3 >> 31);
#line 701
    X3 ^= X2;
#line 701
    X0 += X3;
#line 701
    X3 = (X3 << 46) | (X3 >> 18);
#line 701
    X3 ^= X0;
#line 701
    X2 += X1;
#line 701
    X1 = (X1 << 12) | (X1 >> 52);
#line 701
    X1 ^= X2;
#line 701
    X0 += X1;
#line 701
    X1 = (X1 << 58) | (X1 >> 6);
#line 701
    X1 ^= X0;
#line 701
    X2 += X3;
#line 701
    X3 = (X3 << 22) | (X3 >> 42);
#line 701
    X3 ^= X2;
#line 701
    X0 += X3;
#line 701
    X3 = (X3 << 32) | (X3 >> 32);
#line 701
    X3 ^= X0;
#line 701
    X2 += X1;
#line 701
    X1 = (X1 << 32) | (X1 >> 32);
#line 701
    X1 ^= X2;
#line 701
    X0 += *((kw + 3) + 2);
#line 701
    X1 += *((kw + 3) + 3) + *((kw + 0) + 2);
#line 701
    X2 += *((kw + 3) + 4) + *((kw + 0) + 0);
#line 701
    X3 += (*((kw + 3) + 0) + 1ULL) + 1ULL;
#line 708
    X0 += X1;
#line 708
    X1 = (X1 << 14) | (X1 >> 50);
#line 708
    X1 ^= X0;
#line 708
    X2 += X3;
#line 708
    X3 = (X3 << 16) | (X3 >> 48);
#line 708
    X3 ^= X2;
#line 708
    X0 += X3;
#line 708
    X3 = (X3 << 52) | (X3 >> 12);
#line 708
    X3 ^= X0;
#line 708
    X2 += X1;
#line 708
    X1 = (X1 << 57) | (X1 >> 7);
#line 708
    X1 ^= X2;
#line 708
    X0 += X1;
#line 708
    X1 = (X1 << 23) | (X1 >> 41);
#line 708
    X1 ^= X0;
#line 708
    X2 += X3;
#line 708
    X3 = (X3 << 40) | (X3 >> 24);
#line 708
    X3 ^= X2;
#line 708
    X0 += X3;
#line 708
    X3 = (X3 << 5) | (X3 >> 59);
#line 708
    X3 ^= X0;
#line 708
    X2 += X1;
#line 708
    X1 = (X1 << 37) | (X1 >> 27);
#line 708
    X1 ^= X2;
#line 708
    X0 += *((kw + 3) + 3);
#line 708
    X1 += *((kw + 3) + 4) + *((kw + 0) + 0);
#line 708
    X2 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 708
    X3 += (*((kw + 3) + 1) + 2ULL) + 1ULL;
#line 708
    X0 += X1;
#line 708
    X1 = (X1 << 25) | (X1 >> 39);
#line 708
    X1 ^= X0;
#line 708
    X2 += X3;
#line 708
    X3 = (X3 << 33) | (X3 >> 31);
#line 708
    X3 ^= X2;
#line 708
    X0 += X3;
#line 708
    X3 = (X3 << 46) | (X3 >> 18);
#line 708
    X3 ^= X0;
#line 708
    X2 += X1;
#line 708
    X1 = (X1 << 12) | (X1 >> 52);
#line 708
    X1 ^= X2;
#line 708
    X0 += X1;
#line 708
    X1 = (X1 << 58) | (X1 >> 6);
#line 708
    X1 ^= X0;
#line 708
    X2 += X3;
#line 708
    X3 = (X3 << 22) | (X3 >> 42);
#line 708
    X3 ^= X2;
#line 708
    X0 += X3;
#line 708
    X3 = (X3 << 32) | (X3 >> 32);
#line 708
    X3 ^= X0;
#line 708
    X2 += X1;
#line 708
    X1 = (X1 << 32) | (X1 >> 32);
#line 708
    X1 ^= X2;
#line 708
    X0 += *((kw + 3) + 4);
#line 708
    X1 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 708
    X2 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 708
    X3 += (*((kw + 3) + 2) + 3ULL) + 1ULL;
#line 711
    X0 += X1;
#line 711
    X1 = (X1 << 14) | (X1 >> 50);
#line 711
    X1 ^= X0;
#line 711
    X2 += X3;
#line 711
    X3 = (X3 << 16) | (X3 >> 48);
#line 711
    X3 ^= X2;
#line 711
    X0 += X3;
#line 711
    X3 = (X3 << 52) | (X3 >> 12);
#line 711
    X3 ^= X0;
#line 711
    X2 += X1;
#line 711
    X1 = (X1 << 57) | (X1 >> 7);
#line 711
    X1 ^= X2;
#line 711
    X0 += X1;
#line 711
    X1 = (X1 << 23) | (X1 >> 41);
#line 711
    X1 ^= X0;
#line 711
    X2 += X3;
#line 711
    X3 = (X3 << 40) | (X3 >> 24);
#line 711
    X3 ^= X2;
#line 711
    X0 += X3;
#line 711
    X3 = (X3 << 5) | (X3 >> 59);
#line 711
    X3 ^= X0;
#line 711
    X2 += X1;
#line 711
    X1 = (X1 << 37) | (X1 >> 27);
#line 711
    X1 ^= X2;
#line 711
    X0 += *((kw + 3) + 0);
#line 711
    X1 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 711
    X2 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 711
    X3 += (*((kw + 3) + 3) + 4ULL) + 1ULL;
#line 711
    X0 += X1;
#line 711
    X1 = (X1 << 25) | (X1 >> 39);
#line 711
    X1 ^= X0;
#line 711
    X2 += X3;
#line 711
    X3 = (X3 << 33) | (X3 >> 31);
#line 711
    X3 ^= X2;
#line 711
    X0 += X3;
#line 711
    X3 = (X3 << 46) | (X3 >> 18);
#line 711
    X3 ^= X0;
#line 711
    X2 += X1;
#line 711
    X1 = (X1 << 12) | (X1 >> 52);
#line 711
    X1 ^= X2;
#line 711
    X0 += X1;
#line 711
    X1 = (X1 << 58) | (X1 >> 6);
#line 711
    X1 ^= X0;
#line 711
    X2 += X3;
#line 711
    X3 = (X3 << 22) | (X3 >> 42);
#line 711
    X3 ^= X2;
#line 711
    X0 += X3;
#line 711
    X3 = (X3 << 32) | (X3 >> 32);
#line 711
    X3 ^= X0;
#line 711
    X2 += X1;
#line 711
    X1 = (X1 << 32) | (X1 >> 32);
#line 711
    X1 ^= X2;
#line 711
    X0 += *((kw + 3) + 1);
#line 711
    X1 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 711
    X2 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 711
    X3 += (*((kw + 3) + 4) + 5ULL) + 1ULL;
#line 714
    X0 += X1;
#line 714
    X1 = (X1 << 14) | (X1 >> 50);
#line 714
    X1 ^= X0;
#line 714
    X2 += X3;
#line 714
    X3 = (X3 << 16) | (X3 >> 48);
#line 714
    X3 ^= X2;
#line 714
    X0 += X3;
#line 714
    X3 = (X3 << 52) | (X3 >> 12);
#line 714
    X3 ^= X0;
#line 714
    X2 += X1;
#line 714
    X1 = (X1 << 57) | (X1 >> 7);
#line 714
    X1 ^= X2;
#line 714
    X0 += X1;
#line 714
    X1 = (X1 << 23) | (X1 >> 41);
#line 714
    X1 ^= X0;
#line 714
    X2 += X3;
#line 714
    X3 = (X3 << 40) | (X3 >> 24);
#line 714
    X3 ^= X2;
#line 714
    X0 += X3;
#line 714
    X3 = (X3 << 5) | (X3 >> 59);
#line 714
    X3 ^= X0;
#line 714
    X2 += X1;
#line 714
    X1 = (X1 << 37) | (X1 >> 27);
#line 714
    X1 ^= X2;
#line 714
    X0 += *((kw + 3) + 2);
#line 714
    X1 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 714
    X2 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 714
    X3 += (*((kw + 3) + 0) + 6ULL) + 1ULL;
#line 714
    X0 += X1;
#line 714
    X1 = (X1 << 25) | (X1 >> 39);
#line 714
    X1 ^= X0;
#line 714
    X2 += X3;
#line 714
    X3 = (X3 << 33) | (X3 >> 31);
#line 714
    X3 ^= X2;
#line 714
    X0 += X3;
#line 714
    X3 = (X3 << 46) | (X3 >> 18);
#line 714
    X3 ^= X0;
#line 714
    X2 += X1;
#line 714
    X1 = (X1 << 12) | (X1 >> 52);
#line 714
    X1 ^= X2;
#line 714
    X0 += X1;
#line 714
    X1 = (X1 << 58) | (X1 >> 6);
#line 714
    X1 ^= X0;
#line 714
    X2 += X3;
#line 714
    X3 = (X3 << 22) | (X3 >> 42);
#line 714
    X3 ^= X2;
#line 714
    X0 += X3;
#line 714
    X3 = (X3 << 32) | (X3 >> 32);
#line 714
    X3 ^= X0;
#line 714
    X2 += X1;
#line 714
    X1 = (X1 << 32) | (X1 >> 32);
#line 714
    X1 ^= X2;
#line 714
    X0 += *((kw + 3) + 3);
#line 714
    X1 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 714
    X2 += *((kw + 3) + 0) + *((kw + 0) + 0);
#line 714
    X3 += (*((kw + 3) + 1) + 7ULL) + 1ULL;
#line 717
    X0 += X1;
#line 717
    X1 = (X1 << 14) | (X1 >> 50);
#line 717
    X1 ^= X0;
#line 717
    X2 += X3;
#line 717
    X3 = (X3 << 16) | (X3 >> 48);
#line 717
    X3 ^= X2;
#line 717
    X0 += X3;
#line 717
    X3 = (X3 << 52) | (X3 >> 12);
#line 717
    X3 ^= X0;
#line 717
    X2 += X1;
#line 717
    X1 = (X1 << 57) | (X1 >> 7);
#line 717
    X1 ^= X2;
#line 717
    X0 += X1;
#line 717
    X1 = (X1 << 23) | (X1 >> 41);
#line 717
    X1 ^= X0;
#line 717
    X2 += X3;
#line 717
    X3 = (X3 << 40) | (X3 >> 24);
#line 717
    X3 ^= X2;
#line 717
    X0 += X3;
#line 717
    X3 = (X3 << 5) | (X3 >> 59);
#line 717
    X3 ^= X0;
#line 717
    X2 += X1;
#line 717
    X1 = (X1 << 37) | (X1 >> 27);
#line 717
    X1 ^= X2;
#line 717
    X0 += *((kw + 3) + 4);
#line 717
    X1 += *((kw + 3) + 0) + *((kw + 0) + 0);
#line 717
    X2 += *((kw + 3) + 1) + *((kw + 0) + 1);
#line 717
    X3 += (*((kw + 3) + 2) + 8ULL) + 1ULL;
#line 717
    X0 += X1;
#line 717
    X1 = (X1 << 25) | (X1 >> 39);
#line 717
    X1 ^= X0;
#line 717
    X2 += X3;
#line 717
    X3 = (X3 << 33) | (X3 >> 31);
#line 717
    X3 ^= X2;
#line 717
    X0 += X3;
#line 717
    X3 = (X3 << 46) | (X3 >> 18);
#line 717
    X3 ^= X0;
#line 717
    X2 += X1;
#line 717
    X1 = (X1 << 12) | (X1 >> 52);
#line 717
    X1 ^= X2;
#line 717
    X0 += X1;
#line 717
    X1 = (X1 << 58) | (X1 >> 6);
#line 717
    X1 ^= X0;
#line 717
    X2 += X3;
#line 717
    X3 = (X3 << 22) | (X3 >> 42);
#line 717
    X3 ^= X2;
#line 717
    X0 += X3;
#line 717
    X3 = (X3 << 32) | (X3 >> 32);
#line 717
    X3 ^= X0;
#line 717
    X2 += X1;
#line 717
    X1 = (X1 << 32) | (X1 >> 32);
#line 717
    X1 ^= X2;
#line 717
    X0 += *((kw + 3) + 0);
#line 717
    X1 += *((kw + 3) + 1) + *((kw + 0) + 1);
#line 717
    X2 += *((kw + 3) + 2) + *((kw + 0) + 2);
#line 717
    X3 += (*((kw + 3) + 3) + 9ULL) + 1ULL;
#line 720
    X0 += X1;
#line 720
    X1 = (X1 << 14) | (X1 >> 50);
#line 720
    X1 ^= X0;
#line 720
    X2 += X3;
#line 720
    X3 = (X3 << 16) | (X3 >> 48);
#line 720
    X3 ^= X2;
#line 720
    X0 += X3;
#line 720
    X3 = (X3 << 52) | (X3 >> 12);
#line 720
    X3 ^= X0;
#line 720
    X2 += X1;
#line 720
    X1 = (X1 << 57) | (X1 >> 7);
#line 720
    X1 ^= X2;
#line 720
    X0 += X1;
#line 720
    X1 = (X1 << 23) | (X1 >> 41);
#line 720
    X1 ^= X0;
#line 720
    X2 += X3;
#line 720
    X3 = (X3 << 40) | (X3 >> 24);
#line 720
    X3 ^= X2;
#line 720
    X0 += X3;
#line 720
    X3 = (X3 << 5) | (X3 >> 59);
#line 720
    X3 ^= X0;
#line 720
    X2 += X1;
#line 720
    X1 = (X1 << 37) | (X1 >> 27);
#line 720
    X1 ^= X2;
#line 720
    X0 += *((kw + 3) + 1);
#line 720
    X1 += *((kw + 3) + 2) + *((kw + 0) + 2);
#line 720
    X2 += *((kw + 3) + 3) + *((kw + 0) + 0);
#line 720
    X3 += (*((kw + 3) + 4) + 10ULL) + 1ULL;
#line 720
    X0 += X1;
#line 720
    X1 = (X1 << 25) | (X1 >> 39);
#line 720
    X1 ^= X0;
#line 720
    X2 += X3;
#line 720
    X3 = (X3 << 33) | (X3 >> 31);
#line 720
    X3 ^= X2;
#line 720
    X0 += X3;
#line 720
    X3 = (X3 << 46) | (X3 >> 18);
#line 720
    X3 ^= X0;
#line 720
    X2 += X1;
#line 720
    X1 = (X1 << 12) | (X1 >> 52);
#line 720
    X1 ^= X2;
#line 720
    X0 += X1;
#line 720
    X1 = (X1 << 58) | (X1 >> 6);
#line 720
    X1 ^= X0;
#line 720
    X2 += X3;
#line 720
    X3 = (X3 << 22) | (X3 >> 42);
#line 720
    X3 ^= X2;
#line 720
    X0 += X3;
#line 720
    X3 = (X3 << 32) | (X3 >> 32);
#line 720
    X3 ^= X0;
#line 720
    X2 += X1;
#line 720
    X1 = (X1 << 32) | (X1 >> 32);
#line 720
    X1 ^= X2;
#line 720
    X0 += *((kw + 3) + 2);
#line 720
    X1 += *((kw + 3) + 3) + *((kw + 0) + 0);
#line 720
    X2 += *((kw + 3) + 4) + *((kw + 0) + 1);
#line 720
    X3 += (*((kw + 3) + 0) + 11ULL) + 1ULL;
#line 723
    X0 += X1;
#line 723
    X1 = (X1 << 14) | (X1 >> 50);
#line 723
    X1 ^= X0;
#line 723
    X2 += X3;
#line 723
    X3 = (X3 << 16) | (X3 >> 48);
#line 723
    X3 ^= X2;
#line 723
    X0 += X3;
#line 723
    X3 = (X3 << 52) | (X3 >> 12);
#line 723
    X3 ^= X0;
#line 723
    X2 += X1;
#line 723
    X1 = (X1 << 57) | (X1 >> 7);
#line 723
    X1 ^= X2;
#line 723
    X0 += X1;
#line 723
    X1 = (X1 << 23) | (X1 >> 41);
#line 723
    X1 ^= X0;
#line 723
    X2 += X3;
#line 723
    X3 = (X3 << 40) | (X3 >> 24);
#line 723
    X3 ^= X2;
#line 723
    X0 += X3;
#line 723
    X3 = (X3 << 5) | (X3 >> 59);
#line 723
    X3 ^= X0;
#line 723
    X2 += X1;
#line 723
    X1 = (X1 << 37) | (X1 >> 27);
#line 723
    X1 ^= X2;
#line 723
    X0 += *((kw + 3) + 3);
#line 723
    X1 += *((kw + 3) + 4) + *((kw + 0) + 1);
#line 723
    X2 += *((kw + 3) + 0) + *((kw + 0) + 2);
#line 723
    X3 += (*((kw + 3) + 1) + 12ULL) + 1ULL;
#line 723
    X0 += X1;
#line 723
    X1 = (X1 << 25) | (X1 >> 39);
#line 723
    X1 ^= X0;
#line 723
    X2 += X3;
#line 723
    X3 = (X3 << 33) | (X3 >> 31);
#line 723
    X3 ^= X2;
#line 723
    X0 += X3;
#line 723
    X3 = (X3 << 46) | (X3 >> 18);
#line 723
    X3 ^= X0;
#line 723
    X2 += X1;
#line 723
    X1 = (X1 << 12) | (X1 >> 52);
#line 723
    X1 ^= X2;
#line 723
    X0 += X1;
#line 723
    X1 = (X1 << 58) | (X1 >> 6);
#line 723
    X1 ^= X0;
#line 723
    X2 += X3;
#line 723
    X3 = (X3 << 22) | (X3 >> 42);
#line 723
    X3 ^= X2;
#line 723
    X0 += X3;
#line 723
    X3 = (X3 << 32) | (X3 >> 32);
#line 723
    X3 ^= X0;
#line 723
    X2 += X1;
#line 723
    X1 = (X1 << 32) | (X1 >> 32);
#line 723
    X1 ^= X2;
#line 723
    X0 += *((kw + 3) + 4);
#line 723
    X1 += *((kw + 3) + 0) + *((kw + 0) + 2);
#line 723
    X2 += *((kw + 3) + 1) + *((kw + 0) + 0);
#line 723
    X3 += (*((kw + 3) + 2) + 13ULL) + 1ULL;
#line 726
    X0 += X1;
#line 726
    X1 = (X1 << 14) | (X1 >> 50);
#line 726
    X1 ^= X0;
#line 726
    X2 += X3;
#line 726
    X3 = (X3 << 16) | (X3 >> 48);
#line 726
    X3 ^= X2;
#line 726
    X0 += X3;
#line 726
    X3 = (X3 << 52) | (X3 >> 12);
#line 726
    X3 ^= X0;
#line 726
    X2 += X1;
#line 726
    X1 = (X1 << 57) | (X1 >> 7);
#line 726
    X1 ^= X2;
#line 726
    X0 += X1;
#line 726
    X1 = (X1 << 23) | (X1 >> 41);
#line 726
    X1 ^= X0;
#line 726
    X2 += X3;
#line 726
    X3 = (X3 << 40) | (X3 >> 24);
#line 726
    X3 ^= X2;
#line 726
    X0 += X3;
#line 726
    X3 = (X3 << 5) | (X3 >> 59);
#line 726
    X3 ^= X0;
#line 726
    X2 += X1;
#line 726
    X1 = (X1 << 37) | (X1 >> 27);
#line 726
    X1 ^= X2;
#line 726
    X0 += *((kw + 3) + 0);
#line 726
    X1 += *((kw + 3) + 1) + *((kw + 0) + 0);
#line 726
    X2 += *((kw + 3) + 2) + *((kw + 0) + 1);
#line 726
    X3 += (*((kw + 3) + 3) + 14ULL) + 1ULL;
#line 726
    X0 += X1;
#line 726
    X1 = (X1 << 25) | (X1 >> 39);
#line 726
    X1 ^= X0;
#line 726
    X2 += X3;
#line 726
    X3 = (X3 << 33) | (X3 >> 31);
#line 726
    X3 ^= X2;
#line 726
    X0 += X3;
#line 726
    X3 = (X3 << 46) | (X3 >> 18);
#line 726
    X3 ^= X0;
#line 726
    X2 += X1;
#line 726
    X1 = (X1 << 12) | (X1 >> 52);
#line 726
    X1 ^= X2;
#line 726
    X0 += X1;
#line 726
    X1 = (X1 << 58) | (X1 >> 6);
#line 726
    X1 ^= X0;
#line 726
    X2 += X3;
#line 726
    X3 = (X3 << 22) | (X3 >> 42);
#line 726
    X3 ^= X2;
#line 726
    X0 += X3;
#line 726
    X3 = (X3 << 32) | (X3 >> 32);
#line 726
    X3 ^= X0;
#line 726
    X2 += X1;
#line 726
    X1 = (X1 << 32) | (X1 >> 32);
#line 726
    X1 ^= X2;
#line 726
    X0 += *((kw + 3) + 1);
#line 726
    X1 += *((kw + 3) + 2) + *((kw + 0) + 1);
#line 726
    X2 += *((kw + 3) + 3) + *((kw + 0) + 2);
#line 726
    X3 += (*((kw + 3) + 4) + 15ULL) + 1ULL;
#line 729
    X0 += X1;
#line 729
    X1 = (X1 << 14) | (X1 >> 50);
#line 729
    X1 ^= X0;
#line 729
    X2 += X3;
#line 729
    X3 = (X3 << 16) | (X3 >> 48);
#line 729
    X3 ^= X2;
#line 729
    X0 += X3;
#line 729
    X3 = (X3 << 52) | (X3 >> 12);
#line 729
    X3 ^= X0;
#line 729
    X2 += X1;
#line 729
    X1 = (X1 << 57) | (X1 >> 7);
#line 729
    X1 ^= X2;
#line 729
    X0 += X1;
#line 729
    X1 = (X1 << 23) | (X1 >> 41);
#line 729
    X1 ^= X0;
#line 729
    X2 += X3;
#line 729
    X3 = (X3 << 40) | (X3 >> 24);
#line 729
    X3 ^= X2;
#line 729
    X0 += X3;
#line 729
    X3 = (X3 << 5) | (X3 >> 59);
#line 729
    X3 ^= X0;
#line 729
    X2 += X1;
#line 729
    X1 = (X1 << 37) | (X1 >> 27);
#line 729
    X1 ^= X2;
#line 729
    X0 += *((kw + 3) + 2);
#line 729
    X1 += *((kw + 3) + 3) + *((kw + 0) + 2);
#line 729
    X2 += *((kw + 3) + 4) + *((kw + 0) + 0);
#line 729
    X3 += (*((kw + 3) + 0) + 16ULL) + 1ULL;
#line 729
    X0 += X1;
#line 729
    X1 = (X1 << 25) | (X1 >> 39);
#line 729
    X1 ^= X0;
#line 729
    X2 += X3;
#line 729
    X3 = (X3 << 33) | (X3 >> 31);
#line 729
    X3 ^= X2;
#line 729
    X0 += X3;
#line 729
    X3 = (X3 << 46) | (X3 >> 18);
#line 729
    X3 ^= X0;
#line 729
    X2 += X1;
#line 729
    X1 = (X1 << 12) | (X1 >> 52);
#line 729
    X1 ^= X2;
#line 729
    X0 += X1;
#line 729
    X1 = (X1 << 58) | (X1 >> 6);
#line 729
    X1 ^= X0;
#line 729
    X2 += X3;
#line 729
    X3 = (X3 << 22) | (X3 >> 42);
#line 729
    X3 ^= X2;
#line 729
    X0 += X3;
#line 729
    X3 = (X3 << 32) | (X3 >> 32);
#line 729
    X3 ^= X0;
#line 729
    X2 += X1;
#line 729
    X1 = (X1 << 32) | (X1 >> 32);
#line 729
    X1 ^= X2;
#line 729
    X0 += *((kw + 3) + 3);
#line 729
    X1 += *((kw + 3) + 4) + *((kw + 0) + 0);
#line 729
    X2 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 729
    X3 += (*((kw + 3) + 1) + 17ULL) + 1ULL;
#line 754
    ctx->X[0] = X0 ^ w[0];
#line 755
    ctx->X[1] = X1 ^ w[1];
#line 756
    ctx->X[2] = X2 ^ w[2];
#line 757
    ctx->X[3] = X3 ^ w[3];
#line 761
    *((kw + 0) + 1) &= ~ (1ULL << 62);
#line 622
    blkCnt --;
#line 622
    if (! blkCnt) {
#line 622
      break;
    }
  }
#line 763
  ctx->h.T[0] = *((kw + 0) + 0);
#line 764
  ctx->h.T[1] = *((kw + 0) + 1);
#line 765
  return;
}
}
#line 778 "skein.c"
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
#line 817
  *((kw + 0) + 0) = ctx->h.T[0];
#line 818
  *((kw + 0) + 1) = ctx->h.T[1];
#line 819
  while (1) {
#line 822
    *((kw + 0) + 0) += (u64b_t )byteCntAdd;
#line 825
    *((kw + 3) + 0) = ctx->X[0];
#line 826
    *((kw + 3) + 1) = ctx->X[1];
#line 827
    *((kw + 3) + 2) = ctx->X[2];
#line 828
    *((kw + 3) + 3) = ctx->X[3];
#line 829
    *((kw + 3) + 4) = ctx->X[4];
#line 830
    *((kw + 3) + 5) = ctx->X[5];
#line 831
    *((kw + 3) + 6) = ctx->X[6];
#line 832
    *((kw + 3) + 7) = ctx->X[7];
#line 833
    *((kw + 3) + 8) = (((((((*((kw + 3) + 0) ^ *((kw + 3) + 1)) ^ *((kw + 3) + 2)) ^ *((kw + 3) + 3)) ^ *((kw + 3) + 4)) ^ *((kw + 3) + 5)) ^ *((kw + 3) + 6)) ^ *((kw + 3) + 7)) ^ (2851871266ULL + (466688986ULL << 32));
#line 836
    *((kw + 0) + 2) = *((kw + 0) + 0) ^ *((kw + 0) + 1);
#line 838
    Skein_Get64_LSB_First(w, blkPtr, (size_t )8);
#line 843
    X0 = w[0] + *((kw + 3) + 0);
#line 844
    X1 = w[1] + *((kw + 3) + 1);
#line 845
    X2 = w[2] + *((kw + 3) + 2);
#line 846
    X3 = w[3] + *((kw + 3) + 3);
#line 847
    X4 = w[4] + *((kw + 3) + 4);
#line 848
    X5 = (w[5] + *((kw + 3) + 5)) + *((kw + 0) + 0);
#line 849
    X6 = (w[6] + *((kw + 3) + 6)) + *((kw + 0) + 1);
#line 850
    X7 = w[7] + *((kw + 3) + 7);
#line 852
    blkPtr += 64;
#line 918
    X0 += X1;
#line 918
    X1 = (X1 << 46) | (X1 >> 18);
#line 918
    X1 ^= X0;
#line 918
    X2 += X3;
#line 918
    X3 = (X3 << 36) | (X3 >> 28);
#line 918
    X3 ^= X2;
#line 918
    X4 += X5;
#line 918
    X5 = (X5 << 19) | (X5 >> 45);
#line 918
    X5 ^= X4;
#line 918
    X6 += X7;
#line 918
    X7 = (X7 << 37) | (X7 >> 27);
#line 918
    X7 ^= X6;
#line 918
    X2 += X1;
#line 918
    X1 = (X1 << 33) | (X1 >> 31);
#line 918
    X1 ^= X2;
#line 918
    X4 += X7;
#line 918
    X7 = (X7 << 27) | (X7 >> 37);
#line 918
    X7 ^= X4;
#line 918
    X6 += X5;
#line 918
    X5 = (X5 << 14) | (X5 >> 50);
#line 918
    X5 ^= X6;
#line 918
    X0 += X3;
#line 918
    X3 = (X3 << 42) | (X3 >> 22);
#line 918
    X3 ^= X0;
#line 918
    X4 += X1;
#line 918
    X1 = (X1 << 17) | (X1 >> 47);
#line 918
    X1 ^= X4;
#line 918
    X6 += X3;
#line 918
    X3 = (X3 << 49) | (X3 >> 15);
#line 918
    X3 ^= X6;
#line 918
    X0 += X5;
#line 918
    X5 = (X5 << 36) | (X5 >> 28);
#line 918
    X5 ^= X0;
#line 918
    X2 += X7;
#line 918
    X7 = (X7 << 39) | (X7 >> 25);
#line 918
    X7 ^= X2;
#line 918
    X6 += X1;
#line 918
    X1 = (X1 << 44) | (X1 >> 20);
#line 918
    X1 ^= X6;
#line 918
    X0 += X7;
#line 918
    X7 = (X7 << 9) | (X7 >> 55);
#line 918
    X7 ^= X0;
#line 918
    X2 += X5;
#line 918
    X5 = (X5 << 54) | (X5 >> 10);
#line 918
    X5 ^= X2;
#line 918
    X4 += X3;
#line 918
    X3 = (X3 << 56) | (X3 >> 8);
#line 918
    X3 ^= X4;
#line 918
    X0 += *((kw + 3) + 1);
#line 918
    X1 += *((kw + 3) + 2);
#line 918
    X2 += *((kw + 3) + 3);
#line 918
    X3 += *((kw + 3) + 4);
#line 918
    X4 += *((kw + 3) + 5);
#line 918
    X5 += *((kw + 3) + 6) + *((kw + 0) + 1);
#line 918
    X6 += *((kw + 3) + 7) + *((kw + 0) + 2);
#line 918
    X7 += *((kw + 3) + 8) + 1ULL;
#line 918
    X0 += X1;
#line 918
    X1 = (X1 << 39) | (X1 >> 25);
#line 918
    X1 ^= X0;
#line 918
    X2 += X3;
#line 918
    X3 = (X3 << 30) | (X3 >> 34);
#line 918
    X3 ^= X2;
#line 918
    X4 += X5;
#line 918
    X5 = (X5 << 34) | (X5 >> 30);
#line 918
    X5 ^= X4;
#line 918
    X6 += X7;
#line 918
    X7 = (X7 << 24) | (X7 >> 40);
#line 918
    X7 ^= X6;
#line 918
    X2 += X1;
#line 918
    X1 = (X1 << 13) | (X1 >> 51);
#line 918
    X1 ^= X2;
#line 918
    X4 += X7;
#line 918
    X7 = (X7 << 50) | (X7 >> 14);
#line 918
    X7 ^= X4;
#line 918
    X6 += X5;
#line 918
    X5 = (X5 << 10) | (X5 >> 54);
#line 918
    X5 ^= X6;
#line 918
    X0 += X3;
#line 918
    X3 = (X3 << 17) | (X3 >> 47);
#line 918
    X3 ^= X0;
#line 918
    X4 += X1;
#line 918
    X1 = (X1 << 25) | (X1 >> 39);
#line 918
    X1 ^= X4;
#line 918
    X6 += X3;
#line 918
    X3 = (X3 << 29) | (X3 >> 35);
#line 918
    X3 ^= X6;
#line 918
    X0 += X5;
#line 918
    X5 = (X5 << 39) | (X5 >> 25);
#line 918
    X5 ^= X0;
#line 918
    X2 += X7;
#line 918
    X7 = (X7 << 43) | (X7 >> 21);
#line 918
    X7 ^= X2;
#line 918
    X6 += X1;
#line 918
    X1 = (X1 << 8) | (X1 >> 56);
#line 918
    X1 ^= X6;
#line 918
    X0 += X7;
#line 918
    X7 = (X7 << 35) | (X7 >> 29);
#line 918
    X7 ^= X0;
#line 918
    X2 += X5;
#line 918
    X5 = (X5 << 56) | (X5 >> 8);
#line 918
    X5 ^= X2;
#line 918
    X4 += X3;
#line 918
    X3 = (X3 << 22) | (X3 >> 42);
#line 918
    X3 ^= X4;
#line 918
    X0 += *((kw + 3) + 2);
#line 918
    X1 += *((kw + 3) + 3);
#line 918
    X2 += *((kw + 3) + 4);
#line 918
    X3 += *((kw + 3) + 5);
#line 918
    X4 += *((kw + 3) + 6);
#line 918
    X5 += *((kw + 3) + 7) + *((kw + 0) + 2);
#line 918
    X6 += *((kw + 3) + 8) + *((kw + 0) + 0);
#line 918
    X7 += (*((kw + 3) + 0) + 1ULL) + 1ULL;
#line 925
    X0 += X1;
#line 925
    X1 = (X1 << 46) | (X1 >> 18);
#line 925
    X1 ^= X0;
#line 925
    X2 += X3;
#line 925
    X3 = (X3 << 36) | (X3 >> 28);
#line 925
    X3 ^= X2;
#line 925
    X4 += X5;
#line 925
    X5 = (X5 << 19) | (X5 >> 45);
#line 925
    X5 ^= X4;
#line 925
    X6 += X7;
#line 925
    X7 = (X7 << 37) | (X7 >> 27);
#line 925
    X7 ^= X6;
#line 925
    X2 += X1;
#line 925
    X1 = (X1 << 33) | (X1 >> 31);
#line 925
    X1 ^= X2;
#line 925
    X4 += X7;
#line 925
    X7 = (X7 << 27) | (X7 >> 37);
#line 925
    X7 ^= X4;
#line 925
    X6 += X5;
#line 925
    X5 = (X5 << 14) | (X5 >> 50);
#line 925
    X5 ^= X6;
#line 925
    X0 += X3;
#line 925
    X3 = (X3 << 42) | (X3 >> 22);
#line 925
    X3 ^= X0;
#line 925
    X4 += X1;
#line 925
    X1 = (X1 << 17) | (X1 >> 47);
#line 925
    X1 ^= X4;
#line 925
    X6 += X3;
#line 925
    X3 = (X3 << 49) | (X3 >> 15);
#line 925
    X3 ^= X6;
#line 925
    X0 += X5;
#line 925
    X5 = (X5 << 36) | (X5 >> 28);
#line 925
    X5 ^= X0;
#line 925
    X2 += X7;
#line 925
    X7 = (X7 << 39) | (X7 >> 25);
#line 925
    X7 ^= X2;
#line 925
    X6 += X1;
#line 925
    X1 = (X1 << 44) | (X1 >> 20);
#line 925
    X1 ^= X6;
#line 925
    X0 += X7;
#line 925
    X7 = (X7 << 9) | (X7 >> 55);
#line 925
    X7 ^= X0;
#line 925
    X2 += X5;
#line 925
    X5 = (X5 << 54) | (X5 >> 10);
#line 925
    X5 ^= X2;
#line 925
    X4 += X3;
#line 925
    X3 = (X3 << 56) | (X3 >> 8);
#line 925
    X3 ^= X4;
#line 925
    X0 += *((kw + 3) + 3);
#line 925
    X1 += *((kw + 3) + 4);
#line 925
    X2 += *((kw + 3) + 5);
#line 925
    X3 += *((kw + 3) + 6);
#line 925
    X4 += *((kw + 3) + 7);
#line 925
    X5 += *((kw + 3) + 8) + *((kw + 0) + 0);
#line 925
    X6 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 925
    X7 += (*((kw + 3) + 1) + 2ULL) + 1ULL;
#line 925
    X0 += X1;
#line 925
    X1 = (X1 << 39) | (X1 >> 25);
#line 925
    X1 ^= X0;
#line 925
    X2 += X3;
#line 925
    X3 = (X3 << 30) | (X3 >> 34);
#line 925
    X3 ^= X2;
#line 925
    X4 += X5;
#line 925
    X5 = (X5 << 34) | (X5 >> 30);
#line 925
    X5 ^= X4;
#line 925
    X6 += X7;
#line 925
    X7 = (X7 << 24) | (X7 >> 40);
#line 925
    X7 ^= X6;
#line 925
    X2 += X1;
#line 925
    X1 = (X1 << 13) | (X1 >> 51);
#line 925
    X1 ^= X2;
#line 925
    X4 += X7;
#line 925
    X7 = (X7 << 50) | (X7 >> 14);
#line 925
    X7 ^= X4;
#line 925
    X6 += X5;
#line 925
    X5 = (X5 << 10) | (X5 >> 54);
#line 925
    X5 ^= X6;
#line 925
    X0 += X3;
#line 925
    X3 = (X3 << 17) | (X3 >> 47);
#line 925
    X3 ^= X0;
#line 925
    X4 += X1;
#line 925
    X1 = (X1 << 25) | (X1 >> 39);
#line 925
    X1 ^= X4;
#line 925
    X6 += X3;
#line 925
    X3 = (X3 << 29) | (X3 >> 35);
#line 925
    X3 ^= X6;
#line 925
    X0 += X5;
#line 925
    X5 = (X5 << 39) | (X5 >> 25);
#line 925
    X5 ^= X0;
#line 925
    X2 += X7;
#line 925
    X7 = (X7 << 43) | (X7 >> 21);
#line 925
    X7 ^= X2;
#line 925
    X6 += X1;
#line 925
    X1 = (X1 << 8) | (X1 >> 56);
#line 925
    X1 ^= X6;
#line 925
    X0 += X7;
#line 925
    X7 = (X7 << 35) | (X7 >> 29);
#line 925
    X7 ^= X0;
#line 925
    X2 += X5;
#line 925
    X5 = (X5 << 56) | (X5 >> 8);
#line 925
    X5 ^= X2;
#line 925
    X4 += X3;
#line 925
    X3 = (X3 << 22) | (X3 >> 42);
#line 925
    X3 ^= X4;
#line 925
    X0 += *((kw + 3) + 4);
#line 925
    X1 += *((kw + 3) + 5);
#line 925
    X2 += *((kw + 3) + 6);
#line 925
    X3 += *((kw + 3) + 7);
#line 925
    X4 += *((kw + 3) + 8);
#line 925
    X5 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 925
    X6 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 925
    X7 += (*((kw + 3) + 2) + 3ULL) + 1ULL;
#line 928
    X0 += X1;
#line 928
    X1 = (X1 << 46) | (X1 >> 18);
#line 928
    X1 ^= X0;
#line 928
    X2 += X3;
#line 928
    X3 = (X3 << 36) | (X3 >> 28);
#line 928
    X3 ^= X2;
#line 928
    X4 += X5;
#line 928
    X5 = (X5 << 19) | (X5 >> 45);
#line 928
    X5 ^= X4;
#line 928
    X6 += X7;
#line 928
    X7 = (X7 << 37) | (X7 >> 27);
#line 928
    X7 ^= X6;
#line 928
    X2 += X1;
#line 928
    X1 = (X1 << 33) | (X1 >> 31);
#line 928
    X1 ^= X2;
#line 928
    X4 += X7;
#line 928
    X7 = (X7 << 27) | (X7 >> 37);
#line 928
    X7 ^= X4;
#line 928
    X6 += X5;
#line 928
    X5 = (X5 << 14) | (X5 >> 50);
#line 928
    X5 ^= X6;
#line 928
    X0 += X3;
#line 928
    X3 = (X3 << 42) | (X3 >> 22);
#line 928
    X3 ^= X0;
#line 928
    X4 += X1;
#line 928
    X1 = (X1 << 17) | (X1 >> 47);
#line 928
    X1 ^= X4;
#line 928
    X6 += X3;
#line 928
    X3 = (X3 << 49) | (X3 >> 15);
#line 928
    X3 ^= X6;
#line 928
    X0 += X5;
#line 928
    X5 = (X5 << 36) | (X5 >> 28);
#line 928
    X5 ^= X0;
#line 928
    X2 += X7;
#line 928
    X7 = (X7 << 39) | (X7 >> 25);
#line 928
    X7 ^= X2;
#line 928
    X6 += X1;
#line 928
    X1 = (X1 << 44) | (X1 >> 20);
#line 928
    X1 ^= X6;
#line 928
    X0 += X7;
#line 928
    X7 = (X7 << 9) | (X7 >> 55);
#line 928
    X7 ^= X0;
#line 928
    X2 += X5;
#line 928
    X5 = (X5 << 54) | (X5 >> 10);
#line 928
    X5 ^= X2;
#line 928
    X4 += X3;
#line 928
    X3 = (X3 << 56) | (X3 >> 8);
#line 928
    X3 ^= X4;
#line 928
    X0 += *((kw + 3) + 5);
#line 928
    X1 += *((kw + 3) + 6);
#line 928
    X2 += *((kw + 3) + 7);
#line 928
    X3 += *((kw + 3) + 8);
#line 928
    X4 += *((kw + 3) + 0);
#line 928
    X5 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 928
    X6 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 928
    X7 += (*((kw + 3) + 3) + 4ULL) + 1ULL;
#line 928
    X0 += X1;
#line 928
    X1 = (X1 << 39) | (X1 >> 25);
#line 928
    X1 ^= X0;
#line 928
    X2 += X3;
#line 928
    X3 = (X3 << 30) | (X3 >> 34);
#line 928
    X3 ^= X2;
#line 928
    X4 += X5;
#line 928
    X5 = (X5 << 34) | (X5 >> 30);
#line 928
    X5 ^= X4;
#line 928
    X6 += X7;
#line 928
    X7 = (X7 << 24) | (X7 >> 40);
#line 928
    X7 ^= X6;
#line 928
    X2 += X1;
#line 928
    X1 = (X1 << 13) | (X1 >> 51);
#line 928
    X1 ^= X2;
#line 928
    X4 += X7;
#line 928
    X7 = (X7 << 50) | (X7 >> 14);
#line 928
    X7 ^= X4;
#line 928
    X6 += X5;
#line 928
    X5 = (X5 << 10) | (X5 >> 54);
#line 928
    X5 ^= X6;
#line 928
    X0 += X3;
#line 928
    X3 = (X3 << 17) | (X3 >> 47);
#line 928
    X3 ^= X0;
#line 928
    X4 += X1;
#line 928
    X1 = (X1 << 25) | (X1 >> 39);
#line 928
    X1 ^= X4;
#line 928
    X6 += X3;
#line 928
    X3 = (X3 << 29) | (X3 >> 35);
#line 928
    X3 ^= X6;
#line 928
    X0 += X5;
#line 928
    X5 = (X5 << 39) | (X5 >> 25);
#line 928
    X5 ^= X0;
#line 928
    X2 += X7;
#line 928
    X7 = (X7 << 43) | (X7 >> 21);
#line 928
    X7 ^= X2;
#line 928
    X6 += X1;
#line 928
    X1 = (X1 << 8) | (X1 >> 56);
#line 928
    X1 ^= X6;
#line 928
    X0 += X7;
#line 928
    X7 = (X7 << 35) | (X7 >> 29);
#line 928
    X7 ^= X0;
#line 928
    X2 += X5;
#line 928
    X5 = (X5 << 56) | (X5 >> 8);
#line 928
    X5 ^= X2;
#line 928
    X4 += X3;
#line 928
    X3 = (X3 << 22) | (X3 >> 42);
#line 928
    X3 ^= X4;
#line 928
    X0 += *((kw + 3) + 6);
#line 928
    X1 += *((kw + 3) + 7);
#line 928
    X2 += *((kw + 3) + 8);
#line 928
    X3 += *((kw + 3) + 0);
#line 928
    X4 += *((kw + 3) + 1);
#line 928
    X5 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 928
    X6 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 928
    X7 += (*((kw + 3) + 4) + 5ULL) + 1ULL;
#line 931
    X0 += X1;
#line 931
    X1 = (X1 << 46) | (X1 >> 18);
#line 931
    X1 ^= X0;
#line 931
    X2 += X3;
#line 931
    X3 = (X3 << 36) | (X3 >> 28);
#line 931
    X3 ^= X2;
#line 931
    X4 += X5;
#line 931
    X5 = (X5 << 19) | (X5 >> 45);
#line 931
    X5 ^= X4;
#line 931
    X6 += X7;
#line 931
    X7 = (X7 << 37) | (X7 >> 27);
#line 931
    X7 ^= X6;
#line 931
    X2 += X1;
#line 931
    X1 = (X1 << 33) | (X1 >> 31);
#line 931
    X1 ^= X2;
#line 931
    X4 += X7;
#line 931
    X7 = (X7 << 27) | (X7 >> 37);
#line 931
    X7 ^= X4;
#line 931
    X6 += X5;
#line 931
    X5 = (X5 << 14) | (X5 >> 50);
#line 931
    X5 ^= X6;
#line 931
    X0 += X3;
#line 931
    X3 = (X3 << 42) | (X3 >> 22);
#line 931
    X3 ^= X0;
#line 931
    X4 += X1;
#line 931
    X1 = (X1 << 17) | (X1 >> 47);
#line 931
    X1 ^= X4;
#line 931
    X6 += X3;
#line 931
    X3 = (X3 << 49) | (X3 >> 15);
#line 931
    X3 ^= X6;
#line 931
    X0 += X5;
#line 931
    X5 = (X5 << 36) | (X5 >> 28);
#line 931
    X5 ^= X0;
#line 931
    X2 += X7;
#line 931
    X7 = (X7 << 39) | (X7 >> 25);
#line 931
    X7 ^= X2;
#line 931
    X6 += X1;
#line 931
    X1 = (X1 << 44) | (X1 >> 20);
#line 931
    X1 ^= X6;
#line 931
    X0 += X7;
#line 931
    X7 = (X7 << 9) | (X7 >> 55);
#line 931
    X7 ^= X0;
#line 931
    X2 += X5;
#line 931
    X5 = (X5 << 54) | (X5 >> 10);
#line 931
    X5 ^= X2;
#line 931
    X4 += X3;
#line 931
    X3 = (X3 << 56) | (X3 >> 8);
#line 931
    X3 ^= X4;
#line 931
    X0 += *((kw + 3) + 7);
#line 931
    X1 += *((kw + 3) + 8);
#line 931
    X2 += *((kw + 3) + 0);
#line 931
    X3 += *((kw + 3) + 1);
#line 931
    X4 += *((kw + 3) + 2);
#line 931
    X5 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 931
    X6 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 931
    X7 += (*((kw + 3) + 5) + 6ULL) + 1ULL;
#line 931
    X0 += X1;
#line 931
    X1 = (X1 << 39) | (X1 >> 25);
#line 931
    X1 ^= X0;
#line 931
    X2 += X3;
#line 931
    X3 = (X3 << 30) | (X3 >> 34);
#line 931
    X3 ^= X2;
#line 931
    X4 += X5;
#line 931
    X5 = (X5 << 34) | (X5 >> 30);
#line 931
    X5 ^= X4;
#line 931
    X6 += X7;
#line 931
    X7 = (X7 << 24) | (X7 >> 40);
#line 931
    X7 ^= X6;
#line 931
    X2 += X1;
#line 931
    X1 = (X1 << 13) | (X1 >> 51);
#line 931
    X1 ^= X2;
#line 931
    X4 += X7;
#line 931
    X7 = (X7 << 50) | (X7 >> 14);
#line 931
    X7 ^= X4;
#line 931
    X6 += X5;
#line 931
    X5 = (X5 << 10) | (X5 >> 54);
#line 931
    X5 ^= X6;
#line 931
    X0 += X3;
#line 931
    X3 = (X3 << 17) | (X3 >> 47);
#line 931
    X3 ^= X0;
#line 931
    X4 += X1;
#line 931
    X1 = (X1 << 25) | (X1 >> 39);
#line 931
    X1 ^= X4;
#line 931
    X6 += X3;
#line 931
    X3 = (X3 << 29) | (X3 >> 35);
#line 931
    X3 ^= X6;
#line 931
    X0 += X5;
#line 931
    X5 = (X5 << 39) | (X5 >> 25);
#line 931
    X5 ^= X0;
#line 931
    X2 += X7;
#line 931
    X7 = (X7 << 43) | (X7 >> 21);
#line 931
    X7 ^= X2;
#line 931
    X6 += X1;
#line 931
    X1 = (X1 << 8) | (X1 >> 56);
#line 931
    X1 ^= X6;
#line 931
    X0 += X7;
#line 931
    X7 = (X7 << 35) | (X7 >> 29);
#line 931
    X7 ^= X0;
#line 931
    X2 += X5;
#line 931
    X5 = (X5 << 56) | (X5 >> 8);
#line 931
    X5 ^= X2;
#line 931
    X4 += X3;
#line 931
    X3 = (X3 << 22) | (X3 >> 42);
#line 931
    X3 ^= X4;
#line 931
    X0 += *((kw + 3) + 8);
#line 931
    X1 += *((kw + 3) + 0);
#line 931
    X2 += *((kw + 3) + 1);
#line 931
    X3 += *((kw + 3) + 2);
#line 931
    X4 += *((kw + 3) + 3);
#line 931
    X5 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 931
    X6 += *((kw + 3) + 5) + *((kw + 0) + 0);
#line 931
    X7 += (*((kw + 3) + 6) + 7ULL) + 1ULL;
#line 934
    X0 += X1;
#line 934
    X1 = (X1 << 46) | (X1 >> 18);
#line 934
    X1 ^= X0;
#line 934
    X2 += X3;
#line 934
    X3 = (X3 << 36) | (X3 >> 28);
#line 934
    X3 ^= X2;
#line 934
    X4 += X5;
#line 934
    X5 = (X5 << 19) | (X5 >> 45);
#line 934
    X5 ^= X4;
#line 934
    X6 += X7;
#line 934
    X7 = (X7 << 37) | (X7 >> 27);
#line 934
    X7 ^= X6;
#line 934
    X2 += X1;
#line 934
    X1 = (X1 << 33) | (X1 >> 31);
#line 934
    X1 ^= X2;
#line 934
    X4 += X7;
#line 934
    X7 = (X7 << 27) | (X7 >> 37);
#line 934
    X7 ^= X4;
#line 934
    X6 += X5;
#line 934
    X5 = (X5 << 14) | (X5 >> 50);
#line 934
    X5 ^= X6;
#line 934
    X0 += X3;
#line 934
    X3 = (X3 << 42) | (X3 >> 22);
#line 934
    X3 ^= X0;
#line 934
    X4 += X1;
#line 934
    X1 = (X1 << 17) | (X1 >> 47);
#line 934
    X1 ^= X4;
#line 934
    X6 += X3;
#line 934
    X3 = (X3 << 49) | (X3 >> 15);
#line 934
    X3 ^= X6;
#line 934
    X0 += X5;
#line 934
    X5 = (X5 << 36) | (X5 >> 28);
#line 934
    X5 ^= X0;
#line 934
    X2 += X7;
#line 934
    X7 = (X7 << 39) | (X7 >> 25);
#line 934
    X7 ^= X2;
#line 934
    X6 += X1;
#line 934
    X1 = (X1 << 44) | (X1 >> 20);
#line 934
    X1 ^= X6;
#line 934
    X0 += X7;
#line 934
    X7 = (X7 << 9) | (X7 >> 55);
#line 934
    X7 ^= X0;
#line 934
    X2 += X5;
#line 934
    X5 = (X5 << 54) | (X5 >> 10);
#line 934
    X5 ^= X2;
#line 934
    X4 += X3;
#line 934
    X3 = (X3 << 56) | (X3 >> 8);
#line 934
    X3 ^= X4;
#line 934
    X0 += *((kw + 3) + 0);
#line 934
    X1 += *((kw + 3) + 1);
#line 934
    X2 += *((kw + 3) + 2);
#line 934
    X3 += *((kw + 3) + 3);
#line 934
    X4 += *((kw + 3) + 4);
#line 934
    X5 += *((kw + 3) + 5) + *((kw + 0) + 0);
#line 934
    X6 += *((kw + 3) + 6) + *((kw + 0) + 1);
#line 934
    X7 += (*((kw + 3) + 7) + 8ULL) + 1ULL;
#line 934
    X0 += X1;
#line 934
    X1 = (X1 << 39) | (X1 >> 25);
#line 934
    X1 ^= X0;
#line 934
    X2 += X3;
#line 934
    X3 = (X3 << 30) | (X3 >> 34);
#line 934
    X3 ^= X2;
#line 934
    X4 += X5;
#line 934
    X5 = (X5 << 34) | (X5 >> 30);
#line 934
    X5 ^= X4;
#line 934
    X6 += X7;
#line 934
    X7 = (X7 << 24) | (X7 >> 40);
#line 934
    X7 ^= X6;
#line 934
    X2 += X1;
#line 934
    X1 = (X1 << 13) | (X1 >> 51);
#line 934
    X1 ^= X2;
#line 934
    X4 += X7;
#line 934
    X7 = (X7 << 50) | (X7 >> 14);
#line 934
    X7 ^= X4;
#line 934
    X6 += X5;
#line 934
    X5 = (X5 << 10) | (X5 >> 54);
#line 934
    X5 ^= X6;
#line 934
    X0 += X3;
#line 934
    X3 = (X3 << 17) | (X3 >> 47);
#line 934
    X3 ^= X0;
#line 934
    X4 += X1;
#line 934
    X1 = (X1 << 25) | (X1 >> 39);
#line 934
    X1 ^= X4;
#line 934
    X6 += X3;
#line 934
    X3 = (X3 << 29) | (X3 >> 35);
#line 934
    X3 ^= X6;
#line 934
    X0 += X5;
#line 934
    X5 = (X5 << 39) | (X5 >> 25);
#line 934
    X5 ^= X0;
#line 934
    X2 += X7;
#line 934
    X7 = (X7 << 43) | (X7 >> 21);
#line 934
    X7 ^= X2;
#line 934
    X6 += X1;
#line 934
    X1 = (X1 << 8) | (X1 >> 56);
#line 934
    X1 ^= X6;
#line 934
    X0 += X7;
#line 934
    X7 = (X7 << 35) | (X7 >> 29);
#line 934
    X7 ^= X0;
#line 934
    X2 += X5;
#line 934
    X5 = (X5 << 56) | (X5 >> 8);
#line 934
    X5 ^= X2;
#line 934
    X4 += X3;
#line 934
    X3 = (X3 << 22) | (X3 >> 42);
#line 934
    X3 ^= X4;
#line 934
    X0 += *((kw + 3) + 1);
#line 934
    X1 += *((kw + 3) + 2);
#line 934
    X2 += *((kw + 3) + 3);
#line 934
    X3 += *((kw + 3) + 4);
#line 934
    X4 += *((kw + 3) + 5);
#line 934
    X5 += *((kw + 3) + 6) + *((kw + 0) + 1);
#line 934
    X6 += *((kw + 3) + 7) + *((kw + 0) + 2);
#line 934
    X7 += (*((kw + 3) + 8) + 9ULL) + 1ULL;
#line 937
    X0 += X1;
#line 937
    X1 = (X1 << 46) | (X1 >> 18);
#line 937
    X1 ^= X0;
#line 937
    X2 += X3;
#line 937
    X3 = (X3 << 36) | (X3 >> 28);
#line 937
    X3 ^= X2;
#line 937
    X4 += X5;
#line 937
    X5 = (X5 << 19) | (X5 >> 45);
#line 937
    X5 ^= X4;
#line 937
    X6 += X7;
#line 937
    X7 = (X7 << 37) | (X7 >> 27);
#line 937
    X7 ^= X6;
#line 937
    X2 += X1;
#line 937
    X1 = (X1 << 33) | (X1 >> 31);
#line 937
    X1 ^= X2;
#line 937
    X4 += X7;
#line 937
    X7 = (X7 << 27) | (X7 >> 37);
#line 937
    X7 ^= X4;
#line 937
    X6 += X5;
#line 937
    X5 = (X5 << 14) | (X5 >> 50);
#line 937
    X5 ^= X6;
#line 937
    X0 += X3;
#line 937
    X3 = (X3 << 42) | (X3 >> 22);
#line 937
    X3 ^= X0;
#line 937
    X4 += X1;
#line 937
    X1 = (X1 << 17) | (X1 >> 47);
#line 937
    X1 ^= X4;
#line 937
    X6 += X3;
#line 937
    X3 = (X3 << 49) | (X3 >> 15);
#line 937
    X3 ^= X6;
#line 937
    X0 += X5;
#line 937
    X5 = (X5 << 36) | (X5 >> 28);
#line 937
    X5 ^= X0;
#line 937
    X2 += X7;
#line 937
    X7 = (X7 << 39) | (X7 >> 25);
#line 937
    X7 ^= X2;
#line 937
    X6 += X1;
#line 937
    X1 = (X1 << 44) | (X1 >> 20);
#line 937
    X1 ^= X6;
#line 937
    X0 += X7;
#line 937
    X7 = (X7 << 9) | (X7 >> 55);
#line 937
    X7 ^= X0;
#line 937
    X2 += X5;
#line 937
    X5 = (X5 << 54) | (X5 >> 10);
#line 937
    X5 ^= X2;
#line 937
    X4 += X3;
#line 937
    X3 = (X3 << 56) | (X3 >> 8);
#line 937
    X3 ^= X4;
#line 937
    X0 += *((kw + 3) + 2);
#line 937
    X1 += *((kw + 3) + 3);
#line 937
    X2 += *((kw + 3) + 4);
#line 937
    X3 += *((kw + 3) + 5);
#line 937
    X4 += *((kw + 3) + 6);
#line 937
    X5 += *((kw + 3) + 7) + *((kw + 0) + 2);
#line 937
    X6 += *((kw + 3) + 8) + *((kw + 0) + 0);
#line 937
    X7 += (*((kw + 3) + 0) + 10ULL) + 1ULL;
#line 937
    X0 += X1;
#line 937
    X1 = (X1 << 39) | (X1 >> 25);
#line 937
    X1 ^= X0;
#line 937
    X2 += X3;
#line 937
    X3 = (X3 << 30) | (X3 >> 34);
#line 937
    X3 ^= X2;
#line 937
    X4 += X5;
#line 937
    X5 = (X5 << 34) | (X5 >> 30);
#line 937
    X5 ^= X4;
#line 937
    X6 += X7;
#line 937
    X7 = (X7 << 24) | (X7 >> 40);
#line 937
    X7 ^= X6;
#line 937
    X2 += X1;
#line 937
    X1 = (X1 << 13) | (X1 >> 51);
#line 937
    X1 ^= X2;
#line 937
    X4 += X7;
#line 937
    X7 = (X7 << 50) | (X7 >> 14);
#line 937
    X7 ^= X4;
#line 937
    X6 += X5;
#line 937
    X5 = (X5 << 10) | (X5 >> 54);
#line 937
    X5 ^= X6;
#line 937
    X0 += X3;
#line 937
    X3 = (X3 << 17) | (X3 >> 47);
#line 937
    X3 ^= X0;
#line 937
    X4 += X1;
#line 937
    X1 = (X1 << 25) | (X1 >> 39);
#line 937
    X1 ^= X4;
#line 937
    X6 += X3;
#line 937
    X3 = (X3 << 29) | (X3 >> 35);
#line 937
    X3 ^= X6;
#line 937
    X0 += X5;
#line 937
    X5 = (X5 << 39) | (X5 >> 25);
#line 937
    X5 ^= X0;
#line 937
    X2 += X7;
#line 937
    X7 = (X7 << 43) | (X7 >> 21);
#line 937
    X7 ^= X2;
#line 937
    X6 += X1;
#line 937
    X1 = (X1 << 8) | (X1 >> 56);
#line 937
    X1 ^= X6;
#line 937
    X0 += X7;
#line 937
    X7 = (X7 << 35) | (X7 >> 29);
#line 937
    X7 ^= X0;
#line 937
    X2 += X5;
#line 937
    X5 = (X5 << 56) | (X5 >> 8);
#line 937
    X5 ^= X2;
#line 937
    X4 += X3;
#line 937
    X3 = (X3 << 22) | (X3 >> 42);
#line 937
    X3 ^= X4;
#line 937
    X0 += *((kw + 3) + 3);
#line 937
    X1 += *((kw + 3) + 4);
#line 937
    X2 += *((kw + 3) + 5);
#line 937
    X3 += *((kw + 3) + 6);
#line 937
    X4 += *((kw + 3) + 7);
#line 937
    X5 += *((kw + 3) + 8) + *((kw + 0) + 0);
#line 937
    X6 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 937
    X7 += (*((kw + 3) + 1) + 11ULL) + 1ULL;
#line 940
    X0 += X1;
#line 940
    X1 = (X1 << 46) | (X1 >> 18);
#line 940
    X1 ^= X0;
#line 940
    X2 += X3;
#line 940
    X3 = (X3 << 36) | (X3 >> 28);
#line 940
    X3 ^= X2;
#line 940
    X4 += X5;
#line 940
    X5 = (X5 << 19) | (X5 >> 45);
#line 940
    X5 ^= X4;
#line 940
    X6 += X7;
#line 940
    X7 = (X7 << 37) | (X7 >> 27);
#line 940
    X7 ^= X6;
#line 940
    X2 += X1;
#line 940
    X1 = (X1 << 33) | (X1 >> 31);
#line 940
    X1 ^= X2;
#line 940
    X4 += X7;
#line 940
    X7 = (X7 << 27) | (X7 >> 37);
#line 940
    X7 ^= X4;
#line 940
    X6 += X5;
#line 940
    X5 = (X5 << 14) | (X5 >> 50);
#line 940
    X5 ^= X6;
#line 940
    X0 += X3;
#line 940
    X3 = (X3 << 42) | (X3 >> 22);
#line 940
    X3 ^= X0;
#line 940
    X4 += X1;
#line 940
    X1 = (X1 << 17) | (X1 >> 47);
#line 940
    X1 ^= X4;
#line 940
    X6 += X3;
#line 940
    X3 = (X3 << 49) | (X3 >> 15);
#line 940
    X3 ^= X6;
#line 940
    X0 += X5;
#line 940
    X5 = (X5 << 36) | (X5 >> 28);
#line 940
    X5 ^= X0;
#line 940
    X2 += X7;
#line 940
    X7 = (X7 << 39) | (X7 >> 25);
#line 940
    X7 ^= X2;
#line 940
    X6 += X1;
#line 940
    X1 = (X1 << 44) | (X1 >> 20);
#line 940
    X1 ^= X6;
#line 940
    X0 += X7;
#line 940
    X7 = (X7 << 9) | (X7 >> 55);
#line 940
    X7 ^= X0;
#line 940
    X2 += X5;
#line 940
    X5 = (X5 << 54) | (X5 >> 10);
#line 940
    X5 ^= X2;
#line 940
    X4 += X3;
#line 940
    X3 = (X3 << 56) | (X3 >> 8);
#line 940
    X3 ^= X4;
#line 940
    X0 += *((kw + 3) + 4);
#line 940
    X1 += *((kw + 3) + 5);
#line 940
    X2 += *((kw + 3) + 6);
#line 940
    X3 += *((kw + 3) + 7);
#line 940
    X4 += *((kw + 3) + 8);
#line 940
    X5 += *((kw + 3) + 0) + *((kw + 0) + 1);
#line 940
    X6 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 940
    X7 += (*((kw + 3) + 2) + 12ULL) + 1ULL;
#line 940
    X0 += X1;
#line 940
    X1 = (X1 << 39) | (X1 >> 25);
#line 940
    X1 ^= X0;
#line 940
    X2 += X3;
#line 940
    X3 = (X3 << 30) | (X3 >> 34);
#line 940
    X3 ^= X2;
#line 940
    X4 += X5;
#line 940
    X5 = (X5 << 34) | (X5 >> 30);
#line 940
    X5 ^= X4;
#line 940
    X6 += X7;
#line 940
    X7 = (X7 << 24) | (X7 >> 40);
#line 940
    X7 ^= X6;
#line 940
    X2 += X1;
#line 940
    X1 = (X1 << 13) | (X1 >> 51);
#line 940
    X1 ^= X2;
#line 940
    X4 += X7;
#line 940
    X7 = (X7 << 50) | (X7 >> 14);
#line 940
    X7 ^= X4;
#line 940
    X6 += X5;
#line 940
    X5 = (X5 << 10) | (X5 >> 54);
#line 940
    X5 ^= X6;
#line 940
    X0 += X3;
#line 940
    X3 = (X3 << 17) | (X3 >> 47);
#line 940
    X3 ^= X0;
#line 940
    X4 += X1;
#line 940
    X1 = (X1 << 25) | (X1 >> 39);
#line 940
    X1 ^= X4;
#line 940
    X6 += X3;
#line 940
    X3 = (X3 << 29) | (X3 >> 35);
#line 940
    X3 ^= X6;
#line 940
    X0 += X5;
#line 940
    X5 = (X5 << 39) | (X5 >> 25);
#line 940
    X5 ^= X0;
#line 940
    X2 += X7;
#line 940
    X7 = (X7 << 43) | (X7 >> 21);
#line 940
    X7 ^= X2;
#line 940
    X6 += X1;
#line 940
    X1 = (X1 << 8) | (X1 >> 56);
#line 940
    X1 ^= X6;
#line 940
    X0 += X7;
#line 940
    X7 = (X7 << 35) | (X7 >> 29);
#line 940
    X7 ^= X0;
#line 940
    X2 += X5;
#line 940
    X5 = (X5 << 56) | (X5 >> 8);
#line 940
    X5 ^= X2;
#line 940
    X4 += X3;
#line 940
    X3 = (X3 << 22) | (X3 >> 42);
#line 940
    X3 ^= X4;
#line 940
    X0 += *((kw + 3) + 5);
#line 940
    X1 += *((kw + 3) + 6);
#line 940
    X2 += *((kw + 3) + 7);
#line 940
    X3 += *((kw + 3) + 8);
#line 940
    X4 += *((kw + 3) + 0);
#line 940
    X5 += *((kw + 3) + 1) + *((kw + 0) + 2);
#line 940
    X6 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 940
    X7 += (*((kw + 3) + 3) + 13ULL) + 1ULL;
#line 943
    X0 += X1;
#line 943
    X1 = (X1 << 46) | (X1 >> 18);
#line 943
    X1 ^= X0;
#line 943
    X2 += X3;
#line 943
    X3 = (X3 << 36) | (X3 >> 28);
#line 943
    X3 ^= X2;
#line 943
    X4 += X5;
#line 943
    X5 = (X5 << 19) | (X5 >> 45);
#line 943
    X5 ^= X4;
#line 943
    X6 += X7;
#line 943
    X7 = (X7 << 37) | (X7 >> 27);
#line 943
    X7 ^= X6;
#line 943
    X2 += X1;
#line 943
    X1 = (X1 << 33) | (X1 >> 31);
#line 943
    X1 ^= X2;
#line 943
    X4 += X7;
#line 943
    X7 = (X7 << 27) | (X7 >> 37);
#line 943
    X7 ^= X4;
#line 943
    X6 += X5;
#line 943
    X5 = (X5 << 14) | (X5 >> 50);
#line 943
    X5 ^= X6;
#line 943
    X0 += X3;
#line 943
    X3 = (X3 << 42) | (X3 >> 22);
#line 943
    X3 ^= X0;
#line 943
    X4 += X1;
#line 943
    X1 = (X1 << 17) | (X1 >> 47);
#line 943
    X1 ^= X4;
#line 943
    X6 += X3;
#line 943
    X3 = (X3 << 49) | (X3 >> 15);
#line 943
    X3 ^= X6;
#line 943
    X0 += X5;
#line 943
    X5 = (X5 << 36) | (X5 >> 28);
#line 943
    X5 ^= X0;
#line 943
    X2 += X7;
#line 943
    X7 = (X7 << 39) | (X7 >> 25);
#line 943
    X7 ^= X2;
#line 943
    X6 += X1;
#line 943
    X1 = (X1 << 44) | (X1 >> 20);
#line 943
    X1 ^= X6;
#line 943
    X0 += X7;
#line 943
    X7 = (X7 << 9) | (X7 >> 55);
#line 943
    X7 ^= X0;
#line 943
    X2 += X5;
#line 943
    X5 = (X5 << 54) | (X5 >> 10);
#line 943
    X5 ^= X2;
#line 943
    X4 += X3;
#line 943
    X3 = (X3 << 56) | (X3 >> 8);
#line 943
    X3 ^= X4;
#line 943
    X0 += *((kw + 3) + 6);
#line 943
    X1 += *((kw + 3) + 7);
#line 943
    X2 += *((kw + 3) + 8);
#line 943
    X3 += *((kw + 3) + 0);
#line 943
    X4 += *((kw + 3) + 1);
#line 943
    X5 += *((kw + 3) + 2) + *((kw + 0) + 0);
#line 943
    X6 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 943
    X7 += (*((kw + 3) + 4) + 14ULL) + 1ULL;
#line 943
    X0 += X1;
#line 943
    X1 = (X1 << 39) | (X1 >> 25);
#line 943
    X1 ^= X0;
#line 943
    X2 += X3;
#line 943
    X3 = (X3 << 30) | (X3 >> 34);
#line 943
    X3 ^= X2;
#line 943
    X4 += X5;
#line 943
    X5 = (X5 << 34) | (X5 >> 30);
#line 943
    X5 ^= X4;
#line 943
    X6 += X7;
#line 943
    X7 = (X7 << 24) | (X7 >> 40);
#line 943
    X7 ^= X6;
#line 943
    X2 += X1;
#line 943
    X1 = (X1 << 13) | (X1 >> 51);
#line 943
    X1 ^= X2;
#line 943
    X4 += X7;
#line 943
    X7 = (X7 << 50) | (X7 >> 14);
#line 943
    X7 ^= X4;
#line 943
    X6 += X5;
#line 943
    X5 = (X5 << 10) | (X5 >> 54);
#line 943
    X5 ^= X6;
#line 943
    X0 += X3;
#line 943
    X3 = (X3 << 17) | (X3 >> 47);
#line 943
    X3 ^= X0;
#line 943
    X4 += X1;
#line 943
    X1 = (X1 << 25) | (X1 >> 39);
#line 943
    X1 ^= X4;
#line 943
    X6 += X3;
#line 943
    X3 = (X3 << 29) | (X3 >> 35);
#line 943
    X3 ^= X6;
#line 943
    X0 += X5;
#line 943
    X5 = (X5 << 39) | (X5 >> 25);
#line 943
    X5 ^= X0;
#line 943
    X2 += X7;
#line 943
    X7 = (X7 << 43) | (X7 >> 21);
#line 943
    X7 ^= X2;
#line 943
    X6 += X1;
#line 943
    X1 = (X1 << 8) | (X1 >> 56);
#line 943
    X1 ^= X6;
#line 943
    X0 += X7;
#line 943
    X7 = (X7 << 35) | (X7 >> 29);
#line 943
    X7 ^= X0;
#line 943
    X2 += X5;
#line 943
    X5 = (X5 << 56) | (X5 >> 8);
#line 943
    X5 ^= X2;
#line 943
    X4 += X3;
#line 943
    X3 = (X3 << 22) | (X3 >> 42);
#line 943
    X3 ^= X4;
#line 943
    X0 += *((kw + 3) + 7);
#line 943
    X1 += *((kw + 3) + 8);
#line 943
    X2 += *((kw + 3) + 0);
#line 943
    X3 += *((kw + 3) + 1);
#line 943
    X4 += *((kw + 3) + 2);
#line 943
    X5 += *((kw + 3) + 3) + *((kw + 0) + 1);
#line 943
    X6 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 943
    X7 += (*((kw + 3) + 5) + 15ULL) + 1ULL;
#line 946
    X0 += X1;
#line 946
    X1 = (X1 << 46) | (X1 >> 18);
#line 946
    X1 ^= X0;
#line 946
    X2 += X3;
#line 946
    X3 = (X3 << 36) | (X3 >> 28);
#line 946
    X3 ^= X2;
#line 946
    X4 += X5;
#line 946
    X5 = (X5 << 19) | (X5 >> 45);
#line 946
    X5 ^= X4;
#line 946
    X6 += X7;
#line 946
    X7 = (X7 << 37) | (X7 >> 27);
#line 946
    X7 ^= X6;
#line 946
    X2 += X1;
#line 946
    X1 = (X1 << 33) | (X1 >> 31);
#line 946
    X1 ^= X2;
#line 946
    X4 += X7;
#line 946
    X7 = (X7 << 27) | (X7 >> 37);
#line 946
    X7 ^= X4;
#line 946
    X6 += X5;
#line 946
    X5 = (X5 << 14) | (X5 >> 50);
#line 946
    X5 ^= X6;
#line 946
    X0 += X3;
#line 946
    X3 = (X3 << 42) | (X3 >> 22);
#line 946
    X3 ^= X0;
#line 946
    X4 += X1;
#line 946
    X1 = (X1 << 17) | (X1 >> 47);
#line 946
    X1 ^= X4;
#line 946
    X6 += X3;
#line 946
    X3 = (X3 << 49) | (X3 >> 15);
#line 946
    X3 ^= X6;
#line 946
    X0 += X5;
#line 946
    X5 = (X5 << 36) | (X5 >> 28);
#line 946
    X5 ^= X0;
#line 946
    X2 += X7;
#line 946
    X7 = (X7 << 39) | (X7 >> 25);
#line 946
    X7 ^= X2;
#line 946
    X6 += X1;
#line 946
    X1 = (X1 << 44) | (X1 >> 20);
#line 946
    X1 ^= X6;
#line 946
    X0 += X7;
#line 946
    X7 = (X7 << 9) | (X7 >> 55);
#line 946
    X7 ^= X0;
#line 946
    X2 += X5;
#line 946
    X5 = (X5 << 54) | (X5 >> 10);
#line 946
    X5 ^= X2;
#line 946
    X4 += X3;
#line 946
    X3 = (X3 << 56) | (X3 >> 8);
#line 946
    X3 ^= X4;
#line 946
    X0 += *((kw + 3) + 8);
#line 946
    X1 += *((kw + 3) + 0);
#line 946
    X2 += *((kw + 3) + 1);
#line 946
    X3 += *((kw + 3) + 2);
#line 946
    X4 += *((kw + 3) + 3);
#line 946
    X5 += *((kw + 3) + 4) + *((kw + 0) + 2);
#line 946
    X6 += *((kw + 3) + 5) + *((kw + 0) + 0);
#line 946
    X7 += (*((kw + 3) + 6) + 16ULL) + 1ULL;
#line 946
    X0 += X1;
#line 946
    X1 = (X1 << 39) | (X1 >> 25);
#line 946
    X1 ^= X0;
#line 946
    X2 += X3;
#line 946
    X3 = (X3 << 30) | (X3 >> 34);
#line 946
    X3 ^= X2;
#line 946
    X4 += X5;
#line 946
    X5 = (X5 << 34) | (X5 >> 30);
#line 946
    X5 ^= X4;
#line 946
    X6 += X7;
#line 946
    X7 = (X7 << 24) | (X7 >> 40);
#line 946
    X7 ^= X6;
#line 946
    X2 += X1;
#line 946
    X1 = (X1 << 13) | (X1 >> 51);
#line 946
    X1 ^= X2;
#line 946
    X4 += X7;
#line 946
    X7 = (X7 << 50) | (X7 >> 14);
#line 946
    X7 ^= X4;
#line 946
    X6 += X5;
#line 946
    X5 = (X5 << 10) | (X5 >> 54);
#line 946
    X5 ^= X6;
#line 946
    X0 += X3;
#line 946
    X3 = (X3 << 17) | (X3 >> 47);
#line 946
    X3 ^= X0;
#line 946
    X4 += X1;
#line 946
    X1 = (X1 << 25) | (X1 >> 39);
#line 946
    X1 ^= X4;
#line 946
    X6 += X3;
#line 946
    X3 = (X3 << 29) | (X3 >> 35);
#line 946
    X3 ^= X6;
#line 946
    X0 += X5;
#line 946
    X5 = (X5 << 39) | (X5 >> 25);
#line 946
    X5 ^= X0;
#line 946
    X2 += X7;
#line 946
    X7 = (X7 << 43) | (X7 >> 21);
#line 946
    X7 ^= X2;
#line 946
    X6 += X1;
#line 946
    X1 = (X1 << 8) | (X1 >> 56);
#line 946
    X1 ^= X6;
#line 946
    X0 += X7;
#line 946
    X7 = (X7 << 35) | (X7 >> 29);
#line 946
    X7 ^= X0;
#line 946
    X2 += X5;
#line 946
    X5 = (X5 << 56) | (X5 >> 8);
#line 946
    X5 ^= X2;
#line 946
    X4 += X3;
#line 946
    X3 = (X3 << 22) | (X3 >> 42);
#line 946
    X3 ^= X4;
#line 946
    X0 += *((kw + 3) + 0);
#line 946
    X1 += *((kw + 3) + 1);
#line 946
    X2 += *((kw + 3) + 2);
#line 946
    X3 += *((kw + 3) + 3);
#line 946
    X4 += *((kw + 3) + 4);
#line 946
    X5 += *((kw + 3) + 5) + *((kw + 0) + 0);
#line 946
    X6 += *((kw + 3) + 6) + *((kw + 0) + 1);
#line 946
    X7 += (*((kw + 3) + 7) + 17ULL) + 1ULL;
#line 972
    ctx->X[0] = X0 ^ w[0];
#line 973
    ctx->X[1] = X1 ^ w[1];
#line 974
    ctx->X[2] = X2 ^ w[2];
#line 975
    ctx->X[3] = X3 ^ w[3];
#line 976
    ctx->X[4] = X4 ^ w[4];
#line 977
    ctx->X[5] = X5 ^ w[5];
#line 978
    ctx->X[6] = X6 ^ w[6];
#line 979
    ctx->X[7] = X7 ^ w[7];
#line 982
    *((kw + 0) + 1) &= ~ (1ULL << 62);
#line 819
    blkCnt --;
#line 819
    if (! blkCnt) {
#line 819
      break;
    }
  }
#line 984
  ctx->h.T[0] = *((kw + 0) + 0);
#line 985
  ctx->h.T[1] = *((kw + 0) + 1);
#line 986
  return;
}
}
#line 999 "skein.c"
static void Skein1024_Process_Block(Skein1024_Ctxt_t *ctx , u08b_t const   *blkPtr ,
                                    size_t blkCnt , size_t byteCntAdd ) 
{ 
  size_t r ;
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
#line 1050
  *((kw + 0) + 0) = ctx->h.T[0];
#line 1051
  *((kw + 0) + 1) = ctx->h.T[1];
#line 1052
  while (1) {
#line 1055
    *((kw + 0) + 0) += (u64b_t )byteCntAdd;
#line 1058
    *((kw + 3) + 0) = ctx->X[0];
#line 1059
    *((kw + 3) + 1) = ctx->X[1];
#line 1060
    *((kw + 3) + 2) = ctx->X[2];
#line 1061
    *((kw + 3) + 3) = ctx->X[3];
#line 1062
    *((kw + 3) + 4) = ctx->X[4];
#line 1063
    *((kw + 3) + 5) = ctx->X[5];
#line 1064
    *((kw + 3) + 6) = ctx->X[6];
#line 1065
    *((kw + 3) + 7) = ctx->X[7];
#line 1066
    *((kw + 3) + 8) = ctx->X[8];
#line 1067
    *((kw + 3) + 9) = ctx->X[9];
#line 1068
    *((kw + 3) + 10) = ctx->X[10];
#line 1069
    *((kw + 3) + 11) = ctx->X[11];
#line 1070
    *((kw + 3) + 12) = ctx->X[12];
#line 1071
    *((kw + 3) + 13) = ctx->X[13];
#line 1072
    *((kw + 3) + 14) = ctx->X[14];
#line 1073
    *((kw + 3) + 15) = ctx->X[15];
#line 1074
    *((kw + 3) + 16) = (((((((((((((((*((kw + 3) + 0) ^ *((kw + 3) + 1)) ^ *((kw + 3) + 2)) ^ *((kw + 3) + 3)) ^ *((kw + 3) + 4)) ^ *((kw + 3) + 5)) ^ *((kw + 3) + 6)) ^ *((kw + 3) + 7)) ^ *((kw + 3) + 8)) ^ *((kw + 3) + 9)) ^ *((kw + 3) + 10)) ^ *((kw + 3) + 11)) ^ *((kw + 3) + 12)) ^ *((kw + 3) + 13)) ^ *((kw + 3) + 14)) ^ *((kw + 3) + 15)) ^ (2851871266ULL + (466688986ULL << 32));
#line 1078
    *((kw + 0) + 2) = *((kw + 0) + 0) ^ *((kw + 0) + 1);
#line 1080
    Skein_Get64_LSB_First(w, blkPtr, (size_t )16);
#line 1085
    X00 = w[0] + *((kw + 3) + 0);
#line 1086
    X01 = w[1] + *((kw + 3) + 1);
#line 1087
    X02 = w[2] + *((kw + 3) + 2);
#line 1088
    X03 = w[3] + *((kw + 3) + 3);
#line 1089
    X04 = w[4] + *((kw + 3) + 4);
#line 1090
    X05 = w[5] + *((kw + 3) + 5);
#line 1091
    X06 = w[6] + *((kw + 3) + 6);
#line 1092
    X07 = w[7] + *((kw + 3) + 7);
#line 1093
    X08 = w[8] + *((kw + 3) + 8);
#line 1094
    X09 = w[9] + *((kw + 3) + 9);
#line 1095
    X10 = w[10] + *((kw + 3) + 10);
#line 1096
    X11 = w[11] + *((kw + 3) + 11);
#line 1097
    X12 = w[12] + *((kw + 3) + 12);
#line 1098
    X13 = (w[13] + *((kw + 3) + 13)) + *((kw + 0) + 0);
#line 1099
    X14 = (w[14] + *((kw + 3) + 14)) + *((kw + 0) + 1);
#line 1100
    X15 = w[15] + *((kw + 3) + 15);
#line 1183
    r = (size_t )1;
#line 1183
    while (r <= 20UL) {
#line 1206
      X00 += X01;
#line 1206
      X01 = (X01 << 24) | (X01 >> 40);
#line 1206
      X01 ^= X00;
#line 1206
      X02 += X03;
#line 1206
      X03 = (X03 << 13) | (X03 >> 51);
#line 1206
      X03 ^= X02;
#line 1206
      X04 += X05;
#line 1206
      X05 = (X05 << 8) | (X05 >> 56);
#line 1206
      X05 ^= X04;
#line 1206
      X06 += X07;
#line 1206
      X07 = (X07 << 47) | (X07 >> 17);
#line 1206
      X07 ^= X06;
#line 1206
      X08 += X09;
#line 1206
      X09 = (X09 << 8) | (X09 >> 56);
#line 1206
      X09 ^= X08;
#line 1206
      X10 += X11;
#line 1206
      X11 = (X11 << 17) | (X11 >> 47);
#line 1206
      X11 ^= X10;
#line 1206
      X12 += X13;
#line 1206
      X13 = (X13 << 22) | (X13 >> 42);
#line 1206
      X13 ^= X12;
#line 1206
      X14 += X15;
#line 1206
      X15 = (X15 << 37) | (X15 >> 27);
#line 1206
      X15 ^= X14;
#line 1206
      X00 += X09;
#line 1206
      X09 = (X09 << 38) | (X09 >> 26);
#line 1206
      X09 ^= X00;
#line 1206
      X02 += X13;
#line 1206
      X13 = (X13 << 19) | (X13 >> 45);
#line 1206
      X13 ^= X02;
#line 1206
      X06 += X11;
#line 1206
      X11 = (X11 << 10) | (X11 >> 54);
#line 1206
      X11 ^= X06;
#line 1206
      X04 += X15;
#line 1206
      X15 = (X15 << 55) | (X15 >> 9);
#line 1206
      X15 ^= X04;
#line 1206
      X10 += X07;
#line 1206
      X07 = (X07 << 49) | (X07 >> 15);
#line 1206
      X07 ^= X10;
#line 1206
      X12 += X03;
#line 1206
      X03 = (X03 << 18) | (X03 >> 46);
#line 1206
      X03 ^= X12;
#line 1206
      X14 += X05;
#line 1206
      X05 = (X05 << 23) | (X05 >> 41);
#line 1206
      X05 ^= X14;
#line 1206
      X08 += X01;
#line 1206
      X01 = (X01 << 52) | (X01 >> 12);
#line 1206
      X01 ^= X08;
#line 1206
      X00 += X07;
#line 1206
      X07 = (X07 << 33) | (X07 >> 31);
#line 1206
      X07 ^= X00;
#line 1206
      X02 += X05;
#line 1206
      X05 = (X05 << 4) | (X05 >> 60);
#line 1206
      X05 ^= X02;
#line 1206
      X04 += X03;
#line 1206
      X03 = (X03 << 51) | (X03 >> 13);
#line 1206
      X03 ^= X04;
#line 1206
      X06 += X01;
#line 1206
      X01 = (X01 << 13) | (X01 >> 51);
#line 1206
      X01 ^= X06;
#line 1206
      X12 += X15;
#line 1206
      X15 = (X15 << 34) | (X15 >> 30);
#line 1206
      X15 ^= X12;
#line 1206
      X14 += X13;
#line 1206
      X13 = (X13 << 41) | (X13 >> 23);
#line 1206
      X13 ^= X14;
#line 1206
      X08 += X11;
#line 1206
      X11 = (X11 << 59) | (X11 >> 5);
#line 1206
      X11 ^= X08;
#line 1206
      X10 += X09;
#line 1206
      X09 = (X09 << 17) | (X09 >> 47);
#line 1206
      X09 ^= X10;
#line 1206
      X00 += X15;
#line 1206
      X15 = (X15 << 5) | (X15 >> 59);
#line 1206
      X15 ^= X00;
#line 1206
      X02 += X11;
#line 1206
      X11 = (X11 << 20) | (X11 >> 44);
#line 1206
      X11 ^= X02;
#line 1206
      X06 += X13;
#line 1206
      X13 = (X13 << 48) | (X13 >> 16);
#line 1206
      X13 ^= X06;
#line 1206
      X04 += X09;
#line 1206
      X09 = (X09 << 41) | (X09 >> 23);
#line 1206
      X09 ^= X04;
#line 1206
      X14 += X01;
#line 1206
      X01 = (X01 << 47) | (X01 >> 17);
#line 1206
      X01 ^= X14;
#line 1206
      X08 += X05;
#line 1206
      X05 = (X05 << 28) | (X05 >> 36);
#line 1206
      X05 ^= X08;
#line 1206
      X10 += X03;
#line 1206
      X03 = (X03 << 16) | (X03 >> 48);
#line 1206
      X03 ^= X10;
#line 1206
      X12 += X07;
#line 1206
      X07 = (X07 << 25) | (X07 >> 39);
#line 1206
      X07 ^= X12;
#line 1206
      X00 += *((kw + 3) + r);
#line 1206
      X01 += *((kw + 3) + (r + 1UL));
#line 1206
      X02 += *((kw + 3) + (r + 2UL));
#line 1206
      X03 += *((kw + 3) + (r + 3UL));
#line 1206
      X04 += *((kw + 3) + (r + 4UL));
#line 1206
      X05 += *((kw + 3) + (r + 5UL));
#line 1206
      X06 += *((kw + 3) + (r + 6UL));
#line 1206
      X07 += *((kw + 3) + (r + 7UL));
#line 1206
      X08 += *((kw + 3) + (r + 8UL));
#line 1206
      X09 += *((kw + 3) + (r + 9UL));
#line 1206
      X10 += *((kw + 3) + (r + 10UL));
#line 1206
      X11 += *((kw + 3) + (r + 11UL));
#line 1206
      X12 += *((kw + 3) + (r + 12UL));
#line 1206
      X13 += *((kw + 3) + (r + 13UL)) + *((kw + 0) + r);
#line 1206
      X14 += *((kw + 3) + (r + 14UL)) + *((kw + 0) + (r + 1UL));
#line 1206
      X15 += *((kw + 3) + (r + 15UL)) + (u64b_t )r;
#line 1206
      *((kw + 3) + (r + 16UL)) = *((kw + 3) + (r - 1UL));
#line 1206
      *((kw + 0) + (r + 2UL)) = *((kw + 0) + (r - 1UL));
#line 1206
      X00 += X01;
#line 1206
      X01 = (X01 << 41) | (X01 >> 23);
#line 1206
      X01 ^= X00;
#line 1206
      X02 += X03;
#line 1206
      X03 = (X03 << 9) | (X03 >> 55);
#line 1206
      X03 ^= X02;
#line 1206
      X04 += X05;
#line 1206
      X05 = (X05 << 37) | (X05 >> 27);
#line 1206
      X05 ^= X04;
#line 1206
      X06 += X07;
#line 1206
      X07 = (X07 << 31) | (X07 >> 33);
#line 1206
      X07 ^= X06;
#line 1206
      X08 += X09;
#line 1206
      X09 = (X09 << 12) | (X09 >> 52);
#line 1206
      X09 ^= X08;
#line 1206
      X10 += X11;
#line 1206
      X11 = (X11 << 47) | (X11 >> 17);
#line 1206
      X11 ^= X10;
#line 1206
      X12 += X13;
#line 1206
      X13 = (X13 << 44) | (X13 >> 20);
#line 1206
      X13 ^= X12;
#line 1206
      X14 += X15;
#line 1206
      X15 = (X15 << 30) | (X15 >> 34);
#line 1206
      X15 ^= X14;
#line 1206
      X00 += X09;
#line 1206
      X09 = (X09 << 16) | (X09 >> 48);
#line 1206
      X09 ^= X00;
#line 1206
      X02 += X13;
#line 1206
      X13 = (X13 << 34) | (X13 >> 30);
#line 1206
      X13 ^= X02;
#line 1206
      X06 += X11;
#line 1206
      X11 = (X11 << 56) | (X11 >> 8);
#line 1206
      X11 ^= X06;
#line 1206
      X04 += X15;
#line 1206
      X15 = (X15 << 51) | (X15 >> 13);
#line 1206
      X15 ^= X04;
#line 1206
      X10 += X07;
#line 1206
      X07 = (X07 << 4) | (X07 >> 60);
#line 1206
      X07 ^= X10;
#line 1206
      X12 += X03;
#line 1206
      X03 = (X03 << 53) | (X03 >> 11);
#line 1206
      X03 ^= X12;
#line 1206
      X14 += X05;
#line 1206
      X05 = (X05 << 42) | (X05 >> 22);
#line 1206
      X05 ^= X14;
#line 1206
      X08 += X01;
#line 1206
      X01 = (X01 << 41) | (X01 >> 23);
#line 1206
      X01 ^= X08;
#line 1206
      X00 += X07;
#line 1206
      X07 = (X07 << 31) | (X07 >> 33);
#line 1206
      X07 ^= X00;
#line 1206
      X02 += X05;
#line 1206
      X05 = (X05 << 44) | (X05 >> 20);
#line 1206
      X05 ^= X02;
#line 1206
      X04 += X03;
#line 1206
      X03 = (X03 << 47) | (X03 >> 17);
#line 1206
      X03 ^= X04;
#line 1206
      X06 += X01;
#line 1206
      X01 = (X01 << 46) | (X01 >> 18);
#line 1206
      X01 ^= X06;
#line 1206
      X12 += X15;
#line 1206
      X15 = (X15 << 19) | (X15 >> 45);
#line 1206
      X15 ^= X12;
#line 1206
      X14 += X13;
#line 1206
      X13 = (X13 << 42) | (X13 >> 22);
#line 1206
      X13 ^= X14;
#line 1206
      X08 += X11;
#line 1206
      X11 = (X11 << 44) | (X11 >> 20);
#line 1206
      X11 ^= X08;
#line 1206
      X10 += X09;
#line 1206
      X09 = (X09 << 25) | (X09 >> 39);
#line 1206
      X09 ^= X10;
#line 1206
      X00 += X15;
#line 1206
      X15 = (X15 << 9) | (X15 >> 55);
#line 1206
      X15 ^= X00;
#line 1206
      X02 += X11;
#line 1206
      X11 = (X11 << 48) | (X11 >> 16);
#line 1206
      X11 ^= X02;
#line 1206
      X06 += X13;
#line 1206
      X13 = (X13 << 35) | (X13 >> 29);
#line 1206
      X13 ^= X06;
#line 1206
      X04 += X09;
#line 1206
      X09 = (X09 << 52) | (X09 >> 12);
#line 1206
      X09 ^= X04;
#line 1206
      X14 += X01;
#line 1206
      X01 = (X01 << 23) | (X01 >> 41);
#line 1206
      X01 ^= X14;
#line 1206
      X08 += X05;
#line 1206
      X05 = (X05 << 31) | (X05 >> 33);
#line 1206
      X05 ^= X08;
#line 1206
      X10 += X03;
#line 1206
      X03 = (X03 << 37) | (X03 >> 27);
#line 1206
      X03 ^= X10;
#line 1206
      X12 += X07;
#line 1206
      X07 = (X07 << 20) | (X07 >> 44);
#line 1206
      X07 ^= X12;
#line 1206
      X00 += *((kw + 3) + (r + 1UL));
#line 1206
      X01 += *((kw + 3) + ((r + 1UL) + 1UL));
#line 1206
      X02 += *((kw + 3) + ((r + 1UL) + 2UL));
#line 1206
      X03 += *((kw + 3) + ((r + 1UL) + 3UL));
#line 1206
      X04 += *((kw + 3) + ((r + 1UL) + 4UL));
#line 1206
      X05 += *((kw + 3) + ((r + 1UL) + 5UL));
#line 1206
      X06 += *((kw + 3) + ((r + 1UL) + 6UL));
#line 1206
      X07 += *((kw + 3) + ((r + 1UL) + 7UL));
#line 1206
      X08 += *((kw + 3) + ((r + 1UL) + 8UL));
#line 1206
      X09 += *((kw + 3) + ((r + 1UL) + 9UL));
#line 1206
      X10 += *((kw + 3) + ((r + 1UL) + 10UL));
#line 1206
      X11 += *((kw + 3) + ((r + 1UL) + 11UL));
#line 1206
      X12 += *((kw + 3) + ((r + 1UL) + 12UL));
#line 1206
      X13 += *((kw + 3) + ((r + 1UL) + 13UL)) + *((kw + 0) + (r + 1UL));
#line 1206
      X14 += *((kw + 3) + ((r + 1UL) + 14UL)) + *((kw + 0) + ((r + 1UL) + 1UL));
#line 1206
      X15 += (*((kw + 3) + ((r + 1UL) + 15UL)) + (u64b_t )r) + 1ULL;
#line 1206
      *((kw + 3) + ((r + 1UL) + 16UL)) = *((kw + 3) + ((r + 1UL) - 1UL));
#line 1206
      *((kw + 0) + ((r + 1UL) + 2UL)) = *((kw + 0) + ((r + 1UL) - 1UL));
#line 1183
      r += 2UL;
    }
#line 1260
    ctx->X[0] = X00 ^ w[0];
#line 1261
    ctx->X[1] = X01 ^ w[1];
#line 1262
    ctx->X[2] = X02 ^ w[2];
#line 1263
    ctx->X[3] = X03 ^ w[3];
#line 1264
    ctx->X[4] = X04 ^ w[4];
#line 1265
    ctx->X[5] = X05 ^ w[5];
#line 1266
    ctx->X[6] = X06 ^ w[6];
#line 1267
    ctx->X[7] = X07 ^ w[7];
#line 1268
    ctx->X[8] = X08 ^ w[8];
#line 1269
    ctx->X[9] = X09 ^ w[9];
#line 1270
    ctx->X[10] = X10 ^ w[10];
#line 1271
    ctx->X[11] = X11 ^ w[11];
#line 1272
    ctx->X[12] = X12 ^ w[12];
#line 1273
    ctx->X[13] = X13 ^ w[13];
#line 1274
    ctx->X[14] = X14 ^ w[14];
#line 1275
    ctx->X[15] = X15 ^ w[15];
#line 1279
    *((kw + 0) + 1) &= ~ (1ULL << 62);
#line 1280
    blkPtr += 128;
#line 1052
    blkCnt --;
#line 1052
    if (! blkCnt) {
#line 1052
      break;
    }
  }
#line 1282
  ctx->h.T[0] = *((kw + 0) + 0);
#line 1283
  ctx->h.T[1] = *((kw + 0) + 1);
#line 1284
  return;
}
}
#line 1405 "skein.c"
static int Skein_256_Update(Skein_256_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) 
{ 
  size_t n ;

  {
#line 1413
  if (msgByteCnt + ctx->h.bCnt > 32UL) {
#line 1414
    if (ctx->h.bCnt) {
#line 1416
      n = 32UL - ctx->h.bCnt;
#line 1417
      if (n) {
#line 1419
        memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
               n);
#line 1420
        msgByteCnt -= n;
#line 1421
        msg += n;
#line 1422
        ctx->h.bCnt += n;
      }
#line 1425
      Skein_256_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, (size_t )32);
#line 1426
      ctx->h.bCnt = (size_t )0;
    }
#line 1430
    if (msgByteCnt > 32UL) {
#line 1431
      n = (msgByteCnt - 1UL) / 32UL;
#line 1433
      Skein_256_Process_Block(ctx, msg, n, (size_t )32);
#line 1434
      msgByteCnt -= n * 32UL;
#line 1435
      msg += n * 32UL;
    }
  }
#line 1441
  if (msgByteCnt) {
#line 1443
    memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
           msgByteCnt);
#line 1444
    ctx->h.bCnt += msgByteCnt;
  }
#line 1447
  return (0);
}
}
#line 1452 "skein.c"
static int Skein_256_Final(Skein_256_Ctxt_t *ctx , u08b_t *hashVal ) 
{ 
  size_t i ;
  size_t n ;
  size_t byteCnt ;
  u64b_t X[4] ;

  {
#line 1458
  ctx->h.T[1] |= 1ULL << 63;
#line 1459
  if (ctx->h.bCnt < 32UL) {
#line 1460
    memset((void *)(& ctx->b[ctx->h.bCnt]), 0, 32UL - ctx->h.bCnt);
  }
#line 1462
  Skein_256_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, ctx->h.bCnt);
#line 1466
  byteCnt = (ctx->h.hashBitLen + 7UL) >> 3;
#line 1469
  memset((void *)(ctx->b), 0, sizeof(ctx->b));
#line 1471
  memcpy((void * __restrict  )(X), (void const   * __restrict  )(ctx->X), sizeof(X));
#line 1472
  i = (size_t )0;
#line 1472
  while (i < byteCnt) {
#line 1473
    *((u64b_t *)(ctx->b) + 0) = (((((((((u64b_t )i & 255ULL) << 56) | ((((u64b_t )i >> 8) & 255ULL) << 48)) | ((((u64b_t )i >> 16) & 255ULL) << 40)) | ((((u64b_t )i >> 24) & 255ULL) << 32)) | ((((u64b_t )i >> 32) & 255ULL) << 24)) | ((((u64b_t )i >> 40) & 255ULL) << 16)) | ((((u64b_t )i >> 48) & 255ULL) << 8)) | (((u64b_t )i >> 56) & 255ULL);
#line 1475
    ctx->h.T[0] = (u64b_t )0;
#line 1475
    ctx->h.T[1] = (1ULL << 62) | ((63ULL << 56) | (1ULL << 63));
#line 1475
    ctx->h.bCnt = (size_t )0;
#line 1476
    Skein_256_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, sizeof(u64b_t ));
#line 1478
    n = byteCnt - i;
#line 1479
    if (n >= 32UL) {
#line 1480
      n = (size_t )32;
    }
#line 1481
    Skein_Put64_LSB_First(hashVal + i, (u64b_t const   *)(ctx->X), n);
#line 1484
    memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(X), sizeof(X));
#line 1472
    i += 32UL;
  }
#line 1487
  return (0);
}
}
#line 1502 "skein.c"
static int Skein_512_Init(Skein_512_Ctxt_t *ctx , size_t hashBitLen ) 
{ 
  union __anonunion_cfg_200192499 cfg ;

  {
#line 1509
  ctx->h.hashBitLen = hashBitLen;
#line 1511
  switch (hashBitLen) {
  case 512UL: 
#line 1514
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN_512_IV_512),
         sizeof(ctx->X));
#line 1515
  break;
  case 384UL: 
#line 1517
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN_512_IV_384),
         sizeof(ctx->X));
#line 1518
  break;
  case 256UL: 
#line 1520
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN_512_IV_256),
         sizeof(ctx->X));
#line 1521
  break;
  case 224UL: 
#line 1523
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN_512_IV_224),
         sizeof(ctx->X));
#line 1524
  break;
  default: 
#line 1529
  ctx->h.T[0] = (u64b_t )0;
#line 1529
  ctx->h.T[1] = (1ULL << 62) | ((4ULL << 56) | (1ULL << 63));
#line 1529
  ctx->h.bCnt = (size_t )0;
#line 1531
  cfg.w[0] = (((((((((859916371ULL + (1ULL << 32)) & 255ULL) << 56) | ((((859916371ULL + (1ULL << 32)) >> 8) & 255ULL) << 48)) | ((((859916371ULL + (1ULL << 32)) >> 16) & 255ULL) << 40)) | ((((859916371ULL + (1ULL << 32)) >> 24) & 255ULL) << 32)) | ((((859916371ULL + (1ULL << 32)) >> 32) & 255ULL) << 24)) | ((((859916371ULL + (1ULL << 32)) >> 40) & 255ULL) << 16)) | ((((859916371ULL + (1ULL << 32)) >> 48) & 255ULL) << 8)) | (((859916371ULL + (1ULL << 32)) >> 56) & 255ULL);
#line 1532
  cfg.w[1] = (((((((((u64b_t )hashBitLen & 255ULL) << 56) | ((((u64b_t )hashBitLen >> 8) & 255ULL) << 48)) | ((((u64b_t )hashBitLen >> 16) & 255ULL) << 40)) | ((((u64b_t )hashBitLen >> 24) & 255ULL) << 32)) | ((((u64b_t )hashBitLen >> 32) & 255ULL) << 24)) | ((((u64b_t )hashBitLen >> 40) & 255ULL) << 16)) | ((((u64b_t )hashBitLen >> 48) & 255ULL) << 8)) | (((u64b_t )hashBitLen >> 56) & 255ULL);
#line 1533
  cfg.w[2] = 0ULL;
#line 1534
  memset((void *)(& cfg.w[3]), 0, sizeof(cfg) - 3UL * sizeof(cfg.w[0]));
#line 1538
  memset((void *)(ctx->X), 0, sizeof(ctx->X));
#line 1539
  Skein_512_Process_Block(ctx, (u08b_t const   *)(cfg.b), (size_t )1, (size_t )32);
#line 1540
  break;
  }
#line 1545
  ctx->h.T[0] = (u64b_t )0;
#line 1545
  ctx->h.T[1] = (1ULL << 62) | (48ULL << 56);
#line 1545
  ctx->h.bCnt = (size_t )0;
#line 1547
  return (0);
}
}
#line 1613 "skein.c"
static int Skein_512_Update(Skein_512_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) 
{ 
  size_t n ;

  {
#line 1621
  if (msgByteCnt + ctx->h.bCnt > 64UL) {
#line 1622
    if (ctx->h.bCnt) {
#line 1624
      n = 64UL - ctx->h.bCnt;
#line 1625
      if (n) {
#line 1627
        memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
               n);
#line 1628
        msgByteCnt -= n;
#line 1629
        msg += n;
#line 1630
        ctx->h.bCnt += n;
      }
#line 1633
      Skein_512_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, (size_t )64);
#line 1634
      ctx->h.bCnt = (size_t )0;
    }
#line 1638
    if (msgByteCnt > 64UL) {
#line 1639
      n = (msgByteCnt - 1UL) / 64UL;
#line 1641
      Skein_512_Process_Block(ctx, msg, n, (size_t )64);
#line 1642
      msgByteCnt -= n * 64UL;
#line 1643
      msg += n * 64UL;
    }
  }
#line 1649
  if (msgByteCnt) {
#line 1651
    memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
           msgByteCnt);
#line 1652
    ctx->h.bCnt += msgByteCnt;
  }
#line 1655
  return (0);
}
}
#line 1660 "skein.c"
static int Skein_512_Final(Skein_512_Ctxt_t *ctx , u08b_t *hashVal ) 
{ 
  size_t i ;
  size_t n ;
  size_t byteCnt ;
  u64b_t X[8] ;

  {
#line 1666
  ctx->h.T[1] |= 1ULL << 63;
#line 1667
  if (ctx->h.bCnt < 64UL) {
#line 1668
    memset((void *)(& ctx->b[ctx->h.bCnt]), 0, 64UL - ctx->h.bCnt);
  }
#line 1670
  Skein_512_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, ctx->h.bCnt);
#line 1674
  byteCnt = (ctx->h.hashBitLen + 7UL) >> 3;
#line 1677
  memset((void *)(ctx->b), 0, sizeof(ctx->b));
#line 1679
  memcpy((void * __restrict  )(X), (void const   * __restrict  )(ctx->X), sizeof(X));
#line 1680
  i = (size_t )0;
#line 1680
  while (i * 64UL < byteCnt) {
#line 1681
    *((u64b_t *)(ctx->b) + 0) = (((((((((u64b_t )i & 255ULL) << 56) | ((((u64b_t )i >> 8) & 255ULL) << 48)) | ((((u64b_t )i >> 16) & 255ULL) << 40)) | ((((u64b_t )i >> 24) & 255ULL) << 32)) | ((((u64b_t )i >> 32) & 255ULL) << 24)) | ((((u64b_t )i >> 40) & 255ULL) << 16)) | ((((u64b_t )i >> 48) & 255ULL) << 8)) | (((u64b_t )i >> 56) & 255ULL);
#line 1683
    ctx->h.T[0] = (u64b_t )0;
#line 1683
    ctx->h.T[1] = (1ULL << 62) | ((63ULL << 56) | (1ULL << 63));
#line 1683
    ctx->h.bCnt = (size_t )0;
#line 1684
    Skein_512_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, sizeof(u64b_t ));
#line 1686
    n = byteCnt - i * 64UL;
#line 1688
    if (n >= 64UL) {
#line 1689
      n = (size_t )64;
    }
#line 1690
    Skein_Put64_LSB_First(hashVal + i * 64UL, (u64b_t const   *)(ctx->X), n);
#line 1693
    memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(X), sizeof(X));
#line 1680
    i ++;
  }
#line 1696
  return (0);
}
}
#line 1710 "skein.c"
static int Skein1024_Init(Skein1024_Ctxt_t *ctx , size_t hashBitLen ) 
{ 
  union __anonunion_cfg_200192500 cfg ;

  {
#line 1717
  ctx->h.hashBitLen = hashBitLen;
#line 1719
  switch (hashBitLen) {
  case 512UL: 
#line 1722
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN1024_IV_512),
         sizeof(ctx->X));
#line 1723
  break;
  case 384UL: 
#line 1725
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN1024_IV_384),
         sizeof(ctx->X));
#line 1726
  break;
  case 1024UL: 
#line 1728
  memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(SKEIN1024_IV_1024),
         sizeof(ctx->X));
#line 1729
  break;
  default: 
#line 1734
  ctx->h.T[0] = (u64b_t )0;
#line 1734
  ctx->h.T[1] = (1ULL << 62) | ((4ULL << 56) | (1ULL << 63));
#line 1734
  ctx->h.bCnt = (size_t )0;
#line 1736
  cfg.w[0] = (((((((((859916371ULL + (1ULL << 32)) & 255ULL) << 56) | ((((859916371ULL + (1ULL << 32)) >> 8) & 255ULL) << 48)) | ((((859916371ULL + (1ULL << 32)) >> 16) & 255ULL) << 40)) | ((((859916371ULL + (1ULL << 32)) >> 24) & 255ULL) << 32)) | ((((859916371ULL + (1ULL << 32)) >> 32) & 255ULL) << 24)) | ((((859916371ULL + (1ULL << 32)) >> 40) & 255ULL) << 16)) | ((((859916371ULL + (1ULL << 32)) >> 48) & 255ULL) << 8)) | (((859916371ULL + (1ULL << 32)) >> 56) & 255ULL);
#line 1737
  cfg.w[1] = (((((((((u64b_t )hashBitLen & 255ULL) << 56) | ((((u64b_t )hashBitLen >> 8) & 255ULL) << 48)) | ((((u64b_t )hashBitLen >> 16) & 255ULL) << 40)) | ((((u64b_t )hashBitLen >> 24) & 255ULL) << 32)) | ((((u64b_t )hashBitLen >> 32) & 255ULL) << 24)) | ((((u64b_t )hashBitLen >> 40) & 255ULL) << 16)) | ((((u64b_t )hashBitLen >> 48) & 255ULL) << 8)) | (((u64b_t )hashBitLen >> 56) & 255ULL);
#line 1738
  cfg.w[2] = 0ULL;
#line 1739
  memset((void *)(& cfg.w[3]), 0, sizeof(cfg) - 3UL * sizeof(cfg.w[0]));
#line 1743
  memset((void *)(ctx->X), 0, sizeof(ctx->X));
#line 1744
  Skein1024_Process_Block(ctx, (u08b_t const   *)(cfg.b), (size_t )1, (size_t )32);
#line 1745
  break;
  }
#line 1750
  ctx->h.T[0] = (u64b_t )0;
#line 1750
  ctx->h.T[1] = (1ULL << 62) | (48ULL << 56);
#line 1750
  ctx->h.bCnt = (size_t )0;
#line 1752
  return (0);
}
}
#line 1818 "skein.c"
static int Skein1024_Update(Skein1024_Ctxt_t *ctx , u08b_t const   *msg , size_t msgByteCnt ) 
{ 
  size_t n ;

  {
#line 1826
  if (msgByteCnt + ctx->h.bCnt > 128UL) {
#line 1827
    if (ctx->h.bCnt) {
#line 1829
      n = 128UL - ctx->h.bCnt;
#line 1830
      if (n) {
#line 1832
        memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
               n);
#line 1833
        msgByteCnt -= n;
#line 1834
        msg += n;
#line 1835
        ctx->h.bCnt += n;
      }
#line 1838
      Skein1024_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, (size_t )128);
#line 1839
      ctx->h.bCnt = (size_t )0;
    }
#line 1843
    if (msgByteCnt > 128UL) {
#line 1844
      n = (msgByteCnt - 1UL) / 128UL;
#line 1846
      Skein1024_Process_Block(ctx, msg, n, (size_t )128);
#line 1847
      msgByteCnt -= n * 128UL;
#line 1848
      msg += n * 128UL;
    }
  }
#line 1854
  if (msgByteCnt) {
#line 1856
    memcpy((void * __restrict  )(& ctx->b[ctx->h.bCnt]), (void const   * __restrict  )msg,
           msgByteCnt);
#line 1857
    ctx->h.bCnt += msgByteCnt;
  }
#line 1860
  return (0);
}
}
#line 1865 "skein.c"
static int Skein1024_Final(Skein1024_Ctxt_t *ctx , u08b_t *hashVal ) 
{ 
  size_t i ;
  size_t n ;
  size_t byteCnt ;
  u64b_t X[16] ;

  {
#line 1871
  ctx->h.T[1] |= 1ULL << 63;
#line 1872
  if (ctx->h.bCnt < 128UL) {
#line 1873
    memset((void *)(& ctx->b[ctx->h.bCnt]), 0, 128UL - ctx->h.bCnt);
  }
#line 1875
  Skein1024_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, ctx->h.bCnt);
#line 1879
  byteCnt = (ctx->h.hashBitLen + 7UL) >> 3;
#line 1882
  memset((void *)(ctx->b), 0, sizeof(ctx->b));
#line 1884
  memcpy((void * __restrict  )(X), (void const   * __restrict  )(ctx->X), sizeof(X));
#line 1885
  i = (size_t )0;
#line 1885
  while (i * 128UL < byteCnt) {
#line 1886
    *((u64b_t *)(ctx->b) + 0) = (((((((((u64b_t )i & 255ULL) << 56) | ((((u64b_t )i >> 8) & 255ULL) << 48)) | ((((u64b_t )i >> 16) & 255ULL) << 40)) | ((((u64b_t )i >> 24) & 255ULL) << 32)) | ((((u64b_t )i >> 32) & 255ULL) << 24)) | ((((u64b_t )i >> 40) & 255ULL) << 16)) | ((((u64b_t )i >> 48) & 255ULL) << 8)) | (((u64b_t )i >> 56) & 255ULL);
#line 1888
    ctx->h.T[0] = (u64b_t )0;
#line 1888
    ctx->h.T[1] = (1ULL << 62) | ((63ULL << 56) | (1ULL << 63));
#line 1888
    ctx->h.bCnt = (size_t )0;
#line 1889
    Skein1024_Process_Block(ctx, (u08b_t const   *)(ctx->b), (size_t )1, sizeof(u64b_t ));
#line 1891
    n = byteCnt - i * 128UL;
#line 1893
    if (n >= 128UL) {
#line 1894
      n = (size_t )128;
    }
#line 1895
    Skein_Put64_LSB_First(hashVal + i * 128UL, (u64b_t const   *)(ctx->X), n);
#line 1898
    memcpy((void * __restrict  )(ctx->X), (void const   * __restrict  )(X), sizeof(X));
#line 1885
    i ++;
  }
#line 1901
  return (0);
}
}
#line 2063
static SkeinHashReturn Init___1(hashState___0 *state , int hashbitlen ) ;
#line 2064
static SkeinHashReturn Update___1(hashState___0 *state , SkeinBitSequence const   *data ,
                                  size_t databitlen ) ;
#line 2066
static SkeinHashReturn Final___1(hashState___0 *state , SkeinBitSequence *hashval ) ;
#line 2070 "skein.c"
static SkeinHashReturn Init___1(hashState___0 *state , int hashbitlen ) 
{ 
  int tmp ;
  int tmp___0 ;

  {
#line 2078
  if (hashbitlen <= 512) {
#line 2079
    state->statebits = (uint_t )512;
#line 2080
    tmp = Skein_512_Init(& state->u.ctx_512, (size_t )hashbitlen);
#line 2080
    return ((SkeinHashReturn )tmp);
  } else {
#line 2082
    state->statebits = (uint_t )1024;
#line 2083
    tmp___0 = Skein1024_Init(& state->u.ctx1024, (size_t )hashbitlen);
#line 2083
    return ((SkeinHashReturn )tmp___0);
  }
}
}
#line 2089 "skein.c"
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
#line 2099
  if ((databitlen & 7UL) == 0UL) {
#line 2101
    switch ((state->statebits >> 8) & 3U) {
    case 2U: 
#line 2103
    tmp = Skein_512_Update(& state->u.ctx_512, data, databitlen >> 3);
#line 2103
    return ((SkeinHashReturn )tmp);
    case 1U: 
#line 2105
    tmp___0 = Skein_256_Update(& state->u.ctx_256, data, databitlen >> 3);
#line 2105
    return ((SkeinHashReturn )tmp___0);
    case 0U: 
#line 2107
    tmp___1 = Skein1024_Update(& state->u.ctx1024, data, databitlen >> 3);
#line 2107
    return ((SkeinHashReturn )tmp___1);
    default: 
#line 2109
    return ((SkeinHashReturn )1);
    }
  } else {
#line 2112
    bCnt = (databitlen >> 3) + 1UL;
#line 2116
    mask = (u08b_t )(1U << (7UL - (databitlen & 7UL)));
#line 2117
    b = (u08b_t )(((int const   )*(data + (bCnt - 1UL)) & (int const   )(0 - (int )mask)) | (int const   )mask);
#line 2120
    switch ((state->statebits >> 8) & 3U) {
    case 2U: 
#line 2122
    Skein_512_Update(& state->u.ctx_512, data, bCnt - 1UL);
#line 2124
    Skein_512_Update(& state->u.ctx_512, (u08b_t const   *)(& b), (size_t )1);
#line 2126
    break;
    case 1U: 
#line 2128
    Skein_256_Update(& state->u.ctx_256, data, bCnt - 1UL);
#line 2130
    Skein_256_Update(& state->u.ctx_256, (u08b_t const   *)(& b), (size_t )1);
#line 2132
    break;
    case 0U: 
#line 2134
    Skein1024_Update(& state->u.ctx1024, data, bCnt - 1UL);
#line 2136
    Skein1024_Update(& state->u.ctx1024, (u08b_t const   *)(& b), (size_t )1);
#line 2138
    break;
    default: 
#line 2140
    return ((SkeinHashReturn )1);
    }
#line 2142
    state->u.h.T[1] |= 1ULL << 55;
#line 2144
    return ((SkeinHashReturn )0);
  }
}
}
#line 2150 "skein.c"
static SkeinHashReturn Final___1(hashState___0 *state , SkeinBitSequence *hashval ) 
{ 
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
#line 2153
  switch ((state->statebits >> 8) & 3U) {
  case 2U: 
#line 2155
  tmp = Skein_512_Final(& state->u.ctx_512, hashval);
#line 2155
  return ((SkeinHashReturn )tmp);
  case 1U: 
#line 2157
  tmp___0 = Skein_256_Final(& state->u.ctx_256, hashval);
#line 2157
  return ((SkeinHashReturn )tmp___0);
  case 0U: 
#line 2159
  tmp___1 = Skein1024_Final(& state->u.ctx1024, hashval);
#line 2159
  return ((SkeinHashReturn )tmp___1);
  default: 
#line 2161
  return ((SkeinHashReturn )1);
  }
}
}
#line 2167 "skein.c"
enum __anonenum_SkeinHashReturn_432432649 skein(int hashbitlen , SkeinBitSequence const   *data ,
                                                size_t databitlen , SkeinBitSequence *hashval ) 
{ 
  hashState___0 state ;
  SkeinHashReturn r ;
  SkeinHashReturn tmp ;

  {
#line 2171
  tmp = Init___1(& state, hashbitlen);
#line 2171
  r = tmp;
#line 2172
  if ((unsigned int )r == 0U) {
#line 2173
    r = Update___1(& state, data, databitlen);
#line 2174
    Final___1(& state, hashval);
  }
#line 2176
  return (r);
}
}
