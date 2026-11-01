/* hprof.c - HOST-ONLY sampling profiler for the recompiled game (not part of the Vita build).
 *   R2_PROF=<from>-<to>   sample (SIGPROF, 1 ms of CPU time) only while the guest frame counter is in [from,to)
 *   R2_PROF_OUT=<file>    result file (default build_hle/prof.tsv): "sym<TAB>self<TAB>incl" per symbol, first line "#total <n>"
 * Each sample records pc, lr and the frame-pointer chain; a symbol (dladdr) counts once per sample for "incl", the top symbol for "self".
 * Guest functions are the f_<addr> symbols; everything else (ta_*, runtime helpers, libc) shows up under its own name. */
#if !defined(__vita__)

#include <signal.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <dlfcn.h>
#include <sys/ucontext.h>
extern unsigned long hle_frame_count;
#define MAXD 48
#define MAXS 400000
static struct { uint32_t n; uintptr_t pc[MAXD]; } *samples; static uint32_t nsamples; static unsigned long from_f, to_f;
static void on_prof(int sig, siginfo_t *si, void *uc_) {
    (void)sig; (void)si;
    if (hle_frame_count < from_f || hle_frame_count >= to_f || nsamples >= MAXS) return;
    ucontext_t *uc = uc_; uintptr_t pc = uc->uc_mcontext->__ss.__pc, lr = uc->uc_mcontext->__ss.__lr, fp = uc->uc_mcontext->__ss.__fp;
    typeof(samples) s = &samples[nsamples]; s->n = 0; s->pc[s->n++] = pc; s->pc[s->n++] = lr;
    for (int i = 0; i < MAXD - 2 && fp && !(fp & 7); i++) { uintptr_t *f = (uintptr_t *)fp; uintptr_t ra = f[1], nfp = f[0]; if (!ra) break; s->pc[s->n++] = ra & 0x0000FFFFFFFFFFFFull; if (nfp <= fp) break; fp = nfp; }
    nsamples++;
}
typedef struct { char name[64]; uint32_t self, incl, last; } Sym;
static Sym *syms; static uint32_t nsyms;
static Sym *find(const char *n) { for (uint32_t i = 0; i < nsyms; i++) if (!strcmp(syms[i].name, n)) return &syms[i]; Sym *s = &syms[nsyms++]; memset(s, 0, sizeof *s); snprintf(s->name, sizeof s->name, "%s", n); s->last = ~0u; return s; }
static void dump(void) {
    struct itimerval z = {{0,0},{0,0}}; setitimer(ITIMER_PROF, &z, 0);
    if (!nsamples) return;
    const char *out = getenv("R2_PROF_OUT"); if (!out) out = "build_hle/prof.tsv";
    syms = calloc(20000, sizeof *syms);
    /* cache dladdr by pc to keep the dump fast */
    const char *skip = getenv("R2_PROF_SKIP");   /* comma list: drop samples whose chain contains one of these symbols (e.g. the host audio mixer: advance_locked) */
    uint32_t kept = 0;
    for (uint32_t i = 0; i < nsamples; i++) {
        int drop = 0;
        for (uint32_t k = 0; skip && k < samples[i].n && !drop; k++) {
            Dl_info di; if (dladdr((void *)samples[i].pc[k], &di) && di.dli_sname) { const char *s = di.dli_sname; if (*s == '_') s++; const char *q = skip; size_t L = strlen(s);
                while (*q) { const char *e = strchr(q, ','); size_t l = e ? (size_t)(e - q) : strlen(q); if (l == L && !strncmp(q, s, l)) drop = 1; q += l; if (*q == ',') q++; } }
        }
        const char *only = getenv("R2_PROF_ONLY");   /* keep only samples whose chain contains this symbol (e.g. snd_mix: the audio thread) */
        if (only) { int has = 0; for (uint32_t k = 0; k < samples[i].n && !has; k++) { Dl_info di; if (dladdr((void *)samples[i].pc[k], &di) && di.dli_sname) { const char *s = di.dli_sname; if (*s == '_') s++; if (!strcmp(s, only)) has = 1; } } if (!has) continue; }
        if (drop) continue;
        kept++;
        for (uint32_t k = 0; k < samples[i].n; k++) {
            Dl_info di; char nm[64] = "?";
            if (dladdr((void *)samples[i].pc[k], &di) && di.dli_sname) { const char *s = di.dli_sname; if (*s == '_') s++; snprintf(nm, sizeof nm, "%s", s); }
            Sym *y = find(nm);
            if (k == 0) y->self++;
            if (y->last != i) { y->incl++; y->last = i; }
        }
    }
    { const char *pcs = getenv("R2_PROF_PCS"); if (pcs) { FILE *pf = fopen(pcs, "w"); if (pf) { for (uint32_t i = 0; i < nsamples; i++) { Dl_info di; if (dladdr((void *)samples[i].pc[0], &di)) fprintf(pf, "%lx %s\n", (unsigned long)(samples[i].pc[0] - (uintptr_t)di.dli_fbase), di.dli_sname ? di.dli_sname : "?"); } fclose(pf); } } }
    FILE *o = fopen(out, "w"); if (!o) return;
    fprintf(o, "#total\t%u\n", kept);
    for (uint32_t i = 0; i < nsyms; i++) fprintf(o, "%s\t%u\t%u\n", syms[i].name, syms[i].self, syms[i].incl);
    fclose(o); fprintf(stderr, "[hprof] %u samples (frames %lu-%lu) -> %s\n", nsamples, from_f, to_f, out);
}
#ifdef R2_FUNC_COUNT
uint32_t hle_fcount[0x80000];
static unsigned long fc_from, fc_to; static uint32_t fc_snap_pending;
static void fcount_dump(void) {
    const char *o = getenv("R2_FCOUNT_OUT"); if (!o) return; FILE *f = fopen(o, "w"); if (!f) return;
    for (uint32_t i = 0; i < 0x80000; i++) if (hle_fcount[i]) fprintf(f, "%08x %u\n", 0x8C010000u + i * 2, hle_fcount[i]);
    fclose(f);
}
#endif
__attribute__((constructor)) static void hprof_init(void) {
#ifdef R2_FUNC_COUNT
    atexit(fcount_dump);
#endif
    const char *e = getenv("R2_PROF"); if (!e) return;
    if (sscanf(e, "%lu-%lu", &from_f, &to_f) != 2) return;
    samples = calloc(MAXS, sizeof *samples);
    struct sigaction sa; memset(&sa, 0, sizeof sa); sa.sa_sigaction = on_prof; sa.sa_flags = SA_SIGINFO | SA_RESTART; sigaction(SIGPROF, &sa, 0);
    const char *us = getenv("R2_PROF_US"); long iv = us ? atol(us) : 1000; struct itimerval it = {{0, iv}, {0, iv}}; setitimer(ITIMER_PROF, &it, 0);
    atexit(dump);
}
#endif
