/* Unit + property tests for hle/vmu.c (store, BUP hook contracts, atomicity). Synthetic guest RAM, no recompiled code.
 * usage: test_vmu WORKDIR   (WORKDIR is created and wiped by the test) */
#include "../hle.h"
#include "../vmu.h"
#include "../pad.h"
#include <stdlib.h>
#include <stdarg.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>

uint8_t sh4_ram[SH4_RAM_SIZE]; unsigned long sh4_stat_unmapped;
uint32_t sh4_io_read(uint32_t a, int s) { (void)s; fprintf(stderr, "UNMAPPED read %08x\n", a); abort(); }
void sh4_io_write(uint32_t a, int s, uint32_t v) { (void)s; (void)v; fprintf(stderr, "UNMAPPED write %08x\n", a); abort(); }
int hle_verbose = 0; unsigned long hle_frame_count;
void hle_log(const char *f, ...) { if (getenv("TEST_VMU_VERBOSE")) { va_list ap; va_start(ap, f); vfprintf(stderr, f, ap); fputc('\n', stderr); va_end(ap); } }
uint64_t hle_time_us(void) { return 0; }
void hle_orig(SH4Ctx *c, uint32_t a) { (void)c; (void)a; }
Sh4CallEntry sh4_call_cache[SH4_CALL_CACHE_SIZE];
void sh4_call_slow(SH4Ctx *c, uint32_t a) { (void)c; (void)a; }
static int vmu_flag; void pad_set_vmu(int p) { vmu_flag = p; }
#define MAXH 32
static struct { uint32_t a; hle_fn f; } hooks[MAXH]; static int nh;
void hle_hook(uint32_t a, hle_fn f) { for (int i = 0; i < nh; i++) if (hooks[i].a == a) { hooks[i].f = f; return; } hooks[nh].a = a; hooks[nh].f = f; nh++; }
static hle_fn H(uint32_t a) { for (int i = 0; i < nh; i++) if (hooks[i].a == a) return hooks[i].f; fprintf(stderr, "no hook %08x\n", a); abort(); }
static int fails, checks;
#define CHECK(x) do { checks++; if (!(x)) { fails++; fprintf(stderr, "FAIL %s:%d: %s\n", __FILE__, __LINE__, #x); } } while (0)

enum { NAMEBUF = 0x8C100000, DATABUF = 0x8C101000, OUTBUF = 0x8C140000 };
static SH4Ctx C;
static uint32_t call(uint32_t a, uint32_t r4, uint32_t r5, uint32_t r6, uint32_t r7) { memset(&C, 0, sizeof C); C.r[4] = r4; C.r[5] = r5; C.r[6] = r6; C.r[7] = r7; C.pr = 0x8C001234; H(a)(&C); CHECK(C.pr == 0x8C001234); return C.r[0]; }
static void setname(const char *n) { memset(hle_ptr(NAMEBUF), 0, 16); memcpy(hle_ptr(NAMEBUF), n, strlen(n)); }
#define A_ATT 0x8C0E69FE
#define A_FMT 0x8C0E8C42
#define A_INFO 0x8C0D9CE0
#define A_FREE 0x8C0D9D0E
#define A_FIRST 0x8C0D9D3C
#define A_NEXT 0x8C0D9D6A
#define A_SIZE 0x8C0DA1F8
#define A_READ 0x8C0DA28C
#define A_WRITE 0x8C0DA2E4
#define A_DEL 0x8C0DA016
#define A_STAT 0x8C0DA136
#define A_STATUS 0x8C0DA182
#define A_TEXT 0x8C082FA0
#define BUP_FNF 0xFFFFFF05u
#define BUP_FULL 0xFFFFFF04u

