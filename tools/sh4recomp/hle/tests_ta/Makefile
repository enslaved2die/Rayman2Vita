# make test        : synthetic tests only
# make test-real   : also runs the game's recompiled strip-head compiler 0x8C0E0860 (needs ../../libr2recomp.a + assets/dc/1ST_READ.BIN)
CFLAGS ?= -O1 -std=gnu11 -Wall -Wextra -I../.. -I../../gen -frounding-math
test: test_ta.c ../ta.c ../ta.h
	cc $(CFLAGS) test_ta.c ../ta.c -lm -o test_ta && ./test_ta
test-real: test_ta.c ../ta.c ../ta.h
	cc $(CFLAGS) -DTA_REAL test_ta.c ../ta.c ../../libr2recomp.a -lm -o test_ta_real && ./test_ta_real
clean:
	rm -f test_ta test_ta_real
