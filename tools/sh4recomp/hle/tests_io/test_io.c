/* Unit tests for hle/io.c with a synthetic SH4Ctx + guest RAM (no recompiled code, no boot.c).
 * build+run: make -C tools/sh4recomp/hle/tests_io   (or ./run.sh).  Needs assets/dc (default ../../../../assets/dc, override with DCROOT=). */
#include "../hle.h"
#include "../io.h"
#include <stdlib.h>
#include <assert.h>
#include <stdarg.h>
#include <sys/stat.h>
#include <unistd.h>

/* ---- stubs for what boot.c/runtime.c would provide ---- */
uint8_t sh4_ram[SH4_RAM_SIZE]; unsigned long sh4_stat_unmapped;
uint32_t sh4_io_read(uint32_t a, int s) { (void)s; fprintf(stderr, "UNMAPPED read %08x\n", a); abort(); }
void sh4_io_write(uint32_t a, int s, uint32_t v) { (void)s; (void)v; fprintf(stderr, "UNMAPPED write %08x\n", a); abort(); }
int hle_verbose = 0;
void hle_log(const char *f, ...) { va_list ap; va_start(ap, f); fputs("  log: ", stderr); vfprintf(stderr, f, ap); fputc('\n', stderr); va_end(ap); }
const char *hle_cstr(uint32_t a) { return hle_is_ram(a) ? (const char *)hle_ptr(a) : "<bad>"; }
#define MAXH 64
static struct { uint32_t a; hle_fn f; } hooks[MAXH]; static int nh;
void hle_hook(uint32_t a, hle_fn f) { hooks[nh].a = a; hooks[nh].f = f; nh++; }
static hle_fn H(uint32_t a) { for (int i = 0; i < nh; i++) if (hooks[i].a == a) return hooks[i].f; fprintf(stderr, "no hook %08x\n", a); abort(); }

static int fails, checks;
#define CHECK(x) do { checks++; if (!(x)) { fails++; fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #x); } } while (0)

static SH4Ctx C;
static void call(uint32_t addr, uint32_t a, uint32_t b, uint32_t c3) { memset(&C, 0, sizeof C); C.r[4] = a; C.r[5] = b; C.r[6] = c3; H(addr)(&C); }
static const char *ROOT;
static uint32_t put_str(uint32_t at, const char *s) { memcpy(hle_ptr(at), s, strlen(s) + 1); return at; }

static uint8_t *slurp(const char *path, size_t *n) {
    FILE *f = fopen(path, "rb"); if (!f) { perror(path); exit(2); }
    fseek(f, 0, SEEK_END); *n = (size_t)ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc(*n ? *n : 1); if (fread(b, 1, *n, f) != *n) exit(2); fclose(f); return b;
}
static uint32_t SLOT(int i) { return 0x8C11F8C4u + (uint32_t)i * 0x840u; }

static void test_paths(void) {
    char out[1024];
    const char *want = "/DCDATA/LEARN_10/LEARN_10.DAT";
    for (int scan = 0; scan < 2; scan++) {
        hle_io_force_scan = scan;
        CHECK(hle_io_resolve("DCDATA\\LEARN_10\\", "LEARN_10.DAT", out, sizeof out) == 0 && strstr(out, want));
        CHECK(hle_io_resolve("dcdata\\learn_10\\", "learn_10.dat", out, sizeof out) == 0 && (!scan || !strcmp(strrchr(out, '/') + 1, "LEARN_10.DAT")));
        CHECK(hle_io_resolve("\\DCDATA\\LEARN_10", "Learn_10.Dat", out, sizeof out) == 0);
        CHECK(hle_io_resolve(NULL, "DCDATA\\LEARN_10\\LEARN_10.DAT", out, sizeof out) == 0);          /* full path form (042B96) */
        CHECK(hle_io_resolve(NULL, "\\dcdata\\learn_10\\learn_10.tmp", out, sizeof out) == 0);
        CHECK(hle_io_resolve("DCDATA\\", "FIX.DAT", out, sizeof out) == 0);
        CHECK(hle_io_resolve("DCDATA\\", "FIX.SNA", out, sizeof out) == 0);                         /* symlink */
        CHECK(hle_io_resolve("DCDATA\\LEARN_10\\", "LEARN_10.DAT;1", out, sizeof out) == 0);        /* iso version suffix */
        CHECK(hle_io_resolve("DCDATA\\.\\LEARN_10\\..\\LEARN_10\\", "LEARN_10.DAT", out, sizeof out) == 0);
        CHECK(hle_io_resolve("DCDATA\\LEARN_10\\", "NOPE.DAT", out, sizeof out) != 0);
        CHECK(hle_io_resolve("DCDATA\\NOPE\\", "LEARN_10.DAT", out, sizeof out) != 0);
        CHECK(hle_io_resolve("DCDATA\\", "LEARN_10", out, sizeof out) != 0);                         /* directory is not a file */
        CHECK(hle_io_resolve("..\\..\\..\\", "etc\\passwd", out, sizeof out) != 0);                  /* cannot escape root */
        CHECK(hle_io_resolve(NULL, "", out, sizeof out) != 0);
    }
    hle_io_force_scan = 0;
}

