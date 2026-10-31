#include "recomp_decls.h"
void f_8c025ee6(SH4Ctx *c) {
  R(2)=0x61u;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c025ef4;
  R(1)=0x7au;
  c->t=R(4)>R(1);
  if(c->t) goto L8c025ef4;
  R(4)+=0xffffffe0u;
L8c025ef4:;
  { R(0)=R(4); return; }
}
void f_8c025f20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c026020u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(4)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  c->fpul=R(11);
  R(13)=R(4);
  R(12)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_float(c,3);
  fp_ld(c,2,R(0));
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  { uint32_t k=c->t; R(10)=c->fpul; if(k) goto L8c025f90; }
L8c025f4c:;
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c025f7a;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { c->pr=0x8c025f5cu; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==76;
  if(c->t) goto L8c025f90;
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c025f84;
L8c025f6a:;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c025f6a;
  {  goto L8c025f84; }
L8c025f7a:;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c025f82;
  { R(12)+=R(10); goto L8c025f84; }
L8c025f82:;
  R(12)+=R(11);
L8c025f84:;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=R(4)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c025f4c;
L8c025f90:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c025fa0(SH4Ctx *c) {
  R(0)=0x8c026024u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0));
  R(0)=0x8c026028u;
  fp_mov(c,1,4);
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  ST32(R(7),R(3));
  fp_ld(c,2,R(0));
  R(0)=0x8c02602cu;
  fp_arith(c,2,1,2);
  fp_ftrc(c,1);
  R(3)=c->fpul;
  ST32(R(5),R(3));
  fp_ld(c,1,R(0));
  R(0)=0x8c026034u;
  R(3)=0x8c0c52e4u;
  fp_arith(c,2,4,1);
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST32(R(6),R(2));
  fp_ld(c,3,R(3));
  fp_ld(c,0,R(0));
  fp_arith(c,2,3,4);
  fp_arith(c,2,3,0);
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST32(R(4),R(2));
  R(4)=0x8c0c4628u;
  R(2)=LD32(R(5));
  fp_ld(c,3,R(4));
  c->fpul=R(2);
  fp_float(c,0);
  fp_arith(c,2,0,3);
  fp_ftrc(c,0);
  R(2)=c->fpul;
  ST32(R(5),R(2));
  R(1)=LD32(R(7));
  fp_ld(c,3,R(4));
  c->fpul=R(1);
  fp_float(c,0);
  fp_arith(c,2,0,3);
  fp_ftrc(c,0);
  R(1)=c->fpul;
  { ST32(R(7),R(1)); return; }
}
void f_8c026040(SH4Ctx *c) {
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
  R(15)+=0xffffffdcu;
  R(1)=0x8c0c52dcu;
  R(3)=0x1u;
  c->fr[3]=0x00000000u;
  R(0)=0x10u;
  R(8)=0x0u;
  R(11)=R(5);
  ST32(R(15)+8,R(4));
  R(14)=R(8);
  ST32(R(15)+24,R(3));
  R(12)=R(6);
  R(3)=0x8c0c52e4u;
  R(10)=R(8);
  fp_st(c,3,R(0)+R(15));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; fp_ld(c,4,R(3)); if(k) goto L8c026092; }
  R(0)=0x8c02618cu;
  fp_mov(c,3,4);
  fp_ld(c,5,R(0));
  R(0)=0x8c026190u;
  fp_arith(c,2,3,5);
  fp_mov(c,2,5);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c026092:;
  R(4)=LD32(R(15)+8);
  R(0)=0x10u;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x4u;
  R(4)+=0x4u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x8c026194u;
  fp_ld(c,12,R(0));
  R(0)=0x8c026198u;
  fp_ld(c,3,R(4));
  fp_arith(c,2,5,12);
  R(3)=0x8c0c4628u;
  fp_fmac(c,15,3);
  fp_ld(c,0,R(0));
  R(0)=0x8c02619cu;
  R(13)=LD32(R(15)+8);
  fp_ld(c,4,R(0));
  R(0)=0x8c0261a4u;
  fp_arith(c,0,5,0);
  fp_ld(c,0,R(3));
  fp_ld(c,3,R(0));
  R(3)=0x8c0c462cu;
  R(13)=LD32(R(13));
  fp_fmac(c,4,5);
  fp_ld(c,2,R(3));
  fp_mov(c,0,3);
  fp_st(c,15,R(11));
  fp_st(c,15,R(12));
  fp_mov(c,14,4);
  fp_arith(c,2,14,3);
  fp_fmac(c,14,2);
  R(3)=R(11);
  R(3)+=0x4u;
  R(2)=R(12);
  R(5)=R(15);
  R(6)=R(15);
  R(4)=R(15);
  R(2)+=0x4u;
  R(7)=R(15);
  ST32(R(15),R(2));
  R(4)+=0x4u;
  ST32(R(15)+20,R(3));
  R(0)=0xcu;
  fp_st(c,14,R(3));
  R(6)+=0x1cu;
  R(7)+=0x20u;
  fp_st(c,14,R(2));
  R(3)=LD32(R(15)+8);
  R(5)+=0xcu;
  { c->pr=0x8c0260fau; fp_ld(c,4,R(0)+R(3)); f_8c025fa0(c); }
  R(4)=(int32_t)(int8_t)LD8(R(13));
  { c->pr=0x8c026100u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  R(3)=(uint32_t)(int32_t)(int8_t)R(4);
  R(9)=0x3e8u;
  c->t=(R(3)&R(3))==0;
  R(0)=0x8c0261acu;
  { uint32_t k=!c->t; fp_ld(c,13,R(0)); if(k) goto L8c026112; }
  {  goto L8c0262ac; }
L8c026112:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c02611c;
  {  goto L8c02626c; }
L8c02611c:;
  R(14)+=0x1u;
  R(0)=R(14);
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  { c->pr=0x8c026126u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  R(2)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c026132;
  {  goto L8c0262e4; }
L8c026132:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==76;
  if(!c->t) goto L8c0261ee;
  R(14)+=0x1u;
  R(0)=R(14);
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c026146;
  {  goto L8c0262e4; }
L8c026146:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c026150;
  {  goto L8c0262e4; }
L8c026150:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0261c0;
  R(4)=R(14);
  R(5)=LD32(R(15)+4);
  R(4)+=R(13);
  { c->pr=0x8c02615eu; R(4)+=0x1u; f_8c025f20(c); }
  R(0)=0u-R(0);
  R(0)+=R(9);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  { fp_mov(c,15,3); goto L8c0261d0; }
L8c0261c0:;
  R(0)=0x10u;
  R(3)=0x8c0c52e4u;
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x4u;
  R(2)=LD32(R(15)+8);
  fp_ld(c,0,R(3));
  fp_ld(c,3,R(0)+R(2));
  fp_fmac(c,15,3);
L8c0261d0:;
  fp_ld(c,3,R(11));
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c0261d8;
  fp_st(c,15,R(11));
L8c0261d8:;
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15));
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,0,14,3);
  fp_ld(c,3,R(3));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c02628e;
  R(2)=LD32(R(15));
  { fp_st(c,14,R(2)); goto L8c02628e; }
L8c0261ee:;
  c->t=(int32_t)R(0)==79;
  if(!c->t) goto L8c02621a;
  R(14)+=0x1u;
  R(0)=R(14);
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c026200;
  {  goto L8c0262e4; }
L8c026200:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c02628e;
L8c026206:;
  R(14)+=0x1u;
  R(0)=R(14);
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0262e4;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c026206;
  {  goto L8c02628e; }
L8c02621a:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==67;
  if(!c->t) goto L8c02628e;
  R(14)+=0x1u;
  R(0)=R(14);
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0262e4;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0262e4;
  R(2)=0x1u;
  R(10)^=R(2);
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c02628e;
  R(1)=LD32(R(15)+24);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c026244;
  ST32(R(15)+24,R(8));
  fp_st(c,13,R(11));
  fp_st(c,13,R(12));
L8c026244:;
  R(4)=R(14);
  R(5)=LD32(R(15)+4);
  R(4)+=R(13);
  { c->pr=0x8c02624eu; R(4)+=0x1u; f_8c025f20(c); }
  R(0)=0u-R(0);
  fp_ld(c,2,R(11));
  R(0)+=R(9);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  fp_mov(c,15,3);
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c026262;
  fp_st(c,15,R(11));
L8c026262:;
  fp_ld(c,3,R(12));
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c026296;
  { fp_st(c,15,R(12)); goto L8c02628e; }
L8c02626c:;
  R(2)=LD32(R(15)+4);
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==32;
  c->fpul=R(2);
  fp_float(c,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c02628c; }
  R(0)=0x8c026304u;
  fp_ld(c,3,R(0));
  fp_arith(c,2,4,3);
  fp_ftrc(c,4);
  R(3)=c->fpul;
  c->fpul=R(3);
  fp_float(c,2);
  { fp_arith(c,0,15,2); goto L8c02628e; }
L8c02628c:;
  fp_arith(c,0,15,4);
L8c02628e:;
  fp_ld(c,3,R(12));
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c026296;
  fp_st(c,15,R(12));
L8c026296:;
  R(14)+=0x1u;
  R(0)=R(14);
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  { c->pr=0x8c0262a0u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  R(2)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0262ac;
  {  goto L8c026112; }
L8c0262ac:;
  R(0)=0x8c026308u;
  fp_ld(c,3,R(11));
  fp_ld(c,4,R(0));
  R(0)=0x8c02630cu;
  fp_arith(c,0,3,4);
  fp_arith(c,2,3,12);
  fp_st(c,3,R(11));
  R(3)=LD32(R(15)+20);
  R(2)=R(3);
  fp_ld(c,3,R(2));
  fp_arith(c,0,3,4);
  fp_arith(c,2,3,12);
  fp_st(c,3,R(3));
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(0));
  fp_arith(c,0,2,3);
  fp_arith(c,2,2,12);
  fp_st(c,2,R(12));
  R(1)=LD32(R(15)+12);
  R(3)=LD32(R(15));
  c->fpul=R(1);
  R(2)=R(3);
  fp_ld(c,1,R(2));
  fp_float(c,2);
  fp_arith(c,0,1,2);
  fp_arith(c,0,1,3);
  fp_arith(c,2,1,12);
  fp_st(c,1,R(3));
L8c0262e4:;
  R(15)+=0x24u;
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
void f_8c026320(SH4Ctx *c) {
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
  R(15)+=0xffffffdcu;
  R(3)=0x1u;
  R(2)=0x8c0c52dcu;
  c->fr[3]=0x00000000u;
  R(0)=0x20u;
  R(8)=0x0u;
  R(12)=R(4);
  R(13)=R(8);
  R(9)=R(8);
  c->fr[12]=0x00000000u;
  ST32(R(15)+12,R(8));
  ST32(R(15)+16,R(3));
  fp_st(c,3,R(0)+R(15));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=R(13); if(k) goto L8c026372; }
  R(3)=0x8c0c52e4u;
  R(0)=0x8c0263c8u;
  fp_ld(c,4,R(0));
  R(0)=0x8c0263d0u;
  fp_ld(c,3,R(3));
  fp_mov(c,2,4);
  fp_arith(c,2,3,4);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c026372:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x10)==0;
  { uint32_t k=c->t; R(10)=LD32(R(12)); if(k) goto L8c026420; }
  R(0)=0x18u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c026420;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c026398;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c02639e;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0263e0;
  {  goto L8c026422; }
L8c026398:;
  R(14)=0xfffa4646u;
  {  goto L8c026422; }
L8c02639e:;
  R(14)=0xffffff78u;
  {  goto L8c026422; }
L8c0263e0:;
  R(14)=0xff240f06u;
  {  goto L8c026422; }
L8c026420:;
  R(14)=0xff6ebeffu;
L8c026422:;
  R(0)=0x12u;
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c026440;
  R(3)=0x8c0c467cu;
  R(0)=0x8c026528u;
  R(2)=0x8c03aedau;
  fp_ld(c,4,R(3));
  fp_ld(c,3,R(0));
  { c->pr=0x8c026438u; fp_arith(c,2,4,3); f_8c03aeda(c); }
  R(0)=0x8c026534u;
  fp_mov(c,12,0);
  fp_ld(c,3,R(0));
  fp_arith(c,2,12,3);
L8c026440:;
  R(3)=0x8c0c52e4u;
  R(11)=R(12);
  R(0)=0x20u;
  R(6)=R(15);
  R(11)+=0x4u;
  fp_ld(c,14,R(0)+R(15));
  fp_ld(c,0,R(3));
  R(0)=0x4u;
  fp_ld(c,3,R(11));
  R(5)=R(15);
  R(4)=R(15);
  R(7)=R(15);
  fp_fmac(c,14,3);
  fp_ld(c,13,R(0)+R(11));
  R(0)=0x8u;
  R(4)+=0x4u;
  R(7)+=0x8u;
  R(6)+=0x1cu;
  R(5)+=0x18u;
  { c->pr=0x8c02646au; fp_ld(c,4,R(0)+R(11)); f_8c025fa0(c); }
  R(0)=0x8c02653cu;
  fp_mov(c,4,13);
  fp_ld(c,15,R(0));
  R(0)=0x8c026540u;
  fp_ld(c,0,R(0));
  R(0)=0x8c026544u;
  fp_arith(c,2,4,15);
  R(3)=0x8c0c4628u;
  fp_ld(c,5,R(0));
  R(0)=0x8c02654cu;
  fp_arith(c,0,4,0);
  fp_ld(c,0,R(3));
  R(3)=0x8c0c462cu;
  fp_fmac(c,5,4);
  fp_ld(c,4,R(0));
  R(0)=0x14u;
  fp_mov(c,0,4);
  fp_arith(c,2,5,4);
  fp_mov(c,2,5);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(3));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(2)=R(2)&0xFF;
  c->fpul=R(2);
  R(2)=0x8c0388c0u;
  { c->pr=0x8c0264a8u; fp_float(c,4); f_8c0388c0(c); }
  R(4)=(int32_t)(int8_t)LD8(R(10));
  { c->pr=0x8c0264aeu; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0264b8;
  {  goto L8c02682a; }
L8c0264b8:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c0264c2;
  {  goto L8c0266cc; }
L8c0264c2:;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  { c->pr=0x8c0264ccu; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0264d6;
  {  goto L8c02682a; }
L8c0264d6:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==76;
  if(!c->t) goto L8c026580;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0264ec;
  {  goto L8c02682a; }
L8c0264ec:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0264f6;
  {  goto L8c02682a; }
L8c0264f6:;
  R(3)=LD32(R(15)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c026560;
  R(4)=R(9);
  R(5)=LD32(R(15)+4);
  R(4)+=R(10);
  { c->pr=0x8c026506u; R(4)+=0x1u; f_8c025f20(c); }
  R(2)=0x3e8u;
  R(0)=0u-R(0);
  R(0)+=R(2);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  { fp_mov(c,14,3); goto L8c02656e; }
L8c026560:;
  R(0)=0x20u;
  R(3)=0x8c0c52e4u;
  fp_ld(c,14,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,0,R(3));
  fp_fmac(c,14,3);
L8c02656e:;
  R(3)=LD32(R(15)+24);
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(15)); goto L8c026816; }
L8c026580:;
  c->t=(int32_t)R(0)==79;
  if(c->t) goto L8c026588;
  {  goto L8c026680; }
L8c026588:;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(13)=R(8); if(k) goto L8c02659a; }
  {  goto L8c02682a; }
L8c02659a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0265c2;
L8c0265a0:;
  R(3)=R(13);
  R(13)<<=2;
  R(13)+=R(3);
  R(9)+=0x1u;
  R(4)+=0xffffffd0u;
  R(0)=R(9);
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(4);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0265bc;
  {  goto L8c02682a; }
L8c0265bc:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0265a0;
L8c0265c2:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c026626;
  R(0)=0x18u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c026630;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02663c;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0265e6;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c026620;
  {  goto L8c026816; }
L8c0265e6:;
  R(14)=0xffffff78u;
  {  goto L8c026816; }
L8c026620:;
  R(14)=0xff240f06u;
  {  goto L8c026816; }
L8c026626:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c026630;
  R(3)=0x258u;
  c->t=R(13)==R(3);
  if(!c->t) goto L8c026636;
L8c026630:;
  R(14)=0xff6ebeffu;
  {  goto L8c026816; }
L8c026636:;
  R(2)=0xc8u;
  c->t=R(13)==R(2);
  if(!c->t) goto L8c026642;
L8c02663c:;
  R(14)=0xfffa4646u;
  {  goto L8c026816; }
L8c026642:;
  R(3)=0x190u;
  c->t=R(13)==R(3);
  if(c->t) goto L8c02664c;
  {  goto L8c026816; }
L8c02664c:;
  R(14)=0xffffff78u;
  {  goto L8c026816; }
L8c026680:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==67;
  if(c->t) goto L8c02668a;
  {  goto L8c026816; }
L8c02668a:;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02669a;
  {  goto L8c02682a; }
L8c02669a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0266a4;
  {  goto L8c02682a; }
L8c0266a4:;
  R(0)=LD32(R(15)+12);
  R(0)^=0x1u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+12,R(0)); if(k) goto L8c0266b2; }
  {  goto L8c026816; }
L8c0266b2:;
  R(4)=R(9);
  R(5)=LD32(R(15)+4);
  R(4)+=R(10);
  { c->pr=0x8c0266bcu; R(4)+=0x1u; f_8c025f20(c); }
  R(2)=0x3e8u;
  R(0)=0u-R(0);
  R(0)+=R(2);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  { fp_mov(c,14,3); goto L8c026816; }
L8c0266cc:;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0266e2;
  R(2)=LD32(R(15)+4);
  R(0)=0x8c026728u;
  fp_ld(c,2,R(0));
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c02680a; }
L8c0266e2:;
  R(3)=0xa0u;
  c->t=R(11)>R(3);
  { uint32_t k=!c->t; ST32(R(15),R(11)); if(k) goto L8c0266f0; }
  R(1)=LD32(R(15));
  R(1)+=0xffffffe0u;
  ST32(R(15),R(1));
L8c0266f0:;
  R(3)=LD32(R(15));
  R(4)=R(13);
  R(2)=0x8c0120dau;
  R(3)+=0xffffffe0u;
  ST32(R(15),R(3));
  { c->pr=0x8c0266feu; R(4)+=R(3); f_8c0120da(c); }
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c02670a; }
  {  goto L8c026808; }
L8c02670a:;
  R(3)=0x320u;
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c026740;
  R(1)=0x8c0c8138u;
  { ST8(R(1),R(8)); goto L8c026754; }
L8c026740:;
  R(0)=0xff240f06u;
  c->t=R(14)==R(0);
  if(!c->t) goto L8c02674e;
  R(2)=0x8c0c8138u;
  R(1)=0x2u;
  { ST8(R(2),R(1)); goto L8c026754; }
L8c02674e:;
  R(1)=0x8c0c8138u;
  R(2)=0x1u;
  ST8(R(1),R(2));
L8c026754:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0267a0;
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(12)+20);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c026790;
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(3)=R(3)&0xFF;
  c->t=R(3)&1;R(3)>>=1;
  c->fpul=R(3);
  R(3)=0x8c0388c0u;
  fp_float(c,3);
  { c->pr=0x8c026778u; fp_mov(c,4,3); f_8c0388c0(c); }
  R(3)=0x8c0c467cu;
  R(0)=0x8c02686cu;
  R(2)=0x8c03aedau;
  fp_ld(c,4,R(3));
  fp_ld(c,3,R(0));
  { c->pr=0x8c026786u; fp_arith(c,2,4,3); f_8c03aeda(c); }
  R(0)=0x8c026878u;
  fp_mov(c,12,0);
  fp_ld(c,3,R(0));
  { fp_arith(c,2,12,3); goto L8c0267a0; }
L8c026790:;
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  R(3)=0x8c0388c0u;
  { c->pr=0x8c02679eu; fp_float(c,4); f_8c0388c0(c); }
  c->fr[12]=0x00000000u;
L8c0267a0:;
  R(3)=LD32(R(15)+8);
  R(0)=0x14u;
  fp_ld(c,13,R(0)+R(15));
  R(0)=R(11);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=(int32_t)R(0)==46;
  c->fpul=R(3);
  fp_float(c,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c0267ba; }
  { fp_arith(c,0,13,4); goto L8c0267d2; }
L8c0267ba:;
  c->t=(int32_t)R(0)==44;
  if(!c->t) goto L8c0267ca;
  R(2)=LD32(R(15)+8);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->fpul=R(2);
  fp_float(c,3);
  { fp_arith(c,0,13,3); goto L8c0267d2; }
L8c0267ca:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==39;
  if(!c->t) goto L8c0267d2;
  fp_arith(c,1,13,4);
L8c0267d2:;
  R(3)=LD32(R(15)+8);
  R(0)=0x8c02687cu;
  fp_ld(c,8,R(0));
  R(5)=R(14);
  c->fpul=R(3);
  R(3)=LD32(R(15)+28);
  R(4)=LD32(R(15));
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x8c07fc1au;
  fp_mov(c,4,14);
  fp_arith(c,0,3,12);
  fp_arith(c,0,3,13);
  fp_mov(c,7,3);
  fp_float(c,3);
  fp_arith(c,2,7,15);
  fp_arith(c,0,3,14);
  fp_mov(c,6,3);
  fp_arith(c,2,6,15);
  fp_mov(c,3,13);
  fp_arith(c,1,3,12);
  fp_mov(c,5,3);
  fp_arith(c,2,5,15);
  { uint32_t tg=R(3); c->pr=0x8c026804u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(2)=0x8c0c8138u;
  ST8(R(2),R(8));
L8c026808:;
  R(3)=LD32(R(15)+4);
L8c02680a:;
  c->fpul=R(3);
  R(3)=LD32(R(15)+16);
  fp_float(c,3);
  R(3)+=0x1u;
  ST32(R(15)+16,R(3));
  fp_arith(c,0,14,3);
L8c026816:;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  { c->pr=0x8c026820u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c02682a;
  {  goto L8c0264b8; }
L8c02682a:;
  R(15)+=0x24u;
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
void f_8c026400(SH4Ctx *c) {
  ST32(R(15)+R(0),R(0));
  fp_cmp(c,0,15,2);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(14)=0xff6ebeffu;
  R(0)=0x12u;
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c026440;
  R(3)=0x8c0c467cu;
  R(0)=0x8c026528u;
  R(2)=0x8c03aedau;
  fp_ld(c,4,R(3));
  fp_ld(c,3,R(0));
  { c->pr=0x8c026438u; fp_arith(c,2,4,3); f_8c03aeda(c); }
  R(0)=0x8c026534u;
  fp_mov(c,12,0);
  fp_ld(c,3,R(0));
  fp_arith(c,2,12,3);
L8c026440:;
  R(3)=0x8c0c52e4u;
  R(11)=R(12);
  R(0)=0x20u;
  R(6)=R(15);
  R(11)+=0x4u;
  fp_ld(c,14,R(0)+R(15));
  fp_ld(c,0,R(3));
  R(0)=0x4u;
  fp_ld(c,3,R(11));
  R(5)=R(15);
  R(4)=R(15);
  R(7)=R(15);
  fp_fmac(c,14,3);
  fp_ld(c,13,R(0)+R(11));
  R(0)=0x8u;
  R(4)+=0x4u;
  R(7)+=0x8u;
  R(6)+=0x1cu;
  R(5)+=0x18u;
  { c->pr=0x8c02646au; fp_ld(c,4,R(0)+R(11)); f_8c025fa0(c); }
  R(0)=0x8c02653cu;
  fp_mov(c,4,13);
  fp_ld(c,15,R(0));
  R(0)=0x8c026540u;
  fp_ld(c,0,R(0));
  R(0)=0x8c026544u;
  fp_arith(c,2,4,15);
  R(3)=0x8c0c4628u;
  fp_ld(c,5,R(0));
  R(0)=0x8c02654cu;
  fp_arith(c,0,4,0);
  fp_ld(c,0,R(3));
  R(3)=0x8c0c462cu;
  fp_fmac(c,5,4);
  fp_ld(c,4,R(0));
  R(0)=0x14u;
  fp_mov(c,0,4);
  fp_arith(c,2,5,4);
  fp_mov(c,2,5);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(3));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(2)=R(2)&0xFF;
  c->fpul=R(2);
  R(2)=0x8c0388c0u;
  { c->pr=0x8c0264a8u; fp_float(c,4); f_8c0388c0(c); }
  R(4)=(int32_t)(int8_t)LD8(R(10));
  { c->pr=0x8c0264aeu; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0264b8;
  {  goto L8c02682a; }
L8c0264b8:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c0264c2;
  {  goto L8c0266cc; }
L8c0264c2:;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  { c->pr=0x8c0264ccu; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0264d6;
  {  goto L8c02682a; }
L8c0264d6:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==76;
  if(!c->t) goto L8c026580;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0264ec;
  {  goto L8c02682a; }
L8c0264ec:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0264f6;
  {  goto L8c02682a; }
L8c0264f6:;
  R(3)=LD32(R(15)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c026560;
  R(4)=R(9);
  R(5)=LD32(R(15)+4);
  R(4)+=R(10);
  { c->pr=0x8c026506u; R(4)+=0x1u; f_8c025f20(c); }
  R(2)=0x3e8u;
  R(0)=0u-R(0);
  R(0)+=R(2);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  { fp_mov(c,14,3); goto L8c02656e; }
L8c026560:;
  R(0)=0x20u;
  R(3)=0x8c0c52e4u;
  fp_ld(c,14,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,0,R(3));
  fp_fmac(c,14,3);
L8c02656e:;
  R(3)=LD32(R(15)+24);
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(15)); goto L8c026816; }
L8c026580:;
  c->t=(int32_t)R(0)==79;
  if(c->t) goto L8c026588;
  {  goto L8c026680; }
L8c026588:;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(13)=R(8); if(k) goto L8c02659a; }
  {  goto L8c02682a; }
L8c02659a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0265c2;
L8c0265a0:;
  R(3)=R(13);
  R(13)<<=2;
  R(13)+=R(3);
  R(9)+=0x1u;
  R(4)+=0xffffffd0u;
  R(0)=R(9);
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(4);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0265bc;
  {  goto L8c02682a; }
L8c0265bc:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0265a0;
L8c0265c2:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c026626;
  R(0)=0x18u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c026630;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c02663c;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0265e6;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c026620;
  {  goto L8c026816; }
L8c0265e6:;
  R(14)=0xffffff78u;
  {  goto L8c026816; }
L8c026620:;
  R(14)=0xff240f06u;
  {  goto L8c026816; }
L8c026626:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c026630;
  R(3)=0x258u;
  c->t=R(13)==R(3);
  if(!c->t) goto L8c026636;
L8c026630:;
  R(14)=0xff6ebeffu;
  {  goto L8c026816; }
L8c026636:;
  R(2)=0xc8u;
  c->t=R(13)==R(2);
  if(!c->t) goto L8c026642;
L8c02663c:;
  R(14)=0xfffa4646u;
  {  goto L8c026816; }
L8c026642:;
  R(3)=0x190u;
  c->t=R(13)==R(3);
  if(c->t) goto L8c02664c;
  {  goto L8c026816; }
L8c02664c:;
  R(14)=0xffffff78u;
  {  goto L8c026816; }
L8c026680:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==67;
  if(c->t) goto L8c02668a;
  {  goto L8c026816; }
L8c02668a:;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02669a;
  {  goto L8c02682a; }
L8c02669a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0266a4;
  {  goto L8c02682a; }
L8c0266a4:;
  R(0)=LD32(R(15)+12);
  R(0)^=0x1u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+12,R(0)); if(k) goto L8c0266b2; }
  {  goto L8c026816; }
L8c0266b2:;
  R(4)=R(9);
  R(5)=LD32(R(15)+4);
  R(4)+=R(10);
  { c->pr=0x8c0266bcu; R(4)+=0x1u; f_8c025f20(c); }
  R(2)=0x3e8u;
  R(0)=0u-R(0);
  R(0)+=R(2);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  { fp_mov(c,14,3); goto L8c026816; }
L8c0266cc:;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0266e2;
  R(2)=LD32(R(15)+4);
  R(0)=0x8c026728u;
  fp_ld(c,2,R(0));
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c02680a; }
L8c0266e2:;
  R(3)=0xa0u;
  c->t=R(11)>R(3);
  { uint32_t k=!c->t; ST32(R(15),R(11)); if(k) goto L8c0266f0; }
  R(1)=LD32(R(15));
  R(1)+=0xffffffe0u;
  ST32(R(15),R(1));
L8c0266f0:;
  R(3)=LD32(R(15));
  R(4)=R(13);
  R(2)=0x8c0120dau;
  R(3)+=0xffffffe0u;
  ST32(R(15),R(3));
  { c->pr=0x8c0266feu; R(4)+=R(3); f_8c0120da(c); }
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c02670a; }
  {  goto L8c026808; }
L8c02670a:;
  R(3)=0x320u;
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c026740;
  R(1)=0x8c0c8138u;
  { ST8(R(1),R(8)); goto L8c026754; }
L8c026740:;
  R(0)=0xff240f06u;
  c->t=R(14)==R(0);
  if(!c->t) goto L8c02674e;
  R(2)=0x8c0c8138u;
  R(1)=0x2u;
  { ST8(R(2),R(1)); goto L8c026754; }
