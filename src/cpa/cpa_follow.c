/* cpa_follow: see cpa_follow.h for the VERIFIED / INFERRED / UNKNOWN split. */
#include "cpa_follow.h"
#include <math.h>
#include <string.h>

static int ram_ok(uint32_t va, uint32_t n) { return (va >> 24) == 0x8C && (va & 0xFFFFFFu) + n <= 0x1000000u; }
static int rd32(const uint8_t *ram, uint32_t va, uint32_t *v) { if (!ram_ok(va, 4)) return -1; memcpy(v, ram + (va & 0xFFFFFFu), 4); return 0; }
static int rdf(const uint8_t *ram, uint32_t va, float *dst, int n) { if (!ram_ok(va, 4u * (uint32_t)n)) return -1; memcpy(dst, ram + (va & 0xFFFFFFu), 4u * (uint32_t)n); return 0; }

int cpa_follow_read_ram(const uint8_t *ram, CpaFollowRam *o) {
    uint32_t cso, pso, cact, cmat, pmat;
    memset(o, 0, sizeof *o);
    if (rd32(ram, CPA_FOLLOW_VA_CAMSO, &cso) || rd32(ram, CPA_FOLLOW_VA_PLAYERSO, &pso)) return -1;
    if (rd32(ram, cso + CPA_FOLLOW_SO_DATA, &cact) || rd32(ram, cso + CPA_FOLLOW_SO_MATRIX, &cmat) || rd32(ram, pso + CPA_FOLLOW_SO_MATRIX, &pmat)) return -1;
    o->camSO = cso; o->playerSO = pso; o->camActor = cact;
    uint32_t cd = cact + CPA_FOLLOW_ACT_CAMDATA;
    if (rdf(ram, cmat + CPA_FOLLOW_MAT_TRANS, o->camPos, 3) || rdf(ram, cmat + CPA_FOLLOW_MAT_ROWS, o->camRows, 9) || rdf(ram, pmat + CPA_FOLLOW_MAT_TRANS, o->playerPos, 3)) return -1;
    if (rdf(ram, cd + CPA_FOLLOW_CD_TARGET, o->target, 3) || rdf(ram, cd + CPA_FOLLOW_CD_AIM, o->aim, 3) || rdf(ram, cd + CPA_FOLLOW_CD_POS, o->camDataPos, 3) || rdf(ram, cd + CPA_FOLLOW_CD_GAIN, &o->gain, 1)) return -1;
    return 0;
}

static void cross3(const float a[3], const float b[3], float o[3]) { o[0] = a[1] * b[2] - a[2] * b[1]; o[1] = a[2] * b[0] - a[0] * b[2]; o[2] = a[0] * b[1] - a[1] * b[0]; }

int cpa_follow_rows(const float C[3], const float L[3], float rows[9]) {
    float r0[3] = { C[0] - L[0], C[1] - L[1], C[2] - L[2] };
    float n = sqrtf(r0[0] * r0[0] + r0[1] * r0[1] + r0[2] * r0[2]);
    if (!(n > 1e-9f)) return -1;
    for (int i = 0; i < 3; i++) r0[i] /= n;
    const float up[3] = { 0.f, 0.f, 1.f };
    float r2[3]; cross3(r0, up, r2);
    float m = sqrtf(r2[0] * r2[0] + r2[1] * r2[1] + r2[2] * r2[2]);
    if (m < 1e-6f) { r2[0] = 1.f; r2[1] = 0.f; r2[2] = 0.f; } else for (int i = 0; i < 3; i++) r2[i] /= m;
    float r1[3]; cross3(r2, r0, r1);
    memcpy(rows, r0, 12); memcpy(rows + 3, r1, 12); memcpy(rows + 6, r2, 12);
    return 0;
}

