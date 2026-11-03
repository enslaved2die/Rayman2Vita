/* hle/io.c - host file IO replacements. See io.h for the design. All addresses are guest VAs of assets/dc/1ST_READ.BIN. */
#define _GNU_SOURCE
#include "io.h"
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>

/* ---------------------------------------------------------------- layout constants (all PROVEN from the disassembly) */
enum {
    SLOT_BASE   = 0x8C11F8C4, SLOT_STRIDE = 0x840, SLOT_COUNT = 8,   /* FUN_8C012A66 */
    SLOT_FLAGS  = 0x8C123AC4,                                          /* 8 x u32 "in use", cleared by 8C012ACC */
    O_CACHEBUF  = 2080, O_CACHELEN = 2084, O_CACHEIDX = 2088, O_CACHEOFF = 2092,
    O_GD        = 2096, O_POS = 2100, O_SIZE = 2104,
    /* fake gdFs handle fields (read by the recompiled gdFs getters 8C0CEC88/8C0CECA0/8C0CEBDC/8C0CEDE4) */
    G_FAD = 0x08, G_NSECT = 0x10, G_CUR = 0x14, G_XFER = 0x18, G_REQN = 0x1C, G_VALID = 0x4C, G_ST2 = 0x4A, G_STAT = 0x50, G_ERR = 0x52,
    ST_DONE = 1, ST_BUSY = 2, ST_IDLE = 4,
    SECTOR = 2048, FAD_BIAS = 150,
    LBA_SHIFT = 18                       /* synthetic lba = (file_id+1) << 18 sectors (512 MiB per file) */
};

/* ---------------------------------------------------------------- state */
typedef struct { char path[1024]; uint32_t size; } RegFile;
typedef struct { int used; int fd; int reg; uint32_t base; } GdEnt;   /* base = first sector of the range inside the host file (DCZ members) */
typedef struct { int used; int reg; uint32_t base; uint32_t size; char name[32]; } DirEnt;
#define MAX_REG 16384
#define MAX_GD  64
#define MAX_DIRENT 512
static char g_root[900]; static int g_idx_ready;
static RegFile *g_reg; static int g_nreg;
static GdEnt g_gd[MAX_GD]; static unsigned g_ngd = 10;
static DirEnt g_dir[MAX_DIRENT]; static unsigned g_ndir = MAX_DIRENT; static unsigned g_ndir_used;
static uint32_t g_gd_base = HLE_IO_SCRATCH_BASE, g_dir_base = HLE_IO_DIRENT_BASE;
int hle_io_force_scan;

void hle_io_set_scratch(uint32_t gd_base, unsigned n_gd, uint32_t dirent_base, unsigned n_dirent) {
    g_gd_base = gd_base; g_ngd = n_gd > MAX_GD ? MAX_GD : n_gd;
    g_dir_base = dirent_base; g_ndir = n_dirent > MAX_DIRENT ? MAX_DIRENT : n_dirent;
}
void hle_io_set_root(const char *root) { g_idx_ready = 0; snprintf(g_root, sizeof g_root, "%s", root ? root : "."); size_t n = strlen(g_root); while (n > 1 && g_root[n - 1] == '/') g_root[--n] = 0; }
void hle_io_reset(void) {
    for (unsigned i = 0; i < MAX_GD; i++) { if (g_gd[i].used && g_gd[i].fd >= 0) close(g_gd[i].fd); g_gd[i].used = 0; g_gd[i].fd = -1; }
    free(g_reg); g_reg = 0; g_nreg = 0; memset(g_dir, 0, sizeof g_dir); g_ndir_used = 0; g_idx_ready = 0;
}

/* ---------------------------------------------------------------- guest memory helpers */
static int ram_range_ok(uint32_t a, uint32_t n) { return hle_is_ram(a) && ((a & 0xFFFFFFu) + (uint64_t)n) <= SH4_RAM_SIZE; }
static void guest_write(uint32_t dst, const uint8_t *src, uint32_t n) {
    if (ram_range_ok(dst, n)) { memcpy(hle_ptr(dst), src, n); return; }
    for (uint32_t i = 0; i < n; i++) ST8(dst + i, src[i]);          /* slow path (non-RAM destination) */
}
static void put16(uint32_t a, uint32_t v) { ST16(a, v); }
static void put32(uint32_t a, uint32_t v) { ST32(a, v); }

/* ---------------------------------------------------------------- directory index + path mapping
 * The whole data root is scanned ONCE (lazily, on first lookup after hle_io_set_root) into an in-memory tree. Every later
 * lookup (the game probes lots of names that do not exist on the disc: Banks\ before Music\, ~70 demo000.sav, MM01..10.wav ...)
 * is resolved case-insensitively against that tree with ZERO syscalls, so misses neither cost time nor spam the emulator log.
 * Aliases (symlinks in the PC/mac extraction that FAT cannot hold) come from <root>/ALIASES.TXT ("link<TAB>target", paths
 * relative to the root, written by tools/vita/stage_data.sh) plus a built-in list of the known ones. */
