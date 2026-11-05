/* See cpa_anim.h. Pose-table decoding re-stated from tools/dc_actor_pose.c / src/cpa/cpa_scene.c (Rayman-only) and generalised. */
#include "cpa_anim.h"
#include <math.h>
#include <string.h>

static uint32_t le32(const uint8_t *p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

int cpa_anim_tables_from_header(const uint8_t *hdr, size_t n, CpaAnimTables *t) {
    if (!hdr || n < 40 || !t) return 0;
    for (int i = 0; i < 10; i++) t->H[i] = le32(hdr + 4 * i);
    for (int i = 0; i < 10; i++) if (t->H[i] < 0x8C000000u || t->H[i] >= 0x8D000000u) return 0;
    return 1;
}

/* ---- actor ----
 * Actor chain VERIFIED on data (notes_geometry.md sec 2): SO+4 = Actor; Actor+0 = 3dData; 3dData+0xC = ObjectsTable {entries*, ?, u16 count};
 * 3dData+0x14 = State list. Runtime fields 3dData+0xA0/+0xA4/+0xAC were found with the RAM oracle (see report) and cross-checked with the
 * lifted code (FUN_8c0828a0 reads exactly +0xA0/+0xA4). */
int cpa_anim_actor_open(CpaAnimActor *a, const CpaImage *im, const CpaAnimTables *t, uint32_t soVa) {
    uint32_t type, act, d3, tbl, arr, hw;
    memset(a, 0, sizeof *a);
    a->im = im; a->T = *t; a->soVa = soVa;
    if (!cpa_rd32(im, soVa, &type) || type != 2 || !cpa_rd32(im, soVa + 4, &act) || !cpa_is_ptr(im, act) ||
        !cpa_rd32(im, act, &d3) || !cpa_is_ptr(im, d3) || !cpa_rd32(im, d3 + 0xC, &tbl) || !cpa_is_ptr(im, tbl) ||
        !cpa_rd32(im, tbl, &arr) || !cpa_is_ptr(im, arr) || !cpa_rd32(im, tbl + 8, &hw)) return 0;
    a->actorVa = act; a->d3Va = d3; a->objArr = arr; a->nObj = hw & 0xFFFF;
    a->stateList = cpa_u32(im, d3 + 0x14);
    if (cpa_is_ptr(im, a->stateList)) {
        uint32_t i = 0;
        while (i < 1024 && cpa_is_ptr(im, cpa_u32(im, a->stateList + 0x30 * i + 0x10))) i++;
        a->nStates = i;
    }
    uint32_t cl = cpa_u32(im, d3 + 0xA0), ncl = cpa_u32(im, d3 + 0xA4);
    if (cpa_is_ptr(im, cl) && ncl && ncl <= CPA_ANIM_MAXSLOT && cpa_ptr(im, cl, (size_t)ncl * 0x14)) { a->chanList = cl; a->nChanList = ncl; }
    a->curState = d3 + 0xAC;
    return 1;
}

int cpa_anim_cur(const CpaAnimActor *a, CpaAnimCur *c) {
    const CpaImage *im = a->im;
    memset(c, 0, sizeof *c);
    if (!a->chanList) return 0;
    uint32_t S = a->curState, ref = cpa_u32(im, S + 0x14), recs = cpa_u32(im, S);
    if (!cpa_is_ptr(im, ref) || !cpa_ptr(im, ref, 0x1C) || !cpa_is_ptr(im, recs)) return 0;
    c->animRef = ref; c->chanRecs = recs;
    c->animIdx = cpa_u16(im, ref + 0x18); c->frame = cpa_u16(im, S + 0x18);
    c->refFrames = cpa_u16(im, ref); { uint8_t f = 0; cpa_rd8(im, ref + 2, &f); c->fps = f; }
    c->valid = 1;
    return 1;
}

/* Animation record 0x38 B at H0 + 0x38*idx (VERIFIED FUN_8c0810a0): u16 [0] key count, +0xC channel count, +0xE frame count, +0x18 first frame,
 * +0x2E base into H5 (rows of 10 B), +0x30 base into H6 (rows of 16 B). The number of records is not stored in the header (INFERRED: bounded by the
 * region only), so the caller supplies indices that come from AnimRefs. */
int cpa_anim_info(const CpaAnimActor *a, unsigned idx, CpaAnimInfo *o) {
    const CpaImage *im = a->im;
    uint32_t ar = a->T.H[0] + 0x38u * idx;
    memset(o, 0, sizeof *o);
    if (!cpa_ptr(im, ar, 0x38)) return 0;
    o->idx = idx; o->rec = ar;
    o->nKeys = cpa_u16(im, ar); o->nCh = cpa_u16(im, ar + 0xC); o->nFrames = cpa_u16(im, ar + 0xE); o->firstFrame = cpa_u16(im, ar + 0x18);
    return o->nCh > 0 && o->nCh <= CPA_ANIM_MAXCH && o->nFrames > 0;
}

/* ---- pose ---- */
static void quat_get(const CpaImage *im, uint32_t H2, uint16_t idx, float q[4]) {
    for (int i = 0; i < 4; i++) q[i] = (float)cpa_s16(im, H2 + 8u * idx + 2u * i) * (1.0f / 32767.0f);   /* FUN_8c081200 */
}
/* Row-major rotation as stored by FUN_8c081660 / FUN_8c015c9c (VERIFIED notes_pose.md): applied to vertices as v' = v * R. */
static void quat_to_m3(const float q[4], float m[9]) {
    float x = q[0], y = q[1], z = q[2], w = q[3];
    m[0] = 1 - 2 * (y * y + z * z); m[1] = 2 * (x * y - z * w);     m[2] = 2 * (x * z + y * w);
    m[3] = 2 * (x * y + z * w);     m[4] = 1 - 2 * (x * x + z * z); m[5] = 2 * (y * z - x * w);
    m[6] = 2 * (x * z - y * w);     m[7] = 2 * (y * z + x * w);     m[8] = 1 - 2 * (x * x + y * y);
}
static void m3_mul(const float a[9], const float b[9], float r[9]) {
    float t[9];
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { float v = 0; for (int k = 0; k < 3; k++) v += a[i * 3 + k] * b[k * 3 + j]; t[i * 3 + j] = v; }
    memcpy(r, t, sizeof t);
}
static void slerp(const float a[4], const float b[4], float t, float o[4]) {
    float d = a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3], sg = 1.f, bb[4];
    if (d < 0) { d = -d; sg = -1.f; }
    for (int i = 0; i < 4; i++) bb[i] = sg * b[i];
    float k0, k1;
    if (d > 0.9995f) { k0 = 1 - t; k1 = t; }
    else { float th = acosf(d), sn = sinf(th); k0 = sinf((1 - t) * th) / sn; k1 = sinf(t * th) / sn; }
    float n = 0;
    for (int i = 0; i < 4; i++) { o[i] = k0 * a[i] + k1 * bb[i]; n += o[i] * o[i]; }
    n = n > 0 ? 1.f / sqrtf(n) : 1.f;
    for (int i = 0; i < 4; i++) o[i] *= n;
}

