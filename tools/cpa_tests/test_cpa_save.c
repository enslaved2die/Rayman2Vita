/* test_cpa_save: N6 save-format tests for src/cpa/cpa_save.{c,h}.
 *   make -f tools/cpa_tests/save.mk save-test                       portable tests (no assets, no emulator): embedded real files
 *   make -f tools/cpa_tests/save.mk save-dir DIR=<dir>              parse + byte-identical rebuild of every RAYMAN_2.* file in DIR (oracle / Flycast imports)
 *   make -f tools/cpa_tests/save.mk save-oracle ASSETS=<assets/dc>  kind-F both directions against the recompiled game (needs `make -C tools/sh4recomp hle`)
 *
 * Embedded fixtures (truncated after the data; the zero padding to 1024 B is re-added and checked):
 *   FLY_AAA  RAYMAN_2.AAA played save, taken from a Flycast VMU image of a real play session (header "00.5%")
 *   FLY_SY   RAYMAN_2.SY_ options file from the same image
 *   NEW_AAA  RAYMAN_2.AAA written by the recompiled game for a fresh New Game (all-zero payload)
 *   ORA_NAT  RAYMAN_2.AAA written by the guest's own save path (FUN_8C04CB28 + FUN_8C04DFCC) in Jail_10 right after New Game, no pokes
 *   ORA_PAT  same, after poking every registered SAI save variable with the pattern 0x10 + (pos*13) % 0xE0 (see pattern_byte) */
#include "../../src/cpa/cpa_save.h"
#include "../../src/platform/vita/save_vita.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int g_fail, g_checks;
#define CHECK(c) do { g_checks++; if (!(c)) { g_fail++; printf("  FAIL %s:%d: %s\n", __FILE__, __LINE__, #c); } } while (0)

static const char FLY_AAA[] =
    "30302e352520202020202020202020205261796d616e2032205468652067726561742065736361706520202020202020"
    "5261796d616e20320000000000000000010001000000567cfb0000000000000000000000000000000000000000000000"
    "24f452f9ffff92fdb2ffa5fe31f781fd20f543f511f284fcbafbb6feebffc8ff00000000111100000000000000000000"
    "0222001344445100000000000000222002000673333318600000000000000020020097777737aa800000000000000020"
    "020067777778a88900000000000000200200061117686116000000000000002002000000008617710000011168800020"
    "0200000000617331000111168aa600200200000000173331017771166a61802002000000007333373337771161476020"
    "020000000073333333337711b447602002000000017333333333771154471020020000000177bb3333337116b4471020"
    "020000001115ccbb33710000944360200200000111c222cb790000000b478020020bbb11bccc22cbb000000001388020"
    "026defdb1ca222cbcb0000000a619020026b55d51caa22c22b0000000a170020028611bbb1c22cca2900000000110020"
    "02081661bbbcc11db1111111000000200200618611bbbbbb5ddddd5b1100002002008618111bbb55dffeeffd51100020"
    "020006186111bb5dffeeeeefd5b00020020008168611bb55ffeeeeffd5b1002002000061a8611bb5dffffffdd5b10020"
    "020000818a8111bbb5ddddd5bb1100200200000618a61111bbbb55bbb16000200200000088a866111111111116000020"
    "02000000000a86666111166688000020020000000000aa8666666688800000200222000000000aa8888888a000002220"
    "000000000000000aaaaaaa00000000008906a19a78d4db6f120a435896fc359f46e8f2836410bb3e27b3ce16d8106c49"
    "b469d617fafc4ac0ec0b0984c9d4545bd199695d449989f36213f5a36a49ebae9e79ac543de579d587cc90b1bc6d2268"
    "1b07a0fae6e118675c34dbefbd412ad2494b4350408e67a9614cd71e6ec6d1ed26ba975749ea669c171482fcd0fa28b7"
    "b3db990d02f6163efc8ddd8ae1de2f31f12b4d736cb2759091b5e8c8a273e75cde2bb08a851f8493d78da4b714b74e36"
    "7bdcc3504e3b4445cc160f5535ab65c0c93c87c6c807b3a7714e2aa306502dfbc64cfaedf184d2bac736f6a287a4a4e5"
    "730c1dc3cab0a27ccccf7150b9a8cb7fd17df149538c22cf82179c";
