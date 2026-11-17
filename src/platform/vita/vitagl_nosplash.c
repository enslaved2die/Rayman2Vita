/* ============================================================================
 * Rayman 2: The Great Escape — PS Vita Port
 * File: vitagl_nosplash.c
 *
 * Implements NO_SPLASHSCREEN=1 behavior for vitaGL by stubbing out the
 * vitaGL internal splashscreen symbols before libvitaGL.a is searched by the
 * linker.
 *
 * This completely disables the rotating 3D cube splash screen at boot,
 * avoiding startup stalls and crashes under Vita3K / hardware while jumping
 * directly into the initial frame buffer.
 * ============================================================================ */

#include <stdint.h>

/* Splashscreen active flag — 0 indicates splashscreen is never running */
uint8_t is_splashscreen_active = 0;

/* Dummy semaphores for mutex synchronization */
int splash_mutex[2] = {0, 0};

/* Internal vitaGL GXM shader & matrix parameters declared in splashscreen.o */
void* splash_ambient = (void*)0;
void* splash_normal_mat = (void*)0;
void* splash_wvp = (void*)0;
void* splash_wv = (void*)0;
void* splash_normal = (void*)0;
void* splash_position = (void*)0;
void* font_fragment_program_patched = (void*)0;
void* splash_fragment_program_patched = (void*)0;
void* splash_vertex_program_patched = (void*)0;
int splash_fragment_id = 0;
int splash_vertex_id = 0;

/* No-op function stubs replacing vitaGL splash routines */
void clear_splashscreen(void) {}
void invoke_splashscreen(void) {}
void splashscreen_thread(void) {}
void* vglGetCaveBuffer(void) { return (void*)0; }
