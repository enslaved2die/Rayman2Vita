#include "recomp_decls.h"
void f_8c01ac0a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x8c0c4630u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=LD32(R(9));
  R(8)=0x8c0c4688u;
  R(13)=0x8c129af4u;
  c->t=R(3)>=R(11);
  { uint32_t k=c->t; R(14)=R(13); if(k) goto L8c01acd8; }
L8c01ac30:;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c01acc0;
  R(1)=LD32(R(14));
  R(2)=0x80000u;
  c->t=(R(1)&R(2))==0;
  { uint32_t k=c->t; R(10)+=0x1u; if(k) goto L8c01ac48; }
  R(1)=LD32(R(8));
  R(1)+=0xffffffffu;
  ST32(R(8),R(1));
L8c01ac48:;
  {  goto L8c01acd0; }
L8c01acc0:;
  c->t=R(14)==R(13);
  if(c->t) goto L8c01acce;
  R(1)=0x8c0685b4u;
  R(5)=R(14);
  R(6)=0x60u;
  { c->pr=0x8c01acceu; R(4)=R(13); f_8c0685b4(c); }
L8c01acce:;
  R(13)+=0x60u;
L8c01acd0:;
  R(12)+=0x1u;
  c->t=R(12)>=R(11);
  { uint32_t k=!c->t; R(14)+=0x60u; if(k) goto L8c01ac30; }
L8c01acd8:;
  R(2)=LD32(R(9));
  R(2)-=R(10);
  ST32(R(9),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01acf0(SH4Ctx *c) {
  R(6)=0x100u;
  R(5)=0x8c130fbcu;
  c->fr[4]=0x00000000u;
  R(6)+=R(5);
  R(4)=R(5);
  c->t=R(4)>=R(6);
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c01ad12; }
L8c01ad00:;
  R(0)=0x18u;
  ST32(R(4)+28,R(5));
  fp_st(c,4,R(0)+R(4));
  R(4)+=0x20u;
  ST32(R(4)+28,R(5));
  fp_st(c,4,R(0)+R(4));
  R(4)+=0x20u;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c01ad00;
L8c01ad12:;
  {  return; }
}
void f_8c01ad16(SH4Ctx *c) {
  R(5)=0x348u;
  R(6)=0x8c130c74u;
  R(5)+=R(6);
  R(4)=R(6);
  c->t=R(4)>=R(5);
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c01ad2c; }
L8c01ad24:;
  ST32(R(4)+20,R(6));
  R(4)+=0x18u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c01ad24;
L8c01ad2c:;
  {  return; }
}
void f_8c01ad60(SH4Ctx *c) {
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x8c01ae80u;
  R(12)=R(4);
  fp_ftrc(c,4);
  R(12)+=0x4u;
  R(2)=0x8c0c4628u;
  R(1)=R(5);
  R(1)+=0x4u;
  R(3)=c->fpul;
  ST32(R(15),R(3));
  R(3)=R(2);
  fp_ld(c,7,R(0));
  R(0)=0x8c01ae84u;
  fp_ld(c,4,R(0));
  fp_ld(c,6,R(12));
  fp_ld(c,0,R(2));
  fp_arith(c,0,6,4);
  fp_mov(c,5,7);
  fp_fmac(c,5,6);
  fp_st(c,5,R(12));
  fp_ld(c,0,R(3));
  fp_ld(c,6,R(1));
  R(3)=0x8c0c462cu;
  fp_arith(c,0,6,4);
  fp_fmac(c,7,6);
  fp_mov(c,5,7);
  fp_st(c,5,R(1));
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(3));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(1));
  fp_arith(c,0,2,3);
  R(2)=0x8c130fbcu;
  R(0)=0x4u;
  fp_st(c,2,R(1));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(4));
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  fp_st(c,3,R(3));
  fp_ld(c,2,R(12));
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(0)+R(3));
  R(0)=0xcu;
  fp_ld(c,3,R(1));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x8u;
  ST32(R(3)+16,R(6));
  ST32(R(3)+20,R(7));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  fp_ftrc(c,3);
  R(1)=c->fpul;
  ST32(R(3)+28,R(1));
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;} return; }
}
void f_8c01ade6(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  R(13)+=0x4u;
  R(0)=0x8c01ae84u;
  R(7)=0x8c0c4628u;
  fp_ftrc(c,4);
  R(1)=R(5);
  R(1)+=0x4u;
  R(3)=c->fpul;
  ST32(R(15),R(3));
  fp_ld(c,5,R(13));
  fp_ld(c,7,R(0));
  R(0)=0x8c01ae80u;
  fp_ld(c,6,R(0));
  fp_arith(c,0,5,7);
  fp_ld(c,0,R(7));
  fp_mov(c,4,6);
  fp_fmac(c,4,5);
  fp_st(c,4,R(13));
  fp_ld(c,0,R(7));
  R(7)=0x8c0c462cu;
  fp_ld(c,4,R(1));
  fp_arith(c,0,4,7);
  fp_fmac(c,6,4);
  fp_mov(c,5,6);
  fp_st(c,5,R(1));
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(13));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(13));
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(1));
  fp_arith(c,0,2,3);
  R(2)=0x8c130c74u;
  R(0)=0x4u;
  fp_st(c,2,R(1));
  R(7)=LD32(R(15));
  fp_ld(c,3,R(4));
  R(3)=R(7);
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(3);
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(2);
  fp_st(c,3,R(7));
  fp_ld(c,2,R(13));
  fp_st(c,2,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(0)+R(7));
  R(0)=0xcu;
  fp_ld(c,3,R(1));
  fp_st(c,3,R(0)+R(7));
  R(0)=0x8u;
  ST32(R(7)+16,R(6));
  fp_ld(c,3,R(0)+R(5));
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(7)+20,R(3));
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c01aea0(SH4Ctx *c) {
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
  R(15)+=0xfffffff8u;
  R(2)=0x8c0c52dcu;
  R(13)=0x8c0c52e4u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c01aed6; }
  R(0)=0x8c01afecu;
  fp_ld(c,3,R(13));
  fp_ld(c,4,R(0));
  R(0)=0x8c01aff0u;
  fp_arith(c,2,3,4);
  fp_mov(c,2,4);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0));
  fp_mov(c,15,2);
  fp_arith(c,2,15,3);
L8c01aed6:;
  R(0)=0x8c01b000u;
  R(11)=0x8c123b08u;
  R(12)=0x8c130c74u;
  R(14)=0x0u;
  fp_ld(c,14,R(0));
  R(8)=0x1fu;
  R(9)=0x8c0388c0u;
  R(10)=0x8c07fc1au;
L8c01aee6:;
  R(0)=0xc36u;
  R(3)=(int32_t)(int8_t)LD8(R(11)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01aefa;
  R(3)=0xeu;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c01af50;
  R(1)=0x19u;
  c->t=(int32_t)R(14)>=(int32_t)R(1);
  if(c->t) goto L8c01af50;
L8c01aefa:;
  R(2)=R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(14);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(12);
  R(1)=LD32(R(2)+20);
  c->t=(int32_t)R(1)>0;
  if(!c->t) goto L8c01af50;
  R(2)=R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(14);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(12);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(2)+20);
  c->fpul=R(3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01af28u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(0)=0xcu;
  fp_mov(c,6,15);
  R(5)=0x0u;
  R(3)=R(2);
  R(4)=LD32(R(15)+4);
  fp_mov(c,4,15);
  R(4)=LD32(R(4)+16);
  ST32(R(15),R(2));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,0,R(13));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(3));
  fp_mov(c,8,14);
  { uint32_t tg=R(10); c->pr=0x8c01af50u; fp_fmac(c,4,3); sh4_call(c,tg); }
L8c01af50:;
  R(0)=0xc36u;
  R(3)=(int32_t)(int8_t)LD8(R(11)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c01af66; }
  R(3)=0xeu;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c01afbc;
  R(1)=0x19u;
  c->t=(int32_t)R(14)>=(int32_t)R(1);
  if(c->t) goto L8c01afbc;
L8c01af66:;
  R(2)=R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(14);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(12);
  R(1)=LD32(R(2)+20);
  c->t=(int32_t)R(1)>0;
  if(!c->t) goto L8c01afbc;
  R(2)=R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(14);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(12);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(2)+20);
  c->fpul=R(3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01af94u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(0)=0xcu;
  fp_mov(c,6,15);
  R(5)=0x0u;
  R(3)=R(2);
  R(4)=LD32(R(15)+4);
  fp_mov(c,4,15);
  R(4)=LD32(R(4)+16);
  ST32(R(15),R(2));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,0,R(13));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(3));
  fp_mov(c,8,14);
  { uint32_t tg=R(10); c->pr=0x8c01afbcu; fp_fmac(c,4,3); sh4_call(c,tg); }
L8c01afbc:;
  R(0)=0xc36u;
  R(3)=(int32_t)(int8_t)LD8(R(11)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c01afd2; }
  R(3)=0xeu;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c01b076;
  R(1)=0x19u;
  c->t=(int32_t)R(14)>=(int32_t)R(1);
  if(c->t) goto L8c01b076;
L8c01afd2:;
  {  goto L8c01b020; }
L8c01b020:;
  R(2)=R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(14);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(12);
  R(1)=LD32(R(2)+20);
  c->t=(int32_t)R(1)>0;
  if(!c->t) goto L8c01b076;
  R(2)=R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(14);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(12);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(2)+20);
  c->fpul=R(3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b04eu; fp_mov(c,4,3); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(0)=0xcu;
  fp_mov(c,6,15);
  R(5)=0x0u;
  R(3)=R(2);
  R(4)=LD32(R(15)+4);
  fp_mov(c,4,15);
  R(4)=LD32(R(4)+16);
  ST32(R(15),R(2));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,0,R(13));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(3));
  fp_mov(c,8,14);
  { uint32_t tg=R(10); c->pr=0x8c01b076u; fp_fmac(c,4,3); sh4_call(c,tg); }
L8c01b076:;
  R(0)=0xc36u;
  R(3)=(int32_t)(int8_t)LD8(R(11)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c01b08c; }
  R(3)=0xeu;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c01b0e2;
  R(1)=0x19u;
  c->t=(int32_t)R(14)>=(int32_t)R(1);
  if(c->t) goto L8c01b0e2;
L8c01b08c:;
  R(2)=R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(14);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(12);
  R(1)=LD32(R(2)+20);
  c->t=(int32_t)R(1)>0;
  if(!c->t) goto L8c01b0e2;
  R(2)=R(14);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(14);
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(12);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(2)+20);
  c->fpul=R(3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b0bau; fp_mov(c,4,3); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(0)=0xcu;
  fp_mov(c,6,15);
  R(5)=0x0u;
  R(3)=R(2);
  R(4)=LD32(R(15)+4);
  fp_mov(c,4,15);
  R(4)=LD32(R(4)+16);
  ST32(R(15),R(2));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,0,R(13));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(3));
  fp_mov(c,8,14);
  { uint32_t tg=R(10); c->pr=0x8c01b0e2u; fp_fmac(c,4,3); sh4_call(c,tg); }
L8c01b0e2:;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(8);
  if(c->t) goto L8c01b0ec;
  {  goto L8c01aee6; }
L8c01b0ec:;
  R(2)=0x23u;
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(c->t) goto L8c01b156;
L8c01b0f2:;
  R(0)=0xc36u;
  R(1)=(int32_t)(int8_t)LD8(R(11)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c01b106;
  R(3)=0xeu;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c01b14e;
  R(1)=0x19u;
  c->t=(int32_t)R(14)>=(int32_t)R(1);
  if(c->t) goto L8c01b14e;
L8c01b106:;
  R(8)=R(14);
  c->t=R(8)>>31;R(8)<<=1;
  R(3)=R(14);
  R(8)+=R(3);
  R(8)<<=2;
  c->t=R(8)>>31;R(8)<<=1;
  R(8)+=R(12);
  R(2)=LD32(R(8)+20);
  c->t=(int32_t)R(2)>0;
  if(!c->t) goto L8c01b14e;
  R(1)=LD32(R(8)+20);
  c->fpul=R(1);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b124u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(3)=R(8);
  R(0)=0xcu;
  R(2)=R(3);
  fp_mov(c,3,15);
  R(4)=LD32(R(8)+16);
  R(5)=0x0u;
  fp_mov(c,8,14);
  ST32(R(15),R(3));
  fp_ld(c,7,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,0,R(13));
  fp_ld(c,2,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(2));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(2));
  fp_mov(c,6,3);
  fp_mov(c,3,15);
  fp_fmac(c,3,2);
  { uint32_t tg=R(10); c->pr=0x8c01b14eu; fp_mov(c,4,3); sh4_call(c,tg); }
L8c01b14e:;
  R(3)=0x23u;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c01b0f2;
L8c01b156:;
  R(15)+=0x8u;
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
void f_8c01b180(SH4Ctx *c) {
  ST32(R(12)+R(0),R(3));
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  { f_8c01b1a0(c); return; }
}
void f_8c01b1a0(SH4Ctx *c) {
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
  R(15)+=0xfffffff4u;
  R(2)=0x8c0c52dcu;
  R(0)=0x8c01b3e0u;
  R(14)=0x8c0c52e4u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->fr[15]=0x00000000u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; fp_ld(c,14,R(0)); if(k) goto L8c01b1da; }
  fp_ld(c,3,R(14));
  R(0)=0x8c01b3ecu;
  fp_mov(c,2,14);
  fp_arith(c,2,3,14);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0));
  fp_mov(c,15,2);
  fp_arith(c,2,15,3);
L8c01b1da:;
  R(0)=0x8c01b3fcu;
  R(4)=0x8c130fbcu;
  R(9)=0x8c0388c0u;
  R(8)=0x0u;
  R(12)=0x8c07fc1au;
  R(10)=R(4);
  fp_ld(c,13,R(0));
  R(11)=R(4);
  R(13)=R(4);
L8c01b1ec:;
  R(3)=R(8);
  R(3)<<=2;
  R(0)=0x8c130fd8u;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(2)=LD32(R(3)+R(0));
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c01b200;
  {  goto L8c01b312; }
L8c01b200:;
  R(4)=R(8);
  R(4)<<=2;
  R(3)=0x8c130fbcu;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(0)=0x8u;
  R(4)+=R(3);
  ST32(R(15)+8,R(4));
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(4));
  fp_arith(c,1,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(4));
  fp_arith(c,1,5,3);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c01b2a6;
  R(1)=R(8);
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(0)=0x18u;
  R(2)=R(1);
  ST32(R(15),R(1));
  fp_ld(c,3,R(0)+R(2));
  fp_ld(c,12,R(1));
  fp_arith(c,2,3,4);
  R(1)=LD32(R(2)+28);
  c->fpul=R(1);
  fp_arith(c,3,3,14);
  fp_arith(c,0,12,3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b248u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  R(0)=0xcu;
  fp_mov(c,0,12);
  R(5)=0x0u;
  fp_mov(c,6,15);
  R(3)=R(2);
  R(4)=LD32(R(15));
  fp_mov(c,8,13);
  R(4)=LD32(R(4)+20);
  ST32(R(15)+4,R(2));
  fp_ld(c,3,R(14));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x4u;
  fp_fmac(c,6,3);
  fp_mov(c,0,3);
  fp_ld(c,5,R(0)+R(3));
  fp_ld(c,3,R(3));
  fp_mov(c,4,15);
  { uint32_t tg=R(12); c->pr=0x8c01b270u; fp_fmac(c,4,3); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01b312;
  R(2)=R(11);
  R(0)=0xcu;
  R(3)=R(2);
  fp_mov(c,6,15);
  R(4)=LD32(R(11)+16);
  R(5)=0x0u;
  fp_mov(c,4,15);
  ST32(R(15),R(2));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,0,R(14));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(14));
  fp_mov(c,0,12);
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c01b2a2u; fp_fmac(c,4,3); sh4_call(c,tg); }
  {  goto L8c01b312; }
L8c01b2a6:;
  R(0)=0x18u;
  R(2)=LD32(R(13)+28);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  c->fpul=R(2);
  fp_arith(c,2,3,5);
  fp_ld(c,12,R(0)+R(13));
  fp_arith(c,3,3,14);
  fp_arith(c,1,12,3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b2beu; fp_mov(c,4,3); sh4_call(c,tg); }
  R(3)=R(13);
  R(0)=0xcu;
  R(2)=R(3);
  fp_mov(c,3,15);
  R(4)=LD32(R(13)+20);
  R(5)=0x0u;
  fp_mov(c,8,13);
  ST32(R(15),R(3));
  fp_ld(c,7,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,0,R(14));
  fp_ld(c,2,R(0)+R(2));
  fp_mov(c,5,12);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(2));
  fp_mov(c,6,3);
  fp_mov(c,3,15);
  fp_fmac(c,3,2);
  { uint32_t tg=R(12); c->pr=0x8c01b2e6u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01b312;
  R(2)=R(10);
  R(0)=0x8u;
  fp_mov(c,6,15);
  R(3)=R(2);
  R(4)=LD32(R(10)+16);
  R(5)=0x0u;
  fp_mov(c,4,15);
  fp_mov(c,7,12);
  ST32(R(15),R(2));
  fp_ld(c,0,R(14));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(3));
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c01b312u; fp_fmac(c,4,3); sh4_call(c,tg); }
L8c01b312:;
  R(8)+=0x1u;
  R(2)=0x8c130fbcu;
  R(3)=R(8);
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  ST32(R(15),R(3));
  R(10)+=0x20u;
  R(1)=LD32(R(3)+28);
  R(13)+=0x20u;
  c->t=(int32_t)R(1)>0;
  { uint32_t k=c->t; R(11)+=0x20u; if(k) goto L8c01b332; }
  {  goto L8c01b48c; }
L8c01b332:;
  R(4)=LD32(R(15));
  R(0)=0x8u;
  ST32(R(15)+8,R(4));
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(4));
  fp_arith(c,1,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(4));
  fp_arith(c,1,5,3);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c01b420;
  R(1)=LD32(R(15));
  R(0)=0x18u;
  R(3)=R(1);
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,12,R(1));
  fp_arith(c,2,3,4);
  R(1)=LD32(R(3)+28);
  c->fpul=R(1);
  fp_arith(c,3,3,14);
  fp_arith(c,0,12,3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b366u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  R(0)=0xcu;
  fp_mov(c,0,12);
  R(5)=0x0u;
  fp_mov(c,6,15);
  R(3)=R(2);
  R(4)=LD32(R(15));
  fp_mov(c,8,13);
  R(4)=LD32(R(4)+20);
  ST32(R(15)+4,R(2));
  fp_ld(c,3,R(14));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x4u;
  fp_fmac(c,6,3);
  fp_mov(c,0,3);
  fp_ld(c,5,R(0)+R(3));
  fp_ld(c,3,R(3));
  fp_mov(c,4,15);
  { uint32_t tg=R(12); c->pr=0x8c01b38eu; fp_fmac(c,4,3); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01b48c;
  R(2)=R(11);
  R(0)=0xcu;
  R(3)=R(2);
  fp_mov(c,6,15);
  R(4)=LD32(R(11)+16);
  R(5)=0x0u;
  fp_mov(c,4,15);
  ST32(R(15),R(2));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,0,R(14));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(14));
  fp_mov(c,0,12);
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c01b3c0u; fp_fmac(c,4,3); sh4_call(c,tg); }
  {  goto L8c01b48c; }
L8c01b420:;
  R(0)=0x18u;
  R(3)=LD32(R(13)+28);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  c->fpul=R(3);
  fp_arith(c,2,3,5);
  fp_ld(c,12,R(0)+R(13));
  fp_arith(c,3,3,14);
  fp_arith(c,1,12,3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b438u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(3)=R(13);
  R(0)=0xcu;
  R(2)=R(3);
  fp_mov(c,3,15);
  R(4)=LD32(R(13)+20);
  R(5)=0x0u;
  fp_mov(c,8,13);
  ST32(R(15),R(3));
  fp_ld(c,7,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,0,R(14));
  fp_ld(c,2,R(0)+R(2));
  fp_mov(c,5,12);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(2));
  fp_mov(c,6,3);
  fp_mov(c,3,15);
  fp_fmac(c,3,2);
  { uint32_t tg=R(12); c->pr=0x8c01b460u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01b48c;
  R(2)=R(10);
  R(0)=0x8u;
  fp_mov(c,6,15);
  R(3)=R(2);
  R(4)=LD32(R(10)+16);
  R(5)=0x0u;
  fp_mov(c,4,15);
  fp_mov(c,7,12);
  ST32(R(15),R(2));
  fp_ld(c,0,R(14));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(3));
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c01b48cu; fp_fmac(c,4,3); sh4_call(c,tg); }
L8c01b48c:;
  R(8)+=0x1u;
  R(2)=0x8c130fbcu;
  R(3)=R(8);
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  ST32(R(15),R(3));
  R(10)+=0x20u;
  R(1)=LD32(R(3)+28);
  R(13)+=0x20u;
  c->t=(int32_t)R(1)>0;
  { uint32_t k=c->t; R(11)+=0x20u; if(k) goto L8c01b4ac; }
  {  goto L8c01b5aa; }
L8c01b4ac:;
  R(4)=LD32(R(15));
  R(0)=0x8u;
  ST32(R(15)+8,R(4));
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(4));
  fp_arith(c,1,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(4));
  fp_arith(c,1,5,3);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c01b53e;
  R(1)=LD32(R(15));
  R(0)=0x18u;
  R(3)=R(1);
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,12,R(1));
  fp_arith(c,2,3,4);
  R(1)=LD32(R(3)+28);
  c->fpul=R(1);
  fp_arith(c,3,3,14);
  fp_arith(c,0,12,3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b4e0u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  R(0)=0xcu;
  fp_mov(c,0,12);
  R(5)=0x0u;
  fp_mov(c,6,15);
  R(3)=R(2);
  R(4)=LD32(R(15));
  fp_mov(c,8,13);
  R(4)=LD32(R(4)+20);
  ST32(R(15)+4,R(2));
  fp_ld(c,3,R(14));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x4u;
  fp_fmac(c,6,3);
  fp_mov(c,0,3);
  fp_ld(c,5,R(0)+R(3));
  fp_ld(c,3,R(3));
  fp_mov(c,4,15);
  { uint32_t tg=R(12); c->pr=0x8c01b508u; fp_fmac(c,4,3); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01b5aa;
  R(2)=R(11);
  R(0)=0xcu;
  R(3)=R(2);
  fp_mov(c,6,15);
  R(4)=LD32(R(11)+16);
  R(5)=0x0u;
  fp_mov(c,4,15);
  ST32(R(15),R(2));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,0,R(14));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(14));
  fp_mov(c,0,12);
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c01b53au; fp_fmac(c,4,3); sh4_call(c,tg); }
  {  goto L8c01b5aa; }
L8c01b53e:;
  R(0)=0x18u;
  R(3)=LD32(R(13)+28);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  c->fpul=R(3);
  fp_arith(c,2,3,5);
  fp_ld(c,12,R(0)+R(13));
  fp_arith(c,3,3,14);
  fp_arith(c,1,12,3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b556u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(3)=R(13);
  R(0)=0xcu;
  R(2)=R(3);
  fp_mov(c,3,15);
  R(4)=LD32(R(13)+20);
  R(5)=0x0u;
  fp_mov(c,8,13);
  ST32(R(15),R(3));
  fp_ld(c,7,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,0,R(14));
  fp_ld(c,2,R(0)+R(2));
  fp_mov(c,5,12);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(2));
  fp_mov(c,6,3);
  fp_mov(c,3,15);
  fp_fmac(c,3,2);
  { uint32_t tg=R(12); c->pr=0x8c01b57eu; fp_mov(c,4,3); sh4_call(c,tg); }
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01b5aa;
  R(2)=R(10);
  R(0)=0x8u;
  fp_mov(c,6,15);
  R(3)=R(2);
  R(4)=LD32(R(10)+16);
  R(5)=0x0u;
  fp_mov(c,4,15);
  fp_mov(c,7,12);
  ST32(R(15),R(2));
  fp_ld(c,0,R(14));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(3));
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c01b5aau; fp_fmac(c,4,3); sh4_call(c,tg); }
L8c01b5aa:;
  R(8)+=0x1u;
  R(2)=0x8c130fbcu;
  R(3)=R(8);
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  ST32(R(15),R(3));
  R(10)+=0x20u;
  R(1)=LD32(R(3)+28);
  R(13)+=0x20u;
  c->t=(int32_t)R(1)>0;
  { uint32_t k=c->t; R(11)+=0x20u; if(k) goto L8c01b5ca; }
  {  goto L8c01b6ec; }
L8c01b5ca:;
  R(4)=LD32(R(15));
  R(0)=0x8u;
  ST32(R(15)+8,R(4));
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(4));
  fp_arith(c,1,4,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,5,R(0)+R(4));
  fp_arith(c,1,5,3);
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c01b680;
  R(1)=LD32(R(15));
  R(0)=0x18u;
  R(3)=R(1);
  fp_ld(c,3,R(0)+R(3));
  fp_ld(c,12,R(1));
  fp_arith(c,2,3,4);
  R(1)=LD32(R(3)+28);
  c->fpul=R(1);
  fp_arith(c,3,3,14);
  fp_arith(c,0,12,3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b5feu; fp_mov(c,4,3); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  R(0)=0xcu;
  fp_mov(c,0,12);
  R(5)=0x0u;
  fp_mov(c,6,15);
  R(3)=R(2);
  R(4)=LD32(R(15));
  fp_mov(c,8,13);
  R(4)=LD32(R(4)+20);
  ST32(R(15)+4,R(2));
  fp_ld(c,3,R(14));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x4u;
  fp_fmac(c,6,3);
  fp_mov(c,0,3);
  fp_ld(c,5,R(0)+R(3));
  fp_ld(c,3,R(3));
  fp_mov(c,4,15);
  { uint32_t tg=R(12); c->pr=0x8c01b626u; fp_fmac(c,4,3); sh4_call(c,tg); }
  R(3)=LD32(R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01b6ec;
  R(2)=R(11);
  R(0)=0xcu;
  R(3)=R(2);
  fp_mov(c,6,15);
  R(4)=LD32(R(11)+16);
  R(5)=0x0u;
  fp_mov(c,4,15);
  ST32(R(15),R(2));
  fp_ld(c,7,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,0,R(14));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(14));
  fp_mov(c,0,12);
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c01b658u; fp_fmac(c,4,3); sh4_call(c,tg); }
  {  goto L8c01b6ec; }
L8c01b680:;
  R(0)=0x18u;
  R(3)=LD32(R(13)+28);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  c->fpul=R(3);
  fp_arith(c,2,3,5);
  fp_ld(c,12,R(0)+R(13));
  fp_arith(c,3,3,14);
  fp_arith(c,1,12,3);
  fp_float(c,3);
  { uint32_t tg=R(9); c->pr=0x8c01b698u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(3)=R(13);
  R(0)=0xcu;
  R(2)=R(3);
  fp_mov(c,3,15);
  R(4)=LD32(R(13)+20);
  R(5)=0x0u;
  fp_mov(c,8,13);
  ST32(R(15),R(3));
  fp_ld(c,7,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,0,R(14));
  fp_ld(c,2,R(0)+R(2));
  fp_mov(c,5,12);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(2));
  fp_mov(c,6,3);
  fp_mov(c,3,15);
  fp_fmac(c,3,2);
  { uint32_t tg=R(12); c->pr=0x8c01b6c0u; fp_mov(c,4,3); sh4_call(c,tg); }
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01b6ec;
  R(2)=R(10);
  R(0)=0x8u;
  fp_mov(c,6,15);
  R(3)=R(2);
  R(4)=LD32(R(10)+16);
  R(5)=0x0u;
  fp_mov(c,4,15);
  fp_mov(c,7,12);
  ST32(R(15),R(2));
  fp_ld(c,0,R(14));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(3));
  fp_fmac(c,6,3);
  fp_ld(c,3,R(3));
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c01b6ecu; fp_fmac(c,4,3); sh4_call(c,tg); }
L8c01b6ec:;
  R(3)=0x8u;
  R(8)+=0x1u;
  c->t=(int32_t)R(8)>=(int32_t)R(3);
  R(10)+=0x20u;
  R(13)+=0x20u;
  { uint32_t k=c->t; R(11)+=0x20u; if(k) goto L8c01b6fe; }
  {  goto L8c01b1ec; }
L8c01b6fe:;
  { c->pr=0x8c01b702u;  f_8c01aea0(c); }
  R(2)=0x8c0c4690u;
  R(0)=0x8c01b800u;
  fp_ld(c,3,R(0));
  fp_ld(c,2,R(2));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01b714;
  R(1)=0x8c0253a0u;
  { c->pr=0x8c01b714u;  f_8c0253a0(c); }
L8c01b714:;
  R(3)=0x8c0259a0u;
  { c->pr=0x8c01b71au;  f_8c0259a0(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(1)=0x8c026ce0u;
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
  { uint32_t tg=R(1); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
}
void f_8c01b738(SH4Ctx *c) {
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
  R(5)=0x8c0c4654u;
  R(8)=0x0u;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==3;
  { uint32_t k=!c->t; c->fr[4]=0x00000000u; if(k) goto L8c01b778; }
  R(4)=0x8c0c4658u;
  R(0)=0x8c01b800u;
  fp_ld(c,3,R(0));
  fp_ld(c,2,R(4));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,1,R(4));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,1);
  if(c->t) goto L8c01b778;
  ST8(R(5),R(8));
  fp_st(c,4,R(4));
L8c01b778:;
  R(5)=0x8c0c4694u;
  R(6)=0x8c0c4688u;
  R(4)=(int32_t)(int8_t)LD8(R(5));
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(11)=0x1u; if(k) goto L8c01b798; }
  R(2)=0x8c0c5198u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c01b798;
  R(3)=0x8c0c4630u;
  ST8(R(5),R(8));
  ST32(R(3),R(8));
  { ST32(R(6),R(8)); goto L8c01b7ae; }
L8c01b798:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c01b7ae;
  R(3)=0x8c0c5198u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c01b7ae;
  R(2)=0x8c0c4630u;
  ST8(R(5),R(11));
  ST32(R(2),R(8));
  ST32(R(6),R(8));
L8c01b7ae:;
  R(2)=0x8c123b74u;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c01b7c2; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c01b7c2:;
  R(0)=0x8c01b834u;
  fp_mov(c,5,3);
  fp_ld(c,2,R(0));
  R(10)=0x8c0c467cu;
  fp_arith(c,2,5,2);
  R(5)=0x8c0c4680u;
  c->fr[3]=0x00000000u;
  R(4)=0x8c0c4684u;
  fp_st(c,5,R(10));
  fp_ld(c,5,R(5));
  fp_cmp(c,0,5,3);
  if(c->t) goto L8c01b7e6;
  fp_ld(c,2,R(10));
  fp_arith(c,1,2,5);
  fp_st(c,2,R(4));
  fp_ld(c,1,R(10));
  { fp_st(c,1,R(5)); goto L8c01b860; }
L8c01b7e6:;
  fp_st(c,4,R(4));
  fp_ld(c,2,R(10));
  { fp_st(c,2,R(5)); goto L8c01ba42; }
L8c01b860:;
  R(5)=0x8c0c4670u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(5));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01b878;
  R(0)=0x8c01ba64u;
  fp_ld(c,1,R(4));
  fp_ld(c,2,R(0));
  fp_ld(c,0,R(5));
  fp_arith(c,2,1,2);
  fp_arith(c,1,0,1);
  fp_st(c,0,R(5));
L8c01b878:;
  R(6)=0x8c0c806cu;
  R(0)=(int32_t)(int8_t)LD8(R(6));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c01b8a0;
  R(0)=0x8c01ba70u;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(0));
  R(5)=0x8c0c8068u;
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(5));
  fp_arith(c,1,1,2);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,1,2);
  { uint32_t k=c->t; fp_st(c,1,R(5)); if(k) goto L8c01b8a0; }
  R(2)=0x8c07c8c0u;
  ST8(R(6),R(8));
  { c->pr=0x8c01b8a0u; R(4)=0x0u; f_8c07c8c0(c); }
L8c01b8a0:;
  R(2)=0x8c0c4630u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c01b8ac;
  {  goto L8c01ba42; }
L8c01b8ac:;
  R(4)=0x8c0c4638u;
  R(0)=0x8c01ba80u;
  R(1)=0x8c0c4630u;
  R(12)=R(8);
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  R(2)=R(15);
  R(3)=c->t;
  ST32(R(4),R(3));
  R(3)=R(15);
  R(3)+=0xcu;
  ST32(R(15),R(3));
  R(2)+=0x8u;
  ST32(R(15)+4,R(2));
  R(2)=0x0u;
  fp_ld(c,12,R(0));
  R(0)=0x8c01ba84u;
  fp_ld(c,13,R(0));
  R(0)=0x8c01ba88u;
  R(3)=LD32(R(1));
  fp_ld(c,15,R(0));
  c->t=R(2)>=R(3);
  { uint32_t k=!c->t; c->fr[14]=0x3F800000u; if(k) goto L8c01b8e0; }
  {  goto L8c01ba1e; }
L8c01b8e0:;
  R(14)=R(12);
  c->t=R(14)>>31;R(14)<<=1;
  R(3)=R(12);
  R(14)+=R(3);
  R(14)<<=2;
  R(2)=0x8c129af4u;
  R(14)<<=2;
  R(3)=0x10000u;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(2);
  R(4)=LD32(R(14));
  c->t=(R(3)&R(4))==0;
  { uint32_t k=c->t; R(13)=R(8); if(k) goto L8c01b90e; }
  R(0)=0xcu;
  fp_ld(c,2,R(10));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01b90e;
  R(13)=R(11);
L8c01b90e:;
  R(2)=0x40000u;
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c01b922;
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01b922;
  R(13)=R(11);
L8c01b922:;
  R(0)=LD32(R(14)+4);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c01b936;
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01b936;
  R(13)=R(11);
L8c01b936:;
  R(0)=LD32(R(14)+4);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c01b9b2;
  R(9)=0x8c130becu;
  R(4)=R(8);
L8c01b940:;
  R(2)=R(14);
  R(2)+=0x1cu;
  R(0)=0x8c130bd4u;
  R(2)+=R(4);
  fp_ld(c,2,R(2));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(4));
  R(3)+=0x8u;
  R(2)=R(14);
  R(3)+=R(4);
  fp_arith(c,1,2,3);
  R(2)+=0x1cu;
  R(4)+=0x4u;
  R(2)+=R(4);
  fp_st(c,2,R(3));
  R(3)=R(15);
  fp_ld(c,2,R(2));
  R(3)+=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(2)=R(14);
  R(3)+=R(4);
  fp_arith(c,1,2,3);
  R(2)+=0x1cu;
  R(4)+=0x4u;
  R(2)+=R(4);
  fp_st(c,2,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(4));
  R(3)+=0x8u;
  fp_ld(c,2,R(2));
  R(3)+=R(4);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(3));
  R(3)=0xcu;
  R(4)+=0x4u;
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c01b940;
  R(3)=0x8c0205d8u;
  R(4)=R(15);
  { c->pr=0x8c01b992u; R(4)+=0x8u; f_8c0205d8(c); }
  R(3)=LD32(R(15)+4);
  R(0)=0x4u;
  fp_ld(c,0,R(9));
  fp_ld(c,3,R(3));
  R(2)=LD32(R(15));
  fp_arith(c,2,3,0);
  fp_ld(c,2,R(0)+R(9));
  fp_ld(c,0,R(2));
  fp_fmac(c,3,2);
  fp_mov(c,4,3);
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c01b9b2;
  R(0)=0x5cu;
  R(2)=LD32(R(14)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c01b9b2u; R(4)=R(14); sh4_call(c,tg); }
L8c01b9b2:;
  R(0)=0x58u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01b9be;
  R(13)=R(11);
L8c01b9be:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c01b9ca;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c01ba10;
L8c01b9ca:;
  R(1)=LD32(R(14));
  R(3)=0x20000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c01ba08;
  R(0)=LD32(R(14));
  R(2)=0x80000u;
  c->t=(R(0)&R(2))==0;
  if(c->t) goto L8c01ba08;
  R(1)=0x8c0686d0u;
  { c->pr=0x8c01b9e0u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01bab4u;
  fp_ld(c,2,R(0));
  c->fr[1]=0x00000000u;
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,2);
  fp_cmp(c,1,3,1);
  if(!c->t) goto L8c01ba08;
  R(0)=0x50u;
  R(5)=R(14);
  R(3)=0x8c022520u;
  R(6)=R(14);
  R(7)=LD32(R(14)+R(0));
  R(5)+=0x1cu;
  fp_mov(c,4,14);
  R(6)+=0x28u;
  { c->pr=0x8c01ba08u; R(4)=0x44u; f_8c022520(c); }
L8c01ba08:;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14),R(2));
L8c01ba10:;
  R(2)=0x8c0c4630u;
  R(12)+=0x1u;
  R(3)=LD32(R(2));
  c->t=R(12)>=R(3);
  if(c->t) goto L8c01ba1e;
  {  goto L8c01b8e0; }
L8c01ba1e:;
  { c->pr=0x8c01ba22u;  f_8c01ac0a(c); }
  R(1)=0x8c0c4630u;
  R(3)=0x0u;
  R(2)=LD32(R(1));
  c->t=R(3)>=R(2);
  { uint32_t k=c->t; R(14)=R(8); if(k) goto L8c01ba3e; }
L8c01ba2e:;
  R(3)=0x8c01d46cu;
  { c->pr=0x8c01ba34u; R(4)=R(14); f_8c01d46c(c); }
  R(3)=0x8c0c4630u;
  R(14)+=0x1u;
  R(2)=LD32(R(3));
  c->t=R(14)>=R(2);
  if(!c->t) goto L8c01ba2e;
L8c01ba3e:;
  R(0)=0x8c0c4634u;
  ST32(R(0),R(8));
L8c01ba42:;
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
void f_8c01bae0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c0c4638u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(4));
  R(1)=0x8c0388eau;
  c->t=(R(2)&R(2))==0;
  R(3)=c->t;
  { c->pr=0x8c01bafau; ST32(R(4),R(3)); f_8c0388ea(c); }
  R(3)=0x8c07fed2u;
  { c->pr=0x8c01bb00u; fp_mov(c,15,0); f_8c07fed2(c); }
  R(13)=0x8c0c4630u;
  R(12)=0x0u;
  R(3)=0x8c0c469cu;
  R(0)=R(12);
  c->fr[14]=0x3F800000u;
  R(2)=0x8c0c4698u;
  fp_unary(c,0,14);
  ST32(R(2),R(12));
  fp_st(c,14,R(3));
  R(1)=LD32(R(13));
  c->t=R(0)>=R(1);
  { uint32_t k=c->t; R(14)=R(12); if(k) goto L8c01bb26; }
L8c01bb1a:;
  { c->pr=0x8c01bb1eu; R(4)=R(14); f_8c01bb4a(c); }
  R(2)=LD32(R(13));
  R(14)+=0x1u;
  c->t=R(14)>=R(2);
  if(!c->t) goto L8c01bb1a;
L8c01bb26:;
  R(1)=0x8c027fc0u;
  { c->pr=0x8c01bb2cu;  f_8c027fc0(c); }
  R(3)=0x8c0c4698u;
  R(2)=0x8c0c469cu;
  R(1)=0x8c07fee4u;
  ST32(R(3),R(12));
  { c->pr=0x8c01bb38u; fp_st(c,14,R(2)); f_8c07fee4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_mov(c,4,15);
  R(3)=0x8c0388c0u;
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0388c0(c); return; } }
}
void f_8c01bb4a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff74u;
  R(15)+=R(0);
  R(0)=0x84u;
  c->fr[3]=0x00000000u;
  R(3)=0x88u;
  R(2)=0x8c129af4u;
  R(3)+=R(15);
  ST32(R(3),R(4));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x88u;
  R(14)=LD32(R(15)+R(0));
  R(3)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(14)<<=2;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(2);
  R(0)=LD32(R(14)+4);
  R(13)=LD32(R(14));
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; R(13)=R(13)&0xFF; if(k) goto L8c01bc36; }
  R(0)=0x48u;
  R(3)=0x8c129af0u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c01bbf4u;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c01bc00;
  { fp_mov(c,4,3); goto L8c01bc02; }
L8c01bc00:;
  fp_ld(c,4,R(0)+R(14));
L8c01bc02:;
  R(1)=0x8c0388c0u;
  { c->pr=0x8c01bc08u;  f_8c0388c0(c); }
  R(3)=R(14);
  R(0)=0x44u;
  R(3)+=0x40u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x50u;
  fp_ld(c,4,R(3));
  R(3)=0x8c080120u;
  R(4)=R(14);
  R(5)=LD32(R(14)+R(0));
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c01bc20u; R(4)+=0x1cu; f_8c080120(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c01bc2a;
  R(2)=0x8c01d3f2u;
  {  goto L8c01d3f2; }
L8c01bc2a:;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(1)=0x8c01d3f2u;
  R(2)|=R(3);
  { ST32(R(14),R(2)); goto L8c01d3f2; }
L8c01bc36:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c01bc40;
  {  goto L8c01bdd8; }
L8c01bc40:;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c01bc80;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c01bc80;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c01bc50;
  {  goto L8c01bd20; }
L8c01bc50:;
  {  goto L8c01bdd8; }
L8c01bc80:;
  R(3)=0x8c0c467cu;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,2,R(3));
  R(2)=R(14);
  R(2)+=0x1cu;
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x78u;
  fp_arith(c,2,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x74u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x78u;
  R(2)=0x8c03aedau;
  { c->pr=0x8c01bca4u; fp_ld(c,4,R(0)+R(15)); f_8c03aeda(c); }
  R(0)=0x10u;
  R(3)=0x8c03aedau;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x84u;
  fp_arith(c,2,3,0);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c01bd0cu;
  fp_ld(c,3,R(0));
  R(0)=0x78u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c01bcbcu; fp_arith(c,0,4,3); f_8c03aeda(c); }
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x80u;
  fp_arith(c,2,3,0);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x74u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x84u;
  fp_ld(c,1,R(3));
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x74u;
  fp_arith(c,0,1,2);
  fp_st(c,1,R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x74u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(3));
  fp_arith(c,0,2,3);
  fp_arith(c,0,1,2);
  fp_st(c,1,R(0)+R(3));
  {  goto L8c01bdd8; }
L8c01bd20:;
  R(1)=R(14);
  R(0)=0x78u;
  R(1)+=0x10u;
  R(3)=R(14);
  ST32(R(15)+R(0),R(1));
  R(0)=0x74u;
  R(3)+=0x1cu;
  R(1)=0x8c0c467cu;
  ST32(R(15)+R(0),R(3));
  R(0)=0xcu;
  fp_ld(c,0,R(1));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x30u;
  fp_arith(c,1,0,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x70u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x78u;
  R(3)=LD32(R(15)+R(0));
  fp_ld(c,12,R(3));
  R(3)=0x8c03aedau;
  { c->pr=0x8c01bd54u; fp_mov(c,4,3); f_8c03aeda(c); }
  fp_arith(c,2,12,0);
  R(0)=0x84u;
  fp_st(c,12,R(0)+R(15));
  R(0)=0x78u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x8c01be2cu;
  fp_ld(c,3,R(0));
  R(0)=0x70u;
  fp_ld(c,12,R(3));
  R(3)=0x8c03aedau;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c01bd6eu; fp_arith(c,0,4,3); f_8c03aeda(c); }
  fp_arith(c,2,12,0);
  R(0)=0x80u;
  R(2)=0x8c03aedau;
  fp_st(c,12,R(0)+R(15));
  R(0)=0x78u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x4u;
  fp_ld(c,12,R(0)+R(3));
  R(0)=0x8c01be2cu;
  fp_ld(c,3,R(0));
  R(0)=0x70u;
  fp_ld(c,4,R(0)+R(15));
  { c->pr=0x8c01bd8au; fp_arith(c,0,4,3); f_8c03aeda(c); }
  R(0)=0x84u;
  R(2)=0x8c03aedau;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_fmac(c,3,12);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x78u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x4u;
  fp_ld(c,12,R(0)+R(3));
  R(0)=0x70u;
  { c->pr=0x8c01bda4u; fp_ld(c,4,R(0)+R(15)); f_8c03aeda(c); }
  fp_arith(c,2,12,0);
  R(0)=0x7cu;
  fp_st(c,12,R(0)+R(15));
  R(0)=0x74u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x84u;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x74u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(3));
L8c01bdd8:;
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c01bde8;
  R(3)=0x8c129af0u;
  c->fr[3]=0x3F800000u;
  { fp_st(c,3,R(3)); goto L8c01bdf0; }
L8c01bde8:;
  R(0)=0x48u;
  R(2)=0x8c129af0u;
  fp_ld(c,3,R(0)+R(14));
  fp_st(c,3,R(2));
L8c01bdf0:;
  R(0)=0x8c01be34u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c01be40;
  R(2)=0x8c0388c0u;
  { c->pr=0x8c01be02u; fp_mov(c,4,3); f_8c0388c0(c); }
  {  goto L8c01be46; }
L8c01be40:;
  R(3)=0x8c0388c0u;
  { c->pr=0x8c01be46u; fp_ld(c,4,R(0)+R(14)); f_8c0388c0(c); }
L8c01be46:;
  R(0)=0x50u;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c01be54;
  R(2)=0x8c01d3f2u;
  {  goto L8c01d3f2; }
L8c01be54:;
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==17;
  if(!c->t) goto L8c01bf40;
  R(3)=0x8c0c52dcu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c01bec0;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01be8e;
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01be8e;
  R(0)=0x8c01bfecu;
  fp_ld(c,3,R(0));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01be8e;
  R(0)=0x8c01bfecu;
  fp_ld(c,3,R(0));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c01bec0;
L8c01be8e:;
  R(3)=0x8c0c52e4u;
  R(0)=0x8c01bfecu;
  fp_ld(c,3,R(0));
  R(0)=0x8c01bff4u;
  fp_ld(c,2,R(3));
  fp_mov(c,1,3);
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_ld(c,2,R(0));
  R(0)=0x78u;
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,3,1);
  fp_ld(c,1,R(0)+R(14));
  fp_ld(c,0,R(3));
  fp_fmac(c,3,1);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,1,R(0)+R(14));
  fp_ld(c,0,R(3));
  fp_fmac(c,3,1);
  fp_st(c,3,R(0)+R(14));
L8c01bec0:;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01beea;
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01beea;
  R(0)=0x8c01bfecu;
  fp_ld(c,3,R(0));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01beea;
  R(0)=0x8c01bfecu;
  fp_ld(c,3,R(0));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c01bf18;
L8c01beea:;
  R(3)=0x8c01a5c0u;
  R(0)=0x20u;
  { c->pr=0x8c01bef2u; fp_ld(c,4,R(0)+R(14)); f_8c01a5c0(c); }
  R(0)=0x20u;
  R(3)=0x8c01a5c0u;
  fp_st(c,0,R(0)+R(14));
  R(0)=0x2cu;
  { c->pr=0x8c01befeu; fp_ld(c,4,R(0)+R(14)); f_8c01a5c0(c); }
  R(0)=0x2cu;
  R(3)=0x8c0c462cu;
  fp_st(c,0,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(3));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(3));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
L8c01bf18:;
  R(0)=0x8c01c000u;
  R(3)=0x8c045f72u;
  fp_ld(c,3,R(0));
  R(0)=0x24u;
  { c->pr=0x8c01bf24u; fp_st(c,3,R(0)+R(14)); f_8c045f72(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c01bfc8;
  R(0)=0x58u;
  R(5)=R(14);
  R(3)=0x8c07ff20u;
  R(4)=R(14);
  fp_ld(c,4,R(0)+R(14));
  R(5)+=0x28u;
  c->fr[5]=0x00000000u;
  { c->pr=0x8c01bf3cu; R(4)+=0x1cu; f_8c07ff20(c); }
  {  goto L8c01bfc8; }
L8c01bf40:;
  c->t=(int32_t)R(0)==21;
  if(c->t) goto L8c01bf48;
  {  goto L8c01c020; }
L8c01bf48:;
  R(3)=0x8c0c52dcu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c01bfac;
  R(0)=0x1cu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01bf7a;
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01bf7a;
  R(0)=0x8c01bfecu;
  fp_ld(c,3,R(0));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01bf7a;
  R(0)=0x8c01bfecu;
  fp_ld(c,3,R(0));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c01bfac;
L8c01bf7a:;
  R(3)=0x8c0c52e4u;
  R(0)=0x8c01bfecu;
  fp_ld(c,3,R(0));
  R(0)=0x8c01bff4u;
  fp_ld(c,2,R(3));
  fp_mov(c,1,3);
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_ld(c,2,R(0));
  R(0)=0x78u;
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,3,1);
  fp_ld(c,1,R(0)+R(14));
  fp_ld(c,0,R(3));
  fp_fmac(c,3,1);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,1,R(0)+R(14));
  fp_ld(c,0,R(3));
  fp_fmac(c,3,1);
  fp_st(c,3,R(0)+R(14));
L8c01bfac:;
  R(0)=0x8c01c000u;
  R(3)=0x8c07ff20u;
  fp_ld(c,3,R(0));
  R(0)=0x24u;
  R(5)=R(14);
  R(4)=R(14);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01c00cu;
  fp_ld(c,5,R(0));
  R(0)=0x58u;
  fp_ld(c,4,R(0)+R(14));
  R(5)+=0x28u;
  { uint32_t tg=R(3); c->pr=0x8c01bfc8u; R(4)+=0x1cu; sh4_call(c,tg); }
L8c01bfc8:;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(1)=0x8c01d38cu;
  R(2)|=R(3);
  { ST32(R(14),R(2)); goto L8c01d38c; }
L8c01c020:;
  R(1)=LD32(R(14));
  R(3)=0xf0000000u;
  R(2)=0x30000000u;
  R(1)&=R(3);
  c->t=R(1)==R(2);
  if(c->t) goto L8c01c030;
  {  goto L8c01c120; }
L8c01c030:;
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x68u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x60u;
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c01c108u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01c0e8;
  R(0)=0x60u;
  c->fr[2]=0x3F800000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_mov(c,3,2);
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x70u;
  fp_arith(c,2,2,3);
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x74u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x78u;
  c->fr[2]=0x00000000u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,3);
  R(1)=R(15);
  R(0)=0x68u;
  R(3)=0x8c0805a0u;
  R(1)+=0x64u;
  R(4)=R(14);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x44u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=R(14);
  fp_ld(c,5,R(0)+R(14));
  R(1)+=0x40u;
  R(0)=0x50u;
  fp_ld(c,4,R(1));
  R(5)=LD32(R(14)+R(0));
  R(7)=R(15);
  R(6)=LD32(R(14)+8);
  R(7)+=0x74u;
  { uint32_t tg=R(3); c->pr=0x8c01c0d0u; R(4)+=0x1cu; sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c01c0dc; }
  R(2)=0x8c01d38cu;
  {  goto L8c01d38c; }
L8c01c0dc:;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(1)=0x8c01d38cu;
  R(2)|=R(3);
  { ST32(R(14),R(2)); goto L8c01d38c; }
L8c01c0e8:;
  R(0)=LD32(R(14));
  R(1)=0x1000000u;
  R(3)=0x8c01d38cu;
  R(0)|=R(1);
  { ST32(R(14),R(0)); goto L8c01d38c; }
L8c01c120:;
  R(1)=LD32(R(14));
  R(0)=0x80000000u;
  R(3)&=R(1);
  c->t=R(3)==R(0);
  if(c->t) goto L8c01c12e;
  {  goto L8c01c310; }
L8c01c12e:;
  R(1)=LD32(R(14)+8);
  c->fpul=R(1);
  c->t=(int32_t)R(1)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c01c140; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c01c140:;
  R(2)=R(14);
  R(2)+=0x1cu;
  R(0)=0x6cu;
  R(1)=0x8c0c467cu;
  R(3)=0x8c0c4684u;
  fp_ld(c,12,R(1));
  R(1)=R(2);
  fp_mov(c,14,3);
  fp_mov(c,3,12);
  fp_ld(c,13,R(3));
  R(3)=R(2);
  ST32(R(15)+R(0),R(2));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x8c01c370u;
  fp_ld(c,2,R(3));
  fp_arith(c,1,3,0);
  fp_ld(c,0,R(0));
  R(0)=0x4u;
  fp_fmac(c,2,3);
  fp_ld(c,0,R(0)+R(1));
  R(0)=0x8c01c374u;
  R(1)=0x428c0000u;
  c->fpul=R(1);
  fp_arith(c,1,2,0);
  fp_ld(c,0,R(0));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x68u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_mov(c,2,13);
  c->fr[3]=c->fpul;
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,1,1,2);
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,1,2);
  { uint32_t k=c->t; fp_st(c,1,R(0)+R(14)); if(k) goto L8c01c19c; }
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14),R(2));
  fp_st(c,2,R(0)+R(14));
L8c01c19c:;
  R(3)=0x8c0c467cu;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x68u;
  fp_ld(c,12,R(3));
  R(2)=0x8c03aedau;
  fp_arith(c,1,12,3);
  fp_ld(c,3,R(0)+R(15));
  fp_mov(c,4,12);
  { c->pr=0x8c01c1b2u; fp_arith(c,0,4,3); f_8c03aeda(c); }
  fp_mov(c,3,14);
  fp_arith(c,2,3,0);
  R(0)=0x70u;
  fp_mov(c,2,12);
  R(3)=0x8c03aedau;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c01c384u;
  fp_ld(c,1,R(0));
  fp_arith(c,1,2,3);
  fp_mov(c,4,2);
  { c->pr=0x8c01c1ceu; fp_arith(c,0,4,1); f_8c03aeda(c); }
  fp_mov(c,3,14);
  fp_arith(c,2,3,0);
  R(3)=0x8c03aedau;
  R(0)=0x74u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c01c1dcu; fp_mov(c,4,12); f_8c03aeda(c); }
  R(0)=0x68u;
  fp_mov(c,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8c01c384u;
  R(3)=0x8c03aedau;
  fp_fmac(c,3,14);
  fp_ld(c,2,R(0));
  fp_mov(c,4,3);
  { c->pr=0x8c01c1f0u; fp_arith(c,0,4,2); f_8c03aeda(c); }
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_unary(c,0,0);
  R(0)=0x78u;
  fp_mov(c,2,13);
  fp_arith(c,2,2,14);
  fp_arith(c,0,0,3);
  fp_unary(c,1,0);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x6cu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x70u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8c01c388u;
  R(3)=0x8c03aedau;
  fp_ld(c,0,R(0));
  { c->pr=0x8c01c218u; fp_fmac(c,4,12); f_8c03aeda(c); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x8c01c38cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0));
  R(0)=0x6cu;
  fp_ld(c,2,R(2));
  fp_fmac(c,2,3);
  fp_mov(c,3,13);
  fp_arith(c,2,3,14);
  fp_st(c,2,R(2));
  R(2)=0x4u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x70u;
  R(2)+=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c01c390u;
  fp_ld(c,0,R(0));
  R(0)=0x8c01c394u;
  R(2)=0x8c03aedau;
  fp_fmac(c,2,12);
  fp_ld(c,1,R(0));
  fp_mov(c,4,2);
  { c->pr=0x8c01c24eu; fp_arith(c,0,4,1); f_8c03aeda(c); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x8c01c398u;
  R(2)=0x8u;
  fp_arith(c,2,3,0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  fp_ld(c,0,R(0));
  R(0)=0x6cu;
  fp_ld(c,2,R(1));
  fp_fmac(c,2,3);
  fp_mov(c,3,12);
  fp_st(c,2,R(1));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x6cu;
  R(2)+=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8c01c384u;
  R(2)=0x8c03aedau;
  fp_arith(c,0,3,0);
  fp_ld(c,4,R(0));
  fp_mov(c,0,14);
  { c->pr=0x8c01c27cu; fp_fmac(c,4,3); f_8c03aeda(c); }
  R(0)=0x8c01c39cu;
  fp_mov(c,3,0);
  fp_ld(c,2,R(0));
  R(0)=0x8c01c3a0u;
  fp_ld(c,0,R(0));
  R(0)=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  fp_fmac(c,2,3);
  fp_ld(c,3,R(1));
  fp_mov(c,0,2);
  fp_fmac(c,3,13);
  fp_st(c,3,R(1));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x78u;
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_mov(c,15,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c01c2b8;
  R(3)=0x8c01d38cu;
  {  goto L8c01d38c; }
L8c01c2b8:;
  fp_fsrra(c,15);
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  R(5)=R(15);
  R(3)=0x8c02520au;
  R(6)=R(15);
  R(4)=R(15);
  fp_arith(c,2,3,15);
  R(5)+=0x5cu;
  R(6)+=0x50u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_arith(c,2,3,15);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c01c2e8u; R(4)+=0x70u; sh4_call(c,tg); }
  R(3)=R(14);
  R(0)=0x44u;
  R(2)=R(15);
  R(3)+=0x40u;
  R(2)+=0x50u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x1u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x50u;
  fp_ld(c,4,R(3));
  R(7)=R(15);
  R(5)=LD32(R(14)+R(0));
  R(0)=0x70u;
  R(3)=0x8c0805a0u;
  R(7)+=0x60u;
  { c->pr=0x8c01c30au; R(4)=LD32(R(15)+R(0)); f_8c0805a0(c); }
  R(2)=0x8c01d38cu;
  { R(15)+=0x4u; goto L8c01d38c; }
L8c01c310:;
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==19;
  if(c->t) goto L8c01c31c;
  {  goto L8c01c6aa; }
L8c01c31c:;
  R(0)=0x8c01c3b0u;
  fp_ld(c,3,R(0));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x6cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c01c3b4u;
  fp_ld(c,3,R(0));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x64u;
  fp_arith(c,3,2,3);
  c->fr[3]=0x00000000u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c01c3b8u;
  fp_ld(c,1,R(0));
  R(0)=0x60u;
  fp_st(c,1,R(0)+R(15));
  R(0)=0x74u;
  { fp_st(c,3,R(0)+R(15)); goto L8c01c3dc; }
L8c01c3c0:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x74u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,0,0,1);
  fp_st(c,0,R(0)+R(15));
L8c01c3dc:;
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c01c3c0;
  R(0)=0x58u;
  R(3)=R(14);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x70u;
  R(3)+=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c01c480u;
  fp_ld(c,3,R(0));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(3));
  R(3)=0x8c03aedau;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x74u;
  { c->pr=0x8c01c416u; fp_ld(c,4,R(0)+R(15)); f_8c03aeda(c); }
  R(0)=0x68u;
  R(3)=0x8c03aedau;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x34u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c01c488u;
  fp_ld(c,3,R(0));
  R(0)=0x74u;
  fp_ld(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c01c436u; fp_arith(c,0,4,3); sh4_call(c,tg); }
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x38u;
  R(3)=0x28u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c01c48cu;
  fp_ld(c,3,R(0));
  R(0)=0x60u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x78u;
  { ST32(R(15)+R(0),R(3)); goto L8c01c586; }
L8c01c4a0:;
  R(0)=0x34u;
  R(3)=0x8c03aedau;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x74u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,1,0,1);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x74u;
  { uint32_t tg=R(3); c->pr=0x8c01c4dcu; fp_ld(c,4,R(0)+R(15)); sh4_call(c,tg); }
  R(0)=0x68u;
  R(3)=0x8c03aedau;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x34u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c01c648u;
  fp_ld(c,3,R(0));
  R(0)=0x74u;
  fp_ld(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c01c4f8u; fp_arith(c,0,4,3); sh4_call(c,tg); }
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x38u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x48u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  R(3)=0x8c0388c0u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x70u;
  { c->pr=0x8c01c552u; fp_ld(c,4,R(0)+R(15)); f_8c0388c0(c); }
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x70u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x50u;
  R(3)=LD32(R(14)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(3)=0x8c080400u;
  R(4)=R(15);
  R(5)+=0x50u;
  R(7)+=0x2cu;
  R(6)+=0x44u;
  { c->pr=0x8c01c57au; R(4)+=0x38u; f_8c080400(c); }
  R(15)+=0x4u;
  R(0)=0x78u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x78u;
  R(2)+=0xffffffffu;
  ST32(R(15)+R(0),R(2));
L8c01c586:;
  R(0)=0x5cu;
  c->fr[1]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,1,2,3);
  fp_cmp(c,1,1,2);
  if(c->t) goto L8c01c59e;
  R(0)=0x78u;
  R(2)=LD32(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c01c4a0;
L8c01c59e:;
  R(3)=0x8c0686d0u;
  { c->pr=0x8c01c5a4u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01c658u;
  fp_ld(c,2,R(0));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x8c01c65cu;
  fp_float(c,3);
  R(3)=0x8c0388c0u;
  fp_arith(c,0,1,2);
  c->fr[0]=0x00000000u;
  fp_arith(c,2,3,1);
  fp_ld(c,1,R(0));
  fp_arith(c,3,3,1);
  fp_mov(c,4,3);
  { c->pr=0x8c01c5c4u; fp_arith(c,0,4,0); f_8c0388c0(c); }
  R(0)=0x44u;
  R(3)=0x8c080120u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x54u;
  R(5)=LD32(R(14)+R(0));
  R(4)=R(15);
  R(6)=0x1u;
  fp_mov(c,4,5);
  { c->pr=0x8c01c5d8u; R(4)+=0x1cu; f_8c080120(c); }
  R(0)=0x1cu;
  R(6)=R(15);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c01c664u;
  R(4)=0x4001u;
  R(5)=R(15);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x10u;
  c->fr[4]=0x00000000u;
  R(6)+=0x10u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,1,1,2);
  fp_arith(c,2,1,3);
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x54u;
  R(7)=LD32(R(14)+R(0));
  R(0)=0x8c01c668u;
  fp_ld(c,6,R(0));
  fp_mov(c,5,6);
  R(3)=0x8c01a7e0u;
  { c->pr=0x8c01c61eu; R(5)+=0x1cu; f_8c01a7e0(c); }
  R(2)=0x8c0c4684u;
  R(0)=0x2cu;
  fp_ld(c,0,R(2));
  {  goto L8c01c680; }
L8c01c680:;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(3)=R(14);
  R(3)+=0x40u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8c01c7e0u;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(0));
  R(0)=0x8c01c7e4u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  fp_ld(c,0,R(0));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(2));
  fp_fmac(c,2,3);
  { fp_st(c,2,R(0)+R(14)); goto L8c01d38c; }
L8c01c6aa:;
  c->t=(int32_t)R(0)==20;
  if(!c->t) goto L8c01c6cc;
  R(0)=0x50u;
  R(6)=R(14);
  R(1)=LD32(R(14)+R(0));
  R(5)=R(14);
  R(3)=0x8c080400u;
  R(7)=R(14);
  R(4)=R(14);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)+=0x1cu;
  R(6)+=0x28u;
  R(7)+=0x34u;
  { c->pr=0x8c01c6c8u; R(4)+=0x10u; f_8c080400(c); }
  {  goto L8c01d098; }
L8c01c6cc:;
  R(1)=LD32(R(14));
  R(3)=0xf0000000u;
  R(0)=0x70000000u;
  R(1)&=R(3);
  c->t=R(1)==R(0);
  if(c->t) goto L8c01c6dc;
  {  goto L8c01cf40; }
L8c01c6dc:;
  R(0)=0x8c01c7f4u;
  R(2)=0x8c0686d0u;
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  { c->pr=0x8c01c6e8u; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01c7fcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c01c800u;
  fp_ld(c,1,R(0));
  R(0)=0x8c01c804u;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(0)=0x4u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_arith(c,1,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x70u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_arith(c,1,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x74u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_arith(c,1,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x78u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x14u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x64u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x18u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x28u;
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x68u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(14));
  R(0)=0x6cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x64u;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  R(0)=0x6cu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c01c808u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c01c7c0;
  {  goto L8c01d38c; }
L8c01c7c0:;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_fsrra(c,3);
  fp_st(c,3,R(0)+R(15));
  { R(3)=0x0u; goto L8c01c90c; }
L8c01c820:;
  R(1)=LD32(R(15)+8);
  R(3)=R(15);
  R(3)+=0x64u;
  R(1)<<=2;
  R(0)=0x18u;
  R(1)+=R(3);
  fp_ld(c,3,R(0)+R(15));
  fp_ld(c,2,R(1));
  R(3)=R(14);
  R(3)+=0x28u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(1));
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x40u;
  R(2)=LD32(R(15)+8);
  R(0)<<=2;
  R(2)<<=2;
  R(0)+=R(3);
  R(3)=LD32(R(15)+8);
  R(2)+=R(1);
  R(1)=R(14);
  R(1)+=0x1cu;
  fp_ld(c,2,R(0));
  R(3)<<=2;
  R(3)+=R(1);
  R(1)=R(15);
  R(1)+=0x4u;
  fp_ld(c,3,R(3));
  fp_ld(c,0,R(1));
  R(1)=LD32(R(15)+8);
  fp_fmac(c,3,2);
  R(8)=R(15);
  R(8)+=0x64u;
  R(1)<<=2;
  R(0)=R(15);
  R(1)+=R(8);
  R(8)=R(15);
  R(8)+=0xcu;
  fp_ld(c,12,R(1));
  fp_ld(c,1,R(8));
  R(0)+=0x64u;
  R(8)=R(14);
  R(8)+=0x1cu;
  fp_arith(c,2,12,1);
  fp_arith(c,1,3,12);
  fp_st(c,3,R(2));
  R(2)=R(15);
  R(3)=LD32(R(15)+8);
  R(2)+=0x34u;
  R(1)=LD32(R(15)+8);
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(14);
  R(0)+=0x28u;
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=LD32(R(15)+8);
  R(0)<<=2;
  R(0)+=R(8);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(2));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  R(2)=R(15);
  R(2)+=0x28u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(1));
  fp_ld(c,0,R(0)+R(15));
  R(0)=R(15);
  R(0)+=0x64u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(15)+8);
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(15);
  R(0)+=0x70u;
  fp_ld(c,2,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0xcu;
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(0)+R(15));
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  R(3)=LD32(R(15)+8);
  R(3)<<=2;
  R(1)=LD32(R(15)+8);
  R(2)=R(15);
  R(0)=R(15);
  R(2)+=0x1cu;
  R(0)+=0x70u;
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(15);
  R(0)+=0x64u;
  fp_ld(c,1,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0xcu;
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(3));
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
L8c01c90c:;
  R(1)=R(3);
  R(2)=0x3u;
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  ST32(R(15)+8,R(3));
  if(!c->t) goto L8c01c820;
  R(0)=0x50u;
  R(3)=LD32(R(14)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c080400u;
  R(6)=R(15);
  R(7)=R(15);
  R(4)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x20u;
  R(7)+=0x44u;
  { c->pr=0x8c01c930u; R(4)+=0x38u; f_8c080400(c); }
  R(15)+=0x4u;
  R(0)=0x8c01caa4u;
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c01caa8u;
  fp_ld(c,1,R(0));
  fp_st(c,1,R(15));
  { R(3)=0x0u; goto L8c01ca60; }
L8c01c94a:;
  R(1)=LD32(R(15)+8);
  R(3)=R(15);
  R(2)=LD32(R(15)+8);
  R(0)=R(15);
  R(1)<<=2;
  R(8)=R(14);
  R(3)+=0x40u;
  R(0)+=0x64u;
  R(1)+=R(3);
  R(3)=LD32(R(15)+8);
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=R(14);
  R(0)+=0x28u;
  R(3)<<=2;
  R(3)+=R(0);
  R(0)=LD32(R(15)+8);
  R(8)+=0x1cu;
  fp_ld(c,2,R(3));
  R(0)<<=2;
  R(3)=LD32(R(15)+8);
  R(0)+=R(8);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=R(14);
  R(0)+=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(2));
  fp_ld(c,0,R(15));
  R(3)<<=2;
  fp_fmac(c,3,2);
  R(3)+=R(0);
  R(2)=R(15);
  R(0)=0xcu;
  fp_ld(c,1,R(3));
  fp_ld(c,12,R(0)+R(15));
  R(0)=R(14);
  R(0)+=0x10u;
  R(8)=R(14);
  fp_arith(c,2,12,1);
  R(2)+=0x34u;
  R(8)+=0x28u;
  R(9)=R(14);
  R(9)+=0x1cu;
  fp_arith(c,1,3,12);
  fp_st(c,3,R(1));
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15)+8);
  R(1)<<=2;
  R(3)<<=2;
  R(1)+=R(0);
  R(0)=LD32(R(15)+8);
  R(3)+=R(2);
  R(2)=R(15);
  R(2)+=0x64u;
  R(0)<<=2;
  R(0)+=R(2);
  R(2)=LD32(R(15)+8);
  fp_ld(c,1,R(0));
  R(2)<<=2;
  R(2)+=R(8);
  R(8)=LD32(R(15)+8);
  R(8)<<=2;
  R(0)=0x4u;
  fp_ld(c,2,R(2));
  R(8)+=R(9);
  fp_ld(c,0,R(0)+R(15));
  fp_ld(c,3,R(8));
  R(0)=0xcu;
  R(2)=R(15);
  R(2)+=0x28u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(15));
  fp_ld(c,2,R(0)+R(15));
  R(0)=R(14);
  R(0)+=0x10u;
  R(8)=R(15);
  fp_fmac(c,3,1);
  fp_ld(c,0,R(1));
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15)+8);
  R(1)<<=2;
  R(3)<<=2;
  R(1)+=R(0);
  R(0)=LD32(R(15)+8);
  R(3)+=R(2);
  R(2)=R(15);
  R(2)+=0x64u;
  fp_ld(c,1,R(1));
  R(0)<<=2;
  R(0)+=R(2);
  R(2)=LD32(R(15)+8);
  R(2)<<=2;
  R(8)+=0x70u;
  fp_ld(c,2,R(0));
  R(2)+=R(8);
  fp_ld(c,0,R(15));
  fp_ld(c,3,R(2));
  R(0)=0xcu;
  R(2)=R(15);
  R(2)+=0x1cu;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,0,1);
  R(0)=R(15);
  R(0)+=0x64u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(15)+8);
  R(3)<<=2;
  fp_ld(c,0,R(15));
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(15);
  R(0)+=0x70u;
  fp_ld(c,2,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=LD32(R(15)+8);
  fp_ld(c,3,R(2));
  R(0)<<=2;
  fp_fmac(c,3,2);
  R(8)=R(14);
  R(8)+=0x10u;
  R(0)+=R(8);
  fp_ld(c,1,R(0));
  R(0)=0xcu;
  fp_ld(c,12,R(0)+R(15));
  fp_arith(c,2,12,1);
  fp_arith(c,1,3,12);
  fp_st(c,3,R(3));
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
L8c01ca60:;
  R(1)=R(3);
  R(2)=0x3u;
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  ST32(R(15)+8,R(3));
  if(c->t) goto L8c01ca6e;
  {  goto L8c01c94a; }
L8c01ca6e:;
  R(0)=0x50u;
  R(3)=LD32(R(14)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c080400u;
  R(6)=R(15);
  R(7)=R(15);
  R(4)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x20u;
  R(7)+=0x44u;
  { c->pr=0x8c01ca88u; R(4)+=0x38u; f_8c080400(c); }
  R(15)+=0x4u;
  R(2)=0x0u;
  { ST32(R(15)+8,R(2)); goto L8c01cbe2; }
L8c01cac0:;
  R(2)=LD32(R(15)+8);
  R(0)=R(14);
  R(1)=LD32(R(15)+8);
  R(3)=R(15);
  R(2)<<=2;
  R(8)=R(15);
  R(0)+=0x28u;
  fp_ld(c,1,R(15));
  R(2)+=R(0);
  R(0)=LD32(R(15)+8);
  R(1)<<=2;
  fp_ld(c,2,R(2));
  R(3)+=0x40u;
  R(2)=R(14);
  R(1)+=R(3);
  R(3)=R(14);
  R(3)+=0x1cu;
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=LD32(R(15)+8);
  R(8)+=0x64u;
  fp_ld(c,3,R(0));
  R(3)<<=2;
  R(0)=0x4u;
  R(3)+=R(8);
  fp_ld(c,0,R(0)+R(15));
  fp_ld(c,12,R(3));
  fp_fmac(c,3,2);
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,12,1);
  R(3)<<=2;
  fp_arith(c,1,3,12);
  R(2)+=0x10u;
  R(8)=R(14);
  R(0)=0xcu;
  R(3)+=R(2);
  fp_ld(c,1,R(0)+R(15));
  fp_ld(c,2,R(3));
  R(0)=R(14);
  R(2)=R(15);
  R(0)+=0x10u;
  fp_arith(c,2,1,2);
  R(2)+=0x34u;
  R(8)+=0x1cu;
  fp_arith(c,1,3,1);
  fp_st(c,3,R(1));
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=LD32(R(15)+8);
  R(3)<<=2;
  fp_ld(c,13,R(1));
  R(3)+=R(2);
  R(2)=R(14);
  R(2)+=0x28u;
  R(1)=R(15);
  R(0)<<=2;
  R(0)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)+=0x4u;
  R(2)<<=2;
  R(2)+=R(8);
  fp_ld(c,3,R(2));
  R(8)=LD32(R(15)+8);
  R(9)=R(15);
  R(9)+=0x64u;
  fp_ld(c,1,R(15));
  R(8)<<=2;
  fp_ld(c,0,R(1));
  R(8)+=R(9);
  fp_ld(c,2,R(0));
  fp_ld(c,12,R(8));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,12,1);
  fp_mov(c,0,13);
  R(0)=R(14);
  R(0)+=0x10u;
  R(2)=R(15);
  R(2)+=0x28u;
  fp_arith(c,1,3,12);
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15)+8);
  R(1)<<=2;
  R(3)<<=2;
  R(1)+=R(0);
  R(0)=LD32(R(15)+8);
  R(3)+=R(2);
  R(2)=R(15);
  R(2)+=0x70u;
  R(0)<<=2;
  R(0)+=R(2);
  R(2)=LD32(R(15)+8);
  R(8)=R(15);
  R(8)+=0x64u;
  fp_ld(c,3,R(15));
  R(2)<<=2;
  fp_ld(c,1,R(0));
  R(2)+=R(8);
  fp_ld(c,0,R(1));
  fp_ld(c,2,R(2));
  R(0)=0xcu;
  R(2)=R(15);
  R(2)+=0x1cu;
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_ld(c,2,R(0)+R(15));
  R(0)=R(15);
  R(0)+=0x70u;
  fp_fmac(c,1,2);
  fp_st(c,1,R(3));
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(15)+8);
  R(3)<<=2;
  fp_ld(c,3,R(15));
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(15);
  R(0)+=0x64u;
  R(2)<<=2;
  R(2)+=R(0);
  fp_ld(c,2,R(2));
  fp_arith(c,2,2,3);
  R(2)=LD32(R(15)+8);
  fp_ld(c,1,R(1));
  R(1)=R(14);
  R(1)+=0x10u;
  R(2)<<=2;
  R(0)=0xcu;
  fp_arith(c,1,1,2);
  R(2)+=R(1);
  fp_ld(c,2,R(0)+R(15));
  fp_ld(c,3,R(2));
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(3));
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  ST32(R(15)+8,R(3));
L8c01cbe2:;
  R(1)=LD32(R(15)+8);
  R(2)=0x3u;
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(c->t) goto L8c01cbee;
  {  goto L8c01cac0; }
L8c01cbee:;
  R(0)=0x50u;
  R(3)=LD32(R(14)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c080400u;
  R(6)=R(15);
  R(7)=R(15);
  R(4)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x20u;
  R(7)+=0x44u;
  { c->pr=0x8c01cc08u; R(4)+=0x38u; f_8c080400(c); }
  R(15)+=0x4u;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  { R(3)=0x0u; goto L8c01cc76; }
L8c01cc14:;
  R(0)=0x4u;
  R(1)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(14));
  R(3)=R(15);
  R(3)+=0x70u;
  fp_arith(c,2,2,3);
  R(1)<<=2;
  R(1)+=R(3);
  R(3)=R(15);
  fp_ld(c,1,R(1));
  R(3)+=0x64u;
  fp_arith(c,1,1,2);
  fp_st(c,1,R(1));
  R(1)=R(15);
  R(2)=LD32(R(15)+8);
  R(1)+=0x58u;
  R(0)=LD32(R(15)+8);
  R(2)<<=2;
  R(2)+=R(1);
  R(1)=LD32(R(15)+8);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=R(14);
  R(3)+=0x10u;
  fp_ld(c,2,R(0));
  R(1)<<=2;
  R(1)+=R(3);
  fp_ld(c,3,R(1));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(2));
  R(1)=LD32(R(15)+8);
  R(2)=R(15);
  R(3)=LD32(R(15)+8);
  R(2)+=0x58u;
  R(1)<<=2;
  R(3)<<=2;
  R(0)=0x14u;
  R(1)+=R(2);
  fp_ld(c,2,R(0)+R(15));
  R(3)+=R(2);
  fp_ld(c,0,R(1));
  fp_ld(c,3,R(3));
  R(0)=0x14u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
L8c01cc76:;
  R(1)=R(3);
  R(2)=0x3u;
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  ST32(R(15)+8,R(3));
  if(!c->t) goto L8c01cc14;
  R(0)=0x8c01cda4u;
  fp_ld(c,3,R(0));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01cd82;
  fp_fsrra(c,2);
  R(0)=0x14u;
  fp_st(c,2,R(0)+R(15));
  { R(3)=0x0u; goto L8c01cd5c; }
L8c01cc96:;
  R(1)=LD32(R(15)+8);
  R(3)=R(15);
  R(3)+=0x58u;
  R(1)<<=2;
  R(0)=0x14u;
  R(1)+=R(3);
  fp_ld(c,3,R(0)+R(15));
  fp_ld(c,2,R(1));
  R(3)=R(14);
  R(3)+=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(1));
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x40u;
  R(2)=LD32(R(15)+8);
  R(0)<<=2;
  R(2)<<=2;
  R(0)+=R(3);
  R(3)=LD32(R(15)+8);
  R(2)+=R(1);
  R(1)=R(15);
  R(1)+=0x58u;
  fp_ld(c,1,R(0));
  R(3)<<=2;
  R(3)+=R(1);
  R(1)=R(15);
  R(1)+=0xcu;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(1));
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(2));
  R(2)=R(15);
  R(3)=LD32(R(15)+8);
  R(0)=R(15);
  R(1)=LD32(R(15)+8);
  R(2)+=0x34u;
  R(3)<<=2;
  R(0)+=0x58u;
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(14);
  R(0)+=0x1cu;
  fp_ld(c,2,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0xcu;
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(0)+R(15));
  R(0)=R(15);
  R(2)=R(15);
  R(0)+=0x58u;
  fp_fmac(c,3,2);
  R(2)+=0x28u;
  fp_st(c,3,R(3));
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15)+8);
  R(1)<<=2;
  R(3)<<=2;
  R(1)+=R(0);
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(0)=R(15);
  R(0)+=0x70u;
  fp_ld(c,2,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0xcu;
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(0)+R(15));
  R(2)=R(15);
  R(0)=R(15);
  R(2)+=0x1cu;
  fp_fmac(c,3,2);
  R(0)+=0x70u;
  fp_st(c,3,R(3));
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(15)+8);
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(15);
  R(0)+=0x58u;
  fp_ld(c,1,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0xcu;
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(3));
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
L8c01cd5c:;
  R(1)=R(3);
  R(2)=0x3u;
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  ST32(R(15)+8,R(3));
  if(!c->t) goto L8c01cc96;
  R(0)=0x50u;
  R(3)=LD32(R(14)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c080400u;
  R(6)=R(15);
  R(7)=R(15);
  R(4)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x20u;
  R(7)+=0x44u;
  { c->pr=0x8c01cd80u; R(4)+=0x38u; f_8c080400(c); }
  R(15)+=0x4u;
L8c01cd82:;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  { R(3)=0x0u; goto L8c01ce08; }
L8c01cdc0:;
  R(1)=LD32(R(15)+8);
  R(3)=R(15);
  R(2)=LD32(R(15)+8);
  R(0)=R(15);
  R(1)<<=2;
  R(3)+=0x58u;
  R(0)+=0x64u;
  R(1)+=R(3);
  R(3)=LD32(R(15)+8);
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=R(14);
  R(0)+=0x10u;
  fp_ld(c,2,R(2));
  R(3)<<=2;
  R(2)=R(15);
  R(3)+=R(0);
  fp_ld(c,3,R(3));
  R(2)+=0x58u;
  R(0)=0x14u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(1));
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15)+8);
  R(1)<<=2;
  fp_ld(c,2,R(0)+R(15));
  R(3)<<=2;
  R(1)+=R(2);
  R(3)+=R(2);
  fp_ld(c,0,R(1));
  fp_ld(c,3,R(3));
  fp_fmac(c,2,3);
  R(0)=0x14u;
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
L8c01ce08:;
  R(1)=R(3);
  R(2)=0x3u;
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  ST32(R(15)+8,R(3));
  if(!c->t) goto L8c01cdc0;
  R(0)=0x8c01cf20u;
  fp_ld(c,3,R(0));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01ce22;
  {  goto L8c01d38c; }
L8c01ce22:;
  fp_fsrra(c,2);
  R(0)=0x14u;
  fp_st(c,2,R(0)+R(15));
  { R(3)=0x0u; goto L8c01cef2; }
L8c01ce2c:;
  R(1)=LD32(R(15)+8);
  R(3)=R(15);
  R(3)+=0x58u;
  R(1)<<=2;
  R(0)=0x14u;
  R(1)+=R(3);
  fp_ld(c,3,R(0)+R(15));
  fp_ld(c,2,R(1));
  R(3)=R(14);
  R(3)+=0x1cu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(1));
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x40u;
  R(2)=LD32(R(15)+8);
  R(0)<<=2;
  R(2)<<=2;
  R(0)+=R(3);
  R(3)=LD32(R(15)+8);
  R(2)+=R(1);
  R(1)=R(15);
  R(1)+=0x58u;
  fp_ld(c,1,R(0));
  R(3)<<=2;
  R(3)+=R(1);
  R(1)=R(15);
  R(1)+=0xcu;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(1));
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(2));
  R(2)=R(15);
  R(3)=LD32(R(15)+8);
  R(0)=R(15);
  R(1)=LD32(R(15)+8);
  R(2)+=0x34u;
  R(3)<<=2;
  R(0)+=0x58u;
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(14);
  R(0)+=0x1cu;
  fp_ld(c,2,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0xcu;
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(0)+R(15));
  R(0)=R(15);
  R(2)=R(15);
  R(0)+=0x58u;
  fp_fmac(c,3,2);
  R(2)+=0x28u;
  fp_st(c,3,R(3));
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15)+8);
  R(1)<<=2;
  R(3)<<=2;
  R(1)+=R(0);
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(0)=R(15);
  R(0)+=0x70u;
  fp_ld(c,2,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0xcu;
  fp_ld(c,3,R(2));
  fp_ld(c,0,R(0)+R(15));
  R(2)=R(15);
  R(0)=R(15);
  R(2)+=0x1cu;
  fp_fmac(c,3,2);
  R(0)+=0x70u;
  fp_st(c,3,R(3));
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(15)+8);
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=LD32(R(15)+8);
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(15);
  R(0)+=0x58u;
  fp_ld(c,1,R(1));
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0xcu;
  fp_ld(c,2,R(2));
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(3));
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
L8c01cef2:;
  R(1)=R(3);
  R(2)=0x3u;
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  ST32(R(15)+8,R(3));
  if(!c->t) goto L8c01ce2c;
  R(0)=0x50u;
  R(3)=LD32(R(14)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(3)=0x8c080400u;
  R(6)=R(15);
  R(7)=R(15);
  R(4)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x20u;
  R(7)+=0x44u;
  { c->pr=0x8c01cf16u; R(4)+=0x38u; f_8c080400(c); }
  { R(15)+=0x4u; goto L8c01d38c; }
L8c01cf40:;
  R(1)=LD32(R(14));
  R(2)=0x40000000u;
  R(3)&=R(1);
  c->t=R(3)==R(2);
  if(c->t) goto L8c01cf66;
  R(1)=LD32(R(14));
  R(3)=0xf0000000u;
  R(2)=0x50000000u;
  R(1)&=R(3);
  c->t=R(1)==R(2);
  if(c->t) goto L8c01cf66;
  R(1)=LD32(R(14));
  R(3)=0xf0000000u;
  R(2)=0x60000000u;
  R(1)&=R(3);
  c->t=R(1)==R(2);
  if(c->t) goto L8c01cf66;
  {  goto L8c01d214; }
L8c01cf66:;
  R(0)=0x10u;
  R(3)=0xf0000000u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x70u;
  R(1)=0x60000000u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x74u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x78u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(2)=LD32(R(14));
  R(2)&=R(3);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c01cfa2;
  R(0)=0x78u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
L8c01cfa2:;
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c01d170u;
  fp_ld(c,0,R(0));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x50u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x54u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x64u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(3)=0xf0000000u;
  R(0)=0x6cu;
  R(1)=0x60000000u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(2)=LD32(R(14));
  R(2)&=R(3);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c01cffc;
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
L8c01cffc:;
  R(0)=0x74u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x70u;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8c01d174u;
  fp_mov(c,2,0);
  fp_fmac(c,3,2);
  fp_mov(c,15,3);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c01d01a;
  {  goto L8c01d38c; }
L8c01d01a:;
  R(0)=0x78u;
  fp_mov(c,14,15);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8c01d170u;
  fp_ld(c,1,R(0));
  R(3)=R(14);
  fp_mov(c,2,0);
  fp_fmac(c,14,2);
  fp_fsrra(c,15);
  R(3)+=0x40u;
  R(0)=0x64u;
  fp_mov(c,2,14);
  fp_unary(c,2,2);
  fp_fsrra(c,14);
  fp_arith(c,2,2,1);
  fp_st(c,2,R(3));
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x70u;
  fp_arith(c,2,2,14);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,2,2,14);
  R(0)=0x74u;
  R(3)=0xf0000000u;
  R(1)=0x60000000u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x78u;
  fp_arith(c,2,2,14);
  fp_st(c,2,R(0)+R(15));
  R(2)=LD32(R(14));
  R(2)&=R(3);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c01d09c;
  R(0)=R(15);
  R(0)+=0x70u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c01d178u;
  fp_ld(c,4,R(0));
  R(2)=R(14);
  R(0)=0x50u;
  R(7)=R(15);
  R(2)+=0x40u;
  R(5)=LD32(R(14)+R(0));
  R(3)=0x8c0805a0u;
  R(7)+=0x68u;
  fp_ld(c,5,R(2));
  R(4)=R(15);
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c01d098u; R(4)+=0x50u; f_8c0805a0(c); }
L8c01d098:;
  { R(15)+=0x4u; goto L8c01d38c; }
L8c01d09c:;
  R(0)=LD32(R(14));
  R(2)=0x50000000u;
  R(3)&=R(0);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c01d13c;
  R(0)=R(15);
  R(0)+=0x70u;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c01d180u;
  R(3)=R(14);
  R(3)+=0x40u;
  fp_ld(c,4,R(0));
  R(0)=0x50u;
  fp_ld(c,5,R(3));
  R(7)=R(15);
  R(3)=0x8c0805a0u;
  R(4)=R(15);
  R(5)=LD32(R(14)+R(0));
  R(7)+=0x68u;
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c01d0c8u; R(4)+=0x50u; f_8c0805a0(c); }
  R(0)=0x70u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x70u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x60u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x64u;
  R(3)=R(15);
  R(2)=R(14);
  fp_arith(c,2,1,3);
  R(3)+=0x74u;
  R(2)+=0x40u;
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c01d180u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,4,R(0));
  R(0)=0x50u;
  R(5)=LD32(R(14)+R(0));
  R(7)=R(15);
  R(3)=0x8c0805a0u;
  R(4)=R(15);
  R(6)=LD32(R(14)+8);
  R(7)+=0x60u;
  fp_ld(c,5,R(2));
  { c->pr=0x8c01d138u; R(4)+=0x54u; f_8c0805a0(c); }
  { R(15)+=0x8u; goto L8c01d38c; }
L8c01d13c:;
  R(2)=0x8c0c4638u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01d1a0;
  R(3)=R(15);
  R(3)+=0x70u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(15);
  { R(7)+=0x68u; goto L8c01d1f8; }
L8c01d1a0:;
  R(0)=0x6cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x68u;
  fp_arith(c,2,0,2);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_arith(c,2,3,2);
  fp_arith(c,1,0,3);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x64u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x6cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x5cu;
  fp_arith(c,2,0,3);
  fp_arith(c,1,2,0);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x68u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x70u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x64u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x74u;
  fp_ld(c,0,R(0)+R(15));
  R(3)=R(15);
  R(0)=0x60u;
  fp_arith(c,2,0,3);
  R(3)+=0x70u;
  fp_arith(c,1,2,0);
  fp_st(c,2,R(0)+R(15));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(15);
  R(7)+=0x5cu;
L8c01d1f8:;
  R(0)=R(14);
  R(0)+=0x40u;
  fp_ld(c,5,R(0));
  R(0)=0x8c01d300u;
  fp_ld(c,4,R(0));
  R(0)=0x50u;
  R(3)=0x8c0805a0u;
  R(4)=R(15);
  R(5)=LD32(R(14)+R(0));
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c01d210u; R(4)+=0x50u; f_8c0805a0(c); }
  { R(15)+=0x4u; goto L8c01d38c; }
L8c01d214:;
  R(2)=LD32(R(14));
  R(3)=0xf0000000u;
  R(1)=0x20000000u;
  R(2)&=R(3);
  c->t=R(2)==R(1);
  if(!c->t) goto L8c01d270;
  R(5)=R(15);
  R(2)=0x8c02520au;
  R(6)=R(15);
  R(4)=R(14);
  R(6)+=0x64u;
  R(5)+=0x70u;
  { c->pr=0x8c01d230u; R(4)+=0x28u; f_8c02520a(c); }
  R(3)=R(15);
  R(0)=0x60u;
  R(3)+=0x70u;
  R(2)=R(15);
  ST32(R(15)+R(0),R(3));
  R(0)=0x5cu;
  R(2)+=0x64u;
  R(7)=R(3);
  ST32(R(15)+R(0),R(2));
  R(0)=0x44u;
  R(3)=R(14);
  R(3)+=0x40u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(14);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x50u;
  fp_ld(c,4,R(3));
  R(5)=LD32(R(14)+R(0));
  R(3)=0x8c0805a0u;
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c01d25cu; R(4)+=0x1cu; f_8c0805a0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c01d266; }
  {  goto L8c01d38c; }
L8c01d266:;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(2)|=R(3);
  { ST32(R(14),R(2)); goto L8c01d38c; }
L8c01d270:;
  R(0)=LD32(R(14));
  R(2)=0x90000000u;
  R(3)&=R(0);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c01d2c8;
  R(0)=0x64u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x68u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x6cu;
  c->fr[3]=0x3F800000u;
  R(3)=R(14);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  R(3)+=0x34u;
  R(2)=R(15);
  ST32(R(15)+R(0),R(3));
  R(0)=0x5cu;
  R(2)+=0x64u;
  R(3)=R(14);
  ST32(R(15)+R(0),R(2));
  R(0)=0x64u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)+=0x40u;
  R(7)=LD32(R(15)+R(0));
  R(0)=0x44u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x50u;
  fp_ld(c,4,R(3));
  R(4)=R(14);
  R(3)=0x8c0805a0u;
  R(5)=LD32(R(14)+R(0));
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c01d2b8u; R(4)+=0x1cu; f_8c0805a0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c01d38c; }
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(2)|=R(3);
  { ST32(R(14),R(2)); goto L8c01d38c; }
L8c01d2c8:;
  R(0)=LD32(R(14));
  R(3)=0xf0000000u;
  R(2)=0x10000000u;
  R(0)&=R(3);
  c->t=R(0)==R(2);
  if(!c->t) goto L8c01d340;
  R(0)=0x44u;
  R(1)=R(14);
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x50u;
  R(1)+=0x40u;
  R(5)=LD32(R(14)+R(0));
  R(3)=0x8c0802e0u;
  R(4)=R(14);
  fp_ld(c,4,R(1));
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c01d2ecu; R(4)+=0x1cu; f_8c0802e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c01d38c;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(2)|=R(3);
  { ST32(R(14),R(2)); goto L8c01d38c; }
L8c01d340:;
  R(0)=LD32(R(14));
  R(1)=0x8000000u;
  c->t=(R(0)&R(1))==0;
  if(c->t) goto L8c01d354;
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
L8c01d354:;
  R(3)=R(14);
  R(0)=0x44u;
  R(3)+=0x40u;
  fp_ld(c,5,R(0)+R(14));
  R(0)=0x50u;
  fp_ld(c,4,R(3));
  R(3)=0x8c080120u;
  R(4)=R(14);
  R(5)=LD32(R(14)+R(0));
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c01d36cu; R(4)+=0x1cu; f_8c080120(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c01d378;
  R(2)=LD32(R(14));
  R(3)=0x1000000u;
  R(2)|=R(3);
  ST32(R(14),R(2));
L8c01d378:;
  R(1)=LD32(R(14));
  R(3)=0x8000000u;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c01d38c;
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
L8c01d38c:;
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c01d39c;
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c01d3c6;
L8c01d39c:;
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,0,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(0)+R(14));
L8c01d3c6:;
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c01d3f2;
  R(0)=0x84u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x7cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(14));
L8c01d3f2:;
  R(1)=0x8cu;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01d440(SH4Ctx *c) {
  R(7)=0xcu;
  R(0)=0x0u;
L8c01d444:;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)+=0x4u;
  c->t=R(0)>=R(7);
  if(!c->t) goto L8c01d444;
  {  return; }
}
void f_8c01d46c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
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
  R(14)=R(4);
  c->t=R(14)>>31;R(14)<<=1;
  R(3)=R(4);
  R(14)+=R(3);
  R(14)<<=2;
  R(2)=0x8c129af4u;
  R(14)<<=2;
  R(9)=0x8c0c467cu;
  c->t=R(14)>>31;R(14)<<=1;
  R(11)=0x8c0c4684u;
  R(14)+=R(2);
  fp_ld(c,5,R(9));
  R(4)=LD32(R(14));
  R(8)=0x3u;
  fp_ld(c,4,R(11));
  R(10)=0x1000000u;
  R(4)=R(4)&0xFF;
  R(13)=0x8c03aedau;
  R(0)=R(4);
  R(1)=0x13u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c01d4b4;
  {  goto L8c01da48; }
L8c01d4b4:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c01d4d4u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c01d4c0u+R(0));  switch(tg){ case 0x8c01d4fau: goto L8c01d4fa; case 0x8c01d4feu: goto L8c01d4fe; case 0x8c01d50eu: goto L8c01d50e; case 0x8c01d520u: goto L8c01d520; case 0x8c01d532u: goto L8c01d532; case 0x8c01d536u: goto L8c01d536; case 0x8c01d620u: goto L8c01d620; case 0x8c01d6ceu: goto L8c01d6ce; case 0x8c01d73au: goto L8c01d73a; case 0x8c01d7a0u: goto L8c01d7a0; case 0x8c01d7b0u: goto L8c01d7b0; case 0x8c01d808u: goto L8c01d808; case 0x8c01d920u: goto L8c01d920; case 0x8c01da48u: goto L8c01da48; default: sh4_bad_jump(c,0x8c01d4bcu,tg); return; } }
L8c01d4fa:;
  {  goto L8c01da48; }
L8c01d4fe:;
  R(0)=0x8c01d600u;
  fp_ld(c,3,R(0));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,4,3);
  fp_unary(c,0,4);
  fp_arith(c,0,2,4);
  fp_st(c,2,R(0)+R(14));
L8c01d50e:;
  R(0)=0x8c01d604u;
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(0));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_unary(c,0,2);
  fp_arith(c,0,1,2);
  fp_st(c,1,R(0)+R(14));
L8c01d520:;
  R(0)=0x8c01d608u;
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(0));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_unary(c,0,2);
  fp_arith(c,0,1,2);
  fp_st(c,1,R(0)+R(14));
L8c01d532:;
  { fp_ld(c,4,R(11)); goto L8c01d7a0; }
L8c01d536:;
  R(1)=R(14);
  R(5)=0x0u;
  R(7)=R(5);
  R(13)=0x0u;
  R(4)=R(5);
  R(1)+=0x1cu;
L8c01d542:;
  R(3)=R(14);
  R(2)=R(14);
  R(6)=R(4);
  R(2)+=0x1cu;
  R(6)<<=2;
  R(3)+=0x28u;
  R(2)+=R(6);
  R(3)+=R(6);
  fp_ld(c,3,R(2));
  fp_ld(c,4,R(3));
  fp_arith(c,1,4,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c01d562;
  { fp_mov(c,2,4); goto L8c01d566; }
L8c01d562:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
L8c01d566:;
  R(0)=0x8c01d60cu;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01d572;
  { R(5)+=0x1u; goto L8c01d5c8; }
L8c01d572:;
  R(2)=R(14);
  R(2)+=0x1cu;
  R(2)+=R(13);
  R(3)=R(14);
  fp_ld(c,2,R(2));
  R(3)+=0x10u;
  R(3)+=R(13);
  c->fr[0]=0x00000000u;
  R(0)=0x8c01d610u;
  fp_st(c,2,R(3));
  fp_ld(c,1,R(11));
  fp_ld(c,2,R(0));
  fp_arith(c,2,1,4);
  fp_mov(c,5,1);
  fp_arith(c,2,5,2);
  fp_cmp(c,1,5,0);
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c01d59a; }
  { fp_mov(c,1,5); goto L8c01d59e; }
L8c01d59a:;
  fp_mov(c,1,5);
  fp_unary(c,0,1);
L8c01d59e:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c01d5a6;
  { fp_mov(c,3,4); goto L8c01d5aa; }
L8c01d5a6:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c01d5aa:;
  fp_cmp(c,1,3,1);
  if(c->t) goto L8c01d5c2;
  R(3)=R(14);
  R(3)+=0x28u;
  R(3)+=R(7);
  R(2)=R(14);
  fp_ld(c,3,R(3));
  R(2)+=0x1cu;
  R(5)+=0x1u;
  R(2)+=R(7);
  { fp_st(c,3,R(2)); goto L8c01d5c8; }
L8c01d5c2:;
  fp_ld(c,3,R(1));
  fp_arith(c,0,3,5);
  fp_st(c,3,R(1));
L8c01d5c8:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(8);
  R(7)+=0x4u;
  R(1)+=0x4u;
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c01d542; }
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c01d5dc;
  {  goto L8c01da48; }
L8c01d5dc:;
  R(3)=LD32(R(14));
  R(3)|=R(10);
  { ST32(R(14),R(3)); goto L8c01da48; }
L8c01d620:;
  R(0)=0x8c01d780u;
  R(1)=R(14);
  R(5)=0x0u;
  fp_ld(c,6,R(0));
  R(13)=R(5);
  R(4)=R(5);
  R(1)+=0x1cu;
  R(7)=R(5);
L8c01d630:;
  R(3)=R(14);
  R(2)=R(14);
  R(6)=R(4);
  R(2)+=0x1cu;
  R(6)<<=2;
  R(3)+=0x28u;
  R(2)+=R(6);
  R(3)+=R(6);
  fp_ld(c,3,R(2));
  fp_ld(c,4,R(3));
  fp_arith(c,1,4,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c01d650;
  { fp_mov(c,2,4); goto L8c01d654; }
L8c01d650:;
  fp_mov(c,2,4);
  fp_unary(c,0,2);
L8c01d654:;
  R(0)=0x8c01d784u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01d660;
  { R(5)+=0x1u; goto L8c01d6b2; }
L8c01d660:;
  R(2)=R(14);
  R(2)+=0x1cu;
  R(3)=R(14);
  R(2)+=R(13);
  R(3)+=0x10u;
  fp_ld(c,2,R(2));
  R(3)+=R(13);
  fp_st(c,2,R(3));
  fp_ld(c,1,R(11));
  fp_arith(c,2,1,4);
  fp_mov(c,5,1);
  fp_arith(c,2,5,6);
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,5,1);
  { uint32_t k=!c->t; c->fr[1]=0x00000000u; if(k) goto L8c01d684; }
  { fp_mov(c,2,5); goto L8c01d688; }
L8c01d684:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
L8c01d688:;
  fp_cmp(c,1,4,1);
  if(!c->t) goto L8c01d690;
  { fp_mov(c,3,4); goto L8c01d694; }
L8c01d690:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c01d694:;
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c01d6ac;
  R(3)=R(14);
  R(3)+=0x28u;
  R(3)+=R(7);
  R(2)=R(14);
  fp_ld(c,3,R(3));
  R(2)+=0x1cu;
  R(5)+=0x1u;
  R(2)+=R(7);
  { fp_st(c,3,R(2)); goto L8c01d6b2; }
L8c01d6ac:;
  fp_ld(c,3,R(1));
  fp_arith(c,0,3,5);
  fp_st(c,3,R(1));
L8c01d6b2:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(8);
  R(7)+=0x4u;
  R(1)+=0x4u;
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c01d630; }
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c01d6c6;
  {  goto L8c01da48; }
L8c01d6c6:;
  R(3)=LD32(R(14));
  R(3)|=R(10);
  { ST32(R(14),R(3)); goto L8c01da48; }
L8c01d6ce:;
  R(5)=0xcu;
  R(4)=0x0u;
L8c01d6d2:;
  R(2)=R(14);
  R(3)=R(14);
  R(2)+=0x10u;
  R(3)+=0x1cu;
  R(2)+=R(4);
  R(3)+=R(4);
  fp_ld(c,3,R(2));
  fp_ld(c,2,R(3));
  R(2)=R(14);
  R(2)+=0x10u;
  fp_arith(c,0,2,3);
  R(4)+=0x4u;
  R(2)+=R(4);
  fp_st(c,2,R(3));
  R(3)=R(14);
  R(3)+=0x1cu;
  fp_ld(c,3,R(2));
  R(3)+=R(4);
  R(2)=R(14);
  fp_ld(c,2,R(3));
  R(4)+=0x4u;
  R(2)+=0x10u;
  fp_arith(c,0,2,3);
  R(2)+=R(4);
  fp_st(c,2,R(3));
  R(3)=R(14);
  R(3)+=0x1cu;
  fp_ld(c,3,R(2));
  R(3)+=R(4);
  fp_ld(c,2,R(3));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(3));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c01d6d2;
  R(0)=0x4cu;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8c01d788u;
  fp_ld(c,1,R(0));
  R(0)=0x4cu;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,1,2);
  if(!c->t) goto L8c01d732;
  {  goto L8c01da48; }
L8c01d732:;
  R(2)=LD32(R(14));
  R(2)|=R(10);
  { ST32(R(14),R(2)); goto L8c01da48; }
L8c01d73a:;
  R(0)=0x8c01d78cu;
  R(5)=R(14);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  R(5)+=0x28u;
  R(4)=R(14);
  fp_arith(c,2,4,3);
  fp_ld(c,2,R(5));
  R(4)+=0x1cu;
  fp_unary(c,0,4);
  fp_arith(c,0,2,4);
  fp_st(c,2,R(5));
  fp_ld(c,1,R(0)+R(5));
  fp_arith(c,0,1,4);
  fp_st(c,1,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,0,2,4);
  fp_st(c,2,R(0)+R(5));
  { fp_ld(c,4,R(11)); goto L8c01d7a8; }
L8c01d7a0:;
  R(4)=R(14);
  R(5)=R(14);
  R(4)+=0x1cu;
  R(5)+=0x28u;
L8c01d7a8:;
  { c->pr=0x8c01d7acu;  f_8c01d440(c); }
  {  goto L8c01da48; }
L8c01d7b0:;
  R(0)=0x8c01d8e0u;
  R(4)=R(14);
  fp_ld(c,4,R(0));
  R(0)=0x8c01d8e4u;
  R(4)+=0x10u;
  fp_ld(c,3,R(0));
  fp_ld(c,2,R(4));
  R(5)=R(4);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c01d7d8; }
  R(0)=0x8c01d8e8u;
  fp_ld(c,1,R(4));
  fp_ld(c,2,R(0));
  fp_arith(c,2,1,2);
  fp_st(c,1,R(4));
  fp_ld(c,1,R(5));
  fp_arith(c,2,1,4);
  { fp_st(c,1,R(5)); goto L8c01da48; }
L8c01d7d8:;
  R(0)=0x8c01d8ecu;
  fp_ld(c,1,R(4));
  fp_ld(c,2,R(0));
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c01d7f2;
  fp_ld(c,1,R(4));
  R(0)=0x8c01d8f0u;
  fp_arith(c,2,1,4);
  fp_st(c,1,R(4));
  fp_ld(c,0,R(5));
  fp_ld(c,1,R(0));
  { fp_arith(c,2,0,1); goto L8c01d804; }
L8c01d7f2:;
  R(0)=0x8c01d8f4u;
  fp_ld(c,0,R(4));
  fp_ld(c,1,R(0));
  R(0)=0x8c01d8f8u;
  fp_arith(c,2,0,1);
  fp_st(c,0,R(4));
  fp_ld(c,0,R(5));
  fp_ld(c,3,R(0));
  fp_arith(c,2,0,3);
L8c01d804:;
  { fp_st(c,0,R(5)); goto L8c01da48; }
L8c01d808:;
  R(1)=R(14);
  R(1)+=0x8u;
  fp_ld(c,0,R(1));
  R(0)=0x48u;
  R(1)=0x40d00000u;
  R(3)=R(14);
  fp_arith(c,2,4,0);
  fp_ld(c,3,R(0)+R(14));
  c->fpul=R(1);
  R(3)+=0x8u;
  c->fr[0]=c->fpul;
  fp_fmac(c,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01d900u;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(11));
  fp_ld(c,0,R(0));
  R(0)=0x4cu;
  fp_fmac(c,2,3);
  c->fr[3]=0x3F800000u;
  fp_st(c,2,R(3));
  fp_ld(c,2,R(11));
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(0)+R(14));
  R(0)=0x8c01d904u;
  fp_ld(c,2,R(0));
  R(0)=0x4cu;
  fp_ld(c,1,R(0)+R(14));
  fp_cmp(c,1,1,2);
  { uint32_t k=c->t; R(0)=0x48u; if(k) goto L8c01d850; }
  R(1)=LD32(R(14));
  R(1)|=R(10);
  ST32(R(14),R(1));
L8c01d850:;
  fp_ld(c,14,R(0)+R(14));
  { uint32_t tg=R(13); c->pr=0x8c01d856u; fp_mov(c,4,14); sh4_call(c,tg); }
  R(0)=0x4cu;
  fp_mov(c,15,0);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c01d908u;
  fp_mov(c,4,14);
  fp_arith(c,2,15,3);
  fp_ld(c,3,R(0));
  { uint32_t tg=R(13); c->pr=0x8c01d868u; fp_arith(c,0,4,3); sh4_call(c,tg); }
  R(0)=0x4cu;
  fp_mov(c,14,0);
  fp_ld(c,3,R(0)+R(14));
  R(5)=R(15);
  R(3)=0x8c02520au;
  R(6)=R(15);
  fp_arith(c,2,14,3);
  R(4)=R(14);
  R(6)+=0x18u;
  R(5)+=0x24u;
  { c->pr=0x8c01d880u; R(4)+=0x28u; f_8c02520a(c); }
  R(0)=0x10u;
  fp_mov(c,0,15);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,0,14);
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  fp_mov(c,0,15);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,0,14);
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_mov(c,0,15);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_mov(c,0,14);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(14)); goto L8c01da48; }
L8c01d920:;
  R(0)=0x8c01db20u;
  R(4)=R(14);
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  R(4)+=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c01db24u;
  fp_ld(c,13,R(0));
  R(0)=0x4u;
  fp_ld(c,14,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,15,R(4));
  fp_arith(c,2,14,5);
  fp_arith(c,2,3,5);
  fp_mov(c,12,13);
  fp_arith(c,2,15,5);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c01db28u;
  fp_ld(c,2,R(0));
  fp_mov(c,4,15);
  { uint32_t tg=R(13); c->pr=0x8c01d950u; fp_arith(c,0,4,2); sh4_call(c,tg); }
  fp_st(c,0,R(15));
  { uint32_t tg=R(13); c->pr=0x8c01d956u; fp_mov(c,4,15); sh4_call(c,tg); }
  R(0)=0x4u;
  fp_mov(c,4,14);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x8c01db28u;
  fp_ld(c,3,R(0));
  { uint32_t tg=R(13); c->pr=0x8c01d964u; fp_arith(c,0,4,3); sh4_call(c,tg); }
  R(0)=0x8u;
  fp_st(c,0,R(0)+R(15));
  { uint32_t tg=R(13); c->pr=0x8c01d96cu; fp_mov(c,4,14); sh4_call(c,tg); }
  R(0)=0x8c01db28u;
  fp_mov(c,15,0);
  fp_ld(c,3,R(0));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  { uint32_t tg=R(13); c->pr=0x8c01d97au; fp_arith(c,0,4,3); sh4_call(c,tg); }
  R(0)=0x10u;
  fp_mov(c,14,0);
  { uint32_t tg=R(13); c->pr=0x8c01d982u; fp_ld(c,4,R(0)+R(15)); sh4_call(c,tg); }
  fp_ld(c,5,R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_arith(c,2,5,15);
  fp_mov(c,4,0);
  fp_arith(c,2,2,4);
  fp_mov(c,0,12);
  fp_mov(c,6,5);
  fp_arith(c,2,6,14);
  fp_arith(c,2,5,4);
  fp_mov(c,3,6);
  fp_unary(c,0,3);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,2,4);
  fp_arith(c,2,1,14);
  fp_arith(c,1,2,6);
  fp_arith(c,2,2,12);
  fp_fmac(c,2,3);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x28u;
  fp_fmac(c,2,1);
  fp_mov(c,0,2);
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x1cu;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_unary(c,0,5);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,14);
  fp_mov(c,0,12);
  fp_arith(c,2,6,15);
  fp_arith(c,1,5,3);
  fp_ld(c,3,R(15));
  fp_mov(c,2,6);
  fp_arith(c,2,2,4);
  fp_arith(c,2,3,14);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,2,4);
  fp_arith(c,2,3,13);
  fp_fmac(c,3,5);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4cu;
  fp_fmac(c,3,2);
  fp_mov(c,0,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x20u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(15));
  fp_ld(c,3,R(15));
  fp_arith(c,2,6,13);
  R(0)=0xcu;
  R(1)=0x40900000u;
  fp_arith(c,2,3,0);
  fp_mov(c,0,12);
  c->fpul=R(1);
  fp_fmac(c,6,3);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4cu;
  fp_mov(c,3,6);
  fp_fmac(c,3,15);
  fp_mov(c,0,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_fmac(c,2,3);
  c->fr[3]=c->fpul;
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4cu;
  fp_ld(c,2,R(11));
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(0)+R(14));
  R(0)=0x8c01db30u;
  fp_ld(c,2,R(0));
  R(0)=0x4cu;
  fp_ld(c,1,R(0)+R(14));
  fp_cmp(c,1,1,2);
  if(c->t) goto L8c01da48;
  R(2)=LD32(R(14));
  R(2)|=R(10);
  ST32(R(14),R(2));
L8c01da48:;
  R(4)=LD32(R(14));
  R(0)=0x8c01db38u;
  R(3)=0x20000u;
  R(13)=0x8c0686d0u;
  fp_ld(c,14,R(0));
  c->t=(R(3)&R(4))==0;
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c01daa8; }
  R(2)=0x8c0c463cu;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c01daa8;
  R(1)=0x80000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c01daa8;
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01da76;
  {  goto L8c01db86; }
L8c01da76:;
  R(0)=0x4cu;
  R(2)=R(14);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  R(2)+=0x40u;
  R(3)=0x10003100u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01db4cu;
  ST32(R(14),R(3));
  fp_ld(c,3,R(0));
  R(0)=0x44u;
  fp_st(c,3,R(2));
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(9));
  R(2)=0x8c0c463cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01db50u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x50u;
  R(3)=LD32(R(2));
  { ST32(R(14)+R(0),R(3)); goto L8c01db86; }
L8c01daa8:;
  R(3)=0x2000000u;
  R(4)=LD32(R(14));
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c01dab4;
  {  goto L8c01db86; }
L8c01dab4:;
  R(2)=0x8c0c463cu;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c01db86;
  R(1)=0x80000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c01db86;
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01db86;
  { uint32_t tg=R(13); c->pr=0x8c01dad2u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01db24u;
  c->fr[2]=0x3F800000u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,15);
  fp_cmp(c,1,3,1);
  if(!c->t) goto L8c01db80;
  R(0)=0x4cu;
  R(3)=0x10004100u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  R(2)=0x0u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01db5cu;
  ST32(R(14),R(3));
  R(3)=R(14);
  ST32(R(14)+4,R(2));
  R(3)+=0x40u;
  fp_ld(c,4,R(0));
  R(0)=0x44u;
  R(2)=0x8c0c463cu;
  fp_st(c,4,R(3));
  fp_st(c,4,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(9));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01db60u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x50u;
  R(3)=LD32(R(2));
  { ST32(R(14)+R(0),R(3)); goto L8c01db86; }
L8c01db80:;
  R(3)=LD32(R(14));
  R(3)|=R(10);
  ST32(R(14),R(3));
L8c01db86:;
  R(0)=0x8c01dc5cu;
  R(5)=0xf00u;
  fp_ld(c,7,R(0));
  R(0)=0x8c01dc60u;
  fp_ld(c,6,R(0));
  R(0)=LD32(R(14));
  R(1)=0x900u;
  R(0)&=R(5);
  R(4)=0xfffff0ffu;
  c->t=R(0)==R(1);
  fp_mov(c,4,15);
  { uint32_t k=c->t; fp_ld(c,5,R(11)); if(k) goto L8c01dc0e; }
  R(1)=0xa00u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c01dc80;
  R(1)=0xb00u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dbb0;
  {  goto L8c01dcb8; }
L8c01dbb0:;
  R(1)=0xd00u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dbba;
  {  goto L8c01dcee; }
L8c01dbba:;
  R(1)=0x800u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dbc4;
  {  goto L8c01dd1c; }
L8c01dbc4:;
  R(1)=0x100u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dbce;
  {  goto L8c01dd60; }
L8c01dbce:;
  R(1)=0x200u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dbd8;
  {  goto L8c01dd66; }
L8c01dbd8:;
  R(1)=0x300u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dbe2;
  {  goto L8c01dd6c; }
L8c01dbe2:;
  R(1)=0x400u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dbec;
  {  goto L8c01dd72; }
L8c01dbec:;
  R(1)=0x500u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dbf6;
  {  goto L8c01dd78; }
L8c01dbf6:;
  R(1)=0x700u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dc00;
  {  goto L8c01dd7e; }
L8c01dc00:;
  R(1)=0x600u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dc0a;
  {  goto L8c01ddc0; }
L8c01dc0a:;
  {  goto L8c01ddc4; }
L8c01dc0e:;
  R(3)=R(14);
  R(0)=0x8c01dc64u;
  R(3)+=0x40u;
  fp_ld(c,0,R(0));
  fp_ld(c,3,R(3));
  R(0)=0x8c01dc68u;
  fp_fmac(c,3,5);
  fp_st(c,3,R(3));
  fp_ld(c,0,R(0));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(11));
  fp_fmac(c,2,3);
  { fp_st(c,2,R(0)+R(14)); goto L8c01ddc4; }
L8c01dc80:;
  R(2)=R(14);
  R(2)+=0x40u;
  fp_ld(c,3,R(2));
  R(0)=0x44u;
  fp_mov(c,0,7);
  R(3)=R(14);
  fp_fmac(c,3,5);
  R(3)+=0x40u;
  fp_st(c,3,R(2));
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,2,6);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01dd44u;
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c01dcaa;
  {  goto L8c01ddc4; }
L8c01dcaa:;
  R(2)=LD32(R(14));
  R(3)=0xb00u;
  R(2)&=R(4);
  R(1)=R(2);
  R(1)|=R(3);
  { ST32(R(14),R(1)); goto L8c01ddc4; }
L8c01dcb8:;
  fp_arith(c,2,5,7);
  R(0)=R(14);
  R(0)+=0x40u;
  R(3)=R(14);
  fp_ld(c,3,R(0));
  R(3)+=0x40u;
  fp_arith(c,1,3,5);
  fp_st(c,3,R(0));
  fp_ld(c,2,R(3));
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01dcd4;
  {  goto L8c01ddc4; }
L8c01dcd4:;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  R(2)=R(14);
  R(2)+=0x40u;
  fp_st(c,2,R(2));
  R(3)=LD32(R(14));
  R(3)&=R(4);
  ST32(R(14),R(3));
  R(2)=LD32(R(14));
  R(3)=0xd00u;
  R(2)|=R(3);
  { ST32(R(14),R(2)); goto L8c01ddc4; }
L8c01dcee:;
  fp_arith(c,2,5,6);
  R(0)=R(14);
  R(0)+=0x40u;
  fp_ld(c,3,R(0));
  fp_arith(c,1,3,5);
  fp_st(c,3,R(0));
  R(0)=0x8c01dd48u;
  fp_ld(c,0,R(0));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(11));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8c01dd4cu;
  fp_ld(c,3,R(0));
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c01ddc4;
  R(2)=LD32(R(14));
  R(2)|=R(10);
  { ST32(R(14),R(2)); goto L8c01ddc4; }
L8c01dd1c:;
  R(0)=0x8c01dd50u;
  { fp_ld(c,4,R(0)); goto L8c01ddc4; }
L8c01dd60:;
  R(0)=0x8c01dda0u;
  { fp_ld(c,4,R(0)); goto L8c01ddc4; }
L8c01dd66:;
  R(0)=0x8c01dda4u;
  { fp_ld(c,4,R(0)); goto L8c01ddc4; }
L8c01dd6c:;
  R(0)=0x8c01dda8u;
  { fp_ld(c,4,R(0)); goto L8c01ddc4; }
L8c01dd72:;
  R(0)=0x8c01ddacu;
  { fp_ld(c,4,R(0)); goto L8c01ddc4; }
L8c01dd78:;
  R(0)=0x8c01ddb0u;
  { fp_ld(c,4,R(0)); goto L8c01ddc4; }
L8c01dd7e:;
  R(0)=0x8c01ddb4u;
  { fp_ld(c,4,R(0)); goto L8c01ddc4; }
L8c01ddc0:;
  R(0)=0x8c01ded0u;
  fp_ld(c,4,R(0));
L8c01ddc4:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c01dde0;
  fp_ld(c,2,R(11));
  R(3)=R(14);
  R(0)=0x44u;
  fp_arith(c,2,4,2);
  R(3)+=0x40u;
  fp_ld(c,2,R(3));
  fp_arith(c,0,2,4);
  fp_st(c,2,R(3));
  fp_ld(c,1,R(0)+R(14));
  fp_arith(c,0,1,4);
  fp_st(c,1,R(0)+R(14));
L8c01dde0:;
  R(3)=LD32(R(14));
  R(2)=0xe00u;
  R(5)&=R(3);
  c->t=R(5)==R(2);
  if(!c->t) goto L8c01de10;
  R(1)=R(14);
  R(3)=0x4u;
  R(1)+=0x40u;
  R(3)+=R(1);
  ST32(R(15)+20,R(1));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+24);
  { uint32_t tg=R(13); c->pr=0x8c01ddfcu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  c->fr[2]=0x3F800000u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,15);
  fp_st(c,3,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_st(c,3,R(2));
L8c01de10:;
  R(3)=R(14);
  R(3)+=0x40u;
  fp_ld(c,2,R(3));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  { uint32_t k=c->t; c->fr[3]=0x00000000u; if(k) goto L8c01de2e; }
  R(0)=0x8c01ded4u;
  R(2)=R(14);
  fp_ld(c,2,R(0));
  R(2)+=0x40u;
  fp_st(c,2,R(2));
  R(3)=LD32(R(14));
  R(3)|=R(10);
  ST32(R(14),R(3));
L8c01de2e:;
  R(0)=0x44u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01de44;
  R(0)=0x8c01ded4u;
  fp_ld(c,2,R(0));
  R(0)=0x44u;
  fp_st(c,2,R(0)+R(14));
  R(3)=LD32(R(14));
  R(3)|=R(10);
  ST32(R(14),R(3));
L8c01de44:;
  R(0)=0x8c01ded8u;
  R(3)=0xf000u;
  fp_ld(c,5,R(0));
  R(0)=0x8c01dedcu;
  fp_ld(c,13,R(0));
  R(0)=LD32(R(14));
  R(1)=0x8000u;
  R(0)&=R(3);
  R(4)=0xffff0fffu;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; fp_ld(c,4,R(11)); if(k) goto L8c01df00; }
  R(1)=0x7000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c01df22;
  R(1)=0x1000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01de6c;
  {  goto L8c01df54; }
L8c01de6c:;
  R(1)=0x2000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01de76;
  {  goto L8c01df5a; }
L8c01de76:;
  R(1)=0x3000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01de80;
  {  goto L8c01dfa0; }
L8c01de80:;
  R(1)=0x4000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01de8a;
  {  goto L8c01dfaa; }
L8c01de8a:;
  R(1)=0x5000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01de94;
  {  goto L8c01dfb4; }
L8c01de94:;
  R(1)=0x6000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01de9e;
  {  goto L8c01dfbe; }
L8c01de9e:;
  R(1)=0x9000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01dea8;
  {  goto L8c01dfd0; }
L8c01dea8:;
  R(1)=0xa000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c01deb2;
  {  goto L8c01e020; }
L8c01deb2:;
  {  goto L8c01e02a; }
L8c01df00:;
  R(0)=0xcu;
  fp_ld(c,2,R(9));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c01df14;
  {  goto L8c01e02a; }
L8c01df14:;
  R(1)=LD32(R(14));
  R(2)=0x3000u;
  R(1)&=R(4);
  R(0)=R(1);
  R(0)|=R(2);
  { ST32(R(14),R(0)); goto L8c01e02a; }
L8c01df22:;
  R(0)=0x58u;
  fp_mov(c,0,5);
  fp_ld(c,3,R(0)+R(14));
  fp_fmac(c,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01df84u;
  fp_ld(c,4,R(0));
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c01df3c;
  {  goto L8c01e02a; }
L8c01df3c:;
  fp_st(c,4,R(0)+R(14));
  R(0)=0xcu;
  R(2)=LD32(R(14));
  R(2)&=R(4);
  ST32(R(14),R(2));
  R(1)=LD32(R(14));
  R(2)=0x8000u;
  R(1)|=R(2);
  ST32(R(14),R(1));
  fp_ld(c,3,R(9));
  { fp_st(c,3,R(0)+R(14)); goto L8c01e02a; }
L8c01df54:;
  R(0)=0x58u;
  { fp_arith(c,2,4,13); goto L8c01dfae; }
L8c01df5a:;
  R(1)=0x43200000u;
  R(0)=0x58u;
  c->fpul=R(1);
  { c->fr[3]=c->fpul; goto L8c01dfc6; }
L8c01dfa0:;
  R(1)=0x43820000u;
  R(0)=0x58u;
  c->fpul=R(1);
  { c->fr[3]=c->fpul; goto L8c01dfc6; }
L8c01dfaa:;
  fp_arith(c,2,4,5);
  R(0)=0x58u;
L8c01dfae:;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,4); goto L8c01e028; }
L8c01dfb4:;
  R(1)=0x44548000u;
  R(0)=0x58u;
  c->fpul=R(1);
  { c->fr[3]=c->fpul; goto L8c01dfc6; }
L8c01dfbe:;
  R(1)=0x451c4000u;
  R(0)=0x58u;
  c->fpul=R(1);
  c->fr[3]=c->fpul;
L8c01dfc6:;
  fp_arith(c,2,4,3);
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,4);
  { fp_st(c,2,R(0)+R(14)); goto L8c01e02a; }
L8c01dfd0:;
  { uint32_t tg=R(13); c->pr=0x8c01dfd4u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01e00cu;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,13);
  { R(0)=0x58u; goto L8c01e028; }
L8c01e020:;
  R(0)=0x58u;
  fp_mov(c,0,13);
  fp_ld(c,3,R(0)+R(14));
  fp_fmac(c,3,4);
L8c01e028:;
  fp_st(c,3,R(0)+R(14));
L8c01e02a:;
  R(0)=LD32(R(14)+4);
  R(0)&=0x8u;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c01e044;
  R(1)=0x41a00000u;
  R(0)=0x58u;
  fp_ld(c,2,R(11));
  c->fpul=R(1);
  fp_ld(c,1,R(0)+R(14));
  c->fr[3]=c->fpul;
  fp_arith(c,2,2,3);
  fp_arith(c,1,1,2);
  fp_st(c,1,R(0)+R(14));
L8c01e044:;
  R(0)=0x58u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c01e062;
  R(2)=LD32(R(14));
  R(3)=0xf000u;
  R(1)=0x7000u;
  R(2)&=R(3);
  c->t=R(2)==R(1);
  if(c->t) goto L8c01e062;
  R(3)=LD32(R(14));
  R(3)|=R(10);
  ST32(R(14),R(3));
  fp_st(c,15,R(0)+R(14));
L8c01e062:;
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
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01e0a0(SH4Ctx *c) {
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
  R(15)+=0xffffffd8u;
  R(1)=0x3f199999u;
  R(14)=R(4);
  R(0)=0x8u;
  R(3)=0x8c0686d0u;
  c->fpul=R(1);
  R(11)=R(6);
  fp_st(c,4,R(15));
  fp_ld(c,2,R(0)+R(14));
  c->fr[3]=c->fpul;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8c01e248u;
  { c->pr=0x8c01e0d6u; fp_ld(c,12,R(0)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01e250u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01e254u;
  fp_ld(c,1,R(0));
  R(13)=R(15);
  fp_float(c,3);
  R(3)=0x8c129af0u;
  R(0)=0x8c01e25cu;
  R(13)+=0x1cu;
  R(2)=R(13);
  R(10)=R(2);
  R(10)+=0x4u;
  R(9)=R(2);
  fp_arith(c,2,3,2);
  R(9)+=0x8u;
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(3));
  ST32(R(15)+4,R(2));
  fp_ld(c,3,R(14));
  fp_st(c,3,R(2));
  fp_ld(c,13,R(0));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c01e260u;
  fp_arith(c,0,3,13);
  fp_st(c,3,R(10));
  fp_ld(c,15,R(0));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,0,3,15);
  R(12)=R(15);
  R(12)+=0x10u;
  R(0)=0x8c01e264u;
  R(8)=R(12);
  fp_st(c,3,R(9));
  R(2)=R(8);
  R(2)+=0x4u;
  R(4)=0x1103u;
  c->fr[14]=0x3F800000u;
  R(6)=R(8);
  R(7)=R(11);
  fp_st(c,14,R(8));
  ST32(R(15)+12,R(2));
  fp_ld(c,3,R(0));
  R(0)=0x8c01e268u;
  fp_mov(c,5,15);
  fp_st(c,3,R(2));
  R(2)=R(8);
  R(2)+=0x8u;
  fp_mov(c,6,15);
  ST32(R(15)+8,R(2));
  fp_ld(c,3,R(0));
  fp_st(c,3,R(2));
  fp_ld(c,4,R(15));
  R(2)=0x8c01a7e0u;
  { c->pr=0x8c01e14cu; R(5)=R(13); f_8c01a7e0(c); }
  R(3)=0x8c0686d0u;
  { c->pr=0x8c01e152u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01e250u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01e254u;
  fp_ld(c,1,R(0));
  R(0)=0x8c01e270u;
  fp_float(c,3);
  R(3)=0x8c129af0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(14));
  R(2)=LD32(R(15)+4);
  fp_st(c,3,R(2));
  fp_ld(c,15,R(0));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c01e274u;
  fp_arith(c,0,3,15);
  fp_st(c,3,R(10));
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8c01e278u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(9));
  fp_st(c,15,R(8));
  fp_ld(c,2,R(0));
  R(2)=LD32(R(15)+12);
  fp_st(c,2,R(2));
  R(2)=LD32(R(15)+8);
  R(0)=0x8c01e27cu;
  R(4)=0x1103u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01e244u;
  R(7)=R(11);
  fp_mov(c,5,13);
  fp_st(c,2,R(2));
  R(6)=R(8);
  fp_ld(c,4,R(15));
  R(2)=0x8c01a7e0u;
  fp_ld(c,6,R(0));
  { c->pr=0x8c01e1acu; R(5)=R(13); f_8c01a7e0(c); }
  R(3)=0x8c0686d0u;
  { c->pr=0x8c01e1b2u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01e250u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01e254u;
  fp_ld(c,1,R(0));
  R(0)=0x4u;
  fp_float(c,3);
  R(3)=0x8c129af0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(14));
  R(2)=LD32(R(15)+4);
  fp_st(c,3,R(2));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,0,2,13);
  fp_st(c,2,R(10));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c01e280u;
  fp_arith(c,0,3,15);
  fp_st(c,3,R(9));
  fp_st(c,13,R(8));
  R(2)=LD32(R(15)+12);
  fp_ld(c,3,R(0));
  R(0)=0x8c01e284u;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0));
  R(0)=0x8c01e288u;
  R(2)=LD32(R(15)+8);
  fp_st(c,3,R(2));
  fp_ld(c,13,R(0));
  R(6)=R(8);
  fp_ld(c,4,R(15));
  R(7)=R(11);
  R(4)=0x1103u;
  R(2)=0x8c01a7e0u;
  fp_mov(c,6,13);
  fp_mov(c,5,13);
  { c->pr=0x8c01e206u; R(5)=R(13); f_8c01a7e0(c); }
  R(3)=0x8c0686d0u;
  { c->pr=0x8c01e20cu;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01e250u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01e254u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  R(3)=0x8c129af0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(3));
  R(2)=LD32(R(15)+4);
  {  goto L8c01e2a0; }
L8c01e2a0:;
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  R(4)=0x1103u;
  R(6)=R(8);
  fp_st(c,3,R(2));
  R(7)=R(11);
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_mov(c,5,14);
  fp_arith(c,0,2,15);
  fp_mov(c,6,14);
  fp_st(c,2,R(10));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c01e304u;
  fp_st(c,3,R(9));
  fp_st(c,14,R(8));
  R(2)=LD32(R(15)+12);
  fp_ld(c,3,R(0));
  R(0)=0x8c01e308u;
  fp_st(c,3,R(2));
  R(2)=LD32(R(15)+8);
  fp_ld(c,3,R(0));
  fp_st(c,3,R(2));
  fp_ld(c,4,R(15));
  R(2)=0x8c01a7e0u;
  { c->pr=0x8c01e2d6u; R(5)=R(13); f_8c01a7e0(c); }
  R(15)+=0x28u;
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
void f_8c01e320(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(12)=R(15);
  R(12)+=0x24u;
  ST32(R(15),R(6));
  R(6)=R(12);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(0)=0x8c01e500u;
  R(7)=R(12);
  R(13)=R(15);
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(13)+=0xcu;
  R(14)=R(15);
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(13);
  fp_st(c,2,R(6));
  R(6)=R(7);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(12));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(12));
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  fp_ld(c,1,R(6));
  fp_st(c,1,R(4));
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  R(14)+=0x18u;
  R(4)=R(14);
  R(2)=R(14);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  R(3)=R(14);
  R(3)+=0x4u;
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  fp_ld(c,1,R(5));
  R(0)=0x8c01e504u;
  fp_st(c,1,R(4));
  ST32(R(15)+4,R(3));
  fp_ld(c,15,R(3));
  ST32(R(15)+8,R(2));
  fp_ld(c,14,R(2));
  fp_unary(c,0,15);
  fp_mov(c,2,14);
  fp_arith(c,2,2,14);
  fp_mov(c,0,15);
  fp_ld(c,1,R(0));
  fp_fmac(c,2,15);
  fp_unary(c,2,2);
  fp_mov(c,4,2);
  fp_cmp(c,1,1,4);
  if(c->t) goto L8c01e450;
  R(0)=0x8c01e508u;
  fp_mov(c,2,4);
  fp_ld(c,4,R(0));
  R(0)=0x8c01e50cu;
  R(1)=0x8c0686d0u;
  fp_arith(c,3,4,2);
  fp_ld(c,12,R(0));
  R(0)=0x8c01e510u;
  fp_arith(c,2,14,4);
  fp_arith(c,2,15,4);
  { c->pr=0x8c01e3c2u; fp_ld(c,13,R(0)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01e518u;
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  R(3)=LD32(R(15)+8);
  fp_float(c,3);
  fp_ld(c,1,R(12));
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,13);
  fp_mov(c,4,3);
  fp_arith(c,0,4,2);
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,4);
  fp_arith(c,1,3,15);
  fp_arith(c,0,1,3);
  fp_st(c,1,R(12));
  R(3)=LD32(R(15)+4);
  fp_ld(c,1,R(0)+R(12));
  fp_ld(c,3,R(3));
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,4);
  fp_arith(c,1,3,14);
  fp_arith(c,0,1,3);
  { c->pr=0x8c01e3f4u; fp_st(c,1,R(0)+R(12)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01e518u;
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  R(3)=LD32(R(15)+8);
  R(6)=R(14);
  fp_float(c,3);
  fp_ld(c,1,R(13));
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,13);
  fp_mov(c,4,3);
  fp_arith(c,0,4,2);
  fp_ld(c,3,R(3));
  fp_mov(c,0,4);
  fp_fmac(c,15,3);
  fp_arith(c,0,1,15);
  fp_st(c,1,R(13));
  R(3)=LD32(R(15)+4);
  fp_ld(c,1,R(0)+R(13));
  fp_ld(c,3,R(3));
  fp_fmac(c,14,3);
  fp_arith(c,0,1,14);
  fp_st(c,1,R(0)+R(13));
  R(0)=0x8c01e51cu;
  fp_ld(c,14,R(0));
  R(0)=0x8c01e520u;
  fp_ld(c,15,R(0));
  R(0)=0x8c01e500u;
  fp_ld(c,5,R(0));
  R(7)=LD32(R(15));
  fp_mov(c,4,14);
  fp_mov(c,6,15);
  R(3)=0x8c01a7e0u;
  R(4)=0x30005100u;
  { c->pr=0x8c01e43cu; R(5)=R(12); f_8c01a7e0(c); }
  R(0)=0x8c01e500u;
  R(4)=0x30005100u;
  R(3)=0x8c01a7e0u;
  R(6)=R(14);
  fp_ld(c,5,R(0));
  R(7)=LD32(R(15));
  fp_mov(c,6,15);
  fp_mov(c,4,14);
  { c->pr=0x8c01e450u; R(5)=R(13); f_8c01a7e0(c); }
L8c01e450:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01e464(SH4Ctx *c) {
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
  R(15)+=0xffffffc4u;
  ST32(R(15)+4,R(6));
  R(8)=R(5);
  R(6)=R(8);
  R(9)=R(15);
  R(9)+=0x24u;
  R(5)=R(9);
  R(12)=R(9);
  R(11)=R(12);
  R(11)+=0x4u;
  ST32(R(15),R(9));
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(6));
  fp_st(c,2,R(5));
  R(5)=0x8c0c4660u;
  fp_ld(c,2,R(12));
  R(7)=R(5);
  fp_ld(c,3,R(7));
  R(6)=R(7);
  R(6)+=0x4u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(6));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(11));
  fp_ld(c,3,R(8));
  fp_st(c,3,R(7));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(8));
  R(0)=0x8c01e530u;
  fp_st(c,2,R(6));
  fp_ld(c,5,R(11));
  fp_ld(c,4,R(12));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_ld(c,2,R(0));
  fp_fmac(c,3,4);
  fp_mov(c,13,3);
  fp_cmp(c,1,2,13);
  if(!c->t) goto L8c01e4de;
  {  goto L8c01e6ea; }
L8c01e4de:;
  fp_ld(c,3,R(11));
  fp_ld(c,2,R(12));
  fp_arith(c,2,3,13);
  fp_mov(c,0,13);
  c->fr[1]=0x00000000u;
  fp_fmac(c,3,2);
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c01e540;
  { fp_mov(c,12,1); goto L8c01e542; }
L8c01e540:;
  c->fr[12]=0x3F800000u;
L8c01e542:;
  R(10)=R(15);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(10)+=0x30u;
  R(13)=R(15);
  R(5)=R(10);
  fp_st(c,3,R(5));
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(5)+=0x4u;
  R(0)=0x8c01e720u;
  R(6)=R(10);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  R(13)+=0x18u;
  R(4)=R(13);
  fp_st(c,2,R(5));
  R(5)=R(6);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(10));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(10));
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  fp_ld(c,1,R(5));
  fp_st(c,1,R(4));
  R(4)=R(8);
  R(5)=LD32(R(15));
  fp_ld(c,2,R(4));R(4)+=fp_sz(c);
  R(14)=R(15);
  R(14)+=0xcu;
  fp_st(c,2,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));R(4)+=fp_sz(c);
  R(0)=0x4u;
  fp_st(c,2,R(5));
  R(5)+=0x4u;
  fp_ld(c,1,R(4));
  fp_st(c,1,R(5));
  fp_ld(c,2,R(11));
  fp_unary(c,0,2);
  fp_st(c,2,R(14));
  fp_ld(c,1,R(12));
  fp_mov(c,2,1);
  fp_mov(c,5,1);
  fp_arith(c,2,2,5);
  fp_st(c,1,R(0)+R(14));
  R(0)=0x8c01e724u;
  fp_ld(c,4,R(14));
  fp_ld(c,1,R(0));
  fp_mov(c,0,4);
  fp_fmac(c,2,4);
  fp_unary(c,2,2);
  fp_mov(c,4,2);
  fp_cmp(c,1,1,4);
  if(!c->t) goto L8c01e5be;
  {  goto L8c01e6ea; }
L8c01e5be:;
  R(0)=0x4u;
  fp_ld(c,2,R(14));
  R(3)=0x8c0686d0u;
  fp_arith(c,2,2,4);
  fp_st(c,2,R(14));
  fp_ld(c,0,R(0)+R(14));
  fp_arith(c,2,0,4);
  fp_st(c,0,R(0)+R(14));
  R(0)=0x8c01e728u;
  { c->pr=0x8c01e5d4u; fp_ld(c,14,R(0)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01e730u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01e734u;
  fp_ld(c,15,R(0));
  R(3)=R(10);
  fp_float(c,3);
  c->fr[1]=0x00000000u;
  R(0)=0x4u;
  ST32(R(15),R(3));
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(12));
  fp_arith(c,3,3,14);
  fp_mov(c,4,3);
  fp_arith(c,0,4,1);
  fp_ld(c,3,R(14));
  fp_arith(c,2,3,15);
  fp_mov(c,0,4);
  fp_unary(c,0,3);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(3));
  fp_arith(c,0,0,3);
  fp_st(c,0,R(3));
  R(3)+=0x4u;
  fp_mov(c,0,4);
  ST32(R(15)+8,R(3));
  fp_ld(c,3,R(0)+R(14));
  fp_ld(c,2,R(11));
  fp_arith(c,2,3,15);
  fp_unary(c,0,3);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(3));
  fp_arith(c,0,0,3);
  fp_st(c,0,R(3));
  R(3)=0x8c0686d0u;
  { c->pr=0x8c01e61eu;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01e738u;
  fp_ld(c,2,R(0));
  R(4)=R(13);
  c->fr[1]=0x00000000u;
  R(0)=0x4u;
  fp_float(c,3);
  fp_mov(c,0,15);
  R(5)=R(4);
  R(5)+=0x4u;
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(14));
  fp_arith(c,3,3,14);
  fp_mov(c,4,3);
  fp_arith(c,0,4,1);
  fp_ld(c,3,R(12));
  fp_arith(c,2,3,4);
  fp_fmac(c,3,2);
  fp_ld(c,0,R(4));
  fp_arith(c,0,0,3);
  fp_st(c,0,R(4));
  fp_ld(c,3,R(11));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_mov(c,0,15);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(5));
  fp_ld(c,3,R(14));
  R(3)=LD32(R(15));
  fp_arith(c,2,3,15);
  fp_ld(c,2,R(3));
  R(0)=0x4u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(3));
  fp_ld(c,3,R(0)+R(14));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,3,15);
  fp_ld(c,2,R(3));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(3));
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(14));
  fp_fmac(c,2,3);
  fp_st(c,2,R(4));
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8c01e73cu;
  fp_fmac(c,2,3);
  fp_st(c,2,R(5));
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,3);
  fp_unary(c,0,2);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(0)+R(14));
  fp_ld(c,3,R(8));
  fp_arith(c,2,2,3);
  R(0)=0x4u;
  fp_st(c,2,R(11));
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(0)+R(8));
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(8));
  fp_arith(c,2,0,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,12,3);
  fp_arith(c,1,2,0);
  fp_st(c,2,R(0)+R(9));
  R(0)=0x8c01e740u;
  { uint32_t k=c->t; fp_ld(c,15,R(0)); if(k) goto L8c01e6d6; }
  R(4)=R(9);
  R(4)+=0x8u;
  fp_ld(c,3,R(4));
  R(6)=R(9);
  fp_mov(c,4,15);
  fp_unary(c,0,3);
  fp_mov(c,5,13);
  fp_st(c,3,R(4));
  R(7)=LD32(R(15)+4);
  fp_mov(c,6,13);
  { R(5)=R(10); goto L8c01e6e2; }
L8c01e6d6:;
  R(7)=LD32(R(15)+4);
  R(6)=R(9);
  R(5)=R(13);
  fp_mov(c,4,15);
  fp_mov(c,6,13);
  fp_mov(c,5,13);
L8c01e6e2:;
  R(3)=0x8c01a7e0u;
  R(4)=0x20005300u;
  { c->pr=0x8c01e6eau;  f_8c01a7e0(c); }
L8c01e6ea:;
  R(15)+=0x3cu;
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
void f_8c01e760(SH4Ctx *c) {
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
  R(15)+=0xffffffccu;
  ST32(R(15)+4,R(4));
  R(0)=0x8u;
  ST32(R(15),R(5));
  R(5)=R(15);
  R(5)+=0x1cu;
  R(13)=R(15);
  R(13)+=0x28u;
  R(14)=0x8c0686d0u;
  R(12)=0x5400u;
  R(8)=R(13);
  R(9)=R(13);
  R(10)=R(13);
  ST32(R(15)+12,R(6));
  R(11)=0x3u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c01e924u;
  R(4)=LD32(R(15));
  R(9)+=0x8u;
  R(8)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  fp_st(c,2,R(5));
  fp_ld(c,12,R(0));
  R(0)=0x8c01e928u;
  fp_ld(c,13,R(0));
  R(0)=0x8c01e92cu;
  fp_ld(c,14,R(0));
  R(0)=0x8c01e934u;
  fp_ld(c,15,R(0));
L8c01e7be:;
  { uint32_t tg=R(14); c->pr=0x8c01e7c2u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_float(c,3);
  fp_ld(c,5,R(3));
  fp_mov(c,2,5);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_mov(c,4,3);
  fp_arith(c,0,4,12);
  fp_ld(c,3,R(2));
  fp_arith(c,1,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(10));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_mov(c,2,5);
  fp_arith(c,1,3,5);
  fp_fmac(c,2,3);
  fp_st(c,2,R(8));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,1,3,5);
  fp_mov(c,2,5);
  fp_fmac(c,2,3);
  { uint32_t tg=R(14); c->pr=0x8c01e80au; fp_st(c,2,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01e938u;
  fp_ld(c,2,R(0));
  R(0)=0x18u;
  R(3)=0x8c01a7e0u;
  R(6)=R(15);
  fp_float(c,3);
  R(5)=R(13);
  R(6)+=0x1cu;
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(7)=LD32(R(15)+12);
  fp_mov(c,5,3);
  fp_mov(c,6,3);
  { uint32_t tg=R(3); c->pr=0x8c01e832u; R(4)=R(12); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c01e836u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_float(c,3);
  fp_ld(c,5,R(3));
  fp_mov(c,2,5);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_mov(c,4,3);
  fp_arith(c,0,4,12);
  fp_ld(c,3,R(2));
  fp_arith(c,1,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(10));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_mov(c,2,5);
  fp_arith(c,1,3,5);
  fp_fmac(c,2,3);
  fp_st(c,2,R(8));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,1,3,5);
  fp_mov(c,2,5);
  fp_fmac(c,2,3);
  { uint32_t tg=R(14); c->pr=0x8c01e87eu; fp_st(c,2,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01e938u;
  fp_ld(c,2,R(0));
  R(0)=0x10u;
  R(3)=0x8c01a7e0u;
  R(6)=R(15);
  fp_float(c,3);
  R(5)=R(13);
  R(6)+=0x1cu;
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(7)=LD32(R(15)+12);
  fp_mov(c,5,3);
  fp_mov(c,6,3);
  { uint32_t tg=R(3); c->pr=0x8c01e8a6u; R(4)=R(12); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c01e8aau;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_float(c,3);
  fp_ld(c,5,R(3));
  fp_mov(c,2,5);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_mov(c,4,3);
  fp_arith(c,0,4,12);
  fp_ld(c,3,R(2));
  fp_arith(c,1,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(10));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_mov(c,2,5);
  fp_arith(c,1,3,5);
  fp_fmac(c,2,3);
  fp_st(c,2,R(8));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,1,3,5);
  fp_mov(c,2,5);
  fp_fmac(c,2,3);
  { uint32_t tg=R(14); c->pr=0x8c01e8f2u; fp_st(c,2,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01e938u;
  fp_ld(c,2,R(0));
  R(0)=0x14u;
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(7)=LD32(R(15)+12);
  fp_mov(c,6,3);
  fp_mov(c,5,3);
  {  goto L8c01e940; }
L8c01e940:;
  R(3)=0x8c01a7e0u;
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x1cu;
  { c->pr=0x8c01e94cu; R(4)=R(12); f_8c01a7e0(c); }
  R(11)+=0xfffffffdu;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c01e956;
  {  goto L8c01e7be; }
L8c01e956:;
  R(15)+=0x34u;
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
void f_8c01e972(SH4Ctx *c) {
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
  R(8)=R(15);
  R(8)+=0x18u;
  ST32(R(15)+4,R(4));
  R(4)=R(8);
  ST32(R(15),R(5));
  R(9)=R(15);
  R(9)+=0xcu;
  R(12)=0x8c130bf8u;
  R(0)=0x8c01eb48u;
  ST32(R(15)+8,R(6));
  R(5)=LD32(R(15)+4);
  R(14)=0x0u;
  R(11)=0xcu;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(9);
  fp_st(c,2,R(4));
  R(4)=LD32(R(15));
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  fp_st(c,2,R(5));
  fp_ld(c,12,R(0));
  R(0)=0x8c01eb4cu;
  R(13)=0x8c0686d0u;
  fp_ld(c,13,R(0));
  R(0)=0x8c01eb50u;
  fp_ld(c,14,R(0));
  R(0)=0x8c01eb58u;
  fp_ld(c,15,R(0));
L8c01e9da:;
  R(3)=R(14);
  R(3)+=R(8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+4);
  fp_mov(c,0,12);
  fp_ld(c,3,R(0)+R(14));
  R(0)=LD32(R(15)+8);
  fp_ld(c,2,R(0)+R(14));
  fp_fmac(c,2,3);
  { uint32_t tg=R(13); c->pr=0x8c01e9f0u; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(10)=R(14);
  R(3)=0x41000000u;
  R(10)+=R(12);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x3e999999u;
  c->fr[2]=c->fpul;
  c->fpul=R(3);
  fp_arith(c,2,3,2);
  R(3)=0xc0800000u;
  c->fr[0]=c->fpul;
  c->fpul=R(3);
  fp_arith(c,3,3,15);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(10));
  fp_fmac(c,1,3);
  c->fr[3]=c->fpul;
  fp_arith(c,0,1,3);
  fp_st(c,1,R(3));
  R(3)=R(14);
  R(3)+=R(9);
  { uint32_t tg=R(13); c->pr=0x8c01ea24u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(14)+=0x4u;
  fp_ld(c,2,R(10));
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_float(c,3);
  fp_mov(c,0,12);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_arith(c,0,3,13);
  fp_st(c,3,R(3));
  R(3)=R(14);
  R(3)+=R(8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(14));
  R(0)=LD32(R(15)+8);
  fp_ld(c,2,R(0)+R(14));
  fp_fmac(c,2,3);
  { uint32_t tg=R(13); c->pr=0x8c01ea4eu; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(10)=R(14);
  R(3)=0x41000000u;
  R(10)+=R(12);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x3e999999u;
  c->fr[2]=c->fpul;
  c->fpul=R(3);
  fp_arith(c,2,3,2);
  R(3)=0xc0800000u;
  c->fr[0]=c->fpul;
  c->fpul=R(3);
  fp_arith(c,3,3,15);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(10));
  fp_fmac(c,1,3);
  c->fr[3]=c->fpul;
  fp_arith(c,0,1,3);
  fp_st(c,1,R(3));
  R(3)=R(14);
  R(3)+=R(9);
  { uint32_t tg=R(13); c->pr=0x8c01ea82u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(14)+=0x4u;
  fp_ld(c,2,R(10));
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_float(c,3);
  fp_mov(c,0,12);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_arith(c,0,3,13);
  fp_st(c,3,R(3));
  R(3)=R(14);
  R(3)+=R(8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(14));
  R(0)=LD32(R(15)+8);
  fp_ld(c,2,R(0)+R(14));
  fp_fmac(c,2,3);
  { uint32_t tg=R(13); c->pr=0x8c01eaacu; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(10)=R(14);
  R(3)=0x41000000u;
  R(10)+=R(12);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x3e999999u;
  c->fr[2]=c->fpul;
  c->fpul=R(3);
  fp_arith(c,2,3,2);
  R(3)=0xc0800000u;
  c->fr[0]=c->fpul;
  c->fpul=R(3);
  fp_arith(c,3,3,15);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(10));
  fp_fmac(c,1,3);
  c->fr[3]=c->fpul;
  fp_arith(c,0,1,3);
  fp_st(c,1,R(3));
  R(3)=R(14);
  R(3)+=R(9);
  { uint32_t tg=R(13); c->pr=0x8c01eae0u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(14)+=0x4u;
  fp_ld(c,2,R(10));
  c->t=R(14)>=R(11);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_arith(c,0,3,13);
  { uint32_t k=c->t; fp_st(c,3,R(3)); if(k) goto L8c01eafc; }
  {  goto L8c01e9da; }
L8c01eafc:;
  { uint32_t tg=R(13); c->pr=0x8c01eb00u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01eb68u;
  fp_ld(c,2,R(0));
  R(6)=R(9);
  R(4)=0x90003u;
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+8);
  c->fr[4]=0x3F800000u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,15,3);
  fp_arith(c,0,15,14);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { c->pr=0x8c01eb22u; R(5)=R(8); f_8c01a7e0(c); }
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
void f_8c01eb80(SH4Ctx *c) {
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
  R(2)=0x8c0c466cu;
  ST32(R(15),R(6));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01eba8;
  {  goto L8c01ecb8; }
L8c01eba8:;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(6)=R(15);
  R(6)+=0x18u;
  R(2)=0x8c0c4644u;
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(9)=R(15);
  R(10)=R(15);
  R(11)=R(15);
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(15);
  R(4)+=0xcu;
  R(8)=R(15);
  fp_st(c,2,R(6));
  R(8)+=0x20u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(11)+=0x14u;
  R(10)+=0x10u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(3)=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(3));
  R(9)+=0xcu;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(3)=LD32(R(15));
  ST32(R(2),R(3));
  R(0)=0x8c01edecu;
  R(14)=0x8c0686d0u;
  fp_ld(c,12,R(0));
  R(0)=0x8c01edf0u;
  fp_ld(c,13,R(0));
  R(0)=0x8c01edf4u;
  fp_ld(c,14,R(0));
  R(0)=0x8c01edfcu;
  fp_ld(c,15,R(0));
  R(12)=0xau;
  R(13)=0x21001u;
L8c01ebfe:;
  { uint32_t tg=R(14); c->pr=0x8c01ec02u;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  { uint32_t tg=R(14); c->pr=0x8c01ec10u; fp_st(c,3,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,13);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,12);
  { uint32_t tg=R(14); c->pr=0x8c01ec1eu; fp_st(c,2,R(10)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,14);
  { uint32_t tg=R(14); c->pr=0x8c01ec2cu; fp_st(c,3,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ee00u;
  fp_ld(c,3,R(0));
  R(0)=0x8c01ee04u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,2);
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  R(0)=0x8u;
  R(5)+=0x18u;
  R(6)+=0xcu;
  fp_arith(c,2,2,3);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,1);
  fp_st(c,2,R(0)+R(15));
  fp_ld(c,4,R(8));
  R(7)=LD32(R(15));
  fp_mov(c,5,2);
  fp_mov(c,6,2);
  { uint32_t tg=R(3); c->pr=0x8c01ec58u; R(4)=R(13); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c01ec5cu;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  { uint32_t tg=R(14); c->pr=0x8c01ec6au; fp_st(c,3,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,13);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,12);
  { uint32_t tg=R(14); c->pr=0x8c01ec78u; fp_st(c,2,R(10)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,14);
  { uint32_t tg=R(14); c->pr=0x8c01ec86u; fp_st(c,3,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ee00u;
  fp_ld(c,3,R(0));
  R(0)=0x8c01ee04u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,2);
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  R(0)=0x4u;
  R(5)+=0x18u;
  R(6)+=0xcu;
  fp_arith(c,2,2,3);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,1);
  fp_st(c,2,R(0)+R(15));
  fp_ld(c,4,R(8));
  R(7)=LD32(R(15));
  fp_mov(c,5,2);
  fp_mov(c,6,2);
  { uint32_t tg=R(3); c->pr=0x8c01ecb2u; R(4)=R(13); sh4_call(c,tg); }
  R(12)+=0xfffffffeu;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01ebfe;
L8c01ecb8:;
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
void f_8c01ecd4(SH4Ctx *c) {
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
  R(15)+=0xffffffe4u;
  ST32(R(15),R(6));
  R(6)=R(15);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(6)+=0x10u;
  R(10)=0x8c0c466cu;
  R(11)=R(15);
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(9)=R(15);
  c->fr[13]=0x3F800000u;
  R(8)=R(15);
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(15);
  R(4)+=0x4u;
  R(12)=0x10003u;
  fp_st(c,2,R(6));
  R(8)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(9)+=0x8u;
  fp_unary(c,0,13);
  R(13)=0xau;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(11)+=0xcu;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  c->fr[14]=0x3F800000u;
  fp_arith(c,0,14,14);
  R(0)=0x8c01edfcu;
  R(14)=0x8c0686d0u;
  fp_ld(c,15,R(0));
L8c01ed38:;
  { uint32_t tg=R(14); c->pr=0x8c01ed3cu;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c01ed4au; fp_st(c,3,R(8)); sh4_call(c,tg); }
  c->fpul=R(0);
  c->fr[3]=0x00000000u;
  fp_float(c,2);
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(9));
  { uint32_t tg=R(14); c->pr=0x8c01ed5cu; fp_st(c,3,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ee10u;
  fp_ld(c,3,R(0));
  R(0)=0x8c01ee00u;
  R(3)=(int32_t)(int8_t)LD8(R(10));
  fp_float(c,2);
  fp_ld(c,1,R(0));
  c->t=(R(3)&R(3))==0;
  fp_arith(c,2,2,3);
  fp_arith(c,3,2,15);
  fp_mov(c,12,2);
  { uint32_t k=c->t; fp_arith(c,0,12,1); if(k) goto L8c01ed90; }
  { uint32_t tg=R(14); c->pr=0x8c01ed7au;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ee14u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01ee18u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,4,3);
  { fp_arith(c,0,4,1); goto L8c01eda2; }
L8c01ed90:;
  { uint32_t tg=R(14); c->pr=0x8c01ed94u;  sh4_call(c,tg); }
  c->fpul=R(0);
  c->fr[2]=0x3F800000u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_mov(c,4,3);
  fp_arith(c,0,4,2);
L8c01eda2:;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x10u;
  R(7)=LD32(R(15));
  R(6)+=0x4u;
  fp_mov(c,6,12);
  fp_mov(c,5,12);
  { c->pr=0x8c01edb6u; R(4)=R(12); f_8c01a7e0(c); }
  R(13)-=1;c->t=R(13)==0;
  if(!c->t) goto L8c01ed38;
  R(15)+=0x1cu;
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
void f_8c01ee20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(13)=R(5);
  R(14)=R(4);
  R(0)=0x4u;
  fp_mov(c,13,4);
  ST32(R(15),R(6));
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(13));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xcu;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,5,2);
  fp_fmac(c,3,4);
  fp_mov(c,0,2);
  fp_fmac(c,3,5);
  fp_mov(c,4,3);
  fp_fsrra(c,4);
  R(0)=0x4u;
  R(5)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=0x8c02520au;
  R(6)=R(15);
  fp_arith(c,2,3,4);
  R(4)=R(15);
  R(5)+=0x1cu;
  R(6)+=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c01eea2u; R(4)+=0x4u; sh4_call(c,tg); }
  R(2)=0x8c0686d0u;
  { c->pr=0x8c01eea8u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01efc8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01efccu;
  fp_ld(c,1,R(0));
  R(0)=0x8c01efd0u;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(0)=0x8c01efd4u;
  R(3)=0x8c03aedau;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,14,3);
  fp_arith(c,0,14,0);
  fp_ld(c,3,R(0));
  fp_mov(c,4,14);
  { c->pr=0x8c01eeccu; fp_arith(c,0,4,3); f_8c03aeda(c); }
  R(2)=0x8c03aedau;
  fp_mov(c,15,0);
  { c->pr=0x8c01eed4u; fp_mov(c,4,14); f_8c03aeda(c); }
  R(0)=0x10u;
  fp_mov(c,4,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,0);
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,0,15);
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,0);
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,0,15);
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,4,0);
  fp_mov(c,0,15);
  fp_fmac(c,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_mov(c,4,3);
  c->fr[3]=0x3F800000u;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c01ef38;
  R(3)=0x8c0c4638u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c01ef3e;
L8c01ef38:;
  fp_mov(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
L8c01ef3e:;
  fp_arith(c,2,4,13);
  R(0)=0x4u;
  fp_ld(c,2,R(13));
  R(12)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(12)+=0x34u;
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(12));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(13)=R(15);
  R(13)+=0x28u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x4u;
  fp_ld(c,3,R(14));
  fp_st(c,3,R(13));
  fp_ld(c,2,R(0)+R(14));
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8c01efe0u;
  fp_ld(c,15,R(0));
  R(6)=R(13);
  R(4)=0x4000000au;
  R(7)=LD32(R(15));
  R(3)=0x8c01a7e0u;
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { c->pr=0x8c01ef98u; R(5)=R(12); f_8c01a7e0(c); }
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01f000(SH4Ctx *c) {
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
  R(15)+=0xffffffe0u;
  R(0)=0x4u;
  R(12)=0x8c0686d0u;
  R(13)=R(15);
  R(14)=R(15);
  R(14)+=0x14u;
  R(11)=R(5);
  R(13)+=0x8u;
  R(10)=R(4);
  ST32(R(15),R(6));
  R(8)=0xcu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c01f128u;
  fp_ld(c,15,R(0));
  R(9)=0x8u;
L8c01f036:;
  { uint32_t tg=R(12); c->pr=0x8c01f03au;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f12cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f130u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  R(3)=0x8c129af0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(12); c->pr=0x8c01f052u; fp_st(c,3,R(3)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f138u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f13cu;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,13,3);
  { uint32_t tg=R(12); c->pr=0x8c01f068u; fp_arith(c,0,13,1); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f140u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f144u;
  fp_ld(c,1,R(0));
  R(0)=0x4u;
  fp_float(c,3);
  fp_ld(c,0,R(0)+R(15));
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  fp_mov(c,14,3);
  { uint32_t tg=R(12); c->pr=0x8c01f084u; fp_arith(c,2,14,0); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f148u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f14cu;
  fp_ld(c,1,R(0));
  R(4)=0x0u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,12,3);
  fp_arith(c,0,12,1);
L8c01f09a:;
  R(5)=R(4);
  R(5)+=R(11);
  fp_ld(c,3,R(5));
  R(0)=R(4);
  fp_mov(c,0,13);
  R(4)+=0x4u;
  fp_arith(c,2,3,14);
  fp_st(c,3,R(0)+R(13));
  fp_ld(c,2,R(5));
  R(5)=R(4);
  fp_ld(c,3,R(0)+R(10));
  R(5)+=R(11);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=R(4);
  fp_ld(c,3,R(5));
  R(4)+=0x4u;
  fp_arith(c,2,3,14);
  fp_st(c,3,R(0)+R(13));
  fp_ld(c,2,R(5));
  R(5)=R(4);
  fp_ld(c,3,R(0)+R(10));
  R(5)+=R(11);
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=R(4);
  fp_ld(c,3,R(5));
  fp_arith(c,2,3,14);
  fp_st(c,3,R(0)+R(13));
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(0)+R(10));
  fp_fmac(c,3,2);
  R(4)+=0x4u;
  c->t=R(4)>=R(8);
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(14)); if(k) goto L8c01f09a; }
  R(4)=0x3009u;
  R(6)=R(13);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15));
  fp_mov(c,6,12);
  fp_mov(c,5,12);
  fp_mov(c,4,14);
  { c->pr=0x8c01f0f4u; R(5)=R(14); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c01f0fe;
  R(3)=0x1u;
  ST32(R(4)+4,R(3));
L8c01f0fe:;
  R(9)-=1;c->t=R(9)==0;
  if(!c->t) goto L8c01f036;
  R(15)+=0x20u;
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
void f_8c01f160(SH4Ctx *c) {
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
  R(15)+=0xffffffc8u;
  R(0)=0x1cu;
  R(13)=0x8c0686d0u;
  R(11)=R(15);
  R(12)=R(15);
  R(3)=0x8u;
  ST32(R(15)+24,R(6));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c01f320u;
  R(9)=R(4);
  R(10)=R(5);
  R(12)+=0x20u;
  ST32(R(15)+4,R(3));
  fp_ld(c,12,R(0));
  R(0)=0x8c01f324u;
  fp_ld(c,13,R(0));
  R(0)=0x8c01f328u;
  fp_ld(c,14,R(0));
  R(0)=0x8c01f330u;
  fp_ld(c,15,R(0));
  R(11)+=0x2cu;
L8c01f1a2:;
  { uint32_t tg=R(13); c->pr=0x8c01f1a6u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f334u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f338u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  R(3)=0x8c129af0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(13); c->pr=0x8c01f1beu; fp_st(c,3,R(3)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f340u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f344u;
  fp_ld(c,1,R(0));
  R(0)=0x1cu;
  fp_float(c,3);
  R(14)=0x0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(15));
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,2,R(0)+R(15));
L8c01f1dc:;
  R(3)=R(14);
  R(8)=R(14);
  R(3)+=R(12);
  R(8)+=R(10);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  fp_ld(c,0,R(8));
  R(2)+=0x10u;
  fp_st(c,0,R(2));
  { uint32_t tg=R(13); c->pr=0x8c01f1f2u; R(15)-=fp_sz(c);fp_st(c,0,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(3)=R(15);
  R(3)+=0x14u;
  R(0)=R(14);
  fp_ld(c,2,R(3));
  R(3)=R(15);
  fp_float(c,3);
  R(3)+=0x8u;
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  R(3)=R(14);
  R(3)+=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,3,R(0)+R(9));
  { uint32_t tg=R(13); c->pr=0x8c01f220u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(14)+=0x4u;
  c->fr[0]=0x00000000u;
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_float(c,2);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,0);
  fp_ld(c,0,R(8));
  R(8)=R(14);
  R(8)+=R(10);
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  R(3)=R(14);
  R(3)+=R(12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  fp_ld(c,3,R(8));
  R(2)+=0x18u;
  fp_st(c,3,R(2));
  { uint32_t tg=R(13); c->pr=0x8c01f24eu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(3)=R(15);
  R(3)+=0x1cu;
  R(0)=R(14);
  fp_ld(c,2,R(3));
  R(3)=R(15);
  fp_float(c,3);
  R(3)+=0x8u;
  fp_ld(c,0,R(3));
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  R(3)=R(14);
  R(3)+=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,3,R(0)+R(9));
  { uint32_t tg=R(13); c->pr=0x8c01f27cu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(14)+=0x4u;
  c->fr[0]=0x00000000u;
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_float(c,2);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,0);
  fp_ld(c,0,R(8));
  R(8)=R(14);
  R(8)+=R(10);
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  R(3)=R(14);
  R(3)+=R(12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  fp_ld(c,3,R(8));
  R(2)+=0x14u;
  fp_st(c,3,R(2));
  { uint32_t tg=R(13); c->pr=0x8c01f2aau; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(3)=R(15);
  R(3)+=0x18u;
  R(0)=R(14);
  fp_ld(c,2,R(3));
  R(3)=R(15);
  fp_float(c,3);
  R(3)+=0x8u;
  fp_ld(c,0,R(3));
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  R(3)=R(14);
  R(3)+=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,3,R(0)+R(9));
  { uint32_t tg=R(13); c->pr=0x8c01f2d8u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(2)=0xcu;
  c->fr[0]=0x00000000u;
  R(14)+=0x4u;
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  c->t=R(14)>=R(2);
  fp_float(c,2);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,0);
  fp_ld(c,0,R(8));
  fp_fmac(c,3,2);
  fp_st(c,3,R(3));
  if(c->t) goto L8c01f2fa;
  {  goto L8c01f1dc; }
L8c01f2fa:;
  R(0)=0x8u;
  fp_ld(c,4,R(15));
  fp_ld(c,6,R(0)+R(15));
  R(6)=R(12);
  R(7)=LD32(R(15)+24);
  fp_mov(c,5,6);
  { R(5)=R(11); goto L8c01f360; }
L8c01f360:;
  R(3)=0x8c01a7e0u;
  R(4)=0x2103u;
  { c->pr=0x8c01f368u;  f_8c01a7e0(c); }
  R(2)=LD32(R(15)+4);
  R(2)+=0xffffffffu;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(2)); if(k) goto L8c01f376; }
  {  goto L8c01f1a2; }
L8c01f376:;
  R(15)+=0x38u;
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
void f_8c01f3c0(SH4Ctx *c) {
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
  R(15)+=0xffffffe4u;
  R(0)=0x8c01f524u;
  fp_mov(c,13,4);
  c->fr[15]=0x3F800000u;
  R(13)=R(15);
  fp_mov(c,4,15);
  R(8)=0x0u;
  R(11)=R(4);
  ST32(R(15),R(6));
  fp_ld(c,3,R(0));
  R(13)+=0x4u;
  R(4)=R(8);
  R(10)=0xcu;
  fp_arith(c,2,13,3);
  fp_arith(c,3,4,13);
L8c01f3f6:;
  R(0)=R(4);
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(5));
  R(4)+=0x4u;
  fp_arith(c,1,3,2);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(13));
  R(0)=R(4);
  fp_ld(c,2,R(0)+R(11));
  R(4)+=0x4u;
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,1,3,2);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(13));
  R(0)=R(4);
  fp_ld(c,2,R(0)+R(11));
  R(4)+=0x4u;
  fp_ld(c,3,R(0)+R(5));
  c->t=R(4)>=R(10);
  fp_arith(c,1,3,2);
  fp_arith(c,2,3,4);
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(13)); if(k) goto L8c01f3f6; }
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,13,3);
  R(0)=0x8c01f528u;
  R(14)=0x8c0c46a0u;
  fp_ld(c,12,R(0));
  R(9)=R(8);
  R(12)=R(15);
  { uint32_t k=!c->t; R(12)+=0x10u; if(k) goto L8c01f4be; }
L8c01f436:;
  R(4)=R(8);
L8c01f438:;
  c->fpul=R(9);
  R(0)=R(4);
  fp_ld(c,1,R(14));
  R(4)+=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_float(c,2);
  fp_mov(c,4,2);
  fp_arith(c,0,2,1);
  fp_ld(c,1,R(0)+R(11));
  fp_mov(c,0,2);
  fp_fmac(c,1,3);
  fp_mov(c,0,4);
  fp_st(c,1,R(0)+R(12));
  R(0)=R(4);
  fp_ld(c,2,R(14));
  R(4)+=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,0,0,2);
  fp_ld(c,2,R(0)+R(11));
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(12));
  R(0)=R(4);
  fp_ld(c,2,R(14));
  R(4)+=0x4u;
  fp_ld(c,3,R(0)+R(13));
  c->t=R(4)>=R(10);
  fp_arith(c,0,4,2);
  fp_ld(c,2,R(0)+R(11));
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(12)); if(k) goto L8c01f438; }
  R(2)=0x8c0686d0u;
  { c->pr=0x8c01f47eu;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01f534u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f538u;
  fp_ld(c,1,R(0));
  R(6)=0x0u;
  fp_float(c,3);
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  R(4)=0x6000u;
  R(7)=LD32(R(15));
  R(3)=0x8c01a7e0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_mov(c,14,3);
  fp_arith(c,0,14,1);
  fp_mov(c,5,14);
  fp_mov(c,6,14);
  { c->pr=0x8c01f4a6u; R(5)=R(12); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(9)+=0x1u; if(k) goto L8c01f4b6; }
  R(0)=0x8c01f540u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(4));
L8c01f4b6:;
  c->fpul=R(9);
  fp_float(c,3);
  fp_cmp(c,1,13,3);
  if(c->t) goto L8c01f436;
L8c01f4be:;
  R(3)=0x8c0c4684u;
  R(0)=0x8c01f544u;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(3));
  fp_ld(c,0,R(0));
  fp_fmac(c,2,3);
  fp_mov(c,3,2);
  fp_cmp(c,1,15,3);
  { uint32_t k=c->t; fp_st(c,2,R(14)); if(k) goto L8c01f4de; }
L8c01f4d2:;
  fp_ld(c,3,R(14));
  fp_arith(c,1,3,15);
  fp_mov(c,2,3);
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; fp_st(c,3,R(14)); if(k) goto L8c01f4d2; }
L8c01f4de:;
  fp_ld(c,3,R(14));
  c->fr[4]=0x3F800000u;
  fp_unary(c,0,4);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c01f4ea;
  fp_st(c,4,R(14));
L8c01f4ea:;
  R(15)+=0x1cu;
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
void f_8c01f560(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(6)+=0x14u;
  R(14)=R(15);
  R(14)+=0x8u;
  fp_st(c,4,R(15));
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(0)=0x4u;
  R(3)=0x8c0686d0u;
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  c->fr[4]=0x00000000u;
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(14);
  fp_st(c,2,R(6));
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  fp_st(c,4,R(14));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c01f5a8u; fp_st(c,4,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f784u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f788u;
  fp_ld(c,1,R(0));
  R(0)=0x8c01f78cu;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(0)=0x8c01f790u;
  fp_ld(c,4,R(15));
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+4);
  R(5)+=0x14u;
  R(6)=R(14);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  fp_arith(c,0,15,0);
  fp_ld(c,3,R(0));
  fp_arith(c,2,4,3);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { uint32_t tg=R(3); c->pr=0x8c01f5dau; R(4)=0xcu; sh4_call(c,tg); }
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01f5e4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c01f798u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(11)=0x8c130be0u;
  R(12)=0x8c130bd4u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,12,R(0));
  R(0)=0x8c01f79cu;
  fp_ld(c,13,R(0));
  R(0)=0x8c01f7a0u;
  fp_ld(c,14,R(0));
  R(0)=0x8c01f788u;
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(12));
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  fp_ld(c,15,R(0));
  R(13)=0x8c0686d0u;
  { c->pr=0x8c01f61au; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x1cu;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  { uint32_t tg=R(13); c->pr=0x8c01f63au; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x20u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  { uint32_t tg=R(13); c->pr=0x8c01f65au; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f7acu;
  fp_ld(c,2,R(0));
  R(0)=0x8c01f7b0u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(0));
  R(0)=0x24u;
  fp_arith(c,0,1,3);
  fp_st(c,1,R(0)+R(14));
  R(0)=0x8c01f7b4u;
  fp_ld(c,13,R(0));
  R(0)=0x8c01f7b8u;
  { uint32_t tg=R(13); c->pr=0x8c01f67eu; fp_ld(c,14,R(0)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x28u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(13); c->pr=0x8c01f68eu; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x2cu;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(13); c->pr=0x8c01f69eu; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f7bcu;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(0)=0x30u;
  fp_float(c,3);
  R(3)=0x8700bu;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01f790u;
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c01f6beu; fp_ld(c,14,R(0)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01f7c4u;
  fp_ld(c,2,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(13); c->pr=0x8c01f6d2u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x18u;
  c->fr[2]=0x3F800000u;
  R(3)=0x8c0c467cu;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01f7c8u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(14));
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
void f_8c01f706(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(13)=R(5);
  R(11)=R(4);
  R(5)=R(11);
  R(4)=0x8c130bd4u;
  ST32(R(15),R(6));
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(13);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=0x8c130be0u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(13);
  fp_st(c,2,R(4));
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=0x8c130becu;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(4)=0x8c130be0u;
  { c->pr=0x8c01f762u; fp_mov(c,12,4); f_8c02059e(c); }
  R(4)=0x8c130becu;
  { c->pr=0x8c01f768u;  f_8c0205d8(c); }
  R(4)=0x8c0c46a4u;
  R(3)=0x2u;
  R(2)=LD32(R(4));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c01f7e0;
  R(0)=LD32(R(4));
  R(0)+=0x1u;
  { ST32(R(4),R(0)); goto L8c01f8de; }
L8c01f7e0:;
  R(0)=0x8c01fa60u;
  R(12)=R(15);
  R(2)=0x0u;
  R(14)=0x8c0686d0u;
  R(12)+=0x10u;
  ST32(R(4),R(2));
  fp_ld(c,13,R(0));
  R(0)=0x8c01fa64u;
  fp_ld(c,14,R(0));
  R(0)=0x8c01fa6cu;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(11));
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  fp_ld(c,15,R(0));
  { uint32_t tg=R(14); c->pr=0x8c01f802u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(12));
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c01f820u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(0)+R(12));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c01f840u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fa70u;
  c->fr[2]=0x3F800000u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_arith(c,0,1,3);
  { uint32_t tg=R(14); c->pr=0x8c01f85au; fp_st(c,1,R(0)+R(12)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fa74u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01fa78u;
  fp_ld(c,0,R(0));
  R(0)=0x8c01fa7cu;
  fp_mov(c,4,12);
  fp_float(c,3);
  fp_mov(c,1,12);
  fp_arith(c,2,4,0);
  fp_arith(c,2,1,2);
  fp_ld(c,12,R(0));
  R(0)=0x8c01fa80u;
  R(13)=R(15);
  fp_ld(c,13,R(0));
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,1);
  fp_arith(c,3,3,15);
  fp_mov(c,14,3);
  fp_arith(c,0,14,4);
  { uint32_t tg=R(14); c->pr=0x8c01f886u; R(13)+=0x4u; sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c01f894u; fp_st(c,3,R(13)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  fp_float(c,2);
  fp_arith(c,2,2,12);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,13);
  { uint32_t tg=R(14); c->pr=0x8c01f8a4u; fp_st(c,2,R(0)+R(13)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fa84u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(0)=0x8u;
  fp_float(c,3);
  R(4)=0x8700bu;
  R(3)=0x8c01a7e0u;
  R(6)=R(13);
  fp_mov(c,6,14);
  fp_mov(c,5,14);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8c01fa88u;
  fp_ld(c,4,R(0));
  R(7)=LD32(R(15));
  { uint32_t tg=R(3); c->pr=0x8c01f8ceu; R(5)=R(12); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c01f8de;
  R(2)=0x8c01f5e4u;
  R(0)=0x5cu;
  R(3)=0x10u;
  ST32(R(4)+4,R(3));
  ST32(R(4)+R(0),R(2));
L8c01f8de:;
  R(15)+=0x1cu;
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
void f_8c01f8f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(2)=0x8c123b74u;
  R(11)=R(5);
  R(12)=R(4);
  fp_mov(c,12,4);
  ST32(R(15),R(6));
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c01f924; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c01f924:;
  R(0)=0x8c01faa0u;
  R(4)=0x8c0c46a8u;
  fp_ld(c,2,R(0));
  fp_mov(c,4,3);
  fp_arith(c,2,4,2);
  c->fr[3]=0x00000000u;
  R(5)=0x8c0c467cu;
  fp_st(c,4,R(5));
  fp_ld(c,2,R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c01f93e;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
L8c01f93e:;
  fp_ld(c,3,R(4));
  fp_ld(c,4,R(5));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c01fa40;
  R(0)=0x8c01faacu;
  R(13)=R(15);
  fp_ld(c,3,R(0));
  R(0)=0x8c01fab0u;
  R(14)=0x8c0686d0u;
  R(13)+=0x10u;
  fp_arith(c,0,4,3);
  fp_st(c,4,R(4));
  fp_ld(c,13,R(0));
  R(0)=0x8c01fab4u;
  fp_ld(c,14,R(0));
  R(0)=0x8c01fa6cu;
  fp_ld(c,1,R(11));
  fp_ld(c,2,R(12));
  fp_mov(c,0,14);
  fp_fmac(c,2,1);
  fp_ld(c,15,R(0));
  { uint32_t tg=R(14); c->pr=0x8c01f96cu; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fab8u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(13));
  fp_ld(c,1,R(0)+R(11));
  fp_ld(c,2,R(0)+R(12));
  fp_fmac(c,2,1);
  { uint32_t tg=R(14); c->pr=0x8c01f98eu; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fab8u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  c->fr[13]=0x3F800000u;
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,1,R(0)+R(11));
  fp_fmac(c,2,1);
  { uint32_t tg=R(14); c->pr=0x8c01f9b4u; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fa70u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_arith(c,0,2,3);
  { uint32_t tg=R(14); c->pr=0x8c01f9ccu; fp_st(c,2,R(0)+R(13)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fabcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c01fac0u;
  fp_ld(c,0,R(0));
  R(0)=0x8c01fa7cu;
  fp_mov(c,4,12);
  fp_float(c,3);
  fp_mov(c,1,12);
  fp_arith(c,2,4,0);
  fp_arith(c,2,1,2);
  fp_ld(c,12,R(0));
  R(12)=R(15);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,1);
  fp_arith(c,3,3,15);
  fp_mov(c,14,3);
  fp_arith(c,0,14,4);
  { uint32_t tg=R(14); c->pr=0x8c01f9f4u; R(12)+=0x4u; sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fa80u;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c01fa06u; fp_st(c,3,R(12)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fa80u;
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c01fa1au; fp_st(c,3,R(0)+R(12)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fac4u;
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  R(4)=0x8700bu;
  R(6)=R(12);
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  fp_mov(c,6,14);
  fp_mov(c,5,14);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8c01fa88u;
  fp_ld(c,4,R(0));
  R(7)=LD32(R(15));
  { c->pr=0x8c01fa40u; R(5)=R(13); f_8c01a7e0(c); }
L8c01fa40:;
  R(15)+=0x1cu;
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
void f_8c01fae0(SH4Ctx *c) {
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
  ST32(R(15)+4,R(4));
  R(4)=R(15);
  R(4)+=0x24u;
  ST32(R(15)+8,R(6));
  R(0)=0x2cu;
  fp_st(c,4,R(15));
  ST32(R(15)+12,R(4));
  R(5)=LD32(R(15)+4);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  fp_ld(c,2,R(0)+R(15));
  fp_ld(c,3,R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c01fb26;
  {  goto L8c01fc30; }
L8c01fb26:;
  R(13)=R(15);
  R(13)+=0x18u;
  R(0)=0x8c01fb64u;
  R(8)=R(13);
  R(3)=R(8);
  R(2)=R(13);
  R(11)=0x2001u;
  R(3)+=0x8u;
  R(14)=0x8c0686d0u;
  R(9)=R(15);
  R(2)+=0x4u;
  R(9)+=0x2cu;
  ST32(R(15)+16,R(2));
  R(10)=0x4u;
  ST32(R(15)+20,R(3));
  fp_ld(c,12,R(0));
  R(0)=0x8c01fb68u;
  fp_ld(c,13,R(0));
  R(0)=0x8c01fb70u;
  R(12)=0x2u;
  { fp_ld(c,14,R(0)); goto L8c01fc2c; }
L8c01fb80:;
  R(4)=LD32(R(15)+4);
  R(5)=LD32(R(15)+12);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  { uint32_t tg=R(14); c->pr=0x8c01fb96u; fp_st(c,2,R(5)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fc60u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01fc64u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_ld(c,0,R(9));
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_arith(c,0,0,3);
  { uint32_t tg=R(14); c->pr=0x8c01fbb0u; fp_st(c,0,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fc68u;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,12);
  fp_st(c,3,R(8));
  R(3)=LD32(R(15)+16);
  { uint32_t tg=R(14); c->pr=0x8c01fbc6u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fc68u;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,12);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+20);
  { uint32_t tg=R(14); c->pr=0x8c01fbdeu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fc6cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c01fc70u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c01fbf6u; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01fc74u;
  fp_ld(c,4,R(0));
  R(5)=R(15);
  R(7)=LD32(R(15)+8);
  R(5)+=0x24u;
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  R(6)=R(13);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,14);
  fp_mov(c,15,3);
  fp_arith(c,0,15,13);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { c->pr=0x8c01fc18u; R(4)=R(11); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)+=0xffffffffu; if(k) goto L8c01fc2c; }
  R(3)=LD32(R(4)+4);
  R(0)=0x4cu;
  R(3)|=R(10);
  ST32(R(4)+4,R(3));
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(4));
L8c01fc2c:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01fb80;
L8c01fc30:;
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
void f_8c01fc80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(3)=0x8c0c467cu;
  R(0)=0x8c01fda4u;
  R(12)=R(15);
  R(12)+=0x20u;
  R(5)=R(12);
  R(14)=R(15);
  R(14)+=0x14u;
  R(13)=0x8c03aedau;
  ST32(R(15)+4,R(6));
  fp_ld(c,2,R(3));
  R(3)=R(14);
  fp_ld(c,3,R(0));
  R(0)=0x8c01fdb0u;
  R(8)=R(3);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(15));
  fp_ld(c,1,R(4));R(4)+=fp_sz(c);
  fp_st(c,1,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));R(4)+=fp_sz(c);
  fp_st(c,2,R(5));
  R(5)+=0x4u;
  fp_ld(c,1,R(4));
  fp_st(c,1,R(5));
  fp_ld(c,15,R(0));
  ST32(R(15)+8,R(3));
  { uint32_t tg=R(13); c->pr=0x8c01fcccu; fp_ld(c,4,R(15)); sh4_call(c,tg); }
  R(3)=R(14);
  R(3)+=0x4u;
  c->fr[3]=0x00000000u;
  R(0)=0x8c01fdb4u;
  fp_arith(c,2,0,15);
  fp_st(c,0,R(8));
  ST32(R(15)+12,R(3));
  fp_st(c,3,R(3));
  R(3)=R(14);
  R(3)+=0x8u;
  R(8)=R(3);
  ST32(R(15)+16,R(3));
  fp_ld(c,12,R(15));
  fp_ld(c,3,R(0));
  fp_arith(c,0,12,3);
  { uint32_t tg=R(13); c->pr=0x8c01fceeu; fp_mov(c,4,12); sh4_call(c,tg); }
  fp_arith(c,2,0,15);
  R(3)=0x8c0686d0u;
  R(0)=0x8c01fdb8u;
  fp_st(c,0,R(8));
  { c->pr=0x8c01fcfau; fp_ld(c,13,R(0)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01fdc0u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01fdc4u;
  fp_ld(c,1,R(0));
  R(0)=0x8c01fdc8u;
  fp_float(c,3);
  fp_ld(c,4,R(0));
  R(4)=0x4001u;
  R(6)=R(14);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,2);
  fp_mov(c,14,3);
  fp_arith(c,0,14,1);
  fp_mov(c,6,14);
  fp_mov(c,5,14);
  { c->pr=0x8c01fd22u; R(5)=R(12); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  R(0)=0x8c01fdd0u;
  { uint32_t k=c->t; fp_ld(c,14,R(0)); if(k) goto L8c01fd30; }
  R(0)=0x58u;
  fp_st(c,14,R(0)+R(4));
L8c01fd30:;
  R(3)=LD32(R(15)+8);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(3));
  R(8)=LD32(R(15)+12);
  { uint32_t tg=R(13); c->pr=0x8c01fd3cu; fp_mov(c,4,12); sh4_call(c,tg); }
  fp_arith(c,2,0,15);
  fp_st(c,0,R(8));
  R(8)=LD32(R(15)+16);
  { uint32_t tg=R(13); c->pr=0x8c01fd46u; fp_ld(c,4,R(15)); sh4_call(c,tg); }
  fp_arith(c,2,0,15);
  R(3)=0x8c0686d0u;
  { c->pr=0x8c01fd4eu; fp_st(c,0,R(8)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c01fdc0u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01fdc4u;
  fp_ld(c,1,R(0));
  R(0)=0x8c01fdc8u;
  fp_float(c,3);
  fp_ld(c,4,R(0));
  R(4)=0x4001u;
  R(6)=R(14);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,2);
  fp_mov(c,15,3);
  fp_arith(c,0,15,1);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { c->pr=0x8c01fd76u; R(5)=R(12); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c01fd80;
  R(0)=0x58u;
  fp_st(c,14,R(0)+R(4));
L8c01fd80:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01fde0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(7)=0x0u;
  R(11)=0x8c130c04u;
  R(10)=R(4);
  ST32(R(15),R(6));
  R(6)=0xcu;
  R(4)=R(7);
L8c01fdfa:;
  R(0)=R(4);
  fp_ld(c,2,R(0)+R(10));
  fp_ld(c,3,R(0)+R(11));
  R(4)+=0x4u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(10));
  R(0)=R(4);
  fp_ld(c,2,R(0)+R(10));
  R(4)+=0x4u;
  fp_ld(c,3,R(0)+R(11));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(10));
  R(0)=R(4);
  fp_ld(c,2,R(0)+R(10));
  R(4)+=0x4u;
  fp_ld(c,3,R(0)+R(11));
  c->t=R(4)>=R(6);
  fp_arith(c,0,2,3);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(10)); if(k) goto L8c01fdfa; }
  R(5)=R(10);
  R(12)=R(15);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(12)+=0x10u;
  R(4)=R(12);
  R(13)=0x8c1310bcu;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(4)=0x8c0c46acu;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01fecc;
  R(5)=R(13);
  R(14)=R(15);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(14)+=0x4u;
  R(4)=R(14);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(4)=R(7);
L8c01fe5e:;
  R(5)=R(4);
  R(5)+=R(14);
  R(0)=R(4);
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(0)+R(12));
  R(4)+=0x4u;
  R(0)=R(4);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(5));
  R(5)=R(4);
  R(5)+=R(14);
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,2,R(5));
  R(4)+=0x4u;
  R(0)=R(4);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(5));
  R(5)=R(4);
  R(5)+=R(14);
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,2,R(5));
  R(4)+=0x4u;
  c->t=R(4)>=R(6);
  fp_arith(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,3,R(5)); if(k) goto L8c01fe5e; }
  R(0)=0x8c01ff0cu;
  R(4)=0x70004000u;
  fp_ld(c,4,R(0));
  R(6)=R(14);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15));
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { c->pr=0x8c01fea6u; R(5)=R(12); f_8c01a7e0(c); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c01fed0;
  R(5)=R(11);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=R(6);
  R(4)+=0x10u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(0)=0x8c01ff18u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  { fp_st(c,3,R(0)+R(6)); goto L8c01fed0; }
L8c01fecc:;
  R(2)=0x1u;
  ST8(R(4),R(2));
L8c01fed0:;
  R(5)=R(10);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=R(13);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01ff20(SH4Ctx *c) {
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
  R(7)=0xcu;
  ST32(R(15),R(6));
  R(0)=0x0u;
L8c01ff40:;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)+=0x4u;
  c->t=R(0)>=R(7);
  if(!c->t) goto L8c01ff40;
  R(0)=0x8c020084u;
  R(5)=R(15);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(5)+=0x18u;
  R(13)=R(15);
  R(13)+=0xcu;
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(8)=R(13);
  R(14)=0x8c0686d0u;
  R(9)=R(13);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  R(10)=R(13);
  R(12)=0x5001u;
  R(11)=0x8u;
  fp_st(c,2,R(5));
  R(9)+=0x8u;
  fp_ld(c,12,R(0));
  R(0)=0x8c020088u;
  fp_ld(c,13,R(0));
  R(0)=0x8c020090u;
  fp_ld(c,14,R(0));
  R(0)=0x8c020094u;
  fp_ld(c,15,R(0));
  R(8)+=0x4u;
L8c01ff9a:;
  { uint32_t tg=R(14); c->pr=0x8c01ff9eu;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020098u;
  fp_ld(c,2,R(0));
  R(0)=0x8c02009cu;
  fp_ld(c,1,R(0));
  R(0)=0x4u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c01ffb6u; fp_st(c,3,R(0)+R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c01ffc4u; fp_st(c,3,R(10)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,13);
  { uint32_t tg=R(14); c->pr=0x8c01ffd2u; fp_st(c,2,R(8)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x18u;
  R(6)=R(13);
  fp_float(c,3);
  fp_mov(c,4,12);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  fp_st(c,3,R(9));
  fp_ld(c,6,R(0)+R(15));
  R(7)=LD32(R(15));
  fp_mov(c,5,6);
  { uint32_t tg=R(3); c->pr=0x8c01fff4u; R(4)=R(12); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c01fff8u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020098u;
  fp_ld(c,2,R(0));
  R(0)=0x8c02009cu;
  fp_ld(c,1,R(0));
  R(0)=0x8u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c020010u; fp_st(c,3,R(0)+R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c02001eu; fp_st(c,3,R(10)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,13);
  { uint32_t tg=R(14); c->pr=0x8c02002cu; fp_st(c,2,R(8)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8u;
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x18u;
  R(6)=R(13);
  fp_float(c,3);
  fp_mov(c,4,12);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  fp_st(c,3,R(9));
  fp_ld(c,6,R(0)+R(15));
  R(7)=LD32(R(15));
  fp_mov(c,5,6);
  { uint32_t tg=R(3); c->pr=0x8c02004eu; R(4)=R(12); sh4_call(c,tg); }
  R(11)+=0xfffffffeu;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c01ff9a;
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
void f_8c0200c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(12)=R(4);
  R(4)=0x8c0c46b0u;
  ST32(R(15),R(6));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(11)=R(5); if(k) goto L8c0200e8; }
  R(3)=0x0u;
  { ST32(R(4),R(3)); goto L8c0201e8; }
L8c0200e8:;
  c->fr[14]=0x3F800000u;
  fp_arith(c,0,14,14);
  R(0)=0x8c020204u;
  R(2)=LD32(R(4));
  R(13)=R(15);
  R(14)=0x8c0686d0u;
  R(2)+=0x1u;
  fp_mov(c,0,14);
  R(13)+=0x4u;
  ST32(R(4),R(2));
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(12));
  fp_ld(c,12,R(0));
  R(0)=0x8c020208u;
  fp_fmac(c,3,2);
  fp_ld(c,13,R(0));
  R(0)=0x8c020210u;
  fp_ld(c,15,R(0));
  { uint32_t tg=R(14); c->pr=0x8c020110u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(13));
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c02012eu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c02014eu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020214u;
  fp_ld(c,2,R(0));
  R(0)=0x8c020218u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_arith(c,0,1,3);
  { uint32_t tg=R(14); c->pr=0x8c02016au; fp_st(c,1,R(0)+R(13)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02021cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c020220u;
  fp_ld(c,1,R(0));
  R(0)=0x8c020224u;
  fp_float(c,3);
  fp_ld(c,4,R(0));
  R(4)=0x80000000u;
  R(6)=R(13);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15));
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,13,3);
  fp_arith(c,0,13,1);
  fp_mov(c,6,13);
  fp_mov(c,5,13);
  { c->pr=0x8c020192u; R(5)=R(13); f_8c01a7e0(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0201e8;
  { uint32_t tg=R(14); c->pr=0x8c02019cu;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020230u;
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  fp_float(c,2);
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_mov(c,4,2);
  fp_arith(c,0,4,3);
  fp_ld(c,2,R(0));
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c0201be;
  R(0)=0x8c020234u;
  fp_mov(c,3,4);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c0201c0; }
L8c0201be:;
  fp_mov(c,3,4);
L8c0201c0:;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(3)=R(2);
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  ST32(R(13)+8,R(2));
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0201d8; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0201d8:;
  c->fr[1]=0x00000000u;
  fp_cmp(c,1,1,3);
  if(!c->t) goto L8c0201e4;
  R(2)=0xffffffffu;
  { ST32(R(13)+8,R(2)); goto L8c0201e8; }
L8c0201e4:;
  R(1)=0x1u;
  ST32(R(13)+8,R(1));
L8c0201e8:;
  R(15)+=0x10u;
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
void f_8c020240(SH4Ctx *c) {
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
  R(15)+=0xffffffd4u;
  R(0)=0x8c0203e8u;
  R(11)=R(15);
  R(11)+=0x14u;
  R(13)=R(15);
  R(8)=R(11);
  R(13)+=0x20u;
  R(3)=R(13);
  R(1)=R(8);
  R(2)=R(11);
  R(10)=0x8c0c4640u;
  R(12)=0x1013u;
  R(2)+=0x4u;
  R(14)=0x8c0686d0u;
  R(1)+=0x8u;
  R(3)+=0x8u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  R(9)=0x4u;
  ST32(R(15)+8,R(3));
  ST32(R(15)+16,R(2));
  ST32(R(15)+12,R(1));
  fp_ld(c,12,R(0));
  R(0)=0x8c0203ecu;
  fp_ld(c,13,R(0));
  R(0)=0x8c0203f4u;
  fp_ld(c,14,R(0));
L8c02028e:;
  R(5)=LD32(R(15)+4);
  R(4)=R(13);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(3)=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(3));
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(3)=LD32(R(15)+8);
  { uint32_t tg=R(14); c->pr=0x8c0202aau; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0203f8u;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_ld(c,1,R(2));
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,2);
  fp_arith(c,0,1,3);
  { uint32_t tg=R(14); c->pr=0x8c0202c2u; fp_st(c,1,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0203fcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c020400u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(8));
  R(3)=LD32(R(15)+16);
  { uint32_t tg=R(14); c->pr=0x8c0202dcu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020404u;
  fp_ld(c,2,R(0));
  R(0)=0x8c020408u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+12);
  { uint32_t tg=R(14); c->pr=0x8c0202f8u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c020308u; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02040cu;
  fp_ld(c,4,R(0));
  R(5)=R(13);
  R(3)=0x8c01a7e0u;
  R(6)=R(11);
  fp_float(c,3);
  R(7)=LD32(R(15));
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,14);
  fp_mov(c,15,3);
  fp_arith(c,0,15,13);
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  { c->pr=0x8c020328u; R(4)=R(12); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(9)+=0xffffffffu; if(k) goto L8c020336; }
  R(3)=LD32(R(10));
  R(0)=0x54u;
  ST32(R(4)+R(0),R(3));
L8c020336:;
  R(5)=LD32(R(15)+4);
  R(4)=R(13);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(3)=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(3));
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(3)=LD32(R(15)+8);
  { uint32_t tg=R(14); c->pr=0x8c020352u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0203f8u;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_ld(c,1,R(2));
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,2);
  fp_arith(c,0,1,3);
  { uint32_t tg=R(14); c->pr=0x8c02036au; fp_st(c,1,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0203fcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c020400u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(8));
  R(3)=LD32(R(15)+16);
  { uint32_t tg=R(14); c->pr=0x8c020384u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020404u;
  fp_ld(c,2,R(0));
  R(0)=0x8c020408u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+12);
  { uint32_t tg=R(14); c->pr=0x8c0203a0u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c0203b0u; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02040cu;
  fp_ld(c,4,R(0));
  R(5)=R(13);
  R(3)=0x8c01a7e0u;
  R(6)=R(11);
  fp_float(c,3);
  R(7)=LD32(R(15));
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,14);
  fp_mov(c,15,3);
  fp_arith(c,0,15,13);
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  { c->pr=0x8c0203d0u; R(4)=R(12); f_8c01a7e0(c); }
  R(4)=R(0);
  {  goto L8c020420; }
L8c020420:;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(9)+=0xffffffffu; if(k) goto L8c02042c; }
  R(3)=LD32(R(10));
  R(0)=0x54u;
  ST32(R(4)+R(0),R(3));
L8c02042c:;
  R(4)=LD32(R(15)+4);
  R(5)=R(13);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(3)=R(5);
  R(5)+=0x4u;
  fp_st(c,3,R(3));
  fp_ld(c,2,R(4));
  fp_st(c,2,R(5));
  R(3)=LD32(R(15)+8);
  { uint32_t tg=R(14); c->pr=0x8c020448u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020620u;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_ld(c,1,R(2));
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,2);
  fp_arith(c,0,1,3);
  { uint32_t tg=R(14); c->pr=0x8c020460u; fp_st(c,1,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020624u;
  fp_ld(c,2,R(0));
  R(0)=0x8c020628u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(8));
  R(3)=LD32(R(15)+16);
  { uint32_t tg=R(14); c->pr=0x8c02047au; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02062cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c020630u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+12);
  { uint32_t tg=R(14); c->pr=0x8c020496u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c0204a6u; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020634u;
  fp_ld(c,4,R(0));
  R(5)=R(13);
  R(3)=0x8c01a7e0u;
  R(6)=R(11);
  fp_float(c,3);
  R(7)=LD32(R(15));
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,14);
  fp_mov(c,15,3);
  fp_arith(c,0,15,13);
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  { c->pr=0x8c0204c6u; R(4)=R(12); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(9)+=0xffffffffu; if(k) goto L8c0204d4; }
  R(3)=LD32(R(10));
  R(0)=0x54u;
  ST32(R(4)+R(0),R(3));
L8c0204d4:;
  R(4)=LD32(R(15)+4);
  R(5)=R(13);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(3)=R(5);
  R(5)+=0x4u;
  fp_st(c,3,R(3));
  fp_ld(c,2,R(4));
  fp_st(c,2,R(5));
  R(3)=LD32(R(15)+8);
  { uint32_t tg=R(14); c->pr=0x8c0204f0u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020620u;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_ld(c,1,R(2));
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,2);
  fp_arith(c,0,1,3);
  { uint32_t tg=R(14); c->pr=0x8c020508u; fp_st(c,1,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020624u;
  fp_ld(c,2,R(0));
  R(0)=0x8c020628u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(8));
  R(3)=LD32(R(15)+16);
  { uint32_t tg=R(14); c->pr=0x8c020522u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02062cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c020630u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+12);
  { uint32_t tg=R(14); c->pr=0x8c02053eu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,14);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c02054eu; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c020634u;
  fp_ld(c,4,R(0));
  R(5)=R(13);
  R(3)=0x8c01a7e0u;
  R(6)=R(11);
  fp_float(c,3);
  R(7)=LD32(R(15));
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,14);
  fp_mov(c,15,3);
  fp_arith(c,0,15,13);
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  { c->pr=0x8c02056eu; R(4)=R(12); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02057a;
  R(3)=LD32(R(10));
  R(0)=0x54u;
  ST32(R(4)+R(0),R(3));
L8c02057a:;
  R(9)-=1;c->t=R(9)==0;
  if(c->t) goto L8c020582;
  {  goto L8c02028e; }
L8c020582:;
  R(15)+=0x2cu;
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
void f_8c02059e(SH4Ctx *c) {
  R(6)=R(4);
  R(6)+=0x8u;
  fp_ld(c,6,R(6));
  R(5)=R(4);
  R(5)+=0x4u;
  fp_ld(c,5,R(4));
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(5));
  c->fr[2]=0x00000000u;
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,4,3);
  fp_cmp(c,0,4,2);
  if(c->t) goto L8c0205d4;
  fp_fsrra(c,4);
  fp_ld(c,3,R(4));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(5));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(5));
  fp_ld(c,3,R(6));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(6));
L8c0205d4:;
  {  return; }
}
void f_8c0205d8(SH4Ctx *c) {
  fp_ld(c,5,R(4));
  R(5)=R(4);
  R(5)+=0x4u;
  c->fr[2]=0x00000000u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(5));
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_mov(c,4,3);
  fp_cmp(c,0,4,2);
  if(c->t) goto L8c0205fe;
  fp_fsrra(c,4);
  fp_ld(c,3,R(4));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(5));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(5));
L8c0205fe:;
  {  return; }
}
void f_8c020602(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,5,R(4));
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(4));
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  { fp_mov(c,0,3); return; }
}
void f_8c020640(SH4Ctx *c) {
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
  R(0)=0xffffff7cu;
  R(15)+=R(0);
  R(2)=0x8c0c6d7cu;
  R(0)=0x10u;
  ST32(R(15)+20,R(6));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c020744u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; fp_ld(c,15,R(0)); if(k) goto L8c020672; }
  {  goto L8c020c8e; }
L8c020672:;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(6)=R(15);
  R(6)+=0x78u;
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(15);
  R(4)+=0x6cu;
  fp_st(c,2,R(6));
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=0x8c1310c8u;
  fp_st(c,2,R(4));
  R(4)=0x8c0c46b8u;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0206c6; }
  R(0)=0x78u;
  R(3)=0x1u;
  ST32(R(4),R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  R(3)=0x8c0c46b4u;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(5));
  { ST32(R(3),R(14)); goto L8c020c8e; }
L8c0206c6:;
  R(6)=0xcu;
  R(4)=R(14);
L8c0206ca:;
  R(7)=R(15);
  R(7)+=0x78u;
  R(13)=R(4);
  R(7)+=R(4);
  R(13)+=R(5);
  fp_ld(c,2,R(7));
  fp_ld(c,3,R(13));
  R(3)=R(15);
  R(3)+=0x6cu;
  fp_arith(c,1,2,3);
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_st(c,2,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(7));
  R(7)=R(15);
  R(7)+=0x78u;
  fp_st(c,3,R(13));
  R(13)=R(4);
  R(13)+=R(5);
  R(7)+=R(4);
  fp_ld(c,3,R(13));
  fp_ld(c,2,R(7));
  R(3)+=0x6cu;
  R(3)+=R(4);
  fp_arith(c,1,2,3);
  R(4)+=0x4u;
  fp_st(c,2,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(7));
  R(3)+=0x6cu;
  fp_st(c,3,R(13));
  R(13)=R(15);
  R(7)=R(4);
  R(13)+=0x78u;
  R(0)=R(4);
  R(7)+=R(5);
  R(13)+=R(4);
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(13));
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_arith(c,1,2,3);
  c->t=R(4)>=R(6);
  fp_st(c,2,R(3));
  fp_ld(c,3,R(13));
  { uint32_t k=!c->t; fp_st(c,3,R(7)); if(k) goto L8c0206ca; }
  R(4)=R(15);
  { c->pr=0x8c020730u; R(4)+=0x6cu; f_8c020602(c); }
  R(0)=0x8c020758u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c020760;
  R(2)=0x8c0c46b4u;
  { ST32(R(2),R(14)); goto L8c020c8e; }
L8c020760:;
  R(13)=0x8c2d4114u;
  { c->pr=0x8c020766u; R(4)=R(13); f_8c02059e(c); }
  R(4)=R(15);
  { c->pr=0x8c02076cu; R(4)+=0x6cu; f_8c02059e(c); }
  R(14)=R(13);
  R(9)=R(15);
  R(9)+=0x74u;
  R(11)=R(13);
  R(14)+=0x4u;
  fp_ld(c,3,R(9));
  fp_ld(c,2,R(14));
  R(3)=R(15);
  R(11)+=0x8u;
  R(10)=R(15);
  fp_arith(c,2,2,3);
  R(3)+=0x70u;
  R(10)+=0x30u;
  R(2)=R(15);
  R(8)=R(10);
  R(2)+=0x6cu;
  ST32(R(15)+8,R(3));
  R(12)=R(13);
  fp_ld(c,1,R(11));
  fp_ld(c,3,R(3));
  R(3)=R(8);
  R(3)+=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(8));
  ST32(R(15)+4,R(3));
  ST32(R(15)+12,R(2));
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(2));
  fp_ld(c,1,R(12));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(9));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  R(3)=R(8);
  R(3)+=0x8u;
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+8);
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(2));
  R(2)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(14));
  fp_ld(c,3,R(2));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  { c->pr=0x8c0207d0u; R(4)=R(8); f_8c02059e(c); }
  R(3)=LD32(R(15)+4);
  R(4)=R(15);
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(3));
  R(3)=LD32(R(15));
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(14));
  fp_ld(c,3,R(3));
  R(2)=LD32(R(15)+12);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(2));
  R(2)=LD32(R(15));
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(2));
  fp_ld(c,1,R(11));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(8));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(8));
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(12));
  fp_ld(c,3,R(3));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(9));
  { c->pr=0x8c020812u; R(4)+=0x6cu; f_8c02059e(c); }
  R(0)=0x8c020904u;
  R(12)=0x8c2d4108u;
  fp_ld(c,13,R(0));
  R(14)=R(15);
  R(6)=R(12);
  R(14)+=0x60u;
  R(3)=R(14);
  R(4)=R(6);
  R(4)+=0x4u;
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(15)+12);
  R(0)=0x8c02090cu;
  fp_ld(c,2,R(8));
  fp_ld(c,3,R(2));
  fp_arith(c,2,2,13);
  fp_arith(c,2,3,15);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(3)+=0x4u;
  ST32(R(15)+32,R(3));
  R(2)=LD32(R(15)+8);
  fp_ld(c,3,R(2));
  R(2)=LD32(R(15)+4);
  fp_arith(c,2,3,15);
  fp_ld(c,2,R(2));
  fp_arith(c,2,2,13);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(4));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(5)=R(6);
  R(5)+=0x8u;
  fp_ld(c,12,R(0));
  R(3)=R(14);
  R(3)+=0x8u;
  R(13)=R(15);
  R(0)=0x8c020910u;
  ST32(R(15)+44,R(3));
  R(2)=LD32(R(15));
  R(13)+=0x54u;
  fp_ld(c,3,R(9));
  fp_ld(c,2,R(2));
  fp_arith(c,2,3,15);
  fp_arith(c,2,2,13);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(5));
  fp_arith(c,0,3,2);
  fp_arith(c,0,3,12);
  fp_st(c,3,R(3));
  R(3)=R(13);
  fp_ld(c,14,R(0));
  ST32(R(15)+40,R(3));
  R(2)=LD32(R(15)+12);
  fp_ld(c,2,R(8));
  fp_ld(c,3,R(2));
  fp_arith(c,2,2,14);
  fp_arith(c,2,3,15);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(3)+=0x4u;
  ST32(R(15)+36,R(3));
  R(10)=R(15);
  R(2)=LD32(R(15)+8);
  R(7)=0x8c1310d4u;
  fp_ld(c,3,R(2));
  R(2)=LD32(R(15)+4);
  fp_arith(c,2,3,15);
  fp_ld(c,2,R(2));
  fp_arith(c,2,2,14);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(4));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(3)=R(13);
  R(3)+=0x8u;
  ST32(R(15)+24,R(3));
  R(2)=LD32(R(15));
  fp_ld(c,3,R(9));
  fp_ld(c,2,R(2));
  fp_arith(c,2,3,15);
  R(2)=0x8c0c46b4u;
  fp_arith(c,2,2,14);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(5));
  fp_arith(c,0,3,2);
  fp_arith(c,0,3,12);
  fp_st(c,3,R(3));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)+=0x48u; if(k) goto L8c020920; }
  R(5)=0x8c1310e0u;
  R(4)=R(10);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(7);
  fp_st(c,2,R(4));
  R(4)=R(15);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0x3cu;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  { fp_st(c,2,R(4)); goto L8c0209a6; }
L8c020920:;
  fp_ld(c,3,R(8));
  R(4)=R(6);
  fp_ld(c,2,R(6));
  R(4)+=0x4u;
  fp_arith(c,2,3,14);
  R(3)=LD32(R(15)+12);
  R(5)=R(6);
  R(0)=0x4u;
  R(5)+=0x8u;
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,15);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(10));
  R(3)=LD32(R(15)+4);
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(3));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,3,14);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,15);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(10));
  R(3)=LD32(R(15));
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,14);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(9));
  fp_arith(c,2,3,15);
  fp_arith(c,1,2,3);
  fp_arith(c,0,2,12);
  R(0)=0x8u;
  fp_st(c,2,R(0)+R(10));
  R(0)=0x3cu;
  fp_ld(c,3,R(8));
  fp_ld(c,2,R(6));
  fp_arith(c,2,3,13);
  R(3)=LD32(R(15)+12);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,15);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x40u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(3));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,3,13);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,15);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15));
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,13);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(9));
  fp_arith(c,2,3,15);
  fp_arith(c,1,2,3);
  fp_arith(c,0,2,12);
  R(0)=0x44u;
  fp_st(c,2,R(0)+R(15));
L8c0209a6:;
  R(5)=R(14);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=R(7);
  R(0)=0x10u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(6)=R(15);
  R(3)=0x8c01a7e0u;
  R(11)=R(14);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(13);
  R(14)=R(13);
  c->fr[5]=0x3F800000u;
  fp_st(c,2,R(4));
  R(6)+=0x6cu;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=0x8c1310e0u;
  c->fr[6]=0x3F800000u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(15);
  fp_st(c,2,R(4));
  fp_ld(c,4,R(0)+R(15));
  R(4)=0x1014u;
  R(7)=LD32(R(15)+20);
  { uint32_t tg=R(3); c->pr=0x8c0209eau; R(5)+=0x78u; sh4_call(c,tg); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c020a4a;
  R(5)=R(11);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=R(6);
  R(4)+=0x10u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(14);
  fp_st(c,2,R(4));
  R(4)=R(6);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0x1cu;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(6);
  R(5)+=0x28u;
  fp_st(c,2,R(4));
  R(4)=R(10);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(15);
  R(4)+=0x3cu;
  fp_st(c,2,R(5));
  R(5)=R(6);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(5)+=0x34u;
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  fp_st(c,2,R(5));
L8c020a4a:;
  R(2)=LD32(R(15)+12);
  R(5)=R(12);
  fp_ld(c,2,R(8));
  R(6)=R(5);
  fp_ld(c,3,R(2));
  R(6)+=0x4u;
  fp_mov(c,0,14);
  R(4)=R(5);
  fp_arith(c,2,3,15);
  R(3)=LD32(R(15)+28);
  R(4)+=0x8u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(5));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(2));
  fp_arith(c,2,3,15);
  R(3)=LD32(R(15)+32);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(9));
  R(2)=LD32(R(15));
  fp_arith(c,2,3,15);
  R(3)=LD32(R(15)+44);
  fp_ld(c,2,R(2));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(4));
  fp_arith(c,0,3,2);
  fp_mov(c,0,13);
  fp_arith(c,0,3,12);
  fp_st(c,3,R(3));
  R(2)=LD32(R(15)+12);
  fp_ld(c,2,R(8));
  fp_ld(c,3,R(2));
  R(3)=LD32(R(15)+40);
  fp_arith(c,2,3,15);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(5));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(2));
  fp_arith(c,2,3,15);
  R(3)=LD32(R(15)+36);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(9));
  R(2)=LD32(R(15));
  fp_arith(c,2,3,15);
  R(3)=LD32(R(15)+24);
  fp_ld(c,2,R(2));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(4));
  fp_arith(c,0,3,2);
  fp_arith(c,0,3,12);
  R(2)=0x8c0c46b4u;
  R(7)=0x8c1310ecu;
  fp_st(c,3,R(3));
  {  goto L8c020b00; }
L8c020b00:;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c020b60;
  R(5)=0x8c1310f8u;
  R(4)=R(10);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(7);
  fp_st(c,2,R(4));
  R(4)=R(15);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0x3cu;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  { fp_st(c,2,R(4)); goto L8c020be8; }
L8c020b60:;
  R(3)=LD32(R(15)+12);
  R(5)=R(12);
  fp_ld(c,3,R(8));
  R(6)=R(5);
  fp_ld(c,2,R(3));
  R(6)+=0x4u;
  fp_arith(c,2,3,13);
  R(0)=0x4u;
  fp_arith(c,2,2,15);
  R(4)=R(5);
  R(4)+=0x8u;
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(5));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(10));
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(3));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,3,13);
  fp_ld(c,2,R(3));
  fp_arith(c,2,2,15);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(10));
  R(3)=LD32(R(15));
  fp_ld(c,2,R(9));
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,15);
  fp_arith(c,2,3,13);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(4));
  fp_arith(c,0,3,2);
  R(0)=0x8u;
  fp_arith(c,0,3,12);
  fp_st(c,3,R(0)+R(10));
  R(0)=0x3cu;
  R(3)=LD32(R(15)+12);
  fp_ld(c,3,R(8));
  fp_ld(c,2,R(3));
  fp_arith(c,2,3,14);
  fp_arith(c,2,2,15);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(5));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x40u;
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(3));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,3,14);
  fp_ld(c,2,R(3));
  fp_arith(c,2,2,15);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(15));
  fp_ld(c,2,R(9));
  fp_ld(c,3,R(3));
  fp_arith(c,2,2,15);
  fp_arith(c,2,3,14);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(4));
  fp_arith(c,0,3,2);
  R(0)=0x44u;
  fp_arith(c,0,3,12);
  fp_st(c,3,R(0)+R(15));
L8c020be8:;
  R(4)=R(11);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(5)=R(7);
  R(2)=0x8c0c46b4u;
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(0)=0x10u;
  R(6)=R(15);
  R(3)=0x1u;
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(14);
  R(6)+=0x6cu;
  c->fr[6]=0x3F800000u;
  fp_st(c,2,R(5));
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(5)=0x8c1310f8u;
  c->fr[5]=0x3F800000u;
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=0x1014u;
  fp_st(c,2,R(5));
  R(5)=R(15);
  ST32(R(2),R(3));
  fp_ld(c,4,R(0)+R(15));
  R(7)=LD32(R(15)+20);
  R(3)=0x8c01a7e0u;
  { c->pr=0x8c020c2eu; R(5)+=0x78u; f_8c01a7e0(c); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c020c8e;
  R(5)=R(11);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=R(6);
  R(4)+=0x10u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(14);
  fp_st(c,2,R(4));
  R(4)=R(6);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0x1cu;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(10);
  fp_st(c,2,R(4));
  R(4)=R(6);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0x28u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(15);
  R(5)+=0x3cu;
  fp_st(c,2,R(4));
  R(4)=R(6);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)+=0x34u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
L8c020c8e:;
  R(1)=0x84u;
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
void f_8c020ce0(SH4Ctx *c) {
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
  R(15)+=0xffffff88u;
  R(0)=0x18u;
  R(2)=0x8c0c6d7cu;
  ST32(R(15),R(5));
  ST32(R(15)+32,R(6));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8c020d84u;
  fp_ld(c,14,R(0));
  R(0)=0x8c020d88u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  fp_ld(c,13,R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; fp_mov(c,15,13); if(k) goto L8c020d18; }
  {  goto L8c02128a; }
L8c020d18:;
  R(3)=0x8c0c4670u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(3));
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c020d26;
  {  goto L8c02128a; }
L8c020d26:;
  R(3)=0x8c0c4678u;
  R(0)=0x8c020d98u;
  fp_ld(c,1,R(0));
  fp_ld(c,0,R(3));
  R(1)=0x8c2d4110u;
  fp_arith(c,0,0,1);
  fp_ld(c,3,R(1));
  fp_cmp(c,1,3,0);
  if(c->t) goto L8c020d3c;
  {  goto L8c02128a; }
L8c020d3c:;
  R(0)=0xa8u;
  R(2)=LD32(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; c->fr[3]=0x00000000u; if(k) goto L8c020d4a; }
  R(0)=0x8c020da0u;
  fp_ld(c,14,R(0));
L8c020d4a:;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c020d5e;
  fp_ld(c,2,R(7));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c020d5e;
  fp_ld(c,3,R(0)+R(4));
  { fp_st(c,3,R(7)); goto L8c020dc0; }
L8c020d5e:;
  fp_ld(c,3,R(0)+R(4));
  { fp_st(c,3,R(7)); goto L8c02128a; }
L8c020dc0:;
  R(5)=LD32(R(15));
  R(4)=R(15);
  R(4)+=0x60u;
  R(2)=R(15);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(2)+=0x64u;
  R(14)=R(15);
  R(14)+=0x24u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(3)=R(4);
  R(4)+=0x4u;
  R(10)=R(14);
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,2,R(5));
  R(3)+=0x68u;
  fp_st(c,2,R(4));
  R(4)=0x8c2d4114u;
  ST32(R(15)+12,R(3));
  R(12)=R(4);
  R(12)+=0x4u;
  fp_ld(c,2,R(12));
  R(11)=R(4);
  fp_ld(c,3,R(3));
  R(11)+=0x8u;
  ST32(R(15)+4,R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(2));
  fp_ld(c,1,R(11));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  R(3)=R(15);
  R(3)+=0x60u;
  R(13)=R(4);
  R(8)=R(10);
  R(8)+=0x4u;
  R(9)=R(10);
  R(9)+=0x8u;
  fp_st(c,2,R(10));
  ST32(R(15)+8,R(3));
  fp_ld(c,3,R(3));
  fp_ld(c,2,R(11));
  R(2)=LD32(R(15)+12);
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(13));
  fp_ld(c,3,R(2));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(8));
  R(3)=LD32(R(15)+4);
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(3));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(12));
  fp_ld(c,3,R(3));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(9));
  { c->pr=0x8c020e3eu; R(4)=R(10); f_8c02059e(c); }
  fp_ld(c,2,R(11));
  R(4)=R(15);
  fp_ld(c,3,R(8));
  fp_ld(c,1,R(12));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(9));
  R(2)=LD32(R(15)+8);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(2));
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(9));
  fp_ld(c,1,R(11));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(10));
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(10));
  fp_ld(c,1,R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(8));
  R(3)=LD32(R(15)+12);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  { c->pr=0x8c020e7au; R(4)+=0x60u; f_8c02059e(c); }
  R(0)=0x8c021068u;
  R(5)=0x8c2d4108u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(5));
  R(9)=R(15);
  fp_mov(c,6,14);
  fp_arith(c,0,6,15);
  fp_arith(c,0,2,3);
  fp_mov(c,5,14);
  fp_arith(c,1,5,15);
  R(10)=R(15);
  R(10)+=0x48u;
  R(12)=0xcu;
  fp_st(c,2,R(0)+R(5));
  R(0)=0x8c02106cu;
  fp_ld(c,4,R(0));
  R(4)=0x0u;
  R(9)+=0x3cu;
L8c020ea0:;
  R(7)=R(4);
  R(7)+=R(14);
  fp_ld(c,3,R(7));
  R(13)=R(15);
  R(13)+=0x60u;
  fp_mov(c,0,15);
  fp_arith(c,2,3,5);
  R(13)+=R(4);
  fp_ld(c,2,R(13));
  R(6)=R(4);
  R(6)+=R(5);
  R(3)=R(15);
  R(3)+=0x54u;
  R(0)=R(4);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  R(3)+=R(4);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(13));
  fp_arith(c,2,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  fp_mov(c,0,4);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(10));
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(13));
  fp_arith(c,2,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  R(3)=R(15);
  R(3)+=0x30u;
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(0)+R(9));
  R(0)=R(4);
  fp_ld(c,3,R(7));
  R(7)=R(4);
  fp_ld(c,2,R(13));
  R(7)+=R(14);
  fp_arith(c,2,3,5);
  R(13)=R(4);
  R(13)+=R(5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  R(6)=R(15);
  R(6)+=0x60u;
  R(6)+=R(4);
  fp_mov(c,0,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(7));
  R(3)+=0x54u;
  fp_ld(c,2,R(6));
  R(3)+=R(4);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(13));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(7));
  R(3)=R(15);
  fp_ld(c,2,R(6));
  R(3)+=0x30u;
  fp_arith(c,2,3,6);
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(13));
  fp_mov(c,0,4);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(10));
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(6));
  fp_arith(c,2,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(13));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(9));
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(6));
  fp_arith(c,2,3,5);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(13));
  R(13)=R(15);
  R(13)+=0x60u;
  R(13)+=R(4);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(3)+=0x54u;
  R(3)+=R(4);
  R(7)=R(4);
  R(7)+=R(14);
  fp_ld(c,3,R(7));
  R(6)=R(4);
  fp_ld(c,2,R(13));
  R(6)+=R(5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,15);
  R(0)=R(4);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(7));
  R(3)+=0x30u;
  fp_ld(c,2,R(13));
  R(3)+=R(4);
  fp_arith(c,2,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  fp_mov(c,0,4);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(10));
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(13));
  fp_arith(c,2,3,6);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(9));
  fp_ld(c,3,R(7));
  fp_arith(c,2,3,5);
  fp_ld(c,2,R(13));
  R(4)+=0x4u;
  c->t=R(4)>=R(12);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(6));
  fp_arith(c,0,3,2);
  fp_st(c,3,R(3));
  if(c->t) goto L8c020fb6;
  {  goto L8c020ea0; }
L8c020fb6:;
  R(0)=0x18u;
  R(8)=R(15);
  fp_ld(c,4,R(0)+R(15));
  R(6)=R(15);
  R(3)=0x8c01a7e0u;
  R(8)+=0x6cu;
  c->fr[15]=0x3F800000u;
  R(5)=R(8);
  R(7)=LD32(R(15)+32);
  R(6)+=0x60u;
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { c->pr=0x8c020fd2u; R(4)=0x14u; f_8c01a7e0(c); }
  R(6)=R(0);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c021040;
  R(2)=0x8c0c4670u;
  R(0)=0x58u;
  R(5)=R(15);
  R(5)+=0x54u;
  R(4)=R(6);
  R(4)+=0x10u;
  R(3)=0x8u;
  ST32(R(6)+4,R(3));
  fp_ld(c,3,R(2));
  fp_st(c,3,R(0)+R(6));
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(6);
  R(5)+=0x1cu;
  fp_st(c,2,R(4));
  R(4)=R(10);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(6);
  R(4)+=0x28u;
  fp_st(c,2,R(5));
  R(5)=R(9);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=R(6);
  R(5)+=0x34u;
  fp_st(c,2,R(4));
  R(4)=R(15);
  R(4)+=0x30u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  fp_st(c,2,R(5));
L8c021040:;
  R(11)=0x8c0c4644u;
  R(3)=LD32(R(11));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c02104c;
  {  goto L8c02128a; }
L8c02104c:;
  {  goto L8c021080; }
L8c021080:;
  R(0)=0xa8u;
  R(3)=LD32(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02108e;
  R(4)=0x8c131904u;
  {  goto L8c021090; }
L8c02108e:;
  R(4)=0x8c131910u;
L8c021090:;
  R(0)=0x8c02116cu;
  fp_ld(c,3,R(10));
  fp_ld(c,4,R(0));
  R(0)=0x54u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(9));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,0,2,3);
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x58u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(0)+R(9));
  R(0)=0x34u;
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,0,1,3);
  fp_arith(c,2,1,4);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(10));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(15));
  fp_arith(c,0,3,0);
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(9));
  R(0)=0x38u;
  R(5)=R(4);
  R(5)+=0x4u;
  R(6)=R(4);
  fp_mov(c,6,1);
  fp_arith(c,0,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8c021170u;
  fp_ld(c,2,R(0));
  R(0)=0x14u;
  fp_ld(c,7,R(0)+R(15));
  R(6)+=0x8u;
  fp_arith(c,0,3,0);
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_ld(c,3,R(4));
  fp_arith(c,1,7,3);
  fp_ld(c,3,R(5));
  fp_arith(c,1,6,3);
  fp_ld(c,3,R(6));
  fp_mov(c,5,2);
  fp_arith(c,1,5,3);
  fp_mov(c,0,7);
  fp_mov(c,4,2);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  R(0)=0x14u;
  fp_mov(c,5,3);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,2,R(4));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8c021174u;
  fp_st(c,3,R(5));
  fp_st(c,4,R(6));
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,5);
  if(!c->t) goto L8c02112c;
  {  goto L8c02128a; }
L8c02112c:;
  R(0)=0x8c021178u;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,5,2);
  if(!c->t) goto L8c021138;
  {  goto L8c02128a; }
L8c021138:;
  R(0)=0x8u;
  R(3)=0x8c0c4670u;
  fp_st(c,4,R(0)+R(8));
  R(0)=0x8c02117cu;
  fp_ld(c,3,R(3));
  fp_ld(c,4,R(0));
  fp_cmp(c,1,3,4);
  { uint32_t k=!c->t; R(9)=R(8); if(k) goto L8c0211a0; }
  R(0)=0x1cu;
  { fp_st(c,4,R(0)+R(15)); goto L8c0211a6; }
L8c0211a0:;
  fp_arith(c,2,3,13);
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
L8c0211a6:;
  R(0)=0x8c0212c4u;
  R(14)=0x8c0686d0u;
  fp_ld(c,12,R(0));
  R(0)=0x8c0212c8u;
  fp_ld(c,13,R(0));
  R(0)=0x8c0212ccu;
  fp_ld(c,14,R(0));
  R(10)=R(8);
  R(12)=0x3001u;
  R(0)=0x8c0212d4u;
  R(10)+=0x4u;
  R(13)=0x5u;
  { fp_ld(c,15,R(0)); goto L8c021286; }
L8c0211c2:;
  { uint32_t tg=R(14); c->pr=0x8c0211c6u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  { uint32_t tg=R(14); c->pr=0x8c0211dau; fp_st(c,2,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(10));
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(2));
  fp_unary(c,0,3);
  { uint32_t tg=R(14); c->pr=0x8c0211fau; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0212d8u;
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_float(c,2);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,3,2);
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  fp_arith(c,0,3,2);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(2));
  fp_unary(c,0,3);
  { uint32_t tg=R(14); c->pr=0x8c021220u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0212d8u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(2));
  R(3)=LD32(R(15)+12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(2));
  { uint32_t tg=R(14); c->pr=0x8c021244u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0212dcu;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  R(5)=R(8);
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(6)=R(15);
  R(6)+=0x60u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(0));
  R(0)=0x8c0212e0u;
  fp_arith(c,0,1,3);
  fp_st(c,1,R(2));
  fp_ld(c,6,R(0));
  R(0)=0x18u;
  fp_ld(c,4,R(0)+R(15));
  R(7)=LD32(R(11));
  fp_mov(c,5,6);
  { uint32_t tg=R(3); c->pr=0x8c021276u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)+=0xffffffffu; if(k) goto L8c021286; }
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(4));
L8c021286:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0211c2;
L8c02128a:;
  R(15)+=0x78u;
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
void f_8c021300(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0214e4u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0686d0u;
  { c->pr=0x8c02131cu; fp_ld(c,15,R(0)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0214e8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0214ecu;
  fp_ld(c,1,R(0));
  R(0)=0x8c0214f0u;
  fp_float(c,3);
  R(11)=0x8c130be0u;
  R(12)=0x8c130bd4u;
  fp_ld(c,12,R(0));
  R(0)=0x8c0214f4u;
  fp_ld(c,13,R(0));
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(11));
  fp_arith(c,3,3,15);
  fp_mov(c,14,3);
  fp_arith(c,0,14,1);
  fp_ld(c,3,R(12));
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  { uint32_t tg=R(13); c->pr=0x8c021348u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x1cu;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,12);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  { uint32_t tg=R(13); c->pr=0x8c021368u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x20u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  c->fr[13]=0x3F800000u;
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,12);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  { uint32_t tg=R(13); c->pr=0x8c02138au; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021500u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x24u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8c021504u;
  fp_ld(c,12,R(0));
  R(0)=0x8c021508u;
  { uint32_t tg=R(13); c->pr=0x8c0213aau; fp_ld(c,14,R(0)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x28u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  { uint32_t tg=R(13); c->pr=0x8c0213bau; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x2cu;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  { uint32_t tg=R(13); c->pr=0x8c0213cau; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02150cu;
  fp_ld(c,2,R(0));
  R(0)=0x30u;
  R(3)=0x90003003u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c021514u;
  ST32(R(14),R(3));
  { uint32_t tg=R(13); c->pr=0x8c0213e6u; fp_ld(c,14,R(0)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021518u;
  fp_ld(c,2,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(13); c->pr=0x8c0213fau; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x18u;
  R(3)=0x8c0c467cu;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c02151cu;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(14));
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
void f_8c02142c(SH4Ctx *c) {
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
  R(15)+=0xffffffa0u;
  ST32(R(15),R(4));
  ST32(R(15)+12,R(5));
  R(4)=0x8c130bd4u;
  ST32(R(15)+56,R(6));
  R(5)=LD32(R(15));
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(5)=LD32(R(15)+12);
  R(4)=0x8c130be0u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  R(5)=0x8c130becu;
  fp_st(c,2,R(4));
  R(4)=LD32(R(15)+12);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=0x8c130be0u;
  { c->pr=0x8c02148cu; fp_st(c,2,R(5)); f_8c02059e(c); }
  R(4)=0x8c130becu;
  { c->pr=0x8c021492u;  f_8c0205d8(c); }
  R(13)=R(15);
  R(13)+=0x54u;
  R(8)=R(13);
  R(2)=R(8);
  R(12)=R(15);
  R(3)=R(13);
  R(12)+=0x48u;
  c->fr[13]=0x3F800000u;
  R(0)=0x8c02152cu;
  fp_arith(c,0,13,13);
  R(3)+=0x4u;
  R(1)=R(12);
  R(2)+=0x8u;
  ST32(R(15)+28,R(3));
  ST32(R(15)+24,R(2));
  R(2)=R(1);
  R(3)=R(1);
  R(14)=0x8c0686d0u;
  R(11)=0x8c0c4678u;
  R(2)+=0x8u;
  R(3)+=0x4u;
  R(9)=0x90003003u;
  ST32(R(15)+20,R(1));
  R(10)=0x1eu;
  ST32(R(15)+60,R(3));
  ST32(R(15)+32,R(2));
  fp_ld(c,12,R(0));
  R(0)=0x8c021508u;
  fp_ld(c,14,R(0));
  R(0)=0x8c0214e4u;
  { fp_ld(c,15,R(0)); goto L8c0216f0; }
L8c021540:;
  { uint32_t tg=R(14); c->pr=0x8c021544u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217c0u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0217c4u;
  fp_ld(c,1,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  fp_mov(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15));
  fp_ld(c,1,R(3));
  fp_ld(c,2,R(2));
  fp_fmac(c,2,1);
  { uint32_t tg=R(14); c->pr=0x8c02156au; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217c8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0217ccu;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(8));
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(15)+16);
  fp_ld(c,3,R(0)+R(1));
  fp_ld(c,2,R(0)+R(2));
  R(0)=0x14u;
  fp_ld(c,0,R(0)+R(15));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c02159au; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217c8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0217ccu;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_arith(c,0,1,3);
  fp_st(c,1,R(2));
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(15)+16);
  fp_ld(c,1,R(0)+R(1));
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x14u;
  fp_ld(c,0,R(0)+R(15));
  fp_fmac(c,1,3);
  { uint32_t tg=R(14); c->pr=0x8c0215ccu; R(15)-=fp_sz(c);fp_st(c,1,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217c4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(2));
L8c0215e2:;
  { uint32_t tg=R(14); c->pr=0x8c0215e6u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8u;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c0215fau; fp_st(c,3,R(0)+R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  c->fr[2]=0x3F800000u;
  fp_unary(c,0,2);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,3);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8c0217d0u;
  fp_mov(c,1,0);
  fp_fmac(c,3,1);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c0215e2;
  fp_fsrra(c,4);
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(15)+20);
  { uint32_t tg=R(14); c->pr=0x8c02163cu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217d4u;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+60);
  { uint32_t tg=R(14); c->pr=0x8c021654u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217d4u;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+32);
  { uint32_t tg=R(14); c->pr=0x8c02166cu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217d8u;
  fp_ld(c,2,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c021680u; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217dcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0217e0u;
  fp_ld(c,1,R(0));
  R(0)=0x40u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c021698u; fp_st(c,3,R(0)+R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217e4u;
  fp_ld(c,2,R(0));
  R(0)=0x40u;
  R(3)=0x8c01a7e0u;
  R(5)=R(13);
  fp_float(c,3);
  fp_ld(c,5,R(0)+R(15));
  R(7)=LD32(R(15)+56);
  R(6)=R(12);
  fp_mov(c,4,12);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_mov(c,6,3);
  fp_arith(c,0,6,2);
  { uint32_t tg=R(3); c->pr=0x8c0216bau; R(4)=R(9); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(10)+=0xffffffffu; if(k) goto L8c0216f0; }
  R(0)=0x8c0217ecu;
  R(2)=0x8c021300u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  R(3)=0x14u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x3cu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4cu;
  fp_ld(c,3,R(11));
  fp_st(c,3,R(0)+R(4));
  R(0)=0x5cu;
  ST32(R(4)+4,R(3));
  ST32(R(4)+R(0),R(2));
L8c0216f0:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0216f8;
  {  goto L8c021540; }
L8c0216f8:;
  R(2)=0x8c130becu;
  R(10)=0x8c03aedau;
  R(3)=R(2);
  R(3)+=0x4u;
  ST32(R(15)+20,R(2));
  ST32(R(15)+32,R(3));
  { R(9)=0x1eu; goto L8c021882; }
L8c021708:;
  { uint32_t tg=R(14); c->pr=0x8c02170cu;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0217fcu;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,13,3);
  { uint32_t tg=R(14); c->pr=0x8c02171eu; fp_arith(c,0,13,14); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021800u;
  fp_ld(c,2,R(0));
  R(0)=0x8c021804u;
  fp_ld(c,1,R(0));
  R(0)=0x24u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  R(3)=LD32(R(15)+20);
  fp_ld(c,2,R(3));
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x30u;
  R(3)=LD32(R(15)+32);
  fp_ld(c,3,R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c021808u;
  fp_ld(c,1,R(0));
  R(0)=0x24u;
  fp_ld(c,4,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c021754u; fp_arith(c,0,4,1); sh4_call(c,tg); }
  R(0)=0x2cu;
  fp_st(c,0,R(0)+R(15));
  R(0)=0x24u;
  { uint32_t tg=R(10); c->pr=0x8c02175eu; fp_ld(c,4,R(0)+R(15)); sh4_call(c,tg); }
  R(0)=0x2cu;
  fp_mov(c,4,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,2,3,0);
  R(3)=LD32(R(15));
  fp_arith(c,2,2,4);
  fp_mov(c,0,13);
  fp_arith(c,1,3,2);
  fp_ld(c,2,R(3));
  fp_fmac(c,2,3);
  fp_st(c,2,R(8));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,0);
  fp_mov(c,0,4);
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+28);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(2));
  fp_mov(c,0,13);
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15)+24);
  fp_cmp(c,1,14,13);
  fp_ld(c,3,R(11));
  fp_st(c,3,R(3));
  if(!c->t) goto L8c021820;
  R(0)=0x8c02180cu;
  fp_ld(c,3,R(0));
  R(0)=0x34u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c021810u;
  fp_ld(c,3,R(0));
  R(0)=0x44u;
  { fp_st(c,3,R(0)+R(15)); goto L8c021852; }
L8c021820:;
  R(0)=0x8c0219e0u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,13);
  if(c->t) goto L8c02183a;
  R(0)=0x8c0219e4u;
  fp_ld(c,2,R(0));
  R(0)=0x44u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c0219e8u;
  fp_ld(c,2,R(0));
  R(0)=0x34u;
  { fp_st(c,2,R(0)+R(15)); goto L8c021852; }
L8c02183a:;
  R(0)=0x8c0219ecu;
  fp_arith(c,1,13,14);
  fp_ld(c,2,R(0));
  R(0)=0x34u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c0219f0u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0219f4u;
  fp_ld(c,0,R(0));
  R(0)=0x44u;
  fp_fmac(c,2,13);
  fp_st(c,2,R(0)+R(15));
L8c021852:;
  R(0)=0x34u;
  R(3)=0x8c0c463cu;
  fp_ld(c,6,R(0)+R(15));
  R(6)=R(12);
  R(4)=0x10003000u;
  R(2)=0x8c01a7e0u;
  R(7)=LD32(R(3));
  fp_mov(c,5,6);
  fp_mov(c,4,12);
  { c->pr=0x8c021868u; R(5)=R(13); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(9)+=0xffffffffu; if(k) goto L8c021882; }
  R(0)=0x44u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x58u;
  R(3)=0x0u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4cu;
  fp_ld(c,3,R(11));
  fp_st(c,3,R(0)+R(4));
  ST32(R(4)+4,R(3));
L8c021882:;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c02188a;
  {  goto L8c021708; }
L8c02188a:;
  R(15)+=0x60u;
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
void f_8c0218a6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  ST32(R(15),R(4));
  R(1)=0x8c0c46c0u;
  R(4)=0x8c0c46bcu;
  ST32(R(15)+4,R(6));
  R(2)=LD32(R(4));
  R(3)=LD32(R(1));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c0218d0;
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  { ST32(R(4),R(2)); goto L8c0219c6; }
L8c0218d0:;
  R(13)=0x8c0686d0u;
  R(3)=0x0u;
  R(0)=0x8c021a10u;
  ST32(R(4),R(3));
  { c->pr=0x8c0218dcu; fp_ld(c,12,R(0)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c021a14u;
  fp_ld(c,2,R(0));
  R(0)=0x8c021a18u;
  fp_ld(c,1,R(0));
  R(12)=R(15);
  fp_float(c,3);
  R(12)+=0x14u;
  R(4)=R(12);
  R(2)=0x8c0c46c0u;
  R(0)=0x8c021a1cu;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,1);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST32(R(2),R(3));
  R(5)=LD32(R(15));
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(3)=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(3));
  fp_ld(c,0,R(5));
  R(5)=R(12);
  R(5)+=0x8u;
  fp_st(c,0,R(4));
  fp_ld(c,3,R(5));
  fp_ld(c,13,R(0));
  fp_arith(c,0,3,13);
  R(4)=0x8c130bf8u;
  R(0)=0x8c021a24u;
  fp_st(c,3,R(5));
  R(14)=R(15);
  R(7)=R(4);
  fp_ld(c,3,R(7));
  fp_ld(c,4,R(0));
  R(6)=R(7);
  fp_ld(c,0,R(12));
  R(6)+=0x4u;
  fp_arith(c,2,3,4);
  R(0)=0x4u;
  R(4)+=0x8u;
  R(14)+=0x8u;
  fp_arith(c,1,0,3);
  fp_st(c,0,R(12));
  fp_ld(c,3,R(6));
  fp_ld(c,0,R(0)+R(12));
  fp_arith(c,2,3,4);
  fp_arith(c,1,0,3);
  fp_st(c,0,R(0)+R(12));
  R(0)=0x8c0219e8u;
  ST32(R(15),R(4));
  fp_ld(c,3,R(4));
  fp_ld(c,0,R(5));
  fp_arith(c,2,3,4);
  fp_arith(c,1,0,3);
  fp_st(c,0,R(5));
  fp_ld(c,15,R(0));
  fp_ld(c,3,R(7));
  fp_arith(c,2,3,15);
  fp_st(c,3,R(14));
  fp_ld(c,0,R(6));
  R(0)=0x4u;
  fp_arith(c,2,0,15);
  fp_st(c,0,R(0)+R(14));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(3));
  fp_arith(c,2,3,15);
  { uint32_t tg=R(13); c->pr=0x8c021970u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021a28u;
  fp_ld(c,2,R(0));
  R(0)=0x8c021a2cu;
  fp_ld(c,1,R(0));
  R(6)=R(14);
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+4);
  R(5)=R(12);
  fp_mov(c,4,13);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_mov(c,14,3);
  fp_arith(c,0,14,1);
  fp_mov(c,6,14);
  fp_mov(c,5,14);
  { c->pr=0x8c021996u; R(4)=0x3u; f_8c01a7e0(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0219c6;
  { uint32_t tg=R(13); c->pr=0x8c0219a0u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0219e0u;
  fp_ld(c,2,R(0));
  R(0)=0x8c021a30u;
  fp_ld(c,1,R(0));
  R(0)=0x58u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(13); c->pr=0x8c0219b8u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x48u;
  fp_float(c,3);
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,15);
  fp_st(c,3,R(0)+R(14));
L8c0219c6:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c021a40(SH4Ctx *c) {
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
  R(15)+=0xffffff98u;
  ST32(R(15),R(6));
  R(6)=R(15);
  R(7)=0x8c130c04u;
  R(5)=R(15);
  R(14)=0x8c130bf8u;
  R(13)=R(4);
  R(5)+=0x44u;
  R(6)+=0x38u;
  R(12)=0xcu;
  R(4)=0x0u;
L8c021a6e:;
  R(11)=R(4);
  R(11)+=R(14);
  R(0)=R(4);
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(0)+R(7));
  R(4)+=0x4u;
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(5));
  fp_ld(c,2,R(11));
  R(11)=R(4);
  fp_ld(c,3,R(0)+R(13));
  R(11)+=R(14);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(6));
  R(0)=R(4);
  fp_ld(c,2,R(11));
  R(4)+=0x4u;
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(5));
  fp_ld(c,2,R(11));
  R(11)=R(4);
  fp_ld(c,3,R(0)+R(13));
  R(11)+=R(14);
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(6));
  R(0)=R(4);
  fp_ld(c,2,R(11));
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(5));
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,2,R(11));
  R(4)+=0x4u;
  c->t=R(4)>=R(12);
  fp_arith(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(6)); if(k) goto L8c021a6e; }
  R(11)=R(15);
  R(11)+=0x5cu;
  R(2)=R(11);
  R(12)=R(15);
  R(3)=R(5);
  ST32(R(15)+40,R(2));
  R(2)+=0x4u;
  R(1)=R(6);
  R(12)+=0x50u;
  ST32(R(15)+48,R(3));
  R(3)=R(12);
  ST32(R(15)+44,R(1));
  R(4)=R(14);
  R(1)=R(3);
  R(8)=R(11);
  R(1)+=0x4u;
  R(6)+=0x4u;
  ST32(R(15)+36,R(14));
  ST32(R(15)+28,R(2));
  R(2)=R(3);
  R(7)+=0x8u;
  R(5)+=0x4u;
  R(2)+=0x8u;
  ST32(R(15)+4,R(5));
  R(4)+=0x4u;
  ST32(R(15)+24,R(6));
  R(8)+=0x8u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+12,R(3));
  ST32(R(15)+16,R(1));
  ST32(R(15)+20,R(2));
  ST32(R(15)+32,R(7));
  R(0)=0x8c021c70u;
  R(14)=0x8c0686d0u;
  fp_ld(c,15,R(0));
  R(10)=0x2u;
  R(9)=0x92003003u;
  c->fr[14]=0x00000000u;
L8c021b06:;
  { uint32_t tg=R(14); c->pr=0x8c021b0au;  sh4_call(c,tg); }
  c->fpul=R(0);
  c->fr[2]=0x3F800000u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,13,3);
  { uint32_t tg=R(14); c->pr=0x8c021b1au; fp_arith(c,0,13,14); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8u;
  c->fr[2]=0x3F800000u;
  R(1)=LD32(R(15)+44);
  fp_float(c,3);
  R(2)=LD32(R(15)+48);
  fp_mov(c,0,13);
  fp_ld(c,1,R(2));
  R(3)=LD32(R(15)+40);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,4,3);
  fp_arith(c,0,4,14);
  fp_ld(c,3,R(1));
  R(1)=LD32(R(15)+36);
  fp_arith(c,2,3,4);
  fp_fmac(c,3,1);
  fp_ld(c,1,R(1));
  fp_arith(c,0,3,1);
  fp_st(c,3,R(3));
  R(1)=LD32(R(15)+24);
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(1));
  fp_ld(c,1,R(2));
  fp_arith(c,2,3,4);
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(15)+28);
  fp_fmac(c,3,1);
  fp_ld(c,1,R(1));
  fp_arith(c,0,3,1);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(13));
  R(2)=0x8c0c4640u;
  R(1)=0x8c0c463cu;
  fp_st(c,3,R(8));
  R(3)=LD32(R(2));
  ST32(R(1),R(3));
L8c021b64:;
  { uint32_t tg=R(14); c->pr=0x8c021b68u;  sh4_call(c,tg); }
  c->fpul=R(0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  c->fr[1]=0x3F800000u;
  fp_float(c,3);
  fp_unary(c,0,1);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,13,3);
  { uint32_t tg=R(14); c->pr=0x8c021b7eu; fp_arith(c,0,13,1); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021c7cu;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  c->fr[1]=0x3F800000u;
  fp_float(c,3);
  fp_unary(c,0,1);
  fp_mov(c,0,13);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,12,3);
  fp_arith(c,0,12,1);
  fp_mov(c,3,12);
  fp_arith(c,2,3,12);
  fp_fmac(c,3,13);
  fp_ld(c,0,R(0));
  fp_mov(c,4,3);
  fp_cmp(c,1,0,4);
  if(c->t) goto L8c021b64;
  fp_fsrra(c,4);
  R(2)=LD32(R(15)+12);
  fp_st(c,14,R(2));
  R(3)=LD32(R(15)+16);
  fp_arith(c,2,12,4);
  fp_arith(c,2,13,4);
  fp_st(c,14,R(3));
  R(3)=LD32(R(15)+20);
  { uint32_t tg=R(14); c->pr=0x8c021bb8u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021c80u;
  fp_ld(c,2,R(0));
  R(0)=0x8c021c84u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c021bd0u; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021c88u;
  fp_ld(c,2,R(0));
  R(0)=0x8c021c8cu;
  fp_ld(c,1,R(0));
  R(0)=0x34u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c021be8u; fp_st(c,3,R(0)+R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021c90u;
  fp_ld(c,2,R(0));
  R(0)=0x8c021c94u;
  fp_ld(c,1,R(0));
  R(0)=0x34u;
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  fp_ld(c,5,R(0)+R(15));
  R(5)=R(11);
  R(7)=LD32(R(15));
  R(6)=R(12);
  fp_mov(c,4,2);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,6,3);
  fp_arith(c,0,6,1);
  { c->pr=0x8c021c0eu; R(4)=R(9); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c021c30;
  R(0)=0x8c021c9cu;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x34u;
  fp_st(c,13,R(0)+R(4));
  R(0)=0x38u;
  fp_st(c,12,R(0)+R(4));
  R(0)=0x3cu;
  fp_st(c,14,R(0)+R(4));
  R(0)=0x4cu;
  R(3)=LD32(R(15)+32);
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(4));
L8c021c30:;
  R(10)-=1;c->t=R(10)==0;
  if(c->t) goto L8c021c38;
  {  goto L8c021b06; }
L8c021c38:;
  R(15)+=0x68u;
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
void f_8c021ca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c021dc0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(12)=0x8c130be0u;
  R(11)=0x8c130bd4u;
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  fp_ld(c,13,R(0));
  R(0)=0x8c021dccu;
  fp_ld(c,14,R(0));
  R(0)=0x8c021dd4u;
  fp_ld(c,2,R(12));
  fp_ld(c,3,R(11));
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  R(13)=0x8c0686d0u;
  fp_ld(c,15,R(0));
  { c->pr=0x8c021cd2u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x1cu;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,2);
  { uint32_t tg=R(13); c->pr=0x8c021cf2u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x20u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,13);
  c->fr[13]=0x3F800000u;
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,2);
  { uint32_t tg=R(13); c->pr=0x8c021d14u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021dd8u;
  fp_ld(c,2,R(0));
  R(0)=0x24u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_arith(c,0,1,13);
  fp_st(c,1,R(0)+R(14));
  R(0)=0x8c021ddcu;
  fp_ld(c,12,R(0));
  R(0)=0x8c021de0u;
  { uint32_t tg=R(13); c->pr=0x8c021d34u; fp_ld(c,14,R(0)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x28u;
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,14);
  { uint32_t tg=R(13); c->pr=0x8c021d44u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x2cu;
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,14);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c021de4u;
  { uint32_t tg=R(13); c->pr=0x8c021d58u; fp_ld(c,14,R(0)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021de8u;
  fp_ld(c,2,R(0));
  R(0)=0x30u;
  R(3)=0x8700bu;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(14));
  { uint32_t tg=R(13); c->pr=0x8c021d70u; ST32(R(14),R(3)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c021df0u;
  fp_ld(c,2,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(13); c->pr=0x8c021d84u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x18u;
  R(3)=0x8c0c467cu;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c021df4u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(14));
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
void f_8c021e00(SH4Ctx *c) {
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
  R(15)+=0xffffffc4u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(4)=0x8c130bd4u;
  ST32(R(15)+12,R(6));
  R(5)=LD32(R(15)+4);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(5)=LD32(R(15));
  R(4)=0x8c130be0u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(5)=LD32(R(15));
  R(4)=0x8c130becu;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(3)=0x8c02059eu;
  R(4)=0x8c130be0u;
  { c->pr=0x8c021e64u;  f_8c02059e(c); }
  R(2)=0x8c0205d8u;
  R(4)=0x8c130becu;
  { c->pr=0x8c021e6cu;  f_8c0205d8(c); }
  R(0)=0x8c021ff8u;
  R(12)=R(15);
  R(12)+=0x30u;
  R(13)=R(15);
  R(3)=R(12);
  R(2)=R(3);
  R(2)+=0x4u;
  ST32(R(15)+32,R(3));
  R(13)+=0x24u;
  R(1)=R(3);
  R(3)=R(13);
  ST32(R(15)+28,R(2));
  R(2)=R(3);
  R(14)=0x8c0686d0u;
  R(8)=R(3);
  R(2)+=0x4u;
  R(1)+=0x8u;
  R(9)=0x8700bu;
  ST32(R(15)+20,R(1));
  R(10)=0x10u;
  ST32(R(15)+16,R(3));
  R(11)=0x5u;
  ST32(R(15)+24,R(2));
  R(8)+=0x8u;
  fp_ld(c,12,R(0));
  R(0)=0x8c021ffcu;
  fp_ld(c,13,R(0));
  R(0)=0x8c022000u;
  fp_ld(c,14,R(0));
  R(0)=0x8c022008u;
  fp_ld(c,15,R(0));
L8c021eaa:;
  R(3)=LD32(R(15)+32);
  fp_mov(c,0,14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(2));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c021ebeu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02200cu;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(2));
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  fp_ld(c,2,R(0)+R(1));
  fp_ld(c,1,R(0)+R(2));
  fp_fmac(c,2,1);
  { uint32_t tg=R(14); c->pr=0x8c021eeau; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02200cu;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,14);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(2));
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  fp_ld(c,2,R(0)+R(1));
  fp_ld(c,1,R(0)+R(2));
  fp_fmac(c,2,1);
  { uint32_t tg=R(14); c->pr=0x8c021f16u; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c022010u;
  fp_ld(c,2,R(0));
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,1,3);
  { uint32_t tg=R(14); c->pr=0x8c021f30u; fp_st(c,1,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c022014u;
  fp_ld(c,2,R(0));
  R(0)=0x8c022018u;
  fp_ld(c,1,R(0));
  R(0)=0x8u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(15)+16);
  { uint32_t tg=R(14); c->pr=0x8c021f4cu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  fp_st(c,3,R(2));
  R(3)=LD32(R(15)+24);
  { uint32_t tg=R(14); c->pr=0x8c021f60u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  { uint32_t tg=R(14); c->pr=0x8c021f70u; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02201cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c022020u;
  fp_ld(c,1,R(0));
  R(0)=0x8u;
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  R(5)=R(12);
  R(6)=R(13);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  fp_st(c,3,R(8));
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8c022024u;
  fp_ld(c,4,R(0));
  R(7)=LD32(R(15)+12);
  fp_mov(c,5,6);
  { uint32_t tg=R(3); c->pr=0x8c021f9au; R(4)=R(9); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c021fa8;
  R(3)=0x8c021ca0u;
  R(0)=0x5cu;
  ST32(R(4)+4,R(10));
  ST32(R(4)+R(0),R(3));
L8c021fa8:;
  R(11)-=1;c->t=R(11)==0;
  if(c->t) goto L8c021fb0;
  {  goto L8c021eaa; }
L8c021fb0:;
  R(15)+=0x3cu;
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
void f_8c022040(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(2)=0x8c123b74u;
  R(12)=R(5);
  R(11)=R(4);
  ST32(R(15)+4,R(6));
  fp_st(c,4,R(15));
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c022070; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c022070:;
  R(0)=0x8c0222c8u;
  R(4)=0x8c0c46c4u;
  fp_ld(c,2,R(0));
  fp_mov(c,4,3);
  fp_arith(c,2,4,2);
  c->fr[3]=0x00000000u;
  R(5)=0x8c0c467cu;
  fp_st(c,4,R(5));
  fp_ld(c,2,R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c02208a;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
L8c02208a:;
  fp_ld(c,3,R(4));
  fp_ld(c,4,R(5));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c02218e;
  R(0)=0x8c0222d4u;
  c->fr[13]=0x3F800000u;
  fp_ld(c,3,R(0));
  R(0)=0x8c0222d8u;
  fp_arith(c,0,13,13);
  R(13)=R(15);
  fp_arith(c,0,4,3);
  R(14)=0x8c0686d0u;
  R(13)+=0x14u;
  fp_st(c,4,R(4));
  fp_ld(c,12,R(0));
  R(0)=0x8c0222dcu;
  fp_ld(c,14,R(0));
  R(0)=0x8c0222e4u;
  fp_ld(c,1,R(12));
  fp_ld(c,2,R(11));
  fp_mov(c,0,14);
  fp_fmac(c,2,1);
  fp_ld(c,15,R(0));
  { uint32_t tg=R(14); c->pr=0x8c0220bcu; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,13);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  fp_fmac(c,2,3);
  fp_mov(c,0,14);
  fp_st(c,2,R(13));
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c0220dcu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,0,13);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  fp_fmac(c,2,3);
  fp_mov(c,0,14);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(12));
  fp_ld(c,3,R(0)+R(11));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c0220feu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0222e8u;
  c->fr[0]=0x3F800000u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0));
  R(0)=0x8u;
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,0);
  fp_mov(c,0,13);
  fp_fmac(c,2,3);
  { uint32_t tg=R(14); c->pr=0x8c02211au; fp_st(c,2,R(0)+R(13)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0222ecu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0222d4u;
  fp_ld(c,0,R(0));
  R(0)=0x8c0222f0u;
  fp_ld(c,4,R(15));
  fp_float(c,3);
  fp_ld(c,1,R(15));
  R(12)=R(15);
  fp_arith(c,2,4,0);
  fp_ld(c,12,R(0));
  fp_arith(c,2,1,2);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,1);
  fp_arith(c,3,3,15);
  fp_mov(c,14,3);
  fp_arith(c,0,14,4);
  { uint32_t tg=R(14); c->pr=0x8c022142u; R(12)+=0x8u; sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0222f4u;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c022154u; fp_st(c,3,R(12)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0222f4u;
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c022168u; fp_st(c,3,R(0)+R(12)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0222f8u;
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  R(4)=0xa700bu;
  R(6)=R(12);
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  fp_mov(c,6,14);
  fp_mov(c,5,14);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8c0222fcu;
  fp_ld(c,4,R(0));
  R(7)=LD32(R(15)+4);
  { c->pr=0x8c02218eu; R(5)=R(13); f_8c01a7e0(c); }
L8c02218e:;
  R(15)+=0x20u;
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
void f_8c0221a4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(0)=0x8c022308u;
  R(12)=R(4);
  R(11)=R(5);
  c->fr[13]=0x3F800000u;
  fp_arith(c,0,13,13);
  R(13)=R(15);
  R(14)=0x8c0686d0u;
  R(13)+=0x14u;
  ST32(R(15)+4,R(6));
  fp_st(c,4,R(15));
  fp_ld(c,12,R(0));
  R(0)=0x8c0222dcu;
  fp_ld(c,14,R(0));
  R(0)=0x8c0222e4u;
  fp_ld(c,3,R(12));
  fp_ld(c,2,R(11));
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  fp_ld(c,15,R(0));
  { uint32_t tg=R(14); c->pr=0x8c0221e2u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02230cu;
  fp_ld(c,0,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,0);
  fp_mov(c,0,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  fp_fmac(c,2,3);
  fp_mov(c,0,14);
  fp_st(c,2,R(13));
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(12));
  fp_fmac(c,3,2);
  { uint32_t tg=R(14); c->pr=0x8c022206u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c02230cu;
  fp_ld(c,0,R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  fp_arith(c,2,3,0);
  fp_mov(c,0,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,12);
  fp_fmac(c,2,3);
  fp_mov(c,0,14);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x8c0222d8u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c022234u; fp_st(c,3,R(0)+R(13)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c022310u;
  fp_ld(c,2,R(0));
  R(0)=0x8c022314u;
  fp_ld(c,0,R(0));
  R(0)=0x8c0222f0u;
  fp_ld(c,4,R(15));
  fp_float(c,3);
  fp_ld(c,1,R(15));
  R(12)=R(15);
  fp_arith(c,2,4,0);
  fp_ld(c,12,R(0));
  fp_arith(c,2,1,2);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,1);
  fp_arith(c,3,3,15);
  fp_mov(c,14,3);
  fp_arith(c,0,14,4);
  { uint32_t tg=R(14); c->pr=0x8c02225cu; R(12)+=0x8u; sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0222f4u;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c02226eu; fp_st(c,3,R(12)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0222f4u;
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(14); c->pr=0x8c022282u; fp_st(c,3,R(0)+R(12)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0222f8u;
  fp_ld(c,2,R(0));
  R(0)=0x8u;
  R(4)=0x87007u;
  R(6)=R(12);
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  fp_mov(c,6,14);
  fp_mov(c,5,14);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x8c0222fcu;
  fp_ld(c,4,R(0));
  R(7)=LD32(R(15)+4);
  { c->pr=0x8c0222a8u; R(5)=R(13); f_8c01a7e0(c); }
  R(15)+=0x20u;
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
void f_8c022320(SH4Ctx *c) {
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
  R(15)+=0xffffffe4u;
  ST32(R(15),R(6));
  R(6)=R(15);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(6)+=0x10u;
  R(8)=R(15);
  R(8)+=0x4u;
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(10)=R(8);
  c->fr[12]=0x3F800000u;
  R(11)=R(8);
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(8);
  R(14)=0x8c0686d0u;
  R(12)=0xau;
  fp_st(c,2,R(6));
  R(9)=R(8);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(11)+=0x8u;
  R(13)=0x10001u;
  R(10)+=0x4u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_unary(c,0,12);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  c->fr[15]=0x3F800000u;
  fp_arith(c,0,15,15);
  R(0)=0x8c0224e8u;
  c->fr[14]=0x00000000u;
  fp_ld(c,13,R(0));
L8c022384:;
  { uint32_t tg=R(14); c->pr=0x8c022388u;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,13);
  fp_arith(c,0,3,12);
  { uint32_t tg=R(14); c->pr=0x8c022396u; fp_st(c,3,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,15);
  fp_arith(c,3,2,13);
  fp_arith(c,0,2,12);
  fp_st(c,2,R(10));
  { uint32_t tg=R(14); c->pr=0x8c0223a6u; fp_st(c,14,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(5)=R(15);
  c->fr[2]=0x3F800000u;
  R(6)=R(8);
  R(3)=0x8c01a7e0u;
  R(5)+=0x10u;
  fp_float(c,3);
  fp_mov(c,5,14);
  fp_mov(c,6,14);
  R(4)=R(13);
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,13);
  fp_mov(c,4,3);
  fp_arith(c,0,4,2);
  { c->pr=0x8c0223c6u; R(7)=LD32(R(15)); f_8c01a7e0(c); }
  { uint32_t tg=R(14); c->pr=0x8c0223cau;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,13);
  fp_arith(c,0,3,12);
  { uint32_t tg=R(14); c->pr=0x8c0223d8u; fp_st(c,3,R(9)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,15);
  fp_arith(c,3,2,13);
  fp_arith(c,0,2,12);
  fp_st(c,2,R(10));
  { uint32_t tg=R(14); c->pr=0x8c0223e8u; fp_st(c,14,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(5)=R(15);
  c->fr[2]=0x3F800000u;
  R(6)=R(8);
  R(3)=0x8c01a7e0u;
  R(5)+=0x10u;
  fp_float(c,3);
  fp_mov(c,5,14);
  fp_mov(c,6,14);
  R(4)=R(13);
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,13);
  fp_mov(c,4,3);
  fp_arith(c,0,4,2);
  { c->pr=0x8c022408u; R(7)=LD32(R(15)); f_8c01a7e0(c); }
  R(12)+=0xfffffffeu;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c022384;
  R(15)+=0x1cu;
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
void f_8c02242a(SH4Ctx *c) {
  R(1)=0x8c0c4650u;
  R(3)=0x8c123cf0u;
  R(2)=LD32(R(1));
  R(4)=LD32(R(3));
  c->t=R(2)==R(4);
  R(0)=c->t;
  {  return; }
}
void f_8c02243a(SH4Ctx *c) {
  R(7)=0xcu;
  R(0)=0x0u;
L8c02243e:;
  fp_ld(c,2,R(0)+R(5));
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,0,3,2);
  if(c->t) goto L8c02244a;
  { R(0)=0x0u; return; }
L8c02244a:;
  R(0)+=0x4u;
  c->t=R(0)>=R(7);
  if(!c->t) goto L8c02243e;
  R(0)=0x1u;
  {  return; }
}
void f_8c022456(SH4Ctx *c) {
  R(15)+=0xffffffecu;
  R(0)=0x8c0224f8u;
  fp_ld(c,2,R(4));
  fp_ld(c,4,R(0));
  R(3)=R(4);
  fp_ld(c,3,R(5));
  R(7)=R(5);
  fp_mov(c,0,4);
  R(7)+=0x4u;
  fp_fmac(c,2,3);
  R(3)+=0x4u;
  R(0)=0x8c0224fcu;
  R(6)=R(15);
  R(6)+=0x8u;
  fp_st(c,2,R(4));
  ST32(R(15)+4,R(3));
  fp_ld(c,2,R(3));
  fp_ld(c,3,R(7));
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  R(3)=R(6);
  fp_ld(c,3,R(0));
  R(0)=0x8c022500u;
  fp_ld(c,0,R(0));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(5));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(4));
  ST32(R(15),R(3));
  fp_ld(c,3,R(7));
  fp_st(c,3,R(3));
  fp_ld(c,2,R(5));
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  R(7)=R(3);
  fp_unary(c,0,2);
  R(7)+=0x4u;
  fp_st(c,2,R(7));
  fp_st(c,3,R(0)+R(6));
  R(0)=0x8c022504u;
  R(3)=LD32(R(15));
  fp_ld(c,4,R(0));
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(3));
  fp_mov(c,0,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(4));
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(3));
  fp_fmac(c,2,3);
  fp_st(c,2,R(3));
  { R(15)+=0x14u; return; }
}
void f_8c022520(SH4Ctx *c) {
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
  R(0)=0xffffff7cu;
  R(15)+=R(0);
  R(3)=0x8c129af0u;
  R(8)=0xcu;
  c->fr[3]=0x3F800000u;
  ST32(R(15)+12,R(5));
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  R(7)=R(15);
  R(7)+=0x78u;
  fp_st(c,4,R(15));
  fp_st(c,3,R(3));
  R(5)=R(7);
  R(6)=LD32(R(15)+12);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(6));
  fp_st(c,2,R(5));
  R(5)=R(15);
  R(5)+=0x6cu;
  ST32(R(15)+20,R(5));
  R(6)=LD32(R(15)+8);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(6));
  fp_st(c,2,R(5));
  R(0)=0x8c022670u;
  R(5)=0x8c123b08u;
  fp_ld(c,4,R(0));
  R(0)=0x8c022678u;
  fp_ld(c,13,R(0));
  R(0)=0x8c02267cu;
  fp_ld(c,14,R(0));
  R(0)=0x8c022680u;
  fp_ld(c,15,R(0));
  R(0)=0x6cu;
  R(2)=LD32(R(5)+R(0));
  R(13)=R(15);
  R(12)=0x3001u;
  R(9)=0x1u;
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  R(14)=0x8c0c467cu;
  R(13)+=0x6cu;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0225ac; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0225ac:;
  fp_arith(c,2,3,4);
  R(0)=0x18u;
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,1,1);
  R(1)=0xafu;
  R(11)=R(15);
  R(10)=R(15);
  R(11)+=0x70u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,5,R(15));
  R(10)+=0x74u;
  fp_mov(c,2,5);
  fp_arith(c,0,2,5);
  fp_mov(c,0,5);
  fp_mov(c,12,5);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c022688u;
  fp_ld(c,3,R(0));
  R(0)=0x28u;
  fp_arith(c,2,0,3);
  fp_st(c,0,R(0)+R(15));
  R(0)=R(4);
  c->t=R(0)==R(1);
  { uint32_t k=!c->t; fp_arith(c,2,12,1); if(k) goto L8c0225e4; }
  {  goto L8c02278c; }
L8c0225e4:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0225ec;
  {  goto L8c022abc; }
L8c0225ec:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0225f4;
  {  goto L8c022ad0; }
L8c0225f4:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0225fc;
  {  goto L8c022aec; }
L8c0225fc:;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c022604;
  {  goto L8c022b20; }
L8c022604:;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c02260c;
  {  goto L8c022bba; }
L8c02260c:;
  c->t=(int32_t)R(0)==9;
  if(!c->t) goto L8c022614;
  {  goto L8c022c20; }
L8c022614:;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c02261c;
  {  goto L8c022d20; }
L8c02261c:;
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c022624;
  {  goto L8c022da0; }
L8c022624:;
  c->t=(int32_t)R(0)==15;
  if(!c->t) goto L8c02262c;
  {  goto L8c022e8c; }
L8c02262c:;
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c022634;
  {  goto L8c022ee0; }
L8c022634:;
  c->t=(int32_t)R(0)==19;
  if(!c->t) goto L8c02263c;
  {  goto L8c022ef2; }
L8c02263c:;
  c->t=(int32_t)R(0)==20;
  if(!c->t) goto L8c022644;
  {  goto L8c022f78; }
L8c022644:;
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c02264c;
  {  goto L8c022fe4; }
L8c02264c:;
  {  goto L8c0226a0; }
L8c0226a0:;
  c->t=(int32_t)R(0)==23;
  if(!c->t) goto L8c0226a8;
  {  goto L8c022ff6; }
L8c0226a8:;
  c->t=(int32_t)R(0)==26;
  if(!c->t) goto L8c0226b0;
  {  goto L8c023140; }
L8c0226b0:;
  c->t=(int32_t)R(0)==27;
  if(!c->t) goto L8c0226b8;
  {  goto L8c0232e0; }
L8c0226b8:;
  c->t=(int32_t)R(0)==28;
  if(!c->t) goto L8c0226c0;
  {  goto L8c023460; }
L8c0226c0:;
  c->t=(int32_t)R(0)==29;
  if(!c->t) goto L8c0226c8;
  {  goto L8c023470; }
L8c0226c8:;
  c->t=(int32_t)R(0)==30;
  if(!c->t) goto L8c0226d2;
  R(1)=0x8c023620u;
  {  goto L8c023620; }
L8c0226d2:;
  c->t=(int32_t)R(0)==31;
  if(!c->t) goto L8c0226dc;
  R(1)=0x8c023740u;
  {  goto L8c023740; }
L8c0226dc:;
  c->t=(int32_t)R(0)==33;
  if(!c->t) goto L8c0226e6;
  R(1)=0x8c0237e0u;
  {  goto L8c0237e0; }
L8c0226e6:;
  c->t=(int32_t)R(0)==35;
  if(!c->t) goto L8c0226f0;
  R(1)=0x8c023860u;
  {  goto L8c023860; }
L8c0226f0:;
  c->t=(int32_t)R(0)==39;
  if(!c->t) goto L8c0226fa;
  R(1)=0x8c023870u;
  {  goto L8c023870; }
L8c0226fa:;
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c022704;
  R(1)=0x8c0238c0u;
  {  goto L8c0238c0; }
L8c022704:;
  c->t=(int32_t)R(0)==45;
  if(!c->t) goto L8c02270e;
  R(1)=0x8c023a00u;
  {  goto L8c023a00; }
L8c02270e:;
  c->t=(int32_t)R(0)==46;
  if(!c->t) goto L8c022718;
  R(1)=0x8c023ae0u;
  {  goto L8c023ae0; }
L8c022718:;
  c->t=(int32_t)R(0)==47;
  if(!c->t) goto L8c022722;
  R(1)=0x8c023b60u;
  {  goto L8c023b60; }
L8c022722:;
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c02272c;
  R(1)=0x8c023b7cu;
  {  goto L8c023b7c; }
L8c02272c:;
  c->t=(int32_t)R(0)==49;
  if(!c->t) goto L8c022736;
  R(1)=0x8c023c04u;
  {  goto L8c023c04; }
L8c022736:;
  c->t=(int32_t)R(0)==50;
  if(!c->t) goto L8c022740;
  R(1)=0x8c023c32u;
  {  goto L8c023c32; }
L8c022740:;
  c->t=(int32_t)R(0)==51;
  if(!c->t) goto L8c02274a;
  R(1)=0x8c023cc0u;
  {  goto L8c023cc0; }
L8c02274a:;
  c->t=(int32_t)R(0)==52;
  if(!c->t) goto L8c022754;
  R(1)=0x8c023d20u;
  {  goto L8c023d20; }
L8c022754:;
  c->t=(int32_t)R(0)==55;
  if(!c->t) goto L8c02275e;
  R(1)=0x8c023d60u;
  {  goto L8c023d60; }
L8c02275e:;
  c->t=(int32_t)R(0)==60;
  if(!c->t) goto L8c022768;
  R(1)=0x8c023df4u;
  {  goto L8c023df4; }
L8c022768:;
  c->t=(int32_t)R(0)==62;
  if(!c->t) goto L8c022772;
  R(1)=0x8c023e04u;
  {  goto L8c023e04; }
L8c022772:;
  c->t=(int32_t)R(0)==65;
  if(!c->t) goto L8c02277c;
  R(1)=0x8c023e40u;
  {  goto L8c023e40; }
L8c02277c:;
  c->t=(int32_t)R(0)==67;
  if(!c->t) goto L8c022786;
  R(1)=0x8c023e50u;
  {  goto L8c023e50; }
L8c022786:;
  R(1)=0x8c023e60u;
  {  goto L8c023e60; }
L8c02278c:;
  R(4)=0x8c0c46c8u;
  R(2)=0x4u;
  R(1)=LD32(R(4));
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c0227a4; }
  R(1)=LD32(R(4));
  R(1)+=0x1u;
  ST32(R(4),R(1));
  R(1)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c0227a4:;
  c->fr[3]=0x00000000u;
  R(0)=0x0u;
  ST32(R(4),R(0));
  fp_ld(c,2,R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0227b6;
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c0227b6:;
  R(0)=0x8c0228f8u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0));
  R(10)=R(15);
  R(10)+=0x3cu;
  fp_arith(c,2,2,3);
  R(4)=0x0u;
  fp_st(c,2,R(15));
L8c0227c6:;
  R(5)=R(15);
  R(5)+=0x6cu;
  R(0)=R(4);
  R(5)+=R(0);
  R(3)=R(15);
  fp_ld(c,3,R(5));
  R(3)+=0x78u;
  R(3)+=R(4);
  fp_st(c,3,R(0)+R(10));
  fp_ld(c,2,R(5));
  R(4)+=0x4u;
  fp_ld(c,3,R(3));
  R(0)=R(4);
  R(3)=R(15);
  R(3)+=0x78u;
  fp_arith(c,1,2,3);
  R(3)+=R(4);
  fp_st(c,2,R(5));
  R(5)=R(15);
  R(5)+=0x6cu;
  fp_mov(c,5,2);
  R(5)+=R(0);
  fp_mov(c,0,2);
  fp_ld(c,3,R(5));
  fp_fmac(c,4,5);
  fp_st(c,3,R(0)+R(10));
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(3));
  fp_arith(c,1,2,3);
  fp_mov(c,0,2);
  fp_mov(c,5,2);
  fp_st(c,2,R(5));
  R(5)=R(15);
  R(4)+=0x4u;
  R(5)+=0x6cu;
  R(0)=R(4);
  R(5)+=R(0);
  R(3)=R(15);
  fp_ld(c,3,R(5));
  R(3)+=0x78u;
  R(3)+=R(4);
  fp_fmac(c,4,5);
  fp_st(c,3,R(0)+R(10));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  c->t=R(4)>=R(8);
  fp_ld(c,3,R(3));
  fp_arith(c,1,2,3);
  fp_mov(c,0,2);
  fp_st(c,2,R(5));
  fp_mov(c,5,2);
  { uint32_t k=!c->t; fp_fmac(c,4,5); if(k) goto L8c0227c6; }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c02283c;
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c02283c:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x78u;
  R(4)+=0x6cu;
  c->t=R(4)>=R(5);
  { uint32_t k=c->t; fp_fsrra(c,4); if(k) goto L8c022866; }
L8c02284a:;
  fp_ld(c,3,R(4));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(4));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(4));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c02284a;
L8c022866:;
  R(5)=R(15);
  R(3)=0x8c02520au;
  R(6)=R(15);
  R(5)+=0x60u;
  R(6)+=0x54u;
  { c->pr=0x8c022874u; R(4)=LD32(R(15)+20); f_8c02520a(c); }
  R(0)=0x8c022900u;
  R(12)=R(15);
  fp_ld(c,12,R(0));
  R(0)=0x8c022904u;
  fp_ld(c,13,R(0));
  R(0)=0x8c022908u;
  R(14)=R(8);
  R(12)+=0x48u;
  { fp_ld(c,14,R(0)); goto L8c022aae; }
L8c022920:;
  R(13)=0x0u;
  c->fr[15]=0x00000000u;
L8c022924:;
  R(3)=R(15);
  R(0)=R(13);
  R(3)+=0x60u;
  R(11)=R(13);
  fp_ld(c,3,R(0)+R(3));
  R(11)+=R(12);
  R(3)=0x8c0686d0u;
  { c->pr=0x8c022936u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(3)=0x46fffe00u;
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x8c0686d0u;
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(2)=R(15);
  R(2)+=0x5cu;
  R(2)+=R(13);
  fp_ld(c,3,R(2));
  { c->pr=0x8c022956u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(13)+=0x4u;
  R(3)=0x46fffe00u;
  R(0)=R(13);
  fp_float(c,3);
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  R(3)=R(15);
  R(3)+=0x60u;
  fp_arith(c,0,3,13);
  fp_arith(c,2,2,3);
  fp_fmac(c,2,1);
  fp_mov(c,0,2);
  fp_mov(c,4,2);
  fp_fmac(c,15,4);
  fp_st(c,2,R(11));
  R(11)=R(13);
  fp_ld(c,3,R(0)+R(3));
  R(11)+=R(12);
  R(3)=0x8c0686d0u;
  { c->pr=0x8c02298cu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(3)=0x46fffe00u;
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x8c0686d0u;
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(2)=R(15);
  R(2)+=0x5cu;
  R(2)+=R(13);
  fp_ld(c,3,R(2));
  { c->pr=0x8c0229acu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(13)+=0x4u;
  R(3)=0x46fffe00u;
  R(0)=R(13);
  fp_float(c,3);
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  R(3)=R(15);
  R(3)+=0x60u;
  fp_arith(c,0,3,13);
  fp_arith(c,2,2,3);
  fp_fmac(c,2,1);
  fp_mov(c,0,2);
  fp_mov(c,4,2);
  fp_fmac(c,15,4);
  fp_st(c,2,R(11));
  R(11)=R(13);
  fp_ld(c,3,R(0)+R(3));
  R(11)+=R(12);
  R(3)=0x8c0686d0u;
  { c->pr=0x8c0229e2u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(3)=0x46fffe00u;
  fp_float(c,3);
  c->fpul=R(3);
  R(3)=0x8c0686d0u;
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(2)=R(15);
  R(2)+=0x5cu;
  R(2)+=R(13);
  fp_ld(c,3,R(2));
  { c->pr=0x8c022a02u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(13)+=0x4u;
  R(3)=0x46fffe00u;
  c->t=R(13)>=R(8);
  fp_float(c,3);
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_arith(c,0,3,13);
  fp_arith(c,2,2,3);
  fp_fmac(c,2,1);
  fp_mov(c,0,2);
  fp_st(c,2,R(11));
  fp_mov(c,4,2);
  { uint32_t k=c->t; fp_fmac(c,15,4); if(k) goto L8c022a2e; }
  {  goto L8c022924; }
L8c022a2e:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(c->t) goto L8c022a74;
  fp_fsrra(c,15);
  fp_ld(c,2,R(15));
  R(4)=0x0u;
  fp_mov(c,4,15);
  fp_arith(c,2,4,2);
L8c022a3e:;
  R(5)=R(4);
  R(5)+=R(12);
  R(0)=R(4);
  fp_ld(c,2,R(5));
  fp_ld(c,3,R(0)+R(10));
  R(4)+=0x4u;
  fp_mov(c,0,4);
  R(0)=R(4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(5));
  R(5)=R(4);
  R(5)+=R(12);
  fp_ld(c,3,R(0)+R(10));
  fp_ld(c,2,R(5));
  R(4)+=0x4u;
  R(0)=R(4);
  fp_fmac(c,3,2);
  fp_st(c,3,R(5));
  R(5)=R(4);
  R(5)+=R(12);
  fp_ld(c,3,R(0)+R(10));
  fp_ld(c,2,R(5));
  R(4)+=0x4u;
  c->t=R(4)>=R(8);
  fp_fmac(c,3,2);
  { uint32_t k=!c->t; fp_st(c,3,R(5)); if(k) goto L8c022a3e; }
L8c022a74:;
  R(2)=0x8c0686d0u;
  { c->pr=0x8c022a7au;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c022b08u;
  fp_ld(c,2,R(0));
  R(0)=0x8c022b04u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,3);
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+4);
  R(5)=R(12);
  R(6)+=0x78u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  fp_arith(c,0,15,12);
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  { c->pr=0x8c022aa4u; R(4)=0x12u; f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)+=0xffffffffu; if(k) goto L8c022aae; }
  ST32(R(4)+4,R(9));
L8c022aae:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c022ab6;
  {  goto L8c022920; }
L8c022ab6:;
  R(2)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022abc:;
  fp_ld(c,2,R(15));
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,2,3);
  c->fr[4]=0x3F800000u;
  fp_mov(c,5,2);
  fp_st(c,2,R(15));
  R(7)=LD32(R(15)+4);
  fp_mov(c,6,2);
  { fp_arith(c,0,4,4); goto L8c022ae0; }
L8c022ad0:;
  fp_ld(c,2,R(15));
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,2,3);
  fp_mov(c,5,2);
  fp_st(c,2,R(15));
  R(7)=LD32(R(15)+4);
  fp_ld(c,4,R(13));
  fp_mov(c,6,2);
L8c022ae0:;
  R(4)=0x10000u;
  R(6)=0x0u;
  R(3)=0x8c023b72u;
  R(5)=R(15);
  { R(5)+=0x78u; goto L8c023b72; }
L8c022aec:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01e0a0u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c022af8u; R(4)=LD32(R(15)+12); f_8c01e0a0(c); }
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022b20:;
  R(1)=0x8c0c463cu;
  R(0)=0x6cu;
  R(2)=LD32(R(15)+4);
  ST32(R(1),R(2));
  R(2)=LD32(R(5)+R(0));
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c022b38; }
  R(0)=0x8c022be4u;
  fp_ld(c,2,R(0));
  fp_arith(c,0,3,2);
L8c022b38:;
  R(4)=0x8c0c468cu;
  fp_mov(c,5,3);
  fp_arith(c,2,5,4);
  c->fr[3]=0x00000000u;
  fp_st(c,5,R(14));
  fp_ld(c,2,R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c022b4c;
  fp_ld(c,2,R(14));
  fp_st(c,2,R(4));
L8c022b4c:;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c022b5a;
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022b5a:;
  fp_ld(c,3,R(14));
  R(0)=0x8c022bf0u;
  fp_arith(c,0,3,15);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0));
  R(0)=0x6cu;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c022b74;
  R(0)=0x8c022bf4u;
  fp_ld(c,3,R(0));
  R(0)=0x6cu;
  fp_st(c,3,R(0)+R(15));
L8c022b74:;
  R(2)=0x8c0c466cu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c022b96;
  R(0)=0x74u;
  R(6)=R(15);
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x6cu;
  fp_ld(c,4,R(0)+R(15));
  R(5)=R(15);
  R(4)=0x10003100u;
  R(6)+=0x6cu;
  R(7)=LD32(R(15)+4);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { R(5)+=0x78u; goto L8c022bae; }
L8c022b96:;
  R(0)=0x74u;
  R(6)=R(15);
  fp_ld(c,15,R(0)+R(15));
  R(0)=0x6cu;
  R(5)=R(15);
  R(4)=0x10003300u;
  fp_ld(c,4,R(0)+R(15));
  R(5)+=0x78u;
  R(7)=LD32(R(15)+4);
  R(6)+=0x6cu;
  fp_mov(c,6,15);
  fp_mov(c,5,15);
L8c022bae:;
  R(3)=0x8c01a7e0u;
  { c->pr=0x8c022bb4u;  f_8c01a7e0(c); }
  R(2)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022bba:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01e320u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c022bc6u; R(4)=LD32(R(15)+12); f_8c01e320(c); }
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022c20:;
  R(2)=0x8c0686d0u;
  { c->pr=0x8c022c26u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c022d08u;
  fp_ld(c,2,R(0));
  R(5)=R(15);
  fp_mov(c,1,15);
  R(6)=0x0u;
  fp_float(c,3);
  fp_ld(c,4,R(15));
  R(4)=0x4500u;
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,2);
  fp_mov(c,15,3);
  fp_arith(c,0,15,1);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { c->pr=0x8c022c4cu; R(5)+=0x78u; f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c022c54;
  ST32(R(4)+4,R(9));
L8c022c54:;
  R(11)=R(15);
  R(10)=R(15);
  R(4)=0x8u;
  R(13)=R(15);
  c->t=(R(4)&R(4))==0;
  R(14)=R(4);
  R(10)+=0x70u;
  R(11)+=0x6cu;
  { uint32_t k=!c->t; R(13)+=0x74u; if(k) goto L8c022c6e; }
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022c6e:;
  R(0)=0x8c022d14u;
  fp_ld(c,12,R(0));
L8c022c72:;
  R(3)=0x8c0686d0u;
  { c->pr=0x8c022c78u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c022d08u;
  fp_ld(c,2,R(0));
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  { c->pr=0x8c022c8cu; fp_st(c,3,R(11)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c022d08u;
  fp_ld(c,2,R(0));
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  { c->pr=0x8c022ca0u; fp_st(c,3,R(10)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c022d08u;
  fp_ld(c,2,R(0));
  R(0)=0x8c022d18u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,1);
  { c->pr=0x8c022cb8u; fp_st(c,3,R(13)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c022d1cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c022d08u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,3);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x78u;
  fp_ld(c,4,R(15));
  R(6)+=0x6cu;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  fp_arith(c,0,15,2);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { uint32_t tg=R(3); c->pr=0x8c022ce2u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c022cea;
  ST32(R(4)+4,R(9));
L8c022cea:;
  R(14)-=1;c->t=R(14)==0;
  if(!c->t) goto L8c022c72;
  R(2)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022d20:;
  R(0)=0x18u;
  R(4)=0x8c0c46ccu;
  fp_ld(c,3,R(0)+R(15));
  fp_st(c,3,R(14));
  fp_ld(c,2,R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c022d34;
  fp_ld(c,2,R(14));
  fp_st(c,2,R(4));
L8c022d34:;
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c022d42;
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022d42:;
  R(0)=0x8c022d8cu;
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(0));
  R(0)=0x6cu;
  R(6)=R(15);
  R(5)=R(15);
  fp_arith(c,0,2,3);
  R(6)+=0x6cu;
  fp_st(c,2,R(4));
  c->fr[2]=0x00000000u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x70u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x74u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c022d90u;
  fp_ld(c,15,R(0));
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  R(4)=0x1605u;
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { R(5)+=0x78u; goto L8c0239aa; }
L8c022da0:;
  R(1)=LD32(R(15)+8);
  R(0)=0x4u;
  R(2)=R(15);
  R(2)+=0x78u;
  R(12)=R(1);
  fp_ld(c,3,R(0)+R(12));
  fp_ld(c,14,R(1));
  R(1)=R(15);
  fp_ftrc(c,3);
  ST32(R(15)+20,R(2));
  R(2)=0x80u;
  R(1)+=0x7cu;
  ST32(R(15)+8,R(1));
  R(2)+=R(15);
  R(12)=c->fpul;
  ST32(R(15)+56,R(2));
  c->t=(int32_t)R(12)>0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c022dcc; }
  R(2)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022dcc:;
  R(0)=0x8c022ea8u;
  R(9)=0x8c03aedau;
  fp_ld(c,12,R(0));
  R(0)=0x8c022eacu;
  R(8)=0x3303u;
  fp_ld(c,13,R(0));
L8c022dd8:;
  c->fpul=R(14);
  R(0)=0x8c022eb4u;
  fp_ld(c,2,R(0));
  R(0)=0x24u;
  fp_float(c,3);
  c->fpul=R(12);
  fp_float(c,1);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,4,3);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(9); c->pr=0x8c022df2u; fp_arith(c,0,4,13); sh4_call(c,tg); }
  R(0)=0x30u;
  fp_st(c,0,R(0)+R(15));
  R(0)=0x24u;
  { uint32_t tg=R(9); c->pr=0x8c022dfcu; fp_ld(c,4,R(0)+R(15)); sh4_call(c,tg); }
  R(3)=0x8c0686d0u;
  R(0)=0x34u;
  { c->pr=0x8c022e04u; fp_st(c,0,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c022ebcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c022ec0u;
  fp_ld(c,1,R(0));
  R(0)=0x30u;
  fp_float(c,3);
  R(3)=0x8c129af0u;
  fp_mov(c,4,14);
  fp_mov(c,5,14);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,15);
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  R(1)=LD32(R(15)+12);
  fp_arith(c,2,4,3);
  R(2)=LD32(R(15)+20);
  fp_ld(c,2,R(1));
  fp_arith(c,0,2,4);
  fp_st(c,2,R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(1)=LD32(R(15)+12);
  fp_arith(c,2,5,3);
  R(2)=LD32(R(15)+8);
  fp_ld(c,2,R(0)+R(1));
  fp_arith(c,0,2,5);
  fp_st(c,2,R(2));
  R(1)=LD32(R(15)+12);
  R(2)=LD32(R(15)+56);
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(2));
  R(2)=0x8c0686d0u;
  fp_st(c,4,R(13));
  fp_st(c,5,R(11));
  { c->pr=0x8c022e54u; fp_st(c,12,R(10)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c022ec8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c022ec0u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  R(0)=0x20u;
  R(5)+=0x78u;
  R(6)+=0x6cu;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,15);
  fp_st(c,3,R(0)+R(15));
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  fp_mov(c,5,3);
  fp_mov(c,6,3);
  { uint32_t tg=R(3); c->pr=0x8c022e80u; R(4)=R(8); sh4_call(c,tg); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(12);
  if(!c->t) goto L8c022dd8;
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022e8c:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01f000u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c022e98u; R(4)=LD32(R(15)+12); f_8c01f000(c); }
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022ee0:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01e464u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c022eecu; R(4)=LD32(R(15)+12); f_8c01e464(c); }
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022ef2:;
  R(4)=LD32(R(15)+8);
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,7,R(4));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,7);
  fp_ld(c,6,R(0)+R(4));
  fp_fmac(c,3,7);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_mov(c,5,3);
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c022f16;
  R(2)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022f16:;
  fp_fsrra(c,5);
  R(14)=LD32(R(15)+8);
  R(0)=0x4u;
  R(6)=R(15);
  fp_ld(c,3,R(14));
  R(5)=R(14);
  R(6)+=0x6cu;
  fp_mov(c,4,5);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c023108u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=LD32(R(15)+20);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  fp_ld(c,15,R(0));
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  R(4)=0x20004200u;
  { c->pr=0x8c022f60u; R(5)+=0x78u; f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c022f6c;
  R(2)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022f6c:;
  R(0)=0x8c023114u;
  R(3)=0x8c023e6au;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  { fp_st(c,3,R(0)+R(4)); goto L8c023e6a; }
L8c022f78:;
  R(4)=LD32(R(15)+8);
  R(0)=0x4u;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,6,R(4));
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,6);
  fp_ld(c,7,R(0)+R(4));
  fp_fmac(c,3,6);
  fp_mov(c,0,7);
  fp_fmac(c,3,7);
  fp_mov(c,5,3);
  fp_cmp(c,1,5,4);
  if(c->t) goto L8c022f9c;
  R(2)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022f9c:;
  fp_fsrra(c,5);
  R(14)=LD32(R(15)+8);
  R(0)=0x4u;
  R(6)=R(15);
  fp_ld(c,3,R(14));
  R(5)=R(14);
  R(6)+=0x6cu;
  fp_mov(c,4,5);
  fp_arith(c,2,3,4);
  fp_st(c,3,R(14));
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c023118u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=LD32(R(15)+20);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  fp_ld(c,15,R(0));
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  R(4)=0x20005400u;
  R(5)=R(15);
  { R(5)+=0x78u; goto L8c0239aa; }
L8c022fe4:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01f3c0u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c022ff0u; R(4)=LD32(R(15)+12); f_8c01f3c0(c); }
  R(3)=0x8c023e6au;
  {  goto L8c023e6a; }
L8c022ff6:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x6cu;
  { c->pr=0x8c023000u; R(4)+=0x78u; f_8c022456(c); }
  R(5)=LD32(R(15)+12);
  R(4)=LD32(R(15)+20);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(3)=0x8c0686d0u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  { c->pr=0x8c023018u; fp_st(c,2,R(4)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023128u;
  fp_ld(c,2,R(0));
  R(0)=0x8c02312cu;
  fp_ld(c,1,R(0));
  R(0)=0x8c023108u;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(14)=0x0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  fp_arith(c,0,15,0);
L8c023032:;
  R(3)=R(15);
  R(3)+=0x78u;
  R(3)+=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x70u;
  R(2)+=R(14);
  R(3)=0x8c0686d0u;
  fp_ld(c,3,R(2));
  { c->pr=0x8c023048u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(14)+=0x4u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  R(3)=0x46fffe00u;
  fp_float(c,3);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  c->fpul=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  c->fr[1]=c->fpul;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,0,3);
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  fp_arith(c,0,0,3);
  fp_st(c,0,R(3));
  R(3)=R(15);
  R(3)+=0x78u;
  R(3)+=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x70u;
  R(2)+=R(14);
  R(3)=0x8c0686d0u;
  fp_ld(c,3,R(2));
  { c->pr=0x8c023080u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(14)+=0x4u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  R(3)=0x46fffe00u;
  fp_float(c,3);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  c->fpul=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  c->fr[1]=c->fpul;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,0,3);
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  fp_arith(c,0,0,3);
  fp_st(c,0,R(3));
  R(3)=R(15);
  R(3)+=0x78u;
  R(3)+=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x70u;
  R(2)+=R(14);
  R(3)=0x8c0686d0u;
  fp_ld(c,3,R(2));
  { c->pr=0x8c0230b8u; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(14)+=0x4u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  R(3)=0x46fffe00u;
  c->t=R(14)>=R(8);
  fp_float(c,3);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  c->fpul=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  c->fr[1]=c->fpul;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,0,3);
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  fp_arith(c,0,0,3);
  { uint32_t k=!c->t; fp_st(c,0,R(3)); if(k) goto L8c023032; }
  fp_ld(c,4,R(15));
  R(6)=R(15);
  R(5)=R(15);
  R(7)=LD32(R(15)+4);
  R(5)+=0x78u;
  fp_mov(c,5,15);
  R(6)+=0x6cu;
  fp_mov(c,6,15);
  { R(4)=0xeu; goto L8c0239aa; }
L8c023140:;
  R(0)=0x18u;
  R(13)=0x8c0c46d0u;
  fp_ld(c,3,R(0)+R(15));
  fp_st(c,3,R(14));
  fp_ld(c,2,R(13));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c023154;
  fp_ld(c,2,R(14));
  fp_st(c,2,R(13));
L8c023154:;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c023160;
  {  goto L8c023e6a; }
L8c023160:;
  R(2)=0x8c0686d0u;
  { c->pr=0x8c023166u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0232acu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0232b0u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_ld(c,0,R(14));
  R(0)=0x80u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,0,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,0,0,3);
  fp_st(c,0,R(13));
  fp_ld(c,0,R(0)+R(15));
  fp_ld(c,2,R(15));
  fp_cmp(c,1,0,2);
  if(!c->t) goto L8c02318e;
  {  goto L8c023e6a; }
L8c02318e:;
  R(2)=0x8c0686d0u;
  { c->pr=0x8c023194u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0232b4u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0232b0u;
  fp_ld(c,1,R(0));
  R(0)=0x8c0232b8u;
  fp_float(c,3);
  R(3)=0x8c0686d0u;
  fp_ld(c,0,R(0));
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,14,3);
  { c->pr=0x8c0231b0u; fp_arith(c,0,14,0); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0232b0u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(0)=0x6cu;
  fp_float(c,3);
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,0);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  { c->pr=0x8c0231ceu; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0232b0u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(0)=0x70u;
  fp_float(c,3);
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,0);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  { c->pr=0x8c0231ecu; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0232bcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0232b0u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,3);
  c->fr[0]=0x3F800000u;
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  R(14)=0x40807u;
  R(0)=0x74u;
  R(5)+=0x78u;
  fp_mov(c,6,14);
  fp_mov(c,5,14);
  R(6)+=0x6cu;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  fp_st(c,3,R(0)+R(15));
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  { uint32_t tg=R(3); c->pr=0x8c02321cu; R(4)=R(14); sh4_call(c,tg); }
  R(0)=0x7cu;
  R(4)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  R(4)+=R(15);
  fp_arith(c,0,3,15);
  fp_st(c,3,R(0)+R(15));
  fp_ld(c,3,R(4));
  fp_arith(c,0,3,15);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c02324c;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x78u;
  R(7)=LD32(R(15)+4);
  R(6)+=0x6cu;
  fp_mov(c,6,14);
  fp_mov(c,4,2);
  fp_mov(c,5,14);
  { c->pr=0x8c02324cu; R(4)=R(14); f_8c01a7e0(c); }
L8c02324c:;
  R(0)=0x8c0232acu;
  R(4)=0x80u;
  fp_ld(c,3,R(0));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x7cu;
  R(4)+=R(15);
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c0232c8u;
  fp_ld(c,1,R(4));
  fp_ld(c,2,R(0));
  fp_arith(c,0,1,2);
  fp_st(c,1,R(4));
  fp_ld(c,0,R(4));
  fp_ld(c,1,R(15));
  fp_cmp(c,1,1,0);
  if(c->t) goto L8c023274;
  {  goto L8c023e6a; }
L8c023274:;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x78u;
  R(7)=LD32(R(15)+4);
  R(6)+=0x6cu;
  fp_mov(c,6,14);
  fp_mov(c,4,1);
  fp_mov(c,5,14);
  { c->pr=0x8c02328au; R(4)=R(14); f_8c01a7e0(c); }
  {  goto L8c023e6a; }
L8c0232e0:;
  R(0)=0x18u;
  R(13)=0x8c0c46d4u;
  fp_ld(c,3,R(0)+R(15));
  fp_st(c,3,R(14));
  fp_ld(c,2,R(13));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0232f4;
  fp_ld(c,2,R(14));
  fp_st(c,2,R(13));
L8c0232f4:;
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(14));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c023300;
  {  goto L8c023e6a; }
L8c023300:;
  R(2)=0x8c0686d0u;
  { c->pr=0x8c023306u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c02342cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c023430u;
  fp_ld(c,1,R(0));
  R(0)=0x8c023434u;
  fp_float(c,3);
  fp_ld(c,0,R(14));
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,0,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,0,0,3);
  fp_st(c,0,R(13));
  fp_ld(c,2,R(15));
  fp_ld(c,4,R(0));
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c02332c;
  fp_st(c,4,R(15));
L8c02332c:;
  R(3)=0x8c0686d0u;
  { c->pr=0x8c023332u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023438u;
  fp_ld(c,2,R(0));
  R(0)=0x8c023430u;
  fp_ld(c,1,R(0));
  R(0)=0x8c02343cu;
  fp_float(c,3);
  R(3)=0x8c0686d0u;
  fp_ld(c,0,R(0));
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,14,3);
  { c->pr=0x8c02334eu; fp_arith(c,0,14,0); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023430u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(0)=0x6cu;
  fp_float(c,3);
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,0);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  { c->pr=0x8c02336cu; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023430u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(0)=0x70u;
  fp_float(c,3);
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,0);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  { c->pr=0x8c02338au; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023430u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,3);
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  R(14)=0x10807u;
  R(0)=0x74u;
  fp_mov(c,6,14);
  R(5)+=0x78u;
  fp_mov(c,5,14);
  R(6)+=0x6cu;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(15));
  R(13)=LD32(R(15)+4);
  fp_ld(c,13,R(15));
  R(7)=R(13);
  fp_mov(c,4,13);
  { uint32_t tg=R(3); c->pr=0x8c0233bcu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x7cu;
  R(3)=0x80u;
  R(5)=R(15);
  R(6)=R(15);
  R(6)+=0x6cu;
  R(3)+=R(15);
  R(7)=R(13);
  R(5)+=0x78u;
  ST32(R(15)+20,R(2));
  fp_ld(c,3,R(2));
  fp_mov(c,6,14);
  fp_arith(c,0,3,15);
  fp_mov(c,4,13);
  fp_mov(c,5,14);
  fp_st(c,3,R(2));
  ST32(R(15)+8,R(3));
  fp_ld(c,3,R(3));
  fp_arith(c,0,3,15);
  fp_st(c,3,R(3));
  R(3)=0x8c01a7e0u;
  { c->pr=0x8c0233eau; R(4)=R(14); f_8c01a7e0(c); }
  R(2)=LD32(R(15)+20);
  R(0)=0x8c02342cu;
  fp_ld(c,3,R(0));
  R(0)=0x8c023448u;
  fp_ld(c,2,R(2));
  R(5)=R(15);
  R(6)=R(15);
  R(6)+=0x6cu;
  fp_arith(c,1,2,3);
  R(5)+=0x78u;
  fp_mov(c,4,13);
  R(7)=R(13);
  fp_mov(c,5,14);
  fp_mov(c,6,14);
  fp_st(c,2,R(2));
  R(3)=LD32(R(15)+8);
  fp_ld(c,2,R(0));
  fp_ld(c,1,R(3));
  fp_arith(c,0,1,2);
  fp_st(c,1,R(3));
  { R(4)=R(14); goto L8c0239aa; }
L8c023460:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01f706u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c02346cu; R(4)=LD32(R(15)+12); f_8c01f706(c); }
  {  goto L8c023e6a; }
L8c023470:;
  R(0)=0x8c0235e4u;
  fp_ld(c,13,R(0));
  R(0)=0x8c0235e8u;
  fp_ld(c,14,R(0));
  R(0)=0x8c0235ecu;
  fp_ld(c,15,R(0));
  R(14)=0x0u;
L8c02347e:;
  R(3)=R(15);
  R(3)+=0x78u;
  R(3)+=R(14);
  fp_mov(c,0,15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(12)=LD32(R(15)+16);
  R(13)=LD32(R(15)+12);
  R(0)=R(12);
  fp_ld(c,3,R(0)+R(14));
  R(0)=R(13);
  fp_ld(c,2,R(0)+R(14));
  R(3)=0x8c0686d0u;
  fp_fmac(c,3,2);
  { c->pr=0x8c02349cu; R(15)-=fp_sz(c);fp_st(c,3,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(3)=0x46fffe00u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  c->fpul=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,2);
  fp_arith(c,0,1,3);
  fp_arith(c,0,1,14);
  fp_st(c,1,R(3));
  R(3)=R(15);
  R(3)+=0x6cu;
  R(3)+=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0686d0u;
  { c->pr=0x8c0234c2u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(14)+=0x4u;
  R(3)=0x46fffe00u;
  R(0)=R(14);
  c->fr[2]=0x3F800000u;
  fp_float(c,3);
  c->fpul=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_mov(c,0,15);
  c->fr[1]=c->fpul;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,13);
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(3)+=0x78u;
  R(3)+=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,2,R(0)+R(12));
  R(3)=0x8c0686d0u;
  fp_fmac(c,2,3);
  { c->pr=0x8c0234f2u; R(15)-=fp_sz(c);fp_st(c,2,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(3)=0x46fffe00u;
  fp_float(c,3);
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,2);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,14);
  fp_st(c,2,R(3));
  R(3)=R(15);
  R(3)+=0x6cu;
  R(3)+=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0686d0u;
  { c->pr=0x8c023518u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(14)+=0x4u;
  R(3)=0x46fffe00u;
  R(0)=R(14);
  c->fr[2]=0x3F800000u;
  fp_float(c,3);
  c->fpul=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_mov(c,0,15);
  c->fr[1]=c->fpul;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,13);
  fp_st(c,3,R(3));
  R(3)=R(15);
  R(3)+=0x78u;
  R(3)+=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  fp_ld(c,3,R(0)+R(13));
  fp_ld(c,2,R(0)+R(12));
  R(3)=0x8c0686d0u;
  fp_fmac(c,2,3);
  { c->pr=0x8c023548u; R(15)-=fp_sz(c);fp_st(c,2,R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(3)=0x46fffe00u;
  fp_float(c,3);
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,2,3,15);
  fp_arith(c,3,3,2);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,14);
  fp_st(c,2,R(3));
  R(3)=R(15);
  R(3)+=0x6cu;
  R(3)+=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0686d0u;
  { c->pr=0x8c02356eu;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(14)+=0x4u;
  R(3)=0x46fffe00u;
  c->t=R(14)>=R(8);
  c->fr[2]=0x3F800000u;
  fp_float(c,3);
  c->fpul=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  c->fr[1]=c->fpul;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,13);
  { uint32_t k=c->t; fp_st(c,3,R(3)); if(k) goto L8c02358e; }
  {  goto L8c02347e; }
L8c02358e:;
  R(3)=0x8c0686d0u;
  { c->pr=0x8c023594u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0235f8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0235f4u;
  fp_ld(c,1,R(0));
  R(0)=0x8c0235fcu;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(0)=0x8c023600u;
  R(6)=R(15);
  fp_ld(c,4,R(0));
  R(5)=R(15);
  R(4)=0x87007u;
  R(6)+=0x6cu;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  fp_arith(c,0,15,0);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { R(5)+=0x78u; goto L8c0239aa; }
L8c023620:;
  R(1)=0x8c0686d0u;
  { c->pr=0x8c023626u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023708u;
  fp_ld(c,2,R(0));
  R(0)=0x8c02370cu;
  fp_ld(c,1,R(0));
  R(0)=0x8c023710u;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(4)=0x4500u;
  R(5)=R(15);
  fp_ld(c,4,R(15));
  R(6)=0x0u;
  R(7)=LD32(R(15)+4);
  R(3)=0x8c01a7e0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  fp_arith(c,0,15,0);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { c->pr=0x8c023652u; R(5)+=0x78u; f_8c01a7e0(c); }
  fp_ld(c,3,R(15));
  R(10)=R(15);
  R(11)=R(15);
  R(13)=R(15);
  fp_ftrc(c,3);
  R(11)+=0x6cu;
  R(10)+=0x70u;
  R(14)=c->fpul;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)+=0x74u; if(k) goto L8c02366c; }
  {  goto L8c023e6a; }
L8c02366c:;
  R(0)=0x8c023718u;
  fp_ld(c,12,R(0));
L8c023670:;
  R(3)=0x8c0686d0u;
  { c->pr=0x8c023676u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c02370cu;
  fp_ld(c,2,R(0));
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  { c->pr=0x8c02368au; fp_st(c,3,R(11)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c02370cu;
  fp_ld(c,2,R(0));
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  { c->pr=0x8c02369eu; fp_st(c,3,R(10)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c02370cu;
  fp_ld(c,2,R(0));
  R(0)=0x8c02371cu;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,1);
  { c->pr=0x8c0236b6u; fp_st(c,3,R(13)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023720u;
  fp_ld(c,2,R(0));
  R(0)=0x8c02370cu;
  fp_ld(c,1,R(0));
  R(0)=0x8c023724u;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x78u;
  fp_ld(c,4,R(15));
  R(6)+=0x6cu;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  fp_arith(c,0,15,0);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { uint32_t tg=R(3); c->pr=0x8c0236e4u; R(4)=R(12); sh4_call(c,tg); }
  R(14)-=1;c->t=R(14)==0;
  if(!c->t) goto L8c023670;
  {  goto L8c023e6a; }
L8c023740:;
  R(0)=0x18u;
  R(4)=0x8c0c46d8u;
  fp_ld(c,3,R(0)+R(15));
  fp_st(c,3,R(14));
  fp_ld(c,2,R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c023754;
  fp_ld(c,2,R(14));
  fp_st(c,2,R(4));
L8c023754:;
  fp_ld(c,3,R(4));
  fp_ld(c,4,R(14));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c023760;
  {  goto L8c023e6a; }
L8c023760:;
  R(0)=0x8c023848u;
  R(3)=0x8c0686d0u;
  fp_ld(c,3,R(0));
  fp_arith(c,0,4,3);
  { c->pr=0x8c02376cu; fp_st(c,4,R(4)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023850u;
  fp_ld(c,2,R(0));
  R(0)=0x6cu;
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  { c->pr=0x8c023782u; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023850u;
  fp_ld(c,2,R(0));
  R(0)=0x70u;
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,13);
  { c->pr=0x8c023798u; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023854u;
  fp_ld(c,2,R(0));
  R(0)=0x8c023850u;
  fp_ld(c,1,R(0));
  R(0)=0x74u;
  fp_float(c,3);
  c->fr[0]=0x00000000u;
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  { c->pr=0x8c0237b4u; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023858u;
  fp_ld(c,2,R(0));
  R(0)=0x8c023850u;
  fp_ld(c,1,R(0));
  R(0)=0x8c02385cu;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  fp_ld(c,4,R(15));
  R(6)=R(15);
  R(7)=LD32(R(15)+4);
  R(5)=R(15);
  R(4)=0x1008u;
  R(6)+=0x6cu;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  fp_arith(c,0,15,0);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { R(5)+=0x78u; goto L8c0239aa; }
L8c0237e0:;
  R(1)=0x8c0686d0u;
  { c->pr=0x8c0237e6u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c023850u;
  fp_ld(c,1,R(0));
  R(0)=0x4u;
  fp_float(c,3);
  fp_ld(c,0,R(15));
  R(3)=LD32(R(15)+8);
  c->fr[6]=0x3F800000u;
  fp_arith(c,0,6,6);
  c->fr[5]=0x3F800000u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,4,3);
  fp_arith(c,1,4,0);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x78u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x78u;
  fp_arith(c,1,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x7cu;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,0,R(3));
  fp_fmac(c,3,4);
  fp_st(c,3,R(0)+R(15));
  R(7)=LD32(R(15)+4);
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  fp_arith(c,0,5,5);
  R(4)=0x3000u;
  R(5)=R(15);
  R(6)=0x0u;
  { R(5)+=0x78u; goto L8c0239aa; }
L8c023860:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01ee20u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c02386cu; R(4)=LD32(R(15)+12); f_8c01ee20(c); }
  {  goto L8c023e6a; }
L8c023870:;
  R(0)=0x8c0238a4u;
  R(2)=LD32(R(15)+8);
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_ld(c,15,R(0)+R(2));
  R(0)=0x8c0238a8u;
  fp_ld(c,4,R(0));
  R(5)=R(15);
  fp_arith(c,2,15,3);
  R(4)=0x8001100u;
  R(7)=LD32(R(15)+4);
  R(6)=0x0u;
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  { R(5)+=0x78u; goto L8c023b72; }
L8c0238c0:;
  R(2)=0x8c0686d0u;
  { c->pr=0x8c0238c6u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0239c8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0239ccu;
  fp_ld(c,1,R(0));
  R(0)=0x8c0239d0u;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(2)=0x8c0686d0u;
  R(3)=0x8c129af0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  { c->pr=0x8c0238e4u; fp_st(c,3,R(3)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0239d8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0239ccu;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  R(3)=0x8c0686d0u;
  fp_mov(c,0,15);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_mov(c,15,3);
  { c->pr=0x8c0238feu; fp_arith(c,0,15,0); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0239ccu;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(0)=0x78u;
  fp_float(c,3);
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,0);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x78u;
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  fp_arith(c,0,2,3);
  { c->pr=0x8c023922u; fp_st(c,2,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0239ccu;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,1,R(0));
  R(0)=0x7cu;
  fp_float(c,3);
  c->fr[0]=0x3F800000u;
  fp_unary(c,0,0);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x7cu;
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  fp_arith(c,0,2,3);
  { c->pr=0x8c023946u; fp_st(c,2,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0239dcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0239ccu;
  fp_ld(c,1,R(0));
  R(0)=0x8c0239e0u;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(3)=0x8c0686d0u;
  R(0)=0x6cu;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  { c->pr=0x8c023964u; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0239dcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0239ccu;
  fp_ld(c,1,R(0));
  R(0)=0x8c0239e0u;
  fp_float(c,3);
  fp_ld(c,0,R(0));
  R(3)=0x8c0686d0u;
  R(0)=0x70u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,0);
  { c->pr=0x8c023982u; fp_st(c,3,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c0239ccu;
  c->fr[2]=0x3F800000u;
  R(6)=R(15);
  fp_ld(c,1,R(0));
  R(0)=0x74u;
  fp_float(c,3);
  R(4)=0x103u;
  R(5)=R(15);
  R(5)+=0x78u;
  fp_mov(c,6,15);
  R(6)+=0x6cu;
  fp_mov(c,5,15);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,0,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c0239e4u;
  fp_ld(c,4,R(0));
  R(7)=LD32(R(15)+4);
L8c0239aa:;
  R(3)=0x8c01a7e0u;
  { c->pr=0x8c0239b0u;  f_8c01a7e0(c); }
  {  goto L8c023e6a; }
L8c023a00:;
  fp_ld(c,4,R(15));
  R(0)=0x8c023ac4u;
  fp_mov(c,3,15);
  R(4)=0x9u;
  fp_mov(c,15,4);
  fp_arith(c,2,15,3);
  fp_ld(c,3,R(0));
  R(0)=0x8c023ac8u;
  fp_mov(c,13,4);
  c->t=(R(4)&R(4))==0;
  fp_arith(c,2,13,3);
  fp_ld(c,2,R(0));
  fp_mov(c,14,4);
  R(14)=R(4);
  { uint32_t k=!c->t; fp_arith(c,2,14,2); if(k) goto L8c023a24; }
  {  goto L8c023e6a; }
L8c023a24:;
  R(12)=0x2501u;
L8c023a26:;
  R(3)=0x8c0686d0u;
  { c->pr=0x8c023a2cu;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x2cu;
  fp_mov(c,2,12);
  fp_arith(c,0,2,12);
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c023ad0u;
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0));
  fp_arith(c,3,3,2);
  fp_arith(c,1,3,12);
  { c->pr=0x8c023a48u; fp_st(c,3,R(13)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8c023ad0u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,1);
  fp_arith(c,1,3,12);
  { c->pr=0x8c023a60u; fp_st(c,3,R(11)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023ad0u;
  fp_mov(c,2,13);
  fp_arith(c,0,2,15);
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0));
  fp_arith(c,3,3,2);
  fp_arith(c,1,3,15);
  { c->pr=0x8c023a78u; fp_st(c,3,R(10)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023ad0u;
  fp_mov(c,2,15);
  fp_arith(c,1,2,14);
  R(6)=R(15);
  R(3)=0x8c01a7e0u;
  fp_float(c,3);
  R(5)=R(15);
  R(5)+=0x78u;
  R(6)+=0x6cu;
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0));
  R(0)=0x1cu;
  fp_arith(c,3,3,2);
  fp_arith(c,0,3,14);
  fp_st(c,3,R(0)+R(15));
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  fp_mov(c,5,3);
  fp_mov(c,6,3);
  { uint32_t tg=R(3); c->pr=0x8c023aa4u; R(4)=R(12); sh4_call(c,tg); }
  R(14)-=1;c->t=R(14)==0;
  if(!c->t) goto L8c023a26;
  {  goto L8c023e6a; }
L8c023ae0:;
  R(0)=0x8c023ba4u;
  R(2)=0x8c129af0u;
  fp_ld(c,3,R(0));
  R(0)=0x8c023bacu;
  R(1)=0x8c01a7e0u;
  R(5)=R(15);
  fp_st(c,3,R(2));
  R(6)=0x0u;
  fp_ld(c,15,R(15));
  fp_ld(c,3,R(0));
  R(0)=0x8c023bb0u;
  fp_ld(c,4,R(0));
  fp_arith(c,2,15,3);
  R(4)=0x100u;
  R(7)=LD32(R(15)+4);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { uint32_t tg=R(1); c->pr=0x8c023b06u; R(5)+=0x78u; sh4_call(c,tg); }
  R(3)=0x8c0686d0u;
  { c->pr=0x8c023b0cu;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023bbcu;
  fp_mov(c,14,12);
  fp_arith(c,0,14,12);
  fp_ld(c,2,R(0));
  R(0)=0x78u;
  fp_float(c,3);
  fp_ld(c,1,R(0)+R(15));
  R(3)=0x8c0686d0u;
  R(0)=0x78u;
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,1,3,12);
  fp_arith(c,0,1,3);
  { c->pr=0x8c023b2cu; fp_st(c,1,R(0)+R(15)); f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023bbcu;
  fp_ld(c,2,R(0));
  R(0)=0x7cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x7cu;
  fp_float(c,3);
  R(3)=0x8c129af0u;
  R(4)=0x100u;
  R(5)=R(15);
  R(6)=0x0u;
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,2);
  fp_arith(c,1,3,12);
  fp_arith(c,0,1,3);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x8c023bc0u;
  fp_ld(c,3,R(0));
  R(0)=0x8c023bb0u;
  fp_st(c,3,R(3));
  fp_ld(c,4,R(0));
  R(7)=LD32(R(15)+4);
  { R(5)+=0x78u; goto L8c023b72; }
L8c023b60:;
  R(0)=0x8c023bb0u;
  fp_ld(c,6,R(15));
  R(4)=0x6400u;
  R(5)=R(15);
  fp_ld(c,4,R(0));
  R(5)+=0x78u;
  R(7)=LD32(R(15)+4);
  R(6)=0x0u;
  fp_mov(c,5,6);
L8c023b72:;
  R(2)=0x8c01a7e0u;
  { c->pr=0x8c023b78u;  f_8c01a7e0(c); }
  {  goto L8c023e6a; }
L8c023b7c:;
  R(0)=0x8c023bc4u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c023be0;
  R(0)=0x28u;
  R(4)=0x10002400u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8c023bc8u;
  fp_ld(c,4,R(0));
  R(5)=R(15);
  R(7)=LD32(R(15)+4);
  R(6)=0x0u;
  fp_mov(c,5,6);
  { R(5)+=0x78u; goto L8c023bfa; }
L8c023be0:;
  R(0)=0x8c023c84u;
  fp_mov(c,15,2);
  fp_ld(c,1,R(0));
  R(0)=0x8c023c88u;
  fp_ld(c,4,R(0));
  R(5)=R(15);
  fp_arith(c,2,15,1);
  R(7)=LD32(R(15)+4);
  R(4)=0x10003400u;
  R(5)+=0x78u;
  R(6)=0x0u;
  fp_mov(c,6,15);
  fp_mov(c,5,15);
L8c023bfa:;
  R(2)=0x8c01a7e0u;
  { c->pr=0x8c023c00u;  f_8c01a7e0(c); }
  {  goto L8c023e6a; }
L8c023c04:;
  R(0)=0x28u;
  R(4)=0x5a00u;
  R(2)=0x8c01a7e0u;
  R(6)=0x0u;
  R(7)=LD32(R(15)+4);
  R(5)=R(15);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x8c023c94u;
  fp_ld(c,4,R(0));
  fp_mov(c,5,0);
  fp_mov(c,6,0);
  { c->pr=0x8c023c1eu; R(5)+=0x78u; f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c023c28;
  {  goto L8c023e6a; }
L8c023c28:;
  R(0)=0x8c023c98u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  { fp_st(c,3,R(0)+R(4)); goto L8c023e6a; }
L8c023c32:;
  R(5)=R(7);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(4)=0x8c130bf8u;
  R(1)=0x8c0c4640u;
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(5)=LD32(R(15)+20);
  R(4)=0x8c130c04u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(2)=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(2));
  fp_ld(c,2,R(5));
  fp_st(c,2,R(4));
  R(2)=LD32(R(15)+4);
  ST32(R(1),R(2));
  {  goto L8c023e6a; }
L8c023cc0:;
  R(0)=0x8c023d40u;
  R(2)=0x8c01a7e0u;
  fp_ld(c,4,R(0));
  R(5)=R(15);
  R(4)=0x50005000u;
  R(6)=0x0u;
  R(7)=LD32(R(15)+4);
  c->fr[6]=0x3F800000u;
  c->fr[5]=0x3F800000u;
  { c->pr=0x8c023cd6u; R(5)+=0x78u; f_8c01a7e0(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c023ce0;
  {  goto L8c023e6a; }
L8c023ce0:;
  R(4)=0x0u;
L8c023ce2:;
  R(2)=R(15);
  R(2)+=0x6cu;
  R(3)=R(5);
  R(2)+=R(4);
  fp_ld(c,3,R(2));
  R(3)+=0x10u;
  R(2)=R(15);
  R(3)+=R(4);
  R(2)+=0x6cu;
  fp_st(c,3,R(3));
  R(4)+=0x4u;
  R(3)=R(5);
  R(2)+=R(4);
  fp_ld(c,3,R(2));
  R(3)+=0x10u;
  R(3)+=R(4);
  R(2)=R(15);
  fp_st(c,3,R(3));
  R(2)+=0x6cu;
  R(3)=R(5);
  R(4)+=0x4u;
  R(2)+=R(4);
  R(3)+=0x10u;
  fp_ld(c,3,R(2));
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(3));
  c->t=R(4)>=R(8);
  if(!c->t) goto L8c023ce2;
  {  goto L8c023e6a; }
L8c023d20:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01e972u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c023d2cu; R(4)=LD32(R(15)+12); f_8c01e972(c); }
  {  goto L8c023e6a; }
L8c023d60:;
  fp_ld(c,3,R(11));
  R(12)=R(15);
  fp_ld(c,15,R(13));
  fp_ftrc(c,3);
  R(2)=c->fpul;
  R(11)=R(2);
  R(11)+=0x1u;
  c->t=(R(11)&R(11))==0;
  { uint32_t k=!c->t; R(12)+=0x78u; if(k) goto L8c023d78; }
  {  goto L8c023e6a; }
L8c023d78:;
  R(10)=0x3003u;
L8c023d7a:;
  R(14)=R(13);
  c->t=R(14)>=R(12);
  if(c->t) goto L8c023dce;
L8c023d80:;
  R(2)=0x8c0686d0u;
  { c->pr=0x8c023d86u;  f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x10u;
  fp_ld(c,13,R(0)+R(15));
  R(0)=0x8c023e28u;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_ld(c,14,R(15));
  R(3)=0x8c0686d0u;
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,2);
  fp_arith(c,1,3,14);
  fp_st(c,3,R(14));
  { c->pr=0x8c023da2u; R(14)+=0x4u; f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023e28u;
  fp_ld(c,2,R(0));
  R(3)=0x8c0686d0u;
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,2);
  fp_arith(c,1,3,14);
  fp_st(c,3,R(14));
  { c->pr=0x8c023db8u; R(14)+=0x4u; f_8c0686d0(c); }
  c->fpul=R(0);
  R(0)=0x8c023e28u;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,2);
  fp_arith(c,1,3,14);
  fp_st(c,3,R(14));
  R(14)+=0x4u;
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c023d80;
L8c023dce:;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x78u;
  R(7)=LD32(R(15)+4);
  R(6)+=0x6cu;
  fp_mov(c,6,15);
  c->fr[4]=0x3F800000u;
  fp_mov(c,5,15);
  { c->pr=0x8c023de4u; R(4)=R(10); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c023dec;
  ST32(R(4)+4,R(9));
L8c023dec:;
  R(11)-=1;c->t=R(11)==0;
  if(!c->t) goto L8c023d7a;
  {  goto L8c023e6a; }
L8c023df4:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01eb80u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c023e00u; R(4)=LD32(R(15)+12); f_8c01eb80(c); }
  {  goto L8c023e6a; }
L8c023e04:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01ecd4u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c023e10u; R(4)=LD32(R(15)+12); f_8c01ecd4(c); }
  {  goto L8c023e6a; }
L8c023e40:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c01f560u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c023e4cu; R(4)=LD32(R(15)+12); f_8c01f560(c); }
  {  goto L8c023e6a; }
L8c023e50:;
  R(5)=LD32(R(15)+8);
  R(2)=0x8c022040u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c023e5cu; R(4)=LD32(R(15)+12); f_8c022040(c); }
  {  goto L8c023e6a; }
L8c023e60:;
  R(6)=LD32(R(15)+8);
  R(7)=LD32(R(15)+4);
  fp_ld(c,4,R(15));
  { c->pr=0x8c023e6au; R(5)=LD32(R(15)+12); f_8c023ec0(c); }
L8c023e6a:;
  R(1)=0x84u;
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
void f_8c023ec0(SH4Ctx *c) {
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
  R(15)+=0xffffffccu;
  R(3)=0x8c129af0u;
  c->fr[3]=0x3F800000u;
  ST32(R(15)+12,R(5));
  R(5)=R(15);
  ST32(R(15)+8,R(6));
  R(5)+=0x28u;
  ST32(R(15)+4,R(7));
  R(7)=0x6u;
  fp_st(c,4,R(15));
  fp_st(c,3,R(3));
  R(6)=LD32(R(15)+12);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(6));
  R(6)=R(15);
  R(6)+=0x1cu;
  fp_st(c,2,R(5));
  R(5)=LD32(R(15)+8);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(6));
  R(6)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  R(2)=R(6);
  R(6)+=0x4u;
  fp_st(c,3,R(2));
  fp_ld(c,2,R(5));
  fp_st(c,2,R(6));
  R(6)=0x8c0c4678u;
  R(0)=0x8c024010u;
  R(2)=0x8c0c4650u;
  fp_ld(c,13,R(0));
  R(0)=0x8c024014u;
  fp_ld(c,14,R(0));
  R(0)=0x8c02401cu;
  fp_ld(c,15,R(0));
  R(0)=R(15);
  R(0)+=0x24u;
  R(11)=R(15);
  ST32(R(15)+20,R(0));
  R(0)=R(15);
  R(0)+=0x28u;
  R(14)=0x8c0686d0u;
  ST32(R(15)+16,R(0));
  R(9)=R(15);
  R(0)=LD32(R(2));
  R(10)=0xcu;
  fp_ld(c,3,R(15));
  R(5)=0x3u;
  ST32(R(15)+24,R(0));
  R(0)=R(4);
  R(12)=0x8c03aedau;
  c->t=(int32_t)R(0)==68;
  R(8)=0x0u;
  fp_mov(c,12,3);
  R(11)+=0x1cu;
  R(9)+=0x20u;
  R(13)=0x1u;
  { uint32_t k=!c->t; fp_arith(c,0,12,3); if(k) goto L8c023f5c; }
  {  goto L8c024300; }
L8c023f5c:;
  c->t=(int32_t)R(0)==69;
  if(!c->t) goto L8c023f64;
  {  goto L8c0243c0; }
L8c023f64:;
  c->t=(int32_t)R(0)==71;
  if(!c->t) goto L8c023f6c;
  {  goto L8c0244e0; }
L8c023f6c:;
  c->t=(int32_t)R(0)==72;
  if(!c->t) goto L8c023f74;
  {  goto L8c024554; }
L8c023f74:;
  c->t=(int32_t)R(0)==83;
  if(!c->t) goto L8c023f7c;
  {  goto L8c0245c0; }
L8c023f7c:;
  c->t=(int32_t)R(0)==99;
  if(!c->t) goto L8c023f84;
  {  goto L8c0245d0; }
L8c023f84:;
  c->t=(int32_t)R(0)==100;
  if(!c->t) goto L8c023f8e;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c023f8e:;
  c->t=(int32_t)R(0)==101;
  if(!c->t) goto L8c023f98;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c023f98:;
  c->t=(int32_t)R(0)==102;
  if(!c->t) goto L8c023fa2;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c023fa2:;
  c->t=(int32_t)R(0)==103;
  if(!c->t) goto L8c023fac;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c023fac:;
  c->t=(int32_t)R(0)==104;
  if(!c->t) goto L8c023fb4;
  {  goto L8c0246e0; }
L8c023fb4:;
  c->t=(int32_t)R(0)==105;
  if(!c->t) goto L8c023fbc;
  {  goto L8c0246f0; }
L8c023fbc:;
  c->t=(int32_t)R(0)==110;
  if(!c->t) goto L8c023fc4;
  {  goto L8c024764; }
L8c023fc4:;
  c->t=(int32_t)R(0)==111;
  if(!c->t) goto L8c023fcc;
  {  goto L8c0247c0; }
L8c023fcc:;
  c->t=(int32_t)R(0)==120;
  if(!c->t) goto L8c023fd4;
  {  goto L8c0247e8; }
L8c023fd4:;
  c->t=(int32_t)R(0)==125;
  if(!c->t) goto L8c023fdc;
  {  goto L8c024800; }
L8c023fdc:;
  R(1)=0x84u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c023fe6;
  {  goto L8c024814; }
L8c023fe6:;
  R(1)=0x97u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c023ff0;
  {  goto L8c024992; }
L8c023ff0:;
  {  goto L8c024040; }
L8c024040:;
  R(1)=0x9bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02404a;
  {  goto L8c024a40; }
L8c02404a:;
  R(1)=0x9cu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024054;
  {  goto L8c024abc; }
L8c024054:;
  R(1)=0x9du;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02405e;
  {  goto L8c024ae0; }
L8c02405e:;
  R(1)=0x9eu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024068;
  {  goto L8c024b20; }
L8c024068:;
  R(1)=0xa3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024072;
  {  goto L8c024b30; }
L8c024072:;
  R(1)=0xa7u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02407c;
  {  goto L8c024ce0; }
L8c02407c:;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024086;
  {  goto L8c024cf2; }
L8c024086:;
  R(1)=0xabu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024090;
  {  goto L8c024d02; }
L8c024090:;
  R(1)=0xc8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02409a;
  {  goto L8c024d0e; }
L8c02409a:;
  R(1)=0x104u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240a6;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c0240a6:;
  R(1)=0x105u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240b2;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c0240b2:;
  R(1)=0x12cu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240be;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c0240be:;
  R(1)=0x15eu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240c8;
  {  goto L8c024d1a; }
L8c0240c8:;
  R(1)=0x15fu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240d2;
  {  goto L8c024d2a; }
L8c0240d2:;
  R(1)=0x160u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240dc;
  {  goto L8c024d3a; }
L8c0240dc:;
  R(1)=0x163u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240e6;
  {  goto L8c024d4a; }
L8c0240e6:;
  R(1)=0x164u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240f0;
  {  goto L8c024d5a; }
L8c0240f0:;
  R(1)=0x165u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0240fa;
  {  goto L8c024d6a; }
L8c0240fa:;
  R(1)=0x18bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024104;
  {  goto L8c024dc0; }
L8c024104:;
  R(1)=0x18cu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02410e;
  {  goto L8c024dd0; }
L8c02410e:;
  R(1)=0x18du;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02411a;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c02411a:;
  R(1)=0x190u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024124;
  {  goto L8c024de0; }
L8c024124:;
  R(1)=0x198u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02412e;
  {  goto L8c024e04; }
L8c02412e:;
  R(1)=0x199u;
  c->t=R(0)==R(1);
  {  goto L8c024180; }
L8c024180:;
  if(!c->t) goto L8c024186;
  {  goto L8c024e40; }
L8c024186:;
  R(1)=0x19au;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024190;
  {  goto L8c024eb6; }
L8c024190:;
  R(1)=0x19bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02419a;
  {  goto L8c024ebc; }
L8c02419a:;
  R(1)=0x19cu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241a4;
  {  goto L8c024f00; }
L8c0241a4:;
  R(1)=0x1acu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241ae;
  {  goto L8c024f4c; }
L8c0241ae:;
  R(1)=0x1adu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241b8;
  {  goto L8c024f5c; }
L8c0241b8:;
  R(1)=0x1b0u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241c2;
  {  goto L8c024f72; }
L8c0241c2:;
  R(1)=0x1b1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241ce;
  R(1)=0x8c025018u;
  {  goto L8c025018; }
L8c0241ce:;
  R(1)=0x1b8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241da;
  R(1)=0x8c0250e0u;
  {  goto L8c0250e0; }
L8c0241da:;
  R(1)=0x1c2u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241e6;
  R(1)=0x8c0250f0u;
  {  goto L8c0250f0; }
L8c0241e6:;
  R(1)=0x1c3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241f2;
  R(1)=0x8c02510eu;
  {  goto L8c02510e; }
L8c0241f2:;
  R(1)=0x1c4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0241fe;
  R(1)=0x8c02511au;
  {  goto L8c02511a; }
L8c0241fe:;
  R(1)=0x1ccu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02420a;
  R(1)=0x8c02512au;
  {  goto L8c02512a; }
L8c02420a:;
  R(1)=0x1e0u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024216;
  R(1)=0x8c025132u;
  {  goto L8c025132; }
L8c024216:;
  R(1)=0x1e6u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024222;
  R(1)=0x8c025142u;
  {  goto L8c025142; }
L8c024222:;
  R(1)=0x1e9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02422e;
  R(1)=0x8c02514au;
  {  goto L8c02514a; }
L8c02422e:;
  R(1)=0x1eau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02423a;
  R(1)=0x8c02515au;
  {  goto L8c02515a; }
L8c02423a:;
  R(1)=0x1f4u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024246;
  R(1)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c024246:;
  R(1)=0x226u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c024252;
  R(1)=0x8c025166u;
  {  goto L8c025166; }
L8c024252:;
  R(1)=0x227u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c02425e;
  R(1)=0x8c0251c0u;
  {  goto L8c0251c0; }
L8c02425e:;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c024268;
  R(1)=0x8c0251d6u;
  {  goto L8c0251d6; }
L8c024268:;
  R(1)=0x8c0251d6u;
  {  goto L8c0251d6; }
L8c024300:;
  c->t=(R(7)&R(7))==0;
  { uint32_t k=!c->t; R(13)=R(7); if(k) goto L8c02430c; }
  R(0)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c02430c:;
  R(0)=0x8c0243a8u;
  c->fr[14]=0x3F800000u;
  fp_ld(c,12,R(0));
  R(12)=0x3005u;
  fp_unary(c,0,14);
L8c024316:;
  { uint32_t tg=R(14); c->pr=0x8c02431au;  sh4_call(c,tg); }
  c->fpul=R(0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,14);
  { uint32_t tg=R(14); c->pr=0x8c02432cu; fp_st(c,3,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,14);
  fp_st(c,3,R(9));
  R(3)=LD32(R(15)+20);
  { uint32_t tg=R(14); c->pr=0x8c024342u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0243acu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0243b0u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c02435au; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0243b4u;
  fp_ld(c,2,R(0));
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  fp_float(c,3);
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  R(5)+=0x28u;
  R(6)+=0x1cu;
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_mov(c,13,3);
  fp_arith(c,0,13,2);
  fp_mov(c,6,13);
  fp_mov(c,5,13);
  { uint32_t tg=R(3); c->pr=0x8c024380u; R(4)=R(12); sh4_call(c,tg); }
  R(13)-=1;c->t=R(13)==0;
  if(!c->t) goto L8c024316;
  R(3)=0x8c0251eeu;
  {  goto L8c0251ee; }
L8c0243c0:;
  R(1)=0x8c022456u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c0243ccu; R(4)+=0x28u; f_8c022456(c); }
  R(0)=0x8c0244c8u;
  R(2)=0x8c0c4654u;
  R(3)=0x2u;
  R(13)=R(8);
  ST8(R(2),R(3));
  fp_ld(c,13,R(0));
  R(0)=0x8c0244ccu;
  fp_ld(c,14,R(0));
L8c0243dc:;
  R(3)=R(15);
  R(3)+=0x1cu;
  R(3)+=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x2cu;
  R(2)+=R(13);
  fp_ld(c,2,R(2));
  { uint32_t tg=R(14); c->pr=0x8c0243f0u; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(13)+=0x4u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_arith(c,0,1,13);
  fp_st(c,1,R(3));
  R(3)=R(15);
  R(3)+=0x1cu;
  R(3)+=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x2cu;
  R(2)+=R(13);
  fp_ld(c,2,R(2));
  { uint32_t tg=R(14); c->pr=0x8c024418u; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(13)+=0x4u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_arith(c,0,1,13);
  fp_st(c,1,R(3));
  R(3)=R(15);
  R(3)+=0x1cu;
  R(3)+=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x2cu;
  R(2)+=R(13);
  fp_ld(c,2,R(2));
  { uint32_t tg=R(14); c->pr=0x8c024440u; R(15)-=fp_sz(c);fp_st(c,2,R(15)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(13)+=0x4u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  c->t=R(13)>=R(10);
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,1,3);
  fp_arith(c,0,1,13);
  { uint32_t k=!c->t; fp_st(c,1,R(3)); if(k) goto L8c0243dc; }
  R(0)=0x8c0244d0u;
  R(4)=0x50006000u;
  fp_ld(c,15,R(0));
  R(0)=0x8c0244d4u;
  fp_ld(c,4,R(0));
  R(6)=0x0u;
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  R(7)=LD32(R(15)+4);
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  { c->pr=0x8c024472u; R(5)+=0x28u; f_8c01a7e0(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c02447c;
  {  goto L8c0251ee; }
L8c02447c:;
  R(4)=R(8);
L8c02447e:;
  R(2)=R(15);
  R(2)+=0x1cu;
  R(3)=R(5);
  R(2)+=R(4);
  fp_ld(c,3,R(2));
  R(3)+=0x10u;
  R(2)=R(15);
  R(3)+=R(4);
  R(2)+=0x1cu;
  fp_st(c,3,R(3));
  R(4)+=0x4u;
  R(3)=R(5);
  R(2)+=R(4);
  fp_ld(c,3,R(2));
  R(3)+=0x10u;
  R(3)+=R(4);
  R(2)=R(15);
  fp_st(c,3,R(3));
  R(2)+=0x1cu;
  R(3)=R(5);
  R(4)+=0x4u;
  R(2)+=R(4);
  R(3)+=0x10u;
  fp_ld(c,3,R(2));
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(3));
  c->t=R(4)>=R(10);
  if(!c->t) goto L8c02447e;
  {  goto L8c0251ee; }
L8c0244e0:;
  R(1)=0x8c022456u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c0244ecu; R(4)+=0x28u; f_8c022456(c); }
  { uint32_t tg=R(14); c->pr=0x8c0244f0u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c024588u;
  fp_ld(c,4,R(15));
  R(6)=0x0u;
  fp_ld(c,2,R(0));
  R(0)=0x8c02458cu;
  fp_float(c,3);
  R(4)=0x6000u;
  fp_arith(c,2,4,2);
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+4);
  R(5)=R(15);
  fp_mov(c,1,4);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,1);
  fp_arith(c,3,3,15);
  fp_mov(c,15,3);
  fp_arith(c,0,15,4);
  fp_ld(c,4,R(0));
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  { uint32_t tg=R(3); c->pr=0x8c02451eu; R(5)+=0x28u; sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02452c;
  R(0)=0x8c024594u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(4));
L8c02452c:;
  R(3)=0x8c0c4654u;
  R(0)=0x8c024598u;
  fp_ld(c,4,R(0));
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(5)=0x8c0c4658u;
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c024544; }
  fp_ld(c,3,R(5));
  { fp_arith(c,0,3,4); goto L8c024f48; }
L8c024544:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c02454c;
  {  goto L8c0251ee; }
L8c02454c:;
  R(2)=0x8c0c4654u;
  ST8(R(2),R(13));
  { fp_st(c,4,R(5)); goto L8c0251ee; }
L8c024554:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c01e760u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024560u; R(4)=LD32(R(15)+12); f_8c01e760(c); }
  {  goto L8c0251ee; }
L8c0245c0:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c0221a4u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c0245ccu; R(4)=LD32(R(15)+12); f_8c0221a4(c); }
  {  goto L8c0251ee; }
L8c0245d0:;
  { uint32_t tg=R(14); c->pr=0x8c0245d4u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0246a8u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0246acu;
  fp_ld(c,1,R(0));
  R(5)=R(15);
  fp_float(c,3);
  fp_ld(c,4,R(15));
  R(4)=0x4500u;
  R(6)=0x0u;
  R(3)=0x8c01a7e0u;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,12,3);
  fp_arith(c,0,12,1);
  fp_mov(c,6,12);
  fp_mov(c,5,12);
  { c->pr=0x8c0245fcu; R(5)+=0x28u; f_8c01a7e0(c); }
  fp_ld(c,2,R(15));
  R(12)=R(15);
  fp_mov(c,3,14);
  R(10)=R(15);
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  R(11)=R(15);
  R(10)+=0x1cu;
  R(12)+=0x20u;
  fp_ftrc(c,3);
  R(13)=c->fpul;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(11)+=0x24u; if(k) goto L8c02461c; }
  {  goto L8c0251ee; }
L8c02461c:;
  { uint32_t tg=R(14); c->pr=0x8c024620u;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c02462eu; fp_st(c,3,R(10)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,13);
  { uint32_t tg=R(14); c->pr=0x8c02463cu; fp_st(c,2,R(12)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0246b4u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0246b8u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c024652u; fp_st(c,3,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0246bcu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0246c0u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,3);
  R(4)=0x3001u;
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  fp_ld(c,4,R(15));
  R(6)+=0x1cu;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,12,3);
  fp_arith(c,0,12,1);
  fp_mov(c,6,12);
  fp_mov(c,5,12);
  { uint32_t tg=R(3); c->pr=0x8c02467cu; R(5)+=0x28u; sh4_call(c,tg); }
  R(13)-=1;c->t=R(13)==0;
  if(!c->t) goto L8c02461c;
  {  goto L8c0251ee; }
L8c0246e0:;
  R(5)=LD32(R(15)+8);
  R(3)=0x8c022320u;
  fp_ld(c,4,R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0246ecu; R(4)=LD32(R(15)+12); f_8c022320(c); }
  {  goto L8c0251ee; }
L8c0246f0:;
  fp_ld(c,2,R(9));
  fp_ftrc(c,2);
  R(12)=c->fpul;
  R(12)+=0x1u;
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; fp_ld(c,14,R(11)); if(k) goto L8c024702; }
  {  goto L8c0251ee; }
L8c024702:;
  R(10)=0x3e10u;
L8c024704:;
  R(3)=LD32(R(15)+16);
  R(13)=R(11);
  c->t=R(13)>=R(3);
  if(c->t) goto L8c024746;
L8c02470c:;
  { uint32_t tg=R(14); c->pr=0x8c024710u;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_ld(c,13,R(15));
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,1,3,13);
  fp_st(c,3,R(13));
  { uint32_t tg=R(14); c->pr=0x8c024722u; R(13)+=0x4u; sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,1,3,13);
  fp_st(c,3,R(13));
  { uint32_t tg=R(14); c->pr=0x8c024732u; R(13)+=0x4u; sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,12);
  fp_arith(c,3,2,15);
  fp_arith(c,1,2,13);
  fp_st(c,2,R(13));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+16);
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c02470c;
L8c024746:;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x28u;
  R(7)=LD32(R(15)+4);
  R(6)+=0x1cu;
  fp_mov(c,6,14);
  c->fr[4]=0x3F800000u;
  fp_mov(c,5,14);
  { c->pr=0x8c02475cu; R(4)=R(10); f_8c01a7e0(c); }
  R(12)-=1;c->t=R(12)==0;
  if(!c->t) goto L8c024704;
  {  goto L8c0251ee; }
L8c024764:;
  R(6)=R(15);
  R(5)=R(15);
  R(1)=0x8c01a7e0u;
  R(5)+=0x28u;
  R(7)=LD32(R(15)+4);
  R(6)+=0x1cu;
  c->fr[6]=0x3F800000u;
  fp_mov(c,4,3);
  c->fr[5]=0x3F800000u;
  { c->pr=0x8c02477au; R(4)=0x11u; f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c024784;
  {  goto L8c0251ee; }
L8c024784:;
  fp_ld(c,3,R(15));
  R(0)=0x58u;
  { fp_st(c,3,R(0)+R(4)); goto L8c0251ee; }
L8c0247c0:;
  R(6)=R(15);
  R(5)=R(15);
  R(1)=0x8c01a7e0u;
  R(5)+=0x28u;
  R(7)=LD32(R(15)+4);
  R(6)+=0x1cu;
  c->fr[6]=0x3F800000u;
  fp_mov(c,4,3);
  c->fr[5]=0x3F800000u;
  { c->pr=0x8c0247d6u; R(4)=0x15u; f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0247e0;
  {  goto L8c0251ee; }
L8c0247e0:;
  fp_ld(c,3,R(15));
  R(0)=0x58u;
  { fp_st(c,3,R(0)+R(4)); goto L8c0251ee; }
L8c0247e8:;
  R(1)=0x8c0c4640u;
  R(5)=R(15);
  R(3)=0x8c01ad60u;
  R(4)=R(15);
  R(7)=LD32(R(15)+4);
  R(5)+=0x1cu;
  R(6)=LD32(R(1));
  fp_mov(c,4,3);
  { c->pr=0x8c0247fcu; R(4)+=0x28u; f_8c01ad60(c); }
  {  goto L8c0251ee; }
L8c024800:;
  R(5)=R(15);
  R(1)=0x8c01ade6u;
  R(6)=LD32(R(15)+4);
  R(4)=R(15);
  fp_mov(c,4,3);
  R(5)+=0x1cu;
  { c->pr=0x8c024810u; R(4)+=0x28u; f_8c01ade6(c); }
  {  goto L8c0251ee; }
L8c024814:;
  { uint32_t tg=R(14); c->pr=0x8c024818u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0249f0u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0249f4u;
  fp_ld(c,0,R(0));
  R(0)=0x8c024a00u;
  fp_ld(c,4,R(15));
  fp_float(c,3);
  fp_ld(c,1,R(15));
  R(14)=R(15);
  fp_arith(c,2,4,0);
  fp_ld(c,14,R(0));
  fp_arith(c,2,1,2);
  R(9)=0x8c0c46dcu;
  R(0)=0x8c024a04u;
  R(10)=0x8c0c46e0u;
  R(14)+=0x1cu;
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,1);
  fp_arith(c,3,3,15);
  fp_mov(c,15,3);
  fp_arith(c,0,15,4);
  fp_ld(c,3,R(0));
  fp_ld(c,4,R(9));
  { uint32_t tg=R(12); c->pr=0x8c02484cu; fp_arith(c,0,4,3); sh4_call(c,tg); }
  fp_arith(c,2,0,14);
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { uint32_t tg=R(12); c->pr=0x8c024854u; fp_ld(c,4,R(10)); sh4_call(c,tg); }
  fp_arith(c,2,0,14);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(8)=0x8c0c46e4u;
  R(11)=R(15);
  R(11)+=0x20u;
  fp_arith(c,1,3,0);
  fp_st(c,3,R(14));
  { uint32_t tg=R(12); c->pr=0x8c024866u; fp_ld(c,4,R(9)); sh4_call(c,tg); }
  R(0)=0x8c024a04u;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  fp_ld(c,4,R(10));
  fp_ld(c,3,R(0));
  { uint32_t tg=R(12); c->pr=0x8c024872u; fp_arith(c,0,4,3); sh4_call(c,tg); }
  fp_arith(c,2,0,14);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  R(0)=0x8c024a04u;
  fp_mov(c,3,0);
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,4,R(8));
  fp_ld(c,1,R(0));
  { uint32_t tg=R(12); c->pr=0x8c024888u; fp_arith(c,0,4,1); sh4_call(c,tg); }
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_mov(c,3,0);
  fp_mov(c,0,14);
  fp_fmac(c,2,3);
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  { uint32_t tg=R(12); c->pr=0x8c024896u; fp_ld(c,4,R(9)); sh4_call(c,tg); }
  fp_arith(c,2,0,14);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x8c024a04u;
  R(13)=R(15);
  R(13)+=0x24u;
  fp_arith(c,1,3,0);
  fp_st(c,3,R(11));
  fp_ld(c,3,R(0));
  fp_ld(c,4,R(9));
  { uint32_t tg=R(12); c->pr=0x8c0248acu; fp_arith(c,0,4,3); sh4_call(c,tg); }
  fp_arith(c,2,0,14);
  R(0)=0x8c024a04u;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  fp_ld(c,4,R(10));
  fp_ld(c,3,R(0));
  { uint32_t tg=R(12); c->pr=0x8c0248bau; fp_arith(c,0,4,3); sh4_call(c,tg); }
  fp_arith(c,2,0,14);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_arith(c,1,3,0);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  { uint32_t tg=R(12); c->pr=0x8c0248c6u; fp_ld(c,4,R(8)); sh4_call(c,tg); }
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  R(0)=0x8c024a04u;
  fp_mov(c,3,0);
  fp_mov(c,0,14);
  fp_fmac(c,2,3);
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  fp_ld(c,4,R(10));
  fp_ld(c,1,R(0));
  { uint32_t tg=R(12); c->pr=0x8c0248dau; fp_arith(c,0,4,1); sh4_call(c,tg); }
  fp_arith(c,2,0,14);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(4)=0x8c0c4684u;
  R(0)=0x8c024a10u;
  fp_arith(c,1,3,0);
  c->fr[0]=0x3F800000u;
  fp_st(c,3,R(13));
  fp_ld(c,3,R(9));
  fp_ld(c,2,R(4));
  fp_fmac(c,3,2);
  fp_st(c,3,R(9));
  fp_ld(c,2,R(10));
  fp_ld(c,3,R(4));
  fp_ld(c,0,R(0));
  R(0)=0x8c024a14u;
  fp_fmac(c,2,3);
  fp_st(c,2,R(10));
  fp_ld(c,2,R(8));
  fp_ld(c,3,R(4));
  fp_ld(c,0,R(0));
  fp_fmac(c,2,3);
  fp_st(c,2,R(8));
  fp_ld(c,6,R(11));
  fp_ld(c,5,R(14));
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,5);
  fp_ld(c,4,R(13));
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_mov(c,4,3);
  fp_fsrra(c,4);
  fp_mov(c,2,5);
  R(0)=0x8c024a18u;
  R(6)=R(15);
  R(4)=0x20004000u;
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(6)+=0x1cu;
  fp_arith(c,2,2,4);
  fp_mov(c,5,15);
  fp_mov(c,6,15);
  fp_st(c,2,R(14));
  fp_ld(c,3,R(11));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(11));
  fp_ld(c,2,R(13));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(13));
  fp_ld(c,4,R(0));
  R(7)=LD32(R(15)+4);
  { uint32_t tg=R(3); c->pr=0x8c024946u; R(5)+=0x28u; sh4_call(c,tg); }
  R(2)=LD32(R(15)+8);
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(2));
  fp_mov(c,5,15);
  fp_arith(c,0,2,3);
  fp_mov(c,6,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c024a18u;
  fp_ld(c,4,R(14));
  fp_ld(c,3,R(13));
  fp_st(c,3,R(14));
  fp_st(c,4,R(13));
  R(7)=LD32(R(15)+4);
  fp_ld(c,4,R(0));
  R(4)=0x20004000u;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x1cu;
  { R(5)+=0x28u; goto L8c0251e8; }
L8c024992:;
  { uint32_t tg=R(14); c->pr=0x8c024996u;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c024a20u;
  fp_ld(c,2,R(0));
  R(0)=0x8c024a18u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,3);
  R(4)=0x1a003u;
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  fp_ld(c,4,R(15));
  R(6)+=0x1cu;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,15,3);
  fp_arith(c,0,15,1);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { uint32_t tg=R(3); c->pr=0x8c0249c0u; R(5)+=0x28u; sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0249ca;
  {  goto L8c0251ee; }
L8c0249ca:;
  R(0)=0x8c024a28u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  { fp_st(c,3,R(0)+R(4)); goto L8c0251ee; }
L8c024a40:;
  fp_ld(c,2,R(9));
  fp_ftrc(c,2);
  R(10)=c->fpul;
  R(10)+=0x1u;
  c->t=(R(10)&R(10))==0;
  { uint32_t k=!c->t; fp_ld(c,14,R(11)); if(k) goto L8c024a52; }
  {  goto L8c0251ee; }
L8c024a52:;
  R(9)=0x5003u;
L8c024a54:;
  R(3)=LD32(R(15)+16);
  R(12)=R(11);
  c->t=R(12)>=R(3);
  if(c->t) goto L8c024a96;
L8c024a5c:;
  { uint32_t tg=R(14); c->pr=0x8c024a60u;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_ld(c,13,R(15));
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,1,3,13);
  fp_st(c,3,R(12));
  { uint32_t tg=R(14); c->pr=0x8c024a72u; R(12)+=0x4u; sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,12);
  fp_arith(c,3,3,15);
  fp_arith(c,1,3,13);
  fp_st(c,3,R(12));
  { uint32_t tg=R(14); c->pr=0x8c024a82u; R(12)+=0x4u; sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,12);
  fp_arith(c,3,2,15);
  fp_arith(c,1,2,13);
  fp_st(c,2,R(12));
  R(12)+=0x4u;
  R(3)=LD32(R(15)+16);
  c->t=R(12)>=R(3);
  if(!c->t) goto L8c024a5c;
L8c024a96:;
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(5)+=0x28u;
  R(7)=LD32(R(15)+4);
  R(6)+=0x1cu;
  fp_mov(c,6,14);
  c->fr[4]=0x3F800000u;
  fp_mov(c,5,14);
  { c->pr=0x8c024aacu; R(4)=R(9); f_8c01a7e0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c024ab4;
  ST32(R(4)+4,R(13));
L8c024ab4:;
  R(10)-=1;c->t=R(10)==0;
  if(!c->t) goto L8c024a54;
  {  goto L8c0251ee; }
L8c024abc:;
  fp_ld(c,1,R(15));
  R(0)=0x8c024b08u;
  c->fr[2]=0x3F800000u;
  R(5)=R(15);
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,1,2);
  fp_arith(c,0,4,4);
  R(1)=0x8c129af0u;
  R(4)=0x10000u;
  R(6)=0x0u;
  fp_st(c,1,R(15));
  fp_ld(c,3,R(0));
  fp_mov(c,5,1);
  fp_st(c,3,R(1));
  R(7)=LD32(R(15)+4);
  fp_mov(c,6,1);
  { R(5)+=0x28u; goto L8c0251e8; }
L8c024ae0:;
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  R(7)=LD32(R(15)+4);
  R(5)=R(15);
  R(4)=0x10006000u;
  R(6)=0x0u;
  R(1)=0x8c01a7e0u;
  fp_mov(c,5,3);
  fp_mov(c,6,3);
  { c->pr=0x8c024af6u; R(5)+=0x28u; f_8c01a7e0(c); }
  {  goto L8c0251ee; }
L8c024b20:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c01f160u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024b2cu; R(4)=LD32(R(15)+12); f_8c01f160(c); }
  {  goto L8c0251ee; }
L8c024b30:;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  R(11)=0x8c0c4630u;
  R(12)=0x60000000u;
  R(5)=0x8c129af4u;
  fp_cmp(c,0,3,2);
  { uint32_t k=!c->t; R(4)=LD32(R(11)); if(k) goto L8c024bbc; }
  R(0)=0x0u;
  R(10)=R(8);
  c->t=R(4)>R(0);
  { uint32_t k=c->t; R(9)=R(5); if(k) goto L8c024b4e; }
  {  goto L8c024c8e; }
L8c024b4e:;
  R(8)=0x1000000u;
L8c024b50:;
  R(14)=R(9);
  R(0)=LD32(R(14));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)|=R(12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024bae;
  R(2)=0x8c02243au;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x28u;
  { c->pr=0x8c024b6au; R(4)+=0x10u; f_8c02243a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024b86;
  R(2)=0x8c02243au;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x1cu;
  { c->pr=0x8c024b7au; R(4)+=0x1cu; f_8c02243a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024b86;
  R(2)=LD32(R(14));
  R(2)|=R(8);
  { ST32(R(14),R(2)); goto L8c0251ee; }
L8c024b86:;
  R(3)=0x8c02243au;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x1cu;
  { c->pr=0x8c024b92u; R(4)+=0x10u; f_8c02243a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024bae;
  R(3)=0x8c02243au;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x28u;
  { c->pr=0x8c024ba2u; R(4)+=0x1cu; f_8c02243a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024bae;
  R(3)=LD32(R(14));
  R(3)|=R(8);
  { ST32(R(14),R(3)); goto L8c0251ee; }
L8c024bae:;
  R(2)=LD32(R(11));
  R(10)+=0x1u;
  c->t=R(10)>=R(2);
  { uint32_t k=!c->t; R(9)+=0x60u; if(k) goto L8c024b50; }
  {  goto L8c024c8e; }
L8c024bbc:;
  R(1)=0x0u;
  ST32(R(15)+16,R(8));
  c->t=R(4)>R(1);
  { uint32_t k=!c->t; R(9)=R(5); if(k) goto L8c024c2a; }
L8c024bc6:;
  R(14)=R(9);
  R(0)=LD32(R(14));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)|=R(12);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024c1c;
  R(2)=0x8c02243au;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x28u;
  { c->pr=0x8c024be0u; R(4)+=0x10u; f_8c02243a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024bf8;
  R(2)=0x8c02243au;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x1cu;
  { c->pr=0x8c024bf0u; R(4)+=0x1cu; f_8c02243a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024bf8;
  {  goto L8c0251ee; }
L8c024bf8:;
  R(2)=0x8c02243au;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x1cu;
  { c->pr=0x8c024c04u; R(4)+=0x10u; f_8c02243a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024c1c;
  R(2)=0x8c02243au;
  R(5)=R(15);
  R(4)=R(14);
  R(5)+=0x28u;
  { c->pr=0x8c024c14u; R(4)+=0x1cu; f_8c02243a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c024c1c;
  {  goto L8c0251ee; }
L8c024c1c:;
  R(2)=LD32(R(15)+16);
  R(2)+=0x1u;
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(11));
  c->t=R(2)>=R(3);
  { uint32_t k=!c->t; R(9)+=0x60u; if(k) goto L8c024bc6; }
L8c024c2a:;
  R(14)=LD32(R(11));
  R(0)=0x8c024cb8u;
  R(2)=0x8c129af4u;
  R(5)=R(15);
  R(3)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  fp_ld(c,4,R(0));
  R(14)<<=2;
  R(3)=0x8c01a7e0u;
  R(14)<<=2;
  R(7)=LD32(R(15)+4);
  c->t=R(14)>>31;R(14)<<=1;
  c->fr[6]=0x3F800000u;
  R(5)+=0x28u;
  c->fr[5]=0x3F800000u;
  R(6)=0x0u;
  R(14)+=R(2);
  { c->pr=0x8c024c52u; R(4)=R(12); f_8c01a7e0(c); }
  R(4)=R(8);
L8c024c54:;
  R(2)=R(15);
  R(2)+=0x1cu;
  R(3)=R(14);
  R(2)+=R(4);
  fp_ld(c,3,R(2));
  R(3)+=0x10u;
  R(2)=R(15);
  R(3)+=R(4);
  R(2)+=0x1cu;
  fp_st(c,3,R(3));
  R(4)+=0x4u;
  R(3)=R(14);
  R(2)+=R(4);
  fp_ld(c,3,R(2));
  R(3)+=0x10u;
  R(3)+=R(4);
  R(2)=R(15);
  fp_st(c,3,R(3));
  R(2)+=0x1cu;
  R(3)=R(14);
  R(4)+=0x4u;
  R(2)+=R(4);
  R(3)+=0x10u;
  fp_ld(c,3,R(2));
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_st(c,3,R(3));
  c->t=R(4)>=R(10);
  if(!c->t) goto L8c024c54;
L8c024c8e:;
  R(2)=0x8c0c465cu;
  { ST8(R(2),R(13)); goto L8c0251ee; }
L8c024ce0:;
  R(0)=0x8c024d84u;
  R(4)=0x8c0c466cu;
  fp_ld(c,2,R(0));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c024cee;
  { ST8(R(4),R(8)); goto L8c0251ee; }
L8c024cee:;
  { ST8(R(4),R(13)); goto L8c0251ee; }
L8c024cf2:;
  fp_mov(c,4,3);
  fp_ftrc(c,4);
  R(0)=0x8c130c1cu;
  R(4)=LD32(R(15)+4);
  R(1)=c->fpul;
  R(1)<<=2;
  { ST32(R(1)+R(0),R(4)); goto L8c0251ee; }
L8c024d02:;
  R(5)=LD32(R(15)+8);
  fp_mov(c,4,3);
  { c->pr=0x8c024d0au; R(4)=LD32(R(15)+12); f_8c02532c(c); }
  {  goto L8c0251ee; }
L8c024d0e:;
  fp_ftrc(c,3);
  R(0)=0x8c0c947cu;
  R(1)=c->fpul;
  ST32(R(0),R(1));
  {  goto L8c0251ee; }
L8c024d1a:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c01f8f4u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024d26u; R(4)=LD32(R(15)+12); f_8c01f8f4(c); }
  {  goto L8c0251ee; }
L8c024d2a:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c01fae0u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024d36u; R(4)=LD32(R(15)+12); f_8c01fae0(c); }
  {  goto L8c0251ee; }
L8c024d3a:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c01fc80u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024d46u; R(4)=LD32(R(15)+12); f_8c01fc80(c); }
  {  goto L8c0251ee; }
L8c024d4a:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c01fde0u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024d56u; R(4)=LD32(R(15)+12); f_8c01fde0(c); }
  {  goto L8c0251ee; }
L8c024d5a:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c01ff20u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024d66u; R(4)=LD32(R(15)+12); f_8c01ff20(c); }
  {  goto L8c0251ee; }
L8c024d6a:;
  R(0)=0x8c0c4654u;
  R(1)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c024d76;
  {  goto L8c0251ee; }
L8c024d76:;
  R(3)=0x8c0c4654u;
  { ST8(R(3),R(5)); goto L8c0251ee; }
L8c024dc0:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c0200c0u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024dccu; R(4)=LD32(R(15)+12); f_8c0200c0(c); }
  {  goto L8c0251ee; }
L8c024dd0:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c020240u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024ddcu; R(4)=LD32(R(15)+12); f_8c020240(c); }
  {  goto L8c0251ee; }
L8c024de0:;
  R(3)=LD32(R(15)+8);
  fp_ld(c,3,R(15));
  fp_ld(c,4,R(3));
  R(3)=0x4f000000u;
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c024df4;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c024df4:;
  fp_ftrc(c,3);
  R(3)=0x8c027902u;
  R(5)=LD32(R(15)+4);
  R(6)=c->fpul;
  { c->pr=0x8c024e00u; R(4)=LD32(R(15)+24); f_8c027902(c); }
  {  goto L8c0251ee; }
L8c024e04:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c020640u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024e10u; R(4)=LD32(R(15)+12); f_8c020640(c); }
  {  goto L8c0251ee; }
L8c024e40:;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(12)=R(5); if(k) goto L8c024e4a; }
  {  goto L8c0251ee; }
L8c024e4a:;
  R(10)=0x4503u;
L8c024e4c:;
  { uint32_t tg=R(14); c->pr=0x8c024e50u;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c024e5eu; fp_st(c,3,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(9));
  R(3)=LD32(R(15)+20);
  { uint32_t tg=R(14); c->pr=0x8c024e70u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c024e80u; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c024ee4u;
  fp_ld(c,2,R(0));
  R(6)=R(15);
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  fp_float(c,3);
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  R(5)+=0x28u;
  R(6)+=0x1cu;
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,12,3);
  fp_arith(c,0,12,2);
  fp_mov(c,6,12);
  fp_mov(c,5,12);
  { uint32_t tg=R(3); c->pr=0x8c024ea6u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c024eae;
  ST32(R(4)+4,R(13));
L8c024eae:;
  R(12)-=1;c->t=R(12)==0;
  if(!c->t) goto L8c024e4c;
  {  goto L8c0251ee; }
L8c024eb6:;
  R(7)=0x8c0c46e8u;
  { {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);} goto L8c024ec0; }
L8c024ebc:;
  R(7)=0x8c0c46ecu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
L8c024ec0:;
  R(5)=LD32(R(15)+12);
  R(1)=0x8c020ce0u;
  R(6)=LD32(R(15)+8);
  fp_mov(c,4,3);
  { c->pr=0x8c024eccu; R(4)=LD32(R(15)+16); f_8c020ce0(c); }
  { R(15)+=0x4u; goto L8c0251ee; }
L8c024f00:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,0,3,2);
  R(5)=0x8c0c4674u;
  R(4)=0x8c0c4670u;
  if(!c->t) goto L8c024f28;
  R(1)=0x8c0c4674u;
  c->fr[3]=0x3F800000u;
  fp_ld(c,2,R(1));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c024f28;
  R(0)=0x8c024f88u;
  fp_ld(c,3,R(0));
  R(0)=0x8c024f8cu;
  fp_st(c,3,R(4));
  fp_ld(c,3,R(0));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(6)); goto L8c024f46; }
L8c024f28:;
  fp_ld(c,2,R(15));
  c->fr[3]=0x3F800000u;
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c024f36;
  c->fr[1]=0x00000000u;
  { fp_st(c,1,R(4)); goto L8c024f46; }
L8c024f36:;
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,1,1);
  fp_cmp(c,0,2,1);
  if(!c->t) goto L8c024f46;
  c->fr[1]=0x00000000u;
  c->fr[2]=0x00000000u;
  fp_st(c,2,R(4));
  fp_st(c,1,R(5));
L8c024f46:;
  fp_ld(c,3,R(15));
L8c024f48:;
  { fp_st(c,3,R(5)); goto L8c0251ee; }
L8c024f4c:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c02142cu;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c024f58u; R(4)=LD32(R(15)+12); f_8c02142c(c); }
  {  goto L8c0251ee; }
L8c024f5c:;
  R(0)=0x8c0c463cu;
  R(1)=LD32(R(15)+4);
  ST32(R(0),R(1));
  R(0)=0x8c024f98u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  R(3)=LD32(R(15)+12);
  fp_ld(c,2,R(0)+R(3));
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(6)); goto L8c0251ee; }
L8c024f72:;
  { R(12)=R(7); goto L8c025010; }
L8c024fa0:;
  { uint32_t tg=R(14); c->pr=0x8c024fa4u;  sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(14); c->pr=0x8c024fb2u; fp_st(c,3,R(11)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,2);
  fp_arith(c,2,2,14);
  fp_arith(c,3,2,15);
  fp_arith(c,0,2,13);
  fp_st(c,2,R(9));
  R(3)=LD32(R(15)+20);
  { uint32_t tg=R(14); c->pr=0x8c024fc4u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0250a4u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0250a8u;
  fp_ld(c,1,R(0));
  fp_float(c,3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(14); c->pr=0x8c024fdcu; fp_st(c,3,R(2)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c0250acu;
  fp_ld(c,2,R(0));
  R(0)=0x8c0250b0u;
  fp_ld(c,1,R(0));
  R(6)=R(15);
  fp_float(c,3);
  R(4)=0x3001u;
  R(3)=0x8c01a7e0u;
  R(5)=R(15);
  fp_ld(c,4,R(15));
  R(6)+=0x1cu;
  R(7)=LD32(R(15)+4);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,15);
  fp_mov(c,12,3);
  fp_arith(c,0,12,1);
  fp_mov(c,6,12);
  fp_mov(c,5,12);
  { uint32_t tg=R(3); c->pr=0x8c025006u; R(5)+=0x28u; sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)+=0xffffffffu; if(k) goto L8c025010; }
  ST32(R(4)+4,R(13));
L8c025010:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c024fa0;
  {  goto L8c0251ee; }
L8c025018:;
  R(1)=0x8c0c467cu;
  R(0)=0x8c0250b8u;
  fp_ld(c,15,R(0));
  fp_ld(c,4,R(1));
  { uint32_t tg=R(12); c->pr=0x8c025024u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(0)=0x28u;
  fp_mov(c,3,0);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  c->fr[0]=0x3F800000u;
  fp_fmac(c,2,3);
  R(3)=0x8c0c467cu;
  fp_mov(c,0,15);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c0250c0u;
  fp_ld(c,3,R(3));
  fp_ld(c,4,R(0));
  { uint32_t tg=R(12); c->pr=0x8c025040u; fp_fmac(c,4,3); sh4_call(c,tg); }
  R(0)=0x2cu;
  fp_mov(c,3,0);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x2cu;
  c->fr[0]=0x3F800000u;
  R(6)=R(15);
  fp_fmac(c,2,3);
  c->fr[3]=0x00000000u;
  R(4)=0x4003u;
  R(5)=R(15);
  R(3)=0x8c01a7e0u;
  R(6)+=0x1cu;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c0250a8u;
  fp_ld(c,3,R(0));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c0250b0u;
  fp_ld(c,15,R(0));
  fp_ld(c,4,R(15));
  R(7)=LD32(R(15)+4);
  fp_mov(c,6,15);
  fp_mov(c,5,15);
  { uint32_t tg=R(3); c->pr=0x8c02507au; R(5)+=0x28u; sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c025084;
  {  goto L8c0251ee; }
L8c025084:;
  { ST32(R(4)+4,R(13)); goto L8c0251ee; }
L8c0250e0:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c0218a6u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c0250ecu; R(4)=LD32(R(15)+12); f_8c0218a6(c); }
  {  goto L8c0251ee; }
L8c0250f0:;
  R(1)=0x8c058460u;
  { c->pr=0x8c0250f6u; R(4)=0x1u; f_8c058460(c); }
  R(4)=R(0);
  R(4)=LD32(R(4)+32);
  R(0)=0x60u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(4));
  R(2)=0x8c07c8c0u;
  fp_cmp(c,1,2,3);
  R(4)=c->t;
  { c->pr=0x8c02510au;  f_8c07c8c0(c); }
  {  goto L8c0251ee; }
L8c02510e:;
  c->fr[2]=0x3F800000u;
  fp_cmp(c,0,3,2);
  R(4)=0x8c0c5480u;
  if(c->t) goto L8c025122;
  { ST8(R(4),R(8)); goto L8c0251ee; }
L8c02511a:;
  c->fr[2]=0x3F800000u;
  fp_cmp(c,0,3,2);
  R(4)=0x8c0c806du;
  if(!c->t) goto L8c025126;
L8c025122:;
  { ST8(R(4),R(13)); goto L8c0251ee; }
L8c025126:;
  { ST8(R(4),R(8)); goto L8c0251ee; }
L8c02512a:;
  R(0)=0x8c0c4644u;
  R(1)=LD32(R(15)+4);
  {  goto L8c025146; }
L8c025132:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c021a40u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c02513eu; R(4)=LD32(R(15)+12); f_8c021a40(c); }
  {  goto L8c0251ee; }
L8c025142:;
  R(0)=0x8c0c4648u;
  R(1)=LD32(R(15)+4);
L8c025146:;
  { ST32(R(0),R(1)); goto L8c0251ee; }
L8c02514a:;
  R(5)=LD32(R(15)+8);
  R(1)=0x8c021e00u;
  R(6)=LD32(R(15)+4);
  fp_mov(c,4,3);
  { c->pr=0x8c025156u; R(4)=LD32(R(15)+12); f_8c021e00(c); }
  {  goto L8c0251ee; }
L8c02515a:;
  R(1)=0x8c02820eu;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c025162u; R(4)=LD32(R(15)+24); f_8c02820e(c); }
  {  goto L8c0251ee; }
L8c025166:;
  R(0)=0x8c0c5404u;
  R(3)=0x8c130c14u;
  R(1)=LD32(R(0));
  ST32(R(3),R(1));
  R(1)=0x8c0c5408u;
  R(3)=0x8c130c18u;
  R(2)=LD32(R(1));
  { ST32(R(3),R(2)); goto L8c0251ee; }
L8c0251c0:;
  R(0)=0x8c130c14u;
  R(3)=0x8c0c5404u;
  R(1)=LD32(R(0));
  R(0)=0x8c0c540cu;
  ST32(R(3),R(1));
  R(1)=0x8c130c18u;
  R(3)=0x8c0c5408u;
  R(2)=LD32(R(1));
  ST32(R(3),R(2));
  { ST32(R(0),R(13)); goto L8c0251ee; }
L8c0251d6:;
  c->fr[4]=0x3F800000u;
  fp_arith(c,0,4,4);
  R(7)=LD32(R(15)+4);
  R(5)=R(15);
  R(4)=0x4010000u;
  R(5)+=0x28u;
  c->fr[5]=0x3F800000u;
  R(6)=0x0u;
  c->fr[6]=0x3F800000u;
L8c0251e8:;
  R(3)=0x8c01a7e0u;
  { c->pr=0x8c0251eeu;  f_8c01a7e0(c); }
L8c0251ee:;
  R(15)+=0x34u;
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
void f_8c02520a(SH4Ctx *c) {
  R(15)+=0xffffffdcu;
  R(0)=0x4u;
  R(2)=R(15);
  fp_ld(c,3,R(0)+R(4));
  R(2)+=0x18u;
  R(7)=R(15);
  c->fr[4]=0x00000000u;
  fp_unary(c,0,3);
  R(7)+=0xcu;
  fp_st(c,3,R(2));
  R(1)=R(15);
  fp_ld(c,3,R(4));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(2));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_unary(c,0,3);
  fp_st(c,3,R(7));
  fp_st(c,4,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,3,R(4));
  fp_st(c,3,R(0)+R(7));
  fp_st(c,4,R(1));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(1));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,6,R(2));
  fp_ld(c,5,R(0)+R(2));
  R(0)=0x8u;
  fp_mov(c,0,6);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,7,R(0)+R(7));
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_fmac(c,3,6);
  fp_ld(c,5,R(7));
  fp_ld(c,6,R(0)+R(7));
  R(0)=0x4u;
  fp_mov(c,0,5);
  fp_arith(c,0,3,4);
  fp_mov(c,4,3);
  fp_arith(c,0,4,2);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_ld(c,7,R(1));
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_arith(c,0,3,6);
  fp_mov(c,5,3);
  fp_arith(c,0,5,6);
  fp_ld(c,6,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,8,R(0)+R(1));
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_fmac(c,3,7);
  fp_arith(c,0,3,8);
  fp_mov(c,6,3);
  fp_arith(c,0,6,8);
  fp_cmp(c,1,6,4);
  if(!c->t) goto L8c0252a8;
  R(0)=0x4u;
  fp_ld(c,3,R(1));
  fp_mov(c,4,6);
  fp_st(c,3,R(2));
  fp_ld(c,2,R(0)+R(1));
  fp_st(c,2,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(0)+R(2));
L8c0252a8:;
  fp_cmp(c,1,5,4);
  if(!c->t) goto L8c0252be;
  R(0)=0x4u;
  fp_ld(c,3,R(7));
  fp_mov(c,4,5);
  fp_st(c,3,R(2));
  fp_ld(c,2,R(0)+R(7));
  fp_st(c,2,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(7));
  fp_st(c,3,R(0)+R(2));
L8c0252be:;
  fp_fsrra(c,4);
  R(0)=0x4u;
  fp_ld(c,3,R(2));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(2));
  fp_ld(c,2,R(0)+R(2));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(4));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(6));
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(2));
  fp_ld(c,1,R(4));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(6));
  fp_ld(c,2,R(4));
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,1,R(0)+R(4));
  fp_ld(c,3,R(2));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(6));
  R(0)=0x4u;
  fp_ld(c,3,R(2));
  fp_st(c,3,R(5));
  fp_ld(c,2,R(0)+R(2));
  fp_st(c,2,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(2));
  fp_st(c,3,R(0)+R(5));
  { R(15)+=0x24u; return; }
}
void f_8c025320(SH4Ctx *c) {
  fp_ftrc(c,4);
  R(0)=0x8c130c1cu;
  R(3)=c->fpul;
  R(3)<<=2;
  { ST32(R(3)+R(0),R(4)); return; }
}
void f_8c02532c(SH4Ctx *c) {
  R(0)=0x8c025384u;
  R(4)=0x8c130c64u;
  fp_ld(c,3,R(0));
  R(0)=0x8c025388u;
  R(3)=0x8c0c4690u;
  fp_st(c,3,R(4));
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c02538cu;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c025390u;
  fp_ld(c,3,R(0));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(4));
  { fp_st(c,4,R(3)); return; }
}
void f_8c0253a0(SH4Ctx *c) {
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
  R(15)+=0xfffffff0u;
  R(2)=0x8c12473eu;
  R(0)=LD32(c->gbr+12);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(5)=R(0); if(k) goto L8c0254b8; }
  R(4)=0x8c130c64u;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8c0254e8u;
  fp_ld(c,4,R(4));
  R(8)=R(4);
  fp_ld(c,2,R(0));
  R(0)=0xcu;
  fp_arith(c,1,3,4);
  R(8)+=0x4u;
  fp_ld(c,5,R(8));
  fp_mov(c,14,4);
  fp_arith(c,3,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8c0254ecu;
  fp_ld(c,0,R(0));
  R(0)=0x4u;
  fp_arith(c,1,1,5);
  fp_arith(c,3,1,0);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x8c0254f0u;
  R(3)=LD32(R(5)+12);
  fp_ld(c,4,R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  fp_mov(c,12,1);
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c02540e; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c02540e:;
  fp_mov(c,1,4);
  fp_arith(c,3,1,3);
  R(3)=LD32(R(5)+20);
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  fp_arith(c,1,12,1);
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c025426; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c025426:;
  fp_arith(c,3,4,3);
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=0x8c0c4690u;
  R(2)=0x8c0388c0u;
  fp_arith(c,1,3,4);
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c02543au; fp_ld(c,4,R(3)); f_8c0388c0(c); }
  R(0)=0x8c025504u;
  R(12)=0x8c07fc1au;
  R(9)=0x0u;
  fp_ld(c,13,R(0));
  R(11)=R(9);
  R(10)=0x3u;
L8c025446:;
  R(0)=0xcu;
  fp_mov(c,2,14);
  fp_ld(c,3,R(0)+R(15));
  R(14)=R(11);
  R(3)=0x8c130c1cu;
  R(14)<<=2;
  fp_arith(c,0,2,3);
  fp_ld(c,15,R(8));
  R(13)=R(9);
  R(14)+=R(3);
  fp_st(c,2,R(15));
L8c02545c:;
  R(0)=0x4u;
  fp_mov(c,7,15);
  fp_ld(c,3,R(0)+R(15));
  R(5)=0x0u;
  fp_ld(c,6,R(15));
  fp_arith(c,0,7,3);
  {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;}
  fp_mov(c,5,15);
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c025472u; fp_mov(c,4,14); sh4_call(c,tg); }
  fp_arith(c,0,15,12);
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(5)=0x0u;
  fp_ld(c,6,R(15));
  {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;}
  fp_mov(c,7,15);
  fp_arith(c,0,7,3);
  fp_mov(c,5,15);
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c02548au; fp_mov(c,4,14); sh4_call(c,tg); }
  fp_arith(c,0,15,12);
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(5)=0x0u;
  fp_ld(c,6,R(15));
  {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;}
  fp_mov(c,7,15);
  fp_arith(c,0,7,3);
  fp_mov(c,5,15);
  fp_mov(c,8,13);
  { uint32_t tg=R(12); c->pr=0x8c0254a2u; fp_mov(c,4,14); sh4_call(c,tg); }
  R(13)+=0x3u;
  c->t=(int32_t)R(13)>=(int32_t)R(10);
  { uint32_t k=!c->t; fp_arith(c,0,15,12); if(k) goto L8c02545c; }
  R(0)=0x8u;
  R(3)=0x12u;
  fp_ld(c,3,R(0)+R(15));
  R(11)+=0x3u;
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  { uint32_t k=!c->t; fp_arith(c,0,14,3); if(k) goto L8c025446; }
L8c0254b8:;
  R(15)+=0x10u;
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
void f_8c025520(SH4Ctx *c) {
  R(6)=0x578u;
  R(4)=0x8c13191cu;
  R(6)+=R(4);
  R(5)=R(4);
  c->t=R(5)>=R(6);
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c02555e; }
L8c02552e:;
  R(0)=0x10u;
  ST32(R(5),R(4));
  ST8(R(5)+R(0),R(4));
  R(0)=0x11u;
  ST8(R(5)+R(0),R(4));
  R(0)=0x12u;
  ST8(R(5)+R(0),R(4));
  R(0)=0x13u;
  ST8(R(5)+R(0),R(4));
  R(0)=0x10u;
  ST32(R(5)+20,R(4));
  R(5)+=0x1cu;
  ST32(R(5),R(4));
  ST8(R(5)+R(0),R(4));
  R(0)=0x11u;
  ST8(R(5)+R(0),R(4));
  R(0)=0x12u;
  ST8(R(5)+R(0),R(4));
  R(0)=0x13u;
  ST8(R(5)+R(0),R(4));
  ST32(R(5)+20,R(4));
  R(5)+=0x1cu;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c02552e;
L8c02555e:;
  {  return; }
}
void f_8c025562(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0bdbf0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)=0x55u; if(k) goto L8c02561c; }
  {  goto L8c025584; }
L8c025582:;
  R(7)+=0x1u;
L8c025584:;
  R(0)=R(7);
  R(14)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(14)=R(14)&0xFF;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c025594;
  R(0)=R(14);
  c->t=(int32_t)R(0)==86;
  if(!c->t) goto L8c025582;
L8c025594:;
  R(14)=R(7);
  R(14)+=R(6);
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c025606;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==77;
  if(!c->t) goto L8c025606;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==83;
  if(!c->t) goto L8c025606;
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0255e0;
  R(3)=R(7);
  R(0)=R(10);
  R(3)+=R(6);
  ST8(R(3)+2,R(0));
  {  goto L8c025606; }
L8c0255e0:;
  R(14)=R(7);
  R(14)+=0x2u;
  R(2)=R(14);
  R(2)+=R(6);
  R(0)=(int32_t)(int8_t)LD8(R(2)+1);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c025602;
L8c0255ee:;
  R(12)=R(14);
  R(12)+=R(6);
  R(14)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(12)+1);
  R(3)=R(14);
  R(3)+=R(6);
  ST8(R(12),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(3)+1);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0255ee;
L8c025602:;
  R(0)=R(14);
  ST8(R(6)+R(0),R(13));
L8c025606:;
  R(0)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c025612;
  R(7)+=0x1u;
L8c025612:;
  R(0)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c025584;
L8c02561c:;
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c025708;
  R(8)=0x8c0c46f0u;
  R(9)=0x1u;
  R(12)=0xffffffffu;
L8c025628:;
  R(12)+=0x1u;
  { R(7)=R(12); goto L8c025630; }
L8c02562e:;
  R(7)+=0x1u;
L8c025630:;
  R(0)=R(7);
  R(14)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c025646;
  R(1)=0x8c0c46f0u;
  R(3)=R(14)&0xFF;
  R(2)=LD32(R(1));
  R(2)=(int32_t)(int8_t)LD8(R(2));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c02562e;
L8c025646:;
  R(0)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=R(7); if(k) goto L8c0256fe; }
  R(10)=R(7);
  R(7)+=0x1u;
  { R(14)=R(9); goto L8c02565e; }
L8c02565a:;
  R(14)+=0x1u;
  R(7)+=0x1u;
L8c02565e:;
  R(0)=R(6);
  R(11)=(int32_t)(int8_t)LD8(R(7)+R(0));
  R(3)=R(11)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c02567a;
  R(3)=0x8c0c46f0u;
  R(0)=LD32(R(3));
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c02567a;
  R(1)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)=R(11)&0xFF;
  c->t=R(2)==R(1);
  if(c->t) goto L8c02565a;
L8c02567a:;
  R(0)=LD32(R(8));
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0256fe;
  R(3)=0x8c0b91acu;
  R(14)=R(10);
  R(14)+=R(6);
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  R(2)=R(14);
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
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(7)=R(10); if(k) goto L8c0256d8; }
L8c0256cc:;
  R(7)+=0x1u;
  R(0)=R(7);
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0256cc;
L8c0256d8:;
  R(14)=R(7);
  R(14)+=0x5u;
  R(0)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0256fa;
L8c0256e6:;
  R(0)=R(6);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(14)+=0x1u;
  ST8(R(7)+R(0),R(3));
  R(0)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c0256e6; }
L8c0256fa:;
  R(0)=R(7);
  ST8(R(6)+R(0),R(13));
L8c0256fe:;
  R(0)=R(12);
  R(3)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c025628;
L8c025708:;
  R(3)=0x32u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c025740;
  R(1)=0x1cu;
  fp_ftrc(c,4);
  c->macl=R(4)*R(1);
  R(2)=0x8c13191cu;
  R(0)=0x10u;
  R(3)=c->fpul;
  R(4)=c->macl;
  R(4)+=R(2);
  ST32(R(4),R(6));
  ST8(R(4)+R(0),R(3));
  R(0)=0x11u;
  ST8(R(4)+R(0),R(13));
  R(0)=0x4u;
  fp_ld(c,3,R(5));
  fp_st(c,3,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x12u;
  ST8(R(4)+R(0),R(13));
  R(0)=0x13u;
  ST8(R(4)+R(0),R(13));
L8c025740:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c025780(SH4Ctx *c) {
  R(3)=0x32u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c02578c;
  {  goto L8c025948; }
L8c02578c:;
  fp_ftrc(c,4);
  R(1)=0x1cu;
  c->macl=R(4)*R(1);
  R(2)=0x8c13191cu;
  R(0)=R(5);
  c->t=(int32_t)R(0)==0;
  R(7)=0x1u;
  R(14)=c->fpul;
  fp_ftrc(c,4);
  R(4)=c->macl;
  R(4)+=R(2);
  { uint32_t k=c->t; R(6)=c->fpul; if(k) goto L8c0257ca; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0257d0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0257e2;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0257f6;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0257fc;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c025840;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c025860;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0257c6;
  {  goto L8c0258a0; }
L8c0257c6:;
  {  goto L8c025948; }
L8c0257ca:;
  R(0)=0x10u;
  { ST8(R(4)+R(0),R(14)); goto L8c025948; }
L8c0257d0:;
  R(14)=R(14)&0xFF;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(0)=0x12u; if(k) goto L8c0257dc; }
  { R(1)=0x1u; goto L8c0257de; }
L8c0257dc:;
  R(1)=0x0u;
L8c0257de:;
  {  goto L8c02584c; }
L8c0257e2:;
  R(0)=0x13u;
  ST8(R(4)+R(0),R(7));
  R(0)=0x10u;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0257f2;
  {  goto L8c025948; }
L8c0257f2:;
  { ST8(R(4)+R(0),R(7)); goto L8c025948; }
L8c0257f6:;
  R(1)=0x2u;
  { R(0)=0x13u; goto L8c02584c; }
L8c0257fc:;
  R(0)=0xcu;
  { fp_st(c,4,R(0)+R(4)); goto L8c025948; }
L8c025840:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c025852;
  R(0)=0x13u;
  R(3)=0xfbu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(3);
L8c02584c:;
  ST8(R(4)+R(0),R(1));
  {  goto L8c025948; }
L8c025852:;
  R(0)=0x13u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x4u;
  R(1)|=R(3);
  ST8(R(4)+R(0),R(1));
  { ST32(R(4)+20,R(6)); goto L8c025948; }
L8c025860:;
  c->fr[3]=0x3F800000u;
  fp_cmp(c,0,4,3);
  if(!c->t) goto L8c025874;
  R(0)=0x13u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x8u;
  R(1)|=R(3);
  ST8(R(4)+R(0),R(1));
  {  goto L8c025948; }
L8c025874:;
  R(0)=0x13u;
  R(3)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(3);
  { ST8(R(4)+R(0),R(1)); goto L8c025948; }
L8c0258a0:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0258ba;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0258d0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0258e0;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c025920;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c025936;
  {  goto L8c025948; }
L8c0258ba:;
  R(0)=0x13u;
  R(3)=0xefu;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(1)&=R(3);
  ST8(R(4)+R(0),R(1));
  R(1)=0x18u;
  R(1)+=R(4);
  R(0)=0x0u;
  ST8(R(1),R(0));
  {  goto L8c025948; }
L8c0258d0:;
  R(0)=0x13u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x10u;
  R(1)|=R(3);
  ST8(R(4)+R(0),R(1));
  R(0)=0x18u;
  { ST8(R(4)+R(0),R(7)); goto L8c025948; }
L8c0258e0:;
  R(0)=0x13u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x10u;
  R(1)|=R(3);
  ST8(R(4)+R(0),R(1));
  R(1)=0x18u;
  R(1)+=R(4);
  R(0)=0x2u;
  ST8(R(1),R(0));
  {  goto L8c025948; }
L8c025920:;
  R(0)=0x13u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x10u;
  R(1)|=R(3);
  ST8(R(4)+R(0),R(1));
  R(1)=0x18u;
  R(1)+=R(4);
  R(0)=0x3u;
  ST8(R(1),R(0));
  {  goto L8c025948; }
L8c025936:;
  R(0)=0x13u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x10u;
  R(1)|=R(3);
  ST8(R(4)+R(0),R(1));
  R(1)=0x18u;
  R(1)+=R(4);
  R(0)=0x4u;
  ST8(R(1),R(0));
L8c025948:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c025900(SH4Ctx *c) {
  sh4_mac_l(c,R(0),R(14));R(0)+=4;R(14)+=4;
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  R(0)=0x13u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(3)=0x10u;
  R(1)|=R(3);
  ST8(R(4)+R(0),R(1));
  R(1)=0x18u;
  R(1)+=R(4);
  R(0)=0x3u;
  ST8(R(1),R(0));
  {  goto L8c025948; }
L8c025948:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c02594c(SH4Ctx *c) {
  R(3)=0x32u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c025966;
  R(1)=0x1cu;
  R(2)=0x8c13191cu;
  c->macl=R(4)*R(1);
  R(4)=c->macl;
  R(4)+=R(2);
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c025966;
  R(0)=LD32(R(4));
  ST8(R(5)+R(0),R(6));
L8c025966:;
  {  return; }
}
void f_8c0259a0(SH4Ctx *c) {
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
  R(15)+=0xffffffe4u;
  R(0)=0x8c025a44u;
  R(12)=R(15);
  R(12)+=0x10u;
  R(9)=0x8c0c4684u;
  R(3)=R(12);
  R(3)+=0x8u;
  R(11)=R(15);
  R(8)=0x0u;
  R(14)=0xffu;
  R(11)+=0x4u;
  ST32(R(15),R(3));
  R(13)=R(8);
  fp_ld(c,12,R(0));
  R(0)=0x8c025a48u;
  fp_ld(c,13,R(0));
  R(0)=0x8c025a50u;
  fp_ld(c,15,R(0));
  c->fr[14]=0x00000000u;
L8c0259de:;
  R(10)=0x1cu;
  R(3)=0x8c13191cu;
  c->macl=R(13)*R(10);
  R(0)=0x10u;
  R(10)=c->macl;
  R(10)+=R(3);
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0259f4;
  {  goto L8c025ac6; }
L8c0259f4:;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0259fe;
  {  goto L8c025ac6; }
L8c0259fe:;
  R(3)=0xfu;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c025a0c;
  R(2)=0x8c12473eu;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c025ac6;
L8c025a0c:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c025a60;
  R(0)=0x10u;
  fp_ld(c,3,R(9));
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  fp_arith(c,2,3,15);
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,2);
  fp_arith(c,0,2,3);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c025a3a;
  R(0)=0x13u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(14);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025a3a:;
  R(0)=0x10u;
  { ST8(R(10)+R(0),R(4)); goto L8c025a8c; }
L8c025a60:;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c025a8c;
  R(0)=0x10u;
  fp_ld(c,3,R(9));
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  fp_arith(c,2,3,15);
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,2);
  fp_arith(c,1,2,3);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>0;
  if(c->t) goto L8c025a88;
  R(0)=0x13u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(8);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025a88:;
  R(0)=0x10u;
  ST8(R(10)+R(0),R(4));
L8c025a8c:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c025ac2;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c025a9eu; R(4)=R(10); f_8c026040(c); }
  R(3)=LD32(R(15));
  R(0)=0x10u;
  R(5)=R(11);
  fp_mov(c,5,14);
  fp_st(c,12,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  R(3)=0x8c07ff20u;
  fp_float(c,3);
  fp_mov(c,4,3);
  { c->pr=0x8c025ac2u; R(4)=R(12); f_8c07ff20(c); }
L8c025ac2:;
  { c->pr=0x8c025ac6u; R(4)=R(10); f_8c026320(c); }
L8c025ac6:;
  R(10)=0x1cu;
  R(3)=0x8c13191cu;
  R(13)+=0x1u;
  c->macl=R(13)*R(10);
  R(0)=0x10u;
  R(10)=c->macl;
  R(10)+=R(3);
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c025ade;
  {  goto L8c025bc6; }
L8c025ade:;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c025ae8;
  {  goto L8c025bc6; }
L8c025ae8:;
  R(3)=0xfu;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c025af6;
  R(2)=0x8c12473eu;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c025bc6;
L8c025af6:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c025b60;
  R(0)=0x10u;
  fp_ld(c,3,R(9));
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  fp_arith(c,2,3,15);
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,2);
  fp_arith(c,0,2,3);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c025b24;
  R(0)=0x13u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(14);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025b24:;
  R(0)=0x10u;
  { ST8(R(10)+R(0),R(4)); goto L8c025b8c; }
L8c025b60:;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c025b8c;
  R(0)=0x10u;
  fp_ld(c,3,R(9));
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  fp_arith(c,2,3,15);
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,2);
  fp_arith(c,1,2,3);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>0;
  if(c->t) goto L8c025b88;
  R(0)=0x13u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(8);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025b88:;
  R(0)=0x10u;
  ST8(R(10)+R(0),R(4));
L8c025b8c:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c025bc2;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c025b9eu; R(4)=R(10); f_8c026040(c); }
  R(3)=LD32(R(15));
  R(0)=0x10u;
  R(5)=R(11);
  fp_mov(c,5,14);
  fp_st(c,12,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  R(3)=0x8c07ff20u;
  fp_float(c,3);
  fp_mov(c,4,3);
  { c->pr=0x8c025bc2u; R(4)=R(12); f_8c07ff20(c); }
L8c025bc2:;
  { c->pr=0x8c025bc6u; R(4)=R(10); f_8c026320(c); }
L8c025bc6:;
  R(10)=0x1cu;
  R(3)=0x8c13191cu;
  R(13)+=0x1u;
  c->macl=R(13)*R(10);
  R(0)=0x10u;
  R(10)=c->macl;
  R(10)+=R(3);
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c025bde;
  {  goto L8c025cc6; }
L8c025bde:;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c025be8;
  {  goto L8c025cc6; }
L8c025be8:;
  R(3)=0xfu;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c025bf6;
  R(2)=0x8c12473eu;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c025cc6;
L8c025bf6:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c025c60;
  R(0)=0x10u;
  fp_ld(c,3,R(9));
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  fp_arith(c,2,3,15);
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,2);
  fp_arith(c,0,2,3);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c025c24;
  R(0)=0x13u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(14);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025c24:;
  R(0)=0x10u;
  { ST8(R(10)+R(0),R(4)); goto L8c025c8c; }
L8c025c60:;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c025c8c;
  R(0)=0x10u;
  fp_ld(c,3,R(9));
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  fp_arith(c,2,3,15);
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,2);
  fp_arith(c,1,2,3);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>0;
  if(c->t) goto L8c025c88;
  R(0)=0x13u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(8);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025c88:;
  R(0)=0x10u;
  ST8(R(10)+R(0),R(4));
L8c025c8c:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c025cc2;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c025c9eu; R(4)=R(10); f_8c026040(c); }
  R(3)=LD32(R(15));
  R(0)=0x10u;
  R(5)=R(11);
  fp_mov(c,5,14);
  fp_st(c,12,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  R(3)=0x8c07ff20u;
  fp_float(c,3);
  fp_mov(c,4,3);
  { c->pr=0x8c025cc2u; R(4)=R(12); f_8c07ff20(c); }
L8c025cc2:;
  { c->pr=0x8c025cc6u; R(4)=R(10); f_8c026320(c); }
L8c025cc6:;
  R(10)=0x1cu;
  R(3)=0x8c13191cu;
  R(13)+=0x1u;
  c->macl=R(13)*R(10);
  R(0)=0x10u;
  R(10)=c->macl;
  R(10)+=R(3);
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c025cde;
  {  goto L8c025dc6; }
L8c025cde:;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c025ce8;
  {  goto L8c025dc6; }
L8c025ce8:;
  R(3)=0xfu;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c025cf6;
  R(2)=0x8c12473eu;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c025dc6;
L8c025cf6:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c025d60;
  R(0)=0x10u;
  fp_ld(c,3,R(9));
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  fp_arith(c,2,3,15);
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,2);
  fp_arith(c,0,2,3);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c025d24;
  R(0)=0x13u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(14);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025d24:;
  R(0)=0x10u;
  { ST8(R(10)+R(0),R(4)); goto L8c025d8c; }
L8c025d60:;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c025d8c;
  R(0)=0x10u;
  fp_ld(c,3,R(9));
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  fp_arith(c,2,3,15);
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,2);
  fp_arith(c,1,2,3);
  fp_ftrc(c,2);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>0;
  if(c->t) goto L8c025d88;
  R(0)=0x13u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(8);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025d88:;
  R(0)=0x10u;
  ST8(R(10)+R(0),R(4));
L8c025d8c:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c025dc2;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c025d9eu; R(4)=R(10); f_8c026040(c); }
  R(3)=LD32(R(15));
  R(0)=0x10u;
  R(5)=R(11);
  fp_mov(c,5,14);
  fp_st(c,12,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  R(3)=0x8c07ff20u;
  fp_float(c,3);
  fp_mov(c,4,3);
  { c->pr=0x8c025dc2u; R(4)=R(12); f_8c07ff20(c); }
L8c025dc2:;
  { c->pr=0x8c025dc6u; R(4)=R(10); f_8c026320(c); }
L8c025dc6:;
  R(3)=0x2eu;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(c->t) goto L8c025dd2;
  {  goto L8c0259de; }
L8c025dd2:;
  R(1)=0x32u;
  c->t=(int32_t)R(13)>=(int32_t)R(1);
  if(!c->t) goto L8c025ddc;
  {  goto L8c025eca; }
L8c025ddc:;
  R(10)=0x1cu;
  R(3)=0x8c13191cu;
  c->macl=R(13)*R(10);
  R(0)=0x10u;
  R(10)=c->macl;
  R(10)+=R(3);
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c025df2;
  {  goto L8c025ec2; }
L8c025df2:;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c025ec2;
  R(3)=0xfu;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c025e06;
  R(2)=0x8c12473eu;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c025ec2;
L8c025e06:;
  R(0)=0x13u;
  fp_ld(c,4,R(9));
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  { uint32_t k=c->t; fp_arith(c,2,4,15); if(k) goto L8c025e60; }
  R(0)=0x10u;
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,0,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c025e34;
  R(0)=0x13u;
  R(3)=0xfeu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(14);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025e34:;
  R(0)=0x10u;
  { ST8(R(10)+R(0),R(4)); goto L8c025e88; }
L8c025e60:;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c025e88;
  R(0)=0x10u;
  R(4)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(4)&0xFF;
  c->fpul=R(4);
  fp_float(c,3);
  fp_arith(c,1,3,4);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  c->t=(int32_t)R(4)>0;
  if(c->t) goto L8c025e84;
  R(0)=0x13u;
  R(3)=0xfdu;
  R(2)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(4)=R(8);
  R(2)&=R(3);
  ST8(R(10)+R(0),R(2));
L8c025e84:;
  R(0)=0x10u;
  ST8(R(10)+R(0),R(4));
L8c025e88:;
  R(0)=0x13u;
  R(0)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c025ebe;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c025e9au; R(4)=R(10); f_8c026040(c); }
  R(3)=LD32(R(15));
  R(0)=0x10u;
  R(5)=R(11);
  fp_mov(c,5,14);
  fp_st(c,12,R(3));
  R(3)=(int32_t)(int8_t)LD8(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->fpul=R(3);
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  c->fpul=R(3);
  R(3)=0x8c07ff20u;
  fp_float(c,3);
  fp_mov(c,4,3);
  { c->pr=0x8c025ebeu; R(4)=R(12); f_8c07ff20(c); }
L8c025ebe:;
  { c->pr=0x8c025ec2u; R(4)=R(10); f_8c026320(c); }
L8c025ec2:;
  R(3)=0x32u;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c025ddc;
L8c025eca:;
  R(15)+=0x1cu;
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
