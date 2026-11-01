/* hle/vmu.c - virtual Visual Memory Unit A1 at the Katana BUP ("VMS File System") boundary + file-backed store.
 * Plan / evidence: re_analysis/dc/plan_native_save.md (hook table 3.2). Behaviour, deviations, tests: re_analysis/dc/notes_vmu.md.
 *
 * The game never talks to the Maple memory-card function directly: Ubisoft's vm_backup.c / GamSave.c sit on the BUP wrappers 0x8C0D98D0..0x8C0DAA48.
 * Below them the SDK Maple driver cannot work in the HLE (no Maple DMA), so every BUP call used to fail with NO_DISK and the game showed its
 * "insert a VMS" prompt. Here the wrappers are replaced (synchronously) by a store with one host file per VMU file and pad.c reports a
 * "Visual Memory" in port A slot 1, so the unmodified game code (GamSave.c checksums, scrambling, slot logic, corruption texts) runs on top.
 *
 * Hooks (all keep c->pr untouched; the BUP error code of the last file operation is kept per device and returned by the status hook 0x8C0DA182):
 *   0x8C0E69FE attached?          0x8C0E8C42 formatted? (0 = ok)      0x8C0D9CE0 info (zeroed 0x3C bytes)   0x8C0D9D0E free blocks
 *   0x8C0D9D3C dir first          0x8C0D9D6A dir next                 0x8C0DA1F8 file size in blocks        0x8C0DA28C read file
 *   0x8C0DA2E4 write file         0x8C0DA016 delete                   0x8C0DA136 stat (date)                0x8C0DA182 last status
 *   0x8C0DA108 exists(dev,name)   0x8C05CE20 inpInit2 (+ select VMU 1) 0x8C04DD12 GetCurrentSlotNumber (re-select if the game deselected)
 *   0x8C082FA0 text getter (ids hidden from the menus -> "")
 */
#include "vmu.h"
#include "pad.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <errno.h>
#ifdef __vita__
#include <psp2/io/dirent.h>
#include <psp2/io/stat.h>
#include <psp2/io/fcntl.h>
#else
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#endif

/* BUP error codes (FUN_8c0659e0 string table, literals read from 1ST_READ.BIN 0x8C065AC0..) */
enum {
    BUP_OK = 0, BUP_INVALID_PARAMETER = 0xFFFFFF00u, BUP_NO_DISK = 0xFFFFFF01u, BUP_UNFORMAT = 0xFFFFFF03u, BUP_DISK_FULL = 0xFFFFFF04u,
    BUP_FILE_NOT_FOUND = 0xFFFFFF05u, BUP_CANNOT_OPEN = 0xFFFFFF07u, BUP_CANNOT_CREATE = 0xFFFFFF08u, BUP_WRITE_ERROR = 0xFFFFFF40u
};

#define MAXFILES 200
#define BLOCK 512

/* ---------------------------------------------------------------- state */
typedef struct { char name[13]; uint32_t size; uint16_t blocks; uint8_t date[8]; } Ent;
static Ent g_ent[MAXFILES]; static int g_n;
static char g_dir[512];
static int g_loaded, g_present = 1, g_card_blocks = HLE_VMU_CARD_BLOCKS, g_trace, g_safe_rename;
#ifndef __vita__
static const char *g_crash;                 /* test hook R2_VMU_TEST_CRASH = tmp (die with the temp file written) | mid (die between the two renames of the safe sequence) */
#endif
static uint32_t g_status[8];
static char g_dnames[8][MAXFILES][13]; static int g_dn[8], g_dcur[8];

#define LG(...) do { if (g_trace) hle_log(__VA_ARGS__); } while (0)

