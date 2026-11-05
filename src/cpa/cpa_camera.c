/* cpa_camera: see cpa_camera.h for evidence tags. */
#include "cpa_camera.h"
#include <math.h>
#include <string.h>

static void cross3(const float a[3], const float b[3], float o[3]) {
    float t[3] = { a[1]*b[2] - a[2]*b[1], a[2]*b[0] - a[0]*b[2], a[0]*b[1] - a[1]*b[0] };
    memcpy(o, t, sizeof t);
}
static int norm3(float v[3]) {
    double l = sqrt((double)v[0]*v[0] + (double)v[1]*v[1] + (double)v[2]*v[2]);
    if (l < 1e-12) return 0;
    v[0] = (float)(v[0] / l); v[1] = (float)(v[1] / l); v[2] = (float)(v[2] / l);
    return 1;
}

void cpa_camera_from_rows(CpaCamera *c, const float pos[3], const float up[3], const float fwd[3], float hfov, float vfovRatio) {
    memcpy(c->pos, pos, 12); memcpy(c->up, up, 12); memcpy(c->fwd, fwd, 12);
    cross3(c->up, c->fwd, c->left);
    c->hfov = hfov; c->vfovRatio = vfovRatio; c->nearZ = CPA_NEAR_ZC;
}

int cpa_camera_look_at(CpaCamera *c, const float eye[3], const float target[3], float hfov, float vfovRatio) {
    const float Z[3] = { 0, 0, 1 };
    float f[3] = { target[0] - eye[0], target[1] - eye[1], target[2] - eye[2] }, l[3], u[3];
    int ok = norm3(f);
    if (!ok) { f[0] = 0; f[1] = 1; f[2] = 0; }
    cross3(Z, f, l);
    if (!norm3(l)) { l[0] = 0; l[1] = 1; l[2] = 0; ok = 0; }
    cross3(f, l, u);
    memcpy(c->pos, eye, 12); memcpy(c->fwd, f, 12); memcpy(c->left, l, 12); memcpy(c->up, u, 12);
    c->hfov = hfov; c->vfovRatio = vfovRatio; c->nearZ = CPA_NEAR_ZC;
    return ok;
}

void cpa_proj_init(CpaProj *p, const CpaCamera *c, int w, int h, CpaFit fit) {
    double tH = tan((double)c->hfov * 0.5), tV = tan((double)c->hfov * (double)c->vfovRatio * 0.5);
    double A = (double)w / (double)h, A43 = 4.0 / 3.0, fx, fy;
    switch (fit) {
    case CPA_FIT_STRETCH: fx = 0.5 * w / tH; fy = 0.5 * h / tV; break;
    case CPA_FIT_PILLARBOX43: {
        double s = A >= A43 ? h / (double)CPA_REF_H : w / (double)CPA_REF_W;
        fx = (CPA_REF_W * 0.5 / tH) * s; fy = (CPA_REF_H * 0.5 / tV) * s; break; }
    case CPA_FIT_HORPLUS: default:
        if (A >= A43) { fx = 0.5 * w / (tH * A / A43); fy = 0.5 * h / tV; }
        else          { fx = 0.5 * w / tH;             fy = 0.5 * h / (tV * A43 / A); }
        break;
    }
    p->w = w; p->h = h; p->cx = 0.5f * (float)w; p->cy = 0.5f * (float)h; p->fx = (float)fx; p->fy = (float)fy; p->nearZ = c->nearZ;
}

void cpa_world_to_cam(const CpaCamera *c, const float x[3], float out[3]) {
    double r[3] = { (double)x[0] - c->pos[0], (double)x[1] - c->pos[1], (double)x[2] - c->pos[2] };
    out[0] = (float)(c->left[0]*r[0] + c->left[1]*r[1] + c->left[2]*r[2]);
    out[1] = (float)(c->up[0]*r[0]   + c->up[1]*r[1]   + c->up[2]*r[2]);
    out[2] = (float)(c->fwd[0]*r[0]  + c->fwd[1]*r[1]  + c->fwd[2]*r[2]);
}

int cpa_cam_to_screen(const CpaProj *p, const float cam[3], float out[3]) {
    if (cam[2] < p->nearZ) return 0;
    double z = cam[2];
    out[0] = (float)((double)p->cx - (double)p->fx * cam[0] / z);
    out[1] = (float)((double)p->cy - (double)p->fy * cam[1] / z);
    out[2] = (float)(1.0 / ((double)CPA_TA_Z_SCALE * z));
    return 1;
}

int cpa_project(const CpaCamera *c, const CpaProj *p, const float x[3], float out[3]) {
    float cam[3]; cpa_world_to_cam(c, x, cam); return cpa_cam_to_screen(p, cam, out);
}

float cpa_screen_area2(const float s[6]) {
    return (s[2] - s[0]) * (s[5] - s[1]) - (s[4] - s[0]) * (s[3] - s[1]);
}

float cpa_wide_k3(float hfov, float aspect) {
    double t0 = hfov * 0.5;
    return (float)(atan(tan(t0) * (aspect / (4.0 / 3.0))) / t0);
}

