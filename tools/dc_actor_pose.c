/* ============================================================================
 * dc_actor_pose.c -- HOST-side Dreamcast Rayman 2 actor pose assembler
 *
 * Takes the Rayman SuperObject (0x8CBB07D0 -> Actor 0x8CCF6DC8 -> 3dData ->
 * ObjectsTable), decodes one animation frame from the 10 compressed animation
 * tables that follow the 0xB0 byte LEARN_10.DAT header, and writes the
 * world-space posed meshes of the animated body parts to an OBJ.
 * Layout and evidence: re_analysis/dc/notes_pose.md
 *
 * Build:  cc -O2 -o build/dc_actor_pose tools/dc_actor_pose.c -lm
 * Run:    build/dc_actor_pose [dcdata_dir] [anim] [frame] [out_obj]
 *         defaults: assets/dc/DCDATA  0 (Wait)  0  tools/out/rayman_pose0.obj
 * Nothing in src/ is touched or included.  Coordinates are raw engine axes
 * (right handed math with Z up for Rayman: feet at Z=0, head at Z~1.9).
 * ============================================================================ */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

typedef struct { uint32_t base; uint8_t *p; size_t n; } Img;
static Img g_lev, g_fix;

static uint8_t *load_file(const char *path, size_t *n)
{
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *b = malloc((size_t)sz + 16);
    if (!b || fread(b, 1, (size_t)sz, f) != (size_t)sz) { fclose(f); return NULL; }
    memset(b + sz, 0, 16); fclose(f); *n = (size_t)sz; return b;
}

static const uint8_t *at(uint32_t va, size_t len)
{
    Img *c[2] = { &g_lev, &g_fix };
    for (int i = 0; i < 2; i++)
        if (va >= c[i]->base && (uint64_t)va + len <= (uint64_t)c[i]->base + c[i]->n) return c[i]->p + (va - c[i]->base);
    fprintf(stderr, "bad VA read 0x%08X (+%zu)\n", va, len);
    exit(2);
}
static uint32_t U32(uint32_t va) { uint32_t v; memcpy(&v, at(va, 4), 4); return v; }
static uint16_t U16(uint32_t va) { uint16_t v; memcpy(&v, at(va, 2), 2); return v; }
static int16_t  S16(uint32_t va) { int16_t v;  memcpy(&v, at(va, 2), 2); return v; }
static float    F32(uint32_t va) { float v;    memcpy(&v, at(va, 4), 4); return v; }

/* ---- animation tables: LEARN_10.DAT header words [0..7] (file offset 0..0x1F) ---- */
static uint32_t H0, H1, H2, H4, H5, H6, H7, H8, H9;

/* H2 quaternion: 4 x s16 / 32767, order (x,y,z,w).  PROVEN: FUN_8c081200 (literal 3.0518509e-05) */
static void quat_get(uint16_t idx, float q[4])
{
    for (int i = 0; i < 4; i++) q[i] = (float)S16(H2 + 8u * idx + 2u * i) * (1.0f / 32767.0f);
}

/* 3x3 from quaternion, stored row-major exactly like FUN_8c081660 (R[0][1] = 2(xy - zw), R[1][0] = 2(xy + zw)). PROVEN */
static void quat_to_m3(const float q[4], float m[9])
{
    float x = q[0], y = q[1], z = q[2], w = q[3];
    m[0] = 1 - 2 * (y * y + z * z); m[1] = 2 * (x * y - z * w);     m[2] = 2 * (x * z + y * w);
    m[3] = 2 * (x * y + z * w);     m[4] = 1 - 2 * (x * x + z * z); m[5] = 2 * (y * z - x * w);
    m[6] = 2 * (x * z - y * w);     m[7] = 2 * (y * z + x * w);     m[8] = 1 - 2 * (x * x + y * y);
}
static void m3_mul(const float a[9], const float b[9], float r[9]) /* row-vector convention r = a*b */
{
    float t[9];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) {
        float s = 0; for (int k = 0; k < 3; k++) s += a[i * 3 + k] * b[k * 3 + j]; t[i * 3 + j] = s;
    }
    memcpy(r, t, sizeof t);
}

