/* test_light: asset-free unit tests of cpa_light (make -f light.mk test-light). The anchor numbers are measurements from the oracle TA captures (Learn_10 / Jail_10, see
 * re_analysis/dc/notes_lighting.md), so a formula change that breaks the oracle agreement breaks a check here even without assets. The asset-driven proof is lightcmp_static / lightcmp_actor. */
#include "../../src/cpa/cpa_scene.h"
#include "../../src/cpa/cpa_light.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int fails, checks;
#define CHECK(c, ...) do { checks++; if (!(c)) { fails++; printf("FAIL line %d: ", __LINE__); printf(__VA_ARGS__); printf("\n"); } } while (0)

static CpaLightMat mat(float a, float d, uint32_t flags, uint32_t texFlags) {
    CpaLightMat m; memset(&m, 0, sizeof m);
    for (int i = 0; i < 4; i++) { m.amb[i] = i == 3 ? 1.0f : a; m.dif[i] = i == 3 ? 1.0f : d; }
    m.flags = flags; m.texFlags = texFlags; m.valid = 1; return m;
}
static uint32_t argb_rli(const CpaLightMat *m, const CpaLightEnv *e, int r, int g, int b, int a) {
    float v[4] = { (float)r / 256.f, (float)g / 256.f, (float)b / 256.f, (float)a / 256.f }; return cpa_light_argb(m, e, v);
}

static void t_material(void) {
    CpaLightEnv e; cpa_light_env_default(&e);
    CpaLightMat m = mat(0.1f, 0.5f, 0x4ddc07ffu, 0);      /* the common level material, VM flags 0x4DDC07FF */
    /* oracle pairs (rli -> byte), Learn_10 scene 1201: 0->51, 6->56, 28->78, 102->152, 198->248, 204->254, clamp at 255 */
    static const int tab[][2] = { { 0, 51 }, { 6, 56 }, { 28, 78 }, { 60, 110 }, { 102, 152 }, { 123, 173 }, { 198, 248 }, { 204, 254 }, { 490, 255 }, { 1325, 255 }, { -20, 31 }, { -440, 0 } };
    for (unsigned i = 0; i < sizeof tab / sizeof *tab; i++) {
        uint32_t c = argb_rli(&m, &e, tab[i][0], tab[i][0], tab[i][0], 0);
        CHECK(((c >> 16) & 255) == (uint32_t)tab[i][1] && ((c >> 8) & 255) == (uint32_t)tab[i][1] && (c & 255) == (uint32_t)tab[i][1], "rli %d -> %08x, expected byte %d", tab[i][0], c, tab[i][1]);
        CHECK((c >> 24) == 255, "bit 3 set -> alpha 255, got %02x", c >> 24);
    }
    /* per channel: Jail_10 (rli 93,153,152) on the same material gives (143,203,202) before the additive branch */
    uint32_t c = argb_rli(&m, &e, 93, 153, 152, 0); CHECK((c & 0xFFFFFF) == ((143u << 16) | (203u << 8) | 202u), "per-channel %06x", c & 0xFFFFFF);
    /* material 0x49DC03F7 has bit 3 clear and bit 26 clear: the alpha is the vertex alpha. Oracle: Nave_20 vertex rli alpha 204 on amb alpha 0, dif alpha 1 -> byte 253..255 band; use the formula */
    CpaLightMat mv = mat(0.1f, 0.5f, 0x49dc03f7u, 0); mv.amb[3] = 0.0f; mv.dif[3] = 1.0f;
    c = argb_rli(&mv, &e, 0, 0, 0, 64); CHECK((c >> 24) == 127, "vertex alpha 64/256 -> trunc(510*0.25) = 127, got %u", c >> 24);
    c = argb_rli(&mv, &e, 0, 0, 0, 0); CHECK((c >> 24) == 0, "vertex alpha 0 -> 0, got %u", c >> 24);
    /* bit 26 without bit 3: alpha = trunc(fr15 * 510), fr15 = objAlpha*0.5 below 0.98 (Helic_30 actors: alpha 126 for an object transparency of ~0.494) */
    CpaLightMat mb = mat(0.1f, 0.5f, 0x45dc03f7u, 0);
    e.objAlpha = 0.5f; c = argb_rli(&mb, &e, 0, 0, 0, 0); CHECK((c >> 24) == 127, "objAlpha 0.5 -> alpha 127, got %u", c >> 24);
    e.objAlpha = 1.0f; c = argb_rli(&mb, &e, 0, 0, 0, 0); CHECK((c >> 24) == 255, "objAlpha 1 -> 255, got %u", c >> 24);
    /* additive texture + bit 26: constant colour 255 (Jail_10 water, Helic_30 glow) */
    CpaLightMat ma = mat(0.1f, 0.5f, 0x4ddc07ffu, 0x20);
    c = argb_rli(&ma, &e, 10, 20, 30, 0); CHECK(c == 0xFFFFFFFFu, "additive constant colour %08x", c);
    /* ambient accumulator G: amb' = amb + dif*G. Learn_10 Rayman: G = 0.08, amb 0.1, dif 0.7 -> trunc(0.156*510) = 79 (oracle 0x4F) ; dif 0.502, amb 0.102 -> 72 (oracle 0x48) */
    CpaLightEnv eg; cpa_light_env_default(&eg); eg.G[0] = eg.G[1] = eg.G[2] = 0.08f;
    CpaLightMat m7 = mat(0.1f, 0.7f, 0x4ddc07ffu, 0); float z4[4] = { 0, 0, 0, 0 };
    c = cpa_light_argb(&m7, &eg, z4); CHECK(((c >> 16) & 255) == 0x4F, "G 0.08 amb 0.1 dif 0.7 -> %02x expected 4F", (c >> 16) & 255);
    CpaLightMat m5 = mat(0.102f, 0.502f, 0x4ddc07ffu, 0); m5.amb[0] = m5.amb[1] = m5.amb[2] = 0.10196079f; m5.dif[0] = m5.dif[1] = m5.dif[2] = 0.5019608f;
    c = cpa_light_argb(&m5, &eg, z4); CHECK(((c >> 16) & 255) == 0x48, "G 0.08 amb 0.102 dif 0.502 -> %02x expected 48", (c >> 16) & 255);
}

