/* r2prof.c - sampler thread of the on-device guest profiler (see r2prof.h).  Only compiled with -DR2_PROF=1 (Makefile.vita VARIANT=v9_prof). */
#include "r2prof.h"
#ifdef R2_PROF
#include <psp2/kernel/threadmgr.h>
#include <psp2/kernel/processmgr.h>
#include <psp2/io/fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
uint32_t r2p_stk[512]; volatile uint32_t r2p_d; volatile int r2p_state;
extern unsigned long hle_frame_count;
#define HSZ 8192u
#define WIN_US 10000000u
#define TOPN 45
static uint32_t h_key[HSZ], h_self[HSZ], h_incl[HSZ];
static uint32_t n_samp, n_state[8], n_guest, n_bad;
static unsigned slot_of(uint32_t a) { unsigned i = (a * 2654435761u) >> 19; for (;; i = (i + 1) & (HSZ - 1)) { if (h_key[i] == a) return i; if (!h_key[i]) { h_key[i] = a; return i; } } }
static const uint32_t *s_sort_key;
static int cmp_desc(const void *a, const void *b) { uint32_t x = s_sort_key[*(const unsigned *)a], y = s_sort_key[*(const unsigned *)b]; return x < y ? 1 : x > y ? -1 : 0; }
static void put(int fd, const char *fmt, ...) __attribute__((format(printf, 2, 3)));
#include <stdarg.h>
static void put(int fd, const char *fmt, ...) { char b[256]; va_list ap; va_start(ap, fmt); int n = vsnprintf(b, sizeof b, fmt, ap); va_end(ap); if (n > 0) sceIoWrite(fd, b, (SceSize)(n < (int)sizeof b ? n : (int)sizeof b - 1)); }
static void dump(uint64_t us, unsigned long f0, unsigned long f1) {
    static unsigned idx[HSZ]; unsigned n = 0;
    for (unsigned i = 0; i < HSZ; i++) if (h_key[i]) idx[n++] = i;
    int fd = sceIoOpen("ux0:data/rayman2/prof.txt", SCE_O_WRONLY | SCE_O_CREAT | SCE_O_APPEND, 0777); if (fd < 0) return;
    const uint32_t tot = n_samp ? n_samp : 1, act = n_guest ? n_guest : 1;
    put(fd, "#window %.1fs guest frames %lu..%lu (%.1f fps) samples %u | not-in-guest-code: vsleep %.1f%% aica-lock %.1f%% sndtick %.1f%% io %.1f%% blocked-on-render %.1f%% | in guest code %.1f%% (bad stack %u)\n",
        us / 1e6, f0, f1, (f1 - f0) * 1e6 / (double)(us ? us : 1), n_samp, 100.0 * n_state[1] / tot, 100.0 * n_state[2] / tot, 100.0 * n_state[3] / tot, 100.0 * n_state[4] / tot, 100.0 * n_state[5] / tot, 100.0 * n_guest / tot, n_bad);
    put(fd, "#self\n"); s_sort_key = h_self; qsort(idx, n, sizeof idx[0], cmp_desc);
    for (unsigned k = 0; k < n && k < TOPN; k++) { unsigned i = idx[k]; if (!h_self[i]) break; put(fd, "S %08x %u %.2f\n", h_key[i], h_self[i], 100.0 * h_self[i] / act); }
    put(fd, "#incl\n"); s_sort_key = h_incl; qsort(idx, n, sizeof idx[0], cmp_desc);
    for (unsigned k = 0; k < n && k < TOPN; k++) { unsigned i = idx[k]; if (!h_incl[i]) break; put(fd, "I %08x %u %.2f\n", h_key[i], h_incl[i], 100.0 * h_incl[i] / act); }
    sceIoClose(fd);
    memset(h_key, 0, sizeof h_key); memset(h_self, 0, sizeof h_self); memset(h_incl, 0, sizeof h_incl); memset(n_state, 0, sizeof n_state); n_samp = n_guest = n_bad = 0;
}
static int sampler(SceSize args, void *argp) {
    (void)args; (void)argp;
    uint64_t w0 = sceKernelGetProcessTimeWide(); unsigned long f0 = hle_frame_count;
    for (;;) {
        sceKernelDelayThread(1000);
        const int st = r2p_state; const uint32_t d = r2p_d;
        n_samp++; n_state[st & 7]++;
        if (st == 0) {
            if (d == 0 || d > 100000u) n_bad++;
            else {
                n_guest++;
                const uint32_t n = d > 48u ? 48u : d; uint32_t seen[48]; unsigned ns = 0;
                for (uint32_t i = 0; i < n; i++) {
                    const uint32_t a = r2p_stk[(d - 1u - i) & 511u]; if (!a) continue;
                    if (i == 0) h_self[slot_of(a)]++;
                    unsigned j = 0; while (j < ns && seen[j] != a) j++;
                    if (j == ns) { seen[ns++] = a; h_incl[slot_of(a)]++; }
                }
            }
        }
        const uint64_t now = sceKernelGetProcessTimeWide();
        if (now - w0 >= WIN_US) { dump(now - w0, f0, hle_frame_count); w0 = sceKernelGetProcessTimeWide(); f0 = hle_frame_count; }
    }
    return 0;
}
void r2p_start(void) {
    SceUID t = sceKernelCreateThread("rayman2_prof", sampler, 0x10000100 - 10, 32 * 1024, 0, 0, NULL);
    if (t >= 0) sceKernelStartThread(t, 0, NULL);
}
#endif