/* One decoded channel transform.  v' = v * R3 (row vector) + T   (engine convention, see notes) */
typedef struct {
    int      chan, obj, key;
    uint16_t flags, qa, qb, vscale, vtrans;
    float    q[4], T[3], S[3], R[9], cacheT[4];
    int      scaled;
} Chan;

static void slerp(const float a[4], const float b[4], float t, float o[4])
{
    float d = a[0]*b[0] + a[1]*b[1] + a[2]*b[2] + a[3]*b[3], s = 1.f, bb[4];
    if (d < 0) { d = -d; s = -1.f; }
    for (int i = 0; i < 4; i++) bb[i] = s * b[i];
    float k0, k1;
    if (d > 0.9995f) { k0 = 1 - t; k1 = t; }
    else { float th = acosf(d), sn = sinf(th); k0 = sinf((1 - t) * th) / sn; k1 = sinf(t * th) / sn; }
    float n = 0;
    for (int i = 0; i < 4; i++) { o[i] = k0 * a[i] + k1 * bb[i]; n += o[i] * o[i]; }
    n = 1.f / sqrtf(n); for (int i = 0; i < 4; i++) o[i] *= n;
}

/* Evaluate key (and next key when t>0).  Frame 0 / t==0 path is the PROVEN one (FUN_8c0819c0). */
static void eval_key(uint32_t key, uint32_t nextkey, float t, Chan *c)
{
    c->flags = U16(key + 0x12); c->qa = U16(key + 0x14); c->qb = U16(key + 0x16);
    c->vscale = U16(key + 0x18); c->vtrans = U16(key + 0x1A);
    for (int i = 0; i < 4; i++) c->cacheT[i] = F32(key + 4u * i);

    /* rotation: skipped (identity) when flag 0x10 set; PROVEN at t==0 */
    float q[4] = { 0, 0, 0, 1 };
    if (!(c->flags & 0x10)) {
        quat_get(c->qa, q);
        if (t > 0 && nextkey && (U16(nextkey + 0x12) & 0x10) == 0) {   /* INFERRED: slerp between consecutive keys */
            float q2[4]; quat_get(U16(nextkey + 0x14), q2); slerp(q, q2, t, q);
        }
    }
    memcpy(c->q, q, sizeof q);
    quat_to_m3(q, c->R);

    /* translation = unit/direction vector H1[+0x1A] * scalar key[+0xC].  PROVEN (FUN_8c0819c0 tail: vec*key->f[3]) */
    for (int i = 0; i < 3; i++) c->T[i] = F32(H1 + 12u * c->vtrans + 4u * i) * c->cacheT[3];
    if (t > 0 && nextkey) {                                            /* INFERRED: linear in cached translation */
        for (int i = 0; i < 3; i++) {
            float a = c->T[i], b = F32(H1 + 12u * U16(nextkey + 0x1A) + 4u * i) * F32(nextkey + 0xC);
            c->T[i] = a + (b - a) * t;
        }
    }

    /* scale vector H1[+0x18]; axes quaternion H2[+0x16].  INFERRED application order, identity for Rayman anim0 f0. */
    for (int i = 0; i < 3; i++) c->S[i] = F32(H1 + 12u * c->vscale + 4u * i);
    c->scaled = fabsf(c->S[0] - 1) > 1e-4f || fabsf(c->S[1] - 1) > 1e-4f || fabsf(c->S[2] - 1) > 1e-4f;
    if (c->scaled) {
        float qb[4], Rb[9], RbT[9], D[9] = { c->S[0],0,0, 0,c->S[1],0, 0,0,c->S[2] }, t1[9], t2[9];
        quat_get(c->qb, qb); quat_to_m3(qb, Rb);
        for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) RbT[i * 3 + j] = Rb[j * 3 + i];
        m3_mul(Rb, D, t1); m3_mul(t1, RbT, t2);          /* S in the qb axes */
        m3_mul(t2, c->R, c->R);
    }
}

/* ---- geometry ---- */
typedef struct { float x, y, z; } V3;

static long g_vbase = 1, g_vtbase = 1;

