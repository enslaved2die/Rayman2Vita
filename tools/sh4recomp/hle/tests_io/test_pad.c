/* Unit tests for hle/pad.c (synthetic guest RAM, no recompiled code). Built by run.sh together with test_io. */
#include "../hle.h"
#include "../pad.h"
#include "../io.h"
#include <stdlib.h>
#include <stdarg.h>

uint8_t sh4_ram[SH4_RAM_SIZE]; unsigned long sh4_stat_unmapped;
uint32_t sh4_io_read(uint32_t a, int s) { (void)s; fprintf(stderr, "UNMAPPED read %08x\n", a); abort(); }
void sh4_io_write(uint32_t a, int s, uint32_t v) { (void)s; (void)v; fprintf(stderr, "UNMAPPED write %08x\n", a); abort(); }
int hle_verbose = 0;
void hle_log(const char *f, ...) { (void)f; }
#define MAXH 8
static struct { uint32_t a; hle_fn f; } hooks[MAXH]; static int nh;
void hle_hook(uint32_t a, hle_fn f) { hooks[nh].a = a; hooks[nh].f = f; nh++; }
static hle_fn H(uint32_t a) { for (int i = 0; i < nh; i++) if (hooks[i].a == a) return hooks[i].f; fprintf(stderr, "no hook %08x\n", a); abort(); }
static int fails, checks;
#define CHECK(x) do { checks++; if (!(x)) { fails++; fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #x); } } while (0)
static SH4Ctx C;
static uint32_t ARG4;
static void call(uint32_t a) { memset(&C, 0, sizeof C); C.r[4] = ARG4; H(a)(&C); }
#define REC(i) (0x8C2EB020u + 0x34u * (i))
#define POLL() call(0x8C0CF54E)

