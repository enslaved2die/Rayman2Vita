/* cpa_save: portable parser/writer for the REAL Rayman 2 Dreamcast save files (milestone N6, "save format" half).
 * Portable C99, only <stdint.h>/<stddef.h>. No I/O, no allocation: callers pass buffers.
 *
 * Evidence tags: VERIFIED = reproduced by running the recompiled game (oracle) and/or by byte-exact round trips against real files
 * (a played Flycast VMU save, fixtures in tools/cpa_tests/test_cpa_save.c); INFERRED = read from lifted code / consistent but not exercised;
 * UNKNOWN = no meaning established. Full audit: re_analysis/dc/notes_save_audit.md.
 *
 * ---- Files (VERIFIED) ---- the game writes through the Katana BUP library, one VMS file per call, 2 blocks (1024 B) each:
 *   RAYMAN_2.SY_   options ("Config' file")           plain payload 37 B  (CpaSaveCfg)
 *   RAYMAN_2.<LLL> one per saved game (3 letters)     plain payload 247 B (CpaSaveSlot); LLL chosen by the player; "RAYMAN_2.NW_" = fresh card default
 *   A slot file name is a 12 character VMS name; the file content is exactly what Flycast/KOS keep in the VMU image for that directory entry.
 * ---- Container (VERIFIED, 8 real files) ----
 *   0x000 char[16]  VMS description (space padded): slot "00.5%" (INFERRED: completion percent), config "Config' file"
 *   0x010 char[32]  DC description "Rayman 2 The great escape"
 *   0x030 char[16]  application id "Rayman 2" (NUL padded)
 *   0x040 u16 icon count (1)   0x042 u16 anim speed (1 in slot files, 0 in the config file)   0x044 u16 eyecatch type (0 = none)
 *   0x046 u16 CRC16-CCITT (poly 0x1021, init 0, no final xor) over [0, 0x80+512*icons+eyecatch+dataSize) with this field zeroed
 *   0x048 u32 dataSize = plain payload + 4   0x04C 20 reserved bytes (zero)   0x060 palette 16 x ARGB4444   0x080 icon bitmap(s) 512 B each (4 bpp 32x32)
 *   0x280 data = scramble(plain || u32LE(sum of the plain bytes)), then zero padding up to a 512 byte multiple (1024 B total).
 *   scramble = XOR stream: s = 0x224896EB; byte ^= (int32)s >> 12 (low byte); s *= 0x3A41C471 (guest FUN_8C065E30; symmetric).
 * ---- Slot payload (247 B) ----
 *   [0, 228)  VERIFIED layout: the concatenated values of the 63 "SAI save" variables that the engine registered with flag 0x80 in its
 *             persistent-variable list (P5/SAI_Save.c; list head guest 0x8C2D4074, node+0x10 = flags, serialiser FUN_8C093C30/8C093CA0), in list order.
 *             Sizes and order are fixed (identical in every one of the 14 level RAM dumps that carry the list). Meaning of every variable: UNKNOWN.
 *   [228,246) INFERRED padding: the game does not initialise it; it is 0 in saves written by a normal run, but can carry stale scrambler bytes.
 *   [246]     VERIFIED mapping: copy of guest byte 0x8C124738 (written by save FUN_8C04DFCC from it, restored by load FUN_8C04DF80); meaning UNKNOWN (0 new game, 3 in the played save).
 *   Load additionally sets guest byte 0x8C124739 = 99 and 0x8C0C603A = 0 (VERIFIED in lifted code, meaning UNKNOWN).
 */
#ifndef CPA_SAVE_H
#define CPA_SAVE_H
#include <stddef.h>
#include <stdint.h>

#define CPA_SAVE_BLOCK        512
#define CPA_SAVE_HDR_FIXED    0x80      /* header bytes before the first icon bitmap */
#define CPA_SAVE_OFF_CRC      0x46
#define CPA_SAVE_OFF_DSIZE    0x48
#define CPA_SAVE_SLOT_PAYLOAD 247
#define CPA_SAVE_CFG_PAYLOAD  37
#define CPA_SAVE_FILE_BLOCKS  2
#define CPA_SAVE_FILE_BYTES   (CPA_SAVE_FILE_BLOCKS * CPA_SAVE_BLOCK)
#define CPA_SAVE_HDR_MAX      (CPA_SAVE_HDR_FIXED + 3 * 512 + 8064)  /* any icon/eyecatch combination of the VMS format */

enum { CPA_SAVE_OK = 0, CPA_SAVE_E_SHORT = -1, CPA_SAVE_E_HEADER = -2, CPA_SAVE_E_CRC = -3, CPA_SAVE_E_SIZE = -4, CPA_SAVE_E_SUM = -5, CPA_SAVE_E_ARG = -6 };

typedef struct CpaSaveInfo {
    char     vmDesc[17], dcDesc[33], appId[17];   /* NUL terminated copies, trailing spaces/NULs stripped */
    uint16_t nIcons, animSpeed, eyecatch;
    uint16_t crcStored, crcComputed;
    uint32_t dataSize;                            /* stored; plain payload length = dataSize - 4 */
    size_t   hdrLen;                              /* 0x80 + 512*icons + eyecatch bytes: offset of the data */
    size_t   fileLen;                             /* bytes supplied */
    int      padZero;                             /* 1 if every byte after hdrLen+dataSize is 0 */
} CpaSaveInfo;

