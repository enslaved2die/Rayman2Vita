/* hle/pad.c - Maple pd controller replacement. See pad.h for the guest table layout; reimplements FUN_8c0cf158 / FUN_8c0cf54e
 * (with FUN_8c0cf2d6, FUN_8c0cf314, FUN_8c0cf4ca, FUN_8c0cf51a inlined) on top of a host-supplied pad state.
 *
 * Mapping / deviations (all explicit):
 *  - Only pd index 0 can be connected. The original loop also treats indices >= 6 specially (r1/6 != 0 via the 0x8C067A9C divide helper:
 *    it only stores state+20 into +0x24 and skips the rest); here those records keep the "(no device)" name set by pdInit.
 *  - The original asks the SDK driver for the function word (0x8C0D8F0A) and the raw frame; here the function word is the fixed standard
 *    pad value 0x000F06FE (buttons FE|0600, RT, LT, joyX, joyY; no second stick) and the frame comes from pad_set_state().
 *  - FUN_8c0cf4ca's mode-1 conversion (FUN_8c0cf4a8, taken when SDK query 0x8C0D91F2(5) == 1) is not modelled (INFERRED not taken for a pad).
 *  - Record 1 (port A slot 1) is named "Visual Memory" while pad_set_vmu(1) is in effect (hle/vmu.c); everything else about it stays "(no device)".
 *  - Records 1..5 and 6..23 are "(no device)" with type word 0, as the original produces when the driver reports nothing in the slot (INFERRED:
 *    the driver's info bytes were not available; the type word for an empty slot depends on them).
 */
#include "pad.h"
#include <string.h>

enum {
    TBL = HLE_PAD_TABLE, NREC = 24, STRIDE = 0x34,
    TYPEWORDS = 0x8C2EB500, POLARITY = 0x8C2EB560, THR_HI = 0x8C2EB564, THR_LO = 0x8C2EB565, LATCH_LT = 0x8C2EB566, LATCH_RT = 0x8C2EB57E,
    PD_FLAG_A = 0x8C2EB014, PD_FLAG_B = 0x8C2EB018, PD_FLAG_C = 0x8C2EB01C, PD_BYTES = 1248,
    SDK_BASEPTR = 0x8C2F09FC,            /* *(u32*)this + 1100 + 120*i = SDK per-device state (FUN_8c0e4870) */
    STR_NO_DEVICE = 0x8C0F3034,          /* "(no device)" in the image data (FUN_8c0cf2d6 stores it at +0x24) */
    FLAG_RUN = 0x8C0F3030,               /* image data word == 1; poll returns immediately if 0 */
    CAP_STD = 0x000F06FEu
};
static const char NAME[31] = "Dreamcast Controller          ";   /* 30 chars + NUL */
static const char VNAME[31] = "Visual Memory                 ";   /* 30 chars + NUL: the string FUN_8c0881cc/8c088280 (Joystick.c) compares -> function mask 0x40 */
static volatile int g_vmu = 0;                                    /* record 1 (port A slot 1 = unit 4) reports a VMU; set by hle/vmu.c */

static volatile unsigned g_seq; static uint32_t g_buttons; static PadAnalog g_analog = { 0, 0, 128, 128, 128, 128 }; static volatile int g_conn = 1;

void pad_set_state(uint32_t buttons, const PadAnalog *a) {
    PadAnalog n = { 0, 0, 128, 128, 128, 128 }; if (a) n = *a;
    g_seq++; __sync_synchronize(); g_buttons = buttons & 0xFFFFu; g_analog = n; __sync_synchronize(); g_seq++;
}
void pad_get_state(uint32_t *b, PadAnalog *a) {
    unsigned s0, s1; uint32_t bb; PadAnalog aa;
    do { s0 = g_seq; __sync_synchronize(); bb = g_buttons; aa = g_analog; __sync_synchronize(); s1 = g_seq; } while ((s0 & 1) || s0 != s1);
    if (b) *b = bb; if (a) *a = aa;
}
void pad_set_connected(int c) { g_conn = c != 0; }
void pad_set_vmu(int present) { g_vmu = present != 0; }

