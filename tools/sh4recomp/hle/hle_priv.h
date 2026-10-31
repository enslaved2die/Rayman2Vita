#ifndef HLE_PRIV_H
#define HLE_PRIV_H
#include "hle.h"
typedef struct { uint32_t addr; hle_fn *slot; hle_fn orig; } HleHookEnt;
extern const HleHookEnt hle_hooktab[]; extern const unsigned hle_hooktab_n;
extern int hle_spy_n; void hle_spy_check(SH4Ctx *c, uint32_t addr);
void hle_note_hook(SH4Ctx *c, uint32_t addr);
/* PVR TA_LIST_INIT (0xA05F8144, bit31) observer: the TA restarts its parameter/list state, i.e. a new scene's TA stream begins. */
void hle_set_listinit_cb(void (*fn)(SH4Ctx *c));
#endif