static const char FLY_SY[] =
    "436f6e666967272066696c65202020205261796d616e2032205468652067726561742065736361706520202020202020"
    "5261796d616e20320000000000000000010000000000ea5e290000000000000000000000000000000000000000000000"
    "24f452f9ffff92fdb2ffa5fe31f781fd20f543f511f284fcbafbb6feebffc8ff0000000000000aaaaaa0000000000000"
    "0222000000000a22efa00000000022200200000000000aefb1a0000000000020020000a000000afbb1a000000a000020"
    "02000aea00000af551a00000aea000200200a22ea0000ae5b1a0000a2eba0020020aeeeeeaaaaee55b1aaaaef5b1a020"
    "020afffeffee22e55b1fffe55bb1a0200200aefffffeeeff5555bbb5bb1a002002000aefffffefff5555bbbbb1a00020"
    "020000aeffffff5ff5bbbbbb1a000020020000aef5ff511111bbbbbb1a000020020000ae555511aaaa1bbbbb1a000020"
    "aaaaaafb5ffb1a0000af5bbb11aaaaaaae22eefb5b51a000000ae5bbb5eeeffaaeef5bbbbbb1a000000aef55b555bb1a"
    "afbbbbbbbbb1a000000aef5555bbbb1aaf1111bbbbb1a000000a2fff5511111aaaaaaa1bbbbb1a0000a22f5511aaaaaa"
    "020000afbbbbbfaaaa22e5551a000020020000afbbbbbbfeeeefff551a000020020000ae5bbbbbbb5ff55f551a000020"
    "020000ae5bbbbbbb5555f5551a00002002000ae5bbbbbbbb5b5bb55551a000200200af5bbb111bbbbb111155551a0020"
    "020afbbbb1aaafbbbb1aaa155551a0200200a1bb1a000afbb1a000a1551a002002000a11a0000afbb1a0000a11a00020"
    "020000aa00000afbb1a00000aa0000200200000000000afbb1a00000000000200222000000000af111a0000000002220"
    "0000000000000aaaaaa00000000000008918bf9b78d4db6c200a4358f2fc359f39e8f2816110bb3e27b3ce16d8106c49"
    "b469d617fae94bc0ec";
static const char NEW_AAA[] =
    "30302e302520202020202020202020205261796d616e2032205468652067726561742065736361706520202020202020"
    "5261796d616e20320000000000000000010001000000566cfb0000000000000000000000000000000000000000000000"
    "24f452f9ffff92fdb2ffa5fe31f781fd20f543f511f284fcbafbb6feebffc8ff00000000111100000000000000000000"
    "0222001344445100000000000000222002000673333318600000000000000020020097777737aa800000000000000020"
    "020067777778a88900000000000000200200061117686116000000000000002002000000008617710000011168800020"
    "0200000000617331000111168aa600200200000000173331017771166a61802002000000007333373337771161476020"
    "020000000073333333337711b447602002000000017333333333771154471020020000000177bb3333337116b4471020"
    "020000001115ccbb33710000944360200200000111c222cb790000000b478020020bbb11bccc22cbb000000001388020"
    "026defdb1ca222cbcb0000000a619020026b55d51caa22c22b0000000a170020028611bbb1c22cca2900000000110020"
    "02081661bbbcc11db1111111000000200200618611bbbbbb5ddddd5b1100002002008618111bbb55dffeeffd51100020"
    "020006186111bb5dffeeeeefd5b00020020008168611bb55ffeeeeffd5b1002002000061a8611bb5dffffffdd5b10020"
    "020000818a8111bbb5ddddd5bb1100200200000618a61111bbbb55bbb16000200200000088a866111111111116000020"
    "02000000000a86666111166688000020020000000000aa8666666688800000200222000000000aa8888888a000002220"
    "000000000000000aaaaaaa00000000008918bf9b78d4db6c120a435896fc359f46e8f2816110bb3e27b3ce16d8106c49"
    "b469d617fafc4ac0ec0b0984c9d454a3d199695d449989f36213f5a36a49ebae9e79ac543de579d587cc9071bc6d3268"
    "1b0aa0fae6e118675c34dbefbd412ad2494a4350408e67a9e14cd71e6ec6d1ed263a965749ea669c171482fcd0fa28b7"
    "b3db990d02f6163efc8ddd8ae1de2f31f12b4d736cb2759091b5e8c8a273e75cde2bb08a851f8493d78da4b714b74e36"
    "7bdcc3504e3b4445cc160f5535ab65c0c93c87c6c807b3a7714e2aa306502dfbc64cfaedf184d2bac736f6a287a4a4e5"
    "730c1dc3cab0a27ccccf7150b9a8cb7fd17df149538c21ee81179c";
