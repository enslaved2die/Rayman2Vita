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
clean:
	rm -f test_ta test_ta_real test_tex test_glpath