static void emit_geo(FILE *o, uint32_t geo, const Chan *c, const float W[16], const char *name, V3 *bmin, V3 *bmax, int *ntri_out)
{
    uint32_t pv = U32(geo), ptypes = U32(geo + 0x10), pelems = U32(geo + 0x14), cnt = U32(geo + 0x2C);
    uint32_t nv = cnt & 0xFFFF, ne = cnt >> 16;
    bmin->x = bmin->y = bmin->z = 1e30f; bmax->x = bmax->y = bmax->z = -1e30f;
    fprintf(o, "o %s\n", name);
    for (uint32_t i = 0; i < nv; i++) {
        float v[3] = { F32(pv + 12 * i), F32(pv + 12 * i + 4), F32(pv + 12 * i + 8) }, p[3], w[3];
        for (int j = 0; j < 3; j++) p[j] = v[0] * c->R[j] + v[1] * c->R[3 + j] + v[2] * c->R[6 + j] + c->T[j];   /* part -> actor */
        for (int j = 0; j < 3; j++) w[j] = p[0] * W[j] + p[1] * W[4 + j] + p[2] * W[8 + j] + W[12 + j];          /* actor -> world */
        fprintf(o, "v %.6f %.6f %.6f\n", w[0], w[1], w[2]);
        if (w[0] < bmin->x) bmin->x = w[0]; if (w[1] < bmin->y) bmin->y = w[1]; if (w[2] < bmin->z) bmin->z = w[2];
        if (w[0] > bmax->x) bmax->x = w[0]; if (w[1] > bmax->y) bmax->y = w[1]; if (w[2] > bmax->z) bmax->z = w[2];
    }
    int nt = 0;
    for (uint32_t e = 0; e < ne; e++) {
        if (U16(ptypes + 2 * e) != 1) continue;
        uint32_t el = U32(pelems + 4 * e), ntri = U32(el + 4) & 0xFFFF, nuv = U32(el + 4) >> 16;
        uint32_t ti = U32(el + 8), ui = U32(el + 12), uvp = U32(el + 0x14);
        fprintf(o, "g %s_e%u\n", name, e);
        for (uint32_t i = 0; i < nuv; i++) fprintf(o, "vt %.6f %.6f\n", F32(uvp + 8 * i), F32(uvp + 8 * i + 4));
        for (uint32_t t = 0; t < ntri; t++) {
            uint16_t vi[3], uj[3];
            for (int k = 0; k < 3; k++) { vi[k] = U16(ti + 6 * t + 2 * k); uj[k] = U16(ui + 6 * t + 2 * k); }
            fprintf(o, "f %ld/%ld %ld/%ld %ld/%ld\n", g_vbase + vi[0], g_vtbase + uj[0], g_vbase + vi[1], g_vtbase + uj[1], g_vbase + vi[2], g_vtbase + uj[2]);
            nt++;
        }
        g_vtbase += nuv;
    }
    g_vbase += nv;
    *ntri_out = nt;
}

static float aabb_gap(V3 a0, V3 a1, V3 b0, V3 b1)   /* 0 when overlapping, else euclidean distance between boxes */
{
    float d[3] = { fmaxf(0, fmaxf(b0.x - a1.x, a0.x - b1.x)), fmaxf(0, fmaxf(b0.y - a1.y, a0.y - b1.y)), fmaxf(0, fmaxf(b0.z - a1.z, a0.z - b1.z)) };
    return sqrtf(d[0]*d[0] + d[1]*d[1] + d[2]*d[2]);
}

