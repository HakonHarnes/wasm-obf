#include "/usr/local/bin/tigress/3.3.2/tigress.h"
#ifndef JH_H
#define JH_H
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void jh(unsigned bit_len, const uint8_t input[],
    size_t input_bit_length, uint8_t output[]);

#ifdef __cplusplus
}
#endif

#endif
