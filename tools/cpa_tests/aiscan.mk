# AI script scanner (milestone N5 opcode evidence ledger). Standalone fragment, run from tools/cpa_tests:
#   make -f aiscan.mk ai-scan  ASSETS=/path/to/assets/dc                  : scan every level DAT + compare with build/ram_<LEVEL>.bin, writes build/ai_scan.json
#   make -f aiscan.mk ai-ledger ASSETS=/path/to/assets/dc                 : scan, then tools/ai_ledger.py -> re_analysis/dc/ai_ledger.{json,md}
#   make -f aiscan.mk ai-scan ONLY=LEARN_10                               : one level
CC      ?= cc
CFLAGS  ?= -std=c99 -O2 -Wall -Wextra -Wpedantic
ASSETS  ?= $(abspath ../../assets/dc)
DCDATA  ?= $(ASSETS)/DCDATA
RAMDIR  ?= build
SRC      = ../../src/cpa/cpa_image.c ../../src/cpa/cpa_ai_scan.c
ONLY    ?=

build/test_ai_scan: test_ai_scan.c $(SRC) ../../src/cpa/cpa_image.h ../../src/cpa/cpa_ai_scan.h
	@mkdir -p build
	$(CC) $(CFLAGS) -o $@ test_ai_scan.c $(SRC) -lm

ai-scan: build/test_ai_scan
	./build/test_ai_scan $(DCDATA) --ram $(RAMDIR) --json build/ai_scan.json $(if $(ONLY),--only $(ONLY),)

ai-ledger: ai-scan
	python3 ../ai_ledger.py --scan build/ai_scan.json --assets $(ASSETS) --out ../../re_analysis/dc

.PHONY: ai-scan ai-ledger