static uint32_t sdk_state(uint32_t i) { return LD32(SDK_BASEPTR) + 1100u + 120u * i; }

/* FUN_8c0cf2d6 */
static void rec_no_device(uint32_t r) {
    int active_low = LD32(POLARITY) != 0;
    ST32(r + 0, 0); ST32(r + 4, 0);
    if (!active_low) { ST32(r + 8, 0); ST32(r + 12, 0xFFFFFFFFu); ST32(r + 16, 0); ST32(r + 20, 0); }
    else             { ST32(r + 8, 0xFFFFFFFFu); ST32(r + 12, 0); ST32(r + 16, 0xFFFFFFFFu); ST32(r + 20, 0xFFFFFFFFu); }
    ST16(r + 0x18, 0); ST16(r + 0x1A, 0); ST16(r + 0x22, 0); ST16(r + 0x20, 0); ST16(r + 0x1E, 0); ST16(r + 0x1C, 0);
    ST32(r + 0x28, 0); ST32(r + 0x24, STR_NO_DEVICE);
}

/* FUN_8c0cf4ca + FUN_8c0cf314 for a standard pad. idx selects the latch bytes. */
static void rec_pad(uint32_t r, uint32_t idx, uint32_t buttons, const PadAnalog *a) {
    uint32_t cap = CAP_STD, v = (~buttons & 0xFFFFu) | 0xFFFF0000u;
    ST32(r + 4, cap); ST32(r + 0, cap); ST32(r + 0x24, HLE_PAD_NAMEBUF);
    uint8_t hi = LD8(THR_HI), lo = LD8(THR_LO);
    /* LT (frame byte 11) -> bit 17, latch LATCH_LT+idx; RT (frame byte 10) -> bit 16, latch LATCH_RT+idx */
    struct { uint8_t val; uint32_t clear_mask, set_bit, latch; } t[2] = {
        { a->lt, 0xFFFDFFFFu, 0x00020000u, LATCH_LT + idx }, { a->rt, 0xFFFEFFFFu, 0x00010000u, LATCH_RT + idx } };
    for (int k = 0; k < 2; k++) {
        if (t[k].val >= hi) { v &= t[k].clear_mask; ST8(t[k].latch, 1); }
        else if (t[k].val > lo) { if (LD8(t[k].latch)) v &= t[k].clear_mask; }
        else { v |= t[k].set_bit; ST8(t[k].latch, 0); }
    }
    if (LD32(POLARITY) == 0) v ^= 0xFFFFFFFFu;
    ST32(r + 8, v);
    ST16(r + 0x18, (cap & 0x10000) ? a->rt : 0);
    ST16(r + 0x1A, (cap & 0x20000) ? a->lt : 0);
    ST16(r + 0x1C, (cap & 0x40000) ? (uint16_t)(int16_t)((int)a->joyx - 128) : 0);
    ST16(r + 0x1E, (cap & 0x80000) ? (uint16_t)(int16_t)((int)a->joyy - 128) : 0);
    ST16(r + 0x20, (cap & 0x100000) ? (uint16_t)(int16_t)((int)a->joy2x - 128) : 0);
    ST16(r + 0x22, (cap & 0x200000) ? (uint16_t)(int16_t)((int)a->joy2y - 128) : 0);
}