L8c02674e:;
  R(1)=0x8c0c8138u;
  R(2)=0x1u;
  ST8(R(1),R(2));
L8c026754:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0267a0;
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(12)+20);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c026790;
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(3)=R(3)&0xFF;
  c->t=R(3)&1;R(3)>>=1;
  c->fpul=R(3);
  R(3)=0x8c0388c0u;
  fp_float(c,3);
  { c->pr=0x8c026778u; fp_mov(c,4,3); f_8c0388c0(c); }
  R(3)=0x8c0c467cu;
  R(0)=0x8c02686cu;
  R(2)=0x8c03aedau;
  fp_ld(c,4,R(3));
  fp_ld(c,3,R(0));
  { c->pr=0x8c026786u; fp_arith(c,2,4,3); f_8c03aeda(c); }
  R(0)=0x8c026878u;
  fp_mov(c,12,0);
  fp_ld(c,3,R(0));
  { fp_arith(c,2,12,3); goto L8c0267a0; }
L8c026790:;
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  R(3)=0x8c0388c0u;
  { c->pr=0x8c02679eu; fp_float(c,4); f_8c0388c0(c); }
  c->fr[12]=0x00000000u;
L8c0267a0:;
  R(3)=LD32(R(15)+8);
  R(0)=0x14u;
  fp_ld(c,13,R(0)+R(15));
  R(0)=R(11);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=(int32_t)R(0)==46;
  c->fpul=R(3);
  fp_float(c,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c0267ba; }
  { fp_arith(c,0,13,4); goto L8c0267d2; }
L8c0267ba:;
  c->t=(int32_t)R(0)==44;
  if(!c->t) goto L8c0267ca;
  R(2)=LD32(R(15)+8);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->fpul=R(2);
  fp_float(c,3);
  { fp_arith(c,0,13,3); goto L8c0267d2; }
L8c0267ca:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==39;
  if(!c->t) goto L8c0267d2;
  fp_arith(c,1,13,4);
L8c0267d2:;
  R(3)=LD32(R(15)+8);
  R(0)=0x8c02687cu;
  fp_ld(c,8,R(0));
  R(5)=R(14);
  c->fpul=R(3);
  R(3)=LD32(R(15)+28);
  R(4)=LD32(R(15));
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x8c07fc1au;
  fp_mov(c,4,14);
  fp_arith(c,0,3,12);
  fp_arith(c,0,3,13);
  fp_mov(c,7,3);
  fp_float(c,3);
  fp_arith(c,2,7,15);
  fp_arith(c,0,3,14);
  fp_mov(c,6,3);
  fp_arith(c,2,6,15);
  fp_mov(c,3,13);
  fp_arith(c,1,3,12);
  fp_mov(c,5,3);
  fp_arith(c,2,5,15);
  { uint32_t tg=R(3); c->pr=0x8c026804u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(2)=0x8c0c8138u;
  ST8(R(2),R(8));
L8c026808:;
  R(3)=LD32(R(15)+4);
L8c02680a:;
  c->fpul=R(3);
  R(3)=LD32(R(15)+16);
  fp_float(c,3);
  R(3)+=0x1u;
  ST32(R(15)+16,R(3));
  fp_arith(c,0,14,3);
L8c026816:;
  R(9)+=0x1u;
  R(0)=R(9);
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  { c->pr=0x8c026820u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c02682a;
  {  goto L8c0264b8; }
L8c02682a:;
  R(15)+=0x24u;
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
void f_8c0268a0(SH4Ctx *c) {
  R(6)=0xcd78u;
  R(4)=0x8c131e94u;
  R(7)=0x41cu;
  R(6)+=R(4);
  R(5)=R(4);
  c->t=R(5)>=R(6);
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0268ec; }
L8c0268b0:;
  R(0)=0x400u;
  ST8(R(5),R(4));
  ST32(R(5)+R(0),R(4));
  R(0)+=0x10u;
  ST8(R(5)+R(0),R(4));
  R(0)+=0x1u;
  ST8(R(5)+R(0),R(4));
  R(0)+=0x1u;
  ST8(R(5)+R(0),R(4));
  R(0)+=0x1u;
  ST8(R(5)+R(0),R(4));
  R(0)+=0x1u;
  ST32(R(5)+R(0),R(4));
  R(0)+=0xffffffecu;
  R(5)+=R(7);
  ST8(R(5),R(4));
  ST32(R(5)+R(0),R(4));
  R(0)+=0x10u;
  ST8(R(5)+R(0),R(4));
  R(0)+=0x1u;
  ST8(R(5)+R(0),R(4));
  R(0)+=0x1u;
  ST8(R(5)+R(0),R(4));
  R(0)+=0x1u;
  ST8(R(5)+R(0),R(4));
  R(0)+=0x1u;
  ST32(R(5)+R(0),R(4));
  R(5)+=R(7);
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c0268b0;
L8c0268ec:;
  {  return; }
}
void f_8c0268f0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  ST32(R(15)+8,R(4));
  { c->pr=0x8c026902u; R(11)=R(5); f_8c026c60(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c02696c; }
  R(14)=0x41cu;
  R(12)=0x0u;
  R(3)=0x8c131e94u;
  R(7)=R(15);
  c->macl=R(13)*R(14);
  R(0)=0x400u;
  R(5)=R(15);
  R(2)=LD32(R(15)+8);
  R(6)=R(15);
  R(4)=R(15);
  R(5)+=0x4u;
  R(14)=c->macl;
  R(6)+=0xcu;
  R(7)+=0x10u;
  R(14)+=R(3);
  ST32(R(14)+R(0),R(2));
  R(0)+=0x10u;
  R(2)=0xffu;
  ST8(R(14),R(12));
  ST8(R(14)+R(0),R(2));
  R(0)+=0x1u;
  ST8(R(14)+R(0),R(12));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x40cu;
  fp_st(c,3,R(0)+R(14));
  { c->pr=0x8c026940u; fp_ld(c,4,R(0)+R(14)); f_8c025fa0(c); }
  R(3)=LD32(R(15));
  fp_ld(c,2,R(11));
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  R(0)=0x404u;
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,2,R(0)+R(11));
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  R(0)=0x408u;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)+=0xau;
  ST8(R(14)+R(0),R(12));
  R(0)+=0x1u;
  ST8(R(14)+R(0),R(12));
L8c02696c:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0269a0(SH4Ctx *c) {
  R(3)=0x41cu;
  R(0)=R(7);
  R(2)=0x8c131e94u;
  c->t=(int32_t)R(0)>0;
  c->macl=R(4)*R(3);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(4)=c->macl;
  R(4)+=R(2);
  R(14)=R(4);
  R(4)=0x0u;
  { uint32_t k=!c->t; R(4)+=R(14); if(k) goto L8c0269c6; }
L8c0269ba:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(0);
  ST8(R(4),R(3));
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0269ba; }
L8c0269c6:;
  R(3)=0x0u;
  ST8(R(14)+R(0),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0269ce(SH4Ctx *c) {
  R(2)=0x32u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0269da;
  {  goto L8c026bb2; }
L8c0269da:;
  R(1)=0x41cu;
  fp_ftrc(c,4);
  R(3)=0x8c131e94u;
  R(0)=R(5);
  c->macl=R(4)*R(1);
  c->t=(int32_t)R(0)==0;
  R(7)=0x1u;
  R(14)=c->fpul;
  fp_ftrc(c,4);
  R(4)=c->macl;
  R(4)+=R(3);
  { uint32_t k=c->t; R(6)=c->fpul; if(k) goto L8c026a18; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c026a40;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c026a52;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c026a68;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c026a70;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c026aa0;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c026ac2;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c026a14;
  {  goto L8c026b20; }
L8c026a14:;
  {  goto L8c026bb2; }
L8c026a18:;
  R(0)=0x410u;
  { ST8(R(4)+R(0),R(14)); goto L8c026bb2; }
L8c026a40:;
  R(14)=R(14)&0xFF;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c026a4a;
  { R(1)=0x1u; goto L8c026a4c; }
L8c026a4a:;
  R(1)=0x0u;
L8c026a4c:;
  R(0)=0x412u;
  {  goto L8c026aac; }
L8c026a52:;
  R(0)=0x413u;
  ST8(R(4)+R(0),R(7));
  R(0)+=0xfffffffdu;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c026a62;
  {  goto L8c026bb2; }
L8c026a62:;
  R(0)=0x410u;
  { ST8(R(4)+R(0),R(7)); goto L8c026bb2; }
L8c026a68:;
  R(0)=0x413u;
  R(2)=0x2u;
  { ST8(R(4)+R(0),R(2)); goto L8c026bb2; }
L8c026a70:;
  R(0)=0x40cu;
  { fp_st(c,4,R(0)+R(4)); goto L8c026bb2; }
L8c026aa0:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c026ab2;
  R(0)=0x413u;
  R(2)=0xfbu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(2);
L8c026aac:;
  ST8(R(4)+R(0),R(1));
  {  goto L8c026bb2; }
L8c026ab2:;
  R(0)=0x413u;
  R(2)=0x4u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)+=0x1u;
  { ST32(R(4)+R(0),R(6)); goto L8c026bb2; }
L8c026ac2:;
  c->fr[3]=0x3F800000u;
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c026ad6;
  R(0)=0x413u;
  R(2)=0x8u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  {  goto L8c026bb2; }
L8c026ad6:;
  R(0)=0x413u;
  R(2)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(2);
  { ST8(R(4)+R(0),R(1)); goto L8c026bb2; }
L8c026b20:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c026b36;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c026b4c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c026b5c;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c026ba0;
  {  goto L8c026bb2; }
L8c026b36:;
  R(0)=0x413u;
  R(2)=0xefu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)=0x0u;
  R(1)=0x418u;
  R(1)+=R(4);
  ST8(R(1),R(0));
  {  goto L8c026bb2; }
L8c026b4c:;
  R(0)=0x413u;
  R(2)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)+=0x5u;
  { ST8(R(4)+R(0),R(7)); goto L8c026bb2; }
L8c026b5c:;
  R(0)=0x413u;
  R(2)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)=0x2u;
  R(1)=0x418u;
  R(1)+=R(4);
  ST8(R(1),R(0));
  {  goto L8c026bb2; }
L8c026ba0:;
  R(0)=0x413u;
  R(2)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)=0x3u;
  R(1)=0x418u;
  R(1)+=R(4);
  ST8(R(1),R(0));
L8c026bb2:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c026a40(SH4Ctx *c) {
  R(14)=R(14)&0xFF;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c026a4a;
  { R(1)=0x1u; goto L8c026a4c; }
L8c026a4a:;
  R(1)=0x0u;
L8c026a4c:;
  R(0)=0x412u;
  {  goto L8c026aac; }
L8c026aac:;
  ST8(R(4)+R(0),R(1));
  {  goto L8c026bb2; }
L8c026bb2:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c026aa0(SH4Ctx *c) {
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c026ab2;
  R(0)=0x413u;
  R(2)=0xfbu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(2);
  ST8(R(4)+R(0),R(1));
  {  goto L8c026bb2; }
L8c026ab2:;
  R(0)=0x413u;
  R(2)=0x4u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)+=0x1u;
  { ST32(R(4)+R(0),R(6)); goto L8c026bb2; }
L8c026bb2:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c026b20(SH4Ctx *c) {
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c026b36;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c026b4c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c026b5c;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c026ba0;
  {  goto L8c026bb2; }
L8c026b36:;
  R(0)=0x413u;
  R(2)=0xefu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)=0x0u;
  R(1)=0x418u;
  R(1)+=R(4);
  ST8(R(1),R(0));
  {  goto L8c026bb2; }
L8c026b4c:;
  R(0)=0x413u;
  R(2)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)+=0x5u;
  { ST8(R(4)+R(0),R(7)); goto L8c026bb2; }
L8c026b5c:;
  R(0)=0x413u;
  R(2)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)=0x2u;
  R(1)=0x418u;
  R(1)+=R(4);
  ST8(R(1),R(0));
  {  goto L8c026bb2; }
L8c026ba0:;
  R(0)=0x413u;
  R(2)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)=0x3u;
  R(1)=0x418u;
  R(1)+=R(4);
  ST8(R(1),R(0));
L8c026bb2:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c026ba0(SH4Ctx *c) {
  R(0)=0x413u;
  R(2)=0x10u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)|=R(2);
  ST8(R(4)+R(0),R(1));
  R(0)=0x3u;
  R(1)=0x418u;
  R(1)+=R(4);
  ST8(R(1),R(0));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c026bb6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(7)=0x41cu;
  R(5)=0x0u;
  R(14)=0x8c131e94u;
  R(0)=R(7);
  R(0)+=0xffffffe4u;
  R(3)=R(14);
  ST32(R(15),R(3));
  R(3)=LD32(R(3)+R(0));
  c->t=R(3)==R(4);
  { uint32_t k=c->t; R(6)=0x32u; if(k) goto L8c026be6; }
L8c026bd2:;
  R(5)+=0x1u;
  c->macl=R(5)*R(7);
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  R(1)=c->macl;
  { uint32_t k=c->t; R(1)+=R(14); if(k) goto L8c026be6; }
  R(0)=0x400u;
  R(2)=LD32(R(1)+R(0));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c026bd2;
L8c026be6:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==50;
  if(!c->t) goto L8c026bf2;
  { c->pr=0x8c026bf0u;  f_8c026c60(c); }
  R(5)=R(0);
L8c026bf2:;
  R(0)=R(5);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c026bfc(SH4Ctx *c) {
  R(1)=0x41cu;
  R(5)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c131e94u;
  R(0)=R(1);
  R(0)+=0xffffffe4u;
  R(6)=R(13);
  R(3)=LD32(R(6)+R(0));
  c->t=R(3)==R(4);
  { uint32_t k=c->t; R(7)=0x32u; if(k) goto L8c026c26; }
L8c026c12:;
  R(5)+=0x1u;
  c->macl=R(5)*R(1);
  c->t=(int32_t)R(5)>=(int32_t)R(7);
  R(6)=c->macl;
  { uint32_t k=c->t; R(6)+=R(13); if(k) goto L8c026c30; }
  R(0)=0x400u;
  R(2)=LD32(R(6)+R(0));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c026c12;
L8c026c26:;
  c->t=(int32_t)R(5)>=(int32_t)R(7);
  if(c->t) goto L8c026c30;
  R(0)=0x400u;
  R(3)=0x0u;
  ST32(R(6)+R(0),R(3));
L8c026c30:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c026c60(SH4Ctx *c) {
  R(7)=0x41cu;
  R(5)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c131e94u;
  R(0)=R(7);
  R(0)+=0xffffffe4u;
  R(6)=R(13);
  R(3)=LD32(R(6)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(1)=0x32u; if(k) goto L8c026c8a; }
L8c026c76:;
  R(5)+=0x1u;
  c->macl=R(5)*R(7);
  c->t=(int32_t)R(5)>=(int32_t)R(1);
  R(6)=c->macl;
  { uint32_t k=c->t; R(6)+=R(13); if(k) goto L8c026c8a; }
  R(0)=0x400u;
  R(2)=LD32(R(6)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c026c76;
L8c026c8a:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==50;
  if(!c->t) goto L8c026c94;
  { R(5)=0xffffffffu; goto L8c026c98; }
L8c026c94:;
  R(0)=0x400u;
  ST32(R(6)+R(0),R(4));
L8c026c98:;
  R(0)=R(5);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c026c9e(SH4Ctx *c) {
  R(3)=0x32u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c026cb4;
  R(1)=0x41cu;
  R(2)=0x8c131e94u;
  c->macl=R(4)*R(1);
  R(4)=c->macl;
  R(4)+=R(2);
  R(3)=R(4);
  R(5)+=R(3);
  ST8(R(5),R(6));
L8c026cb4:;
  {  return; }
}
void f_8c026ce0(SH4Ctx *c) {
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
  R(15)+=0xffffffdcu;
  R(0)=0x8c026dd4u;
  R(9)=R(15);
  R(5)=0x8c131e94u;
  R(9)+=0x18u;
  R(3)=0xcd78u;
  R(2)=R(9);
  R(4)=R(5);
  R(13)=0x41cu;
  R(11)=0xffu;
  R(5)+=R(3);
  R(2)+=0x8u;
  R(12)=R(4);
  R(8)=R(4);
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(2));
  fp_ld(c,12,R(0));
  R(0)=0x8c026dd8u;
  fp_ld(c,13,R(0));
  R(0)=0x8c026ddcu;
  R(1)=LD32(R(15)+4);
  fp_ld(c,14,R(0));
  c->t=R(12)>=R(1);
  c->fr[15]=0x00000000u;
  { uint32_t k=!c->t; R(10)=0x8u; if(k) goto L8c026d32; }
  {  goto L8c026e80; }
L8c026d32:;
  R(0)=0x400u;
  R(14)=R(12);
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c026d40;
  {  goto L8c026e6c; }
L8c026d40:;
  R(3)=LD32(R(8)+R(0));
  R(2)=LD32(R(3)+44);
  c->t=(R(2)&R(10))==0;
  if(!c->t) goto L8c026d5a;
  R(0)=0x400u;
  R(1)=LD32(R(15));
  R(3)=LD32(R(1)+R(0));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x410u;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST8(R(14)+R(0),R(2));
L8c026d5a:;
  R(0)=0x410u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c026d66;
  {  goto L8c026e6c; }
L8c026d66:;
  R(2)=0x8c12473eu;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c026d72;
  {  goto L8c026e6c; }
L8c026d72:;
  R(0)=0x413u;
  R(1)=0x8c0c4684u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  fp_ld(c,4,R(1));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; fp_arith(c,2,4,13); if(k) goto L8c026e00; }
  R(0)=0x410u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,0,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>=(int32_t)R(11);
  if(!c->t) goto L8c026da2;
  R(0)=0x413u;
  R(4)=R(11);
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)&=R(3);
  ST8(R(14)+R(0),R(2));
L8c026da2:;
  R(0)=0x410u;
  { ST8(R(14)+R(0),R(4)); goto L8c026e2e; }
L8c026e00:;
  R(0)=0x413u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c026e2e;
  R(0)=0x410u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,1,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>0;
  if(c->t) goto L8c026e2a;
  R(0)=0x413u;
  R(4)=0x0u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)&=R(3);
  ST8(R(14)+R(0),R(2));
L8c026e2a:;
  R(0)=0x410u;
  ST8(R(14)+R(0),R(4));
L8c026e2e:;
  R(0)=0x413u;
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(10))==0;
  if(c->t) goto L8c026e68;
  R(6)=R(15);
  R(5)=R(9);
  R(6)+=0xcu;
  { c->pr=0x8c026e42u; R(4)=R(14); f_8c026ec0(c); }
  R(0)=0x410u;
  R(5)=R(15);
  R(2)=LD32(R(15)+8);
  R(5)+=0xcu;
  fp_mov(c,5,15);
  fp_st(c,14,R(2));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  R(3)=0x8c07ff20u;
  fp_float(c,3);
  fp_mov(c,4,3);
  { c->pr=0x8c026e68u; R(4)=R(9); f_8c07ff20(c); }
L8c026e68:;
  { c->pr=0x8c026e6cu; R(4)=R(14); f_8c027200(c); }
L8c026e6c:;
  R(3)=LD32(R(15));
  R(12)+=R(13);
  R(3)+=R(13);
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+4);
  c->t=R(12)>=R(2);
  { uint32_t k=c->t; R(8)+=R(13); if(k) goto L8c026e80; }
  {  goto L8c026d32; }
L8c026e80:;
  R(15)+=0x24u;
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
void f_8c026ec0(SH4Ctx *c) {
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
  R(15)+=0xffffffe8u;
  R(2)=0x8c0c52dcu;
  R(8)=R(4);
  R(4)=0x0u;
  R(11)=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(9)=R(4);
  R(12)=R(6);
  R(13)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; c->fr[13]=0x00000000u; if(k) goto L8c026f06; }
  R(3)=0x8c0c52e4u;
  R(0)=0x8c026fecu;
  fp_ld(c,4,R(0));
  R(0)=0x8c026ff4u;
  fp_ld(c,3,R(3));
  fp_mov(c,2,4);
  fp_arith(c,2,3,4);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0));
  fp_mov(c,13,2);
  fp_arith(c,2,13,3);
L8c026f06:;
  R(4)=0x404u;
  R(0)=0x4u;
  R(3)=0x8c0c4628u;
  R(2)=R(12);
  R(4)+=R(8);
  fp_mov(c,15,13);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x8c026ff8u;
  fp_ld(c,12,R(0));
  R(0)=0x8c026ffcu;
  fp_ld(c,0,R(0));
  R(0)=0x8c027000u;
  fp_arith(c,2,5,12);
  fp_ld(c,4,R(0));
  fp_ld(c,3,R(4));
  R(0)=0x8c027008u;
  R(2)+=0x4u;
  R(14)=R(8);
  fp_arith(c,0,15,3);
  fp_ld(c,3,R(0));
  fp_arith(c,0,5,0);
  fp_ld(c,0,R(3));
  R(3)=0x8c0c462cu;
  fp_ld(c,2,R(3));
  fp_fmac(c,4,5);
  fp_mov(c,0,3);
  fp_st(c,15,R(11));
  fp_st(c,15,R(12));
  ST32(R(15),R(2));
  fp_mov(c,14,4);
  fp_arith(c,2,14,3);
  fp_fmac(c,14,2);
  R(3)=R(11);
  R(7)=R(15);
  R(6)=R(15);
  R(5)=R(15);
  R(4)=R(15);
  R(0)=0x40cu;
  R(3)+=0x4u;
  R(4)+=0x4u;
  ST32(R(15)+12,R(3));
  R(5)+=0x8u;
  fp_st(c,14,R(3));
  fp_st(c,14,R(2));
  R(6)+=0x10u;
  R(7)+=0x14u;
  { c->pr=0x8c026f66u; fp_ld(c,4,R(0)+R(8)); f_8c025fa0(c); }
  R(2)=0x8c025ee6u;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  { c->pr=0x8c026f6eu; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  R(3)=(uint32_t)(int32_t)(int8_t)R(4);
  R(10)=0x3e8u;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c026f7c;
  {  goto L8c02716e; }
L8c026f7c:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c026f86;
  {  goto L8c02712c; }
L8c026f86:;
  R(13)+=0x1u;
  R(3)=0x8c025ee6u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { c->pr=0x8c026f92u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  R(2)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c026f9e;
  {  goto L8c0271a6; }
L8c026f9e:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==76;
  if(!c->t) goto L8c02704e;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c026fb2;
  {  goto L8c0271a6; }
L8c026fb2:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c026fbc;
  {  goto L8c0271a6; }
L8c026fbc:;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c027020;
  R(3)=0x8c025f20u;
  R(4)=R(13);
  R(5)=LD32(R(15)+4);
  R(4)+=R(14);
  { c->pr=0x8c026fccu; R(4)+=0x1u; f_8c025f20(c); }
  R(0)=0u-R(0);
  R(0)+=R(10);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  { fp_mov(c,15,3); goto L8c02702c; }
L8c027020:;
  R(0)=0x404u;
  R(2)=0x8c0c52e4u;
  fp_ld(c,3,R(0)+R(8));
  fp_ld(c,0,R(2));
  fp_mov(c,15,13);
  fp_fmac(c,15,3);
L8c02702c:;
  fp_ld(c,3,R(11));
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c027034;
  fp_st(c,15,R(11));
L8c027034:;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(15));
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,0,14,3);
  fp_ld(c,3,R(3));
  fp_cmp(c,1,14,3);
  if(c->t) goto L8c027048;
  {  goto L8c02714e; }
L8c027048:;
  R(2)=LD32(R(15));
  { fp_st(c,14,R(2)); goto L8c02714e; }
L8c02704e:;
  c->t=(int32_t)R(0)==79;
  if(!c->t) goto L8c0270c0;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c027060;
  {  goto L8c0271a6; }
L8c027060:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c02706a;
  {  goto L8c02714e; }
L8c02706a:;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c027078;
  {  goto L8c0271a6; }
L8c027078:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c02706a;
  {  goto L8c02714e; }
L8c0270c0:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==67;
  if(!c->t) goto L8c027108;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0271a6;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c0271a6;
  R(2)=0x1u;
  R(9)^=R(2);
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c02714e;
  R(3)=0x8c025f20u;
  R(4)=R(13);
  R(5)=LD32(R(15)+4);
  R(4)+=R(14);
  { c->pr=0x8c0270eau; R(4)+=0x1u; f_8c025f20(c); }
  R(0)=0u-R(0);
  fp_ld(c,2,R(11));
  R(0)+=R(10);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  fp_mov(c,15,3);
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c0270fe;
  fp_st(c,15,R(11));
L8c0270fe:;
  fp_ld(c,3,R(12));
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c027156;
  { fp_st(c,15,R(12)); goto L8c02714e; }
L8c027108:;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0271a6;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c02714e;
L8c027118:;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0271a6;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c027118;
  {  goto L8c02714e; }
L8c02712c:;
  R(3)=LD32(R(15)+4);
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==32;
  c->fpul=R(3);
  fp_float(c,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c02714c; }
  R(0)=0x8c0271e4u;
  fp_ld(c,3,R(0));
  fp_arith(c,2,4,3);
  fp_ftrc(c,4);
  R(3)=c->fpul;
  c->fpul=R(3);
  fp_float(c,2);
  { fp_arith(c,0,15,2); goto L8c02714e; }
L8c02714c:;
  fp_arith(c,0,15,4);
L8c02714e:;
  fp_ld(c,3,R(12));
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c027156;
  fp_st(c,15,R(12));
L8c027156:;
  R(13)+=0x1u;
  R(3)=0x8c025ee6u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { c->pr=0x8c027162u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  R(2)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02716e;
  {  goto L8c026f7c; }
L8c02716e:;
  R(0)=0x8c0271ecu;
  fp_ld(c,3,R(11));
  fp_ld(c,4,R(0));
  R(0)=0x8c0271f0u;
  fp_arith(c,0,3,4);
  fp_arith(c,2,3,12);
  fp_st(c,3,R(11));
  R(3)=LD32(R(15)+12);
  R(2)=R(3);
  fp_ld(c,3,R(2));
  fp_arith(c,0,3,4);
  fp_arith(c,2,3,12);
  fp_st(c,3,R(3));
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(0));
  fp_arith(c,0,2,3);
  fp_arith(c,2,2,12);
  fp_st(c,2,R(12));
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15));
  c->fpul=R(1);
  R(2)=R(3);
  fp_ld(c,1,R(2));
  fp_float(c,2);
  fp_arith(c,0,1,2);
  fp_arith(c,0,1,3);
  fp_arith(c,2,1,12);
  fp_st(c,1,R(3));
L8c0271a6:;
  R(15)+=0x18u;
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
void f_8c027200(SH4Ctx *c) {
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
  R(15)+=0xffffffdcu;
  R(3)=0x1u;
  R(2)=0x8c0c52dcu;
  c->fr[3]=0x00000000u;
  R(0)=0x20u;
  R(9)=0x0u;
  R(10)=R(4);
  R(12)=R(9);
  R(13)=R(9);
  c->fr[12]=0x00000000u;
  ST32(R(15)+16,R(9));
  ST32(R(15)+12,R(3));
  fp_st(c,3,R(0)+R(15));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(8)=R(12); if(k) goto L8c027252; }
  R(3)=0x8c0c52e4u;
  R(0)=0x8c02728cu;
  fp_ld(c,4,R(0));
  R(0)=0x8c027294u;
  fp_ld(c,3,R(3));
  fp_mov(c,2,4);
  fp_arith(c,2,3,4);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
L8c027252:;
  R(0)=0x413u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x10)==0;
  { uint32_t k=c->t; R(14)=R(10); if(k) goto L8c0272a0; }
  R(0)=0x418u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0272a0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c027274;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c02727a;
  {  goto L8c0272a2; }
L8c027274:;
  R(8)=0xfffa4646u;
  {  goto L8c0272a2; }
L8c02727a:;
  R(8)=0xffffff78u;
  {  goto L8c0272a2; }
L8c0272a0:;
  R(8)=0xff6ebeffu;
L8c0272a2:;
  R(0)=0x412u;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0272c0;
  R(3)=0x8c0c467cu;
  R(0)=0x8c0273acu;
  R(2)=0x8c03aedau;
  fp_ld(c,4,R(3));
  fp_ld(c,3,R(0));
  { c->pr=0x8c0272b8u; fp_arith(c,2,4,3); f_8c03aeda(c); }
  R(0)=0x8c0273b8u;
  fp_mov(c,12,0);
  fp_ld(c,3,R(0));
  fp_arith(c,2,12,3);
