#include "/usr/local/bin/tigress/3.3.2/tigress.h"
#ifndef GROESTL_H
#define GROESTL_H

#ifdef __cplusplus
extern "C" {
#endif

extern void groestl(const unsigned char *input,
    unsigned long long len,
    unsigned char *output);

#ifdef __cplusplus
}
#endif

#endif
