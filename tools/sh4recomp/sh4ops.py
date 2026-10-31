"""SH-4 opcode table: decodes 16-bit opcodes and returns C statements (runtime.h macros).
Branches / delay-slot instructions are handled by sh4lift.py, not here."""

def s8(v): return v - 256 if v & 0x80 else v
def s12(v): return v - 4096 if v & 0x800 else v
def s16(v): return v - 65536 if v & 0x8000 else v

OPS = []   # (mask, val, name, fn(op,pc,rd)->list[str])
def op(mask, val, name):
    def deco(fn):
        OPS.append((mask, val, name, fn)); return fn
    return deco

def R(k): return f"R({k})"

# ---------- fixed opcodes
FIXED = {
 0x0009: ("nop", []),
 0x0008: ("clrt", ["c->t=0;"]), 0x0018: ("sett", ["c->t=1;"]),
 0x0019: ("div0u", ["c->m=0;c->q=0;c->t=0;"]),
 0x0028: ("clrmac", ["c->mach=0;c->macl=0;"]),
 0x0048: ("clrs", ["c->s=0;"]), 0x0058: ("sets", ["c->s=1;"]),
 0x0038: ("ldtlb", ["sh4_hook_misc(c,1,0);"]),
 0x001B: ("sleep", ["sh4_hook_misc(c,2,0);"]),
 0xF3FD: ("fschg", ["c->fpscr^=SH4_FPSCR_SZ;"]),
 0xFBFD: ("frchg", ["sh4_frchg(c);"]),
}
for k, (nm, ln) in FIXED.items():
    OPS.append((0xFFFF, k, nm, (lambda ln: lambda o, pc, rd: list(ln))(ln)))

# control-flow opcodes recognised here only for naming (handled in lifter)
FLOW = {}
def flow(mask, val, name, kind):
    OPS.append((mask, val, name, None)); FLOW[(mask, val)] = kind
flow(0xFFFF, 0x000B, "rts", "rts"); flow(0xFFFF, 0x002B, "rte", "rte")
flow(0xF0FF, 0x0003, "bsrf", "bsrf"); flow(0xF0FF, 0x0023, "braf", "braf")
flow(0xF0FF, 0x400B, "jsr", "jsr"); flow(0xF0FF, 0x402B, "jmp", "jmp")
flow(0xF000, 0xA000, "bra", "bra"); flow(0xF000, 0xB000, "bsr", "bsr")
flow(0xFF00, 0x8900, "bt", "bt"); flow(0xFF00, 0x8B00, "bf", "bf")
flow(0xFF00, 0x8D00, "bt/s", "bts"); flow(0xFF00, 0x8F00, "bf/s", "bfs")

# ---------- 0x0___
def reg_ops(): pass
@op(0xF00F, 0x0004, "mov.b Rm,@(R0,Rn)")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"ST8({R(n)}+{R(0)},{R(m)});"]
@op(0xF00F, 0x0005, "mov.w Rm,@(R0,Rn)")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"ST16({R(n)}+{R(0)},{R(m)});"]
@op(0xF00F, 0x0006, "mov.l Rm,@(R0,Rn)")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"ST32({R(n)}+{R(0)},{R(m)});"]
@op(0xF00F, 0x0007, "mul.l")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"c->macl={R(n)}*{R(m)};"]
@op(0xF00F, 0x000C, "mov.b @(R0,Rm),Rn")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"{R(n)}=(int32_t)(int8_t)LD8({R(m)}+{R(0)});"]
@op(0xF00F, 0x000D, "mov.w @(R0,Rm),Rn")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"{R(n)}=(int32_t)(int16_t)LD16({R(m)}+{R(0)});"]
@op(0xF00F, 0x000E, "mov.l @(R0,Rm),Rn")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"{R(n)}=LD32({R(m)}+{R(0)});"]
@op(0xF00F, 0x000F, "mac.l")
def _(o, pc, rd):
    n, m = (o>>8)&15, (o>>4)&15
    return [f"sh4_mac_l(c,{R(n)},{R(m)});{R(n)}+=4;{R(m)}+=4;"]