float cpa_follow_aim_step(float L[3], const float T[3], float speed, float dt, float outStep[3]) {
    float d[3] = { T[0] - L[0], T[1] - L[1], T[2] - L[2] };
    float n = sqrtf(d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
    float st[3] = { 0.f, 0.f, 0.f }, m = 0.f;
    if (n > 1e-9f) {
        m = speed * dt; if (m > 0.5f * n) m = 0.5f * n;
        for (int i = 0; i < 3; i++) st[i] = d[i] / n * m;
    }
    for (int i = 0; i < 3; i++) L[i] += st[i];
    if (outStep) memcpy(outStep, st, 12);
    return m;
}

int cpa_follow_goal_default(const float T[3], const float Cp[3], float G[3]) {
    float dx = Cp[0] - T[0], dy = Cp[1] - T[1], h = sqrtf(dx * dx + dy * dy);
    const float el = 0.35f, dist = 8.0f;
    if (!(h > 1e-6f)) return -1;
    G[0] = T[0] + dist * cosf(el) * dx / h; G[1] = T[1] + dist * cosf(el) * dy / h; G[2] = T[2] + dist * sinf(el);
    return 0;
}

float cpa_follow_s2_from_s1(float s1) { return 1.5f * s1; }

void cpa_follow_cfg_default(CpaFollowCfg *c) {
    c->targetOffsetZ = 1.4f; c->kTarget = 0.222f; c->kAim = 0.17f;
    c->distMin = 7.5f; c->distMax = 9.3f; c->kDist = 0.09f; c->height = 2.8f; c->kHeight = 0.025f;
}

void cpa_follow_init(CpaFollow *f, const CpaFollowCfg *cfg, const float T[3], const float L[3], const float C[3]) {
    if (cfg) f->cfg = *cfg; else cpa_follow_cfg_default(&f->cfg);
    memcpy(f->T, T, 12); memcpy(f->L, L, 12); memcpy(f->C, C, 12);
}

void cpa_follow_step_target(CpaFollow *f, const float r[3]) {
    float want[3] = { r[0], r[1], r[2] + f->cfg.targetOffsetZ };
    for (int i = 0; i < 3; i++) f->T[i] += f->cfg.kTarget * (want[i] - f->T[i]);
}

void cpa_follow_step_aim(CpaFollow *f) {
    for (int i = 0; i < 3; i++) f->L[i] += f->cfg.kAim * (f->T[i] - f->L[i]);
}

/* PLACEHOLDER (UNKNOWN controller): carry C with the aim point's motion, pull the horizontal distance into a band and the height towards L.z + height. */
void cpa_follow_step_pos(CpaFollow *f, const float Lprev[3]) {
    float dx = f->C[0] - Lprev[0], dy = f->C[1] - Lprev[1];
    float dh = sqrtf(dx * dx + dy * dy) + 1e-9f;
    float dc = dh < f->cfg.distMin ? f->cfg.distMin : (dh > f->cfg.distMax ? f->cfg.distMax : dh);
    float wx = Lprev[0] + dx / dh * dc, wy = Lprev[1] + dy / dh * dc;
    f->C[0] += (f->L[0] - Lprev[0]) + f->cfg.kDist * (wx - f->C[0]);
    f->C[1] += (f->L[1] - Lprev[1]) + f->cfg.kDist * (wy - f->C[1]);
    f->C[2] += (f->L[2] - Lprev[2]) + f->cfg.kHeight * (f->L[2] + f->cfg.height - f->C[2]);
}

void cpa_follow_step(CpaFollow *f, const float rayman[3]) {
    float Lprev[3]; memcpy(Lprev, f->L, 12);
    cpa_follow_step_target(f, rayman);
    cpa_follow_step_aim(f);
    cpa_follow_step_pos(f, Lprev);
}

void cpa_follow_camera(const CpaFollow *f, float hfov, float vfovRatio, CpaCamera *out) {
    float rows[9];
    if (cpa_follow_rows(f->C, f->L, rows)) { rows[0] = 1; rows[1] = 0; rows[2] = 0; rows[3] = 0; rows[4] = 0; rows[5] = 1; rows[6] = 0; rows[7] = 1; rows[8] = 0; }
    /* The engine camera takes forward F = -R0 (the camera looks from C towards L), up U = world up component of the look-at frame, left L := U x F (cpa_camera.h). */
    float F[3] = { -rows[0], -rows[1], -rows[2] };
    float U[3] = { rows[3], rows[4], rows[5] };
    if (U[2] < 0.f) { U[0] = -U[0]; U[1] = -U[1]; U[2] = -U[2]; }
    cpa_camera_from_rows(out, f->C, U, F, hfov, vfovRatio);
}