static void put32(uint8_t *b, size_t o, uint32_t v) { memcpy(b + o, &v, 4); }
static void putf(uint8_t *b, size_t o, float v) { memcpy(b + o, &v, 4); }
static void put16(uint8_t *b, size_t o, int16_t v) { memcpy(b + o, &v, 2); }

#define BASE 0x8C100000u
static void t_rli_and_lights(void) {
    static uint8_t ram[0x1000]; memset(ram, 0, sizeof ram);
    CpaImage im; cpa_image_init(&im); cpa_image_add(&im, ram, sizeof ram, BASE);
    /* IPO struct @0x100: +0 PO, +4 RLI @0x200 : {1, info @0x208, ...}; info {count 3, data @0x210}; entries 8 bytes */
    put32(ram, 0x104, BASE + 0x200); put32(ram, 0x200, 1); put32(ram, 0x204, BASE + 0x208); put32(ram, 0x208, 3); put32(ram, 0x20C, BASE + 0x210);
    int16_t ent[3][4] = { { 0, 102, 102, 163 }, { 33, 83, 66, 79 }, { -20, -10, -5, 0 } };
    for (int i = 0; i < 3; i++) for (int k = 0; k < 4; k++) put16(ram, 0x210 + 8 * i + 2 * k, ent[i][k]);
    uint32_t n = 0, d = cpa_light_rli(&im, BASE + 0x100, &n);
    CHECK(d == BASE + 0x210 && n == 3, "rli data %08x count %u", d, n);
    int16_t raw[4]; float v[4];
    CHECK(cpa_light_rli_entry(&im, d, 1, raw, v) && raw[0] == 33 && raw[3] == 79 && v[1] == 83.0f / 256.0f, "rli entry 1");
    CHECK(cpa_light_rli_entry(&im, d, 2, raw, v) && raw[0] == -20 && v[0] == -20.0f / 256.0f, "rli entry 2 (negative)");
    CHECK(cpa_light_rli(&im, BASE + 0x300, &n) == 0 && n == 0, "IPO without RLI");
    /* VisualMaterial @0x400 : flags, amb @8, dif @0x18, tex @0x4C -> struct @0x500 flags@+4 (bit 31 set + 0x20) */
    put32(ram, 0x400, 0x4ddc07ffu); for (int i = 0; i < 4; i++) { putf(ram, 0x408 + 4 * i, i == 3 ? 1.f : 0.1f); putf(ram, 0x418 + 4 * i, i == 3 ? 1.f : 0.5f); }
    put32(ram, 0x44C, BASE + 0x500); put32(ram, 0x504, 0x80000020u);
    CpaLightMat m; CHECK(cpa_light_mat_read(&im, BASE + 0x400, &m) && m.flags == 0x4ddc07ffu && m.texFlags == 0x20 && fabsf(m.dif[0] - 0.5f) < 1e-7f, "material read");
    /* lights: parallel light at 0x600 (type 1, enabled, rgba mode 0, matrix @+0x28 with column 2 = (-0.1045, -0.527, -0.8434) as Learn_10 light 0), ambient at 0x700 (type 4, colour 0.08) */
    static const float rot[9] = { 0.9945f, 0.0f, -0.1045f, -0.0554f, -0.848f, -0.527f, -0.0886f, 0.5299f, -0.8434f };
    put32(ram, 0x604, 1); for (int i = 0; i < 9; i++) putf(ram, 0x628 + 4 * i, rot[i]); ram[0x69C] = 1; ram[0x69F] = 0; for (int i = 0; i < 4; i++) putf(ram, 0x68C + 4 * i, 0.8f);
    put32(ram, 0x704, 4); ram[0x79C] = 1; ram[0x79F] = 0; for (int i = 0; i < 3; i++) putf(ram, 0x78C + 4 * i, 0.08f); putf(ram, 0x798, 0.8f);
    CpaLight L[2]; CHECK(cpa_light_read(&im, BASE + 0x600, &L[0]) && L[0].type == 1 && L[0].enabled && fabsf(L[0].axis[2] + 0.8434f) < 1e-6f && fabsf(L[0].axis[0] + 0.1045f) < 1e-6f, "parallel light read");
    CHECK(cpa_light_read(&im, BASE + 0x700, &L[1]) && L[1].type == 4, "ambient light read");
    CpaLightEnv env; cpa_light_env_default(&env); cpa_light_env_from_list(L, 2, &env);
    CHECK(fabsf(env.G[0] - 0.08f) < 1e-7f && fabsf(env.G[3] - 0.8f) < 1e-7f, "ambient G (%g %g)", env.G[0], env.G[3]);
    float acc[4] = { 0, 0, 0, 0 }, nUp[3] = { 0.1045f, 0.527f, 0.8434f };     /* normal opposite to the axis: fully lit, dot = 1.00 (+-) */
    CHECK(cpa_light_accum(&L[0], nUp, acc, &env) == 1 && acc[0] > 0.79f && acc[0] < 0.81f, "parallel light facing: %g", acc[0]);
    float acc2[4] = { 0, 0, 0, 0 }, nAway[3] = { -0.1045f, -0.527f, -0.8434f };
    cpa_light_accum(&L[0], nAway, acc2, &env); CHECK(acc2[0] == 0.0f, "back-facing normal gets nothing: %g", acc2[0]);
    CpaLight om = L[0]; om.type = CPA_LIGHT_OMNI; CHECK(cpa_light_accum(&om, nUp, acc2, &env) == 0, "omni lights report 'not implemented'");
    /* the list reader stops at the first non-pointer */
    CpaImage im2; cpa_image_init(&im2);
    /* the list lives at 0x8C2DD4B4: place a second region there */
    static uint8_t lst[0x40]; memset(lst, 0, sizeof lst); put32(lst, 0, BASE + 0x600); put32(lst, 4, BASE + 0x700);
    cpa_image_add(&im2, ram, sizeof ram, BASE); cpa_image_add(&im2, lst, sizeof lst, 0x8C2DD4B4u);
    CpaLight lv[8]; CHECK(cpa_light_read_ram_list(&im2, lv, 8) == 2 && lv[1].type == 4, "ram light list");
}

