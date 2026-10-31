#include "recomp_decls.h"
void f_8c0a4960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  R(0)=0x2cu;
  c->fr[3]=0x00000000u;
  R(3)=0xe0u;
  R(7)=R(15);
  R(2)=0x8c015ea8u;
  R(7)+=0x8u;
  ST32(R(15)+12,R(4));
  R(6)=R(15);
  ST32(R(15)+16,R(5));
  R(5)=R(15);
  R(14)=LD32(R(15)+12);
  R(5)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  R(14)+=R(3);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(2); c->pr=0x8c0a4992u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(15)+8);
  R(0)=0x8c0a4ac8u;
  fp_ld(c,15,R(0));
  R(0)=0x14u;
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x18u;
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x1cu;
  R(3)=0x8c05e6eau;
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c0a49c0u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(0)=0x34u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  R(0)=0x30u;
  R(2)=LD32(R(15)+4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(3));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  fp_ld(c,2,R(0)+R(2));
  R(0)=0x34u;
  fp_ld(c,1,R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,2,R(2));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(1)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  R(1)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,1,R(2));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15));
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(1));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x20u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x24u;
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,3,15);
  R(6)=R(15);
  R(5)=R(15);
  R(0)=0x28u;
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(5)+=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x20u;
  { c->pr=0x8c0a4a96u; R(4)+=0x20u; f_8c05e612(c); }
  R(5)=R(14);
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(14);
  R(6)+=0x20u;
  R(5)+=0x58u;
  { c->pr=0x8c0a4aa6u; R(4)+=0x58u; f_8c05e5f4(c); }
  R(3)=0x8c091d40u;
  R(5)=R(14);
  { c->pr=0x8c0a4aaeu; R(4)=LD32(R(15)+12); f_8c091d40(c); }
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a4ae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff88u;
  R(3)=0xe0u;
  R(14)=R(4);
  R(2)=0x8c0480b8u;
  R(0)=0x4u;
  R(3)+=R(14);
  R(12)=R(5);
  fp_st(c,4,R(0)+R(15));
  ST32(R(15)+8,R(3));
  { c->pr=0x8c0a4b00u; R(4)=R(12); f_8c0480b8(c); }
  R(3)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c0a4b2a;
  R(5)=R(14);
  R(1)=0x8c0685b4u;
  R(13)=R(15);
  R(5)+=0x78u;
  R(13)+=0x10u;
  R(6)=0x68u;
  { c->pr=0x8c0a4b18u; R(4)=R(13); f_8c0685b4(c); }
  R(3)=0x1c8u;
  R(5)=R(14);
  R(2)=0x8c01638au;
  R(4)=R(13);
  ST32(R(15)+12,R(14));
  { c->pr=0x8c0a4b26u; R(5)+=R(3); f_8c01638a(c); }
  {  goto L8c0a4b2e; }
L8c0a4b2a:;
  R(13)=R(14);
  R(13)+=0x78u;
L8c0a4b2e:;
  R(2)=LD32(R(14)+12);
  R(3)=0x400000u;
  R(11)=0x8c0cbe00u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0a4b3c;
  { R(2)=0x1u; goto L8c0a4b3e; }
L8c0a4b3c:;
  R(2)=0x0u;
L8c0a4b3e:;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  R(1)=LD32(R(15)+12);
  R(6)=R(14);
  R(3)=0x8c0a8880u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(11));
  R(4)=R(15);
  { c->pr=0x8c0a4b54u; R(4)+=0xcu; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0a4bc0; }
  R(5)=LD32(R(15));
  R(7)=0x0u;
  R(3)=0x8c0a9968u;
  R(6)=LD32(R(11));
  { c->pr=0x8c0a4b68u; R(4)=R(14); f_8c0a9968(c); }
  R(0)=0x4u;
  R(6)=LD32(R(15));
  R(3)=0x8c0a3260u;
  R(5)=R(12);
  fp_ld(c,4,R(0)+R(15));
  R(7)=LD32(R(11));
  { c->pr=0x8c0a4b78u; R(4)=R(14); f_8c0a3260(c); }
  {  goto L8c0a4bc8; }
L8c0a4bc0:;
  R(2)=LD32(R(14)+12);
  R(3)=0xfffeffffu;
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
L8c0a4bc8:;
  R(15)+=0x78u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a4bd6(SH4Ctx *c) {
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
  R(0)=0xfffffea8u;
  R(15)+=R(0);
  R(14)=R(4);
  R(4)=R(15);
  R(4)+=0x34u;
  c->fr[13]=0x00000000u;
  R(3)=0x0u;
  c->fr[3]=0x3F800000u;
  R(0)=0x28u;
  R(2)=R(3);
  R(6)=0x68u;
  fp_mov(c,12,4);
  ST32(R(15)+24,R(5));
  ST32(R(15)+32,R(3));
  ST8(R(15)+R(0),R(2));
  R(0)=0x14u;
  ST32(R(15),R(4));
  R(4)+=0x68u;
  ST32(R(15)+8,R(4));
  R(4)=R(14);
  fp_ld(c,15,R(0)+R(4));
  R(3)=R(4);
  R(0)=0x110u;
  R(3)+=0x78u;
  R(2)=0xe0u;
  R(2)+=R(14);
  ST32(R(15)+20,R(2));
  ST32(R(15)+28,R(3));
  fp_st(c,13,R(0)+R(15));
  R(0)=0x114u;
  fp_st(c,13,R(0)+R(15));
  R(0)=0x118u;
  fp_st(c,3,R(0)+R(15));
  R(13)=LD32(R(15)+20);
  R(2)=0x8c0685b4u;
  R(5)=R(13);
  { c->pr=0x8c0a4c3au; R(4)=LD32(R(15)+8); f_8c0685b4(c); }
  R(3)=0x8c0685b4u;
  R(5)=R(13);
  R(6)=0x68u;
  { c->pr=0x8c0a4c44u; R(4)=LD32(R(15)); f_8c0685b4(c); }
  R(10)=LD32(R(15)+28);
  R(9)=R(13);
  R(8)=0x8c05e612u;
  R(9)+=0x58u;
  R(4)=0x128u;
  R(10)+=0x58u;
  R(5)=R(9);
  R(6)=R(10);
  { c->pr=0x8c0a4c58u; R(4)+=R(15); f_8c05e612(c); }
  R(4)=0x8c0cbdb8u;
  R(2)=0x5u;
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  R(1)=R(3);
  c->t=(int32_t)R(1)>(int32_t)R(2);
  ST32(R(4),R(3));
  if(!c->t) goto L8c0a4ca0;
  R(1)=0x8c05e6eau;
  R(5)=R(10);
  { c->pr=0x8c0a4c70u; R(4)=R(9); f_8c05e6ea(c); }
  R(0)=0x3cu;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x44u;
  { fp_st(c,13,R(0)+R(14)); goto L8c0a55d4; }
L8c0a4ca0:;
  R(0)=0x128u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x12cu;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x130u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c0a4d0cu;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_ld(c,4,R(0));
  fp_unary(c,2,3);
  fp_arith(c,2,15,3);
  fp_cmp(c,1,4,15);
  { uint32_t k=!c->t; R(2)=0x0u; if(k) goto L8c0a4cc8; }
  fp_mov(c,15,4);
L8c0a4cc8:;
  R(0)=0x170u;
  R(3)=0xd0u;
  ST32(R(15)+36,R(2));
  R(4)=LD32(R(14)+R(0));
  R(4)+=R(3);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a4d20;
  R(1)=R(4);
  R(12)=R(4);
  R(1)+=0x10u;
  R(12)+=0x4u;
  { ST32(R(15)+36,R(1)); goto L8c0a4d24; }
L8c0a4d20:;
  R(12)=0x110u;
  R(12)+=R(15);
L8c0a4d24:;
  R(3)=0x8c05e55cu;
  R(5)=R(12);
  R(4)=0x128u;
  { c->pr=0x8c0a4d2eu; R(4)+=R(15); f_8c05e55c(c); }
  fp_ld(c,3,R(12));
  R(5)=R(12);
  R(0)=0x140u;
  fp_arith(c,2,0,3);
  R(4)=0x128u;
  R(3)=0x8c05e55cu;
  fp_st(c,0,R(0)+R(15));
  { c->pr=0x8c0a4d40u; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x4u;
  R(4)=0x128u;
  fp_ld(c,3,R(0)+R(12));
  R(5)=R(12);
  R(0)=0x144u;
  fp_arith(c,2,0,3);
  R(3)=0x8c05e55cu;
  fp_st(c,0,R(0)+R(15));
  { c->pr=0x8c0a4d54u; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x8u;
  R(6)=0x140u;
  fp_ld(c,3,R(0)+R(12));
  R(5)=0x128u;
  R(6)+=R(15);
  fp_arith(c,2,0,3);
  R(0)=0x148u;
  R(4)=0x134u;
  R(5)+=R(15);
  fp_st(c,0,R(0)+R(15));
  { uint32_t tg=R(8); c->pr=0x8c0a4d6cu; R(4)+=R(15); sh4_call(c,tg); }
  fp_ld(c,3,R(12));
  R(5)=R(10);
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  R(0)=0x14cu;
  R(3)=0x8c05e6eau;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(12));
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  R(0)=0x150u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x154u;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  R(13)=LD32(R(15));
  R(13)+=0x58u;
  { uint32_t tg=R(3); c->pr=0x8c0a4d98u; R(4)=R(13); sh4_call(c,tg); }
  R(6)=0x134u;
  R(5)=R(13);
  R(2)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a4da4u; R(4)=R(13); f_8c05e5f4(c); }
  R(6)=0x14cu;
  R(5)=R(13);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a4db0u; R(4)=R(13); f_8c05e5f4(c); }
  R(3)=LD32(R(15)+8);
  R(5)=R(10);
  R(2)=0x8c05e6eau;
  R(3)+=0x58u;
  ST32(R(15)+16,R(3));
  { c->pr=0x8c0a4dbeu; R(4)=R(3); f_8c05e6ea(c); }
  R(6)=0x134u;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a4dcau; R(4)=R(5); f_8c05e5f4(c); }
  R(6)=0x14cu;
  R(5)=LD32(R(15)+16);
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0a4dd4u; R(4)=R(5); sh4_call(c,tg); }
  R(3)=0x1u;
  R(6)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  R(2)=LD32(R(15)+12);
  R(11)=R(13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+8);
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(2));
  R(4)=R(15);
  R(7)=LD32(R(15)+36);
  R(1)=0x8c0a8880u;
  { c->pr=0x8c0a4df4u; R(4)+=0x18u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0a4e00; }
  {  goto L8c0a55a0; }
L8c0a4e00:;
  R(2)=0x8c0cbe00u;
  R(6)=R(14);
  R(7)=0x128u;
  R(5)=LD32(R(2));
  R(3)=0x8c0923dau;
  R(7)+=R(15);
  { c->pr=0x8c0a4e10u; R(4)=LD32(R(15)+12); f_8c0923da(c); }
  R(2)=0x0u;
  { ST32(R(15)+8,R(2)); goto L8c0a4f08; }
L8c0a4e60:;
  R(2)=LD32(R(15)+8);
  R(3)=0x68u;
  c->macl=R(2)*R(3);
  R(2)=0x8c0cbe00u;
  R(1)=LD32(R(2));
  R(3)=c->macl;
  R(3)+=R(1);
  R(1)=0x2eu;
  R(0)=R(3);
  ST32(R(15),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a4f02;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+32);
  ST32(R(15)+48,R(0));
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c0a4ea2; }
  R(0)=LD32(R(15)+4);
  R(0)=(int32_t)(int16_t)LD16(R(0)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0a4ea2;
  { R(2)=0x1u; goto L8c0a4ea4; }
L8c0a4ea2:;
  R(2)=0x0u;
L8c0a4ea4:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a4f02;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a4ec2;
  R(2)=LD32(R(15)+4);
  R(3)=0x8000u;
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a4ec2;
  { R(3)=0x1u; goto L8c0a4ec4; }
L8c0a4ec2:;
  R(3)=0x0u;
L8c0a4ec4:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a4f02;
  R(3)=0x8c090decu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0a4ed2u; R(4)=R(14); f_8c090dec(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a4f02;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0a4ede;
  R(13)=LD32(R(15));
L8c0a4ede:;
  R(4)=LD32(R(15));
  R(0)=0x2eu;
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(0)=R(4);
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0a4ef4;
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a4ef4;
  { R(3)=0x0u; goto L8c0a4ef6; }
L8c0a4ef4:;
  R(3)=0x1u;
L8c0a4ef6:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a4f02;
  R(0)=0x28u;
  R(2)=0x1u;
  ST8(R(15)+R(0),R(2));
L8c0a4f02:;
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  ST32(R(15)+8,R(3));
L8c0a4f08:;
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15)+12);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(c->t) goto L8c0a4f1c;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0a4e60;
  R(0)=0x28u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a4e60;
L8c0a4f1c:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0a4f2a;
  R(2)=R(13);
  R(2)+=0x10u;
  R(12)=R(13);
  ST32(R(15)+36,R(2));
  R(12)+=0x4u;
L8c0a4f2a:;
  { R(3)=0x0u; goto L8c0a5002; }
L8c0a4f2e:;
  R(2)=LD32(R(15)+4);
  R(3)=0x68u;
  R(0)=0x8c0cbe00u;
  c->macl=R(2)*R(3);
  R(2)=LD32(R(0));
  R(1)=c->macl;
  R(1)+=R(2);
  R(0)=R(1);
  ST32(R(15),R(1));
  R(1)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a4ffe;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+32);
  ST32(R(15)+44,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a4f6e;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0a4f6e;
  { R(2)=0x1u; goto L8c0a4f70; }
L8c0a4f6e:;
  R(2)=0x0u;
L8c0a4f70:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a4fc8;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a4fc0;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a4fc0;
  { R(3)=0x1u; goto L8c0a4fc2; }
L8c0a4fc0:;
  R(3)=0x0u;
L8c0a4fc2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a4ffe;
L8c0a4fc8:;
  R(3)=0x8c05e55cu;
  R(5)=R(12);
  R(4)=LD32(R(15));
  { c->pr=0x8c0a4fd2u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c0a5068u;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0a4ffe;
  R(5)=LD32(R(15));
  R(4)=0x14cu;
  R(6)=LD32(R(15)+36);
  R(5)+=0x10u;
  { uint32_t tg=R(8); c->pr=0x8c0a4fe8u; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0x8c05e55cu;
  R(5)=R(12);
  R(4)=0x14cu;
  { c->pr=0x8c0a4ff2u; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x8c0a506cu;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0a4ffe;
  R(11)=LD32(R(15));
L8c0a4ffe:;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
L8c0a5002:;
  R(1)=R(3);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(15)+12);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(c->t) goto L8c0a5010;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0a4f2e;
L8c0a5010:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0a5020;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c0a5020;
  R(3)=LD32(R(15)+4);
  ST32(R(15)+8,R(3));
L8c0a5020:;
  R(2)=LD32(R(15)+8);
  R(3)=0x8c0cbe00u;
  R(2)+=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+28);
  R(2)=0x8c0a8f0eu;
  R(7)=LD32(R(3));
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0a5034u; R(4)=R(14); f_8c0a8f0e(c); }
  R(15)+=0x4u;
  R(0)=0x8c0a5078u;
  fp_ld(c,14,R(0));
  c->t=(R(13)&R(13))==0;
  R(0)=0x8c0a507cu;
  { uint32_t k=!c->t; fp_ld(c,15,R(0)); if(k) goto L8c0a5046; }
  {  goto L8c0a520c; }
L8c0a5046:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0a5080;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a5080;
  { R(2)=0x0u; goto L8c0a5082; }
L8c0a5080:;
  R(2)=0x1u;
L8c0a5082:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a508c;
  {  goto L8c0a520c; }
L8c0a508c:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0a5094;
  {  goto L8c0a520c; }
L8c0a5094:;
  R(0)=0x28u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a50a0;
  {  goto L8c0a520c; }
L8c0a50a0:;
  { R(3)=0x0u; goto L8c0a51b2; }
L8c0a50a4:;
  R(2)=LD32(R(15));
  R(3)=0x68u;
  R(0)=0x8c0cbe00u;
  c->macl=R(2)*R(3);
  R(2)=LD32(R(0));
  R(1)=c->macl;
  R(1)+=R(2);
  R(0)=R(1);
  ST32(R(15)+4,R(1));
  R(1)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a50cc;
  {  goto L8c0a51ae; }
L8c0a50cc:;
  R(6)=LD32(R(15)+4);
  R(5)=LD32(R(15)+36);
  R(4)=0x14cu;
  R(6)+=0x10u;
  { uint32_t tg=R(8); c->pr=0x8c0a50d8u; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x14cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,0,4,15);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a50ea;
  { fp_mov(c,3,4); goto L8c0a50f4; }
L8c0a50ea:;
  fp_mov(c,2,5);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a50f4:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a51a0;
  R(0)=0x150u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a5140;
  R(0)=0x150u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a514a; }
L8c0a5140:;
  R(0)=0x150u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a514a:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a51a0;
  R(0)=0x154u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a5162;
  R(0)=0x154u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a516c; }
L8c0a5162:;
  R(0)=0x154u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a516c:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a51a0;
  { R(3)=0x1u; goto L8c0a51a2; }
L8c0a51a0:;
  R(3)=0x0u;
L8c0a51a2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a51ae;
  R(2)=LD32(R(15)+32);
  R(2)+=0x1u;
  ST32(R(15)+32,R(2));
L8c0a51ae:;
  R(3)=LD32(R(15));
  R(3)+=0x1u;
L8c0a51b2:;
  R(1)=R(3);
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+12);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(c->t) goto L8c0a51c0;
  {  goto L8c0a50a4; }
L8c0a51c0:;
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a520c;
  R(0)=LD32(R(13)+40);
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a520c;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x10)==0;
  { uint32_t k=!c->t; R(5)=R(10); if(k) goto L8c0a51e4; }
  R(2)=LD32(R(14)+12);
  R(3)=0x10000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c0a51e4:;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c0a51eau; R(4)=R(9); f_8c05e6ea(c); }
  R(0)=0x3cu;
  R(3)=0x4000u;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,13,R(0)+R(14));
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0a5202;
  {  goto L8c0a55d4; }
L8c0a5202:;
  R(0)=0x170u;
  R(4)=LD32(R(14)+R(0));
  R(3)=LD32(R(4));
  { ST32(R(4)+4,R(3)); goto L8c0a55d4; }
L8c0a520c:;
  R(2)=0x8c0cbe00u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(7)=LD32(R(2)); if(k) goto L8c0a5218; }
  {  goto L8c0a53c0; }
L8c0a5218:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0a5260;
  R(4)=0x14cu;
  R(6)=R(13);
  R(3)=0x8c05e5f4u;
  R(6)+=0x30u;
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c0a522au; R(4)+=R(15); f_8c05e5f4(c); }
  R(5)=0x14cu;
  R(3)=0x8c01638au;
  R(5)+=R(15);
  { c->pr=0x8c0a5234u; R(4)=LD32(R(15)+20); f_8c01638a(c); }
  {  goto L8c0a5562; }
L8c0a5260:;
  if(c->t) goto L8c0a52b6;
  fp_ld(c,2,R(11));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a52b6;
  R(0)=0x8c0cbdb8u;
  R(1)=0x2u;
  R(3)=LD32(R(0));
  c->t=(int32_t)R(3)>(int32_t)R(1);
  if(!c->t) goto L8c0a52b6;
  R(3)=LD32(R(15)+8);
  R(5)=R(14);
  R(4)=0x108u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0a94c0u;
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0a528au; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(6)=0x104u;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a5298u; R(4)=R(9); f_8c05e5f4(c); }
  R(4)=0x14cu;
  R(5)=R(9);
  R(6)=R(10);
  { uint32_t tg=R(8); c->pr=0x8c0a52a2u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x128u;
  R(6)=0x14cu;
  R(4)=0x128u;
  R(5)+=R(15);
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0a52b0u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=R(9);
  { R(4)=R(10); goto L8c0a52ba; }
L8c0a52b6:;
  R(4)=R(9);
  R(5)=R(10);
L8c0a52ba:;
  R(2)=0x8c05e6eau;
  { c->pr=0x8c0a52c0u;  f_8c05e6ea(c); }
  R(2)=R(11);
  R(3)=0x0u;
  R(6)=0x130u;
  R(2)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(4)=0x124u;
  R(6)+=R(15);
  fp_mov(c,4,12);
  R(7)+=0x4u;
  { c->pr=0x8c0a52dcu; R(4)+=R(15); f_8c0a454e(c); }
  R(15)+=0x8u;
  R(0)=0x11cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,0,4,15);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a5320;
  { fp_mov(c,3,4); goto L8c0a532a; }
L8c0a5320:;
  fp_mov(c,2,5);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a532a:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a5376;
  R(0)=0x120u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a5342;
  R(0)=0x120u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a534c; }
L8c0a5342:;
  R(0)=0x120u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a534c:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a5376;
  R(0)=0x124u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a5364;
  R(0)=0x124u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a536e; }
L8c0a5364:;
  R(0)=0x124u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a536e:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a5376;
  { R(3)=0x1u; goto L8c0a5378; }
L8c0a5376:;
  R(3)=0x0u;
L8c0a5378:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5382;
  {  goto L8c0a54de; }
L8c0a5382:;
  R(2)=0x8c05e6eau;
  R(5)=R(10);
  { c->pr=0x8c0a538au; R(4)=R(9); f_8c05e6ea(c); }
  {  goto L8c0a5562; }
L8c0a53c0:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0a53c8;
  {  goto L8c0a552c; }
L8c0a53c8:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0a5416;
  fp_ld(c,2,R(11));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a5416;
  R(2)=LD32(R(15)+8);
  R(5)=R(14);
  R(4)=0x108u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0a94c0u;
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0a53eau; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(6)=0x104u;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a53f8u; R(4)=R(9); f_8c05e5f4(c); }
  R(4)=0x14cu;
  R(5)=R(9);
  R(6)=R(10);
  { uint32_t tg=R(8); c->pr=0x8c0a5402u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x128u;
  R(6)=0x14cu;
  R(4)=0x128u;
  R(5)+=R(15);
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0a5410u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=R(9);
  { R(4)=R(10); goto L8c0a541a; }
L8c0a5416:;
  R(4)=R(9);
  R(5)=R(10);
L8c0a541a:;
  R(2)=0x8c05e6eau;
  { c->pr=0x8c0a5420u;  f_8c05e6ea(c); }
  R(2)=R(11);
  R(3)=0x0u;
  R(6)=0x130u;
  R(2)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(4)=0x124u;
  R(7)=R(12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)+=R(15);
  fp_mov(c,4,12);
  { c->pr=0x8c0a543au; R(4)+=R(15); f_8c0a454e(c); }
  R(15)+=0x8u;
  R(0)=0x11cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,5,4);
  fp_arith(c,0,5,15);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a5480;
  { fp_mov(c,3,5); goto L8c0a548a; }
L8c0a5480:;
  fp_mov(c,2,4);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a548a:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a54d6;
  R(0)=0x120u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a54a2;
  R(0)=0x120u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a54ac; }
L8c0a54a2:;
  R(0)=0x120u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a54ac:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a54d6;
  R(0)=0x124u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a54c4;
  R(0)=0x124u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a54ce; }
L8c0a54c4:;
  R(0)=0x124u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a54ce:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a54d6;
  { R(3)=0x1u; goto L8c0a54d8; }
L8c0a54d6:;
  R(3)=0x0u;
L8c0a54d8:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5520;
L8c0a54de:;
  R(5)=LD32(R(15)+24);
  fp_mov(c,4,12);
  { c->pr=0x8c0a54e6u; R(4)=R(14); f_8c0a4bd6(c); }
  {  goto L8c0a5562; }
L8c0a5520:;
  R(2)=0x8c05e6eau;
  R(5)=R(10);
  { c->pr=0x8c0a5528u; R(4)=R(9); f_8c05e6ea(c); }
  {  goto L8c0a5562; }
L8c0a552c:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  { c->pr=0x8c0a5536u; R(4)=LD32(R(15)+20); f_8c0685b4(c); }
  R(0)=0x3cu;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,13,R(0)+R(14));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c0a5550;
  R(2)=LD32(R(14)+12);
  R(3)=0x10000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c0a5550:;
  R(1)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0a55d4;
  R(0)=0x170u;
  R(4)=LD32(R(14)+R(0));
  R(3)=LD32(R(4));
  { ST32(R(4)+4,R(3)); goto L8c0a55d4; }
L8c0a5562:;
  R(2)=0x8c091980u;
  fp_mov(c,4,12);
  { c->pr=0x8c0a556au; R(4)=R(14); f_8c091980(c); }
  {  goto L8c0a55d4; }
L8c0a55a0:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  { c->pr=0x8c0a55aau; R(4)=LD32(R(15)+20); f_8c0685b4(c); }
  R(0)=0x3cu;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,13,R(0)+R(14));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c0a55c4;
  R(2)=LD32(R(14)+12);
  R(3)=0x10000u;
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
L8c0a55c4:;
  R(1)=LD32(R(14)+12);
  R(3)=0x4000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0a55d4;
  R(0)=0x170u;
  R(4)=LD32(R(14)+R(0));
  R(3)=LD32(R(4));
  ST32(R(4)+4,R(3));
L8c0a55d4:;
  R(1)=0x158u;
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
void f_8c0a5620(SH4Ctx *c) {
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
  R(0)=0xfffffe6cu;
  R(15)+=R(0);
  ST32(R(15),R(4));
  R(3)=0x0u;
  R(4)=R(15);
  R(0)=0x44u;
  R(4)+=0x4cu;
  c->fr[3]=0x00000000u;
  R(10)=R(4);
  ST32(R(15)+32,R(5));
  ST32(R(15)+28,R(3));
  R(10)+=0x68u;
  R(3)=0x8c09d2dcu;
  R(11)=R(4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c0a5710u;
  fp_mov(c,14,4);
  { c->pr=0x8c0a565eu; fp_ld(c,4,R(0)); f_8c09d2dc(c); }
  R(0)=0x40u;
  c->fr[3]=0x00000000u;
  fp_st(c,0,R(0)+R(15));
  R(0)=0x140u;
  R(2)=0xe0u;
  R(3)=LD32(R(15));
  R(2)+=R(3);
  ST32(R(15)+12,R(2));
  R(2)=LD32(R(15));
  R(2)+=0x78u;
  ST32(R(15)+40,R(2));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x144u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x148u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0a56ac;
  R(3)=0x1ecu;
  R(5)=LD32(R(15));
  c->fr[3]=0x00000000u;
  R(5)+=R(3);
  fp_ld(c,2,R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a56a8;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a56a8;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0a56ac;
L8c0a56a8:;
  { c->pr=0x8c0a56acu; R(4)=LD32(R(15)); f_8c0a4960(c); }
L8c0a56ac:;
  R(14)=LD32(R(15)+12);
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  R(5)=R(14);
  { c->pr=0x8c0a56b8u; R(4)=R(10); f_8c0685b4(c); }
  R(2)=0x8c0685b4u;
  R(5)=R(14);
  R(6)=0x68u;
  { c->pr=0x8c0a56c2u; R(4)=R(11); f_8c0685b4(c); }
  R(3)=R(14);
  R(3)+=0x58u;
  ST32(R(15)+16,R(3));
  R(3)=LD32(R(15)+40);
  R(4)=0x170u;
  R(2)=0x8c05e612u;
  R(3)+=0x58u;
  ST32(R(15)+8,R(3));
  R(6)=R(3);
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c0a56dau; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0x8c0a5720u;
  c->fr[2]=0x00000000u;
  fp_ld(c,12,R(0));
  R(0)=0x8c0a5724u;
  fp_ld(c,13,R(0));
  R(0)=0x170u;
  fp_ld(c,15,R(0)+R(15));
  fp_mov(c,4,15);
  fp_arith(c,0,4,13);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0a5740;
  { fp_mov(c,3,4); goto L8c0a5746; }
L8c0a5740:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a5746:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a57c0;
  R(0)=0x174u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a575e;
  R(0)=0x174u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a5768; }
L8c0a575e:;
  R(0)=0x174u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a5768:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a57c0;
  R(0)=0x178u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a5780;
  R(0)=0x178u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a578a; }
L8c0a5780:;
  R(0)=0x178u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a578a:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a57c0;
  { R(3)=0x1u; goto L8c0a57c2; }
L8c0a57c0:;
  R(3)=0x0u;
L8c0a57c2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5804;
  R(0)=0x174u;
  fp_mov(c,0,15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x178u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x170u;
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0x128u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x174u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x12cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x178u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x130u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c0a5812; }
L8c0a5804:;
  R(0)=0x128u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x12cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x130u;
  fp_st(c,3,R(0)+R(15));
L8c0a5812:;
  R(14)=0x8c0cbdb8u;
  R(2)=0x5u;
  R(3)=LD32(R(14));
  R(3)+=0x1u;
  R(1)=R(3);
  c->t=(int32_t)R(1)>(int32_t)R(2);
  ST32(R(14),R(3));
  if(!c->t) goto L8c0a5860;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0a582au; R(4)=LD32(R(15)+16); f_8c05e6ea(c); }
  R(14)=LD32(R(15));
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x40u;
  { fp_st(c,3,R(0)+R(14)); goto L8c0a62f0; }
L8c0a5860:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015ea8u;
  R(5)+=0x38u;
  R(7)+=0x3cu;
  R(6)+=0x24u;
  { c->pr=0x8c0a5872u; R(4)=LD32(R(15)+12); f_8c015ea8(c); }
  R(5)=0x1ecu;
  R(13)=LD32(R(15));
  R(4)=0x170u;
  R(3)=0x8c05e55cu;
  R(5)+=R(13);
  { c->pr=0x8c0a5880u; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x1ecu;
  R(5)=0x1ecu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x164u;
  R(5)+=R(13);
  fp_arith(c,2,0,3);
  R(4)=0x170u;
  R(3)=0x8c05e55cu;
  fp_st(c,0,R(0)+R(15));
  { c->pr=0x8c0a5896u; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x1f0u;
  R(5)=0x1ecu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x168u;
  R(5)+=R(13);
  fp_arith(c,2,0,3);
  R(4)=0x170u;
  R(3)=0x8c05e55cu;
  fp_st(c,0,R(0)+R(15));
  { c->pr=0x8c0a58acu; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x1f4u;
  R(6)=0x164u;
  fp_ld(c,3,R(0)+R(13));
  R(5)=0x170u;
  R(6)+=R(15);
  fp_arith(c,2,0,3);
  R(0)=0x16cu;
  R(4)=0x158u;
  R(5)+=R(15);
  R(3)=0x8c05e612u;
  fp_st(c,0,R(0)+R(15));
  { c->pr=0x8c0a58c6u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a58d6;
  R(3)=0x8c05e6eau;
  R(4)=0x8c2e897cu;
  R(5)=0x158u;
  { c->pr=0x8c0a58d6u; R(5)+=R(15); f_8c05e6ea(c); }
L8c0a58d6:;
  R(0)=0x158u;
  c->fr[2]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_mov(c,4,15);
  fp_arith(c,0,4,13);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0a58e8;
  { fp_mov(c,3,4); goto L8c0a58ee; }
L8c0a58e8:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a58ee:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a5994;
  R(0)=0x15cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a5960;
  R(0)=0x15cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a596a; }
L8c0a5960:;
  R(0)=0x15cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a596a:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a5994;
  R(0)=0x160u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a5982;
  R(0)=0x160u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a598c; }
L8c0a5982:;
  R(0)=0x160u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a598c:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a5994;
  { R(3)=0x1u; goto L8c0a5996; }
L8c0a5994:;
  R(3)=0x0u;
L8c0a5996:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5a00;
  R(0)=0x15cu;
  fp_mov(c,0,15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x160u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x158u;
  fp_fmac(c,3,15);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0x11cu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x15cu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x120u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x160u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x124u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c0a5a0e; }
L8c0a5a00:;
  R(0)=0x11cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x120u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x124u;
  fp_st(c,3,R(0)+R(15));
L8c0a5a0e:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0a5a1c;
  R(0)=0x8c0a5af8u;
  { fp_ld(c,15,R(0)); goto L8c0a5a3c; }
L8c0a5a1c:;
  R(0)=0x158u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x15cu;
  fp_mov(c,0,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x160u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,15,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_arith(c,2,15,3);
L8c0a5a3c:;
  R(0)=0x8c0a5afcu;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,15);
  { uint32_t k=!c->t; R(14)=R(11); if(k) goto L8c0a5a48; }
  fp_mov(c,15,4);
L8c0a5a48:;
  R(6)=0x158u;
  R(14)+=0x58u;
  R(5)=LD32(R(15)+8);
  R(8)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a5a56u; R(4)=R(14); f_8c05e5f4(c); }
  R(0)=0x1ecu;
  R(5)=R(14);
  R(9)=LD32(R(15));
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(9));
  R(0)=0x188u;
  fp_arith(c,2,2,3);
  R(6)=0x188u;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1f0u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(9));
  R(0)=0x18cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1f4u;
  fp_ld(c,3,R(0)+R(9));
  R(0)=0x190u;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(8); c->pr=0x8c0a5a84u; R(4)=R(14); sh4_call(c,tg); }
  R(6)=0x158u;
  R(3)=R(10);
  R(3)+=0x58u;
  R(6)+=R(15);
  ST32(R(15)+20,R(3));
  R(5)=LD32(R(15)+8);
  { uint32_t tg=R(8); c->pr=0x8c0a5a94u; R(4)=R(3); sh4_call(c,tg); }
  R(6)=0x188u;
  R(5)=LD32(R(15)+20);
  R(3)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0a5aa0u; R(4)=R(5); f_8c05e612(c); }
  R(14)=0x0u;
  R(12)=0x8c0cbe00u;
  R(2)=R(14);
  R(3)=0x1u;
  ST32(R(15)+24,R(2));
  R(13)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(12));
  R(4)=R(15);
  R(2)=0x8c0a8880u;
  R(7)=LD32(R(15)+44);
  { c->pr=0x8c0a5ac0u; R(4)+=0x10u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0a5acc; }
  {  goto L8c0a656e; }
L8c0a5acc:;
  R(7)=0x11cu;
  R(5)=LD32(R(12));
  R(3)=0x8c092500u;
  R(7)+=R(15);
  R(6)=LD32(R(15));
  { c->pr=0x8c0a5adau; R(4)=LD32(R(15)+4); f_8c092500(c); }
  { R(9)=0x0u; goto L8c0a5b8e; }
L8c0a5b20:;
  c->macl=R(9)*R(11);
  R(3)=LD32(R(12));
  R(0)=0x2eu;
  R(11)=c->macl;
  R(11)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(11)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a5b8c;
  R(10)=LD32(R(11)+32);
  ST32(R(15)+52,R(10));
  R(10)=LD32(R(10)+12);
  R(0)=R(10);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a5b54;
  R(0)=(int32_t)(int16_t)LD16(R(10)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c0a5b54;
  { R(2)=0x1u; goto L8c0a5b56; }
L8c0a5b54:;
  R(2)=0x0u;
L8c0a5b56:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a5b8c;
  R(0)=R(10);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a5b72;
  R(0)=(int32_t)(int16_t)LD16(R(10)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a5b72;
  { R(3)=0x1u; goto L8c0a5b74; }
L8c0a5b72:;
  R(3)=0x0u;
L8c0a5b74:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5b8c;
  R(3)=0x8c090d60u;
  R(5)=R(11);
  R(5)+=0x4u;
  { c->pr=0x8c0a5b84u; R(4)=LD32(R(15)); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a5b8c;
  R(14)=R(11);
L8c0a5b8c:;
  R(9)+=0x1u;
L8c0a5b8e:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  { uint32_t k=c->t; R(11)=0x68u; if(k) goto L8c0a5b9a; }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0a5b20;
L8c0a5b9a:;
  { R(9)=0x0u; goto L8c0a5bde; }
L8c0a5b9e:;
  c->macl=R(9)*R(11);
  R(3)=LD32(R(12));
  R(0)=0x2eu;
  R(10)=c->macl;
  R(10)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a5bdc;
  R(3)=0x8c090dacu;
  R(5)=R(10);
  R(5)+=0x4u;
  { c->pr=0x8c0a5bc2u; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a5bdc;
  R(3)=0x0u;
  ST32(R(15)+24,R(10));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x1u;
  R(5)=LD32(R(15)+36);
  R(2)=0x8c0a8f0eu;
  R(7)=LD32(R(15)+28);
  { c->pr=0x8c0a5bdau; R(4)=LD32(R(15)+4); f_8c0a8f0e(c); }
  R(15)+=0x4u;
L8c0a5bdc:;
  R(9)+=0x1u;
L8c0a5bde:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(c->t) goto L8c0a5bea;
  R(1)=LD32(R(15)+24);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a5b9e;
L8c0a5bea:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0a5bf2;
  {  goto L8c0a5d3a; }
L8c0a5bf2:;
  R(0)=0x18u;
  R(1)=0x0u;
  ST8(R(15)+R(0),R(1));
  { R(3)=R(1); goto L8c0a5d24; }
L8c0a5c20:;
  R(10)=LD32(R(15)+28);
  R(0)=0x2eu;
  R(3)=LD32(R(12));
  c->macl=R(10)*R(11);
  R(10)=c->macl;
  R(10)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a5c40;
  {  goto L8c0a5d20; }
L8c0a5c40:;
  R(3)=0x8c05e55cu;
  R(5)=R(14);
  R(4)=R(10);
  R(5)+=0x4u;
  { c->pr=0x8c0a5c4cu; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c0a5ce8u;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0a5d20;
  R(4)=0x188u;
  R(5)=R(10);
  R(2)=0x8c05e612u;
  R(6)=R(14);
  R(6)+=0x10u;
  R(5)+=0x10u;
  { c->pr=0x8c0a5c66u; R(4)+=R(15); f_8c05e612(c); }
  R(4)=0x188u;
  R(5)=R(14);
  R(3)=0x8c05e55cu;
  R(5)+=0x4u;
  { c->pr=0x8c0a5c72u; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x8c0a5cf0u;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0a5d20;
  R(4)=0x11cu;
  R(5)=R(10);
  R(2)=0x8c05e55cu;
  R(5)+=0x4u;
  { c->pr=0x8c0a5c88u; R(4)+=R(15); f_8c05e55c(c); }
  R(4)=LD32(R(10)+32);
  ST32(R(15)+48,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; fp_mov(c,4,0); if(k) goto L8c0a5ca4; }
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c0a5ca4;
  { R(2)=0x1u; goto L8c0a5ca6; }
L8c0a5ca4:;
  R(2)=0x0u;
L8c0a5ca6:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a5d12;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a5d00;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a5d00;
  { R(3)=0x1u; goto L8c0a5d02; }
L8c0a5d00:;
  R(3)=0x0u;
L8c0a5d02:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5d12;
  R(0)=0x18u;
  R(2)=0x1u;
  R(13)=0x0u;
  { ST8(R(15)+R(0),R(2)); goto L8c0a5d20; }
L8c0a5d12:;
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0a5d20;
  R(0)=0x44u;
  R(13)=R(10);
  fp_st(c,4,R(0)+R(15));
L8c0a5d20:;
  R(3)=LD32(R(15)+28);
  R(3)+=0x1u;
L8c0a5d24:;
  R(1)=R(3);
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(c->t) goto L8c0a5d3a;
  R(0)=0x18u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5d3a;
  {  goto L8c0a5c20; }
L8c0a5d3a:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0a5dce;
  R(0)=LD32(R(13)+32);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a5d58;
  R(0)=LD32(R(13)+32);
  R(0)=LD32(R(0)+12);
  R(0)=(int32_t)(int16_t)LD16(R(0)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c0a5d58;
  { R(2)=0x1u; goto L8c0a5d5a; }
L8c0a5d58:;
  R(2)=0x0u;
L8c0a5d5a:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a5dce;
  R(0)=LD32(R(13)+32);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a5da0;
  R(2)=LD32(R(13)+32);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a5da0;
  { R(3)=0x1u; goto L8c0a5da2; }
L8c0a5da0:;
  R(3)=0x0u;
L8c0a5da2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5dce;
  R(3)=0x8c090d60u;
  R(5)=R(13);
  R(5)+=0x4u;
  { c->pr=0x8c0a5db2u; R(4)=LD32(R(15)); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a5dce;
  R(3)=0x8c05e55cu;
  R(5)=R(14);
  R(4)=R(13);
  R(5)+=0x4u;
  { c->pr=0x8c0a5dc4u; R(4)+=0x4u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c0a5dce;
  R(13)=0x0u;
L8c0a5dce:;
  R(4)=LD32(R(15));
  R(3)=0x4000u;
  R(4)=LD32(R(4)+12);
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c0a5ddc;
  {  goto L8c0a5edc; }
L8c0a5ddc:;
  R(1)=0x170u;
  R(0)=LD32(R(15));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a5dee;
  {  goto L8c0a5edc; }
L8c0a5dee:;
  R(2)=0x10u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c0a5df8;
  {  goto L8c0a5edc; }
L8c0a5df8:;
  R(0)=0x160u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a5edc;
  R(2)=0x0u;
  { ST32(R(15)+24,R(2)); goto L8c0a5ed4; }
L8c0a5e08:;
  R(10)=LD32(R(15)+24);
  R(0)=0x2eu;
  R(3)=LD32(R(12));
  c->macl=R(10)*R(11);
  R(10)=c->macl;
  R(10)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a5ece;
  R(0)=LD32(R(10)+32);
  R(2)=R(15);
  R(2)+=0x48u;
  ST32(R(15)+44,R(0));
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; ST32(R(2),R(0)); if(k) goto L8c0a5e80; }
  R(0)=0x48u;
  R(3)=0x8000u;
  R(2)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(2)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a5e80;
  { R(3)=0x1u; goto L8c0a5e82; }
L8c0a5e80:;
  R(3)=0x0u;
L8c0a5e82:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5ece;
  R(3)=0x8c090dacu;
  R(5)=R(10);
  R(5)+=0x4u;
  { c->pr=0x8c0a5e92u; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a5ece;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0a5ea0u; R(4)=LD32(R(15)+16); f_8c05e6ea(c); }
  R(14)=LD32(R(15));
  R(0)=0x3cu;
  R(3)=0x10000u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,3,R(0)+R(14));
  R(2)=LD32(R(14)+12);
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
  R(1)=LD32(R(15)+28);
  R(2)=0x8c0a8f0eu;
  R(1)+=0xffffffffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(15)+36);
  R(7)=LD32(R(12));
  { c->pr=0x8c0a5ecau; R(4)=R(14); f_8c0a8f0e(c); }
  { R(15)+=0x4u; goto L8c0a65ae; }
L8c0a5ece:;
  R(3)=LD32(R(15)+24);
  R(3)+=0x1u;
  ST32(R(15)+24,R(3));
L8c0a5ed4:;
  R(1)=LD32(R(15)+24);
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(!c->t) goto L8c0a5e08;
L8c0a5edc:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0a5ee8;
  R(3)=LD32(R(15)+28);
  c->t=(int32_t)R(3)>(int32_t)R(9);
  if(!c->t) goto L8c0a5ee8;
  R(9)=LD32(R(15)+28);
L8c0a5ee8:;
  R(3)=R(9);
  R(3)+=0xffffffffu;
  ST32(R(15)+24,R(3));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  R(2)=0x8c0a8f0eu;
  R(7)=LD32(R(12));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a5efcu; R(4)=LD32(R(15)+4); f_8c0a8f0e(c); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0a5f06; }
  {  goto L8c0a6260; }
L8c0a5f06:;
  R(3)=0x1ecu;
  R(5)=R(14);
  R(2)=0x8c05e6eau;
  R(5)+=0x4u;
  R(4)=LD32(R(15));
  { c->pr=0x8c0a5f14u; R(4)+=R(3); f_8c05e6ea(c); }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0a5f1c;
  {  goto L8c0a6060; }
L8c0a5f1c:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0a5f60; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a5f60;
  { R(3)=0x0u; goto L8c0a5f62; }
L8c0a5f60:;
  R(3)=0x1u;
L8c0a5f62:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a5f82;
  R(5)=LD32(R(15)+20);
  R(6)=R(14);
  R(4)=0x188u;
  R(6)+=0x30u;
  { uint32_t tg=R(8); c->pr=0x8c0a5f74u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x188u;
  R(3)=0x8c01638au;
  R(5)+=R(15);
  { c->pr=0x8c0a5f7eu; R(4)=LD32(R(15)+12); f_8c01638a(c); }
  {  goto L8c0a6454; }
L8c0a5f82:;
  { R(9)=0x0u; goto L8c0a600c; }
L8c0a5f86:;
  c->macl=R(9)*R(11);
  R(3)=LD32(R(12));
  R(0)=0x2eu;
  R(10)=c->macl;
  R(10)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a600a;
  R(3)=0x8c090d60u;
  R(5)=R(10);
  R(5)+=0x4u;
  { c->pr=0x8c0a5faau; R(4)=LD32(R(15)); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a600a;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0a6000;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(10)+R(0));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a6000;
  { R(2)=0x0u; goto L8c0a6002; }
L8c0a6000:;
  R(2)=0x1u;
L8c0a6002:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a600a;
  R(13)=R(10);
L8c0a600a:;
  R(9)+=0x1u;
L8c0a600c:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(c->t) goto L8c0a6016;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0a5f86;
L8c0a6016:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0a601e;
  { R(6)=R(13); goto L8c0a6020; }
L8c0a601e:;
  R(6)=R(14);
L8c0a6020:;
  R(4)=0x188u;
  R(6)+=0x30u;
  R(5)=LD32(R(15)+20);
  { uint32_t tg=R(8); c->pr=0x8c0a602au; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x188u;
  R(3)=0x8c01638au;
  R(5)+=R(15);
  { c->pr=0x8c0a6034u; R(4)=LD32(R(15)+12); f_8c01638a(c); }
  {  goto L8c0a6454; }
L8c0a6060:;
  if(!c->t) goto L8c0a6066;
  {  goto L8c0a6140; }
L8c0a6066:;
  fp_ld(c,2,R(13));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a6078;
  {  goto L8c0a6140; }
L8c0a6078:;
  R(1)=0x8c0cbdb8u;
  R(2)=0x2u;
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c0a608a;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0a6140;
L8c0a608a:;
  R(2)=LD32(R(15)+24);
  R(4)=0x180u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(12));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a609cu; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(4)=0x17cu;
  R(5)=R(14);
  R(2)=0x8c05e55cu;
  R(5)+=0x4u;
  { c->pr=0x8c0a60aau; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x4u;
  fp_mov(c,2,0);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x188u;
  fp_arith(c,2,2,3);
  fp_mov(c,4,0);
  R(6)=0x188u;
  R(5)=0x17cu;
  R(4)=0x17cu;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0x18cu;
  R(3)=0x8c05e612u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x190u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0a60deu; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x17cu;
  R(6)=R(14);
  R(4)=0x17cu;
  R(6)+=0x30u;
  R(5)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0a60ecu; R(4)+=R(15); sh4_call(c,tg); }
  R(6)=0x17cu;
  R(5)=LD32(R(15)+20);
  R(4)=0x134u;
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0a60f8u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x134u;
  R(4)=0x188u;
  R(3)=0x8c05e612u;
  R(5)+=R(15);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a6106u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x170u;
  R(6)=0x188u;
  R(4)=0x170u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0a6116u; R(4)+=R(15); f_8c05e612(c); }
  {  goto L8c0a614a; }
L8c0a6140:;
  R(3)=0x8c05e6eau;
  R(4)=0x134u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0a614au; R(4)+=R(15); f_8c05e6ea(c); }
L8c0a614a:;
  R(5)=0x134u;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0a6154u; R(4)=LD32(R(15)+16); f_8c05e6ea(c); }
  R(3)=R(13);
  R(2)=0x1u;
  R(3)+=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x178u;
  R(7)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)+=0x4u;
  R(5)=LD32(R(15)+8);
  R(6)+=R(15);
  R(3)=0x8c0a454eu;
  R(4)=0x154u;
  fp_mov(c,4,14);
  { c->pr=0x8c0a6172u; R(4)+=R(15); f_8c0a454e(c); }
  R(15)+=0x8u;
  R(2)=0x8c05e55cu;
  R(4)=0x8c2e897cu;
  R(5)=0x14cu;
  { c->pr=0x8c0a617eu; R(5)+=R(15); f_8c05e55c(c); }
  R(0)=0x14cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,4,6);
  fp_arith(c,0,4,13);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_mov(c,5,0); if(k) goto L8c0a6192; }
  { fp_mov(c,3,4); goto L8c0a619c; }
L8c0a6192:;
  fp_mov(c,2,6);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a619c:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a6212;
  R(0)=0x150u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a61b4;
  R(0)=0x150u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a61be; }
L8c0a61b4:;
  R(0)=0x150u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a61be:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a6212;
  R(0)=0x154u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a6200;
  R(0)=0x154u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a620a; }
L8c0a6200:;
  R(0)=0x154u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a620a:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a6212;
  { R(3)=0x1u; goto L8c0a6214; }
L8c0a6212:;
  R(3)=0x0u;
L8c0a6214:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a6224;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,5);
  if(c->t) goto L8c0a6224;
  {  goto L8c0a63be; }
L8c0a6224:;
  R(5)=0x134u;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0a622eu; R(4)=LD32(R(15)+16); f_8c05e6ea(c); }
  {  goto L8c0a6454; }
L8c0a6260:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0a6268;
  {  goto L8c0a640e; }
L8c0a6268:;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(4)=0x180u;
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(12));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a6278u; R(4)+=R(15); f_8c0a94c0(c); }
  R(6)=0x180u;
  R(5)=LD32(R(15)+24);
  R(4)=0x138u;
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0a6284u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x138u;
  R(4)=0x18cu;
  R(3)=0x8c05e612u;
  R(5)+=R(15);
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a6292u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x174u;
  R(6)=0x18cu;
  R(4)=0x174u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0a62a2u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x138u;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0a62acu; R(4)=LD32(R(15)+20); f_8c05e6ea(c); }
  R(3)=R(13);
  R(2)=0x1u;
  R(3)+=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x17cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=0x158u;
  R(6)+=R(15);
  R(5)=LD32(R(15)+12);
  R(7)=LD32(R(15)+48);
  R(3)=0x8c0a454eu;
  fp_mov(c,4,14);
  { c->pr=0x8c0a62c8u; R(4)+=R(15); f_8c0a454e(c); }
  R(15)+=0xcu;
  R(2)=0x8c05e55cu;
  R(4)=0x8c2e897cu;
  R(5)=0x14cu;
  { c->pr=0x8c0a62d4u; R(5)+=R(15); f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0a62f6;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0a62e4u; R(4)=LD32(R(15)+16); f_8c05e6ea(c); }
  R(14)=LD32(R(15));
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(14));
L8c0a62f0:;
  R(0)=0x44u;
  { fp_st(c,3,R(0)+R(14)); goto L8c0a65ae; }
L8c0a62f6:;
  R(0)=0x14cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,0,4,13);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a6360;
  { fp_mov(c,3,4); goto L8c0a636a; }
L8c0a6360:;
  fp_mov(c,2,5);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a636a:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a63b6;
  R(0)=0x150u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a6382;
  R(0)=0x150u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a638c; }
L8c0a6382:;
  R(0)=0x150u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a638c:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a63b6;
  R(0)=0x154u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a63a4;
  R(0)=0x154u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a63ae; }
L8c0a63a4:;
  R(0)=0x154u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a63ae:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a63b6;
  { R(3)=0x1u; goto L8c0a63b8; }
L8c0a63b6:;
  R(3)=0x0u;
L8c0a63b8:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a6400;
L8c0a63be:;
  R(5)=LD32(R(15)+32);
  fp_mov(c,4,14);
  { c->pr=0x8c0a63c6u; R(4)=LD32(R(15)); f_8c0a5620(c); }
  {  goto L8c0a6562; }
L8c0a6400:;
  R(5)=0x134u;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0a640au; R(4)=LD32(R(15)+16); f_8c05e6ea(c); }
  {  goto L8c0a6454; }
L8c0a640e:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+40);
  { c->pr=0x8c0a6418u; R(4)=LD32(R(15)+12); f_8c0685b4(c); }
  R(2)=LD32(R(15));
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(2));
  R(0)=0x40u;
  R(3)=LD32(R(15));
  R(1)=0x10000u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0x44u;
  R(3)=LD32(R(15));
  fp_st(c,3,R(0)+R(3));
  R(3)=LD32(R(15));
  R(2)=R(3);
  R(0)=LD32(R(2)+12);
  R(0)|=R(1);
  ST32(R(2)+12,R(0));
  ST32(R(3)+12,R(0));
  R(3)=LD32(R(15));
  R(2)=0x4000u;
  R(3)=LD32(R(3)+12);
  c->t=(R(3)&R(2))==0;
  if(!c->t) goto L8c0a6448;
  {  goto L8c0a65ae; }
L8c0a6448:;
  R(0)=0x170u;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+R(0));
  R(3)=LD32(R(4));
  { ST32(R(4)+4,R(3)); goto L8c0a65ae; }
L8c0a6454:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0a645c;
  {  goto L8c0a6562; }
L8c0a645c:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0a64a0;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a64a0;
  { R(2)=0x0u; goto L8c0a64a2; }
L8c0a64a0:;
  R(2)=0x1u;
L8c0a64a2:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a6562;
  R(3)=0x8c05e612u;
  R(14)+=0x4u;
  R(4)=0x188u;
  R(5)=R(14);
  R(6)=LD32(R(15)+36);
  { c->pr=0x8c0a64b6u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0x188u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,5,4);
  fp_arith(c,0,5,13);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a64c8;
  { fp_mov(c,3,5); goto L8c0a64d2; }
L8c0a64c8:;
  fp_mov(c,2,4);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a64d2:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a6552;
  R(0)=0x18cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a64ea;
  R(0)=0x18cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a64f4; }
L8c0a64ea:;
  R(0)=0x18cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a64f4:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a6552;
  R(0)=0x190u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,13);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a6540;
  R(0)=0x190u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,13); goto L8c0a654a; }
L8c0a6540:;
  R(0)=0x190u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a654a:;
  fp_cmp(c,1,12,3);
  if(!c->t) goto L8c0a6552;
  { R(3)=0x1u; goto L8c0a6554; }
L8c0a6552:;
  R(3)=0x0u;
L8c0a6554:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a6562;
  R(3)=0x8c0a4960u;
  R(5)=R(14);
  { c->pr=0x8c0a6562u; R(4)=LD32(R(15)); f_8c0a4960(c); }
L8c0a6562:;
  R(3)=0x8c091980u;
  fp_mov(c,4,14);
  { c->pr=0x8c0a656au; R(4)=LD32(R(15)); f_8c091980(c); }
  {  goto L8c0a65ae; }
L8c0a656e:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+40);
  { c->pr=0x8c0a6578u; R(4)=LD32(R(15)+12); f_8c0685b4(c); }
  R(2)=LD32(R(15));
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(2));
  R(0)=0x40u;
  R(3)=LD32(R(15));
  R(1)=0x10000u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0x44u;
  R(3)=LD32(R(15));
  fp_st(c,3,R(0)+R(3));
  R(3)=LD32(R(15));
  R(2)=R(3);
  R(0)=LD32(R(2)+12);
  R(0)|=R(1);
  ST32(R(2)+12,R(0));
  ST32(R(3)+12,R(0));
  R(3)=LD32(R(15));
  R(2)=0x4000u;
  R(3)=LD32(R(3)+12);
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c0a65ae;
  R(0)=0x170u;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+R(0));
  R(3)=LD32(R(4));
  ST32(R(4)+4,R(3));
L8c0a65ae:;
  R(1)=0x194u;
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
void f_8c0a6600(SH4Ctx *c) {
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
  R(0)=0xfffffdc0u;
  R(15)+=R(0);
  R(0)=0x24u;
  ST32(R(15),R(4));
  R(3)=0x1u;
  R(4)=0x170u;
  R(8)=0x0u;
  ST32(R(15)+28,R(5));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x3cu;
  ST8(R(15)+R(0),R(3));
  R(0)=0x44u;
  R(3)=R(8);
  ST8(R(15)+R(0),R(3));
  R(4)+=R(15);
  R(0)=0x8c0a6780u;
  R(9)=R(4);
  R(12)=R(4);
  R(4)=LD32(R(15));
  fp_ld(c,13,R(0));
  R(0)=0x14u;
  fp_ld(c,14,R(0)+R(4));
  R(12)+=0x68u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x40u;
  fp_unary(c,0,14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xccu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xd0u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xd4u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(14)=R(3);
  R(0)=0x9cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa0u;
  R(2)=0xe0u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xa4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x88u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8cu;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(15));
  R(2)+=R(3);
  ST32(R(15)+40,R(2));
  R(3)=LD32(R(15));
  R(2)=0x4000u;
  R(1)=LD32(R(3)+12);
  R(13)=LD32(R(15));
  c->t=(R(1)&R(2))==0;
  { uint32_t k=c->t; R(13)+=0x78u; if(k) goto L8c0a6698; }
  R(0)=0x170u;
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+R(0));
  R(14)+=0x30u;
L8c0a6698:;
  R(5)=LD32(R(15)+40);
  R(6)=0x68u;
  R(11)=0x8c0685b4u;
  { c->pr=0x8c0a66a2u; R(4)=R(9); f_8c0685b4(c); }
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c0a66aau; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c0480b8u;
  { c->pr=0x8c0a66b0u; R(4)=LD32(R(15)+28); f_8c0480b8(c); }
  R(2)=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>(int32_t)R(2);
  if(!c->t) goto L8c0a66d6;
  R(5)=LD32(R(15));
  R(6)=0x68u;
  R(13)=0x108u;
  R(5)+=0x78u;
  R(13)+=R(15);
  { uint32_t tg=R(11); c->pr=0x8c0a66c6u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  R(4)=R(13);
  R(2)=0x8c01638au;
  R(5)=R(3);
  ST32(R(15)+48,R(3));
  R(3)=0x1c8u;
  { c->pr=0x8c0a66d6u; R(5)+=R(3); f_8c01638a(c); }
L8c0a66d6:;
  R(2)=LD32(R(15)+40);
  R(3)=R(13);
  R(4)=0xd8u;
  R(3)+=0x58u;
  R(2)+=0x58u;
  R(6)=R(3);
  ST32(R(15)+24,R(2));
  R(2)=0x8c05e612u;
  ST32(R(15)+16,R(3));
  R(5)=LD32(R(15)+24);
  { c->pr=0x8c0a66eeu; R(4)+=R(15); f_8c05e612(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0a67c6;
  R(3)=0x8c0cbdb8u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a67c6;
  R(2)=0x1u;
  R(3)=0x8c0cbe00u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  R(4)=R(15);
  R(1)=0x8c0a8880u;
  R(7)=LD32(R(15)+40);
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a6716u; R(4)+=0x10u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0a67c6; }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092610u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15));
  { c->pr=0x8c0a672au; R(4)=LD32(R(15)+4); f_8c092610(c); }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092b06u;
  R(5)=LD32(R(3));
  { c->pr=0x8c0a6734u; R(4)=LD32(R(15)+4); f_8c092b06(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=0xa0u;
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(2));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a6748u; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(6)=0x9cu;
  R(5)=LD32(R(15)+16);
  R(6)+=R(15);
  { R(4)=R(5); goto L8c0a67c0; }
L8c0a67c0:;
  R(3)=0x8c05e5f4u;
  { c->pr=0x8c0a67c6u;  f_8c05e5f4(c); }
L8c0a67c6:;
  R(10)=0x8c0cbdb8u;
  R(3)=0x3u;
  R(2)=LD32(R(10));
  R(2)+=0x1u;
  R(1)=R(2);
  c->t=(int32_t)R(1)>(int32_t)R(3);
  ST32(R(10),R(2));
  if(!c->t) goto L8c0a68a0;
  R(14)=LD32(R(15));
  R(0)=0x1u;
  R(2)=0x2000000u;
  R(1)=LD32(R(14)+12);
  R(6)=R(14);
  R(3)=0x8c0cbe00u;
  R(1)|=R(2);
  ST32(R(14)+12,R(1));
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  R(4)=R(15);
  R(7)=LD32(R(15)+40);
  R(1)=0x8c0a8880u;
  { c->pr=0x8c0a67f8u; R(4)+=0x10u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0a6838; }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092610u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15));
  { c->pr=0x8c0a680cu; R(4)=LD32(R(15)+4); f_8c092610(c); }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092b06u;
  R(5)=LD32(R(3));
  { c->pr=0x8c0a6816u; R(4)=LD32(R(15)+4); f_8c092b06(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=0xa0u;
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(2));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a682au; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(6)=0x9cu;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a6838u; R(4)=R(5); f_8c05e5f4(c); }
L8c0a6838:;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c0a6840u; R(4)=LD32(R(15)+24); f_8c05e6ea(c); }
  R(14)=LD32(R(15));
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x40u;
  R(1)=0x8c0a8378u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x44u;
  { fp_st(c,3,R(0)+R(14)); goto L8c0a8378; }
L8c0a68a0:;
  R(3)=0xccu;
  c->t=(R(14)&R(14))==0;
  R(3)+=R(15);
  { uint32_t k=c->t; ST32(R(15)+20,R(3)); if(k) goto L8c0a68de; }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c0a68de;
  R(2)=R(14);
  R(2)+=0x4u;
  c->fr[3]=0x00000000u;
  ST32(R(15)+20,R(2));
  fp_ld(c,2,R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a68de;
  R(2)=LD32(R(15)+20);
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a68de;
  R(2)=LD32(R(15)+20);
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(2));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a68de;
  R(2)=0xccu;
  R(2)+=R(15);
  ST32(R(15)+20,R(2));
L8c0a68de:;
  R(14)=LD32(R(15)+20);
  R(4)=0xd8u;
  R(3)=0x8c05e55cu;
  R(5)=R(14);
  { c->pr=0x8c0a68eau; R(4)+=R(15); f_8c05e55c(c); }
  fp_ld(c,3,R(14));
  fp_mov(c,2,0);
  fp_arith(c,2,2,3);
  R(0)=0xc0u;
  fp_mov(c,4,0);
  R(6)=0xc0u;
  R(5)=0xd8u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  R(5)+=R(15);
  fp_mov(c,2,4);
  R(6)+=R(15);
  fp_arith(c,2,2,3);
  R(0)=0xc4u;
  R(4)=0xb4u;
  R(3)=0x8c05e612u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xc8u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0a691cu; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xb4u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xb8u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xbcu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c0a6978u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c0a6980;
  R(0)=0xb4u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,3,2,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xb8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,3,2,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xbcu;
  fp_ld(c,2,R(0)+R(15));
  { fp_arith(c,3,2,15); goto L8c0a698a; }
L8c0a6980:;
  R(0)=0x60u;
  c->fr[2]=0x00000000u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,2,R(0)+R(15));
L8c0a698a:;
  R(0)=0x68u;
  R(14)=0x8c0cbdbcu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c0a69e4u;
  fp_ld(c,12,R(0));
  R(0)=LD32(R(10));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a6a00;
  fp_cmp(c,1,15,12);
  if(c->t) goto L8c0a69b4;
  R(3)=LD32(R(15));
  R(2)=0x2000000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(!c->t) goto L8c0a69b4;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c0a69b4;
  { R(2)=0x0u; goto L8c0a69b6; }
L8c0a69b4:;
  R(2)=0x1u;
L8c0a69b6:;
  ST8(R(14),R(2));
  R(1)=LD32(R(15));
  R(2)=0xfdffffffu;
  R(3)=R(1);
  R(0)=LD32(R(3)+12);
  R(0)&=R(2);
  ST32(R(3)+12,R(0));
  { ST32(R(1)+12,R(0)); goto L8c0a6a14; }
L8c0a6a00:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a6a14;
  R(3)=LD32(R(15));
  R(2)=0x2000000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0a6a14;
  R(0)=0x1u;
  ST8(R(14),R(0));
L8c0a6a14:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0a6ac0;
  R(0)=0x2a8u;
  R(2)=LD32(R(15));
  R(0)=LD32(R(2)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a6ac0;
  R(3)=0x308u;
  R(6)=LD32(R(15));
  R(4)=0xa8u;
  R(5)=LD32(R(15)+24);
  R(6)+=R(3);
  R(2)=0x8c05e612u;
  { c->pr=0x8c0a6a3eu; R(4)+=R(15); f_8c05e612(c); }
  R(3)=0x8c05e55cu;
  R(4)=0xa8u;
  R(5)=LD32(R(15)+20);
  { c->pr=0x8c0a6a48u; R(4)+=R(15); f_8c05e55c(c); }
  R(2)=LD32(R(15)+20);
  fp_mov(c,2,0);
  fp_ld(c,3,R(2));
  R(0)=0xfcu;
  fp_arith(c,2,2,3);
  fp_mov(c,4,0);
  R(6)=0xfcu;
  R(5)=0xa8u;
  R(4)=0xa8u;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x104u;
  fp_arith(c,2,4,3);
  R(3)=0x8c05e612u;
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0a6a80u; R(4)+=R(15); f_8c05e612(c); }
  {  goto L8c0a6acc; }
L8c0a6ac0:;
  R(5)=0xb4u;
  R(4)=0xa8u;
  R(3)=0x8c05e6eau;
  R(5)+=R(15);
  { c->pr=0x8c0a6accu; R(4)+=R(15); f_8c05e6ea(c); }
L8c0a6acc:;
  R(0)=0x8c0a6b70u;
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c0a6ba0;
  R(0)=0xc4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xc0u;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0a6ba0;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0a6b0c;
  R(0)=0x2a8u;
  R(2)=LD32(R(15));
  R(0)=LD32(R(2)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a6ba0;
L8c0a6b0c:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c0a6ba0;
  R(0)=0x24u;
  R(3)=0x8c0a4ae0u;
  R(5)=LD32(R(15)+28);
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0a6b20u; R(4)=LD32(R(15)); f_8c0a4ae0(c); }
  R(4)=0x8c2e8700u;
  R(0)=LD32(R(4));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c0a6b2e;
  R(2)=0x8c0a8378u;
  {  goto L8c0a8378; }
L8c0a6b2e:;
  R(3)=0x8c091130u;
  R(5)=R(4);
  R(5)+=0x6cu;
  { c->pr=0x8c0a6b38u; R(4)=LD32(R(15)); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c0a6b46;
  R(3)=0x8c0a8378u;
  {  goto L8c0a8378; }
L8c0a6b46:;
  R(2)=LD32(R(15));
  R(1)=0x8000u;
  R(3)=R(2);
  R(0)=LD32(R(3)+12);
  R(0)|=R(1);
  R(1)=0x8c0a8378u;
  ST32(R(3)+12,R(0));
  { ST32(R(2)+12,R(0)); goto L8c0a8378; }
L8c0a6ba0:;
  R(0)=0x24u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,14,15);
  fp_ld(c,4,R(0)+R(3));
  R(0)=0x8c0a6c68u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,14,5);
  { uint32_t k=!c->t; fp_arith(c,2,4,3); if(k) goto L8c0a6bb8; }
  fp_mov(c,14,5);
L8c0a6bb8:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0a6bc6;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c0a6bc6;
  fp_mov(c,14,4);
L8c0a6bc6:;
  R(3)=R(9);
  R(2)=0x8c05e6eau;
  R(3)+=0x58u;
  ST32(R(15)+44,R(3));
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c0a6bd4u; R(4)=R(3); f_8c05e6ea(c); }
  R(6)=0xb4u;
  R(5)=LD32(R(15)+44);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a6be0u; R(4)=R(5); f_8c05e5f4(c); }
  R(2)=LD32(R(15)+20);
  fp_mov(c,2,14);
  fp_ld(c,3,R(2));
  R(0)=0xe4u;
  fp_arith(c,2,2,3);
  R(6)=0xe4u;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  fp_mov(c,2,14);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xe8u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xecu;
  fp_arith(c,2,14,3);
  R(3)=0x8c05e5f4u;
  fp_st(c,14,R(0)+R(15));
  R(5)=LD32(R(15)+44);
  { c->pr=0x8c0a6c12u; R(4)=R(5); f_8c05e5f4(c); }
  R(2)=0x0u;
  ST32(R(15)+8,R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a6cc4;
  R(5)=LD32(R(15)+16);
  R(14)=R(12);
  R(3)=0x8c05e6eau;
  R(14)+=0x58u;
  { c->pr=0x8c0a6c28u; R(4)=R(14); f_8c05e6ea(c); }
  R(6)=0xb4u;
  R(5)=R(14);
  R(2)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a6c34u; R(4)=R(14); f_8c05e5f4(c); }
  R(3)=0x1u;
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(2));
  R(4)=R(15);
  R(1)=0x8c0a8880u;
  R(7)=LD32(R(15)+40);
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a6c4cu; R(4)+=0x14u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0a6cc4; }
  { R(2)=0x0u; goto L8c0a6cba; }
L8c0a6c80:;
  R(2)=LD32(R(15)+48);
  R(3)=0x68u;
  R(0)=0x2eu;
  c->macl=R(2)*R(3);
  R(2)=0x8c0cbe00u;
  R(1)=LD32(R(2));
  R(14)=c->macl;
  R(14)+=R(1);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a6cb6;
  R(3)=0x8c090d60u;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0a6caau; R(4)=LD32(R(15)); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a6cb6;
  R(0)=0x2eu;
  R(3)=0x63u;
  ST16(R(14)+R(0),R(3));
L8c0a6cb6:;
  R(2)=LD32(R(15)+48);
  R(2)+=0x1u;
L8c0a6cba:;
  R(1)=R(2);
  ST32(R(15)+48,R(2));
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(!c->t) goto L8c0a6c80;
L8c0a6cc4:;
  R(0)=0x40u;
  fp_mov(c,3,15);
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x8c0a6dd4u;
  fp_ld(c,4,R(0));
  fp_arith(c,2,15,3);
  fp_cmp(c,1,4,15);
  { uint32_t k=!c->t; R(14)=R(12); if(k) goto L8c0a6cd8; }
  fp_mov(c,15,4);
L8c0a6cd8:;
  R(3)=0x8c05e6eau;
  R(14)+=0x58u;
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c0a6ce2u; R(4)=R(14); f_8c05e6ea(c); }
  R(6)=0xb4u;
  R(5)=R(14);
  R(2)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a6ceeu; R(4)=R(14); f_8c05e5f4(c); }
  R(3)=LD32(R(15)+20);
  R(5)=R(14);
  fp_mov(c,2,15);
  fp_ld(c,3,R(3));
  R(0)=0xf0u;
  fp_arith(c,2,2,3);
  R(6)=0xf0u;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+20);
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xf4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0xf8u;
  fp_arith(c,2,15,3);
  R(3)=0x8c05e5f4u;
  fp_st(c,15,R(0)+R(15));
  { c->pr=0x8c0a6d20u; R(4)=R(14); f_8c05e5f4(c); }
  R(3)=LD32(R(15)+8);
  R(2)=0x4bu;
  R(1)=0x8c0cbbe8u;
  R(2)-=R(3);
  R(3)=0x1u;
  ST32(R(1),R(2));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x68u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+20);
  R(4)=R(15);
  R(3)=0x8c0a8880u;
  c->macl=R(0)*R(2);
  R(0)=0x8c0cbe00u;
  R(7)=LD32(R(15)+40);
  R(1)=LD32(R(0));
  R(5)=c->macl;
  R(6)=LD32(R(15)+12);
  R(5)+=R(1);
  { c->pr=0x8c0a6d4cu; R(4)+=0x10u; f_8c0a8880(c); }
  R(15)+=0xcu;
  R(2)=LD32(R(15)+4);
  R(1)=0x4bu;
  R(3)=LD32(R(15)+8);
  R(0)=0x8c0cbbe8u;
  R(2)+=R(3);
  c->t=(R(2)&R(2))==0;
  ST32(R(15)+4,R(2));
  { uint32_t k=!c->t; ST32(R(0),R(1)); if(k) goto L8c0a6d66; }
  R(3)=0x8c0a8300u;
  {  goto L8c0a8300; }
L8c0a6d66:;
  R(3)=R(15);
  R(3)+=0x38u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x68u;
  R(1)=LD32(R(15)+12);
  R(5)=LD32(R(15)+8);
  c->macl=R(1)*R(3);
  R(1)=0x8c0cbe00u;
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(1));
  R(6)=c->macl;
  R(7)=0xb8u;
  R(5)-=R(3);
  R(6)+=R(2);
  R(2)=0x8c091628u;
  R(7)+=R(15);
  { c->pr=0x8c0a6d8au; R(4)=LD32(R(15)+4); f_8c091628(c); }
  R(15)+=0x4u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+12,R(0)); if(k) goto L8c0a6e00; }
  R(2)=0xa8u;
  R(3)=0x68u;
  R(7)=R(0);
  R(2)+=R(15);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+12);
  R(5)=LD32(R(15)+8);
  c->macl=R(2)*R(3);
  R(3)=0x8c0cbe00u;
  R(1)=LD32(R(3));
  R(3)=R(2);
  R(6)=c->macl;
  R(5)-=R(3);
  R(3)=0x8c0917d0u;
  R(6)+=R(1);
  { c->pr=0x8c0a6db4u; R(4)=LD32(R(15)+4); f_8c0917d0(c); }
  R(15)+=0x4u;
  { R(4)=R(0); goto L8c0a6e02; }
L8c0a6e00:;
  R(4)=0x0u;
L8c0a6e02:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a6e2c;
  R(2)=0x8c0cbdb8u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a6e2c;
  R(2)=LD32(R(15)+8);
  R(3)=0x68u;
  R(5)=LD32(R(15)+4);
  c->macl=R(2)*R(3);
  R(2)=0x8c0cbe00u;
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(2));
  R(6)=c->macl;
  R(7)=LD32(R(15)+12);
  R(5)-=R(3);
  R(2)=0x8c0a9968u;
  R(6)+=R(1);
  { c->pr=0x8c0a6e2cu; R(4)=LD32(R(15)); f_8c0a9968(c); }
L8c0a6e2c:;
  R(0)=0x38u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a6e40;
  R(3)=0x8c0cbe00u;
  R(2)=0x8c091338u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15));
  { c->pr=0x8c0a6e40u; R(4)=LD32(R(15)+4); f_8c091338(c); }
L8c0a6e40:;
  R(3)=0x8c0cbe00u;
  R(2)=0x8c0914f8u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15));
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c0a6e4eu; R(4)=LD32(R(15)+4); f_8c0914f8(c); }
  R(3)=LD32(R(15)+12);
  R(7)=0xacu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cbe00u;
  R(7)+=R(15);
  R(2)=0x8c092258u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0a6e62u; R(4)=LD32(R(15)+8); f_8c092258(c); }
  R(15)+=0x4u;
  R(3)=0x8c092d8eu;
  { c->pr=0x8c0a6e6au; R(4)=LD32(R(15)+28); f_8c092d8e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a6e84;
  R(3)=0x8c0cbdb8u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a6e84;
  R(1)=0x8c0cbe00u;
  R(3)=0x8c0a9f8au;
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(1));
  { c->pr=0x8c0a6e84u; R(4)=LD32(R(15)); f_8c0a9f8a(c); }
L8c0a6e84:;
  R(2)=0x0u;
  R(3)=R(2);
  ST32(R(15)+32,R(2));
  ST32(R(15)+52,R(3));
  ST32(R(15)+48,R(2));
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a6f26;
  { R(12)=0x0u; goto L8c0a6f20; }
L8c0a6ee0:;
  R(14)=0x68u;
  R(2)=0x8c0cbe00u;
  c->macl=R(12)*R(14);
  R(3)=LD32(R(2));
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a6f1e;
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a6f1e;
  R(3)=0x8c090dacu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0a6f16u; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a6f1e;
  R(8)=0x1u;
L8c0a6f1e:;
  R(12)+=0x1u;
L8c0a6f20:;
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(12)>=(int32_t)R(3);
  if(!c->t) goto L8c0a6ee0;
L8c0a6f26:;
  { R(12)=0x0u; goto L8c0a708c; }
L8c0a6f2a:;
  R(14)=0x68u;
  R(2)=0x8c0cbe00u;
  c->macl=R(12)*R(14);
  R(3)=LD32(R(2));
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a6f4c;
  {  goto L8c0a708a; }
L8c0a6f4c:;
  R(3)=0x8c090dacu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0a6f56u; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a6fa0;
  R(3)=LD32(R(15)+12);
  c->t=R(3)==R(14);
  if(c->t) goto L8c0a6f66;
  {  goto L8c0a708a; }
L8c0a6f66:;
  { ST32(R(15)+48,R(12)); goto L8c0a708a; }
L8c0a6fa0:;
  R(0)=LD32(R(14)+40);
  R(0)&=0x2u;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0a6ff6;
  R(3)=LD32(R(15)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a6ff6;
  R(4)=LD32(R(14)+36);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a6ff6;
  R(2)=0x8c092bf2u;
  { c->pr=0x8c0a6fbau;  f_8c092bf2(c); }
  R(3)=0x8c05689eu;
  { c->pr=0x8c0a6fc0u; R(4)=R(0); f_8c05689e(c); }
  R(2)=0x4000000u;
  R(0)&=R(2);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a6ff6;
  R(3)=0x8c090dacu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0a6fd2u; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(5)=R(14); if(k) goto L8c0a6fdc; }
  ST32(R(15)+52,R(14));
L8c0a6fdc:;
  R(3)=0x8c090decu;
  { c->pr=0x8c0a6fe2u; R(4)=LD32(R(15)); f_8c090dec(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a6ff6;
  R(3)=0x8c0cbdb8u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a6ff6;
  R(0)=0x2eu;
  R(1)=0x63u;
  ST16(R(14)+R(0),R(1));
L8c0a6ff6:;
  R(3)=0x8c090d60u;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0a7000u; R(4)=LD32(R(15)); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a7080;
  R(3)=0x8c05e612u;
  R(5)=R(14);
  R(4)=0xfcu;
  R(5)+=0x10u;
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0a7014u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xfcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x100u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,4,3);
  fp_cmp(c,1,13,4);
  if(!c->t) goto L8c0a708a;
  ST32(R(15)+32,R(14));
  ST32(R(15)+48,R(12));
  { fp_mov(c,13,4); goto L8c0a708a; }
L8c0a7080:;
  R(2)=LD32(R(15)+32);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a708a;
  ST32(R(15)+32,R(14));
  ST32(R(15)+48,R(12));
L8c0a708a:;
  R(12)+=0x1u;
L8c0a708c:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(12)>=(int32_t)R(3);
  if(c->t) goto L8c0a7096;
  {  goto L8c0a6f2a; }
L8c0a7096:;
  R(1)=LD32(R(15)+48);
  R(3)=0x8c0cbe00u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+32);
  R(2)=0x8c0a8f0eu;
  R(7)=LD32(R(3));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a70a8u; R(4)=LD32(R(15)+4); f_8c0a8f0e(c); }
  R(15)+=0x4u;
  R(4)=LD32(R(15));
  R(3)=0x40u;
  R(4)=LD32(R(4)+12);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a7100;
  R(1)=0x200000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c0a7100;
  R(2)=LD32(R(15)+32);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a7100;
  R(6)=0xb4u;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a70ccu; R(4)=LD32(R(15)+24); f_8c05e5f4(c); }
  R(1)=0x8c0a8298u;
  {  goto L8c0a8298; }
L8c0a7100:;
  R(2)=LD32(R(15)+12);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a710a;
  {  goto L8c0a7dc0; }
L8c0a710a:;
  R(3)=0x8c091130u;
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c0a7112u; R(4)=LD32(R(15)); f_8c091130(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c0a7128;
  R(2)=LD32(R(15));
  R(1)=0x8000u;
  R(3)=R(2);
  R(0)=LD32(R(3)+12);
  R(0)|=R(1);
  ST32(R(3)+12,R(0));
  ST32(R(2)+12,R(0));
L8c0a7128:;
  R(3)=LD32(R(15)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a71c0;
  R(6)=LD32(R(15)+12);
  R(4)=0xfcu;
  R(3)=0x8c05e5f4u;
  R(6)+=0x30u;
  R(5)=LD32(R(15)+44);
  { c->pr=0x8c0a713cu; R(4)+=R(15); f_8c05e5f4(c); }
  R(5)=0xfcu;
  R(3)=0x8c01638au;
  R(5)+=R(15);
  { c->pr=0x8c0a7146u; R(4)=LD32(R(15)+40); f_8c01638a(c); }
  R(0)=LD32(R(10));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0a7152;
  R(2)=0x8c0a8298u;
  {  goto L8c0a8298; }
L8c0a7152:;
  R(3)=LD32(R(15));
  R(2)=0x4000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(!c->t) goto L8c0a7162;
  R(3)=0x8c0a8298u;
  {  goto L8c0a8298; }
L8c0a7162:;
  R(1)=0x170u;
  R(0)=LD32(R(15));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0a7176;
  R(3)=0x8c0a8298u;
  {  goto L8c0a8298; }
L8c0a7176:;
  R(2)=LD32(R(15));
  R(1)=0x800000u;
  R(3)=R(2);
  R(0)=LD32(R(3)+12);
  R(0)|=R(1);
  ST32(R(3)+12,R(0));
  R(3)=0x8c0a8298u;
  { ST32(R(2)+12,R(0)); goto L8c0a8298; }
L8c0a71c0:;
  R(2)=LD32(R(15)+52);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a71ca;
  {  goto L8c0a74a0; }
L8c0a71ca:;
  R(3)=0x8c0cbdb8u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0a71d6;
  {  goto L8c0a74a0; }
L8c0a71d6:;
  R(14)=LD32(R(15));
  R(4)=R(15);
  R(3)=0x2000000u;
  R(2)=LD32(R(14)+12);
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
  R(5)=LD32(R(15)+12);
  R(2)=0x8c05e6eau;
  R(5)+=0x4u;
  { c->pr=0x8c0a71ecu; R(4)+=0x54u; f_8c05e6ea(c); }
  R(3)=0x1u;
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0a8880u;
  R(4)=R(15);
  R(5)=LD32(R(2));
  R(7)=LD32(R(15)+40);
  { c->pr=0x8c0a7206u; R(4)+=0x10u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0a7212; }
  {  goto L8c0a7352; }
L8c0a7212:;
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092610u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15));
  { c->pr=0x8c0a721eu; R(4)=LD32(R(15)+4); f_8c092610(c); }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092b06u;
  R(5)=LD32(R(3));
  { c->pr=0x8c0a7228u; R(4)=LD32(R(15)+4); f_8c092b06(c); }
  { R(4)=0x0u; goto L8c0a728a; }
L8c0a7260:;
  R(14)=0x68u;
  R(2)=0x8c0cbe00u;
  c->macl=R(4)*R(14);
  R(3)=LD32(R(2));
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0a7288;
  R(0)=LD32(R(14)+40);
  R(0)&=0x2u;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0a7288;
  R(12)=R(14);
L8c0a7288:;
  R(4)+=0x1u;
L8c0a728a:;
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(c->t) goto L8c0a7294;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0a7260;
L8c0a7294:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0a7352;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(12);
  R(5)+=0x54u;
  { c->pr=0x8c0a72a4u; R(4)+=0x30u; f_8c05e55c(c); }
  R(0)=0x8c0a7394u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(5)=R(12);
  fp_arith(c,0,4,3);
  R(0)=0xfcu;
  R(6)=0xfcu;
  R(5)+=0x30u;
  R(4)=0xfcu;
  R(3)=0x8c05e612u;
  R(6)+=R(15);
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_mov(c,5,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  R(0)=0x100u;
  fp_st(c,1,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x104u;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a72e0u; R(4)+=R(15); sh4_call(c,tg); }
  R(6)=0xfcu;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a72ecu; R(4)=LD32(R(15)+24); f_8c05e5f4(c); }
  R(2)=0x1u;
  R(1)=0x8c0a8880u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+44);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cbe00u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  R(4)=R(15);
  R(7)=LD32(R(15)+40);
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a7306u; R(4)+=0x10u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0a7352; }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092610u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15));
  { c->pr=0x8c0a731au; R(4)=LD32(R(15)+4); f_8c092610(c); }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092b06u;
  R(5)=LD32(R(3));
  { c->pr=0x8c0a7324u; R(4)=LD32(R(15)+4); f_8c092b06(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=0xa0u;
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(2));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a7338u; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(6)=0x9cu;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a7346u; R(4)=LD32(R(15)+16); f_8c05e5f4(c); }
  R(6)=0xd8u;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a7352u; R(4)=LD32(R(15)+24); f_8c05e5f4(c); }
L8c0a7352:;
  R(0)=0xd8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c0a73b0u;
  fp_ld(c,3,R(0));
  fp_mov(c,5,4);
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c0a73c0;
  { fp_mov(c,3,5); goto L8c0a73c8; }
L8c0a73c0:;
  fp_mov(c,1,4);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c0a73c8:;
  R(0)=0x8c0a7444u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7460;
  R(0)=0x8c0a7448u;
  fp_ld(c,3,R(0));
  R(0)=0xdcu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a73ea;
  R(0)=0x8c0a7448u;
  fp_ld(c,2,R(0));
  R(0)=0xdcu;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a73f2; }
L8c0a73ea:;
  R(0)=0xdcu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a73f2:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7444u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7460;
  R(0)=0x8c0a7448u;
  fp_ld(c,3,R(0));
  R(0)=0xe0u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7416;
  R(0)=0x8c0a7448u;
  fp_ld(c,2,R(0));
  R(0)=0xe0u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a741e; }
L8c0a7416:;
  R(0)=0xe0u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a741e:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7444u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7460;
  { R(2)=0x1u; goto L8c0a7462; }
L8c0a7460:;
  R(2)=0x0u;
L8c0a7462:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a746e;
  R(2)=0x8c0a8298u;
  {  goto L8c0a8298; }
L8c0a746e:;
  R(0)=0x24u;
  R(5)=LD32(R(15)+28);
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0a7478u; R(4)=LD32(R(15)); f_8c0a6600(c); }
  R(2)=0x8c0a8298u;
  {  goto L8c0a8298; }
L8c0a74a0:;
  R(4)=LD32(R(15));
  R(3)=0x800000u;
  R(4)=LD32(R(4)+12);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a74ce;
  R(1)=0x4000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c0a74ce;
  R(1)=0x170u;
  R(0)=LD32(R(15));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0a74ce;
  R(2)=LD32(R(15));
  R(8)=0x1u;
  R(1)=0xff7fffffu;
  R(3)=R(2);
  R(0)=LD32(R(3)+12);
  R(0)&=R(1);
  ST32(R(3)+12,R(0));
  ST32(R(2)+12,R(0));
L8c0a74ce:;
  R(3)=LD32(R(15));
  R(1)=0x2000000u;
  R(2)=R(3);
  R(0)=LD32(R(2)+12);
  R(0)|=R(1);
  ST32(R(2)+12,R(0));
  ST32(R(3)+12,R(0));
  R(3)=LD32(R(15)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a74e6;
  {  goto L8c0a7b40; }
L8c0a74e6:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c0a751a;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0a7508;
  R(0)=0x2a8u;
  R(2)=LD32(R(15));
  R(0)=LD32(R(2)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a751a;
L8c0a7508:;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(!c->t) goto L8c0a751a;
  R(0)=0x44u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a751a;
  {  goto L8c0a7b40; }
L8c0a751a:;
  R(3)=LD32(R(15)+32);
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(3));
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a752e;
  {  goto L8c0a7b40; }
L8c0a752e:;
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c0a7536;
  {  goto L8c0a7b40; }
L8c0a7536:;
  R(3)=LD32(R(15)+8);
  R(7)=0x68u;
  R(2)=LD32(R(15)+4);
  c->macl=R(3)*R(7);
  R(0)=0x8c0cbe00u;
  R(2)-=R(3);
  ST32(R(15)+48,R(2));
  R(6)=R(2);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=c->macl;
  R(1)=LD32(R(0));
  R(4)=0xa0u;
  R(7)+=R(1);
  R(1)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0a7558u; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(1)=R(15);
  R(1)+=0x3cu;
  ST8(R(1),R(0));
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a75c0;
  R(3)=LD32(R(15)+8);
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=0x94u;
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(2));
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a757au; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(1)=R(15);
  R(1)+=0x3cu;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(2)|=R(0);
  R(0)=0x3cu;
  { ST8(R(15)+R(0),R(2)); goto L8c0a75ce; }
L8c0a75c0:;
  R(0)=0x90u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  fp_st(c,3,R(0)+R(15));
L8c0a75ce:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a75d8;
  {  goto L8c0a776a; }
L8c0a75d8:;
  R(0)=0x8c0a766cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,3,R(0));
  R(0)=0x9cu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0a75f2;
  R(0)=0x9cu;
  fp_mov(c,2,3);
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,2); goto L8c0a75fc; }
L8c0a75f2:;
  R(0)=0x9cu;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a75fc:;
  R(0)=0x8c0a7670u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7696;
  R(0)=0x8c0a766cu;
  fp_ld(c,3,R(0));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a761e;
  R(0)=0x8c0a766cu;
  fp_ld(c,2,R(0));
  R(0)=0xa0u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7626; }
L8c0a761e:;
  R(0)=0xa0u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7626:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7670u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7696;
  R(0)=0x8c0a766cu;
  fp_ld(c,3,R(0));
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7680;
  R(0)=0x8c0a766cu;
  fp_ld(c,2,R(0));
  R(0)=0xa4u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7688; }
L8c0a7680:;
  R(0)=0xa4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7688:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7708u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7696;
  { R(2)=0x1u; goto L8c0a7698; }
L8c0a7696:;
  R(2)=0x0u;
L8c0a7698:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a776a;
  R(0)=0x8c0a770cu;
  fp_ld(c,3,R(0));
  R(0)=0x90u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a76b8;
  R(0)=0x8c0a770cu;
  fp_ld(c,2,R(0));
  R(0)=0x90u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a76c0; }
L8c0a76b8:;
  R(0)=0x90u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a76c0:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7708u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7762;
  R(0)=0x8c0a770cu;
  fp_ld(c,3,R(0));
  R(0)=0x94u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7720;
  R(0)=0x8c0a770cu;
  fp_ld(c,2,R(0));
  R(0)=0x94u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7728; }
L8c0a7720:;
  R(0)=0x94u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7728:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7788u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7762;
  R(0)=0x8c0a778cu;
  fp_ld(c,3,R(0));
  R(0)=0x98u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a774c;
  R(0)=0x8c0a778cu;
  fp_ld(c,2,R(0));
  R(0)=0x98u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7754; }
L8c0a774c:;
  R(0)=0x98u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7754:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7788u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7762;
  { R(2)=0x1u; goto L8c0a7764; }
L8c0a7762:;
  R(2)=0x0u;
L8c0a7764:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a77a0;
L8c0a776a:;
  R(5)=0x9cu;
  R(6)=0x90u;
  R(4)=0x9cu;
  R(5)+=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a777au; R(4)+=R(15); f_8c05e5f4(c); }
  {  goto L8c0a784c; }
L8c0a77a0:;
  R(0)=0x90u;
  R(5)=0xfcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x94u;
  fp_mov(c,0,4);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x98u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x90u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xfcu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x104u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(3)=0x8c05e55cu;
  R(5)+=R(15);
  R(4)=0x9cu;
  { c->pr=0x8c0a77eau; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x90u;
  fp_mov(c,4,0);
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x94u;
  fp_mov(c,0,7);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x98u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0a784c;
  R(0)=0xfcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xfcu;
  fp_arith(c,2,2,3);
  R(6)=0xfcu;
  R(5)=0x9cu;
  R(4)=0x9cu;
  R(6)+=R(15);
  R(3)=0x8c05e612u;
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x100u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x104u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x104u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a783cu; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x9cu;
  R(6)=0x90u;
  R(4)=0x9cu;
  R(5)+=R(15);
  R(2)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a784cu; R(4)+=R(15); f_8c05e5f4(c); }
L8c0a784c:;
  R(4)=LD32(R(15));
  R(3)=0x100000u;
  R(4)=LD32(R(4)+12);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a785a;
  {  goto L8c0a7adc; }
L8c0a785a:;
  R(1)=0x10u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c0a7864;
  {  goto L8c0a7adc; }
L8c0a7864:;
  R(14)=LD32(R(15)+12);
  R(4)=0x9cu;
  R(3)=0x8c05e55cu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0a7872u; R(4)+=R(15); f_8c05e55c(c); }
  R(0)=0x4u;
  fp_mov(c,2,0);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xfcu;
  fp_arith(c,2,2,3);
  fp_mov(c,4,0);
  R(6)=0xfcu;
  R(5)=0x9cu;
  R(4)=0x9cu;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(5)+=R(15);
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0x100u;
  R(3)=0x8c05e612u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x104u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0a78a6u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0x9cu;
  R(6)=R(14);
  R(4)=0x9cu;
  R(6)+=0x30u;
  R(2)=0x8c05e5f4u;
  R(5)+=R(15);
  { c->pr=0x8c0a78b6u; R(4)+=R(15); f_8c05e5f4(c); }
  R(0)=0x8c0a7960u;
  R(3)=LD32(R(15)+32);
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0a78c8;
  {  goto L8c0a7adc; }
L8c0a78c8:;
  R(13)=LD32(R(15)+32);
  R(4)=R(15);
  R(14)=LD32(R(15)+12);
  R(5)=R(13);
  R(3)=0x8c05e612u;
  R(6)=R(14);
  R(6)+=0x10u;
  R(5)+=0x10u;
  { c->pr=0x8c0a78dcu; R(4)+=0x48u; f_8c05e612(c); }
  R(2)=0x8c05e55cu;
  R(5)=R(14);
  R(4)=R(13);
  R(5)+=0x4u;
  { c->pr=0x8c0a78e8u; R(4)+=0x4u; f_8c05e55c(c); }
  R(3)=0x8c09cf34u;
  { c->pr=0x8c0a78eeu; fp_mov(c,4,0); f_8c09cf34(c); }
  R(5)=R(14);
  R(2)=0x8c05e55cu;
  R(4)=R(15);
  fp_mov(c,15,0);
  R(5)+=0x4u;
  { c->pr=0x8c0a78fcu; R(4)+=0x48u; f_8c05e55c(c); }
  R(3)=0x8c09d2dcu;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { c->pr=0x8c0a7904u; fp_mov(c,4,15); f_8c09d2dc(c); }
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  R(5)=R(14);
  R(2)=0x8c05e55cu;
  R(4)=R(13);
  fp_arith(c,3,15,0);
  R(5)+=0x4u;
  { c->pr=0x8c0a7914u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x4u;
  fp_mov(c,2,0);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xfcu;
  fp_arith(c,2,2,3);
  fp_mov(c,4,0);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,2,4);
  {  goto L8c0a7980; }
L8c0a7980:;
  fp_arith(c,2,2,3);
  R(0)=0x100u;
  R(6)=0xfcu;
  R(5)=R(13);
  R(4)=0xfcu;
  R(5)+=0x4u;
  R(3)=0x8c05e612u;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x104u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0a79a0u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0xfcu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c0a7a2cu;
  fp_ld(c,3,R(0));
  fp_mov(c,5,4);
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c0a79b6;
  { fp_mov(c,3,5); goto L8c0a79be; }
L8c0a79b6:;
  fp_mov(c,1,4);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c0a79be:;
  R(0)=0x8c0a7a30u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7a56;
  R(0)=0x8c0a7a2cu;
  fp_ld(c,3,R(0));
  R(0)=0x100u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a79e0;
  R(0)=0x8c0a7a2cu;
  fp_ld(c,2,R(0));
  R(0)=0x100u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a79e8; }
L8c0a79e0:;
  R(0)=0x100u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a79e8:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7a30u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7a56;
  R(0)=0x8c0a7a2cu;
  fp_ld(c,3,R(0));
  R(0)=0x104u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7a40;
  R(0)=0x8c0a7a2cu;
  fp_ld(c,2,R(0));
  R(0)=0x104u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7a48; }
L8c0a7a40:;
  R(0)=0x104u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7a48:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7b2cu;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7a56;
  { R(2)=0x1u; goto L8c0a7a58; }
L8c0a7a56:;
  R(2)=0x0u;
L8c0a7a58:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a7a9c;
  R(0)=0xfcu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x100u;
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x104u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xfcu;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x100u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x104u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x104u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c0a7aaa; }
L8c0a7a9c:;
  R(0)=0xfcu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x104u;
  fp_st(c,3,R(0)+R(15));
L8c0a7aaa:;
  R(0)=0xfcu;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xfcu;
  fp_arith(c,2,2,3);
  R(6)=0xfcu;
  R(5)=0x9cu;
  R(4)=0x9cu;
  R(6)+=R(15);
  R(3)=0x8c05e5f4u;
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x100u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x104u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x104u;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a7adcu; R(4)+=R(15); sh4_call(c,tg); }
L8c0a7adc:;
  R(6)=0x9cu;
  R(4)=R(15);
  R(3)=0x8c05e5f4u;
  R(5)=LD32(R(15)+44);
  R(6)+=R(15);
  { c->pr=0x8c0a7aeau; R(4)+=0x6cu; f_8c05e5f4(c); }
  R(3)=0x8c05e612u;
  R(5)=R(15);
  R(4)=0xfcu;
  R(5)+=0x6cu;
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0a7af8u; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0xd8u;
  R(6)=0xfcu;
  R(4)=0xd8u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0a7b08u; R(4)+=R(15); f_8c05e612(c); }
  {  goto L8c0a7b4a; }
L8c0a7b40:;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c0a7b4au; R(4)+=0x6cu; f_8c05e6ea(c); }
L8c0a7b4a:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x6cu;
  { c->pr=0x8c0a7b54u; R(4)=LD32(R(15)+24); f_8c05e6ea(c); }
  R(2)=0x0u;
  R(6)=0xe0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=0x2cu;
  R(1)=LD32(R(15)+36);
  R(3)=0x8c0a454eu;
  R(1)+=0x4u;
  R(4)=0x80u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+20);
  R(6)+=R(15);
  R(5)=LD32(R(15)+8);
  fp_ld(c,4,R(0)+R(15));
  R(7)+=0x4u;
  { c->pr=0x8c0a7b74u; R(4)+=R(15); f_8c0a454e(c); }
  R(15)+=0x8u;
  R(0)=0x3cu;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a7b82;
  {  goto L8c0a7ca0; }
L8c0a7b82:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0a7ba0;
  R(0)=0x2a8u;
  R(2)=LD32(R(15));
  R(0)=LD32(R(2)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a7ba0;
  {  goto L8c0a7ca0; }
L8c0a7ba0:;
  R(5)=0xd8u;
  R(6)=R(15);
  R(4)=0xfcu;
  R(6)+=0x78u;
  R(2)=0x8c05e612u;
  R(5)+=R(15);
  { c->pr=0x8c0a7bb0u; R(4)+=R(15); f_8c05e612(c); }
  R(0)=0x78u;
  c->fr[2]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x8c0a7c18u;
  fp_ld(c,3,R(0));
  fp_mov(c,4,5);
  fp_arith(c,0,4,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0a7bc6;
  { fp_mov(c,3,4); goto L8c0a7bce; }
L8c0a7bc6:;
  fp_mov(c,1,5);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c0a7bce:;
  R(0)=0x8c0a7c1cu;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7c62;
  R(0)=0x8c0a7c18u;
  fp_ld(c,3,R(0));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7c20;
  R(0)=0x8c0a7c18u;
  fp_ld(c,2,R(0));
  R(0)=0x7cu;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7c28; }
L8c0a7c20:;
  R(0)=0x7cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7c28:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7c84u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7c62;
  R(0)=0x8c0a7c88u;
  fp_ld(c,3,R(0));
  R(0)=0x80u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7c4c;
  R(0)=0x8c0a7c88u;
  fp_ld(c,2,R(0));
  R(0)=0x80u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7c54; }
L8c0a7c4c:;
  R(0)=0x80u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7c54:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7c84u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7c62;
  { R(2)=0x1u; goto L8c0a7c64; }
L8c0a7c62:;
  R(2)=0x0u;
L8c0a7c64:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a7c6e;
  {  goto L8c0a8208; }
L8c0a7c6e:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x6cu;
  { c->pr=0x8c0a7c78u; R(4)=LD32(R(15)+24); f_8c05e6ea(c); }
  {  goto L8c0a8298; }
L8c0a7ca0:;
  R(3)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+48);
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(2));
  R(4)=R(15);
  R(1)=0x8c0a8880u;
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(15)+40);
  { c->pr=0x8c0a7cbcu; R(4)+=0x10u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0a7cc8; }
  {  goto L8c0a8298; }
L8c0a7cc8:;
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092610u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15));
  { c->pr=0x8c0a7cd4u; R(4)=LD32(R(15)+4); f_8c092610(c); }
  R(3)=0x8c0cbe00u;
  R(2)=0x8c092b06u;
  R(5)=LD32(R(3));
  { c->pr=0x8c0a7cdeu; R(4)=LD32(R(15)+4); f_8c092b06(c); }
  { R(13)=0x0u; goto L8c0a7d3e; }
L8c0a7ce2:;
  R(14)=0x68u;
  R(2)=0x8c0cbe00u;
  c->macl=R(13)*R(14);
  R(3)=LD32(R(2));
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a7d3c;
  R(0)=LD32(R(14)+40);
  R(0)&=0x2u;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0a7d3c;
  R(2)=LD32(R(15)+52);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a7d3c;
  R(4)=LD32(R(14)+36);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a7d3c;
  R(2)=0x8c092bf2u;
  { c->pr=0x8c0a7d1au;  f_8c092bf2(c); }
  R(3)=0x8c05689eu;
  { c->pr=0x8c0a7d20u; R(4)=R(0); f_8c05689e(c); }
  R(2)=0x4000000u;
  R(0)&=R(2);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a7d3c;
  R(3)=0x8c090decu;
  R(5)=R(14);
  { c->pr=0x8c0a7d30u; R(4)=LD32(R(15)); f_8c090dec(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a7d3c;
  R(0)=0x2eu;
  R(3)=0x63u;
  ST16(R(14)+R(0),R(3));
L8c0a7d3c:;
  R(13)+=0x1u;
L8c0a7d3e:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c0a7ce2;
  R(1)=LD32(R(15)+4);
  R(3)=0x8c0cbe00u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=0xa0u;
  R(2)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(3));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0a7d58u; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(6)=0x9cu;
  R(5)=LD32(R(15)+24);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a7d66u; R(4)=R(5); f_8c05e5f4(c); }
  {  goto L8c0a8298; }
L8c0a7dc0:;
  R(3)=LD32(R(15)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a7dca;
  {  goto L8c0a8226; }
L8c0a7dca:;
  R(3)=LD32(R(15));
  R(2)=0x4000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0a7de0;
  R(1)=0x170u;
  R(0)=LD32(R(15));
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0));
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
L8c0a7de0:;
  R(3)=LD32(R(15)+8);
  R(7)=0x68u;
  R(2)=LD32(R(15)+4);
  c->macl=R(3)*R(7);
  R(0)=0x8c0cbe00u;
  R(2)-=R(3);
  ST32(R(15)+48,R(2));
  R(6)=R(2);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=c->macl;
  R(1)=LD32(R(0));
  R(4)=0xa0u;
  R(7)+=R(1);
  R(1)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0a7e02u; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a7e22;
  R(3)=LD32(R(15)+8);
  R(2)=0x8c0cbe00u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=0x94u;
  R(3)=0x8c0a94c0u;
  R(5)=LD32(R(15)+4);
  R(7)=LD32(R(2));
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a7e1eu; R(4)+=R(15); f_8c0a94c0(c); }
  { R(15)+=0x4u; goto L8c0a7e30; }
L8c0a7e22:;
  R(0)=0x90u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x94u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x98u;
  fp_st(c,3,R(0)+R(15));
L8c0a7e30:;
  R(0)=0x90u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x94u;
  c->t=(R(3)&R(3))==0;
  fp_ld(c,14,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,13,R(0)+R(15));
  if(!c->t) goto L8c0a7e46;
  {  goto L8c0a7fc8; }
L8c0a7e46:;
  R(0)=0x8c0a7e78u;
  c->fr[1]=0x00000000u;
  fp_ld(c,3,R(0));
  R(0)=0x9cu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0a7e80;
  R(0)=0x9cu;
  fp_mov(c,2,3);
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,2); goto L8c0a7e8a; }
L8c0a7e80:;
  R(0)=0x9cu;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a7e8a:;
  R(0)=0x8c0a7f08u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7f20;
  R(0)=0x8c0a7f0cu;
  fp_ld(c,3,R(0));
  R(0)=0xa0u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7eac;
  R(0)=0x8c0a7f0cu;
  fp_ld(c,2,R(0));
  R(0)=0xa0u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7eb4; }
L8c0a7eac:;
  R(0)=0xa0u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7eb4:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7f08u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7f20;
  R(0)=0x8c0a7f0cu;
  fp_ld(c,3,R(0));
  R(0)=0xa4u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7ed8;
  R(0)=0x8c0a7f0cu;
  fp_ld(c,2,R(0));
  R(0)=0xa4u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a7ee0; }
L8c0a7ed8:;
  R(0)=0xa4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a7ee0:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7f08u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7f20;
  { R(2)=0x1u; goto L8c0a7f22; }
L8c0a7f20:;
  R(2)=0x0u;
L8c0a7f22:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a7fc8;
  R(0)=0x8c0a7fa0u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7f3e;
  R(0)=0x8c0a7fa0u;
  fp_ld(c,2,R(0));
  { fp_mov(c,3,15); goto L8c0a7f44; }
L8c0a7f3e:;
  fp_mov(c,3,15);
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
L8c0a7f44:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7fa4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7fc0;
  R(0)=0x8c0a7fa0u;
  fp_mov(c,2,14);
  fp_ld(c,3,R(0));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7f64;
  R(0)=0x8c0a7fa0u;
  fp_ld(c,2,R(0));
  { fp_mov(c,3,14); goto L8c0a7f6a; }
L8c0a7f64:;
  fp_mov(c,3,14);
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
L8c0a7f6a:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7fa4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7fc0;
  R(0)=0x8c0a7fa0u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7f8a;
  R(0)=0x8c0a7fa0u;
  fp_ld(c,2,R(0));
  { fp_mov(c,3,13); goto L8c0a7f90; }
L8c0a7f8a:;
  fp_mov(c,3,13);
  c->fr[2]=0x00000000u;
  fp_unary(c,0,3);
L8c0a7f90:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a7fa4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a7fc0;
  { R(2)=0x1u; goto L8c0a7fc2; }
L8c0a7fc0:;
  R(2)=0x0u;
L8c0a7fc2:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a8000;
L8c0a7fc8:;
  R(5)=0x9cu;
  R(6)=0x90u;
  R(4)=0x9cu;
  R(5)+=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a7fd8u; R(4)+=R(15); f_8c05e5f4(c); }
  {  goto L8c0a80a0; }
L8c0a8000:;
  fp_mov(c,3,14);
  fp_arith(c,2,3,14);
  fp_mov(c,0,15);
  R(0)=0x90u;
  R(5)=0xfcu;
  fp_fmac(c,3,15);
  fp_mov(c,0,13);
  R(4)=0x9cu;
  R(5)+=R(15);
  R(3)=0x8c05e55cu;
  fp_fmac(c,3,13);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0xfcu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x94u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x98u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x104u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a803eu; R(4)+=R(15); sh4_call(c,tg); }
  R(0)=0x90u;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x94u;
  fp_mov(c,0,5);
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x98u;
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0a80a0;
  R(0)=0xfcu;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xfcu;
  fp_arith(c,2,2,3);
  R(6)=0xfcu;
  R(5)=0x9cu;
  R(4)=0x9cu;
  R(6)+=R(15);
  R(3)=0x8c05e612u;
  R(5)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x100u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x104u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x104u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a8090u; R(4)+=R(15); sh4_call(c,tg); }
  R(5)=0x9cu;
  R(6)=0x90u;
  R(4)=0x9cu;
  R(5)+=R(15);
  R(2)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a80a0u; R(4)+=R(15); f_8c05e5f4(c); }
L8c0a80a0:;
  R(6)=0x9cu;
  R(4)=R(15);
  R(3)=0x8c05e5f4u;
  R(5)=LD32(R(15)+44);
  R(6)+=R(15);
  { c->pr=0x8c0a80aeu; R(4)+=0x6cu; f_8c05e5f4(c); }
  R(3)=0x8c05e612u;
  R(5)=R(15);
  R(4)=0xfcu;
  R(5)+=0x6cu;
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0a80bcu; R(4)+=R(15); f_8c05e612(c); }
  R(5)=0xd8u;
  R(6)=0xfcu;
  R(4)=0xd8u;
  R(5)+=R(15);
  R(2)=0x8c05e612u;
  R(6)+=R(15);
  { c->pr=0x8c0a80ccu; R(4)+=R(15); f_8c05e612(c); }
  R(14)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x2000000u;
  R(5)+=0x6cu;
  R(2)=LD32(R(14)+12);
  R(2)|=R(3);
  ST32(R(14)+12,R(2));
  R(2)=0x8c05e6eau;
  { c->pr=0x8c0a80e0u; R(4)=LD32(R(15)+24); f_8c05e6ea(c); }
  R(3)=0x0u;
  R(6)=0xe0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x2cu;
  R(1)=LD32(R(15)+36);
  R(5)=R(14);
  R(4)=0x80u;
  R(1)+=0x4u;
  R(2)=0x8c0a454eu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+28);
  R(6)+=R(15);
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0a80feu; R(4)+=R(15); f_8c0a454e(c); }
  R(15)+=0x8u;
  R(0)=0x78u;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c0a814cu;
  fp_ld(c,3,R(0));
  fp_mov(c,5,4);
  fp_arith(c,0,5,3);
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c0a8160;
  { fp_mov(c,3,5); goto L8c0a8168; }
L8c0a8160:;
  fp_mov(c,1,4);
  fp_unary(c,0,1);
  fp_mov(c,3,1);
  fp_arith(c,0,3,2);
L8c0a8168:;
  R(0)=0x8c0a81e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a8200;
  R(0)=0x8c0a81e8u;
  fp_ld(c,3,R(0));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a818a;
  R(0)=0x8c0a81e8u;
  fp_ld(c,2,R(0));
  R(0)=0x7cu;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a8192; }
L8c0a818a:;
  R(0)=0x7cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a8192:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a81e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a8200;
  R(0)=0x8c0a81e8u;
  fp_ld(c,3,R(0));
  R(0)=0x80u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a81b6;
  R(0)=0x8c0a81e8u;
  fp_ld(c,2,R(0));
  R(0)=0x80u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c0a81be; }
L8c0a81b6:;
  R(0)=0x80u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c0a81be:;
  fp_arith(c,0,3,2);
  R(0)=0x8c0a81e4u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a8200;
  { R(2)=0x1u; goto L8c0a8202; }
L8c0a8200:;
  R(2)=0x0u;
L8c0a8202:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a8218;
L8c0a8208:;
  R(0)=0x24u;
  R(3)=0x8c0a6600u;
  R(5)=LD32(R(15)+28);
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0a8214u; R(4)=LD32(R(15)); f_8c0a6600(c); }
  {  goto L8c0a8298; }
L8c0a8218:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x6cu;
  { c->pr=0x8c0a8222u; R(4)=LD32(R(15)+24); f_8c05e6ea(c); }
  {  goto L8c0a8298; }
L8c0a8226:;
  R(3)=LD32(R(15));
  R(1)=0x2000000u;
  R(2)=R(3);
  R(0)=LD32(R(2)+12);
  R(0)|=R(1);
  ST32(R(2)+12,R(0));
  ST32(R(3)+12,R(0));
  R(0)=0xc0u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,12);
  if(!c->t) goto L8c0a8264;
  R(0)=0xc8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a8264;
  R(5)=R(9);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c0a8264u; R(4)=LD32(R(15)+40); sh4_call(c,tg); }
L8c0a8264:;
  R(3)=LD32(R(15));
  R(2)=0x200000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0a827a;
  R(6)=0xb4u;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a827au; R(4)=LD32(R(15)+24); f_8c05e5f4(c); }
L8c0a827a:;
  R(3)=LD32(R(10));
  R(2)=0x1u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c0a828a;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c0a828au; R(4)=LD32(R(15)+40); sh4_call(c,tg); }
L8c0a828a:;
  R(3)=LD32(R(15));
  R(1)=0xfffeffffu;
  R(2)=R(3);
  R(0)=LD32(R(2)+12);
  R(0)&=R(1);
  ST32(R(2)+12,R(0));
  ST32(R(3)+12,R(0));
L8c0a8298:;
  R(0)=0x24u;
  R(3)=0x8c091980u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0a82a2u; R(4)=LD32(R(15)); f_8c091980(c); }
  {  goto L8c0a8378; }
L8c0a8300:;
  R(2)=LD32(R(15));
  R(1)=0x2000000u;
  R(3)=R(2);
  R(0)=LD32(R(3)+12);
  R(0)|=R(1);
  ST32(R(3)+12,R(0));
  ST32(R(2)+12,R(0));
  R(0)=0xc0u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xc4u;
  fp_mov(c,0,6);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xc8u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_cmp(c,1,3,12);
  if(!c->t) goto L8c0a833e;
  R(0)=0xc8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a833e;
  R(5)=R(9);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c0a833eu; R(4)=LD32(R(15)+40); sh4_call(c,tg); }
L8c0a833e:;
  R(3)=LD32(R(15));
  R(2)=0x200000u;
  R(1)=LD32(R(3)+12);
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0a8354;
  R(6)=0xb4u;
  R(5)=LD32(R(15)+16);
  R(3)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a8354u; R(4)=LD32(R(15)+24); f_8c05e5f4(c); }
L8c0a8354:;
  R(3)=LD32(R(10));
  R(2)=0x1u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c0a8364;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(11); c->pr=0x8c0a8364u; R(4)=LD32(R(15)+40); sh4_call(c,tg); }
L8c0a8364:;
  R(14)=LD32(R(15));
  R(0)=0x24u;
  R(3)=0xfffeffffu;
  R(2)=LD32(R(14)+12);
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
  R(2)=0x8c091980u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c0a8378u; R(4)=R(14); f_8c091980(c); }
L8c0a8378:;
  R(1)=0x240u;
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
void f_8c0a83c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=0x1e0u;
  R(13)=R(4);
  c->fr[3]=0x00000000u;
  R(14)+=R(13);
  fp_st(c,4,R(15));
  fp_ld(c,2,R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a83ee;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0a83ee;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0a8496;
L8c0a83ee:;
  R(4)=0xe0u;
  R(5)=R(13);
  R(5)+=0x78u;
  R(2)=0x8c05e612u;
  R(4)+=R(13);
  R(11)=R(5);
  R(12)=R(4);
  R(11)+=0x58u;
  R(12)+=0x58u;
  R(4)=R(15);
  R(6)=R(11);
  R(5)=R(12);
  { c->pr=0x8c0a840au; R(4)+=0x10u; f_8c05e612(c); }
  R(3)=0x8c05e55cu;
  R(4)=R(15);
  R(5)=R(14);
  { c->pr=0x8c0a8414u; R(4)+=0x10u; f_8c05e55c(c); }
  R(0)=0x4u;
  fp_ld(c,6,R(14));
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,7,0);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,2,7);
  fp_arith(c,2,2,3);
  R(0)=0x4u;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x10u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,7);
  R(6)+=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,7,3);
  fp_st(c,7,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a8482u; R(4)+=0x10u; sh4_call(c,tg); }
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0x10u;
  { c->pr=0x8c0a848eu; R(4)=R(12); f_8c05e5f4(c); }
  R(3)=0x8c091980u;
  fp_ld(c,4,R(15));
  { c->pr=0x8c0a8496u; R(4)=R(13); f_8c091980(c); }
L8c0a8496:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a84e0(SH4Ctx *c) {
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
  R(0)=0xfffffef4u;
  R(15)+=R(0);
  R(14)=R(4);
  R(4)=R(15);
  R(13)=0xe0u;
  R(3)=R(14);
  R(4)+=0x30u;
  ST32(R(15)+16,R(5));
  R(13)+=R(14);
  R(2)=0x8c0685b4u;
  R(3)+=0x78u;
  R(9)=R(4);
  R(5)=R(13);
  R(6)=0x68u;
  ST32(R(15)+20,R(3));
  R(10)=R(4);
  fp_mov(c,14,4);
  R(9)+=0x68u;
  { c->pr=0x8c0a851cu; R(4)=R(10); f_8c0685b4(c); }
  R(3)=0x8c0685b4u;
  R(5)=R(13);
  R(6)=0x68u;
  { c->pr=0x8c0a8526u; R(4)=R(9); f_8c0685b4(c); }
  R(6)=LD32(R(15)+20);
  R(12)=R(13);
  R(3)=0x8c05e612u;
  R(12)+=0x58u;
  R(4)=R(15);
  R(6)+=0x58u;
  R(5)=R(12);
  { c->pr=0x8c0a8538u; R(4)+=0x24u; f_8c05e612(c); }
  R(5)=R(15);
  R(6)=R(15);
  R(2)=0x8c015ea8u;
  R(5)+=0xcu;
  R(7)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c0a8548u; R(4)=R(13); f_8c015ea8(c); }
  R(3)=0x8c09d2dcu;
  R(0)=0x8c0a8658u;
  { c->pr=0x8c0a8550u; fp_ld(c,4,R(0)); f_8c09d2dc(c); }
  R(0)=0x24u;
  fp_mov(c,2,0);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c0a8660u;
  fp_mov(c,15,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_ld(c,4,R(0));
  fp_unary(c,2,3);
  fp_arith(c,2,15,3);
  fp_cmp(c,1,4,15);
  { uint32_t k=!c->t; R(4)=R(10); if(k) goto L8c0a857c; }
  fp_mov(c,15,4);
L8c0a857c:;
  R(2)=LD32(R(15));
  R(4)+=0x58u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(2));
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  R(6)=0x100u;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x104u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x108u;
  fp_arith(c,2,2,3);
  R(3)=0x8c05e5f4u;
  fp_st(c,2,R(0)+R(15));
  { c->pr=0x8c0a85b0u; R(5)=R(12); f_8c05e5f4(c); }
  R(2)=LD32(R(15));
  R(8)=R(9);
  fp_mov(c,2,15);
  R(5)=R(12);
  fp_ld(c,3,R(2));
  R(8)+=0x58u;
  R(0)=0x100u;
  fp_arith(c,2,2,3);
  R(6)=0x100u;
  R(6)+=R(15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x104u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x108u;
  fp_arith(c,2,15,3);
  R(3)=0x8c05e612u;
  fp_st(c,15,R(0)+R(15));
  { c->pr=0x8c0a85e6u; R(4)=R(8); f_8c05e612(c); }
  R(2)=0x1u;
  R(11)=0x8c0cbe00u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(14);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(11));
  R(4)=R(15);
  R(3)=0x8c0a8880u;
  R(7)=LD32(R(15)+28);
  { c->pr=0x8c0a85feu; R(4)+=0x14u; f_8c0a8880(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0a860a; }
  {  goto L8c0a8820; }
L8c0a860a:;
  R(3)=LD32(R(15)+8);
  R(5)=R(14);
  R(4)=0x104u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0a94c0u;
  R(7)=LD32(R(11));
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a861cu; R(4)+=R(15); f_8c0a94c0(c); }
  R(15)+=0x4u;
  R(6)=0x100u;
  R(5)=R(8);
  R(2)=0x8c05e5f4u;
  R(6)+=R(15);
  { c->pr=0x8c0a862au; R(4)=R(12); f_8c05e5f4(c); }
  R(5)=0x0u;
  R(10)=R(5);
  { R(4)=R(5); goto L8c0a86a0; }
L8c0a8680:;
  R(5)=0x68u;
  R(3)=LD32(R(11));
  c->macl=R(4)*R(5);
  R(0)=0x2eu;
  R(12)=c->macl;
  R(12)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(12)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c0a86a0; }
  R(10)=R(12);
L8c0a86a0:;
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c0a86aa;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0a8680;
L8c0a86aa:;
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c015ea8u;
  R(5)+=0xcu;
  R(7)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c0a86bau; R(4)=R(13); f_8c015ea8(c); }
  R(3)=LD32(R(15));
  R(0)=0x8u;
  R(2)=LD32(R(15)+4);
  R(5)=R(10);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  R(3)=R(2);
  R(2)=LD32(R(15));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  R(5)+=0x4u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(3));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,2,R(0)+R(3));
  fp_ld(c,3,R(2));
  fp_ld(c,1,R(3));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(0)+R(2));
  fp_ld(c,1,R(0)+R(3));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(2));
  R(3)=0x8c05e6eau;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  { c->pr=0x8c0a8716u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(0)=0x20u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  R(0)=0x1cu;
  R(2)=LD32(R(15)+4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(3));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  fp_ld(c,2,R(0)+R(2));
  R(0)=0x20u;
  fp_ld(c,1,R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,2,R(2));
  R(0)=0x18u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(1)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  R(1)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,1,R(2));
  R(0)=0x4u;
  R(5)=R(13);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15));
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(1));
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(3)=0x8c091d40u;
  { c->pr=0x8c0a87c2u; R(4)=R(14); f_8c091d40(c); }
  R(2)=LD32(R(15)+8);
  R(3)=0x8c0a8f0eu;
  R(2)+=0xffffffffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+20);
  R(7)=LD32(R(11));
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0a87d4u; R(4)=R(14); f_8c0a8f0e(c); }
  R(15)+=0x4u;
  R(2)=0x8c091980u;
  fp_mov(c,4,14);
  { c->pr=0x8c0a87deu; R(4)=R(14); f_8c091980(c); }
  {  goto L8c0a8828; }
L8c0a8820:;
  R(3)=0x8c091980u;
  fp_mov(c,4,14);
  { c->pr=0x8c0a8828u; R(4)=R(14); f_8c091980(c); }
L8c0a8828:;
  R(1)=0x10cu;
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
void f_8c0a8880(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff3cu;
  R(15)+=R(0);
  R(0)=0x40u;
  R(11)=R(7);
  R(13)=0x0u;
  c->fr[13]=0x3F800000u;
  ST8(R(15)+R(0),R(13));
  R(0)=0x3cu;
  ST8(R(15)+R(0),R(13));
  R(12)=R(6);
  R(0)=0xf0u;
  R(8)=R(5);
  R(10)=R(4);
  R(3)=0x8c0a17c0u;
  fp_unary(c,0,13);
  R(5)=R(11);
  ST32(R(10),R(13));
  R(7)=LD32(R(15)+R(0));
  R(0)=0xecu;
  fp_mov(c,14,13);
  R(6)=LD32(R(15)+R(0));
  { c->pr=0x8c0a88c2u; R(4)=R(8); f_8c0a17c0(c); }
  ST32(R(10),R(0));
  R(0)=0xf4u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a88d6;
  R(3)=0x8c092610u;
  R(5)=R(8);
  R(6)=R(12);
  { c->pr=0x8c0a88d6u; R(4)=LD32(R(10)); f_8c092610(c); }
L8c0a88d6:;
  R(2)=0x8c092880u;
  R(5)=R(8);
  R(6)=R(12);
  { c->pr=0x8c0a88e0u; R(4)=LD32(R(10)); f_8c092880(c); }
  R(3)=LD32(R(10));
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c0a88ea;
  { R(0)=0x0u; { f_8c0a8e44(c); return; } }
L8c0a88ea:;
  R(2)=LD32(R(12)+12);
  R(3)=0x400000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0a88fc;
  R(3)=0x8c0928f8u;
  R(5)=R(8);
  R(6)=R(12);
  { c->pr=0x8c0a88fcu; R(4)=LD32(R(10)); f_8c0928f8(c); }
L8c0a88fc:;
  R(0)=0xecu;
  R(4)=R(15);
  R(9)=0x8c05e612u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xf0u;
  R(5)+=0x58u;
  R(6)=LD32(R(15)+R(0));
  R(6)+=0x58u;
  { c->pr=0x8c0a8910u; R(4)+=0x50u; f_8c05e612(c); }
  R(3)=0x8c091208u;
  R(6)=R(15);
  R(5)=R(8);
  R(6)+=0x50u;
  { c->pr=0x8c0a891cu; R(4)=LD32(R(10)); f_8c091208(c); }
  R(2)=LD32(R(11)+36);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015ea8u;
  R(7)=R(15);
  R(5)+=0x30u;
  ST32(R(15)+12,R(2));
  R(6)+=0x4u;
  R(7)+=0x34u;
  { c->pr=0x8c0a8932u; R(4)=R(2); f_8c015ea8(c); }
  { ST32(R(15)+8,R(13)); { f_8c0a8e20(c); return; } }
}
void f_8c0a8980(SH4Ctx *c) {
  R(2)=LD32(R(15)+8);
  R(4)=0x68u;
  R(1)=0x2eu;
  c->macl=R(2)*R(4);
  R(2)=c->macl;
  R(2)+=R(8);
  R(0)=R(2);
  ST32(R(15),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a89a4;
  {  goto L8c0a8e1a; }
L8c0a89a4:;
  R(3)=0x1u;
  R(0)=0x38u;
  ST8(R(15)+R(0),R(3));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+28);
  ST32(R(15)+44,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a89c6;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x8u;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0a89c6;
  { R(2)=0x1u; goto L8c0a89c8; }
L8c0a89c6:;
  R(2)=0x0u;
L8c0a89c8:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a89d2;
  {  goto L8c0a8b48; }
L8c0a89d2:;
  R(0)=0x38u;
  ST8(R(15)+R(0),R(13));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+32);
  ST32(R(15)+40,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a89f2;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0a89f2;
  { R(2)=0x1u; goto L8c0a89f4; }
L8c0a89f2:;
  R(2)=0x0u;
L8c0a89f4:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a89fe;
  {  goto L8c0a8e00; }
L8c0a89fe:;
  R(5)=LD32(R(15));
  R(14)=0x8c090dacu;
  R(5)+=0x4u;
  { c->pr=0x8c0a8a08u; R(4)=R(12); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a8a12;
  {  goto L8c0a8e00; }
L8c0a8a12:;
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(6)=LD32(R(15)+12);
  R(5)+=0x10u;
  R(6)+=0x58u;
  { uint32_t tg=R(9); c->pr=0x8c0a8a20u; R(4)+=0x44u; sh4_call(c,tg); }
  R(0)=0x8c0a8aa4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,5,R(0));
  R(0)=0x8c0a8aa8u;
  fp_ld(c,4,R(0));
  R(0)=0x44u;
  fp_ld(c,1,R(0)+R(15));
  fp_mov(c,6,1);
  fp_arith(c,0,6,4);
  fp_cmp(c,1,6,2);
  if(!c->t) goto L8c0a8a3a;
  { fp_mov(c,3,6); goto L8c0a8a40; }
L8c0a8a3a:;
  fp_mov(c,3,1);
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a8a40:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a8ac0;
  R(0)=0x48u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a8a58;
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,4); goto L8c0a8a62; }
L8c0a8a58:;
  R(0)=0x48u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a8a62:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a8ac0;
  R(0)=0x4cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a8a7a;
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,4); goto L8c0a8a84; }
L8c0a8a7a:;
  R(0)=0x4cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a8a84:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a8ac0;
  { R(3)=0x1u; goto L8c0a8ac2; }
L8c0a8ac0:;
  R(3)=0x0u;
L8c0a8ac2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a8b02;
  R(0)=0x48u;
  fp_mov(c,0,1);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x44u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_fmac(c,3,1);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c0a8b02:;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c0a8b0cu; R(4)=LD32(R(15)+4); f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c0a8b20;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c0a8b1cu; R(4)=LD32(R(15)+4); f_8c05e55c(c); }
  { fp_mov(c,4,0); goto L8c0a8b2e; }
L8c0a8b20:;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c0a8b2au; R(4)=LD32(R(15)+4); f_8c05e55c(c); }
  fp_mov(c,4,0);
  fp_unary(c,0,4);
L8c0a8b2e:;
  fp_cmp(c,1,4,14);
  if(c->t) goto L8c0a8b36;
  {  goto L8c0a8e00; }
L8c0a8b36:;
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(14)=0x8c0685b4u;
  R(6)=0x68u;
  fp_mov(c,14,4);
  { c->pr=0x8c0a8b44u; R(4)+=0x5cu; f_8c0685b4(c); }
  {  goto L8c0a8e00; }
L8c0a8b48:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+32);
  ST32(R(15)+36,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a8ba0;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a8ba0;
  { R(3)=0x1u; goto L8c0a8ba2; }
L8c0a8ba0:;
  R(3)=0x0u;
L8c0a8ba2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a8bac;
  {  goto L8c0a8ce0; }
L8c0a8bac:;
  R(2)=LD32(R(15));
  R(0)=0x18u;
  R(4)=0x8c0cbe04u;
  fp_ld(c,3,R(0)+R(2));
  fp_st(c,3,R(4));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+28);
  ST32(R(15)+32,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a8bd4;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a8bd4;
  { R(3)=0x1u; goto L8c0a8bd6; }
L8c0a8bd4:;
  R(3)=0x0u;
L8c0a8bd6:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a8be0;
  {  goto L8c0a8cda; }
L8c0a8be0:;
  R(0)=0x3cu;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a8bec;
  {  goto L8c0a8cd4; }
L8c0a8bec:;
  R(5)=LD32(R(15));
  R(4)=LD32(R(15));
  R(3)=0x8c05e55cu;
  R(5)+=0x3cu;
  { c->pr=0x8c0a8bf8u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c0a8c4cu;
  R(3)=LD32(R(15));
  fp_ld(c,5,R(0));
  R(0)=0x44u;
  fp_ld(c,4,R(0)+R(3));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_mov(c,6,0); if(k) goto L8c0a8c0e; }
  { fp_mov(c,3,4); goto L8c0a8c12; }
L8c0a8c0e:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c0a8c12:;
  fp_cmp(c,1,3,5);
  if(!c->t) goto L8c0a8c66;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c0a8c60;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(11);
  R(7)=LD32(R(15)+4);
  R(6)=0x1u;
  { c->pr=0x8c0a8c28u; R(4)=R(12); f_8c0a8f0e(c); }
  R(15)+=0x4u;
  R(5)=LD32(R(11)+4);
  R(5)=LD32(R(5)+12);
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  { R(4)=R(0); goto L8c0a8cae; }
L8c0a8c60:;
  R(0)=0x38u;
  { ST8(R(15)+R(0),R(13)); goto L8c0a8cbe; }
L8c0a8c66:;
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(6)=LD32(R(15));
  R(5)+=0x10u;
  R(6)+=0x48u;
  { uint32_t tg=R(9); c->pr=0x8c0a8c74u; R(4)+=0x44u; sh4_call(c,tg); }
  R(6)=LD32(R(15));
  R(5)=R(15);
  R(14)=0x8c05e5f4u;
  R(4)=R(15);
  R(5)+=0x44u;
  R(6)+=0x3cu;
  { c->pr=0x8c0a8c84u; R(4)+=0x44u; f_8c05e5f4(c); }
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x8c05e55cu;
  R(5)+=0x44u;
  { c->pr=0x8c0a8c90u; R(4)+=0x4u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0a8cba;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(11);
  R(7)=LD32(R(15)+4);
  R(6)=0x1u;
  { c->pr=0x8c0a8ca4u; R(4)=R(12); f_8c0a8f0e(c); }
  R(15)+=0x4u;
  R(5)=LD32(R(11)+4);
  R(5)=LD32(R(5)+12);
  R(0)=(int32_t)(int8_t)LD8(R(5)+8);
  R(4)=R(0);
L8c0a8cae:;
  R(0)=0x38u;
  ST8(R(15)+R(0),R(4));
  R(0)=0x3cu;
  R(3)=0x1u;
  { ST8(R(15)+R(0),R(3)); goto L8c0a8cbe; }
L8c0a8cba:;
  R(0)=0x38u;
  ST8(R(15)+R(0),R(13));
L8c0a8cbe:;
  R(3)=LD32(R(15));
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0a8cce;
  {  goto L8c0a8e00; }
L8c0a8cce:;
  R(0)=0x38u;
  { ST8(R(15)+R(0),R(13)); goto L8c0a8e00; }
L8c0a8cd4:;
  R(0)=0x38u;
  { ST8(R(15)+R(0),R(13)); goto L8c0a8e00; }
L8c0a8cda:;
  R(0)=0x38u;
  { ST8(R(15)+R(0),R(13)); goto L8c0a8e00; }
L8c0a8ce0:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+32);
  ST32(R(15)+28,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a8cfe;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a8cfe;
  { R(3)=0x1u; goto L8c0a8d00; }
L8c0a8cfe:;
  R(3)=0x0u;
L8c0a8d00:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a8d0a;
  {  goto L8c0a8e00; }
L8c0a8d0a:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+32);
  ST32(R(15)+24,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a8d26;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x40u;
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c0a8d26;
  { R(2)=0x1u; goto L8c0a8d28; }
L8c0a8d26:;
  R(2)=0x0u;
L8c0a8d28:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a8d60;
  R(2)=LD32(R(12)+8);
  R(4)=0x40u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c0a8d3a;
  { R(3)=0x1u; goto L8c0a8d92; }
L8c0a8d3a:;
  R(3)=0x0u;
  {  goto L8c0a8d92; }
L8c0a8d60:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+32);
  ST32(R(15)+20,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a8d7c;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(0)=R(0)&0xFFFF;
  R(0)&=0x20u;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0a8d7c;
  { R(2)=0x1u; goto L8c0a8d7e; }
L8c0a8d7c:;
  R(2)=0x0u;
L8c0a8d7e:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a8d98;
  R(2)=LD32(R(12)+8);
  R(4)=0x10u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c0a8d90;
  { R(3)=0x1u; goto L8c0a8d92; }
L8c0a8d90:;
  R(3)=0x0u;
L8c0a8d92:;
  R(0)=0x38u;
  { ST8(R(15)+R(0),R(3)); goto L8c0a8e00; }
L8c0a8d98:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+32);
  ST32(R(15)+16,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a8de0;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x1f88u;
  R(0)=R(0)&0xFFFF;
  c->fr[2]=0x00000000u;
  R(0)&=R(3);
  c->fpul=R(0);
  fp_float(c,3);
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c0a8de0;
  { R(3)=0x1u; goto L8c0a8de2; }
L8c0a8de0:;
  R(3)=0x0u;
L8c0a8de2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a8dfc;
  R(0)=0x38u;
  R(5)=R(11);
  ST8(R(15)+R(0),R(13));
  R(6)=0x1u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  { c->pr=0x8c0a8df8u; R(4)=R(12); f_8c0a8f0e(c); }
  { R(15)+=0x4u; goto L8c0a8e00; }
L8c0a8dfc:;
  R(0)=0x38u;
  ST8(R(15)+R(0),R(13));
L8c0a8e00:;
  R(0)=0x38u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a8e14;
  R(3)=LD32(R(15));
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(3)+R(0),R(4));
  {  goto L8c0a8e1a; }
L8c0a8e14:;
  R(0)=0x40u;
  R(2)=0x1u;
  ST8(R(15)+R(0),R(2));
L8c0a8e1a:;
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  ST32(R(15)+8,R(3));
  { f_8c0a8e20(c); return; }
}
void f_8c0a8dc0(SH4Ctx *c) {
  ST32(R(15)+32,R(8));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=0x0u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a8dfc;
  R(0)=0x38u;
  R(5)=R(11);
  ST8(R(15)+R(0),R(13));
  R(6)=0x1u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  { c->pr=0x8c0a8df8u; R(4)=R(12); f_8c0a8f0e(c); }
  { R(15)+=0x4u; goto L8c0a8e00; }
L8c0a8dfc:;
  R(0)=0x38u;
  ST8(R(15)+R(0),R(13));
L8c0a8e00:;
  R(0)=0x38u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a8e14;
  R(3)=LD32(R(15));
  R(0)=0x2eu;
  R(4)=0x63u;
  ST16(R(3)+R(0),R(4));
  {  goto L8c0a8e1a; }
L8c0a8e14:;
  R(0)=0x40u;
  R(2)=0x1u;
  ST8(R(15)+R(0),R(2));
L8c0a8e1a:;
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  ST32(R(15)+8,R(3));
  { f_8c0a8e20(c); return; }
}
void f_8c0a8e20(SH4Ctx *c) {
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(10));
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(c->t) goto L8c0a8e2c;
  {  { f_8c0a8980(c); return; } }
L8c0a8e2c:;
  fp_cmp(c,0,14,13);
  if(c->t) goto L8c0a8e40;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(11);
  R(7)=R(15);
  R(6)=0x1u;
  R(7)+=0x60u;
  { c->pr=0x8c0a8e3eu; R(4)=R(12); f_8c0a8f0e(c); }
  R(15)+=0x4u;
L8c0a8e40:;
  R(0)=0x40u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { f_8c0a8e44(c); return; }
}
void f_8c0a8e44(SH4Ctx *c) {
  R(1)=0xc4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
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
void f_8c0a8e60(SH4Ctx *c) {
  ST8(R(0)+R(0),R(12));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  { f_8c0a8e80(c); return; }
}
void f_8c0a8e80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(5);
  ST32(R(15),R(4));
  R(4)=LD32(R(14)+36);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a8f04;
  R(2)=0x8c092bf2u;
  { c->pr=0x8c0a8e98u;  f_8c092bf2(c); }
  R(3)=0x8c04a8d0u;
  { c->pr=0x8c0a8e9eu; R(4)=R(0); f_8c04a8d0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0a8f04;
  R(2)=LD32(R(4)+12);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0a8f04;
  R(0)=0x170u;
  R(5)=R(15);
  c->fr[3]=0x00000000u;
  R(5)+=0x4u;
  R(3)=LD32(R(4)+R(0));
  R(2)=0x8c05e6eau;
  R(0)=LD32(R(3)+4);
  R(0)|=0x80u;
  ST32(R(3)+4,R(0));
  R(0)=0x170u;
  R(3)=0x80u;
  R(13)=LD32(R(4)+R(0));
  R(0)=0x4u;
  R(13)+=R(3);
  fp_st(c,3,R(13));
  R(4)=R(13);
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(2); c->pr=0x8c0a8eecu; R(4)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  R(4)=R(13);
  R(5)+=0x10u;
  { c->pr=0x8c0a8ef8u; R(4)+=0x10u; f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  ST32(R(13)+36,R(2));
  R(3)=LD32(R(14)+28);
  ST32(R(13)+32,R(3));
  R(2)=LD32(R(14)+32);
  ST32(R(13)+28,R(2));
L8c0a8f04:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a8f0e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa8u;
  R(11)=0x0u;
  c->fr[4]=0x00000000u;
  R(0)=0x2cu;
  c->fr[15]=0x3F800000u;
  fp_arith(c,0,15,15);
  c->fr[3]=0x3F800000u;
  ST32(R(15),R(4));
  ST32(R(15)+28,R(5));
  ST32(R(15)+32,R(6));
  ST32(R(15)+36,R(7));
  ST8(R(15)+R(0),R(11));
  R(0)=0x34u;
  ST8(R(15)+R(0),R(11));
  R(0)=R(11);
  ST8(R(15)+8,R(0));
  R(0)=0x10u;
  ST8(R(15)+R(0),R(11));
  R(0)=R(11);
  ST8(R(15)+12,R(0));
  R(0)=0x14u;
  ST8(R(15)+R(0),R(11));
  R(0)=R(11);
  ST8(R(15)+4,R(0));
  R(0)=0x4cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,3,R(0)+R(15));
  { R(8)=R(11); { f_8c0a9306(c); return; } }
}
void f_8c0a8f80(SH4Ctx *c) {
  R(4)=0x68u;
  R(3)=LD32(R(15)+36);
  c->macl=R(8)*R(4);
  R(0)=0x2eu;
  R(13)=c->macl;
  R(13)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a8fa0;
  {  goto L8c0a9304; }
L8c0a8fa0:;
  R(0)=0x7cu;
  R(3)=LD32(R(15)+R(0));
  c->t=(int32_t)R(8)>(int32_t)R(3);
  { uint32_t k=!c->t; fp_ld(c,4,R(13)); if(k) goto L8c0a8fb2; }
  fp_cmp(c,0,15,4);
  if(c->t) goto L8c0a8fb2;
  {  goto L8c0a9300; }
L8c0a8fb2:;
  R(0)=0x2eu;
  R(2)=R(13);
  R(2)+=0x4u;
  ST32(R(15)+40,R(2));
  R(0)=(int32_t)(int16_t)LD16(R(13)+R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0a8fcc; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a8fcc;
  { R(9)=0x0u; goto L8c0a8fce; }
L8c0a8fcc:;
  R(9)=0x1u;
L8c0a8fce:;
  R(0)=0x34u;
  R(12)=0x8c0685b4u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; fp_mov(c,15,4); if(k) goto L8c0a9020; }
  R(4)=R(14);
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a8fe4u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x38u;
  ST8(R(15)+R(0),R(9));
  R(0)=0x34u;
  { ST8(R(15)+R(0),R(10)); goto L8c0a903c; }
L8c0a9020:;
  R(0)=0x38u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a903c;
  R(3)=R(9)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a903c;
  R(4)=R(14);
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a9038u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x38u;
  ST8(R(15)+R(0),R(11));
L8c0a903c:;
  R(4)=LD32(R(13)+40);
  R(0)=0x2u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0a904e;
  R(0)=0x9u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0a9086;
L8c0a904e:;
  R(0)=0x14u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a906a;
  R(4)=0x13cu;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a9060u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x48u;
  ST8(R(15)+R(0),R(9));
  R(0)=0x14u;
  { ST8(R(15)+R(0),R(10)); goto L8c0a9086; }
L8c0a906a:;
  R(0)=0x48u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a9086;
  R(3)=R(9)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9086;
  R(4)=0x13cu;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a9082u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x48u;
  ST8(R(15)+R(0),R(11));
L8c0a9086:;
  R(4)=LD32(R(13)+32);
  ST32(R(15)+24,R(4));
  R(4)=LD32(R(4)+12);
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a90e0;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a90e0;
  { R(3)=0x1u; goto L8c0a90e2; }
L8c0a90e0:;
  R(3)=0x0u;
L8c0a90e2:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a910e;
  R(0)=LD32(R(13)+28);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9106;
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a9106;
  { R(1)=0x1u; goto L8c0a9108; }
L8c0a9106:;
  R(1)=0x0u;
L8c0a9108:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0a9188;
L8c0a910e:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9126;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a9126;
  { R(1)=0x1u; goto L8c0a9128; }
L8c0a9126:;
  R(1)=0x0u;
L8c0a9128:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a91c8;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9180;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x1f88u;
  R(0)=R(0)&0xFFFF;
  c->fr[2]=0x00000000u;
  R(0)&=R(3);
  c->fpul=R(0);
  fp_float(c,3);
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c0a9180;
  { R(2)=0x1u; goto L8c0a9182; }
L8c0a9180:;
  R(2)=0x0u;
L8c0a9182:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a91c8;
L8c0a9188:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a91a2;
  R(4)=0x1a4u;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a9198u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x44u;
  ST8(R(15)+R(0),R(9));
  R(0)=R(10);
  { ST8(R(15)+4,R(0)); goto L8c0a9304; }
L8c0a91a2:;
  R(0)=0x44u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a91ae;
  {  goto L8c0a9304; }
L8c0a91ae:;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0a91b8;
  {  goto L8c0a9304; }
L8c0a91b8:;
  R(4)=0x1a4u;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a91c2u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x44u;
  { ST8(R(15)+R(0),R(11)); goto L8c0a9304; }
L8c0a91c8:;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c0a91d2u; R(4)=LD32(R(15)+40); f_8c05e55c(c); }
  R(2)=LD32(R(15));
  R(0)=0x18u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(2));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a9246;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a9220;
  R(4)=R(14);
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a91eeu; R(4)+=0x6cu; sh4_call(c,tg); }
  R(0)=0x30u;
  ST8(R(15)+R(0),R(9));
  R(0)=R(10);
  { ST8(R(15)+12,R(0)); goto L8c0a9304; }
L8c0a9220:;
  R(0)=0x30u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a922c;
  {  goto L8c0a9304; }
L8c0a922c:;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0a9236;
  {  goto L8c0a9304; }
L8c0a9236:;
  R(4)=R(14);
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a9240u; R(4)+=0x6cu; sh4_call(c,tg); }
  R(0)=0x30u;
  { ST8(R(15)+R(0),R(11)); goto L8c0a9304; }
L8c0a9246:;
  R(4)=LD32(R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(4));
  fp_unary(c,0,5);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0a9290;
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9270;
  R(6)=0x68u;
  R(5)=R(13);
  R(4)=R(6);
  R(4)+=0x6cu;
  { uint32_t tg=R(12); c->pr=0x8c0a9266u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x3cu;
  ST8(R(15)+R(0),R(9));
  R(0)=0x10u;
  { ST8(R(15)+R(0),R(10)); goto L8c0a9304; }
L8c0a9270:;
  R(0)=0x3cu;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a9304;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c0a9304;
  R(6)=0x68u;
  R(5)=R(13);
  R(4)=R(6);
  R(4)+=0x6cu;
  { uint32_t tg=R(12); c->pr=0x8c0a928au; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x3cu;
  { ST8(R(15)+R(0),R(11)); goto L8c0a9304; }
L8c0a9290:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a92aa;
  R(4)=0x20cu;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a92a0u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x40u;
  ST8(R(15)+R(0),R(9));
  R(0)=R(10);
  { ST8(R(15)+8,R(0)); goto L8c0a9304; }
L8c0a92aa:;
  R(0)=0x40u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a9304;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c0a9304;
  R(4)=0x20cu;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a92c2u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x40u;
  { ST8(R(15)+R(0),R(11)); goto L8c0a9304; }
L8c0a9300:;
  R(0)=0x2cu;
  ST8(R(15)+R(0),R(10));
L8c0a9304:;
  R(8)+=0x1u;
  { f_8c0a9306(c); return; }
}
void f_8c0a90c0(SH4Ctx *c) {
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=R(0)>>31;R(0)<<=1;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=0x0u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a910e;
  R(0)=LD32(R(13)+28);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9106;
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a9106;
  { R(1)=0x1u; goto L8c0a9108; }
L8c0a9106:;
  R(1)=0x0u;
L8c0a9108:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0a9188;
L8c0a910e:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9126;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a9126;
  { R(1)=0x1u; goto L8c0a9128; }
L8c0a9126:;
  R(1)=0x0u;
L8c0a9128:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a91c8;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9180;
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(3)=0x1f88u;
  R(0)=R(0)&0xFFFF;
  c->fr[2]=0x00000000u;
  R(0)&=R(3);
  c->fpul=R(0);
  fp_float(c,3);
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c0a9180;
  { R(2)=0x1u; goto L8c0a9182; }
L8c0a9180:;
  R(2)=0x0u;
L8c0a9182:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a91c8;
L8c0a9188:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a91a2;
  R(4)=0x1a4u;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a9198u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x44u;
  ST8(R(15)+R(0),R(9));
  R(0)=R(10);
  { ST8(R(15)+4,R(0)); goto L8c0a9304; }
L8c0a91a2:;
  R(0)=0x44u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a91ae;
  {  goto L8c0a9304; }
L8c0a91ae:;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0a91b8;
  {  goto L8c0a9304; }
L8c0a91b8:;
  R(4)=0x1a4u;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a91c2u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x44u;
  { ST8(R(15)+R(0),R(11)); goto L8c0a9304; }
L8c0a91c8:;
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c0a91d2u; R(4)=LD32(R(15)+40); f_8c05e55c(c); }
  R(2)=LD32(R(15));
  R(0)=0x18u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0)+R(2));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a9246;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a9220;
  R(4)=R(14);
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a91eeu; R(4)+=0x6cu; sh4_call(c,tg); }
  R(0)=0x30u;
  ST8(R(15)+R(0),R(9));
  R(0)=R(10);
  { ST8(R(15)+12,R(0)); goto L8c0a9304; }
L8c0a9220:;
  R(0)=0x30u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0a922c;
  {  goto L8c0a9304; }
L8c0a922c:;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0a9236;
  {  goto L8c0a9304; }
L8c0a9236:;
  R(4)=R(14);
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a9240u; R(4)+=0x6cu; sh4_call(c,tg); }
  R(0)=0x30u;
  { ST8(R(15)+R(0),R(11)); goto L8c0a9304; }
L8c0a9246:;
  R(4)=LD32(R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(4));
  fp_unary(c,0,5);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0a9290;
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9270;
  R(6)=0x68u;
  R(5)=R(13);
  R(4)=R(6);
  R(4)+=0x6cu;
  { uint32_t tg=R(12); c->pr=0x8c0a9266u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x3cu;
  ST8(R(15)+R(0),R(9));
  R(0)=0x10u;
  { ST8(R(15)+R(0),R(10)); goto L8c0a9304; }
L8c0a9270:;
  R(0)=0x3cu;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a9304;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c0a9304;
  R(6)=0x68u;
  R(5)=R(13);
  R(4)=R(6);
  R(4)+=0x6cu;
  { uint32_t tg=R(12); c->pr=0x8c0a928au; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x3cu;
  { ST8(R(15)+R(0),R(11)); goto L8c0a9304; }
L8c0a9290:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a92aa;
  R(4)=0x20cu;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a92a0u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x40u;
  ST8(R(15)+R(0),R(9));
  R(0)=R(10);
  { ST8(R(15)+8,R(0)); goto L8c0a9304; }
L8c0a92aa:;
  R(0)=0x40u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a9304;
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c0a9304;
  R(4)=0x20cu;
  R(5)=R(13);
  R(6)=0x68u;
  { uint32_t tg=R(12); c->pr=0x8c0a92c2u; R(4)+=R(14); sh4_call(c,tg); }
  R(0)=0x40u;
  { ST8(R(15)+R(0),R(11)); goto L8c0a9304; }
L8c0a9304:;
  R(8)+=0x1u;
  { f_8c0a9306(c); return; }
}
void f_8c0a92e0(SH4Ctx *c) {
  R(2)=(int32_t)(int8_t)LD8(R(0)+R(0));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(0)=0x2cu;
  ST8(R(15)+R(0),R(10));
  R(8)+=0x1u;
  { f_8c0a9306(c); return; }
}
void f_8c0a9306(SH4Ctx *c) {
  R(3)=LD32(R(15)+32);
  R(14)=0x8c2e8700u;
  c->t=(int32_t)R(8)>=(int32_t)R(3);
  { uint32_t k=c->t; R(10)=0x1u; if(k) goto L8c0a931c; }
  R(0)=0x2cu;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0a931c;
  {  { f_8c0a8f80(c); return; } }
L8c0a931c:;
  R(0)=0x14u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0a9334;
  R(2)=LD32(R(14));
  R(3)=0x10000u;
  R(5)=0x13cu;
  R(2)|=R(3);
  R(5)+=R(14);
  ST32(R(14),R(2));
  { c->pr=0x8c0a9334u; R(4)=LD32(R(15)+28); f_8c0a8e80(c); }
L8c0a9334:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a9340;
  R(0)=LD32(R(14));
  R(0)|=0x40u;
  ST32(R(14),R(0));
L8c0a9340:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a9362;
  R(3)=LD32(R(14));
  R(3)|=R(10);
  ST32(R(14),R(3));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0a9362;
  R(3)=0x1e0u;
  R(5)=R(14);
  R(2)=0x8c05e6eau;
  R(5)+=0x70u;
  R(4)=LD32(R(15));
  { c->pr=0x8c0a9362u; R(4)+=R(3); f_8c05e6ea(c); }
L8c0a9362:;
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a9386;
  R(0)=LD32(R(14));
  R(0)|=0x4u;
  ST32(R(14),R(0));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0a9386;
  R(5)=0xd8u;
  R(3)=0x1ecu;
  R(2)=0x8c05e6eau;
  R(5)+=R(14);
  R(4)=LD32(R(15));
  { c->pr=0x8c0a9386u; R(4)+=R(3); f_8c05e6ea(c); }
L8c0a9386:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a9392;
  R(0)=LD32(R(14));
  R(0)|=0x10u;
  ST32(R(14),R(0));
L8c0a9392:;
  R(15)+=0x58u;
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
void f_8c0a93e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=0x4000u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(4)+12);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0a948c;
  R(14)=0x8c2e8700u;
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a948c;
  R(0)=0x170u;
  R(5)=R(14);
  R(12)=0x8c0685b4u;
  R(5)+=0x4u;
  R(13)=LD32(R(4)+R(0));
  R(6)=0x28u;
  R(4)=R(13);
  { c->pr=0x8c0a940au; R(4)+=0x8u; f_8c0685b4(c); }
  R(3)=LD32(R(14));
  R(4)=0x10000u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a9424;
  R(1)=LD32(R(13)+4);
  R(6)=0x28u;
  R(5)=0x13cu;
  R(1)|=R(4);
  R(4)=0x80u;
  R(5)+=R(14);
  ST32(R(13)+4,R(1));
  { uint32_t tg=R(12); c->pr=0x8c0a9424u; R(4)+=R(13); sh4_call(c,tg); }
L8c0a9424:;
  R(3)=LD32(R(14));
  R(4)=0x40u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a943e;
  R(1)=LD32(R(13)+4);
  R(6)=0x28u;
  R(5)=0x1a4u;
  R(1)|=R(4);
  R(4)=0xa8u;
  R(5)+=R(14);
  ST32(R(13)+4,R(1));
  { uint32_t tg=R(12); c->pr=0x8c0a943eu; R(4)+=R(13); sh4_call(c,tg); }
L8c0a943e:;
  R(3)=LD32(R(14));
  R(4)=0x1u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a9458;
  R(1)=LD32(R(13)+4);
  R(5)=R(14);
  R(5)+=0x6cu;
  R(1)|=R(4);
  R(4)=R(13);
  ST32(R(13)+4,R(1));
  R(6)=0x28u;
  { uint32_t tg=R(12); c->pr=0x8c0a9458u; R(4)+=0x30u; sh4_call(c,tg); }
L8c0a9458:;
  R(3)=LD32(R(14));
  R(4)=0x4u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a9472;
  R(1)=LD32(R(13)+4);
  R(6)=0x28u;
  R(5)=0xd4u;
  R(1)|=R(4);
  R(4)=R(13);
  R(5)+=R(14);
  ST32(R(13)+4,R(1));
  { uint32_t tg=R(12); c->pr=0x8c0a9472u; R(4)+=0x58u; sh4_call(c,tg); }
L8c0a9472:;
  R(3)=LD32(R(14));
  R(4)=0x10u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0a948c;
  R(1)=LD32(R(13)+4);
  R(6)=0x28u;
  R(5)=0x20cu;
  R(1)|=R(4);
  R(4)=0xd0u;
  R(5)+=R(14);
  ST32(R(13)+4,R(1));
  { uint32_t tg=R(12); c->pr=0x8c0a948cu; R(4)+=R(13); sh4_call(c,tg); }
L8c0a948c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a94c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb8u;
  R(0)=0x68u;
  ST32(R(15),R(4));
  R(9)=LD32(R(15)+R(0));
  R(13)=0x0u;
  R(0)=0x10u;
  c->fr[4]=0x00000000u;
  ST8(R(15)+R(0),R(13));
  R(0)=0x4u;
  R(11)=R(7);
  R(12)=R(13);
  R(10)=R(6);
  ST32(R(15)+4,R(13));
  R(4)=LD32(R(15));
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
  { R(4)=R(12); { f_8c0a9598(c); return; } }
}
void f_8c0a94f8(SH4Ctx *c) {
  c->macl=R(4)*R(8);
  R(0)=0x2eu;
  R(14)=c->macl;
  R(14)+=R(11);
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0a9596;
  R(0)=LD32(R(14)+32);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a952c;
  R(2)=LD32(R(14)+32);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a952c;
  { R(3)=0x1u; goto L8c0a952e; }
L8c0a952c:;
  R(3)=0x0u;
L8c0a952e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a958c;
  R(0)=LD32(R(14)+28);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9580;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a9580;
  { R(1)=0x1u; goto L8c0a9582; }
L8c0a9580:;
  R(1)=0x0u;
L8c0a9582:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a958c;
  { R(3)=0x1u; goto L8c0a958e; }
L8c0a958c:;
  R(3)=0x0u;
L8c0a958e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a9596;
  ST32(R(15)+4,R(14));
L8c0a9596:;
  R(4)+=0x1u;
  { f_8c0a9598(c); return; }
}
void f_8c0a9560(SH4Ctx *c) {
  c->t=R(0)>>31;R(0)<<=1;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(1)=0x0u;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a958c;
  { R(3)=0x1u; goto L8c0a958e; }
L8c0a958c:;
  R(3)=0x0u;
L8c0a958e:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a9596;
  ST32(R(15)+4,R(14));
L8c0a9596:;
  R(4)+=0x1u;
  { f_8c0a9598(c); return; }
}
void f_8c0a9598(SH4Ctx *c) {
  c->t=(int32_t)R(4)>=(int32_t)R(10);
  { uint32_t k=c->t; R(8)=0x68u; if(k) goto L8c0a95a4; }
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) { f_8c0a94f8(c); return; }
L8c0a95a4:;
  { R(3)=0x1u; { f_8c0a98aa(c); return; } }
}
void f_8c0a95a8(SH4Ctx *c) {
  R(0)=0x14u;
  R(1)=0x1u;
  ST8(R(15)+R(0),R(1));
  { ST32(R(15)+12,R(13)); { f_8c0a9894(c); return; } }
}
void f_8c0a95b2(SH4Ctx *c) {
  R(14)=LD32(R(15)+12);
  R(3)=LD32(R(15)+8);
  c->macl=R(14)*R(8);
  R(14)=c->macl;
  R(14)+=R(11);
  R(2)=LD32(R(14)+40);
  R(2)&=R(3);
  c->t=R(2)==R(3);
  if(c->t) goto L8c0a95c8;
  {  goto L8c0a988e; }
L8c0a95c8:;
  R(1)=LD32(R(15)+12);
  c->t=(int32_t)R(1)>(int32_t)R(9);
  if(!c->t) goto L8c0a95e0;
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a95e0;
  {  goto L8c0a988a; }
L8c0a95e0:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a95f6;
  {  goto L8c0a988e; }
L8c0a95f6:;
  R(0)=LD32(R(14)+32);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9612;
  R(2)=LD32(R(14)+32);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0a9612;
  { R(3)=0x1u; goto L8c0a9614; }
L8c0a9612:;
  R(3)=0x0u;
L8c0a9614:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a9680;
  R(0)=LD32(R(14)+28);
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0a9638;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  R(3)=0x4000u;
  R(0)=R(0)&0xFFFF;
  R(2)=R(3);
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0a9638;
  { R(1)=0x1u; goto L8c0a963a; }
L8c0a9638:;
  R(1)=0x0u;
L8c0a963a:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a9680;
  { R(3)=0x1u; goto L8c0a9682; }
L8c0a9680:;
  R(3)=0x0u;
L8c0a9682:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a968c;
  {  goto L8c0a988e; }
L8c0a968c:;
  R(1)=R(12)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0a9696;
  {  goto L8c0a987c; }
L8c0a9696:;
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  R(4)=R(15);
  R(5)+=0x30u;
  { c->pr=0x8c0a96a2u; R(4)+=0x24u; f_8c05e6ea(c); }
  R(3)=LD32(R(15));
  R(0)=0x8c0a9804u;
  fp_ld(c,5,R(0));
  R(0)=0x8c0a9808u;
  fp_ld(c,7,R(3));
  fp_ld(c,4,R(0));
  fp_mov(c,6,7);
  fp_arith(c,0,6,4);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c0a96bc;
  { fp_mov(c,3,6); goto L8c0a96c6; }
L8c0a96bc:;
  fp_mov(c,2,7);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a96c6:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a971e;
  R(3)=LD32(R(15));
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,0,3,4);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a96e2;
  R(2)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(2));
  { fp_arith(c,0,3,4); goto L8c0a96ee; }
L8c0a96e2:;
  R(3)=LD32(R(15));
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a96ee:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a971e;
  R(3)=LD32(R(15));
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,0,3,4);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a970a;
  R(2)=LD32(R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  { fp_arith(c,0,3,4); goto L8c0a9716; }
L8c0a970a:;
  R(3)=LD32(R(15));
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a9716:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a971e;
  { R(3)=0x1u; goto L8c0a9720; }
L8c0a971e:;
  R(3)=0x0u;
L8c0a9720:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9764;
  R(4)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,6,R(4));
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x18u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x20u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c0a976e; }
L8c0a9764:;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c0a976eu; R(4)+=0x18u; f_8c05e6ea(c); }
L8c0a976e:;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0a977au; R(4)+=0x18u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a982e;
  R(4)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,5,R(4));
  fp_mov(c,2,6);
  fp_arith(c,2,2,6);
  fp_mov(c,0,5);
  fp_ld(c,7,R(0)+R(4));
  fp_fmac(c,2,5);
  fp_mov(c,0,7);
  fp_fmac(c,2,7);
  fp_unary(c,2,2);
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c0a9820;
  R(0)=0x18u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  fp_arith(c,2,1,2);
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x24u;
  R(6)+=0x3cu;
  fp_st(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a97d2u; R(4)+=0x30u; sh4_call(c,tg); }
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=0x30u;
  { c->pr=0x8c0a97deu; R(4)=R(5); f_8c05e5f4(c); }
  {  goto L8c0a988e; }
L8c0a9820:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0a982au; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  {  goto L8c0a988e; }
L8c0a982e:;
  R(0)=0x10u;
  R(3)=0x1u;
  ST8(R(15)+R(0),R(3));
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a988e;
  R(0)=0x18u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  fp_arith(c,2,1,2);
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x24u;
  R(6)+=0x3cu;
  fp_st(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a986cu; R(4)+=0x30u; sh4_call(c,tg); }
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=0x30u;
  { c->pr=0x8c0a9878u; R(4)=R(5); f_8c05e5f4(c); }
  {  goto L8c0a988e; }
L8c0a987c:;
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  R(5)+=0x30u;
  { c->pr=0x8c0a9886u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  { R(12)=0x1u; goto L8c0a988e; }
L8c0a988a:;
  R(0)=0x14u;
  ST8(R(15)+R(0),R(13));
L8c0a988e:;
  R(3)=LD32(R(15)+12);
  R(3)+=0x1u;
  ST32(R(15)+12,R(3));
  { f_8c0a9894(c); return; }
}
void f_8c0a9660(SH4Ctx *c) {
  c->t=R(0)>>31;R(0)<<=1;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=0x0u;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a968c;
  {  goto L8c0a988e; }
L8c0a968c:;
  R(1)=R(12)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0a9696;
  {  goto L8c0a987c; }
L8c0a9696:;
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  R(4)=R(15);
  R(5)+=0x30u;
  { c->pr=0x8c0a96a2u; R(4)+=0x24u; f_8c05e6ea(c); }
  R(3)=LD32(R(15));
  R(0)=0x8c0a9804u;
  fp_ld(c,5,R(0));
  R(0)=0x8c0a9808u;
  fp_ld(c,7,R(3));
  fp_ld(c,4,R(0));
  fp_mov(c,6,7);
  fp_arith(c,0,6,4);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c0a96bc;
  { fp_mov(c,3,6); goto L8c0a96c6; }
L8c0a96bc:;
  fp_mov(c,2,7);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a96c6:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a971e;
  R(3)=LD32(R(15));
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,0,3,4);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a96e2;
  R(2)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(2));
  { fp_arith(c,0,3,4); goto L8c0a96ee; }
L8c0a96e2:;
  R(3)=LD32(R(15));
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a96ee:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a971e;
  R(3)=LD32(R(15));
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,0,3,4);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0a970a;
  R(2)=LD32(R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  { fp_arith(c,0,3,4); goto L8c0a9716; }
L8c0a970a:;
  R(3)=LD32(R(15));
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a9716:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a971e;
  { R(3)=0x1u; goto L8c0a9720; }
L8c0a971e:;
  R(3)=0x0u;
L8c0a9720:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9764;
  R(4)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,6,R(4));
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_mov(c,0,6);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x18u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x20u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c0a976e; }
L8c0a9764:;
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c0a976eu; R(4)+=0x18u; f_8c05e6ea(c); }
L8c0a976e:;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0a977au; R(4)+=0x18u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a982e;
  R(4)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,5,R(4));
  fp_mov(c,2,6);
  fp_arith(c,2,2,6);
  fp_mov(c,0,5);
  fp_ld(c,7,R(0)+R(4));
  fp_fmac(c,2,5);
  fp_mov(c,0,7);
  fp_fmac(c,2,7);
  fp_unary(c,2,2);
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c0a9820;
  R(0)=0x18u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  fp_arith(c,2,1,2);
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x24u;
  R(6)+=0x3cu;
  fp_st(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a97d2u; R(4)+=0x30u; sh4_call(c,tg); }
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=0x30u;
  { c->pr=0x8c0a97deu; R(4)=R(5); f_8c05e5f4(c); }
  {  goto L8c0a988e; }
L8c0a9820:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0a982au; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  {  goto L8c0a988e; }
L8c0a982e:;
  R(0)=0x10u;
  R(3)=0x1u;
  ST8(R(15)+R(0),R(3));
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0a988e;
  R(0)=0x18u;
  fp_mov(c,1,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  fp_arith(c,2,1,2);
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x24u;
  R(6)+=0x3cu;
  fp_st(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a986cu; R(4)+=0x30u; sh4_call(c,tg); }
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=0x30u;
  { c->pr=0x8c0a9878u; R(4)=R(5); f_8c05e5f4(c); }
  {  goto L8c0a988e; }
L8c0a987c:;
  R(3)=0x8c05e6eau;
  R(5)=R(14);
  R(5)+=0x30u;
  { c->pr=0x8c0a9886u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  { R(12)=0x1u; goto L8c0a988e; }
L8c0a988e:;
  R(3)=LD32(R(15)+12);
  R(3)+=0x1u;
  ST32(R(15)+12,R(3));
  { f_8c0a9894(c); return; }
}
void f_8c0a9894(SH4Ctx *c) {
  R(2)=LD32(R(15)+12);
  c->t=(int32_t)R(2)>=(int32_t)R(10);
  if(c->t) goto L8c0a98a6;
  R(0)=0x14u;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a98a6;
  {  { f_8c0a95b2(c); return; } }
L8c0a98a6:;
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  { f_8c0a98aa(c); return; }
}
void f_8c0a98aa(SH4Ctx *c) {
  R(4)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(4);
  { uint32_t k=c->t; ST32(R(15)+8,R(3)); if(k) goto L8c0a98b6; }
  {  { f_8c0a95a8(c); return; } }
L8c0a98b6:;
  R(1)=LD32(R(15)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a994c;
  R(14)=LD32(R(15)+4);
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0xcu;
  fp_mov(c,0,5);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(13)=LD32(R(15));
  R(4)=R(15);
  R(3)=0x8c05e55cu;
  R(5)=R(13);
  { c->pr=0x8c0a9908u; R(4)+=0x18u; f_8c05e55c(c); }
  R(0)=0x8c0a99f0u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,0,4,3);
  R(6)=R(15);
  R(3)=0x8c05e612u;
  R(5)=R(13);
  R(6)+=0x3cu;
  fp_mov(c,5,0);
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0a9940u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0x8c05e5f4u;
  R(6)=R(14);
  R(5)=R(13);
  R(6)+=0x30u;
  { c->pr=0x8c0a994cu; R(4)=R(13); f_8c05e5f4(c); }
L8c0a994c:;
  R(0)=0x10u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(15)+=0x48u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0a9968(SH4Ctx *c) {
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
  R(15)+=0xffffffc4u;
  R(3)=0x0u;
  R(8)=R(7);
  R(11)=R(3);
  R(9)=R(3);
  R(1)=0xffffffbfu;
  ST32(R(15),R(4));
  c->t=(R(8)&R(8))==0;
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(3));
  R(3)=LD32(R(15));
  R(2)=R(3);
  R(0)=LD32(R(2)+12);
  R(0)&=R(1);
  ST32(R(2)+12,R(0));
  ST32(R(3)+12,R(0));
  { uint32_t k=!c->t; R(10)=R(5); if(k) goto L8c0a9a26; }
  R(13)=0x0u;
  { R(14)=LD32(R(15)+4); goto L8c0a9a12; }
L8c0a99a6:;
  R(0)=0x2eu;
  R(4)=R(14);
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(int32_t)R(0)==99;
  R(12)=c->t;
  R(12)+=0xffffffffu;
  R(12)=0u-R(12);
  R(12)=R(12)&0xFF;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0a9a0e;
  R(3)=0x8c090dacu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0a99c4u; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a9a0e;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0a9a00; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a9a00;
  { R(3)=0x0u; goto L8c0a9a02; }
L8c0a9a00:;
  R(3)=0x1u;
L8c0a9a02:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9a0c;
  {  goto L8c0a9f72; }
L8c0a9a0c:;
  R(8)=R(14);
L8c0a9a0e:;
  R(14)+=0x68u;
  R(13)+=0x1u;
L8c0a9a12:;
  c->t=(int32_t)R(13)>=(int32_t)R(10);
  if(c->t) goto L8c0a9a1a;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0a99a6;
L8c0a9a1a:;
  c->t=(R(8)&R(8))==0;
  if(!c->t) goto L8c0a9a22;
  {  goto L8c0a9f72; }
L8c0a9a22:;
  {  goto L8c0a9a46; }
L8c0a9a26:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(8)+R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0a9a3a; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a9a3a;
  { R(3)=0x0u; goto L8c0a9a3c; }
L8c0a9a3a:;
  R(3)=0x1u;
L8c0a9a3c:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9a46;
  {  goto L8c0a9f72; }
L8c0a9a46:;
  R(0)=LD32(R(8)+40);
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a9a58;
  {  goto L8c0a9f72; }
L8c0a9a58:;
  R(2)=0x8c05e6eau;
  R(5)=R(8);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c0a9a64u; R(4)+=0x30u; f_8c05e6ea(c); }
  R(5)=R(8);
  R(3)=0x8c05e5f4u;
  R(6)=R(8);
  R(4)=R(15);
  R(6)+=0x30u;
  R(5)+=0x48u;
  { c->pr=0x8c0a9a74u; R(4)+=0xcu; f_8c05e5f4(c); }
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x30u;
  R(5)+=0xcu;
  { c->pr=0x8c0a9a84u; R(4)+=0xcu; f_8c05e612(c); }
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,0,4);
  R(13)=0x0u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { R(14)=LD32(R(15)+4); goto L8c0a9d60; }
L8c0a9ac8:;
  R(0)=0x2eu;
  R(5)=R(14);
  R(0)=(int32_t)(int16_t)LD16(R(5)+R(0));
  c->t=(int32_t)R(0)==99;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  R(4)=0u-R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a9ae0;
  {  goto L8c0a9d5c; }
L8c0a9ae0:;
  R(5)=R(14);
  R(12)=0x8c090dacu;
  R(5)+=0x4u;
  { c->pr=0x8c0a9aeau; R(4)=LD32(R(15)); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a9af4;
  {  goto L8c0a9bc4; }
L8c0a9af4:;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0a9b08; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0a9b08;
  { R(3)=0x0u; goto L8c0a9b0a; }
L8c0a9b08:;
  R(3)=0x1u;
L8c0a9b0a:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9b14;
  {  goto L8c0a9f72; }
L8c0a9b14:;
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(6)=R(14);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x30u;
  { c->pr=0x8c0a9b24u; R(4)+=0x24u; f_8c05e612(c); }
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,5,4);
  fp_arith(c,0,5,15);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a9b36;
  { fp_mov(c,3,5); goto L8c0a9b40; }
L8c0a9b36:;
  fp_mov(c,2,4);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a9b40:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9bb4;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a9b80;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a9b8a; }
L8c0a9b80:;
  R(0)=0x28u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a9b8a:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9bb4;
  R(0)=0x2cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a9ba2;
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a9bac; }
L8c0a9ba2:;
  R(0)=0x2cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a9bac:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9bb4;
  { R(3)=0x1u; goto L8c0a9bb6; }
L8c0a9bb4:;
  R(3)=0x0u;
L8c0a9bb6:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9bc0;
  {  goto L8c0a9d5c; }
L8c0a9bc0:;
  { R(9)+=0x1u; goto L8c0a9d5c; }
L8c0a9bc4:;
  R(0)=0x2eu;
  R(5)=R(14);
  R(0)=(int32_t)(int16_t)LD16(R(5)+R(0));
  c->t=(int32_t)R(0)==8;
  R(4)=c->t;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0a9bd8;
  {  goto L8c0a9d00; }
L8c0a9bd8:;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(14);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x30u;
  { c->pr=0x8c0a9be8u; R(4)+=0x24u; f_8c05e612(c); }
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,5,4);
  fp_arith(c,0,5,15);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a9bfa;
  { fp_mov(c,3,5); goto L8c0a9c04; }
L8c0a9bfa:;
  fp_mov(c,2,4);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a9c04:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9c80;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a9c1c;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a9c26; }
L8c0a9c1c:;
  R(0)=0x28u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a9c26:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9c80;
  R(0)=0x2cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a9c3e;
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a9c48; }
L8c0a9c3e:;
  R(0)=0x2cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a9c48:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9c80;
  { R(3)=0x1u; goto L8c0a9c82; }
L8c0a9c80:;
  R(3)=0x0u;
L8c0a9c82:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0a9d5c;
  R(0)=0x8c0a9ce4u;
  R(3)=LD32(R(15));
  fp_ld(c,4,R(0));
  R(0)=0x194u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0a9cb0;
  R(2)=0x8c05e55cu;
  R(5)=R(14);
  R(4)=R(8);
  R(5)+=0x4u;
  { c->pr=0x8c0a9ca2u; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c0a9cecu;
  fp_mov(c,4,0);
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0a9cb0;
  {  goto L8c0a9f72; }
L8c0a9cb0:;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0xcu;
  { c->pr=0x8c0a9cbcu; R(4)+=0x4u; f_8c05e55c(c); }
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; fp_mov(c,4,0); if(k) goto L8c0a9d5c; }
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a9d5c;
  R(4)=0x1u;
  R(11)=R(4);
  { ST32(R(15)+8,R(14)); goto L8c0a9d5c; }
L8c0a9d00:;
  R(5)=R(14);
  R(12)=0x8c090d60u;
  R(5)+=0x4u;
  { c->pr=0x8c0a9d0au; R(4)=LD32(R(15)); f_8c090d60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0a9d5c;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(0)==7;
  R(0)=c->t;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0a9d5c;
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(6)=R(14);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x30u;
  { c->pr=0x8c0a9d2eu; R(4)+=0x24u; f_8c05e612(c); }
  R(3)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(8);
  R(5)+=0x24u;
  { c->pr=0x8c0a9d3au; R(4)+=0x4u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0a9d5c;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x24u;
  { c->pr=0x8c0a9d4eu; R(4)+=0x4u; f_8c05e55c(c); }
  R(0)=0x8c0a9eacu;
  fp_mov(c,5,0);
  fp_ld(c,4,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0a9d5c;
  {  goto L8c0a9f72; }
L8c0a9d5c:;
  R(14)+=0x68u;
  R(13)+=0x1u;
L8c0a9d60:;
  R(0)=0x8c0a9eb0u;
  c->t=(int32_t)R(13)>=(int32_t)R(10);
  fp_ld(c,14,R(0));
  R(0)=0x8c0a9eb4u;
  { uint32_t k=c->t; fp_ld(c,15,R(0)); if(k) goto L8c0a9d70; }
  {  goto L8c0a9ac8; }
L8c0a9d70:;
  R(2)=0x2u;
  c->t=(int32_t)R(9)>=(int32_t)R(2);
  if(!c->t) goto L8c0a9d7a;
  {  goto L8c0a9f72; }
L8c0a9d7a:;
  R(1)=R(11)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0a9e00;
  R(6)=LD32(R(15)+8);
  R(5)=R(8);
  R(3)=0x8c05e5f4u;
  R(4)=R(15);
  R(6)+=0x4u;
  R(5)+=0x4u;
  { c->pr=0x8c0a9d90u; R(4)+=0x18u; f_8c05e5f4(c); }
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,0,4,15);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0a9da2;
  { fp_mov(c,3,4); goto L8c0a9dac; }
L8c0a9da2:;
  fp_mov(c,2,5);
  fp_mov(c,1,3);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0a9dac:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9df8;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a9dc4;
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a9dce; }
L8c0a9dc4:;
  R(0)=0x1cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a9dce:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9df8;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a9de6;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a9df0; }
L8c0a9de6:;
  R(0)=0x20u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_arith(c,0,3,2);
L8c0a9df0:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9df8;
  { R(11)=0x1u; goto L8c0a9dfa; }
L8c0a9df8:;
  R(11)=0x0u;
L8c0a9dfa:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  R(11)=c->t;
L8c0a9e00:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0a9e5a;
  R(0)=0x18u;
  R(5)=R(15);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,0,5);
  R(5)+=0x18u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x18u;
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(3)=0x8c05e55cu;
  R(4)=R(15);
  { c->pr=0x8c0a9e4eu; R(4)+=0xcu; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0a9e5a;
  {  goto L8c0a9f72; }
L8c0a9e5a:;
  R(0)=0x8c0a9ebcu;
  fp_ld(c,3,R(0));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0a9e6a;
  {  goto L8c0a9f72; }
L8c0a9e6a:;
  R(2)=LD32(R(15));
  R(3)=R(2);
  R(0)=LD32(R(3)+12);
  R(0)|=0x40u;
  ST32(R(3)+12,R(0));
  ST32(R(2)+12,R(0));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c0a9e82;
  {  goto L8c0a9f72; }
L8c0a9e82:;
  R(0)=0x14u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,6,R(0)+R(15));
  c->fr[3]=0x00000000u;
  fp_mov(c,5,6);
  fp_arith(c,0,5,15);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0a9ec0;
  { fp_mov(c,3,5); goto L8c0a9ec8; }
L8c0a9ec0:;
  fp_mov(c,2,6);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,4);
L8c0a9ec8:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9f14;
  R(0)=0x10u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a9ee0;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a9eea; }
L8c0a9ee0:;
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,4);
L8c0a9eea:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9f14;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,15);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0a9f02;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,0,3,15); goto L8c0a9f0c; }
L8c0a9f02:;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,4);
L8c0a9f0c:;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0a9f14;
  { R(3)=0x1u; goto L8c0a9f16; }
L8c0a9f14:;
  R(3)=0x0u;
L8c0a9f16:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0a9f58;
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  { fp_arith(c,2,4,3); goto L8c0a9f60; }
L8c0a9f58:;
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
L8c0a9f60:;
  R(3)=0x220u;
  R(5)=R(15);
  R(0)=0x14u;
  R(2)=0x8c05e6eau;
  fp_st(c,4,R(0)+R(15));
  R(5)+=0xcu;
  R(4)=LD32(R(15));
  { c->pr=0x8c0a9f72u; R(4)+=R(3); f_8c05e6ea(c); }
L8c0a9f72:;
  R(15)+=0x3cu;
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
void f_8c0a9f8a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  R(3)=0xfff7ffffu;
  R(4)=0x0u;
  R(14)=R(6);
  ST32(R(15),R(5));
  R(12)=R(4);
  R(2)=LD32(R(13)+12);
  R(11)=R(4);
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
  { R(10)=R(11); goto L8c0aa022; }
L8c0a9fe0:;
  R(0)=0x2eu;
  R(4)=R(14);
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(int32_t)R(0)==99;
  R(5)=c->t;
  R(5)+=0xffffffffu;
  R(5)=0u-R(5);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0aa01e;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0aa00a;
  R(2)=0x8c090dacu;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0aa002u; R(4)=R(13); f_8c090dac(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0aa00a;
  R(12)=R(14);
L8c0aa00a:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0aa01e;
  R(3)=0x8c090decu;
  R(5)=R(14);
  { c->pr=0x8c0aa016u; R(4)=R(13); f_8c090dec(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0aa01e;
  R(11)=R(14);
L8c0aa01e:;
  R(10)+=0x1u;
  R(14)+=0x68u;
L8c0aa022:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  if(!c->t) goto L8c0a9fe0;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0aa05c;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0aa05c;
  R(0)=LD32(R(12)+40);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0aa042;
  R(2)=0x8c090fb8u;
  { c->pr=0x8c0aa03cu; R(4)=R(12); f_8c090fb8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0aa054;
L8c0aa042:;
  R(0)=LD32(R(11)+40);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0aa05c;
  R(3)=0x8c090fb8u;
  { c->pr=0x8c0aa04eu; R(4)=R(11); f_8c090fb8(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0aa05c;
L8c0aa054:;
  R(2)=LD32(R(13)+12);
  R(3)=0x80000u;
  R(2)|=R(3);
  ST32(R(13)+12,R(2));
L8c0aa05c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aa0a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  R(14)=R(4);
  R(0)=0x24u;
  R(4)=0xe0u;
  R(12)=R(6);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x1cu;
  R(4)+=R(14);
  fp_st(c,6,R(0)+R(15));
  R(11)=R(4);
  R(3)=0x8c05e612u;
  R(11)+=0x58u;
  R(4)=R(15);
  R(0)=0x20u;
  fp_mov(c,15,4);
  fp_st(c,7,R(0)+R(15));
  ST32(R(15)+24,R(5));
  R(5)=R(14);
  R(5)+=0x78u;
  R(10)=R(5);
  R(10)+=0x58u;
  R(5)=R(11);
  R(6)=R(10);
  { uint32_t tg=R(3); c->pr=0x8c0aa0e0u; R(4)+=0x40u; sh4_call(c,tg); }
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  R(5)=LD32(R(15)+24);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c0aa0fc; }
  R(3)=0x8c0153d8u;
  { c->pr=0x8c0aa0f4u;  f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c0aa0fc:;
  R(4)=R(14);
  R(4)+=0x3cu;
  fp_ld(c,3,R(4));
  R(0)=0x34u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x38u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x3cu;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x10)==0;
  if(!c->t) goto L8c0aa138;
  R(6)=0x1d4u;
  R(5)=R(15);
  R(2)=0x8c05e612u;
  R(4)=R(15);
  R(6)+=R(14);
  R(5)+=0x34u;
  { c->pr=0x8c0aa138u; R(4)+=0x34u; f_8c05e612(c); }
L8c0aa138:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x40u;
  { c->pr=0x8c0aa146u; R(4)+=0x40u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x34u;
  { uint32_t tg=R(14); c->pr=0x8c0aa152u; R(4)+=0x34u; sh4_call(c,tg); }
  R(0)=0x40u;
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x14u;
  R(0)=0x44u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x10u;
  R(0)=0x48u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0xcu;
  R(0)=0x34u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x8u;
  R(0)=0x38u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x4u;
  R(0)=0x3cu;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,3,R(3));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,1,3,0);
  fp_mov(c,2,3);
  fp_mov(c,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,1,3,0);
  fp_mov(c,2,3);
  fp_mov(c,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(15));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,1,3,0);
  fp_mov(c,2,3);
  fp_mov(c,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(15));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  c->fr[4]=0x3F800000u;
  fp_arith(c,3,4,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  R(6)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c0aa254u;
  fp_ld(c,5,R(0));
  R(0)=0x8c0aa258u;
  fp_ld(c,3,R(0));
  R(0)=0x8c0aa25cu;
  fp_ld(c,1,R(0));
  R(0)=0x8c0aa260u;
  fp_ld(c,0,R(0));
  R(0)=0x8c0aa264u;
  fp_mov(c,2,4);
  fp_arith(c,0,2,3);
  fp_arith(c,1,0,4);
  fp_ld(c,3,R(0));
  fp_arith(c,2,2,1);
  fp_arith(c,2,0,3);
  fp_arith(c,3,2,5);
  fp_arith(c,3,0,5);
  fp_mov(c,15,2);
  fp_arith(c,0,15,0);
  R(5)=LD32(R(15)+24);
  R(4)=R(15);
  R(6)+=0x28u;
  { uint32_t tg=R(14); c->pr=0x8c0aa21cu; R(4)+=0x28u; sh4_call(c,tg); }
  R(3)=0x8c091fbeu;
  R(4)=R(15);
  fp_mov(c,4,15);
  { c->pr=0x8c0aa226u; R(4)+=0x28u; f_8c091fbe(c); }
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x28u;
  { R(4)=R(11); goto L8c0aa280; }
L8c0aa280:;
  R(2)=0x8c05e5f4u;
  { c->pr=0x8c0aa286u;  f_8c05e5f4(c); }
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aa298(SH4Ctx *c) {
  R(2)=LD32(R(4)+12);
  R(0)=0x10u;
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=!c->t; fp_ld(c,5,R(0)+R(4)); if(k) goto L8c0aa2d0; }
  c->fr[3]=0x3F800000u;
  fp_arith(c,2,5,3);
  R(5)=0xe0u;
  R(6)=R(4);
  R(0)=0x8u;
  R(5)+=R(4);
  fp_unary(c,0,5);
  R(4)+=0x3cu;
  fp_mov(c,2,5);
  R(6)+=0x78u;
  fp_mov(c,5,4);
  fp_arith(c,2,5,2);
  fp_ld(c,2,R(0)+R(4));
  R(6)+=0x58u;
  R(5)+=0x58u;
  fp_arith(c,0,5,2);
  fp_mov(c,2,5);
  fp_mov(c,5,4);
  fp_arith(c,2,5,2);
  fp_ld(c,4,R(0)+R(6));
  fp_arith(c,0,4,5);
  fp_st(c,4,R(0)+R(5));
L8c0aa2d0:;
  {  return; }
}
void f_8c0aa300(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  R(3)=0x400u;
  R(13)=0x8c092002u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; fp_mov(c,14,4); if(k) goto L8c0aa34e; }
  R(0)=0x174u;
  R(4)=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0aa32au; fp_ld(c,4,R(0)+R(14)); sh4_call(c,tg); }
  R(0)=0x178u;
  R(4)=0x1u;
  fp_mov(c,13,0);
  { uint32_t tg=R(13); c->pr=0x8c0aa334u; fp_ld(c,4,R(0)+R(14)); sh4_call(c,tg); }
  R(0)=0x17cu;
  R(4)=0x1u;
  fp_mov(c,15,0);
  { uint32_t tg=R(13); c->pr=0x8c0aa33eu; fp_ld(c,4,R(0)+R(14)); sh4_call(c,tg); }
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  fp_mov(c,5,13);
  fp_mov(c,4,14);
  fp_mov(c,7,0);
  fp_mov(c,6,15);
  { c->pr=0x8c0aa34eu; R(4)=R(14); f_8c0aa0a0(c); }
L8c0aa34e:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0aa3a8;
  R(2)=LD32(R(14)+12);
  R(3)=0x20000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa3a8;
  R(0)=0x194u;
  fp_ld(c,4,R(0)+R(14));
  { uint32_t tg=R(13); c->pr=0x8c0aa364u; R(4)=0x1u; sh4_call(c,tg); }
  R(0)=0x188u;
  R(4)=0x0u;
  fp_mov(c,15,0);
  { uint32_t tg=R(13); c->pr=0x8c0aa36eu; fp_ld(c,4,R(0)+R(14)); sh4_call(c,tg); }
  fp_mov(c,12,15);
  fp_arith(c,2,12,0);
  R(0)=0x18cu;
  R(4)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c0aa37au; fp_ld(c,4,R(0)+R(14)); sh4_call(c,tg); }
  fp_mov(c,13,15);
  fp_arith(c,2,13,0);
  R(0)=0x190u;
  R(4)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c0aa386u; fp_ld(c,4,R(0)+R(14)); sh4_call(c,tg); }
  fp_mov(c,7,15);
  fp_arith(c,2,7,0);
  R(5)=LD32(R(15));
  R(4)=R(14);
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,14);
  fp_mov(c,6,13);
  fp_mov(c,5,12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0aa0a0(c); return; } }
L8c0aa3a8:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aa3e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(0)=0x204u;
  R(14)=R(4);
  R(13)=0xe0u;
  R(7)=R(15);
  R(6)=R(15);
  R(3)=0x8c015ea8u;
  R(5)=R(15);
  R(12)=R(4);
  fp_ld(c,15,R(0)+R(14));
  R(5)+=0x8u;
  R(13)+=R(14);
  R(7)+=0x14u;
  R(12)+=0x78u;
  R(6)+=0x10u;
  { c->pr=0x8c0aa40cu; R(4)=R(12); f_8c015ea8(c); }
  R(5)=R(15);
  R(6)=R(15);
  R(2)=0x8c015ea8u;
  R(5)+=0xcu;
  R(7)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c0aa41cu; R(4)=R(13); f_8c015ea8(c); }
  R(3)=0x8c05e55cu;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0aa424u; R(4)=LD32(R(15)+8); f_8c05e55c(c); }
  R(0)=0x200u;
  fp_mov(c,7,0);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x40u;
  fp_ld(c,4,R(0)+R(14));
  fp_arith(c,2,7,3);
  fp_mov(c,0,5);
  R(0)=0x44u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x8c0aa514u;
  fp_mov(c,4,7);
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  c->fr[5]=0x3F800000u;
  fp_mov(c,2,5);
  fp_arith(c,1,2,15);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0));
  R(0)=0x20cu;
  fp_arith(c,3,4,3);
  fp_ld(c,3,R(0)+R(14));
  fp_mov(c,1,3);
  fp_arith(c,2,1,15);
  fp_mov(c,0,4);
  fp_fmac(c,1,2);
  fp_mov(c,15,1);
  fp_arith(c,1,15,3);
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,15,2);
  { uint32_t k=c->t; fp_mov(c,4,1); if(k) goto L8c0aa4ec; }
  fp_st(c,4,R(0)+R(14));
  R(0)=0x24u;
  fp_mov(c,4,2);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x208u;
  R(3)=LD32(R(15));
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,1,R(3));
  fp_arith(c,2,0,1);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_ld(c,1,R(0)+R(3));
  R(0)=0x208u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x1cu;
  fp_arith(c,2,0,1);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_ld(c,1,R(0)+R(3));
  R(0)=0x208u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x20u;
  R(14)=R(13);
  fp_arith(c,2,0,1);
  fp_st(c,0,R(0)+R(15));
  R(3)=0x8c05e6eau;
  R(14)+=0x58u;
  R(4)=R(15);
  R(5)=R(14);
  { c->pr=0x8c0aa4bau; R(4)+=0x30u; f_8c05e6ea(c); }
  R(2)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c0aa4c4u; R(4)=R(14); f_8c05e6ea(c); }
  R(3)=0x8c015816u;
  R(5)=R(15);
  fp_mov(c,4,15);
  R(5)+=0x24u;
  { c->pr=0x8c0aa4d0u; R(4)=R(13); f_8c015816(c); }
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x18u;
  R(5)=R(14);
  { c->pr=0x8c0aa4deu; R(4)+=0x24u; f_8c05e612(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)+=0x30u;
  R(6)+=0x24u;
  { c->pr=0x8c0aa4ecu; R(4)=R(14); f_8c05e5f4(c); }
L8c0aa4ec:;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aa540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(0)=0x20cu;
  R(14)=R(4);
  c->fr[3]=0x00000000u;
  fp_ld(c,15,R(0)+R(14));
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c0aa5e2;
  R(13)=0xe0u;
  R(5)=R(15);
  R(2)=0x8c015ea8u;
  R(6)=R(15);
  R(5)+=0x4u;
  R(7)=R(15);
  R(13)+=R(14);
  R(6)+=0x8u;
  { c->pr=0x8c0aa56eu; R(4)=R(13); f_8c015ea8(c); }
  c->fr[14]=0x00000000u;
  R(0)=0x18u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x1cu;
  c->fr[3]=0x3F800000u;
  R(12)=R(13);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,14,R(0)+R(15));
  R(12)+=0x58u;
  R(3)=LD32(R(15));
  R(0)=0x208u;
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x208u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x208u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  fp_st(c,2,R(0)+R(15));
  R(5)=R(12);
  { c->pr=0x8c0aa5bau; R(4)+=0x24u; f_8c05e6ea(c); }
  R(2)=0x8c05e612u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0xcu;
  { c->pr=0x8c0aa5c6u; R(4)=R(12); f_8c05e612(c); }
  R(5)=R(15);
  R(3)=0x8c015816u;
  fp_mov(c,4,15);
  R(5)+=0x18u;
  fp_unary(c,0,4);
  { c->pr=0x8c0aa5d4u; R(4)=R(13); f_8c015816(c); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0aa5deu; R(4)=R(13); f_8c01638a(c); }
  R(0)=0x20cu;
  fp_st(c,14,R(0)+R(14));
L8c0aa5e2:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aa620(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(14)=R(4);
  R(4)=R(14);
  R(4)+=0x24u;
  fp_mov(c,2,4);
  R(0)=0x8u;
  ST32(R(15)+4,R(5));
  R(5)=0xe0u;
  ST32(R(15),R(6));
  R(6)=R(14);
  fp_ld(c,3,R(4));
  R(5)+=R(14);
  R(6)+=0x78u;
  R(12)=R(5);
  fp_arith(c,2,2,3);
  R(11)=R(6);
  R(12)+=0x58u;
  R(11)+=0x58u;
  R(5)=R(12);
  R(6)=R(11);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x10u;
  R(4)=R(15);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(3)=0x8c05e612u;
  { c->pr=0x8c0aa672u; R(4)+=0x14u; f_8c05e612(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0aa6c0;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa696;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa696;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0aa6c0;
L8c0aa696:;
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  R(5)=LD32(R(15)+4);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(15)); if(k) goto L8c0aa6b2; }
  R(3)=0x8c0153d8u;
  { c->pr=0x8c0aa6aau;  f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c0aa6b2:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c015060u;
  R(4)=R(15);
  R(6)+=0x14u;
  { c->pr=0x8c0aa6c0u; R(4)+=0x14u; f_8c015060(c); }
L8c0aa6c0:;
  R(2)=LD32(R(14)+8);
  R(3)=0x20000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa6d0;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
L8c0aa6d0:;
  R(2)=LD32(R(14)+8);
  R(3)=0x40000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa6e0;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
L8c0aa6e0:;
  R(2)=LD32(R(14)+8);
  R(3)=0x80000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa6f0;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
L8c0aa6f0:;
  R(2)=LD32(R(14)+8);
  R(3)=0x4000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0aa722;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa714;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa714;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0aa722;
L8c0aa714:;
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c015060u;
  R(4)=R(15);
  R(6)+=0x14u;
  { c->pr=0x8c0aa722u; R(4)+=0x14u; f_8c015060(c); }
L8c0aa722:;
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0x14u;
  { c->pr=0x8c0aa72eu; R(4)=R(12); f_8c05e5f4(c); }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aa780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(14)=R(4);
  R(4)=0x1b0u;
  fp_mov(c,2,4);
  R(0)=0x8u;
  R(4)+=R(14);
  ST32(R(15)+4,R(5));
  R(5)=0xe0u;
  ST32(R(15),R(6));
  R(6)=R(14);
  fp_ld(c,3,R(4));
  R(5)+=R(14);
  R(6)+=0x78u;
  R(12)=R(5);
  fp_arith(c,2,2,3);
  R(11)=R(6);
  R(12)+=0x58u;
  R(11)+=0x58u;
  R(5)=R(12);
  R(6)=R(11);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x10u;
  R(4)=R(15);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(3)=0x8c05e612u;
  { c->pr=0x8c0aa7d2u; R(4)+=0x14u; f_8c05e612(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x10000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0aa820;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa7f6;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa7f6;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0aa820;
L8c0aa7f6:;
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  R(5)=LD32(R(15)+4);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(15)); if(k) goto L8c0aa812; }
  R(3)=0x8c0153d8u;
  { c->pr=0x8c0aa80au;  f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c0aa812:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c015060u;
  R(4)=R(15);
  R(6)+=0x14u;
  { c->pr=0x8c0aa820u; R(4)+=0x14u; f_8c015060(c); }
L8c0aa820:;
  R(2)=LD32(R(14)+8);
  R(3)=0x800000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa836;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c0aa836:;
  R(2)=LD32(R(14)+8);
  R(3)=0x1000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa84c;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c0aa84c:;
  R(2)=LD32(R(14)+8);
  R(3)=0x2000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa862;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c0aa862:;
  R(2)=LD32(R(14)+8);
  R(3)=0x10000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0aa894;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa886;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa886;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0aa894;
L8c0aa886:;
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c015060u;
  R(4)=R(15);
  R(6)+=0x14u;
  { c->pr=0x8c0aa894u; R(4)+=0x14u; f_8c015060(c); }
L8c0aa894:;
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0x14u;
  { c->pr=0x8c0aa8a0u; R(4)=R(12); f_8c05e5f4(c); }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aa900(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(14)=R(4);
  R(4)=R(14);
  R(4)+=0x30u;
  fp_mov(c,2,4);
  R(0)=0x8u;
  ST32(R(15)+4,R(5));
  R(5)=0xe0u;
  ST32(R(15),R(6));
  R(6)=R(14);
  fp_ld(c,3,R(4));
  R(5)+=R(14);
  R(6)+=0x78u;
  R(12)=R(5);
  fp_arith(c,2,2,3);
  R(11)=R(6);
  R(12)+=0x58u;
  R(11)+=0x58u;
  R(5)=R(12);
  R(6)=R(11);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x10u;
  R(4)=R(15);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(3)=0x8c05e612u;
  { c->pr=0x8c0aa952u; R(4)+=0x14u; f_8c05e612(c); }
  R(2)=LD32(R(14)+8);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0aa9a0;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa976;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa976;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0aa9a0;
L8c0aa976:;
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  R(5)=LD32(R(15)+4);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(15)); if(k) goto L8c0aa992; }
  R(3)=0x8c0153d8u;
  { c->pr=0x8c0aa98au;  f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c0aa992:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c015060u;
  R(4)=R(15);
  R(6)+=0x14u;
  { c->pr=0x8c0aa9a0u; R(4)+=0x14u; f_8c015060(c); }
L8c0aa9a0:;
  R(2)=LD32(R(14)+8);
  R(3)=0x100000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa9b0;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
L8c0aa9b0:;
  R(2)=LD32(R(14)+8);
  R(3)=0x200000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa9c0;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
L8c0aa9c0:;
  R(2)=LD32(R(14)+8);
  R(3)=0x400000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aa9d0;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
L8c0aa9d0:;
  R(2)=LD32(R(14)+8);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0aaa02;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa9f4;
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0aa9f4;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0aaa02;
L8c0aa9f4:;
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c015060u;
  R(4)=R(15);
  R(6)+=0x14u;
  { c->pr=0x8c0aaa02u; R(4)+=0x14u; f_8c015060(c); }
L8c0aaa02:;
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0x14u;
  { c->pr=0x8c0aaa0eu; R(4)=R(12); f_8c05e5f4(c); }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aaa60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0xe0u;
  R(14)=R(4);
  R(2)=0x8c092cb0u;
  R(4)=R(15);
  ST8(R(15),R(5));
  R(3)+=R(14);
  ST32(R(15)+4,R(3));
  R(5)=R(14);
  R(6)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c0aaa7cu; R(4)+=0x8u; f_8c092cb0(c); }
  R(14)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)+=0x8u;
  R(14)+=0x58u;
  R(5)=R(14);
  { c->pr=0x8c0aaa8cu; R(4)=R(14); f_8c05e5f4(c); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aaa94(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=0xe0u;
  R(0)=0x1cu;
  R(2)=0x148u;
  R(3)+=R(4);
  R(4)+=R(2);
  ST32(R(15),R(3));
  fp_ld(c,3,R(4));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  R(3)=0x8c015c9cu;
  R(5)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c0aaafau; R(4)=LD32(R(15)); f_8c015c9c(c); }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0aab02(SH4Ctx *c) {
  R(5)=0xe0u;
  R(6)=R(4);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)+=0x6cu;
  R(5)+=R(4);
  R(3)=0x8c05e5f4u;
  R(14)=R(5);
  R(14)+=0x58u;
  R(4)=R(14);
  R(5)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e5f4(c); return; } }
}
void f_8c0aab40(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(2)=LD32(R(4)+8);
  R(3)=0x1c000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aac0a;
  R(6)=R(4);
  R(0)=0xe0u;
  R(6)+=0x78u;
  R(3)=0x4000000u;
  R(7)=R(6);
  R(0)+=R(4);
  ST32(R(15),R(0));
  R(7)+=0x58u;
  R(2)=LD32(R(4)+8);
  R(6)=R(0);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(6)+=0x58u; if(k) goto L8c0aab88; }
  fp_ld(c,5,R(6));
  fp_ld(c,4,R(7));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0aab70;
  { fp_mov(c,6,4); goto L8c0aab72; }
L8c0aab70:;
  fp_mov(c,6,5);
L8c0aab72:;
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0aab78;
  fp_mov(c,5,4);
L8c0aab78:;
  R(0)=0x1bcu;
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,6,4);
  if(c->t) goto L8c0aab88;
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0aab88;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(6));
L8c0aab88:;
  R(2)=LD32(R(4)+8);
  R(3)=0x8000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aabda;
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(6));
  fp_ld(c,4,R(0)+R(7));
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0aabc0;
  { fp_mov(c,6,4); goto L8c0aabc2; }
L8c0aabc0:;
  fp_mov(c,6,5);
L8c0aabc2:;
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0aabc8;
  fp_mov(c,5,4);
L8c0aabc8:;
  R(0)=0x1c0u;
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,6,4);
  if(c->t) goto L8c0aabda;
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0aabda;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  fp_st(c,3,R(0)+R(6));
L8c0aabda:;
  R(2)=LD32(R(4)+8);
  R(3)=0x10000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aac0a;
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(6));
  fp_ld(c,5,R(0)+R(7));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0aabf0;
  { fp_mov(c,6,5); goto L8c0aabf2; }
L8c0aabf0:;
  fp_mov(c,6,4);
L8c0aabf2:;
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c0aabf8;
  fp_mov(c,5,4);
L8c0aabf8:;
  R(0)=0x1c4u;
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,6,4);
  if(c->t) goto L8c0aac0a;
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0aac0a;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  fp_st(c,3,R(0)+R(6));
L8c0aac0a:;
  { R(15)+=0x4u; return; }
}
void f_8c0aac40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  ST32(R(15),R(5));
  R(14)=R(4);
  R(5)=0xe0u;
  R(4)=R(14);
  R(4)+=0x78u;
  R(3)=0x8c05e612u;
  R(5)+=R(14);
  R(12)=R(4);
  R(11)=R(5);
  R(11)+=0x58u;
  ST32(R(15)+4,R(6));
  R(12)+=0x58u;
  R(4)=R(15);
  fp_mov(c,15,4);
  R(6)=R(12);
  R(5)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c0aac72u; R(4)+=0x20u; sh4_call(c,tg); }
  R(13)=R(14);
  R(2)=LD32(R(13)+12);
  R(3)=0x800u;
  R(5)=LD32(R(15));
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(15)+4); if(k) goto L8c0aac8e; }
  R(3)=0x8c0153d8u;
  { c->pr=0x8c0aac86u;  f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c0aac8e:;
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c015060u;
  R(4)=R(15);
  R(6)+=0x20u;
  { c->pr=0x8c0aac9cu; R(4)+=0x20u; f_8c015060(c); }
  R(5)=0x198u;
  R(4)=R(15);
  R(2)=0x8c05e6eau;
  R(5)+=R(14);
  { c->pr=0x8c0aaca8u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0x8u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(5)=R(15);
  R(3)=0x8c05e6eau;
  fp_arith(c,2,2,3);
  R(4)=R(15);
  R(5)+=0x20u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0aacd6u; R(4)+=0x14u; sh4_call(c,tg); }
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0aace4;
  { fp_mov(c,3,4); goto L8c0aace8; }
L8c0aace4:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c0aace8:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0aad36;
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0aad20;
  { c->fr[3]=0x3F800000u; goto L8c0aad2c; }
L8c0aad20:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0aad2a;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c0aad2c; }
L8c0aad2a:;
  c->fr[3]=0x00000000u;
L8c0aad2c:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c0aad36:;
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0aad44;
  { fp_mov(c,3,4); goto L8c0aad48; }
L8c0aad44:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c0aad48:;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0aad74;
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0aad5e;
  { c->fr[3]=0x3F800000u; goto L8c0aad6a; }
L8c0aad5e:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0aad68;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c0aad6a; }
L8c0aad68:;
  c->fr[3]=0x00000000u;
L8c0aad6a:;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c0aad74:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0aad82;
  { fp_mov(c,3,4); goto L8c0aad86; }
L8c0aad82:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c0aad86:;
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0aadb2;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0aad9c;
  { c->fr[3]=0x3F800000u; goto L8c0aada8; }
L8c0aad9c:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c0aada6;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c0aada8; }
L8c0aada6:;
  c->fr[3]=0x00000000u;
L8c0aada8:;
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c0aadb2:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c015060u;
  R(4)=R(15);
  R(6)+=0x14u;
  { c->pr=0x8c0aadc0u; R(4)+=0x14u; f_8c015060(c); }
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x14u;
  { c->pr=0x8c0aadccu; R(4)=R(11); f_8c05e5f4(c); }
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aae00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0xe0u;
  R(14)=R(4);
  R(2)=R(14);
  R(2)+=0x78u;
  R(3)+=R(14);
  R(13)=R(14);
  ST32(R(15),R(3));
  R(12)=R(5);
  ST32(R(15)+4,R(2));
  R(5)=R(12);
  R(2)=LD32(R(13)+12);
  R(11)=R(6);
  R(3)=0x800u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(4)=R(11); if(k) goto L8c0aae40; }
  R(3)=0x8c0153d8u;
  { c->pr=0x8c0aae38u;  f_8c0153d8(c); }
  R(2)=LD32(R(13)+12);
  R(3)=0xfffff7ffu;
  R(2)&=R(3);
  ST32(R(13)+12,R(2));
L8c0aae40:;
  R(8)=LD32(R(15));
  R(4)=R(15);
  R(10)=LD32(R(15)+4);
  R(3)=0x8c05e612u;
  R(8)+=0x58u;
  R(10)+=0x58u;
  R(5)=R(8);
  R(6)=R(10);
  { c->pr=0x8c0aae54u; R(4)+=0x8u; f_8c05e612(c); }
  R(6)=R(15);
  R(13)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x8u;
  { c->pr=0x8c0aae62u; R(4)+=0x8u; f_8c015060(c); }
  R(5)=R(15);
  R(9)=0x8c091e2eu;
  R(5)+=0x8u;
  { c->pr=0x8c0aae6cu; R(4)=R(14); f_8c091e2e(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c0aae78u; R(4)+=0x8u; sh4_call(c,tg); }
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x8u;
  { c->pr=0x8c0aae84u; R(4)=R(8); f_8c05e5f4(c); }
  R(5)=R(14);
  R(10)=0x8c05e6eau;
  R(4)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c0aae90u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(3)=LD32(R(14)+8);
  R(8)=0x4000u;
  c->t=(R(3)&R(8))==0;
  if(c->t) goto L8c0aaea4;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c0aaea4u; R(4)+=0x8u; sh4_call(c,tg); }
L8c0aaea4:;
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(9); c->pr=0x8c0aaeacu; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(8))==0;
  if(c->t) goto L8c0aaebe;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c0aaebeu; R(4)+=0x8u; sh4_call(c,tg); }
L8c0aaebe:;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c0aaec8u; R(4)+=0x24u; sh4_call(c,tg); }
  R(5)=R(14);
  R(4)=R(15);
  R(5)+=0x30u;
  { uint32_t tg=R(10); c->pr=0x8c0aaed2u; R(4)+=0x8u; sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aaee6;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c0aaee6u; R(4)+=0x8u; sh4_call(c,tg); }
L8c0aaee6:;
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(9); c->pr=0x8c0aaeeeu; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(8))==0;
  if(c->t) goto L8c0aaf00;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c0aaf00u; R(4)+=0x8u; sh4_call(c,tg); }
L8c0aaf00:;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c0aaf0au; R(4)+=0x30u; sh4_call(c,tg); }
  R(5)=0x1b0u;
  R(4)=R(15);
  R(5)+=R(14);
  { uint32_t tg=R(10); c->pr=0x8c0aaf14u; R(4)+=0x8u; sh4_call(c,tg); }
  R(2)=LD32(R(14)+8);
  R(3)=0x10000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0aaf28;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c0aaf28u; R(4)+=0x8u; sh4_call(c,tg); }
L8c0aaf28:;
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(9); c->pr=0x8c0aaf30u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(14)+8);
  c->t=(R(8)&R(3))==0;
  if(c->t) goto L8c0aaf42;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x8u;
  { uint32_t tg=R(13); c->pr=0x8c0aaf42u; R(4)+=0x8u; sh4_call(c,tg); }
L8c0aaf42:;
  R(4)=0x1b0u;
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c0aaf4cu; R(4)+=R(14); sh4_call(c,tg); }
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0aafa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(10)=0x0u;
  R(3)=0x8c05e5f4u;
  ST32(R(15)+4,R(5));
  R(14)=R(4);
  ST32(R(15)+8,R(6));
  R(4)=R(15);
  R(6)=LD32(R(15)+4);
  R(13)=R(7);
  R(12)=R(10);
  R(5)=R(14);
  { c->pr=0x8c0aafceu; R(4)+=0x18u; f_8c05e5f4(c); }
  R(2)=0x8u;
  R(2)+=R(13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x3u;
  R(3)=R(15);
  R(3)+=0x4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c0786e0u;
  R(7)=LD32(R(15)+20);
  R(5)+=0x24u;
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0aafecu; R(4)=R(14); f_8c0786e0(c); }
  R(4)=R(0)&0xFF;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0ab0d2; }
  R(9)=0x8c141124u;
  R(4)=R(15);
  R(8)=0x8c014eaau;
  R(6)=R(14);
  R(5)=LD32(R(9));
  { c->pr=0x8c0ab002u; R(4)+=0xcu; f_8c014eaa(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(14)=R(10); if(k) goto L8c0ab0ca; }
L8c0ab00a:;
  R(11)=(uint32_t)(int32_t)(int16_t)R(14);
  R(12)=R(13);
  R(3)=R(11);
  c->t=R(11)>>31;R(11)<<=1;
  R(11)+=R(3);
  R(5)=LD32(R(9));
  R(11)<<=2;
  R(12)+=0x8u;
  c->t=R(11)>>31;R(11)<<=1;
  R(12)+=R(11);
  R(6)=R(12);
  { uint32_t tg=R(8); c->pr=0x8c0ab024u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(4)=R(13);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(4)+=0x8u;
  R(3)+=R(4);
  fp_ld(c,0,R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(0)=0xcu;
  fp_ld(c,4,R(0)+R(15));
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(4);
  fp_mov(c,3,4);
  fp_ld(c,2,R(3));
  fp_arith(c,1,3,0);
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  fp_mov(c,0,4);
  R(2)=R(3);
  fp_arith(c,1,0,2);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=0x10u;
  R(3)+=R(2);
  fp_ld(c,6,R(0)+R(15));
  R(3)<<=2;
  R(11)+=R(4);
  c->t=R(3)>>31;R(3)<<=1;
  fp_mov(c,1,6);
  R(0)=0x4u;
  fp_mov(c,12,6);
  R(3)+=R(4);
  fp_ld(c,2,R(0)+R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  fp_arith(c,1,1,2);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(4);
  fp_ld(c,2,R(0)+R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  fp_arith(c,1,12,2);
  R(3)+=R(2);
  R(3)<<=2;
  R(0)=0x14u;
  c->t=R(3)>>31;R(3)<<=1;
  fp_ld(c,5,R(0)+R(15));
  fp_arith(c,2,1,12);
  R(0)=0x8u;
  R(3)+=R(4);
  fp_mov(c,12,5);
  fp_ld(c,2,R(0)+R(3));
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  fp_arith(c,1,12,2);
  fp_fmac(c,1,3);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  fp_mov(c,13,5);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(4);
  fp_ld(c,2,R(0)+R(3));
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  fp_arith(c,1,13,2);
  R(0)=0xcu;
  fp_mov(c,0,13);
  fp_fmac(c,1,12);
  fp_unary(c,2,1);
  fp_st(c,1,R(0)+R(11));
  R(2)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0ab00a;
L8c0ab0ca:;
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(12)=0x1u;
  ST16(R(13)+4,R(0));
  ST32(R(13),R(10));
L8c0ab0d2:;
  R(0)=R(12);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ab120(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0x8c096a00u;
  ST32(R(15),R(5));
  R(5)=R(15);
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(7));
  { c->pr=0x8c0ab132u; R(5)+=0xcu; f_8c096a00(c); }
  R(2)=LD32(R(15)+24);
  R(3)=0x8c098f20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  R(7)=LD32(R(15)+12);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0ab144u; R(4)+=0x10u; f_8c098f20(c); }
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ab14c(SH4Ctx *c) {
  {  return; }
}
void f_8c0ab150(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c096a00u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c0ab162u; R(4)=LD32(R(15)+4); f_8c096a00(c); }
  R(3)=0x8c099300u;
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c0ab16cu; R(4)=LD32(R(15)); f_8c099300(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ab174(SH4Ctx *c) {
  R(3)=0x8c099456u;
  {  { f_8c099456(c); return; } }
}
void f_8c0ab17a(SH4Ctx *c) {
  R(3)=0x8c0991c0u;
  {  { f_8c0991c0(c); return; } }
}
void f_8c0ab180(SH4Ctx *c) {
  R(3)=0x8c099800u;
  {  { f_8c099800(c); return; } }
}
void f_8c0ab186(SH4Ctx *c) {
  R(3)=0x8c099836u;
  {  { f_8c099836(c); return; } }
}
void f_8c0ab18c(SH4Ctx *c) {
  R(3)=0x8c098776u;
  {  { f_8c098776(c); return; } }
}
void f_8c0ab192(SH4Ctx *c) {
  R(3)=0x8c0999a4u;
  {  { f_8c0999a4(c); return; } }
}
void f_8c0ab198(SH4Ctx *c) {
  R(3)=0x8c09899cu;
  {  { f_8c09899c(c); return; } }
}
void f_8c0ab19e(SH4Ctx *c) {
  {  return; }
}
void f_8c0ab1a2(SH4Ctx *c) {
  {  return; }
}
void f_8c0ab1a6(SH4Ctx *c) {
  {  return; }
}
void f_8c0ab200(SH4Ctx *c) {
  {  return; }
}
void f_8c0ab204(SH4Ctx *c) {
  R(3)=0x8c099ab0u;
  {  { f_8c099ab0(c); return; } }
}
void f_8c0ab20a(SH4Ctx *c) {
  R(3)=0x8c099a74u;
  {  { f_8c099a74(c); return; } }
}
void f_8c0ab210(SH4Ctx *c) {
  R(3)=0x8c099a28u;
  {  { f_8c099a28(c); return; } }
}
void f_8c0ab216(SH4Ctx *c) {
  R(3)=0x8c099a2cu;
  {  { f_8c099a2c(c); return; } }
}
void f_8c0ab21c(SH4Ctx *c) {
  R(3)=0x8c099a4cu;
  {  { f_8c099a4c(c); return; } }
}
void f_8c0ab222(SH4Ctx *c) {
  R(3)=0x8c099a50u;
  {  { f_8c099a50(c); return; } }
}
void f_8c0ab228(SH4Ctx *c) {
  R(3)=0x8c099a54u;
  {  { f_8c099a54(c); return; } }
}
void f_8c0ab22e(SH4Ctx *c) {
  R(3)=0x8c099a58u;
  {  { f_8c099a58(c); return; } }
}
void f_8c0ab234(SH4Ctx *c) {
  R(3)=0x8c09989eu;
  {  { f_8c09989e(c); return; } }
}
void f_8c0ab23a(SH4Ctx *c) {
  R(3)=0x8c0998d2u;
  {  { f_8c0998d2(c); return; } }
}
void f_8c0ab240(SH4Ctx *c) {
  R(3)=0x8c099a5cu;
  {  { f_8c099a5c(c); return; } }
}
void f_8c0ab246(SH4Ctx *c) {
  R(3)=0x8c099a60u;
  {  { f_8c099a60(c); return; } }
}
void f_8c0ab2a0(SH4Ctx *c) {
  R(3)=0x8c099a64u;
  {  { f_8c099a64(c); return; } }
}
void f_8c0ab2a6(SH4Ctx *c) {
  R(3)=0x8c0999b4u;
  {  { f_8c0999b4(c); return; } }
}
void f_8c0ab2ac(SH4Ctx *c) {
  R(3)=0x8c0999b8u;
  {  { f_8c0999b8(c); return; } }
}
void f_8c0ab2b2(SH4Ctx *c) {
  R(3)=0x8c0999acu;
  {  { f_8c0999ac(c); return; } }
}
void f_8c0ab2b8(SH4Ctx *c) {
  R(3)=0x8c0999a8u;
  {  { f_8c0999a8(c); return; } }
}
void f_8c0ab2be(SH4Ctx *c) {
  R(3)=0x8c0999b0u;
  {  { f_8c0999b0(c); return; } }
}
void f_8c0ab2c4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0994e6u;
  { c->pr=0x8c0ab2ccu;  f_8c0994e6(c); }
  R(2)=0x8c0625b4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0625b4(c); return; } }
}
void f_8c0ab2d2(SH4Ctx *c) {
  {  return; }
}
void f_8c0ab2d6(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c0ab2da(SH4Ctx *c) {
  R(3)=0x8c099a6cu;
  {  { f_8c099a6c(c); return; } }
}
void f_8c0ab2e0(SH4Ctx *c) {
  R(3)=0x8c099a68u;
  {  { f_8c099a68(c); return; } }
}
void f_8c0ab2e6(SH4Ctx *c) {
  R(3)=0x8c099a78u;
  {  { f_8c099a78(c); return; } }
}
void f_8c0ab2ec(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c099a70u;
  R(3)=LD32(R(15)+4);
  { c->pr=0x8c0ab2f6u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c099a70(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ab340(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0ab344(SH4Ctx *c) {
  R(3)=0x8c099b40u;
  {  { f_8c099b40(c); return; } }
}
void f_8c0ab34a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c099906u;
  { c->pr=0x8c0ab352u; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c099906(c); }
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  R(3)=0x8c062da4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c062da4(c); return; } }
}
void f_8c0ab380(SH4Ctx *c) {
  R(5)=R(4)&0xFF;
  R(0)=R(5);
  c->t=(int32_t)R(0)==127;
  if(!c->t) goto L8c0ab38c;
  { R(0)=0x7fu; return; }
L8c0ab38c:;
  R(0)+=0xffffffc0u;
  c->t=R(0)>>31;R(0)<<=1;
  {  return; }
}
void f_8c0ab394(SH4Ctx *c) {
  R(5)=0x80000000u;
  R(6)=R(4);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=R(5);
  c->t=(R(3)&R(6))==0;
  { uint32_t k=!c->t; R(7)=0x1fu; if(k) goto L8c0ab3ae; }
L8c0ab3a4:;
  c->t=R(5)&1;R(5)>>=1;
  R(2)=R(5);
  c->t=(R(2)&R(6))==0;
  { uint32_t k=c->t; R(7)+=0xffffffffu; if(k) goto L8c0ab3a4; }
L8c0ab3ae:;
  R(14)=R(7);
  c->fpul=R(4);
  R(14)+=0xfffffff0u;
  R(3)=0x8c0b3a6cu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  R(5)=0x1u;
  fp_float(c,3);
  R(2)+=0x10u;
  R(5)=sh4_shad(R(5),R(2));
  c->fpul=R(5);
  fp_mov(c,4,3);
  fp_float(c,2);
  { c->pr=0x8c0ab3cau; fp_arith(c,3,4,2); f_8c0b3a6c(c); }
  R(0)=0x8c0ab42cu;
  R(3)=R(14);
  fp_ld(c,3,R(0));
  R(0)=0x8c0ab430u;
  fp_ld(c,2,R(0));
  c->t=R(14)>>31;R(14)<<=1;
  fp_arith(c,2,0,3);
  R(14)+=R(3);
  R(14)<<=8;
  R(5)=0xffffe701u;
  R(14)<<=2;
  fp_arith(c,3,0,2);
  fp_ftrc(c,0);
  R(4)=c->fpul;
  R(4)+=R(14);
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  if(c->t) goto L8c0ab3f0;
  R(4)=R(5);
L8c0ab3f0:;
  R(5)=0x18ffu;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(2)>(int32_t)R(5);
  if(!c->t) goto L8c0ab3fa;
  R(4)=R(5);
L8c0ab3fa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ab440(SH4Ctx *c) {
  R(2)=0x8c0cbf08u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ab44c;
  { R(0)=0x0u; return; }
L8c0ab44c:;
  R(0)=0x8c0cbf10u;
  R(4)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  {  return; }
}
void f_8c0ab456(SH4Ctx *c) {
  R(3)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=c->t; R(5)=0x7fu; if(k) goto L8c0ab460; }
  R(4)=0x1u;
L8c0ab460:;
  R(3)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(3)>(int32_t)R(5);
  if(!c->t) goto L8c0ab468;
  R(4)=R(5);
L8c0ab468:;
  { R(0)=R(4); return; }
}
void f_8c0ab46c(SH4Ctx *c) {
  R(5)=R(4)&0xFF;
  R(6)=0x7fu;
  c->t=(int32_t)R(5)>(int32_t)R(6);
  if(!c->t) goto L8c0ab478;
  { R(4)=R(6); goto L8c0ab47e; }
L8c0ab478:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0ab47e;
  R(4)=0x0u;
L8c0ab47e:;
  { R(0)=R(4); return; }
}
void f_8c0ab4c0(SH4Ctx *c) {
  R(3)=0x8c0cbfd0u;
  { ST8(R(3),R(4)); return; }
}
void f_8c0ab4c6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(4)=R(14);
  ST32(R(15),R(5));
  R(0)=LD32(R(4)+48);
  c->t=(R(0)&0x80)==0;
  R(5)=c->t;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ab4ee;
  R(0)=LD32(c->gbr+92);
  { R(0)|=0x4u; goto L8c0ab4f4; }
L8c0ab4ee:;
  R(0)=LD32(c->gbr+92);
  R(3)=0xfffffffbu;
  R(0)&=R(3);
L8c0ab4f4:;
  R(2)=0x8c0388eau;
  { c->pr=0x8c0ab4fau; ST32(c->gbr+92,R(0)); f_8c0388ea(c); }
  R(3)=0x8c084808u;
  { c->pr=0x8c0ab500u; fp_mov(c,13,0); f_8c084808(c); }
  R(0)=0x38u;
  R(4)=R(14);
  R(2)=0x8c0388c0u;
  fp_ld(c,15,R(0)+R(4));
  fp_mov(c,14,0);
  fp_mov(c,4,0);
  { c->pr=0x8c0ab510u; fp_arith(c,2,4,15); f_8c0388c0(c); }
  R(4)=LD32(R(14));
  R(13)=0x8c143ab4u;
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0ab558;
  R(2)=0x8c093416u;
  { c->pr=0x8c0ab520u; R(4)=LD32(R(14)+4); f_8c093416(c); }
  R(2)=0x8c0cbfd0u;
  R(14)=R(0);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c0ab530; }
  { ST32(R(13),R(4)); goto L8c0ab546; }
L8c0ab530:;
  R(1)=LD32(R(14)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ab544;
  R(4)=LD32(R(14)+8);
  R(3)=0x8c0a2b66u;
  R(4)=LD32(R(4));
  { c->pr=0x8c0ab540u; R(5)=0x0u; f_8c0a2b66(c); }
  { ST32(R(13),R(0)); goto L8c0ab546; }
L8c0ab544:;
  ST32(R(13),R(4));
L8c0ab546:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ab58a;
  R(3)=0x8c038becu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0ab554u; R(4)=LD32(R(14)+4); f_8c038bec(c); }
  {  goto L8c0ab58a; }
L8c0ab558:;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0ab58a;
  R(2)=0x8c0a2880u;
  R(14)=LD32(R(14)+4);
  { c->pr=0x8c0ab564u; R(4)=R(14); f_8c0a2880(c); }
  R(3)=0x8c093416u;
  { c->pr=0x8c0ab56au; R(4)=R(0); f_8c093416(c); }
  R(2)=0x8c0a2888u;
  R(12)=R(0);
  { c->pr=0x8c0ab572u; R(4)=R(14); f_8c0a2888(c); }
  R(3)=0x8c0a2b66u;
  R(4)=R(0);
  { c->pr=0x8c0ab57au; R(5)=0x0u; f_8c0a2b66(c); }
  ST32(R(13),R(0));
  R(2)=LD32(R(12)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ab58a;
  R(3)=0x8c038becu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0ab58au; R(4)=LD32(R(12)+4); f_8c038bec(c); }
L8c0ab58a:;
  fp_mov(c,4,13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0388c0u;
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0388c0(c); return; } }
}
void f_8c0ab5e0(SH4Ctx *c) {
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { f_8c0ab5e4(c); return; }
}
void f_8c0ab5e4(SH4Ctx *c) {
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(3)=R(0);
  {uint32_t v=LD32(R(1));R(1)+=4;R(4)=v;}
  R(6)=0x0u;
L8c0ab5ee:;
  c->t=sh4_cmpstr(R(6),R(4));
  if(c->t) goto L8c0ab61c;
  {uint32_t v=LD32(R(1));R(1)+=4;R(5)=v;}
  ST32(R(0),R(4));
  c->t=sh4_cmpstr(R(6),R(5));
  if(c->t) goto L8c0ab612;
  {uint32_t v=LD32(R(1));R(1)+=4;R(4)=v;}
  ST32(R(0)+4,R(5));
  c->t=sh4_cmpstr(R(6),R(4));
  if(c->t) goto L8c0ab616;
  {uint32_t v=LD32(R(1));R(1)+=4;R(5)=v;}
  ST32(R(0)+8,R(4));
  c->t=sh4_cmpstr(R(6),R(5));
  if(c->t) goto L8c0ab61a;
  {uint32_t v=LD32(R(1));R(1)+=4;R(4)=v;}
  ST32(R(0)+12,R(5));
  { R(0)+=0x10u; goto L8c0ab5ee; }
L8c0ab612:;
  { R(0)+=0x4u; goto L8c0ab61c; }
L8c0ab616:;
  { R(0)+=0x8u; goto L8c0ab61c; }
L8c0ab61a:;
  R(0)+=0xcu;
L8c0ab61c:;
  R(1)+=0xfffffffcu;
  R(6)=R(0);
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  ST8(R(6),R(0));
  if(c->t) goto L8c0ab63c;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  ST8(R(6)+1,R(0));
  if(c->t) goto L8c0ab63c;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==0;
  ST8(R(6)+2,R(0));
  if(c->t) goto L8c0ab63c;
  {int32_t v=(int8_t)LD8(R(1));R(1)+=1;R(0)=(uint32_t)v;}
  ST8(R(6)+3,R(0));
L8c0ab63c:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  R(0)=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;} return; }
}
void f_8c0ab648(SH4Ctx *c) {
  fp_mov(c,5,4);
  fp_arith(c,2,5,4);
  R(5)=0x8c0bd544u;
  R(4)=0x6u;
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
L8c0ab652:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,5);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0ab652; }
  { fp_mov(c,0,4); return; }
}
void f_8c0ab668(SH4Ctx *c) {
  fp_mov(c,6,4);
  fp_arith(c,2,6,4);
  R(5)=0x8c0bd560u;
  R(4)=0x6u;
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
L8c0ab672:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,6);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,5);
  { uint32_t k=c->t; fp_mov(c,5,3); if(k) goto L8c0ab672; }
  fp_mov(c,0,4);
  fp_mov(c,6,5);
  { fp_arith(c,2,0,6); return; }
}
void f_8c0ab68c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0b2fa4u;
  { c->pr=0x8c0ab694u;  f_8c0b2fa4(c); }
  R(3)=0x8c0bd668u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_mov(c,3,0);
  fp_ld(c,0,R(3));
  { fp_arith(c,1,0,3); return; }
}
void f_8c0ab6a8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x8u;
  fp_mov(c,5,4);
  fp_st(c,5,R(0)+R(15));
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0ab6c8; }
  R(4)=0x8u;
L8c0ab6c8:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  R(7)=0x4u;
  { uint32_t k=!c->t; R(6)=0x1u; if(k) goto L8c0ab6d6; }
  { R(4)|=R(7); goto L8c0ab6ee; }
L8c0ab6d6:;
  R(2)=LD32(R(15)+8);
  R(3)=0x7fffffffu;
  R(1)=0x7f800000u;
  R(2)&=R(3);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c0ab6e8;
  R(0)=0x2u;
  { R(4)|=R(0); goto L8c0ab6ee; }
L8c0ab6e8:;
  fp_cmp(c,0,5,5);
  if(c->t) goto L8c0ab6ee;
  R(4)|=R(6);
L8c0ab6ee:;
  R(3)=R(15);
  R(2)=0x80000000u;
  fp_st(c,4,R(15));
  R(1)=LD32(R(3));
  c->t=(R(1)&R(2))==0;
  { uint32_t k=c->t; R(5)=R(4); if(k) goto L8c0ab702; }
  fp_ld(c,3,R(15));
  fp_unary(c,0,3);
  fp_st(c,3,R(15));
L8c0ab702:;
  c->t=(R(6)&R(4))==0;
  if(c->t) goto L8c0ab70c;
  R(2)=0x8c0bd640u;
  { fp_ld(c,5,R(2)); goto L8c0ab824; }
L8c0ab70c:;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7f800000u;
  R(2)=0xffffffe9u;
  R(0)=0x20u;
  R(1)&=R(3);
  R(1)=sh4_shad(R(1),R(2));
  R(1)+=0xffffff81u;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  R(13)=0x8u;
  { uint32_t k=!c->t; R(13)&=R(4); if(k) goto L8c0ab734; }
  R(1)=0x8c0bd668u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; fp_ld(c,5,R(1)); if(k) goto L8c0ab730; }
  {  goto L8c0ab824; }
L8c0ab730:;
  { fp_unary(c,0,5); goto L8c0ab824; }
L8c0ab734:;
  c->t=(R(4)&R(7))==0;
  if(c->t) goto L8c0ab73c;
  { fp_mov(c,5,4); goto L8c0ab824; }
L8c0ab73c:;
  R(1)=0x8c0bd64cu;
  fp_ld(c,3,R(15));
  fp_ld(c,5,R(1));
  R(3)=0x8c0bd66cu;
  fp_cmp(c,1,5,3);
  { uint32_t k=!c->t; fp_ld(c,4,R(3)); if(k) goto L8c0ab752; }
  R(2)=0x8c0bd644u;
  fp_ld(c,14,R(2));
  { fp_mov(c,15,3); goto L8c0ab770; }
L8c0ab752:;
  fp_cmp(c,0,5,3);
  if(!c->t) goto L8c0ab760;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ab75c;
  fp_unary(c,0,4);
L8c0ab75c:;
  { fp_mov(c,0,4); goto L8c0ab826; }
L8c0ab760:;
  R(2)=0x8c0bd67cu;
  fp_ld(c,3,R(15));
  fp_ld(c,2,R(2));
  fp_arith(c,0,5,3);
  fp_mov(c,14,4);
  fp_arith(c,0,2,3);
  fp_mov(c,15,2);
  fp_arith(c,3,15,5);
L8c0ab770:;
  R(3)=0x8c0bd590u;
  R(4)=R(15);
  R(2)=0x8c0ab888u;
  R(4)+=0x4u;
  fp_ld(c,5,R(3));
  { c->pr=0x8c0ab77eu; fp_mov(c,4,15); f_8c0ab888(c); }
  R(0)=LD32(R(15)+4);
  R(3)=0x8c0bd64cu;
  R(14)=0x8c0b2e60u;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; fp_ld(c,13,R(3)); if(k) goto L8c0ab7aa; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ab7ae;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ab7ae;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0ab7cc;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0ab7cc;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0ab7ea;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0ab7ea;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0ab804;
  {  goto L8c0ab81e; }
L8c0ab7aa:;
  { fp_mov(c,4,15); goto L8c0ab816; }
L8c0ab7ae:;
  R(1)=0x8c0bd684u;
  R(4)=0xfffffffeu;
  R(2)=0x8c0bd57cu;
  fp_ld(c,2,R(1));
  fp_ld(c,3,R(2));
  fp_arith(c,0,2,15);
  R(3)=0x8c0b30f0u;
  fp_arith(c,0,14,3);
  fp_mov(c,12,2);
  { c->pr=0x8c0ab7c4u; fp_mov(c,4,15); f_8c0b30f0(c); }
  fp_arith(c,0,13,0);
  fp_arith(c,3,12,13);
  { fp_mov(c,4,12); goto L8c0ab816; }
L8c0ab7cc:;
  R(1)=0x8c0bd680u;
  R(4)=0xffffffffu;
  R(2)=0x8c0bd580u;
  fp_ld(c,2,R(1));
  fp_ld(c,3,R(2));
  fp_arith(c,0,2,15);
  R(3)=0x8c0b30f0u;
  fp_arith(c,0,14,3);
  fp_mov(c,12,2);
  { c->pr=0x8c0ab7e2u; fp_mov(c,4,15); f_8c0b30f0(c); }
  fp_arith(c,0,13,0);
  fp_arith(c,3,12,13);
  { fp_mov(c,4,12); goto L8c0ab816; }
L8c0ab7ea:;
  R(1)=0x8c0bd58cu;
  R(3)=0x8c0bd588u;
  R(2)=0x8c0bd584u;
  fp_ld(c,2,R(1));
  fp_ld(c,0,R(3));
  fp_mov(c,1,15);
  fp_arith(c,0,1,2);
  fp_ld(c,3,R(2));
  fp_fmac(c,13,15);
  fp_arith(c,0,14,3);
  fp_mov(c,4,1);
  { fp_arith(c,3,4,13); goto L8c0ab816; }
L8c0ab804:;
  R(1)=0x8c0bd67cu;
  fp_arith(c,0,13,15);
  R(2)=0x8c0bd66cu;
  fp_ld(c,2,R(1));
  fp_ld(c,3,R(2));
  fp_arith(c,0,2,15);
  fp_arith(c,0,14,3);
  fp_mov(c,4,2);
  fp_arith(c,3,4,13);
L8c0ab816:;
  { uint32_t tg=R(14); c->pr=0x8c0ab81au;  sh4_call(c,tg); }
  fp_mov(c,5,14);
  fp_arith(c,0,5,0);
L8c0ab81e:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ab824;
  fp_unary(c,0,5);
L8c0ab824:;
  fp_mov(c,0,5);
L8c0ab826:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ab888(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(6)=R(15);
  R(6)+=0x18u;
  R(5)=0x7f800000u;
  R(14)=R(15);
  R(14)+=0x14u;
  fp_st(c,4,R(6));
  fp_st(c,5,R(14));
  R(7)=R(15);
  R(3)=LD32(R(6));
  R(3)&=R(5);
  c->t=R(3)==R(5);
  { uint32_t k=c->t; R(7)+=0x10u; if(k) goto L8c0ab8c0; }
  R(3)=LD32(R(15)+20);
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c0ab8b6;
  R(2)=LD32(R(15)+20);
  R(3)=0x7fffffu;
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0ab8c0;
L8c0ab8b6:;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0ab8cc;
L8c0ab8c0:;
  R(3)=0x8c0bd640u;
  R(2)=0x0u;
  ST32(R(4),R(2));
  fp_ld(c,3,R(3));
  { fp_st(c,3,R(7)); goto L8c0ab964; }
L8c0ab8cc:;
  R(1)=LD32(R(14));
  R(1)&=R(5);
  c->t=R(1)==R(5);
  if(!c->t) goto L8c0ab8dc;
  R(2)=0x0u;
  ST32(R(4),R(2));
  { fp_st(c,4,R(7)); goto L8c0ab964; }
L8c0ab8dc:;
  R(2)=LD32(R(6));
  R(3)=0x80000000u;
  R(2)&=R(3);
  ST32(R(15)+8,R(2));
  R(1)=LD32(R(6));
  R(2)=0x7fffffffu;
  R(1)&=R(2);
  ST32(R(6),R(1));
  R(0)=LD32(R(14));
  R(0)&=R(2);
  ST32(R(14),R(0));
  R(0)=0xcu;
  fp_ld(c,3,R(14));
  fp_ld(c,4,R(6));
  fp_arith(c,3,4,3);
  fp_st(c,4,R(0)+R(15));
  R(1)=LD32(R(15)+12);
  ST32(R(15),R(1));
  R(1)&=R(3);
  ST32(R(15)+4,R(1));
  R(1)=LD32(R(15));
  R(3)=0x4f800000u;
  R(5)&=R(1);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(c->t) goto L8c0ab91a;
  fp_ftrc(c,4);
  R(0)=c->fpul;
  c->fpul=R(0);
  R(0)=0xcu;
  fp_float(c,3);
  fp_st(c,3,R(0)+R(15));
L8c0ab91a:;
  R(0)=0xcu;
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15)+4);
  R(2)|=R(3);
  ST32(R(15)+12,R(2));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8c0ab984u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c0ab938;
  R(0)=0x8c0ab988u;
  fp_mov(c,3,0);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c0ab93a; }
L8c0ab938:;
  fp_mov(c,3,0);
L8c0ab93a:;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(3)=R(2);
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  ST32(R(4),R(2));
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0ab952; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0ab952:;
  fp_ld(c,2,R(14));
  fp_ld(c,1,R(6));
  fp_arith(c,2,3,2);
  fp_arith(c,1,1,3);
  fp_st(c,1,R(7));
  R(2)=LD32(R(7));
  R(3)=LD32(R(15)+8);
  R(2)|=R(3);
  ST32(R(7),R(2));
L8c0ab964:;
  fp_ld(c,0,R(7));
  R(15)+=0x1cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ab98c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  fp_st(c,4,R(15));
  R(4)=0x0u;
  R(3)=LD32(R(15));
  fp_mov(c,14,4);
  c->t=(int32_t)R(3)>=0;
  fp_mov(c,15,5);
  { uint32_t k=c->t; R(6)=0x8u; if(k) goto L8c0ab9ac; }
  R(4)=R(6);
L8c0ab9ac:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  R(12)=0x7f800000u;
  R(7)=0x1u;
  { uint32_t k=!c->t; R(5)=0x4u; if(k) goto L8c0ab9bc; }
  { R(4)|=R(5); goto L8c0ab9d2; }
L8c0ab9bc:;
  R(2)=LD32(R(15));
  R(3)=0x7fffffffu;
  R(2)&=R(3);
  c->t=R(2)==R(12);
  if(!c->t) goto L8c0ab9cc;
  R(1)=0x2u;
  { R(4)|=R(1); goto L8c0ab9d2; }
L8c0ab9cc:;
  fp_cmp(c,0,4,4);
  if(c->t) goto L8c0ab9d2;
  R(4)|=R(7);
L8c0ab9d2:;
  fp_mov(c,4,15);
  R(13)=R(4);
  fp_st(c,4,R(15));
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0ab9e2; }
  R(4)=R(6);
L8c0ab9e2:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c0ab9ec;
  { R(4)|=R(5); goto L8c0aba02; }
L8c0ab9ec:;
  R(2)=LD32(R(15));
  R(3)=0x7fffffffu;
  R(2)&=R(3);
  c->t=R(2)==R(12);
  if(!c->t) goto L8c0ab9fc;
  R(1)=0x2u;
  { R(4)|=R(1); goto L8c0aba02; }
L8c0ab9fc:;
  fp_cmp(c,0,4,4);
  if(c->t) goto L8c0aba02;
  R(4)|=R(7);
L8c0aba02:;
  R(3)=R(13);
  R(14)=R(4);
  R(3)|=R(14);
  R(2)=0x8c0bd640u;
  c->t=(R(3)&R(7))==0;
  { uint32_t k=!c->t; fp_ld(c,4,R(2)); if(k) goto L8c0aba1c; }
  R(1)=R(13);
  c->t=(R(1)&R(5))==0;
  if(c->t) goto L8c0aba26;
  R(0)=0xcu;
  c->t=(R(0)&R(14))==0;
  if(c->t) goto L8c0aba20;
L8c0aba1c:;
  { fp_mov(c,0,4); goto L8c0ababe; }
L8c0aba20:;
  R(3)=0x8c0bd644u;
  {  goto L8c0aba2c; }
L8c0aba26:;
  c->t=(R(5)&R(14))==0;
  if(c->t) goto L8c0aba30;
  R(3)=0x8c0bd64cu;
L8c0aba2c:;
  { fp_ld(c,0,R(3)); goto L8c0ababe; }
L8c0aba30:;
  c->t=(R(6)&R(13))==0;
  if(c->t) goto L8c0abab0;
  R(5)=0x80000000u;
  R(3)=0x4f800000u;
  fp_mov(c,4,15);
  fp_st(c,4,R(15));
  R(4)=LD32(R(15));
  R(5)&=R(4);
  R(4)&=R(12);
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c0aba50;
  fp_ftrc(c,4);
  R(1)=c->fpul;
  c->fpul=R(1);
  fp_float(c,3);
  fp_st(c,3,R(15));
L8c0aba50:;
  R(3)=LD32(R(15));
  R(3)|=R(5);
  ST32(R(15),R(3));
  fp_ld(c,4,R(15));
  fp_cmp(c,0,15,4);
  if(!c->t) goto L8c0abaaa;
  R(3)=0x2u;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c0abaaa;
  R(3)=0x8c0b3328u;
  fp_unary(c,0,14);
  { c->pr=0x8c0aba6au; fp_mov(c,4,14); f_8c0b3328(c); }
  R(2)=0x8c0b31b0u;
  fp_mov(c,4,0);
  { c->pr=0x8c0aba72u; fp_arith(c,2,4,15); f_8c0b31b0(c); }
  R(3)=0x8c0b30f0u;
  R(4)=0xffffffffu;
  fp_mov(c,14,0);
  { c->pr=0x8c0aba7cu; fp_mov(c,4,15); f_8c0b30f0(c); }
  R(5)=0x80000000u;
  R(3)=0x4f800000u;
  fp_mov(c,15,0);
  fp_st(c,15,R(15));
  R(4)=LD32(R(15));
  R(5)&=R(4);
  R(4)&=R(12);
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c0aba98;
  fp_ftrc(c,15);
  R(1)=c->fpul;
  c->fpul=R(1);
  fp_float(c,3);
  fp_st(c,3,R(15));
L8c0aba98:;
  R(3)=LD32(R(15));
  R(3)|=R(5);
  ST32(R(15),R(3));
  fp_ld(c,4,R(15));
  fp_cmp(c,0,15,4);
  if(c->t) goto L8c0abaa6;
  fp_unary(c,0,14);
L8c0abaa6:;
  { fp_mov(c,0,14); goto L8c0ababe; }
L8c0abaaa:;
  R(2)=0x8c0bd640u;
  { fp_ld(c,0,R(2)); goto L8c0ababe; }
L8c0abab0:;
  R(2)=0x8c0b3328u;
  { c->pr=0x8c0abab6u; fp_mov(c,4,14); f_8c0b3328(c); }
  R(3)=0x8c0b31b0u;
  fp_mov(c,4,0);
  { c->pr=0x8c0ababeu; fp_arith(c,2,4,15); f_8c0b31b0(c); }
L8c0ababe:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0abaf8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x8u;
  fp_mov(c,5,4);
  R(6)=0x0u;
  fp_st(c,5,R(0)+R(15));
  R(3)=LD32(R(15)+8);
  R(4)=R(6);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; R(5)=0x8u; if(k) goto L8c0abb1a; }
  R(4)=R(5);
L8c0abb1a:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,5,3);
  R(10)=0x1u;
  { uint32_t k=!c->t; R(13)=0x4u; if(k) goto L8c0abb28; }
  { R(4)|=R(13); goto L8c0abb40; }
L8c0abb28:;
  R(2)=LD32(R(15)+8);
  R(3)=0x7fffffffu;
  R(1)=0x7f800000u;
  R(2)&=R(3);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c0abb3a;
  R(0)=0x2u;
  { R(4)|=R(0); goto L8c0abb40; }
L8c0abb3a:;
  fp_cmp(c,0,5,5);
  if(c->t) goto L8c0abb40;
  R(4)|=R(10);
L8c0abb40:;
  R(2)=R(4);
  R(14)=0x3u;
  c->t=(R(2)&R(14))==0;
  { uint32_t k=c->t; R(12)=R(4); if(k) goto L8c0abb52; }
  R(1)=0x8c0bd640u;
  fp_ld(c,0,R(1));
  {  goto L8c0abcd6; }
L8c0abb52:;
  c->t=(R(5)&R(12))==0;
  if(c->t) goto L8c0abb5c;
  fp_unary(c,0,4);
  { R(12)=R(10); goto L8c0abb5e; }
L8c0abb5c:;
  R(12)=R(6);
L8c0abb5e:;
  R(2)=0x8c0bd66cu;
  R(4)=R(15);
  R(3)=0x8c0ab888u;
  R(4)+=0x4u;
  { c->pr=0x8c0abb6au; fp_ld(c,5,R(2)); f_8c0ab888(c); }
  R(2)=R(15);
  R(1)=0x7f800000u;
  fp_st(c,0,R(15));
  R(3)=LD32(R(15)+4);
  R(3)&=R(14);
  ST32(R(15)+4,R(3));
  R(0)=LD32(R(2));
  R(2)=0xffffffe9u;
  R(0)&=R(1);
  R(0)=sh4_shad(R(0),R(2));
  R(2)=0xffffff81u;
  R(0)+=0xffffff81u;
  c->t=(int32_t)R(0)>(int32_t)R(2);
  if(c->t) goto L8c0abbb4;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0abb9c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0abba2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0abba8;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0abbae;
  {  goto L8c0abcce; }
L8c0abb9c:;
  R(3)=0x8c0bd644u;
  { fp_ld(c,4,R(3)); goto L8c0abcce; }
L8c0abba2:;
  R(0)=0x8c0bd64cu;
  {  goto L8c0abbb0; }
L8c0abba8:;
  R(1)=0x8c0bd640u;
  { fp_ld(c,4,R(1)); goto L8c0abcce; }
L8c0abbae:;
  R(0)=0x8c0bd674u;
L8c0abbb0:;
  { fp_ld(c,4,R(0)); goto L8c0abcce; }
L8c0abbb4:;
  fp_ld(c,3,R(15));
  R(3)=0x8c0bd66cu;
  fp_mov(c,1,3);
  fp_arith(c,2,1,3);
  R(7)=0x8c0bd5a4u;
  R(0)=LD32(R(15)+4);
  R(6)=0x8c0bd594u;
  R(5)=R(7);
  fp_ld(c,4,R(3));
  c->t=(int32_t)R(0)==0;
  R(11)=R(6);
  { uint32_t k=c->t; fp_arith(c,1,4,3); if(k) goto L8c0abbde; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0abc12;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0abc56;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0abc8a;
  {  goto L8c0abcce; }
L8c0abbde:;
  R(6)=R(11);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  R(4)=R(14);
L8c0abbe4:;
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,1);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0abbe4; }
  fp_mov(c,6,4);
  R(4)=R(13);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
L8c0abbf8:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,1);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0abbf8; }
  fp_ld(c,3,R(15));
  fp_mov(c,5,4);
  fp_arith(c,2,3,6);
  fp_mov(c,4,3);
  { fp_arith(c,3,4,5); goto L8c0abcce; }
L8c0abc12:;
  fp_mov(c,3,4);
  R(5)=R(7);
  fp_mov(c,5,4);
  fp_arith(c,2,5,3);
  fp_st(c,4,R(15));
  R(4)=R(13);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
L8c0abc20:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,5);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0abc20; }
  fp_ld(c,3,R(15));
  R(5)=R(6);
  fp_mov(c,6,4);
  R(4)=R(14);
  fp_mov(c,5,3);
  fp_arith(c,2,5,3);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
L8c0abc3c:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,5);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0abc3c; }
  fp_ld(c,3,R(15));
  fp_mov(c,5,4);
  fp_arith(c,2,3,5);
  fp_mov(c,4,6);
  { fp_arith(c,3,4,3); goto L8c0abcce; }
L8c0abc56:;
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  R(4)=R(13);
L8c0abc5a:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,1);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0abc5a; }
  R(5)=R(11);
  fp_mov(c,6,4);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  R(4)=R(14);
L8c0abc70:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,1);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0abc70; }
  fp_ld(c,3,R(15));
  fp_mov(c,5,4);
  fp_arith(c,2,3,5);
  fp_mov(c,4,6);
  { fp_arith(c,3,4,3); goto L8c0abccc; }
L8c0abc8a:;
  fp_mov(c,3,4);
  R(5)=R(6);
  fp_mov(c,5,4);
  fp_arith(c,2,5,3);
  fp_st(c,4,R(15));
  R(4)=R(14);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
L8c0abc98:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,5);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0abc98; }
  fp_ld(c,3,R(15));
  R(5)=R(7);
  fp_mov(c,6,4);
  R(4)=R(13);
  fp_mov(c,5,3);
  fp_arith(c,2,5,3);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
L8c0abcb4:;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0xffffffffu;
  fp_mov(c,0,5);
  c->t=(int32_t)R(4)>0;
  fp_fmac(c,3,4);
  { uint32_t k=c->t; fp_mov(c,4,3); if(k) goto L8c0abcb4; }
  fp_ld(c,3,R(15));
  fp_mov(c,5,4);
  fp_arith(c,2,3,6);
  fp_mov(c,4,3);
  fp_arith(c,3,4,5);
L8c0abccc:;
  R(12)+=0x1u;
L8c0abcce:;
  c->t=(R(12)&R(10))==0;
  if(c->t) goto L8c0abcd4;
  fp_unary(c,0,4);
L8c0abcd4:;
  fp_mov(c,0,4);
L8c0abcd6:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0abd10(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(3)=0x1u;
  R(8)=R(15);
  R(2)=0x0u;
  ST32(R(15)+12,R(5));
  ST32(R(15),R(6));
  R(5)=R(4);
  ST32(R(15)+24,R(3));
  R(6)=0x8u;
  R(3)=LD32(R(15)+12);
  R(8)+=0x24u;
  R(11)=LD32(R(15));
  R(11)+=R(3);
  R(3)=0x8c0685b4u;
  ST8(R(11),R(2));
  { c->pr=0x8c0abd42u; R(4)=R(8); f_8c0685b4(c); }
  R(2)=LD32(R(15));
  R(12)=R(15);
  R(3)=0x8c0bd5b8u;
  R(10)=0x8u;
  R(2)+=0xffffffffu;
  ST32(R(15)+4,R(2));
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  ST32(R(15)+20,R(2));
  R(12)+=0x1cu;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  { ST32(R(15)+16,R(3)); goto L8c0abe0c; }
L8c0abd60:;
  R(3)=0x8c067940u;
  R(1)=LD32(R(15)+16);
  { c->pr=0x8c0abd68u; R(0)=0x5u; f_8c067940(c); }
  R(0)+=0x1u;
  R(14)=R(10);
  c->t=R(0)>>31;R(0)<<=1;
  R(5)=LD32(R(15)+20);
  R(13)=R(10);
  R(14)-=R(0);
  R(3)=0x8c0685b4u;
  R(13)-=R(14);
  R(4)=R(14);
  R(6)=R(13);
  R(5)+=R(14);
  { c->pr=0x8c0abd82u; R(4)+=R(12); f_8c0685b4(c); }
  R(2)=0x0u;
  R(9)=R(10);
  R(3)=R(2);
  ST32(R(15)+8,R(2));
  ST32(R(15),R(3));
L8c0abd8c:;
  R(5)=R(14);
  R(3)=0x8c0b3930u;
  R(4)=R(14);
  R(6)=R(13);
  R(5)+=R(12);
  { c->pr=0x8c0abd9au; R(4)+=R(8); f_8c0b3930(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0abdb6;
  R(5)=R(14);
  R(6)=R(14);
  R(3)=0x8c0b38b8u;
  R(5)+=R(8);
  R(7)=R(13);
  R(6)+=R(12);
  { c->pr=0x8c0abdaeu; R(4)=0x0u; f_8c0b38b8(c); }
  ST32(R(15)+24,R(0));
  R(3)=LD32(R(15)+8);
  R(3)+=R(9);
  ST32(R(15)+8,R(3));
L8c0abdb6:;
  R(3)=0x0u;
  c->t=(int32_t)R(3)>(int32_t)R(9);
  {uint32_t a=R(9),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(9)=r;}
  c->t=R(9)&1;R(9)=(uint32_t)((int32_t)R(9)>>1);
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0abdda;
  R(3)=0x8c0b37acu;
  R(4)=R(14);
  R(6)=0x1u;
  R(5)=R(13);
  { c->pr=0x8c0abdceu; R(4)+=R(12); f_8c0b37ac(c); }
  R(2)=LD32(R(15));
  R(3)=0x4u;
  R(2)+=0x1u;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; ST32(R(15),R(2)); if(k) goto L8c0abd8c; }
L8c0abdda:;
  R(3)=LD32(R(15)+24);
  R(4)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)+=0x30u; if(k) goto L8c0abdf8; }
  { {uint32_t v=R(4);R(11)-=1;ST8(R(11),v);} goto L8c0abdec; }
L8c0abde8:;
  R(2)=0x30u;
  ST8(R(11),R(2));
L8c0abdec:;
  R(3)=LD32(R(15)+12);
  R(11)+=0xffffffffu;
  c->t=R(11)>=R(3);
  if(c->t) goto L8c0abde8;
  {  goto L8c0abe12; }
L8c0abdf8:;
  {uint32_t v=R(4);R(11)-=1;ST8(R(11),v);}
  R(3)=LD32(R(15)+4);
  R(3)+=0xffffffffu;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(15)+20);
  R(2)+=0xfffffff8u;
  ST32(R(15)+20,R(2));
  R(1)=LD32(R(15)+16);
  R(1)+=0xffffffffu;
  ST32(R(15)+16,R(1));
L8c0abe0c:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>=0;
  if(c->t) goto L8c0abd60;
L8c0abe12:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0abe40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(12)=R(15);
  R(14)=0x0u;
  R(12)+=0x34u;
  R(0)=R(14);
  R(8)=R(12);
  R(8)+=0x7u;
  R(3)=R(15);
  R(3)+=0x34u;
  R(2)=R(15);
  fp_st(c,5,R(3));
  R(2)+=0x38u;
  R(9)=R(4);
  R(3)=0x8u;
  fp_st(c,4,R(2));
  R(11)=R(5);
  ST32(R(15)+8,R(3));
  ST16(R(15)+16,R(0));
  R(10)=R(6);
  R(0)=(int32_t)(int8_t)LD8(R(8));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x7f)==0;
  { uint32_t k=!c->t; R(13)=R(7); if(k) goto L8c0abeb4; }
  R(2)=0x8c0b2e84u;
  R(5)=0x7u;
  { c->pr=0x8c0abe88u; R(4)=R(12); f_8c0b2e84(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0abeb4;
  R(5)=R(11);
  R(4)=R(11);
  { R(5)+=0x8u; goto L8c0abe98; }
L8c0abe94:;
  ST8(R(4),R(14));
  R(4)+=0x1u;
L8c0abe98:;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0abe94;
  ST32(R(10),R(14));
  R(0)=(int32_t)(int8_t)LD8(R(8));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0abeac;
  R(2)=0xffffffffu;
  { ST8(R(13),R(2)); goto L8c0ac11c; }
L8c0abeac:;
  R(1)=0x1u;
  ST8(R(13),R(1));
  {  goto L8c0ac11c; }
L8c0abeb4:;
  R(0)=0x34u;
  R(3)=0xffe7ffffu;
  R(2)=c->fpscr;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,4,R(0)+R(15));
  R(8)=R(15);
  R(2)&=R(3);
  R(3)=0x8c0b3964u;
  sh4_setfpscr(c,R(2));
  R(8)+=0x2cu;
  R(5)=R(15);
  R(6)=R(8);
  { c->pr=0x8c0abed2u; R(4)=R(13); f_8c0b3964(c); }
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0abee2;
  R(3)=R(15);
  R(3)+=0x34u;
  R(0)=(int32_t)(int8_t)LD8(R(3)+7);
  R(0)&=0x7fu;
  ST8(R(3)+7,R(0));
L8c0abee2:;
  R(2)=0x7ffu;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0abf30;
  R(0)=(int32_t)(int8_t)LD8(R(12)+6);
  R(3)=0xf0u;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0abf1a;
  R(0)=c->fpscr;
  R(1)=0xffe7ffffu;
  R(5)=0x6u;
  R(0)&=R(1);
  R(1)=0x8c0b2e84u;
  sh4_setfpscr(c,R(0));
  { c->pr=0x8c0abf04u; R(4)=R(12); f_8c0b2e84(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0abf1a;
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0abf12;
  { R(0)=0x1u; goto L8c0ac11e; }
L8c0abf12:;
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0abf30;
  { R(0)=0xffffffffu; goto L8c0ac11e; }
L8c0abf1a:;
  { R(0)=0x2u; goto L8c0ac11e; }
L8c0abf30:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(3)=0x3ffu;
  R(2)-=R(3);
  ST16(R(15),R(2));
  R(2)=(uint32_t)(int32_t)(int16_t)R(2);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c0abf64;
  R(1)=c->fpscr;
  R(0)=0x34u;
  R(2)=0xffe7ffffu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  R(1)&=R(2);
  fp_ld(c,4,R(0)+R(15));
  sh4_setfpscr(c,R(1));
  R(2)=0x8c0b3454u;
  { c->pr=0x8c0abf54u;  f_8c0b3454(c); }
  { R(4)=R(0); goto L8c0abf7e; }
L8c0abf64:;
  R(1)=c->fpscr;
  R(0)=0x34u;
  R(2)=0xffe7ffffu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  R(1)&=R(2);
  fp_ld(c,4,R(0)+R(15));
  sh4_setfpscr(c,R(1));
  R(2)=0x8c0b3454u;
  { c->pr=0x8c0abf7au;  f_8c0b3454(c); }
  R(4)=R(0);
  R(4)+=0xffffffffu;
L8c0abf7e:;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(13)=R(15);
  R(4)-=R(9);
  R(0)=R(14);
  R(2)&=R(3);
  R(3)=0x8c0b3788u;
  sh4_setfpscr(c,R(2));
  R(4)+=0x1u;
  ST8(R(8)+7,R(0));
  R(13)+=0x24u;
  ST32(R(10),R(4));
  R(5)=R(13);
  { c->pr=0x8c0abf9cu; R(4)=R(9); f_8c0b3788(c); }
  R(2)=0x8c067940u;
  R(1)=R(9);
  { c->pr=0x8c0abfa4u; R(0)=LD32(R(15)+8); f_8c067940(c); }
  R(5)=0x8u;
  R(12)=R(0);
  R(5)-=R(12);
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(4)=R(14); if(k) goto L8c0abfc2; }
L8c0abfb0:;
  R(3)=R(4);
  R(3)+=R(12);
  R(3)+=R(13);
  R(0)=R(4);
  R(4)+=0x1u;
  R(3)=(int32_t)(int8_t)LD8(R(3));
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  { uint32_t k=!c->t; ST8(R(13)+R(0),R(3)); if(k) goto L8c0abfb0; }
L8c0abfc2:;
  R(5)=R(13);
  R(5)+=0x8u;
  R(4)+=R(13);
  c->t=R(4)>=R(5);
  if(c->t) goto L8c0abfd4;
L8c0abfcc:;
  ST8(R(4),R(14));
  R(4)+=0x1u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0abfcc;
L8c0abfd4:;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(12)<<=2;
  c->t=R(12)>>31;R(12)<<=1;
  R(6)=R(9);
  R(2)&=R(3);
  R(3)=0x8c0b373cu;
  sh4_setfpscr(c,R(2));
  R(6)-=R(12);
  R(5)=0x8u;
  { c->pr=0x8c0abfecu; R(4)=R(13); f_8c0b373c(c); }
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(12)=R(15);
  R(12)+=0x1cu;
  R(4)=R(9);
  R(2)&=R(3);
  R(3)=0x8c0b3788u;
  sh4_setfpscr(c,R(2));
  R(5)=R(12);
  R(4)+=0xffffffffu;
  { c->pr=0x8c0ac004u; ST32(R(15)+12,R(4)); f_8c0b3788(c); }
  R(2)=0x8c067940u;
  R(1)=LD32(R(15)+12);
  { c->pr=0x8c0ac00cu; R(0)=LD32(R(15)+8); f_8c067940(c); }
  R(5)=0x8u;
  ST32(R(15)+4,R(0));
  R(5)-=R(0);
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(4)=R(14); if(k) goto L8c0ac02a; }
L8c0ac018:;
  R(3)=LD32(R(15)+4);
  R(0)=R(4);
  R(4)+=0x1u;
  R(3)+=R(0);
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  R(3)+=R(12);
  R(3)=(int32_t)(int8_t)LD8(R(3));
  { uint32_t k=!c->t; ST8(R(12)+R(0),R(3)); if(k) goto L8c0ac018; }
L8c0ac02a:;
  R(5)=R(12);
  R(5)+=0x8u;
  R(4)+=R(12);
  c->t=R(4)>=R(5);
  if(c->t) goto L8c0ac03c;
L8c0ac034:;
  ST8(R(4),R(14));
  R(4)+=0x1u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0ac034;
L8c0ac03c:;
  R(3)=LD32(R(15)+4);
  R(5)=0x8u;
  R(2)=c->fpscr;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(9)-=R(3);
  R(3)=0xffe7ffffu;
  R(6)=R(9);
  R(6)+=0xffffffffu;
  R(2)&=R(3);
  R(3)=0x8c0b373cu;
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c0ac058u; R(4)=R(12); f_8c0b373c(c); }
L8c0ac058:;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(5)=R(8);
  R(6)=LD32(R(10));
  R(7)=R(11);
  R(2)&=R(3);
  R(3)=0x8c0b2ea4u;
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c0ac06cu; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0b2ea4(c); }
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(14)=R(15);
  R(14)+=0x14u;
  R(5)=R(11);
  R(3)&=R(2);
  R(2)=0x8c0685b4u;
  sh4_setfpscr(c,R(3));
  R(6)=0x8u;
  { c->pr=0x8c0ac082u; R(4)=R(14); f_8c0685b4(c); }
  R(3)=c->fpscr;
  R(2)=0xffe7ffffu;
  R(6)=0x8u;
  R(9)=0x8c068580u;
  R(5)=R(13);
  R(3)&=R(2);
  R(4)=R(14);
  { c->pr=0x8c0ac094u; sh4_setfpscr(c,R(3)); f_8c068580(c); }
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c0ac0a4;
  R(0)=0x1u;
  ST16(R(15)+16,R(0));
  R(3)=LD32(R(10));
  R(3)+=0x1u;
  { ST32(R(10),R(3)); goto L8c0ac058; }
L8c0ac0a4:;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(6)=0x8u;
  R(5)=R(11);
  R(2)&=R(3);
  R(3)=0x8c0685b4u;
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c0ac0b6u; R(4)=R(14); f_8c0685b4(c); }
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(6)=0x8u;
  R(5)=R(13);
  R(4)=R(14);
  R(2)&=R(3);
  { uint32_t tg=R(9); c->pr=0x8c0ac0c6u; sh4_setfpscr(c,R(2)); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ac0e8;
  R(3)=LD32(R(10));
  R(7)=R(11);
  R(2)=c->fpscr;
  R(3)+=0x1u;
  R(5)=R(8);
  R(6)=R(3);
  ST32(R(10),R(3));
  R(3)=0xffe7ffffu;
  R(2)&=R(3);
  R(3)=0x8c0b2ea4u;
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c0ac0e4u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0b2ea4(c); }
  {  goto L8c0ac11c; }
L8c0ac0e8:;
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(6)=0x8u;
  R(5)=R(11);
  R(2)&=R(3);
  R(3)=0x8c0685b4u;
  sh4_setfpscr(c,R(2));
  { c->pr=0x8c0ac0fau; R(4)=R(14); f_8c0685b4(c); }
  R(2)=c->fpscr;
  R(3)=0xffe7ffffu;
  R(6)=0x8u;
  R(5)=R(12);
  R(4)=R(14);
  R(2)&=R(3);
  { uint32_t tg=R(9); c->pr=0x8c0ac10au; sh4_setfpscr(c,R(2)); sh4_call(c,tg); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0ac11c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ac11c;
  R(2)=LD32(R(10));
  R(2)+=0xffffffffu;
  { ST32(R(10),R(2)); goto L8c0ac058; }
L8c0ac11c:;
  R(0)=0x0u;
L8c0ac11e:;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ac154(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0b3098u;
  { c->pr=0x8c0ac15eu;  f_8c0b3098(c); }
  R(3)=R(15);
  R(4)=0x7f800000u;
  fp_st(c,0,R(15));
  R(2)=LD32(R(3));
  R(2)&=R(4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0ac184;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7fffffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c0ac17e;
  R(2)=0x8c129ae4u;
  R(0)=0x44du;
  { ST32(R(2),R(0)); goto L8c0ac184; }
L8c0ac17e:;
  R(1)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(1),R(2));
L8c0ac184:;
  fp_ld(c,0,R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ac1a4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c524u;
  { c->pr=0x8c0ac1acu;  f_8c09c524(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ac1b8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  { R(7)=R(12); goto L8c0ac1e8; }
L8c0ac1c2:;
  R(14)=R(4);
  R(6)=R(12);
  { R(14)+=R(7); goto L8c0ac1cc; }
L8c0ac1ca:;
  R(6)+=0x1u;
L8c0ac1cc:;
  R(0)=R(5);
  R(1)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ac1da;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=R(1)==R(3);
  if(!c->t) goto L8c0ac1ca;
L8c0ac1da:;
  R(0)=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ac1e6;
  { R(0)=R(14); goto L8c0ac1f2; }
L8c0ac1e6:;
  R(7)+=0x1u;
L8c0ac1e8:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(7)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ac1c2;
  R(0)=0x0u;
L8c0ac1f2:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ac1f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  R(9)=0x0u;
  R(10)=0x8c0bb9c8u;
  R(3)=R(9);
  R(2)=R(3);
  R(13)=0x8c0b3890u;
  R(11)=0x1u;
  R(14)=R(4);
  R(12)=R(14);
  ST32(R(15)+24,R(5));
  ST32(R(15)+12,R(3));
  ST32(R(15)+4,R(2));
  R(2)=0xffffffffu;
  ST32(R(15)+20,R(11));
  ST32(R(15)+28,R(3));
  ST32(R(15)+8,R(2));
  ST32(R(15)+16,R(11));
  { R(8)=0x40u; goto L8c0ac240; }
L8c0ac230:;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac238u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac240;
  {  goto L8c0ac50c; }
L8c0ac240:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(8))==0;
  if(!c->t) goto L8c0ac230;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ac25a; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c0ac286;
L8c0ac25a:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==45;
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c0ac266; }
  R(2)=0xffffffffu;
  ST32(R(15)+20,R(2));
L8c0ac266:;
  R(5)=R(12);
  { uint32_t tg=R(13); c->pr=0x8c0ac26cu; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac286;
  {  goto L8c0ac50c; }
L8c0ac274:;
  R(5)=R(12);
  R(14)+=0x1u;
  ST32(R(15)+28,R(11));
  { uint32_t tg=R(13); c->pr=0x8c0ac27eu; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac286;
  {  goto L8c0ac50c; }
L8c0ac286:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c0ac274;
  { R(8)=0x4u; goto L8c0ac2c2; }
L8c0ac290:;
  R(3)=0x11u;
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(c->t) goto L8c0ac2a6;
  R(2)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(2)+=0x24u;
  R(1)=R(9);
  R(1)+=R(2);
  ST8(R(1),R(0));
  { R(9)+=0x1u; goto L8c0ac2ac; }
L8c0ac2a6:;
  R(1)=0x8c129ae4u;
  R(2)=0x4b2u;
  ST32(R(1),R(2));
L8c0ac2ac:;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac2b4u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac2bc;
  {  goto L8c0ac50c; }
L8c0ac2bc:;
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  ST32(R(15)+8,R(3));
L8c0ac2c2:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(8))==0;
  if(!c->t) goto L8c0ac290;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==46;
  if(!c->t) goto L8c0ac358;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac2dcu; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac2e4;
  {  goto L8c0ac50c; }
L8c0ac2e4:;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c0ac34c;
  {  goto L8c0ac314; }
L8c0ac2fc:;
  R(5)=R(12);
  R(14)+=0x1u;
  ST32(R(15)+28,R(11));
  { uint32_t tg=R(13); c->pr=0x8c0ac306u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac30e;
  {  goto L8c0ac50c; }
L8c0ac30e:;
  R(3)=LD32(R(15)+8);
  R(3)+=0xffffffffu;
  ST32(R(15)+8,R(3));
L8c0ac314:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c0ac2fc;
  {  goto L8c0ac34c; }
L8c0ac31e:;
  R(3)=0x11u;
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  { uint32_t k=c->t; ST32(R(15)+28,R(11)); if(k) goto L8c0ac336; }
  R(2)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(2)+=0x24u;
  R(1)=R(9);
  R(1)+=R(2);
  ST8(R(1),R(0));
  { R(9)+=0x1u; goto L8c0ac33c; }
L8c0ac336:;
  R(1)=0x8c129ae4u;
  R(2)=0x4b2u;
  ST32(R(1),R(2));
L8c0ac33c:;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac344u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac34c;
  {  goto L8c0ac50c; }
L8c0ac34c:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(8))==0;
  if(!c->t) goto L8c0ac31e;
L8c0ac358:;
  c->t=(R(9)&R(9))==0;
  { uint32_t k=!c->t; c->fr[15]=0x00000000u; if(k) goto L8c0ac416; }
  fp_st(c,15,R(15));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0ac36e;
  R(3)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(3)+7);
  R(0)|=0x80u;
  ST8(R(3)+7,R(0));
L8c0ac36e:;
  R(0)=LD32(R(15)+28);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ac378;
  {  goto L8c0ac5d0; }
L8c0ac378:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(11))==0;
  if(c->t) goto L8c0ac38a;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac38c; }
L8c0ac38a:;
  R(0)=R(4);
L8c0ac38c:;
  c->t=(int32_t)R(0)==101;
  if(!c->t) goto L8c0ac3ce;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac398u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac3a0;
  {  goto L8c0ac50c; }
L8c0ac3a0:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ac3ae; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c0ac3c2;
L8c0ac3ae:;
  { R(14)+=0x1u; goto L8c0ac3c2; }
L8c0ac3b2:;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac3bau; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac3c2;
  {  goto L8c0ac50c; }
L8c0ac3c2:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(8))==0;
  if(!c->t) goto L8c0ac3b2;
L8c0ac3ce:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  R(5)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(5)=R(5)&0xFF;
  R(5)&=R(11);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ac3e8;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac3ea; }
L8c0ac3e8:;
  R(0)=R(4);
L8c0ac3ea:;
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c0ac402;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ac3f8;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac3fa; }
L8c0ac3f8:;
  R(0)=R(4);
L8c0ac3fa:;
  c->t=(int32_t)R(0)==108;
  if(c->t) goto L8c0ac402;
  {  goto L8c0ac5d0; }
L8c0ac402:;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac40au; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ac412;
  {  goto L8c0ac5d0; }
L8c0ac412:;
  {  goto L8c0ac50c; }
L8c0ac416:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(11))==0;
  if(c->t) goto L8c0ac428;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac42a; }
L8c0ac428:;
  R(0)=R(4);
L8c0ac42a:;
  c->t=(int32_t)R(0)==101;
  if(!c->t) goto L8c0ac4b8;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac436u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ac50c;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ac448; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c0ac46e;
L8c0ac448:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==45;
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c0ac454; }
  R(2)=0xffffffffu;
  ST32(R(15)+16,R(2));
L8c0ac454:;
  R(5)=R(12);
  { uint32_t tg=R(13); c->pr=0x8c0ac45au; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac46e;
  {  goto L8c0ac50c; }
L8c0ac462:;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac46au; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ac50c;
L8c0ac46e:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c0ac462;
  {  goto L8c0ac4ac; }
L8c0ac478:;
  R(2)=LD32(R(15)+4);
  R(3)=0x3u;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c0ac496;
  R(2)=LD32(R(15)+4);
  R(1)=R(15);
  R(1)+=0x20u;
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
  R(2)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(2)+=R(1);
  ST8(R(2),R(0));
  {  goto L8c0ac4a0; }
L8c0ac496:;
  R(2)=0x8c129ae4u;
  R(1)=0x4b4u;
  ST32(R(2),R(1));
  R(0)=LD32(R(15)+16);
  ST32(R(15)+12,R(0));
L8c0ac4a0:;
  R(5)=R(12);
  R(14)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c0ac4a8u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ac50c;
L8c0ac4ac:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(8))==0;
  if(!c->t) goto L8c0ac478;
L8c0ac4b8:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(5)=R(10);
  R(0)=R(4)&0xFF;
  R(6)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(6)=R(6)&0xFF;
  R(6)&=R(11);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0ac4d4;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac4d6; }
L8c0ac4d4:;
  R(0)=R(4);
L8c0ac4d6:;
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c0ac4ea;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0ac4e4;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac4e6; }
L8c0ac4e4:;
  R(0)=R(4);
L8c0ac4e6:;
  c->t=(int32_t)R(0)==108;
  if(!c->t) goto L8c0ac512;
L8c0ac4ea:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(11))==0;
  if(c->t) goto L8c0ac4fc;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac4fe; }
L8c0ac4fc:;
  R(0)=R(4);
L8c0ac4fe:;
  R(5)=R(12);
  R(14)+=0x1u;
  c->t=(int32_t)R(0)==102;
  { uint32_t tg=R(13); c->pr=0x8c0ac508u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac512;
L8c0ac50c:;
  R(0)=0x8c0ac57cu;
  { fp_ld(c,0,R(0)); goto L8c0ac5dc; }
L8c0ac512:;
  R(3)=LD32(R(15)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ac592;
  R(3)=0x11u;
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  { uint32_t k=c->t; R(4)=0x30u; if(k) goto L8c0ac532; }
L8c0ac520:;
  R(3)=R(15);
  R(3)+=0x24u;
  R(1)=R(9);
  R(2)=0x11u;
  R(1)+=R(3);
  R(9)+=0x1u;
  ST8(R(1),R(4));
  c->t=(int32_t)R(9)>=(int32_t)R(2);
  if(!c->t) goto L8c0ac520;
L8c0ac532:;
  R(3)=LD32(R(15)+4);
  R(5)=0x0u;
  R(6)=R(5);
  R(4)=R(15);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0ac55a; }
L8c0ac540:;
  R(3)=R(5);
  R(3)<<=2;
  R(2)=R(5);
  R(3)+=R(2);
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(1)=(uint32_t)v;}
  c->t=R(3)>>31;R(3)<<=1;
  R(6)+=0x1u;
  R(1)+=R(3);
  R(3)=LD32(R(15)+4);
  R(5)=R(1);
  c->t=(int32_t)R(6)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(5)+=0xffffffd0u; if(k) goto L8c0ac540; }
L8c0ac55a:;
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0ac562;
  R(5)=0u-R(5);
L8c0ac562:;
  R(2)=LD32(R(15)+8);
  R(3)=0x3e8u;
  R(4)=0x4b6u;
  R(5)+=R(2);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0ac584;
  R(0)=0x8c129ae4u;
  ST32(R(0),R(4));
  { ST32(R(15)+12,R(11)); goto L8c0ac592; }
L8c0ac584:;
  R(1)=0xfffffc18u;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c0ac592;
  R(0)=0x8c129ae4u;
  ST32(R(0),R(4));
  R(3)=0xffffffffu;
  ST32(R(15)+12,R(3));
L8c0ac592:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ac5b2;
  R(3)=0x0u;
  R(2)=R(15);
  ST32(R(2),R(3));
  R(2)=R(15);
  R(3)=0x7ff00000u;
  ST32(R(2)+4,R(3));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0ac5b2;
  R(3)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(3)+7);
  R(0)|=0x80u;
  ST8(R(3)+7,R(0));
L8c0ac5b2:;
  R(0)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0ac5ba;
  fp_st(c,15,R(15));
L8c0ac5ba:;
  R(3)=LD32(R(15)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ac5d0;
  R(6)=R(5);
  R(3)=0x8c0b3804u;
  R(5)=R(15);
  R(7)=0x4u;
  R(5)+=0x24u;
  { c->pr=0x8c0ac5ceu; R(4)=LD32(R(15)+20); f_8c0b3804(c); }
  fp_st(c,0,R(15));
L8c0ac5d0:;
  R(3)=LD32(R(15)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ac5da;
  R(3)=LD32(R(15)+24);
  ST32(R(3),R(14));
L8c0ac5da:;
  fp_ld(c,0,R(15));
L8c0ac5dc:;
  R(15)+=0x38u;
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
void f_8c0ac600(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x0u;
  R(11)=0x8c0b3890u;
  R(2)=R(3);
  R(14)=R(4);
  R(13)=0x8c0bb9c8u;
  R(9)=R(14);
  ST32(R(15)+12,R(5));
  R(10)=R(6);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  { R(12)=0x40u; goto L8c0ac63c; }
L8c0ac62c:;
  R(5)=R(9);
  R(14)+=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c0ac634u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac63c;
  {  goto L8c0ac886; }
L8c0ac63c:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(12))==0;
  if(!c->t) goto L8c0ac62c;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(12)=0x1u;
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ac658; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c0ac670;
L8c0ac658:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==45;
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c0ac662; }
  ST32(R(15)+4,R(12));
L8c0ac662:;
  R(5)=R(9);
  { uint32_t tg=R(11); c->pr=0x8c0ac668u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac670;
  {  goto L8c0ac886; }
L8c0ac670:;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c0ac6be;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c0ac6ba;
  R(5)=R(9);
  R(14)+=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c0ac682u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac68a;
  {  goto L8c0ac886; }
L8c0ac68a:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(12))==0;
  if(c->t) goto L8c0ac69c;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac69e; }
L8c0ac69c:;
  R(0)=R(4);
L8c0ac69e:;
  c->t=(int32_t)R(0)==120;
  if(!c->t) goto L8c0ac6b6;
  R(5)=R(9);
  R(14)+=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c0ac6aau; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac6b2;
  {  goto L8c0ac886; }
L8c0ac6b2:;
  { R(10)=0x10u; goto L8c0ac6f4; }
L8c0ac6b6:;
  { R(10)=0x8u; goto L8c0ac6f4; }
L8c0ac6ba:;
  { R(10)=0xau; goto L8c0ac6f4; }
L8c0ac6be:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c0ac6f4;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c0ac6f4;
  R(14)+=0x1u;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(12))==0;
  if(c->t) goto L8c0ac6de;
  R(0)=R(4);
  { R(0)+=0x20u; goto L8c0ac6e0; }
L8c0ac6de:;
  R(0)=R(4);
L8c0ac6e0:;
  c->t=(int32_t)R(0)==120;
  { uint32_t k=!c->t; R(5)=R(9); if(k) goto L8c0ac6e8; }
  R(14)+=0x1u;
L8c0ac6e8:;
  { uint32_t tg=R(11); c->pr=0x8c0ac6ecu; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac6f4;
  {  goto L8c0ac886; }
L8c0ac6f4:;
  R(3)=0x2u;
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  if(c->t) goto L8c0ac6fe;
  {  goto L8c0ac88a; }
L8c0ac6fe:;
  R(1)=0x24u;
  c->t=(int32_t)R(10)>(int32_t)R(1);
  if(!c->t) goto L8c0ac708;
  {  goto L8c0ac88a; }
L8c0ac708:;
  R(3)=0xau;
  c->t=(int32_t)R(10)>(int32_t)R(3);
  if(!c->t) goto L8c0ac714;
  R(0)=R(10);
  { R(0)+=0x56u; goto L8c0ac718; }
L8c0ac714:;
  R(0)=R(10);
  R(0)+=0x2fu;
L8c0ac718:;
  ST8(R(15)+8,R(0));
  R(3)=0x7u;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  R(5)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(5)=R(5)&0xFF;
  c->t=(R(3)&R(5))==0;
  if(c->t) goto L8c0ac812;
  R(2)=0x1u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c0ac734;
  R(1)=R(4);
  { R(1)+=0x20u; goto L8c0ac736; }
L8c0ac734:;
  R(1)=R(4);
L8c0ac736:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(int32_t)R(1)>(int32_t)R(0);
  if(c->t) goto L8c0ac812;
  {  goto L8c0ac750; }
L8c0ac740:;
  R(5)=R(9);
  R(14)+=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c0ac748u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac750;
  {  goto L8c0ac886; }
L8c0ac750:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c0ac740;
  R(2)=0x0u;
  ST32(R(15),R(2));
  { R(8)=R(2); goto L8c0ac7b6; }
L8c0ac75e:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0ac7aa;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0ac776;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  { R(4)+=0xffffffd0u; goto L8c0ac78c; }
L8c0ac776:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(5)&0xFF;
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(12))==0;
  if(c->t) goto L8c0ac788;
  R(4)=R(5);
  { R(4)+=0x20u; goto L8c0ac78a; }
L8c0ac788:;
  R(4)=R(5);
L8c0ac78a:;
  R(4)+=0xffffffa9u;
L8c0ac78c:;
  R(1)=LD32(R(15)+4);
  R(3)=0x7fffffffu;
  R(2)=0x8c0679f4u;
  R(1)-=R(4);
  R(1)+=R(3);
  { c->pr=0x8c0ac79au; R(0)=R(10); f_8c0679f4(c); }
  c->t=R(8)>R(0);
  if(!c->t) goto L8c0ac7a2;
  { ST32(R(15),R(12)); goto L8c0ac7aa; }
L8c0ac7a2:;
  c->macl=R(10)*R(8);
  R(1)=c->macl;
  R(8)=R(1);
  R(8)+=R(4);
L8c0ac7aa:;
  R(5)=R(9);
  R(14)+=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c0ac7b2u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ac886;
L8c0ac7b6:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(3)=0x7u;
  R(0)=R(4)&0xFF;
  R(5)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(5)=R(5)&0xFF;
  c->t=(R(3)&R(5))==0;
  if(c->t) goto L8c0ac7d8;
  R(2)=0x1u;
  c->t=(R(2)&R(5))==0;
  if(c->t) goto L8c0ac7d0;
  R(1)=R(4);
  { R(1)+=0x20u; goto L8c0ac7d2; }
L8c0ac7d0:;
  R(1)=R(4);
L8c0ac7d2:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  c->t=(int32_t)R(1)>(int32_t)R(0);
  if(!c->t) goto L8c0ac75e;
L8c0ac7d8:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0ac7fc;
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ac7e6;
  R(8)=0u-R(8);
L8c0ac7e6:;
  { ST32(R(15),R(8)); goto L8c0ac812; }
L8c0ac7fc:;
  R(3)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(3),R(2));
  R(1)=LD32(R(15)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0ac80e;
  R(1)=0x7fffffffu;
  { ST32(R(15),R(1)); goto L8c0ac812; }
L8c0ac80e:;
  R(2)=0x80000000u;
  ST32(R(15),R(2));
L8c0ac812:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(4)=R(13);
  R(0)=R(5)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(12))==0;
  if(c->t) goto L8c0ac826;
  R(0)=R(5);
  { R(0)+=0x20u; goto L8c0ac828; }
L8c0ac826:;
  R(0)=R(5);
L8c0ac828:;
  c->t=(int32_t)R(0)==117;
  if(!c->t) goto L8c0ac848;
  R(14)+=0x1u;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(5)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(12))==0;
  if(c->t) goto L8c0ac840;
  R(0)=R(5);
  { R(0)+=0x20u; goto L8c0ac842; }
L8c0ac840:;
  R(0)=R(5);
L8c0ac842:;
  c->t=(int32_t)R(0)==108;
  if(!c->t) goto L8c0ac848;
  R(14)+=0x1u;
L8c0ac848:;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(5)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(12))==0;
  if(c->t) goto L8c0ac85a;
  R(0)=R(5);
  { R(0)+=0x20u; goto L8c0ac85c; }
L8c0ac85a:;
  R(0)=R(5);
L8c0ac85c:;
  c->t=(int32_t)R(0)==108;
  if(!c->t) goto L8c0ac87c;
  R(14)+=0x1u;
  R(5)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(5)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(12))==0;
  if(c->t) goto L8c0ac874;
  R(0)=R(5);
  { R(0)+=0x20u; goto L8c0ac876; }
L8c0ac874:;
  R(0)=R(5);
L8c0ac876:;
  c->t=(int32_t)R(0)==117;
  if(!c->t) goto L8c0ac87c;
  R(14)+=0x1u;
L8c0ac87c:;
  R(5)=R(9);
  { uint32_t tg=R(11); c->pr=0x8c0ac882u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac890;
L8c0ac886:;
  { R(0)=0x0u; goto L8c0ac89c; }
L8c0ac88a:;
  R(3)=0x8c129ae4u;
  R(2)=0x4b0u;
  ST32(R(3),R(2));
L8c0ac890:;
  R(1)=LD32(R(15)+12);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ac89a;
  R(1)=LD32(R(15)+12);
  ST32(R(1),R(14));
L8c0ac89a:;
  R(0)=LD32(R(15));
L8c0ac89c:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ac8e0(SH4Ctx *c) {
  R(2)=0x18u;
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0ac8ec(SH4Ctx *c) {
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ac8f6;
  { R(3)=0x0u; goto L8c0ac8f8; }
L8c0ac8f6:;
  R(3)=LD32(R(4)+4);
L8c0ac8f8:;
  R(2)=0xbu;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0ac902(SH4Ctx *c) {
  R(2)=0x8c123cf0u;
  R(4)=LD32(R(2));
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ac910;
  { R(3)=0x0u; goto L8c0ac912; }
L8c0ac910:;
  R(3)=LD32(R(4)+4);
L8c0ac912:;
  R(1)=0xbu;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(1));
  { R(0)=R(5); return; }
}
void f_8c0ac91c(SH4Ctx *c) {
  R(2)=0x19u;
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0ac928(SH4Ctx *c) {
  R(2)=0xbu;
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0ac934(SH4Ctx *c) {
  R(2)=0xau;
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0ac940(SH4Ctx *c) {
  R(2)=0x24u;
  R(3)=0xffffffffu;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0ac94c(SH4Ctx *c) {
  R(2)=0x2bu;
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0ac958(SH4Ctx *c) {
  R(2)=0x2cu;
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0ac964(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(5);
  ST32(R(15),R(4));
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ac9c0;
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0ac9c0:;
  R(3)=0x8c072fa2u;
  R(4)=LD32(R(15));
  { c->pr=0x8c0ac9c8u; R(4)+=0xcu; f_8c072fa2(c); }
  R(3)=0x8c067940u;
  R(1)=R(0);
  R(4)=R(0);
  R(1)-=R(14);
  { c->pr=0x8c0ac9d4u; R(0)=0xcu; f_8c067940(c); }
  ST16(R(14)+8,R(0));
  R(0)=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ac9e0(SH4Ctx *c) {
  R(3)=0x8c073266u;
  {  { f_8c073266(c); return; } }
}
void f_8c0ac9e6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  R(14)+=0xfffffff4u;
  R(4)=R(14);
  R(5)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ac964(c); return; } }
}
void f_8c0ac9f4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  ST32(R(15),R(6));
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0aca18;
  R(3)=0x8c0cc014u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0aca18;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0aca16u; R(4)=R(5); f_8c0ac964(c); }
  R(5)=R(0);
L8c0aca18:;
  R(2)=LD32(R(15));
  R(3)=0x0u;
  ST32(R(2),R(3));
  R(3)=0x14u;
  R(2)=LD32(R(15));
  ST32(R(2)+12,R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c0aca2c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  ST32(R(15),R(6));
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0aca50;
  R(3)=0x8c0cc015u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0aca50;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0aca4eu; R(4)=R(5); f_8c0ac964(c); }
  R(5)=R(0);
L8c0aca50:;
  R(2)=LD32(R(15));
  R(3)=0x0u;
  ST32(R(2),R(3));
  R(3)=0x14u;
  R(2)=LD32(R(15));
  ST32(R(2)+12,R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c0aca64(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  R(12)+=0xfffffff4u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0aca86; }
  R(3)=LD32(R(14)+4);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c0aca82u; R(5)=R(14); sh4_call(c,tg); }
  { R(14)=R(0); goto L8c0acb1a; }
L8c0aca86:;
  R(0)=LD32(R(12));
  R(3)=0x8c0c608cu;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(6)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c0acaa4; }
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0acaa8;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0acae0;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0acae4;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0acb08;
  {  goto L8c0acb1a; }
L8c0acaa4:;
  { R(5)=0x1u; goto L8c0acae6; }
L8c0acaa8:;
  { R(5)=0x3u; goto L8c0acae6; }
L8c0acae0:;
  { R(5)=0x7u; goto L8c0acae6; }
L8c0acae4:;
  R(5)=0xfu;
L8c0acae6:;
  R(5)&=R(6);
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0acafc;
  R(3)=0x0u;
  R(5)=R(14);
  ST32(R(13),R(3));
  { c->pr=0x8c0acaf8u; R(4)=R(12); f_8c0ac964(c); }
  {  goto L8c0acb04; }
L8c0acafc:;
  R(2)=LD32(R(14)+4);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c0acb04u; R(5)=R(14); sh4_call(c,tg); }
L8c0acb04:;
  { R(14)=R(0); goto L8c0acb1a; }
L8c0acb08:;
  R(2)=LD32(R(14)+4);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c0acb10u; R(5)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(13));
  R(14)=R(0);
  c->t=(R(2)&R(2))==0;
  R(3)=c->t;
  ST32(R(13),R(3));
L8c0acb1a:;
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0acb24;
  { R(14)+=0xcu; goto L8c0acb4c; }
L8c0acb24:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0acb34;
  R(5)=R(12);
  { c->pr=0x8c0acb32u; R(4)=R(14); f_8c0ac964(c); }
  R(14)=R(0);
L8c0acb34:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+10);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(12)+10);
  c->t=R(3)==R(0);
  if(!c->t) goto L8c0acb4c;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0acb4c;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0acb4c;
  R(14)+=0xcu;
L8c0acb4c:;
  R(2)=0x14u;
  R(0)=R(14);
  R(3)=0x0u;
  ST32(R(13),R(3));
  ST32(R(13)+12,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0acae0(SH4Ctx *c) {
  { R(5)=0x7u; goto L8c0acae6; }
L8c0acae6:;
  R(5)&=R(6);
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0acafc;
  R(3)=0x0u;
  R(5)=R(14);
  ST32(R(13),R(3));
  { c->pr=0x8c0acaf8u; R(4)=R(12); f_8c0ac964(c); }
  {  goto L8c0acb04; }
L8c0acafc:;
  R(2)=LD32(R(14)+4);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c0acb04u; R(5)=R(14); sh4_call(c,tg); }
L8c0acb04:;
  { R(14)=R(0); goto L8c0acb1a; }
L8c0acb1a:;
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0acb24;
  { R(14)+=0xcu; goto L8c0acb4c; }
L8c0acb24:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0acb34;
  R(5)=R(12);
  { c->pr=0x8c0acb32u; R(4)=R(14); f_8c0ac964(c); }
  R(14)=R(0);
L8c0acb34:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+10);
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(12)+10);
  c->t=R(3)==R(0);
  if(!c->t) goto L8c0acb4c;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0acb4c;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c0acb4c;
  R(14)+=0xcu;
L8c0acb4c:;
  R(2)=0x14u;
  R(0)=R(14);
  R(3)=0x0u;
  ST32(R(13),R(3));
  ST32(R(13)+12,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0acb60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff34u;
  R(15)+=R(0);
  R(8)=R(5);
  R(14)=R(6);
  R(12)=R(4);
  ST32(R(15),R(5));
  R(8)=LD32(R(8)+4);
  { uint32_t tg=R(8); c->pr=0x8c0acb82u; R(4)=R(12); sh4_call(c,tg); }
  R(8)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c0acb94; }
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c0acb96; }
L8c0acb94:;
  R(4)=LD32(R(14));
L8c0acb96:;
  R(2)=0x14u;
  ST32(R(14),R(11));
  ST32(R(14)+12,R(2));
  c->t=(R(4)&R(4))==0;
  R(14)=0x8c0bd6e0u;
  R(13)=R(15);
  R(9)=0xffu;
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0acc20; }
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0acbb2;
  { R(4)=0x0u; goto L8c0acbb4; }
L8c0acbb2:;
  R(4)=LD32(R(12)+4);
L8c0acbb4:;
  R(3)=0x8c052c80u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0acbbcu; R(4)=LD32(R(4)+8); f_8c052c80(c); }
  R(2)=0x8c0bd6c8u;
  R(3)=0x8c06874cu;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0acbc8u; R(4)=R(13); f_8c06874c(c); }
  R(2)=0x136u;
  R(3)=0xffffffffu;
  R(1)=0x8c0c7a04u;
  R(7)=0x4du;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c012658u;
  { c->pr=0x8c0acbe6u; R(4)=0x42u; f_8c012658(c); }
  R(6)=0x136u;
  { R(15)+=0x20u; goto L8c0acc88; }
L8c0acc20:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0acce0;
  R(3)=0x8c2dd1d4u;
  R(1)=0x8c2dd1d8u;
  R(5)=LD32(R(3));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(5)=LD32(R(5)+8);
  R(2)=R(2)&0xFF;
  R(5)=LD32(R(5));
  R(2)<<=2;
  R(5)+=R(2);
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=LD32(R(5));
  R(4)+=R(2);
  R(4)<<=2;
  R(4)+=R(8);
  c->t=R(4)>=R(5);
  if(c->t) goto L8c0acc94;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0acc50;
  { R(4)=0x0u; goto L8c0acc52; }
L8c0acc50:;
  R(4)=LD32(R(12)+4);
L8c0acc52:;
  R(3)=0x8c052c80u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0acc5au; R(4)=LD32(R(4)+8); f_8c052c80(c); }
  R(2)=0x8c0bd6f4u;
  R(3)=0x8c06874cu;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0acc66u; R(4)=R(13); f_8c06874c(c); }
  R(2)=0x140u;
  R(3)=0xffffffffu;
  R(1)=0x8c0c7a04u;
  R(7)=0x4du;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(3)=0x8c012658u;
  { c->pr=0x8c0acc84u; R(4)=0x42u; f_8c012658(c); }
  R(15)+=0x20u;
  R(6)=0x140u;
L8c0acc88:;
  R(2)=0x8c0125ccu;
  R(5)=R(14);
  { c->pr=0x8c0acc90u; R(4)=0x0u; f_8c0125cc(c); }
  {  goto L8c0acd4a; }
L8c0acc94:;
  { R(0)=R(4); goto L8c0acd4c; }
L8c0acce0:;
  R(10)=0x14fu;
  c->t=(int32_t)R(4)>0;
  R(5)=R(8);
  { uint32_t k=!c->t; R(6)=R(11); if(k) goto L8c0acd46; }
L8c0accea:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0acd3e;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0accfc;
  { R(4)=0x0u; goto L8c0accfe; }
L8c0accfc:;
  R(4)=LD32(R(12)+4);
L8c0accfe:;
  R(3)=0x8c052c80u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0acd06u; R(4)=LD32(R(4)+8); f_8c052c80(c); }
  R(2)=0x8c0bd71cu;
  R(3)=0x8c06874cu;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0acd12u; R(4)=R(13); f_8c06874c(c); }
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x4du;
  R(3)=0x8c0c7a04u;
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c0acd2eu; R(4)=0x42u; f_8c012658(c); }
  R(15)+=0x20u;
  R(3)=0x8c0125ccu;
  R(5)=R(14);
  R(6)=R(10);
  { c->pr=0x8c0acd3au; R(4)=0x0u; f_8c0125cc(c); }
  {  goto L8c0acd4a; }
L8c0acd3e:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(4);
  { uint32_t k=!c->t; R(5)+=0xcu; if(k) goto L8c0accea; }
L8c0acd46:;
  { R(0)=R(5); goto L8c0acd4c; }
L8c0acd4a:;
  R(0)=R(8);
L8c0acd4c:;
  R(1)=0xccu;
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
void f_8c0acce0(SH4Ctx *c) {
  R(10)=0x14fu;
  c->t=(int32_t)R(4)>0;
  R(5)=R(8);
  { uint32_t k=!c->t; R(6)=R(11); if(k) goto L8c0acd46; }
L8c0accea:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0acd3e;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0accfc;
  { R(4)=0x0u; goto L8c0accfe; }
L8c0accfc:;
  R(4)=LD32(R(12)+4);
L8c0accfe:;
  R(3)=0x8c052c80u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c0acd06u; R(4)=LD32(R(4)+8); f_8c052c80(c); }
  R(2)=0x8c0bd71cu;
  R(3)=0x8c06874cu;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0acd12u; R(4)=R(13); f_8c06874c(c); }
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x4du;
  R(3)=0x8c0c7a04u;
  R(6)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  { c->pr=0x8c0acd2eu; R(4)=0x42u; f_8c012658(c); }
  R(15)+=0x20u;
  R(3)=0x8c0125ccu;
  R(5)=R(14);
  R(6)=R(10);
  { c->pr=0x8c0acd3au; R(4)=0x0u; f_8c0125cc(c); }
  {  goto L8c0acd4a; }
L8c0acd3e:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(4);
  { uint32_t k=!c->t; R(5)+=0xcu; if(k) goto L8c0accea; }
L8c0acd46:;
  { R(0)=R(5); goto L8c0acd4c; }
L8c0acd4a:;
  R(0)=R(8);
L8c0acd4c:;
  R(1)=0xccu;
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
void f_8c0acda0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(13)=R(6);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  ST32(R(15),R(4));
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(11)=LD32(R(14)+4);
  { uint32_t tg=R(11); c->pr=0x8c0acdc6u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x8c0721b8u;
  R(11)=R(0);
  { c->pr=0x8c0acdceu; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c0acdda; }
  R(3)=0x0u;
  { ST32(R(13),R(3)); goto L8c0ace6e; }
L8c0acdda:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=0x0u;
  R(12)=0x8c02831cu;
  R(6)=R(0);
  R(4)=LD32(R(14)+4);
  ST32(R(13),R(3));
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==61;
  { uint32_t k=c->t; R(5)=R(6)&0xFFFF; if(k) goto L8c0acdfe; }
  c->t=(int32_t)R(0)==62;
  if(c->t) goto L8c0ace0a;
  c->t=(int32_t)R(0)==63;
  if(c->t) goto L8c0ace1a;
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0ace60;
  {  goto L8c0ace6e; }
L8c0acdfe:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ace6e;
  { uint32_t tg=R(12); c->pr=0x8c0ace06u; R(4)=LD32(R(14)+40); sh4_call(c,tg); }
  { ST32(R(13),R(0)); goto L8c0ace6e; }
L8c0ace0a:;
  R(3)=0x4u;
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c0ace6e;
  R(0)=0x78u;
  { uint32_t tg=R(12); c->pr=0x8c0ace16u; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  { ST32(R(13),R(0)); goto L8c0ace6e; }
L8c0ace1a:;
  R(2)=0x1u;
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c0ace6e;
  R(0)=0x50u;
  { uint32_t tg=R(12); c->pr=0x8c0ace26u; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  { ST32(R(13),R(0)); goto L8c0ace6e; }
L8c0ace60:;
  R(2)=0x10u;
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c0ace6e;
  R(0)=0xf0u;
  { uint32_t tg=R(12); c->pr=0x8c0ace6cu; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  ST32(R(13),R(0));
L8c0ace6e:;
  R(0)=R(11);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ace60(SH4Ctx *c) {
  R(2)=0x10u;
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c0ace6e;
  R(0)=0xf0u;
  { uint32_t tg=R(12); c->pr=0x8c0ace6cu; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  ST32(R(13),R(0));
L8c0ace6e:;
  R(0)=R(11);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ace7e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(13)=R(6);
  R(6)=0x8c0c76fcu;
  R(3)=R(5);
  R(14)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0acea2;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0acea4; }
L8c0acea2:;
  ST32(R(15),R(4));
L8c0acea4:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c0aceaeu; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==75;
  if(c->t) goto L8c0acebe;
  c->t=(int32_t)R(0)==78;
  if(c->t) goto L8c0acf04;
  {  goto L8c0acf2c; }
L8c0acebe:;
  R(3)=LD32(R(15)+12);
  R(5)=0x1u;
  R(2)=LD32(R(15));
  R(4)=R(5);
  R(3)+=0xffffffffu;
  R(4)=sh4_shad(R(4),R(3));
  R(3)=LD32(R(2)+4);
  R(1)=LD32(R(3)+4);
  R(2)=LD32(R(1)+32);
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c0acf00;
  { R(3)=R(5); goto L8c0acf28; }
L8c0acf00:;
  { R(3)=0x0u; goto L8c0acf28; }
L8c0acf04:;
  R(2)=LD32(R(15)+12);
  ST32(R(15)+4,R(2));
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14));
  R(14)=LD32(R(14)+4);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0acf26;
  R(3)=0x8c084204u;
  { c->pr=0x8c0acf1au; R(4)=R(14); f_8c084204(c); }
  R(2)=LD32(R(15)+4);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(2))==0;
  if(c->t) goto L8c0acf26;
  { R(3)=0x1u; goto L8c0acf28; }
L8c0acf26:;
  R(3)=0x0u;
L8c0acf28:;
  { ST32(R(13),R(3)); goto L8c0acf30; }
L8c0acf2c:;
  R(2)=0x0u;
  ST32(R(13),R(2));
L8c0acf30:;
  R(0)=LD32(R(15)+8);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0acf00(SH4Ctx *c) {
  { R(3)=0x0u; goto L8c0acf28; }
L8c0acf28:;
  { ST32(R(13),R(3)); goto L8c0acf30; }
L8c0acf30:;
  R(0)=LD32(R(15)+8);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0acf3c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(12)=R(6);
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x14u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(14)=LD32(R(14)+4);
  { uint32_t tg=R(14); c->pr=0x8c0acf5au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(11)=LD32(R(15)+20);
  R(14)=R(0);
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(11)=LD32(R(11)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  R(11)=LD32(R(11)+12);
  { uint32_t tg=R(13); c->pr=0x8c0acf6eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=(R(11)&R(11))==0;
  R(13)=R(0);
  { uint32_t k=c->t; R(14)=LD32(R(15)+20); if(k) goto L8c0acf7a; }
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0acf80;
L8c0acf7a:;
  R(3)=0x0u;
  { ST32(R(12),R(3)); goto L8c0acfda; }
L8c0acf80:;
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0acf9a;
  R(3)=0x8c09d954u;
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c0acf90u; R(4)=R(14); f_8c09d954(c); }
  R(6)=LD32(R(11)+36);
  R(5)=R(15);
  R(6)+=0x58u;
  { R(5)+=0x8u; goto L8c0acfa0; }
L8c0acf9a:;
  R(6)=LD32(R(11)+36);
  R(5)=R(14);
  R(6)+=0x58u;
L8c0acfa0:;
  R(3)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c0acfa8u; R(4)+=0x8u; f_8c05e612(c); }
  R(0)=0x8u;
  c->fr[1]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_ld(c,7,R(0)+R(14));
  fp_fmac(c,3,4);
  fp_mov(c,2,7);
  fp_mov(c,0,6);
  fp_arith(c,2,2,7);
  fp_fmac(c,3,6);
  fp_arith(c,1,3,2);
  fp_cmp(c,1,3,1);
  if(!c->t) goto L8c0acfd6;
  R(2)=0x0u;
  { ST32(R(12),R(2)); goto L8c0acfda; }
L8c0acfd6:;
  R(1)=0x1u;
  ST32(R(12),R(1));
L8c0acfda:;
  R(0)=R(13);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0acfea(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c0acffeu; R(5)=R(3); sh4_call(c,tg); }
  R(4)=R(15);
  R(4)+=0x8u;
  fp_ld(c,5,R(4));
  R(5)=R(0);
  c->fr[2]=0x00000000u;
  R(0)=0x8c0ad02cu;
  fp_cmp(c,1,5,2);
  fp_ld(c,4,R(0));
  { uint32_t k=!c->t; R(3)=LD32(R(15)+4); if(k) goto L8c0ad040; }
  { fp_mov(c,3,5); goto L8c0ad044; }
L8c0ad040:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c0ad044:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0ad074;
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0ad056;
  { fp_ld(c,3,R(0)+R(4)); goto L8c0ad058; }
L8c0ad056:;
  fp_unary(c,0,3);
L8c0ad058:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0ad074;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0ad06a;
  { fp_ld(c,3,R(0)+R(4)); goto L8c0ad06c; }
L8c0ad06a:;
  fp_unary(c,0,3);
L8c0ad06c:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0ad074;
  { R(2)=0x1u; goto L8c0ad076; }
L8c0ad074:;
  R(2)=0x0u;
L8c0ad076:;
  ST32(R(3),R(2));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c0ad080(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(12)=R(5);
  R(3)=R(12);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(10)=R(4);
  ST32(R(15)+8,R(6));
  R(2)=LD32(R(3));
  ST32(R(15)+12,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c0ad0ac; }
  ST32(R(15)+4,R(4));
  { ST32(R(5),R(11)); goto L8c0ad0ae; }
L8c0ad0ac:;
  ST32(R(15)+4,R(10));
L8c0ad0ae:;
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ad0e0;
  R(2)=LD32(R(15)+8);
  { ST32(R(2),R(11)); goto L8c0ad3d4; }
L8c0ad0e0:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0ad0e6u;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(4)=0x200u;
  R(0)=LD32(R(15)+12);
  R(5)=0x20u;
  R(7)=0x2000u;
  R(6)=0x100u;
  R(0)+=0xffffffb1u;
  R(1)=0x18u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0ad0fe;
  {  goto L8c0ad3c4; }
L8c0ad0fe:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0ad114u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0ad10au+R(0));  switch(tg){ case 0x8c0ad144u: goto L8c0ad144; case 0x8c0ad152u: goto L8c0ad152; case 0x8c0ad160u: goto L8c0ad160; case 0x8c0ad16eu: goto L8c0ad16e; case 0x8c0ad17cu: goto L8c0ad17c; case 0x8c0ad18au: goto L8c0ad18a; case 0x8c0ad198u: goto L8c0ad198; case 0x8c0ad1a6u: goto L8c0ad1a6; case 0x8c0ad1b4u: goto L8c0ad1b4; case 0x8c0ad1c2u: goto L8c0ad1c2; case 0x8c0ad1e0u: goto L8c0ad1e0; case 0x8c0ad1f0u: goto L8c0ad1f0; case 0x8c0ad1feu: goto L8c0ad1fe; case 0x8c0ad20cu: goto L8c0ad20c; case 0x8c0ad21au: goto L8c0ad21a; case 0x8c0ad260u: goto L8c0ad260; case 0x8c0ad270u: goto L8c0ad270; case 0x8c0ad280u: goto L8c0ad280; case 0x8c0ad28eu: goto L8c0ad28e; case 0x8c0ad31cu: goto L8c0ad31c; case 0x8c0ad36au: goto L8c0ad36a; case 0x8c0ad374u: goto L8c0ad374; case 0x8c0ad38cu: goto L8c0ad38c; default: sh4_bad_jump(c,0x8c0ad106u,tg); return; } }
L8c0ad144:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0ad14e;
  {  goto L8c0ad394; }
L8c0ad14e:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad152:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0ad15c;
  {  goto L8c0ad394; }
L8c0ad15c:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad160:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0ad16a;
  {  goto L8c0ad394; }
L8c0ad16a:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad16e:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0ad178;
  {  goto L8c0ad394; }
L8c0ad178:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad17c:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0ad186;
  {  goto L8c0ad394; }
L8c0ad186:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad18a:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c0ad194;
  {  goto L8c0ad394; }
L8c0ad194:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad198:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(5))==0;
  if(c->t) goto L8c0ad1a2;
  {  goto L8c0ad394; }
L8c0ad1a2:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1a6:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(6))==0;
  if(c->t) goto L8c0ad1b0;
  {  goto L8c0ad394; }
L8c0ad1b0:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1b4:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(4))==0;
  if(c->t) goto L8c0ad1be;
  {  goto L8c0ad394; }
L8c0ad1be:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1c2:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(4))==0;
  if(c->t) goto L8c0ad1cc;
  {  goto L8c0ad394; }
L8c0ad1cc:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1e0:;
  R(13)=LD32(R(14)+12);
  R(3)=0x200000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad1ec;
  {  goto L8c0ad394; }
L8c0ad1ec:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1f0:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0ad1fa;
  {  goto L8c0ad394; }
L8c0ad1fa:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1fe:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(6))==0;
  if(c->t) goto L8c0ad208;
  {  goto L8c0ad394; }
L8c0ad208:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad20c:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(4))==0;
  if(c->t) goto L8c0ad216;
  {  goto L8c0ad394; }
L8c0ad216:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad21a:;
  R(13)=LD32(R(14)+8);
  R(3)=0x400u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad226;
  {  goto L8c0ad394; }
L8c0ad226:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad260:;
  R(13)=LD32(R(14)+8);
  R(3)=0x800u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad26c;
  {  goto L8c0ad394; }
L8c0ad26c:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad270:;
  R(13)=LD32(R(14)+8);
  R(3)=0x1000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad27c;
  {  goto L8c0ad394; }
L8c0ad27c:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad280:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(5))==0;
  if(c->t) goto L8c0ad28a;
  {  goto L8c0ad394; }
L8c0ad28a:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad28e:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c0ad2c0;
  { R(13)=0x1u; goto L8c0ad2c2; }
L8c0ad2c0:;
  R(13)=0x0u;
L8c0ad2c2:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ad312;
  R(0)=(int32_t)(int8_t)LD8(R(12)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0ad2de;
  R(2)=0x8c06ff00u;
  R(12)+=0xcu;
  R(5)=R(12);
  R(6)=R(15);
  { c->pr=0x8c0ad2dau; R(4)=R(10); f_8c06ff00(c); }
  { R(12)=R(0); goto L8c0ad2e0; }
L8c0ad2de:;
  ST32(R(15),R(10));
L8c0ad2e0:;
  R(3)=0x220u;
  R(2)=R(15);
  R(6)=LD32(R(15));
  R(2)+=0x10u;
  R(3)+=R(14);
  R(7)=R(15);
  R(1)=LD32(R(3));
  R(7)+=0x10u;
  R(6)=LD32(R(6)+4);
  R(0)=LD32(R(3)+4);
  R(6)=LD32(R(6)+12);
  R(4)=LD32(R(12));
  R(12)+=0xcu;
  R(6)=LD32(R(6));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(3)=0x15u;
  ST32(R(2)+8,R(1));
  ST32(R(15)+28,R(3));
  R(3)=0x8c0729f6u;
  { c->pr=0x8c0ad30eu; R(5)=0x0u; f_8c0729f6(c); }
  {  goto L8c0ad3c6; }
L8c0ad312:;
  R(3)=0x8c072ff8u;
  { c->pr=0x8c0ad318u; R(4)=R(12); f_8c072ff8(c); }
  { R(12)=R(0); goto L8c0ad3c6; }
L8c0ad31c:;
  R(13)=LD32(R(14)+12);
  R(3)=0x10000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad360;
  { R(13)=0x1u; goto L8c0ad362; }
L8c0ad360:;
  R(13)=0x0u;
L8c0ad362:;
  R(2)=LD32(R(14)+12);
  R(3)=0xfffeffffu;
  { R(2)&=R(3); goto L8c0ad388; }
L8c0ad36a:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(7))==0;
  if(!c->t) goto L8c0ad394;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad374:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(7))==0;
  if(c->t) goto L8c0ad37e;
  { R(13)=0x1u; goto L8c0ad380; }
L8c0ad37e:;
  R(13)=0x0u;
L8c0ad380:;
  R(2)=LD32(R(14)+12);
  R(3)=0xffffdfffu;
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
L8c0ad388:;
  { ST32(R(14)+12,R(2)); goto L8c0ad3c6; }
L8c0ad38c:;
  R(13)=LD32(R(14)+12);
  R(3)=0x80000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad3c0;
L8c0ad394:;
  { R(13)=0x1u; goto L8c0ad3c6; }
L8c0ad3c0:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad3c4:;
  R(13)=R(11);
L8c0ad3c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+8); if(k) goto L8c0ad3d0; }
  { R(3)=0x1u; goto L8c0ad3d2; }
L8c0ad3d0:;
  R(3)=0x0u;
L8c0ad3d2:;
  ST32(R(2),R(3));
L8c0ad3d4:;
  R(0)=R(12);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad0e0(SH4Ctx *c) {
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0ad0e6u;  f_8c04a8b8(c); }
  R(14)=R(0);
  R(4)=0x200u;
  R(0)=LD32(R(15)+12);
  R(5)=0x20u;
  R(7)=0x2000u;
  R(6)=0x100u;
  R(0)+=0xffffffb1u;
  R(1)=0x18u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0ad0fe;
  {  goto L8c0ad3c4; }
L8c0ad0fe:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0ad114u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0ad10au+R(0));  switch(tg){ case 0x8c0ad144u: goto L8c0ad144; case 0x8c0ad152u: goto L8c0ad152; case 0x8c0ad160u: goto L8c0ad160; case 0x8c0ad16eu: goto L8c0ad16e; case 0x8c0ad17cu: goto L8c0ad17c; case 0x8c0ad18au: goto L8c0ad18a; case 0x8c0ad198u: goto L8c0ad198; case 0x8c0ad1a6u: goto L8c0ad1a6; case 0x8c0ad1b4u: goto L8c0ad1b4; case 0x8c0ad1c2u: goto L8c0ad1c2; case 0x8c0ad1e0u: goto L8c0ad1e0; case 0x8c0ad1f0u: goto L8c0ad1f0; case 0x8c0ad1feu: goto L8c0ad1fe; case 0x8c0ad20cu: goto L8c0ad20c; case 0x8c0ad21au: goto L8c0ad21a; case 0x8c0ad260u: goto L8c0ad260; case 0x8c0ad270u: goto L8c0ad270; case 0x8c0ad280u: goto L8c0ad280; case 0x8c0ad28eu: goto L8c0ad28e; case 0x8c0ad31cu: goto L8c0ad31c; case 0x8c0ad36au: goto L8c0ad36a; case 0x8c0ad374u: goto L8c0ad374; case 0x8c0ad38cu: goto L8c0ad38c; default: sh4_bad_jump(c,0x8c0ad106u,tg); return; } }
L8c0ad144:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0ad14e;
  {  goto L8c0ad394; }
L8c0ad14e:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad152:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0ad15c;
  {  goto L8c0ad394; }
L8c0ad15c:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad160:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0ad16a;
  {  goto L8c0ad394; }
L8c0ad16a:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad16e:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0ad178;
  {  goto L8c0ad394; }
L8c0ad178:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad17c:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0ad186;
  {  goto L8c0ad394; }
L8c0ad186:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad18a:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c0ad194;
  {  goto L8c0ad394; }
L8c0ad194:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad198:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(5))==0;
  if(c->t) goto L8c0ad1a2;
  {  goto L8c0ad394; }
L8c0ad1a2:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1a6:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(6))==0;
  if(c->t) goto L8c0ad1b0;
  {  goto L8c0ad394; }
L8c0ad1b0:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1b4:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(4))==0;
  if(c->t) goto L8c0ad1be;
  {  goto L8c0ad394; }
L8c0ad1be:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1c2:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(4))==0;
  if(c->t) goto L8c0ad1cc;
  {  goto L8c0ad394; }
L8c0ad1cc:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1e0:;
  R(13)=LD32(R(14)+12);
  R(3)=0x200000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad1ec;
  {  goto L8c0ad394; }
L8c0ad1ec:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1f0:;
  R(0)=LD32(R(14)+8);
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0ad1fa;
  {  goto L8c0ad394; }
L8c0ad1fa:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad1fe:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(6))==0;
  if(c->t) goto L8c0ad208;
  {  goto L8c0ad394; }
L8c0ad208:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad20c:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(4))==0;
  if(c->t) goto L8c0ad216;
  {  goto L8c0ad394; }
L8c0ad216:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad21a:;
  R(13)=LD32(R(14)+8);
  R(3)=0x400u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad226;
  {  goto L8c0ad394; }
L8c0ad226:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad260:;
  R(13)=LD32(R(14)+8);
  R(3)=0x800u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad26c;
  {  goto L8c0ad394; }
L8c0ad26c:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad270:;
  R(13)=LD32(R(14)+8);
  R(3)=0x1000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad27c;
  {  goto L8c0ad394; }
L8c0ad27c:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad280:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(5))==0;
  if(c->t) goto L8c0ad28a;
  {  goto L8c0ad394; }
L8c0ad28a:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad28e:;
  R(0)=LD32(R(14)+12);
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c0ad2c0;
  { R(13)=0x1u; goto L8c0ad2c2; }
L8c0ad2c0:;
  R(13)=0x0u;
L8c0ad2c2:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ad312;
  R(0)=(int32_t)(int8_t)LD8(R(12)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0ad2de;
  R(2)=0x8c06ff00u;
  R(12)+=0xcu;
  R(5)=R(12);
  R(6)=R(15);
  { c->pr=0x8c0ad2dau; R(4)=R(10); f_8c06ff00(c); }
  { R(12)=R(0); goto L8c0ad2e0; }
L8c0ad2de:;
  ST32(R(15),R(10));
L8c0ad2e0:;
  R(3)=0x220u;
  R(2)=R(15);
  R(6)=LD32(R(15));
  R(2)+=0x10u;
  R(3)+=R(14);
  R(7)=R(15);
  R(1)=LD32(R(3));
  R(7)+=0x10u;
  R(6)=LD32(R(6)+4);
  R(0)=LD32(R(3)+4);
  R(6)=LD32(R(6)+12);
  R(4)=LD32(R(12));
  R(12)+=0xcu;
  R(6)=LD32(R(6));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(3)=0x15u;
  ST32(R(2)+8,R(1));
  ST32(R(15)+28,R(3));
  R(3)=0x8c0729f6u;
  { c->pr=0x8c0ad30eu; R(5)=0x0u; f_8c0729f6(c); }
  {  goto L8c0ad3c6; }
L8c0ad312:;
  R(3)=0x8c072ff8u;
  { c->pr=0x8c0ad318u; R(4)=R(12); f_8c072ff8(c); }
  { R(12)=R(0); goto L8c0ad3c6; }
L8c0ad31c:;
  R(13)=LD32(R(14)+12);
  R(3)=0x10000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad360;
  { R(13)=0x1u; goto L8c0ad362; }
L8c0ad360:;
  R(13)=0x0u;
L8c0ad362:;
  R(2)=LD32(R(14)+12);
  R(3)=0xfffeffffu;
  { R(2)&=R(3); goto L8c0ad388; }
L8c0ad36a:;
  R(13)=LD32(R(14)+8);
  c->t=(R(13)&R(7))==0;
  if(!c->t) goto L8c0ad394;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad374:;
  R(13)=LD32(R(14)+12);
  c->t=(R(13)&R(7))==0;
  if(c->t) goto L8c0ad37e;
  { R(13)=0x1u; goto L8c0ad380; }
L8c0ad37e:;
  R(13)=0x0u;
L8c0ad380:;
  R(2)=LD32(R(14)+12);
  R(3)=0xffffdfffu;
  R(2)&=R(3);
  ST32(R(14)+12,R(2));
L8c0ad388:;
  { ST32(R(14)+12,R(2)); goto L8c0ad3c6; }
L8c0ad38c:;
  R(13)=LD32(R(14)+12);
  R(3)=0x80000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad3c0;
L8c0ad394:;
  { R(13)=0x1u; goto L8c0ad3c6; }
L8c0ad3c0:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad3c4:;
  R(13)=R(11);
L8c0ad3c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+8); if(k) goto L8c0ad3d0; }
  { R(3)=0x1u; goto L8c0ad3d2; }
L8c0ad3d0:;
  R(3)=0x0u;
L8c0ad3d2:;
  ST32(R(2),R(3));
  R(0)=R(12);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad1e0(SH4Ctx *c) {
  R(13)=LD32(R(14)+12);
  R(3)=0x200000u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad1ec;
  {  goto L8c0ad394; }
L8c0ad1ec:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad394:;
  { R(13)=0x1u; goto L8c0ad3c6; }
L8c0ad3c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+8); if(k) goto L8c0ad3d0; }
  { R(3)=0x1u; goto L8c0ad3d2; }
L8c0ad3d0:;
  R(3)=0x0u;
L8c0ad3d2:;
  ST32(R(2),R(3));
  R(0)=R(12);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad260(SH4Ctx *c) {
  R(13)=LD32(R(14)+8);
  R(3)=0x800u;
  c->t=(R(13)&R(3))==0;
  if(c->t) goto L8c0ad26c;
  {  goto L8c0ad394; }
L8c0ad26c:;
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad394:;
  { R(13)=0x1u; goto L8c0ad3c6; }
L8c0ad3c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+8); if(k) goto L8c0ad3d0; }
  { R(3)=0x1u; goto L8c0ad3d2; }
L8c0ad3d0:;
  R(3)=0x0u;
L8c0ad3d2:;
  ST32(R(2),R(3));
  R(0)=R(12);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad2c0(SH4Ctx *c) {
  R(13)=0x0u;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ad312;
  R(0)=(int32_t)(int8_t)LD8(R(12)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0ad2de;
  R(2)=0x8c06ff00u;
  R(12)+=0xcu;
  R(5)=R(12);
  R(6)=R(15);
  { c->pr=0x8c0ad2dau; R(4)=R(10); f_8c06ff00(c); }
  { R(12)=R(0); goto L8c0ad2e0; }
L8c0ad2de:;
  ST32(R(15),R(10));
L8c0ad2e0:;
  R(3)=0x220u;
  R(2)=R(15);
  R(6)=LD32(R(15));
  R(2)+=0x10u;
  R(3)+=R(14);
  R(7)=R(15);
  R(1)=LD32(R(3));
  R(7)+=0x10u;
  R(6)=LD32(R(6)+4);
  R(0)=LD32(R(3)+4);
  R(6)=LD32(R(6)+12);
  R(4)=LD32(R(12));
  R(12)+=0xcu;
  R(6)=LD32(R(6));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(3)=0x15u;
  ST32(R(2)+8,R(1));
  ST32(R(15)+28,R(3));
  R(3)=0x8c0729f6u;
  { c->pr=0x8c0ad30eu; R(5)=0x0u; f_8c0729f6(c); }
  {  goto L8c0ad3c6; }
L8c0ad312:;
  R(3)=0x8c072ff8u;
  { c->pr=0x8c0ad318u; R(4)=R(12); f_8c072ff8(c); }
  { R(12)=R(0); goto L8c0ad3c6; }
L8c0ad3c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+8); if(k) goto L8c0ad3d0; }
  { R(3)=0x1u; goto L8c0ad3d2; }
L8c0ad3d0:;
  R(3)=0x0u;
L8c0ad3d2:;
  ST32(R(2),R(3));
  R(0)=R(12);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad360(SH4Ctx *c) {
  R(13)=0x0u;
  R(2)=LD32(R(14)+12);
  R(3)=0xfffeffffu;
  { R(2)&=R(3); goto L8c0ad388; }
L8c0ad388:;
  { ST32(R(14)+12,R(2)); goto L8c0ad3c6; }
L8c0ad3c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+8); if(k) goto L8c0ad3d0; }
  { R(3)=0x1u; goto L8c0ad3d2; }
L8c0ad3d0:;
  R(3)=0x0u;
L8c0ad3d2:;
  ST32(R(2),R(3));
  R(0)=R(12);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad3c0(SH4Ctx *c) {
  { R(13)=0x0u; goto L8c0ad3c6; }
L8c0ad3c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)+8); if(k) goto L8c0ad3d0; }
  { R(3)=0x1u; goto L8c0ad3d2; }
L8c0ad3d0:;
  R(3)=0x0u;
L8c0ad3d2:;
  ST32(R(2),R(3));
  R(0)=R(12);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad3e6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(6);
  R(7)=0x8c0c76fcu;
  R(6)=R(5);
  R(14)=R(5);
  R(5)=LD32(R(7));
  R(6)+=0xfffffff4u;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)); if(k) goto L8c0ad408; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c0ad40a; }
L8c0ad408:;
  ST32(R(15),R(4));
L8c0ad40a:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==106;
  if(c->t) goto L8c0ad41c;
  c->t=(int32_t)R(0)==77;
  if(c->t) goto L8c0ad426;
  c->t=(int32_t)R(0)==70;
  if(c->t) goto L8c0ad430;
  {  goto L8c0ad44a; }
L8c0ad41c:;
  R(3)=0x8c055446u;
  { c->pr=0x8c0ad422u; R(4)=LD32(R(15)); f_8c055446(c); }
  {  goto L8c0ad42c; }
L8c0ad426:;
  R(3)=0x8c055420u;
  { c->pr=0x8c0ad42cu; R(4)=LD32(R(15)); f_8c055420(c); }
L8c0ad42c:;
  { ST32(R(13),R(0)); goto L8c0ad452; }
L8c0ad430:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c0ad43au; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x8c055200u;
  ST32(R(15)+4,R(0));
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0ad444u; R(4)=LD32(R(15)); f_8c055200(c); }
  ST32(R(13),R(0));
  { R(0)=LD32(R(15)+4); goto L8c0ad454; }
L8c0ad44a:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0ad452u; R(4)=0x2bu; f_8c074080(c); }
L8c0ad452:;
  R(0)=R(14);
L8c0ad454:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad45e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(6);
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)=0x0u; if(k) goto L8c0ad4a0; }
  ST32(R(15),R(5));
  { ST32(R(6),R(7)); goto L8c0ad4a2; }
L8c0ad4a0:;
  ST32(R(15),R(4));
L8c0ad4a2:;
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(13),R(7));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0ad4aeu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(11)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(11)=LD32(R(11)+4);
  R(4)=LD32(R(4)+8);
  R(11)=LD32(R(11)+12);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)=0x1u; if(k) goto L8c0ad4dc; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c0ad4c8u;  f_8c04a8b8(c); }
  R(4)=R(0);
  R(0)=LD32(R(4)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0ad4dc;
  R(0)=0x2a8u;
  R(2)=LD32(R(4)+R(0));
  c->t=R(2)==R(11);
  if(!c->t) goto L8c0ad4f2;
  { ST32(R(13),R(12)); goto L8c0ad4f2; }
L8c0ad4dc:;
  R(4)=LD32(R(11)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ad4f2;
L8c0ad4e2:;
  R(3)=LD32(R(15));
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0ad4ec;
  { ST32(R(13),R(12)); goto L8c0ad4f2; }
L8c0ad4ec:;
  R(4)=LD32(R(4)+20);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ad4e2;
L8c0ad4f2:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad4a0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(13),R(7));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0ad4aeu; R(5)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(11)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(11)=LD32(R(11)+4);
  R(4)=LD32(R(4)+8);
  R(11)=LD32(R(11)+12);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)=0x1u; if(k) goto L8c0ad4dc; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c0ad4c8u;  f_8c04a8b8(c); }
  R(4)=R(0);
  R(0)=LD32(R(4)+12);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0ad4dc;
  R(0)=0x2a8u;
  R(2)=LD32(R(4)+R(0));
  c->t=R(2)==R(11);
  if(!c->t) goto L8c0ad4f2;
  { ST32(R(13),R(12)); goto L8c0ad4f2; }
L8c0ad4dc:;
  R(4)=LD32(R(11)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ad4f2;
L8c0ad4e2:;
  R(3)=LD32(R(15));
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0ad4ec;
  { ST32(R(13),R(12)); goto L8c0ad4f2; }
L8c0ad4ec:;
  R(4)=LD32(R(4)+20);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ad4e2;
L8c0ad4f2:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(7)=0x8c0c76fcu;
  R(11)=R(5);
  R(10)=R(6);
  R(11)+=0xfffffff4u;
  R(6)=LD32(R(7));
  R(14)=R(5);
  R(5)=0x0u;
  R(11)=LD32(R(11));
  c->t=(R(6)&R(6))==0;
  R(13)=R(4);
  R(12)=R(5);
  { uint32_t k=c->t; R(4)=R(5); if(k) goto L8c0ad56e; }
  ST32(R(15),R(6));
  { ST32(R(7),R(5)); goto L8c0ad570; }
L8c0ad56e:;
  ST32(R(15),R(13));
L8c0ad570:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==107;
  { uint32_t k=c->t; ST32(R(10),R(5)); if(k) goto L8c0ad590; }
  c->t=(int32_t)R(0)==108;
  if(c->t) goto L8c0ad590;
  c->t=(int32_t)R(0)==109;
  if(c->t) goto L8c0ad5b0;
  c->t=(int32_t)R(0)==110;
  if(c->t) goto L8c0ad5dc;
  c->t=(int32_t)R(0)==111;
  if(c->t) goto L8c0ad5dc;
  c->t=(int32_t)R(0)==112;
  if(c->t) goto L8c0ad606;
  {  goto L8c0ad63a; }
L8c0ad590:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0ad59cu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0ad5acu; R(4)=R(13); sh4_call(c,tg); }
  {  goto L8c0ad600; }
L8c0ad5b0:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c0ad5bcu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0ad5ccu; R(4)=R(13); sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(2)=0x20u;
  R(14)=R(0);
  R(3)=R(5)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c0ad686;
  { R(5)=R(5)&0xFF; goto L8c0ad636; }
L8c0ad5dc:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ad5e8;
  { R(4)=0x0u; goto L8c0ad5ec; }
L8c0ad5e8:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
L8c0ad5ec:;
  R(2)=0x8c0a1746u;
  { c->pr=0x8c0ad5f2u;  f_8c0a1746(c); }
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  R(12)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c0ad600u; R(4)=R(13); sh4_call(c,tg); }
L8c0ad600:;
  R(14)=R(0);
  { R(4)=LD32(R(15)+4); goto L8c0ad63a; }
L8c0ad606:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ad612;
  { R(4)=0x0u; goto L8c0ad616; }
L8c0ad612:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
L8c0ad616:;
  R(2)=0x8c0a1746u;
  { c->pr=0x8c0ad61cu;  f_8c0a1746(c); }
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  R(12)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c0ad62au; R(4)=R(13); sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(3)=0x20u;
  R(14)=R(0);
  R(5)=R(4)&0xFF;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(c->t) goto L8c0ad686;
L8c0ad636:;
  R(4)=0x1u;
  R(4)=sh4_shad(R(4),R(5));
L8c0ad63a:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==108;
  R(5)=R(12);
  { uint32_t k=c->t; R(5)&=R(4); if(k) goto L8c0ad64a; }
  R(0)=R(11);
  c->t=(int32_t)R(0)==111;
  if(!c->t) goto L8c0ad680;
L8c0ad64a:;
  c->t=(R(5)&R(5))==0;
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c0ad684; }
L8c0ad680:;
  c->t=R(5)==R(4);
  R(0)=c->t;
L8c0ad684:;
  ST32(R(10),R(0));
L8c0ad686:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad680(SH4Ctx *c) {
  c->t=R(5)==R(4);
  R(0)=c->t;
  ST32(R(10),R(0));
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad698(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c0ad6aeu; R(5)=R(3); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(4)=LD32(R(15)+8);
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ad6c8;
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+12);
  R(3)=0x8c04bc7eu;
  { c->pr=0x8c0ad6c2u; R(8)=LD32(R(15)+4); f_8c04bc7e(c); }
  R(0)=R(0)&0xFF;
  { ST32(R(8),R(0)); goto L8c0ad6ce; }
L8c0ad6c8:;
  R(2)=LD32(R(15)+4);
  R(3)=0x0u;
  ST32(R(2),R(3));
L8c0ad6ce:;
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c0ad6d8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(6);
  R(6)=0x8c0c76fcu;
  R(7)=R(5);
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(6));
  R(7)+=0xfffffff4u;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)=LD32(R(7)); if(k) goto L8c0ad6f8; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0ad6fa; }
L8c0ad6f8:;
  ST32(R(15),R(4));
L8c0ad6fa:;
  R(4)=LD32(R(15));
  R(0)=R(7);
  c->t=(int32_t)R(0)==114;
  R(4)=LD32(R(4)+4);
  { uint32_t k=c->t; R(4)=LD32(R(4)+20); if(k) goto L8c0ad71a; }
  c->t=(int32_t)R(0)==115;
  if(c->t) goto L8c0ad724;
  c->t=(int32_t)R(0)==116;
  if(c->t) goto L8c0ad72e;
  c->t=(int32_t)R(0)==117;
  if(c->t) goto L8c0ad738;
  c->t=(int32_t)R(0)==118;
  if(c->t) goto L8c0ad742;
  {  goto L8c0ad74c; }
L8c0ad71a:;
  R(3)=0x8c047ef0u;
  { c->pr=0x8c0ad720u;  f_8c047ef0(c); }
  {  goto L8c0ad748; }
L8c0ad724:;
  R(3)=0x8c047ef8u;
  { c->pr=0x8c0ad72au;  f_8c047ef8(c); }
  {  goto L8c0ad748; }
L8c0ad72e:;
  R(3)=0x8c047f00u;
  { c->pr=0x8c0ad734u;  f_8c047f00(c); }
  {  goto L8c0ad748; }
L8c0ad738:;
  R(3)=0x8c047f10u;
  { c->pr=0x8c0ad73eu;  f_8c047f10(c); }
  {  goto L8c0ad748; }
L8c0ad742:;
  R(3)=0x8c047f18u;
  { c->pr=0x8c0ad748u;  f_8c047f18(c); }
L8c0ad748:;
  R(0)=R(0)&0xFF;
  ST32(R(14),R(0));
L8c0ad74c:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  ST32(R(15)+4,R(6));
  R(14)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)=R(14);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ad7a2;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0ad7a4; }
L8c0ad7a2:;
  ST32(R(15),R(4));
L8c0ad7a4:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c0ad7aeu; R(5)=R(14); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c0ad7be;
  c->t=(int32_t)R(0)==120;
  if(c->t) goto L8c0ad7d2;
  {  goto L8c0ad7f2; }
L8c0ad7be:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  R(1)=LD32(R(2)+4);
  R(2)=LD32(R(15)+12);
  R(0)=LD32(R(1));
  R(1)=LD32(R(0)+20);
  c->t=R(1)==R(2);
  R(0)=c->t;
  { ST32(R(3),R(0)); goto L8c0ad7fa; }
L8c0ad7d2:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(3)=LD32(R(15)+4); if(k) goto L8c0ad7ec; }
  R(1)=LD32(R(4));
  R(2)=LD32(R(15)+12);
  R(0)=LD32(R(1));
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0ad7ec;
  { R(2)=0x1u; goto L8c0ad7ee; }
L8c0ad7ec:;
  R(2)=0x0u;
L8c0ad7ee:;
  { ST32(R(3),R(2)); goto L8c0ad7fa; }
L8c0ad7f2:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c0ad7fau; R(4)=0x2bu; f_8c074080(c); }
L8c0ad7fa:;
  R(0)=R(14);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ad804(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c05cd40u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0ad814u; R(8)=R(6); f_8c05cd40(c); }
  R(0)=R(0)&0xFF;
  ST32(R(8),R(0));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c0ad822(SH4Ctx *c) {
  { R(0)=R(5); return; }
}
void f_8c0ad826(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c05cd4cu;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0ad836u; R(8)=R(6); f_8c05cd4c(c); }
  R(0)=R(0)&0xFF;
  ST32(R(8),R(0));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c0ad844(SH4Ctx *c) {
  R(2)=0x8c12473bu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  ST32(R(6),R(3));
  { R(0)=R(5); return; }
}
void f_8c0ad880(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c019180u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0ad890u; R(8)=R(6); f_8c019180(c); }
  ST32(R(8),R(0));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c0ad89c(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c019186u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0ad8acu; R(8)=R(6); f_8c019186(c); }
  ST32(R(8),R(0));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c0ad8b8(SH4Ctx *c) {
  R(3)=0x8c0bdbf4u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0ad8c6; }
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ad8cc;
L8c0ad8c6:;
  R(3)=0x1u;
  { ST32(R(6),R(3)); goto L8c0ad8d0; }
L8c0ad8cc:;
  R(1)=0x0u;
  ST32(R(6),R(1));
L8c0ad8d0:;
  { R(0)=R(5); return; }
}
void f_8c0ad900(SH4Ctx *c) {
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(4)=LD32(R(4));
  R(1)=0x87u;
  R(0)=R(4);
  R(7)=0x8c2d03d8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ad91a;
  R(1)=0x88u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ad934;
  {  goto L8c0ad984; }
L8c0ad91a:;
  R(0)=0xb74u;
  R(0)=LD32(R(7)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ad92e;
  R(3)=0x8c0bdbf4u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ad92e;
  { R(2)=0x1u; goto L8c0ad930; }
L8c0ad92e:;
  R(2)=0x0u;
L8c0ad930:;
  { ST32(R(6),R(2)); goto L8c0ad984; }
L8c0ad934:;
  R(0)=0xb70u;
  R(3)=LD32(R(7)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ad980;
  R(3)=0x8c0bdbf4u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0ad980;
  { R(1)=0x1u; goto L8c0ad982; }
L8c0ad980:;
  R(1)=0x0u;
L8c0ad982:;
  ST32(R(6),R(1));
L8c0ad984:;
  { R(0)=R(5); return; }
}
void f_8c0ad980(SH4Ctx *c) {
  R(1)=0x0u;
  ST32(R(6),R(1));
  { R(0)=R(5); return; }
}
void f_8c0ad988(SH4Ctx *c) {
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(4)=LD32(R(4));
  R(1)=0x89u;
  R(0)=R(4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ad9a0;
  R(1)=0x8au;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ad9a8;
  {  goto L8c0ad9b0; }
L8c0ad9a0:;
  R(2)=0x8c0bdbf4u;
  R(3)=LD32(R(2));
  { ST32(R(6),R(3)); goto L8c0ad9b0; }
L8c0ad9a8:;
  R(1)=0x8c0c52dcu;
  R(0)=(int32_t)(int8_t)LD8(R(1));
  R(0)=R(0)&0xFF;
  ST32(R(6),R(0));
L8c0ad9b0:;
  { R(0)=R(5); return; }
}
void f_8c0ad9e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffc9cu;
  R(15)+=R(0);
  R(11)=0x0u;
  R(14)=R(5);
  R(0)=0x44u;
  R(5)=R(14);
  R(3)=0xffffffffu;
  ST32(R(15)+28,R(4));
  ST32(R(15)+36,R(6));
  R(6)=0x354u;
  ST32(R(15)+44,R(11));
  ST32(R(15)+R(0),R(11));
  R(0)=0x40u;
  ST32(R(15)+R(0),R(11));
  R(0)=R(11);
  R(6)+=R(15);
  ST32(R(15)+60,R(11));
  ST32(R(15)+32,R(3));
  ST8(R(15)+8,R(0));
  R(0)=R(11);
  ST16(R(15)+4,R(0));
  R(0)=0x1u;
  ST8(R(15)+12,R(0));
  R(0)=0x48u;
  R(3)=LD32(R(14));
  ST8(R(15)+R(0),R(3));
  R(2)=LD32(R(14)+4);
  R(12)=LD32(R(15)+28);
  { uint32_t tg=R(2); c->pr=0x8c0ada2cu; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x354u;
  R(4)=LD32(R(15)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ada60;
  R(2)=LD32(R(4)+4);
  { R(3)=LD32(R(2)+12); goto L8c0ada62; }
L8c0ada60:;
  R(3)=R(11);
L8c0ada62:;
  R(6)=0x354u;
  R(5)=R(14);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0ada70u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x354u;
  R(6)=0x354u;
  R(5)=R(14);
  R(3)=LD32(R(15)+R(0));
  R(6)+=R(15);
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c0ada84u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x354u;
  R(14)=R(0);
  R(2)=0x318u;
  R(3)+=R(15);
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x318u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(15)+R(0),R(3));
  R(3)=R(15);
  R(0)=0x31cu;
  R(3)+=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST32(R(15)+R(0),R(2));
  R(0)=0x320u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x318u;
  fp_ftrc(c,3);
  R(1)=c->fpul;
  ST32(R(15)+60,R(1));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x31cu;
  R(5)=R(14);
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x34u;
  R(0)=0x320u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x30u;
  R(6)=0x354u;
  fp_st(c,3,R(3));
  R(8)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0adae6u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(8)=R(0);
  R(4)=0x354u;
  { c->pr=0x8c0adaf0u; R(4)+=R(15); f_8c071ce0(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0adaf8;
  R(13)=0x8c0bd78cu;
L8c0adaf8:;
  R(3)=0x8c027a3au;
  { c->pr=0x8c0adafeu; R(4)=R(13); f_8c027a3a(c); }
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c0adb7c;
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c0adb7c;
  R(5)=R(13);
  R(5)+=0x2u;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(4)=R(5);
  c->t=(int32_t)R(0)==87;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c0adb28; }
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c0adb28;
  c->t=(int32_t)R(0)==90;
  if(c->t) goto L8c0adb60;
  c->t=(int32_t)R(0)==122;
  if(c->t) goto L8c0adb60;
  {  goto L8c0adb66; }
L8c0adb28:;
  R(2)=0x8c0582dcu;
  { c->pr=0x8c0adb2eu;  f_8c0582dc(c); }
  {  goto L8c0adb66; }
L8c0adb60:;
  R(2)=0x8c05839cu;
  { c->pr=0x8c0adb66u;  f_8c05839c(c); }
L8c0adb66:;
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(3)=0x6u;
  R(2)=LD32(R(15)+36);
  ST32(R(2)+12,R(3));
  R(2)=0x8c072ff8u;
  { c->pr=0x8c0adb78u; R(4)=R(8); f_8c072ff8(c); }
  {  { f_8c0ae314(c); return; } }
L8c0adb7c:;
  R(3)=0x8c09c4d4u;
  R(1)=R(13);
  R(0)=0xb4u;
  { c->pr=0x8c0adb86u; R(0)+=R(15); f_8c09c4d4(c); }
  R(14)=R(13);
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(12)=0xb4u;
  R(13)=0xa0u;
  c->t=(R(2)&R(2))==0;
  R(10)=0x8c06874cu;
  R(12)+=R(15);
  R(9)=0x8c09cfe0u;
  { uint32_t k=!c->t; R(13)+=R(15); if(k) { f_8c0adb9e(c); return; } }
  {  { f_8c0adcb0(c); return; } }
}
void f_8c0ada40(SH4Ctx *c) {
  fp_mov(c,12,9);
  ST8(R(3)+R(0),R(5));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(3)=R(11);
  R(6)=0x354u;
  R(5)=R(14);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0ada70u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x354u;
  R(6)=0x354u;
  R(5)=R(14);
  R(3)=LD32(R(15)+R(0));
  R(6)+=R(15);
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c0ada84u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x354u;
  R(14)=R(0);
  R(2)=0x318u;
  R(3)+=R(15);
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x318u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(15)+R(0),R(3));
  R(3)=R(15);
  R(0)=0x31cu;
  R(3)+=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST32(R(15)+R(0),R(2));
  R(0)=0x320u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x318u;
  fp_ftrc(c,3);
  R(1)=c->fpul;
  ST32(R(15)+60,R(1));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x31cu;
  R(5)=R(14);
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x34u;
  R(0)=0x320u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x30u;
  R(6)=0x354u;
  fp_st(c,3,R(3));
  R(8)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0adae6u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(8)=R(0);
  R(4)=0x354u;
  { c->pr=0x8c0adaf0u; R(4)+=R(15); f_8c071ce0(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0adaf8;
  R(13)=0x8c0bd78cu;
L8c0adaf8:;
  R(3)=0x8c027a3au;
  { c->pr=0x8c0adafeu; R(4)=R(13); f_8c027a3a(c); }
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c0adb7c;
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c0adb7c;
  R(5)=R(13);
  R(5)+=0x2u;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(4)=R(5);
  c->t=(int32_t)R(0)==87;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c0adb28; }
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c0adb28;
  c->t=(int32_t)R(0)==90;
  if(c->t) goto L8c0adb60;
  c->t=(int32_t)R(0)==122;
  if(c->t) goto L8c0adb60;
  {  goto L8c0adb66; }
L8c0adb28:;
  R(2)=0x8c0582dcu;
  { c->pr=0x8c0adb2eu;  f_8c0582dc(c); }
  {  goto L8c0adb66; }
L8c0adb60:;
  R(2)=0x8c05839cu;
  { c->pr=0x8c0adb66u;  f_8c05839c(c); }
L8c0adb66:;
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(3)=0x6u;
  R(2)=LD32(R(15)+36);
  ST32(R(2)+12,R(3));
  R(2)=0x8c072ff8u;
  { c->pr=0x8c0adb78u; R(4)=R(8); f_8c072ff8(c); }
  {  { f_8c0ae314(c); return; } }
L8c0adb7c:;
  R(3)=0x8c09c4d4u;
  R(1)=R(13);
  R(0)=0xb4u;
  { c->pr=0x8c0adb86u; R(0)+=R(15); f_8c09c4d4(c); }
  R(14)=R(13);
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(12)=0xb4u;
  R(13)=0xa0u;
  c->t=(R(2)&R(2))==0;
  R(10)=0x8c06874cu;
  R(12)+=R(15);
  R(9)=0x8c09cfe0u;
  { uint32_t k=!c->t; R(13)+=R(15); if(k) { f_8c0adb9e(c); return; } }
  {  { f_8c0adcb0(c); return; } }
}
void f_8c0ada60(SH4Ctx *c) {
  R(3)=R(11);
  R(6)=0x354u;
  R(5)=R(14);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c0ada70u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x354u;
  R(6)=0x354u;
  R(5)=R(14);
  R(3)=LD32(R(15)+R(0));
  R(6)+=R(15);
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c0ada84u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x354u;
  R(14)=R(0);
  R(2)=0x318u;
  R(3)+=R(15);
  R(0)=LD32(R(3)+4);
  R(2)+=R(15);
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x318u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(15)+R(0),R(3));
  R(3)=R(15);
  R(0)=0x31cu;
  R(3)+=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST32(R(15)+R(0),R(2));
  R(0)=0x320u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x318u;
  fp_ftrc(c,3);
  R(1)=c->fpul;
  ST32(R(15)+60,R(1));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x31cu;
  R(5)=R(14);
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x34u;
  R(0)=0x320u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x30u;
  R(6)=0x354u;
  fp_st(c,3,R(3));
  R(8)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(8); c->pr=0x8c0adae6u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(8)=R(0);
  R(4)=0x354u;
  { c->pr=0x8c0adaf0u; R(4)+=R(15); f_8c071ce0(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0adaf8;
  R(13)=0x8c0bd78cu;
L8c0adaf8:;
  R(3)=0x8c027a3au;
  { c->pr=0x8c0adafeu; R(4)=R(13); f_8c027a3a(c); }
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c0adb7c;
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c0adb7c;
  R(5)=R(13);
  R(5)+=0x2u;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(4)=R(5);
  c->t=(int32_t)R(0)==87;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c0adb28; }
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c0adb28;
  c->t=(int32_t)R(0)==90;
  if(c->t) goto L8c0adb60;
  c->t=(int32_t)R(0)==122;
  if(c->t) goto L8c0adb60;
  {  goto L8c0adb66; }
L8c0adb28:;
  R(2)=0x8c0582dcu;
  { c->pr=0x8c0adb2eu;  f_8c0582dc(c); }
  {  goto L8c0adb66; }
L8c0adb60:;
  R(2)=0x8c05839cu;
  { c->pr=0x8c0adb66u;  f_8c05839c(c); }
L8c0adb66:;
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(3)=0x6u;
  R(2)=LD32(R(15)+36);
  ST32(R(2)+12,R(3));
  R(2)=0x8c072ff8u;
  { c->pr=0x8c0adb78u; R(4)=R(8); f_8c072ff8(c); }
  {  { f_8c0ae314(c); return; } }
L8c0adb7c:;
  R(3)=0x8c09c4d4u;
  R(1)=R(13);
  R(0)=0xb4u;
  { c->pr=0x8c0adb86u; R(0)+=R(15); f_8c09c4d4(c); }
  R(14)=R(13);
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(12)=0xb4u;
  R(13)=0xa0u;
  c->t=(R(2)&R(2))==0;
  R(10)=0x8c06874cu;
  R(12)+=R(15);
  R(9)=0x8c09cfe0u;
  { uint32_t k=!c->t; R(13)+=R(15); if(k) { f_8c0adb9e(c); return; } }
  {  { f_8c0adcb0(c); return; } }
}
void f_8c0adb60(SH4Ctx *c) {
  R(2)=0x8c05839cu;
  { c->pr=0x8c0adb66u;  f_8c05839c(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(3)=0x6u;
  R(2)=LD32(R(15)+36);
  ST32(R(2)+12,R(3));
  R(2)=0x8c072ff8u;
  { c->pr=0x8c0adb78u; R(4)=R(8); f_8c072ff8(c); }
  {  { f_8c0ae314(c); return; } }
}
void f_8c0adb9e(SH4Ctx *c) {
L8c0adb9e:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c0adba8;
  {  goto L8c0adca0; }
L8c0adba8:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  c->t=(int32_t)R(0)==37;
  if(c->t) goto L8c0adbb2;
  {  goto L8c0adca0; }
L8c0adbb2:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(4)=R(14);
  c->t=(int32_t)R(0)==105;
  { uint32_t k=c->t; R(4)+=0x3u; if(k) goto L8c0adc00; }
  c->t=(int32_t)R(0)==73;
  if(c->t) goto L8c0adc00;
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c0adc3a;
  c->t=(int32_t)R(0)==70;
  if(c->t) goto L8c0adc3a;
  {  goto L8c0adca0; }
L8c0adc00:;
  { uint32_t tg=R(9); c->pr=0x8c0adc04u;  sh4_call(c,tg); }
  R(1)=0x8c2dd140u;
  ST32(R(15)+40,R(0));
  R(0)<<=2;
  R(3)=LD32(R(1)+R(0));
  R(2)=0x8c0bd794u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(10); c->pr=0x8c0adc16u; R(4)=R(13); sh4_call(c,tg); }
  R(15)+=0x8u;
  R(3)=0x8c09c4d4u;
  R(1)=R(13);
  { c->pr=0x8c0adc20u; R(0)=R(12); f_8c09c4d4(c); }
  R(2)=0x8c019e40u;
  { c->pr=0x8c0adc26u; R(4)=R(13); f_8c019e40(c); }
  R(12)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0adc70;
L8c0adc2e:;
  R(14)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0adc2e;
  {  goto L8c0adc70; }
L8c0adc3a:;
  { uint32_t tg=R(9); c->pr=0x8c0adc3eu;  sh4_call(c,tg); }
  R(1)=0x8c2dd168u;
  ST32(R(15)+40,R(0));
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(1));
  R(3)=0x8c0bd798u;
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(10); c->pr=0x8c0adc50u; R(4)=R(13); sh4_call(c,tg); }
  R(15)+=0x8u;
  R(2)=0x8c09c4d4u;
  R(1)=R(13);
  { c->pr=0x8c0adc5au; R(0)=R(12); f_8c09c4d4(c); }
  R(3)=0x8c019e40u;
  { c->pr=0x8c0adc60u; R(4)=R(13); f_8c019e40(c); }
  R(12)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0adc70;
L8c0adc68:;
  R(14)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0adc68;
L8c0adc70:;
  { R(14)+=0x1u; goto L8c0adca6; }
L8c0adca0:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  ST8(R(12),R(3));
  R(12)+=0x1u;
L8c0adca6:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) { f_8c0adcb0(c); return; }
  {  goto L8c0adb9e; }
}
void f_8c0adc00(SH4Ctx *c) {
  { uint32_t tg=R(9); c->pr=0x8c0adc04u;  sh4_call(c,tg); }
  R(1)=0x8c2dd140u;
  ST32(R(15)+40,R(0));
  R(0)<<=2;
  R(3)=LD32(R(1)+R(0));
  R(2)=0x8c0bd794u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(10); c->pr=0x8c0adc16u; R(4)=R(13); sh4_call(c,tg); }
  R(15)+=0x8u;
  R(3)=0x8c09c4d4u;
  R(1)=R(13);
  { c->pr=0x8c0adc20u; R(0)=R(12); f_8c09c4d4(c); }
  R(2)=0x8c019e40u;
  { c->pr=0x8c0adc26u; R(4)=R(13); f_8c019e40(c); }
  R(12)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0adc70;
L8c0adc2e:;
  R(14)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0adc2e;
  {  goto L8c0adc70; }
L8c0adc70:;
  { R(14)+=0x1u; goto L8c0adca6; }
L8c0adca6:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) { f_8c0adcb0(c); return; }
  {  { f_8c0adb9e(c); return; } }
}
void f_8c0adca0(SH4Ctx *c) {
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  ST8(R(12),R(3));
  R(12)+=0x1u;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) { f_8c0adcb0(c); return; }
  {  { f_8c0adb9e(c); return; } }
}
void f_8c0adcb0(SH4Ctx *c) {
  R(9)=0xb4u;
  R(0)=0x28u;
  R(6)=0x354u;
  R(5)=R(8);
  ST8(R(12),R(11));
  R(9)+=R(15);
  R(3)=LD32(R(8));
  R(6)+=R(15);
  ST8(R(15)+R(0),R(3));
  R(10)=LD32(R(8)+4);
  { uint32_t tg=R(10); c->pr=0x8c0adcc8u; R(4)=LD32(R(15)+28); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0x354u;
  R(11)=0x8c2d15b8u;
  R(3)=LD32(R(15)+R(0));
  ST32(R(15),R(3));
  R(3)=LD32(R(15)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0add40;
  R(3)=0x8c0581b0u;
  { c->pr=0x8c0adcdeu; R(4)=LD32(R(15)+20); f_8c0581b0(c); }
  R(4)=R(0)&0xFF;
  ST8(R(15)+8,R(0));
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(11);
  R(0)=(int32_t)(int16_t)LD16(R(4)+16);
  ST16(R(15)+4,R(0));
  R(0)=LD32(R(4));
  ST8(R(15)+12,R(0));
  R(3)=LD32(R(4)+12);
  ST32(R(15)+44,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c019e40u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0add02u; R(4)=R(9); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0add40;
  R(3)=LD32(R(15)+44);
  R(1)=LD32(R(15)+36);
  ST32(R(1),R(3));
  {  goto L8c0ae30c; }
L8c0add40:;
  R(2)=LD32(R(15)+20);
  R(12)=0x8c123b08u;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0add4c;
  {  goto L8c0ae080; }
L8c0add4c:;
  R(0)=0x30cu;
  c->fr[4]=0x3F800000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x310u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x314u;
  fp_st(c,4,R(0)+R(15));
  R(3)=LD32(R(15)+16);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0add64;
  {  goto L8c0ae2c6; }
L8c0add64:;
  R(3)=0x8c044260u;
  { c->pr=0x8c0add6au; R(4)=LD32(R(15)+16); f_8c044260(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0add74;
  {  goto L8c0ae2c6; }
L8c0add74:;
  R(4)=LD32(R(15)+16);
  R(4)=LD32(R(4)+4);
  R(3)=LD32(R(4)+4);
  R(4)=R(15);
  ST32(R(15)+16,R(3));
  R(3)=0x8c014ea0u;
  { c->pr=0x8c0add84u; R(4)+=0x4cu; f_8c014ea0(c); }
  R(5)=0x30cu;
  R(4)=R(15);
  R(2)=0x8c01638au;
  R(5)+=R(15);
  { c->pr=0x8c0add90u; R(4)+=0x4cu; f_8c01638a(c); }
  R(3)=R(15);
  R(3)+=0x4cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(3)=0x8c2d03b0u;
  R(2)=0x8c044290u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15)+32);
  { c->pr=0x8c0adda4u; R(4)=LD32(R(15)+20); f_8c044290(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0addb0; }
  {  goto L8c0ae2c6; }
L8c0addb0:;
  R(2)=0x8c0c76b8u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=LD32(R(15)); if(k) goto L8c0addc2; }
  R(4)=LD32(R(13)+48);
  R(2)=0x2u;
  R(4)|=R(2);
  ST32(R(13)+48,R(4));
L8c0addc2:;
  R(4)=LD32(R(13)+4);
  R(5)=0x1u;
  R(0)=0x9eu;
  R(3)=0x8c058200u;
  R(4)=LD32(R(4));
  { c->pr=0x8c0addd0u; ST8(R(4)+R(0),R(5)); f_8c058200(c); }
  ST8(R(15)+8,R(0));
  R(0)=0x6cu;
  R(5)=LD32(R(12)+R(0));
  c->t=(R(13)&R(13))==0;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=0x8c2d1540u;
  R(0)<<=2;
  R(4)=R(0);
  R(4)+=R(11);
  ST32(R(4)+8,R(5));
  R(2)=LD32(R(15));
  ST32(R(4)+4,R(2));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(3)+=R(0);
  { uint32_t k=c->t; ST32(R(3),R(13)); if(k) goto L8c0ade02; }
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ade60;
L8c0ade02:;
  { R(2)=0x0u; goto L8c0ade62; }
L8c0ade60:;
  R(2)=LD32(R(13)+4);
L8c0ade62:;
  R(0)=0x354u;
  R(3)=0xbu;
  R(7)=0x354u;
  R(5)=0x0u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x360u;
  R(7)+=R(15);
  ST32(R(15)+R(0),R(3));
  R(0)=0x48u;
  R(6)=LD32(R(15)+28);
  R(3)=0x8c0729f6u;
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ade82u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=0x8c0c76b8u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ade9a;
  R(5)=0x318u;
  R(0)=0x8c0adf10u;
  R(2)=0x8c0268f0u;
  fp_ld(c,4,R(0));
  R(5)+=R(15);
  { c->pr=0x8c0ade98u; R(4)=R(13); f_8c0268f0(c); }
  R(12)=R(0);
L8c0ade9a:;
  R(3)=0x8c027d80u;
  R(5)=R(9);
  { c->pr=0x8c0adea2u; R(4)=R(13); f_8c027d80(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0adf40;
  R(0)=0xffffffffu;
  R(3)=R(15);
  ST16(R(15)+4,R(0));
  R(5)=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(4)=0x334u;
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0adeceu; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(3)=0x8c019e40u;
  ST32(R(15)+44,R(0));
  { c->pr=0x8c0aded8u; R(4)=R(9); f_8c019e40(c); }
  R(2)=0x8c0c76b8u;
  ST16(R(15)+4,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0adf80;
  R(3)=0x8c0269a0u;
  R(5)=R(9);
  R(7)=(uint32_t)(int32_t)(int16_t)R(0);
  R(6)=0x0u;
  { c->pr=0x8c0adeeeu; R(4)=R(12); f_8c0269a0(c); }
  {  goto L8c0adf80; }
L8c0adf40:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(15);
  R(4)=0x334u;
  R(5)=R(13);
  ST32(R(15)+16,R(0));
  R(7)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0adf66u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=R(0); if(k) goto L8c0adf80; }
  R(3)=0x8c0269a0u;
  R(5)=R(9);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0adf80u; R(4)=R(12); f_8c0269a0(c); }
L8c0adf80:;
  R(2)=LD32(R(15));
  c->t=R(2)==R(14);
  if(c->t) goto L8c0adfa6;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0adf94;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  { ST32(R(15),R(2)); goto L8c0adfa6; }
L8c0adf94:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0adfa6:;
  R(5)=0x324u;
  R(3)=0x8c05730cu;
  R(5)+=R(15);
  { c->pr=0x8c0adfb0u; R(4)=R(9); f_8c05730c(c); }
  R(3)=0x8c0c76b8u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ae000;
  R(2)=0x8c0646c8u;
  { c->pr=0x8c0adfbeu; R(4)=R(13); f_8c0646c8(c); }
  {  goto L8c0ae2c6; }
L8c0ae000:;
  R(2)=LD32(R(13)+36);
  R(14)=LD32(R(13)+4);
  R(14)=LD32(R(14)+8);
  ST32(R(15)+16,R(2));
  R(2)=0x8c0646f4u;
  { c->pr=0x8c0ae00eu; R(4)=R(13); f_8c0646f4(c); }
  R(0)=0x38u;
  R(5)=0x30cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30cu;
  R(5)+=R(15);
  R(3)=0x8c01638au;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x310u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x314u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c0ae030u; R(4)=LD32(R(15)+16); f_8c01638a(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ae046;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0ae03au; R(4)=R(14); f_8c04a8b8(c); }
  R(6)=0x30cu;
  R(4)=R(0);
  R(2)=0x8c0900acu;
  R(6)+=R(15);
  { c->pr=0x8c0ae046u; R(5)=R(13); f_8c0900ac(c); }
L8c0ae046:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c0ae04cu; R(4)=R(13); f_8c064b7e(c); }
  {  goto L8c0ae2c6; }
L8c0ae080:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)=R(0);
  R(0)=0x6cu;
  R(5)+=R(11);
  R(2)=LD32(R(12)+R(0));
  R(4)=LD32(R(5)+8);
  R(2)-=R(4);
  ST32(R(15)+16,R(2));
  R(2)=0x8c0c76b8u;
  R(0)=LD32(R(5));
  ST8(R(15)+12,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae0ae;
  R(3)=0x8c026bb6u;
  { c->pr=0x8c0ae0acu; R(4)=LD32(R(15)+20); f_8c026bb6(c); }
  R(8)=R(0);
L8c0ae0ae:;
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(15));
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0ae0ba;
  {  goto L8c0ae240; }
L8c0ae0ba:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(13)=R(0);
  R(13)+=R(11);
  R(13)=LD32(R(13)+4);
  R(3)=R(13);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(13)); if(k) goto L8c0ae180; }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c019e40u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0ae0deu; R(4)=R(9); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0ae1c0;
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0ae1c0;
L8c0ae0ec:;
  R(3)=R(15);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(14)=R(0);
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(2)=LD32(R(15)+44);
  R(4)=0x334u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  R(3)=0x8c057b20u;
  { c->pr=0x8c0ae112u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae12c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=R(14);
  R(7)=R(0);
  { c->pr=0x8c0ae12cu; R(4)=R(8); f_8c0269a0(c); }
L8c0ae12c:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c019e40u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0ae136u; R(4)=R(9); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0ae1c0;
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ae0ec;
  {  goto L8c0ae1c0; }
L8c0ae180:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(15);
  R(4)=0x334u;
  R(7)=0x0u;
  ST32(R(15)+16,R(0));
  R(6)=R(9);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c0ae1a6u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae1c0;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=LD32(R(15)+16);
  R(7)=R(0);
  { c->pr=0x8c0ae1c0u; R(4)=R(8); f_8c0269a0(c); }
L8c0ae1c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6cu;
  R(2)+=R(12);
  R(0)=R(0)&0xFF;
  R(2)=LD32(R(2));
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+8,R(2));
  R(3)=LD32(R(15));
  c->t=R(3)==R(13);
  if(c->t) goto L8c0ae1fc;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0ae1ea;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  { ST32(R(15),R(2)); goto L8c0ae1fc; }
L8c0ae1ea:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0ae1fc:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6cu;
  R(2)+=R(12);
  R(0)=R(0)&0xFF;
  R(2)=LD32(R(2));
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  { ST32(R(0)+8,R(2)); goto L8c0ae2c6; }
L8c0ae240:;
  R(1)=LD32(R(15)+44);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ae2c6;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(7)=0x0u;
  R(4)=0x334u;
  R(6)=R(9);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=R(15);
  R(0)<<=2;
  R(14)=R(0);
  R(14)+=R(11);
  R(14)=LD32(R(14)+4);
  R(3)+=0x18u;
  ST32(R(15)+24,R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST32(R(15)+16,R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c0ae282u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae29c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=LD32(R(15)+16);
  R(7)=R(0);
  { c->pr=0x8c0ae29cu; R(4)=R(8); f_8c0269a0(c); }
L8c0ae29c:;
  R(2)=LD32(R(15)+24);
  c->t=R(2)==R(14);
  if(c->t) goto L8c0ae2c6;
  R(1)=LD32(R(15)+24);
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0ae2b0;
  R(2)=LD32(R(15)+24);
  R(2)=0u-R(2);
  { ST32(R(15)+24,R(2)); goto L8c0ae2c2; }
L8c0ae2b0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15)+24);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0ae2c2:;
  R(3)=LD32(R(15)+24);
  ST32(R(15),R(3));
L8c0ae2c6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(7)=0x354u;
  R(5)=0x0u;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)+=R(11);
  R(0)=R(0)&0xFF;
  ST32(R(4),R(0));
  R(7)+=R(15);
  R(3)=LD32(R(15)+44);
  ST32(R(4)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+16,R(0));
  R(0)=0x354u;
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  R(0)=0x360u;
  R(3)=0x8c0729f6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x28u;
  R(6)=LD32(R(15)+28);
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ae306u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
L8c0ae30c:;
  R(2)=LD32(R(15)+36);
  R(3)=0x6u;
  R(0)=R(10);
  ST32(R(2)+12,R(3));
  { f_8c0ae314(c); return; }
}
void f_8c0add40(SH4Ctx *c) {
  R(2)=LD32(R(15)+20);
  R(12)=0x8c123b08u;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0add4c;
  {  goto L8c0ae080; }
L8c0add4c:;
  R(0)=0x30cu;
  c->fr[4]=0x3F800000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x310u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x314u;
  fp_st(c,4,R(0)+R(15));
  R(3)=LD32(R(15)+16);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0add64;
  {  goto L8c0ae2c6; }
L8c0add64:;
  R(3)=0x8c044260u;
  { c->pr=0x8c0add6au; R(4)=LD32(R(15)+16); f_8c044260(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0add74;
  {  goto L8c0ae2c6; }
L8c0add74:;
  R(4)=LD32(R(15)+16);
  R(4)=LD32(R(4)+4);
  R(3)=LD32(R(4)+4);
  R(4)=R(15);
  ST32(R(15)+16,R(3));
  R(3)=0x8c014ea0u;
  { c->pr=0x8c0add84u; R(4)+=0x4cu; f_8c014ea0(c); }
  R(5)=0x30cu;
  R(4)=R(15);
  R(2)=0x8c01638au;
  R(5)+=R(15);
  { c->pr=0x8c0add90u; R(4)+=0x4cu; f_8c01638a(c); }
  R(3)=R(15);
  R(3)+=0x4cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(3)=0x8c2d03b0u;
  R(2)=0x8c044290u;
  R(5)=LD32(R(3));
  R(6)=LD32(R(15)+32);
  { c->pr=0x8c0adda4u; R(4)=LD32(R(15)+20); f_8c044290(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0addb0; }
  {  goto L8c0ae2c6; }
L8c0addb0:;
  R(2)=0x8c0c76b8u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=LD32(R(15)); if(k) goto L8c0addc2; }
  R(4)=LD32(R(13)+48);
  R(2)=0x2u;
  R(4)|=R(2);
  ST32(R(13)+48,R(4));
L8c0addc2:;
  R(4)=LD32(R(13)+4);
  R(5)=0x1u;
  R(0)=0x9eu;
  R(3)=0x8c058200u;
  R(4)=LD32(R(4));
  { c->pr=0x8c0addd0u; ST8(R(4)+R(0),R(5)); f_8c058200(c); }
  ST8(R(15)+8,R(0));
  R(0)=0x6cu;
  R(5)=LD32(R(12)+R(0));
  c->t=(R(13)&R(13))==0;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=0x8c2d1540u;
  R(0)<<=2;
  R(4)=R(0);
  R(4)+=R(11);
  ST32(R(4)+8,R(5));
  R(2)=LD32(R(15));
  ST32(R(4)+4,R(2));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(3)+=R(0);
  { uint32_t k=c->t; ST32(R(3),R(13)); if(k) goto L8c0ade02; }
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ade60;
L8c0ade02:;
  { R(2)=0x0u; goto L8c0ade62; }
L8c0ade60:;
  R(2)=LD32(R(13)+4);
L8c0ade62:;
  R(0)=0x354u;
  R(3)=0xbu;
  R(7)=0x354u;
  R(5)=0x0u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x360u;
  R(7)+=R(15);
  ST32(R(15)+R(0),R(3));
  R(0)=0x48u;
  R(6)=LD32(R(15)+28);
  R(3)=0x8c0729f6u;
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ade82u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=0x8c0c76b8u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ade9a;
  R(5)=0x318u;
  R(0)=0x8c0adf10u;
  R(2)=0x8c0268f0u;
  fp_ld(c,4,R(0));
  R(5)+=R(15);
  { c->pr=0x8c0ade98u; R(4)=R(13); f_8c0268f0(c); }
  R(12)=R(0);
L8c0ade9a:;
  R(3)=0x8c027d80u;
  R(5)=R(9);
  { c->pr=0x8c0adea2u; R(4)=R(13); f_8c027d80(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0adf40;
  R(0)=0xffffffffu;
  R(3)=R(15);
  ST16(R(15)+4,R(0));
  R(5)=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(4)=0x334u;
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0adeceu; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(3)=0x8c019e40u;
  ST32(R(15)+44,R(0));
  { c->pr=0x8c0aded8u; R(4)=R(9); f_8c019e40(c); }
  R(2)=0x8c0c76b8u;
  ST16(R(15)+4,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0adf80;
  R(3)=0x8c0269a0u;
  R(5)=R(9);
  R(7)=(uint32_t)(int32_t)(int16_t)R(0);
  R(6)=0x0u;
  { c->pr=0x8c0adeeeu; R(4)=R(12); f_8c0269a0(c); }
  {  goto L8c0adf80; }
L8c0adf40:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(15);
  R(4)=0x334u;
  R(5)=R(13);
  ST32(R(15)+16,R(0));
  R(7)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0adf66u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=R(0); if(k) goto L8c0adf80; }
  R(3)=0x8c0269a0u;
  R(5)=R(9);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c0adf80u; R(4)=R(12); f_8c0269a0(c); }
L8c0adf80:;
  R(2)=LD32(R(15));
  c->t=R(2)==R(14);
  if(c->t) goto L8c0adfa6;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0adf94;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  { ST32(R(15),R(2)); goto L8c0adfa6; }
L8c0adf94:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0adfa6:;
  R(5)=0x324u;
  R(3)=0x8c05730cu;
  R(5)+=R(15);
  { c->pr=0x8c0adfb0u; R(4)=R(9); f_8c05730c(c); }
  R(3)=0x8c0c76b8u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ae000;
  R(2)=0x8c0646c8u;
  { c->pr=0x8c0adfbeu; R(4)=R(13); f_8c0646c8(c); }
  {  goto L8c0ae2c6; }
L8c0ae000:;
  R(2)=LD32(R(13)+36);
  R(14)=LD32(R(13)+4);
  R(14)=LD32(R(14)+8);
  ST32(R(15)+16,R(2));
  R(2)=0x8c0646f4u;
  { c->pr=0x8c0ae00eu; R(4)=R(13); f_8c0646f4(c); }
  R(0)=0x38u;
  R(5)=0x30cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30cu;
  R(5)+=R(15);
  R(3)=0x8c01638au;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x310u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x314u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c0ae030u; R(4)=LD32(R(15)+16); f_8c01638a(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ae046;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c0ae03au; R(4)=R(14); f_8c04a8b8(c); }
  R(6)=0x30cu;
  R(4)=R(0);
  R(2)=0x8c0900acu;
  R(6)+=R(15);
  { c->pr=0x8c0ae046u; R(5)=R(13); f_8c0900ac(c); }
L8c0ae046:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c0ae04cu; R(4)=R(13); f_8c064b7e(c); }
  {  goto L8c0ae2c6; }
L8c0ae080:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(5)=R(0);
  R(0)=0x6cu;
  R(5)+=R(11);
  R(2)=LD32(R(12)+R(0));
  R(4)=LD32(R(5)+8);
  R(2)-=R(4);
  ST32(R(15)+16,R(2));
  R(2)=0x8c0c76b8u;
  R(0)=LD32(R(5));
  ST8(R(15)+12,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae0ae;
  R(3)=0x8c026bb6u;
  { c->pr=0x8c0ae0acu; R(4)=LD32(R(15)+20); f_8c026bb6(c); }
  R(8)=R(0);
L8c0ae0ae:;
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(15));
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0ae0ba;
  {  goto L8c0ae240; }
L8c0ae0ba:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(13)=R(0);
  R(13)+=R(11);
  R(13)=LD32(R(13)+4);
  R(3)=R(13);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(13)); if(k) goto L8c0ae180; }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c019e40u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0ae0deu; R(4)=R(9); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0ae1c0;
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0ae1c0;
L8c0ae0ec:;
  R(3)=R(15);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(14)=R(0);
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(9);
  R(2)=LD32(R(15)+44);
  R(4)=0x334u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  R(3)=0x8c057b20u;
  { c->pr=0x8c0ae112u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae12c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=R(14);
  R(7)=R(0);
  { c->pr=0x8c0ae12cu; R(4)=R(8); f_8c0269a0(c); }
L8c0ae12c:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8c019e40u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0ae136u; R(4)=R(9); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(c->t) goto L8c0ae1c0;
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ae0ec;
  {  goto L8c0ae1c0; }
L8c0ae180:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(15);
  R(4)=0x334u;
  R(7)=0x0u;
  ST32(R(15)+16,R(0));
  R(6)=R(9);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c0ae1a6u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae1c0;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=LD32(R(15)+16);
  R(7)=R(0);
  { c->pr=0x8c0ae1c0u; R(4)=R(8); f_8c0269a0(c); }
L8c0ae1c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6cu;
  R(2)+=R(12);
  R(0)=R(0)&0xFF;
  R(2)=LD32(R(2));
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+8,R(2));
  R(3)=LD32(R(15));
  c->t=R(3)==R(13);
  if(c->t) goto L8c0ae1fc;
  R(1)=LD32(R(15));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0ae1ea;
  R(2)=LD32(R(15));
  R(2)=0u-R(2);
  { ST32(R(15),R(2)); goto L8c0ae1fc; }
L8c0ae1ea:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0ae1fc:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6cu;
  R(2)+=R(12);
  R(0)=R(0)&0xFF;
  R(2)=LD32(R(2));
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  { ST32(R(0)+8,R(2)); goto L8c0ae2c6; }
L8c0ae240:;
  R(1)=LD32(R(15)+44);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ae2c6;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(7)=0x0u;
  R(4)=0x334u;
  R(6)=R(9);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=R(15);
  R(0)<<=2;
  R(14)=R(0);
  R(14)+=R(11);
  R(14)=LD32(R(14)+4);
  R(3)+=0x18u;
  ST32(R(15)+24,R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST32(R(15)+16,R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+44);
  R(3)=0x8c057b20u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c0ae282u; R(4)+=R(15); f_8c057b20(c); }
  R(15)+=0x10u;
  R(2)=0x8c0c76b8u;
  ST32(R(15)+44,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ae29c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(9);
  R(3)=0x8c0269a0u;
  R(6)=LD32(R(15)+16);
  R(7)=R(0);
  { c->pr=0x8c0ae29cu; R(4)=R(8); f_8c0269a0(c); }
L8c0ae29c:;
  R(2)=LD32(R(15)+24);
  c->t=R(2)==R(14);
  if(c->t) goto L8c0ae2c6;
  R(1)=LD32(R(15)+24);
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0ae2b0;
  R(2)=LD32(R(15)+24);
  R(2)=0u-R(2);
  { ST32(R(15)+24,R(2)); goto L8c0ae2c2; }
L8c0ae2b0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=LD32(R(15)+24);
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)+=R(11);
  ST32(R(0)+4,R(2));
L8c0ae2c2:;
  R(3)=LD32(R(15)+24);
  ST32(R(15),R(3));
L8c0ae2c6:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(7)=0x354u;
  R(5)=0x0u;
  R(0)=R(0)&0xFF;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(4)+=R(11);
  R(0)=R(0)&0xFF;
  ST32(R(4),R(0));
  R(7)+=R(15);
  R(3)=LD32(R(15)+44);
  ST32(R(4)+12,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+16,R(0));
  R(0)=0x354u;
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  R(0)=0x360u;
  R(3)=0x8c0729f6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x28u;
  R(6)=LD32(R(15)+28);
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0ae306u; R(4)=(int32_t)(int8_t)LD8(R(15)+R(0)); f_8c0729f6(c); }
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+36);
  R(3)=0x6u;
  R(0)=R(10);
  ST32(R(2)+12,R(3));
  { f_8c0ae314(c); return; }
}
