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
# make oracle-dump   builds the host recomp (tools/sh4recomp `make hle`), the oracle_run driver, and dumps guest RAM with LEARN_10 resident
# make oracle-test   runs test_oracle against that dump
# ASSETS = dir holding 1ST_READ.BIN and DCDATA/ (not in git; the main checkout has it)
ASSETS  ?= $(abspath ../../assets/dc)
ifeq ($(DCDATA),)
DCDATA   = $(ASSETS)/DCDATA
endif
SH4     = ../sh4recomp
HLEOBJ  = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
RAMDUMP ?= build/ram_learn10.bin

$(SH4)/build_hle/run_game:
	$(MAKE) -C $(SH4) hle

build/oracle_run: oracle_run.c $(SH4)/build_hle/run_game
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c oracle_run.c -o build/oracle_run.o
	$(CC) -o $@ build/oracle_run.o $(HLEOBJ) -lm

# --redirect Learn_10: the Menu demo timer requests a random level at ~guest frame 460; oracle_run rewrites that request to Learn_10.
# KNOWN: after the DAT/TMP/TEX load the guest then stalls in a music-stream read the HLE does not serve (exit rc=2, host timeout);
# the dump is taken from that stalled state (level fully loaded, game loop not yet run). Hence the tolerated rc.
$(RAMDUMP): build/oracle_run
	@mkdir -p build
	R2_SAVE_DIR=$$(mktemp -d) ./build/oracle_run --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --frames 3000 --timeout 40 \
	    --redirect Learn_10 --dump-ram $@ || test -s $@

build/test_oracle: test_oracle.c $(SRC) ../../src/cpa/cpa_image.h ../../src/cpa/cpa_scene.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_oracle.c $(SRC) -lm

oracle-dump: $(RAMDUMP)
oracle-test: build/test_oracle $(RAMDUMP)
	./build/test_oracle $(RAMDUMP) $(DCDATA)

clean:
	rm -rf build

.PHONY: test clean oracle-dump oracle-test