static void t_fade(void) {
    CpaLightFade f; memset(&f, 0, sizeof f); f.enabled = 1; f.p[0] = 350.f; f.p[1] = 800.f; f.p[2] = 50000.f; f.p[3] = 0.f; f.p[4] = 0.4889f;     /* the Jail_10 block */
    /* oracle alphas of the Jail_10 additive water (camera depth -> alpha): 411.1 -> 226, 489.2 -> 187, 492.7 -> 186, 626.7 -> 120, 732.6 -> 68, 746.4 -> 62, >= 850 -> 36 */
    static const struct { float z; int a; } tab[] = { { 300.f, 255 }, { 411.1f, 226 }, { 489.2f, 187 }, { 492.7f, 186 }, { 626.7f, 120 }, { 732.6f, 68 }, { 746.4f, 62 }, { 950.7f, 36 }, { 1198.9f, 36 } };
    for (unsigned i = 0; i < sizeof tab / sizeof *tab; i++) { int a = cpa_light_fade_alpha(&f, tab[i].z, 1.0f, 1); CHECK(abs(a - tab[i].a) <= 1, "fade z=%g -> %d expected %d", tab[i].z, a, tab[i].a); }
    CHECK(cpa_light_fade_alpha(&f, 60000.f, 1.0f, 1) == 0, "beyond p2 invisible");
    CpaLightMat ma = mat(1.0f, 1.0f, 0x45dc03ffu, 0x20), mo = mat(1.0f, 1.0f, 0x45dc03ffu, 0);
    CHECK((cpa_light_fade_argb(&f, &ma, 0xFFFFFFFFu, 489.2f, 1.0f) >> 24) == 187 && (cpa_light_fade_argb(&f, &ma, 0xFFFFFFFFu, 489.2f, 1.0f) & 0xFFFFFF) == 0xFFFFFF, "additive material faded, rgb kept");
    CHECK(cpa_light_fade_argb(&f, &mo, 0xFFFFFFFFu, 489.2f, 1.0f) == 0xFFFFFFFFu, "non-additive material is not faded");
    f.enabled = 0; CHECK(cpa_light_fade_argb(&f, &ma, 0xFFFFFFFFu, 489.2f, 1.0f) == 0xFFFFFFFFu, "disabled fade");
}

int main(void) {
    t_material(); t_rli_and_lights(); t_fade();
    printf("test_light: %d checks, %d failed\n", checks, fails);
    return fails ? 1 : 0;
}
