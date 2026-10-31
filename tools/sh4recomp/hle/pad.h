/* hle/pad.h - Maple controller (pd) host input for the recompiled Rayman 2 DC executable.
 *
 * What is replaced (all addresses guest VAs of assets/dc/1ST_READ.BIN; evidence = re_analysis/dc/decompiled.c FUN_8c0cf158/2d6/314/4ca/51a/54e/654/6c0):
 *   0x8C0CF158  pdInit(mode, workbuf, worksize)  -- NOT gdFsInit (hw_inventory.md 4.x mislabelled it): it clears the 1248-byte pd table at
 *                                                   0x8C2EB020, stores the polarity flag at 0x8C2EB560, sets trigger thresholds 0xC0/0xA0 and
 *                                                   gives every record the "(no device)" state. The SDK Maple DMA start (PTR 0x8C0CF214) is skipped.
 *   0x8C0CF54E  pdExecPeripheralServer poll -- refreshes the 24 records from the host pad state instead of the Maple driver.
 * 0x8C0CF654 (record address) and 0x8C0CF6C0 (type word) are NOT hooked: they only index the BSS tables written here.
 *
 * Guest tables (BSS, zero at boot):
 *   0x8C2EB020 + 0x34*i  record i (i = 0..23)           0x8C2EB500 + 4*i  u32 "type word" (0 = device present/unknown, 0xFF000000 = none)
 *   0x8C2EB560 u32 polarity (pdInit arg0; game passes 0 => digital masks are active-high)     0x8C2EB564/565 u8 trigger hi/lo thresholds (0xC0/0xA0)
 *   0x8C2EB566 + i, 0x8C2EB57E + i  u8 per-record trigger latches (LT / RT)
 * Record (0x34 bytes): +00 u32 caps copy, +04 u32 caps (function word, big-endian assembly of pdGetFunction data; standard pad = 0x000F06FE),
 *   +08 u32 digital state, +0C u32 ~state, +10 u32 pressed-edge, +14 u32 released-edge, +18 u16 RT, +1A u16 LT (0..255),
 *   +1C s16 joyX, +1E s16 joyY, +20 s16 joy2X, +22 s16 joy2Y (byte-0x80), +24 u32 ptr to 30-char device name, +2C u32 previous +08, +30 u32 pd driver state ptr.
 */
#ifndef HLE_PAD_H
#define HLE_PAD_H
#include "hle.h"

/* Digital buttons in the Maple controller bit order, positive logic (1 = pressed). Bit 16/17 (RT/LT as digital) are derived by the hook
 * from the analog trigger bytes with hysteresis, so they must not be set by the host. */
enum {
    PAD_C = 1u << 0, PAD_B = 1u << 1, PAD_A = 1u << 2, PAD_START = 1u << 3,
    PAD_UP = 1u << 4, PAD_DOWN = 1u << 5, PAD_LEFT = 1u << 6, PAD_RIGHT = 1u << 7,
    PAD_Z = 1u << 8, PAD_Y = 1u << 9, PAD_X = 1u << 10, PAD_D = 1u << 11
};
/* Analog bytes exactly as in the Maple frame: triggers 0..255 (0 = released), sticks 0..255 with 128 = centre. */
typedef struct { uint8_t rt, lt, joyx, joyy, joy2x, joy2y; } PadAnalog;

#define HLE_PAD_TABLE   0x8C2EB020u       /* record array base */
#define HLE_PAD_NAMEBUF 0x8C009800u       /* guest scratch (system area, see io.h) holding the 30-char device name + NUL */

void hle_pad_init(void);                  /* registers the two hooks; call AFTER boot.c's own hle_hook calls (later registration wins) */
void pad_set_state(uint32_t buttons, const PadAnalog *analog);   /* analog may be NULL = idle; thread-safe (seqlock) */
void pad_set_connected(int connected);    /* default 1: controller present in slot 0 */
void pad_get_state(uint32_t *buttons, PadAnalog *analog);
/* exported for the unit test */
void hle_pad_h_init(SH4Ctx *c);
void hle_pad_h_poll(SH4Ctx *c);
#endif