typedef struct { char *name; uint32_t size; int parent, child, next; unsigned char is_dir; int dcz; uint32_t dcz_lba; } INode;   /* dcz >= 0: virtual file inside container node dcz at sector dcz_lba */
static INode *g_idx; static int g_nidx, g_capidx;
int hle_io_stat_calls;      /* syscall counters (tests/diagnostics) */
unsigned long hle_io_lookups, hle_io_misses;
/* guest-thread synchronous file IO (open / pread / close of the fake GD-ROM handles, stat), read by perf.c: microseconds, calls, bytes */
uint64_t hle_io_t_us, hle_io_calls, hle_io_bytes;
static inline uint64_t io_now_us(void) {
#ifdef __vita__
    extern unsigned long long sceKernelGetProcessTimeWide(void); return sceKernelGetProcessTimeWide();
#else
    struct timespec ts; clock_gettime(CLOCK_MONOTONIC, &ts); return (uint64_t)ts.tv_sec * 1000000ull + (uint64_t)ts.tv_nsec / 1000;
#endif
}
#define IO_T0() uint64_t io_t0_ = io_now_us()
#define IO_T1(bytes) do { hle_io_t_us += io_now_us() - io_t0_; hle_io_calls++; hle_io_bytes += (bytes); } while (0)

static int is_sep(char ch) { return ch == '\\' || ch == '/'; }

static int idx_add(int parent, const char *name, uint32_t size, int is_dir) {
    if (g_nidx == g_capidx) { int nc = g_capidx ? g_capidx * 2 : 1024; INode *n = realloc(g_idx, (size_t)nc * sizeof *n); if (!n) return -1; g_idx = n; g_capidx = nc; }
    INode *n = &g_idx[g_nidx]; n->name = strdup(name); if (!n->name) return -1;
    n->size = size; n->parent = parent; n->child = -1; n->is_dir = (unsigned char)is_dir; n->dcz = -1; n->dcz_lba = 0;
    n->next = -1;
    if (parent >= 0) { n->next = g_idx[parent].child; g_idx[parent].child = g_nidx; }
    return g_nidx++;
}
static int idx_child(int dir, const char *comp) {
    for (int c = g_idx[dir].child; c >= 0; c = g_idx[c].next) if (!strcasecmp(g_idx[c].name, comp)) return c;
    return -1;
}

#ifdef __vita__
#include <psp2/io/dirent.h>
#include <psp2/io/stat.h>
#include <psp2/io/fcntl.h>
static void idx_scan(int node, const char *path, int depth) {
    SceUID d = sceIoDopen(path); if (d < 0 || depth > 12) return;
    SceIoDirent *e = malloc(sizeof *e); if (!e) { sceIoDclose(d); return; }
    for (;;) {
        memset(e, 0, sizeof *e);
        if (sceIoDread(d, e) <= 0) break;
        if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, "..")) continue;
        int dirf = SCE_S_ISDIR(e->d_stat.st_mode) != 0;
        int id = idx_add(node, e->d_name, dirf ? 0 : (uint32_t)e->d_stat.st_size, dirf);
        if (id >= 0 && dirf) { char sub[1024]; snprintf(sub, sizeof sub, "%s/%s", path, e->d_name); idx_scan(id, sub, depth + 1); }
    }
    free(e); sceIoDclose(d);
}
#else
static void idx_scan(int node, const char *path, int depth) {
    DIR *d = opendir(path); if (!d || depth > 12) { if (d) closedir(d); return; }
    struct dirent *e;
    while ((e = readdir(d))) {
        if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, "..")) continue;
        char full[1024]; struct stat st; snprintf(full, sizeof full, "%s/%s", path, e->d_name);
        hle_io_stat_calls++; if (stat(full, &st)) continue;                  /* follows symlinks; dangling ones are skipped */
        int dirf = S_ISDIR(st.st_mode) != 0;
        int id = idx_add(node, e->d_name, dirf ? 0 : (uint32_t)st.st_size, dirf);
        if (id >= 0 && dirf) idx_scan(id, full, depth + 1);
    }
    closedir(d);
}
#endif