STC = {0x0002:"sh4_getsr(c)", 0x0012:"c->gbr", 0x0022:"c->vbr", 0x0032:"c->ssr", 0x0042:"c->spc", 0x003A:"c->sgr", 0x00FA:"c->dbr",
       0x000A:"c->mach", 0x001A:"c->macl", 0x002A:"c->pr", 0x005A:"c->fpul", 0x006A:"c->fpscr"}
for val, src in STC.items():
    OPS.append((0xF0FF, val, "stc/sts", (lambda src: lambda o, pc, rd: [f"{R((o>>8)&15)}={src};"])(src)))
@op(0xF08F, 0x0082, "stc Rm_BANK,Rn")
def _(o, pc, rd): return [f"{R((o>>8)&15)}=c->rb[{(o>>4)&7}];"]
@op(0xF0FF, 0x0029, "movt")
def _(o, pc, rd): return [f"{R((o>>8)&15)}=c->t;"]
@op(0xF0FF, 0x0083, "pref")
def _(o, pc, rd): return [f"sh4_pref(c,{R((o>>8)&15)});"]
@op(0xF0FF, 0x0093, "ocbi")
def _(o, pc, rd): return []
@op(0xF0FF, 0x00A3, "ocbp")
def _(o, pc, rd): return []
@op(0xF0FF, 0x00B3, "ocbwb")
def _(o, pc, rd): return []
@op(0xF0FF, 0x00C3, "movca.l")
def _(o, pc, rd): return [f"ST32({R((o>>8)&15)},{R(0)});"]

# ---------- 0x1___ 0x5___ mov.l with disp
@op(0xF000, 0x1000, "mov.l Rm,@(d,Rn)")
def _(o, pc, rd): n, m, d = (o>>8)&15, (o>>4)&15, o&15; return [f"ST32({R(n)}+{d*4},{R(m)});"]
@op(0xF000, 0x5000, "mov.l @(d,Rm),Rn")
def _(o, pc, rd): n, m, d = (o>>8)&15, (o>>4)&15, o&15; return [f"{R(n)}=LD32({R(m)}+{d*4});"]

# ---------- 0x2___
def two(val, name, fn):
    OPS.append((0xF00F, 0x2000|val, name, lambda o, pc, rd: fn((o>>8)&15, (o>>4)&15)))
two(0, "mov.b Rm,@Rn", lambda n,m:[f"ST8({R(n)},{R(m)});"])
two(1, "mov.w Rm,@Rn", lambda n,m:[f"ST16({R(n)},{R(m)});"])
two(2, "mov.l Rm,@Rn", lambda n,m:[f"ST32({R(n)},{R(m)});"])
two(4, "mov.b Rm,@-Rn", lambda n,m:[f"{{uint32_t v={R(m)};{R(n)}-=1;ST8({R(n)},v);}}"])
two(5, "mov.w Rm,@-Rn", lambda n,m:[f"{{uint32_t v={R(m)};{R(n)}-=2;ST16({R(n)},v);}}"])
two(6, "mov.l Rm,@-Rn", lambda n,m:[f"{{uint32_t v={R(m)};{R(n)}-=4;ST32({R(n)},v);}}"])
two(7, "div0s", lambda n,m:[f"c->q={R(n)}>>31;c->m={R(m)}>>31;c->t=c->q^c->m;"])
two(8, "tst Rm,Rn", lambda n,m:[f"c->t=({R(n)}&{R(m)})==0;"])
two(9, "and", lambda n,m:[f"{R(n)}&={R(m)};"])
two(10, "xor", lambda n,m:[f"{R(n)}^={R(m)};"])
two(11, "or", lambda n,m:[f"{R(n)}|={R(m)};"])
two(12, "cmp/str", lambda n,m:[f"c->t=sh4_cmpstr({R(n)},{R(m)});"])
two(13, "xtrct", lambda n,m:[f"{R(n)}=({R(m)}<<16)|({R(n)}>>16);"])
two(14, "mulu.w", lambda n,m:[f"c->macl=(uint32_t)(uint16_t){R(n)}*(uint32_t)(uint16_t){R(m)};"])
two(15, "muls.w", lambda n,m:[f"c->macl=(uint32_t)((int32_t)(int16_t){R(n)}*(int32_t)(int16_t){R(m)});"])

