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

clean:
	rm -rf build

.PHONY: test clean