/* ---------------------------------------------------------------- platform layer */
#ifdef __vita__
#define DEFAULT_DIR "ux0:data/rayman2/Save/A1"
static int p_mkdir1(const char *p) { int r = sceIoMkdir(p, 0777); return (r >= 0 || r == (int)0x80010011) ? 0 : -1; }   /* 0x80010011 = already exists */
static int p_exists(const char *p) { SceIoStat st; return sceIoGetstat(p, &st) >= 0; }
static int p_remove(const char *p) { return sceIoRemove(p) >= 0 ? 0 : -1; }
static int p_rename(const char *a, const char *b) { return sceIoRename(a, b) >= 0 ? 0 : -1; }
static int p_read(const char *p, uint8_t *buf, uint32_t cap) {
    SceUID fd = sceIoOpen(p, SCE_O_RDONLY, 0); if (fd < 0) return -1;
    uint32_t got = 0; while (got < cap) { int r = sceIoRead(fd, buf + got, cap - got); if (r <= 0) break; got += (uint32_t)r; }
    sceIoClose(fd); return (int)got;
}
static int p_write_sync(const char *p, const uint8_t *buf, uint32_t len) {
    SceUID fd = sceIoOpen(p, SCE_O_WRONLY | SCE_O_CREAT | SCE_O_TRUNC, 0666); if (fd < 0) return -1;
    uint32_t put = 0; while (put < len) { int r = sceIoWrite(fd, buf + put, len - put); if (r <= 0) { sceIoClose(fd); return -1; } put += (uint32_t)r; }
    int rc = sceIoClose(fd) >= 0 ? 0 : -1;
    sceIoSync("ux0:", 0);                                          /* flush the FAT write-back cache before the rename publishes the file (V2: unverified on hardware) */
    return rc;
}
static void dt_to_tm(const SceDateTime *d, struct tm *t) { memset(t, 0, sizeof *t); t->tm_year = d->year - 1900; t->tm_mon = d->month - 1; t->tm_mday = d->day; t->tm_hour = d->hour; t->tm_min = d->minute; t->tm_sec = d->second; t->tm_isdst = -1; }
static void p_list(const char *dir, void (*cb)(const char *name, uint32_t size, const struct tm *mt)) {
    SceUID d = sceIoDopen(dir); if (d < 0) return;
    SceIoDirent *e = malloc(sizeof *e); if (!e) { sceIoDclose(d); return; }
    for (;;) {
        memset(e, 0, sizeof *e); if (sceIoDread(d, e) <= 0) break;
        if (SCE_S_ISDIR(e->d_stat.st_mode)) continue;
        struct tm t; dt_to_tm(&e->d_stat.st_mtime, &t); cb(e->d_name, (uint32_t)e->d_stat.st_size, &t);
    }
    free(e); sceIoDclose(d);
}
#else
#define DEFAULT_DIR "./Save/A1"
static int p_mkdir1(const char *p) { return (mkdir(p, 0777) == 0 || errno == EEXIST) ? 0 : -1; }
static int p_exists(const char *p) { struct stat st; return stat(p, &st) == 0; }
static int p_remove(const char *p) { return unlink(p) == 0 ? 0 : -1; }
static int p_rename(const char *a, const char *b) { return rename(a, b) == 0 ? 0 : -1; }
static int p_read(const char *p, uint8_t *buf, uint32_t cap) {
    FILE *f = fopen(p, "rb"); if (!f) return -1; size_t got = fread(buf, 1, cap, f); fclose(f); return (int)got;
}
static int p_write_sync(const char *p, const uint8_t *buf, uint32_t len) {
    int fd = open(p, O_WRONLY | O_CREAT | O_TRUNC, 0666); if (fd < 0) return -1;
    uint32_t put = 0; while (put < len) { ssize_t r = write(fd, buf + put, len - put); if (r <= 0) { close(fd); return -1; } put += (uint32_t)r; }
    int rc = (fsync(fd) == 0) ? 0 : -1; if (close(fd) != 0) rc = -1; return rc;
}
static void p_list(const char *dir, void (*cb)(const char *name, uint32_t size, const struct tm *mt)) {
    DIR *d = opendir(dir); if (!d) return; struct dirent *e;
    while ((e = readdir(d))) {
        char full[1024]; struct stat st; snprintf(full, sizeof full, "%s/%s", dir, e->d_name);
        if (stat(full, &st) || !S_ISREG(st.st_mode)) continue;
        struct tm t; time_t m = st.st_mtime; localtime_r(&m, &t); cb(e->d_name, (uint32_t)st.st_size, &t);
    }
    closedir(d);
}
#endif
static int p_mkdirs(const char *path) {                              /* mkdir -p (skips an "ux0:" device prefix) */
    char b[512]; snprintf(b, sizeof b, "%s", path); size_t n = strlen(b);
    while (n > 1 && b[n - 1] == '/') b[--n] = 0;
    for (char *s = b + 1; *s; s++) if (*s == '/' && s[-1] != ':' && s[-1] != '/') { *s = 0; p_mkdir1(b); *s = '/'; }   /* parents: best effort ("ux0:data" may refuse an mkdir of an existing dir with an odd code) */
    return p_mkdir1(b);
}

