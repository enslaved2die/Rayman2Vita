/* cpa_ai_exec: portable evaluator for the DECODED subset of the Rayman 2 Dreamcast AI script language (milestone N5, step "evaluator").
 * Portable C99, no dependency except <stdint.h>/<stddef.h>. Memory is one flat, writable image (a 16 MiB guest-RAM dump or any copy of it) at `base`.
 *
 * Every rule below was read from the lifted handlers (tools/sh4recomp/gen_fix/recomp_12.c) and is re-checked against them, node by node, by
 * tools/cpa_tests/test_ai_exec.c --oracle (runs f_8c072e7a on RAM dumps and compares value, tag, returned next node and DsgVar bytes).
 * Anything not in the subset returns CPA_AI_E_UNSUPPORTED with env->unsupType/unsupId set: the evaluator never guesses.
 *
 * ---- Value record (the guest "out" buffer, 16 bytes) VERIFIED ----
 *   +0 u32/int32/float, +4, +8 (a vector uses all three floats), +0xC u32 type tag.
 *   Tags: 6 integer (also condition result), 8 float, 0x15 vector, 0xB perso (actor pointer), 0xC address of a DsgVar, 0xA sector/waypoint-like pointer,
 *         0x22 comport ptr, 0x18 action ptr, 0x14 void, others = reference constants (see ledger node-type table).
 * ---- DsgVar (design variable) layout VERIFIED on 85222 variables of 5218 models (78 levels, RAM dumps) ----
 *   SO(type 2).data(+4) = Actor; Actor+0xC = Brain; Brain+0 = Mind; Mind+0xC = DsgMem.
 *   DsgMem: +0 -> word holding the model* (P: *P = model), +4 -> initial-value copy (INFERRED), +8 -> live data block, +0xC = model*.
 *   DsgModel (AIModel+8): +0 default-value block*, +4 descriptor array*, +8 u32 data size in bytes, +0xC u8 variable count.
 *   Descriptor (16 B): +0 u32 byte offset into the data block, +4 u32 type index (0..24 seen), +8 u32 (0, or 128 in 858 vars), +0xC u32 (4 mostly, 2 or 1 or 0 sometimes).
 *   Type index -> getter/setter table at guest 0x8C0C7740, 12-byte entries {u32 typeCode, getter, setter}; typeCode is 1..0x2c, indexes 18..23 are the generic
 *   array wrapper f_8c07270e. DsgVarRef node (type 11) param = variable index; getter(varAddr, 0, out) writes the value record.
 */
#ifndef CPA_AI_EXEC_H
#define CPA_AI_EXEC_H
#include <stddef.h>
#include <stdint.h>

#define CPA_AI_E_OK          0
#define CPA_AI_E_UNSUPPORTED 1   /* opcode/type outside the decoded subset */
#define CPA_AI_E_MEM         2   /* address outside the image / bad structure */
#define CPA_AI_E_DEPTH       3
#define CPA_AI_E_LOG         4   /* write log buffer overflow */

enum { CPA_AI_TAG_INT = 6, CPA_AI_TAG_FLOAT = 8, CPA_AI_TAG_VOID = 0x14, CPA_AI_TAG_VEC = 0x15, CPA_AI_TAG_PERSO = 0xB };

typedef struct CpaAiVal { uint32_t w[3]; uint32_t tag; } CpaAiVal;

typedef struct CpaAiWr { uint32_t va, old; uint8_t len; } CpaAiWr;   /* one logged guest write (old value, 1/2/4 bytes) */

