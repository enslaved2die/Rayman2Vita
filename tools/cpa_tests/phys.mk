# Rayman physics study (N4). Standalone fragment, run from tools/cpa_tests:
#   make -f phys.mk physlog-run LEVEL=Learn_10 N=1500 SCRIPT=5 ASSETS=<assets/dc>   oracle: run the recompiled game, log Rayman's Dynam/SO state per guest frame -> build/physlog_<LEVEL>_s<SCRIPT>/physlog.bin
#   make -f phys.mk phys-test PHYSLOG=build/physlog_Learn_10_s5/physlog.bin DCDATA=<assets/dc/DCDATA>   native cpa_phys replica vs the log
# Needs tools/sh4recomp/build_hle objects (does not rebuild them); tools/sh4recomp is NOT modified.
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
DCDATA  ?= $(ASSETS)/DCDATA
SH4      = ../sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
LEVEL   ?= Learn_10
N       ?= 1500
SCRIPT  ?= 5
OUT     ?= build/physlog_$(LEVEL)_s$(SCRIPT)
PHYSLOG ?= $(OUT)/physlog.bin
CPA      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_coll.c ../../src/cpa/cpa_phys.c

# private copy of hle/boot.c (report limit lifted, runtime watch arming); same recipe as follow.mk
build/phys_boot.c: $(SH4)/hle/boot.c
	@mkdir -p build
	sed -e 's/watch_reports++ < 40/watch_reports++ < 100000/' $< > $@
	printf '%s\n' 'void cam_watch_arm(uint32_t a) { if (watch_n < 4) { watch_a[watch_n] = a; watch_v[watch_n] = LD32(a); watch_n++; update_trace_flag(); } }' >> $@
build/phys_boot.o: build/phys_boot.c
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -w -c build/phys_boot.c -o $@

build/physlog_run: physlog_run.c build/phys_boot.o
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c physlog_run.c -o build/physlog_run.o
	$(CC) -o $@ build/physlog_run.o build/phys_boot.o $(filter-out $(SH4)/build_hle/boot.o,$(HLEOBJ)) -lm

physlog-run: build/physlog_run
	mkdir -p build/physlog_sv_$(LEVEL)
	R2_SAVE_DIR=$$(pwd)/build/physlog_sv_$(LEVEL) ./build/physlog_run --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --out $(OUT) --level $(LEVEL) --n $(N) --script $(SCRIPT) $(CARGS)

.PHONY: physlog-run

UPLEVEL ?= LEARN_10
MODE    ?=
build/test_phys: test_phys.c $(CPA) ../../src/cpa/cpa_phys.h ../../src/cpa/cpa_coll.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_phys.c $(CPA) -lm

phys-test: build/test_phys
	./build/test_phys $(PHYSLOG) $(DCDATA) $(UPLEVEL) $(MODE)
.PHONY: phys-test