/* Engine slerp (FUN_8c0817c0, read from the lift; structure VERIFIED against the oracle by the residuals reported in test_anim): integer-angle table slerp.
 * theta = key s16 @+0x1C = angle between the two quaternions in units of 2*pi/8192 (INFERRED unit from the 8191 mask, 2048 quarter and 4096 half-period constants);
 * sin table = 8192 s16 entries 32767*sin(2*pi*i/8192) (RAM table at 0x8C2DE364 built at boot; 54/8192 entries differ by 1 from llround, VERIFIED by comparison).
 * out = cur * sin(theta'-u)/sin(theta') + (+-next) * sin(u)/sin(theta'), u = trunc(theta' * t); cos(theta) < 0 -> next negated and theta' = 4096 - theta. */
static short g_sin[8192]; static int g_sinInit;
static void sin_init(void) { if (g_sinInit) return; for (int i = 0; i < 8192; i++) g_sin[i] = (short)lrint(32767.0 * sin(2.0 * 3.14159265358979323846 * i / 8192.0)); g_sinInit = 1; }
static int slerp_tab(const float cur[4], const float next[4], float t, int theta, float o[4]) {
    /* Port of FUN_8c0817c0: theta is the sign-extended s16; cos<0 negates next and mirrors theta; no renormalisation; fused multiply-add for the second term. */
    sin_init();
    int th = (int16_t)theta; float nb[4];
    for (int i = 0; i < 4; i++) nb[i] = next[i];
    int c = g_sin[(th + 0x800) & 0x1FFF];
    if (c < 0) { for (int i = 0; i < 4; i++) nb[i] = -nb[i]; th = 0x1000 - th; }
    th = (int16_t)th;
    int sn = g_sin[th & 0x1FFF];
    float c1, c2;
    if (sn == 0) { c1 = 1.0f - t; c2 = t; }
    else {
        float inv = 1.0f / (float)sn;
        int u = (int)((double)(float)th * (double)t), us = (int16_t)u;   /* guest FPSCR.RM=1 (round toward zero): trunc of the exact product */
        c1 = (float)g_sin[(th - us) & 0x1FFF] * inv; c2 = (float)g_sin[us & 0x1FFF] * inv;
    }
    for (int i = 0; i < 4; i++) o[i] = fmaf(c2, nb[i], cur[i] * c1);
    return sn != 0;
}