L8c0272c0:;
  R(11)=0x404u;
  R(0)=0x20u;
  R(3)=0x8c0c52e4u;
  R(5)=R(15);
  R(11)+=R(10);
  fp_ld(c,14,R(0)+R(15));
  fp_ld(c,0,R(3));
  R(0)=0x4u;
  fp_ld(c,3,R(11));
  R(4)=R(15);
  R(2)=0x8c025fa0u;
  R(6)=R(15);
  fp_fmac(c,14,3);
  R(7)=R(15);
  fp_ld(c,13,R(0)+R(11));
  R(0)=0x8u;
  R(6)+=0x1cu;
  R(4)+=0x4u;
  R(5)+=0x18u;
  R(7)+=0x8u;
  { c->pr=0x8c0272ecu; fp_ld(c,4,R(0)+R(11)); f_8c025fa0(c); }
  R(0)=0x8c0273c4u;
  fp_mov(c,5,13);
  fp_ld(c,15,R(0));
  R(0)=0x8c0273c8u;
  fp_ld(c,0,R(0));
  R(0)=0x8c0273ccu;
  fp_arith(c,2,5,15);
  R(3)=0x8c0c4628u;
  fp_ld(c,4,R(0));
  R(0)=0x8c0273d4u;
  fp_arith(c,0,5,0);
  fp_ld(c,0,R(3));
  R(3)=0x8c0c462cu;
  fp_fmac(c,4,5);
  fp_ld(c,5,R(0));
  R(0)=0x14u;
  fp_mov(c,0,5);
  fp_arith(c,2,4,5);
  fp_mov(c,2,4);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(3));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x410u;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(2)=R(2)&0xFF;
  c->fpul=R(2);
  R(2)=0x8c0388c0u;
  { c->pr=0x8c02732au; fp_float(c,4); f_8c0388c0(c); }
  R(3)=0x8c025ee6u;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  { c->pr=0x8c027332u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c02733c;
  {  goto L8c0276e2; }
L8c02733c:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c027346;
  {  goto L8c027560; }
L8c027346:;
  R(13)+=0x1u;
  R(3)=0x8c025ee6u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { c->pr=0x8c027352u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02735c;
  {  goto L8c0276e2; }
L8c02735c:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==76;
  if(!c->t) goto L8c027420;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c027372;
  {  goto L8c0276e2; }
L8c027372:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c02737c;
  {  goto L8c0276e2; }
L8c02737c:;
  R(3)=LD32(R(15)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c027400;
  R(3)=0x8c025f20u;
  R(4)=R(13);
  R(5)=LD32(R(15)+4);
  R(4)+=R(14);
  { c->pr=0x8c02738eu; R(4)+=0x1u; f_8c025f20(c); }
  R(2)=0x3e8u;
  R(0)=0u-R(0);
  R(0)+=R(2);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  { fp_mov(c,14,3); goto L8c02740e; }
L8c027400:;
  R(0)=0x20u;
  R(3)=0x8c0c52e4u;
  fp_ld(c,14,R(0)+R(15));
  R(0)=0x404u;
  fp_ld(c,0,R(3));
  fp_ld(c,3,R(0)+R(10));
  fp_fmac(c,14,3);
L8c02740e:;
  R(3)=LD32(R(15)+24);
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(15)); goto L8c0276cc; }
L8c027420:;
  c->t=(int32_t)R(0)==79;
  if(!c->t) goto L8c0274b0;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(12)=R(9); if(k) goto L8c027436; }
  {  goto L8c0276e2; }
L8c027436:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c02745e;
L8c02743c:;
  R(3)=R(12);
  R(12)<<=2;
  R(12)+=R(3);
  R(13)+=0x1u;
  R(4)+=0xffffffd0u;
  R(0)=R(13);
  c->t=R(12)>>31;R(12)<<=1;
  R(12)+=R(4);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c027458;
  {  goto L8c0276e2; }
L8c027458:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c02743c;
L8c02745e:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c027468;
  R(2)=0x258u;
  c->t=R(12)==R(2);
  if(!c->t) goto L8c02746e;
L8c027468:;
  R(8)=0xff6ebeffu;
  {  goto L8c0276cc; }
L8c02746e:;
  R(3)=0xc8u;
  c->t=R(12)==R(3);
  if(!c->t) goto L8c0274a0;
  R(8)=0xfffa4646u;
  {  goto L8c0276cc; }
L8c0274a0:;
  R(2)=0x190u;
  c->t=R(12)==R(2);
  if(c->t) goto L8c0274aa;
  {  goto L8c0276cc; }
L8c0274aa:;
  R(8)=0xffffff78u;
  {  goto L8c0276cc; }
L8c0274b0:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==67;
  if(!c->t) goto L8c0274fa;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0274c6;
  {  goto L8c0276e2; }
L8c0274c6:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0274d0;
  {  goto L8c0276e2; }
L8c0274d0:;
  R(0)=LD32(R(15)+16);
  R(0)^=0x1u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+16,R(0)); if(k) goto L8c0274de; }
  {  goto L8c0276cc; }
L8c0274de:;
  R(3)=0x8c025f20u;
  R(4)=R(13);
  R(5)=LD32(R(15)+4);
  R(4)+=R(14);
  { c->pr=0x8c0274eau; R(4)+=0x1u; f_8c025f20(c); }
  R(2)=0x3e8u;
  R(0)=0u-R(0);
  R(0)+=R(2);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->fpul=R(0);
  fp_float(c,3);
  { fp_mov(c,14,3); goto L8c0276cc; }
L8c0274fa:;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c02750a;
  {  goto L8c0276e2; }
L8c02750a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c027514;
  {  goto L8c0276cc; }
L8c027514:;
  R(13)+=0x1u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c027524;
  {  goto L8c0276e2; }
L8c027524:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c027514;
  {  goto L8c0276cc; }
L8c027560:;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c027576;
  R(3)=LD32(R(15)+4);
  R(0)=0x8c0275c4u;
  fp_ld(c,2,R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c0276c0; }
L8c027576:;
  R(3)=0xa0u;
  c->t=R(11)>R(3);
  { uint32_t k=!c->t; ST32(R(15),R(11)); if(k) goto L8c027584; }
  R(1)=LD32(R(15));
  R(1)+=0xffffffe0u;
  ST32(R(15),R(1));
L8c027584:;
  R(3)=LD32(R(15));
  R(4)=R(12);
  R(2)=0x8c0120dau;
  R(3)+=0xffffffe0u;
  ST32(R(15),R(3));
  { c->pr=0x8c027592u; R(4)+=R(3); f_8c0120da(c); }
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(0)); if(k) goto L8c02759e; }
  {  goto L8c0276be; }
L8c02759e:;
  R(3)=0x320u;
  c->t=R(12)>=R(3);
  if(!c->t) goto L8c0275aa;
  R(1)=0x8c0c8138u;
  { ST8(R(1),R(9)); goto L8c0275e6; }
L8c0275aa:;
  R(0)=0xff240f06u;
  c->t=R(8)==R(0);
  if(!c->t) goto L8c0275e0;
  R(2)=0x8c0c8138u;
  R(1)=0x2u;
  { ST8(R(2),R(1)); goto L8c0275e6; }
L8c0275e0:;
  R(1)=0x8c0c8138u;
  R(2)=0x1u;
  ST8(R(1),R(2));
L8c0275e6:;
  R(0)=0x413u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c027634;
  R(0)=0x414u;
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(10)+R(0));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c027624;
  R(0)=0x410u;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->t=R(3)&1;R(3)>>=1;
  c->fpul=R(3);
  R(3)=0x8c0388c0u;
  fp_float(c,3);
  { c->pr=0x8c02760cu; fp_mov(c,4,3); f_8c0388c0(c); }
  R(3)=0x8c0c467cu;
  R(0)=0x8c027670u;
  R(2)=0x8c03aedau;
  fp_ld(c,4,R(3));
  fp_ld(c,3,R(0));
  { c->pr=0x8c02761au; fp_arith(c,2,4,3); f_8c03aeda(c); }
  R(0)=0x8c02767cu;
  fp_mov(c,12,0);
  fp_ld(c,3,R(0));
  { fp_arith(c,2,12,3); goto L8c027634; }
L8c027624:;
  R(0)=0x410u;
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  R(3)=0x8c0388c0u;
  { c->pr=0x8c027632u; fp_float(c,4); f_8c0388c0(c); }
  c->fr[12]=0x00000000u;
L8c027634:;
  R(3)=LD32(R(15)+8);
  R(0)=0x14u;
  fp_ld(c,13,R(0)+R(15));
  R(0)=R(11);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=(int32_t)R(0)==46;
  c->fpul=R(3);
  fp_float(c,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c02764e; }
  { fp_arith(c,0,13,4); goto L8c027688; }
L8c02764e:;
  c->t=(int32_t)R(0)==44;
  if(!c->t) goto L8c027680;
  R(2)=LD32(R(15)+8);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->fpul=R(2);
  fp_float(c,3);
  { fp_arith(c,0,13,3); goto L8c027688; }
L8c027680:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==39;
  if(!c->t) goto L8c027688;
  fp_arith(c,1,13,4);
L8c027688:;
  R(3)=LD32(R(15)+8);
  R(0)=0x8c0277e0u;
  fp_ld(c,8,R(0));
  R(5)=R(8);
  c->fpul=R(3);
  R(3)=LD32(R(15)+28);
  R(4)=LD32(R(15));
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x8c07fc1au;
  fp_mov(c,4,14);
  fp_arith(c,0,3,12);
  fp_arith(c,0,3,13);
  fp_mov(c,7,3);
  fp_float(c,3);
  fp_arith(c,2,7,15);
  fp_arith(c,0,3,14);
  fp_mov(c,6,3);
  fp_arith(c,2,6,15);
  fp_mov(c,3,13);
  fp_arith(c,1,3,12);
  fp_mov(c,5,3);
  fp_arith(c,2,5,15);
  { uint32_t tg=R(3); c->pr=0x8c0276bau; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(2)=0x8c0c8138u;
  ST8(R(2),R(9));
L8c0276be:;
  R(3)=LD32(R(15)+4);
L8c0276c0:;
  c->fpul=R(3);
  R(3)=LD32(R(15)+12);
  fp_float(c,3);
  R(3)+=0x1u;
  ST32(R(15)+12,R(3));
  fp_arith(c,0,14,3);
L8c0276cc:;
  R(13)+=0x1u;
  R(3)=0x8c025ee6u;
  R(0)=R(13);
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { c->pr=0x8c0276d8u; R(4)=R(4)&0xFF; f_8c025ee6(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0276e2;
  {  goto L8c02733c; }
L8c0276e2:;
  R(15)+=0x24u;
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
void f_8c0276fe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(14)=0x0u;
  R(11)=0x8c0bdbf0u;
  R(6)=R(14);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=0x55u; if(k) goto L8c02779a; }
  {  goto L8c027722; }
L8c027720:;
  R(6)+=0x1u;
L8c027722:;
  R(0)=R(6);
  R(7)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(7)=R(7)&0xFF;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c027732;
  R(0)=R(7);
  c->t=(int32_t)R(0)==86;
  if(!c->t) goto L8c027720;
L8c027732:;
  R(7)=R(6);
  R(7)+=R(5);
  R(2)=(int32_t)(int8_t)LD8(R(7));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c027784;
  R(0)=(int32_t)(int8_t)LD8(R(7)+1);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==77;
  if(!c->t) goto L8c027784;
  R(0)=(int32_t)(int8_t)LD8(R(7)+2);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==83;
  if(!c->t) goto L8c027784;
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02775e;
  R(3)=R(6);
  R(0)=R(12);
  R(3)+=R(5);
  ST8(R(3)+2,R(0));
  {  goto L8c027784; }
L8c02775e:;
  R(7)=R(6);
  R(7)+=0x2u;
  R(2)=R(7);
  R(2)+=R(5);
  R(0)=(int32_t)(int8_t)LD8(R(2)+1);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c027780;
L8c02776c:;
  R(13)=R(7);
  R(13)+=R(5);
  R(7)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  R(3)=R(7);
  R(3)+=R(5);
  ST8(R(13),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(3)+1);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02776c;
L8c027780:;
  R(0)=R(7);
  ST8(R(5)+R(0),R(14));
L8c027784:;
  R(0)=R(6);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c027790;
  R(6)+=0x1u;
L8c027790:;
  R(0)=R(6);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c027722;
L8c02779a:;
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0277a4;
  {  goto L8c0278b2; }
L8c0277a4:;
  R(9)=0x8c0c46f0u;
  R(11)=0x1u;
  R(13)=0xffffffffu;
L8c0277aa:;
  R(13)+=0x1u;
  { R(6)=R(13); goto L8c0277b2; }
L8c0277b0:;
  R(6)+=0x1u;
L8c0277b2:;
  R(0)=R(6);
  R(7)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(3)=R(7)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0277c8;
  R(1)=0x8c0c46f0u;
  R(3)=R(7)&0xFF;
  R(2)=LD32(R(1));
  R(2)=(int32_t)(int8_t)LD8(R(2));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0277b0;
L8c0277c8:;
  R(0)=R(6);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c0277d8; }
  {  goto L8c0278a4; }
L8c0277d8:;
  R(10)=R(6);
  R(6)+=0x1u;
  { R(7)=R(11); goto L8c027804; }
L8c027800:;
  R(7)+=0x1u;
  R(6)+=0x1u;
L8c027804:;
  R(0)=R(5);
  R(12)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(12)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c027820;
  R(3)=0x8c0c46f0u;
  R(0)=LD32(R(3));
  R(2)=(int32_t)(int8_t)LD8(R(7)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c027820;
  R(1)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(2)=R(12)&0xFF;
  c->t=R(2)==R(1);
  if(c->t) goto L8c027800;
L8c027820:;
  R(0)=LD32(R(9));
  R(3)=(int32_t)(int8_t)LD8(R(7)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0278a4;
  R(3)=0x8c0b91acu;
  R(7)=R(10);
  R(7)+=R(5);
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)=R(7);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=(int32_t)(int8_t)LD8(R(7));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(6)=R(10); if(k) goto L8c02787e; }
L8c027872:;
  R(6)+=0x1u;
  R(0)=R(6);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c027872;
L8c02787e:;
  R(7)=R(6);
  R(7)+=0x5u;
  R(0)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0278a0;
L8c02788c:;
  R(0)=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(7)+=0x1u;
  ST8(R(6)+R(0),R(3));
  R(0)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c02788c; }
L8c0278a0:;
  R(0)=R(6);
  ST8(R(5)+R(0),R(14));
L8c0278a4:;
  R(0)=R(13);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0278b2;
  {  goto L8c0277aa; }
L8c0278b2:;
  fp_ftrc(c,4);
  R(0)=0x10u;
  ST32(R(15),R(5));
  R(3)=c->fpul;
  ST8(R(15)+R(0),R(3));
  R(0)=0x11u;
  ST8(R(15)+R(0),R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(4));
  R(3)=0x8c026320u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x12u;
  ST8(R(15)+R(0),R(14));
  R(0)=0x13u;
  ST8(R(15)+R(0),R(14));
  { uint32_t tg=R(3); c->pr=0x8c0278e4u; R(4)=R(15); sh4_call(c,tg); }
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0278f6(SH4Ctx *c) {
  R(3)=0x8c0c4bf8u;
  R(4)=0x0u;
  R(2)=0x8c0c4bf4u;
  ST32(R(3),R(4));
  { ST32(R(2),R(4)); return; }
}
void f_8c027902(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=R(7);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0c4bf8u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(14));
  c->t=R(3)>=R(13);
  if(c->t) goto L8c027934;
  R(0)=0x8c140830u;
  R(1)=LD32(R(3)+R(0));
  c->t=R(1)==R(4);
  if(c->t) goto L8c027934;
L8c027922:;
  R(7)+=0x1u;
  c->t=R(7)>=R(13);
  if(c->t) goto L8c027934;
  R(2)=R(7);
  R(2)<<=2;
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c027922;
L8c027934:;
  R(3)=0xau;
  R(12)=0x8c140830u;
  c->t=(int32_t)R(7)>=(int32_t)R(3);
  if(c->t) goto L8c02794e;
  R(13)=R(7);
  R(13)<<=2;
  R(13)<<=2;
  R(0)=0xcu;
  R(13)+=R(12);
  ST32(R(13),R(4));
  ST32(R(13)+4,R(5));
  ST32(R(13)+8,R(6));
  fp_st(c,4,R(0)+R(13));
L8c02794e:;
  R(3)=LD32(R(14));
  c->t=R(7)==R(3);
  { uint32_t k=!c->t; R(3)=R(7); if(k) goto L8c02795c; }
  R(1)=LD32(R(14));
  R(1)+=0x1u;
  ST32(R(14),R(1));
L8c02795c:;
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(12);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c027996;
  R(3)=LD32(R(14));
  R(13)=R(7);
  R(10)=0x8c0685b4u;
  R(3)+=0xffffffffu;
  c->t=R(13)>=R(3);
  if(c->t) goto L8c027990;
L8c027974:;
  R(11)=R(13);
  R(11)<<=2;
  R(11)<<=2;
  R(11)+=R(12);
  R(5)=R(11);
  R(5)+=0x10u;
  R(6)=0x10u;
  { uint32_t tg=R(10); c->pr=0x8c027986u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)+=0x1u;
  R(3)+=0xffffffffu;
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c027974;
L8c027990:;
  R(3)=LD32(R(14));
  R(3)+=0xffffffffu;
  ST32(R(14),R(3));
L8c027996:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0279a4(SH4Ctx *c) {
  R(0)=0x8c0279dcu;
  R(3)=0x8c0c4648u;
  fp_ld(c,4,R(0));
  R(6)=0x2u;
  { R(5)=LD32(R(3)); { f_8c027902(c); return; } }
}
void f_8c027a00(SH4Ctx *c) {
  R(3)=0x8c0c4bf8u;
  R(5)=0x0u;
  R(2)=R(5);
  R(6)=LD32(R(3));
  c->t=R(2)>=R(6);
  if(c->t) goto L8c027a28;
  R(0)=0x8c140830u;
  R(0)=LD32(R(2)+R(0));
  c->t=R(0)==R(4);
  if(c->t) goto L8c027a28;
L8c027a14:;
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(c->t) goto L8c027a36;
  R(2)=R(5);
  R(0)=0x8c140830u;
  R(2)<<=2;
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c027a14;
L8c027a28:;
  c->t=R(5)>=R(6);
  if(c->t) goto L8c027a36;
  R(0)=0x8c140830u;
  R(5)<<=2;
  R(2)=0xffffffffu;
  R(5)<<=2;
  ST32(R(5)+R(0),R(2));
L8c027a36:;
  {  return; }
}
void f_8c027a3a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(4)=R(6);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(14));
  R(13)=0x8c0bdbf0u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=0x55u; if(k) goto L8c027aca; }
  {  goto L8c027a5c; }
L8c027a5a:;
  R(4)+=0x1u;
L8c027a5c:;
  R(0)=R(4);
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c027a6a;
  R(0)=R(5);
  c->t=(int32_t)R(0)==86;
  if(!c->t) goto L8c027a5a;
L8c027a6a:;
  R(5)=R(4);
  R(5)+=R(14);
  R(2)=(int32_t)(int8_t)LD8(R(5));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c027ab8;
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  c->t=(int32_t)R(0)==77;
  if(!c->t) goto L8c027ab8;
  R(0)=(int32_t)(int8_t)LD8(R(5)+2);
  c->t=(int32_t)R(0)==83;
  if(!c->t) goto L8c027ab8;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c027a92;
  R(3)=R(4);
  R(0)=R(7);
  R(3)+=R(14);
  ST8(R(3)+2,R(0));
  {  goto L8c027ab8; }
L8c027a92:;
  R(5)=R(4);
  R(5)+=0x2u;
  R(2)=R(5);
  R(2)+=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(2)+1);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c027ab4;
L8c027aa0:;
  R(12)=R(5);
  R(12)+=R(14);
  R(5)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  R(3)=R(5);
  R(3)+=R(14);
  ST8(R(12),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(3)+1);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027aa0;
L8c027ab4:;
  R(0)=R(5);
  ST8(R(14)+R(0),R(6));
L8c027ab8:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c027ac2;
  R(4)+=0x1u;
L8c027ac2:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c027a5c;
L8c027aca:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c027ad4;
  {  { f_8c027be8(c); return; } }
L8c027ad4:;
  R(11)=0x8c0c46f0u;
  R(13)=0x1u;
  R(7)=0xffffffffu;
  { f_8c027ada(c); return; }
}
void f_8c027ada(SH4Ctx *c) {
L8c027ada:;
  R(7)+=0x1u;
  { R(4)=R(7); goto L8c027ae2; }
L8c027ae0:;
  R(4)+=0x1u;
L8c027ae2:;
  R(0)=R(4);
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c027af6;
  R(1)=0x8c0c46f0u;
  R(3)=(uint32_t)(int32_t)(int8_t)R(5);
  R(2)=LD32(R(1));
  R(2)=(int32_t)(int8_t)LD8(R(2));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c027ae0;
L8c027af6:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=R(4); if(k) goto L8c027bdc; }
  R(10)=R(4);
  R(4)+=0x1u;
  { R(5)=R(13); goto L8c027b44; }
L8c027b40:;
  R(5)+=0x1u;
  R(4)+=0x1u;
L8c027b44:;
  R(0)=R(14);
  R(12)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c027b5e;
  R(3)=0x8c0c46f0u;
  R(0)=LD32(R(3));
  R(2)=(int32_t)(int8_t)LD8(R(5)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c027b5e;
  R(1)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(2)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=R(2)==R(1);
  if(c->t) goto L8c027b40;
L8c027b5e:;
  R(0)=LD32(R(11));
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c027bdc;
  R(3)=0x8c0b91acu;
  R(5)=R(10);
  R(5)+=R(14);
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)=R(5);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=(int32_t)(int8_t)LD8(R(5));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(4)=R(10); if(k) goto L8c027bba; }
L8c027bb0:;
  R(4)+=0x1u;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c027bb0;
L8c027bba:;
  R(5)=R(4);
  R(5)+=0x5u;
  R(0)=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c027bd8;
L8c027bc6:;
  R(0)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(5)+=0x1u;
  ST8(R(4)+R(0),R(3));
  R(0)=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c027bc6; }
L8c027bd8:;
  R(0)=R(4);
  ST8(R(14)+R(0),R(6));
L8c027bdc:;
  R(0)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) { f_8c027be8(c); return; }
  {  goto L8c027ada; }
}
void f_8c027b40(SH4Ctx *c) {
L8c027b40:;
  R(5)+=0x1u;
  R(4)+=0x1u;
  R(0)=R(14);
  R(12)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c027b5e;
  R(3)=0x8c0c46f0u;
  R(0)=LD32(R(3));
  R(2)=(int32_t)(int8_t)LD8(R(5)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c027b5e;
  R(1)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(2)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=R(2)==R(1);
  if(c->t) goto L8c027b40;
L8c027b5e:;
  R(0)=LD32(R(11));
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c027bdc;
  R(3)=0x8c0b91acu;
  R(5)=R(10);
  R(5)+=R(14);
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)=R(5);
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)+=0x1u;
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  R(2)=(int32_t)(int8_t)LD8(R(5));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(4)=R(10); if(k) goto L8c027bba; }
L8c027bb0:;
  R(4)+=0x1u;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c027bb0;
L8c027bba:;
  R(5)=R(4);
  R(5)+=0x5u;
  R(0)=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c027bd8;
L8c027bc6:;
  R(0)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(5)+R(0));
  R(5)+=0x1u;
  ST8(R(4)+R(0),R(3));
  R(0)=R(5);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c027bc6; }
L8c027bd8:;
  R(0)=R(4);
  ST8(R(14)+R(0),R(6));
