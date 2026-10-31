/* force-included into every gen TU of the HLE build: function-entry ring buffer + optional trace */
#ifndef HLE_ENTER_H
#define HLE_ENTER_H
#include <stdint.h>
extern uint32_t hle_ring[256][2]; extern uint32_t hle_ring_pos; extern int hle_trace_on;
void hle_trace_enter(void *c, uint32_t addr);
#define HLE_ENTER(a) do { hle_ring[hle_ring_pos & 255][0] = (a); hle_ring[hle_ring_pos & 255][1] = c->pr; hle_ring_pos++; if (__builtin_expect(hle_trace_on, 0)) hle_trace_enter(c, (a)); } while (0)
#endif