# ---------- 0x3___
def three(val, name, fn):
    OPS.append((0xF00F, 0x3000|val, name, lambda o, pc, rd: fn((o>>8)&15, (o>>4)&15)))
three(0, "cmp/eq", lambda n,m:[f"c->t={R(n)}=={R(m)};"])
three(2, "cmp/hs", lambda n,m:[f"c->t={R(n)}>={R(m)};"])
three(3, "cmp/ge", lambda n,m:[f"c->t=(int32_t){R(n)}>=(int32_t){R(m)};"])
three(4, "div1", lambda n,m:[f"{R(n)}=sh4_div1(c,{R(n)},{R(m)});"])
three(5, "dmulu.l", lambda n,m:[f"{{uint64_t p=(uint64_t){R(n)}*{R(m)};c->mach=(uint32_t)(p>>32);c->macl=(uint32_t)p;}}"])
three(6, "cmp/hi", lambda n,m:[f"c->t={R(n)}>{R(m)};"])
three(7, "cmp/gt", lambda n,m:[f"c->t=(int32_t){R(n)}>(int32_t){R(m)};"])
three(8, "sub", lambda n,m:[f"{R(n)}-={R(m)};"])
three(10, "subc", lambda n,m:[f"{{uint32_t a={R(n)},b={R(m)},s=a-b,r=s-c->t;c->t=(a<s)|(s<r);{R(n)}=r;}}"])
three(11, "subv", lambda n,m:[f"{{int32_t r;c->t=__builtin_sub_overflow((int32_t){R(n)},(int32_t){R(m)},&r);{R(n)}=(uint32_t)r;}}"])
three(12, "add", lambda n,m:[f"{R(n)}+={R(m)};"])
three(13, "dmuls.l", lambda n,m:[f"{{int64_t p=(int64_t)(int32_t){R(n)}*(int64_t)(int32_t){R(m)};c->mach=(uint32_t)((uint64_t)p>>32);c->macl=(uint32_t)p;}}"])
three(14, "addc", lambda n,m:[f"{{uint32_t a={R(n)},b={R(m)},s=a+b,r=s+c->t;c->t=(a>s)|(s>r);{R(n)}=r;}}"])
three(15, "addv", lambda n,m:[f"{{int32_t r;c->t=__builtin_add_overflow((int32_t){R(n)},(int32_t){R(m)},&r);{R(n)}=(uint32_t)r;}}"])

# ---------- 0x4___
def four(low, name, fn):
    OPS.append((0xF0FF, 0x4000|low, name, lambda o, pc, rd: fn((o>>8)&15)))