L8c027bdc:;
  R(0)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) { f_8c027be8(c); return; }
  {  { f_8c027ada(c); return; } }
}
void f_8c027be8(SH4Ctx *c) {
  R(3)=0x8c0c42a4u;
  R(4)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c027cc0;
  R(1)=0x8c0bdbf4u;
  R(0)=LD32(R(1));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c027cc0;
  R(3)=0x8c09c524u;
  R(5)=0x8c0b91b8u;
  { c->pr=0x8c027c00u; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027c0a;
  R(1)=0x8c0c4c2au;
  {  goto L8c027c3c; }
L8c027c0a:;
  R(3)=0x8c09c524u;
  R(5)=0x8c0b9260u;
  { c->pr=0x8c027c12u; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027c1c;
  R(1)=0x8c0c4cb9u;
  {  goto L8c027c3c; }
L8c027c1c:;
  R(3)=0x8c09c524u;
  R(5)=0x8c0b92acu;
  { c->pr=0x8c027c24u; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027c2e;
  R(1)=0x8c0c4cf8u;
  {  goto L8c027c3c; }
L8c027c2e:;
  R(3)=0x8c09c524u;
  R(5)=0x8c0b94f0u;
  { c->pr=0x8c027c36u; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027c46;
  R(1)=0x8c0c4f04u;
L8c027c3c:;
  R(3)=0x8c09c4d4u;
  { c->pr=0x8c027c42u; R(0)=R(14); f_8c09c4d4(c); }
  {  goto L8c027d30; }
L8c027c46:;
  R(3)=0x8c09c524u;
  R(5)=0x8c0b9624u;
  { c->pr=0x8c027c4eu; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c027c56;
  {  goto L8c027d30; }
L8c027c56:;
  R(3)=0x8c09c4d4u;
  R(1)=0x8c0c502cu;
  { c->pr=0x8c027c5eu; R(0)=R(14); f_8c09c4d4(c); }
  {  goto L8c027d30; }
L8c027cc0:;
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c027d30;
  R(2)=0x8c0bdbf4u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c027d30;
  R(2)=0x8c09c524u;
  R(5)=0x8c0c4c2au;
  { c->pr=0x8c027cd6u; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027ce0;
  R(1)=0x8c0b91b8u;
  {  goto L8c027d12; }
L8c027ce0:;
  R(2)=0x8c09c524u;
  R(5)=0x8c0c4cb9u;
  { c->pr=0x8c027ce8u; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027cf2;
  R(1)=0x8c0b9260u;
  {  goto L8c027d12; }
L8c027cf2:;
  R(2)=0x8c09c524u;
  R(5)=0x8c0c4cf8u;
  { c->pr=0x8c027cfau; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027d04;
  R(1)=0x8c0b92acu;
  {  goto L8c027d12; }
L8c027d04:;
  R(2)=0x8c09c524u;
  R(5)=0x8c0c4f04u;
  { c->pr=0x8c027d0cu; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027d1c;
  R(1)=0x8c0b94f0u;
L8c027d12:;
  R(2)=0x8c09c4d4u;
  { c->pr=0x8c027d18u; R(0)=R(14); f_8c09c4d4(c); }
  {  goto L8c027d30; }
L8c027d1c:;
  R(2)=0x8c09c524u;
  R(5)=0x8c0c502cu;
  { c->pr=0x8c027d24u; R(4)=R(14); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c027d30;
  R(2)=0x8c09c4d4u;
  R(1)=0x8c0b9624u;
  { c->pr=0x8c027d30u; R(0)=R(14); f_8c09c4d4(c); }
L8c027d30:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c027d80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c4648u;
  R(12)=0x0u;
  R(13)=R(12);
  R(3)=LD32(R(2));
  R(1)=R(3);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c027e3a; }
  R(11)=0x1u;
  R(9)=0x8c0c4c00u;
  c->t=(R(11)&R(11))==0;
  R(10)=R(12);
  { uint32_t k=c->t; R(14)=0xeu; if(k) goto L8c027e0c; }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c027e0c;
L8c027dae:;
  c->macl=R(10)*R(14);
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(6)=R(5);
  c->t=(R(3)&R(3))==0;
  R(0)=c->macl;
  { uint32_t k=c->t; R(0)+=R(9); if(k) goto L8c027dd4; }
  R(3)=(int32_t)(int8_t)LD8(R(0));
  R(1)=(int32_t)(int8_t)LD8(R(6));
  c->t=R(1)==R(3);
  if(c->t) goto L8c027dd4;
L8c027dc4:;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c027dd4; }
  R(3)=(int32_t)(int8_t)LD8(R(0));
  R(1)=(int32_t)(int8_t)LD8(R(6));
  c->t=R(1)==R(3);
  if(!c->t) goto L8c027dc4;
L8c027dd4:;
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c027dfe;
  c->macl=R(10)*R(14);
  c->t=(R(11)&R(11))==0;
  R(0)=R(12);
  R(13)=R(11);
  R(1)=c->macl;
  { uint32_t k=c->t; R(1)+=R(9); if(k) goto L8c027dfe; }
L8c027de8:;
  R(2)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=R(3)==R(2);
  { uint32_t k=c->t; R(0)+=0x1u; if(k) goto L8c027df4; }
  R(13)=R(12);
L8c027df4:;
  c->t=(int32_t)R(0)>=(int32_t)R(14);
  if(c->t) goto L8c027dfe;
  R(3)=R(13)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c027de8;
L8c027dfe:;
  R(2)=0x3u;
  R(10)+=0x1u;
  c->t=(int32_t)R(10)>=(int32_t)R(2);
  if(c->t) goto L8c027e0c;
  R(1)=R(13)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c027dae;
L8c027e0c:;
  R(13)=R(13)&0xFF;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c027e22;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c027a00(c); return; } }
L8c027e22:;
  R(0)=0x8c027ec8u;
  R(5)=LD32(R(15));
  fp_ld(c,4,R(0));
  R(6)=0x2u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c027902(c); return; } }
L8c027e3a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c027e4a(SH4Ctx *c) {
  R(3)=0x8c0c4bf8u;
  R(5)=0x0u;
  R(2)=R(5);
  R(6)=LD32(R(3));
  c->t=R(2)>=R(6);
  if(c->t) goto L8c027e72;
  R(0)=0x8c140830u;
  R(0)=LD32(R(2)+R(0));
  c->t=R(0)==R(4);
  if(c->t) goto L8c027e72;
L8c027e5e:;
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(c->t) goto L8c027e9c;
  R(2)=R(5);
  R(0)=0x8c140830u;
  R(2)<<=2;
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c027e5e;
L8c027e72:;
  c->t=R(5)>=R(6);
  if(c->t) goto L8c027e9c;
  R(6)=R(5);
  R(3)=0x8c140830u;
  R(6)<<=2;
  R(1)=0x8c0c464cu;
  R(6)<<=2;
  R(6)+=R(3);
  R(3)=0x8c0c4bfcu;
  R(2)=LD32(R(6)+4);
  R(0)=0xcu;
  ST32(R(1),R(2));
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x8c14082cu;
  R(2)=0x8c130c10u;
  fp_st(c,3,R(2));
  ST32(R(3),R(4));
  R(1)=LD32(R(6)+8);
  ST32(R(0),R(1));
  { R(0)=0x1u; return; }
L8c027e9c:;
  R(0)=0x0u;
  {  return; }
}
void f_8c027f00(SH4Ctx *c) {
  R(4)=0x8c0c4bf4u;
  R(3)=0xc8u;
  R(6)=LD32(R(4));
  c->t=R(6)>=R(3);
  if(c->t) goto L8c027fbc;
  R(3)=R(6);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(5)=0x8c13ec0cu;
  R(6)+=R(3);
  R(3)=0x8c0c4bfcu;
  R(6)<<=2;
  R(2)=LD32(R(3));
  R(6)+=R(5);
  R(0)=0x4u;
  ST32(R(6),R(2));
  R(1)=LD32(R(4));
  R(2)=R(1);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(2);
  R(1)<<=2;
  R(1)+=R(5);
  fp_st(c,4,R(0)+R(1));
  R(0)=0xcu;
  R(2)=LD32(R(4));
  R(1)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(2)<<=2;
  R(2)+=R(5);
  fp_st(c,6,R(0)+R(2));
  R(2)=LD32(R(4));
  R(1)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(2)<<=2;
  R(0)=0x8u;
  R(2)+=R(5);
  fp_st(c,5,R(0)+R(2));
  R(0)=0x10u;
  R(2)=LD32(R(4));
  R(1)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(2)<<=2;
  R(2)+=R(5);
  fp_st(c,7,R(0)+R(2));
  R(0)=0x14u;
  R(2)=LD32(R(4));
  R(1)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(2)<<=2;
  R(2)+=R(5);
  fp_st(c,8,R(0)+R(2));
  R(2)=LD32(R(4));
  R(1)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(1)=0x8c130c10u;
  R(2)<<=2;
  fp_ld(c,3,R(1));
  R(2)+=R(5);
  R(0)=0x18u;
  R(3)=0x8c0c464cu;
  fp_st(c,3,R(0)+R(2));
  R(2)=LD32(R(4));
  R(1)=0x8c14082cu;
  R(0)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(0);
  R(0)=LD32(R(3));
  R(2)<<=2;
  R(2)+=R(5);
  ST32(R(2)+32,R(0));
  R(2)=LD32(R(4));
  R(0)=R(2);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(0);
  R(0)=LD32(R(1));
  R(2)<<=2;
  R(2)+=R(5);
  ST32(R(2)+28,R(0));
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  ST32(R(4),R(2));
L8c027fbc:;
  {  return; }
}
void f_8c027fc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(2)=0x8c0c464cu;
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  R(11)=0x8c0c4bf4u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c028020; }
  { ST32(R(11),R(4)); goto L8c0281ec; }
L8c028020:;
  R(0)=0x8c0280a8u;
  R(3)=LD32(R(11));
  fp_ld(c,12,R(0));
  R(0)=0x8c0280b4u;
  R(12)=0x8c13ec0cu;
  R(2)=0x0u;
  R(10)=0x1bfcu;
  R(13)=R(4);
  fp_ld(c,14,R(0));
  c->t=R(2)>=R(3);
  R(8)=0x8c0388c0u;
  R(0)=0x8c0280b8u;
  R(9)=0x8c0685b4u;
  R(10)+=R(12);
  { uint32_t k=!c->t; fp_ld(c,15,R(0)); if(k) goto L8c028044; }
  {  goto L8c0281ec; }
L8c028044:;
  R(0)=R(13);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(13);
  R(0)+=R(3);
  R(0)<<=2;
  R(0)=LD32(R(12)+R(0));
  R(0)=LD32(R(0)+44);
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c0280e0;
  R(14)=R(13);
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(3)=R(13);
  R(14)+=R(3);
  R(14)<<=2;
  R(0)=0x8c0280bcu;
  R(14)+=R(12);
  fp_ld(c,3,R(0));
  R(2)=LD32(R(14));
  R(0)=0x38u;
  fp_ld(c,13,R(0)+R(2));
  R(0)=0x18u;
  fp_ld(c,4,R(0)+R(14));
  fp_arith(c,3,13,3);
  { uint32_t tg=R(8); c->pr=0x8c02807au; fp_arith(c,2,4,13); sh4_call(c,tg); }
  R(0)=0x8c0280c0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,13,3);
  if(c->t) goto L8c0280f4;
  R(2)=R(13);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(13);
  R(2)+=R(3);
  c->fr[2]=0x00000000u;
  R(2)<<=2;
  R(0)=0x18u;
  R(2)+=R(12);
  { fp_st(c,2,R(0)+R(2)); goto L8c0280f4; }
L8c0280e0:;
  R(2)=R(13);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(13);
  R(2)+=R(3);
  R(2)<<=2;
  R(0)=0x18u;
  R(2)+=R(12);
  { uint32_t tg=R(8); c->pr=0x8c0280f4u; fp_ld(c,4,R(0)+R(2)); sh4_call(c,tg); }
L8c0280f4:;
  R(14)=R(13);
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(3)=R(13);
  R(14)+=R(3);
  c->fr[3]=0x00000000u;
  R(14)<<=2;
  R(0)=0x4u;
  R(14)+=R(12);
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02812c;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02812c;
  R(0)=0x8c028260u;
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02812c;
  R(0)=0x8c028264u;
  fp_ld(c,3,R(0));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c028156;
L8c02812c:;
  R(0)=0x14u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c028156;
  fp_ld(c,8,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,7,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(14));
  fp_arith(c,0,7,15);
  fp_arith(c,0,6,15);
  R(0)=0x8u;
  fp_arith(c,0,5,14);
  R(3)=0x8c07fbc0u;
  fp_ld(c,4,R(0)+R(14));
  R(4)=LD32(R(14)+32);
  { c->pr=0x8c028156u; fp_arith(c,0,4,14); f_8c07fbc0(c); }
L8c028156:;
  R(0)=R(13);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(13);
  R(0)+=R(3);
  R(4)=R(12);
  R(0)<<=2;
  R(0)+=R(4);
  R(0)=LD32(R(0)+28);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0281b8;
  R(5)=R(13);
  R(5)<<=2;
  R(1)=0x3f266666u;
  c->t=R(5)>>31;R(5)<<=1;
  R(3)=R(13);
  R(5)+=R(3);
  c->fpul=R(1);
  R(5)<<=2;
  R(5)+=R(4);
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(5));
  c->fr[3]=c->fpul;
  fp_arith(c,2,2,3);
  fp_cmp(c,1,2,12);
  { uint32_t k=c->t; fp_st(c,2,R(0)+R(5)); if(k) goto L8c0281b4; }
  R(14)=R(13);
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(3)=R(13);
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(12);
  c->t=R(14)>=R(10);
  { uint32_t k=c->t; R(4)=R(13); if(k) goto L8c0281dc; }
L8c0281a0:;
  R(5)=R(14);
  R(5)+=0x24u;
  R(6)=0x24u;
  { uint32_t tg=R(9); c->pr=0x8c0281aau; R(4)=R(14); sh4_call(c,tg); }
  R(14)+=0x24u;
  c->t=R(14)>=R(10);
  if(!c->t) goto L8c0281a0;
  {  goto L8c0281dc; }
L8c0281b4:;
  { R(13)+=0x1u; goto L8c0281e2; }
L8c0281b8:;
  R(14)=R(13);
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(3)=R(13);
  R(14)+=R(3);
  R(14)<<=2;
  R(14)+=R(4);
  c->t=R(14)>=R(10);
  { uint32_t k=c->t; R(5)=R(13); if(k) goto L8c0281dc; }
L8c0281cc:;
  R(5)=R(14);
  R(5)+=0x24u;
  R(6)=0x24u;
  { uint32_t tg=R(9); c->pr=0x8c0281d6u; R(4)=R(14); sh4_call(c,tg); }
  R(14)+=0x24u;
  c->t=R(14)>=R(10);
  if(!c->t) goto L8c0281cc;
L8c0281dc:;
  R(2)=LD32(R(11));
  R(2)+=0xffffffffu;
  ST32(R(11),R(2));
L8c0281e2:;
  R(3)=LD32(R(11));
  c->t=R(13)>=R(3);
  if(c->t) goto L8c0281ec;
  {  goto L8c028044; }
L8c0281ec:;
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
void f_8c028206(SH4Ctx *c) {
  R(1)=0x8c0c5050u;
  R(2)=0x0u;
  { ST32(R(1),R(2)); return; }
}
void f_8c02820e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(14)=0x8c0c5050u;
  R(3)=R(6);
  R(7)=LD32(R(14));
  c->t=R(3)>=R(7);
  if(c->t) goto L8c028236;
  R(0)=0x8c1408d0u;
  R(1)=LD32(R(3)+R(0));
  c->t=R(1)==R(4);
  if(c->t) goto L8c028236;
L8c028224:;
  R(6)+=0x1u;
  c->t=R(6)>=R(7);
  if(c->t) goto L8c028236;
  R(2)=R(6);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=LD32(R(2)+R(0));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c028224;
L8c028236:;
  R(1)=0xfu;
  c->t=(int32_t)R(6)>=(int32_t)R(1);
  if(c->t) goto L8c028256;
  R(7)=R(6);
  R(3)=0x8c1408d0u;
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(3);
  ST32(R(7),R(4));
  ST32(R(7)+4,R(5));
  R(2)=LD32(R(14));
  c->t=R(6)==R(2);
  if(!c->t) goto L8c028256;
  R(2)=LD32(R(14));
  R(2)+=0x1u;
  ST32(R(14),R(2));
L8c028256:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028280(SH4Ctx *c) {
  R(3)=0x8c0c5050u;
  R(5)=0x0u;
  R(2)=R(5);
  R(6)=LD32(R(3));
  c->t=R(2)>=R(6);
  if(c->t) goto L8c0282a8;
  R(0)=0x8c1408d0u;
  R(0)=LD32(R(2)+R(0));
  c->t=R(0)==R(4);
  if(c->t) goto L8c0282a8;
L8c028294:;
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(c->t) goto L8c0282c0;
  R(2)=R(5);
  R(0)=0x8c1408d0u;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=LD32(R(2)+R(0));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c028294;
L8c0282a8:;
  c->t=R(5)>=R(6);
  if(c->t) goto L8c0282c0;
  R(0)=0x8c1408d4u;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(1)=0x8c0c5054u;
  R(3)=0x8c0c5058u;
  R(2)=LD32(R(5)+R(0));
  ST32(R(3),R(2));
  ST32(R(1),R(4));
  { R(0)=0x1u; return; }
L8c0282c0:;
  R(0)=0x0u;
  {  return; }
}
void f_8c02831c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c05a3e0u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  { c->pr=0x8c02832cu; R(4)=LD32(R(15)); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c02833c;
  R(3)=0x8c05a40eu;
  { c->pr=0x8c028336u; R(4)=LD32(R(15)); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c028344; }
L8c02833c:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c028344:;
  R(3)=0x8c087e94u;
  { c->pr=0x8c02834au;  f_8c087e94(c); }
  R(1)=R(15);
  R(1)+=0x4u;
  R(5)=(int32_t)(int16_t)LD16(R(1));
  R(4)=R(0);
  R(0)=R(4)&0xFFFF;
  R(5)=R(5)&0xFFFF;
  R(0)&=R(5);
  c->t=R(0)==R(5);
  R(0)=c->t;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c028364(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0721b8u;
  { c->pr=0x8c02836eu; ST16(R(15),R(5)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+4,R(0)); if(k) goto L8c02837c; }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c02837c:;
  R(4)=LD32(R(15)+4);
  R(0)=0x50u;
  R(5)=(int32_t)(int16_t)LD16(R(15));
  R(4)=LD32(R(4)+R(0));
  R(15)+=0x8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c02831c(c); return; } }
}
void f_8c028392(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(13)=R(5);
  R(13)+=0xfffffff4u;
  R(12)=R(5);
  R(14)=R(6);
  R(6)=R(15);
  ST32(R(15),R(4));
  R(13)=LD32(R(13));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c0283b0u; R(6)+=0x14u; sh4_call(c,tg); }
  R(12)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(0);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0283beu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+16);
  R(7)=LD32(R(15)+32);
  R(6)=LD32(R(15)+4);
  fp_ld(c,6,R(0)+R(15));
  c->t=R(7)==R(3);
  R(4)=LD32(R(15)+20);
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c0283da; }
  {  goto L8c0284c4; }
L8c0283da:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0283e4;
  {  goto L8c0284ea; }
L8c0283e4:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c028476;
  R(0)=R(13);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0283f8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c028444;
  {  goto L8c028472; }
L8c0283f8:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c028440;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c028440;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c028440;
  { R(2)=0x1u; goto L8c02846e; }
L8c028440:;
  { R(2)=0x0u; goto L8c02846e; }
L8c028444:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02846c;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02846c;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02846c;
  { R(2)=0x0u; goto L8c02846e; }
L8c02846c:;
  R(2)=0x1u;
L8c02846e:;
  { ST32(R(14),R(2)); goto L8c02853e; }
L8c028472:;
  { ST32(R(14),R(12)); goto L8c02853e; }
L8c028476:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c028494;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c028498;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0284a0;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0284a8;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0284ae;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c0284b6;
  {  goto L8c0284c0; }
L8c028494:;
  { c->t=R(4)==R(6); goto L8c0284aa; }
L8c028498:;
  c->t=R(4)==R(6);
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c0284ba; }
L8c0284a0:;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c0284ba; }
L8c0284a8:;
  c->t=(int32_t)R(4)>(int32_t)R(6);
L8c0284aa:;
  { R(0)=c->t; goto L8c0284ba; }
L8c0284ae:;
  c->t=(int32_t)R(4)>(int32_t)R(6);
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c0284ba; }
L8c0284b6:;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  R(0)=c->t;
L8c0284ba:;
  { ST32(R(14),R(0)); goto L8c02853e; }
L8c0284c0:;
  { ST32(R(14),R(12)); goto L8c02853e; }
L8c0284c4:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0284de;
  R(0)=LD32(R(15)+32);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0284d6;
  c->fpul=R(4);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c0284d6:;
  c->fpul=R(6);
  fp_float(c,3);
  { fp_mov(c,5,3); goto L8c0284f4; }
L8c0284de:;
  c->fpul=R(4);
  R(0)=LD32(R(15)+16);
  fp_float(c,3);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c0284ee; }
L8c0284ea:;
  { fp_mov(c,5,6); goto L8c0284f4; }
L8c0284ee:;
  c->fpul=R(6);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c0284f4:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c028512;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c028516;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c02851e;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c028524;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c02852a;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c028532;
  {  goto L8c02853c; }
L8c028512:;
  { fp_cmp(c,0,4,5); goto L8c028520; }
L8c028516:;
  fp_cmp(c,0,4,5);
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c028538; }
L8c02851e:;
  fp_cmp(c,1,5,4);
L8c028520:;
  { R(0)=c->t; goto L8c028538; }
L8c028524:;
  fp_cmp(c,1,4,5);
  { R(0)=c->t; goto L8c028538; }
L8c02852a:;
  fp_cmp(c,1,4,5);
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c028538; }
L8c028532:;
  fp_cmp(c,1,5,4);
  R(0)=c->t;
  R(0)^=0x1u;
L8c028538:;
  { ST32(R(14),R(0)); goto L8c02853e; }
L8c02853c:;
  ST32(R(14),R(12));
L8c02853e:;
  R(0)=R(5);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028440(SH4Ctx *c) {
  { R(2)=0x0u; goto L8c02846e; }
L8c02846e:;
  { ST32(R(14),R(2)); goto L8c02853e; }
L8c02853e:;
  R(0)=R(5);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02854c(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(4)+=0xcu;
  ST8(R(15),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  R(7)=(int32_t)(int8_t)LD8(R(15));
  c->t=(int32_t)R(0)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(6)=0x1u; if(k) goto L8c028578; }
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c028578;
L8c028566:;
  R(4)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  c->t=(int32_t)R(0)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c028578; }
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c028566;
L8c028578:;
  R(0)=R(4);
  ST16(R(5),R(6));
  { R(15)+=0x4u; return; }
}
void f_8c028580(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(13)=R(6);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x4u;
  R(12)=R(4);
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0285a4u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(2)=LD32(R(15)+4);
  ST32(R(13),R(2));
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0285c0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0285ec;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c028628;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c028632;
  {  goto L8c028650; }
L8c0285c0:;
  R(3)=LD32(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0285d8;
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0285f8;
  R(5)=R(14);
  R(5)+=0x8u;
  { c->pr=0x8c0285d4u; R(4)=R(14); f_8c02854c(c); }
  { R(14)=R(0); goto L8c028654; }
L8c0285d8:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0285e4u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(14)=R(0);
  { ST32(R(13),R(2)); goto L8c028654; }
L8c0285ec:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c028614;
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c028608;
L8c0285f8:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+8);
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  { R(14)+=R(0); goto L8c028654; }
L8c028608:;
  R(5)=R(14);
  R(5)+=0x8u;
  { c->pr=0x8c028610u; R(4)=R(14); f_8c02854c(c); }
  { R(14)=R(0); goto L8c028654; }
L8c028614:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c028620u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(14)=R(0);
  { ST32(R(13),R(2)); goto L8c028654; }
L8c028628:;
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  { ST32(R(13),R(0)); goto L8c028654; }
L8c028632:;
  R(2)=LD32(R(13));
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c028642u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(13));
  R(5)=R(0);
  R(3)=LD32(R(15));
  R(2)^=R(3);
  ST32(R(13),R(2));
  { R(0)=R(5); goto L8c028656; }
L8c028650:;
  R(3)=0x0u;
  ST32(R(13),R(3));
L8c028654:;
  R(0)=R(14);
L8c028656:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028662(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(14)=R(6);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c028680u; R(5)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15));
  R(4)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==44;
  if(c->t) goto L8c02869a;
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c0286a4;
  c->t=(int32_t)R(0)==46;
  if(c->t) goto L8c0286ae;
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c0286b8;
  {  goto L8c0286c4; }
L8c02869a:;
  R(3)=0x8c05bc94u;
  { c->pr=0x8c0286a0u;  f_8c05bc94(c); }
  {  goto L8c0286be; }
L8c0286a4:;
  R(3)=0x8c05bc8au;
  { c->pr=0x8c0286aau;  f_8c05bc8a(c); }
  {  goto L8c0286be; }
L8c0286ae:;
  R(3)=0x8c05bca8u;
  { c->pr=0x8c0286b4u;  f_8c05bca8(c); }
  {  goto L8c0286be; }
L8c0286b8:;
  R(3)=0x8c05bc9eu;
  { c->pr=0x8c0286beu;  f_8c05bc9e(c); }
L8c0286be:;
  R(0)=R(0)&0xFF;
  { ST32(R(14),R(0)); goto L8c0286c8; }
L8c0286c4:;
  R(2)=0x0u;
  ST32(R(14),R(2));
L8c0286c8:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0286d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(10)=R(5);
  R(10)+=0xfffffff4u;
  R(14)=R(5);
  R(10)=LD32(R(10));
  R(12)=LD32(R(14)+4);
  R(13)=R(6);
  R(6)=R(15);
  R(9)=R(4);
  { uint32_t tg=R(12); c->pr=0x8c0286f8u; R(6)+=0xcu; sh4_call(c,tg); }
  R(14)=LD32(R(15)+12);
  R(12)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(14)=LD32(R(14)+4);
  R(5)=R(12);
  R(6)+=0xcu;
  R(14)=LD32(R(14)+12);
  { uint32_t tg=R(3); c->pr=0x8c02870cu; R(4)=R(9); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==10;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c028760; }
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c028760;
  c->t=(int32_t)R(0)==12;
  if(c->t) goto L8c0287a2;
  c->t=(int32_t)R(0)==13;
  if(c->t) goto L8c0287be;
  c->t=(int32_t)R(0)==14;
  if(c->t) goto L8c0287be;
  {  goto L8c0287e4; }
L8c028760:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c02876a;
  { R(0)=0x0u; goto L8c02876c; }
L8c02876a:;
  R(0)=0x1u;