static const char ORA_NAT[] =
    "30302e302520202020202020202020205261796d616e2032205468652067726561742065736361706520202020202020"
    "5261796d616e203200000000000000000100010000001755fb0000000000000000000000000000000000000000000000"
    "24f452f9ffff92fdb2ffa5fe31f781fd20f543f511f284fcbafbb6feebffc8ff00000000111100000000000000000000"
    "0222001344445100000000000000222002000673333318600000000000000020020097777737aa800000000000000020"
    "020067777778a88900000000000000200200061117686116000000000000002002000000008617710000011168800020"
    "0200000000617331000111168aa600200200000000173331017771166a61802002000000007333373337771161476020"
    "020000000073333333337711b447602002000000017333333333771154471020020000000177bb3333337116b4471020"
    "020000001115ccbb33710000944360200200000111c222cb790000000b478020020bbb11bccc22cbb000000001388020"
    "026defdb1ca222cbcb0000000a619020026b55d51caa22c22b0000000a170020028611bbb1c22cca2900000000110020"
    "02081661bbbcc11db1111111000000200200618611bbbbbb5ddddd5b1100002002008618111bbb55dffeeffd51100020"
    "020006186111bb5dffeeeeefd5b00020020008168611bb55ffeeeeffd5b1002002000061a8611bb5dffffffdd5b10020"
    "020000818a8111bbb5ddddd5bb1100200200000618a61111bbbb55bbb16000200200000088a866111111111116000020"
    "02000000000a86666111166688000020020000000000aa8666666688800000200222000000000aa8888888a000002220"
    "000000000000000aaaaaaa0000000000e706b09b78d4db6c120a435896fc359f46e8f2819e10bb3e27b3ce16d8106c49"
    "b469d617fafc4ac0ec0b0984c9d454a3d199695d449989f36213f5a36a49ebae9e79ac543de579d587cc9071bc6d3268"
    "1b0aa0fae6ed18675c38dbefbd412ad2494a4350408e67a9e14cd71e6ec6d1ed263a965749ea669c171482fcd0fa28b7"
    "b3db990d02f6163efc8ddd8ae1de2f31f12b4d736cb2759091b5e8c8a273e75cde2bb08a851f8493d78da4b714b74e36"
    "7bdcc3504e3b4445cc160f5535ab65c0c93c87c6c807b3a7714e2aa306502dfbc64cfaedf184d2bac736f6a287a4a4e5"
    "730c1dc3cab0a27ccccf7150b9a8cb7fd17df149538c215c80179c";
static const char ORA_PAT[] =
    "30302e302520202020202020202020205261796d616e2032205468652067726561742065736361706520202020202020"
    "5261796d616e20320000000000000000010001000000cdeefb0000000000000000000000000000000000000000000000"
    "24f452f9ffff92fdb2ffa5fe31f781fd20f543f511f284fcbafbb6feebffc8ff00000000111100000000000000000000"
    "0222001344445100000000000000222002000673333318600000000000000020020097777737aa800000000000000020"
    "020067777778a88900000000000000200200061117686116000000000000002002000000008617710000011168800020"
    "0200000000617331000111168aa600200200000000173331017771166a61802002000000007333373337771161476020"
    "020000000073333333337711b447602002000000017333333333771154471020020000000177bb3333337116b4471020"
    "020000001115ccbb33710000944360200200000111c222cb790000000b478020020bbb11bccc22cbb000000001388020"
    "026defdb1ca222cbcb0000000a619020026b55d51caa22c22b0000000a170020028611bbb1c22cca2900000000110020"
    "02081661bbbcc11db1111111000000200200618611bbbbbb5ddddd5b1100002002008618111bbb55dffeeffd51100020"
    "020006186111bb5dffeeeeefd5b00020020008168611bb55ffeeeeffd5b1002002000061a8611bb5dffffffdd5b10020"
    "020000818a8111bbb5ddddd5bb1100200200000618a61111bbbb55bbb16000200200000088a866111111111116000020"
    "02000000000a86666111166688000020020000000000aa8666666688800000200222000000000aa8888888a000002220"
    "000000000000000aaaaaaa0000000000990595ac3c8585076a8fd1c73a45f34ca605e8a65551f5654fc64c9944b9da8a"
    "64b43c00decd748bb46e7bfb454df2101154b3ba50b8a7c82a4697cc16c07d0d2ec46683d9f467febf89c22ed014b4fb"
    "bba71a3d3200f67c740199a0e1285c51d9d7e9e7845fb942f969e521229fb79ea6b70cf0fd2ba847ff01a0d3ecb37ed4"
    "c3a6139aa647a8f52468cf95cde76962914637f4f813db2b59600a27be5ad11f8e76dafd018e1a386f487668f8ae6805"
    "3b9199373abacade64a3cd9ae94273e3f901cd91ac76cd2ce9eb981cca89cbe8e661c0aaa5e5bcc14fa3540d3b6d7206"
    "631137f400000000000000000000000000000000000021cafa179c";

