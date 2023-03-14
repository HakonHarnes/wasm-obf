#line 35 "/usr/lib/emsdk/upstream/lib/clang/17/include/stddef.h"
typedef long ptrdiff_t;
#line 46 "/usr/lib/emsdk/upstream/lib/clang/17/include/stddef.h"
typedef unsigned long size_t;
#line 74 "/usr/lib/emsdk/upstream/lib/clang/17/include/stddef.h"
typedef int wchar_t;
#line 19 "/usr/lib/emsdk/upstream/lib/clang/17/include/__stddef_max_align_t.h"
struct __anonstruct_max_align_t_835649992 {
   long long __clang_max_align_nonce1  __attribute__((__aligned__(__alignof__(long long )))) ;
   long double __clang_max_align_nonce2  __attribute__((__aligned__(__alignof__(long double )))) ;
};
#line 19 "/usr/lib/emsdk/upstream/lib/clang/17/include/__stddef_max_align_t.h"
typedef struct __anonstruct_max_align_t_835649992 max_align_t;
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
#line 38 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int wchar_t___0;
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
#line 7 "../asteroids/vector.h"
struct vector2d {
   float x ;
   float y ;
};
#line 6 "../asteroids/asteroids.h"
enum sizes {
    SMALL = 0,
    MEDIUM = 1,
    LARGE = 2
} ;
#line 8 "../asteroids/asteroids.h"
struct asteroid {
   int alive ;
   enum sizes size ;
   float hit_radius ;
   float rotation ;
   struct vector2d location ;
   struct vector2d velocity ;
   struct vector2d obj_vert[10] ;
   struct vector2d world_vert[10] ;
};
#line 14 "/usr/lib/emsdk/upstream/lib/clang/17/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 81 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef long long time_t;
#line 86 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int suseconds_t;
#line 92 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_898357595 {
   int __i[10] ;
   int volatile   __vi[10] ;
   unsigned long __s[10] ;
};
#line 92 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_attr_t_919219569 {
   union __anonunion___u_898357595 __u ;
   char const   *_a_transferredcanvases ;
};
#line 92 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_attr_t_919219569 pthread_attr_t;
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_546072648 {
   int __i[6] ;
   int volatile   __vi[6] ;
   void volatile   *__p[6] ;
};
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_mutex_t_976653634 {
   union __anonunion___u_546072648 __u ;
};
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_mutex_t_976653634 pthread_mutex_t;
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_357071066 {
   int __i[12] ;
   int volatile   __vi[12] ;
   void *__p[12] ;
};
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_cond_t_726266814 {
   union __anonunion___u_357071066 __u ;
};
#line 118 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_cond_t_726266814 pthread_cond_t;
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_656646311 {
   int __i[8] ;
   int volatile   __vi[8] ;
   void *__p[8] ;
};
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_rwlock_t_656646310 {
   union __anonunion___u_656646311 __u ;
};
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_rwlock_t_656646310 pthread_rwlock_t;
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
union __anonunion___u_867429678 {
   int __i[5] ;
   int volatile   __vi[5] ;
   void *__p[5] ;
};
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct __anonstruct_pthread_barrier_t_867429677 {
   union __anonunion___u_867429678 __u ;
};
#line 133 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __anonstruct_pthread_barrier_t_867429677 pthread_barrier_t;
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
#line 287 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef void *timer_t;
#line 292 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int clockid_t;
#line 297 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int clock_t;
#line 318 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef int pid_t;
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
#line 312 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
struct timespec {
   time_t tv_sec ;
   long tv_nsec ;
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
#line 13 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef __builtin_va_list va_list___0;
#line 410
struct __locale_struct ;
#line 410 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/alltypes.h"
typedef struct __locale_struct *locale_t;
#line 14 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/inttypes.h"
struct __anonstruct_imaxdiv_t_882638284 {
   intmax_t quot ;
   intmax_t rem ;
};
#line 14 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/inttypes.h"
typedef struct __anonstruct_imaxdiv_t_882638284 imaxdiv_t;
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
#line 115 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
enum __anonenum_SDL_bool_780193226 {
    SDL_FALSE = 0,
    SDL_TRUE = 1
} ;
#line 115 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef enum __anonenum_SDL_bool_780193226 SDL_bool;
#line 124 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int8_t Sint8;
#line 128 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef uint8_t Uint8;
#line 132 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int16_t Sint16;
#line 136 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef uint16_t Uint16;
#line 140 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int32_t Sint32;
#line 144 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef uint32_t Uint32;
#line 149 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int64_t Sint64;
#line 153 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef uint64_t Uint64;
#line 162 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_uint8[(sizeof(Uint8 ) == 1UL) * 2 - 1];
#line 163 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_sint8[(sizeof(Sint8 ) == 1UL) * 2 - 1];
#line 164 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_uint16[(sizeof(Uint16 ) == 2UL) * 2 - 1];
#line 165 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_sint16[(sizeof(Sint16 ) == 2UL) * 2 - 1];
#line 166 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_uint32[(sizeof(Uint32 ) == 4UL) * 2 - 1];
#line 167 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_sint32[(sizeof(Sint32 ) == 4UL) * 2 - 1];
#line 168 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_uint64[(sizeof(Uint64 ) == 8UL) * 2 - 1];
#line 169 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_sint64[(sizeof(Sint64 ) == 8UL) * 2 - 1];
#line 187
enum __anonenum_SDL_DUMMY_ENUM_229850056 {
    DUMMY_ENUM_VALUE = 0
} ;
#line 187 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef enum __anonenum_SDL_DUMMY_ENUM_229850056 SDL_DUMMY_ENUM;
#line 192 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef int SDL_dummy_enum[(sizeof(SDL_DUMMY_ENUM ) == sizeof(int )) * 2 - 1];
#line 734
struct _SDL_iconv_t ;
#line 734 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
typedef struct _SDL_iconv_t *SDL_iconv_t;
#line 44 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct sigaltstack ;
#line 44 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
typedef struct sigaltstack stack_t;
#line 31 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};
#line 38 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
typedef int greg_t;
#line 38 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
typedef int gregset_t[19];
#line 39 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
struct __anonstruct__st_638665849 {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
#line 39 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
struct _fpstate {
   unsigned long cw ;
   unsigned long sw ;
   unsigned long tag ;
   unsigned long ipoff ;
   unsigned long cssel ;
   unsigned long dataoff ;
   unsigned long datasel ;
   struct __anonstruct__st_638665849 _st[8] ;
   unsigned long status ;
};
#line 39 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
typedef struct _fpstate *fpregset_t;
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
struct sigcontext {
   unsigned short gs ;
   unsigned short __gsh ;
   unsigned short fs ;
   unsigned short __fsh ;
   unsigned short es ;
   unsigned short __esh ;
   unsigned short ds ;
   unsigned short __dsh ;
   unsigned long edi ;
   unsigned long esi ;
   unsigned long ebp ;
   unsigned long esp ;
   unsigned long ebx ;
   unsigned long edx ;
   unsigned long ecx ;
   unsigned long eax ;
   unsigned long trapno ;
   unsigned long err ;
   unsigned long eip ;
   unsigned short cs ;
   unsigned short __csh ;
   unsigned long eflags ;
   unsigned long esp_at_signal ;
   unsigned short ss ;
   unsigned short __ssh ;
   struct _fpstate *fpstate ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
#line 56 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
struct __anonstruct_mcontext_t_311202863 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
#line 56 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
typedef struct __anonstruct_mcontext_t_311202863 mcontext_t;
#line 67 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
struct __ucontext {
   unsigned long uc_flags ;
   struct __ucontext *uc_link ;
   stack_t uc_stack ;
   mcontext_t uc_mcontext ;
   sigset_t uc_sigmask ;
   unsigned long __fpregs_mem[28] ;
};
#line 67 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/bits/signal.h"
typedef struct __ucontext ucontext_t;
#line 94 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___piduid_471658986 {
   pid_t si_pid ;
   uid_t si_uid ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___timer_773697287 {
   int si_timerid ;
   int si_overrun ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
union __anonunion___first_906096932 {
   struct __anonstruct___piduid_471658986 __piduid ;
   struct __anonstruct___timer_773697287 __timer ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___sigchld_989164977 {
   int si_status ;
   clock_t si_utime ;
   clock_t si_stime ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
union __anonunion___second_397282236 {
   union sigval si_value ;
   struct __anonstruct___sigchld_989164977 __sigchld ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___si_common_197685055 {
   union __anonunion___first_906096932 __first ;
   union __anonunion___second_397282236 __second ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___addr_bnd_5259977 {
   void *si_lower ;
   void *si_upper ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
union __anonunion___first_361836570 {
   struct __anonstruct___addr_bnd_5259977 __addr_bnd ;
   unsigned int si_pkey ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___sigfault_449097580 {
   void *si_addr ;
   short si_addr_lsb ;
   union __anonunion___first_361836570 __first ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___sigpoll_872129836 {
   long si_band ;
   int si_fd ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___sigsys_539673668 {
   void *si_call_addr ;
   int si_syscall ;
   unsigned int si_arch ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
union __anonunion___si_fields_141173307 {
   char __pad[(128UL - 2UL * sizeof(int )) - sizeof(long )] ;
   struct __anonstruct___si_common_197685055 __si_common ;
   struct __anonstruct___sigfault_449097580 __sigfault ;
   struct __anonstruct___sigpoll_872129836 __sigpoll ;
   struct __anonstruct___sigsys_539673668 __sigsys ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct_siginfo_t_48430433 {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion___si_fields_141173307 __si_fields ;
};
#line 99 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
typedef struct __anonstruct_siginfo_t_48430433 siginfo_t;
#line 169 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
union __anonunion___sa_handler_872129837 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
#line 169 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct sigaction {
   union __anonunion___sa_handler_872129837 __sa_handler ;
   sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
#line 184 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct __anonstruct___sev_thread_746770901 {
   void (*sigev_notify_function)(union sigval  ) ;
   pthread_attr_t *sigev_notify_attributes ;
};
#line 184 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
union __anonunion___sev_fields_752101520 {
   char __pad[(64UL - 2UL * sizeof(int )) - sizeof(union sigval )] ;
   pid_t sigev_notify_thread_id ;
   struct __anonstruct___sev_thread_746770901 __sev_thread ;
};
#line 184 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
struct sigevent {
   union sigval sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion___sev_fields_752101520 __sev_fields ;
};
#line 266 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
typedef void (*sig_t)(int  );
#line 287 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
typedef int sig_atomic_t;
#line 96 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_assert.h"
enum __anonenum_SDL_assert_state_1070053763 {
    SDL_ASSERTION_RETRY = 0,
    SDL_ASSERTION_BREAK = 1,
    SDL_ASSERTION_ABORT = 2,
    SDL_ASSERTION_IGNORE = 3,
    SDL_ASSERTION_ALWAYS_IGNORE = 4
} ;
#line 96 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_assert.h"
typedef enum __anonenum_SDL_assert_state_1070053763 SDL_assert_state;
#line 105 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_assert.h"
struct SDL_assert_data {
   int always_ignore ;
   unsigned int trigger_count ;
   char const   *condition ;
   char const   *filename ;
   int linenum ;
   char const   *function ;
   struct SDL_assert_data  const  *next ;
};
#line 105 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_assert.h"
typedef struct SDL_assert_data SDL_assert_data;
#line 171 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_assert.h"
typedef SDL_assert_state (*SDL_AssertionHandler)(SDL_assert_data const   *data , void *userdata );
#line 97 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_atomic.h"
typedef int SDL_SpinLock;
#line 188 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_atomic.h"
struct __anonstruct_SDL_atomic_t_1070053764 {
   int value ;
};
#line 188 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_atomic.h"
typedef struct __anonstruct_SDL_atomic_t_1070053764 SDL_atomic_t;
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_error.h"
enum __anonenum_SDL_errorcode_840487938 {
    SDL_ENOMEM = 0,
    SDL_EFREAD = 1,
    SDL_EFWRITE = 2,
    SDL_EFSEEK = 3,
    SDL_UNSUPPORTED = 4,
    SDL_LASTERROR = 5
} ;
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_error.h"
typedef enum __anonenum_SDL_errorcode_840487938 SDL_errorcode;
#line 201 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_endian.h"
union __anonunion_swapper_599864594 {
   float f ;
   Uint32 ui32 ;
};
#line 60 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_mutex.h"
struct SDL_mutex ;
#line 61 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_mutex.h"
typedef struct SDL_mutex SDL_mutex;
#line 101
struct SDL_semaphore ;
#line 102 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_mutex.h"
typedef struct SDL_semaphore SDL_sem;
#line 161
struct SDL_cond ;
#line 162 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_mutex.h"
typedef struct SDL_cond SDL_cond;
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_thread.h"
struct SDL_Thread ;
#line 47 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_thread.h"
typedef struct SDL_Thread SDL_Thread;
#line 50 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_thread.h"
typedef unsigned long SDL_threadID;
#line 56
enum __anonenum_SDL_ThreadPriority_602432781 {
    SDL_THREAD_PRIORITY_LOW = 0,
    SDL_THREAD_PRIORITY_NORMAL = 1,
    SDL_THREAD_PRIORITY_HIGH = 2
} ;
#line 56 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_thread.h"
typedef enum __anonenum_SDL_ThreadPriority_602432781 SDL_ThreadPriority;
#line 65 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_thread.h"
typedef int (*SDL_ThreadFunction)(void *data );
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rwops.h"
struct __anonstruct_stdio_61930941 {
   SDL_bool autoclose ;
   FILE *fp ;
};
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rwops.h"
struct __anonstruct_mem_553591186 {
   Uint8 *base ;
   Uint8 *here ;
   Uint8 *stop ;
};
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rwops.h"
struct __anonstruct_unknown_642786129 {
   void *data1 ;
};
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rwops.h"
union __anonunion_hidden_739382560 {
   struct __anonstruct_stdio_61930941 stdio ;
   struct __anonstruct_mem_553591186 mem ;
   struct __anonstruct_unknown_642786129 unknown ;
};
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rwops.h"
struct SDL_RWops {
   long (*seek)(struct SDL_RWops *context , long offset , int whence ) ;
   size_t (*read)(struct SDL_RWops *context , void *ptr , size_t size , size_t maxnum ) ;
   size_t (*write)(struct SDL_RWops *context , void const   *ptr , size_t size , size_t num ) ;
   int (*close)(struct SDL_RWops *context ) ;
   Uint32 type ;
   union __anonunion_hidden_739382560 hidden ;
};
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rwops.h"
typedef struct SDL_RWops SDL_RWops;
#line 66 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
typedef Uint16 SDL_AudioFormat;
#line 165 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
typedef void (*SDL_AudioCallback)(void *userdata , Uint8 *stream , int len );
#line 171 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
struct SDL_AudioSpec {
   int freq ;
   SDL_AudioFormat format ;
   Uint8 channels ;
   Uint8 silence ;
   Uint16 samples ;
   Uint16 padding ;
   Uint32 size ;
   void (*callback)(void *userdata , Uint8 *stream , int len ) ;
   void *userdata ;
};
#line 171 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
typedef struct SDL_AudioSpec SDL_AudioSpec;
#line 185
struct SDL_AudioCVT ;
#line 186 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
typedef void (*SDL_AudioFilter)(struct SDL_AudioCVT *cvt , SDL_AudioFormat format );
#line 192 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
struct SDL_AudioCVT {
   int needed ;
   SDL_AudioFormat src_format ;
   SDL_AudioFormat dst_format ;
   double rate_incr ;
   Uint8 *buf ;
   int len ;
   int len_cvt ;
   int len_mult ;
   double len_ratio ;
   SDL_AudioFilter filters[10] ;
   int filter_index ;
};
#line 192 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
typedef struct SDL_AudioCVT SDL_AudioCVT;
#line 293 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
typedef Uint32 SDL_AudioDeviceID;
#line 358
enum __anonenum_SDL_AudioStatus_415475965 {
    SDL_AUDIO_STOPPED = 0,
    SDL_AUDIO_PLAYING = 1,
    SDL_AUDIO_PAUSED = 2
} ;
#line 358 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
typedef enum __anonenum_SDL_AudioStatus_415475965 SDL_AudioStatus;
#line 53 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_pixels.h"
enum __anonenum_665040861 {
    SDL_PIXELTYPE_UNKNOWN = 0,
    SDL_PIXELTYPE_INDEX1 = 1,
    SDL_PIXELTYPE_INDEX4 = 2,
    SDL_PIXELTYPE_INDEX8 = 3,
    SDL_PIXELTYPE_PACKED8 = 4,
    SDL_PIXELTYPE_PACKED16 = 5,
    SDL_PIXELTYPE_PACKED32 = 6,
    SDL_PIXELTYPE_ARRAYU8 = 7,
    SDL_PIXELTYPE_ARRAYU16 = 8,
    SDL_PIXELTYPE_ARRAYU32 = 9,
    SDL_PIXELTYPE_ARRAYF16 = 10,
    SDL_PIXELTYPE_ARRAYF32 = 11
} ;
#line 70
enum __anonenum_311483714 {
    SDL_BITMAPORDER_NONE = 0,
    SDL_BITMAPORDER_4321 = 1,
    SDL_BITMAPORDER_1234 = 2
} ;
#line 78
enum __anonenum_873948031 {
    SDL_PACKEDORDER_NONE = 0,
    SDL_PACKEDORDER_XRGB = 1,
    SDL_PACKEDORDER_RGBX = 2,
    SDL_PACKEDORDER_ARGB = 3,
    SDL_PACKEDORDER_RGBA = 4,
    SDL_PACKEDORDER_XBGR = 5,
    SDL_PACKEDORDER_BGRX = 6,
    SDL_PACKEDORDER_ABGR = 7,
    SDL_PACKEDORDER_BGRA = 8
} ;
#line 92
enum __anonenum_233217090 {
    SDL_ARRAYORDER_NONE = 0,
    SDL_ARRAYORDER_RGB = 1,
    SDL_ARRAYORDER_RGBA = 2,
    SDL_ARRAYORDER_ARGB = 3,
    SDL_ARRAYORDER_BGR = 4,
    SDL_ARRAYORDER_BGRA = 5,
    SDL_ARRAYORDER_ABGR = 6
} ;
#line 104
enum __anonenum_1039529339 {
    SDL_PACKEDLAYOUT_NONE = 0,
    SDL_PACKEDLAYOUT_332 = 1,
    SDL_PACKEDLAYOUT_4444 = 2,
    SDL_PACKEDLAYOUT_1555 = 3,
    SDL_PACKEDLAYOUT_5551 = 4,
    SDL_PACKEDLAYOUT_565 = 5,
    SDL_PACKEDLAYOUT_8888 = 6,
    SDL_PACKEDLAYOUT_2101010 = 7,
    SDL_PACKEDLAYOUT_1010102 = 8
} ;
#line 150
enum __anonenum_205146292 {
    SDL_PIXELFORMAT_UNKNOWN = 0,
    SDL_PIXELFORMAT_INDEX1LSB = -2129657600,
    SDL_PIXELFORMAT_INDEX1MSB = -2128609024,
    SDL_PIXELFORMAT_INDEX4LSB = -2112879616,
    SDL_PIXELFORMAT_INDEX4MSB = -2111831040,
    SDL_PIXELFORMAT_INDEX8 = -2097149951,
    SDL_PIXELFORMAT_RGB332 = -2079258623,
    SDL_PIXELFORMAT_RGB444 = -2062414846,
    SDL_PIXELFORMAT_RGB555 = -2062348542,
    SDL_PIXELFORMAT_BGR555 = -2058154238,
    SDL_PIXELFORMAT_ARGB4444 = -2060316670,
    SDL_PIXELFORMAT_RGBA4444 = -2059268094,
    SDL_PIXELFORMAT_ABGR4444 = -2056122366,
    SDL_PIXELFORMAT_BGRA4444 = -2055073790,
    SDL_PIXELFORMAT_ARGB1555 = -2060251134,
    SDL_PIXELFORMAT_RGBA5551 = -2059137022,
    SDL_PIXELFORMAT_ABGR1555 = -2056056830,
    SDL_PIXELFORMAT_BGRA5551 = -2054942718,
    SDL_PIXELFORMAT_RGB565 = -2062217214,
    SDL_PIXELFORMAT_BGR565 = -2058022910,
    SDL_PIXELFORMAT_RGB24 = -2028988413,
    SDL_PIXELFORMAT_BGR24 = -2025842685,
    SDL_PIXELFORMAT_RGB888 = -2045372412,
    SDL_PIXELFORMAT_BGR888 = -2041178108,
    SDL_PIXELFORMAT_ARGB8888 = -2043273212,
    SDL_PIXELFORMAT_RGBA8888 = -2042224636,
    SDL_PIXELFORMAT_ABGR8888 = -2039078908,
    SDL_PIXELFORMAT_BGRA8888 = -2038030332,
    SDL_PIXELFORMAT_ARGB2101010 = -2043207676,
    SDL_PIXELFORMAT_YV12 = 842094169,
    SDL_PIXELFORMAT_IYUV = 1448433993,
    SDL_PIXELFORMAT_YUY2 = 844715353,
    SDL_PIXELFORMAT_UYVY = 1498831189,
    SDL_PIXELFORMAT_YVYU = 1431918169
} ;
#line 249 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_pixels.h"
struct SDL_Color {
   Uint8 r ;
   Uint8 g ;
   Uint8 b ;
   Uint8 unused ;
};
#line 249 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_pixels.h"
typedef struct SDL_Color SDL_Color;
#line 258 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_pixels.h"
struct SDL_Palette {
   int ncolors ;
   SDL_Color *colors ;
   Uint32 version ;
   int refcount ;
};
#line 258 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_pixels.h"
typedef struct SDL_Palette SDL_Palette;
#line 269 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_pixels.h"
struct SDL_PixelFormat {
   Uint32 format ;
   SDL_Palette *palette ;
   Uint8 BitsPerPixel ;
   Uint8 BytesPerPixel ;
   Uint8 padding[2] ;
   Uint32 Rmask ;
   Uint32 Gmask ;
   Uint32 Bmask ;
   Uint32 Amask ;
   Uint8 Rloss ;
   Uint8 Gloss ;
   Uint8 Bloss ;
   Uint8 Aloss ;
   Uint8 Rshift ;
   Uint8 Gshift ;
   Uint8 Bshift ;
   Uint8 Ashift ;
   int refcount ;
   struct SDL_PixelFormat *next ;
};
#line 269 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_pixels.h"
typedef struct SDL_PixelFormat SDL_PixelFormat;
#line 49 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rect.h"
struct __anonstruct_SDL_Point_1070053765 {
   int x ;
   int y ;
};
#line 49 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rect.h"
typedef struct __anonstruct_SDL_Point_1070053765 SDL_Point;
#line 65 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rect.h"
struct SDL_Rect {
   int x ;
   int y ;
   int w ;
   int h ;
};
#line 65 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rect.h"
typedef struct SDL_Rect SDL_Rect;
#line 42 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_blendmode.h"
enum __anonenum_SDL_BlendMode_116682172 {
    SDL_BLENDMODE_NONE = 0,
    SDL_BLENDMODE_BLEND = 1,
    SDL_BLENDMODE_ADD = 2,
    SDL_BLENDMODE_MOD = 4
} ;
#line 42 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_blendmode.h"
typedef enum __anonenum_SDL_BlendMode_116682172 SDL_BlendMode;
#line 72 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_surface.h"
struct SDL_BlitMap ;
#line 72 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_surface.h"
struct SDL_Surface {
   Uint32 flags ;
   SDL_PixelFormat *format ;
   int w ;
   int h ;
   int pitch ;
   void *pixels ;
   void *userdata ;
   int locked ;
   void *lock_data ;
   SDL_Rect clip_rect ;
   struct SDL_BlitMap *map ;
   int refcount ;
};
#line 72 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_surface.h"
typedef struct SDL_Surface SDL_Surface;
#line 100 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_surface.h"
typedef int (*SDL_blit)(struct SDL_Surface *src , SDL_Rect *srcrect , struct SDL_Surface *dst ,
                        SDL_Rect *dstrect );
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_video.h"
struct __anonstruct_SDL_DisplayMode_299185306 {
   Uint32 format ;
   int w ;
   int h ;
   int refresh_rate ;
   void *driverdata ;
};
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_video.h"
typedef struct __anonstruct_SDL_DisplayMode_299185306 SDL_DisplayMode;
#line 90
struct SDL_Window ;
#line 90 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_video.h"
typedef struct SDL_Window SDL_Window;
#line 97
enum __anonenum_SDL_WindowFlags_1065803870 {
    SDL_WINDOW_FULLSCREEN = 1,
    SDL_WINDOW_OPENGL = 2,
    SDL_WINDOW_SHOWN = 4,
    SDL_WINDOW_HIDDEN = 8,
    SDL_WINDOW_BORDERLESS = 16,
    SDL_WINDOW_RESIZABLE = 32,
    SDL_WINDOW_MINIMIZED = 64,
    SDL_WINDOW_MAXIMIZED = 128,
    SDL_WINDOW_INPUT_GRABBED = 256,
    SDL_WINDOW_INPUT_FOCUS = 512,
    SDL_WINDOW_MOUSE_FOCUS = 1024,
    SDL_WINDOW_FOREIGN = 2048
} ;
#line 97 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_video.h"
typedef enum __anonenum_SDL_WindowFlags_1065803870 SDL_WindowFlags;
#line 134
enum __anonenum_SDL_WindowEventID_619750628 {
    SDL_WINDOWEVENT_NONE = 0,
    SDL_WINDOWEVENT_SHOWN = 1,
    SDL_WINDOWEVENT_HIDDEN = 2,
    SDL_WINDOWEVENT_EXPOSED = 3,
    SDL_WINDOWEVENT_MOVED = 4,
    SDL_WINDOWEVENT_RESIZED = 5,
    SDL_WINDOWEVENT_SIZE_CHANGED = 6,
    SDL_WINDOWEVENT_MINIMIZED = 7,
    SDL_WINDOWEVENT_MAXIMIZED = 8,
    SDL_WINDOWEVENT_RESTORED = 9,
    SDL_WINDOWEVENT_ENTER = 10,
    SDL_WINDOWEVENT_LEAVE = 11,
    SDL_WINDOWEVENT_FOCUS_GAINED = 12,
    SDL_WINDOWEVENT_FOCUS_LOST = 13,
    SDL_WINDOWEVENT_CLOSE = 14
} ;
#line 134 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_video.h"
typedef enum __anonenum_SDL_WindowEventID_619750628 SDL_WindowEventID;
#line 160 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_video.h"
typedef void *SDL_GLContext;
#line 165
enum __anonenum_SDL_GLattr_994110948 {
    SDL_GL_RED_SIZE = 0,
    SDL_GL_GREEN_SIZE = 1,
    SDL_GL_BLUE_SIZE = 2,
    SDL_GL_ALPHA_SIZE = 3,
    SDL_GL_BUFFER_SIZE = 4,
    SDL_GL_DOUBLEBUFFER = 5,
    SDL_GL_DEPTH_SIZE = 6,
    SDL_GL_STENCIL_SIZE = 7,
    SDL_GL_ACCUM_RED_SIZE = 8,
    SDL_GL_ACCUM_GREEN_SIZE = 9,
    SDL_GL_ACCUM_BLUE_SIZE = 10,
    SDL_GL_ACCUM_ALPHA_SIZE = 11,
    SDL_GL_STEREO = 12,
    SDL_GL_MULTISAMPLEBUFFERS = 13,
    SDL_GL_MULTISAMPLESAMPLES = 14,
    SDL_GL_ACCELERATED_VISUAL = 15,
    SDL_GL_RETAINED_BACKING = 16,
    SDL_GL_CONTEXT_MAJOR_VERSION = 17,
    SDL_GL_CONTEXT_MINOR_VERSION = 18
} ;
#line 165 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_video.h"
typedef enum __anonenum_SDL_GLattr_994110948 SDL_GLattr;
#line 43 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_scancode.h"
enum __anonenum_SDL_Scancode_605597982 {
    SDL_SCANCODE_UNKNOWN = 0,
    SDL_SCANCODE_A = 4,
    SDL_SCANCODE_B = 5,
    SDL_SCANCODE_C = 6,
    SDL_SCANCODE_D = 7,
    SDL_SCANCODE_E = 8,
    SDL_SCANCODE_F = 9,
    SDL_SCANCODE_G = 10,
    SDL_SCANCODE_H = 11,
    SDL_SCANCODE_I = 12,
    SDL_SCANCODE_J = 13,
    SDL_SCANCODE_K = 14,
    SDL_SCANCODE_L = 15,
    SDL_SCANCODE_M = 16,
    SDL_SCANCODE_N = 17,
    SDL_SCANCODE_O = 18,
    SDL_SCANCODE_P = 19,
    SDL_SCANCODE_Q = 20,
    SDL_SCANCODE_R = 21,
    SDL_SCANCODE_S = 22,
    SDL_SCANCODE_T = 23,
    SDL_SCANCODE_U = 24,
    SDL_SCANCODE_V = 25,
    SDL_SCANCODE_W = 26,
    SDL_SCANCODE_X = 27,
    SDL_SCANCODE_Y = 28,
    SDL_SCANCODE_Z = 29,
    SDL_SCANCODE_1 = 30,
    SDL_SCANCODE_2 = 31,
    SDL_SCANCODE_3 = 32,
    SDL_SCANCODE_4 = 33,
    SDL_SCANCODE_5 = 34,
    SDL_SCANCODE_6 = 35,
    SDL_SCANCODE_7 = 36,
    SDL_SCANCODE_8 = 37,
    SDL_SCANCODE_9 = 38,
    SDL_SCANCODE_0 = 39,
    SDL_SCANCODE_RETURN = 40,
    SDL_SCANCODE_ESCAPE = 41,
    SDL_SCANCODE_BACKSPACE = 42,
    SDL_SCANCODE_TAB = 43,
    SDL_SCANCODE_SPACE = 44,
    SDL_SCANCODE_MINUS = 45,
    SDL_SCANCODE_EQUALS = 46,
    SDL_SCANCODE_LEFTBRACKET = 47,
    SDL_SCANCODE_RIGHTBRACKET = 48,
    SDL_SCANCODE_BACKSLASH = 49,
    SDL_SCANCODE_NONUSHASH = 50,
    SDL_SCANCODE_SEMICOLON = 51,
    SDL_SCANCODE_APOSTROPHE = 52,
    SDL_SCANCODE_GRAVE = 53,
    SDL_SCANCODE_COMMA = 54,
    SDL_SCANCODE_PERIOD = 55,
    SDL_SCANCODE_SLASH = 56,
    SDL_SCANCODE_CAPSLOCK = 57,
    SDL_SCANCODE_F1 = 58,
    SDL_SCANCODE_F2 = 59,
    SDL_SCANCODE_F3 = 60,
    SDL_SCANCODE_F4 = 61,
    SDL_SCANCODE_F5 = 62,
    SDL_SCANCODE_F6 = 63,
    SDL_SCANCODE_F7 = 64,
    SDL_SCANCODE_F8 = 65,
    SDL_SCANCODE_F9 = 66,
    SDL_SCANCODE_F10 = 67,
    SDL_SCANCODE_F11 = 68,
    SDL_SCANCODE_F12 = 69,
    SDL_SCANCODE_PRINTSCREEN = 70,
    SDL_SCANCODE_SCROLLLOCK = 71,
    SDL_SCANCODE_PAUSE = 72,
    SDL_SCANCODE_INSERT = 73,
    SDL_SCANCODE_HOME = 74,
    SDL_SCANCODE_PAGEUP = 75,
    SDL_SCANCODE_DELETE = 76,
    SDL_SCANCODE_END = 77,
    SDL_SCANCODE_PAGEDOWN = 78,
    SDL_SCANCODE_RIGHT = 79,
    SDL_SCANCODE_LEFT = 80,
    SDL_SCANCODE_DOWN = 81,
    SDL_SCANCODE_UP = 82,
    SDL_SCANCODE_NUMLOCKCLEAR = 83,
    SDL_SCANCODE_KP_DIVIDE = 84,
    SDL_SCANCODE_KP_MULTIPLY = 85,
    SDL_SCANCODE_KP_MINUS = 86,
    SDL_SCANCODE_KP_PLUS = 87,
    SDL_SCANCODE_KP_ENTER = 88,
    SDL_SCANCODE_KP_1 = 89,
    SDL_SCANCODE_KP_2 = 90,
    SDL_SCANCODE_KP_3 = 91,
    SDL_SCANCODE_KP_4 = 92,
    SDL_SCANCODE_KP_5 = 93,
    SDL_SCANCODE_KP_6 = 94,
    SDL_SCANCODE_KP_7 = 95,
    SDL_SCANCODE_KP_8 = 96,
    SDL_SCANCODE_KP_9 = 97,
    SDL_SCANCODE_KP_0 = 98,
    SDL_SCANCODE_KP_PERIOD = 99,
    SDL_SCANCODE_NONUSBACKSLASH = 100,
    SDL_SCANCODE_APPLICATION = 101,
    SDL_SCANCODE_POWER = 102,
    SDL_SCANCODE_KP_EQUALS = 103,
    SDL_SCANCODE_F13 = 104,
    SDL_SCANCODE_F14 = 105,
    SDL_SCANCODE_F15 = 106,
    SDL_SCANCODE_F16 = 107,
    SDL_SCANCODE_F17 = 108,
    SDL_SCANCODE_F18 = 109,
    SDL_SCANCODE_F19 = 110,
    SDL_SCANCODE_F20 = 111,
    SDL_SCANCODE_F21 = 112,
    SDL_SCANCODE_F22 = 113,
    SDL_SCANCODE_F23 = 114,
    SDL_SCANCODE_F24 = 115,
    SDL_SCANCODE_EXECUTE = 116,
    SDL_SCANCODE_HELP = 117,
    SDL_SCANCODE_MENU = 118,
    SDL_SCANCODE_SELECT = 119,
    SDL_SCANCODE_STOP = 120,
    SDL_SCANCODE_AGAIN = 121,
    SDL_SCANCODE_UNDO = 122,
    SDL_SCANCODE_CUT = 123,
    SDL_SCANCODE_COPY = 124,
    SDL_SCANCODE_PASTE = 125,
    SDL_SCANCODE_FIND = 126,
    SDL_SCANCODE_MUTE = 127,
    SDL_SCANCODE_VOLUMEUP = 128,
    SDL_SCANCODE_VOLUMEDOWN = 129,
    SDL_SCANCODE_KP_COMMA = 133,
    SDL_SCANCODE_KP_EQUALSAS400 = 134,
    SDL_SCANCODE_INTERNATIONAL1 = 135,
    SDL_SCANCODE_INTERNATIONAL2 = 136,
    SDL_SCANCODE_INTERNATIONAL3 = 137,
    SDL_SCANCODE_INTERNATIONAL4 = 138,
    SDL_SCANCODE_INTERNATIONAL5 = 139,
    SDL_SCANCODE_INTERNATIONAL6 = 140,
    SDL_SCANCODE_INTERNATIONAL7 = 141,
    SDL_SCANCODE_INTERNATIONAL8 = 142,
    SDL_SCANCODE_INTERNATIONAL9 = 143,
    SDL_SCANCODE_LANG1 = 144,
    SDL_SCANCODE_LANG2 = 145,
    SDL_SCANCODE_LANG3 = 146,
    SDL_SCANCODE_LANG4 = 147,
    SDL_SCANCODE_LANG5 = 148,
    SDL_SCANCODE_LANG6 = 149,
    SDL_SCANCODE_LANG7 = 150,
    SDL_SCANCODE_LANG8 = 151,
    SDL_SCANCODE_LANG9 = 152,
    SDL_SCANCODE_ALTERASE = 153,
    SDL_SCANCODE_SYSREQ = 154,
    SDL_SCANCODE_CANCEL = 155,
    SDL_SCANCODE_CLEAR = 156,
    SDL_SCANCODE_PRIOR = 157,
    SDL_SCANCODE_RETURN2 = 158,
    SDL_SCANCODE_SEPARATOR = 159,
    SDL_SCANCODE_OUT = 160,
    SDL_SCANCODE_OPER = 161,
    SDL_SCANCODE_CLEARAGAIN = 162,
    SDL_SCANCODE_CRSEL = 163,
    SDL_SCANCODE_EXSEL = 164,
    SDL_SCANCODE_KP_00 = 176,
    SDL_SCANCODE_KP_000 = 177,
    SDL_SCANCODE_THOUSANDSSEPARATOR = 178,
    SDL_SCANCODE_DECIMALSEPARATOR = 179,
    SDL_SCANCODE_CURRENCYUNIT = 180,
    SDL_SCANCODE_CURRENCYSUBUNIT = 181,
    SDL_SCANCODE_KP_LEFTPAREN = 182,
    SDL_SCANCODE_KP_RIGHTPAREN = 183,
    SDL_SCANCODE_KP_LEFTBRACE = 184,
    SDL_SCANCODE_KP_RIGHTBRACE = 185,
    SDL_SCANCODE_KP_TAB = 186,
    SDL_SCANCODE_KP_BACKSPACE = 187,
    SDL_SCANCODE_KP_A = 188,
    SDL_SCANCODE_KP_B = 189,
    SDL_SCANCODE_KP_C = 190,
    SDL_SCANCODE_KP_D = 191,
    SDL_SCANCODE_KP_E = 192,
    SDL_SCANCODE_KP_F = 193,
    SDL_SCANCODE_KP_XOR = 194,
    SDL_SCANCODE_KP_POWER = 195,
    SDL_SCANCODE_KP_PERCENT = 196,
    SDL_SCANCODE_KP_LESS = 197,
    SDL_SCANCODE_KP_GREATER = 198,
    SDL_SCANCODE_KP_AMPERSAND = 199,
    SDL_SCANCODE_KP_DBLAMPERSAND = 200,
    SDL_SCANCODE_KP_VERTICALBAR = 201,
    SDL_SCANCODE_KP_DBLVERTICALBAR = 202,
    SDL_SCANCODE_KP_COLON = 203,
    SDL_SCANCODE_KP_HASH = 204,
    SDL_SCANCODE_KP_SPACE = 205,
    SDL_SCANCODE_KP_AT = 206,
    SDL_SCANCODE_KP_EXCLAM = 207,
    SDL_SCANCODE_KP_MEMSTORE = 208,
    SDL_SCANCODE_KP_MEMRECALL = 209,
    SDL_SCANCODE_KP_MEMCLEAR = 210,
    SDL_SCANCODE_KP_MEMADD = 211,
    SDL_SCANCODE_KP_MEMSUBTRACT = 212,
    SDL_SCANCODE_KP_MEMMULTIPLY = 213,
    SDL_SCANCODE_KP_MEMDIVIDE = 214,
    SDL_SCANCODE_KP_PLUSMINUS = 215,
    SDL_SCANCODE_KP_CLEAR = 216,
    SDL_SCANCODE_KP_CLEARENTRY = 217,
    SDL_SCANCODE_KP_BINARY = 218,
    SDL_SCANCODE_KP_OCTAL = 219,
    SDL_SCANCODE_KP_DECIMAL = 220,
    SDL_SCANCODE_KP_HEXADECIMAL = 221,
    SDL_SCANCODE_LCTRL = 224,
    SDL_SCANCODE_LSHIFT = 225,
    SDL_SCANCODE_LALT = 226,
    SDL_SCANCODE_LGUI = 227,
    SDL_SCANCODE_RCTRL = 228,
    SDL_SCANCODE_RSHIFT = 229,
    SDL_SCANCODE_RALT = 230,
    SDL_SCANCODE_RGUI = 231,
    SDL_SCANCODE_MODE = 257,
    SDL_SCANCODE_AUDIONEXT = 258,
    SDL_SCANCODE_AUDIOPREV = 259,
    SDL_SCANCODE_AUDIOSTOP = 260,
    SDL_SCANCODE_AUDIOPLAY = 261,
    SDL_SCANCODE_AUDIOMUTE = 262,
    SDL_SCANCODE_MEDIASELECT = 263,
    SDL_SCANCODE_WWW = 264,
    SDL_SCANCODE_MAIL = 265,
    SDL_SCANCODE_CALCULATOR = 266,
    SDL_SCANCODE_COMPUTER = 267,
    SDL_SCANCODE_AC_SEARCH = 268,
    SDL_SCANCODE_AC_HOME = 269,
    SDL_SCANCODE_AC_BACK = 270,
    SDL_SCANCODE_AC_FORWARD = 271,
    SDL_SCANCODE_AC_STOP = 272,
    SDL_SCANCODE_AC_REFRESH = 273,
    SDL_SCANCODE_AC_BOOKMARKS = 274,
    SDL_SCANCODE_BRIGHTNESSDOWN = 275,
    SDL_SCANCODE_BRIGHTNESSUP = 276,
    SDL_SCANCODE_DISPLAYSWITCH = 277,
    SDL_SCANCODE_KBDILLUMTOGGLE = 278,
    SDL_SCANCODE_KBDILLUMDOWN = 279,
    SDL_SCANCODE_KBDILLUMUP = 280,
    SDL_SCANCODE_EJECT = 281,
    SDL_SCANCODE_SLEEP = 282,
    SDL_NUM_SCANCODES = 512
} ;
#line 43 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_scancode.h"
typedef enum __anonenum_SDL_Scancode_605597982 SDL_Scancode;
#line 42 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_keycode.h"
typedef Sint32 SDL_Keycode;
#line 49
enum __anonenum_94526748 {
    SDLK_UNKNOWN = 0,
    SDLK_RETURN = 13,
    SDLK_ESCAPE = 27,
    SDLK_BACKSPACE = 8,
    SDLK_TAB = 9,
    SDLK_SPACE = 32,
    SDLK_EXCLAIM = 33,
    SDLK_QUOTEDBL = 34,
    SDLK_HASH = 35,
    SDLK_PERCENT = 37,
    SDLK_DOLLAR = 36,
    SDLK_AMPERSAND = 38,
    SDLK_QUOTE = 39,
    SDLK_LEFTPAREN = 40,
    SDLK_RIGHTPAREN = 41,
    SDLK_ASTERISK = 42,
    SDLK_PLUS = 43,
    SDLK_COMMA = 44,
    SDLK_MINUS = 45,
    SDLK_PERIOD = 46,
    SDLK_SLASH = 47,
    SDLK_0 = 48,
    SDLK_1 = 49,
    SDLK_2 = 50,
    SDLK_3 = 51,
    SDLK_4 = 52,
    SDLK_5 = 53,
    SDLK_6 = 54,
    SDLK_7 = 55,
    SDLK_8 = 56,
    SDLK_9 = 57,
    SDLK_COLON = 58,
    SDLK_SEMICOLON = 59,
    SDLK_LESS = 60,
    SDLK_EQUALS = 61,
    SDLK_GREATER = 62,
    SDLK_QUESTION = 63,
    SDLK_AT = 64,
    SDLK_LEFTBRACKET = 91,
    SDLK_BACKSLASH = 92,
    SDLK_RIGHTBRACKET = 93,
    SDLK_CARET = 94,
    SDLK_UNDERSCORE = 95,
    SDLK_BACKQUOTE = 96,
    SDLK_a = 97,
    SDLK_b = 98,
    SDLK_c = 99,
    SDLK_d = 100,
    SDLK_e = 101,
    SDLK_f = 102,
    SDLK_g = 103,
    SDLK_h = 104,
    SDLK_i = 105,
    SDLK_j = 106,
    SDLK_k = 107,
    SDLK_l = 108,
    SDLK_m = 109,
    SDLK_n = 110,
    SDLK_o = 111,
    SDLK_p = 112,
    SDLK_q = 113,
    SDLK_r = 114,
    SDLK_s = 115,
    SDLK_t = 116,
    SDLK_u = 117,
    SDLK_v = 118,
    SDLK_w = 119,
    SDLK_x = 120,
    SDLK_y = 121,
    SDLK_z = 122,
    SDLK_CAPSLOCK = 1081,
    SDLK_F1 = 1082,
    SDLK_F2 = 1083,
    SDLK_F3 = 1084,
    SDLK_F4 = 1085,
    SDLK_F5 = 1086,
    SDLK_F6 = 1087,
    SDLK_F7 = 1088,
    SDLK_F8 = 1089,
    SDLK_F9 = 1090,
    SDLK_F10 = 1091,
    SDLK_F11 = 1092,
    SDLK_F12 = 1093,
    SDLK_PRINTSCREEN = 1094,
    SDLK_SCROLLLOCK = 1095,
    SDLK_PAUSE = 1096,
    SDLK_INSERT = 1097,
    SDLK_HOME = 1098,
    SDLK_PAGEUP = 1099,
    SDLK_DELETE = 127,
    SDLK_END = 1101,
    SDLK_PAGEDOWN = 1102,
    SDLK_RIGHT = 1103,
    SDLK_LEFT = 1104,
    SDLK_DOWN = 1105,
    SDLK_UP = 1106,
    SDLK_NUMLOCKCLEAR = 1107,
    SDLK_KP_DIVIDE = 1108,
    SDLK_KP_MULTIPLY = 1109,
    SDLK_KP_MINUS = 1110,
    SDLK_KP_PLUS = 1111,
    SDLK_KP_ENTER = 1112,
    SDLK_KP_1 = 1113,
    SDLK_KP_2 = 1114,
    SDLK_KP_3 = 1115,
    SDLK_KP_4 = 1116,
    SDLK_KP_5 = 1117,
    SDLK_KP_6 = 1118,
    SDLK_KP_7 = 1119,
    SDLK_KP_8 = 1120,
    SDLK_KP_9 = 1121,
    SDLK_KP_0 = 1122,
    SDLK_KP_PERIOD = 1123,
    SDLK_APPLICATION = 1125,
    SDLK_POWER = 1126,
    SDLK_KP_EQUALS = 1127,
    SDLK_F13 = 1128,
    SDLK_F14 = 1129,
    SDLK_F15 = 1130,
    SDLK_F16 = 1131,
    SDLK_F17 = 1132,
    SDLK_F18 = 1133,
    SDLK_F19 = 1134,
    SDLK_F20 = 1135,
    SDLK_F21 = 1136,
    SDLK_F22 = 1137,
    SDLK_F23 = 1138,
    SDLK_F24 = 1139,
    SDLK_EXECUTE = 1140,
    SDLK_HELP = 1141,
    SDLK_MENU = 1142,
    SDLK_SELECT = 1143,
    SDLK_STOP = 1144,
    SDLK_AGAIN = 1145,
    SDLK_UNDO = 1146,
    SDLK_CUT = 1147,
    SDLK_COPY = 1148,
    SDLK_PASTE = 1149,
    SDLK_FIND = 1150,
    SDLK_MUTE = 1151,
    SDLK_VOLUMEUP = 1152,
    SDLK_VOLUMEDOWN = 1153,
    SDLK_KP_COMMA = 1157,
    SDLK_KP_EQUALSAS400 = 1158,
    SDLK_ALTERASE = 1177,
    SDLK_SYSREQ = 1178,
    SDLK_CANCEL = 1179,
    SDLK_CLEAR = 1180,
    SDLK_PRIOR = 1181,
    SDLK_RETURN2 = 1182,
    SDLK_SEPARATOR = 1183,
    SDLK_OUT = 1184,
    SDLK_OPER = 1185,
    SDLK_CLEARAGAIN = 1186,
    SDLK_CRSEL = 1187,
    SDLK_EXSEL = 1188,
    SDLK_KP_00 = 1200,
    SDLK_KP_000 = 1201,
    SDLK_THOUSANDSSEPARATOR = 1202,
    SDLK_DECIMALSEPARATOR = 1203,
    SDLK_CURRENCYUNIT = 1204,
    SDLK_CURRENCYSUBUNIT = 1205,
    SDLK_KP_LEFTPAREN = 1206,
    SDLK_KP_RIGHTPAREN = 1207,
    SDLK_KP_LEFTBRACE = 1208,
    SDLK_KP_RIGHTBRACE = 1209,
    SDLK_KP_TAB = 1210,
    SDLK_KP_BACKSPACE = 1211,
    SDLK_KP_A = 1212,
    SDLK_KP_B = 1213,
    SDLK_KP_C = 1214,
    SDLK_KP_D = 1215,
    SDLK_KP_E = 1216,
    SDLK_KP_F = 1217,
    SDLK_KP_XOR = 1218,
    SDLK_KP_POWER = 1219,
    SDLK_KP_PERCENT = 1220,
    SDLK_KP_LESS = 1221,
    SDLK_KP_GREATER = 1222,
    SDLK_KP_AMPERSAND = 1223,
    SDLK_KP_DBLAMPERSAND = 1224,
    SDLK_KP_VERTICALBAR = 1225,
    SDLK_KP_DBLVERTICALBAR = 1226,
    SDLK_KP_COLON = 1227,
    SDLK_KP_HASH = 1228,
    SDLK_KP_SPACE = 1229,
    SDLK_KP_AT = 1230,
    SDLK_KP_EXCLAM = 1231,
    SDLK_KP_MEMSTORE = 1232,
    SDLK_KP_MEMRECALL = 1233,
    SDLK_KP_MEMCLEAR = 1234,
    SDLK_KP_MEMADD = 1235,
    SDLK_KP_MEMSUBTRACT = 1236,
    SDLK_KP_MEMMULTIPLY = 1237,
    SDLK_KP_MEMDIVIDE = 1238,
    SDLK_KP_PLUSMINUS = 1239,
    SDLK_KP_CLEAR = 1240,
    SDLK_KP_CLEARENTRY = 1241,
    SDLK_KP_BINARY = 1242,
    SDLK_KP_OCTAL = 1243,
    SDLK_KP_DECIMAL = 1244,
    SDLK_KP_HEXADECIMAL = 1245,
    SDLK_LCTRL = 1248,
    SDLK_LSHIFT = 1249,
    SDLK_LALT = 1250,
    SDLK_LGUI = 1251,
    SDLK_RCTRL = 1252,
    SDLK_RSHIFT = 1253,
    SDLK_RALT = 1254,
    SDLK_RGUI = 1255,
    SDLK_MODE = 1281,
    SDLK_AUDIONEXT = 1282,
    SDLK_AUDIOPREV = 1283,
    SDLK_AUDIOSTOP = 1284,
    SDLK_AUDIOPLAY = 1285,
    SDLK_AUDIOMUTE = 1286,
    SDLK_MEDIASELECT = 1287,
    SDLK_WWW = 1288,
    SDLK_MAIL = 1289,
    SDLK_CALCULATOR = 1290,
    SDLK_COMPUTER = 1291,
    SDLK_AC_SEARCH = 1292,
    SDLK_AC_HOME = 1293,
    SDLK_AC_BACK = 1294,
    SDLK_AC_FORWARD = 1295,
    SDLK_AC_STOP = 1296,
    SDLK_AC_REFRESH = 1297,
    SDLK_AC_BOOKMARKS = 1298,
    SDLK_BRIGHTNESSDOWN = 1299,
    SDLK_BRIGHTNESSUP = 1300,
    SDLK_DISPLAYSWITCH = 1301,
    SDLK_KBDILLUMTOGGLE = 1302,
    SDLK_KBDILLUMDOWN = 1303,
    SDLK_KBDILLUMUP = 1304,
    SDLK_EJECT = 1305,
    SDLK_SLEEP = 1306,
    SDLK_LAST = 1536
} ;
#line 320
enum __anonenum_SDL_Keymod_474209642 {
    KMOD_NONE = 0,
    KMOD_LSHIFT = 1,
    KMOD_RSHIFT = 2,
    KMOD_LCTRL = 64,
    KMOD_RCTRL = 128,
    KMOD_LALT = 256,
    KMOD_RALT = 512,
    KMOD_LGUI = 1024,
    KMOD_RGUI = 2048,
    KMOD_NUM = 4096,
    KMOD_CAPS = 8192,
    KMOD_MODE = 16384,
    KMOD_RESERVED = 32768
} ;
#line 320 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_keycode.h"
typedef enum __anonenum_SDL_Keymod_474209642 SDL_Keymod;
#line 47 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_keyboard.h"
struct SDL_Keysym {
   SDL_Scancode scancode ;
   SDL_Keycode sym ;
   Uint16 mod ;
   Uint32 unicode ;
};
#line 47 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_keyboard.h"
typedef struct SDL_Keysym SDL_Keysym;
#line 59 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_mouse.h"
struct SDL_Cursor ;
#line 59 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_mouse.h"
typedef struct SDL_Cursor SDL_Cursor;
#line 51 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_joystick.h"
struct _SDL_Joystick ;
#line 52 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_joystick.h"
typedef struct _SDL_Joystick SDL_Joystick;
#line 47 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_touch.h"
typedef Sint64 SDL_TouchID;
#line 48 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_touch.h"
typedef Sint64 SDL_FingerID;
#line 50 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_touch.h"
struct SDL_Finger {
   SDL_FingerID id ;
   float x ;
   float y ;
   float pressure ;
};
#line 50 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_touch.h"
typedef struct SDL_Finger SDL_Finger;
#line 46 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_gesture.h"
typedef Sint64 SDL_GestureID;
#line 59 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
enum __anonenum_SDL_EventType_410331439 {
    SDL_NOEVENT = 0,
    SDL_FIRSTEVENT = 0,
    SDL_QUIT = 256,
    SDL_WINDOWEVENT = 512,
    SDL_SYSWMEVENT = 513,
    SDL_KEYDOWN = 768,
    SDL_KEYUP = 769,
    SDL_TEXTEDITING = 770,
    SDL_TEXTINPUT = 771,
    SDL_MOUSEMOTION = 1024,
    SDL_MOUSEBUTTONDOWN = 1025,
    SDL_MOUSEBUTTONUP = 1026,
    SDL_MOUSEWHEEL = 1027,
    SDL_INPUTMOTION = 1280,
    SDL_INPUTBUTTONDOWN = 1281,
    SDL_INPUTBUTTONUP = 1282,
    SDL_INPUTWHEEL = 1283,
    SDL_INPUTPROXIMITYIN = 1284,
    SDL_INPUTPROXIMITYOUT = 1285,
    SDL_JOYAXISMOTION = 1536,
    SDL_JOYBALLMOTION = 1537,
    SDL_JOYHATMOTION = 1538,
    SDL_JOYBUTTONDOWN = 1539,
    SDL_JOYBUTTONUP = 1540,
    SDL_FINGERDOWN = 1792,
    SDL_FINGERUP = 1793,
    SDL_FINGERMOTION = 1794,
    SDL_TOUCHBUTTONDOWN = 1795,
    SDL_TOUCHBUTTONUP = 1796,
    SDL_DOLLARGESTURE = 2048,
    SDL_DOLLARRECORD = 2049,
    SDL_MULTIGESTURE = 2050,
    SDL_CLIPBOARDUPDATE = 2304,
    SDL_EVENT_COMPAT1 = 28672,
    SDL_EVENT_COMPAT2 = 28673,
    SDL_EVENT_COMPAT3 = 28674,
    SDL_USEREVENT = 32768,
    SDL_LASTEVENT = 65535
} ;
#line 59 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef enum __anonenum_SDL_EventType_410331439 SDL_EventType;
#line 134 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_WindowEvent {
   Uint32 type ;
   Uint32 windowID ;
   Uint8 event ;
   Uint8 padding1 ;
   Uint8 padding2 ;
   Uint8 padding3 ;
   int data1 ;
   int data2 ;
};
#line 134 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_WindowEvent SDL_WindowEvent;
#line 149 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_KeyboardEvent {
   Uint32 type ;
   Uint32 windowID ;
   Uint8 state ;
   Uint8 repeat ;
   Uint8 padding2 ;
   Uint8 padding3 ;
   SDL_Keysym keysym ;
};
#line 149 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_KeyboardEvent SDL_KeyboardEvent;
#line 164 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_TextEditingEvent {
   Uint32 type ;
   Uint32 windowID ;
   char text[32] ;
   int start ;
   int length ;
};
#line 164 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_TextEditingEvent SDL_TextEditingEvent;
#line 178 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_TextInputEvent {
   Uint32 type ;
   Uint32 windowID ;
   char text[32] ;
};
#line 178 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_TextInputEvent SDL_TextInputEvent;
#line 193 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_MouseMotionEvent {
   Uint32 type ;
   Uint32 timestamp ;
   Uint32 windowID ;
   Uint32 which ;
   Uint32 state ;
   Sint32 x ;
   Sint32 y ;
   Sint32 xrel ;
   Sint32 yrel ;
};
#line 193 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_MouseMotionEvent SDL_MouseMotionEvent;
#line 213 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_MouseButtonEvent {
   Uint32 type ;
   Uint32 timestamp ;
   Uint32 windowID ;
   Uint32 which ;
   Uint8 button ;
   Uint8 state ;
   Uint8 padding1 ;
   Uint8 padding2 ;
   Sint32 x ;
   Sint32 y ;
};
#line 213 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_MouseButtonEvent SDL_MouseButtonEvent;
#line 230 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_MouseWheelEvent {
   Uint32 type ;
   Uint32 timestamp ;
   Uint32 windowID ;
   Uint32 which ;
   Sint32 x ;
   Sint32 y ;
};
#line 230 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_MouseWheelEvent SDL_MouseWheelEvent;
#line 243 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_JoyAxisEvent {
   Uint32 type ;
   Uint8 which ;
   Uint8 axis ;
   Uint8 padding1 ;
   Uint8 padding2 ;
   int value ;
};
#line 243 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_JoyAxisEvent SDL_JoyAxisEvent;
#line 256 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_JoyBallEvent {
   Uint32 type ;
   Uint8 which ;
   Uint8 ball ;
   Uint8 padding1 ;
   Uint8 padding2 ;
   int xrel ;
   int yrel ;
};
#line 256 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_JoyBallEvent SDL_JoyBallEvent;
#line 270 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_JoyHatEvent {
   Uint32 type ;
   Uint8 which ;
   Uint8 hat ;
   Uint8 value ;
   Uint8 padding1 ;
};
#line 270 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_JoyHatEvent SDL_JoyHatEvent;
#line 288 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_JoyButtonEvent {
   Uint32 type ;
   Uint8 which ;
   Uint8 button ;
   Uint8 state ;
   Uint8 padding1 ;
};
#line 288 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_JoyButtonEvent SDL_JoyButtonEvent;
#line 307 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_TouchFingerEvent {
   Uint32 type ;
   Uint32 timestamp ;
   SDL_TouchID touchId ;
   SDL_FingerID fingerId ;
   float x ;
   float y ;
   float dx ;
   float dy ;
   float pressure ;
};
#line 307 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_TouchFingerEvent SDL_TouchFingerEvent;
#line 324 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_TouchButtonEvent {
   Uint32 type ;
   Uint32 windowID ;
   SDL_TouchID touchId ;
   Uint8 state ;
   Uint8 button ;
   Uint8 padding1 ;
   Uint8 padding2 ;
};
#line 324 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_TouchButtonEvent SDL_TouchButtonEvent;
#line 339 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_MultiGestureEvent {
   Uint32 type ;
   Uint32 windowID ;
   SDL_TouchID touchId ;
   float dTheta ;
   float dDist ;
   float x ;
   float y ;
   Uint16 numFingers ;
   Uint16 padding ;
};
#line 339 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_MultiGestureEvent SDL_MultiGestureEvent;
#line 353 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_DollarGestureEvent {
   Uint32 type ;
   Uint32 windowID ;
   SDL_TouchID touchId ;
   SDL_GestureID gestureId ;
   Uint32 numFingers ;
   float error ;
};
#line 353 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_DollarGestureEvent SDL_DollarGestureEvent;
#line 372 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_QuitEvent {
   Uint32 type ;
};
#line 372 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_QuitEvent SDL_QuitEvent;
#line 381 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_UserEvent {
   Uint32 type ;
   Uint32 windowID ;
   int code ;
   void *data1 ;
   void *data2 ;
};
#line 381 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_UserEvent SDL_UserEvent;
#line 391
struct SDL_SysWMmsg ;
#line 392 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_SysWMmsg SDL_SysWMmsg;
#line 399 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_SysWMEvent {
   Uint32 type ;
   SDL_SysWMmsg *msg ;
};
#line 399 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_SysWMEvent SDL_SysWMEvent;
#line 415 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_ActiveEvent {
   Uint32 type ;
   Uint8 gain ;
   Uint8 state ;
};
#line 415 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_ActiveEvent SDL_ActiveEvent;
#line 422 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
struct SDL_ResizeEvent {
   Uint32 type ;
   int w ;
   int h ;
};
#line 422 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef struct SDL_ResizeEvent SDL_ResizeEvent;
#line 436 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
union SDL_Event {
   Uint32 type ;
   SDL_WindowEvent window ;
   SDL_KeyboardEvent key ;
   SDL_TextEditingEvent edit ;
   SDL_TextInputEvent text ;
   SDL_MouseMotionEvent motion ;
   SDL_MouseButtonEvent button ;
   SDL_MouseWheelEvent wheel ;
   SDL_JoyAxisEvent jaxis ;
   SDL_JoyBallEvent jball ;
   SDL_JoyHatEvent jhat ;
   SDL_JoyButtonEvent jbutton ;
   SDL_QuitEvent quit ;
   SDL_UserEvent user ;
   SDL_SysWMEvent syswm ;
   SDL_TouchFingerEvent tfinger ;
   SDL_TouchButtonEvent tbutton ;
   SDL_MultiGestureEvent mgesture ;
   SDL_DollarGestureEvent dgesture ;
   SDL_ActiveEvent active ;
   SDL_ResizeEvent resize ;
};
#line 436 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef union SDL_Event SDL_Event;
#line 480
enum __anonenum_SDL_eventaction_247177825 {
    SDL_ADDEVENT = 0,
    SDL_PEEKEVENT = 1,
    SDL_GETEVENT = 2
} ;
#line 480 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef enum __anonenum_SDL_eventaction_247177825 SDL_eventaction;
#line 562 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
typedef int (*SDL_EventFilter)(void *userdata , SDL_Event *event );
#line 151 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_hints.h"
enum __anonenum_SDL_HintPriority_680791259 {
    SDL_HINT_DEFAULT = 0,
    SDL_HINT_NORMAL = 1,
    SDL_HINT_OVERRIDE = 2
} ;
#line 151 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_hints.h"
typedef enum __anonenum_SDL_HintPriority_680791259 SDL_HintPriority;
#line 64 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_log.h"
enum __anonenum_703616793 {
    SDL_LOG_CATEGORY_APPLICATION = 0,
    SDL_LOG_CATEGORY_ERROR = 1,
    SDL_LOG_CATEGORY_SYSTEM = 2,
    SDL_LOG_CATEGORY_AUDIO = 3,
    SDL_LOG_CATEGORY_VIDEO = 4,
    SDL_LOG_CATEGORY_RENDER = 5,
    SDL_LOG_CATEGORY_INPUT = 6,
    SDL_LOG_CATEGORY_RESERVED1 = 7,
    SDL_LOG_CATEGORY_RESERVED2 = 8,
    SDL_LOG_CATEGORY_RESERVED3 = 9,
    SDL_LOG_CATEGORY_RESERVED4 = 10,
    SDL_LOG_CATEGORY_RESERVED5 = 11,
    SDL_LOG_CATEGORY_RESERVED6 = 12,
    SDL_LOG_CATEGORY_RESERVED7 = 13,
    SDL_LOG_CATEGORY_RESERVED8 = 14,
    SDL_LOG_CATEGORY_RESERVED9 = 15,
    SDL_LOG_CATEGORY_RESERVED10 = 16,
    SDL_LOG_CATEGORY_CUSTOM = 17
} ;
#line 100
enum __anonenum_SDL_LogPriority_273529134 {
    SDL_LOG_PRIORITY_VERBOSE = 1,
    SDL_LOG_PRIORITY_DEBUG = 2,
    SDL_LOG_PRIORITY_INFO = 3,
    SDL_LOG_PRIORITY_WARN = 4,
    SDL_LOG_PRIORITY_ERROR = 5,
    SDL_LOG_PRIORITY_CRITICAL = 6,
    SDL_NUM_LOG_PRIORITIES = 7
} ;
#line 100 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_log.h"
typedef enum __anonenum_SDL_LogPriority_273529134 SDL_LogPriority;
#line 187 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_log.h"
typedef void (*SDL_LogOutputFunction)(void *userdata , int category , SDL_LogPriority priority ,
                                      char const   *message );
