# N2 animation oracle test. Standalone fragment (does not touch Makefile / ta.mk):
#   make -f anim.mk anim-test RAM=build/ta2_Learn_10/ram_1400.bin LEVELDAT=/path/to/DCDATA/LEARN_10/LEARN_10.DAT
#   make -f anim.mk anim-levels ASSETS=/path/to/assets/dc     (all ta2_* captures present in build/)
# RAM dumps come from the running game: `make -f ta.mk ta-capture ...` writes build/ta_<LEVEL>/ram_<guest frame>.bin
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_anim.c
RAM     ?= build/ta2_Learn_10/ram_1400.bin
LEVELDAT?= $(ASSETS)/DCDATA/LEARN_10/LEARN_10.DAT
TAARGS  ?=

build/test_anim: test_anim.c $(SRC) ../../src/cpa/cpa_image.h ../../src/cpa/cpa_anim.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_anim.c $(SRC) -lm

anim-test: build/test_anim
	./build/test_anim $(RAM) $(LEVELDAT) $(TAARGS)

# every captured level: build/<DIR>/ram_<n>.bin with DIR=ta2_<Level> ; level DAT chosen by the directory name
ANIMDIRS ?= $(wildcard build/ta2_*/)
anim-levels: build/test_anim
	@for d in $(ANIMDIRS); do l=$$(basename $$d | sed 's/^ta2_//' | tr a-z A-Z); \
	  for r in $$(ls $$d/ram_*.bin | head -n 3); do echo "== $$r"; ./build/test_anim $$r $(ASSETS)/DCDATA/$$l/$$l.DAT $(TAARGS) | grep -E '^(SUMMARY|  )' | grep -v '^  ch' ; done; done

# Static-only evaluation: image = level DAT + FIX.DAT only; the RAM dump supplies just the guest's current (anim, frame) and the reference values.
# Compares static parents (H5/H3) with the guest ChanList entry+0xC, local poses and hierarchical rig vertices; -a prints one ACTORSTAT line per actor.
FIXDAT ?= $(ASSETS)/DCDATA/FIX.DAT
anim-static: build/test_anim
	./build/test_anim $(RAM) $(LEVELDAT) -s $(FIXDAT) -a $(TAARGS)

.PHONY: anim-test anim-levels anim-static
