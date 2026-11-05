/* r2prof.h - on-device sampling profiler for the recompiled guest (Vita build variant v9_prof, -DR2_PROF=1; compiled out otherwise).
 * Every guest function entry (HLE_ENTER, enter.h) pushes its address on a shadow stack and pops it again on any exit (GCC cleanup attribute); a sampler thread (r2prof.c) reads the stack
 * every ~1 ms and counts self (top of stack) and inclusive (anywhere in the top 48 frames) per function, plus where the game thread is when it is NOT running guest code
 * (r2p_state: 1 vsleep, 2 AICA lock wait, 3 sound tick, 4 file io, 5 blocked on the render thread).  Output: ux0:data/rayman2/prof.txt, one block per 10 s window.
 * Report: python3 tools/sh4recomp/hle/profreport.py prof.txt */
#ifndef R2PROF_H
#define R2PROF_H
#include <stdint.h>
#ifdef R2_PROF
extern uint32_t r2p_stk[512]; extern volatile uint32_t r2p_d; extern volatile int r2p_state;
static inline int r2p_enter_(uint32_t a) { uint32_t d = r2p_d; r2p_stk[d & 511u] = a; r2p_d = d + 1u; return 0; }
static inline void r2p_leave_(int *t) { (void)t; r2p_d = r2p_d - 1u; }
static inline int r2p_set_(int n) { int p = r2p_state; r2p_state = n; return p; }
#define R2P_SET(n) r2p_set_(n)
#define R2P_RESTORE(p) (r2p_state = (p))
void r2p_start(void);
#else
#define R2P_SET(n) (0)
#define R2P_RESTORE(p) ((void)(p))
#endif
#endif