#line 44 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_power.h"
enum __anonenum_SDL_PowerState_675147179 {
    SDL_POWERSTATE_UNKNOWN = 0,
    SDL_POWERSTATE_ON_BATTERY = 1,
    SDL_POWERSTATE_NO_BATTERY = 2,
    SDL_POWERSTATE_CHARGING = 3,
    SDL_POWERSTATE_CHARGED = 4
} ;
#line 44 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_power.h"
typedef enum __anonenum_SDL_PowerState_675147179 SDL_PowerState;
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
enum __anonenum_SDL_RendererFlags_280426716 {
    SDL_RENDERER_SOFTWARE = 1,
    SDL_RENDERER_ACCELERATED = 2,
    SDL_RENDERER_PRESENTVSYNC = 4
} ;
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
typedef enum __anonenum_SDL_RendererFlags_280426716 SDL_RendererFlags;
#line 75 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
struct SDL_RendererInfo {
   char const   *name ;
   Uint32 flags ;
   Uint32 num_texture_formats ;
   Uint32 texture_formats[16] ;
   int max_texture_width ;
   int max_texture_height ;
};
#line 75 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
typedef struct SDL_RendererInfo SDL_RendererInfo;
#line 88
enum __anonenum_SDL_TextureAccess_487062899 {
    SDL_TEXTUREACCESS_STATIC = 0,
    SDL_TEXTUREACCESS_STREAMING = 1
} ;
#line 88 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
typedef enum __anonenum_SDL_TextureAccess_487062899 SDL_TextureAccess;
#line 97
enum __anonenum_SDL_TextureModulate_412417660 {
    SDL_TEXTUREMODULATE_NONE = 0,
    SDL_TEXTUREMODULATE_COLOR = 1,
    SDL_TEXTUREMODULATE_ALPHA = 2
} ;
#line 97 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
typedef enum __anonenum_SDL_TextureModulate_412417660 SDL_TextureModulate;
#line 107
struct SDL_Renderer ;
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
typedef struct SDL_Renderer SDL_Renderer;
#line 113
struct SDL_Texture ;
#line 114 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
typedef struct SDL_Texture SDL_Texture;
#line 72 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_timer.h"
typedef Uint32 (*SDL_TimerCallback)(Uint32 interval , void *param );
#line 77 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_timer.h"
typedef int SDL_TimerID;
#line 53 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_version.h"
struct SDL_version {
   Uint8 major ;
   Uint8 minor ;
   Uint8 patch ;
};
#line 53 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_version.h"
typedef struct SDL_version SDL_version;
#line 134 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_compat.h"
struct SDL_VideoInfo {
   Uint32 hw_available : 1 ;
   Uint32 wm_available : 1 ;
   Uint32 UnusedBits1 : 6 ;
   Uint32 UnusedBits2 : 1 ;
   Uint32 blit_hw : 1 ;
   Uint32 blit_hw_CC : 1 ;
   Uint32 blit_hw_A : 1 ;
   Uint32 blit_sw : 1 ;
   Uint32 blit_sw_CC : 1 ;
   Uint32 blit_sw_A : 1 ;
   Uint32 blit_fill : 1 ;
   Uint32 UnusedBits3 : 16 ;
   Uint32 video_mem ;
   SDL_PixelFormat *vfmt ;
   int current_w ;
   int current_h ;
};
#line 134 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_compat.h"
typedef struct SDL_VideoInfo SDL_VideoInfo;
#line 178
struct private_yuvhwfuncs ;
#line 178
struct private_yuvhwdata ;
#line 178 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_compat.h"
struct SDL_Overlay {
   Uint32 format ;
   int w ;
   int h ;
   int planes ;
   Uint16 *pitches ;
   Uint8 **pixels ;
   struct private_yuvhwfuncs *hwfuncs ;
   struct private_yuvhwdata *hwdata ;
   Uint32 hw_overlay : 1 ;
   Uint32 UnusedBits : 31 ;
};
#line 178 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_compat.h"
typedef struct SDL_Overlay SDL_Overlay;
#line 203
enum __anonenum_SDL_GrabMode_279849253 {
    SDL_GRAB_QUERY = -1,
    SDL_GRAB_OFF = 0,
    SDL_GRAB_ON = 1
} ;
#line 203 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_compat.h"
typedef enum __anonenum_SDL_GrabMode_279849253 SDL_GrabMode;
#line 210
struct SDL_SysWMinfo ;
#line 340 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_compat.h"
typedef SDL_Window *SDL_WindowID;
#line 348 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_compat.h"
typedef Uint32 (*SDL_OldTimerCallback)(Uint32 interval );
#line 9 "../asteroids/player.h"
enum boolean {
    TRUE = 0,
    FALSE = 1
} ;
#line 11 "../asteroids/player.h"
struct bullet {
   struct vector2d location ;
   struct vector2d velocity ;
   enum boolean alive ;
};
#line 18 "../asteroids/player.h"
struct player {
   float hit_radius ;
   int lives ;
   struct vector2d location ;
   struct vector2d velocity ;
   struct vector2d obj_vert[3] ;
   struct vector2d world_vert[3] ;
   struct bullet bullets[3] ;
};
#line 12 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef short __attribute__((__aligned__(1)))  emscripten_align1_short;
#line 14 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef long long __attribute__((__aligned__(4)))  emscripten_align4_int64;
#line 15 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef long long __attribute__((__aligned__(2)))  emscripten_align2_int64;
#line 16 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef long long __attribute__((__aligned__(1)))  emscripten_align1_int64;
#line 18 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef int __attribute__((__aligned__(2)))  emscripten_align2_int;
#line 19 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef int __attribute__((__aligned__(1)))  emscripten_align1_int;
#line 21 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef float __attribute__((__aligned__(2)))  emscripten_align2_float;
#line 22 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef float __attribute__((__aligned__(1)))  emscripten_align1_float;
#line 24 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef double __attribute__((__aligned__(4)))  emscripten_align4_double;
#line 25 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef double __attribute__((__aligned__(2)))  emscripten_align2_double;
#line 26 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef double __attribute__((__aligned__(1)))  emscripten_align1_double;
#line 28 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef void (*em_callback_func)(void);
#line 29 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef void (*em_arg_callback_func)(void * );
#line 30 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_types.h"
typedef void (*em_str_callback_func)(char const   * );
#line 19 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/promise.h"
struct _em_promise ;
#line 19 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/promise.h"
typedef struct _em_promise *em_promise_t;
#line 21
enum em_promise_result_t {
    EM_PROMISE_FULFILL = 0,
    EM_PROMISE_MATCH = 1,
    EM_PROMISE_MATCH_RELEASE = 2,
    EM_PROMISE_REJECT = 3
} ;
#line 21 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/promise.h"
typedef enum em_promise_result_t em_promise_result_t;
#line 54 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/promise.h"
typedef em_promise_result_t (*em_promise_callback_t)(void **result , void *data ,
                                                     void *value );
