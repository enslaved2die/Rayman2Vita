/* cpa_hud: see cpa_hud.h. Ports FUN_8c01aea0 (sprite pool), FUN_8c01b1a0 (gauges), FUN_8c026320 / FUN_8c027200 (text pools B / A) down to FUN_8c07fc1a (the quad primitive).
 * Float arithmetic follows the lifted SH-4 code operation by operation (single precision). */
#include "cpa_hud.h"
#include <stdlib.h>
#include <string.h>

#define VA_POOL_S    0x8C130C74u
#define VA_GATE      0x8C12473Eu     /* byte: nonzero = only sprite slots 15..24 / text B slots < 15 are drawn and text A is skipped (guest gate flag, see r2_trace.h) */
#define VA_GAUGES    0x8C130FBCu
#define VA_POOL_B    0x8C13191Cu
#define VA_POOL_A    0x8C131E94u
#define VA_WIDE      0x8C0C52DCu
#define VA_LEVEL     0x8C123B09u
#define VA_FONT      0x8C0BDEA4u
#define VA_DIALOG_BYTE 0x8C0C8138u

static const float K_ALPHA = 1.0f / 255.0f;       /* literal at 0x8C038948 (FUN_8c0388c0) */
static const float K_Z = 512.0f;                  /* literal at 0x8C02687C / 0x8C01B3FC */

void cpa_hud_opts_default(CpaHudOpts *o) { o->sprites = o->gauges = o->textB = o->textA = 1; }

typedef struct { CpaHudFrame *F; const CpaImage *im; } Ctx;

static int push(Ctx *C, const CpaHudQuad *q) {
    CpaHudFrame *F = C->F;
    if (F->n == F->cap) { uint32_t nc = F->cap ? F->cap * 2 : 128; CpaHudQuad *p = (CpaHudQuad *)realloc(F->q, nc * sizeof *p); if (!p) return 0; F->q = p; F->cap = nc; }
    F->q[F->n++] = *q; return 1;
}
static uint8_t  rd8 (const Ctx *C, uint32_t va) { uint8_t v = 0; cpa_rd8(C->im, va, &v); return v; }
static uint32_t rd32(const Ctx *C, uint32_t va) { return cpa_u32(C->im, va); }
static float    rdfl(const Ctx *C, uint32_t va) { return cpa_f32(C->im, va); }

int cpa_hud_tex_info(const CpaImage *ram, uint32_t texVa, uint32_t *flags, uint32_t *w, uint32_t *h) {
    uint32_t fl, d, dw, dh;
    if (!texVa || !cpa_rd32(ram, texVa + 4, &fl) || !cpa_rd32(ram, texVa, &d) || !cpa_rd32(ram, d + 12, &dw) || !cpa_rd32(ram, d + 16, &dh)) return 0;
    if (flags) *flags = fl & 0x7FFFFFFFu; if (w) *w = dw; if (h) *h = dh; return 1;
}
void cpa_hud_pass(uint32_t texFlags, uint32_t minAlphaByte, int *translucent, int *additive) {
    *translucent = ((texFlags & 0x2A) != 0) || ((float)minAlphaByte * K_ALPHA < 0.98f);
    *additive = (texFlags & 0x20) != 0;
}
float cpa_hud_reanchor_x(float x, uint8_t anchor, float aspect) {
    float off = (480.0f * aspect - 640.0f); if (off < 0) off = 0;
    return x + (anchor == CPA_HUD_RIGHT ? off : anchor == CPA_HUD_CENTER ? off * 0.5f : 0.0f);
}

/* r2_hud_anchor (gen_fix/recomp_01.c): level name lowercase compare. n = element x as a fraction of the layout space. */
static int lvl_is(const Ctx *C, const char *s) {
    for (uint32_t a = VA_LEVEL;; s++, a++) { uint8_t ch = rd8(C, a); if (ch >= 'A' && ch <= 'Z') ch = (uint8_t)(ch + 32); if (ch != (uint8_t)*s) return 0; if (!*s) return 1; }
}
static uint8_t anchor_of(const Ctx *C, float n) {
    if (rd8(C, VA_LEVEL) == 0 || lvl_is(C, "menu") || lvl_is(C, "mapmonde2") || lvl_is(C, "staff_10")) return CPA_HUD_CENTER;
    if (n < 0.4f) return CPA_HUD_LEFT;
    if (n > 0.6f) return CPA_HUD_RIGHT;
    return CPA_HUD_CENTER;
}