/* Key (H9, 0x24 B): +0 float3 cached T, +0xC |T|, +0x10 u16 frame, +0x12 u16 flags, +0x14 qA (H2 idx), +0x16 qB, +0x18 scale vec (H1 idx), +0x1A dir vec (H1 idx),
 * +0x1C s16 = rotation slerp angle theta (see slerp_tab; VERIFIED by oracle), +0x1E s16 = same for the qB axes slerp (VERIFIED: exact for 0x23/0x33/0x61 keys), +0x20 s16 = direction angle used only by the R14!=0 tail of FUN_8c0819c0, which FUN_8c0823c0 never takes (it passes 0): dead for actors (was INFERRED live; only
 * seen non-zero together with scale flags), +0x22 s16 = the ease test in FUN_8c0823c0: ZERO in all 7557 channel evaluations of the oracle set, so that branch is dead in this data.
 * T = H1[+0x1A] * f@0xC (the key at t==0); the cached float3 is that plus pivot*F (pivot = H1[H6 row u16@4]), so interpolated T = lerp(cached) - pivot*F (VERIFIED, N2 exit).
 * The guest FPU runs with FPSCR.RM=1 (round toward zero): the slerp angle u = trunc(theta*t) is taken from the exact product. */
/* t = a/b. rz != 0: quotient rounded toward zero (INFERRED: with it the guest's integer angle u = trunc(theta*t) is reproduced where the nearest-rounded
 * quotient is off by one, e.g. theta 114, t = 2/3 -> guest u = 75, not 76; 71 of 7557 channels remain above 1e-4 with it, 163 without, see report). */
static float divq(float a, float b, int rz) {
    float q = a / b;
    if (rz && (double)q * (double)b > (double)a) q = nextafterf(q, 0.f);
    return q;
}

static void key_T(const CpaImage *im, uint32_t H1, uint32_t key, float T[3]) {
    uint16_t v = cpa_u16(im, key + 0x1A); float len = cpa_f32(im, key + 0xC);
    for (int i = 0; i < 3; i++) T[i] = cpa_f32(im, H1 + 12u * v + 4u * i) * len;
}