/* ---------------------------------------------------------------- store */
static void bcd_date(const struct tm *tin, uint8_t d[8]) {           /* VMS directory timestamp: century year month day hour min sec weekday(0=Mon) */
    struct tm t = *tin; time_t tt = mktime(&t); if (tt != (time_t)-1) t = *localtime(&tt);   /* fills tm_wday */
    int y = t.tm_year + 1900;
#define B(v) (uint8_t)((((v) / 10) << 4) | ((v) % 10))
    d[0] = B(y / 100); d[1] = B(y % 100); d[2] = B(t.tm_mon + 1); d[3] = B(t.tm_mday); d[4] = B(t.tm_hour); d[5] = B(t.tm_min); d[6] = B(t.tm_sec); d[7] = B((t.tm_wday + 6) % 7);
#undef B
}
static int name_ok(const char *n) {
    size_t l = strlen(n); if (l < 1 || l > 12 || n[0] == '.') return 0;
    for (size_t i = 0; i < l; i++) { unsigned char ch = (unsigned char)n[i]; if (ch < 0x20 || ch > 0x7E || strchr("/\\:*?\"<>|", ch)) return 0; }
    return 1;
}
static int ent_cmp(const void *a, const void *b) { return strcmp(((const Ent *)a)->name, ((const Ent *)b)->name); }
/* companions of a file are hidden dot files ("." + name + ".tmp"/".bak"): name_ok() rejects leading dots, so they never show up as VMU files */
static void path_of(const char *name, const char *suffix, char *out, size_t cap) { if (*suffix) snprintf(out, cap, "%s/.%s%s", g_dir, name, suffix); else snprintf(out, cap, "%s/%s", g_dir, name); }
static int find_ent(const char *name) { for (int i = 0; i < g_n; i++) if (!strcmp(g_ent[i].name, name)) return i; return -1; }
static int used_blocks(void) { int u = 0; for (int i = 0; i < g_n; i++) u += g_ent[i].blocks; return u; }
static int free_blocks(void) { int f = g_card_blocks - used_blocks(); return f < 0 ? 0 : f; }

