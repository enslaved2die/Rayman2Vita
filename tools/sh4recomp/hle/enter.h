/* force-included into every gen TU of the HLE build: function-entry ring buffer + optional trace.
 * Vita (__vita__) default: NO unconditional ring write at function entry (was 19 instructions x every guest call); the ring (diagnostic only: crash dump,
 * [UNHANDLED]/STUCK "last fn", R2_WATCH) is filled only while hle_trace_on is set. Define R2_RING_TRACE to keep the always-on ring on the Vita as well.
 * Host builds always keep the always-on ring (bit-identical behaviour). */
#ifndef HLE_ENTER_H
#define HLE_ENTER_H
#include <stdint.h>
extern uint32_t hle_ring[256][2]; extern uint32_t hle_ring_pos; extern int hle_trace_on;
void hle_trace_enter(void *c, uint32_t addr);
#if defined(__vita__) && !defined(R2_RING_TRACE)
#define HLE_ENTER(a) do { if (__builtin_expect(hle_trace_on, 0)) { hle_ring[hle_ring_pos & 255][0] = (a); hle_ring[hle_ring_pos & 255][1] = c->pr; hle_ring_pos++; hle_trace_enter(c, (a)); } } while (0)
#else
#define HLE_ENTER(a) do { hle_ring[hle_ring_pos & 255][0] = (a); hle_ring[hle_ring_pos & 255][1] = c->pr; hle_ring_pos++; if (__builtin_expect(hle_trace_on, 0)) hle_trace_enter(c, (a)); } while (0)
#endif
#endif
