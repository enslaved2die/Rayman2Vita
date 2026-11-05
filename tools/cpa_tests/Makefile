# Host build of the portable CPA core (plain C99, no platform deps).
# make            builds build/test_scene
# make test       runs it; pass DCDATA=/path/to/assets/dc/DCDATA (or set CPA_DC_DATA)
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c
DCDATA  ?= $(CPA_DC_DATA)

build/test_scene: test_scene.c $(SRC) ../../src/cpa/cpa_image.h ../../src/cpa/cpa_scene.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_scene.c $(SRC) -lm

test: build/test_scene
	./build/test_scene $(DCDATA)

# ---- oracle (kind A) ----
# make oracle-dump LEVEL=JAIL_10 ASSETS=... builds the host recomp (tools/sh4recomp `make hle`), the oracle_run driver, and dumps guest RAM with LEVEL resident (default LEARN_10)
# make oracle-test   runs test_oracle against that dump
# ASSETS = dir holding 1ST_READ.BIN and DCDATA/ (not in git; the main checkout has it)
ASSETS  ?= $(abspath ../../assets/dc)
ifeq ($(DCDATA),)
DCDATA   = $(ASSETS)/DCDATA
endif
SH4     = ../sh4recomp
HLEOBJ  = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
LEVEL   ?= LEARN_10
LEVELUC  = $(shell echo $(LEVEL) | tr a-z A-Z)
# one dump per level: a dump for another level is never reused (test_oracle also verifies guest szLevelName == LEVEL)
# ORACLE_ARGS: extra oracle_run flags, e.g. --until-level WHALE_10+0 (stop as soon as the level is resident, before the game loop mutates actors)
ORACLE_ARGS ?=
RAMDUMP ?= build/ram_$(LEVELUC).bin

$(SH4)/build_hle/run_game:
	$(MAKE) -C $(SH4) hle

build/oracle_run: oracle_run.c $(SH4)/build_hle/run_game
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c oracle_run.c -o build/oracle_run.o
	$(CC) -o $@ build/oracle_run.o $(HLEOBJ) -lm

# --redirect $(LEVEL): the Menu demo timer requests a random level at ~guest frame 460; oracle_run rewrites that request to $(LEVEL).
# KNOWN: after the DAT/TMP/TEX load the guest then stalls in a music-stream read the HLE does not serve (exit rc=2, host timeout);
# the dump is taken from that stalled state (level fully loaded, game loop not yet run). Hence the tolerated rc.
$(RAMDUMP): build/oracle_run
	@mkdir -p build
	R2_SAVE_DIR=$$(mktemp -d) ./build/oracle_run --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --frames 3000 --timeout 40 \
	    --redirect $(LEVELUC) $(ORACLE_ARGS) --dump-ram $@ || test -s $@

build/test_oracle: test_oracle.c $(SRC) ../../src/cpa/cpa_image.h ../../src/cpa/cpa_scene.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_oracle.c $(SRC) -lm

oracle-dump: $(RAMDUMP)
oracle-test: build/test_oracle $(RAMDUMP)
	./build/test_oracle $(RAMDUMP) $(DCDATA) $(LEVELUC)

# make oracle-levels LEVELS="JAIL_10 NAVE_10" ASSETS=...: one dump + one report per level (serial; each dump takes ~40 s host time).
# Set ORACLE_TOLERATE_RUNTIME=1 to downgrade runtime-mutated checks to INFO-RT (see test_oracle.c check_rt).
LEVELS ?= LEARN_10
oracle-levels:
	@for l in $(LEVELS); do $(MAKE) --no-print-directory oracle-test LEVEL=$$l 2>&1 | grep -E '^(FAIL|INFO-RT|RESULT)|oracle_run result' | sed "s/^/$$l: /"; done

clean:
	rm -rf build

.PHONY: test clean oracle-levels oracle-dump oracle-test
