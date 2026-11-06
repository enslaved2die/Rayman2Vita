# Follow-camera study (N3). Standalone fragment: `make -f follow.mk camlog-run LEVEL=Learn_10 ASSETS=<assets/dc>`
#   camlog-run : run the oracle through new game -> LEVEL, log camera/player structures per guest frame into build/camlog_<LEVEL>/camlog.bin
#   follow-test: build and run test_follow (native cpa_follow vs the log)
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
SH4      = ../sh4recomp
HLEOBJ   = $(filter-out $(SH4)/build_hle/run_game.o,$(wildcard $(SH4)/build_hle/*.o))
LEVEL   ?= Learn_10
N       ?= 900
SCRIPT  ?= 1
OUT     ?= build/camlog_$(LEVEL)

# private copy of hle/boot.c with the R2_WATCH report limit lifted and a runtime arming function (cam_watch_arm); tools/sh4recomp is NOT modified
build/camlog_boot.c: $(SH4)/hle/boot.c
	@mkdir -p build
	perl -0pe 's/watch_reports\+\+ < 40/watch_reports++ < 100000/; s/(void hle_trace_enter\(void \*cc, uint32_t addr\) \{\n)/int cam_snap_on; uint32_t cam_snap_a0, cam_snap_a1; void (*cam_snap_cb)(void *, uint32_t);\n$$1    if (cam_snap_on && cam_snap_cb && (cam_snap_a0 == 1 || addr == cam_snap_a0 || addr == cam_snap_a1)) cam_snap_cb(cc, addr);\n/; s/hle_trace_on = trace_wanted \|\|/hle_trace_on = cam_snap_on || trace_wanted ||/' $< > $@.tmp
	mv $@.tmp $@
	printf '%s\n' 'void cam_watch_arm(uint32_t a) { if (watch_n < 4) { watch_a[watch_n] = a; watch_v[watch_n] = LD32(a); watch_n++; update_trace_flag(); } }' >> $@
	printf '%s\n' 'void cam_snap_set(int on) { cam_snap_on = on; update_trace_flag(); }' >> $@
build/camlog_boot.o: build/camlog_boot.c
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -I$(SH4)/gen_fix -w -c build/camlog_boot.c -o $@

build/camlog_run: camlog_run.c build/camlog_boot.o
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c camlog_run.c -o build/camlog_run.o
	$(CC) -o $@ build/camlog_run.o build/camlog_boot.o $(filter-out $(SH4)/build_hle/boot.o,$(HLEOBJ)) -lm

camlog-run: build/camlog_run
	mkdir -p build/camlog_sv_$(LEVEL)
	R2_SAVE_DIR=$$(pwd)/build/camlog_sv_$(LEVEL) ./build/camlog_run --image $(ASSETS)/1ST_READ.BIN --dcdata $(ASSETS) --out $(OUT) --level $(LEVEL) --n $(N) --script $(SCRIPT) $(CARGS)

build/test_follow: test_follow.c ../../src/cpa/cpa_follow.c ../../src/cpa/cpa_follow.h ../../src/cpa/cpa_camera.c ../../src/cpa/cpa_camera.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_follow.c ../../src/cpa/cpa_follow.c ../../src/cpa/cpa_camera.c -lm

# follow-test LOG=build/camlog_Learn_10_s4/camlog.bin START=2815 END=4400 [RAM=... REL=...]
LOG   ?= build/camlog_$(LEVEL)/camlog.bin
START ?= 2815
END   ?= 4400
follow-test: build/test_follow
	./build/test_follow $(LOG) $(START) $(END) $(RAM) $(REL)

# camprobe_*: run lifted guest camera code on RAM dumps (oracle side research tools, like vis_frustum)
build/camprobe_%: camprobe_%.c $(SH4)/build_hle/run_game build/camlog_boot.o
	@mkdir -p build
	$(CC) -O1 -std=gnu11 -I$(SH4) -I$(SH4)/hle -I$(SH4)/gen_fix -c camprobe_$*.c -o build/camprobe_$*.o
	$(CC) -o $@ build/camprobe_$*.o build/camlog_boot.o $(filter-out $(SH4)/build_hle/boot.o,$(HLEOBJ)) -lm