static int idx_find_path(const char *rel) {                 /* rel: '/' separated, relative to root; exact walk, case-insensitive */
    int cur = 0; char comp[300]; size_t k = 0;
    for (const char *p = rel;; p++) {
        if (!*p || is_sep(*p)) { comp[k] = 0; if (k) { cur = idx_child(cur, comp); if (cur < 0) return -1; } k = 0; if (!*p) break; }
        else if (k + 1 < sizeof comp) comp[k++] = *p; else return -1;
    }
    return cur;
}
static void idx_alias(const char *link, const char *target) {
    char dirpart[300]; const char *base = link; const char *sl = strrchr(link, '/');
    int parent = 0;
    if (sl) { size_t l = (size_t)(sl - link); if (l >= sizeof dirpart) return; memcpy(dirpart, link, l); dirpart[l] = 0; base = sl + 1; parent = idx_find_path(dirpart); }
    int t = idx_find_path(target);
    if (parent < 0 || t < 0 || !*base || idx_child(parent, base) >= 0) return;          /* already a real file / target missing */
    /* the alias node holds the TARGET path in its name via a second node pointing at it: store as a file whose host path is resolved
     * through g_alias[]; simplest: mark with size and remember the target index in child (files have no children). */
    int id = idx_add(parent, base, g_idx[t].size, g_idx[t].is_dir);
    if (id >= 0) g_idx[id].child = -2 - t;                                              /* child < -1 : alias of node (-2 - child) */
}
static const char *const k_alias[][2] = {              /* symlinks of the extracted disc tree (FAT has none) */
    { "DCDATA/FIX.SNA", "DCDATA/FIX.DAT" }, { "DCDATA/LEARN_10/LEARN_10.SNA", "DCDATA/LEARN_10/LEARN_10.DAT" },
    { "DCDATA/MAPMONDE2/MAPMONDE2.SNA", "DCDATA/MAPMONDE2/MAPMONDE2.DAT" },
    { "DCDATA/SOUND/BANKS/FIX.DAT", "DCDATA/SOUND/BANKS/BNK_0.DAT" }, { "DCDATA/SOUND/BANKS/FIX.OSB", "DCDATA/SOUND/BANKS/BNK_0.OSB" },
    { "FIX.SNA", "DCDATA/FIX.DAT" }, { "LEARN_10.SNA", "DCDATA/LEARN_10/LEARN_10.DAT" },
    { "MAPMONDE2.SNA", "DCDATA/MAPMONDE2/MAPMONDE2.DAT" }, { "MAP_10.SNA", "DCDATA/MAPMONDE2/MAPMONDE2.DAT" },
};
/* DirMng.c treats every *.DCZ file as a transparent directory (FUN_8c0430b6 = name has ".DCZ", FUN_8c042ea0 loads its header and relocates
 * the entry LBAs by the container's LBA, FUN_8c043074 searches it): members appear as if they were files of the directory that holds the .DCZ.
 * Header layout (PROVEN from FUN_8c042ea0 + hexdump of MM.DCZ/ENGLISH.DCZ): u32 +0 = header bytes, u32 +8 = member count, members at +0x10, 0x2C
 * bytes each {u32 sector offset inside the .DCZ, u32 size in bytes, u8 flag@8, char name[]@10}. Members are plain files (WAV for the music).
 * This is how Music\MM01.wav .. MM10.wav, level streams etc. are found; before this the lookups missed and no music was ever started. */
static void idx_hostpath(int n, char *out, size_t cap);
static size_t read_head(const char *p, uint8_t *buf, size_t n) {
#ifdef __vita__
    SceUID fd = sceIoOpen(p, SCE_O_RDONLY, 0); if (fd < 0) return 0; int r = sceIoRead(fd, buf, (SceSize)n); sceIoClose(fd); return r > 0 ? (size_t)r : 0;
#else
    FILE *fp = fopen(p, "rb"); if (!fp) return 0; size_t r = fread(buf, 1, n, fp); fclose(fp); return r;
#endif
}
static void idx_expand_dcz(void) {
    int n0 = g_nidx; const char *off = getenv("R2_IO_NODCZ"); if (off && *off == '1') return;     /* A/B switch for tests */
    for (int i = 1; i < n0; i++) {
        INode *f = &g_idx[i];
        if (f->is_dir || f->dcz >= 0 || f->child < -1) continue;
        size_t nl = strlen(f->name);
        if (nl < 4 || strcasecmp(f->name + nl - 4, ".DCZ")) continue;
        char p[1024]; idx_hostpath(i, p, sizeof p);
        static uint8_t hdr[0x30000]; size_t got = read_head(p, hdr, 0x10);      /* header = 0x10 + count*0x2C bytes and may span several sectors (WH.DCZ: 3536) */
        if (got < 0x10) continue;
        uint32_t hbytes = hdr[0] | hdr[1] << 8 | hdr[2] << 16 | (uint32_t)hdr[3] << 24, cnt = hdr[8] | hdr[9] << 8 | hdr[10] << 16 | (uint32_t)hdr[11] << 24;
        if (cnt == 0 || cnt > 4000 || hbytes > sizeof hdr || (got = read_head(p, hdr, 0x10 + (size_t)cnt * 0x2C)) < 0x10 + (size_t)cnt * 0x2C) { hle_log("[io] DCZ %s: header not parsed (hbytes %u cnt %u)", p, hbytes, cnt); continue; }
        int parent = f->parent, added = 0; char cname[300]; snprintf(cname, sizeof cname, "%s", f->name);
        for (uint32_t k = 0; k < cnt; k++) {
            const uint8_t *e = hdr + 0x10 + k * 0x2C;
            uint32_t lba = e[0] | e[1] << 8 | e[2] << 16 | (uint32_t)e[3] << 24, size = e[4] | e[5] << 8 | e[6] << 16 | (uint32_t)e[7] << 24;
            char nm[40]; memcpy(nm, e + 10, 31); nm[31] = 0;
            if (e[8] || !nm[0]) continue;
            int ex = idx_child(parent, nm);
            if (ex >= 0) {   /* same name twice: DirMng walks the (ISO sorted) directory, the first entry that has it wins: plain file or the earlier-sorting .DCZ */
                const char *exn = g_idx[ex].dcz >= 0 ? g_idx[g_idx[ex].dcz].name : g_idx[ex].name;
                if (g_idx[ex].is_dir || g_idx[ex].child < -1 || strcasecmp(cname, exn) >= 0) continue;
                g_idx[ex].size = size; g_idx[ex].dcz = i; g_idx[ex].dcz_lba = lba; added++; continue;
            }
            int id = idx_add(parent, nm, size, 0);
            if (id >= 0) { g_idx[id].dcz = i; g_idx[id].dcz_lba = lba; added++; }
        }
        if (hle_verbose >= 2) hle_log("[io] DCZ %s: %d members", cname, added);
    }
}
static void idx_build(void) {
    for (int i = 0; i < g_nidx; i++) free(g_idx[i].name);
    g_nidx = 0; g_idx_ready = 1;
    if (idx_add(-1, "", 0, 1) < 0) return;
    idx_scan(0, g_root, 0);
    for (size_t i = 0; i < sizeof k_alias / sizeof k_alias[0]; i++) idx_alias(k_alias[i][0], k_alias[i][1]);
    int a = idx_find_path("ALIASES.TXT");
    if (a >= 0 && !g_idx[a].is_dir) {
        char p[1024]; snprintf(p, sizeof p, "%s/%s", g_root, g_idx[a].name);
        FILE *f = fopen(p, "rb");
        if (f) { char line[700]; while (fgets(line, sizeof line, f)) {
            char *t = strchr(line, '\t'); if (!t) continue; *t++ = 0; size_t n = strlen(t); while (n && (t[n - 1] == '\n' || t[n - 1] == '\r')) t[--n] = 0;
            idx_alias(line, t); } fclose(f); }
    }
    idx_expand_dcz();
    hle_log("[io] index of %s: %d entries (%d stat calls)", g_root, g_nidx, hle_io_stat_calls);
}
void hle_io_rescan(void) { g_idx_ready = 0; }