int cpa_clip_tri_near(const CpaCamera *c, float nearZ, const float world[9], const float uv[6], CpaClipVert out[4]) {
    CpaClipVert in[3]; int n = 0;
    for (int i = 0; i < 3; i++) {
        cpa_world_to_cam(c, world + 3 * i, in[i].c);
        in[i].uv[0] = uv ? uv[2 * i] : 0.0f; in[i].uv[1] = uv ? uv[2 * i + 1] : 0.0f;
    }
    for (int i = 0; i < 3; i++) {
        const CpaClipVert *a = &in[i], *b = &in[(i + 1) % 3];
        int ia = a->c[2] >= nearZ, ib = b->c[2] >= nearZ;
        if (ia) out[n++] = *a;
        if (ia != ib) {
            double t = ((double)nearZ - a->c[2]) / ((double)b->c[2] - a->c[2]);
            CpaClipVert q;
            for (int k = 0; k < 2; k++) q.c[k] = (float)(a->c[k] + t * ((double)b->c[k] - a->c[k]));
            q.c[2] = nearZ;
            for (int k = 0; k < 2; k++) q.uv[k] = (float)(a->uv[k] + t * ((double)b->uv[k] - a->uv[k]));
            out[n++] = q;
        }
    }
    return n;
}

/* ---------------- orbit / stick ---------------- */
void cpa_stick_cfg_default(CpaStickCfg *g) {
    g->deadzone = 0.15f; g->expo = 1.6f; g->yawRate = 2.6f; g->pitchRate = 1.6f; g->smoothTau = 0.06f;
    g->pitchMin = -0.35f; g->pitchMax = 1.30f; g->invertY = 0;
}

void cpa_stick_shape(const CpaStickCfg *g, float inX, float inY, float *outX, float *outY) {
    double m = sqrt((double)inX * inX + (double)inY * inY);
    if (m <= (double)g->deadzone || m < 1e-9) { *outX = 0; *outY = 0; return; }
    if (m > 1.0) { inX = (float)(inX / m); inY = (float)(inY / m); m = 1.0; }   /* square-gate corners (|x|,|y| each <=1) clamp to the unit circle */
    double r = (m - g->deadzone) / (1.0 - g->deadzone);
    if (r > 1.0) r = 1.0;
    r = pow(r, g->expo);
    *outX = (float)(inX / m * r); *outY = (float)(inY / m * r);
}

void cpa_orbit_init(CpaOrbitCam *o, const float target[3], float dist, float yaw, float pitch) {
    memset(o, 0, sizeof *o);
    memcpy(o->target, target, 12); o->dist = dist; o->yaw = yaw; o->pitch = pitch;
    cpa_stick_cfg_default(&o->cfg);
}

void cpa_orbit_from_camera(CpaOrbitCam *o, const CpaCamera *c, float dist) {
    float t[3] = { c->pos[0] + c->fwd[0] * dist, c->pos[1] + c->fwd[1] * dist, c->pos[2] + c->fwd[2] * dist };
    double dx = -c->fwd[0], dy = -c->fwd[1], dz = -c->fwd[2];
    cpa_orbit_init(o, t, dist, (float)atan2(dy, dx), (float)asin(dz > 1 ? 1 : dz < -1 ? -1 : dz));}

void cpa_orbit_update(CpaOrbitCam *o, float stickX, float stickY, const float target[3], float dt) {
    const CpaStickCfg *g = &o->cfg; float sx, sy;
    memcpy(o->target, target, 12);
    cpa_stick_shape(g, stickX, stickY, &sx, &sy);
    float ty = -sx * g->yawRate;                     /* stick right -> view turns right -> eye angle decreases (CCW positive) */
    float tp = (g->invertY ? sy : -sy) * g->pitchRate; /* stick up -> view looks up -> eye drops */
    if (g->smoothTau > 0.0f && dt > 0.0f) {
        float a = 1.0f - (float)exp(-(double)dt / g->smoothTau);
        o->yawVel += (ty - o->yawVel) * a; o->pitchVel += (tp - o->pitchVel) * a;
    } else { o->yawVel = ty; o->pitchVel = tp; }
    o->yaw += o->yawVel * dt; o->pitch += o->pitchVel * dt;
    const float PI = 3.14159265358979f;
    while (o->yaw >= PI) o->yaw -= 2 * PI;
    while (o->yaw < -PI) o->yaw += 2 * PI;
    if (o->pitch > g->pitchMax) { o->pitch = g->pitchMax; if (o->pitchVel > 0) o->pitchVel = 0; }
    if (o->pitch < g->pitchMin) { o->pitch = g->pitchMin; if (o->pitchVel < 0) o->pitchVel = 0; }
}

void cpa_orbit_to_camera(const CpaOrbitCam *o, float hfov, float vfovRatio, CpaCamera *out) {
    double cp = cos(o->pitch), sp = sin(o->pitch);
    float eye[3] = { (float)(o->target[0] + o->dist * cp * cos(o->yaw)), (float)(o->target[1] + o->dist * cp * sin(o->yaw)), (float)(o->target[2] + o->dist * sp) };
    cpa_camera_look_at(out, eye, o->target, hfov, vfovRatio);
}