static void test_async_whole_file(void) {
    char host[1024]; size_t n; snprintf(host, sizeof host, "%s/DCDATA/LEARN_10/LEARN_10.DAT", ROOT);
    uint8_t *ref = slurp(host, &n);
    CHECK(n == 0x4C6960);
    put_str(0x8C100000, "LEARN_10.DAT"); put_str(0x8C100040, "DCDATA\\LEARN_10\\");
    uint32_t slot = SLOT(0), dst = 0x8C400000; uint32_t rounded = (uint32_t)(n + 0x7FF) & ~0x7FFu;
    memset(hle_ptr(dst), 0xEE, rounded);
    call(0x8C0128BE, 0x8C100000, 0x8C100040, slot);
    CHECK(C.r[0] == 0);
    CHECK(LD32(slot + 2104) == n); CHECK(LD32(slot + 2100) == 0); CHECK(LD32(slot + 2084) == 2048); CHECK(LD32(slot + 2088) == 0xFFFFFFFFu);
    CHECK(LD32(slot + 2092) == 0); CHECK(LD32(slot + 2080) == (slot & ~31u) + 32);
    uint32_t gd = LD32(slot + 2096); CHECK(gd != 0 && LD16(gd + 0x4C) == 1);
    call(0x8C012B60, slot, 0, 0); CHECK(C.r[0] == 0);                      /* nothing read yet: status 4 (idle) != 1 */
    call(0x8C012B02, slot, rounded, dst);
    CHECK((int32_t)C.r[0] == (int32_t)(rounded >> 11));
    call(0x8C012B60, slot, 0, 0); CHECK(C.r[0] == 1);
    CHECK(LD32(gd + 0x18) == rounded);                                      /* what recompiled 8C0CECA0 would return */
    CHECK(LD16(gd + 0x50) == 1);                                            /* what recompiled 8C0CEC88 would return */
    CHECK(memcmp(hle_ptr(dst), ref, n) == 0);                               /* byte for byte */
    int tailzero = 1; for (size_t i = n; i < rounded; i++) if (hle_ptr(dst)[i] != 0) tailzero = 0;
    CHECK(tailzero);                                                        /* sector padding zero filled, no 0xEE left */
    /* a second read at EOF starts nothing */
    call(0x8C012B02, slot, 0x800, dst); CHECK(C.r[0] == 0);
    /* close */
    for (int i = 0; i < 8; i++) ST32(0x8C123AC4 + 4 * i, 1);
    call(0x8C012ACC, slot, 0, 0); CHECK(C.r[0] == 0);
    CHECK(LD32(0x8C123AC4) == 0 && LD32(0x8C123AC8) == 1);                  /* slot 0's in-use flag cleared, others untouched */
    CHECK(LD16(gd + 0x4C) == 0);
    call(0x8C012B60, slot, 0, 0); CHECK(C.r[0] == 0);
    call(0x8C012ACC, 0, 0, 0); CHECK((int32_t)C.r[0] == -1);
    free(ref);
}