/* walk one logical path into the index starting at node cur; returns node or -1 */
static int idx_walk(const char *s, int cur) {
    char comp[300]; size_t k = 0;
    for (const char *p = s;; p++) {
        if (*p == 0 || is_sep(*p)) {
            comp[k] = 0;
            if (k) {
                if (!strcmp(comp, ".")) { /* nothing */ }
                else if (!strcmp(comp, "..")) { if (g_idx[cur].parent >= 0) cur = g_idx[cur].parent; }
                else {
                    if (!g_idx[cur].is_dir || g_idx[cur].child < -1) return -1;
                    int c = idx_child(cur, comp);
                    if (c < 0) { char *semi = strchr(comp, ';'); if (semi) { *semi = 0; c = idx_child(cur, comp); } }  /* ISO ";1" suffix */
                    if (c < 0) return -1;
                    cur = c;
                }
            }
            k = 0; if (!*p) break;
        } else if (k + 1 < sizeof comp) comp[k++] = *p;
        else return -1;
    }
    return cur;
}
static void idx_hostpath(int n, char *out, size_t cap) {      /* real-case host path of node (aliases resolve to their target) */
    if (g_idx[n].child < -1) n = -2 - g_idx[n].child;
    if (g_idx[n].dcz >= 0) n = g_idx[n].dcz;
    int chain[16], d = 0;
    for (int c = n; c > 0 && d < 16; c = g_idx[c].parent) chain[d++] = c;
    snprintf(out, cap, "%s", g_root);
    while (d--) { size_t l = strlen(out); snprintf(out + l, cap - l, "/%s", g_idx[chain[d]].name); }
}

static int resolve_ex(const char *dir, const char *name, char *out, size_t cap, uint32_t *size, uint32_t *base) {
    if (base) *base = 0;
    if (!name || !*name) return -1;
    hle_io_lookups++;
    if (!g_idx_ready) idx_build();
    if (g_nidx < 1) return -1;
    int cur = 0;
    if (dir) { cur = idx_walk(dir, 0); if (cur < 0) { hle_io_misses++; return -1; } }
    cur = idx_walk(name, cur); if (cur < 0 || g_idx[cur].is_dir) { hle_io_misses++; return -1; }
    char p[1024]; idx_hostpath(cur, p, sizeof p);
    if (strlen(p) >= cap) return -1;
    strcpy(out, p); if (size) *size = g_idx[cur].child < -1 ? g_idx[-2 - g_idx[cur].child].size : g_idx[cur].size;
    { int t = g_idx[cur].child < -1 ? -2 - g_idx[cur].child : cur; if (base && g_idx[t].dcz >= 0) *base = g_idx[t].dcz_lba; }
    return 0;
}
int hle_io_resolve(const char *dir, const char *name, char *out, size_t cap) { return resolve_ex(dir, name, out, cap, NULL, NULL); }

/* ---------------------------------------------------------------- registry (host file <-> synthetic LBA) */
static int reg_find(const char *path, uint32_t size) {
    for (int i = 0; i < g_nreg; i++) if (!strcmp(g_reg[i].path, path)) { g_reg[i].size = size; return i; }
    if (g_nreg >= MAX_REG) return -1;
    if (!g_reg) g_reg = calloc(MAX_REG, sizeof(RegFile));
    if (!g_reg) return -1;
    snprintf(g_reg[g_nreg].path, sizeof g_reg[0].path, "%s", path); g_reg[g_nreg].size = size; return g_nreg++;
}
static uint32_t reg_size(const char *path) {          /* size from the index (path is a resolved host path); stat only as a fallback */
    size_t rl = strlen(g_root);
    if (g_idx_ready && !strncmp(path, g_root, rl) && path[rl] == '/') { int n = idx_find_path(path + rl + 1); if (n >= 0) return g_idx[n].size; }
    struct stat st; hle_io_stat_calls++; IO_T0(); int sr_ = stat(path, &st); IO_T1(0); return sr_ ? 0 : (uint32_t)st.st_size; }

