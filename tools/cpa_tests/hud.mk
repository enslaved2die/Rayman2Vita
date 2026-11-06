# HUD tooling (docs: re_analysis/dc/notes_hud.md). Standalone fragment, run from tools/cpa_tests:
#   make -f hud.mk hud-trace LEVEL=Bast_10 REL=500 ASSETS=/path/assets/dc   -> build/hud_<LEVEL>/{trace.txt,f*/frame.bin,ram_*.bin}
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SH4      = ../sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o $(SH4)/build_hle/boot.o,$(wildcard $(SH4)/build_hle/*.o))
LEVEL   ?= Bast_10
REL     ?= 500
# build/hud_boot.o = hle/boot.c with hle_trace_enter extended to print fr0..11 / r7 for the functions in env HUD_TRACE_FNS (hex, comma separated). Generated, nothing under tools/sh4recomp changes.
build/hud_boot.o: $(SH4)/hle/boot.c
	@mkdir -p build
	python3 -I hud_patch_boot.py $< build/hud_boot.c
	cd $(SH4) && $(CC) -Igen_fix -O1 -std=gnu11 -Wno-unused-label -Wno-unused-variable -frounding-math -I. -Igen -g -Ihle -c ../cpa_tests/build/hud_boot.c -o ../cpa_tests/build/hud_boot.o
build/hud_trace: hud_trace.c build/hud_boot.o
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c hud_trace.c -o build/hud_trace.o
	$(CC) -o $@ build/hud_trace.o build/hud_boot.o $(HLEOBJ) -lm
hud-trace: build/hud_trace
	mkdir -p build/sv_$(LEVEL) && R2_SAVE_DIR=build/sv_$(LEVEL) ./build/hud_trace --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --out build/hud_$(LEVEL) --level $(LEVEL) --rel $(REL) --walk 1 --n 1
.PHONY: hud-trace

# hud-compare: native HUD (cpa_hud) vs the oracle TA streams already captured in build/ta2_<LEVEL>/ (no oracle run). RAM=prev|same selects ram_<N-1> / ram_<N>.
LEVELS ?= Learn_10 Jail_10 Bast_10 Helic_30 Rodeo_60 Nave_20 Whale_10
RAM    ?= same
build/hud_compare: hud_compare.c ../../src/cpa/cpa_hud.c ../../src/cpa/cpa_hud.h ../../src/cpa/cpa_image.c
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ hud_compare.c ../../src/cpa/cpa_hud.c ../../src/cpa/cpa_image.c -lm
hud-compare: build/hud_compare
	@for L in $(LEVELS); do ./build/hud_compare build/ta2_$$L --ram $(RAM) $(HUDARGS) | sed 's#build/ta2_##'; done
build/test_hud: test_hud.c ../../src/cpa/cpa_hud.c ../../src/cpa/cpa_hud.h ../../src/cpa/cpa_image.c
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_hud.c ../../src/cpa/cpa_hud.c ../../src/cpa/cpa_image.c -lm
test-hud: build/test_hud
	./build/test_hud
# hud-shadow: the HUD through cpa_render (shadow_main HUDCHK line: geometry / list / wrap against the oracle). Needs shadow.mk's build/shadow/shadow_run and the .TEX assets.
hud-shadow:
	$(MAKE) -f shadow.mk build/shadow/shadow_run
	@for L in $(LEVELS); do ./build/shadow/shadow_run build/ta2_$$L $(ASSETS)/DCDATA --level $$L --all 2>/dev/null | grep -E '^HUDCHK' | sed 's#HUD through cpa_render (RAM pools -> CpaHudFrame -> CpaRenderFrame, texture flags from the store)#HUD pass#'; done
.PHONY: hud-compare test-hud hud-shadow