static void test_async_chunks_and_unaligned(void) {
    char host[1024]; size_t n; snprintf(host, sizeof host, "%s/DCDATA/FIX.DAT", ROOT);
    uint8_t *ref = slurp(host, &n);
    put_str(0x8C100000, "fix.dat"); put_str(0x8C100040, "dcdata\\");
    uint32_t slot = SLOT(3), dst = 0x8C500000;
    call(0x8C0128BE, 0x8C100000, 0x8C100040, slot); CHECK(C.r[0] == 0);
    /* three successive async reads continue where the gd cursor left off (sequential gdFs semantics) */
    uint32_t chunk = 0x10000 * 3; uint32_t total = (uint32_t)(n + 0x7FF) & ~0x7FFu;
    uint32_t done = 0;
    while (done < total) {
        uint32_t want = total - done < chunk ? total - done : chunk;
        call(0x8C012B02, slot, want, dst + done); CHECK((uint32_t)C.r[0] == want / 2048);
        call(0x8C012B60, slot, 0, 0); CHECK(C.r[0] == 1);
        done += want;
    }
    CHECK(memcmp(hle_ptr(dst), ref, n) == 0);
    call(0x8C012ACC, slot, 0, 0);
    /* unaligned destination: wrapper still performs the read (logs a warning) */
    call(0x8C0128BE, 0x8C100000, 0x8C100040, slot); call(0x8C012B02, slot, 0x1000, dst + 4);
    CHECK(C.r[0] == 2); CHECK(memcmp(hle_ptr(dst + 4), ref, 0x1000) == 0);
    call(0x8C012ACC, slot, 0, 0);
    free(ref);
}

static void test_blocking(void) {
    char host[1024]; size_t n; snprintf(host, sizeof host, "%s/DCDATA/FIX.TMP", ROOT);
    uint8_t *ref = slurp(host, &n);
    put_str(0x8C100000, "FIX.TMP"); put_str(0x8C100040, "DCDATA");
    uint32_t slot = SLOT(1), dst = 0x8C600000;
    call(0x8C0128BE, 0x8C100000, 0x8C100040, slot); CHECK(C.r[0] == 0);
    CHECK(LD32(slot + 2104) == n);
    size_t off = 0; int step = 0; const uint32_t sizes[] = {1, 7, 100, 2047, 2048, 5000, 0, 33};
    while (off < n) {
        uint32_t want = sizes[step++ % 8];
        memset(hle_ptr(dst), 0xAA, 0x20000);
        call(0x8C012B78, slot, want, dst + (uint32_t)(step & 3));     /* mixed alignment */
        uint32_t exp = (uint32_t)(n - off < want ? n - off : want);
        CHECK(C.r[0] == exp);
        CHECK(memcmp(hle_ptr(dst + (uint32_t)(step & 3)), ref + off, exp) == 0);
        CHECK(hle_ptr(dst + (uint32_t)(step & 3))[exp] == 0xAA);        /* no overrun by one byte */
        off += exp;
        CHECK(LD32(slot + 2100) == off);
        if (step > 100000) break;
    }
    CHECK(off == n);
    call(0x8C012B78, slot, 100, dst); CHECK(C.r[0] == 0);                 /* at EOF */
    call(0x8C012ACC, slot, 0, 0);
    /* file larger than the sector cache, one big blocking read (TEX file) */
    snprintf(host, sizeof host, "%s/DCDATA/LEARN_10/LEARN_10.TEX", ROOT);
    free(ref); ref = slurp(host, &n);
    put_str(0x8C100000, "LEARN_10.TEX"); put_str(0x8C100040, "DCDATA\\LEARN_10\\");
    call(0x8C0128BE, 0x8C100000, 0x8C100040, slot); CHECK(C.r[0] == 0);
    call(0x8C012B78, slot, 0x7FFFFFFF, dst); CHECK(C.r[0] == n); CHECK(memcmp(hle_ptr(dst), ref, n) == 0);
    call(0x8C012ACC, slot, 0, 0);
    free(ref);
}