/* ---------------------------------------------------------------- fake gdFs handles */
static uint32_t gd_addr(unsigned i) { return g_gd_base + i * HLE_IO_GD_STRIDE; }
static GdEnt *gd_lookup(uint32_t h) {
    if (h < g_gd_base || (h - g_gd_base) % HLE_IO_GD_STRIDE) return 0;
    unsigned i = (h - g_gd_base) / HLE_IO_GD_STRIDE; if (i >= g_ngd || !g_gd[i].used) return 0;
    if (!LD16(h + G_VALID)) return 0;                     /* same validity test as the real getters */
    return &g_gd[i];
}
void hle_io_debug_slot(uint32_t slot) {
    if (!slot || !hle_is_ram(slot) || !hle_is_ram(slot + O_SIZE)) {
        hle_log("[snd-stream-file] invalid FileMng slot=%08x", slot); return;
    }
    uint32_t gd = LD32(slot + O_GD);
    GdEnt *g = gd_lookup(gd);
    if (!g || g->reg < 0 || g->reg >= g_nreg) {
        hle_log("[snd-stream-file] slot=%08x gd=%08x invalid size=%u pos=%u",
                slot, gd, LD32(slot + O_SIZE), LD32(slot + O_POS));
        return;
    }
    hle_log("[snd-stream-file] slot=%08x gd=%08x path=%s base_sector=%u size=%u pos=%u",
            slot, gd, g_reg[g->reg].path, g->base,
            LD32(slot + O_SIZE), LD32(slot + O_POS));
}

