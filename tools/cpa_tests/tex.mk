# Native PVR texture decode test. Standalone fragment: `make -f tex.mk tex-test ASSETS=/path/to/assets/dc`
#   tex-capture : capture oracle RAM + VRAM + TA scene for each level in TEXLEVELS into build/tex_<LEVEL>/ (uses build/ta_capture, see ta.mk)
#   tex-test    : decode the .TEX chunks natively and compare with the oracle's texture memory decode (needs tex-capture)
CC      ?= cc
CFLAGS  ?= -std=gnu11 -O2 -Wall -Wextra
ASSETS  ?= $(abspath ../../assets/dc)
SH4      = ../sh4recomp
TEXLEVELS ?= Learn_10 Jail_10 Bast_10 Rodeo_60 Whale_10
SRC      = ../../src/cpa/cpa_tex.c ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c ../../src/cpa/cpa_anim.c ../../src/cpa/cpa_vis.c

build/test_tex: test_tex.c $(SRC) ../../src/cpa/cpa_tex.h $(SH4)/hle/ta.c
	@mkdir -p build
	$(CC) $(CFLAGS) -I$(SH4) -I$(SH4)/hle -o $@ test_tex.c $(SRC) $(SH4)/hle/ta.c -lm

tex-capture:
	@for L in $(TEXLEVELS); do mkdir -p build/sv_$$L; R2_SAVE_DIR=build/sv_$$L ./build/ta_capture --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --out build/tex_$$L --level $$L --rel 300 --n 1 --timeout 900 > build/tex_$$L.log 2>&1; echo "$$L capture rc=$$?"; done

tex-test: build/test_tex
	@rc=0; for L in $(TEXLEVELS); do ./build/test_tex --cap build/tex_$$L --dcdata $(ASSETS)/DCDATA --level $$L || rc=1; done; exit $$rc

.PHONY: tex-capture tex-test