static uint32_t argb_pack(float a, uint32_t rgb) {
    int ai = (int)(a * 255.0f + 0.5f); if (ai < 0) ai = 0; if (ai > 255) ai = 255;
    return ((uint32_t)ai << 24) | (rgb & 0xFFFFFFu);
}
static float alpha_of(float v) { float a = v * K_ALPHA; if (a > 1.0f) a = 1.0f; if (a < 0.0f) a = 0.0f; return a; }   /* FUN_8c0388c0 */

/* FUN_8c07fc1a: x1,y1,x2,y2 in percent of the screen, vm, alpha float 0..1, colour rgb (low 24 bits, used when gradient != 0), gradient mode (the byte at 0x8C0C8138 for text, 0 otherwise). */
static int emit_quad(Ctx *C, uint8_t kind, uint8_t slot, uint8_t anchor, uint32_t vm, float x1, float y1, float x2, float y2, float alpha, uint32_t rgb, int gradient, uint32_t ch) {
    CpaHudQuad q; memset(&q, 0, sizeof q);
    uint32_t texVa = rd32(C, vm + 0x4C), fl = 0, w = 0, h = 0;
    float px1 = x1 * 6.4f, px2 = x2 * 6.4f, py1 = y1 * 4.8f, py2 = y2 * 4.8f;     /* W/100, H/100 of the 640x480 TA screen (VERIFIED against 0.1 px) */
    float um = 1.0f;
    if (cpa_hud_tex_info(C->im, texVa, &fl, &w, &h) && fl == 0x20 && h == 2 * w) um = 2.0f;   /* INFERRED, gra*_my_ad portraits only: u spans 0..2 in every captured sample, the mechanism is UNKNOWN */
    q.x[0] = q.x[1] = px1; q.x[2] = q.x[3] = px2; q.y[0] = q.y[2] = py1; q.y[1] = q.y[3] = py2;
    q.u[0] = q.u[1] = 0.0f; q.u[2] = q.u[3] = um; q.v[0] = q.v[2] = 1.0f; q.v[1] = q.v[3] = 0.0f;
    q.z = K_Z; q.vm = vm; q.texVa = texVa; q.kind = kind; q.slot = slot; q.anchor = anchor; q.gradient = (uint8_t)gradient; q.ch = ch;
    {   /* FUN_8c035f40 vertex colours: byte==1: A,C = colour|0xffffff (white), B,D = colour; byte==2 and 0 (text bank >= 800 / sprites): all = colour word (white for VMs, tinted for mode 2) */
        uint32_t white = argb_pack(alpha, 0xFFFFFFu), tint = argb_pack(alpha, rgb);
        if (gradient == 1)      { q.argb[0] = q.argb[2] = white; q.argb[1] = q.argb[3] = tint; }
        else if (gradient == 2) { q.argb[0] = q.argb[1] = q.argb[2] = q.argb[3] = tint; }
        else                    { q.argb[0] = q.argb[1] = q.argb[2] = q.argb[3] = white; }
    }
    return push(C, &q);
}

/* ---- sprite pool (FUN_8c01aea0) ---- */
static int do_sprites(Ctx *C) {
    int gate = rd8(C, VA_GATE) != 0;
    for (uint32_t i = 0; i < 31; i++) {
        uint32_t s = VA_POOL_S + i * 24u; int32_t cnt = (int32_t)rd32(C, s + 20);
        if (gate && !(i > 14 && i < 25)) continue;
        if (cnt <= 0) continue;
        float x1 = rdfl(C, s), y1 = rdfl(C, s + 4), x2 = rdfl(C, s + 8), y2 = rdfl(C, s + 12);
        if (!emit_quad(C, CPA_HUD_SPRITE, (uint8_t)i, anchor_of(C, x1 / 100.0f), rd32(C, s + 16), x1, y1, x2, y2, alpha_of((float)cnt), 0, 0, 0)) return 0;
        C->F->st.nSprite++;
    }
    return 1;
}