static unsigned char pattern_byte(unsigned pos, unsigned seed) { return (unsigned char)(0x10 + ((pos + seed * 7) * 13) % 0xE0); }

static size_t unhex(const char *h, uint8_t *o) { size_t n = 0; for (; h[0] && h[1]; h += 2) { unsigned v; sscanf(h, "%2x", &v); o[n++] = (uint8_t)v; } return n; }

/* load fixture `h` zero-extended to the 1024 byte file the game writes */
static size_t fixture(const char *h, uint8_t *f) { memset(f, 0, CPA_SAVE_FILE_BYTES); return unhex(h, f); }

/* parse, check the invariants, rebuild from the file's own header, demand byte identity. Returns the payload length. */
static size_t roundtrip(const char *name, const uint8_t *f, size_t len, CpaSaveInfo *in, uint8_t *payload) {
    size_t pl = 0; uint8_t rebuilt[2048]; size_t rl = 0;
    int rc = cpa_save_parse(f, len, in, payload, 512, &pl);
    if (rc != CPA_SAVE_OK) { printf("  FAIL %s: parse rc=%d (crc %04x/%04x)\n", name, rc, in->crcStored, in->crcComputed); g_fail++; return 0; }
    g_checks++;
    CHECK(in->crcStored == in->crcComputed);
    CHECK(in->padZero);
    CHECK(in->hdrLen == 0x280 && in->nIcons == 1 && in->eyecatch == 0);
    CHECK(len == CPA_SAVE_FILE_BYTES);
    rc = cpa_save_build(f, in->hdrLen, payload, pl, rebuilt, sizeof rebuilt, &rl);
    CHECK(rc == CPA_SAVE_OK && rl == len && memcmp(rebuilt, f, len) == 0);
    if (rl == len && memcmp(rebuilt, f, len)) { size_t i = 0; while (rebuilt[i] == f[i]) i++; printf("  (%s first diff at %zu: %02x vs %02x)\n", name, i, rebuilt[i], f[i]); }
    return pl;
}

static void test_layout(void) {
    unsigned pos = 0;
    for (unsigned i = 0; i < CPA_SAVE_SAI_COUNT; i++) {
        const CpaSaveVar *v = &cpa_save_sai_vars[i];
        CHECK(v->off == pos); CHECK(v->size == 1 || v->size == 4);
        CHECK(v->size == ((v->flags & 0xF000) == 0x3000 ? 4u : 1u));
        CHECK((v->flags & 0xFF) == 0x84);
        pos += v->size;
    }
    CHECK(pos == CPA_SAVE_SAI_BYTES);
    CHECK(CPA_SAVE_SAI_BYTES + 18 + 1 == CPA_SAVE_SLOT_PAYLOAD);
}