#line 20 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/wget.h"
typedef void (*em_async_wget_onload_func)(void * , void * , int  );
#line 23 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/wget.h"
typedef void (*em_async_wget2_onload_func)(unsigned int  , void * , char const   * );
#line 24 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/wget.h"
typedef void (*em_async_wget2_onstatus_func)(unsigned int  , void * , int  );
#line 28 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/wget.h"
typedef void (*em_async_wget2_data_onload_func)(unsigned int  , void * , void * ,
                                                unsigned int  );
#line 29 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/wget.h"
typedef void (*em_async_wget2_data_onerror_func)(unsigned int  , void * , int  , char const   * );
#line 30 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/wget.h"
typedef void (*em_async_wget2_data_onprogress_func)(unsigned int  , void * , int  ,
                                                    int  );
#line 54 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef void (*em_socket_callback)(int fd , void *userData );
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef void (*em_socket_error_callback)(int fd , int err , char const   *msg , void *userData );
#line 92 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef void (*em_idb_onload_func)(void * , void * , int  );
#line 96 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef void (*em_idb_exists_func)(void * , int  );
#line 115 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef void (*em_run_preload_plugins_data_onload_func)(void * , char const   * );
#line 126 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef int worker_handle;
#line 131 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef void (*em_worker_callback_func)(char * , int  , void * );
#line 147 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef struct _IO_FILE FILE___0;
#line 169 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef void (*em_scan_func)(void * , void * );
#line 175 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
typedef void (*em_dlopen_callback)(void *handle , void *user_data );
#line 57 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_477865197___1 {
   float __f ;
   unsigned int __i ;
};
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_302425027___1 {
   double __f ;
   unsigned long long __i ;
};
#line 57 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_477865197___2 {
   float __f ;
   unsigned int __i ;
};
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_302425027___2 {
   double __f ;
   unsigned long long __i ;
};
#line 57 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_477865197___3 {
   float __f ;
   unsigned int __i ;
};
#line 63 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
union __anonunion___u_302425027___3 {
   double __f ;
   unsigned long long __i ;
};
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
#line 1 "cil-euSjnpGT.o"
#pragma merger("0","/tmp/cil-XJTIzOP7.i","-sUSE_SDL=2")
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
extern int mbtowc(wchar_t___0 * __restrict   , char const   * __restrict   , size_t  ) ;
#line 74
extern int wctomb(char * , wchar_t___0  ) ;
#line 75
extern size_t mbstowcs(wchar_t___0 * __restrict   , char const   * __restrict   ,
                       size_t  ) ;
#line 76
extern size_t wcstombs(char * __restrict   , wchar_t___0 const   * __restrict   ,
                       size_t  ) ;
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
#line 12 "../asteroids/renderer.h"
int draw_pixel(uint32_t *pixel_buffer , int x , int y , uint32_t colour ) ;
#line 14
int draw_line(uint32_t *pixel_buffer , int x1 , int y1___0 , int x2 , int y2 , uint32_t colour ) ;
#line 17
void clear_pixels(uint32_t *pixel_buffer , uint32_t colour ) ;
#line 13 "../asteroids/vector.h"
void add_vector(struct vector2d *a , struct vector2d *b ) ;
#line 15
struct vector2d add_vector_new(struct vector2d *a , struct vector2d *b ) ;
#line 17
void multiply_vector(struct vector2d *v , float n ) ;
#line 19
void divide_vector(struct vector2d *v , float n ) ;
#line 21
void print_vector(struct vector2d *a ) ;
#line 23
void rotate_vector(struct vector2d *v , float degrees ) ;
#line 25
float magnitude_vector(struct vector2d *v ) ;
#line 27
void normalise_vector(struct vector2d *v ) ;
#line 29
void limit_vector(struct vector2d *v , float limit ) ;
#line 20 "../asteroids/asteroids.h"
void init_asteroids(struct asteroid *asteroids___0 , int size ) ;
#line 21
void update_asteroids(struct asteroid *asteroids___0 , int size ) ;
#line 22
void draw_asteroids(uint32_t *pixel_buffer , struct asteroid *asteroids___0 , int size ) ;
#line 23
int shrink_asteroid(struct asteroid *a , int size ) ;
#line 24
void spawn_asteroids(struct asteroid *a , int length , int size , struct vector2d v ) ;
#line 25
void bounds_asteroids(struct asteroid *asteroids___0 , int size ) ;
#line 26
int collision_asteroids(struct asteroid *asteroids___0 , int size , struct vector2d *v ,
                        float radius ) ;
#line 11 "../asteroids/asteroids.c"
void init_asteroids(struct asteroid *asteroids___0 , int size ) 
{ 
  int i ;
  int j ;
  struct vector2d translation ;
  int sign_x ;
  int tmp ;
  int sign_y ;
  int tmp___0 ;
  int lx ;
  int tmp___1 ;
  int ly ;
  int tmp___2 ;
  float vx ;
  int tmp___3 ;
  float vy ;
  int tmp___4 ;
  float degrees ;
  int tmp___5 ;

  {
#line 13
  i = 0;
#line 14
  j = 0;
#line 15
  translation.x = (float )320;
#line 15
  translation.y = (float )240;
#line 17
  i = 0;
#line 17
  while (i < size) {
#line 19
    tmp = rand();
#line 19
    sign_x = tmp % 100;
#line 20
    tmp___0 = rand();
#line 20
    sign_y = tmp___0 % 100;
#line 23
    tmp___1 = rand();
#line 23
    lx = (tmp___1 % 640) / 2;
#line 24
    tmp___2 = rand();
#line 24
    ly = (tmp___2 % 480) / 2;
#line 27
    tmp___3 = rand();
#line 27
    vx = (float )(tmp___3 % 500) / (float )1000;
#line 28
    tmp___4 = rand();
#line 28
    vy = (float )(tmp___4 % 500) / (float )1000;
#line 30
    tmp___5 = rand();
#line 30
    degrees = (float )(tmp___5 % 100 + 1000) / (float )1000;
#line 33
    if (sign_x >= 50) {
#line 35
      vx = - vx;
#line 36
      lx = - lx;
#line 37
      degrees = - degrees;
    }
#line 41
    if (sign_y >= 50) {
#line 43
      vy = - vy;
#line 44
      ly = - ly;
    }
#line 48
    if (i < 3) {
#line 50
      (asteroids___0 + i)->alive = 1;
    } else {
#line 54
      (asteroids___0 + i)->alive = 0;
    }
#line 57
    (asteroids___0 + i)->size = (enum sizes )2;
#line 58
    (asteroids___0 + i)->hit_radius = (float )35;
#line 59
    (asteroids___0 + i)->rotation = degrees;
#line 60
    (asteroids___0 + i)->location.x = (float )lx;
#line 61
    (asteroids___0 + i)->location.y = (float )ly;
#line 62
    (asteroids___0 + i)->velocity.x = vx;
#line 63
    (asteroids___0 + i)->velocity.y = vy;
#line 64
    (asteroids___0 + i)->obj_vert[0].x = (float ).0;
#line 65
    (asteroids___0 + i)->obj_vert[0].y = (float ).4;
#line 66
    (asteroids___0 + i)->obj_vert[1].x = (float ).2;
#line 67
    (asteroids___0 + i)->obj_vert[1].y = (float ).3;
#line 68
    (asteroids___0 + i)->obj_vert[2].x = (float ).2;
#line 69
    (asteroids___0 + i)->obj_vert[2].y = (float ).1;
#line 70
    (asteroids___0 + i)->obj_vert[3].x = (float ).4;
#line 71
    (asteroids___0 + i)->obj_vert[3].y = (float ).0;
#line 72
    (asteroids___0 + i)->obj_vert[4].x = (float ).3;
#line 73
    (asteroids___0 + i)->obj_vert[4].y = (float )(- .2);
#line 74
    (asteroids___0 + i)->obj_vert[5].x = (float ).1;
#line 75
    (asteroids___0 + i)->obj_vert[5].y = (float )(- .2);
#line 76
    (asteroids___0 + i)->obj_vert[6].x = (float ).0;
#line 77
    (asteroids___0 + i)->obj_vert[6].y = (float )(- .3);
#line 78
    (asteroids___0 + i)->obj_vert[7].x = (float )(- .2);
#line 79
    (asteroids___0 + i)->obj_vert[7].y = (float )(- .2);
#line 80
    (asteroids___0 + i)->obj_vert[8].x = (float )(- .4);
#line 81
    (asteroids___0 + i)->obj_vert[8].y = (float )0;
#line 82
    (asteroids___0 + i)->obj_vert[9].x = (float )(- .3);
#line 83
    (asteroids___0 + i)->obj_vert[9].y = (float ).3;
#line 85
    j = 0;
#line 85
    while (j < 10) {
#line 88
      multiply_vector(& (asteroids___0 + i)->obj_vert[j], (float )88);
#line 89
      add_vector(& (asteroids___0 + i)->world_vert[j], & (asteroids___0 + i)->obj_vert[j]);
#line 90
      add_vector(& (asteroids___0 + i)->world_vert[j], & translation);
#line 85
      j ++;
    }
#line 17
    i ++;
  }
#line 93
  return;
}
}
#line 95 "../asteroids/asteroids.c"
void update_asteroids(struct asteroid *asteroids___0 , int size ) 
{ 
  int i ;
  int j ;
  struct vector2d translation ;

  {
#line 97
  i = 0;
#line 98
  j = 0;
#line 99
  translation.x = (float )320;
#line 99
  translation.y = (float )240;
#line 101
  i = 0;
#line 101
  while (i < size) {
#line 104
    add_vector(& (asteroids___0 + i)->location, & (asteroids___0 + i)->velocity);
#line 108
    j = 0;
#line 108
    while (j < 10) {
#line 110
      (asteroids___0 + i)->world_vert[j] = add_vector_new(& (asteroids___0 + i)->obj_vert[j],
                                                          & (asteroids___0 + i)->location);
#line 111
      add_vector(& (asteroids___0 + i)->world_vert[j], & translation);
#line 112
      rotate_vector(& (asteroids___0 + i)->obj_vert[j], (asteroids___0 + i)->rotation);
#line 108
      j ++;
    }
#line 101
    i ++;
  }
#line 115
  return;
}
}
#line 117 "../asteroids/asteroids.c"
void draw_asteroids(uint32_t *pixel_buffer , struct asteroid *asteroids___0 , int size ) 
{ 
  int i ;

  {
#line 119
  i = 0;
#line 121
  i = 0;
#line 121
  while (i < size) {
#line 123
    if ((asteroids___0 + i)->alive) {
#line 125
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[0].x, (int )(asteroids___0 + i)->world_vert[0].y,
                (int )(asteroids___0 + i)->world_vert[1].x, (int )(asteroids___0 + i)->world_vert[1].y,
                4294967295U);
#line 126
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[1].x, (int )(asteroids___0 + i)->world_vert[1].y,
                (int )(asteroids___0 + i)->world_vert[2].x, (int )(asteroids___0 + i)->world_vert[2].y,
                4294967295U);
#line 127
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[2].x, (int )(asteroids___0 + i)->world_vert[2].y,
                (int )(asteroids___0 + i)->world_vert[3].x, (int )(asteroids___0 + i)->world_vert[3].y,
                4294967295U);
#line 128
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[3].x, (int )(asteroids___0 + i)->world_vert[3].y,
                (int )(asteroids___0 + i)->world_vert[4].x, (int )(asteroids___0 + i)->world_vert[4].y,
                4294967295U);
