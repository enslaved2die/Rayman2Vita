# make test        : synthetic tests only (TA parser, cull/clip/projection math, texture decoders against an independent encoder)
# make test-real   : also runs the game's recompiled strip-head compiler 0x8C0E0860 (needs ../../libr2recomp.a + assets/dc/1ST_READ.BIN)
# make test-frame  : needs a dump from `build_hle/run_game` (frame.bin vram.bin pvrregs.bin in FRAMEDIR, default ../../build_hle):
#                    (a) C and Python texture decoders must agree on every texture level of the frame,
#                    (b) the software model of the vitaGL path (test_glpath) must reproduce tools/ta_render.py's picture.
CFLAGS ?= -O1 -std=gnu11 -Wall -Wextra -I../.. -I../../gen -frounding-math
FRAMEDIR ?= ../../build_hle
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
	cc $(GLC_FLAGS) test_glcount.c ../ta.c texmap_glc.o -lm -o test_glcount
	./test_glcount $(FRAMEDIR)/frame.bin $(FRAMEDIR)/vram.bin $(FRAMEDIR)/pvrregs.bin $(FRAMEDIR)/pvrfog.bin 6
clean:
	rm -f test_ta test_ta_real test_tex test_glpath test_stamp test_glcount texmap_glc.o
