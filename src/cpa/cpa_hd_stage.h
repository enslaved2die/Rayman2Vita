/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine)
 * File: cpa_hd_stage.h
 *
 * Asynchronous HD texture staging (HD_Texture_Plan.md, Phases 3, 4 and 6).
 *
 * The game thread never reads or decodes an override file. It asks the stager
 * for a texture key (bank, struct VA, chunk). The first request queues the key
 * and returns PENDING; the caller draws nothing for that texture and asks again
 * on a later frame. A worker thread resolves the key through cpa_hd_tex (table
 * or archive, then the file), decodes it and parks the result until the caller
 * takes it with READY. A key that has no override returns FAILED, and the caller
 * uses its normal (PVR) path.
 *
 * Keys follow the recomp renderer's convention: struct VA with chunk -1.
 *
 * Budgets: prefetched textures are staged only while their total stays within
 * CPA_HD_STAGE_BUDGET_BYTES; the rest is loaded on demand.
 *
 * Threading: request() and prefetch_bank() are game-thread calls. The loader
 * (cpa_hd_tex) is touched by the worker only once the stager is running.
 * Without init the stager is synchronous: request() loads on the calling thread.
 * ============================================================================ */

#ifndef CPA_HD_STAGE_H
#define CPA_HD_STAGE_H

#include <stdbool.h>
#include <stdint.h>
#include "cpa_hd_tex.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Byte budget for prefetched, not yet consumed payloads (HD_Texture_Plan.md, 6.1). */
#ifndef CPA_HD_STAGE_BUDGET_BYTES
#if defined(CPA_PLATFORM_VITA) || defined(__vita__)
#define CPA_HD_STAGE_BUDGET_BYTES (64u * 1024u * 1024u)   /* holds the hub set (about 49 MB as RGBA); tune here */
#else
#define CPA_HD_STAGE_BUDGET_BYTES (128u * 1024u * 1024u)
#endif
#endif

typedef enum {
    CPA_HD_STAGE_PENDING = 0, /* queued or in progress; draw nothing, ask again later */
    CPA_HD_STAGE_READY   = 1, /* *out is filled; the caller owns out->data */
    CPA_HD_STAGE_FAILED  = 2  /* no override for this key; use the normal path */
} CpaHdStageState;

/** @brief Starts the worker thread. Idempotent. Call on the game thread before the first request. */
void cpa_hd_stage_init(void);

/** @brief Stops the worker, joins it, and frees every parked payload. */
void cpa_hd_stage_shutdown(void);

/**
 * @brief Non-blocking texture lookup (see the file comment for the states).
 * @param bank  Bank name, e.g. "FIX" or the level name.
 * @param va    Struct VA (must be non-zero to resolve; the recomp path uses chunk -1).
 */
CpaHdStageState cpa_hd_stage_request(const char *bank, uint32_t va, int chunk, CpaHdTexture *out);

/**
 * @brief Like request(), but a READY payload stays parked (only request() consumes it).
 *        Use it to check whether an override has become ready while the original texture is drawn.
 */
CpaHdStageState cpa_hd_stage_poll(const char *bank, uint32_t va, int chunk);

/** @brief Queues every override of a bank at low priority (level-load prefetch, Phase 4). */
void cpa_hd_stage_prefetch_bank(const char *bank);

#ifdef __cplusplus
}
#endif

#endif /* CPA_HD_STAGE_H */