#line 129
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[4].x, (int )(asteroids___0 + i)->world_vert[4].y,
                (int )(asteroids___0 + i)->world_vert[5].x, (int )(asteroids___0 + i)->world_vert[5].y,
                4294967295U);
#line 130
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[5].x, (int )(asteroids___0 + i)->world_vert[5].y,
                (int )(asteroids___0 + i)->world_vert[6].x, (int )(asteroids___0 + i)->world_vert[6].y,
                4294967295U);
#line 131
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[6].x, (int )(asteroids___0 + i)->world_vert[6].y,
                (int )(asteroids___0 + i)->world_vert[7].x, (int )(asteroids___0 + i)->world_vert[7].y,
                4294967295U);
#line 132
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[7].x, (int )(asteroids___0 + i)->world_vert[7].y,
                (int )(asteroids___0 + i)->world_vert[8].x, (int )(asteroids___0 + i)->world_vert[8].y,
                4294967295U);
#line 133
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[8].x, (int )(asteroids___0 + i)->world_vert[8].y,
                (int )(asteroids___0 + i)->world_vert[9].x, (int )(asteroids___0 + i)->world_vert[9].y,
                4294967295U);
#line 134
      draw_line(pixel_buffer, (int )(asteroids___0 + i)->world_vert[9].x, (int )(asteroids___0 + i)->world_vert[9].y,
                (int )(asteroids___0 + i)->world_vert[0].x, (int )(asteroids___0 + i)->world_vert[0].y,
                4294967295U);
    }
#line 121
    i ++;
  }
#line 146
  return;
}
}
#line 148 "../asteroids/asteroids.c"
int shrink_asteroid(struct asteroid *a , int size ) 
{ 
  int i ;

  {
#line 150
  a->obj_vert[0].x = (float ).0;
#line 151
  a->obj_vert[0].y = (float ).4;
#line 152
  a->obj_vert[1].x = (float ).2;
#line 153
  a->obj_vert[1].y = (float ).3;
#line 154
  a->obj_vert[2].x = (float ).2;
#line 155
  a->obj_vert[2].y = (float ).1;
#line 156
  a->obj_vert[3].x = (float ).4;
#line 157
  a->obj_vert[3].y = (float ).0;
#line 158
  a->obj_vert[4].x = (float ).3;
#line 159
  a->obj_vert[4].y = (float )(- .2);
#line 160
  a->obj_vert[5].x = (float ).1;
#line 161
  a->obj_vert[5].y = (float )(- .2);
#line 162
  a->obj_vert[6].x = (float ).0;
#line 163
  a->obj_vert[6].y = (float )(- .3);
#line 164
  a->obj_vert[7].x = (float )(- .2);
#line 165
  a->obj_vert[7].y = (float )(- .2);
#line 166
  a->obj_vert[8].x = (float )(- .4);
#line 167
  a->obj_vert[8].y = (float )0;
#line 168
  a->obj_vert[9].x = (float )(- .3);
#line 169
  a->obj_vert[9].y = (float ).3;
#line 171
  i = 0;
#line 173
  i = 0;
#line 173
  while (i < 10) {
#line 175
    multiply_vector(& a->obj_vert[i], (float )88);
#line 173
    i ++;
  }
#line 178
  if (size == 2) {
#line 181
    i = 0;
#line 181
    while (i < 10) {
#line 183
      divide_vector(& a->obj_vert[i], (float )2);
#line 181
      i ++;
    }
#line 186
    a->size = (enum sizes )1;
#line 188
    return (0);
  }
#line 191
  if (size == 1) {
#line 194
    i = 0;
#line 194
    while (i < 10) {
#line 196
      divide_vector(& a->obj_vert[i], (float )4);
#line 194
      i ++;
    }
#line 199
    a->size = (enum sizes )0;
#line 201
    return (0);
  }
#line 204
  if (size == 0) {
#line 207
    i = 0;
#line 207
    while (i < 10) {
#line 209
      divide_vector(& a->obj_vert[i], (float )8);
#line 207
      i ++;
    }
#line 212
    return (0);
  }
#line 215
  return (1);
}
}
#line 218 "../asteroids/asteroids.c"
void spawn_asteroids(struct asteroid *a , int length , int size , struct vector2d v ) 
{ 
  int i ;
  int count ;

  {
#line 220
  i = 0;
#line 221
  count = 0;
#line 223
  i = 0;
#line 223
  while (i < length) {
#line 225
    if ((a + i)->alive == 0) {
#line 227
      if (count == 3) {
#line 229
        break;
      }
#line 232
      (a + i)->location = v;
#line 233
      (a + i)->hit_radius /= (float )2;
#line 234
      (a + i)->alive = 1;
#line 235
      count ++;
#line 236
      shrink_asteroid(a + i, size);
    }
#line 223
    i ++;
  }
#line 239
  return;
}
}
#line 241 "../asteroids/asteroids.c"
void bounds_asteroids(struct asteroid *asteroids___0 , int size ) 
{ 
  int i ;

  {
#line 243
  i = 0;
#line 245
  i = 0;
#line 245
  while (i < size) {
#line 247
    if ((asteroids___0 + i)->location.x < (float )-320) {
#line 249
      (asteroids___0 + i)->location.x = (float )320;
    }
#line 252
    if ((asteroids___0 + i)->location.x > (float )320) {
#line 254
      (asteroids___0 + i)->location.x = (float )-320;
    }
#line 257
    if ((asteroids___0 + i)->location.y < (float )-240) {
#line 259
      (asteroids___0 + i)->location.y = (float )240;
    }
#line 262
    if ((asteroids___0 + i)->location.y > (float )240) {
#line 264
      (asteroids___0 + i)->location.y = (float )-240;
    }
#line 245
    i ++;
  }
#line 267
  return;
}
}
#line 270 "../asteroids/asteroids.c"
int collision_asteroids(struct asteroid *asteroids___0 , int size , struct vector2d *v ,
                        float radius ) 
{ 
  int i ;
  float sum ;
  float a ;
  double tmp ;
  float b ;
  double tmp___0 ;
  float distance ;
  double tmp___1 ;

  {
#line 273
  i = 0;
#line 276
  i = 0;
#line 276
  while (i < size) {
#line 279
    if ((asteroids___0 + i)->alive == 1) {
#line 281
      sum = (asteroids___0 + i)->hit_radius + radius;
#line 282
      tmp = pow((double )((asteroids___0 + i)->location.x - v->x), (double )2);
#line 282
      a = (float )tmp;
#line 283
      tmp___0 = pow((double )((asteroids___0 + i)->location.y - v->y), (double )2);
#line 283
      b = (float )tmp___0;
#line 284
      tmp___1 = sqrt((double )(a + b));
#line 284
      distance = (float )tmp___1;
#line 286
      if (distance < sum) {
#line 288
        return (i);
      }
    }
#line 276
    i ++;
  }
#line 293
  return (-1);
}
}
#line 1 "cil-4P3N_Qml.o"
#pragma merger("0","/tmp/cil-q6cdwCOQ.i","-sUSE_SDL=2")
#line 148 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_platform.h"
extern char const __attribute__((__visibility__("default")))  *SDL_GetPlatform(void) ;
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
#line 16 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/inttypes.h"
extern intmax_t imaxabs(intmax_t  ) ;
#line 17
extern imaxdiv_t imaxdiv(intmax_t  , intmax_t  ) ;
#line 19
extern intmax_t strtoimax(char const   * __restrict   , char ** __restrict   , int  ) ;
#line 20
extern uintmax_t strtoumax(char const   * __restrict   , char ** __restrict   , int  ) ;
#line 22
extern intmax_t wcstoimax(wchar_t___0 const   * __restrict   , wchar_t___0 ** __restrict   ,
                          int  ) ;
#line 23
extern uintmax_t wcstoumax(wchar_t___0 const   * __restrict   , wchar_t___0 ** __restrict   ,
                           int  ) ;
#line 10 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/ctype.h"
extern int isalnum(int  ) ;
#line 11
extern int isalpha(int  ) ;
#line 12
extern int isblank(int  ) ;
#line 13
extern int iscntrl(int  ) ;
#line 14
extern int isdigit(int  ) ;
#line 15
extern int isgraph(int  ) ;
#line 16
extern int islower(int  ) ;
#line 17
extern int isprint(int  ) ;
#line 18
extern int ispunct(int  ) ;
#line 19
extern int isspace(int  ) ;
#line 20
extern int isupper(int  ) ;
#line 21
extern int isxdigit(int  ) ;
#line 22
extern int tolower(int  ) ;
#line 23
extern int toupper(int  ) ;
#line 26 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/ctype.h"
__inline static int __isspace(int _c ) 
{ 
  int tmp ;

  {
#line 28
  if (_c == 32) {
#line 28
    tmp = 1;
  } else
#line 28
  if ((unsigned int )_c - 9U < 5U) {
#line 28
    tmp = 1;
  } else {
#line 28
    tmp = 0;
  }
#line 28
  return (tmp);
}
}
#line 48
extern int isalnum_l(int  , locale_t  ) ;
#line 49
extern int isalpha_l(int  , locale_t  ) ;
#line 50
extern int isblank_l(int  , locale_t  ) ;
#line 51
extern int iscntrl_l(int  , locale_t  ) ;
#line 52
extern int isdigit_l(int  , locale_t  ) ;
#line 53
extern int isgraph_l(int  , locale_t  ) ;
#line 54
extern int islower_l(int  , locale_t  ) ;
#line 55
extern int isprint_l(int  , locale_t  ) ;
#line 56
extern int ispunct_l(int  , locale_t  ) ;
#line 57
extern int isspace_l(int  , locale_t  ) ;
#line 58
extern int isupper_l(int  , locale_t  ) ;
#line 59
extern int isxdigit_l(int  , locale_t  ) ;
#line 60
extern int tolower_l(int  , locale_t  ) ;
#line 61
extern int toupper_l(int  , locale_t  ) ;
#line 63
extern int isascii(int  ) ;
#line 64
extern int toascii(int  ) ;
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
#line 418 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_stdinc.h"
extern size_t __attribute__((__visibility__("default")))  SDL_wcslen(wchar_t___0 const   *string ) ;
#line 424
extern size_t __attribute__((__visibility__("default")))  SDL_wcslcpy(wchar_t___0 *dst ,
                                                                      wchar_t___0 const   *src ,
                                                                      size_t maxlen ) ;
#line 430
extern size_t __attribute__((__visibility__("default")))  SDL_wcslcat(wchar_t___0 *dst ,
                                                                      wchar_t___0 const   *src ,
                                                                      size_t maxlen ) ;
#line 441
extern size_t __attribute__((__visibility__("default")))  SDL_utf8strlcpy(char *dst ,
                                                                          char const   *src ,
                                                                          size_t dst_bytes ) ;
#line 460
extern char __attribute__((__visibility__("default")))  *SDL_strrev(char *string ) ;
#line 466
extern char __attribute__((__visibility__("default")))  *SDL_strupr(char *string ) ;
#line 472
extern char __attribute__((__visibility__("default")))  *SDL_strlwr(char *string ) ;
#line 507
extern char __attribute__((__visibility__("default")))  *SDL_ltoa(long value , char *string ,
                                                                  int radix ) ;
#line 519
extern char __attribute__((__visibility__("default")))  *SDL_ultoa(unsigned long value ,
                                                                   char *string ,
                                                                   int radix ) ;
#line 540
extern char __attribute__((__visibility__("default")))  *SDL_lltoa(Sint64 value ,
                                                                   char *string ,
                                                                   int radix ) ;
#line 547
extern char __attribute__((__visibility__("default")))  *SDL_ulltoa(Uint64 value ,
                                                                    char *string ,
                                                                    int radix ) ;
#line 735
extern SDL_iconv_t __attribute__((__visibility__("default")))  SDL_iconv_open(char const   *tocode ,
                                                                              char const   *fromcode ) ;
#line 737
extern int __attribute__((__visibility__("default")))  SDL_iconv_close(SDL_iconv_t cd ) ;
#line 739
extern size_t __attribute__((__visibility__("default")))  SDL_iconv(SDL_iconv_t cd ,
                                                                    char const   **inbuf ,
                                                                    size_t *inbytesleft ,
                                                                    char **outbuf ,
                                                                    size_t *outbytesleft ) ;
#line 746
extern char __attribute__((__visibility__("default")))  *SDL_iconv_string(char const   *tocode ,
                                                                          char const   *fromcode ,
                                                                          char const   *inbuf ,
                                                                          size_t inbytesleft ) ;
#line 67 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_main.h"
extern int SDL_main(int argc , char **argv ) ;
#line 207 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/signal.h"
extern int __libc_current_sigrtmin(void) ;
#line 208
extern int __libc_current_sigrtmax(void) ;
#line 213
extern int kill(pid_t  , int  ) ;
#line 215
extern int sigemptyset(sigset_t * ) ;
#line 216
extern int sigfillset(sigset_t * ) ;
#line 217
extern int sigaddset(sigset_t * , int  ) ;
#line 218
extern int sigdelset(sigset_t * , int  ) ;
#line 219
extern int sigismember(sigset_t const   * , int  ) ;
#line 221
extern int sigprocmask(int  , sigset_t const   * __restrict   , sigset_t * __restrict   ) ;
#line 222
extern int sigsuspend(sigset_t const   * ) ;
#line 223
extern int sigaction(int  , struct sigaction  const  * __restrict   , struct sigaction * __restrict   ) ;
#line 224
extern int sigpending(sigset_t * ) ;
#line 225
extern int sigwait(sigset_t const   * __restrict   , int * __restrict   ) ;
#line 226
extern int sigwaitinfo(sigset_t const   * __restrict   , siginfo_t * __restrict   ) ;
#line 227
extern int sigtimedwait(sigset_t const   * __restrict   , siginfo_t * __restrict   ,
                        struct timespec  const  * __restrict   ) ;
#line 228
extern int sigqueue(pid_t  , int  , union sigval  ) ;
#line 230
extern int pthread_sigmask(int  , sigset_t const   * __restrict   , sigset_t * __restrict   ) ;
#line 231
extern int pthread_kill(pthread_t  , int  ) ;
#line 233
extern void psiginfo(siginfo_t const   * , char const   * ) ;
#line 234
extern void psignal(int  , char const   * ) ;
#line 239
extern int killpg(pid_t  , int  ) ;
#line 240
extern int sigaltstack(stack_t const   * __restrict   , stack_t * __restrict   ) ;
#line 241
extern int sighold(int  ) ;
#line 242
extern int sigignore(int  ) ;
#line 243
extern int siginterrupt(int  , int  ) ;
#line 244
extern int sigpause(int  ) ;
#line 245
extern int sigrelse(int  ) ;
#line 246
extern void (*sigset(int  , void (*)(int  ) ))(int  ) ;
#line 289
extern void (*signal(int  , void (*)(int  ) ))(int  ) ;
#line 290
extern int raise(int  ) ;
#line 117 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_assert.h"
extern SDL_assert_state __attribute__((__visibility__("default")))  SDL_ReportAssertion(SDL_assert_data * ,
                                                                                        char const   * ,
                                                                                        char const   * ,
                                                                                        int  ) ;
#line 194
extern void __attribute__((__visibility__("default")))  SDL_SetAssertionHandler(SDL_assert_state (*handler)(SDL_assert_data const   *data ,
                                                                                                            void *userdata ) ,
                                                                                void *userdata ) ;
#line 220
extern SDL_assert_data const __attribute__((__visibility__("default")))  *SDL_GetAssertionReport(void) ;
#line 229
extern void __attribute__((__visibility__("default")))  SDL_ResetAssertionReport(void) ;
#line 106 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_atomic.h"
extern SDL_bool __attribute__((__visibility__("default")))  SDL_AtomicTryLock(SDL_SpinLock *lock ) ;
#line 113
extern void __attribute__((__visibility__("default")))  SDL_AtomicLock(SDL_SpinLock *lock ) ;
#line 120
extern void __attribute__((__visibility__("default")))  SDL_AtomicUnlock(SDL_SpinLock *lock ) ;
#line 201
extern SDL_bool __attribute__((__visibility__("default")))  SDL_AtomicCAS_(SDL_atomic_t *a ,
                                                                           int oldval ,
                                                                           int newval ) ;
#line 223 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_atomic.h"
__inline static int SDL_AtomicGet(SDL_atomic_t *a ) 
{ 
  int value ;

  {
#line 225
  value = a->value;
#line 226
  __asm__  volatile   ("": : : "memory");
#line 227
  return (value);
}
}
#line 276
extern SDL_bool __attribute__((__visibility__("default")))  SDL_AtomicCASPtr_(void **a ,
                                                                              void *oldval ,
                                                                              void *newval ) ;
#line 298 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_atomic.h"
__inline static void *SDL_AtomicGetPtr(void **a ) 
{ 
  void *value ;

  {
#line 300
  value = *a;
#line 301
  __asm__  volatile   ("": : : "memory");
#line 302
  return (value);
}
}
#line 42 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_error.h"
extern void __attribute__((__visibility__("default")))  SDL_SetError(char const   *fmt 
                                                                     , ...) ;
#line 43
extern char const __attribute__((__visibility__("default")))  *SDL_GetError(void) ;
#line 44
extern void __attribute__((__visibility__("default")))  SDL_ClearError(void) ;
#line 64
extern void __attribute__((__visibility__("default")))  SDL_Error(SDL_errorcode code ) ;
#line 107 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_endian.h"
__inline static Uint16 SDL_Swap16(Uint16 x ) 
{ 


  {
#line 110
  return ((Uint16 )(((int )x << 8) | ((int )x >> 8)));
}
}
#line 147 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_endian.h"
__inline static Uint32 SDL_Swap32(Uint32 x ) 
{ 


  {
#line 150
  return ((((x << 24) | ((x << 8) & 16711680U)) | ((x >> 8) & 65280U)) | (x >> 24));
}
}
#line 181 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_endian.h"
__inline static Uint64 SDL_Swap64(Uint64 x ) 
{ 
  Uint32 hi ;
  Uint32 lo ;
  Uint32 tmp ;
  Uint32 tmp___0 ;

  {
#line 187
  lo = (Uint32 )(x & 4294967295ULL);
#line 188
  x >>= 32;
#line 189
  hi = (Uint32 )(x & 4294967295ULL);
#line 190
  tmp = SDL_Swap32(lo);
#line 190
  x = (Uint64 )tmp;
#line 191
  x <<= 32;
#line 192
  tmp___0 = SDL_Swap32(hi);
#line 192
  x |= (unsigned long long )tmp___0;
#line 193
  return (x);
}
}
#line 198 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_endian.h"
__inline static float SDL_SwapFloat(float x ) 
{ 
  union __anonunion_swapper_599864594 swapper ;

  {
#line 206
  swapper.f = x;
#line 207
  swapper.ui32 = SDL_Swap32(swapper.ui32);
#line 208
  return (swapper.f);
}
}
#line 66 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_mutex.h"
extern SDL_mutex __attribute__((__visibility__("default")))  *SDL_CreateMutex(void) ;
#line 74
extern int __attribute__((__visibility__("default")))  SDL_mutexP(SDL_mutex *mutex ) ;
#line 85
extern int __attribute__((__visibility__("default")))  SDL_mutexV(SDL_mutex *mutex ) ;
#line 90
extern void __attribute__((__visibility__("default")))  SDL_DestroyMutex(SDL_mutex *mutex ) ;
#line 107
extern SDL_sem __attribute__((__visibility__("default")))  *SDL_CreateSemaphore(Uint32 initial_value ) ;
#line 112
extern void __attribute__((__visibility__("default")))  SDL_DestroySemaphore(SDL_sem *sem ) ;
#line 119
extern int __attribute__((__visibility__("default")))  SDL_SemWait(SDL_sem *sem ) ;
#line 127
extern int __attribute__((__visibility__("default")))  SDL_SemTryWait(SDL_sem *sem ) ;
#line 138
extern int __attribute__((__visibility__("default")))  SDL_SemWaitTimeout(SDL_sem *sem ,
                                                                          Uint32 ms ) ;
#line 145
extern int __attribute__((__visibility__("default")))  SDL_SemPost(SDL_sem *sem ) ;
#line 150
extern Uint32 __attribute__((__visibility__("default")))  SDL_SemValue(SDL_sem *sem ) ;
#line 192
extern SDL_cond __attribute__((__visibility__("default")))  *SDL_CreateCond(void) ;
#line 197
extern void __attribute__((__visibility__("default")))  SDL_DestroyCond(SDL_cond *cond ) ;
#line 204
extern int __attribute__((__visibility__("default")))  SDL_CondSignal(SDL_cond *cond ) ;
#line 211
extern int __attribute__((__visibility__("default")))  SDL_CondBroadcast(SDL_cond *cond ) ;
#line 222
extern int __attribute__((__visibility__("default")))  SDL_CondWait(SDL_cond *cond ,
                                                                    SDL_mutex *mutex ) ;
#line 232
extern int __attribute__((__visibility__("default")))  SDL_CondWaitTimeout(SDL_cond *cond ,
                                                                           SDL_mutex *mutex ,
                                                                           Uint32 ms ) ;
#line 141 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_thread.h"
extern SDL_Thread __attribute__((__visibility__("default")))  *SDL_CreateThread(int (*fn)(void *data ) ,
                                                                                void *data ) ;
#line 149
extern SDL_threadID __attribute__((__visibility__("default")))  SDL_ThreadID(void) ;
#line 156
extern SDL_threadID __attribute__((__visibility__("default")))  SDL_GetThreadID(SDL_Thread *thread ) ;
#line 161
extern int __attribute__((__visibility__("default")))  SDL_SetThreadPriority(SDL_ThreadPriority priority ) ;
#line 169
extern void __attribute__((__visibility__("default")))  SDL_WaitThread(SDL_Thread *thread ,
                                                                       int *status ) ;
#line 142 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rwops.h"
extern SDL_RWops __attribute__((__visibility__("default")))  *SDL_RWFromFile(char const   *file ,
                                                                             char const   *mode ) ;
#line 146
extern SDL_RWops __attribute__((__visibility__("default")))  *SDL_RWFromFP(FILE *fp ,
                                                                           SDL_bool autoclose ) ;
#line 153
extern SDL_RWops __attribute__((__visibility__("default")))  *SDL_RWFromMem(void *mem ,
                                                                            int size ) ;
#line 154
extern SDL_RWops __attribute__((__visibility__("default")))  *SDL_RWFromConstMem(void const   *mem ,
                                                                                 int size ) ;