four(0x00, "shll", lambda n:[f"c->t={R(n)}>>31;{R(n)}<<=1;"])
four(0x01, "shlr", lambda n:[f"c->t={R(n)}&1;{R(n)}>>=1;"])
four(0x04, "rotl", lambda n:[f"c->t={R(n)}>>31;{R(n)}=({R(n)}<<1)|c->t;"])
four(0x05, "rotr", lambda n:[f"c->t={R(n)}&1;{R(n)}=({R(n)}>>1)|(c->t<<31);"])
four(0x08, "shll2", lambda n:[f"{R(n)}<<=2;"])
four(0x09, "shlr2", lambda n:[f"{R(n)}>>=2;"])
four(0x10, "dt", lambda n:[f"{R(n)}-=1;c->t={R(n)}==0;"])
four(0x11, "cmp/pz", lambda n:[f"c->t=(int32_t){R(n)}>=0;"])
four(0x15, "cmp/pl", lambda n:[f"c->t=(int32_t){R(n)}>0;"])
four(0x18, "shll8", lambda n:[f"{R(n)}<<=8;"])
four(0x19, "shlr8", lambda n:[f"{R(n)}>>=8;"])
four(0x1B, "tas.b", lambda n:[f"{{uint8_t v=LD8({R(n)});c->t=v==0;ST8({R(n)},v|0x80);}}"])
four(0x20, "shal", lambda n:[f"c->t={R(n)}>>31;{R(n)}<<=1;"])
four(0x21, "shar", lambda n:[f"c->t={R(n)}&1;{R(n)}=(uint32_t)((int32_t){R(n)}>>1);"])
four(0x24, "rotcl", lambda n:[f"{{uint32_t o={R(n)}>>31;{R(n)}=({R(n)}<<1)|c->t;c->t=o;}}"])
four(0x25, "rotcr", lambda n:[f"{{uint32_t o={R(n)}&1;{R(n)}=({R(n)}>>1)|(c->t<<31);c->t=o;}}"])
four(0x28, "shll16", lambda n:[f"{R(n)}<<=16;"])
four(0x29, "shlr16", lambda n:[f"{R(n)}>>=16;"])
# (store.l, load.l, load) triples
SPECIAL = [  # name, sts.l/stc.l low byte, lds.l/ldc.l low, lds/ldc low, value expr, setter fmt
 ("MACH",0x02,0x06,0x0A,"c->mach","c->mach={v};"),
 ("MACL",0x12,0x16,0x1A,"c->macl","c->macl={v};"),
 ("PR",  0x22,0x26,0x2A,"c->pr","c->pr={v};"),
 ("FPUL",0x52,0x56,0x5A,"c->fpul","c->fpul={v};"),
 ("FPSCR",0x62,0x66,0x6A,"c->fpscr","sh4_setfpscr(c,{v});"),
 ("SR",  0x03,0x07,0x0E,"sh4_getsr(c)","sh4_setsr(c,{v});"),
 ("GBR", 0x13,0x17,0x1E,"c->gbr","c->gbr={v};"),
 ("VBR", 0x23,0x27,0x2E,"c->vbr","c->vbr={v};"),
 ("SSR", 0x33,0x37,0x3E,"c->ssr","c->ssr={v};"),
 ("SPC", 0x43,0x47,0x4E,"c->spc","c->spc={v};"),
 ("SGR", 0x32,0x36,0x3A,"c->sgr","c->sgr={v};"),
 ("DBR", 0xF2,0xF6,0xFA,"c->dbr","c->dbr={v};"),
]
for nm, st, ldl, ld, val, setter in SPECIAL:
    four(st, f"sts.l/stc.l {nm},@-Rn", (lambda val: lambda n:[f"{{uint32_t v={val};{R(n)}-=4;ST32({R(n)},v);}}"])(val))
    four(ldl, f"lds.l/ldc.l @Rm+,{nm}", (lambda setter: lambda n:[f"{{uint32_t v=LD32({R(n)});{R(n)}+=4;"+setter.format(v="v")+"}"])(setter))
    four(ld, f"lds/ldc Rm,{nm}", (lambda setter: lambda n:[setter.format(v=R(n))])(setter))
@op(0xF08F, 0x408E, "ldc Rm,Rn_BANK")
def _(o, pc, rd): return [f"c->rb[{(o>>4)&7}]={R((o>>8)&15)};"]
@op(0xF08F, 0x4087, "ldc.l @Rm+,Rn_BANK")
def _(o, pc, rd): m = (o>>8)&15; return [f"c->rb[{(o>>4)&7}]=LD32({R(m)});{R(m)}+=4;"]
@op(0xF08F, 0x4083, "stc.l Rm_BANK,@-Rn")
def _(o, pc, rd): n = (o>>8)&15; return [f"{R(n)}-=4;ST32({R(n)},c->rb[{(o>>4)&7}]);"]
@op(0xF00F, 0x400C, "shad")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"{R(n)}=sh4_shad({R(n)},{R(m)});"]
@op(0xF00F, 0x400D, "shld")
def _(o, pc, rd): n, m = (o>>8)&15, (o>>4)&15; return [f"{R(n)}=sh4_shld({R(n)},{R(m)});"]
@op(0xF00F, 0x400F, "mac.w")
def _(o, pc, rd):
    n, m = (o>>8)&15, (o>>4)&15
    return [f"sh4_mac_w(c,{R(n)},{R(m)});{R(n)}+=2;{R(m)}+=2;"]

# ---------- 0x6___
def six(val, name, fn):
    OPS.append((0xF00F, 0x6000|val, name, lambda o, pc, rd: fn((o>>8)&15, (o>>4)&15)))