int cpa_anim_eval(const CpaAnimActor *a, unsigned animIdx, unsigned frame, int mode, CpaAnimPose *P) {
    const CpaImage *im = a->im; const uint32_t *H = a->T.H;
    memset(P, 0, sizeof *P);
    if (!cpa_anim_info(a, animIdx, &P->info)) return 0;
    const CpaAnimInfo *I = &P->info;
    if (frame < I->firstFrame || frame >= I->firstFrame + I->nFrames) return 0;
    unsigned f = frame - I->firstFrame;
    P->frame = frame; P->nCh = I->nCh;
    uint32_t ar = I->rec, b5 = cpa_u16(im, ar + 0x2E), b6 = cpa_u16(im, ar + 0x30);
    uint32_t streamBase = cpa_u16(im, H[5] + 10u * (b5 + f) + 8);          /* H5 row of this frame, u16[4] (VERIFIED FUN_8c082160) */
    for (unsigned c = 0; c < I->nCh; c++) {
        CpaAnimChan *C = &P->ch[c];
        uint32_t r6 = H[6] + 0x10u * (b6 + c);
        C->slot = cpa_u16(im, r6 + 2);
        uint16_t h4i = cpa_u16(im, H[7] + 2u * (streamBase + cpa_u16(im, r6 + 6)));
        if (h4i == 0xFFFF) { C->obj = -1; C->h4flags = 0; }
        else { C->obj = cpa_s16(im, H[4] + 6u * h4i + 2); C->h4flags = cpa_u16(im, H[4] + 6u * h4i); }
        uint32_t hbase = cpa_u32(im, r6 + 8);
        uint32_t key = H[9] + 0x24u * cpa_u32(im, H[8] + 4u * (hbase + f));
        uint16_t kf = cpa_u16(im, key + 0x10), flags = cpa_u16(im, key + 0x12);
        C->kflags = flags; C->kframe = kf; C->keyVa = key;
        for (int e = 0; e < 4; e++) C->ease[e] = cpa_u16(im, key + 0x1C + 2 * e);
        /* next key and t (VERIFIED structure, FUN_8c0823c0): flag 0x80 clear -> next = key+0x24, t = (frame-kf)/(nf-kf);
         * flag 0x80 set and flag 0x200 clear -> stays on this key; flag 0x80 and 0x200 -> blends to the channel's first key, period = nFrames (loop). */
        uint32_t nk = 0; float t = 0;
        if (!(flags & 0x80)) {
            nk = key + 0x24; uint16_t nf = cpa_u16(im, nk + 0x10);
            if (nf != kf) t = divq((float)((int)frame - (int)kf), (float)((int)nf - (int)kf), (mode & 2) != 0); else t = 1.f;
        } else if (flags & 0x200) {
            nk = H[9] + 0x24u * cpa_u32(im, H[8] + 4u * hbase);
            int per = (int)I->nFrames + (int)cpa_u16(im, nk + 0x10) - (int)kf;
            if (per > 0) t = divq((float)((int)frame - (int)kf), (float)per, (mode & 2) != 0);
        }
        C->t = t;
        if (nk) { C->nflags = cpa_u16(im, nk + 0x12); C->nframe = cpa_u16(im, nk + 0x10); for (int e = 0; e < 4; e++) C->nease[e] = cpa_u16(im, nk + 0x1C + 2 * e); }
        /* Faithful port of FUN_8c0819c0 as called by FUN_8c0823c0 (mode argument 0).
         * Rotation: t == 0 or flag 0x01 -> own qA (identity when flag 0x10); else table slerp qA(key)->qA(next) with theta = key+0x1C (flag 0x10 is NOT tested in the blend).
         * Scale (active iff (flags & 0x44) != 0x44 and (t != 0 || !(flags & 0x40))): S = lerp(H1[key+0x18], H1[next+0x18], t).
         *   (t == 0 or flag 0x02): flag 0x20 -> no axes quaternion; else qB = H2[key+0x16]; (t != 0 and no flag 0x02): qB = table slerp(key+0x16, next+0x16, theta key+0x1E).
         *   If |S0-S1| < 0.01 and |S0-S2| < 0.01 the scale is UNIFORM s = S0 (rows of the rotation multiplied by s: FUN_8c016264), else
         *   F = diag(S) * R (no axes quaternion) or F = (Rb diag(S) Rb^T) * R.
         * Translation: t == 0 or flag 0x08 -> H1[key+0x1A]*|T|; else cached float3 lerp (fmaf) minus pivot*F with pivot = H1[H6row u16@4] (mode argument 0 path). */
        float q[4] = { 0, 0, 0, 1 }, T[3], S[3] = { 1, 1, 1 }, Rm[9] = { 1,0,0, 0,1,0, 0,0,1 }, F[9];
        int blend = t > 0 && nk && !(flags & 1);
        if (blend) {
            float qa[4], q2[4];
            quat_get(im, H[2], cpa_u16(im, key + 0x14), qa); quat_get(im, H[2], cpa_u16(im, nk + 0x14), q2);
            if (mode & 1) slerp_tab(qa, q2, t, (int)(int16_t)cpa_u16(im, key + 0x1C), q); else slerp(qa, q2, t, q);
            quat_to_m3(q, Rm);
        } else if (!(flags & 0x10)) { quat_get(im, H[2], cpa_u16(im, key + 0x14), q); quat_to_m3(q, Rm); }
        memcpy(F, Rm, sizeof F);
        float qb[4] = { 0, 0, 0, 1 };
        int scaleOn = (flags & 0x44) != 0x44 && (t != 0 || !(flags & 0x40));
        if (scaleOn) {
            uint16_t vs = cpa_u16(im, key + 0x18), vn = nk ? cpa_u16(im, nk + 0x18) : vs;
            for (int i = 0; i < 3; i++) {
                float a0 = cpa_f32(im, H[1] + 12u * vs + 4u * i), b0 = cpa_f32(im, H[1] + 12u * vn + 4u * i);
                S[i] = fmaf(t, b0 - a0, a0);
            }
            int useQb = 0;
            if (t != 0 && nk && !(flags & 2)) {
                float qa[4], qn[4];
                quat_get(im, H[2], cpa_u16(im, key + 0x16), qa); quat_get(im, H[2], cpa_u16(im, nk + 0x16), qn);
                if (mode & 1) slerp_tab(qa, qn, t, (int)(int16_t)cpa_u16(im, key + 0x1E), qb); else slerp(qa, qn, t, qb);
                useQb = 1;
            } else if (!(flags & 0x20)) { quat_get(im, H[2], cpa_u16(im, key + 0x16), qb); useQb = 1; }
            int uniform = (mode & 4) ? 0 : (fabsf(S[0] - S[1]) < 0.01f && fabsf(S[0] - S[2]) < 0.01f);
            if (uniform) { for (int i = 0; i < 9; i++) F[i] = Rm[i] * S[0]; }
            else if (!useQb) { for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) F[i * 3 + j] = Rm[i * 3 + j] * S[i]; }
            else {
                float Rb[9], Tm[9], Mt[9];
                quat_to_m3(qb, Rb);
                for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) Tm[i * 3 + j] = Rb[i * 3 + j] * S[j];
                for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) { float v = 0; for (int k = 0; k < 3; k++) v += Tm[i * 3 + k] * Rb[j * 3 + k]; Mt[i * 3 + j] = v; }
                Mt[8] = ((S[1] + S[2]) - Mt[4] - Mt[0]) + S[0];
                m3_mul(Mt, Rm, F);
            }
        }
        key_T(im, H[1], key, T);
        if (t > 0 && nk && !(flags & 8)) {
            /* FUN_8c0819c0 with its mode argument 0 (as called by FUN_8c0823c0): the cached float3 of the keys is the pivot-compensated translation, so
             * T = lerp(cached T) - pivot * F, pivot = H1[H6 row u16@4] (a zero vector for most channels), F = the final scaled/rotated 3x3 (row-vector product). */
            float piv[3]; uint16_t pi = cpa_u16(im, r6 + 4);
            for (int i = 0; i < 3; i++) { float a0 = cpa_f32(im, key + 4u * i), b0 = cpa_f32(im, nk + 4u * i); T[i] = fmaf(t, b0 - a0, a0); piv[i] = cpa_f32(im, H[1] + 12u * pi + 4u * i); }
            for (int j = 0; j < 3; j++) T[j] -= piv[0] * F[j] + piv[1] * F[3 + j] + piv[2] * F[6 + j];
        }
        memcpy(C->rot, F, sizeof F);
        C->hasScale = scaleOn;
        memcpy(C->q, q, sizeof q); memcpy(C->T, T, sizeof T); memcpy(C->S, S, sizeof S);
    }
    return 1;
}