/* ---- gauges (FUN_8c01b1a0) ---- */
static int do_gauges(Ctx *C) {
    for (uint32_t i = 0; i < 8; i++) {
        uint32_t g = VA_GAUGES + i * 32u; int32_t val = (int32_t)rd32(C, g + 28);
        if (val <= 0) continue;
        float x1 = rdfl(C, g), y1 = rdfl(C, g + 4), x2 = rdfl(C, g + 8), y2 = rdfl(C, g + 12), fill = rdfl(C, g + 24);
        uint32_t vmRest = rd32(C, g + 16), vmBar = rd32(C, g + 20);
        float a = alpha_of((float)val); uint8_t an = anchor_of(C, x1 / 100.0f);
        float w = x2 - x1, h = y2 - y1;
        if (w > h) {   /* horizontal: bar from x1, rest from the bar end to x2 */
            float xb = x1 + (fill * w) / 100.0f;
            if (!emit_quad(C, CPA_HUD_GAUGE_BAR, (uint8_t)i, an, vmBar, x1, y1, xb, y2, a, 0, 0, 0)) return 0;
            if (100.0f > fill && !emit_quad(C, CPA_HUD_GAUGE_REST, (uint8_t)i, an, vmRest, xb, y1, x2, y2, a, 0, 0, 0)) return 0;
        } else {       /* vertical (INFERRED from the lifted else branch; no oracle sample): bar grows from y2 upwards */
            float yb = y2 - (fill * h) / 100.0f;
            C->F->st.gaugeVertical++;
            if (!emit_quad(C, CPA_HUD_GAUGE_BAR, (uint8_t)i, an, vmBar, x1, yb, x2, y2, a, 0, 0, 0)) return 0;
            if (100.0f > fill && !emit_quad(C, CPA_HUD_GAUGE_REST, (uint8_t)i, an, vmRest, x1, y1, x2, yb, a, 0, 0, 0)) return 0;
        }
        C->F->st.nGauge++;
    }
    return 1;
}

/* ---- text ---- */
static uint32_t glyph_vm(const Ctx *C, uint32_t idx) {     /* FUN_8c0120da: font table walk. VERIFIED by the glyph textures of the oracle quads (hud_compare) */
    const CpaImage *im = C->im;
    uint32_t p = rd32(C, VA_FONT); p = rd32(C, p); p = rd32(C, p + 16);
    if (!p) return 0;
    uint32_t cnt = cpa_u16(im, p + 8); if (idx > cnt) return 0;
    uint32_t arr = rd32(C, p), e = rd32(C, arr + idx * 16u + 4); if (!e) return 0;
    uint32_t o = rd32(C, e), r4 = rd32(C, o + 4); if (!r4) return 0;
    if (cpa_s16(im, r4 + 0x2E) != 1) return 0;
    if (cpa_s16(im, rd32(C, r4 + 16)) != 1) return 0;
    r4 = rd32(C, r4 + 20); r4 = rd32(C, r4); return rd32(C, rd32(C, r4));
}
static int fold(int c) { return (c >= 'a' && c <= 'z') ? c - 32 : c; }     /* FUN_8c025ee6 */

typedef struct { int pitch, W, H, lineH; } Metrics;
static Metrics metrics(float size) {       /* FUN_8c025fa0 with SQ = 1 */
    Metrics m; float t = size * 2.15f;
    int H0 = (int)(size * 2.9f), L0 = (int)(size * 3.15f);
    m.W = (int)(1.0f * t); m.pitch = (int)(1.0f * t * 0.87f);
    m.H = (int)((float)H0 * 0.95f); m.lineH = (int)((float)L0 * 0.95f);
    return m;
}
/* FUN_8c025f20: width of the rest of the line starting at s (stops at NUL or "/L") */
static int line_width(const uint8_t *s, int pitch) {
    int sp = (int)(0.6f * (float)pitch), w = 0, i = 0;
    while (s[i]) {
        if (s[i] == '/') {
            int c = fold(s[++i]);
            if (c == 'L') break;
            if (c != ':') { while (s[i] != ':' && s[i]) i++; }      /* skip the markup to its ':' (the guest loop: R13++ until ':'); the char after '/' is consumed first */
        } else if (s[i] == ' ') w += sp; else w += pitch;
        if (!s[i]) break;
        i++;
    }
    return w;
}

