/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port (CPA Engine)
 * File: cpa_hd_stage.c — asynchronous HD texture staging (see cpa_hd_stage.h)
 * ============================================================================ */

#include "cpa_hd_stage.h"
#include "cpa_hd_tex.h"
#include "cpa_tex.h"
#include <ctype.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define SLOT_COUNT 16384u   /* power of two; the game's whole override set is ~9.7k keys */
#define SLOT_MASK (SLOT_COUNT - 1u)
#define Q_HI 1024u          /* requests from the game thread */
#define Q_PREF 64u          /* bank prefetch jobs */
#define Q_LO 2048u          /* prefetched keys, served when nothing else is queued */

enum { SL_EMPTY = 0, SL_TOMB, SL_PENDING, SL_READY, SL_FAILED };

typedef struct {
    char bank[32];
    uint32_t va;
    int32_t chunk;
} Key;

typedef struct {
    uint8_t state;      /* SL_* */
    uint8_t lo;         /* queued at low priority; a request promotes it */
    Key key;
    CpaHdTexture tex;   /* valid when READY */
} Slot;

typedef struct {
    Key *buf;
    uint32_t cap, head, n;
} Ring;

static pthread_mutex_t s_mu = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t s_cv = PTHREAD_COND_INITIALIZER;
static Slot *s_slots;
static uint32_t s_used;            /* live + tombstone slots */
static Ring s_hi, s_pref, s_lo;
static uint64_t s_ready_bytes;     /* payload bytes parked in READY slots */
static uint64_t s_budget = CPA_HD_STAGE_BUDGET_BYTES;
static bool s_started;
static bool s_stop;
static pthread_t s_thread;

/* ----------------------------------------------------------------- rings */

static bool ring_init(Ring *r, uint32_t cap) {
    r->buf = (Key *)malloc(cap * sizeof(Key));
    r->cap = cap;
    r->head = r->n = 0;
    return r->buf != NULL;
}

static bool ring_push(Ring *r, const Key *k) {
    if (r->n == r->cap) return false;
    r->buf[(r->head + r->n) % r->cap] = *k;
    r->n++;
    return true;
}

static bool ring_pop(Ring *r, Key *out) {
    if (!r->n) return false;
    *out = r->buf[r->head];
    r->head = (r->head + 1) % r->cap;
    r->n--;
    return true;
}

/* ----------------------------------------------------------------- slots (call with s_mu held) */

static uint32_t key_hash(const char *bank, uint32_t va, int32_t chunk) {
    uint32_t h = 2166136261u;
    for (const char *p = bank; *p; p++) { h ^= (uint8_t)tolower((unsigned char)*p); h *= 16777619u; } /* bank names match case-insensitively */
    for (int i = 0; i < 4; i++) { h ^= (va >> (8 * i)) & 0xFFu; h *= 16777619u; }
    for (int i = 0; i < 4; i++) { h ^= ((uint32_t)chunk >> (8 * i)) & 0xFFu; h *= 16777619u; }
    return h;
}

static bool key_eq(const Key *k, const char *bank, uint32_t va, int32_t chunk) {
    return k->va == va && k->chunk == chunk && strcasecmp(k->bank, bank) == 0;
}

static Slot *find_locked(const char *bank, uint32_t va, int32_t chunk) {
    uint32_t h = key_hash(bank, va, chunk) & SLOT_MASK;
    for (uint32_t i = 0; i < SLOT_COUNT; i++) {
        Slot *s = &s_slots[(h + i) & SLOT_MASK];
        if (s->state == SL_EMPTY) return NULL;
        if (s->state != SL_TOMB && key_eq(&s->key, bank, va, chunk)) return s;
    }
    return NULL;
}

/* Rebuilds the table without tombstones. Keeps every live slot. */
static void rehash_locked(void) {
    Slot *fresh = (Slot *)calloc(SLOT_COUNT, sizeof(Slot));
    if (!fresh) return;
    uint32_t used = 0;
    for (uint32_t i = 0; i < SLOT_COUNT; i++) {
        Slot *old = &s_slots[i];
        if (old->state == SL_EMPTY || old->state == SL_TOMB) continue;
        uint32_t h = key_hash(old->key.bank, old->key.va, old->key.chunk) & SLOT_MASK;
        while (fresh[h].state != SL_EMPTY) h = (h + 1) & SLOT_MASK;
        fresh[h] = *old;
        used++;
    }
    free(s_slots);
    s_slots = fresh;
    s_used = used;
}

