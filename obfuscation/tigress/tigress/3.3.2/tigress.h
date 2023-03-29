/* This is tigress.h */

/*******************************************************************************/
/* We don't support clang extensions.                                          */
/*  https://clang.llvm.org/docs/BlockLanguageSpec.html#the-block-type          */
/*******************************************************************************/

#ifdef __clang__ 
#undef __BLOCKS__
#endif

/*******************************************************************************/
/* We don't support C11 features.                                              */
/*  https://en.wikipedia.org/wiki/C11_(C_standard_revision)#Changes_from_C99   */
/*******************************************************************************/

#define _Noreturn

/*******************************************************************************/
/* User annotations.                                                           */
/*******************************************************************************/

#define TIGRESS_IDENT(x) x
#define TIGRESS_QUOTE(x) #x
#define TIGRESS_STR(x) TIGRESS_QUOTE(x)

#define TIGRESS_CHECKSUM_INSERT asm volatile ("##_ANNOTATION_CHECKSUM_INSERT");

#define TIGRESS_REGION_BEGIN(v) {asm volatile (TIGRESS_IDENT("##_ANNOTATION_REGION_BEGIN_") TIGRESS_STR(v))};
#define TIGRESS_REGION_END(v) {asm volatile (TIGRESS_IDENT("##_ANNOTATION_REGION_END_")TIGRESS_STR(v))};

#define TIGRESS_REGION(v,s) do {\
   asm volatile (TIGRESS_IDENT("##_ANNOTATION_REGION_BEGIN_") TIGRESS_STR(v)); \
   s \
} while (0)

#define TIGRESS_ENTROPY_UNINIT asm volatile ("##_ANNOTATION_ENTROPY-UNINIT");
#define TIGRESS_ENTROPY_VARIABLE(v) asm volatile (TIGRESS_IDENT("##_ANNOTATION_ENTROPY-VARIABLE_")TIGRESS_STR(v));