int main(int argc, char **argv)
{
    const char *dir  = argc > 1 ? argv[1] : "assets/dc/DCDATA";
    int anim         = argc > 2 ? atoi(argv[2]) : 0;
    int frame        = argc > 3 ? atoi(argv[3]) : 0;
    const char *outp = argc > 4 ? argv[4] : "tools/out/rayman_pose0.obj";
    char path[512];

    snprintf(path, sizeof path, "%s/LEARN_10/LEARN_10.DAT", dir);
    g_lev.p = load_file(path, &g_lev.n);
    snprintf(path, sizeof path, "%s/FIX.DAT", dir);
    g_fix.p = load_file(path, &g_fix.n);
    if (!g_lev.p || !g_fix.p) { fprintf(stderr, "cannot load %s/LEARN_10/LEARN_10.DAT or FIX.DAT\n", dir); return 1; }
    uint32_t lh[48], fh[8];
    memcpy(lh, g_lev.p, sizeof lh); memcpy(fh, g_fix.p, sizeof fh);
    g_lev.base = lh[37]; g_fix.base = fh[4];
    H0 = lh[0]; H1 = lh[1]; H2 = lh[2]; H4 = lh[4]; H5 = lh[5]; H6 = lh[6]; H7 = lh[7]; H8 = lh[8]; H9 = lh[9];
    printf("bases LEARN_10 0x%08X FIX 0x%08X\nH0..H9: %08X %08X %08X %08X %08X %08X %08X %08X %08X (H3 %08X)\n",
           g_lev.base, g_fix.base, H0, H1, H2, H4, H5, H6, H7, H8, H9, lh[3]);

    /* Rayman SO -> Actor -> 3dData -> ObjectsTable */
    const uint32_t SO = 0x8CBB07D0;
    uint32_t actor = U32(SO + 4), d3 = U32(actor), tbl = U32(d3 + 0xC), arr = U32(tbl), ntbl = U32(tbl + 8) & 0xFFFF;
    uint32_t gm = U32(SO + 0x24);
    printf("SO 0x%08X type %u -> Actor 0x%08X -> 3dData 0x%08X -> ObjectsTable 0x%08X {entries 0x%08X, count %u}\n", SO, U32(SO), actor, d3, tbl, arr, ntbl);
    float W[16];
    if (gm && U32(gm) >= 1 && U32(gm) <= 6) for (int i = 0; i < 16; i++) W[i] = F32(gm + 0x28 + 4 * i);
    else { memset(W, 0, sizeof W); W[0] = W[5] = W[10] = W[15] = 1; }
    printf("actor global matrix 0x%08X: row3 = (%g %g %g)\n", gm, W[12], W[13], W[14]);

    /* anim 0 cross-check: Wait state -> AnimRef -> +0x18 index */
    uint32_t wait = 0x8CD2A2AC, aref = U32(wait);
    printf("State 'Wait' 0x%08X -> AnimRef 0x%08X, AnimRef u16@0x18 = %u (table-H0 index)\n", wait, aref, U16(aref + 0x18));

    /* animation record (0x38 bytes) */
    uint32_t ar = H0 + 0x38u * (uint32_t)anim;
    uint16_t nkeys = U16(ar), nch = U16(ar + 0xC), nfr = U16(ar + 0xE), first = U16(ar + 0x18), b5 = U16(ar + 0x2E), b6 = U16(ar + 0x30);
    printf("anim %d: keys %u, channels %u, frames %u, first %u, H5 base %u, H6 base %u\n", anim, nkeys, nch, nfr, first, b5, b6);
    if (frame < first || frame - first >= nfr) { fprintf(stderr, "frame out of range\n"); return 1; }
    uint32_t f = (uint32_t)(frame - first);
    uint32_t r5 = H5 + 10u * (b5 + f);
    uint16_t streamBase = U16(r5 + 8);
    printf("frame %d: H5 row {q %u, v %u, nev %u, evstart %u, streamBase %u}\n", frame, U16(r5), U16(r5 + 2), U16(r5 + 4), U16(r5 + 6), streamBase);

    FILE *o = fopen(outp, "w");
    if (!o) { fprintf(stderr, "cannot write %s\n", outp); return 1; }
    fprintf(o, "# Rayman (SO 0x8CBB07D0) anim %d frame %d, world space, raw engine axes (Z up), generated by tools/dc_actor_pose.c\n", anim, frame);

    enum { MAXC = 32 };
    V3 bmin[MAXC], bmax[MAXC]; char names[MAXC][48]; int nparts = 0;
    V3 all0 = { 1e30f, 1e30f, 1e30f }, all1 = { -1e30f, -1e30f, -1e30f };
    for (uint32_t c = 0; c < nch && c < MAXC; c++) {
        uint32_t r6 = H6 + 0x10u * (b6 + c);
        uint16_t nk = U16(r6), chidx = U16(r6 + 2), ostream = U16(r6 + 6), kstart = U16(r6 + 0xC);
        uint32_t hbase = U32(r6 + 8);
        uint16_t h4i = U16(H7 + 2u * (streamBase + ostream));
        Chan ch; memset(&ch, 0, sizeof ch);
        ch.chan = (int)c; ch.obj = h4i == 0xFFFF ? -1 : S16(H4 + 6u * h4i + 2);
        uint32_t kidx = U32(H8 + 4u * (hbase + f)), key = H9 + 0x24u * kidx, nextkey = 0; float t = 0;
        uint16_t kfr = U16(key + 0x10);
        if (!(U16(key + 0x12) & 0x80)) {
            uint32_t nk2 = H9 + 0x24u * (kidx + 1); uint16_t nf = U16(nk2 + 0x10);
            if (nf > kfr && frame > kfr) { nextkey = nk2; t = (float)(frame - kfr) / (float)(nf - kfr); }
        }
        ch.key = (int)kidx;
        eval_key(key, nextkey, t, &ch);
        printf("\nchannel %u: row{nKeys %u, idx %u, objStream %u, H8base %u, keyStart %u} H4rec %u -> ObjectsTable[%d]\n", c, nk, chidx, ostream, hbase, kstart, h4i, ch.obj);
        printf("  key %u @frame %u flags 0x%02X qA %u qB %u scaleVec %u transVec %u\n", kidx, kfr, ch.flags, ch.qa, ch.qb, ch.vscale, ch.vtrans);
        printf("  quat(xyzw) = %.4f %.4f %.4f %.4f   translation = %.4f %.4f %.4f (cached key[0..2] = %.4f %.4f %.4f, |T| key[3] = %.4f)\n",
               ch.q[0], ch.q[1], ch.q[2], ch.q[3], ch.T[0], ch.T[1], ch.T[2], ch.cacheT[0], ch.cacheT[1], ch.cacheT[2], ch.cacheT[3]);
        printf("  scale = %.3f %.3f %.3f%s\n  R rows: [%.4f %.4f %.4f] [%.4f %.4f %.4f] [%.4f %.4f %.4f]\n", ch.S[0], ch.S[1], ch.S[2], ch.scaled ? "  (APPLIED, INFERRED)" : "",
               ch.R[0], ch.R[1], ch.R[2], ch.R[3], ch.R[4], ch.R[5], ch.R[6], ch.R[7], ch.R[8]);
        if (ch.obj < 0 || (uint32_t)ch.obj >= ntbl) { printf("  no object\n"); continue; }
        uint32_t po = U32(arr + 0x10u * (uint32_t)ch.obj + 4);
        if (!po) { printf("  object slot empty\n"); continue; }
        uint32_t geo = U32(U32(po) + 4);
        snprintf(names[nparts], sizeof names[0], "ch%u_obj%d_geo%08X", c, ch.obj, geo);
        int nt; emit_geo(o, geo, &ch, W, names[nparts], &bmin[nparts], &bmax[nparts], &nt);
        printf("  geo 0x%08X: %u verts %d tris; world bbox (%.3f %.3f %.3f)-(%.3f %.3f %.3f)\n", geo, U32(geo + 0x2C) & 0xFFFF, nt,
               bmin[nparts].x, bmin[nparts].y, bmin[nparts].z, bmax[nparts].x, bmax[nparts].y, bmax[nparts].z);
        if (bmin[nparts].x < all0.x) all0.x = bmin[nparts].x; if (bmin[nparts].y < all0.y) all0.y = bmin[nparts].y; if (bmin[nparts].z < all0.z) all0.z = bmin[nparts].z;
        if (bmax[nparts].x > all1.x) all1.x = bmax[nparts].x; if (bmax[nparts].y > all1.y) all1.y = bmax[nparts].y; if (bmax[nparts].z > all1.z) all1.z = bmax[nparts].z;
        nparts++;
    }
    fclose(o);
    printf("\n== assembled body: %d parts, bbox (%.3f %.3f %.3f)-(%.3f %.3f %.3f), size %.3f x %.3f x %.3f ==\n", nparts,
           all0.x, all0.y, all0.z, all1.x, all1.y, all1.z, all1.x - all0.x, all1.y - all0.y, all1.z - all0.z);
    printf("pairwise AABB gap (0 = boxes overlap/touch), part index = emitted order:\n      ");
    for (int j = 0; j < nparts; j++) printf("%6d", j);
    printf("\n");
    for (int i = 0; i < nparts; i++) {
        printf("%2d    ", i);
        for (int j = 0; j < nparts; j++) printf("%6.2f", i == j ? 0.f : aabb_gap(bmin[i], bmax[i], bmin[j], bmax[j]));
        printf("   %s\n", names[i]);
    }
    printf("wrote %s\n", outp);
    return 0;
}