static void test_fixtures(void) {
    uint8_t f[CPA_SAVE_FILE_BYTES], p[512]; CpaSaveInfo in; size_t pl;
    /* played save */
    fixture(FLY_AAA, f); pl = roundtrip("FLY_AAA", f, 1024, &in, p);
    CHECK(pl == CPA_SAVE_SLOT_PAYLOAD && in.dataSize == 251);
    CHECK(!strcmp(in.vmDesc, "00.5%") && !strcmp(in.dcDesc, "Rayman 2 The great escape") && !strcmp(in.appId, "Rayman 2") && in.animSpeed == 1);
    CHECK(in.crcStored == 0x7C56);
    CHECK(!cpa_save_slot_is_default(p, pl));
    /* observed values of the played save (VERIFIED as bytes, meaning UNKNOWN) */
    CHECK(cpa_save_slot_var(p, 1) == 0x1e && cpa_save_slot_var(p, 2) == 0x1e && cpa_save_slot_var(p, 3) == 1 && cpa_save_slot_var(p, 4) == 3);
    CHECK(cpa_save_slot_var(p, 7) == 2 && cpa_save_slot_var(p, 8) == 5 && p[CPA_SAVE_SLOT_GAMEBYTE] == 3);
    for (unsigned i = 228; i < 246; i++) CHECK(p[i] == 0);
    /* options file */
    fixture(FLY_SY, f); pl = roundtrip("FLY_SY", f, 1024, &in, p);
    CHECK(pl == CPA_SAVE_CFG_PAYLOAD && in.dataSize == 41 && !strcmp(in.vmDesc, "Config' file") && in.animSpeed == 0 && in.crcStored == 0x5EEA);
    { CpaSaveCfg c; uint8_t q[CPA_SAVE_CFG_PAYLOAD];
      CHECK(cpa_save_cfg_decode(p, pl, &c) == CPA_SAVE_OK);
      CHECK(c.d[0] == 0 && c.d[1] == 0 && c.d[2] == 0x32 && c.d[3] == 0x64 && c.d[4] == 0x7f && !c.d[5] && !c.d[6] && !c.d[7] && !c.d[8] && c.trailer == 0);
      CHECK(cpa_save_cfg_encode(&c, q, sizeof q) == CPA_SAVE_OK && !memcmp(q, p, pl)); }
    /* fresh game */
    fixture(NEW_AAA, f); pl = roundtrip("NEW_AAA", f, 1024, &in, p);
    CHECK(pl == CPA_SAVE_SLOT_PAYLOAD && cpa_save_slot_is_default(p, pl) && !strcmp(in.vmDesc, "00.0%") && in.crcStored == 0x6C56);
    /* guest-written saves */
    fixture(ORA_NAT, f); pl = roundtrip("ORA_NAT", f, 1024, &in, p);
    CHECK(pl == CPA_SAVE_SLOT_PAYLOAD);
    CHECK(cpa_save_slot_var(p, 0) == 0x6e && cpa_save_slot_var(p, 1) == 0x1e && cpa_save_slot_var(p, 8) == 0xff);   /* live values in Jail_10 right after New Game */
    fixture(ORA_PAT, f); pl = roundtrip("ORA_PAT", f, 1024, &in, p);
    CHECK(pl == CPA_SAVE_SLOT_PAYLOAD);
    { unsigned bad = 0; for (unsigned i = 0; i < CPA_SAVE_SAI_BYTES; i++) if (p[i] != pattern_byte(i, 0)) bad++;
      CHECK(bad == 0); }   /* the guest serialiser walked its list in exactly the order/sizes of cpa_save_sai_vars */
    /* the fresh-game header equals the played one except description, anim speed? (informational) */
}

static void test_negative(void) {
    uint8_t f[CPA_SAVE_FILE_BYTES], g[CPA_SAVE_FILE_BYTES], p[512]; CpaSaveInfo in; size_t pl;
    fixture(FLY_AAA, f);
    CHECK(cpa_save_parse(f, 100, &in, p, sizeof p, &pl) == CPA_SAVE_E_SHORT);
    CHECK(cpa_save_parse(f, 700, &in, p, sizeof p, &pl) == CPA_SAVE_E_SHORT);              /* header ok, data cut */
    memcpy(g, f, sizeof f); g[0x2a0] ^= 1;                                                  /* payload bit flip: CRC16 covers the data */
    CHECK(cpa_save_parse(g, sizeof g, &in, p, sizeof p, &pl) == CPA_SAVE_E_CRC);
    memcpy(g, f, sizeof f); g[0x2a0] ^= 1; { uint16_t c = cpa_save_crc16(g, 0x280 + 251); g[0x46] = (uint8_t)c; g[0x47] = (uint8_t)(c >> 8); }
    CHECK(cpa_save_parse(g, sizeof g, &in, p, sizeof p, &pl) == CPA_SAVE_E_SUM);           /* valid CRC, wrong game checksum */
    memcpy(g, f, sizeof f); g[0x40] = 9;
    CHECK(cpa_save_parse(g, sizeof g, &in, p, sizeof p, &pl) == CPA_SAVE_E_HEADER);
    CHECK(cpa_save_parse(f, sizeof f, &in, p, 10, &pl) == CPA_SAVE_E_SIZE);
    memcpy(g, f, sizeof f); g[1000] = 1;                                                    /* padding byte is outside the CRC */
    CHECK(cpa_save_parse(g, sizeof g, &in, p, sizeof p, &pl) == CPA_SAVE_OK && !in.padZero);
}

