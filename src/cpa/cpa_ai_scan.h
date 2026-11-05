/* cpa_ai_scan: decode-only scanner for the Rayman 2 Dreamcast AI script data (milestone N5, step "opcode evidence ledger").
 * Portable C99, depends only on cpa_image.h. It does NOT interpret scripts. It walks the data, validates its shape and counts which node types and
 * which opcode ids (keyword / condition / operator / function / procedure / meta-action / field) the real game data uses.
 *
 * Works on a DAT image set (level DAT + FIX.DAT, via CpaImage) and, with the identical walk code, on a 16 MiB guest-RAM dump presented as ONE CpaImage
 * region at 0x8C000000 (the runtime form).
 *
 * Tags: VERIFIED = reproduced on the real data by tools/cpa_tests/test_ai_scan.c over all level DATs (numbers in re_analysis/dc/ai_ledger.md) and/or read
 * from the lifted dispatch code; INFERRED = fits the data only; UNKNOWN = not decoded.
 *
 * ---- Layouts (all offsets bytes, little endian) ----
 * AI node (12 B) VERIFIED:   +0 u32 param | +4 u32 handler (file holds the placeholder 0x0000000D, the loader writes GPT[type]; DAT vs RAM check below)
 *                            +8 u16 skip cache (0 in the DAT, the guest fills it at run time: MetaAction handler f_8c0730a0 stores the node distance there)
 *                            +0xA u8 depth | +0xB u8 type (0..40; indexes the 41-entry node dispatch table GPT at VA 0x8C0C7C90, handler f_8c072e7a).
 * Script = a pre-order, depth-annotated flat list of nodes: first node depth 1, depth rises by at most 1 per node, ends with an EndMacro node
 *          (type 8, depth 0, which the guest evaluator does not advance past). VERIFIED (zero shape errors over all scripts of all levels).
 * Param meaning by type (VERIFIED from the lifted dispatchers f_8c072e96/eae/f3a/f20/f5e): type 0 keyword id (table 0x8C0C9618, 4 B entries, 20 slots),
 *   type 1 condition id (0x8C0C96A8, 8 B entries, 160 slots), type 2 operator id (0x8C0CB838, 4 B entries, 28 slots),
 *   type 3 function id (0x8C0C9BE8, 8 B entries, 322 slots), type 4 procedure id (0x8C0CA768, 8 B entries, 530 slots). Other types: see the ledger.
 * Actor chain VERIFIED on every actor of every level: SuperObject(type 2).data = Actor; Actor+0xC = Brain; Brain+0 = Mind;
 *   Mind: +0 AIModel*, +4 Intelligence* (normal), +8 Intelligence* (reflex), +0xC DsgMem*.
 *   AIModel: +0 normal-behaviour list header*, +4 reflex-behaviour list header* (may be NULL), +8 DsgVar model* (layout UNKNOWN, not walked),
 *            +0xC macro list header* (may be NULL).
 *   Behaviour list header: +0 first entry*, +4 u32 count, +8 entry* (the first entry in most lists, another entry of the same list in 32 lists: INFERRED initial comport). Entry (0x10 B, "comport"): +0 rule array* (u32 script start per rule),
 *            +4 u32 (0, except 54 comports: then a pointer, UNKNOWN role; counted), +8 u32 index (== entry number; counted), +0xC u8 rule count (bytes +0xD..+0xF are 0xCD fill).
 *   Macro list header: +0 first entry*, +4 u8 count (+5..+7 0xCD fill). Entry (8 B): two slots A,B, each a pointer to a word that holds the script start; A and B
 *            hold the same start (counted; INFERRED role: B is the slot placed after the macro body).
 *   Intelligence/Reflex instance (Mind+4 / +8): +0x18 = the model's behaviour list header (counted), +8 = current comport entry (INFERRED).
 */
#ifndef CPA_AI_SCAN_H
#define CPA_AI_SCAN_H

#include "cpa_image.h"