six(0, "mov.b @Rm,Rn", lambda n,m:[f"{R(n)}=(int32_t)(int8_t)LD8({R(m)});"])
six(1, "mov.w @Rm,Rn", lambda n,m:[f"{R(n)}=(int32_t)(int16_t)LD16({R(m)});"])
six(2, "mov.l @Rm,Rn", lambda n,m:[f"{R(n)}=LD32({R(m)});"])
six(3, "mov Rm,Rn", lambda n,m:[f"{R(n)}={R(m)};"])
six(4, "mov.b @Rm+,Rn", lambda n,m:[f"{{int32_t v=(int8_t)LD8({R(m)});{R(m)}+=1;{R(n)}=(uint32_t)v;}}"])
six(5, "mov.w @Rm+,Rn", lambda n,m:[f"{{int32_t v=(int16_t)LD16({R(m)});{R(m)}+=2;{R(n)}=(uint32_t)v;}}"])
six(6, "mov.l @Rm+,Rn", lambda n,m:[f"{{uint32_t v=LD32({R(m)});{R(m)}+=4;{R(n)}=v;}}"])
six(7, "not", lambda n,m:[f"{R(n)}=~{R(m)};"])
six(8, "swap.b", lambda n,m:[f"{R(n)}=({R(m)}&0xFFFF0000u)|(({R(m)}&0xFF)<<8)|(({R(m)}>>8)&0xFF);"])
six(9, "swap.w", lambda n,m:[f"{R(n)}=({R(m)}<<16)|({R(m)}>>16);"])
six(10, "negc", lambda n,m:[f"{{uint32_t s=0u-{R(m)},r=s-c->t;c->t=(0u<s)|(s<r);{R(n)}=r;}}"])
six(11, "neg", lambda n,m:[f"{R(n)}=0u-{R(m)};"])
six(12, "extu.b", lambda n,m:[f"{R(n)}={R(m)}&0xFF;"])
six(13, "extu.w", lambda n,m:[f"{R(n)}={R(m)}&0xFFFF;"])
six(14, "exts.b", lambda n,m:[f"{R(n)}=(uint32_t)(int32_t)(int8_t){R(m)};"])
six(15, "exts.w", lambda n,m:[f"{R(n)}=(uint32_t)(int32_t)(int16_t){R(m)};"])

# ---------- 0x7, 0xE
@op(0xF000, 0x7000, "add #imm")
def _(o, pc, rd): return [f"{R((o>>8)&15)}+={s8(o&255)&0xFFFFFFFF:#x}u;"]
@op(0xF000, 0xE000, "mov #imm")
def _(o, pc, rd): return [f"{R((o>>8)&15)}={s8(o&255)&0xFFFFFFFF:#x}u;"]

# ---------- 0x8___
@op(0xFF00, 0x8000, "mov.b R0,@(d,Rn)")
def _(o, pc, rd): return [f"ST8({R((o>>4)&15)}+{o&15},{R(0)});"]
@op(0xFF00, 0x8100, "mov.w R0,@(d,Rn)")
def _(o, pc, rd): return [f"ST16({R((o>>4)&15)}+{(o&15)*2},{R(0)});"]
@op(0xFF00, 0x8400, "mov.b @(d,Rm),R0")
def _(o, pc, rd): return [f"{R(0)}=(int32_t)(int8_t)LD8({R((o>>4)&15)}+{o&15});"]
@op(0xFF00, 0x8500, "mov.w @(d,Rm),R0")
def _(o, pc, rd): return [f"{R(0)}=(int32_t)(int16_t)LD16({R((o>>4)&15)}+{(o&15)*2});"]
@op(0xFF00, 0x8800, "cmp/eq #imm,R0")
def _(o, pc, rd): return [f"c->t=(int32_t){R(0)}=={s8(o&255)};"]

