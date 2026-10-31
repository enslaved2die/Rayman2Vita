#include "recomp_decls.h"
void f_8c031bb4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=R(5);
  R(6)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(14)=R(5);
  R(2)=LD32(R(3));
  ST32(R(15)+8,R(2));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c031bd8;
  R(3)=0x0u;
  ST32(R(15),R(5));
  { ST32(R(6),R(3)); goto L8c031bda; }
L8c031bd8:;
  ST32(R(15),R(4));
L8c031bda:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0xcu;
  { uint32_t tg=R(3); c->pr=0x8c031be4u; R(5)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+24);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c031c20;
  R(0)=0xcu;
  { fp_ld(c,14,R(0)+R(15)); goto L8c031c28; }
L8c031c20:;
  R(3)=LD32(R(15)+12);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,14,3);
L8c031c28:;
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c031c82;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c031c38u;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c031c82;
  R(0)=0x8c031ca8u;
  R(1)=0x87u;
  fp_ld(c,3,R(0));
  R(0)=LD32(R(15)+8);
  fp_mov(c,15,14);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; fp_arith(c,2,15,3); if(k) goto L8c031c58; }
  R(1)=0x88u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c031c7a;
  {  goto L8c031c82; }
L8c031c58:;
  R(2)=0x8c123bbcu;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,2); if(k) goto L8c031c6c; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[1]=c->fpul;
  fp_arith(c,0,2,1);
L8c031c6c:;
  fp_mov(c,1,15);
  fp_arith(c,2,1,2);
  R(0)=0x8c031cb4u;
  fp_ld(c,2,R(0));
  fp_mov(c,4,1);
  { fp_arith(c,2,4,2); goto L8c031c7c; }
L8c031c7a:;
  fp_mov(c,4,15);
L8c031c7c:;
  R(3)=0x8c090220u;
  { c->pr=0x8c031c82u;  f_8c090220(c); }
L8c031c82:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031c20(SH4Ctx *c) {
  R(3)=LD32(R(15)+12);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,14,3);
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c031c82;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c031c38u;  f_8c04a8b8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c031c82;
  R(0)=0x8c031ca8u;
  R(1)=0x87u;
  fp_ld(c,3,R(0));
  R(0)=LD32(R(15)+8);
  fp_mov(c,15,14);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; fp_arith(c,2,15,3); if(k) goto L8c031c58; }
  R(1)=0x88u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c031c7a;
  {  goto L8c031c82; }
L8c031c58:;
  R(2)=0x8c123bbcu;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,2); if(k) goto L8c031c6c; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[1]=c->fpul;
  fp_arith(c,0,2,1);
L8c031c6c:;
  fp_mov(c,1,15);
  fp_arith(c,2,1,2);
  R(0)=0x8c031cb4u;
  fp_ld(c,2,R(0));
  fp_mov(c,4,1);
  { fp_arith(c,2,4,2); goto L8c031c7c; }
L8c031c7a:;
  fp_mov(c,4,15);
L8c031c7c:;
  R(3)=0x8c090220u;
  { c->pr=0x8c031c82u;  f_8c090220(c); }
L8c031c82:;
  R(0)=LD32(R(15)+4);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031cc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(3)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(3)+=0xfffffff4u;
  R(13)=R(4);
  R(2)=LD32(R(3));
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(5));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c031cec;
  R(3)=0x0u;
  ST32(R(15),R(4));
  { ST32(R(5),R(3)); goto L8c031cee; }
L8c031cec:;
  ST32(R(15),R(13));
L8c031cee:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x20u;
  { uint32_t tg=R(3); c->pr=0x8c031cfau; R(4)=R(13); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(11)=LD32(R(15)+32);
  R(4)=LD32(R(4)+4);
  R(11)=LD32(R(11)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(11)=LD32(R(11)+12); if(k) goto L8c031d10; }
  {  goto L8c031e0c; }
L8c031d10:;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c031d16u;  f_8c04a8b8(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c031d20;
  {  goto L8c031e0c; }
L8c031d20:;
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x8c0163ceu;
  R(5)+=0x8u;
  { c->pr=0x8c031d2cu; R(4)=LD32(R(4)+36); f_8c0163ce(c); }
  R(1)=0x89u;
  R(0)=LD32(R(15)+4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c031d3e;
  R(1)=0x8au;
  c->t=R(0)==R(1);
  if(c->t) goto L8c031de8;
  {  goto L8c031e0c; }
L8c031d3e:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x20u;
  { uint32_t tg=R(3); c->pr=0x8c031d4au; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031d80; }
  R(0)=0x20u;
  { fp_ld(c,15,R(0)+R(15)); goto L8c031d88; }
L8c031d80:;
  R(3)=LD32(R(15)+32);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c031d88:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x20u;
  { uint32_t tg=R(2); c->pr=0x8c031d92u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031da2; }
  R(0)=0x20u;
  { fp_ld(c,14,R(0)+R(15)); goto L8c031daa; }
L8c031da2:;
  R(3)=LD32(R(15)+32);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,14,3);
L8c031daa:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x20u;
  { uint32_t tg=R(2); c->pr=0x8c031db4u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c031dc2;
  R(0)=0x20u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c031dca; }
L8c031dc2:;
  R(3)=LD32(R(15)+32);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c031dca:;
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x1cu;
  R(3)=0x8c014eaau;
  R(4)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(6)+=0x14u;
  R(5)=LD32(R(11)+36);
  { c->pr=0x8c031de4u; R(4)+=0x14u; f_8c014eaa(c); }
  {  goto L8c031df2; }
L8c031de8:;
  R(3)=0x8c0163ceu;
  R(5)=R(15);
  R(5)+=0x14u;
  { c->pr=0x8c031df2u; R(4)=LD32(R(11)+36); f_8c0163ce(c); }
L8c031df2:;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x8u;
  R(5)+=0x14u;
  { c->pr=0x8c031e02u; R(4)+=0x14u; f_8c05e612(c); }
  R(2)=0x8c090360u;
  R(5)=R(15);
  R(5)+=0x14u;
  { c->pr=0x8c031e0cu; R(4)=R(12); f_8c090360(c); }
L8c031e0c:;
  R(0)=R(14);
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031d80(SH4Ctx *c) {
  R(3)=LD32(R(15)+32);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x20u;
  { uint32_t tg=R(2); c->pr=0x8c031d92u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c031da2; }
  R(0)=0x20u;
  { fp_ld(c,14,R(0)+R(15)); goto L8c031daa; }
L8c031da2:;
  R(3)=LD32(R(15)+32);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,14,3);
L8c031daa:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x20u;
  { uint32_t tg=R(2); c->pr=0x8c031db4u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c031dc2;
  R(0)=0x20u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c031dca; }
L8c031dc2:;
  R(3)=LD32(R(15)+32);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c031dca:;
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,14,R(0)+R(15));
  R(0)=0x1cu;
  R(3)=0x8c014eaau;
  R(4)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(6)+=0x14u;
  R(5)=LD32(R(11)+36);
  { c->pr=0x8c031de4u; R(4)+=0x14u; f_8c014eaa(c); }
  {  goto L8c031df2; }
L8c031df2:;
  R(5)=R(15);
  R(3)=0x8c05e612u;
  R(6)=R(15);
  R(4)=R(15);
  R(6)+=0x8u;
  R(5)+=0x14u;
  { c->pr=0x8c031e02u; R(4)+=0x14u; f_8c05e612(c); }
  R(2)=0x8c090360u;
  R(5)=R(15);
  R(5)+=0x14u;
  { c->pr=0x8c031e0cu; R(4)=R(12); f_8c090360(c); }
  R(0)=R(14);
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031e20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(10)=R(5);
  R(14)=R(5);
  R(5)=0x8c0c76fcu;
  R(13)=R(4);
  R(10)+=0xfffffff4u;
  R(4)=LD32(R(5));
  R(10)=LD32(R(10));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c031e48; }
  ST32(R(15),R(4));
  { ST32(R(5),R(11)); goto L8c031e4a; }
L8c031e48:;
  ST32(R(15),R(13));
L8c031e4a:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c031e56u; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=R(10);
  R(12)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==75;
  if(!c->t) goto L8c031e72;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(2); c->pr=0x8c031e6cu; R(4)=R(13); sh4_call(c,tg); }
  R(14)=R(0);
  { R(7)=LD32(R(15)+4); goto L8c031e74; }
L8c031e72:;
  R(7)=R(11);
L8c031e74:;
  R(0)=R(10);
  R(3)=0x8c054c74u;
  c->t=(int32_t)R(0)==73;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=c->t;
  { c->pr=0x8c031e84u; R(4)=LD32(R(15)+4); f_8c054c74(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c031eba; }
  R(4)=LD32(R(15));
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c031ec0;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c031e9cu;  f_8c04a8b8(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c031ec0;
  R(2)=0x8c0841c4u;
  { c->pr=0x8c031ea8u; R(4)=R(12); f_8c0841c4(c); }
  R(3)=LD32(R(13)+4);
  R(5)=R(0);
  c->t=R(3)==R(5);
  if(c->t) goto L8c031ec0;
  R(3)=0x8c08eae0u;
  { c->pr=0x8c031eb6u; R(4)=R(13); f_8c08eae0(c); }
  {  goto L8c031ec0; }
L8c031eba:;
  R(3)=0x8c072f52u;
  { c->pr=0x8c031ec0u; R(4)=0x2u; f_8c072f52(c); }
L8c031ec0:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031f20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  R(14)=R(4);
  { uint32_t tg=R(2); c->pr=0x8c031f38u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x8c054e48u;
  ST32(R(15),R(0));
  R(13)=LD32(R(15)+4);
  R(5)=R(13);
  { c->pr=0x8c031f44u; R(4)=R(14); f_8c054e48(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c031f76;
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c031f7c;
  R(2)=0x8c04a8b8u;
  { c->pr=0x8c031f58u;  f_8c04a8b8(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c031f7c;
  R(2)=0x8c0841c4u;
  { c->pr=0x8c031f64u; R(4)=R(13); f_8c0841c4(c); }
  R(3)=LD32(R(14)+4);
  R(5)=R(0);
  c->t=R(3)==R(5);
  if(c->t) goto L8c031f7c;
  R(3)=0x8c08eae0u;
  { c->pr=0x8c031f72u; R(4)=R(14); f_8c08eae0(c); }
  {  goto L8c031f7c; }
L8c031f76:;
  R(3)=0x8c072f52u;
  { c->pr=0x8c031f7cu; R(4)=0x2u; f_8c072f52(c); }
L8c031f7c:;
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c031f88(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c76fcu;
  R(7)=R(5);
  R(7)+=0xfffffff4u;
  R(6)=LD32(R(3));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(7)=LD32(R(7)); if(k) goto L8c031fe0; }
  R(1)=0x8c0c76fcu;
  R(2)=0x0u;
  ST32(R(15),R(6));
  { ST32(R(1),R(2)); goto L8c031fe2; }
L8c031fe0:;
  ST32(R(15),R(4));
L8c031fe2:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==120;
  if(!c->t) goto L8c032000;
  R(7)=LD32(R(15));
  R(3)=0x8u;
  R(4)=LD32(R(15));
  R(7)=LD32(R(7)+4);
  R(4)=LD32(R(4)+44);
  R(7)=LD32(R(7));
  R(0)=0xf8u;
  R(4)|=R(3);
  R(6)=R(4);
  ST32(R(7)+R(0),R(4));
  R(4)=LD32(R(15));
  ST32(R(4)+44,R(6));
L8c032000:;
  R(0)=R(5);
  { R(15)+=0x4u; return; }
}
void f_8c031fe0(SH4Ctx *c) {
  ST32(R(15),R(4));
  R(0)=R(7);
  c->t=(int32_t)R(0)==120;
  if(!c->t) goto L8c032000;
  R(7)=LD32(R(15));
  R(3)=0x8u;
  R(4)=LD32(R(15));
  R(7)=LD32(R(7)+4);
  R(4)=LD32(R(4)+44);
  R(7)=LD32(R(7));
  R(0)=0xf8u;
  R(4)|=R(3);
  R(6)=R(4);
  ST32(R(7)+R(0),R(4));
  R(4)=LD32(R(15));
  ST32(R(4)+44,R(6));
L8c032000:;
  R(0)=R(5);
  { R(15)+=0x4u; return; }
}
void f_8c032006(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(6)=0x8c0c76fcu;
  R(12)=R(5);
  R(10)=R(4);
  R(14)=R(5);
  R(4)=LD32(R(6));
  R(12)+=0xfffffff4u;
  R(12)=LD32(R(12));
  R(5)=0x0u;
  c->t=(R(4)&R(4))==0;
  R(11)=R(5);
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c032032; }
  ST32(R(15),R(4));
  { ST32(R(6),R(5)); goto L8c032034; }
L8c032032:;
  ST32(R(15),R(10));
L8c032034:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c032040u; R(4)=R(10); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=R(12);
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0320a0;
  c->t=(int32_t)R(0)==17;
  if(c->t) goto L8c0320a0;
  c->t=(int32_t)R(0)==12;
  if(c->t) goto L8c0320f6;
  c->t=(int32_t)R(0)==14;
  if(!c->t) goto L8c032058;
  {  goto L8c032160; }
L8c032058:;
  c->t=(int32_t)R(0)==15;
  if(!c->t) goto L8c032060;
  {  goto L8c032160; }
L8c032060:;
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c032068;
  {  goto L8c0321a2; }
L8c032068:;
  {  goto L8c032210; }
L8c0320a0:;
  R(3)=LD32(R(14)+4);
  R(6)=R(15);
  R(11)=LD32(R(15)+4);
  R(0)=R(12);
  R(5)=R(14);
  R(6)+=0x4u;
  c->t=(int32_t)R(0)==16;
  { uint32_t tg=R(3); c->pr=0x8c0320b2u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(13)=LD32(R(4)+R(0));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0320c6;
  {  goto L8c032210; }
L8c0320c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(5)=R(11); if(k) goto L8c0320dc; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(13);
  { R(4)=LD32(R(4)); goto L8c0320de; }
L8c0320dc:;
  R(4)=0x0u;
L8c0320de:;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(4)); if(k) goto L8c0320ea; }
  {  goto L8c032210; }
L8c0320ea:;
  R(5)=LD32(R(15));
  R(4)=LD32(R(5)+48);
  R(5)=0x10000u;
  R(5)|=R(4);
  R(4)=LD32(R(15));
  ST32(R(4)+48,R(5));
L8c0320f6:;
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c032102;
  R(0)=0x4u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c03210a; }
L8c032102:;
  R(3)=LD32(R(15)+4);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c03210a:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c032140;
  { fp_mov(c,4,3); goto L8c03214a; }
L8c032140:;
  R(0)=0x8c0321c4u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c03214a;
  fp_mov(c,4,5);
L8c03214a:;
  R(4)=LD32(R(15));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(4));
  R(0)=R(12);
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c032210;
  R(3)=0x8c054420u;
  { c->pr=0x8c03215cu; R(4)=LD32(R(15)); f_8c054420(c); }
  {  goto L8c032210; }
L8c032160:;
  R(0)=R(12);
  R(3)=LD32(R(14)+4);
  R(6)=R(15);
  R(12)=LD32(R(15)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  c->t=(int32_t)R(0)==14;
  { uint32_t tg=R(3); c->pr=0x8c032172u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(13)=LD32(R(4)+R(0));
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c032210;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c032198; }
  R(5)=R(4)&0xFFFF;
  R(3)=R(5);
  R(5)<<=2;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(13);
  { R(5)=LD32(R(5)); goto L8c03219a; }
L8c032198:;
  R(5)=0x0u;
L8c03219a:;
  R(13)=R(5);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c032210;
  R(11)=0x1u;
L8c0321a2:;
  R(5)=LD32(R(15)+4);
  R(4)=LD32(R(15));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)=LD32(R(4)+44); if(k) goto L8c0321e0; }
  R(2)=0xfffffff7u;
  { R(4)&=R(2); goto L8c0321f4; }
L8c0321e0:;
  R(3)=R(11)&0xFF;
  c->t=(R(3)&R(3))==0;
  R(1)=0x8u;
  { uint32_t k=c->t; R(4)|=R(1); if(k) goto L8c0321f4; }
  R(5)=R(13);
  R(3)=0xfffeffffu;
  R(6)=LD32(R(5)+48);
  R(6)&=R(3);
  ST32(R(5)+48,R(6));
L8c0321f4:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c03220c;
  R(6)=LD32(R(15));
  R(5)=R(4);
  R(0)=0xf8u;
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6));
  ST32(R(6)+R(0),R(4));
  R(4)=LD32(R(15));
  { ST32(R(4)+44,R(5)); goto L8c032210; }
L8c03220c:;
  R(5)=R(13);
  ST32(R(5)+44,R(4));
L8c032210:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0320a0(SH4Ctx *c) {
  R(3)=LD32(R(14)+4);
  R(6)=R(15);
  R(11)=LD32(R(15)+4);
  R(0)=R(12);
  R(5)=R(14);
  R(6)+=0x4u;
  c->t=(int32_t)R(0)==16;
  { uint32_t tg=R(3); c->pr=0x8c0320b2u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(14)=R(0);
  R(0)=0xa0u;
  R(4)=LD32(R(4)+4);
  R(4)=LD32(R(4));
  R(13)=LD32(R(4)+R(0));
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0320c6;
  {  goto L8c032210; }
L8c0320c6:;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(5)=R(11); if(k) goto L8c0320dc; }
  R(4)=R(5)&0xFFFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(4)<<=2;
  R(4)+=R(13);
  { R(4)=LD32(R(4)); goto L8c0320de; }
L8c0320dc:;
  R(4)=0x0u;
L8c0320de:;
  R(3)=R(4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(15),R(4)); if(k) goto L8c0320ea; }
  {  goto L8c032210; }
L8c0320ea:;
  R(5)=LD32(R(15));
  R(4)=LD32(R(5)+48);
  R(5)=0x10000u;
  R(5)|=R(4);
  R(4)=LD32(R(15));
  ST32(R(4)+48,R(5));
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c032102;
  R(0)=0x4u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c03210a; }
L8c032102:;
  R(3)=LD32(R(15)+4);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c03210a:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c032140;
  { fp_mov(c,4,3); goto L8c03214a; }
L8c032140:;
  R(0)=0x8c0321c4u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c03214a;
  fp_mov(c,4,5);
L8c03214a:;
  R(4)=LD32(R(15));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(4));
  R(0)=R(12);
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c032210;
  R(3)=0x8c054420u;
  { c->pr=0x8c03215cu; R(4)=LD32(R(15)); f_8c054420(c); }
  {  goto L8c032210; }
L8c032210:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032140(SH4Ctx *c) {
  R(0)=0x8c0321c4u;
  fp_ld(c,5,R(0));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c03214a;
  fp_mov(c,4,5);
L8c03214a:;
  R(4)=LD32(R(15));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(4));
  R(0)=R(12);
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c032210;
  R(3)=0x8c054420u;
  { c->pr=0x8c03215cu; R(4)=LD32(R(15)); f_8c054420(c); }
  {  goto L8c032210; }
L8c032210:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0321e0(SH4Ctx *c) {
  R(3)=R(11)&0xFF;
  c->t=(R(3)&R(3))==0;
  R(1)=0x8u;
  { uint32_t k=c->t; R(4)|=R(1); if(k) goto L8c0321f4; }
  R(5)=R(13);
  R(3)=0xfffeffffu;
  R(6)=LD32(R(5)+48);
  R(6)&=R(3);
  ST32(R(5)+48,R(6));
L8c0321f4:;
  R(11)=R(11)&0xFF;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c03220c;
  R(6)=LD32(R(15));
  R(5)=R(4);
  R(0)=0xf8u;
  R(6)=LD32(R(6)+4);
  R(6)=LD32(R(6));
  ST32(R(6)+R(0),R(4));
  R(4)=LD32(R(15));
  { ST32(R(4)+44,R(5)); goto L8c032210; }
L8c03220c:;
  R(5)=R(13);
  ST32(R(5)+44,R(4));
L8c032210:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032222(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(12)=R(4);
  R(14)=R(5);
  R(6)=R(15);
  R(4)=0x0u;
  ST32(R(15),R(2));
  R(6)+=0x1cu;
  R(5)=R(14);
  ST32(R(15)+8,R(14));
  R(13)=R(4);
  ST32(R(15)+4,R(4));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c032250u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=LD32(R(15)+28);
  R(14)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c032260;
  R(2)=0x8c05a3fau;
  { c->pr=0x8c03225eu;  f_8c05a3fa(c); }
  R(13)=R(0);
L8c032260:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0322a0;
  R(3)=0x8c072fccu;
  { c->pr=0x8c03226au; R(4)=LD32(R(15)+8); f_8c072fcc(c); }
  {  goto L8c0324a8; }
L8c0322a0:;
  R(0)=LD32(R(15));
  R(11)=0x8c0723e0u;
  R(1)=0x8du;
  R(0)-=R(1);
  R(1)=0xau;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0322b2;
  {  goto L8c0324a6; }
L8c0322b2:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0322c4u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0322beu+R(0));  switch(tg){ case 0x8c0322d8u: goto L8c0322d8; case 0x8c0322feu: goto L8c0322fe; case 0x8c03233eu: goto L8c03233e; case 0x8c032374u: goto L8c032374; case 0x8c03239au: goto L8c03239a; case 0x8c0323c0u: goto L8c0323c0; case 0x8c0323dau: goto L8c0323da; case 0x8c032458u: goto L8c032458; case 0x8c032470u: goto L8c032470; case 0x8c03247au: goto L8c03247a; default: sh4_bad_jump(c,0x8c0322bau,tg); return; } }
L8c0322d8:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c0322e4u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  ST32(R(15),R(0));
  { uint32_t tg=R(11); c->pr=0x8c0322f0u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(3)=0x8c011b66u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0322fau; R(4)=R(13); f_8c011b66(c); }
  {  goto L8c0324a2; }
L8c0322fe:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03230au; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c011bccu;
  R(5)+=0x4u;
  ST32(R(15),R(0));
  R(6)+=0xcu;
  { c->pr=0x8c03231au; R(4)=R(13); f_8c011bcc(c); }
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c03232a;
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(2)=c->fpul; goto L8c03232c; }
L8c03232a:;
  R(2)=LD32(R(15)+28);
L8c03232c:;
  R(6)=R(15);
  R(3)=0x8c011bb6u;
  R(5)=R(2);
  ST32(R(15)+4,R(2));
  R(6)+=0xcu;
  { c->pr=0x8c03233au; R(4)=R(13); f_8c011bb6(c); }
  {  goto L8c0324a2; }
L8c03233e:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03234au; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c011bccu;
  R(5)+=0x4u;
  ST32(R(15),R(0));
  R(6)+=0xcu;
  { c->pr=0x8c03235au; R(4)=R(13); f_8c011bcc(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  { uint32_t tg=R(11); c->pr=0x8c032364u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c011bb6u;
  R(6)+=0xcu;
  { c->pr=0x8c032370u; R(4)=R(13); f_8c011bb6(c); }
  {  goto L8c0324a2; }
L8c032374:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032380u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  ST32(R(15),R(0));
  { uint32_t tg=R(11); c->pr=0x8c03238cu; R(4)+=0x1cu; sh4_call(c,tg); }
  R(3)=0x8c011b92u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c032396u; R(4)=R(13); f_8c011b92(c); }
  {  goto L8c0324a2; }
L8c03239a:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0323a6u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  ST32(R(15),R(0));
  { uint32_t tg=R(11); c->pr=0x8c0323b2u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(3)=0x8c011b42u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0323bcu; R(4)=R(13); f_8c011b42(c); }
  {  goto L8c0324a2; }
L8c0323c0:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0323ccu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c011be8u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+28);
  { c->pr=0x8c0323d6u; R(4)=R(13); f_8c011be8(c); }
  {  goto L8c0324a2; }
L8c0323da:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0323e6u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c032420; }
  R(0)=0x1cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c032428; }
L8c032420:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c032428:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032432u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c032442; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c03244a; }
L8c032442:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c03244a:;
  R(2)=0x8c011d40u;
  R(5)=0x0u;
  R(6)=0x1u;
  { c->pr=0x8c032454u; R(4)=R(13); f_8c011d40(c); }
  {  goto L8c0324a2; }
L8c032458:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032464u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c0120cau;
  ST32(R(15),R(0));
  { c->pr=0x8c03246cu; R(4)=R(13); f_8c0120ca(c); }
  {  goto L8c0324a2; }
L8c032470:;
  R(2)=0x8c0120d2u;
  { c->pr=0x8c032476u; R(4)=R(13); f_8c0120d2(c); }
  {  goto L8c0324a6; }
L8c03247a:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032486u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c03249a; }
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c03249c; }
L8c03249a:;
  R(5)=LD32(R(15)+28);
L8c03249c:;
  R(2)=0x8c012000u;
  { c->pr=0x8c0324a2u;  f_8c012000(c); }
L8c0324a2:;
  { R(0)=LD32(R(15)); goto L8c0324a8; }
L8c0324a6:;
  R(0)=R(14);
L8c0324a8:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0322a0(SH4Ctx *c) {
  R(0)=LD32(R(15));
  R(11)=0x8c0723e0u;
  R(1)=0x8du;
  R(0)-=R(1);
  R(1)=0xau;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0322b2;
  {  goto L8c0324a6; }
L8c0322b2:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0322c4u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0322beu+R(0));  switch(tg){ case 0x8c0322d8u: goto L8c0322d8; case 0x8c0322feu: goto L8c0322fe; case 0x8c03233eu: goto L8c03233e; case 0x8c032374u: goto L8c032374; case 0x8c03239au: goto L8c03239a; case 0x8c0323c0u: goto L8c0323c0; case 0x8c0323dau: goto L8c0323da; case 0x8c032458u: goto L8c032458; case 0x8c032470u: goto L8c032470; case 0x8c03247au: goto L8c03247a; default: sh4_bad_jump(c,0x8c0322bau,tg); return; } }
L8c0322d8:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(3); c->pr=0x8c0322e4u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  ST32(R(15),R(0));
  { uint32_t tg=R(11); c->pr=0x8c0322f0u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(3)=0x8c011b66u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0322fau; R(4)=R(13); f_8c011b66(c); }
  {  goto L8c0324a2; }
L8c0322fe:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03230au; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c011bccu;
  R(5)+=0x4u;
  ST32(R(15),R(0));
  R(6)+=0xcu;
  { c->pr=0x8c03231au; R(4)=R(13); f_8c011bcc(c); }
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c03232a;
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(2)=c->fpul; goto L8c03232c; }
L8c03232a:;
  R(2)=LD32(R(15)+28);
L8c03232c:;
  R(6)=R(15);
  R(3)=0x8c011bb6u;
  R(5)=R(2);
  ST32(R(15)+4,R(2));
  R(6)+=0xcu;
  { c->pr=0x8c03233au; R(4)=R(13); f_8c011bb6(c); }
  {  goto L8c0324a2; }
L8c03233e:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c03234au; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c011bccu;
  R(5)+=0x4u;
  ST32(R(15),R(0));
  R(6)+=0xcu;
  { c->pr=0x8c03235au; R(4)=R(13); f_8c011bcc(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  { uint32_t tg=R(11); c->pr=0x8c032364u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(3)=0x8c011bb6u;
  R(6)+=0xcu;
  { c->pr=0x8c032370u; R(4)=R(13); f_8c011bb6(c); }
  {  goto L8c0324a2; }
L8c032374:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032380u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  ST32(R(15),R(0));
  { uint32_t tg=R(11); c->pr=0x8c03238cu; R(4)+=0x1cu; sh4_call(c,tg); }
  R(3)=0x8c011b92u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c032396u; R(4)=R(13); f_8c011b92(c); }
  {  goto L8c0324a2; }
L8c03239a:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0323a6u; R(4)=R(12); sh4_call(c,tg); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0xcu;
  ST32(R(15),R(0));
  { uint32_t tg=R(11); c->pr=0x8c0323b2u; R(4)+=0x1cu; sh4_call(c,tg); }
  R(3)=0x8c011b42u;
  R(5)=R(15);
  R(5)+=0xcu;
  { c->pr=0x8c0323bcu; R(4)=R(13); f_8c011b42(c); }
  {  goto L8c0324a2; }
L8c0323c0:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0323ccu; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c011be8u;
  ST32(R(15),R(0));
  R(5)=LD32(R(15)+28);
  { c->pr=0x8c0323d6u; R(4)=R(13); f_8c011be8(c); }
  {  goto L8c0324a2; }
L8c0323da:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c0323e6u; R(4)=R(12); sh4_call(c,tg); }
  R(14)=R(0);
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(2)=LD32(R(14)+4); if(k) goto L8c032420; }
  R(0)=0x1cu;
  { fp_ld(c,15,R(0)+R(15)); goto L8c032428; }
L8c032420:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
L8c032428:;
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032432u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c032442; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c03244a; }
L8c032442:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c03244a:;
  R(2)=0x8c011d40u;
  R(5)=0x0u;
  R(6)=0x1u;
  { c->pr=0x8c032454u; R(4)=R(13); f_8c011d40(c); }
  {  goto L8c0324a2; }
L8c032458:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032464u; R(4)=R(12); sh4_call(c,tg); }
  R(3)=0x8c0120cau;
  ST32(R(15),R(0));
  { c->pr=0x8c03246cu; R(4)=R(13); f_8c0120ca(c); }
  {  goto L8c0324a2; }
L8c032470:;
  R(2)=0x8c0120d2u;
  { c->pr=0x8c032476u; R(4)=R(13); f_8c0120d2(c); }
  {  goto L8c0324a6; }
L8c03247a:;
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032486u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; R(4)=R(13); if(k) goto L8c03249a; }
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(15));
  fp_ftrc(c,3);
  { R(5)=c->fpul; goto L8c03249c; }
L8c03249a:;
  R(5)=LD32(R(15)+28);
L8c03249c:;
  R(2)=0x8c012000u;
  { c->pr=0x8c0324a2u;  f_8c012000(c); }
L8c0324a2:;
  { R(0)=LD32(R(15)); goto L8c0324a8; }
L8c0324a6:;
  R(0)=R(14);
L8c0324a8:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032420(SH4Ctx *c) {
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,15,3);
  R(6)=R(15);
  R(5)=R(14);
  R(6)+=0x1cu;
  { uint32_t tg=R(2); c->pr=0x8c032432u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; fp_mov(c,4,15); if(k) goto L8c032442; }
  R(0)=0x1cu;
  { fp_ld(c,5,R(0)+R(15)); goto L8c03244a; }
L8c032442:;
  R(3)=LD32(R(15)+28);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,5,3);
L8c03244a:;
  R(2)=0x8c011d40u;
  R(5)=0x0u;
  R(6)=0x1u;
  { c->pr=0x8c032454u; R(4)=R(13); f_8c011d40(c); }
  {  goto L8c0324a2; }
L8c0324a2:;
  { R(0)=LD32(R(15)); goto L8c0324a8; }
L8c0324a8:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0324b8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(5)+=0xfffffff4u;
  R(5)=LD32(R(5));
  R(0)=R(5);
  c->t=(int32_t)R(0)==121;
  if(c->t) goto L8c0324d2;
  c->t=(int32_t)R(0)==122;
  if(c->t) goto L8c0324f6;
  {  goto L8c0324fc; }
L8c0324d2:;
  R(6)=R(15);
  R(3)=LD32(R(14)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0324dcu; R(5)=R(14); sh4_call(c,tg); }
  R(3)=0x8c071ce0u;
  R(4)=R(15);
  ST32(R(15),R(0));
  { c->pr=0x8c0324e6u; R(4)+=0x4u; f_8c071ce0(c); }
  R(2)=0x8c082e60u;
  { c->pr=0x8c0324ecu; R(4)=R(0); f_8c082e60(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0324f6:;
  R(2)=0x8c082e60u;
  { c->pr=0x8c0324fcu; R(4)=0x0u; f_8c082e60(c); }
L8c0324fc:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0324f6(SH4Ctx *c) {
  R(2)=0x8c082e60u;
  { c->pr=0x8c0324fcu; R(4)=0x0u; f_8c082e60(c); }
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032540(SH4Ctx *c) {
  { R(0)=R(5); return; }
}
void f_8c032544(SH4Ctx *c) {
  { R(0)=R(5); return; }
}
void f_8c032548(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=R(5);
  R(3)+=0xfffffff4u;
  R(2)=LD32(R(3));
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0xcu;
  R(5)=R(14);
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(14)+4);
  R(13)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c032568u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(14)=R(0);
  R(6)=R(15);
  R(5)=R(14);
  R(2)=(uint32_t)(int32_t)(int16_t)R(2);
  R(6)+=0xcu;
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+4);
  { uint32_t tg=R(3); c->pr=0x8c03257cu; R(4)=R(13); sh4_call(c,tg); }
  R(2)=LD32(R(15)+12);
  R(14)=R(0);
  R(2)=(uint32_t)(int32_t)(int16_t)R(2);
  ST32(R(15)+4,R(2));
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==59;
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c03259e; }
  R(6)=R(15);
  R(2)=LD32(R(14)+4);
  R(5)=R(14);
  R(6)+=0xcu;
  { uint32_t tg=R(2); c->pr=0x8c032598u; R(4)=R(13); sh4_call(c,tg); }
  R(6)=LD32(R(15)+12);
  R(14)=R(0);
  R(6)=(uint32_t)(int32_t)(int16_t)R(6);
L8c03259e:;
  R(3)=0x8c03aa9au;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0325a6u; R(4)=LD32(R(15)); f_8c03aa9a(c); }
  R(0)=R(14);
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0325b2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c0325c2u; R(6)+=0x4u; sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x8c0326a4u;
  fp_ld(c,4,R(0));
  R(4)=R(15);
  R(0)=0x4u;
  R(3)=0x8c03ab40u;
  R(4)+=0x4u;
  fp_ld(c,3,R(4));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(4));
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,2,2,4);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,2,3,4);
  { uint32_t tg=R(3); c->pr=0x8c0325e6u; fp_st(c,3,R(0)+R(4)); sh4_call(c,tg); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0325f0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(14)+=0xfffffff4u;
  R(13)=R(5);
  R(3)=LD32(R(13)+4);
  R(14)=LD32(R(14));
  R(6)=R(15);
  R(12)=R(4);
  { uint32_t tg=R(3); c->pr=0x8c032610u; R(6)+=0x4u; sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x4u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,15,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c032622u; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(0)=0x4u;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  fp_ld(c,14,R(0)+R(15));
  R(5)=R(13);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c032634u; R(4)=R(12); sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(15));
  R(0)=R(14);
  c->t=(int32_t)R(0)==61;
  if(!c->t) goto L8c03264c;
  R(2)=0x8c03ad40u;
  fp_mov(c,5,14);
  { c->pr=0x8c032648u; fp_mov(c,4,15); f_8c03ad40(c); }
  {  goto L8c032658; }
L8c03264c:;
  c->t=(int32_t)R(0)==60;
  if(!c->t) goto L8c032658;
  R(3)=0x8c03ace8u;
  fp_mov(c,5,14);
  { c->pr=0x8c032658u; fp_mov(c,4,15); f_8c03ace8(c); }
L8c032658:;
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03266a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c03267cu; R(6)+=0x4u; sh4_call(c,tg); }
  R(3)=0x40u;
  ST32(R(15),R(0));
  R(4)=LD32(R(15)+4);
  R(14)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c0326c0;
  R(1)=0x8c03aa7au;
  { c->pr=0x8c03268eu;  f_8c03aa7a(c); }
  {  goto L8c0326f8; }
L8c0326c0:;
  R(2)=0x8c03aa8cu;
  { c->pr=0x8c0326c6u;  f_8c03aa8c(c); }
  R(4)=R(0);
  R(0)=R(14);
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0326de;
  c->t=(int32_t)R(0)==65;
  if(c->t) goto L8c0326e4;
  c->t=(int32_t)R(0)==66;
  if(c->t) goto L8c0326e8;
  c->t=(int32_t)R(0)==67;
  if(c->t) goto L8c0326ee;
  {  goto L8c0326f2; }
L8c0326de:;
  R(3)=0xfffffffeu;
  { R(4)&=R(3); goto L8c0326f2; }
L8c0326e4:;
  { R(1)=0x1u; goto L8c0326f0; }
L8c0326e8:;
  R(2)=0xfffffffdu;
  { R(4)&=R(2); goto L8c0326f2; }
L8c0326ee:;
  R(1)=0x2u;
L8c0326f0:;
  R(4)|=R(1);
L8c0326f2:;
  R(2)=0x8c03aa86u;
  { c->pr=0x8c0326f8u;  f_8c03aa86(c); }
L8c0326f8:;
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0326c0(SH4Ctx *c) {
  R(2)=0x8c03aa8cu;
  { c->pr=0x8c0326c6u;  f_8c03aa8c(c); }
  R(4)=R(0);
  R(0)=R(14);
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c0326de;
  c->t=(int32_t)R(0)==65;
  if(c->t) goto L8c0326e4;
  c->t=(int32_t)R(0)==66;
  if(c->t) goto L8c0326e8;
  c->t=(int32_t)R(0)==67;
  if(c->t) goto L8c0326ee;
  {  goto L8c0326f2; }
L8c0326de:;
  R(3)=0xfffffffeu;
  { R(4)&=R(3); goto L8c0326f2; }
L8c0326e4:;
  { R(1)=0x1u; goto L8c0326f0; }
L8c0326e8:;
  R(2)=0xfffffffdu;
  { R(4)&=R(2); goto L8c0326f2; }
L8c0326ee:;
  R(1)=0x2u;
L8c0326f0:;
  R(4)|=R(1);
L8c0326f2:;
  R(2)=0x8c03aa86u;
  { c->pr=0x8c0326f8u;  f_8c03aa86(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032702(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(13)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(13)=LD32(R(13)+4);
  R(12)=R(4);
  { uint32_t tg=R(13); c->pr=0x8c03271eu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(11)=LD32(R(13)+4);
  R(5)=R(13);
  R(14)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(11); c->pr=0x8c03272eu; R(4)=R(12); sh4_call(c,tg); }
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(13)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c03273eu; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(14)&R(14))==0;
  R(5)=R(0);
  { uint32_t k=c->t; R(6)=LD32(R(15)+4); if(k) goto L8c03277a; }
  c->t=(int32_t)R(13)>=0;
  if(!c->t) goto L8c03277a;
  R(3)=0x1fu;
  c->t=(int32_t)R(13)>(int32_t)R(3);
  if(c->t) goto L8c03277a;
  R(0)=R(6);
  R(7)=0x1u;
  c->t=(int32_t)R(0)==2;
  R(7)=sh4_shad(R(7),R(13));
  { uint32_t k=!c->t; R(4)=LD32(R(14)+44); if(k) goto L8c032762; }
  R(6)=R(7);
  c->t=(R(6)&R(4))==0;
  R(6)=c->t;
L8c032762:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c032770;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c032776;
  {  goto L8c032778; }
L8c032770:;
  R(7)=~R(7);
  { R(4)&=R(7); goto L8c032778; }
L8c032776:;
  R(4)|=R(7);
L8c032778:;
  ST32(R(14)+44,R(4));
L8c03277a:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0327c0(SH4Ctx *c) {
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
  { uint32_t tg=R(13); c->pr=0x8c0327d8u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(14)=LD32(R(15)+8);
  R(6)+=0x8u;
  { uint32_t tg=R(3); c->pr=0x8c0327e8u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=(int32_t)R(14)>=0;
  R(5)=R(0);
  { uint32_t k=!c->t; R(6)=LD32(R(15)+8); if(k) goto L8c03282a; }
  R(2)=0x1fu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(c->t) goto L8c03282a;
  R(0)=R(6);
  R(7)=0x8c123b08u;
  c->t=(int32_t)R(0)==2;
  R(4)=0x1u;
  { uint32_t k=!c->t; R(4)=sh4_shad(R(4),R(14)); if(k) goto L8c03280a; }
  R(0)=0x60u;
  R(6)=LD32(R(7)+R(0));
  c->t=(R(6)&R(4))==0;
  R(6)=c->t;
L8c03280a:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c032818;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c032822;
  {  goto L8c03282a; }
L8c032818:;
  R(0)=0x60u;
  R(3)=LD32(R(7)+R(0));
  R(4)=~R(4);
  { R(3)&=R(4); goto L8c032828; }
L8c032822:;
  R(0)=0x60u;
  R(3)=LD32(R(7)+R(0));
  R(3)|=R(4);
L8c032828:;
  ST32(R(7)+R(0),R(3));
L8c03282a:;
  R(0)=R(5);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032860(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(5);
  R(6)=R(15);
  R(6)+=0x4u;
  ST32(R(15),R(5));
  R(14)=LD32(R(14)+4);
  R(12)=R(4);
  { uint32_t tg=R(14); c->pr=0x8c03287cu; R(4)=R(12); sh4_call(c,tg); }
  R(13)=LD32(R(15)+4);
  R(14)=R(0);
  R(6)=R(15);
  R(11)=LD32(R(14)+4);
  R(13)=LD32(R(13)+4);
  R(5)=R(14);
  R(6)+=0x4u;
  R(13)=LD32(R(13)+12);
  { uint32_t tg=R(11); c->pr=0x8c032890u; R(4)=R(12); sh4_call(c,tg); }
  R(11)=R(0);
  R(6)=R(15);
  R(3)=LD32(R(11)+4);
  R(5)=R(11);
  R(14)=LD32(R(15)+4);
  R(6)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0328a0u; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(13)&R(13))==0;
  R(5)=R(0);
  { uint32_t k=c->t; R(6)=LD32(R(15)+4); if(k) goto L8c0328e8; }
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0328e8;
  R(3)=0x1fu;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(c->t) goto L8c0328e8;
  R(12)=LD32(R(13)+4);
  R(7)=0x1u;
  R(0)=0xf8u;
  R(12)=LD32(R(12));
  R(4)=LD32(R(12)+R(0));
  R(0)=R(6);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(7)=sh4_shad(R(7),R(14)); if(k) goto L8c0328ca; }
  R(6)=R(7);
  c->t=(R(6)&R(4))==0;
  R(6)=c->t;
L8c0328ca:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0328d8;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0328de;
  {  goto L8c0328e0; }
L8c0328d8:;
  R(7)=~R(7);
  { R(4)&=R(7); goto L8c0328e0; }
L8c0328de:;
  R(4)|=R(7);
L8c0328e0:;
  R(0)=0xf8u;
  R(6)=R(4);
  ST32(R(13)+44,R(4));
  ST32(R(12)+R(0),R(6));
L8c0328e8:;
  R(0)=R(5);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032920(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(4)+8);
  R(6)=0x0u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)=R(4); if(k) goto L8c03293e; }
  R(0)=(int32_t)(int16_t)LD16(R(4)+8);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(0)&0xFFFF;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  { R(0)+=R(4); return; }
L8c03293e:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c032970;
L8c032946:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c032966;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==76;
  if(!c->t) goto L8c032958;
  { R(6)+=0x1u; goto L8c032966; }
L8c032958:;
  c->t=(int32_t)R(0)==77;
  if(!c->t) goto L8c032966;
  R(6)+=0xffffffffu;
  c->t=(int32_t)R(6)>0;
  if(c->t) goto L8c032966;
  { R(5)+=0xcu; goto L8c032970; }
L8c032966:;
  R(5)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c032946;
L8c032970:;
  R(3)=0x8c067940u;
  R(1)=R(5);
  R(1)-=R(4);
  { c->pr=0x8c03297au; R(0)=0xcu; f_8c067940(c); }
  ST16(R(4)+8,R(0));
  R(0)=R(5);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c03293e(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c032970;
L8c032946:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c032966;
  R(0)=LD32(R(5));
  c->t=(int32_t)R(0)==76;
  if(!c->t) goto L8c032958;
  { R(6)+=0x1u; goto L8c032966; }
L8c032958:;
  c->t=(int32_t)R(0)==77;
  if(!c->t) goto L8c032966;
  R(6)+=0xffffffffu;
  c->t=(int32_t)R(6)>0;
  if(c->t) goto L8c032966;
  { R(5)+=0xcu; goto L8c032970; }
L8c032966:;
  R(5)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(5)+11);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c032946;
L8c032970:;
  R(3)=0x8c067940u;
  R(1)=R(5);
  R(1)-=R(4);
  { c->pr=0x8c03297au; R(0)=0xcu; f_8c067940(c); }
  ST16(R(4)+8,R(0));
  R(0)=R(5);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c032984(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=0x8c0c5194u;
  R(13)=R(5);
  R(0)=0x8c140bf8u;
  R(12)=R(5);
  R(3)=LD32(R(14));
  R(12)+=0xfffffff4u;
  R(6)=R(15);
  R(3)<<=2;
  ST32(R(3)+R(0),R(12));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c0329a6u; R(5)=R(13); sh4_call(c,tg); }
  R(5)=R(0);
  R(0)=LD32(R(14));
  R(3)=LD32(R(15));
  R(4)=0x8c140a68u;
  R(0)<<=2;
  ST32(R(4)+R(0),R(3));
  R(0)=LD32(R(14));
  R(0)<<=2;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0329c4;
  { c->pr=0x8c0329c0u; R(4)=R(12); f_8c032920(c); }
  {  goto L8c0329d4; }
L8c0329c4:;
  R(2)=LD32(R(14));
  R(0)=0x8c140b30u;
  R(2)<<=2;
  ST32(R(2)+R(0),R(5));
  R(0)=R(5);
  R(3)=LD32(R(14));
  R(3)+=0x1u;
  ST32(R(14),R(3));
L8c0329d4:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0329e0(SH4Ctx *c) {
  R(4)=0x8c0c5194u;
  R(6)=LD32(R(4));
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c032a14;
  R(0)=R(6);
  R(0)+=0xffffffffu;
  R(7)=0x8c140a68u;
  R(0)<<=2;
  R(3)=LD32(R(7)+R(0));
  R(3)+=0xffffffffu;
  ST32(R(7)+R(0),R(3));
  R(0)=LD32(R(4));
  R(0)+=0xffffffffu;
  R(0)<<=2;
  R(3)=LD32(R(7)+R(0));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c032a0e;
  R(0)=LD32(R(4));
  R(1)=0x8c140b30u;
  R(0)+=0xffffffffu;
  R(0)<<=2;
  { R(0)=LD32(R(1)+R(0)); return; }
L8c032a0e:;
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  ST32(R(4),R(3));
L8c032a14:;
  R(0)=R(5);
  {  return; }
}
void f_8c032a0e(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  ST32(R(4),R(3));
  R(0)=R(5);
  {  return; }
}
void f_8c032a40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=R(5);
  R(6)=R(15);
  ST32(R(15),R(5));
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c032a56u; R(6)+=0x4u; sh4_call(c,tg); }
  R(13)=0x8c0c5194u;
  R(14)=LD32(R(15)+4);
  R(12)=LD32(R(13));
  R(3)=R(12);
  R(3)+=0xffffffffu;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c032a68;
  R(14)=R(12);
  R(14)+=0xffffffffu;
L8c032a68:;
  R(12)-=R(14);
  R(0)=0x8c140bf8u;
  R(4)=R(12);
  R(4)+=0xffffffffu;
  R(4)<<=2;
  { c->pr=0x8c032a76u; R(4)=LD32(R(4)+R(0)); f_8c032920(c); }
  R(2)=LD32(R(13));
  R(14)+=0x1u;
  R(2)-=R(14);
  ST32(R(13),R(2));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032a8a(SH4Ctx *c) {
  { R(0)=R(5); return; }
}
void f_8c032ac0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(14)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(1)=0x204u;
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c032ae0; }
  {  goto L8c032bc0; }
L8c032ae0:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x20u;
  { uint32_t tg=R(3); c->pr=0x8c032aecu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+32);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x20u;
  ST32(R(15),R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c032afeu; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(15);
  R(4)+=0x20u;
  fp_ld(c,3,R(4));
  R(13)=R(0);
  R(0)=0x14u;
  R(6)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x18u;
  R(5)=R(13);
  R(6)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c032b26u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(15);
  R(4)+=0x20u;
  fp_ld(c,3,R(4));
  R(13)=R(0);
  R(0)=0x8u;
  R(6)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  R(5)=R(13);
  R(6)+=0x20u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(12)=LD32(R(13)+4);
  { uint32_t tg=R(12); c->pr=0x8c032b4eu; R(4)=R(14); sh4_call(c,tg); }
  R(4)=LD32(R(15)+32);
  R(12)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c032b60; }
  R(2)=0x8c05a3fau;
  { c->pr=0x8c032b5eu;  f_8c05a3fa(c); }
  R(13)=R(0);
L8c032b60:;
  R(6)=R(15);
  R(3)=LD32(R(12)+4);
  R(5)=R(12);
  R(6)+=0x20u;
  { uint32_t tg=R(3); c->pr=0x8c032b6cu; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+4,R(0));
  R(0)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c032b7a;
  R(0)=0x20u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c032b82; }
L8c032b7a:;
  R(3)=LD32(R(15)+32);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c032b82:;
  R(2)=0x8c0c4650u;
  R(5)=R(15);
  R(3)=0x8c022520u;
  R(6)=R(15);
  R(5)+=0x14u;
  ST32(R(2),R(14));
  R(6)+=0x8u;
  R(7)=R(13);
  { c->pr=0x8c032b96u; R(4)=LD32(R(15)); f_8c022520(c); }
  { R(0)=LD32(R(15)+4); goto L8c032bc2; }
L8c032bc0:;
  R(0)=R(13);
L8c032bc2:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032bc0(SH4Ctx *c) {
  R(0)=R(13);
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032bce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(5);
  R(5)+=0xfffffff4u;
  R(5)=LD32(R(5));
  R(1)=0x205u;
  R(0)=R(5);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c032c08;
  R(3)=LD32(R(14)+4);
  R(6)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c032beau; R(5)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  R(5)=R(0);
  R(4)=0x8c0c5198u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(0)=R(5); if(k) goto L8c032bfc; }
  R(3)=0x1u;
  { ST8(R(4),R(3)); goto L8c032c00; }
L8c032bfc:;
  R(1)=0x0u;
  ST8(R(4),R(1));
L8c032c00:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c032c08:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032c08(SH4Ctx *c) {
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032c40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(14)=R(4);
  R(4)=R(5);
  R(4)+=0xfffffff4u;
  R(1)=0x206u;
  R(4)=LD32(R(4));
  R(0)=R(4);
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c032c6e; }
  R(1)=0x207u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c032d20;
  R(1)=0x208u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c032c6a;
  {  goto L8c032d72; }
L8c032c6a:;
  {  goto L8c032db2; }
L8c032c6e:;
  R(6)=R(15);
  R(3)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(3); c->pr=0x8c032c7au; R(4)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15)+24);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x18u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c032c8cu; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(15);
  R(4)+=0x18u;
  fp_ld(c,3,R(4));
  R(13)=R(0);
  R(0)=0xcu;
  R(6)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x10u;
  R(5)=R(13);
  R(6)+=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c032cb4u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c071ce0u;
  R(4)=R(15);
  R(13)=R(0);
  { c->pr=0x8c032cbeu; R(4)+=0x18u; f_8c071ce0(c); }
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x18u;
  ST32(R(15),R(0));
  R(3)=LD32(R(13)+4);
  { uint32_t tg=R(3); c->pr=0x8c032cccu; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=LD32(R(15)+36);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c032cda;
  R(0)=0x18u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c032ce2; }
L8c032cda:;
  R(3)=LD32(R(15)+24);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c032ce2:;
  R(3)=0x8c025562u;
  R(5)=R(15);
  R(6)=LD32(R(15));
  R(5)+=0xcu;
  { c->pr=0x8c032ceeu; R(4)=LD32(R(15)+4); f_8c025562(c); }
  {  goto L8c032dae; }
L8c032d20:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c032d2cu; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x18u;
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c032d3eu; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x18u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c032d50u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=LD32(R(15)+36);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c032d5e;
  R(0)=0x18u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c032d66; }
L8c032d5e:;
  R(3)=LD32(R(15)+24);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c032d66:;
  R(3)=0x8c025780u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c032d6eu; R(4)=LD32(R(15)); f_8c025780(c); }
  {  goto L8c032dae; }
L8c032d72:;
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c032d7eu; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x18u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c032d90u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x18u;
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c032da2u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x8c02594cu;
  ST32(R(15)+8,R(0));
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+24);
  { c->pr=0x8c032daeu; R(4)=LD32(R(15)+4); f_8c02594c(c); }
L8c032dae:;
  { R(0)=LD32(R(15)+8); goto L8c032db4; }
L8c032db2:;
  R(0)=R(13);
L8c032db4:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032d20(SH4Ctx *c) {
  R(6)=R(15);
  R(2)=LD32(R(13)+4);
  R(5)=R(13);
  R(6)+=0x18u;
  { uint32_t tg=R(2); c->pr=0x8c032d2cu; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x18u;
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c032d3eu; R(4)=R(14); sh4_call(c,tg); }
  R(3)=LD32(R(15)+24);
  R(13)=R(0);
  R(6)=R(15);
  R(5)=R(13);
  R(6)+=0x18u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(13)+4);
  { uint32_t tg=R(2); c->pr=0x8c032d50u; R(4)=R(14); sh4_call(c,tg); }
  ST32(R(15)+8,R(0));
  R(0)=LD32(R(15)+36);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c032d5e;
  R(0)=0x18u;
  { fp_ld(c,4,R(0)+R(15)); goto L8c032d66; }
L8c032d5e:;
  R(3)=LD32(R(15)+24);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,4,3);
L8c032d66:;
  R(3)=0x8c025780u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c032d6eu; R(4)=LD32(R(15)); f_8c025780(c); }
  {  goto L8c032dae; }
L8c032dae:;
  { R(0)=LD32(R(15)+8); goto L8c032db4; }
L8c032db4:;
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032dfa(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c032e12;
  R(3)=0x8c064e90u;
  R(6)=0x4au;
  R(5)=0x8c0b9764u;
  { c->pr=0x8c032e0eu; R(4)=0x24u; f_8c064e90(c); }
  {  goto L8c032e1c; }
L8c032e12:;
  R(1)=0x8c0199c4u;
  R(6)=0x4au;
  R(5)=0x8c0b9764u;
  { c->pr=0x8c032e1cu; R(4)=0x24u; f_8c0199c4(c); }
L8c032e1c:;
  R(4)=R(0);
  R(0)=0x10u;
  R(5)=0x0u;
  ST32(R(4),R(5));
  ST32(R(4)+4,R(5));
  ST32(R(4)+8,R(5));
  ST32(R(4)+12,R(5));
  ST8(R(4)+R(0),R(5));
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(5));
  ST32(R(4)+32,R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c032e60(SH4Ctx *c) {
  R(2)=0x8c0c7a04u;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c032e7c;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0c7a08u;
  R(5)=0x8c0c7a18u;
  { c->pr=0x8c032e78u;  f_8c0124a6(c); }
  R(2)=0x8c0c7a04u;
  ST8(R(2),R(0));
L8c032e7c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c032e90(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x10u;
  R(14)=LD32(R(4)+4);
  R(3)=0x1u;
  R(14)=LD32(R(14)+12);
  R(14)=LD32(R(14));
  ST8(R(14)+R(0),R(3));
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c032eac;
  R(3)=0x8c0734f2u;
  R(5)=LD32(R(14)+4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0734f2(c); return; } }
L8c032eac:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032ee0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x10u;
  R(14)=LD32(R(4)+4);
  R(3)=0x0u;
  R(14)=LD32(R(14)+12);
  R(14)=LD32(R(14));
  ST8(R(14)+R(0),R(3));
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c032efc;
  R(3)=0x8c0734f2u;
  R(5)=LD32(R(14)+8);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0734f2(c); return; } }
L8c032efc:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c032f02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; ST32(R(15)+8,R(5)); if(k) goto L8c032ff4; }
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c032ff4;
  R(4)=LD32(R(14)+12);
  R(3)=LD32(R(4)+8);
  ST32(R(15),R(3));
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c032f38; }
  R(9)=LD32(R(14));
  R(9)=LD32(R(9)+8);
  { R(9)=LD32(R(9)); goto L8c032f3c; }
L8c032f38:;
  R(9)=LD32(R(14)+12);
  R(9)=LD32(R(9)+4);
L8c032f3c:;
  R(3)=LD32(R(14));
  R(10)=0x8c0724e0u;
  R(2)=LD32(R(3)+8);
  R(0)=(int32_t)(int8_t)LD8(R(2)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c032ff4;
L8c032f4a:;
  R(12)=LD32(R(14)+12);
  R(3)=R(13)&0xFF;
  R(3)<<=2;
  R(12)=LD32(R(12));
  R(3)<<=2;
  R(12)=LD32(R(12));
  R(12)=LD32(R(12)+4);
  R(12)+=R(3);
  R(12)=LD32(R(12)+4);
  R(0)=R(12);
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c032f86;
  R(5)=LD32(R(14)+12);
  R(3)=R(13)&0xFF;
  R(3)<<=2;
  R(5)=LD32(R(5));
  R(3)<<=2;
  R(5)=LD32(R(5));
  R(5)=LD32(R(5)+4);
  R(5)+=R(3);
  ST32(R(15)+4,R(5));
  R(3)=0x0u;
  R(4)=LD32(R(15));
  R(5)=LD32(R(5));
  R(4)+=R(5);
  R(5)+=R(9);
  ST8(R(4),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  { ST8(R(4)+1,R(0)); goto L8c032fe4; }
L8c032f86:;
  R(4)=LD32(R(14)+12);
  R(8)=R(13)&0xFF;
  R(8)<<=2;
  R(3)=LD32(R(15)+8);
  R(4)=LD32(R(4));
  R(8)<<=2;
  R(4)=LD32(R(4));
  R(4)=LD32(R(4)+4);
  R(4)+=R(8);
  R(4)=LD32(R(4)+12);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(c->t) goto L8c032fe4;
  R(11)=LD32(R(14)+12);
  R(3)=0x8c0707e4u;
  R(11)=LD32(R(11));
  R(11)=LD32(R(11));
  R(11)=LD32(R(11)+4);
  R(11)+=R(8);
  R(11)=LD32(R(11));
  { c->pr=0x8c032fb0u; R(4)=R(12); f_8c0707e4(c); }
  c->t=(int32_t)R(0)==41;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c032fd0; }
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+12);
  R(2)=LD32(R(3)+8);
  R(3)=LD32(R(1));
  R(0)=LD32(R(3));
  R(1)=LD32(R(0)+4);
  R(8)+=R(1);
  R(3)=LD32(R(8));
  R(8)=LD32(R(2));
  R(8)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(8)+4);
  { R(5)=R(0); goto L8c032fd2; }
L8c032fd0:;
  R(5)=0x0u;
L8c032fd2:;
  { uint32_t tg=R(10); c->pr=0x8c032fd6u;  sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(5)=R(9);
  R(3)=0x8c0685b4u;
  R(6)=R(0);
  R(5)+=R(11);
  { c->pr=0x8c032fe4u; R(4)+=R(11); f_8c0685b4(c); }
L8c032fe4:;
  R(3)=LD32(R(14));
  R(13)+=0x1u;
  R(2)=R(13)&0xFF;
  R(1)=LD32(R(3)+8);
  R(0)=(int32_t)(int8_t)LD8(R(1)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c032f4a;
L8c032ff4:;
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
void f_8c033008(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c033078;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c033078;
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c033060;
  R(6)=LD32(R(14));
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(6)+8);
  ST32(R(15),R(6));
  R(5)=LD32(R(15));
  R(6)=LD32(R(6)+8);
  R(5)=LD32(R(5));
  { R(4)=LD32(R(14)+12); goto L8c03306e; }
L8c033060:;
  R(6)=LD32(R(14));
  R(5)=LD32(R(14)+12);
  R(6)=LD32(R(6)+8);
  R(6)=LD32(R(6)+8);
  ST32(R(15),R(5));
  R(4)=LD32(R(15));
  R(5)=LD32(R(5)+4);
L8c03306e:;
  R(4)=LD32(R(4)+8);
  R(15)+=0x8u;
  R(3)=0x8c0685b4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c033078:;
  R(15)+=0x8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03307e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c03313e;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03313e;
  R(4)=LD32(R(14)+12);
  R(3)=LD32(R(4)+8);
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c0330b2; }
  R(9)=LD32(R(14));
  R(9)=LD32(R(9)+8);
  { R(9)=LD32(R(9)); goto L8c0330b6; }
L8c0330b2:;
  R(9)=LD32(R(14)+12);
  R(9)=LD32(R(9)+4);
L8c0330b6:;
  R(3)=LD32(R(14));
  R(11)=0x8c0724e0u;
  R(2)=LD32(R(3)+8);
  R(8)=0x8c0685b4u;
  R(0)=(int32_t)(int8_t)LD8(R(2)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>0;
  if(!c->t) goto L8c03313e;
L8c0330c6:;
  R(4)=LD32(R(14)+12);
  R(3)=R(13)&0xFF;
  R(3)<<=2;
  R(4)=LD32(R(4));
  R(3)<<=2;
  R(4)=LD32(R(4));
  R(4)=LD32(R(4)+4);
  R(4)+=R(3);
  R(12)=LD32(R(4)+4);
  R(4)=LD32(R(4)+12);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03312e;
  R(10)=LD32(R(14)+12);
  R(3)=R(13)&0xFF;
  R(3)<<=2;
  R(10)=LD32(R(10));
  R(3)<<=2;
  R(10)=LD32(R(10));
  ST32(R(15),R(3));
  R(10)=LD32(R(10)+4);
  R(10)+=R(3);
  R(3)=0x8c0707e4u;
  R(10)=LD32(R(10));
  { c->pr=0x8c0330f8u; R(4)=R(12); f_8c0707e4(c); }
  c->t=(int32_t)R(0)==41;
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c03311c; }
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+12);
  R(2)=LD32(R(3)+8);
  R(3)=LD32(R(1));
  R(2)=LD32(R(2));
  R(0)=LD32(R(3));
  R(3)=LD32(R(15));
  R(1)=LD32(R(0)+4);
  R(1)+=R(3);
  R(3)=LD32(R(1));
  R(2)+=R(3);
  ST32(R(15),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(2)+4);
  { R(5)=R(0); goto L8c03311e; }
L8c03311c:;
  R(5)=0x0u;
L8c03311e:;
  { uint32_t tg=R(11); c->pr=0x8c033122u;  sh4_call(c,tg); }
  R(4)=LD32(R(15)+4);
  R(5)=R(9);
  R(6)=R(0);
  R(5)+=R(10);
  { uint32_t tg=R(8); c->pr=0x8c03312eu; R(4)+=R(10); sh4_call(c,tg); }
L8c03312e:;
  R(2)=LD32(R(14));
  R(13)+=0x1u;
  R(3)=R(13)&0xFF;
  R(1)=LD32(R(2)+8);
  R(0)=(int32_t)(int8_t)LD8(R(1)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c0330c6;
L8c03313e:;
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
void f_8c033180(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(6);
  R(0)=R(5);
  R(14)=R(4);
  ST32(R(15),R(5));
  R(1)=0x18u;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c0331fe;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0331a4u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0331a2u+R(0));  switch(tg){ case 0x8c0331d4u: goto L8c0331d4; case 0x8c0331e4u: goto L8c0331e4; case 0x8c0331e8u: goto L8c0331e8; case 0x8c0331ecu: goto L8c0331ec; case 0x8c0331feu: goto L8c0331fe; default: sh4_bad_jump(c,0x8c03319eu,tg); return; } }
L8c0331d4:;
  R(4)=R(14);
  R(5)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c05ebc8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05ebc8(c); return; } }
L8c0331e4:;
  {  goto L8c033258; }
L8c0331e8:;
  {  goto L8c033258; }
L8c0331ec:;
  R(4)=R(14);
  R(5)=0x1u;
  R(6)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c05eac0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05eac0(c); return; } }
L8c0331fe:;
  R(3)=0x8c0724e0u;
  R(5)=0x0u;
  { c->pr=0x8c033206u; R(4)=LD32(R(15)); f_8c0724e0(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c033218; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c033228;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c033238;
  {  goto L8c033248; }
L8c033218:;
  R(4)=R(14);
  R(5)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c05eaecu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05eaec(c); return; } }
L8c033228:;
  R(4)=R(14);
  R(5)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c05eb10u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05eb10(c); return; } }
L8c033238:;
  R(4)=R(14);
  R(5)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c05eb34u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05eb34(c); return; } }
L8c033248:;
  R(4)=R(14);
  R(6)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c05ed6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05ed6c(c); return; } }
L8c033258:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0332a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  c->t=(R(12)&R(12))==0;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c033364;
  R(2)=LD32(R(12)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c033364;
  R(3)=LD32(R(12));
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c033364;
  R(3)=LD32(R(12));
  R(9)=0x0u;
  R(2)=LD32(R(3)+8);
  R(0)=(int32_t)(int8_t)LD8(R(2)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(10)=R(9); if(k) goto L8c033364; }
L8c0332d4:;
  R(11)=LD32(R(12)+12);
  R(3)=R(10)&0xFF;
  R(3)<<=2;
  R(11)=LD32(R(11));
  R(3)<<=2;
  R(11)=LD32(R(11));
  R(11)=LD32(R(11)+4);
  R(11)+=R(3);
  R(0)=(int32_t)(int16_t)LD16(R(11)+8);
  R(11)=R(0);
  R(3)=R(11)&0xFFFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c033354;
  R(4)=LD32(R(12)+12);
  R(3)=R(10)&0xFF;
  R(3)<<=2;
  R(2)=0x8c0707e4u;
  R(5)=LD32(R(4));
  R(3)<<=2;
  R(14)=LD32(R(4)+8);
  R(5)=LD32(R(5));
  R(5)=LD32(R(5)+4);
  R(5)+=R(3);
  R(3)=LD32(R(5));
  R(13)=LD32(R(5)+4);
  R(14)+=R(3);
  { c->pr=0x8c03330cu; R(4)=R(13); f_8c0707e4(c); }
  c->t=(int32_t)R(0)==41;
  if(!c->t) goto L8c03334c;
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(8)=LD32(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)>0;
  { uint32_t k=!c->t; R(13)=R(9); if(k) goto L8c033354; }
L8c03331c:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c03332c;
  R(4)=R(13)&0xFF;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  { R(4)+=R(3); goto L8c03332e; }
L8c03332c:;
  R(4)=R(13)&0xFF;
L8c03332e:;
  R(3)=R(14);
  R(3)+=0x8u;
  R(4)<<=2;
  R(6)=R(11);
  R(4)+=R(3);
  { c->pr=0x8c03333cu; R(5)=R(8); f_8c033180(c); }
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(13)+=0x1u;
  R(3)=R(13)&0xFF;
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(0);
  if(!c->t) goto L8c03331c;
  {  goto L8c033354; }
L8c03334c:;
  R(5)=R(13);
  R(6)=R(11);
  { c->pr=0x8c033354u; R(4)=R(14); f_8c033180(c); }
L8c033354:;
  R(3)=LD32(R(12));
  R(10)+=0x1u;
  R(2)=R(10)&0xFF;
  R(1)=LD32(R(3)+8);
  R(0)=(int32_t)(int8_t)LD8(R(1)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(2)>=(int32_t)R(0);
  if(!c->t) goto L8c0332d4;
L8c033364:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033376(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c76fcu;
  R(13)=0x0u;
  { uint32_t k=c->t; ST32(R(3),R(13)); if(k) goto L8c0333a8; }
  R(4)=LD32(R(14)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c033394;
  R(2)=0x8c0740b6u;
  { c->pr=0x8c033394u;  f_8c0740b6(c); }
L8c033394:;
  R(4)=LD32(R(14)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0333a0;
  R(2)=0x8c0740b6u;
  { c->pr=0x8c0333a0u;  f_8c0740b6(c); }
L8c0333a0:;
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  ST32(R(14)+32,R(13));
L8c0333a8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0333b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0333c6;
  { c->pr=0x8c0333beu; R(4)=R(14); f_8c033376(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c03307e(c); return; } }
L8c0333c6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0333cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c033420;
  { c->pr=0x8c0333dau; R(4)=R(14); f_8c033376(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c033008(c); return; } }
L8c033420:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033426(SH4Ctx *c) {
  {  { f_8c033376(c); return; } }
}
void f_8c03342a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; ST32(R(15),R(5)); if(k) goto L8c033448; }
  { c->pr=0x8c03343cu; R(4)=R(14); f_8c033376(c); }
  R(5)=LD32(R(15));
  R(4)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c032f02(c); return; } }
L8c033448:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033450(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(5);
  ST32(R(15),R(5));
  R(14)=LD32(R(4));
  R(5)=0x0u;
  R(2)=R(14);
  R(2)+=R(3);
  R(3)=0x8c0686b8u;
  ST32(R(4),R(2));
  R(6)=LD32(R(15));
  { c->pr=0x8c03346cu; R(4)=R(14); f_8c0686b8(c); }
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033476(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(4);
  R(3)=0x8c0686b8u;
  ST32(R(15)+4,R(5));
  R(5)=0x0u;
  ST32(R(15),R(6));
  R(6)=0xcu;
  R(14)=LD32(R(13));
  { c->pr=0x8c033490u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=LD32(R(13));
  R(2)+=0xcu;
  ST32(R(13),R(2));
  R(2)=0x0u;
  R(3)=LD32(R(15)+4);
  ST32(R(14),R(3));
  ST32(R(14)+4,R(2));
  R(5)=LD32(R(15));
  { c->pr=0x8c0334a4u; R(4)=R(13); f_8c033450(c); }
  ST32(R(14)+8,R(0));
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0334b2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(5);
  R(6)=0x68u;
  R(5)=0x0u;
  ST32(R(15)+4,R(4));
  ST8(R(15)+8,R(0));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(3));
  R(3)=0x8c0686b8u;
  ST32(R(15),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(6);
  R(6)=c->macl;
  ST32(R(15)+12,R(6));
  { c->pr=0x8c0334d6u; R(4)=LD32(R(15)); f_8c0686b8(c); }
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15)+12);
  R(1)=LD32(R(2));
  R(1)+=R(3);
  ST32(R(2),R(1));
  R(0)=LD32(R(15));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0334ea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=R(12)&0xFF;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; R(11)=R(4); if(k) goto L8c033512; }
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(14)=LD32(R(11));
  R(6)=0x8u;
  { c->pr=0x8c03350au; R(4)=R(14); f_8c0686b8(c); }
  R(3)=LD32(R(11));
  R(3)+=0x8u;
  { ST32(R(11),R(3)); goto L8c033540; }
L8c033512:;
  { R(0)=0x0u; goto L8c033576; }
L8c033540:;
  R(0)=R(12);
  R(5)=R(0);
  ST8(R(14)+4,R(0));
  { c->pr=0x8c03354au; R(4)=R(11); f_8c0334b2(c); }
  ST32(R(14),R(0));
  R(0)=0x0u;
  R(6)=0x8c2dd1b0u;
  c->t=(int32_t)R(13)>0;
  R(7)=0x8c2dd1b1u;
  R(5)=R(0);
  ST8(R(14)+5,R(0));
  ST8(R(14)+6,R(0));
  { uint32_t k=!c->t; R(4)=LD32(R(14)); if(k) goto L8c033574; }
L8c03355e:;
  R(2)=(int32_t)(int8_t)LD8(R(7));
  R(0)=0x66u;
  R(5)+=0x1u;
  ST8(R(4)+R(0),R(2));
  R(0)=0x67u;
  R(3)=(int32_t)(int8_t)LD8(R(6));
  ST8(R(4)+R(0),R(3));
  R(3)=R(5)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  { uint32_t k=!c->t; R(4)+=0x68u; if(k) goto L8c03355e; }
L8c033574:;
  R(0)=R(14);
L8c033576:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033582(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(5);
  R(12)=R(4);
  ST8(R(15),R(6));
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c0335be; }
  R(4)=LD32(R(12));
  R(6)=0x18u;
  R(3)=0x8c0686b8u;
  R(14)=R(4);
  { c->pr=0x8c0335a8u; R(5)=0x0u; f_8c0686b8(c); }
  R(2)=LD32(R(12));
  R(2)+=0x18u;
  ST32(R(12),R(2));
  ST32(R(14),R(13));
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+8);
  ST32(R(14)+20,R(2));
  R(5)=(int32_t)(int8_t)LD8(R(15));
  { c->pr=0x8c0335bcu; R(4)=R(12); f_8c0334ea(c); }
  ST32(R(14)+16,R(0));
L8c0335be:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0335cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(4);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0335e6;
  {  goto L8c03373a; }
L8c0335e6:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0335ee;
  {  goto L8c03373a; }
L8c0335ee:;
  R(14)=R(5);
  R(5)+=0x24u;
  ST32(R(15),R(5));
  R(11)=LD32(R(13));
  R(10)=R(11);
  ST32(R(14),R(11));
  R(3)=LD32(R(10));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c033620; }
  R(6)=LD32(R(10));
  R(5)=R(10);
  R(0)=(int32_t)(int8_t)LD8(R(6)+12);
  R(6)=R(0);
  { c->pr=0x8c03360eu; R(4)=R(15); f_8c033582(c); }
  ST32(R(14)+4,R(0));
  R(4)=LD32(R(13)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03362e;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(14)+4);
  ST32(R(3)+20,R(2));
  {  goto L8c033622; }
L8c033620:;
  ST32(R(14)+4,R(12));
L8c033622:;
  R(4)=LD32(R(13)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03362e;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(14)+4);
  ST32(R(3)+20,R(2));
L8c03362e:;
  R(11)+=0x4u;
  R(3)=LD32(R(11));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c033654;
  R(6)=LD32(R(11));
  R(5)=R(11);
  R(0)=(int32_t)(int8_t)LD8(R(6)+12);
  R(6)=R(0);
  { c->pr=0x8c033642u; R(4)=R(15); f_8c033582(c); }
  ST32(R(14)+8,R(0));
  R(4)=LD32(R(13)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c033656;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(14)+8);
  ST32(R(3)+20,R(2));
  {  goto L8c033656; }
L8c033654:;
  ST32(R(14)+8,R(12));
L8c033656:;
  R(11)=0x8c0685b4u;
  ST32(R(14)+12,R(12));
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0336b2;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+8);
  R(1)=LD32(R(2)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0336b2;
  R(6)=LD32(R(14));
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(6)+8);
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(6)+8);
  R(5)+=0x8u;
  { c->pr=0x8c03367cu; R(4)=R(15); f_8c033476(c); }
  R(2)=R(0);
  ST32(R(14)+12,R(0));
  R(1)=LD32(R(13)+12);
  R(3)=LD32(R(2));
  R(2)=LD32(R(1));
  R(0)=LD32(R(2));
  ST32(R(3),R(0));
  R(3)=LD32(R(13)+12);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0336b2;
  R(5)=LD32(R(14));
  R(8)=LD32(R(14)+12);
  R(5)=LD32(R(5)+8);
  R(8)+=0x4u;
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c0336a0u; R(4)=R(15); f_8c033450(c); }
  ST32(R(8),R(0));
  R(6)=LD32(R(14));
  R(5)=LD32(R(13)+12);
  R(6)=LD32(R(6)+8);
  R(4)=LD32(R(14)+12);
  R(5)=LD32(R(5)+4);
  R(6)=LD32(R(6)+8);
  { uint32_t tg=R(11); c->pr=0x8c0336b2u; R(4)=LD32(R(4)+4); sh4_call(c,tg); }
L8c0336b2:;
  R(4)=LD32(R(14)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0336c0;
  R(2)=LD32(R(4)+20);
  R(3)=R(2);
  ST32(R(4)+8,R(2));
  ST32(R(4)+12,R(2));
L8c0336c0:;
  R(4)=LD32(R(14)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0336ce;
  R(3)=LD32(R(4)+20);
  R(2)=R(3);
  ST32(R(4)+8,R(3));
  ST32(R(4)+12,R(3));
L8c0336ce:;
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c033732;
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c033720;
  R(6)=LD32(R(14));
  ST32(R(15)+8,R(6));
  R(6)=LD32(R(6)+8);
  ST32(R(15)+4,R(6));
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(6)+8);
  R(5)=LD32(R(5));
  { R(4)=LD32(R(14)+12); goto L8c03372e; }
L8c033720:;
  R(6)=LD32(R(14));
  R(5)=LD32(R(14)+12);
  R(6)=LD32(R(6)+8);
  R(6)=LD32(R(6)+8);
  ST32(R(15)+4,R(5));
  R(4)=LD32(R(15)+4);
  R(5)=LD32(R(5)+4);
L8c03372e:;
  { uint32_t tg=R(11); c->pr=0x8c033732u; R(4)=LD32(R(4)+8); sh4_call(c,tg); }
L8c033732:;
  ST32(R(14)+20,R(12));
  ST32(R(14)+24,R(12));
  ST32(R(14)+28,R(12));
  ST32(R(14)+32,R(12));
L8c03373a:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033720(SH4Ctx *c) {
  R(6)=LD32(R(14));
  R(5)=LD32(R(14)+12);
  R(6)=LD32(R(6)+8);
  R(6)=LD32(R(6)+8);
  ST32(R(15)+4,R(5));
  R(4)=LD32(R(15)+4);
  R(5)=LD32(R(5)+4);
  { uint32_t tg=R(11); c->pr=0x8c033732u; R(4)=LD32(R(4)+8); sh4_call(c,tg); }
  ST32(R(14)+20,R(12));
  ST32(R(14)+24,R(12));
  ST32(R(14)+28,R(12));
  ST32(R(14)+32,R(12));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03374c(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c0337ac; }
  R(6)=LD32(R(4)+4);
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(5)=0x24u; if(k) goto L8c03376a; }
  R(3)=LD32(R(6)+16);
  R(5)=0x44u;
  R(0)=(int32_t)(int8_t)LD8(R(3)+4);
  R(3)=0x68u;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(5)+=R(0);
L8c03376a:;
  R(6)=LD32(R(4)+8);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c033780;
  R(3)=LD32(R(6)+16);
  R(5)+=0x20u;
  R(0)=(int32_t)(int8_t)LD8(R(3)+4);
  R(3)=0x68u;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(3);
  R(0)=c->macl;
  R(5)+=R(0);
L8c033780:;
  R(2)=LD32(R(4));
  R(3)=LD32(R(2)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0337ac;
  R(3)=LD32(R(4));
  R(2)=LD32(R(3)+8);
  R(1)=LD32(R(2)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0337ac;
  R(3)=LD32(R(4));
  R(5)+=0xcu;
  R(2)=LD32(R(3)+8);
  R(3)=LD32(R(4)+12);
  R(1)=LD32(R(2)+8);
  R(2)=LD32(R(3)+4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(5)+=R(1); if(k) goto L8c0337ac; }
  R(2)=LD32(R(4));
  R(3)=LD32(R(2)+8);
  R(1)=LD32(R(3)+8);
  R(5)+=R(1);
L8c0337ac:;
  { R(0)=R(5); return; }
}
void f_8c0337c4(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0337c8(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)=0x61u; if(k) goto L8c0337ee; }
L8c0337d4:;
  R(5)=(int32_t)(int8_t)LD8(R(4));
  R(6)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  if(!c->t) goto L8c0337e4;
  R(2)=0x7au;
  c->t=(int32_t)R(6)>(int32_t)R(2);
  if(c->t) goto L8c0337e4;
  R(5)+=0xffffffe0u;
L8c0337e4:;
  ST8(R(4),R(5));
  R(4)+=0x1u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0337d4;
L8c0337ee:;
  R(0)=LD32(R(15));
  { R(15)+=0x4u; return; }
}
void f_8c0337f4(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=0x1u;
  R(13)=0x8c0bb9c8u;
L8c0337fa:;
  R(7)=(int32_t)(int8_t)LD8(R(4));
  R(7)=R(7)&0xFF;
  R(0)=R(7)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(6))==0;
  { uint32_t k=c->t; R(1)=(int32_t)(int8_t)LD8(R(5)); if(k) goto L8c03380c; }
  R(7)+=0x20u;
L8c03380c:;
  R(1)=R(1)&0xFF;
  R(0)=R(1)&0xFF;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->t=(R(3)&R(6))==0;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c03381c; }
  R(1)+=0x20u;
L8c03381c:;
  c->t=(R(7)&R(7))==0;
  { uint32_t k=c->t; R(5)+=0x1u; if(k) goto L8c033826; }
  c->t=R(7)==R(1);
  if(c->t) goto L8c0337fa;
L8c033826:;
  R(0)=R(7);
  R(0)-=R(1);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c03382e(SH4Ctx *c) {
  R(6)=R(4);
L8c033830:;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c033830;
  R(0)=(uint32_t)(int32_t)(int8_t)R(5);
L8c033838:;
  R(4)+=0xffffffffu;
  c->t=R(4)==R(6);
  if(c->t) goto L8c033844;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=R(3)==R(0);
  if(!c->t) goto L8c033838;
L8c033844:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=R(3)==R(0);
  if(!c->t) goto L8c03384e;
  { R(0)=R(4); return; }
L8c03384e:;
  R(0)=0x0u;
  {  return; }
}
void f_8c033880(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(6);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(7);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(7)=R(14);
  R(9)=0x8c140ce8u;
  R(5)=R(12);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(9));
  R(6)=R(14);
  R(2)=0x8c076e00u;
  R(7)+=0xcu;
  R(3)+=0x1u;
  R(13)=LD32(R(15)+28);
  ST16(R(9),R(3));
  { c->pr=0x8c0338aeu; R(4)=R(11); f_8c076e00(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c03394e;
  R(2)=LD32(R(14)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03392e;
  R(5)=R(11);
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(4)=LD32(R(14)+24);
  { c->pr=0x8c0338c8u; R(4)=LD32(R(4)); f_8c033880(c); }
  R(5)=R(11);
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(2)=LD32(R(14)+24);
  { c->pr=0x8c0338d6u; R(4)=LD32(R(2)+4); f_8c033880(c); }
  R(5)=R(11);
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(2)=LD32(R(14)+24);
  { c->pr=0x8c0338e4u; R(4)=LD32(R(2)+8); f_8c033880(c); }
  R(5)=R(11);
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(2)=LD32(R(14)+24);
  { c->pr=0x8c0338f2u; R(4)=LD32(R(2)+12); f_8c033880(c); }
  R(5)=R(11);
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(2)=LD32(R(14)+24);
  { c->pr=0x8c033900u; R(4)=LD32(R(2)+16); f_8c033880(c); }
  R(5)=R(11);
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(2)=LD32(R(14)+24);
  { c->pr=0x8c03390eu; R(4)=LD32(R(2)+20); f_8c033880(c); }
  R(5)=R(11);
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(2)=LD32(R(14)+24);
  { c->pr=0x8c03391cu; R(4)=LD32(R(2)+24); f_8c033880(c); }
  R(5)=R(11);
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  R(2)=LD32(R(14)+24);
  { c->pr=0x8c03392au; R(4)=LD32(R(2)+28); f_8c033880(c); }
  { R(15)+=0x20u; goto L8c03394e; }
L8c03392e:;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c03394e;
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(2)=0x64u;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(c->t) goto L8c03394e;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)<<=2;
  ST32(R(10)+R(0),R(14));
  R(3)=(int32_t)(int16_t)LD16(R(13));
  R(0)=0x8c140cdcu;
  R(3)+=0x1u;
  ST16(R(13),R(3));
  R(1)=(int32_t)(int16_t)LD16(R(9));
  ST16(R(0),R(1));
L8c03394e:;
  R(3)=(int32_t)(int16_t)LD16(R(9));
  R(3)+=0xffffffffu;
  ST16(R(9),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033964(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(4)=0x0u;
  R(3)=LD32(R(15)+8);
  R(2)=0x8c140ce8u;
  ST16(R(3),R(4));
  R(3)=0x8c140cdcu;
  ST16(R(3),R(4));
  ST16(R(2),R(4));
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c03398a;
  R(1)=LD32(R(15)+8);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+4);
  { c->pr=0x8c033988u; R(4)=LD32(R(4)); f_8c033880(c); }
  R(15)+=0x4u;
L8c03398a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c033992(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=(int32_t)(int16_t)LD16(R(7));
  { R(13)=0x64u; goto L8c0339bc; }
L8c03399e:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>=(int32_t)R(13);
  if(c->t) goto L8c0339ba;
  R(1)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)=R(5);
  R(1)+=0xffffffffu;
  R(1)<<=2;
  R(3)=LD32(R(1)+R(0));
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  R(2)<<=2;
  ST32(R(2)+R(0),R(3));
  R(0)=R(6);
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(0)+R(2));
L8c0339ba:;
  R(14)+=0xffffffffu;
L8c0339bc:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>0;
  if(!c->t) goto L8c0339ce;
  R(0)=R(2);
  R(0)+=0xffffffffu;
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(6));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c03399e;
L8c0339ce:;
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>=(int32_t)R(13);
  if(c->t) goto L8c0339ec;
  R(0)=(uint32_t)(int32_t)(int16_t)R(14);
  R(0)<<=2;
  ST32(R(15),R(0));
  ST32(R(5)+R(0),R(4));
  R(0)=LD32(R(15));
  fp_st(c,4,R(0)+R(6));
  R(3)=(int32_t)(int16_t)LD16(R(7));
  c->t=(int32_t)R(3)>=(int32_t)R(13);
  if(c->t) goto L8c0339ec;
  R(3)=(int32_t)(int16_t)LD16(R(7));
  R(3)+=0x1u;
  ST16(R(7),R(3));
L8c0339ec:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033a20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(8)=0x8c140ce8u;
  R(14)=R(4);
  R(9)=R(7);
  R(2)=R(15);
  R(3)=(int32_t)(int16_t)LD16(R(8));
  R(7)=R(14);
  R(13)=R(6);
  R(11)=LD32(R(15)+40);
  R(3)+=0x1u;
  R(12)=R(5);
  R(10)=LD32(R(15)+36);
  R(5)=R(13);
  ST16(R(8),R(3));
  R(6)=R(14);
  R(3)=0x8c07773au;
  R(7)+=0xcu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c033a58u; R(4)=R(12); f_8c07773a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c033b02; }
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c033aea;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14)+24);
  R(7)=R(9);
  { c->pr=0x8c033a76u; R(4)=LD32(R(4)); f_8c033a20(c); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+24);
  R(7)=R(9);
  { c->pr=0x8c033a86u; R(4)=LD32(R(2)+4); f_8c033a20(c); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+24);
  R(7)=R(9);
  { c->pr=0x8c033a96u; R(4)=LD32(R(2)+8); f_8c033a20(c); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+24);
  R(7)=R(9);
  { c->pr=0x8c033aa6u; R(4)=LD32(R(2)+12); f_8c033a20(c); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+24);
  R(7)=R(9);
  { c->pr=0x8c033ab6u; R(4)=LD32(R(2)+16); f_8c033a20(c); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+24);
  R(7)=R(9);
  { c->pr=0x8c033ac6u; R(4)=LD32(R(2)+20); f_8c033a20(c); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+24);
  R(7)=R(9);
  { c->pr=0x8c033ad6u; R(4)=LD32(R(2)+24); f_8c033a20(c); }
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=R(12);
  R(6)=R(13);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14)+24);
  R(7)=R(9);
  { c->pr=0x8c033ae6u; R(4)=LD32(R(2)+28); f_8c033a20(c); }
  { R(15)+=0x40u; goto L8c033b02; }
L8c033aea:;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c033b02;
  fp_ld(c,4,R(15));
  R(5)=R(9);
  R(7)=R(11);
  R(6)=R(10);
  { c->pr=0x8c033afcu; R(4)=R(14); f_8c033992(c); }
  R(3)=0x8c140cdcu;
  R(2)=(int32_t)(int16_t)LD16(R(8));
  ST16(R(3),R(2));
L8c033b02:;
  R(1)=(int32_t)(int16_t)LD16(R(8));
  R(1)+=0xffffffffu;
  ST16(R(8),R(1));
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
void f_8c033b1c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(4)=0x0u;
  R(3)=LD32(R(15)+12);
  R(2)=0x8c140ce8u;
  ST16(R(3),R(4));
  R(3)=0x8c140cdcu;
  ST16(R(3),R(4));
  ST16(R(2),R(4));
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c033b46;
  R(1)=LD32(R(15)+12);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+12);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+8);
  { c->pr=0x8c033b44u; R(4)=LD32(R(4)); f_8c033a20(c); }
  R(15)+=0x8u;
L8c033b46:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c033b80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(1)=0x149u;
  R(0)=LD32(c->gbr+84);
  R(5)=0x8c140cfcu;
  R(6)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=0x8c033bc8u;
  fp_ld(c,8,R(0));
  R(6)=R(6)&0xFF;
  R(6)+=0xffffffffu;
  R(0)=R(6);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c033ba4;
  c->fr[7]=0x3F800000u;
  R(7)=0x3b3250u;
  fp_unary(c,0,7);
  { fp_mov(c,6,8); goto L8c033be6; }
L8c033ba4:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==1;
  c->fr[5]=0x00000000u;
  { uint32_t k=!c->t; c->fr[4]=0x3F800000u; if(k) goto L8c033be0; }
  R(7)=0x3b1250u;
  {  goto L8c033be2; }
L8c033be0:;
  R(7)=0x103b1250u;
L8c033be2:;
  fp_mov(c,6,5);
  fp_mov(c,7,4);
L8c033be6:;
  R(3)=0x8c140d1cu;
  R(4)+=0x20u;
  R(14)=0x8c140d2cu;
  R(2)=LD32(R(3));
  fp_mov(c,0,8);
  R(1)=LD32(R(2));
  R(2)=0x8c140d0cu;
  fp_mov(c,2,6);
  {uint32_t v=LD32(R(5));R(5)+=4;R(6)=v;}
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  {uint32_t v=R(1);R(4)-=4;ST32(R(4),v);}
  R(1)=LD32(R(2));
  R(0)=LD32(R(1));
  R(1)=R(14);
  {uint32_t v=R(0);R(4)-=4;ST32(R(4),v);}
  R(0)=0x4u;
  ST32(R(15),R(1));
  R(3)=LD32(R(1));
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,3,7);
  fp_fmac(c,2,3);
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(3)=LD32(R(15));
  R(1)=LD32(R(3));
  fp_ld(c,3,R(1));
  fp_arith(c,2,3,8);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,3,R(6));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  R(3)=0xe0000000u;
  {uint32_t v=R(3);R(4)-=4;ST32(R(4),v);}
  sh4_pref(c,R(4));
  R(3)=0x8c140d20u;
  R(4)+=0x40u;
  fp_mov(c,2,6);
  R(1)=LD32(R(3));
  {uint32_t v=LD32(R(5));R(5)+=4;R(6)=v;}
  R(0)=LD32(R(1));
  R(1)=0x8c140d10u;
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  {uint32_t v=R(0);R(4)-=4;ST32(R(4),v);}
  R(2)=LD32(R(1));
  R(0)=LD32(R(2));
  R(2)=R(14);
  R(2)+=0x4u;
  {uint32_t v=R(0);R(4)-=4;ST32(R(4),v);}
  R(0)=0x4u;
  ST32(R(15),R(2));
  R(3)=LD32(R(2));
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,3,7);
  fp_fmac(c,2,3);
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  R(3)=0xe0000000u;
  fp_ld(c,3,R(2));
  fp_arith(c,2,3,8);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,3,R(6));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  {uint32_t v=R(3);R(4)-=4;ST32(R(4),v);}
  sh4_pref(c,R(4));
  R(4)+=0x40u;
  R(3)=0xff000000u;
  R(6)=R(14);
  R(6)+=0x8u;
  R(0)=0x4u;
  R(5)=LD32(R(5));
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  {uint32_t v=R(7);R(4)-=4;ST32(R(4),v);}
  {uint32_t v=R(3);R(4)-=4;ST32(R(4),v);}
  R(3)=LD32(R(6));
  fp_ld(c,3,R(0)+R(3));
  fp_arith(c,2,3,7);
  fp_fmac(c,6,3);
  R(4)-=fp_sz(c);fp_st(c,6,R(4));
  R(3)=LD32(R(6));
  fp_ld(c,3,R(3));
  R(3)=0xf0000000u;
  fp_arith(c,2,3,8);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,3,R(5));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  {uint32_t v=R(3);R(4)-=4;ST32(R(4),v);}
  sh4_pref(c,R(4));
  R(4)+=0x20u;
  R(0)=R(4);
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c033d00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff84u;
  R(9)=0x8c0fa82cu;
  R(0)=0x40u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x48u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x6cu;
  R(8)=0x3ffffffu;
  ST32(R(15)+R(0),R(6));
  R(0)=0x44u;
  R(1)=0xff00003cu;
  ST32(R(15)+20,R(7));
  R(3)=LD32(R(9)+8);
  R(2)=LD32(R(3));
  R(3)=LD32(R(9));
  R(2)<<=2;
  R(2)+=R(3);
  R(3)=0xe0000000u;
  ST32(R(15)+12,R(2));
  R(4)=LD32(R(2));
  R(2)=0xe0u;
  R(13)=R(4);
  R(13)&=R(8);
  R(13)|=R(3);
  R(3)=0xff000038u;
  R(4)>>=16;
  ST32(R(15)+R(0),R(13));
  R(4)>>=8;
  ST32(R(1),R(4));
  ST32(R(3),R(4));
  R(0)=LD32(c->gbr+84);
  R(4)=R(0);
  R(2)+=R(4);
  ST32(R(15)+16,R(2));
  R(0)=0x78u;
  R(12)=LD32(R(4)+4);
  R(4)=0x8c140cfcu;
  R(6)=0x8c140d2cu;
  R(3)=R(4);
  R(2)=R(3);
  R(2)+=0x4u;
  R(1)=R(6);
  R(4)+=0x8u;
  ST32(R(15)+8,R(3));
  ST32(R(15),R(2));
  ST32(R(15)+4,R(4));
  R(11)=LD32(R(15)+8);
  ST32(R(15)+8,R(11));
  R(14)=LD32(R(15));
  ST32(R(15),R(14));
  R(7)=LD32(R(15)+4);
  ST32(R(15)+4,R(7));
  ST32(R(15)+8,R(11));
  ST32(R(15),R(14));
  ST32(R(15)+4,R(7));
  ST32(R(15)+8,R(11));
  ST32(R(15),R(14));
  ST32(R(15)+4,R(7));
  ST32(R(15)+8,R(11));
  ST32(R(15),R(14));
  ST32(R(15)+4,R(7));
  ST32(R(15)+8,R(11));
  ST32(R(15),R(14));
  ST32(R(15)+4,R(7));
  ST32(R(15)+8,R(11));
  R(5)=0x8c140d0cu;
  ST32(R(15)+R(0),R(1));
  R(0)=0x74u;
  R(4)=0x8c140d1cu;
  R(3)=R(5);
  ST32(R(15)+R(0),R(3));
  R(0)=0x70u;
  R(2)=R(4);
  R(1)=0x8c140d44u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x68u;
  R(3)=0x8c140d50u;
  R(2)=R(6);
  R(2)+=0x4u;
  ST32(R(15),R(14));
  ST32(R(15)+R(0),R(1));
  R(0)=0x64u;
  R(1)=0x8c140d70u;
  R(6)+=0x8u;
  ST32(R(15)+4,R(7));
  ST32(R(15)+56,R(3));
  ST32(R(15)+52,R(2));
  R(2)=R(5);
  ST32(R(15)+R(0),R(1));
  R(2)+=0x4u;
  R(1)=0x8c140d8cu;
  R(0)=0x60u;
  R(3)=0x8c140d78u;
  ST32(R(15)+60,R(6));
  ST32(R(15)+48,R(3));
  ST32(R(15)+40,R(2));
  ST32(R(15)+R(0),R(1));
  R(2)=R(4);
  R(2)+=0x4u;
  R(3)=0x8c140d90u;
  R(0)=0x5cu;
  R(1)=0x8c140d9cu;
  R(4)+=0x8u;
  R(5)+=0x8u;
  ST32(R(15)+44,R(5));
  ST32(R(15)+32,R(3));
  ST32(R(15)+28,R(2));
  ST32(R(15)+R(0),R(1));
  R(0)=0x58u;
  R(2)=0x8c140d5cu;
  R(3)=0x8c140da0u;
  R(1)=0x8c140d80u;
  ST32(R(15)+36,R(4));
  ST32(R(15)+24,R(3));
  R(3)=0x8c140d94u;
  ST32(R(15),R(14));
  ST32(R(15)+4,R(7));
  ST32(R(15)+R(0),R(2));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(1));
  R(0)=0x50u;
  R(2)=0x8c140da4u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x54u;
  R(10)=LD32(R(15)+24);
  ST32(R(15)+24,R(10));
  ST32(R(15)+R(0),R(2));
  ST32(R(15),R(14));
  ST32(R(15)+4,R(7));
  R(0)=0x8c033e98u;
  ST32(R(15)+24,R(10));
  ST32(R(15),R(14));
  ST32(R(15)+4,R(7));
  ST32(R(15)+24,R(10));
  ST32(R(15)+4,R(7));
  ST32(R(15),R(14));
  ST32(R(15)+8,R(11));
  ST32(R(15)+4,R(7));
  ST32(R(15),R(14));
  ST32(R(15)+8,R(11));
  { fp_ld(c,15,R(0)); goto L8c034400; }
L8c033ea0:;
  R(3)=0x8c035228u;
  R(0)=0x40u;
  { c->pr=0x8c033ea8u; R(4)=LD32(R(15)+R(0)); f_8c035228(c); }
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(2));
  R(1)=R(3);
  R(3)=LD32(R(15));
  R(1)+=0x8u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15)+4);
  R(0)+=0x8u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)&=R(3);
  R(1)=0x80000000u;
  R(0)+=0x8u;
  R(3)=LD32(R(0));
  R(2)&=R(3);
  c->t=(R(2)&R(1))==0;
  if(c->t) goto L8c033ed0;
  {  goto L8c0343da; }
L8c033ed0:;
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(15));
  R(2)=LD32(R(3));
  R(3)=LD32(R(1));
  R(2)=LD32(R(2));
  R(3)=LD32(R(3));
  R(1)=LD32(R(15)+4);
  R(2)&=R(3);
  R(3)=LD32(R(1));
  R(0)=LD32(R(3));
  R(3)=0x80000000u;
  R(2)&=R(0);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c033ef0;
  {  goto L8c0343da; }
L8c033ef0:;
  R(1)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c033f18;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c033f18;
  R(1)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c033f18;
  {  goto L8c0343da; }
L8c033f18:;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(2));
  R(1)=R(3);
  R(3)=LD32(R(15));
  R(1)+=0x4u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15)+4);
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)&=R(3);
  R(1)=0x80000000u;
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(2)&=R(3);
  c->t=(R(2)&R(1))==0;
  if(c->t) goto L8c033f40;
  {  goto L8c0343da; }
L8c033f40:;
  R(3)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+8);
  R(1)=LD32(R(3));
  R(1)+=0x4u;
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c033f6a;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c033f6a;
  R(1)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c033f6a;
  {  goto L8c0343da; }
L8c033f6a:;
  R(3)=LD32(R(15)+8);
  R(11)=0x8000u;
  R(1)=LD32(R(3));
  R(3)=LD32(R(15));
  R(1)+=0x8u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15)+4);
  R(0)+=0x8u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)|=R(3);
  R(1)=0x80000000u;
  R(0)+=0x8u;
  R(3)=LD32(R(0));
  R(2)|=R(3);
  c->t=(R(2)&R(1))==0;
  { uint32_t k=!c->t; R(11)&=R(12); if(k) goto L8c033f94; }
  {  goto L8c034240; }
L8c033f94:;
  R(0)=0x48u;
  R(3)=0x8c03525eu;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x40u;
  { c->pr=0x8c033fa0u; R(4)=LD32(R(15)+R(0)); f_8c03525e(c); }
  R(3)=0x8c034e40u;
  R(0)=0x40u;
  R(5)=R(13);
  { c->pr=0x8c033faau; R(4)=LD32(R(15)+R(0)); f_8c034e40(c); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c033fb4;
  {  goto L8c0343da; }
L8c033fb4:;
  R(2)=0x8c140d38u;
  R(0)=0x78u;
  R(3)=LD32(R(15)+8);
  ST32(R(3),R(2));
  R(2)=0x8c140d68u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x74u;
  ST32(R(3),R(2));
  R(2)=0x8c140d88u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x70u;
  ST32(R(3),R(2));
  R(2)=0x8c140d98u;
  R(3)=LD32(R(15)+R(0));
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0340a8;
  R(0)=0x44u;
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15)+R(0));
  R(4)=0x7u;
  R(1)=LD32(R(3));
  R(13)-=R(2);
  R(1)+=R(13);
  ST32(R(3),R(1));
  R(0)=LD32(R(15)+20);
  R(2)=LD32(R(9)+8);
  R(0)=LD32(R(0));
  R(1)=0xff00003cu;
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(9));
  R(0)=0x44u;
  R(2)=0xff000038u;
  R(4)+=R(3);
  R(3)=0xe0000000u;
  ST32(R(15)+12,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(8);
  R(4)>>=8;
  R(14)|=R(3);
  ST32(R(15)+R(0),R(14));
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(3)=0x8c0d1880u;
  R(6)=0x20u;
  R(5)=LD32(R(15)+20);
  { c->pr=0x8c034022u; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(0)=0x68u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(14)+=0x20u;
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+56);
  R(2)=LD32(R(15)+4);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=LD32(R(15)+52);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+48);
  R(2)=LD32(R(15)+60);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  R(2)=LD32(R(15)+40);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+32);
  R(2)=LD32(R(15)+44);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(2)=LD32(R(15)+28);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+24);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  { c->pr=0x8c034062u; R(4)=R(14); f_8c033b80(c); }
  R(13)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0340a8;
  R(2)=LD32(R(15)+56);
  R(0)=0x58u;
  R(3)=LD32(R(15));
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x4cu;
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+48);
  R(3)=LD32(R(15)+52);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(3)=LD32(R(15)+60);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+32);
  R(3)=LD32(R(15)+40);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x54u;
  R(3)=LD32(R(15)+44);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+24);
  R(3)=LD32(R(15)+28);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(3)=LD32(R(15)+36);
  ST32(R(3),R(2));
  { c->pr=0x8c0340a6u; R(4)=R(13); f_8c033b80(c); }
  R(13)=R(0);
L8c0340a8:;
  R(3)=0x8c140e98u;
  R(0)=0x8u;
  R(2)=LD32(R(3));
  fp_ld(c,3,R(0)+R(2));
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c034120;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c034130;
  R(2)=0x8c0e0720u;
  R(5)=0x2u;
  { c->pr=0x8c0340c0u; R(4)=LD32(R(15)+16); f_8c0e0720(c); }
  R(3)=0x8000u;
  { R(12)|=R(3); goto L8c034130; }
L8c034120:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c034130;
  R(2)=0x8c0e0720u;
  R(5)=0x0u;
  { c->pr=0x8c03412cu; R(4)=LD32(R(15)+16); f_8c0e0720(c); }
  R(3)=0xffff7fffu;
  R(12)&=R(3);
L8c034130:;
  R(0)=0x44u;
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15)+R(0));
  R(4)=0x7u;
  R(1)=LD32(R(2));
  R(13)-=R(3);
  R(1)+=R(13);
  ST32(R(2),R(1));
  R(0)=LD32(R(15)+16);
  R(2)=LD32(R(9)+8);
  R(0)=LD32(R(0));
  R(1)=0xff00003cu;
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(9));
  R(0)=0x44u;
  R(2)=0xff000038u;
  R(4)+=R(3);
  R(3)=0xe0000000u;
  ST32(R(15)+12,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(8);
  R(4)>>=8;
  R(14)|=R(3);
  ST32(R(15)+R(0),R(14));
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(3)=0x8c0d1880u;
  R(6)=0x20u;
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c03417au; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(0)=0x68u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(14)+=0x20u;
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+56);
  R(2)=LD32(R(15)+4);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=LD32(R(15)+52);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+48);
  R(2)=LD32(R(15)+60);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  R(2)=LD32(R(15)+40);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+32);
  R(2)=LD32(R(15)+44);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(2)=LD32(R(15)+28);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+24);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(3)=0x8c0352d6u;
  { c->pr=0x8c0341bcu; R(4)=R(14); f_8c0352d6(c); }
  R(13)=R(0);
  R(0)=R(10);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0341c8;
  {  goto L8c0343da; }
L8c0341c8:;
  R(2)=LD32(R(15)+56);
  R(0)=0x58u;
  R(3)=LD32(R(15));
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x4cu;
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+48);
  R(3)=LD32(R(15)+52);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(3)=LD32(R(15)+60);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+32);
  R(3)=LD32(R(15)+40);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x54u;
  R(3)=LD32(R(15)+44);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+24);
  R(3)=LD32(R(15)+28);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(3)=LD32(R(15)+36);
  ST32(R(3),R(2));
  R(3)=0x8c0352d6u;
  { c->pr=0x8c034206u; R(4)=R(13); f_8c0352d6(c); }
  { R(13)=R(0); goto L8c0343da; }
L8c034240:;
  R(0)=LD32(c->gbr+28);
  R(3)=0x400u;
  R(4)=R(0);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0342f0;
  R(0)=0x80000u;
  c->t=(R(4)&R(0))==0;
  if(c->t) goto L8c0342c0;
  R(4)=LD32(R(15));
  R(0)=0x4u;
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(6));
  R(5)=LD32(R(5));
  R(4)=LD32(R(4));
  fp_ld(c,2,R(6));
  fp_ld(c,4,R(4));
  fp_ld(c,5,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,1,2,4);
  R(0)=0x4u;
  fp_ld(c,1,R(5));
  fp_arith(c,1,3,5);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(6));
  fp_arith(c,1,2,5);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c034284;
  {  goto L8c0343da; }
L8c034284:;
  {  goto L8c0342f0; }
L8c0342c0:;
  R(5)=LD32(R(15));
  R(0)=0x4u;
  R(4)=LD32(R(15)+8);
  R(6)=LD32(R(15)+4);
  R(4)=LD32(R(4));
  R(6)=LD32(R(6));
  R(5)=LD32(R(5));
  fp_ld(c,2,R(4));
  fp_ld(c,4,R(5));
  fp_ld(c,5,R(0)+R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,1,2,4);
  R(0)=0x4u;
  fp_ld(c,1,R(6));
  fp_arith(c,1,3,5);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,1,2,5);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c0343da;
L8c0342f0:;
  R(0)=0x48u;
  R(3)=0x8c03525eu;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x40u;
  { c->pr=0x8c0342fcu; R(4)=LD32(R(15)+R(0)); f_8c03525e(c); }
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c034356;
  R(0)=0x44u;
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15)+R(0));
  R(4)=0x7u;
  R(1)=LD32(R(3));
  R(13)-=R(2);
  R(1)+=R(13);
  ST32(R(3),R(1));
  R(0)=LD32(R(15)+20);
  R(2)=LD32(R(9)+8);
  R(0)=LD32(R(0));
  R(1)=0xff00003cu;
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(9));
  R(0)=0x44u;
  R(2)=0xff000038u;
  R(4)+=R(3);
  R(3)=0xe0000000u;
  ST32(R(15)+12,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(8);
  R(4)>>=8;
  R(14)|=R(3);
  ST32(R(15)+R(0),R(14));
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(3)=0x8c0d1880u;
  R(6)=0x20u;
  R(5)=LD32(R(15)+20);
  { c->pr=0x8c03434cu; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(14)+=0x20u;
  { c->pr=0x8c034354u; R(4)=R(14); f_8c033b80(c); }
  R(13)=R(0);
L8c034356:;
  R(2)=0x8c140e98u;
  R(0)=0x8u;
  R(3)=LD32(R(2));
  fp_ld(c,3,R(0)+R(3));
  fp_cmp(c,1,3,15);
  if(!c->t) goto L8c034374;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c034384;
  R(3)=0x8c0e0720u;
  R(5)=0x2u;
  { c->pr=0x8c03436eu; R(4)=LD32(R(15)+16); f_8c0e0720(c); }
  R(2)=0x8000u;
  { R(12)|=R(2); goto L8c034384; }
L8c034374:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c034384;
  R(3)=0x8c0e0720u;
  R(5)=0x0u;
  { c->pr=0x8c034380u; R(4)=LD32(R(15)+16); f_8c0e0720(c); }
  R(2)=0xffff7fffu;
  R(12)&=R(2);
L8c034384:;
  R(0)=0x44u;
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15)+R(0));
  R(4)=0x7u;
  R(1)=LD32(R(3));
  R(13)-=R(2);
  R(1)+=R(13);
  ST32(R(3),R(1));
  R(0)=LD32(R(15)+16);
  R(2)=LD32(R(9)+8);
  R(0)=LD32(R(0));
  R(1)=0xff00003cu;
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(9));
  R(0)=0x44u;
  R(2)=0xff000038u;
  R(4)+=R(3);
  R(3)=0xe0000000u;
  ST32(R(15)+12,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(8);
  R(4)>>=8;
  R(14)|=R(3);
  ST32(R(15)+R(0),R(14));
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(3)=0x8c0d1880u;
  R(6)=0x20u;
  R(5)=LD32(R(15)+16);
  { c->pr=0x8c0343ceu; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(2)=0x8c0352d6u;
  R(14)+=0x20u;
  { c->pr=0x8c0343d8u; R(4)=R(14); f_8c0352d6(c); }
  R(13)=R(0);
L8c0343da:;
  R(0)=0x6cu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x6cu;
  R(3)+=0xffffffffu;
  ST32(R(15)+R(0),R(3));
  R(0)=0x40u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x40u;
  R(3)=0x8c140e98u;
  R(2)+=0x6u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x48u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x48u;
  R(1)+=0x6u;
  ST32(R(15)+R(0),R(1));
  R(0)=LD32(R(3));
  R(0)+=0xcu;
  ST32(R(3),R(0));
L8c034400:;
  R(0)=0x6cu;
  R(3)=LD32(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c03440c;
  {  goto L8c033ea0; }
L8c03440c:;
  R(0)=LD32(c->gbr+84);
  ST32(R(0)+4,R(12));
  R(0)=0x44u;
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15)+R(0));
  R(1)=LD32(R(3));
  R(13)-=R(2);
  R(1)+=R(13);
  ST32(R(3),R(1));
  R(15)+=0x7cu;
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
void f_8c034480(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(8)=0x8c0fa82cu;
  R(0)=0x40u;
  ST32(R(15)+52,R(4));
  R(13)=0x3ffffffu;
  R(1)=0xff00003cu;
  R(2)=0xff000038u;
  ST32(R(15)+R(0),R(5));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(6));
  ST32(R(15)+60,R(7));
  R(10)=LD32(R(8)+8);
  R(3)=LD32(R(8));
  R(10)=LD32(R(10));
  R(10)<<=2;
  R(10)+=R(3);
  R(3)=0xe0000000u;
  R(4)=LD32(R(10));
  R(13)&=R(4);
  R(4)>>=16;
  R(4)>>=8;
  ST32(R(1),R(4));
  R(13)|=R(3);
  ST32(R(2),R(4));
  R(9)=R(13);
  R(3)=0xe0u;
  R(4)=0x8c140cfcu;
  R(0)=LD32(c->gbr+84);
  R(2)=R(4);
  R(1)=R(2);
  R(3)+=R(0);
  ST32(R(15)+56,R(3));
  ST32(R(15)+8,R(2));
  R(6)=0x8c140d2cu;
  R(0)=0x6cu;
  R(5)=0x8c140d0cu;
  R(4)+=0x8u;
  R(3)=R(6);
  R(1)+=0x4u;
  R(2)=R(5);
  ST32(R(15)+4,R(1));
  ST32(R(15),R(4));
  R(12)=LD32(R(15)+8);
  R(4)=0x8c140d1cu;
  ST32(R(15)+8,R(12));
  R(14)=LD32(R(15)+4);
  ST32(R(15)+4,R(14));
  R(7)=LD32(R(15));
  ST32(R(15),R(7));
  ST32(R(15)+8,R(12));
  ST32(R(15)+4,R(14));
  ST32(R(15),R(7));
  ST32(R(15)+8,R(12));
  ST32(R(15)+4,R(14));
  ST32(R(15),R(7));
  ST32(R(15)+8,R(12));
  ST32(R(15)+4,R(14));
  ST32(R(15),R(7));
  ST32(R(15)+8,R(12));
  ST32(R(15)+4,R(14));
  ST32(R(15),R(7));
  ST32(R(15)+8,R(12));
  ST32(R(15)+R(0),R(3));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x70u;
  R(1)=R(4);
  R(3)=0x8c140d44u;
  R(2)=0x8c140d50u;
  ST32(R(15)+R(0),R(1));
  R(1)=R(6);
  R(0)=0x5cu;
  ST32(R(15)+4,R(14));
  R(1)+=0x4u;
  ST32(R(15)+R(0),R(3));
  R(3)=0x8c140d70u;
  R(0)=0x60u;
  R(6)+=0x8u;
  ST32(R(15),R(7));
  ST32(R(15)+44,R(2));
  R(2)=0x8c140d78u;
  ST32(R(15)+40,R(1));
  R(1)=R(5);
  R(1)+=0x4u;
  ST32(R(15)+R(0),R(3));
  R(3)=0x8c140d8cu;
  R(0)=0x58u;
  R(5)+=0x8u;
  ST32(R(15)+48,R(6));
  ST32(R(15)+32,R(2));
  ST32(R(15)+36,R(1));
  R(1)=R(4);
  R(2)=0x8c140d90u;
  R(1)+=0x4u;
  ST32(R(15)+R(0),R(3));
  ST32(R(15)+28,R(5));
  ST32(R(15)+24,R(2));
  R(3)=0x8c140d9cu;
  R(0)=0x54u;
  ST32(R(15)+16,R(1));
  R(4)+=0x8u;
  R(1)=0x8c140d5cu;
  ST32(R(15)+R(0),R(3));
  R(0)=0x4cu;
  R(2)=0x8c140da0u;
  R(3)=0x8c140d80u;
  ST32(R(15)+20,R(4));
  ST32(R(15)+12,R(2));
  R(2)=0x8c140d94u;
  ST32(R(15)+4,R(14));
  ST32(R(15),R(7));
  ST32(R(15)+R(0),R(1));
  R(0)=0x48u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x44u;
  R(11)=LD32(R(15)+12);
  R(1)=0x8c140da4u;
  ST32(R(15)+12,R(11));
  ST32(R(15)+R(0),R(1));
  ST32(R(15)+4,R(14));
  ST32(R(15),R(7));
  ST32(R(15)+12,R(11));
  ST32(R(15)+4,R(14));
  ST32(R(15),R(7));
  ST32(R(15)+12,R(11));
  ST32(R(15),R(7));
  ST32(R(15)+4,R(14));
  ST32(R(15)+8,R(12));
  ST32(R(15),R(7));
  ST32(R(15)+4,R(14));
  { ST32(R(15)+8,R(12)); goto L8c034a6a; }
L8c034600:;
  { c->pr=0x8c034604u; R(4)=LD32(R(15)+52); f_8c035228(c); }
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(2));
  R(1)=R(3);
  R(3)=LD32(R(15)+4);
  R(1)+=0x8u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15));
  R(0)+=0x8u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)&=R(3);
  R(1)=0x80000000u;
  R(0)+=0x8u;
  R(3)=LD32(R(0));
  R(2)&=R(3);
  c->t=(R(2)&R(1))==0;
  if(c->t) goto L8c03462c;
  {  goto L8c034a50; }
L8c03462c:;
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(3));
  R(3)=LD32(R(1));
  R(2)=LD32(R(2));
  R(3)=LD32(R(3));
  R(1)=LD32(R(15));
  R(2)&=R(3);
  R(3)=LD32(R(1));
  R(0)=LD32(R(3));
  R(3)=0x80000000u;
  R(2)&=R(0);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c03464c;
  {  goto L8c034a50; }
L8c03464c:;
  R(1)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c034674;
  R(1)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c034674;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c034674;
  {  goto L8c034a50; }
L8c034674:;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(2));
  R(1)=R(3);
  R(3)=LD32(R(15)+4);
  R(1)+=0x4u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15));
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)&=R(3);
  R(1)=0x80000000u;
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(2)&=R(3);
  c->t=(R(2)&R(1))==0;
  if(c->t) goto L8c03469c;
  {  goto L8c034a50; }
L8c03469c:;
  R(3)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+8);
  R(1)=LD32(R(3));
  R(1)+=0x4u;
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c0346c6;
  R(1)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c0346c6;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c0346c6;
  {  goto L8c034a50; }
L8c0346c6:;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(2));
  R(1)=R(3);
  R(3)=LD32(R(15)+4);
  R(1)+=0x8u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15));
  R(0)+=0x8u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)|=R(3);
  R(1)=0x80000000u;
  R(0)+=0x8u;
  R(3)=LD32(R(0));
  R(2)|=R(3);
  c->t=(R(2)&R(1))==0;
  if(!c->t) goto L8c0346ee;
  {  goto L8c034900; }
L8c0346ee:;
  R(0)=0x40u;
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c0346f6u; R(4)=LD32(R(15)+52); f_8c03525e(c); }
  R(5)=R(13);
  { c->pr=0x8c0346fcu; R(4)=LD32(R(15)+52); f_8c034e40(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c034706;
  {  goto L8c034a50; }
L8c034706:;
  R(3)=LD32(R(10));
  R(13)-=R(9);
  R(4)=0x7u;
  R(14)=0x3ffffffu;
  R(3)+=R(13);
  R(1)=0xff00003cu;
  ST32(R(10),R(3));
  R(6)=0x20u;
  R(0)=LD32(R(15)+60);
  R(2)=LD32(R(8)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  R(13)=R(4);
  R(13)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(8));
  R(2)=0xff000038u;
  R(13)+=R(3);
  R(3)=0xe0000000u;
  R(4)=LD32(R(13));
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(3);
  R(3)=0x8c0d1880u;
  R(4)>>=8;
  R(12)=R(14);
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(5)=LD32(R(15)+60);
  { c->pr=0x8c034748u; R(4)=R(12); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(3)=0x8c140d38u;
  R(0)=0x6cu;
  R(2)=LD32(R(15)+8);
  R(14)+=0x20u;
  ST32(R(2),R(3));
  R(3)=0x8c140d68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x68u;
  ST32(R(2),R(3));
  R(3)=0x8c140d88u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x70u;
  ST32(R(2),R(3));
  R(3)=0x8c140d98u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=LD32(R(15)+4);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15));
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=LD32(R(15)+40);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+32);
  R(2)=LD32(R(15)+48);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+36);
  R(3)=LD32(R(15)+R(0));
  R(0)=0x54u;
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+24);
  R(2)=LD32(R(15)+28);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(2)=LD32(R(15)+16);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15)+20);
  ST32(R(2),R(3));
  { c->pr=0x8c0347a6u; R(4)=R(14); f_8c033b80(c); }
  R(14)=R(0);
  R(0)=R(11);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0347ec;
  R(2)=LD32(R(15)+44);
  R(0)=0x4cu;
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x48u;
  R(3)=LD32(R(15));
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+32);
  R(3)=LD32(R(15)+40);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(3)=LD32(R(15)+48);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+24);
  R(3)=LD32(R(15)+36);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x44u;
  R(3)=LD32(R(15)+28);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15)+16);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(3)=LD32(R(15)+20);
  ST32(R(3),R(2));
  { c->pr=0x8c0347eau; R(4)=R(14); f_8c033b80(c); }
  R(14)=R(0);
L8c0347ec:;
  R(2)=LD32(R(13));
  R(14)-=R(12);
  R(4)=0x7u;
  R(1)=0xff00003cu;
  R(2)+=R(14);
  R(14)=0x3ffffffu;
  ST32(R(13),R(2));
  R(6)=0x20u;
  R(0)=LD32(R(15)+56);
  R(2)=LD32(R(8)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  R(10)=R(4);
  R(10)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(8));
  R(2)=0xff000038u;
  R(10)+=R(3);
  R(3)=0xe0000000u;
  R(4)=LD32(R(10));
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(3);
  R(3)=0x8c0d1880u;
  R(4)>>=8;
  R(9)=R(14);
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(5)=LD32(R(15)+56);
  { c->pr=0x8c03482eu; R(4)=R(9); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(0)=0x5cu;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(14)+=0x20u;
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+44);
  R(2)=LD32(R(15));
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=LD32(R(15)+40);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+32);
  R(2)=LD32(R(15)+48);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x54u;
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+24);
  R(2)=LD32(R(15)+28);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(2)=LD32(R(15)+16);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15)+20);
  ST32(R(2),R(3));
  { c->pr=0x8c03486eu; R(4)=R(14); f_8c0352d6(c); }
  R(13)=R(0);
  R(0)=R(11);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c03487a;
  {  goto L8c034a50; }
L8c03487a:;
  R(2)=LD32(R(15)+44);
  R(0)=0x4cu;
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x48u;
  R(3)=LD32(R(15));
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+32);
  R(3)=LD32(R(15)+40);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x50u;
  R(3)=LD32(R(15)+48);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+24);
  R(3)=LD32(R(15)+36);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x44u;
  R(3)=LD32(R(15)+28);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15)+16);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+R(0));
  R(3)=LD32(R(15)+20);
  ST32(R(3),R(2));
  { c->pr=0x8c0348b6u; R(4)=R(13); f_8c0352d6(c); }
  { R(13)=R(0); goto L8c034a50; }
L8c034900:;
  R(0)=LD32(c->gbr+28);
  R(3)=0x400u;
  R(4)=R(0);
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0349b0;
  R(0)=0x80000u;
  c->t=(R(4)&R(0))==0;
  if(c->t) goto L8c034980;
  R(4)=LD32(R(15)+4);
  R(0)=0x4u;
  R(6)=LD32(R(15)+8);
  R(5)=LD32(R(15));
  R(6)=LD32(R(6));
  R(5)=LD32(R(5));
  R(4)=LD32(R(4));
  fp_ld(c,2,R(6));
  fp_ld(c,4,R(4));
  fp_ld(c,5,R(0)+R(4));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,1,2,4);
  R(0)=0x4u;
  fp_ld(c,1,R(5));
  fp_arith(c,1,3,5);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(6));
  fp_arith(c,1,2,5);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c034944;
  {  goto L8c034a50; }
L8c034944:;
  {  goto L8c0349b0; }
L8c034980:;
  R(5)=LD32(R(15)+4);
  R(0)=0x4u;
  R(4)=LD32(R(15)+8);
  R(6)=LD32(R(15));
  R(4)=LD32(R(4));
  R(6)=LD32(R(6));
  R(5)=LD32(R(5));
  fp_ld(c,2,R(4));
  fp_ld(c,5,R(5));
  fp_ld(c,4,R(0)+R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,1,2,5);
  R(0)=0x4u;
  fp_ld(c,1,R(6));
  fp_arith(c,1,3,4);
  fp_arith(c,1,1,5);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,1,2,4);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c034a50;
L8c0349b0:;
  R(0)=0x40u;
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c0349b8u; R(4)=LD32(R(15)+52); f_8c03525e(c); }
  R(2)=LD32(R(10));
  R(13)-=R(9);
  R(4)=0x7u;
  R(14)=0x3ffffffu;
  R(2)+=R(13);
  R(1)=0xff00003cu;
  ST32(R(10),R(2));
  R(6)=0x20u;
  R(0)=LD32(R(15)+60);
  R(2)=LD32(R(8)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  R(12)=R(4);
  R(12)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(8));
  R(2)=0xff000038u;
  R(12)+=R(3);
  R(3)=0xe0000000u;
  R(4)=LD32(R(12));
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(3);
  R(3)=0x8c0d1880u;
  R(4)>>=8;
  R(11)=R(14);
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(5)=LD32(R(15)+60);
  { c->pr=0x8c0349fau; R(4)=R(11); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(14)+=0x20u;
  { c->pr=0x8c034a02u; R(4)=R(14); f_8c033b80(c); }
  R(4)=R(0);
  R(3)=LD32(R(12));
  R(4)-=R(11);
  R(14)=0x3ffffffu;
  R(3)+=R(4);
  R(1)=0xff00003cu;
  R(4)=0x7u;
  ST32(R(12),R(3));
  R(0)=LD32(R(15)+56);
  R(6)=0x20u;
  R(2)=LD32(R(8)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  R(10)=R(4);
  R(10)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(8));
  R(2)=0xff000038u;
  R(10)+=R(3);
  R(3)=0xe0000000u;
  R(4)=LD32(R(10));
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(3);
  R(3)=0x8c0d1880u;
  R(4)>>=8;
  R(9)=R(14);
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(5)=LD32(R(15)+56);
  { c->pr=0x8c034a46u; R(4)=R(9); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(14)+=0x20u;
  { c->pr=0x8c034a4eu; R(4)=R(14); f_8c0352d6(c); }
  R(13)=R(0);
L8c034a50:;
  R(0)=0x64u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(3)+=0xffffffffu;
  ST32(R(15)+R(0),R(3));
  R(0)=0x40u;
  R(2)=LD32(R(15)+52);
  R(2)+=0x6u;
  ST32(R(15)+52,R(2));
  R(1)=LD32(R(15)+R(0));
  R(0)=0x40u;
  R(1)+=0x6u;
  ST32(R(15)+R(0),R(1));
L8c034a6a:;
  R(0)=0x64u;
  R(3)=LD32(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c034a76;
  {  goto L8c034600; }
L8c034a76:;
  R(3)=LD32(R(10));
  R(13)-=R(9);
  R(3)+=R(13);
  ST32(R(10),R(3));
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c034ac0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(12)=0x8c0fa82cu;
  ST32(R(15)+12,R(4));
  R(10)=0xff00003cu;
  R(2)=0xff000038u;
  R(9)=0x3ffffffu;
  R(8)=0xe0000000u;
  ST32(R(15)+24,R(5));
  ST32(R(15)+28,R(6));
  ST32(R(15)+32,R(7));
  R(11)=LD32(R(12)+8);
  R(3)=LD32(R(12));
  R(11)=LD32(R(11));
  R(11)<<=2;
  R(11)+=R(3);
  R(3)=0xe0u;
  R(4)=LD32(R(11));
  R(13)=R(4);
  R(4)>>=16;
  R(4)>>=8;
  R(13)&=R(9);
  R(13)|=R(8);
  ST32(R(15)+36,R(13));
  ST32(R(10),R(4));
  ST32(R(2),R(4));
  R(4)=0x8c140cfcu;
  R(0)=LD32(c->gbr+84);
  R(1)=R(4);
  R(2)=R(1);
  R(3)+=R(0);
  R(2)+=0x4u;
  ST32(R(15)+20,R(3));
  ST32(R(15)+4,R(1));
  R(4)+=0x8u;
  ST32(R(15),R(2));
  ST32(R(15)+8,R(4));
  R(7)=LD32(R(15)+4);
  ST32(R(15)+4,R(7));
  R(6)=LD32(R(15));
  ST32(R(15),R(6));
  R(5)=LD32(R(15)+8);
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(7));
  ST32(R(15),R(6));
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(7));
  ST32(R(15),R(6));
  ST32(R(15)+8,R(5));
  ST32(R(15),R(6));
  { ST32(R(15)+4,R(7)); goto L8c034cd6; }
L8c034b60:;
  { c->pr=0x8c034b64u; R(4)=LD32(R(15)+12); f_8c035228(c); }
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15));
  R(3)=LD32(R(2));
  R(2)=LD32(R(1));
  R(3)=LD32(R(3));
  R(2)=LD32(R(2));
  R(1)=LD32(R(15)+8);
  R(3)&=R(2);
  R(2)=LD32(R(1));
  R(0)=LD32(R(2));
  R(2)=0x80000000u;
  R(3)&=R(0);
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c034b84;
  {  goto L8c034cc4; }
L8c034b84:;
  R(1)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c034bac;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c034bac;
  R(1)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c034bac;
  {  goto L8c034cc4; }
L8c034bac:;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(2));
  R(1)=R(3);
  R(3)=LD32(R(15));
  R(1)+=0x4u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15)+8);
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)&=R(3);
  R(1)=0x80000000u;
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(2)&=R(3);
  c->t=(R(2)&R(1))==0;
  if(!c->t) goto L8c034cc4;
  R(3)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+8);
  R(1)=LD32(R(3));
  R(1)+=0x4u;
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c034bf6;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c034bf6;
  R(1)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(c->t) goto L8c034cc4;
L8c034bf6:;
  R(5)=LD32(R(15));
  R(0)=0x4u;
  R(4)=LD32(R(15)+4);
  R(6)=LD32(R(15)+8);
  R(4)=LD32(R(4));
  R(6)=LD32(R(6));
  R(5)=LD32(R(5));
  fp_ld(c,2,R(4));
  fp_ld(c,4,R(5));
  fp_ld(c,5,R(0)+R(5));
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,1,2,4);
  R(0)=0x4u;
  fp_ld(c,1,R(6));
  fp_arith(c,1,3,5);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,1,2,5);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c034cc4;
  R(5)=LD32(R(15)+24);
  { c->pr=0x8c034c2cu; R(4)=LD32(R(15)+12); f_8c03525e(c); }
  R(2)=LD32(R(15)+36);
  R(4)=0x7u;
  R(3)=LD32(R(11));
  R(6)=0x20u;
  R(13)-=R(2);
  R(3)+=R(13);
  ST32(R(11),R(3));
  R(0)=LD32(R(15)+32);
  R(2)=LD32(R(12)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(12));
  R(2)=0xff000038u;
  R(4)+=R(3);
  R(3)=0x8c0d1880u;
  ST32(R(15)+16,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(9);
  R(4)>>=8;
  R(14)|=R(8);
  ST32(R(15)+40,R(14));
  ST32(R(10),R(4));
  ST32(R(2),R(4));
  R(5)=LD32(R(15)+32);
  { uint32_t tg=R(3); c->pr=0x8c034c6cu; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(2)=0x8c033b80u;
  R(14)+=0x20u;
  { c->pr=0x8c034c76u; R(4)=R(14); f_8c033b80(c); }
  R(4)=R(0);
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(15)+40);
  R(6)=0x20u;
  R(1)=LD32(R(3));
  R(4)-=R(2);
  R(1)+=R(4);
  R(4)=0x7u;
  ST32(R(3),R(1));
  R(0)=LD32(R(15)+20);
  R(2)=LD32(R(12)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  R(11)=R(4);
  R(11)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(12));
  R(2)=0xff000038u;
  R(11)+=R(3);
  R(3)=0x8c0d1880u;
  R(4)=LD32(R(11));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(9);
  R(4)>>=8;
  R(14)|=R(8);
  ST32(R(15)+36,R(14));
  ST32(R(10),R(4));
  ST32(R(2),R(4));
  R(5)=LD32(R(15)+20);
  { uint32_t tg=R(3); c->pr=0x8c034cbau; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(14)+=0x20u;
  { c->pr=0x8c034cc2u; R(4)=R(14); f_8c0352d6(c); }
  R(13)=R(0);
L8c034cc4:;
  R(3)=LD32(R(15)+28);
  R(3)+=0xffffffffu;
  ST32(R(15)+28,R(3));
  R(2)=LD32(R(15)+12);
  R(2)+=0x6u;
  ST32(R(15)+12,R(2));
  R(1)=LD32(R(15)+24);
  R(1)+=0x6u;
  ST32(R(15)+24,R(1));
L8c034cd6:;
  R(3)=LD32(R(15)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c034ce0;
  {  goto L8c034b60; }
L8c034ce0:;
  R(3)=LD32(R(15)+36);
  R(2)=LD32(R(11));
  R(13)-=R(3);
  R(2)+=R(13);
  ST32(R(11),R(2));
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
void f_8c034cfe(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=0x8c034d50u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,3,4);
  if(c->t) goto L8c034d0e;
  R(0)=R(5);
  { R(15)+=0x4u; return; }
L8c034d0e:;
  R(0)=0x8c034d54u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c034d1c;
  R(0)=R(4);
  { R(15)+=0x4u; return; }
L8c034d1c:;
  R(0)=0x8c034d58u;
  R(2)=R(15);
  fp_ld(c,3,R(0));
  fp_arith(c,0,4,3);
  fp_st(c,4,R(2));
  R(0)=LD32(R(15));
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c034d60;
  R(6)=0xfefefefeu;
  { R(6)&=R(5); goto L8c034d64; }
L8c034d60:;
  R(6)=0xfefefefeu;
  R(6)&=R(4);
L8c034d64:;
  R(0)=LD32(R(15));
  c->t=R(6)&1;R(6)>>=1;
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c034d76;
  R(2)=0xfcfcfcfcu;
  R(2)&=R(5);
  R(1)=R(2);
  {  goto L8c034d7c; }
L8c034d76:;
  R(2)=0xfcfcfcfcu;
  R(2)&=R(4);
  R(1)=R(2);
L8c034d7c:;
  R(0)=LD32(R(15));
  R(1)>>=2;
  R(6)+=R(1);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c034d8e;
  R(2)=0xf8f8f8f8u;
  R(2)&=R(5);
  { R(3)=R(2); goto L8c034d94; }
L8c034d8e:;
  R(1)=0xf8f8f8f8u;
  R(1)&=R(4);
  R(3)=R(1);
L8c034d94:;
  R(0)=LD32(R(15));
  R(3)>>=2;
  c->t=R(3)&1;R(3)>>=1;
  c->t=(R(0)&0x10)==0;
  R(6)+=R(3);
  if(c->t) goto L8c034da8;
  R(2)=0xf0f0f0f0u;
  R(2)&=R(5);
  { R(3)=R(2); goto L8c034dae; }
L8c034da8:;
  R(1)=0xf0f0f0f0u;
  R(1)&=R(4);
  R(3)=R(1);
L8c034dae:;
  R(0)=LD32(R(15));
  R(3)>>=2;
  R(3)>>=2;
  c->t=(R(0)&0x8)==0;
  R(6)+=R(3);
  if(c->t) goto L8c034dc2;
  R(2)=0xe0e0e0e0u;
  R(2)&=R(5);
  { R(3)=R(2); goto L8c034dc8; }
L8c034dc2:;
  R(1)=0xe0e0e0e0u;
  R(1)&=R(4);
  R(3)=R(1);
L8c034dc8:;
  R(3)>>=2;
  R(0)=LD32(R(15));
  R(3)>>=2;
  c->t=R(3)&1;R(3)>>=1;
  c->t=(R(0)&0x4)==0;
  R(6)+=R(3);
  if(c->t) goto L8c034dde;
  R(2)=0xc0c0c0c0u;
  R(2)&=R(5);
  { R(3)=R(2); goto L8c034de4; }
L8c034dde:;
  R(1)=0xc0c0c0c0u;
  R(1)&=R(4);
  R(3)=R(1);
L8c034de4:;
  R(3)>>=2;
  R(0)=LD32(R(15));
  R(3)>>=2;
  R(3)>>=2;
  c->t=(R(0)&0x2)==0;
  R(6)+=R(3);
  { uint32_t k=c->t; R(1)=0xfffffff9u; if(k) goto L8c034dfc; }
  R(2)=0x80808080u;
  R(5)&=R(2);
  { R(3)=R(5); goto L8c034e02; }
L8c034dfc:;
  R(2)=0x80808080u;
  R(4)&=R(2);
  R(3)=R(4);
L8c034e02:;
  R(3)=sh4_shld(R(3),R(1));
  R(6)+=R(3);
  R(0)=R(6);
  { R(15)+=0x4u; return; }
}
void f_8c034e20(SH4Ctx *c) {
  fp_fmac(c,14,15);
  fp_fmac(c,14,15);
  fp_mov(c,12,15);
  fp_mov(c,12,15);
  fp_ld(c,8,R(15));
  fp_ld(c,8,R(15));
  fp_arith(c,0,0,15);
  fp_arith(c,0,0,15);
  R(0)=0xffffffe0u;
  R(0)=0xffffffe0u;
  ST8(c->gbr+192,R(0));
  ST8(c->gbr+192,R(0));
  ST8(R(8)+0,R(0));
  ST8(R(8)+0,R(0));
  
  
  { f_8c034e40(c); return; }
}
void f_8c034e40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(0)=0x8c140d04u;
  R(9)=0x2u;
  ST32(R(15)+12,R(4));
  R(4)=0x0u;
  R(0)=LD32(R(0));
  R(13)=R(4);
  R(10)=0x8c140d0cu;
  R(14)=R(4);
  R(0)=LD32(R(0)+8);
  R(8)=0x8c140d38u;
  c->t=R(0)>>31;R(0)=(R(0)<<1)|c->t;
  R(12)=0x8c140d1cu;
  R(11)=0x8c140d2cu;
  R(0)&=0x1u;
  ST32(R(15)+16,R(0));
L8c034e72:;
  R(1)=0x8c140cfcu;
  R(0)=R(13);
  R(0)<<=2;
  R(3)=LD32(R(15)+16);
  R(0)=LD32(R(1)+R(0));
  R(0)=LD32(R(0)+8);
  c->t=R(0)>>31;R(0)=(R(0)<<1)|c->t;
  c->t=R(3)>>31;R(3)<<=1;
  R(0)&=0x1u;
  R(0)|=R(3);
  ST32(R(15)+16,R(0));
  R(0)&=0x3u;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c034ee0;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c034e96;
  {  goto L8c034fe2; }
L8c034e96:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c034e9e;
  {  goto L8c035060; }
L8c034e9e:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c034ea6;
  {  goto L8c035162; }
L8c034ea6:;
  {  goto L8c035162; }
L8c034ee0:;
  R(0)=LD32(c->gbr+44);
  R(1)=0x8u;
  R(6)=LD32(R(15)+12);
  R(5)=R(0);
  R(0)=R(13);
  c->t=R(0)>>31;R(0)<<=1;
  R(4)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(0)=R(9);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  c->t=R(0)>>31;R(0)<<=1;
  R(4)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(0)=LD32(c->gbr+88);
  R(4)<<=2;
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(2)=0x80u;
  R(4)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(1)+=R(4);
  R(3)<<=2;
  fp_ld(c,4,R(1));
  R(0)=0x8u;
  R(5)+=R(3);
  fp_arith(c,1,3,4);
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,1,2,4);
  fp_ld(c,4,R(4));
  fp_mov(c,15,3);
  fp_arith(c,3,15,2);
  fp_ld(c,3,R(5));
  R(0)=0x24u;
  fp_mov(c,2,4);
  R(1)=R(2);
  fp_arith(c,1,3,4);
  fp_mov(c,0,15);
  R(7)=R(14);
  R(3)=R(14);
  c->t=R(7)>>31;R(7)<<=1;
  R(6)=R(15);
  R(7)+=R(3);
  R(3)=0x8c07f76cu;
  fp_fmac(c,2,3);
  R(7)<<=2;
  R(7)+=R(8);
  R(6)+=0x24u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(5)=0x1u;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x28u;
  fp_arith(c,1,3,4);
  fp_mov(c,2,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=LD32(c->gbr+88);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x2cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(c->gbr+88);
  { uint32_t tg=R(3); c->pr=0x8c034f62u; R(4)=R(0); sh4_call(c,tg); }
  R(2)=0x8c140d88u;
  R(3)=R(14);
  R(3)<<=2;
  R(0)=R(10);
  R(9)<<=2;
  R(4)=R(13);
  R(2)+=R(3);
  ST32(R(15)+8,R(3));
  R(4)<<=2;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  ST32(R(15)+8,R(9));
  R(5)=LD32(R(9)+R(0));
  fp_mov(c,4,15);
  R(5)=LD32(R(5));
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(4)+R(0));
  { c->pr=0x8c034f86u; R(4)=LD32(R(4)); f_8c034cfe(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(2)=0x8c140d98u;
  ST32(R(3),R(0));
  R(3)=LD32(R(15)+8);
  fp_mov(c,4,15);
  R(2)+=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+8);
  R(5)=LD32(R(12)+R(0));
  R(0)=LD32(R(15)+4);
  R(5)=LD32(R(5));
  R(4)=LD32(R(12)+R(0));
  { c->pr=0x8c034fa2u; R(4)=LD32(R(4)); f_8c034cfe(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(6)=R(14);
  fp_mov(c,0,15);
  R(6)<<=2;
  ST32(R(3),R(0));
  R(0)=0x4u;
  R(5)=LD32(R(15));
  c->t=R(6)>>31;R(6)<<=1;
  R(3)=0x8c140d68u;
  R(14)+=0x1u;
  R(5)+=R(11);
  R(2)=LD32(R(5));
  R(6)+=R(3);
  ST32(R(15)+32,R(2));
  R(4)=LD32(R(15)+4);
  fp_ld(c,4,R(2));
  R(4)+=R(11);
  R(2)=LD32(R(4));
  fp_mov(c,2,4);
  fp_ld(c,3,R(2));
  fp_arith(c,1,3,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(6));
  R(2)=LD32(R(5));
  ST32(R(15)+28,R(2));
  R(1)=LD32(R(4));
  fp_ld(c,4,R(0)+R(2));
  fp_ld(c,3,R(0)+R(1));
  fp_mov(c,2,4);
  fp_arith(c,1,3,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(6));
L8c034fe2:;
  R(3)=R(14);
  R(0)=0x8c140cfcu;
  R(4)=R(13);
  R(2)=R(14);
  c->t=R(3)>>31;R(3)<<=1;
  R(5)=R(14);
  R(4)<<=2;
  R(3)+=R(2);
  R(2)=LD32(R(4)+R(0));
  R(3)<<=2;
  R(1)=LD32(R(2));
  R(3)+=R(8);
  R(0)=LD32(R(2)+4);
  R(5)<<=2;
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=R(4);
  R(1)=LD32(R(2)+8);
  ST32(R(3)+8,R(1));
  R(3)=R(14);
  R(1)=0x8c140d68u;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(2)=LD32(R(11)+R(0));
  R(3)+=R(1);
  R(0)=LD32(R(2)+4);
  R(1)=LD32(R(2));
  R(2)=0x8c140d88u;
  ST32(R(3),R(1));
  ST32(R(3)+4,R(0));
  R(0)=R(10);
  R(2)+=R(5);
  R(3)=LD32(R(4)+R(0));
  R(4)+=R(12);
  R(0)=0x8c140d98u;
  R(3)=LD32(R(3));
  ST32(R(2),R(3));
  R(2)=LD32(R(4));
  R(3)=LD32(R(2));
  ST32(R(5)+R(0),R(3));
  { R(14)+=0x1u; goto L8c035162; }
L8c035060:;
  R(0)=LD32(c->gbr+44);
  R(1)=0x8u;
  R(6)=LD32(R(15)+12);
  R(5)=R(0);
  R(0)=R(9);
  c->t=R(0)>>31;R(0)<<=1;
  R(4)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(0)=R(13);
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  c->t=R(0)>>31;R(0)<<=1;
  R(4)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(0)=LD32(c->gbr+88);
  R(4)<<=2;
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(2)=0x80u;
  R(4)+=R(5);
  fp_ld(c,3,R(0)+R(2));
  R(1)+=R(4);
  R(3)<<=2;
  fp_ld(c,4,R(1));
  R(0)=0x8u;
  R(5)+=R(3);
  fp_arith(c,1,3,4);
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,1,2,4);
  fp_ld(c,4,R(4));
  fp_mov(c,15,3);
  fp_arith(c,3,15,2);
  fp_ld(c,3,R(5));
  R(0)=0x24u;
  fp_mov(c,2,4);
  R(1)=R(2);
  fp_arith(c,1,3,4);
  fp_mov(c,0,15);
  R(7)=R(14);
  R(3)=R(14);
  c->t=R(7)>>31;R(7)<<=1;
  R(6)=R(15);
  R(7)+=R(3);
  R(3)=0x8c07f76cu;
  fp_fmac(c,2,3);
  R(7)<<=2;
  R(7)+=R(8);
  R(6)+=0x24u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(5)=0x1u;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x28u;
  fp_arith(c,1,3,4);
  fp_mov(c,2,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=LD32(c->gbr+88);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x2cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=LD32(c->gbr+88);
  { uint32_t tg=R(3); c->pr=0x8c0350e2u; R(4)=R(0); sh4_call(c,tg); }
  R(2)=0x8c140d88u;
  R(3)=R(14);
  R(3)<<=2;
  R(5)=R(13);
  R(2)+=R(3);
  ST32(R(15)+8,R(3));
  R(5)<<=2;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=R(10);
  ST32(R(15)+8,R(5));
  R(5)=LD32(R(5)+R(0));
  R(9)<<=2;
  fp_mov(c,4,15);
  R(5)=LD32(R(5));
  ST32(R(15)+4,R(9));
  R(4)=LD32(R(9)+R(0));
  { c->pr=0x8c035106u; R(4)=LD32(R(4)); f_8c034cfe(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(2)=0x8c140d98u;
  ST32(R(3),R(0));
  R(3)=LD32(R(15)+8);
  fp_mov(c,4,15);
  R(2)+=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(15)+8);
  R(5)=LD32(R(12)+R(0));
  R(0)=LD32(R(15)+4);
  R(5)=LD32(R(5));
  R(4)=LD32(R(12)+R(0));
  { c->pr=0x8c035122u; R(4)=LD32(R(4)); f_8c034cfe(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  R(6)=R(14);
  fp_mov(c,0,15);
  R(6)<<=2;
  ST32(R(3),R(0));
  R(0)=0x4u;
  R(5)=LD32(R(15));
  c->t=R(6)>>31;R(6)<<=1;
  R(3)=0x8c140d68u;
  R(14)+=0x1u;
  R(5)+=R(11);
  R(2)=LD32(R(5));
  R(6)+=R(3);
  ST32(R(15)+24,R(2));
  R(4)=LD32(R(15)+4);
  fp_ld(c,4,R(2));
  R(4)+=R(11);
  R(2)=LD32(R(4));
  fp_mov(c,2,4);
  fp_ld(c,3,R(2));
  fp_arith(c,1,3,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(6));
  R(2)=LD32(R(5));
  ST32(R(15)+20,R(2));
  R(1)=LD32(R(4));
  fp_ld(c,4,R(0)+R(2));
  fp_ld(c,3,R(0)+R(1));
  fp_mov(c,2,4);
  fp_arith(c,1,3,4);
  fp_fmac(c,2,3);
  fp_st(c,2,R(0)+R(6));
L8c035162:;
  R(9)=R(13);
  R(2)=0x3u;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(2);
  if(c->t) goto L8c035170;
  {  goto L8c034e72; }
L8c035170:;
  R(0)=LD32(c->gbr+28);
  R(3)=0x400u;
  R(5)=R(0);
  c->t=(R(3)&R(5))==0;
  if(c->t) goto L8c035210;
  R(3)=0x80000u;
  c->t=(R(5)&R(3))==0;
  { uint32_t k=c->t; R(4)=R(8); if(k) goto L8c0351e0; }
  R(7)=R(4);
  R(6)=R(4);
  R(0)=0x4u;
  R(5)=R(4);
  R(6)+=0x18u;
  fp_ld(c,2,R(5));
  R(7)+=0xcu;
  fp_ld(c,3,R(0)+R(6));
  fp_ld(c,5,R(7));
  fp_ld(c,4,R(0)+R(7));
  fp_arith(c,1,2,5);
  fp_ld(c,1,R(6));
  fp_arith(c,1,3,4);
  fp_arith(c,1,1,5);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,1,2,4);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c035210;
  {  goto L8c03520c; }
L8c0351e0:;
  R(7)=R(4);
  R(5)=R(4);
  R(0)=0x4u;
  R(6)=R(4);
  R(5)+=0x18u;
  fp_ld(c,2,R(6));
  R(7)+=0xcu;
  fp_ld(c,3,R(0)+R(5));
  fp_ld(c,5,R(7));
  fp_ld(c,4,R(0)+R(7));
  fp_arith(c,1,2,5);
  fp_ld(c,1,R(5));
  fp_arith(c,1,3,4);
  fp_arith(c,1,1,5);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(6));
  fp_arith(c,1,2,4);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c035210;
L8c03520c:;
  { R(0)=0x0u; goto L8c035212; }
L8c035210:;
  R(0)=R(14);
L8c035212:;
  R(15)+=0x30u;
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
void f_8c035228(SH4Ctx *c) {
  {int32_t v=(int16_t)LD16(R(4));R(4)+=2;R(3)=(uint32_t)v;}
  R(0)=LD32(c->gbr+48);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(5)=R(0);
  R(3)<<=2;
  R(6)=R(0);
  R(5)+=R(3);
  {int32_t v=(int16_t)LD16(R(4));R(4)+=2;R(3)=(uint32_t)v;}
  R(7)=R(0);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(6)+=R(3);
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(4)=0x8c140d04u;
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(7)+=R(3);
  ST32(R(4),R(7));
  {uint32_t v=R(6);R(4)-=4;ST32(R(4),v);}
  { {uint32_t v=R(5);R(4)-=4;ST32(R(4),v);} return; }
}
void f_8c03525e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(3)=(uint32_t)v;}
  R(0)=LD32(c->gbr+0);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(6)=R(0);
  R(6)+=R(3);
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(3)=(uint32_t)v;}
  R(7)=R(0);
  R(14)=R(0);
  R(2)=(int32_t)(int16_t)LD16(R(5));
  R(3)<<=2;
  R(5)=0x8c140d34u;
  c->t=R(3)>>31;R(3)<<=1;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(7)+=R(2);
  ST32(R(5),R(7));
  R(14)+=R(3);
  {uint32_t v=R(14);R(5)-=4;ST32(R(5),v);}
  {uint32_t v=R(6);R(5)-=4;ST32(R(5),v);}
  R(0)=LD32(c->gbr+52);
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(5)=R(0);
  R(1)=R(0);
  R(3)<<=2;
  R(7)=R(0);
  R(5)+=R(3);
  R(0)=LD32(c->gbr+56);
  {int32_t v=(int16_t)LD16(R(4));R(4)+=2;R(3)=(uint32_t)v;}
  R(12)=R(0);
  R(14)=R(0);
  R(6)=R(0);
  R(2)=(int32_t)(int16_t)LD16(R(4));
  R(3)<<=2;
  R(6)+=R(3);
  {int32_t v=(int16_t)LD16(R(4));R(4)+=2;R(3)=(uint32_t)v;}
  R(2)<<=2;
  R(7)+=R(2);
  R(2)=(int32_t)(int16_t)LD16(R(4));
  R(4)=0x8c140d14u;
  R(3)<<=2;
  R(2)<<=2;
  R(1)+=R(2);
  ST32(R(15),R(2));
  ST32(R(4),R(1));
  R(12)+=R(2);
  {uint32_t v=R(7);R(4)-=4;ST32(R(4),v);}
  R(14)+=R(3);
  {uint32_t v=R(5);R(4)-=4;ST32(R(4),v);}
  R(4)=0x8c140d24u;
  ST32(R(4),R(12));
  {uint32_t v=R(14);R(4)-=4;ST32(R(4),v);}
  {uint32_t v=R(6);R(4)-=4;ST32(R(4),v);}
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0352d6(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(4)+=0x20u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(0)=0x4u;
  R(12)=0x8c140d1cu;
  R(13)=0x8c140d0cu;
  R(3)=LD32(R(12));
  R(1)=0x8c140d2cu;
  R(2)=LD32(R(3));
  R(7)=R(1);
  R(6)=0x8c140cfcu;
  {uint32_t v=LD32(R(6));R(6)+=4;R(5)=v;}
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  {uint32_t v=R(2);R(4)-=4;ST32(R(4),v);}
  R(3)=LD32(R(13));
  R(2)=LD32(R(3));
  {uint32_t v=R(2);R(4)-=4;ST32(R(4),v);}
  R(3)=LD32(R(7));
  fp_ld(c,3,R(0)+R(3));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  {uint32_t v=LD32(R(7));R(7)+=4;R(3)=v;}
  fp_ld(c,3,R(3));
  R(3)=0xe0000000u;
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,3,R(5));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  {uint32_t v=R(3);R(4)-=4;ST32(R(4),v);}
  sh4_pref(c,R(4));
  R(3)=LD32(R(12)+4);
  R(4)+=0x40u;
  {uint32_t v=LD32(R(6));R(6)+=4;R(5)=v;}
  R(2)=LD32(R(3));
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  {uint32_t v=R(2);R(4)-=4;ST32(R(4),v);}
  R(3)=LD32(R(13)+4);
  R(2)=LD32(R(3));
  {uint32_t v=R(2);R(4)-=4;ST32(R(4),v);}
  R(3)=LD32(R(7));
  fp_ld(c,3,R(0)+R(3));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(3)=LD32(R(7));
  fp_ld(c,3,R(3));
  R(3)=0xe0000000u;
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,3,R(5));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  {uint32_t v=R(3);R(4)-=4;ST32(R(4),v);}
  sh4_pref(c,R(4));
  R(3)=LD32(R(12)+8);
  R(4)+=0x40u;
  R(5)=LD32(R(6));
  R(6)=R(1);
  R(2)=LD32(R(3));
  R(6)+=0x8u;
  fp_ld(c,5,R(5));R(5)+=fp_sz(c);
  fp_ld(c,4,R(5));R(5)+=fp_sz(c);
  {uint32_t v=R(2);R(4)-=4;ST32(R(4),v);}
  R(3)=LD32(R(13)+8);
  R(2)=LD32(R(3));
  {uint32_t v=R(2);R(4)-=4;ST32(R(4),v);}
  R(3)=LD32(R(6));
  fp_ld(c,3,R(0)+R(3));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(3)=LD32(R(6));
  fp_ld(c,3,R(3));
  R(3)=0xf0000000u;
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  fp_ld(c,3,R(5));
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)-=fp_sz(c);fp_st(c,5,R(4));
  {uint32_t v=R(3);R(4)-=4;ST32(R(4),v);}
  sh4_pref(c,R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  R(4)+=0x20u;
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c0353c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa0u;
  R(0)=LD32(c->gbr+84);
  R(13)=R(4);
  R(9)=0xe0u;
  R(12)=R(5);
  R(4)=0x7u;
  R(5)=0x8c0fa82cu;
  R(9)+=R(0);
  R(14)=0x3ffffffu;
  R(0)=LD32(R(9));
  R(11)=R(6);
  R(2)=LD32(R(5)+8);
  R(6)=0x20u;
  R(0)>>=16;
  R(1)=0xff00003cu;
  R(0)>>=8;
  R(4)&=R(0);
  R(10)=R(4);
  R(10)<<=2;
  ST32(R(2),R(4));
  R(0)=0x5cu;
  R(3)=LD32(R(5));
  R(2)=0xff000038u;
  R(10)+=R(3);
  R(3)=0xe0000000u;
  R(4)=LD32(R(10));
  R(14)&=R(4);
  R(4)>>=16;
  R(4)>>=8;
  R(14)|=R(3);
  ST32(R(15)+R(0),R(14));
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(3)=0x8c0d1880u;
  R(5)=R(9);
  { c->pr=0x8c03541au; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(6)=0x8c140d2cu;
  R(0)=0x48u;
  R(5)=0x8c140d0cu;
  R(14)+=0x20u;
  R(3)=R(6);
  R(2)=0x8c140cfcu;
  R(4)=0x8c140d1cu;
  R(1)=R(5);
  R(8)=R(2);
  ST32(R(15),R(2));
  ST32(R(15)+R(0),R(3));
  R(0)=0x4cu;
  ST32(R(15)+R(0),R(1));
  R(9)=R(2);
  R(2)=R(4);
  R(0)=0x54u;
  R(3)=0x8c140d44u;
  R(9)+=0x8u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(3));
  R(3)=R(6);
  R(1)=0x8c140d50u;
  R(3)+=0x4u;
  R(2)=0x8c140d70u;
  R(6)+=0x8u;
  R(0)=0x58u;
  ST32(R(15)+40,R(1));
  ST32(R(15)+32,R(3));
  R(8)+=0x4u;
  ST32(R(15)+R(0),R(2));
  ST32(R(15)+36,R(6));
  R(1)=R(5);
  R(1)+=0x4u;
  R(3)=0x8c140d8cu;
  R(0)=0x44u;
  R(2)+=0x8u;
  ST32(R(15)+20,R(2));
  R(2)=R(4);
  ST32(R(15)+28,R(1));
  R(2)+=0x4u;
  R(1)=0x8c140d9cu;
  R(4)+=0x8u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x40u;
  R(3)+=0x4u;
  R(5)+=0x8u;
  ST32(R(15)+24,R(5));
  ST32(R(15)+8,R(3));
  ST32(R(15)+12,R(2));
  ST32(R(15)+R(0),R(1));
  R(1)=0x8c140d5cu;
  R(2)=0x8c140d80u;
  R(3)=0x8c140da0u;
  ST32(R(15)+16,R(4));
  ST32(R(15)+4,R(3));
  ST32(R(15)+48,R(1));
  R(1)=0x8c140d94u;
  ST32(R(15)+56,R(2));
  R(2)=0x8c140da4u;
  ST32(R(15)+60,R(1));
  { ST32(R(15)+52,R(2)); goto L8c03571e; }
L8c035500:;
  { c->pr=0x8c035504u; R(4)=R(13); f_8c035228(c); }
  R(2)=LD32(R(15));
  R(1)=LD32(R(2));
  R(2)=LD32(R(8));
  R(1)=LD32(R(1)+8);
  R(3)=LD32(R(2)+8);
  R(1)&=R(3);
  R(3)=LD32(R(9));
  R(2)=LD32(R(3)+8);
  R(3)=0x80000000u;
  R(1)&=R(2);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c035520;
  {  goto L8c035718; }
L8c035520:;
  R(2)=LD32(R(15));
  R(1)=LD32(R(8));
  R(3)=LD32(R(2));
  R(2)=LD32(R(1));
  R(3)=LD32(R(3));
  R(1)=LD32(R(9));
  R(3)&=R(2);
  R(2)=LD32(R(1));
  R(1)=0x80000000u;
  R(3)&=R(2);
  c->t=(R(3)&R(1))==0;
  if(c->t) goto L8c03553c;
  {  goto L8c035718; }
L8c03553c:;
  R(2)=LD32(R(15));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(2));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035560;
  R(1)=LD32(R(8));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035560;
  R(1)=LD32(R(9));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035560;
  {  goto L8c035718; }
L8c035560:;
  R(2)=LD32(R(15));
  R(1)=LD32(R(2));
  R(2)=LD32(R(8));
  R(1)=LD32(R(1)+4);
  R(3)=LD32(R(2)+4);
  R(1)&=R(3);
  R(3)=LD32(R(9));
  R(2)=LD32(R(3)+4);
  R(3)=0x80000000u;
  R(1)&=R(2);
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c03557c;
  {  goto L8c035718; }
L8c03557c:;
  R(2)=LD32(R(15));
  R(0)=LD32(c->gbr+8);
  R(1)=LD32(R(2));
  R(1)+=0x4u;
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c0355a6;
  R(1)=LD32(R(8));
  R(0)=LD32(c->gbr+8);
  R(3)=R(1);
  R(3)=LD32(R(3)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c0355a6;
  R(1)=LD32(R(9));
  R(0)=LD32(c->gbr+8);
  R(3)=R(1);
  R(3)=LD32(R(3)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c0355a6;
  {  goto L8c035718; }
L8c0355a6:;
  R(2)=LD32(R(15));
  R(1)=LD32(R(2));
  R(2)=LD32(R(8));
  R(1)=LD32(R(1)+8);
  R(3)=LD32(R(2)+8);
  R(1)|=R(3);
  R(3)=LD32(R(9));
  R(2)=LD32(R(3)+8);
  R(3)=0x80000000u;
  R(1)|=R(2);
  c->t=(R(1)&R(3))==0;
  if(!c->t) goto L8c0355c2;
  {  goto L8c0356a0; }
L8c0355c2:;
  R(5)=R(12);
  { c->pr=0x8c0355c8u; R(4)=R(13); f_8c03525e(c); }
  R(5)=R(14);
  { c->pr=0x8c0355ceu; R(4)=R(13); f_8c034e40(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(15)+44,R(0)); if(k) goto L8c0355d8; }
  {  goto L8c035718; }
L8c0355d8:;
  R(3)=0x8c140d38u;
  R(0)=0x48u;
  R(2)=LD32(R(15));
  ST32(R(2),R(3));
  R(3)=0x8c140d68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x4cu;
  ST32(R(2),R(3));
  R(3)=0x8c140d88u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x54u;
  ST32(R(2),R(3));
  R(3)=0x8c140d98u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x50u;
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+R(0));
  R(0)=0x58u;
  ST32(R(8),R(2));
  R(3)=LD32(R(15)+40);
  ST32(R(9),R(3));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x44u;
  R(2)=LD32(R(15)+32);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+20);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(2)=LD32(R(15)+28);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+24);
  R(3)=LD32(R(15)+8);
  R(0)=0x40u;
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+R(0));
  R(2)=LD32(R(15)+12);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15)+16);
  ST32(R(2),R(3));
  { c->pr=0x8c03562eu; R(4)=R(14); f_8c0352d6(c); }
  R(14)=R(0);
  R(0)=LD32(R(15)+44);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c03563a;
  {  goto L8c035718; }
L8c03563a:;
  R(2)=LD32(R(15)+40);
  ST32(R(8),R(2));
  R(3)=LD32(R(15)+48);
  ST32(R(9),R(3));
  R(3)=LD32(R(15)+20);
  R(2)=LD32(R(15)+32);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+56);
  R(2)=LD32(R(15)+36);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(15)+28);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+60);
  R(2)=LD32(R(15)+24);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15)+12);
  ST32(R(2),R(3));
  R(3)=LD32(R(15)+52);
  R(2)=LD32(R(15)+16);
  ST32(R(2),R(3));
  { c->pr=0x8c03566au; R(4)=R(14); f_8c0352d6(c); }
  { R(14)=R(0); goto L8c035718; }
L8c0356a0:;
  R(0)=LD32(c->gbr+28);
  R(2)=0x400u;
  R(4)=R(0);
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c03570c;
  R(0)=0x80000u;
  c->t=(R(4)&R(0))==0;
  if(c->t) goto L8c0356e0;
  R(5)=LD32(R(15));
  R(0)=0x4u;
  R(6)=LD32(R(9));
  R(5)=LD32(R(5));
  R(4)=LD32(R(8));
  fp_ld(c,2,R(5));
  fp_ld(c,4,R(4));
  fp_ld(c,5,R(0)+R(4));
  fp_ld(c,3,R(0)+R(6));
  fp_arith(c,1,2,4);
  R(0)=0x4u;
  fp_ld(c,1,R(6));
  fp_arith(c,1,3,5);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,1,2,5);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c035718;
  {  goto L8c03570c; }
L8c0356e0:;
  R(5)=LD32(R(15));
  R(0)=0x4u;
  R(4)=LD32(R(9));
  R(5)=LD32(R(5));
  R(6)=LD32(R(8));
  fp_ld(c,2,R(5));
  fp_ld(c,4,R(6));
  fp_ld(c,5,R(0)+R(6));
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,1,2,4);
  R(0)=0x4u;
  fp_ld(c,1,R(4));
  fp_arith(c,1,3,5);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(5));
  fp_arith(c,1,2,5);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c035718;
L8c03570c:;
  R(5)=R(12);
  { c->pr=0x8c035712u; R(4)=R(13); f_8c03525e(c); }
  { c->pr=0x8c035716u; R(4)=R(14); f_8c0352d6(c); }
  R(14)=R(0);
L8c035718:;
  R(12)+=0x6u;
  R(13)+=0x6u;
  R(11)+=0xffffffffu;
L8c03571e:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c035726;
  {  goto L8c035500; }
L8c035726:;
  R(0)=0x5cu;
  R(3)=LD32(R(10));
  R(2)=LD32(R(15)+R(0));
  R(14)-=R(2);
  R(3)+=R(14);
  ST32(R(10),R(3));
  R(15)+=0x60u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c035780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=LD32(c->gbr+84);
  R(13)=R(4);
  R(9)=0xe0u;
  R(12)=R(5);
  R(4)=0x7u;
  R(5)=0x8c0fa82cu;
  R(9)+=R(0);
  R(14)=0x3ffffffu;
  R(0)=LD32(R(9));
  R(11)=R(6);
  R(2)=LD32(R(5)+8);
  R(6)=0x20u;
  R(0)>>=16;
  R(1)=0xff00003cu;
  R(0)>>=8;
  R(4)&=R(0);
  R(10)=R(4);
  R(10)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(5));
  R(5)=R(9);
  R(2)=0xff000038u;
  R(10)+=R(3);
  R(3)=0xe0000000u;
  R(4)=LD32(R(10));
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(3);
  R(4)>>=8;
  ST32(R(15)+4,R(14));
  ST32(R(1),R(4));
  ST32(R(2),R(4));
  R(3)=0x8c0d1880u;
  { c->pr=0x8c0357d8u; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(4)=0x8c140cfcu;
  R(14)+=0x20u;
  R(2)=R(4);
  R(2)+=0x4u;
  R(8)=R(4);
  R(9)=R(8);
  ST32(R(15),R(2));
  { R(9)+=0x8u; goto L8c0358d8; }
L8c035820:;
  { c->pr=0x8c035824u; R(4)=R(13); f_8c035228(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(8));
  R(1)=LD32(R(2));
  R(3)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(9));
  R(3)&=R(2);
  R(2)=LD32(R(1));
  R(1)=0x80000000u;
  R(3)&=R(2);
  c->t=(R(3)&R(1))==0;
  if(!c->t) goto L8c0358d2;
  R(2)=LD32(R(8));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(2));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c03585c;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c03585c;
  R(1)=LD32(R(9));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(c->t) goto L8c0358d2;
L8c03585c:;
  R(2)=LD32(R(8));
  R(3)=R(2);
  R(2)=LD32(R(15));
  R(3)=LD32(R(3)+4);
  R(0)=LD32(R(2));
  R(0)+=0x4u;
  R(2)=LD32(R(0));
  R(3)&=R(2);
  R(2)=LD32(R(9));
  R(1)=LD32(R(2)+4);
  R(2)=0x80000000u;
  R(3)&=R(1);
  c->t=(R(3)&R(2))==0;
  if(!c->t) goto L8c0358d2;
  R(1)=LD32(R(8));
  R(0)=LD32(c->gbr+8);
  R(3)=R(1);
  R(3)=LD32(R(3)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c03589c;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c03589c;
  R(1)=LD32(R(9));
  R(0)=LD32(c->gbr+8);
  R(3)=R(1);
  R(3)=LD32(R(3)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(c->t) goto L8c0358d2;
L8c03589c:;
  R(6)=LD32(R(15));
  R(0)=0x4u;
  R(4)=LD32(R(8));
  R(6)=LD32(R(6));
  R(5)=LD32(R(9));
  fp_ld(c,4,R(6));
  fp_ld(c,2,R(4));
  fp_ld(c,5,R(0)+R(6));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,1,2,4);
  fp_ld(c,1,R(5));
  fp_arith(c,1,3,5);
  fp_arith(c,1,1,4);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,1,2,5);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0358d2;
  R(5)=R(12);
  { c->pr=0x8c0358ccu; R(4)=R(13); f_8c03525e(c); }
  { c->pr=0x8c0358d0u; R(4)=R(14); f_8c0352d6(c); }
  R(14)=R(0);
L8c0358d2:;
  R(12)+=0x6u;
  R(13)+=0x6u;
  R(11)+=0xffffffffu;
L8c0358d8:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c035820;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(10));
  R(14)-=R(2);
  R(3)+=R(14);
  ST32(R(10),R(3));
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
void f_8c035920(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(13)=0x8c0fa82cu;
  R(8)=R(7);
  ST32(R(15)+20,R(4));
  c->t=(R(8)&R(8))==0;
  R(10)=0x3ffffffu;
  R(9)=0xff000038u;
  R(11)=0xe0000000u;
  R(12)=R(9);
  R(12)+=0x4u;
  ST32(R(15)+36,R(5));
  ST32(R(15)+32,R(6));
  R(3)=LD32(R(13)+8);
  R(2)=LD32(R(3));
  R(3)=LD32(R(13));
  R(2)<<=2;
  R(2)+=R(3);
  R(3)=0xe0u;
  ST32(R(15)+12,R(2));
  R(4)=LD32(R(2));
  R(14)=R(4);
  R(14)&=R(10);
  R(4)>>=16;
  R(4)>>=8;
  R(14)|=R(11);
  ST32(R(15)+28,R(14));
  ST32(R(12),R(4));
  ST32(R(9),R(4));
  R(0)=LD32(c->gbr+84);
  R(3)+=R(0);
  { uint32_t k=!c->t; ST32(R(15)+16,R(3)); if(k) goto L8c0359b4; }
  R(2)=LD32(R(15)+28);
  R(4)=0x7u;
  R(1)=LD32(R(15)+12);
  R(6)=0x20u;
  R(14)-=R(2);
  R(2)=LD32(R(1));
  R(2)+=R(14);
  ST32(R(1),R(2));
  R(0)=LD32(R(15)+16);
  R(2)=LD32(R(13)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(13));
  R(4)+=R(3);
  R(3)=0x8c0d1880u;
  ST32(R(15)+12,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(10);
  R(4)>>=8;
  R(14)|=R(11);
  ST32(R(15)+28,R(14));
  ST32(R(12),R(4));
  ST32(R(9),R(4));
  R(5)=LD32(R(15)+16);
  { uint32_t tg=R(3); c->pr=0x8c0359b0u; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(14)+=0x20u;
L8c0359b4:;
  R(4)=0x8c140cfcu;
  R(2)=R(4);
  R(3)=R(2);
  R(3)+=0x4u;
  ST32(R(15)+4,R(2));
  R(4)+=0x8u;
  ST32(R(15)+8,R(3));
  ST32(R(15),R(4));
  R(7)=LD32(R(15)+4);
  ST32(R(15)+4,R(7));
  R(6)=LD32(R(15)+8);
  ST32(R(15)+8,R(6));
  R(5)=LD32(R(15));
  ST32(R(15),R(5));
  ST32(R(15)+4,R(7));
  ST32(R(15)+8,R(6));
  ST32(R(15),R(5));
  ST32(R(15)+4,R(7));
  ST32(R(15)+8,R(6));
  ST32(R(15),R(5));
  ST32(R(15)+8,R(6));
  { ST32(R(15)+4,R(7)); goto L8c035b96; }
L8c035a20:;
  { c->pr=0x8c035a24u; R(4)=LD32(R(15)+20); f_8c035228(c); }
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(2));
  R(2)=LD32(R(1));
  R(3)=LD32(R(3));
  R(2)=LD32(R(2));
  R(1)=LD32(R(15));
  R(3)&=R(2);
  R(2)=LD32(R(1));
  R(0)=LD32(R(2));
  R(2)=0x80000000u;
  R(3)&=R(0);
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c035a44;
  {  goto L8c035b84; }
L8c035a44:;
  R(1)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035a6c;
  R(1)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035a6c;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035a6c;
  {  goto L8c035b84; }
L8c035a6c:;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(2));
  R(1)=R(3);
  R(3)=LD32(R(15)+8);
  R(1)+=0x4u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15));
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)&=R(3);
  R(1)=0x80000000u;
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(2)&=R(3);
  c->t=(R(2)&R(1))==0;
  if(!c->t) goto L8c035b84;
  R(3)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+8);
  R(1)=LD32(R(3));
  R(1)+=0x4u;
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035ab6;
  R(1)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035ab6;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(c->t) goto L8c035b84;
L8c035ab6:;
  R(6)=LD32(R(15)+8);
  R(0)=0x4u;
  R(4)=LD32(R(15)+4);
  R(5)=LD32(R(15));
  R(4)=LD32(R(4));
  R(5)=LD32(R(5));
  R(6)=LD32(R(6));
  fp_ld(c,2,R(4));
  fp_ld(c,5,R(6));
  fp_ld(c,4,R(0)+R(6));
  fp_ld(c,3,R(0)+R(5));
  fp_arith(c,1,2,5);
  R(0)=0x4u;
  fp_ld(c,1,R(5));
  fp_arith(c,1,3,4);
  fp_arith(c,1,1,5);
  fp_arith(c,2,3,2);
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,1,2,4);
  fp_arith(c,2,1,2);
  c->fr[2]=0x00000000u;
  fp_arith(c,1,3,1);
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c035b84;
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c035aecu; R(4)=LD32(R(15)+20); f_8c03525e(c); }
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c035b7e;
  R(3)=LD32(R(15)+12);
  R(4)=0x7u;
  R(2)=LD32(R(15)+28);
  R(6)=0x20u;
  R(1)=LD32(R(3));
  R(5)=R(8);
  R(14)-=R(2);
  R(1)+=R(14);
  ST32(R(3),R(1));
  R(0)=LD32(R(8));
  R(2)=LD32(R(13)+8);
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(13));
  R(2)=0x8c0d1880u;
  R(4)+=R(3);
  ST32(R(15)+24,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(10);
  R(4)>>=8;
  R(14)|=R(11);
  ST32(R(15)+40,R(14));
  ST32(R(12),R(4));
  ST32(R(9),R(4));
  { uint32_t tg=R(2); c->pr=0x8c035b2eu; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(3)=0x8c033b80u;
  R(14)+=0x20u;
  { c->pr=0x8c035b38u; R(4)=R(14); f_8c033b80(c); }
  R(2)=LD32(R(15)+24);
  R(4)=R(0);
  R(3)=LD32(R(15)+40);
  R(6)=0x20u;
  R(1)=LD32(R(2));
  R(4)-=R(3);
  R(1)+=R(4);
  ST32(R(2),R(1));
  R(4)=0x7u;
  R(0)=LD32(R(15)+16);
  R(2)=LD32(R(13)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(13));
  R(4)+=R(3);
  R(3)=0x8c0d1880u;
  ST32(R(15)+12,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(10);
  R(4)>>=8;
  R(14)|=R(11);
  ST32(R(15)+28,R(14));
  ST32(R(12),R(4));
  ST32(R(9),R(4));
  R(5)=LD32(R(15)+16);
  { uint32_t tg=R(3); c->pr=0x8c035b7au; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(14)+=0x20u;
L8c035b7e:;
  { c->pr=0x8c035b82u; R(4)=R(14); f_8c0352d6(c); }
  R(14)=R(0);
L8c035b84:;
  R(3)=LD32(R(15)+32);
  R(3)+=0xffffffffu;
  ST32(R(15)+32,R(3));
  R(2)=LD32(R(15)+20);
  R(2)+=0x6u;
  ST32(R(15)+20,R(2));
  R(1)=LD32(R(15)+36);
  R(1)+=0x6u;
  ST32(R(15)+36,R(1));
L8c035b96:;
  R(3)=LD32(R(15)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c035ba0;
  {  goto L8c035a20; }
L8c035ba0:;
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15)+28);
  R(1)=LD32(R(3));
  R(14)-=R(2);
  R(1)+=R(14);
  ST32(R(3),R(1));
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
void f_8c035be0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(11)=0x8c0fa82cu;
  ST32(R(15)+24,R(4));
  R(10)=0x3ffffffu;
  R(9)=0xff000038u;
  R(8)=0xe0000000u;
  R(1)=R(9);
  R(1)+=0x4u;
  ST32(R(15)+36,R(5));
  ST32(R(15)+32,R(6));
  ST32(R(15)+16,R(7));
  R(3)=LD32(R(11)+8);
  R(2)=LD32(R(3));
  R(3)=LD32(R(11));
  R(2)<<=2;
  R(2)+=R(3);
  R(3)=0xe0u;
  ST32(R(15)+12,R(2));
  R(4)=LD32(R(2));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(10);
  R(4)>>=8;
  R(14)|=R(8);
  ST32(R(15)+28,R(14));
  ST32(R(1),R(4));
  ST32(R(9),R(4));
  R(0)=LD32(c->gbr+84);
  R(3)+=R(0);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c035c76;
  R(0)=LD32(R(15)+28);
  R(4)=0x7u;
  R(2)=LD32(R(15)+12);
  R(6)=0x20u;
  R(14)-=R(0);
  R(0)=LD32(R(2));
  R(0)+=R(14);
  ST32(R(2),R(0));
  R(0)=LD32(R(15)+20);
  R(2)=LD32(R(11)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(11));
  R(4)+=R(3);
  R(3)=0x8c0d1880u;
  ST32(R(15)+12,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(10);
  R(4)>>=8;
  R(14)|=R(8);
  ST32(R(15)+28,R(14));
  ST32(R(1),R(4));
  ST32(R(9),R(4));
  R(5)=LD32(R(15)+20);
  { uint32_t tg=R(3); c->pr=0x8c035c72u; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(14)+=0x20u;
L8c035c76:;
  R(4)=0x8c140cfcu;
  R(2)=R(4);
  R(3)=R(2);
  R(4)+=0x8u;
  ST32(R(15)+4,R(2));
  R(3)+=0x4u;
  ST32(R(15),R(3));
  ST32(R(15)+8,R(4));
  R(7)=LD32(R(15)+4);
  ST32(R(15)+4,R(7));
  R(6)=LD32(R(15));
  ST32(R(15),R(6));
  R(5)=LD32(R(15)+8);
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(7));
  ST32(R(15),R(6));
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(7));
  ST32(R(15),R(6));
  { ST32(R(15)+8,R(5)); goto L8c035e06; }
L8c035cc0:;
  { c->pr=0x8c035cc4u; R(4)=LD32(R(15)+24); f_8c035228(c); }
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(15));
  R(3)=LD32(R(2));
  R(2)=LD32(R(1));
  R(3)=LD32(R(3));
  R(2)=LD32(R(2));
  R(1)=LD32(R(15)+8);
  R(3)&=R(2);
  R(2)=LD32(R(1));
  R(0)=LD32(R(2));
  R(2)=0x80000000u;
  R(3)&=R(0);
  c->t=(R(3)&R(2))==0;
  if(c->t) goto L8c035ce4;
  {  goto L8c035df4; }
L8c035ce4:;
  R(1)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035d08;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035d08;
  R(1)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+4);
  R(3)=LD32(R(1));
  R(3)=LD32(R(3));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(c->t) goto L8c035df4;
L8c035d08:;
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(2));
  R(1)=R(3);
  R(3)=LD32(R(15));
  R(1)+=0x4u;
  R(0)=LD32(R(3));
  R(2)=LD32(R(1));
  R(1)=LD32(R(15)+8);
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(0)=LD32(R(1));
  R(2)&=R(3);
  R(1)=0x80000000u;
  R(0)+=0x4u;
  R(3)=LD32(R(0));
  R(2)&=R(3);
  c->t=(R(2)&R(1))==0;
  if(!c->t) goto L8c035df4;
  R(3)=LD32(R(15)+4);
  R(0)=LD32(c->gbr+8);
  R(1)=LD32(R(3));
  R(1)+=0x4u;
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035d52;
  R(1)=LD32(R(15));
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(!c->t) goto L8c035d52;
  R(1)=LD32(R(15)+8);
  R(0)=LD32(c->gbr+8);
  R(2)=LD32(R(1));
  R(3)=LD32(R(2)+4);
  c->t=(int32_t)R(3)>(int32_t)R(0);
  if(c->t) goto L8c035df4;
L8c035d52:;
  R(5)=LD32(R(15)+36);
  { c->pr=0x8c035d58u; R(4)=LD32(R(15)+24); f_8c03525e(c); }
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c035dee;
  R(3)=LD32(R(15)+12);
  R(4)=0x7u;
  R(2)=LD32(R(15)+28);
  R(6)=0x20u;
  R(1)=LD32(R(3));
  R(14)-=R(2);
  R(1)+=R(14);
  ST32(R(3),R(1));
  R(0)=LD32(R(15)+16);
  R(2)=LD32(R(11)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  R(13)=R(4);
  R(13)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(11));
  R(2)=0xff00003cu;
  R(13)+=R(3);
  R(3)=0x8c0d1880u;
  R(4)=LD32(R(13));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(10);
  R(4)>>=8;
  R(14)|=R(8);
  ST32(R(2),R(4));
  R(12)=R(14);
  ST32(R(9),R(4));
  R(5)=LD32(R(15)+16);
  { uint32_t tg=R(3); c->pr=0x8c035da0u; R(4)=R(12); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(2)=0x8c033b80u;
  R(14)+=0x20u;
  { c->pr=0x8c035daau; R(4)=R(14); f_8c033b80(c); }
  R(4)=R(0);
  R(3)=LD32(R(13));
  R(4)-=R(12);
  R(3)+=R(4);
  R(4)=0x7u;
  ST32(R(13),R(3));
  R(0)=LD32(R(15)+20);
  R(6)=0x20u;
  R(2)=LD32(R(11)+8);
  R(0)=LD32(R(0));
  R(0)>>=16;
  R(0)>>=8;
  R(4)&=R(0);
  ST32(R(2),R(4));
  R(4)<<=2;
  R(3)=LD32(R(11));
  R(2)=0xff00003cu;
  R(4)+=R(3);
  R(3)=0x8c0d1880u;
  ST32(R(15)+12,R(4));
  R(4)=LD32(R(4));
  R(14)=R(4);
  R(4)>>=16;
  R(14)&=R(10);
  R(4)>>=8;
  R(14)|=R(8);
  ST32(R(15)+28,R(14));
  ST32(R(2),R(4));
  ST32(R(9),R(4));
  R(5)=LD32(R(15)+20);
  { uint32_t tg=R(3); c->pr=0x8c035deau; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(14)+=0x20u;
L8c035dee:;
  { c->pr=0x8c035df2u; R(4)=R(14); f_8c0352d6(c); }
  R(14)=R(0);
L8c035df4:;
  R(3)=LD32(R(15)+32);
  R(3)+=0xffffffffu;
  ST32(R(15)+32,R(3));
  R(2)=LD32(R(15)+24);
  R(2)+=0x6u;
  ST32(R(15)+24,R(2));
  R(1)=LD32(R(15)+36);
  R(1)+=0x6u;
  ST32(R(15)+36,R(1));
L8c035e06:;
  R(3)=LD32(R(15)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c035e10;
  {  goto L8c035cc0; }
L8c035e10:;
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(15)+28);
  R(1)=LD32(R(3));
  R(14)-=R(2);
  R(1)+=R(14);
  ST32(R(3),R(1));
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c035e60(SH4Ctx *c) {
  R(1)=0x149u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+84);
  R(7)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(7)=R(7)&0xFF;
  c->t=(R(7)&R(7))==0;
  { uint32_t k=c->t; R(0)=LD32(c->gbr+16); if(k) goto L8c035e80; }
  R(14)=R(7);
  R(14)+=0xffffffffu;
  R(14)<<=2;
  R(3)=0x8c12935cu;
  R(14)<<=2;
  R(14)<<=2;
  { R(14)+=R(3); goto L8c035e82; }
L8c035e80:;
  R(14)=0x0u;
L8c035e82:;
  R(2)=0x8c2e71b0u;
  R(3)=LD32(R(2));
  c->t=R(0)==R(3);
  if(!c->t) goto L8c035e92;
  R(3)=0x8c033d00u;
  R(7)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c033d00(c); return; } }
L8c035e92:;
  R(0)=LD32(c->gbr+32);
  R(3)=0x100u;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c035ee0;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c035ea6;
  R(1)=0x8c034480u;
  R(7)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c034480(c); return; } }
L8c035ea6:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0353c0(c); return; } }
L8c035ee0:;
  R(0)=LD32(c->gbr+28);
  R(1)=0x400u;
  R(7)=R(0);
  c->t=(R(1)&R(7))==0;
  if(c->t) goto L8c035f06;
  R(0)=0x80000u;
  c->t=(R(7)&R(0))==0;
  if(c->t) goto L8c035f00;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c035efc;
  R(2)=0x8c034ac0u;
  R(7)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c034ac0(c); return; } }
L8c035efc:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c035780(c); return; } }
L8c035f00:;
  R(7)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c035920(c); return; } }
L8c035f06:;
  R(7)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c035be0(c); return; } }
}
void f_8c035f40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+84);
  R(4)=0x7u;
  R(13)=0xe0u;
  R(6)=0x20u;
  R(5)=0x8c0fa82cu;
  R(13)+=R(0);
  R(14)=0x3ffffffu;
  R(0)=LD32(R(13));
  R(2)=LD32(R(5)+8);
  R(0)>>=16;
  R(12)=0xe0000000u;
  R(0)>>=8;
  R(1)=0x8c0d1880u;
  R(4)&=R(0);
  fp_mov(c,15,5);
  R(11)=R(4);
  R(11)<<=2;
  ST32(R(2),R(4));
  R(3)=LD32(R(5));
  R(5)=R(13);
  R(2)=0xff00003cu;
  R(11)+=R(3);
  R(3)=0xff000038u;
  R(4)=LD32(R(11));
  fp_mov(c,14,4);
  R(14)&=R(4);
  R(4)>>=16;
  R(4)>>=8;
  R(14)|=R(12);
  ST32(R(15),R(14));
  ST32(R(2),R(4));
  ST32(R(3),R(4));
  { uint32_t tg=R(1); c->pr=0x8c035f94u; R(4)=R(14); sh4_call(c,tg); }
  sh4_pref(c,R(14));
  R(0)=LD32(c->gbr+40);
  R(14)+=0x40u;
  R(6)=0x8c0c8138u;
  R(5)=0x8c140cfcu;
  R(4)=LD32(R(5));
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  R(0)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)+=0x8u; if(k) goto L8c035fb0; }
  R(3)=0xffffffu;
  {  goto L8c035fb2; }
L8c035fb0:;
  R(3)=0x0u;
L8c035fb2:;
  R(7)=0x8c140cf8u;
  R(0)=LD32(c->gbr+36);
  R(13)=0x8c140cf4u;
  R(0)|=R(3);
  c->fr[4]=0x00000000u;
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  fp_ld(c,3,R(7));
  fp_arith(c,0,3,15);
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(13));
  fp_arith(c,0,3,4);
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(12);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=LD32(c->gbr+40);
  R(14)+=0x40u;
  R(4)=LD32(R(5)+12);
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  R(0)=LD32(c->gbr+36);
  R(4)+=0x8u;
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  fp_ld(c,3,R(7));
  fp_arith(c,0,3,4);
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(13));
  fp_arith(c,0,3,4);
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(12);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=LD32(c->gbr+40);
  R(14)+=0x40u;
  R(4)=LD32(R(5)+4);
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  R(0)=(int32_t)(int8_t)LD8(R(6));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)+=0x8u; if(k) goto L8c036080; }
  R(3)=0xffffffu;
  {  goto L8c036082; }
L8c036080:;
  R(3)=0x0u;
L8c036082:;
  R(0)=LD32(c->gbr+36);
  R(0)|=R(3);
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  fp_ld(c,3,R(7));
  fp_arith(c,0,3,15);
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(13));
  fp_arith(c,0,3,14);
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(12);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=LD32(c->gbr+40);
  R(14)+=0x40u;
  R(4)=LD32(R(5)+8);
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  R(0)=LD32(c->gbr+36);
  R(4)+=0x8u;
  R(3)=0xf0000000u;
  {uint32_t v=R(0);R(14)-=4;ST32(R(14),v);}
  fp_ld(c,3,R(7));
  fp_arith(c,0,3,4);
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(13));
  fp_arith(c,0,3,14);
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15));
  R(14)+=0x20u;
  R(3)=LD32(R(11));
  R(14)-=R(2);
  R(3)+=R(14);
  ST32(R(11),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0360f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c036168u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(12)=0x9cu;
  R(4)=0x8c140da8u;
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c03aedau;
  R(12)+=R(4);
  R(14)=R(4);
  fp_ld(c,12,R(0));
  c->fr[14]=0x00000000u;
  c->t=R(14)>=R(12);
  fp_mov(c,15,14);
  R(0)=0x8c036170u;
  { uint32_t k=c->t; fp_ld(c,13,R(0)); if(k) goto L8c03613c; }
L8c036120:;
  fp_mov(c,4,15);
  { uint32_t tg=R(13); c->pr=0x8c036126u; fp_arith(c,0,4,13); sh4_call(c,tg); }
  fp_st(c,0,R(14));
  { uint32_t tg=R(13); c->pr=0x8c03612cu; fp_mov(c,4,15); sh4_call(c,tg); }
  R(0)=0x4u;
  fp_st(c,0,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,14,R(0)+R(14));
  R(14)+=0xcu;
  c->t=R(14)>=R(12);
  { uint32_t k=!c->t; fp_arith(c,0,15,12); if(k) goto L8c036120; }
L8c03613c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c036180(SH4Ctx *c) {
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
  R(0)=0xfffffca0u;
  R(15)+=R(0);
  R(0)=0x8c0361ccu;
  fp_mov(c,15,8);
  fp_ld(c,3,R(0));
  R(0)=0x8c0361d0u;
  fp_ld(c,2,R(0));
  R(0)=0x8c0361d4u;
  fp_mov(c,14,6);
  fp_arith(c,0,14,3);
  fp_arith(c,0,15,2);
  R(4)=0x2b8u;
  R(5)=0x210u;
  R(7)=0xdu;
  R(6)=0x8c140da8u;
  R(4)+=R(15);
  R(5)+=R(15);
  { fp_ld(c,6,R(0)); goto L8c03620c; }
L8c0361e0:;
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  R(7)+=0xffffffffu;
  fp_mov(c,0,6);
  fp_mov(c,3,4);
  fp_fmac(c,3,2);
  fp_mov(c,0,7);
  fp_st(c,3,R(4));
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_mov(c,3,5);
  fp_fmac(c,3,2);
  R(6)+=0x4u;
  fp_st(c,3,R(4));
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_st(c,14,R(4));
  R(4)+=0x4u;
  fp_st(c,15,R(5));
  R(5)+=0x4u;
L8c03620c:;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0361e0;
  fp_st(c,4,R(4));
  R(4)+=0x4u;
  fp_st(c,4,R(5));
  R(5)+=0x4u;
  R(13)=0x168u;
  fp_st(c,5,R(4));
  R(4)+=0x4u;
  fp_st(c,5,R(5));
  R(5)+=0x4u;
  R(3)=0x8c07ca40u;
  R(13)+=R(15);
  fp_st(c,14,R(4));
  R(6)=R(13);
  fp_st(c,15,R(5));
  R(0)=LD32(c->gbr+88);
  R(5)=0x2b8u;
  R(7)=R(0);
  R(14)=R(0);
  R(5)+=R(15);
  R(7)+=0x10u;
  { uint32_t tg=R(3); c->pr=0x8c03623cu; R(4)=0xeu; sh4_call(c,tg); }
  R(8)=0xc0u;
  R(5)=0xeu;
  R(2)=0x8c07f76cu;
  R(6)=R(13);
  R(8)+=R(15);
  R(7)=R(8);
  { c->pr=0x8c03624cu; R(4)=R(14); f_8c07f76c(c); }
  R(5)=0x210u;
  R(7)=R(14);
  R(3)=0x8c07ca40u;
  R(7)+=0x10u;
  R(5)+=R(15);
  R(6)=R(13);
  { c->pr=0x8c03625cu; R(4)=0xeu; f_8c07ca40(c); }
  R(2)=0x8c07f76cu;
  R(7)=R(15);
  R(5)=0xeu;
  R(6)=R(13);
  R(7)+=0x18u;
  { c->pr=0x8c03626au; R(4)=R(14); f_8c07f76c(c); }
  R(4)=0x9cu;
  R(9)=R(8);
  R(0)=0x4u;
  R(11)=R(15);
  R(9)+=R(4);
  R(3)=R(15);
  fp_ld(c,13,R(0)+R(9));
  R(11)+=0x18u;
  R(0)=0x8u;
  fp_ld(c,14,R(9));
  R(11)+=R(4);
  fp_ld(c,15,R(0)+R(9));
  fp_ld(c,3,R(11));
  R(0)=0x10u;
  R(3)+=0x18u;
  R(4)=0x8c1247f0u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x14u;
  R(12)=R(8);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,12,R(0)+R(11));
  ST32(R(15),R(3));
  R(3)=0x8c0e0580u;
  { c->pr=0x8c0362a2u; R(5)=0x0u; f_8c0e0580(c); }
  R(0)=0x8c1247f0u;
  R(4)=0x7u;
  R(3)=0x8c0fa834u;
  R(6)=0x20u;
  R(0)=LD32(R(0));
  R(2)=LD32(R(3));
  R(0)>>=16;
  R(1)=0x8c0fa82cu;
  R(0)>>=8;
  R(14)=0x3ffffffu;
  R(4)&=R(0);
  R(0)=0xff00003cu;
  ST32(R(2),R(4));
  R(13)=R(4);
  R(2)=LD32(R(1));
  R(13)<<=2;
  R(3)=0xff000038u;
  R(13)+=R(2);
  R(2)=0xe0000000u;
  R(4)=LD32(R(13));
  R(5)=0x8c1247f0u;
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(2);
  R(2)=0x8c0d1880u;
  R(4)>>=8;
  ST32(R(15)+4,R(14));
  ST32(R(0),R(4));
  ST32(R(3),R(4));
  { c->pr=0x8c0362e0u; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(14)+=0x48u;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  R(14)-=fp_sz(c);fp_st(c,13,R(14));
  sh4_pref(c,R(14));
  R(10)=R(12);
  R(0)=0x8u;
  R(10)+=0xcu;
  R(14)-=fp_sz(c);fp_st(c,14,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(10));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15)+4);
  R(14)+=0x40u;
  R(3)=LD32(R(13));
  R(14)-=R(2);
  R(4)=0x8c1247f0u;
  R(2)=0x8c0e0580u;
  R(3)+=R(14);
  ST32(R(13),R(3));
  { c->pr=0x8c03632au; R(5)=0x0u; f_8c0e0580(c); }
  R(0)=0x8c1247f0u;
  R(4)=0x7u;
  R(3)=0x8c0fa834u;
  R(6)=0x20u;
  R(0)=LD32(R(0));
  R(2)=LD32(R(3));
  R(0)>>=16;
  R(1)=0x8c0fa82cu;
  R(0)>>=8;
  R(14)=0x3ffffffu;
  R(4)&=R(0);
  R(0)=0xff00003cu;
  ST32(R(2),R(4));
  R(13)=R(4);
  R(2)=LD32(R(1));
  R(13)<<=2;
  R(3)=0xff000038u;
  R(13)+=R(2);
  R(2)=0xe0000000u;
  R(4)=LD32(R(13));
  R(5)=0x8c1247f0u;
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(2);
  R(2)=0x8c0d1880u;
  R(4)>>=8;
  ST32(R(15)+4,R(14));
  ST32(R(0),R(4));
  ST32(R(3),R(4));
  { c->pr=0x8c036368u; R(4)=R(14); f_8c0d1880(c); }
  {  goto L8c0363c0; }
L8c0363c0:;
  sh4_pref(c,R(14));
  R(4)=LD32(R(15));
  R(0)=0x8u;
  R(14)+=0x48u;
  R(4)+=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(10));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(3));
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x14u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(3));
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(14)-=fp_sz(c);fp_st(c,12,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15));
  R(12)+=0xcu;
  R(14)+=0x40u;
  R(2)+=0xcu;
  ST32(R(15),R(2));
  { R(6)=0xbu; goto L8c0365ac; }
L8c0364c0:;
  R(14)+=0x28u;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  R(14)-=fp_sz(c);fp_st(c,13,R(14));
  sh4_pref(c,R(14));
  R(5)=R(12);
  R(0)=0x8u;
  R(5)+=0xcu;
  R(14)-=fp_sz(c);fp_st(c,14,R(14));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x4u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(5));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(7)=LD32(R(15));
  R(0)=0x8u;
  R(14)+=0x68u;
  R(4)=R(7);
  R(4)+=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(5));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(7));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x14u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(7));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(14)-=fp_sz(c);fp_st(c,12,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15));
  R(6)+=0xffffffffu;
  R(14)+=0x40u;
  R(2)+=0xcu;
  ST32(R(15),R(2));
  R(12)+=0xcu;
L8c0365ac:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0364c0;
  R(14)+=0x28u;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  R(14)-=fp_sz(c);fp_st(c,13,R(14));
  sh4_pref(c,R(14));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,14,R(14));
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x4u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(8));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(14)+=0x68u;
  R(0)=0x1cu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(8));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(14)+=0x68u;
  R(0)=0x1cu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(3));
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15)+4);
  R(14)+=0x40u;
  R(3)=LD32(R(13));
  R(14)-=R(2);
  R(4)=0x8c1247f0u;
  R(2)=0x8c0e0580u;
  R(3)+=R(14);
  R(5)=0x20000000u;
  { c->pr=0x8c036670u; ST32(R(13),R(3)); f_8c0e0580(c); }
  R(0)=0x8c1247f0u;
  R(4)=0x7u;
  R(3)=0x8c0fa834u;
  R(6)=0x20u;
  R(0)=LD32(R(0));
  R(2)=LD32(R(3));
  R(0)>>=16;
  R(1)=0x8c0fa82cu;
  R(0)>>=8;
  R(14)=0x3ffffffu;
  R(4)&=R(0);
  R(0)=0xff00003cu;
  ST32(R(2),R(4));
  R(13)=R(4);
  R(2)=LD32(R(1));
  R(13)<<=2;
  R(3)=0xff000038u;
  R(13)+=R(2);
  R(2)=0xe0000000u;
  R(4)=LD32(R(13));
  R(5)=0x8c1247f0u;
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(2);
  R(2)=0x8c0d1880u;
  R(4)>>=8;
  ST32(R(15)+4,R(14));
  ST32(R(0),R(4));
  ST32(R(3),R(4));
  { c->pr=0x8c0366aeu; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(14)+=0x48u;
  R(0)=0x1cu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(0)+R(3));
  R(0)=0x14u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(3)=LD32(R(15));
  fp_ld(c,3,R(3));
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(14)-=fp_sz(c);fp_st(c,12,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x4u;
  R(2)=LD32(R(15)+4);
  R(14)+=0x40u;
  R(3)=LD32(R(13));
  R(14)-=R(2);
  R(10)=R(15);
  R(3)+=R(14);
  R(4)=0x8c124830u;
  ST32(R(13),R(3));
  R(12)=R(8);
  fp_ld(c,14,R(0)+R(9));
  R(0)=0x8u;
  fp_ld(c,13,R(0)+R(9));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0xcu;
  R(3)=0x8c0e0580u;
  R(10)+=0x18u;
  fp_ld(c,12,R(11));
  fp_ld(c,15,R(9));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c036726u; R(5)=0x0u; f_8c0e0580(c); }
  R(9)=0x8c124830u;
  R(4)=0x7u;
  R(3)=0x8c0fa834u;
  R(6)=0x20u;
  R(0)=LD32(R(9));
  R(5)=R(9);
  R(2)=LD32(R(3));
  R(0)>>=16;
  R(1)=0x8c0fa82cu;
  R(0)>>=8;
  R(14)=0x3ffffffu;
  R(4)&=R(0);
  R(3)=0xff000038u;
  ST32(R(2),R(4));
  R(13)=R(4);
  R(2)=LD32(R(1));
  R(13)<<=2;
  R(0)=0xff00003cu;
  R(13)+=R(2);
  R(2)=0xe0000000u;
  R(4)=LD32(R(13));
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(2);
  R(2)=0x8c0d1880u;
  R(4)>>=8;
  ST32(R(15)+4,R(14));
  ST32(R(0),R(4));
  ST32(R(3),R(4));
  { c->pr=0x8c036764u; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(14)+=0x48u;
  R(14)-=fp_sz(c);fp_st(c,13,R(14));
  R(14)-=fp_sz(c);fp_st(c,14,R(14));
  sh4_pref(c,R(14));
  R(11)=R(12);
  R(0)=0x8u;
  R(11)+=0xcu;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x4u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(11));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15)+4);
  R(14)+=0x40u;
  R(3)=LD32(R(13));
  R(5)=0x0u;
  R(14)-=R(2);
  R(2)=0x8c0e0580u;
  R(3)+=R(14);
  ST32(R(13),R(3));
  { c->pr=0x8c0367aeu; R(4)=R(9); f_8c0e0580(c); }
  R(0)=LD32(R(9));
  R(4)=0x7u;
  R(3)=0x8c0fa834u;
  R(5)=R(9);
  R(0)>>=16;
  R(1)=0x8c0fa82cu;
  R(2)=LD32(R(3));
  R(0)>>=8;
  R(4)&=R(0);
  R(14)=0x3ffffffu;
  ST32(R(2),R(4));
  R(13)=R(4);
  R(2)=LD32(R(1));
  R(13)<<=2;
  R(3)=0xff000038u;
  R(6)=0x20u;
  R(13)+=R(2);
  R(2)=0xe0000000u;
  R(4)=LD32(R(13));
  R(0)=0xff00003cu;
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(2);
  R(2)=0x8c0d1880u;
  R(4)>>=8;
  ST32(R(15)+4,R(14));
  ST32(R(0),R(4));
  ST32(R(3),R(4));
  { c->pr=0x8c0367eau; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(4)=R(10);
  R(0)=0x8u;
  R(4)+=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(14)+=0x48u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(11));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(10));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {  goto L8c0368a0; }
L8c0368a0:;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(4));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(4));
  R(0)=0x8u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(10));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(14)-=fp_sz(c);fp_st(c,12,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(10)+=0xcu;
  R(12)+=0xcu;
  R(14)+=0x40u;
  { R(4)=0xbu; goto L8c036a06; }
L8c036920:;
  R(14)+=0x28u;
  R(14)-=fp_sz(c);fp_st(c,13,R(14));
  R(14)-=fp_sz(c);fp_st(c,14,R(14));
  sh4_pref(c,R(14));
  R(6)=R(12);
  R(0)=0x8u;
  R(6)+=0xcu;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x4u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(6));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(5)=R(10);
  R(0)=0x8u;
  R(5)+=0xcu;
  fp_ld(c,3,R(0)+R(5));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(5));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(5));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(6));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(5));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(5));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(10));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(14)+=0x68u;
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(5));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  fp_ld(c,3,R(5));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(10));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(14)-=fp_sz(c);fp_st(c,12,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(10)+=0xcu;
  R(4)+=0xffffffffu;
  R(14)+=0x40u;
  R(12)+=0xcu;
L8c036a06:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c036920;
  R(14)+=0x28u;
  R(14)-=fp_sz(c);fp_st(c,13,R(14));
  R(14)-=fp_sz(c);fp_st(c,14,R(14));
  sh4_pref(c,R(14));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,15,R(14));
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x4u;
  R(3)=0xf0000000u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(8));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(14)+=0x68u;
  R(0)=0x1cu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(8));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(8));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(14)+=0x68u;
  R(0)=0x1cu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(10));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(12));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15)+4);
  R(14)+=0x40u;
  R(3)=LD32(R(13));
  R(14)-=R(2);
  R(4)=0x8c124830u;
  R(2)=0x8c0e0580u;
  R(3)+=R(14);
  R(5)=0x20000000u;
  { c->pr=0x8c036ac2u; ST32(R(13),R(3)); f_8c0e0580(c); }
  R(0)=LD32(R(9));
  R(4)=0x7u;
  R(3)=0x8c0fa834u;
  R(5)=R(9);
  R(0)>>=16;
  R(1)=0x8c0fa82cu;
  R(2)=LD32(R(3));
  R(0)>>=8;
  R(4)&=R(0);
  R(14)=0x3ffffffu;
  ST32(R(2),R(4));
  R(13)=R(4);
  R(2)=LD32(R(1));
  R(13)<<=2;
  R(3)=0xff000038u;
  R(6)=0x20u;
  R(13)+=R(2);
  R(2)=0xe0000000u;
  R(4)=LD32(R(13));
  R(0)=0xff00003cu;
  R(14)&=R(4);
  R(4)>>=16;
  R(14)|=R(2);
  R(2)=0x8c0d1880u;
  R(4)>>=8;
  ST32(R(15)+4,R(14));
  ST32(R(0),R(4));
  ST32(R(3),R(4));
  { c->pr=0x8c036afeu; R(4)=R(14); f_8c0d1880(c); }
  sh4_pref(c,R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(14)+=0x48u;
  R(0)=0x1cu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  sh4_pref(c,R(14));
  R(0)=0x18u;
  R(3)=0xf0000000u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x4u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x8u;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(10));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  fp_ld(c,3,R(0)+R(15));
  R(14)-=fp_sz(c);fp_st(c,3,R(14));
  R(14)-=fp_sz(c);fp_st(c,12,R(14));
  {uint32_t v=R(3);R(14)-=4;ST32(R(14),v);}
  sh4_pref(c,R(14));
  R(2)=LD32(R(15)+4);
  R(14)+=0x40u;
  R(3)=LD32(R(13));
  R(14)-=R(2);
  R(1)=0x360u;
  R(3)+=R(14);
  ST32(R(13),R(3));
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
void f_8c036bc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c758cu;
  ST32(R(15),R(5));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c036be0; }
  R(2)=0x8c064e90u;
  R(4)=0xf4u;
  R(5)=0x8c0b9778u;
  { c->pr=0x8c036bdcu; R(6)=0x4bu; f_8c064e90(c); }
  {  goto L8c036bea; }
L8c036be0:;
  R(1)=0x8c0199c4u;
  R(4)=0xf4u;
  R(5)=0x8c0b9778u;
  { c->pr=0x8c036beau; R(6)=0x4bu; f_8c0199c4(c); }
L8c036bea:;
  R(1)=R(0);
  c->t=(R(1)&R(1))==0;
  R(3)=R(0);
  { uint32_t k=!c->t; ST32(R(14),R(0)); if(k) goto L8c036c24; }
  R(3)=0x8c0125ccu;
  R(6)=0x4bu;
  R(5)=0x8c0b9778u;
  { c->pr=0x8c036bfeu; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0b9778u;
  R(2)=0x4bu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  R(3)=0xffu;
  R(7)=0x1u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c036c22u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c036c24:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0xf4u;
  { c->pr=0x8c036c2eu; R(4)=LD32(R(14)); f_8c0686b8(c); }
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c036ce6;
  R(2)=LD32(R(15));
  R(3)=LD32(R(14));
  ST32(R(3)+8,R(2));
  R(2)=0xdeu;
  R(3)=LD32(R(14));
  R(0)=R(2);
  R(0)+=0x12u;
  ST32(R(3)+R(0),R(2));
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+8);
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c036ca0;
  c->t=(int32_t)R(0)==101;
  if(c->t) goto L8c036ca0;
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c036cb2;
  c->t=(int32_t)R(0)==103;
  if(c->t) goto L8c036cb2;
  {  goto L8c036cc2; }
L8c036ca0:;
  R(3)=LD32(R(14));
  R(0)=0x78u;
  c->fr[4]=0x3F800000u;
  fp_st(c,4,R(0)+R(3));
  R(0)=0x7cu;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  {  goto L8c036cc2; }
L8c036cb2:;
  R(0)=0x8c036d28u;
  R(3)=LD32(R(14));
  fp_ld(c,4,R(0));
  R(0)=0x78u;
  fp_st(c,4,R(0)+R(3));
  R(0)=0x7cu;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
L8c036cc2:;
  R(0)=0x8c036d2cu;
  R(3)=LD32(R(14));
  fp_ld(c,3,R(0));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0x8c036d30u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  R(3)=LD32(R(14));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x78u;
  R(4)=LD32(R(14));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)+=0x70u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(4));
L8c036ce6:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c036cee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c758cu;
  ST32(R(15),R(5));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c036d40; }
  R(2)=0x8c064e90u;
  R(4)=0xf4u;
  R(5)=0x8c0b9778u;
  { c->pr=0x8c036d0au; R(6)=0x71u; f_8c064e90(c); }
  {  goto L8c036d4a; }
L8c036d40:;
  R(1)=0x8c0199c4u;
  R(4)=0xf4u;
  R(5)=0x8c0b9778u;
  { c->pr=0x8c036d4au; R(6)=0x71u; f_8c0199c4(c); }
L8c036d4a:;
  R(1)=R(0);
  c->t=(R(1)&R(1))==0;
  R(3)=R(0);
  { uint32_t k=!c->t; ST32(R(14),R(0)); if(k) goto L8c036d84; }
  R(3)=0x8c0125ccu;
  R(6)=0x71u;
  R(5)=0x8c0b9778u;
  { c->pr=0x8c036d5eu; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0b9778u;
  R(2)=0x71u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  R(3)=0xffu;
  R(7)=0x1u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c65e0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c036d82u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c036d84:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0xf4u;
  { c->pr=0x8c036d8eu; R(4)=LD32(R(14)); f_8c0686b8(c); }
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c036e5a;
  R(2)=LD32(R(15));
  R(3)=LD32(R(14));
  R(1)=0x8c0c52dcu;
  ST32(R(3)+8,R(2));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(0)=0xf0u;
  R(3)=LD32(R(14));
  R(2)=R(2)&0xFF;
  ST32(R(3)+R(0),R(2));
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+8);
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c036dbe;
  c->t=(int32_t)R(0)==101;
  if(c->t) goto L8c036dbe;
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c036e20;
  c->t=(int32_t)R(0)==103;
  if(c->t) goto L8c036e20;
  {  goto L8c036e36; }
L8c036dbe:;
  R(3)=LD32(R(14));
  R(0)=0x78u;
  c->fr[4]=0x3F800000u;
  fp_st(c,4,R(0)+R(3));
  R(0)=0x7cu;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  {  goto L8c036e36; }
L8c036e20:;
  R(2)=0x8c0c52e0u;
  R(0)=0x8c036ec8u;
  fp_ld(c,4,R(0));
  R(0)=0x78u;
  fp_ld(c,3,R(2));
  R(3)=LD32(R(14));
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(3));
  R(0)=0x7cu;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
L8c036e36:;
  R(0)=0x8c036ed0u;
  R(3)=LD32(R(14));
  fp_ld(c,3,R(0));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0x8c036ed4u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  R(3)=LD32(R(14));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x78u;
  R(4)=LD32(R(14));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)+=0x70u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(4));
L8c036e5a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c036e62(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff78u;
  R(15)+=R(0);
  R(3)=0x8c01145cu;
  R(14)=R(6);
  ST16(R(15),R(5));
  R(5)=R(15);
  { c->pr=0x8c036e76u; R(5)+=0x6cu; f_8c01145c(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c036ea0;
  R(3)=0x8c011602u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c036e84u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c011602(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c036ea0;
  R(4)=0x8c140e4cu;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c036e92;
  { R(14)=LD32(R(4)); goto L8c036e94; }
L8c036e92:;
  ST32(R(4),R(14));
L8c036e94:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x4u;
  R(6)=R(14);
  { c->pr=0x8c036ea0u; R(4)+=0x6cu; f_8c037134(c); }
L8c036ea0:;
  R(1)=0x88u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c036f00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff0cu;
  R(15)+=R(0);
  R(3)=LD32(R(4)+4);
  R(13)=R(5);
  R(5)=0xe8u;
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  R(5)+=R(15);
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c036f22; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c036f22:;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(5));
  R(3)=LD32(R(4));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c036f38; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c036f38:;
  fp_arith(c,2,3,5);
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x60u;
  R(4)=LD32(R(4)+R(0));
  R(14)=LD32(R(4));
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==100;
  { uint32_t k=c->t; c->fr[7]=0x00000000u; if(k) goto L8c036f5c; }
  c->t=(int32_t)R(0)==101;
  if(c->t) goto L8c036f5c;
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c036f62;
  c->t=(int32_t)R(0)==103;
  if(c->t) goto L8c036f62;
  {  goto L8c036f68; }
L8c036f5c:;
  R(0)=0x8c036f8cu;
  { fp_ld(c,5,R(0)); goto L8c036fa0; }
L8c036f62:;
  R(0)=0x88u;
  { fp_ld(c,5,R(0)+R(14)); goto L8c036fa0; }
L8c036f68:;
  R(0)=0x8u;
  fp_st(c,7,R(0)+R(13));
  R(0)=0x4u;
  fp_st(c,7,R(0)+R(13));
  { fp_st(c,7,R(13)); goto L8c03702e; }
L8c036fa0:;
  R(0)=0x98u;
  R(4)=0xdcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x4u;
  R(4)+=R(15);
  c->fr[2]=0x00000000u;
  fp_st(c,3,R(4));
  fp_cmp(c,0,6,2);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(4));
  fp_ld(c,3,R(4));
  fp_ld(c,4,R(5));
  { uint32_t k=c->t; fp_arith(c,1,4,3); if(k) goto L8c036fee; }
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xd0u;
  fp_arith(c,3,4,3);
  fp_arith(c,3,4,6);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x90u;
  fp_arith(c,1,1,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xd4u;
  fp_arith(c,3,1,3);
  c->fr[3]=0x3F800000u;
  fp_arith(c,3,1,6);
  fp_st(c,1,R(0)+R(15));
  fp_mov(c,1,6);
  fp_arith(c,0,1,3);
  R(0)=0xd8u;
  fp_arith(c,3,1,6);
  fp_arith(c,2,1,5);
  { fp_st(c,1,R(0)+R(15)); goto L8c03700e; }
L8c036fee:;
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xd0u;
  fp_arith(c,3,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x90u;
  fp_arith(c,1,1,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xd4u;
  fp_arith(c,3,1,3);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xd8u;
  fp_st(c,7,R(0)+R(15));
L8c03700e:;
  R(3)=0x8c079e4eu;
  R(5)=R(15);
  R(5)+=0x68u;
  { c->pr=0x8c037018u; R(4)=R(14); f_8c079e4e(c); }
  R(2)=0x8c0153d8u;
  R(5)=R(15);
  R(5)+=0x68u;
  { c->pr=0x8c037022u; R(4)=R(15); f_8c0153d8(c); }
  R(6)=0xd0u;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)+=R(15);
  { c->pr=0x8c03702eu; R(4)=R(13); f_8c014eaa(c); }
L8c03702e:;
  R(1)=0xf4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c036fa0(SH4Ctx *c) {
  R(0)=0x98u;
  R(4)=0xdcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)+=0x4u;
  R(4)+=R(15);
  c->fr[2]=0x00000000u;
  fp_st(c,3,R(4));
  fp_cmp(c,0,6,2);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(4));
  fp_ld(c,3,R(4));
  fp_ld(c,4,R(5));
  { uint32_t k=c->t; fp_arith(c,1,4,3); if(k) goto L8c036fee; }
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xd0u;
  fp_arith(c,3,4,3);
  fp_arith(c,3,4,6);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x90u;
  fp_arith(c,1,1,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xd4u;
  fp_arith(c,3,1,3);
  c->fr[3]=0x3F800000u;
  fp_arith(c,3,1,6);
  fp_st(c,1,R(0)+R(15));
  fp_mov(c,1,6);
  fp_arith(c,0,1,3);
  R(0)=0xd8u;
  fp_arith(c,3,1,6);
  fp_arith(c,2,1,5);
  { fp_st(c,1,R(0)+R(15)); goto L8c03700e; }
L8c036fee:;
  R(0)=0x8cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xd0u;
  fp_arith(c,3,4,3);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,1,R(0)+R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x90u;
  fp_arith(c,1,1,3);
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xd4u;
  fp_arith(c,3,1,3);
  fp_st(c,1,R(0)+R(15));
  R(0)=0xd8u;
  fp_st(c,7,R(0)+R(15));
L8c03700e:;
  R(3)=0x8c079e4eu;
  R(5)=R(15);
  R(5)+=0x68u;
  { c->pr=0x8c037018u; R(4)=R(14); f_8c079e4e(c); }
  R(2)=0x8c0153d8u;
  R(5)=R(15);
  R(5)+=0x68u;
  { c->pr=0x8c037022u; R(4)=R(15); f_8c0153d8(c); }
  R(6)=0xd0u;
  R(5)=R(15);
  R(3)=0x8c014eaau;
  R(6)+=R(15);
  { c->pr=0x8c03702eu; R(4)=R(13); f_8c014eaa(c); }
  R(1)=0xf4u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03703a(SH4Ctx *c) {
  R(6)=0x8c140e4cu;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c037080;
  { R(4)=LD32(R(6)); goto L8c037082; }
L8c037080:;
  ST32(R(6),R(4));
L8c037082:;
  R(5)=R(5)&0xFF;
  R(7)=0x8c0c52e0u;
  c->t=(R(5)&R(5))==0;
  R(6)=0x1u;
  { uint32_t k=c->t; c->fr[4]=0x3F800000u; if(k) goto L8c0370b2; }
  R(2)=0xdeu;
  R(0)=R(2);
  R(0)+=0x12u;
  R(3)=LD32(R(4)+R(0));
  c->t=R(3)==R(2);
  if(c->t) goto L8c0370b2;
  R(0)=0x8c0370ecu;
  R(2)=0x8c0c52e4u;
  R(3)=0x8c0c52dcu;
  ST8(R(3),R(6));
  fp_ld(c,3,R(0));
  R(0)=0x8c0370f0u;
  fp_st(c,3,R(7));
  fp_ld(c,3,R(0));
  R(0)=0xf0u;
  fp_st(c,3,R(2));
  { ST32(R(4)+R(0),R(6)); goto L8c0370c2; }
L8c0370b2:;
  R(3)=0x8c0c52e4u;
  R(5)=0x0u;
  R(0)=0xf0u;
  R(2)=0x8c0c52dcu;
  ST8(R(2),R(5));
  fp_st(c,4,R(7));
  fp_st(c,4,R(3));
  ST32(R(4)+R(0),R(5));
L8c0370c2:;
  R(0)=LD32(R(4)+8);
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c0370d8;
  c->t=(int32_t)R(0)==101;
  if(c->t) goto L8c0370d8;
  c->t=(int32_t)R(0)==102;
  if(c->t) goto L8c037100;
  c->t=(int32_t)R(0)==103;
  if(c->t) goto L8c037100;
  {  goto L8c037110; }
L8c0370d8:;
  R(0)=0x78u;
  { fp_st(c,4,R(0)+R(4)); goto L8c03710c; }
L8c037100:;
  R(0)=0x8c0371c8u;
  fp_ld(c,3,R(7));
  fp_ld(c,4,R(0));
  R(0)=0x78u;
  fp_arith(c,2,3,4);
  fp_st(c,3,R(0)+R(4));
L8c03710c:;
  R(0)=0x7cu;
  fp_st(c,4,R(0)+R(4));
L8c037110:;
  R(0)=0x8c0371ccu;
  R(3)=0x8c0c52e8u;
  fp_ld(c,3,R(0));
  R(0)=0x80u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c0371d0u;
  fp_ld(c,3,R(0));
  R(0)=0x84u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)+=0x70u;
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(4));
  { ST8(R(3),R(6)); return; }
}
void f_8c037134(SH4Ctx *c) {
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
  R(15)+=0xfffffff0u;
  R(2)=0x8c0c52dcu;
  R(13)=R(4);
  R(0)=0xf0u;
  R(10)=R(6);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(4)=LD32(R(10)+R(0));
  R(3)=R(3)&0xFF;
  c->t=R(4)==R(3);
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c037172; }
  R(1)=0xdeu;
  c->t=R(4)==R(1);
  if(c->t) goto L8c037172;
  R(3)=0x8c0c52dcu;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  R(5)=c->t;
  { c->pr=0x8c037172u; R(4)=R(10); f_8c03703a(c); }
L8c037172:;
  c->fr[2]=0x00000000u;
  R(3)=0x0u;
  R(2)=0x8c0c52e8u;
  ST8(R(2),R(3));
  R(1)=LD32(R(14)+4);
  c->fpul=R(1);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c037190; }
  R(0)=0x8c0371dcu;
  fp_mov(c,13,4);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,13,3); goto L8c037192; }
L8c037190:;
  fp_mov(c,13,4);
L8c037192:;
  R(0)=0x8u;
  fp_mov(c,2,13);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(3)=LD32(R(14));
  c->fr[2]=0x00000000u;
  c->fpul=R(3);
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,4,3); if(k) goto L8c0371e0; }
  R(0)=0x8c0371dcu;
  fp_mov(c,14,4);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,14,3); goto L8c0371e2; }
L8c0371e0:;
  fp_mov(c,14,4);
L8c0371e2:;
  R(0)=0xcu;
  fp_mov(c,2,14);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  c->fr[12]=0x3F800000u;
  fp_arith(c,2,2,3);
  R(12)=0x8c0686fcu;
  R(11)=0x8c068530u;
  c->fr[4]=0x3F800000u;
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8c0372e8u;
  fp_ld(c,15,R(0));
  R(0)=0x50u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x48u;
  fp_mov(c,0,15);
  c->fpul=R(3);
  fp_float(c,3);
  fp_fmac(c,3,13);
  fp_st(c,3,R(0)+R(10));
  R(0)=0x54u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x48u;
  c->fpul=R(3);
  fp_float(c,3);
  fp_fmac(c,3,14);
  fp_st(c,3,R(0)+R(10));
  fp_st(c,12,R(15));
  R(0)=LD32(R(10)+8);
  c->t=(int32_t)R(0)==101;
  { uint32_t k=c->t; fp_unary(c,0,4); if(k) goto L8c03723a; }
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c037300;
  c->t=(int32_t)R(0)==103;
  if(!c->t) goto L8c03722e;
  {  goto L8c0373e0; }
L8c03722e:;
  c->t=(int32_t)R(0)==102;
  if(!c->t) goto L8c037236;
  {  goto L8c0375a0; }
L8c037236:;
  {  goto L8c0376ac; }
L8c03723a:;
  R(0)=0x88u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(10));
  R(0)=0x78u;
  fp_ld(c,3,R(0)+R(10));
  R(0)=0x7cu;
  fp_st(c,3,R(0)+R(10));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x78u;
  fp_ld(c,2,R(0)+R(10));
  R(0)+=0x14u;
  fp_arith(c,2,2,3);
  fp_mov(c,3,12);
  fp_arith(c,3,3,2);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(10));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x7cu;
  fp_ld(c,2,R(0)+R(10));
  R(0)+=0x14u;
  fp_arith(c,2,2,3);
  c->fr[3]=0x00000000u;
  fp_arith(c,3,12,2);
  fp_unary(c,0,12);
  fp_st(c,12,R(0)+R(10));
  R(0)+=0x44u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffd0u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffecu;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x1cu;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xfffffff0u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffe0u;
  fp_st(c,4,R(0)+R(10));
  R(0)=0xbcu;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x14u;
  fp_st(c,4,R(0)+R(10));
  R(0)=0xe0u;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffacu;
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x3cu;
  fp_arith(c,3,13,3);
  fp_mov(c,4,13);
  fp_unary(c,0,4);
  fp_arith(c,2,4,15);
  fp_st(c,4,R(0)+R(10));
  R(0)+=0xfffffff0u;
  fp_st(c,4,R(0)+R(10));
  R(0)+=0xffffffd8u;
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x48u;
  fp_arith(c,3,14,3);
  fp_mov(c,4,14);
  fp_unary(c,0,4);
  fp_arith(c,2,4,15);
  fp_st(c,4,R(0)+R(10));
  { R(0)+=0x10u; goto L8c0373b2; }
L8c037300:;
  R(0)=0x88u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(10));
  R(3)=LD32(R(14)+4);
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c037318; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c037318:;
  R(0)=0x78u;
  fp_ld(c,1,R(0)+R(10));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8cu;
  fp_arith(c,2,1,3);
  fp_mov(c,3,13);
  fp_arith(c,3,3,1);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(10));
  R(3)=LD32(R(14));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c037340; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c037340:;
  R(0)=0x7cu;
  fp_ld(c,1,R(0)+R(10));
  R(0)=0xcu;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x90u;
  fp_arith(c,2,1,3);
  fp_mov(c,3,14);
  fp_arith(c,3,3,1);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x44u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffd0u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffecu;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x1cu;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xfffffff0u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffe0u;
  fp_st(c,4,R(0)+R(10));
  R(0)=0xbcu;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x14u;
  fp_st(c,4,R(0)+R(10));
  R(0)=0xe0u;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffacu;
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x3cu;
  fp_arith(c,3,13,3);
  fp_mov(c,4,13);
  fp_unary(c,0,4);
  fp_arith(c,2,4,15);
  fp_st(c,4,R(0)+R(10));
  R(0)+=0xfffffff0u;
  fp_st(c,4,R(0)+R(10));
  R(0)+=0xffffffd8u;
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x48u;
  fp_arith(c,3,14,3);
  fp_mov(c,4,14);
  fp_unary(c,0,4);
  fp_arith(c,2,4,15);
  fp_st(c,4,R(0)+R(10));
  R(0)=0xe8u;
L8c0373b2:;
  { fp_st(c,4,R(0)+R(10)); goto L8c0376ac; }
L8c0373e0:;
  R(2)=LD32(R(14)+4);
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0373f2; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0373f2:;
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x78u;
  fp_arith(c,2,3,2);
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(11); c->pr=0x8c037402u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(0)=0x78u;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(12); c->pr=0x8c03740cu; fp_arith(c,2,4,15); sh4_call(c,tg); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0x88u;
  fp_arith(c,3,3,0);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_arith(c,2,2,3);
  fp_arith(c,2,2,15);
  fp_st(c,2,R(0)+R(10));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(3)=LD32(R(14)+4);
  fp_arith(c,3,12,3);
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c037432; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c037432:;
  fp_arith(c,3,13,3);
  R(0)=0x8cu;
  R(13)=0x8c09d2dcu;
  fp_arith(c,2,12,13);
  fp_unary(c,0,12);
  fp_st(c,12,R(0)+R(10));
  R(0)=0x7cu;
  fp_ld(c,4,R(0)+R(10));
  { c->pr=0x8c037446u; fp_arith(c,2,4,15); f_8c09d2dc(c); }
  R(0)=0x88u;
  c->fr[2]=0x3F800000u;
  fp_arith(c,0,2,2);
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x8u;
  fp_arith(c,2,3,0);
  fp_mov(c,4,3);
  fp_arith(c,2,4,2);
  fp_arith(c,3,14,4);
  fp_unary(c,0,14);
  fp_st(c,14,R(0)+R(10));
  R(0)=0x50u;
  R(1)=LD32(R(14)+4);
  R(2)=LD32(R(14)+60);
  R(3)=LD32(R(14)+R(0));
  c->t=R(1)&1;R(1)>>=1;
  c->t=(int32_t)R(1)>=0;
  ST32(R(15)+4,R(1));
  R(2)-=R(3);
  R(2)-=R(1);
  c->fpul=R(2);
  fp_float(c,3);
  c->fpul=R(1);
  fp_mov(c,14,3);
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c037482; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[1]=c->fpul;
  fp_arith(c,0,3,1);
L8c037482:;
  R(0)=0x78u;
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(13); c->pr=0x8c03748cu; fp_arith(c,2,4,15); sh4_call(c,tg); }
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  R(0)=0xacu;
  fp_arith(c,3,4,0);
  fp_mov(c,0,14);
  fp_mov(c,6,4);
  fp_arith(c,2,6,4);
  fp_mov(c,3,4);
  fp_mov(c,5,6);
  fp_fmac(c,5,14);
  fp_fsrra(c,5);
  fp_arith(c,2,3,5);
  fp_arith(c,2,5,14);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x4u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x4u;
  fp_unary(c,0,5);
  fp_st(c,5,R(0)+R(10));
  R(0)=0x54u;
  R(2)=LD32(R(14)+R(0));
  R(1)=LD32(R(14)+56);
  R(3)=LD32(R(14)+4);
  R(1)-=R(2);
  c->t=R(3)&1;R(3)>>=1;
  R(3)-=R(1);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,0,3);
  fp_mov(c,5,3);
  fp_fmac(c,6,5);
  fp_fsrra(c,6);
  R(0)+=0x68u;
  c->fr[3]=0x00000000u;
  fp_arith(c,2,4,6);
  fp_arith(c,2,6,5);
  fp_st(c,4,R(0)+R(10));
  R(0)+=0x4u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x4u;
  fp_unary(c,0,6);
  fp_st(c,6,R(0)+R(10));
  R(0)=0x54u;
  R(1)=LD32(R(14));
  R(2)=LD32(R(14)+52);
  R(3)=LD32(R(14)+R(0));
  c->t=R(1)&1;R(1)>>=1;
  c->t=(int32_t)R(1)>=0;
  ST32(R(15)+4,R(1));
  R(2)-=R(3);
  R(2)-=R(1);
  c->fpul=R(2);
  fp_float(c,3);
  c->fpul=R(1);
  fp_mov(c,14,3);
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c037508; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c037508:;
  R(0)=0x7cu;
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(13); c->pr=0x8c037512u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  R(0)=0xdcu;
  fp_arith(c,3,4,0);
  fp_mov(c,0,14);
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x4u;
  fp_mov(c,5,4);
  fp_arith(c,2,5,4);
  fp_mov(c,3,4);
  fp_mov(c,6,5);
  fp_fmac(c,6,14);
  fp_fsrra(c,6);
  fp_arith(c,2,3,6);
  fp_arith(c,2,6,14);
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x4u;
  fp_unary(c,0,6);
  fp_st(c,6,R(0)+R(10));
  R(0)=0x54u;
  R(3)=LD32(R(14));
  R(1)=LD32(R(14)+48);
  c->t=R(3)&1;R(3)>>=1;
  R(2)=LD32(R(14)+R(0));
  R(3)-=R(1);
  R(3)+=R(2);
  c->fpul=R(3);
  fp_float(c,3);
  fp_mov(c,0,3);
  fp_mov(c,6,3);
  fp_fmac(c,5,6);
  fp_fsrra(c,5);
  c->fr[2]=0x00000000u;
  R(0)+=0x78u;
  c->fr[3]=0x00000000u;
  fp_st(c,2,R(0)+R(10));
  R(0)+=0x4u;
  fp_arith(c,2,4,5);
  fp_arith(c,2,5,6);
  fp_st(c,4,R(0)+R(10));
  R(0)+=0x4u;
  fp_unary(c,0,5);
  fp_st(c,5,R(0)+R(10));
  R(0)+=0x4u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffe0u;
  fp_st(c,3,R(0)+R(10));
  { R(0)+=0xfffffff0u; goto L8c0376aa; }
L8c0375a0:;
  R(0)=0x78u;
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(11); c->pr=0x8c0375a8u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(0)=0x78u;
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(12); c->pr=0x8c0375b2u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  R(0)=0xcu;
  R(3)=0x8c09cf84u;
  fp_arith(c,3,3,0);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x88u;
  fp_arith(c,2,2,3);
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_arith(c,2,2,15);
  fp_st(c,2,R(0)+R(10));
  fp_ld(c,2,R(0)+R(10));
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  fp_arith(c,2,2,3);
  { uint32_t tg=R(3); c->pr=0x8c0375d4u; fp_arith(c,3,4,2); sh4_call(c,tg); }
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  R(0)=0x7cu;
  fp_mov(c,1,12);
  fp_arith(c,2,0,3);
  fp_st(c,0,R(0)+R(10));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x8cu;
  fp_arith(c,3,1,2);
  fp_unary(c,0,1);
  fp_st(c,1,R(0)+R(10));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(13));
  R(0)=0x90u;
  fp_arith(c,3,12,2);
  fp_unary(c,0,12);
  fp_st(c,12,R(0)+R(10));
  R(0)=0x78u;
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(12); c->pr=0x8c037600u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(0)=0xb4u;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(10));
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)=0x78u;
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(11); c->pr=0x8c037614u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(0)=0xacu;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(10));
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xfffffff4u;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)=0x8c0376f4u;
  fp_ld(c,15,R(0));
  R(0)=0x7cu;
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(12); c->pr=0x8c037638u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(0)=0xd4u;
  fp_unary(c,0,0);
  fp_st(c,0,R(0)+R(10));
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)=0x7cu;
  fp_ld(c,4,R(0)+R(10));
  { uint32_t tg=R(11); c->pr=0x8c03764cu; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(0)=0xd0u;
  fp_st(c,0,R(0)+R(10));
  fp_ld(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xfffffffcu;
  c->fr[3]=0x00000000u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xfffffff0u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_ld(c,4,R(0)+R(10));
  R(0)+=0x4u;
  fp_ld(c,5,R(0)+R(10));
  R(0)+=0x4u;
  fp_mov(c,0,4);
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_ld(c,6,R(0)+R(10));
  R(0)+=0xfffffff8u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(0)+R(10));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(10));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(10));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(10));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(10));
  fp_arith(c,2,4,3);
  c->fr[3]=0x00000000u;
  fp_st(c,4,R(0)+R(10));
  R(0)+=0xfffffff4u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0x10u;
  fp_st(c,3,R(0)+R(10));
  R(0)+=0xffffffe0u;
  fp_st(c,3,R(0)+R(10));
  R(0)=0xb8u;
L8c0376aa:;
  fp_st(c,3,R(0)+R(10));
L8c0376ac:;
  R(15)+=0x10u;
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
void f_8c037700(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+84);
  R(6)=0x90u;
  R(3)=0x8c0686b8u;
  R(13)=R(0);
  R(13)+=0x50u;
  { c->pr=0x8c03771au; R(4)=R(13); f_8c0686b8(c); }
  R(2)=0x90u;
  R(3)=0x0u;
  R(0)=0x58u;
  ST32(R(13),R(2));
  R(2)=R(3);
  ST32(R(13)+8,R(3));
  R(2)=0x0u;
  ST32(R(13)+20,R(3));
  R(3)=0x4u;
  R(11)=0x2u;
  R(12)=0x1u;
  ST32(R(13)+12,R(11));
  R(7)=0x3u;
  ST32(R(13)+24,R(12));
  ST32(R(13)+28,R(3));
  R(3)=R(2);
  ST32(R(13)+32,R(2));
  ST32(R(13)+36,R(2));
  ST32(R(13)+40,R(3));
  ST32(R(13)+R(0),R(3));
  R(0)=0x5cu;
  ST32(R(13)+R(0),R(3));
  R(0)=0x60u;
  ST32(R(13)+R(0),R(11));
  R(0)=0x64u;
  ST32(R(13)+R(0),R(3));
  R(0)=0x6cu;
  ST32(R(13)+R(0),R(3));
  R(0)=0x78u;
  ST32(R(13)+R(0),R(12));
  R(0)=0x7cu;
  ST32(R(13)+R(0),R(3));
  R(0)+=0x4u;
  R(6)=R(3);
  ST32(R(13)+R(0),R(7));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(7));
  R(5)=0xbu;
  R(0)=LD32(c->gbr+80);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=0xau; if(k) goto L8c037772; }
  {  goto L8c0378e6; }
L8c037772:;
  R(0)=LD32(c->gbr+80);
  R(0)=LD32(R(0)+4);
  c->t=(R(0)&0x2a)==0;
  if(!c->t) goto L8c03778e;
  R(0)=LD32(c->gbr+28);
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c037800;
  R(2)=0x8c143ab0u;
  R(0)=0x8c0377ecu;
  fp_ld(c,3,R(0));
  R(3)=LD32(R(2));
  fp_ld(c,2,R(3));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c037800;
L8c03778e:;
  ST32(R(13)+4,R(11));
  R(0)=LD32(c->gbr+80);
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0377ae;
  R(0)=LD32(R(5)+4);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0377ae;
  R(0)=0x50u;
  R(14)=0x8221u;
  ST32(R(13)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(13)+R(0),R(4));
  R(0)=0x68u;
  { ST32(R(13)+R(0),R(6)); goto L8c03781e; }
L8c0377ae:;
  R(0)=0x50u;
  R(14)=0x8849u;
  R(2)=0x8u;
  ST32(R(13)+R(0),R(2));
  R(0)=0x54u;
  R(3)=0x6u;
  ST32(R(13)+R(0),R(3));
  R(0)=0x68u;
  { ST32(R(13)+R(0),R(12)); goto L8c03781e; }
L8c037800:;
  R(3)=0x8c0c806cu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03780c;
  { ST32(R(13)+20,R(12)); goto L8c03780e; }
L8c03780c:;
  ST32(R(13)+20,R(6));
L8c03780e:;
  R(0)=0x50u;
  R(14)=0x8120u;
  ST32(R(13)+4,R(6));
  ST32(R(13)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(13)+R(0),R(5));
  R(0)=0x68u;
  ST32(R(13)+R(0),R(6));
L8c03781e:;
  R(0)=LD32(c->gbr+80);
  R(1)=0x18u;
  R(5)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(4)=R(5)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03784a;
  R(2)=R(4);
  c->t=(R(2)&R(12))==0;
  if(c->t) goto L8c037836;
  R(0)=0x70u;
  { ST32(R(13)+R(0),R(6)); goto L8c03783e; }
L8c037836:;
  c->t=(R(2)&R(11))==0;
  if(c->t) goto L8c037844;
  R(0)=0x70u;
  ST32(R(13)+R(0),R(7));
L8c03783e:;
  R(0)=0x74u;
  { ST32(R(13)+R(0),R(6)); goto L8c0378ce; }
L8c037844:;
  R(2)=R(4);
  c->t=(R(2)&R(7))==0;
  if(c->t) goto L8c037854;
L8c03784a:;
  R(0)=0x70u;
  ST32(R(13)+R(0),R(6));
  R(0)=0x74u;
  { ST32(R(13)+R(0),R(7)); goto L8c0378ce; }
L8c037854:;
  R(0)=0x70u;
  R(3)=0x8u;
  ST32(R(13)+R(0),R(6));
  c->t=(R(3)&R(4))==0;
  R(0)=0x74u;
  { uint32_t k=c->t; ST32(R(13)+R(0),R(7)); if(k) goto L8c037870; }
  R(0)=0x70u;
  ST32(R(13)+R(0),R(11));
  R(0)=0x74u;
  R(3)=LD32(R(13)+R(0));
  R(3)+=0xfffffffeu;
  { ST32(R(13)+R(0),R(3)); goto L8c03787c; }
L8c037870:;
  R(1)=0x4u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c03787c;
  R(2)=LD32(R(13)+R(0));
  R(2)+=0xfffffffeu;
  ST32(R(13)+R(0),R(2));
L8c03787c:;
  R(3)=0x20u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c0378c0;
  R(0)=0x70u;
  ST32(R(13)+R(0),R(12));
  R(0)=0x74u;
  R(3)=LD32(R(13)+R(0));
  R(3)+=0xffffffffu;
  { ST32(R(13)+R(0),R(3)); goto L8c0378ce; }
L8c0378c0:;
  R(1)=0x10u;
  c->t=(R(4)&R(1))==0;
  if(c->t) goto L8c0378ce;
  R(0)=0x74u;
  R(2)=LD32(R(13)+R(0));
  R(2)+=0xffffffffu;
  ST32(R(13)+R(0),R(2));
L8c0378ce:;
  R(0)=LD32(c->gbr+80);
  R(5)=R(13);
  R(4)=0xe0u;
  R(3)=LD32(R(0));
  R(0)=0x8cu;
  ST32(R(13)+R(0),R(3));
  R(3)=0x8c0d6700u;
  R(0)=LD32(c->gbr+84);
  { c->pr=0x8c0378e2u; R(4)+=R(0); f_8c0d6700(c); }
  {  goto L8c037906; }
L8c0378e6:;
  R(0)=0x50u;
  R(14)=0x8120u;
  R(3)=0x8c0e0860u;
  ST32(R(13)+4,R(6));
  ST32(R(13)+R(0),R(4));
  R(0)=0x54u;
  ST32(R(13)+R(0),R(5));
  R(0)=0x68u;
  ST32(R(13)+R(0),R(6));
  R(0)=R(6);
  ST32(c->gbr+80,R(0));
  R(5)=R(13);
  R(4)=0xe0u;
  R(0)=LD32(c->gbr+84);
  { uint32_t tg=R(3); c->pr=0x8c037906u; R(4)+=R(0); sh4_call(c,tg); }
L8c037906:;
  R(0)=LD32(c->gbr+84);
  ST32(R(0)+4,R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c037916(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=0x50u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+84);
  R(3)=LD32(R(1)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c037934;
  { c->pr=0x8c037934u;  f_8c037700(c); }
L8c037934:;
  R(0)=LD32(c->gbr+84);
  R(3)=0x50u;
  R(13)=0xe0u;
  R(10)=0x4u;
  R(4)=R(0);
  R(14)=LD32(R(4)+4);
  R(0)=LD32(c->gbr+92);
  R(13)+=R(4);
  R(3)+=R(4);
  R(4)=0x8000u;
  R(3)=LD32(R(3));
  c->t=(R(0)&R(10))==0;
  { uint32_t k=c->t; R(4)&=R(14); if(k) goto L8c0379a0; }
  R(3)=0x8c2d4090u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0379a0;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0379b0;
  R(3)=0x8c0e0720u;
  R(5)=0x2u;
  { c->pr=0x8c037964u; R(4)=R(13); f_8c0e0720(c); }
  R(2)=0x8000u;
  { R(14)|=R(2); goto L8c0379b0; }
L8c0379a0:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0379b0;
  R(3)=0x8c0e0720u;
  R(5)=0x0u;
  { c->pr=0x8c0379acu; R(4)=R(13); f_8c0e0720(c); }
  R(2)=0xffff7fffu;
  R(14)&=R(2);
L8c0379b0:;
  R(3)=0x8c0c5454u;
  R(4)=0x4000u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)&=R(14); if(k) goto L8c0379ce; }
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0379de;
  R(2)=0x8c0e0460u;
  R(5)=0x2u;
  { c->pr=0x8c0379c8u; R(4)=R(13); f_8c0e0460(c); }
  R(3)=0x4000u;
  { R(14)|=R(3); goto L8c0379de; }
L8c0379ce:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0379de;
  R(2)=0x8c0e0460u;
  R(5)=0x4u;
  { c->pr=0x8c0379dau; R(4)=R(13); f_8c0e0460(c); }
  R(3)=0xffffbfffu;
  R(14)&=R(3);
L8c0379de:;
  R(3)=0x8c0c5480u;
  R(4)=R(14);
  R(8)=0x8c0e05e0u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(9)=0x2000u;
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(4)&=R(9); if(k) goto L8c0379f6; }
  R(1)=0x8c0c806cu;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c037a8e;
L8c0379f6:;
  R(0)=LD32(c->gbr+80);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c037a8e;
  R(0)=LD32(c->gbr+80);
  R(0)=LD32(R(0)+4);
  c->t=(R(0)&0x2a)==0;
  if(!c->t) goto L8c037a18;
  R(0)=LD32(c->gbr+28);
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c037a80;
  R(2)=0x8c143ab0u;
  R(0)=0x8c037a68u;
  fp_ld(c,3,R(0));
  R(3)=LD32(R(2));
  fp_ld(c,2,R(3));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c037a80;
L8c037a18:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c037a9c;
  R(5)=0x0u;
  { uint32_t tg=R(8); c->pr=0x8c037a22u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xffffdfffu;
  { R(14)&=R(3); goto L8c037a9c; }
L8c037a80:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c037a9c;
  R(5)=0x1u;
  { uint32_t tg=R(8); c->pr=0x8c037a8au; R(4)=R(13); sh4_call(c,tg); }
  { R(14)|=R(9); goto L8c037a9c; }
L8c037a8e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c037a9c;
  R(5)=0x0u;
  { uint32_t tg=R(8); c->pr=0x8c037a98u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0xffffdfffu;
  R(14)&=R(3);
L8c037a9c:;
  R(0)=LD32(c->gbr+80);
  R(11)=0x1u;
  R(4)=R(0);
  R(0)=LD32(c->gbr+92);
  c->t=(R(0)&R(11))==0;
  { uint32_t k=c->t; R(12)=0x8u; if(k) goto L8c037b40; }
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c037ab4;
  R(0)=LD32(R(4)+4);
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c037b40;
L8c037ab4:;
  R(3)=0x8c140ea4u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(12))==0;
  if(c->t) goto L8c037ad4;
  R(0)=R(14);
  c->t=(R(0)&R(10))==0;
  if(!c->t) goto L8c037b54;
  R(1)=0x8c0e04c0u;
  R(6)=0x0u;
  R(5)=R(6);
  { c->pr=0x8c037accu; R(4)=R(13); f_8c0e04c0(c); }
  R(3)=0xfffffff9u;
  R(14)&=R(3);
  { R(14)|=R(10); goto L8c037b54; }
L8c037ad4:;
  R(1)=0x2u;
  c->t=(R(1)&R(14))==0;
  if(!c->t) goto L8c037aec;
  R(1)=0x8c0e04c0u;
  R(5)=0x0u;
  R(6)=0x1u;
  { c->pr=0x8c037ae4u; R(4)=R(13); f_8c0e04c0(c); }
  R(3)=0xfffffff9u;
  R(2)=0x2u;
  R(14)&=R(3);
  R(14)|=R(2);
L8c037aec:;
  R(3)=R(14);
  c->t=(R(3)&R(9))==0;
  if(!c->t) goto L8c037b54;
  R(0)=LD32(c->gbr+80);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c037b54;
  R(5)=0x1u;
  { uint32_t tg=R(8); c->pr=0x8c037afeu; R(4)=R(13); sh4_call(c,tg); }
  { R(14)|=R(9); goto L8c037b54; }
L8c037b40:;
  R(2)=0x6u;
  c->t=(R(2)&R(14))==0;
  if(c->t) goto L8c037b54;
  R(2)=0x8c0e04c0u;
  R(5)=0x0u;
  R(6)=0x2u;
  { c->pr=0x8c037b50u; R(4)=R(13); f_8c0e04c0(c); }
  R(3)=0xfffffff9u;
  R(14)&=R(3);
L8c037b54:;
  R(0)=LD32(c->gbr+80);
  R(4)=R(14);
  R(10)=0x8c0e0800u;
  R(5)=R(0);
  R(8)=0x8c0e0380u;
  R(9)=0xfffff00fu;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)&=R(11); if(k) goto L8c037b6c; }
  R(0)=LD32(R(5)+4);
  c->t=(R(0)&0x2a)==0;
  if(!c->t) goto L8c037b88;
L8c037b6c:;
  R(0)=LD32(c->gbr+28);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c037b76;
  {  goto L8c037ca0; }
L8c037b76:;
  R(3)=0x8c143ab0u;
  R(0)=0x8c037c18u;
  fp_ld(c,3,R(0));
  R(2)=LD32(R(3));
  fp_ld(c,2,R(2));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c037b88;
  {  goto L8c037ca0; }
L8c037b88:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c037b96;
  R(2)=0x8c0e0520u;
  R(5)=0x2u;
  { c->pr=0x8c037b94u; R(4)=R(13); f_8c0e0520(c); }
  R(14)|=R(11);
L8c037b96:;
  R(0)=LD32(c->gbr+80);
  R(4)=0x40u;
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)&=R(14); if(k) goto L8c037c4e; }
  R(0)=LD32(R(5)+4);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c037c4e;
  R(0)=LD32(c->gbr+92);
  c->t=(R(0)&R(11))==0;
  if(!c->t) goto L8c037bbc;
  R(3)=0x8c143ab0u;
  R(0)=0x8c037c18u;
  fp_ld(c,3,R(0));
  R(2)=LD32(R(3));
  fp_ld(c,2,R(2));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c037c20;
L8c037bbc:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c037bc6;
  R(2)=0x200u;
  c->t=(R(2)&R(14))==0;
  if(!c->t) goto L8c037bd6;
L8c037bc6:;
  R(5)=0x0u;
  R(6)=0x8u;
  R(7)=0xau;
  { uint32_t tg=R(8); c->pr=0x8c037bd0u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0x240u;
  R(14)&=R(9);
  R(14)|=R(2);
L8c037bd6:;
  R(3)=R(14);
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c037be0;
  {  goto L8c037cdc; }
L8c037be0:;
  R(5)=0x0u;
  R(6)=0x1u;
  { uint32_t tg=R(10); c->pr=0x8c037be8u; R(4)=R(13); sh4_call(c,tg); }
  { R(14)|=R(12); goto L8c037cdc; }
L8c037c20:;
  R(2)=0x20u;
  c->t=(R(2)&R(14))==0;
  if(c->t) goto L8c037c2c;
  R(1)=0x200u;
  c->t=(R(1)&R(14))==0;
  if(!c->t) goto L8c037c3c;
L8c037c2c:;
  R(7)=0xau;
  R(5)=0x0u;
  R(6)=R(7);
  { uint32_t tg=R(8); c->pr=0x8c037c36u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0x220u;
  R(14)&=R(9);
  R(14)|=R(2);
L8c037c3c:;
  c->t=(R(12)&R(14))==0;
  if(c->t) goto L8c037cdc;
  R(6)=0x0u;
  R(5)=R(6);
  { uint32_t tg=R(10); c->pr=0x8c037c48u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0xfffffff7u;
  { R(14)&=R(2); goto L8c037cdc; }
L8c037c4e:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c037c58;
  R(3)=0x800u;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c037c68;
L8c037c58:;
  R(5)=0x0u;
  R(6)=0x8u;
  R(7)=0x6u;
  { uint32_t tg=R(8); c->pr=0x8c037c62u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x840u;
  R(14)&=R(9);
  R(14)|=R(3);
L8c037c68:;
  R(2)=R(14);
  c->t=(R(2)&R(12))==0;
  if(!c->t) goto L8c037cdc;
  R(5)=0x0u;
  R(6)=0x1u;
  { uint32_t tg=R(10); c->pr=0x8c037c76u; R(4)=R(13); sh4_call(c,tg); }
  { R(14)|=R(12); goto L8c037cdc; }
L8c037ca0:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c037cb0;
  R(2)=0x8c0e0520u;
  R(5)=0x0u;
  { c->pr=0x8c037cacu; R(4)=R(13); f_8c0e0520(c); }
  R(3)=0xfffffffeu;
  R(14)&=R(3);
L8c037cb0:;
  R(2)=0x20u;
  c->t=(R(2)&R(14))==0;
  if(c->t) goto L8c037cbc;
  R(1)=0x100u;
  c->t=(R(1)&R(14))==0;
  if(!c->t) goto L8c037ccc;
L8c037cbc:;
  R(5)=0x0u;
  R(6)=0xau;
  R(7)=0xbu;
  { uint32_t tg=R(8); c->pr=0x8c037cc6u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0x120u;
  R(14)&=R(9);
  R(14)|=R(2);
L8c037ccc:;
  c->t=(R(12)&R(14))==0;
  if(c->t) goto L8c037cdc;
  R(6)=0x0u;
  R(5)=R(6);
  { uint32_t tg=R(10); c->pr=0x8c037cd8u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0xfffffff7u;
  R(14)&=R(2);
L8c037cdc:;
  R(0)=LD32(c->gbr+80);
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c037cf8;
  R(2)=0x1000u;
  c->t=(R(2)&R(14))==0;
  if(c->t) goto L8c037cf8;
  R(2)=0x8c0e0780u;
  R(5)=0x0u;
  R(6)=LD32(R(12));
  { c->pr=0x8c037cf4u; R(4)=R(13); f_8c0e0780(c); }
  R(3)=0xffffefffu;
  R(14)&=R(3);
L8c037cf8:;
  R(0)=LD32(c->gbr+84);
  ST32(R(0)+4,R(14));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c037d0e(SH4Ctx *c) {
  c->fpul=R(4);
  R(0)=0x4u;
  R(1)=0x8c0c532cu;
  R(2)=0x8c140e58u;
  fp_float(c,3);
  R(3)=LD32(R(1));
  c->fpul=R(6);
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(2);
  fp_st(c,3,R(3));
  fp_float(c,3);
  R(3)=LD32(R(1));
  c->fpul=R(5);
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(2);
  fp_st(c,3,R(0)+R(3));
  fp_float(c,3);
  R(3)=LD32(R(1));
  R(0)=0x8u;
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(2);
  fp_st(c,3,R(0)+R(3));
  R(3)=LD32(R(1));
  R(3)+=0x1u;
  ST32(R(1),R(3));
  R(3)+=0xffffffffu;
  R(3)<<=2;
  R(3)<<=2;
  R(2)+=R(3);
  c->fpul=R(7);
  R(0)=0xcu;
  fp_float(c,3);
  { fp_st(c,3,R(0)+R(2)); return; }
}
void f_8c037d80(SH4Ctx *c) {
  R(2)=0x8c0c532cu;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c037d88(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(0)=0x8c0c532cu;
  R(1)=LD32(R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c037e24;
  R(1)=0x8c143ab8u;
  R(3)=0xffffffffu;
  R(0)=LD32(R(1));
  ST32(c->gbr+84,R(0));
  ST32(R(0),R(3));
  R(0)=R(3);
  R(3)=0x8c0388f8u;
  ST32(c->gbr+24,R(0));
  { c->pr=0x8c037db8u; ST32(c->gbr+28,R(0)); f_8c0388f8(c); }
  R(2)=0x8c0389f8u;
  { c->pr=0x8c037dbeu;  f_8c0389f8(c); }
  R(3)=0x8c0c532cu;
  R(13)=R(15);
  R(0)=0xff000000u;
  R(11)=R(13);
  R(14)=0x8c140e58u;
  R(12)=R(13);
  R(10)=R(13);
  ST32(c->gbr+36,R(0));
  R(8)=LD32(R(3));
  R(10)+=0x24u;
  R(0)=0x8c037e58u;
  R(9)=R(13);
  R(8)<<=2;
  R(8)<<=2;
  R(8)+=R(14);
  c->t=R(14)>=R(8);
  R(11)+=0xcu;
  R(12)+=0x18u;
  { uint32_t k=c->t; fp_ld(c,15,R(0)); if(k) goto L8c037e24; }
L8c037de6:;
  R(0)=0x8u;
  fp_ld(c,3,R(14));
  R(3)=0x8c07a540u;
  fp_st(c,3,R(9));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_mov(c,4,15);
  fp_st(c,2,R(0)+R(9));
  R(0)=0xcu;
  fp_ld(c,3,R(14));
  fp_st(c,3,R(11));
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,2,R(0)+R(11));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,3,R(12));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(12));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,3,R(10));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(10));
  { uint32_t tg=R(3); c->pr=0x8c037e1eu; R(4)=R(13); sh4_call(c,tg); }
  R(14)+=0x10u;
  c->t=R(14)>=R(8);
  if(!c->t) goto L8c037de6;
L8c037e24:;
  R(15)+=0x30u;
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
void f_8c037e60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0xfffffffcu;
  R(3)=R(4);
  R(3)=sh4_shad(R(3),R(2));
  c->fr[4]=0x3F800000u;
  c->fpul=R(3);
  R(3)=0x8c09cff8u;
  ST32(R(15),R(4));
  fp_float(c,3);
  fp_mov(c,5,3);
  { c->pr=0x8c037e7au; fp_arith(c,0,4,4); f_8c09cff8(c); }
  R(0)=LD32(R(15));
  R(0)&=0xfu;
  R(0)+=0x10u;
  c->fpul=R(0);
  R(0)=0x8c037f48u;
  fp_float(c,3);
  fp_arith(c,2,0,3);
  fp_ld(c,3,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { fp_arith(c,3,0,3); return; }
}
void f_8c037e92(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=0x8c037f4cu;
  R(4)=0x8c140ea8u;
  fp_ld(c,4,R(0));
  R(0)=0x8c037f50u;
  fp_ld(c,5,R(0));
  R(0)=0xcu;
  fp_ld(c,15,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_arith(c,3,15,5);
  R(3)=0xff08u;
  fp_arith(c,3,3,5);
  c->fr[5]=0x3F800000u;
  fp_st(c,3,R(15));
  fp_ld(c,12,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_mov(c,6,12);
  fp_ld(c,14,R(4));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8c037f60u;
  R(4)=0x8c1410d8u;
  ST32(R(4),R(3));
  fp_ld(c,3,R(0));
  fp_arith(c,2,6,3);
  fp_cmp(c,1,6,4);
  { uint32_t k=!c->t; fp_arith(c,0,5,5); if(k) goto L8c037f00; }
  R(1)=0x8c1410d8u;
  R(2)=0xff0cu;
  R(3)=LD32(R(1));
  c->t=R(3)>R(2);
  if(c->t) goto L8c037f00;
L8c037eea:;
  fp_arith(c,2,4,5);
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  fp_cmp(c,1,6,4);
  { uint32_t k=!c->t; ST32(R(4),R(3)); if(k) goto L8c037f00; }
  R(1)=0x8c1410d8u;
  R(3)=0xff0cu;
  R(2)=LD32(R(1));
  c->t=R(2)>R(3);
  if(!c->t) goto L8c037eea;
L8c037f00:;
  fp_mov(c,2,12);
  R(0)=0x8c037f68u;
  fp_arith(c,1,2,14);
  fp_ld(c,3,R(0));
  fp_mov(c,1,15);
  R(0)=0x8u;
  fp_arith(c,2,4,3);
  R(12)=0x80u;
  R(13)=0x8c140ed8u;
  R(14)=0x0u;
  c->fr[13]=0x3F800000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,0,R(15));
  fp_fmac(c,1,2);
  fp_st(c,1,R(0)+R(15));
L8c037f20:;
  { c->pr=0x8c037f24u; R(4)=R(14); f_8c037e60(c); }
  R(0)=0x8u;
  fp_ld(c,4,R(0)+R(15));
  fp_arith(c,3,4,0);
  fp_cmp(c,1,14,4);
  if(!c->t) goto L8c037f80;
  R(0)=R(14);
  R(0)<<=2;
  { fp_st(c,15,R(0)+R(13)); goto L8c037fb4; }
L8c037f80:;
  fp_cmp(c,1,12,4);
  if(!c->t) goto L8c037f98;
  fp_arith(c,1,4,14);
  fp_ld(c,0,R(15));
  fp_mov(c,3,15);
  R(0)=R(14);
  R(0)<<=2;
  R(3)=R(0);
  R(3)+=R(13);
  fp_fmac(c,3,4);
  { fp_st(c,3,R(3)); goto L8c037fb4; }
L8c037f98:;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c037fae;
  R(1)=R(15);
  R(1)+=0x4u;
  fp_ld(c,2,R(1));
  R(0)=R(14);
  R(0)<<=2;
  { fp_st(c,2,R(0)+R(13)); goto L8c037fb4; }
L8c037fae:;
  R(0)=R(14);
  R(0)<<=2;
  fp_st(c,13,R(0)+R(13));
L8c037fb4:;
  R(14)+=0x1u;
  { c->pr=0x8c037fbau; R(4)=R(14); f_8c037e60(c); }
  R(0)=0x8u;
  R(4)=R(14);
  fp_ld(c,4,R(0)+R(15));
  R(4)<<=2;
  fp_arith(c,3,4,0);
  fp_cmp(c,1,14,4);
  { uint32_t k=!c->t; R(4)+=R(13); if(k) goto L8c037fce; }
  { fp_st(c,15,R(4)); goto L8c037ff0; }
L8c037fce:;
  fp_cmp(c,1,12,4);
  if(!c->t) goto L8c037fde;
  fp_arith(c,1,4,14);
  fp_ld(c,0,R(15));
  fp_mov(c,3,15);
  fp_fmac(c,3,4);
  { fp_st(c,3,R(4)); goto L8c037ff0; }
L8c037fde:;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c037fee;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  { fp_st(c,2,R(4)); goto L8c037ff0; }
L8c037fee:;
  fp_st(c,13,R(4));
L8c037ff0:;
  R(14)+=0x1u;
  { c->pr=0x8c037ff6u; R(4)=R(14); f_8c037e60(c); }
  R(0)=0x8u;
  R(4)=R(14);
  fp_ld(c,4,R(0)+R(15));
  R(4)<<=2;
  fp_arith(c,3,4,0);
  fp_cmp(c,1,14,4);
  { uint32_t k=!c->t; R(4)+=R(13); if(k) goto L8c03800a; }
  { fp_st(c,15,R(4)); goto L8c03802c; }
L8c03800a:;
  fp_cmp(c,1,12,4);
  if(!c->t) goto L8c03801a;
  fp_arith(c,1,4,14);
  fp_ld(c,0,R(15));
  fp_mov(c,3,15);
  fp_fmac(c,3,4);
  { fp_st(c,3,R(4)); goto L8c03802c; }
L8c03801a:;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c03802a;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  { fp_st(c,2,R(4)); goto L8c03802c; }
L8c03802a:;
  fp_st(c,13,R(4));
L8c03802c:;
  R(14)+=0x1u;
  { c->pr=0x8c038032u; R(4)=R(14); f_8c037e60(c); }
  R(0)=0x8u;
  R(4)=R(14);
  fp_ld(c,4,R(0)+R(15));
  R(4)<<=2;
  fp_arith(c,3,4,0);
  fp_cmp(c,1,14,4);
  { uint32_t k=!c->t; R(4)+=R(13); if(k) goto L8c038046; }
  { fp_st(c,15,R(4)); goto L8c038068; }
L8c038046:;
  fp_cmp(c,1,12,4);
  if(!c->t) goto L8c038056;
  fp_arith(c,1,4,14);
  fp_ld(c,0,R(15));
  fp_mov(c,3,15);
  fp_fmac(c,3,4);
  { fp_st(c,3,R(4)); goto L8c038068; }
L8c038056:;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,4);
  if(!c->t) goto L8c038066;
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  { fp_st(c,2,R(4)); goto L8c038068; }
L8c038066:;
  fp_st(c,13,R(4));
L8c038068:;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(12);
  if(c->t) goto L8c038072;
  {  goto L8c037f20; }
L8c038072:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c038086(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  fp_cmp(c,1,5,7);
  if(!c->t) goto L8c03809c;
  R(0)=0x4u;
  fp_st(c,7,R(15));
  { fp_st(c,5,R(0)+R(15)); goto L8c0380a2; }
L8c03809c:;
  R(0)=0x4u;
  fp_st(c,5,R(15));
  fp_st(c,7,R(0)+R(15));
L8c0380a2:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  fp_cmp(c,1,3,8);
  if(!c->t) goto L8c0380b0;
  R(0)=0x8u;
  { fp_st(c,7,R(0)+R(15)); goto L8c0380b4; }
L8c0380b0:;
  R(0)=0x8u;
  fp_st(c,8,R(0)+R(15));
L8c0380b4:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,4);
  c->fr[7]=0x00000000u;
  R(0)=0x8c038140u;
  { uint32_t k=!c->t; fp_ld(c,5,R(0)); if(k) goto L8c0380c4; }
  { fp_mov(c,4,7); goto L8c0380ca; }
L8c0380c4:;
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c0380ca;
  fp_mov(c,4,5);
L8c0380ca:;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,3,6);
  if(!c->t) goto L8c0380d4;
  { fp_mov(c,6,7); goto L8c0380da; }
L8c0380d4:;
  fp_cmp(c,1,6,5);
  if(!c->t) goto L8c0380da;
  fp_mov(c,6,5);
L8c0380da:;
  R(0)=0xcu;
  fp_arith(c,1,6,4);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(15));
  R(2)=0x0u;
  fp_arith(c,1,2,3);
  fp_arith(c,3,6,2);
  fp_st(c,6,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x14u;
  fp_arith(c,2,3,5);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(15)+R(0),R(3));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x15u;
  fp_arith(c,2,3,5);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(15)+R(0),R(3));
  R(0)=0x16u;
  fp_ld(c,3,R(4));
  fp_arith(c,2,3,5);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(15)+R(0),R(3));
  R(0)=0x17u;
  R(5)=0x8c140ea8u;
  R(6)=0x18u;
  R(14)=0x8c140ea4u;
  R(3)=0x8c068580u;
  ST8(R(15)+R(0),R(2));
  { c->pr=0x8c038128u; R(4)=R(15); f_8c068580(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c038160;
  R(0)=LD32(R(14));
  { R(0)|=0xau; goto L8c0381c6; }
L8c038160:;
  R(13)=0x8c140ec0u;
  R(4)=R(15);
  R(3)=0x8c068580u;
  R(12)=0xfffffff7u;
  R(5)=R(13);
  R(6)=0x4u;
  R(5)+=0x14u;
  { c->pr=0x8c038172u; R(4)+=0x14u; f_8c068580(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03819c;
  R(3)=R(15);
  R(1)=LD32(R(3)+4);
  R(2)=LD32(R(3));
  ST32(R(13),R(2));
  ST32(R(13)+4,R(1));
  R(1)=LD32(R(3)+12);
  R(2)=LD32(R(3)+8);
  ST32(R(13)+8,R(2));
  ST32(R(13)+12,R(1));
  R(2)=LD32(R(3)+16);
  R(1)=LD32(R(3)+20);
  ST32(R(13)+16,R(2));
  ST32(R(13)+20,R(1));
  R(0)=LD32(R(14));
  R(0)|=0x4u;
  R(3)=R(0);
  R(3)&=R(12);
  { ST32(R(14),R(3)); goto L8c038224; }
L8c03819c:;
  R(4)=LD32(R(14));
  R(2)=0x2u;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c0381ca;
  R(1)=R(15);
  R(0)=LD32(R(1));
  R(3)=0x8c140ea8u;
  R(2)=LD32(R(1)+4);
  ST32(R(3),R(0));
  ST32(R(3)+4,R(2));
  R(0)=LD32(R(1)+8);
  R(2)=LD32(R(1)+12);
  ST32(R(3)+8,R(0));
  ST32(R(3)+12,R(2));
  R(0)=LD32(R(1)+16);
  R(2)=LD32(R(1)+20);
  ST32(R(3)+16,R(0));
  { c->pr=0x8c0381c2u; ST32(R(3)+20,R(2)); f_8c037e92(c); }
  R(0)=LD32(R(14));
  R(0)|=0x2au;
L8c0381c6:;
  { ST32(R(14),R(0)); goto L8c038224; }
L8c0381ca:;
  R(3)=0x4u;
  c->t=(R(4)&R(3))==0;
  { uint32_t k=!c->t; R(5)=0x44u; if(k) goto L8c0381f6; }
  R(1)=R(15);
  R(2)=LD32(R(1));
  R(0)=LD32(R(1)+4);
  ST32(R(13),R(2));
  ST32(R(13)+4,R(0));
  R(2)=LD32(R(1)+8);
  R(0)=LD32(R(1)+12);
  ST32(R(13)+8,R(2));
  ST32(R(13)+12,R(0));
  R(2)=LD32(R(1)+16);
  R(0)=LD32(R(1)+20);
  ST32(R(13)+16,R(2));
  ST32(R(13)+20,R(0));
  R(2)=LD32(R(14));
  R(2)|=R(5);
  R(1)=R(2);
  {  goto L8c038220; }
L8c0381f6:;
  fp_ld(c,3,R(15));
  R(0)=0x4u;
  fp_st(c,3,R(13));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(13));
  R(2)=LD32(R(14));
  R(2)|=R(5);
  R(1)=R(2);
L8c038220:;
  R(1)&=R(12);
  ST32(R(14),R(1));
L8c038224:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c038230(SH4Ctx *c) {
  R(0)=LD32(c->gbr+92);
  R(0)|=0x1u;
  { ST32(c->gbr+92,R(0)); return; }
}
void f_8c038238(SH4Ctx *c) {
  R(0)=LD32(c->gbr+92);
  R(3)=0xfffffffeu;
  R(0)&=R(3);
  { ST32(c->gbr+92,R(0)); return; }
}
void f_8c038242(SH4Ctx *c) {
  R(1)=0x8c140ea4u;
  R(2)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c140ea8u;
  R(6)=0x18u;
  R(3)=0x8c0686b8u;
  ST32(R(1),R(2));
  { c->pr=0x8c038254u; R(5)=R(2); f_8c0686b8(c); }
  R(2)=0x8c0686b8u;
  R(6)=0x18u;
  R(4)=0x8c140ec0u;
  { c->pr=0x8c03825eu; R(5)=0x0u; f_8c0686b8(c); }
  R(2)=0x8c140ebcu;
  R(1)=0x8c0db720u;
  R(3)=LD32(R(2));
  { c->pr=0x8c038268u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c0db720(c); }
  R(1)=0x8c140ed4u;
  R(3)=0xa05f80b4u;
  R(0)=LD32(R(1));
  ST32(R(3),R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0382c0(SH4Ctx *c) {
  R(3)=0x8c0c53b8u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0382d8;
  R(0)=LD32(c->gbr+56);
  R(5)=0x0u;
  R(4)=0x1c2u;
  R(6)=R(0);
L8c0382d0:;
  R(4)-=1;c->t=R(4)==0;
  ST32(R(6),R(5));
  { uint32_t k=!c->t; R(6)+=0x4u; if(k) goto L8c0382d0; }
L8c0382d8:;
  {  return; }
}
void f_8c0382dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(4)=0x8c0c53bcu;
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0382ee;
  {  goto L8c03850e; }
L8c0382ee:;
  R(3)=0x0u;
  c->fr[4]=0x3F800000u;
  R(0)=0x8c03836cu;
  ST32(R(4),R(3));
  R(3)=0x8c09cff8u;
  fp_ld(c,5,R(0));
  { c->pr=0x8c0382feu; fp_arith(c,0,4,4); f_8c09cff8(c); }
  R(0)=0x8c038374u;
  R(14)=0x8c0c758cu;
  fp_ld(c,3,R(0));
  R(0)=0x0u;
  R(3)=0x8c1439ccu;
  fp_arith(c,2,0,3);
  fp_st(c,0,R(3));
  ST32(c->gbr+92,R(0));
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c038322;
  R(2)=0x8c064e90u;
  R(4)=0x1518u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c03831eu; R(6)=0x62u; f_8c064e90(c); }
  {  goto L8c03832c; }
L8c038322:;
  R(1)=0x8c0199c4u;
  R(4)=0x1518u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c03832cu; R(6)=0x62u; f_8c0199c4(c); }
L8c03832c:;
  ST32(c->gbr+44,R(0));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0383a0;
  R(3)=0x8c064e90u;
  R(4)=0x1518u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c03833eu; R(6)=0x63u; f_8c064e90(c); }
  {  goto L8c0383aa; }
L8c0383a0:;
  R(2)=0x8c0199c4u;
  R(4)=0x1518u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c0383aau; R(6)=0x63u; f_8c0199c4(c); }
L8c0383aa:;
  ST32(c->gbr+48,R(0));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0383c0;
  R(3)=0x8c064e90u;
  R(4)=0x708u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c0383bcu; R(6)=0x64u; f_8c064e90(c); }
  {  goto L8c0383ca; }
L8c0383c0:;
  R(2)=0x8c0199c4u;
  R(4)=0x708u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c0383cau; R(6)=0x64u; f_8c0199c4(c); }
L8c0383ca:;
  ST32(c->gbr+52,R(0));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0383e0;
  R(3)=0x8c064e90u;
  R(4)=0x708u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c0383dcu; R(6)=0x65u; f_8c064e90(c); }
  {  goto L8c0383ea; }
L8c0383e0:;
  R(2)=0x8c0199c4u;
  R(4)=0x708u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c0383eau; R(6)=0x65u; f_8c0199c4(c); }
L8c0383ea:;
  ST32(c->gbr+56,R(0));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c038420;
  R(3)=0x8c064e90u;
  R(4)=0x1c20u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c0383fcu; R(6)=0x67u; f_8c064e90(c); }
  {  goto L8c03842a; }
L8c038420:;
  R(2)=0x8c0199c4u;
  R(4)=0x1c20u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c03842au; R(6)=0x67u; f_8c0199c4(c); }
L8c03842a:;
  ST32(c->gbr+60,R(0));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c038440;
  R(3)=0x8c064e90u;
  R(6)=0x68u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c03843cu; R(4)=0x10u; f_8c064e90(c); }
  {  goto L8c03844a; }
L8c038440:;
  R(2)=0x8c0199c4u;
  R(6)=0x68u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c03844au; R(4)=0x10u; f_8c0199c4(c); }
L8c03844a:;
  ST32(c->gbr+64,R(0));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c038460;
  R(3)=0x8c064e90u;
  R(4)=0xe10u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c03845cu; R(6)=0x69u; f_8c064e90(c); }
  {  goto L8c03846a; }
L8c038460:;
  R(2)=0x8c0199c4u;
  R(4)=0xe10u;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c03846au; R(6)=0x69u; f_8c0199c4(c); }
L8c03846a:;
  ST32(c->gbr+68,R(0));
  R(5)=0x0u;
  R(0)=LD32(c->gbr+48);
  R(3)=0x8c0686b8u;
  R(6)=0x1518u;
  { c->pr=0x8c038478u; R(4)=R(0); f_8c0686b8(c); }
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0384c0;
  R(3)=0x8c064e90u;
  R(6)=0x6fu;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c038488u; R(4)=0x34u; f_8c064e90(c); }
  {  goto L8c0384ca; }
L8c0384c0:;
  R(2)=0x8c0199c4u;
  R(6)=0x6fu;
  R(5)=0x8c0b9788u;
  { c->pr=0x8c0384cau; R(4)=0x34u; f_8c0199c4(c); }
L8c0384ca:;
  R(1)=0x8c143ab0u;
  R(2)=R(0);
  c->fr[3]=0x00000000u;
  R(4)=R(15);
  ST32(R(1),R(0));
  R(0)=0x8c038570u;
  fp_st(c,3,R(2));
  R(6)=0x10u;
  fp_ld(c,2,R(0));
  R(3)=0x8c0686b8u;
  fp_st(c,2,R(4));
  R(0)=LD32(R(15));
  ST32(c->gbr+4,R(0));
  R(0)=0x8c038574u;
  fp_ld(c,3,R(0));
  fp_st(c,3,R(4));
  R(0)=LD32(R(15));
  R(4)=0x8c140cfcu;
  ST32(c->gbr+8,R(0));
  { c->pr=0x8c0384f4u; R(5)=0x0u; f_8c0686b8(c); }
  R(2)=0x8c038620u;
  { c->pr=0x8c0384fau;  f_8c038620(c); }
  R(3)=0x8c038242u;
  { c->pr=0x8c038500u;  f_8c038242(c); }
  R(2)=0x8c0119a0u;
  R(4)=0x8c143ab8u;
  { c->pr=0x8c038508u;  f_8c0119a0(c); }
  R(3)=0x8c03a960u;
  { c->pr=0x8c03850eu;  f_8c03a960(c); }
L8c03850e:;
  R(1)=0x8c07a75cu;
  R(2)=0x1u;
  R(3)=0x8c0c53b8u;
  { c->pr=0x8c038518u; ST32(R(3),R(2)); f_8c07a75c(c); }
  R(3)=0x8c07a74eu;
  { c->pr=0x8c03851eu; {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} f_8c07a74e(c); }
  R(2)=0x8c07a740u;
  { c->pr=0x8c038524u; {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} f_8c07a740(c); }
  R(3)=0x8c03867cu;
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  { c->pr=0x8c03852eu; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c03867c(c); }
  R(2)=0x8c0e2660u;
  R(4)=0x9bu;
  { c->pr=0x8c038536u;  f_8c0e2660(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03853e(SH4Ctx *c) {
  R(2)=0x8c0c53b8u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c038546(SH4Ctx *c) {
  R(1)=0x8c0c53b8u;
  { R(0)=LD32(R(1)); return; }
}
void f_8c0385c0(SH4Ctx *c) {
  R(3)=0x8c0c5400u;
  R(2)=0xfffffffeu;
  R(1)=LD32(R(3));
  R(1)&=R(2);
  { ST32(R(3),R(1)); return; }
}
void f_8c0385cc(SH4Ctx *c) {
  R(3)=0x8c0c5400u;
  R(2)=0xfffffffdu;
  R(0)=LD32(R(3));
  R(0)&=R(2);
  { ST32(R(3),R(0)); return; }
}
void f_8c0385d8(SH4Ctx *c) {
  R(4)=0x1u;
L8c0385da:;
  R(3)=0x8c0c5400u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c0385da;
  {  return; }
}
void f_8c0385e6(SH4Ctx *c) {
  {  return; }
}
void f_8c0385ea(SH4Ctx *c) {
  {  return; }
}
void f_8c038620(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0686b8u;
  R(4)=0x8c1439d8u;
  R(6)=0x90u;
  { c->pr=0x8c03862cu; R(5)=0x0u; f_8c0686b8(c); }
  R(2)=0x90u;
  R(3)=0x0u;
  R(4)=0x8c1439d8u;
  R(0)=0x50u;
  R(5)=0x1u;
  ST32(R(4),R(2));
  R(2)=R(3);
  ST32(R(4)+4,R(3));
  ST32(R(4)+8,R(3));
  ST32(R(4)+12,R(2));
  R(2)=0x4u;
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(2));
  R(2)=R(3);
  ST32(R(4)+32,R(3));
  R(2)=0xbu;
  ST32(R(4)+36,R(3));
  R(3)=0xau;
  ST32(R(4)+R(0),R(3));
  R(0)=0x54u;
  ST32(R(4)+R(0),R(2));
  R(3)=0x0u;
  R(0)=0x58u;
  R(2)=R(3);
  ST32(R(4)+R(0),R(3));
  R(0)=0x5cu;
  ST32(R(4)+R(0),R(3));
  R(3)=0x2u;
  R(0)=0x60u;
  ST32(R(4)+R(0),R(3));
  R(0)=0x64u;
  R(2)=0x0u;
  ST32(R(4)+R(0),R(2));
  R(0)=0x68u;
  ST32(R(4)+R(0),R(5));
  R(5)=R(4);
  R(3)=0x8c0e0860u;
  R(4)=0x8c143a68u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e0860(c); return; } }
}
void f_8c03867c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0dfd00u;
  R(4)=0x8c0385c0u;
  { c->pr=0x8c038686u; R(5)=0x0u; f_8c0dfd00(c); }
  R(2)=0x8c0dfdc0u;
  R(4)=0x8c0385e6u;
  { c->pr=0x8c03868eu; R(5)=0x0u; f_8c0dfdc0(c); }
  R(3)=0x8c0dfd40u;
  R(5)=0x0u;
  R(4)=0x8c0385eau;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0dfd40(c); return; } }
}
void f_8c0386e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x1u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
L8c0386e6:;
  R(3)=0x8c0c5400u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c0386e6;
  R(3)=0x8c0c5400u;
  R(0)=LD32(R(3));
  R(0)|=0x3u;
  ST32(R(3),R(0));
  R(14)=0x8c140ea4u;
  R(0)=LD32(R(14));
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c038722;
  R(2)=0x8c0db6e0u;
  R(3)=0x8c1410d8u;
  { c->pr=0x8c038706u; R(4)=LD32(R(3)); f_8c0db6e0(c); }
  R(3)=0x8c0db760u;
  R(4)=0x8c140ed8u;
  { c->pr=0x8c03870eu;  f_8c0db760(c); }
  R(3)=0x8c140ebcu;
  R(1)=0x8c0db720u;
  R(2)=LD32(R(3));
  { c->pr=0x8c038718u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c0db720(c); }
  R(15)+=0x4u;
  R(1)=LD32(R(14));
  R(3)=0xffffffdfu;
  R(1)&=R(3);
  ST32(R(14),R(1));
L8c038722:;
  R(0)=LD32(R(14));
  c->t=(R(0)&0x40)==0;
  { uint32_t k=c->t; R(4)=0xfffffffdu; if(k) goto L8c03873a; }
  R(3)=0x8c140ed4u;
  R(1)=0xa05f80b4u;
  R(2)=LD32(R(3));
  ST32(R(1),R(2));
  R(2)=0xffffffbfu;
  R(0)=LD32(R(14));
  R(0)&=R(2);
  ST32(R(14),R(0));
L8c03873a:;
  R(3)=LD32(R(14));
  R(1)=0x8c0c540cu;
  R(3)&=R(4);
  ST32(R(14),R(3));
  R(3)=0xfffffffbu;
  R(2)=LD32(R(14));
  R(2)&=R(3);
  ST32(R(14),R(2));
  R(0)=LD32(c->gbr+92);
  R(0)&=R(4);
  ST32(c->gbr+92,R(0));
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c038768;
  R(2)=0x8c0c5408u;
  R(1)=0x8c0dfe40u;
  R(3)=0x8c0c5404u;
  R(5)=LD32(R(2));
  { c->pr=0x8c038762u; R(4)=LD32(R(3)); f_8c0dfe40(c); }
  R(1)=0x8c0c540cu;
  R(2)=0x0u;
  ST32(R(1),R(2));
L8c038768:;
  R(3)=0x8c0e0080u;
  R(4)=0x8c0fa82cu;
  { c->pr=0x8c038770u;  f_8c0e0080(c); }
  R(2)=0x8c0dffe0u;
  { c->pr=0x8c038776u; R(4)=0x0u; f_8c0dffe0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0e0220u;
  R(4)=0x8c0fa88cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0e0220(c); return; } }
}
void f_8c038780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffa0u;
  R(12)=R(15);
  c->fr[7]=0x00000000u;
  R(0)=0x4u;
  R(5)=R(12);
  R(13)=R(5);
  R(13)+=0x20u;
  R(3)=0xf0000000u;
  R(14)=R(5);
  R(6)=0xe0000000u;
  R(14)+=0x40u;
  ST32(R(5),R(6));
  fp_st(c,7,R(0)+R(5));
  R(0)=0x8c038850u;
  fp_ld(c,5,R(0));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(5));
  R(0)=0x8c038854u;
  fp_ld(c,4,R(0));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(5));
  R(0)=0x8c038858u;
  ST32(R(5)+24,R(4));
  ST32(R(13),R(6));
  fp_ld(c,6,R(0));
  R(0)=0x4u;
  fp_st(c,6,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,7,R(0)+R(13));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(13));
  ST32(R(13)+24,R(4));
  ST32(R(14),R(3));
  R(0)=0x4u;
  R(3)=0x8c0e11a0u;
  fp_st(c,6,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(14));
  R(0)=0xcu;
  R(6)=R(5);
  fp_st(c,4,R(0)+R(14));
  ST32(R(14)+24,R(4));
  R(7)=R(13);
  R(4)=0x8c143a68u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(3); c->pr=0x8c0387e6u; R(5)=0x0u; sh4_call(c,tg); }
  R(15)+=0x64u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c038880(SH4Ctx *c) {
  R(3)=0x8c07a770u;
  R(4)=0x280u;
  R(5)=0x1e0u;
  { R(6)=0x10u; { f_8c07a770(c); return; } }
}
void f_8c0388c0(SH4Ctx *c) {
  R(0)=0x8c038948u;
  R(4)=0x8c143ab0u;
  fp_ld(c,3,R(0));
  R(3)=LD32(R(4));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(3));
  R(3)=LD32(R(4));
  c->fr[4]=0x3F800000u;
  fp_ld(c,2,R(3));
  fp_cmp(c,1,2,4);
  if(!c->t) goto L8c0388da;
  R(2)=LD32(R(4));
  fp_st(c,4,R(2));
L8c0388da:;
  R(5)=LD32(R(4));
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(5));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0388e6;
  fp_st(c,3,R(5));
L8c0388e6:;
  {  return; }
}
void f_8c0388ea(SH4Ctx *c) {
  R(2)=0x8c143ab0u;
  R(0)=0x8c03894cu;
  fp_ld(c,3,R(0));
  R(3)=LD32(R(2));
  fp_ld(c,0,R(3));
  { fp_arith(c,2,0,3); return; }
}
void f_8c0388f8(SH4Ctx *c) {
  R(3)=0x100u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+24);
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c038908;
  R(0)=LD32(c->gbr+84);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03890e;
L8c038908:;
  R(2)=0x8c143ab8u;
  R(0)=LD32(R(2));
  ST32(c->gbr+84,R(0));
L8c03890e:;
  R(0)=LD32(c->gbr+84);
  R(3)=LD32(R(0));
  R(0)=LD32(c->gbr+24);
  R(0)&=R(3);
  R(3)=0x8c01215cu;
  ST32(c->gbr+28,R(0));
  R(0)=LD32(c->gbr+84);
  { c->pr=0x8c038920u; R(4)=R(0); f_8c01215c(c); }
  R(0)=LD32(c->gbr+84);
  R(1)=0x4cu;
  R(3)=0x8c037916u;
  R(0)=LD32(R(1)+R(0));
  { c->pr=0x8c03892cu; ST32(c->gbr+80,R(0)); f_8c037916(c); }
  R(0)=LD32(c->gbr+28);
  R(3)=0x400000u;
  c->t=(R(0)&R(3))==0;
  if(!c->t) goto L8c038960;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} goto L8c038966; }
L8c038960:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c038966:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+76);
  R(5)=R(0);
  R(0)=LD32(c->gbr+16);
  R(5)+=0x4u;
  R(6)=R(0);
  R(0)=0x2cu;
  R(7)=(int32_t)(int16_t)LD16(R(6)+R(0));
  R(2)=R(5);
  R(0)=LD32(c->gbr+68);
  R(13)=R(5);
  R(3)=R(7);
  c->t=R(7)>>31;R(7)<<=1;
  R(4)=LD32(R(6)+4);
  R(6)=R(0);
  R(7)+=R(3);
  R(1)=R(5);
  R(0)=0x8c038a44u;
  R(14)=R(5);
  R(7)<<=2;
  fp_ld(c,5,R(0));
  R(10)=R(5);
  R(7)+=R(4);
  R(1)+=0x1cu;
  c->t=R(4)>=R(7);
  R(13)+=0x4u;
  R(14)+=0x18u;
  R(10)+=0xcu;
  R(2)+=0x10u;
  { uint32_t k=c->t; c->fr[4]=0x3F800000u; if(k) goto L8c0389f0; }
L8c0389a8:;
  R(0)=0x4u;
  fp_ld(c,3,R(10));
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(5));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(4));
  fp_fmac(c,3,2);
  fp_ld(c,2,R(14));
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_arith(c,0,3,4);
  fp_arith(c,2,3,5);
  fp_st(c,3,R(6));
  fp_ld(c,2,R(13));
  fp_ld(c,3,R(4));
  fp_ld(c,1,R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_unary(c,0,2);
  fp_arith(c,1,2,1);
  fp_ld(c,1,R(1));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_arith(c,0,2,4);
  fp_arith(c,2,2,5);
  fp_st(c,2,R(0)+R(6));
  R(4)+=0xcu;
  c->t=R(4)>=R(7);
  { uint32_t k=!c->t; R(6)+=0x8u; if(k) goto L8c0389a8; }
L8c0389f0:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0389f8(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+84);
  R(4)=R(0);
  R(4)+=0x10u;
  fp_ld(c,5,R(4));
  R(4)+=0xfffffffcu;
  fp_ld(c,6,R(4));
  R(4)+=0xfffffffcu;
  R(0)=0x8c038a48u;
  fp_ld(c,4,R(4));
  fp_ld(c,7,R(0));
  fp_mov(c,3,4);
  fp_arith(c,2,3,7);
  R(4)=0xffu;
  R(0)=LD32(c->gbr+28);
  c->t=(R(0)&0x8)==0;
  fp_ftrc(c,3);
  fp_mov(c,3,6);
  fp_arith(c,2,3,7);
  R(5)=c->fpul;
  fp_ftrc(c,3);
  fp_mov(c,3,5);
  fp_arith(c,2,3,7);
  R(5)&=R(4);
  R(5)<<=16;
  R(7)=c->fpul;
  fp_ftrc(c,3);
  R(7)&=R(4);
  R(7)<<=8;
  R(6)=c->fpul;
  { uint32_t k=c->t; R(6)&=R(4); if(k) goto L8c038a60; }
  R(2)=0xffffffffu;
  { ST32(R(15),R(2)); goto L8c038a92; }
L8c038a60:;
  R(1)=0x8c143ab0u;
  R(0)=0x8c038ae8u;
  fp_ld(c,3,R(0));
  R(4)=LD32(R(1));
  fp_ld(c,2,R(4));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c038a72;
  { R(2)=0xffffffffu; goto L8c038a90; }
L8c038a72:;
  R(0)=0x8c038aecu;
  fp_ld(c,1,R(4));
  fp_ld(c,2,R(0));
  R(3)=R(15);
  fp_arith(c,0,1,2);
  fp_st(c,1,R(3));
  R(3)=LD32(R(15));
  R(3)<<=16;
  R(3)<<=8;
  R(2)=R(3);
  R(2)|=R(5);
  R(3)=R(2);
  R(3)|=R(7);
  R(2)=R(3);
  R(2)|=R(6);
L8c038a90:;
  ST32(R(15),R(2));
L8c038a92:;
  R(0)=LD32(c->gbr+80);
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c038ab6;
  R(2)=LD32(R(4)+4);
  R(3)=0x200u;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c038ab6;
  R(1)=LD32(R(15));
  R(3)=0xff000000u;
  R(1)&=R(3);
  R(2)=R(1);
  R(2)|=R(5);
  R(1)=R(2);
  R(1)|=R(7);
  R(2)=R(1);
  R(2)|=R(6);
  ST32(R(15),R(2));
L8c038ab6:;
  R(0)=LD32(R(15));
  ST32(c->gbr+36,R(0));
  { R(15)+=0x4u; return; }
}
void f_8c038abe(SH4Ctx *c) {
  R(3)=0x8c143ab0u;
  R(2)=0x8u;
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(0)=LD32(c->gbr+28);
  c->fr[1]=0x3F800000u;
  R(7)=R(0);
  c->t=(R(2)&R(7))==0;
  { uint32_t k=c->t; R(6)=LD32(R(3)); if(k) goto L8c038b00; }
  { fp_mov(c,15,1); goto L8c038b16; }
L8c038b00:;
  R(0)=0x8c038c80u;
  fp_ld(c,2,R(6));
  fp_ld(c,4,R(0));
  R(0)=0x8c038c84u;
  fp_ld(c,3,R(0));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c038b12;
  { fp_mov(c,15,4); goto L8c038b16; }
L8c038b12:;
  fp_ld(c,15,R(6));
  fp_arith(c,2,15,4);
L8c038b16:;
  R(0)=LD32(c->gbr+80);
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; c->fr[13]=0x00000000u; if(k) goto L8c038b3c; }
  R(0)=LD32(R(4)+4);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c038b3c;
  R(3)=0x4000000u;
  c->t=(R(3)&R(7))==0;
  if(c->t) goto L8c038b3c;
  fp_mov(c,9,13);
  fp_mov(c,4,15);
  fp_mov(c,6,15);
  fp_mov(c,8,13);
  fp_mov(c,11,13);
  fp_mov(c,10,13);
  { fp_mov(c,7,15); goto L8c038b96; }
L8c038b3c:;
  R(0)=LD32(c->gbr+84);
  R(4)=R(0);
  R(4)+=0x14u;
  fp_ld(c,5,R(4));
  R(4)+=0xfffffffcu;
  fp_ld(c,7,R(4));
  R(4)+=0xfffffffcu;
  fp_ld(c,6,R(4));
  R(4)+=0xfffffffcu;
  fp_ld(c,4,R(4));
  R(4)=R(0);
  R(4)+=0x24u;
  R(5)=R(0);
  fp_ld(c,9,R(4));
  R(4)+=0xfffffffcu;
  fp_ld(c,10,R(4));
  R(4)+=0xfffffffcu;
  fp_ld(c,11,R(4));
  R(4)+=0xfffffffcu;
  R(0)=LD32(c->gbr+64);
  fp_ld(c,8,R(4));
  R(4)=R(0);
  R(4)+=0x8u;
  fp_ld(c,3,R(4));
  R(4)+=0xfffffffcu;
  fp_mov(c,0,10);
  R(5)=R(0);
  fp_ld(c,2,R(4));
  fp_fmac(c,7,3);
  fp_mov(c,0,11);
  R(4)+=0xfffffffcu;
  fp_fmac(c,6,2);
  R(3)=0x8u;
  fp_ld(c,3,R(4));
  c->t=(R(3)&R(7))==0;
  fp_mov(c,0,8);
  { uint32_t k=c->t; fp_fmac(c,4,3); if(k) goto L8c038b8e; }
  fp_mov(c,9,13);
  { fp_mov(c,5,1); goto L8c038ba2; }
L8c038b8e:;
  R(2)=0x4000000u;
  c->t=(R(7)&R(2))==0;
  if(c->t) goto L8c038b9a;
  fp_mov(c,9,13);
L8c038b96:;
  { fp_mov(c,5,15); goto L8c038ba2; }
L8c038b9a:;
  R(0)=0xcu;
  fp_mov(c,0,9);
  fp_ld(c,3,R(0)+R(5));
  fp_fmac(c,5,3);
L8c038ba2:;
  R(3)=0x8c0c7fe4u;
  R(0)=0x8c038c8cu;
  fp_ld(c,3,R(0));
  fp_ld(c,15,R(3));
  R(3)=0x8c0c5454u;
  fp_arith(c,0,15,3);
  R(0)=(int32_t)(int8_t)LD8(R(3));
  c->t=(int32_t)R(0)==1;
  fp_arith(c,0,8,15);
  fp_arith(c,0,11,15);
  { uint32_t k=!c->t; fp_arith(c,0,10,15); if(k) goto L8c038bcc; }
  R(0)=0x8c038c98u;
  fp_mov(c,8,13);
  fp_ld(c,7,R(0));
  fp_mov(c,11,13);
  fp_mov(c,10,13);
  fp_mov(c,9,13);
  fp_mov(c,5,7);
  fp_mov(c,4,7);
  fp_mov(c,6,7);
L8c038bcc:;
  R(4)=R(6);
  R(4)+=0x20u;
  fp_st(c,5,R(4));
  R(4)-=fp_sz(c);fp_st(c,7,R(4));
  R(3)=0x8c143ab0u;
  R(4)-=fp_sz(c);fp_st(c,6,R(4));
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(4)=LD32(R(3));
  R(4)+=0x30u;
  fp_st(c,9,R(4));
  R(4)-=fp_sz(c);fp_st(c,10,R(4));
  R(4)-=fp_sz(c);fp_st(c,11,R(4));
  R(4)-=fp_sz(c);fp_st(c,8,R(4));
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c038bec(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff98u;
  R(0)=LD32(c->gbr+88);
  R(14)=R(5);
  R(3)=0x100000u;
  R(13)=R(4);
  R(0)+=0x10u;
  R(12)=0x8c2e70a4u;
  ST32(c->gbr+72,R(0));
  R(14)|=R(3);
  R(0)=R(14);
  ST32(c->gbr+24,R(0));
  R(0)=0x0u;
  R(2)=0x8c087ba6u;
  ST32(c->gbr+32,R(0));
  R(0)=R(13);
  ST32(c->gbr+16,R(0));
  { c->pr=0x8c038c18u; R(4)=R(0); f_8c087ba6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c038c30;
  R(2)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(12));
  { c->pr=0x8c038c28u; R(4)=R(15); f_8c0685b4(c); }
  R(3)=0x8c087be0u;
  R(5)=LD32(R(12));
  { c->pr=0x8c038c30u; R(4)=R(13); f_8c087be0(c); }
L8c038c30:;
  R(0)=LD32(R(12));
  R(3)=0x8c07d698u;
  ST32(c->gbr+76,R(0));
  { c->pr=0x8c038c3au; R(4)=R(14); f_8c07d698(c); }
  R(0)=LD32(c->gbr+64);
  R(1)=0x4u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0));
  R(0)=LD32(c->gbr+64);
  R(3)=0x8c143ab4u;
  fp_st(c,4,R(0)+R(1));
  R(1)=0x8u;
  R(0)=LD32(c->gbr+64);
  fp_st(c,4,R(0)+R(1));
  R(1)=0xcu;
  R(0)=LD32(c->gbr+64);
  fp_st(c,4,R(0)+R(1));
  R(4)=LD32(R(3));
  R(0)=LD32(c->gbr+16);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c038cc0; }
  R(0)=0x2cu;
  R(2)=0x8c07c872u;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  { c->pr=0x8c038c68u; R(5)=0x0u; f_8c07c872(c); }
  R(2)=0x8c143ab4u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); goto L8c038cec; }
L8c038cc0:;
  R(0)=LD32(c->gbr+60);
  R(5)=R(0);
  R(0)=0x2cu;
  R(6)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(6)<<=2;
  R(6)<<=2;
  R(6)+=R(5);
  c->t=R(5)>=R(6);
  { uint32_t k=c->t; R(4)=R(6); if(k) goto L8c038ce2; }
L8c038cd4:;
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  R(6)+=0xfffffff0u;
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  c->t=R(5)>=R(6);
  R(4)-=fp_sz(c);fp_st(c,4,R(4));
  { uint32_t k=!c->t; R(4)-=fp_sz(c);fp_st(c,4,R(4)); if(k) goto L8c038cd4; }
L8c038ce2:;
  R(3)=0x8c07c7c0u;
  R(4)=0x8c2dd4b4u;
  R(2)=0x8c2dd964u;
  { c->pr=0x8c038cecu; R(5)=LD32(R(2)); f_8c07c7c0(c); }
L8c038cec:;
  R(0)=LD32(c->gbr+92);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c038d1c;
  R(0)=LD32(c->gbr+48);
  R(1)=0x2cu;
  R(4)=R(0);
  R(0)=LD32(c->gbr+16);
  R(5)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x8c038db0u;
  R(3)=R(5);
  c->t=R(5)>>31;R(5)<<=1;
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(4);
  c->t=R(4)>=R(5);
  { uint32_t k=c->t; fp_ld(c,4,R(0)); if(k) goto L8c038d1c; }
L8c038d0e:;
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,0,3,4);
  fp_st(c,3,R(0)+R(4));
  R(4)+=0xcu;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c038d0e;
L8c038d1c:;
  { c->pr=0x8c038d20u;  f_8c038e14(c); }
  R(3)=0x8c087ba6u;
  { c->pr=0x8c038d26u; R(4)=R(13); f_8c087ba6(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c038d36;
  R(3)=0x8c0685b4u;
  R(5)=R(15);
  R(6)=0x68u;
  { c->pr=0x8c038d36u; R(4)=LD32(R(12)); f_8c0685b4(c); }
L8c038d36:;
  R(15)+=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c038d42(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=LD32(c->gbr+16);
  R(1)=0x34u;
  R(2)=0x8c143ab0u;
  fp_ld(c,12,R(0)+R(1));
  R(8)=LD32(R(2));
  R(3)=0x8c0163e6u;
  R(0)=LD32(c->gbr+76);
  R(8)+=0x10u;
  { c->pr=0x8c038d60u; R(4)=R(0); f_8c0163e6(c); }
  fp_arith(c,2,12,0);
  R(3)=0x8c143ab0u;
  R(2)=0x8c014eaau;
  fp_st(c,12,R(8));
  R(0)=LD32(c->gbr+16);
  R(4)=LD32(R(3));
  R(6)=R(0);
  R(0)=LD32(c->gbr+76);
  fp_mov(c,15,12);
  R(6)+=0x38u;
  R(5)=R(0);
  { c->pr=0x8c038d7au; R(4)+=0x4u; f_8c014eaa(c); }
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,15,3);
  if(!c->t) goto L8c038de0;
  R(0)=0x100u;
  { ST32(c->gbr+32,R(0)); goto L8c038e08; }
L8c038de0:;
  R(0)=LD32(c->gbr+16);
  R(3)=0x8c014eaau;
  R(6)=R(0);
  R(0)=LD32(c->gbr+76);
  R(6)+=0x38u;
  R(5)=R(0);
  { c->pr=0x8c038df0u; R(4)=R(15); f_8c014eaa(c); }
  R(0)=0x8u;
  R(1)=0x80u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=LD32(c->gbr+88);
  fp_arith(c,1,3,15);
  fp_ld(c,2,R(0)+R(1));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c038e08;
  R(0)=LD32(c->gbr+32);
  R(3)=0x100u;
  R(0)|=R(3);
  ST32(c->gbr+32,R(0));
L8c038e08:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c038e14(SH4Ctx *c) {
  R(1)=0x2eu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(c->gbr+16);
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c038e52; }
L8c038e24:;
  R(0)=LD32(c->gbr+16);
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=R(4)>>31;R(4)<<=1;
  R(0)=LD32(R(0)+16);
  R(4)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c038e3c;
  { c->pr=0x8c038e38u; R(4)=R(14); f_8c038e80(c); }
  {  goto L8c038e44; }
L8c038e3c:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c038e44;
  { c->pr=0x8c038e44u; R(4)=R(14); f_8c039138(c); }
L8c038e44:;
  R(0)=LD32(c->gbr+16);
  R(1)=0x2eu;
  R(14)+=0x1u;
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(2)=(uint32_t)(int32_t)(int16_t)R(14);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c038e24;
L8c038e52:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c038e80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x8c0c5454u;
  R(3)=0xffffffffu;
  R(9)=0x8c0c806eu;
  R(11)=0x4u;
  R(10)=0x8c0c5058u;
  ST16(R(15),R(4));
  ST8(R(12),R(3));
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(2)<<=2;
  ST32(R(15)+4,R(2));
L8c038ea6:;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  R(3)+=0x1u;
  ST8(R(12),R(3));
  R(2)=(int32_t)(int8_t)LD8(R(9));
  c->t=(R(2)&R(11))==0;
  if(c->t) goto L8c038ecc;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c038ecc;
  R(0)=LD32(c->gbr+28);
  R(5)=0x1u;
  R(3)=0xffbfffffu;
  R(2)=0x8c011be8u;
  R(0)&=R(3);
  ST32(c->gbr+28,R(0));
  { c->pr=0x8c038ec8u; R(4)=LD32(R(10)); f_8c011be8(c); }
  { R(0)=LD32(R(10)); goto L8c038eda; }
L8c038ecc:;
  R(0)=LD32(c->gbr+28);
  R(3)=0x8c08563cu;
  R(8)=R(0);
  R(0)=LD32(c->gbr+16);
  R(5)=(int32_t)(int16_t)LD16(R(15));
  { c->pr=0x8c038edau; R(4)=R(0); f_8c08563c(c); }
L8c038eda:;
  ST32(c->gbr+84,R(0));
  R(0)=LD32(c->gbr+16);
  R(3)=LD32(R(15)+4);
  R(0)=LD32(R(0)+20);
  R(1)=0x8c140e98u;
  R(14)=LD32(R(3)+R(0));
  R(2)=LD32(R(14)+16);
  { c->pr=0x8c038eecu; ST32(R(1),R(2)); f_8c0388f8(c); }
  { c->pr=0x8c038ef0u;  f_8c038abe(c); }
  R(0)=0x8c0c5480u;
  R(3)=0x4000000u;
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(0)=LD32(c->gbr+28);
  R(2)=R(5)&0xFF;
  R(4)=R(0);
  R(0)=LD32(c->gbr+16);
  c->t=(R(2)&R(2))==0;
  R(4)&=R(3);
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c038f6a; }
  R(2)=0x8c20ae78u;
  R(0)=(int32_t)(int8_t)LD8(R(2));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c038f16;
  R(0)=LD32(c->gbr+24);
  R(1)=0x80000000u;
  c->t=(R(0)&R(1))==0;
  if(c->t) goto L8c038f26;
L8c038f16:;
  R(3)=0x8c20ae78u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c038f6a;
  R(0)=LD32(c->gbr+24);
  R(2)=0x80000000u;
  c->t=(R(0)&R(2))==0;
  if(c->t) goto L8c038f6a;
L8c038f26:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c038f4a;
  R(1)=LD32(R(14)+24);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c038f3e;
  R(3)=0x8c07e5e0u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c038f3au; R(4)=R(0); f_8c07e5e0(c); }
  {  goto L8c039108; }
L8c038f3e:;
  R(3)=0x8c07e840u;
  R(0)=0x2cu;
  { c->pr=0x8c038f46u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c07e840(c); }
  {  goto L8c039108; }
L8c038f4a:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c038f5e;
  R(3)=0x8c07ea40u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c038f5au; R(4)=R(0); f_8c07ea40(c); }
  {  goto L8c039108; }
L8c038f5e:;
  R(3)=0x8c07ecc0u;
  R(0)=0x2cu;
  { c->pr=0x8c038f66u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c07ecc0(c); }
  {  goto L8c039108; }
L8c038f6a:;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c039020;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c039000;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c038f88;
  R(3)=0x8c07ef20u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c038f84u; R(4)=R(0); f_8c07ef20(c); }
  {  goto L8c039108; }
L8c038f88:;
  R(3)=0x8c07f0d8u;
  R(0)=0x2cu;
  { c->pr=0x8c038f90u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c07f0d8(c); }
  {  goto L8c039108; }
L8c039000:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c039014;
  R(3)=0x8c07f2c0u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c039010u; R(4)=R(0); f_8c07f2c0(c); }
  {  goto L8c039108; }
L8c039014:;
  R(3)=0x8c07f4b4u;
  R(0)=0x2cu;
  { c->pr=0x8c03901cu; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c07f4b4(c); }
  {  goto L8c039108; }
L8c039020:;
  R(2)=0x8c0c806cu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c039030;
  R(1)=0x8c0c806du;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c03907c;
L8c039030:;
  R(2)=0x8c0c806eu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c03907c;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03905c;
  R(2)=LD32(R(14)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c039050;
  R(3)=0x8c07ddaau;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c03904cu; R(4)=R(0); f_8c07ddaa(c); }
  {  goto L8c039108; }
L8c039050:;
  R(3)=0x8c07dfaeu;
  R(0)=0x2cu;
  { c->pr=0x8c039058u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c07dfae(c); }
  {  goto L8c039108; }
L8c03905c:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c039070;
  R(3)=0x8c07e198u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c03906cu; R(4)=R(0); f_8c07e198(c); }
  {  goto L8c039108; }
L8c039070:;
  R(3)=0x8c07e3cau;
  R(0)=0x2cu;
  { c->pr=0x8c039078u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c07e3ca(c); }
  {  goto L8c039108; }
L8c03907c:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0390a0;
  R(2)=LD32(R(14)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c039094;
  R(3)=0x8c07d800u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c039090u; R(4)=R(0); f_8c07d800(c); }
  {  goto L8c039108; }
L8c039094:;
  R(3)=0x8c07d948u;
  R(0)=0x2cu;
  { c->pr=0x8c03909cu; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c07d948(c); }
  {  goto L8c039108; }
L8c0390a0:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c039100;
  R(3)=0x8c07daa4u;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0390b0u; R(4)=R(0); f_8c07daa4(c); }
  {  goto L8c039108; }
L8c039100:;
  R(3)=0x8c07dc28u;
  R(0)=0x2cu;
  { c->pr=0x8c039108u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c07dc28(c); }
L8c039108:;
  R(2)=0x8c07a222u;
  { c->pr=0x8c03910eu; R(4)=R(14); f_8c07a222(c); }
  R(0)=R(8);
  ST32(c->gbr+28,R(0));
  R(3)=(int32_t)(int8_t)LD8(R(9));
  c->t=(R(3)&R(11))==0;
  if(c->t) goto L8c039124;
  R(2)=0x8c0c5454u;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c039124;
  {  goto L8c038ea6; }
L8c039124:;
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
void f_8c039138(SH4Ctx *c) {
  R(0)=LD32(c->gbr+16);
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)=0x8c07f8e0u;
  R(4)<<=2;
  R(0)=LD32(R(0)+20);
  { R(4)=LD32(R(4)+R(0)); { f_8c07f8e0(c); return; } }
}
void f_8c039180(SH4Ctx *c) {
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
  R(4)=R(15);
  R(4)+=0x20u;
  R(8)=0x8c0c5484u;
  R(13)=R(4);
  R(3)=0x8c0c548cu;
  R(4)+=0x6u;
  R(9)=0x8c0c5488u;
  R(2)=R(4);
  fp_ld(c,13,R(3));
  c->t=R(13)>=R(2);
  R(14)=0x8c0686fcu;
  R(0)=0x8c0393acu;
  fp_ld(c,14,R(9));
  fp_ld(c,12,R(8));
  ST32(R(15)+20,R(13));
  ST32(R(15)+8,R(4));
  { uint32_t k=c->t; fp_ld(c,15,R(0)); if(k) goto L8c039284; }
L8c0391be:;
  { uint32_t tg=R(14); c->pr=0x8c0391c2u; fp_mov(c,4,12); sh4_call(c,tg); }
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { uint32_t tg=R(14); c->pr=0x8c0391c8u; fp_mov(c,4,14); sh4_call(c,tg); }
  R(0)=0x8c0393b4u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0));
  R(0)=0x8c0393b8u;
  fp_arith(c,2,0,3);
  fp_mov(c,2,0);
  fp_ld(c,0,R(0));
  fp_fmac(c,2,1);
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  { uint32_t tg=R(14); c->pr=0x8c0391deu; fp_mov(c,4,13); sh4_call(c,tg); }
  R(0)=0x8c0393bcu;
  fp_mov(c,3,0);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_arith(c,0,14,15);
  fp_ld(c,0,R(0));
  R(0)=0x8c0393c0u;
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  ST8(R(13),R(3));
  R(13)+=0x1u;
  fp_ld(c,3,R(0));
  R(0)=0x8c0393c4u;
  fp_ld(c,2,R(0));
  fp_arith(c,0,12,3);
  fp_arith(c,0,13,2);
  { uint32_t tg=R(14); c->pr=0x8c039202u; fp_mov(c,4,12); sh4_call(c,tg); }
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { uint32_t tg=R(14); c->pr=0x8c039208u; fp_mov(c,4,14); sh4_call(c,tg); }
  R(0)=0x8c0393b4u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0));
  R(0)=0x8c0393b8u;
  fp_arith(c,2,0,3);
  fp_mov(c,2,0);
  fp_ld(c,0,R(0));
  fp_fmac(c,2,1);
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  { uint32_t tg=R(14); c->pr=0x8c03921eu; fp_mov(c,4,13); sh4_call(c,tg); }
  R(0)=0x8c0393bcu;
  fp_mov(c,3,0);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_arith(c,0,14,15);
  fp_ld(c,0,R(0));
  R(0)=0x8c0393c0u;
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  ST8(R(13),R(3));
  R(13)+=0x1u;
  fp_ld(c,3,R(0));
  R(0)=0x8c0393c4u;
  fp_ld(c,2,R(0));
  fp_arith(c,0,12,3);
  fp_arith(c,0,13,2);
  { uint32_t tg=R(14); c->pr=0x8c039242u; fp_mov(c,4,12); sh4_call(c,tg); }
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { uint32_t tg=R(14); c->pr=0x8c039248u; fp_mov(c,4,14); sh4_call(c,tg); }
  R(0)=0x8c0393b4u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0));
  R(0)=0x8c0393b8u;
  fp_arith(c,2,0,3);
  fp_mov(c,2,0);
  fp_ld(c,0,R(0));
  fp_fmac(c,2,1);
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  { uint32_t tg=R(14); c->pr=0x8c03925eu; fp_mov(c,4,13); sh4_call(c,tg); }
  R(0)=0x8c0393bcu;
  fp_mov(c,3,0);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_arith(c,0,14,15);
  fp_ld(c,0,R(0));
  R(0)=0x8c0393c0u;
  fp_fmac(c,2,3);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  ST8(R(13),R(3));
  R(13)+=0x1u;
  fp_ld(c,3,R(0));
  R(0)=0x8c0393c4u;
  R(3)=LD32(R(15)+8);
  fp_arith(c,0,12,3);
  fp_ld(c,2,R(0));
  c->t=R(13)>=R(3);
  { uint32_t k=!c->t; fp_arith(c,0,13,2); if(k) goto L8c0391be; }
L8c039284:;
  R(10)=0x8c0c5490u;
  R(13)=R(15);
  R(12)=R(15);
  R(12)+=0x1du;
  fp_ld(c,14,R(10));
  R(13)+=0x18u;
  R(11)=0x8c0c5494u;
  c->t=R(13)>=R(12);
  { uint32_t k=c->t; fp_ld(c,13,R(11)); if(k) goto L8c0392c6; }
  R(0)=0x8c0393d0u;
  fp_ld(c,12,R(0));
L8c03929c:;
  { uint32_t tg=R(14); c->pr=0x8c0392a0u; fp_mov(c,4,14); sh4_call(c,tg); }
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  { uint32_t tg=R(14); c->pr=0x8c0392a6u; fp_mov(c,4,13); sh4_call(c,tg); }
  R(0)=0x8c0393d4u;
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(0));
  R(0)=0x8c0393d8u;
  fp_arith(c,0,14,15);
  fp_arith(c,2,0,3);
  fp_mov(c,2,0);
  fp_ld(c,0,R(0));
  fp_fmac(c,2,1);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  ST8(R(13),R(3));
  R(13)+=0x1u;
  c->t=R(13)>=R(12);
  { uint32_t k=!c->t; fp_arith(c,0,13,12); if(k) goto L8c03929c; }
L8c0392c6:;
  R(0)=0x8c0393dcu;
  fp_ld(c,2,R(8));
  fp_ld(c,3,R(0));
  R(0)=0x8c0393e0u;
  R(3)=0x8c0c548cu;
  R(6)=0x0u;
  fp_arith(c,0,2,3);
  R(4)=0x8c0c5474u;
  R(5)=0x8c0c5468u;
  R(12)=R(4);
  fp_st(c,2,R(8));
  fp_ld(c,1,R(9));
  fp_ld(c,2,R(0));
  R(0)=0x8c0393e4u;
  fp_arith(c,0,1,2);
  fp_st(c,1,R(9));
  fp_ld(c,1,R(0));
  R(0)=0x8c0393e8u;
  fp_ld(c,0,R(3));
  fp_arith(c,0,0,1);
  fp_st(c,0,R(3));
  fp_ld(c,3,R(0));
  R(0)=0x8c0393ecu;
  fp_ld(c,2,R(10));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(10));
  fp_ld(c,1,R(11));
  fp_ld(c,2,R(0));
  fp_arith(c,0,1,2);
  fp_st(c,1,R(11));
  R(0)=LD32(c->gbr+52);
  R(7)=R(0);
  R(9)=R(4);
  R(11)=R(4);
  R(4)=0x8c0c545cu;
  R(14)=R(5);
  R(10)=R(5);
  R(13)=R(5);
  R(5)=R(4);
  R(0)=0x8c0393fcu;
  R(8)=R(4);
  R(4)+=0x8u;
  ST32(R(15)+12,R(4));
  R(8)+=0x4u;
  fp_ld(c,4,R(0));
  R(13)+=0x4u;
  R(11)+=0x4u;
  R(10)+=0x8u;
  R(9)+=0x8u;
L8c039328:;
  R(3)=LD32(R(15)+20);
  R(2)=R(15);
  R(2)+=0x18u;
  ST32(R(15)+4,R(3));
  R(2)+=R(6);
  ST32(R(15)+16,R(2));
  R(3)=LD32(R(15)+8);
  R(1)=LD32(R(15)+4);
  c->t=R(1)>=R(3);
  if(!c->t) goto L8c039340;
  {  goto L8c039480; }
L8c039340:;
  R(3)=LD32(R(15)+16);
  R(4)=0xff000000u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(3)=LD32(R(15)+4);
  R(1)=(int32_t)(int8_t)LD8(R(3));
  R(2)+=R(1);
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; ST32(R(15),R(2)); if(k) goto L8c039420; }
  c->fpul=R(2);
  fp_ld(c,3,R(12));
  fp_ld(c,6,R(14));
  fp_float(c,2);
  fp_arith(c,1,3,6);
  fp_arith(c,2,3,2);
  fp_mov(c,5,2);
  fp_arith(c,3,3,4);
  fp_arith(c,0,3,6);
  fp_ld(c,6,R(13));
  fp_ftrc(c,3);
  fp_ld(c,3,R(11));
  fp_arith(c,1,3,6);
  R(3)=c->fpul;
  fp_arith(c,2,3,5);
  R(3)<<=16;
  R(4)|=R(3);
  fp_arith(c,3,3,4);
  fp_arith(c,0,3,6);
  fp_ld(c,6,R(10));
  fp_ftrc(c,3);
  fp_ld(c,3,R(9));
  fp_arith(c,1,3,6);
  R(3)=c->fpul;
  fp_arith(c,2,3,5);
  R(3)<<=8;
  R(4)|=R(3);
  fp_arith(c,3,3,4);
  fp_arith(c,0,3,6);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  { R(4)|=R(3); goto L8c03946c; }
L8c039420:;
  c->t=(int32_t)R(2)>=0;
  if(c->t) goto L8c03946c;
  fp_ld(c,6,R(14));
  c->fpul=R(2);
  fp_ld(c,3,R(5));
  fp_mov(c,2,6);
  fp_arith(c,1,2,3);
  R(2)=LD32(R(15)+12);
  fp_float(c,3);
  fp_arith(c,2,2,3);
  fp_mov(c,5,3);
  fp_ld(c,3,R(8));
  fp_arith(c,3,2,4);
  fp_arith(c,0,2,6);
  fp_ld(c,6,R(13));
  fp_ftrc(c,2);
  fp_mov(c,2,6);
  fp_arith(c,1,2,3);
  fp_ld(c,3,R(2));
  R(3)=c->fpul;
  fp_arith(c,2,2,5);
  R(3)<<=16;
  R(4)|=R(3);
  fp_arith(c,3,2,4);
  fp_arith(c,0,2,6);
  fp_ld(c,6,R(10));
  fp_ftrc(c,2);
  fp_mov(c,2,6);
  fp_arith(c,1,2,3);
  R(3)=c->fpul;
  fp_arith(c,2,2,5);
  R(3)<<=8;
  R(4)|=R(3);
  fp_arith(c,3,2,4);
  fp_arith(c,0,2,6);
  fp_ftrc(c,2);
  R(3)=c->fpul;
  R(4)|=R(3);
L8c03946c:;
  ST32(R(7),R(4));
  R(2)=LD32(R(15)+4);
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(15)+8);
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(7)+=0x4u; if(k) goto L8c039480; }
  {  goto L8c039340; }
L8c039480:;
  R(3)=0x5u;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(3);
  if(c->t) goto L8c03948c;
  {  goto L8c039328; }
L8c03948c:;
  R(0)=LD32(c->gbr+52);
  R(5)=0xff050505u;
  R(4)=R(0);
  R(4)+=0x38u;
  ST32(R(4),R(5));
  R(4)+=0x4u;
  ST32(R(4),R(5));
  R(4)+=0x14u;
  ST32(R(4),R(5));
  R(4)+=0x4u;
  ST32(R(4),R(5));
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
void f_8c0394be(SH4Ctx *c) {
  R(0)=0xf7fffbffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  R(3)=0x8c0c5458u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c143ab8u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(c->gbr+24,R(0));
  R(0)=R(14);
  ST32(c->gbr+32,R(0));
  R(0)=LD32(R(3));
  ST32(c->gbr+16,R(0));
  R(0)=R(14);
  ST32(c->gbr+84,R(0));
  R(0)=0x4cu;
  R(2)=LD32(R(1));
  { c->pr=0x8c0394eau; ST32(R(2)+R(0),R(14)); f_8c0388f8(c); }
  R(2)=0x8c0679f4u;
  R(5)=0x5u;
  R(1)=LD32(R(13)+4);
  { c->pr=0x8c0394f4u; R(0)=R(5); f_8c0679f4(c); }
  R(7)=R(0);
  R(0)=LD32(c->gbr+48);
  R(9)=LD32(R(13));
  R(1)=0x6u;
  R(4)=R(0);
  R(0)=0x8c0395b4u;
  R(11)=LD32(R(13)+48);
  R(9)>>=2;
  fp_ld(c,4,R(0));
  R(12)=R(5);
L8c039508:;
  c->fpul=R(11);
  R(6)=R(14);
  R(5)=LD32(R(13)+56);
  fp_float(c,3);
  fp_mov(c,0,3);
L8c039512:;
  c->fpul=R(5);
  c->fr[2]=0x00000000u;
  fp_float(c,3);
  fp_cmp(c,1,2,3);
  { uint32_t k=!c->t; fp_mov(c,5,3); if(k) goto L8c039528; }
  R(0)=0x8c0395b8u;
  fp_mov(c,2,5);
  fp_ld(c,3,R(0));
  { fp_arith(c,0,2,3); goto L8c03952a; }
L8c039528:;
  fp_mov(c,2,5);
L8c03952a:;
  fp_st(c,2,R(4));
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,0);
  if(!c->t) goto L8c03953c;
  R(0)=0x8c0395b8u;
  fp_mov(c,3,0);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c03953e; }
L8c03953c:;
  fp_mov(c,3,0);
L8c03953e:;
  R(5)+=R(7);
  c->fpul=R(5);
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  R(6)+=0x1u;
  fp_float(c,2);
  fp_st(c,4,R(0)+R(4));
  R(4)+=0xcu;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_mov(c,5,2); if(k) goto L8c039562; }
  R(0)=0x8c0395b8u;
  fp_mov(c,3,5);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,3,2); goto L8c039564; }
L8c039562:;
  fp_mov(c,3,5);
L8c039564:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,0);
  { uint32_t k=!c->t; fp_st(c,3,R(4)); if(k) goto L8c039576; }
  R(0)=0x8c0395b8u;
  fp_mov(c,3,0);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c039578; }
L8c039576:;
  fp_mov(c,3,0);
L8c039578:;
  R(5)+=R(7);
  c->fpul=R(5);
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  R(6)+=0x1u;
  fp_float(c,2);
  fp_st(c,4,R(0)+R(4));
  R(4)+=0xcu;
  fp_cmp(c,1,3,2);
  { uint32_t k=!c->t; fp_mov(c,5,2); if(k) goto L8c0395c0; }
  R(0)=0x8c0395b8u;
  fp_mov(c,3,5);
  fp_ld(c,2,R(0));
  { fp_arith(c,0,3,2); goto L8c0395c2; }
L8c0395c0:;
  fp_mov(c,3,5);
L8c0395c2:;
  c->fr[2]=0x00000000u;
  fp_cmp(c,1,2,0);
  { uint32_t k=!c->t; fp_st(c,3,R(4)); if(k) goto L8c0395d4; }
  R(0)=0x8c039620u;
  fp_mov(c,3,0);
  fp_ld(c,1,R(0));
  { fp_arith(c,0,3,1); goto L8c0395d6; }
L8c0395d4:;
  fp_mov(c,3,0);
L8c0395d6:;
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(4));
  R(6)+=0x1u;
  R(0)=0x8u;
  c->t=(int32_t)R(6)>=(int32_t)R(1);
  fp_st(c,4,R(0)+R(4));
  R(5)+=R(7);
  { uint32_t k=!c->t; R(4)+=0xcu; if(k) goto L8c039512; }
  R(12)-=1;c->t=R(12)==0;
  { uint32_t k=!c->t; R(11)+=R(9); if(k) goto L8c039508; }
  { c->pr=0x8c0395f2u;  f_8c039180(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0c5458u;
  R(2)=0x8c07a222u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  R(4)=LD32(R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  R(4)=LD32(R(4)+20);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  R(4)=LD32(R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c07a222(c); return; } }
}
void f_8c039640(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff6acu;
  R(15)+=R(0);
  R(13)=0x8c0c54ecu;
  R(2)=0x8c0b9798u;
  R(3)=LD32(R(13));
  R(3)+=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c039666u; R(4)+=0xcu; f_8c06874c(c); }
  R(2)=0x8c0b97b0u;
  R(10)=R(15);
  R(3)=0x8c0b97a4u;
  R(10)+=0x1cu;
  R(1)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c039678u; R(4)=R(10); f_8c06874c(c); }
  R(15)+=0x10u;
  R(6)=0x114u;
  R(4)=R(15);
  R(3)=0x8c0128beu;
  R(5)=R(10);
  R(9)=0x8c0c54dcu;
  R(12)=0x0u;
  R(6)+=R(15);
  { c->pr=0x8c03968cu; R(4)+=0x4u; f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c039694;
  {  goto L8c039820; }
L8c039694:;
  R(3)=0x8c143ac4u;
  R(5)=0x312u;
  R(4)=0x114u;
  R(6)=R(3);
  R(11)=0x8c012b78u;
  ST32(R(9),R(3));
  { c->pr=0x8c0396a4u; R(4)+=R(15); f_8c012b78(c); }
  R(2)=LD32(R(9));
  R(4)=0x114u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  ST8(R(15),R(3));
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(6)=LD32(R(9));
  R(5)=R(5)&0xFF;
  { uint32_t tg=R(11); c->pr=0x8c0396b6u; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0x8c0bdbf4u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(14)=LD32(R(9)); if(k) goto L8c039720; }
  R(6)=0x3200u;
  { R(6)+=R(14); goto L8c039722; }
L8c039720:;
  R(6)=R(14);
L8c039722:;
  R(4)=0x114u;
  R(5)=0x12c00u;
  { uint32_t tg=R(11); c->pr=0x8c03972au; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=0x8c012accu;
  R(4)=0x114u;
  { c->pr=0x8c039732u; R(4)+=R(15); f_8c012acc(c); }
  R(3)=0x8c0bdbf4u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c039790;
  R(0)=0x8c0397f4u;
  R(14)=0xc80u;
  fp_ld(c,5,R(0));
  R(0)=0x8c0397f8u;
  fp_ld(c,4,R(0));
  R(4)=R(12);
L8c039746:;
  c->fpul=R(4);
  R(7)=R(4);
  R(7)<<=2;
  R(3)=R(4);
  R(7)+=R(3);
  R(2)=LD32(R(9));
  fp_float(c,3);
  R(7)<<=2;
  R(7)<<=2;
  R(7)<<=2;
  R(5)=0x50u;
  R(7)+=R(2);
  fp_mov(c,2,3);
  fp_arith(c,2,2,5);
  fp_arith(c,3,2,4);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)<<=2;
  R(0)+=R(14);
  R(0)<<=2;
  R(6)=R(0);
  R(6)+=R(2);
L8c03977a:;
  {uint32_t v=LD32(R(6));R(6)+=4;R(2)=v;}
  R(5)+=0xffffffffu;
  c->t=(R(5)&R(5))==0;
  ST32(R(7),R(2));
  { uint32_t k=!c->t; R(7)+=0x4u; if(k) goto L8c03977a; }
  R(4)+=0x1u;
  c->fpul=R(4);
  fp_float(c,3);
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c039746;
L8c039790:;
  R(6)=0x114u;
  R(4)=0x8c0b97b8u;
  R(2)=0x8c0128beu;
  R(6)+=R(15);
  { c->pr=0x8c03979cu; R(5)=R(10); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0397d4;
  R(14)=0x8c1598c4u;
  R(5)=0x312u;
  R(4)=0x114u;
  R(6)=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0397acu; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(4)=0x114u;
  R(6)=R(2);
  ST8(R(15),R(3));
  R(5)=(int32_t)(int8_t)LD8(R(15));
  R(5)=R(5)&0xFF;
  { uint32_t tg=R(11); c->pr=0x8c0397beu; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x114u;
  R(6)=R(14);
  R(5)=0x1c20u;
  { uint32_t tg=R(11); c->pr=0x8c0397c8u; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0x8c012accu;
  R(4)=0x114u;
  { c->pr=0x8c0397d0u; R(4)+=R(15); f_8c012acc(c); }
  {  goto L8c039822; }
L8c0397d4:;
  { ST32(R(9),R(12)); goto L8c039822; }
L8c039820:;
  ST32(R(9),R(12));
L8c039822:;
  R(2)=LD32(R(13));
  R(2)+=0x1u;
  R(0)=R(2);
  c->t=(int32_t)R(0)==4;
  { uint32_t k=!c->t; ST32(R(13),R(2)); if(k) goto L8c039830; }
  ST32(R(13),R(12));
L8c039830:;
  R(3)=0x8c0c54e0u;
  R(2)=0xffu;
  R(1)=0x954u;
  ST32(R(3),R(2));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03984a(SH4Ctx *c) {
  R(5)=R(4);
  R(0)=R(4);
  R(5)>>=8;
  R(0)>>=2;
  R(5)>>=2;
  R(7)=0x1fu;
  R(0)>>=2;
  c->t=R(5)&1;R(5)>>=1;
  c->t=R(0)&1;R(0)>>=1;
  R(6)=0x3fu;
  R(5)&=R(7);
  R(6)&=R(0);
  R(5)+=0xffffffffu;
  c->t=(int32_t)R(5)>=0;
  R(4)&=R(7);
  R(6)+=0xfffffffeu;
  { uint32_t k=c->t; R(4)+=0xffffffffu; if(k) goto L8c039870; }
  R(5)=0x0u;
L8c039870:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c039876;
  R(6)=0x0u;
L8c039876:;
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(5)<<=8; if(k) goto L8c03987e; }
  R(4)=0x0u;
L8c03987e:;
  R(6)<<=2;
  R(6)<<=2;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  c->t=R(6)>>31;R(6)<<=1;
  R(5)|=R(6);
  R(4)|=R(5);
  R(0)=R(4);
  R(0)<<=16;
  { R(0)|=R(4); return; }
}
void f_8c039894(SH4Ctx *c) {
  R(5)=R(4);
  R(0)=R(4);
  R(5)>>=8;
  R(0)>>=2;
  R(5)>>=2;
  R(7)=0x1fu;
  R(0)>>=2;
  c->t=R(5)&1;R(5)>>=1;
  c->t=R(0)&1;R(0)>>=1;
  R(6)=0x3fu;
  R(5)&=R(7);
  R(6)&=R(0);
  R(5)+=0xfffffffeu;
  c->t=(int32_t)R(5)>=0;
  R(4)&=R(7);
  R(6)+=0xfffffffdu;
  { uint32_t k=c->t; R(4)+=0xfffffffeu; if(k) goto L8c0398ba; }
  R(5)=0x0u;
L8c0398ba:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c0398c0;
  R(6)=0x0u;
L8c0398c0:;
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(5)<<=8; if(k) goto L8c0398c8; }
  R(4)=0x0u;
L8c0398c8:;
  R(6)<<=2;
  R(6)<<=2;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  c->t=R(6)>>31;R(6)<<=1;
  R(5)|=R(6);
  R(4)|=R(5);
  R(0)=R(4);
  R(0)<<=16;
  { R(0)|=R(4); return; }
}
void f_8c039900(SH4Ctx *c) {
  R(5)=R(4);
  R(0)=R(4);
  R(5)>>=8;
  R(0)>>=2;
  R(5)>>=2;
  R(7)=0x1fu;
  R(0)>>=2;
  c->t=R(5)&1;R(5)>>=1;
  c->t=R(0)&1;R(0)>>=1;
  R(6)=0x3fu;
  R(5)&=R(7);
  R(6)&=R(0);
  R(5)+=0xfffffffdu;
  c->t=(int32_t)R(5)>=0;
  R(4)&=R(7);
  R(6)+=0xfffffffcu;
  { uint32_t k=c->t; R(4)+=0xfffffffdu; if(k) goto L8c039926; }
  R(5)=0x0u;
L8c039926:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c03992c;
  R(6)=0x0u;
L8c03992c:;
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(5)<<=8; if(k) goto L8c039934; }
  R(4)=0x0u;
L8c039934:;
  R(6)<<=2;
  R(6)<<=2;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  c->t=R(6)>>31;R(6)<<=1;
  R(5)|=R(6);
  R(4)|=R(5);
  R(0)=R(4);
  R(0)<<=16;
  { R(0)|=R(4); return; }
}
void f_8c03994a(SH4Ctx *c) {
  R(2)=0x8c0c54e4u;
  R(3)=0x8c0fa894u;
  R(7)=LD32(R(2));
  R(5)=LD32(R(3));
  R(0)=R(7);
  R(0)<<=2;
  R(4)=LD32(R(5)+R(0));
  R(0)=0x1u;
  R(0)^=R(7);
  R(1)=0x8c0bdbf4u;
  R(0)<<=2;
  R(4)=LD32(R(4)+28);
  R(3)=LD32(R(5)+R(0));
  R(0)=LD32(R(1));
  R(6)=0xa5000000u;
  R(5)=LD32(R(3)+28);
  c->t=(int32_t)R(0)==2;
  R(4)|=R(6);
  { uint32_t k=!c->t; R(5)|=R(6); if(k) goto L8c039978; }
  R(6)=0x22eu;
  {  goto L8c03997a; }
L8c039978:;
  R(6)=0x1e0u;
L8c03997a:;
  R(2)=0x8c0c42a4u;
  R(1)=0x140u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0399c0;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(7)=0x0u; if(k) goto L8c0399d4; }
L8c03998a:;
  R(0)=R(1);
L8c03998c:;
  R(0)-=1;c->t=R(0)==0;
  ST32(R(5),R(7));
  ST32(R(4),R(7));
  R(4)+=0x4u;
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c03998c; }
  R(6)-=1;c->t=R(6)==0;
  if(!c->t) goto L8c03998a;
  {  goto L8c0399d4; }
L8c0399c0:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0399d4;
L8c0399c4:;
  R(7)=R(1);
L8c0399c6:;
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  R(7)-=1;c->t=R(7)==0;
  ST32(R(5),R(2));
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c0399c6; }
  R(6)-=1;c->t=R(6)==0;
  if(!c->t) goto L8c0399c4;
L8c0399d4:;
  {  return; }
}
void f_8c0399d8(SH4Ctx *c) {
  R(2)=0x8c0c54e4u;
  R(3)=0x8c0fa894u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdbf4u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(6)=0xa5000000u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c1598c4u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(2));
  R(5)=LD32(R(3));
  R(0)=R(7);
  R(0)<<=2;
  R(4)=LD32(R(5)+R(0));
  R(0)=0x1u;
  R(0)^=R(7);
  R(0)<<=2;
  R(4)=LD32(R(4)+28);
  R(3)=LD32(R(5)+R(0));
  R(0)=LD32(R(1));
  R(4)|=R(6);
  R(5)=LD32(R(3)+28);
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(5)|=R(6); if(k) goto L8c039a40; }
  R(6)=0x81dbcu;
  {  goto L8c039a42; }
L8c039a40:;
  R(6)=0x737bcu;
L8c039a42:;
  R(5)+=R(6);
  R(10)=0x320u;
  R(4)+=R(6);
  R(6)=0x0u;
  R(8)=0x1eu;
  R(9)=R(6);
L8c039a4e:;
  R(14)=0x1du;
  R(7)=0xf0u;
  R(14)-=R(9);
  R(3)=R(14);
  R(3)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
L8c039a5c:;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(0)=(uint32_t)v;}
  R(3)=R(0)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c039a98;
  R(12)=R(0)&0xFF;
  R(12)-=R(14);
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c039a6e;
  R(12)=R(6);
L8c039a6e:;
  R(2)=R(12);
  R(1)=R(12);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(2)<<=8;
  R(2)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(2)>>31;R(2)<<=1;
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(0)>>=2;
  R(2)|=R(1);
  R(12)=R(2);
  c->t=R(0)&1;R(0)>>=1;
  R(12)|=R(0);
  ST16(R(5),R(12));
  ST16(R(4),R(12));
L8c039a98:;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(0)=(uint32_t)v;}
  R(5)+=0x2u;
  R(4)+=0x2u;
  R(3)=R(0)&0xFF;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(7)+=0xffffffffu; if(k) goto L8c039ada; }
  R(12)=R(0)&0xFF;
  R(12)-=R(14);
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c039ab0;
  R(12)=R(6);
L8c039ab0:;
  R(2)=R(12);
  R(1)=R(12);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(2)<<=8;
  R(2)<<=2;
  R(0)=R(0)&0xFF;
  c->t=R(2)>>31;R(2)<<=1;
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(0)>>=2;
  R(2)|=R(1);
  R(12)=R(2);
  c->t=R(0)&1;R(0)>>=1;
  R(12)|=R(0);
  ST16(R(5),R(12));
  ST16(R(4),R(12));
L8c039ada:;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(12)=(uint32_t)v;}
  R(5)+=0x2u;
  R(4)+=0x2u;
  R(0)=R(12)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(7)+=0xffffffffu; if(k) goto L8c039b1c; }
  R(12)=R(0);
  R(12)-=R(14);
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c039af2;
  R(12)=R(6);
L8c039af2:;
  R(3)=R(12);
  R(1)=R(12);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  R(3)<<=8;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  R(3)|=R(1);
  R(12)=R(3);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  R(12)|=R(0);
  ST16(R(5),R(12));
  ST16(R(4),R(12));
L8c039b1c:;
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(12)=(uint32_t)v;}
  R(5)+=0x2u;
  R(4)+=0x2u;
  R(0)=R(12)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(7)+=0xffffffffu; if(k) goto L8c039b5e; }
  R(12)=R(0);
  R(12)-=R(14);
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c039b34;
  R(12)=R(6);
L8c039b34:;
  R(3)=R(12);
  R(1)=R(12);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  R(3)<<=8;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  R(3)|=R(1);
  R(12)=R(3);
  c->t=R(0)&1;R(0)=(uint32_t)((int32_t)R(0)>>1);
  R(12)|=R(0);
  ST16(R(5),R(12));
  ST16(R(4),R(12));
L8c039b5e:;
  R(7)-=1;c->t=R(7)==0;
  R(4)+=0x2u;
  { uint32_t k=c->t; R(5)+=0x2u; if(k) goto L8c039b6a; }
  {  goto L8c039a5c; }
L8c039b6a:;
  R(9)+=0x1u;
  c->t=(int32_t)R(9)>=(int32_t)R(8);
  R(4)+=R(10);
  { uint32_t k=c->t; R(5)+=R(10); if(k) goto L8c039b78; }
  {  goto L8c039a4e; }
L8c039b78:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c039bc0(SH4Ctx *c) {
  R(3)=0x8c0c54dcu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c039bd4;
  {  goto L8c039cdc; }
L8c039bd4:;
  R(1)=0x8c0c54e0u;
  R(0)=LD32(R(1));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c039be2; }
  {  goto L8c039cdc; }
L8c039be2:;
  R(2)=0x8c0c54e4u;
  R(3)=0x8c0fa894u;
  R(6)=LD32(R(2));
  R(7)=LD32(R(3));
  R(0)=R(6);
  R(0)<<=2;
  R(4)=LD32(R(7)+R(0));
  R(0)=0x1u;
  R(0)^=R(6);
  R(5)=0xa5000000u;
  R(0)<<=2;
  R(4)=LD32(R(4)+28);
  R(3)=LD32(R(7)+R(0));
  R(4)|=R(5);
  R(1)=LD32(R(3)+28);
  R(3)=0x8c0bdbf4u;
  R(5)|=R(1);
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(7)=R(14); if(k) goto L8c039c12; }
  R(11)=0x117u;
  {  goto L8c039c14; }
L8c039c12:;
  R(11)=0xf0u;
L8c039c14:;
  R(6)=0x500u;
  c->t=(R(11)&R(11))==0;
  R(10)=0x140u;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c039c48; }
L8c039c1e:;
  R(1)=R(10);
L8c039c20:;
  R(0)=(int32_t)(int8_t)LD8(R(7));
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(13);
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c039c38; }
  R(3)=R(6);
  R(0)=R(6);
  R(3)+=R(5);
  ST32(R(4)+R(0),R(14));
  ST32(R(4),R(14));
  ST32(R(3),R(14));
  ST32(R(5),R(14));
L8c039c38:;
  R(1)-=1;c->t=R(1)==0;
  R(4)+=0x4u;
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c039c20; }
  R(11)-=1;c->t=R(11)==0;
  R(4)+=R(6);
  { uint32_t k=!c->t; R(5)+=R(6); if(k) goto L8c039c1e; }
L8c039c48:;
  R(2)=0x8c0bdbf4u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c039cd2;
  R(1)=R(10);
  R(10)=0xffu;
  R(11)=0xffffffffu;
L8c039c56:;
  R(6)=(int32_t)(int8_t)LD8(R(7));
  R(6)=R(6)&0xFF;
  c->t=R(6)==R(10);
  if(!c->t) goto L8c039cc0;
  ST32(R(4),R(11));
  { ST32(R(5),R(11)); goto L8c039cc8; }
L8c039cc0:;
  c->t=R(6)==R(13);
  if(!c->t) goto L8c039cc8;
  ST32(R(4),R(14));
  ST32(R(5),R(14));
L8c039cc8:;
  R(1)-=1;c->t=R(1)==0;
  R(4)+=0x4u;
  R(7)+=0x1u;
  { uint32_t k=!c->t; R(5)+=0x4u; if(k) goto L8c039c56; }
L8c039cd2:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0399d8(c); return; } }
L8c039cdc:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c039ce6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c039cecu;  f_8c039bc0(c); }
  R(4)=0x8c0c54e0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=LD32(R(4));
  R(2)+=0xffffffffu;
  { ST32(R(4),R(2)); return; }
}
void f_8c039cf8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c039cfeu;  f_8c039640(c); }
  R(3)=0x8c0c54e8u;
  R(1)=0x0u;
  ST8(R(3),R(1));
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c03994a(c); return; } }
}
void f_8c039d08(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c039d0eu;  f_8c039bc0(c); }
  R(4)=0x8c0c54e0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=LD32(R(4));
  R(2)+=0xffffffffu;
  { ST32(R(4),R(2)); return; }
}
void f_8c039e00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(6);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c01297cu;
  { c->pr=0x8c039e18u; R(14)=R(7); f_8c01297c(c); }
  R(3)=0x7ffu;
  R(1)=0xfffff800u;
  R(0)=R(3);
  R(0)+=0x39u;
  R(2)=LD32(R(11)+R(0));
  R(2)+=R(3);
  R(2)&=R(1);
  ST32(R(14),R(2));
  R(12)=LD32(R(15)+28);
  R(2)=LD32(R(15)+40);
  R(12)<<=2;
  R(12)<<=2;
  c->t=R(12)>>31;R(12)<<=1;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c039e52;
  R(8)=LD32(R(15)+36);
  R(10)=0x8c0d06a2u;
  { c->pr=0x8c039e3eu; R(4)=R(12); f_8c0d06a2(c); }
  ST32(R(8),R(0));
  R(4)=LD32(R(14));
  { uint32_t tg=R(10); c->pr=0x8c039e46u; R(4)+=0x1fu; sh4_call(c,tg); }
  R(4)=0x40000u;
  ST32(R(13),R(0));
  { uint32_t tg=R(10); c->pr=0x8c039e4eu; R(8)=LD32(R(15)+32); sh4_call(c,tg); }
  { ST32(R(8),R(0)); goto L8c039f1a; }
L8c039e52:;
  R(10)=0x8c0c758cu;
  R(2)=LD32(R(15)+36);
  R(0)=LD32(R(10));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(8)=R(2); if(k) goto L8c039e6c; }
  R(2)=0x8c064e90u;
  R(5)=0x8c0b97c4u;
  R(6)=0x9cu;
  { c->pr=0x8c039e68u; R(4)=R(12); f_8c064e90(c); }
  {  goto L8c039e76; }
L8c039e6c:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0b97c4u;
  R(6)=0x9cu;
  { c->pr=0x8c039e76u; R(4)=R(12); f_8c0199c4(c); }
L8c039e76:;
  ST32(R(8),R(0));
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c039ee0;
  R(4)=LD32(R(14));
  R(3)=0x8c064e90u;
  R(6)=0x9eu;
  R(5)=0x8c0b97c4u;
  { c->pr=0x8c039e8au; R(4)+=0x1fu; f_8c064e90(c); }
  {  goto L8c039eec; }
L8c039ee0:;
  R(4)=LD32(R(14));
  R(2)=0x8c0199c4u;
  R(6)=0x9eu;
  R(5)=0x8c0b97c4u;
  { c->pr=0x8c039eecu; R(4)+=0x1fu; f_8c0199c4(c); }
L8c039eec:;
  R(3)=R(0);
  ST32(R(13),R(0));
  R(1)=LD32(R(10));
  R(2)=LD32(R(15)+32);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(8)=R(2); if(k) goto L8c039f0a; }
  R(4)=0x40000u;
  R(3)=0x8c064e90u;
  R(6)=0xa0u;
  R(5)=0x8c0b97c4u;
  { c->pr=0x8c039f06u;  f_8c064e90(c); }
  {  goto L8c039f16; }
L8c039f0a:;
  R(4)=0x40000u;
  R(2)=0x8c0199c4u;
  R(6)=0xa0u;
  R(5)=0x8c0b97c4u;
  { c->pr=0x8c039f16u;  f_8c0199c4(c); }
L8c039f16:;
  ST32(R(8),R(0));
  R(3)=R(0);
L8c039f1a:;
  R(0)=LD32(R(13));
  R(0)+=0x20u;
  c->t=(R(0)&0x1f)==0;
  { uint32_t k=c->t; R(5)=LD32(R(14)); if(k) goto L8c039f2e; }
  R(6)=LD32(R(13));
  R(3)=0xffffffe0u;
  R(6)+=0x20u;
  { R(6)&=R(3); goto L8c039f30; }
L8c039f2e:;
  R(6)=LD32(R(13));
L8c039f30:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(11);
  R(3)=0x8c012b02u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c012b02(c); return; } }
}
void f_8c039f80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  ST32(R(15)+20,R(7));
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  R(5)=0x1fu;
  ST32(R(15)+4,R(6));
  R(4)=LD32(R(15)+20);
  R(4)+=0x20u;
  R(3)=R(4);
  c->t=(R(3)&R(5))==0;
  { uint32_t k=c->t; R(6)=0xffffffe0u; if(k) goto L8c039fae; }
  R(14)=R(4);
  { R(14)&=R(6); goto L8c039fb0; }
L8c039fae:;
  R(14)=LD32(R(15)+20);
L8c039fb0:;
  R(3)=LD32(R(15)+56);
  R(3)+=0x20u;
  c->t=(R(3)&R(5))==0;
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c039fc4; }
  R(8)=LD32(R(15)+56);
  R(8)+=0x3fu;
  R(8)&=R(6);
  { R(8)+=0xffffffe0u; goto L8c039fc6; }
L8c039fc4:;
  R(8)=LD32(R(15)+56);
L8c039fc6:;
  R(0)=0x830u;
  R(11)=R(10);
  R(3)=0x8c0ceca0u;
  R(4)=LD32(R(15));
  { c->pr=0x8c039fd2u; R(4)=LD32(R(4)+R(0)); f_8c0ceca0(c); }
  R(3)=0x8c012accu;
  { c->pr=0x8c039fd8u; R(4)=LD32(R(15)); f_8c012acc(c); }
  R(14)+=0x4u;
  R(5)=R(14);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(2)=R(2)&0xFF;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(2)<<=8;
  R(4)|=R(2);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(3)=R(3)&0xFF;
  R(2)=R(2)&0xFF;
  R(2)<<=16;
  R(3)<<=16;
  R(2)<<=8;
  R(4)|=R(3);
  R(4)|=R(2);
  R(2)=R(11);
  R(5)+=R(4);
  ST32(R(15),R(5));
  R(3)=LD32(R(15)+4);
  c->t=R(2)>=R(3);
  { uint32_t k=!c->t; R(13)=R(8); if(k) goto L8c03a00c; }
  {  goto L8c03a106; }
L8c03a00c:;
  R(3)=LD32(R(15));
  c->t=R(14)>=R(3);
  if(c->t) goto L8c03a0c0;
L8c03a012:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c03a080;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;}
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03a040;
  R(4)=R(4)&0xFF;
  R(4)>>=2;
  R(2)=0x0u;
  R(6)=R(4)&0xFF;
  c->t=R(2)>=R(6);
  { uint32_t k=c->t; R(5)=R(10); if(k) goto L8c03a0ba; }
L8c03a030:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(1)=(uint32_t)v;}
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  ST8(R(13),R(1));
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c03a030; }
  {  goto L8c03a0ba; }
L8c03a040:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  ST8(R(13),R(3));
  R(13)+=0x1u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  ST8(R(13),R(2));
  R(13)+=0x1u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  ST8(R(13),R(3));
  R(13)+=0x1u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  ST8(R(13),R(2));
  { R(13)+=0x1u; goto L8c03a0ba; }
L8c03a080:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;}
  R(5)=R(13);
  R(12)=0xff000000u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(9)=0xfffffeu;
  R(2)=R(2)&0xFF;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(2)<<=8;
  R(4)|=R(2);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(3)=R(3)&0xFF;
  R(2)=R(2)&0xFF;
  R(2)<<=16;
  R(3)<<=16;
  R(2)<<=8;
  R(4)|=R(3);
  R(4)|=R(2);
  R(2)=0x8c0685b4u;
  R(12)&=R(4);
  R(12)>>=16;
  R(9)&=R(4);
  c->t=R(9)&1;R(9)>>=1;
  R(12)>>=8;
  R(6)=R(12);
  R(5)-=R(9);
  { c->pr=0x8c03a0b8u; R(4)=R(13); f_8c0685b4(c); }
  R(13)+=R(12);
L8c03a0ba:;
  R(3)=LD32(R(15));
  c->t=R(14)>=R(3);
  if(!c->t) goto L8c03a012;
L8c03a0c0:;
  R(6)=R(11);
  R(5)=R(11);
  R(0)=LD32(R(15)+8);
  R(6)<<=2;
  R(5)<<=2;
  R(3)=LD32(R(15)+60);
  R(6)<<=2;
  R(5)=LD32(R(5)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  { c->pr=0x8c03a0d8u; R(4)=R(8); f_8c03a502(c); }
  R(5)=R(14);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;}
  R(11)+=0x1u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(3)=R(3)&0xFF;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(3)<<=8;
  R(4)|=R(3);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(2)=R(2)&0xFF;
  R(3)=R(3)&0xFF;
  R(2)<<=16;
  R(3)<<=16;
  R(3)<<=8;
  R(4)|=R(2);
  R(4)|=R(3);
  R(5)+=R(4);
  ST32(R(15),R(5));
  R(3)=LD32(R(15)+4);
  c->t=R(11)>=R(3);
  { uint32_t k=!c->t; R(13)=R(8); if(k) goto L8c03a00c; }
L8c03a106:;
  R(0)=0x48u;
  R(1)=LD32(R(15)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c03a160;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c03a114u; R(4)=LD32(R(15)+20); f_8c0d0770(c); }
  R(2)=0x8c0c5530u;
  R(3)=0x8c0d0770u;
  ST32(R(2),R(10));
  { c->pr=0x8c03a11eu; R(4)=LD32(R(15)+56); f_8c0d0770(c); }
  {  goto L8c03a17c; }
L8c03a160:;
  R(3)=0x8c064eb8u;
  R(4)=R(15);
  R(5)=0x8c0b97c4u;
  R(6)=0x18au;
  { c->pr=0x8c03a16cu; R(4)+=0x14u; f_8c064eb8(c); }
  R(2)=0x8c0c5530u;
  R(4)=R(15);
  R(5)=0x8c0b97c4u;
  R(3)=0x8c064eb8u;
  R(6)=0x190u;
  ST32(R(2),R(10));
  { c->pr=0x8c03a17cu; R(4)+=0x38u; f_8c064eb8(c); }
L8c03a17c:;
  R(2)=LD32(R(15)+4);
  c->t=R(11)==R(2);
  if(!c->t) goto L8c03a1aa;
  R(2)=0x8c0e0a40u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c03a18eu; R(4)+=0xcu; f_8c0e0a40(c); }
  R(2)=0x8c0c5534u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c03a1a6;
  R(3)=0x8c0c55f0u;
  R(0)=0x8cu;
  R(5)=LD32(R(3));
  R(4)=LD32(R(3));
  R(5)=LD32(R(5)+R(0));
  R(0)+=0x4u;
  { c->pr=0x8c03a1a6u; R(4)=LD32(R(4)+R(0)); f_8c03a8e0(c); }
L8c03a1a6:;
  { R(0)=0x1u; goto L8c03a1ac; }
L8c03a1aa:;
  R(0)=0x0u;
L8c03a1ac:;
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
void f_8c03a1c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff7a0u;
  R(15)+=R(0);
  R(9)=R(5);
  R(5)=R(15);
  R(3)=0x8c01297cu;
  R(5)+=0x20u;
  ST32(R(15)+12,R(4));
  ST32(R(15)+8,R(6));
  ST32(R(15)+16,R(7));
  { c->pr=0x8c03a1e6u; R(4)=LD32(R(15)+8); f_8c01297c(c); }
  R(13)=0x8c0c758cu;
  R(0)=0x858u;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=LD32(R(15)+R(0)); if(k) goto L8c03a260; }
  R(4)=R(9);
  R(4)<<=2;
  R(3)=0x8c064e90u;
  R(4)<<=2;
  R(5)=0x8c0b97c4u;
  R(6)=0x1cfu;
  { c->pr=0x8c03a202u; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c03a270; }
L8c03a260:;
  R(4)=R(9);
  R(4)<<=2;
  R(2)=0x8c0199c4u;
  R(4)<<=2;
  R(5)=0x8c0b97c4u;
  R(6)=0x1cfu;
  { c->pr=0x8c03a270u; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c03a270:;
  R(3)=R(0);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03a28e;
  R(2)=0x8c0d06a2u;
  R(4)=R(14);
  { c->pr=0x8c03a282u; R(4)+=0x1fu; f_8c0d06a2(c); }
  R(3)=0x8c0d06a2u;
  R(4)=0x40000u;
  { c->pr=0x8c03a28au; ST32(R(15)+4,R(0)); f_8c0d06a2(c); }
  { ST32(R(15),R(0)); goto L8c03a310; }
L8c03a28e:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03a2a4;
  R(2)=0x8c064e90u;
  R(4)=R(14);
  R(5)=0x8c0b97c4u;
  R(6)=0x1dau;
  { c->pr=0x8c03a2a0u; R(4)+=0x1fu; f_8c064e90(c); }
  {  goto L8c03a2b0; }
L8c03a2a4:;
  R(1)=0x8c0199c4u;
  R(4)=R(14);
  R(5)=0x8c0b97c4u;
  R(6)=0x1dau;
  { c->pr=0x8c03a2b0u; R(4)+=0x1fu; f_8c0199c4(c); }
L8c03a2b0:;
  R(2)=R(0);
  ST32(R(15)+4,R(2));
  R(1)=LD32(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c03a300;
  R(4)=0x40000u;
  R(3)=0x8c064e90u;
  R(6)=0x1dbu;
  R(5)=0x8c0b97c4u;
  { c->pr=0x8c03a2c6u;  f_8c064e90(c); }
  {  goto L8c03a30c; }
L8c03a300:;
  R(4)=0x40000u;
  R(1)=0x8c0199c4u;
  R(6)=0x1dbu;
  R(5)=0x8c0b97c4u;
  { c->pr=0x8c03a30cu;  f_8c0199c4(c); }
L8c03a30c:;
  R(3)=R(0);
  ST32(R(15),R(3));
L8c03a310:;
  R(4)=LD32(R(15)+4);
  R(6)=0x1fu;
  R(4)+=0x20u;
  R(3)=R(4);
  c->t=(R(3)&R(6))==0;
  { uint32_t k=c->t; R(5)=0xffffffe0u; if(k) goto L8c03a324; }
  R(12)=R(4);
  { R(12)&=R(5); goto L8c03a326; }
L8c03a324:;
  R(12)=LD32(R(15)+4);
L8c03a326:;
  R(4)=LD32(R(15));
  R(4)+=0x20u;
  c->t=(R(6)&R(4))==0;
  { uint32_t k=c->t; R(6)=R(12); if(k) goto L8c03a360; }
  R(8)=R(4);
  { R(8)&=R(5); goto L8c03a362; }
L8c03a360:;
  R(8)=LD32(R(15));
L8c03a362:;
  R(3)=0x8c012b78u;
  R(4)=R(15);
  R(5)=R(14);
  { c->pr=0x8c03a36cu; R(4)+=0x20u; f_8c012b78(c); }
  R(2)=0x8c012accu;
  R(4)=R(15);
  { c->pr=0x8c03a374u; R(4)+=0x20u; f_8c012acc(c); }
  R(14)=R(12);
  R(14)+=0x4u;
  R(5)=R(14);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;}
  R(11)=0x0u;
  R(13)=R(8);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(3)=R(3)&0xFF;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(3)<<=8;
  R(4)|=R(3);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(2)=R(2)&0xFF;
  R(3)=R(3)&0xFF;
  R(3)<<=16;
  R(2)<<=16;
  R(3)<<=8;
  R(4)|=R(2);
  R(4)|=R(3);
  R(3)=R(11);
  c->t=R(3)>=R(9);
  R(5)+=R(4);
  { uint32_t k=c->t; ST32(R(15)+8,R(5)); if(k) goto L8c03a478; }
L8c03a3a6:;
  R(1)=LD32(R(15)+8);
  c->t=R(14)>=R(1);
  if(c->t) goto L8c03a434;
L8c03a3ac:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c03a3f4;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;}
  R(2)=R(4)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03a3da;
  R(4)=R(4)&0xFF;
  R(5)=0x0u;
  R(4)>>=2;
  R(2)=R(5);
  R(6)=R(4)&0xFF;
  c->t=R(2)>=R(6);
  if(c->t) goto L8c03a42e;
L8c03a3ca:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(1)=(uint32_t)v;}
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  ST8(R(13),R(1));
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c03a3ca; }
  {  goto L8c03a42e; }
L8c03a3da:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  ST8(R(13),R(3));
  R(13)+=0x1u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  ST8(R(13),R(2));
  R(13)+=0x1u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  ST8(R(13),R(3));
  R(13)+=0x1u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  ST8(R(13),R(2));
  { R(13)+=0x1u; goto L8c03a42e; }
L8c03a3f4:;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;}
  R(5)=R(13);
  R(12)=0xff000000u;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  R(10)=0xfffffeu;
  R(2)=R(2)&0xFF;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(2)<<=8;
  R(4)|=R(2);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(3)=R(3)&0xFF;
  R(2)=R(2)&0xFF;
  R(2)<<=16;
  R(3)<<=16;
  R(2)<<=8;
  R(4)|=R(3);
  R(4)|=R(2);
  R(2)=0x8c0685b4u;
  R(12)&=R(4);
  R(12)>>=16;
  R(10)&=R(4);
  c->t=R(10)&1;R(10)>>=1;
  R(12)>>=8;
  R(6)=R(12);
  R(5)-=R(10);
  { c->pr=0x8c03a42cu; R(4)=R(13); f_8c0685b4(c); }
  R(13)+=R(12);
L8c03a42e:;
  R(3)=LD32(R(15)+8);
  c->t=R(14)>=R(3);
  if(!c->t) goto L8c03a3ac;
L8c03a434:;
  R(6)=R(11);
  R(5)=R(11);
  R(0)=LD32(R(15)+12);
  R(6)<<=2;
  R(5)<<=2;
  R(3)=LD32(R(15)+20);
  R(6)<<=2;
  R(5)=LD32(R(5)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  { c->pr=0x8c03a44cu; R(4)=R(8); f_8c03a502(c); }
  R(5)=R(14);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;}
  R(11)+=0x1u;
  R(13)=R(8);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(4)=R(4)&0xFF;
  c->t=R(11)>=R(9);
  R(3)=R(3)&0xFF;
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(2)=(uint32_t)v;}
  R(3)<<=8;
  R(4)|=R(3);
  {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(3)=(uint32_t)v;}
  R(2)=R(2)&0xFF;
  R(3)=R(3)&0xFF;
  R(3)<<=16;
  R(2)<<=16;
  R(3)<<=8;
  R(4)|=R(2);
  R(4)|=R(3);
  R(5)+=R(4);
  { uint32_t k=!c->t; ST32(R(15)+8,R(5)); if(k) goto L8c03a3a6; }
L8c03a478:;
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03a4c0;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c03a484u; R(4)=LD32(R(15)+4); f_8c0d0770(c); }
  R(3)=0x8c0d0770u;
  { c->pr=0x8c03a48au; R(4)=LD32(R(15)); f_8c0d0770(c); }
  {  goto L8c03a4d6; }
L8c03a4c0:;
  R(3)=0x8c064eb8u;
  R(4)=R(15);
  R(5)=0x8c0b97c4u;
  R(6)=0x281u;
  { c->pr=0x8c03a4ccu; R(4)+=0x4u; f_8c064eb8(c); }
  R(2)=0x8c064eb8u;
  R(5)=0x8c0b97c4u;
  R(6)=0x286u;
  { c->pr=0x8c03a4d6u; R(4)=R(15); f_8c064eb8(c); }
L8c03a4d6:;
  c->t=R(11)==R(9);
  if(!c->t) goto L8c03a4ea;
  R(2)=0x8c0e0a40u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c03a4e6u; R(4)+=0x18u; f_8c0e0a40(c); }
  { R(0)=0x1u; goto L8c03a4ec; }
L8c03a4ea:;
  R(0)=0x0u;
L8c03a4ec:;
  R(1)=0x860u;
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
void f_8c03a502(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(5);
  R(3)=0x58494247u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(6));
  R(5)=LD32(R(15));
  R(2)=LD32(R(5));
  c->t=R(2)==R(3);
  if(c->t) goto L8c03a540;
  { R(4)=0x0u; goto L8c03a542; }
L8c03a540:;
  R(4)=0x4u;
L8c03a542:;
  R(7)=R(4);
  R(7)+=0x2u;
  R(0)=R(7);
  R(0)<<=2;
  R(6)=LD32(R(5)+R(0));
  R(0)=R(4);
  R(0)+=0x3u;
  R(0)<<=2;
  R(12)=LD32(R(5)+R(0));
  R(0)=R(4);
  R(0)+=0x1u;
  R(0)<<=2;
  R(14)=LD32(R(5)+R(0));
  R(7)<<=2;
  ST32(R(13)+20,R(6));
  c->t=(R(4)&R(4))==0;
  R(14)+=R(7);
  R(5)=R(14);
  { c->pr=0x8c03a56au; R(4)=R(13); f_8c03a680(c); }
  R(2)=LD32(R(15)+4);
  R(6)=R(12);
  R(6)>>=16;
  R(4)=R(2);
  ST32(R(13),R(2));
  R(2)=0x8c0d6a00u;
  R(6)=R(6)&0xFFFF;
  R(7)=LD32(R(13)+20);
  { c->pr=0x8c03a57eu; R(5)=R(12)&0xFFFF; f_8c0d6a00(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c03a58e;
  R(5)=LD32(R(15));
  R(3)=0x8c0d6ac0u;
  R(5)+=0x20u;
  { c->pr=0x8c03a58eu; R(4)=LD32(R(13)); f_8c0d6ac0(c); }
L8c03a58e:;
  R(3)=0x1fu;
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c03a59c;
  R(1)=0xffffffe0u;
  R(1)&=R(14);
  R(14)=R(1);
  R(14)+=0x20u;
L8c03a59c:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03a5aa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=R(13);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0e09e0u;
  c->t=R(3)>=R(12);
  { uint32_t k=c->t; R(14)+=R(4); if(k) goto L8c03a5d0; }
L8c03a5c4:;
  {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;}
  { uint32_t tg=R(11); c->pr=0x8c03a5cau; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(13)+=0x1u;
  c->t=R(13)>=R(12);
  if(!c->t) goto L8c03a5c4;
L8c03a5d0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03a5dc(SH4Ctx *c) {
  R(6)=0xc0000000u;
  R(3)=R(4);
  R(3)&=R(6);
  c->t=R(3)==R(6);
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c03a5ec; }
  { R(5)=0x2u; goto L8c03a5fe; }
L8c03a5ec:;
  R(2)=0x40000000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c03a5f6;
  { R(5)=0x20u; goto L8c03a5fe; }
L8c03a5f6:;
  R(3)=0x80000000u;
  c->t=(R(3)&R(4))==0;
  if(c->t) goto L8c03a5fe;
  R(5)=0x8u;
L8c03a5fe:;
  R(6)=0x30000000u;
  R(3)=R(4);
  R(3)&=R(6);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c03a60c;
  { R(5)=0x1u; goto L8c03a622; }
L8c03a60c:;
  R(2)=0x10000000u;
  c->t=(R(2)&R(4))==0;
  if(c->t) goto L8c03a618;
  R(1)=0x10u;
  { R(5)|=R(1); goto L8c03a622; }
L8c03a618:;
  R(2)=0x20000000u;
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c03a622;
  R(1)=0x4u;
  R(5)|=R(1);
L8c03a622:;
  { R(0)=R(5); return; }
}
void f_8c03a680(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  ST32(R(14)+4,R(3));
  { c->pr=0x8c03a68eu; R(4)=LD32(R(14)+20); f_8c03a5dc(c); }
  R(4)=0x8000000u;
  R(1)=0x18u;
  R(1)+=R(14);
  ST8(R(1),R(0));
  R(3)=LD32(R(14)+20);
  R(3)&=R(4);
  c->t=R(3)==R(4);
  { uint32_t k=!c->t; R(5)=0x12u; if(k) goto L8c03a6ae; }
  R(2)=LD32(R(14)+20);
  R(3)=0xf700ffffu;
  R(2)&=R(3);
  ST32(R(14)+20,R(2));
  R(0)=LD32(R(14)+4);
  R(0)|=0x40u;
  ST32(R(14)+4,R(0));
L8c03a6ae:;
  R(3)=LD32(R(14)+20);
  R(4)=0xf000000u;
  R(2)=0x1000000u;
  R(3)&=R(4);
  c->t=R(3)==R(2);
  if(c->t) goto L8c03a6f2;
  R(0)=LD32(R(14)+20);
  R(3)=0x2000000u;
  R(0)&=R(4);
  c->t=R(0)==R(3);
  if(c->t) goto L8c03a6d0;
  R(0)=LD32(R(14)+20);
  R(1)=0x3000000u;
  R(0)&=R(4);
  c->t=R(0)==R(1);
  { uint32_t k=!c->t; R(5)=0x8u; if(k) goto L8c03a6d6; }
L8c03a6d0:;
  R(0)=LD32(R(14)+4);
  { R(0)|=R(5); goto L8c03a708; }
L8c03a6d6:;
  R(2)=LD32(R(14)+20);
  R(0)=0x4000000u;
  R(2)&=R(4);
  c->t=R(2)==R(0);
  if(!c->t) goto L8c03a6e8;
  R(2)=LD32(R(14)+4);
  R(2)|=R(5);
  { ST32(R(14)+4,R(2)); goto L8c03a774; }
L8c03a6e8:;
  R(3)=LD32(R(14)+20);
  R(2)=0x5000000u;
  R(3)&=R(4);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c03a6fa;
L8c03a6f2:;
  R(1)=LD32(R(14)+4);
  R(1)|=R(5);
  { ST32(R(14)+4,R(1)); goto L8c03a774; }
L8c03a6fa:;
  R(3)=LD32(R(14)+20);
  R(1)=0x6000000u;
  R(3)&=R(4);
  c->t=R(3)==R(1);
  if(!c->t) goto L8c03a760;
  R(0)=LD32(R(14)+4);
  R(0)|=0x20u;
L8c03a708:;
  { ST32(R(14)+4,R(0)); goto L8c03a774; }
L8c03a760:;
  R(3)=LD32(R(14)+20);
  R(0)=0x7000000u;
  R(4)&=R(3);
  c->t=R(4)==R(0);
  if(!c->t) goto L8c03a774;
  R(2)=LD32(R(14)+4);
  R(3)=0x200u;
  R(2)|=R(5);
  R(2)|=R(3);
  ST32(R(14)+4,R(2));
L8c03a774:;
  R(1)=LD32(R(14)+20);
  R(3)=0xffffu;
  R(1)&=R(3);
  ST32(R(14)+20,R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03a782(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff66cu;
  R(15)+=R(0);
  R(3)=0x8c0b97e0u;
  R(2)=0x8c0b97d4u;
  ST32(R(15)+12,R(4));
  ST32(R(15)+8,R(5));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c03a79eu; R(4)+=0x5cu; f_8c06874c(c); }
  R(15)+=0x8u;
  R(6)=0x154u;
  R(5)=R(15);
  R(3)=0x8c0128beu;
  R(5)+=0x54u;
  R(6)+=R(15);
  { c->pr=0x8c03a7aeu; R(4)=LD32(R(15)+12); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03a7e8;
  R(4)=0x154u;
  R(6)=R(15);
  R(14)=0x8c012b78u;
  R(5)=0x4u;
  R(6)+=0x4u;
  { c->pr=0x8c03a7c0u; R(4)+=R(15); f_8c012b78(c); }
  R(4)=0x154u;
  R(5)=0x4u;
  R(6)=R(15);
  { uint32_t tg=R(14); c->pr=0x8c03a7cau; R(4)+=R(15); sh4_call(c,tg); }
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15));
  R(4)=0x154u;
  c->macl=R(2)*R(3);
  R(6)=0x8c15be4cu;
  R(5)=c->macl;
  c->t=R(5)>>31;R(5)<<=1;
  { uint32_t tg=R(14); c->pr=0x8c03a7dcu; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0x8c012accu;
  R(4)=0x154u;
  { c->pr=0x8c03a7e4u; R(4)+=R(15); f_8c012acc(c); }
  {  goto L8c03a840; }
L8c03a7e8:;
  R(1)=0x994u;
  R(0)=0x0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c03a840:;
  R(3)=LD32(R(15)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c03a890;
  R(3)=0x8c0dfe80u;
  R(4)=R(15);
  { c->pr=0x8c03a84eu; R(4)+=0x10u; f_8c0dfe80(c); }
  R(14)=0x8c0fa88cu;
  R(0)=LD32(R(15)+44);
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+28);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c03a874;
  R(2)=0x8c0385d8u;
  { c->pr=0x8c03a862u;  f_8c0385d8(c); }
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15));
  R(4)=LD32(R(14)+8);
  c->macl=R(2)*R(3);
  R(5)=0x8c15be4cu;
  R(6)=c->macl;
  c->t=R(6)>>31;R(6)<<=1;
  { R(4)=LD32(R(4)); goto L8c03a88a; }
L8c03a874:;
  R(3)=0x8c0385d8u;
  { c->pr=0x8c03a87au;  f_8c0385d8(c); }
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15));
  R(5)=0x8c15be4cu;
  c->macl=R(2)*R(3);
  R(3)=LD32(R(14)+8);
  R(4)=LD32(R(3)+4);
  R(6)=c->macl;
  c->t=R(6)>>31;R(6)<<=1;
L8c03a88a:;
  R(3)=0x8c0dbda0u;
  { c->pr=0x8c03a890u; R(4)=LD32(R(4)+28); f_8c0dbda0(c); }
L8c03a890:;
  R(0)=0x1u;
  R(1)=0x994u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03a89c(SH4Ctx *c) {
  R(4)=0x8c0c5534u;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)^=0x1u;
  { ST8(R(4),R(0)); return; }
}
void f_8c03a8e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=R(13);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  c->t=R(3)>=R(11);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c05e964u;
  R(12)=R(5);
  { uint32_t k=c->t; R(12)+=0xffffffffu; if(k) goto L8c03a92e; }
L8c03a900:;
  R(5)=R(12);
  { uint32_t tg=R(14); c->pr=0x8c03a906u; R(4)=0x0u; sh4_call(c,tg); }
  R(5)=R(12);
  R(9)=R(0);
  { uint32_t tg=R(14); c->pr=0x8c03a90eu; R(4)=0x0u; sh4_call(c,tg); }
  R(5)=R(0);
  R(6)=R(5);
  R(6)<<=2;
  R(0)=R(9);
  R(6)+=R(10);
  R(3)=LD32(R(6));
  R(0)<<=2;
  R(4)=LD32(R(10)+R(0));
  R(13)+=0x1u;
  R(2)=LD32(R(3));
  c->t=R(13)>=R(11);
  R(7)=LD32(R(4));
  ST32(R(4),R(2));
  R(3)=LD32(R(6));
  { uint32_t k=!c->t; ST32(R(3),R(7)); if(k) goto L8c03a900; }
L8c03a92e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03a960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c03aac0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  c->fr[15]=0x3F800000u;
  fp_arith(c,0,15,15);
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09cff8u;
  fp_ld(c,5,R(0));
  { c->pr=0x8c03a980u; fp_mov(c,4,15); f_8c09cff8(c); }
  R(0)=0x8c03aac8u;
  R(1)=0x8c0c5588u;
  fp_ld(c,3,R(0));
  R(3)=0x8c20b084u;
  fp_arith(c,2,0,3);
  fp_st(c,0,R(3));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c03a9d8; }
  R(0)=0x8c03aadcu;
  R(12)=0x8c068530u;
  fp_ld(c,14,R(0));
  R(14)=R(13);
  R(11)=0x8c20ae7cu;
  R(10)=0x40u;
L8c03a9a0:;
  c->fpul=R(14);
  R(3)=R(14);
  R(3)<<=2;
  R(3)+=R(11);
  fp_float(c,3);
  R(8)=R(3);
  fp_mov(c,4,3);
  { uint32_t tg=R(12); c->pr=0x8c03a9b2u; fp_arith(c,2,4,14); sh4_call(c,tg); }
  R(14)+=0x1u;
  fp_arith(c,2,0,15);
  c->fpul=R(14);
  R(3)=R(14);
  R(3)<<=2;
  R(3)+=R(11);
  fp_float(c,3);
  fp_st(c,0,R(8));
  R(8)=R(3);
  fp_mov(c,4,3);
  { uint32_t tg=R(12); c->pr=0x8c03a9cau; fp_arith(c,2,4,14); sh4_call(c,tg); }
  fp_arith(c,2,0,15);
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  { uint32_t k=!c->t; fp_st(c,0,R(8)); if(k) goto L8c03a9a0; }
  { c->pr=0x8c03a9d8u;  f_8c03ae80(c); }
L8c03a9d8:;
  R(3)=0x8c0c5588u;
  R(0)=0x8c20b080u;
  ST8(R(3),R(13));
  R(3)=0x20u;
  R(4)=0x8c20b0a0u;
  R(2)=0x8c20b08cu;
  R(1)=0x8c20b07cu;
  ST32(R(2),R(13));
  R(2)=0x8c0c557cu;
  ST32(R(1),R(13));
  ST32(R(0),R(3));
  R(0)=0x8c03aaf0u;
  fp_ld(c,3,R(0));
  R(0)=0x8c03aaf4u;
  R(3)=0x8c0c5578u;
  fp_st(c,3,R(4));
  fp_ld(c,3,R(0));
  R(0)=0x4u;
  R(1)=0x8c0c5580u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c03aaf8u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8c03aafcu;
  fp_ld(c,3,R(0));
  R(0)=0x8c03ab04u;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0));
  R(0)=0x8c03ab0cu;
  fp_st(c,3,R(2));
  fp_ld(c,3,R(0));
  R(0)=0x8c03ab14u;
  fp_st(c,3,R(1));
  R(4)=0x8c20b090u;
  R(1)=0x1u;
  fp_ld(c,3,R(0));
  R(0)=0x8u;
  c->fr[4]=0x00000000u;
  c->fr[5]=0x3F800000u;
  R(2)=0x8c20b09cu;
  R(3)=0x8c0c5584u;
  fp_st(c,3,R(3));
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,5,R(0)+R(4));
  R(4)=0x8c20b0c8u;
  fp_st(c,4,R(2));
  fp_st(c,5,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x4u;
  R(4)=0x8c20b0bcu;
  ST32(R(4),R(1));
  ST32(R(4)+4,R(13));
  ST32(R(4)+8,R(13));
  R(4)=0x8c20b0b0u;
  fp_st(c,4,R(4));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x8c03ab30u;
  R(3)=0x8c20ae78u;
  R(2)=0x8c20ae79u;
  R(1)=0x8c20b0e0u;
  fp_ld(c,3,R(0));
  fp_st(c,3,R(1));
  ST8(R(3),R(13));
  ST8(R(2),R(13));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03aa7a(SH4Ctx *c) {
  R(3)=0x8c20ae78u;
  { ST8(R(3),R(4)); return; }
}
void f_8c03aa80(SH4Ctx *c) {
  R(2)=0x8c20ae78u;
  { R(0)=(int32_t)(int8_t)LD8(R(2)); return; }
}
void f_8c03aa86(SH4Ctx *c) {
  R(3)=0x8c20ae79u;
  { ST8(R(3),R(4)); return; }
}
void f_8c03aa8c(SH4Ctx *c) {
  R(2)=0x8c20ae79u;
  { R(0)=(int32_t)(int8_t)LD8(R(2)); return; }
}
void f_8c03aa92(SH4Ctx *c) {
  R(3)=0x8c20ae79u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  { R(0)&=0x1u; return; }
}
void f_8c03aa9a(SH4Ctx *c) {
  R(7)=0x8c20b0bcu;
  ST32(R(7),R(4));
  ST32(R(7)+4,R(5));
  { ST32(R(7)+8,R(6)); return; }
}
void f_8c03ab40(SH4Ctx *c) {
  R(5)=R(4);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05e6eau;
  R(4)=0x8c20b0c8u;
  { R(15)+=0x4u; { f_8c05e6ea(c); return; } }
}
void f_8c03ab4c(SH4Ctx *c) {
  c->fpul=R(4);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c03ab5c; }
  R(3)=0x4f800000u;
  c->fpul=R(3);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c03ab5c:;
  R(4)=0x8c20b0bcu;
  R(0)=0x8c03ad0cu;
  fp_ld(c,2,R(0));
  R(0)=0x4u;
  fp_mov(c,4,3);
  fp_arith(c,2,4,2);
  R(5)=0x8c20b0b0u;
  R(3)=0x8c2cb934u;
  fp_mov(c,0,4);
  fp_st(c,4,R(3));
  R(2)=LD32(R(4));
  fp_ld(c,1,R(5));
  c->fpul=R(2);
  fp_float(c,3);
  fp_fmac(c,1,3);
  fp_st(c,1,R(5));
  R(2)=LD32(R(4)+4);
  fp_ld(c,1,R(0)+R(5));
  c->fpul=R(2);
  fp_float(c,3);
  fp_fmac(c,1,3);
  fp_st(c,1,R(0)+R(5));
  R(0)=0x8u;
  R(2)=LD32(R(4)+8);
  fp_ld(c,1,R(0)+R(5));
  c->fpul=R(2);
  fp_float(c,3);
  fp_fmac(c,1,3);
  { fp_st(c,1,R(0)+R(5)); return; }
}
void f_8c03ab98(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=LD32(c->gbr+60);
  R(6)=R(4);
  R(14)=R(5);
  R(6)<<=2;
  R(14)<<=2;
  R(3)=R(0);
  R(6)<<=2;
  R(5)=0x8c20b11cu;
  R(14)<<=2;
  R(0)=LD32(c->gbr+16);
  R(6)+=R(3);
  R(9)=R(5);
  R(14)+=R(6);
  R(4)=R(6);
  R(6)=0x8c20b128u;
  R(11)=R(5);
  R(5)+=0x8u;
  R(13)=0x8c20b0b0u;
  R(10)=R(6);
  R(8)=R(6);
  R(12)=R(6);
  R(6)=0x8c20ae7cu;
  R(7)=LD32(R(0));
  R(9)+=0x4u;
  c->t=R(4)>=R(14);
  ST32(R(15)+4,R(5));
  R(8)+=0x8u;
  R(10)+=0x4u;
  { uint32_t k=c->t; R(5)=0x3fu; if(k) goto L8c03ac44; }
L8c03abe4:;
  R(0)=0x4u;
  fp_ld(c,2,R(7));
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8u;
  R(3)=0x8c20b084u;
  R(2)=R(15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(7));
  R(1)=0x8c0c558cu;
  fp_ld(c,1,R(1));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(13));
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(3));
  fp_arith(c,0,2,3);
  fp_arith(c,2,1,2);
  fp_st(c,1,R(2));
  R(0)=LD32(R(15));
  fp_ld(c,2,R(11));
  R(0)&=R(5);
  fp_ld(c,0,R(12));
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(6));
  fp_fmac(c,2,3);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  R(0)=LD32(R(15));
  fp_ld(c,2,R(9));
  R(0)&=R(5);
  fp_ld(c,0,R(10));
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(6));
  fp_fmac(c,2,3);
  fp_st(c,2,R(4));
  R(4)+=0x4u;
  R(0)=LD32(R(15));
  fp_ld(c,0,R(8));
  R(0)&=R(5);
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(6));
  R(0)=LD32(R(15)+4);
  fp_ld(c,2,R(0));
  fp_fmac(c,2,3);
  fp_st(c,2,R(4));
  R(4)+=0x8u;
  c->t=R(4)>=R(14);
  { uint32_t k=!c->t; R(7)+=0xcu; if(k) goto L8c03abe4; }
L8c03ac44:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03ac56(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=LD32(c->gbr+92);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c03ac64;
  R(2)=0x8c20b088u;
  { fp_ld(c,4,R(2)); goto L8c03ac68; }
L8c03ac64:;
  R(1)=0x8c20b084u;
  fp_ld(c,4,R(1));
L8c03ac68:;
  R(1)=0x8c20b0b0u;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,2,R(1));
  R(6)=0x3fu;
  R(5)=0x8c20b0c8u;
  R(3)=R(15);
  fp_arith(c,0,2,3);
  fp_ld(c,3,R(0)+R(4));
  R(7)=0x8c20ae7cu;
  fp_arith(c,0,2,3);
  fp_arith(c,0,2,4);
  fp_st(c,2,R(3));
  R(3)=R(15);
  R(0)=LD32(R(15));
  fp_ld(c,5,R(4));
  R(0)&=R(6);
  fp_ld(c,0,R(5));
  R(0)<<=2;
  fp_mov(c,7,5);
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x4u;
  fp_fmac(c,7,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_arith(c,0,3,5);
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x4u;
  fp_arith(c,0,3,2);
  fp_arith(c,0,3,4);
  fp_st(c,3,R(3));
  fp_ld(c,5,R(0)+R(4));
  R(3)=R(15);
  R(0)=LD32(R(15));
  fp_mov(c,6,5);
  R(0)&=R(6);
  fp_ld(c,2,R(4));
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(5));
  R(0)=0x8u;
  fp_fmac(c,6,3);
  fp_ld(c,3,R(0)+R(1));
  fp_arith(c,0,3,5);
  fp_arith(c,0,3,2);
  fp_arith(c,0,3,4);
  fp_st(c,3,R(3));
  R(0)=LD32(R(15));
  R(0)&=R(6);
  R(0)<<=2;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x8u;
  fp_ld(c,0,R(0)+R(5));
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,7,R(4));
  fp_fmac(c,4,3);
  fp_st(c,6,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(4));
  { R(15)+=0x4u; return; }
}
void f_8c03ace8(SH4Ctx *c) {
  R(4)=0x8c20b128u;
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,5,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,6,R(0)+R(4)); return; }
}
void f_8c03ad40(SH4Ctx *c) {
  R(4)=0x8c20b11cu;
  R(0)=0x4u;
  fp_st(c,4,R(4));
  fp_st(c,5,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,6,R(0)+R(4)); return; }
}
void f_8c03ad4e(SH4Ctx *c) {
  R(3)=0x8c20b088u;
  { fp_st(c,4,R(3)); return; }
}
void f_8c03ad54(SH4Ctx *c) {
  R(7)=0x8c20b0f0u;
  R(0)=0x0u;
  R(6)=0x8c20b0b0u;
  R(5)=0x8c20b0e4u;
  R(1)=0x8c20b0bcu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0xcu;
L8c03ad62:;
  fp_ld(c,3,R(0)+R(6));
  fp_st(c,3,R(0)+R(5));
  R(3)=LD32(R(1)+R(0));
  ST32(R(7)+R(0),R(3));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(6));
  fp_st(c,3,R(0)+R(5));
  R(3)=LD32(R(1)+R(0));
  ST32(R(7)+R(0),R(3));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(6));
  fp_st(c,3,R(0)+R(5));
  R(3)=LD32(R(1)+R(0));
  ST32(R(7)+R(0),R(3));
  R(0)+=0x4u;
  c->t=R(0)>=R(13);
  if(!c->t) goto L8c03ad62;
  R(3)=0x8c20b0c8u;
  R(2)=0x8c20b0fcu;
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(0)=0x8c20b108u;
  ST32(R(2)+8,R(1));
  R(1)=0x8c20b0d4u;
  R(3)=LD32(R(1));
  R(2)=LD32(R(1)+4);
  ST32(R(0),R(3));
  ST32(R(0)+4,R(2));
  R(3)=LD32(R(1)+8);
  R(1)=0x8c20b114u;
  ST32(R(0)+8,R(3));
  R(3)=0x8c20b0e0u;
  R(0)=0x8c20ae78u;
  fp_ld(c,3,R(3));
  R(3)=0x8c20b118u;
  fp_st(c,3,R(1));
  R(2)=(int32_t)(int8_t)LD8(R(0));
  ST8(R(3),R(2));
  R(2)=0x8c20ae79u;
  R(3)=0x8c20b119u;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  ST8(R(3),R(1));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c03adc0(SH4Ctx *c) {
  R(7)=0x8c20b0bcu;
  R(0)=0x0u;
  R(6)=0x8c20b0e4u;
  R(5)=0x8c20b0b0u;
  R(1)=0x8c20b0f0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0xcu;
L8c03adce:;
  fp_ld(c,3,R(0)+R(6));
  fp_st(c,3,R(0)+R(5));
  R(3)=LD32(R(1)+R(0));
  ST32(R(7)+R(0),R(3));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(6));
  fp_st(c,3,R(0)+R(5));
  R(3)=LD32(R(1)+R(0));
  ST32(R(7)+R(0),R(3));
  R(0)+=0x4u;
  fp_ld(c,3,R(0)+R(6));
  fp_st(c,3,R(0)+R(5));
  R(3)=LD32(R(1)+R(0));
  ST32(R(7)+R(0),R(3));
  R(0)+=0x4u;
  c->t=R(0)>=R(13);
  if(!c->t) goto L8c03adce;
  R(3)=0x8c20b0fcu;
  R(2)=0x8c20b0c8u;
  R(1)=LD32(R(3));
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(0)=0x8c20b0d4u;
  ST32(R(2)+8,R(1));
  R(1)=0x8c20b108u;
  R(3)=LD32(R(1));
  R(2)=LD32(R(1)+4);
  ST32(R(0),R(3));
  ST32(R(0)+4,R(2));
  R(3)=LD32(R(1)+8);
  R(1)=0x8c20b0e0u;
  ST32(R(0)+8,R(3));
  R(3)=0x8c20b114u;
  R(0)=0x8c20b118u;
  fp_ld(c,3,R(3));
  R(3)=0x8c20ae78u;
  fp_st(c,3,R(1));
  R(2)=(int32_t)(int8_t)LD8(R(0));
  ST8(R(3),R(2));
  R(2)=0x8c20b119u;
  R(3)=0x8c20ae79u;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  ST8(R(3),R(1));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c03ae80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c03af0cu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c2cb938u;
  fp_ld(c,15,R(0));
  R(11)=0x100u;
  R(12)=0x8c0686fcu;
L8c03ae9a:;
  c->fpul=R(14);
  R(3)=R(14);
  R(3)<<=2;
  R(3)+=R(13);
  fp_float(c,3);
  R(8)=R(3);
  fp_mov(c,4,3);
  { uint32_t tg=R(12); c->pr=0x8c03aeacu; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(14)+=0x1u;
  fp_st(c,0,R(8));
  c->fpul=R(14);
  R(3)=R(14);
  R(3)<<=2;
  R(3)+=R(13);
  fp_float(c,3);
  R(8)=R(3);
  fp_mov(c,4,3);
  { uint32_t tg=R(12); c->pr=0x8c03aec2u; fp_arith(c,2,4,15); sh4_call(c,tg); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(11);
  { uint32_t k=!c->t; fp_st(c,0,R(8)); if(k) goto L8c03ae9a; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03aeda(SH4Ctx *c) {
  R(0)=0x8c03af10u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0));
  R(1)=0x8c2cb938u;
  fp_arith(c,2,2,3);
  fp_ftrc(c,2);
  R(0)=c->fpul;
  R(0)&=0xffu;
  R(0)<<=2;
  { fp_ld(c,0,R(0)+R(1)); return; }
}
void f_8c03af20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff680u;
  R(15)+=R(0);
  R(3)=0x8c0b9810u;
  R(2)=0x8c0b980cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c03af3cu; R(4)+=0x48u; f_8c06874c(c); }
  R(3)=0x8c0b9810u;
  R(4)=0x8c2cbd40u;
  R(1)=0x8c06874cu;
  R(2)=0x8c0b9818u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c03af4au; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c06874c(c); }
  R(15)+=0x10u;
  R(6)=0x140u;
  R(5)=R(15);
  R(4)=0x8c0b9824u;
  R(3)=0x8c0128beu;
  R(6)+=R(15);
  { c->pr=0x8c03af5au; R(5)+=0x40u; f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c03af62;
  {  goto L8c03b110; }
L8c03af62:;
  R(0)=0x978u;
  R(2)=0xffffffe0u;
  R(3)=0x8c0c55dcu;
  R(4)=LD32(R(15)+R(0));
  R(13)=0x8c0c55d0u;
  R(14)=R(4);
  R(1)=0x8c0d06a2u;
  R(14)+=0x1fu;
  ST32(R(3),R(4));
  R(14)&=R(2);
  { c->pr=0x8c03af7au; R(4)=R(14); f_8c0d06a2(c); }
  R(4)=0x140u;
  R(5)=R(14);
  R(3)=0x8c012b78u;
  R(6)=R(0);
  ST32(R(13),R(0));
  { c->pr=0x8c03af88u; R(4)+=R(15); f_8c012b78(c); }
  R(2)=LD32(R(13));
  R(14)=0x8c0c55ecu;
  R(4)=0x140u;
  R(3)=0x8c012accu;
  ST32(R(14),R(2));
  { c->pr=0x8c03af96u; R(4)+=R(15); f_8c012acc(c); }
  R(2)=LD32(R(14));
  R(1)=0x8c129430u;
  R(3)=LD32(R(2)+32);
  R(6)=0x288u;
  R(4)=0x8c2d1e44u;
  R(12)=0x8c0685b4u;
  ST32(R(1),R(3));
  R(5)=LD32(R(14));
  { c->pr=0x8c03afaau; R(5)=LD32(R(5)+24); f_8c0685b4(c); }
  R(4)=0x8c2d0fa4u;
  R(5)=LD32(R(14));
  R(6)=0xa8u;
  { uint32_t tg=R(12); c->pr=0x8c03afb4u; R(5)=LD32(R(5)+28); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x74u;
  R(1)=0x8c0c55f8u;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x78u;
  R(3)=0x8c2d0f98u;
  ST32(R(1),R(2));
  R(2)=LD32(R(14));
  R(4)=0x2ceu;
  R(2)+=0x24u;
  R(13)=0x8c123b08u;
  R(6)=0x960u;
  ST32(R(3),R(2));
  R(5)=LD32(R(14));
  R(5)=LD32(R(5)+R(0));
  { uint32_t tg=R(12); c->pr=0x8c03afd6u; R(4)+=R(13); sh4_call(c,tg); }
  R(0)=0x80u;
  R(6)=0x10u;
  R(3)=LD32(R(14));
  R(4)=0x8c2e2470u;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(0)=0xc2eu;
  ST8(R(13)+R(0),R(2));
  R(0)=0x7cu;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)=0x1f4u;
  ST32(R(13)+R(0),R(2));
  R(0)=0x84u;
  R(3)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(0)=0xc35u;
  ST8(R(13)+R(0),R(2));
  R(5)=LD32(R(14));
  { uint32_t tg=R(12); c->pr=0x8c03affeu; R(5)=LD32(R(5)+20); sh4_call(c,tg); }
  R(5)=0x8c0b982cu;
  R(3)=0x8c0199c4u;
  R(12)=0x8c2e2470u;
  R(6)=0x12cu;
  { c->pr=0x8c03b00au; R(4)=0x8u; f_8c0199c4(c); }
  R(2)=R(0);
  ST32(R(12)+8,R(0));
  R(3)=LD32(R(14));
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  R(0)=LD32(R(14));
  R(3)=LD32(R(12)+8);
  R(0)=(int32_t)(int16_t)LD16(R(0)+8);
  R(1)=0x8c2cfdf4u;
  ST16(R(3)+4,R(0));
  R(0)=LD32(R(14));
  R(3)=LD32(R(12)+8);
  R(0)=(int32_t)(int16_t)LD16(R(0)+8);
  ST16(R(3)+6,R(0));
  R(0)=0x8cu;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)+=0x18u;
  ST32(R(1),R(2));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)=R(13);
  R(3)=0x8c0c5600u;
  ST32(R(3),R(2));
  R(2)=0x2ceu;
  R(2)+=R(13);
  R(1)=R(2);
  R(2)=0x8c09c4d4u;
  { c->pr=0x8c03b046u; R(0)+=0x3du; f_8c09c4d4(c); }
  R(0)=0xa8u;
  R(1)=LD32(R(14));
  R(2)=LD32(R(1)+R(0));
  R(0)+=0x4u;
  R(1)=0x8c2d0f94u;
  ST32(R(1),R(2));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(3)=0x8c0bdea4u;
  { ST32(R(3),R(2)); goto L8c03b100; }
L8c03b100:;
  R(1)=0x8c03c460u;
  { c->pr=0x8c03b106u;  f_8c03c460(c); }
  R(0)=0xbcu;
  R(3)=LD32(R(14));
  R(1)=0x8c0c5458u;
  R(2)=LD32(R(3)+R(0));
  ST32(R(1),R(2));
L8c03b110:;
  R(1)=0x980u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03b11e(SH4Ctx *c) {
  R(2)=0x8c0c55d0u;
  R(3)=LD32(R(2));
  c->t=R(4)>R(3);
  { R(0)=c->t; return; }
}
void f_8c03b128(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffe00u;
  R(15)+=R(0);
  R(3)=0x8c0b9810u;
  R(13)=R(4);
  R(2)=0x8c0b980cu;
  R(14)=R(5);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c06874cu;
  R(4)=R(15);
  { c->pr=0x8c03b146u; R(4)+=0x8u; f_8c06874c(c); }
  R(15)+=0x8u;
  R(3)=0x8c0128beu;
  R(6)=R(13);
  R(4)=0x8c0b9838u;
  { c->pr=0x8c03b152u; R(5)=R(15); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03b182;
  R(0)=0x838u;
  R(1)=0xfffff800u;
  R(3)=LD32(R(13)+R(0));
  ST32(R(14),R(3));
  R(2)=LD32(R(14));
  R(3)=0x7ffu;
  R(2)+=R(3);
  R(2)&=R(1);
  R(4)=R(2);
  ST32(R(14),R(2));
  R(2)=0x8c0d06a2u;
  { c->pr=0x8c03b170u;  f_8c0d06a2(c); }
  R(3)=0x8c0c55e8u;
  R(6)=R(0);
  R(2)=0x8c012b02u;
  ST32(R(3),R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c03b17eu; R(4)=R(13); f_8c012b02(c); }
  { R(0)=0x0u; goto L8c03b184; }
L8c03b182:;
  R(0)=0xffffffffu;
L8c03b184:;
  R(1)=0x200u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03b1e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c0c55ecu;
  R(0)=0xc0u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(3)=0x8c012accu;
  { c->pr=0x8c03b1feu; ST32(R(15),R(2)); f_8c012acc(c); }
  R(2)=0x8c061c00u;
  { c->pr=0x8c03b204u;  f_8c061c00(c); }
  R(3)=0x8c061c58u;
  { c->pr=0x8c03b20au; R(4)=0x0u; f_8c061c58(c); }
  R(2)=0x8c061cb8u;
  { c->pr=0x8c03b210u;  f_8c061cb8(c); }
  R(0)=0xa4u;
  R(13)=0x0u;
  R(12)=LD32(R(14));
  R(1)=R(13);
  R(3)=LD32(R(14));
  R(12)=LD32(R(12)+R(0));
  R(0)+=0xfffffffcu;
  R(2)=LD32(R(3)+R(0));
  R(10)=0x8c061b70u;
  c->t=R(1)>=R(2);
  if(c->t) goto L8c03b248;
L8c03b226:;
  R(11)=R(13);
  c->t=R(11)>>31;R(11)<<=1;
  R(0)=R(11);
  R(0)<<=2;
  R(8)=LD32(R(12)+R(0));
  R(0)=R(11);
  R(0)+=0x1u;
  R(0)<<=2;
  { uint32_t tg=R(10); c->pr=0x8c03b23au; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  ST32(R(8),R(0));
  R(13)+=0x1u;
  R(0)=0xa0u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  c->t=R(13)>=R(2);
  if(!c->t) goto L8c03b226;
L8c03b248:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  R(3)=0x8c0d0770u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0d0770(c); return; } }
}
void f_8c03b2a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff5c0u;
  R(15)+=R(0);
  R(3)=0x8c0b9840u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(4)=0x108u;
  R(2)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c03b2c0u; R(4)+=R(15); f_8c06874c(c); }
  R(3)=0x8c0b9810u;
  R(2)=0x8c0b9848u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c03b2d0u; R(4)+=0x10u; f_8c06874c(c); }
  R(15)+=0x10u;
  R(6)=0x200u;
  R(5)=R(15);
  R(4)=0x100u;
  R(3)=0x8c0128beu;
  R(6)+=R(15);
  { c->pr=0x8c03b2e0u; R(4)+=R(15); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03b31c;
  R(2)=0x8c0c55fcu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c03b302;
  R(0)=0x8c0c55ecu;
  R(1)=0x8c2e2478u;
  R(3)=0x8c0d06a2u;
  R(4)=LD32(R(0));
  R(8)=LD32(R(1));
  { c->pr=0x8c03b2fau; R(4)=LD32(R(4)+4); f_8c0d06a2(c); }
  R(2)=0x8c0c55fcu;
  R(3)=0x1u;
  ST32(R(8),R(0));
  ST8(R(2),R(3));
L8c03b302:;
  R(1)=0x8c2e2478u;
  R(0)=0xa38u;
  R(6)=LD32(R(1));
  R(4)=0x200u;
  R(3)=0x8c012b78u;
  R(6)=LD32(R(6));
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c03b314u; R(4)+=R(15); f_8c012b78(c); }
  R(2)=0x8c012accu;
  R(4)=0x200u;
  { c->pr=0x8c03b31cu; R(4)+=R(15); f_8c012acc(c); }
L8c03b31c:;
  R(12)=0x8c082fa0u;
  R(14)=0x0u;
  R(13)=0x8c2e2480u;
  R(4)=R(14);
  { c->pr=0x8c03b328u; ST32(R(13),R(14)); f_8c082fa0(c); }
  R(11)=0x8c2e2484u;
  R(4)=R(0);
  R(10)=0x8c0b9854u;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03b350;
L8c03b332:;
  R(3)=0x8c09c524u;
  { c->pr=0x8c03b338u; R(5)=R(10); f_8c09c524(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03b344;
  ST32(R(13),R(14));
  R(14)+=0x1u;
  { ST32(R(11),R(14)); goto L8c03b350; }
L8c03b344:;
  R(14)+=0x1u;
  { uint32_t tg=R(12); c->pr=0x8c03b34au; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c03b332;
L8c03b350:;
  R(1)=0xa40u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03b3e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffe00u;
  R(15)+=R(0);
  R(3)=0x8c0b9860u;
  R(13)=R(4);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  R(4)=0x108u;
  R(14)=R(6);
  R(11)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c03b402u; R(4)+=R(15); f_8c06874c(c); }
  R(2)=0x8c0b9810u;
  R(3)=0x8c0b9868u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { uint32_t tg=R(11); c->pr=0x8c03b412u; R(4)+=0x14u; sh4_call(c,tg); }
  R(2)=0x8c0b9810u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0b9870u;
  R(4)=0x8c2cbd40u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c03b422u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(15)+=0x24u;
  R(4)=0x100u;
  R(6)=R(12);
  R(2)=0x8c0128beu;
  R(5)=R(15);
  { c->pr=0x8c03b430u; R(4)+=R(15); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03b462;
  R(0)=0x838u;
  R(3)=0x7ffu;
  R(1)=LD32(R(12)+R(0));
  R(2)=0xfffff800u;
  R(1)+=R(3);
  R(13)=0x8c0c55d8u;
  R(1)&=R(2);
  R(4)=R(1);
  ST32(R(14),R(1));
  R(1)=0x8c0d06a2u;
  { c->pr=0x8c03b44cu;  f_8c0d06a2(c); }
  R(2)=0x8c0c55f0u;
  R(3)=R(0);
  R(3)=0x8c012b02u;
  ST32(R(13),R(0));
  ST32(R(2),R(0));
  R(6)=LD32(R(13));
  R(5)=LD32(R(14));
  { c->pr=0x8c03b45eu; R(4)=R(12); f_8c012b02(c); }
  { R(0)=0x0u; goto L8c03b464; }
L8c03b462:;
  R(0)=0xffffffffu;
L8c03b464:;
  R(1)=0x200u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03b4c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffdf8u;
  R(15)+=R(0);
  ST32(R(15)+4,R(4));
  R(14)=R(6);
  ST32(R(15),R(5));
  R(3)=LD32(R(15)+4);
  R(2)=0x8c0b9880u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=0x110u;
  R(3)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c03b4deu; R(4)+=R(15); f_8c06874c(c); }
  R(2)=LD32(R(15)+12);
  R(3)=0x8c0b9810u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0b9868u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c03b4f2u; R(4)+=0x1cu; f_8c06874c(c); }
  R(15)+=0x14u;
  R(3)=0x8c0128beu;
  R(5)=R(15);
  R(4)=0x108u;
  R(5)+=0x8u;
  R(6)=LD32(R(15));
  { c->pr=0x8c03b502u; R(4)+=R(15); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03b554;
  R(0)=0x838u;
  R(3)=LD32(R(15));
  R(2)=0xfffff800u;
  R(1)=LD32(R(3)+R(0));
  R(3)=0x7ffu;
  R(0)=0x8c0c758cu;
  R(1)+=R(3);
  R(1)&=R(2);
  ST32(R(14),R(1));
  R(1)=LD32(R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c03b52e;
  R(4)=LD32(R(14));
  R(3)=0x8c064e90u;
  R(6)=0x20au;
  R(5)=0x8c0b982cu;
  { c->pr=0x8c03b52au; R(4)+=0x20u; f_8c064e90(c); }
  {  goto L8c03b53a; }
L8c03b52e:;
  R(4)=LD32(R(14));
  R(1)=0x8c0199c4u;
  R(6)=0x20au;
  R(5)=0x8c0b982cu;
  { c->pr=0x8c03b53au; R(4)+=0x20u; f_8c0199c4(c); }
L8c03b53a:;
  R(2)=0x8c0c55e0u;
  R(3)=0xffffffe0u;
  R(1)=0x8c0c55e4u;
  ST32(R(2),R(0));
  R(0)+=0x1fu;
  R(0)&=R(3);
  ST32(R(1),R(0));
  R(0)=0x0u;
  R(1)=0x208u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c03b554:;
  R(0)=0xffffffffu;
  R(1)=0x208u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03b5a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffdfcu;
  R(15)+=R(0);
  ST32(R(15),R(4));
  R(3)=R(4);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  R(2)=0x8c0b9880u;
  R(13)=R(5);
  R(4)=0x10cu;
  R(3)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c03b5c0u; R(4)+=R(15); f_8c06874c(c); }
  R(2)=LD32(R(15)+8);
  R(3)=0x8c0b9810u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0b9868u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c03b5d4u; R(4)+=0x18u; f_8c06874c(c); }
  R(15)+=0x14u;
  R(4)=0x104u;
  R(5)=R(15);
  R(3)=0x8c0128beu;
  R(6)=R(13);
  R(5)+=0x4u;
  { c->pr=0x8c03b5e4u; R(4)+=R(15); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03b63c;
  R(0)=0x838u;
  R(1)=0xfffff800u;
  R(3)=LD32(R(13)+R(0));
  R(0)=0x8c0c758cu;
  ST32(R(14),R(3));
  R(2)=LD32(R(14));
  R(3)=0x7ffu;
  R(2)+=R(3);
  R(2)&=R(1);
  ST32(R(14),R(2));
  R(2)=LD32(R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c03b612;
  R(4)=LD32(R(14));
  R(3)=0x8c064e90u;
  R(6)=0x223u;
  R(5)=0x8c0b982cu;
  { c->pr=0x8c03b60eu; R(4)+=0x20u; f_8c064e90(c); }
  {  goto L8c03b61e; }
L8c03b612:;
  R(4)=LD32(R(14));
  R(2)=0x8c0199c4u;
  R(6)=0x223u;
  R(5)=0x8c0b982cu;
  { c->pr=0x8c03b61eu; R(4)+=0x20u; f_8c0199c4(c); }
L8c03b61e:;
  R(2)=0x8c0c55e0u;
  R(3)=0xffffffe0u;
  R(1)=0x8c0c55e4u;
  ST32(R(2),R(0));
  R(0)+=0x1fu;
  R(0)&=R(3);
  R(3)=R(1);
  ST32(R(1),R(0));
  R(1)=0x8c012b02u;
  R(5)=LD32(R(14));
  R(6)=LD32(R(3));
  { c->pr=0x8c03b638u; R(4)=R(13); f_8c012b02(c); }
  { R(0)=0x0u; goto L8c03b63e; }
L8c03b63c:;
  R(0)=0xffffffffu;
L8c03b63e:;
  R(1)=0x204u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03b6a0(SH4Ctx *c) {
  R(3)=0x8c012b60u;
  {  { f_8c012b60(c); return; } }
}
void f_8c03b6a6(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=0x830u;
  ST32(R(15),R(4));
  R(3)=0x8c0ceca0u;
  R(4)=LD32(R(4)+R(0));
  { R(15)+=0x4u; { f_8c0ceca0(c); return; } }
}
void f_8c03b6e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012accu;
  { c->pr=0x8c03b6f6u;  f_8c012acc(c); }
  R(14)=0x8c0c55f0u;
  R(1)=0x8c2cfdccu;
  R(2)=LD32(R(14));
  R(0)=0x8c2cfdd0u;
  R(3)=LD32(R(2));
  ST32(R(1),R(3));
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+4);
  ST32(R(0),R(3));
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+8);
  R(2)=0x8c2cfdd4u;
  ST32(R(2),R(3));
  R(1)=LD32(R(14));
  R(3)=LD32(R(1)+12);
  R(1)=0x8c2cfdd8u;
  ST32(R(1),R(3));
  R(0)=LD32(R(14));
  R(3)=LD32(R(0)+16);
  R(0)=0x8c2cfddcu;
  ST32(R(0),R(3));
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+20);
  R(2)=0x8c2cfde0u;
  ST32(R(2),R(3));
  R(1)=LD32(R(14));
  R(3)=LD32(R(1)+24);
  R(1)=0x8c2cfde4u;
  ST32(R(1),R(3));
  R(0)=LD32(R(14));
  R(3)=LD32(R(0)+28);
  R(0)=0x8c2cfde8u;
  ST32(R(0),R(3));
  R(2)=LD32(R(14));
  R(0)=0x8c0c55ecu;
  R(3)=LD32(R(2)+32);
  R(2)=0x8c2cfdecu;
  R(10)=0x8c0685b4u;
  ST32(R(2),R(3));
  R(1)=LD32(R(14));
  R(3)=LD32(R(1)+36);
  R(1)=0x8c2cfdf0u;
  ST32(R(1),R(3));
  R(4)=LD32(R(0));
  R(0)=0x90u;
  R(6)=LD32(R(14));
  R(4)=LD32(R(4)+R(0));
  R(6)=LD32(R(6)+44);
  R(3)=R(4);
  R(3)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(5)=LD32(R(14));
  R(4)+=R(3);
  R(3)=0x8c2cfdf4u;
  R(2)=LD32(R(3));
  R(3)=R(6);
  R(3)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(4)+=R(2);
  R(6)+=R(3);
  { uint32_t tg=R(10); c->pr=0x8c03b772u; R(5)=LD32(R(5)+40); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(6)=0x1cu;
  R(1)=0x8c2cfdf8u;
  R(2)=LD32(R(3)+48);
  R(0)=0x8c2d03acu;
  ST32(R(1),R(2));
  R(3)=LD32(R(14));
  R(4)=0x8c0c423cu;
  R(2)=LD32(R(3)+52);
  ST32(R(0),R(2));
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+56);
  R(3)=0x8c2d03b0u;
  ST32(R(3),R(2));
  R(1)=LD32(R(14));
  R(3)=0x8c2d03b4u;
  R(2)=LD32(R(1)+60);
  R(1)=0x8c2d03b8u;
  ST32(R(1),R(2));
  R(2)=0x40u;
  R(0)=LD32(R(14));
  R(1)=0x8c2e24b8u;
  R(2)=LD32(R(2)+R(0));
  ST32(R(3),R(2));
  R(2)=0x44u;
  R(0)=LD32(R(14));
  R(2)=LD32(R(2)+R(0));
  R(0)=0x48u;
  ST32(R(1),R(2));
  R(5)=LD32(R(14));
  { uint32_t tg=R(10); c->pr=0x8c03b7b2u; R(5)=LD32(R(5)+R(0)); sh4_call(c,tg); }
  R(6)=0x8c0c55f8u;
  R(0)=0x4cu;
  R(4)=LD32(R(14));
  R(5)=LD32(R(6));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)=LD32(R(4)+R(0)); if(k) goto L8c03b7ca; }
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c03b7ca;
  ST32(R(5),R(4));
  R(3)=LD32(R(6));
  ST32(R(4)+4,R(3));
L8c03b7ca:;
  R(6)=0x8c0c423cu;
  R(12)=0x0u;
  R(7)=LD32(R(6)+8);
  R(4)=R(7);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(12); if(k) goto L8c03b7e8; }
L8c03b7d8:;
  R(3)=R(6);
  R(3)+=0x4u;
  ST32(R(4)+8,R(3));
  ST32(R(4),R(5));
  R(5)=R(4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c03b7d8;
L8c03b7e8:;
  R(4)=0x8c1247a8u;
  R(6)=0x24u;
  R(5)=LD32(R(14));
  R(0)=0x50u;
  { uint32_t tg=R(10); c->pr=0x8c03b7f4u; R(5)=LD32(R(5)+R(0)); sh4_call(c,tg); }
  R(5)=0x8c1247a8u;
  R(7)=LD32(R(5)+4);
  R(4)=R(7);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(6)=R(12); if(k) goto L8c03b80c; }
L8c03b800:;
  ST32(R(4)+8,R(5));
  ST32(R(4),R(6));
  R(6)=R(4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c03b800;
L8c03b80c:;
  R(7)=LD32(R(5)+16);
  {  goto L8c03b8a0; }
L8c03b8a0:;
  R(4)=R(7);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(6)=R(12); if(k) goto L8c03b8b8; }
L8c03b8a8:;
  R(2)=R(5);
  R(2)+=0xcu;
  ST32(R(4)+8,R(2));
  ST32(R(4),R(6));
  R(6)=R(4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c03b8a8;
L8c03b8b8:;
  R(7)=LD32(R(5)+28);
  R(4)=R(7);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(6)=R(12); if(k) goto L8c03b8d2; }
L8c03b8c2:;
  R(3)=R(5);
  R(3)+=0x18u;
  ST32(R(4)+8,R(3));
  ST32(R(4),R(6));
  R(6)=R(4);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c03b8c2;
L8c03b8d2:;
  R(3)=LD32(R(14));
  R(0)=0x54u;
  R(1)=0x8c2d03bcu;
  R(6)=0xcu;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x58u;
  R(13)=0x8c123b08u;
  ST32(R(1),R(2));
  R(3)=LD32(R(14));
  R(4)=0x1d0u;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x68u;
  R(3)=0x8c2d152cu;
  ST32(R(3),R(2));
  R(2)=LD32(R(14));
  R(1)=LD32(R(2)+R(0));
  R(0)=0x1c0u;
  ST32(R(13)+R(0),R(1));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(12));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(12));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(12));
  R(0)=0x70u;
  R(5)=LD32(R(14));
  R(5)=LD32(R(5)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c03b90cu; R(4)+=R(13); sh4_call(c,tg); }
  R(5)=LD32(R(14));
  R(0)=0x74u;
  R(4)=0x1dcu;
  R(6)=0xcu;
  R(5)=LD32(R(5)+R(0));
  { uint32_t tg=R(10); c->pr=0x8c03b91au; R(4)+=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(0)=0x78u;
  R(1)=0x2ceu;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x1e8u;
  R(1)+=R(13);
  ST32(R(13)+R(0),R(2));
  R(0)=0x7cu;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)=0x1ecu;
  ST32(R(13)+R(0),R(2));
  R(0)=0x80u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)=0x1f0u;
  ST32(R(13)+R(0),R(2));
  R(0)=0x84u;
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  R(0)=0x2c8u;
  ST32(R(13)+R(0),R(2));
  R(0)=0x88u;
  R(3)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(0)=0xc2fu;
  ST8(R(13)+R(0),R(2));
  R(2)=0x1eu;
  R(3)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=R(3)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(3)*(uint32_t)(uint16_t)R(2);
  R(3)=c->macl;
  R(3)+=R(1);
  R(0)=R(13);
  R(1)=R(3);
  R(3)=0x8c09c4d4u;
  { c->pr=0x8c03b966u; R(0)+=0x1u; f_8c09c4d4(c); }
  R(0)=0x9cu;
  R(1)=LD32(R(14));
  R(3)=LD32(R(1)+R(0));
  R(0)=0x64u;
  R(1)=0x8c0c5604u;
  ST32(R(1),R(3));
  R(13)=LD32(R(14));
  R(13)=LD32(R(13)+R(0));
  { R(9)=R(12); goto L8c03ba10; }
L8c03b9c0:;
  R(12)=0x8c044260u;
  {uint32_t v=LD32(R(13));R(13)+=4;R(11)=v;}
  { c->pr=0x8c03b9c8u; R(4)=R(11); f_8c044260(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03ba0e;
  {uint32_t v=LD32(R(13));R(13)+=4;R(12)=v;}
  R(8)=0x8c05688au;
  R(5)=R(12);
  { c->pr=0x8c03b9d8u; R(4)=LD32(R(11)+4); f_8c05688a(c); }
  fp_ld(c,4,R(13));R(13)+=fp_sz(c);
  R(0)=0x38u;
  R(6)=0x68u;
  fp_st(c,4,R(0)+R(12));
  R(4)=LD32(R(11));
  R(4)+=0x18u;
  { uint32_t tg=R(10); c->pr=0x8c03b9e8u; R(5)=R(13); sh4_call(c,tg); }
  R(13)+=0x68u;
  {uint32_t v=LD32(R(13));R(13)+=4;R(4)=v;}
  ST32(R(12)+48,R(4));
  {uint32_t v=LD32(R(13));R(13)+=4;R(2)=v;}
  R(4)=0x8c0c5608u;
  ST32(R(12)+20,R(2));
  {uint32_t v=LD32(R(13));R(13)+=4;R(3)=v;}
  ST32(R(12)+24,R(3));
  {uint32_t v=LD32(R(13));R(13)+=4;R(2)=v;}
  ST32(R(12)+28,R(2));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c03ba0e;
  R(3)=LD32(R(11)+4);
  R(0)=0x25u;
  R(2)=0xf7u;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(1)&=R(2);
  ST8(R(3)+R(0),R(1));
L8c03ba0e:;
  R(9)+=0x1u;
L8c03ba10:;
  R(4)=LD32(R(14));
  R(0)=0x5cu;
  R(3)=LD32(R(4)+R(0));
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  if(!c->t) goto L8c03b9c0;
  R(0)=0xa0u;
  R(2)=0x8c0c59c4u;
  R(1)=LD32(R(4)+R(0));
  ST32(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c03ba60(SH4Ctx *c) {
  R(6)=0x8c0c55e4u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x0u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(14)=R(9);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(6));
  R(2)=0x8c012accu;
  R(3)=R(5);
  {uint32_t v=LD32(R(5));R(5)+=4;R(13)=v;}
  {uint32_t v=LD32(R(5));R(5)+=4;R(10)=v;}
  R(13)+=R(3);
  R(3)=LD32(R(6));
  {uint32_t v=LD32(R(5));R(5)+=4;R(12)=v;}
  R(12)+=R(3);
  { c->pr=0x8c03ba8cu; R(11)=LD32(R(5)); f_8c012acc(c); }
  R(3)=R(14);
  R(5)=0x8c0c7c90u;
  c->t=R(3)>=R(10);
  if(c->t) goto L8c03baa8;
L8c03ba94:;
  {uint32_t v=LD32(R(13));R(13)+=4;R(4)=v;}
  R(14)+=0x1u;
  c->t=R(14)>=R(10);
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(0)+=R(5);
  R(3)=LD32(R(0));
  { uint32_t k=!c->t; ST32(R(4)+4,R(3)); if(k) goto L8c03ba94; }
L8c03baa8:;
  R(2)=0x8c058840u;
  R(3)=0x8c2cbd8cu;
  { c->pr=0x8c03bab0u; R(4)=LD32(R(3)); f_8c058840(c); }
  R(3)=0x0u;
  R(10)=0x8c061b70u;
  c->t=R(3)>=R(11);
  R(13)=R(9);
  { uint32_t k=c->t; R(14)=R(9); if(k) goto L8c03bad6; }
L8c03babc:;
  R(0)=R(14);
  R(0)<<=2;
  R(8)=LD32(R(12)+R(0));
  R(0)=R(14);
  R(0)+=0x1u;
  R(0)<<=2;
  { uint32_t tg=R(10); c->pr=0x8c03baccu; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(13)+=0x1u;
  ST32(R(8),R(0));
  c->t=R(13)>=R(11);
  { uint32_t k=!c->t; R(14)+=0x2u; if(k) goto L8c03babc; }
L8c03bad6:;
  R(3)=0x8c0c55f0u;
  R(0)=0xa8u;
  R(4)=LD32(R(3));
  { uint32_t tg=R(10); c->pr=0x8c03bae0u; R(4)=LD32(R(4)+R(0)); sh4_call(c,tg); }
  R(3)=0x8c1247d8u;
  R(1)=0x8c0c60d0u;
  ST32(R(3),R(0));
  R(2)=R(3);
  R(0)=LD32(R(2));
  R(3)=0x8c064eb8u;
  c->t=(R(0)&R(0))==0;
  R(6)=0x310u;
  R(0)=c->t;
  R(4)=0x8c0c55e0u;
  R(0)^=0x1u;
  R(5)=0x8c0b982cu;
  ST8(R(1),R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { uint32_t tg=R(3); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
}
void f_8c03bb0c(SH4Ctx *c) {
  R(2)=0x8c0d0770u;
  R(3)=0x8c0c55d8u;
  { R(4)=LD32(R(3)); { f_8c0d0770(c); return; } }
}
void f_8c03bb60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff5a4u;
  R(15)+=R(0);
  R(14)=0x85cu;
  R(10)=0x0u;
  ST32(R(15),R(4));
  R(13)=R(6);
  R(14)+=R(15);
  ST32(R(15)+8,R(5));
  R(2)=0x8c0b9888u;
  ST32(R(15)+12,R(10));
  ST32(R(15)+4,R(10));
  R(3)=LD32(R(15));
  R(11)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c03bb92u; R(4)=R(14); f_8c06874c(c); }
  R(12)=0x964u;
  R(3)=LD32(R(15)+8);
  R(12)+=R(15);
  R(2)=0x8c0b9810u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0b9868u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c03bba6u; R(4)=R(12); sh4_call(c,tg); }
  R(15)+=0x14u;
  R(6)=R(15);
  R(2)=0x8c0128beu;
  R(8)=0x7ffu;
  R(5)=R(12);
  R(9)=0xfffff800u;
  R(6)+=0x1cu;
  { c->pr=0x8c03bbb8u; R(4)=R(14); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03bbd2;
  R(0)=0x854u;
  R(3)=0x8c012accu;
  R(4)=LD32(R(15)+R(0));
  R(4)+=R(8);
  R(4)&=R(9);
  ST32(R(15)+4,R(4));
  R(4)=R(15);
  { c->pr=0x8c03bbceu; R(4)+=0x1cu; f_8c012acc(c); }
  R(2)=LD32(R(15)+4);
  ST32(R(15)+12,R(2));
L8c03bbd2:;
  R(3)=LD32(R(13));
  R(2)=LD32(R(15)+4);
  R(0)=LD32(R(15)+8);
  R(3)<<=2;
  ST32(R(3)+R(0),R(2));
  R(3)=LD32(R(13));
  R(2)=0x8c0b9880u;
  R(3)+=0x1u;
  ST32(R(13),R(3));
  ST32(R(15)+4,R(10));
  R(3)=LD32(R(15));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c03bbf0u; R(4)=R(14); sh4_call(c,tg); }
  R(15)+=0x8u;
  R(3)=0x8c0128beu;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x1cu;
  { c->pr=0x8c03bbfeu; R(4)=R(14); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03bc1c;
  R(0)=0x854u;
  R(3)=0x8c012accu;
  R(4)=LD32(R(15)+R(0));
  R(4)+=R(8);
  R(4)&=R(9);
  ST32(R(15)+4,R(4));
  R(4)=R(15);
  { c->pr=0x8c03bc14u; R(4)+=0x1cu; f_8c012acc(c); }
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15)+4);
  R(2)+=R(3);
  ST32(R(15)+12,R(2));
L8c03bc1c:;
  R(1)=LD32(R(13));
  R(0)=LD32(R(15)+8);
  R(3)=LD32(R(15)+4);
  R(1)<<=2;
  R(2)=0x8c0b9890u;
  ST32(R(1)+R(0),R(3));
  R(1)=LD32(R(13));
  R(1)+=0x1u;
  ST32(R(13),R(1));
  ST32(R(15)+4,R(10));
  R(3)=LD32(R(15));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c03bc3au; R(4)=R(14); sh4_call(c,tg); }
  R(15)+=0x8u;
  R(3)=0x8c0128beu;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x1cu;
  { c->pr=0x8c03bc48u; R(4)=R(14); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03bc66;
  R(0)=0x854u;
  R(3)=0x8c012accu;
  R(4)=LD32(R(15)+R(0));
  R(4)+=R(8);
  R(4)&=R(9);
  ST32(R(15)+4,R(4));
  R(4)=R(15);
  { c->pr=0x8c03bc5eu; R(4)+=0x1cu; f_8c012acc(c); }
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15)+4);
  R(2)+=R(3);
  ST32(R(15)+12,R(2));
L8c03bc66:;
  R(1)=LD32(R(13));
  R(5)=0x0u;
  R(3)=LD32(R(15)+4);
  R(0)=LD32(R(15)+8);
  R(1)<<=2;
  ST32(R(1)+R(0),R(3));
  R(1)=LD32(R(13));
  R(3)=0x8c0c55ecu;
  R(1)+=0x1u;
  R(0)=0xc4u;
  ST32(R(13),R(1));
  R(1)=0x8c124737u;
  R(4)=LD32(R(3));
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(4)=LD32(R(4)+R(0));
  R(2)=R(2)&0xFF;
  R(2)<<=2;
  R(4)+=R(2);
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  R(5)+=R(4);
  c->t=(int32_t)R(3)>0;
  ST32(R(15)+24,R(3));
  ST32(R(15)+16,R(10));
  ST32(R(15)+20,R(5));
  { uint32_t k=c->t; ST32(R(15)+4,R(5)); if(k) goto L8c03bc9e; }
  {  goto L8c03bdbe; }
L8c03bc9e:;
  ST32(R(15),R(10));
  R(3)=LD32(R(15)+4);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(3)=0x8c0b9898u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c03bcaeu; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x8c0b9810u;
  R(3)=0x8c0b98a4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c03bcbau; R(4)=R(12); sh4_call(c,tg); }
  R(15)+=0x10u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x1cu;
  { R(4)=R(14); goto L8c03bd20; }
L8c03bd20:;
  R(2)=0x8c0128beu;
  { c->pr=0x8c03bd26u;  f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03bd44;
  R(0)=0x854u;
  R(3)=0x8c012accu;
  R(4)=LD32(R(15)+R(0));
  R(4)+=R(8);
  R(4)&=R(9);
  ST32(R(15),R(4));
  R(4)=R(15);
  { c->pr=0x8c03bd3cu; R(4)+=0x1cu; f_8c012acc(c); }
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15));
  R(2)+=R(3);
  ST32(R(15)+12,R(2));
L8c03bd44:;
  R(1)=LD32(R(13));
  R(3)=LD32(R(15));
  R(0)=LD32(R(15)+8);
  R(1)<<=2;
  ST32(R(1)+R(0),R(3));
  R(1)=LD32(R(13));
  R(1)+=0x1u;
  ST32(R(13),R(1));
  ST32(R(15),R(10));
  R(3)=LD32(R(15)+20);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(3)=0x8c0b98b4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(11); c->pr=0x8c03bd64u; R(4)=R(14); sh4_call(c,tg); }
  R(15)+=0x8u;
  R(2)=0x8c0128beu;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x1cu;
  { c->pr=0x8c03bd72u; R(4)=R(14); f_8c0128be(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c03bd90;
  R(0)=0x854u;
  R(3)=0x8c012accu;
  R(4)=LD32(R(15)+R(0));
  R(4)+=R(8);
  R(4)&=R(9);
  ST32(R(15),R(4));
  R(4)=R(15);
  { c->pr=0x8c03bd88u; R(4)+=0x1cu; f_8c012acc(c); }
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(15));
  R(2)+=R(3);
  ST32(R(15)+12,R(2));
L8c03bd90:;
  R(1)=LD32(R(13));
  R(0)=LD32(R(15)+8);
  R(3)=LD32(R(15));
  R(1)<<=2;
  ST32(R(1)+R(0),R(3));
  R(1)=LD32(R(13));
  R(1)+=0x1u;
  ST32(R(13),R(1));
  R(3)=LD32(R(15)+16);
  R(3)+=0x1u;
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(15)+20);
  R(2)+=0x1u;
  ST32(R(15)+20,R(2));
  R(1)=LD32(R(15)+4);
  R(1)+=0x1u;
  ST32(R(15)+4,R(1));
  R(3)=LD32(R(15)+24);
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(c->t) goto L8c03bdbe;
  {  goto L8c03bc9e; }
L8c03bdbe:;
  R(1)=0xa5cu;
  R(0)=LD32(R(15)+12);
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
void f_8c03bdd6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0ceca0u;
  R(0)=0x830u;
  ST32(R(15),R(4));
  { c->pr=0x8c03bde4u; R(4)=LD32(R(4)+R(0)); f_8c0ceca0(c); }
  R(2)=0x8c2cbd94u;
  R(4)=R(0);
  R(3)=R(4);
  R(5)=0x8c2cbd98u;
  R(1)=0x64u;
  ST32(R(5),R(0));
  R(4)=LD32(R(2));
  R(5)=0x8c2cbd8cu;
  R(4)+=R(3);
  R(3)=0x8c2cbd90u;
  c->macl=R(4)*R(1);
  R(0)=LD32(R(3));
  R(3)=0x8c0679f4u;
  { c->pr=0x8c03be02u; R(1)=c->macl; f_8c0679f4(c); }
  ST32(R(5),R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c03be60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c061c00u;
  { c->pr=0x8c03be70u;  f_8c061c00(c); }
  R(13)=0x8c0c55f0u;
  R(14)=0x0u;
  R(0)=0x9cu;
  R(2)=R(14);
  R(4)=LD32(R(13));
  R(12)=0x8c061c58u;
  R(11)=LD32(R(4)+R(0));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(4)+R(0));
  c->t=R(2)>=R(3);
  if(c->t) goto L8c03be9a;
L8c03be86:;
  R(0)=R(14);
  R(0)<<=2;
  { uint32_t tg=R(12); c->pr=0x8c03be8eu; R(4)=LD32(R(11)+R(0)); sh4_call(c,tg); }
  R(0)=0x98u;
  R(14)+=0x1u;
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+R(0));
  c->t=R(14)>=R(2);
  if(!c->t) goto L8c03be86;
L8c03be9a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(1)=0x8c061cb8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c061cb8(c); return; } }
}
void f_8c03bea8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(5));
  R(14)=R(4);
  ST32(R(15),R(6));
  R(5)=LD32(R(15));
  R(3)=0x8c012b02u;
  R(5)=LD32(R(5));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c03bec2u; R(4)=R(14); f_8c012b02(c); }
  {  goto L8c03beda; }
L8c03bec6:;
  { c->pr=0x8c03becau; R(4)=R(14); f_8c03bdd6(c); }
  R(5)=0x8c2cbd9cu;
  R(3)=LD32(R(5));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c03beda; }
  R(13)=0x8c058840u;
  { c->pr=0x8c03bedau;  f_8c058840(c); }
L8c03beda:;
  R(13)=0x8c012b60u;
  { c->pr=0x8c03bee0u; R(4)=R(14); f_8c012b60(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c03bec6;
  R(3)=LD32(R(15));
  R(4)=0x8c2cbd94u;
  R(3)=LD32(R(3));
  R(2)=LD32(R(4));
  R(2)+=R(3);
  ST32(R(4),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
