#!/usr/bin/env python3
import struct
import sys

BASE_VA = 0x8C010000

def disassemble_sh4(data, start_va, length):
    out = []
    pc = start_va
    end_va = start_va + length
    
    while pc < end_va:
        off = pc - BASE_VA
        if off + 2 > len(data):
            break
        op = struct.unpack("<H", data[off:off+2])[0]
        
        # Decode instruction
        inst_str = f".word 0x{op:04x}"
        
        n = (op >> 8) & 0xF
        m = (op >> 4) & 0xF
        d4 = op & 0xF
        d8 = op & 0xFF
        d12 = op & 0xFFF
        
        if op == 0x0009:
            inst_str = "nop"
        elif op == 0x000B:
            inst_str = "rts"
        elif (op & 0xF0FF) == 0x0023:
            inst_str = f"braf r{n}"
        elif (op & 0xF0FF) == 0x0003:
            inst_str = f"bsrf r{n}"
        elif (op & 0xF000) == 0xE000:
            imm = d8 if d8 < 128 else d8 - 256
            inst_str = f"mov #{imm}, r{n}"
        elif (op & 0xF000) == 0x9000:
            target = pc + 4 + d8 * 2
            val = struct.unpack("<H", data[target-BASE_VA:target-BASE_VA+2])[0] if target-BASE_VA+2 <= len(data) else 0
            inst_str = f"mov.w @(0x{target:x}, pc), r{n} ; =0x{val:04x}"
        elif (op & 0xF000) == 0xD000:
            target = (pc & ~3) + 4 + d8 * 4
            val = struct.unpack("<I", data[target-BASE_VA:target-BASE_VA+4])[0] if target-BASE_VA+4 <= len(data) else 0
            inst_str = f"mov.l @(0x{target:x}, pc), r{n} ; =0x{val:08x}"
        elif (op & 0xFF00) == 0xC700:
            target = (pc & ~3) + 4 + d8 * 4
            inst_str = f"mova @(0x{target:x}, pc), r0"
        elif (op & 0xF00F) == 0x6003:
            inst_str = f"mov r{m}, r{n}"
        elif (op & 0xF00F) == 0x2002:
            inst_str = f"mov.l r{m}, @r{n}"
        elif (op & 0xF00F) == 0x6002:
            inst_str = f"mov.l @r{m}, r{n}"
        elif (op & 0xF00F) == 0x2001:
            inst_str = f"mov.w r{m}, @r{n}"
        elif (op & 0xF00F) == 0x6001:
            inst_str = f"mov.w @r{m}, r{n}"
        elif (op & 0xF00F) == 0x2000:
            inst_str = f"mov.b r{m}, @r{n}"
        elif (op & 0xF00F) == 0x6000:
            inst_str = f"mov.b @r{m}, r{n}"
        elif (op & 0xF00F) == 0x2006:
            inst_str = f"mov.l r{m}, @-r{n}"
        elif (op & 0xF00F) == 0x6006:
            inst_str = f"mov.l @r{m}+, r{n}"
        elif (op & 0xF000) == 0x5000:
            inst_str = f"mov.l @({d4*4}, r{m}), r{n}"
        elif (op & 0xF000) == 0x1000:
            inst_str = f"mov.l r{m}, @({d4*4}, r{n})"
        elif (op & 0xFF00) == 0x8400:
            inst_str = f"mov.b @({d4}, r4), r0"
        elif (op & 0xFF00) == 0x8000:
            inst_str = f"mov.b r0, @({d4}, r4)"
        elif (op & 0xFF00) == 0x8500:
            inst_str = f"mov.w @({d4*2}, r4), r0"
        elif (op & 0xFF00) == 0x8100:
            inst_str = f"mov.w r0, @({d4*2}, r4)"
        elif (op & 0xF00F) == 0x0004:
            inst_str = f"mov.b r{m}, @(r0, r{n})"
        elif (op & 0xF00F) == 0x000C:
            inst_str = f"mov.b @(r0, r{m}), r{n}"
        elif (op & 0xF00F) == 0x0005:
            inst_str = f"mov.w r{m}, @(r0, r{n})"
        elif (op & 0xF00F) == 0x000D:
            inst_str = f"mov.w @(r0, r{m}), r{n}"
        elif (op & 0xF00F) == 0x0006:
            inst_str = f"mov.l r{m}, @(r0, r{n})"
        elif (op & 0xF00F) == 0x000E:
            inst_str = f"mov.l @(r0, r{m}), r{n}"
        elif (op & 0xF000) == 0x7000:
            imm = d8 if d8 < 128 else d8 - 256
            inst_str = f"add #{imm}, r{n}"
        elif (op & 0xF00F) == 0x300C:
            inst_str = f"add r{m}, r{n}"
        elif (op & 0xF00F) == 0x3008:
            inst_str = f"sub r{m}, r{n}"
        elif (op & 0xF00F) == 0x3000:
            inst_str = f"cmp/eq r{m}, r{n}"
        elif (op & 0xF00F) == 0x3002:
            inst_str = f"cmp/hs r{m}, r{n}"
        elif (op & 0xF00F) == 0x3003:
            inst_str = f"cmp/ge r{m}, r{n}"
        elif (op & 0xF00F) == 0x3006:
            inst_str = f"cmp/hi r{m}, r{n}"
        elif (op & 0xF00F) == 0x3007:
            inst_str = f"cmp/gt r{m}, r{n}"
        elif (op & 0xF00F) == 0x2008:
            inst_str = f"tst r{m}, r{n}"
        elif (op & 0xFF00) == 0x8800:
            imm = d8 if d8 < 128 else d8 - 256
            inst_str = f"cmp/eq #{imm}, r0"
        elif (op & 0xF000) == 0xA000:
            disp = d12 if d12 < 2048 else d12 - 4096
            target = pc + 4 + disp * 2
            inst_str = f"bra 0x{target:08x}"
        elif (op & 0xF000) == 0xB000:
            disp = d12 if d12 < 2048 else d12 - 4096
            target = pc + 4 + disp * 2
            inst_str = f"bsr 0x{target:08x}"
        elif (op & 0xFF00) == 0x8900:
            disp = d8 if d8 < 128 else d8 - 256
            target = pc + 4 + disp * 2
            inst_str = f"bt 0x{target:08x}"
        elif (op & 0xFF00) == 0x8B00:
            disp = d8 if d8 < 128 else d8 - 256
            target = pc + 4 + disp * 2
            inst_str = f"bf 0x{target:08x}"
        elif (op & 0xFF00) == 0x8D00:
            disp = d8 if d8 < 128 else d8 - 256
            target = pc + 4 + disp * 2
            inst_str = f"bt/s 0x{target:08x}"
        elif (op & 0xFF00) == 0x8F00:
            disp = d8 if d8 < 128 else d8 - 256
            target = pc + 4 + disp * 2
            inst_str = f"bf/s 0x{target:08x}"
        elif (op & 0xF0FF) == 0x402B:
            inst_str = f"jmp @r{n}"
        elif (op & 0xF0FF) == 0x400B:
            inst_str = f"jsr @r{n}"
        elif (op & 0xF0FF) == 0x4022:
            inst_str = f"sts.l pr, @-r{n}"
        elif (op & 0xF0FF) == 0x4026:
            inst_str = f"lds.l @r{n}+, pr"
        elif (op & 0xF0FF) == 0x0029:
            inst_str = f"movt r{n}"
        elif (op & 0xF00F) == 0x2009:
            inst_str = f"and r{m}, r{n}"
        elif (op & 0xF00F) == 0x200A:
            inst_str = f"xor r{m}, r{n}"
        elif (op & 0xF00F) == 0x200B:
            inst_str = f"or r{m}, r{n}"
        elif (op & 0xF0FF) == 0x4000:
            inst_str = f"shll r{n}"
        elif (op & 0xF0FF) == 0x4001:
            inst_str = f"shlr r{n}"
        elif (op & 0xF0FF) == 0x4004:
            inst_str = f"rotl r{n}"
        elif (op & 0xF0FF) == 0x4005:
            inst_str = f"rotr r{n}"
        elif (op & 0xF0FF) == 0x4008:
            inst_str = f"shll2 r{n}"
        elif (op & 0xF0FF) == 0x4009:
            inst_str = f"shlr2 r{n}"
        elif (op & 0xF0FF) == 0x4018:
            inst_str = f"shll8 r{n}"
        elif (op & 0xF0FF) == 0x4019:
            inst_str = f"shlr8 r{n}"
        elif (op & 0xF0FF) == 0x4028:
            inst_str = f"shll16 r{n}"
        elif (op & 0xF0FF) == 0x4029:
            inst_str = f"shlr16 r{n}"
        
        out.append(f"0x{pc:08X}:  {op:04X}    {inst_str}")
        pc += 2
        
    return "\n".join(out)

if __name__ == "__main__":
    with open("assets/dc/1ST_READ.BIN", "rb") as f:
        data = f.read()
    va = int(sys.argv[1], 16) if len(sys.argv) > 1 else 0x8C03AF20
    length = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x100
    print(disassemble_sh4(data, va, length))