# ---------- 0xC___ GBR ops
@op(0xFF00, 0xC000, "mov.b R0,@(d,GBR)")
def _(o, pc, rd): return [f"ST8(c->gbr+{o&255},{R(0)});"]
@op(0xFF00, 0xC100, "mov.w R0,@(d,GBR)")
def _(o, pc, rd): return [f"ST16(c->gbr+{(o&255)*2},{R(0)});"]
@op(0xFF00, 0xC200, "mov.l R0,@(d,GBR)")
def _(o, pc, rd): return [f"ST32(c->gbr+{(o&255)*4},{R(0)});"]
@op(0xFF00, 0xC400, "mov.b @(d,GBR),R0")
def _(o, pc, rd): return [f"{R(0)}=(int32_t)(int8_t)LD8(c->gbr+{o&255});"]
@op(0xFF00, 0xC500, "mov.w @(d,GBR),R0")
def _(o, pc, rd): return [f"{R(0)}=(int32_t)(int16_t)LD16(c->gbr+{(o&255)*2});"]
@op(0xFF00, 0xC600, "mov.l @(d,GBR),R0")
def _(o, pc, rd): return [f"{R(0)}=LD32(c->gbr+{(o&255)*4});"]
@op(0xFF00, 0xC300, "trapa")
def _(o, pc, rd): return [f"sh4_hook_misc(c,3,{o&255});"]
@op(0xFF00, 0xC700, "mova")
def _(o, pc, rd): return [f"{R(0)}={(((pc+4)&~3)+(o&255)*4)&0xFFFFFFFF:#x}u;"]
@op(0xFF00, 0xC800, "tst #imm,R0")
def _(o, pc, rd): return [f"c->t=({R(0)}&{o&255:#x})==0;"]
@op(0xFF00, 0xC900, "and #imm,R0")
def _(o, pc, rd): return [f"{R(0)}&={o&255:#x}u;"]
@op(0xFF00, 0xCA00, "xor #imm,R0")
def _(o, pc, rd): return [f"{R(0)}^={o&255:#x}u;"]
@op(0xFF00, 0xCB00, "or #imm,R0")
def _(o, pc, rd): return [f"{R(0)}|={o&255:#x}u;"]
@op(0xFF00, 0xCC00, "tst.b #imm,@(R0,GBR)")
def _(o, pc, rd): return [f"c->t=(LD8({R(0)}+c->gbr)&{o&255:#x})==0;"]
@op(0xFF00, 0xCD00, "and.b #imm,@(R0,GBR)")
def _(o, pc, rd): return [f"{{uint32_t a={R(0)}+c->gbr;ST8(a,LD8(a)&{o&255:#x});}}"]
@op(0xFF00, 0xCE00, "xor.b #imm,@(R0,GBR)")
def _(o, pc, rd): return [f"{{uint32_t a={R(0)}+c->gbr;ST8(a,LD8(a)^{o&255:#x});}}"]
@op(0xFF00, 0xCF00, "or.b #imm,@(R0,GBR)")
def _(o, pc, rd): return [f"{{uint32_t a={R(0)}+c->gbr;ST8(a,LD8(a)|{o&255:#x});}}"]

# ---------- PC-relative loads: need the literal value (rd = reader)
@op(0xF000, 0x9000, "mov.w @(d,PC),Rn")
def _(o, pc, rd):
    a = pc + 4 + (o&255)*2
    return [f"{R((o>>8)&15)}={s16(rd(a,2))&0xFFFFFFFF:#x}u;"]
@op(0xF000, 0xD000, "mov.l @(d,PC),Rn")
def _(o, pc, rd):
    a = ((pc+4)&~3) + (o&255)*4
    return [f"{R((o>>8)&15)}={rd(a,4):#x}u;"]

# ---------- 0xF___ FPU (mode checks inside runtime helpers)
def fpu2(val, name, fn):
    OPS.append((0xF00F, 0xF000|val, name, lambda o, pc, rd: fn((o>>8)&15, (o>>4)&15)))