static void scan_cb(const char *name, uint32_t size, const struct tm *mt) {
    size_t l = strlen(name);
    if (l > 12) return;                                              /* ".tmp" / ".bak" companions and strangers are not VMU files */
    if (!name_ok(name) || size == 0 || size > (uint32_t)g_card_blocks * BLOCK || g_n >= MAXFILES) return;
    Ent *e = &g_ent[g_n++]; memset(e, 0, sizeof *e); snprintf(e->name, sizeof e->name, "%s", name);
    e->size = size; e->blocks = (uint16_t)((size + BLOCK - 1) / BLOCK); bcd_date(mt, e->date);
}
static void recover_cb(const char *name, uint32_t size, const struct tm *mt) {
    (void)size; (void)mt; size_t l = strlen(name); if (name[0] != '.' || l < 6 || l > 1 + 12 + 4) return;
    char base[16]; snprintf(base, sizeof base, "%.*s", (int)(l - 5), name + 1);                                  /* ".NAME.tmp" -> "NAME" */
    if (!name_ok(base)) return;
    char p[1024], orig[1024]; path_of(base, name + l - 4, p, sizeof p); path_of(base, "", orig, sizeof orig);
    if (!strcmp(name + l - 4, ".tmp")) { p_remove(p); hle_log("[vmu] removed stale temp file %s", name); }       /* never published: incomplete by definition */
    else if (!strcmp(name + l - 4, ".bak")) {                                                                  /* safe-rename sequence died between "old -> .bak" and "tmp -> new": put it back */
        if (!p_exists(orig)) { if (!p_rename(p, orig)) hle_log("[vmu] restored %s from its .bak", base); } else p_remove(p);
    }
}
static void load_dir(void) {
    g_n = 0; p_mkdirs(g_dir);
    p_list(g_dir, recover_cb);                                        /* drop stale .tmp, restore an orphaned .bak (the two never coexist for one name: .bak exists only while .tmp has been renamed away or not yet) */
    p_list(g_dir, scan_cb);
    qsort(g_ent, (size_t)g_n, sizeof g_ent[0], ent_cmp);
    g_loaded = 1; hle_log("[vmu] store %s: %d file(s), %d/%d blocks used", g_dir, g_n, used_blocks(), g_card_blocks);
}
static void ensure(void) { if (!g_loaded) load_dir(); }

/* atomic publish: write temp (+sync), then rename over the target. POSIX rename() replaces atomically. sceIoRename may refuse an existing target
 * (unverified, V2), so g_safe_rename (default on Vita) uses old -> .bak, tmp -> new, drop .bak; recover_cb repairs a death in the middle. */
static uint32_t store_write(const char *name, const uint8_t *data, int nb) {
    char tmp[1024], dst[1024], bak[1024];
    if (!name_ok(name)) return BUP_CANNOT_CREATE;
    if (nb < 1 || nb > g_card_blocks) return BUP_INVALID_PARAMETER;
    int i = find_ent(name), have = i >= 0 ? g_ent[i].blocks : 0;
    if (free_blocks() + have < nb) return BUP_DISK_FULL;
    if (i < 0 && g_n >= MAXFILES) return BUP_DISK_FULL;
    p_mkdirs(g_dir);
    path_of(name, ".tmp", tmp, sizeof tmp); path_of(name, "", dst, sizeof dst); path_of(name, ".bak", bak, sizeof bak);
    uint64_t t0 = hle_time_us();
    if (p_write_sync(tmp, data, (uint32_t)nb * BLOCK)) { p_remove(tmp); return BUP_WRITE_ERROR; }
#ifndef __vita__                                                      /* crash injection (host tests only) */
    if (g_crash && !strcmp(g_crash, "tmp")) { hle_log("[vmu] TEST: simulated power loss with the temp file written"); fflush(stderr); _exit(77); }
#endif
    if (g_safe_rename) {
        p_remove(bak);
        if (p_exists(dst) && p_rename(dst, bak)) { p_remove(tmp); return BUP_WRITE_ERROR; }
#ifndef __vita__
        if (g_crash && !strcmp(g_crash, "mid")) { hle_log("[vmu] TEST: simulated power loss between the renames"); fflush(stderr); _exit(77); }
#endif
        if (p_rename(tmp, dst)) { p_rename(bak, dst); p_remove(tmp); return BUP_WRITE_ERROR; }
        p_remove(bak);
    } else if (p_rename(tmp, dst)) { p_remove(tmp); return BUP_WRITE_ERROR; }
    if (i < 0) { i = g_n++; memset(&g_ent[i], 0, sizeof g_ent[i]); snprintf(g_ent[i].name, sizeof g_ent[i].name, "%s", name); }
    g_ent[i].size = (uint32_t)nb * BLOCK; g_ent[i].blocks = (uint16_t)nb;
    { time_t now = time(NULL); struct tm t; localtime_r(&now, &t); bcd_date(&t, g_ent[i].date); }
    qsort(g_ent, (size_t)g_n, sizeof g_ent[0], ent_cmp);
    hle_log("[vmu] wrote %s (%d block%s), %d free, %u us", name, nb, nb == 1 ? "" : "s", free_blocks(), (unsigned)(hle_time_us() - t0));
    return BUP_OK;
}