void cpa_anim_chan_matrix(const CpaAnimChan *c, float m[16]) {
    memset(m, 0, 16 * sizeof(float));
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) m[i * 4 + j] = c->rot[i * 3 + j];
    for (int j = 0; j < 3; j++) m[12 + j] = c->T[j];
    m[15] = 1.f;
}

void cpa_anim_mat_mul(const float a[16], const float b[16], float r[16]) {
    float t[16];
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) { float s = 0; for (int k = 0; k < 4; k++) s += a[i * 4 + k] * b[k * 4 + j]; t[i * 4 + j] = s; }
    memcpy(r, t, sizeof t);
}

int cpa_anim_read_matrix(const CpaImage *im, uint32_t va, float m[16]) {
    uint32_t type;
    if (!cpa_is_ptr(im, va) || !cpa_rd32(im, va, &type) || type < 1 || type > 6) return 0;
    for (int i = 0; i < 16; i++) if (!cpa_rdf(im, va + 0x28 + 4u * i, &m[i])) return 0;
    return 1;
}
int cpa_anim_read_matrix3(const CpaImage *im, uint32_t va, float r[9]) {
    if (!cpa_is_ptr(im, va)) return 0;
    for (int i = 0; i < 9; i++) if (!cpa_rdf(im, va + 4 + 4u * i, &r[i])) return 0;
    return 1;
}

