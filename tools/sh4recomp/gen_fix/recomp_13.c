#include "recomp_decls.h"
void f_8c075fb2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(5);
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  R(13)=R(4);
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(12)=R(6); if(k) goto L8c075fde; }
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c075fde;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c075ffa;
L8c075fde:;
  fp_ld(c,2,R(13));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c075ffe;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(13));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c075ffe;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(13));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c075ffe;
L8c075ffa:;
  { c->fr[0]=0x00000000u; goto L8c076138; }
L8c075ffe:;
  R(0)=0x4u;
  fp_ld(c,4,R(14));
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,7,R(0)+R(14));
  R(0)=0x4u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,9,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,4);
  R(5)=R(13);
  fp_mov(c,2,9);
  fp_arith(c,2,2,9);
  fp_fmac(c,3,4);
  fp_mov(c,0,7);
  fp_ld(c,5,R(13));
  fp_ld(c,8,R(0)+R(13));
  R(3)=0x8c05e55cu;
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,2,5);
  fp_mov(c,0,8);
  fp_mov(c,15,3);
  fp_fmac(c,2,8);
  fp_arith(c,2,15,2);
  { c->pr=0x8c076036u; R(4)=R(14); f_8c05e55c(c); }
  fp_unary(c,2,15);
  c->t=(R(12)&R(12))==0;
  fp_mov(c,4,0);
  fp_mov(c,3,15);
  fp_mov(c,15,0);
  { uint32_t k=c->t; fp_arith(c,3,15,3); if(k) goto L8c07611e; }
  c->t=R(12)==R(14);
  if(c->t) goto L8c07604c;
  c->t=R(12)==R(13);
  if(!c->t) goto L8c076096;
L8c07604c:;
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(15));
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(13));
  fp_ld(c,1,R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(13));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(3)=0x8c05e6eau;
  { c->pr=0x8c076092u; R(4)=R(12); f_8c05e6ea(c); }
  {  goto L8c0760d0; }
L8c076096:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(13));
  fp_ld(c,1,R(14));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(12));
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(13));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(12));
L8c0760d0:;
  fp_ld(c,2,R(12));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0760ea;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(12));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0760ea;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(12));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c07611e;
L8c0760ea:;
  R(0)=0x4u;
  fp_ld(c,4,R(12));
  fp_ld(c,6,R(0)+R(12));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(12));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(12));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,3,R(0)+R(12));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(12));
L8c07611e:;
  c->fr[4]=0x3F800000u;
  fp_unary(c,0,4);
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c07612a;
  { fp_mov(c,15,4); goto L8c076132; }
L8c07612a:;
  c->fr[4]=0x3F800000u;
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c076132;
  fp_mov(c,15,4);
L8c076132:;
  R(2)=0x8c09cf34u;
  { c->pr=0x8c076138u; fp_mov(c,4,15); f_8c09cf34(c); }
L8c076138:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c076180(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(6)=R(5);
  R(3)=0x8c05e612u;
  ST32(R(15),R(4));
  R(4)=R(15);
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(15));
  fp_mov(c,15,4);
  { c->pr=0x8c076198u; R(4)+=0x8u; f_8c05e612(c); }
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_mov(c,4,3);
  fp_mov(c,3,15);
  fp_arith(c,2,3,15);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0761c4;
  R(0)=0x0u;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
L8c0761c4:;
  R(0)=0x1u;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c0761ce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  c->fr[3]=0x00000000u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(13));
  fp_cmp(c,1,4,3);
  fp_ld(c,4,R(14));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0761e6;
  fp_unary(c,0,4);
L8c0761e6:;
  R(0)=0x8c0762a4u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c076206;
  fp_ld(c,1,R(14));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,1,2);
  if(!c->t) goto L8c0761fe;
  fp_ld(c,1,R(14));
  R(0)=0x8c0762a8u;
  { fp_ld(c,0,R(0)); goto L8c076202; }
L8c0761fe:;
  R(0)=0x8c0762acu;
  fp_ld(c,0,R(0));
L8c076202:;
  fp_arith(c,1,0,1);
  fp_st(c,0,R(14));
L8c076206:;
  { c->pr=0x8c07620au; fp_ld(c,4,R(13)); f_8c07627c(c); }
  fp_st(c,0,R(13));
  { c->pr=0x8c076210u; fp_ld(c,4,R(14)); f_8c07627c(c); }
  fp_st(c,0,R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07621a(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c08c4e0u;
  R(8)=R(7);
  ST32(R(15)+12,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  ST32(R(15)+8,R(7));
  R(6)=LD32(R(15)+28);
  R(5)=LD32(R(15));
  { c->pr=0x8c076234u; R(4)=LD32(R(15)+4); f_8c08c4e0(c); }
  fp_st(c,0,R(8));
  R(5)=LD32(R(15));
  R(3)=0x8c08c6f2u;
  R(8)=LD32(R(15)+24);
  R(6)=LD32(R(15)+28);
  { c->pr=0x8c076242u; R(4)=LD32(R(15)+4); f_8c08c6f2(c); }
  fp_st(c,0,R(8));
  R(5)=LD32(R(15)+8);
  R(4)=LD32(R(15)+12);
  R(6)=LD32(R(15)+24);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} { f_8c0761ce(c); return; } }
}
void f_8c076252(SH4Ctx *c) {
  R(0)=0x8c0762a8u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c076264;
  R(0)=0x8c0762b8u;
  fp_mov(c,0,4);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,0,2); return; }
L8c076264:;
  R(0)=0x8c0762acu;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,4,2);
  if(c->t) goto L8c076276;
  R(0)=0x8c0762bcu;
  fp_mov(c,0,4);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,0,1); return; }
L8c076276:;
  fp_mov(c,0,4);
  {  return; }
}
void f_8c07627c(SH4Ctx *c) {
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  R(0)=0x8c0762bcu;
  { uint32_t k=!c->t; fp_ld(c,5,R(0)); if(k) goto L8c0762c0; }
  fp_mov(c,0,4);
  { fp_arith(c,0,0,5); return; }
L8c0762c0:;
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c0762ce;
  R(0)=0x8c076364u;
  fp_mov(c,0,4);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,0,2); return; }
L8c0762ce:;
  fp_mov(c,0,4);
  {  return; }
}
void f_8c0762d4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+12,R(4));
  R(0)=0x8u;
  R(3)=0x8c0163ceu;
  ST32(R(15)+4,R(5));
  R(5)=R(6);
  fp_st(c,4,R(0)+R(15));
  ST32(R(15),R(6));
  R(4)=LD32(R(15)+12);
  { c->pr=0x8c0762ecu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(0)=0x8u;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  fp_ld(c,4,R(0)+R(15));
  R(15)+=0x10u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c076180(c); return; } }
}
void f_8c0762fa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(12)=R(4);
  R(0)=0x68u;
  ST32(R(15),R(6));
  R(6)=R(15);
  R(13)=LD32(R(12)+12);
  R(7)=R(15);
  R(3)=0x8c0470beu;
  R(14)=R(5);
  R(13)=LD32(R(13)+R(0));
  R(5)=R(14);
  R(7)+=0x1cu;
  R(6)+=0x28u;
  { c->pr=0x8c076320u; R(4)=LD32(R(12)+8); f_8c0470be(c); }
  R(4)=LD32(R(12)+12);
  R(0)=0x78u;
  R(2)=0xffu;
  R(4)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(2);
  if(c->t) goto L8c076384;
  R(5)=LD32(R(13)+4);
  R(0)=0xa0u;
  R(5)=LD32(R(5));
  R(13)=LD32(R(5)+R(0));
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c076380; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(13);
  { R(5)=LD32(R(5)); goto L8c076382; }
L8c076380:;
  R(5)=0x0u;
L8c076382:;
  R(13)=R(5);
L8c076384:;
  R(2)=0x8c015e64u;
  R(7)=R(15);
  R(4)=LD32(R(13)+36);
  R(5)=R(15);
  R(7)+=0x4u;
  R(6)=R(14);
  { c->pr=0x8c076394u; R(5)+=0x10u; f_8c015e64(c); }
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0763a4;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0763a4u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
L8c0763a4:;
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_unary(c,0,3);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(14));
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0763c6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(12)=R(6);
  R(6)=R(5);
  R(13)=R(5);
  R(3)=0x8c05e612u;
  R(5)=R(4);
  R(14)=R(4);
  R(4)=R(15);
  { c->pr=0x8c0763e4u; R(4)+=0x18u; f_8c05e612(c); }
  R(2)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(13);
  R(5)=R(12);
  { c->pr=0x8c0763f0u; R(4)+=0x24u; f_8c05e612(c); }
  R(0)=0x24u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,15,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c076416;
  R(0)=0x8c07650cu;
  { fp_ld(c,0,R(0)); goto L8c0764dc; }
L8c076416:;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c076422u; R(4)+=0x24u; f_8c05e55c(c); }
  fp_mov(c,4,0);
  fp_arith(c,3,4,15);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c076484;
  R(0)=0x4u;
  fp_ld(c,4,R(13));
  fp_ld(c,0,R(0)+R(14));
  fp_ld(c,5,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(14));
  fp_arith(c,1,5,0);
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,1,4,2);
  fp_ld(c,6,R(0)+R(13));
  R(0)=0x4u;
  fp_arith(c,1,6,1);
  fp_mov(c,2,5);
  fp_arith(c,2,2,5);
  fp_mov(c,0,4);
  fp_ld(c,5,R(12));
  fp_fmac(c,2,4);
  fp_mov(c,0,6);
  fp_fmac(c,2,6);
  fp_ld(c,0,R(0)+R(14));
  fp_ld(c,6,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,1,6,0);
  fp_unary(c,2,2);
  fp_mov(c,4,2);
  fp_ld(c,2,R(14));
  fp_arith(c,1,5,2);
  fp_mov(c,2,6);
  fp_arith(c,2,2,6);
  fp_mov(c,0,5);
  fp_fmac(c,2,5);
  fp_ld(c,7,R(0)+R(12));
  fp_arith(c,1,7,1);
  fp_mov(c,0,7);
  fp_fmac(c,2,7);
  fp_unary(c,2,2);
  fp_mov(c,5,2);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c076480;
  { fp_mov(c,0,5); goto L8c0764dc; }
L8c076480:;
  { fp_mov(c,0,4); goto L8c0764dc; }
L8c076484:;
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,2,3);
  R(5)+=0xcu;
  R(6)=R(13);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0764b2u; R(4)=R(15); sh4_call(c,tg); }
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(15));
  fp_arith(c,1,6,0);
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,5,3);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_arith(c,1,4,2);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,0,3);
L8c0764dc:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c076520(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff9cu;
  R(3)=0x8c09e064u;
  R(12)=0x0u;
  fp_mov(c,14,4);
  R(11)=R(7);
  R(10)=R(4);
  R(9)=R(5);
  ST32(R(15),R(6));
  { c->pr=0x8c076548u; R(4)=R(10); f_8c09e064(c); }
  R(5)=LD32(R(15));
  R(6)=R(10);
  R(13)=0x8c05e612u;
  R(4)=R(15);
  R(6)+=0x20u;
  { c->pr=0x8c076556u; R(4)+=0x1cu; f_8c05e612(c); }
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(14)=0x8c05e6eau;
  { c->pr=0x8c076560u; R(4)+=0x4u; f_8c05e6ea(c); }
  R(5)=R(10);
  R(6)=R(10);
  R(4)=R(15);
  R(5)+=0x50u;
  R(6)+=0x20u;
  { uint32_t tg=R(13); c->pr=0x8c07656eu; R(4)+=0x4cu; sh4_call(c,tg); }
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_mov(c,15,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c0765ca;
  R(5)=R(10);
  R(4)=R(15);
  R(5)+=0x20u;
  R(6)=R(11);
  { uint32_t tg=R(13); c->pr=0x8c07659au; R(4)+=0x1cu; sh4_call(c,tg); }
  R(4)=R(15);
  R(5)=R(11);
  { uint32_t tg=R(14); c->pr=0x8c0765a2u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_mov(c,15,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c0765c8;
  R(5)=R(10);
  { R(5)+=0x20u; goto L8c076754; }
L8c0765c8:;
  R(12)=0x1u;
L8c0765ca:;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c0765d6u; R(4)+=0x1cu; f_8c05e55c(c); }
  fp_mov(c,3,15);
  fp_mov(c,15,0);
  fp_arith(c,3,15,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,15,3);
  { uint32_t k=!c->t; fp_mov(c,4,0); if(k) goto L8c0765e8; }
  { fp_mov(c,2,15); goto L8c0765ec; }
L8c0765e8:;
  fp_mov(c,2,15);
  fp_unary(c,0,2);
L8c0765ec:;
  R(0)=0x8c0766f0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0765f8;
  {  goto L8c0767c8; }
L8c0765f8:;
  R(2)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c076608;
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x4u;
  { R(5)+=0x20u; goto L8c076610; }
L8c076608:;
  R(5)=R(15);
  R(6)=R(10);
  R(5)+=0x4u;
  R(6)+=0x20u;
L8c076610:;
  R(4)=R(15);
  { uint32_t tg=R(13); c->pr=0x8c076616u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(0)=0x1cu;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(6)=R(15);
  R(5)=R(15);
  fp_arith(c,2,2,3);
  R(5)+=0x4cu;
  R(4)=R(15);
  R(6)+=0x28u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(13); c->pr=0x8c076648u; R(4)+=0x34u; sh4_call(c,tg); }
  R(5)=R(10);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x28u;
  R(5)+=0x20u;
  { c->pr=0x8c076658u; R(4)+=0x10u; f_8c05e5f4(c); }
  R(0)=0x34u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,5,14);
  fp_arith(c,2,5,14);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,0,R(0)+R(10));
  R(0)=0x14u;
  fp_ld(c,7,R(0)+R(15));
  fp_arith(c,1,6,3);
  R(0)=0x28u;
  fp_arith(c,1,7,0);
  fp_ld(c,2,R(0)+R(10));
  R(0)=0x18u;
  fp_mov(c,0,6);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_fmac(c,3,6);
  fp_ld(c,8,R(0)+R(15));
  fp_cmp(c,1,4,5);
  fp_arith(c,1,8,2);
  fp_mov(c,0,8);
  fp_fmac(c,3,8);
  fp_unary(c,2,3);
  { uint32_t k=c->t; fp_mov(c,14,3); if(k) goto L8c07670a; }
  fp_arith(c,1,5,4);
  fp_unary(c,2,5);
  fp_mov(c,13,5);
  fp_cmp(c,1,13,14);
  if(!c->t) goto L8c0766c8;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,15,3);
  { uint32_t k=c->t; fp_arith(c,1,13,14); if(k) goto L8c0766d4; }
  R(12)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0766c4;
  {  goto L8c0767c8; }
L8c0766c4:;
  {  goto L8c076724; }
L8c0766c8:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,15);
  fp_mov(c,3,13);
  fp_mov(c,13,14);
  { uint32_t k=!c->t; fp_arith(c,1,13,3); if(k) goto L8c076700; }
L8c0766d4:;
  R(4)=R(15);
  R(5)=R(11);
  { uint32_t tg=R(14); c->pr=0x8c0766dcu; R(4)+=0x4u; sh4_call(c,tg); }
  {  goto L8c076724; }
L8c076700:;
  R(12)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0767c8;
  {  goto L8c076724; }
L8c07670a:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c07671c;
  R(4)=R(15);
  R(5)=R(11);
  { uint32_t tg=R(14); c->pr=0x8c076718u; R(4)+=0x4u; sh4_call(c,tg); }
  {  goto L8c076722; }
L8c07671c:;
  R(12)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0767c8;
L8c076722:;
  fp_mov(c,13,14);
L8c076724:;
  R(5)=R(15);
  R(6)=R(10);
  R(4)=R(15);
  R(5)+=0x4u;
  R(6)+=0x20u;
  { uint32_t tg=R(13); c->pr=0x8c076732u; R(4)+=0x58u; sh4_call(c,tg); }
  R(0)=0x58u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c07675c;
  R(5)=R(15);
  R(5)+=0x4u;
L8c076754:;
  { uint32_t tg=R(14); c->pr=0x8c076758u; R(4)=R(9); sh4_call(c,tg); }
  {  goto L8c0767c8; }
L8c07675c:;
  R(0)=0x58u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,13);
  fp_arith(c,2,2,3);
  R(0)=0x40u;
  R(6)=R(15);
  R(5)=R(10);
  R(3)=0x8c05e5f4u;
  R(5)+=0x20u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_mov(c,2,13);
  R(6)+=0x40u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0767c8u; R(4)=R(9); sh4_call(c,tg); }
L8c0767c8:;
  R(15)+=0x64u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c076700(SH4Ctx *c) {
  R(12)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0767c8;
  {  goto L8c076724; }
L8c076724:;
  R(5)=R(15);
  R(6)=R(10);
  R(4)=R(15);
  R(5)+=0x4u;
  R(6)+=0x20u;
  { uint32_t tg=R(13); c->pr=0x8c076732u; R(4)+=0x58u; sh4_call(c,tg); }
  R(0)=0x58u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c07675c;
  R(5)=R(15);
  R(5)+=0x4u;
  { uint32_t tg=R(14); c->pr=0x8c076758u; R(4)=R(9); sh4_call(c,tg); }
  {  goto L8c0767c8; }
L8c07675c:;
  R(0)=0x58u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,13);
  fp_arith(c,2,2,3);
  R(0)=0x40u;
  R(6)=R(15);
  R(5)=R(10);
  R(3)=0x8c05e5f4u;
  R(5)+=0x20u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_mov(c,2,13);
  R(6)+=0x40u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_arith(c,2,13,3);
  fp_st(c,13,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0767c8u; R(4)=R(9); sh4_call(c,tg); }
L8c0767c8:;
  R(15)+=0x64u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c076800(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(6)=0xd0u;
  R(14)=R(5);
  R(3)=0x8c0686b8u;
  R(13)=R(4);
  R(5)=0x0u;
  { c->pr=0x8c076818u; R(4)=R(14); f_8c0686b8(c); }
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(13)+4);
  { c->pr=0x8c076820u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  R(2)=R(0);
  ST32(R(14)+4,R(0));
  R(0)=0x170u;
  R(5)=R(14);
  R(12)=0x8c0163ceu;
  R(5)+=0x20u;
  R(3)=LD32(R(2)+R(0));
  ST32(R(14),R(3));
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2)+16);
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2)+16);
  R(1)=LD32(R(3)+12);
  ST32(R(14)+12,R(1));
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+16);
  R(1)=LD32(R(2)+4);
  ST32(R(14)+16,R(1));
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+16);
  R(1)=LD32(R(2));
  ST32(R(14)+20,R(1));
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3)+16);
  R(1)=LD32(R(2)+8);
  ST32(R(14)+24,R(1));
  ST32(R(14)+28,R(13));
  { uint32_t tg=R(12); c->pr=0x8c07685cu; R(4)=LD32(R(13)+36); sh4_call(c,tg); }
  R(3)=LD32(R(14)+12);
  R(0)=0x68u;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c076946;
  R(5)=0x84u;
  R(5)+=R(14);
  { c->pr=0x8c07686eu; R(4)=R(14); f_8c075da0(c); }
  R(1)=0x80u;
  R(1)+=R(14);
  ST8(R(1),R(0));
  R(0)=0x68u;
  R(4)=LD32(R(14)+12);
  { c->pr=0x8c07687cu; R(4)=LD32(R(4)+R(0)); f_8c075ef4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c076898;
  R(0)=0x80u;
  R(5)=0x84u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)+=0x10u;
  R(4)=0x94u;
  R(5)+=R(14);
  ST8(R(14)+R(0),R(3));
  R(3)=0x8c05e6eau;
  { c->pr=0x8c076894u; R(4)+=R(14); f_8c05e6ea(c); }
  {  goto L8c076946; }
L8c076898:;
  R(4)=LD32(R(14)+12);
  R(0)=0x68u;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(4)+R(0));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0768a6u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  R(4)=0x318u;
  R(5)=R(15);
  R(13)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c0768b0u; R(4)+=R(13); sh4_call(c,tg); }
  R(5)=0x94u;
  R(4)=R(13);
  R(5)+=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0768bau; R(4)+=0x78u; sh4_call(c,tg); }
  R(6)=0x94u;
  R(5)=R(15);
  R(4)=0x94u;
  R(2)=0x8c05e612u;
  R(6)+=R(14);
  { c->pr=0x8c0768c8u; R(4)+=R(14); f_8c05e612(c); }
  R(0)=0x94u;
  R(3)=0x8c2cff50u;
  fp_ld(c,4,R(0)+R(14));
  R(0)+=0x4u;
  fp_ld(c,5,R(0)+R(14));
  R(0)+=0x4u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(14));
  fp_ld(c,2,R(3));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c076940;
  R(0)=0x90u;
  R(1)=0x1u;
  { ST8(R(14)+R(0),R(1)); goto L8c076946; }
L8c076940:;
  R(0)=0x90u;
  R(2)=0x0u;
  ST8(R(14)+R(0),R(2));
L8c076946:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c076980(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+28);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c07699a;
  {  goto L8c076bd4; }
L8c07699a:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c0769a0u;  f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(5)=R(0); if(k) goto L8c0769aa; }
  {  goto L8c076bd4; }
L8c0769aa:;
  R(4)=0x8c2cff2cu;
  R(0)=0x74u;
  R(13)=0x22cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x64u;
  R(13)+=R(5);
  R(5)=0xa0u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x74u;
  R(12)=0x8c05e6eau;
  R(4)=R(13);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x30u;
  R(3)=LD32(R(14)+12);
  R(5)+=R(14);
  fp_ld(c,3,R(0)+R(3));
  fp_st(c,3,R(13));
  { c->pr=0x8c0769d4u; R(4)+=0x4u; f_8c05e6ea(c); }
  R(5)=0xacu;
  R(4)=R(13);
  R(5)+=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0769deu; R(4)+=0x10u; sh4_call(c,tg); }
  R(0)=0xc4u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x38u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8c076b1cu;
  R(3)=LD32(R(14)+12);
  fp_ld(c,4,R(0));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(3));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0769fa;
  R(2)=LD32(R(14)+12);
  fp_st(c,4,R(0)+R(2));
L8c0769fa:;
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(3));
  fp_st(c,3,R(0)+R(13));
  R(0)=0x40u;
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(3));
  fp_st(c,3,R(0)+R(13));
  R(0)=0xc8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(13));
  R(3)=LD32(R(14)+12);
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c076a20;
  R(2)=LD32(R(14)+12);
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(2));
L8c076a20:;
  R(3)=LD32(R(14)+12);
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(13));
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(13));
  R(0)+=0x7cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x48u;
  R(3)=LD32(R(14)+12);
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c076a4c;
  R(2)=LD32(R(14)+12);
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(2));
L8c076a4c:;
  R(3)=LD32(R(14)+12);
  R(0)=0x54u;
  R(5)=R(14);
  R(4)=R(13);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x20u;
  R(5)+=0x50u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x58u;
  R(3)=LD32(R(14)+12);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(13));
  { uint32_t tg=R(12); c->pr=0x8c076a6au; R(4)+=0x58u; sh4_call(c,tg); }
  R(5)=0xb8u;
  R(4)=R(13);
  R(5)+=R(14);
  { uint32_t tg=R(12); c->pr=0x8c076a74u; R(4)+=0x68u; sh4_call(c,tg); }
  R(0)=LD32(R(14)+8);
  R(1)=0x74u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c076aa2; }
  R(3)=LD32(R(14)+12);
  R(0)=0x70u;
  R(2)=0x1u;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(1)=0x4u;
  R(3)=LD32(R(14)+12);
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(2)|=R(1);
  ST16(R(3)+R(0),R(2));
  R(2)=0x10u;
  R(3)=LD32(R(14)+12);
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
L8c076aa2:;
  R(3)=LD32(R(14)+12);
  R(0)=0x68u;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c076ab8;
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x60u;
  fp_st(c,4,R(0)+R(13));
L8c076ab8:;
  R(3)=LD32(R(14)+12);
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(3)=0x2000u;
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c076ade;
  R(2)=LD32(R(14)+12);
  R(0)=0x70u;
  R(1)=0x4u;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(3)|=R(1);
  ST16(R(2)+R(0),R(3));
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x60u;
  fp_st(c,4,R(0)+R(13));
L8c076ade:;
  R(0)=LD32(R(14)+12);
  {  goto L8c076b20; }
L8c076b20:;
  R(1)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x80)==0;
  { uint32_t k=c->t; c->fr[15]=0x3F800000u; if(k) goto L8c076b38; }
  R(3)=LD32(R(14)+12);
  R(0)=0x70u;
  R(2)=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
L8c076b38:;
  R(0)=LD32(R(14)+12);
  R(1)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c076b54;
  R(3)=LD32(R(14)+12);
  R(0)=0x70u;
  R(2)=0x2u;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(0)=0x64u;
  fp_st(c,15,R(0)+R(13));
L8c076b54:;
  R(0)=LD32(R(14)+12);
  R(1)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c076b70;
  R(3)=LD32(R(14)+12);
  R(0)=0x70u;
  R(2)=0x8u;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(0)=0x64u;
  fp_st(c,15,R(0)+R(13));
L8c076b70:;
  R(0)=LD32(R(14)+12);
  R(1)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c076b8c;
  R(3)=LD32(R(14)+12);
  R(0)=0x70u;
  R(2)=0x20u;
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(1)|=R(2);
  ST16(R(3)+R(0),R(1));
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(13));
L8c076b8c:;
  R(3)=LD32(R(14)+12);
  R(0)=0x70u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(0)=0x56u;
  ST16(R(13)+R(0),R(2));
  R(0)=0x68u;
  R(4)=LD32(R(14)+12);
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c076bc4;
  R(0)=0x70u;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c076bc4;
  R(4)=LD32(R(14)+12);
  R(0)=0x68u;
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+R(0));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c076bb8u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=LD32(R(14)+28);
  R(5)=R(0);
  R(3)=0x8c055c1eu;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c076bc4u; R(4)=LD32(R(4)+32); f_8c055c1e(c); }
L8c076bc4:;
  R(0)=0x80u;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c076bd4;
  R(0)=0x74u;
  fp_st(c,15,R(0)+R(13));
  R(0)=0x64u;
  fp_st(c,15,R(0)+R(13));
L8c076bd4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c076c00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff2cu;
  R(15)+=R(0);
  ST32(R(15),R(4));
  R(3)=0x8c046e40u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c076c10u; R(4)=LD32(R(4)+16); f_8c046e40(c); }
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c076c18u; R(4)=LD32(R(15)); f_8c076800(c); }
  R(3)=LD32(R(15)+16);
  R(0)=0x72u;
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  R(3)=0x4000u;
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c076c2a;
  { R(2)=0x1u; goto L8c076c2c; }
L8c076c2a:;
  R(2)=0x0u;
L8c076c2c:;
  R(1)=0x8c2e7628u;
  ST8(R(1),R(2));
  R(2)=0x72u;
  R(0)=LD32(R(15)+16);
  R(0)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c076c40;
  { R(3)=0x1u; goto L8c076c42; }
L8c076c40:;
  R(3)=0x0u;
L8c076c42:;
  R(1)=0x8c2e7629u;
  R(2)=0x1u;
  R(0)=0x8c0cba6eu;
  R(4)=R(15);
  ST8(R(1),R(3));
  R(3)=0x8c09e064u;
  ST8(R(0),R(2));
  { c->pr=0x8c076c54u; R(4)+=0x4u; f_8c09e064(c); }
  R(2)=0x8c09e160u;
  R(4)=R(15);
  { c->pr=0x8c076c5cu; R(4)+=0x4u; f_8c09e160(c); }
  R(3)=0x8c09e53eu;
  R(4)=R(15);
  { c->pr=0x8c076c64u; R(4)+=0x4u; f_8c09e53e(c); }
  R(2)=0x8c09ea62u;
  R(4)=R(15);
  { c->pr=0x8c076c6cu; R(4)+=0x4u; f_8c09ea62(c); }
  R(3)=LD32(R(15)+20);
  R(0)=0x68u;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c076c86;
  R(3)=0x8c0a0b96u;
  R(4)=R(15);
  { c->pr=0x8c076c7eu; R(4)+=0x4u; f_8c0a0b96(c); }
  R(2)=0x8c0a0c20u;
  R(4)=R(15);
  { c->pr=0x8c076c86u; R(4)+=0x4u; f_8c0a0c20(c); }
L8c076c86:;
  R(1)=0xd4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c076d08(SH4Ctx *c) {
  R(0)=0x0u;
  R(6)=0x4u;
L8c076d0c:;
  c->t=R(6)>R(5);
  if(c->t) goto L8c076d20;
  ST32(R(4),R(0));
  R(4)+=R(6);
  { R(5)-=R(6); goto L8c076d0c; }
L8c076d20:;
  c->t=R(5)==R(0);
  if(c->t) goto L8c076d2c;
  ST8(R(4),R(0));
  R(4)+=0x1u;
  { R(5)-=1;c->t=R(5)==0; goto L8c076d20; }
L8c076d2c:;
  {  return; }
}
void f_8c076da0(SH4Ctx *c) {
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c076dec;
  fp_mov(c,1,4);
  fp_arith(c,2,1,6);
  R(0)=0x8c076e60u;
  fp_mov(c,2,5);
  fp_ld(c,0,R(0));
  fp_arith(c,2,2,5);
  fp_mov(c,7,4);
  fp_arith(c,2,1,0);
  fp_mov(c,6,2);
  fp_arith(c,1,6,1);
  fp_cmp(c,1,6,3);
  { uint32_t k=!c->t; fp_arith(c,0,7,4); if(k) goto L8c076dda; }
  fp_unary(c,2,6);
  c->fr[4]=0x3F800000u;
  fp_arith(c,3,4,7);
  fp_unary(c,0,5);
  fp_mov(c,3,5);
  fp_arith(c,1,5,6);
  fp_arith(c,0,3,6);
  fp_arith(c,2,5,4);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  fp_st(c,5,R(5));
  { R(0)=0x2u; return; }
L8c076dda:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,6);
  if(c->t) goto L8c076dfa;
  fp_cmp(c,0,6,3);
  if(!c->t) goto L8c076dfa;
  fp_arith(c,3,5,7);
  fp_unary(c,0,5);
  { fp_st(c,5,R(4)); goto L8c076df6; }
L8c076dec:;
  fp_cmp(c,0,5,3);
  if(c->t) goto L8c076dfa;
  fp_arith(c,3,6,5);
  fp_unary(c,0,6);
  fp_st(c,6,R(4));
L8c076df6:;
  { R(0)=0x1u; return; }
L8c076dfa:;
  R(0)=0x0u;
  {  return; }
}
void f_8c076e00(SH4Ctx *c) {
  fp_ld(c,5,R(6));
  fp_ld(c,4,R(4));
  fp_cmp(c,1,4,5);
  { uint32_t k=!c->t; fp_ld(c,6,R(5)); if(k) goto L8c076e0e; }
  { fp_mov(c,3,4); goto L8c076e10; }
L8c076e0e:;
  fp_mov(c,3,5);
L8c076e10:;
  fp_ld(c,7,R(7));
  fp_cmp(c,1,7,6);
  if(!c->t) goto L8c076e1a;
  { fp_mov(c,2,6); goto L8c076e1c; }
L8c076e1a:;
  fp_mov(c,2,7);
L8c076e1c:;
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c076ea0;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,2,R(0)+R(6));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c076e30;
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(4)); goto L8c076e34; }
L8c076e30:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(6));
L8c076e34:;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(5));
  fp_ld(c,1,R(0)+R(7));
  fp_cmp(c,1,1,2);
  if(!c->t) goto L8c076e44;
  R(0)=0x4u;
  { fp_ld(c,2,R(0)+R(5)); goto L8c076e48; }
L8c076e44:;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(7));
L8c076e48:;
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c076ea0;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,2,R(0)+R(6));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c076e80;
  R(0)=0x8u;
  { fp_ld(c,3,R(0)+R(4)); goto L8c076e84; }
L8c076e80:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(6));
L8c076e84:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(5));
  fp_ld(c,1,R(0)+R(7));
  fp_cmp(c,1,1,2);
  if(!c->t) goto L8c076e94;
  R(0)=0x8u;
  { fp_ld(c,2,R(0)+R(5)); goto L8c076e98; }
L8c076e94:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(7));
L8c076e98:;
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c076ea0;
  { R(0)=0x1u; return; }
L8c076ea0:;
  R(0)=0x0u;
  {  return; }
}
void f_8c076ea6(SH4Ctx *c) {
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(5));
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; c->fr[5]=0x00000000u; if(k) goto L8c076ec0; }
  fp_ld(c,6,R(4));
  fp_ld(c,3,R(5));
  fp_mov(c,2,5);
  fp_arith(c,1,6,3);
  fp_mov(c,0,6);
  fp_fmac(c,2,6);
  { fp_mov(c,5,2); goto L8c076ed6; }
L8c076ec0:;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c076ed6;
  fp_ld(c,6,R(4));
  fp_ld(c,3,R(6));
  fp_mov(c,2,5);
  fp_arith(c,1,6,3);
  fp_mov(c,0,6);
  fp_fmac(c,2,6);
  fp_mov(c,5,2);
L8c076ed6:;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c076ef0;
  fp_ld(c,6,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,1,6,3);
  fp_mov(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  { fp_mov(c,5,3); goto L8c076f06; }
L8c076ef0:;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c076f06;
  fp_ld(c,6,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,1,6,3);
  fp_mov(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_mov(c,5,3);
L8c076f06:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,2,R(0)+R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c076f20;
  fp_ld(c,6,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,1,6,3);
  fp_mov(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  { fp_mov(c,5,3); goto L8c076f36; }
L8c076f20:;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c076f36;
  fp_ld(c,6,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,1,6,3);
  fp_mov(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_mov(c,5,3);
L8c076f36:;
  fp_mov(c,2,4);
  fp_arith(c,2,2,4);
  fp_cmp(c,1,2,5);
  { R(0)=c->t; return; }
}
void f_8c076f40(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,3,R(5));
  fp_ld(c,0,R(0)+R(5));
  fp_ld(c,7,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,6,R(4));
  fp_arith(c,1,7,0);
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,1,6,3);
  fp_ld(c,8,R(0)+R(4));
  fp_mov(c,9,4);
  fp_arith(c,0,9,5);
  fp_arith(c,1,8,2);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_mov(c,0,6);
  fp_mov(c,2,9);
  fp_arith(c,2,2,9);
  fp_fmac(c,3,6);
  fp_mov(c,0,8);
  fp_fmac(c,3,8);
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  { R(0)^=0x1u; return; }
}
void f_8c076f72(SH4Ctx *c) {
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(5));
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c076f80; }
  { R(7)=0x1u; goto L8c076f8a; }
L8c076f80:;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c076f8a;
  R(7)=0x2u;
L8c076f8a:;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c076f9a;
  R(2)=0x4u;
  { R(7)|=R(2); goto L8c076fa6; }
L8c076f9a:;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c076fa6;
  R(2)=0x8u;
  R(7)|=R(2);
L8c076fa6:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c076fb6;
  R(2)=0x10u;
  { R(7)|=R(2); goto L8c076fc2; }
L8c076fb6:;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c076fc2;
  R(2)=0x20u;
  R(7)|=R(2);
L8c076fc2:;
  { R(0)=R(7); return; }
}
void f_8c076fc6(SH4Ctx *c) {
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c076fe8;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(6));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c076fe8;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c076fe8;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c076fec;
L8c076fe8:;
  { R(0)=0x0u; return; }
L8c076fec:;
  R(0)=0x1u;
  {  return; }
}
void f_8c076ff2(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c077016;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c077016;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c077016;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c07701a;
L8c077016:;
  { R(0)=0x0u; return; }
L8c07701a:;
  R(0)=0x1u;
  {  return; }
}
void f_8c077020(SH4Ctx *c) {
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c077042;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(6));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c077042;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c077042;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c077046;
L8c077042:;
  { R(0)=0x0u; return; }
L8c077046:;
  R(0)=0x1u;
  {  return; }
}
void f_8c07704c(SH4Ctx *c) {
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c077080;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(6));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c077080;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c077080;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c077080;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c077080;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c077084;
L8c077080:;
  { R(0)=0x0u; return; }
L8c077084:;
  R(0)=0x1u;
  {  return; }
}
void f_8c07708a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)+=0xffffffd0u;
  fp_ld(c,2,R(7));
  R(0)=0x24u;
  fp_ld(c,3,R(4));
  R(1)=LD32(R(15)+60);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(1));
  fp_ld(c,3,R(4));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(1));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(1));
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,2,3);
  R(0)=0x20u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(7));
  fp_ld(c,3,R(6));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(7));
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(1));
  fp_ld(c,3,R(5));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(15));
  fp_ld(c,2,R(0)+R(1));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  fp_ld(c,2,R(0)+R(1));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,0,1,3);
  fp_cmp(c,1,2,1);
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c077136; }
  R(14)=0x1u;
L8c077136:;
  R(0)=0x24u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,9,R(0)+R(15));
  fp_mov(c,2,1);
  fp_mov(c,3,0);
  fp_arith(c,0,2,9);
  fp_arith(c,0,3,7);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c077156;
  R(2)=0x2u;
  R(14)|=R(2);
L8c077156:;
  R(0)=0x18u;
  fp_ld(c,6,R(15));
  fp_ld(c,10,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,13,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,14,R(0)+R(15));
  fp_mov(c,2,6);
  fp_mov(c,3,10);
  fp_arith(c,0,2,14);
  fp_arith(c,0,3,13);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_mov(c,3,10); if(k) goto L8c077176; }
  R(2)=0x4u;
  R(14)|=R(2);
L8c077176:;
  fp_mov(c,2,6);
  fp_arith(c,0,2,9);
  fp_arith(c,0,3,7);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c077184;
  R(2)=0x8u;
  R(14)|=R(2);
L8c077184:;
  R(0)=0x2cu;
  fp_mov(c,2,1);
  fp_ld(c,11,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,8,R(0)+R(15));
  fp_mov(c,3,0);
  fp_arith(c,0,3,11);
  fp_arith(c,0,2,8);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07719c;
  R(2)=0x10u;
  R(14)|=R(2);
L8c07719c:;
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  fp_arith(c,0,0,4);
  fp_arith(c,0,1,5);
  fp_cmp(c,1,0,1);
  { uint32_t k=!c->t; fp_mov(c,3,10); if(k) goto L8c0771b2; }
  R(2)=0x20u;
  R(14)|=R(2);
L8c0771b2:;
  fp_mov(c,2,6);
  fp_arith(c,0,2,8);
  fp_arith(c,0,3,11);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_arith(c,0,10,4); if(k) goto L8c0771c2; }
  R(2)=0x40u;
  R(14)|=R(2);
L8c0771c2:;
  fp_arith(c,0,6,5);
  fp_cmp(c,1,10,6);
  { uint32_t k=!c->t; fp_mov(c,3,13); if(k) goto L8c0771ce; }
  R(2)=0x80u;
  R(14)|=R(2);
L8c0771ce:;
  fp_mov(c,2,14);
  fp_arith(c,0,2,8);
  fp_arith(c,0,3,11);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_arith(c,0,13,4); if(k) goto L8c0771de; }
  R(2)=0x100u;
  R(14)|=R(2);
L8c0771de:;
  fp_arith(c,0,14,5);
  fp_cmp(c,1,13,14);
  { uint32_t k=!c->t; fp_mov(c,3,7); if(k) goto L8c077222; }
  R(2)=0x200u;
  {  goto L8c077220; }
L8c077220:;
  R(14)|=R(2);
L8c077222:;
  fp_mov(c,2,9);
  fp_arith(c,0,2,8);
  fp_arith(c,0,3,11);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_arith(c,0,7,4); if(k) goto L8c077232; }
  R(2)=0x400u;
  R(14)|=R(2);
L8c077232:;
  fp_arith(c,0,9,5);
  fp_cmp(c,1,7,9);
  if(!c->t) goto L8c07723c;
  R(2)=0x800u;
  R(14)|=R(2);
L8c07723c:;
  R(0)=R(14);
  R(15)+=0x30u;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077220(SH4Ctx *c) {
  R(14)|=R(2);
  fp_mov(c,2,9);
  fp_arith(c,0,2,8);
  fp_arith(c,0,3,11);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_arith(c,0,7,4); if(k) goto L8c077232; }
  R(2)=0x400u;
  R(14)|=R(2);
L8c077232:;
  fp_arith(c,0,9,5);
  fp_cmp(c,1,7,9);
  if(!c->t) goto L8c07723c;
  R(2)=0x800u;
  R(14)|=R(2);
L8c07723c:;
  R(0)=R(14);
  R(15)+=0x30u;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077280(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x1u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(6);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(7);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(9)=LD32(R(15)+32);
  R(11)=LD32(R(15)+28);
  c->t=(R(3)&R(9))==0;
  { uint32_t k=c->t; R(14)=LD32(R(15)+36); if(k) goto L8c0772d8; }
  fp_ld(c,5,R(10));
  R(0)=0x4u;
  fp_ld(c,3,R(12));
  R(6)=R(11);
  fp_mov(c,2,5);
  R(5)=R(10);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(13));
  fp_st(c,5,R(14));
  fp_mov(c,4,2);
  fp_arith(c,3,4,3);
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c0772ceu; R(4)=R(14); f_8c076ff2(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0772d8;
  {  goto L8c0773fe; }
L8c0772d8:;
  R(3)=0x2u;
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c077312;
  fp_ld(c,5,R(11));
  R(0)=0x4u;
  fp_ld(c,3,R(12));
  R(6)=R(11);
  fp_mov(c,2,5);
  R(5)=R(10);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(13));
  fp_st(c,5,R(14));
  fp_mov(c,4,2);
  fp_arith(c,3,4,3);
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c07730cu; R(4)=R(14); f_8c076ff2(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0773fe;
L8c077312:;
  R(3)=0x4u;
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c07734c;
  R(0)=0x4u;
  R(5)=R(10);
  fp_ld(c,2,R(0)+R(10));
  R(6)=R(11);
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,4,2);
  fp_arith(c,3,4,3);
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(12));
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c077346u; R(4)=R(14); f_8c077020(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0773fe;
L8c07734c:;
  R(3)=0x8u;
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c077386;
  R(0)=0x4u;
  R(5)=R(10);
  fp_ld(c,2,R(0)+R(11));
  R(6)=R(11);
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,4,2);
  fp_arith(c,3,4,3);
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(12));
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(11));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c077380u; R(4)=R(14); f_8c077020(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0773fe;
L8c077386:;
  R(3)=0x10u;
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c0773c2;
  R(0)=0x8u;
  R(5)=R(10);
  fp_ld(c,2,R(0)+R(10));
  R(6)=R(11);
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_mov(c,4,2);
  fp_arith(c,3,4,3);
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(12));
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(10));
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c0773bcu; R(4)=R(14); f_8c076fc6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0773fe;
L8c0773c2:;
  R(3)=0x20u;
  c->t=(R(9)&R(3))==0;
  if(c->t) goto L8c077402;
  R(0)=0x8u;
  R(5)=R(10);
  fp_ld(c,2,R(0)+R(11));
  R(6)=R(11);
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_mov(c,4,2);
  fp_arith(c,3,4,3);
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(12));
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c0773f8u; R(4)=R(14); f_8c076fc6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c077402;
L8c0773fe:;
  { R(0)=0x1u; goto L8c077404; }
L8c077402:;
  R(0)=0x0u;
L8c077404:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077414(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  R(11)=R(6);
  R(10)=LD32(R(15)+36);
  R(5)=R(7);
  R(14)=LD32(R(15)+44);
  R(9)=R(7);
  R(12)=LD32(R(15)+40);
  R(6)=R(10);
  R(13)=R(4);
  { c->pr=0x8c07743cu; R(4)=R(13); f_8c076f72(c); }
  R(8)=R(0);
  c->t=(R(8)&R(8))==0;
  if(!c->t) goto L8c077446;
  {  goto L8c077614; }
L8c077446:;
  R(5)=R(9);
  R(6)=R(10);
  { c->pr=0x8c07744eu; R(4)=LD32(R(15)); f_8c076f72(c); }
  R(4)=R(0);
  c->t=(R(4)&R(8))==0;
  if(c->t) goto L8c077458;
  {  goto L8c077614; }
L8c077458:;
  R(3)=0x1u;
  c->t=(R(3)&R(8))==0;
  if(c->t) goto L8c0774c0;
  fp_ld(c,2,R(9));
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  R(5)=R(9);
  R(6)=R(10);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(11));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(9));
  fp_st(c,2,R(14));
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,0,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,0,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c07748eu; R(4)=R(14); f_8c076ff2(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0774c0;
  R(5)=0x8c0cbab0u;
  {  goto L8c07760a; }
L8c0774c0:;
  R(2)=0x2u;
  c->t=(R(2)&R(8))==0;
  if(c->t) goto L8c077502;
  fp_ld(c,2,R(10));
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  R(5)=R(9);
  R(6)=R(10);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(11));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(10));
  fp_st(c,2,R(14));
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,0,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,0,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c0774f6u; R(4)=R(14); f_8c076ff2(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c077502;
  R(5)=0x8c0cbabcu;
  {  goto L8c07760a; }
L8c077502:;
  R(2)=0x4u;
  c->t=(R(2)&R(8))==0;
  if(c->t) goto L8c077544;
  R(0)=0x4u;
  R(5)=R(9);
  fp_ld(c,2,R(0)+R(9));
  R(6)=R(10);
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(11));
  fp_arith(c,3,2,3);
  fp_mov(c,0,2);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(9));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,0,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c077538u; R(4)=R(14); f_8c077020(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c077544;
  R(5)=0x8c0cbac8u;
  {  goto L8c07760a; }
L8c077544:;
  R(2)=0x8u;
  c->t=(R(2)&R(8))==0;
  if(c->t) goto L8c077586;
  R(0)=0x4u;
  R(5)=R(9);
  fp_ld(c,2,R(0)+R(10));
  R(6)=R(10);
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(11));
  fp_arith(c,3,2,3);
  fp_mov(c,0,2);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,0,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c07757au; R(4)=R(14); f_8c077020(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c077586;
  R(5)=0x8c0cbad4u;
  {  goto L8c07760a; }
L8c077586:;
  R(2)=0x10u;
  c->t=(R(2)&R(8))==0;
  if(c->t) goto L8c0775ca;
  R(0)=0x8u;
  R(5)=R(9);
  fp_ld(c,2,R(0)+R(9));
  R(6)=R(10);
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x4u;
  fp_arith(c,3,2,3);
  fp_mov(c,0,2);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,0,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(9));
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c0775beu; R(4)=R(14); f_8c076fc6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0775ca;
  R(5)=0x8c0cbae0u;
  {  goto L8c07760a; }
L8c0775ca:;
  R(2)=0x20u;
  c->t=(R(2)&R(8))==0;
  if(c->t) goto L8c077614;
  R(0)=0x8u;
  R(5)=R(9);
  fp_ld(c,2,R(0)+R(10));
  R(6)=R(10);
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x4u;
  fp_arith(c,3,2,3);
  fp_mov(c,0,2);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,0,R(12));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(10));
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c077602u; R(4)=R(14); f_8c076fc6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c077614;
  R(5)=0x8c0cbaecu;
L8c07760a:;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c077610u; R(4)=LD32(R(15)+48); f_8c05e6ea(c); }
  { R(0)=0x1u; goto L8c077616; }
L8c077614:;
  R(0)=0x0u;
L8c077616:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077660(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(int32_t)R(0)==88;
  if(c->t) goto L8c077674;
  c->t=(int32_t)R(0)==89;
  if(c->t) goto L8c077678;
  c->t=(int32_t)R(0)==90;
  if(c->t) goto L8c07767e;
  {  goto L8c077682; }
L8c077674:;
  { R(14)=0x1u; goto L8c07767a; }
L8c077678:;
  R(14)=0x0u;
L8c07767a:;
  { R(1)=0x2u; goto L8c077682; }
L8c07767e:;
  R(1)=0x1u;
  R(14)=0x0u;
L8c077682:;
  R(14)<<=2;
  fp_mov(c,0,4);
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,6,R(0)+R(5));
  R(2)=R(14);
  c->fr[2]=0x00000000u;
  R(14)=R(1);
  fp_fmac(c,3,6);
  fp_cmp(c,1,6,2);
  fp_mov(c,5,3);
  { uint32_t k=!c->t; R(14)<<=2; if(k) goto L8c0776e4; }
  R(0)=R(2);
  fp_ld(c,3,R(0)+R(7));
  fp_cmp(c,1,5,3);
  if(c->t) goto L8c077720;
  R(0)=R(2);
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,5);
  if(c->t) goto L8c077734;
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,5,R(0)+R(5));
  c->fr[2]=0x00000000u;
  fp_mov(c,0,4);
  fp_cmp(c,1,5,2);
  fp_fmac(c,3,5);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c0776d2; }
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(7));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c077720;
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c077734;
  {  goto L8c07772e; }
L8c0776d2:;
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c077720;
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(7));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c077734;
  {  goto L8c07772e; }
L8c0776e4:;
  R(0)=R(2);
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,5);
  if(c->t) goto L8c077720;
  R(0)=R(2);
  fp_ld(c,3,R(0)+R(7));
  fp_cmp(c,1,5,3);
  if(c->t) goto L8c077734;
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,5,R(0)+R(5));
  c->fr[2]=0x00000000u;
  fp_mov(c,0,4);
  fp_cmp(c,1,5,2);
  fp_fmac(c,3,5);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c07771a; }
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(7));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c077720;
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c077734;
  {  goto L8c07772e; }
L8c07771a:;
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c077726;
L8c077720:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c077726:;
  R(0)=R(14);
  fp_ld(c,3,R(0)+R(7));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c077734;
L8c07772e:;
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c077734:;
  R(0)=0x2u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07773a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=LD32(R(15)+48);
  R(10)=R(6);
  R(13)=R(4);
  R(12)=R(5);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=R(7); if(k) goto L8c077760; }
  R(8)=0x0u;
  { R(14)=R(15); goto L8c077764; }
L8c077760:;
  R(14)=LD32(R(15)+48);
  R(8)=0x1u;
L8c077764:;
  R(5)=R(10);
  R(6)=R(11);
  { c->pr=0x8c07776cu; R(4)=R(13); f_8c076f72(c); }
  R(9)=R(0);
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c077776;
  { c->fr[3]=0x00000000u; goto L8c077794; }
L8c077776:;
  R(3)=0x8c05e5f4u;
  R(4)=R(15);
  R(6)=R(12);
  R(5)=R(13);
  { c->pr=0x8c077782u; R(4)+=0x4u; f_8c05e5f4(c); }
  R(4)=R(15);
  R(5)=R(10);
  R(6)=R(11);
  { c->pr=0x8c07778cu; R(4)+=0x4u; f_8c076f72(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c077798;
  c->fr[3]=0x3F800000u;
L8c077794:;
  { fp_st(c,3,R(14)); goto L8c077846; }
L8c077798:;
  R(3)=R(9);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0777a2;
  {  goto L8c07796c; }
L8c0777a2:;
  R(3)=0xfu;
  R(4)|=R(9);
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c0777d2;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c077846;
  R(3)=0x10u;
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c0777be;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  { fp_ld(c,2,R(0)+R(10)); goto L8c0777c4; }
L8c0777be:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(13));
L8c0777c4:;
  fp_arith(c,1,2,3);
  R(0)=0x8u;
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,3,2,3);
  { fp_st(c,2,R(14)); goto L8c077846; }
L8c0777d2:;
  R(3)=0x33u;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c077820;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c077846;
  R(3)=0x4u;
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c0777ec;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  { fp_ld(c,2,R(0)+R(10)); goto L8c0777f2; }
L8c0777ec:;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(13));
L8c0777f2:;
  fp_arith(c,1,2,3);
  R(0)=0x4u;
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,3,2,3);
  { fp_st(c,2,R(14)); goto L8c077846; }
L8c077820:;
  R(3)=0x3cu;
  c->t=(R(4)&R(3))==0;
  if(!c->t) goto L8c07784a;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c077846;
  R(3)=0x1u;
  c->t=(R(3)&R(9))==0;
  if(c->t) goto L8c077838;
  fp_ld(c,3,R(13));
  { fp_ld(c,2,R(10)); goto L8c07783c; }
L8c077838:;
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(13));
L8c07783c:;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(12));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(14));
L8c077846:;
  { R(0)=0x1u; goto L8c07796e; }
L8c07784a:;
  R(3)=0x1u;
  c->t=(R(3)&R(9))==0;
  { uint32_t k=c->t; R(8)=0x2u; if(k) goto L8c07787a; }
  fp_ld(c,2,R(10));
  R(3)=0x58u;
  fp_ld(c,3,R(13));
  R(6)=R(10);
  R(5)=R(12);
  R(7)=R(11);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(12));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(14));
  { c->pr=0x8c077870u; R(4)=R(13); f_8c077660(c); }
  R(4)=R(0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(8);
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c077968; }
L8c07787a:;
  R(2)=R(9);
  c->t=(R(2)&R(8))==0;
  if(c->t) goto L8c0778a8;
  fp_ld(c,2,R(11));
  R(3)=0x58u;
  fp_ld(c,3,R(13));
  R(6)=R(10);
  R(5)=R(12);
  R(7)=R(11);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(12));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(14));
  { c->pr=0x8c07789eu; R(4)=R(13); f_8c077660(c); }
  R(4)=R(0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(8);
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c077968; }
L8c0778a8:;
  R(2)=0x4u;
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c0778d8;
  R(0)=0x4u;
  R(6)=R(10);
  fp_ld(c,2,R(0)+R(10));
  R(3)=0x59u;
  fp_ld(c,3,R(0)+R(13));
  R(5)=R(12);
  R(7)=R(11);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(14));
  { c->pr=0x8c0778ceu; R(4)=R(13); f_8c077660(c); }
  R(4)=R(0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(8);
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c077968; }
L8c0778d8:;
  R(2)=0x8u;
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c077908;
  R(0)=0x4u;
  R(6)=R(10);
  fp_ld(c,2,R(0)+R(11));
  R(3)=0x59u;
  fp_ld(c,3,R(0)+R(13));
  R(5)=R(12);
  R(7)=R(11);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(14));
  { c->pr=0x8c0778feu; R(4)=R(13); f_8c077660(c); }
  R(4)=R(0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(8);
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c077968; }
L8c077908:;
  R(2)=0x10u;
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c077938;
  R(0)=0x8u;
  R(6)=R(10);
  fp_ld(c,2,R(0)+R(10));
  R(3)=0x5au;
  fp_ld(c,3,R(0)+R(13));
  R(5)=R(12);
  R(7)=R(11);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(14));
  { c->pr=0x8c07792eu; R(4)=R(13); f_8c077660(c); }
  R(4)=R(0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(8);
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c077968; }
L8c077938:;
  R(2)=0x20u;
  c->t=(R(2)&R(9))==0;
  if(c->t) goto L8c07796c;
  R(0)=0x8u;
  R(6)=R(10);
  fp_ld(c,2,R(0)+R(11));
  R(3)=0x5au;
  fp_ld(c,3,R(0)+R(13));
  R(5)=R(12);
  R(7)=R(11);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,3,2,3);
  fp_st(c,2,R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(14));
  { c->pr=0x8c07795eu; R(4)=R(13); f_8c077660(c); }
  R(4)=R(0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>=(int32_t)R(8);
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c07796c; }
L8c077968:;
  { R(0)=R(4); goto L8c07796e; }
L8c07796c:;
  R(0)=0x0u;
L8c07796e:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077982(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8u;
  R(1)=LD32(R(15)+4);
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(1));
  fp_cmp(c,1,3,4);
  R(13)=c->t;
  fp_cmp(c,1,3,4);
  R(13)+=0xffffffffu;
  { uint32_t k=!c->t; R(13)=0u-R(13); if(k) goto L8c07799a; }
  fp_unary(c,0,4);
L8c07799a:;
  R(0)=0x8c077b00u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c0779f2;
  fp_ld(c,6,R(6));
  R(0)=0x4u;
  fp_ld(c,5,R(7));
  fp_ld(c,4,R(4));
  fp_ld(c,7,R(5));
  fp_arith(c,1,5,4);
  fp_ld(c,9,R(0)+R(6));
  fp_arith(c,1,7,4);
  fp_ld(c,8,R(0)+R(5));
  fp_arith(c,1,6,4);
  fp_ld(c,4,R(0)+R(4));
  fp_ld(c,10,R(0)+R(7));
  fp_arith(c,1,9,4);
  fp_arith(c,1,8,4);
  fp_mov(c,3,7);
  fp_arith(c,1,10,4);
  fp_arith(c,2,3,9);
  fp_mov(c,2,8);
  fp_arith(c,2,2,6);
  fp_mov(c,4,3);
  fp_arith(c,1,4,2);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  c->t=R(0)==R(13);
  if(c->t) goto L8c0779dc;
  {  goto L8c077ad2; }
L8c0779dc:;
  fp_arith(c,2,6,10);
  fp_arith(c,2,9,5);
  fp_mov(c,4,6);
  fp_arith(c,1,4,9);
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  c->t=R(0)==R(13);
  if(!c->t) goto L8c077ad2;
  { fp_arith(c,2,8,5); goto L8c077a54; }
L8c0779f2:;
  fp_ld(c,4,R(1));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  R(13)=c->t;
  fp_cmp(c,1,3,4);
  R(13)+=0xffffffffu;
  { uint32_t k=!c->t; R(13)=0u-R(13); if(k) goto L8c077a04; }
  fp_unary(c,0,4);
L8c077a04:;
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c077a66;
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(6));
  fp_ld(c,6,R(0)+R(7));
  fp_ld(c,4,R(0)+R(4));
  fp_ld(c,7,R(0)+R(5));
  R(0)=0x8u;
  fp_arith(c,1,6,4);
  fp_ld(c,9,R(0)+R(6));
  fp_arith(c,1,7,4);
  fp_ld(c,8,R(0)+R(5));
  fp_arith(c,1,5,4);
  fp_ld(c,4,R(0)+R(4));
  fp_ld(c,10,R(0)+R(7));
  fp_arith(c,1,9,4);
  fp_arith(c,1,8,4);
  fp_mov(c,3,7);
  fp_arith(c,1,10,4);
  fp_arith(c,2,3,9);
  fp_mov(c,2,8);
  fp_arith(c,2,2,5);
  fp_mov(c,4,3);
  fp_arith(c,1,4,2);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  c->t=R(0)==R(13);
  if(!c->t) goto L8c077ad2;
  fp_arith(c,2,5,10);
  fp_arith(c,2,9,6);
  fp_mov(c,4,5);
  fp_arith(c,1,4,9);
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  c->t=R(0)==R(13);
  if(!c->t) goto L8c077ad2;
  fp_arith(c,2,8,6);
L8c077a54:;
  fp_arith(c,2,7,10);
  fp_mov(c,4,8);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,4,7);
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  { c->t=R(0)==R(13); goto L8c077acc; }
L8c077a66:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,7,R(5));
  fp_cmp(c,1,3,4);
  fp_ld(c,4,R(4));
  fp_ld(c,5,R(6));
  fp_ld(c,6,R(7));
  fp_arith(c,1,7,4);
  fp_arith(c,1,5,4);
  fp_ld(c,8,R(0)+R(5));
  fp_arith(c,1,6,4);
  fp_ld(c,4,R(0)+R(4));
  fp_ld(c,9,R(0)+R(6));
  R(1)=c->t;
  fp_arith(c,1,8,4);
  fp_mov(c,1,7);
  fp_arith(c,1,9,4);
  fp_ld(c,10,R(0)+R(7));
  R(1)+=0xffffffffu;
  fp_arith(c,1,10,4);
  R(1)=0u-R(1);
  fp_mov(c,2,8);
  fp_arith(c,2,2,5);
  fp_arith(c,2,1,9);
  fp_mov(c,4,2);
  fp_arith(c,1,4,1);
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c077ad2;
  fp_arith(c,2,9,6);
  c->fr[3]=0x00000000u;
  fp_arith(c,2,5,10);
  fp_mov(c,4,9);
  fp_arith(c,1,4,5);
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c077ad2;
  fp_arith(c,2,7,10);
  fp_arith(c,2,8,6);
  fp_mov(c,4,7);
  fp_arith(c,1,4,8);
  fp_cmp(c,1,3,4);
  R(0)=c->t;
  R(0)^=0x1u;
  c->t=R(0)==R(1);
L8c077acc:;
  R(0)=c->t;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
L8c077ad2:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c077ad8(SH4Ctx *c) {
  fp_ld(c,4,R(5));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  R(1)=LD32(R(15));
  fp_ld(c,6,R(4));
  fp_ld(c,9,R(1));
  fp_ld(c,7,R(6));
  fp_ld(c,8,R(7));
  fp_mov(c,10,6);
  { uint32_t k=!c->t; fp_arith(c,0,10,4); if(k) goto L8c077b20; }
  fp_mov(c,4,6);
  { fp_mov(c,5,10); goto L8c077b24; }
L8c077b20:;
  fp_mov(c,5,6);
  fp_mov(c,4,10);
L8c077b24:;
  fp_cmp(c,1,4,7);
  if(!c->t) goto L8c077b30;
  fp_cmp(c,1,4,8);
  if(!c->t) goto L8c077b30;
  fp_cmp(c,1,4,9);
  if(c->t) goto L8c077bac;
L8c077b30:;
  fp_cmp(c,1,7,5);
  if(!c->t) goto L8c077b3c;
  fp_cmp(c,1,8,5);
  if(!c->t) goto L8c077b3c;
  fp_cmp(c,1,9,5);
  if(c->t) goto L8c077bac;
L8c077b3c:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(5));
  fp_ld(c,6,R(0)+R(4));
  fp_cmp(c,1,4,3);
  fp_ld(c,7,R(0)+R(1));
  fp_ld(c,8,R(0)+R(6));
  fp_ld(c,9,R(0)+R(7));
  fp_mov(c,10,6);
  { uint32_t k=!c->t; fp_arith(c,0,10,4); if(k) goto L8c077b58; }
  fp_mov(c,5,6);
  { fp_mov(c,4,10); goto L8c077b5c; }
L8c077b58:;
  fp_mov(c,4,6);
  fp_mov(c,5,10);
L8c077b5c:;
  fp_cmp(c,1,5,8);
  if(!c->t) goto L8c077b68;
  fp_cmp(c,1,5,9);
  if(!c->t) goto L8c077b68;
  fp_cmp(c,1,5,7);
  if(c->t) goto L8c077bac;
L8c077b68:;
  fp_cmp(c,1,8,4);
  if(!c->t) goto L8c077b74;
  fp_cmp(c,1,9,4);
  if(!c->t) goto L8c077b74;
  fp_cmp(c,1,7,4);
  if(c->t) goto L8c077bac;
L8c077b74:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(5));
  fp_ld(c,5,R(0)+R(4));
  fp_cmp(c,1,4,3);
  fp_ld(c,9,R(0)+R(1));
  fp_ld(c,6,R(0)+R(6));
  fp_ld(c,7,R(0)+R(7));
  fp_mov(c,10,5);
  { uint32_t k=!c->t; fp_arith(c,0,10,4); if(k) goto L8c077b90; }
  fp_mov(c,4,5);
  { fp_mov(c,8,10); goto L8c077b94; }
L8c077b90:;
  fp_mov(c,8,5);
  fp_mov(c,4,10);
L8c077b94:;
  fp_cmp(c,1,4,6);
  if(!c->t) goto L8c077ba0;
  fp_cmp(c,1,4,7);
  if(!c->t) goto L8c077ba0;
  fp_cmp(c,1,4,9);
  if(c->t) goto L8c077bac;
L8c077ba0:;
  fp_cmp(c,1,6,8);
  if(!c->t) goto L8c077bb0;
  fp_cmp(c,1,7,8);
  if(!c->t) goto L8c077bb0;
  fp_cmp(c,1,9,8);
  if(!c->t) goto L8c077bb0;
L8c077bac:;
  { R(0)=0x0u; return; }
L8c077bb0:;
  R(0)=0x1u;
  {  return; }
}
void f_8c077b00(SH4Ctx *c) {
  {uint32_t a=R(0)+c->gbr;ST8(a,LD8(a)&0x3a);}
  c->t=(int32_t)R(15)>=(int32_t)R(1);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  fp_mov(c,5,6);
  fp_mov(c,4,10);
  fp_cmp(c,1,4,7);
  if(!c->t) goto L8c077b30;
  fp_cmp(c,1,4,8);
  if(!c->t) goto L8c077b30;
  fp_cmp(c,1,4,9);
  if(c->t) goto L8c077bac;
L8c077b30:;
  fp_cmp(c,1,7,5);
  if(!c->t) goto L8c077b3c;
  fp_cmp(c,1,8,5);
  if(!c->t) goto L8c077b3c;
  fp_cmp(c,1,9,5);
  if(c->t) goto L8c077bac;
L8c077b3c:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(5));
  fp_ld(c,6,R(0)+R(4));
  fp_cmp(c,1,4,3);
  fp_ld(c,7,R(0)+R(1));
  fp_ld(c,8,R(0)+R(6));
  fp_ld(c,9,R(0)+R(7));
  fp_mov(c,10,6);
  { uint32_t k=!c->t; fp_arith(c,0,10,4); if(k) goto L8c077b58; }
  fp_mov(c,5,6);
  { fp_mov(c,4,10); goto L8c077b5c; }
L8c077b58:;
  fp_mov(c,4,6);
  fp_mov(c,5,10);
L8c077b5c:;
  fp_cmp(c,1,5,8);
  if(!c->t) goto L8c077b68;
  fp_cmp(c,1,5,9);
  if(!c->t) goto L8c077b68;
  fp_cmp(c,1,5,7);
  if(c->t) goto L8c077bac;
L8c077b68:;
  fp_cmp(c,1,8,4);
  if(!c->t) goto L8c077b74;
  fp_cmp(c,1,9,4);
  if(!c->t) goto L8c077b74;
  fp_cmp(c,1,7,4);
  if(c->t) goto L8c077bac;
L8c077b74:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(5));
  fp_ld(c,5,R(0)+R(4));
  fp_cmp(c,1,4,3);
  fp_ld(c,9,R(0)+R(1));
  fp_ld(c,6,R(0)+R(6));
  fp_ld(c,7,R(0)+R(7));
  fp_mov(c,10,5);
  { uint32_t k=!c->t; fp_arith(c,0,10,4); if(k) goto L8c077b90; }
  fp_mov(c,4,5);
  { fp_mov(c,8,10); goto L8c077b94; }
L8c077b90:;
  fp_mov(c,8,5);
  fp_mov(c,4,10);
L8c077b94:;
  fp_cmp(c,1,4,6);
  if(!c->t) goto L8c077ba0;
  fp_cmp(c,1,4,7);
  if(!c->t) goto L8c077ba0;
  fp_cmp(c,1,4,9);
  if(c->t) goto L8c077bac;
L8c077ba0:;
  fp_cmp(c,1,6,8);
  if(!c->t) goto L8c077bb0;
  fp_cmp(c,1,7,8);
  if(!c->t) goto L8c077bb0;
  fp_cmp(c,1,9,8);
  if(!c->t) goto L8c077bb0;
L8c077bac:;
  { R(0)=0x0u; return; }
L8c077bb0:;
  R(0)=0x1u;
  {  return; }
}
void f_8c077bb6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x8u;
  ST32(R(15),R(6));
  ST32(R(15)+4,R(7));
  R(14)=R(5);
  R(11)=LD32(R(15)+40);
  R(5)=R(14);
  fp_st(c,4,R(0)+R(15));
  R(13)=R(4);
  R(3)=LD32(R(15)+36);
  R(12)=LD32(R(15)+48);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+8);
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c077be2u; R(4)=R(13); f_8c077ad8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c077c58; }
  R(3)=0x8c05e55cu;
  R(5)=R(14);
  { c->pr=0x8c077bf2u; R(4)=R(11); f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c077c58;
  R(2)=0x8c05e55cu;
  R(5)=R(13);
  { c->pr=0x8c077c02u; R(4)=R(11); f_8c05e55c(c); }
  R(0)=0x8u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(15));
  c->fr[2]=0x00000000u;
  fp_arith(c,0,4,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c077c58;
  fp_mov(c,1,15);
  fp_unary(c,0,1);
  fp_cmp(c,1,1,4);
  if(!c->t) goto L8c077c58;
  fp_arith(c,3,4,15);
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(13));
  R(0)=0x4u;
  fp_mov(c,15,4);
  fp_unary(c,0,15);
  fp_mov(c,0,15);
  fp_fmac(c,3,2);
  fp_st(c,3,R(12));
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(15)+40);
  { c->pr=0x8c077c48u; R(4)=R(12); f_8c077982(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c077c58; }
  R(3)=LD32(R(15)+44);
  fp_st(c,15,R(3));
  { R(0)=0x1u; goto L8c077c5a; }
L8c077c58:;
  R(0)=0x0u;
L8c077c5a:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077ca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x8u;
  ST32(R(15)+4,R(6));
  ST32(R(15),R(7));
  R(12)=R(5);
  fp_st(c,4,R(0)+R(15));
  R(5)=R(12);
  R(3)=LD32(R(15)+32);
  R(14)=R(4);
  R(13)=LD32(R(15)+44);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  R(6)=LD32(R(15)+8);
  fp_mov(c,15,5);
  { c->pr=0x8c077ccau; R(4)=R(14); f_8c077ad8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c077d64; }
  R(3)=0x8c05e55cu;
  R(5)=R(14);
  { c->pr=0x8c077cdau; R(4)=LD32(R(15)+36); f_8c05e55c(c); }
  R(0)=0x8u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(15));
  c->fr[1]=0x00000000u;
  fp_arith(c,0,4,3);
  fp_cmp(c,1,4,1);
  if(!c->t) goto L8c077cec;
  { fp_mov(c,2,4); goto L8c077cf0; }
L8c077cec:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
L8c077cf0:;
  R(0)=0x8c077e24u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c077d14;
  R(0)=0x8c077e28u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c077d14;
  R(2)=LD32(R(15)+40);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(2));
  R(3)=LD32(R(14));
  R(2)=LD32(R(14)+4);
  ST32(R(13),R(3));
  ST32(R(13)+4,R(2));
  R(3)=LD32(R(14)+8);
  { ST32(R(13)+8,R(3)); goto L8c077d60; }
L8c077d14:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c077d64;
  fp_mov(c,2,15);
  fp_unary(c,0,2);
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c077d64;
  fp_arith(c,3,4,15);
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(14));
  R(0)=0x4u;
  fp_mov(c,15,4);
  fp_unary(c,0,15);
  fp_mov(c,0,15);
  fp_fmac(c,3,2);
  fp_st(c,3,R(13));
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(14));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(14));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(13));
  R(3)=LD32(R(15)+36);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15)+36);
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c077d54u; R(4)=R(13); f_8c077982(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c077d64; }
  R(3)=LD32(R(15)+40);
  fp_st(c,15,R(3));
L8c077d60:;
  { R(0)=0x1u; goto L8c077d66; }
L8c077d64:;
  R(0)=0x0u;
L8c077d66:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077d74(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=0x8u;
  ST32(R(15)+4,R(6));
  ST32(R(15),R(7));
  R(13)=R(5);
  R(12)=LD32(R(15)+48);
  R(5)=R(13);
  fp_st(c,4,R(0)+R(15));
  R(14)=R(4);
  R(3)=LD32(R(15)+44);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c077d9cu; R(4)=R(14); f_8c077ad8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c077e0a; }
  R(3)=0x8c05e55cu;
  R(5)=R(13);
  { c->pr=0x8c077dacu; R(4)=R(12); f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c077e0a;
  R(2)=0x8c05e55cu;
  R(5)=R(14);
  { c->pr=0x8c077dbcu; R(4)=R(12); f_8c05e55c(c); }
  R(0)=0x8u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(15));
  c->fr[2]=0x00000000u;
  fp_arith(c,0,4,3);
  fp_arith(c,3,4,15);
  fp_unary(c,0,4);
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c077e0a;
  c->fr[1]=0x3F800000u;
  fp_cmp(c,1,4,1);
  if(c->t) goto L8c077e0a;
  fp_ld(c,2,R(13));
  R(0)=0xcu;
  fp_ld(c,3,R(14));
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+8);
  R(4)=R(15);
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15)+48);
  { c->pr=0x8c077e06u; R(4)+=0x10u; f_8c077982(c); }
  { R(15)+=0x4u; goto L8c077e0c; }
L8c077e0a:;
  R(0)=0x0u;
L8c077e0c:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077e40(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,3,R(5));
  fp_ld(c,0,R(0)+R(5));
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,5,R(4));
  fp_arith(c,1,6,0);
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,1,5,3);
  fp_ld(c,7,R(0)+R(4));
  fp_arith(c,1,7,2);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,5);
  fp_arith(c,2,2,4);
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  { R(0)^=0x1u; return; }
}
void f_8c077e6e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=R(5);
  R(5)=R(4);
  R(3)=0x8c05e612u;
  ST32(R(15),R(4));
  R(4)=R(15);
  fp_mov(c,15,4);
  { c->pr=0x8c077e86u; R(4)+=0x10u; f_8c05e612(c); }
  R(5)=R(15);
  R(2)=0x8c05e5f4u;
  R(4)=R(15);
  R(6)=R(14);
  R(5)+=0x10u;
  { c->pr=0x8c077e94u; R(4)+=0x4u; f_8c05e5f4(c); }
  fp_ld(c,2,R(14));
  R(0)=0x10u;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  fp_mov(c,4,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x4u;
  fp_unary(c,0,4);
  { uint32_t k=!c->t; fp_ld(c,6,R(0)+R(15)); if(k) goto L8c077eb4; }
  fp_cmp(c,1,5,15);
  if(c->t) goto L8c077f08;
  fp_cmp(c,1,4,6);
  if(!c->t) goto L8c077ebc;
  {  goto L8c077f08; }
L8c077eb4:;
  fp_cmp(c,1,4,5);
  if(c->t) goto L8c077f08;
  fp_cmp(c,1,6,15);
  if(c->t) goto L8c077f08;
L8c077ebc:;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c077eda;
  fp_cmp(c,1,5,15);
  if(c->t) goto L8c077f08;
  fp_cmp(c,1,4,6);
  if(!c->t) goto L8c077ee2;
  {  goto L8c077f08; }
L8c077eda:;
  fp_cmp(c,1,4,5);
  if(c->t) goto L8c077f08;
  fp_cmp(c,1,6,15);
  if(c->t) goto L8c077f08;
L8c077ee2:;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c077f00;
  fp_cmp(c,1,5,15);
  if(c->t) goto L8c077f08;
  fp_cmp(c,1,4,6);
  if(!c->t) goto L8c077f0c;
  {  goto L8c077f08; }
L8c077f00:;
  fp_cmp(c,1,4,5);
  if(c->t) goto L8c077f08;
  fp_cmp(c,1,6,15);
  if(!c->t) goto L8c077f0c;
L8c077f08:;
  { R(0)=0x0u; goto L8c077f0e; }
L8c077f0c:;
  R(0)=0x1u;
L8c077f0e:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c077f40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=0x40u;
  R(13)=R(5);
  fp_mov(c,14,4);
  R(10)=R(6);
  R(6)=R(10);
  R(5)=R(13);
  fp_mov(c,4,14);
  R(11)=R(4);
  ST32(R(15)+8,R(7));
  R(12)=LD32(R(15)+R(0));
  R(0)=0x44u;
  R(14)=LD32(R(15)+R(0));
  { c->pr=0x8c077f72u; R(4)=R(11); f_8c077e6e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c077f7c;
  {  goto L8c0780b4; }
L8c077f7c:;
  R(9)=0x8c05e612u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)=R(10);
  { c->pr=0x8c077f88u; R(4)+=0xcu; f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,6,R(13));
  fp_ld(c,5,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,6);
  R(5)=R(15);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(13));
  R(5)+=0xcu;
  R(3)=0x8c05e55cu;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_mov(c,13,3);
  { c->pr=0x8c077faau; R(4)=R(13); f_8c05e55c(c); }
  R(0)=0xcu;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,3,0);
  fp_arith(c,0,5,3);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  c->fr[15]=0x3F800000u;
  fp_arith(c,3,15,14);
  fp_mov(c,0,4);
  R(5)=R(15);
  fp_ld(c,7,R(0)+R(15));
  R(4)=R(15);
  fp_fmac(c,3,4);
  fp_mov(c,2,14);
  fp_mov(c,0,7);
  fp_arith(c,2,2,14);
  R(3)=0x8c076da0u;
  R(5)+=0x4u;
  fp_fmac(c,3,7);
  fp_mov(c,6,3);
  fp_arith(c,1,6,2);
  { c->pr=0x8c077fe0u; fp_mov(c,4,13); f_8c076da0(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c077fee;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c078050;
  {  goto L8c0780b4; }
L8c077fee:;
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c077ffc;
  { fp_mov(c,4,2); goto L8c077ffe; }
L8c077ffc:;
  fp_mov(c,4,3);
L8c077ffe:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c0780b4;
  c->fr[2]=0x3F800000u;
  fp_cmp(c,1,4,2);
  if(c->t) goto L8c0780b4;
  fp_mov(c,0,4);
  R(0)=0x4u;
  R(2)=LD32(R(15)+8);
  R(6)=R(10);
  R(5)=R(12);
  fp_st(c,4,R(2));
  fp_ld(c,3,R(11));
  fp_ld(c,2,R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(12));
  fp_ld(c,3,R(0)+R(11));
  fp_ld(c,2,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  fp_ld(c,2,R(0)+R(13));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  { uint32_t tg=R(9); c->pr=0x8c078034u; R(4)=R(14); sh4_call(c,tg); }
  fp_ld(c,3,R(14));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,15);
  { fp_arith(c,2,2,3); goto L8c0780ae; }
L8c078050:;
  fp_ld(c,2,R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0780b4;
  c->fr[1]=0x3F800000u;
  fp_cmp(c,1,2,1);
  if(c->t) goto L8c0780b4;
  fp_ld(c,3,R(15));
  R(0)=0x4u;
  R(2)=LD32(R(15)+8);
  R(5)=R(12);
  R(6)=R(10);
  fp_st(c,3,R(2));
  fp_ld(c,2,R(15));
  fp_ld(c,0,R(13));
  fp_ld(c,3,R(11));
  fp_fmac(c,3,2);
  fp_st(c,3,R(12));
  fp_ld(c,2,R(15));
  fp_ld(c,0,R(0)+R(13));
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,2,R(15));
  fp_ld(c,0,R(0)+R(13));
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  { uint32_t tg=R(9); c->pr=0x8c078092u; R(4)=R(14); sh4_call(c,tg); }
  fp_ld(c,3,R(14));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
L8c0780ae:;
  fp_st(c,2,R(0)+R(14));
  { R(0)=0x1u; goto L8c0780b6; }
L8c0780b4:;
  R(0)=0x0u;
L8c0780b6:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c078100(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  c->fr[2]=0x00000000u;
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(4));R(4)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_cmp(c,1,2,5);
  fp_ld(c,9,R(4));R(4)+=fp_sz(c);
  fp_ld(c,7,R(5));
  R(5)=R(6);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,14,R(4));
  fp_arith(c,1,8,3);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_mov(c,13,4);
  fp_arith(c,1,9,3);
  fp_ld(c,3,R(5));
  fp_arith(c,1,14,3);
  fp_mov(c,1,8);
  fp_arith(c,0,1,5);
  fp_mov(c,10,9);
  fp_arith(c,0,10,6);
  fp_mov(c,11,14);
  fp_arith(c,0,11,7);
  { uint32_t k=c->t; fp_unary(c,0,13); if(k) goto L8c078140; }
  fp_cmp(c,1,4,8);
  if(!c->t) goto L8c0781fe;
  fp_cmp(c,1,1,13);
  if(c->t) goto L8c078148;
  {  goto L8c0781fe; }
L8c078140:;
  fp_cmp(c,1,8,13);
  if(!c->t) goto L8c0781fe;
  fp_cmp(c,1,4,1);
  if(!c->t) goto L8c0781fe;
L8c078148:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,6);
  if(c->t) goto L8c07815a;
  fp_cmp(c,1,4,9);
  if(!c->t) goto L8c0781fe;
  fp_cmp(c,1,10,13);
  if(c->t) goto L8c078162;
  {  goto L8c0781fe; }
L8c07815a:;
  fp_cmp(c,1,9,13);
  if(!c->t) goto L8c0781fe;
  fp_cmp(c,1,4,10);
  if(!c->t) goto L8c0781fe;
L8c078162:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,7);
  if(c->t) goto L8c078174;
  fp_cmp(c,1,4,14);
  if(!c->t) goto L8c0781fe;
  fp_cmp(c,1,11,13);
  if(c->t) goto L8c07817c;
  {  goto L8c0781fe; }
L8c078174:;
  fp_cmp(c,1,14,13);
  if(!c->t) goto L8c0781fe;
  fp_cmp(c,1,4,11);
  if(!c->t) goto L8c0781fe;
L8c07817c:;
  fp_mov(c,3,10);
  fp_arith(c,2,3,10);
  fp_mov(c,0,1);
  fp_mov(c,13,4);
  fp_arith(c,2,13,4);
  fp_fmac(c,3,1);
  fp_mov(c,0,11);
  fp_fmac(c,3,11);
  fp_cmp(c,1,3,13);
  if(!c->t) goto L8c078202;
  fp_mov(c,3,9);
  fp_arith(c,2,3,9);
  fp_mov(c,0,8);
  fp_fmac(c,3,8);
  fp_mov(c,0,14);
  fp_fmac(c,3,14);
  fp_cmp(c,1,3,13);
  if(!c->t) goto L8c078202;
  fp_mov(c,3,9);
  fp_arith(c,2,3,6);
  fp_mov(c,0,5);
  c->fr[2]=0x00000000u;
  fp_fmac(c,3,8);
  fp_mov(c,0,7);
  fp_fmac(c,3,14);
  fp_mov(c,4,3);
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c0781fe;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,5);
  fp_unary(c,0,4);
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_mov(c,10,3);
  fp_cmp(c,1,10,4);
  if(!c->t) goto L8c0781fe;
  fp_mov(c,3,8);
  fp_arith(c,2,3,6);
  fp_mov(c,2,9);
  fp_arith(c,2,2,5);
  fp_arith(c,2,13,10);
  fp_mov(c,10,3);
  fp_arith(c,1,10,2);
  fp_arith(c,2,10,10);
  fp_cmp(c,1,13,10);
  if(!c->t) goto L8c0781fe;
  fp_mov(c,3,14);
  fp_arith(c,2,8,7);
  fp_arith(c,2,3,5);
  fp_mov(c,4,8);
  fp_arith(c,1,4,3);
  fp_mov(c,0,4);
  fp_fmac(c,10,4);
  fp_cmp(c,1,13,10);
  if(!c->t) goto L8c0781fe;
  fp_arith(c,2,9,7);
  fp_arith(c,2,14,6);
  fp_mov(c,4,9);
  fp_arith(c,1,4,14);
  fp_mov(c,0,4);
  fp_fmac(c,10,4);
  fp_cmp(c,1,13,10);
  if(c->t) goto L8c078202;
L8c0781fe:;
  { R(0)=0x0u; goto L8c078204; }
L8c078202:;
  R(0)=0x1u;
L8c078204:;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,14,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c07820a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(0)=0x60u;
  R(11)=R(6);
  R(10)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(9)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(6)=R(5);
  R(13)=R(5);
  R(5)=R(4);
  R(3)=0x8c05e5f4u;
  R(8)=LD32(R(15)+R(0));
  R(12)=R(4);
  R(4)=R(15);
  fp_mov(c,15,4);
  R(14)=R(7);
  { c->pr=0x8c078246u; R(4)+=0x18u; f_8c05e5f4(c); }
  R(2)=0x8c05e5f4u;
  R(4)=R(15);
  R(6)=R(14);
  R(5)=R(11);
  { c->pr=0x8c078252u; R(4)+=0x24u; f_8c05e5f4(c); }
  fp_ld(c,2,R(13));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  fp_ld(c,1,R(14));
  R(5)=c->t;
  fp_cmp(c,1,1,3);
  R(3)=R(5)&0xFF;
  R(4)=c->t;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(2)=R(4)&0xFF; if(k) goto L8c07826c; }
  { fp_ld(c,5,R(12)); goto L8c078270; }
L8c07826c:;
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(15));
L8c078270:;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; fp_mov(c,3,15); if(k) goto L8c07827c; }
  R(0)=0x24u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c07827e; }
L8c07827c:;
  fp_ld(c,4,R(11));
L8c07827e:;
  fp_arith(c,0,3,4);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c078288;
  {  goto L8c0785ac; }
L8c078288:;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c078296; }
  R(0)=0x18u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c078298; }
L8c078296:;
  fp_ld(c,4,R(12));
L8c078298:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0782a0;
  { fp_ld(c,5,R(11)); goto L8c0782a4; }
L8c0782a0:;
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
L8c0782a4:;
  fp_arith(c,1,5,15);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0782ae;
  {  goto L8c0785ac; }
L8c0782ae:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(13));
  fp_cmp(c,1,2,3);
  fp_ld(c,2,R(0)+R(14));
  R(5)=c->t;
  fp_cmp(c,1,2,3);
  R(3)=R(5)&0xFF;
  R(4)=c->t;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(2)=R(4)&0xFF; if(k) goto L8c0782ca; }
  { fp_ld(c,4,R(0)+R(12)); goto L8c0782ce; }
L8c0782ca:;
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
L8c0782ce:;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; fp_mov(c,3,15); if(k) goto L8c0782da; }
  R(0)=0x28u;
  { fp_ld(c,5,R(0)+R(15)); goto L8c0782de; }
L8c0782da:;
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(11));
L8c0782de:;
  fp_arith(c,0,3,5);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0782e8;
  {  goto L8c0785ac; }
L8c0782e8:;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c0782f6; }
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(15)); goto L8c0782fa; }
L8c0782f6:;
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(12));
L8c0782fa:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c078340;
  R(0)=0x4u;
  { fp_ld(c,5,R(0)+R(11)); goto L8c078344; }
L8c078340:;
  R(0)=0x28u;
  fp_ld(c,5,R(0)+R(15));
L8c078344:;
  fp_arith(c,1,5,15);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c07834e;
  {  goto L8c0785ac; }
L8c07834e:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(13));
  fp_cmp(c,1,2,3);
  fp_ld(c,2,R(0)+R(14));
  R(5)=c->t;
  fp_cmp(c,1,2,3);
  R(3)=R(5)&0xFF;
  R(4)=c->t;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(2)=R(4)&0xFF; if(k) goto L8c07836a; }
  { fp_ld(c,4,R(0)+R(12)); goto L8c07836e; }
L8c07836a:;
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
L8c07836e:;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; fp_mov(c,3,15); if(k) goto L8c07837a; }
  R(0)=0x2cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c07837e; }
L8c07837a:;
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(11));
L8c07837e:;
  fp_arith(c,0,3,5);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c078388;
  {  goto L8c0785ac; }
L8c078388:;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c078396; }
  R(0)=0x20u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c07839a; }
L8c078396:;
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(12));
L8c07839a:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0783a4;
  R(0)=0x8u;
  { fp_ld(c,5,R(0)+R(11)); goto L8c0783a8; }
L8c0783a4:;
  R(0)=0x2cu;
  fp_ld(c,5,R(0)+R(15));
L8c0783a8:;
  fp_arith(c,1,5,15);
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0783b2;
  {  goto L8c0785ac; }
L8c0783b2:;
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(11);
  R(5)=R(12);
  { c->pr=0x8c0783beu; R(4)+=0x24u; f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(14));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_mov(c,14,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,14,3);
  if(!c->t) goto L8c0783e0;
  {  goto L8c0785ac; }
L8c0783e0:;
  fp_mov(c,3,14);
  R(5)=R(13);
  c->fr[14]=0x3F800000u;
  fp_arith(c,3,14,3);
  R(3)=0x8c05e55cu;
  { c->pr=0x8c0783eeu; R(4)=R(14); f_8c05e55c(c); }
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  fp_mov(c,12,0);
  R(5)+=0x24u;
  { c->pr=0x8c0783fau; R(4)=R(14); f_8c05e55c(c); }
  fp_mov(c,4,12);
  fp_arith(c,2,4,14);
  fp_ld(c,3,R(14));
  R(0)=0x18u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_ld(c,3,R(13));
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; fp_mov(c,13,0); if(k) goto L8c078446; }
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c078446;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c078446;
  {  goto L8c0785ac; }
L8c078446:;
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(13);
  R(5)+=0x18u;
  { c->pr=0x8c078454u; R(4)+=0x18u; f_8c05e612(c); }
  fp_mov(c,4,13);
  fp_arith(c,2,4,14);
  fp_ld(c,3,R(14));
  R(0)=0xcu;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(5)+=0xcu;
  R(6)+=0x24u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c078488u; R(4)+=0xcu; sh4_call(c,tg); }
  R(0)=0x18u;
  R(5)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,0,4);
  R(4)=R(15);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8u;
  R(3)=0x8c05e55cu;
  R(5)+=0xcu;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c0784b0u; R(4)+=0x18u; f_8c05e55c(c); }
  R(0)=0xcu;
  fp_mov(c,5,0);
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,3,0);
  fp_arith(c,0,5,3);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,7);
  R(5)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,15);
  fp_fmac(c,3,7);
  fp_mov(c,0,4);
  R(3)=0x8c076da0u;
  R(5)+=0x4u;
  R(4)=R(15);
  fp_fmac(c,3,4);
  fp_mov(c,6,3);
  fp_arith(c,1,6,2);
  { c->pr=0x8c0784e4u; fp_ld(c,4,R(0)+R(15)); f_8c076da0(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c078520;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0785ac;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c078540;
  {  goto L8c078552; }
L8c078520:;
  R(0)=0x4u;
  fp_ld(c,3,R(15));
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c07852c;
  fp_mov(c,3,2);
L8c07852c:;
  fp_mov(c,4,3);
  fp_st(c,3,R(10));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c0785ac;
  c->fr[2]=0x3F800000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c078552;
  {  goto L8c0785ac; }
L8c078540:;
  fp_ld(c,2,R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0785ac;
  c->fr[1]=0x3F800000u;
  fp_cmp(c,1,2,1);
  if(c->t) goto L8c0785ac;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(10));
L8c078552:;
  fp_ld(c,2,R(10));
  R(0)=0x4u;
  fp_ld(c,0,R(13));
  fp_ld(c,3,R(12));
  fp_fmac(c,3,2);
  fp_st(c,3,R(9));
  fp_ld(c,2,R(10));
  fp_ld(c,0,R(0)+R(13));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(9));
  R(0)=0x8u;
  fp_ld(c,2,R(10));
  fp_ld(c,0,R(0)+R(13));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  fp_mov(c,0,12);
  c->fr[2]=0x00000000u;
  fp_st(c,3,R(0)+R(9));
  fp_ld(c,3,R(10));
  fp_fmac(c,13,3);
  fp_mov(c,4,13);
  fp_arith(c,2,4,14);
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c0785ac;
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0785ac;
  fp_ld(c,2,R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(11));
  fp_mov(c,0,4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(8));
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(8));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(8));
  { R(0)=0x1u; goto L8c0785ae; }
L8c0785ac:;
  R(0)=0x0u;
L8c0785ae:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0785e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(5);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(11)=LD32(R(15)+36);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0786ac; }
  R(0)=0x4u;
  fp_ld(c,3,R(7));
  fp_ld(c,0,R(0)+R(7));
  fp_ld(c,4,R(0)+R(11));
  R(0)=0x8u;
  fp_ld(c,5,R(11));
  fp_arith(c,1,4,0);
  fp_ld(c,2,R(0)+R(7));
  fp_arith(c,1,5,3);
  fp_ld(c,6,R(0)+R(11));
  R(9)=0x8c0685b4u;
  fp_arith(c,1,6,2);
  R(14)=(int32_t)(int16_t)LD16(R(10));
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  { R(12)=(uint32_t)(int32_t)(int16_t)R(4); goto L8c078656; }
L8c07862c:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>=(int32_t)R(12);
  if(c->t) goto L8c078654;
  R(5)=(uint32_t)(int32_t)(int16_t)R(14);
  R(5)+=0xffffffffu;
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  R(5)+=R(3);
  R(3)=R(4);
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(6)=0x18u;
  R(5)+=R(13);
  { uint32_t tg=R(9); c->pr=0x8c078654u; R(4)+=R(13); sh4_call(c,tg); }
L8c078654:;
  R(14)+=0xffffffffu;
L8c078656:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c078674;
  R(3)=R(4);
  R(3)+=0xffffffffu;
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=0xcu;
  R(3)+=R(13);
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,3,15);
  if(c->t) goto L8c07862c;
L8c078674:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>=(int32_t)R(12);
  if(c->t) goto L8c0786ac;
  R(9)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=0x8c05e6eau;
  R(3)=R(9);
  c->t=R(9)>>31;R(9)<<=1;
  R(9)+=R(3);
  R(5)=R(11);
  R(9)<<=2;
  c->t=R(9)>>31;R(9)<<=1;
  R(9)+=R(13);
  { c->pr=0x8c078690u; R(4)=R(9); f_8c05e6ea(c); }
  R(0)=0xcu;
  fp_st(c,15,R(0)+R(9));
  R(0)=0x28u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  ST16(R(9)+16,R(0));
  R(0)=0x2cu;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  ST16(R(9)+18,R(0));
  R(3)=(int32_t)(int16_t)LD16(R(10));
  c->t=(int32_t)R(3)>=(int32_t)R(12);
  if(c->t) goto L8c0786ac;
  R(3)=(int32_t)(int16_t)LD16(R(10));
  R(3)+=0x1u;
  ST16(R(10),R(3));
L8c0786ac:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0786e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffc80u;
  R(15)+=R(0);
  R(0)=0x3a4u;
  R(14)=R(7);
  R(9)=0x0u;
  ST32(R(15)+32,R(5));
  ST32(R(15)+8,R(6));
  R(8)=LD32(R(15)+R(0));
  R(0)=0x10u;
  ST8(R(15)+R(0),R(9));
  ST32(R(15)+20,R(9));
  ST16(R(8),R(9));
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c078714; }
  {  { f_8c078a40(c); return; } }
L8c078714:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; R(12)=R(9); if(k) { f_8c078722(c); return; } }
  {  { f_8c078e1a(c); return; } }
}
void f_8c078722(SH4Ctx *c) {
L8c078722:;
  R(3)=LD32(R(14)+16);
  R(0)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c078780;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c078736;
  {  goto L8c0788c0; }
L8c078736:;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c07873e;
  {  goto L8c078980; }
L8c07873e:;
  {  goto L8c078a06; }
L8c078780:;
  R(2)=0x8c0c7f08u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0787c2;
  R(3)=0x8c085660u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x14u;
  { c->pr=0x8c078794u; R(4)=R(14); f_8c085660(c); }
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c07879e;
  {  goto L8c078a06; }
L8c07879e:;
  R(3)=0x8c05a40eu;
  { c->pr=0x8c0787a4u; R(4)=LD32(R(15)+20); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0787ae; }
  {  goto L8c078a06; }
L8c0787ae:;
  R(3)=0x8c087e94u;
  { c->pr=0x8c0787b4u;  f_8c087e94(c); }
  R(3)=0x8c0c7f08u;
  R(0)=R(0)&0xFFFF;
  R(2)=LD32(R(3));
  c->t=(R(0)&R(2))==0;
  if(!c->t) goto L8c0787c2;
  {  goto L8c078a06; }
L8c0787c2:;
  R(0)=LD32(R(14)+20);
  R(10)=(uint32_t)(int32_t)(int16_t)R(12);
  R(10)<<=2;
  R(10)=LD32(R(10)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=c->t; R(11)=R(9); if(k) goto L8c0787d6; }
  {  goto L8c078a06; }
L8c0787d6:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(11);
  R(2)=LD32(R(10)+8);
  R(3)=R(5);
  R(3)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(4)=LD32(R(14));
  R(5)+=R(3);
  R(5)+=R(2);
  ST32(R(15)+56,R(5));
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(4);
  ST32(R(15)+4,R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(4);
  ST32(R(15)+28,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(2)=R(3);
  R(0)<<=2;
  R(4)+=R(0);
  ST32(R(15)+24,R(4));
  c->t=R(3)>>31;R(3)<<=1;
  R(1)=LD32(R(10)+16);
  R(3)+=R(2);
  R(2)=0x8c05e55cu;
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(15),R(3));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c07882au; R(4)=R(3); f_8c05e55c(c); }
  R(3)=0x368u;
  fp_mov(c,4,0);
  R(3)+=R(15);
  fp_unary(c,0,4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+36);
  R(3)=0x8c077bb6u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+20);
  R(5)=LD32(R(15)+24);
  R(7)=LD32(R(15)+44);
  { c->pr=0x8c07884eu; R(4)=R(13); f_8c077bb6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x10u; if(k) goto L8c078876; }
  R(3)=0x370u;
  R(0)=0x1cu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(8);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x3b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+R(0));
  R(0)=0x3b0u;
  { c->pr=0x8c078874u; R(4)=(int32_t)(int16_t)LD16(R(15)+R(0)); f_8c0785e0(c); }
  R(15)+=0x10u;
L8c078876:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(11)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0787d6;
  {  goto L8c078a06; }
L8c0788c0:;
  R(0)=LD32(R(14)+20);
  R(10)=(uint32_t)(int32_t)(int16_t)R(12);
  R(10)<<=2;
  R(10)=LD32(R(10)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=c->t; R(11)=R(9); if(k) goto L8c0788d4; }
  {  goto L8c078a06; }
L8c0788d4:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  R(1)=LD32(R(10));
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)+=R(1);
  R(6)=R(2);
  ST32(R(15)+4,R(2));
  R(0)=(int32_t)(int16_t)LD16(R(6)+8);
  R(2)=0x374u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=0x36cu;
  R(2)+=R(15);
  R(6)=LD32(R(14));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)<<=2;
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)+=R(0);
  R(2)=LD32(R(15)+12);
  R(7)=R(15);
  R(5)=LD32(R(15)+16);
  R(7)+=0x14u;
  fp_ld(c,4,R(2));
  R(3)=0x8c077f40u;
  { c->pr=0x8c078910u; R(4)=R(13); f_8c077f40(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c078938; }
  R(3)=0x370u;
  R(0)=0x1cu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(8);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x3b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+R(0));
  R(0)=0x3b0u;
  { c->pr=0x8c078936u; R(4)=(int32_t)(int16_t)LD16(R(15)+R(0)); f_8c0785e0(c); }
  R(15)+=0x10u;
L8c078938:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(11)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0788d4;
  {  goto L8c078a06; }
L8c078980:;
  R(0)=LD32(R(14)+20);
  R(10)=(uint32_t)(int32_t)(int16_t)R(12);
  R(10)<<=2;
  R(10)=LD32(R(10)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(11)=R(9); if(k) goto L8c078a06; }
L8c078990:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)=LD32(R(10));
  R(4)<<=2;
  R(2)=0x374u;
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=LD32(R(14));
  R(4)+=R(3);
  R(7)=(int32_t)(int16_t)LD16(R(4));
  R(2)+=R(15);
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(4)=R(5);
  R(3)=R(7);
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(3);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)+=R(3);
  R(3)=0x36cu;
  R(0)<<=2;
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)<<=2;
  R(2)=R(15);
  R(2)+=0x14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)+=R(0);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(7)+=R(5);
  R(3)=0x8c077414u;
  R(5)=LD32(R(15)+48);
  R(6)=LD32(R(15)+24);
  { c->pr=0x8c0789d4u; R(4)=R(13); f_8c077414(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x10u; if(k) goto L8c0789fc; }
  R(3)=0x370u;
  R(0)=0x1cu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(8);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x3b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+R(0));
  R(0)=0x3b0u;
  { c->pr=0x8c0789fau; R(4)=(int32_t)(int16_t)LD16(R(15)+R(0)); f_8c0785e0(c); }
  R(15)+=0x10u;
L8c0789fc:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(11)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c078990;
L8c078a06:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c078a16;
  {  goto L8c078722; }
L8c078a16:;
  {  { f_8c078e1a(c); return; } }
}
void f_8c078760(SH4Ctx *c) {
  fp_arith(c,0,12,8);
  ST8(R(3)+R(0),R(10));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(2)=0x8c0c7f08u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0787c2;
  R(3)=0x8c085660u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x14u;
  { c->pr=0x8c078794u; R(4)=R(14); f_8c085660(c); }
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c07879e;
  {  goto L8c078a06; }
L8c07879e:;
  R(3)=0x8c05a40eu;
  { c->pr=0x8c0787a4u; R(4)=LD32(R(15)+20); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0787ae; }
  {  goto L8c078a06; }
L8c0787ae:;
  R(3)=0x8c087e94u;
  { c->pr=0x8c0787b4u;  f_8c087e94(c); }
  R(3)=0x8c0c7f08u;
  R(0)=R(0)&0xFFFF;
  R(2)=LD32(R(3));
  c->t=(R(0)&R(2))==0;
  if(!c->t) goto L8c0787c2;
  {  goto L8c078a06; }
L8c0787c2:;
  R(0)=LD32(R(14)+20);
  R(10)=(uint32_t)(int32_t)(int16_t)R(12);
  R(10)<<=2;
  R(10)=LD32(R(10)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=c->t; R(11)=R(9); if(k) goto L8c0787d6; }
  {  goto L8c078a06; }
L8c0787d6:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(11);
  R(2)=LD32(R(10)+8);
  R(3)=R(5);
  R(3)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(4)=LD32(R(14));
  R(5)+=R(3);
  R(5)+=R(2);
  ST32(R(15)+56,R(5));
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(4);
  ST32(R(15)+4,R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(4);
  ST32(R(15)+28,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(2)=R(3);
  R(0)<<=2;
  R(4)+=R(0);
  ST32(R(15)+24,R(4));
  c->t=R(3)>>31;R(3)<<=1;
  R(1)=LD32(R(10)+16);
  R(3)+=R(2);
  R(2)=0x8c05e55cu;
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(15),R(3));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c07882au; R(4)=R(3); f_8c05e55c(c); }
  R(3)=0x368u;
  fp_mov(c,4,0);
  R(3)+=R(15);
  fp_unary(c,0,4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+36);
  R(3)=0x8c077bb6u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+20);
  R(5)=LD32(R(15)+24);
  R(7)=LD32(R(15)+44);
  { c->pr=0x8c07884eu; R(4)=R(13); f_8c077bb6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x10u; if(k) goto L8c078876; }
  R(3)=0x370u;
  R(0)=0x1cu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(8);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x3b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+R(0));
  R(0)=0x3b0u;
  { c->pr=0x8c078874u; R(4)=(int32_t)(int16_t)LD16(R(15)+R(0)); f_8c0785e0(c); }
  R(15)+=0x10u;
L8c078876:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(11)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0787d6;
  {  goto L8c078a06; }
L8c078a06:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c078a16;
  {  { f_8c078722(c); return; } }
L8c078a16:;
  {  { f_8c078e1a(c); return; } }
}
void f_8c078a40(SH4Ctx *c) {
  R(3)=R(15);
  R(3)+=0x30u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(13);
  R(2)=R(15);
  R(2)+=0x4cu;
  R(7)=0x1e0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c033b1cu;
  R(7)+=R(15);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c078a5au; R(4)=LD32(R(14)+24); f_8c033b1c(c); }
  R(15)+=0x8u;
  R(2)=0x8c140ce0u;
  R(0)=0x28u;
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
  ST16(R(15)+R(0),R(9));
  R(0)=0x30u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c078a74;
  {  { f_8c078e1a(c); return; } }
L8c078a74:;
  R(0)=0x28u;
  R(3)=0x1d8u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x44u;
  R(3)+=R(15);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)=LD32(R(4));
  ST32(R(15)+R(0),R(4));
  R(0)=0x24u;
  R(4)=LD32(R(4)+28);
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(11)=R(4);
  R(11)+=0x2u;
  ST16(R(15)+R(0),R(9));
  R(2)=R(5);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=c->t; ST32(R(15)+44,R(5)); if(k) goto L8c078a9e; }
  {  goto L8c078e02; }
L8c078a9e:;
  R(3)=(int32_t)(int8_t)LD8(R(11));
  R(2)=0x80u;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c078aae;
  {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(10)=(uint32_t)v;}
  { R(10)=R(10)&0xFF; goto L8c078ac0; }
L8c078aae:;
  {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(4)=(uint32_t)v;}
  R(1)=0x7fffu;
  {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(3)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(4)<<=8;
  R(3)=R(3)&0xFF;
  R(4)+=R(3);
  R(4)&=R(1);
  R(10)=R(4);
L8c078ac0:;
  R(3)=(int32_t)(int8_t)LD8(R(11));
  R(2)=0x80u;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c078b00;
  {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(12)=(uint32_t)v;}
  { R(12)=R(12)&0xFF; goto L8c078b12; }
L8c078b00:;
  {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(4)=(uint32_t)v;}
  R(1)=0x7fffu;
  {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(3)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(4)<<=8;
  R(3)=R(3)&0xFF;
  R(4)+=R(3);
  R(4)&=R(1);
  R(12)=R(4);
L8c078b12:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=R(3)>>31;R(3)<<=1;
  ST32(R(15)+4,R(3));
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(14)+24);
  R(2)=LD32(R(15)+4);
  R(0)=LD32(R(3)+8);
  R(3)=LD32(R(15)+28);
  R(1)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x8c140ce0u;
  R(1)=R(1)&0xFFFF;
  R(1)+=R(3);
  R(3)=0x8c140ce4u;
  R(1)<<=2;
  R(0)=LD32(R(3));
  R(3)=LD32(R(2));
  R(1)=LD32(R(1)+R(0));
  c->t=R(1)==R(3);
  if(!c->t) goto L8c078b3e;
  {  goto L8c078dec; }
L8c078b3e:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(10);
  R(0)<<=2;
  ST32(R(15),R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(12);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  ST32(R(15)+24,R(0));
  R(0)=LD32(R(14)+16);
  R(3)=LD32(R(15)+4);
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c078ba0;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c078b62;
  {  goto L8c078cc0; }
L8c078b62:;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c078b6a;
  {  goto L8c078d60; }
L8c078b6a:;
  {  goto L8c078dd2; }
L8c078ba0:;
  R(0)=0x8c0c7f08u;
  R(1)=LD32(R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c078be2;
  R(2)=0x8c085660u;
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x14u;
  { c->pr=0x8c078bb4u; R(4)=R(14); f_8c085660(c); }
  R(3)=LD32(R(15)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c078bbe;
  {  goto L8c078dd2; }
L8c078bbe:;
  R(3)=0x8c05a40eu;
  { c->pr=0x8c078bc4u; R(4)=LD32(R(15)+20); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c078bce; }
  {  goto L8c078dd2; }
L8c078bce:;
  R(3)=0x8c087e94u;
  { c->pr=0x8c078bd4u;  f_8c087e94(c); }
  R(3)=0x8c0c7f08u;
  R(0)=R(0)&0xFFFF;
  R(2)=LD32(R(3));
  c->t=(R(0)&R(2))==0;
  if(!c->t) goto L8c078be2;
  {  goto L8c078dd2; }
L8c078be2:;
  R(0)=LD32(R(14)+20);
  R(5)=(uint32_t)(int32_t)(int16_t)R(12);
  R(3)=LD32(R(15));
  R(1)=R(15);
  R(6)=LD32(R(14));
  R(1)+=0x40u;
  R(4)=LD32(R(3)+R(0));
  R(3)=R(5);
  R(3)<<=2;
  R(2)=LD32(R(4)+8);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)+=R(2);
  ST32(R(15)+52,R(5));
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(6);
  ST32(R(15),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(6);
  ST32(R(1),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(1)=0x8c05e55cu;
  R(6)+=R(0);
  ST32(R(15)+60,R(6));
  R(3)=LD32(R(15)+24);
  R(2)=LD32(R(4)+16);
  R(2)+=R(3);
  ST32(R(15)+24,R(2));
  R(5)=LD32(R(15));
  { c->pr=0x8c078c38u; R(4)=R(2); f_8c05e55c(c); }
  R(3)=0x368u;
  R(0)=0x48u;
  fp_mov(c,4,0);
  R(3)+=R(15);
  fp_unary(c,0,4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+32);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(3)=0x8c077bb6u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+16);
  R(5)=LD32(R(15)+24);
  R(7)=LD32(R(15)+R(0));
  { c->pr=0x8c078c60u; R(4)=R(13); f_8c077bb6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x10u; if(k) goto L8c078c6c; }
  {  goto L8c078dd2; }
L8c078c6c:;
  R(3)=0x370u;
  R(0)=0x1cu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=R(8);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x3b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+R(0));
  R(0)=0x3b0u;
  { c->pr=0x8c078c8au; R(4)=(int32_t)(int16_t)LD16(R(15)+R(0)); f_8c0785e0(c); }
  { R(15)+=0x10u; goto L8c078dd2; }
L8c078cc0:;
  R(0)=LD32(R(14)+20);
  R(3)=LD32(R(15));
  R(2)=0x374u;
  R(4)=LD32(R(3)+R(0));
  R(3)=LD32(R(15)+24);
  R(2)+=R(15);
  R(1)=LD32(R(4));
  R(1)+=R(3);
  R(6)=R(1);
  ST32(R(15),R(1));
  R(0)=(int32_t)(int16_t)LD16(R(6)+8);
  R(6)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=0x36cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)<<=2;
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)+=R(0);
  R(2)=LD32(R(15)+8);
  R(7)=R(15);
  R(5)=LD32(R(15)+16);
  R(7)+=0x14u;
  fp_ld(c,4,R(2));
  R(3)=0x8c077f40u;
  { c->pr=0x8c078cfau; R(4)=R(13); f_8c077f40(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c078dd2; }
  R(3)=0x370u;
  R(0)=0x1cu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=R(8);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x3b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+R(0));
  R(0)=0x3b0u;
  { c->pr=0x8c078d20u; R(4)=(int32_t)(int16_t)LD16(R(15)+R(0)); f_8c0785e0(c); }
  { R(15)+=0x10u; goto L8c078dd2; }
L8c078d60:;
  R(0)=LD32(R(14)+20);
  R(1)=(uint32_t)(int32_t)(int16_t)R(12);
  R(3)=LD32(R(15));
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(5)=LD32(R(14));
  R(4)=LD32(R(3)+R(0));
  R(4)=LD32(R(4));
  R(4)+=R(1);
  R(1)=0x374u;
  R(7)=(int32_t)(int16_t)LD16(R(4));
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(1)+=R(15);
  R(3)=R(7);
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(3);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)+=R(3);
  R(3)=0x36cu;
  R(0)<<=2;
  R(4)=R(5);
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)<<=2;
  R(1)=R(15);
  R(1)+=0x14u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)+=R(0);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(7)+=R(5);
  R(3)=0x8c077414u;
  R(5)=LD32(R(15)+48);
  R(6)=LD32(R(15)+24);
  { c->pr=0x8c078daau; R(4)=R(13); f_8c077414(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x10u; if(k) goto L8c078dd2; }
  R(3)=0x370u;
  R(0)=0x1cu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=R(8);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x3b8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+R(0));
  R(0)=0x3b0u;
  { c->pr=0x8c078dd0u; R(4)=(int32_t)(int16_t)LD16(R(15)+R(0)); f_8c0785e0(c); }
  R(15)+=0x10u;
L8c078dd2:;
  R(3)=LD32(R(14)+24);
  R(2)=LD32(R(15)+4);
  R(0)=LD32(R(3)+8);
  R(3)=LD32(R(15)+28);
  R(1)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x8c140ce0u;
  R(1)=R(1)&0xFFFF;
  R(1)+=R(3);
  R(3)=0x8c140ce4u;
  R(1)<<=2;
  R(0)=LD32(R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+R(0),R(3));
L8c078dec:;
  R(0)=0x24u;
  R(1)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x24u;
  R(1)+=0x1u;
  ST16(R(15)+R(0),R(1));
  R(1)=R(1)&0xFFFF;
  R(3)=LD32(R(15)+44);
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(c->t) goto L8c078e02;
  {  goto L8c078a9e; }
L8c078e02:;
  R(0)=0x28u;
  R(1)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x28u;
  R(1)+=0x1u;
  ST16(R(15)+R(0),R(1));
  R(0)=0x30u;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(1)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(c->t) { f_8c078e1a(c); return; }
  {  goto L8c078a74; }
}
void f_8c078e1a(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(8));
  R(1)=0x380u;
  c->t=(int32_t)R(0)>0;
  R(0)=c->t;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c078e60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffca8u;
  R(15)+=R(0);
  R(14)=R(6);
  R(3)=LD32(R(14)+24);
  R(11)=0x8c05a40eu;
  R(10)=R(5);
  c->t=(R(3)&R(3))==0;
  R(9)=R(4);
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c078e88; }
  {  goto L8c0790c0; }
L8c078e88:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; R(12)=R(13); if(k) goto L8c078e96; }
  {  goto L8c0793c6; }
L8c078e96:;
  R(3)=LD32(R(14)+16);
  R(0)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c078ee0;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c078eaa;
  {  goto L8c078f9a; }
L8c078eaa:;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c078eb2;
  {  goto L8c079006; }
L8c078eb2:;
  {  goto L8c07907a; }
L8c078ee0:;
  R(0)=LD32(R(14)+20);
  R(8)=(uint32_t)(int32_t)(int16_t)R(12);
  R(8)<<=2;
  R(8)=LD32(R(8)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c078eecu; R(4)=LD32(R(8)); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c078f04; }
  R(2)=0x8c087e94u;
  { c->pr=0x8c078ef8u; R(4)=R(0); f_8c087e94(c); }
  R(3)=0xc000u;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c078f04;
  {  goto L8c07907a; }
L8c078f04:;
  ST16(R(15),R(13));
  R(0)=(int32_t)(int16_t)LD16(R(8)+4);
  c->t=(int32_t)R(0)>0;
  if(c->t) goto L8c078f10;
  {  goto L8c07907a; }
L8c078f10:;
  R(5)=(int32_t)(int16_t)LD16(R(15));
  R(2)=LD32(R(8)+8);
  R(3)=R(5);
  R(3)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(4)=LD32(R(14));
  R(5)+=R(3);
  R(5)+=R(2);
  ST32(R(15)+40,R(5));
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(4);
  ST32(R(15)+8,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(4);
  ST32(R(15)+20,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(4)+=R(0);
  ST32(R(15)+16,R(4));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(1)=LD32(R(8)+16);
  R(3)+=R(2);
  R(2)=0x8c05e55cu;
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(15)+4,R(3));
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c078f64u; R(4)=R(3); f_8c05e55c(c); }
  R(3)=LD32(R(15)+4);
  R(5)=R(10);
  fp_mov(c,4,0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+20);
  R(3)=0x8c077d74u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+16);
  R(7)=LD32(R(15)+28);
  fp_unary(c,0,4);
  { c->pr=0x8c078f7cu; R(4)=R(9); f_8c077d74(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c078f88; }
  {  goto L8c07934e; }
L8c078f88:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=0x1u;
  ST16(R(15),R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(3);
  R(0)=(int32_t)(int16_t)LD16(R(8)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c078f10;
  {  goto L8c07907a; }
L8c078f9a:;
  R(0)=LD32(R(14)+20);
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  ST32(R(15)+8,R(2));
  { ST16(R(15),R(13)); goto L8c078ff8; }
L8c078fa8:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(8)=LD32(R(15)+8);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(8)=LD32(R(8));
  R(3)+=R(2);
  R(3)<<=2;
  R(8)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c078fbcu; R(4)=LD32(R(8)+4); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c078fd0; }
  R(2)=0x8c087e94u;
  { c->pr=0x8c078fc8u; R(4)=R(0); f_8c087e94(c); }
  R(3)=0xc000u;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c078ff2;
L8c078fd0:;
  R(0)=(int32_t)(int16_t)LD16(R(8)+8);
  R(5)=R(10);
  R(6)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  fp_ld(c,4,R(8));
  R(2)=0x8c078100u;
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c078fe8u; R(4)=R(9); f_8c078100(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c078ff2;
  {  goto L8c07934e; }
L8c078ff2:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
L8c078ff8:;
  R(2)=LD32(R(15)+8);
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c078fa8;
  {  goto L8c07907a; }
L8c079006:;
  R(0)=LD32(R(14)+20);
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  ST32(R(15)+4,R(2));
  { ST16(R(15),R(13)); goto L8c079070; }
L8c079014:;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(8)=LD32(R(15)+4);
  R(3)<<=2;
  R(8)=LD32(R(8));
  c->t=R(3)>>31;R(3)<<=1;
  R(8)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c079024u; R(4)=LD32(R(8)+4); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(15)+8,R(0)); if(k) goto L8c079038; }
  R(2)=0x8c087e94u;
  { c->pr=0x8c079030u; R(4)=R(0); f_8c087e94(c); }
  R(3)=0xc000u;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c07906a;
L8c079038:;
  R(6)=(int32_t)(int16_t)LD16(R(8));
  R(5)=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(8)+2);
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=R(0);
  R(4)=LD32(R(14));
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(2)=0x8c07773au;
  R(7)=R(4);
  R(0)<<=2;
  R(6)<<=2;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)+=R(4);
  R(7)+=R(0);
  { c->pr=0x8c07905eu; R(4)=R(9); f_8c07773a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c07906a; }
  {  goto L8c07934e; }
L8c07906a:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
L8c079070:;
  R(2)=LD32(R(15)+4);
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c079014;
L8c07907a:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c07908a;
  {  goto L8c078e96; }
L8c07908a:;
  {  goto L8c0793c6; }
L8c0790c0:;
  R(3)=R(15);
  R(3)+=0x20u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(9);
  R(2)=R(15);
  R(7)=0x1d0u;
  R(2)+=0x3cu;
  R(3)=0x8c033b1cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(10);
  R(7)+=R(15);
  { c->pr=0x8c0790dau; R(4)=LD32(R(14)+24); f_8c033b1c(c); }
  R(15)+=0x8u;
  R(2)=0x8c140ce0u;
  R(0)=R(13);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
  ST16(R(15)+24,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c0790f4;
  {  goto L8c0793c6; }
L8c0790f4:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+24);
  R(3)=0x1c8u;
  R(4)=R(0);
  R(4)<<=2;
  R(3)+=R(15);
  R(4)+=R(3);
  R(4)=LD32(R(4));
  R(0)=0x10u;
  ST32(R(15)+52,R(4));
  R(4)=LD32(R(4)+28);
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(12)=R(4);
  R(12)+=0x2u;
  ST8(R(15)+R(0),R(13));
  R(2)=R(5);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=c->t; ST32(R(15)+28,R(5)); if(k) goto L8c07911c; }
  {  goto L8c0793b0; }
L8c07911c:;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  R(2)=0x80u;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c07912c;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(5)=(uint32_t)v;}
  { R(5)=R(5)&0xFF; goto L8c07913e; }
L8c07912c:;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(4)=(uint32_t)v;}
  R(1)=0x7fffu;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(3)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(4)<<=8;
  R(3)=R(3)&0xFF;
  R(4)+=R(3);
  R(4)&=R(1);
  R(5)=R(4);
L8c07913e:;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  R(2)=0x80u;
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c079180;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(8)=(uint32_t)v;}
  { R(8)=R(8)&0xFF; goto L8c079192; }
L8c079180:;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(4)=(uint32_t)v;}
  R(1)=0x7fffu;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(3)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(4)<<=8;
  R(3)=R(3)&0xFF;
  R(4)+=R(3);
  R(4)&=R(1);
  R(8)=R(4);
L8c079192:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=R(3)>>31;R(3)<<=1;
  ST32(R(15),R(3));
  R(2)=(uint32_t)(int32_t)(int16_t)R(8);
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(14)+24);
  R(2)=LD32(R(15));
  R(0)=LD32(R(3)+8);
  R(3)=LD32(R(15)+8);
  R(1)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x8c140ce0u;
  R(1)=R(1)&0xFFFF;
  R(1)+=R(3);
  R(3)=0x8c140ce4u;
  R(1)<<=2;
  R(0)=LD32(R(3));
  R(3)=LD32(R(2));
  R(1)=LD32(R(1)+R(0));
  c->t=R(1)==R(3);
  if(!c->t) goto L8c0791be;
  {  goto L8c07939a; }
L8c0791be:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(8);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  ST32(R(15)+20,R(0));
  R(4)=(uint32_t)(int32_t)(int16_t)R(5);
  R(0)=LD32(R(14)+16);
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)<<=2; if(k) goto L8c079220; }
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0792b6;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0791e4;
  {  goto L8c0792fa; }
L8c0791e4:;
  {  goto L8c079380; }
L8c079220:;
  R(0)=LD32(R(14)+20);
  R(3)=LD32(R(4)+R(0));
  ST32(R(15)+4,R(3));
  { uint32_t tg=R(11); c->pr=0x8c07922au; R(4)=LD32(R(3)); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(15)+12,R(0)); if(k) goto L8c079242; }
  R(3)=0x8c087e94u;
  { c->pr=0x8c079236u; R(4)=LD32(R(15)+12); f_8c087e94(c); }
  R(2)=0xc000u;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(2))==0;
  if(c->t) goto L8c079242;
  {  goto L8c079380; }
L8c079242:;
  R(8)=(uint32_t)(int32_t)(int16_t)R(8);
  R(5)=LD32(R(15)+4);
  R(3)=R(8);
  R(3)<<=2;
  R(5)=LD32(R(5)+8);
  c->t=R(8)>>31;R(8)<<=1;
  R(8)+=R(3);
  R(4)=LD32(R(14));
  R(5)+=R(8);
  ST32(R(15)+36,R(5));
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(4);
  ST32(R(15)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(4);
  ST32(R(15)+44,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(4)+=R(0);
  ST32(R(15)+48,R(4));
  R(8)=LD32(R(15)+4);
  R(8)=LD32(R(8)+16);
  R(3)=LD32(R(15)+20);
  R(5)=LD32(R(15)+12);
  R(2)=0x8c05e55cu;
  R(8)+=R(3);
  { c->pr=0x8c079290u; R(4)=R(8); f_8c05e55c(c); }
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=R(10);
  R(3)=LD32(R(15)+52);
  fp_mov(c,4,0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+20);
  R(3)=0x8c077d74u;
  R(7)=LD32(R(15)+52);
  fp_unary(c,0,4);
  { c->pr=0x8c0792a6u; R(4)=R(9); f_8c077d74(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c0792b2; }
  {  goto L8c079380; }
L8c0792b2:;
  {  goto L8c07934e; }
L8c0792b6:;
  R(0)=LD32(R(14)+20);
  R(3)=LD32(R(15)+20);
  R(4)=LD32(R(4)+R(0));
  R(8)=LD32(R(4));
  R(8)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c0792c4u; R(4)=LD32(R(8)+4); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c0792d8; }
  R(2)=0x8c087e94u;
  { c->pr=0x8c0792d0u; R(4)=R(0); f_8c087e94(c); }
  R(3)=0xc000u;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c079380;
L8c0792d8:;
  R(0)=(int32_t)(int16_t)LD16(R(8)+8);
  R(5)=R(10);
  R(6)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  fp_ld(c,4,R(8));
  R(2)=0x8c078100u;
  R(0)<<=2;
  R(6)+=R(0);
  { c->pr=0x8c0792f0u; R(4)=R(9); f_8c078100(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c079380;
  {  goto L8c07934e; }
L8c0792fa:;
  R(0)=LD32(R(14)+20);
  R(8)=(uint32_t)(int32_t)(int16_t)R(8);
  R(8)<<=2;
  R(4)=LD32(R(4)+R(0));
  c->t=R(8)>>31;R(8)<<=1;
  R(3)=LD32(R(4));
  R(8)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c07930cu; R(4)=LD32(R(8)+4); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c079320; }
  R(2)=0x8c087e94u;
  { c->pr=0x8c079318u; R(4)=R(0); f_8c087e94(c); }
  R(3)=0xc000u;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c079380;
L8c079320:;
  R(6)=(int32_t)(int16_t)LD16(R(8));
  R(5)=R(10);
  R(0)=(int32_t)(int16_t)LD16(R(8)+2);
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=R(0);
  R(4)=LD32(R(14));
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(2)=0x8c07773au;
  R(7)=R(4);
  R(0)<<=2;
  R(6)<<=2;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)+=R(4);
  R(7)+=R(0);
  { c->pr=0x8c079346u; R(4)=R(9); f_8c07773a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c079380; }
L8c07934e:;
  { R(0)=0x1u; goto L8c0793c8; }
L8c079380:;
  R(3)=LD32(R(14)+24);
  R(2)=LD32(R(15));
  R(0)=LD32(R(3)+8);
  R(3)=LD32(R(15)+8);
  R(1)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=0x8c140ce0u;
  R(1)=R(1)&0xFFFF;
  R(1)+=R(3);
  R(3)=0x8c140ce4u;
  R(1)<<=2;
  R(0)=LD32(R(3));
  R(3)=LD32(R(2));
  ST32(R(1)+R(0),R(3));
L8c07939a:;
  R(0)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x10u;
  R(1)+=0x1u;
  ST8(R(15)+R(0),R(1));
  R(1)=R(1)&0xFF;
  R(3)=LD32(R(15)+28);
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(c->t) goto L8c0793b0;
  {  goto L8c07911c; }
L8c0793b0:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+24);
  R(1)=R(15);
  R(1)+=0x20u;
  R(0)+=0x1u;
  ST16(R(15)+24,R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c0793c6;
  {  goto L8c0790f4; }
L8c0793c6:;
  R(0)=0x0u;
L8c0793c8:;
  R(1)=0x358u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0793de(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(4);
  ST16(R(15)+12,R(0));
  R(3)=0x0u;
  R(13)=R(5);
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  R(0)=(int32_t)(int16_t)LD16(R(15)+28);
  ST32(R(15),R(3));
  R(3)=0x8c086d6cu;
  R(14)=R(0);
  R(5)=R(14);
  { c->pr=0x8c079400u; R(4)=LD32(R(15)+4); f_8c086d6c(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c079410;
  R(3)=0x8c085660u;
  R(5)=R(14);
  R(6)=R(15);
  { c->pr=0x8c079410u; R(4)=LD32(R(15)+4); f_8c085660(c); }
L8c079410:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c079430;
  R(3)=0x8c05a40eu;
  { c->pr=0x8c07941cu; R(4)=LD32(R(15)); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c079430; }
  R(3)=0x8c087e94u;
  { c->pr=0x8c079428u;  f_8c087e94(c); }
  R(2)=0xe000u;
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(2))==0;
  if(!c->t) goto L8c079458;
L8c079430:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(4)=(int32_t)(int16_t)LD16(R(13));
  R(5)=R(0);
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(3)>=(int32_t)R(5);
  if(c->t) goto L8c079458;
  R(3)=LD32(R(15)+8);
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)<<=2;
  R(0)=0x20u;
  R(6)+=R(3);
  ST16(R(6),R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  ST16(R(6)+2,R(0));
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(int32_t)R(3)>=(int32_t)R(5);
  if(c->t) goto L8c079458;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(3)+=0x1u;
  ST16(R(13),R(3));
L8c079458:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0794a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(3)=0x8c0bc920u;
  R(2)=R(15);
  R(2)+=0x18u;
  R(14)=R(5);
  R(1)=LD32(R(3));
  R(13)=0x0u;
  R(0)=LD32(R(3)+4);
  R(8)=R(4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x2eu;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=c->t; R(11)=R(13); if(k) goto L8c0794d8; }
  {  goto L8c07964a; }
L8c0794d8:;
  R(3)=LD32(R(14)+16);
  R(0)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0794f4;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0795a0;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0794f0;
  {  goto L8c0795e8; }
L8c0794f0:;
  {  goto L8c07963a; }
L8c0794f4:;
  R(0)=LD32(R(14)+20);
  R(10)=(uint32_t)(int32_t)(int16_t)R(11);
  R(10)<<=2;
  R(10)=LD32(R(10)+R(0));
  R(0)=R(13);
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(12)=R(13); if(k) goto L8c079596; }
L8c079508:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=LD32(R(10)+8);
  R(3)=R(5);
  R(3)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(4)=LD32(R(14));
  R(5)+=R(3);
  R(5)+=R(2);
  R(9)=(uint32_t)(int32_t)(int16_t)R(12);
  ST32(R(15)+12,R(5));
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(4);
  ST32(R(15),R(3));
  R(3)=R(9);
  R(0)=(int32_t)(int16_t)LD16(R(5)+2);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(0)+=R(4);
  ST32(R(15)+16,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(0)<<=2;
  R(4)+=R(0);
  ST32(R(15)+20,R(4));
  c->t=R(9)>>31;R(9)<<=1;
  R(2)=LD32(R(10)+16);
  R(9)+=R(3);
  R(5)=LD32(R(15));
  R(3)=0x8c05e55cu;
  R(9)<<=2;
  R(9)+=R(2);
  { c->pr=0x8c07955au; R(4)=R(9); f_8c05e55c(c); }
  R(2)=R(15);
  R(2)+=0x24u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0xcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+32);
  R(3)=0x8c077bb6u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+16);
  R(5)=R(15);
  fp_mov(c,4,0);
  R(5)+=0x28u;
  R(7)=LD32(R(15)+32);
  fp_unary(c,0,4);
  { c->pr=0x8c07957eu; R(4)=R(8); f_8c077bb6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x10u; if(k) goto L8c07958c; }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
L8c07958c:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(12)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c079508;
L8c079596:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c07963a;
  {  goto L8c07962c; }
L8c0795a0:;
  R(0)=LD32(R(14)+20);
  R(10)=(uint32_t)(int32_t)(int16_t)R(11);
  R(10)<<=2;
  R(10)=LD32(R(10)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(12)=R(13); if(k) goto L8c07963a; }
L8c0795b0:;
  R(9)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)=LD32(R(10));
  R(3)=R(9);
  c->t=R(9)>>31;R(9)<<=1;
  R(9)+=R(3);
  R(5)=LD32(R(14));
  R(9)<<=2;
  R(9)+=R(2);
  R(2)=0x8c077e40u;
  R(0)=(int32_t)(int16_t)LD16(R(9)+8);
  fp_ld(c,4,R(9));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)+=R(0);
  { c->pr=0x8c0795d4u; R(4)=R(8); f_8c077e40(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c07962c;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0795b0;
  {  goto L8c07963a; }
L8c0795e8:;
  R(0)=LD32(R(14)+20);
  R(10)=(uint32_t)(int32_t)(int16_t)R(11);
  R(10)<<=2;
  R(10)=LD32(R(10)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(12)=R(13); if(k) goto L8c07963a; }
L8c0795f8:;
  R(9)=(uint32_t)(int32_t)(int16_t)R(12);
  R(3)=LD32(R(10));
  R(9)<<=2;
  R(6)=LD32(R(14));
  c->t=R(9)>>31;R(9)<<=1;
  R(9)+=R(3);
  ST32(R(15),R(6));
  R(0)=(int32_t)(int16_t)LD16(R(9)+2);
  R(5)=(int32_t)(int16_t)LD16(R(9));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(15));
  R(5)+=R(3);
  R(3)=0x8c07704cu;
  R(5)<<=2;
  R(0)<<=2;
  R(5)+=R(2);
  R(6)+=R(0);
  { c->pr=0x8c079626u; R(4)=R(8); f_8c07704c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c079630;
L8c07962c:;
  { R(0)=0x1u; goto L8c07964c; }
L8c079630:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+4);
  R(12)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0795f8;
L8c07963a:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(11)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c07964a;
  {  goto L8c0794d8; }
L8c07964a:;
  R(0)=0x0u;
L8c07964c:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c079680(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffce0u;
  R(15)+=R(0);
  R(3)=0x8c0163e6u;
  R(13)=R(6);
  ST32(R(15)+8,R(4));
  ST32(R(15)+28,R(5));
  ST32(R(15)+24,R(7));
  { c->pr=0x8c0796a6u; R(4)=LD32(R(15)+28); f_8c0163e6(c); }
  R(3)=0x8c0163e6u;
  fp_mov(c,14,0);
  { c->pr=0x8c0796aeu; R(4)=LD32(R(15)+24); f_8c0163e6(c); }
  R(0)=0x20u;
  R(8)=0xf8u;
  R(14)=0x0u;
  R(10)=0x8c014eaau;
  ST16(R(15)+R(0),R(14));
  R(0)=0x2eu;
  R(3)=LD32(R(15)+8);
  fp_mov(c,15,0);
  R(2)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=c->t; R(8)+=R(15); if(k) goto L8c0796ca; }
  {  goto L8c079d4c; }
L8c0796ca:;
  R(1)=R(15);
  R(1)+=0x20u;
  R(0)=LD32(R(15)+8);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(0)=LD32(R(0)+16);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0796e8;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0796e4;
  {  goto L8c079920; }
L8c0796e4:;
  {  goto L8c079d32; }
L8c0796e8:;
  R(1)=R(15);
  R(1)+=0x20u;
  R(0)=LD32(R(15)+8);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(0)=LD32(R(0)+20);
  R(3)<<=2;
  R(3)=LD32(R(3)+R(0));
  R(0)=R(14);
  ST32(R(15)+20,R(3));
  ST16(R(15)+12,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(0)>0;
  if(c->t) goto L8c079706;
  {  goto L8c079d32; }
L8c079706:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(12)=LD32(R(15)+20);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(12)=LD32(R(12));
  R(0)+=R(3);
  R(0)<<=2;
  R(6)=LD32(R(15)+8);
  R(12)+=R(0);
  R(5)=LD32(R(15)+28);
  R(0)=(int32_t)(int16_t)LD16(R(12)+8);
  R(6)=LD32(R(6));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=0x1c4u;
  R(0)<<=2;
  R(6)+=R(0);
  { uint32_t tg=R(10); c->pr=0x8c07972eu; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; R(11)=R(14); if(k) goto L8c07973c; }
  {  goto L8c0798d6; }
L8c07973c:;
  R(3)=LD32(R(13)+16);
  R(0)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c079780;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c079750;
  {  goto L8c079820; }
L8c079750:;
  {  goto L8c0798c6; }
L8c079780:;
  R(0)=LD32(R(13)+20);
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(0)=R(14);
  ST32(R(15),R(2));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(0)>0;
  if(c->t) goto L8c079798;
  {  goto L8c0798c6; }
L8c079798:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(9)=LD32(R(15));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(9)=LD32(R(9));
  R(0)+=R(3);
  R(0)<<=2;
  R(6)=LD32(R(13));
  R(9)+=R(0);
  R(5)=LD32(R(15)+24);
  R(0)=(int32_t)(int16_t)LD16(R(9)+8);
  R(4)=0x1b8u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { uint32_t tg=R(10); c->pr=0x8c0797beu; R(4)+=R(15); sh4_call(c,tg); }
  fp_ld(c,4,R(12));
  fp_ld(c,5,R(9));
  fp_arith(c,2,4,14);
  R(5)=0x1b8u;
  fp_arith(c,2,5,15);
  R(4)=0x1c4u;
  R(3)=0x8c076f40u;
  R(5)+=R(15);
  { c->pr=0x8c0797d2u; R(4)+=R(15); f_8c076f40(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0798a6;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(0);
  ST16(R(15)+4,R(0));
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c079798;
  {  goto L8c0798c6; }
L8c079820:;
  R(3)=0x8c0153d8u;
  R(4)=0x2b8u;
  R(5)=LD32(R(15)+24);
  { c->pr=0x8c07982au; R(4)+=R(15); f_8c0153d8(c); }
  R(5)=0x2b8u;
  R(4)=0x250u;
  R(3)=0x8c0156cau;
  R(5)+=R(15);
  R(6)=LD32(R(15)+28);
  { c->pr=0x8c079838u; R(4)+=R(15); f_8c0156ca(c); }
  R(0)=(int32_t)(int16_t)LD16(R(12)+8);
  R(6)=LD32(R(15)+8);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(6)=LD32(R(6));
  R(0)+=R(3);
  R(5)=0x250u;
  R(0)<<=2;
  R(4)=0x1dcu;
  R(6)+=R(0);
  R(5)+=R(15);
  { uint32_t tg=R(10); c->pr=0x8c079852u; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=LD32(R(13)+20);
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  R(0)=R(14);
  ST32(R(15),R(3));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c0798c6;
L8c079866:;
  R(9)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(9)=LD32(R(9));
  R(0)<<=2;
  R(6)=LD32(R(13));
  c->t=R(0)>>31;R(0)<<=1;
  R(4)=0x1dcu;
  R(9)+=R(0);
  ST32(R(15)+16,R(6));
  fp_ld(c,3,R(12));
  R(0)=(int32_t)(int16_t)LD16(R(9)+2);
  fp_arith(c,2,3,14);
  R(5)=(int32_t)(int16_t)LD16(R(9));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(15)+16);
  fp_mov(c,4,3);
  fp_arith(c,3,4,15);
  R(5)+=R(3);
  R(3)=0x8c076ea6u;
  R(0)<<=2;
  R(5)<<=2;
  R(6)+=R(0);
  R(5)+=R(2);
  { c->pr=0x8c0798a0u; R(4)+=R(15); f_8c076ea6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0798b6;
L8c0798a6:;
  R(0)=0x348u;
  R(2)=LD32(R(12)+4);
  R(3)=LD32(R(15)+R(0));
  R(0)=0x34cu;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  { R(2)=LD32(R(9)+4); goto L8c079a42; }
L8c0798b6:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(0);
  ST16(R(15)+4,R(0));
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c079866;
L8c0798c6:;
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(11)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c0798d6;
  {  goto L8c07973c; }
L8c0798d6:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(0)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(0);
  ST16(R(15)+12,R(0));
  R(3)=LD32(R(15)+20);
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0798ea;
  {  goto L8c079706; }
L8c0798ea:;
  {  goto L8c079d32; }
L8c079920:;
  R(3)=0x8c0153d8u;
  R(4)=0x2b8u;
  R(5)=LD32(R(15)+24);
  { c->pr=0x8c07992au; R(4)+=R(15); f_8c0153d8(c); }
  R(5)=0x2b8u;
  R(4)=0x250u;
  R(3)=0x8c0156cau;
  R(5)+=R(15);
  R(6)=LD32(R(15)+28);
  { c->pr=0x8c079938u; R(4)+=R(15); f_8c0156ca(c); }
  R(5)=0x250u;
  R(4)=0x1e8u;
  R(2)=0x8c0153d8u;
  R(5)+=R(15);
  { c->pr=0x8c079944u; R(4)+=R(15); f_8c0153d8(c); }
  R(1)=R(15);
  R(1)+=0x20u;
  R(0)=LD32(R(15)+8);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  R(0)=LD32(R(0)+20);
  R(3)<<=2;
  R(3)=LD32(R(3)+R(0));
  R(0)=0x24u;
  ST32(R(15)+40,R(3));
  ST16(R(15)+R(0),R(14));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(0)>0;
  if(c->t) goto L8c079962;
  {  goto L8c079d32; }
L8c079962:;
  R(0)=0x24u;
  R(11)=LD32(R(15)+40);
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(14);
  R(11)=LD32(R(11));
  R(3)<<=2;
  ST16(R(15)+4,R(0));
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=0x2eu;
  R(11)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c079980;
  {  goto L8c079d1a; }
L8c079980:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=LD32(R(13)+16);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0799c0;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c079994;
  {  goto L8c079a80; }
L8c079994:;
  {  goto L8c079d04; }
L8c0799c0:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=LD32(R(13)+20);
  R(0)<<=2;
  R(2)=LD32(R(3)+R(0));
  ST32(R(15),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(0)>0;
  { uint32_t k=c->t; R(9)=R(14); if(k) goto L8c0799d6; }
  {  goto L8c079d04; }
L8c0799d6:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(9);
  R(12)=LD32(R(15));
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(12)=LD32(R(12));
  R(3)+=R(2);
  R(3)<<=2;
  R(6)=LD32(R(13));
  R(12)+=R(3);
  R(5)=0x1e8u;
  R(0)=(int32_t)(int16_t)LD16(R(12)+8);
  R(4)=0x1d0u;
  R(5)+=R(15);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(0);
  { uint32_t tg=R(10); c->pr=0x8c0799feu; R(4)+=R(15); sh4_call(c,tg); }
  R(6)=LD32(R(15)+8);
  R(4)=0x1d0u;
  R(6)=LD32(R(6));
  ST32(R(15)+12,R(6));
  fp_ld(c,3,R(12));
  R(0)=(int32_t)(int16_t)LD16(R(11)+2);
  fp_arith(c,2,3,15);
  R(5)=(int32_t)(int16_t)LD16(R(11));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(15)+12);
  fp_mov(c,4,3);
  fp_arith(c,3,4,14);
  R(5)+=R(3);
  R(3)=0x8c076ea6u;
  R(0)<<=2;
  R(5)<<=2;
  R(5)+=R(2);
  R(6)+=R(0);
  { c->pr=0x8c079a2eu; R(4)+=R(15); f_8c076ea6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c079a46;
  R(0)=0x348u;
  R(2)=LD32(R(11)+4);
  R(3)=LD32(R(15)+R(0));
  R(0)=0x34cu;
  ST32(R(3),R(2));
  R(2)=LD32(R(12)+4);
  R(3)=LD32(R(15)+R(0));
L8c079a42:;
  { ST32(R(3),R(2)); goto L8c079cbc; }
L8c079a46:;
  R(2)=LD32(R(15));
  R(9)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(9);
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0799d6;
  {  goto L8c079d04; }
L8c079a80:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=LD32(R(13)+20);
  R(0)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(0)=R(14);
  ST32(R(15)+20,R(2));
  ST16(R(15)+12,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(0)>0;
  if(c->t) goto L8c079a98;
  {  goto L8c079d04; }
L8c079a98:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(9)=LD32(R(15)+20);
  R(0)<<=2;
  R(12)=LD32(R(13));
  R(9)=LD32(R(9));
  c->t=R(0)>>31;R(0)<<=1;
  R(4)=0x158u;
  R(6)=R(12);
  R(9)+=R(0);
  R(2)=0x8c0a1560u;
  R(0)=(int32_t)(int16_t)LD16(R(9)+2);
  R(5)=(int32_t)(int16_t)LD16(R(9));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(0)<<=2;
  R(6)+=R(0);
  R(5)+=R(12);
  { uint32_t tg=R(2); c->pr=0x8c079ac8u; R(4)+=R(15); sh4_call(c,tg); }
  R(12)=R(14);
  ST16(R(15),R(14));
L8c079acc:;
  R(6)=0x158u;
  R(4)=R(12);
  R(5)=0x1e8u;
  R(6)+=R(15);
  R(5)+=R(15);
  R(6)+=R(12);
  { uint32_t tg=R(10); c->pr=0x8c079adcu; R(4)+=R(8); sh4_call(c,tg); }
  R(6)=0x158u;
  R(12)+=0xcu;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(4)=R(12);
  R(5)=0x1e8u;
  R(6)+=R(15);
  R(3)+=0x1u;
  R(5)+=R(15);
  ST16(R(15),R(3));
  R(6)+=R(12);
  { uint32_t tg=R(10); c->pr=0x8c079af4u; R(4)+=R(8); sh4_call(c,tg); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(2)=0x8u;
  R(3)+=0x1u;
  ST16(R(15),R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(3);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(12)+=0xcu; if(k) goto L8c079acc; }
  R(12)=0x8c0cbaf8u;
  ST16(R(15),R(14));
L8c079b08:;
  R(6)=R(12);
  ST32(R(15)+16,R(6));
  R(6)=(int32_t)(int16_t)LD16(R(6));
  R(5)=R(8);
  R(2)=LD32(R(15)+16);
  R(4)=R(15);
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  R(6)+=R(3);
  R(1)=0x8c05e612u;
  R(6)<<=2;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(6)+=R(8);
  R(5)+=R(0);
  { c->pr=0x8c079b30u; R(4)+=0x2cu; f_8c05e612(c); }
  R(3)=0x0u;
  R(4)=R(12);
  R(4)+=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+12);
  R(5)=R(15);
  R(5)+=0x30u;
  R(7)=LD32(R(7));
  ST32(R(15)+20,R(7));
  R(0)=(int32_t)(int16_t)LD16(R(11)+2);
  R(6)=(int32_t)(int16_t)LD16(R(11));
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(2)=R(6);
  R(4)=(int32_t)(int16_t)LD16(R(4));
  c->t=R(6)>>31;R(6)<<=1;
  R(1)=LD32(R(15)+20);
  R(6)+=R(2);
  R(2)=R(4);
  R(6)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(6)+=R(1);
  R(1)=0x8c07773au;
  R(4)+=R(2);
  R(0)<<=2;
  R(4)<<=2;
  R(7)+=R(0);
  { c->pr=0x8c079b6cu; R(4)+=R(8); f_8c07773a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c079bc0; }
  R(0)=0x348u;
  R(3)=LD32(R(11)+4);
  R(2)=LD32(R(15)+R(0));
  R(0)=0x34cu;
  ST32(R(2),R(3));
  R(3)=LD32(R(9)+4);
  R(2)=LD32(R(15)+R(0));
  { ST32(R(2),R(3)); goto L8c079cbc; }
L8c079bc0:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(3)=0xcu;
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(2)=(uint32_t)(int32_t)(int16_t)R(2);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(12)+=0x4u; if(k) goto L8c079b08; }
  R(0)=(int32_t)(int16_t)LD16(R(11)+2);
  R(5)=(int32_t)(int16_t)LD16(R(11));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(12)=LD32(R(15)+8);
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(12)=LD32(R(12));
  R(5)+=R(3);
  R(4)=0x98u;
  R(5)<<=2;
  R(0)<<=2;
  R(6)=R(12);
  R(2)=0x8c0a1560u;
  R(6)+=R(0);
  R(5)+=R(12);
  { c->pr=0x8c079bf6u; R(4)+=R(15); f_8c0a1560(c); }
  R(12)=R(14);
  ST16(R(15),R(14));
L8c079bfa:;
  R(6)=0x98u;
  R(4)=R(15);
  R(5)=0x250u;
  R(4)+=0x38u;
  R(6)+=R(15);
  R(6)+=R(12);
  R(5)+=R(15);
  { uint32_t tg=R(10); c->pr=0x8c079c0cu; R(4)+=R(12); sh4_call(c,tg); }
  R(6)=0x98u;
  R(4)=R(15);
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(12)+=0xcu;
  R(5)=0x250u;
  R(6)+=R(15);
  R(3)+=0x1u;
  R(4)+=0x38u;
  ST16(R(15),R(3));
  R(5)+=R(15);
  R(6)+=R(12);
  { uint32_t tg=R(10); c->pr=0x8c079c26u; R(4)+=R(12); sh4_call(c,tg); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(2)=0x8u;
  R(3)+=0x1u;
  ST16(R(15),R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(3);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(12)+=0xcu; if(k) goto L8c079bfa; }
  R(12)=0x8c0cbaf8u;
  ST16(R(15),R(14));
L8c079c3a:;
  R(6)=R(12);
  ST32(R(15)+16,R(6));
  R(6)=(int32_t)(int16_t)LD16(R(6));
  R(2)=R(15);
  R(2)+=0x38u;
  R(1)=0x8c05e612u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(3)=LD32(R(15)+16);
  R(5)=R(2);
  R(6)<<=2;
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(4)=R(15);
  R(6)+=R(2);
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)+=R(0);
  { uint32_t tg=R(1); c->pr=0x8c079c66u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(4)=R(12);
  R(3)=0x0u;
  R(4)+=R(3);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(13));
  R(5)=R(15);
  R(5)+=0x30u;
  ST32(R(15)+20,R(7));
  R(0)=(int32_t)(int16_t)LD16(R(9)+2);
  R(6)=(int32_t)(int16_t)LD16(R(9));
  R(2)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(2);
  R(2)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(4)=(int32_t)(int16_t)LD16(R(4));
  R(6)+=R(2);
  R(1)=LD32(R(15)+20);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(6)<<=2;
  R(6)+=R(1);
  R(1)=R(15);
  R(4)+=R(2);
  R(2)=0x8c07773au;
  R(0)<<=2;
  R(1)+=0x3cu;
  R(7)+=R(0);
  R(4)<<=2;
  { c->pr=0x8c079ca4u; R(4)+=R(1); f_8c07773a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c079ce0; }
  R(0)=0x348u;
  R(3)=LD32(R(11)+4);
  R(2)=LD32(R(15)+R(0));
  R(0)=0x34cu;
  ST32(R(2),R(3));
  R(3)=LD32(R(9)+4);
  R(2)=LD32(R(15)+R(0));
  ST32(R(2),R(3));
L8c079cbc:;
  { R(0)=0x1u; goto L8c079d4e; }
L8c079ce0:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(3)=0xcu;
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(2)=(uint32_t)(int32_t)(int16_t)R(2);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(12)+=0x4u; if(k) goto L8c079c3a; }
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(0)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(0);
  ST16(R(15)+12,R(0));
  R(3)=LD32(R(15)+20);
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c079d04;
  {  goto L8c079a98; }
L8c079d04:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x2eu;
  R(3)+=R(13);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c079d1a;
  {  goto L8c079980; }
L8c079d1a:;
  R(0)=0x24u;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x24u;
  R(3)+=0x1u;
  ST16(R(15)+R(0),R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(3);
  R(2)=LD32(R(15)+40);
  R(0)=(int32_t)(int16_t)LD16(R(2)+4);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c079d32;
  {  goto L8c079962; }
L8c079d32:;
  R(0)=0x20u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x20u;
  R(2)+=0x1u;
  ST16(R(15)+R(0),R(2));
  R(0)=0x2eu;
  R(3)=LD32(R(15)+8);
  R(2)=(uint32_t)(int32_t)(int16_t)R(2);
  R(1)=(int32_t)(int16_t)LD16(R(3)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  if(c->t) goto L8c079d4c;
  {  goto L8c0796ca; }
L8c079d4c:;
  R(0)=0x0u;
L8c079d4e:;
  R(1)=0x320u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c079db2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(5)=R(4);
  R(3)=0x8c036ceeu;
  ST32(R(15)+4,R(4));
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c079dc2u; R(4)=R(15); f_8c036cee(c); }
  R(0)=0xf4u;
  R(3)=0x8c09c3dcu;
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15));
  { c->pr=0x8c079dceu;  f_8c09c3dc(c); }
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c079dde(SH4Ctx *c) {
  { ST32(R(4)+8,R(5)); return; }
}
void f_8c079de2(SH4Ctx *c) {
  R(0)=0x88u;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c079e20(SH4Ctx *c) {
  R(0)=0x8c079e84u;
  fp_ld(c,3,R(0));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  if(!c->t) goto L8c079e38;
  R(0)=0x8c079e88u;
  fp_ld(c,2,R(0));
  R(0)=0x84u;
  { fp_st(c,2,R(0)+R(4)); goto L8c079e3c; }
L8c079e38:;
  R(0)=0x84u;
  fp_st(c,5,R(0)+R(4));
L8c079e3c:;
  {  return; }
}
void f_8c079e4e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c3dcu;
  R(2)=R(4);
  R(1)=R(5);
  R(2)+=0x10u;
  { c->pr=0x8c079e5cu; R(0)=0x68u; f_8c09c3dc(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c079e62(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c3dcu;
  R(1)=R(4);
  R(2)=R(5);
  R(1)+=0x10u;
  { c->pr=0x8c079e70u; R(0)=0x68u; f_8c09c3dc(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c079ea0(SH4Ctx *c) {
  R(2)=0x8c0c52e0u;
  R(0)=0x78u;
  fp_ld(c,3,R(2));
  fp_arith(c,2,3,4);
  fp_arith(c,2,4,5);
  fp_st(c,3,R(0)+R(4));
  R(0)+=0x74u;
  fp_st(c,5,R(0)+R(4));
  R(0)=0x7cu;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c079eb6(SH4Ctx *c) {
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x74u;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(4));
  { fp_st(c,3,R(6)); return; }
}
void f_8c079ec4(SH4Ctx *c) {
  R(0)=0xecu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x7cu;
  fp_arith(c,2,3,4);
  { fp_st(c,3,R(0)+R(4)); return; }
}
void f_8c079f00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff90u;
  R(0)=R(4);
  R(3)=0x8c011602u;
  ST16(R(15)+4,R(0));
  R(14)=R(6);
  ST16(R(15),R(5));
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c079f18u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c011602(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c079f40;
  R(0)=0x68u;
  R(4)=LD32(R(15)+R(0));
  R(3)=LD32(R(4));
  c->t=R(14)==R(3);
  if(!c->t) goto L8c079f32;
  R(0)=0xf0u;
  R(2)=0x8c0c52dcu;
  R(3)=LD32(R(14)+R(0));
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=R(3)==R(1);
  if(c->t) goto L8c079f40;
L8c079f32:;
  R(3)=0x8c036e62u;
  R(6)=R(14);
  ST32(R(4),R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=(int32_t)(int16_t)LD16(R(15));
  { c->pr=0x8c079f40u; R(4)=R(0); f_8c036e62(c); }
L8c079f40:;
  R(15)+=0x70u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c079f48(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff90u;
  R(0)=R(5);
  ST16(R(15)+4,R(0));
  R(3)=0x8c011602u;
  R(5)=R(15);
  ST32(R(15),R(6));
  R(5)+=0x8u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  { c->pr=0x8c079f5eu; R(4)=R(0); f_8c011602(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c079f6c;
  R(0)=0x68u;
  R(3)=LD32(R(15));
  R(4)=LD32(R(15)+R(0));
  R(2)=LD32(R(4));
  ST32(R(3),R(2));
L8c079f6c:;
  R(15)+=0x70u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c079fa0(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffeb0u;
  R(15)+=R(0);
  ST16(R(15),R(5));
  R(5)=0xe8u;
  R(3)=0x8c011602u;
  R(5)+=R(15);
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  fp_mov(c,15,4);
  { c->pr=0x8c079fbau; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c011602(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c07a020;
  R(0)=0x148u;
  R(4)=LD32(R(15)+R(0));
  R(3)=LD32(R(4));
  R(4)=0x80u;
  R(2)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c09c3dcu;
  R(4)+=R(15);
  R(2)+=0x10u;
  R(1)=R(4);
  { c->pr=0x8c079fd6u; R(0)=0x68u; f_8c09c3dc(c); }
  R(5)=0x80u;
  R(4)=R(15);
  R(3)=0x8c014eaau;
  R(6)=LD32(R(15)+8);
  R(5)+=R(15);
  { c->pr=0x8c079fe4u; R(4)+=0xcu; f_8c014eaa(c); }
  R(0)=0x14u;
  fp_mov(c,2,15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(5)=0x80u;
  R(4)=R(15);
  fp_arith(c,2,2,3);
  R(3)=0x8c0153d8u;
  R(5)+=R(15);
  fp_arith(c,3,2,4);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,15,3);
  fp_arith(c,3,15,4);
  fp_st(c,15,R(0)+R(15));
  { c->pr=0x8c07a012u; R(4)+=0x18u; f_8c0153d8(c); }
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(5)+=0x18u;
  R(6)+=0xcu;
  { c->pr=0x8c07a020u; R(4)=LD32(R(15)+4); f_8c014eaa(c); }
L8c07a020:;
  R(1)=0x150u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c07a060(SH4Ctx *c) {
  R(5)=0x8c140ec0u;
  R(0)=0x4u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=R(4);
  fp_ld(c,8,R(0)+R(5));
  R(0)=0xcu;
  fp_ld(c,5,R(5));
  R(3)=R(4);
  fp_ld(c,6,R(0)+R(5));
  R(0)=0x10u;
  fp_mov(c,3,8);
  fp_arith(c,1,3,5);
  fp_ld(c,7,R(0)+R(5));
  fp_ftrc(c,6);
  fp_mov(c,2,6);
  R(0)=0x8u;
  fp_mov(c,0,7);
  c->t=R(7)>>31;R(7)<<=1;
  fp_fmac(c,2,3);
  fp_ld(c,9,R(0)+R(5));
  R(14)=c->fpul;
  R(7)+=R(3);
  R(0)=LD32(c->gbr+44);
  R(7)<<=2;
  R(4)=0xffu;
  fp_ftrc(c,2);
  R(6)=R(0);
  R(6)+=0x8u;
  R(0)=LD32(c->gbr+56);
  R(7)+=R(6);
  c->t=R(6)>=R(7);
  R(1)=c->fpul;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c07a0d6; }
L8c07a0a4:;
  fp_ld(c,4,R(6));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c07a0ae;
  { R(0)=R(14); goto L8c07a0be; }
L8c07a0ae:;
  fp_cmp(c,1,8,4);
  if(!c->t) goto L8c07a0c2;
  fp_arith(c,1,4,5);
  fp_mov(c,0,7);
  fp_mov(c,3,6);
  fp_fmac(c,3,4);
  fp_ftrc(c,3);
  R(0)=c->fpul;
L8c07a0be:;
  { ST8(R(5)+3,R(0)); goto L8c07a0ce; }
L8c07a0c2:;
  fp_cmp(c,1,9,4);
  if(!c->t) goto L8c07a0ca;
  { R(0)=R(1); goto L8c07a0cc; }
L8c07a0ca:;
  R(0)=R(4);
L8c07a0cc:;
  ST8(R(5)+3,R(0));
L8c07a0ce:;
  R(6)+=0xcu;
  c->t=R(6)>=R(7);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c07a0a4; }
L8c07a0d6:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07a100(SH4Ctx *c) {
  R(2)=0x8c140ea4u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c07a11a;
  R(5)=0x8c140ea8u;
  {  goto L8c07a11c; }
L8c07a11a:;
  R(5)=0x8c140ec0u;
L8c07a11c:;
  R(0)=0x4u;
  fp_ld(c,6,R(5));
  fp_ld(c,8,R(0)+R(5));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(5));
  R(0)=0x10u;
  fp_mov(c,3,8);
  fp_arith(c,1,3,6);
  fp_ld(c,7,R(0)+R(5));
  R(0)=0x8u;
  fp_mov(c,2,5);
  R(11)=R(4);
  fp_mov(c,0,7);
  R(3)=R(4);
  fp_fmac(c,2,3);
  fp_ld(c,9,R(0)+R(5));
  R(0)=LD32(c->gbr+44);
  c->t=R(11)>>31;R(11)<<=1;
  R(11)+=R(3);
  R(9)=0x8c143ab0u;
  R(6)=R(0);
  R(0)=LD32(c->gbr+52);
  fp_ftrc(c,2);
  R(6)+=0x8u;
  R(11)<<=2;
  R(5)=0xffu;
  R(11)+=R(6);
  R(7)=R(0);
  c->t=R(6)>=R(11);
  R(0)=0x8c07a194u;
  R(10)=c->fpul;
  { uint32_t k=c->t; fp_ld(c,10,R(0)); if(k) goto L8c07a1e6; }
L8c07a15e:;
  fp_ld(c,4,R(6));
  fp_cmp(c,1,6,4);
  if(!c->t) goto L8c07a168;
  { fp_ftrc(c,5); goto L8c07a176; }
L8c07a168:;
  fp_cmp(c,1,8,4);
  if(!c->t) goto L8c07a1a0;
  fp_arith(c,1,4,6);
  fp_mov(c,0,7);
  fp_mov(c,3,5);
  fp_fmac(c,3,4);
  fp_ftrc(c,3);
L8c07a176:;
  { R(4)=c->fpul; goto L8c07a1aa; }
L8c07a1a0:;
  fp_cmp(c,1,9,4);
  if(!c->t) goto L8c07a1a8;
  { R(4)=R(10); goto L8c07a1aa; }
L8c07a1a8:;
  R(4)=R(5);
L8c07a1aa:;
  R(0)=LD32(c->gbr+28);
  c->t=(R(0)&R(14))==0;
  if(!c->t) goto L8c07a1d8;
  R(3)=0x8c143ab0u;
  R(0)=0x8c07a2a4u;
  fp_ld(c,3,R(0));
  R(2)=LD32(R(3));
  fp_ld(c,2,R(2));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07a1d8;
  R(12)=LD32(R(9));
  R(1)=R(5);
  R(1)-=R(4);
  fp_ld(c,3,R(12));
  fp_arith(c,2,3,10);
  fp_ftrc(c,3);
  R(12)=c->fpul;
  c->t=(int32_t)R(1)>=(int32_t)R(12);
  if(c->t) goto L8c07a1d4;
  { R(0)=R(1); goto L8c07a1dc; }
L8c07a1d4:;
  { R(0)=R(12); goto L8c07a1dc; }
L8c07a1d8:;
  R(0)=R(5);
  R(0)-=R(4);
L8c07a1dc:;
  R(6)+=0xcu;
  ST8(R(7)+3,R(0));
  c->t=R(6)>=R(11);
  { uint32_t k=!c->t; R(7)+=0x4u; if(k) goto L8c07a15e; }
L8c07a1e6:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07a1f2(SH4Ctx *c) {
  R(0)=LD32(c->gbr+0);
  R(7)=R(4);
  R(7)<<=2;
  R(6)=R(0);
  R(0)=LD32(c->gbr+68);
  c->t=R(7)>>31;R(7)<<=1;
  R(5)=R(0);
  R(7)+=R(5);
  c->t=R(5)>=R(7);
  { uint32_t k=c->t; ST32(c->gbr+0,R(0)); if(k) goto L8c07a21e; }
L8c07a208:;
  R(0)=0x4u;
  fp_ld(c,3,R(6));
  fp_arith(c,0,3,4);
  fp_st(c,3,R(5));
  fp_ld(c,2,R(0)+R(6));
  fp_arith(c,0,2,5);
  fp_st(c,2,R(0)+R(5));
  R(5)+=0x8u;
  c->t=R(5)>=R(7);
  { uint32_t k=!c->t; R(6)+=0x8u; if(k) goto L8c07a208; }
L8c07a21e:;
  {  return; }
}
void f_8c07a222(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(3)=0x400000u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+80);
  R(14)=R(0);
  R(0)=LD32(c->gbr+28);
  c->t=(R(0)&R(3))==0;
  { uint32_t k=!c->t; R(13)=R(4); if(k) goto L8c07a24a; }
  R(0)=LD32(c->gbr+68);
  R(1)=0x2cu;
  ST32(c->gbr+0,R(0));
  R(0)=LD32(c->gbr+16);
  R(12)=LD32(R(13)+8);
  { R(4)=(int32_t)(int16_t)LD16(R(1)+R(0)); goto L8c07a254; }
L8c07a24a:;
  R(0)=LD32(R(13)+20);
  ST32(c->gbr+0,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(13)+6);
  R(12)=LD32(R(13)+12);
  R(4)=R(0);
L8c07a254:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c07a2c0;
  R(2)=LD32(R(14)+16);
  R(5)=0x20u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; c->fr[15]=0x3F800000u; if(k) goto L8c07a284; }
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x18u;
  R(6)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(6)=R(6)&0xFF;
  c->t=(R(5)&R(6))==0;
  if(!c->t) goto L8c07a27a;
  R(2)=0x2u;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c07a27c;
L8c07a27a:;
  fp_arith(c,0,5,15);
L8c07a27c:;
  { c->pr=0x8c07a280u;  f_8c07a1f2(c); }
  {  goto L8c07a2c2; }
L8c07a284:;
  R(0)=0x18u;
  R(6)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(6)=R(6)&0xFF;
  c->t=(R(5)&R(6))==0;
  if(!c->t) goto L8c07a294;
  R(2)=0x2u;
  c->t=(R(2)&R(6))==0;
  if(c->t) goto L8c07a2c2;
L8c07a294:;
  fp_mov(c,5,15);
  { c->pr=0x8c07a29au; c->fr[4]=0x00000000u; f_8c07a1f2(c); }
  {  goto L8c07a2c2; }
L8c07a2c0:;
  R(12)=LD32(R(13)+8);
L8c07a2c2:;
  R(0)=LD32(c->gbr+92);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c07a2ee;
  R(0)=LD32(c->gbr+16);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(11)=R(0); if(k) goto L8c07a2e0; }
  R(0)=LD32(R(14)+4);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c07a2e0;
  R(0)=0x2cu;
  { c->pr=0x8c07a2dcu; R(4)=(int32_t)(int16_t)LD16(R(11)+R(0)); f_8c07a100(c); }
  {  goto L8c07a2ee; }
L8c07a2e0:;
  R(3)=0x8c140ea4u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c07a2ee;
  R(0)=0x2cu;
  { c->pr=0x8c07a2eeu; R(4)=(int32_t)(int16_t)LD16(R(11)+R(0)); f_8c07a060(c); }
L8c07a2ee:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(5)=R(12);
  R(4)=LD32(R(13)+8);
  R(0)=(int32_t)(int16_t)LD16(R(13)+4);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  R(3)=0x8c035e60u;
  R(6)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c035e60(c); return; } }
}
void f_8c07a340(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)+=0xfffffff8u;
  R(6)=0x8c140cfcu;
  R(2)=R(4);
  R(2)+=0x18u;
  R(3)=R(4);
  R(3)+=0xcu;
  R(7)=R(4);
  R(7)+=0x24u;
  c->fr[5]=0x3F800000u;
  R(0)=0x0u;
  fp_mov(c,15,5);
  ST32(c->gbr+40,R(0));
  ST32(R(6),R(4));
  ST32(R(15),R(3));
  ST32(R(6)+4,R(3));
  ST32(R(15)+4,R(2));
  ST32(R(6)+8,R(2));
  R(2)=0x8c0c8139u;
  ST32(R(6)+12,R(7));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; fp_mov(c,14,5); if(k) goto L8c07a38e; }
  R(1)=0x8u;
  R(3)=LD32(R(15)+4);
  R(1)+=R(7);
  R(0)=LD32(R(15));
  fp_st(c,4,R(1));
  R(1)=0x8u;
  R(1)+=R(3);
  R(3)=0x8u;
  fp_st(c,4,R(1));
  fp_st(c,4,R(0)+R(3));
  R(0)=R(3);
  fp_st(c,4,R(0)+R(4));
L8c07a38e:;
  R(0)=LD32(c->gbr+92);
  c->t=(R(0)&0x1)==0;
  { uint32_t k=!c->t; R(13)=0x8u; if(k) goto L8c07a39a; }
  {  goto L8c07a4d0; }
L8c07a39a:;
  R(3)=0x8c140ea4u;
  R(0)=0x8c07a40cu;
  fp_ld(c,4,R(0));
  R(14)=R(6);
  R(0)=LD32(c->gbr+80);
  R(4)=LD32(R(3));
  R(7)=0xffu;
  c->t=(R(0)&R(0))==0;
  R(4)&=R(13);
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c07a3b4; }
  {  goto L8c07a486; }
L8c07a3b4:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+4);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c07a486;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07a3c6;
  R(4)=0x8c140ea8u;
  {  goto L8c07a3c8; }
L8c07a3c6:;
  R(4)=0x8c140ec0u;
L8c07a3c8:;
  R(0)=0x4u;
  R(3)=LD32(R(14));
  fp_ld(c,9,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,8,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,7,R(4));
  fp_arith(c,3,4,3);
  fp_cmp(c,1,7,4);
  { uint32_t k=!c->t; fp_ld(c,5,R(0)+R(4)); if(k) goto L8c07a420; }
  fp_ftrc(c,6);
  { R(4)=c->fpul; goto L8c07a43a; }
L8c07a420:;
  fp_mov(c,3,4);
  fp_arith(c,1,3,7);
  fp_mov(c,0,8);
  fp_cmp(c,1,9,4);
  fp_fmac(c,6,3);
  fp_ftrc(c,6);
  { uint32_t k=c->t; R(6)=c->fpul; if(k) goto L8c07a434; }
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c07a438;
L8c07a434:;
  { R(4)=R(6); goto L8c07a43a; }
L8c07a438:;
  R(4)=R(7);
L8c07a43a:;
  R(0)=LD32(c->gbr+28);
  c->t=(R(0)&R(13))==0;
  if(!c->t) goto L8c07a470;
  R(3)=0x8c143ab0u;
  R(0)=0x8c07a524u;
  fp_ld(c,3,R(0));
  R(2)=LD32(R(3));
  fp_ld(c,2,R(2));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07a470;
  R(2)=0x8c143ab0u;
  R(0)=0x8c07a528u;
  fp_ld(c,3,R(0));
  R(6)=R(7);
  R(3)=LD32(R(2));
  R(6)-=R(4);
  fp_ld(c,2,R(3));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  c->t=(int32_t)R(6)>=(int32_t)R(3);
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c07a46c; }
  { R(4)=R(6); goto L8c07a476; }
L8c07a46c:;
  { R(4)=R(3); goto L8c07a476; }
L8c07a470:;
  R(2)=R(7);
  R(2)-=R(4);
  R(4)=R(2);
L8c07a476:;
  R(0)=LD32(c->gbr+36);
  R(4)<<=16;
  R(3)=0xffffffu;
  R(4)<<=8;
  R(0)&=R(3);
  R(0)|=R(4);
  { ST32(c->gbr+36,R(0)); goto L8c07a4d0; }
L8c07a486:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c07a4d0;
  R(4)=0x8c140ec0u;
  R(0)=0x4u;
  R(3)=LD32(R(14));
  fp_ld(c,8,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,9,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,5,R(4));
  fp_arith(c,3,4,3);
  fp_cmp(c,1,5,4);
  { uint32_t k=!c->t; fp_ld(c,7,R(0)+R(4)); if(k) goto L8c07a4ae; }
  fp_ftrc(c,6);
  { R(4)=c->fpul; goto L8c07a4c8; }
L8c07a4ae:;
  fp_mov(c,3,4);
  fp_arith(c,1,3,5);
  fp_mov(c,0,9);
  fp_cmp(c,1,8,4);
  fp_fmac(c,6,3);
  fp_ftrc(c,6);
  { uint32_t k=c->t; R(6)=c->fpul; if(k) goto L8c07a4c2; }
  fp_cmp(c,1,7,4);
  if(!c->t) goto L8c07a4c6;
L8c07a4c2:;
  { R(4)=R(6); goto L8c07a4c8; }
L8c07a4c6:;
  R(4)=R(7);
L8c07a4c8:;
  R(0)=R(4)&0xFF;
  R(0)<<=16;
  R(0)<<=8;
  ST32(c->gbr+40,R(0));
L8c07a4d0:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07a50a;
  R(0)=LD32(c->gbr+80);
  c->fr[4]=0x3F800000u;
  R(4)=R(0);
  R(0)=0x18u;
  R(5)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(5)=R(5)&0xFF;
  c->t=(R(13)&R(5))==0;
  { uint32_t k=!c->t; fp_arith(c,0,4,4); if(k) goto L8c07a4ec; }
  R(2)=0x2u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c07a4ee;
L8c07a4ec:;
  fp_mov(c,15,4);
L8c07a4ee:;
  R(5)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x20u;
  R(5)=R(5)&0xFF;
  c->t=(R(3)&R(5))==0;
  { uint32_t k=!c->t; c->fr[3]=0x00000000u; if(k) goto L8c07a500; }
  R(1)=0x2u;
  c->t=(R(1)&R(5))==0;
  if(c->t) goto L8c07a502;
L8c07a500:;
  fp_mov(c,14,4);
L8c07a502:;
  R(2)=0x8c140cf8u;
  R(3)=0x8c140cf4u;
  fp_st(c,3,R(3));
  fp_st(c,3,R(2));
L8c07a50a:;
  fp_mov(c,4,15);
  fp_mov(c,5,14);
  R(15)+=0x8u;
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  R(3)=0x8c035f40u;
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c035f40(c); return; } }
}
void f_8c07a540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+84);
  R(12)=R(4);
  R(13)=0xe0u;
  R(4)=0x7u;
  R(5)=0x8c0fa82cu;
  R(6)=0x20u;
  R(13)+=R(0);
  R(14)=0x3ffffffu;
  R(0)=LD32(R(13));
  R(2)=LD32(R(5)+8);
  R(0)>>=16;
  R(11)=0xe0000000u;
  R(0)>>=8;
  R(1)=0x8c0d1880u;
  R(4)&=R(0);
  fp_mov(c,15,4);
  R(10)=R(4);
  R(10)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(5));
  R(5)=R(13);
  R(2)=0xff00003cu;
  R(10)+=R(3);
  R(3)=0xff000038u;
  R(4)=LD32(R(10));
  R(14)&=R(4);
  R(4)>>=16;
  R(4)>>=8;
  R(14)|=R(11);
  ST32(R(15),R(14));
  ST32(R(2),R(4));
  ST32(R(3),R(4));
  { uint32_t tg=R(1); c->pr=0x8c07a594u; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(0)=LD32(c->gbr+36);
  R(14)+=0x3cu;
  R(4)=R(12);
  R(4)+=0x4u;
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  R(12)+=0xcu;
  R(14)+=0xfffffff8u;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(11);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=LD32(c->gbr+36);
  R(14)+=0x3cu;
  R(4)=R(12);
  R(4)+=0x4u;
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  R(12)+=0xcu;
  R(14)+=0xfffffff8u;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(11);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=LD32(c->gbr+36);
  R(14)+=0x3cu;
  R(4)=R(12);
  R(4)+=0x4u;
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  R(12)+=0xcu;
  R(14)+=0xfffffff8u;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(11);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=LD32(c->gbr+36);
  R(4)=R(12);
  R(14)+=0x3cu;
  R(3)=0xf0000000u;
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  R(4)+=0x4u;
  R(14)+=0xfffffff8u;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15));
  R(14)+=0x20u;
  R(3)=LD32(R(10));
  R(14)-=R(2);
  R(3)+=R(14);
  ST32(R(10),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07a660(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(3)=0x8c0bc92cu;
  R(2)=R(15);
  R(14)=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(0)=LD32(c->gbr+32);
  R(2)=0x100u;
  R(1)=0xfffffbffu;
  R(0)|=R(2);
  ST32(c->gbr+32,R(0));
  R(0)=LD32(c->gbr+28);
  R(0)&=R(1);
  ST32(c->gbr+28,R(0));
  R(0)=LD32(c->gbr+36);
  R(7)=R(0);
  R(0)=LD32(c->gbr+40);
  R(1)=R(0);
  R(0)=LD32(c->gbr+52);
  R(4)=R(0);
  R(6)=R(4);
  R(6)+=0x10u;
  R(0)=LD32(c->gbr+56);
  c->t=R(6)>R(4);
  { uint32_t k=!c->t; R(5)=R(0); if(k) goto L8c07a6ac; }
L8c07a6a0:;
  ST32(R(4),R(7));
  R(4)+=0x4u;
  c->t=R(6)>R(4);
  ST32(R(5),R(1));
  { uint32_t k=c->t; R(5)+=0x4u; if(k) goto L8c07a6a0; }
L8c07a6ac:;
  R(0)=LD32(c->gbr+92);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c07a6d4;
  R(0)=LD32(c->gbr+80);
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c07a6c8;
  R(0)=LD32(R(4)+4);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c07a6c8;
  { c->pr=0x8c07a6c4u; R(4)=0x4u; f_8c07a100(c); }
  {  goto L8c07a6d4; }
L8c07a6c8:;
  R(3)=0x8c140ea4u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c07a6d4;
  { c->pr=0x8c07a6d4u; R(4)=0x4u; f_8c07a060(c); }
L8c07a6d4:;
  R(4)=R(15);
  R(4)+=0xcu;
  R(0)=0x4u;
  R(5)=R(4);
  c->fr[4]=0x3F800000u;
  R(6)=0x2u;
  fp_st(c,4,R(5));
  fp_st(c,4,R(0)+R(5));
  R(5)+=0x8u;
  c->fr[5]=0x00000000u;
  fp_st(c,5,R(5));
  fp_st(c,4,R(0)+R(5));
  R(5)=R(4);
  R(5)+=0x10u;
  R(3)=0x8c035e60u;
  fp_st(c,5,R(5));
  fp_st(c,5,R(0)+R(5));
  R(5)=R(4);
  R(5)+=0x18u;
  fp_st(c,4,R(5));
  fp_st(c,5,R(0)+R(5));
  R(0)=R(4);
  R(5)=R(14);
  ST32(c->gbr+0,R(0));
  { c->pr=0x8c07a708u; R(4)=R(14); f_8c035e60(c); }
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07a740(SH4Ctx *c) {
  R(3)=0x8c2dd4a8u;
  R(1)=0x8c2dd2acu;
  R(0)=LD32(R(3));
  R(0)<<=2;
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c07a74e(SH4Ctx *c) {
  R(3)=0x8c2dd4a8u;
  R(1)=0x8c2dd2b0u;
  R(0)=LD32(R(3));
  R(0)<<=2;
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c07a75c(SH4Ctx *c) {
  R(3)=0x8c2dd4a8u;
  R(1)=0x8c2dd2b4u;
  R(0)=LD32(R(3));
  R(0)<<=2;
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c07a76a(SH4Ctx *c) {
  R(3)=0x8c2dd4a8u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c07a770(SH4Ctx *c) {
  R(7)=0x8c0c7fccu;
  R(0)=0x8c2dd2a8u;
  R(3)=LD32(R(7));
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(0);
  ST32(R(3)+4,R(4));
  R(2)=LD32(R(7));
  R(2)<<=2;
  R(2)<<=2;
  R(2)+=R(0);
  ST32(R(2)+8,R(5));
  R(3)=LD32(R(7));
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(0);
  ST32(R(3)+12,R(6));
  R(2)=LD32(R(7));
  R(2)+=0x1u;
  ST32(R(7),R(2));
  { R(0)=0x1u; return; }
}
void f_8c07a79c(SH4Ctx *c) {
  R(3)=0x8c0c7fccu;
  { R(0)=LD32(R(3)); return; }
}
void f_8c07a7a2(SH4Ctx *c) {
  R(2)=0x8c2dd4a8u;
  { R(0)=LD32(R(2)); return; }
}
void f_8c07a7a8(SH4Ctx *c) {
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c07a7b4;
  R(3)=0x8c0c7fccu;
  R(2)=LD32(R(3));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c07a7b8;
L8c07a7b4:;
  { R(0)=0x0u; return; }
L8c07a7b8:;
  R(7)=R(4);
  R(3)=0x8c2dd2a8u;
  R(7)<<=2;
  R(7)<<=2;
  R(7)+=R(3);
  R(2)=LD32(R(7)+4);
  R(0)=0x1u;
  ST32(R(5),R(2));
  R(1)=LD32(R(7)+8);
  ST32(R(6),R(1));
  {  return; }
}
void f_8c07a7d0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15)+8,R(5));
  { c->pr=0x8c07a7deu; R(5)=R(15); f_8c07a7a8(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c07a7ea;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c07a7ea:;
  R(3)=LD32(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+4);
  R(3)=0x8c0bc938u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c07a7fcu; R(4)=LD32(R(15)+20); f_8c06874c(c); }
  R(15)+=0xcu;
  R(0)=0x1u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c07a84c(SH4Ctx *c) {
  R(3)=0x8c2dd4a8u;
  R(2)=LD32(R(3));
  c->t=R(4)==R(2);
  if(!c->t) goto L8c07a858;
  { R(0)=0x1u; return; }
L8c07a858:;
  ST32(R(5),R(4));
  {  return; }
}
void f_8c07a858(SH4Ctx *c) {
  ST32(R(5),R(4));
  {  return; }
}
void f_8c07a86e(SH4Ctx *c) {
  R(5)=0x8c2dd4a8u;
  R(0)=R(4);
  ST32(R(5),R(4));
  {  return; }
}
void f_8c07a878(SH4Ctx *c) {
  R(3)=0x8c0c7fccu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(3));
  R(11)=0x8c2dd4a8u;
  R(12)=0x8c2dd2a8u;
  c->t=(int32_t)R(13)>0;
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c07a8b2; }
L8c07a88c:;
  R(0)=R(7);
  R(0)<<=2;
  R(0)<<=2;
  R(0)+=R(12);
  R(3)=LD32(R(0)+4);
  c->t=R(4)==R(3);
  if(!c->t) goto L8c07a8ac;
  R(1)=LD32(R(0)+8);
  c->t=R(5)==R(1);
  if(!c->t) goto L8c07a8ac;
  R(2)=LD32(R(0)+12);
  c->t=R(6)==R(2);
  if(!c->t) goto L8c07a8ac;
  ST32(R(11),R(7));
  { R(0)=R(7); goto L8c07a8b4; }
L8c07a8ac:;
  R(7)+=0x1u;
  c->t=(int32_t)R(7)>=(int32_t)R(13);
  if(!c->t) goto L8c07a88c;
L8c07a8b2:;
  R(0)=0xffffffffu;
L8c07a8b4:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07a8bc(SH4Ctx *c) {
  R(2)=0x8c0c7fccu;
  R(3)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2dd4a8u;
  ST32(R(14),R(3));
  R(4)=LD32(R(2));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c07a900;
  R(1)=0x8c03d4a0u;
  R(4)=0x8c0bc940u;
  R(5)=0x8c0bc958u;
  { c->pr=0x8c07a8dau; R(6)=0x10u; f_8c03d4a0(c); }
  { R(0)=0x0u; goto L8c07a940; }
L8c07a900:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07a90a;
  R(2)=0x0u;
  ST32(R(14),R(2));
L8c07a90a:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c07a93e;
  R(2)=0x8c0c7fdcu;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c07a924;
  R(13)=0x8c0c7fd0u;
  R(5)=LD32(R(13)+8);
  R(6)=LD32(R(13)+12);
  { c->pr=0x8c07a922u; R(4)=LD32(R(13)+4); f_8c07a878(c); }
  ST32(R(14),R(0));
L8c07a924:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c07a93e;
  R(4)=0x280u;
  R(5)=0x1e0u;
  { c->pr=0x8c07a932u; R(6)=0x10u; f_8c07a878(c); }
  ST32(R(14),R(0));
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c07a93e;
  R(2)=0x0u;
  ST32(R(14),R(2));
L8c07a93e:;
  R(0)=0x1u;
L8c07a940:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07a900(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07a90a;
  R(2)=0x0u;
  ST32(R(14),R(2));
L8c07a90a:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c07a93e;
  R(2)=0x8c0c7fdcu;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c07a924;
  R(13)=0x8c0c7fd0u;
  R(5)=LD32(R(13)+8);
  R(6)=LD32(R(13)+12);
  { c->pr=0x8c07a922u; R(4)=LD32(R(13)+4); f_8c07a878(c); }
  ST32(R(14),R(0));
L8c07a924:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c07a93e;
  R(4)=0x280u;
  R(5)=0x1e0u;
  { c->pr=0x8c07a932u; R(6)=0x10u; f_8c07a878(c); }
  ST32(R(14),R(0));
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c07a93e;
  R(2)=0x0u;
  ST32(R(14),R(2));
L8c07a93e:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07a948(SH4Ctx *c) {
  R(7)=0x8c0c7fd0u;
  ST32(R(7)+4,R(4));
  ST32(R(7)+8,R(5));
  { ST32(R(7)+12,R(6)); return; }
}
void f_8c07a952(SH4Ctx *c) {
  R(7)=0x8c0c7fd0u;
  R(3)=LD32(R(7)+4);
  ST32(R(4),R(3));
  R(2)=LD32(R(7)+8);
  ST32(R(5),R(2));
  R(3)=LD32(R(7)+12);
  { ST32(R(6),R(3)); return; }
}
void f_8c07a962(SH4Ctx *c) {
  R(3)=0x8c038880u;
  R(2)=0x0u;
  R(1)=0x8c0c7fccu;
  { ST32(R(1),R(2)); { f_8c038880(c); return; } }
}
void f_8c07a9a0(SH4Ctx *c) {
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c07a9a8;
  { R(4)=0x0u; goto L8c07a9b0; }
L8c07a9a8:;
  R(5)=0x64u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c07a9b0;
  R(4)=R(5);
L8c07a9b0:;
  c->fpul=R(4);
  R(0)=0x8c07a9e0u;
  fp_ld(c,2,R(0));
  R(3)=0x8c0c7fe4u;
  fp_float(c,3);
  fp_arith(c,3,3,2);
  { fp_st(c,3,R(3)); return; }
}
void f_8c07a9c0(SH4Ctx *c) {
  R(2)=0x8c0c7fe4u;
  R(0)=0x8c07a9e0u;
  fp_ld(c,3,R(0));
  fp_ld(c,2,R(2));
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  { R(0)=c->fpul; return; }
}
void f_8c07aa00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05eb34u;
  { c->pr=0x8c07aa10u; R(14)=R(5); f_8c05eb34(c); }
  R(2)=0x8c05eb34u;
  R(4)=R(13);
  R(5)=R(14);
  { c->pr=0x8c07aa1au; R(4)+=0x4u; f_8c05eb34(c); }
  R(12)=0x8c05ebecu;
  R(4)=R(13);
  R(5)=R(14);
  { c->pr=0x8c07aa24u; R(4)+=0x8u; f_8c05ebec(c); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa2cu; R(4)+=0xcu; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa34u; R(4)+=0x10u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa3cu; R(4)+=0x14u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa44u; R(4)+=0x18u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa4cu; R(4)+=0x1cu; sh4_call(c,tg); }
  R(4)=0x8cu;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa54u; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x90u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa5cu; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x94u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa64u; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x98u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa6cu; R(4)+=R(13); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=0x9du;
  R(5)=R(14);
  R(3)=0x8c05eaecu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  R(4)+=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05eaec(c); return; } }
}
void f_8c07aa7e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c05ec74u;
  { c->pr=0x8c07aa8eu; R(14)=R(5); f_8c05ec74(c); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa96u; R(4)+=0x4u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aa9eu; R(4)+=0x8u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aaa6u; R(4)+=0xcu; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aaaeu; R(4)+=0x10u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aab6u; R(4)+=0x14u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aabeu; R(4)+=0x18u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aac6u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(4)=0x8cu;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aaceu; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x90u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aad6u; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x94u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aadeu; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x98u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aae6u; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x9du;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07aaeeu; R(4)+=R(13); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07ab20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c05eda0u;
  { c->pr=0x8c07ab30u; R(14)=R(5); f_8c05eda0(c); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab38u; R(4)+=0x4u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab40u; R(4)+=0x8u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab48u; R(4)+=0xcu; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab50u; R(4)+=0x10u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab58u; R(4)+=0x14u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab60u; R(4)+=0x18u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab68u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(4)=0x8cu;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab70u; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x90u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab78u; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x94u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab80u; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x98u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab88u; R(4)+=R(13); sh4_call(c,tg); }
  R(4)=0x9du;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c07ab90u; R(4)+=R(13); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07ab9a(SH4Ctx *c) {
  R(5)=0x8c2dd964u;
  R(3)=0x12cu;
  R(2)=LD32(R(5));
  c->t=R(2)==R(3);
  if(c->t) goto L8c07abb4;
  R(0)=LD32(R(5));
  R(3)=0x8c2dd4b4u;
  R(0)+=0x1u;
  ST32(R(5),R(0));
  R(0)+=0xffffffffu;
  R(0)<<=2;
  R(3)+=R(0);
  ST32(R(3),R(4));
L8c07abb4:;
  {  return; }
}
void f_8c07abb8(SH4Ctx *c) {
  R(5)=0x8c2dd964u;
  R(3)=LD32(R(5));
  R(3)-=R(4);
  R(2)=R(3);
  c->t=(int32_t)R(2)>=0;
  ST32(R(5),R(3));
  if(c->t) goto L8c07abca;
  R(1)=0x0u;
  ST32(R(5),R(1));
L8c07abca:;
  {  return; }
}
void f_8c07ac00(SH4Ctx *c) {
  R(2)=0x8c2dd964u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c07ac08(SH4Ctx *c) {
  R(3)=0x8c2dd964u;
  R(7)=0x8c2dd4b4u;
  R(6)=LD32(R(3));
  R(5)=R(7);
  R(6)<<=2;
  R(6)+=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c07ac22;
L8c07ac18:;
  R(0)=0x9cu;
  {uint32_t v=LD32(R(5));R(5)+=4;R(3)=v;}
  c->t=R(5)>=R(6);
  ST8(R(3)+R(0),R(4));
  if(!c->t) goto L8c07ac18;
L8c07ac22:;
  {  return; }
}
void f_8c07ac26(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c758cu;
  ST32(R(15),R(5));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c07ac80; }
  R(6)=0xacu;
  R(2)=0x8c064e90u;
  R(5)=0x8c0bc964u;
  R(4)=R(6);
  { c->pr=0x8c07ac44u; R(4)+=0x4cu; f_8c064e90(c); }
  {  goto L8c07ac8c; }
L8c07ac80:;
  R(6)=0xacu;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bc964u;
  R(4)=R(6);
  { c->pr=0x8c07ac8cu; R(4)+=0x4cu; f_8c0199c4(c); }
L8c07ac8c:;
  R(1)=R(0);
  c->t=(R(1)&R(1))==0;
  R(3)=R(0);
  { uint32_t k=!c->t; ST32(R(14),R(0)); if(k) goto L8c07acc6; }
  R(3)=0x8c0125ccu;
  R(5)=0x8c0bc964u;
  R(6)=0xacu;
  { c->pr=0x8c07aca0u; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0xacu;
  R(1)=0x0u;
  R(3)=0x8c0bc964u;
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  R(3)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c07acc4u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c07acc6:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0xf8u;
  { c->pr=0x8c07acd0u; R(4)=LD32(R(14)); f_8c0686b8(c); }
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07ad2e;
  R(2)=LD32(R(15));
  R(0)=0x8c07ad80u;
  R(3)=LD32(R(14));
  R(4)=0x1u;
  R(5)=0x3u;
  ST32(R(3)+4,R(2));
  R(2)=0x0u;
  R(3)=LD32(R(14));
  ST32(R(3),R(4));
  fp_ld(c,4,R(0));
  R(0)=0x8cu;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  c->fr[4]=0x00000000u;
  ST8(R(3)+R(0),R(4));
  R(0)+=0x2u;
  R(3)=LD32(R(14));
  ST8(R(3)+R(0),R(2));
  R(0)+=0xffffffffu;
  R(4)=LD32(R(14));
  ST8(R(4)+R(0),R(5));
  R(3)=LD32(R(14));
  R(0)+=0x4bu;
  fp_st(c,4,R(0)+R(3));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
L8c07ad2e:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07ad36(SH4Ctx *c) {
  R(3)=0x8c0685b4u;
  R(6)=0xf8u;
  {  { f_8c0685b4(c); return; } }
}
void f_8c07ada0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  ST8(R(15),R(4));
  R(4)=0x8c2dd968u;
  R(3)=0x8c0686b8u;
  R(6)=0x12cu;
  R(5)=(int32_t)(int8_t)LD8(R(15));
  { R(15)+=0x4u; { f_8c0686b8(c); return; } }
}
void f_8c07adb0(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c07ae82;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c07ae82;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c07add0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c07add0;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c07ae40;
  {  goto L8c07ae82; }
L8c07add0:;
  R(0)=0x8u;
  fp_mov(c,15,4);
  R(2)=R(4);
  R(3)=0x8c05e612u;
  R(2)+=0x7cu;
  ST32(R(15),R(2));
  R(6)=R(2);
  fp_ld(c,3,R(0)+R(4));
  R(4)=R(15);
  fp_arith(c,0,15,3);
  { c->pr=0x8c07ade8u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,4);
  fp_arith(c,2,2,15);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c07ae82;
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
L8c07ae40:;
  R(0)=0xdcu;
  R(3)=R(4);
  fp_mov(c,15,4);
  R(3)+=0x7cu;
  R(6)=R(3);
  ST32(R(15),R(3));
  fp_ld(c,3,R(0)+R(4));
  R(4)=R(15);
  R(3)=0x8c05e612u;
  fp_arith(c,0,15,3);
  { c->pr=0x8c07ae58u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,4);
  fp_arith(c,2,2,15);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c07ae82;
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
L8c07ae82:;
  R(0)=0x1u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c07ae8c(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c07ae90(SH4Ctx *c) {
  R(3)=LD32(R(4));
  { ST32(R(5),R(3)); return; }
}
void f_8c07ae96(SH4Ctx *c) {
  R(2)=0x8cu;
  R(1)=LD32(R(5));
  R(0)=LD32(R(5)+4);
  R(2)+=R(4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(5)+8);
  R(0)=LD32(R(5)+12);
  ST32(R(2)+8,R(1));
  { ST32(R(2)+12,R(0)); return; }
}
void f_8c07aee0(SH4Ctx *c) {
  R(3)=0x8cu;
  R(3)+=R(4);
  R(2)=LD32(R(3));
  R(1)=LD32(R(3)+4);
  ST32(R(5),R(2));
  ST32(R(5)+4,R(1));
  R(2)=LD32(R(3)+8);
  R(1)=LD32(R(3)+12);
  ST32(R(5)+8,R(2));
  { ST32(R(5)+12,R(1)); return; }
}
void f_8c07aef6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c3dcu;
  R(2)=R(4);
  R(1)=R(5);
  R(2)+=0x24u;
  { c->pr=0x8c07af04u; R(0)=0x68u; f_8c09c3dc(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c07af0a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c3dcu;
  R(1)=R(4);
  R(2)=R(5);
  R(1)+=0x24u;
  { c->pr=0x8c07af18u; R(0)=0x68u; f_8c09c3dc(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c07af24(SH4Ctx *c) {
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,5,R(0)+R(4)); return; }
}
void f_8c07af2e(SH4Ctx *c) {
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(4));
  { fp_st(c,3,R(6)); return; }
}
void f_8c07af60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(0)=0x10u;
  fp_mov(c,15,4);
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  fp_mov(c,14,5);
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_st(c,15,R(0)+R(14));
  R(0)=0x14u;
  fp_st(c,14,R(0)+R(14));
  R(0)=0x8c07afc4u;
  R(3)=0x8c09d2dcu;
  fp_ld(c,13,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c07af84u; fp_arith(c,2,4,13); f_8c09d2dc(c); }
  R(3)=0x8c09d2dcu;
  R(0)=0x18u;
  fp_mov(c,4,14);
  fp_st(c,0,R(0)+R(14));
  { c->pr=0x8c07af90u; fp_arith(c,2,4,13); f_8c09d2dc(c); }
  R(0)=0x1cu;
  fp_st(c,0,R(0)+R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07afa0(SH4Ctx *c) {
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x14u;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(4));
  { fp_st(c,3,R(6)); return; }
}
void f_8c07afae(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c07afb2(SH4Ctx *c) {
  { ST32(R(4)+4,R(5)); return; }
}
void f_8c07afe0(SH4Ctx *c) {
  R(0)=0x9eu;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c07afe6(SH4Ctx *c) {
  R(0)=0x9eu;
  R(3)=0x1u;
  { ST8(R(4)+R(0),R(3)); return; }
}
void f_8c07afee(SH4Ctx *c) {
  R(0)=0x9fu;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c07aff4(SH4Ctx *c) {
  R(0)=0x9fu;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c07affa(SH4Ctx *c) {
  R(0)=0x9fu;
  R(3)=0x1u;
  { ST8(R(4)+R(0),R(3)); return; }
}
void f_8c07b002(SH4Ctx *c) {
  R(2)=0xe8u;
  R(2)+=R(4);
  R(1)=LD32(R(2));
  R(3)=LD32(R(2)+4);
  ST32(R(5),R(1));
  ST32(R(5)+4,R(3));
  R(1)=LD32(R(2)+8);
  R(3)=LD32(R(2)+12);
  ST32(R(5)+8,R(1));
  { ST32(R(5)+12,R(3)); return; }
}
void f_8c07b040(SH4Ctx *c) {
  R(0)=0x9du;
  { R(0)=(int32_t)(int8_t)LD8(R(4)+R(0)); return; }
}
void f_8c07b046(SH4Ctx *c) {
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07b056;
  R(0)=0x9du;
  R(3)=0x1u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(2)|=R(3); goto L8c07b060; }
L8c07b056:;
  R(0)=0x9du;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=R(0);
  R(3)+=0x61u;
  R(2)&=R(3);
L8c07b060:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c07b064(SH4Ctx *c) {
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c07b074;
  R(0)=0x9du;
  R(3)=0x2u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(2)|=R(3); goto L8c07b07e; }
L8c07b074:;
  R(0)=0x9du;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=R(0);
  R(3)+=0x60u;
  R(2)&=R(3);
L8c07b07e:;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c07b0a0(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(9)+R(0));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(0)=0x9du;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c07b0c0(SH4Ctx *c) {
  R(0)=0x9du;
  { ST8(R(4)+R(0),R(5)); return; }
}
void f_8c07b0c6(SH4Ctx *c) {
  R(0)=0xcu;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c07b0cc(SH4Ctx *c) {
  R(0)=0xcu;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c07b0d2(SH4Ctx *c) {
  R(0)=0x8u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c07b0d8(SH4Ctx *c) {
  R(0)=0x8u;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c07b0de(SH4Ctx *c) {
  R(0)=0x10u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c07b100(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(9)+R(0));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  { f_8c07b120(c); return; }
}
void f_8c07b120(SH4Ctx *c) {
  R(0)=0x10u;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c07b126(SH4Ctx *c) {
  R(0)=0x14u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c07b12c(SH4Ctx *c) {
  R(0)=0x14u;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c07b132(SH4Ctx *c) {
  R(0)=0xe0u;
  { fp_st(c,4,R(0)+R(4)); return; }
}
void f_8c07b138(SH4Ctx *c) {
  R(0)=0xe0u;
  { fp_ld(c,0,R(0)+R(4)); return; }
}
void f_8c07b13e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=0x8c143ab0u;
  R(0)=0x10u;
  c->fr[3]=0x00000000u;
  R(13)=R(4);
  R(3)=LD32(R(14));
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(12)=0xfu; if(k) goto L8c07b180; }
  { R(0)=0xfu; goto L8c07b1e2; }
L8c07b180:;
  R(0)=LD32(c->gbr+72);
  R(6)=R(13);
  R(3)=0x8c014eaau;
  R(6)+=0x7cu;
  R(5)=R(0);
  { c->pr=0x8c07b18eu; R(4)=R(15); f_8c014eaa(c); }
  R(6)=LD32(R(14));
  R(4)=R(15);
  R(3)=0x8c05e612u;
  R(5)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c07b19cu; R(4)+=0xcu; f_8c05e612(c); }
  R(0)=0xcu;
  R(3)=LD32(R(14));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x8u;
  fp_mov(c,5,4);
  fp_arith(c,1,5,3);
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c07b1ce;
  { R(0)=0x0u; goto L8c07b1e2; }
L8c07b1ce:;
  R(2)=LD32(R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0xcu;
  fp_arith(c,0,4,3);
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c07b1e0;
  R(12)=0x3u;
L8c07b1e0:;
  R(0)=R(12);
L8c07b1e2:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07b1ee(SH4Ctx *c) {
  R(4)=0x8c2ddaa0u;
  R(0)=0x4u;
  R(5)=0x8c2dda9cu;
  R(1)=R(0);
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  R(6)=0x8c2dda98u;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(6));
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(5));
  R(2)=LD32(R(4));
  R(1)+=R(3);
  fp_ld(c,0,R(6));
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(2));
  R(0)=0x8u;
  R(2)=LD32(R(5));
  R(1)=R(0);
  R(3)=LD32(R(4));
  R(1)+=R(2);
  fp_ld(c,0,R(6));
  fp_ld(c,2,R(0)+R(3));
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0xcu;
  R(2)=LD32(R(4));
  R(3)=LD32(R(5));
  R(1)=R(0);
  fp_ld(c,2,R(0)+R(2));
  R(1)+=R(3);
  fp_ld(c,0,R(6));
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  { fp_st(c,2,R(0)+R(2)); return; }
}
void f_8c07b240(SH4Ctx *c) {
  R(4)=0x8c2ddaa0u;
  R(0)=0x4u;
  R(5)=0x8c2dda9cu;
  R(1)=R(0);
  R(3)=LD32(R(4));
  R(2)=LD32(R(5));
  R(6)=0x8c2dda98u;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(6));
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(5));
  R(2)=LD32(R(4));
  R(1)+=R(3);
  fp_ld(c,0,R(6));
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(2));
  R(0)=0x8u;
  R(2)=LD32(R(5));
  R(1)=R(0);
  R(3)=LD32(R(4));
  R(1)+=R(2);
  fp_ld(c,0,R(6));
  fp_ld(c,2,R(0)+R(3));
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  { fp_st(c,2,R(0)+R(3)); return; }
}
void f_8c07b27e(SH4Ctx *c) {
  R(1)=0x8c2ddaa0u;
  R(0)=0xcu;
  R(2)=LD32(R(1));
  R(1)=0x8c2dda9cu;
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(1));
  R(1)=0x8c2dda98u;
  fp_ld(c,0,R(1));
  R(1)=R(0);
  R(1)+=R(3);
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  { fp_st(c,2,R(0)+R(2)); return; }
}
void f_8c07b29a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_mov(c,14,4);
  fp_arith(c,2,14,4);
  fp_ld(c,4,R(0)+R(4));
  fp_mov(c,15,4);
  fp_arith(c,2,15,4);
  fp_cmp(c,0,14,15);
  { uint32_t k=c->t; R(0)=LD32(c->gbr+16); if(k) goto L8c07b2d2; }
  fp_mov(c,3,15);
  fp_arith(c,1,3,14);
  c->fr[13]=0x3F800000u;
  { fp_arith(c,3,13,3); goto L8c07b2d4; }
L8c07b2d2:;
  c->fr[13]=0x3F800000u;
L8c07b2d4:;
  R(4)=R(0);
  R(0)=0x2cu;
  R(9)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(13)=LD32(R(4));
  R(3)=R(9);
  c->t=R(9)>>31;R(9)<<=1;
  R(9)+=R(3);
  R(10)=0x8c2ddaa0u;
  R(11)=0x8c05e55cu;
  R(9)<<=2;
  R(14)=0x8c2dda98u;
  R(9)+=R(13);
  R(8)=0x8c05e612u;
  { R(12)=LD32(R(4)+4); goto L8c07b3ac; }
L8c07b320:;
  R(6)=0x8c2ddaa4u;
  R(4)=R(15);
  R(5)=R(13);
  { uint32_t tg=R(8); c->pr=0x8c07b32au; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_cmp(c,1,15,3);
  { uint32_t k=!c->t; fp_st(c,3,R(15)); if(k) goto L8c07b3a2; }
  R(0)=0x8u;
  fp_ld(c,2,R(15));
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,3,0);
  fp_fmac(c,2,3);
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_st(c,2,R(15)); if(k) goto L8c07b3a2; }
  R(0)=0xcu;
  fp_ld(c,3,R(15));
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_cmp(c,1,14,3);
  { uint32_t k=!c->t; fp_st(c,3,R(15)); if(k) goto L8c07b372; }
  R(4)=R(15);
  R(5)=R(12);
  { uint32_t tg=R(11); c->pr=0x8c07b360u; R(4)+=0x4u; sh4_call(c,tg); }
  fp_mov(c,2,0);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,0,R(14)); if(k) goto L8c07b3a2; }
  fp_ld(c,3,R(15));
  fp_fsrra(c,3);
  { fp_unary(c,0,3); goto L8c07b394; }
L8c07b372:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c07b3a2;
  R(4)=R(15);
  R(5)=R(12);
  { uint32_t tg=R(11); c->pr=0x8c07b37eu; R(4)+=0x4u; sh4_call(c,tg); }
  fp_mov(c,2,0);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,0,R(14)); if(k) goto L8c07b3a2; }
  fp_ld(c,3,R(15));
  fp_ld(c,2,R(15));
  fp_arith(c,1,3,15);
  fp_fsrra(c,2);
  fp_arith(c,2,3,13);
  fp_arith(c,2,3,2);
L8c07b394:;
  fp_ld(c,2,R(14));
  R(2)=0x8c2dda94u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
  R(3)=LD32(R(2));
  { uint32_t tg=R(3); c->pr=0x8c07b3a2u;  sh4_call(c,tg); }
L8c07b3a2:;
  R(1)=LD32(R(10));
  R(12)+=0xcu;
  R(13)+=0xcu;
  R(1)+=0x10u;
  ST32(R(10),R(1));
L8c07b3ac:;
  c->t=R(13)>=R(9);
  if(!c->t) goto L8c07b320;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07b400(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff74u;
  R(15)+=R(0);
  R(3)=0x8c0163e6u;
  R(14)=R(4);
  R(0)=LD32(c->gbr+76);
  { c->pr=0x8c07b426u; R(4)=R(0); f_8c0163e6(c); }
  c->fr[3]=0x3F800000u;
  fp_mov(c,4,0);
  fp_unary(c,0,3);
  fp_arith(c,0,4,3);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  { uint32_t k=!c->t; fp_mov(c,14,0); if(k) goto L8c07b43a; }
  { fp_mov(c,3,4); goto L8c07b43e; }
L8c07b43a:;
  c->fr[3]=0x3F800000u;
  fp_arith(c,1,3,14);
L8c07b43e:;
  R(0)=0x8c07b488u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c07b44e;
  { c->pr=0x8c07b44au; R(4)=R(14); f_8c07b29a(c); }
  {  goto L8c07b5f8; }
L8c07b44e:;
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,13,4);
  fp_arith(c,2,13,4);
  fp_ld(c,4,R(0)+R(14));
  fp_mov(c,15,4);
  fp_arith(c,2,15,4);
  fp_cmp(c,0,13,15);
  if(c->t) goto L8c07b4a0;
  fp_mov(c,3,15);
  fp_arith(c,1,3,13);
  fp_mov(c,2,3);
  fp_mov(c,3,14);
  { fp_arith(c,3,3,2); goto L8c07b4a2; }
L8c07b4a0:;
  fp_mov(c,3,14);
L8c07b4a2:;
  R(0)=0x4u;
  R(3)=0x8c0156cau;
  fp_st(c,3,R(0)+R(15));
  R(6)=R(14);
  R(0)=LD32(c->gbr+72);
  R(4)=R(15);
  R(6)+=0x24u;
  R(5)=R(0);
  { c->pr=0x8c07b4b6u; R(4)+=0x18u; f_8c0156ca(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c07b4c2u; R(4)+=0x18u; f_8c0163ce(c); }
  R(0)=LD32(c->gbr+16);
  R(9)=0x8c05e55cu;
  R(4)=R(0);
  R(0)=LD32(c->gbr+44);
  R(8)=0x8c2ddaa0u;
  R(12)=R(0);
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(14)=0x8c2dda98u;
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(13)=0x8c05e612u;
  R(3)<<=2;
  R(3)+=R(12);
  ST32(R(15)+8,R(3));
  R(11)=LD32(R(4));
  R(10)=LD32(R(4)+4);
  { c->fr[12]=0x3F800000u; goto L8c07b5ee; }
L8c07b4ea:;
  R(4)=0x80u;
  R(5)=R(15);
  R(6)=R(12);
  R(5)+=0xcu;
  { uint32_t tg=R(13); c->pr=0x8c07b4f6u; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x80u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_cmp(c,1,15,3);
  { uint32_t k=c->t; fp_st(c,3,R(15)); if(k) goto L8c07b508; }
  {  goto L8c07b5e2; }
L8c07b508:;
  R(0)=0x84u;
  fp_ld(c,2,R(15));
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,3,0);
  fp_fmac(c,2,3);
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_st(c,2,R(15)); if(k) goto L8c07b5e2; }
  R(0)=0x88u;
  fp_ld(c,3,R(15));
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_cmp(c,1,13,3);
  { uint32_t k=!c->t; fp_st(c,3,R(15)); if(k) goto L8c07b5a4; }
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c07b5a0;
  R(4)=0x80u;
  R(5)=R(11);
  R(6)=0x8c2ddaa4u;
  { uint32_t tg=R(13); c->pr=0x8c07b538u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x80u;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c07b540u; R(4)+=R(15); sh4_call(c,tg); }
  fp_mov(c,2,0);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,0,R(14)); if(k) goto L8c07b5e2; }
  fp_ld(c,3,R(15));
  fp_mov(c,2,14);
  fp_fsrra(c,3);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(14));
  fp_unary(c,0,2);
  fp_arith(c,2,3,2);
  { fp_st(c,3,R(14)); goto L8c07b5da; }
L8c07b5a0:;
  { fp_st(c,12,R(14)); goto L8c07b5da; }
L8c07b5a4:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c07b5e2;
  R(4)=0x80u;
  R(5)=R(11);
  R(6)=0x8c2ddaa4u;
  { uint32_t tg=R(13); c->pr=0x8c07b5b2u; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x80u;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c07b5bau; R(4)+=R(15); sh4_call(c,tg); }
  fp_mov(c,2,0);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,0,R(14)); if(k) goto L8c07b5e2; }
  fp_ld(c,3,R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(15));
  fp_arith(c,1,3,15);
  fp_ld(c,2,R(0)+R(15));
  fp_fsrra(c,1);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(14));
  fp_arith(c,2,3,1);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(14));
L8c07b5da:;
  R(2)=0x8c2dda94u;
  R(3)=LD32(R(2));
  { uint32_t tg=R(3); c->pr=0x8c07b5e2u;  sh4_call(c,tg); }
L8c07b5e2:;
  R(3)=LD32(R(8));
  R(11)+=0xcu;
  R(10)+=0xcu;
  R(3)+=0x10u;
  R(12)+=0xcu;
  ST32(R(8),R(3));
L8c07b5ee:;
  R(2)=LD32(R(15)+8);
  c->t=R(12)>=R(2);
  if(c->t) goto L8c07b5f8;
  {  goto L8c07b4ea; }
L8c07b5f8:;
  R(1)=0x8cu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07b616(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=LD32(c->gbr+16);
  R(12)=0x8c2ddaa0u;
  R(5)=R(0);
  R(0)=0x2cu;
  R(10)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(13)=LD32(R(5));
  R(3)=R(10);
  c->t=R(10)>>31;R(10)<<=1;
  R(10)+=R(3);
  R(3)=0x8cu;
  R(0)=LD32(c->gbr+60);
  R(10)<<=2;
  R(2)=0x8c2dda9cu;
  R(10)+=R(13);
  R(8)=0x8c2dda94u;
  R(3)+=R(4);
  R(9)=0x8c05e612u;
  R(14)=0x8c2dda98u;
  R(11)=LD32(R(5)+4);
  ST32(R(12),R(0));
  { ST32(R(2),R(3)); goto L8c07b6c8; }
L8c07b680:;
  R(6)=0x8c2ddaa4u;
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c07b688u; R(4)=R(15); sh4_call(c,tg); }
  R(3)=0x8c05e55cu;
  R(5)=R(11);
  { c->pr=0x8c07b690u; R(4)=R(15); f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,3,4);
  { uint32_t k=!c->t; fp_st(c,0,R(14)); if(k) goto L8c07b6be; }
  R(0)=0x4u;
  fp_ld(c,5,R(15));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,7,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_unary(c,2,3);
  fp_arith(c,3,4,3);
  fp_unary(c,0,4);
  fp_st(c,4,R(14));
  R(3)=LD32(R(8));
  { uint32_t tg=R(3); c->pr=0x8c07b6beu;  sh4_call(c,tg); }
L8c07b6be:;
  R(2)=LD32(R(12));
  R(11)+=0xcu;
  R(13)+=0xcu;
  R(2)+=0x10u;
  ST32(R(12),R(2));
L8c07b6c8:;
  c->t=R(13)>=R(10);
  if(!c->t) goto L8c07b680;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07b680(SH4Ctx *c) {
L8c07b680:;
  R(6)=0x8c2ddaa4u;
  R(5)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c07b688u; R(4)=R(15); sh4_call(c,tg); }
  R(3)=0x8c05e55cu;
  R(5)=R(11);
  { c->pr=0x8c07b690u; R(4)=R(15); f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,3,4);
  { uint32_t k=!c->t; fp_st(c,0,R(14)); if(k) goto L8c07b6be; }
  R(0)=0x4u;
  fp_ld(c,5,R(15));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,7,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_unary(c,2,3);
  fp_arith(c,3,4,3);
  fp_unary(c,0,4);
  fp_st(c,4,R(14));
  R(3)=LD32(R(8));
  { uint32_t tg=R(3); c->pr=0x8c07b6beu;  sh4_call(c,tg); }
L8c07b6be:;
  R(2)=LD32(R(12));
  R(11)+=0xcu;
  R(13)+=0xcu;
  R(2)+=0x10u;
  ST32(R(12),R(2));
  c->t=R(13)>=R(10);
  if(!c->t) goto L8c07b680;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07b6e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff78u;
  R(15)+=R(0);
  R(0)=0xcu;
  R(14)=R(4);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,14,4);
  fp_arith(c,2,14,4);
  fp_ld(c,4,R(0)+R(14));
  fp_mov(c,15,4);
  fp_arith(c,2,15,4);
  fp_cmp(c,0,14,15);
  if(c->t) goto L8c07b740;
  fp_mov(c,3,15);
  fp_arith(c,1,3,14);
  fp_mov(c,2,3);
  c->fr[3]=0x3F800000u;
  { fp_arith(c,3,3,2); goto L8c07b742; }
L8c07b740:;
  c->fr[3]=0x3F800000u;
L8c07b742:;
  R(0)=0x4u;
  R(3)=0x8c0163e6u;
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(c->gbr+76);
  { c->pr=0x8c07b74eu; R(4)=R(0); f_8c0163e6(c); }
  R(0)=LD32(c->gbr+72);
  R(6)=R(14);
  R(3)=0x8c0156cau;
  R(4)=R(15);
  R(5)=R(0);
  R(6)+=0x24u;
  fp_mov(c,13,0);
  { c->pr=0x8c07b760u; R(4)+=0x8u; f_8c0156ca(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x7cu;
  { c->pr=0x8c07b76cu; R(4)+=0x8u; f_8c0163ce(c); }
  R(0)=LD32(c->gbr+44);
  R(1)=0x2cu;
  R(11)=0x8c05e612u;
  R(12)=R(0);
  R(0)=LD32(c->gbr+16);
  R(10)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=LD32(c->gbr+60);
  R(3)=R(10);
  c->t=R(10)>>31;R(10)<<=1;
  R(10)+=R(3);
  R(13)=R(0);
  R(10)<<=2;
  R(10)+=R(12);
  { c->fr[12]=0x3F800000u; goto L8c07b874; }
L8c07b78a:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x7cu;
  R(6)=R(12);
  { uint32_t tg=R(11); c->pr=0x8c07b796u; R(4)+=0x70u; sh4_call(c,tg); }
  R(0)=0x70u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_cmp(c,1,15,3);
  { uint32_t k=!c->t; fp_st(c,3,R(15)); if(k) goto L8c07b870; }
  R(0)=0x74u;
  fp_ld(c,2,R(15));
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,3,0);
  fp_fmac(c,2,3);
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_st(c,2,R(15)); if(k) goto L8c07b870; }
  R(0)=0x78u;
  fp_ld(c,3,R(15));
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_cmp(c,1,14,3);
  { uint32_t k=!c->t; fp_st(c,3,R(15)); if(k) goto L8c07b800; }
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c07b7ce;
  { fp_mov(c,4,13); goto L8c07b814; }
L8c07b7ce:;
  { fp_mov(c,4,12); goto L8c07b814; }
L8c07b800:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c07b870;
  fp_ld(c,3,R(15));
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,1,2,3);
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,2,1);
  fp_mov(c,4,2);
  fp_arith(c,2,4,13);
L8c07b814:;
  R(0)=0x9fu;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07b830;
  R(1)=0x98u;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(13));
  R(1)+=R(14);
  fp_mov(c,0,4);
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  { fp_st(c,2,R(0)+R(13)); goto L8c07b870; }
L8c07b830:;
  R(0)=0x8cu;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  R(1)=0x90u;
  R(1)+=R(14);
  fp_st(c,2,R(13));
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(1));
  R(1)=0x94u;
  fp_fmac(c,2,3);
  R(1)+=R(14);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x9fu;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c07b870;
  R(1)=0x98u;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(13));
  R(1)+=R(14);
  fp_mov(c,0,4);
  fp_ld(c,3,R(1));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(13));
L8c07b870:;
  R(13)+=0x10u;
  R(12)+=0xcu;
L8c07b874:;
  c->t=R(12)>=R(10);
  if(!c->t) goto L8c07b78a;
  R(1)=0x88u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07b892(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff98u;
  { c->pr=0x8c07b89cu; R(14)=R(4); f_8c07b13e(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c07b93a;
  R(0)=0x9eu;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c07b8e0;
  { c->pr=0x8c07b8acu; R(4)=R(14); f_8c07b6e0(c); }
  {  goto L8c07b93a; }
L8c07b8e0:;
  R(0)=0x9fu;
  R(4)=0x8c2dda94u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07b8f2;
  R(2)=0x8c07b27eu;
  {  goto L8c07b8fe; }
L8c07b8f2:;
  R(0)=0x9fu;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c07b902;
  R(2)=0x8c07b240u;
L8c07b8fe:;
  { ST32(R(4),R(2)); goto L8c07b906; }
L8c07b902:;
  R(1)=0x8c07b1eeu;
  ST32(R(4),R(1));
L8c07b906:;
  R(3)=0x8c2ddaa0u;
  R(0)=LD32(c->gbr+60);
  R(2)=0x8cu;
  ST32(R(3),R(0));
  R(1)=0x8c2dda9cu;
  R(2)+=R(14);
  R(3)=0x8c0153d8u;
  ST32(R(1),R(2));
  R(0)=LD32(c->gbr+76);
  R(5)=R(0);
  { c->pr=0x8c07b91eu; R(4)=R(15); f_8c0153d8(c); }
  R(0)=LD32(c->gbr+72);
  R(5)=R(15);
  R(3)=0x8c0156cau;
  R(6)=R(0);
  { c->pr=0x8c07b92au; R(4)=R(15); f_8c0156ca(c); }
  R(4)=0x8c2ddaa4u;
  R(6)=R(14);
  R(2)=0x8c014eaau;
  R(6)+=0x7cu;
  { c->pr=0x8c07b936u; R(5)=R(15); f_8c014eaa(c); }
  { c->pr=0x8c07b93au; R(4)=R(14); f_8c07b400(c); }
L8c07b93a:;
  R(15)+=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07b9a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=0x8c143ab0u;
  R(0)=0x10u;
  c->fr[3]=0x00000000u;
  ST32(R(15),R(4));
  R(3)=LD32(R(14));
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c07ba04;
  R(0)=LD32(c->gbr+72);
  R(4)=R(15);
  R(6)=LD32(R(15));
  R(3)=0x8c014eaau;
  R(5)=R(0);
  R(6)+=0x7cu;
  { c->pr=0x8c07b9c6u; R(4)+=0x4u; f_8c014eaa(c); }
  R(6)=LD32(R(14));
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)+=0x4u;
  R(5)+=0x4u;
  { c->pr=0x8c07b9d6u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  R(2)=LD32(R(14));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  R(3)=LD32(R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c07ba0e;
L8c07ba04:;
  R(0)=0x1u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c07ba0e:;
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07ba18(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff7d0u;
  R(15)+=R(0);
  R(0)=0x8u;
  R(14)=R(4);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0xcu;
  c->fr[2]=0x00000000u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(15));
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x4u;
  fp_arith(c,1,4,5);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_cmp(c,0,4,2);
  fp_st(c,3,R(0)+R(15));
  { uint32_t k=c->t; c->fr[15]=0x3F800000u; if(k) goto L8c07baa0; }
  fp_ld(c,1,R(15));
  R(0)=0x18u;
  fp_arith(c,1,1,3);
  fp_mov(c,3,15);
  fp_arith(c,3,3,1);
  { fp_st(c,3,R(0)+R(15)); goto L8c07baa4; }
L8c07baa0:;
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
L8c07baa4:;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  { uint32_t k=c->t; R(6)=R(14); if(k) goto L8c07baca; }
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x14u;
  fp_arith(c,1,1,2);
  fp_mov(c,2,15);
  fp_arith(c,3,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c07bace; }
L8c07baca:;
  R(0)=0x14u;
  fp_st(c,15,R(0)+R(15));
L8c07bace:;
  R(0)=LD32(c->gbr+72);
  R(6)+=0x24u;
  R(4)=0xb4u;
  R(3)=0x8c0156cau;
  R(5)=R(0);
  { c->pr=0x8c07badcu; R(4)+=R(15); f_8c0156ca(c); }
  R(5)=0x11cu;
  R(4)=0xb4u;
  R(2)=0x8c0163ceu;
  R(5)+=R(15);
  { c->pr=0x8c07bae8u; R(4)+=R(15); f_8c0163ce(c); }
  R(0)=LD32(c->gbr+76);
  R(4)=R(15);
  R(3)=0x8c0153d8u;
  R(5)=R(0);
  { c->pr=0x8c07baf4u; R(4)+=0x4cu; f_8c0153d8(c); }
  R(6)=0xb4u;
  R(5)=R(15);
  R(2)=0x8c0156cau;
  R(4)=R(15);
  R(6)+=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c07bb04u; R(4)+=0x4cu; f_8c0156ca(c); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015e64u;
  R(4)=R(15);
  R(5)+=0x1cu;
  R(7)+=0x40u;
  R(6)+=0x34u;
  { c->pr=0x8c07bb18u; R(4)+=0x4cu; f_8c015e64(c); }
  R(4)=0xb4u;
  R(5)=R(15);
  R(6)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x40u;
  R(7)+=0x28u;
  R(6)+=0x34u;
  { c->pr=0x8c07bb2cu; R(4)+=R(15); f_8c015e64(c); }
  R(0)=LD32(c->gbr+16);
  R(7)=R(15);
  R(10)=0x128u;
  R(7)+=0x40u;
  R(8)=R(0);
  R(0)=LD32(c->gbr+44);
  R(3)=0x8c07ca00u;
  R(10)+=R(15);
  R(5)=R(0);
  R(0)=0x2cu;
  R(6)=R(10);
  { c->pr=0x8c07bb46u; R(4)=(int32_t)(int16_t)LD16(R(8)+R(0)); f_8c07ca00(c); }
  R(4)=0x11cu;
  R(5)=R(15);
  R(12)=0x8c05e55cu;
  R(5)+=0x40u;
  { c->pr=0x8c07bb52u; R(4)+=R(15); f_8c05e55c(c); }
  R(5)=R(15);
  R(4)=0x11cu;
  R(0)=0xcu;
  R(5)+=0x34u;
  fp_st(c,0,R(0)+R(15));
  { uint32_t tg=R(12); c->pr=0x8c07bb60u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=0x11cu;
  R(0)=0x8u;
  R(5)+=0x28u;
  fp_st(c,0,R(0)+R(15));
  { uint32_t tg=R(12); c->pr=0x8c07bb6eu; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x10u;
  fp_st(c,0,R(0)+R(15));
  R(0)=LD32(c->gbr+60);
  R(13)=R(0);
  { R(11)=0x0u; goto L8c07bd90; }
L8c07bba0:;
  R(4)=R(11);
  R(4)<<=2;
  R(0)=0xcu;
  R(4)+=R(10);
  fp_ld(c,14,R(0)+R(15));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  fp_arith(c,1,14,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,14);
  if(c->t) goto L8c07bbbe;
  {  goto L8c07bd8c; }
L8c07bbbe:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,14,3);
  if(c->t) goto L8c07bbc8;
  {  goto L8c07bd8c; }
L8c07bbc8:;
  R(9)=R(11);
  c->t=R(9)>>31;R(9)<<=1;
  R(0)=LD32(c->gbr+44);
  R(3)=R(11);
  R(5)=R(15);
  R(9)+=R(3);
  R(4)=R(0);
  R(5)+=0x34u;
  R(9)<<=2;
  { uint32_t tg=R(12); c->pr=0x8c07bbdeu; R(4)+=R(9); sh4_call(c,tg); }
  R(0)=0x8u;
  fp_ld(c,12,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(14));
  fp_arith(c,1,12,0);
  fp_cmp(c,1,4,12);
  if(c->t) goto L8c07bbf0;
  {  goto L8c07bd8c; }
L8c07bbf0:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
  fp_cmp(c,1,12,3);
  if(c->t) goto L8c07bbfc;
  {  goto L8c07bd8c; }
L8c07bbfc:;
  R(0)=LD32(c->gbr+44);
  R(5)=R(15);
  R(5)+=0x28u;
  R(4)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c07bc08u; R(4)+=R(9); sh4_call(c,tg); }
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(14));
  fp_arith(c,1,4,0);
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c07bc1a;
  {  goto L8c07bd8c; }
L8c07bc1a:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c07bc26;
  {  goto L8c07bd8c; }
L8c07bc26:;
  fp_mov(c,3,14);
  fp_arith(c,2,14,3);
  c->fr[2]=0x00000000u;
  fp_mov(c,3,12);
  fp_arith(c,2,12,3);
  fp_mov(c,3,4);
  fp_cmp(c,0,14,2);
  { uint32_t k=!c->t; fp_arith(c,2,4,3); if(k) goto L8c07bc3c; }
  {  goto L8c07bd8c; }
L8c07bc3c:;
  fp_mov(c,1,15);
  fp_arith(c,3,1,14);
  fp_mov(c,3,12);
  fp_arith(c,0,3,4);
  R(0)=0x1cu;
  fp_mov(c,5,3);
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,5,1);
  fp_cmp(c,1,3,5);
  if(c->t) goto L8c07bc54;
  {  goto L8c07bd8c; }
L8c07bc54:;
  fp_arith(c,0,14,12);
  fp_ld(c,3,R(15));
  fp_mov(c,13,14);
  fp_arith(c,0,13,4);
  fp_cmp(c,1,13,3);
  if(!c->t) goto L8c07bc64;
  {  goto L8c07bd8c; }
L8c07bc64:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,13);
  if(!c->t) goto L8c07bc70;
  { fp_mov(c,14,15); goto L8c07bc7c; }
L8c07bc70:;
  fp_ld(c,2,R(15));
  R(0)=0x18u;
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,1,2,13);
  fp_mov(c,14,2);
  fp_arith(c,2,14,1);
L8c07bc7c:;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c07bc98;
  R(0)=0x1cu;
  fp_unary(c,0,5);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,5,3);
  fp_mov(c,3,14);
  fp_arith(c,2,3,5);
  fp_mov(c,14,3);
  fp_arith(c,2,14,2);
L8c07bc98:;
  R(0)=0x9eu;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c07bcd2;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,13,3);
  if(c->t) goto L8c07bcce;
  fp_cmp(c,1,3,13);
  if(!c->t) goto L8c07bcb0;
  fp_mov(c,4,13);
  { fp_unary(c,0,4); goto L8c07bcb2; }
L8c07bcb0:;
  fp_mov(c,4,13);
L8c07bcb2:;
  R(0)=0x1cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,7,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  { fp_unary(c,2,3); goto L8c07bcea; }
L8c07bcce:;
  { fp_mov(c,4,15); goto L8c07bd22; }
L8c07bcd2:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,13,3);
  if(c->t) goto L8c07bd20;
  R(5)=LD32(R(8)+4);
  R(4)=R(15);
  R(5)+=R(9);
  { uint32_t tg=R(12); c->pr=0x8c07bce2u; R(4)+=0x1cu; sh4_call(c,tg); }
  fp_arith(c,0,0,15);
  R(0)=0x8c07bd04u;
  fp_ld(c,3,R(0));
  fp_mov(c,4,0);
L8c07bcea:;
  { fp_arith(c,2,4,3); goto L8c07bd22; }
L8c07bd20:;
  fp_mov(c,4,15);
L8c07bd22:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c07bd8c;
  R(0)=R(11);
  R(0)<<=2;
  fp_st(c,13,R(0)+R(10));
  R(0)=0x9fu;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; fp_arith(c,2,14,4); if(k) goto L8c07bd4c; }
  R(1)=0x98u;
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(13));
  R(1)+=R(14);
  fp_mov(c,0,14);
  fp_ld(c,2,R(1));
  fp_fmac(c,1,2);
  { fp_st(c,1,R(0)+R(13)); goto L8c07bd8c; }
L8c07bd4c:;
  R(0)=0x8cu;
  fp_ld(c,1,R(13));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_mov(c,0,14);
  fp_fmac(c,1,2);
  R(1)=0x90u;
  R(1)+=R(14);
  fp_st(c,1,R(13));
  fp_ld(c,1,R(0)+R(13));
  fp_ld(c,2,R(1));
  R(1)=0x94u;
  fp_fmac(c,1,2);
  R(1)+=R(14);
  fp_st(c,1,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(13));
  fp_ld(c,2,R(1));
  fp_fmac(c,1,2);
  fp_st(c,1,R(0)+R(13));
  R(0)=0x9fu;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c07bd8c;
  R(1)=0x98u;
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(13));
  R(1)+=R(14);
  fp_mov(c,0,14);
  fp_ld(c,2,R(1));
  fp_fmac(c,1,2);
  fp_st(c,1,R(0)+R(13));
L8c07bd8c:;
  R(13)+=0x10u;
  R(11)+=0x1u;
L8c07bd90:;
  R(0)=LD32(c->gbr+16);
  R(1)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(c->t) goto L8c07bd9e;
  {  goto L8c07bba0; }
L8c07bd9e:;
  R(1)=0x830u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07bdbc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+64);
  R(14)=R(0);
  R(0)=0x9fu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07be00;
  R(1)=0x98u;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  R(1)+=R(4);
  fp_ld(c,3,R(1));
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(14)); goto L8c07be3c; }
L8c07be00:;
  R(0)=0x8cu;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  R(1)=0x90u;
  fp_arith(c,0,2,3);
  R(1)+=R(4);
  fp_st(c,2,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(1));
  R(1)=0x94u;
  fp_arith(c,0,2,3);
  R(1)+=R(4);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(1));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x9fu;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c07be3c;
  R(1)=0x98u;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  R(1)+=R(4);
  fp_ld(c,3,R(1));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
L8c07be3c:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07be60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff824u;
  R(15)+=R(0);
  R(0)=LD32(c->gbr+16);
  R(14)=R(4);
  R(4)+=0x30u;
  R(3)=R(15);
  R(13)=R(0);
  R(0)=0xbcu;
  fp_ld(c,3,R(4));
  R(3)+=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xc0u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xc4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(c->gbr+76);
  R(4)=R(0);
  R(0)=LD32(c->gbr+72);
  R(4)+=0x4u;
  c->t=R(3)==R(4);
  R(5)=R(0);
  { uint32_t k=c->t; R(5)+=0x4u; if(k) goto L8c07bea8; }
  R(3)=R(15);
  R(3)+=0x24u;
  c->t=R(3)==R(5);
  if(c->t) goto L8c07bea8;
  {  goto L8c07c000; }
L8c07bea8:;
  R(0)=0x4u;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(5));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(15));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(5));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,3,0);
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,0,R(5));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  fp_arith(c,2,3,0);
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,3,0);
  R(0)=0x18u;
  fp_ld(c,2,R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x18u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x18u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  fp_arith(c,2,3,0);
  R(0)=0x18u;
  R(3)=0x8c0685b4u;
  fp_ld(c,2,R(0)+R(4));
  R(6)=0x24u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  R(4)=R(15);
  R(5)=R(15);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c07bfc8u; R(4)+=0x24u; sh4_call(c,tg); }
  {  goto L8c07c116; }
L8c07c000:;
  R(0)=0x4u;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(5));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(5));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x28u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(5));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x2cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x30u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  fp_arith(c,2,3,0);
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x34u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x38u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,3,0);
  R(0)=0x18u;
  fp_ld(c,2,R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x18u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x40u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  fp_arith(c,2,3,0);
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x44u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
L8c07c116:;
  R(2)=0xc8u;
  R(3)=0xbcu;
  R(2)+=R(15);
  R(3)+=R(15);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c07c1c0;
  R(5)=0xbcu;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c07c12eu; R(4)+=0x18u; f_8c05e6ea(c); }
  R(0)=0x1cu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xccu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c07c21c; }
L8c07c1c0:;
  R(0)=0xc0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0xccu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xc0u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xbcu;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xc4u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c07c21c:;
  R(0)=0x44u;
  R(7)=0xd4u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xd0u;
  R(7)+=R(15);
  fp_fmac(c,3,2);
  R(4)=R(7);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  R(6)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(6)<<=2;
  R(6)+=R(4);
  c->t=R(4)>=R(6);
  { uint32_t k=c->t; R(5)=LD32(R(13)+4); if(k) goto L8c07c25e; }
L8c07c23a:;
  R(0)=0xc8u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xccu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(15));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(0)=0xd0u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(15));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_fmac(c,2,3);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c07c23a;
L8c07c25e:;
  R(0)=LD32(c->gbr+60);
  R(5)=R(7);
  R(7)=0x80000000u;
  R(4)=R(0);
  R(0)=0x2cu;
  R(6)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(0)+=0x73u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(6)<<=2;
  c->t=(R(3)&R(3))==0;
  R(6)<<=2;
  { uint32_t k=!c->t; R(6)+=R(4); if(k) goto L8c07c300; }
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c07c280;
  {  goto L8c07c376; }
L8c07c280:;
  R(2)=LD32(R(5));
  c->t=(R(2)&R(7))==0;
  if(c->t) goto L8c07c2ca;
  R(0)=0x8cu;
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  R(1)=0x90u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(4));
  R(1)+=R(14);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(1));
  R(1)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(4));
  R(1)+=R(14);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(1));
  R(1)=0x98u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(4));
  R(1)+=R(14);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(1));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(4));
L8c07c2ca:;
  R(4)+=0x10u;
  c->t=R(4)>=R(6);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c07c280; }
  {  goto L8c07c376; }
L8c07c300:;
  R(0)=0x9fu;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07c332;
  c->t=R(4)>=R(6);
  if(c->t) goto L8c07c376;
L8c07c30e:;
  R(3)=LD32(R(5));
  c->t=(R(3)&R(7))==0;
  if(c->t) goto L8c07c326;
  R(1)=0x98u;
  R(0)=0xcu;
  fp_ld(c,2,R(5));
  R(1)+=R(14);
  fp_ld(c,3,R(1));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(4));
L8c07c326:;
  R(4)+=0x10u;
  c->t=R(4)>=R(6);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c07c30e; }
  {  goto L8c07c376; }
L8c07c332:;
  c->t=R(4)>=R(6);
  if(c->t) goto L8c07c376;
L8c07c336:;
  R(2)=LD32(R(5));
  c->t=(R(2)&R(7))==0;
  if(c->t) goto L8c07c36e;
  R(0)=0x8cu;
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  R(1)=0x90u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(4));
  R(1)+=R(14);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(1));
  R(1)=0x94u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(4));
  R(1)+=R(14);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(1));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(4));
L8c07c36e:;
  R(4)+=0x10u;
  c->t=R(4)>=R(6);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c07c336; }
L8c07c376:;
  R(1)=0x7dcu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07c3c0(SH4Ctx *c) {
  fp_cmp(c,1,5,4);
  { uint32_t k=c->t; c->fr[9]=0x3F800000u; if(k) goto L8c07c3f4; }
  fp_cmp(c,1,4,8);
  if(c->t) goto L8c07c3f4;
  fp_cmp(c,1,6,4);
  if(!c->t) goto L8c07c3de;
  fp_arith(c,1,6,5);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,6,3);
  if(c->t) goto L8c07c3f6;
  fp_arith(c,1,4,5);
  fp_mov(c,9,4);
  { fp_arith(c,3,9,6); goto L8c07c3f6; }
L8c07c3de:;
  fp_cmp(c,1,4,7);
  if(!c->t) goto L8c07c3f6;
  fp_mov(c,5,7);
  fp_arith(c,1,5,8);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  if(c->t) goto L8c07c3f6;
  fp_arith(c,1,4,8);
  fp_mov(c,9,4);
  { fp_arith(c,3,9,5); goto L8c07c3f6; }
L8c07c3f4:;
  c->fr[9]=0x00000000u;
L8c07c3f6:;
  { fp_mov(c,0,9); return; }
}
void f_8c07c3fa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(14)=R(4);
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(0)+R(13));
  fp_ld(c,5,R(0)+R(6));
  R(0)=0x9eu;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c07c464;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c07c440;
  { c->fr[3]=0x3F800000u; goto L8c07c44c; }
L8c07c440:;
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c07c44a;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c07c44c; }
L8c07c44a:;
  c->fr[3]=0x00000000u;
L8c07c44c:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,5,1);
  if(!c->t) goto L8c07c456;
  { c->fr[2]=0x3F800000u; goto L8c07c460; }
L8c07c456:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,5);
  if(!c->t) goto L8c07c460;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
L8c07c460:;
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c07c4bc;
L8c07c464:;
  R(0)=0xc4u;
  fp_ld(c,8,R(0)+R(14));
  R(0)+=0xfffffff4u;
  fp_ld(c,7,R(0)+R(14));
  R(0)+=0xffffffe8u;
  fp_ld(c,6,R(0)+R(14));
  R(0)+=0xcu;
  fp_ld(c,5,R(0)+R(14));
  { c->pr=0x8c07c478u; fp_ld(c,4,R(13)); f_8c07c3c0(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,14,0);
  fp_cmp(c,0,14,3);
  if(c->t) goto L8c07c4bc;
  R(0)=0xc8u;
  fp_ld(c,8,R(0)+R(14));
  R(0)+=0xfffffff4u;
  fp_ld(c,7,R(0)+R(14));
  R(0)+=0xffffffe8u;
  fp_ld(c,6,R(0)+R(14));
  R(0)+=0xcu;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x4u;
  { c->pr=0x8c07c496u; fp_ld(c,4,R(0)+R(13)); f_8c07c3c0(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,15,0);
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c07c4bc;
  R(0)=0xccu;
  fp_ld(c,8,R(0)+R(14));
  R(0)+=0xfffffff4u;
  fp_ld(c,7,R(0)+R(14));
  R(0)+=0xffffffe8u;
  fp_ld(c,6,R(0)+R(14));
  R(0)+=0xcu;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  { c->pr=0x8c07c4b4u; fp_ld(c,4,R(0)+R(13)); f_8c07c3c0(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c07c4e0;
L8c07c4bc:;
  { c->fr[0]=0x00000000u; goto L8c07c508; }
L8c07c4e0:;
  fp_cmp(c,1,14,15);
  { uint32_t k=!c->t; c->fr[8]=0x3F800000u; if(k) goto L8c07c4ea; }
  { fp_mov(c,5,14); goto L8c07c4ec; }
L8c07c4ea:;
  fp_mov(c,5,15);
L8c07c4ec:;
  fp_mov(c,6,8);
  fp_arith(c,1,6,5);
  R(0)=0xe0u;
  fp_ld(c,7,R(0)+R(14));
  R(0)+=0x4u;
  fp_ld(c,0,R(0)+R(14));
  fp_arith(c,2,6,7);
  fp_fmac(c,6,5);
  fp_mov(c,5,8);
  fp_arith(c,1,5,4);
  fp_mov(c,0,6);
  fp_arith(c,2,5,7);
  fp_fmac(c,5,4);
  fp_mov(c,0,5);
L8c07c508:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07c540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff6a8u;
  R(15)+=R(0);
  R(6)=R(4);
  R(0)=LD32(c->gbr+72);
  R(14)=R(4);
  R(4)=0x1a0u;
  R(3)=0x8c0156cau;
  R(5)=R(0);
  R(10)=0x0u;
  R(6)+=0x24u;
  { c->pr=0x8c07c56au; R(4)+=R(15); f_8c0156ca(c); }
  R(5)=0x1a0u;
  R(6)=0xd0u;
  R(4)=0x238u;
  R(5)+=R(15);
  R(2)=0x8c014eaau;
  R(6)+=R(14);
  { c->pr=0x8c07c57au; R(4)+=R(15); f_8c014eaa(c); }
  R(3)=0x8c0163e6u;
  R(0)=LD32(c->gbr+76);
  { c->pr=0x8c07c582u; R(4)=R(0); f_8c0163e6(c); }
  R(3)=0x8c143ab0u;
  R(0)=0xdcu;
  R(13)=LD32(R(3));
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(13));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  R(9)=0x8c05e612u;
  fp_mov(c,15,4);
  { uint32_t k=c->t; fp_arith(c,2,15,4); if(k) goto L8c07c5da; }
  R(5)=0x238u;
  R(6)=R(13);
  R(4)=0x244u;
  R(6)+=0x4u;
  R(5)+=R(15);
  { uint32_t tg=R(9); c->pr=0x8c07c5a8u; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x244u;
  R(2)=0x8c143ab0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x248u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x24cu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xdcu;
  R(3)=LD32(R(2));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,5,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(3));
  fp_arith(c,0,4,3);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c07c5da;
  {  goto L8c07c778; }
L8c07c5da:;
  R(0)=LD32(c->gbr+16);
  R(8)=R(0);
  R(0)=LD32(c->gbr+60);
  R(13)=R(0);
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(8)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c07c5f0; }
  {  goto L8c07c778; }
L8c07c5f0:;
  R(6)=R(12);
  R(0)=LD32(c->gbr+44);
  c->t=R(6)>>31;R(6)<<=1;
  R(3)=R(12);
  R(5)=0x238u;
  R(6)+=R(3);
  R(4)=0x244u;
  R(6)<<=2;
  R(2)=R(0);
  R(6)+=R(2);
  R(5)+=R(15);
  { uint32_t tg=R(9); c->pr=0x8c07c60au; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x244u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,3,4);
  fp_arith(c,2,4,3);
  fp_cmp(c,1,15,4);
  if(c->t) goto L8c07c61a;
  {  goto L8c07c768; }
L8c07c61a:;
  R(0)=0x248u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,3,5);
  fp_arith(c,2,5,3);
  fp_arith(c,0,4,5);
  fp_cmp(c,1,15,4);
  if(c->t) goto L8c07c62c;
  {  goto L8c07c768; }
L8c07c62c:;
  R(0)=0x24cu;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,3,5);
  fp_arith(c,2,5,3);
  fp_arith(c,0,4,5);
  fp_cmp(c,1,15,4);
  if(c->t) goto L8c07c63e;
  {  goto L8c07c768; }
L8c07c63e:;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c07c660;
  R(5)=0x1a0u;
  R(4)=0x138u;
  R(3)=0x8c0153d8u;
  R(5)+=R(15);
  { c->pr=0x8c07c64eu; R(4)+=R(15); f_8c0153d8(c); }
  R(5)=0x138u;
  R(0)=LD32(c->gbr+76);
  R(4)=0xd0u;
  R(5)+=R(15);
  R(3)=0x8c0156cau;
  R(6)=R(0);
  { c->pr=0x8c07c65eu; R(4)+=R(15); f_8c0156ca(c); }
  R(10)=0x1u;
L8c07c660:;
  R(11)=R(12);
  c->t=R(11)>>31;R(11)<<=1;
  R(3)=R(12);
  R(0)=LD32(c->gbr+44);
  R(11)+=R(3);
  R(5)=0xd0u;
  R(11)<<=2;
  R(4)=0x220u;
  R(0)+=R(11);
  R(3)=0x8c014f10u;
  fp_ld(c,3,R(0));
  R(1)=0x4u;
  R(0)=0x208u;
  R(5)+=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(c->gbr+44);
  R(0)+=R(11);
  fp_ld(c,3,R(0)+R(1));
  R(1)=0x8u;
  R(0)=0x20cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(c->gbr+44);
  R(0)+=R(11);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x210u;
  fp_st(c,3,R(0)+R(15));
  R(6)=LD32(R(8)+4);
  R(6)+=R(11);
  { uint32_t tg=R(3); c->pr=0x8c07c69cu; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x22cu;
  R(6)=0x220u;
  R(5)+=R(15);
  R(6)+=R(15);
  { R(4)=R(14); goto L8c07c700; }
L8c07c700:;
  { c->pr=0x8c07c704u;  f_8c07c3fa(c); }
  R(0)=0x9eu;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; fp_mov(c,4,0); if(k) goto L8c07c718; }
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c07c72c;
  { fp_unary(c,0,4); goto L8c07c72c; }
L8c07c718:;
  R(0)=0x228u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c07c726;
  { fp_mov(c,3,5); goto L8c07c72a; }
L8c07c726:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c07c72a:;
  fp_arith(c,2,4,3);
L8c07c72c:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c07c768;
  R(0)=0x8cu;
  fp_ld(c,1,R(13));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_mov(c,0,4);
  fp_fmac(c,1,2);
  R(1)=0x90u;
  R(1)+=R(14);
  fp_st(c,1,R(13));
  fp_ld(c,1,R(0)+R(13));
  fp_ld(c,2,R(1));
  R(1)=0x94u;
  fp_fmac(c,1,2);
  R(1)+=R(14);
  fp_st(c,1,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(13));
  fp_ld(c,2,R(1));
  R(1)=0x98u;
  fp_fmac(c,1,2);
  R(1)+=R(14);
  fp_st(c,1,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(13));
  fp_ld(c,2,R(1));
  fp_fmac(c,1,2);
  fp_st(c,1,R(0)+R(13));
L8c07c768:;
  R(0)=0x2cu;
  R(3)=(int32_t)(int16_t)LD16(R(8)+R(0));
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(3);
  { uint32_t k=c->t; R(13)+=0x10u; if(k) goto L8c07c778; }
  {  goto L8c07c5f0; }
L8c07c778:;
  R(1)=0x958u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07c7c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(12)>0;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c07c868; }
L8c07c7d2:;
  R(4)=LD32(R(14));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c07c860;
  R(3)=0x9cu;
  R(3)+=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c07c860;
  R(0)=0x8c2dd968u;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c07c860;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c07c7fe;
  { c->pr=0x8c07c7fau; R(4)=LD32(R(14)); f_8c07bdbc(c); }
  {  goto L8c07c860; }
L8c07c7fe:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c07c80a;
  { c->pr=0x8c07c806u; R(4)=LD32(R(14)); f_8c07b892(c); }
  {  goto L8c07c860; }
L8c07c80a:;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c07c840;
  { c->pr=0x8c07c816u; R(4)=LD32(R(14)); f_8c07be60(c); }
  {  goto L8c07c860; }
L8c07c840:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c07c84c;
  { c->pr=0x8c07c848u; R(4)=LD32(R(14)); f_8c07c540(c); }
  {  goto L8c07c860; }
L8c07c84c:;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c07c860;
  { c->pr=0x8c07c858u; R(4)=LD32(R(14)); f_8c07b9a0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c07c860;
  { c->pr=0x8c07c860u; R(4)=LD32(R(14)); f_8c07ba18(c); }
L8c07c860:;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(12);
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c07c7d2; }
L8c07c868:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07c872(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+8,R(6));
  R(4)=LD32(R(15));
  R(0)=LD32(c->gbr+60);
  R(4)<<=2;
  R(5)=LD32(R(15)+4);
  R(4)<<=2;
  R(3)=R(0);
  R(4)+=R(3);
  R(3)=0x8c0a2a30u;
  { R(15)+=0xcu; { f_8c0a2a30(c); return; } }
}
void f_8c07c8c0(SH4Ctx *c) {
  R(0)=0x8c07c9c0u;
  R(6)=0x8c0c8068u;
  R(5)=0x8c0c806cu;
  c->t=(R(4)&R(4))==0;
  fp_ld(c,5,R(0));
  R(7)=0x0u;
  { uint32_t k=c->t; c->fr[4]=0x3F800000u; if(k) goto L8c07c8ea; }
  R(3)=0x8c0c80b4u;
  R(2)=0x1u;
  R(0)=0x8c07c9d0u;
  ST8(R(5),R(2));
  R(2)=0x8c0c80b0u;
  R(1)=0x8c0c5480u;
  fp_st(c,5,R(3));
  fp_ld(c,3,R(0));
  R(3)=0x8c0c806du;
  fp_st(c,3,R(2));
  ST8(R(1),R(7));
  { ST8(R(3),R(7)); goto L8c07c8f6; }
L8c07c8ea:;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c07c8fa; }
  R(2)=0x2u;
  ST8(R(5),R(2));
L8c07c8f6:;
  { fp_st(c,4,R(6)); goto L8c07c910; }
L8c07c8fa:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c07c910;
  R(0)=0x8c07c9e0u;
  R(3)=0x8c0c80b4u;
  R(2)=0x8c0c80b0u;
  ST8(R(5),R(7));
  fp_st(c,4,R(6));
  fp_st(c,5,R(3));
  fp_ld(c,3,R(0));
  fp_st(c,3,R(2));
L8c07c910:;
  {  return; }
}
void f_8c07c914(SH4Ctx *c) {
  R(2)=0x8c0c8068u;
  R(0)=0x8c07c9c0u;
  c->fr[3]=0x3F800000u;
  R(4)=0x0u;
  R(1)=0x8c0c80b4u;
  R(3)=0x8c0c806cu;
  ST8(R(3),R(4));
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0));
  R(0)=0x8c07c9e0u;
  R(2)=0x8c0c5480u;
  fp_st(c,3,R(1));
  R(3)=0x8c0c80b0u;
  fp_ld(c,3,R(0));
  R(1)=0x8c0c806du;
  fp_st(c,3,R(3));
  ST8(R(2),R(4));
  { ST8(R(1),R(4)); return; }
}
void f_8c07c93a(SH4Ctx *c) {
  R(0)=0x8c07c9c0u;
  R(7)=0x8c0c80b4u;
  fp_ld(c,4,R(0));
  c->t=(R(4)&R(4))==0;
  R(6)=0x8c0c806du;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c07c960; }
  R(2)=0x1u;
  R(3)=0x8c0c80b0u;
  R(0)=0x8c07c9e0u;
  ST8(R(6),R(2));
  R(2)=0x8c0c5480u;
  R(1)=0x8c0c806cu;
  fp_st(c,4,R(7));
  fp_ld(c,3,R(0));
  fp_st(c,3,R(3));
  ST8(R(2),R(5));
  { ST8(R(1),R(5)); goto L8c07c96c; }
L8c07c960:;
  R(0)=0x8c07c9d0u;
  R(3)=0x8c0c80b0u;
  ST8(R(6),R(5));
  fp_st(c,4,R(7));
  fp_ld(c,3,R(0));
  fp_st(c,3,R(3));
L8c07c96c:;
  {  return; }
}
void f_8c07c970(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=0x8c05e55cu;
  R(11)=R(4);
  c->t=(int32_t)R(11)>0;
  ST32(R(15),R(7));
  R(13)=R(5);
  R(12)=R(6);
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c07c9a0; }
L8c07c98e:;
  R(5)=LD32(R(15));
  { uint32_t tg=R(10); c->pr=0x8c07c994u; R(4)=R(13); sh4_call(c,tg); }
  R(14)+=0x1u;
  fp_st(c,0,R(12));
  c->t=(int32_t)R(14)>=(int32_t)R(11);
  R(13)+=0xcu;
  { uint32_t k=!c->t; R(12)+=0x4u; if(k) goto L8c07c98e; }
L8c07c9a0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07ca00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=0x8c05e55cu;
  R(11)=R(4);
  c->t=(int32_t)R(11)>0;
  ST32(R(15),R(7));
  R(13)=R(5);
  R(12)=R(6);
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c07ca30; }
L8c07ca1e:;
  R(5)=LD32(R(15));
  { uint32_t tg=R(10); c->pr=0x8c07ca24u; R(4)=R(13); sh4_call(c,tg); }
  R(14)+=0x1u;
  fp_st(c,0,R(12));
  c->t=(int32_t)R(14)>=(int32_t)R(11);
  R(13)+=0xcu;
  { uint32_t k=!c->t; R(12)+=0x4u; if(k) goto L8c07ca1e; }
L8c07ca30:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07ca40(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(4));
  ST32(R(15)+8,R(5));
  R(5)=R(7);
  ST32(R(15),R(6));
  R(5)+=0x28u;
  R(6)=LD32(R(15)+8);
  R(4)=LD32(R(15));
  R(3)=0x8c05e7e8u;
  R(7)=LD32(R(15)+4);
  { R(15)+=0xcu; { f_8c05e7e8(c); return; } }
}
void f_8c07ca80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(0)=0x8c07cb6cu;
  R(12)=0x8c0c467cu;
  fp_ld(c,3,R(0));
  R(0)=LD32(c->gbr+76);
  fp_ld(c,15,R(12));
  R(5)=R(0);
  R(0)=LD32(c->gbr+44);
  fp_arith(c,2,15,3);
  R(3)=0x8c05e7e8u;
  R(13)=R(0);
  R(0)=LD32(c->gbr+16);
  R(5)+=0x28u;
  R(7)=R(0);
  ST32(R(15)+16,R(0));
  R(14)=LD32(R(0));
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(7)+R(0));
  R(6)=R(14);
  { c->pr=0x8c07cac0u; R(4)=R(13); f_8c05e7e8(c); }
  R(0)=LD32(c->gbr+88);
  R(1)=0x2cu;
  R(9)=0x3f000000u;
  R(4)=R(0);
  R(0)=0x88u;
  R(8)=0x8c0c80b0u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,4,5);
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x8u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,7,R(0)+R(4));
  fp_arith(c,2,5,3);
  R(0)=LD32(c->gbr+48);
  R(11)=R(0);
  R(0)=LD32(c->gbr+52);
  R(7)=R(0);
  R(0)=LD32(c->gbr+16);
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x8c07cb78u;
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(13);
  ST32(R(15)+16,R(3));
  fp_ld(c,12,R(0));
  R(0)=0x8c07cb7cu;
  R(4)=0xffu;
  fp_ld(c,1,R(0));
  R(0)=0x8c07cb80u;
  fp_ld(c,14,R(0));
  R(0)=0x8c07cb84u;
  fp_ld(c,11,R(0));
  R(0)=0x8c07cb88u;
  fp_ld(c,10,R(0));
  R(0)=0x8c07cb94u;
  fp_ld(c,9,R(0));
  R(10)=0x0u;
  R(6)=0x8c2cb938u;
  R(0)=0x8c07cb98u;
  R(5)=0x8c0c8068u;
  { fp_ld(c,8,R(0)); goto L8c07ccf2; }
L8c07cb22:;
  R(3)=R(11);
  R(3)+=0x8u;
  ST32(R(15),R(3));
  R(2)=R(13);
  R(3)=0x80u;
  R(0)=LD32(c->gbr+88);
  R(2)=LD32(R(2)+8);
  R(1)=LD32(R(3)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  if(c->t) goto L8c07cbc0;
  R(0)=LD32(R(15));
  c->fr[2]=0x00000000u;
  fp_st(c,9,R(0));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  R(3)+=0xfffffffcu;
  ST32(R(15),R(3));
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07cba0;
  { fp_mov(c,3,9); goto L8c07cba4; }
L8c07cba0:;
  R(0)=0x8c07cd20u;
  fp_ld(c,3,R(0));
L8c07cba4:;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(13));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(3)=LD32(R(15)); if(k) goto L8c07cbb4; }
  { fp_mov(c,3,9); goto L8c07cbb8; }
L8c07cbb4:;
  R(0)=0x8c07cd20u;
  fp_ld(c,3,R(0));
L8c07cbb8:;
  R(0)=0xfffffffcu;
  fp_st(c,3,R(0)+R(3));
  {  goto L8c07ccea; }
L8c07cbc0:;
  R(0)=0x8u;
  c->fr[2]=0x3F800000u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c07cd24u;
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,3,5);
  fp_mov(c,2,7);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,3,4);
  fp_mov(c,2,6);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  R(3)+=0xfffffffcu;
  ST32(R(15),R(3));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,2,15);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(14));
  fp_mov(c,0,10);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,0,2,3);
  fp_mov(c,3,2);
  fp_arith(c,2,3,8);
  fp_ld(c,2,R(5));
  fp_ftrc(c,3);
  R(0)=c->fpul;
  R(0)&=R(4);
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_mov(c,2,15);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(14));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,0,2,3);
  fp_mov(c,3,2);
  fp_arith(c,0,3,14);
  fp_mov(c,2,3);
  fp_arith(c,2,2,8);
  fp_ftrc(c,2);
  fp_ld(c,2,R(5));
  R(0)=c->fpul;
  R(0)&=R(4);
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xfffffffcu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,2,R(12));
  fp_ld(c,0,R(8));
  fp_ld(c,3,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,8);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  R(0)&=R(4);
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(6));
  fp_ld(c,2,R(5));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,2,2,1);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c07cce8; }
  R(2)=0x4f000000u;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c07cca2;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c07cca2:;
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c07ccb6; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c07ccb6:;
  fp_arith(c,2,3,12);
  R(0)=0xcu;
  fp_cmp(c,1,3,11);
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(15)); if(k) goto L8c07cccc; }
  R(0)=0x8c07cd30u;
  fp_ld(c,2,R(0));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,2); goto L8c07ccd0; }
L8c07cccc:;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
L8c07ccd0:;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST32(R(15),R(2));
  R(2)<<=16;
  R(3)=LD32(R(15));
  R(3)<<=8;
  R(2)|=R(3);
  R(3)=LD32(R(15));
  R(2)|=R(3);
  R(2)|=R(9);
  { ST32(R(7),R(2)); goto L8c07ccea; }
L8c07cce8:;
  ST32(R(7),R(10));
L8c07ccea:;
  R(7)+=0x4u;
  R(14)+=0xcu;
  R(13)+=0xcu;
  R(11)+=0xcu;
L8c07ccf2:;
  R(2)=LD32(R(15)+16);
  c->t=R(13)>=R(2);
  if(c->t) goto L8c07ccfc;
  {  goto L8c07cb22; }
L8c07ccfc:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07cd40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x8c07cec8u;
  R(12)=0x8c0c467cu;
  fp_ld(c,3,R(0));
  R(0)=LD32(c->gbr+76);
  fp_ld(c,15,R(12));
  R(5)=R(0);
  R(0)=LD32(c->gbr+44);
  fp_arith(c,2,15,3);
  R(3)=0x8c05e7e8u;
  R(13)=R(0);
  R(0)=LD32(c->gbr+16);
  R(5)+=0x28u;
  R(7)=R(0);
  ST32(R(15),R(0));
  R(14)=LD32(R(0));
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(7)+R(0));
  R(6)=R(14);
  { c->pr=0x8c07cd82u; R(4)=R(13); f_8c05e7e8(c); }
  R(0)=LD32(c->gbr+88);
  R(1)=0x2cu;
  R(9)=0x3f000000u;
  R(8)=0x0u;
  R(4)=R(0);
  R(0)=0x88u;
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,5,4);
  fp_arith(c,2,5,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x8u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,7,R(0)+R(4));
  fp_arith(c,2,4,3);
  R(0)=LD32(c->gbr+48);
  R(10)=R(0);
  R(0)=LD32(c->gbr+52);
  R(11)=R(0);
  R(0)=LD32(c->gbr+16);
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x8c07ced0u;
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(13);
  ST32(R(15),R(3));
  fp_ld(c,12,R(0));
  R(0)=0x8c07ced8u;
  R(6)=0x8c2cb938u;
  fp_ld(c,14,R(0));
  R(0)=0x8c07cedcu;
  R(5)=0xffu;
  c->t=R(13)>=R(3);
  R(7)=0x8c0c8068u;
  fp_ld(c,11,R(0));
  R(0)=0x8c07cee8u;
  c->fr[13]=0x3F800000u;
  { uint32_t k=!c->t; fp_ld(c,10,R(0)); if(k) goto L8c07cdde; }
  {  goto L8c07cf4a; }
L8c07cdde:;
  R(0)=0x8u;
  fp_mov(c,8,13);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8c07ceecu;
  R(4)=R(10);
  R(4)+=0x8u;
  fp_arith(c,3,8,3);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_mov(c,9,7);
  fp_mov(c,1,6);
  fp_mov(c,2,8);
  fp_arith(c,2,2,3);
  fp_mov(c,0,8);
  fp_st(c,2,R(4));
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,2,2,4);
  fp_fmac(c,9,2);
  fp_ld(c,2,R(13));
  fp_arith(c,2,2,5);
  fp_fmac(c,1,2);
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,8,1);
  fp_mov(c,1,15);
  fp_arith(c,1,1,2);
  fp_ld(c,2,R(14));
  fp_arith(c,0,1,2);
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,1,2);
  fp_mov(c,2,1);
  fp_arith(c,2,2,10);
  fp_ftrc(c,2);
  fp_ld(c,1,R(7));
  fp_mov(c,0,11);
  R(0)=c->fpul;
  R(0)&=R(5);
  R(0)<<=2;
  fp_ld(c,2,R(0)+R(6));
  R(0)=0x4u;
  fp_arith(c,2,1,2);
  fp_fmac(c,9,1);
  fp_mov(c,1,15);
  R(4)-=fp_sz(c);fp_st(c,9,R(4));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,0,1,2);
  fp_ld(c,2,R(14));
  fp_arith(c,1,1,2);
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,1,2);
  fp_mov(c,2,1);
  fp_arith(c,0,2,14);
  fp_mov(c,1,2);
  fp_arith(c,2,1,10);
  fp_ftrc(c,1);
  fp_ld(c,1,R(7));
  R(0)=c->fpul;
  R(0)&=R(5);
  R(0)<<=2;
  fp_ld(c,2,R(0)+R(6));
  fp_arith(c,2,1,2);
  fp_fmac(c,8,1);
  R(4)-=fp_sz(c);fp_st(c,8,R(4));
  R(3)=0x8c0c80b0u;
  R(0)=0x4u;
  fp_ld(c,1,R(12));
  fp_ld(c,0,R(3));
  fp_ld(c,2,R(14));
  fp_fmac(c,2,1);
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,1,2,1);
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,0,2,1);
  fp_ld(c,1,R(7));
  fp_arith(c,2,2,10);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  R(0)&=R(5);
  R(0)<<=2;
  fp_ld(c,2,R(0)+R(6));
  R(0)=0x8c07cef4u;
  fp_arith(c,2,1,2);
  fp_ld(c,2,R(0));
  fp_mov(c,9,1);
  fp_arith(c,2,9,2);
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,9,1);
  if(!c->t) goto L8c07cf36;
  R(1)=0x4f000000u;
  c->fpul=R(1);
  c->fr[3]=c->fpul;
  fp_cmp(c,1,3,9);
  if(c->t) goto L8c07cea0;
  fp_arith(c,0,3,3);
  fp_arith(c,1,9,3);
L8c07cea0:;
  fp_ftrc(c,9);
  R(2)=c->fpul;
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c07cf06; }
  {  goto L8c07cf00; }
L8c07cf00:;
  R(0)=0x8c07cf80u;
  fp_ld(c,0,R(0));
  fp_arith(c,0,3,0);
L8c07cf06:;
  R(0)=0x8c07cf84u;
  fp_mov(c,8,3);
  fp_ld(c,0,R(0));
  fp_arith(c,2,8,0);
  fp_cmp(c,1,8,12);
  if(!c->t) goto L8c07cf1e;
  R(0)=0x8c07cf88u;
  fp_mov(c,2,8);
  fp_ld(c,3,R(0));
  fp_arith(c,0,2,3);
  { fp_mov(c,3,2); goto L8c07cf20; }
L8c07cf1e:;
  fp_mov(c,3,8);
L8c07cf20:;
  fp_ftrc(c,3);
  R(4)=c->fpul;
  R(3)=R(4);
  R(2)=R(4);
  R(3)<<=8;
  R(2)<<=16;
  R(2)|=R(3);
  R(2)|=R(4);
  R(2)|=R(9);
  { ST32(R(11),R(2)); goto L8c07cf38; }
L8c07cf36:;
  ST32(R(11),R(8));
L8c07cf38:;
  R(3)=LD32(R(15));
  R(13)+=0xcu;
  R(14)+=0xcu;
  c->t=R(13)>=R(3);
  R(10)+=0xcu;
  { uint32_t k=c->t; R(11)+=0x4u; if(k) goto L8c07cf4a; }
  {  goto L8c07cdde; }
L8c07cf4a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07cfa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+76);
  R(3)=0x8c05e7e8u;
  R(5)=R(0);
  R(0)=LD32(c->gbr+44);
  R(5)+=0x28u;
  R(14)=R(0);
  R(0)=LD32(c->gbr+16);
  R(7)=R(0);
  ST32(R(15),R(0));
  R(6)=LD32(R(0));
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(7)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c07cfd0u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+88);
  R(1)=0x2cu;
  R(13)=0x8c2ddad4u;
  R(4)=R(0);
  R(0)=0x88u;
  R(8)=0x8c2ddac4u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,4,5);
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x8u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,7,R(0)+R(4));
  fp_arith(c,2,5,3);
  R(0)=LD32(c->gbr+48);
  R(4)=R(0);
  R(0)=LD32(c->gbr+16);
  R(5)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x8c07d06cu;
  fp_ld(c,3,R(0));
  R(0)=0x8c07d070u;
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  fp_st(c,3,R(13));
  fp_ld(c,9,R(0));
  R(5)<<=2;
  R(5)+=R(14);
  R(9)=0x8c2ddaccu;
  R(0)=0x8c07d078u;
  R(11)=R(8);
  R(12)=R(11);
  R(10)=R(9);
  R(3)=R(10);
  R(12)+=0x4u;
  c->fr[15]=0x3F800000u;
  R(3)+=0x4u;
  fp_st(c,9,R(11));
  fp_ld(c,8,R(0));
  R(0)=0x8c07d080u;
  fp_st(c,8,R(12));
  fp_st(c,9,R(10));
  ST32(R(15),R(3));
  fp_st(c,8,R(3));
  fp_ld(c,11,R(0));
  R(0)=0x8c07d084u;
  { fp_ld(c,9,R(0)); goto L8c07d116; }
L8c07d038:;
  R(0)=LD32(c->gbr+88);
  R(2)=R(14);
  R(3)=0x80u;
  R(6)=R(4);
  R(2)=LD32(R(2)+8);
  R(1)=LD32(R(3)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  { uint32_t k=c->t; R(6)+=0x8u; if(k) goto L8c07d0bc; }
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_st(c,9,R(6));
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07d0a0;
  { fp_mov(c,3,9); goto L8c07d0a4; }
L8c07d0a0:;
  R(0)=0x8c07d140u;
  fp_ld(c,3,R(0));
L8c07d0a4:;
  R(6)-=fp_sz(c);fp_st(c,3,R(6));
  fp_ld(c,3,R(14));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(6)+=0xfffffffcu; if(k) goto L8c07d0b4; }
  { fp_mov(c,3,9); goto L8c07d0b8; }
L8c07d0b4:;
  R(0)=0x8c07d140u;
  fp_ld(c,3,R(0));
L8c07d0b8:;
  { fp_st(c,3,R(6)); goto L8c07d112; }
L8c07d0bc:;
  R(0)=0x8u;
  fp_mov(c,1,15);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_mov(c,8,7);
  fp_arith(c,3,1,3);
  fp_mov(c,2,6);
  fp_mov(c,3,1);
  fp_arith(c,2,3,11);
  fp_mov(c,0,1);
  fp_mov(c,10,3);
  fp_st(c,3,R(6));
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,5);
  fp_fmac(c,8,3);
  fp_ld(c,3,R(14));
  fp_arith(c,2,3,4);
  R(6)-=fp_sz(c);fp_st(c,8,R(6));
  fp_fmac(c,2,3);
  fp_mov(c,1,2);
  R(6)-=fp_sz(c);fp_st(c,1,R(6));
  fp_ld(c,3,R(11));
  fp_cmp(c,1,3,8);
  if(!c->t) goto L8c07d0ee;
  fp_st(c,8,R(11));
L8c07d0ee:;
  fp_ld(c,3,R(12));
  fp_cmp(c,1,8,3);
  if(!c->t) goto L8c07d0f6;
  fp_st(c,8,R(12));
L8c07d0f6:;
  fp_ld(c,3,R(10));
  fp_cmp(c,1,3,1);
  if(!c->t) goto L8c07d0fe;
  fp_st(c,1,R(10));
L8c07d0fe:;
  R(2)=LD32(R(15));
  fp_ld(c,3,R(2));
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c07d10a;
  R(2)=LD32(R(15));
  fp_st(c,1,R(2));
L8c07d10a:;
  fp_ld(c,3,R(13));
  fp_cmp(c,1,3,10);
  if(!c->t) goto L8c07d112;
  fp_st(c,10,R(13));
L8c07d112:;
  R(4)+=0xcu;
  R(14)+=0xcu;
L8c07d116:;
  c->t=R(14)>=R(5);
  if(!c->t) goto L8c07d038;
  R(0)=0x4u;
  fp_ld(c,5,R(9));
  fp_ld(c,4,R(8));
  fp_ld(c,6,R(0)+R(8));
  fp_ld(c,8,R(13));
  fp_ld(c,7,R(0)+R(9));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c027f00u;
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c027f00(c); return; } }
}
void f_8c07d160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+76);
  R(3)=0x8c05e7e8u;
  R(5)=R(0);
  R(0)=LD32(c->gbr+44);
  R(5)+=0x28u;
  R(14)=R(0);
  R(0)=LD32(c->gbr+16);
  R(7)=R(0);
  ST32(R(15),R(0));
  R(6)=LD32(R(0));
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(7)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c07d18cu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+88);
  R(1)=0x2cu;
  R(13)=0x8c2ddad4u;
  R(4)=R(0);
  R(0)=0x88u;
  R(8)=0x8c2ddac4u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,4,5);
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x8u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,7,R(0)+R(4));
  fp_arith(c,2,5,3);
  R(0)=LD32(c->gbr+48);
  R(4)=R(0);
  R(0)=LD32(c->gbr+16);
  R(5)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x8c07d28cu;
  fp_ld(c,3,R(0));
  R(0)=0x8c07d290u;
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  fp_st(c,3,R(13));
  fp_ld(c,9,R(0));
  R(5)<<=2;
  R(5)+=R(14);
  R(9)=0x8c2ddaccu;
  R(0)=0x8c07d298u;
  R(10)=R(8);
  R(11)=R(10);
  R(1)=R(9);
  R(3)=R(1);
  R(3)+=0x4u;
  fp_st(c,9,R(10));
  fp_ld(c,8,R(0));
  R(0)=0x8c07d2a0u;
  R(11)+=0x4u;
  c->t=R(14)>=R(5);
  fp_st(c,8,R(11));
  fp_st(c,9,R(1));
  ST32(R(15),R(3));
  fp_st(c,8,R(3));
  fp_ld(c,1,R(0));
  { uint32_t k=c->t; c->fr[11]=0x3F800000u; if(k) goto L8c07d254; }
L8c07d1f2:;
  R(0)=0x8u;
  fp_mov(c,8,11);
  fp_ld(c,3,R(0)+R(14));
  R(6)=R(4);
  R(6)+=0x8u;
  fp_mov(c,9,7);
  fp_arith(c,3,8,3);
  R(0)=0x4u;
  fp_mov(c,2,6);
  fp_mov(c,3,8);
  fp_arith(c,2,3,1);
  fp_mov(c,0,8);
  fp_mov(c,10,3);
  fp_st(c,3,R(6));
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,5);
  fp_fmac(c,9,3);
  fp_ld(c,3,R(14));
  fp_arith(c,2,3,4);
  R(6)-=fp_sz(c);fp_st(c,9,R(6));
  fp_fmac(c,2,3);
  fp_mov(c,8,2);
  R(6)-=fp_sz(c);fp_st(c,8,R(6));
  fp_ld(c,3,R(10));
  fp_cmp(c,1,3,9);
  if(!c->t) goto L8c07d228;
  fp_st(c,9,R(10));
L8c07d228:;
  fp_ld(c,3,R(11));
  fp_cmp(c,1,9,3);
  if(!c->t) goto L8c07d230;
  fp_st(c,9,R(11));
L8c07d230:;
  fp_ld(c,3,R(1));
  fp_cmp(c,1,3,8);
  if(!c->t) goto L8c07d238;
  fp_st(c,8,R(1));
L8c07d238:;
  R(2)=LD32(R(15));
  fp_ld(c,3,R(2));
  fp_cmp(c,1,8,3);
  if(!c->t) goto L8c07d244;
  R(2)=LD32(R(15));
  fp_st(c,8,R(2));
L8c07d244:;
  fp_ld(c,3,R(13));
  fp_cmp(c,1,3,10);
  { uint32_t k=!c->t; R(14)+=0xcu; if(k) goto L8c07d24e; }
  fp_st(c,10,R(13));
L8c07d24e:;
  c->t=R(14)>=R(5);
  { uint32_t k=!c->t; R(4)+=0xcu; if(k) goto L8c07d1f2; }
L8c07d254:;
  R(0)=0x4u;
  fp_ld(c,5,R(9));
  fp_ld(c,4,R(8));
  fp_ld(c,6,R(0)+R(8));
  fp_ld(c,8,R(13));
  fp_ld(c,7,R(0)+R(9));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c027f00u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c027f00(c); return; } }
}
void f_8c07d2c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+76);
  R(3)=0x8c05e7e8u;
  R(5)=R(0);
  R(0)=LD32(c->gbr+44);
  R(5)+=0x28u;
  R(14)=R(0);
  R(0)=LD32(c->gbr+16);
  R(7)=R(0);
  ST32(R(15),R(0));
  R(6)=LD32(R(0));
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(7)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c07d2f0u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+88);
  R(1)=0x2cu;
  R(12)=0x8c03ac56u;
  R(4)=R(0);
  R(0)=0x88u;
  fp_ld(c,15,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,14,15);
  fp_arith(c,2,14,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x8u;
  fp_ld(c,13,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,12,R(0)+R(4));
  fp_arith(c,2,15,3);
  R(0)=LD32(c->gbr+48);
  R(13)=R(0);
  R(0)=LD32(c->gbr+16);
  R(11)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(3)=R(11);
  c->t=R(11)>>31;R(11)<<=1;
  R(11)+=R(3);
  R(11)<<=2;
  { R(11)+=R(14); goto L8c07d3d6; }
L8c07d326:;
  { uint32_t tg=R(12); c->pr=0x8c07d32au; R(4)=R(14); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+88);
  R(3)=R(14);
  R(2)=0x80u;
  R(4)=R(13);
  R(3)=LD32(R(3)+8);
  R(1)=LD32(R(2)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  { uint32_t k=c->t; R(4)+=0x8u; if(k) goto L8c07d3a8; }
  R(0)=0x8c07d38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_st(c,3,R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07d352;
  R(0)=0x8c07d38cu;
  { fp_ld(c,3,R(0)); goto L8c07d356; }
L8c07d352:;
  R(0)=0x8c07d390u;
  fp_ld(c,3,R(0));
L8c07d356:;
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,3,R(14));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(4)+=0xfffffffcu; if(k) goto L8c07d3a0; }
  R(0)=0x8c07d38cu;
  { fp_ld(c,3,R(0)); goto L8c07d3a4; }
L8c07d3a0:;
  R(0)=0x8c07d400u;
  fp_ld(c,3,R(0));
L8c07d3a4:;
  { fp_st(c,3,R(4)); goto L8c07d3d2; }
L8c07d3a8:;
  R(0)=0x8u;
  c->fr[4]=0x3F800000u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c07d404u;
  fp_mov(c,1,12);
  fp_arith(c,3,4,3);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_mov(c,0,4);
  fp_st(c,2,R(4));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,15);
  fp_fmac(c,1,2);
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  fp_ld(c,2,R(14));
  fp_mov(c,1,13);
  fp_arith(c,2,2,14);
  fp_fmac(c,1,2);
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
L8c07d3d2:;
  R(13)+=0xcu;
  R(14)+=0xcu;
L8c07d3d6:;
  c->t=R(14)>=R(11);
  if(!c->t) goto L8c07d326;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07d420(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+76);
  R(3)=0x8c05e7e8u;
  R(5)=R(0);
  R(0)=LD32(c->gbr+44);
  R(5)+=0x28u;
  R(14)=R(0);
  R(0)=LD32(c->gbr+16);
  R(7)=R(0);
  ST32(R(15),R(0));
  R(6)=LD32(R(0));
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(7)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c07d450u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+88);
  R(1)=0x2cu;
  R(11)=0x8c03ac56u;
  R(4)=R(0);
  R(0)=0x88u;
  fp_ld(c,14,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,15,14);
  fp_arith(c,2,15,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x8u;
  fp_ld(c,13,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,12,R(0)+R(4));
  R(0)=LD32(c->gbr+48);
  R(13)=R(0);
  R(0)=LD32(c->gbr+16);
  R(12)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(3)=R(12);
  c->t=R(12)>>31;R(12)<<=1;
  R(12)+=R(3);
  R(12)<<=2;
  R(12)+=R(14);
  c->t=R(14)>=R(12);
  { uint32_t k=c->t; fp_arith(c,2,14,3); if(k) goto L8c07d4c4; }
L8c07d488:;
  { uint32_t tg=R(11); c->pr=0x8c07d48cu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=0x8u;
  c->fr[4]=0x3F800000u;
  fp_ld(c,3,R(0)+R(14));
  R(4)=R(13);
  R(0)=LD32(c->gbr+88);
  R(4)+=0x8u;
  fp_arith(c,3,4,3);
  R(1)=0x80u;
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_mov(c,0,4);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,12);
  fp_arith(c,2,3,14);
  fp_fmac(c,2,3);
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  fp_ld(c,3,R(14));
  R(14)+=0xcu;
  fp_mov(c,2,13);
  c->t=R(14)>=R(12);
  fp_arith(c,2,3,15);
  fp_fmac(c,2,3);
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  { uint32_t k=!c->t; R(13)+=0xcu; if(k) goto L8c07d488; }
L8c07d4c4:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07d4da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+76);
  R(3)=0x8c05e7e8u;
  R(5)=R(0);
  R(0)=LD32(c->gbr+44);
  R(5)+=0x28u;
  R(14)=R(0);
  R(0)=LD32(c->gbr+16);
  R(7)=R(0);
  ST32(R(15),R(0));
  R(6)=LD32(R(0));
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(7)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c07d4fcu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+88);
  R(1)=0x2cu;
  c->fr[10]=0x3F800000u;
  R(4)=R(0);
  R(0)=0x88u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,4,5);
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x8u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,7,R(0)+R(4));
  fp_arith(c,2,5,3);
  R(0)=LD32(c->gbr+48);
  R(5)=R(0);
  R(0)=LD32(c->gbr+16);
  R(6)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x8c07d54cu;
  fp_ld(c,11,R(0));
  R(0)=0x8c07d550u;
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(6)+=R(14);
  { fp_ld(c,8,R(0)); goto L8c07d5c8; }
L8c07d560:;
  R(0)=LD32(c->gbr+88);
  R(2)=R(14);
  R(3)=0x80u;
  R(4)=R(5);
  R(2)=LD32(R(2)+8);
  R(1)=LD32(R(3)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  { uint32_t k=c->t; R(4)+=0x8u; if(k) goto L8c07d59e; }
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_st(c,8,R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07d582;
  { fp_mov(c,3,8); goto L8c07d586; }
L8c07d582:;
  R(0)=0x8c07d5e4u;
  fp_ld(c,3,R(0));
L8c07d586:;
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,3,R(14));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(4)+=0xfffffffcu; if(k) goto L8c07d596; }
  { fp_mov(c,3,8); goto L8c07d59a; }
L8c07d596:;
  R(0)=0x8c07d5e4u;
  fp_ld(c,3,R(0));
L8c07d59a:;
  { fp_st(c,3,R(4)); goto L8c07d5c4; }
L8c07d59e:;
  R(0)=0x8u;
  fp_mov(c,9,10);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_mov(c,2,7);
  fp_arith(c,3,9,3);
  fp_mov(c,3,9);
  fp_arith(c,2,3,11);
  fp_mov(c,0,9);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,5);
  fp_fmac(c,2,3);
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  fp_ld(c,3,R(14));
  fp_mov(c,2,6);
  fp_arith(c,2,3,4);
  fp_fmac(c,2,3);
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
L8c07d5c4:;
  R(5)+=0xcu;
  R(14)+=0xcu;
L8c07d5c8:;
  c->t=R(14)>=R(6);
  if(!c->t) goto L8c07d560;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07d600(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+76);
  R(3)=0x8c05e7e8u;
  R(5)=R(0);
  R(0)=LD32(c->gbr+44);
  R(5)+=0x28u;
  R(14)=R(0);
  R(0)=LD32(c->gbr+16);
  R(7)=R(0);
  ST32(R(15),R(0));
  R(6)=LD32(R(0));
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(7)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c07d622u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+88);
  R(1)=0x2cu;
  R(4)=R(0);
  R(0)=0x88u;
  fp_ld(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,5,4);
  fp_arith(c,2,5,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x8u;
  fp_ld(c,6,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,8,R(0)+R(4));
  fp_arith(c,2,4,3);
  R(0)=LD32(c->gbr+48);
  R(5)=R(0);
  R(0)=LD32(c->gbr+16);
  R(6)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x8c07d6e8u;
  fp_ld(c,10,R(0));
  R(3)=R(6);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)<<=2;
  R(6)+=R(14);
  c->t=R(14)>=R(6);
  { uint32_t k=c->t; c->fr[9]=0x3F800000u; if(k) goto L8c07d690; }
L8c07d65e:;
  R(0)=0x8u;
  fp_mov(c,7,9);
  fp_ld(c,3,R(0)+R(14));
  R(4)=R(5);
  R(4)+=0x8u;
  fp_mov(c,2,8);
  fp_arith(c,3,7,3);
  R(0)=0x4u;
  fp_mov(c,3,7);
  fp_arith(c,2,3,10);
  fp_mov(c,0,7);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_fmac(c,2,3);
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  fp_ld(c,3,R(14));
  R(14)+=0xcu;
  fp_mov(c,2,6);
  c->t=R(14)>=R(6);
  fp_arith(c,2,3,5);
  fp_fmac(c,2,3);
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  { uint32_t k=!c->t; R(5)+=0xcu; if(k) goto L8c07d65e; }
L8c07d690:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07d698(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c806eu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  R(13)=0x8c038d42u;
  R(0)=(uint32_t)(int32_t)(int8_t)R(5);
  R(14)=0x100u;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c07d70c;
  { uint32_t tg=R(13); c->pr=0x8c07d6b4u;  sh4_call(c,tg); }
  R(0)=LD32(c->gbr+32);
  c->t=(R(0)&R(14))==0;
  if(c->t) goto L8c07d700;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07cfa0(c); return; } }
L8c07d700:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07d160(c); return; } }
L8c07d70c:;
  R(1)=0x8c0c806cu;
  R(0)=LD32(c->gbr+16);
  R(2)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c07d754; }
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c07d754;
  R(1)=0x42280000u;
  R(0)=0x34u;
  fp_ld(c,15,R(0)+R(12));
  c->fpul=R(1);
  fp_mov(c,2,15);
  c->fr[3]=c->fpul;
  fp_arith(c,0,2,3);
  { uint32_t tg=R(13); c->pr=0x8c07d730u; fp_st(c,2,R(0)+R(12)); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+16);
  R(1)=0x34u;
  fp_st(c,15,R(0)+R(1));
  R(0)=LD32(c->gbr+32);
  c->t=(R(0)&R(14))==0;
  if(c->t) goto L8c07d748;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07ca80(c); return; } }
L8c07d748:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07cd40(c); return; } }
L8c07d754:;
  R(2)=0x8c20ae78u;
  R(0)=(int32_t)(int8_t)LD8(R(2));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(5)=R(0); if(k) goto L8c07d764; }
  R(1)=0x80000000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c07d776;
L8c07d764:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c07d770;
  R(3)=0x80000000u;
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c07d776;
L8c07d770:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c07d7be;
L8c07d776:;
  R(4)=0x8c20b0c8u;
  R(1)=0x4u;
  R(2)=0x8u;
  R(1)+=R(4);
  fp_ld(c,3,R(4));
  fp_ld(c,0,R(1));
  R(2)+=R(4);
  R(0)=0x34u;
  fp_arith(c,0,3,0);
  fp_ld(c,0,R(2));
  fp_ld(c,15,R(0)+R(12));
  fp_mov(c,2,15);
  fp_arith(c,0,3,0);
  c->fr[0]=0x3F800000u;
  fp_arith(c,0,0,0);
  fp_fmac(c,2,3);
  { uint32_t tg=R(13); c->pr=0x8c07d79au; fp_st(c,2,R(0)+R(12)); sh4_call(c,tg); }
  R(0)=LD32(c->gbr+16);
  R(1)=0x34u;
  fp_st(c,15,R(0)+R(1));
  R(0)=LD32(c->gbr+32);
  c->t=(R(0)&R(14))==0;
  if(c->t) goto L8c07d7b2;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07d2c0(c); return; } }
L8c07d7b2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07d420(c); return; } }
L8c07d7be:;
  { uint32_t tg=R(13); c->pr=0x8c07d7c2u;  sh4_call(c,tg); }
  R(0)=LD32(c->gbr+32);
  c->t=(R(0)&R(14))==0;
  if(c->t) goto L8c07d7d4;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07d4da(c); return; } }
L8c07d7d4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07d600(c); return; } }
}
void f_8c07d800(SH4Ctx *c) {
  R(1)=0x8c0c806eu;
  R(0)=0x8c07d884u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c143ab0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,9,R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(7)=LD32(R(3)); if(k) goto L8c07d842; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07d842;
  R(2)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x18u;
  fp_ld(c,7,R(2));
  fp_arith(c,0,3,7);
  fp_mov(c,6,3);
  fp_arith(c,2,6,9);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x1cu;
  fp_arith(c,0,3,7);
  fp_mov(c,5,3);
  fp_arith(c,2,5,9);
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,0,3,7);
  { fp_mov(c,4,3); goto L8c07d852; }
L8c07d842:;
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(7));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(7));
  R(0)=0x1cu;
  fp_arith(c,2,6,9);
  fp_ld(c,4,R(0)+R(7));
  fp_arith(c,2,5,9);
L8c07d852:;
  R(0)=0x20u;
  fp_arith(c,2,4,9);
  fp_ld(c,3,R(0)+R(7));
  R(13)=0xffu;
  fp_arith(c,2,3,9);
  fp_ftrc(c,3);
  R(6)=c->fpul;
  c->t=(int32_t)R(6)>(int32_t)R(13);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c07d8a0; }
  { R(6)=R(13); goto L8c07d8a6; }
L8c07d8a0:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07d8a6;
  R(6)=R(12);
L8c07d8a6:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,8,R(0)+R(7));
  R(0)=0x28u;
  fp_ld(c,7,R(0)+R(7));
  R(0)=0x2cu;
  fp_arith(c,2,8,9);
  R(11)=(uint32_t)(int32_t)(int16_t)R(4);
  fp_arith(c,2,7,9);
  fp_ld(c,9,R(0)+R(7));
  c->t=R(11)>>31;R(11)<<=1;
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,9,3);
  R(11)+=R(5);
  R(6)<<=16;
  c->t=R(5)>=R(11);
  R(6)<<=8;
  { uint32_t k=c->t; R(10)=R(0); if(k) goto L8c07d93e; }
L8c07d8cc:;
  R(1)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(c->gbr+60);
  R(1)<<=2;
  fp_mov(c,0,8);
  R(3)=R(0);
  R(1)<<=2;
  R(1)+=R(3);
  fp_mov(c,3,6);
  fp_ld(c,2,R(1));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(1));
  fp_mov(c,0,7);
  R(0)=0x8u;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(1));
  fp_mov(c,0,9);
  R(4)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  c->t=(int32_t)R(4)>(int32_t)R(13);
  R(7)=c->fpul;
  fp_ftrc(c,3);
  { uint32_t k=!c->t; R(1)=c->fpul; if(k) goto L8c07d908; }
  { R(4)=R(13); goto L8c07d90e; }
L8c07d908:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c07d90e;
  R(4)=R(12);
L8c07d90e:;
  c->t=(int32_t)R(7)>(int32_t)R(13);
  if(!c->t) goto L8c07d916;
  { R(7)=R(13); goto L8c07d91c; }
L8c07d916:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07d91c;
  R(7)=R(12);
L8c07d91c:;
  c->t=(int32_t)R(1)>(int32_t)R(13);
  if(!c->t) goto L8c07d924;
  { R(1)=R(13); goto L8c07d92a; }
L8c07d924:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07d92a;
  R(1)=R(12);
L8c07d92a:;
  R(4)<<=16;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(0)=(uint32_t)v;}
  R(7)<<=8;
  R(4)|=R(7);
  c->t=R(5)>=R(11);
  R(4)|=R(1);
  R(4)|=R(6);
  R(0)<<=2;
  { uint32_t k=!c->t; ST32(R(10)+R(0),R(4)); if(k) goto L8c07d8cc; }
L8c07d93e:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07d948(SH4Ctx *c) {
  R(1)=0x8c0c806eu;
  R(0)=0x8c07d9a0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c143ab0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,9,R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(6)=LD32(R(3)); if(k) goto L8c07d9c0; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07d9c0;
  R(2)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,7,R(2));
  fp_arith(c,0,3,7);
  fp_mov(c,4,3);
  fp_arith(c,2,4,9);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,0,3,7);
  fp_mov(c,6,3);
  fp_arith(c,2,6,9);
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,7);
  { fp_mov(c,5,3); goto L8c07d9d0; }
L8c07d9c0:;
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,4,9);
  fp_ld(c,5,R(0)+R(6));
  fp_arith(c,2,6,9);
L8c07d9d0:;
  R(0)=0x20u;
  fp_arith(c,2,5,9);
  fp_ld(c,3,R(0)+R(6));
  R(13)=0xffu;
  fp_arith(c,2,3,9);
  fp_ftrc(c,3);
  R(5)=c->fpul;
  c->t=(int32_t)R(5)>(int32_t)R(13);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c07d9e8; }
  { R(5)=R(13); goto L8c07d9ee; }
L8c07d9e8:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07d9ee;
  R(5)=R(12);
L8c07d9ee:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,8,R(0)+R(6));
  R(0)=0x28u;
  fp_ld(c,7,R(0)+R(6));
  R(0)=0x2cu;
  fp_arith(c,2,8,9);
  R(5)<<=16;
  fp_arith(c,2,7,9);
  fp_ld(c,9,R(0)+R(6));
  R(0)=LD32(c->gbr+52);
  R(5)<<=8;
  fp_arith(c,2,9,3);
  R(10)=R(0);
  R(0)=LD32(c->gbr+60);
  { R(11)=R(0); goto L8c07da92; }
L8c07da10:;
  fp_ld(c,2,R(11));
  R(0)=0x4u;
  fp_mov(c,3,4);
  fp_mov(c,0,8);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(11));
  R(0)=0x8u;
  fp_mov(c,0,7);
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(11));
  fp_mov(c,0,9);
  R(6)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  c->t=(int32_t)R(6)>(int32_t)R(13);
  R(7)=c->fpul;
  fp_ftrc(c,3);
  { uint32_t k=!c->t; R(1)=c->fpul; if(k) goto L8c07da60; }
  { R(6)=R(13); goto L8c07da66; }
L8c07da60:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07da66;
  R(6)=R(12);
L8c07da66:;
  c->t=(int32_t)R(7)>(int32_t)R(13);
  if(!c->t) goto L8c07da6e;
  { R(7)=R(13); goto L8c07da74; }
L8c07da6e:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07da74;
  R(7)=R(12);
L8c07da74:;
  c->t=(int32_t)R(1)>(int32_t)R(13);
  if(!c->t) goto L8c07da7c;
  { R(1)=R(13); goto L8c07da82; }
L8c07da7c:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07da82;
  R(1)=R(12);
L8c07da82:;
  R(7)<<=8;
  R(6)<<=16;
  R(6)|=R(7);
  R(6)|=R(1);
  R(6)|=R(5);
  ST32(R(10),R(6));
  R(11)+=0x10u;
  R(10)+=0x4u;
L8c07da92:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)+=0xffffffffu; if(k) goto L8c07da10; }
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07daa4(SH4Ctx *c) {
  R(3)=0x8c143ab0u;
  R(0)=0x8c07db00u;
  R(1)=0x8c0c806eu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(3));
  fp_ld(c,11,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,7,R(0)+R(6));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_arith(c,2,7,11); if(k) goto L8c07db20; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07db20;
  R(3)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,8,R(3));
  fp_arith(c,0,3,8);
  fp_mov(c,4,3);
  fp_arith(c,2,4,11);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,0,3,8);
  fp_mov(c,6,3);
  fp_arith(c,2,6,11);
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,8);
  { fp_mov(c,5,3); goto L8c07db30; }
L8c07db20:;
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,4,11);
  fp_ld(c,5,R(0)+R(6));
  fp_arith(c,2,6,11);
L8c07db30:;
  R(0)=0x30u;
  fp_mov(c,3,11);
  fp_ld(c,10,R(0)+R(6));
  R(0)=0x24u;
  fp_ld(c,9,R(0)+R(6));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(6));
  R(0)=0x2cu;
  fp_arith(c,2,9,11);
  R(12)=0xffu;
  fp_arith(c,2,8,11);
  fp_arith(c,2,10,11);
  fp_arith(c,2,5,11);
  fp_ld(c,11,R(0)+R(6));
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,11,3);
  R(10)=R(0);
  { R(11)=0x0u; { f_8c07dc16(c); return; } }
}
void f_8c07db56(SH4Ctx *c) {
  R(2)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(c->gbr+60);
  R(2)<<=2;
  fp_mov(c,3,4);
  R(13)=R(0);
  R(2)<<=2;
  R(13)+=R(2);
  fp_mov(c,0,9);
  fp_ld(c,2,R(13));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,8);
  R(0)=0x8u;
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,11);
  R(0)=0xcu;
  R(7)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,10);
  R(1)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  R(6)=c->fpul;
  fp_ftrc(c,3);
  c->t=(int32_t)R(7)>(int32_t)R(12);
  { uint32_t k=!c->t; R(13)=c->fpul; if(k) goto L8c07dba0; }
  { R(7)=R(12); goto L8c07dba6; }
L8c07dba0:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07dba6;
  R(7)=R(11);
L8c07dba6:;
  c->t=(int32_t)R(1)>(int32_t)R(12);
  if(!c->t) goto L8c07dbe0;
  { R(1)=R(12); goto L8c07dbe6; }
L8c07dbe0:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07dbe6;
  R(1)=R(11);
L8c07dbe6:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  if(!c->t) goto L8c07dbee;
  { R(6)=R(12); goto L8c07dbf4; }
L8c07dbee:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07dbf4;
  R(6)=R(11);
L8c07dbf4:;
  c->t=(int32_t)R(13)>(int32_t)R(12);
  if(!c->t) goto L8c07dbfc;
  { R(13)=R(12); goto L8c07dc02; }
L8c07dbfc:;
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c07dc02;
  R(13)=R(11);
L8c07dc02:;
  R(13)<<=16;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(0)=(uint32_t)v;}
  R(13)<<=8;
  R(7)<<=16;
  R(13)|=R(7);
  R(1)<<=8;
  R(13)|=R(1);
  R(13)|=R(6);
  R(0)<<=2;
  ST32(R(10)+R(0),R(13));
  { f_8c07dc16(c); return; }
}
void f_8c07dbc0(SH4Ctx *c) {
  sh4_mac_l(c,R(0),R(15));R(0)+=4;R(15)+=4;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07dbe6;
  R(1)=R(11);
L8c07dbe6:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  if(!c->t) goto L8c07dbee;
  { R(6)=R(12); goto L8c07dbf4; }
L8c07dbee:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07dbf4;
  R(6)=R(11);
L8c07dbf4:;
  c->t=(int32_t)R(13)>(int32_t)R(12);
  if(!c->t) goto L8c07dbfc;
  { R(13)=R(12); goto L8c07dc02; }
L8c07dbfc:;
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c07dc02;
  R(13)=R(11);
L8c07dc02:;
  R(13)<<=16;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(0)=(uint32_t)v;}
  R(13)<<=8;
  R(7)<<=16;
  R(13)|=R(7);
  R(1)<<=8;
  R(13)|=R(1);
  R(13)|=R(6);
  R(0)<<=2;
  ST32(R(10)+R(0),R(13));
  { f_8c07dc16(c); return; }
}
void f_8c07dc16(SH4Ctx *c) {
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)+=0xffffffffu; if(k) { f_8c07db56(c); return; } }
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07dc28(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=0x8c143ab0u;
  R(0)=0x8c07dc80u;
  R(1)=0x8c0c806eu;
  R(5)=LD32(R(3));
  fp_ld(c,11,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,7,R(0)+R(5));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_arith(c,2,7,11); if(k) goto L8c07dca0; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07dca0;
  R(3)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,8,R(3));
  fp_arith(c,0,3,8);
  fp_mov(c,6,3);
  fp_arith(c,2,6,11);
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,0,3,8);
  fp_mov(c,4,3);
  fp_arith(c,2,4,11);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,3,8);
  { fp_mov(c,5,3); goto L8c07dcb0; }
L8c07dca0:;
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,4,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,2,6,11);
  fp_ld(c,5,R(0)+R(5));
  fp_arith(c,2,4,11);
L8c07dcb0:;
  R(0)=0x30u;
  fp_mov(c,3,11);
  fp_ld(c,9,R(0)+R(5));
  R(0)=0x24u;
  fp_ld(c,8,R(0)+R(5));
  R(0)=0x28u;
  fp_ld(c,10,R(0)+R(5));
  R(0)=0x2cu;
  fp_arith(c,2,5,11);
  R(13)=0xffu;
  fp_arith(c,2,10,11);
  fp_arith(c,2,9,11);
  fp_arith(c,2,8,11);
  fp_ld(c,11,R(0)+R(5));
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,11,3);
  R(10)=R(0);
  R(0)=LD32(c->gbr+60);
  R(11)=R(0);
  { R(12)=0x0u; { f_8c07dd96(c); return; } }
}
void f_8c07dcda(SH4Ctx *c) {
  fp_ld(c,2,R(11));
  R(0)=0x4u;
  fp_mov(c,0,8);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(11));
  R(0)=0x8u;
  fp_mov(c,0,10);
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(11));
  fp_mov(c,0,11);
  R(0)=0xcu;
  R(6)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(11));
  fp_mov(c,0,9);
  c->t=(int32_t)R(6)>(int32_t)R(13);
  R(1)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  R(5)=c->fpul;
  fp_ftrc(c,3);
  { uint32_t k=!c->t; R(7)=c->fpul; if(k) goto L8c07dd18; }
  { R(6)=R(13); goto L8c07dd1e; }
L8c07dd18:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07dd1e;
  R(6)=R(12);
L8c07dd1e:;
  c->t=(int32_t)R(1)>(int32_t)R(13);
  if(!c->t) goto L8c07dd60;
  { R(1)=R(13); goto L8c07dd66; }
L8c07dd60:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07dd66;
  R(1)=R(12);
L8c07dd66:;
  c->t=(int32_t)R(5)>(int32_t)R(13);
  if(!c->t) goto L8c07dd6e;
  { R(5)=R(13); goto L8c07dd74; }
L8c07dd6e:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07dd74;
  R(5)=R(12);
L8c07dd74:;
  c->t=(int32_t)R(7)>(int32_t)R(13);
  if(!c->t) goto L8c07dd7c;
  { R(7)=R(13); goto L8c07dd82; }
L8c07dd7c:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07dd82;
  R(7)=R(12);
L8c07dd82:;
  R(7)<<=16;
  R(6)<<=16;
  R(7)<<=8;
  R(1)<<=8;
  R(7)|=R(6);
  R(7)|=R(1);
  R(7)|=R(5);
  ST32(R(10),R(7));
  R(11)+=0x10u;
  R(10)+=0x4u;
  { f_8c07dd96(c); return; }
}
void f_8c07dd40(SH4Ctx *c) {
  sh4_mac_l(c,R(0),R(15));R(0)+=4;R(15)+=4;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07dd66;
  R(1)=R(12);
L8c07dd66:;
  c->t=(int32_t)R(5)>(int32_t)R(13);
  if(!c->t) goto L8c07dd6e;
  { R(5)=R(13); goto L8c07dd74; }
L8c07dd6e:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07dd74;
  R(5)=R(12);
L8c07dd74:;
  c->t=(int32_t)R(7)>(int32_t)R(13);
  if(!c->t) goto L8c07dd7c;
  { R(7)=R(13); goto L8c07dd82; }
L8c07dd7c:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07dd82;
  R(7)=R(12);
L8c07dd82:;
  R(7)<<=16;
  R(6)<<=16;
  R(7)<<=8;
  R(1)<<=8;
  R(7)|=R(6);
  R(7)|=R(1);
  R(7)|=R(5);
  ST32(R(10),R(7));
  R(11)+=0x10u;
  R(10)+=0x4u;
  { f_8c07dd96(c); return; }
}
void f_8c07dd96(SH4Ctx *c) {
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(4)+=0xffffffffu; if(k) { f_8c07dcda(c); return; } }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07ddaa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(1)=0x8c0c806eu;
  R(0)=0x8c07de00u;
  fp_ld(c,9,R(0));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c143ab0u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(7)=LD32(R(3)); if(k) goto L8c07de20; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07de20;
  R(2)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x18u;
  fp_ld(c,7,R(2));
  fp_arith(c,0,3,7);
  fp_mov(c,6,3);
  fp_arith(c,2,6,9);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x1cu;
  fp_arith(c,0,3,7);
  fp_mov(c,4,3);
  fp_arith(c,2,4,9);
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,0,3,7);
  { fp_mov(c,5,3); goto L8c07de30; }
L8c07de20:;
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(7));
  R(0)=0x18u;
  fp_ld(c,4,R(0)+R(7));
  R(0)=0x1cu;
  fp_arith(c,2,6,9);
  fp_ld(c,5,R(0)+R(7));
  fp_arith(c,2,4,9);
L8c07de30:;
  R(0)=0x20u;
  fp_arith(c,2,5,9);
  fp_ld(c,3,R(0)+R(7));
  R(13)=0xffu;
  fp_arith(c,2,3,9);
  fp_ftrc(c,3);
  R(6)=c->fpul;
  c->t=(int32_t)R(6)>(int32_t)R(13);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c07de48; }
  { R(6)=R(13); goto L8c07de4e; }
L8c07de48:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07de4e;
  R(6)=R(12);
L8c07de4e:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,7,R(0)+R(7));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(7));
  R(0)=0x2cu;
  fp_arith(c,2,7,9);
  R(11)=(uint32_t)(int32_t)(int16_t)R(4);
  fp_arith(c,2,8,9);
  fp_ld(c,9,R(0)+R(7));
  R(0)=LD32(c->gbr+52);
  c->t=R(11)>>31;R(11)<<=1;
  fp_arith(c,2,9,3);
  R(8)=0x8c0c80b4u;
  R(9)=R(0);
  R(0)=LD32(c->gbr+56);
  R(10)=0x8c0c80b0u;
  R(11)+=R(5);
  ST32(R(15),R(0));
  R(6)<<=16;
  c->t=R(5)>=R(11);
  R(0)=0x8c07df0cu;
  R(6)<<=8;
  { uint32_t k=!c->t; fp_ld(c,10,R(0)); if(k) goto L8c07de84; }
  {  goto L8c07df9c; }
L8c07de84:;
  R(4)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(c->gbr+60);
  R(14)=R(4);
  R(14)<<=2;
  R(3)=R(0);
  R(14)<<=2;
  R(14)+=R(3);
  R(3)=R(4);
  R(0)=LD32(c->gbr+16);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(3)=0x8c0c467cu;
  R(2)=LD32(R(0));
  R(4)<<=2;
  fp_ld(c,2,R(3));
  R(0)=0x4u;
  R(4)+=R(2);
  fp_ld(c,0,R(10));
  fp_ld(c,3,R(4));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8c2cb938u;
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,10);
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(2)&=R(13);
  R(2)<<=2;
  fp_ld(c,3,R(0)+R(2));
  R(1)=0x8c0c8068u;
  R(0)=0x4u;
  fp_ld(c,2,R(14));
  fp_ld(c,11,R(1));
  fp_mov(c,0,7);
  fp_arith(c,2,11,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(14));
  fp_mov(c,0,8);
  R(0)=0x8u;
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(14));
  fp_mov(c,0,9);
  R(4)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  c->t=(int32_t)R(4)>(int32_t)R(13);
  R(7)=c->fpul;
  fp_ftrc(c,3);
  { uint32_t k=!c->t; R(14)=c->fpul; if(k) goto L8c07df20; }
  { R(4)=R(13); goto L8c07df26; }
L8c07df20:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c07df26;
  R(4)=R(12);
L8c07df26:;
  c->t=(int32_t)R(7)>(int32_t)R(13);
  if(!c->t) goto L8c07df2e;
  { R(7)=R(13); goto L8c07df34; }
L8c07df2e:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07df34;
  R(7)=R(12);
L8c07df34:;
  c->t=(int32_t)R(14)>(int32_t)R(13);
  if(!c->t) goto L8c07df3c;
  { R(14)=R(13); goto L8c07df42; }
L8c07df3c:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07df42;
  R(14)=R(12);
L8c07df42:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,11);
  if(!c->t) goto L8c07df7c;
  c->fpul=R(4);
  fp_ld(c,2,R(8));
  fp_float(c,1);
  fp_arith(c,2,2,11);
  fp_mov(c,11,2);
  fp_mov(c,2,1);
  fp_unary(c,0,11);
  fp_arith(c,2,2,11);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(4)=c->fpul;
  c->fpul=R(7);
  fp_float(c,1);
  fp_mov(c,2,1);
  fp_arith(c,2,2,11);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(7)=c->fpul;
  c->fpul=R(14);
  fp_float(c,1);
  fp_mov(c,2,1);
  fp_arith(c,2,2,11);
  fp_mov(c,0,1);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(14)=c->fpul;
L8c07df7c:;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(7)<<=8;
  R(0)=LD32(R(15));
  R(4)<<=16;
  R(3)<<=2;
  ST32(R(3)+R(0),R(12));
  R(4)|=R(7);
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(0)=(uint32_t)v;}
  R(4)|=R(14);
  R(4)|=R(6);
  c->t=R(5)>=R(11);
  R(0)<<=2;
  { uint32_t k=c->t; ST32(R(9)+R(0),R(4)); if(k) goto L8c07df9c; }
  {  goto L8c07de84; }
L8c07df9c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07dfae(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=LD32(c->gbr+16);
  R(1)=0x8c0c806eu;
  R(13)=LD32(R(0));
  R(0)=0x8c07e000u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,9,R(0));
  R(3)=0x8c143ab0u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(6)=LD32(R(3)); if(k) goto L8c07e020; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07e020;
  R(2)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,7,R(2));
  fp_arith(c,0,3,7);
  fp_mov(c,4,3);
  fp_arith(c,2,4,9);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,0,3,7);
  fp_mov(c,6,3);
  fp_arith(c,2,6,9);
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,7);
  { fp_mov(c,5,3); goto L8c07e030; }
L8c07e020:;
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,4,9);
  fp_ld(c,5,R(0)+R(6));
  fp_arith(c,2,6,9);
L8c07e030:;
  R(0)=0x20u;
  fp_arith(c,2,5,9);
  fp_ld(c,3,R(0)+R(6));
  R(12)=0xffu;
  fp_arith(c,2,3,9);
  fp_ftrc(c,3);
  R(5)=c->fpul;
  c->t=(int32_t)R(5)>(int32_t)R(12);
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c07e048; }
  { R(5)=R(12); goto L8c07e04e; }
L8c07e048:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07e04e;
  R(5)=R(11);
L8c07e04e:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,7,R(0)+R(6));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(6));
  R(0)=0x2cu;
  fp_arith(c,2,7,9);
  R(8)=0x8c0c8068u;
  fp_arith(c,2,8,9);
  fp_ld(c,9,R(0)+R(6));
  R(0)=LD32(c->gbr+52);
  R(5)<<=16;
  fp_arith(c,2,9,3);
  R(9)=0x8c0c80b4u;
  ST32(R(15),R(0));
  R(5)<<=8;
  R(0)=LD32(c->gbr+56);
  ST32(R(15)+4,R(0));
  R(0)=LD32(c->gbr+60);
  R(10)=R(0);
  R(0)=0x8c07e0ecu;
  { fp_ld(c,10,R(0)); goto L8c07e17a; }
L8c07e07c:;
  R(2)=0x8c0c467cu;
  R(0)=0x4u;
  R(3)=0x8c0c80b0u;
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(13));
  fp_ld(c,0,R(3));
  fp_ld(c,11,R(8));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,7);
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8c2cb938u;
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(10));
  fp_arith(c,2,3,10);
  fp_ftrc(c,3);
  R(1)=c->fpul;
  R(1)&=R(12);
  R(1)<<=2;
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_arith(c,2,11,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,8);
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  R(6)=c->fpul;
  R(0)=0x8u;
  fp_ftrc(c,3);
  fp_ld(c,2,R(0)+R(10));
  c->t=(int32_t)R(6)>(int32_t)R(12);
  fp_mov(c,3,5);
  fp_mov(c,0,9);
  fp_fmac(c,3,2);
  R(7)=c->fpul;
  fp_ftrc(c,3);
  { uint32_t k=!c->t; R(14)=c->fpul; if(k) goto L8c07e100; }
  { R(6)=R(12); goto L8c07e106; }
L8c07e100:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07e106;
  R(6)=R(11);
L8c07e106:;
  c->t=(int32_t)R(7)>(int32_t)R(12);
  if(!c->t) goto L8c07e10e;
  { R(7)=R(12); goto L8c07e114; }
L8c07e10e:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07e114;
  R(7)=R(11);
L8c07e114:;
  c->t=(int32_t)R(14)>(int32_t)R(12);
  if(!c->t) goto L8c07e11c;
  { R(14)=R(12); goto L8c07e122; }
L8c07e11c:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07e122;
  R(14)=R(11);
L8c07e122:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,11);
  if(!c->t) goto L8c07e15c;
  c->fpul=R(6);
  fp_ld(c,2,R(9));
  fp_float(c,1);
  fp_arith(c,2,2,11);
  fp_mov(c,11,2);
  fp_mov(c,2,1);
  fp_unary(c,0,11);
  fp_arith(c,2,2,11);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(6)=c->fpul;
  c->fpul=R(7);
  fp_float(c,1);
  fp_mov(c,2,1);
  fp_arith(c,2,2,11);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(7)=c->fpul;
  c->fpul=R(14);
  fp_float(c,1);
  fp_mov(c,2,1);
  fp_arith(c,2,2,11);
  fp_mov(c,0,1);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(14)=c->fpul;
L8c07e15c:;
  R(3)=LD32(R(15)+4);
  R(6)<<=16;
  R(7)<<=8;
  R(3)+=0x4u;
  ST32(R(15)+4,R(3));
  R(6)|=R(7);
  {uint32_t v=R(11);R(3)-=4;ST32(R(3),v);}
  R(6)|=R(14);
  R(3)=LD32(R(15));
  R(6)|=R(5);
  R(13)+=0xcu;
  R(3)+=0x4u;
  ST32(R(15),R(3));
  R(10)+=0x10u;
  {uint32_t v=R(6);R(3)-=4;ST32(R(3),v);}
L8c07e17a:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c07e186; }
  {  goto L8c07e07c; }
L8c07e186:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07e198(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)+=0xfffffff8u;
  R(3)=0x8c143ab0u;
  R(0)=0x8c07e200u;
  R(1)=0x8c0c806eu;
  R(6)=LD32(R(3));
  fp_ld(c,11,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,7,R(0)+R(6));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_arith(c,2,7,11); if(k) goto L8c07e220; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07e220;
  R(3)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,8,R(3));
  fp_arith(c,0,3,8);
  fp_mov(c,6,3);
  fp_arith(c,2,6,11);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,0,3,8);
  fp_mov(c,4,3);
  fp_arith(c,2,4,11);
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,8);
  { fp_mov(c,5,3); goto L8c07e230; }
L8c07e220:;
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,6,11);
  fp_ld(c,5,R(0)+R(6));
  fp_arith(c,2,4,11);
L8c07e230:;
  R(0)=0x30u;
  fp_mov(c,3,11);
  fp_ld(c,9,R(0)+R(6));
  R(0)=0x24u;
  fp_ld(c,10,R(0)+R(6));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(6));
  R(0)=0x2cu;
  fp_arith(c,2,5,11);
  R(12)=0xffu;
  fp_arith(c,2,8,11);
  R(8)=0x8c2cb938u;
  fp_arith(c,2,9,11);
  R(9)=0x8c0c8068u;
  fp_arith(c,2,10,11);
  fp_ld(c,11,R(0)+R(6));
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,11,3);
  R(10)=0x8c0c80b4u;
  ST32(R(15),R(0));
  R(0)=LD32(c->gbr+56);
  ST32(R(15)+4,R(0));
  R(0)=0x8c07e310u;
  fp_ld(c,15,R(0));
  { R(11)=0x0u; goto L8c07e3a8; }
L8c07e264:;
  R(6)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(c->gbr+16);
  R(7)=R(6);
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=R(6);
  R(2)=LD32(R(0));
  R(7)+=R(3);
  R(3)=0x8c0c80b0u;
  R(7)<<=2;
  fp_ld(c,14,R(9));
  R(7)+=R(2);
  R(2)=0x8c0c467cu;
  fp_ld(c,3,R(7));
  R(0)=0x4u;
  fp_ld(c,2,R(2));
  R(6)<<=2;
  fp_ld(c,0,R(3));
  R(6)<<=2;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(0)+R(7));
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,15);
  fp_ftrc(c,3);
  R(0)=c->fpul;
  R(0)&=R(12);
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(8));
  R(0)=LD32(c->gbr+60);
  fp_arith(c,2,14,3);
  R(13)=R(0);
  R(13)+=R(6);
  fp_ld(c,2,R(13));
  R(0)=0x4u;
  fp_mov(c,3,6);
  fp_mov(c,0,10);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,8);
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,11);
  R(0)=0xcu;
  R(14)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,9);
  c->t=(int32_t)R(14)>(int32_t)R(12);
  R(6)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  R(7)=c->fpul;
  fp_ftrc(c,3);
  { uint32_t k=!c->t; R(13)=c->fpul; if(k) goto L8c07e320; }
  { R(14)=R(12); goto L8c07e326; }
L8c07e320:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07e326;
  R(14)=R(11);
L8c07e326:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  if(!c->t) goto L8c07e32e;
  { R(6)=R(12); goto L8c07e334; }
L8c07e32e:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07e334;
  R(6)=R(11);
L8c07e334:;
  c->t=(int32_t)R(7)>(int32_t)R(12);
  if(!c->t) goto L8c07e33c;
  { R(7)=R(12); goto L8c07e342; }
L8c07e33c:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07e342;
  R(7)=R(11);
L8c07e342:;
  c->t=(int32_t)R(13)>(int32_t)R(12);
  if(!c->t) goto L8c07e34a;
  { R(13)=R(12); goto L8c07e350; }
L8c07e34a:;
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c07e350;
  R(13)=R(11);
L8c07e350:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,14);
  if(!c->t) goto L8c07e38a;
  c->fpul=R(14);
  fp_ld(c,2,R(10));
  fp_float(c,1);
  fp_arith(c,2,2,14);
  fp_mov(c,14,2);
  fp_mov(c,2,1);
  fp_unary(c,0,14);
  fp_arith(c,2,2,14);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(14)=c->fpul;
  c->fpul=R(6);
  fp_float(c,1);
  fp_mov(c,2,1);
  fp_arith(c,2,2,14);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(6)=c->fpul;
  c->fpul=R(7);
  fp_float(c,1);
  fp_mov(c,2,1);
  fp_arith(c,2,2,14);
  fp_mov(c,0,1);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(7)=c->fpul;
L8c07e38a:;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(13)<<=16;
  R(0)=LD32(R(15)+4);
  R(13)<<=8;
  R(3)<<=2;
  R(14)<<=16;
  ST32(R(3)+R(0),R(11));
  R(13)|=R(14);
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(3)=(uint32_t)v;}
  R(6)<<=8;
  R(0)=LD32(R(15));
  R(13)|=R(6);
  R(13)|=R(7);
  R(3)<<=2;
  ST32(R(3)+R(0),R(13));
L8c07e3a8:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c07e3b4; }
  {  goto L8c07e264; }
L8c07e3b4:;
  R(15)+=0x8u;
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07e3ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)+=0xffffffd8u;
  R(0)=LD32(c->gbr+16);
  R(3)=0x8c143ab0u;
  R(13)=LD32(R(0));
  R(0)=0x8c07e440u;
  R(1)=0x8c0c806eu;
  R(5)=LD32(R(3));
  fp_ld(c,11,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,7,R(0)+R(5));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_arith(c,2,7,11); if(k) goto L8c07e460; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07e460;
  R(3)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,8,R(3));
  fp_arith(c,0,3,8);
  fp_mov(c,6,3);
  fp_arith(c,2,6,11);
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,0,3,8);
  fp_mov(c,4,3);
  fp_arith(c,2,4,11);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,3,8);
  { fp_mov(c,5,3); goto L8c07e470; }
L8c07e460:;
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,4,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,2,6,11);
  fp_ld(c,5,R(0)+R(5));
  fp_arith(c,2,4,11);
L8c07e470:;
  R(0)=0x30u;
  fp_mov(c,3,11);
  fp_ld(c,10,R(0)+R(5));
  R(0)=0x24u;
  fp_ld(c,9,R(0)+R(5));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(5));
  R(0)=0x2cu;
  fp_arith(c,2,9,11);
  R(12)=0xffu;
  fp_arith(c,2,8,11);
  R(8)=0x8c0c8068u;
  fp_arith(c,2,10,11);
  R(9)=0x8c0c80b4u;
  fp_arith(c,2,5,11);
  fp_ld(c,11,R(0)+R(5));
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,11,3);
  ST32(R(15),R(0));
  R(0)=LD32(c->gbr+56);
  ST32(R(15)+4,R(0));
  R(0)=LD32(c->gbr+60);
  R(10)=R(0);
  R(0)=0x8c07e52cu;
  fp_ld(c,15,R(0));
  { R(11)=0x0u; goto L8c07e5be; }
L8c07e4a6:;
  R(2)=0x8c0c467cu;
  R(0)=0x4u;
  R(3)=0x8c0c80b0u;
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(13));
  fp_ld(c,0,R(3));
  fp_ld(c,14,R(8));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,9);
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8c2cb938u;
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(10));
  fp_arith(c,2,3,15);
  fp_ftrc(c,3);
  R(1)=c->fpul;
  R(1)&=R(12);
  R(1)<<=2;
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_arith(c,2,14,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,8);
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  R(7)=c->fpul;
  R(0)=0x8u;
  fp_ftrc(c,3);
  fp_ld(c,2,R(0)+R(10));
  R(0)=0xcu;
  fp_mov(c,3,5);
  c->t=(int32_t)R(7)>(int32_t)R(12);
  fp_mov(c,0,11);
  fp_fmac(c,3,2);
  R(5)=c->fpul;
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,10);
  fp_ftrc(c,3);
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  R(6)=c->fpul;
  fp_ftrc(c,3);
  { uint32_t k=!c->t; R(14)=c->fpul; if(k) goto L8c07e50e; }
  { R(7)=R(12); goto L8c07e514; }
L8c07e50e:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07e514;
  R(7)=R(11);
L8c07e514:;
  c->t=(int32_t)R(5)>(int32_t)R(12);
  if(!c->t) goto L8c07e540;
  { R(5)=R(12); goto L8c07e546; }
L8c07e540:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07e546;
  R(5)=R(11);
L8c07e546:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  if(!c->t) goto L8c07e54e;
  { R(6)=R(12); goto L8c07e554; }
L8c07e54e:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07e554;
  R(6)=R(11);
L8c07e554:;
  c->t=(int32_t)R(14)>(int32_t)R(12);
  if(!c->t) goto L8c07e55c;
  { R(14)=R(12); goto L8c07e562; }
L8c07e55c:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07e562;
  R(14)=R(11);
L8c07e562:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,14);
  if(!c->t) goto L8c07e59c;
  c->fpul=R(7);
  fp_ld(c,2,R(9));
  fp_float(c,1);
  fp_arith(c,2,2,14);
  fp_mov(c,14,2);
  fp_mov(c,2,1);
  fp_unary(c,0,14);
  fp_arith(c,2,2,14);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(7)=c->fpul;
  c->fpul=R(5);
  fp_float(c,1);
  fp_mov(c,2,1);
  fp_arith(c,2,2,14);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(5)=c->fpul;
  c->fpul=R(6);
  fp_float(c,1);
  fp_mov(c,2,1);
  fp_arith(c,2,2,14);
  fp_mov(c,0,1);
  fp_arith(c,1,1,2);
  fp_ftrc(c,1);
  R(6)=c->fpul;
L8c07e59c:;
  R(3)=LD32(R(15)+4);
  R(14)<<=16;
  R(14)<<=8;
  R(3)+=0x4u;
  ST32(R(15)+4,R(3));
  R(7)<<=16;
  {uint32_t v=R(11);R(3)-=4;ST32(R(3),v);}
  R(14)|=R(7);
  R(3)=LD32(R(15));
  R(5)<<=8;
  R(14)|=R(5);
  R(3)+=0x4u;
  R(14)|=R(6);
  ST32(R(15),R(3));
  R(13)+=0xcu;
  {uint32_t v=R(14);R(3)-=4;ST32(R(3),v);}
  R(10)+=0x10u;
L8c07e5be:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c07e5ca; }
  {  goto L8c07e4a6; }
L8c07e5ca:;
  R(15)+=0x28u;
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07e5e0(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)+=0xfffffffcu;
  R(1)=0x8c0c806eu;
  R(0)=0x8c07e640u;
  fp_ld(c,9,R(0));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c143ab0u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(7)=LD32(R(3)); if(k) goto L8c07e660; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07e660;
  R(2)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x18u;
  fp_ld(c,7,R(2));
  fp_arith(c,0,3,7);
  fp_mov(c,6,3);
  fp_arith(c,2,6,9);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x1cu;
  fp_arith(c,0,3,7);
  fp_mov(c,5,3);
  fp_arith(c,2,5,9);
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,0,3,7);
  { fp_mov(c,4,3); goto L8c07e670; }
L8c07e660:;
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(7));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(7));
  R(0)=0x1cu;
  fp_arith(c,2,6,9);
  fp_ld(c,4,R(0)+R(7));
  fp_arith(c,2,5,9);
L8c07e670:;
  R(0)=0x20u;
  fp_arith(c,2,4,9);
  fp_ld(c,3,R(0)+R(7));
  R(13)=0xffu;
  fp_arith(c,2,3,9);
  fp_ftrc(c,3);
  R(6)=c->fpul;
  c->t=(int32_t)R(6)>(int32_t)R(13);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c07e6c0; }
  { R(6)=R(13); goto L8c07e6c6; }
L8c07e6c0:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07e6c6;
  R(6)=R(12);
L8c07e6c6:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,7,R(0)+R(7));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(7));
  R(0)=0x2cu;
  fp_arith(c,2,7,9);
  R(9)=(uint32_t)(int32_t)(int16_t)R(4);
  fp_arith(c,2,8,9);
  fp_ld(c,9,R(0)+R(7));
  R(0)=LD32(c->gbr+52);
  c->t=R(9)>>31;R(9)<<=1;
  fp_arith(c,2,9,3);
  R(10)=0x7f000000u;
  ST32(R(15),R(0));
  R(6)<<=16;
  R(0)=LD32(c->gbr+56);
  R(9)+=R(5);
  R(8)=0x8c2cb938u;
  c->t=R(5)>=R(9);
  R(11)=R(0);
  R(0)=0x8c07e824u;
  fp_ld(c,14,R(0));
  R(0)=0x8c07e828u;
  fp_ld(c,15,R(0));
  R(0)=0x8c07e82cu;
  fp_ld(c,11,R(0));
  R(6)<<=8;
  R(0)=0x8c07e830u;
  { uint32_t k=c->t; fp_ld(c,10,R(0)); if(k) goto L8c07e7f4; }
L8c07e704:;
  R(4)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(c->gbr+60);
  R(1)=R(4);
  R(1)<<=2;
  R(3)=R(0);
  R(1)<<=2;
  R(1)+=R(3);
  R(3)=R(4);
  R(0)=LD32(c->gbr+16);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(3)=0x8c0c467cu;
  R(2)=LD32(R(0));
  R(4)<<=2;
  fp_ld(c,2,R(3));
  R(0)=0x4u;
  R(4)+=R(2);
  fp_mov(c,0,11);
  fp_ld(c,3,R(4));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_mov(c,0,7);
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(1));
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  R(0)=c->fpul;
  R(0)&=R(13);
  R(0)<<=2;
  fp_ld(c,13,R(0)+R(8));
  R(0)=0x4u;
  fp_ftrc(c,3);
  fp_ld(c,2,R(0)+R(1));
  R(0)=0x8u;
  fp_mov(c,0,8);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  R(7)=c->fpul;
  fp_ld(c,2,R(0)+R(1));
  fp_mov(c,0,9);
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  R(4)=c->fpul;
  fp_ftrc(c,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,13);
  { uint32_t k=!c->t; R(1)=c->fpul; if(k) goto L8c07e7a2; }
  c->fpul=R(7);
  fp_arith(c,2,13,10);
  R(0)=(int32_t)(int16_t)LD16(R(5));
  fp_float(c,2);
  R(0)<<=2;
  fp_unary(c,0,13);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(7)=c->fpul;
  c->fpul=R(4);
  fp_float(c,2);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->fpul=R(1);
  fp_float(c,2);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_mov(c,0,2);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(1)=c->fpul;
  { ST32(R(11)+R(0),R(12)); goto L8c07e7b4; }
L8c07e7a2:;
  fp_arith(c,2,13,15);
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  fp_ftrc(c,13);
  R(2)=c->fpul;
  R(2)=R(2)&0xFF;
  R(2)<<=16;
  R(2)|=R(10);
  ST32(R(11)+R(0),R(2));
L8c07e7b4:;
  c->t=(int32_t)R(7)>(int32_t)R(13);
  if(!c->t) goto L8c07e7bc;
  { R(7)=R(13); goto L8c07e7c2; }
L8c07e7bc:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07e7c2;
  R(7)=R(12);
L8c07e7c2:;
  c->t=(int32_t)R(4)>(int32_t)R(13);
  if(!c->t) goto L8c07e7ca;
  { R(4)=R(13); goto L8c07e7d0; }
L8c07e7ca:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c07e7d0;
  R(4)=R(12);
L8c07e7d0:;
  c->t=(int32_t)R(1)>(int32_t)R(13);
  if(!c->t) goto L8c07e7d8;
  { R(1)=R(13); goto L8c07e7de; }
L8c07e7d8:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07e7de;
  R(1)=R(12);
L8c07e7de:;
  R(7)<<=16;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(3)=(uint32_t)v;}
  R(4)<<=8;
  R(0)=LD32(R(15));
  R(7)|=R(4);
  c->t=R(5)>=R(9);
  R(7)|=R(1);
  R(7)|=R(6);
  R(3)<<=2;
  ST32(R(3)+R(0),R(7));
  if(!c->t) goto L8c07e704;
L8c07e7f4:;
  R(15)+=0x4u;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07e6a0(SH4Ctx *c) {
  sh4_mac_l(c,R(0),R(15));R(0)+=4;R(15)+=4;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07e6c6;
  R(6)=R(12);
L8c07e6c6:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,7,R(0)+R(7));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(7));
  R(0)=0x2cu;
  fp_arith(c,2,7,9);
  R(9)=(uint32_t)(int32_t)(int16_t)R(4);
  fp_arith(c,2,8,9);
  fp_ld(c,9,R(0)+R(7));
  R(0)=LD32(c->gbr+52);
  c->t=R(9)>>31;R(9)<<=1;
  fp_arith(c,2,9,3);
  R(10)=0x7f000000u;
  ST32(R(15),R(0));
  R(6)<<=16;
  R(0)=LD32(c->gbr+56);
  R(9)+=R(5);
  R(8)=0x8c2cb938u;
  c->t=R(5)>=R(9);
  R(11)=R(0);
  R(0)=0x8c07e824u;
  fp_ld(c,14,R(0));
  R(0)=0x8c07e828u;
  fp_ld(c,15,R(0));
  R(0)=0x8c07e82cu;
  fp_ld(c,11,R(0));
  R(6)<<=8;
  R(0)=0x8c07e830u;
  { uint32_t k=c->t; fp_ld(c,10,R(0)); if(k) goto L8c07e7f4; }
L8c07e704:;
  R(4)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(c->gbr+60);
  R(1)=R(4);
  R(1)<<=2;
  R(3)=R(0);
  R(1)<<=2;
  R(1)+=R(3);
  R(3)=R(4);
  R(0)=LD32(c->gbr+16);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(3)=0x8c0c467cu;
  R(2)=LD32(R(0));
  R(4)<<=2;
  fp_ld(c,2,R(3));
  R(0)=0x4u;
  R(4)+=R(2);
  fp_mov(c,0,11);
  fp_ld(c,3,R(4));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_mov(c,0,7);
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(1));
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  R(0)=c->fpul;
  R(0)&=R(13);
  R(0)<<=2;
  fp_ld(c,13,R(0)+R(8));
  R(0)=0x4u;
  fp_ftrc(c,3);
  fp_ld(c,2,R(0)+R(1));
  R(0)=0x8u;
  fp_mov(c,0,8);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  R(7)=c->fpul;
  fp_ld(c,2,R(0)+R(1));
  fp_mov(c,0,9);
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  R(4)=c->fpul;
  fp_ftrc(c,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,13);
  { uint32_t k=!c->t; R(1)=c->fpul; if(k) goto L8c07e7a2; }
  c->fpul=R(7);
  fp_arith(c,2,13,10);
  R(0)=(int32_t)(int16_t)LD16(R(5));
  fp_float(c,2);
  R(0)<<=2;
  fp_unary(c,0,13);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(7)=c->fpul;
  c->fpul=R(4);
  fp_float(c,2);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->fpul=R(1);
  fp_float(c,2);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_mov(c,0,2);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(1)=c->fpul;
  { ST32(R(11)+R(0),R(12)); goto L8c07e7b4; }
L8c07e7a2:;
  fp_arith(c,2,13,15);
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  fp_ftrc(c,13);
  R(2)=c->fpul;
  R(2)=R(2)&0xFF;
  R(2)<<=16;
  R(2)|=R(10);
  ST32(R(11)+R(0),R(2));
L8c07e7b4:;
  c->t=(int32_t)R(7)>(int32_t)R(13);
  if(!c->t) goto L8c07e7bc;
  { R(7)=R(13); goto L8c07e7c2; }
L8c07e7bc:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07e7c2;
  R(7)=R(12);
L8c07e7c2:;
  c->t=(int32_t)R(4)>(int32_t)R(13);
  if(!c->t) goto L8c07e7ca;
  { R(4)=R(13); goto L8c07e7d0; }
L8c07e7ca:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c07e7d0;
  R(4)=R(12);
L8c07e7d0:;
  c->t=(int32_t)R(1)>(int32_t)R(13);
  if(!c->t) goto L8c07e7d8;
  { R(1)=R(13); goto L8c07e7de; }
L8c07e7d8:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07e7de;
  R(1)=R(12);
L8c07e7de:;
  R(7)<<=16;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(3)=(uint32_t)v;}
  R(4)<<=8;
  R(0)=LD32(R(15));
  R(7)|=R(4);
  c->t=R(5)>=R(9);
  R(7)|=R(1);
  R(7)|=R(6);
  R(3)<<=2;
  ST32(R(3)+R(0),R(7));
  if(!c->t) goto L8c07e704;
L8c07e7f4:;
  R(15)+=0x4u;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07e840(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+16);
  R(1)=0x8c0c806eu;
  R(13)=LD32(R(0));
  R(0)=0x8c07e8c4u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,9,R(0));
  R(3)=0x8c143ab0u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(6)=LD32(R(3)); if(k) goto L8c07e894; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07e894;
  R(2)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,7,R(2));
  fp_arith(c,0,3,7);
  fp_mov(c,4,3);
  fp_arith(c,2,4,9);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,0,3,7);
  fp_mov(c,6,3);
  fp_arith(c,2,6,9);
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,7);
  { fp_mov(c,5,3); goto L8c07e8a4; }
L8c07e894:;
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,4,9);
  fp_ld(c,5,R(0)+R(6));
  fp_arith(c,2,6,9);
L8c07e8a4:;
  R(0)=0x20u;
  fp_arith(c,2,5,9);
  fp_ld(c,3,R(0)+R(6));
  R(12)=0xffu;
  fp_arith(c,2,3,9);
  fp_ftrc(c,3);
  R(5)=c->fpul;
  c->t=(int32_t)R(5)>(int32_t)R(12);
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c07e8e0; }
  { R(5)=R(12); goto L8c07e8e6; }
L8c07e8e0:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07e8e6;
  R(5)=R(11);
L8c07e8e6:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,7,R(0)+R(6));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(6));
  R(0)=0x2cu;
  fp_arith(c,2,7,9);
  R(8)=0x7f000000u;
  fp_arith(c,2,8,9);
  fp_ld(c,9,R(0)+R(6));
  R(0)=LD32(c->gbr+52);
  R(5)<<=16;
  fp_arith(c,2,9,3);
  R(5)<<=8;
  ST32(R(15),R(0));
  R(0)=LD32(c->gbr+56);
  R(9)=R(0);
  R(0)=LD32(c->gbr+60);
  R(10)=R(0);
  R(0)=0x8c07ea24u;
  fp_ld(c,14,R(0));
  R(0)=0x8c07ea28u;
  fp_ld(c,15,R(0));
  R(0)=0x8c07ea2cu;
  fp_ld(c,11,R(0));
  R(0)=0x8c07ea30u;
  { fp_ld(c,10,R(0)); goto L8c07e9ee; }
L8c07e91e:;
  R(3)=0x8c0c467cu;
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(3));
  fp_mov(c,0,11);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,7);
  R(0)=0x8c2cb938u;
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(10));
  fp_arith(c,2,3,15);
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  fp_mov(c,0,8);
  R(2)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  R(2)&=R(12);
  R(2)<<=2;
  fp_ld(c,13,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(10));
  R(0)=0x8u;
  R(6)=c->fpul;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,9);
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  R(7)=c->fpul;
  fp_fmac(c,3,2);
  fp_ftrc(c,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,13);
  { uint32_t k=!c->t; R(14)=c->fpul; if(k) goto L8c07e99e; }
  c->fpul=R(6);
  fp_arith(c,2,13,14);
  fp_float(c,2);
  fp_unary(c,0,13);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(6)=c->fpul;
  c->fpul=R(7);
  fp_float(c,2);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(7)=c->fpul;
  c->fpul=R(14);
  fp_float(c,2);
  fp_mov(c,1,2);
  fp_arith(c,2,1,13);
  fp_mov(c,0,2);
  fp_arith(c,1,2,1);
  fp_ftrc(c,2);
  R(14)=c->fpul;
  { ST32(R(9),R(11)); goto L8c07e9ac; }
L8c07e99e:;
  fp_arith(c,2,13,10);
  fp_ftrc(c,13);
  R(1)=c->fpul;
  R(1)=R(1)&0xFF;
  R(1)<<=16;
  R(1)|=R(8);
  ST32(R(9),R(1));
L8c07e9ac:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  { uint32_t k=!c->t; R(9)+=0x4u; if(k) goto L8c07e9b6; }
  { R(6)=R(12); goto L8c07e9bc; }
L8c07e9b6:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07e9bc;
  R(6)=R(11);
L8c07e9bc:;
  c->t=(int32_t)R(7)>(int32_t)R(12);
  if(!c->t) goto L8c07e9c4;
  { R(7)=R(12); goto L8c07e9ca; }
L8c07e9c4:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07e9ca;
  R(7)=R(11);
L8c07e9ca:;
  c->t=(int32_t)R(14)>(int32_t)R(12);
  if(!c->t) goto L8c07e9d2;
  { R(14)=R(12); goto L8c07e9d8; }
L8c07e9d2:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07e9d8;
  R(14)=R(11);
L8c07e9d8:;
  R(7)<<=8;
  R(2)=LD32(R(15));
  R(6)<<=16;
  R(6)|=R(7);
  R(6)|=R(14);
  R(2)+=0x4u;
  R(6)|=R(5);
  ST32(R(15),R(2));
  R(13)+=0xcu;
  {uint32_t v=R(6);R(2)-=4;ST32(R(2),v);}
  R(10)+=0x10u;
L8c07e9ee:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)+=0xffffffffu; if(k) goto L8c07e91e; }
  R(15)+=0x4u;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07ea40(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)+=0xffffffe8u;
  R(3)=0x8c143ab0u;
  R(0)=0x8c07eb04u;
  R(1)=0x8c0c806eu;
  R(6)=LD32(R(3));
  fp_ld(c,11,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,7,R(0)+R(6));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_arith(c,2,7,11); if(k) goto L8c07ea96; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07ea96;
  R(3)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,8,R(3));
  fp_arith(c,0,3,8);
  fp_mov(c,4,3);
  fp_arith(c,2,4,11);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,0,3,8);
  fp_mov(c,5,3);
  fp_arith(c,2,5,11);
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,8);
  { fp_mov(c,6,3); goto L8c07eaa6; }
L8c07ea96:;
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,4,11);
  fp_ld(c,6,R(0)+R(6));
  fp_arith(c,2,5,11);
L8c07eaa6:;
  R(0)=0x30u;
  fp_mov(c,3,11);
  fp_ld(c,9,R(0)+R(6));
  R(0)=0x24u;
  fp_ld(c,10,R(0)+R(6));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(6));
  R(0)=0x2cu;
  fp_arith(c,2,6,11);
  R(12)=0xffu;
  fp_arith(c,2,8,11);
  R(8)=0x8c0c467cu;
  fp_arith(c,2,9,11);
  R(9)=0x7f000000u;
  fp_arith(c,2,10,11);
  fp_ld(c,11,R(0)+R(6));
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,11,3);
  ST32(R(15)+20,R(0));
  R(0)=LD32(c->gbr+56);
  R(10)=R(0);
  R(0)=0x8c07eb20u;
  fp_ld(c,12,R(0));
  R(0)=0x8c07eb24u;
  fp_ld(c,13,R(0));
  R(0)=0x8c07eb28u;
  fp_ld(c,14,R(0));
  R(0)=0x8c07eb2cu;
  fp_ld(c,15,R(0));
  { R(11)=0x0u; goto L8c07ec6c; }
L8c07eb40:;
  R(6)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(c->gbr+16);
  R(7)=R(6);
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=R(6);
  R(2)=LD32(R(0));
  R(7)+=R(3);
  fp_ld(c,2,R(8));
  R(7)<<=2;
  fp_mov(c,0,14);
  R(7)+=R(2);
  fp_ld(c,3,R(7));
  R(0)=0x4u;
  R(6)<<=2;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(7));
  R(0)=0x8c2cb938u;
  R(6)<<=2;
  fp_mov(c,0,10);
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,13);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  R(3)&=R(12);
  R(3)<<=2;
  fp_ld(c,3,R(0)+R(3));
  fp_st(c,3,R(15));
  R(0)=LD32(c->gbr+60);
  fp_mov(c,3,4);
  R(13)=R(0);
  R(13)+=R(6);
  fp_ld(c,2,R(13));
  fp_fmac(c,3,2);
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,8);
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,11);
  R(0)=0xcu;
  R(6)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,9);
  R(7)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(15));
  R(1)=c->fpul;
  fp_ftrc(c,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(13)=c->fpul; if(k) goto L8c07ec0a; }
  fp_arith(c,2,2,12);
  c->fpul=R(6);
  R(0)=0x4u;
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  fp_float(c,2);
  R(0)=0xcu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,2);
  fp_arith(c,2,2,1);
  fp_arith(c,1,0,2);
  fp_ftrc(c,0);
  R(6)=c->fpul;
  c->fpul=R(7);
  fp_float(c,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,2);
  fp_arith(c,2,2,1);
  fp_arith(c,1,0,2);
  fp_ftrc(c,0);
  R(7)=c->fpul;
  c->fpul=R(1);
  fp_float(c,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,0,2);
  fp_ld(c,1,R(0)+R(15));
  R(0)=(int32_t)(int16_t)LD16(R(5));
  fp_arith(c,2,2,1);
  R(0)<<=2;
  fp_arith(c,1,0,2);
  fp_ftrc(c,0);
  R(1)=c->fpul;
  { ST32(R(10)+R(0),R(11)); goto L8c07ec1c; }
L8c07ec0a:;
  fp_arith(c,2,2,15);
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  fp_ftrc(c,2);
  R(3)=c->fpul;
  R(3)=R(3)&0xFF;
  R(3)<<=16;
  R(3)|=R(9);
  ST32(R(10)+R(0),R(3));
L8c07ec1c:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  if(!c->t) goto L8c07ec24;
  { R(6)=R(12); goto L8c07ec2a; }
L8c07ec24:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07ec2a;
  R(6)=R(11);
L8c07ec2a:;
  c->t=(int32_t)R(7)>(int32_t)R(12);
  if(!c->t) goto L8c07ec32;
  { R(7)=R(12); goto L8c07ec38; }
L8c07ec32:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07ec38;
  R(7)=R(11);
L8c07ec38:;
  c->t=(int32_t)R(1)>(int32_t)R(12);
  if(!c->t) goto L8c07ec40;
  { R(1)=R(12); goto L8c07ec46; }
L8c07ec40:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07ec46;
  R(1)=R(11);
L8c07ec46:;
  c->t=(int32_t)R(13)>(int32_t)R(12);
  if(!c->t) goto L8c07ec4e;
  { R(13)=R(12); goto L8c07ec54; }
L8c07ec4e:;
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c07ec54;
  R(13)=R(11);
L8c07ec54:;
  R(13)<<=16;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(3)=(uint32_t)v;}
  R(13)<<=8;
  R(0)=LD32(R(15)+20);
  R(6)<<=16;
  R(13)|=R(6);
  R(7)<<=8;
  R(13)|=R(7);
  R(13)|=R(1);
  R(3)<<=2;
  R(5)+=0x2u;
  ST32(R(3)+R(0),R(13));
L8c07ec6c:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c07ec78; }
  {  goto L8c07eb40; }
L8c07ec78:;
  R(15)+=0x18u;
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07ecc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)+=0xffffffc8u;
  R(0)=LD32(c->gbr+16);
  R(3)=0x8c143ab0u;
  R(13)=LD32(R(0));
  R(0)=0x8c07ed84u;
  R(1)=0x8c0c806eu;
  R(5)=LD32(R(3));
  fp_ld(c,11,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,7,R(0)+R(5));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_arith(c,2,7,11); if(k) goto L8c07ed1c; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07ed1c;
  R(3)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,8,R(3));
  fp_arith(c,0,3,8);
  fp_mov(c,6,3);
  fp_arith(c,2,6,11);
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,0,3,8);
  fp_mov(c,4,3);
  fp_arith(c,2,4,11);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,3,8);
  { fp_mov(c,5,3); goto L8c07ed2c; }
L8c07ed1c:;
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,4,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,2,6,11);
  fp_ld(c,5,R(0)+R(5));
  fp_arith(c,2,4,11);
L8c07ed2c:;
  R(0)=0x30u;
  fp_mov(c,3,11);
  fp_ld(c,10,R(0)+R(5));
  R(0)=0x24u;
  fp_ld(c,9,R(0)+R(5));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(5));
  R(0)=0x2cu;
  fp_arith(c,2,5,11);
  R(12)=0xffu;
  fp_arith(c,2,8,11);
  R(8)=0x7f000000u;
  fp_arith(c,2,10,11);
  fp_arith(c,2,9,11);
  fp_ld(c,11,R(0)+R(5));
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,11,3);
  ST32(R(15)+20,R(0));
  R(0)=LD32(c->gbr+56);
  R(9)=R(0);
  R(0)=LD32(c->gbr+60);
  R(10)=R(0);
  R(0)=0x8c07ed98u;
  fp_ld(c,12,R(0));
  R(0)=0x8c07ed9cu;
  fp_ld(c,13,R(0));
  R(0)=0x8c07eda0u;
  fp_ld(c,14,R(0));
  R(0)=0x8c07eda4u;
  fp_ld(c,15,R(0));
  { R(11)=0x0u; goto L8c07eece; }
L8c07edc0:;
  R(3)=0x8c0c467cu;
  R(0)=0x4u;
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(3));
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8c2cb938u;
  fp_mov(c,0,9);
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,12);
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(2)&=R(12);
  R(2)<<=2;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_st(c,3,R(15));
  fp_ld(c,2,R(10));
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,8);
  R(0)=0x8u;
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  fp_mov(c,0,11);
  R(5)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  R(7)=c->fpul;
  fp_ld(c,2,R(0)+R(10));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,10);
  fp_ftrc(c,3);
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(15));
  R(6)=c->fpul;
  fp_ftrc(c,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(14)=c->fpul; if(k) goto L8c07ee6c; }
  fp_arith(c,2,2,13);
  c->fpul=R(5);
  R(0)=0x4u;
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  fp_float(c,2);
  R(0)=0xcu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,2);
  fp_arith(c,2,2,1);
  fp_arith(c,1,0,2);
  fp_ftrc(c,0);
  R(5)=c->fpul;
  c->fpul=R(7);
  fp_float(c,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,0,2);
  fp_arith(c,2,2,1);
  fp_arith(c,1,0,2);
  fp_ftrc(c,0);
  R(7)=c->fpul;
  c->fpul=R(6);
  fp_float(c,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,0,2);
  fp_ld(c,1,R(0)+R(15));
  fp_arith(c,2,2,1);
  fp_arith(c,1,0,2);
  fp_ftrc(c,0);
  R(6)=c->fpul;
  { ST32(R(9),R(11)); goto L8c07ee7a; }
L8c07ee6c:;
  fp_arith(c,2,2,15);
  fp_ftrc(c,2);
  R(1)=c->fpul;
  R(1)=R(1)&0xFF;
  R(1)<<=16;
  R(1)|=R(8);
  ST32(R(9),R(1));
L8c07ee7a:;
  c->t=(int32_t)R(5)>(int32_t)R(12);
  { uint32_t k=!c->t; R(9)+=0x4u; if(k) goto L8c07ee84; }
  { R(5)=R(12); goto L8c07ee8a; }
L8c07ee84:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07ee8a;
  R(5)=R(11);
L8c07ee8a:;
  c->t=(int32_t)R(7)>(int32_t)R(12);
  if(!c->t) goto L8c07ee92;
  { R(7)=R(12); goto L8c07ee98; }
L8c07ee92:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07ee98;
  R(7)=R(11);
L8c07ee98:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  if(!c->t) goto L8c07eea0;
  { R(6)=R(12); goto L8c07eea6; }
L8c07eea0:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07eea6;
  R(6)=R(11);
L8c07eea6:;
  c->t=(int32_t)R(14)>(int32_t)R(12);
  if(!c->t) goto L8c07eeae;
  { R(14)=R(12); goto L8c07eeb4; }
L8c07eeae:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07eeb4;
  R(14)=R(11);
L8c07eeb4:;
  R(14)<<=16;
  R(3)=LD32(R(15)+20);
  R(14)<<=8;
  R(5)<<=16;
  R(7)<<=8;
  R(14)|=R(5);
  R(14)|=R(7);
  R(3)+=0x4u;
  R(14)|=R(6);
  ST32(R(15)+20,R(3));
  R(13)+=0xcu;
  {uint32_t v=R(14);R(3)-=4;ST32(R(3),v);}
  R(10)+=0x10u;
L8c07eece:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c07eeda; }
  {  goto L8c07edc0; }
L8c07eeda:;
  R(15)+=0x38u;
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07ef20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)+=0xfffffff8u;
  R(1)=0x8c0c806eu;
  R(0)=0x8c07efa4u;
  fp_ld(c,9,R(0));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c143ab0u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(7)=LD32(R(3)); if(k) goto L8c07ef6c; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07ef6c;
  R(2)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x18u;
  fp_ld(c,7,R(2));
  fp_arith(c,0,3,7);
  fp_mov(c,5,3);
  fp_arith(c,2,5,9);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x1cu;
  fp_arith(c,0,3,7);
  fp_mov(c,6,3);
  fp_arith(c,2,6,9);
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,0,3,7);
  { fp_mov(c,4,3); goto L8c07ef7c; }
L8c07ef6c:;
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(7));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(7));
  R(0)=0x1cu;
  fp_arith(c,2,5,9);
  fp_ld(c,4,R(0)+R(7));
  fp_arith(c,2,6,9);
L8c07ef7c:;
  R(0)=0x20u;
  fp_arith(c,2,4,9);
  fp_ld(c,3,R(0)+R(7));
  R(13)=0xffu;
  fp_arith(c,2,3,9);
  fp_ftrc(c,3);
  R(6)=c->fpul;
  c->t=(int32_t)R(6)>(int32_t)R(13);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c07efc0; }
  { R(6)=R(13); goto L8c07efc6; }
L8c07efc0:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07efc6;
  R(6)=R(12);
L8c07efc6:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,8,R(0)+R(7));
  R(0)=0x28u;
  fp_ld(c,7,R(0)+R(7));
  R(0)=0x2cu;
  fp_arith(c,2,8,9);
  R(10)=(uint32_t)(int32_t)(int16_t)R(4);
  fp_arith(c,2,7,9);
  fp_ld(c,9,R(0)+R(7));
  R(0)=LD32(c->gbr+52);
  c->t=R(10)>>31;R(10)<<=1;
  fp_arith(c,2,9,3);
  R(6)<<=16;
  ST32(R(15)+4,R(0));
  R(10)+=R(5);
  R(0)=LD32(c->gbr+56);
  c->t=R(5)>=R(10);
  R(8)=0x8c0c467cu;
  R(6)<<=8;
  R(11)=R(0);
  R(0)=0x8c07f148u;
  fp_ld(c,15,R(0));
  R(0)=0x8c07f14cu;
  fp_ld(c,11,R(0));
  R(0)=0x8c07f150u;
  R(9)=0x8c2cb938u;
  { uint32_t k=c->t; fp_ld(c,10,R(0)); if(k) goto L8c07f0c4; }
L8c07f000:;
  R(4)=(int32_t)(int16_t)LD16(R(5));
  R(0)=LD32(c->gbr+60);
  R(14)=R(4);
  R(14)<<=2;
  R(3)=R(0);
  R(14)<<=2;
  R(14)+=R(3);
  fp_mov(c,3,5);
  fp_mov(c,0,8);
  R(3)=R(4);
  R(0)=LD32(c->gbr+16);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(2)=LD32(R(0));
  R(0)=0x4u;
  R(4)<<=2;
  R(4)+=R(2);
  ST32(R(15),R(4));
  fp_ld(c,2,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(14));
  fp_mov(c,0,7);
  R(0)=0x8u;
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(14));
  fp_mov(c,0,9);
  R(4)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  R(7)=c->fpul;
  fp_fmac(c,3,2);
  R(3)=LD32(R(15));
  fp_ld(c,2,R(8));
  R(1)=0x4u;
  fp_mov(c,0,11);
  R(0)=R(3);
  fp_ftrc(c,3);
  fp_ld(c,3,R(3));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(1));
  R(14)=c->fpul;
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,15);
  fp_ftrc(c,3);
  c->fr[3]=0x00000000u;
  R(0)=c->fpul;
  R(0)&=R(13);
  R(0)<<=2;
  fp_ld(c,1,R(0)+R(9));
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c07f07e;
  fp_arith(c,2,1,10);
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  fp_ftrc(c,1);
  R(3)=c->fpul;
  R(3)=R(3)&0xFF;
  R(3)<<=16;
  R(3)|=R(12);
  { ST32(R(11)+R(0),R(3)); goto L8c07f084; }
L8c07f07e:;
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  ST32(R(11)+R(0),R(12));
L8c07f084:;
  c->t=(int32_t)R(4)>(int32_t)R(13);
  if(!c->t) goto L8c07f08c;
  { R(4)=R(13); goto L8c07f092; }
L8c07f08c:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c07f092;
  R(4)=R(12);
L8c07f092:;
  c->t=(int32_t)R(7)>(int32_t)R(13);
  if(!c->t) goto L8c07f09a;
  { R(7)=R(13); goto L8c07f0a0; }
L8c07f09a:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07f0a0;
  R(7)=R(12);
L8c07f0a0:;
  c->t=(int32_t)R(14)>(int32_t)R(13);
  if(!c->t) goto L8c07f0a8;
  { R(14)=R(13); goto L8c07f0ae; }
L8c07f0a8:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07f0ae;
  R(14)=R(12);
L8c07f0ae:;
  R(4)<<=16;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(3)=(uint32_t)v;}
  R(7)<<=8;
  R(0)=LD32(R(15)+4);
  R(4)|=R(7);
  c->t=R(5)>=R(10);
  R(4)|=R(14);
  R(4)|=R(6);
  R(3)<<=2;
  ST32(R(3)+R(0),R(4));
  if(!c->t) goto L8c07f000;
L8c07f0c4:;
  R(15)+=0x8u;
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07f0d8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+16);
  R(1)=0x8c0c806eu;
  R(13)=LD32(R(0));
  R(0)=0x8c07f154u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,9,R(0));
  R(3)=0x8c143ab0u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(6)=LD32(R(3)); if(k) goto L8c07f180; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07f180;
  R(2)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,7,R(2));
  fp_arith(c,0,3,7);
  fp_mov(c,4,3);
  fp_arith(c,2,4,9);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,0,3,7);
  fp_mov(c,6,3);
  fp_arith(c,2,6,9);
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,7);
  { fp_mov(c,5,3); goto L8c07f190; }
L8c07f180:;
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,4,9);
  fp_ld(c,5,R(0)+R(6));
  fp_arith(c,2,6,9);
L8c07f190:;
  R(0)=0x20u;
  fp_arith(c,2,5,9);
  fp_ld(c,3,R(0)+R(6));
  R(12)=0xffu;
  fp_arith(c,2,3,9);
  fp_ftrc(c,3);
  R(5)=c->fpul;
  c->t=(int32_t)R(5)>(int32_t)R(12);
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c07f1a8; }
  { R(5)=R(12); goto L8c07f1ae; }
L8c07f1a8:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07f1ae;
  R(5)=R(11);
L8c07f1ae:;
  R(0)=0x24u;
  fp_mov(c,3,9);
  fp_ld(c,8,R(0)+R(6));
  R(0)=0x28u;
  fp_ld(c,7,R(0)+R(6));
  R(0)=0x2cu;
  fp_arith(c,2,8,9);
  R(5)<<=16;
  fp_arith(c,2,7,9);
  fp_ld(c,9,R(0)+R(6));
  R(0)=LD32(c->gbr+52);
  R(5)<<=8;
  fp_arith(c,2,9,3);
  R(8)=0x8c0c467cu;
  ST32(R(15),R(0));
  R(0)=LD32(c->gbr+56);
  R(9)=R(0);
  R(0)=LD32(c->gbr+60);
  R(10)=R(0);
  R(0)=0x8c07f248u;
  fp_ld(c,14,R(0));
  R(0)=0x8c07f24cu;
  fp_ld(c,1,R(0));
  R(0)=0x8c07f250u;
  { fp_ld(c,11,R(0)); goto L8c07f2a4; }
L8c07f1e2:;
  fp_ld(c,2,R(10));
  R(0)=0x4u;
  fp_mov(c,3,4);
  fp_mov(c,0,8);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  R(0)=0x8u;
  fp_mov(c,0,7);
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,9);
  R(0)=0x4u;
  R(6)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(8));
  fp_mov(c,0,14);
  R(7)=c->fpul;
  fp_ftrc(c,3);
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  R(14)=c->fpul;
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,1);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  R(3)&=R(12);
  R(3)<<=2;
  R(0)=0x8c2cb938u;
  c->fr[3]=0x00000000u;
  fp_ld(c,10,R(0)+R(3));
  fp_cmp(c,1,10,3);
  if(!c->t) goto L8c07f260;
  fp_arith(c,2,10,11);
  fp_ftrc(c,10);
  R(3)=c->fpul;
  R(3)=R(3)&0xFF;
  R(3)<<=16;
  R(3)|=R(11);
  { ST32(R(9),R(3)); goto L8c07f262; }
L8c07f260:;
  ST32(R(9),R(11));
L8c07f262:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  { uint32_t k=!c->t; R(9)+=0x4u; if(k) goto L8c07f26c; }
  { R(6)=R(12); goto L8c07f272; }
L8c07f26c:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07f272;
  R(6)=R(11);
L8c07f272:;
  c->t=(int32_t)R(7)>(int32_t)R(12);
  if(!c->t) goto L8c07f27a;
  { R(7)=R(12); goto L8c07f280; }
L8c07f27a:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07f280;
  R(7)=R(11);
L8c07f280:;
  c->t=(int32_t)R(14)>(int32_t)R(12);
  if(!c->t) goto L8c07f288;
  { R(14)=R(12); goto L8c07f28e; }
L8c07f288:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07f28e;
  R(14)=R(11);
L8c07f28e:;
  R(7)<<=8;
  R(2)=LD32(R(15));
  R(6)<<=16;
  R(6)|=R(7);
  R(6)|=R(14);
  R(2)+=0x4u;
  R(6)|=R(5);
  ST32(R(15),R(2));
  R(13)+=0xcu;
  {uint32_t v=R(6);R(2)-=4;ST32(R(2),v);}
  R(10)+=0x10u;
L8c07f2a4:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)+=0xffffffffu; if(k) goto L8c07f1e2; }
  R(15)+=0x4u;
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07f2c0(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)+=0xfffffffcu;
  R(3)=0x8c143ab0u;
  R(0)=0x8c07f320u;
  R(1)=0x8c0c806eu;
  R(6)=LD32(R(3));
  fp_ld(c,11,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,7,R(0)+R(6));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_arith(c,2,7,11); if(k) goto L8c07f340; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07f340;
  R(3)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,8,R(3));
  fp_arith(c,0,3,8);
  fp_mov(c,4,3);
  fp_arith(c,2,4,11);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,0,3,8);
  fp_mov(c,6,3);
  fp_arith(c,2,6,11);
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,0,3,8);
  { fp_mov(c,5,3); goto L8c07f350; }
L8c07f340:;
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(6));
  R(0)=0x1cu;
  fp_arith(c,2,4,11);
  fp_ld(c,5,R(0)+R(6));
  fp_arith(c,2,6,11);
L8c07f350:;
  R(0)=0x30u;
  fp_mov(c,3,11);
  fp_ld(c,10,R(0)+R(6));
  R(0)=0x24u;
  fp_ld(c,9,R(0)+R(6));
  R(0)=0x28u;
  fp_ld(c,8,R(0)+R(6));
  R(0)=0x2cu;
  fp_arith(c,2,9,11);
  R(12)=0xffu;
  fp_arith(c,2,8,11);
  R(9)=0x8c0c467cu;
  fp_arith(c,2,10,11);
  fp_arith(c,2,5,11);
  fp_ld(c,11,R(0)+R(6));
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,11,3);
  R(8)=R(0);
  R(0)=LD32(c->gbr+56);
  R(10)=R(0);
  R(0)=0x8c07f428u;
  fp_ld(c,13,R(0));
  R(0)=0x8c07f42cu;
  fp_ld(c,14,R(0));
  R(0)=0x8c07f430u;
  fp_ld(c,15,R(0));
  { R(11)=0x0u; goto L8c07f492; }
L8c07f388:;
  R(0)=LD32(c->gbr+16);
  R(6)=(int32_t)(int16_t)LD16(R(5));
  R(1)=LD32(R(0));
  R(3)=R(6);
  R(2)=R(6);
  R(6)<<=2;
  fp_mov(c,0,9);
  R(6)<<=2;
  fp_mov(c,3,4);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(15),R(3));
  R(0)=LD32(c->gbr+60);
  R(13)=R(0);
  R(13)+=R(6);
  fp_ld(c,2,R(13));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,8);
  R(0)=0x8u;
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(13));
  fp_mov(c,0,11);
  R(6)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  R(7)=c->fpul;
  fp_fmac(c,3,2);
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x4u;
  fp_mov(c,0,10);
  R(2)=R(3);
  fp_ftrc(c,3);
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(9));
  fp_mov(c,0,13);
  R(1)=c->fpul;
  fp_ftrc(c,3);
  fp_ld(c,3,R(3));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(2));
  R(0)=0x8c2cb938u;
  R(13)=c->fpul;
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  c->fr[3]=0x00000000u;
  R(3)=c->fpul;
  R(3)&=R(12);
  R(3)<<=2;
  fp_ld(c,1,R(0)+R(3));
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c07f440;
  fp_arith(c,2,1,15);
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  fp_ftrc(c,1);
  R(3)=c->fpul;
  R(3)=R(3)&0xFF;
  R(3)<<=16;
  R(3)|=R(11);
  { ST32(R(10)+R(0),R(3)); goto L8c07f446; }
L8c07f440:;
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  ST32(R(10)+R(0),R(11));
L8c07f446:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  if(!c->t) goto L8c07f44e;
  { R(6)=R(12); goto L8c07f454; }
L8c07f44e:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07f454;
  R(6)=R(11);
L8c07f454:;
  c->t=(int32_t)R(7)>(int32_t)R(12);
  if(!c->t) goto L8c07f45c;
  { R(7)=R(12); goto L8c07f462; }
L8c07f45c:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07f462;
  R(7)=R(11);
L8c07f462:;
  c->t=(int32_t)R(1)>(int32_t)R(12);
  if(!c->t) goto L8c07f46a;
  { R(1)=R(12); goto L8c07f470; }
L8c07f46a:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c07f470;
  R(1)=R(11);
L8c07f470:;
  c->t=(int32_t)R(13)>(int32_t)R(12);
  if(!c->t) goto L8c07f478;
  { R(13)=R(12); goto L8c07f47e; }
L8c07f478:;
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c07f47e;
  R(13)=R(11);
L8c07f47e:;
  R(13)<<=16;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(0)=(uint32_t)v;}
  R(13)<<=8;
  R(6)<<=16;
  R(13)|=R(6);
  R(7)<<=8;
  R(13)|=R(7);
  R(13)|=R(1);
  R(0)<<=2;
  ST32(R(8)+R(0),R(13));
L8c07f492:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c07f49e; }
  {  goto L8c07f388; }
L8c07f49e:;
  R(15)+=0x4u;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c07f4b4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)+=0xffffffdcu;
  R(0)=LD32(c->gbr+16);
  R(3)=0x8c143ab0u;
  R(13)=LD32(R(0));
  R(0)=0x8c07f520u;
  R(1)=0x8c0c806eu;
  R(5)=LD32(R(3));
  fp_ld(c,11,R(0));
  R(0)=0x20u;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  fp_ld(c,7,R(0)+R(5));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_arith(c,2,7,11); if(k) goto L8c07f540; }
  R(0)=0x8c0c4654u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c07f540;
  R(3)=0x8c0c4658u;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,8,R(3));
  fp_arith(c,0,3,8);
  fp_mov(c,6,3);
  fp_arith(c,2,6,11);
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,0,3,8);
  fp_mov(c,4,3);
  fp_arith(c,2,4,11);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,3,8);
  { fp_mov(c,5,3); goto L8c07f550; }
L8c07f540:;
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(5));
  R(0)=0x18u;
  fp_ld(c,4,R(0)+R(5));
  R(0)=0x1cu;
  fp_arith(c,2,6,11);
  fp_ld(c,5,R(0)+R(5));
  fp_arith(c,2,4,11);
L8c07f550:;
  R(0)=0x30u;
  fp_mov(c,3,11);
  fp_ld(c,9,R(0)+R(5));
  R(0)=0x24u;
  fp_ld(c,8,R(0)+R(5));
  R(0)=0x28u;
  fp_ld(c,10,R(0)+R(5));
  R(0)=0x2cu;
  fp_arith(c,2,5,11);
  R(12)=0xffu;
  fp_arith(c,2,10,11);
  R(8)=0x8c0c467cu;
  fp_arith(c,2,9,11);
  fp_arith(c,2,8,11);
  fp_ld(c,11,R(0)+R(5));
  R(0)=LD32(c->gbr+52);
  fp_arith(c,2,11,3);
  ST32(R(15),R(0));
  R(0)=LD32(c->gbr+56);
  R(9)=R(0);
  R(0)=LD32(c->gbr+60);
  R(10)=R(0);
  R(0)=0x8c07f608u;
  fp_ld(c,12,R(0));
  R(0)=0x8c07f60cu;
  fp_ld(c,13,R(0));
  R(0)=0x8c07f610u;
  fp_ld(c,14,R(0));
  { R(11)=0x0u; goto L8c07f66a; }
L8c07f58c:;
  fp_ld(c,2,R(10));
  R(0)=0x4u;
  fp_mov(c,3,6);
  fp_mov(c,0,8);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  R(0)=0x8u;
  fp_mov(c,0,10);
  fp_ftrc(c,3);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,11);
  R(0)=0xcu;
  R(5)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(10));
  fp_mov(c,0,9);
  R(0)=0x4u;
  R(14)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(8));
  fp_mov(c,0,13);
  R(7)=c->fpul;
  fp_ftrc(c,3);
  fp_ld(c,3,R(13));
  fp_fmac(c,3,2);
  R(6)=c->fpul;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8c2cb938u;
  fp_arith(c,0,3,2);
  fp_arith(c,2,3,12);
  fp_ftrc(c,3);
  c->fr[3]=0x00000000u;
  R(3)=c->fpul;
  R(3)&=R(12);
  R(3)<<=2;
  fp_ld(c,1,R(0)+R(3));
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c07f5f4;
  fp_arith(c,2,1,14);
  fp_ftrc(c,1);
  R(3)=c->fpul;
  R(3)=R(3)&0xFF;
  R(3)<<=16;
  R(3)|=R(11);
  { ST32(R(9),R(3)); goto L8c07f5f6; }
L8c07f5f4:;
  ST32(R(9),R(11));
L8c07f5f6:;
  c->t=(int32_t)R(5)>(int32_t)R(12);
  { uint32_t k=!c->t; R(9)+=0x4u; if(k) goto L8c07f620; }
  { R(5)=R(12); goto L8c07f626; }
L8c07f620:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c07f626;
  R(5)=R(11);
L8c07f626:;
  c->t=(int32_t)R(14)>(int32_t)R(12);
  if(!c->t) goto L8c07f62e;
  { R(14)=R(12); goto L8c07f634; }
L8c07f62e:;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c07f634;
  R(14)=R(11);
L8c07f634:;
  c->t=(int32_t)R(7)>(int32_t)R(12);
  if(!c->t) goto L8c07f63c;
  { R(7)=R(12); goto L8c07f642; }
L8c07f63c:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c07f642;
  R(7)=R(11);
L8c07f642:;
  c->t=(int32_t)R(6)>(int32_t)R(12);
  if(!c->t) goto L8c07f64a;
  { R(6)=R(12); goto L8c07f650; }
L8c07f64a:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c07f650;
  R(6)=R(11);
L8c07f650:;
  R(6)<<=16;
  R(3)=LD32(R(15));
  R(6)<<=8;
  R(5)<<=16;
  R(14)<<=8;
  R(6)|=R(5);
  R(6)|=R(14);
  R(3)+=0x4u;
  R(6)|=R(7);
  ST32(R(15),R(3));
  R(13)+=0xcu;
  {uint32_t v=R(6);R(3)-=4;ST32(R(3),v);}
  R(10)+=0x10u;
L8c07f66a:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)+=0xffffffffu; if(k) goto L8c07f58c; }
  R(15)+=0x24u;
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07f6a0(SH4Ctx *c) {
  R(0)=0x88u;
  R(3)=R(5);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,4,5);
  c->t=R(14)>>31;R(14)<<=1;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(14)+=R(3);
  c->fr[8]=0x3F800000u;
  fp_arith(c,2,5,3);
  R(0)=0x8c07f724u;
  fp_ld(c,9,R(0));
  R(14)<<=2;
  R(0)=0x8c07f728u;
  R(14)+=R(7);
  { fp_ld(c,6,R(0)); goto L8c07f764; }
L8c07f6cc:;
  R(3)=0x80u;
  R(2)=R(6);
  R(2)=LD32(R(2)+8);
  R(5)=R(7);
  R(3)+=R(4);
  R(1)=LD32(R(3));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  { uint32_t k=c->t; R(5)+=0x8u; if(k) goto L8c07f740; }
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_st(c,6,R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07f6ee;
  { fp_mov(c,3,6); goto L8c07f6f2; }
L8c07f6ee:;
  R(0)=0x8c07f72cu;
  fp_ld(c,3,R(0));
L8c07f6f2:;
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  fp_ld(c,3,R(6));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(5)+=0xfffffffcu; if(k) goto L8c07f702; }
  { fp_mov(c,3,6); goto L8c07f706; }
L8c07f702:;
  R(0)=0x8c07f72cu;
  fp_ld(c,3,R(0));
L8c07f706:;
  { fp_st(c,3,R(5)); goto L8c07f760; }
L8c07f740:;
  R(0)=0x8u;
  fp_mov(c,7,8);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x4u;
  fp_arith(c,3,7,3);
  fp_mov(c,3,7);
  fp_arith(c,2,3,9);
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,2,3,5);
  fp_arith(c,2,3,7);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  fp_ld(c,3,R(6));
  fp_arith(c,2,3,4);
  fp_arith(c,2,3,7);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
L8c07f760:;
  R(7)+=0xcu;
  R(6)+=0xcu;
L8c07f764:;
  c->t=R(7)>=R(14);
  if(!c->t) goto L8c07f6cc;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07f76c(SH4Ctx *c) {
  R(0)=0x98u;
  R(3)=R(5);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  fp_ld(c,7,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,6,R(0)+R(4));
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(0)=LD32(R(4)+8);
  R(14)<<=2;
  c->t=(int32_t)R(0)==102;
  R(14)+=R(7);
  { uint32_t k=c->t; c->fr[11]=0x3F800000u; if(k) goto L8c07f7a2; }
  c->t=(int32_t)R(0)==103;
  if(c->t) goto L8c07f7a2;
  c->t=(int32_t)R(0)==100;
  if(!c->t) goto L8c07f796;
  {  goto L8c07f880; }
L8c07f796:;
  c->t=(int32_t)R(0)==101;
  if(!c->t) goto L8c07f79e;
  {  goto L8c07f880; }
L8c07f79e:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c07f7a2:;
  R(0)=0x88u;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  fp_mov(c,4,5);
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8c07f7c4u;
  fp_arith(c,2,5,3);
  fp_ld(c,10,R(0));
  R(0)=0x8c07f7c8u;
  { fp_ld(c,8,R(0)); goto L8c07f848; }
L8c07f7e0:;
  R(3)=0x80u;
  R(2)=R(6);
  R(2)=LD32(R(2)+8);
  R(5)=R(7);
  R(3)+=R(4);
  R(1)=LD32(R(3));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  { uint32_t k=c->t; R(5)+=0x8u; if(k) goto L8c07f81e; }
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_st(c,8,R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c07f802;
  { fp_mov(c,3,8); goto L8c07f806; }
L8c07f802:;
  R(0)=0x8c07f864u;
  fp_ld(c,3,R(0));
L8c07f806:;
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  fp_ld(c,3,R(6));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(5)+=0xfffffffcu; if(k) goto L8c07f816; }
  { fp_mov(c,3,8); goto L8c07f81a; }
L8c07f816:;
  R(0)=0x8c07f864u;
  fp_ld(c,3,R(0));
L8c07f81a:;
  { fp_st(c,3,R(5)); goto L8c07f844; }
L8c07f81e:;
  R(0)=0x8u;
  fp_mov(c,9,11);
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x4u;
  fp_mov(c,2,6);
  fp_arith(c,3,9,3);
  fp_mov(c,3,9);
  fp_arith(c,2,3,10);
  fp_mov(c,0,9);
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,2,3,5);
  fp_fmac(c,2,3);
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  fp_ld(c,3,R(6));
  fp_mov(c,2,7);
  fp_arith(c,2,3,4);
  fp_fmac(c,2,3);
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
L8c07f844:;
  R(7)+=0xcu;
  R(6)+=0xcu;
L8c07f848:;
  c->t=R(7)>=R(14);
  if(!c->t) goto L8c07f7e0;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c07f880:;
  R(0)=0x8cu;
  fp_ld(c,5,R(0)+R(4));
  R(0)+=0x4u;
  { fp_ld(c,4,R(0)+R(4)); goto L8c07f8b8; }
L8c07f88a:;
  R(3)=0x80u;
  R(2)=R(6);
  R(2)=LD32(R(2)+8);
  R(3)+=R(4);
  R(1)=LD32(R(3));
  c->t=(int32_t)R(2)>=(int32_t)R(1);
  if(!c->t) goto L8c07f8b4;
  R(0)=0x4u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  R(5)=R(7);
  R(5)+=0x8u;
  fp_st(c,11,R(5));
  fp_ld(c,2,R(0)+R(6));
  fp_fmac(c,3,2);
  fp_mov(c,0,5);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  fp_ld(c,2,R(6));
  fp_mov(c,3,7);
  fp_fmac(c,3,2);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
L8c07f8b4:;
  R(7)+=0xcu;
  R(6)+=0xcu;
L8c07f8b8:;
  c->t=R(7)>=R(14);
  if(!c->t) goto L8c07f88a;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07f8e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff84u;
  R(9)=R(15);
  R(9)+=0x58u;
  R(13)=R(9);
  R(3)=R(13);
  R(3)+=0x18u;
  c->fr[4]=0x00000000u;
  R(0)=0x4u;
  R(10)=R(4);
  fp_st(c,4,R(0)+R(13));
  R(0)=0x4u;
  R(12)=R(13);
  R(2)=0x3u;
  R(12)+=0xcu;
  fp_st(c,4,R(12));
  ST32(R(15),R(3));
  fp_st(c,4,R(3));
  R(3)=LD32(R(15));
  fp_st(c,4,R(0)+R(3));
  R(0)=LD32(c->gbr+76);
  R(4)=R(0);
  R(3)=LD32(R(4));
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c07f924;
  { R(3)=0x1u; goto L8c07f926; }
L8c07f924:;
  R(3)=0x0u;
L8c07f926:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c07f954;
  R(3)=0x8c016016u;
  { c->pr=0x8c07f932u;  f_8c016016(c); }
  R(3)=0x8c016040u;
  R(0)=LD32(c->gbr+76);
  fp_mov(c,15,0);
  { c->pr=0x8c07f93cu; R(4)=R(0); f_8c016040(c); }
  R(0)=0x4u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(13));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  fp_arith(c,2,4,3);
  fp_unary(c,0,4);
  { fp_st(c,4,R(0)+R(12)); goto L8c07f964; }
L8c07f954:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  fp_st(c,3,R(13));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(12));
L8c07f964:;
  R(0)=(int32_t)(int16_t)LD16(R(10)+14);
  R(1)=0x8u;
  R(3)=LD32(R(15));
  R(11)=R(15);
  R(4)=R(0);
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  R(2)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(0)=LD32(c->gbr+44);
  R(14)+=R(2);
  R(14)<<=2;
  R(0)+=R(14);
  fp_ld(c,3,R(0)+R(1));
  R(0)=R(1);
  fp_st(c,3,R(0)+R(3));
  fp_st(c,3,R(0)+R(12));
  fp_st(c,3,R(0)+R(13));
  R(0)=(int32_t)(int16_t)LD16(R(10)+16);
  c->t=(R(0)&0x1)==0;
  { uint32_t k=!c->t; R(11)+=0x28u; if(k) goto L8c07f992; }
  {  goto L8c07faa0; }
L8c07f992:;
  R(13)=R(15);
  R(0)=LD32(c->gbr+88);
  R(3)=0x8c07f6a0u;
  R(13)+=0x4u;
  R(5)=0x3u;
  R(7)=R(13);
  R(6)=R(9);
  { c->pr=0x8c07f9a4u; R(4)=R(0); f_8c07f6a0(c); }
  R(0)=LD32(c->gbr+48);
  R(6)=R(13);
  fp_ld(c,3,R(6));
  R(4)=R(13);
  fp_ld(c,2,R(0)+R(14));
  R(4)+=0xcu;
  R(5)=R(13);
  R(5)+=0x18u;
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(4));
  R(1)=0x4u;
  R(7)=R(11);
  R(1)+=R(6);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(7));
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(1));
  R(1)=0x4u;
  R(0)+=R(14);
  fp_ld(c,2,R(0)+R(1));
  R(0)=R(1);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(7));
  R(7)+=0xcu;
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(6));
  fp_ld(c,2,R(0)+R(14));
  R(1)+=R(6);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(4));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(7));
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(1));
  R(1)=0x4u;
  R(0)+=R(14);
  fp_ld(c,2,R(0)+R(1));
  R(0)=R(1);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(7));
  R(7)=R(11);
  R(0)=LD32(c->gbr+48);
  R(7)+=0x18u;
  fp_ld(c,3,R(6));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(7));
  R(0)=LD32(c->gbr+48);
  R(1)+=R(6);
  fp_ld(c,3,R(1));
  R(1)=0x4u;
  R(0)+=R(14);
  fp_ld(c,2,R(0)+R(1));
  R(0)=R(1);
  R(1)+=R(6);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(7));
  R(7)=R(11);
  R(0)=LD32(c->gbr+48);
  R(7)+=0x24u;
  fp_ld(c,3,R(6));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(4));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(7));
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(1));
  R(1)=0x4u;
  R(0)+=R(14);
  fp_ld(c,2,R(0)+R(1));
  R(0)=R(1);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(7)); goto L8c07fb3e; }
L8c07faa0:;
  R(0)=LD32(c->gbr+48);
  R(1)=0x4u;
  fp_ld(c,3,R(13));
  R(1)+=R(13);
  fp_ld(c,2,R(0)+R(14));
  R(4)=R(11);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(12));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(4));
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(1));
  R(1)=0x4u;
  R(0)+=R(14);
  fp_ld(c,2,R(0)+R(1));
  R(0)=R(1);
  R(1)+=R(13);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(4)+=0xcu;
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(12));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(4));
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(1));
  R(0)+=R(14);
  R(1)=0x4u;
  fp_ld(c,2,R(0)+R(1));
  R(0)=R(1);
  R(1)+=R(13);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(4)=R(11);
  R(0)=LD32(c->gbr+48);
  R(4)+=0x18u;
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(12));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(4));
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(1));
  R(1)=0x4u;
  R(0)+=R(14);
  fp_ld(c,2,R(0)+R(1));
  R(0)=R(1);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(4));
  R(4)=R(11);
  R(0)=LD32(c->gbr+48);
  R(4)+=0x24u;
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(12));
  R(1)+=R(13);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(4));
  R(0)=LD32(c->gbr+48);
  fp_ld(c,3,R(1));
  R(1)=0x4u;
  R(0)+=R(14);
  fp_ld(c,2,R(0)+R(1));
  R(0)=R(1);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(12));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(4));
L8c07fb3e:;
  R(0)=LD32(R(10));
  R(2)=0xfffffffbu;
  R(3)=0xfffffbffu;
  ST32(c->gbr+84,R(0));
  R(0)=LD32(c->gbr+24);
  R(1)=0x8c0388f8u;
  ST32(R(15),R(0));
  R(0)=LD32(c->gbr+24);
  R(0)&=R(3);
  ST32(c->gbr+24,R(0));
  R(0)=LD32(c->gbr+92);
  R(0)&=R(2);
  { c->pr=0x8c07fb5au; ST32(c->gbr+92,R(0)); f_8c0388f8(c); }
  R(3)=0x8c0389f8u;
  { c->pr=0x8c07fb60u;  f_8c0389f8(c); }
  R(0)=LD32(c->gbr+48);
  R(1)=0x8u;
  R(3)=0x8c07a340u;
  R(5)=0x1u;
  R(0)+=R(14);
  fp_ld(c,4,R(0)+R(1));
  { c->pr=0x8c07fb70u; R(4)=R(11); f_8c07a340(c); }
  R(0)=LD32(R(15));
  ST32(c->gbr+24,R(0));
  R(15)+=0x7cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07fbc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(14)=R(15);
  fp_st(c,8,R(15));
  R(14)+=0x4u;
  fp_mov(c,8,4);
  R(0)=0x4u;
  R(5)=R(14);
  fp_mov(c,4,5);
  fp_st(c,8,R(5));
  fp_st(c,4,R(0)+R(5));
  R(5)+=0xcu;
  fp_st(c,6,R(5));
  fp_st(c,4,R(0)+R(5));
  R(5)=R(14);
  R(5)+=0x18u;
  fp_mov(c,5,7);
  fp_st(c,6,R(5));
  fp_st(c,5,R(0)+R(5));
  R(5)=R(14);
  R(5)+=0x24u;
  R(3)=0xfffffbf7u;
  fp_st(c,8,R(5));
  fp_st(c,5,R(0)+R(5));
  R(0)=R(4);
  ST32(c->gbr+84,R(0));
  ST32(R(0),R(3));
  R(0)=R(3);
  R(3)=0x8c0388f8u;
  ST32(c->gbr+24,R(0));
  { c->pr=0x8c07fc02u; ST32(c->gbr+28,R(0)); f_8c0388f8(c); }
  R(2)=0x8c0389f8u;
  { c->pr=0x8c07fc08u;  f_8c0389f8(c); }
  R(3)=0x8c07a340u;
  R(5)=0x1u;
  fp_ld(c,4,R(15));
  { c->pr=0x8c07fc12u; R(4)=R(14); f_8c07a340(c); }
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07fc1a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  c->fr[2]=0x00000000u;
  fp_st(c,8,R(15));
  ST32(R(15)+4,R(5));
  R(0)=LD32(c->gbr+12);
  R(5)=R(0);
  R(3)=LD32(R(5)+4);
  R(0)=0x8c07fc90u;
  c->fpul=R(3);
  fp_ld(c,8,R(0));
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,9,3); if(k) goto L8c07fc44; }
  R(0)=0x8c07fc94u;
  fp_mov(c,10,9);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,10,3); goto L8c07fc46; }
L8c07fc44:;
  fp_mov(c,10,9);
L8c07fc46:;
  R(2)=LD32(R(5));
  fp_arith(c,2,4,10);
  fp_arith(c,2,10,6);
  c->fr[2]=0x00000000u;
  c->fpul=R(2);
  fp_mov(c,9,4);
  fp_arith(c,2,9,8);
  fp_float(c,3);
  fp_mov(c,6,10);
  fp_arith(c,2,6,8);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c07fca0; }
  R(0)=0x8c07fc94u;
  fp_mov(c,10,4);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,10,3); goto L8c07fca2; }
L8c07fca0:;
  fp_mov(c,10,4);
L8c07fca2:;
  fp_arith(c,2,5,10);
  R(14)=R(15);
  fp_arith(c,2,10,7);
  R(14)+=0x8u;
  R(5)=R(14);
  R(0)=0x4u;
  fp_st(c,9,R(5));
  fp_mov(c,4,5);
  fp_arith(c,2,4,8);
  fp_mov(c,5,10);
  fp_arith(c,2,5,8);
  R(3)=0xfffffbf7u;
  fp_st(c,4,R(0)+R(5));
  R(5)+=0xcu;
  fp_st(c,6,R(5));
  fp_st(c,4,R(0)+R(5));
  R(5)=R(14);
  R(5)+=0x18u;
  fp_st(c,6,R(5));
  fp_st(c,5,R(0)+R(5));
  R(5)=R(14);
  R(5)+=0x24u;
  fp_st(c,9,R(5));
  fp_st(c,5,R(0)+R(5));
  R(0)=R(4);
  ST32(c->gbr+84,R(0));
  ST32(R(0),R(3));
  R(0)=R(3);
  R(3)=0x8c0388f8u;
  ST32(c->gbr+24,R(0));
  { c->pr=0x8c07fce2u; ST32(c->gbr+28,R(0)); f_8c0388f8(c); }
  R(2)=0x8c0389f8u;
  { c->pr=0x8c07fce8u;  f_8c0389f8(c); }
  R(2)=0x8c0c8138u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c07fd08; }
  R(0)=LD32(c->gbr+36);
  R(3)=0xff000000u;
  R(1)=0xffffffu;
  R(0)&=R(3);
  ST32(c->gbr+36,R(0));
  R(0)=LD32(R(15)+4);
  R(0)&=R(1);
  R(2)=R(0);
  R(0)=LD32(c->gbr+36);
  R(0)|=R(2);
  ST32(c->gbr+36,R(0));
L8c07fd08:;
  R(3)=0x8c07a340u;
  fp_ld(c,4,R(15));
  { c->pr=0x8c07fd10u; R(4)=R(14); f_8c07a340(c); }
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07fd18(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff9cu;
  ST32(R(15)+4,R(5));
  R(0)=LD32(c->gbr+12);
  R(14)=LD32(R(4)+4);
  ST32(R(15)+12,R(0));
  R(0)=0x68u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c07fd34;
  {  goto L8c07fec8; }
L8c07fd34:;
  R(13)=R(15);
  R(13)+=0x40u;
  R(7)=R(13);
  R(5)=R(13);
  R(3)=0x8c0162d4u;
  R(6)=R(13);
  R(7)+=0x18u;
  ST32(R(15)+8,R(7));
  R(6)+=0xcu;
  ST32(R(15),R(5));
  R(4)=LD32(R(15)+4);
  { c->pr=0x8c07fd4eu; R(4)=LD32(R(4)+36); f_8c0162d4(c); }
  R(0)=0x8c07fda4u;
  R(2)=LD32(R(15));
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(2));
  R(13)=0x8c140cf4u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c07fdc0;
  c->fr[2]=0x00000000u;
  { fp_st(c,2,R(13)); goto L8c07fdd8; }
L8c07fdc0:;
  R(2)=LD32(R(15));
  R(0)=0x4u;
  R(3)=R(2);
  fp_ld(c,5,R(2));
  R(2)=0x8c0ac154u;
  { c->pr=0x8c07fdceu; fp_ld(c,4,R(0)+R(3)); f_8c0ac154(c); }
  R(0)=0x8c07fe48u;
  fp_ld(c,3,R(0));
  fp_arith(c,3,0,3);
  fp_unary(c,0,0);
  fp_st(c,0,R(13));
L8c07fdd8:;
  R(0)=0x68u;
  fp_ld(c,2,R(13));
  R(3)=LD32(R(14)+R(0));
  R(0)=0x120u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x8u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(13));
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x68u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x124u;
  fp_unary(c,0,3);
  fp_ld(c,2,R(0)+R(3));
  R(3)=0x8c140cf8u;
  fp_arith(c,0,3,2);
  c->fr[2]=0x00000000u;
  fp_st(c,3,R(3));
  R(2)=LD32(R(15)+12);
  R(1)=LD32(R(2)+4);
  c->fpul=R(1);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,0,3); if(k) goto L8c07fe16; }
  R(0)=0x8c07fe50u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,4,3); goto L8c07fe18; }
L8c07fe16:;
  fp_mov(c,4,0);
L8c07fe18:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,0);
  if(!c->t) goto L8c07fe60;
  R(0)=0x8c07fe50u;
  fp_mov(c,5,0);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,5,2); goto L8c07fe62; }
L8c07fe60:;
  fp_mov(c,5,0);
L8c07fe62:;
  R(13)=R(15);
  R(13)+=0x10u;
  c->fr[2]=0x00000000u;
  R(0)=0x4u;
  R(4)=R(13);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(4));
  fp_st(c,2,R(0)+R(4));
  R(4)+=0xcu;
  fp_st(c,4,R(4));
  fp_st(c,3,R(0)+R(4));
  R(4)=R(13);
  R(4)+=0x18u;
  R(3)=0xfffffbf7u;
  fp_st(c,4,R(4));
  fp_st(c,5,R(0)+R(4));
  R(4)=R(13);
  R(4)+=0x24u;
  fp_st(c,3,R(4));
  fp_st(c,5,R(0)+R(4));
  R(0)=0x68u;
  R(0)=LD32(R(14)+R(0));
  ST32(c->gbr+84,R(0));
  ST32(R(0),R(3));
  R(0)=R(3);
  ST32(c->gbr+24,R(0));
  ST32(c->gbr+28,R(0));
  R(0)=0x6cu;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,3);
  R(0)=0x8c07ff04u;
  R(3)=0x8c0388c0u;
  fp_ld(c,2,R(0));
  fp_unary(c,0,3);
  fp_mov(c,4,3);
  { c->pr=0x8c07feb0u; fp_arith(c,0,4,2); f_8c0388c0(c); }
  R(2)=0x8c0388f8u;
  { c->pr=0x8c07feb6u;  f_8c0388f8(c); }
  R(3)=0x8c0389f8u;
  { c->pr=0x8c07febcu;  f_8c0389f8(c); }
  R(0)=0x8c07ff14u;
  R(3)=0x8c07a340u;
  fp_ld(c,4,R(0));
  R(5)=0x0u;
  { c->pr=0x8c07fec8u; R(4)=R(13); f_8c07a340(c); }
L8c07fec8:;
  R(15)+=0x64u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c07fed2(SH4Ctx *c) {
  R(3)=0x8c2ddaf0u;
  R(0)=LD32(c->gbr+24);
  R(2)=0xfffffbf7u;
  ST32(R(3),R(0));
  R(0)=LD32(c->gbr+24);
  R(0)&=R(2);
  ST32(c->gbr+24,R(0));
  { ST32(c->gbr+28,R(0)); return; }
}
void f_8c07fee4(SH4Ctx *c) {
  R(3)=0x8c2ddaf0u;
  R(0)=LD32(R(3));
  { ST32(c->gbr+24,R(0)); return; }
}
void f_8c07ff20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(0)=0x8u;
  R(3)=0x8c0388eau;
  ST32(R(15),R(5));
  R(13)=R(4);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,5,R(0)+R(15));
  R(0)=LD32(c->gbr+12);
  { c->pr=0x8c07ff3eu; R(14)=R(0); f_8c0388ea(c); }
  R(3)=0x8c0388c0u;
  R(0)=0x8u;
  fp_mov(c,15,0);
  { c->pr=0x8c07ff48u; fp_ld(c,4,R(0)+R(15)); f_8c0388c0(c); }
  R(4)=0x8c143ab8u;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  R(2)=LD32(R(4));
  c->fr[2]=0x00000000u;
  R(1)=R(2);
  fp_st(c,3,R(0)+R(1));
  R(0)=0xcu;
  R(3)=R(2);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(2));
  R(0)=0x8c07ffccu;
  R(3)=LD32(R(14)+4);
  fp_ld(c,4,R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,5,3); if(k) goto L8c07ff7c; }
  R(0)=0x8c07ffd0u;
  fp_mov(c,6,5);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,6,3); goto L8c07ff7e; }
L8c07ff7c:;
  fp_mov(c,6,5);
L8c07ff7e:;
  fp_ld(c,3,R(13));R(13)+=fp_sz(c);
  R(3)=LD32(R(15));
  fp_arith(c,2,3,6);
  c->fr[2]=0x00000000u;
  R(3)+=0x4u;
  ST32(R(15),R(3));
  R(3)+=0xfffffffcu;
  fp_mov(c,7,3);
  fp_arith(c,2,7,4);
  fp_ld(c,3,R(3));
  R(3)=LD32(R(14));
  fp_arith(c,2,3,6);
  c->fpul=R(3);
  fp_mov(c,6,3);
  fp_float(c,3);
  fp_arith(c,2,6,4);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,5,3); if(k) goto L8c07ffe0; }
  R(0)=0x8c07ffd0u;
  fp_mov(c,8,5);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,8,3); goto L8c07ffe2; }
L8c07ffe0:;
  fp_mov(c,8,5);
L8c07ffe2:;
  fp_ld(c,3,R(13));R(13)+=fp_sz(c);
  R(14)=R(15);
  R(3)=LD32(R(15));
  R(14)+=0xcu;
  fp_arith(c,2,3,8);
  fp_mov(c,2,4);
  R(0)=0x4u;
  R(5)=R(14);
  fp_mov(c,5,3);
  fp_arith(c,2,5,4);
  fp_ld(c,3,R(3));
  fp_st(c,7,R(5));
  fp_arith(c,2,3,8);
  R(3)=0xfffffbf7u;
  fp_st(c,5,R(0)+R(5));
  R(5)+=0xcu;
  fp_st(c,7,R(5));
  fp_mov(c,4,3);
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(5));
  R(5)=R(14);
  R(5)+=0x18u;
  fp_st(c,6,R(5));
  fp_st(c,5,R(0)+R(5));
  R(5)=R(14);
  R(5)+=0x24u;
  fp_st(c,6,R(5));
  fp_st(c,4,R(0)+R(5));
  R(0)=LD32(R(4));
  ST32(c->gbr+84,R(0));
  ST32(R(0),R(3));
  R(0)=R(3);
  R(2)=0x8c0c4698u;
  R(3)=0x0u;
  R(1)=0x8c0388f8u;
  ST32(c->gbr+24,R(0));
  ST32(c->gbr+28,R(0));
  { c->pr=0x8c080030u; ST32(R(2),R(3)); f_8c0388f8(c); }
  R(3)=0x8c0389f8u;
  { c->pr=0x8c080036u;  f_8c0389f8(c); }
  R(2)=0x8c07a540u;
  fp_ld(c,4,R(13));
  { c->pr=0x8c08003eu; R(4)=R(14); f_8c07a540(c); }
  R(3)=0x8c0388c0u;
  { c->pr=0x8c080044u; fp_mov(c,4,15); f_8c0388c0(c); }
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