/* Inserts a PENDING slot for a key that is not present. NULL if the table cannot take it. */
static Slot *insert_locked(const char *bank, uint32_t va, int32_t chunk) {
    if ((s_used + 1u) * 4u > SLOT_COUNT * 3u) rehash_locked();
    if ((s_used + 1u) * 4u > SLOT_COUNT * 3u) return NULL;

    uint32_t h = key_hash(bank, va, chunk) & SLOT_MASK;
    for (uint32_t i = 0; i < SLOT_COUNT; i++) {
        Slot *s = &s_slots[(h + i) & SLOT_MASK];
        if (s->state == SL_EMPTY || s->state == SL_TOMB) {
            if (s->state == SL_EMPTY) s_used++;
            memset(s, 0, sizeof(*s));
            s->state = SL_PENDING;
            snprintf(s->key.bank, sizeof(s->key.bank), "%s", bank);
            s->key.va = va;
            s->key.chunk = chunk;
            return s;
        }
    }
    return NULL;
}

static void remove_locked(Slot *s) {
    if (s->state == SL_READY) {
        s_ready_bytes -= s->tex.data_size;
        free(s->tex.data);
    }
    memset(&s->tex, 0, sizeof(s->tex));
    s->state = SL_TOMB;
    s->lo = 0;
}

/* ----------------------------------------------------------------- loading (worker, or caller when synchronous) */

#ifdef CPA_HD_STAGE_KEEP_DXT
static bool is_fix_bank(const char *bank) {
    return strcasecmp(bank, "FIX") == 0;
}
#endif

/* FIX textures stay RGBA (the recomp path draws fonts from RGBA with a full mip chain), so DXT is expanded here, off the game thread. */
static bool expand_to_rgba(CpaHdTexture *t) {
    size_t n = (size_t)t->width * t->height;
    uint32_t *px = (uint32_t *)malloc(n * 4);
    if (!px) return false;
    if (cpa_dxt_decompress(t->data, t->width, t->height, t->format, px) != 0) {
        free(px);
        return false;
    }
    free(t->data);
    t->data = px;
    t->format = CPA_HD_TEX_FMT_RGBA8888;
    t->data_size = (uint32_t)(n * 4);
    t->mip_count = 1;
    return true;
}