/* ---------------------------------------------------------------- guest helpers */
static int guest_range(uint32_t a, uint32_t len) { return hle_is_ram(a) && (uint64_t)(a & 0x00FFFFFFu) + len <= SH4_RAM_SIZE; }
static void gname(uint32_t a, char out[13]) {                         /* up to 12 chars, NUL terminated or not */
    memset(out, 0, 13); if (!guest_range(a, 12)) return;
    memcpy(out, hle_ptr(a), 12); out[12] = 0;
    for (int i = 0; i < 12; i++) if (out[i] == 0) { memset(out + i, 0, 12 - i); break; }
}
static int dev_of(SH4Ctx *c) { return (int)(c->r[4] & 7); }
static int dev0(SH4Ctx *c) { return c->r[4] == 0 && g_present; }

/* ---------------------------------------------------------------- BUP hooks */
static void h_attached(SH4Ctx *c) { c->r[0] = dev0(c); }
static void h_formatted(SH4Ctx *c) { c->r[0] = dev0(c) ? 0 : 0xFFFFFFFFu; }
static void h_info(SH4Ctx *c) {
    if (!dev0(c)) { c->r[0] = BUP_NO_DISK; return; }
    if (guest_range(c->r[5], 0x3C)) memset(hle_ptr(c->r[5]), 0, 0x3C);
    c->r[0] = 0;
}
static void h_free(SH4Ctx *c) { if (!dev0(c)) { c->r[0] = BUP_NO_DISK; return; } ensure(); c->r[0] = (uint32_t)free_blocks(); LG("[vmu] freeblocks=%u", c->r[0]); }
static void h_first(SH4Ctx *c) {
    int d = dev_of(c);
    if (!dev0(c)) { c->r[0] = BUP_NO_DISK; return; }
    ensure(); g_dn[d] = g_n; g_dcur[d] = 0;
    for (int i = 0; i < g_n; i++) memcpy(g_dnames[d][i], g_ent[i].name, 13);
    if (!g_dn[d]) { c->r[0] = BUP_FILE_NOT_FOUND; LG("[vmu] dirFirst -> none"); return; }
    if (guest_range(c->r[5], 20)) { memset(hle_ptr(c->r[5]), 0, 20); memcpy(hle_ptr(c->r[5]), g_dnames[d][0], strlen(g_dnames[d][0])); }
    g_dcur[d] = 1; c->r[0] = 0; LG("[vmu] dirFirst -> %s", g_dnames[d][0]);
}
static void h_next(SH4Ctx *c) {
    int d = dev_of(c);
    if (!dev0(c)) { c->r[0] = BUP_NO_DISK; return; }
    if (g_dcur[d] >= g_dn[d]) { c->r[0] = BUP_FILE_NOT_FOUND; return; }
    const char *n = g_dnames[d][g_dcur[d]++];
    if (guest_range(c->r[5], 20)) { memset(hle_ptr(c->r[5]), 0, 20); memcpy(hle_ptr(c->r[5]), n, strlen(n)); }
    c->r[0] = 0; LG("[vmu] dirNext -> %s", n);
}
static void h_size(SH4Ctx *c) {
    char n[13]; gname(c->r[5], n);
    if (!dev0(c)) { c->r[0] = 0xFFFFFFFFu; return; }
    ensure(); int i = find_ent(n); c->r[0] = i < 0 ? 0xFFFFFFFFu : g_ent[i].blocks; LG("[vmu] size(\"%s\")=%d", n, (int)c->r[0]);
}
static void h_read(SH4Ctx *c) {
    char n[13]; gname(c->r[5], n); int d = dev_of(c); uint32_t buf = c->r[6]; int nb = (int)c->r[7]; c->r[0] = 0;
    if (!dev0(c)) { g_status[d] = BUP_NO_DISK; return; }
    ensure(); int i = find_ent(n);
    if (i < 0) { g_status[d] = BUP_FILE_NOT_FOUND; LG("[vmu] read(\"%s\") not found", n); return; }
    int take = nb < g_ent[i].blocks ? nb : g_ent[i].blocks;
    if (take < 1 || !guest_range(buf, (uint32_t)take * BLOCK)) { g_status[d] = BUP_INVALID_PARAMETER; return; }
    char p[1024]; path_of(n, "", p, sizeof p);
    uint8_t *dst = hle_ptr(buf); memset(dst, 0, (size_t)take * BLOCK);
    int got = p_read(p, dst, (uint32_t)take * BLOCK);              /* a file shorter than the table says (replaced behind our back) reads zero-padded; the game's checksum decides */
    if (got < 0) { g_status[d] = BUP_CANNOT_OPEN; hle_log("[vmu] read(\"%s\") cannot open", n); return; }
    g_status[d] = BUP_OK; LG("[vmu] read(\"%s\", %d blocks)", n, take);
}
static void h_write(SH4Ctx *c) {
    char n[13]; gname(c->r[5], n); int d = dev_of(c); uint32_t buf = c->r[6]; int nb = (int)c->r[7]; c->r[0] = 0;
    if (!dev0(c)) { g_status[d] = BUP_NO_DISK; return; }
    ensure();
    if (nb < 1 || !guest_range(buf, (uint32_t)nb * BLOCK)) { g_status[d] = BUP_INVALID_PARAMETER; return; }
    g_status[d] = store_write(n, hle_ptr(buf), nb);
    if (g_status[d]) hle_log("[vmu] write(\"%s\", %d blocks) FAILED: BUP error 0x%08x", n, nb, g_status[d]);
}
static void h_del(SH4Ctx *c) {
    char n[13]; gname(c->r[5], n); int d = dev_of(c); c->r[0] = 0;
    if (!dev0(c)) { g_status[d] = BUP_NO_DISK; return; }
    ensure(); int i = find_ent(n);
    if (i < 0) { g_status[d] = BUP_FILE_NOT_FOUND; return; }
    char p[1024], b[1024]; path_of(n, "", p, sizeof p); path_of(n, ".bak", b, sizeof b);
    if (p_remove(p) && p_exists(p)) { g_status[d] = BUP_WRITE_ERROR; return; }
    p_remove(b); memmove(&g_ent[i], &g_ent[i + 1], (size_t)(g_n - i - 1) * sizeof g_ent[0]); g_n--;
    g_status[d] = BUP_OK; hle_log("[vmu] deleted %s, %d free", n, free_blocks());
}
static void h_stat(SH4Ctx *c) {                                      /* FUN_8c066280(dev,name,out8) passes a 20-byte stack struct here and copies its bytes 10..17 (the timestamp) to out8 */
    char n[13]; gname(c->r[5], n); uint32_t out = c->r[6];
    if (!dev0(c)) { c->r[0] = 0xFFFFFFFFu; return; }
    ensure(); int i = find_ent(n);
    if (i < 0 || !guest_range(out, 20)) { c->r[0] = 0xFFFFFFFFu; return; }
    uint8_t *o = hle_ptr(out); const uint8_t *bd = g_ent[i].date;
#define UB(v) (uint8_t)(((v) >> 4) * 10 + ((v) & 15))
    unsigned year = (unsigned)UB(bd[0]) * 100 + UB(bd[1]);
    memset(o, 0, 20);                                                /* 20 bytes only: FUN_8c066280's local struct is r15+4..r15+0x17, the saved PR/r14 follow (a 28-byte clear destroyed r14, the prototype's bug). The date is the RTC-style binary struct {u16 LE year, month, day, hour, min, sec, weekday} (consumer: FUN_8c04d0ec rescan) */
    o[10] = (uint8_t)year; o[11] = (uint8_t)(year >> 8); o[12] = UB(bd[2]); o[13] = UB(bd[3]); o[14] = UB(bd[4]); o[15] = UB(bd[5]); o[16] = UB(bd[6]); o[17] = UB(bd[7]);
#undef UB
    c->r[0] = 0;
}
static void h_status(SH4Ctx *c) { c->r[0] = g_status[dev_of(c)]; }
/* 0x8C0DA108 -> impl 0x8C0E7EDA(dev, name): SDK "does this file exist/open" probe called by the config save FUN_8C04C3FE (r5 = 0x8C2D04D8 = "RAYMAN_2.SY_").
 * Returns 0 or a BUP error (-251 = FILE_NOT_FOUND). The prototype returned 0 always (E2); see notes_vmu.md for what is used. */
