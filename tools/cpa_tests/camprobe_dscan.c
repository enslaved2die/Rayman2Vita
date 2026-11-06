/* camprobe_dscan: input-dependency scan of the lifted camera director f_8c0741e0 (research tool for re_analysis/dc/notes_camera.md, N3).
 *   camprobe_dscan <dir>/snap_<rel>   (snapshot made by camlog_run --snap)
 * 1. runs the director once with the guest RAM page-protected to find every page it touches;
 * 2. for every 32-bit word in those pages it applies a few perturbations, reruns the director from the pristine state and records which words of the camera actor
 *    (the director's output block) change. Prints one line per sensitive word:  addr orig  -> list of changed camera-actor offsets.
 * Words that look like pointers are skipped (structure, not data). Oracle side only. */
#include "hle.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <sys/mman.h>
#include <unistd.h>
#include <setjmp.h>

extern void f_8c0741e0(SH4Ctx *c);
static SH4Ctx ctx0, ctx;
static uint8_t *pristine;
#define PG 16384u
static uint8_t touched[SH4_RAM_SIZE / PG + 1];
static volatile int tracking;
static void segv(int sig, siginfo_t *si, void *u) {
    (void)sig; (void)u;
    uintptr_t a = (uintptr_t)si->si_addr, b = (uintptr_t)sh4_ram;
    if (tracking && a >= b && a < b + SH4_RAM_SIZE) { uint32_t pg = (uint32_t)((a - b) / PG); touched[pg] = 1; mprotect(sh4_ram + (size_t)pg * PG, PG, PROT_READ | PROT_WRITE); return; }
    fprintf(stderr, "real fault at %p\n", si->si_addr); _exit(2);
}
static uint8_t *slurp(const char *p) { FILE *f = fopen(p, "rb"); if (!f) return NULL; uint8_t *b = malloc(SH4_RAM_SIZE); if (!b || fread(b, 1, SH4_RAM_SIZE, f) != SH4_RAM_SIZE) { fclose(f); return NULL; } fclose(f); return b; }
static uint32_t rd32(const uint8_t *r, uint32_t va) { uint32_t v; memcpy(&v, r + (va & 0xFFFFFF), 4); return v; }
static uint32_t cact;
#define OUTN 0x800
static uint8_t base_out[OUTN];
static jmp_buf jb; static volatile int armed, crashed;
static void on_fault(const char *w, uint32_t a, uint32_t b) { (void)w; (void)a; (void)b; if (armed) { crashed = 1; longjmp(jb, 1); } fprintf(stderr, "fault outside run\n"); _exit(3); }
static void run_once(void) { ctx = ctx0; crashed = 0; armed = 1; if (!setjmp(jb)) f_8c0741e0(&ctx); armed = 0; }

int main(int argc, char **argv) {
    char p[700]; sh4_fault_handler = on_fault;
    if (argc < 2) return 1;
    snprintf(p, sizeof p, "%s_pre.bin", argv[1]); pristine = slurp(p); if (!pristine) { fprintf(stderr, "bad snap\n"); return 1; }
    snprintf(p, sizeof p, "%s_pre.regs", argv[1]); { FILE *rf = fopen(p, "rb"); if (!rf || fread(&ctx0, 1, sizeof ctx0, rf) != sizeof ctx0) return 1; fclose(rf); }
    uint32_t cso = rd32(pristine, 0x8C123CF8); cact = rd32(pristine, cso + 4);
    struct sigaction sa; memset(&sa, 0, sizeof sa); sa.sa_sigaction = segv; sa.sa_flags = SA_SIGINFO | SA_NODEFER; sigemptyset(&sa.sa_mask);
    sigaction(SIGSEGV, &sa, NULL); sigaction(SIGBUS, &sa, NULL);
    memcpy(sh4_ram, pristine, SH4_RAM_SIZE);
    run_once(); memcpy(base_out, sh4_ram + ((cact) & 0xFFFFFF), OUTN);
    /* touched pages */
    memcpy(sh4_ram, pristine, SH4_RAM_SIZE);
    if (mprotect(sh4_ram, SH4_RAM_SIZE, PROT_NONE)) { perror("mprotect"); return 1; }
    tracking = 1; run_once(); tracking = 0;
    mprotect(sh4_ram, SH4_RAM_SIZE, PROT_READ | PROT_WRITE);
    int npg = 0; for (unsigned i = 0; i < SH4_RAM_SIZE / PG; i++) npg += touched[i];
    fprintf(stderr, "touched pages: %d (x %u bytes)\n", npg, PG);
    static const uint32_t pert[] = { 0x00040000u, 0x00000001u, 0x00000100u, 0x3f800000u };
    for (unsigned pg = 0; pg < SH4_RAM_SIZE / PG; pg++) {
        if (!touched[pg]) continue;
        for (uint32_t off = pg * PG; off < (pg + 1) * PG; off += 4) {
            uint32_t va = 0x8C000000u + off;
            if (va >= 0x8C00E000u && va < 0x8C010000u) continue;                 /* guest stack */
            uint32_t w = rd32(pristine, va);
            if ((w >> 24) == 0x8C || (w >> 24) == 0xAC) continue;                 /* pointer-like */
            char cl[1024]; int ncl = 0; cl[0] = 0; unsigned seen = 0;
            for (unsigned k = 0; k < sizeof pert / sizeof *pert; k++) {
                uint32_t nw = (k == 3) ? (w == 0 ? pert[k] : w) : (w ^ pert[k]);
                if (nw == w) continue;
                memcpy(sh4_ram + off, &nw, 4);
                run_once();
                if (crashed) { ncl += snprintf(cl + ncl, sizeof cl - ncl, " CRASH(k%u)", k); for (unsigned q = 0; q < SH4_RAM_SIZE / PG; q++) if (touched[q]) memcpy(sh4_ram + (size_t)q * PG, pristine + (size_t)q * PG, PG); continue; }
                for (unsigned o = 0; o < OUTN; o += 4) if (memcmp(sh4_ram + (cact & 0xFFFFFF) + o, base_out + o, 4) && !(o >= 0x680 && o < 0x6a0) && (cact & 0xFFFFFF) + o != off) {
                    /* skip nothing; record unique offsets via the line text below */
                    char t[16]; snprintf(t, sizeof t, " %x", o);
                    if (!strstr(cl, t) && ncl < 900) { ncl += snprintf(cl + ncl, sizeof cl - ncl, "%s", t); }
                }
                /* restore all touched pages (cheap) */
                for (unsigned q = 0; q < SH4_RAM_SIZE / PG; q++) if (touched[q]) memcpy(sh4_ram + (size_t)q * PG, pristine + (size_t)q * PG, PG);
            }
            if (cl[0]) printf("%08x orig %08x (%g) ->%s\n", va, w, *(float *)&w, cl);
        }
    }
    return 0;
}