/* Primitives */
uint16_t cpa_save_crc16(const uint8_t *file, size_t n);                     /* CRC16 over n bytes with the field at 0x46 treated as 0 */
void     cpa_save_scramble(uint8_t *buf, size_t n);                         /* in place, symmetric */
uint32_t cpa_save_sum(const uint8_t *plain, size_t n);

/* Header only: fills *info (no payload decoding). Returns CPA_SAVE_OK, E_SHORT, E_HEADER (icon count/eyecatch/size impossible) or E_CRC (info is still filled). */
int cpa_save_inspect(const uint8_t *file, size_t len, CpaSaveInfo *info);

/* Full parse: validates CRC16 and the payload sum; writes the plain payload (dataSize-4 bytes) to payload[0..cap) and its length to *plen.
 * Errors: E_SHORT (truncated), E_HEADER, E_CRC, E_SIZE (cap too small / dataSize < 4), E_SUM. On E_CRC / E_SUM the payload is still returned when it fits. */
int cpa_save_parse(const uint8_t *file, size_t len, CpaSaveInfo *info, uint8_t *payload, size_t cap, size_t *plen);

/* Serialise: header block `hdr` (hdrLen bytes: 0x80 + icons; its CRC/dataSize fields are ignored and recomputed, everything else is copied verbatim,
 * so a header taken from a real file reproduces that file byte for byte), payload plen bytes -> out (zero padded to a 512 multiple). *outLen = bytes written. */
int cpa_save_build(const uint8_t *hdr, size_t hdrLen, const uint8_t *payload, size_t plen, uint8_t *out, size_t cap, size_t *outLen);

/* Set the 16 byte description (space padded) in a header block, e.g. "00.5%". */
void cpa_save_set_vmdesc(uint8_t *hdr, const char *s);

/* ---- Options file RAYMAN_2.SY_ : 9 little-endian u32 + 1 trailing byte (VERIFIED size/order from the writer FUN_8C04C3FE and the real file) ---- */
typedef struct CpaSaveCfg {
    uint32_t d[9];
    uint8_t  trailer;                                                       /* 0 in every observed file; UNKNOWN */
} CpaSaveCfg;
/* d[0] = guest 0x8C2D0F44, set by FUN_8C04C31E(p): 1 selects one output mode of the sound object at 0x8C123C48 (INFERRED stereo/mono; 0 observed)
 * d[1] = (FUN_8C010B08() != 0)  UNKNOWN flag (0 observed)
 * d[2] = FUN_8C07A9C0()  default 0x32 (FUN_8C04C3C0 applies 0x32 through a setter)  UNKNOWN
 * d[3] = guest 0x8C2D0F50 : level 0..0x7F (setter FUN_8C04C34E clamps to 0x7F, target object 0x8C2D1068); 0x64 observed
 * d[4] = guest 0x8C2D0F54 : level 0..0x7F (setter FUN_8C04C336 clamps to 0x7F, target object 0x8C2D106C); 0x7F observed (default)
 * d[5] = guest 0x8C2D0F58 UNKNOWN (0);  d[6] = guest 0x8C0C5AD0, d[7] = 0x8C0C5404, d[8] = 0x8C0C5408 UNKNOWN (0).
 * d[3]/d[4] are volume-like (INFERRED, the names music/sfx/voice are NOT established). */
int  cpa_save_cfg_decode(const uint8_t *plain, size_t n, CpaSaveCfg *out);   /* n must be CPA_SAVE_CFG_PAYLOAD */
int  cpa_save_cfg_encode(const CpaSaveCfg *c, uint8_t *plain, size_t cap);   /* writes CPA_SAVE_CFG_PAYLOAD bytes */

/* ---- Slot payload ---- */
#define CPA_SAVE_SAI_COUNT 63
#define CPA_SAVE_SAI_BYTES 228
#define CPA_SAVE_SLOT_TAIL_OFF  228   /* [228,246) padding */
#define CPA_SAVE_SLOT_GAMEBYTE  246   /* mirror of guest byte 0x8C124738 */
typedef struct CpaSaveVar {
    uint16_t off;       /* byte offset in the plain payload */
    uint8_t  size;      /* 1 or 4 (the 0x3000 / 0x1000 / 0x8000 classes; node flag type nibble) */
    uint16_t flags;     /* node flags in the guest list (0x1084 u8, 0x3084 u32 little endian, 0x8084 u8) */
    uint32_t srcVa;     /* guest address of the live variable that the save reads (identical in all 14 inspected level dumps) */
} CpaSaveVar;
extern const CpaSaveVar cpa_save_sai_vars[CPA_SAVE_SAI_COUNT];

/* Typed access to a 247 byte slot payload. */
uint32_t cpa_save_slot_var(const uint8_t *payload, unsigned idx);           /* value of SAI variable idx (u8 zero-extended or u32) */
void     cpa_save_slot_set_var(uint8_t *payload, unsigned idx, uint32_t v);
int      cpa_save_slot_is_default(const uint8_t *payload, size_t n);        /* 1 if all 247 bytes are zero = the fresh "new game" file */

#endif
