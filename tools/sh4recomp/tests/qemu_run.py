"""Run a raw SH-4 program under qemu-system-sh4 (machine r2d) and dump guest RAM regions.
ROM (flash @0) = tiny stub: PR=<halt>, jump to entry.  Program images are injected with -device loader."""
import os, socket, struct, subprocess, tempfile, time

def _w(*x): return b"".join(struct.pack("<H", v) for v in x)

def make_rom(entry, halt):
    # r0=entry ; r1=halt ; lds r1,pr ; jmp @r0 ; nop ; pool
    # D002: pc=0 -> (4&~3)+2*4=12 ; D102: pc=2 -> 4+8=12?? compute explicitly below
    code = _w(0xD003, 0xD103, 0x412A, 0x402B, 0x0009)
    # D003 @pc0: base 4 + 3*4 = 16 ; D103 @pc2: base 4 + 3*4 = 16 -> need different slots, use 3 and 4
    code = _w(0xD003, 0xD104, 0x412A, 0x402B, 0x0009, 0x0009, 0x0009, 0x0009)
    code += struct.pack("<II", entry, halt)       # at offsets 16, 20
    return code + b"\0" * (0x1000 - len(code))

def run(images, entry, halt, timeout=60, extra=()):
    """images: list of (guest_phys_addr, bytes). The program is entered at `entry` with PR=halt."""
    import json
    d = tempfile.mkdtemp(prefix="q_")
    rom = os.path.join(d, "rom.bin"); open(rom, "wb").write(make_rom(entry, halt).ljust(0x1000000, b"\xff"))
    args = ["qemu-system-sh4", "-M", "r2d", "-drive", f"if=pflash,format=raw,file={rom}", "-display", "none", "-serial", "null", "-monitor", "none",
            "-qmp", f"unix:{d}/qmp,server,nowait", "-S"] + list(extra)
    for i, (a, b) in enumerate(images):
        p = os.path.join(d, f"img{i}.bin"); open(p, "wb").write(b)
        args += ["-device", f"loader,file={p},addr={a:#x}"]
    pr = subprocess.Popen(args, stdout=subprocess.DEVNULL, stderr=subprocess.PIPE)
    pr._tmpdir = d      # removed by finish(): each run leaves a 16 MiB ROM + 16 MiB RAM dump, which used to leak ~300 GB over many runs
    sock = None
    for _ in range(200):
        try:
            sock = socket.socket(socket.AF_UNIX); sock.connect(f"{d}/qmp"); break
        except Exception: time.sleep(0.05)
    f = sock.makefile("rw"); sock.settimeout(timeout)
    json.loads(f.readline())            # greeting
    def q(cmd, **args):
        f.write(json.dumps({"execute": cmd, "arguments": args}) + "\n"); f.flush()
        while True:
            r = json.loads(f.readline())
            if "return" in r or "error" in r: return r
    q("qmp_capabilities")
    q("cont")
    return pr, d, q

def dump(q, d, regions):
    outs = []
    for i, (a, n) in enumerate(regions):
        p = os.path.join(d, f"dump{i}.bin")
        r = q("pmemsave", val=a, size=n, filename=p)
        assert "error" not in r, r
        outs.append(open(p, "rb").read())
    return outs

def finish(pr, q):
    try: q("quit")
    except Exception: pass
    try: pr.wait(timeout=5)
    except Exception: pr.kill()
    import shutil
    shutil.rmtree(getattr(pr, "_tmpdir", "/nonexistent"), ignore_errors=True)