L8c02876c:;
  R(6)=R(15);
  R(6)+=0xcu;
  R(5)=R(12);
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(15)+12);
  ST8(R(15),R(3));
  R(2)=LD32(R(12)+4);
  { uint32_t tg=R(2); c->pr=0x8c02877eu; R(4)=R(9); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  ST32(R(15)+4,R(0));
  R(7)=LD32(R(15)+12);
  R(7)=LD32(R(7)+4);
  { uint32_t k=c->t; R(7)=LD32(R(7)+12); if(k) goto L8c02879c; }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c059b5cu;
  R(6)=(int32_t)(int8_t)LD8(R(15));
  R(5)=R(0);
  { c->pr=0x8c028796u; R(4)=R(14); f_8c059b5c(c); }
  R(0)=R(0)&0xFF;
  { ST32(R(13),R(0)); goto L8c02879e; }
L8c02879c:;
  ST32(R(13),R(11));
L8c02879e:;
  { R(0)=LD32(R(15)+4); goto L8c0287e8; }
L8c0287a2:;
  R(5)=LD32(R(15)+12);
  c->t=(R(14)&R(14))==0;
  R(5)=LD32(R(5)+4);
  { uint32_t k=c->t; R(5)=LD32(R(5)+12); if(k) goto L8c0287ba; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0287ba;
  R(3)=0x8c059b9au;
  { c->pr=0x8c0287b6u; R(4)=R(14); f_8c059b9a(c); }
  {  goto L8c0287da; }
L8c0287ba:;
  { ST32(R(13),R(11)); goto L8c0287e6; }
L8c0287be:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==13;
  if(!c->t) goto L8c0287c8;
  { R(5)=0x0u; goto L8c0287ca; }
L8c0287c8:;
  R(5)=0x1u;
L8c0287ca:;
  R(2)=LD32(R(15)+12);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; ST8(R(15),R(2)); if(k) goto L8c0287e0; }
  R(1)=0x8c073cf2u;
  R(6)=R(2)&0xFF;
  { c->pr=0x8c0287dau; R(4)=R(14); f_8c073cf2(c); }
L8c0287da:;
  R(0)=R(0)&0xFF;
  { ST32(R(13),R(0)); goto L8c0287e6; }
L8c0287e0:;
  { ST32(R(13),R(11)); goto L8c0287e6; }
L8c0287e4:;
  ST32(R(13),R(11));
L8c0287e6:;
  R(0)=R(12);
L8c0287e8:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028760(SH4Ctx *c) {
  R(0)=R(10);
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c02876a;
  { R(0)=0x0u; goto L8c02876c; }
L8c02876a:;
  R(0)=0x1u;
L8c02876c:;
  R(6)=R(15);
  R(6)+=0xcu;
  R(5)=R(12);
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(15)+12);
  ST8(R(15),R(3));
  R(2)=LD32(R(12)+4);
  { uint32_t tg=R(2); c->pr=0x8c02877eu; R(4)=R(9); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  ST32(R(15)+4,R(0));
  R(7)=LD32(R(15)+12);
  R(7)=LD32(R(7)+4);
  { uint32_t k=c->t; R(7)=LD32(R(7)+12); if(k) goto L8c02879c; }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(3)=0x8c059b5cu;
  R(6)=(int32_t)(int8_t)LD8(R(15));
  R(5)=R(0);
  { c->pr=0x8c028796u; R(4)=R(14); f_8c059b5c(c); }
  R(0)=R(0)&0xFF;
  { ST32(R(13),R(0)); goto L8c02879e; }
L8c02879c:;
  ST32(R(13),R(11));
L8c02879e:;
  { R(0)=LD32(R(15)+4); goto L8c0287e8; }
L8c0287e8:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028820(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(12)=R(5);
  R(12)+=0xfffffff4u;
  R(12)=LD32(R(12));
  R(13)=0x0u;
  R(10)=R(5);
  R(14)=R(4);
  R(0)=R(12);
  R(9)=R(13);
  R(11)=R(6);
  R(0)+=0xfffffff1u;
  R(1)=0xcu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c028850;
  {  goto L8c028b20; }
L8c028850:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02885cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02885cu+R(0));  switch(tg){ case 0x8c028874u: goto L8c028874; case 0x8c028918u: goto L8c028918; case 0x8c0289c0u: goto L8c0289c0; case 0x8c028a8eu: goto L8c028a8e; default: sh4_bad_jump(c,0x8c028858u,tg); return; } }
L8c028874:;
  R(3)=LD32(R(10)+4);
  R(6)=R(15);
  R(6)+=0x14u;
  R(5)=R(10);
  R(8)=R(13);
  R(9)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c028884u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(10)=R(0);
  R(6)=R(15);
  R(5)=R(10);
  R(3)=LD32(R(2)+4);
  R(6)+=0x14u;
  R(1)=LD32(R(3)+12);
  ST32(R(15)+12,R(1));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02889au; R(4)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(10)=R(0);
  R(6)=R(15);
  R(0)=0x10u;
  R(5)=R(10);
  R(6)+=0x14u;
  ST8(R(15)+R(0),R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c0288aeu; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(15);
  R(6)+=0x14u;
  ST32(R(15),R(0));
  R(10)=LD32(R(15)+20);
  R(3)=LD32(R(15));
  R(10)=LD32(R(10)+4);
  R(2)=LD32(R(3)+4);
  R(5)=R(3);
  R(10)=LD32(R(10)+12);
  { uint32_t tg=R(2); c->pr=0x8c0288c4u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=R(12);
  R(4)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==15;
  if(!c->t) goto L8c0288d2;
  { R(9)=R(13); goto L8c0288d8; }
L8c0288d2:;
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c0288dc;
  R(9)=0x1u;
L8c0288d8:;
  { R(8)=R(13); goto L8c0288f0; }
L8c0288dc:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==17;
  if(!c->t) goto L8c0288e8;
  R(9)=R(13);
  { R(8)=0x1u; goto L8c0288f0; }
L8c0288e8:;
  c->t=(int32_t)R(0)==18;
  if(!c->t) goto L8c0288f0;
  R(8)=0x1u;
  R(9)=0x1u;
L8c0288f0:;
  R(2)=LD32(R(15)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c028914;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c028914;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(0)=0x18u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(3)=0x8c059760u;
  R(5)=R(9);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  { c->pr=0x8c02890cu; R(4)=LD32(R(15)+20); f_8c059760(c); }
  R(15)+=0x8u;
  R(0)=R(0)&0xFF;
  { ST32(R(11),R(0)); goto L8c02899a; }
L8c028914:;
  { ST32(R(11),R(13)); goto L8c02899a; }
L8c028918:;
  R(6)=R(15);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=0x14u;
  R(9)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c028926u; R(4)=R(14); sh4_call(c,tg); }
  R(8)=LD32(R(15)+20);
  R(10)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(8)=LD32(R(8)+4);
  R(5)=R(10);
  R(6)+=0x14u;
  R(8)=LD32(R(8)+12);
  { uint32_t tg=R(3); c->pr=0x8c02893au; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=LD32(R(15)+20);
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x14u;
  ST8(R(15)+12,R(0));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02894cu; R(4)=R(14); sh4_call(c,tg); }
  R(6)=R(15);
  R(6)+=0x14u;
  ST32(R(15),R(0));
  R(10)=LD32(R(15)+20);
  R(3)=LD32(R(15));
  R(10)=LD32(R(10)+4);
  R(2)=LD32(R(3)+4);
  R(5)=R(3);
  R(10)=LD32(R(10)+12);
  { uint32_t tg=R(2); c->pr=0x8c028962u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(4)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==19;
  if(!c->t) goto L8c028972;
  { R(9)=R(13); goto L8c028978; }
L8c028972:;
  c->t=(int32_t)R(0)==20;
  if(!c->t) goto L8c028978;
  R(9)=0x1u;
L8c028978:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c028998;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c028998;
  R(0)=0x10u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0596ecu;
  R(7)=R(10);
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(5)=R(9);
  { c->pr=0x8c028990u; R(4)=R(8); f_8c0596ec(c); }
  R(15)+=0x4u;
  R(0)=R(0)&0xFF;
  { ST32(R(11),R(0)); goto L8c02899a; }
L8c028998:;
  ST32(R(11),R(13));
L8c02899a:;
  { R(0)=LD32(R(15)); goto L8c028b24; }
L8c0289c0:;
  R(2)=0x8c087f46u;
  R(4)=R(15);
  { c->pr=0x8c0289c8u; R(4)+=0x8u; f_8c087f46(c); }
  R(3)=0x8c087f46u;
  R(4)=R(15);
  { c->pr=0x8c0289d0u; R(4)+=0x4u; f_8c087f46(c); }
  R(6)=R(15);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c0289dcu; R(4)=R(14); sh4_call(c,tg); }
  R(8)=LD32(R(15)+20);
  R(10)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(8)=LD32(R(8)+4);
  R(5)=R(10);
  R(6)+=0x14u;
  R(8)=LD32(R(8)+12);
  { uint32_t tg=R(3); c->pr=0x8c0289f0u; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=R(12);
  R(4)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==22;
  if(!c->t) goto L8c0289fe;
  { R(9)=LD32(R(4)+4); goto L8c028a3a; }
L8c0289fe:;
  c->t=(int32_t)R(0)==24;
  if(!c->t) goto L8c028a1a;
  R(9)=LD32(R(4)+4);
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(9)=LD32(R(9)+12);
  R(6)+=0x14u;
  { uint32_t tg=R(3); c->pr=0x8c028a12u; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  { ST16(R(15)+4,R(0)); goto L8c028a6c; }
L8c028a1a:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(4)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==23;
  if(!c->t) goto L8c028a3e;
  R(6)=R(15);
  R(0)=R(4);
  R(5)=R(10);
  R(6)+=0x14u;
  ST16(R(15)+8,R(0));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c028a34u; R(4)=R(14); sh4_call(c,tg); }
  R(9)=LD32(R(15)+20);
  R(10)=R(0);
  R(9)=LD32(R(9)+4);
L8c028a3a:;
  { R(9)=LD32(R(9)+12); goto L8c028a6c; }
L8c028a3e:;
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c028a6c;
  R(6)=R(15);
  R(0)=R(4);
  R(5)=R(10);
  R(6)+=0x14u;
  ST16(R(15)+8,R(0));
  R(12)=LD32(R(10)+4);
  { uint32_t tg=R(12); c->pr=0x8c028a52u; R(4)=R(14); sh4_call(c,tg); }
  R(9)=LD32(R(15)+20);
  R(12)=R(0);
  R(6)=R(15);
  R(10)=LD32(R(12)+4);
  R(9)=LD32(R(9)+4);
  R(5)=R(12);
  R(6)+=0x14u;
  R(9)=LD32(R(9)+12);
  { uint32_t tg=R(10); c->pr=0x8c028a66u; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  ST16(R(15)+4,R(0));
L8c028a6c:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c028a8a;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c028a8a;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=R(9);
  R(3)=0x8c05993eu;
  R(7)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=R(0);
  { c->pr=0x8c028a84u; R(4)=R(8); f_8c05993e(c); }
  R(0)=R(0)&0xFF;
  { ST32(R(11),R(0)); goto L8c028b22; }
L8c028a8a:;
  { ST32(R(11),R(13)); goto L8c028b22; }
L8c028a8e:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==25;
  if(!c->t) goto L8c028a98;
  { R(2)=0x0u; goto L8c028a9a; }
L8c028a98:;
  R(2)=0x1u;
L8c028a9a:;
  R(6)=R(15);
  R(5)=R(10);
  R(6)+=0x14u;
  ST8(R(15),R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c028aa8u; R(4)=R(14); sh4_call(c,tg); }
  R(12)=LD32(R(15)+20);
  R(10)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(12)=LD32(R(12)+4);
  R(5)=R(10);
  R(6)+=0x14u;
  R(12)=LD32(R(12)+12);
  { uint32_t tg=R(3); c->pr=0x8c028abcu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+20);
  R(10)=R(0);
  R(6)=R(15);
  R(0)=0x10u;
  R(5)=R(10);
  R(6)+=0x14u;
  ST8(R(15)+R(0),R(2));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c028ad0u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  c->t=(R(12)&R(12))==0;
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  { uint32_t k=c->t; R(7)=R(0); if(k) goto L8c028aee; }
  R(0)=0x10u;
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(6)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=0x8c073d40u;
  R(6)=R(6)&0xFF;
  { c->pr=0x8c028ae8u; R(4)=R(12); f_8c073d40(c); }
  R(0)=R(0)&0xFF;
  { ST32(R(11),R(0)); goto L8c028af0; }
L8c028aee:;
  ST32(R(11),R(13));
L8c028af0:;
  { R(0)=LD32(R(15)+12); goto L8c028b24; }
L8c028b20:;
  ST32(R(11),R(13));
L8c028b22:;
  R(0)=R(10);
L8c028b24:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0289c0(SH4Ctx *c) {
  R(2)=0x8c087f46u;
  R(4)=R(15);
  { c->pr=0x8c0289c8u; R(4)+=0x8u; f_8c087f46(c); }
  R(3)=0x8c087f46u;
  R(4)=R(15);
  { c->pr=0x8c0289d0u; R(4)+=0x4u; f_8c087f46(c); }
  R(6)=R(15);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c0289dcu; R(4)=R(14); sh4_call(c,tg); }
  R(8)=LD32(R(15)+20);
  R(10)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(8)=LD32(R(8)+4);
  R(5)=R(10);
  R(6)+=0x14u;
  R(8)=LD32(R(8)+12);
  { uint32_t tg=R(3); c->pr=0x8c0289f0u; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=R(12);
  R(4)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==22;
  if(!c->t) goto L8c0289fe;
  { R(9)=LD32(R(4)+4); goto L8c028a3a; }
L8c0289fe:;
  c->t=(int32_t)R(0)==24;
  if(!c->t) goto L8c028a1a;
  R(9)=LD32(R(4)+4);
  R(6)=R(15);
  R(3)=LD32(R(10)+4);
  R(5)=R(10);
  R(9)=LD32(R(9)+12);
  R(6)+=0x14u;
  { uint32_t tg=R(3); c->pr=0x8c028a12u; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  { ST16(R(15)+4,R(0)); goto L8c028a6c; }
L8c028a1a:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  R(4)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==23;
  if(!c->t) goto L8c028a3e;
  R(6)=R(15);
  R(0)=R(4);
  R(5)=R(10);
  R(6)+=0x14u;
  ST16(R(15)+8,R(0));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c028a34u; R(4)=R(14); sh4_call(c,tg); }
  R(9)=LD32(R(15)+20);
  R(10)=R(0);
  R(9)=LD32(R(9)+4);
L8c028a3a:;
  { R(9)=LD32(R(9)+12); goto L8c028a6c; }
L8c028a3e:;
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c028a6c;
  R(6)=R(15);
  R(0)=R(4);
  R(5)=R(10);
  R(6)+=0x14u;
  ST16(R(15)+8,R(0));
  R(12)=LD32(R(10)+4);
  { uint32_t tg=R(12); c->pr=0x8c028a52u; R(4)=R(14); sh4_call(c,tg); }
  R(9)=LD32(R(15)+20);
  R(12)=R(0);
  R(6)=R(15);
  R(10)=LD32(R(12)+4);
  R(9)=LD32(R(9)+4);
  R(5)=R(12);
  R(6)+=0x14u;
  R(9)=LD32(R(9)+12);
  { uint32_t tg=R(10); c->pr=0x8c028a66u; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+20);
  ST16(R(15)+4,R(0));
L8c028a6c:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c028a8a;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c028a8a;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=R(9);
  R(3)=0x8c05993eu;
  R(7)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=R(0);
  { c->pr=0x8c028a84u; R(4)=R(8); f_8c05993e(c); }
  R(0)=R(0)&0xFF;
  { ST32(R(11),R(0)); goto L8c028b22; }
L8c028a8a:;
  { ST32(R(11),R(13)); goto L8c028b22; }
L8c028b22:;
  R(0)=R(10);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028b20(SH4Ctx *c) {
  ST32(R(11),R(13));
  R(0)=R(10);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028b38(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(6);
  R(6)=0x8c0c76fcu;
  R(3)=R(5);
  R(14)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c028b5e; }
  ST32(R(15),R(5));
  { ST32(R(6),R(12)); goto L8c028b60; }
L8c028b5e:;
  ST32(R(15),R(4));
L8c028b60:;
  R(3)=0x8c0721b8u;
  { c->pr=0x8c028b66u; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c028bd0; }
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==27;
  { uint32_t k=c->t; R(4)=LD32(R(4)+4); if(k) goto L8c028b8c; }
  c->t=(int32_t)R(0)==28;
  if(c->t) goto L8c028b98;
  c->t=(int32_t)R(0)==29;
  if(c->t) goto L8c028ba4;
  c->t=(int32_t)R(0)==30;
  if(c->t) goto L8c028bac;
  c->t=(int32_t)R(0)==31;
  if(c->t) goto L8c028bb8;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c028bc4;
  {  goto L8c028bd0; }
L8c028b8c:;
  R(0)=0x1u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  R(0)=c->t;
  { ST32(R(13),R(0)); goto L8c028bd2; }
L8c028b98:;
  R(0)=0x4u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==4;
  R(0)=c->t;
  { ST32(R(13),R(0)); goto L8c028bd2; }
L8c028ba4:;
  c->t=(R(4)&R(4))==0;
  R(0)=c->t;
  { ST32(R(13),R(0)); goto L8c028bd2; }
L8c028bac:;
  R(0)=0x10u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==16;
  R(0)=c->t;
  { ST32(R(13),R(0)); goto L8c028bd2; }
L8c028bb8:;
  R(5)=0x10000u;
  R(4)&=R(5);
  c->t=R(4)==R(5);
  R(0)=c->t;
  { ST32(R(13),R(0)); goto L8c028bd2; }
L8c028bc4:;
  R(0)=0x40u;
  R(0)&=R(4);
  c->t=(int32_t)R(0)==64;
  R(0)=c->t;
  { ST32(R(13),R(0)); goto L8c028bd2; }
L8c028bd0:;
  ST32(R(13),R(12));
L8c028bd2:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028c00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(12)=R(6);
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c028c1e; }
  ST32(R(15),R(5));
  { ST32(R(6),R(13)); goto L8c028c20; }
L8c028c1e:;
  ST32(R(15),R(4));
L8c028c20:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c028c2au; R(5)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+8);
  R(14)=R(0);
  R(3)=LD32(R(2)+4);
  R(1)=LD32(R(3)+12);
  R(3)=0x8c0721b8u;
  ST32(R(15)+4,R(1));
  { c->pr=0x8c028c3au; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c028c64; }
  R(3)=LD32(R(4)+4);
  R(5)=0x10000u;
  R(3)&=R(5);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c028c64;
  R(3)=0x80u;
  R(4)+=R(3);
  R(4)=LD32(R(4)+36);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c028c64;
  R(1)=0x8c092bf2u;
  { c->pr=0x8c028c5au;  f_8c092bf2(c); }
  R(3)=LD32(R(15)+4);
  c->t=R(0)==R(3);
  R(0)=c->t;
  { ST32(R(12),R(0)); goto L8c028c66; }
L8c028c64:;
  ST32(R(12),R(13));
L8c028c66:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028ca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=R(5);
  R(11)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  ST32(R(15)+4,R(4));
  R(14)=R(6);
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c028cce; }
  ST32(R(15),R(4));
  { ST32(R(5),R(12)); goto L8c028cd2; }
L8c028cce:;
  R(2)=LD32(R(15)+4);
  ST32(R(15),R(2));
L8c028cd2:;
  R(3)=0x8c0721b8u;
  { c->pr=0x8c028cd8u; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c028ce2; }
  {  goto L8c028de0; }
L8c028ce2:;
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(10)=LD32(R(13)+4);
  R(5)=R(11);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c028cf0u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(7)=0x4u;
  R(4)=R(10);
  R(5)=R(0);
  R(0)=LD32(R(15)+8);
  R(6)=0x1u;
  c->t=(int32_t)R(0)==34;
  R(9)=0x10u;
  R(4)&=R(6);
  R(7)&=R(10);
  { uint32_t k=c->t; R(9)&=R(10); if(k) goto L8c028d1a; }
  c->t=(int32_t)R(0)==35;
  if(c->t) goto L8c028d28;
  c->t=(int32_t)R(0)==36;
  if(c->t) goto L8c028d3c;
  c->t=(int32_t)R(0)==37;
  if(c->t) goto L8c028d9e;
  {  goto L8c028de0; }
L8c028d1a:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c028d24;
  { R(0)=0x4cu; goto L8c028d30; }
L8c028d24:;
  { ST32(R(14),R(12)); goto L8c028de2; }
L8c028d28:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c028d38;
  R(0)=0x74u;
L8c028d30:;
  { c->pr=0x8c028d34u; R(4)=LD32(R(13)+R(0)); f_8c02831c(c); }
  { R(0)=R(0)&0xFF; goto L8c028dac; }
L8c028d38:;
  { ST32(R(14),R(12)); goto L8c028de2; }
L8c028d3c:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c028d9a;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c028d50;
  R(0)=0x4cu;
  { c->pr=0x8c028d4cu; R(4)=LD32(R(13)+R(0)); f_8c02831c(c); }
  {  goto L8c028d8c; }
L8c028d50:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c028d80;
  R(0)=0x74u;
  { c->pr=0x8c028d5cu; R(4)=LD32(R(13)+R(0)); f_8c02831c(c); }
  {  goto L8c028d8c; }
L8c028d80:;
  R(0)=R(9);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c028d96;
  R(0)=0xecu;
  { c->pr=0x8c028d8cu; R(4)=LD32(R(13)+R(0)); f_8c02831c(c); }
L8c028d8c:;
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  {  goto L8c028dac; }
L8c028d96:;
  { ST32(R(14),R(6)); goto L8c028de2; }
L8c028d9a:;
  { ST32(R(14),R(6)); goto L8c028de2; }
L8c028d9e:;
  R(0)=R(9);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c028db0;
  R(0)=0xecu;
  { c->pr=0x8c028daau; R(4)=LD32(R(13)+R(0)); f_8c02831c(c); }
  R(0)=R(0)&0xFF;
L8c028dac:;
  { ST32(R(14),R(0)); goto L8c028de2; }
L8c028db0:;
  { ST32(R(14),R(12)); goto L8c028de2; }
L8c028de0:;
  ST32(R(14),R(12));
L8c028de2:;
  R(0)=R(11);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028d80(SH4Ctx *c) {
  R(0)=R(9);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c028d96;
  R(0)=0xecu;
  { c->pr=0x8c028d8cu; R(4)=LD32(R(13)+R(0)); f_8c02831c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  {  goto L8c028dac; }
L8c028d96:;
  { ST32(R(14),R(6)); goto L8c028de2; }
L8c028dac:;
  { ST32(R(14),R(0)); goto L8c028de2; }
L8c028de2:;
  R(0)=R(11);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028dc0(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  ST32(R(14),R(12));
  R(0)=R(11);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028de0(SH4Ctx *c) {
  ST32(R(14),R(12));
  R(0)=R(11);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028df6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(13)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(14)=R(5);
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=(int32_t)R(0)==38;
  { uint32_t k=c->t; R(12)=R(6); if(k) goto L8c028e22; }
  c->t=(int32_t)R(0)==39;
  if(c->t) goto L8c028e4e;
  c->t=(int32_t)R(0)==40;
  if(c->t) goto L8c028e76;
  c->t=(int32_t)R(0)==41;
  if(c->t) goto L8c028ea0;
  {  goto L8c028ebe; }
L8c028e22:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  { uint32_t tg=R(3); c->pr=0x8c028e2eu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(0);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c028e3cu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c073654u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+4);
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+12);
  { c->pr=0x8c028e4au; R(4)=LD32(R(15)+20); f_8c073654(c); }
  {  goto L8c028e9a; }
L8c028e4e:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c028e5au; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(0);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c028e68u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c0736c0u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c028e72u; R(4)=LD32(R(15)+20); f_8c0736c0(c); }
  {  goto L8c028e9a; }
L8c028e76:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c028e82u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(0);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c028e90u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c073716u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c028e9au; R(4)=LD32(R(15)+20); f_8c073716(c); }
L8c028e9a:;
  ST32(R(12),R(0));
  { R(0)=LD32(R(15)); goto L8c028ec4; }
L8c028ea0:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x14u;
  { uint32_t tg=R(2); c->pr=0x8c028eacu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(15)+20);
  R(5)=R(0);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  R(0)=c->t;
  ST32(R(12),R(0));
  { R(0)=R(5); goto L8c028ec4; }
L8c028ebe:;
  R(3)=0x0u;
  R(0)=R(14);
  ST32(R(12),R(3));
L8c028ec4:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028ed0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=0x8c123b74u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  R(6)=R(15);
  R(14)=LD32(R(15)+4);
  R(6)+=0xcu;
  R(5)=LD32(R(15)+4);
  R(14)=LD32(R(14)+4);
  R(13)=LD32(R(3));
  { uint32_t tg=R(14); c->pr=0x8c028ef2u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(15)+12);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c028f02u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(7)=LD32(R(15)+12);
  c->t=R(13)>=R(12);
  R(4)=R(13);
  R(5)=R(0);
  { uint32_t k=!c->t; R(4)-=R(12); if(k) goto L8c028f40; }
  { R(6)=R(4); goto L8c028f42; }
L8c028f40:;
  R(6)=0u-R(4);
L8c028f42:;
  c->t=R(6)>=R(7);
  R(3)=LD32(R(15)+8);
  R(0)=c->t;
  ST32(R(3),R(0));
  R(0)=R(5);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028f40(SH4Ctx *c) {
  R(6)=0u-R(4);
  c->t=R(6)>=R(7);
  R(3)=LD32(R(15)+8);
  R(0)=c->t;
  ST32(R(3),R(0));
  R(0)=R(5);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028f58(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(14)=R(6);
  R(6)=R(15);
  R(6)+=0x8u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c028f76u; R(5)=R(13); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(15)+4);
  R(13)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==53;
  if(c->t) goto L8c028f94;
  c->t=(int32_t)R(0)==49;
  if(c->t) goto L8c028f9a;
  c->t=(int32_t)R(0)==50;
  if(c->t) goto L8c028fc8;
  c->t=(int32_t)R(0)==51;
  if(c->t) goto L8c028fd2;
  c->t=(int32_t)R(0)==52;
  if(c->t) goto L8c028fdc;
  {  goto L8c028fe6; }
L8c028f94:;
  R(0)=LD32(R(15)+8);
  { c->t=(int32_t)R(0)==-1; goto L8c028fca; }
L8c028f9a:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c028fc2;
  R(3)=LD32(R(13)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c028fc2; }
  R(0)=LD32(R(15));
  R(1)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c028fb6;
  { R(1)=0x1u; goto L8c028fb8; }
L8c028fb6:;
  R(1)=0x0u;
L8c028fb8:;
  R(1)=R(1)&0xFF;
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c028fc2;
  { R(2)=0x1u; goto L8c028fc4; }
L8c028fc2:;
  R(2)=0x0u;
L8c028fc4:;
  { ST32(R(14),R(2)); goto L8c028fea; }
L8c028fc8:;
  c->t=(R(13)&R(13))==0;
L8c028fca:;
  R(0)=c->t;
  R(0)^=0x1u;
  { ST32(R(14),R(0)); goto L8c028fea; }
L8c028fd2:;
  c->t=(R(13)&R(13))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  { ST32(R(14),R(0)); goto L8c028fea; }
L8c028fdc:;
  c->t=(R(13)&R(13))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  { ST32(R(14),R(0)); goto L8c028fea; }
L8c028fe6:;
  R(3)=0x0u;
  ST32(R(14),R(3));
L8c028fea:;
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c028ff6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(10)=R(5);
  R(10)+=0xfffffff4u;
  R(10)=LD32(R(10));
  R(13)=R(6);
  R(12)=R(4);
  R(14)=R(5);
  R(0)=R(10);
  c->t=(int32_t)R(0)==72;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c02904a; }
  c->t=(int32_t)R(0)==65;
  if(c->t) goto L8c029058;
  c->t=(int32_t)R(0)==66;
  if(c->t) goto L8c029090;
  c->t=(int32_t)R(0)==67;
  if(c->t) goto L8c0290c0;
  c->t=(int32_t)R(0)==69;
  if(!c->t) goto L8c02902e;
  {  goto L8c029124; }
L8c02902e:;
  c->t=(int32_t)R(0)==68;
  if(!c->t) goto L8c029036;
  {  goto L8c029124; }
L8c029036:;
  c->t=(int32_t)R(0)==71;
  if(!c->t) goto L8c02903e;
  {  goto L8c029174; }
L8c02903e:;
  c->t=(int32_t)R(0)==73;
  if(!c->t) goto L8c029046;
  {  goto L8c029190; }
L8c029046:;
  {  goto L8c0291ce; }
L8c02904a:;
  R(3)=0x8c123b08u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==9;
  R(0)=c->t;
  { R(0)^=0x1u; goto L8c0290ee; }
L8c029058:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c029064u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x4u;
  ST16(R(15),R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c029076u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(4)=R(0);
  R(4)=R(4)&0xFFFF;
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c02908a;
  { R(3)=0x1u; goto L8c02908c; }
L8c02908a:;
  R(3)=0x0u;
L8c02908c:;
  { ST32(R(13),R(3)); goto L8c029170; }
L8c029090:;
  R(2)=LD32(R(12)+4);
  R(12)=LD32(R(2)+20);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0290a8;
  R(3)=0x8c047ceeu;
  { c->pr=0x8c02909eu; R(4)=R(12); f_8c047cee(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0290a8;
  { R(3)=0x1u; goto L8c0290aa; }
L8c0290a8:;
  R(3)=0x0u;
L8c0290aa:;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(13),R(3)); if(k) goto L8c0290b4; }
  {  goto L8c0291d0; }
L8c0290b4:;
  R(3)=0x8c047dbcu;
  R(5)=0x0u;
  { c->pr=0x8c0290bcu; R(4)=R(12); f_8c047dbc(c); }
  {  goto L8c0291d0; }
L8c0290c0:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0290ccu; R(4)=R(12); sh4_call(c,tg); }
  R(2)=0x8c0721b8u;
  R(14)=R(0);
  { c->pr=0x8c0290d4u; R(4)=R(12); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0290de; }
  { ST32(R(13),R(11)); goto L8c0291d0; }
L8c0290de:;
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c029120;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(0);
  { c->pr=0x8c0290ecu; R(4)=R(12); f_8c028364(c); }
  R(0)=R(0)&0xFF;
L8c0290ee:;
  { ST32(R(13),R(0)); goto L8c0291d0; }
L8c029120:;
  { ST32(R(13),R(11)); goto L8c0291d0; }
L8c029124:;
  R(6)=R(15);
  R(9)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(9); c->pr=0x8c029130u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=LD32(R(15)+4);
  R(9)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(9)+4);
  R(14)=LD32(R(14)+4);
  R(5)=R(9);
  R(6)+=0x4u;
  R(14)=LD32(R(14)+12);
  { uint32_t tg=R(3); c->pr=0x8c029144u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==68;
  if(!c->t) goto L8c029156;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+12);
  R(4)=LD32(R(4));
  { R(4)=LD32(R(4)+4); goto L8c02915e; }
L8c029156:;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+12);
  R(4)=LD32(R(4));
  R(4)=LD32(R(4)+8);
L8c02915e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02916e;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(15)+4);
  c->t=R(2)==R(3);
  R(0)=c->t;
  { ST32(R(13),R(0)); goto L8c029170; }
L8c02916e:;
  ST32(R(13),R(11));
L8c029170:;
  { R(0)=R(5); goto L8c0291d2; }
L8c029174:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c029180u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c055188u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c02918au; R(4)=R(12); f_8c055188(c); }
  ST32(R(13),R(0));
  { R(0)=LD32(R(15)); goto L8c0291d2; }
L8c029190:;
  R(2)=LD32(R(14));
  R(14)+=0xcu;
  R(3)=0x8c084020u;
  ST8(R(15),R(2));
  { c->pr=0x8c02919cu; R(4)=R(12); f_8c084020(c); }
  R(2)=0xffffu;
  R(5)=R(0);
  R(4)=R(5)&0xFFFF;
  c->t=R(4)==R(2);
  if(c->t) goto L8c0291ca;
  R(3)=0x6u;
  R(7)=R(15);
  R(5)=0x0u;
  ST32(R(15)+4,R(4));
  ST32(R(15)+16,R(3));
  R(7)+=0x4u;
  R(6)=LD32(R(12)+4);
  R(3)=0x8c0729f6u;
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c0291beu; R(4)=(int32_t)(int8_t)LD8(R(15)); f_8c0729f6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0291ca;
  R(2)=0x1u;
  { ST32(R(13),R(2)); goto L8c0291d0; }
L8c0291ca:;
  { ST32(R(13),R(11)); goto L8c0291d0; }
L8c0291ce:;
  ST32(R(13),R(11));
L8c0291d0:;
  R(0)=R(14);
L8c0291d2:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c029120(SH4Ctx *c) {
  { ST32(R(13),R(11)); goto L8c0291d0; }
L8c0291d0:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c029220(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0x8c055c22u;
  R(12)=R(5);
  ST32(R(15),R(6));
  { c->pr=0x8c029238u; ST32(R(15)+4,R(7)); f_8c055c22(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0292b2;
  R(3)=0x8c055c22u;
  { c->pr=0x8c029244u; R(4)=LD32(R(15)); f_8c055c22(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0292b2;
  R(3)=0x8c05e612u;
  R(6)=R(12);
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  { c->pr=0x8c029256u; R(4)+=0x8u; f_8c05e612(c); }
  R(2)=0x8c09af60u;
  R(5)=R(15);
  R(6)=R(14);
  R(5)+=0x8u;
  { c->pr=0x8c029262u; R(4)=R(12); f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0292a0;
  c->t=R(14)==R(11);
  if(c->t) goto L8c02927e;
  R(3)=0x8c09af60u;
  R(5)=R(15);
  R(6)=R(11);
  R(5)+=0x8u;
  { c->pr=0x8c029278u; R(4)=R(12); f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0292a0;
L8c02927e:;
  R(4)=LD32(R(14)+4);
  R(10)=LD32(R(4)+36);
  { R(4)=LD32(R(4)+32); goto L8c0292ac; }
L8c029286:;
  R(4)=R(14);
  R(13)=LD32(R(4)+4);
  c->t=R(13)==R(11);
  if(c->t) goto L8c0292a4;
  R(3)=0x8c09af60u;
  R(5)=R(15);
  R(6)=R(13);
  R(5)+=0x8u;
  { c->pr=0x8c02929au; R(4)=R(12); f_8c09af60(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0292a4;
L8c0292a0:;
  { R(0)=0x1u; goto L8c0292b4; }
L8c0292a4:;
  R(4)=R(14);
  R(4)+=0x8u;
  R(10)+=0xffffffffu;
  R(5)=R(14);
L8c0292ac:;
  c->t=(int32_t)R(10)>0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c029286; }
L8c0292b2:;
  R(0)=0x0u;
L8c0292b4:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0292c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(3)=0x8c0c76fcu;
  R(14)=R(5);
  ST32(R(15)+4,R(6));
  R(6)=R(14);
  R(5)=LD32(R(3));
  R(6)+=0xfffffff4u;
  R(6)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)=0x0u; if(k) goto L8c0292ea; }
  R(2)=0x8c0c76fcu;
  ST32(R(15),R(5));
  { ST32(R(2),R(7)); goto L8c0292ec; }
L8c0292ea:;
  ST32(R(15),R(4));
L8c0292ec:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==54;
  if(!c->t) goto L8c029336;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(13)=LD32(R(15));
  R(6)+=0x24u;
  { uint32_t tg=R(3); c->pr=0x8c0292feu; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c071d06u;
  ST32(R(15)+8,R(0));
  R(5)+=0x18u;
  R(14)=LD32(R(15)+36);
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+12);
  { c->pr=0x8c029310u; R(4)=R(13); f_8c071d06(c); }
  R(2)=0x8c071d06u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c02931au; R(4)=R(14); f_8c071d06(c); }
  R(5)=R(15);
  R(7)=R(15);
  R(8)=LD32(R(15)+4);
  R(5)+=0x18u;
  R(7)+=0xcu;
  R(6)=R(14);
  { c->pr=0x8c02932au; R(4)=R(13); f_8c029220(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  ST32(R(8),R(0));
  { R(0)=LD32(R(15)+8); goto L8c02933c; }
L8c029336:;
  R(3)=LD32(R(15)+4);
  R(0)=R(14);
  ST32(R(3),R(7));
L8c02933c:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c029348(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0c76fcu;
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  R(7)=LD32(R(15)+4);
  R(6)=LD32(R(3));
  R(7)+=0xfffffff4u;
  R(7)=LD32(R(7));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c0293a0; }
  R(1)=0x8c0c76fcu;
  R(2)=0x0u;
  ST32(R(15),R(6));
  { ST32(R(1),R(2)); goto L8c0293a2; }
L8c0293a0:;
  ST32(R(15),R(4));
L8c0293a2:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0293ae;
  { R(4)=0x0u; goto L8c0293b2; }
L8c0293ae:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
L8c0293b2:;
  R(4)=LD32(R(4)+28);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0293e6;
  R(0)=R(7);
  c->t=(int32_t)R(0)==58;
  if(c->t) goto L8c0293ca;
  c->t=(int32_t)R(0)==59;
  if(c->t) goto L8c0293d4;
  c->t=(int32_t)R(0)==60;
  if(c->t) goto L8c0293de;
  {  goto L8c0293e6; }
L8c0293ca:;
  R(3)=0x8c050954u;
  { c->pr=0x8c0293d0u;  f_8c050954(c); }
  {  goto L8c0293e4; }
L8c0293d4:;
  R(3)=0x8c050beeu;
  { c->pr=0x8c0293dau;  f_8c050bee(c); }
  {  goto L8c0293e4; }
L8c0293de:;
  R(3)=0x8c050bcau;
  { c->pr=0x8c0293e4u;  f_8c050bca(c); }
L8c0293e4:;
  R(5)=R(0)&0xFF;
L8c0293e6:;
  R(2)=LD32(R(15)+8);
  ST32(R(2),R(5));
  R(0)=LD32(R(15)+4);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0293f4(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c76fcu;
  R(7)=LD32(R(3));
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c029408;
  R(1)=0x8c0c76fcu;
  R(2)=0x0u;
  ST32(R(15),R(7));
  { ST32(R(1),R(2)); goto L8c02940a; }
L8c029408:;
  ST32(R(15),R(4));
L8c02940a:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029416;
  { R(0)=0x0u; goto L8c02941a; }
L8c029416:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+4);
L8c02941a:;
  R(0)=LD32(R(0)+4);
  R(1)=0x25u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c02942a;
  { R(0)=0x1u; goto L8c02942c; }
L8c02942a:;
  R(0)=0x0u;
L8c02942c:;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(0)=c->t;
  ST32(R(6),R(0));
  R(0)=R(5);
  { R(15)+=0x4u; return; }
}
void f_8c02943a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c02944eu; R(5)=R(3); sh4_call(c,tg); }
  R(2)=LD32(R(15)+8);
  R(5)=R(0);
  R(3)=LD32(R(15)+4);
  R(1)=LD32(R(2)+4);
  R(2)=0x8c123b6cu;
  R(0)=LD32(R(2));
  R(2)=LD32(R(1)+20);
  c->t=R(2)==R(0);
  R(0)=c->t;
  ST32(R(3),R(0));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c0294a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(13)=R(5);
  R(13)+=0xfffffff4u;
  R(13)=LD32(R(13));
  R(12)=R(6);
  R(14)=R(5);
  R(11)=R(4);
  R(0)=R(13);
  c->t=(int32_t)R(0)==42;
  R(9)=0x0u;
  { uint32_t k=c->t; R(10)=R(9); if(k) goto L8c0294ce; }
  c->t=(int32_t)R(0)==43;
  if(c->t) goto L8c0294ce;
  {  goto L8c029534; }
L8c0294ce:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0xcu;
  { uint32_t tg=R(2); c->pr=0x8c0294dau; R(4)=R(11); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=R(13);
  R(5)=LD32(R(15)+12);
  c->t=(int32_t)R(0)==43;
  { uint32_t k=!c->t; R(2)=R(5)&0xFF; if(k) goto L8c0294ea; }
  R(10)=LD32(R(14));
  R(14)+=0xcu;
L8c0294ea:;
  R(3)=0x7u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c029532;
  R(2)=0x8c0439e0u;
  R(6)=R(15);
  R(4)=LD32(R(11)+4);
  { c->pr=0x8c0294fau; R(4)=LD32(R(4)); f_8c0439e0(c); }
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(12),R(0)); if(k) goto L8c029534; }
  R(0)=R(13);
  c->t=(int32_t)R(0)==43;
  if(!c->t) goto L8c029534;
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(15);
  { c->pr=0x8c029512u; R(4)+=0xcu; f_8c05e6ea(c); }
  R(3)=0x15u;
  R(7)=R(15);
  ST32(R(15)+24,R(3));
  R(5)=0x0u;
  R(6)=LD32(R(11)+4);
  R(7)+=0xcu;
  R(3)=0x8c0729f6u;
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { c->pr=0x8c029528u; R(4)=R(10); f_8c0729f6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c029534;
  { ST32(R(12),R(9)); goto L8c029534; }
L8c029532:;
  ST32(R(12),R(9));
L8c029534:;
  R(0)=R(14);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c029548(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  R(6)=0x8c0c76fcu;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c029564;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c029566; }
L8c029564:;
  ST32(R(15),R(4));
L8c029566:;
  R(3)=LD32(R(15)+4);
  R(6)=R(15);
  R(6)+=0xcu;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c029572u; R(5)=R(3); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(14)=LD32(R(15)+12);
  R(3)=LD32(R(15)+8);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(8)=R(3); if(k) goto L8c029592; }
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c029592;
  R(3)=0x8c044f2au;
  R(4)=LD32(R(14)+4);
  R(5)=LD32(R(15));
  { c->pr=0x8c02958eu; R(4)=LD32(R(4)+12); f_8c044f2a(c); }
  { R(2)=R(0)&0xFF; goto L8c029594; }
L8c029592:;
  R(2)=0x0u;
L8c029594:;
  ST32(R(8),R(2));
  R(0)=LD32(R(15)+4);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0295a2(SH4Ctx *c) {
  R(2)=0x8c0c509cu;
  R(3)=LD32(R(2));
  ST32(R(6),R(3));
  { R(0)=R(5); return; }
}
void f_8c0295ac(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c05bf24u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0295bau; R(4)=0x1u; f_8c05bf24(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c029600;
  R(3)=LD32(R(15)+4);
  { R(2)=0x1u; goto L8c029604; }
L8c029600:;
  R(3)=LD32(R(15)+4);
  R(2)=0x0u;
L8c029604:;
  ST32(R(3),R(2));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c029600(SH4Ctx *c) {
  R(3)=LD32(R(15)+4);
  R(2)=0x0u;
  ST32(R(3),R(2));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c029610(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c05bf24u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c02961eu; R(4)=0x2u; f_8c05bf24(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c029628;
  R(3)=LD32(R(15)+4);
  { R(2)=0x1u; goto L8c02962c; }
L8c029628:;
  R(3)=LD32(R(15)+4);
  R(2)=0x0u;
L8c02962c:;
  ST32(R(3),R(2));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c029638(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c05bf56u;
  ST32(R(15),R(5));
  { c->pr=0x8c029644u; ST32(R(15)+4,R(6)); f_8c05bf56(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02964e;
  R(3)=LD32(R(15)+4);
  { R(2)=0x1u; goto L8c029652; }
L8c02964e:;
  R(3)=LD32(R(15)+4);
  R(2)=0x0u;
L8c029652:;
  ST32(R(3),R(2));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c02965e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c05bf56u;
  ST32(R(15),R(5));
  { c->pr=0x8c02966au; ST32(R(15)+4,R(6)); f_8c05bf56(c); }
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c029674;
  R(3)=LD32(R(15)+4);
  { R(2)=0x1u; goto L8c029678; }
L8c029674:;
  R(3)=LD32(R(15)+4);
  R(2)=0x0u;
L8c029678:;
  ST32(R(3),R(2));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c029684(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c05c8b0u;
  ST32(R(15),R(5));
  { c->pr=0x8c029690u; ST32(R(15)+4,R(6)); f_8c05c8b0(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c02969e;
  R(3)=LD32(R(15)+4);
  R(4)=0x1u;
  { ST32(R(3),R(4)); goto L8c0296a4; }
L8c02969e:;
  R(2)=LD32(R(15)+4);
  R(4)=0x0u;
  ST32(R(2),R(4));
L8c0296a4:;
  R(2)=0x8c0c6830u;
  R(3)=0x8c0c6114u;
  ST32(R(3),R(4));
  ST32(R(2),R(4));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0296e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(12)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02970a;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c02970c; }
L8c02970a:;
  ST32(R(15),R(12));
L8c02970c:;
  R(11)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(11)=LD32(R(11)+4);
  R(6)+=0x8u;
  R(11)=LD32(R(11)+4);
  R(13)=LD32(R(11)+32);
  { uint32_t tg=R(3); c->pr=0x8c029720u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(1)=0xaeu;
  R(0)=LD32(R(15)+4);
  R(4)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c029736;
  R(1)=0xafu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029780;
  {  goto L8c02979e; }
L8c029736:;
  R(3)=LD32(R(14)+4);
  R(6)=R(15);
  R(4)+=0xffffffffu;
  R(5)=R(14);
  R(10)=0x1u;
  R(6)+=0x8u;
  R(10)=sh4_shad(R(10),R(4));
  { uint32_t tg=R(3); c->pr=0x8c029748u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(15)+8);
  R(14)=R(0);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c029754;
  { R(13)|=R(10); goto L8c029758; }
L8c029754:;
  R(10)=~R(10);
  R(13)&=R(10);
L8c029758:;
  R(4)=R(13);
  { ST32(R(11)+32,R(13)); goto L8c02979e; }
L8c029780:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  R(10)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c02978eu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=LD32(R(15)+8);
  R(3)=~R(10);
  R(13)&=R(3);
  R(14)=R(0);
  R(4)&=R(10);
  R(13)|=R(4);
  ST32(R(11)+32,R(13));
  R(4)=R(13);
L8c02979e:;
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c029780(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  R(10)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c02978eu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=LD32(R(15)+8);
  R(3)=~R(10);
  R(13)&=R(3);
  R(14)=R(0);
  R(4)&=R(10);
  R(13)|=R(4);
  ST32(R(11)+32,R(13));
  R(4)=R(13);
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0297b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(11)=R(5);
  R(11)+=0xfffffff4u;
  ST32(R(15),R(4));
  R(13)=R(5);
  R(3)=LD32(R(13)+4);
  R(6)=R(15);
  R(4)=0x0u;
  R(11)=LD32(R(11));
  R(6)+=0x4u;
  R(14)=R(4);
  R(10)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c0297dcu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0xf2u;
  c->t=R(11)==R(3);
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c029808; }
  R(1)=0x8c071ce0u;
  R(4)=R(15);
  { c->pr=0x8c0297ecu; R(4)+=0x4u; f_8c071ce0(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0297fa;
  R(2)=0x8c019e40u;
  { c->pr=0x8c0297f8u; R(4)=R(14); f_8c019e40(c); }
  R(10)=R(0);
L8c0297fa:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c029806u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
L8c029808:;
  R(1)=0xf2u;
  R(0)=R(11);
  R(4)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  R(12)=(uint32_t)(int32_t)(int16_t)R(4);
  R(8)=(uint32_t)(int32_t)(int16_t)R(4);
  { uint32_t k=c->t; R(9)=(uint32_t)(int32_t)(int16_t)R(10); if(k) goto L8c0298b2; }
  R(1)=0xefu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029860;
  R(1)=0xf0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029860;
  R(1)=0xf1u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02989a;
  {  goto L8c0298b2; }
L8c029860:;
  c->t=(int32_t)R(12)>=0;
  if(!c->t) goto L8c0298b2;
  R(10)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=(int32_t)R(12)>=(int32_t)R(10);
  if(c->t) goto L8c0298b2;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c029876u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(2)=0xefu;
  R(13)=R(0);
  R(3)=LD32(R(15)+4);
  c->t=R(11)==R(2);
  ST16(R(15),R(3));
  { uint32_t k=!c->t; R(14)+=R(8); if(k) goto L8c029894; }
  R(9)-=R(12);
  R(1)=0x8c068674u;
  R(6)=R(9);
  R(4)=R(14);
  R(6)+=0x1u;
  R(5)=R(14);
  { c->pr=0x8c029894u; R(4)+=0x1u; f_8c068674(c); }
L8c029894:;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  { ST8(R(14),R(3)); goto L8c0298b2; }
L8c02989a:;
  c->t=(int32_t)R(12)>=0;
  if(!c->t) goto L8c0298b2;
  c->t=(int32_t)R(12)>=(int32_t)R(9);
  if(c->t) goto L8c0298b2;
  R(14)+=R(8);
  R(3)=0x8c068674u;
  R(5)=R(14);
  R(6)=R(9);
  R(5)+=0x1u;
  R(6)-=R(12);
  { c->pr=0x8c0298b2u; R(4)=R(14); f_8c068674(c); }
L8c0298b2:;
  R(0)=R(13);
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
void f_8c029860(SH4Ctx *c) {
  c->t=(int32_t)R(12)>=0;
  if(!c->t) goto L8c0298b2;
  R(10)=(uint32_t)(int32_t)(int16_t)R(10);
  c->t=(int32_t)R(12)>=(int32_t)R(10);
  if(c->t) goto L8c0298b2;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c029876u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(2)=0xefu;
  R(13)=R(0);
  R(3)=LD32(R(15)+4);
  c->t=R(11)==R(2);
  ST16(R(15),R(3));
  { uint32_t k=!c->t; R(14)+=R(8); if(k) goto L8c029894; }
  R(9)-=R(12);
  R(1)=0x8c068674u;
  R(6)=R(9);
  R(4)=R(14);
  R(6)+=0x1u;
  R(5)=R(14);
  { c->pr=0x8c029894u; R(4)+=0x1u; f_8c068674(c); }
L8c029894:;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  { ST8(R(14),R(3)); goto L8c0298b2; }
L8c0298b2:;
  R(0)=R(13);
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
void f_8c0298c8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(14)=LD32(R(14)+4);
  { uint32_t tg=R(14); c->pr=0x8c0298deu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=R(15);
  R(14)=R(0);
  { c->pr=0x8c0298e8u; R(4)+=0x8u; f_8c071ce0(c); }
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  ST32(R(15)+4,R(0));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0298f6u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+20);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c029940;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c029942; }
L8c029940:;
  R(5)=LD32(R(15)+8);
L8c029942:;
  R(2)=0x8c0b96a8u;
  R(3)=0x8c06874cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02994eu; R(4)=LD32(R(15)+12); f_8c06874c(c); }
  R(0)=LD32(R(15)+8);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c029940(SH4Ctx *c) {
  R(5)=LD32(R(15)+8);
  R(2)=0x8c0b96a8u;
  R(3)=0x8c06874cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02994eu; R(4)=LD32(R(15)+12); f_8c06874c(c); }
  R(0)=LD32(R(15)+8);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c029958(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  R(10)=R(12);
  R(13)=R(4);
  R(10)+=0xfffffff4u;
  ST32(R(15),R(13));
  R(4)=LD32(R(5));
  R(10)=LD32(R(10));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(11)=0xffffffffu; if(k) goto L8c029988; }
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c02998a; }
L8c029988:;
  ST32(R(15),R(13));
L8c02998a:;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(14)=LD32(R(14)+4);
  R(6)+=0x4u;
  R(14)=LD32(R(14)+20);
  { uint32_t tg=R(3); c->pr=0x8c02999cu; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(9)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0299acu; R(4)=R(13); sh4_call(c,tg); }
  R(1)=0xe8u;
  R(12)=R(0);
  R(0)=R(10);
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a12;
  R(1)=0xe9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a00;
  R(1)=0xeau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a00;
  {  goto L8c029aae; }
L8c029a00:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x4u;
  R(11)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c029a10u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
L8c029a12:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c029aae;
  R(2)=0x8c047ceeu;
  R(8)=R(9)&0xFF;
  { c->pr=0x8c029a1eu; R(4)=R(14); f_8c047cee(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(8)>=(int32_t)R(0);
  if(!c->t) goto L8c029aae;
  R(2)=0x8c047dbcu;
  R(5)=R(9);
  { c->pr=0x8c029a2cu; R(4)=R(14); f_8c047dbc(c); }
  R(1)=0xe8u;
  R(0)=R(10);
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a44;
  R(1)=0xe9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a52;
  R(1)=0xeau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a62;
  {  goto L8c029aae; }
L8c029a44:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(3)=0x8c047dc2u;
  R(5)=R(0);
  { c->pr=0x8c029a4eu; R(4)=R(14); f_8c047dc2(c); }
  {  goto L8c029aae; }
L8c029a52:;
  R(3)=0x8c047e00u;
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0x4u;
  { c->pr=0x8c029a5eu; R(4)=R(14); f_8c047e00(c); }
  {  goto L8c029aae; }
L8c029a62:;
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(11); if(k) goto L8c029aa0; }
  R(0)=0x4u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c029aa8; }
L8c029aa0:;
  R(3)=LD32(R(15)+4);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c029aa8:;
  R(2)=0x8c047e2cu;
  { c->pr=0x8c029aaeu; R(4)=R(14); f_8c047e2c(c); }
L8c029aae:;
  R(0)=R(12);
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
void f_8c029a00(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x4u;
  R(11)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c029a10u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c029aae;
  R(2)=0x8c047ceeu;
  R(8)=R(9)&0xFF;
  { c->pr=0x8c029a1eu; R(4)=R(14); f_8c047cee(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(8)>=(int32_t)R(0);
  if(!c->t) goto L8c029aae;
  R(2)=0x8c047dbcu;
  R(5)=R(9);
  { c->pr=0x8c029a2cu; R(4)=R(14); f_8c047dbc(c); }
  R(1)=0xe8u;
  R(0)=R(10);
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a44;
  R(1)=0xe9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a52;
  R(1)=0xeau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029a62;
  {  goto L8c029aae; }
L8c029a44:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(3)=0x8c047dc2u;
  R(5)=R(0);
  { c->pr=0x8c029a4eu; R(4)=R(14); f_8c047dc2(c); }
  {  goto L8c029aae; }
L8c029a52:;
  R(3)=0x8c047e00u;
  R(6)=R(15);
  R(5)=R(11);
  R(6)+=0x4u;
  { c->pr=0x8c029a5eu; R(4)=R(14); f_8c047e00(c); }
  {  goto L8c029aae; }
L8c029a62:;
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(5)=R(11); if(k) goto L8c029aa0; }
  R(0)=0x4u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c029aa8; }
L8c029aa0:;
  R(3)=LD32(R(15)+4);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c029aa8:;
  R(2)=0x8c047e2cu;
  { c->pr=0x8c029aaeu; R(4)=R(14); f_8c047e2c(c); }
L8c029aae:;
  R(0)=R(12);
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
void f_8c029aa0(SH4Ctx *c) {
  R(3)=LD32(R(15)+4);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
  R(2)=0x8c047e2cu;
  { c->pr=0x8c029aaeu; R(4)=R(14); f_8c047e2c(c); }
  R(0)=R(12);
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
void f_8c029ac4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(7);
  R(3)=0x8c064b7eu;
  R(14)=R(4);
  ST32(R(15),R(5));
  ST8(R(15)+4,R(0));
  { c->pr=0x8c029ad8u; R(4)=R(14); f_8c064b7e(c); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c029b02;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c029b02;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c029b02;
  R(3)=0x8c04a8b8u;
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c029af4u; R(4)=LD32(R(4)+8); f_8c04a8b8(c); }
  R(5)=LD32(R(15));
  R(4)=R(0);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c08fe60u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c08fe60(c); return; } }
L8c029b02:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c029b40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff80u;
  R(6)=0x8c0c76fcu;
  R(11)=R(5);
  R(13)=R(5);
  R(14)=R(4);
  R(11)+=0xfffffff4u;
  R(12)=0xffu;
  R(11)=LD32(R(11));
  R(4)=0x0u;
  ST32(R(15),R(14));
  R(10)=R(4);
  R(5)=LD32(R(6));
  R(8)=R(4);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(9)=0x1u; if(k) goto L8c029b76; }
  ST32(R(15),R(5));
  { ST32(R(6),R(4)); goto L8c029b78; }
L8c029b76:;
  ST32(R(15),R(14));
L8c029b78:;
  R(1)=0xe5u;
  R(0)=R(11);
  R(3)=LD32(R(15));
  c->t=R(0)==R(1);
  ST32(R(15)+8,R(3));
  if(c->t) goto L8c029ba2;
  R(1)=0xe6u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c029ba2;
  R(1)=0xabu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c029b94;
  {  goto L8c029c5e; }
L8c029b94:;
  R(1)=0xacu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c029b9e;
  {  goto L8c029c5e; }
L8c029b9e:;
  {  goto L8c02a5a6; }
L8c029ba2:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c029baeu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x70u;
  R(12)=LD32(R(15)+R(0));
  R(2)=0xffu;
  R(3)=R(12)&0xFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c029c00;
  R(1)=0x8c072fa2u;
  { c->pr=0x8c029bc2u; R(4)=R(13); f_8c072fa2(c); }
  {  goto L8c02a5a8; }
L8c029c00:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(10)=LD32(R(4)+R(0));
  c->t=(R(10)&R(10))==0;
  { uint32_t k=c->t; R(5)=R(12)&0xFF; if(k) goto L8c029c40; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(10);
  { R(4)=LD32(R(4)); goto L8c029c42; }
L8c029c40:;
  R(4)=0x0u;
L8c029c42:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  R(10)=R(4);
  { uint32_t tg=R(2); c->pr=0x8c029c50u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0xe6u;
  R(13)=R(0);
  R(0)=0x70u;
  c->t=R(11)==R(3);
  R(9)=LD32(R(15)+R(0));
  R(0)=c->t;
  R(8)|=R(0);
L8c029c5e:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c029c6au; R(4)=R(14); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x70u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(13)=R(0);
  R(0)=LD32(R(2)+4);
  R(6)=R(15);
  ST32(R(3),R(1));
  R(5)=R(13);
  ST32(R(3)+4,R(0));
  R(6)+=0x70u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c029c8cu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x70u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(13)=R(0);
  R(0)=LD32(R(2)+4);
  R(6)=R(15);
  ST32(R(3),R(1));
  R(5)=R(13);
  ST32(R(3)+4,R(0));
  R(6)+=0x70u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c029caeu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x70u;
  R(3)=0xacu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=R(11)==R(3);
  ST8(R(15)+12,R(0));
  R(0)=c->t;
  R(8)|=R(0);
  R(2)=R(8)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c029ce6;
  R(6)=R(15);
  R(1)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  { uint32_t tg=R(1); c->pr=0x8c029cd0u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x70u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x4cu;
  R(13)=R(0);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
L8c029ce6:;
  R(3)=0xffu;
  R(12)=R(12)&0xFF;
  R(2)=R(12);
  R(11)=0x8c014f10u;
  c->t=R(2)==R(3);
  { uint32_t k=c->t; ST32(R(15)+4,R(12)); if(k) goto L8c029d1c; }
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c029d16;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x64u;
  R(14)=LD32(R(14)+36);
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c029d0au; R(4)+=0x64u; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(14);
  R(6)+=0x58u;
  { uint32_t tg=R(11); c->pr=0x8c029d16u; R(4)+=0x58u; sh4_call(c,tg); }
L8c029d16:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c029d1c;
  ST32(R(15),R(10));
L8c029d1c:;
  R(3)=R(8)&0xFF;
  R(12)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=LD32(R(12)+36); if(k) goto L8c029d32; }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x4cu;
  { uint32_t tg=R(11); c->pr=0x8c029d32u; R(4)+=0x40u; sh4_call(c,tg); }
L8c029d32:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x34u;
  R(7)+=0x1cu;
  R(6)+=0x28u;
  { c->pr=0x8c029d44u; R(4)=R(12); f_8c015e64(c); }
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  fp_cmp(c,0,1,3);
  R(10)=R(0);
  { uint32_t k=!c->t; R(10)=R(10)&0xFF; if(k) goto L8c029dee; }
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029dee;
  R(0)=0x6cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029dee;
  R(0)=R(10);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c029daa;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c029daa;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029dc0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c029dc0;
  c->t=(int32_t)R(0)==4;
  {  goto L8c029da0; }
L8c029da0:;
  if(c->t) goto L8c029dd8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c029dd8;
  {  goto L8c029e50; }
L8c029daa:;
  R(3)=R(15);
  R(3)+=0x28u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x64u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c029e50; }
L8c029dc0:;
  R(2)=R(15);
  R(2)+=0x1cu;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c029e50; }
L8c029dd8:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(3)+8,R(1)); goto L8c029e50; }
L8c029dee:;
  R(0)=0x68u;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  c->t=(R(10)&R(10))==0;
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,4,3);
  { uint32_t k=c->t; fp_st(c,4,R(0)+R(15)); if(k) goto L8c029e32; }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c029e50;
L8c029e32:;
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c029e50:;
  R(0)=0x58u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c029ece;
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029ece;
  R(0)=0x60u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029ece;
  R(0)=R(10);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c029e8a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c029e8a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c029ea0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c029ea0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029eb8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c029eb8;
  {  goto L8c029f32; }
L8c029e8a:;
  R(3)=R(15);
  R(3)+=0x1cu;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x58u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c029f32; }
L8c029ea0:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c029f32; }
L8c029eb8:;
  R(2)=R(15);
  R(2)+=0x28u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(3)+8,R(1)); goto L8c029f32; }
L8c029ece:;
  R(0)=0x5cu;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,2,4);
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
  R(0)=R(10);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029f14;
  R(0)=R(10);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c029f32;
L8c029f14:;
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c029f32:;
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,2,5,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=R(10);
  c->t=(int32_t)R(0)==5;
  { uint32_t k=c->t; fp_arith(c,2,4,3); if(k) goto L8c029f78; }
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c029f54;
  {  goto L8c02a054; }
L8c029f54:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c029f5c;
  {  goto L8c02a130; }
L8c029f5c:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c029f64;
  {  goto L8c02a20c; }
L8c029f64:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c029f6c;
  {  goto L8c02a2f0; }
L8c029f6c:;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c029f74;
  {  goto L8c02a3d4; }
L8c029f74:;
  {  goto L8c02a4b6; }
L8c029f78:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029fce;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029fce;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a00c;
L8c029fce:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a00c:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a2e6; }
L8c02a054:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a0aa;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a0aa;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a0e8;
L8c02a0aa:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a0e8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a4ae; }
L8c02a130:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a186;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a186;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a1c4;
L8c02a186:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a1c4:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a3ca; }
L8c02a20c:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a262;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a262;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a2a0;
L8c02a262:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a2a0:;
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
L8c02a2e6:;
  fp_arith(c,2,1,3);
  R(0)=0x30u;
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c02a4b6; }
L8c02a2f0:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a346;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a346;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a384;
L8c02a346:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a384:;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
L8c02a3ca:;
  fp_arith(c,2,1,3);
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c02a4b6; }
L8c02a3d4:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a42a;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a42a;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a468;
L8c02a42a:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a468:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
L8c02a4ae:;
  fp_arith(c,2,1,3);
  R(0)=0x24u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
L8c02a4b6:;
  R(2)=0x2u;
  R(14)=0x8c015c9cu;
  c->t=(int32_t)R(10)>=(int32_t)R(2);
  if(c->t) goto L8c02a4d2;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x34u;
  R(7)+=0x1cu;
  R(6)+=0x64u;
  { uint32_t tg=R(14); c->pr=0x8c02a4ceu; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c02a530; }
L8c02a4d2:;
  R(3)=0x4u;
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c02a520; }
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x28u;
  R(7)+=0x64u;
  { R(5)+=0x34u; goto L8c02a52c; }
L8c02a520:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x64u;
  R(7)+=0x1cu;
  R(6)+=0x28u;
L8c02a52c:;
  { uint32_t tg=R(14); c->pr=0x8c02a530u;  sh4_call(c,tg); }
L8c02a530:;
  R(2)=R(8)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02a576;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x4cu;
  { uint32_t tg=R(11); c->pr=0x8c02a542u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x40u;
  { c->pr=0x8c02a552u; R(4)+=0x40u; f_8c05e612(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a55cu; R(4)=R(12); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x40u;
  R(5)+=0x4cu;
  { c->pr=0x8c02a56cu; R(4)+=0x4cu; f_8c05e5f4(c); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a576u; R(4)=R(12); f_8c01638a(c); }
L8c02a576:;
  R(2)=LD32(R(15)+4);
  R(8)=R(8)&0xFF;
  R(3)=0xffu;
  c->t=R(2)==R(3);
  R(7)=c->t;
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) goto L8c02a58c; }
  R(6)=R(15);
  { R(6)+=0x4cu; goto L8c02a58e; }
L8c02a58c:;
  R(6)=0x0u;
L8c02a58e:;
  { c->pr=0x8c02a592u; R(4)=LD32(R(15)); f_8c029ac4(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0xffu;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02a5a6;
  R(4)=LD32(R(15)+8);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02a5a6:;
  R(0)=R(13);
L8c02a5a8:;
  R(1)=0x80u;
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
void f_8c029c00(SH4Ctx *c) {
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(10)=LD32(R(4)+R(0));
  c->t=(R(10)&R(10))==0;
  { uint32_t k=c->t; R(5)=R(12)&0xFF; if(k) goto L8c029c40; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(10);
  { R(4)=LD32(R(4)); goto L8c029c42; }
L8c029c40:;
  R(4)=0x0u;
L8c029c42:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  R(10)=R(4);
  { uint32_t tg=R(2); c->pr=0x8c029c50u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0xe6u;
  R(13)=R(0);
  R(0)=0x70u;
  c->t=R(11)==R(3);
  R(9)=LD32(R(15)+R(0));
  R(0)=c->t;
  R(8)|=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c029c6au; R(4)=R(14); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x70u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(13)=R(0);
  R(0)=LD32(R(2)+4);
  R(6)=R(15);
  ST32(R(3),R(1));
  R(5)=R(13);
  ST32(R(3)+4,R(0));
  R(6)+=0x70u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c029c8cu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x70u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(13)=R(0);
  R(0)=LD32(R(2)+4);
  R(6)=R(15);
  ST32(R(3),R(1));
  R(5)=R(13);
  ST32(R(3)+4,R(0));
  R(6)+=0x70u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c029caeu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x70u;
  R(3)=0xacu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=R(11)==R(3);
  ST8(R(15)+12,R(0));
  R(0)=c->t;
  R(8)|=R(0);
  R(2)=R(8)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c029ce6;
  R(6)=R(15);
  R(1)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  { uint32_t tg=R(1); c->pr=0x8c029cd0u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x70u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x4cu;
  R(13)=R(0);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
L8c029ce6:;
  R(3)=0xffu;
  R(12)=R(12)&0xFF;
  R(2)=R(12);
  R(11)=0x8c014f10u;
  c->t=R(2)==R(3);
  { uint32_t k=c->t; ST32(R(15)+4,R(12)); if(k) goto L8c029d1c; }
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c029d16;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x64u;
  R(14)=LD32(R(14)+36);
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c029d0au; R(4)+=0x64u; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(14);
  R(6)+=0x58u;
  { uint32_t tg=R(11); c->pr=0x8c029d16u; R(4)+=0x58u; sh4_call(c,tg); }
L8c029d16:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c029d1c;
  ST32(R(15),R(10));
L8c029d1c:;
  R(3)=R(8)&0xFF;
  R(12)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=LD32(R(12)+36); if(k) goto L8c029d32; }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x4cu;
  { uint32_t tg=R(11); c->pr=0x8c029d32u; R(4)+=0x40u; sh4_call(c,tg); }
L8c029d32:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x34u;
  R(7)+=0x1cu;
  R(6)+=0x28u;
  { c->pr=0x8c029d44u; R(4)=R(12); f_8c015e64(c); }
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  fp_cmp(c,0,1,3);
  R(10)=R(0);
  { uint32_t k=!c->t; R(10)=R(10)&0xFF; if(k) goto L8c029dee; }
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029dee;
  R(0)=0x6cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029dee;
  R(0)=R(10);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c029daa;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c029daa;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029dc0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c029dc0;
  c->t=(int32_t)R(0)==4;
  {  goto L8c029da0; }
L8c029da0:;
  if(c->t) goto L8c029dd8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c029dd8;
  {  goto L8c029e50; }
L8c029daa:;
  R(3)=R(15);
  R(3)+=0x28u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x64u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c029e50; }
L8c029dc0:;
  R(2)=R(15);
  R(2)+=0x1cu;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c029e50; }
L8c029dd8:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(3)+8,R(1)); goto L8c029e50; }
L8c029dee:;
  R(0)=0x68u;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  c->t=(R(10)&R(10))==0;
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,4,3);
  { uint32_t k=c->t; fp_st(c,4,R(0)+R(15)); if(k) goto L8c029e32; }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c029e50;
L8c029e32:;
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c029e50:;
  R(0)=0x58u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c029ece;
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029ece;
  R(0)=0x60u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029ece;
  R(0)=R(10);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c029e8a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c029e8a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c029ea0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c029ea0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029eb8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c029eb8;
  {  goto L8c029f32; }
L8c029e8a:;
  R(3)=R(15);
  R(3)+=0x1cu;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x58u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c029f32; }
L8c029ea0:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c029f32; }
L8c029eb8:;
  R(2)=R(15);
  R(2)+=0x28u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(3)+8,R(1)); goto L8c029f32; }
