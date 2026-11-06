# Native render path in shadow mode. Standalone fragment, run from tools/cpa_tests:
#   make -f shadow.mk test-render                         : asset-free unit tests (cpa_render + GL backend on the fake vitaGL)
#   make -f shadow.mk shadow-eval ASSETS=/path/to/assets/dc : per-level oracle comparison on the captures in build/ta2_<LEVEL>/ (no oracle run)
# GL_COUNT = host build of tests_ta/test_glcount (real vita_gl_render.c on the fake GL); built by `make -f shadow.mk build/shadow/test_glcount`
# (needs tests_ta/texmap_glc.o is NOT used: the object is rebuilt into build/shadow/).
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SH4      = ../sh4recomp
TA       = $(SH4)/hle/tests_ta
FAKEGL   = $(TA)/fakegl
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c ../../src/cpa/cpa_anim.c ../../src/cpa/cpa_camera.c ../../src/cpa/cpa_drawlist.c ../../src/cpa/cpa_vis.c ../../src/cpa/cpa_tex.c ../../src/cpa/cpa_hud.c ../../src/cpa/cpa_render.c
GLB      = ../../src/platform/vita/cpa_gl_backend.c
HDR      = $(wildcard ../../src/cpa/*.h) ../../src/platform/vita/cpa_gl_backend.h shadow_glext.h
GLFLAGS  = -std=gnu11 -O2 -Wall -Wextra -Wno-unused-function -include shadow_glext.h -I$(FAKEGL)
LEVELS  ?= Learn_10 Jail_10 Bast_10 Helic_30 Rodeo_60 Nave_20 Whale_10
GLC     ?= build/shadow/test_glcount

build/shadow/test_render: test_render.c $(SRC) $(GLB) $(FAKEGL)/fakegl.c $(HDR)
	@mkdir -p build/shadow
	$(CC) $(GLFLAGS) -o $@ test_render.c $(SRC) $(GLB) $(FAKEGL)/fakegl.c -lm

test-render: build/shadow/test_render
	./build/shadow/test_render

build/shadow/shadow_run: shadow_main.c ta_compare.c $(SRC) $(GLB) $(FAKEGL)/fakegl.c $(SH4)/hle/ta.c $(HDR)
	@mkdir -p build/shadow
	$(CC) $(GLFLAGS) -I../sh4recomp -I../sh4recomp/hle -o $@ shadow_main.c $(SRC) $(GLB) $(FAKEGL)/fakegl.c $(SH4)/hle/ta.c -lm

# every level: textures of all draws resolve + fakegl uploads byte-identical to the cpa_tex decode (asset-only, no capture)
build/shadow/tex_render_check: tex_render_check.c $(SRC) $(GLB) $(FAKEGL)/fakegl.c $(HDR)
	@mkdir -p build/shadow
	$(CC) $(GLFLAGS) -o $@ tex_render_check.c $(SRC) $(GLB) $(FAKEGL)/fakegl.c -lm

tex-render-check: build/shadow/tex_render_check
	./build/shadow/tex_render_check $(ASSETS)/DCDATA

# the recompiled path's GL traffic on a dumped frame: the REAL vita_gl_render.c on the counting fake. r2_perf_post_dbg is a weak-referenced symbol the real vita_main.c defines.
build/shadow/shadow_glc_stub.c:
	@mkdir -p build/shadow
	echo '#include <stdint.h>' > $@; echo 'uint32_t r2_perf_post_dbg[4];' >> $@
build/shadow/test_glcount: $(TA)/test_glcount.c $(SH4)/hle/vita_gl_render.c $(SH4)/hle/ta.c $(SH4)/hle/texmap.c $(FAKEGL)/fakegl.c build/shadow/shadow_glc_stub.c
	@mkdir -p build/shadow
	F="-O1 -std=gnu11 -Wall -Wno-unused-function -I$(SH4) -I$(SH4)/gen_fix -I$(SH4)/hle -I$(FAKEGL) -DCPA_PLATFORM_VITA -frounding-math"; \
	$(CC) $$F -c $(SH4)/hle/texmap.c -Dhle_ta_background=tm_bg -Dhle_ta_pvr_snapshot=tm_snap -Dhle_ta_fog_table=tm_fog -o build/shadow/texmap_glc.o && \
	$(CC) $$F -I$(TA) -o $@ $(TA)/test_glcount.c $(FAKEGL)/fakegl.c $(SH4)/hle/ta.c $(SH4)/hle/perf.c build/shadow/texmap_glc.o build/shadow/shadow_glc_stub.c -lm -lpthread

shadow-eval: build/shadow/shadow_run build/shadow/test_glcount
	@for L in $(LEVELS); do ./build/shadow/shadow_run build/ta2_$$L $(ASSETS)/DCDATA --level $$L --all --glc $(GLC) | tee build/shadow/eval_$$L.txt | grep -E '^(SHADOW|LEVEL)'; done

.PHONY: test-render shadow-eval tex-render-check