typedef struct CpaAiEnv {
    uint8_t *mem; uint32_t base; size_t n;   /* writable image */
    uint32_t selfSo;                         /* "obj" handed to the handlers: the SuperObject of the running actor */
    uint32_t mainActorPtrVa;                 /* VA of the global holding the main-actor SuperObject (guest 0x8C123CF0); 0 = MainActor evaluates to Nobody */
    int allowWrite;                          /* 0: every statement with a side effect (assignment, procedure, If/Else skip cache, runner) is reported unsupported */
    /* Guest globals read/written by the statement layer (VA, 0 = absent: reads give 0, writes are dropped). cpa_ai_env_dc() fills the Dreamcast addresses. */
    uint32_t gFlag;      /* 0x8C0C7D34 byte: statement flags set by procedures (f_8c072f52); the procedure dispatcher clears it, then copies it & ~4 into out[0] */
    uint32_t gFrameCtr;  /* 0x8C0C608C signed byte: frame counter tested by If2/If4/If8/If16 */
    uint32_t gOverride;  /* 0x8C0C76FC one-shot perso override (set by operator 24); only consumed by the custom-bit procedures here */
    uint32_t gStep0, gStep1;   /* 0x8C2DD1B0 / 0x8C2DD1B1 bytes: single-step state of the runner (f_8c07320a); 0x20/1 in every dump = stepping off */
    uint32_t gFrame;     /* 0x8C2DD1D4 pointer to the running behaviour frame (+4 receives the current node when gTrack != 0) */
    uint32_t gTrack;     /* 0x8C0C7C88 byte */
    uint32_t gCmpClr;    /* 0x8C0C5194 word cleared by a comport change */
    /* Optional write log (caller-owned buffer) so a failed or compared run can be rolled back. */
    CpaAiWr *wlog; uint32_t wlogCap, wlogN; int wlogOn, wlogOverflow;
    uint32_t unsupType, unsupId;             /* last unsupported node (type, param) */
} CpaAiEnv;

void cpa_ai_env_init(CpaAiEnv *e, uint8_t *mem, size_t n, uint32_t base);
void cpa_ai_env_dc(CpaAiEnv *e);                       /* set the Dreamcast global addresses above and mainActorPtrVa */
void cpa_ai_log_begin(CpaAiEnv *e, CpaAiWr *buf, uint32_t cap);   /* start logging writes into buf */
void cpa_ai_log_rollback(CpaAiEnv *e);                 /* undo every logged write (newest first) and clear the log */
void cpa_ai_log_clear(CpaAiEnv *e);

int  cpa_ai_rd32(const CpaAiEnv *e, uint32_t va, uint32_t *o);
int  cpa_ai_wr32(CpaAiEnv *e, uint32_t va, uint32_t v);

/* DsgVar access for the actor whose SuperObject is `so`. cpa_ai_dsg_find gives the variable's address, type index and the model's variable count. */
int  cpa_ai_dsg_find(const CpaAiEnv *e, uint32_t so, uint32_t idx, uint32_t *varVa, uint32_t *typeIdx);
int  cpa_ai_dsg_read(const CpaAiEnv *e, uint32_t so, uint32_t idx, CpaAiVal *out);
int  cpa_ai_dsg_write(CpaAiEnv *e, uint32_t so, uint32_t idx, const CpaAiVal *v);   /* scalar types 0..7 only */
/* Data block [start, start+size) of the live DsgVar storage of `so` (for snapshot/compare). */
int  cpa_ai_dsg_block(const CpaAiEnv *e, uint32_t so, uint32_t *start, uint32_t *size);

/* Node helpers (12-byte nodes: +0 param, +8 u16 skip cache, +0xA depth, +0xB type). */
uint32_t cpa_ai_skip(const CpaAiEnv *e, uint32_t node);        /* node after the subtree of `node`; 0 on error */

/* Run the statement list starting at `node` exactly like the guest statement runner f_8c073266: execute node after node (each handler returns the next node)
 * until the flags demand a stop. out->w[0] = final flags (0x10 = reached the terminator, 8 = comport changed, ...), out->tag = 0x14, *next = node the guest returns. */
int  cpa_ai_run(CpaAiEnv *e, uint32_t node, CpaAiVal *out, uint32_t *next);

/* Evaluate the subtree at `node`. Returns CPA_AI_E_*. *next = node after the subtree (what the guest handler returns in R0). */
int  cpa_ai_eval(CpaAiEnv *e, uint32_t node, CpaAiVal *out, uint32_t *next);

/* Per-class support query (1 = decoded and implemented here). */
int  cpa_ai_supported(int nodeType, uint32_t param);

#endif