void hle_io_debug_slot_trace(uint32_t slot) {
    if (!slot || !hle_is_ram(slot) || !hle_is_ram(slot + O_SIZE)) {
        hle_log("[prison-trace] file-slot invalid=%08x", slot); return;
    }
    uint32_t gd = LD32(slot + O_GD);
    GdEnt *g = gd_lookup(gd);
    if (!g || g->reg < 0 || g->reg >= g_nreg) {
        hle_log("[prison-trace] file-slot=%08x gd=%08x unresolved size=%u pos=%u",
                slot, gd, LD32(slot + O_SIZE), LD32(slot + O_POS)); return;
    }
    const char *member = "(unresolved)";
    for (int i = 1; i < g_nidx; i++) {
        INode *n = &g_idx[i];
        if (n->dcz < 0 || n->dcz_lba != g->base) continue;
        char container[1024]; idx_hostpath(n->dcz, container, sizeof container);
        if (!strcasecmp(container, g_reg[g->reg].path)) { member = n->name; break; }
    }
    hle_log("[prison-trace] file-slot=%08x path=%s base_sector=%u member=%s size=%u pos=%u",
            slot, g_reg[g->reg].path, g->base, member, LD32(slot + O_SIZE), LD32(slot + O_POS));
}
/* fad = disc fad (lba + 150); nsect = range length. Returns fake gd handle address or 0. */
static uint32_t gd_open_range(uint32_t fad, int32_t nsect) {
    if (fad < FAD_BIAS) return 0;
    uint32_t lba = fad - FAD_BIAS; int id = (int)(lba >> LBA_SHIFT) - 1;
    if (id < 0 || id >= g_nreg) { hle_log("[io] gd_open_range: fad %u does not map to a registered file", fad); return 0; }
    unsigned i; for (i = 0; i < g_ngd; i++) if (!g_gd[i].used) break;
    if (i == g_ngd) { hle_log("[io] out of fake gdFs handles (%u)", g_ngd); return 0; }
    IO_T0(); int fd = open(g_reg[id].path, O_RDONLY); IO_T1(0);
    if (fd < 0) { hle_log("[io] open(%s): %s", g_reg[id].path, strerror(errno)); return 0; }
    g_gd[i].used = 1; g_gd[i].fd = fd; g_gd[i].reg = id; g_gd[i].base = lba & ((1u << LBA_SHIFT) - 1);
    uint32_t h = gd_addr(i);
    for (uint32_t o = 0; o < HLE_IO_GD_STRIDE; o += 4) put32(h + o, 0);
    put32(h + G_FAD, fad); put32(h + G_NSECT, (uint32_t)nsect); put32(h + G_CUR, 0);                                  /* cursor is relative to the range start; g->base is the range's first sector in the host file */
    put16(h + G_VALID, 1); put16(h + G_STAT, ST_IDLE);
    if (hle_verbose >= 2) hle_log("[io] gd open %s -> 0x%08x (%d sectors)", g_reg[id].path, h, nsect);
    return h;
}
static void gd_close(uint32_t h) {
    GdEnt *g = gd_lookup(h); if (!g) return;
    { IO_T0(); close(g->fd); IO_T1(0); } g->fd = -1; g->used = 0; put16(h + G_VALID, 0);
}
/* read n sectors at the handle's current sector offset into guest buf; zero-fill past EOF like the padded last disc sector */
/* read up to n bytes at file offset off into dst in large (1 MiB) chunks; returns bytes read */
static size_t read_chunks(int fd, uint8_t *dst, size_t n, off_t off) {
    size_t got = 0; IO_T0();
    while (got < n) { size_t want = n - got; if (want > (1u << 20)) want = 1u << 20; ssize_t r = pread(fd, dst + got, want, off + (off_t)got); if (r <= 0) break; got += (size_t)r; }
    IO_T1(got);
    return got;
}
/* read n sectors at the handle's current sector offset into guest buf; zero-fill past EOF like the padded last disc sector */
static void gd_do_read(uint32_t h, GdEnt *g, uint32_t cur, int32_t n, uint32_t buf) {
    uint32_t bytes = (uint32_t)n * SECTOR;
    uint64_t off = ((uint64_t)g->base + cur) * SECTOR;
    if (ram_range_ok(buf, bytes)) {                        /* fast path: straight into guest RAM, no bounce buffer */
        uint8_t *d = hle_ptr(buf); size_t got = read_chunks(g->fd, d, bytes, (off_t)off);
        if (got < bytes) memset(d + got, 0, bytes - got);
    } else {
        uint8_t *tmp = malloc(bytes); if (!tmp) { hle_log("[io] OOM %u", bytes); return; }
        size_t got = read_chunks(g->fd, tmp, bytes, (off_t)off);
        if (got < bytes) memset(tmp + got, 0, bytes - got);
        guest_write(buf, tmp, bytes); free(tmp);
    }
    put32(h + G_CUR, cur + (uint32_t)n); put32(h + G_XFER, bytes); put32(h + G_REQN, (uint32_t)n);
    put16(h + G_STAT, ST_DONE);
}
/* mirrors FUN_8C0CE968. enforce_align=0 for the wrapper (the real wrapper would spin forever on a misaligned buffer) */
static int32_t gd_reqrd(uint32_t h, int32_t nsect, uint32_t buf, int enforce_align) {
    GdEnt *g = gd_lookup(h); if (!g) return -10;
    if (buf & 31) { if (enforce_align) return -14; hle_log("[io] WARNING unaligned DMA buffer 0x%08x (real gdFs returns -14, wrapper would hang)", buf); }
    uint32_t fad = LD32(h + G_FAD), len = LD32(h + G_NSECT), cur = LD32(h + G_CUR);
    if (cur >= len) { put32(h + G_XFER, 0); put16(h + G_STAT, ST_DONE); return 0; }
    if (nsect > 0 && (uint32_t)nsect > len - cur) nsect = (int32_t)(len - cur);
    (void)fad;
    if (nsect <= 0) { put32(h + G_XFER, 0); put16(h + G_STAT, ST_DONE); return 0; }
    put16(h + G_ST2, 1);
    gd_do_read(h, g, cur, nsect, buf);          /* completes synchronously: status is already DONE when the guest polls */
    return nsect;
}

/* ---------------------------------------------------------------- FileMng hooks */
void hle_io_h_open(SH4Ctx *c) {
    uint32_t pname = R(4), pdir = R(5), slot = R(6);
    const char *name = pname ? hle_cstr(pname) : 0, *dir = pdir ? hle_cstr(pdir) : 0; char host[1024];
    uint32_t size = 0, base = 0;
    if (!name || resolve_ex(dir, name, host, sizeof host, &size, &base)) {
        if (hle_verbose) hle_log("[io] open FAIL dir='%s' name='%s'", dir ? dir : "", name ? name : "(null)");
        R(0) = 0xFFFFFFFFu; return;
    }
    if (!base) size = reg_size(host);                     /* plain file: authoritative size from the index; DCZ member: size from its header */
    int id = reg_find(host, size);
    uint32_t gd = id < 0 ? 0 : gd_open_range((((uint32_t)(id + 1) << LBA_SHIFT) + base) + FAD_BIAS, (int32_t)((size + 2047) >> 11));
    if (name && (!strcasecmp(name, "JailMus.wav") || !strcasecmp(name, "FO25.wav"))) {
        char chain[512] = ""; size_t used = 0;
        for (unsigned off = 0; off <= 0x200 && used + 24 < sizeof chain; off += 4) {
            uint32_t a = R(15) + off;
            if (!hle_is_ram(a) || !hle_is_ram(a + 3)) break;
            uint32_t v = LD32(a);
            if (v >= 0x8c010000u && v < 0x8c100000u)
                used += (size_t)snprintf(chain + used, sizeof chain - used, " %03x:%08x", off, v);
        }
        hle_log("[music-open-caller] name=%s wrapper_pr=%08x stack=%s", name, c->pr, chain);
    }
    put32(slot + O_GD, gd);
    put32(slot + O_SIZE, size);
    put32(slot + O_CACHELEN, SECTOR);
    put32(slot + O_CACHEOFF, 0);
    put32(slot + O_CACHEIDX, 0xFFFFFFFFu);
    put32(slot + O_CACHEBUF, (slot & 0xFFFFFFE0u) + 0x20);
    if (!gd) hle_log("[io] open: could not create gd handle for %s (real code logs FileMng.c error 9 here)", host);
    put32(slot + O_POS, 0);
    { static int ev = -1; if (ev < 0) { const char *e = getenv("R2_SND_EV"); ev = e && *e && *e != '0'; } if (ev) fprintf(stderr, "[ev] IO open %s -> %s size=%u\n", name, host, size); }   /* R2_SND_EV: file names next to the stream/sd events */
    if (hle_verbose) hle_log("[io] open %s%s%s -> %s (%u bytes) slot=0x%08x gd=0x%08x", dir ? dir : "", dir ? " + " : "", name, host, size, slot, gd);
    R(0) = 0;
}

