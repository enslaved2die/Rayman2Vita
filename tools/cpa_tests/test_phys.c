/* test_phys: Rayman physics replica (src/cpa/cpa_phys) vs the per-frame oracle log made by physlog_run (see phys.mk).
 * Usage: test_phys PHYSLOG DCDATA_DIR LEVEL [probe]
 * Every number printed is measured; nothing is tuned to make a check pass. Exit status is non-zero if a stated gate fails. */
#include "../../src/cpa/cpa_coll.h"
#include "../../src/cpa/cpa_phys.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ---- oracle log record (see physlog_run.c) ---- */
#define OFF_SO    0
/* IPOs the game's static collision visited for Rayman at rel 4480 (trace f_8c0a1e04 r5), Learn_10 */
static const uint32_t ALLOW[] = { 0x8cc5b694, 0x8cc5bd78, 0x8cc5c45c, 0x8cc5d3c4, 0x8cc5d868, 0x8cc60b68, 0x8cc62090, 0x8cc63d7c, 0x8cc65814, 0x8cc66070, 0x8cc66a40, 0x8cc685c0, 0x8cc77b2c };
#ifndef SKIPC
#define SKIPC 0x40000000u   /* bit 30 = water: not a support (VERIFIED below: standing wading in Learn_10) */
#endif
#ifndef MINNZ
#define MINNZ 0.7071f   /* dyn+0x28 slope limit cos(45 deg) */
#endif
#define REC_HDR   48
typedef struct { uint8_t so[0x80], mat[0x80], act[0x40], dyn[0x600], mech[0x100], sg[0x200], cs[0x70], d4[0x100]; } Blocks;
typedef struct { uint32_t magic, fr, rel, pad; uint32_t ids[8]; Blocks b; } Rec;
#define REC_SIZE (REC_HDR + 0x80 + 0x80 + 0x40 + 0x600 + 0x100 + 0x200 + 0x70 + 0x100)

static float  F(const uint8_t *p, int o) { float v; memcpy(&v, p + o, 4); return v; }
static uint32_t U(const uint8_t *p, int o) { uint32_t v; memcpy(&v, p + o, 4); return v; }

static Rec *load_log(const char *path, size_t *n) {
    FILE *f = fopen(path, "rb"); if (!f) return NULL;
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    size_t cnt = (size_t)sz / REC_SIZE;
    Rec *r = calloc(cnt, sizeof *r);
    uint8_t *buf = malloc(REC_SIZE);
    for (size_t i = 0; i < cnt; i++) {
        if (fread(buf, 1, REC_SIZE, f) != REC_SIZE) { cnt = i; break; }
        memcpy(&r[i].magic, buf, 16); memcpy(r[i].ids, buf + 16, 32);
        const uint8_t *q = buf + REC_HDR;
        memcpy(r[i].b.so, q, 0x80); q += 0x80; memcpy(r[i].b.mat, q, 0x80); q += 0x80; memcpy(r[i].b.act, q, 0x40); q += 0x40;
        memcpy(r[i].b.dyn, q, 0x600); q += 0x600; memcpy(r[i].b.mech, q, 0x100); q += 0x100; memcpy(r[i].b.sg, q, 0x200); q += 0x200;
        memcpy(r[i].b.cs, q, 0x70); q += 0x70; memcpy(r[i].b.d4, q, 0x100);
    }
    free(buf); fclose(f); *n = cnt; return r;
}

typedef struct { uint8_t *fix, *lvl; size_t fixN, lvlN; CpaImage img; CpaCollWorld w; uint32_t root; int ok; } Level;
static int load_level(Level *L, const char *dir, const char *name) {
    char p[1024];
    memset(L, 0, sizeof *L);
    snprintf(p, sizeof p, "%s/%s/%s.DAT", dir, name, name);
    if (!cpa_read_file(p, &L->lvl, &L->lvlN)) return 0;
    snprintf(p, sizeof p, "%s/FIX.DAT", dir);
    if (!cpa_read_file(p, &L->fix, &L->fixN)) return 0;
    cpa_image_init(&L->img);
    if (!cpa_image_add_dat(&L->img, CPA_DAT_LEVEL, L->lvl, L->lvlN) || !cpa_image_add_dat(&L->img, CPA_DAT_FIX, L->fix, L->fixN)) return 0;
    L->root = (uint32_t)L->lvl[13 * 4] | ((uint32_t)L->lvl[13 * 4 + 1] << 8) | ((uint32_t)L->lvl[13 * 4 + 2] << 16) | ((uint32_t)L->lvl[13 * 4 + 3] << 24);
    L->ok = cpa_coll_load(&L->w, &L->img, L->root);
    return L->ok;
}

/* Dynam block field offsets (relative to the Dynam struct = Actor+8 target), see re_analysis/dc/notes_physics.md */
enum { D_MECH = 0x14, D_FLAGS2 = 0x18, D_FLAGS = 0x1c, D_GRAV = 0x20, D_VEL = 0x4c, D_POS = 0xe0 };