#define CPA_AI_NTYPE   41     /* node types 0..40 = entries of the guest node dispatch table GPT (VERIFIED: 41 consecutive code pointers) */
#define CPA_AI_NKW     20
#define CPA_AI_NCOND   160
#define CPA_AI_NOP     28
#define CPA_AI_NFUNC   322
#define CPA_AI_NPROC   530
#define CPA_AI_NMETA   16     /* meta-action table size UNKNOWN: ids 0..3 seen; 16 slots tracked, larger ids counted as out of range */
#define CPA_AI_NFIELD  32     /* field (type 9) ids 0..17 seen; 32 tracked */
#define CPA_AI_NMAXSLOT 8     /* number of opcode classes below */

/* Opcode classes (index into CpaAiHist.cls). */
enum { CPA_AI_C_KEYWORD, CPA_AI_C_COND, CPA_AI_C_OPERATOR, CPA_AI_C_FUNCTION, CPA_AI_C_PROCEDURE, CPA_AI_C_META, CPA_AI_C_FIELD, CPA_AI_C_TYPE };
/* Node type that carries each class (types 0..5 and 9; the TYPE class is indexed by the node type itself). */
enum { CPA_AI_T_KEYWORD = 0, CPA_AI_T_COND = 1, CPA_AI_T_OPERATOR = 2, CPA_AI_T_FUNCTION = 3, CPA_AI_T_PROCEDURE = 4, CPA_AI_T_META = 5, CPA_AI_T_ENDMACRO = 8, CPA_AI_T_FIELD = 9 };

/* Guest VAs (VERIFIED from the lifted code, tools/sh4recomp/gen_fix/recomp_12.c f_8c072e7a/e96/eae/f20/f3a/f5e). */
#define CPA_AI_VA_GPT   0x8C0C7C90u   /* u32[41] node type -> handler */
#define CPA_AI_VA_KW    0x8C0C9618u
#define CPA_AI_VA_COND  0x8C0C96A8u
#define CPA_AI_VA_FUNC  0x8C0C9BE8u
#define CPA_AI_VA_PROC  0x8C0CA768u
#define CPA_AI_VA_OP    0x8C0CB838u

/* Per opcode statistics. */
typedef struct CpaAiOpStat {
    uint32_t n;                 /* occurrences */
    uint16_t arMin, arMax;      /* direct child count (operand count) seen; valid iff n > 0 */
    uint64_t child[4];          /* bit t set: a child of node type t was seen at operand position 0..3 */
    uint64_t parent;            /* bit t set: parent node type t seen (0 bit set... use parentRoot for "no parent") */
    uint32_t parentRoot;        /* occurrences as a direct statement of the script (depth 1) */
} CpaAiOpStat;

typedef struct CpaAiHist {
    CpaAiOpStat kw[CPA_AI_NKW], cond[CPA_AI_NCOND], op[CPA_AI_NOP], func[CPA_AI_NFUNC], proc[CPA_AI_NPROC], meta[CPA_AI_NMETA], field[CPA_AI_NFIELD], type[CPA_AI_NTYPE];
    uint32_t oor[CPA_AI_NMAXSLOT];  /* param >= table size, per class (KEYWORD..FIELD) */
    uint32_t oorMax[CPA_AI_NMAXSLOT];
    uint32_t typeBad;           /* node type byte > 40 */
    uint32_t nNodes, nScripts;
    uint32_t maxDepth;
} CpaAiHist;

/* Script shape errors (all VERIFIED to be 0 on the shipped data; kept as counters so a damaged file is reported, not hidden). */
typedef struct CpaAiShape {
    uint32_t firstDepth;        /* first node depth != 1 */
    uint32_t depthJump;         /* depth rises by more than 1 */
    uint32_t depth0Early;       /* depth-0 node that is not an EndMacro, or EndMacro with depth != 0 inside the list */
    uint32_t unterminated;      /* no EndMacro before the data / run ended */
    uint32_t unreadable;        /* node outside the image */
    uint32_t tooLong;
    uint32_t placeholderNot0d;  /* DAT handler word (+4) != 0x0D (only meaningful on a DAT image) */
    uint32_t skipNonzero;       /* +8 u16 != 0 */
} CpaAiShape;