void hle_io_h_read_async(SH4Ctx *c) {
    uint32_t slot = R(4), buf = R(6); int32_t size = (int32_t)R(5);
    int32_t n = size < 0 ? size + 2047 : size; n >>= 11;
    int32_t r = gd_reqrd(LD32(slot + O_GD), n, buf, 0);
    if (r < 1) hle_log("[io] async read: nothing started (ret %d, size %d); real wrapper would spin here", r, size);
    R(0) = (uint32_t)r;
}

void hle_io_h_poll(SH4Ctx *c) {
    uint32_t gd = LD32(R(4) + O_GD); GdEnt *g = gd_lookup(gd);
    R(0) = (g && LD16(gd + G_STAT) == ST_DONE) ? 1 : 0;           /* FUN_8C0CEC88 returns -10 when invalid; (r == 1) */
}

void hle_io_h_read_block(SH4Ctx *c) {
    uint32_t slot = R(4), buf = R(6); int32_t want = (int32_t)R(5);
    int32_t pos = (int32_t)LD32(slot + O_POS), size = (int32_t)LD32(slot + O_SIZE);
    uint32_t gd = LD32(slot + O_GD); GdEnt *g = gd_lookup(gd);
    if (!(pos < size) || want == 0 || !g) { R(0) = 0; return; }
    int32_t n = size - pos; if (want < n) n = want;
    if (ram_range_ok(buf, (uint32_t)n)) {
        uint8_t *d = hle_ptr(buf); size_t got = read_chunks(g->fd, d, (size_t)n, (off_t)((uint64_t)g->base * SECTOR + (uint32_t)pos));
        if (got < (size_t)n) memset(d + got, 0, (size_t)n - got);
    } else {
        uint8_t *tmp = malloc((size_t)n); if (!tmp) { R(0) = 0; return; }
        size_t got = read_chunks(g->fd, tmp, (size_t)n, (off_t)((uint64_t)g->base * SECTOR + (uint32_t)pos));
        if (got < (size_t)n) memset(tmp + got, 0, (size_t)n - got);
        guest_write(buf, tmp, (uint32_t)n); free(tmp);
    }
    pos += n;
    put32(slot + O_POS, (uint32_t)pos);
    put32(slot + O_CACHEIDX, 0xFFFFFFFFu);                         /* no sector cache is ever kept */
    put32(gd + G_CUR, ((uint32_t)pos + 2047) >> 11);               /* gd cursor follows, as the real sector reads would */
    put16(gd + G_STAT, ST_DONE);
    R(0) = (uint32_t)n;
}

void hle_io_h_close(SH4Ctx *c) {
    uint32_t slot = R(4);
    for (uint32_t i = 0; i < SLOT_COUNT; i++) if (slot == (uint32_t)(SLOT_BASE + i * SLOT_STRIDE)) { put32(SLOT_FLAGS + 4 * i, 0); break; }
    if (slot == 0) { R(0) = 0xFFFFFFFFu; return; }
    gd_close(LD32(slot + O_GD));
    R(0) = 0;
}