/* FUN_8c0cf158 */
void hle_pad_h_init(SH4Ctx *c) {
    uint32_t mode = R(4);
    ST32(POLARITY, mode); ST32(PD_FLAG_B, 0); ST32(PD_FLAG_A, 1); ST32(PD_FLAG_C, 0);
    for (uint32_t o = 0; o < PD_BYTES; o += 4) ST32(TBL + o, 0);       /* memset(0x8C2EB020, 0, 1248) */
    for (uint32_t i = 0; i < NREC; i++) {
        uint32_t r = TBL + i * STRIDE;
        ST32(r + 0x30, sdk_state(i));
        rec_no_device(r);
        ST32(TYPEWORDS + 4 * i, 0); ST8(LATCH_LT + i, 0); ST8(LATCH_RT + i, 0);
    }
    ST8(THR_HI, 0xC0); ST8(THR_LO, 0xA0);
    memcpy(hle_ptr(HLE_PAD_NAMEBUF), NAME, 30); ST8(HLE_PAD_NAMEBUF + 30, 0);
    memcpy(hle_ptr(HLE_PAD_VMUNAME), VNAME, 30); ST8(HLE_PAD_VMUNAME + 30, 0);
    hle_log("[pad] pdInit(mode=%u) -> table 0x%08x, 24 records, controller %s", mode, TBL, g_conn ? "connected" : "absent");
    R(0) = 0;
}

/* FUN_8c0cf54e */
void hle_pad_h_poll(SH4Ctx *c) {
    if (LD32(FLAG_RUN) == 0) return;
    uint32_t b; PadAnalog a; pad_get_state(&b, &a);
    for (uint32_t i = 0; i < NREC; i++) {
        uint32_t r = TBL + i * STRIDE, prev = LD32(r + 8);
        ST32(r + 0x30, sdk_state(i)); ST32(r + 0x2C, prev);
        ST32(TYPEWORDS + 4 * i, 0);
        if (i >= 6) continue;                                            /* original: only stores state+20 at +0x24 */
        if (i == 0 && g_conn) rec_pad(r, i, b, &a);
        else if (i == 1 && g_vmu) { rec_no_device(r); ST32(r + 0x24, HLE_PAD_VMUNAME); }   /* "Visual Memory" in A1: type word stays 0 (non-zero => classifier answers "unknown") */
        else rec_no_device(r);
        uint32_t cur = LD32(r + 8), inv = ~cur; ST32(r + 12, inv);
        uint32_t x = prev ^ cur;
        if (LD32(POLARITY) == 0) { ST32(r + 16, cur & x); ST32(r + 20, x & inv); }
        else { uint32_t y = x ^ 0xFFFFFFFFu; ST32(r + 16, cur | y); ST32(r + 20, y | inv); }
    }
    R(0) = 0;
}

/* FUN_8c088180: Menu directional input evaluation.
 * Original evaluates analog stick joyX/joyY and writes 4-way direction bits:
 *   bit 0 (0x1) = Left
 *   bit 1 (0x2) = Right
 *   bit 2 (0x4) = Up
 *   bit 3 (0x8) = Down
 * into *R(5).
 * We hook this to also check digital D-Pad buttons from the record's digital button word at R(5)+4.
 * This enables D-Pad navigation across all menus (including the Pause Menu)
 * without altering analog stick values or affecting the D-Pad during gameplay. */
void hle_pad_h_menu_nav(SH4Ctx *c) {
    hle_orig(c, 0x8C088180);
    uint32_t r5 = c->r[5];
    uint32_t buttons = LD32(r5 + 4);
    uint32_t dir = LD32(r5);
    if (buttons & PAD_LEFT)  dir |= 0x1u;
    if (buttons & PAD_RIGHT) dir |= 0x2u;
    if (buttons & PAD_UP)    dir |= 0x4u;
    if (buttons & PAD_DOWN)  dir |= 0x8u;
    ST32(r5, dir);
}

void hle_pad_init(void) {
    hle_hook(0x8C0CF158, hle_pad_h_init);
    hle_hook(0x8C0CF54E, hle_pad_h_poll);
    hle_hook(0x8C088180, hle_pad_h_menu_nav);
    hle_log("[pad] hooks: pdInit 0x8C0CF158, pdPoll 0x8C0CF54E, menuNav 0x8C088180");
}