int main(void) {
    nh = 0; memset(sh4_ram, 0, sizeof sh4_ram);
    hle_pad_init(); CHECK(nh == 2);
    ST32(0x8C0F3030, 1);                       /* image data flag */
    ST32(0x8C0F3034, 0x6F6E2800);              /* "(no device)" marker is only compared by address */
    ST32(0x8C2F09FC, 0x8C300000);
    ST32(REC(7) + 0x28, 0xDEADBEEF);      /* must be wiped by pdInit */
    ARG4 = 0; call(0x8C0CF158);
    CHECK(LD32(REC(7) + 0x28) == 0);
    CHECK(LD8(0x8C2EB564) == 0xC0 && LD8(0x8C2EB565) == 0xA0 && LD32(0x8C2EB560) == 0);
    for (int i = 0; i < 24; i++) { CHECK(LD32(REC(i) + 0x24) == 0x8C0F3034); CHECK(LD32(REC(i) + 12) == 0xFFFFFFFFu && LD32(REC(i) + 8) == 0); CHECK(LD32(REC(i) + 0x30) == 0x8C300000u + 1100 + 120u * i); }
    CHECK(memcmp(hle_ptr(HLE_PAD_NAMEBUF), "Dreamcast Controller          ", 31) == 0);

    /* default: connected + idle */
    POLL();
    CHECK(LD32(0x8C2EB500) == 0);
    CHECK(LD32(REC(0) + 4) == 0x000F06FEu && LD32(REC(0) + 0) == 0x000F06FEu);
    CHECK(LD32(REC(0) + 0x24) == HLE_PAD_NAMEBUF);
    CHECK(LD32(REC(0) + 8) == 0 && LD32(REC(0) + 0x10) == 0 && LD32(REC(0) + 0x14) == 0);
    CHECK(LD16(REC(0) + 0x1C) == 0 && LD16(REC(0) + 0x1E) == 0 && LD16(REC(0) + 0x18) == 0 && LD16(REC(0) + 0x1A) == 0);
    CHECK(LD32(REC(1) + 0x24) == 0x8C0F3034);

    /* buttons + sticks + edges */
    PadAnalog a = { 0, 0, 255, 0, 128, 128 };
    pad_set_state(PAD_A | PAD_START | PAD_LEFT, &a);
    POLL();
    uint32_t want = PAD_A | PAD_START | PAD_LEFT;
    CHECK(LD32(REC(0) + 8) == want); CHECK(LD32(REC(0) + 12) == ~want);
    CHECK(LD32(REC(0) + 0x10) == want); CHECK(LD32(REC(0) + 0x14) == 0); CHECK(LD32(REC(0) + 0x2C) == 0);
    CHECK((int16_t)LD16(REC(0) + 0x1C) == 127 && (int16_t)LD16(REC(0) + 0x1E) == -128);
    CHECK(LD16(REC(0) + 0x20) == 0 && LD16(REC(0) + 0x22) == 0);          /* no 2nd stick in the standard function word */
    pad_set_state(PAD_A, 0);
    POLL();
    CHECK(LD32(REC(0) + 8) == PAD_A); CHECK(LD32(REC(0) + 0x10) == 0); CHECK(LD32(REC(0) + 0x14) == (PAD_START | PAD_LEFT)); CHECK(LD32(REC(0) + 0x2C) == want);
    CHECK((int16_t)LD16(REC(0) + 0x1C) == 0 && (int16_t)LD16(REC(0) + 0x1E) == 0);

    /* triggers with hysteresis (hi 0xC0, lo 0xA0): bit17 = LT, bit16 = RT */
    pad_set_state(0, &(PadAnalog){ 0x10, 0xC0, 128, 128, 128, 128 }); POLL();
    CHECK((LD32(REC(0) + 8) & 0x30000) == 0x20000); CHECK(LD16(REC(0) + 0x1A) == 0xC0 && LD16(REC(0) + 0x18) == 0x10);
    pad_set_state(0, &(PadAnalog){ 0, 0xB0, 128, 128, 128, 128 }); POLL();   /* between lo and hi, latched -> still down */
    CHECK((LD32(REC(0) + 8) & 0x20000) == 0x20000);
    pad_set_state(0, &(PadAnalog){ 0, 0xA0, 128, 128, 128, 128 }); POLL();   /* <= lo -> released */
    CHECK((LD32(REC(0) + 8) & 0x20000) == 0); CHECK((LD32(REC(0) + 0x14) & 0x20000) == 0x20000);
    pad_set_state(0, &(PadAnalog){ 0, 0xB0, 128, 128, 128, 128 }); POLL();   /* between, unlatched -> up */
    CHECK((LD32(REC(0) + 8) & 0x20000) == 0);
    pad_set_state(0, &(PadAnalog){ 0xFF, 0, 128, 128, 128, 128 }); POLL();
    CHECK((LD32(REC(0) + 8) & 0x10000) == 0x10000);

    /* disconnect -> record 0 becomes "(no device)" */
    pad_set_connected(0); POLL();
    CHECK(LD32(REC(0) + 0x24) == 0x8C0F3034 && LD32(REC(0) + 8) == 0);
    pad_set_connected(1);

    /* active-low polarity (pdInit arg != 0): idle = all ones */
    ARG4 = 1; call(0x8C0CF158); pad_set_state(0, 0); POLL();
    CHECK(LD32(REC(0) + 8) == 0xFFFFFFFFu);
    pad_set_state(PAD_B, 0); POLL(); CHECK(LD32(REC(0) + 8) == ~(uint32_t)PAD_B);

    /* virtual VMU (hle/vmu.c): record 1 = "Visual Memory" with type word 0 while pad_set_vmu(1); the others stay "(no device)" */
    ARG4 = 0; call(0x8C0CF158); pad_set_state(0, 0); POLL();
    CHECK(LD32(REC(1) + 0x24) == 0x8C0F3034);                                 /* default: no VMU */
    pad_set_vmu(1); POLL();
    CHECK(LD32(REC(1) + 0x24) == HLE_PAD_VMUNAME); CHECK(LD32(0x8C2EB500 + 4) == 0); CHECK(LD32(REC(1) + 8) == 0 && LD32(REC(1) + 12) == 0xFFFFFFFFu);
    CHECK(memcmp(hle_ptr(HLE_PAD_VMUNAME), "Visual Memory                 ", 31) == 0);
    for (int i = 2; i < 24; i++) CHECK(LD32(REC(i) + 0x24) == 0x8C0F3034);
    CHECK(LD32(REC(0) + 0x24) == HLE_PAD_NAMEBUF);
    pad_set_vmu(0); POLL(); CHECK(LD32(REC(1) + 0x24) == 0x8C0F3034);

    /* poll is a no-op when the image flag is cleared */
    ST32(0x8C0F3030, 0); ST32(REC(0) + 8, 0x1234); POLL(); CHECK(LD32(REC(0) + 8) == 0x1234);
    printf("%d checks, %d failures\n", checks, fails);
    return fails != 0;
}