static void test_open_failure(void) {
    put_str(0x8C100000, "NOPE.DAT"); put_str(0x8C100040, "DCDATA\\LEARN_10\\");
    call(0x8C0128BE, 0x8C100000, 0x8C100040, SLOT(2)); CHECK(C.r[0] == 0xFFFFFFFFu);
    call(0x8C0128BE, 0, 0, SLOT(2)); CHECK(C.r[0] == 0xFFFFFFFFu);
}

static void test_dirmng_and_gdfs(void) {
    char host[1024]; size_t n; snprintf(host, sizeof host, "%s/DCDATA/LEARN_10/LEARN_10.TMP", ROOT);
    uint8_t *ref = slurp(host, &n);
    put_str(0x8C100000, "\\DCDATA\\LEARN_10\\LEARN_10.TMP");
    call(0x8C042B96, 0x8C100000, 0, 0); uint32_t e = C.r[0]; CHECK(e != 0);
    CHECK(LD32(e + 4) == n); CHECK(LD8(e + 8) == 0); CHECK(!strcmp((const char *)hle_ptr(e + 10), "LEARN_10.TMP"));
    call(0x8C042B96, 0x8C100000, 0, 0); CHECK(C.r[0] == e);               /* stable per path (062CA0 stores the pointer) */
    put_str(0x8C100100, "LEARN_10.TMP"); put_str(0x8C100140, "DCDATA\\LEARN_10\\");
    call(0x8C0429D2, 0x8C100100, 0x8C100140, 0); CHECK(C.r[0] == e);
    put_str(0x8C100200, "DCDATA\\NOPE.X"); call(0x8C042B96, 0x8C100200, 0, 0); CHECK(C.r[0] == 0);
    /* AsyncFile-style use: open range at lba+150 */
    uint32_t nsect = (uint32_t)((n + 2047) >> 11);
    call(0x8C0CEFE8, LD32(e) + 150, nsect, 0); uint32_t gd = C.r[0]; CHECK(gd != 0);
    CHECK(LD16(gd + 0x4C) == 1);
    uint32_t dst = 0x8C700000; memset(hle_ptr(dst), 0xCC, nsect * 2048);
    call(0x8C0CE968, gd, nsect, dst + 4); CHECK((int32_t)C.r[0] == -14);  /* real ReqRd rejects unaligned buffers */
    call(0x8C0CE968, gd, nsect + 5, dst); CHECK(C.r[0] == nsect);          /* clamped to the range */
    CHECK(LD16(gd + 0x50) == 1); CHECK(LD32(gd + 0x18) == nsect * 2048);
    CHECK(memcmp(hle_ptr(dst), ref, n) == 0);
    call(0x8C0CE968, gd, 1, dst); CHECK(C.r[0] == 0);                      /* at end of range */
    call(0x8C0CE75E, gd, 0, 0); CHECK(C.r[0] == 0 && LD32(gd + 0x14) == 0);   /* seek set 0 */
    call(0x8C0CE75E, gd, nsect + 1, 0); CHECK((int32_t)C.r[0] == -17);
    call(0x8C0CE75E, gd, 0, 2); CHECK(C.r[0] == 0 && LD32(gd + 0x14) == nsect);  /* seek end */
    call(0x8C0CE75E, gd, 0, 9); CHECK((int32_t)C.r[0] == -16);
    call(0x8C0CE75E, gd, 0, 0);
    memset(hle_ptr(dst), 0, 4096); call(0x8C0CE802, gd, 1, dst + 4); CHECK(C.r[0] == 0);  /* sync read accepts unaligned (PIO path) */
    CHECK(memcmp(hle_ptr(dst + 4), ref, n < 2048 ? n : 2048) == 0);
    call(0x8C0CECB6, gd, 0, 0); CHECK(C.r[0] == 0);
    call(0x8C0CE6D8, gd, 0, 0); CHECK(LD16(gd + 0x4C) == 0);
    call(0x8C0CE968, gd, 1, dst); CHECK((int32_t)C.r[0] == -10);          /* invalid after close */
    call(0x8C0CEFE8, 150 + 123, 1, 0); CHECK(C.r[0] == 0);                /* LBA not issued by us */
    free(ref);
}