static void h_exists(SH4Ctx *c) {
    char n[13]; gname(c->r[5], n);
    if (!dev0(c)) { c->r[0] = 0xFFFFFFFFu; return; }
    ensure(); c->r[0] = BUP_OK; LG("[vmu] exists(\"%s\") -> 0 (always, E2)", n);
}

/* ---------------------------------------------------------------- device selection */
static int g_post_rescan = 1, g_selecting, g_no_init_select;     /* g_no_init_select (R2_VMU_NO_INIT_SELECT=1, tests): leave the device deselected after input init so the lazy re-select in GetCurrentSlotNumber is exercised */
static void select_vmu(SH4Ctx *c, const char *why) {
    if (!g_present || g_selecting) return;
    SH4Ctx s = *c; g_selecting = 1; c->r[4] = 1; sh4_call(c, 0x8C04DCA0u);   /* Func 93 body: devSelect(0), validate, rescan, create default slot file */
    int r = (int)c->r[0];
    if (g_post_rescan) { c->pr = s.pr; sh4_call(c, 0x8C04D0ECu); }
    g_selecting = 0; *c = s;
    hle_log("[vmu] f%lu auto-select VMU 1 (%s) -> %d", hle_frame_count, why, r);
}
static void h_inp2(SH4Ctx *c) {                                       /* FUN_8c05ce20: input init; ends with devSelect(-1) */
    uint32_t pr = c->pr; hle_orig(c, 0x8C05CE20u); c->pr = pr;
    if (!g_no_init_select) { select_vmu(c, "input init"); c->pr = pr; }
}
static void h_curslot(SH4Ctx *c) {                                    /* FUN_8c04dd12 (Func 96 GetCurrentSlotNumber): -1 = nothing selected -> the game would ask the user */
    uint32_t pr = c->pr; hle_orig(c, 0x8C04DD12u); c->pr = pr;
    if (g_present && !g_selecting && (int)c->r[0] == -1) { select_vmu(c, "re-select"); c->pr = pr; hle_orig(c, 0x8C04DD12u); c->pr = pr; }
}

