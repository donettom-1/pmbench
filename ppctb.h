#ifndef __PPCTB_H__
#define __PPCTB_H__

#include <inttypes.h>

static inline uint32_t read_tbl(void) {
    uint32_t tbl;
    asm volatile("mfspr %0, 268" : "=r" (tbl)); // TBL is SPR 268
    return tbl;
}

// Function to read the Time Base Upper register
static inline uint32_t read_tbu(void) {
    uint32_t tbu;
    asm volatile("mfspr %0, 269" : "=r" (tbu)); // TBU is SPR 269
    return tbu;
}

uint64_t get_time_base(void);


#endif