static void test_handle_exhaustion(void) {
    put_str(0x8C100000, "FIX.TMP"); put_str(0x8C100040, "DCDATA");
    uint32_t hs[16]; int ok = 0;
    for (int i = 0; i < 12; i++) { call(0x8C0128BE, 0x8C100000, 0x8C100040, SLOT(i % 8)); hs[i] = LD32(SLOT(i % 8) + 2096); if (hs[i]) ok++; }
    CHECK(ok == 10);                                                        /* default pool = 10 fake handles */
    for (int i = 0; i < 12; i++) if (hs[i]) { call(0x8C0CE6D8, hs[i], 0, 0); }
    call(0x8C0128BE, 0x8C100000, 0x8C100040, SLOT(0)); CHECK(LD32(SLOT(0) + 2096) != 0);   /* reusable after close */
    call(0x8C012ACC, SLOT(0), 0, 0);
}

static void test_legit_probes_and_scratch(void) {
    /* The game probes JINGLE8.wav under Banks then Music, and MM01..10.wav under Banks, Music, Music\English (+ full-path dir lookup).
     * Disc listing (ISO9660 track03) has JINGLE8.WAV only under SOUND/MUSIC and no MM*.WAV at all (MM.DCZ only): these failures are real. */
    char out[1024];
    CHECK(hle_io_resolve("dcdata\\Sound\\Banks\\", "JINGLE8.wav", out, sizeof out) != 0);
    CHECK(hle_io_resolve("dcdata\\Sound\\Music\\", "JINGLE8.wav", out, sizeof out) == 0);
    CHECK(hle_io_resolve("dcdata\\Sound\\Music\\", "silenST.wav", out, sizeof out) == 0);
    CHECK(hle_io_resolve("dcdata\\Sound\\Music\\", "MM01.wav", out, sizeof out) != 0);
    CHECK(hle_io_resolve("dcdata\\Sound\\Music\\English\\", "MM01.wav", out, sizeof out) != 0);
    CHECK(hle_io_resolve("dcdata\\Sound\\Music\\", "MM.DCZ", out, sizeof out) == 0);
    CHECK(hle_io_resolve("dcdata\\Sound\\Music\\English\\", "ENGLISH.DCZ", out, sizeof out) == 0);
    CHECK(hle_io_resolve("DCDATA\\demos\\Learn_30\\", "demo000.sav", out, sizeof out) == 0);   /* 7 demos exist on disc */
    CHECK(hle_io_resolve("DCDATA\\demos\\Astro_00\\", "demo000.sav", out, sizeof out) != 0);    /* the other ~70 do not */
    /* fake gd handles / dirents must stay out of the pd table 0x8C2EB014..0x8C2EB5A0 */
    put_str(0x8C100000, "FIX.TMP"); put_str(0x8C100040, "DCDATA");
    call(0x8C0128BE, 0x8C100000, 0x8C100040, SLOT(0)); uint32_t gd = LD32(SLOT(0) + 2096);
    CHECK(gd >= HLE_IO_SCRATCH_BASE && gd + HLE_IO_GD_STRIDE <= HLE_IO_SCRATCH_BASE + 0x600);
    call(0x8C012ACC, SLOT(0), 0, 0);
    put_str(0x8C100000, "\\DCDATA\\FIX.TMP"); call(0x8C042B96, 0x8C100000, 0, 0);
    CHECK(C.r[0] >= HLE_IO_SCRATCH_BASE && C.r[0] < HLE_IO_SCRATCH_BASE + 0x600);
}

int main(void) {
    ROOT = getenv("DCROOT"); if (!ROOT) ROOT = "../../../../assets/dc";
    struct stat st; if (stat(ROOT, &st)) { fprintf(stderr, "root %s missing\n", ROOT); return 2; }
    hle_io_init(ROOT);
    CHECK(nh >= 13);
    test_paths(); test_async_whole_file(); test_async_chunks_and_unaligned(); test_blocking(); test_open_failure();
    test_dirmng_and_gdfs(); test_handle_exhaustion(); test_legit_probes_and_scratch();
    printf("%d checks, %d failures\n", checks, fails);
    return fails != 0;
}