L8c029ece:;
  R(0)=0x5cu;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,2,4);
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
  R(0)=R(10);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029f14;
  R(0)=R(10);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c029f32;
L8c029f14:;
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c029f32:;
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,2,5,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=R(10);
  c->t=(int32_t)R(0)==5;
  { uint32_t k=c->t; fp_arith(c,2,4,3); if(k) goto L8c029f78; }
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c029f54;
  {  goto L8c02a054; }
L8c029f54:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c029f5c;
  {  goto L8c02a130; }
L8c029f5c:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c029f64;
  {  goto L8c02a20c; }
L8c029f64:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c029f6c;
  {  goto L8c02a2f0; }
L8c029f6c:;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c029f74;
  {  goto L8c02a3d4; }
L8c029f74:;
  {  goto L8c02a4b6; }
L8c029f78:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029fce;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029fce;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a00c;
L8c029fce:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a00c:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a2e6; }
L8c02a054:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a0aa;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a0aa;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a0e8;
L8c02a0aa:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a0e8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a4ae; }
L8c02a130:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a186;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a186;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a1c4;
L8c02a186:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a1c4:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a3ca; }
L8c02a20c:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a262;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a262;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a2a0;
L8c02a262:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a2a0:;
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
L8c02a2e6:;
  fp_arith(c,2,1,3);
  R(0)=0x30u;
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c02a4b6; }
L8c02a2f0:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a346;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a346;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a384;
L8c02a346:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a384:;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
L8c02a3ca:;
  fp_arith(c,2,1,3);
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c02a4b6; }
L8c02a3d4:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a42a;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a42a;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a468;
L8c02a42a:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a468:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
L8c02a4ae:;
  fp_arith(c,2,1,3);
  R(0)=0x24u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