#line 160
extern SDL_RWops __attribute__((__visibility__("default")))  *SDL_AllocRW(void) ;
#line 161
extern void __attribute__((__visibility__("default")))  SDL_FreeRW(SDL_RWops *area ) ;
#line 187
extern Uint16 __attribute__((__visibility__("default")))  SDL_ReadLE16(SDL_RWops *src ) ;
#line 188
extern Uint16 __attribute__((__visibility__("default")))  SDL_ReadBE16(SDL_RWops *src ) ;
#line 189
extern Uint32 __attribute__((__visibility__("default")))  SDL_ReadLE32(SDL_RWops *src ) ;
#line 190
extern Uint32 __attribute__((__visibility__("default")))  SDL_ReadBE32(SDL_RWops *src ) ;
#line 191
extern Uint64 __attribute__((__visibility__("default")))  SDL_ReadLE64(SDL_RWops *src ) ;
#line 192
extern Uint64 __attribute__((__visibility__("default")))  SDL_ReadBE64(SDL_RWops *src ) ;
#line 201
extern size_t __attribute__((__visibility__("default")))  SDL_WriteLE16(SDL_RWops *dst ,
                                                                        Uint16 value ) ;
#line 202
extern size_t __attribute__((__visibility__("default")))  SDL_WriteBE16(SDL_RWops *dst ,
                                                                        Uint16 value ) ;
#line 203
extern size_t __attribute__((__visibility__("default")))  SDL_WriteLE32(SDL_RWops *dst ,
                                                                        Uint32 value ) ;
#line 204
extern size_t __attribute__((__visibility__("default")))  SDL_WriteBE32(SDL_RWops *dst ,
                                                                        Uint32 value ) ;
#line 205
extern size_t __attribute__((__visibility__("default")))  SDL_WriteLE64(SDL_RWops *dst ,
                                                                        Uint64 value ) ;
#line 206
extern size_t __attribute__((__visibility__("default")))  SDL_WriteBE64(SDL_RWops *dst ,
                                                                        Uint64 value ) ;
#line 217 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_audio.h"
extern int __attribute__((__visibility__("default")))  SDL_GetNumAudioDrivers(void) ;
#line 218
extern char const __attribute__((__visibility__("default")))  *SDL_GetAudioDriver(int index ) ;
#line 229
extern int __attribute__((__visibility__("default")))  SDL_AudioInit(char const   *driver_name ) ;
#line 230
extern void __attribute__((__visibility__("default")))  SDL_AudioQuit(void) ;
#line 237
extern char const __attribute__((__visibility__("default")))  *SDL_GetCurrentAudioDriver(void) ;
#line 281
extern int __attribute__((__visibility__("default")))  SDL_OpenAudio(SDL_AudioSpec *desired ,
                                                                     SDL_AudioSpec *obtained ) ;
#line 307
extern int __attribute__((__visibility__("default")))  SDL_GetNumAudioDevices(int iscapture ) ;
#line 322
extern char const __attribute__((__visibility__("default")))  *SDL_GetAudioDeviceName(int index ,
                                                                                      int iscapture ) ;
#line 339
extern SDL_AudioDeviceID __attribute__((__visibility__("default")))  SDL_OpenAudioDevice(char const   *device ,
                                                                                         int iscapture ,
                                                                                         SDL_AudioSpec const   *desired ,
                                                                                         SDL_AudioSpec *obtained ,
                                                                                         int allowed_changes ) ;
#line 364
extern SDL_AudioStatus __attribute__((__visibility__("default")))  SDL_GetAudioStatus(void) ;
#line 366
extern SDL_AudioStatus __attribute__((__visibility__("default")))  SDL_GetAudioDeviceStatus(SDL_AudioDeviceID dev ) ;
#line 380
extern void __attribute__((__visibility__("default")))  SDL_PauseAudio(int pause_on ) ;
#line 381
extern void __attribute__((__visibility__("default")))  SDL_PauseAudioDevice(SDL_AudioDeviceID dev ,
                                                                             int pause_on ) ;
#line 404
extern SDL_AudioSpec __attribute__((__visibility__("default")))  *SDL_LoadWAV_RW(SDL_RWops *src ,
                                                                                 int freesrc ,
                                                                                 SDL_AudioSpec *spec ,
                                                                                 Uint8 **audio_buf ,
                                                                                 Uint32 *audio_len ) ;
#line 420
extern void __attribute__((__visibility__("default")))  SDL_FreeWAV(Uint8 *audio_buf ) ;
#line 431
extern int __attribute__((__visibility__("default")))  SDL_BuildAudioCVT(SDL_AudioCVT *cvt ,
                                                                         SDL_AudioFormat src_format ,
                                                                         Uint8 src_channels ,
                                                                         int src_rate ,
                                                                         SDL_AudioFormat dst_format ,
                                                                         Uint8 dst_channels ,
                                                                         int dst_rate ) ;
#line 449
extern int __attribute__((__visibility__("default")))  SDL_ConvertAudio(SDL_AudioCVT *cvt ) ;
#line 459
extern void __attribute__((__visibility__("default")))  SDL_MixAudio(Uint8 *dst ,
                                                                     Uint8 const   *src ,
                                                                     Uint32 len ,
                                                                     int volume ) ;
#line 467
extern void __attribute__((__visibility__("default")))  SDL_MixAudioFormat(Uint8 *dst ,
                                                                           Uint8 const   *src ,
                                                                           SDL_AudioFormat format ,
                                                                           Uint32 len ,
                                                                           int volume ) ;
#line 481
extern void __attribute__((__visibility__("default")))  SDL_LockAudio(void) ;
#line 482
extern void __attribute__((__visibility__("default")))  SDL_LockAudioDevice(SDL_AudioDeviceID dev ) ;
#line 483
extern void __attribute__((__visibility__("default")))  SDL_UnlockAudio(void) ;
#line 484
extern void __attribute__((__visibility__("default")))  SDL_UnlockAudioDevice(SDL_AudioDeviceID dev ) ;
#line 490
extern void __attribute__((__visibility__("default")))  SDL_CloseAudio(void) ;
#line 491
extern void __attribute__((__visibility__("default")))  SDL_CloseAudioDevice(SDL_AudioDeviceID dev ) ;
#line 496
extern int __attribute__((__visibility__("default")))  SDL_AudioDeviceConnected(SDL_AudioDeviceID dev ) ;
#line 48 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_clipboard.h"
extern int __attribute__((__visibility__("default")))  SDL_SetClipboardText(char const   *text ) ;
#line 55
extern char __attribute__((__visibility__("default")))  *SDL_GetClipboardText(void) ;
#line 62
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasClipboardText(void) ;
#line 84 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_cpuinfo.h"
extern int __attribute__((__visibility__("default")))  SDL_GetCPUCount(void) ;
#line 92
extern int __attribute__((__visibility__("default")))  SDL_GetCPUCacheLineSize(void) ;
#line 97
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasRDTSC(void) ;
#line 102
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasAltiVec(void) ;
#line 107
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasMMX(void) ;
#line 112
extern SDL_bool __attribute__((__visibility__("default")))  SDL_Has3DNow(void) ;
#line 117
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasSSE(void) ;
#line 122
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasSSE2(void) ;
#line 127
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasSSE3(void) ;
#line 132
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasSSE41(void) ;
#line 137
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasSSE42(void) ;
#line 295 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_pixels.h"
extern char const __attribute__((__visibility__("default")))  *SDL_GetPixelFormatName(Uint32 format ) ;
#line 304
extern SDL_bool __attribute__((__visibility__("default")))  SDL_PixelFormatEnumToMasks(Uint32 format ,
                                                                                       int *bpp ,
                                                                                       Uint32 *Rmask ,
                                                                                       Uint32 *Gmask ,
                                                                                       Uint32 *Bmask ,
                                                                                       Uint32 *Amask ) ;
#line 319
extern Uint32 __attribute__((__visibility__("default")))  SDL_MasksToPixelFormatEnum(int bpp ,
                                                                                     Uint32 Rmask ,
                                                                                     Uint32 Gmask ,
                                                                                     Uint32 Bmask ,
                                                                                     Uint32 Amask ) ;
#line 328
extern SDL_PixelFormat __attribute__((__visibility__("default")))  *SDL_AllocFormat(Uint32 pixel_format ) ;
#line 333
extern void __attribute__((__visibility__("default")))  SDL_FreeFormat(SDL_PixelFormat *format ) ;
#line 345
extern SDL_Palette __attribute__((__visibility__("default")))  *SDL_AllocPalette(int ncolors ) ;
#line 350
extern int __attribute__((__visibility__("default")))  SDL_SetPixelFormatPalette(SDL_PixelFormat *format ,
                                                                                 SDL_Palette *palette ) ;
#line 363
extern int __attribute__((__visibility__("default")))  SDL_SetPaletteColors(SDL_Palette *palette ,
                                                                            SDL_Color const   *colors ,
                                                                            int firstcolor ,
                                                                            int ncolors ) ;
#line 372
extern void __attribute__((__visibility__("default")))  SDL_FreePalette(SDL_Palette *palette ) ;
#line 379
extern Uint32 __attribute__((__visibility__("default")))  SDL_MapRGB(SDL_PixelFormat const   *format ,
                                                                     Uint8 r , Uint8 g ,
                                                                     Uint8 b ) ;
#line 387
extern Uint32 __attribute__((__visibility__("default")))  SDL_MapRGBA(SDL_PixelFormat const   *format ,
                                                                      Uint8 r , Uint8 g ,
                                                                      Uint8 b , Uint8 a ) ;
#line 396
extern void __attribute__((__visibility__("default")))  SDL_GetRGB(Uint32 pixel ,
                                                                   SDL_PixelFormat const   *format ,
                                                                   Uint8 *r , Uint8 *g ,
                                                                   Uint8 *b ) ;
#line 405
extern void __attribute__((__visibility__("default")))  SDL_GetRGBA(Uint32 pixel ,
                                                                    SDL_PixelFormat const   *format ,
                                                                    Uint8 *r , Uint8 *g ,
                                                                    Uint8 *b , Uint8 *a ) ;
#line 413
extern void __attribute__((__visibility__("default")))  SDL_CalculateGammaRamp(float gamma ,
                                                                               Uint16 *ramp ) ;
#line 87 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_rect.h"
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasIntersection(SDL_Rect const   *A ,
                                                                                SDL_Rect const   *B ) ;
#line 95
extern SDL_bool __attribute__((__visibility__("default")))  SDL_IntersectRect(SDL_Rect const   *A ,
                                                                              SDL_Rect const   *B ,
                                                                              SDL_Rect *result ) ;
#line 102
extern void __attribute__((__visibility__("default")))  SDL_UnionRect(SDL_Rect const   *A ,
                                                                      SDL_Rect const   *B ,
                                                                      SDL_Rect *result ) ;
#line 111
extern SDL_bool __attribute__((__visibility__("default")))  SDL_EnclosePoints(SDL_Point const   *points ,
                                                                              int count ,
                                                                              SDL_Rect const   *clip ,
                                                                              SDL_Rect *result ) ;
#line 121
extern SDL_bool __attribute__((__visibility__("default")))  SDL_IntersectRectAndLine(SDL_Rect const   *rect ,
                                                                                     int *X1 ,
                                                                                     int *Y1 ,
                                                                                     int *X2 ,
                                                                                     int *Y2 ) ;
#line 114 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_surface.h"
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_CreateRGBSurface(Uint32 flags ,
                                                                                     int width ,
                                                                                     int height ,
                                                                                     int depth ,
                                                                                     Uint32 Rmask ,
                                                                                     Uint32 Gmask ,
                                                                                     Uint32 Bmask ,
                                                                                     Uint32 Amask ) ;
#line 117
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_CreateRGBSurfaceFrom(void *pixels ,
                                                                                         int width ,
                                                                                         int height ,
                                                                                         int depth ,
                                                                                         int pitch ,
                                                                                         Uint32 Rmask ,
                                                                                         Uint32 Gmask ,
                                                                                         Uint32 Bmask ,
                                                                                         Uint32 Amask ) ;
#line 126
extern void __attribute__((__visibility__("default")))  SDL_FreeSurface(SDL_Surface *surface ) ;
#line 135
extern int __attribute__((__visibility__("default")))  SDL_SetSurfacePalette(SDL_Surface *surface ,
                                                                             SDL_Palette *palette ) ;
#line 157
extern int __attribute__((__visibility__("default")))  SDL_LockSurface(SDL_Surface *surface ) ;
#line 159
extern void __attribute__((__visibility__("default")))  SDL_UnlockSurface(SDL_Surface *surface ) ;
#line 170
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_LoadBMP_RW(SDL_RWops *src ,
                                                                               int freesrc ) ;
#line 187
extern int __attribute__((__visibility__("default")))  SDL_SaveBMP_RW(SDL_Surface *surface ,
                                                                      SDL_RWops *dst ,
                                                                      int freedst ) ;
#line 206
extern int __attribute__((__visibility__("default")))  SDL_SetSurfaceRLE(SDL_Surface *surface ,
                                                                         int flag ) ;
#line 218
extern int __attribute__((__visibility__("default")))  SDL_SetColorKey(SDL_Surface *surface ,
                                                                       int flag ,
                                                                       Uint32 key ) ;
#line 231
extern int __attribute__((__visibility__("default")))  SDL_GetColorKey(SDL_Surface *surface ,
                                                                       Uint32 *key ) ;
#line 246
extern int __attribute__((__visibility__("default")))  SDL_SetSurfaceColorMod(SDL_Surface *surface ,
                                                                              Uint8 r ,
                                                                              Uint8 g ,
                                                                              Uint8 b ) ;
#line 262
extern int __attribute__((__visibility__("default")))  SDL_GetSurfaceColorMod(SDL_Surface *surface ,
                                                                              Uint8 *r ,
                                                                              Uint8 *g ,
                                                                              Uint8 *b ) ;
#line 276
extern int __attribute__((__visibility__("default")))  SDL_SetSurfaceAlphaMod(SDL_Surface *surface ,
                                                                              Uint8 alpha ) ;
#line 289
extern int __attribute__((__visibility__("default")))  SDL_GetSurfaceAlphaMod(SDL_Surface *surface ,
                                                                              Uint8 *alpha ) ;
#line 302
extern int __attribute__((__visibility__("default")))  SDL_SetSurfaceBlendMode(SDL_Surface *surface ,
                                                                               SDL_BlendMode blendMode ) ;
#line 315
extern int __attribute__((__visibility__("default")))  SDL_GetSurfaceBlendMode(SDL_Surface *surface ,
                                                                               SDL_BlendMode *blendMode ) ;
#line 331
extern SDL_bool __attribute__((__visibility__("default")))  SDL_SetClipRect(SDL_Surface *surface ,
                                                                            SDL_Rect const   *rect ) ;
#line 340
extern void __attribute__((__visibility__("default")))  SDL_GetClipRect(SDL_Surface *surface ,
                                                                        SDL_Rect *rect ) ;
#line 353
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_ConvertSurface(SDL_Surface *src ,
                                                                                   SDL_PixelFormat *fmt ,
                                                                                   Uint32 flags ) ;
#line 355
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_ConvertSurfaceFormat(SDL_Surface *src ,
                                                                                         Uint32 pixel_format ,
                                                                                         Uint32 flags ) ;
#line 361
extern int __attribute__((__visibility__("default")))  SDL_ConvertPixels(int width ,
                                                                         int height ,
                                                                         Uint32 src_format ,
                                                                         void const   *src ,
                                                                         int src_pitch ,
                                                                         Uint32 dst_format ,
                                                                         void *dst ,
                                                                         int dst_pitch ) ;
#line 377
extern int __attribute__((__visibility__("default")))  SDL_FillRect(SDL_Surface *dst ,
                                                                    SDL_Rect const   *rect ,
                                                                    Uint32 color ) ;
#line 379
extern int __attribute__((__visibility__("default")))  SDL_FillRects(SDL_Surface *dst ,
                                                                     SDL_Rect const   *rects ,
                                                                     int count , Uint32 color ) ;
#line 447
extern int __attribute__((__visibility__("default")))  SDL_UpperBlit(SDL_Surface *src ,
                                                                     SDL_Rect const   *srcrect ,
                                                                     SDL_Surface *dst ,
                                                                     SDL_Rect *dstrect ) ;
#line 455
extern int __attribute__((__visibility__("default")))  SDL_LowerBlit(SDL_Surface *src ,
                                                                     SDL_Rect *srcrect ,
                                                                     SDL_Surface *dst ,
                                                                     SDL_Rect *dstrect ) ;
#line 465
extern int __attribute__((__visibility__("default")))  SDL_SoftStretch(SDL_Surface *src ,
                                                                       SDL_Rect const   *srcrect ,
                                                                       SDL_Surface *dst ,
                                                                       SDL_Rect const   *dstrect ) ;
#line 476
extern int __attribute__((__visibility__("default")))  SDL_UpperBlitScaled(SDL_Surface *src ,
                                                                           SDL_Rect const   *srcrect ,
                                                                           SDL_Surface *dst ,
                                                                           SDL_Rect *dstrect ) ;
#line 484
extern int __attribute__((__visibility__("default")))  SDL_LowerBlitScaled(SDL_Surface *src ,
                                                                           SDL_Rect *srcrect ,
                                                                           SDL_Surface *dst ,
                                                                           SDL_Rect *dstrect ) ;
#line 196 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_video.h"
extern int __attribute__((__visibility__("default")))  SDL_GetNumVideoDrivers(void) ;
#line 206
extern char const __attribute__((__visibility__("default")))  *SDL_GetVideoDriver(int index ) ;
#line 222
extern int __attribute__((__visibility__("default")))  SDL_VideoInit(char const   *driver_name ) ;
#line 231
extern void __attribute__((__visibility__("default")))  SDL_VideoQuit(void) ;
#line 242
extern char const __attribute__((__visibility__("default")))  *SDL_GetCurrentVideoDriver(void) ;
#line 249
extern int __attribute__((__visibility__("default")))  SDL_GetNumVideoDisplays(void) ;
#line 259
extern int __attribute__((__visibility__("default")))  SDL_GetDisplayBounds(int displayIndex ,
                                                                            SDL_Rect *rect ) ;
#line 266
extern int __attribute__((__visibility__("default")))  SDL_GetNumDisplayModes(int displayIndex ) ;
#line 279
extern int __attribute__((__visibility__("default")))  SDL_GetDisplayMode(int displayIndex ,
                                                                          int modeIndex ,
                                                                          SDL_DisplayMode *mode ) ;
#line 285
extern int __attribute__((__visibility__("default")))  SDL_GetDesktopDisplayMode(int displayIndex ,
                                                                                 SDL_DisplayMode *mode ) ;
#line 290
extern int __attribute__((__visibility__("default")))  SDL_GetCurrentDisplayMode(int displayIndex ,
                                                                                 SDL_DisplayMode *mode ) ;
#line 313
extern SDL_DisplayMode __attribute__((__visibility__("default")))  *SDL_GetClosestDisplayMode(int displayIndex ,
                                                                                              SDL_DisplayMode const   *mode ,
                                                                                              SDL_DisplayMode *closest ) ;
#line 321
extern int __attribute__((__visibility__("default")))  SDL_GetWindowDisplay(SDL_Window *window ) ;
#line 336
extern int __attribute__((__visibility__("default")))  SDL_SetWindowDisplayMode(SDL_Window *window ,
                                                                                SDL_DisplayMode const   *mode ) ;
#line 347
extern int __attribute__((__visibility__("default")))  SDL_GetWindowDisplayMode(SDL_Window *window ,
                                                                                SDL_DisplayMode *mode ) ;
#line 353
extern Uint32 __attribute__((__visibility__("default")))  SDL_GetWindowPixelFormat(SDL_Window *window ) ;
#line 375
extern SDL_Window __attribute__((__visibility__("default")))  *SDL_CreateWindow(char const   *title ,
                                                                                int x ,
                                                                                int y ,
                                                                                int w ,
                                                                                int h ,
                                                                                Uint32 flags ) ;
#line 388
extern SDL_Window __attribute__((__visibility__("default")))  *SDL_CreateWindowFrom(void const   *data ) ;
#line 393
extern Uint32 __attribute__((__visibility__("default")))  SDL_GetWindowID(SDL_Window *window ) ;
#line 398
extern SDL_Window __attribute__((__visibility__("default")))  *SDL_GetWindowFromID(Uint32 id ) ;
#line 403
extern Uint32 __attribute__((__visibility__("default")))  SDL_GetWindowFlags(SDL_Window *window ) ;
#line 410
extern void __attribute__((__visibility__("default")))  SDL_SetWindowTitle(SDL_Window *window ,
                                                                           char const   *title ) ;
#line 418
extern char const __attribute__((__visibility__("default")))  *SDL_GetWindowTitle(SDL_Window *window ) ;
#line 425
extern void __attribute__((__visibility__("default")))  SDL_SetWindowIcon(SDL_Window *window ,
                                                                          SDL_Surface *icon ) ;
#line 441
extern void __attribute__((__visibility__("default")))  *SDL_SetWindowData(SDL_Window *window ,
                                                                           char const   *name ,
                                                                           void *userdata ) ;
#line 455
extern void __attribute__((__visibility__("default")))  *SDL_GetWindowData(SDL_Window *window ,
                                                                           char const   *name ) ;
#line 471
extern void __attribute__((__visibility__("default")))  SDL_SetWindowPosition(SDL_Window *window ,
                                                                              int x ,
                                                                              int y ) ;
#line 479
extern void __attribute__((__visibility__("default")))  SDL_GetWindowPosition(SDL_Window *window ,
                                                                              int *x ,
                                                                              int *y ) ;
#line 490
extern void __attribute__((__visibility__("default")))  SDL_SetWindowSize(SDL_Window *window ,
                                                                          int w ,
                                                                          int h ) ;
#line 498
extern void __attribute__((__visibility__("default")))  SDL_GetWindowSize(SDL_Window *window ,
                                                                          int *w ,
                                                                          int *h ) ;
#line 506
extern void __attribute__((__visibility__("default")))  SDL_ShowWindow(SDL_Window *window ) ;
#line 513
extern void __attribute__((__visibility__("default")))  SDL_HideWindow(SDL_Window *window ) ;
#line 518
extern void __attribute__((__visibility__("default")))  SDL_RaiseWindow(SDL_Window *window ) ;
#line 525
extern void __attribute__((__visibility__("default")))  SDL_MaximizeWindow(SDL_Window *window ) ;
#line 532
extern void __attribute__((__visibility__("default")))  SDL_MinimizeWindow(SDL_Window *window ) ;
#line 540
extern void __attribute__((__visibility__("default")))  SDL_RestoreWindow(SDL_Window *window ) ;
#line 550
extern int __attribute__((__visibility__("default")))  SDL_SetWindowFullscreen(SDL_Window *window ,
                                                                               SDL_bool fullscreen ) ;
#line 566
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_GetWindowSurface(SDL_Window *window ) ;
#line 576
extern int __attribute__((__visibility__("default")))  SDL_UpdateWindowSurface(SDL_Window *window ) ;
#line 586
extern int __attribute__((__visibility__("default")))  SDL_UpdateWindowSurfaceRects(SDL_Window *window ,
                                                                                    SDL_Rect *rects ,
                                                                                    int numrects ) ;
#line 597
extern void __attribute__((__visibility__("default")))  SDL_SetWindowGrab(SDL_Window *window ,
                                                                          SDL_bool grabbed ) ;
#line 607
extern SDL_bool __attribute__((__visibility__("default")))  SDL_GetWindowGrab(SDL_Window *window ) ;
#line 617
extern int __attribute__((__visibility__("default")))  SDL_SetWindowBrightness(SDL_Window *window ,
                                                                               float brightness ) ;
#line 626
extern float __attribute__((__visibility__("default")))  SDL_GetWindowBrightness(SDL_Window *window ) ;
#line 645
extern int __attribute__((__visibility__("default")))  SDL_SetWindowGammaRamp(SDL_Window *window ,
                                                                              Uint16 const   *red ,
                                                                              Uint16 const   *green ,
                                                                              Uint16 const   *blue ) ;
#line 664
extern int __attribute__((__visibility__("default")))  SDL_GetWindowGammaRamp(SDL_Window *window ,
                                                                              Uint16 *red ,
                                                                              Uint16 *green ,
                                                                              Uint16 *blue ) ;
#line 672
extern void __attribute__((__visibility__("default")))  SDL_DestroyWindow(SDL_Window *window ) ;
#line 681
extern SDL_bool __attribute__((__visibility__("default")))  SDL_IsScreenSaverEnabled(void) ;
#line 689
extern void __attribute__((__visibility__("default")))  SDL_EnableScreenSaver(void) ;
#line 697
extern void __attribute__((__visibility__("default")))  SDL_DisableScreenSaver(void) ;
#line 723
extern int __attribute__((__visibility__("default")))  SDL_GL_LoadLibrary(char const   *path ) ;
#line 728
extern void __attribute__((__visibility__("default")))  *SDL_GL_GetProcAddress(char const   *proc ) ;
#line 735
extern void __attribute__((__visibility__("default")))  SDL_GL_UnloadLibrary(void) ;
#line 741
extern SDL_bool __attribute__((__visibility__("default")))  SDL_GL_ExtensionSupported(char const   *extension ) ;
#line 747
extern int __attribute__((__visibility__("default")))  SDL_GL_SetAttribute(SDL_GLattr attr ,
                                                                           int value ) ;
#line 752
extern int __attribute__((__visibility__("default")))  SDL_GL_GetAttribute(SDL_GLattr attr ,
                                                                           int *value ) ;
#line 760
extern SDL_GLContext __attribute__((__visibility__("default")))  SDL_GL_CreateContext(SDL_Window *window ) ;
#line 768
extern int __attribute__((__visibility__("default")))  SDL_GL_MakeCurrent(SDL_Window *window ,
                                                                          SDL_GLContext context ) ;
#line 781
extern int __attribute__((__visibility__("default")))  SDL_GL_SetSwapInterval(int interval ) ;
#line 792
extern int __attribute__((__visibility__("default")))  SDL_GL_GetSwapInterval(void) ;
#line 798
extern void __attribute__((__visibility__("default")))  SDL_GL_SwapWindow(SDL_Window *window ) ;
#line 805
extern void __attribute__((__visibility__("default")))  SDL_GL_DeleteContext(SDL_GLContext context ) ;
#line 60 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_keyboard.h"
extern SDL_Window __attribute__((__visibility__("default")))  *SDL_GetKeyboardFocus(void) ;
#line 77
extern Uint8 __attribute__((__visibility__("default")))  *SDL_GetKeyboardState(int *numkeys ) ;
#line 82
extern SDL_Keymod __attribute__((__visibility__("default")))  SDL_GetModState(void) ;
#line 89
extern void __attribute__((__visibility__("default")))  SDL_SetModState(SDL_Keymod modstate ) ;
#line 99
extern SDL_Keycode __attribute__((__visibility__("default")))  SDL_GetKeyFromScancode(SDL_Scancode scancode ) ;
#line 109
extern SDL_Scancode __attribute__((__visibility__("default")))  SDL_GetScancodeFromKey(SDL_Keycode key ) ;
#line 121
extern char const __attribute__((__visibility__("default")))  *SDL_GetScancodeName(SDL_Scancode scancode ) ;
#line 134
extern char const __attribute__((__visibility__("default")))  *SDL_GetKeyName(SDL_Keycode key ) ;
#line 142
extern void __attribute__((__visibility__("default")))  SDL_StartTextInput(void) ;
#line 149
extern void __attribute__((__visibility__("default")))  SDL_StopTextInput(void) ;
#line 156
extern void __attribute__((__visibility__("default")))  SDL_SetTextInputRect(SDL_Rect *rect ) ;
#line 67 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_mouse.h"
extern SDL_Window __attribute__((__visibility__("default")))  *SDL_GetMouseFocus(void) ;
#line 77
extern Uint8 __attribute__((__visibility__("default")))  SDL_GetMouseState(int *x ,
                                                                           int *y ) ;
