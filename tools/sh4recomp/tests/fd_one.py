"""debug one funcdiff call: python3 fd_one.py <func_hex> <r4> <r5> <r6> <r7> [f4 f5 f6 f7 as hex float bits] [gen]  (all hex). Prints QEMU vs host log + first RAM diffs."""
import sys,subprocess,tempfile
sys.path.insert(0,'.');sys.path.insert(0,'..')
import funcdiff as F
def one(a, r, fl=None, gen="gen_fix"):
    F.GEN = gen
    spec=(a,r,fl or [F.fb(1.0)]*4)
    blob=F.assemble([spec],0x8C700000)
    x=12345;scr=bytearray()
    for i in range(0x10000):
        x=(x*1103515245+12345)&0xFFFFFFFF;scr.append((x>>16)&255)
    q=F.run_qemu(blob,1,bytes(scr)); host=F.build_host(gen); d=tempfile.mkdtemp()
    open(d+'/s','w').write("%x %s %s\n"%(spec[0]," ".join("%x"%v for v in spec[1])," ".join("%x"%v for v in spec[2])))
    import os; env=dict(os.environ); env['DH_PR']='%x'%(0x8C001000+blob.find(b'\x0b\x41')+4)
    subprocess.check_call([host,F.BIN,d+'/s','run',d+'/l',d+'/r'],env=env)
    hl=open(d+'/l','rb').read();hr=open(d+'/r','rb').read()
    print(hex(a),'log qemu',q[0].hex(),'host',hl.hex())
    diff=[i for i in range(0x10000,0xFF0000) if q[1][i]!=hr[i] and not 0x700000<=i<0x800000]
    print(' ram diffs',len(diff),[hex(i+0x8c000000) for i in diff[:6]])
    for i in diff[:6]: print('   ',hex(i+0x8c000000),'qemu',hex(q[1][i]),'host',hex(hr[i]))
if __name__=="__main__":
    a=[int(x,16) for x in sys.argv[1:10]]; one(a[0],a[1:5],fl=a[5:9] if len(a)>=9 else None,gen=sys.argv[10] if len(sys.argv)>10 else "gen_fix")