L8c02a4b6:;
  R(2)=0x2u;
  R(14)=0x8c015c9cu;
  c->t=(int32_t)R(10)>=(int32_t)R(2);
  if(c->t) goto L8c02a4d2;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x34u;
  R(7)+=0x1cu;
  R(6)+=0x64u;
  { uint32_t tg=R(14); c->pr=0x8c02a4ceu; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c02a530; }
L8c02a4d2:;
  R(3)=0x4u;
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c02a520; }
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x28u;
  R(7)+=0x64u;
  { R(5)+=0x34u; goto L8c02a52c; }
L8c02a520:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x64u;
  R(7)+=0x1cu;
  R(6)+=0x28u;
L8c02a52c:;
  { uint32_t tg=R(14); c->pr=0x8c02a530u;  sh4_call(c,tg); }
L8c02a530:;
  R(2)=R(8)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02a576;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x4cu;
  { uint32_t tg=R(11); c->pr=0x8c02a542u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x40u;
  { c->pr=0x8c02a552u; R(4)+=0x40u; f_8c05e612(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a55cu; R(4)=R(12); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x40u;
  R(5)+=0x4cu;
  { c->pr=0x8c02a56cu; R(4)+=0x4cu; f_8c05e5f4(c); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a576u; R(4)=R(12); f_8c01638a(c); }
L8c02a576:;
  R(2)=LD32(R(15)+4);
  R(8)=R(8)&0xFF;
  R(3)=0xffu;
  c->t=R(2)==R(3);
  R(7)=c->t;
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) goto L8c02a58c; }
  R(6)=R(15);
  { R(6)+=0x4cu; goto L8c02a58e; }
L8c02a58c:;
  R(6)=0x0u;
L8c02a58e:;
  { c->pr=0x8c02a592u; R(4)=LD32(R(15)); f_8c029ac4(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0xffu;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02a5a6;
  R(4)=LD32(R(15)+8);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02a5a6:;
  R(0)=R(13);
  R(1)=0x80u;
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
void f_8c029c40(SH4Ctx *c) {
  R(4)=0x0u;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  R(10)=R(4);
  { uint32_t tg=R(2); c->pr=0x8c029c50u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0xe6u;
  R(13)=R(0);
  R(0)=0x70u;
  c->t=R(11)==R(3);
  R(9)=LD32(R(15)+R(0));
  R(0)=c->t;
  R(8)|=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c029c6au; R(4)=R(14); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x70u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(13)=R(0);
  R(0)=LD32(R(2)+4);
  R(6)=R(15);
  ST32(R(3),R(1));
  R(5)=R(13);
  ST32(R(3)+4,R(0));
  R(6)+=0x70u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c029c8cu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x70u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(13)=R(0);
  R(0)=LD32(R(2)+4);
  R(6)=R(15);
  ST32(R(3),R(1));
  R(5)=R(13);
  ST32(R(3)+4,R(0));
  R(6)+=0x70u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c029caeu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x70u;
  R(3)=0xacu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=R(11)==R(3);
  ST8(R(15)+12,R(0));
  R(0)=c->t;
  R(8)|=R(0);
  R(2)=R(8)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c029ce6;
  R(6)=R(15);
  R(1)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x70u;
  { uint32_t tg=R(1); c->pr=0x8c029cd0u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x70u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x4cu;
  R(13)=R(0);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
L8c029ce6:;
  R(3)=0xffu;
  R(12)=R(12)&0xFF;
  R(2)=R(12);
  R(11)=0x8c014f10u;
  c->t=R(2)==R(3);
  { uint32_t k=c->t; ST32(R(15)+4,R(12)); if(k) goto L8c029d1c; }
  R(9)=R(9)&0xFF;
  c->t=(R(9)&R(9))==0;
  if(!c->t) goto L8c029d16;
  R(14)=LD32(R(15));
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x64u;
  R(14)=LD32(R(14)+36);
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c029d0au; R(4)+=0x64u; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(14);
  R(6)+=0x58u;
  { uint32_t tg=R(11); c->pr=0x8c029d16u; R(4)+=0x58u; sh4_call(c,tg); }
L8c029d16:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c029d1c;
  ST32(R(15),R(10));
L8c029d1c:;
  R(3)=R(8)&0xFF;
  R(12)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=LD32(R(12)+36); if(k) goto L8c029d32; }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x4cu;
  { uint32_t tg=R(11); c->pr=0x8c029d32u; R(4)+=0x40u; sh4_call(c,tg); }
L8c029d32:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x34u;
  R(7)+=0x1cu;
  R(6)+=0x28u;
  { c->pr=0x8c029d44u; R(4)=R(12); f_8c015e64(c); }
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  fp_cmp(c,0,1,3);
  R(10)=R(0);
  { uint32_t k=!c->t; R(10)=R(10)&0xFF; if(k) goto L8c029dee; }
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029dee;
  R(0)=0x6cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029dee;
  R(0)=R(10);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c029daa;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c029daa;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029dc0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c029dc0;
  c->t=(int32_t)R(0)==4;
  {  goto L8c029da0; }
L8c029da0:;
  if(c->t) goto L8c029dd8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c029dd8;
  {  goto L8c029e50; }
L8c029daa:;
  R(3)=R(15);
  R(3)+=0x28u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x64u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c029e50; }
L8c029dc0:;
  R(2)=R(15);
  R(2)+=0x1cu;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c029e50; }
L8c029dd8:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(3)+8,R(1)); goto L8c029e50; }
L8c029dee:;
  R(0)=0x68u;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  c->t=(R(10)&R(10))==0;
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,4,3);
  { uint32_t k=c->t; fp_st(c,4,R(0)+R(15)); if(k) goto L8c029e32; }
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c029e50;
L8c029e32:;
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c029e50:;
  R(0)=0x58u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c029ece;
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029ece;
  R(0)=0x60u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029ece;
  R(0)=R(10);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c029e8a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c029e8a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c029ea0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c029ea0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029eb8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c029eb8;
  {  goto L8c029f32; }
L8c029e8a:;
  R(3)=R(15);
  R(3)+=0x1cu;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x58u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c029f32; }
L8c029ea0:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c029f32; }
L8c029eb8:;
  R(2)=R(15);
  R(2)+=0x28u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(3)+8,R(1)); goto L8c029f32; }
L8c029ece:;
  R(0)=0x5cu;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,2,4);
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
  R(0)=R(10);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029f14;
  R(0)=R(10);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c029f32;
L8c029f14:;
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c029f32:;
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,2,5,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=R(10);
  c->t=(int32_t)R(0)==5;
  { uint32_t k=c->t; fp_arith(c,2,4,3); if(k) goto L8c029f78; }
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c029f54;
  {  goto L8c02a054; }
L8c029f54:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c029f5c;
  {  goto L8c02a130; }
L8c029f5c:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c029f64;
  {  goto L8c02a20c; }
L8c029f64:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c029f6c;
  {  goto L8c02a2f0; }
L8c029f6c:;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c029f74;
  {  goto L8c02a3d4; }
L8c029f74:;
  {  goto L8c02a4b6; }
L8c029f78:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029fce;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029fce;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a00c;
L8c029fce:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a00c:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a2e6; }
L8c02a054:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a0aa;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a0aa;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a0e8;
L8c02a0aa:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a0e8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a4ae; }
L8c02a130:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a186;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a186;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a1c4;
L8c02a186:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a1c4:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a3ca; }
L8c02a20c:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a262;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a262;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a2a0;
L8c02a262:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a2a0:;
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
L8c02a2e6:;
  fp_arith(c,2,1,3);
  R(0)=0x30u;
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c02a4b6; }
L8c02a2f0:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a346;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a346;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a384;
L8c02a346:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a384:;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
L8c02a3ca:;
  fp_arith(c,2,1,3);
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c02a4b6; }
L8c02a3d4:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a42a;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a42a;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a468;
L8c02a42a:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a468:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
L8c02a4ae:;
  fp_arith(c,2,1,3);
  R(0)=0x24u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
L8c02a4b6:;
  R(2)=0x2u;
  R(14)=0x8c015c9cu;
  c->t=(int32_t)R(10)>=(int32_t)R(2);
  if(c->t) goto L8c02a4d2;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x34u;
  R(7)+=0x1cu;
  R(6)+=0x64u;
  { uint32_t tg=R(14); c->pr=0x8c02a4ceu; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c02a530; }
L8c02a4d2:;
  R(3)=0x4u;
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c02a520; }
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x28u;
  R(7)+=0x64u;
  { R(5)+=0x34u; goto L8c02a52c; }
L8c02a520:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x64u;
  R(7)+=0x1cu;
  R(6)+=0x28u;
L8c02a52c:;
  { uint32_t tg=R(14); c->pr=0x8c02a530u;  sh4_call(c,tg); }
L8c02a530:;
  R(2)=R(8)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02a576;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x4cu;
  { uint32_t tg=R(11); c->pr=0x8c02a542u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x40u;
  { c->pr=0x8c02a552u; R(4)+=0x40u; f_8c05e612(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a55cu; R(4)=R(12); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x40u;
  R(5)+=0x4cu;
  { c->pr=0x8c02a56cu; R(4)+=0x4cu; f_8c05e5f4(c); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a576u; R(4)=R(12); f_8c01638a(c); }
L8c02a576:;
  R(2)=LD32(R(15)+4);
  R(8)=R(8)&0xFF;
  R(3)=0xffu;
  c->t=R(2)==R(3);
  R(7)=c->t;
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) goto L8c02a58c; }
  R(6)=R(15);
  { R(6)+=0x4cu; goto L8c02a58e; }
L8c02a58c:;
  R(6)=0x0u;
L8c02a58e:;
  { c->pr=0x8c02a592u; R(4)=LD32(R(15)); f_8c029ac4(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0xffu;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02a5a6;
  R(4)=LD32(R(15)+8);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02a5a6:;
  R(0)=R(13);
  R(1)=0x80u;
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
void f_8c029da0(SH4Ctx *c) {
  if(c->t) goto L8c029dd8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c029dd8;
  {  goto L8c029e50; }
L8c029dd8:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x64u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(3)+8,R(1)); goto L8c029e50; }
L8c029e50:;
  R(0)=0x58u;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c029ece;
  R(0)=0x5cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029ece;
  R(0)=0x60u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029ece;
  R(0)=R(10);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c029e8a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c029e8a;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c029ea0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c029ea0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029eb8;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c029eb8;
  {  goto L8c029f32; }
L8c029e8a:;
  R(3)=R(15);
  R(3)+=0x1cu;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x58u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c029f32; }
L8c029ea0:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c029f32; }
L8c029eb8:;
  R(2)=R(15);
  R(2)+=0x28u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x58u;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(3)+8,R(1)); goto L8c029f32; }
L8c029ece:;
  R(0)=0x5cu;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,2,4);
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
  R(0)=R(10);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c029f14;
  R(0)=R(10);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c029f32;
L8c029f14:;
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c029f32:;
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,2,5,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=R(10);
  c->t=(int32_t)R(0)==5;
  { uint32_t k=c->t; fp_arith(c,2,4,3); if(k) goto L8c029f78; }
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c029f54;
  {  goto L8c02a054; }
L8c029f54:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c029f5c;
  {  goto L8c02a130; }
L8c029f5c:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c029f64;
  {  goto L8c02a20c; }
L8c029f64:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c029f6c;
  {  goto L8c02a2f0; }
L8c029f6c:;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c029f74;
  {  goto L8c02a3d4; }
L8c029f74:;
  {  goto L8c02a4b6; }
L8c029f78:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029fce;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c029fce;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a00c;
L8c029fce:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a00c:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a2e6; }
L8c02a054:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a0aa;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a0aa;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a0e8;
L8c02a0aa:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a0e8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a4ae; }
L8c02a130:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a186;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a186;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a1c4;
L8c02a186:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a1c4:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  { fp_ld(c,1,R(0)+R(15)); goto L8c02a3ca; }
L8c02a20c:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a262;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a262;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a2a0;
L8c02a262:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a2a0:;
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
L8c02a2e6:;
  fp_arith(c,2,1,3);
  R(0)=0x30u;
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c02a4b6; }
L8c02a2f0:;
  fp_arith(c,1,4,5);
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a346;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a346;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a384;
L8c02a346:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a384:;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
L8c02a3ca:;
  fp_arith(c,2,1,3);
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  { fp_st(c,2,R(0)+R(15)); goto L8c02a4b6; }
L8c02a3d4:;
  fp_arith(c,1,5,4);
  R(0)=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a42a;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a42a;
  R(0)=0x18u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c02a468;
L8c02a42a:;
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02a468:;
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
L8c02a4ae:;
  fp_arith(c,2,1,3);
  R(0)=0x24u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
L8c02a4b6:;
  R(2)=0x2u;
  R(14)=0x8c015c9cu;
  c->t=(int32_t)R(10)>=(int32_t)R(2);
  if(c->t) goto L8c02a4d2;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x34u;
  R(7)+=0x1cu;
  R(6)+=0x64u;
  { uint32_t tg=R(14); c->pr=0x8c02a4ceu; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c02a530; }
L8c02a4d2:;
  R(3)=0x4u;
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c02a520; }
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x28u;
  R(7)+=0x64u;
  { R(5)+=0x34u; goto L8c02a52c; }
L8c02a520:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x64u;
  R(7)+=0x1cu;
  R(6)+=0x28u;
L8c02a52c:;
  { uint32_t tg=R(14); c->pr=0x8c02a530u;  sh4_call(c,tg); }
L8c02a530:;
  R(2)=R(8)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02a576;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x4cu;
  { uint32_t tg=R(11); c->pr=0x8c02a542u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x40u;
  { c->pr=0x8c02a552u; R(4)+=0x40u; f_8c05e612(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a55cu; R(4)=R(12); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x40u;
  R(5)+=0x4cu;
  { c->pr=0x8c02a56cu; R(4)+=0x4cu; f_8c05e5f4(c); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a576u; R(4)=R(12); f_8c01638a(c); }
L8c02a576:;
  R(2)=LD32(R(15)+4);
  R(8)=R(8)&0xFF;
  R(3)=0xffu;
  c->t=R(2)==R(3);
  R(7)=c->t;
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) goto L8c02a58c; }
  R(6)=R(15);
  { R(6)+=0x4cu; goto L8c02a58e; }
L8c02a58c:;
  R(6)=0x0u;
L8c02a58e:;
  { c->pr=0x8c02a592u; R(4)=LD32(R(15)); f_8c029ac4(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0xffu;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02a5a6;
  R(4)=LD32(R(15)+8);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02a5a6:;
  R(0)=R(13);
  R(1)=0x80u;
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
void f_8c02a520(SH4Ctx *c) {
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x64u;
  R(7)+=0x1cu;
  R(6)+=0x28u;
  { uint32_t tg=R(14); c->pr=0x8c02a530u;  sh4_call(c,tg); }
  R(2)=R(8)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02a576;
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(12);
  R(6)+=0x4cu;
  { uint32_t tg=R(11); c->pr=0x8c02a542u; R(4)+=0x10u; sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x40u;
  { c->pr=0x8c02a552u; R(4)+=0x40u; f_8c05e612(c); }
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a55cu; R(4)=R(12); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x40u;
  R(5)+=0x4cu;
  { c->pr=0x8c02a56cu; R(4)+=0x4cu; f_8c05e5f4(c); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x4cu;
  { c->pr=0x8c02a576u; R(4)=R(12); f_8c01638a(c); }
L8c02a576:;
  R(2)=LD32(R(15)+4);
  R(8)=R(8)&0xFF;
  R(3)=0xffu;
  c->t=R(2)==R(3);
  R(7)=c->t;
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) goto L8c02a58c; }
  R(6)=R(15);
  { R(6)+=0x4cu; goto L8c02a58e; }
L8c02a58c:;
  R(6)=0x0u;
L8c02a58e:;
  { c->pr=0x8c02a592u; R(4)=LD32(R(15)); f_8c029ac4(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0xffu;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02a5a6;
  R(4)=LD32(R(15)+8);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02a5a6:;
  R(0)=R(13);
  R(1)=0x80u;
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
void f_8c02a5be(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb0u;
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02a600;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c02a602; }
L8c02a600:;
  ST32(R(15),R(4));
L8c02a602:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x40u;
  { uint32_t tg=R(3); c->pr=0x8c02a60cu; R(5)=R(14); sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x40u;
  ST32(R(15)+24,R(0));
  R(2)=R(15);
  R(1)=LD32(R(3));
  R(2)+=0x34u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x3cu;
  c->fr[15]=0x00000000u;
  R(1)=LD32(R(3)+8);
  c->fr[3]=0x00000000u;
  ST32(R(2)+8,R(1));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+32);
  ST32(R(15)+20,R(2));
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(6)=R(15);
  R(7)=R(15);
  R(3)=0x8c015ea8u;
  R(5)+=0xcu;
  R(7)+=0x8u;
  R(6)+=0x4u;
  { c->pr=0x8c02a66au; R(4)=LD32(R(4)+36); f_8c015ea8(c); }
  R(2)=LD32(R(15)+4);
  R(0)=0x34u;
  fp_ld(c,3,R(2));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x38u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(2)=LD32(R(15)+8);
  R(3)=R(15);
  R(3)+=0x34u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
L8c02a6ba:;
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  c->fr[3]=0x3F800000u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  fp_unary(c,0,3);
  R(5)+=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(7)+=0x1cu;
  fp_unary(c,0,3);
  R(6)+=0x34u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c02a73au; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+28);
  R(0)=LD32(R(0));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c02a756;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02a752u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  {  goto L8c02a768; }
L8c02a756:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x28u;
  R(7)+=0x1cu;
  R(6)+=0x34u;
  { c->pr=0x8c02a768u; R(4)=LD32(R(15)+20); f_8c015c9c(c); }
L8c02a768:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02a76eu; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c02a784; }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02a77e;
  R(2)=0x8000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c02a784;
L8c02a77e:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02a784u; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02a784:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02a7ac;
  R(7)=R(15);
  R(7)+=0x1cu;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x38u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x30u;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02a7a0u; R(4)=R(14); f_8c04a8b8(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  R(4)=R(0);
  R(2)=0x8c08febcu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  { c->pr=0x8c02a7acu; {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;} f_8c08febc(c); }
L8c02a7ac:;
  R(0)=LD32(R(15)+24);
  R(15)+=0x50u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02a600(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x40u;
  { uint32_t tg=R(3); c->pr=0x8c02a60cu; R(5)=R(14); sh4_call(c,tg); }
  R(3)=R(15);
  R(3)+=0x40u;
  ST32(R(15)+24,R(0));
  R(2)=R(15);
  R(1)=LD32(R(3));
  R(2)+=0x34u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x3cu;
  c->fr[15]=0x00000000u;
  R(1)=LD32(R(3)+8);
  c->fr[3]=0x00000000u;
  ST32(R(2)+8,R(1));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+32);
  ST32(R(15)+20,R(2));
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+8);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(6)=R(15);
  R(7)=R(15);
  R(3)=0x8c015ea8u;
  R(5)+=0xcu;
  R(7)+=0x8u;
  R(6)+=0x4u;
  { c->pr=0x8c02a66au; R(4)=LD32(R(4)+36); f_8c015ea8(c); }
  R(2)=LD32(R(15)+4);
  R(0)=0x34u;
  fp_ld(c,3,R(2));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x38u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  fp_unary(c,0,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02a6ba;
  R(2)=LD32(R(15)+8);
  R(3)=R(15);
  R(3)+=0x34u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
L8c02a6ba:;
  R(0)=0x34u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  c->fr[3]=0x3F800000u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  fp_unary(c,0,3);
  R(5)+=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(7)+=0x1cu;
  fp_unary(c,0,3);
  R(6)+=0x34u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c02a73au; R(4)=LD32(R(15)+16); sh4_call(c,tg); }
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+28);
  R(0)=LD32(R(0));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c02a756;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02a752u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  {  goto L8c02a768; }
L8c02a756:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x28u;
  R(7)+=0x1cu;
  R(6)+=0x34u;
  { c->pr=0x8c02a768u; R(4)=LD32(R(15)+20); f_8c015c9c(c); }
L8c02a768:;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02a76eu; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c02a784; }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02a77e;
  R(2)=0x8000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c02a784;
L8c02a77e:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02a784u; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02a784:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c02a7ac;
  R(7)=R(15);
  R(7)+=0x1cu;
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x38u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x30u;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02a7a0u; R(4)=R(14); f_8c04a8b8(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  R(4)=R(0);
  R(2)=0x8c08febcu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  { c->pr=0x8c02a7acu; {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;} f_8c08febc(c); }
L8c02a7ac:;
  R(0)=LD32(R(15)+24);
  R(15)+=0x50u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02a800(SH4Ctx *c) {
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
  R(0)=0xffffff20u;
  R(15)+=R(0);
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(13)=R(4);
  R(11)=R(5);
  R(4)=0x0u;
  R(9)=0xffu;
  R(0)=0x10u;
  R(2)=LD32(R(3));
  R(12)=R(4);
  c->fr[15]=0x00000000u;
  R(8)=R(12);
  ST32(R(15)+4,R(2));
  R(14)=R(9);
  ST32(R(15),R(13));
  ST8(R(15)+R(0),R(4));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; fp_mov(c,13,15); if(k) goto L8c02a880; }
  ST32(R(15),R(5));
  { ST32(R(6),R(4)); goto L8c02a882; }
L8c02a880:;
  ST32(R(15),R(13));
L8c02a882:;
  R(3)=LD32(R(15));
  R(5)=R(11);
  R(6)=0xd0u;
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(15));
  R(6)+=R(15);
  R(3)=LD32(R(2)+36);
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+4);
  R(1)=LD32(R(3)+8);
  ST32(R(15)+8,R(1));
  R(10)=LD32(R(11)+4);
  { uint32_t tg=R(10); c->pr=0x8c02a8a0u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0x8c02a8c8u;
  fp_ld(c,14,R(0));
  R(0)=LD32(R(15)+4);
  R(11)=0x8c072fa2u;
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c02a8b8;
  {  goto L8c02aea0; }
L8c02a8b8:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02a8d0u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02a8c4u+R(0));  switch(tg){ case 0x8c02a966u: goto L8c02a966; case 0x8c02a9a6u: goto L8c02a9a6; case 0x8c02aa40u: goto L8c02aa40; case 0x8c02aa80u: goto L8c02aa80; case 0x8c02ab00u: goto L8c02ab00; case 0x8c02ab62u: goto L8c02ab62; case 0x8c02abd2u: goto L8c02abd2; case 0x8c02abe8u: goto L8c02abe8; case 0x8c02ac28u: goto L8c02ac28; case 0x8c02ac98u: goto L8c02ac98; case 0x8c02acd8u: goto L8c02acd8; case 0x8c02ad20u: goto L8c02ad20; case 0x8c02ad3eu: goto L8c02ad3e; case 0x8c02ad88u: goto L8c02ad88; case 0x8c02ade0u: goto L8c02ade0; case 0x8c02aea0u: goto L8c02aea0; default: sh4_bad_jump(c,0x8c02a8c0u,tg); return; } }
L8c02a966:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02a974;
  {  goto L8c02ae0c; }
L8c02a974:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(5)=R(14)&0xFF; if(k) goto L8c02a994; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(12);
  { R(4)=LD32(R(4)); goto L8c02a996; }
L8c02a994:;
  R(4)=0x0u;
L8c02a996:;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(12)=R(4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02a9a4u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02a9a6:;
  R(3)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(6)=0xd0u;
  R(3)+=R(15);
  R(5)=R(10);
  R(1)=LD32(R(3));
  R(6)+=R(15);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(11)=LD32(R(10)+4);
  { uint32_t tg=R(11); c->pr=0x8c02a9c6u; R(4)=R(13); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02a9d6;
  R(0)=0xd0u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c02a9e0; }
L8c02a9d6:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c02a9e0:;
  fp_arith(c,2,4,14);
  R(6)=0xd0u;
  R(10)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)+=R(15);
  fp_mov(c,13,4);
  fp_unary(c,0,13);
  { uint32_t tg=R(10); c->pr=0x8c02a9f2u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x44u;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x1u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  ST8(R(15)+12,R(0));
  { R(3)=R(0); goto L8c02adb2; }
L8c02aa40:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02aa4e;
  {  goto L8c02ae0c; }
L8c02aa4e:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02aa6e; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02aa70; }
L8c02aa6e:;
  R(5)=0x0u;
L8c02aa70:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02aa7eu; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02aa80:;
  R(3)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(6)=0xd0u;
  R(3)+=R(15);
  R(5)=R(10);
  R(1)=LD32(R(3));
  R(6)+=R(15);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02aaa0u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02aab0;
  R(0)=0xd0u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c02aaba; }
L8c02aab0:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c02aaba:;
  fp_arith(c,2,4,14);
  fp_mov(c,13,4);
  { fp_unary(c,0,13); goto L8c02ad82; }