#line 86
extern Uint8 __attribute__((__visibility__("default")))  SDL_GetRelativeMouseState(int *x ,
                                                                                   int *y ) ;
#line 97
extern void __attribute__((__visibility__("default")))  SDL_WarpMouseInWindow(SDL_Window *window ,
                                                                              int x ,
                                                                              int y ) ;
#line 116
extern int __attribute__((__visibility__("default")))  SDL_SetRelativeMouseMode(SDL_bool enabled ) ;
#line 123
extern SDL_bool __attribute__((__visibility__("default")))  SDL_GetRelativeMouseMode(void) ;
#line 143
extern SDL_Cursor __attribute__((__visibility__("default")))  *SDL_CreateCursor(Uint8 const   *data ,
                                                                                Uint8 const   *mask ,
                                                                                int w ,
                                                                                int h ,
                                                                                int hot_x ,
                                                                                int hot_y ) ;
#line 153
extern SDL_Cursor __attribute__((__visibility__("default")))  *SDL_CreateColorCursor(SDL_Surface *surface ,
                                                                                     int hot_x ,
                                                                                     int hot_y ) ;
#line 160
extern void __attribute__((__visibility__("default")))  SDL_SetCursor(SDL_Cursor *cursor ) ;
#line 165
extern SDL_Cursor __attribute__((__visibility__("default")))  *SDL_GetCursor(void) ;
#line 172
extern void __attribute__((__visibility__("default")))  SDL_FreeCursor(SDL_Cursor *cursor ) ;
#line 182
extern int __attribute__((__visibility__("default")))  SDL_ShowCursor(int toggle ) ;
#line 59 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_joystick.h"
extern int __attribute__((__visibility__("default")))  SDL_NumJoysticks(void) ;
#line 66
extern char const __attribute__((__visibility__("default")))  *SDL_JoystickName(int device_index ) ;
#line 76
extern SDL_Joystick __attribute__((__visibility__("default")))  *SDL_JoystickOpen(int device_index ) ;
#line 81
extern int __attribute__((__visibility__("default")))  SDL_JoystickOpened(int device_index ) ;
#line 86
extern int __attribute__((__visibility__("default")))  SDL_JoystickIndex(SDL_Joystick *joystick ) ;
#line 91
extern int __attribute__((__visibility__("default")))  SDL_JoystickNumAxes(SDL_Joystick *joystick ) ;
#line 99
extern int __attribute__((__visibility__("default")))  SDL_JoystickNumBalls(SDL_Joystick *joystick ) ;
#line 104
extern int __attribute__((__visibility__("default")))  SDL_JoystickNumHats(SDL_Joystick *joystick ) ;
#line 109
extern int __attribute__((__visibility__("default")))  SDL_JoystickNumButtons(SDL_Joystick *joystick ) ;
#line 117
extern void __attribute__((__visibility__("default")))  SDL_JoystickUpdate(void) ;
#line 128
extern int __attribute__((__visibility__("default")))  SDL_JoystickEventState(int state ) ;
#line 137
extern Sint16 __attribute__((__visibility__("default")))  SDL_JoystickGetAxis(SDL_Joystick *joystick ,
                                                                              int axis ) ;
#line 171
extern Uint8 __attribute__((__visibility__("default")))  SDL_JoystickGetHat(SDL_Joystick *joystick ,
                                                                            int hat ) ;
#line 181
extern int __attribute__((__visibility__("default")))  SDL_JoystickGetBall(SDL_Joystick *joystick ,
                                                                           int ball ,
                                                                           int *dx ,
                                                                           int *dy ) ;
#line 189
extern Uint8 __attribute__((__visibility__("default")))  SDL_JoystickGetButton(SDL_Joystick *joystick ,
                                                                               int button ) ;
#line 195
extern void __attribute__((__visibility__("default")))  SDL_JoystickClose(SDL_Joystick *joystick ) ;
#line 67 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_touch.h"
extern int __attribute__((__visibility__("default")))  SDL_GetNumTouchDevices(void) ;
#line 72
extern SDL_TouchID __attribute__((__visibility__("default")))  SDL_GetTouchDevice(int index ) ;
#line 77
extern int __attribute__((__visibility__("default")))  SDL_GetNumTouchFingers(SDL_TouchID touchID ) ;
#line 82
extern SDL_Finger __attribute__((__visibility__("default")))  *SDL_GetTouchFinger(SDL_TouchID touchID ,
                                                                                  int index ) ;
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_gesture.h"
extern int __attribute__((__visibility__("default")))  SDL_RecordGesture(SDL_TouchID touchId ) ;
#line 63
extern int __attribute__((__visibility__("default")))  SDL_SaveAllDollarTemplates(SDL_RWops *src ) ;
#line 70
extern int __attribute__((__visibility__("default")))  SDL_SaveDollarTemplate(SDL_GestureID gestureId ,
                                                                              SDL_RWops *src ) ;
#line 78
extern int __attribute__((__visibility__("default")))  SDL_LoadDollarTemplates(SDL_TouchID touchId ,
                                                                               SDL_RWops *src ) ;
#line 477 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_events.h"
extern void __attribute__((__visibility__("default")))  SDL_PumpEvents(void) ;
#line 505
extern int __attribute__((__visibility__("default")))  SDL_PeepEvents(SDL_Event *events ,
                                                                      int numevents ,
                                                                      SDL_eventaction action ,
                                                                      Uint32 minType ,
                                                                      Uint32 maxType ) ;
#line 513
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasEvent(Uint32 type ) ;
#line 514
extern SDL_bool __attribute__((__visibility__("default")))  SDL_HasEvents(Uint32 minType ,
                                                                          Uint32 maxType ) ;
#line 519
extern void __attribute__((__visibility__("default")))  SDL_FlushEvent(Uint32 type ) ;
#line 520
extern void __attribute__((__visibility__("default")))  SDL_FlushEvents(Uint32 minType ,
                                                                        Uint32 maxType ) ;
#line 530
extern int __attribute__((__visibility__("default")))  SDL_PollEvent(SDL_Event *event ) ;
#line 540
extern int __attribute__((__visibility__("default")))  SDL_WaitEvent(SDL_Event *event ) ;
#line 551
extern int __attribute__((__visibility__("default")))  SDL_WaitEventTimeout(SDL_Event *event ,
                                                                            int timeout ) ;
#line 560
extern int __attribute__((__visibility__("default")))  SDL_PushEvent(SDL_Event *event ) ;
#line 589
extern void __attribute__((__visibility__("default")))  SDL_SetEventFilter(int (*filter)(void *userdata ,
                                                                                         SDL_Event *event ) ,
                                                                           void *userdata ) ;
#line 596
extern SDL_bool __attribute__((__visibility__("default")))  SDL_GetEventFilter(SDL_EventFilter *filter ,
                                                                               void **userdata ) ;
#line 602
extern void __attribute__((__visibility__("default")))  SDL_AddEventWatch(int (*filter)(void *userdata ,
                                                                                        SDL_Event *event ) ,
                                                                          void *userdata ) ;
#line 608
extern void __attribute__((__visibility__("default")))  SDL_DelEventWatch(int (*filter)(void *userdata ,
                                                                                        SDL_Event *event ) ,
                                                                          void *userdata ) ;
#line 615
extern void __attribute__((__visibility__("default")))  SDL_FilterEvents(int (*filter)(void *userdata ,
                                                                                       SDL_Event *event ) ,
                                                                         void *userdata ) ;
#line 623
extern void __attribute__((__visibility__("default")))  emscripten_SDL_SetEventHandler(int (*handler)(void *userdata ,
                                                                                                      SDL_Event *event ) ,
                                                                                       void *userdata ) ;
#line 641
extern Uint8 __attribute__((__visibility__("default")))  SDL_EventState(Uint32 type ,
                                                                        int state ) ;
#line 652
extern Uint32 __attribute__((__visibility__("default")))  SDL_RegisterEvents(int numevents ) ;
#line 168 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_hints.h"
extern SDL_bool __attribute__((__visibility__("default")))  SDL_SetHintWithPriority(char const   *name ,
                                                                                    char const   *value ,
                                                                                    SDL_HintPriority priority ) ;
#line 177
extern SDL_bool __attribute__((__visibility__("default")))  SDL_SetHint(char const   *name ,
                                                                        char const   *value ) ;
#line 186
extern char const __attribute__((__visibility__("default")))  *SDL_GetHint(char const   *name ) ;
#line 193
extern void __attribute__((__visibility__("default")))  SDL_ClearHints(void) ;
#line 60 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_loadso.h"
extern void __attribute__((__visibility__("default")))  *SDL_LoadObject(char const   *sofile ) ;
#line 67
extern void __attribute__((__visibility__("default")))  *SDL_LoadFunction(void *handle ,
                                                                          char const   *name ) ;
#line 73
extern void __attribute__((__visibility__("default")))  SDL_UnloadObject(void *handle ) ;
#line 115 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_log.h"
extern void __attribute__((__visibility__("default")))  SDL_LogSetAllPriority(SDL_LogPriority priority ) ;
#line 120
extern void __attribute__((__visibility__("default")))  SDL_LogSetPriority(int category ,
                                                                           SDL_LogPriority priority ) ;
#line 126
extern SDL_LogPriority __attribute__((__visibility__("default")))  SDL_LogGetPriority(int category ) ;
#line 133
extern void __attribute__((__visibility__("default")))  SDL_LogResetPriorities(void) ;
#line 138
extern void __attribute__((__visibility__("default")))  SDL_Log(char const   *fmt 
                                                                , ...) ;
#line 143
extern void __attribute__((__visibility__("default")))  SDL_LogVerbose(int category ,
                                                                       char const   *fmt 
                                                                       , ...) ;
#line 148
extern void __attribute__((__visibility__("default")))  SDL_LogDebug(int category ,
                                                                     char const   *fmt 
                                                                     , ...) ;
#line 153
extern void __attribute__((__visibility__("default")))  SDL_LogInfo(int category ,
                                                                    char const   *fmt 
                                                                    , ...) ;
#line 158
extern void __attribute__((__visibility__("default")))  SDL_LogWarn(int category ,
                                                                    char const   *fmt 
                                                                    , ...) ;
#line 163
extern void __attribute__((__visibility__("default")))  SDL_LogError(int category ,
                                                                     char const   *fmt 
                                                                     , ...) ;
#line 168
extern void __attribute__((__visibility__("default")))  SDL_LogCritical(int category ,
                                                                        char const   *fmt 
                                                                        , ...) ;
#line 173
extern void __attribute__((__visibility__("default")))  SDL_LogMessage(int category ,
                                                                       SDL_LogPriority priority ,
                                                                       char const   *fmt 
                                                                       , ...) ;
#line 180
extern void __attribute__((__visibility__("default")))  SDL_LogMessageV(int category ,
                                                                        SDL_LogPriority priority ,
                                                                        char const   *fmt ,
                                                                        va_list___0 ap ) ;
#line 192
extern void __attribute__((__visibility__("default")))  SDL_LogGetOutputFunction(SDL_LogOutputFunction *callback ,
                                                                                 void **userdata ) ;
#line 198
extern void __attribute__((__visibility__("default")))  SDL_LogSetOutputFunction(void (*callback)(void *userdata ,
                                                                                                  int category ,
                                                                                                  SDL_LogPriority priority ,
                                                                                                  char const   *message ) ,
                                                                                 void *userdata ) ;
#line 67 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_power.h"
extern SDL_PowerState __attribute__((__visibility__("default")))  SDL_GetPowerInfo(int *secs ,
                                                                                   int *pct ) ;
#line 130 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_render.h"
extern int __attribute__((__visibility__("default")))  SDL_GetNumRenderDrivers(void) ;
#line 144
extern int __attribute__((__visibility__("default")))  SDL_GetRenderDriverInfo(int index ,
                                                                               SDL_RendererInfo *info ) ;
#line 161
extern SDL_Renderer __attribute__((__visibility__("default")))  *SDL_CreateRenderer(SDL_Window *window ,
                                                                                    int index ,
                                                                                    Uint32 flags ) ;
#line 174
extern SDL_Renderer __attribute__((__visibility__("default")))  *SDL_CreateSoftwareRenderer(SDL_Surface *surface ) ;
#line 179
extern SDL_Renderer __attribute__((__visibility__("default")))  *SDL_GetRenderer(SDL_Window *window ) ;
#line 184
extern int __attribute__((__visibility__("default")))  SDL_GetRendererInfo(SDL_Renderer *renderer ,
                                                                           SDL_RendererInfo *info ) ;
#line 203
extern SDL_Texture __attribute__((__visibility__("default")))  *SDL_CreateTexture(SDL_Renderer *renderer ,
                                                                                  Uint32 format ,
                                                                                  int access ,
                                                                                  int w ,
                                                                                  int h ) ;
#line 220
extern SDL_Texture __attribute__((__visibility__("default")))  *SDL_CreateTextureFromSurface(SDL_Renderer *renderer ,
                                                                                             SDL_Surface *surface ) ;
#line 235
extern int __attribute__((__visibility__("default")))  SDL_QueryTexture(SDL_Texture *texture ,
                                                                        Uint32 *format ,
                                                                        int *access ,
                                                                        int *w , int *h ) ;
#line 252
extern int __attribute__((__visibility__("default")))  SDL_SetTextureColorMod(SDL_Texture *texture ,
                                                                              Uint8 r ,
                                                                              Uint8 g ,
                                                                              Uint8 b ) ;
#line 268
extern int __attribute__((__visibility__("default")))  SDL_GetTextureColorMod(SDL_Texture *texture ,
                                                                              Uint8 *r ,
                                                                              Uint8 *g ,
                                                                              Uint8 *b ) ;
#line 283
extern int __attribute__((__visibility__("default")))  SDL_SetTextureAlphaMod(SDL_Texture *texture ,
                                                                              Uint8 alpha ) ;
#line 296
extern int __attribute__((__visibility__("default")))  SDL_GetTextureAlphaMod(SDL_Texture *texture ,
                                                                              Uint8 *alpha ) ;
#line 313
extern int __attribute__((__visibility__("default")))  SDL_SetTextureBlendMode(SDL_Texture *texture ,
                                                                               SDL_BlendMode blendMode ) ;
#line 326
extern int __attribute__((__visibility__("default")))  SDL_GetTextureBlendMode(SDL_Texture *texture ,
                                                                               SDL_BlendMode *blendMode ) ;
#line 342
extern int __attribute__((__visibility__("default")))  SDL_UpdateTexture(SDL_Texture *texture ,
                                                                         SDL_Rect const   *rect ,
                                                                         void const   *pixels ,
                                                                         int pitch ) ;
#line 361
extern int __attribute__((__visibility__("default")))  SDL_LockTexture(SDL_Texture *texture ,
                                                                       SDL_Rect const   *rect ,
                                                                       void **pixels ,
                                                                       int *pitch ) ;
#line 370
extern void __attribute__((__visibility__("default")))  SDL_UnlockTexture(SDL_Texture *texture ) ;
#line 382
extern int __attribute__((__visibility__("default")))  SDL_RenderSetViewport(SDL_Renderer *renderer ,
                                                                             SDL_Rect const   *rect ) ;
#line 388
extern void __attribute__((__visibility__("default")))  SDL_RenderGetViewport(SDL_Renderer *renderer ,
                                                                              SDL_Rect *rect ) ;
#line 402
extern int __attribute__((__visibility__("default")))  SDL_SetRenderDrawColor(SDL_Renderer *renderer ,
                                                                              Uint8 r ,
                                                                              Uint8 g ,
                                                                              Uint8 b ,
                                                                              Uint8 a ) ;
#line 417
extern int __attribute__((__visibility__("default")))  SDL_GetRenderDrawColor(SDL_Renderer *renderer ,
                                                                              Uint8 *r ,
                                                                              Uint8 *g ,
                                                                              Uint8 *b ,
                                                                              Uint8 *a ) ;
#line 433
extern int __attribute__((__visibility__("default")))  SDL_SetRenderDrawBlendMode(SDL_Renderer *renderer ,
                                                                                  SDL_BlendMode blendMode ) ;
#line 445
extern int __attribute__((__visibility__("default")))  SDL_GetRenderDrawBlendMode(SDL_Renderer *renderer ,
                                                                                  SDL_BlendMode *blendMode ) ;
#line 453
extern int __attribute__((__visibility__("default")))  SDL_RenderClear(SDL_Renderer *renderer ) ;
#line 463
extern int __attribute__((__visibility__("default")))  SDL_RenderDrawPoint(SDL_Renderer *renderer ,
                                                                           int x ,
                                                                           int y ) ;
#line 474
extern int __attribute__((__visibility__("default")))  SDL_RenderDrawPoints(SDL_Renderer *renderer ,
                                                                            SDL_Point const   *points ,
                                                                            int count ) ;
#line 488
extern int __attribute__((__visibility__("default")))  SDL_RenderDrawLine(SDL_Renderer *renderer ,
                                                                          int x1 ,
                                                                          int y1 ,
                                                                          int x2 ,
                                                                          int y2 ) ;
#line 499
extern int __attribute__((__visibility__("default")))  SDL_RenderDrawLines(SDL_Renderer *renderer ,
                                                                           SDL_Point const   *points ,
                                                                           int count ) ;
#line 510
extern int __attribute__((__visibility__("default")))  SDL_RenderDrawRect(SDL_Renderer *renderer ,
                                                                          SDL_Rect const   *rect ) ;
#line 521
extern int __attribute__((__visibility__("default")))  SDL_RenderDrawRects(SDL_Renderer *renderer ,
                                                                           SDL_Rect const   *rects ,
                                                                           int count ) ;
#line 533
extern int __attribute__((__visibility__("default")))  SDL_RenderFillRect(SDL_Renderer *renderer ,
                                                                          SDL_Rect const   *rect ) ;
#line 544
extern int __attribute__((__visibility__("default")))  SDL_RenderFillRects(SDL_Renderer *renderer ,
                                                                           SDL_Rect const   *rects ,
                                                                           int count ) ;
#line 559
extern int __attribute__((__visibility__("default")))  SDL_RenderCopy(SDL_Renderer *renderer ,
                                                                      SDL_Texture *texture ,
                                                                      SDL_Rect const   *srcrect ,
                                                                      SDL_Rect const   *dstrect ) ;
#line 578
extern int __attribute__((__visibility__("default")))  SDL_RenderReadPixels(SDL_Renderer *renderer ,
                                                                            SDL_Rect const   *rect ,
                                                                            Uint32 format ,
                                                                            void *pixels ,
                                                                            int pitch ) ;
#line 586
extern void __attribute__((__visibility__("default")))  SDL_RenderPresent(SDL_Renderer *renderer ) ;
#line 594
extern void __attribute__((__visibility__("default")))  SDL_DestroyTexture(SDL_Texture *texture ) ;
#line 602
extern void __attribute__((__visibility__("default")))  SDL_DestroyRenderer(SDL_Renderer *renderer ) ;
#line 47 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_timer.h"
extern Uint32 __attribute__((__visibility__("default")))  SDL_GetTicks(void) ;
#line 52
extern Uint64 __attribute__((__visibility__("default")))  SDL_GetPerformanceCounter(void) ;
#line 57
extern Uint64 __attribute__((__visibility__("default")))  SDL_GetPerformanceFrequency(void) ;
#line 62
extern void __attribute__((__visibility__("default")))  SDL_Delay(Uint32 ms ) ;
#line 84
extern SDL_TimerID __attribute__((__visibility__("default")))  SDL_AddTimer(Uint32 interval ,
                                                                            Uint32 (*callback)(Uint32 interval ,
                                                                                               void *param ) ,
                                                                            void *param ) ;
#line 95
extern SDL_bool __attribute__((__visibility__("default")))  SDL_RemoveTimer(SDL_TimerID t ) ;
#line 135 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_version.h"
extern void __attribute__((__visibility__("default")))  SDL_GetVersion(SDL_version *ver ) ;
#line 144
extern char const __attribute__((__visibility__("default")))  *SDL_GetRevision(void) ;
#line 153
extern int __attribute__((__visibility__("default")))  SDL_GetRevisionNumber(void) ;
#line 278 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL_compat.h"
extern SDL_version const __attribute__((__visibility__("default")))  *SDL_Linked_Version(void) ;
#line 279
extern char const __attribute__((__visibility__("default")))  *SDL_AudioDriverName(char *namebuf ,
                                                                                   int maxlen ) ;
#line 280
extern char const __attribute__((__visibility__("default")))  *SDL_VideoDriverName(char *namebuf ,
                                                                                   int maxlen ) ;
#line 281
extern SDL_VideoInfo const __attribute__((__visibility__("default")))  *SDL_GetVideoInfo(void) ;
#line 282
extern int __attribute__((__visibility__("default")))  SDL_VideoModeOK(int width ,
                                                                       int height ,
                                                                       int bpp , Uint32 flags ) ;
#line 285
extern SDL_Rect __attribute__((__visibility__("default")))  **SDL_ListModes(SDL_PixelFormat const   *format ,
                                                                            Uint32 flags ) ;
#line 287
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_SetVideoMode(int width ,
                                                                                 int height ,
                                                                                 int bpp ,
                                                                                 Uint32 flags ) ;
#line 289
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_GetVideoSurface(void) ;
#line 290
extern void __attribute__((__visibility__("default")))  SDL_UpdateRects(SDL_Surface *screen ,
                                                                        int numrects ,
                                                                        SDL_Rect *rects ) ;
#line 292
extern void __attribute__((__visibility__("default")))  SDL_UpdateRect(SDL_Surface *screen ,
                                                                       Sint32 x ,
                                                                       Sint32 y ,
                                                                       Uint32 w ,
                                                                       Uint32 h ) ;
#line 295
extern int __attribute__((__visibility__("default")))  SDL_Flip(SDL_Surface *screen ) ;
#line 296
extern int __attribute__((__visibility__("default")))  SDL_SetAlpha(SDL_Surface *surface ,
                                                                    Uint32 flag ,
                                                                    Uint8 alpha ) ;
#line 298
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_DisplayFormat(SDL_Surface *surface ) ;
#line 299
extern SDL_Surface __attribute__((__visibility__("default")))  *SDL_DisplayFormatAlpha(SDL_Surface *surface ) ;
#line 301
extern void __attribute__((__visibility__("default")))  SDL_WM_SetCaption(char const   *title ,
                                                                          char const   *icon ) ;
#line 303
extern void __attribute__((__visibility__("default")))  SDL_WM_GetCaption(char const   **title ,
                                                                          char const   **icon ) ;
#line 305
extern void __attribute__((__visibility__("default")))  SDL_WM_SetIcon(SDL_Surface *icon ,
                                                                       Uint8 *mask ) ;
#line 306
extern int __attribute__((__visibility__("default")))  SDL_WM_IconifyWindow(void) ;
#line 307
extern int __attribute__((__visibility__("default")))  SDL_WM_ToggleFullScreen(SDL_Surface *surface ) ;
#line 308
extern SDL_GrabMode __attribute__((__visibility__("default")))  SDL_WM_GrabInput(SDL_GrabMode mode ) ;
#line 309
extern int __attribute__((__visibility__("default")))  SDL_SetPalette(SDL_Surface *surface ,
                                                                      int flags ,
                                                                      SDL_Color const   *colors ,
                                                                      int firstcolor ,
                                                                      int ncolors ) ;
#line 313
extern int __attribute__((__visibility__("default")))  SDL_SetColors(SDL_Surface *surface ,
                                                                     SDL_Color const   *colors ,
                                                                     int firstcolor ,
                                                                     int ncolors ) ;
#line 316
extern int __attribute__((__visibility__("default")))  SDL_GetWMInfo(struct SDL_SysWMinfo *info ) ;
#line 317
extern Uint8 __attribute__((__visibility__("default")))  SDL_GetAppState(void) ;
#line 318
extern void __attribute__((__visibility__("default")))  SDL_WarpMouse(Uint16 x , Uint16 y ) ;
#line 319
extern SDL_Overlay __attribute__((__visibility__("default")))  *SDL_CreateYUVOverlay(int width ,
                                                                                     int height ,
                                                                                     Uint32 format ,
                                                                                     SDL_Surface *display ) ;
#line 324
extern int __attribute__((__visibility__("default")))  SDL_LockYUVOverlay(SDL_Overlay *overlay ) ;
#line 325
extern void __attribute__((__visibility__("default")))  SDL_UnlockYUVOverlay(SDL_Overlay *overlay ) ;
#line 326
extern int __attribute__((__visibility__("default")))  SDL_DisplayYUVOverlay(SDL_Overlay *overlay ,
                                                                             SDL_Rect *dstrect ) ;
#line 328
extern void __attribute__((__visibility__("default")))  SDL_FreeYUVOverlay(SDL_Overlay *overlay ) ;
#line 329
extern void __attribute__((__visibility__("default")))  SDL_GL_SwapBuffers(void) ;
#line 330
extern int __attribute__((__visibility__("default")))  SDL_SetGamma(float red , float green ,
                                                                    float blue ) ;
#line 331
extern int __attribute__((__visibility__("default")))  SDL_SetGammaRamp(Uint16 const   *red ,
                                                                        Uint16 const   *green ,
                                                                        Uint16 const   *blue ) ;
#line 334
extern int __attribute__((__visibility__("default")))  SDL_GetGammaRamp(Uint16 *red ,
                                                                        Uint16 *green ,
                                                                        Uint16 *blue ) ;
#line 336
extern int __attribute__((__visibility__("default")))  SDL_EnableKeyRepeat(int delay ,
                                                                           int interval ) ;
