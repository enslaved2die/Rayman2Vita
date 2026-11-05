# make test        : synthetic tests only (TA parser, cull/clip/projection math, texture decoders against an independent encoder)
# make test-real   : also runs the game's recompiled strip-head compiler 0x8C0E0860 (needs ../../libr2recomp.a + assets/dc/1ST_READ.BIN)
# make test-frame  : needs a dump from `build_hle/run_game` (frame.bin vram.bin pvrregs.bin in FRAMEDIR, default ../../build_hle):
#                    (a) C and Python texture decoders must agree on every texture level of the frame,
#                    (b) the software model of the vitaGL path (test_glpath) must reproduce tools/ta_render.py's picture.
CFLAGS ?= -O1 -std=gnu11 -Wall -Wextra -I../.. -I../../gen -frounding-math
FRAMEDIR ?= ../../build_hle
.PHONY: check test
check: test
test: test_ta.c ../ta.c ../ta.h
	cc $(CFLAGS) test_ta.c ../ta.c -lm -o test_ta && ./test_ta
test-real: test_ta.c ../ta.c ../ta.h
	cc $(CFLAGS) -DTA_REAL test_ta.c ../ta.c ../../libr2recomp.a -lm -o test_ta_real && ./test_ta_real
test-frame: test_tex.c test_glpath.c ../ta.c ../ta.h
	cc $(CFLAGS) test_tex.c ../ta.c -lm -o test_tex
	cc $(CFLAGS) test_glpath.c ../ta.c -lm -o test_glpath
	./test_tex $(FRAMEDIR)/frame.bin $(FRAMEDIR)/vram.bin $(FRAMEDIR)/pvrregs.bin > $(FRAMEDIR)/tex_c.txt
	python3 ../../tools/ta_render.py $(FRAMEDIR)/frame.bin $(FRAMEDIR)/vram.bin /dev/null --hashes > $(FRAMEDIR)/tex_py.txt
	diff $(FRAMEDIR)/tex_c.txt $(FRAMEDIR)/tex_py.txt && echo "texture decoders agree ($$(wc -l < $(FRAMEDIR)/tex_c.txt) levels)"
	./test_glpath $(FRAMEDIR)/frame.bin $(FRAMEDIR)/vram.bin $(FRAMEDIR)/pvrregs.bin $(FRAMEDIR)/glpath.ppm
	python3 ../../tools/ta_render.py $(FRAMEDIR)/frame.bin $(FRAMEDIR)/vram.bin $(FRAMEDIR)/ref_nearest.png --no-bilinear --no-mip
	python3 ../../tools/cmp_ppm.py $(FRAMEDIR)/glpath.ppm $(FRAMEDIR)/ref_nearest.png