fpu2(0x0, "fadd", lambda n,m:[f"fp_arith(c,0,{n},{m});"])
fpu2(0x1, "fsub", lambda n,m:[f"fp_arith(c,1,{n},{m});"])
fpu2(0x2, "fmul", lambda n,m:[f"fp_arith(c,2,{n},{m});"])
fpu2(0x3, "fdiv", lambda n,m:[f"fp_arith(c,3,{n},{m});"])
fpu2(0x4, "fcmp/eq", lambda n,m:[f"fp_cmp(c,0,{n},{m});"])
fpu2(0x5, "fcmp/gt", lambda n,m:[f"fp_cmp(c,1,{n},{m});"])
fpu2(0x6, "fmov.s @(R0,Rm),FRn", lambda n,m:[f"fp_ld(c,{n},{R(0)}+{R(m)});"])
fpu2(0x7, "fmov.s FRm,@(R0,Rn)", lambda n,m:[f"fp_st(c,{m},{R(0)}+{R(n)});"])
fpu2(0x8, "fmov.s @Rm,FRn", lambda n,m:[f"fp_ld(c,{n},{R(m)});"])
fpu2(0x9, "fmov.s @Rm+,FRn", lambda n,m:[f"fp_ld(c,{n},{R(m)});{R(m)}+=fp_sz(c);"])
fpu2(0xA, "fmov.s FRm,@Rn", lambda n,m:[f"fp_st(c,{m},{R(n)});"])
fpu2(0xB, "fmov.s FRm,@-Rn", lambda n,m:[f"{R(n)}-=fp_sz(c);fp_st(c,{m},{R(n)});"])
fpu2(0xC, "fmov FRm,FRn", lambda n,m:[f"fp_mov(c,{n},{m});"])
fpu2(0xE, "fmac", lambda n,m:[f"fp_fmac(c,{n},{m});"])
def fpu1(low, name, fn):
    OPS.append((0xF0FF, 0xF000|low, name, lambda o, pc, rd: fn((o>>8)&15)))
fpu1(0x0D, "fsts FPUL,FRn", lambda n:[f"c->fr[{n}]=c->fpul;"])
fpu1(0x1D, "flds FRm,FPUL", lambda n:[f"c->fpul=c->fr[{n}];"])
fpu1(0x2D, "float FPUL,FRn", lambda n:[f"fp_float(c,{n});"])
fpu1(0x3D, "ftrc FRm,FPUL", lambda n:[f"fp_ftrc(c,{n});"])
fpu1(0x4D, "fneg", lambda n:[f"fp_unary(c,0,{n});"])
fpu1(0x5D, "fabs", lambda n:[f"fp_unary(c,1,{n});"])
fpu1(0x6D, "fsqrt", lambda n:[f"fp_unary(c,2,{n});"])
fpu1(0x7D, "fsrra", lambda n:[f"fp_fsrra(c,{n});"])
fpu1(0x8D, "fldi0", lambda n:[f"c->fr[{n}]=0x00000000u;"])
fpu1(0x9D, "fldi1", lambda n:[f"c->fr[{n}]=0x3F800000u;"])
fpu1(0xAD, "fcnvsd FPUL,DRn", lambda n:[f"fp_cnvsd(c,{n});"])
fpu1(0xBD, "fcnvds DRm,FPUL", lambda n:[f"fp_cnvds(c,{n});"])
# fipr: 1111 nnmm 1110 1101 ; ftrv: 1111 nn01 1111 1101 ; fsca: 1111 nnn0 1111 1101
@op(0xF0FF, 0xF0ED, "fipr")
def _(o, pc, rd): return [f"fp_fipr(c,{(o>>10)&3},{(o>>8)&3});"]
@op(0xF3FF, 0xF1FD, "ftrv")
def _(o, pc, rd): return [f"fp_ftrv(c,{(o>>10)&3});"]
@op(0xF1FF, 0xF0FD, "fsca")
def _(o, pc, rd): return [f"fp_fsca(c,{((o>>9)&7)*2});"]

def decode(o):
    """return (name, fn) or None; asserts at most one match"""
    hit = [(nm, fn) for (mk, vl, nm, fn) in OPS if (o & mk) == vl]
    assert len(hit) <= 1, (hex(o), [h[0] for h in hit])
    return hit[0] if hit else None

# 65536-entry lookup table
_TAB = None
def table():
    global _TAB
    if _TAB is None:
        _TAB = [None]*65536
        for o in range(65536):
            _TAB[o] = decode(o)
    return _TAB