typedef struct { float x, y, size; uint8_t alpha, b12, fl13, b18; uint32_t slot, kind; } TextSlot;

static int emit_text(Ctx *C, const uint8_t *str, const TextSlot *T) {
    CpaHudFrame *F = C->F; Metrics m = metrics(T->size);
    uint32_t colour = 0xFF6EBEFFu;
    if (T->fl13 & 0x10) {
        if (T->kind == CPA_HUD_TEXT_A) switch (T->b18) { case 1: colour = 0xFF6EBEFFu; break; case 2: colour = 0xFFFA4646u; break; case 3: colour = 0xFFFFFF78u; break; default: colour = 0u; }   /* FUN_8c027200: R8 stays 0 for other values */
        else switch (T->b18) { case 2: colour = 0xFFFA4646u; break; case 3: colour = 0xFFFFFF78u; break; case 4: colour = 0xFF240F06u; break; default: colour = 0xFF6EBEFFu; }
    }
    if (T->b12) F->st.unkWobble++;
    if (T->fl13 & 4) F->st.unkTypewriter++;
    if (T->fl13 & 3) F->st.unkFade++;
    float a = alpha_of((float)T->alpha);
    uint8_t an = anchor_of(C, T->x / 1000.0f);
    /* line top: ypos = 10*(50 + 0.95*(y*0.1 - 50)); top = ypos - 20  (FUN_8c026400) */
    float t = T->y * 0.1f + (-50.0f); float yp = 50.0f; yp += 0.95f * t; yp *= 10.0f; float ytop = yp + 10.0f * (-2.0f);
    float xs = T->x, xcur = xs; int bank = 0, centered = 0;
    float fr12 = 0.0f;
    for (int i = 0; str[i];) {
        int ch = fold(str[i]);
        if (ch == '/') {
            int c2 = fold(str[++i]);
            if (!c2) break;
            if (c2 == 'L') {
                if (str[i + 1] != ':') break;
                i++;
                if (centered) { int w = line_width(str + i + 1, m.pitch); xcur = (float)((1000 - w) >> 1); } else xcur = xs;
                ytop += (float)m.lineH; i++; continue;
            } else if (c2 == 'O') {
                int n = 0; i++;
                while (str[i] && fold(str[i]) != ':') { n = n * 10 + (str[i] - '0'); i++; }
                if (!str[i]) break;
                bank = n;
                if (T->kind == CPA_HUD_TEXT_A || !(T->fl13 & 0x10)) { if (n == 0 || n == 600) colour = 0xFF6EBEFFu; else if (n == 200) colour = 0xFFFA4646u; else if (n == 400) colour = 0xFFFFFF78u; }
                i++; continue;
            } else if (c2 == 'C') {
                if (str[i + 1] != ':') break;
                i++; centered ^= 1;
                if (centered) { int w = line_width(str + i + 1, m.pitch); xcur = (float)((1000 - w) >> 1); }
                i++; continue;
            } else {   /* other '/X...': pool A skips to the ':' (FUN_8c027200 L8c0274fa, so '/e201:' script tags are invisible); pool B (FUN_8c026320) just steps over the letter (INFERRED, no sample) */
                F->st.unkMarkup++;
                if (T->kind == CPA_HUD_TEXT_A) { i++; while (str[i] && str[i] != ':') i++; if (!str[i]) break; i++; } else i++;
                continue;
            }
        }
        if (ch == ' ') { xcur += (float)(int)(0.6f * (float)m.pitch); i++; continue; }
        {
            uint32_t code = (uint32_t)ch, idx = code; if (code > 0xA0) idx -= 0x20; idx -= 0x20; idx += (uint32_t)bank;
            uint32_t vm = glyph_vm(C, idx);
            if (vm) {
                int grad = (bank >= 800) ? 0 : (colour == 0xFF240F06u ? 2 : 1);
                float yg = ytop;
                if (ch == '.') yg += (float)(m.H >> 2); else if (ch == ',') yg += (float)(m.H >> 1); else if (ch == '\'') yg -= (float)(m.H >> 2);
                float x1 = xcur * 0.1f, y2 = ((float)m.H + fr12 + yg) * 0.1f, x2 = ((float)m.W + xcur) * 0.1f, y1 = (yg - fr12) * 0.1f;
                if (!emit_quad(C, (uint8_t)T->kind, (uint8_t)T->slot, an, vm, x1, y1, x2, y2, a, colour, grad, code)) return 0;
                if (T->kind == CPA_HUD_TEXT_B) F->st.nTextB++; else F->st.nTextA++;
            } else F->st.glyphsNoVm++;
            xcur += (float)m.pitch; i++;
        }
    }
    return 1;
}