/* ---------------------------------------------------------------- DirMng lookups -> synthetic directory entries */
static uint32_t dirent_for(const char *host, uint32_t size, uint32_t base, const char *qname) {
    if (!base) size = reg_size(host);
    int id = reg_find(host, size); if (id < 0 || !g_ndir) return 0;
    const char *bn = strrchr(base ? qname : host, base ? '\\' : '/'); const char *bs = base ? qname : host; if (bn) bs = bn + 1;
    if (base) { const char *sl = strrchr(bs, '/'); if (sl) bs = sl + 1; }

    for (unsigned i = 0; i < g_ndir_used; i++) {
        if (g_dir[i].used && g_dir[i].reg == id && g_dir[i].base == base) {
            return g_dir_base + i * 0x2C;
        }
    }
    if (g_ndir_used >= g_ndir) {
        hle_log("[io] ERROR: synthetic dirent table full (%u), cannot allocate slot for %s (base %u name '%s')",
                g_ndir, host, base, bs);
        return 0;
    }
    unsigned slot = g_ndir_used++;
    g_dir[slot].used = 1;
    g_dir[slot].reg = id;
    g_dir[slot].base = base;
    g_dir[slot].size = size;
    snprintf(g_dir[slot].name, sizeof g_dir[slot].name, "%s", bs);

    uint32_t e = g_dir_base + slot * 0x2C;
    for (uint32_t o = 0; o < 0x2C; o += 4) put32(e + o, 0);
    put32(e + 0, ((uint32_t)(id + 1) << LBA_SHIFT) + base);                 /* lba (the game adds 150 before calling gdFs) */
    put32(e + 4, size);
    ST8(e + 8, 0);                                                  /* flag 0 = file */
    for (int i = 0; i < 31 && bs[i]; i++) ST8(e + 10 + i, (uint8_t)bs[i]);
    if (!strcasecmp(bs, "JailMus.wav") || !strcasecmp(bs, "FO25.wav")) {
        hle_log("[io-dirent] slot=%u name=%s host=%s base=%u e=0x%08x lba=0x%08x",
                slot, bs, host, base, e, LD32(e));
    }
    if (hle_verbose >= 2) {
        hle_log("[io] dirent alloc slot=%u/%u e=0x%08x id=%d base=%u size=%u name='%s'",
                slot, g_ndir, e, id, base, size, bs);
    }
    return e;
}
void hle_io_h_dir_find(SH4Ctx *c) {
    const char *name = R(4) ? hle_cstr(R(4)) : 0, *dir = R(5) ? hle_cstr(R(5)) : 0; char host[1024]; uint32_t size, base;
    if (!name || resolve_ex(dir, name, host, sizeof host, &size, &base)) { R(0) = 0; return; }
    R(0) = dirent_for(host, size, base, name);
}
void hle_io_h_dir_find_path(SH4Ctx *c) {
    const char *path = R(4) ? hle_cstr(R(4)) : 0; char host[1024]; uint32_t size, base;
    if (!path || resolve_ex(0, path, host, sizeof host, &size, &base)) { if (hle_verbose) hle_log("[io] dir lookup FAIL '%s'", path ? path : ""); R(0) = 0; return; }
    R(0) = dirent_for(host, size, base, path);
}

/* ---------------------------------------------------------------- gdFs entry points */
void hle_io_h_gd_open_range(SH4Ctx *c) { R(0) = gd_open_range(R(4), (int32_t)R(5)); }
void hle_io_h_gd_reqrd(SH4Ctx *c) { R(0) = (uint32_t)gd_reqrd(R(4), (int32_t)R(5), R(6), 1); }
void hle_io_h_gd_seek(SH4Ctx *c) {
    uint32_t h = R(4); int32_t off = (int32_t)R(5), whence = (int32_t)R(6), pos;
    if (!gd_lookup(h)) { R(0) = (uint32_t)-10; return; }
    int32_t len = (int32_t)LD32(h + G_NSECT);
    switch (whence) { case 0: pos = off; break; case 1: pos = (int32_t)LD32(h + G_CUR) + off; break; case 2: pos = off + len; break;
                      default: R(0) = (uint32_t)-16; return; }
    if (pos < 0 || pos > len) { R(0) = (uint32_t)-17; return; }
    put32(h + G_CUR, (uint32_t)pos); R(0) = 0;
}
void hle_io_h_gd_read(SH4Ctx *c) {
    uint32_t h = R(4); GdEnt *g = gd_lookup(h); if (!g) { R(0) = (uint32_t)-10; return; }
    gd_reqrd(h, (int32_t)R(5), R(6), 0);
    R(0) = 0;
}
void hle_io_h_gd_abort(SH4Ctx *c) { R(0) = gd_lookup(R(4)) ? 0 : (uint32_t)-10; }   /* requests complete synchronously: nothing to abort */
void hle_io_h_gd_close(SH4Ctx *c) { gd_close(R(4)); R(0) = 0; }

void hle_io_h_dirmng_init_noop(SH4Ctx *c) { (void)c; }

/* ---------------------------------------------------------------- registration */
void hle_io_init(const char *dcdata_root) {
    hle_io_set_root(dcdata_root);
    for (int i = 0; i < MAX_GD; i++) g_gd[i].fd = -1;
    hle_hook(0x8C0128BE, hle_io_h_open);
    hle_hook(0x8C012B02, hle_io_h_read_async);
    hle_hook(0x8C012B60, hle_io_h_poll);
    hle_hook(0x8C012B78, hle_io_h_read_block);
    hle_hook(0x8C012ACC, hle_io_h_close);
    hle_hook(0x8C0429D2, hle_io_h_dir_find);
    hle_hook(0x8C042B96, hle_io_h_dir_find_path);
    hle_hook(0x8C0CEFE8, hle_io_h_gd_open_range);
    hle_hook(0x8C0CE968, hle_io_h_gd_reqrd);
    hle_hook(0x8C0CE75E, hle_io_h_gd_seek);
    hle_hook(0x8C0CE802, hle_io_h_gd_read);
    hle_hook(0x8C0CECB6, hle_io_h_gd_abort);
    hle_hook(0x8C0CE6D8, hle_io_h_gd_close);
    const char *e = getenv("R2_IO_SKIP_DIRMNG");
    if (e && *e == '1') hle_hook(0x8C0427C0, hle_io_h_dirmng_init_noop);
    hle_log("[io] root=%s; FileMng/DirMng-lookup/gdFs hooks installed", g_root);
}
