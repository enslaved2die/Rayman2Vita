/* cpa_hud: native generation of the in-game 2D layer (HUD sprites, gauges, text) as screen-space quads. Portable C99, no GL.
 *
 * What it is: the game keeps its 2D layer in fixed pools in main RAM and draws them every frame through ONE quad primitive (guest FUN_8c07fc1a, z = 512 = TA 1/w):
 *   sprite pool S   24-byte slots x 31 @0x8C130C74   {x1,y1,x2,y2 in % of the screen, VisualMaterial*, alpha int}        drawn by FUN_8c01aea0
 *   gauge pool      32-byte slots x 8  @0x8C130FBC   {x1,y1,x2,y2 %, VM(rest), VM(bar), fill %, alpha int}              drawn by FUN_8c01b1a0
 *   text pool B     28-byte slots x 50 @0x8C13191C   {char*, x, y (1/1000 units), size, alpha, flags...}                 drawn by FUN_8c026320 (lums / cage counters)
 *   text pool A     0x41C-byte slots x 50 @0x8C131E94 {inline text, owner, x, y, size, alpha, flags}                     drawn by FUN_8c027200 (dialogue lines)
 * cpa_hud reads those pools through a CpaImage (the guest RAM in shadow mode; a standalone engine fills the same structures from its own game state) and emits the quads the
 * guest emits, in guest submission order (gauges, sprites, text B, text A). Coordinates are the guest's 640x480 TA screen space ("4:3 virtual"), z = 512.
 *
 * Evidence tags: VERIFIED = reproduced against the oracle (tools/cpa_tests/hud_compare.c, re_analysis/dc/notes_hud.md); INFERRED = read from the lifted code or fitted, no sample;
 * UNKNOWN = not decoded (counted in CpaHudStats). The producers that FILL the pools from game state (lums counter, lives, health -> gauge fill, dialogue strings, fades) are NOT decoded here.
 *
 * Wide screen: the guest squeezes all 2D x about the screen centre by SQ (RAM float 0x8C0C52E4) and, in this repo's patched build, edge-anchors the HUD (r2_hud_anchor: x/total < 0.4
 * left, > 0.6 right, else centre; Menu / Mapmonde2 / Staff_10 / no level = centre). CpaHudQuad.anchor carries that class so an embedder can re-anchor with cpa_hud_reanchor_x (DESIGN). */
#ifndef CPA_HUD_H
#define CPA_HUD_H

#include "cpa_image.h"

typedef enum { CPA_HUD_SPRITE = 0, CPA_HUD_GAUGE_REST, CPA_HUD_GAUGE_BAR, CPA_HUD_TEXT_B, CPA_HUD_TEXT_A } CpaHudKind;
typedef enum { CPA_HUD_LEFT = 0, CPA_HUD_CENTER = 1, CPA_HUD_RIGHT = 2 } CpaHudAnchor;

typedef struct CpaHudQuad {
    float    x[4], y[4];       /* 640x480 virtual pixels, vertex order of the guest strip: A(x1,y1) B(x1,y2) C(x2,y1) D(x2,y2) */
    float    u[4], v[4];       /* oracle convention: v = 1 on the y1 edge (A,C), 0 on the y2 edge (B,D); u = 0 / uMax */
    uint32_t argb[4];          /* per-vertex colour the guest writes (alpha = pool alpha * 1/255) */
    float    z;                /* 512 (TA 1/w): in front of everything */
    uint32_t vm;               /* VisualMaterial the quad is drawn with */
    uint32_t texVa;            /* texture struct VA = VM+0x4C (the LIVE frame for animated materials: see notes_hud.md, portraits) */
    uint8_t  kind, slot, anchor, gradient;   /* CpaHudKind, pool slot, CpaHudAnchor, text vertex colour mode (0 flat white, 1 white top / tinted bottom, 2 flat tinted) */
    uint32_t ch;               /* text: the glyph character code (after case folding), else 0 */
} CpaHudQuad;

typedef struct CpaHudStats {
    uint32_t nSprite, nGauge, nTextB, nTextA;
    uint32_t glyphsNoVm;                 /* characters without a glyph material (no quad, as the guest) */
    uint32_t unkWobble, unkTypewriter, unkFade, unkMarkup;   /* text slots using features not modelled (UNKNOWN): wobble byte +0x12, typewriter flag 4, fade flags 1/2, unknown '/X:' codes */
    uint32_t gaugeVertical;              /* vertical gauges drawn (INFERRED, no oracle sample) */
} CpaHudStats;

typedef struct CpaHudFrame {
    CpaHudQuad *q; uint32_t n, cap;
    CpaHudStats st;
    int wideRam;                         /* 1 if the RAM image has the 16:9 flag (0x8C0C52DC) set; the quads are ALWAYS produced in 4:3 virtual space (SQ = 1, no squeeze, no offset) */
} CpaHudFrame;

typedef struct CpaHudOpts { int sprites, gauges, textB, textA; } CpaHudOpts;
void cpa_hud_opts_default(CpaHudOpts *o);                       /* everything on */

/* Build the quad list from the pools of `ram`. Returns 1 if the pools were readable (a frame without any HUD is still 1), 0 on allocation failure or an unreadable image. */
int  cpa_hud_build(CpaHudFrame *out, const CpaImage *ram, const CpaHudOpts *opts);
void cpa_hud_frame_free(CpaHudFrame *f);

/* Texture-struct facts read from the live struct: flags = tex+4 without bit 31; w,h = surface descriptor desc[3], desc[4]. Returns 1 on success. */
int  cpa_hud_tex_info(const CpaImage *ram, uint32_t texVa, uint32_t *flags, uint32_t *w, uint32_t *h);
/* Pass rule of the guest's 2D path: translucent iff (texture flags & 0x2A) or vertex alpha < 0.98 (guest FUN_8c037700, INFERRED from reading; agreement with the oracle list of every
 * HUD quad is reported by hud_compare). additive = flags & 0x20. */
void cpa_hud_pass(uint32_t texFlags, uint32_t minAlphaByte, int *translucent, int *additive);

/* DESIGN (not an oracle fact): map a virtual 640x480 x into a screen of width 480*aspect (aspect >= 4/3) with the quad's anchor: left keeps x, centre adds (W-640)/2, right adds (W-640). */
float cpa_hud_reanchor_x(float x, uint8_t anchor, float aspect);
#endif
