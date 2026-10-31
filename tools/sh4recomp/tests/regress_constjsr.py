#!/usr/bin/env python3
"""Regression test for the constant-jsr/jmp lifter bug (find_const ignored branch targets between the literal load and the jsr/jmp).
Each case is a handcrafted SH-4 snippet:   mov.l litA,r3 ; tst r1,r1 ; bt L ; [mov.l litB,r3 ; ...] L: jsr|jmp @r3
so r3 is A when the branch is taken (r1==0) and B when it falls through (r1!=0). A buggy lifter folds the call to B (the nearest literal load) on both paths.
The same bytes are executed by QEMU (independent reference) and by lifted code on the host; r0 (set by the callee) and all other state must agree
AND must equal the hand-derived expectation (so the test also fails if QEMU and the lifter were wrong the same way).
Run:  python3 regress_constjsr.py            # against the current sh4lift.py (expected: all PASS)
      SH4LIFT_DIR=/path/to/old/lifter python3 regress_constjsr.py   # against a pre-fix lifter (expected: FAIL)"""
import sys, os, random
HERE = os.path.dirname(os.path.abspath(__file__)); sys.path.insert(0, HERE)
import optest as T

NOP, TST, RTS = 0x0009, 0x2118, 0x000B       # tst r1,r1 (T = r1==0)
JSR3, JMP3 = 0x430B, 0x432B
# callees (byte offsets from case start are given by layout): A = [mov #10,r0 ; nop ; rts ; nop] (A+4 = a second entry: rts ; nop => r0 unchanged),
# B = [mov #20,r0 ; rts ; nop]
A_WORDS = [0xE00A, NOP, RTS, NOP]
B_WORDS = [0xE014, RTS, NOP]
R0_IN = 0x55

def make(kind, filler, r1):
    """kind 'jsr'|'jmp'; filler: nops between the second literal load and the merge point (0 => the merge point is the jsr/jmp itself).
    For 'jmp' the snippet is a subroutine S called with 'jsr @r6' (a tail jmp out of a lifted function returns to that function's caller, so S must be a function)."""
    o = 4 if kind == "jmp" else 0                          # wrapper: jsr @r6 ; nop ; bra END ; nop
    # layout (halfword idx): o+0 ldlA  o+1 tst  o+2 bt L  o+3 ldlB  [filler nops]  L: jsr/jmp  +1 delay nop ; (jsr only: bra END ; nop) ; A ; B ; pad ; pool ; END
    L = o + 4 + filler
    after = L + 2
    bra_idx = after if kind == "jsr" else 2
    a_idx = after + (2 if kind == "jsr" else 0)
    b_idx = a_idx + len(A_WORDS)
    pool_idx = b_idx + len(B_WORDS)
    total = pool_idx + 1 + 4                               # +1 alignment pad slot, + 2 literals (4 halfwords)
    c = T.Case([0] * total, "constjsr %s filler=%d r1=%d" % (kind, filler, r1))
    c.regs = [0] * 16; c.regs[0] = R0_IN; c.regs[1] = r1; c.flags = [0, 0, 0, 0]
    c.entry_offs = [2 * a_idx, 2 * a_idx + 4, 2 * b_idx] + ([2 * o] if kind == "jmp" else [])
    def fix(t):
        ps = pool_idx
        if (t + 2 * ps) % 4: ps += 1
        words = [0] * total
        def ldl(idx, rn, pi):
            pa = t + 2 * (ps + 2 * pi)
            words[idx] = 0xD000 | (rn << 8) | ((pa - ((t + 2 * idx + 4) & ~3)) // 4)
        if kind == "jmp": words[0] = 0x460B; words[1] = NOP; words[2] = 0; words[3] = NOP   # jsr @r6 (bra END is written below)
        ldl(o, 3, 0); words[o + 1] = TST; words[o + 2] = 0x8900 | (L - (o + 2) - 2)   # bt: target = pc+4+2*disp
        ldl(o + 3, 3, 1)
        for i in range(filler): words[o + 4 + i] = NOP
        words[L] = JSR3 if kind == "jsr" else JMP3; words[L + 1] = NOP
        words[bra_idx] = 0xA000 | ((((t + 2 * total) - (t + 2 * bra_idx + 4)) // 2) & 0xFFF); words[bra_idx + 1] = NOP
        words[a_idx:a_idx + 4] = A_WORDS; words[b_idx:b_idx + 3] = B_WORDS
        for pi, v in ((0, t + 2 * a_idx), (1, t + 2 * b_idx)):
            words[ps + 2 * pi] = v & 0xFFFF; words[ps + 2 * pi + 1] = v >> 16
        c.words = words
        if kind == "jmp": c.regs[6] = t + 2 * o
    c.fix = fix
    c.expect_r0 = 10 if r1 == 0 else 20                    # r1==0: bt taken, r3=A -> r0=10 ; else r3=B -> r0=20
    return c

def main():
    cases = []
    for kind in ("jsr", "jmp"):
        for filler in (0, 1, 3):
            for r1 in (0, 1):
                cases.append(make(kind, filler, r1))
    fails = 0
    for c in cases:
        r = T.test_group(c.label, [c], 1)
        name, status, bad, n = r
        # hand-derived expectation from the host result is checked by re-running the host once more
        exp_ok = None
        if status == "PASS":
            blob, entries = T.build_image([c]); scr = T.scratch_blob(1)
            extra = [c.t_addr + o for o in c.entry_offs]
            h = T.run_host(blob, entries, 1, scr, extra, name)
            b = T.unpack_block(h[0][:T.BLK]); exp_ok = (b["r"][0] == c.expect_r0)
        ok = status == "PASS" and exp_ok
        print(("PASS " if ok else "FAIL ") + c.label, "lifted-vs-qemu:", status, "r0==expected(%d): %s" % (c.expect_r0, exp_ok) if exp_ok is not None else "",
              "" if status == "PASS" else (bad if isinstance(bad, str) else [(d if True else 0) for _, d in (bad or [])][:1]))
        fails += not ok
    print("constjsr regression: %d cases, %d failed" % (len(cases), fails))
    return fails

if __name__ == "__main__":
    sys.exit(1 if main() else 0)
