#include "recomp_decls.h"
void f_8c068a56(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(13)=R(5);
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=(int32_t)R(0)==66;
  { uint32_t k=c->t; R(12)=R(6); if(k) goto L8c068a7a; }
  {  goto L8c068ba0; }
L8c068a7a:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(12);
  { uint32_t tg=R(3); c->pr=0x8c068a84u; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(12)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c068ac0;
  { fp_ld(c,3,R(12)); goto L8c068ac6; }
L8c068ac0:;
  R(2)=LD32(R(12));
  c->fpul=R(2);
  fp_float(c,3);
L8c068ac6:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  fp_mov(c,15,3);
  R(6)=R(12);
  fp_unary(c,0,15);
  { uint32_t tg=R(2); c->pr=0x8c068ad4u; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(12)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c068ae0;
  { fp_ld(c,3,R(12)); goto L8c068ae6; }
L8c068ae0:;
  R(2)=LD32(R(12));
  c->fpul=R(2);
  fp_float(c,3);
L8c068ae6:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  fp_mov(c,14,3);
  R(6)=R(12);
  fp_unary(c,0,14);
  { uint32_t tg=R(2); c->pr=0x8c068af4u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(12)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c068b04;
  fp_ld(c,3,R(12));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c068b06; }
L8c068b04:;
  R(4)=LD32(R(12));
L8c068b06:;
  R(0)=0x8c068be0u;
  c->fpul=R(4);
  fp_ld(c,5,R(0));
  R(0)=0x4u;
  fp_arith(c,3,14,5);
  fp_arith(c,3,15,5);
  c->fr[5]=0x00000000u;
  fp_float(c,3);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,7,3);
  fp_mov(c,4,14);
  fp_arith(c,2,4,3);
  fp_mov(c,6,15);
  fp_arith(c,2,6,7);
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  R(0)=0x4u;
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,7);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,7);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c05e6eau;
  R(0)=0xcu;
  fp_arith(c,2,7,3);
  R(5)+=0x4u;
  fp_st(c,7,R(0)+R(15));
  { c->pr=0x8c068b98u; R(4)=R(12); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(12)+12,R(2));
  { R(0)=LD32(R(15)); goto L8c068ba2; }
L8c068ba0:;
  R(0)=R(13);
L8c068ba2:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068ac0(SH4Ctx *c) {
  R(2)=LD32(R(12));
  c->fpul=R(2);
  fp_float(c,3);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  fp_mov(c,15,3);
  R(6)=R(12);
  fp_unary(c,0,15);
  { uint32_t tg=R(2); c->pr=0x8c068ad4u; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(12)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c068ae0;
  { fp_ld(c,3,R(12)); goto L8c068ae6; }
L8c068ae0:;
  R(2)=LD32(R(12));
  c->fpul=R(2);
  fp_float(c,3);
L8c068ae6:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  fp_mov(c,14,3);
  R(6)=R(12);
  fp_unary(c,0,14);
  { uint32_t tg=R(2); c->pr=0x8c068af4u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(12)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c068b04;
  fp_ld(c,3,R(12));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c068b06; }
L8c068b04:;
  R(4)=LD32(R(12));
L8c068b06:;
  R(0)=0x8c068be0u;
  c->fpul=R(4);
  fp_ld(c,5,R(0));
  R(0)=0x4u;
  fp_arith(c,3,14,5);
  fp_arith(c,3,15,5);
  c->fr[5]=0x00000000u;
  fp_float(c,3);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,7,3);
  fp_mov(c,4,14);
  fp_arith(c,2,4,3);
  fp_mov(c,6,15);
  fp_arith(c,2,6,7);
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,6,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  R(0)=0x4u;
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,2,7);
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,7);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c05e6eau;
  R(0)=0xcu;
  fp_arith(c,2,7,3);
  R(5)+=0x4u;
  fp_st(c,7,R(0)+R(15));
  { c->pr=0x8c068b98u; R(4)=R(12); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(12)+12,R(2));
  { R(0)=LD32(R(15)); goto L8c068ba2; }
L8c068ba2:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068bb2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  R(13)=R(6);
  R(6)=0x8c0c76fcu;
  R(3)=R(5);
  R(14)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+12,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c068c00;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c068c02; }
L8c068c00:;
  ST32(R(15),R(4));
L8c068c02:;
  R(6)=R(15);
  R(12)=LD32(R(14)+4);
  R(6)+=0x28u;
  { uint32_t tg=R(12); c->pr=0x8c068c0cu; R(5)=R(14); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(15)+12);
  R(1)=0xafu;
  R(5)=0xffffu;
  R(4)=LD32(R(15)+40);
  c->t=R(0)==R(1);
  R(11)=0x8c058ce8u;
  { uint32_t k=c->t; R(5)+=R(4); if(k) goto L8c068c2e; }
  R(1)=0xb0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068c34;
  R(1)=0xb1u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068c3a;
  {  goto L8c068c80; }
L8c068c2e:;
  R(6)=LD32(R(15));
  { R(4)=0x1u; goto L8c068c3e; }
L8c068c34:;
  R(6)=LD32(R(15));
  { R(4)=0x2u; goto L8c068c3e; }
L8c068c3a:;
  R(6)=LD32(R(15));
  R(4)=0x0u;
L8c068c3e:;
  { uint32_t tg=R(11); c->pr=0x8c068c42u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c068c8c; }
L8c068c80:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c068c88u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c068d42; }
L8c068c8c:;
  R(10)=0x8c05e6eau;
  c->t=(R(14)&R(14))==0;
  R(11)=0x15u;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c068d2c; }
  R(0)=LD32(R(14)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c068ca6;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c068caa;
  {  goto L8c068d14; }
L8c068ca6:;
  { R(5)=LD32(R(14)); goto L8c068d24; }
L8c068caa:;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x8u;
  { c->pr=0x8c068cbeu; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x1cu;
  R(6)=R(0);
  { c->pr=0x8c068cceu; R(4)=R(14); f_8c0869f0(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x10u;
  R(6)=R(0);
  { c->pr=0x8c068cdcu; R(4)=R(14); f_8c0869f0(c); }
  R(5)=R(15);
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x1cu;
  { c->pr=0x8c068cecu; R(4)+=0x1cu; f_8c05e5f4(c); }
  R(0)=0x8c068d94u;
  R(5)=R(15);
  fp_ld(c,4,R(0));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  { R(5)+=0x1cu; goto L8c068d24; }
L8c068d14:;
  R(0)=0x1cu;
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  R(5)+=0x1cu;
  fp_st(c,4,R(0)+R(15));
L8c068d24:;
  { uint32_t tg=R(10); c->pr=0x8c068d28u; R(4)=R(13); sh4_call(c,tg); }
  { ST32(R(13)+12,R(11)); goto L8c068d42; }
L8c068d2c:;
  R(0)=0x1cu;
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  R(5)+=0x1cu;
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c068d40u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(13)+12,R(11));
L8c068d42:;
  R(0)=R(12);
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068c00(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(6)=R(15);
  R(12)=LD32(R(14)+4);
  R(6)+=0x28u;
  { uint32_t tg=R(12); c->pr=0x8c068c0cu; R(5)=R(14); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(15)+12);
  R(1)=0xafu;
  R(5)=0xffffu;
  R(4)=LD32(R(15)+40);
  c->t=R(0)==R(1);
  R(11)=0x8c058ce8u;
  { uint32_t k=c->t; R(5)+=R(4); if(k) goto L8c068c2e; }
  R(1)=0xb0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068c34;
  R(1)=0xb1u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068c3a;
  {  goto L8c068c80; }
L8c068c2e:;
  R(6)=LD32(R(15));
  { R(4)=0x1u; goto L8c068c3e; }
L8c068c34:;
  R(6)=LD32(R(15));
  { R(4)=0x2u; goto L8c068c3e; }
L8c068c3a:;
  R(6)=LD32(R(15));
  R(4)=0x0u;
L8c068c3e:;
  { uint32_t tg=R(11); c->pr=0x8c068c42u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c068c8c; }
L8c068c80:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c068c88u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c068d42; }
L8c068c8c:;
  R(10)=0x8c05e6eau;
  c->t=(R(14)&R(14))==0;
  R(11)=0x15u;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c068d2c; }
  R(0)=LD32(R(14)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c068ca6;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c068caa;
  {  goto L8c068d14; }
L8c068ca6:;
  { R(5)=LD32(R(14)); goto L8c068d24; }
L8c068caa:;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x8u;
  { c->pr=0x8c068cbeu; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x1cu;
  R(6)=R(0);
  { c->pr=0x8c068cceu; R(4)=R(14); f_8c0869f0(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x10u;
  R(6)=R(0);
  { c->pr=0x8c068cdcu; R(4)=R(14); f_8c0869f0(c); }
  R(5)=R(15);
  R(2)=0x8c05e5f4u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x10u;
  R(5)+=0x1cu;
  { c->pr=0x8c068cecu; R(4)+=0x1cu; f_8c05e5f4(c); }
  R(0)=0x8c068d94u;
  R(5)=R(15);
  fp_ld(c,4,R(0));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(15));
  { R(5)+=0x1cu; goto L8c068d24; }
L8c068d14:;
  R(0)=0x1cu;
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  R(5)+=0x1cu;
  fp_st(c,4,R(0)+R(15));
L8c068d24:;
  { uint32_t tg=R(10); c->pr=0x8c068d28u; R(4)=R(13); sh4_call(c,tg); }
  { ST32(R(13)+12,R(11)); goto L8c068d42; }
L8c068d2c:;
  R(0)=0x1cu;
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  R(5)+=0x1cu;
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c068d40u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(13)+12,R(11));
L8c068d42:;
  R(0)=R(12);
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068c80(SH4Ctx *c) {
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c068c88u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c068d42; }
L8c068d42:;
  R(0)=R(12);
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068d54(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  ST32(R(15)+12,R(6));
  R(14)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)=R(14);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+16,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c068da0;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c068da2; }
L8c068da0:;
  ST32(R(15),R(4));
L8c068da2:;
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(6)+=0x2cu;
  { uint32_t tg=R(13); c->pr=0x8c068dacu; R(5)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+16);
  R(1)=0xb5u;
  R(5)=0xffffu;
  R(4)=LD32(R(15)+44);
  c->t=R(0)==R(1);
  R(12)=0x8c058ce8u;
  { uint32_t k=c->t; R(5)+=R(4); if(k) goto L8c068dce; }
  R(1)=0xb6u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068dd4;
  R(1)=0xb7u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068dda;
  {  goto L8c068e20; }
L8c068dce:;
  R(6)=LD32(R(15));
  { R(4)=0x1u; goto L8c068dde; }
L8c068dd4:;
  R(6)=LD32(R(15));
  { R(4)=0x2u; goto L8c068dde; }
L8c068dda:;
  R(6)=LD32(R(15));
  R(4)=0x0u;
L8c068dde:;
  { uint32_t tg=R(12); c->pr=0x8c068de2u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c068e2c; }
L8c068e20:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c068e28u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c068f14; }
L8c068e2c:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c068ef8; }
  R(0)=LD32(R(14)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c068e42;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c068e50;
  {  goto L8c068eea; }
L8c068e42:;
  R(3)=0x8c0858c0u;
  R(6)=0x0u;
  R(5)=R(6);
  { c->pr=0x8c068e4cu; R(4)=R(14); f_8c0858c0(c); }
  { fp_mov(c,4,0); goto L8c068eea; }
L8c068e50:;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x8u;
  { c->pr=0x8c068e64u; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x20u;
  R(6)=R(0);
  { c->pr=0x8c068e74u; R(4)=R(14); f_8c0869f0(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x14u;
  R(6)=R(0);
  { c->pr=0x8c068e82u; R(4)=R(14); f_8c0869f0(c); }
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,1,4,6);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c068e98;
  { fp_mov(c,3,4); goto L8c068ea0; }
L8c068e98:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,6);
L8c068ea0:;
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,1,4,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c068eba;
  { fp_mov(c,3,4); goto L8c068ec2; }
L8c068eba:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,6);
L8c068ec2:;
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,1,4,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c068edc;
  { fp_mov(c,3,4); goto L8c068ee4; }
L8c068edc:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,6);
L8c068ee4:;
  R(0)=0x28u;
  { fp_st(c,3,R(0)+R(15)); goto L8c068f04; }
L8c068eea:;
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  { fp_st(c,4,R(0)+R(15)); goto L8c068f04; }
L8c068ef8:;
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,4,R(0)+R(15));
L8c068f04:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c068f0eu; R(4)=LD32(R(15)+12); f_8c05e6ea(c); }
  R(2)=LD32(R(15)+12);
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
L8c068f14:;
  R(0)=R(13);
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068da0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(6)+=0x2cu;
  { uint32_t tg=R(13); c->pr=0x8c068dacu; R(5)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+16);
  R(1)=0xb5u;
  R(5)=0xffffu;
  R(4)=LD32(R(15)+44);
  c->t=R(0)==R(1);
  R(12)=0x8c058ce8u;
  { uint32_t k=c->t; R(5)+=R(4); if(k) goto L8c068dce; }
  R(1)=0xb6u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068dd4;
  R(1)=0xb7u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068dda;
  {  goto L8c068e20; }
L8c068dce:;
  R(6)=LD32(R(15));
  { R(4)=0x1u; goto L8c068dde; }
L8c068dd4:;
  R(6)=LD32(R(15));
  { R(4)=0x2u; goto L8c068dde; }
L8c068dda:;
  R(6)=LD32(R(15));
  R(4)=0x0u;
L8c068dde:;
  { uint32_t tg=R(12); c->pr=0x8c068de2u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c068e2c; }
L8c068e20:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c068e28u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c068f14; }
L8c068e2c:;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c068ef8; }
  R(0)=LD32(R(14)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c068e42;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c068e50;
  {  goto L8c068eea; }
L8c068e42:;
  R(3)=0x8c0858c0u;
  R(6)=0x0u;
  R(5)=R(6);
  { c->pr=0x8c068e4cu; R(4)=R(14); f_8c0858c0(c); }
  { fp_mov(c,4,0); goto L8c068eea; }
L8c068e50:;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x8u;
  { c->pr=0x8c068e64u; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x20u;
  R(6)=R(0);
  { c->pr=0x8c068e74u; R(4)=R(14); f_8c0869f0(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x14u;
  R(6)=R(0);
  { c->pr=0x8c068e82u; R(4)=R(14); f_8c0869f0(c); }
  R(0)=0x20u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,1,4,6);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c068e98;
  { fp_mov(c,3,4); goto L8c068ea0; }
L8c068e98:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,6);
L8c068ea0:;
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,1,4,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c068eba;
  { fp_mov(c,3,4); goto L8c068ec2; }
L8c068eba:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,6);
L8c068ec2:;
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  fp_mov(c,4,5);
  fp_arith(c,1,4,6);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c068edc;
  { fp_mov(c,3,4); goto L8c068ee4; }
L8c068edc:;
  fp_mov(c,2,5);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,6);
L8c068ee4:;
  R(0)=0x28u;
  { fp_st(c,3,R(0)+R(15)); goto L8c068f04; }
L8c068eea:;
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  { fp_st(c,4,R(0)+R(15)); goto L8c068f04; }
L8c068ef8:;
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  fp_st(c,4,R(0)+R(15));
L8c068f04:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c068f0eu; R(4)=LD32(R(15)+12); f_8c05e6ea(c); }
  R(2)=LD32(R(15)+12);
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
L8c068f14:;
  R(0)=R(13);
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068e20(SH4Ctx *c) {
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c068e28u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c068f14; }
L8c068f14:;
  R(0)=R(13);
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068f60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff9cu;
  R(3)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(13)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+44,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)=R(6); if(k) goto L8c068f8c; }
  R(3)=0x0u;
  ST32(R(15)+12,R(4));
  { ST32(R(5),R(3)); goto L8c068f8e; }
L8c068f8c:;
  ST32(R(15)+12,R(13));
L8c068f8e:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x54u;
  { uint32_t tg=R(3); c->pr=0x8c068f9au; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x54u;
  R(2)=LD32(R(15)+R(0));
  R(5)=R(14);
  R(6)=R(12);
  ST32(R(15)+40,R(2));
  R(11)=LD32(R(14)+4);
  { uint32_t tg=R(11); c->pr=0x8c068facu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(12));
  R(11)=R(0);
  R(1)=0xb2u;
  ST32(R(15)+36,R(3));
  R(0)=LD32(R(15)+44);
  R(3)=0xffffu;
  R(10)=0x8c058ce8u;
  c->t=R(0)==R(1);
  R(5)=LD32(R(15)+40);
  { uint32_t k=c->t; R(5)+=R(3); if(k) goto L8c068fd2; }
  R(1)=0xb3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c068fd8;
  R(1)=0xb4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069000;
  {  goto L8c06900c; }
L8c068fd2:;
  R(6)=LD32(R(15)+12);
  { R(4)=0x1u; goto L8c069004; }
L8c068fd8:;
  R(6)=LD32(R(15)+12);
  { R(4)=0x2u; goto L8c069004; }
L8c069000:;
  R(6)=LD32(R(15)+12);
  R(4)=0x0u;
L8c069004:;
  { uint32_t tg=R(10); c->pr=0x8c069008u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c069018; }
L8c06900c:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069014u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c069146; }
L8c069018:;
  R(0)=0x30u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  c->t=(R(14)&R(14))==0;
  R(0)=0x38u;
  { uint32_t k=c->t; fp_st(c,4,R(0)+R(15)); if(k) goto L8c069118; }
  R(0)=LD32(R(14)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06910a;
  R(3)=R(15);
  R(3)+=0x20u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(2)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x20u;
  { c->pr=0x8c069046u; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+28);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x48u;
  R(6)=R(0);
  { c->pr=0x8c069056u; R(4)=R(14); f_8c0869f0(c); }
  R(0)=0x20u;
  R(3)=0x8c0869f0u;
  R(5)=R(15);
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)+=0x3cu;
  { c->pr=0x8c069064u; R(4)=R(14); f_8c0869f0(c); }
  R(0)=0x48u;
  R(2)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(2)+=0x18u;
  R(0)=0x4cu;
  R(3)=R(15);
  fp_st(c,3,R(2));
  R(3)+=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x10u;
  R(0)=0x3cu;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x8u;
  R(0)=0x40u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x4u;
  R(0)=0x44u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,1,0,1);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(15));
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  { uint32_t k=!c->t; c->fr[4]=0x3F800000u; if(k) goto L8c0690dc; }
  fp_ld(c,3,R(15));
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c0690dc;
  R(0)=0x30u;
  fp_st(c,4,R(0)+R(15));
L8c0690dc:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0690f2;
  fp_ld(c,1,R(15));
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0690f2;
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
L8c0690f2:;
  R(0)=0x8u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c069124;
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c069124;
  R(0)=0x38u;
  { fp_st(c,4,R(0)+R(15)); goto L8c069124; }
L8c06910a:;
  R(0)=0x48u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  { fp_st(c,4,R(0)+R(15)); goto L8c069124; }
L8c069118:;
  R(0)=0x48u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
L8c069124:;
  R(0)=LD32(R(15)+36);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c069138;
  R(2)=0x8c015060u;
  R(6)=R(15);
  R(5)=LD32(R(13)+36);
  R(4)=R(15);
  R(6)+=0x30u;
  { c->pr=0x8c069138u; R(4)+=0x30u; f_8c015060(c); }
L8c069138:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x30u;
  { c->pr=0x8c069142u; R(4)=R(12); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(12)+12,R(2));
L8c069146:;
  R(0)=R(11);
  R(15)+=0x64u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069000(SH4Ctx *c) {
  R(6)=LD32(R(15)+12);
  R(4)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c069008u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c069018; }
L8c069018:;
  R(0)=0x30u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  c->t=(R(14)&R(14))==0;
  R(0)=0x38u;
  { uint32_t k=c->t; fp_st(c,4,R(0)+R(15)); if(k) goto L8c069118; }
  R(0)=LD32(R(14)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06910a;
  R(3)=R(15);
  R(3)+=0x20u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(2)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x20u;
  { c->pr=0x8c069046u; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+28);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x48u;
  R(6)=R(0);
  { c->pr=0x8c069056u; R(4)=R(14); f_8c0869f0(c); }
  R(0)=0x20u;
  R(3)=0x8c0869f0u;
  R(5)=R(15);
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)+=0x3cu;
  { c->pr=0x8c069064u; R(4)=R(14); f_8c0869f0(c); }
  R(0)=0x48u;
  R(2)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(2)+=0x18u;
  R(0)=0x4cu;
  R(3)=R(15);
  fp_st(c,3,R(2));
  R(3)+=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x10u;
  R(0)=0x3cu;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x8u;
  R(0)=0x40u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(3)+=0x4u;
  R(0)=0x44u;
  fp_st(c,3,R(3));
  R(3)=R(15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,1,0,1);
  fp_st(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(15));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(15));
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(15));
  fp_cmp(c,1,0,1);
  { uint32_t k=!c->t; c->fr[4]=0x3F800000u; if(k) goto L8c0690dc; }
  fp_ld(c,3,R(15));
  fp_cmp(c,1,0,3);
  if(!c->t) goto L8c0690dc;
  R(0)=0x30u;
  fp_st(c,4,R(0)+R(15));
L8c0690dc:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0690f2;
  fp_ld(c,1,R(15));
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c0690f2;
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
L8c0690f2:;
  R(0)=0x8u;
  fp_ld(c,2,R(15));
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c069124;
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,1,2,1);
  if(!c->t) goto L8c069124;
  R(0)=0x38u;
  { fp_st(c,4,R(0)+R(15)); goto L8c069124; }
L8c06910a:;
  R(0)=0x48u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  { fp_st(c,4,R(0)+R(15)); goto L8c069124; }
L8c069118:;
  R(0)=0x48u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
L8c069124:;
  R(0)=LD32(R(15)+36);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c069138;
  R(2)=0x8c015060u;
  R(6)=R(15);
  R(5)=LD32(R(13)+36);
  R(4)=R(15);
  R(6)+=0x30u;
  { c->pr=0x8c069138u; R(4)+=0x30u; f_8c015060(c); }
L8c069138:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x30u;
  { c->pr=0x8c069142u; R(4)=R(12); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(12)+12,R(2));
  R(0)=R(11);
  R(15)+=0x64u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069180(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff98u;
  R(14)=R(5);
  R(3)=R(14);
  R(3)+=0xfffffff4u;
  ST32(R(15),R(6));
  R(2)=LD32(R(3));
  R(6)=R(15);
  R(6)+=0x58u;
  R(5)=R(14);
  ST32(R(15)+4,R(2));
  R(13)=R(4);
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c0691aau; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(2)=LD32(R(14)+4);
  R(6)=R(15);
  R(11)=R(15);
  R(5)=R(0);
  R(6)+=0x48u;
  R(11)+=0x58u;
  { uint32_t tg=R(2); c->pr=0x8c0691bcu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(3)=LD32(R(14)+4);
  R(6)=R(15);
  R(12)=R(15);
  R(5)=R(0);
  R(6)+=0x38u;
  R(12)+=0x48u;
  { uint32_t tg=R(3); c->pr=0x8c0691ceu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x8c069248u;
  fp_ld(c,15,R(0));
  R(13)=R(15);
  R(0)=LD32(R(15)+4);
  R(1)=0xb9u;
  R(10)=0x8c05e612u;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(13)+=0x38u; if(k) goto L8c0691f0; }
  R(1)=0xb8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0691ec;
  {  goto L8c06935a; }
L8c0691ec:;
  {  goto L8c069448; }
L8c0691f0:;
  R(2)=LD32(R(13));
  R(3)=R(15);
  R(3)+=0x8u;
  R(1)=LD32(R(13)+4);
  ST32(R(3),R(2));
  R(5)=R(11);
  R(4)=R(15);
  R(6)=R(12);
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(13)+8);
  ST32(R(3)+8,R(2));
  { uint32_t tg=R(10); c->pr=0x8c06920au; R(4)+=0x14u; sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c069212u; R(4)=R(13); sh4_call(c,tg); }
  fp_ld(c,4,R(13));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c06921e;
  { fp_mov(c,3,4); goto L8c069222; }
L8c06921e:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c069222:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c06929a;
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c069260;
  { fp_ld(c,3,R(0)+R(13)); goto L8c069262; }
L8c069260:;
  fp_unary(c,0,3);
L8c069262:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c06929a;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c069274;
  { fp_ld(c,3,R(0)+R(13)); goto L8c069276; }
L8c069274:;
  fp_unary(c,0,3);
L8c069276:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c06929a;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  { fp_st(c,3,R(0)+R(15)); goto L8c069454; }
L8c06929a:;
  R(0)=0x4u;
  fp_ld(c,4,R(13));
  fp_ld(c,5,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(13));
  R(0)=0x4u;
  fp_mov(c,5,4);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_ld(c,6,R(0)+R(13));
  fp_mov(c,0,4);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(13));
  R(0)=0x4u;
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(13));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=0x8c05e55cu;
  R(4)=R(15);
  R(5)=R(13);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(13));
  { c->pr=0x8c0692f2u; R(4)+=0x14u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c06931a;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,2);
  { fp_st(c,2,R(0)+R(15)); goto L8c069454; }
L8c06931a:;
  fp_ld(c,2,R(13));
  R(0)=0x2cu;
  fp_mov(c,1,4);
  fp_cmp(c,1,4,15);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x30u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x34u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  { uint32_t k=!c->t; fp_st(c,1,R(0)+R(15)); if(k) goto L8c069348; }
  R(5)=R(15);
  R(6)=R(11);
  { R(5)+=0x8u; goto L8c069350; }
L8c069348:;
  R(5)=R(15);
  R(6)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x14u;
L8c069350:;
  R(4)=R(15);
  { uint32_t tg=R(10); c->pr=0x8c069356u; R(4)+=0x20u; sh4_call(c,tg); }
  {  goto L8c069454; }
L8c06935a:;
  R(4)=R(15);
  R(5)=R(11);
  R(6)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c069364u; R(4)+=0x14u; sh4_call(c,tg); }
  fp_ld(c,4,R(13));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c069370;
  { fp_mov(c,3,4); goto L8c069374; }
L8c069370:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c069374:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c0693d6;
  R(0)=0x4u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c069386;
  { fp_ld(c,3,R(0)+R(13)); goto L8c069388; }
L8c069386:;
  fp_unary(c,0,3);
L8c069388:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c0693d6;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0693c0;
  { fp_ld(c,3,R(0)+R(13)); goto L8c0693c2; }
L8c0693c0:;
  fp_unary(c,0,3);
L8c0693c2:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c0693d6;
  R(0)=0x20u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  { fp_st(c,4,R(0)+R(15)); goto L8c069454; }
L8c0693d6:;
  R(0)=0x4u;
  fp_ld(c,5,R(13));
  fp_ld(c,6,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,5);
  R(4)=R(15);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(13));
  R(0)=0x4u;
  R(3)=0x8c05e55cu;
  R(5)=R(13);
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(13));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(13));
  { uint32_t tg=R(3); c->pr=0x8c069414u; R(4)+=0x14u; sh4_call(c,tg); }
  fp_ld(c,3,R(13));
  R(0)=0x2cu;
  fp_mov(c,2,0);
  R(6)=R(15);
  fp_arith(c,2,2,3);
  fp_mov(c,4,0);
  R(5)=R(15);
  R(5)+=0x2cu;
  R(4)=R(15);
  R(6)+=0x14u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c069444u; R(4)+=0x20u; sh4_call(c,tg); }
  {  goto L8c069454; }
L8c069448:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069450u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c069464; }
L8c069454:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c06945eu; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
L8c069464:;
  R(0)=R(14);
  R(15)+=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069260(SH4Ctx *c) {
  fp_unary(c,0,3);
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c06929a;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(13));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c069274;
  { fp_ld(c,3,R(0)+R(13)); goto L8c069276; }
L8c069274:;
  fp_unary(c,0,3);
L8c069276:;
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c06929a;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  { fp_st(c,3,R(0)+R(15)); goto L8c069454; }
L8c06929a:;
  R(0)=0x4u;
  fp_ld(c,4,R(13));
  fp_ld(c,5,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(13));
  R(0)=0x4u;
  fp_mov(c,5,4);
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_ld(c,6,R(0)+R(13));
  fp_mov(c,0,4);
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(13));
  R(0)=0x4u;
  fp_unary(c,2,3);
  fp_mov(c,15,3);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(13));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(3)=0x8c05e55cu;
  R(4)=R(15);
  R(5)=R(13);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(13));
  { c->pr=0x8c0692f2u; R(4)+=0x14u; f_8c05e55c(c); }
  c->fr[3]=0x00000000u;
  fp_mov(c,4,0);
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c06931a;
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,2);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,2);
  { fp_st(c,2,R(0)+R(15)); goto L8c069454; }
L8c06931a:;
  fp_ld(c,2,R(13));
  R(0)=0x2cu;
  fp_mov(c,1,4);
  fp_cmp(c,1,4,15);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x30u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x34u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  { uint32_t k=!c->t; fp_st(c,1,R(0)+R(15)); if(k) goto L8c069348; }
  R(5)=R(15);
  R(6)=R(11);
  { R(5)+=0x8u; goto L8c069350; }
L8c069348:;
  R(5)=R(15);
  R(6)=R(15);
  R(5)+=0x2cu;
  R(6)+=0x14u;
L8c069350:;
  R(4)=R(15);
  { uint32_t tg=R(10); c->pr=0x8c069356u; R(4)+=0x20u; sh4_call(c,tg); }
  {  goto L8c069454; }
L8c069454:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c06945eu; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(0)=R(14);
  R(15)+=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0693c0(SH4Ctx *c) {
  fp_unary(c,0,3);
  fp_cmp(c,1,15,3);
  if(!c->t) goto L8c0693d6;
  R(0)=0x20u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x28u;
  { fp_st(c,4,R(0)+R(15)); goto L8c069454; }
L8c0693d6:;
  R(0)=0x4u;
  fp_ld(c,5,R(13));
  fp_ld(c,6,R(0)+R(13));
  R(0)=0x8u;
  fp_mov(c,0,5);
  R(4)=R(15);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,4,R(0)+R(13));
  R(0)=0x4u;
  R(3)=0x8c05e55cu;
  R(5)=R(13);
  fp_fmac(c,3,5);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,5);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(13));
  fp_ld(c,3,R(0)+R(13));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(13));
  { uint32_t tg=R(3); c->pr=0x8c069414u; R(4)+=0x14u; sh4_call(c,tg); }
  fp_ld(c,3,R(13));
  R(0)=0x2cu;
  fp_mov(c,2,0);
  R(6)=R(15);
  fp_arith(c,2,2,3);
  fp_mov(c,4,0);
  R(5)=R(15);
  R(5)+=0x2cu;
  R(4)=R(15);
  R(6)+=0x14u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x34u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c069444u; R(4)+=0x20u; sh4_call(c,tg); }
  {  goto L8c069454; }
L8c069454:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c06945eu; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(0)=R(14);
  R(15)+=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069478(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(12)=R(6);
  R(6)=0x8c0c76fcu;
  R(3)=R(5);
  R(14)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+12,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0694c0;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c0694c2; }
L8c0694c0:;
  ST32(R(15),R(4));
L8c0694c2:;
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(6)+=0x1cu;
  { uint32_t tg=R(13); c->pr=0x8c0694ccu; R(5)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+12);
  R(1)=0xacu;
  R(5)=0xffffu;
  R(4)=LD32(R(15)+28);
  c->t=R(0)==R(1);
  R(11)=0x8c058ce8u;
  { uint32_t k=c->t; R(5)+=R(4); if(k) goto L8c0694ee; }
  R(1)=0xadu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0694f4;
  R(1)=0xaeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0694fa;
  {  goto L8c069540; }
L8c0694ee:;
  R(6)=LD32(R(15));
  { R(4)=0x1u; goto L8c0694fe; }
L8c0694f4:;
  R(6)=LD32(R(15));
  { R(4)=0x2u; goto L8c0694fe; }
L8c0694fa:;
  R(6)=LD32(R(15));
  R(4)=0x0u;
L8c0694fe:;
  { uint32_t tg=R(11); c->pr=0x8c069502u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c06954c; }
L8c069540:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069548u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c0695a0; }
L8c06954c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0695a0;
  R(0)=LD32(R(14)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c069560;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c06956e;
  {  goto L8c0695a0; }
L8c069560:;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(14));
  { c->pr=0x8c069568u; R(4)=R(12); f_8c05e6ea(c); }
  R(2)=0x15u;
  { ST32(R(12)+12,R(2)); goto L8c0695a0; }
L8c06956e:;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x8u;
  { c->pr=0x8c069582u; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x10u;
  R(6)=R(0);
  { c->pr=0x8c069592u; R(4)=R(14); f_8c0869f0(c); }
  R(2)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c06959cu; R(4)=R(12); f_8c05e6ea(c); }
  R(3)=0x15u;
  ST32(R(12)+12,R(3));
L8c0695a0:;
  R(0)=R(13);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0694c0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(6)+=0x1cu;
  { uint32_t tg=R(13); c->pr=0x8c0694ccu; R(5)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15)+12);
  R(1)=0xacu;
  R(5)=0xffffu;
  R(4)=LD32(R(15)+28);
  c->t=R(0)==R(1);
  R(11)=0x8c058ce8u;
  { uint32_t k=c->t; R(5)+=R(4); if(k) goto L8c0694ee; }
  R(1)=0xadu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0694f4;
  R(1)=0xaeu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0694fa;
  {  goto L8c069540; }
L8c0694ee:;
  R(6)=LD32(R(15));
  { R(4)=0x1u; goto L8c0694fe; }
L8c0694f4:;
  R(6)=LD32(R(15));
  { R(4)=0x2u; goto L8c0694fe; }
L8c0694fa:;
  R(6)=LD32(R(15));
  R(4)=0x0u;
L8c0694fe:;
  { uint32_t tg=R(11); c->pr=0x8c069502u;  sh4_call(c,tg); }
  { R(14)=R(0); goto L8c06954c; }
L8c069540:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069548u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c0695a0; }
L8c06954c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0695a0;
  R(0)=LD32(R(14)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c069560;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c06956e;
  {  goto L8c0695a0; }
L8c069560:;
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(14));
  { c->pr=0x8c069568u; R(4)=R(12); f_8c05e6ea(c); }
  R(2)=0x15u;
  { ST32(R(12)+12,R(2)); goto L8c0695a0; }
L8c06956e:;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  R(3)=0x8c085aaeu;
  R(7)=R(15);
  R(5)=R(6);
  R(7)+=0x8u;
  { c->pr=0x8c069582u; R(4)=R(14); f_8c085aae(c); }
  R(15)+=0x4u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(15);
  R(3)=0x8c0869f0u;
  R(5)+=0x10u;
  R(6)=R(0);
  { c->pr=0x8c069592u; R(4)=R(14); f_8c0869f0(c); }
  R(2)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c06959cu; R(4)=R(12); f_8c05e6ea(c); }
  R(3)=0x15u;
  ST32(R(12)+12,R(3));
L8c0695a0:;
  R(0)=R(13);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069540(SH4Ctx *c) {
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069548u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c0695a0; }
L8c0695a0:;
  R(0)=R(13);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0695b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
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
  { uint32_t k=c->t; c->fr[15]=0x00000000u; if(k) goto L8c069600; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c069602; }
L8c069600:;
  ST32(R(15),R(4));
L8c069602:;
  R(3)=0x8c0721b8u;
  { c->pr=0x8c069608u; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069634;
  R(1)=0xa6u;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(4)=0x8u; if(k) goto L8c069620; }
  R(1)=0xa7u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069626;
  {  goto L8c06962c; }
L8c069620:;
  fp_st(c,15,R(13));
  { ST32(R(13)+12,R(4)); goto L8c069634; }
L8c069626:;
  fp_st(c,15,R(13));
  { ST32(R(13)+12,R(4)); goto L8c069634; }
L8c06962c:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069634u; R(4)=0x27u; f_8c074080(c); }
L8c069634:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069600(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(3)=0x8c0721b8u;
  { c->pr=0x8c069608u; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069634;
  R(1)=0xa6u;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(4)=0x8u; if(k) goto L8c069620; }
  R(1)=0xa7u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069626;
  {  goto L8c06962c; }
L8c069620:;
  fp_st(c,15,R(13));
  { ST32(R(13)+12,R(4)); goto L8c069634; }
L8c069626:;
  fp_st(c,15,R(13));
  { ST32(R(13)+12,R(4)); goto L8c069634; }
L8c06962c:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069634u; R(4)=0x27u; f_8c074080(c); }
L8c069634:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069680(SH4Ctx *c) {
  R(2)=0x8c123bbcu;
  c->fr[2]=0x00000000u;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c06969a; }
  R(0)=0x8c069728u;
  fp_mov(c,3,4);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c06969c; }
L8c06969a:;
  fp_mov(c,3,4);
L8c06969c:;
  R(2)=0x8u;
  fp_st(c,3,R(6));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c0696a6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(10)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  ST32(R(15),R(4));
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(11)=R(6); if(k) goto L8c0696d6; }
  R(3)=0x0u;
  ST32(R(15)+4,R(4));
  { ST32(R(5),R(3)); goto L8c0696da; }
L8c0696d6:;
  R(1)=LD32(R(15));
  ST32(R(15)+4,R(1));
L8c0696da:;
  R(0)=0xcu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  R(3)=0x8c0721b8u;
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c0696eeu; R(4)=LD32(R(15)+4); f_8c0721b8(c); }
  R(14)=R(0);
  R(1)=0xc4u;
  R(0)=LD32(R(15)+8);
  R(9)=0x8c05e6eau;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(8)=0x15u; if(k) goto L8c069740; }
  R(1)=0xc3u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069706;
  {  goto L8c0697c0; }
L8c069706:;
  {  goto L8c069900; }
L8c069740:;
  R(12)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(11);
  { uint32_t tg=R(12); c->pr=0x8c06974au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(11));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06976e; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c069774;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06977a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c069780;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c069786;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06978c;
  R(5)=R(15);
  { R(5)+=0xcu; goto L8c069794; }
L8c06976e:;
  R(13)=R(14);
  { R(13)+=0x8u; goto L8c069790; }
L8c069774:;
  R(13)=R(14);
  { R(13)+=0x30u; goto L8c069790; }
L8c06977a:;
  R(13)=R(14);
  { R(13)+=0x58u; goto L8c069790; }
L8c069780:;
  R(13)=0x80u;
  {  goto L8c06978e; }
L8c069786:;
  R(13)=0xa8u;
  {  goto L8c06978e; }
L8c06978c:;
  R(13)=0xd0u;
L8c06978e:;
  R(13)+=R(14);
L8c069790:;
  R(5)=R(13);
  R(5)+=0x4u;
L8c069794:;
  { uint32_t tg=R(9); c->pr=0x8c069798u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(11)+12,R(8));
  { R(0)=R(12); goto L8c06990a; }
L8c0697c0:;
  R(13)=LD32(R(14)+4);
  R(4)=0x10000u;
  R(3)=R(13);
  R(12)=0x8c05e5f4u;
  R(3)&=R(4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0697e2;
  R(3)=0x80u;
  R(5)=R(15);
  R(5)+=0xcu;
  R(4)=R(15);
  R(3)+=R(14);
  R(6)=R(3);
  R(6)+=0x4u;
  ST32(R(15),R(3));
  { uint32_t tg=R(12); c->pr=0x8c0697e2u; R(4)+=0xcu; sh4_call(c,tg); }
L8c0697e2:;
  R(0)=0x1u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0697fe;
  R(2)=R(14);
  R(2)+=0x30u;
  R(5)=R(15);
  R(6)=R(2);
  R(5)+=0xcu;
  R(4)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c0697feu; R(4)+=0xcu; sh4_call(c,tg); }
L8c0697fe:;
  R(0)=0x4u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c06981a;
  R(2)=R(14);
  R(2)+=0x58u;
  R(5)=R(15);
  R(6)=R(2);
  R(5)+=0xcu;
  R(4)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c06981au; R(4)+=0xcu; sh4_call(c,tg); }
L8c06981a:;
  R(0)=0x40u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c069836;
  R(2)=0xa8u;
  R(5)=R(15);
  R(5)+=0xcu;
  R(4)=R(15);
  R(2)+=R(14);
  R(6)=R(2);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c069836u; R(4)+=0xcu; sh4_call(c,tg); }
L8c069836:;
  R(0)=0x10u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c069852;
  R(2)=0xd0u;
  R(5)=R(15);
  R(5)+=0xcu;
  R(4)=R(15);
  R(2)+=R(14);
  R(6)=R(2);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c069852u; R(4)+=0xcu; sh4_call(c,tg); }
L8c069852:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c06986a;
  R(2)=R(14);
  R(2)+=0x8u;
  R(5)=R(15);
  R(6)=R(2);
  R(5)+=0xcu;
  R(4)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c06986au; R(4)+=0xcu; sh4_call(c,tg); }
L8c06986a:;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c069886;
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c069886;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0698c0;
L8c069886:;
  R(0)=0x10u;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
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
L8c0698c0:;
  R(5)=R(15);
  R(5)+=0xcu;
  { uint32_t tg=R(9); c->pr=0x8c0698c8u; R(4)=R(11); sh4_call(c,tg); }
  { ST32(R(11)+12,R(8)); goto L8c069908; }
L8c069900:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069908u; R(4)=0x27u; f_8c074080(c); }
L8c069908:;
  R(0)=R(10);
L8c06990a:;
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
void f_8c069740(SH4Ctx *c) {
  R(12)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(11);
  { uint32_t tg=R(12); c->pr=0x8c06974au; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(11));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06976e; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c069774;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06977a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c069780;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c069786;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06978c;
  R(5)=R(15);
  { R(5)+=0xcu; goto L8c069794; }
L8c06976e:;
  R(13)=R(14);
  { R(13)+=0x8u; goto L8c069790; }
L8c069774:;
  R(13)=R(14);
  { R(13)+=0x30u; goto L8c069790; }
L8c06977a:;
  R(13)=R(14);
  { R(13)+=0x58u; goto L8c069790; }
L8c069780:;
  R(13)=0x80u;
  {  goto L8c06978e; }
L8c069786:;
  R(13)=0xa8u;
  {  goto L8c06978e; }
L8c06978c:;
  R(13)=0xd0u;
L8c06978e:;
  R(13)+=R(14);
L8c069790:;
  R(5)=R(13);
  R(5)+=0x4u;
L8c069794:;
  { uint32_t tg=R(9); c->pr=0x8c069798u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(11)+12,R(8));
  { R(0)=R(12); goto L8c06990a; }
L8c06990a:;
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
void f_8c0697c0(SH4Ctx *c) {
  R(13)=LD32(R(14)+4);
  R(4)=0x10000u;
  R(3)=R(13);
  R(12)=0x8c05e5f4u;
  R(3)&=R(4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0697e2;
  R(3)=0x80u;
  R(5)=R(15);
  R(5)+=0xcu;
  R(4)=R(15);
  R(3)+=R(14);
  R(6)=R(3);
  R(6)+=0x4u;
  ST32(R(15),R(3));
  { uint32_t tg=R(12); c->pr=0x8c0697e2u; R(4)+=0xcu; sh4_call(c,tg); }
L8c0697e2:;
  R(0)=0x1u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0697fe;
  R(2)=R(14);
  R(2)+=0x30u;
  R(5)=R(15);
  R(6)=R(2);
  R(5)+=0xcu;
  R(4)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c0697feu; R(4)+=0xcu; sh4_call(c,tg); }
L8c0697fe:;
  R(0)=0x4u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c06981a;
  R(2)=R(14);
  R(2)+=0x58u;
  R(5)=R(15);
  R(6)=R(2);
  R(5)+=0xcu;
  R(4)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c06981au; R(4)+=0xcu; sh4_call(c,tg); }
L8c06981a:;
  R(0)=0x40u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c069836;
  R(2)=0xa8u;
  R(5)=R(15);
  R(5)+=0xcu;
  R(4)=R(15);
  R(2)+=R(14);
  R(6)=R(2);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c069836u; R(4)+=0xcu; sh4_call(c,tg); }
L8c069836:;
  R(0)=0x10u;
  R(0)&=R(13);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c069852;
  R(2)=0xd0u;
  R(5)=R(15);
  R(5)+=0xcu;
  R(4)=R(15);
  R(2)+=R(14);
  R(6)=R(2);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c069852u; R(4)+=0xcu; sh4_call(c,tg); }
L8c069852:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c06986a;
  R(2)=R(14);
  R(2)+=0x8u;
  R(5)=R(15);
  R(6)=R(2);
  R(5)+=0xcu;
  R(4)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  { uint32_t tg=R(12); c->pr=0x8c06986au; R(4)+=0xcu; sh4_call(c,tg); }
L8c06986a:;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,1,R(0)+R(15));
  fp_cmp(c,0,1,3);
  if(!c->t) goto L8c069886;
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c069886;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c0698c0;
L8c069886:;
  R(0)=0x10u;
  fp_mov(c,0,1);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_fmac(c,3,1);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
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
L8c0698c0:;
  R(5)=R(15);
  R(5)+=0xcu;
  { uint32_t tg=R(9); c->pr=0x8c0698c8u; R(4)=R(11); sh4_call(c,tg); }
  { ST32(R(11)+12,R(8)); goto L8c069908; }
L8c069908:;
  R(0)=R(10);
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
void f_8c069900(SH4Ctx *c) {
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069908u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(10);
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
void f_8c06991e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c76fcu;
  R(7)=R(5);
  R(13)=R(5);
  R(7)+=0xfffffff4u;
  R(5)=LD32(R(3));
  R(14)=R(6);
  R(7)=LD32(R(7));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c069948; }
  R(1)=0x8c0c76fcu;
  R(2)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(1),R(2)); goto L8c06994a; }
L8c069948:;
  ST32(R(15),R(4));
L8c06994a:;
  R(12)=LD32(R(15));
  R(0)=R(7);
  R(1)=0xd3u;
  R(12)=LD32(R(12)+4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(12)=LD32(R(12)+20); if(k) goto L8c069968; }
  R(1)=0xd4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0699a0;
  R(1)=0xd5u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0699d0;
  {  goto L8c0699f2; }
L8c069968:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c069974;
  R(2)=0x8c047d48u;
  { c->pr=0x8c069972u; R(4)=R(12); f_8c047d48(c); }
  R(6)=R(0)&0xFF;
L8c069974:;
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
  ST32(R(14),R(6));
  { R(3)=0x6u; goto L8c0699cc; }
L8c0699a0:;
  R(3)=LD32(R(13)+4);
  R(6)=R(14);
  R(11)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0699aau; R(5)=R(13); sh4_call(c,tg); }
  c->t=(R(12)&R(12))==0;
  R(13)=R(0);
  { uint32_t k=c->t; R(5)=(int32_t)(int16_t)LD16(R(14)); if(k) goto L8c0699be; }
  R(2)=0x8c047d4eu;
  R(4)=R(12);
  { c->pr=0x8c0699bau; {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);} f_8c047d4e(c); }
  { R(15)+=0x4u; goto L8c0699ca; }
L8c0699be:;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(11));
  fp_st(c,4,R(0)+R(11));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(11));
L8c0699ca:;
  R(3)=0x15u;
L8c0699cc:;
  { ST32(R(14)+12,R(3)); goto L8c0699f2; }
L8c0699d0:;
  R(1)=LD32(R(13)+4);
  R(6)=R(14);
  { uint32_t tg=R(1); c->pr=0x8c0699d8u; R(5)=R(13); sh4_call(c,tg); }
  c->t=(R(12)&R(12))==0;
  R(13)=R(0);
  { uint32_t k=c->t; R(5)=(int32_t)(int16_t)LD16(R(14)); if(k) goto L8c0699ea; }
  R(2)=0x8c047d9cu;
  { c->pr=0x8c0699e6u; R(4)=R(12); f_8c047d9c(c); }
  { fp_mov(c,3,0); goto L8c0699ec; }
L8c0699ea:;
  c->fr[3]=0x00000000u;
L8c0699ec:;
  R(2)=0x8u;
  fp_st(c,3,R(14));
  ST32(R(14)+12,R(2));
L8c0699f2:;
  R(0)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0699a0(SH4Ctx *c) {
  R(3)=LD32(R(13)+4);
  R(6)=R(14);
  R(11)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c0699aau; R(5)=R(13); sh4_call(c,tg); }
  c->t=(R(12)&R(12))==0;
  R(13)=R(0);
  { uint32_t k=c->t; R(5)=(int32_t)(int16_t)LD16(R(14)); if(k) goto L8c0699be; }
  R(2)=0x8c047d4eu;
  R(4)=R(12);
  { c->pr=0x8c0699bau; {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);} f_8c047d4e(c); }
  { R(15)+=0x4u; goto L8c0699ca; }
L8c0699be:;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(11));
  fp_st(c,4,R(0)+R(11));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(11));
L8c0699ca:;
  R(3)=0x15u;
  { ST32(R(14)+12,R(3)); goto L8c0699f2; }
L8c0699f2:;
  R(0)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069a02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(6);
  ST32(R(15)+12,R(5));
  ST32(R(15)+8,R(6));
  R(6)=0x8c0c76fcu;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c069a1e;
  R(3)=0x0u;
  ST32(R(15)+4,R(5));
  { ST32(R(6),R(3)); goto L8c069a20; }
L8c069a1e:;
  ST32(R(15)+4,R(4));
L8c069a20:;
  R(5)=R(15);
  R(4)=LD32(R(15)+4);
  R(3)=0x8c015ea8u;
  R(7)=R(15);
  R(7)+=0x14u;
  R(6)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c069a32u; R(4)=LD32(R(4)+36); f_8c015ea8(c); }
  R(2)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(2));
  R(2)=0x15u;
  fp_unary(c,0,3);
  fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(14));
  R(3)=LD32(R(15)+8);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+12);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069a5e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(13)=R(6);
  R(6)=0x8c0c76fcu;
  R(11)=R(5);
  R(14)=R(5);
  R(5)=LD32(R(6));
  R(11)+=0xfffffff4u;
  R(11)=LD32(R(11));
  R(10)=R(4);
  c->t=(R(5)&R(5))==0;
  R(12)=0x1u;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c069ac0; }
  ST32(R(15),R(5));
  { ST32(R(6),R(4)); goto L8c069ac2; }
L8c069ac0:;
  ST32(R(15),R(10));
L8c069ac2:;
  R(0)=0x28u;
  c->fr[15]=0x00000000u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  R(1)=0xa8u;
  fp_st(c,15,R(0)+R(15));
  R(0)=R(11);
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b00;
  R(1)=0xd9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b04;
  R(1)=0xdau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b04;
  R(1)=0xd8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b06;
  R(1)=0xdbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b06;
  R(1)=0xabu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069baa;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069baa;
  {  goto L8c069b9e; }
L8c069b00:;
  { R(12)=R(4); goto L8c069baa; }
L8c069b04:;
  R(12)=R(4);
L8c069b06:;
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c069b10u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=LD32(R(13));
  R(2)=0xffu;
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c069b60; }
  R(1)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069b26u; R(4)=R(13); f_8c05e6ea(c); }
  R(2)=0x8c072fa2u;
  R(3)=0x15u;
  ST32(R(13)+12,R(3));
  { c->pr=0x8c069b30u; R(4)=R(14); f_8c072fa2(c); }
  {  goto L8c069d48; }
L8c069b60:;
  R(5)=LD32(R(15));
  R(0)=0xa0u;
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5));
  R(8)=LD32(R(5)+R(0));
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c069b80; }
  R(1)=R(4)&0xFFFF;
  R(3)=R(1);
  R(1)<<=2;
  R(1)+=R(3);
  R(1)<<=2;
  R(1)+=R(8);
  { R(1)=LD32(R(1)); goto L8c069b82; }
L8c069b80:;
  R(1)=0x0u;
L8c069b82:;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c069b88;
  ST32(R(15),R(1));
L8c069b88:;
  R(3)=0xdbu;
  c->t=R(11)==R(3);
  if(!c->t) goto L8c069baa;
  R(1)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(13);
  { uint32_t tg=R(1); c->pr=0x8c069b98u; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  { R(12)=LD32(R(13)); goto L8c069baa; }
L8c069b9e:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069ba6u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c069d46; }
L8c069baa:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c069be0;
  R(3)=LD32(R(15));
  R(12)=LD32(R(3)+36);
  {  goto L8c069be4; }
L8c069be0:;
  R(2)=LD32(R(15));
  R(12)=LD32(R(2)+32);
L8c069be4:;
  R(1)=0xabu;
  R(0)=R(11);
  R(10)=0x8c015e64u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c1e;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c80;
  R(1)=0xdbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c94;
  R(1)=0xdau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069cc0;
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069cc0;
  R(1)=0xd9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069c10;
  {  goto L8c069d2e; }
L8c069c10:;
  R(1)=0xd8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069c1a;
  {  goto L8c069d2e; }
L8c069c1a:;
  {  goto L8c069d38; }
L8c069c1e:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c069c46;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c069c2eu;  f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c069c46; }
  R(0)=LD32(R(5)+8);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c069c46;
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  { c->fr[3]=0x3F800000u; goto L8c069d28; }
L8c069c46:;
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x10u;
  R(7)+=0x28u;
  { R(5)+=0x1cu; goto L8c069c8c; }
L8c069c80:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x28u;
  R(7)+=0x10u;
  R(6)+=0x1cu;
L8c069c8c:;
  { uint32_t tg=R(10); c->pr=0x8c069c90u; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c069d38; }
L8c069c94:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x1cu;
  R(7)+=0x10u;
  R(6)+=0x28u;
  { uint32_t tg=R(10); c->pr=0x8c069ca4u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  { fp_unary(c,0,3); goto L8c069d28; }
L8c069cc0:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c0160c0u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c069cd2u; R(4)=R(12); f_8c0160c0(c); }
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
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
  fp_unary(c,2,3);
L8c069d28:;
  R(0)=0x30u;
  { fp_st(c,3,R(0)+R(15)); goto L8c069d38; }
L8c069d2e:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d38u; R(4)=R(12); f_8c0163ce(c); }
L8c069d38:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d42u; R(4)=R(13); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(13)+12,R(2));
L8c069d46:;
  R(0)=R(14);
L8c069d48:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069ac0(SH4Ctx *c) {
  ST32(R(15),R(10));
  R(0)=0x28u;
  c->fr[15]=0x00000000u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x30u;
  R(1)=0xa8u;
  fp_st(c,15,R(0)+R(15));
  R(0)=R(11);
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b00;
  R(1)=0xd9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b04;
  R(1)=0xdau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b04;
  R(1)=0xd8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b06;
  R(1)=0xdbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069b06;
  R(1)=0xabu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069baa;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069baa;
  {  goto L8c069b9e; }
L8c069b00:;
  { R(12)=R(4); goto L8c069baa; }
L8c069b04:;
  R(12)=R(4);
L8c069b06:;
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c069b10u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=LD32(R(13));
  R(2)=0xffu;
  R(3)=R(4)&0xFF;
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c069b60; }
  R(1)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069b26u; R(4)=R(13); f_8c05e6ea(c); }
  R(2)=0x8c072fa2u;
  R(3)=0x15u;
  ST32(R(13)+12,R(3));
  { c->pr=0x8c069b30u; R(4)=R(14); f_8c072fa2(c); }
  {  goto L8c069d48; }
L8c069b60:;
  R(5)=LD32(R(15));
  R(0)=0xa0u;
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5));
  R(8)=LD32(R(5)+R(0));
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c069b80; }
  R(1)=R(4)&0xFFFF;
  R(3)=R(1);
  R(1)<<=2;
  R(1)+=R(3);
  R(1)<<=2;
  R(1)+=R(8);
  { R(1)=LD32(R(1)); goto L8c069b82; }
L8c069b80:;
  R(1)=0x0u;
L8c069b82:;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c069b88;
  ST32(R(15),R(1));
L8c069b88:;
  R(3)=0xdbu;
  c->t=R(11)==R(3);
  if(!c->t) goto L8c069baa;
  R(1)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(13);
  { uint32_t tg=R(1); c->pr=0x8c069b98u; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  { R(12)=LD32(R(13)); goto L8c069baa; }
L8c069b9e:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c069ba6u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c069d46; }
L8c069baa:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c069be0;
  R(3)=LD32(R(15));
  R(12)=LD32(R(3)+36);
  {  goto L8c069be4; }
L8c069be0:;
  R(2)=LD32(R(15));
  R(12)=LD32(R(2)+32);
L8c069be4:;
  R(1)=0xabu;
  R(0)=R(11);
  R(10)=0x8c015e64u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c1e;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c80;
  R(1)=0xdbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c94;
  R(1)=0xdau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069cc0;
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069cc0;
  R(1)=0xd9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069c10;
  {  goto L8c069d2e; }
L8c069c10:;
  R(1)=0xd8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069c1a;
  {  goto L8c069d2e; }
L8c069c1a:;
  {  goto L8c069d38; }
L8c069c1e:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c069c46;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c069c2eu;  f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c069c46; }
  R(0)=LD32(R(5)+8);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c069c46;
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  { c->fr[3]=0x3F800000u; goto L8c069d28; }
L8c069c46:;
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x10u;
  R(7)+=0x28u;
  { R(5)+=0x1cu; goto L8c069c8c; }
L8c069c80:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x28u;
  R(7)+=0x10u;
  R(6)+=0x1cu;
L8c069c8c:;
  { uint32_t tg=R(10); c->pr=0x8c069c90u; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c069d38; }
L8c069c94:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x1cu;
  R(7)+=0x10u;
  R(6)+=0x28u;
  { uint32_t tg=R(10); c->pr=0x8c069ca4u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  { fp_unary(c,0,3); goto L8c069d28; }
L8c069cc0:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c0160c0u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c069cd2u; R(4)=R(12); f_8c0160c0(c); }
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
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
  fp_unary(c,2,3);
L8c069d28:;
  R(0)=0x30u;
  { fp_st(c,3,R(0)+R(15)); goto L8c069d38; }
L8c069d2e:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d38u; R(4)=R(12); f_8c0163ce(c); }
L8c069d38:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d42u; R(4)=R(13); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(13)+12,R(2));
L8c069d46:;
  R(0)=R(14);
L8c069d48:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069b60(SH4Ctx *c) {
  R(5)=LD32(R(15));
  R(0)=0xa0u;
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5));
  R(8)=LD32(R(5)+R(0));
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(4)=R(4)&0xFF; if(k) goto L8c069b80; }
  R(1)=R(4)&0xFFFF;
  R(3)=R(1);
  R(1)<<=2;
  R(1)+=R(3);
  R(1)<<=2;
  R(1)+=R(8);
  { R(1)=LD32(R(1)); goto L8c069b82; }
L8c069b80:;
  R(1)=0x0u;
L8c069b82:;
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c069b88;
  ST32(R(15),R(1));
L8c069b88:;
  R(3)=0xdbu;
  c->t=R(11)==R(3);
  if(!c->t) goto L8c069baa;
  R(1)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(13);
  { uint32_t tg=R(1); c->pr=0x8c069b98u; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  { R(12)=LD32(R(13)); goto L8c069baa; }
L8c069baa:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c069be0;
  R(3)=LD32(R(15));
  R(12)=LD32(R(3)+36);
  {  goto L8c069be4; }
L8c069be0:;
  R(2)=LD32(R(15));
  R(12)=LD32(R(2)+32);
L8c069be4:;
  R(1)=0xabu;
  R(0)=R(11);
  R(10)=0x8c015e64u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c1e;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c80;
  R(1)=0xdbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c94;
  R(1)=0xdau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069cc0;
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069cc0;
  R(1)=0xd9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069c10;
  {  goto L8c069d2e; }
L8c069c10:;
  R(1)=0xd8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069c1a;
  {  goto L8c069d2e; }
L8c069c1a:;
  {  goto L8c069d38; }
L8c069c1e:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c069c46;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c069c2eu;  f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c069c46; }
  R(0)=LD32(R(5)+8);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c069c46;
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  { c->fr[3]=0x3F800000u; goto L8c069d28; }
L8c069c46:;
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x10u;
  R(7)+=0x28u;
  { R(5)+=0x1cu; goto L8c069c8c; }
L8c069c80:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x28u;
  R(7)+=0x10u;
  R(6)+=0x1cu;
L8c069c8c:;
  { uint32_t tg=R(10); c->pr=0x8c069c90u; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c069d38; }
L8c069c94:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x1cu;
  R(7)+=0x10u;
  R(6)+=0x28u;
  { uint32_t tg=R(10); c->pr=0x8c069ca4u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  { fp_unary(c,0,3); goto L8c069d28; }
L8c069cc0:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c0160c0u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c069cd2u; R(4)=R(12); f_8c0160c0(c); }
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
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
  fp_unary(c,2,3);
L8c069d28:;
  R(0)=0x30u;
  { fp_st(c,3,R(0)+R(15)); goto L8c069d38; }
L8c069d2e:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d38u; R(4)=R(12); f_8c0163ce(c); }
L8c069d38:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d42u; R(4)=R(13); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(13)+12,R(2));
  R(0)=R(14);
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069be0(SH4Ctx *c) {
  R(2)=LD32(R(15));
  R(12)=LD32(R(2)+32);
  R(1)=0xabu;
  R(0)=R(11);
  R(10)=0x8c015e64u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c1e;
  R(1)=0xaau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c80;
  R(1)=0xdbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069c94;
  R(1)=0xdau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069cc0;
  R(1)=0xa8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069cc0;
  R(1)=0xd9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069c10;
  {  goto L8c069d2e; }
L8c069c10:;
  R(1)=0xd8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069c1a;
  {  goto L8c069d2e; }
L8c069c1a:;
  {  goto L8c069d38; }
L8c069c1e:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c069c46;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c069c2eu;  f_8c04a8b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c069c46; }
  R(0)=LD32(R(5)+8);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c069c46;
  R(0)=0x28u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,15,R(0)+R(15));
  { c->fr[3]=0x3F800000u; goto L8c069d28; }
L8c069c46:;
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x10u;
  R(7)+=0x28u;
  { R(5)+=0x1cu; goto L8c069c8c; }
L8c069c80:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x28u;
  R(7)+=0x10u;
  R(6)+=0x1cu;
L8c069c8c:;
  { uint32_t tg=R(10); c->pr=0x8c069c90u; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c069d38; }
L8c069c94:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x1cu;
  R(7)+=0x10u;
  R(6)+=0x28u;
  { uint32_t tg=R(10); c->pr=0x8c069ca4u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x28u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  { fp_unary(c,0,3); goto L8c069d28; }
L8c069cc0:;
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(2)=0x8c0160c0u;
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c069cd2u; R(4)=R(12); f_8c0160c0(c); }
  R(0)=0x1cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x28u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x2cu;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_st(c,3,R(0)+R(15));
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
  fp_unary(c,2,3);
L8c069d28:;
  R(0)=0x30u;
  { fp_st(c,3,R(0)+R(15)); goto L8c069d38; }
L8c069d2e:;
  R(2)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d38u; R(4)=R(12); f_8c0163ce(c); }
L8c069d38:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d42u; R(4)=R(13); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(13)+12,R(2));
  R(0)=R(14);
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069c80(SH4Ctx *c) {
  R(6)=R(15);
  R(5)=R(15);
  R(7)=R(15);
  R(5)+=0x28u;
  R(7)+=0x10u;
  R(6)+=0x1cu;
  { uint32_t tg=R(10); c->pr=0x8c069c90u; R(4)=R(12); sh4_call(c,tg); }
  {  goto L8c069d38; }
L8c069d38:;
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x28u;
  { c->pr=0x8c069d42u; R(4)=R(13); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(13)+12,R(2));
  R(0)=R(14);
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c069d80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffbcu;
  R(11)=R(5);
  ST32(R(15)+4,R(4));
  R(4)=R(11);
  R(4)+=0xfffffff4u;
  R(1)=0xe2u;
  R(12)=0x0u;
  R(13)=0x8c2dd0e4u;
  ST32(R(15),R(6));
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(14)=0x9u; if(k) goto L8c069de0; }
  R(1)=0xe1u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c069dfa;
  R(1)=0xdeu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069dbe;
  {  goto L8c069faa; }
L8c069dbe:;
  R(1)=0xdfu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069dc8;
  {  goto L8c069fec; }
L8c069dc8:;
  R(1)=0xddu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069dd2;
  {  goto L8c06a032; }
L8c069dd2:;
  R(1)=0xe0u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c069ddc;
  {  goto L8c06a0a0; }
L8c069ddc:;
  {  goto L8c06a11a; }
L8c069de0:;
  R(13)=LD32(R(15));
  R(5)=R(11);
  R(3)=LD32(R(11)+4);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c069decu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=0x8c05c188u;
  ST32(R(15)+8,R(0));
  { c->pr=0x8c069df4u; R(4)=LD32(R(13)); f_8c05c188(c); }
  ST32(R(13),R(0));
  { ST32(R(13)+12,R(14)); goto L8c06a064; }
L8c069dfa:;
  R(6)=LD32(R(15));
  R(5)=R(11);
  R(14)=LD32(R(11)+4);
  { uint32_t tg=R(14); c->pr=0x8c069e04u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(14)=R(0);
  { c->pr=0x8c069e0cu; R(4)=LD32(R(15)); f_8c071ce0(c); }
  R(5)=R(14);
  ST32(R(15)+16,R(0));
  R(6)=LD32(R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c069e18u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(8)=LD32(R(14)); if(k) goto L8c069e60; }
  R(2)=LD32(R(15));
  { fp_ld(c,15,R(2)); goto L8c069e6a; }
L8c069e60:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c069e6a:;
  R(14)+=0xcu;
  R(6)=LD32(R(15));
  R(10)=LD32(R(14));
  R(14)+=0xcu;
  R(9)=LD32(R(14));
  R(14)+=0xcu;
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c069e7eu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c069e92;
  R(13)=LD32(R(15));
  fp_ld(c,3,R(13));
  fp_ftrc(c,3);
  { R(13)=c->fpul; goto L8c069e96; }
L8c069e92:;
  R(13)=LD32(R(15));
  R(13)=LD32(R(13));
L8c069e96:;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c069eb0;
  R(4)=R(13)&0xFF;
  R(2)=0x8c064e90u;
  R(6)=0x641u;
  R(4)<<=2;
  R(5)=0x8c0bbaecu;
  { c->pr=0x8c069eacu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c069ebe; }
L8c069eb0:;
  R(4)=R(13)&0xFF;
  R(2)=0x8c0199c4u;
  R(6)=0x641u;
  R(4)<<=2;
  R(5)=0x8c0bbaecu;
  { c->pr=0x8c069ebeu; R(4)<<=2; f_8c0199c4(c); }
L8c069ebe:;
  R(13)=R(13)&0xFF;
  R(12)=R(0);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+16);
  R(4)=R(15);
  R(3)=0x8c056e20u;
  R(6)=LD32(R(15)+28);
  fp_mov(c,4,15);
  { c->pr=0x8c069edau; R(4)+=0x20u; f_8c056e20(c); }
  R(15)+=0xcu;
  R(13)=0x8c0729f6u;
  R(14)=R(0);
  R(0)=R(14);
  { ST8(R(15)+8,R(0)); goto L8c069f92; }
L8c069f20:;
  R(11)=R(14)&0xFF;
  R(2)=LD32(R(15));
  R(11)<<=2;
  R(5)=R(14);
  R(11)<<=2;
  R(11)+=R(12);
  R(3)=(int32_t)(int16_t)LD16(R(11));
  ST32(R(2),R(3));
  R(3)=0x6u;
  R(2)=LD32(R(15));
  ST32(R(2)+12,R(3));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f44u; R(4)=R(8); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  R(0)=(int32_t)(int16_t)LD16(R(11)+2);
  R(5)=R(14);
  ST32(R(3),R(0));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f66u; R(4)=R(10); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
  R(3)=0x8c05e6eau;
  R(5)=R(11);
  R(5)+=0x4u;
  { c->pr=0x8c069f76u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  R(5)=R(14);
  ST32(R(2)+12,R(3));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f8cu; R(4)=R(9); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
L8c069f92:;
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(14)+=0xffffffffu; if(k) goto L8c069f20; }
L8c069f9a:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(1)=LD32(R(15));
  R(0)=R(0)&0xFF;
  ST32(R(1),R(0));
  R(3)=LD32(R(15));
  { ST32(R(3)+12,R(2)); goto L8c06a116; }
L8c069faa:;
  R(6)=LD32(R(15));
  R(5)=R(11);
  R(2)=LD32(R(11)+4);
  { uint32_t tg=R(2); c->pr=0x8c069fb4u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c069fc8;
  R(2)=LD32(R(15));
  fp_ld(c,3,R(2));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c069fcc; }
L8c069fc8:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
L8c069fcc:;
  R(2)=0x8c04ce12u;
  ST32(R(15)+8,R(3));
  { c->pr=0x8c069fd4u; R(4)=R(3); f_8c04ce12(c); }
  R(3)=0x8c068788u;
  R(4)=R(13);
  R(5)=R(0);
  { c->pr=0x8c069fdeu; R(6)=0x3u; f_8c068788(c); }
  R(0)=R(12);
  ST8(R(13)+3,R(0));
  R(3)=LD32(R(15));
  ST32(R(3),R(13));
  R(3)=LD32(R(15));
  { ST32(R(3)+12,R(14)); goto L8c06a116; }
L8c069fec:;
  R(6)=LD32(R(15));
  R(5)=R(11);
  R(2)=LD32(R(11)+4);
  { uint32_t tg=R(2); c->pr=0x8c069ff6u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06a00a;
  R(2)=LD32(R(15));
  fp_ld(c,3,R(2));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c06a00e; }
L8c06a00a:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2));
L8c06a00e:;
  R(2)=0x8c04ce12u;
  ST32(R(15)+12,R(3));
  { c->pr=0x8c06a016u; R(4)=R(3); f_8c04ce12(c); }
  R(3)=R(0);
  R(0)=0x8c2dd0e4u;
  R(2)=0x8c09c4d4u;
  R(3)+=0x3u;
  { c->pr=0x8c06a022u; R(1)=R(3); f_8c09c4d4(c); }
  R(1)=0x8c2dd0e4u;
  R(3)=0x8c2dd0e9u;
  ST8(R(3),R(12));
  R(2)=LD32(R(15));
  ST32(R(2),R(1));
  R(2)=LD32(R(15));
  { ST32(R(2)+12,R(14)); goto L8c06a064; }
L8c06a032:;
  R(6)=LD32(R(15));
  R(5)=R(11);
  R(2)=LD32(R(11)+4);
  { uint32_t tg=R(2); c->pr=0x8c06a03cu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06a050;
  R(4)=LD32(R(15));
  fp_ld(c,3,R(4));
  fp_ftrc(c,3);
  { R(4)=c->fpul; goto L8c06a054; }
L8c06a050:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4));
L8c06a054:;
  R(2)=0x8c04ce60u;
  R(5)=R(4);
  { c->pr=0x8c06a05cu; R(4)=R(13); f_8c04ce60(c); }
  R(3)=LD32(R(15));
  ST32(R(3),R(13));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(14));
L8c06a064:;
  { R(0)=LD32(R(15)+8); goto L8c06a11c; }
L8c06a0a0:;
  R(10)=LD32(R(15));
  R(5)=R(11);
  R(2)=LD32(R(11)+4);
  R(14)=R(12);
  R(6)=R(10);
  { uint32_t tg=R(2); c->pr=0x8c06a0aeu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(11)=R(0);
  { c->pr=0x8c06a0b6u; R(4)=R(10); f_8c071ce0(c); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(10);
  R(13)=R(0);
  { uint32_t tg=R(2); c->pr=0x8c06a0c2u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  { R(11)=LD32(R(10)); goto L8c06a0d2; }
L8c06a0c8:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(int32_t)R(0)==58;
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c06a0c8; }
L8c06a0d2:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(int32_t)R(0)==47;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c06a0c8; }
  R(14)+=0xffffffffu;
  R(11)+=R(14);
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=!c->t; ST32(R(15)+8,R(2)); if(k) goto L8c06a10c; }
  R(1)=0x8c019e40u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c06a0f0u; R(4)=R(13); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c06a10c;
  R(11)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)=LD32(R(15));
  R(0)=R(11);
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  ST32(R(3),R(2));
  R(2)=0x6u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  {  goto L8c06a116; }
L8c06a10c:;
  R(1)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(1),R(12));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
L8c06a116:;
  { R(0)=LD32(R(15)+12); goto L8c06a11c; }
L8c06a11a:;
  R(0)=R(11);
L8c06a11c:;
  R(15)+=0x44u;
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
void f_8c069e60(SH4Ctx *c) {
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
  R(14)+=0xcu;
  R(6)=LD32(R(15));
  R(10)=LD32(R(14));
  R(14)+=0xcu;
  R(9)=LD32(R(14));
  R(14)+=0xcu;
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c069e7eu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c069e92;
  R(13)=LD32(R(15));
  fp_ld(c,3,R(13));
  fp_ftrc(c,3);
  { R(13)=c->fpul; goto L8c069e96; }
L8c069e92:;
  R(13)=LD32(R(15));
  R(13)=LD32(R(13));
L8c069e96:;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c069eb0;
  R(4)=R(13)&0xFF;
  R(2)=0x8c064e90u;
  R(6)=0x641u;
  R(4)<<=2;
  R(5)=0x8c0bbaecu;
  { c->pr=0x8c069eacu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c069ebe; }
L8c069eb0:;
  R(4)=R(13)&0xFF;
  R(2)=0x8c0199c4u;
  R(6)=0x641u;
  R(4)<<=2;
  R(5)=0x8c0bbaecu;
  { c->pr=0x8c069ebeu; R(4)<<=2; f_8c0199c4(c); }
L8c069ebe:;
  R(13)=R(13)&0xFF;
  R(12)=R(0);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+16);
  R(4)=R(15);
  R(3)=0x8c056e20u;
  R(6)=LD32(R(15)+28);
  fp_mov(c,4,15);
  { c->pr=0x8c069edau; R(4)+=0x20u; f_8c056e20(c); }
  R(15)+=0xcu;
  R(13)=0x8c0729f6u;
  R(14)=R(0);
  R(0)=R(14);
  { ST8(R(15)+8,R(0)); goto L8c069f92; }
L8c069f20:;
  R(11)=R(14)&0xFF;
  R(2)=LD32(R(15));
  R(11)<<=2;
  R(5)=R(14);
  R(11)<<=2;
  R(11)+=R(12);
  R(3)=(int32_t)(int16_t)LD16(R(11));
  ST32(R(2),R(3));
  R(3)=0x6u;
  R(2)=LD32(R(15));
  ST32(R(2)+12,R(3));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f44u; R(4)=R(8); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  R(0)=(int32_t)(int16_t)LD16(R(11)+2);
  R(5)=R(14);
  ST32(R(3),R(0));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f66u; R(4)=R(10); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
  R(3)=0x8c05e6eau;
  R(5)=R(11);
  R(5)+=0x4u;
  { c->pr=0x8c069f76u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  R(5)=R(14);
  ST32(R(2)+12,R(3));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f8cu; R(4)=R(9); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
L8c069f92:;
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(14)+=0xffffffffu; if(k) goto L8c069f20; }
L8c069f9a:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(1)=LD32(R(15));
  R(0)=R(0)&0xFF;
  ST32(R(1),R(0));
  R(3)=LD32(R(15));
  { ST32(R(3)+12,R(2)); goto L8c06a116; }
L8c06a116:;
  { R(0)=LD32(R(15)+12); goto L8c06a11c; }
L8c06a11c:;
  R(15)+=0x44u;
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
void f_8c069f20(SH4Ctx *c) {
L8c069f20:;
  R(11)=R(14)&0xFF;
  R(2)=LD32(R(15));
  R(11)<<=2;
  R(5)=R(14);
  R(11)<<=2;
  R(11)+=R(12);
  R(3)=(int32_t)(int16_t)LD16(R(11));
  ST32(R(2),R(3));
  R(3)=0x6u;
  R(2)=LD32(R(15));
  ST32(R(2)+12,R(3));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f44u; R(4)=R(8); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  R(0)=(int32_t)(int16_t)LD16(R(11)+2);
  R(5)=R(14);
  ST32(R(3),R(0));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f66u; R(4)=R(10); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
  R(3)=0x8c05e6eau;
  R(5)=R(11);
  R(5)+=0x4u;
  { c->pr=0x8c069f76u; R(4)=LD32(R(15)); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  R(5)=R(14);
  ST32(R(2)+12,R(3));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6)+12);
  R(6)=LD32(R(6));
  { uint32_t tg=R(13); c->pr=0x8c069f8cu; R(4)=R(9); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c069f9a;
  R(3)=R(14)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(14)+=0xffffffffu; if(k) goto L8c069f20; }
L8c069f9a:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(2)=0x6u;
  R(1)=LD32(R(15));
  R(0)=R(0)&0xFF;
  ST32(R(1),R(0));
  R(3)=LD32(R(15));
  { ST32(R(3)+12,R(2)); goto L8c06a116; }
L8c06a116:;
  { R(0)=LD32(R(15)+12); goto L8c06a11c; }
L8c06a11c:;
  R(15)+=0x44u;
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
void f_8c06a0a0(SH4Ctx *c) {
  R(10)=LD32(R(15));
  R(5)=R(11);
  R(2)=LD32(R(11)+4);
  R(14)=R(12);
  R(6)=R(10);
  { uint32_t tg=R(2); c->pr=0x8c06a0aeu; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(11)=R(0);
  { c->pr=0x8c06a0b6u; R(4)=R(10); f_8c071ce0(c); }
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(10);
  R(13)=R(0);
  { uint32_t tg=R(2); c->pr=0x8c06a0c2u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  ST32(R(15)+12,R(0));
  { R(11)=LD32(R(10)); goto L8c06a0d2; }
L8c06a0c8:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(int32_t)R(0)==58;
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c06a0c8; }
L8c06a0d2:;
  R(0)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(int32_t)R(0)==47;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c06a0c8; }
  R(14)+=0xffffffffu;
  R(11)+=R(14);
  R(2)=(uint32_t)(int32_t)(int16_t)R(11);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=!c->t; ST32(R(15)+8,R(2)); if(k) goto L8c06a10c; }
  R(1)=0x8c019e40u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c06a0f0u; R(4)=R(13); f_8c019e40(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(c->t) goto L8c06a10c;
  R(11)=(uint32_t)(int32_t)(int16_t)R(11);
  R(3)=LD32(R(15));
  R(0)=R(11);
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  ST32(R(3),R(2));
  R(2)=0x6u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  {  goto L8c06a116; }
L8c06a10c:;
  R(1)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(1),R(12));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
L8c06a116:;
  { R(0)=LD32(R(15)+12); goto L8c06a11c; }
L8c06a11c:;
  R(15)+=0x44u;
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
void f_8c06a132(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c06a160;
  R(2)=0x8c05a3e0u;
  R(14)=LD32(R(4)+32);
  { c->pr=0x8c06a142u; R(4)=R(14); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06a160;
  R(2)=0x8c05a40eu;
  { c->pr=0x8c06a14cu; R(4)=R(14); f_8c05a40e(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06a160;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c06a160;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c087e94u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c087e94(c); return; } }
L8c06a160:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06a168(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  ST32(R(15),R(4));
  R(13)=R(6);
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c06a1c0; }
  R(3)=0x0u;
  ST32(R(15)+4,R(4));
  { ST32(R(5),R(3)); goto L8c06a1c4; }
L8c06a1c0:;
  R(1)=LD32(R(15));
  ST32(R(15)+4,R(1));
L8c06a1c4:;
  R(3)=0x8c0721b8u;
  { c->pr=0x8c06a1cau; R(4)=LD32(R(15)+4); f_8c0721b8(c); }
  R(14)=R(0);
  R(1)=0xcau;
  R(0)=LD32(R(15)+8);
  R(8)=0x15u;
  R(9)=0x1au;
  c->fr[15]=0x00000000u;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(10)=0x8u; if(k) goto L8c06a240; }
  R(1)=0xcbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a1e6;
  {  goto L8c06a2a6; }
L8c06a1e6:;
  R(1)=0xc6u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a1f0;
  {  goto L8c06a360; }
L8c06a1f0:;
  R(1)=0xc7u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a1fa;
  {  goto L8c06a400; }
L8c06a1fa:;
  R(1)=0xc5u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a204;
  {  goto L8c06a460; }
L8c06a204:;
  R(1)=0xc9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a20e;
  {  goto L8c06a474; }
L8c06a20e:;
  R(1)=0xc8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a218;
  {  goto L8c06a4fa; }
L8c06a218:;
  {  goto L8c06a50c; }
L8c06a240:;
  R(10)=LD32(R(14)+4);
  R(4)=0x10000u;
  R(3)=R(10);
  R(3)&=R(4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c06a254;
  R(4)=0x80u;
  { c->pr=0x8c06a252u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a254:;
  R(0)=0x1u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06a264;
  R(4)=R(14);
  { c->pr=0x8c06a262u; R(4)+=0x30u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a264:;
  R(0)=0x4u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c06a274;
  R(4)=R(14);
  { c->pr=0x8c06a272u; R(4)+=0x58u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a274:;
  R(0)=0x40u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c06a284;
  R(4)=0xa8u;
  { c->pr=0x8c06a282u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a284:;
  R(0)=0x10u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c06a294;
  R(4)=0xd0u;
  { c->pr=0x8c06a292u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a294:;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c06a2a0;
  R(4)=R(14);
  { c->pr=0x8c06a29eu; R(4)+=0x8u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a2a0:;
  R(11)=R(11)&0xFFFF;
  { ST32(R(13),R(11)); goto L8c06a32a; }
L8c06a2a6:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c06a2b0u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06a300; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06a306;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a30c;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06a312;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06a318;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06a31e;
  R(3)=0x0u;
  { ST32(R(13),R(3)); goto L8c06a32a; }
L8c06a300:;
  R(4)=R(14);
  { R(4)+=0x8u; goto L8c06a322; }
L8c06a306:;
  R(4)=R(14);
  { R(4)+=0x30u; goto L8c06a322; }
L8c06a30c:;
  R(4)=R(14);
  { R(4)+=0x58u; goto L8c06a322; }
L8c06a312:;
  R(4)=0x80u;
  {  goto L8c06a320; }
L8c06a318:;
  R(4)=0xa8u;
  {  goto L8c06a320; }
L8c06a31e:;
  R(4)=0xd0u;
L8c06a320:;
  R(4)+=R(14);
L8c06a322:;
  { c->pr=0x8c06a326u;  f_8c06a132(c); }
  R(0)=R(0)&0xFFFF;
  ST32(R(13),R(0));
L8c06a32a:;
  { ST32(R(13)+12,R(9)); goto L8c06a514; }
L8c06a360:;
  R(3)=0x8c0bbb00u;
  R(2)=R(15);
  R(2)+=0xcu;
  R(6)=R(13);
  R(1)=LD32(R(3));
  R(5)=R(12);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(11)=LD32(R(12)+4);
  { uint32_t tg=R(11); c->pr=0x8c06a37cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06a3a0; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06a3a6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a3ac;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06a3e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06a3e6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06a3ec;
  R(5)=R(15);
  { R(5)+=0xcu; goto L8c06a3f4; }
L8c06a3a0:;
  R(12)=R(14);
  { R(12)+=0x8u; goto L8c06a3f0; }
L8c06a3a6:;
  R(12)=R(14);
  { R(12)+=0x30u; goto L8c06a3f0; }
L8c06a3ac:;
  R(12)=R(14);
  { R(12)+=0x58u; goto L8c06a3f0; }
L8c06a3e0:;
  R(12)=0x80u;
  {  goto L8c06a3ee; }
L8c06a3e6:;
  R(12)=0xa8u;
  {  goto L8c06a3ee; }
L8c06a3ec:;
  R(12)=0xd0u;
L8c06a3ee:;
  R(12)+=R(14);
L8c06a3f0:;
  R(5)=R(12);
  R(5)+=0x10u;
L8c06a3f4:;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c06a3fau; R(4)=R(13); f_8c05e6ea(c); }
  ST32(R(13)+12,R(8));
  { R(0)=R(11); goto L8c06a516; }
L8c06a400:;
  R(3)=0x8c05a42eu;
  R(5)=0x2u;
  ST32(R(13)+12,R(8));
  R(11)=R(13);
  R(14)+=0x30u;
  { c->pr=0x8c06a40eu; R(4)=LD32(R(14)+32); f_8c05a42e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06a422;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+20);
  ST32(R(11),R(3));
  ST32(R(11)+4,R(2));
  R(3)=LD32(R(14)+24);
  { ST32(R(11)+8,R(3)); goto L8c06a514; }
L8c06a422:;
  R(0)=0x4u;
  fp_st(c,15,R(11));
  fp_st(c,15,R(0)+R(11));
  R(0)=0x8u;
  { fp_st(c,15,R(0)+R(11)); goto L8c06a514; }
L8c06a460:;
  R(2)=R(14);
  R(2)+=0x8u;
  R(5)=R(2);
  R(3)=0x8c05e6eau;
  R(5)+=0x10u;
  ST32(R(15),R(2));
  { c->pr=0x8c06a470u; R(4)=R(13); f_8c05e6ea(c); }
  { ST32(R(13)+12,R(8)); goto L8c06a514; }
L8c06a474:;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c06a47eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06a4a0; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06a4a6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a4ac;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06a4e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06a4e6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06a4ec;
  { fp_st(c,15,R(13)); goto L8c06a4f4; }
L8c06a4a0:;
  R(4)=R(14);
  { R(4)+=0x8u; goto L8c06a4f0; }
L8c06a4a6:;
  R(4)=R(14);
  { R(4)+=0x30u; goto L8c06a4f0; }
L8c06a4ac:;
  R(4)=R(14);
  { R(4)+=0x58u; goto L8c06a4f0; }
L8c06a4e0:;
  R(4)=0x80u;
  {  goto L8c06a4ee; }
L8c06a4e6:;
  R(4)=0xa8u;
  {  goto L8c06a4ee; }
L8c06a4ec:;
  R(4)=0xd0u;
L8c06a4ee:;
  R(4)+=R(14);
L8c06a4f0:;
  fp_ld(c,3,R(4));
  fp_st(c,3,R(13));
L8c06a4f4:;
  ST32(R(13)+12,R(10));
  { R(0)=R(5); goto L8c06a516; }
L8c06a4fa:;
  R(4)=R(14);
  R(4)+=0x8u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(13));
  ST32(R(13)+12,R(10));
  fp_ld(c,2,R(4));
  fp_st(c,2,R(13));
  { ST32(R(13)+12,R(10)); goto L8c06a514; }
L8c06a50c:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06a514u; R(4)=0x27u; f_8c074080(c); }
L8c06a514:;
  R(0)=R(12);
L8c06a516:;
  R(15)+=0x18u;
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
void f_8c06a1c0(SH4Ctx *c) {
  R(1)=LD32(R(15));
  ST32(R(15)+4,R(1));
  R(3)=0x8c0721b8u;
  { c->pr=0x8c06a1cau; R(4)=LD32(R(15)+4); f_8c0721b8(c); }
  R(14)=R(0);
  R(1)=0xcau;
  R(0)=LD32(R(15)+8);
  R(8)=0x15u;
  R(9)=0x1au;
  c->fr[15]=0x00000000u;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(10)=0x8u; if(k) goto L8c06a240; }
  R(1)=0xcbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a1e6;
  {  goto L8c06a2a6; }
L8c06a1e6:;
  R(1)=0xc6u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a1f0;
  {  goto L8c06a360; }
L8c06a1f0:;
  R(1)=0xc7u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a1fa;
  {  goto L8c06a400; }
L8c06a1fa:;
  R(1)=0xc5u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a204;
  {  goto L8c06a460; }
L8c06a204:;
  R(1)=0xc9u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a20e;
  {  goto L8c06a474; }
L8c06a20e:;
  R(1)=0xc8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06a218;
  {  goto L8c06a4fa; }
L8c06a218:;
  {  goto L8c06a50c; }
L8c06a240:;
  R(10)=LD32(R(14)+4);
  R(4)=0x10000u;
  R(3)=R(10);
  R(3)&=R(4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c06a254;
  R(4)=0x80u;
  { c->pr=0x8c06a252u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a254:;
  R(0)=0x1u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06a264;
  R(4)=R(14);
  { c->pr=0x8c06a262u; R(4)+=0x30u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a264:;
  R(0)=0x4u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c06a274;
  R(4)=R(14);
  { c->pr=0x8c06a272u; R(4)+=0x58u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a274:;
  R(0)=0x40u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c06a284;
  R(4)=0xa8u;
  { c->pr=0x8c06a282u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a284:;
  R(0)=0x10u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c06a294;
  R(4)=0xd0u;
  { c->pr=0x8c06a292u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a294:;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c06a2a0;
  R(4)=R(14);
  { c->pr=0x8c06a29eu; R(4)+=0x8u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a2a0:;
  R(11)=R(11)&0xFFFF;
  { ST32(R(13),R(11)); goto L8c06a32a; }
L8c06a2a6:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c06a2b0u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06a300; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06a306;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a30c;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06a312;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06a318;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06a31e;
  R(3)=0x0u;
  { ST32(R(13),R(3)); goto L8c06a32a; }
L8c06a300:;
  R(4)=R(14);
  { R(4)+=0x8u; goto L8c06a322; }
L8c06a306:;
  R(4)=R(14);
  { R(4)+=0x30u; goto L8c06a322; }
L8c06a30c:;
  R(4)=R(14);
  { R(4)+=0x58u; goto L8c06a322; }
L8c06a312:;
  R(4)=0x80u;
  {  goto L8c06a320; }
L8c06a318:;
  R(4)=0xa8u;
  {  goto L8c06a320; }
L8c06a31e:;
  R(4)=0xd0u;
L8c06a320:;
  R(4)+=R(14);
L8c06a322:;
  { c->pr=0x8c06a326u;  f_8c06a132(c); }
  R(0)=R(0)&0xFFFF;
  ST32(R(13),R(0));
L8c06a32a:;
  { ST32(R(13)+12,R(9)); goto L8c06a514; }
L8c06a360:;
  R(3)=0x8c0bbb00u;
  R(2)=R(15);
  R(2)+=0xcu;
  R(6)=R(13);
  R(1)=LD32(R(3));
  R(5)=R(12);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(11)=LD32(R(12)+4);
  { uint32_t tg=R(11); c->pr=0x8c06a37cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06a3a0; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06a3a6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a3ac;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06a3e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06a3e6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06a3ec;
  R(5)=R(15);
  { R(5)+=0xcu; goto L8c06a3f4; }
L8c06a3a0:;
  R(12)=R(14);
  { R(12)+=0x8u; goto L8c06a3f0; }
L8c06a3a6:;
  R(12)=R(14);
  { R(12)+=0x30u; goto L8c06a3f0; }
L8c06a3ac:;
  R(12)=R(14);
  { R(12)+=0x58u; goto L8c06a3f0; }
L8c06a3e0:;
  R(12)=0x80u;
  {  goto L8c06a3ee; }
L8c06a3e6:;
  R(12)=0xa8u;
  {  goto L8c06a3ee; }
L8c06a3ec:;
  R(12)=0xd0u;
L8c06a3ee:;
  R(12)+=R(14);
L8c06a3f0:;
  R(5)=R(12);
  R(5)+=0x10u;
L8c06a3f4:;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c06a3fau; R(4)=R(13); f_8c05e6ea(c); }
  ST32(R(13)+12,R(8));
  { R(0)=R(11); goto L8c06a516; }
L8c06a400:;
  R(3)=0x8c05a42eu;
  R(5)=0x2u;
  ST32(R(13)+12,R(8));
  R(11)=R(13);
  R(14)+=0x30u;
  { c->pr=0x8c06a40eu; R(4)=LD32(R(14)+32); f_8c05a42e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06a422;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+20);
  ST32(R(11),R(3));
  ST32(R(11)+4,R(2));
  R(3)=LD32(R(14)+24);
  { ST32(R(11)+8,R(3)); goto L8c06a514; }
L8c06a422:;
  R(0)=0x4u;
  fp_st(c,15,R(11));
  fp_st(c,15,R(0)+R(11));
  R(0)=0x8u;
  { fp_st(c,15,R(0)+R(11)); goto L8c06a514; }
L8c06a460:;
  R(2)=R(14);
  R(2)+=0x8u;
  R(5)=R(2);
  R(3)=0x8c05e6eau;
  R(5)+=0x10u;
  ST32(R(15),R(2));
  { c->pr=0x8c06a470u; R(4)=R(13); f_8c05e6ea(c); }
  { ST32(R(13)+12,R(8)); goto L8c06a514; }
L8c06a474:;
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(3); c->pr=0x8c06a47eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06a4a0; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06a4a6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a4ac;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06a4e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06a4e6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06a4ec;
  { fp_st(c,15,R(13)); goto L8c06a4f4; }
L8c06a4a0:;
  R(4)=R(14);
  { R(4)+=0x8u; goto L8c06a4f0; }
L8c06a4a6:;
  R(4)=R(14);
  { R(4)+=0x30u; goto L8c06a4f0; }
L8c06a4ac:;
  R(4)=R(14);
  { R(4)+=0x58u; goto L8c06a4f0; }
L8c06a4e0:;
  R(4)=0x80u;
  {  goto L8c06a4ee; }
L8c06a4e6:;
  R(4)=0xa8u;
  {  goto L8c06a4ee; }
L8c06a4ec:;
  R(4)=0xd0u;
L8c06a4ee:;
  R(4)+=R(14);
L8c06a4f0:;
  fp_ld(c,3,R(4));
  fp_st(c,3,R(13));
L8c06a4f4:;
  ST32(R(13)+12,R(10));
  { R(0)=R(5); goto L8c06a516; }
L8c06a4fa:;
  R(4)=R(14);
  R(4)+=0x8u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(13));
  ST32(R(13)+12,R(10));
  fp_ld(c,2,R(4));
  fp_st(c,2,R(13));
  { ST32(R(13)+12,R(10)); goto L8c06a514; }
L8c06a50c:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06a514u; R(4)=0x27u; f_8c074080(c); }
L8c06a514:;
  R(0)=R(12);
L8c06a516:;
  R(15)+=0x18u;
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
void f_8c06a240(SH4Ctx *c) {
  R(10)=LD32(R(14)+4);
  R(4)=0x10000u;
  R(3)=R(10);
  R(3)&=R(4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c06a254;
  R(4)=0x80u;
  { c->pr=0x8c06a252u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a254:;
  R(0)=0x1u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06a264;
  R(4)=R(14);
  { c->pr=0x8c06a262u; R(4)+=0x30u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a264:;
  R(0)=0x4u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c06a274;
  R(4)=R(14);
  { c->pr=0x8c06a272u; R(4)+=0x58u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a274:;
  R(0)=0x40u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c06a284;
  R(4)=0xa8u;
  { c->pr=0x8c06a282u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a284:;
  R(0)=0x10u;
  R(0)&=R(10);
  c->t=(int32_t)R(0)==16;
  if(!c->t) goto L8c06a294;
  R(4)=0xd0u;
  { c->pr=0x8c06a292u; R(4)+=R(14); f_8c06a132(c); }
  R(11)|=R(0);
L8c06a294:;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c06a2a0;
  R(4)=R(14);
  { c->pr=0x8c06a29eu; R(4)+=0x8u; f_8c06a132(c); }
  R(11)|=R(0);
L8c06a2a0:;
  R(11)=R(11)&0xFFFF;
  { ST32(R(13),R(11)); goto L8c06a32a; }
L8c06a32a:;
  { ST32(R(13)+12,R(9)); goto L8c06a514; }
L8c06a514:;
  R(0)=R(12);
  R(15)+=0x18u;
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
void f_8c06a300(SH4Ctx *c) {
  R(4)=R(14);
  { R(4)+=0x8u; goto L8c06a322; }
L8c06a322:;
  { c->pr=0x8c06a326u;  f_8c06a132(c); }
  R(0)=R(0)&0xFFFF;
  ST32(R(13),R(0));
  { ST32(R(13)+12,R(9)); goto L8c06a514; }
L8c06a514:;
  R(0)=R(12);
  R(15)+=0x18u;
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
void f_8c06a360(SH4Ctx *c) {
  R(3)=0x8c0bbb00u;
  R(2)=R(15);
  R(2)+=0xcu;
  R(6)=R(13);
  R(1)=LD32(R(3));
  R(5)=R(12);
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  R(11)=LD32(R(12)+4);
  { uint32_t tg=R(11); c->pr=0x8c06a37cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06a3a0; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06a3a6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a3ac;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06a3e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06a3e6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06a3ec;
  R(5)=R(15);
  { R(5)+=0xcu; goto L8c06a3f4; }
L8c06a3a0:;
  R(12)=R(14);
  { R(12)+=0x8u; goto L8c06a3f0; }
L8c06a3a6:;
  R(12)=R(14);
  { R(12)+=0x30u; goto L8c06a3f0; }
L8c06a3ac:;
  R(12)=R(14);
  { R(12)+=0x58u; goto L8c06a3f0; }
L8c06a3e0:;
  R(12)=0x80u;
  {  goto L8c06a3ee; }
L8c06a3e6:;
  R(12)=0xa8u;
  {  goto L8c06a3ee; }
L8c06a3ec:;
  R(12)=0xd0u;
L8c06a3ee:;
  R(12)+=R(14);
L8c06a3f0:;
  R(5)=R(12);
  R(5)+=0x10u;
L8c06a3f4:;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c06a3fau; R(4)=R(13); f_8c05e6ea(c); }
  ST32(R(13)+12,R(8));
  { R(0)=R(11); goto L8c06a516; }
L8c06a516:;
  R(15)+=0x18u;
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
void f_8c06a3e0(SH4Ctx *c) {
  R(12)=0x80u;
  {  goto L8c06a3ee; }
L8c06a3ee:;
  R(12)+=R(14);
  R(5)=R(12);
  R(5)+=0x10u;
  R(3)=0x8c05e6eau;
  { c->pr=0x8c06a3fau; R(4)=R(13); f_8c05e6ea(c); }
  ST32(R(13)+12,R(8));
  { R(0)=R(11); goto L8c06a516; }
L8c06a516:;
  R(15)+=0x18u;
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
void f_8c06a460(SH4Ctx *c) {
  R(2)=R(14);
  R(2)+=0x8u;
  R(5)=R(2);
  R(3)=0x8c05e6eau;
  R(5)+=0x10u;
  ST32(R(15),R(2));
  { c->pr=0x8c06a470u; R(4)=R(13); f_8c05e6ea(c); }
  { ST32(R(13)+12,R(8)); goto L8c06a514; }
L8c06a514:;
  R(0)=R(12);
  R(15)+=0x18u;
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
void f_8c06a4e0(SH4Ctx *c) {
  R(4)=0x80u;
  {  goto L8c06a4ee; }
L8c06a4ee:;
  R(4)+=R(14);
  fp_ld(c,3,R(4));
  fp_st(c,3,R(13));
  ST32(R(13)+12,R(10));
  { R(0)=R(5); goto L8c06a516; }
L8c06a516:;
  R(15)+=0x18u;
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
void f_8c06a560(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(5);
  R(5)=R(14);
  R(5)+=0xfffffff4u;
  R(3)=0xd6u;
  ST32(R(15),R(6));
  R(5)=LD32(R(5));
  c->t=R(5)==R(3);
  if(!c->t) goto L8c06a5b2;
  R(6)=R(15);
  R(1)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(1); c->pr=0x8c06a580u; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x8c083400u;
  ST32(R(15)+4,R(0));
  R(4)=LD32(R(15)+8);
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06a58cu; R(4)=LD32(R(4)+12); f_8c083400(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(2)=LD32(R(15)); if(k) goto L8c06a59a; }
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a59e;
L8c06a59a:;
  { R(3)=0x0u; goto L8c06a5a0; }
L8c06a59e:;
  R(3)=LD32(R(4)+4);
L8c06a5a0:;
  ST32(R(2),R(3));
  R(3)=0xbu;
  R(2)=LD32(R(15));
  ST32(R(2)+12,R(3));
  R(0)=LD32(R(15)+4);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c06a5b2:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06a5bau; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06a5b2(SH4Ctx *c) {
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06a5bau; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06a600(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(8)=0x0u;
  R(14)=R(6);
  R(6)=R(14);
  R(5)=R(13);
  ST32(R(15)+4,R(2));
  R(12)=R(4);
  R(10)=LD32(R(13)+4);
  R(11)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c06a62eu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=0x8c2dd0b0u;
  R(5)=R(14);
  fp_ld(c,3,R(5));
  fp_ld(c,2,R(4));
  R(13)=0x8c05e6eau;
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(10)=R(0); if(k) goto L8c06a652; }
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06a652;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c06a65a;
L8c06a652:;
  R(4)=0x8c2dd0b0u;
  { uint32_t tg=R(13); c->pr=0x8c06a658u;  sh4_call(c,tg); }
  R(11)=0x1u;
L8c06a65a:;
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06a664u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=0x8c2dd0bcu;
  R(5)=R(14);
  fp_ld(c,3,R(5));
  fp_ld(c,2,R(4));
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(10)=R(0); if(k) goto L8c06a686; }
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06a686;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c06a68e;
L8c06a686:;
  R(4)=0x8c2dd0bcu;
  { uint32_t tg=R(13); c->pr=0x8c06a68cu;  sh4_call(c,tg); }
  R(11)=0x1u;
L8c06a68e:;
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06a698u; R(4)=R(12); sh4_call(c,tg); }
  R(10)=0x8c2dd0e0u;
  c->t=(R(11)&R(11))==0;
  ST32(R(15),R(0));
  { uint32_t k=!c->t; R(9)=LD32(R(14)); if(k) goto L8c06a6b6; }
  R(0)=0x8c0c7628u;
  R(1)=0x8c123b74u;
  R(3)=LD32(R(0));
  R(2)=LD32(R(1));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c06a6b6;
  R(3)=0x8c0c7624u;
  R(2)=LD32(R(3));
  c->t=R(2)==R(9);
  if(c->t) goto L8c06a6de;
L8c06a6b6:;
  R(5)=0x8c2dd0bcu;
  R(4)=R(15);
  { uint32_t tg=R(13); c->pr=0x8c06a6beu; R(4)+=0x8u; sh4_call(c,tg); }
  R(2)=0x8c123b74u;
  R(1)=0x8c0c7628u;
  R(3)=LD32(R(2));
  R(2)=0x8c0c7f08u;
  ST32(R(1),R(3));
  R(3)=0x8c0c7624u;
  R(1)=0x8c0687c0u;
  ST32(R(10),R(8));
  ST32(R(3),R(9));
  ST32(R(2),R(8));
  { c->pr=0x8c06a6d6u; R(4)=R(12); f_8c0687c0(c); }
  R(4)=0x8c2dd0bcu;
  R(5)=R(15);
  { uint32_t tg=R(13); c->pr=0x8c06a6deu; R(5)+=0x8u; sh4_call(c,tg); }
L8c06a6de:;
  R(1)=0xccu;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06a740;
  R(1)=0xcdu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06a746;
  R(1)=0xceu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06a750;
  {  goto L8c06a76c; }
L8c06a740:;
  R(5)=0x8c2dd0c8u;
  {  goto L8c06a748; }
L8c06a746:;
  R(5)=0x8c2dd0d4u;
L8c06a748:;
  { uint32_t tg=R(13); c->pr=0x8c06a74cu; R(4)=R(14); sh4_call(c,tg); }
  { R(3)=0x15u; goto L8c06a76a; }
L8c06a750:;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06a75e;
  R(0)=LD32(R(10));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06a762;
L8c06a75e:;
  { R(1)=0x0u; goto L8c06a766; }
L8c06a762:;
  R(2)=LD32(R(10));
  R(1)=LD32(R(2)+4);
L8c06a766:;
  R(3)=0xbu;
  ST32(R(14),R(1));
L8c06a76a:;
  ST32(R(14)+12,R(3));
L8c06a76c:;
  R(1)=0x8c0c762cu;
  R(2)=0x40u;
  ST32(R(1),R(2));
  R(0)=LD32(R(15));
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
void f_8c06a740(SH4Ctx *c) {
  R(5)=0x8c2dd0c8u;
  {  goto L8c06a748; }
L8c06a748:;
  { uint32_t tg=R(13); c->pr=0x8c06a74cu; R(4)=R(14); sh4_call(c,tg); }
  { R(3)=0x15u; goto L8c06a76a; }
L8c06a76a:;
  ST32(R(14)+12,R(3));
  R(1)=0x8c0c762cu;
  R(2)=0x40u;
  ST32(R(1),R(2));
  R(0)=LD32(R(15));
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
void f_8c06a788(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(9)=R(5);
  R(10)=0x0u;
  ST32(R(15),R(5));
  R(12)=R(4);
  R(9)=LD32(R(9)+4);
  R(14)=R(6);
  R(11)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c06a7acu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=0x8c2dd0b0u;
  R(5)=R(14);
  fp_ld(c,3,R(5));
  fp_ld(c,2,R(4));
  R(13)=0x8c05e6eau;
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(9)=R(0); if(k) goto L8c06a7d0; }
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06a7d0;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c06a7d8;
L8c06a7d0:;
  R(4)=0x8c2dd0b0u;
  { uint32_t tg=R(13); c->pr=0x8c06a7d6u;  sh4_call(c,tg); }
  R(11)=0x1u;
L8c06a7d8:;
  R(2)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06a7e2u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=0x8c2dd0bcu;
  R(5)=R(14);
  fp_ld(c,3,R(5));
  fp_ld(c,2,R(4));
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(9)=R(0); if(k) goto L8c06a804; }
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06a804;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c06a80c;
L8c06a804:;
  R(4)=0x8c2dd0bcu;
  { uint32_t tg=R(13); c->pr=0x8c06a80au;  sh4_call(c,tg); }
  R(11)=0x1u;
L8c06a80c:;
  R(8)=LD32(R(9)+4);
  R(5)=R(9);
  R(6)=R(14);
  { uint32_t tg=R(8); c->pr=0x8c06a816u; R(4)=R(12); sh4_call(c,tg); }
  R(8)=R(0);
  R(3)=LD32(R(8)+4);
  R(9)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06a824u; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(11)&R(11))==0;
  ST32(R(15),R(0));
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(3)=R(3)&0xFFFF;
  { uint32_t k=!c->t; ST32(R(15)+4,R(3)); if(k) goto L8c06a844; }
  R(2)=0x8c123b74u;
  R(0)=0x8c0c7628u;
  R(1)=LD32(R(2));
  R(2)=LD32(R(0));
  c->t=R(2)==R(1);
  if(!c->t) goto L8c06a844;
  R(1)=0x8c0c7624u;
  R(2)=LD32(R(1));
  c->t=R(2)==R(9);
  if(c->t) goto L8c06a874;
L8c06a844:;
  R(5)=0x8c2dd0bcu;
  R(4)=R(15);
  { uint32_t tg=R(13); c->pr=0x8c06a84cu; R(4)+=0x8u; sh4_call(c,tg); }
  R(3)=0x8c0c7f08u;
  R(2)=LD32(R(15)+4);
  R(0)=0x8c0c7628u;
  ST32(R(3),R(2));
  R(2)=0x8c123b74u;
  R(3)=0x8c2dd0e0u;
  R(1)=LD32(R(2));
  R(2)=0x8c0c7624u;
  ST32(R(0),R(1));
  R(1)=0x8c0687c0u;
  ST32(R(3),R(10));
  ST32(R(2),R(9));
  { c->pr=0x8c06a868u; R(4)=R(12); f_8c0687c0(c); }
  R(4)=0x8c2dd0bcu;
  R(5)=R(15);
  { uint32_t tg=R(13); c->pr=0x8c06a870u; R(5)+=0x8u; sh4_call(c,tg); }
  R(3)=0x8c0c7f08u;
  ST32(R(3),R(10));
L8c06a874:;
  R(1)=0x8c0c762cu;
  R(2)=0x40u;
  R(5)=0x8c2dd0c8u;
  ST32(R(1),R(2));
  { uint32_t tg=R(13); c->pr=0x8c06a880u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x15u;
  ST32(R(14)+12,R(3));
  R(0)=LD32(R(15));
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
void f_8c06a8e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(12)=R(5);
  R(14)=R(6);
  R(13)=R(4);
  ST32(R(15),R(5));
  R(12)=LD32(R(12)+4);
  { uint32_t tg=R(12); c->pr=0x8c06a8fau; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(3)=R(15);
  R(3)+=0x10u;
  R(12)=R(0);
  R(1)=LD32(R(14)+4);
  R(6)=R(14);
  ST32(R(3),R(2));
  R(5)=R(12);
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(14)+8);
  ST32(R(3)+8,R(2));
  R(0)=LD32(R(12)+4);
  { uint32_t tg=R(0); c->pr=0x8c06a916u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(3)=R(15);
  R(3)+=0x1cu;
  R(12)=R(0);
  R(1)=LD32(R(14)+4);
  R(6)=R(14);
  ST32(R(3),R(2));
  R(5)=R(12);
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(14)+8);
  ST32(R(3)+8,R(2));
  R(0)=LD32(R(12)+4);
  { uint32_t tg=R(0); c->pr=0x8c06a932u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06a93e;
  { fp_ld(c,15,R(14)); goto L8c06a946; }
L8c06a93e:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06a946:;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c06a952u; R(4)+=0x10u; f_8c05e55c(c); }
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  R(0)=0x1cu;
  R(5)=R(15);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  R(3)=0x8c05e5f4u;
  R(6)=R(15);
  fp_arith(c,2,0,3);
  R(4)=R(15);
  R(5)+=0x4u;
  R(6)+=0x10u;
  fp_mov(c,4,0);
  fp_unary(c,0,4);
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,1,4);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,4,2);
  fp_st(c,4,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c06a98eu; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x4u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(5)=R(15);
  R(3)=0x8c05e6eau;
  fp_arith(c,2,2,3);
  R(5)+=0x4u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c06a9bau; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x15u;
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06a9ce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(13)=R(6);
  R(6)=R(13);
  R(5)=R(14);
  R(10)=R(4);
  ST32(R(15),R(2));
  R(11)=0x0u;
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06a9fcu; R(4)=R(10); sh4_call(c,tg); }
  R(3)=LD32(R(13));
  R(2)=R(15);
  R(2)+=0x1cu;
  R(14)=R(0);
  R(1)=LD32(R(13)+4);
  R(6)=R(13);
  ST32(R(2),R(3));
  R(5)=R(14);
  ST32(R(2)+4,R(1));
  R(3)=LD32(R(13)+8);
  ST32(R(2)+8,R(3));
  R(12)=LD32(R(14)+4);
  { uint32_t tg=R(12); c->pr=0x8c06aa18u; R(4)=R(10); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0x8c06aaccu;
  R(3)=R(15);
  R(2)=LD32(R(13));
  R(3)+=0x10u;
  c->fr[2]=0x00000000u;
  R(1)=LD32(R(13)+4);
  ST32(R(3),R(2));
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(13)+8);
  ST32(R(3)+8,R(2));
  fp_ld(c,6,R(0));
  R(0)=0x1cu;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  { uint32_t k=!c->t; R(4)=0x1u; if(k) goto L8c06aa3e; }
  { fp_mov(c,3,15); goto L8c06aa42; }
L8c06aa3e:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c06aa42:;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c06aa7a;
  R(0)=0x20u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06aa56;
  R(0)=0x20u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c06aa5c; }
L8c06aa56:;
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c06aa5c:;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c06aa7a;
  R(0)=0x24u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06aa70;
  R(0)=0x24u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c06aa76; }
L8c06aa70:;
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c06aa76:;
  fp_cmp(c,1,6,3);
  if(c->t) goto L8c06aae0;
L8c06aa7a:;
  R(0)=0x20u;
  fp_mov(c,0,15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c06aae2; }
L8c06aae0:;
  R(11)=R(4);
L8c06aae2:;
  R(0)=0x10u;
  c->fr[2]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c06aaf0;
  { fp_mov(c,3,15); goto L8c06aaf4; }
L8c06aaf0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c06aaf4:;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c06ab2c;
  R(0)=0x14u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ab08;
  R(0)=0x14u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c06ab0e; }
L8c06ab08:;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c06ab0e:;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c06ab2c;
  R(0)=0x18u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ab22;
  R(0)=0x18u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c06ab28; }
L8c06ab22:;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c06ab28:;
  fp_cmp(c,1,6,3);
  if(c->t) goto L8c06ab68;
L8c06ab2c:;
  R(0)=0x14u;
  fp_mov(c,0,15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c06ab6a; }
L8c06ab68:;
  R(11)=R(4);
L8c06ab6a:;
  R(0)=LD32(R(15));
  R(14)=0x8u;
  R(1)=0xc0u;
  c->fr[14]=0x3F800000u;
  c->t=R(0)==R(1);
  c->fr[13]=0x00000000u;
  fp_unary(c,0,14);
  { uint32_t k=c->t; c->fr[15]=0x3F800000u; if(k) goto L8c06ab94; }
  R(1)=0xc1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06ab86;
  {  goto L8c06ac7a; }
L8c06ab86:;
  R(1)=0xc2u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06ab90;
  {  goto L8c06aca2; }
L8c06ab90:;
  {  goto L8c06ada6; }
L8c06ab94:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c06aba6;
  R(2)=0x8c072ff8u;
  { c->pr=0x8c06aba0u; R(4)=R(12); f_8c072ff8(c); }
  R(12)=R(0);
  { fp_mov(c,4,13); goto L8c06ac9c; }
L8c06aba6:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c06abb0u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(5)=R(15);
  R(12)=R(0);
  R(4)=R(15);
  ST8(R(15),R(3));
  R(5)+=0x10u;
  R(3)=0x8c05e55cu;
  { c->pr=0x8c06abc2u; R(4)+=0x1cu; f_8c05e55c(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06ac00;
  { fp_mov(c,4,15); goto L8c06ac06; }
L8c06ac00:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c06ac06;
  fp_mov(c,4,14);
L8c06ac06:;
  R(3)=0x8c09cf34u;
  { c->pr=0x8c06ac0cu;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_mov(c,5,0);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,11,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,9,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,10,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15));
  fp_mov(c,4,0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c06ac3e; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06ac4e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06ac60;
  {  goto L8c06ac72; }
L8c06ac3e:;
  fp_arith(c,2,8,7);
  c->fr[3]=0x00000000u;
  fp_arith(c,2,6,11);
  fp_arith(c,1,6,8);
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c06ac72;
  { fp_mov(c,4,5); goto L8c06ac72; }
L8c06ac4e:;
  fp_arith(c,2,8,9);
  c->fr[3]=0x00000000u;
  fp_arith(c,2,10,11);
  fp_mov(c,6,8);
  fp_arith(c,1,6,10);
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c06ac72;
  { fp_mov(c,4,5); goto L8c06ac72; }
L8c06ac60:;
  fp_arith(c,2,6,9);
  c->fr[2]=0x00000000u;
  fp_arith(c,2,10,7);
  fp_mov(c,3,6);
  fp_mov(c,6,10);
  fp_arith(c,1,6,3);
  fp_cmp(c,1,2,6);
  if(!c->t) goto L8c06ac72;
  fp_mov(c,4,5);
L8c06ac72:;
  R(0)=0x8c06acc4u;
  fp_ld(c,3,R(0));
  { fp_arith(c,2,4,3); goto L8c06ac9c; }
L8c06ac7a:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c06ac92;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c06ac8cu; R(4)+=0x1cu; f_8c05e55c(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06ac96;
L8c06ac92:;
  { fp_mov(c,4,15); goto L8c06ac9c; }
L8c06ac96:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c06ac9c;
  fp_mov(c,4,14);
L8c06ac9c:;
  fp_st(c,4,R(13));
  { ST32(R(13)+12,R(14)); goto L8c06ada6; }
L8c06aca2:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c06ace0;
  R(2)=0x8c072ff8u;
  { c->pr=0x8c06acaeu; R(4)=R(12); f_8c072ff8(c); }
  R(12)=R(0);
  { fp_mov(c,4,13); goto L8c06ada2; }
L8c06ace0:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c06aceau; R(4)=R(10); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  R(4)=(int32_t)(int8_t)LD8(R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=R(4)&0xFF;
  fp_mov(c,0,4);
  c->t=(int32_t)R(0)==0;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,6,2);
  fp_fmac(c,3,4);
  fp_mov(c,0,2);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_mov(c,5,3);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c06ad6c; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06ad7a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06ad88;
  {  goto L8c06ad94; }
L8c06ad6c:;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  { fp_mov(c,4,5); goto L8c06ad94; }
L8c06ad7a:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  { fp_mov(c,4,5); goto L8c06ad94; }
L8c06ad88:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  fp_mov(c,4,5);
L8c06ad94:;
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06ad9c;
  { fp_mov(c,4,15); goto L8c06ada2; }
L8c06ad9c:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c06ada2;
  fp_mov(c,4,14);
L8c06ada2:;
  fp_st(c,4,R(13));
  ST32(R(13)+12,R(14));
L8c06ada6:;
  R(0)=R(12);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06aae0(SH4Ctx *c) {
  R(11)=R(4);
  R(0)=0x10u;
  c->fr[2]=0x00000000u;
  fp_ld(c,15,R(0)+R(15));
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c06aaf0;
  { fp_mov(c,3,15); goto L8c06aaf4; }
L8c06aaf0:;
  fp_mov(c,3,15);
  fp_unary(c,0,3);
L8c06aaf4:;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c06ab2c;
  R(0)=0x14u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ab08;
  R(0)=0x14u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c06ab0e; }
L8c06ab08:;
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c06ab0e:;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c06ab2c;
  R(0)=0x18u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ab22;
  R(0)=0x18u;
  { fp_ld(c,3,R(0)+R(15)); goto L8c06ab28; }
L8c06ab22:;
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  fp_unary(c,0,3);
L8c06ab28:;
  fp_cmp(c,1,6,3);
  if(c->t) goto L8c06ab68;
L8c06ab2c:;
  R(0)=0x14u;
  fp_mov(c,0,15);
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_fmac(c,3,15);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(15)); goto L8c06ab6a; }
L8c06ab68:;
  R(11)=R(4);
L8c06ab6a:;
  R(0)=LD32(R(15));
  R(14)=0x8u;
  R(1)=0xc0u;
  c->fr[14]=0x3F800000u;
  c->t=R(0)==R(1);
  c->fr[13]=0x00000000u;
  fp_unary(c,0,14);
  { uint32_t k=c->t; c->fr[15]=0x3F800000u; if(k) goto L8c06ab94; }
  R(1)=0xc1u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06ab86;
  {  goto L8c06ac7a; }
L8c06ab86:;
  R(1)=0xc2u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06ab90;
  {  goto L8c06aca2; }
L8c06ab90:;
  {  goto L8c06ada6; }
L8c06ab94:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c06aba6;
  R(2)=0x8c072ff8u;
  { c->pr=0x8c06aba0u; R(4)=R(12); f_8c072ff8(c); }
  R(12)=R(0);
  { fp_mov(c,4,13); goto L8c06ac9c; }
L8c06aba6:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c06abb0u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(5)=R(15);
  R(12)=R(0);
  R(4)=R(15);
  ST8(R(15),R(3));
  R(5)+=0x10u;
  R(3)=0x8c05e55cu;
  { c->pr=0x8c06abc2u; R(4)+=0x1cu; f_8c05e55c(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06ac00;
  { fp_mov(c,4,15); goto L8c06ac06; }
L8c06ac00:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c06ac06;
  fp_mov(c,4,14);
L8c06ac06:;
  R(3)=0x8c09cf34u;
  { c->pr=0x8c06ac0cu;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_mov(c,5,0);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,11,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,9,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,10,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15));
  fp_mov(c,4,0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c06ac3e; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06ac4e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06ac60;
  {  goto L8c06ac72; }
L8c06ac3e:;
  fp_arith(c,2,8,7);
  c->fr[3]=0x00000000u;
  fp_arith(c,2,6,11);
  fp_arith(c,1,6,8);
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c06ac72;
  { fp_mov(c,4,5); goto L8c06ac72; }
L8c06ac4e:;
  fp_arith(c,2,8,9);
  c->fr[3]=0x00000000u;
  fp_arith(c,2,10,11);
  fp_mov(c,6,8);
  fp_arith(c,1,6,10);
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c06ac72;
  { fp_mov(c,4,5); goto L8c06ac72; }
L8c06ac60:;
  fp_arith(c,2,6,9);
  c->fr[2]=0x00000000u;
  fp_arith(c,2,10,7);
  fp_mov(c,3,6);
  fp_mov(c,6,10);
  fp_arith(c,1,6,3);
  fp_cmp(c,1,2,6);
  if(!c->t) goto L8c06ac72;
  fp_mov(c,4,5);
L8c06ac72:;
  R(0)=0x8c06acc4u;
  fp_ld(c,3,R(0));
  { fp_arith(c,2,4,3); goto L8c06ac9c; }
L8c06ac7a:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c06ac92;
  R(2)=0x8c05e55cu;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c06ac8cu; R(4)+=0x1cu; f_8c05e55c(c); }
  fp_mov(c,4,0);
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06ac96;
L8c06ac92:;
  { fp_mov(c,4,15); goto L8c06ac9c; }
L8c06ac96:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c06ac9c;
  fp_mov(c,4,14);
L8c06ac9c:;
  fp_st(c,4,R(13));
  { ST32(R(13)+12,R(14)); goto L8c06ada6; }
L8c06aca2:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c06ace0;
  R(2)=0x8c072ff8u;
  { c->pr=0x8c06acaeu; R(4)=R(12); f_8c072ff8(c); }
  R(12)=R(0);
  { fp_mov(c,4,13); goto L8c06ada2; }
L8c06ace0:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c06aceau; R(4)=R(10); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  R(4)=(int32_t)(int8_t)LD8(R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=R(4)&0xFF;
  fp_mov(c,0,4);
  c->t=(int32_t)R(0)==0;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,6,2);
  fp_fmac(c,3,4);
  fp_mov(c,0,2);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_mov(c,5,3);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c06ad6c; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06ad7a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06ad88;
  {  goto L8c06ad94; }
L8c06ad6c:;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  { fp_mov(c,4,5); goto L8c06ad94; }
L8c06ad7a:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  { fp_mov(c,4,5); goto L8c06ad94; }
L8c06ad88:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  fp_mov(c,4,5);
L8c06ad94:;
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06ad9c;
  { fp_mov(c,4,15); goto L8c06ada2; }
L8c06ad9c:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c06ada2;
  fp_mov(c,4,14);
L8c06ada2:;
  fp_st(c,4,R(13));
  ST32(R(13)+12,R(14));
L8c06ada6:;
  R(0)=R(12);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ac00(SH4Ctx *c) {
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c06ac06;
  fp_mov(c,4,14);
L8c06ac06:;
  R(3)=0x8c09cf34u;
  { c->pr=0x8c06ac0cu;  f_8c09cf34(c); }
  R(0)=0x1cu;
  fp_mov(c,5,0);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,11,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,8,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,9,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,10,R(0)+R(15));
  R(0)=(int32_t)(int8_t)LD8(R(15));
  fp_mov(c,4,0);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c06ac3e; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06ac4e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06ac60;
  {  goto L8c06ac72; }
L8c06ac3e:;
  fp_arith(c,2,8,7);
  c->fr[3]=0x00000000u;
  fp_arith(c,2,6,11);
  fp_arith(c,1,6,8);
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c06ac72;
  { fp_mov(c,4,5); goto L8c06ac72; }
L8c06ac4e:;
  fp_arith(c,2,8,9);
  c->fr[3]=0x00000000u;
  fp_arith(c,2,10,11);
  fp_mov(c,6,8);
  fp_arith(c,1,6,10);
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c06ac72;
  { fp_mov(c,4,5); goto L8c06ac72; }
L8c06ac60:;
  fp_arith(c,2,6,9);
  c->fr[2]=0x00000000u;
  fp_arith(c,2,10,7);
  fp_mov(c,3,6);
  fp_mov(c,6,10);
  fp_arith(c,1,6,3);
  fp_cmp(c,1,2,6);
  if(!c->t) goto L8c06ac72;
  fp_mov(c,4,5);
L8c06ac72:;
  R(0)=0x8c06acc4u;
  fp_ld(c,3,R(0));
  { fp_arith(c,2,4,3); goto L8c06ac9c; }
L8c06ac9c:;
  fp_st(c,4,R(13));
  { ST32(R(13)+12,R(14)); goto L8c06ada6; }
L8c06ada6:;
  R(0)=R(12);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ace0(SH4Ctx *c) {
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(2); c->pr=0x8c06aceau; R(4)=R(10); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  R(4)=(int32_t)(int8_t)LD8(R(13));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=R(4)&0xFF;
  fp_mov(c,0,4);
  c->t=(int32_t)R(0)==0;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,6,2);
  fp_fmac(c,3,4);
  fp_mov(c,0,2);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
  fp_mov(c,5,3);
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c06ad6c; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06ad7a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06ad88;
  {  goto L8c06ad94; }
L8c06ad6c:;
  R(0)=0xcu;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  { fp_mov(c,4,5); goto L8c06ad94; }
L8c06ad7a:;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  { fp_mov(c,4,5); goto L8c06ad94; }
L8c06ad88:;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06ad94;
  fp_mov(c,4,5);
L8c06ad94:;
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06ad9c;
  { fp_mov(c,4,15); goto L8c06ada2; }
L8c06ad9c:;
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c06ada2;
  fp_mov(c,4,14);
L8c06ada2:;
  fp_st(c,4,R(13));
  ST32(R(13)+12,R(14));
  R(0)=R(12);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06adbe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(6);
  R(6)=0x8c0c76fcu;
  R(3)=R(5);
  R(13)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c06ae20; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06ae22; }
L8c06ae20:;
  ST32(R(15),R(4));
L8c06ae22:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(12)=0x8u; if(k) goto L8c06ae32; }
  {  goto L8c06af44; }
L8c06ae32:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06ae38u;  f_8c04a8b8(c); }
  R(11)=R(0);
  R(10)=0x8c05e6eau;
  R(0)=LD32(R(15)+4);
  R(9)=0x15u;
  R(1)=0xe3u;
  R(0)-=R(1);
  R(1)=0x13u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c06ae4e;
  {  goto L8c06afb6; }
L8c06ae4e:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c06ae64u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c06ae5au+R(0));  switch(tg){ case 0x8c06ae8au: goto L8c06ae8a; case 0x8c06ae90u: goto L8c06ae90; case 0x8c06ae96u: goto L8c06ae96; case 0x8c06ae9cu: goto L8c06ae9c; case 0x8c06aeaeu: goto L8c06aeae; case 0x8c06aeb4u: goto L8c06aeb4; case 0x8c06aee0u: goto L8c06aee0; case 0x8c06aee6u: goto L8c06aee6; case 0x8c06aeecu: goto L8c06aeec; case 0x8c06aef2u: goto L8c06aef2; case 0x8c06aefau: goto L8c06aefa; case 0x8c06af40u: goto L8c06af40; case 0x8c06af4au: goto L8c06af4a; case 0x8c06af60u: goto L8c06af60; case 0x8c06af6au: goto L8c06af6a; case 0x8c06af74u: goto L8c06af74; case 0x8c06afa0u: goto L8c06afa0; case 0x8c06afaau: goto L8c06afaa; case 0x8c06afb6u: goto L8c06afb6; default: sh4_bad_jump(c,0x8c06ae56u,tg); return; } }
L8c06ae8a:;
  R(0)=0x10u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06ae90:;
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06ae96:;
  R(0)=0x20u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06ae9c:;
  R(0)=0x8c06aec4u;
  R(3)=0x8c09d2dcu;
  fp_ld(c,3,R(0));
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(11));
  { c->pr=0x8c06aeaau; fp_arith(c,2,4,3); f_8c09d2dc(c); }
  { fp_mov(c,4,0); goto L8c06af44; }
L8c06aeae:;
  R(0)=0x174u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aeb4:;
  R(0)=0x178u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aee0:;
  R(0)=0x17cu;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aee6:;
  R(0)=0x200u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aeec:;
  R(0)=0x204u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aef2:;
  R(0)=0x208u;
  fp_ld(c,4,R(0)+R(11));
  {  goto L8c06af44; }
L8c06aefa:;
  R(5)=0x198u;
  R(4)=R(15);
  R(5)+=R(11);
  { uint32_t tg=R(10); c->pr=0x8c06af04u; R(4)+=0x8u; sh4_call(c,tg); }
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c06af0cu; R(4)=R(14); sh4_call(c,tg); }
  { ST32(R(14)+12,R(9)); goto L8c06afbe; }
L8c06af40:;
  R(0)=0x180u;
  fp_ld(c,4,R(0)+R(11));
L8c06af44:;
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06af4a:;
  R(5)=0x1a4u;
  R(4)=R(15);
  R(5)+=R(11);
  { uint32_t tg=R(10); c->pr=0x8c06af54u; R(4)+=0x8u; sh4_call(c,tg); }
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c06af5cu; R(4)=R(14); sh4_call(c,tg); }
  { ST32(R(14)+12,R(9)); goto L8c06afbe; }
L8c06af60:;
  R(0)=0x184u;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06af6a:;
  R(0)=0x188u;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06af74:;
  R(0)=0x18cu;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06afa0:;
  R(0)=0x190u;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06afaa:;
  R(5)=R(11);
  R(5)+=0x54u;
  { uint32_t tg=R(10); c->pr=0x8c06afb2u; R(4)=R(14); sh4_call(c,tg); }
  { ST32(R(14)+12,R(9)); goto L8c06afbe; }
L8c06afb6:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06afbeu; R(4)=0x27u; f_8c074080(c); }
L8c06afbe:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ae20(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(12)=0x8u; if(k) goto L8c06ae32; }
  {  goto L8c06af44; }
L8c06ae32:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06ae38u;  f_8c04a8b8(c); }
  R(11)=R(0);
  R(10)=0x8c05e6eau;
  R(0)=LD32(R(15)+4);
  R(9)=0x15u;
  R(1)=0xe3u;
  R(0)-=R(1);
  R(1)=0x13u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c06ae4e;
  {  goto L8c06afb6; }
L8c06ae4e:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c06ae64u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c06ae5au+R(0));  switch(tg){ case 0x8c06ae8au: goto L8c06ae8a; case 0x8c06ae90u: goto L8c06ae90; case 0x8c06ae96u: goto L8c06ae96; case 0x8c06ae9cu: goto L8c06ae9c; case 0x8c06aeaeu: goto L8c06aeae; case 0x8c06aeb4u: goto L8c06aeb4; case 0x8c06aee0u: goto L8c06aee0; case 0x8c06aee6u: goto L8c06aee6; case 0x8c06aeecu: goto L8c06aeec; case 0x8c06aef2u: goto L8c06aef2; case 0x8c06aefau: goto L8c06aefa; case 0x8c06af40u: goto L8c06af40; case 0x8c06af4au: goto L8c06af4a; case 0x8c06af60u: goto L8c06af60; case 0x8c06af6au: goto L8c06af6a; case 0x8c06af74u: goto L8c06af74; case 0x8c06afa0u: goto L8c06afa0; case 0x8c06afaau: goto L8c06afaa; case 0x8c06afb6u: goto L8c06afb6; default: sh4_bad_jump(c,0x8c06ae56u,tg); return; } }
L8c06ae8a:;
  R(0)=0x10u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06ae90:;
  R(0)=0x1cu;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06ae96:;
  R(0)=0x20u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06ae9c:;
  R(0)=0x8c06aec4u;
  R(3)=0x8c09d2dcu;
  fp_ld(c,3,R(0));
  R(0)=0x14u;
  fp_ld(c,4,R(0)+R(11));
  { c->pr=0x8c06aeaau; fp_arith(c,2,4,3); f_8c09d2dc(c); }
  { fp_mov(c,4,0); goto L8c06af44; }
L8c06aeae:;
  R(0)=0x174u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aeb4:;
  R(0)=0x178u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aee0:;
  R(0)=0x17cu;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aee6:;
  R(0)=0x200u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aeec:;
  R(0)=0x204u;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06aef2:;
  R(0)=0x208u;
  fp_ld(c,4,R(0)+R(11));
  {  goto L8c06af44; }
L8c06aefa:;
  R(5)=0x198u;
  R(4)=R(15);
  R(5)+=R(11);
  { uint32_t tg=R(10); c->pr=0x8c06af04u; R(4)+=0x8u; sh4_call(c,tg); }
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c06af0cu; R(4)=R(14); sh4_call(c,tg); }
  { ST32(R(14)+12,R(9)); goto L8c06afbe; }
L8c06af40:;
  R(0)=0x180u;
  fp_ld(c,4,R(0)+R(11));
L8c06af44:;
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06af4a:;
  R(5)=0x1a4u;
  R(4)=R(15);
  R(5)+=R(11);
  { uint32_t tg=R(10); c->pr=0x8c06af54u; R(4)+=0x8u; sh4_call(c,tg); }
  R(5)=R(15);
  R(5)+=0x8u;
  { uint32_t tg=R(10); c->pr=0x8c06af5cu; R(4)=R(14); sh4_call(c,tg); }
  { ST32(R(14)+12,R(9)); goto L8c06afbe; }
L8c06af60:;
  R(0)=0x184u;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06af6a:;
  R(0)=0x188u;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06af74:;
  R(0)=0x18cu;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06afa0:;
  R(0)=0x190u;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06afaa:;
  R(5)=R(11);
  R(5)+=0x54u;
  { uint32_t tg=R(10); c->pr=0x8c06afb2u; R(4)=R(14); sh4_call(c,tg); }
  { ST32(R(14)+12,R(9)); goto L8c06afbe; }
L8c06afb6:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06afbeu; R(4)=0x27u; f_8c074080(c); }
L8c06afbe:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06aee0(SH4Ctx *c) {
  R(0)=0x17cu;
  { fp_ld(c,4,R(0)+R(11)); goto L8c06af44; }
L8c06af44:;
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06afbe:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06af40(SH4Ctx *c) {
  R(0)=0x180u;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06afbe:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06afa0(SH4Ctx *c) {
  R(0)=0x190u;
  fp_ld(c,4,R(0)+R(11));
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(12)); goto L8c06afbe; }
L8c06afbe:;
  R(0)=R(13);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06afd2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(6));
  R(14)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)=R(14);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06b020;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06b022; }
L8c06b020:;
  ST32(R(15),R(4));
L8c06b022:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b06c;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06b032u;  f_8c04a8b8(c); }
  R(1)=0xf6u;
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06b064;
  R(4)=LD32(R(15));
L8c06b03c:;
  R(4)=LD32(R(4)+28);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b048;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06b03c;
L8c06b048:;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(3)=LD32(R(15)+4); if(k) goto L8c06b054; }
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06b058;
L8c06b054:;
  { R(2)=0x0u; goto L8c06b05a; }
L8c06b058:;
  R(2)=LD32(R(4)+4);
L8c06b05a:;
  ST32(R(3),R(2));
  R(2)=0xbu;
  R(3)=LD32(R(15)+4);
  { ST32(R(3)+12,R(2)); goto L8c06b06c; }
L8c06b064:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b06cu; R(4)=0x27u; f_8c074080(c); }
L8c06b06c:;
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b020(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b06c;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06b032u;  f_8c04a8b8(c); }
  R(1)=0xf6u;
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06b064;
  R(4)=LD32(R(15));
L8c06b03c:;
  R(4)=LD32(R(4)+28);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b048;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06b03c;
L8c06b048:;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(3)=LD32(R(15)+4); if(k) goto L8c06b054; }
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06b058;
L8c06b054:;
  { R(2)=0x0u; goto L8c06b05a; }
L8c06b058:;
  R(2)=LD32(R(4)+4);
L8c06b05a:;
  ST32(R(3),R(2));
  R(2)=0xbu;
  R(3)=LD32(R(15)+4);
  { ST32(R(3)+12,R(2)); goto L8c06b06c; }
L8c06b064:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b06cu; R(4)=0x27u; f_8c074080(c); }
L8c06b06c:;
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b0a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=R(6);
  R(6)=0x8c0c76fcu;
  R(3)=R(5);
  R(13)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06b0cc;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06b0ce; }
L8c06b0cc:;
  ST32(R(15),R(4));
L8c06b0ce:;
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(10)=LD32(R(13)+4);
  R(6)+=0x8u;
  R(12)=LD32(R(12)+4);
  R(12)=LD32(R(12)+20);
  { uint32_t tg=R(10); c->pr=0x8c06b0deu; R(5)=R(13); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=LD32(R(15)+4);
  R(1)=0xf7u;
  R(13)=LD32(R(15)+8);
  R(9)=0x8c048260u;
  c->t=R(0)==R(1);
  R(13)+=0xffffffffu;
  { uint32_t k=c->t; R(11)=0x6u; if(k) goto L8c06b106; }
  R(1)=0xf8u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b140;
  R(1)=0xf9u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b14c;
  R(1)=0xfau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b158;
  {  goto L8c06b168; }
L8c06b106:;
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c06b10eu; R(4)=0x0u; sh4_call(c,tg); }
  { R(4)=R(0)&0xFF; goto L8c06b162; }
L8c06b140:;
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c06b148u; R(4)=0x1u; sh4_call(c,tg); }
  { R(4)=R(0)&0xFF; goto L8c06b162; }
L8c06b14c:;
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c06b154u; R(4)=0x2u; sh4_call(c,tg); }
  { R(4)=R(0)&0xFF; goto L8c06b162; }
L8c06b158:;
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c06b160u; R(4)=0x3u; sh4_call(c,tg); }
  R(4)=R(0)&0xFF;
L8c06b162:;
  ST32(R(14),R(4));
  { ST32(R(14)+12,R(11)); goto L8c06b170; }
L8c06b168:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b170u; R(4)=0x27u; f_8c074080(c); }
L8c06b170:;
  R(0)=R(10);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b140(SH4Ctx *c) {
  R(5)=R(12);
  R(6)=R(13);
  { uint32_t tg=R(9); c->pr=0x8c06b148u; R(4)=0x1u; sh4_call(c,tg); }
  { R(4)=R(0)&0xFF; goto L8c06b162; }
L8c06b162:;
  ST32(R(14),R(4));
  { ST32(R(14)+12,R(11)); goto L8c06b170; }
L8c06b170:;
  R(0)=R(10);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b184(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(6);
  R(7)=0x8c0c76fcu;
  R(6)=R(5);
  R(13)=R(5);
  R(5)=LD32(R(7));
  R(6)+=0xfffffff4u;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)); if(k) goto L8c06b1e0; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c06b1e2; }
L8c06b1e0:;
  ST32(R(15),R(4));
L8c06b1e2:;
  R(1)=0xfcu;
  R(0)=R(6);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(12)=0x3u; if(k) goto L8c06b1fc; }
  R(1)=0xfbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b214;
  R(1)=0xfdu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b222;
  {  goto L8c06b260; }
L8c06b1fc:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b210;
  R(0)=0x10eu;
  R(4)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(4)=R(4)&0xFF; goto L8c06b224; }
L8c06b210:;
  { R(4)=0x1u; goto L8c06b224; }
L8c06b214:;
  R(4)=LD32(R(15));
  R(3)=0x8c0480a6u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06b21eu; R(4)=LD32(R(4)+20); f_8c0480a6(c); }
  { R(4)=R(0); goto L8c06b224; }
L8c06b222:;
  R(4)=0x1u;
L8c06b224:;
  ST8(R(14),R(4));
  { ST32(R(14)+12,R(12)); goto L8c06b268; }
L8c06b260:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b268u; R(4)=0x27u; f_8c074080(c); }
L8c06b268:;
  R(0)=R(13);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b1e0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(1)=0xfcu;
  R(0)=R(6);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(12)=0x3u; if(k) goto L8c06b1fc; }
  R(1)=0xfbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b214;
  R(1)=0xfdu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b222;
  {  goto L8c06b260; }
L8c06b1fc:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b210;
  R(0)=0x10eu;
  R(4)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(4)=R(4)&0xFF; goto L8c06b224; }
L8c06b210:;
  { R(4)=0x1u; goto L8c06b224; }
L8c06b214:;
  R(4)=LD32(R(15));
  R(3)=0x8c0480a6u;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06b21eu; R(4)=LD32(R(4)+20); f_8c0480a6(c); }
  { R(4)=R(0); goto L8c06b224; }
L8c06b222:;
  R(4)=0x1u;
L8c06b224:;
  ST8(R(14),R(4));
  { ST32(R(14)+12,R(12)); goto L8c06b268; }
L8c06b260:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b268u; R(4)=0x27u; f_8c074080(c); }
L8c06b268:;
  R(0)=R(13);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b260(SH4Ctx *c) {
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b268u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(13);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b276(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffbcu;
  R(12)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c06b29c; }
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c06b29e; }
L8c06b29c:;
  ST32(R(15),R(13));
L8c06b29e:;
  R(0)=0x4u;
  c->fr[15]=0x00000000u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(15));
  R(6)=R(15);
  R(0)=0xcu;
  R(5)=R(12);
  R(6)+=0x34u;
  fp_st(c,15,R(0)+R(15));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c06b2b8u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x28u;
  R(12)=R(0);
  R(0)=LD32(R(2)+4);
  R(6)=R(15);
  ST32(R(3),R(1));
  R(5)=R(12);
  ST32(R(3)+4,R(0));
  R(6)+=0x34u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c06b2dau; R(4)=R(13); sh4_call(c,tg); }
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(2));
  R(3)=R(15);
  R(3)+=0x1cu;
  R(12)=R(0);
  R(0)=LD32(R(2)+4);
  R(6)=R(15);
  ST32(R(3),R(1));
  R(5)=R(12);
  ST32(R(3)+4,R(0));
  R(6)+=0x34u;
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c06b2fcu; R(4)=R(13); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x40u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06b30c;
  R(0)=0x34u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c06b314; }
L8c06b30c:;
  R(3)=LD32(R(15)+52);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06b314:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  R(11)=0x8c05e6eau;
  { uint32_t k=c->t; R(12)=0x15u; if(k) goto L8c06b3b6; }
  R(0)=0x24u;
  fp_mov(c,14,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  fp_arith(c,0,14,3);
  fp_cmp(c,1,5,14);
  if(!c->t) goto L8c06b332;
  fp_mov(c,14,4);
  fp_arith(c,0,14,5);
L8c06b332:;
  R(0)=0x10u;
  R(5)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0xcu;
  R(5)+=0x10u;
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(11); c->pr=0x8c06b352u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(14)+12,R(12));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b3b6;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06b364u;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b3b6;
  R(0)=0x10u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0)+R(4));
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c06b3b6;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_arith(c,1,14,3);
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_arith(c,2,14,4);
  fp_arith(c,2,14,3);
  fp_unary(c,2,14);
  fp_st(c,14,R(0)+R(15));
  R(0)=0x8c06b430u;
  fp_ld(c,2,R(0));
  R(0)=0x24u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x30u;
  fp_arith(c,2,4,2);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x8c06b434u;
  fp_arith(c,1,6,1);
  fp_ld(c,3,R(0));
  fp_mov(c,1,14);
  fp_mov(c,5,4);
  fp_unary(c,0,5);
  fp_mov(c,0,5);
  fp_arith(c,2,0,6);
  fp_mov(c,4,14);
  fp_arith(c,2,1,4);
  fp_arith(c,2,0,3);
  fp_mov(c,6,1);
  c->fr[1]=0x00000000u;
  fp_arith(c,1,6,0);
  fp_cmp(c,1,1,6);
  if(!c->t) goto L8c06b3bc;
L8c06b3b6:;
  R(5)=R(15);
  { R(5)+=0x4u; goto L8c06b3ee; }
L8c06b3bc:;
  fp_unary(c,2,6);
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_unary(c,0,4);
  R(0)=0x28u;
  R(5)=R(15);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x10u;
  fp_arith(c,2,5,3);
  R(5)+=0x10u;
  fp_arith(c,1,1,2);
  fp_arith(c,1,4,6);
  fp_arith(c,3,4,5);
  fp_arith(c,3,1,4);
  fp_st(c,1,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x14u;
  fp_arith(c,1,1,2);
  fp_arith(c,3,1,4);
  fp_st(c,1,R(0)+R(15));
L8c06b3ee:;
  { uint32_t tg=R(11); c->pr=0x8c06b3f2u; R(4)=R(14); sh4_call(c,tg); }
  R(0)=R(13);
  ST32(R(14)+12,R(12));
  R(15)+=0x44u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b440(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(13)=R(5);
  R(3)+=0xfffffff4u;
  R(10)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(13)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(14)=R(6); if(k) goto L8c06b47a; }
  R(2)=0x8c06ff00u;
  R(6)=R(15);
  R(13)+=0xcu;
  R(5)=R(13);
  R(6)+=0x4u;
  { c->pr=0x8c06b476u; R(4)=R(10); f_8c06ff00(c); }
  { R(13)=R(0); goto L8c06b47c; }
L8c06b47a:;
  ST32(R(15)+4,R(10));
L8c06b47c:;
  R(8)=LD32(R(15)+4);
  R(6)=R(14);
  R(0)=LD32(R(13));
  R(13)+=0xcu;
  R(8)=LD32(R(8)+4);
  R(5)=R(13);
  R(8)=LD32(R(8)+12);
  R(8)=LD32(R(8));
  ST8(R(15)+8,R(0));
  R(11)=LD32(R(13)+4);
  { uint32_t tg=R(11); c->pr=0x8c06b494u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=LD32(R(14));
  R(1)=0x6u;
  R(11)=R(0);
  R(2)=0x1fu;
  R(4)+=0xffffffffu;
  R(9)=R(4);
  R(9)>>=2;
  R(3)=0x0u;
  R(4)&=R(2);
  R(9)>>=2;
  ST32(R(15)+12,R(4));
  ST32(R(14),R(3));
  c->t=R(9)&1;R(9)>>=1;
  ST32(R(14)+12,R(1));
  R(1)=0xfeu;
  R(0)=LD32(R(15));
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(12)=0x1u; if(k) goto L8c06b4c4; }
  R(1)=0xffu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b52a;
  {  goto L8c06b5a6; }
L8c06b4c4:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(5)=R(9);
  R(3)=0x8c07275cu;
  R(7)=R(14);
  R(6)=R(8);
  { c->pr=0x8c06b4d2u; R(4)=R(0); f_8c07275c(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06b5ae;
  R(3)=LD32(R(15)+12);
  R(2)=R(12);
  R(4)=LD32(R(14));
  R(2)=sh4_shad(R(2),R(3));
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c06b520;
  { R(3)=R(12); goto L8c06b522; }
L8c06b520:;
  R(3)=0x0u;
L8c06b522:;
  R(1)=0x6u;
  ST32(R(14),R(3));
  { ST32(R(14)+12,R(1)); goto L8c06b5ae; }
L8c06b52a:;
  R(2)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06b534u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=LD32(R(14));
  R(2)=0x1fu;
  R(13)=R(9);
  R(3)=0x0u;
  R(4)+=0xffffffffu;
  R(11)=R(0);
  R(10)=R(4);
  R(10)>>=2;
  R(10)>>=2;
  R(4)&=R(2);
  c->t=R(10)&1;R(10)>>=1;
  ST32(R(15)+16,R(4));
  c->t=R(13)>R(10);
  ST32(R(15),R(3));
  if(c->t) goto L8c06b59c;
L8c06b552:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(5)=R(13);
  R(3)=0x8c07275cu;
  R(7)=R(14);
  R(6)=R(8);
  { c->pr=0x8c06b560u; R(4)=R(0); f_8c07275c(c); }
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06b596;
  c->t=R(13)==R(9);
  { uint32_t k=!c->t; R(6)=LD32(R(14)); if(k) goto L8c06b570; }
  { R(7)=LD32(R(15)+12); goto L8c06b572; }
L8c06b570:;
  R(7)=0x0u;
L8c06b572:;
  c->t=R(13)==R(10);
  { uint32_t k=!c->t; R(4)=R(7); if(k) goto L8c06b57c; }
  { R(5)=LD32(R(15)+16); goto L8c06b57e; }
L8c06b57c:;
  R(5)=0x1fu;
L8c06b57e:;
  c->t=R(4)>R(5);
  if(c->t) goto L8c06b596;
L8c06b582:;
  R(3)=R(12);
  R(3)=sh4_shad(R(3),R(4));
  c->t=(R(3)&R(6))==0;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c06b592; }
  R(1)=LD32(R(15));
  R(1)+=0x1u;
  ST32(R(15),R(1));
L8c06b592:;
  c->t=R(4)>R(5);
  if(!c->t) goto L8c06b582;
L8c06b596:;
  R(13)+=0x1u;
  c->t=R(13)>R(10);
  if(!c->t) goto L8c06b552;
L8c06b59c:;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(14),R(3));
  { ST32(R(14)+12,R(2)); goto L8c06b5ae; }
L8c06b5a6:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b5aeu; R(4)=0x27u; f_8c074080(c); }
L8c06b5ae:;
  R(0)=R(11);
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
void f_8c06b520(SH4Ctx *c) {
  R(3)=0x0u;
  R(1)=0x6u;
  ST32(R(14),R(3));
  { ST32(R(14)+12,R(1)); goto L8c06b5ae; }
L8c06b5ae:;
  R(0)=R(11);
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
void f_8c06b5c4(SH4Ctx *c) {
  { R(0)=R(5); return; }
}
void f_8c06b5c8(SH4Ctx *c) {
  R(3)=0x6u;
  R(4)=0x0u;
  ST32(R(6),R(4));
  ST32(R(6)+12,R(3));
  { R(0)=R(5); return; }
}
void f_8c06b5d4(SH4Ctx *c) {
  R(2)=0x8c12473cu;
  R(1)=0x6u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(1));
  { R(0)=R(5); return; }
}
void f_8c06b5e4(SH4Ctx *c) {
  R(2)=0x8c12473du;
  R(1)=0x6u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(1));
  { R(0)=R(5); return; }
}
void f_8c06b620(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(6)=R(15);
  R(3)=LD32(R(15)+4);
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06b634u; R(5)=R(3); sh4_call(c,tg); }
  R(2)=LD32(R(15)+8);
  R(5)=R(0);
  R(0)=0x8c123cfcu;
  R(1)=R(2);
  R(2)<<=2;
  R(2)+=R(1);
  R(1)=LD32(R(0));
  R(2)<<=2;
  R(3)=LD32(R(15));
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(2)+=0x14u;
  ST32(R(3),R(2));
  R(2)=0x9u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c06b65c(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06b672u; R(5)=R(3); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=R(15);
  ST32(R(15),R(0));
  { c->pr=0x8c06b67cu; R(4)+=0x8u; f_8c071ce0(c); }
  R(3)=0x8c09cfe0u;
  R(4)=R(0);
  { c->pr=0x8c06b684u; R(8)=LD32(R(15)+4); f_8c09cfe0(c); }
  ST32(R(8),R(0));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c06b696(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(5);
  R(4)=R(14);
  R(4)+=0xfffffff4u;
  R(1)=0x106u;
  ST32(R(15),R(6));
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b6e0;
  R(1)=0x107u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b6ec;
  {  goto L8c06b6f8; }
L8c06b6e0:;
  R(2)=0x8c018cb6u;
  R(3)=0x8c2d106cu;
  { c->pr=0x8c06b6e8u; R(4)=LD32(R(3)); f_8c018cb6(c); }
  {  goto L8c06b6f4; }
L8c06b6ec:;
  R(3)=0x8c018cb6u;
  R(2)=0x8c2d1068u;
  { c->pr=0x8c06b6f4u; R(4)=LD32(R(2)); f_8c018cb6(c); }
L8c06b6f4:;
  { R(4)=R(0); goto L8c06b704; }
L8c06b6f8:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b700u; R(4)=0x27u; f_8c074080(c); }
  {  goto L8c06b70e; }
L8c06b704:;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(3),R(4));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
L8c06b70e:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b6e0(SH4Ctx *c) {
  R(2)=0x8c018cb6u;
  R(3)=0x8c2d106cu;
  { c->pr=0x8c06b6e8u; R(4)=LD32(R(3)); f_8c018cb6(c); }
  {  goto L8c06b6f4; }
L8c06b6f4:;
  { R(4)=R(0); goto L8c06b704; }
L8c06b704:;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(3),R(4));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b718(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06b728u; R(14)=R(6); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(3)=LD32(R(14));
  R(4)=R(3);
  ST32(R(15)+4,R(3));
  R(3)=0x8c0452a0u;
  { c->pr=0x8c06b736u;  f_8c0452a0(c); }
  R(0)=R(0)&0xFF;
  ST32(R(14),R(0));
  R(2)=0x6u;
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b748(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c07a79cu;
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  { c->pr=0x8c06b758u; R(8)=R(6); f_8c07a79c(c); }
  ST32(R(8),R(0));
  R(2)=0x6u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c06b76a(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c07a7a2u;
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  { c->pr=0x8c06b77au; R(8)=R(6); f_8c07a7a2(c); }
  ST32(R(8),R(0));
  R(2)=0x6u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c06b78c(SH4Ctx *c) {
  R(2)=0x6u;
  R(3)=0x0u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c06b798(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06b7a8u; R(14)=R(6); sh4_call(c,tg); }
  R(3)=0x8c07a7d0u;
  R(5)=0x8c2dd0f4u;
  ST32(R(15),R(0));
  { c->pr=0x8c06b7b2u; R(4)=LD32(R(14)); f_8c07a7d0(c); }
  R(2)=0x8c2dd0f4u;
  R(3)=0x9u;
  ST32(R(14),R(2));
  ST32(R(14)+12,R(3));
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b7c4(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c07a9c0u;
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  { c->pr=0x8c06b7d4u; R(8)=R(6); f_8c07a9c0(c); }
  ST32(R(8),R(0));
  R(2)=0x6u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c06b840(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06b850u; R(14)=R(6); sh4_call(c,tg); }
  R(3)=0x8c04dd3cu;
  { c->pr=0x8c06b856u; ST32(R(15),R(0)); f_8c04dd3c(c); }
  ST32(R(14),R(0));
  R(2)=0x6u;
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b866(SH4Ctx *c) {
  R(2)=0x6u;
  R(3)=0x1u;
  ST32(R(6),R(3));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c06b872(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(7)=0x8c0c76fcu;
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(7));
  R(6)+=0xfffffff4u;
  R(6)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c06b894; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c06b896; }
L8c06b894:;
  ST32(R(15),R(4));
L8c06b896:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+40);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b918;
  R(1)=0x112u;
  R(0)=R(6);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b8e0;
  R(1)=0x113u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b8f6;
  {  goto L8c06b910; }
L8c06b8e0:;
  R(2)=0x8c05142eu;
  { c->pr=0x8c06b8e6u;  f_8c05142e(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06b904; }
  R(14)=~R(14);
  R(14)>>=16;
  { R(14)=~R(14); goto L8c06b918; }
L8c06b8f6:;
  R(3)=0x8c051464u;
  { c->pr=0x8c06b8fcu;  f_8c051464(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c06b908; }
L8c06b904:;
  { R(14)>>=16; goto L8c06b918; }
L8c06b908:;
  R(14)=~R(14);
  R(14)>>=16;
  { R(14)=~R(14); goto L8c06b918; }
L8c06b910:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b918u; R(4)=0x27u; f_8c074080(c); }
L8c06b918:;
  R(2)=LD32(R(15)+4);
  ST32(R(2),R(14));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b8e0(SH4Ctx *c) {
  R(2)=0x8c05142eu;
  { c->pr=0x8c06b8e6u;  f_8c05142e(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06b904; }
  R(14)=~R(14);
  R(14)>>=16;
  { R(14)=~R(14); goto L8c06b918; }
L8c06b904:;
  { R(14)>>=16; goto L8c06b918; }
L8c06b918:;
  R(2)=LD32(R(15)+4);
  ST32(R(2),R(14));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b92c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(7)=0x8c0c76fcu;
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(7));
  R(6)+=0xfffffff4u;
  R(6)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c06b980; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c06b982; }
L8c06b980:;
  ST32(R(15),R(4));
L8c06b982:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b9bc;
  R(1)=0x114u;
  R(0)=R(6);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b9a4;
  R(1)=0x115u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b9a8;
  R(1)=0x116u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b9ac;
  {  goto L8c06b9b4; }
L8c06b9a4:;
  { R(0)=0x2fu; goto L8c06b9ae; }
L8c06b9a8:;
  { R(0)=0x26u; goto L8c06b9ae; }
L8c06b9ac:;
  R(0)=0x27u;
L8c06b9ae:;
  R(14)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(14)=R(14)&0xFF; goto L8c06b9bc; }
L8c06b9b4:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b9bcu; R(4)=0x27u; f_8c074080(c); }
L8c06b9bc:;
  R(2)=LD32(R(15)+4);
  ST32(R(2),R(14));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06b980(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06b9bc;
  R(1)=0x114u;
  R(0)=R(6);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b9a4;
  R(1)=0x115u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b9a8;
  R(1)=0x116u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06b9ac;
  {  goto L8c06b9b4; }
L8c06b9a4:;
  { R(0)=0x2fu; goto L8c06b9ae; }
L8c06b9a8:;
  { R(0)=0x26u; goto L8c06b9ae; }
L8c06b9ac:;
  R(0)=0x27u;
L8c06b9ae:;
  R(14)=(int32_t)(int8_t)LD8(R(4)+R(0));
  { R(14)=R(14)&0xFF; goto L8c06b9bc; }
L8c06b9b4:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06b9bcu; R(4)=0x27u; f_8c074080(c); }
L8c06b9bc:;
  R(2)=LD32(R(15)+4);
  ST32(R(2),R(14));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ba00(SH4Ctx *c) {
  R(2)=0x8c0c5ad0u;
  R(1)=0x6u;
  R(3)=LD32(R(2));
  ST32(R(6),R(3));
  ST32(R(6)+12,R(1));
  { R(0)=R(5); return; }
}
void f_8c06ba0e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(10)=R(5);
  R(12)=0x0u;
  ST32(R(15),R(5));
  R(11)=R(4);
  R(10)=LD32(R(10)+4);
  R(14)=R(6);
  R(13)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c06ba30u; R(4)=R(11); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06ba40;
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c06ba42; }
L8c06ba40:;
  R(3)=LD32(R(14));
L8c06ba42:;
  R(5)=R(10);
  R(6)=R(14);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(10)+4);
  { uint32_t tg=R(2); c->pr=0x8c06ba4eu; R(4)=R(11); sh4_call(c,tg); }
  R(10)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06ba5a;
  { fp_ld(c,15,R(14)); goto L8c06ba62; }
L8c06ba5a:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06ba62:;
  R(2)=LD32(R(10)+4);
  R(5)=R(10);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06ba6cu; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(11)=0x1u; if(k) goto L8c06ba7a; }
  { fp_ld(c,4,R(14)); goto L8c06ba82; }
L8c06ba7a:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06ba82:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06baa0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06bb00;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06bb0a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06bb10;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06bb28;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c06bb36;
  {  goto L8c06bb44; }
L8c06baa0:;
  R(2)=0x8c0c5accu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06baac;
  { R(13)=R(12); goto L8c06bb44; }
L8c06baac:;
  R(1)=0x8c05cdf8u;
  { c->pr=0x8c06bab2u;  f_8c05cdf8(c); }
  R(4)=R(0);
  R(13)=R(0);
  R(0)=0x8c0bb6e8u;
  R(4)<<=2;
  R(3)=0x8c067440u;
  R(5)=0x8c0bbb0cu;
  { c->pr=0x8c06bac2u; R(4)=LD32(R(4)+R(0)); f_8c067440(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06baca;
  { R(13)=0x2u; goto L8c06bb44; }
L8c06baca:;
  R(2)=0x8c0678e0u;
  { c->pr=0x8c06bad0u; R(4)=R(13); f_8c0678e0(c); }
  R(3)=0x2u;
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c06bb3e;
  { R(13)=R(12); goto L8c06bb44; }
L8c06bb00:;
  R(2)=0x8c04c84au;
  { c->pr=0x8c06bb06u;  f_8c04c84a(c); }
  { R(13)=R(0); goto L8c06bb44; }
L8c06bb0a:;
  R(2)=0x8c0c6b2cu;
  { R(13)=LD32(R(2)); goto L8c06bb44; }
L8c06bb10:;
  c->fr[5]=0x3F800000u;
  fp_cmp(c,0,15,5);
  R(4)=0x8c0c7634u;
  if(!c->t) goto L8c06bb1c;
  { R(13)=LD32(R(4)); goto L8c06bb44; }
L8c06bb1c:;
  fp_cmp(c,0,4,5);
  if(!c->t) goto L8c06bb24;
  { ST32(R(4),R(11)); goto L8c06bb44; }
L8c06bb24:;
  { ST32(R(4),R(12)); goto L8c06bb44; }
L8c06bb28:;
  R(3)=0x8c0bdbf4u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==3;
  { uint32_t k=!c->t; R(13)=R(12); if(k) goto L8c06bb44; }
  { R(13)=R(11); goto L8c06bb44; }
L8c06bb36:;
  R(3)=0x8c0c42acu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06bb42;
L8c06bb3e:;
  { R(13)=R(11); goto L8c06bb44; }
L8c06bb42:;
  R(13)=R(12);
L8c06bb44:;
  R(2)=0x6u;
  ST32(R(14),R(13));
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06bb00(SH4Ctx *c) {
  R(2)=0x8c04c84au;
  { c->pr=0x8c06bb06u;  f_8c04c84a(c); }
  { R(13)=R(0); goto L8c06bb44; }
L8c06bb44:;
  R(2)=0x6u;
  ST32(R(14),R(13));
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06bb80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb0u;
  R(11)=R(6);
  R(6)=0x8c0c76fcu;
  R(14)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06bba2;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06bba4; }
L8c06bba2:;
  ST32(R(15),R(4));
L8c06bba4:;
  R(3)=LD32(R(14)+4);
  R(6)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c06bbacu; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(12)=LD32(R(11));
  R(4)=LD32(R(15));
  R(12)=LD32(R(12)+4);
  R(12)=LD32(R(12)+12);
  R(13)=LD32(R(12)+52);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(14)=LD32(R(4)+52); if(k) goto L8c06bcae; }
  R(3)=R(15);
  R(3)+=0x20u;
  c->t=R(13)==R(3);
  R(10)=R(15);
  { uint32_t k=!c->t; R(10)+=0x44u; if(k) goto L8c06bc38; }
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(13);
  { c->pr=0x8c06bbd4u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0xcu;
  R(4)=LD32(R(12)+36);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c06bc92; }
L8c06bc38:;
  R(0)=0x4u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  R(4)=LD32(R(12)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
L8c06bc92:;
  R(0)=0x24u;
  R(5)=R(15);
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x28u;
  R(3)=0x8c05e5f4u;
  R(5)+=0x20u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(6)=LD32(R(12)+36);
  R(6)+=0x58u;
  { c->pr=0x8c06bcaau; R(4)=R(10); f_8c05e5f4(c); }
  {  goto L8c06bcb2; }
L8c06bcae:;
  R(10)=LD32(R(12)+36);
  R(10)+=0x58u;
L8c06bcb2:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c06bcba;
  {  goto L8c06bde0; }
L8c06bcba:;
  R(2)=R(15);
  R(2)+=0x14u;
  c->t=R(14)==R(2);
  R(13)=R(15);
  { uint32_t k=!c->t; R(13)+=0x38u; if(k) goto L8c06bd3a; }
  R(2)=0x8c05e6eau;
  R(4)=R(15);
  R(5)=R(14);
  { c->pr=0x8c06bcd0u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(4)=LD32(R(15));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(4)=LD32(R(15));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x18u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(4)=LD32(R(15));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c06bd9a; }
L8c06bd3a:;
  R(4)=LD32(R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x10u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(4)=LD32(R(15));
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x14u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  fp_fmac(c,3,2);
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(4)=LD32(R(15));
  fp_ld(c,0,R(0)+R(14));
  R(0)=0x18u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(14));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(14));
L8c06bd9a:;
  R(0)=0x24u;
  R(5)=R(15);
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x1cu;
  R(3)=0x8c05e5f4u;
  R(5)+=0x14u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(6)=LD32(R(15));
  R(6)=LD32(R(6)+36);
  R(6)+=0x58u;
  { c->pr=0x8c06bdb4u; R(4)=R(13); f_8c05e5f4(c); }
  {  goto L8c06bde6; }
L8c06bde0:;
  R(13)=LD32(R(15));
  R(13)=LD32(R(13)+36);
  R(13)+=0x58u;
L8c06bde6:;
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(13);
  R(5)=R(10);
  { c->pr=0x8c06bdf2u; R(4)+=0x2cu; f_8c05e612(c); }
  R(0)=0x2cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,0,6);
  R(3)=0x8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_st(c,3,R(11));
  ST32(R(11)+12,R(3));
  R(0)=LD32(R(15)+4);
  R(15)+=0x50u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06bde0(SH4Ctx *c) {
  R(13)=LD32(R(15));
  R(13)=LD32(R(13)+36);
  R(13)+=0x58u;
  R(3)=0x8c05e612u;
  R(4)=R(15);
  R(6)=R(13);
  R(5)=R(10);
  { c->pr=0x8c06bdf2u; R(4)+=0x2cu; f_8c05e612(c); }
  R(0)=0x2cu;
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_mov(c,0,6);
  R(3)=0x8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,4,R(0)+R(15));
  fp_fmac(c,3,6);
  fp_mov(c,0,4);
  fp_fmac(c,3,4);
  fp_unary(c,2,3);
  fp_st(c,3,R(11));
  ST32(R(11)+12,R(3));
  R(0)=LD32(R(15)+4);
  R(15)+=0x50u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06be24(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(6);
  R(6)=0x8c0c76fcu;
  R(13)=R(5);
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06be40;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06be42; }
L8c06be40:;
  ST32(R(15),R(4));
L8c06be42:;
  R(3)=LD32(R(13)+4);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06be4au; R(5)=R(13); sh4_call(c,tg); }
  fp_ld(c,2,R(14));
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,2,3);
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c06be5c; }
  R(0)=0x8c06bf48u;
  fp_ld(c,2,R(0));
  { fp_st(c,2,R(14)); goto L8c06be90; }
L8c06be5c:;
  R(4)=LD32(R(14));
  R(6)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(6)=LD32(R(6)+36);
  R(4)=LD32(R(4)+12);
  R(3)=0x8c05e612u;
  R(6)+=0x58u;
  R(5)=LD32(R(4)+36);
  R(4)=R(15);
  R(5)+=0x58u;
  { c->pr=0x8c06be74u; R(4)+=0x4u; f_8c05e612(c); }
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0xcu;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(15));
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_st(c,3,R(14));
L8c06be90:;
  R(3)=0x8u;
  R(0)=R(13);
  ST32(R(14)+12,R(3));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06bea0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  R(6)=0x8c0c76fcu;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06beb8;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06beba; }
L8c06beb8:;
  ST32(R(15),R(4));
L8c06beba:;
  R(5)=LD32(R(15));
  R(3)=0x8c05e6eau;
  R(5)=LD32(R(5)+36);
  R(5)+=0x58u;
  { c->pr=0x8c06bec6u; R(4)=LD32(R(15)+4); f_8c05e6ea(c); }
  R(2)=LD32(R(15)+4);
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(0)=LD32(R(15)+8);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06bed6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c05e6eau;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(5)=LD32(R(15)+8);
  R(5)=LD32(R(5)+36);
  R(5)+=0x58u;
  { c->pr=0x8c06beecu; R(4)=R(6); f_8c05e6ea(c); }
  R(2)=LD32(R(15));
  R(3)=0x15u;
  ST32(R(2)+12,R(3));
  R(0)=LD32(R(15)+4);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06befc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06bf10u; R(14)=R(6); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(13)=LD32(R(14));
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(12)=0x15u; if(k) goto L8c06bf6c; }
  R(2)=LD32(R(13)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06bf60;
  R(3)=0x8c09d954u;
  R(5)=R(14);
  { c->pr=0x8c06bf28u; R(4)=R(13); f_8c09d954(c); }
  {  goto L8c06bf68; }
L8c06bf60:;
  R(3)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c06bf68u; R(4)=R(14); f_8c05e6ea(c); }
L8c06bf68:;
  { ST32(R(14)+12,R(12)); goto L8c06bf7a; }
L8c06bf6c:;
  R(0)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(14));
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  ST32(R(14)+12,R(12));
L8c06bf7a:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06bf60(SH4Ctx *c) {
  R(3)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c06bf68u; R(4)=R(14); f_8c05e6ea(c); }
  { ST32(R(14)+12,R(12)); goto L8c06bf7a; }
L8c06bf7a:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06bf88(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(14)=R(6);
  R(6)=0x8c0c76fcu;
  R(10)=R(5);
  R(13)=R(5);
  R(5)=LD32(R(6));
  R(10)+=0xfffffff4u;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(10)=LD32(R(10)); if(k) goto L8c06bfb6; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06bfb8; }
L8c06bfb6:;
  ST32(R(15),R(4));
L8c06bfb8:;
  R(0)=R(10);
  R(11)=0x8c0163ceu;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(12)=0x8u; if(k) goto L8c06bfd2; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06bfee;
  c->t=(int32_t)R(0)==17;
  if(c->t) goto L8c06c082;
  c->t=(int32_t)R(0)==19;
  if(c->t) goto L8c06c098;
  {  goto L8c06c100; }
L8c06bfd2:;
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(5)+=0x18u;
  { uint32_t tg=R(11); c->pr=0x8c06bfdcu; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(5)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c06bfe6u; R(4)=R(14); f_8c05e6ea(c); }
  R(2)=0x15u;
  ST32(R(14)+12,R(2));
  { R(0)=R(13); goto L8c06c1b0; }
L8c06bfee:;
  R(2)=LD32(R(13)+4);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06bff6u; R(5)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x18u;
  R(3)=LD32(R(14));
  R(6)=R(15);
  c->fr[15]=0x00000000u;
  R(4)=R(15);
  R(2)=LD32(R(3)+4);
  R(6)+=0x18u;
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  R(1)=LD32(R(2)+12);
  R(3)=0x8c014f10u;
  ST32(R(15)+8,R(1));
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(5)=LD32(R(15));
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c06c022u; R(4)+=0x18u; f_8c014f10(c); }
  R(2)=0x8c0720a4u;
  R(4)=R(15);
  { c->pr=0x8c06c02au; R(4)+=0x18u; f_8c0720a4(c); }
  R(0)=0x8c06c0d4u;
  R(3)=0x8c072220u;
  fp_ld(c,13,R(0));
  fp_mov(c,6,0);
  fp_mov(c,5,13);
  { c->pr=0x8c06c038u; fp_mov(c,4,15); f_8c072220(c); }
  R(4)=LD32(R(15));
  R(5)=R(15);
  fp_mov(c,14,0);
  R(5)+=0x18u;
  { uint32_t tg=R(11); c->pr=0x8c06c044u; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(4)=LD32(R(15)+8);
  R(5)=R(15);
  R(5)+=0xcu;
  { uint32_t tg=R(11); c->pr=0x8c06c04eu; R(4)=LD32(R(4)+36); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x18u;
  R(5)+=0xcu;
  { c->pr=0x8c06c05eu; R(4)+=0xcu; f_8c05e612(c); }
  R(2)=0x8c0720a4u;
  R(4)=R(15);
  { c->pr=0x8c06c066u; R(4)+=0xcu; f_8c0720a4(c); }
  R(3)=0x8c072220u;
  fp_mov(c,5,13);
  fp_mov(c,6,0);
  { c->pr=0x8c06c070u; fp_mov(c,4,15); f_8c072220(c); }
  R(2)=0x8c072104u;
  fp_mov(c,5,0);
  { c->pr=0x8c06c078u; fp_mov(c,4,14); f_8c072104(c); }
  R(0)=0x8c06c0e4u;
  fp_mov(c,4,0);
  fp_ld(c,3,R(0));
  { fp_arith(c,2,4,3); goto L8c06c1aa; }
L8c06c082:;
  R(2)=LD32(R(13)+4);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c08au; R(5)=R(13); sh4_call(c,tg); }
  R(3)=0x8c071e08u;
  ST32(R(15)+4,R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c06c094u; R(4)=LD32(R(15)); f_8c071e08(c); }
  { fp_mov(c,4,0); goto L8c06c1aa; }
L8c06c098:;
  R(2)=LD32(R(13)+4);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c0a0u; R(5)=R(13); sh4_call(c,tg); }
  R(3)=0x8c09d94eu;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c06c0a8u; R(4)=LD32(R(14)); f_8c09d94e(c); }
  { fp_mov(c,4,0); goto L8c06c1aa; }
L8c06c100:;
  R(2)=LD32(R(13)+4);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c108u; R(5)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=R(10);
  R(5)=LD32(R(14));
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+12);
  R(0)+=0xfffffffcu;
  R(1)=0xdu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c06c1a0;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c06c128u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c06c126u+R(0));  switch(tg){ case 0x8c06c142u: goto L8c06c142; case 0x8c06c146u: goto L8c06c146; case 0x8c06c14au: goto L8c06c14a; case 0x8c06c14eu: goto L8c06c14e; case 0x8c06c152u: goto L8c06c152; case 0x8c06c156u: goto L8c06c156; case 0x8c06c15au: goto L8c06c15a; case 0x8c06c160u: goto L8c06c160; case 0x8c06c166u: goto L8c06c166; case 0x8c06c16cu: goto L8c06c16c; case 0x8c06c172u: goto L8c06c172; case 0x8c06c178u: goto L8c06c178; case 0x8c06c1a0u: goto L8c06c1a0; default: sh4_bad_jump(c,0x8c06c122u,tg); return; } }
L8c06c142:;
  { R(6)=0x1u; goto L8c06c1a2; }
L8c06c146:;
  { R(6)=0x2u; goto L8c06c1a2; }
L8c06c14a:;
  { R(6)=0x4u; goto L8c06c1a2; }
L8c06c14e:;
  { R(6)=0x3u; goto L8c06c1a2; }
L8c06c152:;
  { R(6)=0x5u; goto L8c06c1a2; }
L8c06c156:;
  { R(6)=0x6u; goto L8c06c1a2; }
L8c06c15a:;
  R(6)=0x81u;
  {  goto L8c06c1a2; }
L8c06c160:;
  R(6)=0x82u;
  {  goto L8c06c1a2; }
L8c06c166:;
  R(6)=0x84u;
  {  goto L8c06c1a2; }
L8c06c16c:;
  R(6)=0x83u;
  {  goto L8c06c1a2; }
L8c06c172:;
  R(6)=0x85u;
  {  goto L8c06c1a2; }
L8c06c178:;
  R(6)=0x86u;
  {  goto L8c06c1a2; }
L8c06c1a0:;
  R(6)=0x0u;
L8c06c1a2:;
  R(3)=0x8c071f80u;
  { c->pr=0x8c06c1a8u; R(4)=LD32(R(15)); f_8c071f80(c); }
  fp_mov(c,4,0);
L8c06c1aa:;
  fp_st(c,4,R(14));
  ST32(R(14)+12,R(12));
  R(0)=LD32(R(15)+4);
L8c06c1b0:;
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c100(SH4Ctx *c) {
  R(2)=LD32(R(13)+4);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c108u; R(5)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=R(10);
  R(5)=LD32(R(14));
  R(5)=LD32(R(5)+4);
  R(5)=LD32(R(5)+12);
  R(0)+=0xfffffffcu;
  R(1)=0xdu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c06c1a0;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c06c128u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c06c126u+R(0));  switch(tg){ case 0x8c06c142u: goto L8c06c142; case 0x8c06c146u: goto L8c06c146; case 0x8c06c14au: goto L8c06c14a; case 0x8c06c14eu: goto L8c06c14e; case 0x8c06c152u: goto L8c06c152; case 0x8c06c156u: goto L8c06c156; case 0x8c06c15au: goto L8c06c15a; case 0x8c06c160u: goto L8c06c160; case 0x8c06c166u: goto L8c06c166; case 0x8c06c16cu: goto L8c06c16c; case 0x8c06c172u: goto L8c06c172; case 0x8c06c178u: goto L8c06c178; case 0x8c06c1a0u: goto L8c06c1a0; default: sh4_bad_jump(c,0x8c06c122u,tg); return; } }
L8c06c142:;
  { R(6)=0x1u; goto L8c06c1a2; }
L8c06c146:;
  { R(6)=0x2u; goto L8c06c1a2; }
L8c06c14a:;
  { R(6)=0x4u; goto L8c06c1a2; }
L8c06c14e:;
  { R(6)=0x3u; goto L8c06c1a2; }
L8c06c152:;
  { R(6)=0x5u; goto L8c06c1a2; }
L8c06c156:;
  { R(6)=0x6u; goto L8c06c1a2; }
L8c06c15a:;
  R(6)=0x81u;
  {  goto L8c06c1a2; }
L8c06c160:;
  R(6)=0x82u;
  {  goto L8c06c1a2; }
L8c06c166:;
  R(6)=0x84u;
  {  goto L8c06c1a2; }
L8c06c16c:;
  R(6)=0x83u;
  {  goto L8c06c1a2; }
L8c06c172:;
  R(6)=0x85u;
  {  goto L8c06c1a2; }
L8c06c178:;
  R(6)=0x86u;
  {  goto L8c06c1a2; }
L8c06c1a0:;
  R(6)=0x0u;
L8c06c1a2:;
  R(3)=0x8c071f80u;
  { c->pr=0x8c06c1a8u; R(4)=LD32(R(15)); f_8c071f80(c); }
  fp_mov(c,4,0);
  fp_st(c,4,R(14));
  ST32(R(14)+12,R(12));
  R(0)=LD32(R(15)+4);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c1a0(SH4Ctx *c) {
  R(6)=0x0u;
  R(3)=0x8c071f80u;
  { c->pr=0x8c06c1a8u; R(4)=LD32(R(15)); f_8c071f80(c); }
  fp_mov(c,4,0);
  fp_st(c,4,R(14));
  ST32(R(14)+12,R(12));
  R(0)=LD32(R(15)+4);
  R(15)+=0x24u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c1c6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(5);
  R(11)=R(5);
  R(3)=LD32(R(13)+4);
  R(11)+=0xfffffff4u;
  R(12)=R(4);
  R(14)=R(6);
  { uint32_t tg=R(3); c->pr=0x8c06c1e4u; R(11)=LD32(R(11)); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=R(11);
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c06c1f0;
  { R(4)=LD32(R(14)); goto L8c06c282; }
L8c06c1f0:;
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c1fa;
  { fp_ld(c,15,R(14)); goto L8c06c202; }
L8c06c1fa:;
  R(3)=LD32(R(14));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06c202:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c20cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(0)=R(11); if(k) goto L8c06c21a; }
  { fp_ld(c,4,R(14)); goto L8c06c222; }
L8c06c21a:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06c222:;
  c->t=(int32_t)R(0)==37;
  if(c->t) goto L8c06c23a;
  c->t=(int32_t)R(0)==38;
  if(c->t) goto L8c06c23e;
  c->t=(int32_t)R(0)==40;
  if(c->t) goto L8c06c242;
  c->t=(int32_t)R(0)==41;
  if(c->t) goto L8c06c246;
  c->t=(int32_t)R(0)==39;
  if(c->t) goto L8c06c250;
  {  goto L8c06c280; }
L8c06c23a:;
  { fp_cmp(c,1,4,15); goto L8c06c252; }
L8c06c23e:;
  { fp_cmp(c,1,15,4); goto L8c06c252; }
L8c06c242:;
  { fp_cmp(c,1,15,4); goto L8c06c248; }
L8c06c246:;
  fp_cmp(c,1,4,15);
L8c06c248:;
  R(4)=c->t;
  R(4)+=0xffffffffu;
  { R(4)=0u-R(4); goto L8c06c282; }
L8c06c250:;
  fp_cmp(c,0,15,4);
L8c06c252:;
  { R(4)=c->t; goto L8c06c282; }
L8c06c280:;
  R(4)=0x0u;
L8c06c282:;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06c2b0;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06c292u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c29e;
  { fp_ld(c,15,R(14)); goto L8c06c2a6; }
L8c06c29e:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06c2a6:;
  R(3)=0x8c072ff8u;
  { c->pr=0x8c06c2acu; R(4)=LD32(R(15)); f_8c072ff8(c); }
  { R(5)=R(0); goto L8c06c2d6; }
L8c06c2b0:;
  R(3)=0x8c072ff8u;
  { c->pr=0x8c06c2b6u; R(4)=R(13); f_8c072ff8(c); }
  R(13)=R(0);
  R(2)=LD32(R(13)+4);
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c2c2u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c2ce;
  { fp_ld(c,15,R(14)); goto L8c06c2d6; }
L8c06c2ce:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06c2d6:;
  R(2)=0x8u;
  R(0)=R(5);
  fp_st(c,15,R(14));
  ST32(R(14)+12,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c280(SH4Ctx *c) {
  R(4)=0x0u;
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06c2b0;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06c292u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c29e;
  { fp_ld(c,15,R(14)); goto L8c06c2a6; }
L8c06c29e:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06c2a6:;
  R(3)=0x8c072ff8u;
  { c->pr=0x8c06c2acu; R(4)=LD32(R(15)); f_8c072ff8(c); }
  { R(5)=R(0); goto L8c06c2d6; }
L8c06c2b0:;
  R(3)=0x8c072ff8u;
  { c->pr=0x8c06c2b6u; R(4)=R(13); f_8c072ff8(c); }
  R(13)=R(0);
  R(2)=LD32(R(13)+4);
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c2c2u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c2ce;
  { fp_ld(c,15,R(14)); goto L8c06c2d6; }
L8c06c2ce:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06c2d6:;
  R(2)=0x8u;
  R(0)=R(5);
  fp_st(c,15,R(14));
  ST32(R(14)+12,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c2ee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(13)=R(5);
  R(14)=R(6);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15),R(4));
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06c310u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c320;
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(12)=c->fpul; goto L8c06c322; }
L8c06c320:;
  R(12)=LD32(R(14));
L8c06c322:;
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==20;
  if(c->t) goto L8c06c352;
  c->t=(int32_t)R(0)==21;
  if(!c->t) goto L8c06c352;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c336u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c06c348; }
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c06c34a; }
L8c06c348:;
  R(5)=LD32(R(14));
L8c06c34a:;
  R(2)=0x8c05e964u;
  { c->pr=0x8c06c350u;  f_8c05e964(c); }
  R(12)=R(0);
L8c06c352:;
  R(2)=0x6u;
  R(0)=R(13);
  ST32(R(14),R(12));
  ST32(R(14)+12,R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c366(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06c376u; R(14)=R(6); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c06c384; }
  { fp_ld(c,4,R(14)); goto L8c06c38c; }
L8c06c384:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06c38c:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c06c3c0;
  { fp_mov(c,3,4); goto L8c06c3c4; }
L8c06c3c0:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c06c3c4:;
  R(3)=0x8u;
  R(0)=R(5);
  fp_st(c,3,R(14));
  ST32(R(14)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c3c0(SH4Ctx *c) {
  fp_mov(c,3,4);
  fp_unary(c,0,3);
  R(3)=0x8u;
  R(0)=R(5);
  fp_st(c,3,R(14));
  ST32(R(14)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c3d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(14)=R(6);
  R(5)=R(13);
  R(6)=R(14);
  R(12)=R(4);
  ST32(R(15),R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06c3fcu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c408;
  { fp_ld(c,15,R(14)); goto L8c06c410; }
L8c06c408:;
  R(3)=LD32(R(14));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06c410:;
  R(0)=0x8c06c438u;
  fp_mov(c,5,15);
  fp_ld(c,3,R(0));
  fp_arith(c,2,5,15);
  fp_mov(c,4,15);
  fp_arith(c,2,4,3);
  R(0)=LD32(R(15));
  R(0)+=0xffffffeau;
  R(1)=0xfu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c06c42a;
  {  goto L8c06c632; }
L8c06c42a:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c06c43cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c06c436u+R(0));  switch(tg){ case 0x8c06c45au: goto L8c06c45a; case 0x8c06c45eu: goto L8c06c45e; case 0x8c06c468u: goto L8c06c468; case 0x8c06c472u: goto L8c06c472; case 0x8c06c476u: goto L8c06c476; case 0x8c06c47au: goto L8c06c47a; case 0x8c06c4a4u: goto L8c06c4a4; case 0x8c06c4bcu: goto L8c06c4bc; case 0x8c06c500u: goto L8c06c500; case 0x8c06c55cu: goto L8c06c55c; case 0x8c06c582u: goto L8c06c582; case 0x8c06c5a8u: goto L8c06c5a8; case 0x8c06c5acu: goto L8c06c5ac; case 0x8c06c5e0u: goto L8c06c5e0; case 0x8c06c632u: goto L8c06c632; default: sh4_bad_jump(c,0x8c06c432u,tg); return; } }
L8c06c45a:;
  {  goto L8c06c632; }
L8c06c45e:;
  R(2)=0x8c0686fcu;
  { c->pr=0x8c06c464u;  f_8c0686fc(c); }
  {  goto L8c06c4a0; }
L8c06c468:;
  R(2)=0x8c068530u;
  { c->pr=0x8c06c46eu;  f_8c068530(c); }
  {  goto L8c06c4a0; }
L8c06c472:;
  { fp_mov(c,15,5); goto L8c06c632; }
L8c06c476:;
  { fp_unary(c,2,15); goto L8c06c632; }
L8c06c47a:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c484u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c06c492; }
  { fp_ld(c,5,R(14)); goto L8c06c49a; }
L8c06c492:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c06c49a:;
  R(2)=0x8c05e9c0u;
  { c->pr=0x8c06c4a0u;  f_8c05e9c0(c); }
L8c06c4a0:;
  { fp_mov(c,15,0); goto L8c06c632; }
L8c06c4a4:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c06c4b0;
  c->fr[15]=0x3F800000u;
  { fp_unary(c,0,15); goto L8c06c632; }
L8c06c4b0:;
  fp_cmp(c,1,15,2);
  if(!c->t) goto L8c06c4b8;
  { c->fr[15]=0x3F800000u; goto L8c06c632; }
L8c06c4b8:;
  { c->fr[15]=0x00000000u; goto L8c06c632; }
L8c06c4bc:;
  fp_mov(c,2,15);
  { fp_mov(c,15,5); goto L8c06c5b0; }
L8c06c500:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c50au; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c516;
  { fp_ld(c,14,R(14)); goto L8c06c51e; }
L8c06c516:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,14,3);
L8c06c51e:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c528u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c534;
  { fp_ld(c,5,R(14)); goto L8c06c53c; }
L8c06c534:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c06c53c:;
  fp_cmp(c,1,5,15);
  fp_mov(c,4,5);
  { uint32_t k=c->t; fp_arith(c,1,4,14); if(k) goto L8c06c54a; }
L8c06c544:;
  fp_arith(c,1,15,4);
  fp_cmp(c,1,5,15);
  if(!c->t) goto L8c06c544;
L8c06c54a:;
  fp_cmp(c,1,14,15);
  if(c->t) goto L8c06c552;
  {  goto L8c06c632; }
L8c06c552:;
  fp_arith(c,0,15,4);
  fp_cmp(c,1,14,15);
  if(c->t) goto L8c06c552;
  {  goto L8c06c632; }
L8c06c55c:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06c566u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c572;
  { fp_ld(c,4,R(14)); goto L8c06c57a; }
L8c06c572:;
  R(3)=LD32(R(14));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06c57a:;
  fp_cmp(c,1,4,15);
  if(c->t) goto L8c06c632;
  { fp_mov(c,15,4); goto L8c06c632; }
L8c06c582:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06c58cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c598;
  { fp_ld(c,4,R(14)); goto L8c06c5a0; }
L8c06c598:;
  R(3)=LD32(R(14));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06c5a0:;
  fp_cmp(c,1,15,4);
  if(c->t) goto L8c06c632;
  { fp_mov(c,15,4); goto L8c06c632; }
L8c06c5a8:;
  { fp_mov(c,15,4); goto L8c06c632; }
L8c06c5ac:;
  R(0)=0x8c06c5c0u;
  fp_ld(c,2,R(0));
L8c06c5b0:;
  { fp_arith(c,2,15,2); goto L8c06c632; }
L8c06c5e0:;
  R(11)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c06c5eau; R(4)=R(12); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c5f6;
  { fp_ld(c,4,R(14)); goto L8c06c5fe; }
L8c06c5f6:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06c5fe:;
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06c60e;
  R(3)=0x8c072ff8u;
  fp_mov(c,15,4);
  { c->pr=0x8c06c60au; R(4)=R(11); f_8c072ff8(c); }
  { R(13)=R(0); goto L8c06c632; }
L8c06c60e:;
  R(13)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c06c618u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c624;
  { fp_ld(c,4,R(14)); goto L8c06c62c; }
L8c06c624:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06c62c:;
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c06c632;
  fp_mov(c,15,4);
L8c06c632:;
  R(2)=0x8u;
  R(0)=R(13);
  fp_st(c,15,R(14));
  ST32(R(14)+12,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c500(SH4Ctx *c) {
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c50au; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c516;
  { fp_ld(c,14,R(14)); goto L8c06c51e; }
L8c06c516:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,14,3);
L8c06c51e:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06c528u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c534;
  { fp_ld(c,5,R(14)); goto L8c06c53c; }
L8c06c534:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c06c53c:;
  fp_cmp(c,1,5,15);
  fp_mov(c,4,5);
  { uint32_t k=c->t; fp_arith(c,1,4,14); if(k) goto L8c06c54a; }
L8c06c544:;
  fp_arith(c,1,15,4);
  fp_cmp(c,1,5,15);
  if(!c->t) goto L8c06c544;
L8c06c54a:;
  fp_cmp(c,1,14,15);
  if(c->t) goto L8c06c552;
  {  goto L8c06c632; }
L8c06c552:;
  fp_arith(c,0,15,4);
  fp_cmp(c,1,14,15);
  if(c->t) goto L8c06c552;
  {  goto L8c06c632; }
L8c06c632:;
  R(2)=0x8u;
  R(0)=R(13);
  fp_st(c,15,R(14));
  ST32(R(14)+12,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c5e0(SH4Ctx *c) {
  R(11)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c06c5eau; R(4)=R(12); sh4_call(c,tg); }
  R(11)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c5f6;
  { fp_ld(c,4,R(14)); goto L8c06c5fe; }
L8c06c5f6:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06c5fe:;
  fp_cmp(c,1,4,15);
  if(!c->t) goto L8c06c60e;
  R(3)=0x8c072ff8u;
  fp_mov(c,15,4);
  { c->pr=0x8c06c60au; R(4)=R(11); f_8c072ff8(c); }
  { R(13)=R(0); goto L8c06c632; }
L8c06c60e:;
  R(13)=LD32(R(11)+4);
  R(5)=R(11);
  R(6)=R(14);
  { uint32_t tg=R(13); c->pr=0x8c06c618u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c624;
  { fp_ld(c,4,R(14)); goto L8c06c62c; }
L8c06c624:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06c62c:;
  fp_cmp(c,1,15,4);
  if(!c->t) goto L8c06c632;
  fp_mov(c,15,4);
L8c06c632:;
  R(2)=0x8u;
  R(0)=R(13);
  fp_st(c,15,R(14));
  ST32(R(14)+12,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c64c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(7)=0x8c0c76fcu;
  R(13)=R(5);
  R(5)=LD32(R(7));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c06c668; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c06c66a; }
L8c06c668:;
  ST32(R(15),R(4));
L8c06c66a:;
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06c670u; R(5)=R(13); sh4_call(c,tg); }
  R(3)=0x8c05e6eau;
  R(4)=R(15);
  ST32(R(15)+4,R(0));
  R(5)=R(14);
  { c->pr=0x8c06c67cu; R(4)+=0x8u; f_8c05e6ea(c); }
  R(4)=LD32(R(15));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  R(4)=LD32(R(15));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  R(4)=LD32(R(15));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  R(4)=LD32(R(4)+36);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=LD32(R(15)+4);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c6f8(SH4Ctx *c) {
  { R(0)=R(5); return; }
}
void f_8c06c6fc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  R(7)=0x8c0c76fcu;
  R(13)=R(5);
  R(5)=LD32(R(7));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c06c740; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c06c742; }
L8c06c740:;
  ST32(R(15),R(4));
L8c06c742:;
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06c748u; R(5)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  R(0)=0x20u;
  R(4)=R(15);
  R(5)=R(14);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x2cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x30u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  R(3)=0x8c05e6eau;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x34u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c06c7c0u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=LD32(R(15)+4);
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c740(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06c748u; R(5)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  R(0)=0x20u;
  R(4)=R(15);
  R(5)=R(14);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x2cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x30u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+36);
  R(3)=0x8c05e6eau;
  fp_ld(c,3,R(0)+R(2));
  R(0)=0x34u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c06c7c0u; R(4)+=0x8u; f_8c05e6ea(c); }
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(14));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x34u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=LD32(R(15)+4);
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c860(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(12)=R(5);
  R(12)+=0xfffffff4u;
  R(14)=R(5);
  R(12)=LD32(R(12));
  R(3)=LD32(R(14)+4);
  R(11)=R(6);
  R(10)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c06c884u; R(9)=R(6); sh4_call(c,tg); }
  R(1)=0xbfu;
  R(14)=R(0);
  R(0)=R(12);
  R(13)=0x8c05e6eau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06c8c6;
  R(1)=0xbcu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06c89a;
  {  goto L8c06ca6e; }
L8c06c89a:;
  R(1)=0xbbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06c8a4;
  {  goto L8c06ca6e; }
L8c06c8a4:;
  R(1)=0xbau;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06c8ae;
  {  goto L8c06cbc8; }
L8c06c8ae:;
  R(1)=0xbdu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06c8b8;
  {  goto L8c06cc6c; }
L8c06c8b8:;
  R(1)=0xbeu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06c8c2;
  {  goto L8c06cd00; }
L8c06c8c2:;
  {  goto L8c06cd1e; }
L8c06c8c6:;
  R(3)=LD32(R(9));
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(9)+4);
  ST32(R(2),R(3));
  R(6)=R(11);
  R(5)=R(14);
  ST32(R(2)+4,R(1));
  R(3)=LD32(R(9)+8);
  ST32(R(2)+8,R(3));
  R(0)=LD32(R(14)+4);
  { uint32_t tg=R(0); c->pr=0x8c06c8e0u; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(11)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06c920;
  { fp_ld(c,15,R(11)); goto L8c06c928; }
L8c06c920:;
  R(2)=LD32(R(11));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c06c928:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c06c932;
  {  goto L8c06ca58; }
L8c06c932:;
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(11);
  { uint32_t tg=R(2); c->pr=0x8c06c93cu; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x8c06caa0u;
  fp_ld(c,3,R(0));
  R(12)=0x8c0686fcu;
  fp_arith(c,2,15,3);
  fp_unary(c,0,15);
  { c->pr=0x8c06c94cu; fp_mov(c,4,15); f_8c0686fc(c); }
  fp_ld(c,3,R(9));
  fp_arith(c,2,0,3);
  fp_st(c,0,R(9));
  { uint32_t tg=R(12); c->pr=0x8c06c956u; fp_mov(c,4,15); sh4_call(c,tg); }
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(9));
  fp_arith(c,2,0,3);
  fp_st(c,0,R(0)+R(9));
  { uint32_t tg=R(12); c->pr=0x8c06c962u; fp_mov(c,4,15); sh4_call(c,tg); }
  R(0)=0x8u;
  R(3)=0x8c068530u;
  fp_ld(c,3,R(0)+R(9));
  fp_arith(c,2,0,3);
  fp_st(c,0,R(0)+R(9));
  { c->pr=0x8c06c970u; fp_mov(c,4,15); f_8c068530(c); }
  R(0)=0x8u;
  fp_ld(c,4,R(9));
  fp_ld(c,6,R(0)+R(9));
  R(0)=0x4u;
  R(3)=0x8c016454u;
  R(4)=R(15);
  fp_ld(c,5,R(0)+R(9));
  fp_mov(c,7,0);
  { c->pr=0x8c06c984u; R(4)+=0x10u; f_8c016454(c); }
  R(2)=R(15);
  R(2)+=0x34u;
  c->t=R(2)==R(9);
  if(!c->t) goto L8c06c9f2;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c06c996u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(9));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(9));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c06ca4c; }
L8c06c9f2:;
  R(0)=0x38u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(9));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(9));
  R(0)=0x38u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c06ca4c:;
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(9)); goto L8c06cd1e; }
L8c06ca58:;
  R(2)=0x8c072ff8u;
  { c->pr=0x8c06ca5eu; R(4)=R(14); f_8c072ff8(c); }
  R(5)=R(15);
  R(5)+=0x34u;
  R(14)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c06ca68u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=0x15u;
  { ST32(R(11)+12,R(3)); goto L8c06cd1e; }
L8c06ca6e:;
  R(2)=LD32(R(9));
  R(3)=R(15);
  R(3)+=0x34u;
  R(1)=LD32(R(9)+4);
  ST32(R(3),R(2));
  R(6)=R(11);
  R(5)=R(14);
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(9)+8);
  ST32(R(3)+8,R(2));
  R(0)=LD32(R(14)+4);
  { uint32_t tg=R(0); c->pr=0x8c06ca88u; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(11)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06cac0;
  { fp_ld(c,4,R(11)); goto L8c06cac8; }
L8c06cac0:;
  R(2)=LD32(R(11));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06cac8:;
  R(2)=0xbbu;
  c->t=R(12)==R(2);
  if(c->t) goto L8c06cb1e;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c06cb1e;
  R(0)=0xb4u;
  R(4)=0x8c123b08u;
  R(3)=LD32(R(4)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06caea; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06caea:;
  R(0)=0x8c06cb50u;
  fp_mov(c,0,4);
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8c06cb54u;
  fp_arith(c,2,1,2);
  fp_arith(c,3,3,1);
  fp_ld(c,1,R(0));
  fp_arith(c,0,3,1);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; fp_arith(c,2,0,4); if(k) goto L8c06cb1e; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06cb22;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06cb60;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06cb64;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06cb6a;
  {  goto L8c06cb74; }
L8c06cb1e:;
  { fp_mov(c,15,4); goto L8c06cb7c; }
L8c06cb22:;
  { fp_mov(c,15,0); goto L8c06cb7c; }
L8c06cb60:;
  { fp_mov(c,15,0); goto L8c06cb70; }
L8c06cb64:;
  fp_mov(c,15,0);
  { fp_arith(c,2,15,0); goto L8c06cb7c; }
L8c06cb6a:;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_mov(c,15,3);
L8c06cb70:;
  { fp_arith(c,2,15,4); goto L8c06cb7c; }
L8c06cb74:;
  fp_mov(c,15,0);
  fp_arith(c,2,15,4);
  fp_mov(c,3,15);
  fp_arith(c,2,15,3);
L8c06cb7c:;
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c06cb86u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  ST32(R(15),R(0));
  R(6)=R(9);
  R(5)+=0x34u;
  { c->pr=0x8c06cb96u; R(4)+=0x34u; f_8c05e612(c); }
  R(0)=0x34u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,2,3);
  R(5)+=0x34u;
  R(6)=R(9);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c06cbc4u; R(4)=R(9); sh4_call(c,tg); }
  {  goto L8c06ccc8; }
L8c06cbc8:;
  R(3)=LD32(R(9));
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(9)+4);
  ST32(R(2),R(3));
  R(6)=R(11);
  R(5)=R(14);
  ST32(R(2)+4,R(1));
  R(3)=LD32(R(9)+8);
  ST32(R(2)+8,R(3));
  R(0)=LD32(R(14)+4);
  { uint32_t tg=R(0); c->pr=0x8c06cbe2u; R(4)=R(10); sh4_call(c,tg); }
  c->fr[3]=0x00000000u;
  ST32(R(15),R(0));
  fp_ld(c,2,R(9));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06cbfe;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(9));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06cbfe;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(9));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c06cc5a;
L8c06cbfe:;
  R(0)=0x4u;
  fp_ld(c,6,R(9));
  fp_ld(c,4,R(0)+R(9));
  R(0)=0x8u;
  fp_mov(c,0,6);
  R(5)=R(15);
  fp_mov(c,3,4);
  fp_arith(c,2,3,4);
  fp_ld(c,5,R(0)+R(9));
  R(0)=0x4u;
  R(3)=0x8c05e55cu;
  R(5)+=0x34u;
  fp_fmac(c,3,6);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_mov(c,2,4);
  fp_mov(c,3,6);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(9));
  fp_ld(c,3,R(0)+R(9));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(9));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(9));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(9));
  { uint32_t tg=R(3); c->pr=0x8c06cc3cu; R(4)=R(9); sh4_call(c,tg); }
  fp_ld(c,3,R(9));
  R(0)=0x4u;
  fp_mov(c,2,0);
  fp_arith(c,2,2,3);
  fp_mov(c,4,0);
  fp_st(c,2,R(9));
  fp_ld(c,3,R(0)+R(9));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(9));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(9));
  fp_arith(c,2,4,3);
  { fp_st(c,4,R(0)+R(9)); goto L8c06ccc8; }
L8c06cc5a:;
  R(2)=R(15);
  R(2)+=0x34u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(2)+4);
  ST32(R(9),R(3));
  ST32(R(9)+4,R(1));
  R(3)=LD32(R(2)+8);
  { ST32(R(9)+8,R(3)); goto L8c06ccc8; }
L8c06cc6c:;
  R(3)=LD32(R(9));
  R(2)=R(15);
  R(2)+=0x34u;
  R(1)=LD32(R(9)+4);
  ST32(R(2),R(3));
  R(6)=R(11);
  R(5)=R(14);
  ST32(R(2)+4,R(1));
  R(3)=LD32(R(9)+8);
  ST32(R(2)+8,R(3));
  R(0)=LD32(R(14)+4);
  { uint32_t tg=R(0); c->pr=0x8c06cc86u; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(11)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06cc92;
  { fp_ld(c,4,R(11)); goto L8c06cc9a; }
L8c06cc92:;
  R(2)=LD32(R(11));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06cc9a:;
  R(0)=0x34u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  R(5)=R(15);
  R(5)+=0x34u;
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
  { uint32_t tg=R(13); c->pr=0x8c06ccc4u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=0x15u;
  ST32(R(11)+12,R(3));
L8c06ccc8:;
  { R(0)=LD32(R(15)); goto L8c06cd20; }
L8c06cd00:;
  R(0)=0x4u;
  fp_ld(c,4,R(9));
  fp_ld(c,6,R(0)+R(9));
  R(0)=0x8u;
  fp_mov(c,0,4);
  R(3)=R(0);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(9));
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_st(c,3,R(11));
  ST32(R(11)+12,R(0));
L8c06cd1e:;
  R(0)=R(14);
L8c06cd20:;
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06c920(SH4Ctx *c) {
  R(2)=LD32(R(11));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,15,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c06c932;
  {  goto L8c06ca58; }
L8c06c932:;
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(11);
  { uint32_t tg=R(2); c->pr=0x8c06c93cu; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x8c06caa0u;
  fp_ld(c,3,R(0));
  R(12)=0x8c0686fcu;
  fp_arith(c,2,15,3);
  fp_unary(c,0,15);
  { c->pr=0x8c06c94cu; fp_mov(c,4,15); f_8c0686fc(c); }
  fp_ld(c,3,R(9));
  fp_arith(c,2,0,3);
  fp_st(c,0,R(9));
  { uint32_t tg=R(12); c->pr=0x8c06c956u; fp_mov(c,4,15); sh4_call(c,tg); }
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(9));
  fp_arith(c,2,0,3);
  fp_st(c,0,R(0)+R(9));
  { uint32_t tg=R(12); c->pr=0x8c06c962u; fp_mov(c,4,15); sh4_call(c,tg); }
  R(0)=0x8u;
  R(3)=0x8c068530u;
  fp_ld(c,3,R(0)+R(9));
  fp_arith(c,2,0,3);
  fp_st(c,0,R(0)+R(9));
  { c->pr=0x8c06c970u; fp_mov(c,4,15); f_8c068530(c); }
  R(0)=0x8u;
  fp_ld(c,4,R(9));
  fp_ld(c,6,R(0)+R(9));
  R(0)=0x4u;
  R(3)=0x8c016454u;
  R(4)=R(15);
  fp_ld(c,5,R(0)+R(9));
  fp_mov(c,7,0);
  { c->pr=0x8c06c984u; R(4)+=0x10u; f_8c016454(c); }
  R(2)=R(15);
  R(2)+=0x34u;
  c->t=R(2)==R(9);
  if(!c->t) goto L8c06c9f2;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x34u;
  { uint32_t tg=R(13); c->pr=0x8c06c996u; R(4)+=0x4u; sh4_call(c,tg); }
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(9));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(9));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0xcu;
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c06ca4c; }
L8c06c9f2:;
  R(0)=0x38u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x28u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(9));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(9));
  R(0)=0x38u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
L8c06ca4c:;
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(9)); goto L8c06cd1e; }
L8c06ca58:;
  R(2)=0x8c072ff8u;
  { c->pr=0x8c06ca5eu; R(4)=R(14); f_8c072ff8(c); }
  R(5)=R(15);
  R(5)+=0x34u;
  R(14)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c06ca68u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=0x15u;
  { ST32(R(11)+12,R(3)); goto L8c06cd1e; }
L8c06cd1e:;
  R(0)=R(14);
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06cac0(SH4Ctx *c) {
  R(2)=LD32(R(11));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,4,3);
  R(2)=0xbbu;
  c->t=R(12)==R(2);
  if(c->t) goto L8c06cb1e;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  if(c->t) goto L8c06cb1e;
  R(0)=0xb4u;
  R(4)=0x8c123b08u;
  R(3)=LD32(R(4)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06caea; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06caea:;
  R(0)=0x8c06cb50u;
  fp_mov(c,0,4);
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8c06cb54u;
  fp_arith(c,2,1,2);
  fp_arith(c,3,3,1);
  fp_ld(c,1,R(0));
  fp_arith(c,0,3,1);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; fp_arith(c,2,0,4); if(k) goto L8c06cb1e; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06cb22;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06cb60;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06cb64;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06cb6a;
  {  goto L8c06cb74; }
L8c06cb1e:;
  { fp_mov(c,15,4); goto L8c06cb7c; }
L8c06cb22:;
  { fp_mov(c,15,0); goto L8c06cb7c; }
L8c06cb60:;
  { fp_mov(c,15,0); goto L8c06cb70; }
L8c06cb64:;
  fp_mov(c,15,0);
  { fp_arith(c,2,15,0); goto L8c06cb7c; }
L8c06cb6a:;
  fp_mov(c,3,0);
  fp_arith(c,2,3,0);
  fp_mov(c,15,3);
L8c06cb70:;
  { fp_arith(c,2,15,4); goto L8c06cb7c; }
L8c06cb74:;
  fp_mov(c,15,0);
  fp_arith(c,2,15,4);
  fp_mov(c,3,15);
  fp_arith(c,2,15,3);
L8c06cb7c:;
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c06cb86u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  ST32(R(15),R(0));
  R(6)=R(9);
  R(5)+=0x34u;
  { c->pr=0x8c06cb96u; R(4)+=0x34u; f_8c05e612(c); }
  R(0)=0x34u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,2,3);
  R(5)+=0x34u;
  R(6)=R(9);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c06cbc4u; R(4)=R(9); sh4_call(c,tg); }
  {  goto L8c06ccc8; }
L8c06ccc8:;
  { R(0)=LD32(R(15)); goto L8c06cd20; }
L8c06cd20:;
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06cb60(SH4Ctx *c) {
  { fp_mov(c,15,0); goto L8c06cb70; }
L8c06cb70:;
  { fp_arith(c,2,15,4); goto L8c06cb7c; }
L8c06cb7c:;
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)=R(11);
  { uint32_t tg=R(3); c->pr=0x8c06cb86u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(4)=R(15);
  ST32(R(15),R(0));
  R(6)=R(9);
  R(5)+=0x34u;
  { c->pr=0x8c06cb96u; R(4)+=0x34u; f_8c05e612(c); }
  R(0)=0x34u;
  fp_mov(c,2,15);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x34u;
  R(5)=R(15);
  R(3)=0x8c05e5f4u;
  fp_arith(c,2,2,3);
  R(5)+=0x34u;
  R(6)=R(9);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x38u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c06cbc4u; R(4)=R(9); sh4_call(c,tg); }
  {  goto L8c06ccc8; }
L8c06ccc8:;
  { R(0)=LD32(R(15)); goto L8c06cd20; }
L8c06cd20:;
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06cd00(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,4,R(9));
  fp_ld(c,6,R(0)+R(9));
  R(0)=0x8u;
  fp_mov(c,0,4);
  R(3)=R(0);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(9));
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  fp_st(c,3,R(11));
  ST32(R(11)+12,R(0));
  R(0)=R(14);
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06cd34(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=R(5);
  R(14)=R(6);
  R(13)=R(4);
  ST32(R(15),R(5));
  R(12)=LD32(R(12)+4);
  { uint32_t tg=R(12); c->pr=0x8c06cd50u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06cd5c;
  { fp_ld(c,13,R(14)); goto L8c06cd64; }
L8c06cd5c:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,13,3);
L8c06cd64:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06cd6eu; R(4)=R(13); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06cd7a;
  { fp_ld(c,14,R(14)); goto L8c06cd82; }
L8c06cd7a:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,14,3);
L8c06cd82:;
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06cd8cu; R(4)=R(13); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06cd98;
  { fp_ld(c,5,R(14)); goto L8c06cda0; }
L8c06cd98:;
  R(2)=LD32(R(14));
  c->fpul=R(2);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c06cda0:;
  R(0)=0xb4u;
  R(4)=0x8c123b08u;
  R(2)=LD32(R(4)+R(0));
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06cdb6; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06cdb6:;
  R(0)=0x8c06ce0cu;
  fp_mov(c,0,14);
  fp_ld(c,2,R(0));
  R(0)=0xbcu;
  fp_ld(c,1,R(0)+R(4));
  R(0)=0x8c06ce10u;
  fp_arith(c,2,1,2);
  fp_arith(c,3,3,1);
  fp_ld(c,1,R(0));
  fp_arith(c,0,3,1);
  fp_ftrc(c,3);
  R(4)=c->fpul;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; fp_arith(c,2,0,14); if(k) goto L8c06cdea; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06cdee;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06cdf2;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06ce20;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06ce24;
  {  goto L8c06ce2c; }
L8c06cdea:;
  { fp_mov(c,4,14); goto L8c06ce34; }
L8c06cdee:;
  { fp_mov(c,4,0); goto L8c06ce34; }
L8c06cdf2:;
  fp_mov(c,4,0);
  { fp_arith(c,2,4,14); goto L8c06ce34; }
L8c06ce20:;
  { fp_mov(c,4,0); goto L8c06ce28; }
L8c06ce24:;
  fp_arith(c,2,14,0);
  fp_mov(c,4,14);
L8c06ce28:;
  { fp_arith(c,2,4,0); goto L8c06ce34; }
L8c06ce2c:;
  fp_mov(c,6,0);
  fp_arith(c,2,6,14);
  fp_mov(c,4,6);
  fp_arith(c,2,4,6);
L8c06ce34:;
  fp_arith(c,1,13,5);
  fp_mov(c,3,4);
  R(3)=0x8u;
  R(0)=R(5);
  fp_mov(c,4,13);
  fp_arith(c,2,4,3);
  fp_mov(c,3,4);
  fp_mov(c,4,5);
  fp_arith(c,0,4,3);
  fp_st(c,4,R(14));
  ST32(R(14)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ce20(SH4Ctx *c) {
  { fp_mov(c,4,0); goto L8c06ce28; }
L8c06ce28:;
  { fp_arith(c,2,4,0); goto L8c06ce34; }
L8c06ce34:;
  fp_arith(c,1,13,5);
  fp_mov(c,3,4);
  R(3)=0x8u;
  R(0)=R(5);
  fp_mov(c,4,13);
  fp_arith(c,2,4,3);
  fp_mov(c,3,4);
  fp_mov(c,4,5);
  fp_arith(c,0,4,3);
  fp_st(c,4,R(14));
  ST32(R(14)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ce5a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(14)=R(6);
  R(5)=R(13);
  R(6)=R(14);
  R(11)=R(4);
  ST32(R(15),R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ce7eu; R(4)=R(11); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==44;
  { uint32_t k=c->t; R(12)=LD32(R(14)); if(k) goto L8c06cec4; }
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c06cea0;
  c->t=(int32_t)R(0)==46;
  if(c->t) goto L8c06cece;
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c06cef6;
  c->t=(int32_t)R(0)==48;
  if(c->t) goto L8c06cf20;
  c->t=(int32_t)R(0)==49;
  if(c->t) goto L8c06cf4e;
  {  goto L8c06cf76; }
L8c06cea0:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06ceaau; R(4)=R(11); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c06cebc; }
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c06cebe; }
L8c06cebc:;
  R(5)=LD32(R(14));
L8c06cebe:;
  R(2)=0x8c08302eu;
  { c->pr=0x8c06cec4u;  f_8c08302e(c); }
L8c06cec4:;
  R(3)=0x8c083000u;
  { c->pr=0x8c06cecau; R(4)=R(12); f_8c083000(c); }
  {  goto L8c06cf72; }
L8c06cece:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06ced8u; R(4)=R(11); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c06ceea; }
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c06ceec; }
L8c06ceea:;
  R(5)=LD32(R(14));
L8c06ceec:;
  R(2)=0x8c08306cu;
  { c->pr=0x8c06cef2u;  f_8c08306c(c); }
  {  goto L8c06cf72; }
L8c06cef6:;
  R(2)=0x8c083090u;
  { c->pr=0x8c06cefcu; R(4)=R(12); f_8c083090(c); }
  {  goto L8c06cf72; }
L8c06cf20:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06cf2au; R(4)=R(11); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c06cf3c; }
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c06cf3e; }
L8c06cf3c:;
  R(5)=LD32(R(14));
L8c06cf3e:;
  R(2)=0x8c0830b6u;
  { c->pr=0x8c06cf44u;  f_8c0830b6(c); }
  R(3)=0x8c083090u;
  { c->pr=0x8c06cf4au; R(4)=R(12); f_8c083090(c); }
  {  goto L8c06cf72; }
L8c06cf4e:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06cf58u; R(4)=R(11); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c06cf6a; }
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c06cf6c; }
L8c06cf6a:;
  R(5)=LD32(R(14));
L8c06cf6c:;
  R(2)=0x8c0830f4u;
  { c->pr=0x8c06cf72u;  f_8c0830f4(c); }
L8c06cf72:;
  { R(4)=R(0)&0xFF; goto L8c06cf78; }
L8c06cf76:;
  R(4)=0x0u;
L8c06cf78:;
  R(3)=0x6u;
  R(0)=R(13);
  ST32(R(14),R(4));
  ST32(R(14)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06cf20(SH4Ctx *c) {
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06cf2au; R(4)=R(11); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c06cf3c; }
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c06cf3e; }
L8c06cf3c:;
  R(5)=LD32(R(14));
L8c06cf3e:;
  R(2)=0x8c0830b6u;
  { c->pr=0x8c06cf44u;  f_8c0830b6(c); }
  R(3)=0x8c083090u;
  { c->pr=0x8c06cf4au; R(4)=R(12); f_8c083090(c); }
  {  goto L8c06cf72; }
L8c06cf72:;
  { R(4)=R(0)&0xFF; goto L8c06cf78; }
L8c06cf78:;
  R(3)=0x6u;
  R(0)=R(13);
  ST32(R(14),R(4));
  ST32(R(14)+12,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06cf8e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  R(5)+=0xfffffff4u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(5));
  R(12)=R(6);
  R(3)=0x8c123b74u;
  R(0)=R(5);
  c->t=(int32_t)R(0)==61;
  { uint32_t k=c->t; R(14)=LD32(R(3)); if(k) goto L8c06cfc6; }
  c->t=(int32_t)R(0)==62;
  if(!c->t) goto L8c06cfc6;
  R(3)=LD32(R(13)+4);
  R(6)=R(12);
  { uint32_t tg=R(3); c->pr=0x8c06cfb4u; R(5)=R(13); sh4_call(c,tg); }
  R(4)=LD32(R(12));
  c->t=R(14)>=R(4);
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c06cfc0; }
  { R(14)-=R(4); goto L8c06cfc6; }
L8c06cfc0:;
  R(2)=R(14);
  R(2)-=R(4);
  R(14)=0u-R(2);
L8c06cfc6:;
  R(3)=0x7u;
  ST32(R(12),R(14));
  ST32(R(12)+12,R(3));
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06cfd8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(13)=R(5);
  R(14)=R(6);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15)+4,R(4));
  R(2)=LD32(R(3));
  ST32(R(15),R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06cffau; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==51;
  { uint32_t k=c->t; R(12)=LD32(R(14)); if(k) goto L8c06d00c; }
  c->t=(int32_t)R(0)==50;
  if(c->t) goto L8c06d072;
  {  goto L8c06d07c; }
L8c06d00c:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06d016u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(13)=0x8c073d76u;
  ST32(R(15),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c06d020u; R(4)=R(12); f_8c073d76(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06d030;
  R(5)=LD32(R(14));
  { uint32_t tg=R(13); c->pr=0x8c06d02au; R(4)=R(12); sh4_call(c,tg); }
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06d060;
L8c06d030:;
  { R(3)=0x0u; goto L8c06d068; }
L8c06d060:;
  R(5)=LD32(R(14));
  { uint32_t tg=R(13); c->pr=0x8c06d066u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(0)+4);
L8c06d068:;
  R(2)=0xbu;
  ST32(R(14),R(3));
  ST32(R(14)+12,R(2));
  { R(0)=LD32(R(15)); goto L8c06d07e; }
L8c06d072:;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  R(3)=0x6u;
  R(2)=R(2)&0xFF;
  ST32(R(14),R(2));
  ST32(R(14)+12,R(3));
L8c06d07c:;
  R(0)=R(13);
L8c06d07e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d060(SH4Ctx *c) {
  R(5)=LD32(R(14));
  { uint32_t tg=R(13); c->pr=0x8c06d066u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(0)+4);
  R(2)=0xbu;
  ST32(R(14),R(3));
  ST32(R(14)+12,R(2));
  { R(0)=LD32(R(15)); goto L8c06d07e; }
L8c06d07e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d08a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06d09au; R(14)=R(6); sh4_call(c,tg); }
  R(3)=0x8c05bcb8u;
  ST32(R(15),R(0));
  { c->pr=0x8c06d0a2u; R(4)=LD32(R(14)); f_8c05bcb8(c); }
  ST32(R(14),R(0));
  R(2)=0x6u;
  ST32(R(14)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d0b2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(12)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(14)=R(6);
  R(4)=LD32(R(4));
  R(13)=R(5);
  R(0)=R(4);
  c->t=(int32_t)R(0)==70;
  { uint32_t k=c->t; R(11)=0x6u; if(k) goto L8c06d120; }
  c->t=(int32_t)R(0)==69;
  if(c->t) goto L8c06d13c;
  c->t=(int32_t)R(0)==68;
  if(c->t) goto L8c06d148;
  R(1)=0xdcu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06d166;
  c->t=(int32_t)R(0)==67;
  if(c->t) goto L8c06d176;
  {  goto L8c06d1ee; }
L8c06d120:;
  R(3)=0x8c04523au;
  { c->pr=0x8c06d126u;  f_8c04523a(c); }
  R(2)=0xffff0000u;
  R(0)&=R(2);
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c06d132;
  { R(0)>>=16; goto L8c06d138; }
L8c06d132:;
  R(0)=~R(0);
  R(0)>>=16;
  R(0)=~R(0);
L8c06d138:;
  { ST32(R(14),R(0)); goto L8c06d144; }
L8c06d13c:;
  R(2)=0x8c12473au;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  ST32(R(14),R(3));
L8c06d144:;
  { ST32(R(14)+12,R(11)); goto L8c06d1ee; }
L8c06d148:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d152u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c044d22u;
  ST32(R(15),R(0));
  R(4)=LD32(R(14));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06d15eu; R(4)=LD32(R(4)+12); f_8c044d22(c); }
  ST32(R(14),R(0));
  R(4)=R(0);
  { ST32(R(14)+12,R(11)); goto L8c06d1ea; }
L8c06d166:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d170u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x16u;
  { ST32(R(14)+12,R(3)); goto L8c06d1f0; }
L8c06d176:;
  R(10)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  R(11)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c06d182u; R(4)=R(12); sh4_call(c,tg); }
  R(10)=R(0);
  R(3)=LD32(R(10)+4);
  R(13)=LD32(R(14));
  R(5)=R(0);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06d190u; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(13)&R(13))==0;
  ST32(R(15),R(0));
  { uint32_t k=c->t; ST32(R(15)+8,R(14)); if(k) goto L8c06d1d4; }
  R(2)=0x8c044260u;
  { c->pr=0x8c06d19eu; R(4)=R(13); f_8c044260(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06d1d4;
  R(4)=LD32(R(13)+4);
  R(2)=LD32(R(4)+4);
  R(4)=R(15);
  ST32(R(15)+4,R(2));
  R(2)=0x8c014ea0u;
  { c->pr=0x8c06d1b2u; R(4)+=0xcu; f_8c014ea0(c); }
  R(3)=0x8c01638au;
  R(4)=R(15);
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c06d1bcu; R(4)+=0xcu; f_8c01638a(c); }
  R(2)=R(15);
  R(3)=0x8c2d03b0u;
  R(2)+=0xcu;
  R(6)=R(12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(5)=LD32(R(3));
  R(2)=0x8c044290u;
  { c->pr=0x8c06d1d0u; R(4)=LD32(R(15)+8); f_8c044290(c); }
  R(15)+=0x4u;
  R(11)=R(0);
L8c06d1d4:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c06d1de;
  R(0)=LD32(R(11));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06d1e2;
L8c06d1de:;
  { R(3)=0x0u; goto L8c06d1e4; }
L8c06d1e2:;
  R(3)=LD32(R(11)+4);
L8c06d1e4:;
  R(2)=0xbu;
  ST32(R(14),R(3));
  ST32(R(14)+12,R(2));
L8c06d1ea:;
  { R(0)=LD32(R(15)); goto L8c06d1f0; }
L8c06d1ee:;
  R(0)=R(13);
L8c06d1f0:;
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d120(SH4Ctx *c) {
  R(3)=0x8c04523au;
  { c->pr=0x8c06d126u;  f_8c04523a(c); }
  R(2)=0xffff0000u;
  R(0)&=R(2);
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c06d132;
  { R(0)>>=16; goto L8c06d138; }
L8c06d132:;
  R(0)=~R(0);
  R(0)>>=16;
  R(0)=~R(0);
L8c06d138:;
  { ST32(R(14),R(0)); goto L8c06d144; }
L8c06d144:;
  { ST32(R(14)+12,R(11)); goto L8c06d1ee; }
L8c06d1ee:;
  R(0)=R(13);
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d200(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(6);
  R(6)=0x8c0c76fcu;
  R(11)=R(5);
  R(13)=R(5);
  R(5)=LD32(R(6));
  R(11)+=0xfffffff4u;
  R(11)=LD32(R(11));
  R(12)=0xcdcdcdcdu;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c06d280; }
  ST32(R(15),R(5));
  { ST32(R(6),R(10)); goto L8c06d282; }
L8c06d280:;
  ST32(R(15),R(4));
L8c06d282:;
  R(1)=0xd0u;
  R(0)=R(11);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06d29a;
  R(1)=0xd1u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06d29a;
  R(1)=0xd2u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06d320;
  {  goto L8c06d330; }
L8c06d29a:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+12);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(1)); if(k) goto L8c06d336; }
  R(12)=LD32(R(15)+4);
  R(2)=0x8c05a3e0u;
  R(12)=LD32(R(12)+4);
  { c->pr=0x8c06d2b0u; R(4)=R(12); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06d2da;
  R(2)=0xd0u;
  c->t=R(11)==R(2);
  if(!c->t) goto L8c06d2dc;
  R(1)=0x8c05a40eu;
  { c->pr=0x8c06d2c0u; R(4)=R(12); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  R(4)=R(0);
  { uint32_t k=c->t; R(5)=R(10); if(k) goto L8c06d2d0; }
  R(2)=0x8c087e94u;
  { c->pr=0x8c06d2ceu;  f_8c087e94(c); }
  R(5)=R(0);
L8c06d2d0:;
  R(5)=R(5)&0xFFFF;
  R(3)=0x1au;
  ST32(R(14),R(5));
  { ST32(R(14)+12,R(3)); goto L8c06d336; }
L8c06d2da:;
  ST32(R(14),R(10));
L8c06d2dc:;
  R(3)=0x1au;
  { ST32(R(14)+12,R(3)); goto L8c06d336; }
L8c06d320:;
  R(3)=0x8c0721b8u;
  { c->pr=0x8c06d326u; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06d330; }
  R(0)=0x50u;
  R(12)=LD32(R(4)+R(0));
L8c06d330:;
  R(3)=0x26u;
  ST32(R(14),R(12));
  ST32(R(14)+12,R(3));
L8c06d336:;
  R(0)=R(13);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d280(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(1)=0xd0u;
  R(0)=R(11);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06d29a;
  R(1)=0xd1u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06d29a;
  R(1)=0xd2u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06d320;
  {  goto L8c06d330; }
L8c06d29a:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+12);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(1)); if(k) goto L8c06d336; }
  R(12)=LD32(R(15)+4);
  R(2)=0x8c05a3e0u;
  R(12)=LD32(R(12)+4);
  { c->pr=0x8c06d2b0u; R(4)=R(12); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06d2da;
  R(2)=0xd0u;
  c->t=R(11)==R(2);
  if(!c->t) goto L8c06d2dc;
  R(1)=0x8c05a40eu;
  { c->pr=0x8c06d2c0u; R(4)=R(12); f_8c05a40e(c); }
  c->t=(int32_t)R(0)==-1;
  R(4)=R(0);
  { uint32_t k=c->t; R(5)=R(10); if(k) goto L8c06d2d0; }
  R(2)=0x8c087e94u;
  { c->pr=0x8c06d2ceu;  f_8c087e94(c); }
  R(5)=R(0);
L8c06d2d0:;
  R(5)=R(5)&0xFFFF;
  R(3)=0x1au;
  ST32(R(14),R(5));
  { ST32(R(14)+12,R(3)); goto L8c06d336; }
L8c06d2da:;
  ST32(R(14),R(10));
L8c06d2dc:;
  R(3)=0x1au;
  { ST32(R(14)+12,R(3)); goto L8c06d336; }
L8c06d320:;
  R(3)=0x8c0721b8u;
  { c->pr=0x8c06d326u; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06d330; }
  R(0)=0x50u;
  R(12)=LD32(R(4)+R(0));
L8c06d330:;
  R(3)=0x26u;
  ST32(R(14),R(12));
  ST32(R(14)+12,R(3));
L8c06d336:;
  R(0)=R(13);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d320(SH4Ctx *c) {
  R(3)=0x8c0721b8u;
  { c->pr=0x8c06d326u; R(4)=LD32(R(15)); f_8c0721b8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06d330; }
  R(0)=0x50u;
  R(12)=LD32(R(4)+R(0));
L8c06d330:;
  R(3)=0x26u;
  ST32(R(14),R(12));
  ST32(R(14)+12,R(3));
  R(0)=R(13);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d348(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(14)=R(6);
  R(6)=R(14);
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06d368u; R(5)=R(13); sh4_call(c,tg); }
  R(2)=0x8c05a3e0u;
  R(13)=R(0);
  R(11)=LD32(R(14));
  R(12)=0x6u;
  { c->pr=0x8c06d374u; R(4)=R(11); f_8c05a3e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06d37c;
  {  goto L8c06d4ba; }
L8c06d37c:;
  R(2)=0x8c05a3fau;
  { c->pr=0x8c06d382u; R(4)=R(11); f_8c05a3fa(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c06d38c;
  {  goto L8c06d4ba; }
L8c06d38c:;
  R(0)=LD32(R(15)+12);
  R(11)=0x8c072474u;
  c->t=(int32_t)R(0)==82;
  if(c->t) goto L8c06d3c0;
  c->t=(int32_t)R(0)==83;
  if(c->t) goto L8c06d3cc;
  c->t=(int32_t)R(0)==84;
  if(c->t) goto L8c06d3da;
  c->t=(int32_t)R(0)==85;
  if(c->t) goto L8c06d3ec;
  c->t=(int32_t)R(0)==86;
  if(c->t) goto L8c06d400;
  c->t=(int32_t)R(0)==87;
  if(c->t) goto L8c06d414;
  c->t=(int32_t)R(0)==88;
  if(c->t) goto L8c06d480;
  c->t=(int32_t)R(0)==89;
  if(!c->t) goto L8c06d3b4;
  {  goto L8c06d4a2; }
L8c06d3b4:;
  c->t=(int32_t)R(0)==90;
  if(!c->t) goto L8c06d3bc;
  {  goto L8c06d4ae; }
L8c06d3bc:;
  {  goto L8c06d4ba; }
L8c06d3c0:;
  R(3)=0x8c011b7cu;
  R(5)=R(15);
  { c->pr=0x8c06d3c8u; R(5)+=0x10u; f_8c011b7c(c); }
  {  goto L8c06d3f4; }
L8c06d3cc:;
  R(3)=0x8c011bccu;
  R(6)=R(15);
  R(6)+=0x10u;
  { c->pr=0x8c06d3d6u; R(5)=R(15); f_8c011bcc(c); }
  {  goto L8c06d3f4; }
L8c06d3da:;
  R(3)=0x8c011bccu;
  R(6)=R(15);
  R(6)+=0x10u;
  { c->pr=0x8c06d3e4u; R(5)=R(15); f_8c011bcc(c); }
  R(2)=LD32(R(15));
  ST32(R(14),R(2));
  { ST32(R(14)+12,R(12)); goto L8c06d4c0; }
L8c06d3ec:;
  R(2)=0x8c011ba4u;
  R(5)=R(15);
  { c->pr=0x8c06d3f4u; R(5)+=0x10u; f_8c011ba4(c); }
L8c06d3f4:;
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c06d3fcu; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c06d4c0; }
L8c06d400:;
  R(2)=0x8c011b54u;
  R(5)=R(15);
  { c->pr=0x8c06d408u; R(5)+=0x10u; f_8c011b54(c); }
  R(4)=R(15);
  R(5)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c06d410u; R(4)+=0x10u; sh4_call(c,tg); }
  {  goto L8c06d4c0; }
L8c06d414:;
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(3)=0x8c011d88u;
  R(7)=R(15);
  R(6)+=0x4u;
  R(7)+=0x8u;
  { c->pr=0x8c06d428u; R(5)=0x0u; f_8c011d88(c); }
  R(15)+=0x4u;
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(3)=0x8u;
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(3)); goto L8c06d4c0; }
L8c06d480:;
  R(3)=R(15);
  R(3)+=0x8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(2)=0x8c011d88u;
  R(7)=R(15);
  R(6)+=0x4u;
  R(7)+=0x8u;
  { c->pr=0x8c06d494u; R(5)=0x0u; f_8c011d88(c); }
  R(15)+=0x4u;
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(3)=0x8u;
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(3)); goto L8c06d4c0; }
L8c06d4a2:;
  R(3)=0x8c011f9cu;
  { c->pr=0x8c06d4a8u;  f_8c011f9c(c); }
  ST32(R(14),R(0));
  { ST32(R(14)+12,R(12)); goto L8c06d4c0; }
L8c06d4ae:;
  R(3)=0x8c011f50u;
  { c->pr=0x8c06d4b4u;  f_8c011f50(c); }
  ST32(R(14),R(0));
  { ST32(R(14)+12,R(12)); goto L8c06d4c0; }
L8c06d4ba:;
  R(2)=0x0u;
  ST32(R(14),R(2));
  ST32(R(14)+12,R(12));
L8c06d4c0:;
  R(0)=R(13);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d480(SH4Ctx *c) {
  R(3)=R(15);
  R(3)+=0x8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(2)=0x8c011d88u;
  R(7)=R(15);
  R(6)+=0x4u;
  R(7)+=0x8u;
  { c->pr=0x8c06d494u; R(5)=0x0u; f_8c011d88(c); }
  R(15)+=0x4u;
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  R(3)=0x8u;
  fp_st(c,4,R(14));
  { ST32(R(14)+12,R(3)); goto L8c06d4c0; }
L8c06d4c0:;
  R(0)=R(13);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d4d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(14)=R(6);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06d4e4u; R(6)+=0x4u; sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06d4f6;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c06d4f8; }
L8c06d4f6:;
  R(3)=LD32(R(15)+4);
L8c06d4f8:;
  R(4)=0x64u;
  c->t=(int32_t)R(3)>(int32_t)R(4);
  { uint32_t k=!c->t; ST32(R(14),R(3)); if(k) goto L8c06d504; }
  { ST32(R(14),R(4)); goto L8c06d50e; }
L8c06d504:;
  R(2)=LD32(R(14));
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c06d50e;
  R(1)=0x0u;
  ST32(R(14),R(1));
L8c06d50e:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d518(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(6));
  { c->pr=0x8c06d522u; R(6)=R(15); f_8c06d4d0(c); }
  R(3)=LD32(R(15));
  R(5)=R(0);
  R(2)=LD32(R(15)+4);
  ST8(R(2),R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c06d532(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(6));
  { c->pr=0x8c06d53cu; R(6)=R(15); f_8c06d4d0(c); }
  R(5)=R(0);
  R(0)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  ST8(R(2)+1,R(0));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c06d54c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(6));
  { c->pr=0x8c06d556u; R(6)=R(15); f_8c06d4d0(c); }
  R(5)=R(0);
  R(0)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  ST8(R(2)+2,R(0));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c06d5a0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(6));
  { c->pr=0x8c06d5aau; R(6)=R(15); f_8c06d4d0(c); }
  R(5)=R(0);
  R(0)=LD32(R(15));
  R(2)=LD32(R(15)+4);
  ST8(R(2)+3,R(0));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c06d5ba(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(6)=R(14);
  ST8(R(14)+3,R(0));
  R(13)=R(4);
  { c->pr=0x8c06d5ceu; R(4)=R(13); f_8c06d518(c); }
  R(6)=R(14);
  R(5)=R(0);
  { c->pr=0x8c06d5d6u; R(4)=R(13); f_8c06d532(c); }
  R(6)=R(14);
  R(5)=R(0);
  { c->pr=0x8c06d5deu; R(4)=R(13); f_8c06d54c(c); }
  R(2)=0x27u;
  ST32(R(14)+12,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d5ea(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c06d5f6u; R(4)=LD32(R(15)); f_8c06d5ba(c); }
  R(6)=LD32(R(15)+4);
  R(5)=R(0);
  { c->pr=0x8c06d5feu; R(4)=LD32(R(15)); f_8c06d5a0(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06d606(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  R(1)=R(15);
  R(1)+=0x8u;
  ST32(R(1),R(4));
  R(4)=R(15);
  R(4)+=0x4u;
  ST32(R(4),R(5));
  R(0)=(int32_t)(int8_t)LD8(R(1)+1);
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(6)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(3)=R(3)&0xFF;
  R(0)=R(0)&0xFF;
  R(6)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(1)+2);
  R(5)=R(5)&0xFF;
  R(7)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(5)+=R(3);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(5)>=0;
  R(7)+=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(1)+3);
  R(3)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(1)=R(3);
  R(0)=R(0)&0xFF;
  R(1)+=R(0);
  R(0)=0x0u;
  { uint32_t k=c->t; R(4)=0x64u; if(k) goto L8c06d64a; }
  { R(5)=R(0); goto L8c06d650; }
L8c06d64a:;
  c->t=(int32_t)R(5)>(int32_t)R(4);
  if(!c->t) goto L8c06d650;
  R(5)=R(4);
L8c06d650:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c06d658;
  { R(6)=R(0); goto L8c06d65e; }
L8c06d658:;
  c->t=(int32_t)R(6)>(int32_t)R(4);
  if(!c->t) goto L8c06d65e;
  R(6)=R(4);
L8c06d65e:;
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c06d666;
  { R(7)=R(0); goto L8c06d66c; }
L8c06d666:;
  c->t=(int32_t)R(7)>(int32_t)R(4);
  if(!c->t) goto L8c06d66c;
  R(7)=R(4);
L8c06d66c:;
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c06d674;
  { R(1)=R(0); goto L8c06d67a; }
L8c06d674:;
  c->t=(int32_t)R(1)>(int32_t)R(4);
  if(!c->t) goto L8c06d67a;
  R(1)=R(4);
L8c06d67a:;
  R(0)=R(6);
  R(4)=R(15);
  ST8(R(4),R(5));
  ST8(R(4)+1,R(0));
  R(0)=R(7);
  ST8(R(4)+2,R(0));
  R(0)=R(1);
  ST8(R(4)+3,R(0));
  R(0)=LD32(R(4));
  { R(15)+=0xcu; return; }
}
void f_8c06d690(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(5);
  R(5)+=0xfffffff4u;
  R(5)=LD32(R(5));
  R(11)=R(15);
  R(11)+=0x8u;
  R(12)=R(4);
  R(9)=0x0u;
  R(0)=R(5);
  R(10)=0x27u;
  ST32(R(11),R(9));
  R(14)=R(6);
  R(4)=R(9);
  R(0)+=0xffffffb9u;
  R(1)=0xbu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c06d6c4;
  {  goto L8c06d858; }
L8c06d6c4:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c06d6d0u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c06d6d0u+R(0));  switch(tg){ case 0x8c06d6e6u: goto L8c06d6e6; case 0x8c06d6f4u: goto L8c06d6f4; case 0x8c06d702u: goto L8c06d702; case 0x8c06d722u: goto L8c06d722; case 0x8c06d754u: goto L8c06d754; case 0x8c06d786u: goto L8c06d786; case 0x8c06d7b8u: goto L8c06d7b8; case 0x8c06d812u: goto L8c06d812; case 0x8c06d822u: goto L8c06d822; case 0x8c06d834u: goto L8c06d834; case 0x8c06d846u: goto L8c06d846; default: sh4_bad_jump(c,0x8c06d6ccu,tg); return; } }
L8c06d6e6:;
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(14),R(9));
  { c->pr=0x8c06d6f0u; R(4)=R(12); f_8c06d5ea(c); }
  {  goto L8c06d870; }
L8c06d6f4:;
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(14),R(9));
  { c->pr=0x8c06d6feu; R(4)=R(12); f_8c06d5ba(c); }
  {  goto L8c06d870; }
L8c06d702:;
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(3); c->pr=0x8c06d70cu; R(4)=R(12); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06d71cu; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  { R(5)=LD32(R(14)); goto L8c06d806; }
L8c06d722:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d72cu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c06d73cu; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06d74c;
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(3)=c->fpul; goto L8c06d74e; }
L8c06d74c:;
  R(3)=LD32(R(14));
L8c06d74e:;
  ST8(R(11),R(3));
  { R(5)=LD32(R(11)); goto L8c06d806; }
L8c06d754:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d75eu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c06d76eu; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06d77e;
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(0)=c->fpul; goto L8c06d780; }
L8c06d77e:;
  R(0)=LD32(R(14));
L8c06d780:;
  ST8(R(11)+1,R(0));
  { R(5)=LD32(R(11)); goto L8c06d806; }
L8c06d786:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d790u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c06d7a0u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06d7b0;
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(0)=c->fpul; goto L8c06d7b2; }
L8c06d7b0:;
  R(0)=LD32(R(14));
L8c06d7b2:;
  ST8(R(11)+2,R(0));
  { R(5)=LD32(R(11)); goto L8c06d806; }
L8c06d7b8:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d7c2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(13)=R(0);
  R(5)=R(13);
  R(6)=R(14);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c06d7d2u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c06d800;
  fp_ld(c,3,R(14));
  fp_ftrc(c,3);
  { R(0)=c->fpul; goto L8c06d802; }
L8c06d800:;
  R(0)=LD32(R(14));
L8c06d802:;
  ST8(R(11)+3,R(0));
  R(5)=LD32(R(11));
L8c06d806:;
  { c->pr=0x8c06d80au; R(4)=LD32(R(15)+4); f_8c06d606(c); }
  ST32(R(14),R(0));
  ST32(R(14)+12,R(10));
  { R(0)=LD32(R(15)); goto L8c06d870; }
L8c06d812:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d81cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  { R(4)=(int32_t)(int8_t)LD8(R(14)); goto L8c06d856; }
L8c06d822:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d82cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  { R(4)=R(0); goto L8c06d856; }
L8c06d834:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d83eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  { R(4)=R(0); goto L8c06d856; }
L8c06d846:;
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)=R(14);
  { uint32_t tg=R(2); c->pr=0x8c06d850u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(4)=R(0);
L8c06d856:;
  R(4)=R(4)&0xFF;
L8c06d858:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c06d860;
  { R(4)=R(9); goto L8c06d868; }
L8c06d860:;
  R(5)=0x64u;
  c->t=(int32_t)R(4)>(int32_t)R(5);
  if(!c->t) goto L8c06d868;
  R(4)=R(5);
L8c06d868:;
  R(2)=0x6u;
  R(0)=R(13);
  ST32(R(14),R(4));
  ST32(R(14)+12,R(2));
L8c06d870:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d800(SH4Ctx *c) {
  R(0)=LD32(R(14));
  ST8(R(11)+3,R(0));
  R(5)=LD32(R(11));
  { c->pr=0x8c06d80au; R(4)=LD32(R(15)+4); f_8c06d606(c); }
  ST32(R(14),R(0));
  ST32(R(14)+12,R(10));
  { R(0)=LD32(R(15)); goto L8c06d870; }
L8c06d870:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d882(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(14)=0xffffffffu;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(13)=LD32(R(15)+8);
  R(6)+=0xcu;
  R(5)=LD32(R(15)+8);
  R(13)=LD32(R(13)+4);
  { uint32_t tg=R(13); c->pr=0x8c06d8a2u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(12)=LD32(R(15)+12);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c06d8b2u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=(R(12)&R(12))==0;
  R(5)=R(0);
  { uint32_t k=c->t; R(4)=LD32(R(15)+12); if(k) goto L8c06d8d6; }
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c06d8d6;
  R(3)=0x1fu;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c06d8d6;
  R(6)=0x1u;
  R(3)=LD32(R(12)+44);
  R(14)=R(6);
  R(14)=sh4_shad(R(14),R(4));
  c->t=(R(14)&R(3))==0;
  if(c->t) goto L8c06d8d4;
  { R(14)=R(6); goto L8c06d8d6; }
L8c06d8d4:;
  R(14)=0x0u;
L8c06d8d6:;
  R(2)=LD32(R(15)+4);
  R(0)=R(5);
  ST32(R(2),R(14));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d8ee(SH4Ctx *c) {
  R(3)=0x8c123bc4u;
  R(2)=0x8u;
  fp_ld(c,3,R(3));
  fp_st(c,3,R(6));
  ST32(R(6)+12,R(2));
  { R(0)=R(5); return; }
}
void f_8c06d920(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  ST32(R(15),R(5));
  R(10)=0x0u;
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(12)=LD32(R(15));
  R(6)+=0xcu;
  R(5)=LD32(R(15));
  R(11)=R(4);
  R(12)=LD32(R(12)+4);
  R(13)=R(10);
  { uint32_t tg=R(12); c->pr=0x8c06d948u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=R(15);
  R(12)=R(0);
  { c->pr=0x8c06d952u; R(4)+=0xcu; f_8c071ce0(c); }
  R(6)=R(15);
  R(2)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0xcu;
  R(14)=R(0);
  { uint32_t tg=R(2); c->pr=0x8c06d960u; R(4)=R(11); sh4_call(c,tg); }
  R(9)=LD32(R(15)+12);
  R(12)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0xcu;
  R(9)+=0xffffffffu;
  { uint32_t tg=R(3); c->pr=0x8c06d972u; R(4)=R(11); sh4_call(c,tg); }
  ST32(R(15),R(0));
  { R(11)=LD32(R(15)+12); goto L8c06d97e; }
L8c06d978:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c06d978;
L8c06d97e:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c06d978;
  R(12)=R(15);
  R(5)=R(14);
  R(2)=0x8c0685b4u;
  R(12)+=0x8u;
  R(6)=0x3u;
  R(5)+=0xffffffffu;
  { c->pr=0x8c06d994u; R(4)=R(12); f_8c0685b4(c); }
  R(0)=R(10);
  c->t=(int32_t)R(11)>0;
  ST8(R(12)+3,R(0));
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c06d9ca; }
L8c06d99e:;
  c->t=R(14)==R(9);
  if(c->t) goto L8c06d9c4;
  R(4)=R(14);
  R(3)=R(14);
  c->t=R(4)>>31;R(4)<<=1;
  R(2)=0x8c2d05dcu;
  R(4)+=R(3);
  R(3)=0x8c09d214u;
  R(4)<<=2;
  R(5)=R(12);
  R(6)=0x3u;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c06d9bau; R(4)+=R(2); f_8c09d214(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06d9c4;
  R(13)=R(14);
  { R(13)+=0x1u; goto L8c06d9ca; }
L8c06d9c4:;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(11);
  if(!c->t) goto L8c06d99e;
L8c06d9ca:;
  R(3)=LD32(R(15)+4);
  R(2)=0x6u;
  ST32(R(3),R(13));
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06d9e8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=R(5);
  R(11)=R(12);
  R(11)+=0xfffffff4u;
  ST32(R(15),R(6));
  R(11)=LD32(R(11));
  R(0)=R(11);
  c->t=(int32_t)R(0)==91;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c06da20; }
  c->t=(int32_t)R(0)==92;
  if(c->t) goto L8c06da20;
  c->t=(int32_t)R(0)==93;
  if(c->t) goto L8c06da20;
  c->t=(int32_t)R(0)==94;
  if(c->t) goto L8c06da20;
  c->t=(int32_t)R(0)==95;
  if(!c->t) goto L8c06da1c;
  {  goto L8c06dad4; }
L8c06da1c:;
  {  goto L8c06dad8; }
L8c06da20:;
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c06da2au; R(5)=R(12); sh4_call(c,tg); }
  R(12)=R(0);
  R(0)=R(11);
  R(10)=0x8c04dbc0u;
  c->t=(int32_t)R(0)==91;
  R(13)=LD32(R(15)+4);
  if(c->t) goto L8c06da46;
  c->t=(int32_t)R(0)==92;
  if(c->t) goto L8c06da80;
  c->t=(int32_t)R(0)==93;
  if(c->t) goto L8c06daa0;
  c->t=(int32_t)R(0)==94;
  if(c->t) goto L8c06daae;
  {  goto L8c06dad8; }
L8c06da46:;
  R(3)=0x8c04cb28u;
  { c->pr=0x8c06da4cu;  f_8c04cb28(c); }
  R(14)=R(0)&0xFF;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c06dad8;
  R(2)=0x8c04dfccu;
  { c->pr=0x8c06da58u; R(4)=R(13); f_8c04dfcc(c); }
  {  goto L8c06daa6; }
L8c06da80:;
  R(2)=0x8c04de00u;
  { c->pr=0x8c06da86u; R(4)=R(13); f_8c04de00(c); }
  R(3)=0x8c04cb80u;
  { c->pr=0x8c06da8cu; R(14)=R(0); f_8c04cb80(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06dad8;
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c06dad8;
  R(2)=0x8c05ed92u;
  { c->pr=0x8c06da9cu; R(4)=0x4u; f_8c05ed92(c); }
  {  goto L8c06dad8; }
L8c06daa0:;
  R(2)=0x8c04e180u;
  { c->pr=0x8c06daa6u; R(4)=R(13); f_8c04e180(c); }
L8c06daa6:;
  { uint32_t tg=R(10); c->pr=0x8c06daaau; R(14)=R(0); sh4_call(c,tg); }
  {  goto L8c06dad8; }
L8c06daae:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06dabc;
  R(3)=0x8c04dd80u;
  { c->pr=0x8c06dabau; R(4)=R(13); f_8c04dd80(c); }
  R(14)=R(0);
L8c06dabc:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(0)=R(13); if(k) goto L8c06dac8; }
  R(2)=0x8c0c7630u;
  R(3)=0x1u;
  ST32(R(2),R(3));
L8c06dac8:;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06dad8;
  { uint32_t tg=R(10); c->pr=0x8c06dad0u;  sh4_call(c,tg); }
  {  goto L8c06dad8; }
L8c06dad4:;
  R(3)=0x8c2d0f3cu;
  R(14)=LD32(R(3));
L8c06dad8:;
  R(2)=LD32(R(15));
  R(0)=R(12);
  ST32(R(2),R(14));
  R(2)=0x6u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06da80(SH4Ctx *c) {
  R(2)=0x8c04de00u;
  { c->pr=0x8c06da86u; R(4)=R(13); f_8c04de00(c); }
  R(3)=0x8c04cb80u;
  { c->pr=0x8c06da8cu; R(14)=R(0); f_8c04cb80(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06dad8;
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c06dad8;
  R(2)=0x8c05ed92u;
  { c->pr=0x8c06da9cu; R(4)=0x4u; f_8c05ed92(c); }
  {  goto L8c06dad8; }
L8c06dad8:;
  R(2)=LD32(R(15));
  R(0)=R(12);
  ST32(R(2),R(14));
  R(2)=0x6u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06daf4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06db08u; R(5)=R(3); sh4_call(c,tg); }
  R(3)=0x8c04dc30u;
  ST32(R(15),R(0));
  { c->pr=0x8c06db10u; R(4)=LD32(R(15)+8); f_8c04dc30(c); }
  R(2)=LD32(R(15)+4);
  R(4)=R(0);
  ST32(R(2),R(4));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06db26(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(6)=R(15);
  R(3)=LD32(R(15));
  R(6)+=0x8u;
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06db3au; R(5)=R(3); sh4_call(c,tg); }
  R(3)=0x8c04dca0u;
  ST32(R(15),R(0));
  { c->pr=0x8c06db42u; R(4)=LD32(R(15)+8); f_8c04dca0(c); }
  R(2)=LD32(R(15)+4);
  R(4)=R(0);
  ST32(R(2),R(4));
  R(2)=0x6u;
  R(3)=LD32(R(15)+4);
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15));
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06db58(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c04dd12u;
  ST32(R(15)+4,R(5));
  { c->pr=0x8c06db64u; ST32(R(15),R(6)); f_8c04dd12(c); }
  R(2)=LD32(R(15));
  R(4)=R(0);
  ST32(R(2),R(4));
  R(2)=0x6u;
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06db7a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(4)=LD32(R(15)+4);
  R(4)+=0xfffffff4u;
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=(int32_t)R(0)==101;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c06dbe0; }
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c06dbea;
  {  goto L8c06dbf6; }
L8c06dbe0:;
  R(3)=0x8c04c61cu;
  { c->pr=0x8c06dbe6u;  f_8c04c61c(c); }
  { R(14)=R(0); goto L8c06dbf6; }
L8c06dbea:;
  R(3)=0x8c04c3feu;
  { c->pr=0x8c06dbf0u;  f_8c04c3fe(c); }
  R(2)=0x8c04dbc0u;
  { c->pr=0x8c06dbf6u; R(14)=R(0); f_8c04dbc0(c); }
L8c06dbf6:;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(3),R(14));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06dbe0(SH4Ctx *c) {
  R(3)=0x8c04c61cu;
  { c->pr=0x8c06dbe6u;  f_8c04c61c(c); }
  { R(14)=R(0); goto L8c06dbf6; }
L8c06dbf6:;
  R(3)=LD32(R(15));
  R(2)=0x6u;
  ST32(R(3),R(14));
  R(3)=LD32(R(15));
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(15)+4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06dc0a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2d03b0u;
  { c->pr=0x8c06dc12u; R(4)=LD32(R(3)); f_8c06dc18(c); }
  R(1)=0x8c2d03b8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=LD32(R(1));
  { f_8c06dc18(c); return; }
}
void f_8c06dc18(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06dc4e;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06dc32;
  { R(14)=0x0u; goto L8c06dc34; }
L8c06dc32:;
  R(14)=LD32(R(4)+4);
L8c06dc34:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06dc70;
  R(4)=LD32(R(14)+12);
  R(5)=0x0u;
  R(4)=LD32(R(4));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c03342au;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c03342a(c); return; } }
L8c06dc4e:;
  R(3)=LD32(R(4)+8);
  R(12)=0x8c064a66u;
  R(14)=R(3);
  ST32(R(15),R(3));
  { c->pr=0x8c06dc5au; R(4)=R(3); f_8c064a66(c); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c06dc70; }
L8c06dc60:;
  { c->pr=0x8c06dc64u; R(4)=R(14); f_8c06dc18(c); }
  R(14)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c06dc6au; R(4)=R(13); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c06dc60; }
L8c06dc70:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06dca0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06dcb0u; R(6)+=0x4u; sh4_call(c,tg); }
  R(2)=0x8c0c76b8u;
  R(5)=R(0);
  R(3)=LD32(R(15)+4);
  ST8(R(2),R(3));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
}
void f_8c06dcc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  R(5)=R(14);
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  R(12)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c06dceau; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(6)=R(15);
  R(13)=LD32(R(14)+4);
  R(5)=R(14);
  R(10)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c06dcfau; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=R(15);
  R(13)=R(0);
  { c->pr=0x8c06dd04u; R(4)+=0x4u; f_8c071ce0(c); }
  R(6)=R(15);
  R(9)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x4u;
  R(14)=R(0);
  { uint32_t tg=R(9); c->pr=0x8c06dd12u; R(4)=R(12); sh4_call(c,tg); }
  c->t=(int32_t)R(10)>0;
  R(9)=R(0);
  { uint32_t k=c->t; R(8)=LD32(R(15)+4); if(k) goto L8c06dd1e; }
  {  goto L8c06de02; }
L8c06dd1e:;
  R(12)=R(10);
  R(12)+=0xffffffffu;
  R(3)=R(12);
  c->t=R(12)>>31;R(12)<<=1;
  R(12)+=R(3);
  R(13)=0x8c2d03d8u;
  R(12)<<=2;
  c->t=R(12)>>31;R(12)<<=1;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c06dd40; }
  R(1)=0x200u;
  R(0)=R(11);
  R(1)+=R(13);
  R(1)+=R(12);
  { ST8(R(1)+12,R(0)); goto L8c06de02; }
L8c06dd40:;
  R(1)=0x1bau;
  R(0)=LD32(R(15));
  c->t=R(0)==R(1);
  if(c->t) goto L8c06dd86;
  {  goto L8c06de02; }
L8c06dd80:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c06dd80;
L8c06dd86:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c06dd80;
  R(5)=0x200u;
  R(0)=R(11);
  R(3)=0x8c0685b4u;
  R(6)=0x8u;
  R(5)+=R(13);
  ST8(R(14)+2,R(0));
  R(5)+=R(12);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  R(4)=LD32(R(15));
  { c->pr=0x8c06dda4u; R(4)+=0xdu; f_8c0685b4(c); }
  c->fpul=R(8);
  R(0)=0x15u;
  R(2)=0x200u;
  R(3)=0x64u;
  c->t=(int32_t)R(8)>=(int32_t)R(3);
  R(4)=R(14);
  fp_float(c,3);
  R(2)+=R(13);
  R(2)+=R(12);
  ST8(R(2)+R(0),R(11));
  R(0)=0x8c06de28u;
  fp_ld(c,2,R(0));
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c06dddc; }
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=0x200u;
  R(1)=0x8c0bbb64u;
  R(4)+=R(13);
  R(2)=0x8c06874cu;
  R(4)+=R(12);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c06ddd8u; R(4)+=0x4u; f_8c06874c(c); }
  {  goto L8c06ddf0; }
L8c06dddc:;
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=0x200u;
  R(2)=0x8c0bbb70u;
  R(4)+=R(13);
  R(1)=0x8c06874cu;
  R(4)+=R(12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c06ddf0u; R(4)+=0x4u; f_8c06874c(c); }
L8c06ddf0:;
  R(15)+=0xcu;
  R(3)=0x200u;
  R(0)=R(11);
  R(3)+=R(13);
  R(3)+=R(12);
  ST8(R(3)+12,R(0));
  R(3)=0x8c04ccc0u;
  { c->pr=0x8c06de02u; R(4)=R(10); f_8c04ccc0(c); }
L8c06de02:;
  R(0)=R(9);
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
void f_8c06dd80(SH4Ctx *c) {
L8c06dd80:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==58;
  if(!c->t) goto L8c06dd80;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(0)=(uint32_t)v;}
  c->t=(int32_t)R(0)==47;
  if(c->t) goto L8c06dd80;
  R(5)=0x200u;
  R(0)=R(11);
  R(3)=0x8c0685b4u;
  R(6)=0x8u;
  R(5)+=R(13);
  ST8(R(14)+2,R(0));
  R(5)+=R(12);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  R(4)=LD32(R(15));
  { c->pr=0x8c06dda4u; R(4)+=0xdu; f_8c0685b4(c); }
  c->fpul=R(8);
  R(0)=0x15u;
  R(2)=0x200u;
  R(3)=0x64u;
  c->t=(int32_t)R(8)>=(int32_t)R(3);
  R(4)=R(14);
  fp_float(c,3);
  R(2)+=R(13);
  R(2)+=R(12);
  ST8(R(2)+R(0),R(11));
  R(0)=0x8c06de28u;
  fp_ld(c,2,R(0));
  fp_mov(c,4,3);
  fp_arith(c,3,4,2);
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c06dddc; }
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=0x200u;
  R(1)=0x8c0bbb64u;
  R(4)+=R(13);
  R(2)=0x8c06874cu;
  R(4)+=R(12);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c06ddd8u; R(4)+=0x4u; f_8c06874c(c); }
  {  goto L8c06ddf0; }
L8c06dddc:;
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=0x200u;
  R(2)=0x8c0bbb70u;
  R(4)+=R(13);
  R(1)=0x8c06874cu;
  R(4)+=R(12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c06ddf0u; R(4)+=0x4u; f_8c06874c(c); }
L8c06ddf0:;
  R(15)+=0xcu;
  R(3)=0x200u;
  R(0)=R(11);
  R(3)+=R(13);
  R(3)+=R(12);
  ST8(R(3)+12,R(0));
  R(3)=0x8c04ccc0u;
  { c->pr=0x8c06de02u; R(4)=R(10); f_8c04ccc0(c); }
  R(0)=R(9);
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
void f_8c06de40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x10u;
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06de5au; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(1)=0x1bbu;
  R(3)=LD32(R(15)+16);
  ST32(R(15)+12,R(3));
  R(0)=LD32(R(15));
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06de94;
  R(5)=LD32(R(15)+12);
  R(6)=0x8u;
  R(2)=0x8c0685b4u;
  R(5)+=0xffffffffu;
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(3)=0x8c2d05d8u;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  ST32(R(15)+8,R(5));
  R(5)+=R(3);
  ST32(R(15),R(5));
  R(5)+=0xdu;
  R(4)=LD32(R(15));
  { uint32_t tg=R(2); c->pr=0x8c06de8au; R(4)+=0x4u; sh4_call(c,tg); }
  R(2)=0x8c2d05d8u;
  R(0)=0x0u;
  R(3)=LD32(R(15)+8);
  R(2)+=R(3);
  ST8(R(2)+12,R(0));
L8c06de94:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06de9e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(13)=LD32(R(13)+4);
  { uint32_t tg=R(13); c->pr=0x8c06deb6u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(14)=LD32(R(15)+8);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06dec6u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0xau;
  R(5)=R(0);
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(4)=LD32(R(15)+8); if(k) goto L8c06ded2; }
  R(14)=0x9u;
L8c06ded2:;
  R(0)=0x8c2dd140u;
  R(14)<<=2;
  ST32(R(14)+R(0),R(4));
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06df20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(13)=LD32(R(13)+4);
  { uint32_t tg=R(13); c->pr=0x8c06df38u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(14)=LD32(R(15)+8);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06df48u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0xau;
  R(5)=R(0);
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  R(0)=0x8u;
  { uint32_t k=!c->t; fp_ld(c,4,R(0)+R(15)); if(k) goto L8c06df56; }
  R(14)=0x9u;
L8c06df56:;
  R(0)=0x8c2dd168u;
  R(14)<<=2;
  fp_st(c,4,R(0)+R(14));
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06df68(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffee0u;
  R(15)+=R(0);
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(6)=0x110u;
  R(14)=R(5);
  R(2)=LD32(R(3));
  R(5)=R(14);
  R(6)+=R(15);
  R(12)=R(4);
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06df8cu; R(4)=R(12); sh4_call(c,tg); }
  R(4)=0x110u;
  R(14)=R(0);
  R(13)=0x8c071ce0u;
  { c->pr=0x8c06df96u; R(4)+=R(15); f_8c071ce0(c); }
  R(6)=0x110u;
  R(5)=R(14);
  ST32(R(15),R(0));
  R(3)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c06dfa4u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=0x110u;
  R(14)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c06dfacu; R(4)+=R(15); sh4_call(c,tg); }
  R(6)=0x110u;
  R(5)=R(14);
  ST32(R(15)+8,R(0));
  R(3)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c06dfbau; R(4)=R(12); sh4_call(c,tg); }
  R(4)=0x110u;
  ST32(R(15)+4,R(0));
  { uint32_t tg=R(13); c->pr=0x8c06dfc2u; R(4)+=R(15); sh4_call(c,tg); }
  R(14)=R(0);
  R(1)=0x1b9u;
  R(0)=LD32(R(15)+12);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06dff6;
  R(3)=0x8c019e40u;
  { c->pr=0x8c06dfd2u; R(4)=R(14); f_8c019e40(c); }
  R(2)=0x8c09c4d4u;
  R(0)=R(15);
  R(1)=LD32(R(15));
  { c->pr=0x8c06dfdcu; R(0)+=0x10u; f_8c09c4d4(c); }
  R(3)=0x8c09d1a0u;
  R(4)=R(15);
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c06dfe6u; R(4)+=0x10u; f_8c09d1a0(c); }
  R(2)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0x10u;
  { c->pr=0x8c06dff0u; R(0)=R(14); f_8c09c4d4(c); }
  R(3)=0x8c019e40u;
  { c->pr=0x8c06dff6u; R(4)=R(14); f_8c019e40(c); }
L8c06dff6:;
  R(1)=0x120u;
  R(0)=LD32(R(15)+4);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e040(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(13)=R(5);
  R(6)=R(15);
  R(6)+=0xcu;
  R(5)=R(13);
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(13)+4);
  R(14)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c06e064u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0xcu;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c06e076u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c071ce0u;
  R(4)=R(15);
  R(13)=R(0);
  { c->pr=0x8c06e080u; R(4)+=0xcu; f_8c071ce0(c); }
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0xcu;
  R(12)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c06e08eu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0xcu;
  R(11)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c06e0a0u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(1)=0x1b8u;
  R(13)=R(0);
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06e0f0;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c06e0f0;
  R(2)=0x8c019e40u;
  R(14)=0x0u;
  { c->pr=0x8c06e0bau; R(4)=R(12); f_8c019e40(c); }
  { R(5)=R(0); goto L8c06e0c8; }
L8c06e0be:;
  R(0)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(int32_t)R(0)==58;
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c06e0be; }
L8c06e0c8:;
  R(0)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(12)+R(0));
  c->t=(int32_t)R(0)==47;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c06e0be; }
  R(0)=R(11)&0xFF;
  R(0)+=R(14);
  R(0)+=0xffffffffu;
  c->t=(int32_t)R(0)>(int32_t)R(5);
  if(!c->t) goto L8c06e0e0;
  R(0)=R(5);
  R(0)+=0xffffffffu;
L8c06e0e0:;
  R(3)=0x8c05801eu;
  R(6)=R(13);
  ST8(R(12)+R(0),R(13));
  R(5)=R(11);
  R(4)=LD32(R(15)+4);
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06e0f0u; R(4)=LD32(R(4)+12); f_8c05801e(c); }
L8c06e0f0:;
  R(0)=LD32(R(15));
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e120(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  c->fr[15]=0x3F800000u;
  { uint32_t tg=R(3); c->pr=0x8c06e13eu; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x4u;
  fp_ld(c,4,R(0)+R(15));
  R(1)=0x187u;
  R(0)=LD32(R(15));
  R(4)=0x8c2e7608u;
  c->t=R(0)==R(1);
  c->fr[6]=0x00000000u;
  c->fr[5]=0x3F800000u;
  { uint32_t k=c->t; fp_unary(c,0,5); if(k) goto L8c06e182; }
  R(1)=0x185u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e182;
  R(1)=0x188u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e186;
  R(1)=0x186u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e186;
  R(1)=0x18bu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e1c0;
  R(1)=0x189u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e1c2;
  R(1)=0x18cu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e1ee;
  R(1)=0x18au;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e1f0;
  {  goto L8c06e20e; }
L8c06e182:;
  { R(0)=0x8u; goto L8c06e188; }
L8c06e186:;
  R(0)=0xcu;
L8c06e188:;
  { fp_st(c,4,R(0)+R(4)); goto L8c06e20e; }
L8c06e1c0:;
  fp_mov(c,15,5);
L8c06e1c2:;
  R(0)=0x8u;
  fp_mov(c,0,15);
  fp_ld(c,3,R(0)+R(4));
  fp_fmac(c,3,4);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06e1e2;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,3,R(0)+R(4)); goto L8c06e20e; }
L8c06e1e2:;
  fp_ld(c,2,R(0)+R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06e20e;
  { fp_st(c,6,R(0)+R(4)); goto L8c06e20e; }
L8c06e1ee:;
  fp_mov(c,15,5);
L8c06e1f0:;
  R(0)=0xcu;
  fp_mov(c,0,15);
  fp_ld(c,3,R(0)+R(4));
  c->fr[2]=0x00000000u;
  fp_fmac(c,3,4);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(4)); if(k) goto L8c06e202; }
  fp_st(c,6,R(0)+R(4));
L8c06e202:;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c06e20e;
  fp_st(c,4,R(0)+R(4));
L8c06e20e:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e1c0(SH4Ctx *c) {
  fp_mov(c,15,5);
  R(0)=0x8u;
  fp_mov(c,0,15);
  fp_ld(c,3,R(0)+R(4));
  fp_fmac(c,3,4);
  fp_st(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06e1e2;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,3,R(0)+R(4)); goto L8c06e20e; }
L8c06e1e2:;
  fp_ld(c,2,R(0)+R(4));
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c06e20e;
  { fp_st(c,6,R(0)+R(4)); goto L8c06e20e; }
L8c06e20e:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e21a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06e234u; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(1)=0x17fu;
  R(7)=0x0u;
  ST8(R(15),R(0));
  R(0)=LD32(R(15)+4);
  R(6)=(int32_t)(int8_t)LD8(R(15));
  R(4)=0x8c2e7608u;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(6)=R(6)&0xFF; if(k) goto L8c06e278; }
  R(1)=0x17du;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e278;
  R(1)=0x180u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e27c;
  R(1)=0x17eu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e27c;
  R(1)=0x181u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e2a0;
  R(1)=0x183u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e2b4;
  R(1)=0x182u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e2c4;
  R(1)=0x184u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e2cc;
  {  goto L8c06e2da; }
L8c06e278:;
  { ST32(R(4),R(6)); goto L8c06e2da; }
L8c06e27c:;
  { ST32(R(4)+4,R(6)); goto L8c06e2da; }
L8c06e2a0:;
  R(3)=LD32(R(4));
  R(3)+=R(6);
  R(1)=R(3);
  ST32(R(4),R(3));
  R(2)=LD32(R(4)+4);
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c06e2da;
  R(0)=LD32(R(4)+4);
  { ST32(R(4),R(0)); goto L8c06e2da; }
L8c06e2b4:;
  R(2)=LD32(R(4));
  R(2)-=R(6);
  R(3)=R(2);
  c->t=(int32_t)R(3)>=0;
  ST32(R(4),R(2));
  if(c->t) goto L8c06e2da;
  { ST32(R(4),R(7)); goto L8c06e2da; }
L8c06e2c4:;
  R(2)=LD32(R(4)+4);
  R(2)+=R(6);
  { ST32(R(4)+4,R(2)); goto L8c06e2da; }
L8c06e2cc:;
  R(2)=LD32(R(4)+4);
  R(2)-=R(6);
  R(3)=R(2);
  c->t=(int32_t)R(3)>=0;
  ST32(R(4)+4,R(2));
  if(c->t) goto L8c06e2da;
  ST32(R(4)+4,R(7));
L8c06e2da:;
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e2a0(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(3)+=R(6);
  R(1)=R(3);
  ST32(R(4),R(3));
  R(2)=LD32(R(4)+4);
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c06e2da;
  R(0)=LD32(R(4)+4);
  { ST32(R(4),R(0)); goto L8c06e2da; }
L8c06e2da:;
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e2e4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(12)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(3)=0x18eu;
  R(4)=LD32(R(4));
  c->t=R(4)==R(3);
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c06e308; }
  {  goto L8c06e3f6; }
L8c06e308:;
  R(6)=R(15);
  R(1)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(1); c->pr=0x8c06e314u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=LD32(R(15)+4);
  R(14)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(13)=LD32(R(13)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  R(13)=LD32(R(13)+12);
  { uint32_t tg=R(3); c->pr=0x8c06e328u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x4u;
  ST8(R(15),R(0));
  R(9)=LD32(R(14)+4);
  { uint32_t tg=R(9); c->pr=0x8c06e33au; R(4)=R(12); sh4_call(c,tg); }
  R(14)=LD32(R(13)+4);
  R(9)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(14)=LD32(R(14)+28);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c06e3f2; }
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(11)=0x8c050940u;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06e37e;
  { uint32_t tg=R(11); c->pr=0x8c06e354u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x8c09488eu;
  { c->pr=0x8c06e35au; R(4)=R(0); f_8c09488e(c); }
  R(2)=R(12)&0xFF;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c06e36c; }
  R(2)=LD32(R(13)+48);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(13)+48,R(2)); goto L8c06e374; }
L8c06e36c:;
  R(1)=LD32(R(13)+48);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(13)+48,R(1));
L8c06e374:;
  R(3)=0x8c050baeu;
  { c->pr=0x8c06e37au; R(4)=R(14); f_8c050bae(c); }
  {  goto L8c06e3ea; }
L8c06e37e:;
  R(2)=0x8c055c22u;
  { c->pr=0x8c06e384u; R(4)=R(13); f_8c055c22(c); }
  R(3)=R(12)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)=R(0); if(k) goto L8c06e3c0; }
  R(2)=LD32(R(13)+48);
  R(3)=0x20000u;
  R(2)|=R(3);
  { ST32(R(13)+48,R(2)); goto L8c06e3c8; }
L8c06e3c0:;
  R(1)=LD32(R(13)+48);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(13)+48,R(1));
L8c06e3c8:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c06e3e2;
  { uint32_t tg=R(11); c->pr=0x8c06e3d0u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x8c09488eu;
  { c->pr=0x8c06e3d6u; R(4)=R(0); f_8c09488e(c); }
  { uint32_t tg=R(11); c->pr=0x8c06e3dau; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0948dau;
  R(5)=R(0);
  { c->pr=0x8c06e3e2u; R(4)=R(10); f_8c0948da(c); }
L8c06e3e2:;
  R(3)=0x8c050baeu;
  R(5)=0x0u;
  { c->pr=0x8c06e3eau; R(4)=R(14); f_8c050bae(c); }
L8c06e3ea:;
  R(2)=0x8c050bb6u;
  R(5)=R(12);
  { c->pr=0x8c06e3f2u; R(4)=R(14); f_8c050bb6(c); }
L8c06e3f2:;
  { R(0)=R(9); goto L8c06e3f8; }
L8c06e3f6:;
  R(0)=R(14);
L8c06e3f8:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e3c0(SH4Ctx *c) {
  R(1)=LD32(R(13)+48);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(13)+48,R(1));
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c06e3e2;
  { uint32_t tg=R(11); c->pr=0x8c06e3d0u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x8c09488eu;
  { c->pr=0x8c06e3d6u; R(4)=R(0); f_8c09488e(c); }
  { uint32_t tg=R(11); c->pr=0x8c06e3dau; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0948dau;
  R(5)=R(0);
  { c->pr=0x8c06e3e2u; R(4)=R(10); f_8c0948da(c); }
L8c06e3e2:;
  R(3)=0x8c050baeu;
  R(5)=0x0u;
  { c->pr=0x8c06e3eau; R(4)=R(14); f_8c050bae(c); }
  R(2)=0x8c050bb6u;
  R(5)=R(12);
  { c->pr=0x8c06e3f2u; R(4)=R(14); f_8c050bb6(c); }
  { R(0)=R(9); goto L8c06e3f8; }
L8c06e3f8:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e40a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(11)=R(5);
  R(11)+=0xfffffff4u;
  R(11)=LD32(R(11));
  R(14)=R(5);
  R(3)=0x192u;
  R(13)=R(4);
  c->t=R(11)==R(3);
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c06e43a; }
  R(6)=R(15);
  R(1)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x18u;
  { uint32_t tg=R(1); c->pr=0x8c06e436u; R(4)=R(13); sh4_call(c,tg); }
  R(12)=LD32(R(15)+24);
  R(14)=R(0);
L8c06e43a:;
  R(1)=0x18fu;
  R(0)=R(11);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e480;
  R(1)=0x190u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e4a2;
  R(1)=0x191u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e4d2;
  R(1)=0x192u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06e458;
  {  goto L8c06e538; }
L8c06e458:;
  {  goto L8c06e538; }
L8c06e480:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c06e48cu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x18u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(15),R(3));
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(3)=0x8c07ae8cu;
  R(5)=R(5)&0xFF;
  { c->pr=0x8c06e49eu; R(4)=R(12); f_8c07ae8c(c); }
  { R(0)=LD32(R(15)+4); goto L8c06e53a; }
L8c06e4a2:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c06e4aeu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x18u;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(14);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c06e4c0u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x18u;
  R(3)=0x8c07af24u;
  fp_ld(c,5,R(0)+R(15));
  fp_mov(c,4,15);
  { c->pr=0x8c06e4ceu; R(4)=R(12); f_8c07af24(c); }
  {  goto L8c06e534; }
L8c06e4d2:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c06e4deu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x8u;
  R(5)=R(14);
  R(6)+=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06e4f4u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0xcu;
  R(5)=R(14);
  R(6)+=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06e50au; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x10u;
  R(5)=R(14);
  R(6)+=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06e520u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c07ae96u;
  R(0)=0x14u;
  R(5)+=0x8u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c06e534u; R(4)=R(12); f_8c07ae96(c); }
L8c06e534:;
  { R(0)=LD32(R(15)); goto L8c06e53a; }
L8c06e538:;
  R(0)=R(14);
L8c06e53a:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e480(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c06e48cu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x18u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(15),R(3));
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(3)=0x8c07ae8cu;
  R(5)=R(5)&0xFF;
  { c->pr=0x8c06e49eu; R(4)=R(12); f_8c07ae8c(c); }
  { R(0)=LD32(R(15)+4); goto L8c06e53a; }
L8c06e53a:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e54a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(11)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06e572;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c06e574; }
L8c06e572:;
  ST32(R(15),R(11));
L8c06e574:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(2)=LD32(R(14)+4); if(k) goto L8c06e5c0; }
  { R(12)=0x0u; goto L8c06e5c4; }
L8c06e5c0:;
  R(12)=LD32(R(15));
  R(12)=LD32(R(12)+4);
L8c06e5c4:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c06e5ceu; R(4)=R(11); sh4_call(c,tg); }
  R(14)=R(0);
  R(1)=0x197u;
  R(0)=LD32(R(15)+4);
  R(13)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e5f0;
  R(1)=0x198u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e5fc;
  R(1)=0x199u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e608;
  R(1)=0x19au;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e640;
  {  goto L8c06e65c; }
L8c06e5f0:;
  R(3)=0x8c0a1740u;
  R(5)=R(13);
  { c->pr=0x8c06e5f8u; R(4)=R(12); f_8c0a1740(c); }
  {  goto L8c06e65c; }
L8c06e5fc:;
  R(3)=0x8c0a174cu;
  R(5)=R(13);
  { c->pr=0x8c06e604u; R(4)=R(12); f_8c0a174c(c); }
  {  goto L8c06e65c; }
L8c06e608:;
  R(3)=0x8c0a1756u;
  R(5)=R(13);
  { c->pr=0x8c06e610u; R(4)=R(12); f_8c0a1756(c); }
  {  goto L8c06e65c; }
L8c06e640:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06e64cu; R(4)=R(11); sh4_call(c,tg); }
  R(3)=0x8c0a1764u;
  R(5)=R(13);
  ST32(R(15)+4,R(0));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c06e658u; R(4)=R(12); f_8c0a1764(c); }
  { R(0)=LD32(R(15)+4); goto L8c06e65e; }
L8c06e65c:;
  R(0)=R(14);
L8c06e65e:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e5c0(SH4Ctx *c) {
  R(12)=LD32(R(15));
  R(12)=LD32(R(12)+4);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c06e5ceu; R(4)=R(11); sh4_call(c,tg); }
  R(14)=R(0);
  R(1)=0x197u;
  R(0)=LD32(R(15)+4);
  R(13)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e5f0;
  R(1)=0x198u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e5fc;
  R(1)=0x199u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e608;
  R(1)=0x19au;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e640;
  {  goto L8c06e65c; }
L8c06e5f0:;
  R(3)=0x8c0a1740u;
  R(5)=R(13);
  { c->pr=0x8c06e5f8u; R(4)=R(12); f_8c0a1740(c); }
  {  goto L8c06e65c; }
L8c06e5fc:;
  R(3)=0x8c0a174cu;
  R(5)=R(13);
  { c->pr=0x8c06e604u; R(4)=R(12); f_8c0a174c(c); }
  {  goto L8c06e65c; }
L8c06e608:;
  R(3)=0x8c0a1756u;
  R(5)=R(13);
  { c->pr=0x8c06e610u; R(4)=R(12); f_8c0a1756(c); }
  {  goto L8c06e65c; }
L8c06e640:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06e64cu; R(4)=R(11); sh4_call(c,tg); }
  R(3)=0x8c0a1764u;
  R(5)=R(13);
  ST32(R(15)+4,R(0));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c06e658u; R(4)=R(12); f_8c0a1764(c); }
  { R(0)=LD32(R(15)+4); goto L8c06e65e; }
L8c06e65c:;
  R(0)=R(14);
L8c06e65e:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e640(SH4Ctx *c) {
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06e64cu; R(4)=R(11); sh4_call(c,tg); }
  R(3)=0x8c0a1764u;
  R(5)=R(13);
  ST32(R(15)+4,R(0));
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c06e658u; R(4)=R(12); f_8c0a1764(c); }
  { R(0)=LD32(R(15)+4); goto L8c06e65e; }
L8c06e65e:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e66c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c06e67cu; R(6)+=0x4u; sh4_call(c,tg); }
  R(3)=0x8c070cd4u;
  ST32(R(15),R(0));
  { c->pr=0x8c06e684u; R(4)=LD32(R(15)+4); f_8c070cd4(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06e6c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(10)=R(5);
  R(10)+=0xfffffff4u;
  R(14)=R(5);
  R(3)=LD32(R(14)+4);
  R(10)=LD32(R(10));
  R(6)=R(15);
  R(13)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c06e6e6u; R(6)+=0x8u; sh4_call(c,tg); }
  R(3)=0x19cu;
  R(14)=R(0);
  R(11)=0x8c05a3fau;
  R(0)=0x8c06e784u;
  R(12)=LD32(R(15)+8);
  c->t=R(10)==R(3);
  { uint32_t k=!c->t; fp_ld(c,13,R(0)); if(k) goto L8c06e734; }
  R(6)=R(15);
  R(1)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(1); c->pr=0x8c06e702u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x8u;
  fp_ld(c,14,R(0)+R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  fp_arith(c,3,14,13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06e716u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x8u;
  fp_ld(c,15,R(0)+R(15));
  fp_arith(c,3,15,13);
  { uint32_t tg=R(11); c->pr=0x8c06e722u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c011d40u;
  R(6)=0x1u;
  fp_mov(c,4,14);
  R(4)=R(0);
  R(5)=0x0u;
  { c->pr=0x8c06e730u; fp_mov(c,5,15); f_8c011d40(c); }
  {  goto L8c06e816; }
L8c06e734:;
  R(2)=0x19du;
  c->t=R(10)==R(2);
  if(!c->t) goto L8c06e7a0;
  R(6)=R(15);
  R(0)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(0); c->pr=0x8c06e746u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(0);
  R(5)=R(5)&0xFF;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c06e758u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c011d9eu;
  R(4)=R(0);
  { c->pr=0x8c06e760u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c011d9e(c); }
  {  goto L8c06e816; }
L8c06e7a0:;
  R(1)=0x19eu;
  c->t=R(10)==R(1);
  if(!c->t) goto L8c06e7e4;
  R(6)=R(15);
  R(0)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(0); c->pr=0x8c06e7b2u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x8u;
  fp_ld(c,14,R(0)+R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  fp_arith(c,3,14,13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06e7c6u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x8u;
  fp_ld(c,15,R(0)+R(15));
  fp_arith(c,3,15,13);
  { uint32_t tg=R(11); c->pr=0x8c06e7d2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c011d68u;
  R(6)=0x2u;
  fp_mov(c,4,14);
  R(4)=R(0);
  R(5)=0x0u;
  { c->pr=0x8c06e7e0u; fp_mov(c,5,15); f_8c011d68(c); }
  {  goto L8c06e816; }
L8c06e7e4:;
  R(3)=0x19fu;
  c->t=R(10)==R(3);
  if(!c->t) goto L8c06e840;
  R(6)=R(15);
  R(0)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(0); c->pr=0x8c06e7f6u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06e806;
  { R(5)=0x3u; goto L8c06e808; }
L8c06e806:;
  R(5)=0x1u;
L8c06e808:;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c06e80eu; R(4)=R(12); sh4_call(c,tg); }
  R(2)=0x8c011d9eu;
  R(4)=R(0);
  { c->pr=0x8c06e816u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c011d9e(c); }
L8c06e816:;
  { R(0)=LD32(R(15)); goto L8c06e84a; }
L8c06e840:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06e848u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
L8c06e84a:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e7a0(SH4Ctx *c) {
  R(1)=0x19eu;
  c->t=R(10)==R(1);
  if(!c->t) goto L8c06e7e4;
  R(6)=R(15);
  R(0)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(0); c->pr=0x8c06e7b2u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x8u;
  fp_ld(c,14,R(0)+R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  fp_arith(c,3,14,13);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06e7c6u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x8u;
  fp_ld(c,15,R(0)+R(15));
  fp_arith(c,3,15,13);
  { uint32_t tg=R(11); c->pr=0x8c06e7d2u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c011d68u;
  R(6)=0x2u;
  fp_mov(c,4,14);
  R(4)=R(0);
  R(5)=0x0u;
  { c->pr=0x8c06e7e0u; fp_mov(c,5,15); f_8c011d68(c); }
  {  goto L8c06e816; }
L8c06e7e4:;
  R(3)=0x19fu;
  c->t=R(10)==R(3);
  if(!c->t) goto L8c06e840;
  R(6)=R(15);
  R(0)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x8u;
  { uint32_t tg=R(0); c->pr=0x8c06e7f6u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06e806;
  { R(5)=0x3u; goto L8c06e808; }
L8c06e806:;
  R(5)=0x1u;
L8c06e808:;
  {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c06e80eu; R(4)=R(12); sh4_call(c,tg); }
  R(2)=0x8c011d9eu;
  R(4)=R(0);
  { c->pr=0x8c06e816u; {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;} f_8c011d9e(c); }
L8c06e816:;
  { R(0)=LD32(R(15)); goto L8c06e84a; }
L8c06e840:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06e848u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
L8c06e84a:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e840(SH4Ctx *c) {
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06e848u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e860(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(7)=0x8c0c76fcu;
  R(6)=R(5);
  R(14)=R(5);
  R(6)+=0xfffffff4u;
  R(5)=LD32(R(7));
  R(12)=0x0u;
  R(6)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(13)=R(12); if(k) goto L8c06e884; }
  ST32(R(15),R(5));
  { ST32(R(7),R(12)); goto L8c06e886; }
L8c06e884:;
  ST32(R(15),R(4));
L8c06e886:;
  R(3)=LD32(R(15));
  R(0)=R(6);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(2)+28);
  ST32(R(15)+4,R(1));
  R(1)=0x193u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e8b8;
  R(1)=0x194u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e8a6;
  R(1)=0x195u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e8e2;
  {  goto L8c06e8e2; }
L8c06e8a6:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(6)+=0x8u;
  { uint32_t tg=R(2); c->pr=0x8c06e8b0u; R(5)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(15)+8);
  R(14)=R(0);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c06e8e0;
L8c06e8b8:;
  { R(13)=0x14u; goto L8c06e8e2; }
L8c06e8e0:;
  R(13)=R(12);
L8c06e8e2:;
  R(3)=0x8c051050u;
  R(5)=R(13);
  { c->pr=0x8c06e8eau; R(4)=LD32(R(15)+4); f_8c051050(c); }
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e8e0(SH4Ctx *c) {
  R(13)=R(12);
  R(3)=0x8c051050u;
  R(5)=R(13);
  { c->pr=0x8c06e8eau; R(4)=LD32(R(15)+4); f_8c051050(c); }
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e8f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(7)=0x8c0c76fcu;
  R(6)=R(5);
  R(14)=R(5);
  R(6)+=0xfffffff4u;
  R(5)=LD32(R(7));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)); if(k) goto L8c06e916; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(7),R(3)); goto L8c06e918; }
L8c06e916:;
  ST32(R(15),R(4));
L8c06e918:;
  R(1)=0x1a0u;
  R(0)=R(6);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e92a;
  R(1)=0x1a1u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06e992;
  {  goto L8c06e99e; }
L8c06e92a:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x10u;
  { uint32_t tg=R(3); c->pr=0x8c06e934u; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  R(3)=0xffff8000u;
  ST16(R(15)+12,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  c->t=R(0)==R(3);
  { uint32_t k=!c->t; ST32(R(15)+8,R(0)); if(k) goto L8c06e980; }
  { R(5)=0xffffffffu; goto L8c06e982; }
L8c06e980:;
  R(5)=R(0);
L8c06e982:;
  R(3)=0x8c054f34u;
  { c->pr=0x8c06e988u; R(4)=LD32(R(15)); f_8c054f34(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c06e992:;
  R(3)=0x8c054f34u;
  R(5)=0xffff8000u;
  { c->pr=0x8c06e99au; R(4)=LD32(R(15)); f_8c054f34(c); }
  {  goto L8c06e9a6; }
L8c06e99e:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06e9a6u; R(4)=0x27u; f_8c074080(c); }
L8c06e9a6:;
  R(0)=R(14);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e980(SH4Ctx *c) {
  R(5)=R(0);
  R(3)=0x8c054f34u;
  { c->pr=0x8c06e988u; R(4)=LD32(R(15)); f_8c054f34(c); }
  R(0)=LD32(R(15)+4);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e992(SH4Ctx *c) {
  R(3)=0x8c054f34u;
  R(5)=0xffff8000u;
  { c->pr=0x8c06e99au; R(4)=LD32(R(15)); f_8c054f34(c); }
  {  goto L8c06e9a6; }
L8c06e9a6:;
  R(0)=R(14);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06e9b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(6)=0x8c0c76fcu;
  R(13)=R(4);
  R(4)=R(5);
  R(14)=R(5);
  R(5)=LD32(R(6));
  R(4)+=0xfffffff4u;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)=LD32(R(4)); if(k) goto L8c06ea00; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06ea02; }
L8c06ea00:;
  ST32(R(15),R(13));
L8c06ea02:;
  R(0)=0x8c06ea8cu;
  R(1)=0x1a6u;
  fp_ld(c,15,R(0));
  R(0)=R(4);
  R(11)=0x8c123b08u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06ea2e;
  R(1)=0x1a4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06eac0;
  R(1)=0x1a5u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06ea20;
  {  goto L8c06ebe0; }
L8c06ea20:;
  R(1)=0x1a8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06ea2a;
  {  goto L8c06ec84; }
L8c06ea2a:;
  {  goto L8c06ece0; }
L8c06ea2e:;
  R(3)=0x8c0646f4u;
  { c->pr=0x8c06ea34u; R(4)=LD32(R(15)); f_8c0646f4(c); }
  R(0)=0x1e8u;
  R(3)=0x8c055c1au;
  R(4)=LD32(R(11)+R(0));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06ea40u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=LD32(R(15));
  R(5)=R(0);
  R(3)=0x8c055c1eu;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06ea4cu; R(4)=LD32(R(4)+32); f_8c055c1e(c); }
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06ea56u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(3)=0x8c055ae2u;
  R(4)=R(0);
  { c->pr=0x8c06ea5eu; R(5)=LD32(R(15)); f_8c055ae2(c); }
  {  goto L8c06ece8; }
L8c06eac0:;
  R(10)=LD32(R(15));
  R(3)=0x8c0646c8u;
  R(10)=LD32(R(10)+4);
  R(10)=LD32(R(10)+8);
  { c->pr=0x8c06eaccu; R(4)=LD32(R(15)); f_8c0646c8(c); }
  R(3)=0x8c055beau;
  { c->pr=0x8c06ead2u; R(4)=LD32(R(15)); f_8c055bea(c); }
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(12)+36);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c06eae2u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+28);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06eaf4u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+28);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06eb06u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=0x8c06ebacu;
  R(3)=LD32(R(15)+12);
  R(5)=R(15);
  R(4)=LD32(R(15)+28);
  R(5)+=0x10u;
  c->fpul=R(3);
  R(3)=LD32(R(15)+4);
  fp_ld(c,6,R(0));
  fp_float(c,3);
  c->fpul=R(3);
  fp_mov(c,2,6);
  R(3)=0x8c036f00u;
  fp_mov(c,4,3);
  fp_float(c,3);
  c->fpul=R(4);
  fp_arith(c,3,4,6);
  R(4)=0x14cu;
  fp_mov(c,5,3);
  fp_float(c,3);
  fp_arith(c,3,5,6);
  fp_mov(c,6,3);
  fp_arith(c,3,6,2);
  { uint32_t tg=R(3); c->pr=0x8c06eb38u; R(4)+=R(11); sh4_call(c,tg); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c06eb42u; R(4)=R(12); f_8c01638a(c); }
  R(0)=0x150u;
  R(3)=0x4u;
  ST32(R(12),R(3));
  R(2)=LD32(R(11)+R(0));
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06eb5a; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06eb5a:;
  fp_arith(c,3,3,15);
  R(0)=0x28u;
  c->t=(R(10)&R(10))==0;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x50u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(12)); if(k) goto L8c06eb7a; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06eb6eu; R(4)=R(10); f_8c04a8b8(c); }
  R(3)=0x8c0900acu;
  R(6)=R(15);
  R(4)=R(0);
  R(6)+=0x10u;
  { c->pr=0x8c06eb7au; R(5)=LD32(R(15)); f_8c0900ac(c); }
L8c06eb7a:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c06eb80u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  { R(0)=LD32(R(15)+8); goto L8c06ecea; }
L8c06ebe0:;
  R(10)=LD32(R(15));
  R(3)=0x8c0646c8u;
  R(10)=LD32(R(10)+4);
  R(10)=LD32(R(10)+8);
  { c->pr=0x8c06ebecu; R(4)=LD32(R(15)); f_8c0646c8(c); }
  R(3)=0x8c055beau;
  { c->pr=0x8c06ebf2u; R(4)=LD32(R(15)); f_8c055bea(c); }
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(12)+36);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c06ec02u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x10u;
  R(5)=R(14);
  R(6)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ec18u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x14u;
  R(5)=R(14);
  R(6)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ec2eu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c01638au;
  R(0)=0x18u;
  R(5)+=0x10u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c06ec42u; R(4)=R(12); f_8c01638a(c); }
  R(0)=0x150u;
  R(2)=0x4u;
  ST32(R(12),R(2));
  R(3)=LD32(R(11)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06ec5a; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06ec5a:;
  fp_arith(c,3,3,15);
  R(0)=0x28u;
  c->t=(R(10)&R(10))==0;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x50u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(12)); if(k) goto L8c06ec7a; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06ec6eu; R(4)=R(10); f_8c04a8b8(c); }
  R(3)=0x8c0900acu;
  R(6)=R(15);
  R(4)=R(0);
  R(6)+=0x10u;
  { c->pr=0x8c06ec7au; R(5)=LD32(R(15)); f_8c0900ac(c); }
L8c06ec7a:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c06ec80u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  {  goto L8c06ec98; }
L8c06ec84:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c06ec90u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c06475cu;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c06ec98u; R(4)=LD32(R(15)+28); f_8c06475c(c); }
L8c06ec98:;
  { R(0)=LD32(R(15)+4); goto L8c06ecea; }
L8c06ece0:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06ece8u; R(4)=0x27u; f_8c074080(c); }
L8c06ece8:;
  R(0)=R(14);
L8c06ecea:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ea00(SH4Ctx *c) {
  ST32(R(15),R(13));
  R(0)=0x8c06ea8cu;
  R(1)=0x1a6u;
  fp_ld(c,15,R(0));
  R(0)=R(4);
  R(11)=0x8c123b08u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06ea2e;
  R(1)=0x1a4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06eac0;
  R(1)=0x1a5u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06ea20;
  {  goto L8c06ebe0; }
L8c06ea20:;
  R(1)=0x1a8u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06ea2a;
  {  goto L8c06ec84; }
L8c06ea2a:;
  {  goto L8c06ece0; }
L8c06ea2e:;
  R(3)=0x8c0646f4u;
  { c->pr=0x8c06ea34u; R(4)=LD32(R(15)); f_8c0646f4(c); }
  R(0)=0x1e8u;
  R(3)=0x8c055c1au;
  R(4)=LD32(R(11)+R(0));
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06ea40u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(4)=LD32(R(15));
  R(5)=R(0);
  R(3)=0x8c055c1eu;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06ea4cu; R(4)=LD32(R(4)+32); f_8c055c1e(c); }
  R(4)=LD32(R(15));
  R(3)=0x8c055c1au;
  R(4)=LD32(R(4)+4);
  { c->pr=0x8c06ea56u; R(4)=LD32(R(4)+32); f_8c055c1a(c); }
  R(3)=0x8c055ae2u;
  R(4)=R(0);
  { c->pr=0x8c06ea5eu; R(5)=LD32(R(15)); f_8c055ae2(c); }
  {  goto L8c06ece8; }
L8c06eac0:;
  R(10)=LD32(R(15));
  R(3)=0x8c0646c8u;
  R(10)=LD32(R(10)+4);
  R(10)=LD32(R(10)+8);
  { c->pr=0x8c06eaccu; R(4)=LD32(R(15)); f_8c0646c8(c); }
  R(3)=0x8c055beau;
  { c->pr=0x8c06ead2u; R(4)=LD32(R(15)); f_8c055bea(c); }
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(12)+36);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c06eae2u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+28);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06eaf4u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+28);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06eb06u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=0x8c06ebacu;
  R(3)=LD32(R(15)+12);
  R(5)=R(15);
  R(4)=LD32(R(15)+28);
  R(5)+=0x10u;
  c->fpul=R(3);
  R(3)=LD32(R(15)+4);
  fp_ld(c,6,R(0));
  fp_float(c,3);
  c->fpul=R(3);
  fp_mov(c,2,6);
  R(3)=0x8c036f00u;
  fp_mov(c,4,3);
  fp_float(c,3);
  c->fpul=R(4);
  fp_arith(c,3,4,6);
  R(4)=0x14cu;
  fp_mov(c,5,3);
  fp_float(c,3);
  fp_arith(c,3,5,6);
  fp_mov(c,6,3);
  fp_arith(c,3,6,2);
  { uint32_t tg=R(3); c->pr=0x8c06eb38u; R(4)+=R(11); sh4_call(c,tg); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c06eb42u; R(4)=R(12); f_8c01638a(c); }
  R(0)=0x150u;
  R(3)=0x4u;
  ST32(R(12),R(3));
  R(2)=LD32(R(11)+R(0));
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06eb5a; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06eb5a:;
  fp_arith(c,3,3,15);
  R(0)=0x28u;
  c->t=(R(10)&R(10))==0;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x50u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(12)); if(k) goto L8c06eb7a; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06eb6eu; R(4)=R(10); f_8c04a8b8(c); }
  R(3)=0x8c0900acu;
  R(6)=R(15);
  R(4)=R(0);
  R(6)+=0x10u;
  { c->pr=0x8c06eb7au; R(5)=LD32(R(15)); f_8c0900ac(c); }
L8c06eb7a:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c06eb80u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  { R(0)=LD32(R(15)+8); goto L8c06ecea; }
L8c06ebe0:;
  R(10)=LD32(R(15));
  R(3)=0x8c0646c8u;
  R(10)=LD32(R(10)+4);
  R(10)=LD32(R(10)+8);
  { c->pr=0x8c06ebecu; R(4)=LD32(R(15)); f_8c0646c8(c); }
  R(3)=0x8c055beau;
  { c->pr=0x8c06ebf2u; R(4)=LD32(R(15)); f_8c055bea(c); }
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(12)+36);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c06ec02u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x10u;
  R(5)=R(14);
  R(6)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ec18u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x14u;
  R(5)=R(14);
  R(6)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ec2eu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c01638au;
  R(0)=0x18u;
  R(5)+=0x10u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c06ec42u; R(4)=R(12); f_8c01638a(c); }
  R(0)=0x150u;
  R(2)=0x4u;
  ST32(R(12),R(2));
  R(3)=LD32(R(11)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06ec5a; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06ec5a:;
  fp_arith(c,3,3,15);
  R(0)=0x28u;
  c->t=(R(10)&R(10))==0;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x50u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(12)); if(k) goto L8c06ec7a; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06ec6eu; R(4)=R(10); f_8c04a8b8(c); }
  R(3)=0x8c0900acu;
  R(6)=R(15);
  R(4)=R(0);
  R(6)+=0x10u;
  { c->pr=0x8c06ec7au; R(5)=LD32(R(15)); f_8c0900ac(c); }
L8c06ec7a:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c06ec80u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  {  goto L8c06ec98; }
L8c06ec84:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c06ec90u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c06475cu;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c06ec98u; R(4)=LD32(R(15)+28); f_8c06475c(c); }
L8c06ec98:;
  { R(0)=LD32(R(15)+4); goto L8c06ecea; }
L8c06ece0:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06ece8u; R(4)=0x27u; f_8c074080(c); }
L8c06ece8:;
  R(0)=R(14);
L8c06ecea:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06eac0(SH4Ctx *c) {
  R(10)=LD32(R(15));
  R(3)=0x8c0646c8u;
  R(10)=LD32(R(10)+4);
  R(10)=LD32(R(10)+8);
  { c->pr=0x8c06eaccu; R(4)=LD32(R(15)); f_8c0646c8(c); }
  R(3)=0x8c055beau;
  { c->pr=0x8c06ead2u; R(4)=LD32(R(15)); f_8c055bea(c); }
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(12)+36);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c06eae2u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+28);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06eaf4u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+28);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06eb06u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=0x8c06ebacu;
  R(3)=LD32(R(15)+12);
  R(5)=R(15);
  R(4)=LD32(R(15)+28);
  R(5)+=0x10u;
  c->fpul=R(3);
  R(3)=LD32(R(15)+4);
  fp_ld(c,6,R(0));
  fp_float(c,3);
  c->fpul=R(3);
  fp_mov(c,2,6);
  R(3)=0x8c036f00u;
  fp_mov(c,4,3);
  fp_float(c,3);
  c->fpul=R(4);
  fp_arith(c,3,4,6);
  R(4)=0x14cu;
  fp_mov(c,5,3);
  fp_float(c,3);
  fp_arith(c,3,5,6);
  fp_mov(c,6,3);
  fp_arith(c,3,6,2);
  { uint32_t tg=R(3); c->pr=0x8c06eb38u; R(4)+=R(11); sh4_call(c,tg); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c06eb42u; R(4)=R(12); f_8c01638a(c); }
  R(0)=0x150u;
  R(3)=0x4u;
  ST32(R(12),R(3));
  R(2)=LD32(R(11)+R(0));
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06eb5a; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06eb5a:;
  fp_arith(c,3,3,15);
  R(0)=0x28u;
  c->t=(R(10)&R(10))==0;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x50u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(12)); if(k) goto L8c06eb7a; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06eb6eu; R(4)=R(10); f_8c04a8b8(c); }
  R(3)=0x8c0900acu;
  R(6)=R(15);
  R(4)=R(0);
  R(6)+=0x10u;
  { c->pr=0x8c06eb7au; R(5)=LD32(R(15)); f_8c0900ac(c); }
L8c06eb7a:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c06eb80u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  { R(0)=LD32(R(15)+8); goto L8c06ecea; }
L8c06ecea:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ebe0(SH4Ctx *c) {
  R(10)=LD32(R(15));
  R(3)=0x8c0646c8u;
  R(10)=LD32(R(10)+4);
  R(10)=LD32(R(10)+8);
  { c->pr=0x8c06ebecu; R(4)=LD32(R(15)); f_8c0646c8(c); }
  R(3)=0x8c055beau;
  { c->pr=0x8c06ebf2u; R(4)=LD32(R(15)); f_8c055bea(c); }
  R(12)=LD32(R(15));
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(12)=LD32(R(12)+36);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c06ec02u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x10u;
  R(5)=R(14);
  R(6)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ec18u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(6)=R(15);
  R(0)=0x14u;
  R(5)=R(14);
  R(6)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ec2eu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c01638au;
  R(0)=0x18u;
  R(5)+=0x10u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c06ec42u; R(4)=R(12); f_8c01638a(c); }
  R(0)=0x150u;
  R(2)=0x4u;
  ST32(R(12),R(2));
  R(3)=LD32(R(11)+R(0));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06ec5a; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06ec5a:;
  fp_arith(c,3,3,15);
  R(0)=0x28u;
  c->t=(R(10)&R(10))==0;
  fp_st(c,3,R(0)+R(12));
  R(0)=0x50u;
  { uint32_t k=c->t; fp_st(c,3,R(0)+R(12)); if(k) goto L8c06ec7a; }
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c06ec6eu; R(4)=R(10); f_8c04a8b8(c); }
  R(3)=0x8c0900acu;
  R(6)=R(15);
  R(4)=R(0);
  R(6)+=0x10u;
  { c->pr=0x8c06ec7au; R(5)=LD32(R(15)); f_8c0900ac(c); }
L8c06ec7a:;
  R(3)=0x8c064b7eu;
  { c->pr=0x8c06ec80u; R(4)=LD32(R(15)); f_8c064b7e(c); }
  {  goto L8c06ec98; }
L8c06ec98:;
  { R(0)=LD32(R(15)+4); goto L8c06ecea; }
L8c06ecea:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ece0(SH4Ctx *c) {
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06ece8u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ecfc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x8u;
  R(5)=R(14);
  ST32(R(15),R(4));
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(13)=LD32(R(14)+4);
  { uint32_t tg=R(13); c->pr=0x8c06ed1cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(14)=LD32(R(15)+8);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c06ed2cu; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x1a7u;
  R(13)=R(0);
  R(2)=LD32(R(15)+4);
  R(5)=R(15);
  c->t=R(2)==R(3);
  { uint32_t k=!c->t; R(5)+=0x8u; if(k) goto L8c06ed48; }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c06ed50;
  R(1)=0x8c01638au;
  { c->pr=0x8c06ed44u; R(4)=LD32(R(14)+32); f_8c01638a(c); }
  {  goto L8c06ed50; }
L8c06ed48:;
  R(3)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06ed50u; R(4)=0x27u; f_8c074080(c); }
L8c06ed50:;
  R(0)=R(13);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ed80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(13)=LD32(R(13)+4);
  R(14)=R(4);
  { uint32_t tg=R(13); c->pr=0x8c06ed9eu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(11)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c06edaeu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(10)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c06edbeu; R(4)=R(14); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(12)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c06edceu; R(4)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(11));
  R(7)=0x0u;
  R(13)=LD32(R(15)+4);
  R(5)=R(0);
  c->t=(R(4)&R(4))==0;
  R(13)=R(13)&0xFF;
  { uint32_t k=c->t; R(6)=R(7); if(k) goto L8c06edee; }
L8c06edde:;
  R(2)=LD32(R(4)+12);
  c->t=R(2)==R(10);
  if(!c->t) goto L8c06ede8;
  { R(6)=R(4); goto L8c06edee; }
L8c06ede8:;
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c06edde;
L8c06edee:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(14)=~R(12); if(k) goto L8c06ee08; }
  R(4)=LD32(R(11));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06ee08;
L8c06edfc:;
  R(2)=LD32(R(4)+16);
  R(2)&=R(14);
  ST32(R(4)+16,R(2));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c06edfc;
L8c06ee08:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c06ee1c;
  R(4)=LD32(R(11));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06ee1c;
L8c06ee14:;
  ST32(R(4)+16,R(7));
  R(4)=LD32(R(4));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c06ee14;
L8c06ee1c:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c06ee52;
  R(0)=R(13);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c06ee3e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06ee3e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06ee46;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06ee46;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06ee4a;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06ee50;
  {  goto L8c06ee52; }
L8c06ee3e:;
  R(2)=LD32(R(6)+16);
  R(2)|=R(12);
  { ST32(R(6)+16,R(2)); goto L8c06ee52; }
L8c06ee46:;
  { ST32(R(6)+16,R(12)); goto L8c06ee52; }
L8c06ee4a:;
  R(3)=LD32(R(6)+16);
  R(3)&=R(14);
  ST32(R(6)+16,R(3));
L8c06ee50:;
  ST32(R(6)+16,R(7));
L8c06ee52:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ee64(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c06ee84;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06ee86; }
L8c06ee84:;
  ST32(R(15),R(4));
L8c06ee86:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06eec0;
  { R(3)=0x0u; goto L8c06eec4; }
L8c06eec0:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+4);
L8c06eec4:;
  R(6)=R(15);
  R(6)+=0x10u;
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c06eed0u; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x10u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(1)=0x1a9u;
  ST8(R(15)+4,R(0));
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06eeec;
  R(4)=LD32(R(15)+12);
  R(1)=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(1)+=R(4);
  ST8(R(1),R(0));
L8c06eeec:;
  R(0)=R(5);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06eec0(SH4Ctx *c) {
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+4);
  R(6)=R(15);
  R(6)+=0x10u;
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(14)+4);
  { uint32_t tg=R(2); c->pr=0x8c06eed0u; R(5)=R(14); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=0x10u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(1)=0x1a9u;
  ST8(R(15)+4,R(0));
  R(0)=LD32(R(15)+8);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c06eeec;
  R(4)=LD32(R(15)+12);
  R(1)=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=LD32(R(4)+4);
  R(1)+=R(4);
  ST8(R(1),R(0));
L8c06eeec:;
  R(0)=R(5);
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06eef6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff50u;
  R(15)+=R(0);
  R(3)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(13)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06ef1e;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c06ef20; }
L8c06ef1e:;
  ST32(R(15),R(13));
L8c06ef20:;
  R(6)=0xa0u;
  R(5)=R(14);
  R(3)=LD32(R(14)+4);
  R(6)+=R(15);
  { uint32_t tg=R(3); c->pr=0x8c06ef2cu; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0xa0u;
  R(14)=R(0);
  R(3)=0x94u;
  R(5)=R(14);
  R(2)+=R(15);
  R(6)=0xa0u;
  R(1)=LD32(R(2));
  R(3)+=R(15);
  R(0)=LD32(R(2)+4);
  R(6)+=R(15);
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c06ef4eu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=0xacu;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; c->fr[2]=0x00000000u; if(k) goto L8c06ef80; }
  R(0)=0xa0u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c06ef8a; }
L8c06ef80:;
  R(0)=0xa0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c06ef8a:;
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c06efc0;
  { fp_mov(c,3,4); goto L8c06efc4; }
L8c06efc0:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c06efc4:;
  R(0)=0x8c06f110u;
  fp_mov(c,15,3);
  fp_ld(c,2,R(0));
  R(4)=R(15);
  R(5)=LD32(R(15));
  fp_arith(c,2,15,2);
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c06efd8u; R(4)+=0x8u; f_8c0153d8(c); }
  R(6)=0x94u;
  R(5)=R(15);
  R(4)=0x88u;
  R(5)+=0x8u;
  R(2)=0x8c014eaau;
  R(6)+=R(15);
  { c->pr=0x8c06efe8u; R(4)+=R(15); f_8c014eaa(c); }
  R(0)=0x88u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06f004;
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06f004;
  R(0)=0x90u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c06f0e0;
L8c06f004:;
  R(0)=0x7cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(4)=R(15);
  R(0)=0x80u;
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  R(5)=0x88u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x90u;
  R(5)+=R(15);
  R(3)=0x8c05e55cu;
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c06f026u; R(4)+=0x7cu; f_8c05e55c(c); }
  R(0)=0x88u;
  fp_mov(c,4,0);
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x8cu;
  fp_mov(c,0,7);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x90u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(3)=0x8c09cf34u;
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  { c->pr=0x8c06f048u; fp_arith(c,3,4,3); f_8c09cf34(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x1abu;
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; fp_mov(c,4,0); if(k) goto L8c06f072; }
  R(1)=0x8c123bbcu;
  R(3)=LD32(R(1));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06f066; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06f066:;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  R(0)=0x8c06f12cu;
  fp_ld(c,3,R(0));
  fp_mov(c,15,2);
  fp_arith(c,2,15,3);
L8c06f072:;
  fp_cmp(c,1,15,4);
  if(c->t) goto L8c06f078;
  fp_mov(c,4,15);
L8c06f078:;
  R(0)=0x90u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x70u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x90u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x74u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x88u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x78u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c06f0ce; }
  fp_unary(c,0,4);
L8c06f0ce:;
  R(3)=0x8c07237cu;
  { c->pr=0x8c06f0d4u; R(4)=LD32(R(15)); f_8c07237c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06f0e0;
  R(3)=0x8c072f52u;
  { c->pr=0x8c06f0e0u; R(4)=0x1u; f_8c072f52(c); }
L8c06f0e0:;
  R(1)=0xb0u;
  R(0)=R(14);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06ef80(SH4Ctx *c) {
  R(0)=0xa0u;
  R(3)=LD32(R(15)+R(0));
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
  fp_cmp(c,1,4,2);
  if(!c->t) goto L8c06efc0;
  { fp_mov(c,3,4); goto L8c06efc4; }
L8c06efc0:;
  fp_mov(c,3,4);
  fp_unary(c,0,3);
L8c06efc4:;
  R(0)=0x8c06f110u;
  fp_mov(c,15,3);
  fp_ld(c,2,R(0));
  R(4)=R(15);
  R(5)=LD32(R(15));
  fp_arith(c,2,15,2);
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c06efd8u; R(4)+=0x8u; f_8c0153d8(c); }
  R(6)=0x94u;
  R(5)=R(15);
  R(4)=0x88u;
  R(5)+=0x8u;
  R(2)=0x8c014eaau;
  R(6)+=R(15);
  { c->pr=0x8c06efe8u; R(4)+=R(15); f_8c014eaa(c); }
  R(0)=0x88u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06f004;
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06f004;
  R(0)=0x90u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c06f0e0;
L8c06f004:;
  R(0)=0x7cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(4)=R(15);
  R(0)=0x80u;
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  R(5)=0x88u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x90u;
  R(5)+=R(15);
  R(3)=0x8c05e55cu;
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c06f026u; R(4)+=0x7cu; f_8c05e55c(c); }
  R(0)=0x88u;
  fp_mov(c,4,0);
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x8cu;
  fp_mov(c,0,7);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x90u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(3)=0x8c09cf34u;
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  { c->pr=0x8c06f048u; fp_arith(c,3,4,3); f_8c09cf34(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x1abu;
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; fp_mov(c,4,0); if(k) goto L8c06f072; }
  R(1)=0x8c123bbcu;
  R(3)=LD32(R(1));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06f066; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06f066:;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  R(0)=0x8c06f12cu;
  fp_ld(c,3,R(0));
  fp_mov(c,15,2);
  fp_arith(c,2,15,3);
L8c06f072:;
  fp_cmp(c,1,15,4);
  if(c->t) goto L8c06f078;
  fp_mov(c,4,15);
L8c06f078:;
  R(0)=0x90u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x70u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x90u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x74u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x88u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x78u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c06f0ce; }
  fp_unary(c,0,4);
L8c06f0ce:;
  R(3)=0x8c07237cu;
  { c->pr=0x8c06f0d4u; R(4)=LD32(R(15)); f_8c07237c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06f0e0;
  R(3)=0x8c072f52u;
  { c->pr=0x8c06f0e0u; R(4)=0x1u; f_8c072f52(c); }
L8c06f0e0:;
  R(1)=0xb0u;
  R(0)=R(14);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06efc0(SH4Ctx *c) {
  fp_mov(c,3,4);
  fp_unary(c,0,3);
  R(0)=0x8c06f110u;
  fp_mov(c,15,3);
  fp_ld(c,2,R(0));
  R(4)=R(15);
  R(5)=LD32(R(15));
  fp_arith(c,2,15,2);
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c06efd8u; R(4)+=0x8u; f_8c0153d8(c); }
  R(6)=0x94u;
  R(5)=R(15);
  R(4)=0x88u;
  R(5)+=0x8u;
  R(2)=0x8c014eaau;
  R(6)+=R(15);
  { c->pr=0x8c06efe8u; R(4)+=R(15); f_8c014eaa(c); }
  R(0)=0x88u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06f004;
  R(0)=0x8cu;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c06f004;
  R(0)=0x90u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(15));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c06f0e0;
L8c06f004:;
  R(0)=0x7cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(4)=R(15);
  R(0)=0x80u;
  c->fr[3]=0x3F800000u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x84u;
  R(5)=0x88u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x90u;
  R(5)+=R(15);
  R(3)=0x8c05e55cu;
  fp_st(c,4,R(0)+R(15));
  { c->pr=0x8c06f026u; R(4)+=0x7cu; f_8c05e55c(c); }
  R(0)=0x88u;
  fp_mov(c,4,0);
  fp_ld(c,7,R(0)+R(15));
  R(0)=0x8cu;
  fp_mov(c,0,7);
  fp_ld(c,6,R(0)+R(15));
  R(0)=0x90u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(15));
  R(3)=0x8c09cf34u;
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_unary(c,2,3);
  { c->pr=0x8c06f048u; fp_arith(c,3,4,3); f_8c09cf34(c); }
  R(3)=LD32(R(15)+4);
  R(2)=0x1abu;
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; fp_mov(c,4,0); if(k) goto L8c06f072; }
  R(1)=0x8c123bbcu;
  R(3)=LD32(R(1));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06f066; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06f066:;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  R(0)=0x8c06f12cu;
  fp_ld(c,3,R(0));
  fp_mov(c,15,2);
  fp_arith(c,2,15,3);
L8c06f072:;
  fp_cmp(c,1,15,4);
  if(c->t) goto L8c06f078;
  fp_mov(c,4,15);
L8c06f078:;
  R(0)=0x90u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x8cu;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x70u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x88u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x84u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x90u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x74u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x88u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x80u;
  fp_ld(c,1,R(0)+R(15));
  R(0)=0x78u;
  fp_arith(c,2,1,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,1,2,1);
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_st(c,2,R(0)+R(15)); if(k) goto L8c06f0ce; }
  fp_unary(c,0,4);
L8c06f0ce:;
  R(3)=0x8c07237cu;
  { c->pr=0x8c06f0d4u; R(4)=LD32(R(15)); f_8c07237c(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06f0e0;
  R(3)=0x8c072f52u;
  { c->pr=0x8c06f0e0u; R(4)=0x1u; f_8c072f52(c); }
L8c06f0e0:;
  R(1)=0xb0u;
  R(0)=R(14);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f140(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(6)=0x8c0c76fcu;
  R(7)=R(5);
  R(14)=R(5);
  R(7)+=0xfffffff4u;
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)=LD32(R(7)); if(k) goto L8c06f15e; }
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c06f160; }
L8c06f15e:;
  ST32(R(15),R(4));
L8c06f160:;
  R(1)=0x1a2u;
  R(0)=R(7);
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f172;
  R(1)=0x1a3u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06f17c;
  {  goto L8c06f1c0; }
L8c06f172:;
  R(3)=0x8c0a16c0u;
  { c->pr=0x8c06f178u; R(4)=LD32(R(15)); f_8c0a16c0(c); }
  {  goto L8c06f1c8; }
L8c06f17c:;
  R(3)=0x8c0a16deu;
  { c->pr=0x8c06f182u; R(4)=LD32(R(15)); f_8c0a16de(c); }
  {  goto L8c06f1c8; }
L8c06f1c0:;
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06f1c8u; R(4)=0x27u; f_8c074080(c); }
L8c06f1c8:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f1c0(SH4Ctx *c) {
  R(2)=0x8c074080u;
  R(5)=0x0u;
  { c->pr=0x8c06f1c8u; R(4)=0x27u; f_8c074080(c); }
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06f1d2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(12)=R(5);
  R(6)=R(15);
  R(6)+=0x18u;
  ST32(R(15),R(5));
  R(12)=LD32(R(12)+4);
  R(13)=R(4);
  { uint32_t tg=R(12); c->pr=0x8c06f1ecu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c0646c8u;
  R(12)=R(0);
  R(14)=LD32(R(15)+24);
  { c->pr=0x8c06f1f6u; R(4)=R(14); f_8c0646c8(c); }
  R(2)=0x8c055beau;
  { c->pr=0x8c06f1fcu; R(4)=R(14); f_8c055bea(c); }
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(14)=LD32(R(14)+32);
  R(5)=R(12);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c06f20au; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+24);
  R(12)=R(0);
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x18u;
  ST32(R(15),R(2));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c06f21cu; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+24);
  R(12)=R(0);
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x18u;
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(12)+4);
  { uint32_t tg=R(3); c->pr=0x8c06f22eu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=0x8c06f2ecu;
  R(3)=LD32(R(15));
  R(5)=R(15);
  R(4)=LD32(R(15)+24);
  c->fpul=R(3);
  R(3)=LD32(R(15)+8);
  fp_ld(c,5,R(0));
  R(0)=0x8c06f2f0u;
  fp_float(c,3);
  c->fpul=R(3);
  fp_mov(c,2,5);
  R(3)=0x8c036f00u;
  fp_mov(c,4,3);
  fp_float(c,3);
  c->fpul=R(4);
  fp_arith(c,3,4,5);
  R(4)=0x8c123c54u;
  fp_mov(c,5,3);
  fp_float(c,3);
  fp_arith(c,3,5,2);
  fp_ld(c,2,R(0));
  fp_mov(c,6,3);
  fp_arith(c,3,6,2);
  { uint32_t tg=R(3); c->pr=0x8c06f262u; R(5)+=0xcu; sh4_call(c,tg); }
  R(2)=0x8c01638au;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c06f26cu; R(4)=R(14); f_8c01638a(c); }
  R(1)=0x8c123c58u;
  R(3)=0x4u;
  ST32(R(14),R(3));
  R(2)=LD32(R(1));
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c06f284; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c06f284:;
  R(0)=0x8c06f308u;
  fp_ld(c,2,R(0));
  R(0)=0x28u;
  fp_arith(c,3,3,2);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(14));
  R(0)=LD32(R(15)+4);
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