#line 337
extern void __attribute__((__visibility__("default")))  SDL_GetKeyRepeat(int *delay ,
                                                                         int *interval ) ;
#line 338
extern int __attribute__((__visibility__("default")))  SDL_EnableUNICODE(int enable ) ;
#line 349
extern int __attribute__((__visibility__("default")))  SDL_SetTimer(Uint32 interval ,
                                                                    Uint32 (*callback)(Uint32 interval ) ) ;
#line 351
extern int __attribute__((__visibility__("default")))  SDL_putenv(char const   *variable ) ;
#line 126 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/SDL/SDL.h"
extern int __attribute__((__visibility__("default")))  SDL_Init(Uint32 flags ) ;
#line 131
extern int __attribute__((__visibility__("default")))  SDL_InitSubSystem(Uint32 flags ) ;
#line 136
extern void __attribute__((__visibility__("default")))  SDL_QuitSubSystem(Uint32 flags ) ;
#line 144
extern Uint32 __attribute__((__visibility__("default")))  SDL_WasInit(Uint32 flags ) ;
#line 150
extern void __attribute__((__visibility__("default")))  SDL_Quit(void) ;
#line 29 "../asteroids/player.h"
void init_player(struct player *p___0 ) ;
#line 31
void draw_player(uint32_t *pixel_buffer , struct player *p___0 ) ;
#line 33
void shoot_bullet(struct player *p___0 ) ;
#line 35
void update_player(struct player *p___0 ) ;
#line 37
void bounds_player(struct player *p___0 ) ;
#line 39
void apply_force(struct vector2d *velocity , struct vector2d v ) ;
#line 41
void rotate_player(struct player *p___0 , float degrees ) ;
#line 43
struct vector2d get_direction(struct player *p___0 ) ;
#line 19 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/em_asm.h"
extern  __attribute__((__nothrow__)) int emscripten_asm_const_int(char const   *code ,
                                                                  char const   *arg_sigs 
                                                                  , ...) ;
#line 21
extern  __attribute__((__nothrow__)) void *emscripten_asm_const_ptr(char const   *code ,
                                                                    char const   *arg_sigs 
                                                                    , ...) ;
#line 23
extern  __attribute__((__nothrow__)) double emscripten_asm_const_double(char const   *code ,
                                                                        char const   *arg_sigs 
                                                                        , ...) ;
#line 26
extern  __attribute__((__nothrow__)) int emscripten_asm_const_int_sync_on_main_thread(char const   *code ,
                                                                                      char const   *arg_sigs 
                                                                                      , ...) ;
#line 29
extern  __attribute__((__nothrow__)) double emscripten_asm_const_double_sync_on_main_thread(char const   *code ,
                                                                                            char const   *arg_sigs 
                                                                                            , ...) ;
#line 33
extern  __attribute__((__nothrow__)) void emscripten_asm_const_async_on_main_thread(char const   *code ,
                                                                                    char const   *arg_sigs 
                                                                                    , ...) ;
#line 61 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/promise.h"
extern em_promise_t ( __attribute__((__warn_unused_result__)) emscripten_promise_create)(void) ;
#line 70
extern void emscripten_promise_destroy(em_promise_t promise ) ;
#line 79
extern void emscripten_promise_resolve(em_promise_t promise , em_promise_result_t result ,
                                       void *value ) ;
#line 88
extern em_promise_t ( __attribute__((__warn_unused_result__)) emscripten_promise_then)(em_promise_t promise ,
                                                                                       em_promise_result_t (*on_fulfilled)(void **result ,
                                                                                                                           void *data ,
                                                                                                                           void *value ) ,
                                                                                       em_promise_result_t (*on_rejected)(void **result ,
                                                                                                                          void *data ,
                                                                                                                          void *value ) ,
                                                                                       void *data ) ;
#line 100
extern em_promise_t ( __attribute__((__warn_unused_result__)) emscripten_promise_all)(em_promise_t *promises ,
                                                                                      void **results ,
                                                                                      size_t num_promises ) ;
#line 18 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/wget.h"
extern void emscripten_async_wget(char const   *url , char const   *file , void (*onload)(char const   * ) ,
                                  void (*onerror)(char const   * ) ) ;
#line 21
extern void emscripten_async_wget_data(char const   *url , void *arg , void (*onload)(void * ,
                                                                                      void * ,
                                                                                      int  ) ,
                                       void (*onerror)(void * ) ) ;
#line 26
extern int emscripten_async_wget2(char const   *url , char const   *file , char const   *requesttype ,
                                  char const   *param , void *arg , void (*onload)(unsigned int  ,
                                                                                   void * ,
                                                                                   char const   * ) ,
                                  void (*onerror)(unsigned int  , void * , int  ) ,
                                  void (*onprogress)(unsigned int  , void * , int  ) ) ;
#line 32
extern int emscripten_async_wget2_data(char const   *url , char const   *requesttype ,
                                       char const   *param , void *arg , int free ,
                                       void (*onload)(unsigned int  , void * , void * ,
                                                      unsigned int  ) , void (*onerror)(unsigned int  ,
                                                                                        void * ,
                                                                                        int  ,
                                                                                        char const   * ) ,
                                       void (*onprogress)(unsigned int  , void * ,
                                                          int  , int  ) ) ;
#line 34
extern void emscripten_async_wget2_abort(int handle ) ;
#line 38
extern void emscripten_wget(char const   *url , char const   *file ) ;
#line 39
extern void emscripten_wget_data(char const   *url , void **pbuffer , int *pnum ,
                                 int *perror ) ;
#line 35 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/emscripten/emscripten.h"
extern void emscripten_run_script(char const   *script ) ;
#line 36
extern int emscripten_run_script_int(char const   *script ) ;
#line 37
extern char *emscripten_run_script_string(char const   *script ) ;
#line 38
extern void emscripten_async_run_script(char const   *script , int millis ) ;
#line 39
extern void emscripten_async_load_script(char const   *script , void (*onload)(void) ,
                                         void (*onerror)(void) ) ;
#line 41
extern void emscripten_set_main_loop(void (*func)(void) , int fps , int simulate_infinite_loop ) ;
#line 47
extern int emscripten_set_main_loop_timing(int mode , int value ) ;
#line 48
extern void emscripten_get_main_loop_timing(int *mode , int *value ) ;
#line 49
extern void emscripten_set_main_loop_arg(void (*func)(void * ) , void *arg , int fps ,
                                         int simulate_infinite_loop ) ;
#line 50
extern void emscripten_pause_main_loop(void) ;
#line 51
extern void emscripten_resume_main_loop(void) ;
#line 52
extern void emscripten_cancel_main_loop(void) ;
#line 57
extern void emscripten_set_socket_error_callback(void *userData , void (*callback)(int fd ,
                                                                                   int err ,
                                                                                   char const   *msg ,
                                                                                   void *userData ) ) ;
#line 58
extern void emscripten_set_socket_open_callback(void *userData , void (*callback)(int fd ,
                                                                                  void *userData ) ) ;
#line 59
extern void emscripten_set_socket_listen_callback(void *userData , void (*callback)(int fd ,
                                                                                    void *userData ) ) ;
#line 60
extern void emscripten_set_socket_connection_callback(void *userData , void (*callback)(int fd ,
                                                                                        void *userData ) ) ;
#line 61
extern void emscripten_set_socket_message_callback(void *userData , void (*callback)(int fd ,
                                                                                     void *userData ) ) ;
#line 62
extern void emscripten_set_socket_close_callback(void *userData , void (*callback)(int fd ,
                                                                                   void *userData ) ) ;
#line 64
extern void _emscripten_push_main_loop_blocker(void (*func)(void * ) , void *arg ,
                                               char const   *name ) ;
#line 65
extern void _emscripten_push_uncounted_main_loop_blocker(void (*func)(void * ) , void *arg ,
                                                         char const   *name ) ;
#line 71
extern void emscripten_set_main_loop_expected_blockers(int num ) ;
#line 73
extern void emscripten_async_call(void (*func)(void * ) , void *arg , int millis ) ;
#line 75
extern  __attribute__((__noreturn__)) void emscripten_exit_with_live_runtime(void) ;
#line 76
extern  __attribute__((__noreturn__)) void emscripten_force_exit(int status ) ;
#line 78
extern double emscripten_get_device_pixel_ratio(void) ;
#line 80
extern char *emscripten_get_window_title() ;
#line 81
extern void emscripten_set_window_title(char const   * ) ;
#line 82
extern void emscripten_get_screen_size(int *width , int *height ) ;
#line 83
extern void emscripten_hide_mouse(void) ;
#line 84
extern void emscripten_set_canvas_size(int width , int height )  __attribute__((__deprecated__("This variant does not allow specifying the target canvas","Use emscripten_set_canvas_element_size() instead"))) ;
#line 85
extern void emscripten_get_canvas_size(int *width , int *height , int *isFullscreen )  __attribute__((__deprecated__("This variant does not allow specifying the target canvas","Use emscripten_get_canvas_element_size() and emscripten_get_fullscreen_status() instead"))) ;
#line 87
extern double emscripten_get_now(void) ;
#line 88
extern float emscripten_random(void) ;
#line 93
extern void emscripten_idb_async_load(char const   *db_name , char const   *file_id ,
                                      void *arg , void (*onload)(void * , void * ,
                                                                 int  ) , void (*onerror)(void * ) ) ;
#line 94
extern void emscripten_idb_async_store(char const   *db_name , char const   *file_id ,
                                       void *ptr , int num , void *arg , void (*onstore)(void * ) ,
                                       void (*onerror)(void * ) ) ;
#line 95
extern void emscripten_idb_async_delete(char const   *db_name , char const   *file_id ,
                                        void *arg , void (*ondelete)(void * ) , void (*onerror)(void * ) ) ;
#line 97
extern void emscripten_idb_async_exists(char const   *db_name , char const   *file_id ,
                                        void *arg , void (*oncheck)(void * , int  ) ,
                                        void (*onerror)(void * ) ) ;
#line 101
extern void emscripten_idb_load(char const   *db_name , char const   *file_id , void **pbuffer ,
                                int *pnum , int *perror ) ;
#line 102
extern void emscripten_idb_store(char const   *db_name , char const   *file_id , void *buffer ,
                                 int num , int *perror ) ;
#line 103
extern void emscripten_idb_delete(char const   *db_name , char const   *file_id ,
                                  int *perror ) ;
#line 104
extern void emscripten_idb_exists(char const   *db_name , char const   *file_id ,
                                  int *pexists , int *perror ) ;
#line 106
extern void emscripten_idb_load_blob(char const   *db_name , char const   *file_id ,
                                     int *pblob , int *perror ) ;
#line 107
extern void emscripten_idb_store_blob(char const   *db_name , char const   *file_id ,
                                      void *buffer , int num , int *perror ) ;
#line 108
extern void emscripten_idb_read_from_blob(int blob , int start , int num , void *buffer ) ;
#line 109
extern void emscripten_idb_free_blob(int blob ) ;
#line 113
extern int emscripten_run_preload_plugins(char const   *file , void (*onload)(char const   * ) ,
                                          void (*onerror)(char const   * ) ) ;
#line 116
extern void emscripten_run_preload_plugins_data(char *data , int size , char const   *suffix ,
                                                void *arg , void (*onload)(void * ,
                                                                           char const   * ) ,
                                                void (*onerror)(void * ) ) ;
#line 118
extern void emscripten_lazy_load_code(void) ;
#line 128
extern worker_handle emscripten_create_worker(char const   *url ) ;
#line 129
extern void emscripten_destroy_worker(worker_handle worker ) ;
#line 132
extern void emscripten_call_worker(worker_handle worker , char const   *funcname ,
                                   char *data , int size , void (*callback)(char * ,
                                                                            int  ,
                                                                            void * ) ,
                                   void *arg ) ;
#line 133
extern void emscripten_worker_respond(char *data , int size ) ;
#line 134
extern void emscripten_worker_respond_provisionally(char *data , int size ) ;
#line 136
extern int emscripten_get_worker_queue_size(worker_handle worker ) ;
#line 140
extern long emscripten_get_compiler_setting(char const   *name ) ;
#line 141
extern int emscripten_has_asyncify(void) ;
#line 143
extern void emscripten_debugger(void) ;
#line 149
extern char *emscripten_get_preloaded_image_data(char const   *path , int *w , int *h ) ;
#line 150
extern char *emscripten_get_preloaded_image_data_from_FILE(FILE___0 *file , int *w ,
                                                           int *h ) ;
#line 163
extern void emscripten_log(int flags , char const   *format  , ...) ;
#line 165
extern int emscripten_get_callstack(int flags , char *out , int maxbytes ) ;
#line 167
extern int emscripten_print_double(double x , char *to , int max ) ;
#line 170
extern void emscripten_scan_registers(void (*func)(void * , void * ) ) ;
#line 171
extern void emscripten_scan_stack(void (*func)(void * , void * ) ) ;
#line 176
extern void emscripten_dlopen(char const   *filename , int flags , void *user_data ,
                              void (*onsuccess)(void *handle , void *user_data ) ,
                              void (*onerror)(void * ) ) ;