static bool load_now(const char *bank, uint32_t va, int32_t chunk, CpaHdTexture *out) {
    memset(out, 0, sizeof(*out));
    if (!cpa_hd_tex_load_ex(bank, va, chunk, NULL, out)) return false;
    /* Every override reaches the renderer as RGBA8888 (expanded here, off the game thread). Compressed uploads
     * crashed Vita3K (HD_Texture_Plan.md, Phase 2 notes); CPA_HD_STAGE_KEEP_DXT keeps DXT for experiments. */
#ifdef CPA_HD_STAGE_KEEP_DXT
    if (is_fix_bank(bank) && out->format != CPA_HD_TEX_FMT_RGBA8888) {
#else
    if (out->format != CPA_HD_TEX_FMT_RGBA8888) {
#endif
        if (!expand_to_rgba(out)) {
            free(out->data);
            memset(out, 0, sizeof(*out));
            return false;
        }
    }
    /* Transparent texels get the colour of their neighbours, as the native decode does. Without it the mip
     * chain averages in black RGB from alpha-0 texels and distant / shallow-angle samples turn black. */
    if (out->format == CPA_HD_TEX_FMT_RGBA8888 && out->data && out->width && out->height) {
        cpa_tex_bleed((uint32_t *)out->data, out->width, out->height);
    }
    return true;
}

static void run_prefetch(const char *bank) {
    uint32_t rows = cpa_hd_tex_bank_row_count(bank);
    for (uint32_t row = 0; row < rows; row++) {
        uint32_t va = 0;
        int chunk = 0;
        bool has_override = false;
        if (!cpa_hd_tex_bank_row(bank, row, &va, &chunk, &has_override) || !has_override || !va) continue;

        Key k;
        memset(&k, 0, sizeof(k));
        snprintf(k.bank, sizeof(k.bank), "%s", bank);
        k.va = va;
        k.chunk = -1; /* recomp-path key: the struct VA alone identifies the texture */

        pthread_mutex_lock(&s_mu);
        if (!find_locked(bank, va, -1)) {
            Slot *s = NULL;
            if (ring_push(&s_lo, &k) && (s = insert_locked(bank, va, -1)) != NULL) {
                s->lo = 1;
            } else if (!s) {
                /* table full: stop here, the rest is loaded on demand */
                pthread_mutex_unlock(&s_mu);
                break;
            }
        }
        pthread_mutex_unlock(&s_mu);
    }
}

static void run_load(const Key *k, bool lo) {
    pthread_mutex_lock(&s_mu);
    Slot *s = find_locked(k->bank, k->va, k->chunk);
    if (!s || s->state != SL_PENDING) {
        pthread_mutex_unlock(&s_mu);
        return; /* already resolved, consumed, or dropped */
    }
    pthread_mutex_unlock(&s_mu);

    CpaHdTexture tex;
    bool ok = load_now(k->bank, k->va, k->chunk, &tex);

    pthread_mutex_lock(&s_mu);
    s = find_locked(k->bank, k->va, k->chunk);
    if (!s) {
        pthread_mutex_unlock(&s_mu);
        if (ok) free(tex.data);
        return;
    }
    if (!ok) {
        s->state = SL_FAILED;
    } else if (lo && s_ready_bytes + tex.data_size > s_budget) {
        /* prefetch over budget: drop it, the request path loads it when needed */
        free(tex.data);
        remove_locked(s);
    } else {
        s->state = SL_READY;
        s->lo = 0;
        s->tex = tex;
        s_ready_bytes += tex.data_size;
    }
    pthread_mutex_unlock(&s_mu);
}

static void *worker_main(void *arg) {
    (void)arg;
    for (;;) {
        pthread_mutex_lock(&s_mu);
        while (!s_stop && s_hi.n == 0 && s_pref.n == 0 && s_lo.n == 0) pthread_cond_wait(&s_cv, &s_mu);
        if (s_stop) {
            pthread_mutex_unlock(&s_mu);
            break;
        }
        Key k;
        if (ring_pop(&s_hi, &k)) {
            pthread_mutex_unlock(&s_mu);
            run_load(&k, false);
        } else if (ring_pop(&s_pref, &k)) {
            pthread_mutex_unlock(&s_mu);
            run_prefetch(k.bank);
        } else {
            ring_pop(&s_lo, &k);
            pthread_mutex_unlock(&s_mu);
            run_load(&k, true);
        }
    }
    return NULL;
}

/* ----------------------------------------------------------------- public API */

void cpa_hd_stage_init(void) {
    if (s_started) return;
#ifdef CPA_HD_STAGE_SYNC
    return; /* test build: no worker thread; every request loads on the calling thread */
#endif
    cpa_hd_tex_init();
    if (!cpa_hd_tex_is_enabled()) return; /* no override folder: requests stay synchronous and cheap */

    s_slots = (Slot *)calloc(SLOT_COUNT, sizeof(Slot));
    if (!s_slots || !ring_init(&s_hi, Q_HI) || !ring_init(&s_pref, Q_PREF) || !ring_init(&s_lo, Q_LO)) {
        free(s_slots);
        s_slots = NULL;
        free(s_hi.buf); free(s_pref.buf); free(s_lo.buf);
        return;
    }
    s_stop = false;
    if (pthread_create(&s_thread, NULL, worker_main, NULL) != 0) {
        free(s_slots); s_slots = NULL;
        free(s_hi.buf); free(s_pref.buf); free(s_lo.buf);
        return;
    }
    s_started = true;
}

void cpa_hd_stage_shutdown(void) {
    if (!s_started) return;
    pthread_mutex_lock(&s_mu);
    s_stop = true;
    pthread_cond_broadcast(&s_cv);
    pthread_mutex_unlock(&s_mu);
    pthread_join(s_thread, NULL);

    for (uint32_t i = 0; i < SLOT_COUNT; i++) {
        if (s_slots[i].state == SL_READY) free(s_slots[i].tex.data);
    }
    free(s_slots);
    s_slots = NULL;
    s_used = 0;
    s_ready_bytes = 0;
    free(s_hi.buf); free(s_pref.buf); free(s_lo.buf);
    memset(&s_hi, 0, sizeof(s_hi));
    memset(&s_pref, 0, sizeof(s_pref));
    memset(&s_lo, 0, sizeof(s_lo));
    s_started = false;
}

CpaHdStageState cpa_hd_stage_request(const char *bank, uint32_t va, int chunk, CpaHdTexture *out) {
    if (!bank) bank = "";
    if (!out) return CPA_HD_STAGE_FAILED;
    if (!va) return CPA_HD_STAGE_FAILED; /* the recomp path never resolves a texture without a struct VA */

    if (!s_started) {
        return load_now(bank, va, chunk, out) ? CPA_HD_STAGE_READY : CPA_HD_STAGE_FAILED;
    }

    pthread_mutex_lock(&s_mu);
    Slot *s = find_locked(bank, va, chunk);
    if (!s) {
        Key k;
        memset(&k, 0, sizeof(k));
        snprintf(k.bank, sizeof(k.bank), "%s", bank);
        k.va = va;
        k.chunk = chunk;
        if (!ring_push(&s_hi, &k)) {
            pthread_mutex_unlock(&s_mu);
            return CPA_HD_STAGE_PENDING; /* queue full: ask again next frame */
        }
        s = insert_locked(bank, va, chunk);
        if (!s) {
            /* the key was queued but the table is full: leave the queued job to be ignored */
            pthread_mutex_unlock(&s_mu);
            return CPA_HD_STAGE_FAILED;
        }
        pthread_cond_signal(&s_cv);
        pthread_mutex_unlock(&s_mu);
        return CPA_HD_STAGE_PENDING;
    }

    switch (s->state) {
    case SL_READY:
        *out = s->tex;
        s_ready_bytes -= s->tex.data_size;
        memset(&s->tex, 0, sizeof(s->tex));
        s->state = SL_TOMB;
        pthread_mutex_unlock(&s_mu);
        return CPA_HD_STAGE_READY;
    case SL_FAILED:
        pthread_mutex_unlock(&s_mu);
        return CPA_HD_STAGE_FAILED;
    case SL_PENDING:
        if (s->lo) {
            /* the request is needed now: promote the prefetch copy to the request queue */
            Key k = s->key;
            if (ring_push(&s_hi, &k)) {
                s->lo = 0;
                pthread_cond_signal(&s_cv);
            }
        }
        pthread_mutex_unlock(&s_mu);
        return CPA_HD_STAGE_PENDING;
    default:
        pthread_mutex_unlock(&s_mu);
        return CPA_HD_STAGE_FAILED;
    }
}

CpaHdStageState cpa_hd_stage_poll(const char *bank, uint32_t va, int chunk) {
    if (!bank) bank = "";
    if (!va || !s_started) return CPA_HD_STAGE_FAILED;

    pthread_mutex_lock(&s_mu);
    Slot *s = find_locked(bank, va, chunk);
    CpaHdStageState out = CPA_HD_STAGE_PENDING;
    if (!s) {
        Key k;
        memset(&k, 0, sizeof(k));
        snprintf(k.bank, sizeof(k.bank), "%s", bank);
        k.va = va;
        k.chunk = chunk;
        if (ring_push(&s_hi, &k) && insert_locked(bank, va, chunk)) pthread_cond_signal(&s_cv);
    } else if (s->state == SL_READY) {
        out = CPA_HD_STAGE_READY;
    } else if (s->state == SL_FAILED) {
        out = CPA_HD_STAGE_FAILED;
    } else if (s->lo) {
        Key k = s->key;
        if (ring_push(&s_hi, &k)) { s->lo = 0; pthread_cond_signal(&s_cv); }
    }
    pthread_mutex_unlock(&s_mu);
    return out;
}

void cpa_hd_stage_prefetch_bank(const char *bank) {
    if (!bank || !bank[0] || !s_started) return;
    Key k;
    memset(&k, 0, sizeof(k));
    snprintf(k.bank, sizeof(k.bank), "%s", bank);
    pthread_mutex_lock(&s_mu);
    if (ring_push(&s_pref, &k)) pthread_cond_signal(&s_cv);
    pthread_mutex_unlock(&s_mu);
}