typedef struct CpaAiScan {
    /* A. every script found by splitting the sorted Table-1 node list of the level .TMP (the loader's own list of AI nodes). [0] = level image, [1] = FIX image. */
    CpaAiHist tmp[2];
    CpaAiShape tmpShape;
    uint32_t tmpListed, tmpOutside, tmpDup;   /* Table 1 entries / outside the images / duplicates */
    uint32_t tmpScripts, tmpScriptsReached, tmpScriptsOrphan, tmpScriptsOrphanFix;
    uint32_t tmpNodesReached, tmpNodesOrphan, tmpNodesOrphanFix;
    /* B. scripts reached from actors by the structured walk */
    CpaAiHist walk[2];
    CpaAiShape walkShape;
    uint32_t nSO, nActors, nActorNoMind, nActorNoModel, nMinds, nModels;
    uint32_t nNormalLists, nReflexLists, nReflexListNull, nMacroLists, nComports, nReflexComports, nMacros, nRuleSlots;
    uint32_t nScriptsNormal, nScriptsReflex, nScriptsMacro;     /* unique script starts per kind */
    uint32_t nMacroEmpty;       /* macro entry whose two slots are both NULL (empty slot) */
    uint32_t cmpE4Nonzero, cmpE4NotInList, cmpIdxMismatch, cmpHdrDup, cmpHdrInitBad, cmpFillBad, cmpMacroSlotsDiffer, cmpMacroBadPtr, cmpRuleBadPtr, badCount;
    uint32_t intelNormalLinked, intelNormalNot, intelReflexLinked, intelReflexNot, intelCurInList, intelCurNotInList, intelCurIdx0, intelNull;
    uint32_t walkNotInTmp;      /* walk script start that is not a Table-1 script start (0 = the two views agree) */
    /* reached node list (sorted, unique VAs) for the runtime comparison */
    uint32_t *walkNodes; uint32_t nWalkNodes;
    uint32_t *walkStarts; uint32_t nWalkStarts;
    uint32_t sizeofNode;        /* 12 */
} CpaAiScan;

CpaAiScan *cpa_ai_scan_new(void);
void       cpa_ai_scan_free(CpaAiScan *s);

/* Scan one level. `rootSoVa` = World SuperObject (level DAT header word 13). `tmp`/`tmpN` = the level .TMP file contents (Table 1 census), or NULL to skip part A.
 * Returns 1 if at least one actor with a Mind was walked. */
int cpa_ai_scan(CpaAiScan *s, const CpaImage *im, uint32_t rootSoVa, const uint8_t *tmp, size_t tmpN);

/* Runtime-form comparison of the nodes the walk reached: `dat` = DAT image, `ram` = guest RAM dump image (one region at 0x8C000000). */
typedef struct CpaAiRtCmp {
    uint32_t n;
    uint32_t typeDepthSame;     /* +0xA/+0xB identical */
    uint32_t handlerIsGpt;      /* RAM handler word == GPT[type] read from the same RAM dump */
    uint32_t handlerOther;
    uint32_t paramSame;
    uint32_t paramDiff[CPA_AI_NTYPE];   /* per node type */
    uint32_t skipSet;           /* RAM +8 u16 != 0 */
    uint32_t unreadable;
    uint32_t gptValid;          /* the 41 GPT words read from RAM are code pointers */
    uint32_t gpt[CPA_AI_NTYPE];
} CpaAiRtCmp;
void cpa_ai_runtime_compare(CpaAiRtCmp *o, const CpaImage *dat, const CpaImage *ram, const uint32_t *nodes, uint32_t nNodes);

/* helpers */
const char *cpa_ai_class_name(int cls);
/* Merge b into a (counts add, arity min/max and masks combine). */
void cpa_ai_hist_merge(CpaAiHist *a, const CpaAiHist *b);

#endif
