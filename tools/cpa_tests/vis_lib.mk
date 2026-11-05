# cpa_vis host tests. Standalone fragment: `make -f vis_lib.mk vis-lib-test DCDATA=/path/to/assets/dc/DCDATA`
# Part 1 is a synthetic level built in memory (no assets needed); part 2 (LEARN_10) is SKIPPED without DCDATA.
# The predictor-vs-game evaluation (1433/1433 IPOs) is vis.mk `vis-eval` / `vis-summary`.
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
DCDATA  ?= $(CPA_DC_DATA)
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_scene.c ../../src/cpa/cpa_anim.c ../../src/cpa/cpa_camera.c ../../src/cpa/cpa_drawlist.c ../../src/cpa/cpa_vis.c
HDR      = $(wildcard ../../src/cpa/*.h)

build/test_vis: test_vis.c $(SRC) $(HDR)
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_vis.c $(SRC) -lm

vis-lib-test: build/test_vis
	./build/test_vis $(DCDATA)

.PHONY: vis-lib-test