L8c02ab00:;
  R(0)=0xd0u;
  R(3)=LD32(R(15));
  R(14)=LD32(R(15)+R(0));
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+12);
  c->t=R(14)==R(3);
  if(!c->t) goto L8c02ab12;
  {  goto L8c02ae0c; }
L8c02ab12:;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ab1eu; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(4)=LD32(R(15)+R(0));
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02ab2e;
  {  goto L8c02ae0c; }
L8c02ab2e:;
  R(5)=LD32(R(14)+4);
  R(0)=0xa0u;
  R(5)=LD32(R(5));
  R(14)=LD32(R(5)+R(0));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(5)=R(4)&0xFF; if(k) goto L8c02ab4c; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(14);
  { R(4)=LD32(R(4)); goto L8c02ab4e; }
L8c02ab4c:;
  R(4)=0x0u;
L8c02ab4e:;
  R(12)=R(4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02ab58;
  {  goto L8c02ae0c; }
L8c02ab58:;
  R(0)=0x10u;
  R(14)=R(9);
  R(2)=0x1u;
  { ST8(R(15)+R(0),R(2)); goto L8c02ad82; }
L8c02ab62:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02ab70;
  {  goto L8c02ae0c; }
L8c02ab70:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02abc0; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02abc2; }
L8c02abc0:;
  R(5)=0x0u;
L8c02abc2:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02abd0u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02abd2:;
  R(3)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02ad82; }
L8c02abe8:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02abf6;
  {  goto L8c02ae0c; }
L8c02abf6:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02ac16; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02ac18; }
L8c02ac16:;
  R(5)=0x0u;
L8c02ac18:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ac26u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02ac28:;
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ac60;
  R(0)=0xd0u;
  { fp_ld(c,13,R(0)+R(15)); goto L8c02ac6a; }
L8c02ac60:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c02ac6a:;
  fp_arith(c,2,13,14);
  R(6)=0xd0u;
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ac78u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x5cu;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(3)+8);
  R(3)=0x1u;
  ST32(R(2)+8,R(1));
  ST8(R(15)+R(0),R(3));
  {  goto L8c02ad82; }
L8c02ac98:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02aca6;
  {  goto L8c02ae0c; }
L8c02aca6:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02acc6; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02acc8; }
L8c02acc6:;
  R(5)=0x0u;
L8c02acc8:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02acd6u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02acd8:;
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ace6;
  R(0)=0xd0u;
  { fp_ld(c,13,R(0)+R(15)); goto L8c02acf0; }
L8c02ace6:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c02acf0:;
  { fp_arith(c,2,13,14); goto L8c02ad82; }
L8c02ad20:;
  R(2)=0xd0u;
  R(3)=R(15);
  R(3)+=0x5cu;
  R(2)+=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=0x1u;
  ST8(R(15)+R(0),R(3));
  {  goto L8c02ad82; }
L8c02ad3e:;
  R(2)=0xd0u;
  R(3)=R(15);
  R(3)+=0x5cu;
  R(2)+=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(2)=LD32(R(15)+4);
  R(3)=0xa2u;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c02ad82;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ad66u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x44u;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(3)+8);
  R(3)=0x1u;
  ST32(R(2)+8,R(1));
  ST8(R(15)+R(0),R(3));
L8c02ad82:;
  R(0)=0x1u;
  { ST8(R(15)+12,R(0)); goto L8c02aec0; }
L8c02ad88:;
  R(2)=0xd0u;
  R(3)=R(15);
  R(3)+=0x5cu;
  R(6)=0xd0u;
  R(2)+=R(15);
  R(5)=R(10);
  R(1)=LD32(R(2));
  R(6)+=R(15);
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02ada8u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(3)=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(15)+12,R(0));
L8c02adb2:;
  R(0)=0x10u;
  { ST8(R(15)+R(0),R(3)); goto L8c02aec0; }
L8c02ade0:;
  R(1)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(6)=0xd0u;
  R(1)+=R(15);
  R(5)=R(10);
  R(3)=LD32(R(1));
  R(6)+=R(15);
  R(0)=LD32(R(1)+4);
  ST32(R(2),R(3));
  ST32(R(2)+4,R(0));
  R(3)=LD32(R(1)+8);
  ST32(R(2)+8,R(3));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02ae00u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02ae14;
L8c02ae0c:;
  { uint32_t tg=R(11); c->pr=0x8c02ae10u; R(4)=R(10); sh4_call(c,tg); }
  {  goto L8c02b7a6; }
L8c02ae14:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02ae34; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02ae36; }
L8c02ae34:;
  R(5)=0x0u;
L8c02ae36:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ae44u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(3)=0xdcu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(15)+12,R(0));
  R(2)=LD32(R(15)+4);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c02aec0;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ae60u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x44u;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(3)+8);
  R(3)=0x1u;
  ST32(R(2)+8,R(1));
  { ST8(R(15)+R(0),R(3)); goto L8c02aec0; }
L8c02aea0:;
  {  goto L8c02b7a4; }
L8c02aec0:;
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
L8c02b7a6:;
  R(1)=0xe0u;
  R(15)+=R(1);
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
void f_8c02a880(SH4Ctx *c) {
  ST32(R(15),R(13));
  R(3)=LD32(R(15));
  R(5)=R(11);
  R(6)=0xd0u;
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(15));
  R(6)+=R(15);
  R(3)=LD32(R(2)+36);
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+4);
  R(1)=LD32(R(3)+8);
  ST32(R(15)+8,R(1));
  R(10)=LD32(R(11)+4);
  { uint32_t tg=R(10); c->pr=0x8c02a8a0u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0x8c02a8c8u;
  fp_ld(c,14,R(0));
  R(0)=LD32(R(15)+4);
  R(11)=0x8c072fa2u;
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c02a8b8;
  {  goto L8c02aea0; }
L8c02a8b8:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02a8d0u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02a8c4u+R(0));  switch(tg){ case 0x8c02a966u: goto L8c02a966; case 0x8c02a9a6u: goto L8c02a9a6; case 0x8c02aa40u: goto L8c02aa40; case 0x8c02aa80u: goto L8c02aa80; case 0x8c02ab00u: goto L8c02ab00; case 0x8c02ab62u: goto L8c02ab62; case 0x8c02abd2u: goto L8c02abd2; case 0x8c02abe8u: goto L8c02abe8; case 0x8c02ac28u: goto L8c02ac28; case 0x8c02ac98u: goto L8c02ac98; case 0x8c02acd8u: goto L8c02acd8; case 0x8c02ad20u: goto L8c02ad20; case 0x8c02ad3eu: goto L8c02ad3e; case 0x8c02ad88u: goto L8c02ad88; case 0x8c02ade0u: goto L8c02ade0; case 0x8c02aea0u: goto L8c02aea0; default: sh4_bad_jump(c,0x8c02a8c0u,tg); return; } }
L8c02a966:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02a974;
  {  goto L8c02ae0c; }
L8c02a974:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(5)=R(14)&0xFF; if(k) goto L8c02a994; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(12);
  { R(4)=LD32(R(4)); goto L8c02a996; }
L8c02a994:;
  R(4)=0x0u;
L8c02a996:;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(12)=R(4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02a9a4u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02a9a6:;
  R(3)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(6)=0xd0u;
  R(3)+=R(15);
  R(5)=R(10);
  R(1)=LD32(R(3));
  R(6)+=R(15);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(11)=LD32(R(10)+4);
  { uint32_t tg=R(11); c->pr=0x8c02a9c6u; R(4)=R(13); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02a9d6;
  R(0)=0xd0u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c02a9e0; }
L8c02a9d6:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c02a9e0:;
  fp_arith(c,2,4,14);
  R(6)=0xd0u;
  R(10)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)+=R(15);
  fp_mov(c,13,4);
  fp_unary(c,0,13);
  { uint32_t tg=R(10); c->pr=0x8c02a9f2u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x44u;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x1u;
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  ST8(R(15)+12,R(0));
  { R(3)=R(0); goto L8c02adb2; }
L8c02aa40:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02aa4e;
  {  goto L8c02ae0c; }
L8c02aa4e:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02aa6e; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02aa70; }
L8c02aa6e:;
  R(5)=0x0u;
L8c02aa70:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02aa7eu; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02aa80:;
  R(3)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(6)=0xd0u;
  R(3)+=R(15);
  R(5)=R(10);
  R(1)=LD32(R(3));
  R(6)+=R(15);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02aaa0u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02aab0;
  R(0)=0xd0u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c02aaba; }
L8c02aab0:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c02aaba:;
  fp_arith(c,2,4,14);
  fp_mov(c,13,4);
  { fp_unary(c,0,13); goto L8c02ad82; }
L8c02ab00:;
  R(0)=0xd0u;
  R(3)=LD32(R(15));
  R(14)=LD32(R(15)+R(0));
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+12);
  c->t=R(14)==R(3);
  if(!c->t) goto L8c02ab12;
  {  goto L8c02ae0c; }
L8c02ab12:;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ab1eu; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(4)=LD32(R(15)+R(0));
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02ab2e;
  {  goto L8c02ae0c; }
L8c02ab2e:;
  R(5)=LD32(R(14)+4);
  R(0)=0xa0u;
  R(5)=LD32(R(5));
  R(14)=LD32(R(5)+R(0));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(5)=R(4)&0xFF; if(k) goto L8c02ab4c; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(14);
  { R(4)=LD32(R(4)); goto L8c02ab4e; }
L8c02ab4c:;
  R(4)=0x0u;
L8c02ab4e:;
  R(12)=R(4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02ab58;
  {  goto L8c02ae0c; }
L8c02ab58:;
  R(0)=0x10u;
  R(14)=R(9);
  R(2)=0x1u;
  { ST8(R(15)+R(0),R(2)); goto L8c02ad82; }
L8c02ab62:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02ab70;
  {  goto L8c02ae0c; }
L8c02ab70:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02abc0; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02abc2; }
L8c02abc0:;
  R(5)=0x0u;
L8c02abc2:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02abd0u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02abd2:;
  R(3)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02ad82; }
L8c02abe8:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02abf6;
  {  goto L8c02ae0c; }
L8c02abf6:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02ac16; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02ac18; }
L8c02ac16:;
  R(5)=0x0u;
L8c02ac18:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ac26u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02ac28:;
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ac60;
  R(0)=0xd0u;
  { fp_ld(c,13,R(0)+R(15)); goto L8c02ac6a; }
L8c02ac60:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c02ac6a:;
  fp_arith(c,2,13,14);
  R(6)=0xd0u;
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ac78u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x5cu;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(3)+8);
  R(3)=0x1u;
  ST32(R(2)+8,R(1));
  ST8(R(15)+R(0),R(3));
  {  goto L8c02ad82; }
L8c02ac98:;
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02aca6;
  {  goto L8c02ae0c; }
L8c02aca6:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02acc6; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02acc8; }
L8c02acc6:;
  R(5)=0x0u;
L8c02acc8:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02acd6u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
L8c02acd8:;
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02ace6;
  R(0)=0xd0u;
  { fp_ld(c,13,R(0)+R(15)); goto L8c02acf0; }
L8c02ace6:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c02acf0:;
  { fp_arith(c,2,13,14); goto L8c02ad82; }
L8c02ad20:;
  R(2)=0xd0u;
  R(3)=R(15);
  R(3)+=0x5cu;
  R(2)+=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=0x1u;
  ST8(R(15)+R(0),R(3));
  {  goto L8c02ad82; }
L8c02ad3e:;
  R(2)=0xd0u;
  R(3)=R(15);
  R(3)+=0x5cu;
  R(2)+=R(15);
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(2)=LD32(R(15)+4);
  R(3)=0xa2u;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c02ad82;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ad66u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x44u;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(3)+8);
  R(3)=0x1u;
  ST32(R(2)+8,R(1));
  ST8(R(15)+R(0),R(3));
L8c02ad82:;
  R(0)=0x1u;
  { ST8(R(15)+12,R(0)); goto L8c02aec0; }
L8c02ad88:;
  R(2)=0xd0u;
  R(3)=R(15);
  R(3)+=0x5cu;
  R(6)=0xd0u;
  R(2)+=R(15);
  R(5)=R(10);
  R(1)=LD32(R(2));
  R(6)+=R(15);
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02ada8u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(3)=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(15)+12,R(0));
L8c02adb2:;
  R(0)=0x10u;
  { ST8(R(15)+R(0),R(3)); goto L8c02aec0; }
L8c02ade0:;
  R(1)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(6)=0xd0u;
  R(1)+=R(15);
  R(5)=R(10);
  R(3)=LD32(R(1));
  R(6)+=R(15);
  R(0)=LD32(R(1)+4);
  ST32(R(2),R(3));
  ST32(R(2)+4,R(0));
  R(3)=LD32(R(1)+8);
  ST32(R(2)+8,R(3));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02ae00u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02ae14;
L8c02ae0c:;
  { uint32_t tg=R(11); c->pr=0x8c02ae10u; R(4)=R(10); sh4_call(c,tg); }
  {  goto L8c02b7a6; }
L8c02ae14:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02ae34; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02ae36; }
L8c02ae34:;
  R(5)=0x0u;
L8c02ae36:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ae44u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(3)=0xdcu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(15)+12,R(0));
  R(2)=LD32(R(15)+4);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c02aec0;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ae60u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xd0u;
  R(2)=R(15);
  R(10)=R(0);
  R(2)+=0x44u;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=0x10u;
  R(1)=LD32(R(3)+8);
  R(3)=0x1u;
  ST32(R(2)+8,R(1));
  { ST8(R(15)+R(0),R(3)); goto L8c02aec0; }
L8c02aea0:;
  {  goto L8c02b7a4; }
L8c02aec0:;
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
L8c02b7a6:;
  R(1)=0xe0u;
  R(15)+=R(1);
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
void f_8c02aa40(SH4Ctx *c) {
  R(0)=0xd0u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02aa4e;
  {  goto L8c02ae0c; }
L8c02aa4e:;
  R(4)=LD32(R(15));
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(12)=LD32(R(4)+R(0));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=c->t; R(4)=R(14)&0xFF; if(k) goto L8c02aa6e; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  { R(5)=LD32(R(5)); goto L8c02aa70; }
L8c02aa6e:;
  R(5)=0x0u;
L8c02aa70:;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02aa7eu; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(3)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(6)=0xd0u;
  R(3)+=R(15);
  R(5)=R(10);
  R(1)=LD32(R(3));
  R(6)+=R(15);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(3)=LD32(R(10)+4);
  { uint32_t tg=R(3); c->pr=0x8c02aaa0u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xdcu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02aab0;
  R(0)=0xd0u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c02aaba; }
L8c02aab0:;
  R(0)=0xd0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c02aaba:;
  fp_arith(c,2,4,14);
  fp_mov(c,13,4);
  { fp_unary(c,0,13); goto L8c02ad82; }
L8c02ad82:;
  R(0)=0x1u;
  { ST8(R(15)+12,R(0)); goto L8c02aec0; }
L8c02ae0c:;
  { uint32_t tg=R(11); c->pr=0x8c02ae10u; R(4)=R(10); sh4_call(c,tg); }
  {  goto L8c02b7a6; }
L8c02aec0:;
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
L8c02b7a6:;
  R(1)=0xe0u;
  R(15)+=R(1);
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
void f_8c02ab00(SH4Ctx *c) {
  R(0)=0xd0u;
  R(3)=LD32(R(15));
  R(14)=LD32(R(15)+R(0));
  R(14)=LD32(R(14)+4);
  R(14)=LD32(R(14)+12);
  c->t=R(14)==R(3);
  if(!c->t) goto L8c02ab12;
  {  goto L8c02ae0c; }
L8c02ab12:;
  R(6)=0xd0u;
  R(5)=R(10);
  R(2)=LD32(R(10)+4);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02ab1eu; R(4)=R(14); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=0xd0u;
  R(4)=LD32(R(15)+R(0));
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(9);
  if(!c->t) goto L8c02ab2e;
  {  goto L8c02ae0c; }
L8c02ab2e:;
  R(5)=LD32(R(14)+4);
  R(0)=0xa0u;
  R(5)=LD32(R(5));
  R(14)=LD32(R(5)+R(0));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(5)=R(4)&0xFF; if(k) goto L8c02ab4c; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(14);
  { R(4)=LD32(R(4)); goto L8c02ab4e; }
L8c02ab4c:;
  R(4)=0x0u;
L8c02ab4e:;
  R(12)=R(4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02ab58;
  {  goto L8c02ae0c; }
L8c02ab58:;
  R(0)=0x10u;
  R(14)=R(9);
  R(2)=0x1u;
  { ST8(R(15)+R(0),R(2)); goto L8c02ad82; }
L8c02ad82:;
  R(0)=0x1u;
  { ST8(R(15)+12,R(0)); goto L8c02aec0; }
L8c02ae0c:;
  { uint32_t tg=R(11); c->pr=0x8c02ae10u; R(4)=R(10); sh4_call(c,tg); }
  {  goto L8c02b7a6; }
L8c02aec0:;
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
L8c02b7a6:;
  R(1)=0xe0u;
  R(15)+=R(1);
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
void f_8c02abc0(SH4Ctx *c) {
  R(5)=0x0u;
  R(6)=0xd0u;
  R(12)=R(5);
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)+=R(15);
  { uint32_t tg=R(2); c->pr=0x8c02abd0u; R(4)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(3)=0xd0u;
  R(2)=R(15);
  R(2)+=0x5cu;
  R(3)+=R(15);
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02ad82; }
L8c02ad82:;
  R(0)=0x1u;
  { ST8(R(15)+12,R(0)); goto L8c02aec0; }
L8c02aec0:;
  R(13)=R(14)&0xFF;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02aed0;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c02aece;
  {  goto L8c02b7a4; }
L8c02aece:;
  ST32(R(15),R(12));
L8c02aed0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(11)=LD32(R(15));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+36); if(k) goto L8c02aee6; }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+28);
  R(4)=R(15);
  { c->pr=0x8c02aee6u; R(4)+=0x68u; f_8c0685b4(c); }
L8c02aee6:;
  R(0)=LD32(R(15)+4);
  R(1)=0x9du;
  R(0)-=R(1);
  R(1)=0x4bu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c02af9a;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c02af04u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c02aefeu+R(0));  switch(tg){ case 0x8c02af9au: goto L8c02af9a; case 0x8c02af9eu: goto L8c02af9e; case 0x8c02afacu: goto L8c02afac; case 0x8c02b014u: goto L8c02b014; case 0x8c02b022u: goto L8c02b022; case 0x8c02b024u: goto L8c02b024; case 0x8c02b0e0u: goto L8c02b0e0; case 0x8c02b0eeu: goto L8c02b0ee; case 0x8c02b2a0u: goto L8c02b2a0; case 0x8c02b2aeu: goto L8c02b2ae; case 0x8c02b660u: goto L8c02b660; case 0x8c02b6c0u: goto L8c02b6c0; case 0x8c02b6d6u: goto L8c02b6d6; default: sh4_bad_jump(c,0x8c02aefau,tg); return; } }
L8c02af9a:;
  {  goto L8c02b794; }
L8c02af9e:;
  R(2)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02afacu; R(4)+=0x50u; f_8c014f10(c); }
L8c02afac:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  fp_mov(c,4,13);
  R(3)=0x8c0159a2u;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02aff6u; R(4)=R(11); f_8c0159a2(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b002;
  {  goto L8c02b714; }
L8c02b002:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b010u; R(4)+=0x5cu; f_8c014f10(c); }
  {  goto L8c02b25c; }
L8c02b014:;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12)+36);
  { c->pr=0x8c02b01eu; R(4)=R(11); f_8c0685b4(c); }
  {  goto L8c02b714; }
L8c02b022:;
  R(8)=0x1u;
L8c02b024:;
  R(4)=LD32(R(15));
  R(5)=0x4u;
  R(0)=LD32(R(4)+48);
  R(5)&=R(0);
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c02b036;
  {  goto L8c02b7a4; }
L8c02b036:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+48);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c02b04e;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_st(c,3,R(0)+R(15));
L8c02b04e:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b05c;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b05c;
  {  goto L8c02b714; }
L8c02b05c:;
  R(0)=0x5cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  R(5)=R(15);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  R(3)=0x8c015ebcu;
  R(5)+=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(7)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x2cu;
  { uint32_t tg=R(3); c->pr=0x8c02b09eu; R(4)=R(11); sh4_call(c,tg); }
  {  goto L8c02b714; }
L8c02b0e0:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b0eeu; R(4)+=0x50u; f_8c014f10(c); }
L8c02b0ee:;
  R(2)=0x8c068530u;
  { c->pr=0x8c02b0f4u; fp_mov(c,4,13); f_8c068530(c); }
  R(3)=0x8c0686fcu;
  fp_mov(c,14,0);
  { c->pr=0x8c02b0fcu; fp_mov(c,4,13); f_8c0686fc(c); }
  R(0)=LD32(R(15)+4);
  R(1)=0xe2u;
  fp_mov(c,4,0);
  c->t=R(0)==R(1);
  c->fr[6]=0x3F800000u;
  fp_mov(c,5,0);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c02b152; }
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b152;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xe3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xa9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1c0;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xa5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xe4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c02b1e6;
  {  goto L8c02b20a; }
L8c02b152:;
  R(0)=0x38u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  { fp_st(c,5,R(0)+R(15)); goto L8c02b1e0; }
L8c02b1c0:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
L8c02b1e0:;
  R(0)=0x28u;
  { fp_st(c,14,R(0)+R(15)); goto L8c02b20a; }
L8c02b1e6:;
  R(0)=0x38u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,6,R(0)+R(15));
L8c02b20a:;
  R(6)=R(15);
  R(14)=0x8c015060u;
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x38u;
  { c->pr=0x8c02b218u; R(4)+=0x38u; f_8c015060(c); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x2cu;
  { uint32_t tg=R(14); c->pr=0x8c02b224u; R(4)+=0x2cu; sh4_call(c,tg); }
  R(6)=R(15);
  R(4)=R(15);
  R(5)=R(11);
  R(6)+=0x20u;
  { uint32_t tg=R(14); c->pr=0x8c02b230u; R(4)+=0x20u; sh4_call(c,tg); }
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c015c9cu;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b242u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b24e;
  {  goto L8c02b714; }
L8c02b24e:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)=R(11);
  { c->pr=0x8c02b25cu; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b25c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x5cu;
  { R(5)+=0x50u; goto L8c02b628; }
L8c02b2a0:;
  R(4)=0xd0u;
  R(6)=R(15);
  R(3)=0x8c014f10u;
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b2aeu; R(4)+=R(15); f_8c014f10(c); }
L8c02b2ae:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c015e64u;
  R(5)+=0x38u;
  R(7)+=0x20u;
  R(6)+=0x50u;
  { c->pr=0x8c02b2c0u; R(4)=R(11); f_8c015e64(c); }
  R(0)=0x5cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02b2f4;
  R(2)=R(15);
  R(2)+=0x50u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x2cu;
  R(0)=LD32(R(2)+4);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  {  goto L8c02b366; }
L8c02b2f4:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b328;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b328u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b328:;
  R(0)=0x5cu;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x5cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
L8c02b366:;
  R(0)=0x8c02b38cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x2cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c02b3a0;
  { fp_mov(c,3,15); goto L8c02b3a4; }
L8c02b3a0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c02b3a4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x30u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3b8;
  R(0)=0x30u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3be; }
L8c02b3b8:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3be:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b408;
  R(0)=0x50u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c02b3d0;
  { fp_mov(c,3,5); goto L8c02b3d4; }
L8c02b3d0:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c02b3d4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(0)=0x54u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c02b3e8;
  R(0)=0x54u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c02b3ee; }
L8c02b3e8:;
  R(0)=0x54u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c02b3ee:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b428;
  R(3)=R(15);
  R(3)+=0x20u;
  R(1)=LD32(R(3));
  R(2)=R(15);
  R(2)+=0x50u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  { ST32(R(2)+8,R(1)); goto L8c02b428; }
L8c02b408:;
  fp_mov(c,3,15);
  R(0)=0x50u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
L8c02b428:;
  R(0)=0x28u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c02b436;
  { c->fr[3]=0x3F800000u; goto L8c02b442; }
L8c02b436:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b440;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b442; }
L8c02b440:;
  c->fr[3]=0x00000000u;
L8c02b442:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(0)=0x38u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x34u;
  R(4)=c->t;
  fp_cmp(c,1,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,1,2,1);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_mov(c,4,2);
  fp_cmp(c,1,4,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c02b4fa; }
  { c->fr[3]=0x3F800000u; goto L8c02b506; }
L8c02b4fa:;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c02b504;
  c->fr[3]=0x3F800000u;
  { fp_unary(c,0,3); goto L8c02b506; }
L8c02b504:;
  c->fr[3]=0x00000000u;
L8c02b506:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,3,2);
  R(4)=R(4)&0xFF;
  R(0)=c->t;
  c->t=R(0)==R(4);
  if(c->t) goto L8c02b530;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
L8c02b530:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x38u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,4,2);
  fp_fmac(c,3,6);
  fp_mov(c,0,2);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,4,3);
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c015c9cu;
  R(7)=R(15);
  R(0)=0x28u;
  R(5)+=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(7)+=0x20u;
  R(6)+=0x2cu;
  { c->pr=0x8c02b606u; R(4)=R(11); f_8c015c9c(c); }
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c02b612;
  {  goto L8c02b714; }
L8c02b612:;
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x44u;
  R(5)=R(11);
  { c->pr=0x8c02b620u; R(4)+=0x44u; f_8c014f10(c); }
  R(5)=0xd0u;
  R(6)=R(15);
  R(6)+=0x44u;
  R(5)+=R(15);
L8c02b628:;
  R(2)=0x8c05e612u;
  R(4)=R(15);
  { c->pr=0x8c02b630u; R(4)+=0x5cu; f_8c05e612(c); }
  {  goto L8c02b660; }
L8c02b660:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b676;
  R(5)=R(15);
  R(3)=0x8c014f10u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b676u; R(4)+=0x5cu; f_8c014f10(c); }
L8c02b676:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x50u;
  { c->pr=0x8c02b680u; R(4)=R(11); f_8c0163ce(c); }
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x50u;
  R(5)+=0x5cu;
  { c->pr=0x8c02b690u; R(4)+=0x5cu; f_8c05e5f4(c); }
  {  goto L8c02b6d6; }
L8c02b6c0:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c02b6d6;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x5cu;
  R(5)+=0x68u;
  { c->pr=0x8c02b6d6u; R(4)+=0x5cu; f_8c014eaa(c); }
L8c02b6d6:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x44u;
  { c->pr=0x8c02b6e0u; R(4)=R(11); f_8c0163ce(c); }
  R(3)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x5cu;
  { c->pr=0x8c02b6eau; R(4)=R(11); f_8c01638a(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x9du;
  c->t=R(3)==R(2);
  if(c->t) goto L8c02b6fa;
  R(1)=LD32(R(15)+4);
  R(3)=0xa0u;
  c->t=R(1)==R(3);
  if(!c->t) goto L8c02b714;
L8c02b6fa:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b714;
  R(5)=R(15);
  R(3)=0x8c04a8b8u;
  R(5)+=0x5cu;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c02b70cu; R(4)=LD32(R(15)+12); f_8c04a8b8(c); }
  R(2)=0x8c090060u;
  R(4)=R(0);
  { c->pr=0x8c02b714u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c090060(c); }
L8c02b714:;
  R(2)=0x8c2dc87cu;
  R(4)=LD32(R(15));
  R(3)=LD32(R(2));
  ST32(R(4)+40,R(3));
  R(3)=0x8c064b7eu;
  { c->pr=0x8c02b722u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c02b744;
  R(3)=0x8c05689eu;
  { c->pr=0x8c02b730u; R(4)=LD32(R(15)); f_8c05689e(c); }
  c->t=(R(0)&0x2)==0;
  { uint32_t k=c->t; ST32(R(15)+20,R(0)); if(k) goto L8c02b74a; }
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02b744;
  R(2)=LD32(R(15)+20);
  R(3)=0x8000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c02b74a;
L8c02b744:;
  R(3)=0x8c064ddau;
  { c->pr=0x8c02b74au; R(4)=LD32(R(15)); f_8c064dda(c); }
L8c02b74a:;
  c->t=R(13)==R(9);
  if(!c->t) goto L8c02b794;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02b794;
  R(8)=R(8)&0xFF;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c02b786;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b760u; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02b786;
  R(0)=0x5cu;
  R(3)=0x1000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(4));
  R(2)=LD32(R(4)+12);
  R(2)|=R(3);
  ST32(R(4)+12,R(2));
L8c02b786:;
  R(3)=0x8c04a8b8u;
  { c->pr=0x8c02b78cu; R(4)=LD32(R(15)+8); f_8c04a8b8(c); }
  R(2)=0x8c08fe60u;
  R(4)=R(0);
  { c->pr=0x8c02b794u; R(5)=R(11); f_8c08fe60(c); }
L8c02b794:;
  c->t=R(13)==R(9);
  if(c->t) goto L8c02b7a4;
  R(4)=LD32(R(15)+24);
  R(3)=0x1u;
  R(0)=0x10cu;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  ST8(R(4)+R(0),R(3));
L8c02b7a4:;
  R(0)=R(10);
  R(1)=0xe0u;
  R(15)+=R(1);
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