/* The Vita-native format of src/platform/vita/save_vita.c vs the real files. */
static void test_vita_compat(void) {
    uint8_t f[CPA_SAVE_FILE_BYTES], v[sizeof(R2_tdst_SaveSlot)]; CpaSaveInfo in;
    R2_tdst_SaveSlot s; memset(&s, 0, sizeof s); s.uMagic = R2_SAVE_MAGIC; s.uVersion = R2_SAVE_VERSION; s.nSlot = 1; memcpy(s.szLevelName, "LEARN_10", 9);
    memcpy(v, &s, sizeof v);
    fixture(FLY_AAA, f);
    printf("  save_vita: sizeof(R2_tdst_SaveSlot)=%zu vs real file %d bytes; magic 0x%08X vs real first word 0x%02X%02X%02X%02X\n", sizeof(R2_tdst_SaveSlot), CPA_SAVE_FILE_BYTES, R2_SAVE_MAGIC, f[3], f[2], f[1], f[0]);
    CHECK(sizeof(R2_tdst_SaveSlot) != CPA_SAVE_FILE_BYTES);                                  /* SAVE_bLoadSlot rejects any file whose size differs */
    { uint32_t w = (uint32_t)f[0] | f[1] << 8 | f[2] << 16 | (uint32_t)f[3] << 24; CHECK(w != R2_SAVE_MAGIC); }
    CHECK(cpa_save_inspect(v, sizeof v, &in) != CPA_SAVE_OK);                                /* and the real parser rejects theirs */
    CHECK(R2_SAVE_MAX_SLOT == 3 && sizeof(R2_tdst_SaveSlot) < CPA_SAVE_SLOT_PAYLOAD + 4 + 0x280);
}

static void scan_dir_file(const char *path) {
    FILE *fp = fopen(path, "rb"); if (!fp) { printf("  cannot open %s\n", path); g_fail++; return; }
    uint8_t f[4096], p[512]; size_t len = fread(f, 1, sizeof f, fp); fclose(fp);
    CpaSaveInfo in; uint8_t re[4096]; size_t rl = 0, pl = 0;
    int rc = cpa_save_parse(f, len, &in, p, sizeof p, &pl);
    int ok = rc == CPA_SAVE_OK && cpa_save_build(f, in.hdrLen, p, pl, re, sizeof re, &rl) == CPA_SAVE_OK && rl == len && !memcmp(re, f, len);
    printf("  %-60s %zu B desc '%s' payload %zu crc %04x  %s\n", path, len, in.vmDesc, pl, in.crcStored, ok ? "parse+rebuild byte-identical" : "FAIL");
    g_checks++; if (!ok) g_fail++;
}