static uint32_t st(void) { return call(A_STATUS, 0, 0, 0, 0); }
static void fill(uint8_t *p, int n, unsigned seed) { for (int i = 0; i < n; i++) { seed = seed * 1664525u + 1013904223u; p[i] = (uint8_t)(seed >> 24); } }
static int wr(const char *name, int nb, unsigned seed) { setname(name); fill(hle_ptr(DATABUF), nb * 512, seed); call(A_WRITE, 0, NAMEBUF, DATABUF, (uint32_t)nb); return (int)st(); }
static int rd(const char *name, int nb, uint8_t *out) { setname(name); memset(hle_ptr(OUTBUF), 0xEE, 512 * 8); call(A_READ, 0, NAMEBUF, OUTBUF, (uint32_t)nb); memcpy(out, hle_ptr(OUTBUF), (size_t)nb * 512); return (int)st(); }
static int sz(const char *name) { setname(name); return (int)call(A_SIZE, 0, NAMEBUF, 0, 0); }
static int dir(char names[][13]) {
    int n = 0; uint32_t r = call(A_FIRST, 0, OUTBUF, 0, 0);
    while (r == 0) { memcpy(names[n], hle_ptr(OUTBUF), 13); names[n][12] = 0; n++; r = call(A_NEXT, 0, OUTBUF, 0, 0); }
    CHECK(r == BUP_FNF); return n;
}
static void rmrf(const char *d) { char c[600]; snprintf(c, sizeof c, "rm -rf '%s'", d); if (system(c)) {} }
static int fsize(const char *p) { struct stat s; return stat(p, &s) ? -1 : (int)s.st_size; }
static int slurp(const char *p, uint8_t *b, int cap) { FILE *f = fopen(p, "rb"); if (!f) return -1; int n = (int)fread(b, 1, cap, f); fclose(f); return n; }
static int count_files(const char *d, const char *suffix) {
    int n = 0; DIR *o = opendir(d); struct dirent *e; while (o && (e = readdir(o))) { size_t l = strlen(e->d_name), s = strlen(suffix); if (l >= s && !strcmp(e->d_name + l - s, suffix)) n++; } if (o) closedir(o); return n;
}
static void fresh(const char *d, int blocks) { rmrf(d); (void)blocks; hle_vmu_set_dir(d); nh = 0; hle_vmu_init(); }