int cpa_anim_read_parents(const CpaAnimActor *a, int16_t ps[CPA_ANIM_MAXSLOT]) {
    for (int i = 0; i < CPA_ANIM_MAXSLOT; i++) ps[i] = -1;
    if (!a->chanList) return 0;
    for (uint32_t i = 0; i < a->nChanList; i++) {
        uint32_t pe = cpa_u32(a->im, a->chanList + 0x14 * i + 0xC);
        if (pe >= a->chanList && pe < a->chanList + 0x14 * a->nChanList && (pe - a->chanList) % 0x14 == 0) ps[i] = (int16_t)((pe - a->chanList) / 0x14);
    }
    return (int)a->nChanList;
}

int cpa_anim_static_parents(const CpaAnimActor *a, unsigned animIdx, unsigned frame, int16_t ps[CPA_ANIM_MAXSLOT], unsigned *nPairs, unsigned *rootQ, unsigned *rootV) {
    const CpaImage *im = a->im; CpaAnimInfo I;
    for (int i = 0; i < CPA_ANIM_MAXSLOT; i++) ps[i] = -1;
    if (nPairs) *nPairs = 0;
    if (rootQ) *rootQ = 0xFFFF;
    if (rootV) *rootV = 0xFFFF;
    if (!cpa_anim_info(a, animIdx, &I) || frame < I.firstFrame || frame >= I.firstFrame + I.nFrames) return 0;
    uint32_t row = a->T.H[5] + 10u * (cpa_u16(im, I.rec + 0x2E) + (frame - I.firstFrame));
    if (!cpa_ptr(im, row, 10)) return 0;
    unsigned n = cpa_u16(im, row + 4), first = cpa_u16(im, row + 6);
    if (rootQ) *rootQ = cpa_u16(im, row); if (rootV) *rootV = cpa_u16(im, row + 2);
    if (nPairs) *nPairs = n;
    if (n && !cpa_ptr(im, a->T.H[3] + 4u * first, 4u * n)) return 0;
    for (unsigned k = 0; k < n; k++) {
        unsigned ch = cpa_u16(im, a->T.H[3] + 4u * (first + k)), par = cpa_u16(im, a->T.H[3] + 4u * (first + k) + 2);
        if (ch < CPA_ANIM_MAXSLOT && par < CPA_ANIM_MAXSLOT) ps[ch] = (int16_t)par;
    }
    return 1;
}