#ifdef CPA_SAVE_ORACLE
/* ---- kind F against the recompiled game: drives tools/sh4recomp build_hle objects like tools/cpa_tests/oracle_run.c ---- */
#include "hle.h"
#include "pad.h"
#include <signal.h>
#include <unistd.h>
extern const char *hle_stop_reason(void);
extern unsigned long hle_frames_limit;
extern void (*hle_frame_hook)(unsigned long); extern int hle_no_pace;
static SH4Ctx g_ctx;
static int g_mode;                 /* 1 = save (poke + guest save), 2 = load (guest load, compare) */
static unsigned g_seed; static int g_oracle_fail;
#define RD32(a) (*(uint32_t *)(sh4_ram + ((a) & 0xFFFFFF)))
#define RD16(a) (*(uint16_t *)(sh4_ram + ((a) & 0xFFFFFF)))
#define GT 0x8C2D4074u
static const struct { unsigned long f; uint32_t m; unsigned h; } g_press[] = { {400, PAD_START, 40}, {700, PAD_DOWN, 4}, {760, PAD_DOWN, 4}, {820, PAD_A, 4}, {1000, PAD_A, 4}, {1100, PAD_A, 4}, {1200, PAD_A, 4}, {1300, PAD_A, 4} };
#define ACT_FRAME 3500
/* the guest list must contain exactly our 63 variables (flag bits 0xC0) in table order with the table's source addresses and classes */
static int check_list(int poke) {
    uint32_t n = RD32(GT); unsigned i = 0; int ok = 1;
    for (; n; n = RD32(n)) {
        uint16_t fl = RD16(n + 0x10); if (!(fl & 0xC0)) continue;
        if (i >= CPA_SAVE_SAI_COUNT) { ok = 0; break; }
        const CpaSaveVar *v = &cpa_save_sai_vars[i];
        uint32_t src = (fl & 0x140) ? n + 8 : RD32(n + 4);
        if (fl != v->flags || src != v->srcVa) { printf("  list mismatch at var %u: flags %04x/%04x src %08x/%08x\n", i, fl, v->flags, src, v->srcVa); ok = 0; }
        if (poke) for (unsigned k = 0; k < v->size; k++) sh4_ram[(src & 0xFFFFFF) + k] = pattern_byte(v->off + k, g_seed);
        i++;
    }
    if (i != CPA_SAVE_SAI_COUNT) { printf("  list has %u saved variables, table %d\n", i, CPA_SAVE_SAI_COUNT); ok = 0; }
    return ok;
}
static uint8_t g_expect[CPA_SAVE_SLOT_PAYLOAD];
static void frame_hook(unsigned long fr) {
    uint32_t m = 0; for (unsigned i = 0; i < sizeof g_press / sizeof *g_press; i++) if (fr >= g_press[i].f && fr < g_press[i].f + g_press[i].h) m |= g_press[i].m;
    PadAnalog an = { 0, 0, 128, 128, 128, 128 }; static uint32_t last = ~0u; if (m != last) { last = m; pad_set_state(m, &an); }
    if (fr != ACT_FRAME) return;
    SH4Ctx s = g_ctx;
    if (g_mode == 1) {
        if (!check_list(1)) g_oracle_fail = 1;
        g_ctx.r[4] = 0; hle_call(&g_ctx, 0x8C04CB28u);   /* FUN_8C04CB28: serialise the registered variables into the guest slot buffer 0x8C0C5F3F */
        if ((g_ctx.r[0] & 0xFF) != 1) { printf("  guest capture failed\n"); g_oracle_fail = 1; }
        g_ctx.r[4] = 1; hle_call(&g_ctx, 0x8C04DFCCu);   /* FUN_8C04DFCC(slot 1): write RAYMAN_2.AAA through the BUP layer */
        if ((int)g_ctx.r[0] != 1) { printf("  guest save returned %d\n", (int)g_ctx.r[0]); g_oracle_fail = 1; }
    } else {
        if (!check_list(0)) g_oracle_fail = 1;
        g_ctx.r[4] = 1; hle_call(&g_ctx, 0x8C04DE00u);   /* FUN_8C04DE00(slot 1): read + verify the file into the slot buffer */
        if ((int)g_ctx.r[0] != 1) { printf("  guest load returned %d\n", (int)g_ctx.r[0]); g_oracle_fail = 1; }
        hle_call(&g_ctx, 0x8C04CB80u);                   /* FUN_8C04CB80: apply the buffer to the registered variables (writes the node-inline copies at node+8) */
        uint32_t n = RD32(GT); unsigned i = 0, bad = 0;
        for (; n; n = RD32(n)) {
            uint16_t fl = RD16(n + 0x10); if (!(fl & 0xC0)) continue;
            const CpaSaveVar *v = &cpa_save_sai_vars[i++];
            for (unsigned k = 0; k < v->size; k++) if (sh4_ram[(n + 8 + k) & 0xFFFFFF] != g_expect[v->off + k]) bad++;
        }
        printf("  guest load: %u of %d variables applied, %u byte mismatches\n", i, CPA_SAVE_SAI_COUNT, bad);
        if (bad) g_oracle_fail = 1;
        if (sh4_ram[0x124738] != g_expect[CPA_SAVE_SLOT_GAMEBYTE] || sh4_ram[0x124739] != 99) { printf("  game byte 0x8C124738=%02x (want %02x), 0x8C124739=%02x (want 99)\n", sh4_ram[0x124738], g_expect[CPA_SAVE_SLOT_GAMEBYTE], sh4_ram[0x124739]); g_oracle_fail = 1; }
    }
    g_ctx = s;
}
static void on_alarm(int s) { (void)s; hle_stop("host timeout"); }
static int oracle_main(int argc, char **argv) {
    /* test_cpa_save --oracle save|load ASSETS [SEED]   (R2_SAVE_DIR selects the A1 store directory; load expects RAYMAN_2.AAA there) */
    if (argc < 4) return 2;
    g_mode = !strcmp(argv[2], "save") ? 1 : 2; const char *assets = argv[3]; if (argc > 4) g_seed = (unsigned)atoi(argv[4]);
    char img[512]; snprintf(img, sizeof img, "%s/1ST_READ.BIN", assets);
    if (g_mode == 2) {   /* expected payload = what the native writer put in the store file */
        const char *sd = getenv("R2_SAVE_DIR"); char fp[600]; snprintf(fp, sizeof fp, "%s/RAYMAN_2.AAA", sd ? sd : ".");
        FILE *x = fopen(fp, "rb"); if (!x) { printf("  no %s\n", fp); return 2; }
        uint8_t f[1024]; size_t l = fread(f, 1, sizeof f, x); fclose(x); CpaSaveInfo in; size_t pl;
        if (cpa_save_parse(f, l, &in, g_expect, sizeof g_expect, &pl) != CPA_SAVE_OK || pl != CPA_SAVE_SLOT_PAYLOAD) { printf("  store file does not parse\n"); return 2; }
    }
    FILE *f = fopen(img, "rb"); if (!f) { perror(img); return 2; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET); uint8_t *buf = malloc((size_t)n);
    if (fread(buf, 1, (size_t)n, f) != (size_t)n) return 2; fclose(f);
    hle_no_pace = 1; hle_verbose = 0; hle_frames_limit = ACT_FRAME + 50;
    hle_boot_init(&g_ctx, buf, (uint32_t)n, assets); hle_frame_hook = frame_hook;
    signal(SIGALRM, on_alarm); alarm(300);
    int rc = hle_run_main(&g_ctx);
    printf("  oracle %s: run rc=%d (%s), %s\n", g_mode == 1 ? "save" : "load", rc, hle_stop_reason(), g_oracle_fail ? "FAILED" : "ok");
    return g_oracle_fail ? 1 : 0;
}
#endif