int main(int argc, char **argv) {
    if (argc < 2) { fprintf(stderr, "usage: %s WORKDIR\n", argv[0]); return 2; }
    char W[400], D[480], p[600]; snprintf(W, sizeof W, "%s", argv[1]); rmrf(W);
    snprintf(D, sizeof D, "%s/deep/er/A1", W);                              /* missing parents */
    memset(sh4_ram, 0, sizeof sh4_ram);
    uint8_t a[8 * 512], b[8 * 512];

    /* ---- init creates the (nested) directory, presence flag, hooks */
    fresh(D, 200); CHECK(vmu_flag == 1); { struct stat s; CHECK(stat(D, &s) == 0 && S_ISDIR(s.st_mode)); }
    CHECK(call(A_ATT, 0, 0, 0, 0) == 1 && call(A_ATT, 1, 0, 0, 0) == 0 && call(A_ATT, 7, 0, 0, 0) == 0);
    CHECK(call(A_FMT, 0, 0, 0, 0) == 0 && call(A_FMT, 1, 0, 0, 0) == 0xFFFFFFFFu);
    CHECK(call(A_FREE, 0, 0, 0, 0) == 200); CHECK(call(A_FREE, 1, 0, 0, 0) == 0xFFFFFF01u);
    memset(hle_ptr(OUTBUF), 0x77, 0x40); call(A_INFO, 0, OUTBUF, 0, 0); CHECK(C.r[0] == 0 && hle_ptr(OUTBUF)[0] == 0 && hle_ptr(OUTBUF)[0x3B] == 0 && hle_ptr(OUTBUF)[0x3C] == 0x77);
    { char n[8][13]; CHECK(dir(n) == 0); }
    CHECK(sz("RAYMAN_2.AAA") == -1);
    CHECK(rd("RAYMAN_2.AAA", 2, a) == (int)BUP_FNF);

    /* ---- write / read back / stat / size / free blocks / list (sorted) */
    CHECK(wr("RAYMAN_2.SY_", 2, 1) == 0); CHECK(wr("RAYMAN_2.AAA", 2, 2) == 0);
    CHECK(sz("RAYMAN_2.AAA") == 2 && sz("RAYMAN_2.SY_") == 2);
    CHECK(call(A_FREE, 0, 0, 0, 0) == 196);
    fill(b, 1024, 2); CHECK(rd("RAYMAN_2.AAA", 2, a) == 0); CHECK(!memcmp(a, b, 1024));
    fill(b, 1024, 1); CHECK(rd("RAYMAN_2.SY_", 2, a) == 0); CHECK(!memcmp(a, b, 1024));
    snprintf(p, sizeof p, "%s/RAYMAN_2.AAA", D); CHECK(fsize(p) == 1024); CHECK(slurp(p, a, 1024) == 1024); fill(b, 1024, 2); CHECK(!memcmp(a, b, 1024));
    { char n[8][13]; int k = dir(n); CHECK(k == 2 && !strcmp(n[0], "RAYMAN_2.AAA") && !strcmp(n[1], "RAYMAN_2.SY_")); }
    CHECK(count_files(D, ".tmp") == 0 && count_files(D, ".bak") == 0);
    /* stat: 20-byte struct, binary RTC-style date at +10, nothing written beyond 20 bytes (PR/r14 of the guest frame follow) */
    memset(hle_ptr(OUTBUF), 0xA5, 64); setname("RAYMAN_2.AAA"); call(A_STAT, 0, NAMEBUF, OUTBUF, 0);
    { const uint8_t *o = hle_ptr(OUTBUF); unsigned year = o[10] | o[11] << 8; CHECK(C.r[0] == 0 && year >= 2024 && year < 2200 && o[12] >= 1 && o[12] <= 12 && o[13] >= 1 && o[13] <= 31 && o[14] < 24 && o[15] < 60 && o[16] < 61 && o[17] < 7);
      for (int i = 0; i < 10; i++) CHECK(o[i] == 0); CHECK(o[18] == 0 && o[19] == 0); CHECK(o[20] == 0xA5 && o[21] == 0xA5 && o[27] == 0xA5 && o[28] == 0xA5); }
    setname("NOPE"); call(A_STAT, 0, NAMEBUF, OUTBUF, 0); CHECK(C.r[0] == 0xFFFFFFFFu);

    /* ---- overwrite keeps the block count, grows/shrinks accounting */
    CHECK(wr("RAYMAN_2.AAA", 2, 3) == 0); CHECK(call(A_FREE, 0, 0, 0, 0) == 196);
    CHECK(wr("RAYMAN_2.AAA", 4, 4) == 0); CHECK(call(A_FREE, 0, 0, 0, 0) == 194); CHECK(sz("RAYMAN_2.AAA") == 4);
    CHECK(wr("RAYMAN_2.AAA", 1, 5) == 0); CHECK(call(A_FREE, 0, 0, 0, 0) == 197); CHECK(fsize(p) == 512);
    fill(b, 512, 5); CHECK(rd("RAYMAN_2.AAA", 1, a) == 0 && !memcmp(a, b, 512));
    /* reading more blocks than the file has: copies what exists, leaves the rest of the guest buffer alone */
    CHECK(rd("RAYMAN_2.AAA", 2, a) == 0); CHECK(!memcmp(a, b, 512) && a[512] == 0xEE && a[1023] == 0xEE);

    /* ---- delete */
    setname("RAYMAN_2.AAA"); call(A_DEL, 0, NAMEBUF, 0, 0); CHECK(st() == 0); CHECK(sz("RAYMAN_2.AAA") == -1); CHECK(call(A_FREE, 0, 0, 0, 0) == 198); CHECK(fsize(p) == -1);
    call(A_DEL, 0, NAMEBUF, 0, 0); CHECK(st() == BUP_FNF);

    /* ---- invalid parameters / names */
    CHECK(wr("RAYMAN_2.AAA", 0, 1) == (int)0xFFFFFF00u); CHECK(wr("RAYMAN_2.AAA", 201, 1) == (int)0xFFFFFF00u);
    setname("../EVIL"); fill(hle_ptr(DATABUF), 512, 1); call(A_WRITE, 0, NAMEBUF, DATABUF, 1); CHECK(st() == 0xFFFFFF08u);
    setname("A/B"); call(A_WRITE, 0, NAMEBUF, DATABUF, 1); CHECK(st() == 0xFFFFFF08u);
    snprintf(p, sizeof p, "%s/../EVIL", D); CHECK(fsize(p) == -1);
    setname(""); call(A_WRITE, 0, NAMEBUF, DATABUF, 1); CHECK(st() == 0xFFFFFF08u);
    call(A_WRITE, 0, NAMEBUF, 0x20000000, 1); /* guest pointer outside RAM: no crash */ CHECK(st() == 0xFFFFFF00u);
    call(A_WRITE, 1, NAMEBUF, DATABUF, 1); CHECK(C.r[0] == 0); CHECK(call(A_STATUS, 1, 0, 0, 0) == 0xFFFFFF01u);   /* other devices: NO_DISK */
    /* name given without terminator: exactly 12 chars are used */
    memset(hle_ptr(NAMEBUF), 'X', 16); memcpy(hle_ptr(NAMEBUF), "RAYMAN_2.ZZZ", 12); call(A_SIZE, 0, NAMEBUF, 0, 0); CHECK(C.r[0] == 0xFFFFFFFFu);
    CHECK(wr("RAYMAN_2.", 2, 9) == 0); CHECK(sz("RAYMAN_2.") == 2 && sz("RAYMAN_2.A") == -1);           /* the game probes the truncated name 20x (E9) */
    setname("RAYMAN_2."); call(A_DEL, 0, NAMEBUF, 0, 0);

    /* ---- free-block accounting on a full card (200 blocks), DISK_FULL leaves everything untouched */
    fresh(D, 200);
    CHECK(wr("F1", 8, 1) == 0); for (int i = 2; i <= 25; i++) { char n[16]; snprintf(n, sizeof n, "F%d", i); CHECK(wr(n, 8, (unsigned)i) == 0); }
    CHECK(call(A_FREE, 0, 0, 0, 0) == 0);                                  /* 25*8 = 200 */
    CHECK(wr("ONEMORE", 1, 7) == (int)BUP_FULL); CHECK(sz("ONEMORE") == -1); snprintf(p, sizeof p, "%s/ONEMORE", D); CHECK(fsize(p) == -1); CHECK(count_files(D, ".tmp") == 0);
    fill(b, 8 * 512, 3); CHECK(wr("F3", 8, 33) == 0);                       /* rewrite of an existing file at the same size still fits */
    CHECK(wr("F3", 9, 34) == (int)BUP_FULL); fill(b, 8 * 512, 33); CHECK(rd("F3", 8, a) == 0 && !memcmp(a, b, 8 * 512));   /* failed grow keeps the old content */
    { char n[100][13]; CHECK(dir(n) == 25); }
    setname("F7"); call(A_DEL, 0, NAMEBUF, 0, 0); CHECK(call(A_FREE, 0, 0, 0, 0) == 8); CHECK(wr("ONEMORE", 8, 7) == 0);

    /* ---- a 3-block card: the game's 4-block rule is the game's business, the store reports the truth */
    rmrf(D); setenv("R2_VMU_BLOCKS", "3", 1); hle_vmu_set_dir(D); nh = 0; hle_vmu_init(); unsetenv("R2_VMU_BLOCKS");
    CHECK(call(A_FREE, 0, 0, 0, 0) == 3); CHECK(wr("X", 2, 1) == 0); CHECK(wr("Y", 2, 1) == (int)BUP_FULL); CHECK(call(A_FREE, 0, 0, 0, 0) == 1);

    /* ---- persistence: a new instance sees what is on disk; strangers, empty files, .tmp/.bak companions are ignored */
    fresh(D, 200); CHECK(wr("RAYMAN_2.AAA", 2, 11) == 0); CHECK(wr("RAYMAN_2.SY_", 2, 12) == 0);
    snprintf(p, sizeof p, "%s/notes.txt.long_name", D); { FILE *f = fopen(p, "wb"); fputs("x", f); fclose(f); }
    snprintf(p, sizeof p, "%s/EMPTY", D); { FILE *f = fopen(p, "wb"); fclose(f); }
    snprintf(p, sizeof p, "%s/.hidden", D); { FILE *f = fopen(p, "wb"); fputs("x", f); fclose(f); }
    snprintf(p, sizeof p, "%s/RAYMAN_2.AAA.bak", D); { FILE *f = fopen(p, "wb"); fputs("old", f); fclose(f); }
    hle_vmu_reload(); { char n[16][13]; int k = dir(n); CHECK(k == 2); } CHECK(hle_vmu_free_blocks() == 196); CHECK(hle_vmu_file_blocks("RAYMAN_2.SY_") == 2);
    fill(b, 1024, 11); CHECK(rd("RAYMAN_2.AAA", 2, a) == 0 && !memcmp(a, b, 1024));
    /* file size not a multiple of 512 (hand-edited / truncated): blocks = ceil(size/512), zero padded, no crash */
    snprintf(p, sizeof p, "%s/RAYMAN_2.AAA", D); { FILE *f = fopen(p, "wb"); fwrite(b, 1, 700, f); fclose(f); }
    hle_vmu_reload(); CHECK(sz("RAYMAN_2.AAA") == 2); CHECK(rd("RAYMAN_2.AAA", 2, a) == 0); CHECK(!memcmp(a, b, 700) && a[700] == 0 && a[1023] == 0);
    /* a file shrunk behind our back after the scan: short read zero-fills */
    { FILE *f = fopen(p, "wb"); fwrite(b, 1, 100, f); fclose(f); } CHECK(rd("RAYMAN_2.AAA", 2, a) == 0); CHECK(!memcmp(a, b, 100) && a[100] == 0);
    { FILE *f = fopen(p, "wb"); fclose(f); } CHECK(rd("RAYMAN_2.AAA", 2, a) == 0 && a[0] == 0);
    unlink(p); CHECK(rd("RAYMAN_2.AAA", 2, a) == (int)0xFFFFFF07u || (int)st() == (int)0xFFFFFF07u);          /* vanished file: CANNOT_OPEN, not a crash */

    /* ---- crash injection: child process dies (_exit 77) with the temp file written / between the safe renames */
    for (int mode = 0; mode < 3; mode++) {
        const char *crash = mode == 0 ? "tmp" : mode == 1 ? "tmp" : "mid", *safe = mode == 2 ? "1" : "0";
        fresh(D, 200); CHECK(wr("RAYMAN_2.SY_", 2, 21) == 0); fill(b, 1024, 21);
        pid_t pid = fork();
        if (pid == 0) { setenv("R2_VMU_TEST_CRASH", crash, 1); setenv("R2_VMU_SAFE_RENAME", safe, 1); hle_vmu_set_dir(D); nh = 0; hle_vmu_init(); wr("RAYMAN_2.SY_", 2, 22); _exit(0); }
        int status = 0; waitpid(pid, &status, 0); CHECK(WIFEXITED(status) && WEXITSTATUS(status) == 77);
        snprintf(p, sizeof p, "%s/RAYMAN_2.SY_", D);
        if (mode < 2) { CHECK(slurp(p, a, 1024) == 1024 && !memcmp(a, b, 1024)); CHECK(count_files(D, ".tmp") == 1); }     /* old file intact, temp left over */
        else { CHECK(fsize(p) == -1); CHECK(count_files(D, ".bak") == 1); }                                                /* old content parked in .bak */
        hle_vmu_reload();                                                                                                    /* "reboot": recovery runs in load_dir */
        CHECK(count_files(D, ".tmp") == 0 && count_files(D, ".bak") == 0);
        CHECK(rd("RAYMAN_2.SY_", 2, a) == 0 && !memcmp(a, b, 1024)); CHECK(hle_vmu_free_blocks() == 198);
        CHECK(wr("RAYMAN_2.SY_", 2, 22) == 0); fill(b, 1024, 22); CHECK(rd("RAYMAN_2.SY_", 2, a) == 0 && !memcmp(a, b, 1024));
    }
    /* safe-rename sequence in the normal (non-crashing) case leaves no companions */
    setenv("R2_VMU_SAFE_RENAME", "1", 1); fresh(D, 200); unsetenv("R2_VMU_SAFE_RENAME");
    CHECK(wr("A", 2, 1) == 0 && wr("A", 3, 2) == 0 && wr("B", 1, 3) == 0); CHECK(count_files(D, ".tmp") == 0 && count_files(D, ".bak") == 0); CHECK(hle_vmu_free_blocks() == 196);

    /* ---- unwritable directory: write fails with a BUP error and the store stays consistent */
    if (geteuid() != 0) {
        fresh(D, 200); CHECK(wr("KEEP", 2, 1) == 0); chmod(D, 0555);
        CHECK(wr("NEW", 2, 2) == (int)0xFFFFFF40u); CHECK(wr("KEEP", 2, 3) == (int)0xFFFFFF40u); CHECK(sz("NEW") == -1); CHECK(hle_vmu_free_blocks() == 198);
        fill(b, 1024, 1); CHECK(rd("KEEP", 2, a) == 0 && !memcmp(a, b, 1024)); chmod(D, 0755);
    }

    /* ---- randomised model check: write/overwrite/delete/restart against an in-memory model */
    fresh(D, 200); srand(12345);
    struct { char name[13]; int nb; unsigned seed; int used; } m[12]; memset(m, 0, sizeof m);
    for (int i = 0; i < 12; i++) snprintf(m[i].name, 13, "RAYMAN_2.R%02d", i);
    int modelfree = 200;
    for (int step = 0; step < 600; step++) {
        int k = rand() % 12, op = rand() % 10;
        if (op < 6) { int nb = 1 + rand() % 30; int need = nb - (m[k].used ? m[k].nb : 0); int exp = need <= modelfree ? 0 : (int)BUP_FULL; unsigned seed = (unsigned)rand();
            int r = wr(m[k].name, nb, seed); CHECK(r == exp); if (!r) { modelfree -= need; m[k].used = 1; m[k].nb = nb; m[k].seed = seed; } }
        else if (op < 8) { setname(m[k].name); call(A_DEL, 0, NAMEBUF, 0, 0); CHECK(st() == (m[k].used ? 0u : BUP_FNF)); if (m[k].used) { modelfree += m[k].nb; m[k].used = 0; } }
        else if (op == 8) hle_vmu_reload();
        else { int used = 0; for (int i = 0; i < 12; i++) used += m[i].used; char n[16][13]; CHECK(dir(n) == used); }
        CHECK((int)call(A_FREE, 0, 0, 0, 0) == modelfree);
        if (m[k].used) { uint8_t *big = malloc(30 * 512), *exp = malloc(30 * 512); CHECK(sz(m[k].name) == m[k].nb); setname(m[k].name); memset(hle_ptr(OUTBUF), 0, 30 * 512);
            call(A_READ, 0, NAMEBUF, OUTBUF, (uint32_t)m[k].nb); memcpy(big, hle_ptr(OUTBUF), (size_t)m[k].nb * 512); fill(exp, m[k].nb * 512, m[k].seed); CHECK(!memcmp(big, exp, (size_t)m[k].nb * 512)); free(big); free(exp); }
    }

    /* ---- hidden text ids */
    CHECK(vmu_flag == 1);
    printf("%d checks, %d failures\n", checks, fails);
    return fails != 0;
}