int cpa_anim_compose(const CpaAnimPose *P, const int16_t ps[CPA_ANIM_MAXSLOT], const float actor[16], float world[CPA_ANIM_MAXCH][16]) {
    int done[CPA_ANIM_MAXCH] = { 0 };
    for (unsigned pass = 0; pass <= P->nCh; pass++) {
        int prog = 0;
        for (unsigned i = 0; i < P->nCh; i++) {
            if (done[i]) continue;
            float L[16]; cpa_anim_chan_matrix(&P->ch[i], L);
            int par = P->ch[i].slot < CPA_ANIM_MAXSLOT ? ps[P->ch[i].slot] : -1, pi = -1;
            for (unsigned j = 0; j < P->nCh && par >= 0; j++) if (P->ch[j].slot == par) pi = (int)j;
            if (pi >= 0 && !done[pi]) continue;
            cpa_anim_mat_mul(L, pi >= 0 ? world[pi] : actor, world[i]);
            done[i] = 1; prog = 1;
        }
        if (!prog) break;
    }
    for (unsigned i = 0; i < P->nCh; i++) if (!done[i]) return 0;
    return 1;
}

uint32_t cpa_anim_obj_geo(const CpaAnimActor *a, int obj) {
    const CpaImage *im = a->im;
    if (obj < 0 || (uint32_t)obj >= a->nObj) return 0;
    uint32_t po = cpa_u32(im, a->objArr + 0x10u * (uint32_t)obj + 4), vs, geo;
    if (!cpa_is_ptr(im, po) || !cpa_rd32(im, po, &vs) || !cpa_is_ptr(im, vs) || !cpa_rd32(im, vs + 4, &geo) || !cpa_is_ptr(im, geo)) return 0;
    return geo;
}

int cpa_anim_obj_mirror(const CpaAnimActor *a, int obj, float v[3]) {
    v[0] = v[1] = v[2] = 1.f;
    if (obj < 0 || (uint32_t)obj >= a->nObj) return 0;
    uint32_t p = cpa_u32(a->im, a->objArr + 0x10u * (uint32_t)obj);
    if (!cpa_is_ptr(a->im, p)) return 0;
    for (int i = 0; i < 3; i++) if (!cpa_rdf(a->im, p + 4u * i, &v[i])) { v[0] = v[1] = v[2] = 1.f; return 0; }
    return 1;
}

const float *cpa_anim_geo_verts(const CpaImage *im, uint32_t geo, unsigned *nv) {
    uint32_t pv, cnt;
    if (!cpa_rd32(im, geo, &pv) || !cpa_rd32(im, geo + 0x2C, &cnt)) return NULL;
    unsigned n = cnt & 0xFFFF;
    if (!n || !cpa_is_ptr(im, pv)) return NULL;
    const uint8_t *p = cpa_ptr(im, pv, (size_t)n * 12);
    if (!p || ((uintptr_t)p & 3)) return NULL;
    *nv = n;
    return (const float *)p;
}

int cpa_anim_rig_pose(const CpaAnimActor *a, unsigned animIdx, unsigned frame, int mode, const float actor[16], CpaAnimRig *R) {
    memset(R, 0, sizeof *R);
    if (!cpa_anim_eval(a, animIdx, frame, mode, &R->pose)) return 0;
    if (!cpa_anim_static_parents(a, animIdx, frame, R->parentSlot, &R->nPairs, NULL, NULL)) return 0;
    if (!cpa_anim_compose(&R->pose, R->parentSlot, actor, R->world)) return 0;
    for (unsigned i = 0; i < R->pose.nCh; i++) {
        const CpaAnimChan *C = &R->pose.ch[i]; float mir[3], Mn[16] = { 0 };
        int par = C->slot < CPA_ANIM_MAXSLOT ? R->parentSlot[C->slot] : -1, drv = 0;
        for (unsigned j = 0; j < R->pose.nCh; j++) if (R->pose.ch[j].slot == par) drv = 1;
        R->undrivenParent[i] = par >= 0 && !drv;
        R->wrapped[i] = C->obj >= 0 && cpa_anim_obj_mirror(a, C->obj, mir);
        if (R->wrapped[i]) { Mn[0] = mir[0]; Mn[5] = mir[1]; Mn[10] = mir[2]; Mn[15] = 1; cpa_anim_mat_mul(Mn, R->world[i], R->objM[i]); }
        else memcpy(R->objM[i], R->world[i], sizeof R->world[i]);
    }
    return 1;
}