# make test-stamp : texture-cache validity (VRAM page epochs + palette epoch) against the real boot.c/texmap.c, every VRAM write path; needs `make hle` (../../build_hle objects)
HLEOBJ = $(filter-out %_vita.o %/run_game.o,$(wildcard ../../build_hle/*.o))
test-stamp: test_stamp.c
	cc $(CFLAGS) -I../ -I../../gen_fix test_stamp.c $(HLEOBJ) -lm -o test_stamp && ./test_stamp
# make test-glcount : run the REAL vita_gl_render.c on the host against a counting vitaGL fake (fakegl/) on a frame dump; prints draw calls / GL state calls / texture traffic per frame
GLC_FLAGS = -O1 -std=gnu11 -Wall -Wno-unused-function -I../.. -I../../gen_fix -I.. -Ifakegl -DCPA_PLATFORM_VITA -frounding-math
test-glcount: test_glcount.c ../vita_gl_render.c ../ta.c ../texmap.c
	cc $(GLC_FLAGS) -c ../texmap.c -Dhle_ta_background=tm_bg -Dhle_ta_pvr_snapshot=tm_snap -Dhle_ta_fog_table=tm_fog -o texmap_glc.o
	cc $(GLC_FLAGS) test_glcount.c fakegl/fakegl.c ../ta.c ../perf.c texmap_glc.o -lm -lpthread -o test_glcount
	./test_glcount $(FRAMEDIR)/frame.bin $(FRAMEDIR)/vram.bin $(FRAMEDIR)/pvrregs.bin $(FRAMEDIR)/pvrfog.bin 6
test-fogdefer: test_glcount.c ../vita_gl_render.c ../ta.c ../texmap.c
	cc $(GLC_FLAGS) -c ../texmap.c -Dhle_ta_background=tm_bg -Dhle_ta_pvr_snapshot=tm_snap -Dhle_ta_fog_table=tm_fog -o texmap_glc.o
	DUMPS="$(DUMPS)" REF="$(REF)" ./test_fogdefer.sh
# make test-fogdefer DUMPS="dir1 dir2" [REF=<test_glcount built from the pre-change source>]: deferred fog passes vs interleaved (software rasteriser, byte-identical) + draw digest vs reference
clean:
	rm -f bench_ta bench_ta_vmath ta_ref.o test_ta test_ta_real test_tex test_glpath test_stamp test_glcount texmap_glc.o
# make bench DUMPS="dir1 dir2 ...": micro-benchmark + bit-exactness of parse / build / depth cut / clip conversion vs the previous implementation (ta_ref.c); dump dirs come from R2_FRAMES=n1,n2 R2_DUMP_DIR=dir run_game (frame.bin + tastream.bin)
REFSYMS = ta_init ta_destroy ta_set_sink ta_write32 ta_write ta_fifo_write_word ta_sq_flush ta_sq_translate ta_ext_write32 ta_take_frame ta_frame_free ta_decode_header ta_header_chunks ta_dump_frame ta_dump_state ta_build_gl ta_build_gl_ex ta_build_gl_reuse ta_gl_free ta_gl_depth_cut ta_gl_depth_cut_ref ta_gl_make_clip ta_gl_projection ta_tex_size ta_tex_levels ta_tex_decode ta_fog_alpha ta_fog_alpha_ref ta_tex_byte_len ta_hash_bytes ta_draw_order
BENCH_FLAGS = -O2 -std=gnu11 -Wall -I../.. -ffp-contract=off -frounding-math -fno-strict-aliasing
bench: bench_ta.c ../ta.c ta_ref.c
	cc $(BENCH_FLAGS) -c ta_ref.c $(foreach s,$(REFSYMS),-D$(s)=ref_$(s)) -o ta_ref.o
	cc $(BENCH_FLAGS) bench_ta.c ../ta.c ta_ref.o -lm -o bench_ta
	cc $(BENCH_FLAGS) -DTA_VITA_MATH bench_ta.c ../ta.c ta_ref.o -lm -o bench_ta_vmath
	@echo "### host libm (default host build)"; ./bench_ta $(DUMPS)
	@echo "### -DTA_VITA_MATH (the integer isfinite/floor/fmin used on the Vita)"; ./bench_ta_vmath $(DUMPS)

# make rungl [SAN=thread] [EXTRA=-DR2_RT_STRESS]: build/run_game variant (build_hle_gl/run_game_gl) that runs the REAL vita_gl_render.c (frame prepare, texture ops, batch build, GL calls, render thread) against the digest fake of
# vitaGL (fakegl/): R2_GLDIGEST=file gets one line per swap (hash of every draw/clear incl. vertex data + texture content).  R2_RENDER_THREAD=0/1 selects inline / threaded.  Needs `make hle` first (reuses build_hle/*.o).
GLD = ../../build_hle_gl
HCF = -Igen_fix -O1 -std=gnu11 -Wall -Wno-unused-label -Wno-unused-variable -Wno-unused-function -frounding-math -ffp-contract=off -I. -Igen -g -Ihle -Ihle/tests_ta/fakegl -DR2_HOST_GL -DCPA_PLATFORM_VITA $(if $(SAN),-fsanitize=$(SAN)) $(EXTRA)
rungl: ../ta_hle.c ../vita_gl_render.c ../ta.c ../texmap.c fakegl/fakegl.c fakegl/vitaGL.h
	mkdir -p $(GLD)
	cd ../.. && for f in ta_hle vita_gl_render ta texmap perf; do cc $(HCF) -c hle/$$f.c -o build_hle_gl/$$f.o || exit 1; done
	cd ../.. && cc $(HCF) -c hle/tests_ta/fakegl/fakegl.c -o build_hle_gl/fakegl.o
	cd ../.. && cc $(if $(SAN),-fsanitize=$(SAN)) -o build_hle_gl/run_game_gl build_hle_gl/*.o $$(ls build_hle/*.o | grep -v -E '_vita\.o|/vita_gl_render\.o|/ta_hle\.o|/ta\.o|/texmap\.o|/perf\.o') -lm -lpthread
