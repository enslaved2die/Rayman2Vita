#include "recomp_decls.h"
void f_8c057020(SH4Ctx *c) {
  R(2)=0x0u;
  R(1)=R(2);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(2)); if(k) goto L8c05710e; }
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  R(8)=LD32(R(15)+4);
  fp_arith(c,0,2,3);
  fp_ld(c,14,R(0)+R(14));
  R(3)=0x8c05e9c0u;
  R(8)=LD32(R(8)+32);
  fp_mov(c,4,14);
  fp_mov(c,12,2);
  fp_mov(c,5,14);
  { c->pr=0x8c057046u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_arith(c,0,12,0);
  R(0)=0x4cu;
  R(3)=0x8c05e9c0u;
  fp_st(c,12,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,14,R(0)+R(14));
  fp_mov(c,4,14);
  fp_mov(c,5,14);
  { c->pr=0x8c05705eu; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x54u;
  R(3)=0x8c01638au;
  R(5)+=0x4cu;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057072u; R(4)=R(8); f_8c01638a(c); }
  R(0)=0x8c0570a8u;
  c->fr[6]=0x3F800000u;
  fp_ld(c,7,R(0));
  R(0)=0x1cu;
  fp_ld(c,5,R(0)+R(14));
  fp_unary(c,0,6);
  fp_mov(c,4,5);
  fp_arith(c,0,4,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0570c0;
  { fp_mov(c,3,4); goto L8c0570ca; }
L8c0570c0:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c0570ca:;
  fp_cmp(c,1,3,7);
  if(!c->t) goto L8c05710e;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x44u;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x3cu;
  R(5)+=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x34u;
  R(6)+=0x40u;
  { uint32_t tg=R(3); c->pr=0x8c05710eu; R(4)=R(8); sh4_call(c,tg); }
L8c05710e:;
  R(12)+=0x1u;
  { f_8c057110(c); return; }
}
void f_8c0570c0(SH4Ctx *c) {
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
  fp_cmp(c,1,3,7);
  if(!c->t) goto L8c05710e;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x44u;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x3cu;
  R(5)+=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x34u;
  R(6)+=0x40u;
  { uint32_t tg=R(3); c->pr=0x8c05710eu; R(4)=R(8); sh4_call(c,tg); }
L8c05710e:;
  R(12)+=0x1u;
  { f_8c057110(c); return; }
}
void f_8c057110(SH4Ctx *c) {
  R(0)=0x30u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x30u;
  R(2)+=0xffffffffu;
  ST16(R(15)+R(0),R(2));
  R(2)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(2);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05712c;
  R(1)=LD32(R(15)+16);
  c->t=R(13)>=R(1);
  if(c->t) goto L8c05712c;
  {  { f_8c056f22(c); return; } }
L8c05712c:;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c057150;
  R(0)=0x8cu;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(int32_t)R(3)>=0;
  if(!c->t) goto L8c057150;
  R(3)=LD32(R(15)+28);
  R(0)=R(13);
  R(0)-=R(3);
  ST16(R(10)+2,R(0));
  R(0)=0x4u;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(10));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(10));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(10));
L8c057150:;
  R(3)=LD32(R(15)+16);
  c->t=R(13)>=R(3);
  if(c->t) goto L8c0571b6;
  R(0)=(int32_t)(int8_t)LD8(R(13));
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c0571a0;
L8c05715c:;
  R(2)=R(15);
  R(2)+=0x14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=R(11);
  R(7)=R(15);
  R(6)=R(13);
  R(7)+=0x24u;
  { c->pr=0x8c05716eu; R(4)=R(14); f_8c0569e2(c); }
  R(15)+=0x4u;
  R(13)=R(0);
  R(0)=0x14u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05715c;
  {  goto L8c0571b6; }
L8c0571a0:;
  R(1)=0x18u;
  R(1)+=R(14);
  R(0)=0x8u;
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,15,R(0)+R(14));
L8c0571b6:;
  R(0)=0x8cu;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x8cu;
  R(3)+=0xffffffffu;
  ST16(R(15)+R(0),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(0)+=0x1u;
  ST16(R(15)+12,R(0));
  { f_8c0571c6(c); return; }
}
void f_8c0571a0(SH4Ctx *c) {
  R(1)=0x18u;
  R(1)+=R(14);
  R(0)=0x8u;
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,15,R(0)+R(14));
  R(0)=0x8cu;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x8cu;
  R(3)+=0xffffffffu;
  ST16(R(15)+R(0),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(0)+=0x1u;
  ST16(R(15)+12,R(0));
  { f_8c0571c6(c); return; }
}
void f_8c0571c6(SH4Ctx *c) {
  R(3)=LD32(R(15)+16);
  c->t=R(13)>=R(3);
  if(c->t) goto L8c0571d6;
  R(1)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0571d6;
  {  { f_8c056e90(c); return; } }
L8c0571d6:;
  R(0)=0x2cu;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  if(c->t) goto L8c0571f4;
L8c0571e0:;
  R(5)=LD32(R(14)+40);
  R(7)=0x0u;
  R(3)=0x8c08358au;
  R(6)=R(12);
  { c->pr=0x8c0571ecu; R(4)=LD32(R(15)+8); f_8c08358a(c); }
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=(int32_t)R(13);
  if(!c->t) goto L8c0571e0;
L8c0571f4:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(15)+=0x58u;
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
void f_8c057240(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c057340u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(4)=0x1u;
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,15,R(0));
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(0)=(uint32_t)v;}
  R(11)=0x8c09cfe0u;
  c->t=(int32_t)R(0)==67;
  { uint32_t k=c->t; R(12)=R(4); if(k) goto L8c057290; }
  c->t=(int32_t)R(0)==99;
  if(c->t) goto L8c057290;
  c->t=(int32_t)R(0)==72;
  if(c->t) goto L8c057298;
  c->t=(int32_t)R(0)==104;
  if(c->t) goto L8c057298;
  c->t=(int32_t)R(0)==76;
  if(c->t) goto L8c0572a6;
  c->t=(int32_t)R(0)==108;
  if(c->t) goto L8c0572a6;
  c->t=(int32_t)R(0)==87;
  if(c->t) goto L8c0572c4;
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c0572c4;
  c->t=(int32_t)R(0)==90;
  if(c->t) goto L8c0572d2;
  c->t=(int32_t)R(0)==122;
  if(c->t) goto L8c0572d2;
  c->t=(int32_t)R(0)==111;
  if(c->t) goto L8c0572e2;
  c->t=(int32_t)R(0)==79;
  if(c->t) goto L8c0572e2;
  {  goto L8c0572ea; }
L8c057290:;
  R(0)=0x2cu;
  R(3)=0x63u;
  { ST8(R(13)+R(0),R(3)); goto L8c0572ea; }
L8c057298:;
  { uint32_t tg=R(11); c->pr=0x8c05729cu; R(4)=R(14); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,3,3,15);
  { R(0)=0x18u; goto L8c0572de; }
L8c0572a6:;
  c->fr[3]=0x00000000u;
  R(0)=0xcu;
  R(1)=0x18u;
  ST8(R(6),R(4));
  R(1)+=R(13);
  ST8(R(7),R(4));
  fp_st(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,1,2,3);
  { fp_st(c,2,R(0)+R(13)); goto L8c0572ea; }
L8c0572c4:;
  { uint32_t tg=R(11); c->pr=0x8c0572c8u; R(4)=R(14); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,3,3,15);
  { R(0)=0x14u; goto L8c0572de; }
L8c0572d2:;
  { uint32_t tg=R(11); c->pr=0x8c0572d6u; R(4)=R(14); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x1cu;
  fp_float(c,3);
  fp_arith(c,3,3,15);
L8c0572de:;
  { fp_st(c,3,R(0)+R(13)); goto L8c0572ea; }
L8c0572e2:;
  { uint32_t tg=R(11); c->pr=0x8c0572e6u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0c6484u;
  ST32(R(2),R(0));
L8c0572ea:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0572fa;
L8c0572f0:;
  R(14)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(int32_t)R(0)==58;
  { uint32_t k=!c->t; R(12)+=0x1u; if(k) goto L8c0572f0; }
L8c0572fa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  R(0)+=0x1u;
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05730c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(11)=0x0u;
  c->fr[14]=0x00000000u;
  R(0)=R(11);
  fp_mov(c,15,14);
  ST8(R(15),R(11));
  R(12)=R(4);
  R(13)=R(5);
  R(14)=R(11);
  { ST8(R(15)+4,R(0)); goto L8c057440; }
L8c057360:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c05738a;
  R(12)+=0x1u;
  R(7)=R(15);
  R(5)=R(12);
  R(7)+=0x4u;
  R(6)=R(15);
  { c->pr=0x8c057374u; R(4)=R(13); f_8c057240(c); }
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(12)+=R(0);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057440;
  fp_ld(c,4,R(13));
  fp_cmp(c,1,15,4);
  { uint32_t k=c->t; fp_st(c,14,R(13)); if(k) goto L8c057386; }
  fp_mov(c,15,4);
L8c057386:;
  { ST8(R(15),R(11)); goto L8c057440; }
L8c05738a:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(13));
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c0573b4;
  R(4)=0x8c0c6494u;
  R(5)=LD32(R(4));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0573b0;
  { R(4)=R(14); goto L8c0573a2; }
L8c0573a0:;
  R(4)-=R(5);
L8c0573a2:;
  c->t=R(4)>=R(5);
  if(c->t) goto L8c0573a0;
  R(0)=R(4);
  R(5)=0x8c2d1c88u;
  R(0)<<=2;
  { fp_ld(c,4,R(0)+R(5)); goto L8c0573b4; }
L8c0573b0:;
  c->fr[5]=0x3F800000u;
  fp_mov(c,4,5);
L8c0573b4:;
  R(0)=0x14u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,0,3,2);
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c0573ca; }
  fp_ld(c,3,R(13));
  fp_ld(c,0,R(0)+R(13));
  fp_fmac(c,3,4);
  { fp_st(c,3,R(13)); goto L8c05743e; }
L8c0573ca:;
  R(4)=(int32_t)(int8_t)LD8(R(12));
  R(5)=0x20u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(c->t) goto L8c0573d6;
  { R(4)=R(11); goto L8c05742c; }
L8c0573d6:;
  R(5)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0573e2;
  R(3)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(!c->t) goto L8c057426;
L8c0573e2:;
  R(5)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057420;
  R(3)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c057420;
  { R(4)+=0xffffffe0u; goto L8c05742c; }
L8c057420:;
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c05742a;
L8c057426:;
  { R(4)+=0xffffffc0u; goto L8c05742c; }
L8c05742a:;
  R(4)+=0xffffffe0u;
L8c05742c:;
  R(1)=R(4);
  R(0)=R(1)&0xFF;
  R(4)=0x8c2d1888u;
  R(0)<<=2;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(0)+R(4));
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(13));
L8c05743e:;
  R(12)+=0x1u;
L8c057440:;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c057360;
  fp_ld(c,4,R(13));
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c057450;
  { fp_mov(c,3,4); goto L8c057452; }
L8c057450:;
  fp_mov(c,3,15);
L8c057452:;
  fp_st(c,3,R(13));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c057360(SH4Ctx *c) {
L8c057360:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c05738a;
  R(12)+=0x1u;
  R(7)=R(15);
  R(5)=R(12);
  R(7)+=0x4u;
  R(6)=R(15);
  { c->pr=0x8c057374u; R(4)=R(13); f_8c057240(c); }
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(12)+=R(0);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057440;
  fp_ld(c,4,R(13));
  fp_cmp(c,1,15,4);
  { uint32_t k=c->t; fp_st(c,14,R(13)); if(k) goto L8c057386; }
  fp_mov(c,15,4);
L8c057386:;
  { ST8(R(15),R(11)); goto L8c057440; }
L8c05738a:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(13));
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c0573b4;
  R(4)=0x8c0c6494u;
  R(5)=LD32(R(4));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0573b0;
  { R(4)=R(14); goto L8c0573a2; }
L8c0573a0:;
  R(4)-=R(5);
L8c0573a2:;
  c->t=R(4)>=R(5);
  if(c->t) goto L8c0573a0;
  R(0)=R(4);
  R(5)=0x8c2d1c88u;
  R(0)<<=2;
  { fp_ld(c,4,R(0)+R(5)); goto L8c0573b4; }
L8c0573b0:;
  c->fr[5]=0x3F800000u;
  fp_mov(c,4,5);
L8c0573b4:;
  R(0)=0x14u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,0,3,2);
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c0573ca; }
  fp_ld(c,3,R(13));
  fp_ld(c,0,R(0)+R(13));
  fp_fmac(c,3,4);
  { fp_st(c,3,R(13)); goto L8c05743e; }
L8c0573ca:;
  R(4)=(int32_t)(int8_t)LD8(R(12));
  R(5)=0x20u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(c->t) goto L8c0573d6;
  { R(4)=R(11); goto L8c05742c; }
L8c0573d6:;
  R(5)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0573e2;
  R(3)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(!c->t) goto L8c057426;
L8c0573e2:;
  R(5)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057420;
  R(3)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c057420;
  { R(4)+=0xffffffe0u; goto L8c05742c; }
L8c057420:;
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c05742a;
L8c057426:;
  { R(4)+=0xffffffc0u; goto L8c05742c; }
L8c05742a:;
  R(4)+=0xffffffe0u;
L8c05742c:;
  R(1)=R(4);
  R(0)=R(1)&0xFF;
  R(4)=0x8c2d1888u;
  R(0)<<=2;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(0)+R(4));
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(13));
L8c05743e:;
  R(12)+=0x1u;
L8c057440:;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c057360;
  fp_ld(c,4,R(13));
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c057450;
  { fp_mov(c,3,4); goto L8c057452; }
L8c057450:;
  fp_mov(c,3,15);
L8c057452:;
  fp_st(c,3,R(13));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c057420(SH4Ctx *c) {
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c05742a;
  { R(4)+=0xffffffc0u; goto L8c05742c; }
L8c05742a:;
  R(4)+=0xffffffe0u;
L8c05742c:;
  R(1)=R(4);
  R(0)=R(1)&0xFF;
  R(4)=0x8c2d1888u;
  R(0)<<=2;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(0)+R(4));
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(13));
  R(12)+=0x1u;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) { f_8c057360(c); return; }
  fp_ld(c,4,R(13));
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c057450;
  { fp_mov(c,3,4); goto L8c057452; }
L8c057450:;
  fp_mov(c,3,15);
L8c057452:;
  fp_st(c,3,R(13));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0574a0(SH4Ctx *c) {
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
  R(15)+=0xffffffecu;
  R(0)=0x10u;
  c->fr[4]=0x00000000u;
  R(10)=0x0u;
  fp_mov(c,13,4);
  R(2)=R(10);
  R(9)=0x8c2d1888u;
  fp_mov(c,14,13);
  R(11)=R(4);
  ST32(R(15),R(6));
  ST32(R(15)+8,R(7));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x44u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x48u;
  c->fr[15]=0x3F800000u;
  ST8(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  fp_mov(c,12,14);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)=0x20u; if(k) goto L8c0574e8; }
  {  goto L8c057814; }
L8c0574e8:;
  R(3)=0x8c019e40u;
  R(0)=0x1u;
  R(13)=0x0u;
  ST8(R(15)+4,R(0));
  { c->pr=0x8c0574f4u; R(4)=LD32(R(15)); f_8c019e40(c); }
  R(12)=R(0);
  R(0)=0x4cu;
  R(14)=LD32(R(15)+R(0));
  R(0)=LD32(R(15));
  R(14)=(int32_t)(int16_t)LD16(R(14));
  R(14)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=0x50u;
  R(3)=LD32(R(15)+R(0));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c057592;
  R(0)=R(14)&0xFF;
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c057578;
  R(0)=0x4cu;
  R(4)=LD32(R(15)+R(0));
  R(0)=LD32(R(15));
  R(4)=(int32_t)(int16_t)LD16(R(4));
  R(4)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(4)+=0x1u;
  R(5)=R(4)&0xFF;
  R(0)=R(5);
  c->t=(int32_t)R(0)==69;
  if(c->t) goto L8c05752a;
  R(0)=R(5);
  c->t=(int32_t)R(0)==101;
  if(!c->t) goto L8c05756c;
L8c05752a:;
  R(0)=0x4cu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(2)=(int32_t)(int16_t)LD16(R(3));
  R(2)+=0x1u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(2)=0x8c09cfe0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(3)+=0x1u;
  ST16(R(4),R(3));
  R(4)=(uint32_t)(int32_t)(int16_t)R(3);
  R(3)=LD32(R(15)+4);
  { c->pr=0x8c05754eu; R(4)+=R(3); f_8c09cfe0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  ST32(R(1),R(0));
L8c057552:;
  R(0)=0x4cu;
  R(0)=LD32(R(15)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(0));
  R(3)+=0x1u;
  ST16(R(0),R(3));
  R(3)+=0xffffffffu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(3);
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c057552;
  {  goto L8c057580; }
L8c05756c:;
  R(0)=0x50u;
  R(2)=LD32(R(15)+R(0));
  R(3)=0x0u;
  ST32(R(2),R(3));
  {  goto L8c057580; }
L8c057578:;
  R(0)=0x50u;
  R(1)=LD32(R(15)+R(0));
  R(3)=0x0u;
  ST32(R(1),R(3));
L8c057580:;
  R(2)=LD32(R(15)+8);
  R(3)=0x0u;
  R(12)=R(12)&0xFFFF;
  ST8(R(2),R(3));
  R(2)=LD32(R(15));
  R(2)+=R(12);
  ST32(R(15),R(2));
  { R(0)=R(2); goto L8c057944; }
L8c057592:;
  R(0)=R(14)&0xFF;
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c05759c;
  {  goto L8c0576c6; }
L8c05759c:;
  R(0)=0x4cu;
  R(14)=LD32(R(15)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(3)+=0x1u;
  ST16(R(14),R(3));
  R(14)=(uint32_t)(int32_t)(int16_t)R(3);
  R(0)=LD32(R(15));
  R(14)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(14)&0xFF;
  R(0)=R(4);
  c->t=(int32_t)R(0)==69;
  if(c->t) goto L8c0575ba;
  R(0)=R(4);
  c->t=(int32_t)R(0)==101;
  if(!c->t) goto L8c057620;
L8c0575ba:;
  R(0)=0x50u;
  R(2)=0x8c09cfe0u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x50u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(3)+=0x1u;
  ST16(R(4),R(3));
  R(4)=(uint32_t)(int32_t)(int16_t)R(3);
  R(3)=LD32(R(15)+4);
  { c->pr=0x8c0575d4u; R(4)+=R(3); f_8c09cfe0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  ST32(R(1),R(0));
L8c0575d8:;
  R(0)=0x4cu;
  R(0)=LD32(R(15)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(0));
  R(3)+=0x1u;
  ST16(R(0),R(3));
  R(3)+=0xffffffffu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(3);
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0575d8;
  {  goto L8c05768a; }
L8c057620:;
  R(4)=R(14)&0xFF;
  R(0)=R(4);
  c->t=(int32_t)R(0)==68;
  if(c->t) goto L8c05763a;
  R(0)=R(4);
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c05763a;
  R(0)=R(4);
  c->t=(int32_t)R(0)==80;
  if(c->t) goto L8c05763a;
  R(0)=R(4);
  c->t=(int32_t)R(0)==112;
  if(!c->t) goto L8c05769c;
L8c05763a:;
  R(0)=0x54u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(2)=LD32(R(3));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+R(0));
  R(2)=0x8c09cfe0u;
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(3)+=0x1u;
  ST16(R(4),R(3));
  R(4)=(uint32_t)(int32_t)(int16_t)R(3);
  R(3)=LD32(R(15)+4);
  { c->pr=0x8c057656u; R(4)+=R(3); f_8c09cfe0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(4)=R(14)&0xFF;
  ST32(R(3),R(0));
  R(0)=R(4);
  c->t=(int32_t)R(0)==80;
  if(c->t) goto L8c057668;
  R(0)=R(4);
  c->t=(int32_t)R(0)==112;
  if(!c->t) goto L8c057674;
L8c057668:;
  R(0)=0x54u;
  R(4)=LD32(R(15)+R(0));
  R(4)=LD32(R(4));
  R(3)=LD32(R(4));
  R(3)=0u-R(3);
  ST32(R(4),R(3));
L8c057674:;
  R(0)=0x4cu;
  R(0)=LD32(R(15)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(0));
  R(3)+=0x1u;
  ST16(R(0),R(3));
  R(3)+=0xffffffffu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(3);
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c057674;
L8c05768a:;
  R(3)=LD32(R(15)+8);
  R(2)=0x0u;
  R(12)=R(12)&0xFFFF;
  ST8(R(3),R(2));
  R(3)=LD32(R(15));
  R(3)+=R(12);
  ST32(R(15),R(3));
  { R(0)=R(3); goto L8c057944; }
L8c05769c:;
  R(0)=0x4cu;
  R(0)=LD32(R(15)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(0));
  R(3)+=0x1u;
  ST16(R(0),R(3));
  R(3)+=0xffffffffu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(3);
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c05769c;
  R(0)=0x4cu;
  R(14)=LD32(R(15)+R(0));
  R(0)=LD32(R(15));
  R(14)=(int32_t)(int16_t)LD16(R(14));
  R(14)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(14)&0xFF;
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c0576c6;
  {  goto L8c05759c; }
L8c0576c6:;
  R(0)=0x58u;
  R(2)=LD32(R(15)+R(0));
  R(3)=0xffffffffu;
  ST16(R(2),R(3));
  {  goto L8c0577ec; }
L8c0576d2:;
  R(14)=LD32(R(15));
  R(14)+=R(13);
  ST32(R(15)+12,R(14));
  R(14)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(14)&0xFF;
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c0576f4;
  R(0)=0x44u;
  R(5)=LD32(R(15)+12);
  R(7)=R(15);
  R(6)=LD32(R(15)+R(0));
  R(5)+=0x1u;
  R(7)+=0x4u;
  { c->pr=0x8c0576f0u; R(4)=R(11); f_8c057240(c); }
  { R(13)+=R(0); goto L8c0577ea; }
L8c0576f4:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,14,R(0)+R(11));
  fp_cmp(c,0,14,3);
  if(!c->t) goto L8c057722;
  R(3)=0x8c0c6494u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c057720;
  { R(4)=R(10); goto L8c057710; }
L8c05770a:;
  R(2)=0x8c0c6494u;
  R(3)=LD32(R(2));
  R(4)-=R(3);
L8c057710:;
  R(0)=0x8c0c6494u;
  R(1)=LD32(R(0));
  c->t=R(4)>=R(1);
  if(c->t) goto L8c05770a;
  R(0)=0x8c2d1c88u;
  R(4)<<=2;
  { fp_ld(c,14,R(0)+R(4)); goto L8c057722; }
L8c057720:;
  fp_mov(c,14,15);
L8c057722:;
  R(0)=0x20u;
  c->fr[2]=0x00000000u;
  fp_st(c,14,R(0)+R(11));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(11));
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c057734;
  { fp_ld(c,3,R(0)+R(11)); goto L8c057794; }
L8c057734:;
  R(4)=R(14)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(8);
  if(c->t) goto L8c057760;
  { R(4)=0x0u; goto L8c057788; }
L8c057760:;
  R(2)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c05776c;
  R(1)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c057782;
L8c05776c:;
  R(3)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c05777c;
  R(1)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c05777c;
  { R(4)+=0xffffffe0u; goto L8c057788; }
L8c05777c:;
  R(2)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c057786;
L8c057782:;
  { R(4)+=0xffffffc0u; goto L8c057788; }
L8c057786:;
  R(4)+=0xffffffe0u;
L8c057788:;
  R(0)=R(4);
  ST8(R(15)+12,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(9));
L8c057794:;
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x58u;
  R(3)=LD32(R(15)+R(0));
  R(2)=(int32_t)(int16_t)LD16(R(3));
  R(2)+=0x1u;
  ST16(R(3),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(10)+=0x1u; if(k) goto L8c0577e0; }
  R(0)=0xcu;
  fp_mov(c,0,13);
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,12);
  { fp_st(c,3,R(0)+R(11)); goto L8c0577e4; }
L8c0577e0:;
  R(0)=0x0u;
  ST8(R(15)+4,R(0));
L8c0577e4:;
  R(0)=0x10u;
  fp_mov(c,12,14);
  fp_ld(c,13,R(0)+R(15));
L8c0577ea:;
  R(13)+=0x1u;
L8c0577ec:;
  R(0)=0x4cu;
  R(3)=LD32(R(15)+R(0));
  R(2)=(int32_t)(int16_t)LD16(R(3));
  c->t=(int32_t)R(13)>(int32_t)R(2);
  if(c->t) goto L8c0577fa;
  {  goto L8c0576d2; }
L8c0577fa:;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  R(1)=0xcu;
  fp_arith(c,2,3,14);
  R(1)+=R(11);
  fp_st(c,3,R(0)+R(11));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(1));
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(11)); goto L8c057928; }
L8c057814:;
  R(3)=0x8c019e40u;
  R(0)=0x0u;
  ST8(R(15)+4,R(0));
  { c->pr=0x8c05781eu; R(4)=LD32(R(15)); f_8c019e40(c); }
  R(12)=R(0);
  R(0)=0x5cu;
  R(10)=LD32(R(15)+R(0));
  R(10)=(int32_t)(int16_t)LD16(R(10));
  { R(10)=R(10)&0xFFFF; goto L8c05783e; }
L8c05782a:;
  R(0)=0x44u;
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+R(0));
  R(7)=R(15);
  R(7)+=0x4u;
  { c->pr=0x8c057838u; R(4)=R(11); f_8c057240(c); }
  R(2)=LD32(R(15));
  R(2)+=R(0);
  ST32(R(15),R(2));
L8c05783e:;
  R(0)=LD32(R(15));
  R(0)+=0x1u;
  ST32(R(15),R(0));
  R(0)+=0xffffffffu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c05782a;
  R(2)=LD32(R(15));
  R(0)=0xffffffffu;
  c->fr[3]=0x00000000u;
  R(14)=(int32_t)(int8_t)LD8(R(2)+R(0));
  R(0)=0x1cu;
  fp_ld(c,4,R(0)+R(11));
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c05787a;
  R(2)=0x8c0c6494u;
  R(4)=LD32(R(2));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c057878;
  R(5)=R(10);
  c->t=R(5)>=R(4);
  if(!c->t) goto L8c057870;
L8c05786a:;
  R(5)-=R(4);
  c->t=R(5)>=R(4);
  if(c->t) goto L8c05786a;
L8c057870:;
  R(0)=0x8c2d1c88u;
  R(5)<<=2;
  { fp_ld(c,4,R(0)+R(5)); goto L8c05787a; }
L8c057878:;
  fp_mov(c,4,15);
L8c05787a:;
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(11));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c057894;
  R(1)=0xcu;
  R(1)+=R(11);
  R(0)=0x4u;
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(11));
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(11)); goto L8c057898; }
L8c057894:;
  R(0)=0x0u;
  ST8(R(15)+4,R(0));
L8c057898:;
  R(0)=0x14u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(11));
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c0578ac;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0xcu;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(11)); goto L8c05791e; }
L8c0578ac:;
  R(4)=R(14)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(8);
  if(c->t) goto L8c0578b6;
  { R(4)=0x0u; goto L8c05790c; }
L8c0578b6:;
  R(2)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0578c2;
  R(1)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c057906;
L8c0578c2:;
  R(3)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c057900;
  R(1)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c057900;
  { R(4)+=0xffffffe0u; goto L8c05790c; }
L8c057900:;
  R(2)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c05790a;
L8c057906:;
  { R(4)+=0xffffffc0u; goto L8c05790c; }
L8c05790a:;
  R(4)+=0xffffffe0u;
L8c05790c:;
  R(0)=R(4);
  ST8(R(15)+12,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(9));
  R(0)=0xcu;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(11));
L8c05791e:;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x24u;
  R(10)+=0x1u;
  fp_st(c,3,R(0)+R(11));
L8c057928:;
  R(3)=LD32(R(15)+8);
  R(0)=0x48u;
  ST8(R(3),R(14));
  R(3)=LD32(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05793c;
  R(3)=LD32(R(15));
  R(12)=R(12)&0xFFFF;
  R(3)+=R(12);
  ST32(R(15),R(3));
L8c05793c:;
  R(0)=0x5cu;
  R(2)=LD32(R(15)+R(0));
  ST16(R(2),R(10));
  R(0)=LD32(R(15));
L8c057944:;
  R(15)+=0x14u;
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
void f_8c057960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(0)=0x48u;
  ST32(R(15)+24,R(5));
  R(13)=0x0u;
  R(14)=R(6);
  R(10)=R(4);
  ST32(R(15)+20,R(7));
  R(11)=LD32(R(15)+R(0));
  R(0)=R(13);
  ST16(R(15),R(13));
  ST16(R(15)+8,R(0));
  R(0)=0x40u;
  ST32(R(15)+4,R(13));
  R(3)=LD32(R(15)+R(0));
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=!c->t; R(8)=R(13); if(k) goto L8c0579c0; }
  R(0)=0x40u;
  { R(9)=LD32(R(15)+R(0)); goto L8c0579c8; }
L8c0579c0:;
  R(3)=0x8c019e40u;
  { c->pr=0x8c0579c6u; R(4)=R(14); f_8c019e40(c); }
  R(9)=R(0);
L8c0579c8:;
  R(0)=0x44u;
  R(0)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(9)+=R(14); if(k) goto L8c0579e2; }
  R(2)=0x8c019e40u;
  { c->pr=0x8c0579dcu; R(4)=R(14); f_8c019e40(c); }
  R(0)=0x44u;
  R(3)=LD32(R(15)+R(0));
  ST8(R(3),R(13));
L8c0579e2:;
  R(3)=(int32_t)(int16_t)LD16(R(11));
  ST16(R(15),R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0579f0;
  ST16(R(15),R(13));
  R(8)=0x1u;
L8c0579f0:;
  R(3)=LD32(R(15)+20);
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(14)+=R(3);
  R(3)=0x8c056980u;
  ST16(R(15)+16,R(0));
  R(5)=LD32(R(15)+24);
  c->fr[4]=0x00000000u;
  { c->pr=0x8c057a02u; R(4)=R(10); f_8c056980(c); }
  {  goto L8c057ada; }
L8c057a06:;
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(14);
  R(3)=R(15);
  R(3)+=0xcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x54u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x10u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x34u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+52);
  R(7)=R(15);
  R(7)+=0x28u;
  { c->pr=0x8c057a38u; R(4)=R(10); f_8c0574a0(c); }
  R(15)+=0x1cu;
  R(12)=0x8c0835bau;
  R(14)=R(0);
  { c->pr=0x8c057a42u; R(4)=LD32(R(10)+40); f_8c0835ba(c); }
  R(6)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(5)=0x20u;
  R(4)=R(0);
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(c->t) goto L8c057a56;
  R(5)=0xffffffffu;
  { R(4)=R(5); goto L8c057ab6; }
L8c057a56:;
  R(5)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057a62;
  R(2)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c057aa6;
L8c057a62:;
  R(5)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057aa0;
  R(2)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(c->t) goto L8c057aa0;
  { R(4)+=0xffffffe0u; goto L8c057aac; }
L8c057aa0:;
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057aaa;
L8c057aa6:;
  { R(4)+=0xffffffc0u; goto L8c057aac; }
L8c057aaa:;
  R(4)+=0xffffffe0u;
L8c057aac:;
  R(5)=0x8c0c6484u;
  R(12)=R(4);
  R(4)=R(12)&0xFF;
  R(3)=LD32(R(5));
  R(4)+=R(3);
L8c057ab6:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c057ac2;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c057ac8;
L8c057ac2:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  { ST16(R(11),R(2)); goto L8c057ae4; }
L8c057ac8:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(0)+=0x1u;
  ST16(R(15)+8,R(0));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(3)+=0x1u;
  ST16(R(15),R(3));
  ST16(R(11),R(3));
L8c057ad6:;
  c->t=R(14)>=R(9);
  if(!c->t) goto L8c057a06;
L8c057ada:;
  c->t=R(14)>=R(9);
  if(c->t) goto L8c057ae4;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c057ad6;
L8c057ae4:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c057b20(SH4Ctx *c) {
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
  R(15)+=0xffffffb0u;
  R(2)=0x8c0c76b8u;
  R(8)=R(5);
  R(0)=0x80u;
  R(12)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(14)=R(7);
  R(10)=R(6);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(11)=LD32(R(15)+R(0)); if(k) goto L8c057b70; }
  R(0)=0x8cu;
  R(6)=R(10);
  R(5)=R(8);
  R(7)=R(14);
  R(3)=LD32(R(15)+R(0));
  R(0)=0x8cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+R(0));
  R(0)=0x8cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c057b6cu; R(4)=R(12); f_8c057960(c); }
  { R(15)+=0x10u; { f_8c058002(c); return; } }
L8c057b70:;
  R(13)=0x0u;
  R(2)=0x8c2d1d50u;
  R(0)=R(13);
  c->fr[15]=0x00000000u;
  c->t=(int32_t)R(11)>=0;
  R(9)=R(13);
  fp_mov(c,14,15);
  ST32(R(2),R(13));
  ST16(R(15)+4,R(0));
  R(0)=0x28u;
  ST16(R(15),R(13));
  ST16(R(15)+R(0),R(13));
  ST32(R(15)+12,R(13));
  { uint32_t k=!c->t; ST32(R(15)+36,R(13)); if(k) goto L8c057bc0; }
  { R(3)=R(11); goto L8c057bc8; }
L8c057bc0:;
  R(3)=0x8c019e40u;
  { c->pr=0x8c057bc6u; R(4)=R(10); f_8c019e40(c); }
  R(3)=R(0);
L8c057bc8:;
  R(0)=0x84u;
  R(3)+=R(10);
  ST32(R(15)+24,R(3));
  R(0)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c057be4;
  R(1)=0x8c019e40u;
  { c->pr=0x8c057bdeu; R(4)=R(10); f_8c019e40(c); }
  R(1)=R(15);
  R(1)+=0x28u;
  ST16(R(1),R(0));
L8c057be4:;
  R(0)=0x88u;
  R(0)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(0));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(10)+=R(14); if(k) goto L8c057bfc; }
  R(0)=R(13);
  R(2)=0x1u;
  ST32(R(15)+36,R(2));
  ST16(R(15)+4,R(0));
L8c057bfc:;
  R(3)=0x8c056980u;
  R(0)=R(14);
  R(5)=R(8);
  ST16(R(15)+20,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c057c0au; R(4)=R(12); f_8c056980(c); }
  R(11)=LD32(R(8)+4);
  R(11)=LD32(R(11));
  R(4)=LD32(R(11)+16);
  R(2)=LD32(R(4));
  { ST32(R(15)+32,R(2)); { f_8c057fea(c); return; } }
}
void f_8c057bc0(SH4Ctx *c) {
  R(3)=0x8c019e40u;
  { c->pr=0x8c057bc6u; R(4)=R(10); f_8c019e40(c); }
  R(3)=R(0);
  R(0)=0x84u;
  R(3)+=R(10);
  ST32(R(15)+24,R(3));
  R(0)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c057be4;
  R(1)=0x8c019e40u;
  { c->pr=0x8c057bdeu; R(4)=R(10); f_8c019e40(c); }
  R(1)=R(15);
  R(1)+=0x28u;
  ST16(R(1),R(0));
L8c057be4:;
  R(0)=0x88u;
  R(0)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(0));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(10)+=R(14); if(k) goto L8c057bfc; }
  R(0)=R(13);
  R(2)=0x1u;
  ST32(R(15)+36,R(2));
  ST16(R(15)+4,R(0));
L8c057bfc:;
  R(3)=0x8c056980u;
  R(0)=R(14);
  R(5)=R(8);
  ST16(R(15)+20,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c057c0au; R(4)=R(12); f_8c056980(c); }
  R(11)=LD32(R(8)+4);
  R(11)=LD32(R(11));
  R(4)=LD32(R(11)+16);
  R(2)=LD32(R(4));
  { ST32(R(15)+32,R(2)); { f_8c057fea(c); return; } }
}
void f_8c057c16(SH4Ctx *c) {
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(8);
  R(2)=R(15);
  R(3)=0x94u;
  R(2)+=0x4u;
  R(6)=R(10);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x18u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x14u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+56);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x34u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(15);
  R(7)+=0x2cu;
  { c->pr=0x8c057c4au; R(4)=R(12); f_8c0574a0(c); }
  R(15)+=0x1cu;
  R(14)=0x8c0835bau;
  R(10)=R(0);
  { c->pr=0x8c057c54u; R(4)=LD32(R(12)+40); f_8c0835ba(c); }
  R(6)=R(0);
  R(0)=0x10u;
  R(4)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(5)=0x20u;
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(c->t) goto L8c057ca0;
  R(4)=0xffffffffu;
  R(0)=R(4);
  { ST16(R(15)+8,R(0)); goto L8c057cd4; }
L8c057ca0:;
  R(5)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057cac;
  R(3)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(!c->t) goto L8c057cc2;
L8c057cac:;
  R(5)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057cbc;
  R(3)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c057cbc;
  { R(4)+=0xffffffe0u; goto L8c057cc8; }
L8c057cbc:;
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057cc6;
L8c057cc2:;
  { R(4)+=0xffffffc0u; goto L8c057cc8; }
L8c057cc6:;
  R(4)+=0xffffffe0u;
L8c057cc8:;
  R(14)=R(4);
  R(4)=0x8c0c6484u;
  R(0)=R(14)&0xFF;
  R(3)=LD32(R(4));
  R(0)+=R(3);
  ST16(R(15)+8,R(0));
L8c057cd4:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c057ce2;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c057d20;
L8c057ce2:;
  R(0)=0x88u;
  R(3)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  { ST16(R(3),R(0)); { f_8c058000(c); return; } }
L8c057d20:;
  R(0)=0x84u;
  R(0)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c057da0;
  R(0)=0x28u;
  R(14)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  R(14)=R(14)&0xFFFF;
  R(3)=LD32(R(11)+R(0));
  c->t=R(3)>=R(14);
  if(c->t) goto L8c057d58;
  R(4)=0x8c2d1d50u;
  R(9)=0x8c082854u;
  { c->pr=0x8c057d42u;  f_8c082854(c); }
  R(0)=0xa4u;
  R(4)=0x8c2d1d50u;
  ST32(R(11)+R(0),R(14));
  R(14)=0x8c0827c0u;
  { c->pr=0x8c057d4eu; R(5)=LD32(R(11)+R(0)); f_8c0827c0(c); }
  R(3)=0x8c2d1d50u;
  R(0)=0xa0u;
  R(4)=LD32(R(3));
  { ST32(R(11)+R(0),R(4)); goto L8c057d60; }
L8c057d58:;
  R(0)=0xa0u;
  R(2)=0x8c2d1d50u;
  R(3)=LD32(R(11)+R(0));
  ST32(R(2),R(3));
L8c057d60:;
  R(1)=0x8c2d1d50u;
  R(0)=0xa8u;
  R(4)=LD32(R(1));
  ST32(R(11)+R(0),R(4));
  R(0)=0x84u;
  R(3)=LD32(R(15)+R(0));
  ST8(R(3),R(13));
  {  goto L8c057da8; }
L8c057da0:;
  R(0)=0xa0u;
  R(3)=0x8c2d1d50u;
  R(2)=LD32(R(11)+R(0));
  ST32(R(3),R(2));
L8c057da8:;
  R(14)=0x8c05428cu;
  { c->pr=0x8c057daeu;  f_8c05428c(c); }
  R(14)=R(0);
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(4)=R(8); if(k) goto L8c057dbe; }
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+20);
  ST32(R(3)+24,R(2));
L8c057dbe:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057dca;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+24);
  ST32(R(3)+20,R(2));
L8c057dca:;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057df4;
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(14);
  if(!c->t) goto L8c057de6;
  R(3)=LD32(R(14)+20);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+8,R(3));
L8c057de6:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c057df4;
  R(3)=LD32(R(14)+24);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+12,R(3));
L8c057df4:;
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+20,R(13));
  R(2)=LD32(R(4)+12);
  ST32(R(14)+24,R(2));
  ST32(R(14)+28,R(4));
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c057e0c;
  { ST32(R(4)+8,R(14)); goto L8c057e10; }
L8c057e0c:;
  R(2)=LD32(R(4)+12);
  ST32(R(2)+20,R(14));
L8c057e10:;
  R(1)=0x8c2d1d50u;
  R(0)=0x10u;
  ST32(R(4)+12,R(14));
  R(3)=LD32(R(4)+16);
  R(3)+=0x1u;
  ST32(R(4)+16,R(3));
  R(9)=(int32_t)(int16_t)LD16(R(15));
  R(2)=LD32(R(1));
  R(3)=R(9);
  R(9)<<=2;
  R(9)+=R(3);
  R(9)<<=2;
  R(3)=0x1u;
  R(9)+=R(2);
  ST8(R(9)+R(0),R(3));
  R(3)=0x8c014ea0u;
  { c->pr=0x8c057e34u; R(4)=LD32(R(14)+32); f_8c014ea0(c); }
  ST32(R(9),R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=LD32(R(15)+32);
  R(4)=R(0);
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c057e80;
  { R(2)=0x8u; goto L8c057e82; }
L8c057e80:;
  R(2)=0x1u;
L8c057e82:;
  R(0)=0x8c057f64u;
  ST32(R(14),R(2));
  R(1)=LD32(R(4)+4);
  ST32(R(14)+4,R(1));
  fp_ld(c,4,R(0));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(14));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057eaa;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1d50u;
  R(3)+=0xffffffffu;
  R(2)=R(3);
  R(3)<<=2;
  R(1)=LD32(R(0));
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(3)+8,R(9));
L8c057eaa:;
  R(4)=LD32(R(8)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  ST32(R(15)+8,R(3));
  { uint32_t k=c->t; R(4)=(int32_t)(int16_t)LD16(R(15)); if(k) goto L8c057ecc; }
  R(14)=R(4)&0xFFFF;
  R(2)=LD32(R(15)+8);
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(2);
  { R(14)=LD32(R(14)); goto L8c057ece; }
L8c057ecc:;
  R(14)=0x0u;
L8c057ece:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c057ed6;
  {  goto L8c057fce; }
L8c057ed6:;
  R(0)=0x8c057f6cu;
  fp_mov(c,3,14);
  fp_ld(c,12,R(0));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(12));
  R(0)=0x10u;
  R(14)=LD32(R(14)+32);
  fp_arith(c,0,3,0);
  R(3)=0x8c05e9c0u;
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057ef4u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x44u;
  fp_arith(c,0,3,0);
  fp_mov(c,0,12);
  R(3)=0x8c05e9c0u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057f16u; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4cu;
  R(3)=0x8c01638au;
  R(5)+=0x44u;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057f2au; R(4)=R(14); f_8c01638a(c); }
  R(0)=0x8c057f78u;
  c->fr[7]=0x3F800000u;
  fp_ld(c,6,R(0));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(12));
  fp_unary(c,0,7);
  fp_mov(c,5,4);
  fp_arith(c,0,5,7);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c057f80;
  { fp_mov(c,3,5); goto L8c057f8a; }
L8c057f80:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c057f8a:;
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c057fce;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x44u;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x3cu;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x34u;
  R(5)+=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x2cu;
  R(6)+=0x38u;
  { uint32_t tg=R(3); c->pr=0x8c057fceu; R(4)=R(14); sh4_call(c,tg); }
L8c057fce:;
  R(0)=0x88u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  ST16(R(3),R(0));
  { f_8c057fe0(c); return; }
}
void f_8c057ca0(SH4Ctx *c) {
  R(5)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057cac;
  R(3)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(!c->t) goto L8c057cc2;
L8c057cac:;
  R(5)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057cbc;
  R(3)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c057cbc;
  { R(4)+=0xffffffe0u; goto L8c057cc8; }
L8c057cbc:;
  R(5)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c057cc6;
L8c057cc2:;
  { R(4)+=0xffffffc0u; goto L8c057cc8; }
L8c057cc6:;
  R(4)+=0xffffffe0u;
L8c057cc8:;
  R(14)=R(4);
  R(4)=0x8c0c6484u;
  R(0)=R(14)&0xFF;
  R(3)=LD32(R(4));
  R(0)+=R(3);
  ST16(R(15)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c057ce2;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(!c->t) goto L8c057d20;
L8c057ce2:;
  R(0)=0x88u;
  R(3)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  { ST16(R(3),R(0)); { f_8c058000(c); return; } }
L8c057d20:;
  R(0)=0x84u;
  R(0)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c057da0;
  R(0)=0x28u;
  R(14)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  R(14)=R(14)&0xFFFF;
  R(3)=LD32(R(11)+R(0));
  c->t=R(3)>=R(14);
  if(c->t) goto L8c057d58;
  R(4)=0x8c2d1d50u;
  R(9)=0x8c082854u;
  { c->pr=0x8c057d42u;  f_8c082854(c); }
  R(0)=0xa4u;
  R(4)=0x8c2d1d50u;
  ST32(R(11)+R(0),R(14));
  R(14)=0x8c0827c0u;
  { c->pr=0x8c057d4eu; R(5)=LD32(R(11)+R(0)); f_8c0827c0(c); }
  R(3)=0x8c2d1d50u;
  R(0)=0xa0u;
  R(4)=LD32(R(3));
  { ST32(R(11)+R(0),R(4)); goto L8c057d60; }
L8c057d58:;
  R(0)=0xa0u;
  R(2)=0x8c2d1d50u;
  R(3)=LD32(R(11)+R(0));
  ST32(R(2),R(3));
L8c057d60:;
  R(1)=0x8c2d1d50u;
  R(0)=0xa8u;
  R(4)=LD32(R(1));
  ST32(R(11)+R(0),R(4));
  R(0)=0x84u;
  R(3)=LD32(R(15)+R(0));
  ST8(R(3),R(13));
  {  goto L8c057da8; }
L8c057da0:;
  R(0)=0xa0u;
  R(3)=0x8c2d1d50u;
  R(2)=LD32(R(11)+R(0));
  ST32(R(3),R(2));
L8c057da8:;
  R(14)=0x8c05428cu;
  { c->pr=0x8c057daeu;  f_8c05428c(c); }
  R(14)=R(0);
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(4)=R(8); if(k) goto L8c057dbe; }
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+20);
  ST32(R(3)+24,R(2));
L8c057dbe:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057dca;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+24);
  ST32(R(3)+20,R(2));
L8c057dca:;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057df4;
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(14);
  if(!c->t) goto L8c057de6;
  R(3)=LD32(R(14)+20);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+8,R(3));
L8c057de6:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c057df4;
  R(3)=LD32(R(14)+24);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+12,R(3));
L8c057df4:;
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+20,R(13));
  R(2)=LD32(R(4)+12);
  ST32(R(14)+24,R(2));
  ST32(R(14)+28,R(4));
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c057e0c;
  { ST32(R(4)+8,R(14)); goto L8c057e10; }
L8c057e0c:;
  R(2)=LD32(R(4)+12);
  ST32(R(2)+20,R(14));
L8c057e10:;
  R(1)=0x8c2d1d50u;
  R(0)=0x10u;
  ST32(R(4)+12,R(14));
  R(3)=LD32(R(4)+16);
  R(3)+=0x1u;
  ST32(R(4)+16,R(3));
  R(9)=(int32_t)(int16_t)LD16(R(15));
  R(2)=LD32(R(1));
  R(3)=R(9);
  R(9)<<=2;
  R(9)+=R(3);
  R(9)<<=2;
  R(3)=0x1u;
  R(9)+=R(2);
  ST8(R(9)+R(0),R(3));
  R(3)=0x8c014ea0u;
  { c->pr=0x8c057e34u; R(4)=LD32(R(14)+32); f_8c014ea0(c); }
  ST32(R(9),R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=LD32(R(15)+32);
  R(4)=R(0);
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c057e80;
  { R(2)=0x8u; goto L8c057e82; }
L8c057e80:;
  R(2)=0x1u;
L8c057e82:;
  R(0)=0x8c057f64u;
  ST32(R(14),R(2));
  R(1)=LD32(R(4)+4);
  ST32(R(14)+4,R(1));
  fp_ld(c,4,R(0));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(14));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057eaa;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1d50u;
  R(3)+=0xffffffffu;
  R(2)=R(3);
  R(3)<<=2;
  R(1)=LD32(R(0));
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(3)+8,R(9));
L8c057eaa:;
  R(4)=LD32(R(8)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  ST32(R(15)+8,R(3));
  { uint32_t k=c->t; R(4)=(int32_t)(int16_t)LD16(R(15)); if(k) goto L8c057ecc; }
  R(14)=R(4)&0xFFFF;
  R(2)=LD32(R(15)+8);
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(2);
  { R(14)=LD32(R(14)); goto L8c057ece; }
L8c057ecc:;
  R(14)=0x0u;
L8c057ece:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c057ed6;
  {  goto L8c057fce; }
L8c057ed6:;
  R(0)=0x8c057f6cu;
  fp_mov(c,3,14);
  fp_ld(c,12,R(0));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(12));
  R(0)=0x10u;
  R(14)=LD32(R(14)+32);
  fp_arith(c,0,3,0);
  R(3)=0x8c05e9c0u;
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057ef4u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x44u;
  fp_arith(c,0,3,0);
  fp_mov(c,0,12);
  R(3)=0x8c05e9c0u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057f16u; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4cu;
  R(3)=0x8c01638au;
  R(5)+=0x44u;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057f2au; R(4)=R(14); f_8c01638a(c); }
  R(0)=0x8c057f78u;
  c->fr[7]=0x3F800000u;
  fp_ld(c,6,R(0));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(12));
  fp_unary(c,0,7);
  fp_mov(c,5,4);
  fp_arith(c,0,5,7);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c057f80;
  { fp_mov(c,3,5); goto L8c057f8a; }
L8c057f80:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c057f8a:;
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c057fce;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x44u;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x3cu;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x34u;
  R(5)+=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x2cu;
  R(6)+=0x38u;
  { uint32_t tg=R(3); c->pr=0x8c057fceu; R(4)=R(14); sh4_call(c,tg); }
L8c057fce:;
  R(0)=0x88u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  ST16(R(3),R(0));
  { f_8c057fe0(c); return; }
}
void f_8c057d20(SH4Ctx *c) {
  R(0)=0x84u;
  R(0)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c057da0;
  R(0)=0x28u;
  R(14)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  R(14)=R(14)&0xFFFF;
  R(3)=LD32(R(11)+R(0));
  c->t=R(3)>=R(14);
  if(c->t) goto L8c057d58;
  R(4)=0x8c2d1d50u;
  R(9)=0x8c082854u;
  { c->pr=0x8c057d42u;  f_8c082854(c); }
  R(0)=0xa4u;
  R(4)=0x8c2d1d50u;
  ST32(R(11)+R(0),R(14));
  R(14)=0x8c0827c0u;
  { c->pr=0x8c057d4eu; R(5)=LD32(R(11)+R(0)); f_8c0827c0(c); }
  R(3)=0x8c2d1d50u;
  R(0)=0xa0u;
  R(4)=LD32(R(3));
  { ST32(R(11)+R(0),R(4)); goto L8c057d60; }
L8c057d58:;
  R(0)=0xa0u;
  R(2)=0x8c2d1d50u;
  R(3)=LD32(R(11)+R(0));
  ST32(R(2),R(3));
L8c057d60:;
  R(1)=0x8c2d1d50u;
  R(0)=0xa8u;
  R(4)=LD32(R(1));
  ST32(R(11)+R(0),R(4));
  R(0)=0x84u;
  R(3)=LD32(R(15)+R(0));
  ST8(R(3),R(13));
  {  goto L8c057da8; }
L8c057da0:;
  R(0)=0xa0u;
  R(3)=0x8c2d1d50u;
  R(2)=LD32(R(11)+R(0));
  ST32(R(3),R(2));
L8c057da8:;
  R(14)=0x8c05428cu;
  { c->pr=0x8c057daeu;  f_8c05428c(c); }
  R(14)=R(0);
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(4)=R(8); if(k) goto L8c057dbe; }
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+20);
  ST32(R(3)+24,R(2));
L8c057dbe:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057dca;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+24);
  ST32(R(3)+20,R(2));
L8c057dca:;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057df4;
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(14);
  if(!c->t) goto L8c057de6;
  R(3)=LD32(R(14)+20);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+8,R(3));
L8c057de6:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c057df4;
  R(3)=LD32(R(14)+24);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+12,R(3));
L8c057df4:;
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+20,R(13));
  R(2)=LD32(R(4)+12);
  ST32(R(14)+24,R(2));
  ST32(R(14)+28,R(4));
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c057e0c;
  { ST32(R(4)+8,R(14)); goto L8c057e10; }
L8c057e0c:;
  R(2)=LD32(R(4)+12);
  ST32(R(2)+20,R(14));
L8c057e10:;
  R(1)=0x8c2d1d50u;
  R(0)=0x10u;
  ST32(R(4)+12,R(14));
  R(3)=LD32(R(4)+16);
  R(3)+=0x1u;
  ST32(R(4)+16,R(3));
  R(9)=(int32_t)(int16_t)LD16(R(15));
  R(2)=LD32(R(1));
  R(3)=R(9);
  R(9)<<=2;
  R(9)+=R(3);
  R(9)<<=2;
  R(3)=0x1u;
  R(9)+=R(2);
  ST8(R(9)+R(0),R(3));
  R(3)=0x8c014ea0u;
  { c->pr=0x8c057e34u; R(4)=LD32(R(14)+32); f_8c014ea0(c); }
  ST32(R(9),R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=LD32(R(15)+32);
  R(4)=R(0);
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c057e80;
  { R(2)=0x8u; goto L8c057e82; }
L8c057e80:;
  R(2)=0x1u;
L8c057e82:;
  R(0)=0x8c057f64u;
  ST32(R(14),R(2));
  R(1)=LD32(R(4)+4);
  ST32(R(14)+4,R(1));
  fp_ld(c,4,R(0));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(14));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057eaa;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1d50u;
  R(3)+=0xffffffffu;
  R(2)=R(3);
  R(3)<<=2;
  R(1)=LD32(R(0));
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(3)+8,R(9));
L8c057eaa:;
  R(4)=LD32(R(8)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  ST32(R(15)+8,R(3));
  { uint32_t k=c->t; R(4)=(int32_t)(int16_t)LD16(R(15)); if(k) goto L8c057ecc; }
  R(14)=R(4)&0xFFFF;
  R(2)=LD32(R(15)+8);
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(2);
  { R(14)=LD32(R(14)); goto L8c057ece; }
L8c057ecc:;
  R(14)=0x0u;
L8c057ece:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c057ed6;
  {  goto L8c057fce; }
L8c057ed6:;
  R(0)=0x8c057f6cu;
  fp_mov(c,3,14);
  fp_ld(c,12,R(0));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(12));
  R(0)=0x10u;
  R(14)=LD32(R(14)+32);
  fp_arith(c,0,3,0);
  R(3)=0x8c05e9c0u;
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057ef4u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x44u;
  fp_arith(c,0,3,0);
  fp_mov(c,0,12);
  R(3)=0x8c05e9c0u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057f16u; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4cu;
  R(3)=0x8c01638au;
  R(5)+=0x44u;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057f2au; R(4)=R(14); f_8c01638a(c); }
  R(0)=0x8c057f78u;
  c->fr[7]=0x3F800000u;
  fp_ld(c,6,R(0));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(12));
  fp_unary(c,0,7);
  fp_mov(c,5,4);
  fp_arith(c,0,5,7);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c057f80;
  { fp_mov(c,3,5); goto L8c057f8a; }
L8c057f80:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c057f8a:;
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c057fce;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x44u;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x3cu;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x34u;
  R(5)+=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x2cu;
  R(6)+=0x38u;
  { uint32_t tg=R(3); c->pr=0x8c057fceu; R(4)=R(14); sh4_call(c,tg); }
L8c057fce:;
  R(0)=0x88u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  ST16(R(3),R(0));
  { f_8c057fe0(c); return; }
}
void f_8c057da0(SH4Ctx *c) {
  R(0)=0xa0u;
  R(3)=0x8c2d1d50u;
  R(2)=LD32(R(11)+R(0));
  ST32(R(3),R(2));
  R(14)=0x8c05428cu;
  { c->pr=0x8c057daeu;  f_8c05428c(c); }
  R(14)=R(0);
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(4)=R(8); if(k) goto L8c057dbe; }
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+20);
  ST32(R(3)+24,R(2));
L8c057dbe:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057dca;
  R(2)=LD32(R(14)+20);
  R(3)=LD32(R(14)+24);
  ST32(R(3)+20,R(2));
L8c057dca:;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057df4;
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(14);
  if(!c->t) goto L8c057de6;
  R(3)=LD32(R(14)+20);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+8,R(3));
L8c057de6:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c057df4;
  R(3)=LD32(R(14)+24);
  R(1)=LD32(R(14)+28);
  ST32(R(1)+12,R(3));
L8c057df4:;
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+20,R(13));
  R(2)=LD32(R(4)+12);
  ST32(R(14)+24,R(2));
  ST32(R(14)+28,R(4));
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c057e0c;
  { ST32(R(4)+8,R(14)); goto L8c057e10; }
L8c057e0c:;
  R(2)=LD32(R(4)+12);
  ST32(R(2)+20,R(14));
L8c057e10:;
  R(1)=0x8c2d1d50u;
  R(0)=0x10u;
  ST32(R(4)+12,R(14));
  R(3)=LD32(R(4)+16);
  R(3)+=0x1u;
  ST32(R(4)+16,R(3));
  R(9)=(int32_t)(int16_t)LD16(R(15));
  R(2)=LD32(R(1));
  R(3)=R(9);
  R(9)<<=2;
  R(9)+=R(3);
  R(9)<<=2;
  R(3)=0x1u;
  R(9)+=R(2);
  ST8(R(9)+R(0),R(3));
  R(3)=0x8c014ea0u;
  { c->pr=0x8c057e34u; R(4)=LD32(R(14)+32); f_8c014ea0(c); }
  ST32(R(9),R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(3)=LD32(R(15)+32);
  R(4)=R(0);
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c057e80;
  { R(2)=0x8u; goto L8c057e82; }
L8c057e80:;
  R(2)=0x1u;
L8c057e82:;
  R(0)=0x8c057f64u;
  ST32(R(14),R(2));
  R(1)=LD32(R(4)+4);
  ST32(R(14)+4,R(1));
  fp_ld(c,4,R(0));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(14));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057eaa;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1d50u;
  R(3)+=0xffffffffu;
  R(2)=R(3);
  R(3)<<=2;
  R(1)=LD32(R(0));
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(3)+8,R(9));
L8c057eaa:;
  R(4)=LD32(R(8)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  ST32(R(15)+8,R(3));
  { uint32_t k=c->t; R(4)=(int32_t)(int16_t)LD16(R(15)); if(k) goto L8c057ecc; }
  R(14)=R(4)&0xFFFF;
  R(2)=LD32(R(15)+8);
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(2);
  { R(14)=LD32(R(14)); goto L8c057ece; }
L8c057ecc:;
  R(14)=0x0u;
L8c057ece:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c057ed6;
  {  goto L8c057fce; }
L8c057ed6:;
  R(0)=0x8c057f6cu;
  fp_mov(c,3,14);
  fp_ld(c,12,R(0));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(12));
  R(0)=0x10u;
  R(14)=LD32(R(14)+32);
  fp_arith(c,0,3,0);
  R(3)=0x8c05e9c0u;
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057ef4u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x44u;
  fp_arith(c,0,3,0);
  fp_mov(c,0,12);
  R(3)=0x8c05e9c0u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057f16u; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4cu;
  R(3)=0x8c01638au;
  R(5)+=0x44u;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057f2au; R(4)=R(14); f_8c01638a(c); }
  R(0)=0x8c057f78u;
  c->fr[7]=0x3F800000u;
  fp_ld(c,6,R(0));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(12));
  fp_unary(c,0,7);
  fp_mov(c,5,4);
  fp_arith(c,0,5,7);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c057f80;
  { fp_mov(c,3,5); goto L8c057f8a; }
L8c057f80:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c057f8a:;
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c057fce;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x44u;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x3cu;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x34u;
  R(5)+=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x2cu;
  R(6)+=0x38u;
  { uint32_t tg=R(3); c->pr=0x8c057fceu; R(4)=R(14); sh4_call(c,tg); }
L8c057fce:;
  R(0)=0x88u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  ST16(R(3),R(0));
  { f_8c057fe0(c); return; }
}
void f_8c057e80(SH4Ctx *c) {
  R(2)=0x1u;
  R(0)=0x8c057f64u;
  ST32(R(14),R(2));
  R(1)=LD32(R(4)+4);
  ST32(R(14)+4,R(1));
  fp_ld(c,4,R(0));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(14));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c057eaa;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=0x8c2d1d50u;
  R(3)+=0xffffffffu;
  R(2)=R(3);
  R(3)<<=2;
  R(1)=LD32(R(0));
  R(3)+=R(2);
  R(3)<<=2;
  R(3)+=R(1);
  ST32(R(3)+8,R(9));
L8c057eaa:;
  R(4)=LD32(R(8)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  ST32(R(15)+8,R(3));
  { uint32_t k=c->t; R(4)=(int32_t)(int16_t)LD16(R(15)); if(k) goto L8c057ecc; }
  R(14)=R(4)&0xFFFF;
  R(2)=LD32(R(15)+8);
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(2);
  { R(14)=LD32(R(14)); goto L8c057ece; }
L8c057ecc:;
  R(14)=0x0u;
L8c057ece:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c057ed6;
  {  goto L8c057fce; }
L8c057ed6:;
  R(0)=0x8c057f6cu;
  fp_mov(c,3,14);
  fp_ld(c,12,R(0));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(12));
  R(0)=0x10u;
  R(14)=LD32(R(14)+32);
  fp_arith(c,0,3,0);
  R(3)=0x8c05e9c0u;
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057ef4u; fp_unary(c,0,4); f_8c05e9c0(c); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(12));
  R(0)=0x44u;
  fp_arith(c,0,3,0);
  fp_mov(c,0,12);
  R(3)=0x8c05e9c0u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,13,R(0)+R(12));
  fp_mov(c,4,13);
  fp_mov(c,5,13);
  { c->pr=0x8c057f16u; fp_unary(c,0,4); f_8c05e9c0(c); }
  R(0)=0x8u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4cu;
  R(3)=0x8c01638au;
  R(5)+=0x44u;
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c057f2au; R(4)=R(14); f_8c01638a(c); }
  R(0)=0x8c057f78u;
  c->fr[7]=0x3F800000u;
  fp_ld(c,6,R(0));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(12));
  fp_unary(c,0,7);
  fp_mov(c,5,4);
  fp_arith(c,0,5,7);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c057f80;
  { fp_mov(c,3,5); goto L8c057f8a; }
L8c057f80:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c057f8a:;
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c057fce;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x44u;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x3cu;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x34u;
  R(5)+=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x2cu;
  R(6)+=0x38u;
  { uint32_t tg=R(3); c->pr=0x8c057fceu; R(4)=R(14); sh4_call(c,tg); }
L8c057fce:;
  R(0)=0x88u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  ST16(R(3),R(0));
  { f_8c057fe0(c); return; }
}
void f_8c057f80(SH4Ctx *c) {
  fp_mov(c,2,4);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c057fce;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x44u;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x3cu;
  R(7)=R(15);
  R(3)=0x8c015ebcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x34u;
  R(5)+=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x2cu;
  R(6)+=0x38u;
  { uint32_t tg=R(3); c->pr=0x8c057fceu; R(4)=R(14); sh4_call(c,tg); }
L8c057fce:;
  R(0)=0x88u;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  ST16(R(3),R(0));
  { f_8c057fe0(c); return; }
}
void f_8c057fe0(SH4Ctx *c) {
  R(3)=LD32(R(15)+24);
  c->t=R(10)>=R(3);
  if(c->t) { f_8c057fea(c); return; }
  {  { f_8c057c16(c); return; } }
}
void f_8c057fea(SH4Ctx *c) {
  R(1)=LD32(R(15)+24);
  c->t=R(10)>=R(1);
  if(c->t) goto L8c057ff6;
  R(2)=(int32_t)(int8_t)LD8(R(10));
  c->t=(R(2)&R(2))==0;
  if(!c->t) { f_8c057fe0(c); return; }
L8c057ff6:;
  R(2)=0x8c2d1d50u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) { f_8c058000(c); return; }
  ST32(R(9)+8,R(13));
  { f_8c058000(c); return; }
}
void f_8c058000(SH4Ctx *c) {
  R(0)=LD32(R(15)+12);
  { f_8c058002(c); return; }
}
void f_8c058002(SH4Ctx *c) {
  R(15)+=0x50u;
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
void f_8c05801e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(5);
  ST8(R(15)+4,R(0));
  R(0)=0xa0u;
  R(5)=0x0u;
  ST8(R(15),R(6));
  R(14)=LD32(R(4)+4);
  R(14)=LD32(R(14));
  R(4)=LD32(R(14)+16);
  R(2)=LD32(R(4));
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(14)+R(0));
  ST32(R(15)+12,R(3));
  R(3)=0x8c082f80u;
  { c->pr=0x8c058042u; R(4)=LD32(R(14)+20); f_8c082f80(c); }
  R(2)=0x8c0835bau;
  { c->pr=0x8c058048u; R(4)=R(0); f_8c0835ba(c); }
  R(4)=(int32_t)(int8_t)LD8(R(15));
  R(5)=0x20u;
  R(6)=R(0);
  R(4)=R(4)&0xFF;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(c->t) goto L8c058080;
  { R(4)=0xffffffffu; goto L8c0580b4; }
L8c058080:;
  R(3)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c05808c;
  R(1)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c0580a2;
L8c05808c:;
  R(2)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c05809c;
  R(1)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c05809c;
  { R(4)+=0xffffffe0u; goto L8c0580a8; }
L8c05809c:;
  R(3)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c0580a6;
L8c0580a2:;
  { R(4)+=0xffffffc0u; goto L8c0580a8; }
L8c0580a6:;
  R(4)+=0xffffffe0u;
L8c0580a8:;
  R(2)=0x8c0c6484u;
  ST8(R(15),R(4));
  R(4)=(int32_t)(int8_t)LD8(R(15));
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(4)=R(4)&0xFF;
  R(4)+=R(3);
L8c0580b4:;
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c05812a;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(c->t) goto L8c05812a;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)<<=2;
  R(2)=LD32(R(15)+8);
  R(0)=R(0)&0xFF;
  R(5)=LD32(R(15)+12);
  R(6)<<=2;
  R(3)=R(0);
  R(0)<<=2;
  R(6)+=R(2);
  R(1)=LD32(R(6)+4);
  R(0)+=R(3);
  R(0)<<=2;
  c->t=(R(1)&R(1))==0;
  R(5)+=R(0);
  { uint32_t k=c->t; R(3)=LD32(R(5)); if(k) goto L8c058120; }
  { R(2)=0x8u; goto L8c058122; }
L8c058120:;
  R(2)=0x1u;
L8c058122:;
  ST32(R(3),R(2));
  R(2)=LD32(R(6)+4);
  R(3)=LD32(R(5));
  ST32(R(3)+4,R(2));
L8c05812a:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058080(SH4Ctx *c) {
  R(3)=0x61u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c05808c;
  R(1)=0x7au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c0580a2;
L8c05808c:;
  R(2)=0x41u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c05809c;
  R(1)=0x5au;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c05809c;
  { R(4)+=0xffffffe0u; goto L8c0580a8; }
L8c05809c:;
  R(3)=0xa0u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c0580a6;
L8c0580a2:;
  { R(4)+=0xffffffc0u; goto L8c0580a8; }
L8c0580a6:;
  R(4)+=0xffffffe0u;
L8c0580a8:;
  R(2)=0x8c0c6484u;
  ST8(R(15),R(4));
  R(4)=(int32_t)(int8_t)LD8(R(15));
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(4)=R(4)&0xFF;
  R(4)+=R(3);
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c05812a;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(c->t) goto L8c05812a;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(6)=(uint32_t)(int32_t)(int16_t)R(4);
  R(6)<<=2;
  R(2)=LD32(R(15)+8);
  R(0)=R(0)&0xFF;
  R(5)=LD32(R(15)+12);
  R(6)<<=2;
  R(3)=R(0);
  R(0)<<=2;
  R(6)+=R(2);
  R(1)=LD32(R(6)+4);
  R(0)+=R(3);
  R(0)<<=2;
  c->t=(R(1)&R(1))==0;
  R(5)+=R(0);
  { uint32_t k=c->t; R(3)=LD32(R(5)); if(k) goto L8c058120; }
  { R(2)=0x8u; goto L8c058122; }
L8c058120:;
  R(2)=0x1u;
L8c058122:;
  ST32(R(3),R(2));
  R(2)=LD32(R(6)+4);
  R(3)=LD32(R(5));
  ST32(R(3)+4,R(2));
L8c05812a:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058120(SH4Ctx *c) {
  R(2)=0x1u;
  ST32(R(3),R(2));
  R(2)=LD32(R(6)+4);
  R(3)=LD32(R(5));
  ST32(R(3)+4,R(2));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058132(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2d15b8u;
  R(8)=0x258u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(9)=0x8c0686b8u;
  R(14)=R(4);
  R(11)=0x8c2d1540u;
  R(8)+=R(4);
  R(10)=0x8c2d1810u;
  c->t=R(14)>=R(8);
  { uint32_t k=c->t; R(12)=0x1u; if(k) goto L8c05819e; }
L8c058158:;
  R(5)=0x0u;
  R(6)=0x14u;
  { uint32_t tg=R(9); c->pr=0x8c058160u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x0u;
  R(0)=R(13);
  ST32(R(14),R(12));
  R(14)+=0x14u;
  R(6)=0x14u;
  R(5)=R(3);
  ST32(R(10)+R(0),R(12));
  R(13)+=0x4u;
  ST32(R(11)+R(0),R(3));
  { uint32_t tg=R(9); c->pr=0x8c058176u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x0u;
  R(0)=R(13);
  ST32(R(14),R(12));
  R(14)+=0x14u;
  R(6)=0x14u;
  R(5)=R(3);
  ST32(R(10)+R(0),R(12));
  R(13)+=0x4u;
  ST32(R(11)+R(0),R(3));
  { uint32_t tg=R(9); c->pr=0x8c05818cu; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(14),R(12));
  R(3)=0x0u;
  R(14)+=0x14u;
  R(0)=R(13);
  c->t=R(14)>=R(8);
  ST32(R(10)+R(0),R(12));
  ST32(R(11)+R(0),R(3));
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c058158; }
L8c05819e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0581b0(SH4Ctx *c) {
  R(7)=0x8c2d1540u;
  R(6)=0x1eu;
  R(5)=0x0u;
L8c0581b6:;
  R(0)=R(5)&0xFF;
  R(0)<<=2;
  R(3)=LD32(R(7)+R(0));
  c->t=R(4)==R(3);
  if(c->t) goto L8c0581c8;
  R(5)+=0x1u;
  R(3)=R(5)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  if(!c->t) goto L8c0581b6;
L8c0581c8:;
  R(0)=R(5);
  {  return; }
}
void f_8c058200(SH4Ctx *c) {
  R(5)=0x8c2d1810u;
  R(6)=0x0u;
  R(7)=0x1eu;
  R(4)=R(6);
L8c058208:;
  R(0)=R(4)&0xFF;
  R(0)<<=2;
  R(3)=LD32(R(5)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05821a;
  R(0)=R(4)&0xFF;
  R(0)<<=2;
  { ST32(R(5)+R(0),R(6)); goto L8c058222; }
L8c05821a:;
  R(4)+=0x1u;
  R(3)=R(4)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(7);
  if(!c->t) goto L8c058208;
L8c058222:;
  R(0)=R(4);
  {  return; }
}
void f_8c058228(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c026bfcu;
  { c->pr=0x8c05823cu; R(10)=R(4); f_8c026bfc(c); }
  R(11)=0x8c2d1540u;
  R(6)=0x0u;
  R(9)=0x8c0686b8u;
  R(12)=0x0u;
  R(1)=0x8c2d1810u;
  R(13)=0x1u;
  R(14)=0x8c2d15b8u;
  R(7)=0x1eu;
  R(0)=R(12);
  R(6)+=R(11);
  R(4)=R(12);
L8c058252:;
  R(2)=LD32(R(6));
  c->t=R(10)==R(2);
  if(!c->t) goto L8c058268;
  R(6)=0x14u;
  ST32(R(1)+R(0),R(13));
  R(5)=0x0u;
  ST32(R(11)+R(0),R(12));
  { uint32_t tg=R(9); c->pr=0x8c058264u; R(4)=R(14); sh4_call(c,tg); }
  { ST32(R(14),R(13)); goto L8c058276; }
L8c058268:;
  R(4)+=0x1u;
  R(3)=R(4)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(7);
  R(14)+=0x14u;
  R(0)+=0x4u;
  { uint32_t k=!c->t; R(6)+=0x4u; if(k) goto L8c058252; }
L8c058276:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0582c0(SH4Ctx *c) {
  R(5)=0x400u;
  R(6)=0x8c2d1888u;
  R(5)+=R(6);
  R(4)=R(6);
  c->t=R(4)>=R(5);
  if(c->t) goto L8c0582d8;
L8c0582cc:;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0582cc;
L8c0582d8:;
  {  return; }
}
void f_8c0582dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c09d254u;
  R(9)=0x8c0ba304u;
  { c->pr=0x8c0582f6u; R(5)=R(9); f_8c09d254(c); }
  R(14)=R(0);
  R(0)=0x8c058374u;
  fp_ld(c,15,R(0));
  R(8)=0x8c2d1888u;
  R(11)=0x8c09cfecu;
  { c->pr=0x8c058304u; R(4)=R(14); f_8c09cfec(c); }
  c->fpul=R(0);
  c->t=(R(14)&R(14))==0;
  R(13)=0x1u;
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_st(c,3,R(8));
  { uint32_t k=c->t; R(12)=0x3au; if(k) goto L8c058346; }
L8c058314:;
  R(5)=R(9);
  { uint32_t tg=R(10); c->pr=0x8c05831au; R(4)=0x0u; sh4_call(c,tg); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c058346;
  R(3)=R(13);
  R(3)<<=2;
  R(3)+=R(8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(13)+=0x1u;
  { uint32_t tg=R(11); c->pr=0x8c05832eu; R(4)=R(14); sh4_call(c,tg); }
  c->fpul=R(0);
  R(3)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  c->t=(R(14)&R(14))==0;
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_st(c,3,R(2));
  {uint32_t v=R(12);R(3)-=1;ST8(R(3),v);}
  if(c->t) goto L8c058346;
  R(3)=0x100u;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c058314;
L8c058346:;
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
void f_8c058380(SH4Ctx *c) {
  R(5)=0x400u;
  R(6)=0x8c2d1c88u;
  R(5)+=R(6);
  R(4)=R(6);
  c->t=R(4)>=R(5);
  if(c->t) goto L8c058398;
L8c05838c:;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c05838c;
L8c058398:;
  {  return; }
}
void f_8c05839c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c09d254u;
  R(11)=0x8c0ba304u;
  { c->pr=0x8c0583b6u; R(5)=R(11); f_8c09d254(c); }
  R(14)=R(0);
  R(0)=0x8c058434u;
  fp_ld(c,15,R(0));
  R(8)=0x8c09cfecu;
  R(9)=0x8c2d1c88u;
  { c->pr=0x8c0583c4u; R(4)=R(14); f_8c09cfec(c); }
  c->fpul=R(0);
  c->t=(R(14)&R(14))==0;
  R(13)=0x1u;
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_st(c,3,R(9));
  { uint32_t k=c->t; R(10)=0x3au; if(k) goto L8c058406; }
L8c0583d4:;
  R(5)=R(11);
  { uint32_t tg=R(12); c->pr=0x8c0583dau; R(4)=0x0u; sh4_call(c,tg); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c058406;
  R(3)=R(13);
  R(3)<<=2;
  R(3)+=R(9);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(13)+=0x1u;
  { uint32_t tg=R(8); c->pr=0x8c0583eeu; R(4)=R(14); sh4_call(c,tg); }
  c->fpul=R(0);
  R(3)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  c->t=(R(14)&R(14))==0;
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_st(c,3,R(2));
  {uint32_t v=R(10);R(3)-=1;ST8(R(3),v);}
  if(c->t) goto L8c058406;
  R(3)=0x100u;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c0583d4;
L8c058406:;
  R(1)=0x8c0c6494u;
  ST32(R(1),R(13));
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
void f_8c058440(SH4Ctx *c) {
  R(3)=0x2u;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c05844a;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05844e;
L8c05844a:;
  { R(0)=0x0u; return; }
L8c05844e:;
  R(2)=0x8c123cc8u;
  R(0)=R(4);
  R(0)+=0xffffffffu;
  R(3)=LD32(R(2));
  R(0)<<=2;
  R(0)<<=2;
  R(0)+=R(3);
  {  return; }
}
void f_8c058460(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c058466u;  f_8c058440(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(0);
  { R(0)=LD32(R(4)); return; }
}
void f_8c05846e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c058476u; ST32(R(15),R(5)); f_8c058440(c); }
  R(2)=LD32(R(15));
  R(4)=R(0);
  R(0)=0x1u;
  ST32(R(4),R(2));
  ST8(R(4)+12,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058488(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x2u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
L8c058496:;
  { c->pr=0x8c05849au; R(4)=R(13); f_8c058440(c); }
  R(4)=R(0);
  R(0)=R(14);
  R(13)+=0x1u;
  ST32(R(4)+4,R(14));
  ST8(R(4)+12,R(0));
  { c->pr=0x8c0584a8u; R(4)=R(13); f_8c058440(c); }
  R(13)+=0x1u;
  R(4)=R(0);
  c->t=(int32_t)R(13)>(int32_t)R(12);
  ST32(R(4)+4,R(14));
  R(0)=R(14);
  { uint32_t k=!c->t; ST8(R(4)+12,R(0)); if(k) goto L8c058496; }
  R(2)=0x8c123cccu;
  R(4)=LD32(R(2));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0584c2;
  { R(13)=LD32(R(4)+4); goto L8c0584c4; }
L8c0584c2:;
  R(13)=0x0u;
L8c0584c4:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0584f8;
L8c0584c8:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0584e8;
  R(5)=LD32(R(4));
  R(0)=0x79u;
  R(14)=LD32(R(5)+4);
  R(14)=LD32(R(14)+16);
  R(14)=LD32(R(14));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0584e8;
  R(0)=0x74u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0584e8;
  { c->pr=0x8c0584e8u; R(4)=LD32(R(14)+R(0)); f_8c05846e(c); }
L8c0584e8:;
  R(4)=R(13);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0584f2;
  { R(13)=LD32(R(4)+4); goto L8c0584f4; }
L8c0584f2:;
  R(13)=0x0u;
L8c0584f4:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0584c8;
L8c0584f8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c758cu;
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c058566;
  R(2)=0x8c064e90u;
  R(5)=0x8c0ba32cu;
  R(6)=0x80u;
  { c->pr=0x8c058562u; R(4)=0x20u; f_8c064e90(c); }
  {  goto L8c058570; }
L8c058566:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0ba32cu;
  R(6)=0x80u;
  { c->pr=0x8c058570u; R(4)=0x20u; f_8c0199c4(c); }
L8c058570:;
  R(1)=0x8c123cc8u;
  R(3)=R(0);
  { c->pr=0x8c058578u; ST32(R(1),R(0)); f_8c058488(c); }
  R(0)=0x8c058620u;
  R(11)=0x8c036ceeu;
  fp_ld(c,14,R(0));
  R(0)=0x8c058624u;
  fp_ld(c,15,R(0));
  R(14)=0x1u;
  R(12)=0x8c079ea0u;
  R(10)=0x2u;
L8c058588:;
  { c->pr=0x8c05858cu; R(4)=R(14); f_8c058440(c); }
  R(4)=R(0);
  R(5)=0x67u;
  R(13)=R(0);
  { uint32_t tg=R(11); c->pr=0x8c058596u; R(4)+=0x8u; sh4_call(c,tg); }
  fp_mov(c,4,15);
  fp_mov(c,5,14);
  { uint32_t tg=R(12); c->pr=0x8c05859eu; R(4)=LD32(R(13)+8); sh4_call(c,tg); }
  R(14)+=0x1u;
  { c->pr=0x8c0585a4u; R(4)=R(14); f_8c058440(c); }
  R(4)=R(0);
  R(5)=0x67u;
  R(13)=R(0);
  { uint32_t tg=R(11); c->pr=0x8c0585aeu; R(4)+=0x8u; sh4_call(c,tg); }
  fp_mov(c,4,15);
  fp_mov(c,5,14);
  { uint32_t tg=R(12); c->pr=0x8c0585b6u; R(4)=LD32(R(13)+8); sh4_call(c,tg); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>(int32_t)R(10);
  if(!c->t) goto L8c058588;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c046360u;
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c046360(c); return; } }
}
void f_8c0585d0(SH4Ctx *c) {
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0585de;
  R(3)=LD32(R(4)+4);
  R(4)=LD32(R(3)+16);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c058640;
L8c0585de:;
  { R(0)=0x0u; return; }
L8c058640:;
  R(0)=0x1u;
  {  return; }
}
void f_8c058646(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff6cu;
  R(15)+=R(0);
  { c->pr=0x8c058656u;  f_8c058440(c); }
  R(12)=R(0);
  R(13)=LD32(R(12));
  R(6)=R(15);
  R(5)=R(15);
  R(2)=0x8c015e64u;
  R(7)=R(15);
  R(14)=LD32(R(13)+36);
  R(5)+=0x20u;
  R(7)+=0x8u;
  R(6)+=0x14u;
  { c->pr=0x8c05866eu; R(4)=R(14); f_8c015e64(c); }
  R(3)=0x8c0685b4u;
  R(4)=R(15);
  R(6)=0x68u;
  R(5)=R(14);
  { c->pr=0x8c05867au; R(4)+=0x2cu; f_8c0685b4(c); }
  R(0)=0x14u;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  fp_unary(c,0,3);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  R(4)=R(15);
  R(7)+=0x14u;
  fp_unary(c,0,3);
  R(5)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  R(6)+=0x8u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c0586acu; R(4)+=0x2cu; sh4_call(c,tg); }
  R(2)=0x8c0151c8u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x2cu;
  { c->pr=0x8c0586b8u; R(4)+=0x2cu; f_8c0151c8(c); }
  R(3)=0x8c079e62u;
  R(5)=R(15);
  R(14)=LD32(R(12)+8);
  R(5)+=0x2cu;
  { c->pr=0x8c0586c4u; R(4)=R(14); f_8c079e62(c); }
  R(2)=0x8c079eb6u;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c0586d0u; R(4)=R(14); f_8c079eb6(c); }
  R(3)=LD32(R(13)+4);
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  R(2)=LD32(R(3)+16);
  R(1)=LD32(R(2)+12);
  fp_ld(c,4,R(0)+R(1));
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c0586e8;
  R(2)=LD32(R(13)+4);
  R(3)=LD32(R(2)+16);
  R(1)=LD32(R(3)+4);
  fp_ld(c,4,R(0)+R(1));
L8c0586e8:;
  fp_ld(c,3,R(15));
  R(13)=0x8c123b08u;
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c058760;
  R(0)=0x4u;
  R(3)=0x8c079ea0u;
  fp_ld(c,5,R(0)+R(15));
  { c->pr=0x8c0586fau; R(4)=R(14); f_8c079ea0(c); }
  R(0)=0xd6u;
  R(6)=R(14);
  R(3)=0x8c079f00u;
  R(5)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(0)+=0xfffffffeu;
  { c->pr=0x8c058708u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c079f00(c); }
  R(0)=0xd6u;
  R(6)=R(14);
  R(3)=0x8c036e62u;
  R(5)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(0)+=0xfffffffeu;
  { c->pr=0x8c058716u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c036e62(c); }
  {  goto L8c05876e; }
L8c058760:;
  R(0)=0xd6u;
  R(6)=R(14);
  R(3)=0x8c079f00u;
  R(5)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(0)+=0xfffffffeu;
  { c->pr=0x8c05876eu; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c079f00(c); }
L8c05876e:;
  R(1)=0x94u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05877c(SH4Ctx *c) {
  R(3)=0x8c0c59ccu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05880c;
  R(1)=0x8c123cccu;
  R(13)=0x8c04b232u;
  R(14)=LD32(R(1));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)=0x1u; if(k) goto L8c05880c; }
L8c05879a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c058806;
  R(5)=LD32(R(14));
  R(0)=0x74u;
  R(2)=LD32(R(5)+4);
  R(3)=LD32(R(2)+16);
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(12))==0;
  { uint32_t k=c->t; R(0)=0x79u; if(k) goto L8c0587b8; }
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4)+16);
  { R(4)=LD32(R(4)+12); goto L8c0587be; }
L8c0587b8:;
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4)+16);
  R(4)=LD32(R(4)+4);
L8c0587be:;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0587cc;
  R(0)=0x74u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c058806;
L8c0587cc:;
  R(0)=0x74u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(14)); if(k) goto L8c058800; }
  { R(5)=0x1u; goto L8c058802; }
L8c058800:;
  R(5)=0x0u;
L8c058802:;
  { uint32_t tg=R(13); c->pr=0x8c058806u;  sh4_call(c,tg); }
L8c058806:;
  R(14)=LD32(R(14)+4);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05879a;
L8c05880c:;
  R(14)=0x2u;
L8c05880e:;
  { c->pr=0x8c058812u; R(4)=R(14); f_8c058440(c); }
  R(4)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05881e;
  { c->pr=0x8c05881eu; R(4)=R(14); f_8c058646(c); }
L8c05881e:;
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>0;
  if(c->t) goto L8c05880e;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058840(SH4Ctx *c) {
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0c651cu;
  if(!c->t) goto L8c05884e;
  fp_st(c,3,R(14));
L8c05884e:;
  R(3)=0x8c0c6518u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c05885c;
  R(1)=0x8c039d08u;
  { c->pr=0x8c05885cu;  f_8c039d08(c); }
L8c05885c:;
  R(0)=0x8c05888cu;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(0));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0588a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(6);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(6)=R(13)&0xFF;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(5);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=R(4);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05a172u;
  { c->pr=0x8c0588c0u; R(4)=R(10); f_8c05a172(c); }
  R(5)=R(0);
  R(4)=R(5)&0xFF;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  R(8)=R(13)&0xFF;
  { uint32_t k=!c->t; R(8)<<=2; if(k) goto L8c0588da; }
  R(2)=0x8c047e48u;
  R(5)=R(9);
  { c->pr=0x8c0588d6u; R(4)=R(10); f_8c047e48(c); }
  {  goto L8c058934; }
L8c0588da:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05893e;
  R(5)=R(9);
  { c->pr=0x8c0588e4u; R(4)=R(10); f_8c058ace(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05893e;
  R(11)=LD32(R(4)+4);
  R(14)=LD32(R(4));
  c->t=(int32_t)R(11)>0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c05891c; }
  R(2)=R(13)&0xFF;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0588fcu; R(4)=R(14); f_8c058c66(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(1)>(int32_t)R(0);
  if(!c->t) goto L8c05891c;
L8c058904:;
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  { uint32_t k=c->t; R(14)+=0x2u; if(k) goto L8c05893e; }
  R(3)=R(13)&0xFF;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c058914u; R(4)=R(14); f_8c058c66(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(1)>(int32_t)R(0);
  if(c->t) goto L8c058904;
L8c05891c:;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  if(c->t) goto L8c05893e;
  R(13)=R(13)&0xFF;
  { c->pr=0x8c058926u; R(4)=R(14); f_8c058c66(c); }
  R(0)=R(0)&0xFFFF;
  c->t=R(13)==R(0);
  if(!c->t) goto L8c05893e;
  R(3)=0x8c047e48u;
  R(5)=R(9);
  { c->pr=0x8c058934u; R(4)=R(10); f_8c047e48(c); }
L8c058934:;
  R(4)=R(0);
  R(4)=LD32(R(4));
  R(4)+=R(8);
  { R(0)=LD32(R(4)); goto L8c058940; }
L8c05893e:;
  R(0)=0x0u;
L8c058940:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058952(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c086d76u;
  R(13)=R(4);
  { c->pr=0x8c05896cu; R(9)=R(5); f_8c086d76(c); }
  R(4)=R(0);
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)=R(4);
  R(11)=0x8c05a46cu;
  R(10)=0x0u;
  c->t=(int32_t)R(3)>0;
  R(14)=R(10);
  { uint32_t k=c->t; ST32(R(15)+4,R(4)); if(k) goto L8c058982; }
  {  goto L8c058a60; }
L8c058982:;
  R(3)=0x8c086d6cu;
  R(5)=R(14);
  { c->pr=0x8c05898au; R(4)=R(13); f_8c086d6c(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05899c;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0589b6;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c058a20;
  {  goto L8c058a56; }
L8c05899c:;
  R(2)=0x8c085660u;
  R(5)=R(14);
  R(6)=R(15);
  { c->pr=0x8c0589a6u; R(4)=R(13); f_8c085660(c); }
  R(5)=R(9);
  { uint32_t tg=R(11); c->pr=0x8c0589acu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c058a56;
  {  goto L8c058a4a; }
L8c0589b6:;
  R(2)=0x8c0858dau;
  R(5)=R(14);
  { c->pr=0x8c0589beu; R(4)=R(13); f_8c0858da(c); }
  R(8)=R(0);
  R(3)=(uint32_t)(int32_t)(int16_t)R(8);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(12)=R(10); if(k) goto L8c058a56; }
L8c0589c8:;
  R(3)=0x8c0858e6u;
  R(5)=R(14);
  R(6)=R(12);
  { c->pr=0x8c0589d2u; R(4)=R(13); f_8c0858e6(c); }
  R(5)=R(9);
  ST32(R(15),R(0));
  { uint32_t tg=R(11); c->pr=0x8c0589dau; R(4)=R(0); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c058a4a;
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(8);
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0589c8;
  {  goto L8c058a56; }
L8c058a20:;
  R(3)=0x8c085aa2u;
  R(5)=R(14);
  { c->pr=0x8c058a28u; R(4)=R(13); f_8c085aa2(c); }
  R(4)=R(0);
  R(8)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(8)>0;
  { uint32_t k=!c->t; R(12)=R(10); if(k) goto L8c058a56; }
L8c058a32:;
  R(3)=0x8c085ae0u;
  R(5)=R(14);
  R(6)=R(12);
  { c->pr=0x8c058a3cu; R(4)=R(13); f_8c085ae0(c); }
  R(5)=R(9);
  ST32(R(15),R(0));
  { uint32_t tg=R(11); c->pr=0x8c058a44u; R(4)=R(0); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c058a4e;
L8c058a4a:;
  { R(0)=LD32(R(15)); goto L8c058a62; }
L8c058a4e:;
  R(12)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(3)>=(int32_t)R(8);
  if(!c->t) goto L8c058a32;
L8c058a56:;
  R(2)=LD32(R(15)+4);
  R(14)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c058982;
L8c058a60:;
  R(0)=0x0u;
L8c058a62:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058a76(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff84u;
  R(0)=R(6);
  R(1)=0x25u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  R(0)=LD32(R(0)+4);
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c058a92;
  { R(0)=0x1u; goto L8c058a94; }
L8c058a92:;
  R(0)=0x0u;
L8c058a94:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c058aa2;
  R(15)+=0x7cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c058aa2:;
  R(2)=0x8c0153d8u;
  R(4)=R(15);
  { c->pr=0x8c058aaau; R(4)+=0x14u; f_8c0153d8(c); }
  R(6)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(4)=R(15);
  R(6)=LD32(R(6)+36);
  R(5)+=0x14u;
  R(6)+=0x58u;
  { c->pr=0x8c058abcu; R(4)+=0x8u; f_8c014eaa(c); }
  R(3)=0x8c0794a0u;
  R(4)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c058ac6u; R(4)+=0x8u; f_8c0794a0(c); }
  R(15)+=0x7cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058ace(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c058ae8;
  R(5)=LD32(R(15));
  R(3)=0x8c048188u;
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+20);
  { R(15)+=0x4u; { f_8c048188(c); return; } }
L8c058ae8:;
  R(0)=0x0u;
  { R(15)+=0x4u; return; }
}
void f_8c058aee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=R(4);
  R(14)=LD32(R(12)+4);
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c058b0a;
  {  goto L8c058bea; }
L8c058b0a:;
  R(5)=LD32(R(12)+4);
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(5));
  R(4)=LD32(R(5)+4);
  R(5)=LD32(R(5)+20);
  R(5)+=0x10u;
  R(2)=LD32(R(5));
  R(4)-=R(2);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c058b20;
  R(4)+=0x1fu;
L8c058b20:;
  R(3)=0xfffffffbu;
  R(10)=0x8c047e8cu;
  R(4)=sh4_shad(R(4),R(3));
  R(5)=R(12);
  ST16(R(15),R(4));
  { c->pr=0x8c058b2eu; R(4)=0x0u; f_8c047e8c(c); }
  R(11)=(int32_t)(int16_t)LD16(R(15));
  R(4)=R(0);
  R(13)=0x8c048160u;
  R(11)<<=2;
  c->t=R(11)>>31;R(11)<<=1;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c058b80;
  R(2)=LD32(R(4));
  R(5)=R(14);
  R(2)+=R(11);
  ST32(R(15),R(2));
  R(6)=LD32(R(2));
  { R(4)=0x0u; goto L8c058b86; }
L8c058b80:;
  R(6)=0x0u;
  R(5)=R(14);
  R(4)=R(6);
L8c058b86:;
  { uint32_t tg=R(13); c->pr=0x8c058b8au;  sh4_call(c,tg); }
  R(5)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c058b90u; R(4)=0x2u; sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(14); if(k) goto L8c058ba4; }
  R(3)=LD32(R(4));
  R(3)+=R(11);
  ST32(R(15),R(3));
  R(6)=LD32(R(3));
  {  goto L8c058ba6; }
L8c058ba4:;
  R(6)=0x0u;
L8c058ba6:;
  { uint32_t tg=R(13); c->pr=0x8c058baau; R(4)=0x2u; sh4_call(c,tg); }
  R(5)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c058bb0u; R(4)=0x3u; sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(14); if(k) goto L8c058bc4; }
  R(3)=LD32(R(4));
  R(3)+=R(11);
  ST32(R(15),R(3));
  R(6)=LD32(R(3));
  {  goto L8c058bc6; }
L8c058bc4:;
  R(6)=0x0u;
L8c058bc6:;
  { uint32_t tg=R(13); c->pr=0x8c058bcau; R(4)=0x3u; sh4_call(c,tg); }
  R(5)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c058bd0u; R(4)=0x1u; sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(14); if(k) goto L8c058be4; }
  R(3)=LD32(R(4));
  R(11)+=R(3);
  R(6)=R(11);
  ST32(R(15),R(11));
  { R(6)=LD32(R(6)); goto L8c058be6; }
L8c058be4:;
  R(6)=0x0u;
L8c058be6:;
  { uint32_t tg=R(13); c->pr=0x8c058beau; R(4)=0x1u; sh4_call(c,tg); }
L8c058bea:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058bfa(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(4)+4);
  R(4)=R(0)&0xFFFF;
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(0)=R(0)&0xFFFF;
  R(4)-=R(0);
  { R(0)=R(4); return; }
}
void f_8c058c08(SH4Ctx *c) {
  R(5)=R(4);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(4));
  R(6)=0x8u;
  R(3)=0x8c09d048u;
  R(5)=LD32(R(5)+4);
  R(7)=0x8c058bfau;
  { R(15)+=0x4u; { f_8c09d048(c); return; } }
}
void f_8c058c1a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=LD32(R(4));
  R(14)=0x0u;
  R(7)=R(14);
  R(3)=R(5);
  ST32(R(15),R(5));
  R(6)=LD32(R(4)+4);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(6)+=0xfffffff8u;
  c->t=R(5)>=R(6);
  { uint32_t k=c->t; R(1)=0xffffffffu; if(k) goto L8c058c56; }
L8c058c38:;
  R(0)=(int32_t)(int16_t)LD16(R(5)+4);
  R(3)=R(7)&0xFFFF;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c058c4e;
  R(0)=R(7);
  ST16(R(6)+4,R(0));
  R(6)=R(5);
  R(14)=R(1);
  { R(6)+=0xfffffff8u; goto L8c058c50; }
L8c058c4e:;
  R(5)+=0x8u;
L8c058c50:;
  c->t=R(5)>=R(6);
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c058c38; }
L8c058c56:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c058c60;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c058c08(c); return; } }
L8c058c60:;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058c66(SH4Ctx *c) {
  { R(0)=(int32_t)(int16_t)LD16(R(4)); return; }
}
void f_8c058ca0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c047e8cu;
  { c->pr=0x8c058caau; ST32(R(15),R(5)); f_8c047e8c(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c058cb8;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c058cb8:;
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+4);
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(5));
  R(6)=LD32(R(5)+20);
  R(2)=LD32(R(5)+4);
  R(6)+=0x10u;
  R(3)=LD32(R(6));
  R(2)-=R(3);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c058cd0;
  R(2)+=0x1fu;
L8c058cd0:;
  R(3)=0xfffffffbu;
  R(4)=LD32(R(4));
  R(2)=sh4_shad(R(2),R(3));
  R(5)=R(2);
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(4)+=R(5);
  R(0)=LD32(R(4));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058cb8(SH4Ctx *c) {
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+4);
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(5));
  R(6)=LD32(R(5)+20);
  R(2)=LD32(R(5)+4);
  R(6)+=0x10u;
  R(3)=LD32(R(6));
  R(2)-=R(3);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c058cd0;
  R(2)+=0x1fu;
L8c058cd0:;
  R(3)=0xfffffffbu;
  R(4)=LD32(R(4));
  R(2)=sh4_shad(R(2),R(3));
  R(5)=R(2);
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(4)+=R(5);
  R(0)=LD32(R(4));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058ce8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c047e48u;
  ST16(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c058cf6u; R(5)=R(6); f_8c047e48(c); }
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(4)=R(0);
  R(4)=LD32(R(4));
  R(2)=R(2)&0xFFFF;
  R(2)<<=2;
  R(4)+=R(2);
  R(0)=LD32(R(4));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058d0c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c047e48u;
  R(0)=R(5);
  ST16(R(15)+4,R(0));
  ST32(R(15)+8,R(6));
  ST32(R(15),R(7));
  { c->pr=0x8c058d1eu; R(5)=LD32(R(15)+8); f_8c047e48(c); }
  R(4)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=LD32(R(4));
  R(0)=R(0)&0xFFFF;
  R(3)=LD32(R(15));
  R(0)<<=2;
  R(4)+=R(0);
  ST32(R(4),R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058d60(SH4Ctx *c) {
  R(1)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c058d78;
  R(3)=0x8c064e90u;
  R(5)=0x8c0ba380u;
  R(6)=0x211u;
  { c->pr=0x8c058d74u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c058d82; }
L8c058d78:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0ba380u;
  R(6)=0x211u;
  { c->pr=0x8c058d82u; R(4)=0xcu; f_8c0199c4(c); }
L8c058d82:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058de0(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c058df8;
  R(3)=0x8c064e90u;
  R(5)=0x8c0ba380u;
  R(6)=0x227u;
  { c->pr=0x8c058df4u; R(4)=0x4u; f_8c064e90(c); }
  {  goto L8c058e02; }
L8c058df8:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0ba380u;
  R(6)=0x227u;
  { c->pr=0x8c058e02u; R(4)=0x4u; f_8c0199c4(c); }
L8c058e02:;
  R(2)=0x0u;
  R(4)=R(0);
  ST32(R(4),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c058e0e(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c058e26;
  R(3)=0x8c064e90u;
  R(5)=0x8c0ba380u;
  R(6)=0x234u;
  { c->pr=0x8c058e22u; R(4)=0x8u; f_8c064e90(c); }
  {  goto L8c058e30; }
L8c058e26:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0ba380u;
  R(6)=0x234u;
  { c->pr=0x8c058e30u; R(4)=0x8u; f_8c0199c4(c); }
L8c058e30:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058e60(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c058e78;
  R(3)=0x8c064e90u;
  R(5)=0x8c0ba380u;
  R(6)=0x23eu;
  { c->pr=0x8c058e74u; R(4)=0x8u; f_8c064e90(c); }
  {  goto L8c058e82; }
L8c058e78:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0ba380u;
  R(6)=0x23eu;
  { c->pr=0x8c058e82u; R(4)=0x8u; f_8c0199c4(c); }
L8c058e82:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058e88(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c0ba380u;
  R(2)=0x8c064eb8u;
  R(6)=0x248u;
  ST32(R(15),R(4));
  { c->pr=0x8c058e98u; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058ea0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c0ba380u;
  R(2)=0x8c064eb8u;
  R(6)=0x251u;
  ST32(R(15),R(4));
  { c->pr=0x8c058eb0u; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058ee0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c0ba380u;
  R(2)=0x8c064eb8u;
  R(6)=0x25au;
  ST32(R(15),R(4));
  { c->pr=0x8c058ef0u; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058ef8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c0ba380u;
  R(2)=0x8c064eb8u;
  R(6)=0x263u;
  ST32(R(15),R(4));
  { c->pr=0x8c058f08u; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058f10(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c0ba380u;
  R(2)=0x8c064eb8u;
  R(6)=0x269u;
  ST32(R(15),R(4));
  { c->pr=0x8c058f20u; R(4)=R(15); f_8c064eb8(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c058f60(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c058f64(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c058f68(SH4Ctx *c) {
  { R(0)=LD32(R(5)); return; }
}
void f_8c058f6c(SH4Ctx *c) {
  R(0)=R(4);
  { R(0)+=0x2u; return; }
}
void f_8c058f72(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  R(5)=R(5)&0xFF;
  R(3)=0x0u;
  ST8(R(15)+4,R(0));
  c->t=(R(5)&R(5))==0;
  R(14)=R(4);
  ST32(R(15)+8,R(7));
  R(13)=LD32(R(15)+24);
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(13)=R(13)&0xFFFF;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c058faa; }
  R(1)=R(15);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=0x24u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(6)=LD32(R(15)+16);
  R(5)=R(0);
  { c->pr=0x8c058fa6u; R(4)=R(14); f_8c0591e0(c); }
  { R(15)+=0x8u; goto L8c058fd4; }
L8c058faa:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=0x2u;
  R(3)=0xffu;
  R(6)=R(0);
  R(6)+=R(3);
  { c->pr=0x8c058fb8u; R(4)=R(14); f_8c0588a0(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c058fd4;
  R(2)=R(15);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=0x24u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+36);
  R(7)=LD32(R(15)+20);
  { c->pr=0x8c058fd2u; R(4)=R(14); f_8c058fe4(c); }
  R(15)+=0xcu;
L8c058fd4:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+24);
  ST16(R(2),R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c058fe4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=0x40u;
  R(10)=R(4);
  R(3)=0x8c047f20u;
  ST32(R(15)+16,R(5));
  ST32(R(15)+20,R(6));
  ST32(R(15)+12,R(7));
  R(12)=LD32(R(15)+R(0));
  R(0)=LD32(R(10)+4);
  ST32(R(15),R(0));
  R(0)=LD32(R(0)+4);
  R(4)=LD32(R(15));
  R(0)=LD32(R(0)+32);
  R(0)&=0x8u;
  R(9)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c059016u; R(4)=LD32(R(4)+20); sh4_call(c,tg); }
  R(3)=0x8c055c1au;
  R(8)=R(0)&0xFF;
  R(4)=LD32(R(10)+4);
  { c->pr=0x8c059020u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(5)=R(0);
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4));
  { R(13)=R(4); goto L8c0590d2; }
L8c05902a:;
  R(2)=LD32(R(12));
  R(3)=LD32(R(15)+60);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c059036;
  {  goto L8c059196; }
L8c059036:;
  R(4)=R(13);
  R(14)=LD32(R(4));
  c->t=R(10)==R(14);
  if(c->t) goto L8c0590d0;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(11))==0;
  if(c->t) goto L8c059080;
  { R(0)=0x1u; goto L8c059082; }
L8c059080:;
  R(0)=0x0u;
L8c059082:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0590d0;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0590a2;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15)+8,R(2)); if(k) goto L8c0590a2; }
  R(3)=0x8c047f20u;
  { c->pr=0x8c05909cu; R(4)=LD32(R(15)+8); f_8c047f20(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0590d0;
L8c0590a2:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0590b0;
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  R(0)=LD32(R(0)+32);
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c0590d0;
L8c0590b0:;
  R(0)=0x38u;
  R(5)=LD32(R(15)+20);
  R(7)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=R(14);
  { c->pr=0x8c0590bcu; R(4)=LD32(R(15)+16); f_8c0592c0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0590d0;
  R(3)=LD32(R(12));
  R(3)+=0x1u;
  ST32(R(12),R(3));
  R(3)+=0xffffffffu;
  R(0)=LD32(R(15)+12);
  R(3)<<=2;
  ST32(R(3)+R(0),R(14));
L8c0590d0:;
  R(13)=LD32(R(13)+4);
L8c0590d2:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(11)=0x4u; if(k) goto L8c05902a; }
  R(2)=LD32(R(12));
  R(3)=LD32(R(15)+60);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c059196;
  R(3)=0x8c055c1au;
  R(4)=LD32(R(10)+4);
  { c->pr=0x8c0590e8u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=R(0);
  R(5)=LD32(R(4)+4);
  R(3)=0x8c055c1au;
  R(5)=LD32(R(5)+44);
  ST32(R(15),R(5));
  R(4)=LD32(R(10)+4);
  { c->pr=0x8c0590f8u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=R(0);
  R(5)=LD32(R(4)+4);
  { R(5)=LD32(R(5)+40); goto L8c05918c; }
L8c059100:;
  R(4)=R(10);
  R(14)=LD32(R(4));
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  { R(13)=R(4); goto L8c05917c; }
L8c05910c:;
  R(2)=LD32(R(12));
  R(3)=LD32(R(15)+60);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c059196;
  R(4)=R(13);
  R(14)=LD32(R(4));
  R(1)=0x25u;
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(11))==0;
  if(c->t) goto L8c05912a;
  { R(0)=0x1u; goto L8c05912c; }
L8c05912a:;
  R(0)=0x0u;
L8c05912c:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05917a;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c05914c;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(2)); if(k) goto L8c05914c; }
  R(3)=0x8c047f20u;
  { c->pr=0x8c059146u; R(4)=LD32(R(15)+4); f_8c047f20(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05917a;
L8c05914c:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c05915a;
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  R(0)=LD32(R(0)+32);
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c05917a;
L8c05915a:;
  R(0)=0x38u;
  R(5)=LD32(R(15)+20);
  R(7)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=R(14);
  { c->pr=0x8c059166u; R(4)=LD32(R(15)+16); f_8c0592c0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05917a;
  R(3)=LD32(R(12));
  R(3)+=0x1u;
  ST32(R(12),R(3));
  R(3)+=0xffffffffu;
  R(0)=LD32(R(15)+12);
  R(3)<<=2;
  ST32(R(3)+R(0),R(14));
L8c05917a:;
  R(13)=LD32(R(13)+4);
L8c05917c:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c05910c;
  R(3)=LD32(R(15));
  R(5)=R(10);
  R(5)+=0x4u;
  R(4)=R(10);
  R(3)+=0xffffffffu;
  ST32(R(15),R(3));
L8c05918c:;
  R(2)=LD32(R(15));
  R(3)=0x0u;
  c->t=R(2)>R(3);
  { uint32_t k=c->t; R(10)=R(5); if(k) goto L8c059100; }
L8c059196:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0591e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(4);
  R(0)=R(7);
  R(5)=R(5)&0xFF;
  ST32(R(15)+4,R(6));
  ST16(R(15)+8,R(0));
  R(4)=LD32(R(13)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(14)=LD32(R(4)+R(0));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; ST16(R(15),R(5)); if(k) goto L8c059212; }
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(14);
  { R(4)=LD32(R(4)); goto L8c059214; }
L8c059212:;
  R(4)=0x0u;
L8c059214:;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c059220;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c05924c;
L8c059220:;
  R(4)=LD32(R(13)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(14)=LD32(R(4)+R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05923e;
  R(4)=(int32_t)(int16_t)LD16(R(15));
  R(4)=R(4)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(14);
  { R(4)=LD32(R(4)+4); goto L8c059240; }
L8c05923e:;
  R(4)=0x0u;
L8c059240:;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05927c;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c05927c;
L8c05924c:;
  R(2)=0x8c09341au;
  { c->pr=0x8c059252u; R(4)=LD32(R(14)+4); f_8c09341a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05927c;
  R(2)=0x8c0932dcu;
  { c->pr=0x8c05925eu;  f_8c0932dc(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c05927c;
  R(2)=LD32(R(15)+28);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  R(2)=R(0);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+36);
  R(7)=LD32(R(15)+16);
  { c->pr=0x8c05927au; R(4)=R(13); f_8c058fe4(c); }
  R(15)+=0xcu;
L8c05927c:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0592c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(6);
  R(0)=LD32(R(13)+4);
  R(1)=0x25u;
  R(9)=R(5);
  R(0)=LD32(R(0)+4);
  R(8)=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  { uint32_t k=c->t; R(14)=R(7); if(k) goto L8c0592ec; }
  { R(0)=0x1u; goto L8c0592ee; }
L8c0592ec:;
  R(0)=0x0u;
L8c0592ee:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0592f8;
  {  goto L8c0595ac; }
L8c0592f8:;
  R(2)=0x0u;
  R(5)=R(13);
  R(3)=R(2);
  R(11)=R(3);
  ST32(R(15)+12,R(2));
  ST32(R(15),R(3));
  { c->pr=0x8c059308u; R(4)=0x2u; f_8c058ace(c); }
  R(2)=0x8c05a18au;
  R(12)=R(0);
  R(10)=0x8c079680u;
  R(5)=R(13);
  { c->pr=0x8c059314u; R(4)=0x2u; f_8c05a18a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05939c;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c059322;
  {  goto L8c0594d8; }
L8c059322:;
  R(3)=LD32(R(12));
  R(0)=0x0u;
  ST32(R(15)+4,R(3));
  { ST16(R(15)+8,R(0)); goto L8c059390; }
L8c05932c:;
  R(4)=LD32(R(15)+4);
  R(6)=R(13);
  R(5)=(int32_t)(int16_t)LD16(R(4));
  { c->pr=0x8c059336u; R(4)=0x2u; f_8c058ce8(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c059384;
  R(2)=R(14)&0xFFFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05934c;
  R(5)=R(14);
  { c->pr=0x8c059348u; R(4)=R(11); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c059384;
L8c05934c:;
  R(2)=R(15);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0x10u;
  R(5)=R(9);
  R(6)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(13)+36);
  { uint32_t tg=R(10); c->pr=0x8c059360u; R(4)=R(8); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c059384; }
  R(3)=R(14)&0xFFFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c059372;
  {  goto L8c0595a2; }
L8c059372:;
  R(3)=0x8c05a46cu;
  R(5)=R(14);
  { c->pr=0x8c05937au; R(4)=LD32(R(15)); f_8c05a46c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c059384;
  {  goto L8c0595a2; }
L8c059384:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(0)+=0x1u;
  ST16(R(15)+8,R(0));
  R(3)=LD32(R(15)+4);
  R(3)+=0x2u;
  ST32(R(15)+4,R(3));
L8c059390:;
  R(3)=LD32(R(12)+4);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(!c->t) goto L8c05932c;
  {  goto L8c0594d8; }
L8c05939c:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0593a4;
  { R(12)=LD32(R(12)); goto L8c0593a6; }
L8c0593a4:;
  R(12)=0x0u;
L8c0593a6:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0593e0;
  { R(0)=0xffffffffu; goto L8c0593e6; }
L8c0593e0:;
  { c->pr=0x8c0593e4u; R(4)=R(12); f_8c058c66(c); }
  R(0)=R(0)&0xFFFF;
L8c0593e6:;
  R(3)=R(14)&0xFFFF;
  ST16(R(15)+4,R(0));
  c->t=(R(3)&R(3))==0;
  R(5)=R(13);
  R(3)=R(14)&0xFFFF;
  R(0)=c->t;
  c->t=(R(3)&R(3))==0;
  ST32(R(15)+16,R(0));
  R(3)=0x8c05a1aeu;
  R(0)=c->t;
  ST32(R(15)+20,R(0));
  { c->pr=0x8c059400u; R(4)=0x2u; f_8c05a1ae(c); }
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c0594d8;
L8c059404:;
  R(5)=R(13);
  R(6)=R(11);
  { c->pr=0x8c05940cu; R(4)=0x2u; f_8c05a172(c); }
  R(5)=R(0);
  R(4)=R(5)&0xFF;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c059424;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05947a;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c05947a;
L8c059424:;
  R(5)=R(11);
  R(6)=R(13);
  { c->pr=0x8c05942cu; R(4)=0x2u; f_8c058ce8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+8,R(0)); if(k) goto L8c05947a; }
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c059442;
  R(5)=R(14);
  { c->pr=0x8c05943eu; R(4)=LD32(R(15)+8); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05947a;
L8c059442:;
  R(3)=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x10u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=R(9);
  R(6)=LD32(R(15)+16);
  R(7)=LD32(R(13)+36);
  { uint32_t tg=R(10); c->pr=0x8c059456u; R(4)=R(8); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c05947a; }
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c059468;
  {  goto L8c0595a2; }
L8c059468:;
  R(3)=0x8c05a46cu;
  R(5)=R(14);
  { c->pr=0x8c059470u; R(4)=LD32(R(15)); f_8c05a46c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05947a;
  {  goto L8c0595a2; }
L8c05947a:;
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(11)+=0x1u; if(k) goto L8c0594c8; }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c0594c8;
  R(12)+=0x2u;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0594c0;
  { R(0)=0xffffffffu; goto L8c0594c6; }
L8c0594c0:;
  { c->pr=0x8c0594c4u; R(4)=R(12); f_8c058c66(c); }
  R(0)=R(0)&0xFFFF;
L8c0594c6:;
  ST16(R(15)+4,R(0));
L8c0594c8:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  R(5)=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0594d2u; R(4)=0x2u; f_8c05a1ae(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  if(!c->t) goto L8c059404;
L8c0594d8:;
  R(4)=LD32(R(13)+4);
  R(4)=LD32(R(4));
  R(3)=LD32(R(4)+16);
  R(1)=R(3);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(3)); if(k) goto L8c0595ac; }
  R(3)=0x8c083672u;
  { c->pr=0x8c0594ecu; R(4)=LD32(R(15)+4); f_8c083672(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0595ac;
  R(5)=LD32(R(13)+4);
  R(2)=R(14)&0xFFFF;
  R(0)=0xa8u;
  c->t=(R(2)&R(2))==0;
  R(5)=LD32(R(5));
  R(3)=R(14)&0xFFFF;
  R(4)=LD32(R(5)+R(0));
  R(0)=c->t;
  c->t=(R(3)&R(3))==0;
  ST32(R(15)+4,R(0));
  R(0)=c->t;
  R(13)=R(4);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+8,R(0)); if(k) goto L8c0595ac; }
L8c059510:;
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c059540;
  { R(12)=LD32(R(13)+4); goto L8c059542; }
L8c059540:;
  R(12)=LD32(R(13));
L8c059542:;
  R(4)=LD32(R(12));
  R(2)=0x8u;
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c0595a6;
  R(1)=0x8c09341au;
  { c->pr=0x8c059550u; R(4)=LD32(R(12)+4); f_8c09341a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0595a6;
  R(2)=0x8c0932dcu;
  { c->pr=0x8c05955cu;  f_8c0932dc(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0595a6;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c059572;
  R(5)=R(14);
  { c->pr=0x8c05956eu; R(4)=R(11); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0595a6;
L8c059572:;
  R(3)=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x10u;
  R(5)=R(9);
  R(6)=R(11);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(12)+36);
  { uint32_t tg=R(10); c->pr=0x8c059586u; R(4)=R(8); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c0595a6; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0595a2;
  R(3)=0x8c05a46cu;
  R(5)=R(14);
  { c->pr=0x8c05959cu; R(4)=LD32(R(15)); f_8c05a46c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0595a6;
L8c0595a2:;
  { R(0)=0x1u; goto L8c0595ae; }
L8c0595a6:;
  R(13)=LD32(R(13)+8);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c059510;
L8c0595ac:;
  R(0)=0x0u;
L8c0595ae:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c059600(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(6)=R(6)&0xFF;
  R(0)=R(7);
  c->t=(R(6)&R(6))==0;
  R(13)=R(4);
  ST8(R(15),R(5));
  { uint32_t k=c->t; ST8(R(15)+4,R(0)); if(k) goto L8c0596c0; }
  R(4)=LD32(R(13)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(12)&R(12))==0;
  R(0)=R(0)&0xFF;
  { uint32_t k=c->t; ST16(R(15)+8,R(0)); if(k) goto L8c05963a; }
  R(14)=R(0)&0xFFFF;
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(12);
  { R(14)=LD32(R(14)); goto L8c05963c; }
L8c05963a:;
  R(14)=0x0u;
L8c05963c:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(4)=R(14); if(k) goto L8c0596de; }
  R(5)=LD32(R(14));
  R(3)=0x8u;
  c->t=(R(5)&R(3))==0;
  if(!c->t) goto L8c059676;
  R(4)=LD32(R(13)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(3)=0x8000u;
  R(13)=LD32(R(4)+R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  c->t=(R(13)&R(13))==0;
  R(4)=R(0);
  { uint32_t k=c->t; R(4)+=R(3); if(k) goto L8c05966e; }
  R(5)=R(4)&0xFFFF;
  R(2)=R(5);
  R(5)<<=2;
  R(5)+=R(2);
  R(5)<<=2;
  R(5)+=R(13);
  { R(5)=LD32(R(5)); goto L8c059670; }
L8c05966e:;
  R(5)=0x0u;
L8c059670:;
  R(4)=R(5);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0596de;
L8c059676:;
  R(2)=0x8c09341au;
  { c->pr=0x8c05967cu; R(4)=LD32(R(4)+4); f_8c09341a(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0596de;
  R(3)=0x8c093328u;
  { c->pr=0x8c059688u; R(4)=(int32_t)(int8_t)LD8(R(15)); f_8c093328(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0596de;
  R(2)=LD32(R(14)+36);
  R(3)=LD32(R(15)+28);
  { ST32(R(3),R(2)); goto L8c0596da; }
L8c0596c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(3)=0xffu;
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(6)=R(0);
  R(6)+=R(3);
  { c->pr=0x8c0596ceu; R(4)=R(13); f_8c0588a0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0596de;
  R(3)=LD32(R(13)+36);
  R(2)=LD32(R(15)+28);
  ST32(R(2),R(3));
L8c0596da:;
  { R(0)=R(4); goto L8c0596e0; }
L8c0596de:;
  R(0)=0x0u;
L8c0596e0:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0596ec(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(5);
  ST8(R(15)+8,R(0));
  R(0)=R(6);
  R(3)=R(15);
  ST8(R(15)+12,R(0));
  R(0)=0x10u;
  ST32(R(15)+4,R(7));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(6)=R(0);
  { c->pr=0x8c05970au; R(5)=0x2u; f_8c059600(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c05971a; }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c05971a:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(6)=LD32(R(15)+4);
  R(7)=R(0);
  { c->pr=0x8c059724u; R(5)=LD32(R(15)); f_8c0592c0(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c059740(SH4Ctx *c) {
  sh4_mac_l(c,R(0),R(15));R(0)+=4;R(15)+=4;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(0)=0x10u;
  R(3)=R(15);
  ST8(R(15)+R(0),R(5));
  R(0)=0x18u;
  R(3)+=0x4u;
  ST8(R(15)+R(0),R(6));
  ST32(R(15)+20,R(7));
  R(0)=0x1cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x14u;
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c059782u; R(5)=0x2u; f_8c059600(c); }
  R(2)=R(15);
  R(2)+=0x4u;
  R(14)=R(0);
  R(0)=0x30u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=0x2u;
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x2cu;
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c059798u; R(4)=LD32(R(15)+28); f_8c059600(c); }
  R(15)+=0x8u;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(6)=R(0); if(k) goto L8c0597cc; }
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0597cc;
  R(2)=R(15);
  R(2)+=0xcu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0xcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c079680u;
  R(5)=LD32(R(15)+12);
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c0597bau; R(4)=R(14); f_8c079680(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c0597cc; }
  R(0)=0x1u;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0597cc:;
  R(0)=0x0u;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c059760(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(0)=0x10u;
  R(3)=R(15);
  ST8(R(15)+R(0),R(5));
  R(0)=0x18u;
  R(3)+=0x4u;
  ST8(R(15)+R(0),R(6));
  ST32(R(15)+20,R(7));
  R(0)=0x1cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x14u;
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c059782u; R(5)=0x2u; f_8c059600(c); }
  R(2)=R(15);
  R(2)+=0x4u;
  R(14)=R(0);
  R(0)=0x30u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=0x2u;
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x2cu;
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c059798u; R(4)=LD32(R(15)+28); f_8c059600(c); }
  R(15)+=0x8u;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(6)=R(0); if(k) goto L8c0597cc; }
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0597cc;
  R(2)=R(15);
  R(2)+=0xcu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(3)+=0xcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c079680u;
  R(5)=LD32(R(15)+12);
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c0597bau; R(4)=R(14); f_8c079680(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c0597cc; }
  R(0)=0x1u;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0597cc:;
  R(0)=0x0u;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0597cc(SH4Ctx *c) {
  R(0)=0x0u;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0597d6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(0)=R(5);
  ST16(R(15)+12,R(0));
  R(11)=R(4);
  R(0)=R(6);
  R(3)=0x8c055c1au;
  R(13)=0x0u;
  ST16(R(15)+8,R(0));
  ST32(R(15)+4,R(7));
  R(8)=LD32(R(15)+56);
  R(4)=LD32(R(11)+4);
  R(9)=(int32_t)(int16_t)LD16(R(8));
  { c->pr=0x8c059802u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(5)=R(0);
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4));
  { R(12)=R(4); goto L8c059856; }
L8c05980c:;
  R(4)=R(12);
  R(14)=LD32(R(4));
  c->t=R(11)==R(14);
  if(c->t) goto L8c059854;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(10))==0;
  if(c->t) goto L8c059826;
  { R(0)=0x1u; goto L8c059828; }
L8c059826:;
  R(0)=0x0u;
L8c059828:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c059854;
  R(3)=LD32(R(15)+20);
  R(2)=R(13)&0xFFFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c059908;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(6)=R(14);
  R(7)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(5)=R(0);
  { c->pr=0x8c059844u; R(4)=R(11); f_8c05993e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c059854;
  R(0)=LD32(R(15)+4);
  R(3)=R(13)&0xFFFF;
  R(3)<<=2;
  ST32(R(3)+R(0),R(14));
  R(13)+=0x1u;
L8c059854:;
  R(12)=LD32(R(12)+4);
L8c059856:;
  c->t=(R(12)&R(12))==0;
  R(2)=R(9)&0xFFFF;
  R(10)=0x4u;
  { uint32_t k=!c->t; ST32(R(15)+20,R(2)); if(k) goto L8c05980c; }
  R(3)=0x8c055c1au;
  R(4)=LD32(R(11)+4);
  { c->pr=0x8c059868u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=R(0);
  R(5)=LD32(R(4)+4);
  R(3)=0x8c055c1au;
  R(5)=LD32(R(5)+44);
  ST32(R(15),R(5));
  R(4)=LD32(R(11)+4);
  { c->pr=0x8c059878u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=R(0);
  R(5)=LD32(R(4)+4);
  { R(5)=LD32(R(5)+40); goto L8c05991e; }
L8c059880:;
  R(4)=LD32(R(15)+16);
  R(14)=LD32(R(4));
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  { R(12)=R(4); goto L8c05990e; }
L8c05988c:;
  R(2)=LD32(R(15)+20);
  R(3)=R(13)&0xFFFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c059908;
  R(4)=R(12);
  R(14)=LD32(R(4));
  R(1)=0x25u;
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(10))==0;
  if(c->t) goto L8c0598e0;
  { R(0)=0x1u; goto L8c0598e2; }
L8c0598e0:;
  R(0)=0x0u;
L8c0598e2:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05990c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(6)=R(14);
  R(7)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(5)=R(0);
  { c->pr=0x8c0598f6u; R(4)=R(11); f_8c05993e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05990c;
  R(0)=LD32(R(15)+4);
  R(3)=R(13)&0xFFFF;
  R(3)<<=2;
  ST32(R(3)+R(0),R(14));
  { R(13)+=0x1u; goto L8c05990c; }
L8c059908:;
  { ST16(R(8),R(9)); goto L8c05992a; }
L8c05990c:;
  R(12)=LD32(R(12)+4);
L8c05990e:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c05988c;
  R(3)=LD32(R(15));
  R(3)+=0xffffffffu;
  ST32(R(15),R(3));
  R(4)=LD32(R(15)+16);
  R(5)=R(4);
  R(5)+=0x4u;
L8c05991e:;
  R(3)=0x0u;
  ST32(R(15)+16,R(5));
  R(2)=LD32(R(15));
  c->t=R(2)>R(3);
  if(c->t) goto L8c059880;
  ST16(R(8),R(13));
L8c05992a:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05993e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x0u;
  R(10)=R(5);
  R(5)=R(4);
  R(12)=R(13);
  R(14)=R(4);
  R(8)=R(6);
  R(9)=R(7);
  { c->pr=0x8c059962u; R(4)=0x2u; f_8c058ace(c); }
  R(5)=R(14);
  R(11)=R(0);
  { c->pr=0x8c05996au; R(4)=0x2u; f_8c05a18a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0599ca;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c059978;
  {  goto L8c059ab8; }
L8c059978:;
  R(3)=LD32(R(11));
  R(2)=0x0u;
  ST32(R(15)+4,R(3));
  { ST16(R(15),R(2)); goto L8c0599be; }
L8c059982:;
  R(4)=LD32(R(15)+4);
  R(6)=R(14);
  R(5)=(int32_t)(int16_t)LD16(R(4));
  { c->pr=0x8c05998cu; R(4)=0x2u; f_8c058ce8(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0599b2;
  R(2)=0x8c058952u;
  R(5)=R(10);
  { c->pr=0x8c05999au; R(4)=R(12); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0599b2;
  R(5)=LD32(R(14)+36);
  R(6)=R(8);
  R(7)=R(9);
  { c->pr=0x8c0599a8u; R(4)=R(12); f_8c0592c0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0599b2;
  {  goto L8c059b12; }
L8c0599b2:;
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)+=0x1u;
  ST16(R(15),R(2));
  R(3)=LD32(R(15)+4);
  R(3)+=0x2u;
  ST32(R(15)+4,R(3));
L8c0599be:;
  R(3)=LD32(R(11)+4);
  R(2)=(int32_t)(int16_t)LD16(R(15));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c059982;
  {  goto L8c059ab8; }
L8c0599ca:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0599d2;
  { R(11)=LD32(R(11)); goto L8c0599d4; }
L8c0599d2:;
  R(11)=0x0u;
L8c0599d4:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c059a00;
  { R(0)=0xffffffffu; goto L8c059a06; }
L8c059a00:;
  { c->pr=0x8c059a04u; R(4)=R(11); f_8c058c66(c); }
  R(0)=R(0)&0xFFFF;
L8c059a06:;
  R(5)=R(14);
  ST16(R(15)+4,R(0));
  { c->pr=0x8c059a0eu; R(4)=0x2u; f_8c05a1ae(c); }
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c059ab8;
L8c059a12:;
  R(5)=R(14);
  R(6)=R(12);
  { c->pr=0x8c059a1au; R(4)=0x2u; f_8c05a172(c); }
  R(4)=R(0);
  R(5)=R(4)&0xFF;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c059a32;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c059a5c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c059a5c;
L8c059a32:;
  R(5)=R(12);
  R(6)=R(14);
  { c->pr=0x8c059a3au; R(4)=0x2u; f_8c058ce8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c059a5c; }
  R(2)=0x8c058952u;
  R(5)=R(10);
  { c->pr=0x8c059a48u; R(4)=R(0); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c059a5c;
  R(5)=LD32(R(14)+36);
  R(6)=R(8);
  R(7)=R(9);
  { c->pr=0x8c059a56u; R(4)=LD32(R(15)); f_8c0592c0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c059b12;
L8c059a5c:;
  c->t=(R(11)&R(11))==0;
  { uint32_t k=c->t; R(12)+=0x1u; if(k) goto L8c059aa8; }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c059aa8;
  R(11)+=0x2u;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c059aa0;
  { R(0)=0xffffffffu; goto L8c059aa6; }
L8c059aa0:;
  { c->pr=0x8c059aa4u; R(4)=R(11); f_8c058c66(c); }
  R(0)=R(0)&0xFFFF;
L8c059aa6:;
  ST16(R(15)+4,R(0));
L8c059aa8:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  R(5)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c059ab2u; R(4)=0x2u; f_8c05a1ae(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  if(!c->t) goto L8c059a12;
L8c059ab8:;
  R(4)=LD32(R(14)+4);
  R(0)=0xa8u;
  R(4)=LD32(R(4));
  R(5)=LD32(R(4)+R(0));
  R(14)=R(5);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(11)=0x8u; if(k) goto L8c059b46; }
L8c059ac8:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c059ad6;
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c059ad6;
  { R(13)=LD32(R(14)+4); goto L8c059ad8; }
L8c059ad6:;
  R(13)=LD32(R(14));
L8c059ad8:;
  R(4)=LD32(R(13));
  c->t=(R(4)&R(11))==0;
  if(c->t) goto L8c059b40;
  R(3)=0x8c09341au;
  { c->pr=0x8c059ae4u; R(4)=LD32(R(13)+4); f_8c09341a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c059b40;
  R(3)=0x8c0932dcu;
  { c->pr=0x8c059af0u;  f_8c0932dc(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c059b40;
  R(3)=0x8c058952u;
  R(5)=R(10);
  { c->pr=0x8c059afeu; R(4)=R(12); f_8c058952(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c059b40;
  R(5)=LD32(R(13)+36);
  R(6)=R(8);
  R(7)=R(9);
  { c->pr=0x8c059b0cu; R(4)=R(12); f_8c0592c0(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c059b40;
L8c059b12:;
  { R(0)=0x1u; goto L8c059b48; }
L8c059b40:;
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c059ac8;
L8c059b46:;
  R(0)=0x0u;
L8c059b48:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c059b5c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(5);
  ST8(R(15)+8,R(0));
  R(0)=R(6);
  R(3)=R(15);
  ST8(R(15)+12,R(0));
  R(0)=0x10u;
  ST32(R(15)+4,R(7));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(6)=R(0);
  { c->pr=0x8c059b7au; R(5)=0x0u; f_8c059600(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c059b8a; }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c059b8a:;
  R(3)=0x8c058a76u;
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c059b92u; R(5)=LD32(R(15)); f_8c058a76(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c059b9a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(14)=R(12);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=R(5);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c058aceu;
  R(13)=R(12);
  { c->pr=0x8c059bbcu; R(4)=R(12); f_8c058ace(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c059bc4;
  R(12)=LD32(R(4));
L8c059bc4:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c059bcc;
  { R(10)=0xffffffffu; goto L8c059bd2; }
L8c059bcc:;
  { c->pr=0x8c059bd0u; R(4)=R(12); f_8c058c66(c); }
  R(10)=R(0)&0xFFFF;
L8c059bd2:;
  R(5)=R(11);
  { c->pr=0x8c059bd8u; R(4)=0x0u; f_8c05a1ae(c); }
  c->t=(int32_t)R(0)>0;
  if(!c->t) { f_8c059c72(c); return; }
  { f_8c059bdc(c); return; }
}
void f_8c059bdc(SH4Ctx *c) {
L8c059bdc:;
  R(5)=R(11);
  R(6)=R(14);
  { c->pr=0x8c059be4u; R(4)=0x0u; f_8c05a172(c); }
  R(5)=R(0);
  R(4)=R(5)&0xFF;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c059bfa;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c059c16;
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=R(10)&0xFFFF;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c059c16;
L8c059bfa:;
  R(5)=R(14);
  R(6)=R(11);
  { c->pr=0x8c059c02u; R(4)=0x0u; f_8c058ce8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c059c16;
  R(3)=0x8c058a76u;
  R(6)=R(9);
  { c->pr=0x8c059c10u; R(5)=LD32(R(11)+36); f_8c058a76(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) { f_8c059cbe(c); return; }
L8c059c16:;
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c059c66; }
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=R(10)&0xFFFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c059c66;
  R(12)+=0x2u;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c059c60;
  { R(10)=0xffffffffu; goto L8c059c66; }
L8c059c60:;
  { c->pr=0x8c059c64u; R(4)=R(12); f_8c058c66(c); }
  R(10)=R(0)&0xFFFF;
L8c059c66:;
  R(5)=R(11);
  R(8)=(uint32_t)(int32_t)(int16_t)R(14);
  { c->pr=0x8c059c6eu; R(4)=0x0u; f_8c05a1ae(c); }
  c->t=(int32_t)R(8)>=(int32_t)R(0);
  if(!c->t) goto L8c059bdc;
  { f_8c059c72(c); return; }
}
void f_8c059c60(SH4Ctx *c) {
  { c->pr=0x8c059c64u; R(4)=R(12); f_8c058c66(c); }
  R(10)=R(0)&0xFFFF;
  R(5)=R(11);
  R(8)=(uint32_t)(int32_t)(int16_t)R(14);
  { c->pr=0x8c059c6eu; R(4)=0x0u; f_8c05a1ae(c); }
  c->t=(int32_t)R(8)>=(int32_t)R(0);
  if(!c->t) { f_8c059bdc(c); return; }
  { f_8c059c72(c); return; }
}
void f_8c059c72(SH4Ctx *c) {
  R(4)=LD32(R(11)+4);
  R(0)=0xa8u;
  R(4)=LD32(R(4));
  R(11)=0x8c0932d8u;
  R(5)=LD32(R(4)+R(0));
  R(10)=0x8c09341au;
  R(14)=R(5);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)=0x8u; if(k) { f_8c059cc8(c); return; } }
  { f_8c059c86(c); return; }
}
void f_8c059c86(SH4Ctx *c) {
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c059c94;
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c059c94;
  { R(13)=LD32(R(14)+4); goto L8c059c96; }
L8c059c94:;
  R(13)=LD32(R(14));
L8c059c96:;
  R(4)=LD32(R(13));
  c->t=(R(4)&R(12))==0;
  if(c->t) { f_8c059cc2(c); return; }
  { uint32_t tg=R(10); c->pr=0x8c059ca0u; R(4)=LD32(R(13)+4); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) { f_8c059cc2(c); return; }
  { uint32_t tg=R(11); c->pr=0x8c059caau;  sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) { f_8c059cc2(c); return; }
  R(3)=0x8c058a76u;
  R(6)=R(9);
  { c->pr=0x8c059cb8u; R(5)=LD32(R(13)+36); f_8c058a76(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) { f_8c059cc2(c); return; }
  { f_8c059cbe(c); return; }
}
void f_8c059cbe(SH4Ctx *c) {
  { R(0)=0x1u; { f_8c059cca(c); return; } }
}
void f_8c059cc2(SH4Ctx *c) {
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(!c->t) { f_8c059c86(c); return; }
  { f_8c059cc8(c); return; }
}
void f_8c059cc8(SH4Ctx *c) {
  R(0)=0x0u;
  { f_8c059cca(c); return; }
}
void f_8c059cca(SH4Ctx *c) {
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c059d00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(4);
  R(0)=0xa0u;
  R(5)=R(5)&0xFF;
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  R(4)=LD32(R(13)+4);
  R(4)=LD32(R(4));
  R(1)=LD32(R(4)+R(0));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST16(R(15),R(5)); if(k) goto L8c059d30; }
  R(14)=(int32_t)(int16_t)LD16(R(15));
  R(14)=R(14)&0xFFFF;
  R(3)=R(14);
  R(14)<<=2;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(1);
  { R(14)=LD32(R(14)); goto L8c059d32; }
L8c059d30:;
  R(14)=0x0u;
L8c059d32:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(4)=R(14); if(k) goto L8c059d90; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c059d68;
  R(4)=LD32(R(13)+4);
  R(0)=0xa0u;
  R(4)=LD32(R(4));
  R(3)=0x8000u;
  R(1)=LD32(R(4)+R(0));
  R(4)=(int32_t)(int16_t)LD16(R(15));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(4)+=R(3); if(k) goto L8c059d60; }
  R(5)=R(4)&0xFFFF;
  R(2)=R(5);
  R(5)<<=2;
  R(5)+=R(2);
  R(5)<<=2;
  R(5)+=R(1);
  { R(5)=LD32(R(5)); goto L8c059d62; }
L8c059d60:;
  R(5)=0x0u;
L8c059d62:;
  R(4)=R(5);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c059d90;
L8c059d68:;
  R(2)=LD32(R(4)+4);
  R(3)=0x8c09341au;
  ST32(R(15),R(2));
  { c->pr=0x8c059d72u; R(4)=R(2); f_8c09341a(c); }
  R(2)=0x8c0932d8u;
  { c->pr=0x8c059d78u; R(4)=R(0); f_8c0932d8(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c059d90;
  R(2)=LD32(R(15)+24);
  R(6)=LD32(R(14)+36);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+16);
  { c->pr=0x8c059d8eu; R(4)=R(13); f_8c059dc0(c); }
  R(15)+=0x8u;
L8c059d90:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c059dc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(9)=R(4);
  R(3)=0x8c055c1au;
  ST32(R(15)+4,R(5));
  R(8)=R(7);
  ST32(R(15)+8,R(6));
  R(13)=LD32(R(15)+48);
  R(11)=LD32(R(15)+44);
  R(4)=LD32(R(9)+4);
  { c->pr=0x8c059de6u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=R(0);
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5));
  { R(12)=R(5); goto L8c059e36; }
L8c059df0:;
  R(4)=R(12);
  R(14)=LD32(R(4));
  c->t=R(9)==R(14);
  if(c->t) goto L8c059e34;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(10))==0;
  if(c->t) goto L8c059e0a;
  { R(0)=0x1u; goto L8c059e0c; }
L8c059e0a:;
  R(0)=0x0u;
L8c059e0c:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c059e34;
  R(3)=0x8c058a76u;
  R(6)=R(14);
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c059e1cu; R(4)=LD32(R(15)+4); f_8c058a76(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c059e34;
  R(3)=LD32(R(13));
  c->t=(int32_t)R(3)>=(int32_t)R(11);
  if(c->t) goto L8c059e3c;
  R(0)=LD32(R(13));
  R(0)+=0x1u;
  ST32(R(13),R(0));
  R(0)+=0xffffffffu;
  R(0)<<=2;
  ST32(R(8)+R(0),R(14));
L8c059e34:;
  R(12)=LD32(R(12)+4);
L8c059e36:;
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(10)=0x4u; if(k) goto L8c059df0; }
L8c059e3c:;
  R(2)=LD32(R(13));
  c->t=(int32_t)R(2)>=(int32_t)R(11);
  if(c->t) goto L8c059ed0;
  R(3)=0x8c055c1au;
  R(4)=LD32(R(9)+4);
  { c->pr=0x8c059e4au; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=R(0);
  R(5)=LD32(R(4)+4);
  R(3)=0x8c055c1au;
  R(5)=LD32(R(5)+52);
  ST32(R(15),R(5));
  R(4)=LD32(R(9)+4);
  { c->pr=0x8c059e5au; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(5)=R(0);
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4)+48);
  { R(9)=R(4); goto L8c059eca; }
L8c059e64:;
  R(3)=LD32(R(13));
  c->t=(int32_t)R(3)>=(int32_t)R(11);
  if(c->t) goto L8c059ed0;
  R(4)=R(9);
  R(14)=LD32(R(4));
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  { R(12)=R(4); goto L8c059eb8; }
L8c059e76:;
  R(4)=R(12);
  R(14)=LD32(R(4));
  R(1)=0x25u;
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(10))==0;
  if(c->t) goto L8c059e8c;
  { R(0)=0x1u; goto L8c059e8e; }
L8c059e8c:;
  R(0)=0x0u;
L8c059e8e:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c059eb6;
  R(3)=0x8c058a76u;
  R(6)=R(14);
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c059e9eu; R(4)=LD32(R(15)+4); f_8c058a76(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c059eb6;
  R(3)=LD32(R(13));
  c->t=(int32_t)R(3)>=(int32_t)R(11);
  if(c->t) goto L8c059ebc;
  R(0)=LD32(R(13));
  R(0)+=0x1u;
  ST32(R(13),R(0));
  R(0)+=0xffffffffu;
  R(0)<<=2;
  ST32(R(8)+R(0),R(14));
L8c059eb6:;
  R(12)=LD32(R(12)+4);
L8c059eb8:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c059e76;
L8c059ebc:;
  R(2)=LD32(R(15));
  R(5)=R(9);
  R(5)+=0x4u;
  R(4)=R(9);
  R(2)+=0xffffffffu;
  R(9)=R(5);
  ST32(R(15),R(2));
L8c059eca:;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c059e64;
L8c059ed0:;
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
void f_8c059f20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  R(5)=R(5)&0xFF;
  R(3)=0x0u;
  ST8(R(15)+4,R(0));
  c->t=(R(5)&R(5))==0;
  R(14)=R(4);
  ST32(R(15)+8,R(7));
  R(13)=LD32(R(15)+24);
  R(13)=(int32_t)(int16_t)LD16(R(13));
  R(13)=R(13)&0xFFFF;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c059f54; }
  R(1)=R(15);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(7)=R(13);
  R(6)=LD32(R(15)+12);
  R(5)=R(0);
  { c->pr=0x8c059f50u; R(4)=R(14); f_8c059d00(c); }
  { R(15)+=0x4u; goto L8c059f7a; }
L8c059f54:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=0x0u;
  R(3)=0xffu;
  R(2)=0x8c0588a0u;
  R(6)=R(0);
  R(6)+=R(3);
  { c->pr=0x8c059f64u; R(4)=R(14); f_8c0588a0(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c059f7a;
  R(2)=R(15);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+36);
  R(7)=LD32(R(15)+16);
  { c->pr=0x8c059f78u; R(4)=R(14); f_8c059dc0(c); }
  R(15)+=0x8u;
L8c059f7a:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+24);
  ST16(R(2),R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c059f8a(SH4Ctx *c) {
  R(2)=0x8c1247ccu;
  { R(6)=LD32(R(2)); { f_8c059fc0(c); return; } }
}
void f_8c059f90(SH4Ctx *c) {
  R(3)=0x8c1247d0u;
  { R(6)=LD32(R(3)); { f_8c059fc0(c); return; } }
}
void f_8c059fc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(12)=R(5);
  R(3)=0x8c058aceu;
  R(5)=R(12);
  R(8)=0x0u;
  R(11)=R(4);
  ST32(R(15),R(6));
  { c->pr=0x8c059fe2u; R(4)=R(11); f_8c058ace(c); }
  R(10)=R(15);
  R(5)=R(12);
  R(10)+=0x4u;
  R(14)=R(0);
  { c->pr=0x8c059feeu; R(4)=R(11); f_8c05a18a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05a028;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05a0b4;
  R(13)=LD32(R(14));
  { R(9)=0x0u; goto L8c05a01c; }
L8c059ffe:;
  R(4)=R(13);
  R(3)=0x8c058ce8u;
  R(5)=(int32_t)(int16_t)LD16(R(4));
  R(6)=R(12);
  { c->pr=0x8c05a00au; R(4)=R(11); f_8c058ce8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(9)+=0x1u; if(k) goto L8c05a01a; }
  R(0)=(uint32_t)(int32_t)(int16_t)R(8);
  R(0)<<=2;
  ST32(R(10)+R(0),R(4));
  R(8)+=0x1u;
L8c05a01a:;
  R(13)+=0x2u;
L8c05a01c:;
  R(2)=LD32(R(14)+4);
  R(3)=(uint32_t)(int32_t)(int16_t)R(9);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c059ffe;
  {  goto L8c05a0b4; }
L8c05a028:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c05a032; }
  { R(14)=LD32(R(14)); goto L8c05a034; }
L8c05a032:;
  R(14)=0x0u;
L8c05a034:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05a03c;
  { R(9)=0xffffffffu; goto L8c05a044; }
L8c05a03c:;
  R(2)=0x8c058c66u;
  { c->pr=0x8c05a042u; R(4)=R(14); f_8c058c66(c); }
  R(9)=R(0)&0xFFFF;
L8c05a044:;
  R(5)=R(12);
  { c->pr=0x8c05a04au; R(4)=R(11); f_8c05a1ae(c); }
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c05a0b4;
L8c05a04e:;
  R(5)=R(12);
  R(6)=R(13);
  { c->pr=0x8c05a056u; R(4)=R(11); f_8c05a172(c); }
  R(4)=R(0);
  R(5)=R(4)&0xFF;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05a06c;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c05a084;
  R(2)=(uint32_t)(int32_t)(int16_t)R(13);
  R(3)=R(9)&0xFFFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c05a084;
L8c05a06c:;
  R(2)=0x8c058ce8u;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c05a076u; R(4)=R(11); f_8c058ce8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05a084;
  R(0)=(uint32_t)(int32_t)(int16_t)R(8);
  R(0)<<=2;
  ST32(R(10)+R(0),R(4));
  R(8)+=0x1u;
L8c05a084:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)+=0x1u; if(k) goto L8c05a0a4; }
  R(3)=(uint32_t)(int32_t)(int16_t)R(13);
  R(2)=R(9)&0xFFFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c05a0a4;
  R(14)+=0x2u;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05a09c;
  { R(9)=0xffffffffu; goto L8c05a0a4; }
L8c05a09c:;
  R(2)=0x8c058c66u;
  { c->pr=0x8c05a0a2u; R(4)=R(14); f_8c058c66(c); }
  R(9)=R(0)&0xFFFF;
L8c05a0a4:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(13);
  R(5)=R(12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c05a0aeu; R(4)=R(11); f_8c05a1ae(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  if(!c->t) goto L8c05a04e;
L8c05a0b4:;
  R(3)=0x8c0874ccu;
  R(5)=R(10);
  R(6)=R(8);
  { c->pr=0x8c05a0beu; R(4)=LD32(R(15)); f_8c0874cc(c); }
  R(0)=LD32(R(15));
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
void f_8c05a100(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c086944u;
  R(6)=0x2u;
  R(4)=0x8c1247ccu;
  { c->pr=0x8c05a110u; R(5)=0x1eu; f_8c086944(c); }
  R(2)=0x8c08566eu;
  R(5)=R(15);
  R(14)=0x8c1247ccu;
  R(6)=0xau;
  { c->pr=0x8c05a11cu; R(4)=LD32(R(14)); f_8c08566e(c); }
  R(3)=0x8c085900u;
  R(5)=R(15);
  R(6)=0xau;
  { c->pr=0x8c05a126u; R(4)=LD32(R(14)); f_8c085900(c); }
  R(2)=0x8c087240u;
  { c->pr=0x8c05a12cu; R(4)=LD32(R(14)); f_8c087240(c); }
  R(3)=0x8c087048u;
  { c->pr=0x8c05a132u; R(4)=LD32(R(14)); f_8c087048(c); }
  R(2)=0x8c087126u;
  { c->pr=0x8c05a138u; R(4)=LD32(R(14)); f_8c087126(c); }
  R(3)=0x8c086944u;
  R(6)=0x2u;
  R(4)=0x8c1247d0u;
  { c->pr=0x8c05a142u; R(5)=0x1eu; f_8c086944(c); }
  R(2)=0x8c08566eu;
  R(5)=R(15);
  R(14)=0x8c1247d0u;
  R(6)=0xau;
  { c->pr=0x8c05a14eu; R(4)=LD32(R(14)); f_8c08566e(c); }
  R(3)=0x8c085900u;
  R(5)=R(15);
  R(6)=0xau;
  { c->pr=0x8c05a158u; R(4)=LD32(R(14)); f_8c085900(c); }
  R(2)=0x8c087240u;
  { c->pr=0x8c05a15eu; R(4)=LD32(R(14)); f_8c087240(c); }
  R(3)=0x8c087048u;
  { c->pr=0x8c05a164u; R(4)=LD32(R(14)); f_8c087048(c); }
  R(2)=0x8c087126u;
  { c->pr=0x8c05a16au; R(4)=LD32(R(14)); f_8c087126(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a172(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(5)+4);
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05a184;
  R(2)=0x8c048260u;
  R(5)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c048260(c); return; } }
L8c05a184:;
  R(0)=0x3u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a18a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(5)+4);
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05a1a6;
  R(2)=0x8c0481b0u;
  { c->pr=0x8c05a19cu; R(5)=R(14); f_8c0481b0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c05a1a6:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a1ae(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c047e48u;
  { c->pr=0x8c05a1b6u;  f_8c047e48(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05a1c2;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=LD32(R(4)+4); return; }
L8c05a1c2:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05a220(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05a238;
  R(3)=0x8c064e90u;
  R(5)=0x8c0ba380u;
  R(6)=0x6e0u;
  { c->pr=0x8c05a234u; R(4)=0x8u; f_8c064e90(c); }
  {  goto L8c05a242; }
L8c05a238:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0ba380u;
  R(6)=0x6e0u;
  { c->pr=0x8c05a242u; R(4)=0x8u; f_8c0199c4(c); }
L8c05a242:;
  R(5)=0x0u;
  R(4)=R(0);
  R(0)=R(5);
  ST32(R(4),R(5));
  ST16(R(4)+4,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c05a280(SH4Ctx *c) {
  {  return; }
}
void f_8c05a284(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05ea50u;
  { c->pr=0x8c05a28cu;  f_8c05ea50(c); }
  R(3)=0x8c0c55f0u;
  R(0)=0x8cu;
  R(5)=LD32(R(3));
  R(2)=0x8c03a5aau;
  R(4)=LD32(R(3));
  R(5)=LD32(R(5)+R(0));
  R(0)+=0x4u;
  { c->pr=0x8c05a29eu; R(4)=LD32(R(4)+R(0)); f_8c03a5aa(c); }
  R(3)=0x8c064e7cu;
  { c->pr=0x8c05a2a4u;  f_8c064e7c(c); }
  R(2)=0x8c03bb0cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c03bb0c(c); return; } }
}
void f_8c05a2e0(SH4Ctx *c) {
  R(2)=0x8c0c65e0u;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c05a2fc;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0c65e4u;
  R(5)=0x8c0c65f4u;
  { c->pr=0x8c05a2f8u;  f_8c0124a6(c); }
  R(2)=0x8c0c65e0u;
  ST8(R(2),R(0));
L8c05a2fc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05a36e(SH4Ctx *c) {
  R(2)=0x8c0c6674u;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c05a38a;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0c6678u;
  R(5)=0x8c0c6688u;
  { c->pr=0x8c05a386u;  f_8c0124a6(c); }
  R(2)=0x8c0c6674u;
  ST8(R(2),R(0));
L8c05a38a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05a390(SH4Ctx *c) {
  R(3)=0x8c0c42f4u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05a3a6;
  { uint32_t tg=R(14); c->pr=0x8c05a3a0u;  sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c05a3a6:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a3e0(SH4Ctx *c) {
  R(3)=0xcdcdcdcdu;
  c->t=R(4)==R(3);
  if(c->t) goto L8c05a3ee;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05a3ee;
  { R(0)=0x1u; return; }
L8c05a3ee:;
  R(0)=0x0u;
  {  return; }
}
void f_8c05a3fa(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c05a3fe(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c05a402(SH4Ctx *c) {
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c05a406(SH4Ctx *c) {
  { R(0)=LD32(R(4)+8); return; }
}
void f_8c05a40a(SH4Ctx *c) {
  { ST32(R(4)+8,R(5)); return; }
}
void f_8c05a40e(SH4Ctx *c) {
  { R(0)=LD32(R(4)+12); return; }
}
void f_8c05a412(SH4Ctx *c) {
  { ST32(R(4)+12,R(5)); return; }
}
void f_8c05a416(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+12);
  ST32(R(15),R(3));
  R(3)=0x8c087e9eu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;} { f_8c087e9e(c); return; } }
}
void f_8c05a42e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c05a460; }
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c05a460:;
  R(3)=0x8c087ed2u;
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c087ed2(c); return; } }
}
void f_8c05a460(SH4Ctx *c) {
  R(3)=0x8c087ed2u;
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c087ed2(c); return; } }
}
void f_8c05a46c(SH4Ctx *c) {
  R(3)=R(5)&0xFFFF;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05a47a;
  R(0)=0x1u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c05a47a:;
  R(14)=LD32(R(4)+12);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05a486;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c05a48c;
L8c05a486:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c05a48c:;
  R(2)=0x8c087ef6u;
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c087ef6(c); return; } }
}
void f_8c05a498(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(2)=0x8c0120cau;
  ST32(R(15)+8,R(5));
  R(14)=LD32(R(4));
  { c->pr=0x8c05a4a8u; R(4)=R(14); f_8c0120ca(c); }
  R(5)=LD32(R(15)+8);
  R(7)=R(15);
  R(3)=0x8c011f80u;
  R(7)+=0x4u;
  R(6)=R(15);
  { c->pr=0x8c05a4b6u; R(4)=R(14); f_8c011f80(c); }
  R(0)=LD32(R(15));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a4c0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4));
  ST32(R(15),R(3));
  R(3)=0x8c0120d2u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;} { f_8c0120d2(c); return; } }
}
void f_8c05a520(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05a53c;
  R(3)=0x8c064e90u;
  R(6)=0x2cu;
  R(5)=0x8c0ba58cu;
  { c->pr=0x8c05a538u; R(4)=0x10u; f_8c064e90(c); }
  {  goto L8c05a546; }
L8c05a53c:;
  R(1)=0x8c0199c4u;
  R(6)=0x2cu;
  R(5)=0x8c0ba58cu;
  { c->pr=0x8c05a546u; R(4)=0x10u; f_8c0199c4(c); }
L8c05a546:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=0xffffffffu; if(k) goto L8c05a57c; }
  R(3)=0x8c0125ccu;
  R(6)=0x2cu;
  R(5)=0x8c0ba58cu;
  { c->pr=0x8c05a558u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0ba58cu;
  R(2)=0x2cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  R(3)=0xffu;
  R(6)=R(1);
  R(2)=0x8c0c65e0u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  R(2)=0x8c012658u;
  { c->pr=0x8c05a57au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c05a57c:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x10u;
  { c->pr=0x8c05a586u; R(4)=R(14); f_8c0686b8(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05a596;
  R(3)=0x0u;
  ST32(R(14),R(3));
  ST32(R(14)+8,R(13));
  ST32(R(14)+12,R(13));
  { R(0)=R(14); goto L8c05a598; }
L8c05a596:;
  R(0)=0x0u;
L8c05a598:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a5a0(SH4Ctx *c) {
  {  return; }
}
void f_8c05a600(SH4Ctx *c) {
  {  return; }
}
void f_8c05a680(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d0770u;
  { c->pr=0x8c05a688u;  f_8c0d0770(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c05a68e(SH4Ctx *c) {
  R(6)=LD32(R(4)+32);
  R(7)=0x0u;
  c->t=(R(6)&R(6))==0;
  R(1)=R(6);
  { uint32_t k=c->t; R(0)=0x1u; if(k) goto L8c05a6ae; }
L8c05a69a:;
  c->t=R(6)>R(5);
  if(!c->t) goto L8c05a6a2;
  { R(7)=R(0); goto L8c05a6a6; }
L8c05a6a2:;
  R(1)=R(6);
  R(6)=LD32(R(6)+4);
L8c05a6a6:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c05a6ae;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c05a69a;
L8c05a6ae:;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c05a6be;
  ST32(R(5)+4,R(6));
  R(3)=LD32(R(4)+32);
  c->t=R(6)==R(3);
  if(c->t) goto L8c05a6c8;
  { ST32(R(1)+4,R(5)); goto L8c05a6d2; }
L8c05a6be:;
  R(3)=LD32(R(4)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05a6cc;
  R(3)=LD32(R(4)+32);
  ST32(R(5)+4,R(3));
L8c05a6c8:;
  { ST32(R(4)+32,R(5)); goto L8c05a6d2; }
L8c05a6cc:;
  R(3)=LD32(R(1)+4);
  ST32(R(5)+4,R(3));
  ST32(R(1)+4,R(5));
L8c05a6d2:;
  {  return; }
}
void f_8c05a6d6(SH4Ctx *c) {
  R(4)=LD32(R(4)+32);
  R(6)=0x0u;
  R(5)=R(6);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c05a712; }
L8c05a6e2:;
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05a704;
  R(3)=LD32(R(4));
  R(2)=LD32(R(4)+4);
  R(3)+=R(4);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c05a704;
  R(1)=LD32(R(4)+4);
  R(5)=R(7);
  R(2)=LD32(R(4));
  R(3)=LD32(R(1));
  R(2)+=R(3);
  ST32(R(4),R(2));
  R(1)=LD32(R(4)+4);
  R(3)=LD32(R(1)+4);
  ST32(R(4)+4,R(3));
L8c05a704:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c05a70c;
  { R(5)=R(6); goto L8c05a70e; }
L8c05a70c:;
  R(4)=LD32(R(4)+4);
L8c05a70e:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05a6e2;
L8c05a712:;
  {  return; }
}
void f_8c05a716(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  ST32(R(15),R(4));
  R(4)=LD32(R(14)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05a730;
  R(2)=LD32(R(14));
  c->t=R(2)>=R(4);
  if(c->t) goto L8c05a7aa;
L8c05a730:;
  R(3)=0x8c0d06a2u;
  { c->pr=0x8c05a736u; R(4)=0xcu; f_8c0d06a2(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05a7aa;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05a780;
  { R(12)=LD32(R(14)+16); goto L8c05a792; }
L8c05a780:;
  R(4)=LD32(R(14)+4);
  R(3)=LD32(R(14));
  R(5)=LD32(R(14)+16);
  R(4)-=R(3);
  c->t=R(5)>=R(4);
  if(c->t) goto L8c05a790;
  { R(12)=R(5); goto L8c05a792; }
L8c05a790:;
  R(12)=R(4);
L8c05a792:;
  R(2)=0x8c0d06a2u;
  R(4)=LD32(R(14)+8);
  { c->pr=0x8c05a79au; R(4)+=R(12); f_8c0d06a2(c); }
  R(5)=R(0);
  R(2)=R(5);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(13),R(0)); if(k) goto L8c05a7ae; }
  R(3)=0x8c0d0770u;
  { c->pr=0x8c05a7aau; R(4)=R(13); f_8c0d0770(c); }
L8c05a7aa:;
  { R(0)=0x0u; goto L8c05a7d8; }
L8c05a7ae:;
  R(2)=0x3u;
  ST32(R(13)+4,R(12));
  R(4)=LD32(R(13));
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c05a7c2;
  R(4)>>=2;
  R(5)=R(4);
  R(5)+=0x1u;
  { R(5)<<=2; goto L8c05a7c4; }
L8c05a7c2:;
  R(5)=R(4);
L8c05a7c4:;
  ST32(R(5),R(12));
  { c->pr=0x8c05a7cau; R(4)=LD32(R(15)); f_8c05a68e(c); }
  R(2)=LD32(R(14)+48);
  R(0)=0x1u;
  ST32(R(13)+8,R(2));
  ST32(R(14)+48,R(13));
  R(3)=LD32(R(14));
  R(3)+=R(12);
  ST32(R(14),R(3));
L8c05a7d8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a7e4(SH4Ctx *c) {
  R(6)=R(4);
  R(6)+=0x5u;
  R(7)=0x8c0ba5e0u;
  R(5)=R(4);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c05a7fa;
L8c05a7f0:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  ST8(R(5),R(3));
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c05a7f0;
L8c05a7fa:;
  {  return; }
}
void f_8c05a7fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0d06a2u;
  ST32(R(15)+8,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  ST32(R(15)+12,R(7));
  { c->pr=0x8c05a816u; R(4)=0x34u; f_8c0d06a2(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05a860;
  R(4)=LD32(R(15)+8);
  R(12)=0x3u;
  R(3)=R(4);
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c05a830;
  R(4)>>=2;
  R(5)=R(4);
  R(5)+=0x1u;
  { R(5)<<=2; goto L8c05a832; }
L8c05a830:;
  R(5)=R(4);
L8c05a832:;
  R(4)=LD32(R(15));
  R(3)=R(4);
  c->t=(R(3)&R(12))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c05a846; }
  R(4)>>=2;
  R(5)=R(4);
  R(5)+=0x1u;
  { R(5)<<=2; goto L8c05a848; }
L8c05a846:;
  R(5)=R(4);
L8c05a848:;
  R(3)=0x8c0d06a2u;
  ST32(R(15),R(5));
  { c->pr=0x8c05a850u; R(4)=R(13); f_8c0d06a2(c); }
  R(5)=R(0);
  R(3)=R(5);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(14)+40,R(0)); if(k) goto L8c05a8a0; }
  R(3)=0x8c0d0770u;
  { c->pr=0x8c05a860u; R(4)=R(14); f_8c0d0770(c); }
L8c05a860:;
  { R(0)=0x0u; goto L8c05a8f8; }
L8c05a8a0:;
  R(4)=0x0u;
  ST32(R(14)+44,R(13));
  ST32(R(14)+48,R(4));
  R(5)=LD32(R(14)+40);
  c->t=(R(12)&R(5))==0;
  if(c->t) goto L8c05a8b6;
  R(5)>>=2;
  R(6)=R(5);
  R(6)+=0x1u;
  { R(6)<<=2; goto L8c05a8b8; }
L8c05a8b6:;
  R(6)=R(5);
L8c05a8b8:;
  R(2)=R(6);
  ST32(R(14)+32,R(6));
  ST32(R(2),R(13));
  R(3)=LD32(R(14)+32);
  ST32(R(3)+4,R(4));
  ST32(R(14)+36,R(4));
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c05a8d6;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05a8da;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05a8dc;
  {  goto L8c05a8e0; }
L8c05a8d6:;
  { R(4)=0x8u; goto L8c05a8dc; }
L8c05a8da:;
  R(4)=0x4u;
L8c05a8dc:;
  ST32(R(14)+20,R(4));
  ST32(R(14)+24,R(4));
L8c05a8e0:;
  R(0)=R(14);
  ST32(R(14),R(13));
  R(2)=LD32(R(15));
  ST32(R(14)+4,R(2));
  R(3)=LD32(R(15)+12);
  ST32(R(14)+8,R(3));
  R(3)=0x1u;
  R(2)=LD32(R(15)+4);
  ST32(R(14)+28,R(2));
  R(2)=0x100000u;
  ST32(R(14)+12,R(3));
  ST32(R(14)+16,R(2));
L8c05a8f8:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a904(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x1u;
  R(12)=R(4);
  R(1)=R(3);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c05a928; }
  { c->pr=0x8c05a920u; R(4)=LD32(R(12)+40); f_8c05a680(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05a928;
  { R(13)=0x1u; goto L8c05a92a; }
L8c05a928:;
  R(13)=0x0u;
L8c05a92a:;
  R(14)=LD32(R(12)+48);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05a95c;
L8c05a930:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05a940;
  { c->pr=0x8c05a938u; R(4)=LD32(R(14)); f_8c05a680(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05a940;
  { R(11)=0x1u; goto L8c05a942; }
L8c05a940:;
  R(11)=0x0u;
L8c05a942:;
  c->t=(R(11)&R(11))==0;
  R(4)=R(14);
  { uint32_t k=c->t; R(14)=LD32(R(14)+8); if(k) goto L8c05a956; }
  { c->pr=0x8c05a94eu;  f_8c05a680(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05a956;
  { R(13)=0x1u; goto L8c05a958; }
L8c05a956:;
  R(13)=0x0u;
L8c05a958:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05a930;
L8c05a95c:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05a9a0;
  { c->pr=0x8c05a964u; R(4)=R(12); f_8c05a680(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05a9a0;
  { R(4)=0x1u; goto L8c05a9a2; }
L8c05a9a0:;
  R(4)=0x0u;
L8c05a9a2:;
  R(0)=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05a9b2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)=R(4); if(k) goto L8c05aa58; }
  R(13)=LD32(R(14)+24);
  R(3)=0x3u;
  R(13)+=R(5);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c05a9e0;
  R(4)=R(13);
  R(4)>>=2;
  R(4)+=0x1u;
  { R(4)<<=2; goto L8c05a9e2; }
L8c05a9e0:;
  R(4)=R(13);
L8c05a9e2:;
  R(3)=LD32(R(14)+24);
  R(13)=0x0u;
  R(9)=R(4);
  R(12)=R(13);
  R(11)=R(4);
  R(9)-=R(3);
L8c05a9ee:;
  R(4)=LD32(R(14)+32);
  R(5)=LD32(R(14));
  c->t=(R(4)&R(4))==0;
  R(6)=R(4);
  { uint32_t k=c->t; R(5)+=0x1u; if(k) goto L8c05aa14; }
L8c05a9fa:;
  R(3)=LD32(R(4));
  c->t=R(3)>=R(11);
  if(!c->t) goto L8c05aa0c;
  R(1)=LD32(R(4));
  c->t=R(1)>=R(5);
  if(c->t) goto L8c05aa0c;
  R(5)=LD32(R(4));
  R(10)=R(6);
  R(12)=R(4);
L8c05aa0c:;
  R(6)=R(4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05a9fa;
L8c05aa14:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c05aa4e;
  R(4)=LD32(R(14)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05aa24;
  R(3)=LD32(R(14));
  c->t=R(3)>=R(4);
  if(c->t) goto L8c05aa4a;
L8c05aa24:;
  R(4)=LD32(R(14)+4);
  R(3)=LD32(R(14));
  R(5)=LD32(R(14)+16);
  R(4)-=R(3);
  c->t=R(5)>=R(4);
  if(c->t) goto L8c05aa34;
  { R(1)=R(5); goto L8c05aa36; }
L8c05aa34:;
  R(1)=R(4);
L8c05aa36:;
  c->t=R(11)>R(1);
  if(c->t) goto L8c05aa4a;
  { c->pr=0x8c05aa3eu; R(4)=R(8); f_8c05a716(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05aa46;
  { R(4)=0x1u; goto L8c05aa50; }
L8c05aa46:;
  { R(4)=R(13); goto L8c05aa50; }
L8c05aa4a:;
  { R(4)=R(13); goto L8c05aa50; }
L8c05aa4e:;
  R(4)=R(13);
L8c05aa50:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05a9ee;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c05aa5c;
L8c05aa58:;
  { R(0)=0x0u; goto L8c05aab4; }
L8c05aa5c:;
  R(4)=LD32(R(12));
  R(2)=0x8u;
  R(4)-=R(11);
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c05aa70;
  R(1)=LD32(R(14)+24);
  R(3)=LD32(R(14)+8);
  R(1)+=R(3);
  c->t=R(4)>=R(1);
  if(c->t) goto L8c05aa7a;
L8c05aa70:;
  R(2)=LD32(R(12));
  R(2)-=R(11);
  R(9)+=R(2);
  { R(4)=LD32(R(12)+4); goto L8c05aa88; }
L8c05aa7a:;
  R(5)=LD32(R(12));
  R(4)=R(12);
  R(6)=LD32(R(12)+4);
  R(4)+=R(11);
  R(5)-=R(11);
  ST32(R(4),R(5));
  ST32(R(4)+4,R(6));
L8c05aa88:;
  R(2)=LD32(R(14)+32);
  c->t=R(12)==R(2);
  if(!c->t) goto L8c05aa92;
  { ST32(R(14)+32,R(4)); goto L8c05aa94; }
L8c05aa92:;
  ST32(R(10)+4,R(4));
L8c05aa94:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c05aaa8; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05aaa8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05aab0;
  {  goto L8c05aab0; }
L8c05aaa8:;
  ST32(R(4)+4,R(9));
  R(3)=LD32(R(14)+36);
  ST32(R(4),R(3));
  ST32(R(14)+36,R(4));
L8c05aab0:;
  R(0)=LD32(R(14)+20);
  R(0)+=R(4);
L8c05aab4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05aac6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  R(3)=LD32(R(14)+12);
  R(10)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=R(5); if(k) goto L8c05aae4; }
  {  goto L8c05ac36; }
L8c05aae4:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05aaee;
  {  goto L8c05ac36; }
L8c05aaee:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c05aaf8;
  {  goto L8c05ac36; }
L8c05aaf8:;
  R(4)=LD32(R(14)+24);
  R(3)=0x3u;
  R(4)+=R(6);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c05ab0c;
  R(4)>>=2;
  R(5)=R(4);
  R(5)+=0x1u;
  { R(5)<<=2; goto L8c05ab0e; }
L8c05ab0c:;
  R(5)=R(4);
L8c05ab0e:;
  R(13)=LD32(R(14)+36);
  R(11)=R(5);
  R(3)=LD32(R(14)+24);
  R(4)=0x0u;
  c->t=(R(13)&R(13))==0;
  R(11)-=R(3);
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c05ab34; }
L8c05ab1e:;
  R(3)=LD32(R(14)+20);
  R(3)+=R(13);
  c->t=R(3)==R(12);
  if(!c->t) goto L8c05ab2a;
  { R(4)=R(5); goto L8c05ab2c; }
L8c05ab2a:;
  R(13)=LD32(R(13));
L8c05ab2c:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05ab34;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05ab1e;
L8c05ab34:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05ab3c;
  {  goto L8c05ac36; }
L8c05ab3c:;
  R(2)=LD32(R(13)+4);
  c->t=R(2)==R(11);
  if(!c->t) goto L8c05ab46;
  {  goto L8c05ac26; }
L8c05ab46:;
  R(3)=LD32(R(13)+4);
  c->t=R(3)>R(11);
  { uint32_t k=!c->t; R(7)=0x8u; if(k) goto L8c05ab82; }
  R(4)=LD32(R(13)+4);
  R(4)-=R(11);
  c->t=R(4)>=R(7);
  if(c->t) goto L8c05ab5a;
  {  goto L8c05ac26; }
L8c05ab5a:;
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+8);
  R(2)+=R(3);
  c->t=R(4)>=R(2);
  if(c->t) goto L8c05ab68;
  {  goto L8c05ac26; }
L8c05ab68:;
  R(3)=LD32(R(14)+24);
  R(5)=R(13);
  R(2)=LD32(R(13)+4);
  R(5)+=R(11);
  R(5)+=R(3);
  R(2)-=R(11);
  ST32(R(5),R(2));
  { c->pr=0x8c05ab7au; R(4)=R(14); f_8c05a68e(c); }
  { c->pr=0x8c05ab7eu; R(4)=R(10); f_8c05a6d6(c); }
  { ST32(R(13)+4,R(11)); goto L8c05ac26; }
L8c05ab82:;
  R(5)=LD32(R(13)+4);
  R(4)=LD32(R(14)+32);
  R(3)=LD32(R(14)+24);
  R(5)+=R(13);
  c->t=(R(4)&R(4))==0;
  R(5)+=R(3);
  { uint32_t k=c->t; R(6)=R(4); if(k) goto L8c05abaa; }
  c->t=R(4)>=R(5);
  if(c->t) goto L8c05aba2;
L8c05ab96:;
  R(6)=R(4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05abaa;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c05ab96;
L8c05aba2:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05abaa;
  c->t=R(4)==R(5);
  if(c->t) goto L8c05abca;
L8c05abaa:;
  R(5)=R(11);
  { c->pr=0x8c05abb0u; R(4)=R(10); f_8c05a9b2(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c05ac36; }
  R(2)=0x8c0685b4u;
  R(5)=R(12);
  R(6)=LD32(R(13)+4);
  { c->pr=0x8c05abc0u; R(4)=R(14); f_8c0685b4(c); }
  R(5)=R(12);
  { c->pr=0x8c05abc6u; R(4)=R(10); f_8c05ae4a(c); }
  {  goto L8c05ac4a; }
L8c05abca:;
  R(3)=LD32(R(13)+4);
  R(5)=R(11);
  R(2)=LD32(R(4));
  R(5)-=R(3);
  c->t=R(2)>=R(5);
  if(!c->t) goto L8c05ac2a;
  R(1)=LD32(R(4));
  R(1)-=R(5);
  c->t=R(1)>=R(7);
  { uint32_t k=!c->t; ST32(R(15),R(1)); if(k) goto L8c05abea; }
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+8);
  R(2)+=R(3);
  c->t=R(1)>=R(2);
  if(c->t) goto L8c05abfe;
L8c05abea:;
  R(2)=LD32(R(14)+32);
  c->t=R(4)==R(2);
  { uint32_t k=!c->t; R(5)=LD32(R(4)); if(k) goto L8c05abf8; }
  R(1)=LD32(R(4)+4);
  { ST32(R(14)+32,R(1)); goto L8c05ac20; }
L8c05abf8:;
  R(2)=LD32(R(4)+4);
  { ST32(R(6)+4,R(2)); goto L8c05ac20; }
L8c05abfe:;
  R(7)=R(4);
  R(7)+=R(5);
  R(1)=LD32(R(4));
  ST32(R(15)+4,R(1));
  R(3)=LD32(R(4)+4);
  ST32(R(15),R(3));
  R(3)=LD32(R(15)+4);
  R(3)-=R(5);
  ST32(R(7),R(3));
  R(2)=LD32(R(15));
  ST32(R(7)+4,R(2));
  R(3)=LD32(R(14)+32);
  c->t=R(4)==R(3);
  if(!c->t) goto L8c05ac1e;
  { ST32(R(14)+32,R(7)); goto L8c05ac20; }
L8c05ac1e:;
  ST32(R(6)+4,R(7));
L8c05ac20:;
  R(2)=LD32(R(13)+4);
  R(2)+=R(5);
  ST32(R(13)+4,R(2));
L8c05ac26:;
  { R(0)=R(12); goto L8c05ac4c; }
L8c05ac2a:;
  R(5)=R(11);
  { c->pr=0x8c05ac30u; R(4)=R(10); f_8c05a9b2(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c05ac3a; }
L8c05ac36:;
  { R(0)=0x0u; goto L8c05ac4c; }
L8c05ac3a:;
  R(3)=0x8c0685b4u;
  R(5)=R(12);
  R(6)=LD32(R(13)+4);
  { c->pr=0x8c05ac44u; R(4)=R(14); f_8c0685b4(c); }
  R(5)=R(12);
  { c->pr=0x8c05ac4au; R(4)=R(10); f_8c05ae4a(c); }
L8c05ac4a:;
  R(0)=R(14);
L8c05ac4c:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05ac80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  ST32(R(15),R(4));
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=R(5); if(k) goto L8c05ac9c; }
  {  goto L8c05adbe; }
L8c05ac9c:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05aca6;
  {  goto L8c05adbe; }
L8c05aca6:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c05acb0;
  {  goto L8c05adbe; }
L8c05acb0:;
  R(4)=LD32(R(14)+24);
  R(3)=0x3u;
  R(4)+=R(6);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c05acc4;
  R(4)>>=2;
  R(5)=R(4);
  R(5)+=0x1u;
  { R(5)<<=2; goto L8c05acc6; }
L8c05acc4:;
  R(5)=R(4);
L8c05acc6:;
  R(13)=LD32(R(14)+36);
  R(12)=R(5);
  R(3)=LD32(R(14)+24);
  R(4)=0x0u;
  c->t=(R(13)&R(13))==0;
  R(12)-=R(3);
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c05acec; }
L8c05acd6:;
  R(3)=LD32(R(14)+20);
  R(3)+=R(13);
  c->t=R(3)==R(11);
  if(!c->t) goto L8c05ace2;
  { R(4)=R(5); goto L8c05ace4; }
L8c05ace2:;
  R(13)=LD32(R(13));
L8c05ace4:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05acec;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05acd6;
L8c05acec:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05acf4;
  {  goto L8c05adbe; }
L8c05acf4:;
  R(2)=LD32(R(13)+4);
  c->t=R(2)==R(12);
  if(!c->t) goto L8c05acfe;
  {  goto L8c05adba; }
L8c05acfe:;
  R(3)=LD32(R(13)+4);
  c->t=R(3)>R(12);
  { uint32_t k=!c->t; R(7)=0x8u; if(k) goto L8c05ad36; }
  R(4)=LD32(R(13)+4);
  R(4)-=R(12);
  c->t=R(4)>=R(7);
  if(c->t) goto L8c05ad12;
  {  goto L8c05adba; }
L8c05ad12:;
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+8);
  R(2)+=R(3);
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c05adba;
  R(3)=LD32(R(14)+24);
  R(5)=R(13);
  R(2)=LD32(R(13)+4);
  R(5)+=R(12);
  R(5)+=R(3);
  R(2)-=R(12);
  ST32(R(5),R(2));
  { c->pr=0x8c05ad2eu; R(4)=R(14); f_8c05a68e(c); }
  { c->pr=0x8c05ad32u; R(4)=LD32(R(15)); f_8c05a6d6(c); }
  { ST32(R(13)+4,R(12)); goto L8c05adba; }
L8c05ad36:;
  R(5)=LD32(R(13)+4);
  R(4)=LD32(R(14)+32);
  R(3)=LD32(R(14)+24);
  R(5)+=R(13);
  c->t=(R(4)&R(4))==0;
  R(5)+=R(3);
  { uint32_t k=c->t; R(6)=R(4); if(k) goto L8c05adbe; }
  c->t=R(4)>=R(5);
  if(c->t) goto L8c05ad56;
L8c05ad4a:;
  R(6)=R(4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05adbe;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c05ad4a;
L8c05ad56:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05adbe;
  c->t=R(4)==R(5);
  if(!c->t) goto L8c05adbe;
  R(3)=LD32(R(13)+4);
  R(5)=R(12);
  R(2)=LD32(R(4));
  R(5)-=R(3);
  c->t=R(2)>=R(5);
  if(!c->t) goto L8c05adbe;
  R(1)=LD32(R(4));
  R(1)-=R(5);
  c->t=R(1)>=R(7);
  { uint32_t k=!c->t; ST32(R(15),R(1)); if(k) goto L8c05ad7e; }
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+8);
  R(2)+=R(3);
  c->t=R(1)>=R(2);
  if(c->t) goto L8c05ad92;
L8c05ad7e:;
  R(2)=LD32(R(14)+32);
  c->t=R(4)==R(2);
  { uint32_t k=!c->t; R(5)=LD32(R(4)); if(k) goto L8c05ad8c; }
  R(1)=LD32(R(4)+4);
  { ST32(R(14)+32,R(1)); goto L8c05adb4; }
L8c05ad8c:;
  R(2)=LD32(R(4)+4);
  { ST32(R(6)+4,R(2)); goto L8c05adb4; }
L8c05ad92:;
  R(7)=R(4);
  R(7)+=R(5);
  R(1)=LD32(R(4));
  ST32(R(15)+4,R(1));
  R(3)=LD32(R(4)+4);
  ST32(R(15),R(3));
  R(3)=LD32(R(15)+4);
  R(3)-=R(5);
  ST32(R(7),R(3));
  R(2)=LD32(R(15));
  ST32(R(7)+4,R(2));
  R(3)=LD32(R(14)+32);
  c->t=R(4)==R(3);
  if(!c->t) goto L8c05adb2;
  { ST32(R(14)+32,R(7)); goto L8c05adb4; }
L8c05adb2:;
  ST32(R(6)+4,R(7));
L8c05adb4:;
  R(2)=LD32(R(13)+4);
  R(2)+=R(5);
  ST32(R(13)+4,R(2));
L8c05adba:;
  { R(0)=R(11); goto L8c05adc0; }
L8c05adbe:;
  R(0)=0x0u;
L8c05adc0:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05adce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+12);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=R(5); if(k) goto L8c05ae3c; }
  R(0)=LD32(R(4)+28);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05ae3c;
  R(0)=LD32(R(4)+28);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05ae3c;
  R(14)=LD32(R(4)+36);
  R(5)=0x0u;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(6)=0x1u; if(k) goto L8c05ae0e; }
L8c05adf8:;
  R(2)=LD32(R(4)+20);
  R(2)+=R(14);
  c->t=R(2)==R(12);
  if(!c->t) goto L8c05ae04;
  { R(5)=R(6); goto L8c05ae06; }
L8c05ae04:;
  R(14)=LD32(R(14));
L8c05ae06:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05ae0e;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c05adf8;
L8c05ae0e:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c05ae3c;
  R(5)=LD32(R(14)+4);
  { c->pr=0x8c05ae18u; R(4)=R(11); f_8c05a9b2(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05ae3c;
  c->t=R(13)>=R(12);
  if(c->t) goto L8c05ae36;
  R(2)=0x8c0685b4u;
  R(5)=R(12);
  R(6)=LD32(R(14)+4);
  { c->pr=0x8c05ae2cu; R(4)=R(13); f_8c0685b4(c); }
  R(5)=R(12);
  { c->pr=0x8c05ae32u; R(4)=R(11); f_8c05ae4a(c); }
  { R(0)=R(13); goto L8c05ae3e; }
L8c05ae36:;
  R(5)=R(13);
  { c->pr=0x8c05ae3cu; R(4)=R(11); f_8c05ae4a(c); }
L8c05ae3c:;
  R(0)=0x0u;
L8c05ae3e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05ae4a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05ae8a;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05ae8a;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05ae8a;
  R(4)=LD32(R(14)+36);
  R(6)=0x0u;
  c->t=(R(4)&R(4))==0;
  R(0)=R(4);
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c05ae86; }
L8c05ae6e:;
  R(2)=LD32(R(14)+20);
  R(2)+=R(4);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c05ae7a;
  { R(6)=R(7); goto L8c05ae7e; }
L8c05ae7a:;
  R(0)=R(4);
  R(4)=LD32(R(4));
L8c05ae7e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05ae86;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c05ae6e;
L8c05ae86:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c05ae92;
L8c05ae8a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c05ae92:;
  R(3)=LD32(R(14)+36);
  c->t=R(4)==R(3);
  { uint32_t k=!c->t; R(5)=R(4); if(k) goto L8c05aec0; }
  R(1)=LD32(R(4));
  { ST32(R(14)+36,R(1)); goto L8c05aec4; }
L8c05aec0:;
  R(2)=LD32(R(4));
  ST32(R(0),R(2));
L8c05aec4:;
  R(4)=LD32(R(4)+4);
  R(3)=LD32(R(14)+24);
  R(4)+=R(3);
  ST32(R(5),R(4));
  { c->pr=0x8c05aed0u; R(4)=R(14); f_8c05a68e(c); }
  { c->pr=0x8c05aed4u; R(4)=R(14); f_8c05a6d6(c); }
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05aedc(SH4Ctx *c) {
  R(5)=R(4);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(5)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05aeec;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c05aeec:;
  R(14)=0x3u;
  R(4)=R(5);
  R(3)=0x0u;
  ST32(R(5)+36,R(3));
  R(6)=LD32(R(5)+40);
  R(2)=R(6);
  c->t=(R(2)&R(14))==0;
  { uint32_t k=c->t; R(4)+=0x20u; if(k) goto L8c05af08; }
  R(6)>>=2;
  R(7)=R(6);
  R(7)+=0x1u;
  { R(7)<<=2; goto L8c05af0a; }
L8c05af08:;
  R(7)=R(6);
L8c05af0a:;
  R(2)=R(7);
  ST32(R(4),R(7));
  R(3)=LD32(R(5)+44);
  ST32(R(2),R(3));
  { R(6)=LD32(R(5)+48); goto L8c05af3a; }
L8c05af16:;
  R(7)=LD32(R(6));
  R(3)=R(7);
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c05af28;
  R(7)>>=2;
  R(0)=R(7);
  R(0)+=0x1u;
  { R(0)<<=2; goto L8c05af2a; }
L8c05af28:;
  R(0)=R(7);
L8c05af2a:;
  R(2)=LD32(R(4));
  ST32(R(2)+4,R(0));
  R(4)=LD32(R(4));
  R(3)=LD32(R(6)+4);
  R(4)+=0x4u;
  R(2)=LD32(R(4));
  ST32(R(2),R(3));
  R(6)=LD32(R(6)+8);
L8c05af3a:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c05af16;
  R(3)=LD32(R(4));
  R(2)=0x0u;
  R(0)=0x1u;
  ST32(R(3)+4,R(2));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05aeec(SH4Ctx *c) {
  R(14)=0x3u;
  R(4)=R(5);
  R(3)=0x0u;
  ST32(R(5)+36,R(3));
  R(6)=LD32(R(5)+40);
  R(2)=R(6);
  c->t=(R(2)&R(14))==0;
  { uint32_t k=c->t; R(4)+=0x20u; if(k) goto L8c05af08; }
  R(6)>>=2;
  R(7)=R(6);
  R(7)+=0x1u;
  { R(7)<<=2; goto L8c05af0a; }
L8c05af08:;
  R(7)=R(6);
L8c05af0a:;
  R(2)=R(7);
  ST32(R(4),R(7));
  R(3)=LD32(R(5)+44);
  ST32(R(2),R(3));
  { R(6)=LD32(R(5)+48); goto L8c05af3a; }
L8c05af16:;
  R(7)=LD32(R(6));
  R(3)=R(7);
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c05af28;
  R(7)>>=2;
  R(0)=R(7);
  R(0)+=0x1u;
  { R(0)<<=2; goto L8c05af2a; }
L8c05af28:;
  R(0)=R(7);
L8c05af2a:;
  R(2)=LD32(R(4));
  ST32(R(2)+4,R(0));
  R(4)=LD32(R(4));
  R(3)=LD32(R(6)+4);
  R(4)+=0x4u;
  R(2)=LD32(R(4));
  ST32(R(2),R(3));
  R(6)=LD32(R(6)+8);
L8c05af3a:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c05af16;
  R(3)=LD32(R(4));
  R(2)=0x0u;
  R(0)=0x1u;
  ST32(R(3)+4,R(2));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05af4a(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c05af4e(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c05af52(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c05af56(SH4Ctx *c) {
  { R(0)=LD32(R(4)); return; }
}
void f_8c05af5a(SH4Ctx *c) {
  R(6)=R(4);
  R(4)=LD32(R(6)+32);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c05af72; }
L8c05af64:;
  R(3)=LD32(R(4));
  c->t=R(3)>R(5);
  if(!c->t) goto L8c05af6c;
  R(5)=LD32(R(4));
L8c05af6c:;
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05af64;
L8c05af72:;
  { R(0)=R(5); return; }
}
void f_8c05af76(SH4Ctx *c) {
  R(6)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(6)+32);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c05af8c; }
L8c05af82:;
  R(3)=LD32(R(4));
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(5)+=R(3); if(k) goto L8c05af82; }
L8c05af8c:;
  R(3)=LD32(R(6));
  c->t=R(3)>=R(5);
  if(c->t) goto L8c05af96;
  { R(4)=0xffffffffu; goto L8c05afaa; }
L8c05af96:;
  R(7)=LD32(R(6));
  R(3)=0x64u;
  R(2)=0x8c0679f4u;
  R(1)=R(7);
  R(1)-=R(5);
  c->macl=R(1)*R(3);
  R(1)=c->macl;
  { c->pr=0x8c05afa8u; R(0)=R(7); f_8c0679f4(c); }
  R(4)=R(0);
L8c05afaa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c05afb0(SH4Ctx *c) {
  R(6)=R(4);
  R(0)=LD32(R(6)+28);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c05afc0; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c05afc4;
L8c05afc0:;
  { R(0)=0x0u; return; }
L8c05afc4:;
  R(4)=LD32(R(6)+36);
  R(7)=0x0u;
  R(1)=R(7);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(0)=0x1u; if(k) goto L8c05afe8; }
L8c05afd0:;
  R(2)=LD32(R(6)+20);
  R(2)+=R(4);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c05afde;
  R(7)=R(0);
  { R(1)=LD32(R(4)+4); goto L8c05afe0; }
L8c05afde:;
  R(4)=LD32(R(4));
L8c05afe0:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05afe8;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c05afd0;
L8c05afe8:;
  R(0)=R(1);
  {  return; }
}
void f_8c05afc4(SH4Ctx *c) {
  R(4)=LD32(R(6)+36);
  R(7)=0x0u;
  R(1)=R(7);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(0)=0x1u; if(k) goto L8c05afe8; }
L8c05afd0:;
  R(2)=LD32(R(6)+20);
  R(2)+=R(4);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c05afde;
  R(7)=R(0);
  { R(1)=LD32(R(4)+4); goto L8c05afe0; }
L8c05afde:;
  R(4)=LD32(R(4));
L8c05afe0:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05afe8;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c05afd0;
L8c05afe8:;
  R(0)=R(1);
  {  return; }
}
void f_8c05b006(SH4Ctx *c) {
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c05b012;
  c->t=(int32_t)R(0)==1;
  if(c->t) { f_8c05b092(c); return; }
  {  { f_8c05b0c0(c); return; } }
L8c05b012:;
  R(4)=LD32(R(6)+32);
  c->t=(R(4)&R(4))==0;
  if(c->t) { f_8c05b068(c); return; }
  { f_8c05b018(c); return; }
}
void f_8c05b018(SH4Ctx *c) {
L8c05b018:;
  R(0)=LD32(R(4));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)+=R(0); if(k) goto L8c05b060; }
  R(2)=LD32(R(4)+4);
  R(0)+=R(4);
  c->t=R(0)==R(2);
  if(c->t) goto L8c05b060;
  { R(5)=0x1u; goto L8c05b062; }
L8c05b060:;
  R(5)=0x0u;
L8c05b062:;
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05b018;
  { f_8c05b068(c); return; }
}
void f_8c05b060(SH4Ctx *c) {
  R(5)=0x0u;
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) { f_8c05b018(c); return; }
  { f_8c05b068(c); return; }
}
void f_8c05b068(SH4Ctx *c) {
  R(4)=LD32(R(6)+36);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05b07c;
L8c05b06e:;
  R(2)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(3)=LD32(R(6)+24);
  c->t=(R(4)&R(4))==0;
  R(2)+=R(3);
  { uint32_t k=!c->t; R(13)+=R(2); if(k) goto L8c05b06e; }
L8c05b07c:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c05b08e;
  R(3)=LD32(R(6));
  R(4)=R(7);
  R(4)+=R(13);
  c->t=R(4)==R(3);
  if(!c->t) goto L8c05b08e;
  { R(4)=0x1u; { f_8c05b0c0(c); return; } }
L8c05b08e:;
  { R(4)=0x0u; { f_8c05b0c0(c); return; } }
}
void f_8c05b092(SH4Ctx *c) {
  R(4)=LD32(R(6)+32);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05b0b2;
L8c05b098:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c05b0aa;
  R(3)=LD32(R(4));
  R(2)=LD32(R(4)+4);
  R(3)+=R(4);
  c->t=R(3)==R(2);
  if(c->t) goto L8c05b0aa;
  { R(5)=0x1u; goto L8c05b0ac; }
L8c05b0aa:;
  R(5)=0x0u;
L8c05b0ac:;
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05b098;
L8c05b0b2:;
  R(4)=LD32(R(6)+36);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05b0be;
L8c05b0b8:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05b0b8;
L8c05b0be:;
  R(4)=R(5);
  { f_8c05b0c0(c); return; }
}
void f_8c05b0c0(SH4Ctx *c) {
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c05b0c6(SH4Ctx *c) {
  R(0)=LD32(R(4)+28);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05b114;
  R(2)=LD32(R(5));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c05b0de;
  R(3)=LD32(R(4)+36);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(5)+12,R(3)); if(k) goto L8c05b0e4; }
  {  goto L8c05b114; }
L8c05b0de:;
  R(2)=LD32(R(5)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05b114;
L8c05b0e4:;
  R(3)=LD32(R(4)+20);
  R(6)=LD32(R(5)+12);
  R(3)+=R(6);
  ST32(R(5),R(3));
  R(0)=LD32(R(4)+28);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c05b0fa;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05b100;
  {  goto L8c05b104; }
L8c05b0fa:;
  R(2)=LD32(R(6)+4);
  { ST32(R(5)+4,R(2)); goto L8c05b104; }
L8c05b100:;
  R(1)=0x0u;
  ST32(R(5)+4,R(1));
L8c05b104:;
  R(3)=LD32(R(4)+24);
  ST32(R(5)+8,R(3));
  R(2)=LD32(R(5)+12);
  R(3)=LD32(R(2));
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(5)+12,R(3)); if(k) goto L8c05b118; }
L8c05b114:;
  { R(0)=0x0u; return; }
L8c05b118:;
  R(0)=0x1u;
  {  return; }
}
void f_8c05b118(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c05b124(SH4Ctx *c) {
  R(2)=0x0u;
  { ST32(R(4)+12,R(2)); return; }
}
void f_8c05b12a(SH4Ctx *c) {
  { R(0)=LD32(R(4)+12); return; }
}
void f_8c05b12e(SH4Ctx *c) {
  { R(0)=LD32(R(4)+16); return; }
}
void f_8c05b160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0808bau;
  { c->pr=0x8c05b16eu;  f_8c0808ba(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05b1e8;
  R(3)=0x8c0cf070u;
  { c->pr=0x8c05b178u;  f_8c0cf070(c); }
  c->t=(int32_t)R(0)==6;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c05b184; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c05b1c6;
L8c05b184:;
  R(4)=0x8c0bb6e8u;
  R(12)=0x8c065166u;
  R(13)=R(4);
  R(13)+=0x20u;
  R(14)=R(4);
  c->t=R(14)>=R(13);
  if(c->t) goto L8c05b19e;
L8c05b192:;
  { uint32_t tg=R(12); c->pr=0x8c05b196u; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  { uint32_t tg=R(12); c->pr=0x8c05b19au; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  c->t=R(14)>=R(13);
  if(!c->t) goto L8c05b192;
L8c05b19e:;
  R(2)=0x8c123b08u;
  R(4)=(int32_t)(int8_t)LD8(R(2));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==9;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c05b1c0; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05b1c0;
  R(3)=0x8c010fa0u;
  { c->pr=0x8c05b1b6u;  f_8c010fa0(c); }
  R(2)=0x8c0ccc2cu;
  { c->pr=0x8c05b1bcu;  f_8c0ccc2c(c); }
  {  goto L8c05b1c6; }
L8c05b1c0:;
  R(2)=0x8c044fc0u;
  { c->pr=0x8c05b1c6u; R(4)=0x2u; f_8c044fc0(c); }
L8c05b1c6:;
  R(4)=0x8c0c67d4u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)+=0x1u;
  ST8(R(4),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(0)&0x7)==0;
  if(!c->t) goto L8c05b1e8;
  R(3)=0x8c0c429cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c05b1e8;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0cf088u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0cf088(c); return; } }
L8c05b1e8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05b1f2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(0)==-23;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c05b206;
  R(0)=R(5);
  c->t=(int32_t)R(0)==-33;
  if(!c->t) goto L8c05b252;
L8c05b206:;
  R(4)=0x8c0bb6e8u;
  R(13)=0x8c065166u;
  R(12)=R(4);
  R(12)+=0x20u;
  R(14)=R(4);
  c->t=R(14)>=R(12);
  if(c->t) goto L8c05b220;
L8c05b214:;
  { uint32_t tg=R(13); c->pr=0x8c05b218u; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c05b21cu; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c05b214;
L8c05b220:;
  R(3)=0x8c123b08u;
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==9;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c05b244; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05b244;
  R(3)=0x8c010fa0u;
  { c->pr=0x8c05b238u;  f_8c010fa0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0ccc2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ccc2c(c); return; } }
L8c05b244:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c044fc0u;
  R(4)=0x2u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044fc0(c); return; } }
L8c05b252:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05b25c(SH4Ctx *c) {
  R(3)=0x8c0cf042u;
  R(4)=0x8c05b1f2u;
  { R(5)=0x0u; { f_8c0cf042(c); return; } }
}
void f_8c05b2c0(SH4Ctx *c) {
  R(2)=0x8c0c67c4u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c05b2c8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  c->t=R(13)>=R(3);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(4)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c05b348; }
  R(12)=0x8c0c67c4u;
  c->t=R(13)==R(6);
  R(11)=0x1u;
  { uint32_t k=!c->t; R(11)=sh4_shad(R(11),R(13)); if(k) goto L8c05b316; }
  R(1)=0x8c0c67ccu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05b316;
  R(5)=0x8c0c67d0u;
  R(6)=0x8c0c67ccu;
  R(3)=LD32(R(5));
  R(3)+=0xffffffffu;
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; ST32(R(5),R(3)); if(k) goto L8c05b30c; }
  R(3)=~R(11);
  ST32(R(5),R(4));
  ST32(R(6),R(4));
  R(2)=LD32(R(12));
  R(2)&=R(3);
  { ST32(R(12),R(2)); goto L8c05b328; }
L8c05b30c:;
  R(1)=LD32(R(12));
  c->t=(R(1)&R(11))==0;
  if(!c->t) goto L8c05b328;
  { R(14)=LD32(R(6)); goto L8c05b328; }
L8c05b316:;
  R(3)=R(13);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c05b324;
  R(14)=0x8c2d1d9cu;
  { R(14)=LD32(R(14)); goto L8c05b328; }
L8c05b324:;
  R(3)=0x8c0c67c8u;
  R(14)=LD32(R(3));
L8c05b328:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05b344;
  R(0)=0x8c0b9134u;
  R(4)=R(13);
  R(3)=0x8c019d80u;
  R(5)=R(14);
  R(4)<<=2;
  { c->pr=0x8c05b33au; R(4)=LD32(R(4)+R(0)); f_8c019d80(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05b344;
  R(3)=LD32(R(12));
  R(3)|=R(11);
  ST32(R(12),R(3));
L8c05b344:;
  { R(0)=0x1u; goto L8c05b34a; }
L8c05b348:;
  R(0)=0x0u;
L8c05b34a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05b380(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x8c0c67d8u;
  R(10)=0x1u;
  ST32(R(15)+4,R(4));
  R(11)=0x0u;
  R(2)=0x8c088fa0u;
  R(14)=R(11);
  ST32(R(15),R(5));
  R(5)=0x40u;
  R(3)=LD32(R(12));
  R(4)=R(3);
  R(10)=sh4_shad(R(10),R(3));
  { c->pr=0x8c05b3acu; R(4)+=0x4u; f_8c088fa0(c); }
  R(3)=0x7ffeu;
  R(13)=0x8c0c67c4u;
  c->t=R(0)==R(3);
  R(9)=0x8c0c67dcu;
  R(5)=c->t;
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(4)=~R(10); if(k) goto L8c05b3c2; }
  {  goto L8c05b486; }
L8c05b3c2:;
  R(2)=LD32(R(12));
  R(1)=LD32(R(15));
  c->t=R(2)==R(1);
  if(!c->t) goto L8c05b420;
  R(1)=0x8c0c67ccu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05b420;
  R(5)=0x8c0c67d0u;
  R(6)=0x8c0c67ccu;
  R(3)=LD32(R(5));
  R(3)+=0xffffffffu;
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; ST32(R(5),R(3)); if(k) goto L8c05b3ec; }
  ST32(R(5),R(11));
  ST32(R(6),R(11));
  R(3)=LD32(R(13));
  R(3)&=R(4);
  { ST32(R(13),R(3)); goto L8c05b466; }
L8c05b3ec:;
  R(1)=LD32(R(13));
  c->t=(R(1)&R(10))==0;
  if(!c->t) goto L8c05b466;
  { R(14)=LD32(R(6)); goto L8c05b466; }
L8c05b420:;
  R(3)=LD32(R(12));
  R(1)=LD32(R(15)+4);
  c->t=R(3)&1;R(3)>>=1;
  c->t=R(3)==R(1);
  if(c->t) goto L8c05b448;
  R(2)=0x8c05bd92u;
  { c->pr=0x8c05b430u;  f_8c05bd92(c); }
  R(3)=0x1u;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c05b45c;
  R(0)=0x8c0c67d8u;
  R(2)=0x8c05bd92u;
  R(1)=LD32(R(0));
  c->t=R(1)&1;R(1)>>=1;
  { c->pr=0x8c05b442u; R(8)=R(1); f_8c05bd92(c); }
  R(0)+=0xffffffffu;
  c->t=R(8)>R(0);
  if(c->t) goto L8c05b45c;
L8c05b448:;
  R(0)=LD32(R(9));
  R(4)=0x8c2d1d9cu;
  c->t=R(0)&1;R(0)>>=1;
  R(0)<<=2;
  R(14)=LD32(R(4)+R(0));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05b466;
  ST32(R(9),R(11));
  { R(14)=LD32(R(4)); goto L8c05b466; }
L8c05b45c:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(10))==0;
  if(!c->t) goto L8c05b466;
  R(1)=0x8c0c67c8u;
  R(14)=LD32(R(1));
L8c05b466:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05b48c;
  R(3)=0x8c0c67d8u;
  R(5)=R(14);
  R(0)=0x8c0b9134u;
  R(4)=LD32(R(3));
  R(2)=0x8c019d80u;
  R(4)<<=2;
  { c->pr=0x8c05b47au; R(4)=LD32(R(4)+R(0)); f_8c019d80(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05b48c;
  R(2)=LD32(R(13));
  R(2)|=R(10);
  { ST32(R(13),R(2)); goto L8c05b48c; }
L8c05b486:;
  R(1)=LD32(R(13));
  R(1)&=R(4);
  ST32(R(13),R(1));
L8c05b48c:;
  R(3)=LD32(R(12));
  R(2)=0x8u;
  R(3)+=0x1u;
  c->t=R(3)>=R(2);
  ST32(R(12),R(3));
  if(!c->t) goto L8c05b4a8;
  R(3)=0xcu;
  ST32(R(12),R(11));
  R(1)=LD32(R(9));
  R(1)+=0x1u;
  c->t=R(1)>=R(3);
  ST32(R(9),R(1));
  if(!c->t) goto L8c05b4a8;
  ST32(R(9),R(11));
L8c05b4a8:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05b4bc(SH4Ctx *c) {
  R(3)=0x6u;
  R(5)+=0xffffffffu;
  c->t=R(5)>=R(3);
  if(c->t) goto L8c05b4d0;
  R(2)=0x8c0c67c4u;
  R(1)=0x0u;
  R(0)=0x8c2d1d9cu;
  R(5)<<=2;
  ST32(R(5)+R(0),R(4));
  ST32(R(2),R(1));
L8c05b4d0:;
  {  return; }
}
void f_8c05b4d4(SH4Ctx *c) {
  R(3)=0x8c0c67c8u;
  R(2)=0x0u;
  R(1)=0x8c0c67c4u;
  ST32(R(3),R(4));
  { ST32(R(1),R(2)); return; }
}
void f_8c05b4e0(SH4Ctx *c) {
  R(2)=0x8c0c67d0u;
  R(1)=0x0u;
  R(3)=0x8c0c67ccu;
  R(0)=0x8c0c67c4u;
  ST32(R(3),R(4));
  ST32(R(2),R(5));
  { ST32(R(0),R(1)); return; }
}
void f_8c05b4f0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c088bdau;
  R(14)=0x8c0c67e0u;
  { c->pr=0x8c05b4fcu; R(4)=LD32(R(14)); f_8c088bda(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05b508;
  R(3)=0x8c088d2eu;
  { c->pr=0x8c05b508u; R(4)=LD32(R(14)); f_8c088d2e(c); }
L8c05b508:;
  R(2)=LD32(R(14));
  R(3)=0xcu;
  R(2)+=0x1u;
  c->t=R(2)>=R(3);
  ST32(R(14),R(2));
  if(!c->t) goto L8c05b518;
  R(1)=0x0u;
  ST32(R(14),R(1));
L8c05b518:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05b560(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x8c0c879cu;
  ST16(R(15),R(4));
  R(0)=(int32_t)(int16_t)LD16(R(12));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05b578;
  { R(0)=0x0u; goto L8c05b60e; }
L8c05b578:;
  R(3)=0x8c0cf54eu;
  R(0)=0x4u;
  { c->pr=0x8c05b580u; ST16(R(15)+4,R(0)); f_8c0cf54e(c); }
  R(6)=0x8c2d1dbcu;
  R(13)=0x0u;
  R(5)=R(13);
  R(0)=0x18u;
  R(4)=R(13);
  R(7)=R(6);
L8c05b58c:;
  R(2)=R(4);
  R(14)=R(5);
  R(3)=R(14);
  R(2)<<=2;
  R(3)+=0x1u;
  ST32(R(7),R(5));
  R(2)+=R(6);
  ST32(R(2)+16,R(3));
  R(2)=R(4);
  R(2)+=0x4u;
  R(2)<<=2;
  R(14)+=0x2u;
  R(2)+=R(6);
  R(5)+=0x6u;
  ST32(R(2)+4,R(14));
  R(4)+=0x2u;
  R(14)=R(5);
  R(3)=R(4);
  R(3)<<=2;
  R(2)=R(14);
  R(2)+=0x1u;
  R(3)+=R(6);
  R(14)+=0x2u;
  R(7)+=0x4u;
  ST32(R(7),R(5));
  ST32(R(3)+16,R(2));
  R(3)=R(4);
  R(3)+=0x4u;
  R(3)<<=2;
  R(3)+=R(6);
  R(4)+=0x2u;
  ST32(R(3)+4,R(14));
  R(5)+=0x6u;
  c->t=(int32_t)R(5)>=(int32_t)R(0);
  { uint32_t k=!c->t; R(7)+=0x4u; if(k) goto L8c05b58c; }
  R(4)=0x8c0c879cu;
  R(6)=0x18u;
  R(14)=0x8c0686b8u;
  { c->pr=0x8c05b5deu; R(5)=0x0u; f_8c0686b8(c); }
  R(4)=0x8c2e2544u;
  R(6)=0x30u;
  { uint32_t tg=R(14); c->pr=0x8c05b5e6u; R(5)=0x0u; sh4_call(c,tg); }
  R(4)=0x8c2e2574u;
  R(6)=0x30u;
  { uint32_t tg=R(14); c->pr=0x8c05b5eeu; R(5)=0x0u; sh4_call(c,tg); }
  R(0)=(int32_t)(int16_t)LD16(R(15));
  R(3)=0x1u;
  R(2)=0x8c2e25e4u;
  ST16(R(12)+20,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(1)=0x8c2e25d4u;
  ST16(R(12)+2,R(0));
  R(0)=R(13);
  ST16(R(12)+4,R(0));
  ST16(R(12),R(3));
  R(3)=0x0u;
  ST16(R(12)+12,R(0));
  ST32(R(2),R(3));
  R(3)=0x8c2e25d6u;
  ST16(R(1),R(0));
  ST16(R(3),R(0));
L8c05b60e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05b61a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(8)=0x8c0c879cu;
  R(0)=R(4);
  R(2)=0x8c05b4f0u;
  ST16(R(15)+8,R(0));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(8)+16);
  R(3)+=0x1u;
  { c->pr=0x8c05b63eu; ST32(R(8)+16,R(3)); f_8c05b4f0(c); }
  R(12)=0x8c0c6828u;
  R(10)=0x0u;
  R(13)=0x8c2e2574u;
  R(9)=0x8c0c682cu;
  { R(11)=0x1u; goto L8c05b91c; }
L8c05b6a0:;
  R(2)=0x8c088bdau;
  { c->pr=0x8c05b6a6u; R(4)=R(10); f_8c088bda(c); }
  R(3)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(3);
  if(c->t) goto L8c05b6b2;
  {  goto L8c05b91a; }
L8c05b6b2:;
  R(2)=0x8c0c6834u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c05b6ca;
  R(0)=(int32_t)(int16_t)LD16(R(8)+12);
  R(1)=R(11);
  R(1)=sh4_shad(R(1),R(10));
  R(0)=R(0)&0xFFFF;
  c->t=(R(0)&R(1))==0;
  if(!c->t) goto L8c05b6ca;
  {  goto L8c05b91a; }
L8c05b6ca:;
  R(0)=0x8c2e2544u;
  R(14)=R(10);
  R(14)<<=2;
  R(3)=0x8c0880d6u;
  R(6)=LD32(R(14)+R(0));
  R(0)=R(14);
  R(5)=LD32(R(13)+R(0));
  { c->pr=0x8c05b6dcu; R(4)=R(10); f_8c0880d6(c); }
  R(3)=0x7ffeu;
  R(4)=(uint32_t)(int32_t)(int16_t)R(0);
  R(2)=R(4);
  c->t=R(2)==R(3);
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c05b6f2; }
  R(0)=0x8c2e2544u;
  R(1)=0xau;
  R(2)=LD32(R(14)+R(0));
  R(1)+=R(2);
  ST16(R(1),R(11));
L8c05b6f2:;
  R(0)=R(14);
  R(4)=LD32(R(13)+R(0));
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05b718;
  R(3)=0x14u;
  R(3)+=R(4);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05b718;
  R(3)=0x16u;
  R(3)+=R(4);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05b718;
  R(2)=0x8c0c6824u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05b722;
L8c05b718:;
  R(3)=0x8c0d115eu;
  { c->pr=0x8c05b71eu;  f_8c0d115e(c); }
  R(2)=0x8c2d1050u;
  ST32(R(2),R(0));
L8c05b722:;
  R(3)=0x8c05bd92u;
  { c->pr=0x8c05b728u;  f_8c05bd92(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05b7c0;
  R(2)=0x8c0c6830u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05b748;
  R(3)=0x8c05cad6u;
  { c->pr=0x8c05b73cu;  f_8c05cad6(c); }
  c->t=R(0)==R(10);
  if(c->t) goto L8c05b748;
  R(2)=0x8c0c6834u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05b7f2;
L8c05b748:;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05b7f2;
  R(0)=0x8c2e2544u;
  R(2)=0x60eu;
  R(3)=LD32(R(14)+R(0));
  R(0)=R(14);
  R(3)=LD32(R(3));
  R(3)&=R(2);
  ST32(R(9),R(3));
  R(3)=LD32(R(13)+R(0));
  R(1)=LD32(R(9));
  R(3)=LD32(R(3)+4);
  R(1)&=R(3);
  R(0)=R(1);
  ST32(R(12),R(1));
  R(3)=LD32(R(9));
  c->t=R(0)==R(3);
  if(c->t) goto L8c05b7f2;
  R(1)=0x8c0c6838u;
  R(3)=0x0u;
  ST32(R(12),R(3));
  { ST32(R(1),R(11)); goto L8c05b7f2; }
L8c05b7c0:;
  c->t=(int32_t)R(10)>=(int32_t)R(4);
  if(c->t) goto L8c05b7f2;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05b7f2;
  R(0)=0x8c2e2544u;
  R(2)=0x60eu;
  R(3)=LD32(R(14)+R(0));
  R(0)=R(14);
  R(3)=LD32(R(3));
  R(3)&=R(2);
  ST32(R(9),R(3));
  R(3)=LD32(R(13)+R(0));
  R(1)=LD32(R(9));
  R(3)=LD32(R(3)+4);
  R(1)&=R(3);
  R(0)=R(1);
  ST32(R(12),R(1));
  R(3)=LD32(R(9));
  c->t=R(0)==R(3);
  if(c->t) goto L8c05b7f2;
  R(1)=0x8c0c6838u;
  R(3)=0x0u;
  ST32(R(12),R(3));
  ST32(R(1),R(11));
L8c05b7f2:;
  R(3)=R(15);
  R(3)+=0x8u;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05b810;
  R(0)=0x8c2e2544u;
  R(2)=0xau;
  R(3)=LD32(R(14)+R(0));
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(0)=R(3)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05b810;
  {  goto L8c05b91a; }
L8c05b810:;
  R(3)=LD32(R(15));
  R(2)=0x7ffeu;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c05b826;
  R(0)=0x8c2e2544u;
  R(3)=0x8c088180u;
  R(6)=LD32(R(14)+R(0));
  R(0)=R(14);
  R(5)=LD32(R(13)+R(0));
  { c->pr=0x8c05b826u; R(4)=R(10); f_8c088180(c); }
L8c05b826:;
  R(3)=LD32(R(15));
  R(2)=0x7fffu;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c05b832;
  {  goto L8c05b91a; }
L8c05b832:;
  R(3)=0x8c2e25a4u;
  R(0)=R(14);
  R(1)=0xeu;
  ST32(R(15),R(3));
  R(3)=LD32(R(13)+R(0));
  R(1)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05b8a0;
  R(4)=R(14);
  R(4)+=R(13);
  R(5)=LD32(R(15));
  R(1)=LD32(R(4));
  R(5)+=R(14);
  R(0)=LD32(R(1));
  R(3)=LD32(R(5));
  ST32(R(3),R(0));
  R(1)=LD32(R(4));
  R(3)=LD32(R(5));
  R(0)=LD32(R(1)+4);
  ST32(R(3)+4,R(0));
  R(0)=LD32(R(4));
  R(3)=LD32(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(0)+20);
  ST16(R(3)+8,R(0));
  R(0)=LD32(R(4));
  R(3)=LD32(R(5));
  R(0)=(int32_t)(int16_t)LD16(R(0)+22);
  ST16(R(3)+10,R(0));
  R(0)=R(11);
  R(1)=LD32(R(8)+16);
  R(3)=LD32(R(4));
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(4));
  ST16(R(3)+14,R(0));
  {  goto L8c05b91a; }
L8c05b8a0:;
  R(5)=LD32(R(13)+R(0));
  R(3)=0xcu;
  R(0)=(int32_t)(int16_t)LD16(R(8)+20);
  R(3)+=R(5);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(0)+=0xffffffffu;
  R(5)=R(5)&0xFFFF;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>(int32_t)R(0);
  if(!c->t) goto L8c05b8b6;
  R(5)=0x0u;
L8c05b8b6:;
  R(6)=R(5);
  c->t=R(6)>>31;R(6)<<=1;
  R(4)=R(14);
  R(3)=R(5);
  R(7)=LD32(R(15));
  R(4)+=R(13);
  R(6)+=R(3);
  R(3)=LD32(R(4));
  R(7)+=R(14);
  R(2)=LD32(R(7));
  R(6)<<=2;
  R(1)=LD32(R(3));
  R(2)+=R(6);
  ST32(R(2),R(1));
  R(2)=LD32(R(4));
  R(3)=LD32(R(7));
  R(1)=LD32(R(2)+4);
  R(3)+=R(6);
  ST32(R(3)+4,R(1));
  R(0)=LD32(R(4));
  R(3)=LD32(R(7));
  R(0)=(int32_t)(int16_t)LD16(R(0)+20);
  R(3)+=R(6);
  ST16(R(3)+8,R(0));
  R(3)=LD32(R(7));
  R(0)=LD32(R(4));
  R(6)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(0)+22);
  ST16(R(6)+10,R(0));
  R(3)=LD32(R(4));
  R(2)=LD32(R(8)+16);
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4));
  R(0)=R(5);
  ST16(R(3)+12,R(0));
  R(3)=LD32(R(4));
  R(0)=(int32_t)(int16_t)LD16(R(3)+14);
  R(3)=R(0)&0xFFFF;
  R(0)=(int32_t)(int16_t)LD16(R(8)+20);
  c->t=R(3)==R(0);
  if(c->t) goto L8c05b91a;
  R(0)=R(14);
  R(3)=LD32(R(13)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(2)=(int32_t)(int16_t)LD16(R(2));
  R(1)=0xeu;
  R(1)+=R(3);
  R(2)+=0x1u;
  ST16(R(1),R(2));
L8c05b91a:;
  R(10)+=0x1u;
L8c05b91c:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  if(c->t) goto L8c05b926;
  {  goto L8c05b6a0; }
L8c05b926:;
  R(2)=0x8c0c6834u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05b96c;
  R(3)=LD32(R(15)+4);
  R(14)=0x0u;
  R(5)=0x0u;
  c->t=(int32_t)R(3)>0;
  R(14)+=R(13);
  { uint32_t k=!c->t; R(4)=R(14); if(k) goto L8c05b96c; }
L8c05b93c:;
  R(2)=LD32(R(4));
  R(5)+=0x1u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(2)+4);
  R(1)=LD32(R(3)+4);
  R(1)|=R(2);
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(4));
  R(3)=LD32(R(14));
  R(0)=(int32_t)(int16_t)LD16(R(2)+20);
  R(2)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(3)+20);
  R(0)|=R(2);
  ST16(R(3)+20,R(0));
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  R(3)=LD32(R(14));
  R(0)=(int32_t)(int16_t)LD16(R(2)+22);
  R(2)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(3)+22);
  R(0)|=R(2);
  ST16(R(3)+22,R(0));
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c05b93c;
L8c05b96c:;
  R(0)=0x7ffeu;
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
void f_8c05b9c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c879cu;
  R(7)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05b9d6;
  R(0)=0x1001u;
  { ST32(R(7),R(0)); goto L8c05baaa; }
L8c05b9d6:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c05b9e2;
  R(2)=0xbu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c05b9ea;
L8c05b9e2:;
  R(1)=0x1005u;
  ST32(R(7),R(1));
  {  goto L8c05baaa; }
L8c05b9ea:;
  R(2)=0x8c0c87a8u;
  R(1)=0x1u;
  R(1)=sh4_shad(R(1),R(14));
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(1))==0;
  if(!c->t) goto L8c05ba00;
  R(1)=0x1002u;
  ST32(R(7),R(1));
  {  goto L8c05baaa; }
L8c05ba00:;
  c->fr[5]=0x3F800000u;
  fp_arith(c,0,5,5);
  R(7)=0x8c2e2544u;
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(13)=0x8c2e2574u;
  c->t=(int32_t)R(0)==1;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  { uint32_t k=c->t; R(14)<<=2; if(k) goto L8c05ba40; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05ba72;
  {  goto L8c05baaa; }
L8c05ba40:;
  R(0)=R(14);
  R(3)=LD32(R(13)+R(0));
  R(2)=0x14u;
  R(4)=LD32(R(7)+R(0));
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  ST32(R(15),R(4));
  c->fpul=R(3);
  R(3)=0xeu;
  R(3)+=R(4);
  R(5)=LD32(R(15));
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0xcu;
  R(3)+=R(5);
  fp_float(c,4);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=R(4);
  R(3)-=R(5);
  c->fpul=R(3);
  R(5)+=R(4);
  fp_float(c,3);
  fp_arith(c,3,3,5);
  fp_mov(c,6,3);
  { c->fpul=R(5); goto L8c05baa2; }
L8c05ba72:;
  R(0)=R(14);
  R(3)=LD32(R(13)+R(0));
  R(2)=0x16u;
  R(5)=LD32(R(7)+R(0));
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  ST32(R(15),R(5));
  c->fpul=R(3);
  R(3)=0x16u;
  R(3)+=R(5);
  R(4)=LD32(R(15));
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0x14u;
  R(3)+=R(4);
  fp_float(c,4);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(3)=R(5);
  R(3)-=R(4);
  c->fpul=R(3);
  R(4)+=R(5);
  fp_float(c,3);
  c->fpul=R(4);
  fp_arith(c,3,3,5);
  fp_mov(c,6,3);
L8c05baa2:;
  fp_float(c,2);
  fp_mov(c,7,2);
  { fp_arith(c,3,7,5); goto L8c05bab0; }
L8c05baaa:;
  R(0)=0x7fffu;
  {  goto L8c05bab8; }
L8c05bab0:;
  fp_arith(c,1,4,7);
  R(0)=0x0u;
  fp_arith(c,3,4,6);
  fp_st(c,4,R(6));
L8c05bab8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05bac0(SH4Ctx *c) {
  R(15)+=0xffffffffu;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c879cu;
  R(13)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05baf6;
  R(0)=0x1001u;
  { ST32(R(13),R(0)); goto L8c05bbec; }
L8c05baf6:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c05bb02;
  R(2)=0xbu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c05bb0a;
L8c05bb02:;
  R(1)=0x1005u;
  ST32(R(13),R(1));
  {  goto L8c05bbec; }
L8c05bb0a:;
  R(2)=0x8c0c87a8u;
  R(1)=0x1u;
  R(1)=sh4_shad(R(1),R(14));
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(1))==0;
  if(!c->t) goto L8c05bb20;
  R(1)=0x1002u;
  ST32(R(13),R(1));
  {  goto L8c05bbec; }
L8c05bb20:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2574u;
  R(4)<<=2;
  R(14)=R(4);
  R(3)=LD32(R(14)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(1)=R(6);
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(1)>(int32_t)R(3);
  if(!c->t) goto L8c05bb60;
  R(2)=0x100bu;
  { ST32(R(13),R(2)); goto L8c05bbec; }
L8c05bb60:;
  R(3)=LD32(R(14)+R(0));
  R(2)=0xcu;
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  R(2)+=R(3);
  R(13)=0x8c2e2544u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(6)=0x8c2e25a4u;
  R(3)=R(3)&0xFFFF;
  R(3)-=R(1);
  R(4)=R(3);
  c->t=R(4)>>31;R(4)<<=1;
  R(2)=R(3);
  c->t=(int32_t)R(0)==1;
  ST32(R(15),R(3));
  R(4)+=R(2);
  { uint32_t k=c->t; R(4)<<=2; if(k) goto L8c05bb8e; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05bbb6;
  {  goto L8c05bbec; }
L8c05bb8e:;
  R(0)=R(14);
  R(2)=LD32(R(6)+R(0));
  R(3)=0x8u;
  R(6)=LD32(R(13)+R(0));
  R(2)+=R(4);
  R(3)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->fpul=R(3);
  R(3)=0xeu;
  R(3)+=R(6);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0xcu;
  R(3)+=R(6);
  fp_float(c,5);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=R(4);
  R(3)-=R(5);
  c->fpul=R(3);
  {  goto L8c05bbda; }
L8c05bbb6:;
  R(0)=R(14);
  R(2)=LD32(R(6)+R(0));
  R(3)=0xau;
  R(6)=LD32(R(13)+R(0));
  R(2)+=R(4);
  R(3)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->fpul=R(3);
  R(3)=0x16u;
  R(3)+=R(6);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0x14u;
  R(3)+=R(6);
  fp_float(c,5);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=R(4);
  R(3)-=R(5);
  c->fpul=R(3);
L8c05bbda:;
  fp_float(c,3);
  R(5)+=R(4);
  c->fpul=R(5);
  fp_float(c,2);
  fp_arith(c,3,3,4);
  fp_mov(c,6,2);
  fp_mov(c,7,3);
  { fp_arith(c,3,6,4); goto L8c05bc20; }
L8c05bbec:;
  R(0)=0x7fffu;
  {  goto L8c05bc28; }
L8c05bc20:;
  fp_arith(c,1,5,6);
  R(0)=0x0u;
  fp_arith(c,3,5,7);
  fp_st(c,5,R(7));
L8c05bc28:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05bae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c879cu;
  R(13)=0x8c2e2540u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05baf6;
  R(0)=0x1001u;
  { ST32(R(13),R(0)); goto L8c05bbec; }
L8c05baf6:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c05bb02;
  R(2)=0xbu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c05bb0a;
L8c05bb02:;
  R(1)=0x1005u;
  ST32(R(13),R(1));
  {  goto L8c05bbec; }
L8c05bb0a:;
  R(2)=0x8c0c87a8u;
  R(1)=0x1u;
  R(1)=sh4_shad(R(1),R(14));
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(3)=R(3)&0xFFFF;
  c->t=(R(3)&R(1))==0;
  if(!c->t) goto L8c05bb20;
  R(1)=0x1002u;
  ST32(R(13),R(1));
  {  goto L8c05bbec; }
L8c05bb20:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2e2574u;
  R(4)<<=2;
  R(14)=R(4);
  R(3)=LD32(R(14)+R(0));
  R(2)=0xeu;
  R(2)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  R(1)=R(6);
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(1)>(int32_t)R(3);
  if(!c->t) goto L8c05bb60;
  R(2)=0x100bu;
  { ST32(R(13),R(2)); goto L8c05bbec; }
L8c05bb60:;
  R(3)=LD32(R(14)+R(0));
  R(2)=0xcu;
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  R(2)+=R(3);
  R(13)=0x8c2e2544u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(6)=0x8c2e25a4u;
  R(3)=R(3)&0xFFFF;
  R(3)-=R(1);
  R(4)=R(3);
  c->t=R(4)>>31;R(4)<<=1;
  R(2)=R(3);
  c->t=(int32_t)R(0)==1;
  ST32(R(15),R(3));
  R(4)+=R(2);
  { uint32_t k=c->t; R(4)<<=2; if(k) goto L8c05bb8e; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05bbb6;
  {  goto L8c05bbec; }
L8c05bb8e:;
  R(0)=R(14);
  R(2)=LD32(R(6)+R(0));
  R(3)=0x8u;
  R(6)=LD32(R(13)+R(0));
  R(2)+=R(4);
  R(3)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->fpul=R(3);
  R(3)=0xeu;
  R(3)+=R(6);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0xcu;
  R(3)+=R(6);
  fp_float(c,5);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=R(4);
  R(3)-=R(5);
  c->fpul=R(3);
  {  goto L8c05bbda; }
L8c05bbb6:;
  R(0)=R(14);
  R(2)=LD32(R(6)+R(0));
  R(3)=0xau;
  R(6)=LD32(R(13)+R(0));
  R(2)+=R(4);
  R(3)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->fpul=R(3);
  R(3)=0x16u;
  R(3)+=R(6);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0x14u;
  R(3)+=R(6);
  fp_float(c,5);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=R(4);
  R(3)-=R(5);
  c->fpul=R(3);
L8c05bbda:;
  fp_float(c,3);
  R(5)+=R(4);
  c->fpul=R(5);
  fp_float(c,2);
  fp_arith(c,3,3,4);
  fp_mov(c,6,2);
  fp_mov(c,7,3);
  { fp_arith(c,3,6,4); goto L8c05bc20; }
L8c05bbec:;
  R(0)=0x7fffu;
  {  goto L8c05bc28; }
L8c05bc20:;
  fp_arith(c,1,5,6);
  R(0)=0x0u;
  fp_arith(c,3,5,7);
  fp_st(c,5,R(7));
L8c05bc28:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05bb60(SH4Ctx *c) {
  R(3)=LD32(R(14)+R(0));
  R(2)=0xcu;
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  R(2)+=R(3);
  R(13)=0x8c2e2544u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(0)=(uint32_t)(int32_t)(int16_t)R(5);
  R(6)=0x8c2e25a4u;
  R(3)=R(3)&0xFFFF;
  R(3)-=R(1);
  R(4)=R(3);
  c->t=R(4)>>31;R(4)<<=1;
  R(2)=R(3);
  c->t=(int32_t)R(0)==1;
  ST32(R(15),R(3));
  R(4)+=R(2);
  { uint32_t k=c->t; R(4)<<=2; if(k) goto L8c05bb8e; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05bbb6;
  {  goto L8c05bbec; }
L8c05bb8e:;
  R(0)=R(14);
  R(2)=LD32(R(6)+R(0));
  R(3)=0x8u;
  R(6)=LD32(R(13)+R(0));
  R(2)+=R(4);
  R(3)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->fpul=R(3);
  R(3)=0xeu;
  R(3)+=R(6);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0xcu;
  R(3)+=R(6);
  fp_float(c,5);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=R(4);
  R(3)-=R(5);
  c->fpul=R(3);
  {  goto L8c05bbda; }
L8c05bbb6:;
  R(0)=R(14);
  R(2)=LD32(R(6)+R(0));
  R(3)=0xau;
  R(6)=LD32(R(13)+R(0));
  R(2)+=R(4);
  R(3)+=R(2);
  R(3)=(int32_t)(int16_t)LD16(R(3));
  c->fpul=R(3);
  R(3)=0x16u;
  R(3)+=R(6);
  R(4)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0x14u;
  R(3)+=R(6);
  fp_float(c,5);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=R(4);
  R(3)-=R(5);
  c->fpul=R(3);
L8c05bbda:;
  fp_float(c,3);
  R(5)+=R(4);
  c->fpul=R(5);
  fp_float(c,2);
  fp_arith(c,3,3,4);
  fp_mov(c,6,2);
  fp_mov(c,7,3);
  { fp_arith(c,3,6,4); goto L8c05bc20; }
L8c05bbec:;
  R(0)=0x7fffu;
  {  goto L8c05bc28; }
L8c05bc20:;
  fp_arith(c,1,5,6);
  R(0)=0x0u;
  fp_arith(c,3,5,7);
  fp_st(c,5,R(7));
L8c05bc28:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05bc40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  c->fr[3]=0x00000000u;
  R(0)=0x14u;
  R(3)=R(4);
  R(5)=0x8c2e25fcu;
  ST32(R(5),R(4));
  fp_st(c,3,R(0)+R(3));
  R(3)=LD32(R(4)+4);
  R(5)=0x8c2e2600u;
  R(14)=R(3);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; ST32(R(5),R(3)); if(k) goto L8c05bc80; }
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(4)=0x0u;
  R(0)=0x8c0c69ccu;
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c05bc76; }
  { uint32_t tg=R(2); c->pr=0x8c05bc74u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
L8c05bc76:;
  R(0)=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c05bc80:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05bc8a(SH4Ctx *c) {
  R(0)=LD32(R(4)+16);
  c->t=(int32_t)R(0)==1;
  R(0)=c->t;
  {  return; }
}
void f_8c05bc94(SH4Ctx *c) {
  R(3)=LD32(R(4)+16);
  c->t=(int32_t)R(3)>0;
  R(0)=c->t;
  {  return; }
}
void f_8c05bc9e(SH4Ctx *c) {
  R(0)=LD32(R(4)+16);
  c->t=(int32_t)R(0)==-1;
  R(0)=c->t;
  {  return; }
}
void f_8c05bca8(SH4Ctx *c) {
  R(3)=LD32(R(4)+16);
  c->t=(int32_t)R(3)>=0;
  if(c->t) goto L8c05bcb2;
  { R(0)=0x1u; return; }
L8c05bcb2:;
  R(0)=0x0u;
  {  return; }
}
void f_8c05bcb8(SH4Ctx *c) {
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(4));
  fp_ftrc(c,3);
  { R(0)=c->fpul; return; }
}
void f_8c05bcc2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c2d1e44u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(11));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c05bd70; }
  R(2)=0x8c0c687cu;
  R(3)=0x2u;
  R(4)=LD32(R(2));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  { uint32_t k=c->t; R(12)=0x1u; if(k) goto L8c05bd40; }
  R(1)=0x8c05ca74u;
  { c->pr=0x8c05bcecu;  f_8c05ca74(c); }
  R(4)=R(11);
  R(4)+=0x1u;
  R(5)=R(0);
  R(4)+=R(5);
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(4)=R(4)&0xFF;
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c05bd70;
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c05bd70;
  { R(13)=R(12); goto L8c05bd70; }
L8c05bd40:;
  R(14)=R(4);
  R(10)=0x8c05caeau;
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c05bd70;
L8c05bd4a:;
  { uint32_t tg=R(10); c->pr=0x8c05bd4eu; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(11);
  R(5)+=0x1u;
  R(4)=R(0);
  R(5)+=R(4);
  R(5)=(int32_t)(int8_t)LD8(R(5));
  R(5)=R(5)&0xFF;
  R(0)=R(5);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c05bd6a;
  R(0)=R(5);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c05bd6a;
  { R(13)=R(12); goto L8c05bd70; }
L8c05bd6a:;
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c05bd4a;
L8c05bd70:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05bd80(SH4Ctx *c) {
  R(3)=0x8c0c687cu;
  R(2)=0x8c05caa0u;
  ST32(R(3),R(4));
  { R(4)=0x2u; { f_8c05caa0(c); return; } }
}
void f_8c05bd8a(SH4Ctx *c) {
  R(2)=0x8c0c687cu;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c05bd92(SH4Ctx *c) {
  R(1)=0x8c0c687cu;
  { R(0)=LD32(R(1)); return; }
}
void f_8c05bdc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cf54eu;
  { c->pr=0x8c05bdd2u; R(14)=R(11); f_8c0cf54e(c); }
  R(2)=0x8c05c4bau;
  { c->pr=0x8c05bdd8u;  f_8c05c4ba(c); }
  R(3)=0x8c05b61au;
  R(5)=0x4u;
  R(12)=0x1u;
  { c->pr=0x8c05bde2u; R(4)=R(12); f_8c05b61a(c); }
  R(2)=0x7fffu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(2);
  if(c->t) goto L8c05bdec;
  R(14)=R(12);
L8c05bdec:;
  R(0)=R(14)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05bea6;
  R(2)=0x8c08a840u;
  { c->pr=0x8c05bdf8u;  f_8c08a840(c); }
  R(3)=0x8c2d1df4u;
  ST32(R(3),R(11));
  { R(13)=R(11); goto L8c05be9c; }
L8c05be00:;
  R(5)=0x1cu;
  R(0)=0x27cu;
  c->macl=R(13)*R(5);
  R(3)=LD32(R(4)+R(0));
  R(0)=0x18u;
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05be9a;
  { c->pr=0x8c05be1au; R(4)=R(14); f_8c05bc40(c); }
  R(4)=R(0)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c05be72;
  R(2)=LD32(R(14)+16);
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c05be2a;
  { R(4)=0x1u; goto L8c05be2c; }
L8c05be2a:;
  R(4)=0x0u;
L8c05be2c:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05be60;
  R(2)=LD32(R(14)+16);
  { R(2)+=0xffffffffu; goto L8c05be82; }
L8c05be60:;
  R(1)=LD32(R(14)+16);
  c->t=(int32_t)R(1)>0;
  R(4)=c->t;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05be9a;
  R(4)=0xffffffffu;
  { ST32(R(14)+16,R(4)); goto L8c05be9a; }
L8c05be72:;
  R(3)=LD32(R(14)+16);
  c->t=(int32_t)R(3)>0;
  R(4)=c->t;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05be86;
  R(2)=LD32(R(14)+16);
  R(2)+=0x1u;
L8c05be82:;
  { ST32(R(14)+16,R(2)); goto L8c05be9a; }
L8c05be86:;
  R(1)=LD32(R(14)+16);
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c05be90;
  { R(4)=0x1u; goto L8c05be92; }
L8c05be90:;
  R(4)=0x0u;
L8c05be92:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05be9a;
  ST32(R(14)+16,R(12));
L8c05be9a:;
  R(13)+=0x1u;
L8c05be9c:;
  R(0)=0x278u;
  R(4)=0x8c2d1e44u;
  R(2)=LD32(R(4)+R(0));
  c->t=R(13)>=R(2);
  if(!c->t) goto L8c05be00;
L8c05bea6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05beea(SH4Ctx *c) {
  R(5)=0x8c2d1e00u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(5));
  R(2)=0x8c0db604u;
  R(5)+=0xfffffffeu;
  R(3)=R(5);
  R(14)=R(5);
  R(3)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(14)+=R(4);
  { c->pr=0x8c05bf06u; R(4)=R(14); f_8c0db604(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05bf10;
  R(2)=0x8c2d20d0u;
  { ST32(R(2),R(14)); goto L8c05bf16; }
L8c05bf10:;
  R(3)=0x8c2d20d0u;
  R(1)=0xffffffffu;
  ST32(R(3),R(1));
L8c05bf16:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05bf1c(SH4Ctx *c) {
  R(0)=0x8c2d20d0u;
  R(2)=0xffffffffu;
  { ST32(R(0),R(2)); return; }
}
void f_8c05bf24(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x8c2d1e00u;
  R(3)=0x8c0db604u;
  R(5)=LD32(R(5));
  R(5)+=0xfffffffeu;
  R(2)=R(5);
  R(2)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(2);
  R(5)+=R(4);
  ST32(R(15),R(5));
  { c->pr=0x8c05bf40u; R(4)=R(5); f_8c0db604(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05bf4c;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c05bf4c:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05bf56(SH4Ctx *c) {
  R(3)=0x8c2d20d0u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c05bf7c; }
  R(5)=0x8c2d1e00u;
  R(3)=0x1u;
  R(5)=LD32(R(5));
  R(5)+=0xfffffffeu;
  R(2)=R(5);
  R(2)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(2);
  R(4)-=R(5);
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c05bf7c;
  R(1)=0x2u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(!c->t) goto L8c05bf80;
L8c05bf7c:;
  { R(0)=0xffffffffu; return; }
L8c05bf80:;
  R(0)=R(4);
  {  return; }
}
void f_8c05bf86(SH4Ctx *c) {
  R(3)=0x8c2d20d0u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c05bfc0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(2)=0x8c2d20d0u;
  c->t=(R(6)&R(6))==0;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(3)=LD32(R(2));
  { uint32_t k=c->t; ST32(R(15)+8,R(3)); if(k) goto L8c05bfde; }
  R(1)=0x8c0c6b2cu;
  R(3)=0x0u;
  ST32(R(1),R(3));
  R(3)=0x8c045f2cu;
  { c->pr=0x8c05bfdeu;  f_8c045f2c(c); }
L8c05bfde:;
  R(5)=LD32(R(15)+4);
  R(7)=0x1u;
  R(3)=0x8c0db1e2u;
  R(6)=LD32(R(15));
  { c->pr=0x8c05bfeau; R(4)=LD32(R(15)+8); f_8c0db1e2(c); }
  R(2)=0x8c0d115eu;
  { c->pr=0x8c05bff0u;  f_8c0d115e(c); }
  R(1)=0x8c2d20d8u;
  R(2)=0x0u;
  R(3)=0x8c2d20d4u;
  ST32(R(3),R(0));
  ST32(R(1),R(2));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05c002(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c2d20d0u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c05c02e; }
  R(4)=0x1u;
  R(3)=0x8c0db66eu;
  R(0)=R(4);
  ST8(R(15),R(4));
  ST8(R(15)+1,R(0));
  R(0)=0xfffffff9u;
  ST8(R(15)+2,R(0));
  R(0)=0x32u;
  ST8(R(15)+3,R(0));
  R(0)=0x0u;
  R(5)=R(15);
  ST8(R(15)+4,R(0));
  { uint32_t tg=R(3); c->pr=0x8c05c02eu; R(4)=R(14); sh4_call(c,tg); }
L8c05c02e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05c036(SH4Ctx *c) {
  R(2)=0x8c2d1e44u;
  R(3)=0x1u;
  { ST8(R(2),R(3)); return; }
}
void f_8c05c080(SH4Ctx *c) {
  R(0)=0x8c0c68c0u;
  R(3)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(1)=(int32_t)(int8_t)LD8(R(0));
  R(1)=R(1)&0xFF;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c05c09c;
  R(1)=0x8c0124a6u;
  R(4)=0x8c0c68c4u;
  R(5)=0x8c0c68d4u;
  { c->pr=0x8c05c098u;  f_8c0124a6(c); }
  R(3)=0x8c0c68c0u;
  ST8(R(3),R(0));
L8c05c09c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05c0a2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x8c2d1e44u;
  R(0)=0x278u;
  ST32(R(15)+4,R(4));
  R(4)=0x0u;
  R(3)=LD32(R(14)+R(0));
  R(2)=R(4);
  R(13)=R(4);
  R(11)=R(4);
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(12)=0x1cu; if(k) goto L8c05c0f8; }
L8c05c0c6:;
  c->macl=R(13)*R(12);
  R(0)=0x27cu;
  R(3)=LD32(R(14)+R(0));
  R(10)=c->macl;
  R(10)+=R(3);
  ST32(R(15),R(10));
  R(10)=LD32(R(10)+12);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c05c0ee;
  R(3)=0x8c0337f4u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c05c0e0u; R(4)=R(10); f_8c0337f4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05c0ee;
  c->macl=R(13)*R(12);
  R(0)=0x27cu;
  R(3)=LD32(R(14)+R(0));
  R(11)=c->macl;
  R(11)+=R(3);
L8c05c0ee:;
  R(0)=0x278u;
  R(13)+=0x1u;
  R(3)=LD32(R(14)+R(0));
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c05c0c6;
L8c05c0f8:;
  R(0)=R(11);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05c140(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(0)=0x278u;
  R(4)=0x8c2d1e44u;
  R(13)=LD32(R(4)+R(0));
  R(0)+=0x4u;
  R(13)+=0xffffffffu;
  c->t=(int32_t)R(13)>=0;
  { uint32_t k=!c->t; R(14)=LD32(R(4)+R(0)); if(k) goto L8c05c17a; }
L8c05c15c:;
  R(12)=LD32(R(14)+8);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c05c172;
  R(3)=0x8c0337f4u;
  R(5)=LD32(R(15));
  { c->pr=0x8c05c16au; R(4)=R(12); f_8c0337f4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05c172;
  { R(0)=R(14); goto L8c05c17c; }
L8c05c172:;
  R(13)+=0xffffffffu;
  c->t=(int32_t)R(13)>=0;
  { uint32_t k=c->t; R(14)+=0x1cu; if(k) goto L8c05c15c; }
L8c05c17a:;
  R(0)=0x0u;
L8c05c17c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05c188(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05c190;
  { R(0)=LD32(R(4)+8); return; }
L8c05c190:;
  R(0)=0x0u;
  {  return; }
}
void f_8c05c1c0(SH4Ctx *c) {
  R(7)=0x8c2d1e44u;
  R(6)=0x0u;
  R(0)=0x27cu;
  R(2)=R(6);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0xfffffffeu;
  R(5)=LD32(R(7)+R(0));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(7)+R(0));
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(14)=0x1u; if(k) goto L8c05c1ee; }
L8c05c1da:;
  R(0)=0x18u;
  R(4)=R(5);
  ST8(R(4)+R(0),R(14));
  R(6)+=0x1u;
  R(0)=0x278u;
  ST32(R(4)+16,R(13));
  R(3)=LD32(R(7)+R(0));
  c->t=R(6)>=R(3);
  { uint32_t k=!c->t; R(5)+=0x1cu; if(k) goto L8c05c1da; }
L8c05c1ee:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05c1f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(0)=0x27cu;
  R(2)=R(7);
  R(14)=0x8c2d1e44u;
  R(6)=R(7);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14)+R(0));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14)+R(0));
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(13)=0xfffffffeu; if(k) goto L8c05c222; }
L8c05c20e:;
  R(0)=0x18u;
  R(4)=R(5);
  ST8(R(4)+R(0),R(7));
  R(6)+=0x1u;
  R(0)=0x278u;
  ST32(R(4)+16,R(13));
  R(3)=LD32(R(14)+R(0));
  c->t=R(6)>=R(3);
  { uint32_t k=!c->t; R(5)+=0x1cu; if(k) goto L8c05c20e; }
L8c05c222:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05c228(SH4Ctx *c) {
  R(0)=0x18u;
  R(2)=0x1u;
  R(3)=0xfffffffeu;
  ST8(R(4)+R(0),R(2));
  { ST32(R(4)+16,R(3)); return; }
}
void f_8c05c234(SH4Ctx *c) {
  R(0)=0x18u;
  R(2)=0x0u;
  R(3)=0xfffffffeu;
  ST8(R(4)+R(0),R(2));
  { ST32(R(4)+16,R(3)); return; }
}
void f_8c05c260(SH4Ctx *c) {
  R(2)=0x8c2d20d0u;
  { R(0)=LD32(R(2)); return; }
}
void f_8c05c266(SH4Ctx *c) {
  {  return; }
}
void f_8c05c26a(SH4Ctx *c) {
  R(7)=0x8c0c6b24u;
  R(0)=LD32(R(7));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c05c2a0; }
  R(6)=0x8c2d1e00u;
  R(2)=R(4);
  R(0)=0x8c2d1e45u;
  R(5)=LD32(R(6));
  R(4)=LD32(R(6));
  R(5)+=0xfffffffeu;
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(3)<<=2;
  R(5)+=R(3);
  R(4)+=0xfffffffeu;
  R(2)-=R(5);
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=R(2);
  R(4)+=R(5);
  R(4)+=0x5u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c05c2a0;
  R(2)=0xffffffffu;
  ST32(R(7),R(2));
L8c05c2a0:;
  {  return; }
}
void f_8c05c326(SH4Ctx *c) {
  R(3)=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c05c34a;
  R(1)=0x2u;
  c->t=(int32_t)R(4)>(int32_t)R(1);
  if(c->t) goto L8c05c34a;
  R(5)=0x8c2d1e00u;
  R(0)=0x8c2d1e45u;
  R(5)=LD32(R(5));
  R(5)+=0xfffffffeu;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(4);
  R(4)=R(5);
  R(4)+=0x5u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c05c34e;
L8c05c34a:;
  { R(0)=0x0u; return; }
L8c05c34e:;
  R(0)=0x1u;
  {  return; }
}
void f_8c05c34e(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c05c380(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x2u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x1u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x11u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c089300u;
  R(12)=0x8c2d1e44u;
L8c05c396:;
  R(4)=R(12);
  R(4)+=0x1u;
  R(4)+=R(14);
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(4)=R(4)&0xFF;
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c05c3ac;
  R(0)=R(4);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c05c3ba;
L8c05c3ac:;
  R(3)=R(12);
  R(3)+=0x1u;
  R(3)+=R(14);
  R(4)=R(14);
  ST8(R(3),R(13));
  { uint32_t tg=R(11); c->pr=0x8c05c3bau; R(4)+=0xfffffffeu; sh4_call(c,tg); }
L8c05c3ba:;
  R(4)=R(12);
  R(4)+=0x1u;
  R(14)+=0x1u;
  R(4)+=R(14);
  R(5)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(5)&0xFF;
  c->t=(int32_t)R(0)==3;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c05c3d2; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c05c3da;
L8c05c3d2:;
  ST8(R(4),R(13));
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05c3dau; R(4)+=0xfffffffeu; sh4_call(c,tg); }
L8c05c3da:;
  R(4)=R(12);
  R(4)+=0x1u;
  R(14)+=0x1u;
  R(4)+=R(14);
  R(5)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(5)&0xFF;
  c->t=(int32_t)R(0)==3;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c05c3f2; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c05c3fa;
L8c05c3f2:;
  ST8(R(4),R(13));
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05c3fau; R(4)+=0xfffffffeu; sh4_call(c,tg); }
L8c05c3fa:;
  R(4)=R(12);
  R(4)+=0x1u;
  R(14)+=0x1u;
  R(4)+=R(14);
  R(5)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(5)&0xFF;
  c->t=(int32_t)R(0)==3;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c05c412; }
  R(0)=R(5);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c05c41a;
L8c05c412:;
  ST8(R(4),R(13));
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05c41au; R(4)+=0xfffffffeu; sh4_call(c,tg); }
L8c05c41a:;
  R(14)+=0x1u;
  c->t=R(14)>R(10);
  if(!c->t) goto L8c05c396;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05c42e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x2u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x4u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x11u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c089280u;
  R(12)=0x8c2d1e44u;
L8c05c444:;
  R(0)=R(12);
  R(0)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05c45e;
  R(2)=R(12);
  R(2)+=0x1u;
  R(2)+=R(14);
  R(4)=R(14);
  ST8(R(2),R(13));
  { uint32_t tg=R(11); c->pr=0x8c05c45eu; R(4)+=0xfffffffeu; sh4_call(c,tg); }
L8c05c45e:;
  R(4)=R(12);
  R(4)+=0x1u;
  R(14)+=0x1u;
  R(4)+=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05c476;
  ST8(R(4),R(13));
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05c476u; R(4)+=0xfffffffeu; sh4_call(c,tg); }
L8c05c476:;
  R(4)=R(12);
  R(4)+=0x1u;
  R(14)+=0x1u;
  R(4)+=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05c48e;
  ST8(R(4),R(13));
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05c48eu; R(4)+=0xfffffffeu; sh4_call(c,tg); }
L8c05c48e:;
  R(4)=R(12);
  R(4)+=0x1u;
  R(14)+=0x1u;
  R(4)+=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05c4a6;
  ST8(R(4),R(13));
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05c4a6u; R(4)+=0xfffffffeu; sh4_call(c,tg); }
L8c05c4a6:;
  R(14)+=0x1u;
  c->t=R(14)>R(10);
  if(!c->t) goto L8c05c444;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05c4ba(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=0x8c2d1e44u;
  R(12)=0x2u;
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(10)=0x1u; if(k) goto L8c05c580; }
  R(2)=0x8c2d20d0u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c05c4f6;
  { c->pr=0x8c05c4e6u;  f_8c05bf56(c); }
  { c->pr=0x8c05c4eau; R(4)=R(0); f_8c05bf24(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c05c580;
  R(2)=0x8c2d20d0u;
  R(3)=0xffffffffu;
  { ST32(R(2),R(3)); goto L8c05c580; }
L8c05c4f6:;
  R(1)=0x8c140958u;
  R(0)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05c580;
  { c->pr=0x8c05c502u; R(4)=0x1u; f_8c05bf24(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05c560;
  R(0)=0x10u;
  ST8(R(15)+R(0),R(10));
  R(0)=R(12);
  ST8(R(15)+12,R(0));
  { c->pr=0x8c05c512u; R(4)=0x1u; f_8c05beea(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  R(6)=0x1u;
  { c->pr=0x8c05c51eu; R(4)+=0x10u; f_8c05bfc0(c); }
  {  goto L8c05c580; }
L8c05c560:;
  { c->pr=0x8c05c564u; R(4)=0x2u; f_8c05bf24(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05c580;
  R(0)=R(10);
  ST8(R(15)+8,R(0));
  R(0)=R(12);
  ST8(R(15)+4,R(0));
  { c->pr=0x8c05c574u; R(4)=0x2u; f_8c05beea(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x4u;
  R(6)=0x1u;
  { c->pr=0x8c05c580u; R(4)+=0x8u; f_8c05bfc0(c); }
L8c05c580:;
  R(14)=R(12);
  R(11)=0x8c088fa0u;
  R(12)=0x7ffeu;
  R(9)=0x7u;
  R(8)=0x100u;
L8c05c58a:;
  R(3)=R(13);
  R(3)+=0x1u;
  R(3)+=R(14);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05c610;
  R(5)=0x141u;
  R(4)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c05c59eu; R(4)+=0xfffffffeu; sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(c->t) goto L8c05c5b0;
  R(3)=R(13);
  R(3)+=0x1u;
  R(2)=0x4u;
  R(3)+=R(14);
  ST8(R(3),R(2));
  {  goto L8c05c610; }
L8c05c5b0:;
  R(4)=R(14);
  R(5)=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c05c5b8u; R(4)+=0xfffffffeu; sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05c5ca;
  R(3)=R(13);
  R(3)+=0x1u;
  R(2)=0x6u;
  R(3)+=R(14);
  ST8(R(3),R(2));
  {  goto L8c05c610; }
L8c05c5ca:;
  R(4)=R(14);
  R(5)=R(8);
  { uint32_t tg=R(11); c->pr=0x8c05c5d2u; R(4)+=0xfffffffeu; sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05c600;
  R(3)=R(13);
  R(3)+=0x1u;
  R(3)+=R(14);
  { ST8(R(3),R(9)); goto L8c05c610; }
L8c05c600:;
  R(3)=R(13);
  R(3)+=0x1u;
  R(2)=0x8c089300u;
  R(3)+=R(14);
  R(4)=R(14);
  ST8(R(3),R(10));
  { c->pr=0x8c05c610u; R(4)+=0xfffffffeu; f_8c089300(c); }
L8c05c610:;
  R(14)+=0x1u;
  R(2)=R(13);
  R(3)=R(14);
  R(2)+=0x1u;
  R(3)+=0xfffffffeu;
  R(2)+=R(14);
  ST32(R(15),R(3));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05c6b0;
  R(5)=0x141u;
  { uint32_t tg=R(11); c->pr=0x8c05c62au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(c->t) goto L8c05c63c;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x4u;
  R(2)+=R(14);
  ST8(R(2),R(3));
  {  goto L8c05c6b0; }
L8c05c63c:;
  R(5)=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c05c642u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05c654;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x6u;
  R(2)+=R(14);
  ST8(R(2),R(3));
  {  goto L8c05c6b0; }
L8c05c654:;
  R(5)=R(8);
  { uint32_t tg=R(11); c->pr=0x8c05c65au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05c6a0;
  R(2)=R(13);
  R(2)+=0x1u;
  R(2)+=R(14);
  { ST8(R(2),R(9)); goto L8c05c6b0; }
L8c05c6a0:;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x8c089300u;
  R(2)+=R(14);
  R(4)=R(14);
  ST8(R(2),R(10));
  { c->pr=0x8c05c6b0u; R(4)+=0xfffffffeu; f_8c089300(c); }
L8c05c6b0:;
  R(14)+=0x1u;
  R(3)=R(13);
  R(2)=R(14);
  R(3)+=0x1u;
  R(2)+=0xfffffffeu;
  R(3)+=R(14);
  ST32(R(15),R(2));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05c750;
  R(5)=0x141u;
  { uint32_t tg=R(11); c->pr=0x8c05c6cau; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(c->t) goto L8c05c6dc;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x4u;
  R(2)+=R(14);
  ST8(R(2),R(3));
  {  goto L8c05c750; }
L8c05c6dc:;
  R(5)=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c05c6e2u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05c6f4;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x6u;
  R(2)+=R(14);
  ST8(R(2),R(3));
  {  goto L8c05c750; }
L8c05c6f4:;
  R(5)=R(8);
  { uint32_t tg=R(11); c->pr=0x8c05c6fau; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05c740;
  R(2)=R(13);
  R(2)+=0x1u;
  R(2)+=R(14);
  { ST8(R(2),R(9)); goto L8c05c750; }
L8c05c740:;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x8c089300u;
  R(2)+=R(14);
  R(4)=R(14);
  ST8(R(2),R(10));
  { c->pr=0x8c05c750u; R(4)+=0xfffffffeu; f_8c089300(c); }
L8c05c750:;
  R(2)=R(13);
  R(2)+=0x1u;
  R(14)+=0x1u;
  R(2)+=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05c7f0;
  R(1)=R(14);
  R(5)=0x141u;
  R(1)+=0xfffffffeu;
  ST32(R(15),R(1));
  { uint32_t tg=R(11); c->pr=0x8c05c76au; R(4)=R(1); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(c->t) goto L8c05c77c;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x4u;
  R(2)+=R(14);
  ST8(R(2),R(3));
  {  goto L8c05c7f0; }
L8c05c77c:;
  R(5)=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c05c782u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05c794;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x6u;
  R(2)+=R(14);
  ST8(R(2),R(3));
  {  goto L8c05c7f0; }
L8c05c794:;
  R(5)=R(8);
  { uint32_t tg=R(11); c->pr=0x8c05c79au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05c7e0;
  R(2)=R(13);
  R(2)+=0x1u;
  R(2)+=R(14);
  { ST8(R(2),R(9)); goto L8c05c7f0; }
L8c05c7e0:;
  R(2)=R(13);
  R(2)+=0x1u;
  R(3)=0x8c089300u;
  R(2)+=R(14);
  R(4)=R(14);
  ST8(R(2),R(10));
  { c->pr=0x8c05c7f0u; R(4)+=0xfffffffeu; f_8c089300(c); }
L8c05c7f0:;
  R(2)=0x12u;
  R(14)+=0x1u;
  c->t=R(14)>=R(2);
  if(c->t) goto L8c05c7fc;
  {  goto L8c05c58a; }
L8c05c7fc:;
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
void f_8c05c810(SH4Ctx *c) {
  R(7)=0x8c2d1e44u;
  R(6)=0x11u;
  R(5)=0x2u;
  { f_8c05c816(c); return; }
}
void f_8c05c816(SH4Ctx *c) {
L8c05c816:;
  R(3)=R(7);
  R(3)+=0x1u;
  R(3)+=R(5);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(4);
  if(!c->t) goto L8c05c828;
  { R(0)=R(5); return; }
L8c05c828:;
  R(5)+=0x1u;
  c->t=R(5)>R(6);
  if(!c->t) goto L8c05c816;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c05c828(SH4Ctx *c) {
  R(5)+=0x1u;
  c->t=R(5)>R(6);
  if(!c->t) { f_8c05c816(c); return; }
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c05c88c(SH4Ctx *c) {
  R(5)=0x8c2d1e44u;
  R(4)=0x11u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x2u;
L8c05c894:;
  R(0)=R(5);
  R(0)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c05c8a4;
  { R(4)=R(14); goto L8c05c8ac; }
L8c05c8a4:;
  R(14)+=0x1u;
  c->t=R(14)>R(4);
  if(!c->t) goto L8c05c894;
  R(4)=0xffffffffu;
L8c05c8ac:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05caa0(c); return; } }
}
void f_8c05c8b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(12)=0x8c2d1e44u;
  R(3)=0x2u;
  ST8(R(12),R(3));
  { c->pr=0x8c05c8ccu; R(4)=R(3); f_8c05caa0(c); }
  R(8)=0x8c06874cu;
  R(10)=0x1u;
  R(11)=R(15);
  R(14)=0x2u;
  R(9)=0x12u;
L8c05c8d6:;
  R(0)=R(12);
  R(0)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c05c940;
  R(2)=R(14);
  R(3)=0x8c0ba60cu;
  R(2)+=0xfffffffeu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(8); c->pr=0x8c05c8f0u; R(4)=R(11); sh4_call(c,tg); }
  R(15)+=0x8u;
  { c->pr=0x8c05c8f6u; R(4)=R(11); f_8c05c140(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05c940;
  R(2)=0x8c05bc8au;
  { c->pr=0x8c05c902u; R(4)=R(13); f_8c05bc8a(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05c940;
  R(2)=0x8c05bd92u;
  { c->pr=0x8c05c90eu;  f_8c05bd92(c); }
  c->t=(int32_t)R(0)>=(int32_t)R(10);
  if(c->t) goto L8c05c916;
  { c->pr=0x8c05c916u; R(4)=R(14); f_8c05caa0(c); }
L8c05c916:;
  { R(0)=0x1u; goto L8c05c94a; }
L8c05c940:;
  R(14)+=0x1u;
  c->t=R(14)>=R(9);
  if(!c->t) goto L8c05c8d6;
  R(0)=0x0u;
  ST8(R(12),R(10));
L8c05c94a:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05c95e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=0x8c05bd92u;
  { c->pr=0x8c05c976u;  f_8c05bd92(c); }
  R(11)=0x8c2d1e44u;
  R(2)=0x1u;
  R(4)=R(0);
  c->t=R(4)>=R(2);
  R(5)=0x2u;
  { uint32_t k=c->t; ST8(R(11),R(5)); if(k) goto L8c05c9a0; }
  R(4)=0x8c0ba61cu;
  { c->pr=0x8c05c98au;  f_8c05c140(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05c9e8;
  R(2)=0x8c05bc8au;
  { c->pr=0x8c05c996u; R(4)=R(14); f_8c05bc8a(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05c9e8;
  {  goto L8c05c9de; }
L8c05c9a0:;
  R(9)=0x8c06874cu;
  c->t=(R(2)&R(2))==0;
  R(8)=0x8c0ba60cu;
  R(10)=0x12u;
  R(14)=R(5);
  { uint32_t k=c->t; R(12)=R(15); if(k) goto L8c05c9e8; }
L8c05c9ae:;
  R(0)=R(11);
  R(0)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c05c9e2;
  R(2)=R(14);
  R(2)+=0xfffffffeu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(9); c->pr=0x8c05c9c6u; R(4)=R(12); sh4_call(c,tg); }
  R(15)+=0x8u;
  { c->pr=0x8c05c9ccu; R(4)=R(12); f_8c05c140(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05c9e2;
  R(3)=0x8c05bc8au;
  { c->pr=0x8c05c9d8u; R(4)=R(13); f_8c05bc8a(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05c9e2;
L8c05c9de:;
  { R(0)=0x1u; goto L8c05c9ee; }
L8c05c9e2:;
  R(14)+=0x1u;
  c->t=R(14)>=R(10);
  if(!c->t) goto L8c05c9ae;
L8c05c9e8:;
  R(2)=0x1u;
  R(0)=0x0u;
  ST8(R(11),R(2));
L8c05c9ee:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05ca02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  { c->pr=0x8c05ca18u; R(4)=0x2u; f_8c05caa0(c); }
  R(9)=0x8c0ba60cu;
  R(12)=R(15);
  R(10)=0x8c2d1e44u;
  R(11)=0x12u;
  R(8)=0x8c06874cu;
  R(14)=0x2u;
L8c05ca24:;
  R(0)=R(10);
  R(0)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c05ca58;
  R(2)=R(14);
  R(2)+=0xfffffffeu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(8); c->pr=0x8c05ca3cu; R(4)=R(12); sh4_call(c,tg); }
  R(15)+=0x8u;
  { c->pr=0x8c05ca42u; R(4)=R(12); f_8c05c140(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05ca58;
  R(3)=0x8c05bc8au;
  { c->pr=0x8c05ca4eu; R(4)=R(13); f_8c05bc8a(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05ca58;
  { R(0)=0x1u; goto L8c05ca60; }
L8c05ca58:;
  R(14)+=0x1u;
  c->t=R(14)>=R(11);
  if(!c->t) goto L8c05ca24;
  R(0)=0x0u;
L8c05ca60:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05ca74(SH4Ctx *c) {
  R(0)=0x8c2d1e00u;
  { R(0)=LD32(R(0)); return; }
}
void f_8c05caa0(SH4Ctx *c) {
  R(6)=0x8c2d1e00u;
  R(7)=0x12u;
  R(5)=0x3u;
  ST32(R(6),R(4));
L8c05caa8:;
  R(0)=R(5);
  R(0)+=0xfffffffeu;
  R(0)<<=2;
  ST32(R(6)+R(0),R(5));
  R(5)+=0x1u;
  R(0)=R(5);
  R(0)+=0xfffffffeu;
  R(0)<<=2;
  ST32(R(6)+R(0),R(5));
  R(5)+=0x1u;
  R(0)=R(5);
  R(0)+=0xfffffffeu;
  R(0)<<=2;
  ST32(R(6)+R(0),R(5));
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(7);
  if(!c->t) goto L8c05caa8;
  R(0)=R(4);
  R(0)+=0xfffffffeu;
  R(3)=0x2u;
  R(0)<<=2;
  { ST32(R(6)+R(0),R(3)); { f_8c05c26a(c); return; } }
}
void f_8c05cad6(SH4Ctx *c) {
  R(0)=0x8c2d1e00u;
  R(0)=LD32(R(0));
  { R(0)+=0xfffffffeu; return; }
}
void f_8c05cade(SH4Ctx *c) {
  R(1)=0x8c2d1e00u;
  R(0)=R(4);
  R(0)<<=2;
  R(0)=LD32(R(1)+R(0));
  { R(0)+=0xfffffffeu; return; }
}
void f_8c05caea(SH4Ctx *c) {
  R(1)=0x8c2d1e00u;
  R(0)=R(4);
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c05cb20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=R(7);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(7);
  R(3)=0x8c2d20bcu;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=R(7);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(13)=0xfffff017u;
  R(8)=LD32(R(3));
  R(14)=R(13);
  c->t=R(2)>=R(8);
  { uint32_t k=c->t; R(14)+=0xffffffefu; if(k) goto L8c05cb9a; }
L8c05cb40:;
  R(7)=0x1cu;
  R(2)=0x8c2d20c0u;
  c->macl=R(12)*R(7);
  R(3)=LD32(R(2));
  R(7)=c->macl;
  R(7)+=R(3);
  R(1)=LD32(R(7)+12);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05cb94;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=R(2)==R(14);
  { uint32_t k=!c->t; R(0)=(uint32_t)(int32_t)(int16_t)R(6); if(k) goto L8c05cb70; }
  R(2)=LD32(R(7)+4);
  R(1)=(int32_t)(int16_t)LD16(R(2));
  c->t=R(1)==R(14);
  if(!c->t) goto L8c05cb94;
  R(2)=LD32(R(7)+4);
  R(2)+=0x8u;
  R(1)=(int32_t)(int16_t)LD16(R(2));
  c->t=R(1)==R(0);
  if(!c->t) goto L8c05cb94;
  { R(9)=R(7); goto L8c05cb94; }
L8c05cb70:;
  c->t=R(2)==R(13);
  if(!c->t) goto L8c05cb94;
  R(2)=LD32(R(7)+4);
  R(1)=(int32_t)(int16_t)LD16(R(2));
  c->t=R(1)==R(13);
  if(!c->t) goto L8c05cb94;
  R(2)=LD32(R(7)+4);
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  R(2)+=0x8u;
  R(1)=(int32_t)(int16_t)LD16(R(2));
  c->t=R(1)==R(3);
  if(!c->t) goto L8c05cb94;
  R(2)=LD32(R(7)+4);
  R(2)+=0x10u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=R(3)==R(0);
  if(!c->t) goto L8c05cb94;
  R(9)=R(7);
L8c05cb94:;
  R(12)+=0x1u;
  c->t=R(12)>=R(8);
  if(!c->t) goto L8c05cb40;
L8c05cb9a:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  R(0)=R(9);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05cbe0(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(7)=0xfffff00au;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) { f_8c05cc12(c); return; } }
  { f_8c05cbea(c); return; }
}
void f_8c05cbea(SH4Ctx *c) {
L8c05cbea:;
  R(1)=R(6);
  R(3)=LD32(R(4)+4);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(2)=(int32_t)(int16_t)LD16(R(1));
  c->t=R(2)==R(7);
  if(!c->t) goto L8c05cc0a;
  R(6)+=0x1u;
  R(2)=LD32(R(4)+4);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(2);
  ST32(R(6),R(5));
  { R(0)=0x1u; return; }
L8c05cc0a:;
  R(3)=LD32(R(4));
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(3);
  if(!c->t) goto L8c05cbea;
  { f_8c05cc12(c); return; }
}
void f_8c05cc0a(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(3);
  if(!c->t) { f_8c05cbea(c); return; }
  { f_8c05cc12(c); return; }
}
void f_8c05cc12(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c05cc20(SH4Ctx *c) {
  fp_st(c,0,R(0));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(8)=R(4);
  R(2)=0xfffff017u;
  R(4)=0x0u;
  ST8(R(15),R(5));
  R(0)=R(4);
  ST8(R(15)+4,R(0));
  R(13)=LD32(R(8)+4);
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; R(10)=R(4); if(k) goto L8c05cd2a; }
  R(13)+=0x8u;
  R(12)=0x1u;
  R(9)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(12)&R(12))==0;
  R(13)+=0x8u;
  R(14)=0xau;
  { uint32_t k=c->t; R(11)=0xfu; if(k) goto L8c05cca8; }
  R(5)=0x8c0c694cu;
  R(3)=0x8c089b34u;
  R(5)=LD32(R(5));
  { c->pr=0x8c05cc82u; R(4)=R(9); f_8c089b34(c); }
  R(2)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(2);
  if(c->t) goto L8c05cca8;
L8c05cc8a:;
  R(14)+=0x1u;
  c->t=R(14)>R(11);
  if(c->t) goto L8c05cd2a;
  R(5)=R(14);
  R(0)=0x8c0c694cu;
  R(5)+=0xfffffff6u;
  R(3)=0x8c089b34u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c05cca0u; R(4)=R(9); f_8c089b34(c); }
  R(2)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c05cc8a;
L8c05cca8:;
  c->t=R(14)>R(11);
  if(c->t) goto L8c05cd2a;
  R(6)=R(14);
  R(0)=0x8c0c6a68u;
  R(6)<<=2;
  R(4)=0xfffff017u;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)=(int32_t)(int16_t)LD16(R(6)+R(0));
  { c->pr=0x8c05ccbcu; R(5)=R(9); f_8c05cb20(c); }
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(4)=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c05ccca;
  { R(10)=R(12); goto L8c05cd16; }
L8c05ccca:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c05cd00;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05ccd8;
  c->t=R(4)==R(8);
  if(!c->t) goto L8c05cd16;
L8c05ccd8:;
  { R(10)=R(12); goto L8c05cd16; }
L8c05cd00:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05cd16;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(10)=R(12); if(k) goto L8c05cd16; }
  c->t=R(4)==R(8);
  if(c->t) goto L8c05cd16;
  R(4)=LD32(R(4)+4);
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(4)+=0x10u;
  ST16(R(4),R(2));
L8c05cd16:;
  R(10)=R(10)&0xFF;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c05cd2a;
  R(0)=0x8c0c6a68u;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(12);
  ST16(R(13),R(2));
  ST8(R(15)+4,R(0));
L8c05cd2a:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05cc40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(8)=R(4);
  R(2)=0xfffff017u;
  R(4)=0x0u;
  ST8(R(15),R(5));
  R(0)=R(4);
  ST8(R(15)+4,R(0));
  R(13)=LD32(R(8)+4);
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; R(10)=R(4); if(k) goto L8c05cd2a; }
  R(13)+=0x8u;
  R(12)=0x1u;
  R(9)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(12)&R(12))==0;
  R(13)+=0x8u;
  R(14)=0xau;
  { uint32_t k=c->t; R(11)=0xfu; if(k) goto L8c05cca8; }
  R(5)=0x8c0c694cu;
  R(3)=0x8c089b34u;
  R(5)=LD32(R(5));
  { c->pr=0x8c05cc82u; R(4)=R(9); f_8c089b34(c); }
  R(2)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(2);
  if(c->t) goto L8c05cca8;
L8c05cc8a:;
  R(14)+=0x1u;
  c->t=R(14)>R(11);
  if(c->t) goto L8c05cd2a;
  R(5)=R(14);
  R(0)=0x8c0c694cu;
  R(5)+=0xfffffff6u;
  R(3)=0x8c089b34u;
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c05cca0u; R(4)=R(9); f_8c089b34(c); }
  R(2)=0x7ffeu;
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c05cc8a;
L8c05cca8:;
  c->t=R(14)>R(11);
  if(c->t) goto L8c05cd2a;
  R(6)=R(14);
  R(0)=0x8c0c6a68u;
  R(6)<<=2;
  R(4)=0xfffff017u;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)=(int32_t)(int16_t)LD16(R(6)+R(0));
  { c->pr=0x8c05ccbcu; R(5)=R(9); f_8c05cb20(c); }
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(4)=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c05ccca;
  { R(10)=R(12); goto L8c05cd16; }
L8c05ccca:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c05cd00;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05ccd8;
  c->t=R(4)==R(8);
  if(!c->t) goto L8c05cd16;
L8c05ccd8:;
  { R(10)=R(12); goto L8c05cd16; }
L8c05cd00:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05cd16;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(10)=R(12); if(k) goto L8c05cd16; }
  c->t=R(4)==R(8);
  if(c->t) goto L8c05cd16;
  R(4)=LD32(R(4)+4);
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(4)+=0x10u;
  ST16(R(4),R(2));
L8c05cd16:;
  R(10)=R(10)&0xFF;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c05cd2a;
  R(0)=0x8c0c6a68u;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(12);
  ST16(R(13),R(2));
  ST8(R(15)+4,R(0));
L8c05cd2a:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05cd00(SH4Ctx *c) {
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05cd16;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(10)=R(12); if(k) goto L8c05cd16; }
  c->t=R(4)==R(8);
  if(c->t) goto L8c05cd16;
  R(4)=LD32(R(4)+4);
  R(2)=(int32_t)(int16_t)LD16(R(13));
  R(4)+=0x10u;
  ST16(R(4),R(2));
L8c05cd16:;
  R(10)=R(10)&0xFF;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c05cd2a;
  R(0)=0x8c0c6a68u;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=R(12);
  ST16(R(13),R(2));
  ST8(R(15)+4,R(0));
L8c05cd2a:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05cd40(SH4Ctx *c) {
  R(3)=0x8c2d1e44u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { R(0)=c->t; return; }
}
void f_8c05cd4c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c0c694cu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c089b34u;
  R(14)=R(4);
  R(12)=0x7ffeu;
  R(13)+=0x14u;
  c->t=R(14)>R(13);
  if(c->t) { f_8c05cda6(c); return; }
  { f_8c05cd66(c); return; }
}
void f_8c05cd66(SH4Ctx *c) {
L8c05cd66:;
  R(5)=LD32(R(14));
  { uint32_t tg=R(11); c->pr=0x8c05cd6cu; R(4)=0x0u; sh4_call(c,tg); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(12);
  if(!c->t) goto L8c05cda0;
  { R(0)=0x1u; { f_8c05cda8(c); return; } }
L8c05cda0:;
  R(14)+=0x4u;
  c->t=R(14)>R(13);
  if(!c->t) goto L8c05cd66;
  { f_8c05cda6(c); return; }
}
void f_8c05cda0(SH4Ctx *c) {
  R(14)+=0x4u;
  c->t=R(14)>R(13);
  if(!c->t) { f_8c05cd66(c); return; }
  { f_8c05cda6(c); return; }
}
void f_8c05cda6(SH4Ctx *c) {
  R(0)=0x0u;
  { f_8c05cda8(c); return; }
}
void f_8c05cda8(SH4Ctx *c) {
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05cdb4(SH4Ctx *c) {
  R(0)=0x8c2d1e4bu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==6;
  { R(0)=c->t; return; }
}
void f_8c05cdc0(SH4Ctx *c) {
  R(3)=0x8c2d20ccu;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c05cdce; }
  { R(0)=0x0u; return; }
L8c05cdce:;
  R(0)=0x8c2d1e4bu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==6;
  R(0)=c->t;
  {  return; }
}
void f_8c05cddc(SH4Ctx *c) {
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c05cdee;
  R(0)=0x8c2d1e4bu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c05cdee;
  { R(0)=0x0u; return; }
L8c05cdee:;
  R(2)=0x8c2d20ccu;
  R(0)=0x1u;
  ST32(R(2),R(4));
  {  return; }
}
void f_8c05cdf8(SH4Ctx *c) {
  R(3)=0x8c2d20ccu;
  { R(0)=LD32(R(3)); return; }
}
void f_8c05ce20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c087f80u;
  { c->pr=0x8c05ce34u;  f_8c087f80(c); }
  R(3)=0x8c05b560u;
  R(13)=0x7fffu;
  R(11)=0x8c2d1e44u;
  { c->pr=0x8c05ce3eu; R(4)=0x2u; f_8c05b560(c); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(13);
  if(c->t) goto L8c05ce90;
  R(3)=0x8c088400u;
  R(12)=0x1u;
  { c->pr=0x8c05ce4cu; ST8(R(11),R(12)); f_8c088400(c); }
  R(10)=0x8c088bc0u;
  R(9)=0x8c0887dcu;
  { c->pr=0x8c05ce54u; R(14)=0x0u; f_8c088bc0(c); }
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c05ce76;
L8c05ce58:;
  { uint32_t tg=R(9); c->pr=0x8c05ce5cu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=R(0)==R(13);
  if(c->t) goto L8c05ce6e;
  R(2)=R(11);
  R(3)=R(14);
  R(2)+=0x1u;
  R(3)+=0x2u;
  R(2)+=R(3);
  ST8(R(2),R(12));
L8c05ce6e:;
  { uint32_t tg=R(10); c->pr=0x8c05ce72u; R(14)+=0x1u; sh4_call(c,tg); }
  c->t=(int32_t)R(14)>=(int32_t)R(0);
  if(!c->t) goto L8c05ce58;
L8c05ce76:;
  { c->pr=0x8c05ce7au;  f_8c05c4ba(c); }
  { c->pr=0x8c05ce7eu;  f_8c05c88c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=0xffffffffu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05cddc(c); return; } }
L8c05ce90:;
  R(0)=0x0u;
  ST8(R(11)+3,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05cee0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(9)=R(4);
  R(0)=0x40u;
  R(11)=R(5);
  ST16(R(15),R(6));
  ST32(R(15)+16,R(7));
  R(11)+=0xffffffffu;
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(13)=0xffffffffu;
  R(8)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(3)+=0xffffffffu;
  R(0)=0xc8u;
  ST16(R(15),R(3));
  R(5)=R(8);
  R(4)=LD32(R(9)+4);
  R(3)=0x8c082dc8u;
  R(4)=LD32(R(4));
  { c->pr=0x8c05cf16u; R(4)=LD32(R(4)+R(0)); f_8c082dc8(c); }
  R(4)=R(0);
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c05cf34;
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(1)=0x8c2d36f4u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)<<=2;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05cf9c;
L8c05cf34:;
  R(5)=0x8c2d36f4u;
  R(7)=0x1u;
  c->t=(R(7)&R(7))==0;
  R(4)=0x0u;
  { uint32_t k=c->t; R(6)=0x32u; if(k) goto L8c05cf60; }
L8c05cf40:;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(5);
  R(1)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c05cf58;
  { R(13)=R(4); goto L8c05cf60; }
L8c05cf58:;
  R(4)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  if(!c->t) goto L8c05cf40;
L8c05cf60:;
  R(10)=(uint32_t)(int32_t)(int16_t)R(13);
  R(0)=R(10);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c05cf9c;
  R(4)=LD32(R(9)+4);
  R(12)=(uint32_t)(int32_t)(int16_t)R(11);
  R(12)<<=2;
  ST32(R(15)+12,R(4));
  R(12)<<=2;
  R(4)=LD32(R(4));
  R(0)=0x2cu;
  ST32(R(15)+8,R(4));
  R(4)=LD32(R(4)+16);
  ST32(R(15)+4,R(4));
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(4)=LD32(R(4));
  R(3)<<=2;
  R(12)+=R(4);
  R(3)<<=2;
  R(12)=LD32(R(12)+4);
  R(4)+=R(3);
  R(3)=LD32(R(12));
  R(4)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  R(3)=LD32(R(4));
  R(1)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=LD32(R(3)+4);
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=R(1)==R(3);
  if(c->t) goto L8c05cfc0;
L8c05cf9c:;
  { R(0)=0xffffffffu; goto L8c05d0b6; }
L8c05cfc0:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(13);
  R(3)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)<<=2;
  R(14)+=R(5);
  R(0)=0x24u;
  ST8(R(14),R(7));
  ST16(R(14)+R(0),R(8));
  R(0)=R(11);
  ST32(R(14)+4,R(9));
  ST16(R(14)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  ST16(R(14)+10,R(0));
  R(3)=LD32(R(15)+16);
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  c->t=R(3)>>31;R(3)<<=1;
  ST32(R(14)+16,R(3));
  R(4)=LD32(R(15)+52);
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  c->t=R(4)>>31;R(4)<<=1;
  ST32(R(14)+20,R(4));
  R(3)=LD32(R(15)+56);
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=0x3cu;
  ST32(R(14)+24,R(3));
  ST32(R(14)+32,R(4));
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(14)+12,R(0));
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+20);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c05d016;
  { R(3)=0xau; goto L8c05d018; }
L8c05d016:;
  R(3)=0xfffffff6u;
L8c05d018:;
  R(2)=0x8c0c758cu;
  ST32(R(14)+28,R(3));
  ST32(R(14)+40,R(12));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05d060;
  R(3)=0x8c064e90u;
  R(6)=0x73u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05d02eu; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c05d06a; }
L8c05d060:;
  R(1)=0x8c0199c4u;
  R(6)=0x73u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05d06au; R(4)=0xcu; f_8c0199c4(c); }
L8c05d06a:;
  R(2)=0x8c080740u;
  R(11)=R(0);
  { c->pr=0x8c05d072u; ST32(R(14)+44,R(0)); f_8c080740(c); }
  R(3)=R(0);
  ST32(R(11),R(0));
  R(2)=LD32(R(12));
  fp_ld(c,3,R(2));
  fp_st(c,3,R(3));
  R(3)=LD32(R(12)+4);
  ST32(R(11)+4,R(3));
  R(2)=LD32(R(12)+8);
  ST32(R(11)+8,R(2));
  R(2)=0x4u;
  R(3)=LD32(R(11));
  R(2)+=R(3);
  R(3)=0x8c0930c0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+40);
  R(4)=LD32(R(4));
  { c->pr=0x8c05d096u; R(4)=LD32(R(4)+4); f_8c0930c0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(6)=R(13);
  R(3)=0x8c082be0u;
  R(5)=R(8);
  ST32(R(1),R(0));
  R(4)=LD32(R(9)+4);
  R(0)=0xc8u;
  R(4)=LD32(R(4));
  { c->pr=0x8c05d0aau; R(4)=LD32(R(4)+R(0)); f_8c082be0(c); }
  R(4)=0x8c0c6b7cu;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(10)>(int32_t)R(2);
  { uint32_t k=!c->t; R(0)=R(13); if(k) goto L8c05d0b6; }
  ST32(R(4),R(10));
L8c05d0b6:;
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
void f_8c05cfc0(SH4Ctx *c) {
  R(14)=(uint32_t)(int32_t)(int16_t)R(13);
  R(3)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)<<=2;
  R(14)+=R(5);
  R(0)=0x24u;
  ST8(R(14),R(7));
  ST16(R(14)+R(0),R(8));
  R(0)=R(11);
  ST32(R(14)+4,R(9));
  ST16(R(14)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  ST16(R(14)+10,R(0));
  R(3)=LD32(R(15)+16);
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  c->t=R(3)>>31;R(3)<<=1;
  ST32(R(14)+16,R(3));
  R(4)=LD32(R(15)+52);
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  c->t=R(4)>>31;R(4)<<=1;
  ST32(R(14)+20,R(4));
  R(3)=LD32(R(15)+56);
  R(2)=R(3);
  R(3)<<=2;
  R(3)+=R(2);
  c->t=R(3)>>31;R(3)<<=1;
  R(0)=0x3cu;
  ST32(R(14)+24,R(3));
  ST32(R(14)+32,R(4));
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(14)+12,R(0));
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(14)+20);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c05d016;
  { R(3)=0xau; goto L8c05d018; }
L8c05d016:;
  R(3)=0xfffffff6u;
L8c05d018:;
  R(2)=0x8c0c758cu;
  ST32(R(14)+28,R(3));
  ST32(R(14)+40,R(12));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05d060;
  R(3)=0x8c064e90u;
  R(6)=0x73u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05d02eu; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c05d06a; }
L8c05d060:;
  R(1)=0x8c0199c4u;
  R(6)=0x73u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05d06au; R(4)=0xcu; f_8c0199c4(c); }
L8c05d06a:;
  R(2)=0x8c080740u;
  R(11)=R(0);
  { c->pr=0x8c05d072u; ST32(R(14)+44,R(0)); f_8c080740(c); }
  R(3)=R(0);
  ST32(R(11),R(0));
  R(2)=LD32(R(12));
  fp_ld(c,3,R(2));
  fp_st(c,3,R(3));
  R(3)=LD32(R(12)+4);
  ST32(R(11)+4,R(3));
  R(2)=LD32(R(12)+8);
  ST32(R(11)+8,R(2));
  R(2)=0x4u;
  R(3)=LD32(R(11));
  R(2)+=R(3);
  R(3)=0x8c0930c0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+40);
  R(4)=LD32(R(4));
  { c->pr=0x8c05d096u; R(4)=LD32(R(4)+4); f_8c0930c0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(6)=R(13);
  R(3)=0x8c082be0u;
  R(5)=R(8);
  ST32(R(1),R(0));
  R(4)=LD32(R(9)+4);
  R(0)=0xc8u;
  R(4)=LD32(R(4));
  { c->pr=0x8c05d0aau; R(4)=LD32(R(4)+R(0)); f_8c082be0(c); }
  R(4)=0x8c0c6b7cu;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(10)>(int32_t)R(2);
  { uint32_t k=!c->t; R(0)=R(13); if(k) goto L8c05d0b6; }
  ST32(R(4),R(10));
L8c05d0b6:;
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
void f_8c05d060(SH4Ctx *c) {
  R(1)=0x8c0199c4u;
  R(6)=0x73u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05d06au; R(4)=0xcu; f_8c0199c4(c); }
  R(2)=0x8c080740u;
  R(11)=R(0);
  { c->pr=0x8c05d072u; ST32(R(14)+44,R(0)); f_8c080740(c); }
  R(3)=R(0);
  ST32(R(11),R(0));
  R(2)=LD32(R(12));
  fp_ld(c,3,R(2));
  fp_st(c,3,R(3));
  R(3)=LD32(R(12)+4);
  ST32(R(11)+4,R(3));
  R(2)=LD32(R(12)+8);
  ST32(R(11)+8,R(2));
  R(2)=0x4u;
  R(3)=LD32(R(11));
  R(2)+=R(3);
  R(3)=0x8c0930c0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+40);
  R(4)=LD32(R(4));
  { c->pr=0x8c05d096u; R(4)=LD32(R(4)+4); f_8c0930c0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(6)=R(13);
  R(3)=0x8c082be0u;
  R(5)=R(8);
  ST32(R(1),R(0));
  R(4)=LD32(R(9)+4);
  R(0)=0xc8u;
  R(4)=LD32(R(4));
  { c->pr=0x8c05d0aau; R(4)=LD32(R(4)+R(0)); f_8c082be0(c); }
  R(4)=0x8c0c6b7cu;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(10)>(int32_t)R(2);
  { uint32_t k=!c->t; R(0)=R(13); if(k) goto L8c05d0b6; }
  ST32(R(4),R(10));
L8c05d0b6:;
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
void f_8c05d0ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(9)=R(4);
  R(3)=LD32(R(9)+4);
  R(0)=0xc8u;
  R(11)=R(5);
  R(2)=LD32(R(3));
  R(5)=R(11);
  R(3)=0x8c082dc8u;
  R(8)=R(2);
  ST32(R(15),R(2));
  R(8)=LD32(R(8)+R(0));
  { c->pr=0x8c05d0f4u; R(4)=R(8); f_8c082dc8(c); }
  R(4)=R(0);
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c05d110;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=0x8c2d36f4u;
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)<<=2;
  R(1)=(int32_t)(int8_t)LD8(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c05d160;
L8c05d110:;
  { R(0)=0xffffffffu; goto L8c05d1e2; }
L8c05d160:;
  R(10)=0x8c0c6b7cu;
  R(13)=0x0u;
  R(14)=0x8c2d36f4u;
  R(4)=LD32(R(10));
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=!c->t; R(12)=R(13); if(k) goto L8c05d18e; }
L8c05d16e:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05d184;
  R(3)=LD32(R(14)+4);
  c->t=R(3)==R(9);
  if(!c->t) goto L8c05d184;
  R(0)=0x24u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=R(1)==R(3);
  if(c->t) goto L8c05d18e;
L8c05d184:;
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>(int32_t)R(4);
  { uint32_t k=!c->t; R(14)+=0x30u; if(k) goto L8c05d16e; }
L8c05d18e:;
  R(6)=LD32(R(15));
  R(0)=(int32_t)(int16_t)LD16(R(14)+10);
  R(6)=LD32(R(6)+16);
  R(0)<<=2;
  R(5)=LD32(R(14)+44);
  R(6)=LD32(R(6));
  R(0)<<=2;
  R(6)+=R(0);
  R(6)=LD32(R(6)+4);
  { c->pr=0x8c05d1a4u; R(4)=LD32(R(14)+4); f_8c05d7e2(c); }
  R(5)=0x8c2d20e4u;
  R(7)=0x1eu;
  R(4)=0x8c2d2160u;
  R(6)=R(13);
L8c05d1ac:;
  R(3)=LD32(R(5));
  R(2)=LD32(R(14)+44);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c05d1b8;
  { ST32(R(4),R(13)); goto L8c05d1c4; }
L8c05d1b8:;
  R(6)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(6);
  c->t=(int32_t)R(2)>=(int32_t)R(7);
  R(4)+=0x4u;
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c05d1ac; }
L8c05d1c4:;
  ST32(R(14)+44,R(13));
  { c->pr=0x8c05d1cau; R(4)=R(14); f_8c05d4ca(c); }
  R(3)=LD32(R(10));
  R(12)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=R(12)==R(3);
  { uint32_t k=!c->t; R(5)=R(11); if(k) goto L8c05d1da; }
  R(1)=LD32(R(10));
  R(1)+=0xffffffffu;
  ST32(R(10),R(1));
L8c05d1da:;
  R(3)=0x8c082d38u;
  { c->pr=0x8c05d1e0u; R(4)=R(8); f_8c082d38(c); }
  R(0)=0x0u;
L8c05d1e2:;
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
void f_8c05d1f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=R(5);
  ST32(R(15)+8,R(4));
  ST16(R(15)+4,R(0));
  R(0)=0x2cu;
  ST16(R(15),R(6));
  ST32(R(15)+16,R(7));
  R(12)=LD32(R(15)+8);
  R(11)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(12)=LD32(R(12)+4);
  R(12)=LD32(R(12));
  R(4)=LD32(R(12)+16);
  ST32(R(15)+12,R(4));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(13)=R(0);
  R(13)<<=2;
  R(4)=LD32(R(4));
  R(13)<<=2;
  R(3)<<=2;
  R(13)+=R(4);
  R(3)<<=2;
  R(13)=LD32(R(13)+4);
  R(4)+=R(3);
  R(3)=LD32(R(13));
  R(0)=0x2cu;
  R(4)=LD32(R(4)+4);
  R(2)=LD32(R(3)+4);
  R(3)=LD32(R(4));
  R(1)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(2)=LD32(R(3)+4);
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  c->t=R(1)==R(3);
  if(c->t) goto L8c05d280;
  { R(0)=0xffffffffu; goto L8c05d3b6; }
L8c05d280:;
  R(3)=0x8c082dc8u;
  R(5)=R(11);
  R(0)=0xc8u;
  { c->pr=0x8c05d28au; R(4)=LD32(R(12)+R(0)); f_8c082dc8(c); }
  R(14)=R(0);
  R(0)=(uint32_t)(int32_t)(int16_t)R(14);
  R(4)=0x8c2d36f4u;
  c->t=(int32_t)R(0)==-1;
  R(10)=0x0u;
  R(7)=0x1u;
  { uint32_t k=c->t; R(6)=R(4); if(k) goto L8c05d2ae; }
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)<<=2;
  R(2)+=R(4);
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c05d300;
L8c05d2ae:;
  R(5)=0x32u;
  R(4)=R(10);
  R(14)=0xffffffffu;
L8c05d2b4:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)<<=2;
  R(2)+=R(6);
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c05d2cc;
  { R(14)=R(4); goto L8c05d2d4; }
L8c05d2cc:;
  R(4)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(3)>=(int32_t)R(5);
  if(!c->t) goto L8c05d2b4;
L8c05d2d4:;
  { R(5)=R(7); goto L8c05d302; }
L8c05d300:;
  R(5)=R(10);
L8c05d302:;
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)<<=2;
  R(0)=0x24u;
  R(4)+=R(6);
  R(5)=R(5)&0xFF;
  ST8(R(4),R(7));
  ST16(R(4)+R(0),R(11));
  c->t=(R(5)&R(5))==0;
  R(3)=LD32(R(15)+8);
  ST32(R(4)+4,R(3));
  R(3)=0x64u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(4)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15));
  ST16(R(4)+10,R(0));
  R(0)=0x2u;
  ST32(R(4)+16,R(3));
  R(2)=LD32(R(15)+16);
  R(3)=R(2);
  R(3)+=0xffffffffu;
  ST32(R(4)+24,R(2));
  R(2)=R(3);
  ST32(R(4)+20,R(3));
  ST32(R(4)+32,R(3));
  R(3)=0xau;
  ST8(R(4)+12,R(0));
  ST32(R(4)+28,R(3));
  { uint32_t k=c->t; ST32(R(4)+40,R(13)); if(k) goto L8c05d3a8; }
  R(1)=0x8c2d2160u;
  R(6)=0x0u;
  R(0)=R(10);
  R(5)=R(10);
  R(10)=0x1eu;
  R(6)+=R(1);
L8c05d350:;
  R(3)=LD32(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05d360;
  R(0)=0x8c2d20e4u;
  R(6)=LD32(R(5)+R(0));
  R(0)=R(5);
  { ST32(R(1)+R(0),R(7)); goto L8c05d36c; }
L8c05d360:;
  R(0)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(2)>=(int32_t)R(10);
  R(5)+=0x4u;
  { uint32_t k=!c->t; R(6)+=0x4u; if(k) goto L8c05d350; }
L8c05d36c:;
  ST32(R(4)+44,R(6));
  R(0)=0x2eu;
  R(3)=LD32(R(13));
  R(2)=LD32(R(6));
  fp_ld(c,3,R(3));
  fp_st(c,3,R(2));
  R(3)=LD32(R(13)+4);
  ST32(R(6)+4,R(3));
  R(2)=LD32(R(13)+8);
  ST32(R(6)+8,R(2));
  R(3)=LD32(R(4)+40);
  R(5)=LD32(R(6));
  R(6)=R(14);
  R(2)=LD32(R(3));
  R(5)=LD32(R(5)+4);
  R(4)=LD32(R(2)+4);
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  ST16(R(5)+R(0),R(3));
  R(0)=0x2cu;
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  ST16(R(5)+R(0),R(2));
  R(3)=LD32(R(4)+16);
  R(0)=0xc8u;
  ST32(R(5)+16,R(3));
  R(2)=LD32(R(4)+20);
  R(3)=0x8c082be0u;
  ST32(R(5)+20,R(2));
  R(5)=R(11);
  { c->pr=0x8c05d3a8u; R(4)=LD32(R(12)+R(0)); f_8c082be0(c); }
L8c05d3a8:;
  R(5)=0x8c0c6b7cu;
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)=LD32(R(5));
  c->t=(int32_t)R(4)>(int32_t)R(2);
  { uint32_t k=!c->t; R(0)=R(14); if(k) goto L8c05d3b6; }
  ST32(R(5),R(4));
L8c05d3b6:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05d400(SH4Ctx *c) {
  c->fr[5]=0x3F800000u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+32);
  R(2)=LD32(R(4)+16);
  c->fpul=R(3);
  fp_float(c,3);
  c->fpul=R(2);
  fp_float(c,2);
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c05d420;
  { fp_mov(c,4,5); goto L8c05d428; }
L8c05d420:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c05d428;
  fp_mov(c,4,3);
L8c05d428:;
  R(6)=LD32(R(4)+4);
  R(0)=(int32_t)(int16_t)LD16(R(4)+8);
  R(6)=LD32(R(6)+4);
  R(5)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(4)+10);
  R(6)=LD32(R(6));
  R(5)<<=2;
  R(7)=R(0);
  R(4)=LD32(R(4)+44);
  R(6)=LD32(R(6)+16);
  R(7)<<=2;
  R(7)<<=2;
  R(2)=LD32(R(4));
  R(6)=LD32(R(6));
  R(5)<<=2;
  R(4)=LD32(R(2)+4);
  R(0)=0x2cu;
  R(7)+=R(6);
  R(5)+=R(6);
  R(7)=LD32(R(7)+4);
  R(5)=LD32(R(5)+4);
  R(3)=LD32(R(7));
  R(6)=LD32(R(5));
  R(5)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(7)=LD32(R(3)+4);
  R(3)=R(5);
  R(6)=LD32(R(6)+4);
  c->t=R(5)>>31;R(5)<<=1;
  R(13)=LD32(R(6));
  R(5)+=R(3);
  R(5)<<=2;
  R(13)+=R(5);
  R(12)=LD32(R(4));
  R(13)+=0xfffffff4u;
  R(11)=LD32(R(7));
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(12)+=R(5);
  R(11)+=R(5);
  c->t=(int32_t)R(3)>0;
  R(12)+=0xfffffff4u;
  R(11)+=0xfffffff4u;
  { uint32_t k=!c->t; R(1)=0x0u; if(k) goto L8c05d4c0; }
L8c05d47e:;
  R(6)=R(11);
  R(5)=R(13);
  fp_ld(c,0,R(5));
  R(7)=R(12);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  R(1)+=0x1u;
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  R(3)=(uint32_t)(int32_t)(int16_t)R(1);
  fp_arith(c,1,3,0);
  fp_mov(c,0,4);
  R(11)+=0xfffffff4u;
  R(13)+=0xfffffff4u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(7));
  R(7)+=0x4u;
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ld(c,0,R(5));
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_arith(c,1,3,0);
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(7));
  R(7)+=0x4u;
  fp_ld(c,5,R(5));
  fp_ld(c,3,R(6));
  fp_mov(c,2,5);
  fp_arith(c,1,3,5);
  fp_fmac(c,2,3);
  fp_st(c,2,R(7));
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(12)+=0xfffffff4u; if(k) goto L8c05d47e; }
L8c05d4c0:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  R(2)=0x8c0872a0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} { f_8c0872a0(c); return; } }
}
void f_8c05d4ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05d4e4;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x30u;
  { c->pr=0x8c05d4e0u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=0x0u;
  ST8(R(14),R(2));
L8c05d4e4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05d520(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0c6b7cu;
  R(11)=0x8c09cf24u;
  R(3)=LD32(R(13));
  R(8)=0x8c082d38u;
  R(9)=0x8c2d36f4u;
  c->t=(int32_t)R(3)>=0;
  R(10)=0x8c123b08u;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c05d548; }
  {  goto L8c05d696; }
L8c05d548:;
  R(14)=(uint32_t)(int32_t)(int16_t)R(12);
  R(3)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)<<=2;
  R(14)+=R(9);
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c05d560;
  {  goto L8c05d688; }
L8c05d560:;
  R(0)=0xb4u;
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(10)+R(0));
  R(1)=LD32(R(14)+32);
  c->macl=R(2)*R(3);
  R(4)=c->macl;
  R(1)+=R(4);
  ST32(R(14)+32,R(1));
  R(0)=(int32_t)(int8_t)LD8(R(14)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05d584;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05d608;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c05d620;
  {  goto L8c05d688; }
L8c05d584:;
  R(2)=LD32(R(14)+32);
  R(3)=LD32(R(14)+24);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c05d600;
  R(6)=LD32(R(14)+4);
  ST32(R(15),R(6));
  R(6)=LD32(R(6)+4);
  R(0)=(int32_t)(int16_t)LD16(R(14)+10);
  R(6)=LD32(R(6));
  R(0)<<=2;
  R(5)=LD32(R(14)+44);
  R(6)=LD32(R(6)+16);
  R(0)<<=2;
  R(6)=LD32(R(6));
  R(6)+=R(0);
  R(6)=LD32(R(6)+4);
  { c->pr=0x8c05d5a8u; R(4)=LD32(R(15)); f_8c05d7e2(c); }
  R(2)=0x8c0931feu;
  { c->pr=0x8c05d5aeu; R(4)=LD32(R(14)+44); f_8c0931fe(c); }
  R(4)=LD32(R(14)+4);
  R(0)=0x24u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=LD32(R(4)+4);
  R(0)=0xc8u;
  R(4)=LD32(R(4));
  { uint32_t tg=R(8); c->pr=0x8c05d5beu; R(4)=LD32(R(4)+R(0)); sh4_call(c,tg); }
  { c->pr=0x8c05d5c2u; R(4)=R(14); f_8c05d4ca(c); }
  R(3)=LD32(R(13));
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=R(2)==R(3);
  if(c->t) goto L8c05d5ce;
  {  goto L8c05d688; }
L8c05d5ce:;
  R(1)=LD32(R(13));
  R(1)+=0xffffffffu;
  { ST32(R(13),R(1)); goto L8c05d688; }
L8c05d600:;
  { c->pr=0x8c05d604u; R(4)=R(14); f_8c05d400(c); }
  {  goto L8c05d688; }
L8c05d608:;
  R(3)=LD32(R(14)+32);
  R(2)=LD32(R(14)+24);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c05d684;
  R(0)=LD32(R(14)+32);
  R(3)=LD32(R(14)+24);
  R(0)-=R(4);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c05d688;
  R(1)=LD32(R(14)+24);
  { ST32(R(14)+32,R(1)); goto L8c05d684; }
L8c05d620:;
  R(2)=LD32(R(14)+32);
  R(3)=LD32(R(14)+24);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c05d654;
  R(4)=LD32(R(14)+24);
  R(2)=LD32(R(14)+20);
  R(3)=R(4);
  R(1)=LD32(R(14)+32);
  R(3)+=R(4);
  R(3)-=R(2);
  c->t=(int32_t)R(1)>=(int32_t)R(3);
  if(c->t) goto L8c05d646;
  R(4)=LD32(R(14)+24);
  R(3)=LD32(R(14)+32);
  R(2)=R(4);
  R(2)-=R(3);
  R(2)+=R(4);
  { ST32(R(14)+32,R(2)); goto L8c05d64a; }
L8c05d646:;
  R(1)=LD32(R(14)+24);
  ST32(R(14)+32,R(1));
L8c05d64a:;
  { uint32_t tg=R(11); c->pr=0x8c05d64eu; R(4)=LD32(R(14)+28); sh4_call(c,tg); }
  R(0)=0u-R(0);
  { ST32(R(14)+28,R(0)); goto L8c05d684; }
L8c05d654:;
  R(3)=LD32(R(14)+32);
  R(2)=LD32(R(14)+20);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c05d684;
  R(4)=LD32(R(14)+20);
  R(3)=LD32(R(14)+24);
  R(2)=R(4);
  R(2)-=R(3);
  R(3)=LD32(R(14)+32);
  R(2)+=R(4);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(!c->t) goto L8c05d67a;
  R(4)=LD32(R(14)+20);
  R(2)=LD32(R(14)+32);
  R(3)=R(4);
  R(3)+=R(4);
  R(3)-=R(2);
  { ST32(R(14)+32,R(3)); goto L8c05d67e; }
L8c05d67a:;
  R(2)=LD32(R(14)+20);
  ST32(R(14)+32,R(2));
L8c05d67e:;
  { uint32_t tg=R(11); c->pr=0x8c05d682u; R(4)=LD32(R(14)+28); sh4_call(c,tg); }
  ST32(R(14)+28,R(0));
L8c05d684:;
  { c->pr=0x8c05d688u; R(4)=R(14); f_8c05d400(c); }
L8c05d688:;
  R(2)=LD32(R(13));
  R(12)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c05d696;
  {  goto L8c05d548; }
L8c05d696:;
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
void f_8c05d6aa(SH4Ctx *c) {
  R(3)=0x8c0686b8u;
  R(4)=0x8c2d36f4u;
  R(6)=0x960u;
  { R(5)=0x0u; { f_8c0686b8(c); return; } }
}
void f_8c05d6b4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0c6b7cu;
  R(4)=0x8c2d36f4u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(11));
  R(14)=R(4);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=!c->t; R(13)=R(4); if(k) goto L8c05d6e6; }
L8c05d6ce:;
  R(1)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05d6d8;
  { c->pr=0x8c05d6d8u; R(4)=R(14); f_8c05d4ca(c); }
L8c05d6d8:;
  R(3)=LD32(R(11));
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  R(14)+=0x30u;
  { uint32_t k=!c->t; R(13)+=0x30u; if(k) goto L8c05d6ce; }
L8c05d6e6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05d6f2(SH4Ctx *c) {
  R(3)=0x8c0c6b7cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(3));
  R(7)=0x8c2d36f4u;
  c->t=(int32_t)R(13)>=0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) { f_8c05d76a(c); return; } }
  { f_8c05d702(c); return; }
}
void f_8c05d702(SH4Ctx *c) {
L8c05d702:;
  R(6)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05d760;
  R(3)=LD32(R(6)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c05d760;
  R(0)=0x24u;
  R(1)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=R(1)==R(3);
  if(!c->t) goto L8c05d760;
  R(0)=(int32_t)(int8_t)LD8(R(6)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c05d72a; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c05d732;
L8c05d72a:;
  R(2)=LD32(R(6)+32);
  R(3)=LD32(R(6)+24);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) { f_8c05d76a(c); return; }
L8c05d732:;
  { R(0)=0x1u; { f_8c05d76c(c); return; } }
L8c05d760:;
  R(14)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>(int32_t)R(13);
  { uint32_t k=!c->t; R(7)+=0x30u; if(k) goto L8c05d702; }
  { f_8c05d76a(c); return; }
}
void f_8c05d760(SH4Ctx *c) {
  R(14)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>(int32_t)R(13);
  { uint32_t k=!c->t; R(7)+=0x30u; if(k) { f_8c05d702(c); return; } }
  { f_8c05d76a(c); return; }
}
void f_8c05d76a(SH4Ctx *c) {
  R(0)=0x0u;
  { f_8c05d76c(c); return; }
}
void f_8c05d76c(SH4Ctx *c) {
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05d772(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0c6b7cu;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(11));
  R(13)=0x8c2d36f4u;
  R(9)=0x8c0931feu;
  c->t=(int32_t)R(3)>=0;
  R(10)=0x8c082d38u;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c05d7ce; }
L8c05d790:;
  R(14)=R(13);
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05d7c2;
  R(5)=LD32(R(14)+44);
  R(6)=LD32(R(14)+40);
  { c->pr=0x8c05d7a0u; R(4)=LD32(R(14)+4); f_8c05d7e2(c); }
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(2)+4);
  R(1)=LD32(R(3)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05d7ba;
  R(4)=LD32(R(14)+4);
  R(0)=0x24u;
  R(5)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=LD32(R(4)+4);
  R(0)=0xc8u;
  R(4)=LD32(R(4));
  { uint32_t tg=R(10); c->pr=0x8c05d7bau; R(4)=LD32(R(4)+R(0)); sh4_call(c,tg); }
L8c05d7ba:;
  { uint32_t tg=R(9); c->pr=0x8c05d7beu; R(4)=LD32(R(14)+44); sh4_call(c,tg); }
  { c->pr=0x8c05d7c2u; R(4)=R(14); f_8c05d4ca(c); }
L8c05d7c2:;
  R(3)=LD32(R(11));
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  { uint32_t k=!c->t; R(13)+=0x30u; if(k) goto L8c05d790; }
L8c05d7ce:;
  R(1)=0xffffffffu;
  ST32(R(11),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05d7e2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+4);
  c->t=R(3)==R(12);
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c05d828; }
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05d820;
  { R(1)=0x8u; goto L8c05d822; }
L8c05d820:;
  R(1)=0x1u;
L8c05d822:;
  ST32(R(4),R(1));
  { ST32(R(4)+4,R(13)); goto L8c05d83c; }
L8c05d828:;
  R(14)=LD32(R(4)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05d846;
L8c05d82e:;
  R(5)=R(12);
  R(6)=R(13);
  { c->pr=0x8c05d836u; R(4)=R(14); f_8c05d7e2(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05d840;
L8c05d83c:;
  { R(0)=0x1u; goto L8c05d848; }
L8c05d840:;
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05d82e;
L8c05d846:;
  R(0)=0x0u;
L8c05d848:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05d852(SH4Ctx *c) {
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(1)=0x8c2d3720u;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c05d864(SH4Ctx *c) {
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(2)=0x8c2d36f4u;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)<<=2;
  { R(4)+=R(2); { f_8c05d400(c); return; } }
}
void f_8c05d8a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=0x8c2d20e4u;
  R(14)=0x0u;
  R(11)=0x8c2d215cu;
  R(12)=R(14);
  R(13)=0x8c0c758cu;
  R(9)=0x8c080740u;
  R(8)=0x8c2d2160u;
L8c05d8c0:;
  R(3)=R(12);
  R(3)+=R(10);
  ST32(R(15),R(3));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05d8dc;
  R(2)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05d8d8u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c05d8e6; }
L8c05d8dc:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05d8e6u; R(4)=0xcu; f_8c0199c4(c); }
L8c05d8e6:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(2));
  R(3)=LD32(R(11));
  R(3)+=0x1u;
  ST32(R(11),R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  { uint32_t tg=R(9); c->pr=0x8c05d8fau; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  ST32(R(2),R(0));
  R(0)=R(12);
  ST32(R(8)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(3)=0x4u;
  R(1)=LD32(R(2));
  R(3)+=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05d980;
  R(3)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05d91eu; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c05d98a; }
L8c05d980:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05d98au; R(4)=0x44u; f_8c0199c4(c); }
L8c05d98a:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(3)=R(0);
  ST32(R(2),R(0));
  R(1)=LD32(R(15));
  R(3)=LD32(R(1));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2)+4);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05d9b0;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05d9acu;  f_8c064e90(c); }
  {  goto L8c05d9bc; }
L8c05d9b0:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05d9bcu;  f_8c0199c4(c); }
L8c05d9bc:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=0x4u;
  R(2)=LD32(R(1)+4);
  R(3)+=R(2);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05da20;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05d9e2u;  f_8c064e90(c); }
  {  goto L8c05da2c; }
L8c05da20:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05da2cu;  f_8c0199c4(c); }
L8c05da2c:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(3)=R(0);
  R(12)+=0x4u;
  ST32(R(1),R(0));
  R(0)=0x32u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(2)=LD32(R(1)+4);
  ST32(R(2)+24,R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST16(R(3)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST32(R(3)+36,R(14));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=R(12);
  R(3)+=R(10);
  R(2)=LD32(R(1)+4);
  ST32(R(2)+40,R(14));
  ST32(R(15),R(3));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05da7a;
  R(2)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05da76u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c05da84; }
L8c05da7a:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05da84u; R(4)=0xcu; f_8c0199c4(c); }
L8c05da84:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(2));
  R(3)=LD32(R(11));
  R(3)+=0x1u;
  ST32(R(11),R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  { uint32_t tg=R(9); c->pr=0x8c05da98u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  ST32(R(2),R(0));
  R(0)=R(12);
  ST32(R(8)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(3)=0x4u;
  R(1)=LD32(R(2));
  R(3)+=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05dae0;
  R(3)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05dabcu; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c05daea; }
L8c05dae0:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05daeau; R(4)=0x44u; f_8c0199c4(c); }
L8c05daea:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(3)=R(0);
  ST32(R(2),R(0));
  R(1)=LD32(R(15));
  R(3)=LD32(R(1));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2)+4);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05db10;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05db0cu;  f_8c064e90(c); }
  {  goto L8c05db1c; }
L8c05db10:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05db1cu;  f_8c0199c4(c); }
L8c05db1c:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=0x4u;
  R(2)=LD32(R(1)+4);
  R(3)+=R(2);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05db80;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05db42u;  f_8c064e90(c); }
  {  goto L8c05db8c; }
L8c05db80:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05db8cu;  f_8c0199c4(c); }
L8c05db8c:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(3)=R(0);
  R(12)+=0x4u;
  ST32(R(1),R(0));
  R(0)=0x32u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(2)=LD32(R(1)+4);
  ST32(R(2)+24,R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST16(R(3)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST32(R(3)+36,R(14));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=R(12);
  R(3)+=R(10);
  R(2)=LD32(R(1)+4);
  ST32(R(2)+40,R(14));
  ST32(R(15),R(3));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05dbda;
  R(2)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05dbd6u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c05dbe4; }
L8c05dbda:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05dbe4u; R(4)=0xcu; f_8c0199c4(c); }
L8c05dbe4:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(2));
  R(3)=LD32(R(11));
  R(3)+=0x1u;
  ST32(R(11),R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  { uint32_t tg=R(9); c->pr=0x8c05dbf8u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  ST32(R(2),R(0));
  R(0)=R(12);
  ST32(R(8)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(3)=0x4u;
  R(1)=LD32(R(2));
  R(3)+=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05dc40;
  R(3)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05dc1cu; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c05dc4a; }
L8c05dc40:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05dc4au; R(4)=0x44u; f_8c0199c4(c); }
L8c05dc4a:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(3)=R(0);
  ST32(R(2),R(0));
  R(1)=LD32(R(15));
  R(3)=LD32(R(1));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2)+4);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05dc70;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05dc6cu;  f_8c064e90(c); }
  {  goto L8c05dc7c; }
L8c05dc70:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05dc7cu;  f_8c0199c4(c); }
L8c05dc7c:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=0x4u;
  R(2)=LD32(R(1)+4);
  R(3)+=R(2);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05dce0;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05dca2u;  f_8c064e90(c); }
  {  goto L8c05dcec; }
L8c05dce0:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05dcecu;  f_8c0199c4(c); }
L8c05dcec:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(3)=R(0);
  R(12)+=0x4u;
  ST32(R(1),R(0));
  R(0)=0x32u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(2)=LD32(R(1)+4);
  ST32(R(2)+24,R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST16(R(3)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST32(R(3)+36,R(14));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=R(12);
  R(3)+=R(10);
  R(2)=LD32(R(1)+4);
  ST32(R(2)+40,R(14));
  ST32(R(15),R(3));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05dd3a;
  R(2)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05dd36u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c05dd44; }
L8c05dd3a:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05dd44u; R(4)=0xcu; f_8c0199c4(c); }
L8c05dd44:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(2));
  R(3)=LD32(R(11));
  R(3)+=0x1u;
  ST32(R(11),R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  { uint32_t tg=R(9); c->pr=0x8c05dd58u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  ST32(R(2),R(0));
  R(0)=R(12);
  ST32(R(8)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(3)=0x4u;
  R(1)=LD32(R(2));
  R(3)+=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05dda0;
  R(3)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05dd7cu; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c05ddaa; }
L8c05dda0:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05ddaau; R(4)=0x44u; f_8c0199c4(c); }
L8c05ddaa:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(3)=R(0);
  ST32(R(2),R(0));
  R(1)=LD32(R(15));
  R(3)=LD32(R(1));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2)+4);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05ddd0;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05ddccu;  f_8c064e90(c); }
  {  goto L8c05dddc; }
L8c05ddd0:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05dddcu;  f_8c0199c4(c); }
L8c05dddc:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=0x4u;
  R(2)=LD32(R(1)+4);
  R(3)+=R(2);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05de40;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05de02u;  f_8c064e90(c); }
  {  goto L8c05de4c; }
L8c05de40:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05de4cu;  f_8c0199c4(c); }
L8c05de4c:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(3)=R(0);
  R(12)+=0x4u;
  ST32(R(1),R(0));
  R(0)=0x32u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(2)=LD32(R(1)+4);
  ST32(R(2)+24,R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST16(R(3)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST32(R(3)+36,R(14));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=0x68u;
  c->t=R(12)>=R(3);
  R(2)=LD32(R(1)+4);
  ST32(R(2)+40,R(14));
  if(c->t) goto L8c05de88;
  {  goto L8c05d8c0; }
L8c05de88:;
  R(1)=0x78u;
  c->t=R(12)>=R(1);
  if(!c->t) goto L8c05de92;
  {  goto L8c05e008; }
L8c05de92:;
  R(2)=R(12);
  R(2)+=R(10);
  ST32(R(15),R(2));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c05deae;
  R(3)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05deaau; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c05deb8; }
L8c05deae:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2beu;
  { c->pr=0x8c05deb8u; R(4)=0xcu; f_8c0199c4(c); }
L8c05deb8:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(3));
  R(2)=LD32(R(11));
  R(2)+=0x1u;
  ST32(R(11),R(2));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  { uint32_t tg=R(9); c->pr=0x8c05deccu; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
  R(0)=R(12);
  ST32(R(8)+R(0),R(14));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=0x4u;
  R(3)+=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05df20;
  R(3)=0x8c064e90u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05def0u; R(4)=0x44u; f_8c064e90(c); }
  {  goto L8c05df2a; }
L8c05df20:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0baa64u;
  R(6)=0x2c5u;
  { c->pr=0x8c05df2au; R(4)=0x44u; f_8c0199c4(c); }
L8c05df2a:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(2));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05df50;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05df4cu;  f_8c064e90(c); }
  {  goto L8c05df5c; }
L8c05df50:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2c8u;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05df5cu;  f_8c0199c4(c); }
L8c05df5c:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  ST32(R(0),R(2));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(2)=0x4u;
  R(3)=LD32(R(1)+4);
  R(2)+=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05dfc0;
  R(4)=0x1770u;
  R(3)=0x8c064e90u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05df82u;  f_8c064e90(c); }
  {  goto L8c05dfcc; }
L8c05dfc0:;
  R(4)=0x1770u;
  R(2)=0x8c0199c4u;
  R(6)=0x2cau;
  R(5)=0x8c0baa64u;
  { c->pr=0x8c05dfccu;  f_8c0199c4(c); }
L8c05dfcc:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(2)=R(0);
  R(12)+=0x4u;
  ST32(R(1),R(0));
  R(0)=0x32u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST32(R(3)+24,R(14));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(2)=LD32(R(1)+4);
  ST16(R(2)+R(0),R(14));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(1)=LD32(R(2));
  R(3)=LD32(R(1)+4);
  ST32(R(3)+36,R(14));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
  R(1)=LD32(R(3));
  R(3)=0x78u;
  c->t=R(12)>=R(3);
  R(2)=LD32(R(1)+4);
  ST32(R(2)+40,R(14));
  if(c->t) goto L8c05e008;
  {  goto L8c05de92; }
L8c05e008:;
  R(5)=0x8c2d3498u;
  R(4)=R(14);
  R(6)=0x12cu;
L8c05e00e:;
  R(3)=R(4);
  R(0)=R(4);
  R(3)+=0x1u;
  c->t=R(0)>>31;R(0)<<=1;
  R(4)+=0x1u;
  ST16(R(5)+R(0),R(3));
  R(3)=R(4);
  R(0)=R(4);
  R(3)+=0x1u;
  c->t=R(0)>>31;R(0)<<=1;
  R(4)+=0x1u;
  ST16(R(5)+R(0),R(3));
  R(3)=R(4);
  R(0)=R(4);
  R(4)+=0x1u;
  c->t=R(0)>>31;R(0)<<=1;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  R(3)+=0x1u;
  { uint32_t k=!c->t; ST16(R(5)+R(0),R(3)); if(k) goto L8c05e00e; }
  R(0)=R(4);
  R(3)=0xffffu;
  R(2)=0x8c2d36f0u;
  R(0)+=0xffffffffu;
  c->t=R(0)>>31;R(0)<<=1;
  ST16(R(5)+R(0),R(3));
  ST16(R(2),R(14));
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
void f_8c05e080(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  sh4_frchg(c);
  ST32(R(15),R(7));
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(4));
  R(4)=R(5);
  fp_ld(c,0,R(4));R(4)+=fp_sz(c);
  R(3)=LD32(R(15)+4);
  fp_ld(c,1,R(4));R(4)+=fp_sz(c);
  R(2)=LD32(R(15));
  fp_ld(c,2,R(4));R(4)+=fp_sz(c);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_ld(c,4,R(4));R(4)+=fp_sz(c);
  fp_ld(c,5,R(4));R(4)+=fp_sz(c);
  fp_ld(c,6,R(4));R(4)+=fp_sz(c);
  fp_ld(c,7,R(4));R(4)+=fp_sz(c);
  fp_ld(c,8,R(4));R(4)+=fp_sz(c);
  fp_ld(c,9,R(4));R(4)+=fp_sz(c);
  fp_ld(c,10,R(4));R(4)+=fp_sz(c);
  fp_ld(c,11,R(4));R(4)+=fp_sz(c);
  fp_ld(c,12,R(4));R(4)+=fp_sz(c);
  fp_ld(c,13,R(4));R(4)+=fp_sz(c);
  fp_ld(c,14,R(4));R(4)+=fp_sz(c);
  fp_ld(c,15,R(4));R(4)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(3));R(3)+=fp_sz(c);
  fp_ld(c,1,R(3));R(3)+=fp_sz(c);
  fp_ld(c,2,R(3));R(3)+=fp_sz(c);
  fp_ld(c,3,R(3));R(3)+=fp_sz(c);
  fp_ftrv(c,0);
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_arith(c,0,2,6);
  R(3)=LD32(R(15)+8);
  fp_arith(c,0,1,5);
  fp_arith(c,0,3,7);
  R(3)+=0x10u;
  fp_arith(c,0,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  { R(15)+=0xcu; return; }
}
void f_8c05e0dc(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  sh4_frchg(c);
  ST32(R(15),R(7));
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(4));
  R(4)=R(5);
  fp_ld(c,0,R(4));R(4)+=fp_sz(c);
  R(3)=LD32(R(15)+4);
  fp_ld(c,1,R(4));R(4)+=fp_sz(c);
  R(2)=LD32(R(15));
  fp_ld(c,2,R(4));R(4)+=fp_sz(c);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_ld(c,4,R(4));R(4)+=fp_sz(c);
  fp_ld(c,5,R(4));R(4)+=fp_sz(c);
  fp_ld(c,6,R(4));R(4)+=fp_sz(c);
  fp_ld(c,7,R(4));R(4)+=fp_sz(c);
  fp_ld(c,8,R(4));R(4)+=fp_sz(c);
  fp_ld(c,9,R(4));R(4)+=fp_sz(c);
  fp_ld(c,10,R(4));R(4)+=fp_sz(c);
  fp_ld(c,11,R(4));R(4)+=fp_sz(c);
  fp_ld(c,12,R(4));R(4)+=fp_sz(c);
  fp_ld(c,13,R(4));R(4)+=fp_sz(c);
  fp_ld(c,14,R(4));R(4)+=fp_sz(c);
  fp_ld(c,15,R(4));R(4)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(3));R(3)+=fp_sz(c);
  fp_ld(c,1,R(3));R(3)+=fp_sz(c);
  fp_ld(c,2,R(3));R(3)+=fp_sz(c);
  fp_ld(c,3,R(3));R(3)+=fp_sz(c);
  fp_ftrv(c,0);
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_arith(c,1,2,6);
  R(3)=LD32(R(15)+8);
  fp_arith(c,1,1,5);
  fp_arith(c,1,3,7);
  R(3)+=0x10u;
  fp_arith(c,1,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  { R(15)+=0xcu; return; }
}
void f_8c05e138(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  sh4_frchg(c);
  R(3)=R(4);
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  ST32(R(15),R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(1)=LD32(R(15)+8);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  R(2)=LD32(R(15)+4);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));R(5)+=fp_sz(c);
  fp_ld(c,11,R(5));R(5)+=fp_sz(c);
  fp_ld(c,12,R(5));R(5)+=fp_sz(c);
  fp_ld(c,13,R(5));R(5)+=fp_sz(c);
  fp_ld(c,14,R(5));R(5)+=fp_sz(c);
  fp_ld(c,15,R(5));R(5)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(1));R(1)+=fp_sz(c);
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  fp_ld(c,1,R(1));R(1)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,2,R(1));R(1)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,3,R(1));R(1)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ftrv(c,0);
  R(3)+=0x10u;
  fp_arith(c,0,3,7);
  fp_arith(c,0,2,6);
  fp_arith(c,0,1,5);
  fp_arith(c,0,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  R(3)+=0x20u;
  fp_ld(c,0,R(1));R(1)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,1,R(1));R(1)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,2,R(1));R(1)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ld(c,3,R(1));R(1)+=fp_sz(c);
  fp_ftrv(c,0);
  fp_arith(c,0,3,7);
  fp_arith(c,0,2,6);
  fp_arith(c,0,1,5);
  fp_arith(c,0,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  fp_ld(c,0,R(1));R(1)+=fp_sz(c);
  fp_ld(c,1,R(1));R(1)+=fp_sz(c);
  fp_ld(c,2,R(1));R(1)+=fp_sz(c);
  fp_ld(c,3,R(1));R(1)+=fp_sz(c);
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  R(3)+=0x20u;
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ftrv(c,0);
  fp_arith(c,0,3,7);
  fp_arith(c,0,2,6);
  fp_arith(c,0,1,5);
  fp_arith(c,0,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  R(3)+=0x20u;
  fp_ld(c,0,R(1));R(1)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,1,R(1));R(1)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,2,R(1));R(1)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ld(c,3,R(1));R(1)+=fp_sz(c);
  fp_ftrv(c,0);
  fp_arith(c,0,3,7);
  fp_arith(c,0,2,6);
  fp_arith(c,0,1,5);
  fp_arith(c,0,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  { R(15)+=0xcu; return; }
}
void f_8c05e1fe(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  sh4_frchg(c);
  R(3)=R(4);
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  ST32(R(15),R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(1)=LD32(R(15)+8);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  R(2)=LD32(R(15)+4);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));R(5)+=fp_sz(c);
  fp_ld(c,11,R(5));R(5)+=fp_sz(c);
  fp_ld(c,12,R(5));R(5)+=fp_sz(c);
  fp_ld(c,13,R(5));R(5)+=fp_sz(c);
  fp_ld(c,14,R(5));R(5)+=fp_sz(c);
  fp_ld(c,15,R(5));R(5)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(1));R(1)+=fp_sz(c);
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  fp_ld(c,1,R(1));R(1)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,2,R(1));R(1)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,3,R(1));R(1)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ftrv(c,0);
  R(3)+=0x10u;
  fp_arith(c,1,3,7);
  fp_arith(c,1,2,6);
  fp_arith(c,1,1,5);
  fp_arith(c,1,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  R(3)+=0x20u;
  fp_ld(c,0,R(1));R(1)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,1,R(1));R(1)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,2,R(1));R(1)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ld(c,3,R(1));R(1)+=fp_sz(c);
  fp_ftrv(c,0);
  fp_arith(c,1,3,7);
  fp_arith(c,1,2,6);
  fp_arith(c,1,1,5);
  fp_arith(c,1,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  fp_ld(c,0,R(1));R(1)+=fp_sz(c);
  fp_ld(c,1,R(1));R(1)+=fp_sz(c);
  fp_ld(c,2,R(1));R(1)+=fp_sz(c);
  fp_ld(c,3,R(1));R(1)+=fp_sz(c);
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  R(3)+=0x20u;
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ftrv(c,0);
  fp_arith(c,1,3,7);
  fp_arith(c,1,2,6);
  fp_arith(c,1,1,5);
  fp_arith(c,1,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  R(3)+=0x20u;
  fp_ld(c,0,R(1));R(1)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,1,R(1));R(1)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,2,R(1));R(1)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ld(c,3,R(1));R(1)+=fp_sz(c);
  fp_ftrv(c,0);
  fp_arith(c,1,3,7);
  fp_arith(c,1,2,6);
  fp_arith(c,1,1,5);
  fp_arith(c,1,0,4);
  R(3)-=fp_sz(c);fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,2,R(3));
  R(3)-=fp_sz(c);fp_st(c,1,R(3));
  R(3)-=fp_sz(c);fp_st(c,0,R(3));
  { R(15)+=0xcu; return; }
}
void f_8c05e2c4(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(2)=R(5);
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(3)=LD32(R(15)+4);
  fp_ld(c,4,R(2));R(2)+=fp_sz(c);
  fp_ld(c,0,R(3));R(3)+=fp_sz(c);
  fp_ld(c,5,R(2));R(2)+=fp_sz(c);
  fp_ld(c,1,R(3));R(3)+=fp_sz(c);
  fp_ld(c,6,R(2));R(2)+=fp_sz(c);
  fp_ld(c,2,R(3));R(3)+=fp_sz(c);
  fp_ld(c,7,R(2));R(2)+=fp_sz(c);
  fp_ld(c,3,R(3));R(3)+=fp_sz(c);
  fp_fipr(c,0,1);
  fp_mov(c,0,3);
  { R(15)+=0x8u; return; }
}
void f_8c05e2e6(SH4Ctx *c) {
  {  return; }
}
void f_8c05e2ea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)=R(5);
  fp_ld(c,15,R(6));R(6)+=fp_sz(c);
  R(14)=R(4);
  fp_ld(c,13,R(6));R(6)+=fp_sz(c);
  fp_ld(c,14,R(6));
  R(6)+=0x8u;
  fp_ld(c,8,R(6));R(6)+=fp_sz(c);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_ld(c,9,R(6));
  R(6)+=0x8u;
  fp_ld(c,6,R(6));R(6)+=fp_sz(c);
  fp_mov(c,3,5);
  fp_ld(c,7,R(6));R(6)+=fp_sz(c);
  fp_mov(c,2,9);
  fp_ld(c,4,R(6));
  fp_arith(c,2,2,7);
  fp_arith(c,2,3,4);
  fp_mov(c,12,3);
  fp_arith(c,1,12,2);
  fp_mov(c,3,14);
  fp_arith(c,2,3,7);
  fp_mov(c,2,13);
  fp_arith(c,2,2,4);
  fp_st(c,12,R(4));
  R(4)+=0x4u;
  fp_arith(c,1,3,2);
  fp_mov(c,2,14);
  fp_arith(c,2,2,5);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_mov(c,3,13);
  fp_arith(c,2,3,9);
  fp_arith(c,1,3,2);
  fp_mov(c,2,9);
  fp_arith(c,2,2,6);
  R(0)=0x4u;
  fp_st(c,3,R(4));
  R(4)+=0x8u;
  fp_mov(c,3,8);
  fp_arith(c,2,3,4);
  fp_arith(c,1,3,2);
  fp_mov(c,2,14);
  fp_arith(c,2,2,6);
  fp_st(c,3,R(0)+R(15));
  fp_unary(c,0,3);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_mov(c,3,15);
  fp_arith(c,2,3,4);
  fp_arith(c,1,3,2);
  fp_mov(c,2,15);
  fp_arith(c,2,2,9);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_mov(c,3,14);
  fp_arith(c,2,3,8);
  fp_arith(c,1,3,2);
  fp_mov(c,2,5);
  fp_arith(c,2,2,6);
  fp_st(c,3,R(4));
  R(4)+=0x8u;
  fp_mov(c,3,8);
  fp_arith(c,2,3,7);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(15));
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,7);
  fp_mov(c,3,13);
  fp_arith(c,2,3,6);
  fp_arith(c,1,3,2);
  fp_mov(c,2,13);
  fp_arith(c,2,2,8);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_mov(c,3,15);
  fp_arith(c,2,3,5);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(4));
  { c->pr=0x8c05e39cu; R(4)=R(14); f_8c05e40c(c); }
  R(0)=0x4u;
  fp_arith(c,2,15,12);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(15));
  fp_arith(c,2,13,3);
  fp_ld(c,3,R(14));
  fp_arith(c,1,15,13);
  fp_fmac(c,15,14);
  fp_mov(c,2,15);
  fp_mov(c,4,15);
  c->fr[4]=0x3F800000u;
  fp_arith(c,3,4,2);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05e408(SH4Ctx *c) {
  {  return; }
}
void f_8c05e40c(SH4Ctx *c) {
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));
  R(5)+=0x8u;
  fp_ld(c,10,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,11,R(5));
  R(5)+=0x8u;
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_mov(c,3,4);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_mov(c,2,11);
  fp_ld(c,5,R(5));
  fp_arith(c,2,2,7);
  fp_arith(c,2,3,5);
  fp_mov(c,0,3);
  fp_arith(c,1,0,2);
  fp_mov(c,3,1);
  fp_arith(c,2,3,7);
  fp_mov(c,2,6);
  fp_arith(c,2,2,5);
  fp_st(c,0,R(4));
  R(4)+=0x4u;
  fp_arith(c,1,3,2);
  fp_mov(c,2,1);
  fp_arith(c,2,2,4);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,11);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(4));
  fp_mov(c,3,10);
  fp_arith(c,2,3,5);
  fp_mov(c,2,11);
  fp_arith(c,2,2,9);
  R(4)+=0x8u;
  fp_mov(c,0,3);
  fp_arith(c,1,0,2);
  fp_mov(c,2,1);
  fp_mov(c,3,8);
  fp_arith(c,2,3,5);
  fp_arith(c,2,2,9);
  fp_arith(c,2,1,10);
  fp_unary(c,0,0);
  fp_st(c,0,R(4));
  R(4)+=0x4u;
  fp_arith(c,1,3,2);
  fp_mov(c,2,10);
  fp_arith(c,2,2,7);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_mov(c,3,8);
  fp_arith(c,2,3,11);
  fp_mov(c,5,2);
  fp_mov(c,2,6);
  fp_arith(c,1,1,3);
  fp_mov(c,3,4);
  fp_arith(c,2,3,9);
  fp_st(c,1,R(4));
  R(4)+=0x8u;
  fp_arith(c,1,5,3);
  fp_st(c,5,R(4));
  R(4)+=0x4u;
  fp_mov(c,3,8);
  fp_arith(c,2,3,7);
  fp_arith(c,2,2,9);
  fp_arith(c,2,6,10);
  fp_arith(c,2,8,4);
  fp_arith(c,1,2,3);
  fp_arith(c,1,8,6);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  { fp_st(c,8,R(4)); return; }
}
void f_8c05e4a2(SH4Ctx *c) {
  {  return; }
}
void f_8c05e4a6(SH4Ctx *c) {
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x2cu;
  { fp_st(c,3,R(0)+R(4)); return; }
}
void f_8c05e4c0(SH4Ctx *c) {
  R(0)=0x10u;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(5));
  R(0)=0x4u;
  fp_st(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(5));
  fp_st(c,3,R(0)+R(4));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(5));
  { fp_st(c,3,R(0)+R(4)); return; }
}
void f_8c05e502(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,3,R(5));
  c->fr[4]=0x00000000u;
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(5));
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  fp_st(c,3,R(0)+R(4));
  R(0)=0xcu;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,4,R(5));
  fp_st(c,4,R(0)+R(5));
  R(0)=0x8u;
  { fp_st(c,4,R(0)+R(5)); return; }
}
void f_8c05e526(SH4Ctx *c) {
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c05e546;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c05e546;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c05e546;
  { R(0)=0x1u; return; }
L8c05e546:;
  R(0)=0x0u;
  {  return; }
}
void f_8c05e546(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c05e55c(SH4Ctx *c) {
  fp_ld(c,0,R(4));R(4)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(4));R(4)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(4));R(4)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  c->fr[7]=0x00000000u;
  c->fr[3]=0x00000000u;
  fp_fipr(c,0,1);
  { fp_mov(c,0,3); return; }
}
void f_8c05e574(SH4Ctx *c) {
  R(4)+=0x8u;
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(6));R(6)+=fp_sz(c);
  c->fr[7]=0x00000000u;
  c->fr[3]=0x00000000u;
  fp_ld(c,8,R(7));R(7)+=fp_sz(c);
  fp_fipr(c,0,1);
  fp_arith(c,0,3,8);
  fp_st(c,3,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  c->fr[3]=0x00000000u;
  fp_ld(c,8,R(7));R(7)+=fp_sz(c);
  fp_fipr(c,0,1);
  fp_arith(c,0,3,8);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));
  c->fr[3]=0x00000000u;
  fp_ld(c,8,R(7));
  fp_fipr(c,0,1);
  fp_arith(c,0,3,8);
  { R(4)-=fp_sz(c);fp_st(c,3,R(4)); return; }
}
void f_8c05e5b2(SH4Ctx *c) {
  R(1)=LD32(R(7));
  R(0)=0x1u;
  c->t=0;
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_ld(c,6,R(6));
  c->fr[7]=0x00000000u;
L8c05e5c0:;
  sh4_pref(c,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  c->fr[3]=0x00000000u;
  fp_fipr(c,0,1);
  R(0)-=R(1);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  c->t=(int32_t)R(1)>0;
  if(c->t) goto L8c05e5ec;
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  c->fr[3]=0x00000000u;
  fp_fipr(c,0,1);
  R(0)-=R(1);
  sh4_pref(c,R(5));
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  c->t=(int32_t)R(1)>0;
  if(!c->t) goto L8c05e5c0;
L8c05e5ec:;
  {  return; }
}
void f_8c05e5f4(SH4Ctx *c) {
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  R(4)+=0x8u;
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_arith(c,0,0,4);
  fp_ld(c,2,R(5));
  fp_ld(c,6,R(6));
  fp_arith(c,0,1,5);
  fp_arith(c,0,2,6);
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  {  return; }
}
void f_8c05e612(SH4Ctx *c) {
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  R(4)+=0x8u;
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_arith(c,1,0,4);
  fp_ld(c,2,R(5));
  fp_ld(c,6,R(6));
  fp_arith(c,1,1,5);
  fp_arith(c,1,2,6);
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  {  return; }
}
void f_8c05e630(SH4Ctx *c) {
  R(4)+=0x3cu;
  c->fr[3]=0x3F800000u;
  c->fr[4]=0x00000000u;
  fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  { R(4)-=fp_sz(c);fp_st(c,3,R(4)); return; }
}
void f_8c05e65a(SH4Ctx *c) {
  c->fr[3]=0x3F800000u;
  R(4)+=0xcu;
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));
  fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,6,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  { R(4)-=fp_sz(c);fp_st(c,4,R(4)); return; }
}
void f_8c05e670(SH4Ctx *c) {
  c->fr[3]=0x00000000u;
  R(4)+=0xcu;
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));
  fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,6,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  { R(4)-=fp_sz(c);fp_st(c,4,R(4)); return; }
}
void f_8c05e686(SH4Ctx *c) {
  R(4)+=0x8u;
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));
  fp_st(c,6,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  { R(4)-=fp_sz(c);fp_st(c,4,R(4)); return; }
}
void f_8c05e698(SH4Ctx *c) {
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  R(4)+=0xcu;
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  R(1)=R(4);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(1));
  R(1)-=fp_sz(c);fp_st(c,6,R(1));
  R(1)-=fp_sz(c);fp_st(c,5,R(1));
  R(1)-=fp_sz(c);fp_st(c,4,R(1));
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  R(4)+=0x10u;
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  R(2)=R(4);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(2));
  R(2)-=fp_sz(c);fp_st(c,6,R(2));
  R(2)-=fp_sz(c);fp_st(c,5,R(2));
  R(2)-=fp_sz(c);fp_st(c,4,R(2));
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  R(4)+=0x10u;
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  R(3)=R(4);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(3));
  R(3)-=fp_sz(c);fp_st(c,6,R(3));
  R(3)-=fp_sz(c);fp_st(c,5,R(3));
  { R(3)-=fp_sz(c);fp_st(c,4,R(3)); return; }
}
void f_8c05e6d4(SH4Ctx *c) {
  R(4)+=0xcu;
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_st(c,7,R(4));
  R(4)-=fp_sz(c);fp_st(c,6,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  { R(4)-=fp_sz(c);fp_st(c,4,R(4)); return; }
}
void f_8c05e6ea(SH4Ctx *c) {
  R(4)+=0x8u;
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  { R(4)-=fp_sz(c);fp_st(c,0,R(4)); return; }
}
void f_8c05e6fc(SH4Ctx *c) {
  R(4)+=0xcu;
  sh4_frchg(c);
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));R(5)+=fp_sz(c);
  fp_ld(c,11,R(5));R(5)+=fp_sz(c);
  fp_ld(c,12,R(5));R(5)+=fp_sz(c);
  fp_ld(c,13,R(5));R(5)+=fp_sz(c);
  fp_ld(c,14,R(5));R(5)+=fp_sz(c);
  fp_ld(c,15,R(5));
  sh4_frchg(c);
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  c->fr[3]=0x00000000u;
  fp_ftrv(c,0);
  fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  { R(4)-=fp_sz(c);fp_st(c,0,R(4)); return; }
}
void f_8c05e738(SH4Ctx *c) {
  R(4)+=0xcu;
  sh4_frchg(c);
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));R(5)+=fp_sz(c);
  fp_ld(c,11,R(5));R(5)+=fp_sz(c);
  fp_ld(c,12,R(5));R(5)+=fp_sz(c);
  fp_ld(c,13,R(5));R(5)+=fp_sz(c);
  fp_ld(c,14,R(5));R(5)+=fp_sz(c);
  fp_ld(c,15,R(5));
  sh4_frchg(c);
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  c->fr[3]=0x3F800000u;
  fp_ftrv(c,0);
  fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  { R(4)-=fp_sz(c);fp_st(c,0,R(4)); return; }
}
void f_8c05e774(SH4Ctx *c) {
  sh4_frchg(c);
  R(4)+=0x8u;
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));R(5)+=fp_sz(c);
  fp_ld(c,11,R(5));R(5)+=fp_sz(c);
  fp_ld(c,12,R(5));R(5)+=fp_sz(c);
  fp_ld(c,13,R(5));R(5)+=fp_sz(c);
  fp_ld(c,14,R(5));R(5)+=fp_sz(c);
  fp_ld(c,15,R(5));
  sh4_frchg(c);
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));
  c->fr[3]=0x00000000u;
  fp_ftrv(c,0);
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  { R(4)-=fp_sz(c);fp_st(c,0,R(4)); return; }
}
void f_8c05e7ae(SH4Ctx *c) {
  sh4_frchg(c);
  R(4)+=0x8u;
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));R(5)+=fp_sz(c);
  fp_ld(c,11,R(5));R(5)+=fp_sz(c);
  fp_ld(c,12,R(5));R(5)+=fp_sz(c);
  fp_ld(c,13,R(5));R(5)+=fp_sz(c);
  fp_ld(c,14,R(5));R(5)+=fp_sz(c);
  fp_ld(c,15,R(5));
  sh4_frchg(c);
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));
  c->fr[3]=0x3F800000u;
  fp_ftrv(c,0);
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  { R(4)-=fp_sz(c);fp_st(c,0,R(4)); return; }
}
void f_8c05e7e8(SH4Ctx *c) {
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c05e82e;
  sh4_frchg(c);
  R(4)+=0x8u;
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,7,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));R(5)+=fp_sz(c);
  fp_ld(c,11,R(5));R(5)+=fp_sz(c);
  fp_ld(c,12,R(5));R(5)+=fp_sz(c);
  fp_ld(c,13,R(5));R(5)+=fp_sz(c);
  fp_ld(c,14,R(5));R(5)+=fp_sz(c);
  fp_ld(c,15,R(5));
  sh4_frchg(c);
L8c05e812:;
  sh4_pref(c,R(4));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  c->fr[3]=0x3F800000u;
  R(7)+=0xffffffffu;
  sh4_pref(c,R(6));
  fp_ftrv(c,0);
  c->t=(R(7)&R(7))==0;
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  { uint32_t k=!c->t; R(4)+=0x14u; if(k) goto L8c05e812; }
L8c05e82e:;
  {  return; }
}
void f_8c05e86c(SH4Ctx *c) {
  R(4)+=0x8u;
  sh4_frchg(c);
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  c->fr[7]=0x00000000u;
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));
  c->fr[11]=0x00000000u;
  sh4_pref(c,R(7));
  fp_ld(c,12,R(6));R(6)+=fp_sz(c);
  fp_ld(c,13,R(6));R(6)+=fp_sz(c);
  fp_ld(c,14,R(6));
  c->fr[15]=0x3F800000u;
  sh4_frchg(c);
  fp_ld(c,0,R(7));R(7)+=fp_sz(c);
  fp_ld(c,1,R(7));R(7)+=fp_sz(c);
  fp_ld(c,2,R(7));
  c->fr[3]=0x3F800000u;
  fp_ftrv(c,0);
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  { R(4)-=fp_sz(c);fp_st(c,0,R(4)); return; }
}
void f_8c05e8a8(SH4Ctx *c) {
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,0,R(4));R(4)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(4));R(4)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(4));R(4)+=fp_sz(c);
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(4)-=fp_sz(c);fp_st(c,6,R(4));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  {  return; }
}
void f_8c05e8c4(SH4Ctx *c) {
  sh4_frchg(c);
  c->fr[12]=0x00000000u;
  c->fr[13]=0x00000000u;
  c->fr[14]=0x00000000u;
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,6,R(5));R(5)+=fp_sz(c);
  fp_ld(c,8,R(5));R(5)+=fp_sz(c);
  fp_ld(c,9,R(5));R(5)+=fp_sz(c);
  fp_ld(c,10,R(5));
  sh4_frchg(c);
  R(4)+=0x8u;
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  c->fr[3]=0x00000000u;
  fp_ftrv(c,0);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_ld(c,6,R(6));R(6)+=fp_sz(c);
  c->fr[7]=0x00000000u;
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ftrv(c,1);
  R(4)+=0x14u;
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));
  c->fr[3]=0x00000000u;
  fp_st(c,6,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)+=0x14u;
  fp_ftrv(c,0);
  fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  { R(4)-=fp_sz(c);fp_st(c,0,R(4)); return; }
}
void f_8c05e920(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d115eu;
  { c->pr=0x8c05e928u;  f_8c0d115e(c); }
  R(2)=0x8c09d194u;
  R(4)=R(0);
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c09d194(c); return; } }
}
void f_8c05e936(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=R(5);
  R(1)=0x8c0686d0u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  R(2)-=R(3);
  R(2)+=0x1u;
  { c->pr=0x8c05e94eu; R(8)=R(2); f_8c0686d0(c); }
  c->macl=R(8)*R(0);
  R(4)=LD32(R(15));
  R(3)=0xfffffff1u;
  R(8)=c->macl;
  R(8)=sh4_shld(R(8),R(3));
  R(4)+=R(8);
  R(0)=R(4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c05e964(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=R(5);
  R(1)=0x8c0686d0u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(3)=LD32(R(15));
  R(2)-=R(3);
  R(2)+=0x1u;
  { c->pr=0x8c05e97cu; R(8)=R(2); f_8c0686d0(c); }
  c->macl=R(8)*R(0);
  R(8)=c->macl;
  c->t=(int32_t)R(8)>=0;
  if(c->t) goto L8c05e988;
  R(3)=0x7fffu;
  R(8)+=R(3);
L8c05e988:;
  R(4)=LD32(R(15));
  R(3)=0xfffffff1u;
  R(8)=sh4_shad(R(8),R(3));
  R(4)+=R(8);
  R(0)=R(4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c05e9c0(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  fp_mov(c,3,5);
  fp_mov(c,15,4);
  fp_arith(c,1,3,15);
  R(3)=0x8c0686d0u;
  fp_st(c,5,R(15));
  { c->pr=0x8c05e9d6u; fp_mov(c,12,3); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c05ea04u;
  fp_mov(c,4,15);
  fp_float(c,3);
  fp_arith(c,2,12,3);
  fp_ld(c,3,R(0));
  fp_arith(c,3,12,3);
  fp_arith(c,0,4,12);
  fp_mov(c,0,4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c05ea20(SH4Ctx *c) {
  R(2)=0x8c0c6c40u;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c05ea3c;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0c6c44u;
  R(5)=0x8c0c6c54u;
  { c->pr=0x8c05ea38u;  f_8c0124a6(c); }
  R(2)=0x8c0c6c40u;
  ST8(R(2),R(0));
L8c05ea3c:;
  R(5)=0x8c2d4074u;
  R(4)=0x0u;
  ST32(R(5),R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { ST32(R(5)+4,R(4)); return; }
}
void f_8c05ea48(SH4Ctx *c) {
  {  return; }
}
void f_8c05ea4c(SH4Ctx *c) {
  {  return; }
}
void f_8c05ea50(SH4Ctx *c) {
  R(3)=0x8c0935c0u;
  R(4)=0x8c2d4074u;
  { R(5)=0x1u; { f_8c0935c0(c); return; } }
}
void f_8c05ea58(SH4Ctx *c) {
  R(2)=0x8c2d4070u;
  R(3)=0x0u;
  { ST8(R(2),R(3)); return; }
}
void f_8c05ea80(SH4Ctx *c) {
  R(0)=0x8c2d4070u;
  R(1)=0x1u;
  { ST8(R(0),R(1)); return; }
}
void f_8c05eac0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST8(R(15)+4,R(0));
  R(0)=R(6);
  ST16(R(15)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=0x8c2d4074u;
  R(3)=R(0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c0937d4u;
  R(7)=0x8000u;
  R(6)=R(0);
  R(6)=R(6)&0xFF;
  { c->pr=0x8c05eae4u; R(5)=LD32(R(15)+4); f_8c0937d4(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05eaec(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(6)=0x1u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0x8c2d4074u;
  R(3)=R(0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0937d4u;
  R(7)=0x1000u;
  { c->pr=0x8c05eb08u; R(5)=LD32(R(15)+4); f_8c0937d4(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05eb10(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(6)=0x2u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0x8c2d4074u;
  R(3)=R(0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0937d4u;
  R(7)=0x2000u;
  { c->pr=0x8c05eb2cu; R(5)=LD32(R(15)+4); f_8c0937d4(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05eb34(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(6)=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0x8c2d4074u;
  R(3)=R(0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0937d4u;
  R(7)=0x3000u;
  { c->pr=0x8c05eb50u; R(5)=LD32(R(15)+4); f_8c0937d4(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05eb80(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(6)=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0x8c2d4074u;
  R(3)=R(0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0937d4u;
  R(7)=0x3000u;
  { c->pr=0x8c05eb9cu; R(5)=LD32(R(15)+4); f_8c0937d4(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05eba4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(6)=0x8u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0x8c2d4074u;
  R(3)=R(0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0937d4u;
  R(7)=0x4000u;
  { c->pr=0x8c05ebc0u; R(5)=LD32(R(15)+4); f_8c0937d4(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05ebc8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(6)=0x8u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0x8c2d4074u;
  R(3)=R(0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0937d4u;
  R(7)=0x7000u;
  { c->pr=0x8c05ebe4u; R(5)=LD32(R(15)+4); f_8c0937d4(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05ebec(SH4Ctx *c) {
  R(6)=R(5);
  R(5)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2d4074u;
  R(7)=0x3000u;
  R(3)=0x8c0937d4u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c05ebfeu; R(6)=0x4u; f_8c0937d4(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05ec40(SH4Ctx *c) {
  R(6)=R(5);
  R(5)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2d4074u;
  R(7)=0x5000u;
  R(3)=0x8c0937d4u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c05ec52u; R(6)=0xcu; f_8c0937d4(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05ec74(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0x8c2d4074u;
  R(3)=0x8c09372au;
  R(6)=R(0);
  R(5)=LD32(R(15));
  { R(15)+=0x8u; { f_8c09372a(c); return; } }
}
void f_8c05ecc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  R(3)=0x8c0935fcu;
  ST32(R(15),R(4));
  R(14)=0x0u;
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  { c->pr=0x8c05ecd6u; R(4)=R(0); f_8c0935fc(c); }
  R(3)=0x8c093700u;
  R(6)=R(0);
  R(4)=0x8c2d4074u;
  { c->pr=0x8c05ece0u; R(5)=LD32(R(15)); f_8c093700(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c05ed62; }
  R(0)=(int32_t)(int16_t)LD16(R(4)+16);
  R(3)=0xfc00u;
  R(1)=0x8000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(1);
  if(c->t) goto L8c05ed1c;
  R(1)=0x1000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c05ed1c;
  R(1)=0x2000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c05ed1c;
  R(1)=0x3000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c05ed1c;
  R(1)=0x4000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c05ed1c;
  R(1)=0x7000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c05ed1c;
  R(1)=0x5000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c05ed22;
  {  goto L8c05ed60; }
L8c05ed1c:;
  R(14)=R(4);
  { R(14)+=0x8u; goto L8c05ed62; }
L8c05ed22:;
  { R(14)=LD32(R(4)+8); goto L8c05ed62; }
L8c05ed60:;
  R(14)=0x0u;
L8c05ed62:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05ed6c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(6);
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST16(R(15)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=0x8c2d4074u;
  R(3)=R(0);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0937d4u;
  R(7)=0x5000u;
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c05ed8au; R(5)=LD32(R(15)+4); f_8c0937d4(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c05ed92(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  ST16(R(15),R(4));
  R(3)=0x8c093b44u;
  R(4)=0x8c2d4074u;
  R(5)=(int32_t)(int16_t)LD16(R(15));
  { R(15)+=0x4u; { f_8c093b44(c); return; } }
}
void f_8c05eda0(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(4)=0x8c2d4074u;
  R(3)=0x8c093b74u;
  R(6)=R(0);
  R(5)=LD32(R(15));
  { R(15)+=0x8u; { f_8c093b74(c); return; } }
}
void f_8c05edb6(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  ST32(R(15),R(4));
  R(3)=0x8c093c30u;
  R(4)=0x8c2d4074u;
  R(6)=0xc0u;
  { R(15)+=0x4u; { f_8c093c30(c); return; } }
}
void f_8c05ee00(SH4Ctx *c) {
  {  return; }
}
void f_8c05ee04(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  ST32(R(15),R(4));
  R(3)=0x8c0940e0u;
  R(4)=0x8c2d4074u;
  R(6)=0xc0u;
  { R(15)+=0x4u; { f_8c0940e0(c); return; } }
}
void f_8c05ee40(SH4Ctx *c) {
  R(2)=0x8c0c6d2cu;
  R(3)=0x1u;
  { ST32(R(2),R(3)); return; }
}
void f_8c05ee48(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(4)+20);
  R(13)=0x8c07ab9au;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c05ee68; }
L8c05ee58:;
  c->t=R(14)==R(5);
  if(c->t) goto L8c05ee68;
  { uint32_t tg=R(13); c->pr=0x8c05ee60u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(5)=R(14);
  R(14)=LD32(R(14)+4);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05ee58;
L8c05ee68:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05ee70(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(4)+4);
  { c->pr=0x8c05ee80u; R(4)=R(13); f_8c05ee48(c); }
  R(2)=LD32(R(13)+36);
  R(14)=LD32(R(13)+32);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c05ee9e; }
L8c05ee8a:;
  R(4)=LD32(R(14)+4);
  R(5)=0x0u;
  { c->pr=0x8c05ee92u; R(4)=LD32(R(4)+4); f_8c05ee48(c); }
  R(3)=LD32(R(13)+36);
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(14)+=0x8u; if(k) goto L8c05ee8a; }
L8c05ee9e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05eea8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=R(5);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=LD32(R(4)+4);
  R(8)=0x8c07b040u;
  R(3)=LD32(R(11)+16);
  R(14)=LD32(R(11)+12);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(10)=0x2u; if(k) goto L8c05eeec; }
L8c05eecc:;
  R(13)=LD32(R(14));
  { uint32_t tg=R(8); c->pr=0x8c05eed2u; R(4)=R(13); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(10))==0;
  if(c->t) goto L8c05eee0;
  R(2)=0x8c07ab9au;
  { c->pr=0x8c05eedeu; R(4)=R(13); f_8c07ab9a(c); }
  R(9)+=0x1u;
L8c05eee0:;
  R(2)=LD32(R(11)+16);
  R(12)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c05eecc; }
L8c05eeec:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(9);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05ef00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(2)=0x8c0c5374u;
  R(9)=0x8c038230u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(10)=0x8c038086u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=LD32(R(4)+4); if(k) goto L8c05ef38; }
  R(3)=0x8c1410e4u;
  R(2)=0x8c1410ecu;
  fp_ld(c,8,R(3));
  R(3)=0x8c1410dcu;
  R(1)=0x8c1410e0u;
  fp_ld(c,6,R(2));
  R(2)=0x8c1410e8u;
  fp_ld(c,5,R(3));
  R(4)=0x8c1410f0u;
  fp_ld(c,7,R(1));
  { fp_ld(c,4,R(2)); goto L8c05ef8c; }
L8c05ef38:;
  R(3)=LD32(R(12)+16);
  R(8)=0x8c07afaeu;
  R(13)=LD32(R(12)+12);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c05f00c; }
L8c05ef44:;
  R(14)=LD32(R(13));
  { uint32_t tg=R(8); c->pr=0x8c05ef4au; R(4)=R(14); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c05f000;
  R(2)=0x8c07aee0u;
  R(5)=R(15);
  { c->pr=0x8c05ef56u; R(4)=R(14); f_8c07aee0(c); }
  R(3)=0x8c07b120u;
  R(4)=R(15);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c05ef60u; R(4)=R(14); f_8c07b120(c); }
  R(2)=0x8c07b0d8u;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { c->pr=0x8c05ef68u; R(4)=R(14); f_8c07b0d8(c); }
  R(3)=0x8c07b138u;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { c->pr=0x8c05ef70u; R(4)=R(14); f_8c07b138(c); }
  R(2)=0x8c07b0ccu;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { c->pr=0x8c05ef78u; R(4)=R(14); f_8c07b0cc(c); }
  R(3)=0x8c07b12cu;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { c->pr=0x8c05ef80u; R(4)=R(14); f_8c07b12c(c); }
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_mov(c,4,0);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
L8c05ef8c:;
  { uint32_t tg=R(10); c->pr=0x8c05ef90u;  sh4_call(c,tg); }
  { uint32_t tg=R(9); c->pr=0x8c05ef94u;  sh4_call(c,tg); }
  {  goto L8c05f012; }
L8c05f000:;
  R(3)=LD32(R(12)+16);
  R(11)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c05ef44; }
L8c05f00c:;
  R(1)=0x8c038238u;
  { c->pr=0x8c05f012u;  f_8c038238(c); }
L8c05f012:;
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
void f_8c05f026(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(11)=R(5);
  ST32(R(15),R(6));
  R(13)=LD32(R(11)+4);
  { c->pr=0x8c05f042u; R(4)=R(11); f_8c05ef00(c); }
  R(4)=R(11);
  R(3)=0x8c094ac8u;
  R(14)=LD32(R(4)+52);
  { c->pr=0x8c05f04cu; R(4)=R(13); f_8c094ac8(c); }
  R(2)=0x8c094aceu;
  R(12)=R(0);
  { c->pr=0x8c05f054u; R(4)=R(13); f_8c094ace(c); }
  R(13)=R(0);
  R(0)=LD32(c->gbr+88);
  R(10)=0x8c084d00u;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c05f064; }
  {  goto L8c05f306; }
L8c05f064:;
  R(8)=R(14);
  R(8)+=0xcu;
  R(6)=R(8);
  R(7)=0x0u;
  R(9)=R(14);
  { uint32_t tg=R(10); c->pr=0x8c05f072u; R(5)=R(14); sh4_call(c,tg); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c05f086;
  R(2)=LD32(R(11)+48);
  R(3)=0x200u;
  R(2)&=R(3);
  R(2)>>=8;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05f090;
L8c05f086:;
  R(3)=0x8c09a060u;
  R(6)=R(14);
  R(5)=LD32(R(15));
  { c->pr=0x8c05f090u; R(4)=R(11); f_8c09a060(c); }
L8c05f090:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(9);
  R(5)=R(12);
  { c->pr=0x8c05f09cu; R(4)+=0x10u; f_8c05e612(c); }
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(8);
  R(5)=R(13);
  { c->pr=0x8c05f0a8u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x8c05f0dcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,6,R(0));
  R(0)=0x10u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c05f0e0;
  { fp_mov(c,2,0); goto L8c05f0e4; }
L8c05f0e0:;
  fp_mov(c,2,0);
  fp_unary(c,0,2);
L8c05f0e4:;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c05f0f2;
  { fp_mov(c,3,4); goto L8c05f0f6; }
L8c05f0f2:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c05f0f6:;
  R(0)=0x18u;
  fp_arith(c,0,2,3);
  fp_ld(c,5,R(0)+R(15));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c05f106;
  { fp_mov(c,3,5); goto L8c05f10a; }
L8c05f106:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c05f10a:;
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c05f144;
  fp_cmp(c,1,0,3);
  { uint32_t k=!c->t; c->fr[1]=0x00000000u; if(k) goto L8c05f11c; }
  { fp_mov(c,2,0); goto L8c05f120; }
L8c05f11c:;
  fp_mov(c,2,0);
  fp_unary(c,0,2);
L8c05f120:;
  fp_cmp(c,1,4,1);
  if(!c->t) goto L8c05f128;
  { fp_mov(c,3,4); goto L8c05f12c; }
L8c05f128:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c05f12c:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,5,1);
  { uint32_t k=!c->t; fp_arith(c,0,2,3); if(k) goto L8c05f138; }
  { fp_mov(c,3,5); goto L8c05f13c; }
L8c05f138:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c05f13c:;
  fp_mov(c,1,3);
  fp_mov(c,3,2);
  { fp_arith(c,0,3,1); goto L8c05f176; }
L8c05f144:;
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c05f14c;
  { fp_mov(c,2,0); goto L8c05f150; }
L8c05f14c:;
  fp_mov(c,2,0);
  fp_unary(c,0,2);
L8c05f150:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,4,1);
  { uint32_t k=!c->t; fp_unary(c,0,2); if(k) goto L8c05f15c; }
  { fp_mov(c,3,4); goto L8c05f160; }
L8c05f15c:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c05f160:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,5,1);
  { uint32_t k=!c->t; fp_arith(c,1,2,3); if(k) goto L8c05f16c; }
  { fp_mov(c,3,5); goto L8c05f170; }
L8c05f16c:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c05f170:;
  fp_mov(c,1,3);
  fp_mov(c,3,2);
  fp_arith(c,1,3,1);
L8c05f176:;
  fp_cmp(c,1,6,3);
  if(c->t) goto L8c05f17e;
  {  goto L8c05f26e; }
L8c05f17e:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; c->fr[1]=0x00000000u; if(k) goto L8c05f1a0; }
  R(0)=0x4u;
  { fp_ld(c,2,R(0)+R(15)); goto L8c05f1a6; }
L8c05f1a0:;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
L8c05f1a6:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,1);
  if(!c->t) goto L8c05f1b4;
  R(0)=0x8u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c05f1ba; }
L8c05f1b4:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c05f1ba:;
  R(0)=0xcu;
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(15));
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,3,1);
  if(!c->t) goto L8c05f1cc;
  R(0)=0xcu;
  { fp_ld(c,3,R(0)+R(15)); goto L8c05f1d2; }
L8c05f1cc:;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c05f1d2:;
  fp_arith(c,0,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c05f222;
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; c->fr[1]=0x00000000u; if(k) goto L8c05f1ec; }
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c05f1f2; }
L8c05f1ec:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c05f1f2:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c05f200;
  R(0)=0x8u;
  { fp_ld(c,2,R(0)+R(15)); goto L8c05f206; }
L8c05f200:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
L8c05f206:;
  R(0)=0xcu;
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(0)+R(15));
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c05f218;
  R(0)=0xcu;
  { fp_ld(c,2,R(0)+R(15)); goto L8c05f21e; }
L8c05f218:;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
L8c05f21e:;
  { fp_arith(c,0,3,2); goto L8c05f26a; }
L8c05f222:;
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c05f232;
  R(0)=0x4u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c05f238; }
L8c05f232:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c05f238:;
  R(0)=0x8u;
  c->fr[1]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,1);
  { uint32_t k=!c->t; fp_unary(c,0,3); if(k) goto L8c05f24a; }
  R(0)=0x8u;
  { fp_ld(c,2,R(0)+R(15)); goto L8c05f250; }
L8c05f24a:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
L8c05f250:;
  R(0)=0xcu;
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(0)+R(15));
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c05f262;
  R(0)=0xcu;
  { fp_ld(c,2,R(0)+R(15)); goto L8c05f268; }
L8c05f262:;
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,2);
L8c05f268:;
  fp_arith(c,1,3,2);
L8c05f26a:;
  fp_cmp(c,1,6,3);
  if(c->t) goto L8c05f310;
L8c05f26e:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,0);
  { uint32_t k=!c->t; c->fr[3]=0x00000000u; if(k) goto L8c05f27a; }
  { R(5)=0x1u; goto L8c05f27c; }
L8c05f27a:;
  R(5)=0xffffffffu;
L8c05f27c:;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c05f288;
  { R(2)=0x1u; goto L8c05f28a; }
L8c05f288:;
  R(2)=0xffffffffu;
L8c05f28a:;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(5)+=R(2); if(k) goto L8c05f29a; }
  { R(3)=0x1u; goto L8c05f29c; }
L8c05f29a:;
  R(3)=0xffffffffu;
L8c05f29c:;
  R(5)+=R(3);
  R(0)=R(5);
  c->t=(int32_t)R(0)==-3;
  if(c->t) goto L8c05f2aa;
  R(0)=R(5);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c05f2e2;
L8c05f2aa:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; c->fr[3]=0x00000000u; if(k) goto L8c05f2ba; }
  { R(6)=0xffffffffu; goto L8c05f2bc; }
L8c05f2ba:;
  R(6)=0x1u;
L8c05f2bc:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c05f2c8;
  { R(2)=0xffffffffu; goto L8c05f2ca; }
L8c05f2c8:;
  R(2)=0x1u;
L8c05f2ca:;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(6)+=R(2); if(k) goto L8c05f2da; }
  { R(3)=0xffffffffu; goto L8c05f2dc; }
L8c05f2da:;
  R(3)=0x1u;
L8c05f2dc:;
  R(6)+=R(3);
  {  goto L8c05f2e4; }
L8c05f2e2:;
  R(6)=0x0u;
L8c05f2e4:;
  R(0)=LD32(c->gbr+88);
  c->t=R(5)==R(6);
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c05f306; }
  c->t=(int32_t)R(5)>0;
  if(c->t) goto L8c05f306;
  R(0)=R(14);
  c->t=(int32_t)R(0)==127;
  if(!c->t) goto L8c05f310;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c05f310;
  R(6)=R(13);
  R(7)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c05f302u; R(5)=R(12); sh4_call(c,tg); }
  { R(14)=R(0); goto L8c05f310; }
L8c05f306:;
  R(6)=R(13);
  R(7)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c05f30eu; R(5)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
L8c05f310:;
  R(0)=R(14);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05f326(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(8)=R(5);
  R(1)=0x8c123cf0u;
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(7));
  R(3)=LD32(R(8)+4);
  ST32(R(15),R(3));
  R(2)=LD32(R(1));
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05f35a;
  R(2)=0x8c0c5198u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05f35a;
  {  goto L8c05f46c; }
L8c05f35a:;
  R(3)=0x8c07ada0u;
  { c->pr=0x8c05f360u; R(4)=0x1u; f_8c07ada0(c); }
  R(12)=0x0u;
  R(0)=R(12);
  ST16(R(15)+20,R(0));
  { c->pr=0x8c05f36au; R(4)=R(8); f_8c05ef00(c); }
  R(2)=LD32(R(15)+4);
  R(4)=0x8000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c05f380;
  R(1)=LD32(R(8)+44);
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c05f380;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c05f37eu; R(4)=R(8); f_8c05eea8(c); }
  ST16(R(15)+20,R(0));
L8c05f380:;
  R(3)=0x8c094ac0u;
  { c->pr=0x8c05f386u; R(4)=R(8); f_8c094ac0(c); }
  R(2)=0x8c0847e6u;
  { c->pr=0x8c05f38cu; fp_mov(c,4,0); f_8c0847e6(c); }
  R(3)=0x8c0847f2u;
  { c->pr=0x8c05f392u; c->fr[4]=0x00000000u; f_8c0847f2(c); }
  R(13)=LD32(R(15));
  R(11)=0x8c0c806eu;
  R(13)=LD32(R(13));
  R(10)=0x8c2d4090u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(9)=0x1u; if(k) goto L8c05f44c; }
L8c05f3a0:;
  R(14)=LD32(R(13));
  R(3)=0x8c05689eu;
  R(2)=LD32(R(14)+44);
  ST32(R(15)+12,R(2));
  { c->pr=0x8c05f3acu; R(4)=R(14); f_8c05689e(c); }
  ST32(R(15),R(0));
  R(3)=LD32(R(15)+16);
  c->t=R(14)==R(3);
  if(!c->t) goto L8c05f400;
  { ST8(R(10),R(9)); goto L8c05f402; }
L8c05f400:;
  ST8(R(10),R(12));
L8c05f402:;
  R(3)=0x8c0c5198u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c05f412;
  R(1)=LD32(R(15));
  R(2)=0x100000u;
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c05f444;
L8c05f412:;
  R(2)=LD32(R(15)+12);
  R(3)=0x200000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c05f444;
  R(5)=LD32(R(15)+4);
  R(2)=LD32(R(15)+12);
  R(1)=0x8c09a1eau;
  R(6)=LD32(R(15)+8);
  R(5)&=R(2);
  { c->pr=0x8c05f428u; R(4)=R(14); f_8c09a1ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x100u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c05f444;
  R(2)=(int32_t)(int8_t)LD8(R(11));
  R(5)=R(8);
  ST8(R(15),R(2));
  R(2)=0x8c05f8cau;
  ST8(R(11),R(9));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c05f440u; R(4)=R(14); f_8c05f8ca(c); }
  R(3)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(11),R(3));
L8c05f444:;
  ST8(R(10),R(12));
  R(13)=LD32(R(13)+4);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c05f3a0;
L8c05f44c:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c05f46c;
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(4)=R(0);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c07abb8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07abb8(c); return; } }
L8c05f46c:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c05f4a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(9)=R(5);
  R(14)=LD32(R(9)+4);
  R(0)=0x60u;
  R(3)=0x8c084a1au;
  fp_ld(c,4,R(0)+R(14));
  R(10)=R(6);
  R(0)=LD32(c->gbr+88);
  R(11)=R(4);
  { c->pr=0x8c05f4c6u; R(4)=R(0); f_8c084a1a(c); }
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05f500;
  R(4)=LD32(R(14)+36);
  R(3)=0x8c064e90u;
  R(6)=0x1bdu;
  R(4)+=0x1u;
  R(5)=0x8c0bad50u;
  { c->pr=0x8c05f4dcu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c05f50e; }
L8c05f500:;
  R(4)=LD32(R(14)+36);
  R(3)=0x8c0199c4u;
  R(6)=0x1bdu;
  R(4)+=0x1u;
  R(5)=0x8c0bad50u;
  { c->pr=0x8c05f50eu; R(4)<<=2; f_8c0199c4(c); }
L8c05f50e:;
  R(2)=R(0);
  ST32(R(15),R(2));
  { c->pr=0x8c05f516u; R(4)=R(9); f_8c05ee70(c); }
  R(3)=0x8c064566u;
  R(0)=LD32(c->gbr+88);
  { c->pr=0x8c05f51eu; R(4)=R(0); f_8c064566(c); }
  R(8)=0x8c0c5198u;
  R(2)=(int32_t)(int8_t)LD8(R(8));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c05f574;
  R(3)=LD32(R(15));
  R(5)=R(9);
  R(6)=R(10);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c05f532u; R(4)=R(11); f_8c05f026(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  ST32(R(2),R(0));
  R(3)=LD32(R(14)+36);
  R(13)=LD32(R(14)+32);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c05f574; }
L8c05f540:;
  R(2)=0x8c124740u;
  R(0)=(int32_t)(int8_t)LD8(R(2));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05f54e;
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05f568;
L8c05f54e:;
  R(3)=LD32(R(15));
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  R(2)<<=2;
  R(6)=R(10);
  R(1)=0x4u;
  R(2)+=R(3);
  R(1)+=R(2);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(13)+4);
  { c->pr=0x8c05f564u; R(4)=R(11); f_8c05f026(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c05f568:;
  R(3)=LD32(R(14)+36);
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(13)+=0x8u; if(k) goto L8c05f540; }
L8c05f574:;
  R(7)=LD32(R(15));
  R(5)=R(9);
  R(6)=R(10);
  R(7)=LD32(R(7));
  { c->pr=0x8c05f580u; R(4)=R(11); f_8c05f326(c); }
  R(2)=LD32(R(14)+36);
  R(13)=LD32(R(14)+32);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c05f5bc; }
L8c05f58a:;
  R(1)=(int32_t)(int8_t)LD8(R(8));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c05f59e;
  R(3)=0x8c124740u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c05f59e;
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c05f5b0;
L8c05f59e:;
  R(3)=LD32(R(15));
  R(7)=(uint32_t)(int32_t)(int16_t)R(12);
  R(7)<<=2;
  R(5)=LD32(R(13)+4);
  R(7)+=R(3);
  R(6)=R(10);
  R(7)=LD32(R(7)+4);
  { c->pr=0x8c05f5b0u; R(4)=R(11); f_8c05f326(c); }
L8c05f5b0:;
  R(3)=LD32(R(14)+36);
  R(12)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(12);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(13)+=0x8u; if(k) goto L8c05f58a; }
L8c05f5bc:;
  R(1)=0x8c07ac00u;
  { c->pr=0x8c05f5c2u;  f_8c07ac00(c); }
  R(2)=0x8c2d408cu;
  R(5)=0x8c0bad50u;
  R(3)=0x8c064eb8u;
  R(6)=0x202u;
  ST32(R(2),R(9));
  { c->pr=0x8c05f5d0u; R(4)=R(15); f_8c064eb8(c); }
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
void f_8c05f644(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  ST16(R(15),R(4));
  R(3)=0x8c0119a0u;
  R(4)=0x8c2d40b8u;
  { c->pr=0x8c05f660u;  f_8c0119a0(c); }
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c011b42u;
  R(0)=0x10u;
  R(14)=0x8c2d40b8u;
  R(5)+=0x4u;
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c05f67eu; R(4)=LD32(R(14)); f_8c011b42(c); }
  R(2)=0x8c011b92u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c05f688u; R(4)=LD32(R(14)); f_8c011b92(c); }
  R(3)=0x8c011bb6u;
  R(6)=R(15);
  R(5)=0x2u;
  R(6)+=0x4u;
  { c->pr=0x8c05f694u; R(4)=LD32(R(14)); f_8c011bb6(c); }
  R(2)=0x8c011be4u;
  R(5)=0xffffffffu;
  { c->pr=0x8c05f69cu; R(4)=LD32(R(14)); f_8c011be4(c); }
  R(3)=0x8c01145cu;
  R(5)=0x8c2d409cu;
  { c->pr=0x8c05f6a4u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c01145c(c); }
  R(2)=0x8c2d4104u;
  R(3)=0x8c011cc0u;
  R(5)=LD32(R(2));
  { c->pr=0x8c05f6aeu; R(4)=LD32(R(14)); f_8c011cc0(c); }
  R(2)=0x8c05a390u;
  R(12)=0x8c2d40bcu;
  { c->pr=0x8c05f6b6u;  f_8c05a390(c); }
  R(3)=0x8c05a3feu;
  ST32(R(12),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c05f6c0u; R(4)=R(0); f_8c05a3fe(c); }
  R(8)=0x8c086944u;
  R(11)=0x0u;
  R(9)=0x8c085654u;
  R(10)=0x8c085280u;
  R(14)=0x8c2d40c8u;
  R(13)=0x8c2d40f0u;
L8c05f6cc:;
  R(5)=0x64u;
  R(6)=0x1u;
  { uint32_t tg=R(8); c->pr=0x8c05f6d4u; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x30u;
  R(7)=0x64u;
  { uint32_t tg=R(10); c->pr=0x8c05f6deu; R(4)=LD32(R(14)); sh4_call(c,tg); }
  {int32_t v=(int16_t)LD16(R(13));R(13)+=2;R(5)=(uint32_t)v;}
  R(6)=LD32(R(12));
  { uint32_t tg=R(9); c->pr=0x8c05f6e6u; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  R(5)=0x64u;
  R(6)=0x1u;
  { uint32_t tg=R(8); c->pr=0x8c05f6eeu; R(4)=R(14); sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x30u;
  R(7)=0x64u;
  { uint32_t tg=R(10); c->pr=0x8c05f6f8u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  {int32_t v=(int16_t)LD16(R(13));R(13)+=2;R(5)=(uint32_t)v;}
  R(6)=LD32(R(12));
  { uint32_t tg=R(9); c->pr=0x8c05f700u; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  R(11)+=0x2u;
  R(3)=0xau;
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c05f6cc;
  R(2)=0x8c2d40c0u;
  R(1)=LD32(R(12));
  ST32(R(2),R(1));
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
void f_8c05f724(SH4Ctx *c) {
  R(0)=0x8c2d40c4u;
  R(3)=0x0u;
  { ST16(R(0),R(3)); return; }
}
void f_8c05f7a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(11)=R(4);
  R(4)=0x0u;
  R(13)=R(4);
  R(5)=R(11);
  R(14)=R(4);
  R(0)=0xdcu;
  R(3)=0x8c2d40c4u;
  R(12)=R(6);
  R(2)=0x8c2d40bcu;
  ST32(R(15),R(7));
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4));
  R(4)=LD32(R(4)+R(0));
  R(0)=0x8c2d40f0u;
  ST32(R(2),R(4));
  R(6)=R(4);
  R(5)=(int32_t)(int16_t)LD16(R(3));
  R(3)=0x8c085654u;
  c->t=R(5)>>31;R(5)<<=1;
  R(5)=(int32_t)(int16_t)LD16(R(5)+R(0));
  { c->pr=0x8c05f7deu; R(4)=LD32(R(15)); f_8c085654(c); }
  R(2)=0x8c06450au;
  { c->pr=0x8c05f7e4u;  f_8c06450a(c); }
  R(3)=0x8c05689eu;
  R(10)=0x8c0388c0u;
  { c->pr=0x8c05f7ecu; R(4)=R(11); f_8c05689e(c); }
  R(2)=0x200000u;
  c->t=(R(0)&R(2))==0;
  if(c->t) goto L8c05f810;
  R(1)=0x8c0388eau;
  { c->pr=0x8c05f7f8u;  f_8c0388ea(c); }
  R(2)=0x8c084808u;
  R(0)=0x38u;
  fp_mov(c,15,0);
  R(4)=R(11);
  { c->pr=0x8c05f804u; fp_ld(c,14,R(0)+R(4)); f_8c084808(c); }
  fp_mov(c,4,0);
  { uint32_t tg=R(10); c->pr=0x8c05f80au; fp_arith(c,2,4,14); sh4_call(c,tg); }
  R(3)=0xfffffff7u;
  { R(12)&=R(3); goto L8c05f828; }
L8c05f810:;
  R(0)=LD32(R(11)+44);
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c05f880;
  R(3)=0x8c0388eau;
  R(1)=0xfffffff7u;
  { c->pr=0x8c05f81eu; R(12)&=R(1); f_8c0388ea(c); }
  R(0)=0x38u;
  R(4)=R(11);
  fp_mov(c,15,0);
  { uint32_t tg=R(10); c->pr=0x8c05f828u; fp_ld(c,4,R(0)+R(4)); sh4_call(c,tg); }
L8c05f828:;
  { R(13)=0x1u; goto L8c05f882; }
L8c05f880:;
  R(14)=0xf8000000u;
L8c05f882:;
  R(3)=0x8c038becu;
  R(5)=R(12);
  R(5)|=R(14);
  { c->pr=0x8c05f88cu; R(4)=LD32(R(15)); f_8c038bec(c); }
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c05f896;
  { uint32_t tg=R(10); c->pr=0x8c05f896u; fp_mov(c,4,15); sh4_call(c,tg); }
L8c05f896:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c06452cu;
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c06452c(c); return; } }
}
void f_8c05f8ac(SH4Ctx *c) {
  fp_ld(c,3,R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(5));
  fp_arith(c,1,5,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,1,6,3);
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x8u;
  fp_mov(c,0,5);
  fp_arith(c,2,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  fp_arith(c,2,4,3);
  { fp_arith(c,1,0,4); return; }
}
void f_8c05f8ca(SH4Ctx *c) {
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
  R(0)=0xffffff78u;
  R(15)+=R(0);
  ST32(R(15)+4,R(4));
  R(3)=0x0u;
  ST32(R(15)+12,R(5));
  R(0)=0xdcu;
  R(2)=0x8c2e71b0u;
  ST32(R(15)+40,R(6));
  ST32(R(2),R(3));
  R(4)=LD32(R(15)+4);
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5));
  R(5)=LD32(R(5)+R(0));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c05f904;
  {  goto L8c06016e; }
L8c05f904:;
  R(5)=LD32(R(15)+4);
  R(4)=0x20u;
  R(0)=LD32(R(5)+48);
  R(4)&=R(0);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c05f916;
  {  goto L8c06016e; }
L8c05f916:;
  R(0)=LD32(R(15)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c05f960;
  { R(3)=0x1u; goto L8c05f962; }
L8c05f960:;
  R(3)=0x0u;
L8c05f962:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05f96c;
  {  goto L8c06016e; }
L8c05f96c:;
  R(10)=0x8c05689eu;
  { c->pr=0x8c05f972u; R(4)=LD32(R(15)+4); f_8c05689e(c); }
  R(3)=0x200000u;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c05f988;
  R(1)=0x8c084808u;
  { c->pr=0x8c05f97eu;  f_8c084808(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,0,3);
  if(!c->t) goto L8c05f988;
  {  goto L8c06016e; }
L8c05f988:;
  R(4)=LD32(R(15)+4);
  R(0)=0xecu;
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5));
  R(5)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c05f99c;
  {  goto L8c06016e; }
L8c05f99c:;
  R(2)=0x8c2d40c4u;
  R(1)=0xau;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  if(!c->t) goto L8c05f9aa;
  {  goto L8c06016e; }
L8c05f9aa:;
  R(0)=LD32(R(15)+4);
  R(11)=0x0u;
  R(5)=R(15);
  R(3)=LD32(R(0)+36);
  R(4)=R(3);
  ST32(R(15)+28,R(3));
  R(3)=0x8c0163ceu;
  { c->pr=0x8c05f9bcu; R(5)+=0x70u; f_8c0163ce(c); }
  R(3)=0x8c2d40c4u;
  R(0)=0x8c2d40c8u;
  R(2)=(int32_t)(int16_t)LD16(R(3));
  c->fr[3]=0x00000000u;
  R(2)<<=2;
  R(2)=LD32(R(2)+R(0));
  R(0)=0xe4u;
  ST32(R(15),R(2));
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  ST32(R(15)+36,R(4));
  R(4)=LD32(R(4));
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c05f9de;
  { fp_mov(c,15,4); goto L8c05f9e2; }
L8c05f9de:;
  fp_mov(c,15,4);
  fp_unary(c,0,15);
L8c05f9e2:;
  R(0)=0xe8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c05fa20;
  { fp_mov(c,12,4); goto L8c05fa24; }
L8c05fa20:;
  fp_mov(c,12,4);
  fp_unary(c,0,12);
L8c05fa24:;
  R(0)=0x8c05fae8u;
  R(2)=0x8c0c9518u;
  fp_ld(c,3,R(0));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x78u;
  R(13)=0x8c09ade0u;
  R(3)=0x0u;
  fp_arith(c,0,2,3);
  R(9)=0x200u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  c->fr[2]=0x00000000u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c05faecu;
  fp_ld(c,2,R(0));
  R(0)=0x6cu;
  fp_st(c,2,R(0)+R(15));
  ST32(R(2),R(3));
  R(14)=LD32(R(15)+4);
  R(14)=LD32(R(14)+28);
  R(0)=LD32(R(14));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c05faba;
  { uint32_t tg=R(10); c->pr=0x8c05fa5cu; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(9))==0;
  if(!c->t) goto L8c05fa64;
  {  goto L8c05fd44; }
L8c05fa64:;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c05fa76;
  { R(3)=0x1u; goto L8c05fa78; }
L8c05fa76:;
  R(3)=0x0u;
L8c05fa78:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c05fa82;
  {  goto L8c05fd44; }
L8c05fa82:;
  R(2)=R(15);
  R(3)=0x80u;
  R(2)+=0x8u;
  R(6)=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x6cu;
  R(4)=R(15);
  R(7)+=0x60u;
  { uint32_t tg=R(13); c->pr=0x8c05fa9eu; R(4)+=0x78u; sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c05faaa; }
  {  goto L8c05fd44; }
L8c05faaa:;
  R(0)=0x8c05faf8u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  R(0)=c->t;
  { R(11)|=R(0); goto L8c05fd44; }
L8c05faba:;
  R(5)=LD32(R(15)+12);
  R(4)=LD32(R(5)+4);
  R(4)=LD32(R(4));
  { R(12)=R(4); goto L8c05fb60; }
L8c05fb00:;
  R(4)=R(12);
  R(2)=LD32(R(15)+4);
  R(14)=LD32(R(4));
  c->t=R(14)==R(2);
  if(c->t) goto L8c05fb5e;
  { uint32_t tg=R(10); c->pr=0x8c05fb0eu; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(9))==0;
  if(c->t) goto L8c05fb5e;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c05fb24;
  { R(3)=0x1u; goto L8c05fb26; }
L8c05fb24:;
  R(3)=0x0u;
L8c05fb26:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05fb5e;
  R(2)=R(15);
  R(3)=0x80u;
  R(2)+=0x8u;
  R(6)=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x6cu;
  R(4)=R(15);
  R(7)+=0x60u;
  { uint32_t tg=R(13); c->pr=0x8c05fb48u; R(4)+=0x78u; sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c05fb5e; }
  R(0)=0x8c05fbc4u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  R(0)=c->t;
  R(11)|=R(0);
L8c05fb5e:;
  R(12)=LD32(R(12)+4);
L8c05fb60:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c05fb00;
  R(3)=0x8c0c9518u;
  R(1)=R(15);
  R(2)=0x80u;
  R(1)+=0x8u;
  ST32(R(3),R(2));
  R(2)=0x80u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(2)+=R(15);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+20);
  R(5)=R(15);
  R(7)=R(15);
  R(4)=R(15);
  R(5)+=0x6cu;
  R(7)+=0x60u;
  { uint32_t tg=R(13); c->pr=0x8c05fb86u; R(4)+=0x78u; sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c05fb9c; }
  R(0)=0x8c05fbc4u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  R(0)=c->t;
  R(11)|=R(0);
L8c05fb9c:;
  R(2)=0x8c0c9518u;
  R(3)=0x0u;
  ST32(R(2),R(3));
  R(4)=LD32(R(15)+12);
  R(5)=LD32(R(4)+4);
  R(5)=LD32(R(5)+52);
  ST32(R(15)+32,R(5));
  R(4)=LD32(R(15)+12);
  R(5)=LD32(R(4)+4);
  { R(5)=LD32(R(5)+48); goto L8c05fcac; }
L8c05fbe0:;
  R(4)=R(8);
  R(14)=LD32(R(4));
  R(2)=0x0u;
  R(12)=0x8c07773au;
  R(5)=LD32(R(14)+4);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(5);
  R(4)+=0x48u;
  R(5)=R(15);
  R(6)=R(4);
  R(7)=R(4);
  R(4)=R(15);
  R(5)+=0x68u;
  R(7)+=0xcu;
  { uint32_t tg=R(12); c->pr=0x8c05fc00u; R(4)+=0x74u; sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c05fca0; }
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  { R(12)=R(4); goto L8c05fc9c; }
L8c05fc10:;
  R(4)=R(12);
  R(14)=LD32(R(4));
  { uint32_t tg=R(10); c->pr=0x8c05fc18u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(9))==0;
  if(c->t) goto L8c05fc9a;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c05fc60;
  { R(3)=0x1u; goto L8c05fc62; }
L8c05fc60:;
  R(3)=0x0u;
L8c05fc62:;
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c05fc9a;
  R(2)=R(15);
  R(3)=0x80u;
  R(2)+=0x8u;
  R(6)=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x6cu;
  R(4)=R(15);
  R(7)+=0x60u;
  { uint32_t tg=R(13); c->pr=0x8c05fc84u; R(4)+=0x78u; sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c05fc9a; }
  R(0)=0x8c05fce4u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  R(0)=c->t;
  R(11)|=R(0);
L8c05fc9a:;
  R(12)=LD32(R(12)+4);
L8c05fc9c:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c05fc10;
L8c05fca0:;
  R(2)=LD32(R(15)+32);
  R(5)=R(8);
  R(5)+=0x4u;
  R(4)=R(8);
  R(2)+=0xffffffffu;
  ST32(R(15)+32,R(2));
L8c05fcac:;
  R(2)=LD32(R(15)+32);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=c->t; R(8)=R(5); if(k) goto L8c05fbe0; }
  R(1)=0x80u;
  R(3)=0x8c0c9518u;
  ST32(R(3),R(1));
  R(5)=LD32(R(15)+12);
  R(4)=LD32(R(5)+4);
  R(12)=LD32(R(4)+44);
  R(4)=LD32(R(4)+40);
  { R(14)=R(4); goto L8c05fd40; }
L8c05fd00:;
  R(2)=R(15);
  R(2)+=0x8u;
  R(3)=0x80u;
  R(4)=R(14);
  R(10)=LD32(R(4));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=R(15);
  R(6)=R(10);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x6cu;
  R(4)=R(15);
  R(7)+=0x60u;
  { uint32_t tg=R(13); c->pr=0x8c05fd20u; R(4)+=0x78u; sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c05fd36; }
  R(0)=0x8c05fdc4u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  R(0)=c->t;
  R(11)|=R(0);
L8c05fd36:;
  R(5)=R(14);
  R(5)+=0x4u;
  R(4)=R(14);
  R(14)=R(5);
  R(12)+=0xffffffffu;
L8c05fd40:;
  c->t=(int32_t)R(12)>0;
  if(c->t) goto L8c05fd00;
L8c05fd44:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c05fd4c;
  {  goto L8c06016e; }
L8c05fd4c:;
  R(0)=0x8c05fdc4u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c05fd5c;
  {  goto L8c06016e; }
L8c05fd5c:;
  R(0)=0x84u;
  R(6)=R(15);
  c->fr[14]=0x3F800000u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(7)=R(15);
  fp_mov(c,2,14);
  R(0)=0x10u;
  fp_arith(c,3,2,3);
  R(3)=0x8c015e64u;
  R(5)+=0x40u;
  R(7)+=0x4cu;
  R(6)+=0x4cu;
  fp_st(c,2,R(0)+R(15));
  { c->pr=0x8c05fd7cu; R(4)=LD32(R(15)+28); f_8c015e64(c); }
  R(0)=0x48u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c05fdccu;
  fp_ld(c,5,R(0));
  R(0)=0x40u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c05fd92;
  { fp_mov(c,3,4); goto L8c05fd96; }
L8c05fd92:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c05fd96:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c05fdf6;
  R(0)=0x44u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c05fde0;
  R(0)=0x44u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c05fde6; }
L8c05fde0:;
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c05fde6:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c05fdf6;
  R(0)=0x8c0600e0u;
  fp_ld(c,4,R(0));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(15));
L8c05fdf6:;
  R(0)=0x40u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x48u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c0600e4u;
  fp_ld(c,4,R(0));
  R(0)=0x60u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_mov(c,2,14);
  fp_arith(c,1,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  R(3)=0x8c20ae78u;
  fp_fmac(c,2,3);
  fp_mov(c,3,15);
  fp_arith(c,3,14,2);
  fp_mov(c,15,14);
  fp_arith(c,2,15,3);
  fp_mov(c,3,12);
  fp_mov(c,12,14);
  fp_arith(c,2,12,3);
  fp_mov(c,13,15);
  fp_arith(c,2,13,6);
  fp_mov(c,3,12);
  fp_arith(c,2,3,6);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,15,6);
  fp_arith(c,2,12,6);
  fp_st(c,15,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c05fe84; }
  R(1)=LD32(R(15)+8);
  R(2)=0x80000000u;
  R(1)=LD32(R(1)+44);
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c05fe9a;
L8c05fe84:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c05fe94;
  R(2)=LD32(R(15)+8);
  R(3)=0x80000000u;
  R(1)=LD32(R(2)+44);
  c->t=(R(1)&R(3))==0;
  if(!c->t) goto L8c05fe9a;
L8c05fe94:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c05febe;
L8c05fe9a:;
  R(3)=0x8c20b0ccu;
  R(0)=0x60u;
  fp_ld(c,3,R(3));
  fp_arith(c,0,5,3);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,3,5);
  fp_arith(c,1,2,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c05febe;
  R(0)=0x8c0600f4u;
  fp_ld(c,3,R(0));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c05febe:;
  R(0)=0x8c0600f8u;
  R(5)=R(15);
  fp_ld(c,3,R(0));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  R(4)=R(15);
  R(5)+=0x7cu;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_arith(c,0,2,13);
  fp_arith(c,1,2,12);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x50u;
  fp_arith(c,0,1,2);
  fp_arith(c,0,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,6,1);
  { c->pr=0x8c05ff00u; R(4)+=0x58u; f_8c05f8ac(c); }
  R(13)=0x8c0869a8u;
  R(5)=R(15);
  R(0)=0x54u;
  R(5)+=0x4cu;
  fp_st(c,0,R(0)+R(15));
  R(12)=LD32(R(15));
  R(6)=0x0u;
  { c->pr=0x8c05ff12u; R(4)=R(12); f_8c0869a8(c); }
  R(0)=0x2cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(7)=R(15);
  R(6)=0x0u;
  R(14)=0x8c085620u;
  R(0)=0x30u;
  R(5)=R(6);
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x2cu;
  { c->pr=0x8c05ff2au; R(4)=R(12); f_8c085620(c); }
  c->fr[15]=0x3F800000u;
  fp_arith(c,0,15,15);
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x50u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(5)=R(15);
  R(0)=0x54u;
  fp_arith(c,1,2,3);
  R(5)+=0x4cu;
  R(6)=0x2u;
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(13); c->pr=0x8c05ff80u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x2cu;
  R(7)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  R(6)=0x2u;
  fp_st(c,15,R(0)+R(15));
  R(5)=0x0u;
  R(7)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c05ff94u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x58u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  R(4)=R(15);
  R(5)+=0x7cu;
  fp_arith(c,0,3,13);
  fp_arith(c,0,3,12);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x50u;
  fp_arith(c,0,2,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,6,2);
  { c->pr=0x8c05ffc8u; R(4)+=0x58u; f_8c05f8ac(c); }
  R(5)=R(15);
  R(0)=0x54u;
  R(5)+=0x4cu;
  fp_st(c,0,R(0)+R(15));
  R(6)=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c05ffd6u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x2cu;
  R(7)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  c->fr[3]=0x00000000u;
  R(6)=0x1u;
  R(5)=0x0u;
  fp_st(c,3,R(0)+R(15));
  R(7)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c05ffecu; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x4cu;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  R(5)+=0x4cu;
  fp_arith(c,1,2,3);
  R(6)=0x3u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x50u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x54u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  { uint32_t tg=R(13); c->pr=0x8c060020u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x2cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(7)=R(15);
  R(0)=0x30u;
  R(6)=0x3u;
  fp_st(c,15,R(0)+R(15));
  R(5)=0x0u;
  R(7)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c060036u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x1u;
  R(1)=0x8c08559eu;
  R(7)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x3u;
  R(5)=R(7);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(7);
  { c->pr=0x8c06004au; R(4)=R(12); f_8c08559e(c); }
  R(3)=0x1u;
  R(1)=0x8c0855c8u;
  R(7)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x3u;
  R(5)=R(7);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(7);
  { c->pr=0x8c06005eu; R(4)=R(12); f_8c0855c8(c); }
  R(3)=0x2u;
  R(1)=0x8c08559eu;
  R(7)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x3u;
  R(6)=R(7);
  R(5)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c060072u; R(4)=R(12); f_8c08559e(c); }
  R(3)=0x2u;
  R(1)=0x8c0855c8u;
  R(7)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x3u;
  R(6)=R(7);
  R(5)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c060086u; R(4)=R(12); f_8c0855c8(c); }
  R(15)+=0x20u;
  R(0)=0x2cu;
  R(3)=0x4u;
  ST16(R(12)+R(0),R(3));
  R(0)=0x2u;
  R(3)=0x8c123cf0u;
  R(4)=LD32(R(12)+20);
  R(4)=LD32(R(4));
  ST16(R(4)+4,R(0));
  R(14)=LD32(R(3));
  R(2)=LD32(R(15)+4);
  c->t=R(2)==R(14);
  if(!c->t) goto L8c060156;
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+28);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0600b4;
  R(0)=LD32(R(4));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0600b4;
  R(3)=0x8c01a5d4u;
  { c->pr=0x8c0600b4u;  f_8c01a5d4(c); }
L8c0600b4:;
  R(0)=0x58u;
  R(4)=0x8c2d4108u;
  R(3)=0x8c0c6d7cu;
  R(2)=0x1u;
  ST8(R(3),R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,3,R(4));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x7cu;
  R(4)=0x8c2d4114u;
  fp_ld(c,3,R(0)+R(15));
  fp_st(c,3,R(4));
  {  goto L8c060120; }
L8c060120:;
  R(0)=0x80u;
  R(2)=0x8c036180u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,7,14);
  fp_st(c,3,R(0)+R(4));
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x58u;
  R(4)=LD32(R(14)+36);
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x5cu;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x8c0601a8u;
  fp_ld(c,3,R(0));
  { uint32_t tg=R(2); c->pr=0x8c06014eu; fp_arith(c,2,7,3); sh4_call(c,tg); }
  R(2)=0x8c2e71b0u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); goto L8c060166; }
L8c060156:;
  R(1)=0x8c2e71b0u;
  R(0)=0x0u;
  ST32(R(1),R(0));
  R(7)=LD32(R(15));
  R(6)=LD32(R(15)+40);
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c060166u; R(4)=LD32(R(15)+4); f_8c05f7a0(c); }
L8c060166:;
  R(3)=0x8c2d40c4u;
  R(2)=(int32_t)(int16_t)LD16(R(3));
  R(2)+=0x1u;
  ST16(R(3),R(2));
L8c06016e:;
  R(1)=0x88u;
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