#line 181
extern em_promise_t emscripten_dlopen_promise(char const   *filename , int flags ) ;
#line 183
extern void emscripten_throw_number(double number ) ;
#line 184
extern void emscripten_throw_string(char const   *utf8String ) ;
#line 190
extern void emscripten_sleep(unsigned int ms ) ;
#line 19 "../asteroids/main.c"
int init(int width , int height ) ;
#line 21 "../asteroids/main.c"
SDL_Window *window  =    (SDL_Window *)((void *)0);
#line 22 "../asteroids/main.c"
SDL_Renderer *renderer  ;
#line 23 "../asteroids/main.c"
SDL_Texture *screen  ;
#line 24 "../asteroids/main.c"
uint32_t *pixels  =    (uint32_t *)((void *)0);
#line 25 "../asteroids/main.c"
struct asteroid asteroids[27]  ;
#line 26 "../asteroids/main.c"
struct player p  ;
#line 27 "../asteroids/main.c"
struct player lives[3]  ;
#line 31 "../asteroids/main.c"
void mainloop(void) 
{ 
  int sleep ;
  int quit ;
  SDL_Event event ;
  Uint32 next_game_tick ;
  Uint32 __attribute__((__visibility__("default")))  tmp ;
  Uint8 const   *state ;
  Uint8 __attribute__((__visibility__("default")))  *tmp___0 ;
  struct vector2d thrust ;
  struct vector2d tmp___1 ;
  int __attribute__((__visibility__("default")))  tmp___2 ;
  int res ;
  int tmp___3 ;
  int i ;
  int i___0 ;
  struct vector2d translation ;
  struct vector2d world ;
  struct vector2d tmp___4 ;
  int index___0 ;
  int tmp___5 ;

  {
#line 34
  sleep = 0;
#line 35
  quit = 0;
#line 37
  tmp = SDL_GetTicks();
#line 37
  next_game_tick = (Uint32 )tmp;
#line 41
  SDL_PumpEvents();
#line 43
  tmp___0 = SDL_GetKeyboardState((int *)((void *)0));
#line 43
  state = (Uint8 const   *)tmp___0;
#line 45
  if (*(state + 41)) {
#line 46
    quit = 1;
  }
#line 49
  if (*(state + 82)) {
#line 50
    tmp___1 = get_direction(& p);
#line 50
    thrust = tmp___1;
#line 51
    multiply_vector(& thrust, (float ).06);
#line 52
    apply_force(& p.velocity, thrust);
  }
#line 55
  if (*(state + 80)) {
#line 56
    rotate_player(& p, (float )-4);
  }
#line 59
  if (*(state + 79)) {
#line 60
    rotate_player(& p, (float )4);
  }
#line 63
  while (1) {
#line 63
    tmp___2 = SDL_PollEvent(& event);
#line 63
    if (! tmp___2) {
#line 63
      break;
    }
#line 64
    switch (event.type) {
    case 768U: 
#line 66
    switch (event.key.keysym.sym) {
    case 32: 
#line 68
    if (p.lives > 0) {
#line 69
      shoot_bullet(& p);
    }
#line 71
    break;
    }
    }
  }
#line 77
  clear_pixels(pixels, (uint32_t )0);
#line 78
  draw_asteroids(pixels, asteroids, 27);
#line 79
  update_player(& p);
#line 80
  bounds_player(& p);
#line 81
  bounds_asteroids(asteroids, 27);
#line 83
  tmp___3 = collision_asteroids(asteroids, 27, & p.location, p.hit_radius);
#line 83
  res = tmp___3;
#line 85
  if (res != -1) {
#line 86
    (p.lives) --;
#line 87
    p.location.x = (float )0;
#line 88
    p.location.y = (float )0;
#line 89
    p.velocity.x = (float )0;
#line 90
    p.velocity.y = (float )0;
#line 92
    i = 2;
#line 93
    i = 3;
#line 93
    while (i >= 0) {
#line 94
      if (lives[i].lives > 0) {
#line 95
        lives[i].lives = 0;
#line 96
        break;
      }
#line 93
      i --;
    }
  }
#line 100
  draw_player(pixels, & p);
#line 101
  draw_player(pixels, & lives[0]);
#line 102
  draw_player(pixels, & lives[1]);
#line 103
  draw_player(pixels, & lives[2]);
#line 105
  i___0 = 0;
#line 106
  translation.x = (float )-320;
#line 106
  translation.y = (float )-240;
#line 108
  i___0 = 0;
#line 108
  while (i___0 < 3) {
#line 110
    if ((unsigned int )p.bullets[i___0].alive == 0U) {
#line 113
      tmp___4 = add_vector_new(& p.bullets[i___0].location, & translation);
#line 113
      world = tmp___4;
#line 114
      tmp___5 = collision_asteroids(asteroids, 27, & world, (float )1);
#line 114
      index___0 = tmp___5;
#line 117
      if (index___0 != -1) {
#line 118
        asteroids[index___0].alive = 0;
#line 119
        p.bullets[i___0].alive = (enum boolean )1;
#line 121
        if ((unsigned int )asteroids[index___0].size != 0U) {
#line 122
          spawn_asteroids(asteroids, 27, (int )asteroids[index___0].size, asteroids[index___0].location);
        }
      }
    }
#line 108
    i___0 ++;
  }
#line 128
  update_asteroids(asteroids, 27);
#line 131
  SDL_UpdateTexture(screen, (SDL_Rect const   *)((void *)0), (void const   *)pixels,
                    (int )(640UL * sizeof(Uint32 )));
#line 134
  SDL_RenderClear(renderer);
#line 135
  SDL_RenderCopy(renderer, screen, (SDL_Rect const   *)((void *)0), (SDL_Rect const   *)((void *)0));
#line 136
  SDL_RenderPresent(renderer);
#line 138
  if (quit == 1) {
#line 139
    emscripten_cancel_main_loop();
#line 142
    free((void *)pixels);
#line 145
    SDL_DestroyWindow(window);
#line 148
    SDL_Quit();
  }
#line 150
  return;
}
}
#line 152 "../asteroids/main.c"
int main(int argc , char **args ) 
{ 
  int tmp ;
  int i ;
  int j ;
  int offset ;
  struct vector2d translation ;
  struct vector2d top_left ;

  {
#line 155
  tmp = init(640, 480);
#line 155
  if (tmp == 1) {
#line 157
    return (0);
  }
#line 160
  i = 0;
#line 161
  j = 0;
#line 162
  offset = 0;
#line 163
  translation.x = (float )-320;
#line 163
  translation.y = (float )-240;
#line 166
  i = 0;
#line 166
  while (i < 3) {
#line 168
    init_player(& lives[i]);
#line 169
    lives[i].lives = 1;
#line 172
    j = 0;
#line 172
    while (j < 3) {
#line 174
      divide_vector(& lives[i].obj_vert[j], (float )2);
#line 172
      j ++;
    }
#line 178
    top_left.x = (float )(20 + offset);
#line 178
    top_left.y = (float )20;
#line 179
    add_vector(& top_left, & translation);
#line 180
    lives[i].location = top_left;
#line 181
    update_player(& lives[i]);
#line 182
    offset += 20;
#line 166
    i ++;
  }
#line 186
  init_player(& p);
#line 187
  init_asteroids(asteroids, 27);
#line 189
  emscripten_set_main_loop(& mainloop, 0, 1);
#line 191
  return (0);
}
}
#line 205
extern int ( /* missing proto */  SDL_CreateWindowAndRenderer)() ;
#line 194 "../asteroids/main.c"
int init(int width , int height ) 
{ 
  char const __attribute__((__visibility__("default")))  *tmp ;
  int __attribute__((__visibility__("default")))  tmp___0 ;
  SDL_Texture __attribute__((__visibility__("default")))  *tmp___1 ;
  void *tmp___2 ;
  char const __attribute__((__visibility__("default")))  *tmp___3 ;
  char const __attribute__((__visibility__("default")))  *tmp___4 ;

  {
#line 197
  tmp___0 = SDL_Init((Uint32 )32);
#line 197
  if (tmp___0 < (int __attribute__((__visibility__("default")))  )0) {
#line 199
    tmp = SDL_GetError();
#line 199
    printf((char const   * __restrict  )"SDL could not initialize! SDL_Error: %s\n",
           tmp);
#line 201
    return (1);
  }
#line 205
  SDL_CreateWindowAndRenderer(640, 480, 4, & window, & renderer);
#line 208
  tmp___1 = SDL_CreateTexture(renderer, (Uint32 )-2042224636, 1, 640, 480);
#line 208
  screen = (SDL_Texture *)tmp___1;
#line 211
  tmp___2 = malloc(307200UL * sizeof(Uint32 ));
#line 211
  pixels = (Uint32 *)tmp___2;
#line 214
  if ((unsigned int )window == (unsigned int )((void *)0)) {
#line 216
    tmp___3 = SDL_GetError();
#line 216
    printf((char const   * __restrict  )"Window could not be created! SDL_Error: %s\n",
           tmp___3);
#line 218
    return (1);
  }
#line 221
  if ((unsigned int )screen == (unsigned int )((void *)0)) {
#line 223
    tmp___4 = SDL_GetError();
#line 223
    printf((char const   * __restrict  )"Texture could not be created! SDL_Error: %s\n",
           tmp___4);
#line 225
    return (1);
  }
#line 228
  if ((unsigned int )pixels == (unsigned int )((void *)0)) {
#line 230
    printf((char const   * __restrict  )"Error allocating pixel buffer");
#line 232
    return (1);
  }
#line 235
  return (0);
}
}
#line 1 "cil-9Ts8uTSu.o"
#pragma merger("0","/tmp/cil-f1CnIZjz.i","-sUSE_SDL=2")
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned int __FLOAT_BITS___1(float __f ) 
{ 
  union __anonunion___u_477865197___1 __u ;

  {
#line 58
  __u.__f = __f;
#line 59
  return (__u.__i);
}
}
#line 61 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned long long __DOUBLE_BITS___1(double __f ) 
{ 
  union __anonunion___u_302425027___1 __u ;

  {
#line 64
  __u.__f = __f;
#line 65
  return (__u.__i);
}
}
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessf___1(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1(__x);
#line 108
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 108
    if (sizeof(__x) == sizeof(double )) {
#line 108
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1(__y);
#line 108
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 108
      if (sizeof(__y) == sizeof(double )) {
#line 108
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __isless___1(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 109
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 109
    if (sizeof(__x) == sizeof(double )) {
#line 109
      tmp___11 = __DOUBLE_BITS___1(__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 109
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 109
      if (sizeof(__y) == sizeof(double )) {
#line 109
        tmp___5 = __DOUBLE_BITS___1(__y);
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
__inline static int __islessl___1(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 110
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 110
    if (sizeof(__x) == sizeof(double )) {
#line 110
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 110
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 110
      if (sizeof(__y) == sizeof(double )) {
#line 110
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __islessequalf___1(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1(__x);
#line 111
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 111
    if (sizeof(__x) == sizeof(double )) {
#line 111
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1(__y);
#line 111
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 111
      if (sizeof(__y) == sizeof(double )) {
#line 111
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __islessequal___1(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 112
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 112
    if (sizeof(__x) == sizeof(double )) {
#line 112
      tmp___11 = __DOUBLE_BITS___1(__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 112
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 112
      if (sizeof(__y) == sizeof(double )) {
#line 112
        tmp___5 = __DOUBLE_BITS___1(__y);
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
__inline static int __islessequall___1(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 113
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 113
    if (sizeof(__x) == sizeof(double )) {
#line 113
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 113
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 113
      if (sizeof(__y) == sizeof(double )) {
#line 113
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __islessgreaterf___1(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1(__x);
#line 114
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 114
    if (sizeof(__x) == sizeof(double )) {
#line 114
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1(__y);
#line 114
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 114
      if (sizeof(__y) == sizeof(double )) {
#line 114
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __islessgreater___1(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 115
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 115
    if (sizeof(__x) == sizeof(double )) {
#line 115
      tmp___11 = __DOUBLE_BITS___1(__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 115
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 115
      if (sizeof(__y) == sizeof(double )) {
#line 115
        tmp___5 = __DOUBLE_BITS___1(__y);
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
__inline static int __islessgreaterl___1(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 116
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 116
    if (sizeof(__x) == sizeof(double )) {
#line 116
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 116
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 116
      if (sizeof(__y) == sizeof(double )) {
#line 116
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __isgreaterf___1(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1(__x);
#line 117
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 117
    if (sizeof(__x) == sizeof(double )) {
#line 117
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1(__y);
#line 117
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 117
      if (sizeof(__y) == sizeof(double )) {
#line 117
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __isgreater___1(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 118
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 118
    if (sizeof(__x) == sizeof(double )) {
#line 118
      tmp___11 = __DOUBLE_BITS___1(__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 118
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 118
      if (sizeof(__y) == sizeof(double )) {
#line 118
        tmp___5 = __DOUBLE_BITS___1(__y);
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
__inline static int __isgreaterl___1(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 119
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 119
    if (sizeof(__x) == sizeof(double )) {
#line 119
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 119
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 119
      if (sizeof(__y) == sizeof(double )) {
#line 119
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __isgreaterequalf___1(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1(__x);
#line 120
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 120
    if (sizeof(__x) == sizeof(double )) {
#line 120
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1(__y);
#line 120
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 120
      if (sizeof(__y) == sizeof(double )) {
#line 120
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
__inline static int __isgreaterequal___1(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 121
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 121
    if (sizeof(__x) == sizeof(double )) {
#line 121
      tmp___11 = __DOUBLE_BITS___1(__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 121
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 121
      if (sizeof(__y) == sizeof(double )) {
#line 121
        tmp___5 = __DOUBLE_BITS___1(__y);
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
__inline static int __isgreaterequall___1(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___1((float )__x);
#line 122
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 122
    if (sizeof(__x) == sizeof(double )) {
#line 122
      tmp___11 = __DOUBLE_BITS___1((double )__x);
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
      tmp___4 = __FLOAT_BITS___1((float )__y);
#line 122
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 122
      if (sizeof(__y) == sizeof(double )) {
#line 122
        tmp___5 = __DOUBLE_BITS___1((double )__y);
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
#line 9 "../asteroids/player.c"
void init_player(struct player *p___0 ) 
{ 
  int i ;
  struct vector2d translation ;

  {
#line 11
  i = 0;
#line 12
  translation.x = (float )320;
#line 12
  translation.y = (float )240;
#line 14
  p___0->hit_radius = (float )15;
#line 15
  p___0->lives = 3;
#line 16
  p___0->location.x = (float )0;
#line 17
  p___0->location.y = (float )0;
#line 18
  p___0->velocity.x = (float )0;
#line 19
  p___0->velocity.y = (float )0;
#line 20
  p___0->obj_vert[0].x = (float )0;
#line 21
  p___0->obj_vert[0].y = (float )1.5;
#line 22
  p___0->obj_vert[1].x = (float )-1;
#line 23
  p___0->obj_vert[1].y = (float )-1;
#line 24
  p___0->obj_vert[2].x = (float )1;
#line 25
  p___0->obj_vert[2].y = (float )-1;
#line 28
  i = 0;
#line 28
  while (i < 3) {
#line 30
    multiply_vector(& p___0->obj_vert[i], (float )-1);
#line 31
    multiply_vector(& p___0->obj_vert[i], (float )12);
#line 32
    add_vector(& p___0->world_vert[i], & p___0->obj_vert[i]);
#line 33
    add_vector(& p___0->world_vert[i], & translation);
#line 28
    i ++;
  }
#line 36
  i = 0;
#line 36
  while (i < 3) {
#line 38
    p___0->bullets[i].alive = (enum boolean )1;
#line 36
    i ++;
  }
#line 40
  return;
}
}
#line 42 "../asteroids/player.c"
void apply_force(struct vector2d *velocity , struct vector2d v ) 
{ 


  {
#line 44
  add_vector(velocity, & v);
#line 45
  return;
}
}
#line 47 "../asteroids/player.c"
struct vector2d get_direction(struct player *p___0 ) 
{ 
  struct vector2d direction ;

  {
#line 49
  direction = p___0->obj_vert[0];
#line 50
  normalise_vector(& direction);
#line 52
  return (direction);
}
}
#line 55 "../asteroids/player.c"
void shoot_bullet(struct player *p___0 ) 
{ 
  int i ;

  {
#line 57
  i = 0;
#line 59
  i = 0;
#line 59
  while (i < 3) {
#line 61
    if ((unsigned int )p___0->bullets[i].alive == 1U) {
#line 63
      p___0->bullets[i].alive = (enum boolean )0;
#line 64
      p___0->bullets[i].location = p___0->world_vert[0];
#line 65
      p___0->bullets[i].velocity = get_direction(p___0);
#line 66
      multiply_vector(& p___0->bullets[i].velocity, (float )4.1);
#line 67
      break;
    }
#line 59
    i ++;
  }
#line 70
  return;
}
}
#line 72 "../asteroids/player.c"
void draw_player(uint32_t *pixel_buffer , struct player *p___0 ) 
{ 
  int i ;

  {
#line 74
  i = 0;
#line 76
  if (p___0->lives > 0) {
#line 78
    draw_line(pixel_buffer, (int )p___0->world_vert[0].x, (int )p___0->world_vert[0].y,
              (int )p___0->world_vert[1].x, (int )p___0->world_vert[1].y, 4294967295U);
#line 79
    draw_line(pixel_buffer, (int )p___0->world_vert[1].x, (int )p___0->world_vert[1].y,
              (int )p___0->world_vert[2].x, (int )p___0->world_vert[2].y, 4294967295U);
#line 80
    draw_line(pixel_buffer, (int )p___0->world_vert[2].x, (int )p___0->world_vert[2].y,
              (int )p___0->world_vert[0].x, (int )p___0->world_vert[0].y, 4294967295U);
  }
#line 92
  i = 0;
#line 92
  while (i < 3) {
#line 94
    if ((unsigned int )p___0->bullets[i].alive == 0U) {
#line 96
      draw_pixel(pixel_buffer, (int )p___0->bullets[i].location.x, (int )p___0->bullets[i].location.y,
                 4294967295U);
    }
#line 92
    i ++;
  }
#line 108
  return;
}
}
#line 110 "../asteroids/player.c"
void update_player(struct player *p___0 ) 
{ 
  struct vector2d translation ;
  int i ;

  {
#line 112
  limit_vector(& p___0->velocity, (float )2);
#line 113
  add_vector(& p___0->location, & p___0->velocity);
#line 115
  translation.x = (float )320;
#line 115
  translation.y = (float )240;
#line 117
  i = 0;
#line 119
  i = 0;
#line 119
  while (i < 3) {
#line 121
    p___0->world_vert[i] = add_vector_new(& p___0->obj_vert[i], & p___0->location);
#line 122
    add_vector(& p___0->world_vert[i], & translation);
#line 119
    i ++;
  }
#line 125
  i = 0;
#line 125
  while (i < 3) {
#line 127
    add_vector(& p___0->bullets[i].location, & p___0->bullets[i].velocity);
#line 125
    i ++;
  }
#line 129
  return;
}
}
#line 131 "../asteroids/player.c"
void rotate_player(struct player *p___0 , float degrees ) 
{ 
  int i ;

  {
#line 133
  i = 0;
#line 135
  i = 0;
#line 135
  while (i < 3) {
#line 137
    rotate_vector(& p___0->obj_vert[i], degrees);
#line 135
    i ++;
  }
#line 139
  return;
}
}
#line 141 "../asteroids/player.c"
void bounds_player(struct player *p___0 ) 
{ 
  int i ;

  {
#line 143
  i = 0;
#line 145
  if (p___0->location.x < (float )-320) {
#line 147
    p___0->location.x = (float )320;
  }
#line 150
  if (p___0->location.x > (float )320) {
#line 152
    p___0->location.x = (float )-320;
  }
#line 155
  if (p___0->location.y < (float )-240) {
#line 157
    p___0->location.y = (float )240;
  }
#line 160
  if (p___0->location.y > (float )240) {
#line 162
    p___0->location.y = (float )-240;
  }
#line 167
  i = 0;
#line 167
  while (i < 3) {
#line 169
    if (p___0->bullets[i].location.x < (float )0) {
#line 171
      p___0->bullets[i].alive = (enum boolean )1;
    } else
#line 169
    if (p___0->bullets[i].location.x >= (float )640) {
#line 171
      p___0->bullets[i].alive = (enum boolean )1;
    }
#line 174
    if (p___0->bullets[i].location.y < (float )0) {
#line 176
      p___0->bullets[i].alive = (enum boolean )1;
    } else
#line 174
    if (p___0->bullets[i].location.y >= (float )480) {
#line 176
      p___0->bullets[i].alive = (enum boolean )1;
    }
#line 167
    i ++;
  }
#line 179
  return;
}
}
#line 1 "cil-m38V6NJS.o"
#pragma merger("0","/tmp/cil-_cQJmEHO.i","-sUSE_SDL=2")
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned int __FLOAT_BITS___2(float __f ) 
{ 
  union __anonunion___u_477865197___2 __u ;

  {
#line 58
  __u.__f = __f;
#line 59
  return (__u.__i);
}
}
#line 61 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned long long __DOUBLE_BITS___2(double __f ) 
{ 
  union __anonunion___u_302425027___2 __u ;

  {
#line 64
  __u.__f = __f;
#line 65
  return (__u.__i);
}
}
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessf___2(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2(__x);
#line 108
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 108
    if (sizeof(__x) == sizeof(double )) {
#line 108
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2(__y);
#line 108
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 108
      if (sizeof(__y) == sizeof(double )) {
#line 108
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __isless___2(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 109
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 109
    if (sizeof(__x) == sizeof(double )) {
#line 109
      tmp___11 = __DOUBLE_BITS___2(__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 109
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 109
      if (sizeof(__y) == sizeof(double )) {
#line 109
        tmp___5 = __DOUBLE_BITS___2(__y);
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
__inline static int __islessl___2(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 110
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 110
    if (sizeof(__x) == sizeof(double )) {
#line 110
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 110
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 110
      if (sizeof(__y) == sizeof(double )) {
#line 110
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __islessequalf___2(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2(__x);
#line 111
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 111
    if (sizeof(__x) == sizeof(double )) {
#line 111
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2(__y);
#line 111
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 111
      if (sizeof(__y) == sizeof(double )) {
#line 111
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __islessequal___2(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 112
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 112
    if (sizeof(__x) == sizeof(double )) {
#line 112
      tmp___11 = __DOUBLE_BITS___2(__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 112
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 112
      if (sizeof(__y) == sizeof(double )) {
#line 112
        tmp___5 = __DOUBLE_BITS___2(__y);
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
__inline static int __islessequall___2(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 113
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 113
    if (sizeof(__x) == sizeof(double )) {
#line 113
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 113
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 113
      if (sizeof(__y) == sizeof(double )) {
#line 113
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __islessgreaterf___2(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2(__x);
#line 114
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 114
    if (sizeof(__x) == sizeof(double )) {
#line 114
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2(__y);
#line 114
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 114
      if (sizeof(__y) == sizeof(double )) {
#line 114
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __islessgreater___2(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 115
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 115
    if (sizeof(__x) == sizeof(double )) {
#line 115
      tmp___11 = __DOUBLE_BITS___2(__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 115
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 115
      if (sizeof(__y) == sizeof(double )) {
#line 115
        tmp___5 = __DOUBLE_BITS___2(__y);
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
__inline static int __islessgreaterl___2(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 116
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 116
    if (sizeof(__x) == sizeof(double )) {
#line 116
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 116
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 116
      if (sizeof(__y) == sizeof(double )) {
#line 116
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __isgreaterf___2(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2(__x);
#line 117
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 117
    if (sizeof(__x) == sizeof(double )) {
#line 117
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2(__y);
#line 117
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 117
      if (sizeof(__y) == sizeof(double )) {
#line 117
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __isgreater___2(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 118
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 118
    if (sizeof(__x) == sizeof(double )) {
#line 118
      tmp___11 = __DOUBLE_BITS___2(__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 118
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 118
      if (sizeof(__y) == sizeof(double )) {
#line 118
        tmp___5 = __DOUBLE_BITS___2(__y);
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
__inline static int __isgreaterl___2(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 119
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 119
    if (sizeof(__x) == sizeof(double )) {
#line 119
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 119
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 119
      if (sizeof(__y) == sizeof(double )) {
#line 119
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __isgreaterequalf___2(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2(__x);
#line 120
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 120
    if (sizeof(__x) == sizeof(double )) {
#line 120
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2(__y);
#line 120
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 120
      if (sizeof(__y) == sizeof(double )) {
#line 120
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
__inline static int __isgreaterequal___2(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 121
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 121
    if (sizeof(__x) == sizeof(double )) {
#line 121
      tmp___11 = __DOUBLE_BITS___2(__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 121
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 121
      if (sizeof(__y) == sizeof(double )) {
#line 121
        tmp___5 = __DOUBLE_BITS___2(__y);
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
__inline static int __isgreaterequall___2(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___2((float )__x);
#line 122
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 122
    if (sizeof(__x) == sizeof(double )) {
#line 122
      tmp___11 = __DOUBLE_BITS___2((double )__x);
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
      tmp___4 = __FLOAT_BITS___2((float )__y);
#line 122
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 122
      if (sizeof(__y) == sizeof(double )) {
#line 122
        tmp___5 = __DOUBLE_BITS___2((double )__y);
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
#line 7 "../asteroids/renderer.c"
int draw_line(uint32_t *pixel_buffer , int x1 , int y1___0 , int x2 , int y2 , uint32_t colour ) 
{ 
  int temp_x ;
  int temp_y ;
  int dx ;
  int dy ;
  float slope ;
  float ideal_y ;
  int y ;
  double tmp ;
  float error ;
  int i ;
  int x ;
  float ideal_y___0 ;
  int y___0 ;
  double tmp___0 ;
  float error___0 ;
  int i___0 ;
  int x___0 ;
  double tmp___1 ;
  float slope___0 ;
  float ideal_x ;
  int x___1 ;
  double tmp___2 ;
  float error___1 ;
  int i___1 ;
  int y___1 ;
  float ideal_x___0 ;
  int x___2 ;
  double tmp___3 ;
  float error___2 ;
  int i___2 ;
  int y___2 ;
  double tmp___4 ;
  double tmp___5 ;

  {
#line 11
  draw_pixel(pixel_buffer, x1, y1___0, colour);
#line 14
  if (x1 > x2) {
#line 16
    temp_x = x1;
#line 17
    temp_y = y1___0;
#line 19
    x1 = x2;
#line 20
    y1___0 = y2;
#line 22
    x2 = temp_x;
#line 23
    y2 = temp_y;
  }
#line 26
  dx = x2 - x1;
#line 27
  dy = y2 - y1___0;
#line 30
  tmp___1 = fabs((double )dy);
#line 30
  if ((double )dx >= tmp___1) {
#line 32
    slope = (float )dy / (float )dx;
#line 35
    if (y1___0 <= y2) {
#line 37
      ideal_y = (float )y1___0 + slope;
#line 38
      tmp = round((double )ideal_y);
#line 38
      y = (int )tmp;
#line 39
      error = ideal_y - (float )y;
#line 41
      i = 0;
#line 44
      i = 1;
#line 44
      while (i <= dx) {
#line 46
        x = x1 + i;
#line 48
        draw_pixel(pixel_buffer, x, y, colour);
#line 50
        error += slope;
#line 52
        if ((double )error >= 0.5) {
#line 54
          y ++;
#line 55
          error -= (float )1;
        }
#line 44
        i ++;
      }
    }
#line 61
    if (y1___0 > y2) {
#line 63
      ideal_y___0 = (float )y1___0 + slope;
#line 64
      tmp___0 = round((double )ideal_y___0);
#line 64
      y___0 = (int )tmp___0;
#line 65
      error___0 = ideal_y___0 - (float )y___0;
#line 67
      i___0 = 0;
#line 70
      i___0 = 1;
#line 70
      while (i___0 <= dx) {
#line 72
        x___0 = x1 + i___0;
#line 74
        draw_pixel(pixel_buffer, x___0, y___0, colour);
#line 76
        error___0 += slope;
#line 78
        if ((double )error___0 <= - 0.5) {
#line 80
          y___0 --;
#line 81
          error___0 += (float )1;
        }
#line 70
        i___0 ++;
      }
    }
  }
#line 90
  tmp___5 = fabs((double )dy);
#line 90
  if (tmp___5 > (double )dx) {
#line 92
    slope___0 = (float )dx / (float )dy;
#line 95
    if (y1___0 < y2) {
#line 97
      ideal_x = (float )x1 + slope___0;
#line 98
      tmp___2 = round((double )ideal_x);
#line 98
      x___1 = (int )tmp___2;
#line 99
      error___1 = ideal_x - (float )x___1;
#line 101
      i___1 = 0;
#line 104
      i___1 = 1;
#line 104
      while (i___1 <= dy) {
#line 106
        y___1 = y1___0 + i___1;
#line 108
        draw_pixel(pixel_buffer, x___1, y___1, colour);
#line 110
        error___1 += slope___0;
#line 112
        if ((double )error___1 >= 0.5) {
#line 114
          x___1 ++;
#line 115
          error___1 -= (float )1;
        }
#line 104
        i___1 ++;
      }
    }
#line 121
    if (y1___0 > y2) {
#line 123
      ideal_x___0 = (float )x1 - slope___0;
#line 124
      tmp___3 = round((double )ideal_x___0);
#line 124
      x___2 = (int )tmp___3;
#line 125
      error___2 = ideal_x___0 - (float )x___2;
#line 127
      i___2 = 0;
#line 130
      i___2 = 1;
#line 130
      while (1) {
#line 130
        tmp___4 = fabs((double )dy);
#line 130
        if (! ((double )i___2 <= tmp___4)) {
#line 130
          break;
        }
#line 132
        y___2 = y1___0 - i___2;
#line 134
        draw_pixel(pixel_buffer, x___2, y___2, colour);
#line 136
        error___2 += slope___0;
#line 138
        if ((double )error___2 <= - 0.5) {
#line 140
          x___2 ++;
#line 141
          error___2 += (float )1;
        }
#line 130
        i___2 ++;
      }
    }
  }
#line 147
  return (0);
}
}
#line 150 "../asteroids/renderer.c"
int draw_pixel(uint32_t *pixel_buffer , int x , int y , uint32_t colour ) 
{ 
  uint32_t position ;

  {
#line 153
  if (x < 0) {
#line 155
    return (1);
  } else
#line 153
  if (y < 0) {
#line 155
    return (1);
  }
#line 159
  if (x >= 640) {
#line 161
    return (1);
  } else
#line 159
  if (y >= 480) {
#line 161
    return (1);
  }
#line 164
  position = (uint32_t )(y * 640 + x);
#line 165
  *(pixel_buffer + position) = colour;
#line 167
  return (0);
}
}
#line 170 "../asteroids/renderer.c"
void clear_pixels(uint32_t *pixel_buffer , uint32_t colour ) 
{ 
  int i ;
  int buffer_size ;

  {
#line 172
  i = 0;
#line 173
  buffer_size = 307200;
#line 175
  i = 0;
#line 175
  while (i < buffer_size) {
#line 177
    *(pixel_buffer + i) = colour;
#line 175
    i ++;
  }
#line 179
  return;
}
}
#line 1 "cil-yMUuzTNA.o"
#pragma merger("0","/tmp/cil-79UqWnJE.i","-sUSE_SDL=2")
#line 55 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned int __FLOAT_BITS___3(float __f ) 
{ 
  union __anonunion___u_477865197___3 __u ;

  {
#line 58
  __u.__f = __f;
#line 59
  return (__u.__i);
}
}
#line 61 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static unsigned long long __DOUBLE_BITS___3(double __f ) 
{ 
  union __anonunion___u_302425027___3 __u ;

  {
#line 64
  __u.__f = __f;
#line 65
  return (__u.__i);
}
}
#line 108 "/usr/lib/emsdk/upstream/emscripten/cache/sysroot/include/math.h"
__inline static int __islessf___3(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3(__x);
#line 108
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 108
    if (sizeof(__x) == sizeof(double )) {
#line 108
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3(__y);
#line 108
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 108
      if (sizeof(__y) == sizeof(double )) {
#line 108
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __isless___3(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 109
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 109
    if (sizeof(__x) == sizeof(double )) {
#line 109
      tmp___11 = __DOUBLE_BITS___3(__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 109
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 109
      if (sizeof(__y) == sizeof(double )) {
#line 109
        tmp___5 = __DOUBLE_BITS___3(__y);
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
__inline static int __islessl___3(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 110
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 110
    if (sizeof(__x) == sizeof(double )) {
#line 110
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 110
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 110
      if (sizeof(__y) == sizeof(double )) {
#line 110
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __islessequalf___3(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3(__x);
#line 111
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 111
    if (sizeof(__x) == sizeof(double )) {
#line 111
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3(__y);
#line 111
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 111
      if (sizeof(__y) == sizeof(double )) {
#line 111
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __islessequal___3(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 112
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 112
    if (sizeof(__x) == sizeof(double )) {
#line 112
      tmp___11 = __DOUBLE_BITS___3(__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 112
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 112
      if (sizeof(__y) == sizeof(double )) {
#line 112
        tmp___5 = __DOUBLE_BITS___3(__y);
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
__inline static int __islessequall___3(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 113
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 113
    if (sizeof(__x) == sizeof(double )) {
#line 113
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 113
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 113
      if (sizeof(__y) == sizeof(double )) {
#line 113
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __islessgreaterf___3(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3(__x);
#line 114
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 114
    if (sizeof(__x) == sizeof(double )) {
#line 114
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3(__y);
#line 114
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 114
      if (sizeof(__y) == sizeof(double )) {
#line 114
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __islessgreater___3(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 115
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 115
    if (sizeof(__x) == sizeof(double )) {
#line 115
      tmp___11 = __DOUBLE_BITS___3(__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 115
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 115
      if (sizeof(__y) == sizeof(double )) {
#line 115
        tmp___5 = __DOUBLE_BITS___3(__y);
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
__inline static int __islessgreaterl___3(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 116
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 116
    if (sizeof(__x) == sizeof(double )) {
#line 116
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 116
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 116
      if (sizeof(__y) == sizeof(double )) {
#line 116
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __isgreaterf___3(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3(__x);
#line 117
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 117
    if (sizeof(__x) == sizeof(double )) {
#line 117
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3(__y);
#line 117
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 117
      if (sizeof(__y) == sizeof(double )) {
#line 117
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __isgreater___3(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 118
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 118
    if (sizeof(__x) == sizeof(double )) {
#line 118
      tmp___11 = __DOUBLE_BITS___3(__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 118
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 118
      if (sizeof(__y) == sizeof(double )) {
#line 118
        tmp___5 = __DOUBLE_BITS___3(__y);
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
__inline static int __isgreaterl___3(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 119
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 119
    if (sizeof(__x) == sizeof(double )) {
#line 119
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 119
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 119
      if (sizeof(__y) == sizeof(double )) {
#line 119
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __isgreaterequalf___3(float_t __x , float_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3(__x);
#line 120
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 120
    if (sizeof(__x) == sizeof(double )) {
#line 120
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3(__y);
#line 120
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 120
      if (sizeof(__y) == sizeof(double )) {
#line 120
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
__inline static int __isgreaterequal___3(double_t __x , double_t __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 121
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 121
    if (sizeof(__x) == sizeof(double )) {
#line 121
      tmp___11 = __DOUBLE_BITS___3(__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 121
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 121
      if (sizeof(__y) == sizeof(double )) {
#line 121
        tmp___5 = __DOUBLE_BITS___3(__y);
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
__inline static int __isgreaterequall___3(long double __x , long double __y ) 
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
    tmp___10 = __FLOAT_BITS___3((float )__x);
#line 122
    tmp___14 = (tmp___10 & 2147483647U) > 2139095040U;
  } else {
#line 122
    if (sizeof(__x) == sizeof(double )) {
#line 122
      tmp___11 = __DOUBLE_BITS___3((double )__x);
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
      tmp___4 = __FLOAT_BITS___3((float )__y);
#line 122
      tmp___8 = (tmp___4 & 2147483647U) > 2139095040U;
    } else {
#line 122
      if (sizeof(__y) == sizeof(double )) {
#line 122
        tmp___5 = __DOUBLE_BITS___3((double )__y);
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
#line 9 "../asteroids/vector.c"
void add_vector(struct vector2d *a , struct vector2d *b ) 
{ 


  {
#line 11
  a->x += b->x;
#line 12
  a->y += b->y;
#line 13
  return;
}
}
#line 15 "../asteroids/vector.c"
struct vector2d add_vector_new(struct vector2d *a , struct vector2d *b ) 
{ 
  struct vector2d new ;

  {
#line 17
  new.x = a->x + b->x;
#line 17
  new.y = a->y + b->y;
#line 19
  return (new);
}
}
#line 22 "../asteroids/vector.c"
void multiply_vector(struct vector2d *v , float n ) 
{ 


  {
#line 24
  v->x *= n;
#line 25
  v->y *= n;
#line 26
  return;
}
}
#line 28 "../asteroids/vector.c"
void divide_vector(struct vector2d *v , float n ) 
{ 


  {
#line 30
  v->x /= n;
#line 31
  v->y /= n;
#line 32
  return;
}
}
#line 34 "../asteroids/vector.c"
void print_vector(struct vector2d *a ) 
{ 


  {
#line 36
  printf((char const   * __restrict  )"x = %f\n y = %f\n", (double )a->x, (double )a->y);
#line 37
  return;
}
}
#line 39 "../asteroids/vector.c"
float magnitude_vector(struct vector2d *v ) 
{ 
  float c2 ;
  double tmp ;
  double tmp___0 ;
  double tmp___1 ;

  {
#line 41
  tmp = pow((double )v->x, (double )2);
#line 41
  tmp___0 = pow((double )v->y, (double )2);
#line 41
  c2 = (float )(tmp + tmp___0);
#line 43
  tmp___1 = sqrt((double )c2);
#line 43
  return ((float )tmp___1);
}
}
#line 46 "../asteroids/vector.c"
void normalise_vector(struct vector2d *v ) 
{ 
  float mag ;
  float tmp ;

  {
#line 48
  tmp = magnitude_vector(v);
#line 48
  mag = tmp;
#line 50
  divide_vector(v, mag);
#line 51
  return;
}
}
#line 53 "../asteroids/vector.c"
void limit_vector(struct vector2d *v , float limit ) 
{ 
  float mag ;
  float tmp ;
  float ratio ;

  {
#line 55
  tmp = magnitude_vector(v);
#line 55
  mag = tmp;
#line 57
  if (mag > limit) {
#line 59
    ratio = limit / mag;
#line 60
    v->x *= ratio;
#line 61
    v->y *= ratio;
  }
#line 63
  return;
}
}
#line 65 "../asteroids/vector.c"
void rotate_vector(struct vector2d *v , float degrees ) 
{ 
  float angle ;
  float sine ;
  double tmp ;
  float cosine ;
  double tmp___0 ;
  float matrix[2][2] ;
  float x ;
  float y ;

  {
#line 68
  angle = (float )(((double )degrees * 3.14159265358979323846) / (double )180);
#line 69
  tmp = sin((double )angle);
#line 69
  sine = (float )tmp;
#line 70
  tmp___0 = cos((double )angle);
#line 70
  cosine = (float )tmp___0;
#line 73
  matrix[0][0] = cosine;
#line 73
  matrix[0][1] = - sine;
#line 73
  matrix[1][0] = sine;
#line 73
  matrix[1][1] = cosine;
#line 75
  x = v->x;
#line 76
  y = v->y;
#line 78
  v->x = matrix[0][0] * x + matrix[0][1] * y;
#line 79
  v->y = matrix[1][0] * x + matrix[1][1] * y;
#line 80
  return;
}
}