/* ---------------------------------------------------------------- DC-only UI */
static void h_text(SH4Ctx *c) {                                       /* FUN_8c082fa0(id): text getter; ids that make no sense on a console without web access */
    uint32_t id = c->r[4], pr = c->pr; hle_orig(c, 0x8C082FA0u); c->pr = pr;
    if (g_trace && hle_is_ram(c->r[0])) {                              /* R2_VMU_TRACE=1: log the save/VMU/vibration message ids (405..440, 710..717) once per 30 frames, other ids when they change (menus ask every frame) */
        static unsigned long lastf[48]; static uint32_t last[16]; int k = (id >= 405u && id <= 440u) ? (int)(id - 405u) : (id >= 710u && id <= 717u) ? (int)(36 + id - 710u) : -1;
        int log = 0;
        if (k >= 0) { if (!lastf[k] || hle_frame_count - lastf[k] >= 30) log = 1; lastf[k] = hle_frame_count + 1; }
        else { int j = (int)(id & 15); if (last[j] != id) { last[j] = id; log = 1; } }
        if (log) hle_log("[vmu] f%lu text %u \"%.60s\" pr=%08x", hle_frame_count, id, (const char *)hle_ptr(c->r[0]), pr);
    }
    if (id == 369u) { *hle_ptr(HLE_VMU_EMPTYSTR) = 0; c->r[0] = HLE_VMU_EMPTYSTR; }   /* "Rayman II Web site" */
}

