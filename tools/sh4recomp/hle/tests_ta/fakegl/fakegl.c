/* state of the counting / digest fake of vitaGL (fakegl/vitaGL.h) */
#include "vitaGL.h"
#include <stdio.h>
#include <stdlib.h>
FakeGl fg; FakeGlRec fgr;
void (*fgr_draw_cb)(int, int); void (*fgr_clear_cb)(unsigned);
void fgr_end_frame(void)
{
    if (!fgr.out_open) { fgr.out_open = 1; fgr.trace = getenv("R2_GLTRACE") != NULL; const char *p = getenv("R2_GLDIGEST"); fgr.out = p && *p ? fopen(p, "w") : NULL; }
    if (fgr.out) fprintf((FILE *)fgr.out, "%lu %016llx draws=%lu\n", fgr.frame_no, (unsigned long long)fgr.h, fgr.draws_in_frame);
    fgr.frame_no++; fgr.h = 0; fgr.draws_in_frame = 0;
}
