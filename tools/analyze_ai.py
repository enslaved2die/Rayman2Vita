import struct

with open("assets/dc/1ST_READ.BIN", "rb") as f:
    dc_bin = f.read()

BASE_VA = 0x8C010000

def va_to_off(va):
    return va - BASE_VA

def off_to_va(off):
    return off + BASE_VA

def disasm_sh4(data, start_va, count=50):
    start_off = va_to_off(start_va)
    for i in range(count):
        off = start_off + i * 2
        va = start_va + i * 2
        if off + 2 > len(data):
            break
        code = struct.unpack("<H", data[off:off+2])[0]
        # Check common SH-4 instructions
        # mov.l @(disp, PC), Rn: 0xDn dd
        desc = f"{code:04x}"
        hi = (code >> 12) & 0xF
        if hi == 0xD:
            rn = (code >> 8) & 0xF
            disp = code & 0xFF
            target = ((va + 4) & ~3) + disp * 4
            target_off = va_to_off(target)
            val = struct.unpack("<I", data[target_off:target_off+4])[0] if 0 <= target_off < len(data)-4 else 0
            desc = f"mov.l @(0x{disp*4:x}, PC), r{rn} ; -> 0x{target:08X} = 0x{val:08X}"
        elif hi == 0x2:
            desc = f"mov.l ... 2xxx"
        elif hi == 0x3:
            desc = f"cmp ... 3xxx"
        elif hi == 0x4:
            if code == 0x4F22:
                desc = "sts.l pr, @-r15"
            elif code == 0x4F26:
                desc = "lds.l @r15+, pr"
            elif (code & 0xFF) == 0x0B:
                rn = (code >> 8) & 0xF
                desc = f"jsr @r{rn}"
            elif (code & 0xFF) == 0x2B:
                rn = (code >> 8) & 0xF
                desc = f"jmp @r{rn}"
            else:
                desc = f"op4 {code:04x}"
        elif code == 0x0009:
            desc = "nop"
        elif code == 0x000B:
            desc = "rts"
        print(f"0x{va:08X} (0x{off:06X}): {code:04X}  {desc}")

print("Disassembly of AI_fn_vInitAI (0x8C032E60):")
disasm_sh4(dc_bin, 0x8C032E60, 40)