/* ---------------------------------------------------------------- public */
void hle_vmu_set_dir(const char *dir) { snprintf(g_dir, sizeof g_dir, "%s", dir); g_loaded = 0; }
void hle_vmu_reload(void) { g_loaded = 0; ensure(); }
int hle_vmu_free_blocks(void) { ensure(); return free_blocks(); }
int hle_vmu_file_blocks(const char *name) { ensure(); int i = find_ent(name); return i < 0 ? -1 : g_ent[i].blocks; }

void hle_vmu_init(void) {
    const char *e;
    g_present = 1; g_card_blocks = HLE_VMU_CARD_BLOCKS; g_trace = 0; g_safe_rename = 0; g_no_init_select = 0;      /* defaults (re-init in tests) */
    if (!g_dir[0]) { e = getenv("R2_SAVE_DIR"); snprintf(g_dir, sizeof g_dir, "%s", e && *e ? e : DEFAULT_DIR); }
    if ((e = getenv("R2_VMU")) && e[0] == '0') g_present = 0;
    if ((e = getenv("R2_VMU_BLOCKS")) && atoi(e) > 0 && atoi(e) <= 200) g_card_blocks = atoi(e);   /* tests: tiny card */
    if ((e = getenv("R2_VMU_TRACE")) && e[0] == '1') g_trace = 1;
#ifdef __vita__
    g_safe_rename = 1;
#endif
    if ((e = getenv("R2_VMU_SAFE_RENAME"))) g_safe_rename = e[0] == '1';
#ifndef __vita__
    g_crash = getenv("R2_VMU_TEST_CRASH");
#endif
    if ((e = getenv("R2_VMU_NO_INIT_SELECT"))) g_no_init_select = e[0] == '1';
    hle_hook(0x8C082FA0, h_text);                                     /* always, even without a card */
    if (!g_present) { hle_log("[vmu] disabled (R2_VMU=0): the game will show its 'insert VMS' prompt"); return; }
    pad_set_vmu(1);
    hle_hook(0x8C0E69FE, h_attached); hle_hook(0x8C0E8C42, h_formatted); hle_hook(0x8C0D9CE0, h_info); hle_hook(0x8C0D9D0E, h_free);
    hle_hook(0x8C0D9D3C, h_first); hle_hook(0x8C0D9D6A, h_next); hle_hook(0x8C0DA1F8, h_size); hle_hook(0x8C0DA28C, h_read);
    hle_hook(0x8C0DA2E4, h_write); hle_hook(0x8C0DA016, h_del); hle_hook(0x8C0DA136, h_stat); hle_hook(0x8C0DA182, h_status);
    hle_hook(0x8C0DA108, h_exists);
    hle_hook(0x8C05CE20, h_inp2); hle_hook(0x8C04DD12, h_curslot);
    load_dir();
    hle_log("[vmu] virtual VMU A1 ready (store %s, safe-rename %d)", g_dir, g_safe_rename);
}