static int do_text_b(Ctx *C) {
    int gate = rd8(C, VA_GATE) != 0;
    for (uint32_t i = 0; i < 50; i++) {
        uint32_t s = VA_POOL_B + i * 0x1Cu, sp = rd32(C, s);
        if (!sp || !rd8(C, s + 0x10)) continue;                 /* SCAN skip: ptr0 / alpha0 (guest trace labels) */
        if (i >= 15 && gate) continue;
        const uint8_t *str = cpa_ptr(C->im, sp, 1); if (!str) continue;
        TextSlot T; memset(&T, 0, sizeof T);
        T.x = rdfl(C, s + 4); T.y = rdfl(C, s + 8); T.size = rdfl(C, s + 12); T.alpha = rd8(C, s + 0x10); T.b12 = rd8(C, s + 0x12); T.fl13 = rd8(C, s + 0x13); T.b18 = rd8(C, s + 0x18);
        T.slot = i; T.kind = CPA_HUD_TEXT_B;
        if (!emit_text(C, str, &T)) return 0;
    }
    return 1;
}
static int do_text_a(Ctx *C) {
    if (rd8(C, VA_GATE)) return 1;                              /* br=3: pool A skipped while the gate flag is set */
    for (uint32_t i = 0; i < 50; i++) {
        uint32_t s = VA_POOL_A + i * 0x41Cu;
        if (!rd32(C, s + 0x400) || !rd8(C, s + 0x410)) continue; /* br=1 empty (owner 0), br=2 alpha 0 */
        const uint8_t *str = cpa_ptr(C->im, s, 0x400); if (!str) continue;
        TextSlot T; memset(&T, 0, sizeof T);
        T.x = rdfl(C, s + 0x404); T.y = rdfl(C, s + 0x408); T.size = rdfl(C, s + 0x40C); T.alpha = rd8(C, s + 0x410); T.b12 = rd8(C, s + 0x412); T.fl13 = rd8(C, s + 0x413); T.b18 = rd8(C, s + 0x418);
        T.slot = i; T.kind = CPA_HUD_TEXT_A;
        uint8_t buf[0x401]; memcpy(buf, str, 0x400); buf[0x400] = 0;
        if (!emit_text(C, buf, &T)) return 0;
    }
    return 1;
}

int cpa_hud_build(CpaHudFrame *out, const CpaImage *ram, const CpaHudOpts *opts) {
    CpaHudOpts o; if (opts) o = *opts; else cpa_hud_opts_default(&o);
    memset(out, 0, sizeof *out);
    Ctx C = { out, ram };
    uint8_t probe; if (!cpa_rd8(ram, VA_POOL_S, &probe)) return 0;
    out->wideRam = rd8(&C, VA_WIDE) != 0;
    if (o.gauges && !do_gauges(&C)) goto fail;
    if (o.sprites && !do_sprites(&C)) goto fail;
    if (o.textB && !do_text_b(&C)) goto fail;
    if (o.textA && !do_text_a(&C)) goto fail;
    return 1;
fail:
    cpa_hud_frame_free(out); return 0;
}
void cpa_hud_frame_free(CpaHudFrame *f) { free(f->q); memset(f, 0, sizeof *f); }