int main(int argc, char **argv) {
    if (argc >= 3 && !strcmp(argv[1], "--dir")) {   /* parse+rebuild every RAYMAN_2.* in a directory */
        char path[1024]; static const char *const names[] = { "RAYMAN_2.AAA", "RAYMAN_2.SY_", "RAYMAN_2.NW_", "RAYMAN_2.BBB" };
        for (unsigned i = 0; i < sizeof names / sizeof *names; i++) { snprintf(path, sizeof path, "%s/%s", argv[2], names[i]); FILE *t = fopen(path, "rb"); if (t) { fclose(t); scan_dir_file(path); } }
        printf("%d checks, %d failures\n", g_checks, g_fail); return g_fail != 0;
    }
    if (argc >= 5 && !strcmp(argv[1], "--emit")) {   /* --emit TEMPLATE_FILE OUT_FILE SEED : native-built slot file (template header, pattern payload) */
        FILE *t = fopen(argv[2], "rb"); if (!t) return 2; uint8_t tf[1024]; size_t tl = fread(tf, 1, sizeof tf, t); fclose(t);
        CpaSaveInfo in; if (cpa_save_inspect(tf, tl, &in) != CPA_SAVE_OK) return 2;
        uint8_t p[CPA_SAVE_SLOT_PAYLOAD] = {0}, out[1024]; size_t ol; unsigned seed = (unsigned)atoi(argv[4]);
        for (unsigned i = 0; i < CPA_SAVE_SAI_BYTES; i++) p[i] = pattern_byte(i, seed);
        p[CPA_SAVE_SLOT_GAMEBYTE] = (uint8_t)(0x40 + seed);
        uint8_t hdr[CPA_SAVE_HDR_MAX]; memcpy(hdr, tf, in.hdrLen); cpa_save_set_vmdesc(hdr, "12.3%");
        if (cpa_save_build(hdr, in.hdrLen, p, sizeof p, out, sizeof out, &ol) != CPA_SAVE_OK) return 2;
        FILE *o = fopen(argv[3], "wb"); if (!o) return 2; fwrite(out, 1, ol, o); fclose(o); return 0;
    }
#ifdef CPA_SAVE_ORACLE
    if (argc >= 2 && !strcmp(argv[1], "--oracle")) return oracle_main(argc, argv);
#endif
    printf("cpa_save tests\n");
    test_layout(); test_fixtures(); test_negative(); test_vita_compat();
    printf("%d checks, %d failures\n%s\n", g_checks, g_fail, g_fail ? "FAIL" : "PASS");
    return g_fail != 0;
}