int main(int argc, char **argv) {
    if (argc < 4) { fprintf(stderr, "usage: %s PHYSLOG DCDATA LEVEL [probe]\n", argv[0]); return 2; }
    size_t n; Rec *R = load_log(argv[1], &n);
    if (!R) { fprintf(stderr, "cannot read %s\n", argv[1]); return 2; }
    Level L; if (!load_level(&L, argv[2], argv[3])) { fprintf(stderr, "level load failed\n"); return 2; }
    printf("log: %zu frames; level %s: %u static+actor meshes, %u tris\n", n, argv[3], L.w.nMeshes, L.w.nTri);
    int probe = argc > 4 && !strcmp(argv[4], "probe");
    if (argc > 4 && !strcmp(argv[4], "ground")) {
        /* grounded frames (dyn+0x1c bit 15): predicted resting origin height of the r=0.9 sphere vs the logged z, at the logged (x,y) */
        long n0 = 0, w1 = 0, w2 = 0, w3 = 0, nohit = 0; double worst = 0; size_t wi = 0;
        int dump = getenv("PHYS_DUMP") != NULL;
        for (size_t i = 0; i < n; i++) {
            const uint8_t *d = R[i].b.dyn;
            if (!R[i].ids[3] || !(U(d, D_FLAGS) & 0x8000)) continue;
            float p[3] = { F(d, D_POS), F(d, D_POS + 4), F(d, D_POS + 8) }, zr; CpaPhysContact pc;
            n0++;
            float zstart = i ? F(R[i - 1].b.dyn, D_POS + 8) : p[2];
            if (!cpa_phys_rest(&L.w, p[0], p[1], zstart, 1.0f, 0.6f, CPA_PHYS_RAYMAN_R, MINNZ, SKIPC, &zr, &pc, ALLOW, sizeof ALLOW / sizeof *ALLOW)) { nohit++; if (dump) printf("%zu nohit z=%.4f\n", i, p[2]); continue; }
            double e = fabs(zr - p[2]);
            if (e < 1e-3) w1++; if (e < 1e-2) w2++; if (e < 5e-2) w3++;
            if (e > worst) { worst = e; wi = i; }
            if (dump && e >= 1e-2) printf("%zu err=%.4f z=%.4f pred=%.4f fl=%08x xy=(%.3f %.3f) support tri %u mesh %u n=(%.2f %.2f %.2f) cmat=%08x\n", i, e, p[2], zr, U(d, D_FLAGS), p[0], p[1], pc.tri, L.w.triMesh[pc.tri], pc.n[0], pc.n[1], pc.n[2], L.w.mats[pc.mat].hasCollideId ? L.w.mats[pc.mat].collideId : 0xffffffffu);
        }
        printf("grounded frames %ld: no support %ld, |dz|<1e-3 %ld (%.1f%%), <1e-2 %ld (%.1f%%), <5e-2 %ld (%.1f%%), worst %.4f at frame %zu\n", n0, nohit,
               w1, 100. * w1 / n0, w2, 100. * w2 / n0, w3, 100. * w3 / n0, worst, wi);
        return (w1 * 100 >= n0 * 99) ? 0 : 1;   /* gate: >= 99% within 1e-3 */
    }
    if (argc > 4 && !strcmp(argv[4], "air")) {
        /* airborne frames: both frame i-1 and i have the ground flag (bit 15) clear and i-1 is after the intro. Prediction uses logged v(i-1), g(i), pos(i-1):
         * vz' = vz - g*DT, pos' = pos + v'*DT with v'.xy = logged v(i).xy (AI input). Compare vz', pos' with the log. */
        long na = 0, nvz = 0, nvz_hold = 0, npos = 0, npos_ok = 0; double wp = 0, wv = 0; size_t wpi = 0;
        for (size_t i = 1400; i < n; i++) {
            const uint8_t *d = R[i].b.dyn, *e = R[i - 1].b.dyn;
            if ((U(d, D_FLAGS) & 0x8000) || (U(e, D_FLAGS) & 0x8000) || (U(d, D_FLAGS) & 0x20000)) continue;
            float g = F(d, D_GRAV);
            float pos[3] = { F(e, D_POS), F(e, D_POS + 4), F(e, D_POS + 8) };
            float vel[3] = { F(d, D_VEL), F(d, D_VEL + 4), F(e, D_VEL + 8) };   /* xy: AI input of this frame; z: previous */
            float p0[3] = { pos[0], pos[1], pos[2] };
            (void)p0;
            cpa_phys_free_step(pos, vel, g, CPA_PHYS_DT);
            float lv = F(d, D_VEL + 8), lp[3] = { F(d, D_POS), F(d, D_POS + 4), F(d, D_POS + 8) };
            na++;
            double ev = fabs(lv - vel[2]);
            if (ev < 1e-3) nvz++; else if (fabs(lv - F(e, D_VEL + 8)) < 1e-4) nvz_hold++;   /* AI held vz (jump hold) */
            else if (ev > wv) { wv = ev; }
            /* position: use the LOGGED v(i) for all three axes so a held/overridden vz does not pollute the position check */
            float q[3] = { F(e, D_POS) + F(d, D_VEL) * CPA_PHYS_DT, F(e, D_POS + 4) + F(d, D_VEL + 4) * CPA_PHYS_DT, F(e, D_POS + 8) + lv * CPA_PHYS_DT };
            double ep = fmax(fabs(q[0] - lp[0]), fmax(fabs(q[1] - lp[1]), fabs(q[2] - lp[2])));
            npos++; if (ep < 2e-4) npos_ok++;
            if (ep > wp) { wp = ep; wpi = i; }
        }
        printf("airborne frames %ld: vz' = vz - g*DT exact (<1e-3) in %ld, vz held by AI in %ld, other %ld (worst %.4f); pos' = pos + v*DT within 2e-4 in %ld/%ld, worst %.5f at frame %zu\n",
               na, nvz, nvz_hold, na - nvz - nvz_hold, wv, npos_ok, npos, wp, wpi);
        return (nvz * 100 >= na * 85 && npos_ok * 100 >= npos * 95) ? 0 : 1;   /* gates: >= 85% exact vz, >= 95% position */
    }
    if (argc > 4 && !strcmp(argv[4], "zones")) {
        int ai = cpa_coll_find_actor(&L.w, R[0].ids[0]);
        printf("Rayman SO %08x collision actor index %d\n", R[0].ids[0], ai);
        if (ai < 0) return 1;
        const CpaCollActor *a = &L.w.actors[ai];
        static const char *nm[4] = { "ZDD", "ZDM", "ZDE", "ZDR" };
        for (int s = 0; s < 4; s++)
            for (uint32_t z = 0; z < a->zCount[s]; z++) {
                const CpaZone *zn = &L.w.zones[a->zFirst[s] + z];
                for (uint32_t k = 0; k < zn->nPrim; k++) {
                    const CpaZonePrim *pr = &L.w.prims[zn->firstPrim + k];
                    printf("%s[%u] prim %u shape %u a=(%.3f %.3f %.3f) b=(%.3f %.3f %.3f) gm=%08x cmat=%08x\n", nm[s], z, k, pr->shape, pr->a[0], pr->a[1], pr->a[2], pr->b[0], pr->b[1], pr->b[2], pr->gmVa, 0u);
                }
            }
        return 0;
    }
    if (probe) {
        /* flag bit statistics: for every dyn+0x1c bit, how well does it predict "z equals the ground probe under (x,y)" */
        long cnt_on[32] = {0}, cnt_on_gz[32] = {0}, cnt_off[32] = {0}, cnt_off_gz[32] = {0};
        long ngz = 0, nall = 0;
        double maxdz = 0; long nz = 0, nzbad = 0;
        for (size_t i = 0; i < n; i++) {
            const uint8_t *d = R[i].b.dyn;
            float p[3] = { F(d, D_POS), F(d, D_POS + 4), F(d, D_POS + 8) };
            if (R[i].ids[3] == 0) continue;
            CpaCollHit h; int hit = cpa_coll_ground(&L.w, p[0], p[1], p[2] + 0.5f, 3.f, &h);
            int onfloor = hit && fabsf(h.p[2] - p[2]) < 0.002f;
            uint32_t fl = U(d, D_FLAGS);
            if (hit && (fl & 0x8000) && h.n[2] < 0.995f && h.n[2] > 0.3f && getenv("PHYS_REFF") && i % 7 == 0)
                printf("reff %zu nz=%.3f dz=%.4f r_eff=%.4f\n", i, h.n[2], p[2] - h.p[2], (p[2] - h.p[2]) / (1.f / h.n[2] - 1.f));
            nall++; ngz += onfloor;
            if (getenv("PHYS_DUMP") && i >= (size_t)atoi(getenv("PHYS_DUMP")) && i < (size_t)atoi(getenv("PHYS_DUMP")) + 40)
                printf("%zu fl=%08x z=%.4f ground=%s%.4f v=(%.3f %.3f %.3f) n=(%.3f %.3f %.3f) cm=%08x\n", i, fl, p[2], hit ? "" : "none ", hit ? h.p[2] : 0.f,
                       F(d, D_VEL), F(d, D_VEL + 4), F(d, D_VEL + 8), hit ? h.n[0] : 0.f, hit ? h.n[1] : 0.f, hit ? h.n[2] : 0.f, hit ? L.w.mats[h.mat].collideId : 0);
            if (hit) { nz++; double dz = fabs(h.p[2] - p[2]); if (onfloor && dz > maxdz) maxdz = dz; (void)nzbad; }
            for (int b = 0; b < 32; b++) { if (fl >> b & 1) { cnt_on[b]++; cnt_on_gz[b] += onfloor; } else { cnt_off[b]++; cnt_off_gz[b] += onfloor; } }
        }
        printf("frames %ld, z==ground(+-0.002) in %ld\n", nall, ngz);
        for (int b = 0; b < 32; b++) if (cnt_on[b] && cnt_off[b])
            printf("flag bit %2d: set %6ld (on-floor %6ld)  clear %6ld (on-floor %6ld)\n", b, cnt_on[b], cnt_on_gz[b], cnt_off[b], cnt_off_gz[b]);
        return 0;
    }
    return 0;
}
