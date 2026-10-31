#include "recomp_decls.h"
void f_8c0d41c0(SH4Ctx *c) {
  R(7)=0xe20u;
  R(4)=0x0u;
  R(6)=0x1c4u;
  R(5)=R(4);
L8c0d41c8:;
  R(0)=0x8c2ed8a8u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d41d4;
  { R(0)+=R(5); return; }
L8c0d41d4:;
  R(4)+=R(6);
  c->t=R(4)>=R(7);
  { uint32_t k=!c->t; R(5)+=R(6); if(k) goto L8c0d41c8; }
  R(0)=0x0u;
  {  return; }
}
void f_8c0d41e2(SH4Ctx *c) {
  R(7)=0xe20u;
  R(4)=0x0u;
  R(6)=0x1c4u;
  R(5)=R(4);
L8c0d41ea:;
  R(0)=0x8c2ed8a8u;
  R(0)=LD32(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d4200;
  R(0)=0x8c2ed8b4u;
  R(2)=LD32(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d4200;
  R(0)=0x8c2ed8a8u;
  { R(0)+=R(5); return; }
L8c0d4200:;
  R(4)+=R(6);
  c->t=R(4)>=R(7);
  { uint32_t k=!c->t; R(5)+=R(6); if(k) goto L8c0d41ea; }
  R(0)=0x0u;
  {  return; }
}
void f_8c0d4240(SH4Ctx *c) {
  R(7)=0xe20u;
  R(4)=0x0u;
  R(6)=0x1c4u;
  R(5)=R(4);
L8c0d4248:;
  R(0)=0x8c2ed8a8u;
  R(0)=LD32(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d425e;
  R(0)=0x8c2ed8b8u;
  R(2)=LD32(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d425e;
  R(0)=0x8c2ed8a8u;
  { R(0)+=R(5); return; }
L8c0d425e:;
  R(4)+=R(6);
  c->t=R(4)>=R(7);
  { uint32_t k=!c->t; R(5)+=R(6); if(k) goto L8c0d4248; }
  R(0)=0x0u;
  {  return; }
}
void f_8c0d429a(SH4Ctx *c) {
  R(3)=0x8c2ed894u;
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=0x1u; if(k) goto L8c0d42bc; }
  R(1)=0x8c2ed894u;
  R(7)=0x0u;
  ST32(R(1),R(7));
  R(2)=0x8c2ed8a0u;
  ST32(R(2),R(6));
  R(3)=0x8c2ed888u;
  R(5)=~R(5);
  R(0)=LD32(R(3));
  R(0)&=R(5);
  ST32(R(3),R(0));
  R(3)+=0x18u;
  ST32(R(3),R(7));
L8c0d42bc:;
  R(2)=0x8c2ed888u;
  R(4)=0u-R(4);
  R(0)=LD32(R(2));
  R(0)=sh4_shld(R(0),R(4));
  { R(0)&=R(6); return; }
}
void f_8c0d4320(SH4Ctx *c) {
  R(3)=0x8c2ed898u;
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=0x1u; if(k) goto L8c0d4342; }
  R(1)=0x8c2ed898u;
  R(7)=0x0u;
  ST32(R(1),R(7));
  R(2)=0x8c2ed8a4u;
  ST32(R(2),R(6));
  R(3)=0x8c2ed88cu;
  R(5)=~R(5);
  R(0)=LD32(R(3));
  R(0)&=R(5);
  ST32(R(3),R(0));
  R(3)+=0x18u;
  ST32(R(3),R(7));
L8c0d4342:;
  R(2)=0x8c2ed88cu;
  R(4)=0u-R(4);
  R(0)=LD32(R(2));
  R(0)=sh4_shld(R(0),R(4));
  { R(0)&=R(6); return; }
}
void f_8c0d434e(SH4Ctx *c) {
  R(3)=0x8c2ed89cu;
  R(5)=0x1u;
  ST32(R(3),R(5));
  R(2)=0x8c2ed884u;
  R(5)=sh4_shad(R(5),R(4));
  R(1)=LD32(R(2));
  R(1)|=R(5);
  ST32(R(2),R(1));
  R(0)=R(3);
  R(2)=0x0u;
  { ST32(R(0),R(2)); return; }
}
void f_8c0d4366(SH4Ctx *c) {
  R(3)=0x8c2ed8a4u;
  R(5)=0x1u;
  ST32(R(3),R(5));
  R(2)=0x8c2ed88cu;
  R(5)=sh4_shad(R(5),R(4));
  R(1)=LD32(R(2));
  R(1)|=R(5);
  ST32(R(2),R(1));
  R(0)=R(3);
  R(2)=0x0u;
  { ST32(R(0),R(2)); return; }
}
void f_8c0d437e(SH4Ctx *c) {
  R(3)=0x8c2ed8a0u;
  R(5)=0x1u;
  ST32(R(3),R(5));
  R(2)=0x8c2ed888u;
  R(5)=sh4_shad(R(5),R(4));
  R(1)=LD32(R(2));
  R(1)|=R(5);
  ST32(R(2),R(1));
  R(0)=R(3);
  R(2)=0x0u;
  ST32(R(0),R(2));
  R(2)=0x8c2ee72cu;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d43a8;
  R(3)=0x8c2ee728u;
  R(0)=LD32(R(3));
  R(0)+=0x1u;
  R(1)=R(3);
  R(0)&=0x1u;
  ST32(R(1),R(0));
L8c0d43a8:;
  {  return; }
}
void f_8c0d4460(SH4Ctx *c) {
  R(2)=0x8c2ed880u;
  R(3)=LD32(R(2));
  c->t=R(4)>=R(3);
  if(c->t) goto L8c0d448a;
  R(1)=0x8c2ed8a4u;
  R(5)=0x1u;
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=sh4_shad(R(5),R(4)); if(k) goto L8c0d4480; }
  R(3)=0x8c2ed898u;
  R(0)=LD32(R(3));
  R(0)|=R(5);
  ST32(R(3),R(0));
  {  goto L8c0d448a; }
L8c0d4480:;
  R(3)=0x8c2ed88cu;
  R(5)=~R(5);
  R(0)=LD32(R(3));
  R(0)&=R(5);
  ST32(R(3),R(0));
L8c0d448a:;
  {  return; }
}
void f_8c0d448e(SH4Ctx *c) {
  R(3)=0x8c2ed894u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  R(6)=0x0u;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0d44b0; }
  R(1)=0x8c2ed894u;
  ST32(R(1),R(6));
  R(2)=0x8c2ed8a0u;
  ST32(R(2),R(5));
  R(3)=0x8c2ed888u;
  R(4)=~R(4);
  R(0)=LD32(R(3));
  R(0)&=R(4);
  ST32(R(3),R(0));
  R(3)+=0x18u;
  ST32(R(3),R(6));
L8c0d44b0:;
  R(1)=0x8c2ee72cu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d44cc;
  R(2)=0x8c2ee728u;
  R(3)=LD32(R(2));
  R(5)=sh4_shad(R(5),R(3));
  R(3)=0x8c2ed888u;
  R(0)=LD32(R(3));
  c->t=(R(5)&R(0))==0;
  if(!c->t) goto L8c0d44f2;
  R(1)=0x8c2ee728u;
  { R(0)=LD32(R(1)); return; }
L8c0d44cc:;
  R(0)=0x8c2ed87cu;
  R(3)=LD32(R(0));
  R(2)=0x0u;
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(4)=R(6); if(k) goto L8c0d44f2; }
L8c0d44d8:;
  R(1)=0x8c2ed888u;
  R(3)=R(5);
  R(3)=sh4_shad(R(3),R(4));
  R(2)=LD32(R(1));
  c->t=(R(3)&R(2))==0;
  if(!c->t) goto L8c0d44e8;
  { R(0)=R(4); return; }
L8c0d44e8:;
  R(2)=0x8c2ed87cu;
  R(4)+=0x1u;
  R(3)=LD32(R(2));
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c0d44d8;
L8c0d44f2:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0d4540(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2ee6f8u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d459a;
  R(3)=0x8c2ee720u;
  R(1)=LD32(R(3));
  R(1)+=0xffffffffu;
  ST32(R(3),R(1));
  R(0)=R(3);
  R(3)=LD32(R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d459a;
  R(0)=0x830u;
  R(13)=0x8c2ecf08u;
  R(3)=LD32(R(13)+R(0));
  R(3)+=0x1u;
  { c->pr=0x8c0d456eu; ST32(R(13)+R(0),R(3)); f_8c0d4676(c); }
  R(2)=0x8c0dda14u;
  { c->pr=0x8c0d4574u;  f_8c0dda14(c); }
  R(0)=0x82cu;
  R(0)=LD32(R(13)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d4592;
  R(11)=0x8c0dc3a0u;
  R(14)=0x0u;
  R(12)=0x8u;
L8c0d4582:;
  R(4)=0x7d8u;
  R(4)+=R(13);
  R(4)+=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0d458cu; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(14)+=0x4u;
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c0d4582;
L8c0d4592:;
  R(0)=0x82cu;
  R(3)=0x8c2ee720u;
  R(2)=LD32(R(13)+R(0));
  ST32(R(3),R(2));
L8c0d459a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d45a6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c2ee704u;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d4658;
  R(1)=0x8c2ee710u;
  R(2)=LD32(R(1));
  R(2)+=0xffffffffu;
  ST32(R(1),R(2));
  R(0)=R(1);
  R(1)=LD32(R(0));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0d4658;
  R(1)=0x8c2ee70cu;
  R(2)=LD32(R(1));
  R(3)=0x8u;
  ST32(R(2)+20,R(3));
  R(2)=R(1);
  R(4)=LD32(R(2));
  R(0)=0x8c2ed880u;
  R(4)=LD32(R(4)+36);
  R(3)=LD32(R(0));
  c->t=R(4)>=R(3);
  if(c->t) goto L8c0d464a;
  R(1)=0x8c2ed8a4u;
  R(5)=0x1u;
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=sh4_shad(R(5),R(4)); if(k) goto L8c0d4640; }
  R(3)=0x8c2ed898u;
  R(2)=LD32(R(3));
  R(2)|=R(5);
  ST32(R(3),R(2));
  {  goto L8c0d464a; }
L8c0d4640:;
  R(3)=0x8c2ed88cu;
  R(5)=~R(5);
  R(2)=LD32(R(3));
  R(2)&=R(5);
  ST32(R(3),R(2));
L8c0d464a:;
  R(1)=0x8c2ee70cu;
  R(3)=LD32(R(1));
  R(2)=0xffffffffu;
  R(0)=0x8c2ee704u;
  ST32(R(3)+36,R(2));
  R(3)=0x0u;
  ST32(R(0),R(3));
L8c0d4658:;
  { c->pr=0x8c0d465cu;  f_8c0d4540(c); }
  R(3)=0x8c0d59a0u;
  { c->pr=0x8c0d4662u; R(4)=0x1u; f_8c0d59a0(c); }
  R(2)=0x8c0d2ba0u;
  { c->pr=0x8c0d4668u; R(4)=0x1u; f_8c0d2ba0(c); }
  R(3)=0x8c2ed848u;
  R(2)=LD32(R(3));
  R(2)+=0x1u;
  ST32(R(3),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d4676(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2ee6f8u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d4684;
  {  goto L8c0d4766; }
L8c0d4684:;
  R(0)=0x938u;
  R(4)=0x8c2ecf08u;
  R(2)=0x914u;
  R(3)=LD32(R(4)+R(0));
  R(2)+=R(4);
  R(3)+=0x1u;
  ST32(R(4)+R(0),R(3));
  R(3)+=0xffffffffu;
  R(0)=0xffd8000cu;
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=LD32(R(0));
  R(1)=LD32(R(3));
  R(0)=0x938u;
  R(1)-=R(2);
  ST32(R(3),R(1));
  R(3)=0x7u;
  R(2)=LD32(R(4)+R(0));
  R(1)=0x0u;
  R(2)&=R(3);
  ST32(R(4)+R(0),R(2));
  R(0)=0x8c2ee6f8u;
  ST32(R(0),R(1));
  R(1)=0x8c2ee6fcu;
  R(2)=LD32(R(1));
  R(3)=0x6u;
  ST32(R(2)+20,R(3));
  R(3)=0x8c2ee72cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d4752;
  R(2)=0x8c2ee6fcu;
  R(4)=LD32(R(2));
  R(0)=0x8c2ed87cu;
  R(4)=LD32(R(4)+32);
  R(1)=LD32(R(0));
  c->t=R(4)>=R(1);
  if(c->t) goto L8c0d474a;
  R(3)=0x8c2ed8a0u;
  R(5)=0x1u;
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(5)=sh4_shad(R(5),R(4)); if(k) goto L8c0d4740; }
  R(2)=0x8c2ed894u;
  R(1)=LD32(R(2));
  R(1)|=R(5);
  ST32(R(2),R(1));
  {  goto L8c0d474a; }
L8c0d4740:;
  R(2)=0x8c2ed888u;
  R(5)=~R(5);
  R(1)=LD32(R(2));
  R(1)&=R(5);
  ST32(R(2),R(1));
L8c0d474a:;
  R(2)=0x8c2ee6fcu;
  R(3)=LD32(R(2));
  R(1)=0xffffffffu;
  ST32(R(3)+32,R(1));
L8c0d4752:;
  R(2)=0x8c2ee6fcu;
  R(3)=LD32(R(2));
  R(0)=0x8c2ee700u;
  ST32(R(0),R(3));
  R(3)=0x8c0d59a0u;
  { c->pr=0x8c0d4760u; R(4)=0x0u; f_8c0d59a0(c); }
  R(2)=0x8c0d2ba0u;
  { c->pr=0x8c0d4766u; R(4)=0x0u; f_8c0d2ba0(c); }
L8c0d4766:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {  return; }
}
void f_8c0d476e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c0d477au; ST32(R(15),R(4)); f_8c0d41e2(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) { f_8c0d4852(c); return; } }
  R(3)=0x8c0dde84u;
  { c->pr=0x8c0d4786u; R(4)=LD32(R(15)); f_8c0dde84(c); }
  R(2)=0x8f4u;
  R(4)=R(0);
  R(13)=0x8c2ecf08u;
  R(4)<<=2;
  R(0)=0xffd8000cu;
  R(2)+=R(13);
  R(4)+=R(2);
  R(3)=LD32(R(0));
  R(0)=0x934u;
  R(5)=0x83cu;
  R(1)=LD32(R(13)+R(0));
  R(5)+=R(13);
  R(1)-=R(3);
  R(3)=0x8c0dcbc0u;
  ST32(R(4),R(1));
  { c->pr=0x8c0d47a8u; R(4)=LD32(R(14)+60); f_8c0dcbc0(c); }
  R(6)=0xffffffffu;
  R(7)=0x4u;
  R(13)=0x1u;
  { f_8c0d47ae(c); return; }
}
void f_8c0d47ae(SH4Ctx *c) {
L8c0d47ae:;
  R(0)=LD32(R(14)+20);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0d4840;
  R(2)=0x8c2ed878u;
  R(4)=LD32(R(14)+28);
  R(3)=LD32(R(2));
  c->t=R(4)>=R(3);
  if(c->t) goto L8c0d47e0;
  R(1)=0x8c2ed89cu;
  R(5)=R(13);
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=sh4_shad(R(5),R(4)); if(k) goto L8c0d47d6; }
  R(3)=0x8c2ed890u;
  R(0)=LD32(R(3));
  R(0)|=R(5);
  ST32(R(3),R(0));
  {  goto L8c0d47e0; }
L8c0d47d6:;
  R(3)=0x8c2ed884u;
  R(5)=~R(5);
  R(0)=LD32(R(3));
  R(0)&=R(5);
  ST32(R(3),R(0));
L8c0d47e0:;
  ST32(R(14)+28,R(6));
  { ST32(R(14)+20,R(7)); goto L8c0d4846; }
L8c0d4840:;
  R(14)=LD32(R(14)+16);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d47ae;
L8c0d4846:;
  R(3)=0x8c0d59a0u;
  { c->pr=0x8c0d484cu; R(4)=0x0u; f_8c0d59a0(c); }
  R(2)=0x8c0d2ba0u;
  { c->pr=0x8c0d4852u; R(4)=0x5u; f_8c0d2ba0(c); }
  { f_8c0d4852(c); return; }
}
void f_8c0d4840(SH4Ctx *c) {
  R(14)=LD32(R(14)+16);
  c->t=(R(14)&R(14))==0;
  if(!c->t) { f_8c0d47ae(c); return; }
  R(3)=0x8c0d59a0u;
  { c->pr=0x8c0d484cu; R(4)=0x0u; f_8c0d59a0(c); }
  R(2)=0x8c0d2ba0u;
  { c->pr=0x8c0d4852u; R(4)=0x5u; f_8c0d2ba0(c); }
  { f_8c0d4852(c); return; }
}
void f_8c0d4852(SH4Ctx *c) {
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d485e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c2ed880u;
  R(11)=0x0u;
  R(10)=0x8c0d2ba0u;
  R(9)=0x8c2ecf08u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==4;
  { uint32_t k=!c->t; R(12)=0x1u; if(k) goto L8c0d4890; }
  R(2)=0x8c2ecf30u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d4890;
  R(1)=0x8c2ee72cu;
  { ST32(R(1),R(12)); goto L8c0d489a; }
L8c0d4890:;
  R(2)=0x8c2ee72cu;
  { ST32(R(2),R(11)); goto L8c0d489a; }
L8c0d4896:;
  { uint32_t tg=R(10); c->pr=0x8c0d489au; R(4)=0x7u; sh4_call(c,tg); }
L8c0d489a:;
  { c->pr=0x8c0d489eu;  f_8c0d41c0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c0d4896; }
  R(13)=LD32(R(15)+4);
  R(4)=0xffffffffu;
  R(2)=0x8c2ee6c8u;
  R(13)=LD32(R(13)+8);
  R(13)=LD32(R(13)+12);
  ST32(R(14)+28,R(4));
  ST32(R(14)+32,R(4));
  ST32(R(14)+36,R(4));
  R(3)=LD32(R(15));
  ST32(R(2),R(3));
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0d4950;
  {  goto L8c0d4904; }
L8c0d4900:;
  { uint32_t tg=R(10); c->pr=0x8c0d4904u; R(4)=0x7u; sh4_call(c,tg); }
L8c0d4904:;
  R(2)=0x8c2ed890u;
  R(4)=LD32(R(2));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d4922;
  R(1)=0x8c2ed890u;
  ST32(R(1),R(11));
  R(3)=0x8c2ed89cu;
  ST32(R(3),R(12));
  R(2)=0x8c2ed884u;
  R(4)=~R(4);
  R(0)=LD32(R(2));
  R(0)&=R(4);
  ST32(R(2),R(0));
  R(2)+=0x18u;
  ST32(R(2),R(11));
L8c0d4922:;
  R(1)=0x8c2ed884u;
  R(3)=0u-R(13);
  R(4)=LD32(R(1));
  R(4)=sh4_shld(R(4),R(3));
  R(4)&=R(12);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d4900;
  R(3)=0x8c2ed89cu;
  ST32(R(3),R(12));
  R(1)=0x8c2ed884u;
  R(2)=R(12);
  R(2)=sh4_shad(R(2),R(13));
  R(0)=LD32(R(1));
  R(0)|=R(2);
  ST32(R(1),R(0));
  R(2)=R(3);
  ST32(R(2),R(11));
  R(0)=0x82cu;
  ST32(R(14)+20,R(12));
  ST32(R(14)+28,R(13));
  R(0)=LD32(R(9)+R(0));
  { c->t=(int32_t)R(0)==1; goto L8c0d4a06; }
L8c0d4950:;
  R(0)=0x82cu;
  R(0)=LD32(R(9)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d4964;
  R(0)=0x954u;
  R(1)=LD32(R(9)+R(0));
  { c->t=(R(1)&R(1))==0; goto L8c0d4964; }
L8c0d4960:;
  { uint32_t tg=R(10); c->pr=0x8c0d4964u; R(4)=0x7u; sh4_call(c,tg); }
L8c0d4964:;
  R(3)=0x8c2ed890u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d4982;
  R(1)=0x8c2ed890u;
  ST32(R(1),R(11));
  R(2)=0x8c2ed89cu;
  ST32(R(2),R(12));
  R(3)=0x8c2ed884u;
  R(4)=~R(4);
  R(0)=LD32(R(3));
  R(0)&=R(4);
  ST32(R(3),R(0));
  R(3)+=0x18u;
  ST32(R(3),R(11));
L8c0d4982:;
  R(2)=0x8c2ed884u;
  R(3)=0u-R(13);
  R(4)=LD32(R(2));
  R(4)=sh4_shld(R(4),R(3));
  R(4)&=R(12);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d4960;
  R(3)=0x8c2ed89cu;
  ST32(R(3),R(12));
  R(1)=0x8c2ed884u;
  R(2)=R(12);
  R(2)=sh4_shad(R(2),R(13));
  R(0)=LD32(R(1));
  R(0)|=R(2);
  ST32(R(1),R(0));
  R(2)=R(3);
  ST32(R(2),R(11));
  { ST32(R(14)+28,R(13)); goto L8c0d49e4; }
L8c0d49e0:;
  { uint32_t tg=R(10); c->pr=0x8c0d49e4u; R(4)=0x7u; sh4_call(c,tg); }
L8c0d49e4:;
  { c->pr=0x8c0d49e8u;  f_8c0d448e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c0d49e0; }
  { c->pr=0x8c0d49f2u; R(4)=R(13); f_8c0d437e(c); }
  R(0)=0x8c2ee6ccu;
  R(3)=0x3u;
  ST32(R(14)+32,R(13));
  R(13)<<=2;
  R(2)=LD32(R(13)+R(0));
  ST32(R(14)+60,R(2));
  R(2)=0x8c0de320u;
  ST32(R(14)+20,R(3));
  { c->pr=0x8c0d4a06u; R(4)=LD32(R(14)+60); f_8c0de320(c); }
L8c0d4a06:;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  { c->pr=0x8c0d4a1eu;  f_8c0d4240(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0d4a2a; }
  ST32(R(4)+16,R(14));
  { ST32(R(14)+12,R(4)); goto L8c0d4a2c; }
L8c0d4a2a:;
  ST32(R(14)+12,R(11));
L8c0d4a2c:;
  R(1)=0x8c2ee724u;
  R(3)=0x7fffffffu;
  ST32(R(14)+16,R(11));
  R(2)=LD32(R(1));
  R(2)&=R(3);
  R(1)=0xffffff0fu;
  ST32(R(14)+4,R(2));
  R(2)=sh4_getsr(c);
  ST32(R(14),R(12));
  R(0)=LD32(R(15));
  R(2)&=R(1);
  R(0)&=0xfu;
  R(0)<<=2;
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(2)=0x8c2ee724u;
  R(1)=LD32(R(2));
  R(1)+=0x1u;
  ST32(R(2),R(1));
  R(2)=0x8c2ee6f4u;
  ST32(R(2),R(14));
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d4a6c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c2ee6c8u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d4ac0;
  { R(0)=0x0u; goto L8c0d4b12; }
L8c0d4ac0:;
  R(3)=0x8c2ee6f4u;
  R(11)=LD32(R(3));
  R(2)=LD32(R(4)+8);
  R(14)=0x101u;
  R(1)=LD32(R(2)+16);
  R(2)=0x8c2ee71cu;
  R(13)=0x8c0dd400u;
  R(12)=0x8c0d2ba0u;
  ST32(R(15),R(1));
  { c->pr=0x8c0d4ad6u; R(4)=LD32(R(2)); f_8c0dd400(c); }
  c->t=R(0)==R(14);
  if(c->t) goto L8c0d4ae8;
L8c0d4ada:;
  { uint32_t tg=R(12); c->pr=0x8c0d4adeu; R(4)=0x7u; sh4_call(c,tg); }
  R(2)=0x8c2ee71cu;
  { uint32_t tg=R(13); c->pr=0x8c0d4ae4u; R(4)=LD32(R(2)); sh4_call(c,tg); }
  c->t=R(0)==R(14);
  if(!c->t) goto L8c0d4ada;
L8c0d4ae8:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d4b00;
  R(4)=LD32(R(11)+60);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0de320u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0de320(c); return; } }
L8c0d4b00:;
  R(4)=LD32(R(11)+60);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0dbd00u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0dbd00(c); return; } }
L8c0d4b12:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d4b40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(6);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)<<=2;
  R(12)=0x8c2ecf08u;
  R(13)+=R(3);
  R(0)=0x7d0u;
  R(13)<<=2;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(12)+R(0));
  R(14)=R(7);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)<<=2; if(k) goto L8c0d4b72; }
  R(0)=0x730u;
  R(0)+=R(12);
  R(0)+=R(13);
  R(4)=LD32(R(14)+R(0));
  R(0)=0xe4u;
  R(0)+=R(5);
  R(0)+=R(13);
  { R(6)=LD32(R(14)+R(0)); goto L8c0d4ba4; }
L8c0d4b72:;
  R(4)=0x0u;
  R(7)=0xe4u;
  R(2)=R(4);
  c->t=R(2)>=R(6);
  R(1)=R(4);
  { uint32_t k=c->t; R(7)+=R(5); if(k) goto L8c0d4b8e; }
L8c0d4b80:;
  R(0)=R(14);
  R(2)=LD32(R(7)+R(0));
  R(1)+=0x1u;
  c->t=R(1)>=R(6);
  R(4)+=R(2);
  { uint32_t k=!c->t; R(7)+=0x14u; if(k) goto L8c0d4b80; }
L8c0d4b8e:;
  R(3)=0x730u;
  R(0)=0xe4u;
  R(3)+=R(12);
  R(0)+=R(5);
  R(0)+=R(13);
  R(3)+=R(14);
  R(6)=LD32(R(14)+R(0));
  R(2)=LD32(R(3));
  R(6)+=R(4);
  R(2)-=R(4);
  R(4)=R(2);
L8c0d4ba4:;
  R(0)=0x854u;
  R(0)+=R(12);
  R(0)+=R(13);
  R(3)=LD32(R(14)+R(0));
  c->t=R(6)>R(3);
  if(!c->t) goto L8c0d4bb8;
  R(0)=0x854u;
  R(0)+=R(12);
  R(0)+=R(13);
  ST32(R(14)+R(0),R(6));
L8c0d4bb8:;
  R(0)=0xe4u;
  R(0)+=R(5);
  R(0)+=R(13);
  R(3)=LD32(R(14)+R(0));
  c->t=R(4)>=R(3);
  if(c->t) goto L8c0d4bd0;
  R(0)=0x95cu;
  R(3)=0x2u;
  ST32(R(12)+R(0),R(3));
  R(3)=0x8c0d2ba0u;
  { c->pr=0x8c0d4bd0u; R(4)=0x8u; f_8c0d2ba0(c); }
L8c0d4bd0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d4c00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(12)=R(4);
  R(4)=LD32(R(12)+8);
  R(10)=LD32(R(12)+24);
  R(3)=0x8c2ee6f4u;
  R(11)=LD32(R(4)+16);
  R(10)=LD32(R(10)+12);
  R(14)=LD32(R(3));
  R(1)=0x184u;
  R(2)=R(11);
  R(2)<<=2;
  R(1)+=R(14);
  ST32(R(15),R(2));
  R(2)+=R(1);
  R(1)=0x8c2ee6c8u;
  R(0)=0x0u;
  ST32(R(2),R(0));
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(8)=R(11); if(k) goto L8c0d4c60; }
  { R(13)=0x0u; goto L8c0d4c6a; }
L8c0d4c60:;
  R(2)=0xffd8000cu;
  R(13)=R(10);
  R(0)=LD32(R(2));
  R(3)=0x8c2ed83cu;
  ST32(R(3),R(0));
L8c0d4c6a:;
  R(8)<<=2;
  R(3)=R(11);
  R(2)=0x5u;
  R(8)+=R(3);
  ST32(R(15)+8,R(2));
  R(8)<<=2;
L8c0d4c76:;
  R(0)=0xe4u;
  R(9)=R(13);
  R(9)<<=2;
  R(2)=R(14);
  R(0)+=R(14);
  R(0)+=R(8);
  R(0)+=R(9);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(2)+=0x44u;
  R(1)=LD32(R(12)+8);
  R(2)+=R(8);
  R(0)=LD32(R(12));
  R(2)+=R(9);
  R(1)=LD32(R(1)+12);
  R(3)=LD32(R(9)+R(0));
  R(0)=LD32(R(12)+12);
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  R(0)+=R(8);
  R(1)=LD32(R(9)+R(0));
  ST32(R(2),R(1));
  R(3)-=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  ST32(R(2),R(3));
  R(2)=0x8c2ee6c8u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d4cb2;
  c->t=R(13)==R(10);
  if(c->t) goto L8c0d4cbc;
L8c0d4cb2:;
  R(5)=R(14);
  R(6)=R(11);
  R(7)=R(13);
  { c->pr=0x8c0d4cbcu; R(4)=R(12); f_8c0d4b40(c); }
L8c0d4cbc:;
  R(0)=0xe4u;
  R(0)+=R(14);
  R(0)+=R(8);
  R(3)=LD32(R(9)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d4ccc;
  {  goto L8c0d4e40; }
L8c0d4ccc:;
  R(2)=0x8c2ee6c8u;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0d4d40;
  R(0)=LD32(R(12));
  R(3)=0x3ffffffu;
  R(4)=LD32(R(9)+R(0));
  R(1)=0xe0000000u;
  R(2)=LD32(R(9)+R(0));
  R(4)&=R(3);
  R(0)=0xff00003cu;
  R(4)|=R(1);
  R(3)=0xff000038u;
  R(2)>>=16;
  R(1)=0x0u;
  R(2)>>=8;
  ST32(R(0),R(2));
  ST32(R(3),R(2));
  ST32(R(4),R(1));
  sh4_pref(c,R(4));
  R(0)=LD32(R(12));
  R(1)=0x1u;
  R(1)=sh4_shad(R(1),R(13));
  R(2)=LD32(R(9)+R(0));
  R(2)+=0x20u;
  ST32(R(9)+R(0),R(2));
  R(0)=0xe4u;
  R(0)+=R(14);
  R(0)+=R(8);
  R(2)=LD32(R(9)+R(0));
  R(2)+=0x20u;
  ST32(R(9)+R(0),R(2));
  R(2)=0x184u;
  R(0)=LD32(R(15));
  R(2)+=R(14);
  R(2)+=R(0);
  R(3)=LD32(R(2));
  R(3)|=R(1);
  ST32(R(2),R(3));
  {  goto L8c0d4e40; }
L8c0d4d40:;
  c->t=R(13)==R(10);
  if(c->t) goto L8c0d4d86;
  R(0)=LD32(R(12));
  R(3)=0x3ffffffu;
  R(4)=LD32(R(9)+R(0));
  R(1)=0xe0000000u;
  R(2)=LD32(R(9)+R(0));
  R(4)&=R(3);
  R(0)=0xff00003cu;
  R(4)|=R(1);
  R(3)=0xff000038u;
  R(2)>>=16;
  R(1)=0x0u;
  R(2)>>=8;
  ST32(R(0),R(2));
  ST32(R(3),R(2));
  ST32(R(4),R(1));
  sh4_pref(c,R(4));
  R(0)=0xe4u;
  R(1)=0x1u;
  R(1)=sh4_shad(R(1),R(13));
  R(0)+=R(14);
  R(0)+=R(8);
  R(2)=LD32(R(9)+R(0));
  R(2)+=0x20u;
  ST32(R(9)+R(0),R(2));
  R(2)=0x184u;
  R(0)=LD32(R(15));
  R(2)+=R(14);
  R(2)+=R(0);
  R(3)=LD32(R(2));
  R(3)|=R(1);
  ST32(R(2),R(3));
  {  goto L8c0d4dac; }
L8c0d4d86:;
  R(3)=0x184u;
  R(1)=0x1u;
  R(0)=LD32(R(15));
  R(1)=sh4_shad(R(1),R(13));
  R(3)+=R(14);
  R(3)+=R(0);
  R(0)=R(14);
  R(2)=LD32(R(3));
  R(0)+=0x44u;
  R(0)+=R(8);
  R(2)|=R(1);
  ST32(R(3),R(2));
  R(3)=0x8c0dfca0u;
  ST32(R(9)+R(0),R(3));
  R(3)=0x20u;
  R(0)=0xe4u;
  R(0)+=R(14);
  R(0)+=R(8);
  ST32(R(9)+R(0),R(3));
L8c0d4dac:;
  R(0)=LD32(R(12));
  R(1)=0x8c2ee714u;
  R(2)=LD32(R(9)+R(0));
  R(2)+=0x20u;
  ST32(R(9)+R(0),R(2));
  R(3)=LD32(R(1));
  R(3)+=0xffffffffu;
  c->t=R(11)==R(3);
  if(c->t) goto L8c0d4e40;
  {  goto L8c0d4e06; }
L8c0d4e00:;
  R(3)=0x8c0d2ba0u;
  { c->pr=0x8c0d4e06u; R(4)=0x7u; f_8c0d2ba0(c); }
L8c0d4e06:;
  R(2)=0x8c0dc7a0u;
  { c->pr=0x8c0d4e0cu; R(4)=0x0u; f_8c0dc7a0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c0d4e00; }
  R(0)=0xe4u;
  R(2)=0x1u;
  R(2)=sh4_shad(R(2),R(13));
  R(0)+=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)+=R(8);
  R(2)=0x8c0de100u;
  R(3)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(9)+R(0));
  R(0)=R(14);
  R(0)+=0x44u;
  R(5)=LD32(R(14)+60);
  R(0)+=R(8);
  R(6)=LD32(R(9)+R(0));
  { c->pr=0x8c0d4e34u; R(4)=LD32(R(15)+12); f_8c0de100(c); }
  R(15)+=0x8u;
  R(3)=0x8c0dd9a0u;
  { c->pr=0x8c0d4e3cu; R(4)=LD32(R(15)+4); f_8c0dd9a0(c); }
  R(2)=0x8c2ee71cu;
  ST32(R(2),R(0));
L8c0d4e40:;
  R(3)=0x5u;
  R(13)+=0x1u;
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c0d4e4a;
  R(13)=0x0u;
L8c0d4e4a:;
  R(3)=LD32(R(15)+8);
  R(3)+=0xffffffffu;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15)+8,R(3)); if(k) goto L8c0d4e58; }
  {  goto L8c0d4c76; }
L8c0d4e58:;
  R(0)=0x0u;
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
void f_8c0d4e6e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2ee6c8u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d4e86;
  { c->pr=0x8c0d4e7cu;  f_8c0d448e(c); }
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0d4e86;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0d4e86:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d4ec0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c2ee6f4u;
  R(14)=LD32(R(3));
  R(0)=0x954u;
  R(12)=0x0u;
  R(11)=0x8c2ecf08u;
  R(2)=LD32(R(11)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)=0x1u; if(k) goto L8c0d4eec; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d4eec;
  { ST32(R(14)+56,R(13)); goto L8c0d4eee; }
L8c0d4eec:;
  ST32(R(14)+56,R(12));
L8c0d4eee:;
  R(0)=0x808u;
  ST32(R(14)+48,R(6));
  ST32(R(14)+8,R(4));
  R(2)=LD32(R(11)+R(0));
  R(0)=0x1a4u;
  ST32(R(14)+R(0),R(2));
  R(0)=0x810u;
  R(3)=LD32(R(11)+R(0));
  R(0)=0x1acu;
  ST32(R(14)+R(0),R(3));
  R(0)=0x80cu;
  R(2)=LD32(R(11)+R(0));
  R(0)=0x1a8u;
  ST32(R(14)+R(0),R(2));
  R(0)=0x814u;
  R(3)=LD32(R(11)+R(0));
  R(0)=0x1b0u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x818u;
  R(2)=LD32(R(11)+R(0));
  R(0)=0x1b4u;
  ST32(R(14)+R(0),R(2));
  R(0)=0x820u;
  R(3)=LD32(R(11)+R(0));
  R(0)=0x1bcu;
  ST32(R(14)+R(0),R(3));
  R(0)=0x81cu;
  R(2)=LD32(R(11)+R(0));
  R(0)=0x1b8u;
  ST32(R(14)+R(0),R(2));
  R(0)=0x824u;
  R(3)=LD32(R(11)+R(0));
  R(0)=0x1c0u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; ST32(R(14)+R(0),R(3)); if(k) goto L8c0d4f3c; }
  R(0)=0x40u;
  R(5)=R(12);
  ST32(R(14)+R(0),R(7));
L8c0d4f3c:;
  R(2)=0x8c2ee718u;
  R(3)=LD32(R(2));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; ST32(R(14)+40,R(3)); if(k) goto L8c0d4fc0; }
  R(0)=0x8u;
  ST32(R(14)+24,R(0));
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  ST32(R(2),R(3));
  R(3)=0x8c2ed880u;
  R(1)=LD32(R(3));
  R(2)=0x8c2ee718u;
  R(0)=LD32(R(2));
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0d4f60;
  R(0)=0x8c2ee718u;
  ST32(R(0),R(12));
L8c0d4f60:;
  R(2)=0x8c2ee72cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d4fc4;
  R(3)=0x8c2ee718u;
  R(1)=LD32(R(3));
  R(1)&=R(13);
  ST32(R(3),R(1));
  {  goto L8c0d4fc4; }
L8c0d4fc0:;
  R(0)=0x6u;
  ST32(R(14)+24,R(0));
L8c0d4fc4:;
  R(0)=0x7f4u;
  R(1)=0x8c2ee6c8u;
  R(3)=LD32(R(11)+R(0));
  ST32(R(14)+44,R(3));
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d4fd8;
  R(2)=0x2u;
  { ST32(R(14)+20,R(2)); goto L8c0d50e8; }
L8c0d4fd8:;
  R(0)=0x48u;
  R(4)=0x710u;
  R(5)=LD32(R(11)+R(0));
  R(4)+=R(11);
  R(5)+=0xffffffffu;
  R(5)<<=2;
  R(4)+=R(5);
  R(4)=LD32(R(4));
  R(11)=0x5u;
  R(7)=R(11);
  R(6)=R(4);
L8c0d4fee:;
  R(3)=0x184u;
  R(2)=R(13);
  R(2)=sh4_shad(R(2),R(6));
  R(3)+=R(14);
  R(3)+=R(5);
  R(3)=LD32(R(3));
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0d5000;
  R(10)=R(6);
L8c0d5000:;
  R(3)=0x8c09c280u;
  R(1)=R(6);
  R(1)+=0x1u;
  { c->pr=0x8c0d500au; R(0)=R(11); f_8c09c280(c); }
  R(7)-=1;c->t=R(7)==0;
  { uint32_t k=!c->t; R(6)=R(0); if(k) goto L8c0d4fee; }
  R(9)=R(4);
  R(8)=R(11);
L8c0d5014:;
  R(2)=0x8c2ee714u;
  R(3)=LD32(R(2));
  R(1)=0x184u;
  R(3)+=0xffffffffu;
  R(3)<<=2;
  R(0)=R(13);
  R(1)+=R(14);
  R(3)+=R(1);
  R(3)=LD32(R(3));
  R(0)=sh4_shad(R(0),R(9));
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c0d50d8;
  {  goto L8c0d5066; }
L8c0d5060:;
  R(2)=0x8c0d2ba0u;
  { c->pr=0x8c0d5066u; R(4)=0x7u; f_8c0d2ba0(c); }
L8c0d5066:;
  R(3)=0x8c0dc7a0u;
  { c->pr=0x8c0d506cu; R(4)=0x0u; f_8c0dc7a0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c0d5060; }
  R(2)=R(13);
  R(2)=sh4_shad(R(2),R(9));
  R(3)=0x8c2ee714u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  R(0)+=0xffffffffu;
  R(1)=0xe4u;
  R(2)=R(0);
  R(0)<<=2;
  R(7)=R(9);
  R(0)+=R(2);
  R(7)<<=2;
  R(2)=R(3);
  R(0)<<=2;
  ST32(R(15)+12,R(7));
  R(1)+=R(14);
  R(0)+=R(1);
  R(7)=LD32(R(7)+R(0));
  R(6)=LD32(R(2));
  R(6)+=0xffffffffu;
  R(0)=R(14);
  R(1)=R(6);
  R(6)<<=2;
  R(6)+=R(1);
  R(3)=0x8c0de100u;
  R(0)+=0x44u;
  R(5)=LD32(R(14)+60);
  R(6)<<=2;
  R(6)+=R(0);
  R(0)=LD32(R(15)+12);
  R(6)=LD32(R(6)+R(0));
  { c->pr=0x8c0d50b6u; R(4)=LD32(R(15)+8); f_8c0de100(c); }
  c->t=R(9)==R(10);
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c0d50ce; }
  R(3)=0x8c0dde00u;
  R(5)=0x8c0d476eu;
  { c->pr=0x8c0d50c4u; R(4)=LD32(R(15)); f_8c0dde00(c); }
  R(2)=0x8c2ee714u;
  R(5)=LD32(R(2));
  R(3)=0x8c0dde80u;
  { c->pr=0x8c0d50ceu; R(4)=LD32(R(15)); f_8c0dde80(c); }
L8c0d50ce:;
  R(3)=0x8c0dd9a0u;
  { c->pr=0x8c0d50d4u; R(4)=LD32(R(15)); f_8c0dd9a0(c); }
  R(2)=0x8c2ee71cu;
  ST32(R(2),R(0));
L8c0d50d8:;
  R(3)=0x8c09c280u;
  R(1)=R(9);
  R(1)+=0x1u;
  { c->pr=0x8c0d50e2u; R(0)=R(11); f_8c09c280(c); }
  R(8)-=1;c->t=R(8)==0;
  { uint32_t k=!c->t; R(9)=R(0); if(k) goto L8c0d5014; }
L8c0d50e8:;
  { c->pr=0x8c0d50ecu; R(4)=0x0u; f_8c0d59a0(c); }
  R(0)=LD32(R(14)+4);
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
void f_8c0d5160(SH4Ctx *c) {
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0d5224;
  R(0)=LD32(R(4)+28);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0d519c; }
  R(3)=0x8c2ed878u;
  R(6)=LD32(R(4)+28);
  R(2)=LD32(R(3));
  c->t=R(6)>=R(2);
  if(c->t) goto L8c0d519c;
  R(1)=0x8c2ed89cu;
  R(7)=R(5);
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(7)=sh4_shad(R(7),R(6)); if(k) goto L8c0d5192; }
  R(2)=0x8c2ed890u;
  R(0)=LD32(R(2));
  R(0)|=R(7);
  ST32(R(2),R(0));
  {  goto L8c0d519c; }
L8c0d5192:;
  R(2)=0x8c2ed884u;
  R(7)=~R(7);
  R(0)=LD32(R(2));
  R(0)&=R(7);
  ST32(R(2),R(0));
L8c0d519c:;
  R(0)=LD32(R(4)+32);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0d51ce;
  R(3)=0x8c2ed87cu;
  R(7)=LD32(R(4)+32);
  R(2)=LD32(R(3));
  c->t=R(7)>=R(2);
  if(c->t) goto L8c0d51ce;
  R(1)=0x8c2ed8a0u;
  R(6)=R(5);
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(6)=sh4_shad(R(6),R(7)); if(k) goto L8c0d51c4; }
  R(2)=0x8c2ed894u;
  R(0)=LD32(R(2));
  R(0)|=R(6);
  ST32(R(2),R(0));
  {  goto L8c0d51ce; }
L8c0d51c4:;
  R(2)=0x8c2ed888u;
  R(6)=~R(6);
  R(0)=LD32(R(2));
  R(0)&=R(6);
  ST32(R(2),R(0));
L8c0d51ce:;
  R(0)=LD32(R(4)+36);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0d5200;
  R(3)=0x8c2ed880u;
  R(6)=LD32(R(4)+36);
  R(2)=LD32(R(3));
  c->t=R(6)>=R(2);
  if(c->t) goto L8c0d5200;
  R(1)=0x8c2ed8a4u;
  R(7)=R(5);
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(7)=sh4_shad(R(7),R(6)); if(k) goto L8c0d51f6; }
  R(2)=0x8c2ed898u;
  R(0)=LD32(R(2));
  R(0)|=R(7);
  ST32(R(2),R(0));
  {  goto L8c0d5200; }
L8c0d51f6:;
  R(2)=0x8c2ed88cu;
  R(7)=~R(7);
  R(0)=LD32(R(2));
  R(0)&=R(7);
  ST32(R(2),R(0));
L8c0d5200:;
  R(6)=0x0u;
  ST32(R(4),R(6));
  R(5)=LD32(R(4)+12);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(4)=LD32(R(4)+16); if(k) goto L8c0d521a; }
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d5216;
  ST32(R(5)+16,R(4));
  { ST32(R(4)+12,R(5)); goto L8c0d5220; }
L8c0d5216:;
  { ST32(R(5)+16,R(6)); goto L8c0d5220; }
L8c0d521a:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d5220;
  ST32(R(4)+12,R(6));
L8c0d5220:;
  { R(0)=0x0u; return; }
L8c0d5224:;
  R(0)=0x1u;
  {  return; }
}
void f_8c0d5280(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  { c->pr=0x8c0d5296u; R(11)=R(4); f_8c0d448e(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c0d52a0; }
  {  goto L8c0d53d6; }
L8c0d52a0:;
  { c->pr=0x8c0d52a4u; R(4)=R(14); f_8c0d437e(c); }
  R(2)=R(14);
  R(0)=0x8c2ee6ccu;
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  R(2)=0x3u;
  R(4)=0x4u;
  ST32(R(11)+60,R(3));
  ST32(R(11)+32,R(14));
  R(14)=0x1u;
  ST32(R(11)+20,R(2));
L8c0d52b8:;
  R(2)=0x8c2ee714u;
  R(3)=LD32(R(2));
  R(1)=0x184u;
  R(3)+=0xffffffffu;
  R(3)<<=2;
  R(0)=R(14);
  R(1)+=R(11);
  R(3)+=R(1);
  R(3)=LD32(R(3));
  R(0)=sh4_shad(R(0),R(4));
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c0d52d4;
  { ST32(R(15)+8,R(4)); goto L8c0d52da; }
L8c0d52d4:;
  R(4)+=0xffffffffu;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0d52b8;
L8c0d52da:;
  R(1)=0x8c2ee714u;
  R(9)=0x0u;
  R(3)=LD32(R(1));
  R(2)=R(9);
  c->t=R(2)>=R(3);
  { uint32_t k=!c->t; R(12)=R(9); if(k) goto L8c0d52ec; }
  {  goto L8c0d53d6; }
L8c0d52ec:;
  R(0)=0xffd8000cu;
  R(3)=LD32(R(0));
  R(2)=0x8c2ed83cu;
  R(1)=R(12);
  R(0)=R(12);
  R(1)<<=2;
  ST32(R(2),R(3));
  R(1)+=R(0);
  R(3)=R(12);
  R(1)<<=2;
  R(3)<<=2;
  ST32(R(15)+16,R(14));
  R(13)=R(9);
  ST32(R(15)+4,R(3));
  ST32(R(15),R(1));
L8c0d530a:;
  R(2)=0x184u;
  R(1)=R(14);
  R(3)=LD32(R(15)+4);
  R(1)=sh4_shad(R(1),R(13));
  R(2)+=R(11);
  R(2)+=R(3);
  R(2)=LD32(R(2));
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0d53c4;
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d5366;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0d5360;
  { R(8)=R(14); goto L8c0d5362; }
L8c0d5360:;
  R(8)=0x2u;
L8c0d5362:;
  { ST32(R(15)+16,R(9)); goto L8c0d5368; }
L8c0d5366:;
  R(8)=R(9);
L8c0d5368:;
  R(2)=0x8c0dc7a0u;
  { c->pr=0x8c0d536eu; R(4)=0x0u; f_8c0dc7a0(c); }
  R(2)=R(14);
  R(2)=sh4_shad(R(2),R(13));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(10)=R(0);
  R(0)=0xe4u;
  R(7)=R(13);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(7)<<=2;
  R(3)=LD32(R(15)+8);
  R(0)+=R(11);
  ST32(R(15)+20,R(7));
  R(6)=R(11);
  R(0)+=R(3);
  R(3)=LD32(R(15)+8);
  R(7)=LD32(R(7)+R(0));
  R(6)+=0x44u;
  R(0)=LD32(R(15)+20);
  R(6)+=R(3);
  R(3)=0x8c0de100u;
  R(5)=LD32(R(11)+60);
  R(6)=LD32(R(6)+R(0));
  { c->pr=0x8c0d539cu; R(4)=R(10); f_8c0de100(c); }
  R(3)=0x8c2ee714u;
  R(2)=LD32(R(3));
  R(2)+=0xffffffffu;
  c->t=R(12)==R(2);
  { uint32_t k=!c->t; R(15)+=0x8u; if(k) goto L8c0d53be; }
  R(1)=LD32(R(15)+8);
  c->t=R(13)==R(1);
  if(!c->t) goto L8c0d53be;
  R(3)=0x8c0dde00u;
  R(5)=0x8c0d476eu;
  { c->pr=0x8c0d53b6u; R(4)=R(10); f_8c0dde00(c); }
  R(2)=0x8c0dde80u;
  R(5)=R(12);
  { c->pr=0x8c0d53beu; R(4)=R(10); f_8c0dde80(c); }
L8c0d53be:;
  R(3)=0x8c0dd9a0u;
  { c->pr=0x8c0d53c4u; R(4)=R(10); f_8c0dd9a0(c); }
L8c0d53c4:;
  R(2)=0x5u;
  R(13)+=0x1u;
  c->t=R(13)>=R(2);
  if(!c->t) goto L8c0d530a;
  R(3)=0x8c2ee714u;
  R(12)+=0x1u;
  R(2)=LD32(R(3));
  c->t=R(12)>=R(2);
  if(!c->t) goto L8c0d52ec;
L8c0d53d6:;
  R(0)=0x0u;
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
void f_8c0d5420(SH4Ctx *c) {
  R(3)=0x8c2ed730u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  R(2)=LD32(R(5)+4);
  R(1)=LD32(R(5)+12);
  R(7)=LD32(R(5)+8);
  R(1)-=R(2);
  R(6)=LD32(R(5));
  R(5)=R(1);
  R(1)=LD32(R(4));
  R(7)-=R(6);
  R(2)=0x8c0679f4u;
  R(7)+=0x1u;
  R(5)+=0x1u;
  { c->pr=0x8c0d5440u; R(0)=R(5); f_8c0679f4(c); }
  R(2)=0x8c09c280u;
  R(0)+=R(6);
  ST32(R(4)+4,R(0));
  R(1)=LD32(R(4));
  { c->pr=0x8c0d544cu; R(0)=R(5); f_8c09c280(c); }
  R(2)=R(3);
  R(1)=LD32(R(2));
  c->macl=R(7)*R(5);
  R(1)=LD32(R(1)+4);
  R(0)+=R(1);
  R(7)=c->macl;
  ST32(R(4)+8,R(0));
  R(0)=LD32(R(4));
  R(7)+=0xffffffffu;
  c->t=R(0)==R(7);
  if(!c->t) goto L8c0d5466;
  R(1)=0x1u;
  ST32(R(4)+24,R(1));
L8c0d5466:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d54a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0ded58u;
  R(12)=0xeeeeu;
  { c->pr=0x8c0d54b6u; R(14)=R(4); f_8c0ded58(c); }
  R(2)=0x8c0de800u;
  { c->pr=0x8c0d54bcu;  f_8c0de800(c); }
  R(3)=LD32(R(14)+8);
  R(10)=0x0u;
  R(13)=0x8c2ecf08u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(11)=0x1u; if(k) goto L8c0d54cc; }
  {  goto L8c0d567c; }
L8c0d54cc:;
  R(3)=0x8c2ed880u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d54f0;
  R(1)=0x8c0d4320u;
  { c->pr=0x8c0d54dau; R(4)=LD32(R(14)+40); f_8c0d4320(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d54e2;
  {  goto L8c0d5768; }
L8c0d54e2:;
  R(1)=0x8c2ee708u;
  R(2)=LD32(R(14)+40);
  R(3)=LD32(R(1));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0d54f0;
  {  goto L8c0d5768; }
L8c0d54f0:;
  R(0)=0x82cu;
  R(0)=LD32(R(13)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d54fe;
  R(2)=0x8c0dda14u;
  { c->pr=0x8c0d54feu;  f_8c0dda14(c); }
L8c0d54fe:;
  R(3)=LD32(R(14)+40);
  R(0)=0x8c2ee6d4u;
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x40u;
  ST32(R(14)+R(0),R(2));
  R(3)=LD32(R(14)+40);
  R(2)=0x8c2ed880u;
  ST32(R(14)+36,R(3));
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d552c;
  R(1)=0x8c2ed8a4u;
  R(4)=LD32(R(14)+36);
  ST32(R(1),R(11));
  R(2)=0x8c2ed88cu;
  R(3)=R(11);
  R(3)=sh4_shad(R(3),R(4));
  R(0)=LD32(R(2));
  R(0)|=R(3);
  ST32(R(2),R(0));
  R(3)=R(1);
  ST32(R(3),R(10));
L8c0d552c:;
  R(2)=0x8c0df026u;
  R(5)=LD32(R(14)+48);
  { c->pr=0x8c0d5534u; R(4)=LD32(R(14)+60); f_8c0df026(c); }
  R(0)=0x1acu;
  R(3)=0x8c0de6a0u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0xfffffff8u;
  R(5)=LD32(R(14)+R(0));
  R(6)+=0xffffffffu;
  { c->pr=0x8c0d5544u; R(4)=LD32(R(14)+60); f_8c0de6a0(c); }
  R(0)=0x1b0u;
  R(3)=0x8c0de6deu;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0xfffffff8u;
  R(5)=LD32(R(14)+R(0));
  R(6)+=0xffffffffu;
  { c->pr=0x8c0d5554u; R(4)=LD32(R(14)+60); f_8c0de6de(c); }
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0d5578;
  R(2)=0x8c2ecf34u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d5578;
  R(3)=0x1b4u;
  R(0)=0x828u;
  R(3)+=R(14);
  R(5)=0x8c0d5420u;
  ST32(R(13)+R(0),R(3));
  R(3)=0x8c0de0a0u;
  { c->pr=0x8c0d5572u; R(4)=LD32(R(14)+60); f_8c0de0a0(c); }
  R(2)=0x8c0dbfcau;
  { c->pr=0x8c0d5578u; R(4)=LD32(R(14)+60); f_8c0dbfca(c); }
L8c0d5578:;
  R(3)=LD32(R(13)+44);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d558e;
  R(0)=0x93cu;
  R(3)=LD32(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d558e;
  R(3)=0x8c0d1940u;
  ST32(R(13)+R(0),R(10));
  { c->pr=0x8c0d558eu; R(4)=0x0u; f_8c0d1940(c); }
L8c0d558e:;
  R(2)=0x8c0e26e0u;
  R(5)=LD32(R(14)+60);
  { c->pr=0x8c0d5596u; R(4)=LD32(R(14)+32); f_8c0e26e0(c); }
  R(0)=0x938u;
  R(2)=0x914u;
  R(3)=LD32(R(13)+R(0));
  R(2)+=R(13);
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=0xffd8000cu;
  R(1)=LD32(R(2));
  ST32(R(3),R(1));
  R(3)=LD32(R(13)+40);
  c->t=(R(3)&R(3))==0;
  {  goto L8c0d5640; }
L8c0d5640:;
  if(c->t) goto L8c0d565a;
  R(3)=LD32(R(14)+40);
  R(8)=0x8c2ee6e4u;
  R(1)=0x8c0dda60u;
  R(3)<<=2;
  { c->pr=0x8c0d564eu; R(8)+=R(3); f_8c0dda60(c); }
  ST32(R(8),R(0));
  R(3)=0x8c0ddea0u;
  R(5)=R(0);
  ST32(R(14)+52,R(0));
  { c->pr=0x8c0d565au; R(4)=LD32(R(14)+60); f_8c0ddea0(c); }
L8c0d565a:;
  R(0)=0x40u;
  R(3)=0x8c0de4e0u;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0d5664u; R(4)=LD32(R(14)+60); f_8c0de4e0(c); }
  R(2)=0x8c2ee6fcu;
  ST32(R(2),R(14));
  R(3)=0x8c2ee6f8u;
  ST32(R(3),R(11));
  R(0)=0x82cu;
  R(1)=0x5u;
  R(2)+=0x24u;
  ST32(R(14)+20,R(1));
  R(0)=LD32(R(13)+R(0));
  ST32(R(2),R(0));
  { R(12)=R(10); goto L8c0d5768; }
L8c0d567c:;
  R(0)=0x82cu;
  R(0)=LD32(R(13)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d568a;
  R(2)=0x8c0dda14u;
  { c->pr=0x8c0d568au;  f_8c0dda14(c); }
L8c0d568a:;
  R(0)=0x40u;
  R(3)=0x8c0df026u;
  R(5)=LD32(R(14)+48);
  R(12)=LD32(R(14)+R(0));
  { c->pr=0x8c0d5696u; R(4)=LD32(R(14)+60); f_8c0df026(c); }
  R(6)=LD32(R(12)+12);
  R(5)=0x0u;
  R(2)=0x8c0de6a0u;
  R(6)+=0xffffffffu;
  { c->pr=0x8c0d56a2u; R(4)=LD32(R(14)+60); f_8c0de6a0(c); }
  R(6)=LD32(R(12)+16);
  R(5)=0x0u;
  R(3)=0x8c0de6deu;
  R(6)+=0xffffffffu;
  { c->pr=0x8c0d56aeu; R(4)=LD32(R(14)+60); f_8c0de6de(c); }
  R(2)=0x8c0e26e0u;
  R(5)=LD32(R(14)+60);
  { c->pr=0x8c0d56b6u; R(4)=LD32(R(14)+32); f_8c0e26e0(c); }
  R(3)=0x8c0de160u;
  R(5)=0x0u;
  { c->pr=0x8c0d56beu; R(4)=LD32(R(14)+60); f_8c0de160(c); }
  R(0)=0x938u;
  R(3)=0x914u;
  R(2)=LD32(R(13)+R(0));
  R(3)+=R(13);
  R(2)<<=2;
  R(2)+=R(3);
  R(3)=0xffd8000cu;
  R(1)=LD32(R(3));
  ST32(R(2),R(1));
  R(1)=LD32(R(12)+24);
  R(2)=0x2000000u;
  c->t=(R(1)&R(2))==0;
  { uint32_t k=c->t; R(5)=LD32(R(12)+28); if(k) goto L8c0d5740; }
  R(3)=0x8c2ef5b8u;
  { R(6)=LD32(R(3)); goto L8c0d5742; }
L8c0d5740:;
  R(6)=LD32(R(12)+12);
L8c0d5742:;
  R(3)=0x8c0de3e0u;
  { c->pr=0x8c0d5748u; R(4)=LD32(R(14)+60); f_8c0de3e0(c); }
  R(2)=0x8c0de160u;
  R(5)=LD32(R(13)+32);
  { c->pr=0x8c0d5750u; R(4)=LD32(R(14)+60); f_8c0de160(c); }
  R(3)=0x8c2ee6fcu;
  ST32(R(3),R(14));
  R(2)=0x8c2ee6f8u;
  ST32(R(2),R(11));
  R(0)=0x82cu;
  R(1)=0x5u;
  R(3)+=0x24u;
  ST32(R(14)+20,R(1));
  R(0)=LD32(R(13)+R(0));
  R(0)+=0xau;
  ST32(R(3),R(0));
  R(12)=R(10);
L8c0d5768:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d577a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c2ee704u;
  R(3)=0x1u;
  R(14)=R(4);
  ST32(R(2),R(3));
  R(0)=0x8c2ee710u;
  R(1)=LD32(R(14)+44);
  ST32(R(0),R(1));
  R(3)=0x8c2ee70cu;
  ST32(R(3),R(14));
  R(1)=0x8c2ee708u;
  R(2)=LD32(R(14)+40);
  ST32(R(1),R(2));
  R(13)=0x8c2ecf08u;
  R(0)=0x7u;
  ST32(R(14)+20,R(0));
  R(2)=LD32(R(13)+40);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d57b6;
  R(0)=0x40u;
  R(3)=0x8c0d1bb6u;
  R(5)=LD32(R(14)+R(0));
  ST32(R(15),R(5));
  { c->pr=0x8c0d57b2u; R(4)=R(5); f_8c0d1bb6(c); }
  {  goto L8c0d57c6; }
L8c0d57b6:;
  R(2)=LD32(R(13)+44);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d57c6;
  R(3)=0x8c0d1bb6u;
  R(0)=0x40u;
  R(5)=0x0u;
  { c->pr=0x8c0d57c6u; R(4)=LD32(R(14)+R(0)); f_8c0d1bb6(c); }
L8c0d57c6:;
  R(0)=0x93cu;
  R(2)=LD32(R(13)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d57da;
  R(3)=0x0u;
  R(4)=R(3);
  ST32(R(13)+R(0),R(3));
  R(3)=0x8c0d1940u;
  { c->pr=0x8c0d57dau;  f_8c0d1940(c); }
L8c0d57da:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d5840(SH4Ctx *c) {
  R(2)=0x8c2ee72cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d584c;
  {  goto L8c0d593e; }
L8c0d584c:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d5854;
  {  goto L8c0d593e; }
L8c0d5854:;
  c->t=(R(5)&R(5))==0;
  R(6)=0xffffffffu;
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c0d589e; }
  R(2)=0x8c2ee700u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d593e;
  R(3)=0x8c2ee700u;
  R(7)=LD32(R(3));
  R(0)=0x8c2ed87cu;
  R(7)=LD32(R(7)+32);
  R(1)=LD32(R(0));
  c->t=R(7)>=R(1);
  if(c->t) goto L8c0d5894;
  R(2)=0x8c2ed8a0u;
  R(5)=R(4);
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(5)=sh4_shad(R(5),R(7)); if(k) goto L8c0d588a; }
  R(3)=0x8c2ed894u;
  R(1)=LD32(R(3));
  R(1)|=R(5);
  ST32(R(3),R(1));
  {  goto L8c0d5894; }
L8c0d588a:;
  R(3)=0x8c2ed888u;
  R(5)=~R(5);
  R(1)=LD32(R(3));
  R(1)&=R(5);
  ST32(R(3),R(1));
L8c0d5894:;
  R(2)=0x8c2ee700u;
  R(3)=LD32(R(2));
  ST32(R(3)+32,R(6));
  {  goto L8c0d593e; }
L8c0d589e:;
  R(3)=0x8c2ee6f8u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d593e;
  R(1)=0x8c2ee6fcu;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d593e;
  R(2)=0x8c2ee6fcu;
  R(0)=LD32(R(2));
  R(0)=LD32(R(0)+36);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0d58ee;
  R(3)=0x8c2ee6fcu;
  R(5)=LD32(R(3));
  R(0)=0x8c2ed880u;
  R(5)=LD32(R(5)+36);
  R(1)=LD32(R(0));
  c->t=R(5)>=R(1);
  if(c->t) goto L8c0d58e8;
  R(2)=0x8c2ed8a4u;
  R(7)=R(4);
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; R(7)=sh4_shad(R(7),R(5)); if(k) goto L8c0d58de; }
  R(3)=0x8c2ed898u;
  R(1)=LD32(R(3));
  R(1)|=R(7);
  ST32(R(3),R(1));
  {  goto L8c0d58e8; }
L8c0d58de:;
  R(3)=0x8c2ed88cu;
  R(7)=~R(7);
  R(1)=LD32(R(3));
  R(1)&=R(7);
  ST32(R(3),R(1));
L8c0d58e8:;
  R(2)=0x8c2ee6fcu;
  R(3)=LD32(R(2));
  ST32(R(3)+36,R(6));
L8c0d58ee:;
  R(3)=0x8c2ee6fcu;
  R(0)=LD32(R(3));
  R(0)=LD32(R(0)+40);
  R(5)=0x1u;
  R(1)=0x8c2ed880u;
  R(0)+=0x1u;
  R(5)&=R(0);
  R(5)+=0x2u;
  R(7)=R(5);
  R(2)=LD32(R(1));
  c->t=R(7)>=R(2);
  if(c->t) goto L8c0d5928;
  R(0)=0x8c2ed8a4u;
  R(1)=R(4);
  R(2)=LD32(R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(1)=sh4_shad(R(1),R(7)); if(k) goto L8c0d591e; }
  R(3)=0x8c2ed898u;
  R(2)=LD32(R(3));
  R(2)|=R(1);
  ST32(R(3),R(2));
  {  goto L8c0d5928; }
L8c0d591e:;
  R(3)=0x8c2ed88cu;
  R(1)=~R(1);
  R(2)=LD32(R(3));
  R(2)&=R(1);
  ST32(R(3),R(2));
L8c0d5928:;
  R(3)=0x8c2ee708u;
  ST32(R(3),R(6));
  R(1)=0x8c2ee6fcu;
  R(2)=LD32(R(1));
  R(0)=0x8c2ee704u;
  ST32(R(2)+40,R(5));
  R(2)=0x0u;
  ST32(R(0),R(2));
  R(3)+=0xfffffff4u;
  { R(4)=LD32(R(3)); { f_8c0d54a0(c); return; } }
L8c0d593e:;
  {  return; }
}
void f_8c0d59a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0d41e2u;
  { c->pr=0x8c0d59b2u; R(12)=R(4); f_8c0d41e2(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c0d5a6e; }
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(11)=0x0u;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(13)=0x1u;
L8c0d59d0:;
  { c->pr=0x8c0d59d4u; R(4)=R(14); f_8c0d5160(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d5a50;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(13))==0;
  if(!c->t) goto L8c0d5a50;
  R(0)=LD32(R(14)+20);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d59f0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d59f8;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0d5a40;
  {  goto L8c0d5a50; }
L8c0d59f0:;
  { c->pr=0x8c0d59f4u; R(4)=R(14); f_8c0d5280(c); }
  {  goto L8c0d5a50; }
L8c0d59f8:;
  R(2)=LD32(R(14)+56);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d5a04;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d5a50;
L8c0d5a04:;
  R(3)=0x8c2ee6f8u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d5a50;
  { c->pr=0x8c0d5a10u; R(4)=R(14); f_8c0d54a0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d5a50;
  { R(11)=R(13); goto L8c0d5a50; }
L8c0d5a40:;
  R(2)=0x8c2ee704u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d5a50;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0d5a50;
  { c->pr=0x8c0d5a50u; R(4)=R(14); f_8c0d577a(c); }
L8c0d5a50:;
  R(14)=LD32(R(14)+16);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d59d0;
  R(5)=R(11);
  { c->pr=0x8c0d5a5cu; R(4)=R(12); f_8c0d5840(c); }
  R(0)=LD32(R(15));
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
L8c0d5a6e:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d5aa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  R(14)=0x8c2ecf08u;
  R(11)=0x0u;
  R(13)=R(4);
  R(4)=R(11);
L8c0d5abc:;
  R(3)=0x7d8u;
  R(2)=0x8u;
  R(3)+=R(14);
  R(3)+=R(4);
  R(4)+=0x4u;
  ST32(R(3),R(11));
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c0d5abc;
  R(0)=0x800u;
  R(5)=R(15);
  R(6)=R(15);
  R(3)=0x8c0db980u;
  R(4)=LD32(R(14)+R(0));
  R(6)+=0x48u;
  R(5)+=0x44u;
  { c->pr=0x8c0d5adeu; c->t=R(4)&1;R(4)>>=1; f_8c0db980(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d5ae8;
  { R(0)=R(4); goto L8c0d5dc8; }
L8c0d5ae8:;
  R(12)=R(15);
  R(12)+=0x30u;
  R(3)=R(12);
  R(3)+=0x10u;
  R(2)=R(12);
  R(2)+=0xcu;
  R(1)=R(12);
  R(0)=0x8c0d5b70u;
  R(1)+=0x8u;
  ST32(R(15)+4,R(11));
  R(8)=0x2u;
  ST32(R(15)+20,R(11));
  ST32(R(15)+24,R(11));
  ST32(R(15)+36,R(11));
  ST32(R(15)+8,R(3));
  R(3)=R(12);
  ST32(R(15)+12,R(2));
  R(3)+=0x4u;
  R(2)=R(12);
  ST32(R(15)+44,R(1));
  ST32(R(15)+16,R(3));
  ST32(R(15)+40,R(2));
  fp_ld(c,15,R(0));
L8c0d5b16:;
  R(3)=LD32(R(14)+20);
  R(5)=0x7d8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x800u;
  R(6)=R(15);
  R(10)=LD32(R(15)+8);
  R(6)+=0x48u;
  R(3)+=R(14);
  R(7)=LD32(R(3));
  R(10)<<=2;
  R(3)=0x7d4u;
  R(6)+=R(10);
  R(6)=LD32(R(6));
  R(5)+=R(14);
  R(3)+=R(14);
  R(4)=LD32(R(3));
  c->t=R(7)&1;R(7)>>=1;
  R(3)=0x8c0df260u;
  { c->pr=0x8c0d5b3eu; R(5)+=R(10); f_8c0df260(c); }
  R(2)=LD32(R(13)+4);
  c->t=(R(2)&R(8))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0d5b80; }
  R(3)=0x7d8u;
  R(4)=LD32(R(15)+4);
  R(3)+=R(14);
  R(5)=0x8c0e0300u;
  R(4)<<=2;
  R(4)+=R(3);
  {  goto L8c0d5b8c; }
L8c0d5b80:;
  R(3)=0x7d8u;
  R(4)=LD32(R(15)+4);
  R(3)+=R(14);
  R(5)=0x8c0e0280u;
  R(4)<<=2;
  R(4)+=R(3);
L8c0d5b8c:;
  R(2)=0x8c0de0a0u;
  { c->pr=0x8c0d5b92u; R(4)=LD32(R(4)); f_8c0de0a0(c); }
  R(3)=0x8c0dcb40u;
  R(5)=R(15);
  R(7)=LD32(R(14)+20);
  R(6)=R(15);
  R(5)+=0x1cu;
  R(6)+=0x20u;
  { c->pr=0x8c0d5ba2u; R(4)=LD32(R(14)+12); f_8c0dcb40(c); }
  R(4)=0x7d8u;
  R(3)=LD32(R(15)+36);
  R(4)+=R(14);
  R(2)=0x8c0ddf20u;
  R(7)=LD32(R(13)+52);
  R(4)+=R(3);
  R(5)=LD32(R(15)+28);
  R(6)=LD32(R(15)+32);
  { c->pr=0x8c0d5bb6u; R(4)=LD32(R(4)); f_8c0ddf20(c); }
  R(3)=LD32(R(13)+52);
  R(2)=0x0u;
  c->t=R(2)>=R(3);
  { uint32_t k=!c->t; R(9)=R(11); if(k) goto L8c0d5bc4; }
  {  goto L8c0d5d6c; }
L8c0d5bc4:;
  R(10)=0x38u;
  R(4)=R(11);
  c->macl=R(9)*R(10);
  R(10)=c->macl;
L8c0d5bcc:;
  R(0)=R(13);
  R(0)+=0x38u;
  R(0)+=R(10);
  R(3)=R(4);
  R(2)=R(0);
  R(2)+=0x10u;
  R(3)<<=2;
  c->fr[3]=0x00000000u;
  R(3)+=R(2);
  fp_ld(c,2,R(3));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c0d5c04;
  R(0)=LD32(R(13)+4);
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0d5bfc;
  R(3)=R(13);
  R(3)+=0x38u;
  R(3)+=R(10);
  R(2)=LD32(R(3)+12);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0d5bfc;
  R(0)=R(4);
  { R(0)<<=2; goto L8c0d5c54; }
L8c0d5bfc:;
  R(0)=R(4);
  R(0)<<=2;
  { ST32(R(12)+R(0),R(11)); goto L8c0d5c68; }
L8c0d5c04:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==0;
  R(5)=R(4);
  { uint32_t k=c->t; R(5)<<=2; if(k) goto L8c0d5c40; }
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d5c40;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d5c40;
  {  goto L8c0d5c62; }
L8c0d5c40:;
  R(0)=R(13);
  R(0)+=0x38u;
  R(0)+=R(10);
  R(3)=R(0);
  R(3)+=0x10u;
  R(3)+=R(5);
  fp_ld(c,2,R(3));
  fp_cmp(c,1,2,15);
  if(!c->t) goto L8c0d5c5c;
  R(0)=R(5);
L8c0d5c54:;
  R(3)=0x3u;
  ST32(R(12)+R(0),R(3));
  {  goto L8c0d5c68; }
L8c0d5c5c:;
  R(0)=R(5);
  { ST32(R(12)+R(0),R(8)); goto L8c0d5c68; }
L8c0d5c62:;
  R(3)=0x1u;
  R(0)=R(5);
  ST32(R(12)+R(0),R(3));
L8c0d5c68:;
  R(2)=0x5u;
  R(4)+=0x1u;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c0d5bcc;
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(1));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+16);
  R(3)=LD32(R(2));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+24);
  R(4)=R(15);
  R(5)=LD32(R(15)+48);
  R(7)=LD32(R(15)+52);
  R(5)=LD32(R(5));
  R(3)=0x8c0dc740u;
  R(6)=LD32(R(6));
  R(7)=LD32(R(7));
  { c->pr=0x8c0d5c90u; R(4)+=0x8u; f_8c0dc740(c); }
  c->t=(R(9)&R(9))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c0d5ca0; }
  R(3)=0x8c0dc5a0u;
  { c->pr=0x8c0d5c9cu; R(4)=R(15); f_8c0dc5a0(c); }
  {  goto L8c0d5ca6; }
L8c0d5ca0:;
  R(3)=0x8c0dc700u;
  { c->pr=0x8c0d5ca6u; R(4)=R(15); f_8c0dc700(c); }
L8c0d5ca6:;
  R(10)=0x38u;
  R(0)=R(13);
  c->macl=R(9)*R(10);
  R(0)+=0x38u;
  R(10)=c->macl;
  R(0)=LD32(R(10)+R(0));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0d5cc0;
  R(2)=0x8c0dc6c0u;
  { c->pr=0x8c0d5cbcu; R(4)=R(15); f_8c0dc6c0(c); }
  {  goto L8c0d5cc6; }
L8c0d5cc0:;
  R(2)=0x8c0dc560u;
  { c->pr=0x8c0d5cc6u; R(4)=R(15); f_8c0dc560(c); }
L8c0d5cc6:;
  R(0)=R(13);
  R(0)+=0x38u;
  R(0)=LD32(R(10)+R(0));
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0d5d4e;
  R(0)=R(13);
  R(0)+=0x38u;
  R(0)=LD32(R(10)+R(0));
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0d5d20;
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d5d34;
  R(3)=0x8c0de5c0u;
  R(5)=0x1u;
  { c->pr=0x8c0d5ceau; R(4)=R(15); f_8c0de5c0(c); }
  {  goto L8c0d5d34; }
L8c0d5d20:;
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0d5d34;
  R(2)=LD32(R(15)+16);
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d5d34;
  R(3)=0x8c0de5c0u;
  R(5)=0x3u;
  { c->pr=0x8c0d5d34u; R(4)=R(15); f_8c0de5c0(c); }
L8c0d5d34:;
  R(0)=R(13);
  R(0)+=0x38u;
  R(0)=LD32(R(10)+R(0));
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c0d5d4e;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d5d4e;
  R(3)=0x8c0de5c0u;
  R(5)=0x4u;
  { c->pr=0x8c0d5d4eu; R(4)=R(15); f_8c0de5c0(c); }
L8c0d5d4e:;
  R(4)=0x7d8u;
  R(5)=R(9);
  R(3)=LD32(R(15)+24);
  R(4)+=R(14);
  R(2)=0x8c0de020u;
  R(6)=LD32(R(15));
  R(4)+=R(3);
  { c->pr=0x8c0d5d60u; R(4)=LD32(R(4)); f_8c0de020(c); }
  R(3)=LD32(R(13)+52);
  R(9)+=0x1u;
  c->t=R(9)>=R(3);
  if(c->t) goto L8c0d5d6c;
  {  goto L8c0d5bc4; }
L8c0d5d6c:;
  R(4)=0x7d8u;
  R(10)=LD32(R(15)+20);
  R(3)=0x8c0dc3a0u;
  R(4)+=R(14);
  R(4)+=R(10);
  { c->pr=0x8c0d5d7au; R(4)=LD32(R(4)); f_8c0dc3a0(c); }
  R(4)=0x7d8u;
  R(3)=0x8c0dcdc0u;
  R(4)+=R(14);
  R(4)+=R(10);
  { c->pr=0x8c0d5d86u; R(4)=LD32(R(4)); f_8c0dcdc0(c); }
  R(3)=R(10);
  R(2)=LD32(R(15)+4);
  R(3)+=0x4u;
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
  ST32(R(15)+20,R(3));
  R(1)=LD32(R(15)+24);
  R(1)+=0x4u;
  ST32(R(15)+24,R(1));
  R(3)=LD32(R(15)+36);
  R(3)+=0x4u;
  ST32(R(15)+36,R(3));
  R(2)=LD32(R(15)+4);
  c->t=R(2)>=R(8);
  if(c->t) goto L8c0d5da8;
  {  goto L8c0d5b16; }
L8c0d5da8:;
  R(3)=LD32(R(14)+44);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d5dc6;
  R(12)=0x8c0de160u;
  R(13)=R(11);
L8c0d5db2:;
  R(4)=0x7d8u;
  R(5)=0x0u;
  R(4)+=R(14);
  R(4)+=R(13);
  { uint32_t tg=R(12); c->pr=0x8c0d5dbeu; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8u;
  R(13)+=0x4u;
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c0d5db2;
L8c0d5dc6:;
  R(0)=0x0u;
L8c0d5dc8:;
  R(15)+=0x4cu;
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
void f_8c0d5e00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(3)=LD32(R(4)+52);
  R(0)=0x48u;
  R(5)=0x8c2ecf08u;
  R(11)=0xffffffe0u;
  R(14)=0x10u;
  R(6)=LD32(R(4)+36);
  ST32(R(5)+R(0),R(3));
  R(7)=LD32(R(4)+44);
  R(3)=LD32(R(4)+48);
  R(8)=R(7);
  R(8)+=0x1fu;
  ST32(R(15)+12,R(3));
  R(3)=0x1fu;
  R(8)&=R(11);
  R(2)=LD32(R(15)+12);
  R(3)&=R(8);
  R(2)-=R(3);
  ST32(R(15)+12,R(2));
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d5e80;
  R(1)=0x1u;
  ST32(R(6)+20,R(1));
  { ST32(R(5)+48,R(1)); goto L8c0d5e92; }
L8c0d5e80:;
  R(2)=LD32(R(4)+40);
  R(3)=0x8c0679f4u;
  ST32(R(6)+20,R(2));
  ST32(R(5)+48,R(2));
  R(1)=LD32(R(15)+12);
  { c->pr=0x8c0d5e8eu; R(0)=LD32(R(4)+40); f_8c0679f4(c); }
  R(0)&=R(11);
  ST32(R(15)+12,R(0));
L8c0d5e92:;
  R(3)=LD32(R(5)+48);
  R(6)=0x0u;
  R(2)=R(6);
  R(12)=R(6);
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(9)=0x14u; if(k) goto L8c0d5f0a; }
L8c0d5ea0:;
  R(3)=0x150u;
  R(0)=R(12);
  R(0)<<=2;
  R(2)=R(12);
  R(3)+=R(5);
  R(1)=0x170u;
  R(0)+=R(3);
  R(3)=R(12);
  R(2)<<=2;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)<<=2;
  R(1)+=R(5);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  ST32(R(0),R(2));
  R(3)=R(2);
  R(2)=R(12);
  R(2)<<=2;
  R(3)=R(12);
  R(2)+=R(3);
  R(2)<<=2;
  R(2)<<=2;
  R(1)=0x0u;
  c->t=R(2)>>31;R(2)<<=1;
  ST32(R(15),R(2));
  R(3)=LD32(R(4)+52);
  c->t=R(1)>=R(3);
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c0d5f02; }
L8c0d5edc:;
  R(10)=R(13);
  R(10)<<=2;
  R(3)=R(13);
  R(10)+=R(3);
  R(10)<<=2;
  R(7)=R(6);
L8c0d5ee8:;
  R(0)=0x170u;
  R(3)=LD32(R(15));
  R(0)+=R(5);
  R(0)+=R(3);
  R(0)+=R(10);
  ST32(R(7)+R(0),R(6));
  R(7)+=0x4u;
  c->t=R(7)>=R(9);
  if(!c->t) goto L8c0d5ee8;
  R(2)=LD32(R(4)+52);
  R(13)+=0x1u;
  c->t=R(13)>=R(2);
  if(!c->t) goto L8c0d5edc;
L8c0d5f02:;
  R(2)=LD32(R(5)+48);
  R(12)+=0x1u;
  c->t=R(12)>=R(2);
  if(!c->t) goto L8c0d5ea0;
L8c0d5f0a:;
  R(0)=0x8c0d5facu;
  R(7)=R(15);
  fp_ld(c,4,R(0));
  R(10)=0x5u;
  R(0)=LD32(R(4)+4);
  R(12)=0x38u;
  c->fr[5]=0x00000000u;
  c->t=(R(0)&0x40)==0;
  { uint32_t k=!c->t; R(7)+=0x20u; if(k) goto L8c0d5f22; }
  {  goto L8c0d6126; }
L8c0d5f22:;
  R(3)=R(7);
  R(3)+=0x14u;
  R(0)=0x7d0u;
  R(2)=0x1u;
  R(1)=0x0u;
  ST32(R(5)+R(0),R(2));
  R(2)=R(7);
  ST32(R(15)+12,R(6));
  ST32(R(15)+24,R(3));
  ST32(R(15)+28,R(2));
  R(3)=LD32(R(4)+52);
  c->t=R(1)>=R(3);
  if(!c->t) goto L8c0d5f40;
  {  goto L8c0d634e; }
L8c0d5f40:;
  R(2)=LD32(R(15)+12);
  R(0)=LD32(R(15)+12);
  c->macl=R(2)*R(12);
  R(3)=0x710u;
  R(0)<<=2;
  R(3)+=R(5);
  R(2)=c->macl;
  R(0)+=R(3);
  R(3)=R(4);
  R(3)+=0x38u;
  R(2)+=R(3);
  R(1)=LD32(R(2)+12);
  ST32(R(0),R(1));
  R(13)=LD32(R(15)+28);
L8c0d5f5c:;
  fp_st(c,5,R(13));
  R(13)+=0x4u;
  R(3)=LD32(R(15)+24);
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c0d5f5c;
  R(8)=LD32(R(15)+12);
  R(13)=R(6);
  c->macl=R(8)*R(12);
  R(8)=c->macl;
L8c0d5f6e:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d5fc0;
  R(1)=R(4);
  R(1)+=0x38u;
  R(1)+=R(8);
  R(3)=LD32(R(1)+12);
  c->t=R(3)==R(13);
  if(c->t) goto L8c0d5fd8;
  R(3)=R(4);
  R(3)+=0x38u;
  R(3)+=R(8);
  R(0)=R(13);
  R(1)=R(3);
  R(0)<<=2;
  R(1)+=0x10u;
  R(2)=R(0);
  R(1)+=R(2);
  ST32(R(15),R(0));
  fp_ld(c,3,R(1));
  { fp_st(c,3,R(0)+R(7)); goto L8c0d5fd8; }
L8c0d5fc0:;
  R(3)=R(4);
  R(3)+=0x38u;
  R(3)+=R(8);
  R(0)=R(13);
  R(1)=R(3);
  R(0)<<=2;
  R(1)+=0x10u;
  R(2)=R(0);
  R(1)+=R(2);
  ST32(R(15),R(0));
  fp_ld(c,3,R(1));
  fp_st(c,3,R(0)+R(7));
L8c0d5fd8:;
  R(13)+=0x1u;
  c->t=R(13)>=R(10);
  if(!c->t) goto L8c0d5f6e;
  R(13)=LD32(R(15)+12);
  R(3)=R(4);
  R(3)+=0x38u;
  c->macl=R(13)*R(12);
  R(13)=c->macl;
  R(13)+=R(3);
  R(2)=LD32(R(13)+4);
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(13)+8);
  ST32(R(15),R(3));
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(14))==0;
  if(!c->t) goto L8c0d6002;
  R(3)=0x8c0679f4u;
  R(1)=LD32(R(15));
  { c->pr=0x8c0d6000u; R(0)=LD32(R(4)+40); f_8c0679f4(c); }
  ST32(R(15),R(0));
L8c0d6002:;
  R(3)=LD32(R(15));
  R(8)=R(6);
  R(3)&=R(11);
  ST32(R(15),R(3));
  R(13)=LD32(R(15)+12);
  R(2)=R(13);
  R(13)<<=2;
  R(13)+=R(2);
  R(13)<<=2;
L8c0d6014:;
  R(2)=LD32(R(15));
  R(0)=R(8);
  R(3)=0x730u;
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  R(3)+=R(5);
  fp_ld(c,3,R(0)+R(7));
  R(3)+=R(13);
  R(3)+=R(8);
  { uint32_t k=c->t; fp_float(c,2); if(k) goto L8c0d6032; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[1]=c->fpul;
  fp_arith(c,0,2,1);
L8c0d6032:;
  fp_arith(c,2,3,2);
  R(1)=0x4f000000u;
  c->fpul=R(1);
  fp_arith(c,3,3,4);
  c->fr[2]=c->fpul;
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0d6044;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0d6044:;
  fp_ftrc(c,3);
  R(8)+=0x4u;
  c->t=R(8)>=R(9);
  R(2)=c->fpul;
  R(2)&=R(11);
  ST32(R(3),R(2));
  if(!c->t) goto L8c0d6014;
  R(1)=0x0u;
  ST32(R(15)+4,R(6));
  R(3)=LD32(R(15)+12);
  c->macl=R(3)*R(12);
  R(3)=c->macl;
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(5)+48);
  c->t=R(1)>=R(2);
  if(c->t) goto L8c0d60f6;
L8c0d6064:;
  R(2)=LD32(R(15)+4);
  R(8)=R(6);
  R(3)=R(2);
  R(2)<<=2;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  ST32(R(15),R(2));
L8c0d6076:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(14))==0;
  if(c->t) goto L8c0d60c0;
  R(2)=R(4);
  R(3)=LD32(R(15)+20);
  R(2)+=0x38u;
  R(2)+=R(3);
  R(1)=LD32(R(2)+12);
  c->t=R(8)==R(1);
  if(!c->t) goto L8c0d60c0;
  R(0)=0x170u;
  R(3)=LD32(R(15));
  R(0)+=R(5);
  R(2)=0x10000000u;
  R(0)+=R(3);
  R(3)=R(8);
  R(3)<<=2;
  R(0)+=R(13);
  ST32(R(3)+R(0),R(2));
  {  goto L8c0d60e4; }
L8c0d60c0:;
  R(0)=0x170u;
  R(3)=LD32(R(15));
  R(0)+=R(5);
  R(0)+=R(3);
  R(3)=R(8);
  R(0)+=R(13);
  R(3)<<=2;
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(15)+8);
  ST32(R(3)+R(0),R(2));
  R(3)=0x730u;
  R(0)=LD32(R(15)+16);
  R(3)+=R(5);
  R(2)=LD32(R(15)+8);
  R(3)+=R(13);
  R(3)=LD32(R(3)+R(0));
  R(2)+=R(3);
  ST32(R(15)+8,R(2));
L8c0d60e4:;
  R(8)+=0x1u;
  c->t=R(8)>=R(10);
  if(!c->t) goto L8c0d6076;
  R(2)=LD32(R(15)+4);
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(5)+48);
  c->t=R(2)>=R(3);
  if(!c->t) goto L8c0d6064;
L8c0d60f6:;
  R(8)=R(6);
L8c0d60f8:;
  R(3)=0x170u;
  R(0)=0xb0u;
  R(3)+=R(5);
  R(3)+=R(13);
  R(2)=R(3);
  R(2)+=R(8);
  R(3)=LD32(R(2));
  R(0)+=R(5);
  R(0)+=R(13);
  ST32(R(8)+R(0),R(3));
  R(8)+=0x4u;
  c->t=R(8)>=R(9);
  if(!c->t) goto L8c0d60f8;
  R(3)=LD32(R(15)+12);
  R(3)+=0x1u;
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(4)+52);
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0d6122;
  {  goto L8c0d5f40; }
L8c0d6122:;
  {  goto L8c0d634e; }
L8c0d6126:;
  R(3)=R(7);
  R(0)=0x7d0u;
  R(3)+=0x14u;
  R(13)=R(7);
  ST32(R(5)+R(0),R(6));
  ST32(R(15),R(3));
L8c0d6132:;
  fp_st(c,5,R(13));
  R(13)+=0x4u;
  R(3)=LD32(R(15));
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c0d6132;
  R(2)=0x0u;
  ST32(R(15)+4,R(6));
  R(3)=LD32(R(4)+52);
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0d61f0;
L8c0d6146:;
  R(2)=LD32(R(15)+4);
  R(13)=R(6);
  R(0)=LD32(R(15)+4);
  c->macl=R(2)*R(12);
  R(3)=0x710u;
  R(0)<<=2;
  R(3)+=R(5);
  R(2)=c->macl;
  R(0)+=R(3);
  R(3)=R(4);
  R(3)+=0x38u;
  R(2)+=R(3);
  R(1)=LD32(R(2)+12);
  ST32(R(0),R(1));
  R(3)=LD32(R(15)+4);
  c->macl=R(3)*R(12);
  R(3)=c->macl;
  ST32(R(15),R(3));
L8c0d616a:;
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(14))==0;
  if(c->t) goto L8c0d61c0;
  R(1)=R(4);
  R(3)=LD32(R(15));
  R(1)+=0x38u;
  R(1)+=R(3);
  R(2)=LD32(R(1)+12);
  c->t=R(2)==R(13);
  if(c->t) goto L8c0d61de;
  R(2)=R(4);
  R(2)+=0x38u;
  R(0)=R(13);
  R(0)<<=2;
  ST32(R(15)+8,R(0));
  R(3)=LD32(R(15));
  fp_ld(c,2,R(0)+R(7));
  R(2)+=R(3);
  R(3)=R(0);
  R(1)=R(2);
  R(1)+=0x10u;
  R(1)+=R(3);
  fp_ld(c,3,R(1));
  fp_arith(c,0,2,3);
  { fp_st(c,2,R(0)+R(7)); goto L8c0d61de; }
L8c0d61c0:;
  R(2)=R(4);
  R(2)+=0x38u;
  R(0)=R(13);
  R(0)<<=2;
  ST32(R(15)+8,R(0));
  R(3)=LD32(R(15));
  fp_ld(c,2,R(0)+R(7));
  R(2)+=R(3);
  R(3)=R(0);
  R(1)=R(2);
  R(1)+=0x10u;
  R(1)+=R(3);
  fp_ld(c,3,R(1));
  fp_arith(c,0,2,3);
  fp_st(c,2,R(0)+R(7));
L8c0d61de:;
  R(13)+=0x1u;
  c->t=R(13)>=R(10);
  if(!c->t) goto L8c0d616a;
  R(2)=LD32(R(15)+4);
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(4)+52);
  c->t=R(2)>=R(3);
  if(!c->t) goto L8c0d6146;
L8c0d61f0:;
  R(12)=R(7);
  R(12)+=0x14u;
  R(13)=R(7);
L8c0d61f6:;
  R(3)=LD32(R(4)+52);
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0d6208; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0d6208:;
  fp_ld(c,1,R(13));
  fp_arith(c,3,1,3);
  fp_st(c,1,R(13));
  R(13)+=0x4u;
  c->t=R(13)>=R(12);
  if(!c->t) goto L8c0d61f6;
  R(2)=0x0u;
  ST32(R(15)+8,R(6));
  R(3)=LD32(R(5)+48);
  c->t=R(2)>=R(3);
  if(!c->t) goto L8c0d6222;
  {  goto L8c0d6336; }
L8c0d6222:;
  ST32(R(15),R(6));
  R(12)=LD32(R(15)+8);
  R(2)=LD32(R(15)+8);
  R(3)=R(12);
  R(12)<<=2;
  R(12)+=R(3);
  R(3)=R(2);
  R(2)<<=2;
  R(12)<<=2;
  R(2)+=R(3);
  R(2)<<=2;
  R(12)<<=2;
  ST32(R(15)+4,R(2));
  c->t=R(12)>>31;R(12)<<=1;
L8c0d623e:;
  R(3)=LD32(R(15)+12);
  R(13)=LD32(R(15));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  R(13)<<=2;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c0d6254; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c0d6254:;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(14))==0;
  { uint32_t k=c->t; fp_mov(c,5,3); if(k) goto L8c0d62e0; }
  R(0)=0x44u;
  R(1)=LD32(R(15));
  R(2)=LD32(R(4)+R(0));
  c->t=R(2)==R(1);
  if(!c->t) goto L8c0d62e0;
  R(0)=0x170u;
  R(3)=0x10000000u;
  R(0)+=R(5);
  R(2)=0x4f000000u;
  R(0)+=R(12);
  ST32(R(13)+R(0),R(3));
  R(0)=0x170u;
  c->fpul=R(2);
  R(0)+=R(5);
  R(0)+=R(12);
  R(3)=R(0);
  R(3)+=0x14u;
  R(3)+=R(13);
  R(0)=0x670u;
  ST32(R(3),R(8));
  R(3)=LD32(R(15)+4);
  R(0)+=R(5);
  c->fr[2]=c->fpul;
  R(0)+=R(3);
  ST32(R(13)+R(0),R(8));
  R(0)=R(13);
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,2,3,5);
  fp_arith(c,3,3,4);
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0d629e;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0d629e:;
  fp_ftrc(c,3);
  R(1)=0x730u;
  R(1)+=R(5);
  R(1)+=R(13);
  R(3)=c->fpul;
  R(3)&=R(11);
  ST32(R(15)+16,R(3));
  ST32(R(1),R(3));
  {  goto L8c0d6318; }
L8c0d62e0:;
  R(0)=0x170u;
  R(2)=0x4f000000u;
  R(0)+=R(5);
  R(0)+=R(12);
  c->fpul=R(2);
  ST32(R(13)+R(0),R(8));
  R(0)=0x670u;
  R(3)=LD32(R(15)+4);
  R(0)+=R(5);
  c->fr[2]=c->fpul;
  R(0)+=R(3);
  ST32(R(13)+R(0),R(8));
  R(0)=R(13);
  fp_ld(c,3,R(0)+R(7));
  fp_arith(c,2,3,5);
  fp_arith(c,3,3,4);
  fp_cmp(c,1,2,3);
  if(c->t) goto L8c0d6308;
  fp_arith(c,0,2,2);
  fp_arith(c,1,3,2);
L8c0d6308:;
  fp_ftrc(c,3);
  R(1)=0x730u;
  R(1)+=R(5);
  R(1)+=R(13);
  R(3)=c->fpul;
  R(3)&=R(11);
  ST32(R(15)+16,R(3));
  ST32(R(1),R(3));
L8c0d6318:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(15)+16);
  R(3)+=0x1u;
  c->t=R(3)>=R(10);
  R(8)+=R(2);
  { uint32_t k=!c->t; ST32(R(15),R(3)); if(k) goto L8c0d623e; }
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(5)+48);
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0d6336;
  {  goto L8c0d6222; }
L8c0d6336:;
  R(4)=R(6);
L8c0d6338:;
  R(3)=0x170u;
  R(2)=0xb0u;
  R(3)+=R(5);
  R(2)+=R(5);
  R(3)+=R(4);
  R(2)+=R(4);
  R(1)=LD32(R(3));
  R(4)+=0x4u;
  c->t=R(4)>=R(9);
  { uint32_t k=!c->t; ST32(R(2),R(1)); if(k) goto L8c0d6338; }
L8c0d634e:;
  R(0)=0x0u;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6364(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x0u;
  R(14)=0x8c2ecf08u;
  R(5)=R(4);
  R(0)=0x808u;
  R(6)=0x810u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  R(3)=0x8c0dc960u;
  R(6)+=R(14);
  ST32(R(14)+R(0),R(4));
  { c->pr=0x8c0d6380u; R(4)=0x7u; f_8c0dc960(c); }
  R(6)=0x814u;
  R(5)=0x0u;
  R(2)=0x8c0dc960u;
  R(6)+=R(14);
  { c->pr=0x8c0d638cu; R(4)=0x8u; f_8c0dc960(c); }
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d639a;
  R(0)=0x814u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=0xffffffffu;
  ST32(R(14)+R(0),R(3));
L8c0d639a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d63e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=R(4);
  R(0)=0x7fcu;
  R(14)=0x8c2ecf08u;
  ST32(R(15),R(4));
  R(2)=LD32(R(3)+20);
  R(3)=0x8c0d1c88u;
  ST32(R(14)+R(0),R(2));
  { c->pr=0x8c0d63f8u; R(4)=LD32(R(14)+24); f_8c0d1c88(c); }
  R(2)=LD32(R(15));
  R(1)=0x804u;
  R(3)=LD32(R(2)+12);
  R(2)=0xfffffffeu;
  R(1)+=R(14);
  R(3)+=0x1u;
  R(3)&=R(2);
  c->macl=R(0)*R(3);
  R(0)=c->macl;
  ST32(R(1),R(0));
  R(0)=0x804u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffff8u;
  R(1)=LD32(R(14)+R(0));
  R(0)+=0xfffffffcu;
  R(1)+=R(3);
  R(3)=LD32(R(14)+R(0));
  c->t=R(1)>=R(3);
  if(!c->t) goto L8c0d6430;
  R(0)=0x804u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffff4u;
  R(1)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(1)-=R(3);
  R(3)=0xfffc0000u;
  R(1)+=R(3);
  ST32(R(14)+R(0),R(1));
L8c0d6430:;
  R(0)=0x804u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffff4u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(1)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(2)-=R(3);
  R(2)-=R(1);
  ST32(R(14)+R(0),R(2));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6480(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0d1c88u;
  R(14)=R(4);
  R(13)=0x8c2ecf08u;
  { c->pr=0x8c0d6498u; R(4)=LD32(R(13)+24); f_8c0d1c88(c); }
  R(6)=R(15);
  R(2)=0x8c0db900u;
  R(5)=R(15);
  R(12)=R(0);
  R(6)+=0x4u;
  { c->pr=0x8c0d64a6u; R(4)=R(0); f_8c0db900(c); }
  R(0)=0x7e0u;
  R(11)=0x8c0d1b80u;
  { c->pr=0x8c0d64aeu; R(4)=LD32(R(13)+R(0)); f_8c0d1b80(c); }
  R(0)=0x7e4u;
  { uint32_t tg=R(11); c->pr=0x8c0d64b4u; R(4)=LD32(R(13)+R(0)); sh4_call(c,tg); }
  R(10)=0x8c0d1a36u;
  { c->pr=0x8c0d64bau; R(4)=LD32(R(15)); f_8c0d1a36(c); }
  R(1)=0x7e0u;
  R(1)+=R(13);
  ST32(R(1),R(0));
  { uint32_t tg=R(10); c->pr=0x8c0d64c4u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(1)=0x7e4u;
  R(1)+=R(13);
  ST32(R(1),R(0));
  R(3)=LD32(R(14)+8);
  R(1)=LD32(R(15));
  R(2)=LD32(R(3));
  ST32(R(2)+28,R(1));
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3));
  R(3)=0x1u;
  ST32(R(2)+20,R(12));
  R(2)=LD32(R(14)+12);
  c->t=R(2)>R(3);
  { uint32_t k=!c->t; R(4)=0x2u; if(k) goto L8c0d64f0; }
  R(2)=LD32(R(14)+8);
  R(0)=LD32(R(15)+4);
  R(1)=LD32(R(2)+4);
  ST32(R(1)+28,R(0));
  R(2)=LD32(R(14)+8);
  R(1)=LD32(R(2)+4);
  ST32(R(1)+20,R(12));
L8c0d64f0:;
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(4))==0;
  if(!c->t) goto L8c0d654c;
  R(1)=LD32(R(14)+12);
  c->t=R(1)>R(4);
  if(!c->t) goto L8c0d654c;
  R(2)=0x8c0db900u;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c0d6508u; R(4)=R(12); f_8c0db900(c); }
  R(0)=0x7e8u;
  { uint32_t tg=R(11); c->pr=0x8c0d650eu; R(4)=LD32(R(13)+R(0)); sh4_call(c,tg); }
  R(0)=0x7ecu;
  { uint32_t tg=R(11); c->pr=0x8c0d6514u; R(4)=LD32(R(13)+R(0)); sh4_call(c,tg); }
  { uint32_t tg=R(10); c->pr=0x8c0d6518u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(1)=0x7e8u;
  R(1)+=R(13);
  ST32(R(1),R(0));
  { uint32_t tg=R(10); c->pr=0x8c0d6522u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
  R(1)=0x7ecu;
  R(1)+=R(13);
  ST32(R(1),R(0));
  R(3)=LD32(R(14)+8);
  R(1)=LD32(R(15));
  R(2)=LD32(R(3)+8);
  ST32(R(2)+28,R(1));
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(3)+8);
  R(3)=0x3u;
  ST32(R(2)+20,R(12));
  R(2)=LD32(R(14)+12);
  c->t=R(2)>R(3);
  if(!c->t) goto L8c0d654c;
  R(2)=LD32(R(14)+8);
  R(0)=LD32(R(15)+4);
  R(1)=LD32(R(2)+12);
  ST32(R(1)+28,R(0));
  R(2)=LD32(R(14)+8);
  R(1)=LD32(R(2)+12);
  ST32(R(1)+20,R(12));
L8c0d654c:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6580(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(5)=0x8c2ecf08u;
  R(7)=0x0u;
  R(3)=0xb0u;
  R(0)=0x40u;
  R(6)=LD32(R(4)+36);
  R(1)=R(5);
  R(3)+=R(5);
  R(2)=0xb0u;
  ST32(R(5)+R(0),R(7));
  R(0)=0x44u;
  R(2)+=R(5);
  ST32(R(5)+60,R(7));
  R(1)+=0x34u;
  ST32(R(5)+56,R(7));
  ST32(R(5)+R(0),R(7));
  R(0)=0x4cu;
  ST32(R(5)+52,R(7));
  ST32(R(5)+R(0),R(7));
  ST32(R(6),R(3));
  R(3)=R(5);
  ST32(R(6)+16,R(2));
  R(3)+=0x70u;
  ST32(R(15),R(3));
  R(3)=0xffffffe0u;
  R(2)=LD32(R(15));
  R(2)&=R(3);
  ST32(R(6)+4,R(2));
  R(2)=0x150u;
  ST32(R(6)+8,R(1));
  R(1)=R(4);
  R(2)+=R(5);
  ST32(R(6)+12,R(2));
  R(1)+=0x38u;
  R(0)=R(7);
  ST32(R(6)+24,R(1));
  { R(15)+=0x4u; return; }
}
void f_8c0d65cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=0x8c0f36c8u;
  R(2)=R(15);
  R(2)+=0x4u;
  R(1)=LD32(R(3));
  R(5)=0x2u;
  R(0)=LD32(R(3)+4);
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=LD32(R(3)+12);
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(0)=LD32(R(3)+20);
  R(1)=LD32(R(3)+16);
  ST32(R(2)+16,R(1));
  ST32(R(2)+20,R(0));
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(5))==0;
  { uint32_t k=c->t; R(8)=0x0u; if(k) goto L8c0d6640; }
  { R(10)=R(5); goto L8c0d6642; }
L8c0d6640:;
  R(10)=LD32(R(4)+12);
L8c0d6642:;
  R(13)=0x8c2ecf08u;
  R(3)=R(8);
  R(9)=0x8c0dc960u;
  c->t=R(3)>=R(10);
  ST32(R(15),R(8));
  R(11)=LD32(R(4)+8);
  { uint32_t k=c->t; R(12)=0x1u; if(k) goto L8c0d6696; }
L8c0d6652:;
  R(14)=LD32(R(11));
  ST32(R(14),R(12));
  R(3)=LD32(R(13)+24);
  ST32(R(14)+8,R(3));
  R(3)=R(15);
  R(2)=LD32(R(13)+24);
  R(3)+=0x4u;
  R(2)<<=2;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  ST32(R(14)+4,R(1));
  ST32(R(14)+24,R(8));
  R(2)=LD32(R(13)+44);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(6)=R(14); if(k) goto L8c0d6678; }
  R(2)=LD32(R(14)+24);
  R(2)|=R(12);
  ST32(R(14)+24,R(2));
L8c0d6678:;
  R(5)=0x0u;
  R(6)+=0xcu;
  { uint32_t tg=R(9); c->pr=0x8c0d6680u; R(4)=0x7u; sh4_call(c,tg); }
  R(6)=R(14);
  R(5)=0x0u;
  R(6)+=0x10u;
  { uint32_t tg=R(9); c->pr=0x8c0d668au; R(4)=0x8u; sh4_call(c,tg); }
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  c->t=R(3)>=R(10);
  ST32(R(15),R(3));
  { uint32_t k=!c->t; R(11)+=0x4u; if(k) goto L8c0d6652; }
L8c0d6696:;
  R(0)=0x0u;
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
void f_8c0d66ac(SH4Ctx *c) {
  R(0)=LD32(R(4)+4);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0d66ba;
  R(3)=0x8c2ecf30u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d66cc;
L8c0d66ba:;
  R(0)=LD32(R(4)+12);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0d66c6;
  R(0)=LD32(R(4)+4);
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0d66cc;
L8c0d66c6:;
  R(0)=0xeeeeu;
  {  return; }
L8c0d66cc:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0d6700(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  R(3)=0x8c0f36e0u;
  R(2)=R(15);
  R(2)+=0x8u;
  R(12)=R(15);
  R(1)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  R(0)=LD32(R(3)+4);
  R(12)+=0x8u;
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(1)=LD32(R(3)+8);
  R(0)=LD32(R(3)+12);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(1)=LD32(R(3)+16);
  R(0)=LD32(R(3)+20);
  ST32(R(2)+16,R(1));
  ST32(R(2)+20,R(0));
  R(1)=LD32(R(3)+24);
  R(0)=LD32(R(3)+28);
  ST32(R(2)+24,R(1));
  ST32(R(2)+28,R(0));
  R(0)=LD32(R(3)+36);
  R(1)=LD32(R(3)+32);
  ST32(R(2)+32,R(1));
  ST32(R(2)+36,R(0));
  R(0)=LD32(R(3)+44);
  R(1)=LD32(R(3)+40);
  ST32(R(2)+40,R(1));
  ST32(R(2)+44,R(0));
  { uint32_t k=c->t; R(7)=0x7u; if(k) goto L8c0d6750; }
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0d6754;
L8c0d6750:;
  { R(13)=R(7); goto L8c0d6962; }
L8c0d6754:;
  R(3)=LD32(R(5));
  R(2)=0x90u;
  c->t=R(3)>=R(2);
  if(c->t) goto L8c0d6780;
  { R(13)=0x9u; goto L8c0d6962; }
L8c0d6780:;
  R(1)=LD32(R(5)+4);
  R(14)=0x3u;
  R(3)=LD32(R(5)+8);
  R(6)=0x1u;
  R(0)=LD32(R(5)+12);
  R(1)&=R(7);
  R(3)&=R(14);
  R(0)&=R(14);
  R(1)<<=16;
  R(0)<<=2;
  R(3)<<=16;
  R(1)<<=8;
  R(0)<<=2;
  R(1)|=R(3);
  R(3)=LD32(R(5)+20);
  R(0)<<=2;
  R(1)|=R(0);
  R(0)=LD32(R(5)+24);
  R(3)&=R(6);
  R(3)<<=2;
  R(0)&=R(6);
  R(1)|=R(3);
  R(3)=0x808c0108u;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)|=R(0);
  R(1)|=R(3);
  ST32(R(4),R(1));
  R(1)=0x1du;
  R(0)=LD32(R(5)+28);
  R(13)=0x0u;
  R(0)&=R(7);
  R(0)=sh4_shad(R(0),R(1));
  R(2)=LD32(R(5)+32);
  R(3)=0x1bu;
  R(7)=R(5);
  R(7)+=0x50u;
  R(2)&=R(14);
  R(2)=sh4_shad(R(2),R(3));
  R(0)|=R(2);
  R(2)=LD32(R(5)+36);
  R(2)&=R(6);
  R(2)<<=16;
  R(2)<<=8;
  R(2)<<=2;
  R(0)|=R(2);
  R(2)=LD32(R(5)+40);
  R(2)&=R(6);
  R(2)<<=16;
  R(2)<<=2;
  R(2)<<=2;
  R(0)|=R(2);
  R(0)|=0x8u;
  ST32(R(4)+4,R(0));
  ST32(R(15),R(7));
  R(7)=LD32(R(7));
  R(11)=LD32(R(15));
  c->t=R(7)>R(6);
  { uint32_t k=!c->t; R(11)=LD32(R(11)+4); if(k) goto L8c0d6814; }
  c->t=R(11)>R(6);
  if(!c->t) goto L8c0d6814;
  R(0)=R(7);
  R(0)<<=2;
  R(10)=LD32(R(12)+R(0));
  R(0)=R(11);
  R(0)<<=2;
  R(2)=LD32(R(12)+R(0));
  R(3)=0x1du;
  R(10)=sh4_shld(R(10),R(3));
  R(2)<<=16;
  R(2)<<=8;
  R(2)<<=2;
  { R(10)|=R(2); goto L8c0d6842; }
L8c0d6814:;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0d6840;
  R(10)=0xb0000000u;
  {  goto L8c0d6842; }
L8c0d6840:;
  R(10)=0x94000000u;
L8c0d6842:;
  R(7)=R(5);
  R(7)+=0x50u;
  R(3)=LD32(R(7)+8);
  R(1)=0x15u;
  R(2)=LD32(R(7)+12);
  R(3)&=R(6);
  R(0)=LD32(R(7)+28);
  R(3)<<=16;
  R(3)<<=8;
  R(2)&=R(6);
  c->t=R(3)>>31;R(3)<<=1;
  R(2)<<=16;
  R(10)|=R(3);
  R(3)=LD32(R(7)+16);
  R(2)<<=8;
  R(10)|=R(2);
  R(2)=0x16u;
  R(3)&=R(14);
  R(3)=sh4_shad(R(3),R(2));
  R(10)|=R(3);
  R(3)=LD32(R(7)+20);
  R(0)&=R(6);
  R(3)&=R(6);
  R(3)=sh4_shad(R(3),R(1));
  R(10)|=R(3);
  R(3)=LD32(R(7)+24);
  R(0)<<=16;
  R(3)&=R(6);
  R(3)<<=16;
  R(3)<<=2;
  R(3)<<=2;
  R(10)|=R(3);
  R(3)=LD32(R(7)+32);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=LD32(R(7)+40);
  R(3)&=R(14);
  R(3)<<=16;
  R(10)|=R(0);
  R(0)=LD32(R(7)+36);
  c->t=R(3)>>31;R(3)<<=1;
  R(10)|=R(3);
  R(3)=0xfu;
  R(0)&=R(14);
  R(0)=sh4_shad(R(0),R(3));
  R(3)=LD32(R(7)+44);
  R(10)|=R(0);
  R(0)=0xdu;
  R(2)&=R(14);
  R(2)=sh4_shad(R(2),R(0));
  R(0)=LD32(R(7)+48);
  R(3)&=R(6);
  R(10)|=R(2);
  R(2)=LD32(R(7)+52);
  R(3)<<=8;
  R(3)<<=2;
  R(2)&=R(14);
  R(0)&=0xfu;
  R(3)<<=2;
  R(2)<<=2;
  R(10)|=R(3);
  R(0)<<=8;
  R(2)<<=2;
  R(10)|=R(0);
  R(0)=0x8cu;
  R(2)<<=2;
  R(10)|=R(2);
  ST32(R(4)+8,R(10));
  R(3)=LD32(R(5)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d6960;
  R(0)=LD32(R(5)+R(0));
  R(3)=LD32(R(4)+8);
  R(0)=LD32(R(0)+24);
  R(7)=0x38000000u;
  R(0)&=0x3fu;
  R(3)|=R(0);
  R(0)=0x8cu;
  ST32(R(4)+8,R(3));
  R(2)=LD32(R(5)+R(0));
  R(3)=0x8000u;
  R(2)=LD32(R(2)+24);
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0d690a;
  R(6)=R(5);
  R(6)+=0x50u;
  ST32(R(15)+4,R(6));
  R(6)=LD32(R(6)+60);
  R(2)=0xc6000000u;
  R(0)=LD32(R(6)+8);
  R(1)=LD32(R(6)+24);
  R(7)&=R(0);
  R(0)=LD32(R(6)+28);
  R(1)&=R(2);
  R(0)>>=2;
  c->t=R(0)&1;R(0)>>=1;
  R(1)|=R(7);
  R(1)|=R(0);
  {  goto L8c0d6932; }
L8c0d690a:;
  R(6)=R(5);
  R(6)+=0x50u;
  ST32(R(15),R(6));
  R(3)=0x15u;
  R(6)=LD32(R(6)+60);
  R(2)=0xc0000000u;
  R(0)=LD32(R(6)+8);
  R(1)=LD32(R(6)+24);
  R(7)&=R(0);
  R(0)=LD32(R(15));
  R(1)&=R(2);
  R(0)=LD32(R(0)+56);
  R(1)|=R(7);
  R(0)&=0x3fu;
  R(0)=sh4_shld(R(0),R(3));
  R(1)|=R(0);
  R(0)=LD32(R(6)+28);
  R(0)>>=2;
  c->t=R(0)&1;R(0)>>=1;
  R(1)|=R(0);
L8c0d6932:;
  { ST32(R(4)+12,R(1)); goto L8c0d6962; }
L8c0d6960:;
  R(13)=0xeu;
L8c0d6962:;
  R(0)=R(13);
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6980(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  R(7)=0x0u;
  { uint32_t k=c->t; R(6)=R(7); if(k) goto L8c0d698c; }
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0d6990;
L8c0d698c:;
  { R(4)=0x7u; goto L8c0d69d4; }
L8c0d6990:;
  R(2)=LD32(R(5));
  R(3)=0x90u;
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0d699c;
  { R(4)=0x9u; goto L8c0d69d4; }
L8c0d699c:;
  R(1)=LD32(R(5)+44);
  R(2)=0xe0000000u;
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0d69a6;
  R(6)=0x40u;
L8c0d69a6:;
  R(0)=LD32(R(5)+4);
  R(2)=0x80804000u;
  R(0)&=0x7u;
  R(0)<<=16;
  R(0)<<=8;
  R(3)=R(0);
  R(0)=LD32(R(5)+8);
  R(0)&=0x3u;
  R(0)<<=16;
  R(3)|=R(0);
  R(3)|=R(6);
  R(3)|=R(2);
  ST32(R(4),R(3));
  R(3)=0x1bu;
  R(0)=LD32(R(5)+32);
  R(1)=LD32(R(5)+44);
  R(0)&=0x3u;
  R(0)=sh4_shad(R(0),R(3));
  R(0)|=R(1);
  R(1)=0x20000u;
  R(0)|=R(1);
  ST32(R(4)+4,R(0));
  R(4)=R(7);
L8c0d69d4:;
  { R(0)=R(4); return; }
}
void f_8c0d6a00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0e0a80u;
  { c->pr=0x8c0d6a0cu; R(14)=R(4); f_8c0e0a80(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d6a16;
  { R(0)=R(4); goto L8c0d6a86; }
L8c0d6a16:;
  R(0)=LD32(R(14));
  R(2)=0x8c2ed868u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  { uint32_t k=!c->t; R(4)=LD32(R(2)); if(k) goto L8c0d6a5a; }
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d6a40;
  R(6)=R(14);
  R(3)=0x8c0e0e0au;
  R(6)+=0x1cu;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d6a32u; R(4)=R(14); f_8c0e0e0a(c); }
  R(2)=0x8c0dba00u;
  R(4)=0x1u;
  R(5)=R(0);
  { c->pr=0x8c0d6a3cu; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c0dba00(c); }
  {  goto L8c0d6a56; }
L8c0d6a40:;
  R(6)=R(14);
  R(1)=0x8c0e0e0au;
  R(6)+=0x1cu;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d6a4cu; R(4)=R(14); f_8c0e0e0a(c); }
  R(3)=0x8c0dba00u;
  R(4)=0x0u;
  R(5)=R(0);
  { c->pr=0x8c0d6a56u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c0dba00(c); }
L8c0d6a56:;
  { R(13)=R(0); goto L8c0d6a78; }
L8c0d6a5a:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d6a68;
  R(5)=LD32(R(14)+20);
  R(6)=R(14);
  R(6)+=0x1cu;
  { R(4)=0x1u; goto L8c0d6a70; }
L8c0d6a68:;
  R(5)=LD32(R(14)+20);
  R(6)=R(14);
  R(4)=0x0u;
  R(6)+=0x1cu;
L8c0d6a70:;
  R(1)=0x8c0db820u;
  { c->pr=0x8c0d6a76u;  f_8c0db820(c); }
  R(13)=R(0);
L8c0d6a78:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0d6a84;
  R(2)=0x8c0d2ba0u;
  { c->pr=0x8c0d6a84u; R(4)=0x3u; f_8c0d2ba0(c); }
L8c0d6a84:;
  R(0)=R(13);
L8c0d6a86:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6ac0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(0)=LD32(R(14));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  { uint32_t k=!c->t; R(13)=R(5); if(k) goto L8c0d6ae2; }
  R(6)=LD32(R(14)+12);
  R(5)=R(13);
  R(7)=LD32(R(14)+24);
  { c->pr=0x8c0d6adeu; R(4)=LD32(R(14)+28); f_8c0d6b34(c); }
  {  goto L8c0d6b28; }
L8c0d6ae2:;
  R(2)=0x4000000u;
  R(4)=LD32(R(14)+24);
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c0d6b1a;
  R(1)=0x80000000u;
  c->t=(R(1)&R(4))==0;
  if(c->t) goto L8c0d6b1a;
  R(2)=0x40000000u;
  c->t=(R(2)&R(4))==0;
  if(!c->t) goto L8c0d6b1a;
  R(1)=0x8000u;
  c->t=(R(1)&R(4))==0;
  if(!c->t) goto L8c0d6b1a;
  R(2)=0x8c0e0d72u;
  R(5)=LD32(R(14)+12);
  { c->pr=0x8c0d6b04u; R(4)=R(5); f_8c0e0d72(c); }
  R(6)=R(0);
  ST32(R(15),R(0));
  R(0)=0x8c0f3c64u;
  R(6)<<=2;
  R(4)=LD32(R(14)+28);
  R(5)=R(13);
  R(6)=LD32(R(6)+R(0));
  R(7)=0x0u;
  R(6)+=0x4u;
  { R(4)+=0x4u; goto L8c0d6b22; }
L8c0d6b1a:;
  R(4)=LD32(R(14)+28);
  R(7)=0x0u;
  R(6)=LD32(R(14)+20);
  R(5)=R(13);
L8c0d6b22:;
  R(3)=0x8c0dbe00u;
  { c->pr=0x8c0d6b28u;  f_8c0dbe00(c); }
L8c0d6b28:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6b34(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(5);
  R(3)=0x8c0e0d72u;
  R(14)=R(4);
  ST32(R(15),R(6));
  ST32(R(15)+4,R(7));
  R(5)=LD32(R(15));
  { c->pr=0x8c0d6b52u; R(4)=R(5); f_8c0e0d72(c); }
  R(3)=0x80000000u;
  R(4)=R(0);
  R(2)=LD32(R(15)+4);
  R(11)=R(0);
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(11)<<=2; if(k) goto L8c0d6bc0; }
  R(0)=0x8c0f3c48u;
  R(12)=LD32(R(11)+R(0));
  R(0)=0x8c0f3cbcu;
  R(10)=LD32(R(11)+R(0));
  { R(10)+=0xau; goto L8c0d6bc8; }
L8c0d6bc0:;
  R(0)=0x8c0f3c2cu;
  R(12)=LD32(R(11)+R(0));
  R(0)=0x8c0f3c90u;
  R(10)=LD32(R(11)+R(0));
L8c0d6bc8:;
  R(3)=0x8c0dbe00u;
  R(5)=R(13);
  R(7)=0x0u;
  R(6)=R(12);
  { c->pr=0x8c0d6bd4u; R(4)=R(14); f_8c0dbe00(c); }
  R(2)=0x800u;
  R(13)+=R(12);
  R(5)=R(13);
  R(7)=0x0u;
  R(14)+=R(2);
  R(6)=R(10);
  R(4)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0dbe00u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0dbe00(c); return; } }
}
void f_8c0d6c20(SH4Ctx *c) {
  R(0)=0x82cu;
  R(3)=0x1eu;
  R(5)=0x8c2ecf08u;
  c->t=(int32_t)R(4)>0;
  ST32(R(5)+R(0),R(3));
  if(c->t) goto L8c0d6c34;
  R(4)=0u-R(4);
  R(2)=R(4);
  R(2)+=0x1u;
  ST32(R(5)+R(0),R(2));
L8c0d6c34:;
  R(0)=0x7f4u;
  R(4)+=0xffffffffu;
  ST32(R(5)+R(0),R(4));
  { R(0)=0x0u; return; }
}
void f_8c0d6c60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(14)=0x1u;
  R(4)=0xa0702c00u;
  R(5)=0x8c2ee730u;
  R(7)=R(14);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0d7f00u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d6c8cu; R(6)=0x4u; f_8c0d7f00(c); }
  R(3)=0x8c2ee730u;
  R(7)=R(14);
  R(5)=0xa0702c00u;
  R(2)=LD32(R(3));
  R(4)=R(3);
  R(2)|=R(14);
  ST32(R(3),R(2));
  R(3)=0x8c0d8220u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d6ca4u; R(6)=0x4u; f_8c0d8220(c); }
  R(15)+=0x10u;
  R(0)=LD32(R(15));
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(4)=0x100u;
L8c0d6cba:;
  R(4)-=1;c->t=R(4)==0;
  if(!c->t) goto L8c0d6cba;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6cdc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0f4334u;
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d6cfc;
  R(14)=0xd000001u;
  {  goto L8c0d6d7c; }
L8c0d6cfc:;
  R(13)=0x158u;
  R(13)+=R(14);
  R(0)=LD32(R(13)+8);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d6d16;
  R(3)=0x8c0d6f04u;
  R(5)=R(15);
  R(0)=0x1bcu;
  { c->pr=0x8c0d6d10u; R(4)=LD32(R(14)+R(0)); f_8c0d6f04(c); }
  R(2)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d6d1c;
L8c0d6d16:;
  R(14)=0xb000003u;
  {  goto L8c0d6d7c; }
L8c0d6d1c:;
  R(3)=0x8c0f4334u;
  R(12)=0x0u;
  R(0)=0x168u;
  R(10)=R(12);
  R(11)=LD32(R(3));
  R(11)=LD32(R(11)+R(0));
  c->t=(int32_t)R(11)>0;
  { uint32_t k=!c->t; R(9)=R(12); if(k) goto L8c0d6d72; }
  R(8)=0x1cu;
L8c0d6d30:;
  R(4)=LD32(R(13)+28);
  c->macl=R(4)*R(8);
  R(4)+=0x1u;
  ST32(R(13)+28,R(4));
  R(2)=LD32(R(13)+28);
  R(4)=c->macl;
  R(3)=LD32(R(13)+12);
  c->t=R(2)==R(11);
  R(4)+=R(3);
  if(!c->t) goto L8c0d6d46;
  ST32(R(13)+28,R(12));
L8c0d6d46:;
  R(0)=LD32(R(4)+20);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d6d6c;
  R(3)=0x8c0e288cu;
  { c->pr=0x8c0d6d52u;  f_8c0e288c(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d6d7c;
  R(10)+=0x1u;
  R(0)=R(10);
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0d6d72;
  R(2)=0x8c0f4334u;
  R(0)=0x16cu;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d6d72;
L8c0d6d6c:;
  R(9)+=0x1u;
  c->t=(int32_t)R(9)>=(int32_t)R(11);
  if(!c->t) goto L8c0d6d30;
L8c0d6d72:;
  R(2)=0x8c0e27c0u;
  { c->pr=0x8c0d6d78u;  f_8c0e27c0(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
L8c0d6d7c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0d6d88;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0d6cdcu;
  { c->pr=0x8c0d6d88u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0d6d88:;
  R(0)=R(14);
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
void f_8c0d6dc8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(14)=0x0u;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=0x8c0f4334u;
  R(5)=LD32(R(2));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0d6df2;
  R(14)=0xd000001u;
  {  goto L8c0d6e34; }
L8c0d6df2:;
  R(2)=0x158u;
  R(3)=0x100u;
  R(5)+=R(2);
  R(6)=LD32(R(5)+20);
  c->t=R(6)==R(3);
  { uint32_t k=!c->t; R(7)=LD32(R(5)+16); if(k) goto L8c0d6e06; }
  R(14)=0xa000001u;
  {  goto L8c0d6e34; }
L8c0d6e06:;
  R(6)=LD32(R(5)+24);
  R(3)=0x1cu;
  c->macl=R(6)*R(3);
  R(6)+=0x1u;
  ST32(R(5)+24,R(6));
  R(1)=LD32(R(5)+24);
  R(6)=c->macl;
  R(2)=LD32(R(5)+12);
  c->t=R(1)==R(7);
  R(6)+=R(2);
  { uint32_t k=!c->t; R(3)=0x1u; if(k) goto L8c0d6e22; }
  R(0)=0x0u;
  ST32(R(5)+24,R(0));
L8c0d6e22:;
  ST32(R(6)+20,R(3));
  R(2)=R(4);
  R(3)=0x8c09c344u;
  R(1)=R(6);
  { c->pr=0x8c0d6e2eu; R(0)=0x14u; f_8c09c344(c); }
  R(2)=LD32(R(5)+20);
  R(2)+=0x1u;
  ST32(R(5)+20,R(2));
L8c0d6e34:;
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(1);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0d6e52;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0d6dc8u;
  { c->pr=0x8c0d6e52u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0d6e52:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6e7c(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d6e8e;
  R(14)=0xd000001u;
  {  goto L8c0d6e9c; }
L8c0d6e8e:;
  R(3)=0x8c2ee734u;
  R(2)=0x85u;
  ST32(R(3),R(2));
  R(2)=0x8c0d6dc8u;
  { c->pr=0x8c0d6e9au; R(4)=R(3); f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0d6e9c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0d6ea8;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0d6e7cu;
  { c->pr=0x8c0d6ea8u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0d6ea8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6ecc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d6c60u;
  { c->pr=0x8c0d6ed4u;  f_8c0d6c60(c); }
  R(2)=0x1u;
  R(7)=0x80000u;
  R(5)=0xa0800000u;
  R(3)=0x0u;
  R(4)=0x8c0f4328u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0d8220u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d6ee8u; R(6)=0x4u; f_8c0d8220(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d6f04(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x200000u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  { uint32_t k=c->t; ST32(R(15),R(5)); if(k) goto L8c0d6f30; }
  R(1)=0x3u;
  R(3)=0x8c0e2c38u;
  R(2)=0xfffffffcu;
  R(5)=R(15);
  R(1)&=R(4);
  ST32(R(15)+4,R(1));
  R(4)&=R(2);
  { c->pr=0x8c0d6f22u; R(5)+=0x8u; f_8c0e2c38(c); }
  R(1)=R(15);
  R(3)=LD32(R(15)+4);
  R(1)+=0x8u;
  R(2)=LD32(R(15));
  R(1)+=R(3);
  R(1)=(int32_t)(int8_t)LD8(R(1));
  ST8(R(2),R(1));
L8c0d6f30:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d6f40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0f4334u;
  R(4)=0x0u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0d6f5e; }
  R(3)=0x8c0f4338u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d6f64;
L8c0d6f5e:;
  R(13)=0xd000001u;
  {  goto L8c0d6f88; }
L8c0d6f64:;
  R(14)=R(4);
L8c0d6f66:;
  R(12)=0x8c0e2c38u;
  R(5)=R(15);
  { c->pr=0x8c0d6f6eu; R(4)=R(14); f_8c0e2c38(c); }
  R(3)=LD32(R(15));
  R(4)=0xff000000u;
  R(5)=0xea000000u;
  R(3)&=R(4);
  c->t=R(3)==R(5);
  if(c->t) goto L8c0d6f80;
  R(4)=0xb000001u;
  { R(13)=R(4); goto L8c0d6f88; }
L8c0d6f80:;
  R(4)=0x20u;
  R(14)+=0x4u;
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(!c->t) goto L8c0d6f66;
L8c0d6f88:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d6f94;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0d6f40u;
  { c->pr=0x8c0d6f94u; R(5)=R(13); f_8c0d6fc8(c); }
L8c0d6f94:;
  R(0)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d6fc8(SH4Ctx *c) {
  R(3)=0x8c0f432cu;
  R(2)=0x8c0f4330u;
  ST32(R(3),R(4));
  { ST32(R(2),R(5)); return; }
}
void f_8c0d6fdc(SH4Ctx *c) {
  R(3)=0x8c0f4334u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d6ffc;
  R(1)=0x8c0f4338u;
  R(0)=LD32(R(1));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d6ffc;
  R(0)=0x16cu;
  R(3)=LD32(R(4)+R(0));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0d6ffc;
  R(1)=0x8c0d6cdcu;
  { c->pr=0x8c0d6ffcu;  f_8c0d6cdc(c); }
L8c0d6ffc:;
  R(2)=0x8c0e2a7cu;
  { c->pr=0x8c0d7002u;  f_8c0e2a7c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0d701c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  R(5)=0xff00u;
  R(14)=0x8c0f3740u;
  {  goto L8c0d7048; }
L8c0d702a:;
  R(7)=R(4)&0xFFFF;
  R(0)=R(7);
  R(3)=0xfffffff8u;
  R(0)=sh4_shad(R(0),R(3));
  {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(3)=(uint32_t)v;}
  R(0)=R(0)&0xFF;
  R(2)=R(7);
  R(3)=R(3)&0xFF;
  R(0)^=R(3);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)<<=8;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)&=R(5);
  R(4)=R(2);
  R(4)^=R(1);
L8c0d7048:;
  c->t=(int32_t)R(6)>0;
  { uint32_t k=c->t; R(6)+=0xffffffffu; if(k) goto L8c0d702a; }
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7056(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(6)=0xau;
  ST32(R(15)+4,R(4));
  ST16(R(15),R(5));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0d7066u; R(4)=0x0u; f_8c0d701c(c); }
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(4)=~R(0);
  R(4)=R(4)&0xFFFF;
  R(2)=R(2)&0xFFFF;
  c->t=R(2)==R(4);
  if(c->t) goto L8c0d707a;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d707a:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d7084(SH4Ctx *c) {
  R(0)=0xf0u;
  R(5)=(uint32_t)(int32_t)(int8_t)R(4);
  R(3)=0xfffffffcu;
  R(0)&=R(5);
  R(0)=sh4_shad(R(0),R(3));
  R(3)=R(0);
  R(0)<<=2;
  R(2)=0xfu;
  R(0)+=R(3);
  R(2)&=R(5);
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)+=R(2); return; }
}
void f_8c0d709e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  { c->pr=0x8c0d70aau; {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;} f_8c0d7084(c); }
  ST32(R(15)+4,R(0));
  { c->pr=0x8c0d70b0u; {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;} f_8c0d7084(c); }
  ST32(R(15),R(0));
  { c->pr=0x8c0d70b6u; R(4)=(int32_t)(int8_t)LD8(R(14)); f_8c0d7084(c); }
  R(2)=LD32(R(15)+4);
  R(3)=0x3cu;
  R(4)=R(0);
  R(1)=LD32(R(15));
  c->macl=R(2)*R(3);
  R(3)=0x4bu;
  R(0)=c->macl;
  R(0)+=R(1);
  c->macl=R(0)*R(3);
  R(0)=c->macl;
  R(0)+=R(4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d70d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(11)=R(5); if(k) goto L8c0d70f2; }
  { R(0)=0xffffffffu; goto L8c0d71de; }
L8c0d70f2:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(0)<<=8;
  R(3)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(0)+=R(3);
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c0d7104;
  { R(0)=0xfffffffeu; goto L8c0d71de; }
L8c0d7104:;
  R(14)=R(15);
  R(12)=R(4);
  R(7)=0x0u;
  R(6)=0x40u;
  R(14)+=0x4u;
  R(8)=0x7u;
  R(12)+=0x4u;
  R(10)=0x6u;
  R(9)=0xfu;
  { R(5)=R(7); goto L8c0d7176; }
L8c0d711a:;
  R(3)=R(14);
  R(2)=R(14);
  R(3)+=0xcu;
  R(4)=R(8);
  R(3)+=R(5);
  R(2)+=R(5);
  ST8(R(2),R(7));
  ST8(R(3),R(7));
L8c0d712a:;
  R(0)=R(4);
  R(13)=R(14);
  c->t=(int32_t)R(0)==7;
  R(13)+=0xcu;
  { uint32_t k=!c->t; R(13)+=R(5); if(k) goto L8c0d7150; }
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(3)=(uint32_t)v;}
  R(2)=(int32_t)(int8_t)LD8(R(13));
  R(3)&=R(6);
  c->t=R(3)>>31;R(3)<<=1;
  R(2)|=R(3);
  { ST8(R(13),R(2)); goto L8c0d7162; }
L8c0d7150:;
  R(2)=R(10);
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(3)=(uint32_t)v;}
  R(2)-=R(4);
  R(1)=(int32_t)(int8_t)LD8(R(13));
  R(2)=0u-R(2);
  R(3)&=R(6);
  R(3)=sh4_shad(R(3),R(2));
  R(1)|=R(3);
  ST8(R(13),R(1));
L8c0d7162:;
  R(4)+=0xffffffffu;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0d712a;
  R(0)=(int32_t)(int8_t)LD8(R(14)+12);
  R(0)&=R(9);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d7174;
  { R(0)=0xfffffffbu; goto L8c0d71de; }
L8c0d7174:;
  R(5)+=0x1u;
L8c0d7176:;
  R(2)=0xcu;
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(!c->t) goto L8c0d711a;
  R(13)=R(14);
  R(13)+=0xcu;
  R(0)=(int32_t)(int8_t)LD8(R(13)+10);
  R(0)=R(0)&0xFF;
  R(0)<<=8;
  R(5)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(13)+11);
  R(0)=R(0)&0xFF;
  R(5)|=R(0);
  { c->pr=0x8c0d7192u; R(4)=R(13); f_8c0d7056(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d719a;
  { R(0)=0xfffffffdu; goto L8c0d71de; }
L8c0d719a:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+13);
  { c->pr=0x8c0d71a0u; R(4)=R(0); f_8c0d7084(c); }
  ST32(R(11),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+15);
  { c->pr=0x8c0d71a8u; R(4)=R(0); f_8c0d7084(c); }
  ST32(R(11)+4,R(0));
  R(0)=0x10u;
  { c->pr=0x8c0d71b0u; R(4)=(int32_t)(int8_t)LD8(R(14)+R(0)); f_8c0d7084(c); }
  ST32(R(11)+8,R(0));
  R(0)=0x11u;
  { c->pr=0x8c0d71b8u; R(4)=(int32_t)(int8_t)LD8(R(14)+R(0)); f_8c0d7084(c); }
  R(2)=R(14);
  R(2)+=0xcu;
  ST32(R(11)+12,R(0));
  ST32(R(15),R(2));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)<<=16;
  R(3)<<=8;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+4);
  { c->pr=0x8c0d71ceu; R(4)+=0x7u; f_8c0d709e(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(0)|=R(2);
  ST32(R(11)+16,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+14);
  { c->pr=0x8c0d71dau; R(4)=R(0); f_8c0d7084(c); }
  ST32(R(11)+20,R(0));
  R(0)=0x0u;
L8c0d71de:;
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
void f_8c0d71f4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0da944u;
  { c->pr=0x8c0d71fcu;  f_8c0da944(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0d7202(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(14)=R(15);
  R(14)+=0x4u;
  ST32(R(15),R(5));
  R(13)=R(6);
  R(2)=0x0u;
  R(6)=0x1fffffffu;
  R(5)=R(14);
  R(0)=R(7);
  c->t=(int32_t)R(0)==1;
  R(5)+=0x8u;
  ST32(R(14),R(4));
  R(3)=LD32(R(15));
  ST32(R(14)+4,R(3));
  ST32(R(14)+12,R(2));
  { uint32_t k=!c->t; R(6)&=R(13); if(k) goto L8c0d722e; }
  { R(4)=0x11u; goto L8c0d7238; }
L8c0d722e:;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0d723c;
  R(2)=0xa0000000u;
  R(4)=0x10u;
  R(6)|=R(2);
L8c0d7238:;
  { ST32(R(5),R(6)); goto L8c0d7240; }
L8c0d723c:;
  { R(0)=0xffffffeeu; goto L8c0d7278; }
L8c0d7240:;
  R(2)=0x8c0da908u;
  { c->pr=0x8c0d7246u; R(5)=R(14); f_8c0da908(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0d7276;
  R(3)=0xffffffe4u;
  R(0)=R(13);
  R(0)=sh4_shad(R(0),R(3));
  R(0)&=0xeu;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c0d7276;
  R(5)=LD32(R(15));
  R(3)=0x1fu;
  R(5)<<=8;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  c->t=(R(3)&R(13))==0;
  if(!c->t) goto L8c0d7270;
  R(3)=0x8c0cf89cu;
  { c->pr=0x8c0d726cu; R(4)=R(13); f_8c0cf89c(c); }
  {  goto L8c0d7276; }
L8c0d7270:;
  R(3)=0x8c0cfafau;
  { c->pr=0x8c0d7276u; R(4)=R(13); f_8c0cfafa(c); }
L8c0d7276:;
  R(0)=R(14);
L8c0d7278:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7282(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(15);
  R(3)=0x8c0da908u;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(5));
  R(5)=R(14);
  { c->pr=0x8c0d7296u; R(4)=0x1cu; f_8c0da908(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d729e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=R(15);
  R(3)=0x8c0da980u;
  R(13)=R(6);
  R(14)=R(5);
  ST32(R(12),R(5));
  ST32(R(12)+4,R(13));
  { c->pr=0x8c0d72b8u; R(5)=R(12); f_8c0da980(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0d72e8;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0d72e8;
  R(3)=0xffffffe4u;
  R(0)=R(14);
  R(0)=sh4_shad(R(0),R(3));
  R(0)&=0xfu;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c0d72e8;
  R(3)=0x1fu;
  c->t=(R(3)&R(14))==0;
  if(!c->t) goto L8c0d72e0;
  R(3)=0x8c0cf89cu;
  R(5)=R(13);
  { c->pr=0x8c0d72dcu; R(4)=R(14); f_8c0cf89c(c); }
  {  goto L8c0d72e8; }
L8c0d72e0:;
  R(3)=0x8c0cfafau;
  R(5)=R(13);
  { c->pr=0x8c0d72e8u; R(4)=R(14); f_8c0cfafa(c); }
L8c0d72e8:;
  R(0)=R(12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d72f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0da91cu;
  R(14)=R(5);
  { c->pr=0x8c0d7304u; R(5)=R(15); f_8c0da91c(c); }
  R(4)=R(0);
  R(0)=R(4);
  R(5)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0d7326;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d732a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d7334;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0d733a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d733e;
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0d7342;
  {  goto L8c0d73a6; }
L8c0d7326:;
  { R(4)=0x0u; goto L8c0d73a6; }
L8c0d732a:;
  ST32(R(14),R(5));
  R(4)=0x4u;
  R(2)=LD32(R(15)+12);
  { ST32(R(14)+8,R(2)); goto L8c0d73a6; }
L8c0d7334:;
  R(4)=0x1u;
  { ST32(R(14),R(5)); goto L8c0d73a6; }
L8c0d733a:;
  { R(4)=0x41u; goto L8c0d73a6; }
L8c0d733e:;
  { R(4)=0x43u; goto L8c0d73a6; }
L8c0d7342:;
  R(3)=LD32(R(15)+4);
  ST32(R(14)+4,R(3));
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=0x5u; if(k) goto L8c0d7376; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d737c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d7380;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0d7384;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d7388;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0d738c;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0d7390;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0d7394;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c0d7398;
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0d739c;
  {  goto L8c0d73a2; }
L8c0d7376:;
  R(3)=0xffffffe5u;
  { ST32(R(14),R(3)); goto L8c0d73a6; }
L8c0d737c:;
  { R(1)=0xffffffe4u; goto L8c0d739e; }
L8c0d7380:;
  { R(2)=0xffffffe3u; goto L8c0d73a4; }
L8c0d7384:;
  { R(1)=0xffffffe2u; goto L8c0d739e; }
L8c0d7388:;
  { R(2)=0xffffffe1u; goto L8c0d73a4; }
L8c0d738c:;
  { R(1)=0xffffffe0u; goto L8c0d739e; }
L8c0d7390:;
  { R(2)=0xffffffdfu; goto L8c0d73a4; }
L8c0d7394:;
  { R(1)=0xffffffdeu; goto L8c0d739e; }
L8c0d7398:;
  { R(2)=0xffffffddu; goto L8c0d73a4; }
L8c0d739c:;
  R(1)=0xffffffdcu;
L8c0d739e:;
  { ST32(R(14),R(1)); goto L8c0d73a6; }
L8c0d73a2:;
  R(2)=0xffffffe6u;
L8c0d73a4:;
  ST32(R(14),R(2));
L8c0d73a6:;
  R(0)=R(4);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d73b0(SH4Ctx *c) {
  R(3)=0x8c0da9a8u;
  {  { f_8c0da9a8(c); return; } }
}
void f_8c0d73b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x0u;
  R(2)=0x8c0da908u;
  R(14)=R(15);
  R(5)=R(14);
  ST32(R(14),R(4));
  ST32(R(14)+4,R(3));
  { c->pr=0x8c0d73ccu; R(4)=0x1bu; f_8c0da908(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d73d4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0da908u;
  R(5)=0x0u;
  { c->pr=0x8c0d73deu; R(4)=0x18u; f_8c0da908(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d7408(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0da958u;
  { c->pr=0x8c0d7410u;  f_8c0da958(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0d741c; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0d741c:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d741c(SH4Ctx *c) {
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d7424(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0da994u;
  { c->pr=0x8c0d742cu;  f_8c0da994(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d7432(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(15);
  R(3)=0x0u;
  R(2)=0x8c0da908u;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(5));
  R(5)=R(14);
  ST32(R(14)+8,R(6));
  ST32(R(14)+12,R(3));
  { c->pr=0x8c0d744cu; R(4)=0x14u; f_8c0da908(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7454(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(15);
  R(3)=0x0u;
  R(2)=0x8c0da908u;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(5));
  R(5)=R(14);
  ST32(R(14)+8,R(6));
  ST32(R(14)+12,R(3));
  { c->pr=0x8c0d746eu; R(4)=0x15u; f_8c0da908(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7476(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0da908u;
  R(5)=0x0u;
  { c->pr=0x8c0d7480u; R(4)=0x16u; f_8c0da908(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d7486(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x0u;
  R(2)=0x8c0da908u;
  R(14)=R(15);
  R(5)=R(14);
  ST32(R(14),R(4));
  ST32(R(14)+4,R(3));
  { c->pr=0x8c0d749cu; R(4)=0x17u; f_8c0da908(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d74a4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(15);
  R(3)=0x8c0da908u;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(5));
  R(5)=R(14);
  { c->pr=0x8c0d74b8u; R(4)=0x13u; f_8c0da908(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d74c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(15);
  R(3)=0x0u;
  R(2)=0x8c0da908u;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(5));
  R(5)=R(14);
  ST32(R(14)+8,R(6));
  ST32(R(14)+12,R(3));
  { c->pr=0x8c0d74dau; R(4)=0x22u; f_8c0da908(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d74e2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0da930u;
  { c->pr=0x8c0d74eau;  f_8c0da930(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0d74f0(SH4Ctx *c) {
  R(3)=0x8c0da9bcu;
  {  { f_8c0da9bc(c); return; } }
}
void f_8c0d74f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(15);
  R(3)=0x8c0da908u;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(5));
  R(5)=R(14);
  ST32(R(14)+8,R(6));
  ST32(R(14)+12,R(7));
  { c->pr=0x8c0d750eu; R(4)=0x24u; f_8c0da908(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7516(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x0u;
  R(2)=0x8c0da908u;
  R(14)=R(15);
  R(5)=R(14);
  ST32(R(14),R(4));
  ST32(R(14)+4,R(3));
  { c->pr=0x8c0d752cu; R(4)=0x28u; f_8c0da908(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7534(SH4Ctx *c) {
  R(0)=0x8c0f3940u;
  {  return; }
}
void f_8c0d7554(SH4Ctx *c) {
  R(3)=0x61u;
  R(5)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0d7564;
  R(1)=0x7au;
  c->t=(int32_t)R(5)>(int32_t)R(1);
  if(c->t) goto L8c0d7564;
  R(4)+=0xffffffe0u;
L8c0d7564:;
  { R(0)=R(4); return; }
}
void f_8c0d7568(SH4Ctx *c) {
  c->t=(int32_t)R(6)>0;
  R(7)=R(4);
  { uint32_t k=!c->t; R(4)=R(5); if(k) goto L8c0d757c; }
L8c0d7570:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  R(6)+=0xffffffffu;
  c->t=(int32_t)R(6)>0;
  ST8(R(4),R(3));
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c0d7570; }
L8c0d757c:;
  {  return; }
}
void f_8c0d7580(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(14)>0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(12)=R(5); if(k) goto L8c0d75be; }
L8c0d7594:;
  R(2)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d75ae;
  { c->pr=0x8c0d759eu; {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(4)=(uint32_t)v;} f_8c0d7554(c); }
  R(8)=(uint32_t)(int32_t)(int8_t)R(0);
  { c->pr=0x8c0d75a4u; {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(4)=(uint32_t)v;} f_8c0d7554(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=R(8)==R(0);
  if(!c->t) goto L8c0d75b4;
  {  goto L8c0d75b8; }
L8c0d75ae:;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d75be;
L8c0d75b4:;
  { R(0)=0x0u; goto L8c0d75c0; }
L8c0d75b8:;
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>0;
  if(c->t) goto L8c0d7594;
L8c0d75be:;
  R(0)=0x1u;
L8c0d75c0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d75cc(SH4Ctx *c) {
  {  { f_8c0d75d8(c); return; } }
}
void f_8c0d75d0(SH4Ctx *c) {
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(2)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  c->t=R(3)==R(2);
  if(!c->t) { f_8c0d75e4(c); return; }
  { f_8c0d75d8(c); return; }
}
void f_8c0d75d8(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) { f_8c0d75d0(c); return; }
  R(1)=(int32_t)(int8_t)LD8(R(5));
  c->t=(R(1)&R(1))==0;
  if(c->t) { f_8c0d75e8(c); return; }
  { f_8c0d75e4(c); return; }
}
void f_8c0d75e4(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0d75e8(SH4Ctx *c) {
  R(0)=0x1u;
  {  return; }
}
void f_8c0d75ee(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { R(13)=R(5); goto L8c0d760c; }
L8c0d75fc:;
  { c->pr=0x8c0d7600u; {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;} f_8c0d7554(c); }
  R(8)=(uint32_t)(int32_t)(int8_t)R(0);
  { c->pr=0x8c0d7606u; {int32_t v=(int8_t)LD8(R(13));R(13)+=1;R(4)=(uint32_t)v;} f_8c0d7554(c); }
  R(0)=(uint32_t)(int32_t)(int8_t)R(0);
  c->t=R(8)==R(0);
  if(!c->t) goto L8c0d7618;
L8c0d760c:;
  R(3)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d75fc;
  R(1)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d761c;
L8c0d7618:;
  { R(0)=0x0u; goto L8c0d761e; }
L8c0d761c:;
  R(0)=0x1u;
L8c0d761e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7628(SH4Ctx *c) {
  { R(7)=0x0u; goto L8c0d7644; }
L8c0d762c:;
  { R(6)=R(5); goto L8c0d763a; }
L8c0d7630:;
  R(2)=(int32_t)(int8_t)LD8(R(6));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=R(3)==R(2);
  if(c->t) goto L8c0d764a;
  R(6)+=0x1u;
L8c0d763a:;
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d7630;
  R(7)+=0x1u;
  R(4)+=0x1u;
L8c0d7644:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d762c;
L8c0d764a:;
  { R(0)=R(7); return; }
}
void f_8c0d764e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0xdau;
  { R(14)=R(4); goto L8c0d7662; }
L8c0d765a:;
  { c->pr=0x8c0d765eu; {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;} f_8c0d7554(c); }
  R(0)=R(0)&0xFF;
  R(13)+=R(0);
L8c0d7662:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d765a;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(13)>>=2;
  R(0)=R(13)&0xFF;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7674(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x22u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(3)=R(3)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c0d768e; }
  { R(0)=0x0u; goto L8c0d7700; }
L8c0d768e:;
  R(4)=R(13);
  R(5)=R(14);
  R(6)=0x4u;
  { c->pr=0x8c0d7698u; R(4)+=0x2u; f_8c0d7568(c); }
  R(5)=R(14);
  R(4)=R(13);
  R(5)+=0x4u;
  R(6)=0x4u;
  { c->pr=0x8c0d76a4u; R(4)+=0xau; f_8c0d7568(c); }
  R(0)=0x19u;
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  ST8(R(14)+8,R(0));
  R(0)=0x20u;
  R(12)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  { uint32_t k=!c->t; R(12)=R(12)&0xFF; if(k) goto L8c0d76ba; }
  R(12)+=0xfffffffeu;
L8c0d76ba:;
  R(5)=R(14);
  R(4)=R(13);
  R(5)+=0xau;
  R(6)=R(12);
  { c->pr=0x8c0d76c6u; R(4)+=0x21u; f_8c0d7568(c); }
  R(3)=R(14);
  R(3)+=0xau;
  R(4)=0x0u;
  R(12)+=R(3);
  ST8(R(12),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(14)+8);
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c0d76f4;
  R(0)=(int32_t)(int8_t)LD8(R(14)+10);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(5)=0x2eu; if(k) goto L8c0d76e6; }
  R(0)=R(5);
  { ST8(R(14)+10,R(0)); goto L8c0d76f4; }
L8c0d76e6:;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d76f4;
  R(0)=R(5);
  ST8(R(14)+10,R(0));
  ST8(R(14)+11,R(0));
  R(0)=R(4);
  ST8(R(14)+12,R(0));
L8c0d76f4:;
  R(4)=R(14);
  { c->pr=0x8c0d76fau; R(4)+=0xau; f_8c0d764e(c); }
  ST8(R(14)+9,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(0)&0xFF;
L8c0d7700:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d770a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(9)=R(6);
  R(3)=R(5);
  R(12)=R(6);
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(11)=R(7);
  R(2)=LD32(R(9)+8);
  c->t=R(2)==R(3);
  { uint32_t k=c->t; R(12)+=0x10u; if(k) goto L8c0d77c4; }
  R(3)=LD32(R(15));
  R(14)=0x0u;
  R(8)=0x800u;
  ST32(R(9)+8,R(3));
  R(3)=LD32(R(15)+4);
  R(10)=LD32(R(9)+4);
  R(3)+=R(8);
  { ST32(R(15)+8,R(3)); goto L8c0d779e; }
L8c0d7742:;
  R(3)=0x8c0cd57cu;
  R(5)=0x1u;
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0d774cu; R(4)=LD32(R(15)); f_8c0cd57c(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d7764;
  R(3)=0x0u;
  ST32(R(9)+8,R(3));
  { R(0)=R(4); goto L8c0d77c6; }
L8c0d7764:;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  { uint32_t k=c->t; R(13)=LD32(R(15)+4); if(k) goto L8c0d77a2; }
L8c0d776a:;
  R(5)=R(12);
  { c->pr=0x8c0d7770u; R(4)=R(13); f_8c0d7674(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0d7792; }
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d7782;
  R(2)=LD32(R(12)+4);
  c->t=R(2)==R(11);
  if(c->t) goto L8c0d7782;
  R(11)=LD32(R(12)+4);
L8c0d7782:;
  R(2)=LD32(R(15)+8);
  R(13)+=R(4);
  R(12)+=0x2cu;
  c->t=R(13)>=R(2);
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c0d7792; }
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  if(!c->t) goto L8c0d776a;
L8c0d7792:;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  if(c->t) goto L8c0d77a2;
  R(2)=LD32(R(15));
  R(11)-=R(8);
  R(2)+=0x1u;
  ST32(R(15),R(2));
L8c0d779e:;
  c->t=(int32_t)R(11)>0;
  if(c->t) goto L8c0d7742;
L8c0d77a2:;
  c->t=R(14)==R(10);
  { uint32_t k=!c->t; ST32(R(9),R(14)); if(k) goto L8c0d77c4; }
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0d77c4;
  c->t=R(11)==R(8);
  if(!c->t) goto L8c0d77bc;
  R(2)=LD32(R(15)+8);
  c->t=R(13)>=R(2);
  if(c->t) goto L8c0d77c4;
  R(1)=(int32_t)(int8_t)LD8(R(13));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d77c4;
L8c0d77bc:;
  R(2)=0x0u;
  ST32(R(9)+8,R(2));
  { R(0)=0xfffffff4u; goto L8c0d77c6; }
L8c0d77c4:;
  R(0)=0x0u;
L8c0d77c6:;
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
void f_8c0d77da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(5);
  R(14)+=0x10u;
  R(12)=R(4);
  ST32(R(15),R(6));
  R(11)=LD32(R(5));
  { c->pr=0x8c0d77f6u; R(4)=R(12); f_8c0d764e(c); }
  c->t=(int32_t)R(11)>0;
  R(10)=R(0);
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c0d7838; }
L8c0d77fe:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+9);
  R(3)=R(10)&0xFF;
  R(0)=R(0)&0xFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0d7830;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d781e;
  R(5)=R(14);
  R(5)+=0xau;
  { c->pr=0x8c0d7816u; R(4)=R(12); f_8c0d75cc(c); }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d782a;
  {  goto L8c0d7830; }
L8c0d781e:;
  R(5)=R(14);
  R(5)+=0xau;
  { c->pr=0x8c0d7826u; R(4)=R(12); f_8c0d75ee(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d7830;
L8c0d782a:;
  R(0)=R(13);
  { R(0)+=0x1u; goto L8c0d783a; }
L8c0d7830:;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(11);
  { uint32_t k=!c->t; R(14)+=0x2cu; if(k) goto L8c0d77fe; }
L8c0d7838:;
  R(0)=0x0u;
L8c0d783a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d784a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(14)=0x800u;
  R(9)=R(4);
  R(4)=0x0u;
  R(12)=R(7);
  R(14)+=R(9);
  R(10)=R(4);
  R(8)=0x1u;
  ST32(R(15)+8,R(5));
  R(12)+=0x1u;
  ST32(R(15)+16,R(6));
  ST32(R(15)+20,R(8));
  R(11)=R(8);
  ST32(R(15)+12,R(4));
  ST32(R(15),R(14));
L8c0d7878:;
  R(2)=LD32(R(15));
  c->t=R(14)>=R(2);
  { uint32_t k=c->t; R(13)=R(14); if(k) goto L8c0d7896; }
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(1)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(0)&0xFF;
  R(3)=LD32(R(15));
  R(0)&=0x1u;
  R(1)=R(1)&0xFF;
  R(1)+=R(0);
  R(1)+=0x8u;
  R(1)+=R(14);
  c->t=R(1)>=R(3);
  if(!c->t) goto L8c0d78c0;
L8c0d7896:;
  R(3)=0x800u;
  R(6)=R(9);
  R(6)-=R(14);
  R(13)=R(9);
  R(6)+=R(3);
  R(13)-=R(6);
  R(5)=R(13);
  { c->pr=0x8c0d78a8u; R(4)=R(14); f_8c0d7568(c); }
  R(3)=0x8c0cd57cu;
  R(5)=0x1u;
  R(6)=R(9);
  { c->pr=0x8c0d78b2u; R(4)=LD32(R(15)+8); f_8c0cd57c(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d7934;
  R(2)=LD32(R(15)+8);
  R(14)=R(13);
  R(2)+=0x1u;
  ST32(R(15)+8,R(2));
L8c0d78c0:;
  R(5)=R(15);
  R(4)=R(13);
  R(5)+=0x4u;
  R(6)=0x2u;
  { c->pr=0x8c0d78ccu; R(4)+=0x6u; f_8c0d7568(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=LD32(R(15)+20);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0d7918;
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d78f2;
  R(2)=(int32_t)(int8_t)LD8(R(13));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(10);
  if(!c->t) goto L8c0d7918;
  R(4)=R(13);
  R(5)=R(12);
  R(6)=R(10);
  { c->pr=0x8c0d78eeu; R(4)+=0x8u; f_8c0d7580(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d7918;
L8c0d78f2:;
  R(12)+=R(10);
  ST32(R(15)+20,R(11));
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d7908;
  R(3)=0x8c0cd2a4u;
  R(4)=R(13);
  { c->pr=0x8c0d7904u; R(4)+=0x2u; f_8c0cd2a4(c); }
  {  goto L8c0d7936; }
L8c0d7908:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d7910;
  R(12)+=0x1u;
L8c0d7910:;
  R(5)=0x8c0f3990u;
  { c->pr=0x8c0d7916u; R(4)=R(12); f_8c0d7628(c); }
  R(10)=R(0);
L8c0d7918:;
  R(4)=(int32_t)(int8_t)LD8(R(13));
  R(11)+=0x1u;
  R(3)=LD32(R(15)+12);
  R(4)=R(4)&0xFF;
  R(5)=R(4);
  R(5)&=R(8);
  R(5)+=R(4);
  R(5)+=0x8u;
  R(3)+=R(5);
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(15)+16);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)+=R(5); if(k) goto L8c0d7878; }
L8c0d7934:;
  R(0)=0x0u;
L8c0d7936:;
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
void f_8c0d794a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(9)=0x0u;
  R(12)=R(7);
  R(8)=0x1u;
  ST32(R(15),R(4));
  R(10)=R(8);
  R(0)=0x48u;
  ST32(R(15)+16,R(5));
  ST32(R(15)+32,R(6));
  ST32(R(15)+4,R(9));
  { R(4)=LD32(R(15)+R(0)); goto L8c0d7986; }
L8c0d7980:;
  R(2)=LD32(R(15)+4);
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
L8c0d7986:;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d7980;
  R(3)=0x800u;
  R(12)+=0x1u;
  R(11)=R(8);
  ST32(R(15)+36,R(8));
  ST32(R(15)+20,R(9));
  R(14)=LD32(R(15));
  R(14)+=R(3);
  ST32(R(15)+8,R(14));
  ST32(R(15)+24,R(9));
L8c0d799e:;
  R(3)=LD32(R(15)+8);
  c->t=R(14)>=R(3);
  { uint32_t k=c->t; R(13)=R(14); if(k) goto L8c0d79bc; }
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(1)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(0)&0xFF;
  R(3)=LD32(R(15)+8);
  R(0)&=0x1u;
  R(1)=R(1)&0xFF;
  R(1)+=R(0);
  R(1)+=0x8u;
  R(1)+=R(14);
  c->t=R(1)>=R(3);
  if(!c->t) goto L8c0d79e6;
L8c0d79bc:;
  R(6)=LD32(R(15));
  R(3)=0x800u;
  R(13)=LD32(R(15));
  R(6)-=R(14);
  R(6)+=R(3);
  R(13)-=R(6);
  R(5)=R(13);
  { c->pr=0x8c0d79ceu; R(4)=R(14); f_8c0d7568(c); }
  R(6)=LD32(R(15));
  R(5)=0x1u;
  R(14)=0x8c0cd57cu;
  { c->pr=0x8c0d79d8u; R(4)=LD32(R(15)+16); f_8c0cd57c(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d7a8a;
  R(3)=LD32(R(15)+16);
  R(14)=R(13);
  R(3)+=0x1u;
  ST32(R(15)+16,R(3));
L8c0d79e6:;
  R(5)=R(15);
  R(4)=R(13);
  R(5)+=0xcu;
  R(6)=0x2u;
  { c->pr=0x8c0d79f2u; R(4)+=0x6u; f_8c0d7568(c); }
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(3)=LD32(R(15)+36);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0d7a6e;
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d7a6c;
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d7a12;
  R(3)=LD32(R(15)+4);
  R(0)=0x48u;
  ST32(R(15)+28,R(3));
  { R(5)=LD32(R(15)+R(0)); goto L8c0d7a18; }
L8c0d7a12:;
  R(2)=LD32(R(15)+24);
  R(5)=R(12);
  ST32(R(15)+28,R(2));
L8c0d7a18:;
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(2)=LD32(R(15)+28);
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0d7a6e;
  R(6)=LD32(R(15)+28);
  R(4)=R(13);
  { c->pr=0x8c0d7a2au; R(4)+=0x8u; f_8c0d7580(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d7a6e;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c0d7a36;
  R(2)=LD32(R(15)+24);
  R(12)+=R(2);
L8c0d7a36:;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d7a48;
  R(14)=0x8c0cd2a4u;
  R(4)=R(13);
  { c->pr=0x8c0d7a44u; R(4)+=0x2u; f_8c0cd2a4(c); }
  {  goto L8c0d7a8c; }
L8c0d7a48:;
  R(0)=R(10);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d7a5c;
  { R(10)=R(9); goto L8c0d7a64; }
L8c0d7a5c:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d7a64;
  R(12)+=0x1u;
L8c0d7a64:;
  R(5)=0x8c0f3990u;
  { c->pr=0x8c0d7a6au; R(4)=R(12); f_8c0d7628(c); }
  ST32(R(15)+24,R(0));
L8c0d7a6c:;
  ST32(R(15)+36,R(11));
L8c0d7a6e:;
  R(5)=(int32_t)(int8_t)LD8(R(13));
  R(11)+=0x1u;
  R(3)=LD32(R(15)+20);
  R(5)=R(5)&0xFF;
  R(4)=R(5);
  R(4)&=R(8);
  R(4)+=R(5);
  R(4)+=0x8u;
  R(3)+=R(4);
  ST32(R(15)+20,R(3));
  R(2)=LD32(R(15)+32);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(14)+=R(4); if(k) goto L8c0d799e; }
L8c0d7a8a:;
  R(0)=0x0u;
L8c0d7a8c:;
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
void f_8c0d7aa4(SH4Ctx *c) {
  R(0)=0x30000000u;
  R(1)=sh4_getsr(c);
  R(1)|=R(0);
  sh4_setsr(c,R(1));
  R(0)=0x8c0e3cacu;
  R(0)=LD32(R(0));
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; c->t=0; if(k) goto L8c0d7ac0; }
  R(0)=0x8c0e3cb4u;
  R(1)=LD32(R(0));
  R(1)+=0xffffffffu;
  ST32(R(0),R(1));
  c->t=(R(1)&R(1))==0;
L8c0d7ac0:;
  R(0)=0x4u;
  R(0)<<=16;
  sh4_setfpscr(c,R(0));
  R(0)^=R(0);
  c->fpul=R(0);
  sh4_frchg(c);
  R(15)-=4;ST32(R(15),c->rb[7]);
  R(15)-=4;ST32(R(15),c->rb[6]);
  R(15)-=4;ST32(R(15),c->rb[5]);
  R(15)-=4;ST32(R(15),c->rb[4]);
  R(15)-=4;ST32(R(15),c->rb[3]);
  R(15)-=4;ST32(R(15),c->rb[2]);
  R(15)-=4;ST32(R(15),c->rb[1]);
  R(15)-=4;ST32(R(15),c->rb[0]);
  {uint32_t v=c->sgr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->dbr;R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  {uint32_t v=sh4_getsr(c);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0e361cu;
  { c->pr=0x8c0d7aeau;  f_8c0e361c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setsr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;c->dbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  c->rb[0]=LD32(R(15));R(15)+=4;
  c->rb[1]=LD32(R(15));R(15)+=4;
  c->rb[2]=LD32(R(15));R(15)+=4;
  c->rb[3]=LD32(R(15));R(15)+=4;
  c->rb[4]=LD32(R(15));R(15)+=4;
  c->rb[5]=LD32(R(15));R(15)+=4;
  c->rb[6]=LD32(R(15));R(15)+=4;
  c->rb[7]=LD32(R(15));R(15)+=4;
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;sh4_setfpscr(c,v);}
  {uint32_t v=LD32(R(15));R(15)+=4;c->fpul=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->mach=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->vbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->gbr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->spc=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->ssr=v;}
  if(!c->t) goto L8c0d7b7a;
  R(15)=0x8c0e3ca8u;
  R(15)=LD32(R(15));
L8c0d7b7a:;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffffacu;
  R(0)<<=16;
  R(0)<<=8;
  R(0)|=0x10u;
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;} sh4_call(c,tg); return; }
}
void f_8c0d7bbc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(3)=0xff00001cu;
  R(2)=0x800u;
  R(1)=LD32(R(3));
  R(7)=0x8c0e3970u;
  R(1)|=R(2);
  ST32(R(3),R(1));
  R(3)=0x80000000u;
  c->t=R(4)==R(3);
  { uint32_t k=!c->t; R(6)=0x0u; if(k) goto L8c0d7bfa; }
  R(2)=0x8c0e3cb4u;
  R(0)=0x8c0e3914u;
  R(4)=0x8c0e3b0cu;
  R(3)=0x8c0e3cacu;
  ST32(R(0),R(4));
  ST32(R(7),R(4));
  ST32(R(2),R(6));
  { ST32(R(3),R(5)); goto L8c0d7c0a; }
L8c0d7bfa:;
  R(2)=0x8c0e3cb4u;
  R(3)=0x8c0e3cacu;
  R(4)=0x8c0e39a4u;
  R(0)=0x8c0e3914u;
  ST32(R(0),R(4));
  ST32(R(7),R(4));
  ST32(R(2),R(6));
  ST32(R(3),R(6));
L8c0d7c0a:;
  R(4)=0x8c0e3974u;
  { R(14)=c->vbr; goto L8c0d7c16; }
L8c0d7c10:;
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  ST32(R(14),R(2));
  R(14)+=0x4u;
L8c0d7c16:;
  R(3)=0x8c0e39a4u;
  c->t=R(4)>R(3);
  if(!c->t) goto L8c0d7c10;
  R(1)=c->vbr;
  R(4)=c->vbr;
  R(5)=R(14);
  R(5)-=R(1);
  {  goto L8c0d7c54; }
L8c0d7c54:;
  R(5)>>=2;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
  R(5)+=0x1u;
L8c0d7c5c:;
  
  R(5)-=1;c->t=R(5)==0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0d7c5c; }
  R(14)=c->vbr;
  R(4)=0x8c0e38e0u;
  R(3)=0x100u;
  { R(14)+=R(3); goto L8c0d7c74; }
L8c0d7c6e:;
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  ST32(R(14),R(2));
  R(14)+=0x4u;
L8c0d7c74:;
  R(3)=0x8c0e3918u;
  c->t=R(4)>R(3);
  if(!c->t) goto L8c0d7c6e;
  R(1)=c->vbr;
  R(4)=c->vbr;
  R(3)=0x400u;
  R(5)=0xffffff00u;
  R(14)-=R(1);
  R(4)+=R(3);
  R(5)+=R(14);
  {  goto L8c0d7c9c; }
L8c0d7c9c:;
  R(5)>>=2;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
  R(5)+=0x1u;
L8c0d7ca4:;
  
  R(5)-=1;c->t=R(5)==0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0d7ca4; }
  R(14)=c->vbr;
  R(4)=0x8c0e38e0u;
  R(3)=0x400u;
  { R(14)+=R(3); goto L8c0d7cbc; }
L8c0d7cb6:;
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  ST32(R(14),R(2));
  R(14)+=0x4u;
L8c0d7cbc:;
  R(3)=0x8c0e3918u;
  c->t=R(4)>R(3);
  if(!c->t) goto L8c0d7cb6;
  R(1)=c->vbr;
  R(4)=c->vbr;
  R(3)=0x1000u;
  R(5)=0xfffffc00u;
  R(14)-=R(1);
  R(4)+=R(3);
  R(5)+=R(14);
  {  goto L8c0d7ce4; }
L8c0d7ce4:;
  R(5)>>=2;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
  R(5)+=0x1u;
L8c0d7cec:;
  
  R(5)-=1;c->t=R(5)==0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0d7cec; }
  R(14)=c->vbr;
  R(4)=0x8c0e3918u;
  R(3)=0x600u;
  { R(14)+=R(3); goto L8c0d7d04; }
L8c0d7cfe:;
  {uint32_t v=LD32(R(4));R(4)+=4;R(2)=v;}
  ST32(R(14),R(2));
  R(14)+=0x4u;
L8c0d7d04:;
  R(3)=0x8c0e3974u;
  c->t=R(4)>R(3);
  if(!c->t) goto L8c0d7cfe;
  R(1)=c->vbr;
  R(4)=c->vbr;
  R(3)=0x1800u;
  R(5)=0xfffffa00u;
  R(14)-=R(1);
  R(4)+=R(3);
  R(5)+=R(14);
  {  goto L8c0d7d2c; }
L8c0d7d2c:;
  R(5)>>=2;
  R(5)>>=2;
  c->t=R(5)&1;R(5)>>=1;
  R(5)+=0x1u;
L8c0d7d34:;
  
  R(5)-=1;c->t=R(5)==0;
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0d7d34; }
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(5)=0x200u;
  R(4)=0xfffffe40u;
  R(7)=0x8c0d7aa4u;
  R(6)=0x620u;
L8c0d7d56:;
  R(2)=R(4);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(3)=c->vbr;
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  R(3)+=R(2);
  R(4)+=0x20u;
  R(3)+=R(5);
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  ST32(R(3),R(7));
  if(!c->t) goto L8c0d7d56;
  {  goto L8c0d7d7c; }
L8c0d7d7c:;
  R(0)=sh4_getsr(c);
  R(1)=0xefffffffu;
  R(0)&=R(1);
  sh4_setsr(c,R(0));
  {  goto L8c0d7d8c; }
L8c0d7d8c:;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7d94(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0xff000010u;
  R(0)=LD32(R(3));
  R(0)&=0x1u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d7e2e;
  R(1)=0xe0000000u;
  R(8)=0x0u;
  R(13)=0x100000u;
  R(14)=R(8);
  R(11)=0xc000000u;
  R(9)=0xd000000u;
  R(12)=0x8c0e3cc4u;
  ST32(R(15),R(1));
  { R(10)=R(8); goto L8c0d7de2; }
L8c0d7dc4:;
  R(2)=0x8c2ee750u;
  R(3)=R(10);
  R(3)<<=2;
  R(4)=R(11);
  R(2)+=R(3);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x4u;
  R(5)=LD32(R(15)+4);
  R(5)+=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0d7ddau; R(4)+=R(14); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(10)+=0x1u;
  R(14)+=R(13);
  ST32(R(1),R(0));
L8c0d7de2:;
  R(3)=R(11);
  R(3)+=R(14);
  c->t=R(3)>=R(9);
  if(!c->t) goto L8c0d7dc4;
  R(3)=0xe1000000u;
  R(14)=R(8);
  R(9)=0x10800000u;
  R(11)=0x10000000u;
  ST32(R(15),R(3));
  { R(10)=R(8); goto L8c0d7e16; }
L8c0d7df8:;
  R(3)=0x8c2ee790u;
  R(2)=R(10);
  R(2)<<=2;
  R(4)=R(11);
  R(3)+=R(2);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=0x4u;
  R(5)=LD32(R(15)+4);
  R(5)+=R(14);
  { uint32_t tg=R(12); c->pr=0x8c0d7e0eu; R(4)+=R(14); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(10)+=0x1u;
  R(14)+=R(13);
  ST32(R(1),R(0));
L8c0d7e16:;
  R(3)=R(11);
  R(3)+=R(14);
  c->t=R(3)>=R(9);
  if(!c->t) goto L8c0d7df8;
  R(3)=0x8c2ee7b0u;
  R(6)=0x4u;
  R(5)=0xe1800000u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c0d7e2au; R(4)=R(9); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  ST32(R(2),R(0));
L8c0d7e2e:;
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
void f_8c0d7e42(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(4)=0x8c2ee750u;
  R(13)=0x8c0e3d56u;
  R(12)=R(4);
  R(14)=R(4);
  { R(12)+=0x40u; goto L8c0d7e5c; }
L8c0d7e58:;
  { uint32_t tg=R(13); c->pr=0x8c0d7e5cu; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
L8c0d7e5c:;
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c0d7e58;
  R(4)=0x8c2ee790u;
  R(12)=R(4);
  R(14)=R(4);
  { R(12)+=0x20u; goto L8c0d7e6e; }
L8c0d7e6a:;
  { uint32_t tg=R(13); c->pr=0x8c0d7e6eu; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
L8c0d7e6e:;
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c0d7e6a;
  R(3)=0x8c2ee7b0u;
  R(4)=R(3);
  ST32(R(15),R(3));
  { uint32_t tg=R(13); c->pr=0x8c0d7e7cu; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d7e88(SH4Ctx *c) {
  R(0)=R(4);
  R(0)>>=16;
  R(0)>>=8;
  R(5)=R(4);
  R(0)&=0x1fu;
  R(2)=0xdu;
  c->t=R(0)>=R(2);
  R(5)<<=8;
  { uint32_t k=c->t; R(5)>>=8; if(k) goto L8c0d7ea2; }
  R(4)=0xe0000000u;
  {  goto L8c0d7ea4; }
L8c0d7ea2:;
  R(4)=0xe1000000u;
L8c0d7ea4:;
  R(4)|=R(5);
  { R(0)=R(4); return; }
}
void f_8c0d7eaa(SH4Ctx *c) {
  R(2)=0xe1000000u;
  R(5)=R(4);
  R(5)<<=8;
  c->t=R(4)>=R(2);
  { uint32_t k=c->t; R(5)>>=8; if(k) goto L8c0d7ebc; }
  R(4)=0x8c000000u;
  {  goto L8c0d7ebe; }
L8c0d7ebc:;
  R(4)=0x10000000u;
L8c0d7ebe:;
  R(4)|=R(5);
  { R(0)=R(4); return; }
}
void f_8c0d7f00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(9)=R(5);
  R(10)=R(4);
  R(4)=0xffffffffu;
  ST32(R(15),R(6));
  R(0)=LD32(R(15)+36);
  R(14)=R(7);
  R(5)=0x1u;
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(11)=0x0u; if(k) goto L8c0d7f30; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d7f34;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d7f38;
  {  goto L8c0d7f3a; }
L8c0d7f30:;
  { R(12)=R(11); goto L8c0d7f3a; }
L8c0d7f34:;
  { R(12)=R(5); goto L8c0d7f3a; }
L8c0d7f38:;
  R(12)=R(4);
L8c0d7f3a:;
  R(0)=LD32(R(15)+40);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0d7f4c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d7f50;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d7f54;
  {  goto L8c0d7f56; }
L8c0d7f4c:;
  { R(13)=R(11); goto L8c0d7f56; }
L8c0d7f50:;
  { R(13)=R(5); goto L8c0d7f56; }
L8c0d7f54:;
  R(13)=R(4);
L8c0d7f56:;
  R(3)=0x8c0f44acu;
  R(1)=0xd4u;
  R(0)=LD32(R(3));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d7f76;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
L8c0d7f76:;
  R(2)=0x8c0e4000u;
  { c->pr=0x8c0d7f7cu;  f_8c0e4000(c); }
  R(1)=0x8c0e4044u;
  { c->pr=0x8c0d7f82u;  f_8c0e4044(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d7f94;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d7fb0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d7fe4;
  {  goto L8c0d8002; }
L8c0d7f94:;
  c->t=(int32_t)R(14)>0;
  R(5)=R(10);
  R(6)=R(9);
  { uint32_t k=!c->t; R(4)=R(11); if(k) goto L8c0d8002; }
L8c0d7f9e:;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  R(5)+=R(12);
  ST8(R(6),R(2));
  { uint32_t k=!c->t; R(6)+=R(13); if(k) goto L8c0d7f9e; }
  {  goto L8c0d8002; }
L8c0d7fb0:;
  R(7)=R(12);
  c->t=R(7)>>31;R(7)<<=1;
  c->t=R(13)>>31;R(13)<<=1;
  c->t=(int32_t)R(14)>0;
  R(6)=R(10);
  R(4)=R(9);
  { uint32_t k=!c->t; R(5)=R(11); if(k) goto L8c0d8002; }
L8c0d7fc0:;
  R(2)=(int32_t)(int16_t)LD16(R(6));
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(14);
  R(6)+=R(7);
  ST16(R(4),R(2));
  { uint32_t k=!c->t; R(4)+=R(13); if(k) goto L8c0d7fc0; }
  {  goto L8c0d8002; }
L8c0d7fe4:;
  R(7)=R(12);
  R(7)<<=2;
  c->t=(int32_t)R(14)>0;
  R(4)=R(9);
  R(5)=R(10);
  R(6)=R(11);
  { uint32_t k=!c->t; R(13)<<=2; if(k) goto L8c0d8002; }
L8c0d7ff4:;
  R(2)=LD32(R(5));
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(14);
  R(5)+=R(7);
  ST32(R(4),R(2));
  { uint32_t k=!c->t; R(4)+=R(13); if(k) goto L8c0d7ff4; }
L8c0d8002:;
  R(3)=0x8c0e3f84u;
  { c->pr=0x8c0d8008u;  f_8c0e3f84(c); }
  R(3)=0x8c0f44acu;
  R(1)=0xd4u;
  R(0)=LD32(R(3));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d8026;
  R(0)=LD32(R(15)+4);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
L8c0d8026:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d8048(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c019e40u;
  R(3)=0x8c0f3f90u;
  { c->pr=0x8c0d8062u; R(4)=LD32(R(3)); f_8c019e40(c); }
  R(2)=0x8c2ef6e7u;
  R(3)=0xffffffe0u;
  R(6)=0x114u;
  R(14)=0x8c0f44acu;
  R(2)&=R(3);
  R(5)=R(6);
  R(1)=0x8c0686b8u;
  R(5)+=0xffffffebu;
  ST32(R(14),R(2));
  { c->pr=0x8c0d8078u; R(4)=R(2); f_8c0686b8(c); }
  R(2)=0xa05f7800u;
  R(13)=0x0u;
  R(3)=LD32(R(14));
  R(10)=0x4u;
  R(0)=0xd4u;
  R(11)=R(13);
  ST32(R(3),R(2));
  R(2)=0x1u;
  R(3)=LD32(R(14));
  R(9)=0x34u;
  R(8)=0x3u;
  ST32(R(3)+R(0),R(2));
  R(3)=LD32(R(14));
  R(0)=0xd8u;
  ST32(R(3)+R(0),R(13));
L8c0d8096:;
  c->macl=R(11)*R(9);
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(12)=c->macl;
  R(2)+=R(12);
  ST32(R(2),R(11));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+40,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+44,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+48,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+4,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+8,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+12,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  R(3)=0x8c0e3eb8u;
  ST32(R(2)+16,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+20,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+24,R(8));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+28,R(13));
  R(2)=LD32(R(14));
  R(2)+=0x4u;
  R(2)+=R(12);
  ST32(R(2)+32,R(13));
  R(4)=LD32(R(14));
  R(4)+=0x4u;
  { uint32_t tg=R(3); c->pr=0x8c0d8104u; R(4)+=R(12); sh4_call(c,tg); }
  R(3)=0xdcu;
  R(4)=R(11);
  R(0)=LD32(R(14));
  R(4)<<=2;
  R(11)+=0x1u;
  R(3)+=R(0);
  c->t=(int32_t)R(11)>=(int32_t)R(10);
  R(3)+=R(4);
  ST32(R(3),R(13));
  R(3)=0xfcu;
  R(0)=LD32(R(14));
  R(3)+=R(0);
  R(3)+=R(4);
  ST32(R(3),R(13));
  R(3)=0xecu;
  R(0)=LD32(R(14));
  R(3)+=R(0);
  R(4)+=R(3);
  { uint32_t k=!c->t; ST32(R(4),R(13)); if(k) goto L8c0d8096; }
  R(0)=0x10cu;
  R(3)=LD32(R(14));
  R(4)=0xc000000u;
  ST32(R(3)+R(0),R(13));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  R(5)=0xcffffffu;
  ST32(R(3)+R(0),R(13));
  R(3)=0x8c0e3fc8u;
  { c->pr=0x8c0d8142u;  f_8c0e3fc8(c); }
  R(0)=0xd4u;
  R(3)=0x1u;
  R(2)=LD32(R(14));
  R(6)=0x60u;
  R(4)=0xa60u;
  ST32(R(2)+R(0),R(3));
  R(3)=0x24u;
  R(2)=LD32(R(14));
  R(12)=0x8c0d0160u;
  R(2)+=0x4u;
  R(11)=0x8c0e3e08u;
  R(3)+=R(2);
  ST32(R(15),R(2));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  { c->pr=0x8c0d8164u; R(5)=R(11); f_8c0d0160(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(3)=0x24u;
  R(4)=0xa80u;
  R(6)=0x60u;
  ST32(R(1),R(0));
  R(2)=LD32(R(14));
  R(2)+=0x38u;
  R(3)+=R(2);
  ST32(R(15),R(2));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  { uint32_t tg=R(12); c->pr=0x8c0d817eu; R(5)=R(11); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(3)=0x24u;
  R(4)=0xaa0u;
  R(6)=0x60u;
  ST32(R(1),R(0));
  R(2)=LD32(R(14));
  R(2)+=0x6cu;
  R(3)+=R(2);
  ST32(R(15),R(2));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  { uint32_t tg=R(12); c->pr=0x8c0d8198u; R(5)=R(11); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  R(3)=0x24u;
  R(2)=0x9cu;
  R(6)=0x60u;
  ST32(R(1),R(0));
  R(1)=LD32(R(14));
  R(4)=0xac0u;
  R(1)+=0x4u;
  R(1)+=R(2);
  R(3)+=R(1);
  ST32(R(15),R(1));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+4);
  { uint32_t tg=R(12); c->pr=0x8c0d81b6u; R(5)=R(11); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(3)=0x8c2ef7fcu;
  ST32(R(2),R(0));
  R(0)=0x0u;
  ST32(R(3),R(13));
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
void f_8c0d8220(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15),R(5));
  R(5)=0x1u;
  R(8)=R(4);
  ST32(R(15)+4,R(6));
  R(0)=LD32(R(15)+48);
  R(13)=R(7);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=0xffffffffu; if(k) goto L8c0d8250; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d8254;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d8258;
  {  goto L8c0d825a; }
L8c0d8250:;
  { R(10)=0x0u; goto L8c0d825a; }
L8c0d8254:;
  { R(10)=R(5); goto L8c0d825a; }
L8c0d8258:;
  R(10)=R(4);
L8c0d825a:;
  R(0)=LD32(R(15)+52);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0d826c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d8270;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d8274;
  {  goto L8c0d8276; }
L8c0d826c:;
  { R(9)=0x0u; goto L8c0d8276; }
L8c0d8270:;
  { R(9)=R(5); goto L8c0d8276; }
L8c0d8274:;
  R(9)=R(4);
L8c0d8276:;
  R(3)=0x8c0f44acu;
  R(1)=0xd4u;
  R(0)=LD32(R(3));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d8296;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+12,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
L8c0d8296:;
  R(2)=0x8c0e4000u;
  { c->pr=0x8c0d829cu;  f_8c0e4000(c); }
  R(12)=0x8c0e4044u;
  { c->pr=0x8c0d82a2u;  f_8c0e4044(c); }
  R(0)=LD32(R(15)+4);
  R(11)=0x8c0e3dccu;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(14)=0x7u; if(k) goto L8c0d82b8; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d8304;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d8340;
  {  goto L8c0d837e; }
L8c0d82b8:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(13)>0;
  ST32(R(15)+4,R(3));
  ST32(R(15),R(8));
  { uint32_t k=!c->t; R(8)=0x0u; if(k) goto L8c0d837e; }
L8c0d82c4:;
  R(2)=R(8);
  c->t=(R(2)&R(14))==0;
  if(!c->t) goto L8c0d82d2;
  { uint32_t tg=R(12); c->pr=0x8c0d82ceu;  sh4_call(c,tg); }
  { uint32_t tg=R(11); c->pr=0x8c0d82d2u;  sh4_call(c,tg); }
L8c0d82d2:;
  R(3)=LD32(R(15));
  R(8)+=0x1u;
  R(1)=LD32(R(15)+4);
  c->t=(int32_t)R(8)>=(int32_t)R(13);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(1),R(2));
  R(3)=LD32(R(15));
  R(3)+=R(10);
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+4);
  R(2)+=R(9);
  { uint32_t k=!c->t; ST32(R(15)+4,R(2)); if(k) goto L8c0d82c4; }
  {  goto L8c0d837e; }
L8c0d8304:;
  R(2)=LD32(R(15));
  c->t=R(10)>>31;R(10)<<=1;
  c->t=R(9)>>31;R(9)<<=1;
  c->t=(int32_t)R(13)>0;
  ST32(R(15)+4,R(2));
  ST32(R(15),R(8));
  { uint32_t k=!c->t; R(8)=0x0u; if(k) goto L8c0d837e; }
L8c0d8314:;
  R(2)=R(8);
  c->t=(R(2)&R(14))==0;
  if(!c->t) goto L8c0d8322;
  { uint32_t tg=R(12); c->pr=0x8c0d831eu;  sh4_call(c,tg); }
  { uint32_t tg=R(11); c->pr=0x8c0d8322u;  sh4_call(c,tg); }
L8c0d8322:;
  R(3)=LD32(R(15));
  R(8)+=0x1u;
  R(1)=LD32(R(15)+4);
  c->t=(int32_t)R(8)>=(int32_t)R(13);
  R(2)=(int32_t)(int16_t)LD16(R(3));
  ST16(R(1),R(2));
  R(3)=LD32(R(15));
  R(3)+=R(10);
  ST32(R(15),R(3));
  R(2)=LD32(R(15)+4);
  R(2)+=R(9);
  { uint32_t k=!c->t; ST32(R(15)+4,R(2)); if(k) goto L8c0d8314; }
  {  goto L8c0d837e; }
L8c0d8340:;
  R(10)<<=2;
  R(2)=LD32(R(15));
  c->t=(int32_t)R(13)>0;
  ST32(R(15)+4,R(2));
  ST32(R(15),R(8));
  R(8)=0x0u;
  ST32(R(15)+8,R(10));
  R(10)=R(9);
  { uint32_t k=!c->t; R(10)<<=2; if(k) goto L8c0d837e; }
L8c0d8354:;
  R(2)=R(8);
  c->t=(R(2)&R(14))==0;
  if(!c->t) goto L8c0d8362;
  { uint32_t tg=R(12); c->pr=0x8c0d835eu;  sh4_call(c,tg); }
  { uint32_t tg=R(11); c->pr=0x8c0d8362u;  sh4_call(c,tg); }
L8c0d8362:;
  R(3)=LD32(R(15));
  R(8)+=0x1u;
  R(1)=LD32(R(15)+4);
  c->t=(int32_t)R(8)>=(int32_t)R(13);
  R(2)=LD32(R(3));
  ST32(R(1),R(2));
  R(1)=LD32(R(15));
  R(3)=LD32(R(15)+8);
  R(1)+=R(3);
  ST32(R(15),R(1));
  R(2)=LD32(R(15)+4);
  R(2)+=R(10);
  { uint32_t k=!c->t; ST32(R(15)+4,R(2)); if(k) goto L8c0d8354; }
L8c0d837e:;
  R(3)=0x8c0e3f84u;
  { c->pr=0x8c0d8384u;  f_8c0e3f84(c); }
  R(3)=0x8c0f44acu;
  R(1)=0xd4u;
  R(0)=LD32(R(3));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0d83a2;
  R(0)=LD32(R(15)+12);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
L8c0d83a2:;
  R(0)=0x0u;
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
void f_8c0d83c4(SH4Ctx *c) {
  R(3)=0x8c2eea8cu;
  R(2)=LD32(R(3));
  R(2)+=0x1u;
  ST32(R(3),R(2));
  {  { f_8c0d8724(c); return; } }
}
void f_8c0d83d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=sh4_getsr(c);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffff0fu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(4)=0x8c2eed34u;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0d8420;
  R(3)=0x8c2eea90u;
  R(2)=LD32(R(3));
  R(2)+=0x1u;
  ST32(R(3),R(2));
  { c->pr=0x8c0d83f8u;  f_8c0d89d4(c); }
  { c->pr=0x8c0d83fcu;  f_8c0d8438(c); }
  R(11)=0x80u;
  R(5)=0x8c2ee7c4u;
  R(11)+=R(5);
  R(14)=R(5);
  R(4)=R(5);
  R(13)=R(5);
L8c0d8408:;
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d8414;
  R(12)=LD32(R(13));
  { uint32_t tg=R(12); c->pr=0x8c0d8414u;  sh4_call(c,tg); }
L8c0d8414:;
  R(14)+=0x4u;
  c->t=R(14)>=R(11);
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0d8408; }
  {  goto L8c0d842c; }
L8c0d8420:;
  R(3)=0x0u;
  ST32(R(4),R(3));
  R(4)=0x8c2eed38u;
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  ST32(R(4),R(2));
L8c0d842c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d8438(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c2eed14u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0d84a0;
  R(13)=R(4);
  R(4)=0x8c2eed3cu;
  R(3)=0x1fffffe0u;
  R(13)+=0xffffffffu;
  R(5)=0xa0000000u;
  R(2)=R(13);
  R(4)&=R(3);
  R(1)=0x80000200u;
  R(2)<<=16;
  R(0)=0x10f4u;
  R(4)+=0x20u;
  R(2)|=R(1);
  R(5)|=R(4);
  ST32(R(5),R(2));
  R(14)=0x1u;
  R(5)=0x8c2f09fcu;
  R(2)=0x8c2eed34u;
  ST32(R(2),R(14));
  R(3)=LD32(R(5));
  R(3)=LD32(R(3)+R(0));
  ST32(R(3)+4,R(4));
  R(3)=LD32(R(5));
  R(1)=LD32(R(3)+R(0));
  ST32(R(1)+24,R(14));
  R(1)=R(13);
  R(4)=R(13);
  ST32(R(15),R(14));
  R(3)=0x0u;
  c->t=R(4)>>31;R(4)<<=1;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)<<=2;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)+=R(1);
  R(1)=0x8c0e4f4cu;
  R(6)=R(15);
  R(7)=R(14);
  R(6)+=0x8u;
  { c->pr=0x8c0d8496u; R(5)=0x9u; f_8c0e4f4c(c); }
  R(15)+=0x8u;
  R(2)=0x8c2eed14u;
  R(1)=0x8c2eed1cu;
  R(3)=LD32(R(2));
  ST32(R(1),R(3));
L8c0d84a0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d84aa(SH4Ctx *c) {
  R(3)=0xa05f6900u;
  R(0)=0x1000u;
  { ST32(R(3),R(0)); return; }
}
void f_8c0d84b2(SH4Ctx *c) {
  R(4)=0x8c2eea84u;
  R(1)=0x8c2eed08u;
  R(3)=LD32(R(4)+24);
  R(3)+=0x1u;
  ST32(R(4)+24,R(3));
  R(3)=R(4);
  R(2)=LD32(R(1));
  R(3)+=0x34u;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(3)=0x2000u;
  R(0)=(int32_t)(int16_t)LD16(R(2));
  R(0)+=0x1u;
  ST16(R(2),R(0));
  R(2)=0xa05f6900u;
  { ST32(R(2),R(3)); return; }
}
void f_8c0d8520(SH4Ctx *c) {
  R(3)=0x8c2f09fcu;
  R(6)=0x0u;
  R(5)=0x8c2ee844u;
  R(7)=0x18u;
  R(4)=LD32(R(3));
  R(4)+=0x28u;
L8c0d852c:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  ST8(R(5),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  ST8(R(5)+1,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  ST8(R(5)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  ST8(R(5)+3,R(0));
  R(3)=LD32(R(4)+16);
  ST32(R(5)+8,R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  ST8(R(5)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+9);
  ST8(R(5)+5,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+10);
  ST8(R(5)+6,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+11);
  ST8(R(5)+7,R(0));
  R(3)=LD32(R(4)+20);
  ST32(R(5)+12,R(3));
  R(5)+=0x18u;
  { uint32_t k=!c->t; R(4)+=0x2cu; if(k) goto L8c0d852c; }
  {  return; }
}
void f_8c0d8562(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=0x8c0d83c4u;
  R(4)=0x900u;
  R(14)=0x8c2ee7b4u;
  R(12)=0x8c0f39fcu;
  R(13)=0x8c0d0160u;
  { c->pr=0x8c0d857au; R(6)=LD32(R(12)); f_8c0d0160(c); }
  R(5)=0x8c0d83d0u;
  R(7)=0x0u;
  R(4)=0xa00u;
  ST32(R(14),R(0));
  { uint32_t tg=R(13); c->pr=0x8c0d8586u; R(6)=LD32(R(12)+4); sh4_call(c,tg); }
  R(5)=0x8c0d84aau;
  R(7)=0x0u;
  R(4)=0xa00u;
  ST32(R(14)+4,R(0));
  { uint32_t tg=R(13); c->pr=0x8c0d8592u; R(6)=LD32(R(12)+8); sh4_call(c,tg); }
  R(5)=0x8c0d84b2u;
  R(7)=0x0u;
  R(4)=0xa20u;
  ST32(R(14)+8,R(0));
  { uint32_t tg=R(13); c->pr=0x8c0d859eu; R(6)=LD32(R(12)+12); sh4_call(c,tg); }
  R(2)=0x8c2eeabcu;
  R(3)=0x0u;
  ST32(R(14)+12,R(0));
  R(1)=R(3);
  R(0)=0x8c2eed08u;
  R(6)=0x38u;
  R(1)=0x8c2eed0cu;
  ST32(R(2),R(3));
  R(2)=R(3);
  ST32(R(0),R(3));
  R(0)=0x0u;
  ST32(R(1),R(3));
  R(1)=R(0);
  R(3)=0x8c2eed10u;
  R(14)=0x8c0686b8u;
  ST32(R(3),R(2));
  R(3)=0xffffffffu;
  R(2)=0x8c2eed14u;
  ST32(R(2),R(0));
  R(2)=0x0u;
  R(0)=0x8c2eed1cu;
  ST32(R(0),R(1));
  R(0)=R(2);
  R(1)=0x8c2eed18u;
  ST32(R(1),R(3));
  R(1)=0x0u;
  R(3)=0x8c2eed30u;
  ST32(R(3),R(2));
  R(2)=0x8c2eed34u;
  ST32(R(2),R(0));
  R(0)=0x8c2eed38u;
  ST32(R(0),R(1));
  R(4)=0x8c2eea84u;
  { uint32_t tg=R(14); c->pr=0x8c0d85e4u; R(5)=R(1); sh4_call(c,tg); }
  R(4)=0x8c2ee844u;
  R(6)=0x240u;
  { uint32_t tg=R(14); c->pr=0x8c0d85ecu; R(5)=0x0u; sh4_call(c,tg); }
  R(4)=0x8c2eeac4u;
  R(6)=0x240u;
  { uint32_t tg=R(14); c->pr=0x8c0d85f4u; R(5)=0x0u; sh4_call(c,tg); }
  R(4)=0x8c2ee7c4u;
  R(6)=0x80u;
  { uint32_t tg=R(14); c->pr=0x8c0d85fcu; R(5)=0x0u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d866c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  ST32(R(15),R(4));
  R(0)>>=2;
  ST32(R(15)+4,R(5));
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+8,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(4)=0x8c0e5cbcu;
  R(3)=0xa0000000u;
  R(2)=LD32(R(4));
  R(2)|=R(3);
  { c->pr=0x8c0d8694u; ST32(R(4),R(2)); f_8c0d8562(c); }
  R(7)=0xc000u;
  R(3)=0x8c0e4080u;
  R(6)=LD32(R(15));
  R(5)=R(7);
  { c->pr=0x8c0d86a0u; R(4)=LD32(R(15)+4); f_8c0e4080(c); }
  { c->pr=0x8c0d86a4u; ST32(R(15),R(0)); f_8c0d8520(c); }
  R(3)=0x8c2eed04u;
  R(2)=0x1u;
  R(1)=sh4_getsr(c);
  ST32(R(3),R(2));
  R(0)=LD32(R(15)+8);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(1)&=R(2);
  R(0)<<=2;
  R(0)|=R(1);
  sh4_setsr(c,R(0));
  R(0)=LD32(R(15));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d86c6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  ST32(R(15)+12,R(4));
  R(0)>>=2;
  ST32(R(15)+8,R(5));
  R(0)>>=2;
  ST32(R(15)+4,R(6));
  R(0)&=0xfu;
  ST32(R(15),R(7));
  ST32(R(15)+16,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(4)=0x8c0e5cbcu;
  R(3)=0xa0000000u;
  R(2)=LD32(R(4));
  R(2)|=R(3);
  { c->pr=0x8c0d86f2u; ST32(R(4),R(2)); f_8c0d8562(c); }
  R(5)=LD32(R(15)+8);
  R(3)=0x8c0e419cu;
  R(7)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0d86feu; R(4)=LD32(R(15)+12); f_8c0e419c(c); }
  { c->pr=0x8c0d8702u; ST32(R(15),R(0)); f_8c0d8520(c); }
  R(3)=0x8c2eed04u;
  R(2)=0x1u;
  R(1)=sh4_getsr(c);
  ST32(R(3),R(2));
  R(0)=LD32(R(15)+16);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(1)&=R(2);
  R(0)<<=2;
  R(0)|=R(1);
  sh4_setsr(c,R(0));
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8724(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2eed04u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d8758;
  { R(0)=0x0u; goto L8c0d88fc; }
L8c0d8758:;
  R(4)=0x8c2eed1cu;
  R(11)=0x0u;
  R(2)=0x8c2eed18u;
  R(3)=LD32(R(4));
  R(6)=0x8c2eed14u;
  R(3)+=0xffffffffu;
  R(10)=0x3ffu;
  ST32(R(2),R(3));
  ST32(R(4),R(11));
  R(3)=LD32(R(6));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d8784;
  R(4)=0x8c2eed20u;
  R(5)=0xa05f80c4u;
  R(3)=LD32(R(5));
  R(3)&=R(10);
  ST32(R(4),R(3));
  R(1)=LD32(R(5));
  R(1)>>=16;
  R(1)=(uint32_t)(int32_t)(int16_t)R(1);
  R(1)&=R(10);
  ST32(R(4)+4,R(1));
L8c0d8784:;
  R(4)=0x8c2eed10u;
  ST32(R(6),R(11));
  R(2)=LD32(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d87a2;
  R(2)=0x8c2eed0cu;
  R(1)=0xa05f8040u;
  R(3)=LD32(R(2));
  ST32(R(1),R(3));
  R(3)=0xa05f80e8u;
  R(0)=0xfffffff7u;
  R(2)=LD32(R(3));
  R(2)&=R(0);
  ST32(R(3),R(2));
  ST32(R(4),R(11));
L8c0d87a2:;
  R(14)=0x8c2eea84u;
  R(3)=0xf00u;
  R(12)=0xa05f6908u;
  R(13)=0x8c2eeabcu;
  R(2)=LD32(R(12));
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0d88a2;
  R(2)=0x800u;
  R(1)=LD32(R(12));
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0d87d0;
  R(1)=LD32(R(14)+28);
  R(1)+=0x1u;
  ST32(R(14)+28,R(1));
  R(0)=LD32(R(13));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d87d0;
  R(0)=LD32(R(13));
  R(7)=LD32(R(12));
  R(6)=LD32(R(14)+8);
  R(5)=0xfffffffeu;
  { uint32_t tg=R(0); c->pr=0x8c0d87d0u; R(4)=0x1u; sh4_call(c,tg); }
L8c0d87d0:;
  R(3)=0x400u;
  R(2)=LD32(R(12));
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0d87f0;
  R(0)=LD32(R(14)+32);
  R(0)+=0x1u;
  ST32(R(14)+32,R(0));
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d87f0;
  R(2)=LD32(R(13));
  R(7)=LD32(R(12));
  R(6)=LD32(R(14)+8);
  R(5)=0xfffffffdu;
  { uint32_t tg=R(2); c->pr=0x8c0d87f0u; R(4)=0x1u; sh4_call(c,tg); }
L8c0d87f0:;
  R(3)=0x200u;
  R(2)=LD32(R(12));
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0d8810;
  R(0)=LD32(R(14)+36);
  R(0)+=0x1u;
  ST32(R(14)+36,R(0));
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d8810;
  R(2)=LD32(R(13));
  R(7)=LD32(R(12));
  R(6)=LD32(R(14)+8);
  R(5)=0xfffffffcu;
  { uint32_t tg=R(2); c->pr=0x8c0d8810u; R(4)=0x1u; sh4_call(c,tg); }
L8c0d8810:;
  R(3)=0x100u;
  R(2)=LD32(R(12));
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0d8830;
  R(0)=LD32(R(14)+40);
  R(0)+=0x1u;
  ST32(R(14)+40,R(0));
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d8830;
  R(2)=LD32(R(13));
  R(7)=LD32(R(12));
  R(6)=LD32(R(14)+8);
  R(5)=0xfffffffbu;
  { uint32_t tg=R(2); c->pr=0x8c0d8830u; R(4)=0x1u; sh4_call(c,tg); }
L8c0d8830:;
  R(3)=0xf00u;
  { c->pr=0x8c0d8836u; ST32(R(12),R(3)); f_8c0d89d4(c); }
  R(1)=0x8c0e44aau;
  { c->pr=0x8c0d883cu;  f_8c0e44aa(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>=0;
  if(!c->t) goto L8c0d888c;
  { c->pr=0x8c0d8846u;  f_8c0d8520(c); }
  {  goto L8c0d88fa; }
L8c0d888c:;
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d88fa;
  R(6)=LD32(R(14)+8);
  R(5)=0xfffffffau;
  R(3)=LD32(R(13));
  R(7)=R(12);
  { uint32_t tg=R(3); c->pr=0x8c0d889eu; R(4)=0x1u; sh4_call(c,tg); }
  {  goto L8c0d88fa; }
L8c0d88a2:;
  R(1)=0x8c0e44aau;
  { c->pr=0x8c0d88a8u;  f_8c0e44aa(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>=0;
  if(!c->t) goto L8c0d88de;
  R(4)=0x8c2eed08u;
  R(1)=R(14);
  R(1)+=0x34u;
  R(2)=0x8c2eed34u;
  ST32(R(2),R(11));
  R(3)=LD32(R(4));
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(1)=R(14);
  ST16(R(3),R(11));
  R(1)+=0x2cu;
  R(3)=LD32(R(4));
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(1);
  R(1)=0xa05f810cu;
  R(0)=LD32(R(1));
  R(0)&=R(10);
  ST16(R(3),R(0));
  { c->pr=0x8c0d88d6u;  f_8c0d8520(c); }
  R(2)=LD32(R(14));
  R(2)+=0x1u;
  { ST32(R(14),R(2)); goto L8c0d88fa; }
L8c0d88de:;
  { c->pr=0x8c0d88e2u;  f_8c0d89d4(c); }
  R(3)=LD32(R(14)+16);
  R(3)+=0x1u;
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d88fa;
  R(6)=LD32(R(14)+8);
  R(5)=0xfffffff9u;
  R(2)=LD32(R(13));
  R(7)=R(12);
  { uint32_t tg=R(2); c->pr=0x8c0d88fau; R(4)=0x1u; sh4_call(c,tg); }
L8c0d88fa:;
  R(0)=R(12);
L8c0d88fc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d890a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c2f09fcu;
  R(8)=0x4u;
  R(0)=0xfb0u;
  R(10)=R(8);
  R(3)=LD32(R(2));
  R(9)=0x1u;
  R(11)=0x8c2eed80u;
  R(10)+=0x7cu;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(12)=0x8c2eed7cu;
  ST8(R(15),R(1));
  { R(14)=0x0u; goto L8c0d89ba; }
L8c0d8936:;
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(2)=R(9);
  R(2)=sh4_shad(R(2),R(14));
  R(3)=R(3)&0xFF;
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0d89b8;
  R(4)=0x8c0f3a10u;
  R(4)+=R(14);
  ST32(R(15)+4,R(4));
  R(4)=(int32_t)(int8_t)LD8(R(4));
  { c->pr=0x8c0d894eu; R(4)=R(4)&0xFF; f_8c0d8bf4(c); }
  R(4)=LD32(R(15)+4);
  R(13)=R(0);
  R(4)=(int32_t)(int8_t)LD8(R(4));
  { c->pr=0x8c0d8958u; R(4)=R(4)&0xFF; f_8c0d8c06(c); }
  R(4)=R(0);
  R(0)=R(14);
  R(3)=(int32_t)(int8_t)LD8(R(11)+R(0));
  ST8(R(12)+R(0),R(3));
  R(2)=LD32(R(4));
  c->t=(R(2)&R(10))==0;
  if(c->t) goto L8c0d89b8;
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d89b8;
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0d89b8;
  R(4)=LD32(R(13)+8);
  R(0)=(int32_t)(int8_t)LD8(R(4)+8);
  R(0)&=0x4u;
  R(4)=R(0);
  R(0)=R(14);
  ST8(R(11)+R(0),R(4));
  R(5)=(int32_t)(int8_t)LD8(R(12)+R(0));
  R(5)^=R(4);
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d89b8;
  R(5)=R(5)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0d89b8;
  R(0)=R(14);
  { R(0)+=0x1u; goto L8c0d89c0; }
L8c0d89b8:;
  R(14)+=0x1u;
L8c0d89ba:;
  c->t=(int32_t)R(14)>=(int32_t)R(8);
  if(!c->t) goto L8c0d8936;
  R(0)=0x0u;
L8c0d89c0:;
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
void f_8c0d89d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(8)=0x1u;
  R(9)=0x8c2f09fcu;
  R(0)>>=2;
  R(10)=0x8c2eea84u;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=0x8c0e467au;
  { c->pr=0x8c0d8a06u;  f_8c0e467a(c); }
  c->t=(int32_t)R(0)==-2;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c0d8a14; }
  R(0)=0x10e8u;
  R(2)=LD32(R(9));
  { ST32(R(2)+R(0),R(8)); goto L8c0d8b66; }
L8c0d8a14:;
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c0d8a1c;
  {  goto L8c0d8b54; }
L8c0d8a1c:;
  R(3)=0x8c0e46d2u;
  { c->pr=0x8c0d8a22u;  f_8c0e46d2(c); }
  R(2)=0x8c2eed08u;
  R(3)=R(10);
  R(3)+=0x30u;
  R(0)=0xa05f810cu;
  R(4)=LD32(R(2));
  R(5)=0x3ffu;
  c->t=R(4)>>31;R(4)<<=1;
  R(3)+=R(4);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(0));
  R(2)=R(10);
  R(3)=0xa05f80dcu;
  R(2)+=0x34u;
  R(1)&=R(5);
  R(2)+=R(4);
  R(0)=LD32(R(3));
  R(2)=(int32_t)(int16_t)LD16(R(2));
  R(0)&=R(5);
  c->macl=(uint32_t)(uint16_t)R(2)*(uint32_t)(uint16_t)R(0);
  R(0)=c->macl;
  R(1)+=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { c->pr=0x8c0d8a52u; ST16(R(0),R(1)); f_8c0d8520(c); }
  R(3)=0x8c0e46bcu;
  { c->pr=0x8c0d8a58u;  f_8c0e46bc(c); }
  R(2)=0x8c0e49dcu;
  { c->pr=0x8c0d8a5eu;  f_8c0e49dc(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d8ab0;
  R(2)=0x8c2eeac0u;
  R(14)=LD32(R(2));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0d8a72;
  { uint32_t tg=R(14); c->pr=0x8c0d8a6eu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d8a7a;
L8c0d8a72:;
  { c->pr=0x8c0d8a76u;  f_8c0d890a(c); }
  R(1)=0x8c2eed14u;
  ST32(R(1),R(0));
L8c0d8a7a:;
  R(0)=0xfbcu;
  R(3)=LD32(R(9));
  R(2)=LD32(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d8ab0;
  R(1)=0x8c2eed14u;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0d8ab0;
  R(4)=0xa05f8040u;
  R(3)=LD32(R(4));
  R(2)=0x8c2eed0cu;
  ST32(R(2),R(3));
  R(3)=0xfbcu;
  R(0)=LD32(R(9));
  R(3)=LD32(R(3)+R(0));
  ST32(R(4),R(3));
  R(3)=0xa05f80e8u;
  R(0)=LD32(R(3));
  R(0)|=0x8u;
  ST32(R(3),R(0));
  R(4)=0x8c2eed30u;
  R(1)=0x8c2eed10u;
  ST32(R(1),R(8));
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  ST32(R(4),R(3));
L8c0d8ab0:;
  R(14)=0x8c2eeac4u;
  R(12)=0x0u;
  { R(11)=R(12); goto L8c0d8b38; }
L8c0d8b04:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d8b34;
  R(5)=LD32(R(14)+4);
  { c->pr=0x8c0d8b10u; R(4)=LD32(R(14)); f_8c0d8c22(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d8b34;
  R(3)=LD32(R(14)+8);
  ST32(R(15),R(3));
  ST32(R(14)+8,R(12));
  R(3)=LD32(R(15));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d8b22u; R(4)=LD32(R(14)); f_8c0d8c06(c); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0d8b28u; R(4)=LD32(R(14)); f_8c0d8bf4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;}
  R(6)=R(0);
  R(5)=LD32(R(14)+4);
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  { uint32_t tg=R(1); c->pr=0x8c0d8b34u; R(4)=LD32(R(14)); sh4_call(c,tg); }
L8c0d8b34:;
  R(14)+=0xcu;
  R(11)+=0x1u;
L8c0d8b38:;
  R(3)=0x30u;
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(!c->t) goto L8c0d8b04;
  R(3)=0x8c2eed08u;
  R(0)=0x10e8u;
  R(1)=LD32(R(9));
  ST32(R(1)+R(0),R(12));
  R(2)=LD32(R(3));
  R(2)^=R(8);
  ST32(R(3),R(2));
  R(3)=LD32(R(10)+4);
  R(3)+=0x1u;
  { ST32(R(10)+4,R(3)); goto L8c0d8b66; }
L8c0d8b54:;
  R(1)=0x8c2eeabcu;
  R(14)=LD32(R(1));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0d8b66;
  R(6)=LD32(R(10)+8);
  R(5)=0xfffffff8u;
  R(7)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c0d8b66u; R(4)=0x2u; sh4_call(c,tg); }
L8c0d8b66:;
  R(0)=LD32(R(15)+4);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=R(13);
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
void f_8c0d8b8e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(2)=0xffffcfffu;
  R(3)=0xa05f6920u;
  R(1)=LD32(R(3));
  R(1)&=R(2);
  ST32(R(3),R(1));
  R(14)=0x8c2ee7b4u;
  R(13)=0x8c0d0468u;
  { c->pr=0x8c0d8bbcu; R(4)=LD32(R(14)+12); f_8c0d0468(c); }
  { uint32_t tg=R(13); c->pr=0x8c0d8bc0u; R(4)=LD32(R(14)+16); sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c0d8bc4u; R(4)=LD32(R(14)+8); sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c0d8bc8u; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  R(3)=0x8c0e4774u;
  { c->pr=0x8c0d8bceu;  f_8c0e4774(c); }
  R(2)=0x8c0686b8u;
  R(4)=0x8c2ee844u;
  R(6)=0x240u;
  { c->pr=0x8c0d8bd8u; R(5)=0x0u; f_8c0686b8(c); }
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d8bf4(SH4Ctx *c) {
  R(0)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(4);
  R(0)+=R(3);
  R(2)=0x8c2ee844u;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { R(0)+=R(2); return; }
}
void f_8c0d8c06(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e4870u;
  { c->pr=0x8c0d8c0eu;  f_8c0e4870(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8c14(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e4882u;
  { c->pr=0x8c0d8c1cu;  f_8c0e4882(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8c22(SH4Ctx *c) {
  R(3)=0x8c0e48c4u;
  {  { f_8c0e48c4(c); return; } }
}
void f_8c0d8c82(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5918u;
  { c->pr=0x8c0d8c8cu;  f_8c0e5918(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8c9e;
  { c->pr=0x8c0d8c9eu;  f_8c0d89d4(c); }
L8c0d8c9e:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8ca8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e58d4u;
  { c->pr=0x8c0d8cb2u;  f_8c0e58d4(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8cc4;
  { c->pr=0x8c0d8cc4u;  f_8c0d89d4(c); }
L8c0d8cc4:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8cce(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5890u;
  { c->pr=0x8c0d8cd8u;  f_8c0e5890(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8cea;
  { c->pr=0x8c0d8ceau;  f_8c0d89d4(c); }
L8c0d8cea:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8cf4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e57eau;
  { c->pr=0x8c0d8cfeu;  f_8c0e57ea(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8d10;
  { c->pr=0x8c0d8d10u;  f_8c0d89d4(c); }
L8c0d8d10:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8d1a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e595cu;
  { c->pr=0x8c0d8d24u;  f_8c0e595c(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8d36;
  { c->pr=0x8c0d8d36u;  f_8c0d89d4(c); }
L8c0d8d36:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8d60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e59aeu;
  { c->pr=0x8c0d8d6eu;  f_8c0e59ae(c); }
  R(15)+=0x4u;
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8d82;
  { c->pr=0x8c0d8d82u;  f_8c0d89d4(c); }
L8c0d8d82:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8d8c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(15)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+16);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e5a0eu;
  { c->pr=0x8c0d8da2u;  f_8c0e5a0e(c); }
  R(15)+=0xcu;
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8db6;
  { c->pr=0x8c0d8db6u;  f_8c0d89d4(c); }
L8c0d8db6:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8dc0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e5a78u;
  { c->pr=0x8c0d8dceu;  f_8c0e5a78(c); }
  R(15)+=0x4u;
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8de2;
  { c->pr=0x8c0d8de2u;  f_8c0d89d4(c); }
L8c0d8de2:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8dec(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5b28u;
  { c->pr=0x8c0d8df6u;  f_8c0e5b28(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8e08;
  { c->pr=0x8c0d8e08u;  f_8c0d89d4(c); }
L8c0d8e08:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8e12(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5b78u;
  { c->pr=0x8c0d8e1cu;  f_8c0e5b78(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8e2e;
  { c->pr=0x8c0d8e2eu;  f_8c0d89d4(c); }
L8c0d8e2e:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8e38(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5bc8u;
  { c->pr=0x8c0d8e42u;  f_8c0e5bc8(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8e54;
  { c->pr=0x8c0d8e54u;  f_8c0d89d4(c); }
L8c0d8e54:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8ea2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5c28u;
  { c->pr=0x8c0d8eacu;  f_8c0e5c28(c); }
  R(2)=0x8c2f09fcu;
  ST32(R(15),R(0));
  R(0)=0x10e8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d8ebe;
  { c->pr=0x8c0d8ebeu;  f_8c0d89d4(c); }
L8c0d8ebe:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8ece(SH4Ctx *c) {
  R(3)=0x8c0e48deu;
  {  { f_8c0e48de(c); return; } }
}
void f_8c0d8ed4(SH4Ctx *c) {
  R(3)=0x8c0e48eeu;
  {  { f_8c0e48ee(c); return; } }
}
void f_8c0d8eda(SH4Ctx *c) {
  R(7)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(6)=0x80000000u;
  R(0)=0x20u;
  {uint32_t v=LD32(R(4));R(4)+=4;R(12)=v;}
  R(7)+=0x4u;
  R(1)=0x0u;
L8c0d8ee8:;
  R(3)=R(6);
  c->t=(R(3)&R(12))==0;
  if(c->t) goto L8c0d8efc;
  c->t=R(5)==R(6);
  if(!c->t) goto L8c0d8ef8;
  R(0)=R(7);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;} return; }
L8c0d8ef8:;
  R(4)+=0x4u;
  R(7)=R(4);
L8c0d8efc:;
  R(1)+=0x1u;
  c->t=R(6)&1;R(6)>>=1;
  c->t=(int32_t)R(1)>=(int32_t)R(0);
  if(!c->t) goto L8c0d8ee8;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;} return; }
}
void f_8c0d8f0a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=0x1u;
  { c->pr=0x8c0d8f18u; R(4)=LD32(R(15)+4); f_8c0d8eda(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d8f26;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d8f26:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(1)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  R(3)=LD32(R(15));
  R(0)<<=16;
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(1)=R(1)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)<<=8;
  R(2)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(1)<<=16;
  R(1)<<=8;
  R(0)=R(0)&0xFF;
  R(2)|=R(1);
  R(2)|=R(0);
  R(0)=0x0u;
  ST32(R(3),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d8f54(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  R(5)=0x2u;
  R(14)=R(4);
  { c->pr=0x8c0d8f64u; R(4)=LD32(R(15)); f_8c0d8eda(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d8f74;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d8f74:;
  R(5)=R(4);
  R(5)+=0x2u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  R(3)+=0x1u;
  ST16(R(14),R(3));
  R(3)=0xfffffff9u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(0)=R(0)&0xFF;
  R(0)+=0x1u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  ST16(R(14)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)=R(0)&0xFF;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(14)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)=R(0)&0xFF;
  R(0)&=0xfu;
  ST16(R(14)+6,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(0)=R(0)&0xFF;
  R(0)=sh4_shld(R(0),R(3));
  R(0)&=0x1u;
  ST16(R(14)+8,R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d8ff4(SH4Ctx *c) {
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(1)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  R(3)=LD32(R(15));
  R(0)<<=16;
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(1)=R(1)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)<<=8;
  R(2)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(1)<<=16;
  R(1)<<=8;
  R(0)=R(0)&0xFF;
  R(2)|=R(1);
  R(2)|=R(0);
  R(0)=0x0u;
  ST32(R(3),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d9022(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  R(5)=0x4u;
  R(14)=R(4);
  { c->pr=0x8c0d9032u; R(4)=LD32(R(15)); f_8c0d8eda(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d9042;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d9042:;
  R(5)=R(4);
  R(5)+=0x3u;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(3)=R(3)&0xFF;
  R(3)+=0x1u;
  ST16(R(14),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(0)=R(0)&0xFF;
  R(0)+=0x1u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  ST16(R(14)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(0)=R(0)&0xFF;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST16(R(14)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)=R(0)&0xFF;
  R(0)>>=2;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0x3u;
  ST8(R(14)+6,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)=R(0)&0xFF;
  R(0)>>=2;
  R(0)>>=2;
  c->t=R(0)&1;R(0)>>=1;
  R(0)&=0x1u;
  ST8(R(14)+7,R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d908e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  R(5)=0x8u;
  R(14)=R(4);
  { c->pr=0x8c0d909eu; R(4)=LD32(R(15)); f_8c0d8eda(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d90ae;
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d90ae:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  ST8(R(14),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  ST8(R(14)+1,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  ST8(R(14)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  ST8(R(14)+3,R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d90ae(SH4Ctx *c) {
  R(3)=(int32_t)(int8_t)LD8(R(4));
  ST8(R(14),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  ST8(R(14)+1,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  ST8(R(14)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  ST8(R(14)+3,R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d90c8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=0x20u;
  { c->pr=0x8c0d90d6u; R(4)=LD32(R(15)+4); f_8c0d8eda(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d90e4;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d90e4:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(1)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(0)&0xFF;
  R(3)=LD32(R(15));
  R(0)<<=16;
  R(2)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(1)=R(1)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)<<=8;
  R(2)|=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(4)+3);
  R(1)<<=16;
  R(1)<<=8;
  R(0)=R(0)&0xFF;
  R(2)|=R(1);
  R(2)|=R(0);
  R(0)=0x0u;
  ST32(R(3),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d9112(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=0x100u;
  { c->pr=0x8c0d9120u; R(4)=LD32(R(15)+4); f_8c0d8eda(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0d912e;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d912e:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  R(3)=LD32(R(15));
  R(2)=R(2)&0xFF;
  ST32(R(3),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=LD32(R(15));
  R(0)=R(0)&0xFF;
  ST32(R(3)+4,R(0));
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d914a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(14)=R(5); if(k) goto L8c0d917e; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d9188;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d9192;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0d919c;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0d91a6;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0d91b0;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0d91ba;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0d91c4;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0d91ce;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c0d91d8;
  {  goto L8c0d91e2; }
L8c0d917e:;
  R(3)=0x8c0e4932u;
  { c->pr=0x8c0d9184u; R(4)=R(14); f_8c0e4932(c); }
  {  goto L8c0d91ea; }
L8c0d9188:;
  R(3)=0x8c0e48feu;
  { c->pr=0x8c0d918eu; R(4)=R(14); f_8c0e48fe(c); }
  {  goto L8c0d91ea; }
L8c0d9192:;
  R(3)=0x8c0e4986u;
  { c->pr=0x8c0d9198u; R(4)=R(14); f_8c0e4986(c); }
  {  goto L8c0d91ea; }
L8c0d919c:;
  R(3)=0x8c0e4946u;
  { c->pr=0x8c0d91a2u; R(4)=R(14); f_8c0e4946(c); }
  {  goto L8c0d91ea; }
L8c0d91a6:;
  R(3)=0x8c0e4972u;
  { c->pr=0x8c0d91acu; R(4)=R(14); f_8c0e4972(c); }
  {  goto L8c0d91ea; }
L8c0d91b0:;
  R(3)=0x8c0e491au;
  { c->pr=0x8c0d91b6u; R(4)=R(14); f_8c0e491a(c); }
  {  goto L8c0d91ea; }
L8c0d91ba:;
  R(3)=0x8c0e499au;
  { c->pr=0x8c0d91c0u; R(4)=R(14); f_8c0e499a(c); }
  {  goto L8c0d91ea; }
L8c0d91c4:;
  R(3)=0x8c0e49beu;
  { c->pr=0x8c0d91cau; R(4)=R(14); f_8c0e49be(c); }
  {  goto L8c0d91ea; }
L8c0d91ce:;
  R(3)=0x8c0e49d2u;
  { c->pr=0x8c0d91d4u; R(4)=R(14); f_8c0e49d2(c); }
  {  goto L8c0d91ea; }
L8c0d91d8:;
  R(3)=0x8c0e4a0cu;
  { c->pr=0x8c0d91deu; R(4)=R(14); f_8c0e4a0c(c); }
  {  goto L8c0d91ea; }
L8c0d91e2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d91ea:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d91f2(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0d9220;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0d9226;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0d922c;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0d9232;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0d9238;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0d923e;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0d9244;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0d924a;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0d9250;
  c->t=(int32_t)R(0)==9;
  if(c->t) goto L8c0d9256;
  {  goto L8c0d925c; }
L8c0d9220:;
  R(3)=0x8c0e493cu;
  {  { f_8c0e493c(c); return; } }
L8c0d9226:;
  R(2)=0x8c0e490au;
  {  { f_8c0e490a(c); return; } }
L8c0d922c:;
  R(3)=0x8c0e4990u;
  {  { f_8c0e4990(c); return; } }
L8c0d9232:;
  R(2)=0x8c0e4950u;
  {  { f_8c0e4950(c); return; } }
L8c0d9238:;
  R(3)=0x8c0e497cu;
  {  { f_8c0e497c(c); return; } }
L8c0d923e:;
  R(2)=0x8c0e4928u;
  {  { f_8c0e4928(c); return; } }
L8c0d9244:;
  R(3)=0x8c0e49aau;
  {  { f_8c0e49aa(c); return; } }
L8c0d924a:;
  R(2)=0x8c0e49c8u;
  {  { f_8c0e49c8(c); return; } }
L8c0d9250:;
  R(3)=0x8c0e49dcu;
  {  { f_8c0e49dc(c); return; } }
L8c0d9256:;
  R(2)=0x8c0e4a16u;
  {  { f_8c0e4a16(c); return; } }
L8c0d925c:;
  { R(0)=0xffffffffu; return; }
}
void f_8c0d9260(SH4Ctx *c) {
  R(0)=0x8c2eea84u;
  {  return; }
}
void f_8c0d9266(SH4Ctx *c) {
  R(6)=0x8c2eed20u;
  R(3)=LD32(R(6));
  ST32(R(4),R(3));
  R(2)=LD32(R(6)+4);
  { ST32(R(5),R(2)); return; }
}
void f_8c0d9272(SH4Ctx *c) {
  R(3)=0x8c2eed18u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c0d9278(SH4Ctx *c) {
  R(3)=0x8c2eed14u;
  R(4)+=0x1u;
  { ST32(R(3),R(4)); return; }
}
void f_8c0d9280(SH4Ctx *c) {
  R(2)=0x8c2eeac0u;
  { ST32(R(2),R(4)); return; }
}
void f_8c0d9286(SH4Ctx *c) {
  R(3)=0x1fu;
  c->t=R(4)>R(3);
  if(c->t) goto L8c0d9292;
  R(0)=0x8c2ee7c4u;
  R(4)<<=2;
  ST32(R(4)+R(0),R(5));
L8c0d9292:;
  {  return; }
}
void f_8c0d9300(SH4Ctx *c) {
  R(2)=0x8c2f09fcu;
  R(7)=R(4);
  R(0)=0xfc0u;
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  R(7)+=R(1);
  R(1)=0x8c2eeac4u;
  R(3)=R(7);
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(3);
  R(7)<<=2;
  R(7)+=R(1);
  ST32(R(7)+8,R(5));
  ST32(R(7)+4,R(6));
  ST32(R(7),R(4));
  { R(0)=0x0u; return; }
}
void f_8c0d9324(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d934a;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d933eu; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d934a:;
  R(3)=0x8c0e5878u;
  { c->pr=0x8c0d9350u; R(4)=LD32(R(15)); f_8c0e5878(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d935e;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d935eu; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d935e:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9376;
  { c->pr=0x8c0d9376u;  f_8c0d89d4(c); }
L8c0d9376:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d934a(SH4Ctx *c) {
  R(3)=0x8c0e5878u;
  { c->pr=0x8c0d9350u; R(4)=LD32(R(15)); f_8c0e5878(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d935e;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d935eu; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d935e:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9376;
  { c->pr=0x8c0d9376u;  f_8c0d89d4(c); }
L8c0d9376:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9380(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d93a6;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d939au; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d93a6:;
  R(3)=0x8c0e5944u;
  { c->pr=0x8c0d93acu; R(4)=LD32(R(15)); f_8c0e5944(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d93ba;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d93bau; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d93ba:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d93d2;
  { c->pr=0x8c0d93d2u;  f_8c0d89d4(c); }
L8c0d93d2:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d93a6(SH4Ctx *c) {
  R(3)=0x8c0e5944u;
  { c->pr=0x8c0d93acu; R(4)=LD32(R(15)); f_8c0e5944(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d93ba;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d93bau; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d93ba:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d93d2;
  { c->pr=0x8c0d93d2u;  f_8c0d89d4(c); }
L8c0d93d2:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d93dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d9424;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d93f6u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d9424:;
  R(3)=0x8c0e5900u;
  { c->pr=0x8c0d942au; R(4)=LD32(R(15)); f_8c0e5900(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d9438;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d9438u; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d9438:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9450;
  { c->pr=0x8c0d9450u;  f_8c0d89d4(c); }
L8c0d9450:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d945a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d9480;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d9474u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d9480:;
  R(3)=0x8c0e58bcu;
  { c->pr=0x8c0d9486u; R(4)=LD32(R(15)); f_8c0e58bc(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d9494;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d9494u; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d9494:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d94ac;
  { c->pr=0x8c0d94acu;  f_8c0d89d4(c); }
L8c0d94ac:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9480(SH4Ctx *c) {
  R(3)=0x8c0e58bcu;
  { c->pr=0x8c0d9486u; R(4)=LD32(R(15)); f_8c0e58bc(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d9494;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d9494u; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d9494:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d94ac;
  { c->pr=0x8c0d94acu;  f_8c0d89d4(c); }
L8c0d94ac:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d94b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(6));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d94dc;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d94d0u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d94dc:;
  R(3)=0x8c0e5816u;
  { c->pr=0x8c0d94e2u; R(4)=LD32(R(15)); f_8c0e5816(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d94f0;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d94f0u; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d94f0:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9508;
  { c->pr=0x8c0d9508u;  f_8c0d89d4(c); }
L8c0d9508:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d94dc(SH4Ctx *c) {
  R(3)=0x8c0e5816u;
  { c->pr=0x8c0d94e2u; R(4)=LD32(R(15)); f_8c0e5816(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d94f0;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d94f0u; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d94f0:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9508;
  { c->pr=0x8c0d9508u;  f_8c0d89d4(c); }
L8c0d9508:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9530(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(7));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d9556;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d954au; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d9556:;
  R(3)=0x8c0e5988u;
  { c->pr=0x8c0d955cu; R(4)=LD32(R(15)); f_8c0e5988(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d956a;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d956au; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d956a:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9582;
  { c->pr=0x8c0d9582u;  f_8c0d89d4(c); }
L8c0d9582:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d958c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d95b0;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d95a4u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d95b0:;
  R(3)=LD32(R(15)+12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e59e0u;
  { c->pr=0x8c0d95bau; R(4)=LD32(R(15)+4); f_8c0e59e0(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0d95ca; }
  R(5)=LD32(R(15)+16);
  R(6)=R(14);
  { c->pr=0x8c0d95cau; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d95ca:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d95e2;
  { c->pr=0x8c0d95e2u;  f_8c0d89d4(c); }
L8c0d95e2:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d95b0(SH4Ctx *c) {
  R(3)=LD32(R(15)+12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e59e0u;
  { c->pr=0x8c0d95bau; R(4)=LD32(R(15)+4); f_8c0e59e0(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0d95ca; }
  R(5)=LD32(R(15)+16);
  R(6)=R(14);
  { c->pr=0x8c0d95cau; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d95ca:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d95e2;
  { c->pr=0x8c0d95e2u;  f_8c0d89d4(c); }
L8c0d95e2:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d95ec(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d962c;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d9604u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d962c:;
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+20);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e5a48u;
  { c->pr=0x8c0d963eu; R(4)=LD32(R(15)+12); f_8c0e5a48(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  { uint32_t k=!c->t; R(15)+=0xcu; if(k) goto L8c0d964e; }
  R(5)=LD32(R(15)+24);
  R(6)=R(14);
  { c->pr=0x8c0d964eu; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d964e:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9666;
  { c->pr=0x8c0d9666u;  f_8c0d89d4(c); }
L8c0d9666:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9670(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d9694;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d9688u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d9694:;
  R(3)=LD32(R(15)+12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e5aaau;
  { c->pr=0x8c0d969eu; R(4)=LD32(R(15)+4); f_8c0e5aaa(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0d96ae; }
  R(5)=LD32(R(15)+16);
  R(6)=R(14);
  { c->pr=0x8c0d96aeu; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d96ae:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d96c6;
  { c->pr=0x8c0d96c6u;  f_8c0d89d4(c); }
L8c0d96c6:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9694(SH4Ctx *c) {
  R(3)=LD32(R(15)+12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e5aaau;
  { c->pr=0x8c0d969eu; R(4)=LD32(R(15)+4); f_8c0e5aaa(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0d96ae; }
  R(5)=LD32(R(15)+16);
  R(6)=R(14);
  { c->pr=0x8c0d96aeu; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d96ae:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d96c6;
  { c->pr=0x8c0d96c6u;  f_8c0d89d4(c); }
L8c0d96c6:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d96d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(6));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d96f6;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d96eau; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d96f6:;
  R(3)=0x8c0e5b54u;
  { c->pr=0x8c0d96fcu; R(4)=LD32(R(15)); f_8c0e5b54(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d970a;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d970au; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d970a:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9722;
  { c->pr=0x8c0d9722u;  f_8c0d89d4(c); }
L8c0d9722:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d96f6(SH4Ctx *c) {
  R(3)=0x8c0e5b54u;
  { c->pr=0x8c0d96fcu; R(4)=LD32(R(15)); f_8c0e5b54(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d970a;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d970au; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d970a:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d9722;
  { c->pr=0x8c0d9722u;  f_8c0d89d4(c); }
L8c0d9722:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9772(SH4Ctx *c) {
  R(3)=0x8c0e5ba4u;
  { c->pr=0x8c0d9778u; R(4)=LD32(R(15)); f_8c0e5ba4(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d9786;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0d9786u; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d9786:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d979e;
  { c->pr=0x8c0d979eu;  f_8c0d89d4(c); }
L8c0d979e:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d97a8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e5cbcu;
  ST32(R(15),R(4));
  R(0)=LD32(R(3));
  {uint8_t v=LD8(R(0));c->t=v==0;ST8(R(0),v|0x80);}
  if(c->t) goto L8c0d97cc;
  R(2)=0x8c0e4818u;
  R(1)=0x8c0f3a14u;
  { c->pr=0x8c0d97c0u; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} f_8c0e4818(c); }
  R(15)+=0x4u;
  R(0)=0xfffffffeu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d97cc:;
  R(3)=0x8c0e5c04u;
  { c->pr=0x8c0d97d2u; R(4)=LD32(R(15)); f_8c0e5c04(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d97e0;
  R(5)=LD32(R(15)+12);
  R(6)=R(14);
  { c->pr=0x8c0d97e0u; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d97e0:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d97f8;
  { c->pr=0x8c0d97f8u;  f_8c0d89d4(c); }
L8c0d97f8:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d97cc(SH4Ctx *c) {
  R(3)=0x8c0e5c04u;
  { c->pr=0x8c0d97d2u; R(4)=LD32(R(15)); f_8c0e5c04(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c0d97e0;
  R(5)=LD32(R(15)+12);
  R(6)=R(14);
  { c->pr=0x8c0d97e0u; R(4)=LD32(R(15)); f_8c0d9300(c); }
L8c0d97e0:;
  R(3)=0x8c0e5cbcu;
  R(1)=0x0u;
  R(0)=0x8c2f09fcu;
  R(2)=LD32(R(3));
  ST8(R(2),R(1));
  R(2)=LD32(R(0));
  R(0)=0x10e8u;
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0d97f8;
  { c->pr=0x8c0d97f8u;  f_8c0d89d4(c); }
L8c0d97f8:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d981c(SH4Ctx *c) {
  R(1)=0xbau;
  R(2)=0x20u;
  R(4)+=R(1);
L8c0d9822:;
  R(3)=0x6u;
L8c0d9824:;
  R(6)=0x0u;
  R(1)=0x80u;
  R(7)=0x8u;
L8c0d982a:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(0)=(uint32_t)v;}
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0d9832;
  R(6)|=R(1);
L8c0d9832:;
  c->t=R(1)&1;R(1)>>=1;
  R(7)-=1;c->t=R(7)==0;
  if(!c->t) goto L8c0d982a;
  ST8(R(4),R(6));
  R(4)+=0x1u;
  R(3)-=1;c->t=R(3)==0;
  if(!c->t) goto L8c0d9824;
  R(2)-=1;c->t=R(2)==0;
  { uint32_t k=!c->t; R(4)+=0xfffffff4u; if(k) goto L8c0d9822; }
  {  return; }
}
void f_8c0d984e(SH4Ctx *c) {
  R(2)=0x20u;
  R(4)+=0x5u;
L8c0d9852:;
  R(3)=0x6u;
L8c0d9854:;
  R(6)=0x0u;
  R(1)=0x1u;
  R(7)=0x8u;
L8c0d985a:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(0)=(uint32_t)v;}
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0d9862;
  R(6)|=R(1);
L8c0d9862:;
  c->t=R(1)>>31;R(1)<<=1;
  R(7)-=1;c->t=R(7)==0;
  if(!c->t) goto L8c0d985a;
  ST8(R(4),R(6));
  R(4)+=0xffffffffu;
  R(3)-=1;c->t=R(3)==0;
  if(!c->t) goto L8c0d9854;
  R(2)-=1;c->t=R(2)==0;
  { uint32_t k=!c->t; R(4)+=0xcu; if(k) goto L8c0d9852; }
  {  return; }
}
void f_8c0d987a(SH4Ctx *c) {
  R(1)=0xc0u;
  R(2)=0x20u;
  R(4)+=R(1);
L8c0d9880:;
  R(3)=0x6u;
L8c0d9882:;
  R(6)=0x0u;
  R(1)=0x1u;
  R(7)=0x8u;
L8c0d9888:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(0)=(uint32_t)v;}
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0d9890;
  R(6)|=R(1);
L8c0d9890:;
  R(7)-=1;c->t=R(7)==0;
  { uint32_t k=!c->t; c->t=R(1)>>31;R(1)<<=1; if(k) goto L8c0d9888; }
  {uint32_t v=R(6);R(4)-=1;ST8(R(4),v);}
  R(3)-=1;c->t=R(3)==0;
  if(!c->t) goto L8c0d9882;
  R(2)-=1;c->t=R(2)==0;
  if(!c->t) goto L8c0d9880;
  {  return; }
}
void f_8c0d98a6(SH4Ctx *c) {
  R(3)=0xc0u;
L8c0d98a8:;
  R(6)=0x0u;
  R(1)=0x80u;
  R(7)=0x8u;
L8c0d98ae:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(0)=(uint32_t)v;}
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0d98b6;
  R(6)|=R(1);
L8c0d98b6:;
  c->t=R(1)&1;R(1)>>=1;
  R(7)-=1;c->t=R(7)==0;
  if(!c->t) goto L8c0d98ae;
  ST8(R(4),R(6));
  R(3)-=1;c->t=R(3)==0;
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0d98a8; }
  {  return; }
}
void f_8c0d98d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(14)=R(5);
  ST32(R(15)+8,R(4));
  R(0)>>=2;
  ST32(R(15)+4,R(6));
  R(0)>>=2;
  ST32(R(15),R(7));
  R(0)&=0xfu;
  ST32(R(15)+12,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(1)=0x8c2eed94u;
  R(4)=0x0u;
  R(2)=0x8c2eed98u;
  ST32(R(2),R(14));
  R(3)=LD32(R(15)+4);
  R(2)=0x8c2eed88u;
  ST32(R(1),R(3));
  R(3)=0x8c2eed84u;
  R(1)=0x8c2eed8cu;
  ST32(R(3),R(4));
  R(3)=0x8c2eed90u;
  ST32(R(2),R(4));
  R(2)=0x8c0e5f5cu;
  ST32(R(1),R(4));
  ST32(R(3),R(4));
  { c->pr=0x8c0d9914u; R(4)=R(14); f_8c0e5f5c(c); }
  R(3)=0x8c0e65a6u;
  R(5)=R(14);
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0d991eu; R(4)=LD32(R(15)+8); f_8c0e65a6(c); }
  R(2)=0x8c0f3ac8u;
  R(14)=R(0);
  R(3)=0x8c0d9286u;
  R(5)=0x8c0d9a28u;
  { c->pr=0x8c0d992au; R(4)=LD32(R(2)); f_8c0d9286(c); }
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0d993a;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d993a;
  R(3)=LD32(R(15));
  { uint32_t tg=R(3); c->pr=0x8c0d993au;  sh4_call(c,tg); }
L8c0d993a:;
  R(1)=0x8c0f434cu;
  R(2)=0x1u;
  R(3)=sh4_getsr(c);
  ST32(R(1),R(2));
  R(0)=LD32(R(15)+12);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d995c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(3)=0x8c0d9286u;
  R(5)=0x0u;
  R(2)=0x8c0f3ac8u;
  { c->pr=0x8c0d997eu; R(4)=LD32(R(2)); f_8c0d9286(c); }
  R(0)=LD32(R(15));
  R(1)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(1)&=R(3);
  R(0)<<=2;
  R(0)|=R(1);
  sh4_setsr(c,R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0d9998(SH4Ctx *c) {
  R(3)=0x8c0f434cu;
  R(2)=0x0u;
  R(5)=R(2);
  R(1)=0x8c0d9286u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(3),R(2));
  R(2)=0x8c0f3ac8u;
  { c->pr=0x8c0d99aau; R(4)=LD32(R(2)); f_8c0d9286(c); }
  R(3)=0x8c0e6088u;
  { c->pr=0x8c0d99b0u;  f_8c0e6088(c); }
  R(1)=0x8c0e6984u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e6984(c); return; } }
}
void f_8c0d99b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c0e6434u;
L8c0d99c4:;
  { uint32_t tg=R(12); c->pr=0x8c0d99c8u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d99d0;
  { R(0)=0xffffffffu; goto L8c0d99e0; }
L8c0d99d0:;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(13);
  if(!c->t) goto L8c0d99c4;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0d9998(c); return; } }
L8c0d99e0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9a28(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0f434cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0d9a46;
  {  goto L8c0d9b44; }
L8c0d9a46:;
  R(2)=0x8c2eed94u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0d9a54;
  R(8)=0x8c0d9b76u;
  {  goto L8c0d9a56; }
L8c0d9a54:;
  R(8)=0x8c0d9bb2u;
L8c0d9a56:;
  R(2)=0x8c0e609au;
  { c->pr=0x8c0d9a5cu;  f_8c0e609a(c); }
  R(9)=0x8c2eed88u;
  R(1)=0x8c0e69c4u;
  R(2)=0x8c2eed84u;
  R(3)=LD32(R(9));
  { c->pr=0x8c0d9a68u; ST32(R(2),R(3)); f_8c0e69c4(c); }
  R(1)=0x8c2eed98u;
  R(2)=R(0);
  R(10)=0x0u;
  ST32(R(9),R(0));
  R(3)=LD32(R(1));
  R(14)=R(10);
  R(13)=0x1u;
  R(2)&=R(3);
  R(12)=0x8u;
  ST32(R(9),R(2));
L8c0d9a7c:;
  { c->pr=0x8c0d9a80u; R(4)=R(14); f_8c0da168(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0d9a88;
  { R(3)=R(13); goto L8c0d9a8a; }
L8c0d9a88:;
  R(3)=0x0u;
L8c0d9a8a:;
  R(14)+=0x1u;
  c->t=R(13)>>31;R(13)<<=1;
  c->t=(int32_t)R(14)>=(int32_t)R(12);
  R(10)|=R(3);
  if(!c->t) goto L8c0d9a7c;
  R(1)=0x8c2eed84u;
  R(13)=0x1u;
  R(3)=LD32(R(9));
  R(11)=0x0u;
  R(2)=LD32(R(1));
  R(0)=R(3);
  R(14)=0x8c2eed8cu;
  R(2)^=R(3);
  R(2)&=R(0);
  ST32(R(15),R(2));
L8c0d9aa8:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0d9ac8;
  R(1)=R(13);
  c->t=(R(1)&R(10))==0;
  if(c->t) goto L8c0d9ac2;
  { uint32_t tg=R(8); c->pr=0x8c0d9ab8u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(2)=~R(13);
  R(3)&=R(2);
  { ST32(R(14),R(3)); goto L8c0d9ac8; }
L8c0d9ac2:;
  R(1)=LD32(R(14));
  R(1)|=R(13);
  ST32(R(14),R(1));
L8c0d9ac8:;
  R(3)=R(13);
  c->t=(R(3)&R(10))==0;
  if(c->t) goto L8c0d9ae0;
  R(1)=LD32(R(14));
  c->t=(R(1)&R(13))==0;
  if(c->t) goto L8c0d9ae0;
  { uint32_t tg=R(8); c->pr=0x8c0d9ad8u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(2)=~R(13);
  R(3)&=R(2);
  ST32(R(14),R(3));
L8c0d9ae0:;
  R(11)+=0x1u;
  c->t=R(13)>>31;R(13)<<=1;
  c->t=(int32_t)R(11)>=(int32_t)R(12);
  if(!c->t) goto L8c0d9aa8;
  R(3)=0x8c2eed84u;
  R(13)=0x1u;
  R(2)=LD32(R(9));
  R(11)=0x0u;
  R(4)=LD32(R(3));
  R(9)=0x8c0e6348u;
  R(2)^=R(4);
  R(14)=0x8c2eed90u;
  R(2)&=R(4);
  ST32(R(15),R(2));
L8c0d9afc:;
  R(3)=LD32(R(15));
  R(8)=R(13);
  c->t=(R(3)&R(13))==0;
  { uint32_t k=c->t; R(8)&=R(10); if(k) goto L8c0d9b22; }
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0d9b1c;
  R(5)=0x2u;
  R(6)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c0d9b12u; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(3)=~R(13);
  R(2)&=R(3);
  { ST32(R(14),R(2)); goto L8c0d9b22; }
L8c0d9b1c:;
  R(1)=LD32(R(14));
  R(1)|=R(13);
  ST32(R(14),R(1));
L8c0d9b22:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0d9b3c;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(13))==0;
  if(c->t) goto L8c0d9b3c;
  R(5)=0x2u;
  R(6)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c0d9b34u; R(4)=R(11); sh4_call(c,tg); }
  R(3)=LD32(R(14));
  R(2)=~R(13);
  R(3)&=R(2);
  ST32(R(14),R(3));
L8c0d9b3c:;
  R(11)+=0x1u;
  c->t=R(13)>>31;R(13)<<=1;
  c->t=(int32_t)R(11)>=(int32_t)R(12);
  if(!c->t) goto L8c0d9afc;
L8c0d9b44:;
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
void f_8c0d9b58(SH4Ctx *c) {
  R(3)=0x8c0e63e0u;
  {  { f_8c0e63e0(c); return; } }
}
void f_8c0d9b5e(SH4Ctx *c) {
  R(3)=0x8c0e63fcu;
  {  { f_8c0e63fc(c); return; } }
}
void f_8c0d9b70(SH4Ctx *c) {
  R(3)=0x8c0e69feu;
  {  { f_8c0e69fe(c); return; } }
}
void f_8c0d9b76(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e6434u;
  { c->pr=0x8c0d9b82u; R(14)=R(4); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9b8a;
  { R(0)=0xffffffffu; goto L8c0d9baa; }
L8c0d9b8a:;
  R(3)=0x8c0e6444u;
  R(5)=0x1u;
  { c->pr=0x8c0d9b92u; R(4)=R(14); f_8c0e6444(c); }
  R(13)=0x0u;
  R(2)=0x8c0e6454u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=R(13);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  { c->pr=0x8c0d9ba6u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(0)=R(13);
L8c0d9baa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9bb2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e6434u;
  { c->pr=0x8c0d9bbeu; R(14)=R(4); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9bc6;
  { R(0)=0xffffffffu; goto L8c0d9be6; }
L8c0d9bc6:;
  R(3)=0x8c0e6444u;
  R(5)=0x12u;
  { c->pr=0x8c0d9bceu; R(4)=R(14); f_8c0e6444(c); }
  R(13)=0x0u;
  R(2)=0x8c0e6454u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=R(13);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  { c->pr=0x8c0d9be2u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(0)=R(13);
L8c0d9be6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9bee(SH4Ctx *c) {
  {  { f_8c0d9b76(c); return; } }
}
void f_8c0d9bf2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e6434u;
  { c->pr=0x8c0d9bfcu; ST32(R(15),R(4)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9c08;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9c08:;
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  R(3)=0x8c0e6c9au;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e6c9a(c); return; } }
}
void f_8c0d9c08(SH4Ctx *c) {
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  R(3)=0x8c0e6c9au;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e6c9a(c); return; } }
}
void f_8c0d9c1a(SH4Ctx *c) {
  R(3)=0x8c0e8c42u;
  {  { f_8c0e8c42(c); return; } }
}
void f_8c0d9c20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(5));
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  { c->pr=0x8c0d9c34u; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9c42;
  R(0)=0xffffffffu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0d9c42:;
  R(3)=0x8c0e6444u;
  R(5)=0x3u;
  { c->pr=0x8c0d9c4au; R(4)=R(14); f_8c0e6444(c); }
  R(2)=0x0u;
  R(5)=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+12);
  R(3)=0x8c0e6454u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(15)+20);
  { c->pr=0x8c0d9c62u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(3)=0x8c0e6478u;
  R(5)=LD32(R(15));
  { c->pr=0x8c0d9c6cu; R(4)=R(14); f_8c0e6478(c); }
  R(3)=0x8c0e651au;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0d9c74u; R(4)=R(14); f_8c0e651a(c); }
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9c42(SH4Ctx *c) {
  R(3)=0x8c0e6444u;
  R(5)=0x3u;
  { c->pr=0x8c0d9c4au; R(4)=R(14); f_8c0e6444(c); }
  R(2)=0x0u;
  R(5)=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+12);
  R(3)=0x8c0e6454u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(15)+20);
  { c->pr=0x8c0d9c62u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(3)=0x8c0e6478u;
  R(5)=LD32(R(15));
  { c->pr=0x8c0d9c6cu; R(4)=R(14); f_8c0e6478(c); }
  R(3)=0x8c0e651au;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0d9c74u; R(4)=R(14); f_8c0e651a(c); }
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9ce0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0d9ceeu; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9cfa;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9cfa:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0e71b6u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e71b6(c); return; } }
}
void f_8c0d9d0e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0d9d1cu; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9d28;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9d28:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0e72d0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e72d0(c); return; } }
}
void f_8c0d9d3c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0d9d4au; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9d56;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9d56:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0e7f98u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e7f98(c); return; } }
}
void f_8c0d9d6a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0d9d78u; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9d84;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9d84:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0e8090u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e8090(c); return; } }
}
void f_8c0d9d98(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { c->pr=0x8c0d9da8u; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9db4;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9db4:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(15)+8);
  R(15)+=0xcu;
  R(3)=0x8c0e8178u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e8178(c); return; } }
}
void f_8c0d9dca(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { c->pr=0x8c0d9ddau; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9de6;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9de6:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(15)+8);
  R(15)+=0xcu;
  R(3)=0x8c0e82b6u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e82b6(c); return; } }
}
void f_8c0d9dfc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0d9e0au; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9e16;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9e16:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0e8b8au;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e8b8a(c); return; } }
}
void f_8c0d9e2a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { c->pr=0x8c0d9e3au; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9e46;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9e46:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(15)+8);
  R(15)+=0xcu;
  R(3)=0x8c0e74b4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e74b4(c); return; } }
}
void f_8c0d9e5c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  ST32(R(15)+12,R(7));
  { c->pr=0x8c0d9e6eu; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9e7a;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9e7a:;
  R(5)=LD32(R(15)+4);
  R(4)=LD32(R(15));
  R(7)=LD32(R(15)+12);
  R(6)=LD32(R(15)+8);
  R(15)+=0x10u;
  R(3)=0x8c0e772au;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e772a(c); return; } }
}
void f_8c0d9e92(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  ST32(R(15)+12,R(7));
  { c->pr=0x8c0d9ea4u; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9eb0;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9eb0:;
  R(5)=LD32(R(15)+4);
  R(4)=LD32(R(15));
  R(7)=LD32(R(15)+12);
  R(6)=LD32(R(15)+8);
  R(15)+=0x10u;
  R(3)=0x8c0e75c6u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e75c6(c); return; } }
}
void f_8c0d9ec8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(0)=R(6);
  R(3)=0x8c0e6434u;
  ST8(R(15)+8,R(0));
  R(4)=LD32(R(15));
  { c->pr=0x8c0d9edeu; R(4)=LD32(R(4)+40); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9eea;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0d9eea:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(4)=LD32(R(15));
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(5)=R(0);
  R(15)+=0xcu;
  R(3)=0x8c0e7872u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e7872(c); return; } }
}
void f_8c0d9f04(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  R(13)=LD32(R(13)+40);
  { c->pr=0x8c0d9f18u; R(4)=R(13); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9f20;
  { R(0)=0xffffffffu; goto L8c0d9f40; }
L8c0d9f20:;
  R(3)=0x8c0e6444u;
  R(5)=0x4u;
  { c->pr=0x8c0d9f28u; R(4)=R(13); f_8c0e6444(c); }
  R(14)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=R(14);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=0x1u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c0d9f3cu; R(4)=R(13); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(0)=R(14);
L8c0d9f40:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0d9f4a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  R(13)=LD32(R(15));
  R(13)=LD32(R(13)+40);
  { c->pr=0x8c0d9f62u; R(4)=R(13); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0d9f6a;
  { R(0)=0xffffffffu; goto L8c0d9f8a; }
L8c0d9f6a:;
  R(3)=0x8c0e6444u;
  R(5)=0x5u;
  { c->pr=0x8c0d9f72u; R(4)=R(13); f_8c0e6444(c); }
  R(14)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+12);
  R(7)=LD32(R(15)+16);
  R(6)=LD32(R(15)+20);
  { c->pr=0x8c0d9f86u; R(4)=R(13); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(0)=R(14);
L8c0d9f8a:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da016(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e6434u;
  { c->pr=0x8c0da026u; R(12)=R(5); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da02e;
  { R(0)=0xffffffffu; goto L8c0da058; }
L8c0da02e:;
  R(3)=0x8c0e6444u;
  R(5)=0x7u;
  { c->pr=0x8c0da036u; R(4)=R(14); f_8c0e6444(c); }
  R(13)=0x0u;
  R(2)=0x8c0e6454u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=R(12);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  { c->pr=0x8c0da04au; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(3)=0x8c0e64a4u;
  R(5)=R(12);
  R(6)=R(12);
  { c->pr=0x8c0da056u; R(4)=R(14); f_8c0e64a4(c); }
  R(0)=R(13);
L8c0da058:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da062(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0da076u; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da07e;
  { R(0)=0xffffffffu; goto L8c0da09e; }
L8c0da07e:;
  R(3)=0x8c0e6444u;
  R(5)=0x11u;
  { c->pr=0x8c0da086u; R(4)=R(14); f_8c0e6444(c); }
  R(13)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(15)+16);
  { c->pr=0x8c0da09au; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(0)=R(13);
L8c0da09e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da0a8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(7);
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  R(13)=R(5);
  ST16(R(15),R(6));
  ST8(R(15)+4,R(0));
  { c->pr=0x8c0da0c2u; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da0ca;
  { R(0)=0xffffffffu; goto L8c0da0fc; }
L8c0da0ca:;
  R(3)=0x8c0e6444u;
  R(5)=0xau;
  { c->pr=0x8c0da0d2u; R(4)=R(14); f_8c0e6444(c); }
  R(12)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(6)=R(13);
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(0)=R(0)&0xFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+12);
  R(7)=R(0);
  R(7)=R(7)&0xFFFF;
  { uint32_t tg=R(3); c->pr=0x8c0da0eeu; R(4)=R(14); sh4_call(c,tg); }
  R(15)+=0xcu;
  R(2)=0x8c0e64a4u;
  R(5)=R(13);
  R(6)=R(13);
  { c->pr=0x8c0da0fau; R(4)=R(14); f_8c0e64a4(c); }
  R(0)=R(12);
L8c0da0fc:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da108(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0da116u; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da122;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0da122:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0e7edau;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e7eda(c); return; } }
}
void f_8c0da136(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { c->pr=0x8c0da146u; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da152;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0da152:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(15)+8);
  R(15)+=0xcu;
  R(3)=0x8c0e6cc4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e6cc4(c); return; } }
}
void f_8c0da168(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0e6434u;
  { c->pr=0x8c0da170u;  f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da17a;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0da17a:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0da182(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e6434u;
  { c->pr=0x8c0da18cu; ST32(R(15),R(4)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da198;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0da198:;
  R(0)=LD32(R(15));
  R(1)=0x8c2f0a04u;
  R(0)<<=2;
  R(0)=LD32(R(1)+R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0da1a8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0da1bcu; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da1c4;
  { R(0)=0xffffffffu; goto L8c0da1ee; }
L8c0da1c4:;
  R(3)=0x8c0e6444u;
  R(5)=0x8u;
  { c->pr=0x8c0da1ccu; R(4)=R(14); f_8c0e6444(c); }
  R(13)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(15)+16);
  { c->pr=0x8c0da1e0u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(3)=0x8c0e64a4u;
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c0da1ecu; R(4)=R(14); f_8c0e64a4(c); }
  R(0)=R(13);
L8c0da1ee:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da1f8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0da206u; R(4)=LD32(R(15)); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da212;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c0da212:;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0e8af0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0e8af0(c); return; } }
}
void f_8c0da226(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(5));
  { c->pr=0x8c0da238u; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da240;
  { R(0)=0xffffffffu; goto L8c0da260; }
L8c0da240:;
  R(3)=0x8c0e6444u;
  R(5)=0x9u;
  { c->pr=0x8c0da248u; R(4)=R(14); f_8c0e6444(c); }
  R(13)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0da25cu; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(0)=R(13);
L8c0da260:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da28c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(6));
  R(13)=R(5);
  ST32(R(15)+4,R(7));
  { c->pr=0x8c0da2a4u; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da2ac;
  { R(0)=0xffffffffu; goto L8c0da2d8; }
L8c0da2ac:;
  R(3)=0x8c0e6444u;
  R(5)=0xbu;
  { c->pr=0x8c0da2b4u; R(4)=R(14); f_8c0e6444(c); }
  R(12)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(6)=R(13);
  R(2)=LD32(R(15)+12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c0da2cau; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(2)=0x8c0e64a4u;
  R(5)=R(13);
  R(6)=R(13);
  { c->pr=0x8c0da2d6u; R(4)=R(14); f_8c0e64a4(c); }
  R(0)=R(12);
L8c0da2d8:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da2e4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(6));
  R(13)=R(5);
  ST32(R(15)+4,R(7));
  { c->pr=0x8c0da2fau; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da302;
  { R(0)=0xffffffffu; goto L8c0da338; }
L8c0da302:;
  R(3)=0x8c0e6444u;
  R(5)=0xcu;
  { c->pr=0x8c0da30au; R(4)=R(14); f_8c0e6444(c); }
  R(2)=LD32(R(15)+24);
  R(5)=R(14);
  R(6)=R(13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+12);
  R(3)=0x8c0e6454u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c0da322u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(2)=0x8c0e64a4u;
  R(5)=R(13);
  R(6)=R(13);
  { c->pr=0x8c0da32eu; R(4)=R(14); f_8c0e64a4(c); }
  R(3)=0x8c0e651au;
  R(5)=LD32(R(15)+20);
  { c->pr=0x8c0da336u; R(4)=R(14); f_8c0e651a(c); }
  R(0)=0x0u;
L8c0da338:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da342(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(6));
  R(13)=R(5);
  ST32(R(15)+4,R(7));
  { c->pr=0x8c0da358u; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da360;
  { R(0)=0xffffffffu; goto L8c0da396; }
L8c0da360:;
  R(3)=0x8c0e6444u;
  R(5)=0xdu;
  { c->pr=0x8c0da368u; R(4)=R(14); f_8c0e6444(c); }
  R(2)=LD32(R(15)+24);
  R(5)=R(14);
  R(6)=R(13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+12);
  R(3)=0x8c0e6454u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c0da380u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(2)=0x8c0e64a4u;
  R(5)=R(13);
  R(6)=R(13);
  { c->pr=0x8c0da38cu; R(4)=R(14); f_8c0e64a4(c); }
  R(3)=0x8c0e651au;
  R(5)=LD32(R(15)+20);
  { c->pr=0x8c0da394u; R(4)=R(14); f_8c0e651a(c); }
  R(0)=0x0u;
L8c0da396:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da3a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15)+4,R(6));
  R(13)=R(5);
  ST32(R(15),R(7));
  { c->pr=0x8c0da3b6u; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da3be;
  { R(0)=0xffffffffu; goto L8c0da3ec; }
L8c0da3be:;
  R(3)=0x8c0e6444u;
  R(5)=0xeu;
  { c->pr=0x8c0da3c6u; R(4)=R(14); f_8c0e6444(c); }
  R(2)=0x0u;
  R(5)=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(13);
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+8);
  R(3)=0x8c0e6454u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+16);
  { c->pr=0x8c0da3deu; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(2)=0x8c0e64a4u;
  R(5)=R(13);
  R(6)=R(13);
  { c->pr=0x8c0da3eau; R(4)=R(14); f_8c0e64a4(c); }
  R(0)=0x0u;
L8c0da3ec:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da3f6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15)+4,R(6));
  R(13)=R(5);
  ST32(R(15),R(7));
  { c->pr=0x8c0da40cu; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da414;
  { R(0)=0xffffffffu; goto L8c0da442; }
L8c0da414:;
  R(3)=0x8c0e6444u;
  R(5)=0x14u;
  { c->pr=0x8c0da41cu; R(4)=R(14); f_8c0e6444(c); }
  R(2)=0x0u;
  R(5)=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=R(13);
  R(3)=LD32(R(15)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+8);
  R(3)=0x8c0e6454u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+16);
  { c->pr=0x8c0da434u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(2)=0x8c0e64a4u;
  R(5)=R(13);
  R(6)=R(13);
  { c->pr=0x8c0da440u; R(4)=R(14); f_8c0e64a4(c); }
  R(0)=0x0u;
L8c0da442:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da44c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(5));
  { c->pr=0x8c0da45eu; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da466;
  { R(0)=0xffffffffu; goto L8c0da486; }
L8c0da466:;
  R(3)=0x8c0e6444u;
  R(5)=0xfu;
  { c->pr=0x8c0da46eu; R(4)=R(14); f_8c0e6444(c); }
  R(13)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0da482u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(0)=R(13);
L8c0da486:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da490(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e6434u;
  R(14)=R(4);
  ST32(R(15),R(5));
  { c->pr=0x8c0da4a2u; R(4)=R(14); f_8c0e6434(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0da4aa;
  { R(0)=0xffffffffu; goto L8c0da4ca; }
L8c0da4aa:;
  R(3)=0x8c0e6444u;
  R(5)=0x10u;
  { c->pr=0x8c0da4b2u; R(4)=R(14); f_8c0e6444(c); }
  R(13)=0x0u;
  R(3)=0x8c0e6454u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0da4c6u; R(4)=R(14); f_8c0e6454(c); }
  R(15)+=0xcu;
  R(0)=R(13);
L8c0da4ca:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da4d4(SH4Ctx *c) {
  R(3)=0x8c0f44c4u;
  { ST32(R(3),R(4)); return; }
}
void f_8c0da4da(SH4Ctx *c) {
  R(3)=0x8c0e5cc4u;
  {  { f_8c0e5cc4(c); return; } }
}
void f_8c0da4e0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e687cu;
  { c->pr=0x8c0da4eau; ST32(R(15),R(4)); f_8c0e687c(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0da4f8;
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0d9b76(c); return; } }
L8c0da4f8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0da524(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=0x4cu;
  R(14)=R(5);
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(12)=R(4); if(k) goto L8c0da576; }
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(10)=0x3u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>(int32_t)R(10);
  if(c->t) goto L8c0da576;
  R(0)=0x54u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(2)>(int32_t)R(10);
  if(c->t) goto L8c0da576;
  R(0)=0x44u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0da576;
  R(0)=0x48u;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0da576;
  R(0)=0x54u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0da57e;
  R(0)=0x50u;
  R(1)=LD32(R(14)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0da57e;
L8c0da576:;
  R(0)=0xffffff00u;
  {  goto L8c0da708; }
L8c0da57e:;
  R(11)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x60u;
  R(13)=R(12);
  { c->pr=0x8c0da58au; R(4)=R(12); f_8c0686b8(c); }
  R(5)=0x20u;
  R(6)=0x10u;
  { uint32_t tg=R(11); c->pr=0x8c0da592u; R(4)=R(13); sh4_call(c,tg); }
  R(6)=0x20u;
  R(4)=R(13);
  R(5)=R(6);
  { uint32_t tg=R(11); c->pr=0x8c0da59cu; R(4)+=0x10u; sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=0x0u;
  R(6)=0x10u;
  { uint32_t tg=R(11); c->pr=0x8c0da5a6u; R(4)+=0x30u; sh4_call(c,tg); }
  R(6)=0x0u;
  R(7)=R(13);
  R(4)=0x10u;
  R(5)=R(14);
L8c0da5ae:;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0da5c0;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(4);
  ST8(R(7),R(3));
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c0da5ae; }
L8c0da5c0:;
  R(6)=R(14);
  R(5)=0x0u;
  R(8)=R(13);
  R(7)=R(5);
  R(9)=0x20u;
  R(8)+=0x10u;
  R(6)+=0x12u;
L8c0da5ce:;
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0da5e0;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  R(7)+=0x1u;
  c->t=(int32_t)R(7)>=(int32_t)R(9);
  ST8(R(8),R(3));
  { uint32_t k=!c->t; R(8)+=0x1u; if(k) goto L8c0da5ce; }
L8c0da5e0:;
  R(7)=R(14);
  R(9)=R(13);
  R(6)=R(5);
  R(7)+=0x34u;
  R(9)+=0x30u;
L8c0da5ea:;
  R(3)=(int32_t)(int8_t)LD8(R(7));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0da5fc;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(4);
  ST8(R(9),R(3));
  { uint32_t k=!c->t; R(9)+=0x1u; if(k) goto L8c0da5ea; }
L8c0da5fc:;
  R(0)=0x4cu;
  R(4)=0x80u;
  R(9)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x8c0f4350u;
  R(9)=R(9)&0xFFFF;
  R(9)&=R(10);
  R(9)<<=2;
  R(9)=LD32(R(9)+R(0));
  R(0)=0x54u;
  R(8)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x8c0f4360u;
  R(6)=R(9);
  R(8)=R(8)&0xFFFF;
  R(8)&=R(10);
  R(8)<<=2;
  R(8)=LD32(R(8)+R(0));
  R(0)=0x5cu;
  R(10)=LD32(R(14)+R(0));
  R(0)=0x4eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x42u;
  R(6)+=R(8);
  ST16(R(13)+R(0),R(3));
  R(0)=0x4cu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x40u;
  R(10)+=R(6);
  ST16(R(13)+R(0),R(2));
  R(0)=0x54u;
  ST32(R(15),R(4));
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)+=R(4); if(k) goto L8c0da648; }
  R(0)=0x50u;
  R(1)=LD32(R(14)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0da650;
L8c0da648:;
  R(0)=0x44u;
  ST16(R(13)+R(0),R(5));
  { ST32(R(15)+8,R(5)); goto L8c0da65e; }
L8c0da650:;
  R(0)=0x54u;
  R(3)=R(9);
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=R(4);
  R(0)=0x44u;
  ST16(R(13)+R(0),R(2));
  ST32(R(15)+8,R(3));
L8c0da65e:;
  R(0)=0x5cu;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0da66e;
  R(0)=0x58u;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0da684;
L8c0da66e:;
  R(0)=0x48u;
  ST32(R(13)+R(0),R(5));
  { ST32(R(15)+4,R(5)); goto L8c0da690; }
L8c0da684:;
  R(0)=0x5cu;
  R(2)=LD32(R(14)+R(0));
  R(6)+=R(4);
  R(0)=0x48u;
  ST32(R(13)+R(0),R(2));
  ST32(R(15)+4,R(6));
L8c0da690:;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0da6b0;
  R(0)=0x44u;
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(14)+R(0));
  R(6)=0x20u;
  R(4)=R(12);
  { c->pr=0x8c0da6a2u; R(4)+=0x60u; f_8c0685b4(c); }
  R(0)=0x48u;
  R(4)=LD32(R(15));
  R(3)=0x8c0685b4u;
  R(6)=R(9);
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0da6b0u; R(4)+=R(12); f_8c0685b4(c); }
L8c0da6b0:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0da6c2;
  R(0)=0x50u;
  R(4)=LD32(R(15)+8);
  R(3)=0x8c0685b4u;
  R(6)=R(8);
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0da6c2u; R(4)+=R(12); f_8c0685b4(c); }
L8c0da6c2:;
  R(0)=0x5cu;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0da6d8;
  R(6)=LD32(R(14)+R(0));
  R(0)=0x58u;
  R(3)=0x8c0685b4u;
  R(4)=LD32(R(15)+4);
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0da6d8u; R(4)+=R(12); f_8c0685b4(c); }
L8c0da6d8:;
  R(14)=0x1ffu;
  R(14)&=R(10);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0da6ec;
  R(6)=0x200u;
  R(4)=R(12);
  R(5)=0x0u;
  R(6)-=R(14);
  { uint32_t tg=R(11); c->pr=0x8c0da6ecu; R(4)+=R(10); sh4_call(c,tg); }
L8c0da6ec:;
  R(5)=R(10);
  { c->pr=0x8c0da6f2u; R(4)=R(12); f_8c0da8bc(c); }
  R(1)=0x46u;
  c->t=(R(14)&R(14))==0;
  R(1)+=R(13);
  { uint32_t k=c->t; ST16(R(1),R(0)); if(k) goto L8c0da700; }
  { R(0)=0x1u; goto L8c0da702; }
L8c0da700:;
  R(0)=0x0u;
L8c0da702:;
  R(10)>>=8;
  c->t=R(10)&1;R(10)>>=1;
  R(0)+=R(10);
L8c0da708:;
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
void f_8c0da71c(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0da72a;
  R(7)=0x3u;
  c->t=R(4)>R(7);
  if(c->t) goto L8c0da72a;
  c->t=R(5)>R(7);
  if(!c->t) goto L8c0da730;
L8c0da72a:;
  R(0)=0xffffff00u;
  {  return; }
L8c0da730:;
  R(0)=0x8c0f4350u;
  R(4)<<=2;
  R(5)<<=2;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x8c0f4360u;
  R(4)=0x80u;
  R(2)=LD32(R(5)+R(0));
  R(0)=0x1ffu;
  R(3)+=R(2);
  R(3)+=R(6);
  R(4)+=R(3);
  c->t=(R(0)&R(4))==0;
  if(c->t) goto L8c0da74e;
  { R(0)=0x1u; goto L8c0da750; }
L8c0da74e:;
  R(0)=0x0u;
L8c0da750:;
  R(3)=R(4);
  R(3)>>=8;
  c->t=R(3)&1;R(3)>>=1;
  R(0)+=R(3);
  {  return; }
}
void f_8c0da770(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=0x40u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c0da7d0; }
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(5)=0x3u;
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>(int32_t)R(5);
  if(c->t) goto L8c0da7d0;
  R(0)=0x44u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(3)&0xFFFF;
  c->t=(int32_t)R(3)>(int32_t)R(5);
  if(c->t) goto L8c0da7d0;
  R(0)=0x48u;
  R(5)=0xe1000u;
  R(2)=LD32(R(14)+R(0));
  c->t=R(2)>R(5);
  if(c->t) goto L8c0da7d0;
  R(0)=0x40u;
  R(2)=0x80u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x8c0f4350u;
  R(1)=R(1)&0xFFFF;
  R(1)<<=2;
  R(1)=LD32(R(1)+R(0));
  R(0)=0x44u;
  R(10)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x8c0f4360u;
  R(12)=R(1);
  R(10)=R(10)&0xFFFF;
  R(10)<<=2;
  R(10)=LD32(R(10)+R(0));
  R(0)=0x48u;
  R(3)=LD32(R(14)+R(0));
  R(12)+=R(10);
  R(12)+=R(3);
  R(12)+=R(2);
  c->t=R(12)>R(5);
  if(!c->t) goto L8c0da7d6;
L8c0da7d0:;
  R(0)=0xffffff21u;
  {  goto L8c0da8ae; }
L8c0da7d6:;
  R(7)=R(14);
  R(6)=R(4);
  { R(5)=0x10u; goto L8c0da7e6; }
L8c0da7de:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(2)=(uint32_t)v;}
  R(5)+=0xffffffffu;
  ST8(R(6),R(2));
  R(6)+=0x1u;
L8c0da7e6:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0da7de;
  R(7)=R(4);
  R(11)=R(14);
  R(5)=0x0u;
  R(11)+=0x10u;
  ST8(R(6),R(5));
  R(7)+=0x12u;
  { R(6)=0x20u; goto L8c0da802; }
L8c0da7fa:;
  {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(2)=(uint32_t)v;}
  R(6)+=0xffffffffu;
  ST8(R(7),R(2));
  R(7)+=0x1u;
L8c0da802:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0da7fa;
  ST8(R(7),R(5));
  R(11)=R(14);
  R(7)=R(4);
  R(11)+=0x30u;
  R(7)+=0x34u;
  { R(6)=0x10u; goto L8c0da81c; }
L8c0da814:;
  {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(2)=(uint32_t)v;}
  R(6)+=0xffffffffu;
  ST8(R(7),R(2));
  R(7)+=0x1u;
L8c0da81c:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0da814;
  R(0)=0x42u;
  R(6)=R(13);
  ST8(R(7),R(5));
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x4eu;
  ST16(R(4)+R(0),R(2));
  R(0)=0x40u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x4cu;
  R(2)=0x80u;
  ST16(R(4)+R(0),R(3));
  R(3)=R(13);
  R(0)=0x44u;
  R(3)+=0x60u;
  ST32(R(4)+R(0),R(3));
  R(0)=0x48u;
  R(6)+=R(2);
  ST32(R(4)+R(0),R(6));
  R(0)=0x44u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(0)=0x54u;
  R(6)+=R(1);
  ST16(R(4)+R(0),R(3));
  R(0)=0x44u;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0da85c;
  R(0)=0x50u;
  { ST32(R(4)+R(0),R(5)); goto L8c0da862; }
L8c0da85c:;
  R(0)=0x50u;
  ST32(R(4)+R(0),R(6));
  R(6)+=R(10);
L8c0da862:;
  R(0)=0x48u;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x5cu;
  ST32(R(4)+R(0),R(3));
  R(0)=0x48u;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0da888;
  R(0)=0x58u;
  { ST32(R(4)+R(0),R(5)); goto L8c0da88c; }
L8c0da888:;
  R(0)=0x58u;
  ST32(R(4)+R(0),R(6));
L8c0da88c:;
  R(0)=0x46u;
  R(11)=(int32_t)(int16_t)LD16(R(14)+R(0));
  ST16(R(14)+R(0),R(5));
  R(5)=R(12);
  { c->pr=0x8c0da898u; R(4)=R(13); f_8c0da8bc(c); }
  R(4)=R(0);
  R(0)=0x46u;
  ST16(R(14)+R(0),R(11));
  R(11)=R(11)&0xFFFF;
  R(4)=R(4)&0xFFFF;
  c->t=R(4)==R(11);
  if(c->t) goto L8c0da8ac;
  R(0)=0xffffff20u;
  {  goto L8c0da8ae; }
L8c0da8ac:;
  R(0)=0x0u;
L8c0da8ae:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0da8bc(SH4Ctx *c) {
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(6)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  R(1)=0x1021u;
  R(4)=R(6);
  R(0)=0x8000u;
  { R(12)=R(6); goto L8c0da8f2; }
L8c0da8d2:;
  {int32_t v=(int8_t)LD8(R(10));R(10)+=1;R(3)=(uint32_t)v;}
  R(7)=R(11);
  R(3)<<=8;
  R(4)^=R(3);
L8c0da8da:;
  R(2)=R(4);
  R(6)=R(4);
  c->t=R(6)>>31;R(6)<<=1;
  c->t=(R(2)&R(0))==0;
  if(c->t) goto L8c0da8ea;
  R(4)=R(6);
  { R(4)^=R(1); goto L8c0da8ec; }
L8c0da8ea:;
  R(4)=R(6);
L8c0da8ec:;
  R(7)-=1;c->t=R(7)==0;
  if(!c->t) goto L8c0da8da;
  R(12)+=0x1u;
L8c0da8f2:;
  c->t=R(12)>=R(5);
  if(!c->t) goto L8c0da8d2;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  R(0)=R(4);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;} return; }
}
void f_8c0da908(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x0u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da91c(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x1u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da930(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x2u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da944(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x3u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da958(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x4u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da96c(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x5u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da980(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x6u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da994(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x7u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da9a8(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x8u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0da9bc(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x9u;
  R(0)=0x8c0000bcu;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0daa0c(SH4Ctx *c) {
  R(7)=0x0u;
  R(0)=0x8c0000b8u;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0daa20(SH4Ctx *c) {
  R(7)=0x1u;
  R(0)=0x8c0000b8u;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0daa34(SH4Ctx *c) {
  R(7)=0x2u;
  R(0)=0x8c0000b8u;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0daa48(SH4Ctx *c) {
  R(7)=0x3u;
  R(0)=0x8c0000b8u;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0daa5c(SH4Ctx *c) {
  {  { f_8c0daa6c(c); return; } }
}
void f_8c0daa60(SH4Ctx *c) {
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(2)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  c->t=R(3)==R(2);
  if(c->t) { f_8c0daa6c(c); return; }
  { R(0)=0x0u; return; }
}
void f_8c0daa6c(SH4Ctx *c) {
  c->t=(int32_t)R(6)>0;
  { uint32_t k=c->t; R(6)+=0xffffffffu; if(k) { f_8c0daa60(c); return; } }
  R(0)=0x1u;
  {  return; }
}
void f_8c0daa78(SH4Ctx *c) {
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c0daa7e;
  R(6)+=0x3u;
L8c0daa7e:;
  c->t=R(6)&1;R(6)=(uint32_t)((int32_t)R(6)>>1);
  { c->t=R(6)&1;R(6)=(uint32_t)((int32_t)R(6)>>1); goto L8c0daa8a; }
L8c0daa84:;
  {uint32_t v=LD32(R(4));R(4)+=4;R(3)=v;}
  ST32(R(5),R(3));
  R(5)+=0x4u;
L8c0daa8a:;
  c->t=(int32_t)R(6)>0;
  { uint32_t k=c->t; R(6)+=0xffffffffu; if(k) goto L8c0daa84; }
  {  return; }
}
void f_8c0daa94(SH4Ctx *c) {
  {  { f_8c0daa9e(c); return; } }
}
void f_8c0daa98(SH4Ctx *c) {
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  ST8(R(5),R(3));
  R(5)+=0x1u;
  { f_8c0daa9e(c); return; }
}
void f_8c0daa9e(SH4Ctx *c) {
  c->t=(int32_t)R(6)>0;
  { uint32_t k=c->t; R(6)+=0xffffffffu; if(k) { f_8c0daa98(c); return; } }
  {  return; }
}
void f_8c0daaa8(SH4Ctx *c) {
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(6)=0xffffffffu; if(k) goto L8c0daab8; }
L8c0daaae:;
  R(5)+=0xffffffffu;
  ST8(R(4),R(6));
  c->t=(int32_t)R(5)>0;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c0daaae; }
L8c0daab8:;
  {  return; }
}
void f_8c0daabc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  R(14)<<=2;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x8u;
  R(14)<<=2;
  R(0)=R(12);
  R(7)=0x0u;
  R(14)<<=2;
  { R(0)+=0x78u; goto L8c0daae8; }
L8c0daad2:;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(6)=(uint32_t)v;}
  R(5)=R(12);
L8c0daad6:;
  R(3)=(uint32_t)(int32_t)(int8_t)R(6);
  c->t=(R(3)&R(0))==0;
  if(!c->t) goto L8c0daaec;
  R(5)+=0xffffffffu;
  c->t=R(6)>>31;R(6)<<=1;
  c->t=(int32_t)R(5)>0;
  { uint32_t k=c->t; R(7)+=0x1u; if(k) goto L8c0daad6; }
  R(14)+=0xffffffffu;
L8c0daae8:;
  c->t=(int32_t)R(14)>0;
  if(c->t) goto L8c0daad2;
L8c0daaec:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  R(0)=R(7);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0daaf4(SH4Ctx *c) {
  R(1)=R(6);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(1)<<=2;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(1)<<=2;
  R(11)=0x0u;
  R(12)=0xffffffffu;
  R(7)=0x8u;
  { R(1)<<=2; goto L8c0dab36; }
L8c0dab08:;
  c->t=(int32_t)R(4)>=(int32_t)R(7);
  if(!c->t) goto L8c0dab14;
  ST8(R(5),R(11));
  R(5)+=0x1u;
  { R(4)+=0xfffffff8u; goto L8c0dab34; }
L8c0dab14:;
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c0dab30;
  R(0)=R(7);
L8c0dab1a:;
  c->t=R(6)>>31;R(6)<<=1;
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c0dab24;
  { R(4)+=0xffffffffu; goto L8c0dab28; }
L8c0dab24:;
  R(2)=0x1u;
  R(6)|=R(2);
L8c0dab28:;
  R(0)-=1;c->t=R(0)==0;
  if(!c->t) goto L8c0dab1a;
  { ST8(R(5),R(6)); goto L8c0dab32; }
L8c0dab30:;
  ST8(R(5),R(12));
L8c0dab32:;
  R(5)+=0x1u;
L8c0dab34:;
  R(1)+=0xffffffffu;
L8c0dab36:;
  c->t=(int32_t)R(1)>0;
  if(c->t) goto L8c0dab08;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;} return; }
}
void f_8c0dab42(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x3cu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0xffu;
  R(5)+=0x2u;
L8c0dab50:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0dab74;
  R(4)+=0xffffffffu;
  c->t=(int32_t)R(4)>0;
  if(c->t) goto L8c0dab50;
  R(3)=0x8c0ea530u;
  R(5)=R(13);
  { c->pr=0x8c0dab66u; R(4)=0x3eu; f_8c0ea530(c); }
  R(4)=R(0);
  R(0)=0x3eu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(4)=R(4)&0xFFFF;
  R(2)=R(2)&0xFFFF;
  c->t=R(2)==R(4);
  if(c->t) goto L8c0dab78;
L8c0dab74:;
  { R(0)=0x0u; goto L8c0dab8a; }
L8c0dab78:;
  R(5)=R(13);
  { R(4)=0x40u; goto L8c0dab84; }
L8c0dab7e:;
  ST8(R(5),R(14));
  R(4)+=0xffffffffu;
  R(5)+=0x1u;
L8c0dab84:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0dab7e;
  R(0)=0x1u;
L8c0dab8a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dab92(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  R(10)=LD32(R(13)+12);
  R(11)=0x8c0daa20u;
  R(6)=0x40u;
  R(14)=LD32(R(13)+4);
  R(5)=R(10);
  { c->pr=0x8c0dabb4u; R(4)=R(14); f_8c0daa20(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0dac08; }
  R(12)=LD32(R(13)+20);
  R(4)=R(14);
  R(6)=LD32(R(13)+24);
  R(12)+=0x1u;
  R(12)<<=2;
  R(12)<<=2;
  R(12)<<=2;
  R(5)=R(12);
  R(6)<<=2;
  R(5)+=R(10);
  R(6)<<=2;
  ST32(R(15),R(5));
  R(6)<<=2;
  { uint32_t tg=R(11); c->pr=0x8c0dabd8u; R(4)+=R(12); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0dac08; }
  R(5)=LD32(R(13)+24);
  { c->pr=0x8c0dabe4u; R(4)=LD32(R(15)); f_8c0daabc(c); }
  ST32(R(13)+16,R(0));
  R(12)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(13)+2);
  R(9)=R(14);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(9)+=0x40u; if(k) goto L8c0dac62; }
  c->t=(int32_t)R(12)>0;
  R(14)=R(13);
  { uint32_t k=!c->t; R(14)+=0x34u; if(k) goto L8c0dac5e; }
L8c0dabfa:;
  R(5)=R(14);
  R(6)=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c0dac02u; R(4)=R(9); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0dac18; }
L8c0dac08:;
  { R(0)=0xffffffffu; goto L8c0dac64; }
L8c0dac18:;
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(4)=0xffffu;
  R(2)=R(2)&0xFFFF;
  c->t=R(2)==R(4);
  if(c->t) goto L8c0dac5e;
  R(8)=0x8c0ea530u;
  R(5)=R(14);
  { c->pr=0x8c0dac2au; R(4)=0x3eu; f_8c0ea530(c); }
  R(4)=R(0);
  R(0)=0x3eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(4)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0dac56;
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(3)=LD32(R(13)+20);
  R(2)=R(2)&0xFFFF;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c0dac56;
  R(5)=(int32_t)(int16_t)LD16(R(14));
  R(6)=0x40u;
  R(5)=R(5)&0xFFFF;
  R(5)+=0x1u;
  R(5)<<=2;
  R(5)<<=2;
  R(5)<<=2;
  R(5)+=R(10);
  { c->pr=0x8c0dac56u; R(4)=R(14); f_8c0daa78(c); }
L8c0dac56:;
  R(12)+=0xffffffffu;
  c->t=(int32_t)R(12)>0;
  { uint32_t k=c->t; R(9)+=0x40u; if(k) goto L8c0dabfa; }
L8c0dac5e:;
  { R(0)=0x0u; goto L8c0dac64; }
L8c0dac62:;
  R(0)=0xfffffffau;
L8c0dac64:;
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
void f_8c0dac78(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(13)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(8)=LD32(R(13)+4); if(k) goto L8c0dad1e; }
  R(14)=LD32(R(13)+12);
  R(12)=R(8);
  R(10)=0x8c0daa34u;
  R(6)=0x40u;
  R(5)=R(14);
  R(14)+=0x40u;
  { c->pr=0x8c0daca4u; R(4)=R(8); f_8c0daa34(c); }
  c->t=(int32_t)R(0)==64;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0dad14; }
  R(9)=LD32(R(13)+20);
  R(12)+=0x40u;
  c->t=(int32_t)R(9)>0;
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c0dace2; }
L8c0dacb4:;
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(4)=0xffffu;
  R(2)=R(2)&0xFFFF;
  c->t=R(2)==R(4);
  if(c->t) goto L8c0dacda;
  R(5)=R(14);
  { c->pr=0x8c0dacc4u; R(4)=R(13); f_8c0dab42(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dacda;
  R(5)=R(14);
  R(6)=0x40u;
  { uint32_t tg=R(10); c->pr=0x8c0dacd0u; R(4)=R(12); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==64;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0dad14; }
  R(11)+=0x1u;
  R(12)+=0x40u;
L8c0dacda:;
  R(9)+=0xffffffffu;
  c->t=(int32_t)R(9)>0;
  { uint32_t k=c->t; R(14)+=0x40u; if(k) goto L8c0dacb4; }
L8c0dace2:;
  R(3)=LD32(R(13)+20);
  R(5)=R(14);
  R(3)+=0x1u;
  R(3)<<=2;
  R(3)<<=2;
  R(3)<<=2;
  ST32(R(15),R(3));
  R(6)=LD32(R(13)+24);
  { c->pr=0x8c0dacf6u; R(4)=R(11); f_8c0daaf4(c); }
  R(6)=LD32(R(13)+24);
  R(5)=R(14);
  R(4)=LD32(R(15));
  R(6)<<=2;
  R(6)<<=2;
  R(6)<<=2;
  { uint32_t tg=R(10); c->pr=0x8c0dad06u; R(4)+=R(8); sh4_call(c,tg); }
  R(3)=LD32(R(13)+24);
  R(4)=R(0);
  R(3)<<=2;
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(4)==R(3);
  if(c->t) goto L8c0dad18;
L8c0dad14:;
  { R(0)=0xfffffffeu; goto L8c0dad20; }
L8c0dad18:;
  ST32(R(13)+16,R(11));
  { R(0)=0x0u; goto L8c0dad20; }
L8c0dad1e:;
  R(0)=0xfffffffau;
L8c0dad20:;
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
void f_8c0dad34(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(0)=(int32_t)(int16_t)LD16(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dadee;
  R(13)=R(14);
  R(2)=LD32(R(14)+40);
  R(13)+=0x34u;
  R(5)=R(13);
  R(5)+=0x2u;
  ST16(R(13),R(2));
  R(6)=0x3cu;
  { c->pr=0x8c0dad58u; R(4)=LD32(R(14)+48); f_8c0daa94(c); }
  R(2)=0x8c0ea530u;
  R(5)=R(13);
  { c->pr=0x8c0dad60u; R(4)=0x3eu; f_8c0ea530(c); }
  R(4)=R(0);
  R(0)=0x3eu;
  ST16(R(13)+R(0),R(4));
  R(6)=0x40u;
  R(3)=LD32(R(14)+40);
  R(3)+=0x1u;
  R(3)<<=2;
  R(3)<<=2;
  R(3)<<=2;
  ST32(R(15),R(3));
  R(5)=LD32(R(14)+12);
  R(5)+=R(3);
  { c->pr=0x8c0dad7cu; R(4)=R(13); f_8c0daa78(c); }
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(14)+20);
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c0dad88;
  { R(0)=0xfffffff6u; goto L8c0dadf0; }
L8c0dad88:;
  R(12)=LD32(R(14)+20);
  R(5)=LD32(R(14)+12);
  R(12)+=0x1u;
  R(4)=LD32(R(14)+16);
  R(12)<<=2;
  R(6)=LD32(R(14)+24);
  R(12)<<=2;
  R(12)<<=2;
  R(5)+=R(12);
  { c->pr=0x8c0dad9eu; R(4)+=0x1u; f_8c0daaf4(c); }
  R(6)=LD32(R(14)+24);
  R(5)=LD32(R(14)+12);
  R(6)<<=2;
  R(4)=LD32(R(14)+4);
  R(6)<<=2;
  R(2)=0x8c0daa34u;
  R(6)<<=2;
  R(5)+=R(12);
  { c->pr=0x8c0dadb2u; R(4)+=R(12); f_8c0daa34(c); }
  R(3)=LD32(R(14)+24);
  R(4)=R(0);
  R(3)<<=2;
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0dade6;
  R(2)=LD32(R(14)+16);
  R(6)=0x40u;
  R(5)=R(13);
  R(2)+=0x1u;
  R(2)<<=2;
  R(2)<<=2;
  R(2)<<=2;
  ST32(R(15),R(2));
  R(3)=LD32(R(14)+16);
  R(2)=0x8c0daa34u;
  R(3)+=0x1u;
  ST32(R(14)+16,R(3));
  R(3)=LD32(R(15));
  R(4)=LD32(R(14)+4);
  { c->pr=0x8c0dade0u; R(4)+=R(3); f_8c0daa34(c); }
  c->t=(int32_t)R(0)==64;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0dadea; }
L8c0dade6:;
  { R(0)=0xfffffffeu; goto L8c0dadf0; }
L8c0dadea:;
  { R(0)=0x0u; goto L8c0dadf0; }
L8c0dadee:;
  R(0)=0xfffffffau;
L8c0dadf0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dadfc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dae4a;
  R(14)=LD32(R(13)+40);
  R(6)=0x3cu;
  R(3)=LD32(R(13)+12);
  R(14)+=0x1u;
  R(5)=LD32(R(13)+48);
  R(14)<<=2;
  R(14)<<=2;
  R(14)<<=2;
  R(14)+=R(3);
  R(4)=R(14);
  { c->pr=0x8c0dae22u; R(4)+=0x2u; f_8c0daa94(c); }
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(2)=0xffffu;
  R(3)=R(3)&0xFFFF;
  c->t=R(3)==R(2);
  if(c->t) goto L8c0dae46;
  R(1)=0x8c0ea530u;
  R(5)=R(14);
  { c->pr=0x8c0dae34u; R(4)=0x3eu; f_8c0ea530(c); }
  R(4)=R(0);
  R(0)=0x3eu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(4)=R(4)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  c->t=R(3)==R(4);
  if(c->t) goto L8c0dae46;
  { R(0)=0xfffffffcu; goto L8c0dae4c; }
L8c0dae46:;
  { R(0)=0x0u; goto L8c0dae4c; }
L8c0dae4a:;
  R(0)=0xfffffffau;
L8c0dae4c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dae54(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+36);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0dae78;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0dae8a;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0daea2;
  {  goto L8c0daeaa; }
L8c0dae78:;
  { c->pr=0x8c0dae7cu; R(4)=R(14); f_8c0dad34(c); }
  c->t=(int32_t)R(0)==-10;
  { uint32_t k=!c->t; R(5)=R(0); if(k) goto L8c0dae86; }
  { R(3)=0x1u; goto L8c0dae9c; }
L8c0dae86:;
  { R(4)=R(5); goto L8c0daeac; }
L8c0dae8a:;
  R(2)=0x8c0daa48u;
  { c->pr=0x8c0dae90u; R(4)=LD32(R(14)+4); f_8c0daa48(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0dae9a; }
  { R(4)=0xfffffffdu; goto L8c0daeac; }
L8c0dae9a:;
  R(3)=0x2u;
L8c0dae9c:;
  ST32(R(14)+36,R(3));
  { R(4)=0x1u; goto L8c0daeac; }
L8c0daea2:;
  { c->pr=0x8c0daea6u; R(4)=R(14); f_8c0dac78(c); }
  { R(4)=R(0); goto L8c0daeac; }
L8c0daeaa:;
  R(4)=0xfffffffeu;
L8c0daeac:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0daeb4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x1u;
  R(13)=R(4);
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  { uint32_t k=!c->t; ST32(R(15),R(5)); if(k) goto L8c0daecc; }
  R(1)=0x5u;
  c->t=(int32_t)R(13)>=(int32_t)R(1);
  if(!c->t) goto L8c0daed0;
L8c0daecc:;
  { R(0)=0xfffffff9u; goto L8c0dafae; }
L8c0daed0:;
  R(3)=0x8c2eed9cu;
  R(5)=R(15);
  R(14)=0x8c0f4370u;
  R(5)+=0x4u;
  R(2)=0x8c0daa0cu;
  ST32(R(14),R(3));
  { c->pr=0x8c0daee0u; R(4)=R(13); f_8c0daa0c(c); }
  R(3)=LD32(R(14));
  R(4)=0x0u;
  R(1)=0x7fffu;
  ST16(R(3),R(13));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(14));
  ST32(R(2)+4,R(3));
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(14));
  ST32(R(2)+8,R(3));
  R(2)=LD32(R(14));
  R(3)=R(2);
  R(0)=LD32(R(3)+8);
  R(3)=0xfffffff1u;
  R(0)+=R(1);
  R(0)=sh4_shad(R(0),R(3));
  ST32(R(2)+24,R(0));
  R(0)=0xfffffffau;
  R(2)=LD32(R(14));
  R(3)=R(2);
  R(3)=LD32(R(3)+8);
  R(3)=sh4_shad(R(3),R(0));
  R(0)=R(2);
  R(0)=LD32(R(0)+24);
  R(3)-=R(0);
  R(3)+=0xffffffffu;
  ST32(R(2)+20,R(3));
  R(3)=LD32(R(15));
  R(2)=LD32(R(14));
  ST32(R(2)+12,R(3));
  R(3)=LD32(R(14));
  ST32(R(3)+28,R(4));
  R(2)=LD32(R(14));
  R(6)=0x40u;
  ST32(R(2)+32,R(4));
  R(3)=LD32(R(14));
  ST32(R(3)+44,R(4));
  R(5)=LD32(R(14));
  R(4)=LD32(R(14));
  R(3)=0x8c0daa20u;
  R(5)+=0x34u;
  { c->pr=0x8c0daf36u; R(4)=LD32(R(4)+4); f_8c0daa20(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0daf40; }
  { R(0)=0xffffffffu; goto L8c0dafae; }
L8c0daf40:;
  R(13)=LD32(R(14));
  R(6)=0xcu;
  R(5)=0x8c0f3ad0u;
  R(13)+=0x34u;
  { c->pr=0x8c0daf4cu; R(4)=R(13); f_8c0daa5c(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0daf74;
  R(4)=LD32(R(14));
  R(0)=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(3)=(int32_t)(int16_t)LD16(R(4));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0daf74;
  R(0)=0x11u;
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  ST16(R(4)+2,R(0));
  R(4)=LD32(R(14));
  R(0)=(int32_t)(int16_t)LD16(R(4)+2);
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0daf94;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0daf94;
L8c0daf74:;
  { R(0)=0xfffffff8u; goto L8c0dafae; }
L8c0daf94:;
  R(5)=LD32(R(14));
  R(4)=LD32(R(14));
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c0daf9eu; R(4)=LD32(R(4)+12); f_8c0daaa8(c); }
  { c->pr=0x8c0dafa2u; R(4)=LD32(R(14)); f_8c0dab92(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0dafac;
  { R(0)=R(4); goto L8c0dafae; }
L8c0dafac:;
  R(0)=0x0u;
L8c0dafae:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dafb8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0f4370u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=LD32(R(14));
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(13)=R(4); if(k) goto L8c0dafce; }
  { R(0)=0xfffffff5u; goto L8c0db03a; }
L8c0dafce:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0dafdc;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0dafdc;
  { R(0)=0xfffffffau; goto L8c0db03a; }
L8c0dafdc:;
  R(2)=0x8c0daa48u;
  { c->pr=0x8c0dafe2u; R(4)=LD32(R(12)+4); f_8c0daa48(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0dafec;
  { R(0)=0xfffffffdu; goto L8c0db03a; }
L8c0dafec:;
  R(12)=LD32(R(14));
  R(6)=0x10u;
  R(4)=0x8c0f3ad0u;
  R(12)+=0x34u;
  { c->pr=0x8c0daff8u; R(5)=R(12); f_8c0daa94(c); }
  R(2)=LD32(R(14));
  R(0)=R(13);
  R(5)=R(12);
  R(6)=0x12u;
  ST16(R(2)+2,R(0));
  R(0)=0x11u;
  ST8(R(12)+R(0),R(13));
  R(0)=0x10u;
  R(3)=LD32(R(14));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(3)=0x8c0daa34u;
  ST8(R(12)+R(0),R(2));
  R(4)=LD32(R(14));
  { c->pr=0x8c0db016u; R(4)=LD32(R(4)+4); f_8c0daa34(c); }
  c->t=(int32_t)R(0)==18;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0db020; }
  { R(0)=0xfffffffeu; goto L8c0db03a; }
L8c0db020:;
  R(5)=LD32(R(14));
  R(4)=LD32(R(14));
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c0db02au; R(4)=LD32(R(4)+12); f_8c0daaa8(c); }
  { c->pr=0x8c0db02eu; R(4)=LD32(R(14)); f_8c0dab92(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0db038;
  { R(0)=R(4); goto L8c0db03a; }
L8c0db038:;
  R(0)=0x0u;
L8c0db03a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db044(SH4Ctx *c) {
  R(7)=0x8c0f4370u;
  R(6)=LD32(R(7));
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0db050;
  { R(0)=0xfffffff5u; return; }
L8c0db050:;
  R(2)=LD32(R(6)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0db05a;
  { R(0)=0xfffffff7u; return; }
L8c0db05a:;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0db064;
  R(2)=LD32(R(6)+20);
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0db068;
L8c0db064:;
  { R(0)=0xfffffffbu; return; }
L8c0db068:;
  R(2)=0x1u;
  ST32(R(6)+28,R(2));
  R(2)=0x2u;
  R(3)=LD32(R(7));
  R(0)=0x0u;
  ST32(R(3)+32,R(2));
  R(3)=LD32(R(7));
  ST32(R(3)+40,R(4));
  R(2)=LD32(R(7));
  ST32(R(2)+48,R(5));
  {  return; }
}
void f_8c0db080(SH4Ctx *c) {
  R(7)=0x8c0f4370u;
  R(6)=LD32(R(7));
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0db08c;
  { R(0)=0xfffffff5u; return; }
L8c0db08c:;
  R(2)=LD32(R(6)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0db096;
  { R(0)=0xfffffff7u; return; }
L8c0db096:;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0db0a0;
  R(2)=LD32(R(6)+20);
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0db0a4;
L8c0db0a0:;
  { R(0)=0xfffffffbu; return; }
L8c0db0a4:;
  R(2)=0x2u;
  ST32(R(6)+28,R(2));
  R(3)=LD32(R(7));
  ST32(R(3)+32,R(2));
  R(3)=LD32(R(7));
  ST32(R(3)+40,R(4));
  R(4)=0x0u;
  R(2)=LD32(R(7));
  R(0)=R(4);
  ST32(R(2)+48,R(5));
  R(3)=LD32(R(7));
  ST32(R(3)+36,R(4));
  {  return; }
}
void f_8c0db0c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0f4370u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0db0d2;
  { R(0)=0x0u; goto L8c0db13a; }
L8c0db0d2:;
  R(0)=LD32(R(4)+28);
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c0db136; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0db0e6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0db108;
  {  goto L8c0db130; }
L8c0db0e6:;
  { c->pr=0x8c0db0eau;  f_8c0dadfc(c); }
  R(2)=LD32(R(14));
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; ST32(R(2)+28,R(13)); if(k) goto L8c0db0fe; }
  R(2)=LD32(R(14));
  R(3)=0x3u;
  ST32(R(2)+32,R(3));
  {  goto L8c0db12a; }
L8c0db0fe:;
  R(1)=LD32(R(14));
  R(3)=0x1u;
  ST32(R(1)+32,R(3));
  {  goto L8c0db12a; }
L8c0db108:;
  { c->pr=0x8c0db10cu;  f_8c0dae54(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0db136; }
  R(3)=LD32(R(14));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; ST32(R(3)+28,R(13)); if(k) goto L8c0db124; }
  R(3)=LD32(R(14));
  R(2)=0x3u;
  ST32(R(3)+32,R(2));
  {  goto L8c0db12a; }
L8c0db124:;
  R(1)=LD32(R(14));
  R(3)=0x1u;
  ST32(R(1)+32,R(3));
L8c0db12a:;
  R(2)=LD32(R(14));
  { ST32(R(2)+44,R(4)); goto L8c0db136; }
L8c0db130:;
  ST32(R(4)+28,R(13));
  R(2)=LD32(R(14));
  ST32(R(2)+32,R(13));
L8c0db136:;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+32);
L8c0db13a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db142(SH4Ctx *c) {
  R(3)=0x8c0f4370u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0db14e;
  { R(0)=0xfffffff5u; return; }
L8c0db14e:;
  R(0)=LD32(R(4)+44);
  {  return; }
}
void f_8c0db14e(SH4Ctx *c) {
  R(0)=LD32(R(4)+44);
  {  return; }
}
void f_8c0db154(SH4Ctx *c) {
  R(2)=0x8c0f4370u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c0db15c(SH4Ctx *c) {
  R(1)=0x8c0f4370u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(1));
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0db170;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xfffffff5u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0db170:;
  R(2)=0x8c0daa48u;
  { c->pr=0x8c0db176u; R(4)=LD32(R(14)+4); f_8c0daa48(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0db180; }
  { R(4)=0xfffffffdu; goto L8c0db188; }
L8c0db180:;
  R(3)=0x8c0f4370u;
  { c->pr=0x8c0db186u; R(4)=LD32(R(3)); f_8c0dac78(c); }
  R(4)=R(0);
L8c0db188:;
  R(0)=R(4);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db170(SH4Ctx *c) {
  R(2)=0x8c0daa48u;
  { c->pr=0x8c0db176u; R(4)=LD32(R(14)+4); f_8c0daa48(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0db180; }
  { R(4)=0xfffffffdu; goto L8c0db188; }
L8c0db180:;
  R(3)=0x8c0f4370u;
  { c->pr=0x8c0db186u; R(4)=LD32(R(3)); f_8c0dac78(c); }
  R(4)=R(0);
L8c0db188:;
  R(0)=R(4);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db1bc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0d8c06u;
  { c->pr=0x8c0db1c6u; ST32(R(15),R(4)); f_8c0d8c06(c); }
  R(4)=R(0);
  R(0)=LD32(R(4));
  R(3)=0x100u;
  c->t=(R(0)&R(3))==0;
  if(c->t) goto L8c0db1d8;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c0db1d8:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0db1e2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(13)=R(7);
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  { c->pr=0x8c0db1f8u; R(4)=LD32(R(15)+8); f_8c0db1bc(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0db200;
  { R(0)=0xfffffffeu; goto L8c0db28a; }
L8c0db200:;
  R(3)=0x0u;
  R(14)=R(15);
  R(2)=R(3);
  R(14)+=0xcu;
  R(4)=R(3);
  R(12)=R(3);
  c->t=R(2)>=R(13);
  R(5)=R(3);
  R(6)=R(14);
  ST32(R(14)+16,R(3));
  ST32(R(14)+12,R(3));
  ST32(R(14)+8,R(3));
  ST32(R(14)+4,R(3));
  ST32(R(14),R(3));
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c0db238; }
L8c0db220:;
  R(1)=LD32(R(15)+4);
  R(5)+=0x1u;
  R(2)=R(7);
  c->t=R(5)>=R(13);
  R(1)+=0x1u;
  ST32(R(15)+4,R(1));
  R(1)+=0xffffffffu;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  R(3)=R(3)&0xFF;
  R(2)=sh4_shad(R(2),R(3));
  { uint32_t k=!c->t; R(4)|=R(2); if(k) goto L8c0db220; }
L8c0db238:;
  R(3)=R(4)&0xFFFF;
  R(3)>>=8;
  ST8(R(6),R(3));
  R(6)+=0x1u;
  R(3)=0x0u;
  ST8(R(6),R(4));
  c->t=R(3)>=R(13);
  R(4)=R(12);
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c0db260; }
L8c0db24c:;
  R(3)=LD32(R(15));
  R(4)+=0x1u;
  c->t=R(4)>=R(13);
  R(3)+=0x1u;
  ST32(R(15),R(3));
  R(3)+=0xffffffffu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  ST8(R(6),R(2));
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c0db24c; }
L8c0db260:;
  R(4)=R(13);
  R(4)+=0x5u;
  R(4)>>=2;
  R(5)=0x100u;
  ST32(R(15),R(4));
  R(7)=0x0u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  R(3)=0x8c0d8d8cu;
  R(6)=R(7);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0db27cu; R(4)=LD32(R(15)+20); f_8c0d8d8c(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0db288; }
  { R(0)=0xffffffffu; goto L8c0db28a; }
L8c0db288:;
  R(0)=0x0u;
L8c0db28a:;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db296(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffbcu;
  R(14)=R(5);
  ST32(R(15),R(4));
  { c->pr=0x8c0db2b0u; R(10)=R(6); f_8c0db1bc(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0db2c4;
  { R(0)=0xfffffffeu; goto L8c0db36c; }
L8c0db2c4:;
  R(12)=0x0u;
  R(13)=0x88u;
  R(3)=R(12);
  R(7)=R(15);
  c->t=R(3)>=R(10);
  R(7)+=0x4u;
  R(11)=R(12);
  R(8)=0xfffffffeu;
  { uint32_t k=c->t; R(9)=0x2u; if(k) goto L8c0db352; }
L8c0db2d8:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  R(1)=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  R(2)=R(2)&0xFF;
  R(2)<<=2;
  R(6)=R(0);
  R(1)&=R(6);
  R(2)<<=2;
  R(3)=R(6)&0xFF;
  R(2)|=R(1);
  c->t=(R(3)&R(13))==0;
  ST8(R(7),R(2));
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(4)=R(0);
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c0db308; }
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0db300;
  R(4)=R(9);
L8c0db300:;
  R(0)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0db308;
  R(4)=R(8);
L8c0db308:;
  R(5)=(uint32_t)(int32_t)(int8_t)R(4);
  c->t=(int32_t)R(5)>0;
  if(!c->t) goto L8c0db318;
  R(5)<<=2;
  R(4)=0x70u;
  R(5)<<=2;
  { R(4)&=R(5); goto L8c0db326; }
L8c0db318:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0db324;
  R(4)=0x7u;
  R(0)=0u-R(5);
  { R(4)&=R(0); goto L8c0db326; }
L8c0db324:;
  R(4)=R(12);
L8c0db326:;
  R(2)=0x88u;
  R(2)&=R(6);
  R(4)|=R(2);
  ST8(R(7),R(4));
  R(7)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  R(6)=R(6)&0xFF;
  c->t=(R(6)&R(13))==0;
  ST8(R(7),R(0));
  R(7)+=0x1u;
  R(3)=R(7);
  { uint32_t k=c->t; R(7)+=0x1u; if(k) goto L8c0db346; }
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  { R(2)=R(0)&0xFF; goto L8c0db348; }
L8c0db346:;
  R(2)=0x0u;
L8c0db348:;
  R(11)+=0x1u;
  ST8(R(3),R(2));
  c->t=R(11)>=R(10);
  { uint32_t k=!c->t; R(14)+=0x8u; if(k) goto L8c0db2d8; }
L8c0db352:;
  R(5)=0x100u;
  R(6)=R(15);
  R(3)=0x8c0d8e38u;
  R(7)=R(10);
  R(6)+=0x4u;
  { c->pr=0x8c0db360u; R(4)=LD32(R(15)); f_8c0d8e38(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0db36a;
  { R(0)=0xffffffffu; goto L8c0db36c; }
L8c0db36a:;
  R(0)=0x0u;
L8c0db36c:;
  R(15)+=0x44u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db380(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0d8c06u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  { c->pr=0x8c0db38eu; R(4)=LD32(R(15)+4); f_8c0d8c06(c); }
  R(2)=0x8c0d9112u;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0db398u; R(4)+=0x8u; f_8c0d9112(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0db3a6;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0db3a6:;
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(15));
  ST8(R(2),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(2)=LD32(R(15));
  ST8(R(2)+1,R(0));
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0db3bc(SH4Ctx *c) {
  R(2)=LD32(R(7));
  R(3)=0x100u;
  c->t=(R(2)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(15)); if(k) goto L8c0db3ce; }
  R(0)=(int32_t)(int8_t)LD8(R(6)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0db3e4;
L8c0db3ce:;
  { R(4)=0xfffffffeu; goto L8c0db484; }
L8c0db3e4:;
  R(3)=LD32(R(15)+4);
  R(5)=LD32(R(6)+8);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)+=0x8u; if(k) goto L8c0db3fc; }
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(3)=LD32(R(15)+4);
  R(0)=R(0)&0xFF;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(3),R(0));
L8c0db3fc:;
  R(0)=(int32_t)(int8_t)LD8(R(5)+1);
  R(7)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(6)=R(7)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)>>=2;
  R(0)&=0x3u;
  ST8(R(4),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)&=0x3u;
  ST8(R(4)+1,R(0));
  R(0)=0x80u;
  c->t=(R(0)&R(6))==0;
  if(c->t) goto L8c0db41c;
  { R(0)=0x1u; goto L8c0db41e; }
L8c0db41c:;
  R(0)=0x0u;
L8c0db41e:;
  ST8(R(4)+2,R(0));
  R(0)=0x40u;
  c->t=(R(0)&R(6))==0;
  if(c->t) goto L8c0db42a;
  { R(0)=0x1u; goto L8c0db42c; }
L8c0db42a:;
  R(0)=0x0u;
L8c0db42c:;
  ST8(R(4)+3,R(0));
  R(0)=0x20u;
  c->t=(R(0)&R(6))==0;
  if(c->t) goto L8c0db438;
  { R(0)=0x1u; goto L8c0db43a; }
L8c0db438:;
  R(0)=0x0u;
L8c0db43a:;
  ST8(R(4)+4,R(0));
  R(0)=0x10u;
  c->t=(R(0)&R(6))==0;
  if(c->t) goto L8c0db446;
  { R(0)=0x1u; goto L8c0db448; }
L8c0db446:;
  R(0)=0x0u;
L8c0db448:;
  ST8(R(4)+5,R(0));
  R(0)=0xfu;
  R(0)&=R(6);
  R(2)=R(5);
  c->t=(int32_t)R(0)==0;
  R(7)=0x0u;
  { uint32_t k=c->t; R(2)+=0x2u; if(k) goto L8c0db464; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0db46c;
  c->t=(int32_t)R(0)==15;
  if(c->t) goto L8c0db474;
  {  goto L8c0db47a; }
L8c0db464:;
  R(0)=(int32_t)(int8_t)LD8(R(2));
  ST8(R(4)+6,R(0));
  { R(0)=(int32_t)(int8_t)LD8(R(5)+3); goto L8c0db480; }
L8c0db46c:;
  R(0)=(int32_t)(int8_t)LD8(R(2));
  ST8(R(4)+6,R(0));
  { R(0)=(int32_t)(int8_t)LD8(R(2)); goto L8c0db480; }
L8c0db474:;
  R(0)=R(7);
  { ST8(R(4)+6,R(0)); goto L8c0db480; }
L8c0db47a:;
  R(5)=0xffu;
  R(0)=R(5);
  ST8(R(4)+6,R(0));
L8c0db480:;
  ST8(R(4)+7,R(0));
  R(4)=R(7);
L8c0db484:;
  { R(0)=R(4); return; }
}
void f_8c0db488(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x1cu;
  c->macl=R(4)*R(14);
  R(3)=0x8c2eee10u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=c->macl;
  R(14)+=R(3);
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0db4b6;
  R(2)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(14)+4);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0db4a8u;  f_8c0db3bc(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(5)=LD32(R(14)+8);
  R(4)=R(0);
  R(3)=LD32(R(14)+12);
  { uint32_t tg=R(3); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0db4b6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db4c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=0x1cu;
  R(13)=R(4);
  c->macl=R(13)*R(14);
  R(3)=0x8c2eee10u;
  R(2)=0x0u;
  R(14)=c->macl;
  R(14)+=R(3);
  ST32(R(14),R(2));
  R(1)=LD32(R(14)+16);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0db504;
  R(1)=R(15);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0db4f2u; R(4)=R(13); f_8c0db3bc(c); }
  R(15)+=0x8u;
  R(7)=LD32(R(14)+8);
  R(6)=R(15);
  R(3)=LD32(R(14)+16);
  R(5)=R(0);
  R(6)+=0x4u;
  R(12)=R(0);
  { uint32_t tg=R(3); c->pr=0x8c0db504u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c0db504:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0db526;
  R(0)=0x18u;
  R(3)=LD32(R(14)+20);
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)=R(2)&0xFF;
  c->t=R(2)>R(3);
  if(!c->t) goto L8c0db526;
  R(1)=LD32(R(14)+20);
  R(5)=0x100u;
  R(3)=0x8c0d9530u;
  R(1)+=0x1u;
  R(7)=0x8c0db4c4u;
  R(6)=R(1);
  ST32(R(14)+20,R(1));
  { c->pr=0x8c0db526u; R(4)=R(13); f_8c0d9530(c); }
L8c0db526:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db532(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x1cu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  c->macl=R(12)*R(14);
  R(3)=0x8c2eee10u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=c->macl;
  R(14)+=R(3);
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0db57e;
  R(13)=0x0u;
  R(4)=0x1u;
  ST32(R(14),R(4));
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(6));
  ST32(R(14)+12,R(13));
  ST32(R(14)+16,R(5));
  R(5)=R(14);
  ST32(R(14)+20,R(4));
  R(5)+=0x18u;
  { c->pr=0x8c0db564u; R(4)=R(12); f_8c0db380(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0db584;
  R(5)=0x100u;
  R(6)=0x1u;
  R(2)=0x8c0d9530u;
  R(7)=0x8c0db4c4u;
  { c->pr=0x8c0db576u; R(4)=R(12); f_8c0d9530(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0db582;
  ST32(R(14),R(13));
L8c0db57e:;
  { R(4)=0xffffffffu; goto L8c0db584; }
L8c0db582:;
  R(4)=R(13);
L8c0db584:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db590(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x8c0f3b3cu;
  R(14)=R(4);
  R(3)=0x8c0d8c06u;
  R(4)=(int32_t)(int8_t)LD8(R(14)+R(0));
  { c->pr=0x8c0db5a2u; R(4)=R(4)&0xFF; f_8c0d8c06(c); }
  R(3)=0x8c0d8c06u;
  ST32(R(15),R(0));
  { c->pr=0x8c0db5aau; R(4)=R(14); f_8c0d8c06(c); }
  R(5)=R(0);
  R(0)=R(14);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0db5c2;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0db5c2;
  c->t=(int32_t)R(0)==14;
  if(c->t) goto L8c0db5c2;
  c->t=(int32_t)R(0)==20;
  if(c->t) goto L8c0db5c2;
  {  goto L8c0db5dc; }
L8c0db5c2:;
  { R(4)=0x1u; goto L8c0db5de; }
L8c0db5dc:;
  R(4)=0x0u;
L8c0db5de:;
  R(0)=LD32(R(15));
  R(3)=R(5);
  R(3)+=0x12u;
  R(1)=0x8c0f3b54u;
  R(0)+=0x12u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(2)=R(2)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(0)+=R(2);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db604(SH4Ctx *c) {
  R(3)=0x8c0db1bcu;
  {  { f_8c0db1bc(c); return; } }
}
void f_8c0db60a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(4));
  ST32(R(15)+8,R(5));
  { c->pr=0x8c0db618u; R(4)=LD32(R(15)+4); f_8c0db604(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0db626;
  R(0)=0xfffffffeu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0db626:;
  R(4)=R(15);
  R(14)=0x0u;
  R(3)=0x2u;
  ST32(R(15),R(14));
  ST8(R(4),R(14));
  R(4)+=0x1u;
  ST8(R(4),R(3));
  R(3)=0x1u;
  R(2)=LD32(R(15)+8);
  R(4)+=0x1u;
  R(5)=0x100u;
  R(6)=R(14);
  ST8(R(4),R(2));
  R(7)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0d8d8cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0db652u; R(4)=LD32(R(15)+16); f_8c0d8d8c(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0db664; }
  R(0)=0xffffffffu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0db664:;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db626(SH4Ctx *c) {
  R(4)=R(15);
  R(14)=0x0u;
  R(3)=0x2u;
  ST32(R(15),R(14));
  ST8(R(4),R(14));
  R(4)+=0x1u;
  ST8(R(4),R(3));
  R(3)=0x1u;
  R(2)=LD32(R(15)+8);
  R(4)+=0x1u;
  R(5)=0x100u;
  R(6)=R(14);
  ST8(R(4),R(2));
  R(7)=R(14);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x4u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0d8d8cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0db652u; R(4)=LD32(R(15)+16); f_8c0d8d8c(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0db664; }
  R(0)=0xffffffffu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0db664:;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db664(SH4Ctx *c) {
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db66e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0db67au; R(4)=LD32(R(15)); f_8c0db604(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0db686;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0db686:;
  R(4)=LD32(R(15));
  R(6)=0x1u;
  R(5)=LD32(R(15)+4);
  R(15)+=0x8u;
  R(3)=0x8c0db296u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0db296(c); return; } }
}
void f_8c0db69c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c0db6a4u; ST32(R(15),R(4)); f_8c0db604(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0db6b0;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xfffffffeu; return; }
L8c0db6b0:;
  R(4)=LD32(R(15));
  R(6)=0x1u;
  R(5)=0x8c0f3b64u;
  R(15)+=0x4u;
  R(3)=0x8c0db296u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0db296(c); return; } }
}
void f_8c0db6e0(SH4Ctx *c) {
  R(3)=0x8c2f9390u;
  ST32(R(3),R(4));
  R(2)=0x8c2f9384u;
  R(0)=LD32(R(2));
  R(0)|=0x2u;
  ST32(R(2),R(0));
  { R(0)=0x0u; return; }
}
void f_8c0db720(SH4Ctx *c) {
  R(2)=0x8c2f938cu;
  R(3)=LD32(R(15));
  ST32(R(2),R(3));
  R(3)=0x8c2f9384u;
  R(0)=LD32(R(3));
  R(0)|=0x1u;
  ST32(R(3),R(0));
  { R(0)=0x0u; return; }
}
void f_8c0db760(SH4Ctx *c) {
  R(0)=0x8c0db7c4u;
  R(6)=0x80u;
  fp_ld(c,4,R(0));
  R(0)=0x1fcu;
  R(7)=R(6);
  R(7)+=0x7fu;
  fp_ld(c,3,R(0)+R(4));
  fp_mov(c,2,3);
  fp_arith(c,2,2,4);
  fp_ftrc(c,2);
  R(5)=c->fpul;
  R(5)&=R(7);
L8c0db778:;
  R(6)+=0xffffffffu;
  R(2)=R(5);
  R(1)=R(6);
  R(1)<<=2;
  R(0)=R(1);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8c2f9184u;
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(5)=c->fpul;
  R(5)&=R(7);
  R(3)=R(5);
  R(3)<<=8;
  R(3)|=R(2);
  R(2)=R(3)&0xFFFF;
  ST32(R(1)+R(0),R(2));
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0db778;
  R(3)=0x8c2f9384u;
  R(0)=LD32(R(3));
  R(0)|=0x4u;
  ST32(R(3),R(0));
  { R(0)=0x0u; return; }
}
void f_8c0db7e0(SH4Ctx *c) {
  R(3)=0xa05f8000u;
  R(4)+=R(3);
  ST32(R(4),R(5));
  { R(0)=0x1u; return; }
}
void f_8c0db7ea(SH4Ctx *c) {
  R(0)=0xa05f8000u;
  { R(0)=LD32(R(4)+R(0)); return; }
}
void f_8c0db820(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(11)=R(4);
  R(3)=R(11);
  R(4)=0x2u;
  R(13)=R(5);
  c->t=(R(3)&R(4))==0;
  R(12)=R(6);
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c0db844; }
  R(14)=R(4);
L8c0db844:;
  R(3)=0x8c0f43dcu;
  R(8)=0x8c0df71eu;
  R(0)=LD32(R(3));
  R(9)=0x8c0df5eeu;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(10)=0x1u; if(k) goto L8c0db872; }
  c->t=(R(11)&R(10))==0;
  if(c->t) goto L8c0db864;
  R(5)=R(13);
  R(6)=R(12);
  R(7)=0x0u;
  { uint32_t tg=R(8); c->pr=0x8c0db860u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0db86e; }
L8c0db864:;
  R(5)=R(13);
  R(6)=R(12);
  R(7)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c0db86eu; R(4)=R(14); sh4_call(c,tg); }
L8c0db86e:;
  { R(4)=R(0); goto L8c0db8c2; }
L8c0db872:;
  R(1)=0x8c0dfbe0u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0db87cu; R(4)=R(15); f_8c0dfbe0(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0db8a4;
  c->t=(R(11)&R(10))==0;
  if(c->t) goto L8c0db896;
  R(5)=R(13);
  R(6)=R(12);
  R(7)=0x1u;
  { uint32_t tg=R(8); c->pr=0x8c0db892u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0db8a0; }
L8c0db896:;
  R(5)=R(13);
  R(6)=R(12);
  R(7)=0x1u;
  { uint32_t tg=R(9); c->pr=0x8c0db8a0u; R(4)=R(14); sh4_call(c,tg); }
L8c0db8a0:;
  { R(4)=R(0); goto L8c0db8c2; }
L8c0db8a4:;
  c->t=(R(11)&R(10))==0;
  if(c->t) goto L8c0db8b6;
  R(5)=R(13);
  R(6)=R(12);
  R(7)=0x0u;
  { uint32_t tg=R(8); c->pr=0x8c0db8b2u; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0db8c0; }
L8c0db8b6:;
  R(5)=R(13);
  R(6)=R(12);
  R(7)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c0db8c0u; R(4)=R(14); sh4_call(c,tg); }
L8c0db8c0:;
  R(4)=R(0);
L8c0db8c2:;
  R(0)=R(4);
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
void f_8c0db900(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x1fu;
  ST32(R(15)+8,R(5));
  c->t=(R(3)&R(4))==0;
  { uint32_t k=!c->t; ST32(R(15)+4,R(6)); if(k) goto L8c0db916; }
  { R(2)=R(4); goto L8c0db91e; }
L8c0db916:;
  R(3)=R(4);
  R(2)=0xffffffe0u;
  R(3)+=0x20u;
  R(2)&=R(3);
L8c0db91e:;
  R(5)=R(2);
  R(3)=0x8c0db820u;
  ST32(R(15)+12,R(2));
  c->t=R(5)>>31;R(5)<<=1;
  R(6)=R(15);
  { c->pr=0x8c0db92cu; R(4)=0x2u; f_8c0db820(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0db948;
  R(3)=0x8c0ecba0u;
  R(8)=LD32(R(15)+8);
  { c->pr=0x8c0db93au; R(4)=LD32(R(15)); f_8c0ecba0(c); }
  ST32(R(8),R(0));
  R(3)=0x8c0ecba0u;
  R(4)=LD32(R(15));
  R(8)=LD32(R(15)+4);
  { c->pr=0x8c0db946u; R(4)+=0x4u; f_8c0ecba0(c); }
  ST32(R(8),R(0));
L8c0db948:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0db980(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x1fu;
  R(14)=R(5);
  c->t=(R(3)&R(4))==0;
  { uint32_t k=!c->t; ST32(R(15),R(6)); if(k) goto L8c0db99a; }
  { R(2)=R(4); goto L8c0db9a2; }
L8c0db99a:;
  R(3)=R(4);
  R(2)=0xffffffe0u;
  R(3)+=0x20u;
  R(2)&=R(3);
L8c0db9a2:;
  R(3)=0x0u;
  ST32(R(15)+4,R(2));
  ST32(R(14),R(3));
  R(6)=R(14);
  R(5)=LD32(R(15)+4);
  R(3)=0x8c0ec840u;
  c->t=R(5)>>31;R(5)<<=1;
  { c->pr=0x8c0db9b4u; R(4)=0x2u; f_8c0ec840(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0db9d0;
  R(3)=0x8c0ecba0u;
  R(13)=LD32(R(14));
  { c->pr=0x8c0db9c2u; R(4)=R(13); f_8c0ecba0(c); }
  R(3)=0x8c0ecba0u;
  R(4)=R(13);
  ST32(R(14),R(0));
  R(8)=LD32(R(15));
  { c->pr=0x8c0db9ceu; R(4)+=0x4u; f_8c0ecba0(c); }
  ST32(R(8),R(0));
L8c0db9d0:;
  R(0)=R(12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dba00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(2)=0x8c0dfa40u;
  ST32(R(15)+4,R(4));
  R(4)=R(15);
  ST32(R(15),R(6));
  { c->pr=0x8c0dba10u; R(4)+=0x8u; f_8c0dfa40(c); }
  R(0)=LD32(R(15)+4);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c0dba38;
  R(3)=0x14u;
  R(2)=R(15);
  R(15)-=R(3);
  R(2)+=0x8u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(2)+4);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(1));
  R(3)=LD32(R(2)+8);
  R(1)=LD32(R(2)+12);
  ST32(R(15)+8,R(3));
  ST32(R(15)+12,R(1));
  R(3)=LD32(R(2)+16);
  ST32(R(15)+16,R(3));
  R(5)=LD32(R(15)+20);
  { R(4)=0x1u; goto L8c0dba58; }
L8c0dba38:;
  R(2)=0x14u;
  R(3)=R(15);
  R(15)-=R(2);
  R(3)+=0x8u;
  R(2)=LD32(R(3));
  R(4)=0x0u;
  R(1)=LD32(R(3)+4);
  ST32(R(15),R(2));
  ST32(R(15)+4,R(1));
  R(2)=LD32(R(3)+8);
  R(1)=LD32(R(3)+12);
  ST32(R(15)+8,R(2));
  ST32(R(15)+12,R(1));
  R(2)=LD32(R(3)+16);
  ST32(R(15)+16,R(2));
  R(5)=LD32(R(15)+20);
L8c0dba58:;
  { c->pr=0x8c0dba5cu;  f_8c0dba64(c); }
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0dba64(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0f4420u;
  R(8)=R(4);
  R(13)=0x0u;
  R(12)=R(15);
  ST32(R(15)+8,R(5));
  R(14)=R(13);
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(12)+=0x2cu; if(k) goto L8c0dbaca; }
  R(7)=0xf000u;
L8c0dba8c:;
  R(3)=(int32_t)(int16_t)LD16(R(4));
  R(2)=LD32(R(12));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(7);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0dbac0;
  R(6)=LD32(R(12)+16);
  R(2)=0x0u;
  c->t=R(2)>=R(6);
  { uint32_t k=c->t; R(5)=R(13); if(k) goto L8c0dbac0; }
L8c0dbaa2:;
  R(3)=R(4);
  R(1)=R(5);
  R(3)+=0xcu;
  R(1)<<=2;
  R(1)+=R(3);
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0dbaba;
  R(11)=R(5);
  R(14)=R(4);
  R(4)=R(13);
  R(5)=R(6);
L8c0dbaba:;
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c0dbaa2;
L8c0dbac0:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0dbac6;
  R(4)=LD32(R(4)+4);
L8c0dbac6:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0dba8c;
L8c0dbaca:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0dbad2;
  {  goto L8c0dbbd0; }
L8c0dbad2:;
  { c->pr=0x8c0dbad6u;  f_8c0dbc0a(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0dbae0;
  {  goto L8c0dbbcc; }
L8c0dbae0:;
  R(4)=R(14);
  R(4)+=0xcu;
L8c0dbae4:;
  R(3)=R(14);
  ST32(R(4),R(13));
  R(3)+=0x4cu;
  R(4)+=0x4u;
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c0dbae4;
  R(4)=0x8c0f4420u;
  R(11)=R(13);
  { c->pr=0x8c0dbaf8u; R(5)=R(14); f_8c0dbc4c(c); }
  R(2)=(int32_t)(int16_t)LD16(R(14));
  R(3)=LD32(R(12));
  R(10)=0x8c0df5eeu;
  R(2)|=R(3);
  R(3)=0x8c0f43dcu;
  R(9)=0x8c0df71eu;
  ST16(R(14),R(2));
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=LD32(R(12)+12); if(k) goto L8c0dbb32; }
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0dbb22;
  R(6)=R(14);
  R(5)=R(13);
  R(6)+=0x8u;
  R(7)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c0dbb1eu; R(4)=0x4u; sh4_call(c,tg); }
  {  goto L8c0dbb2e; }
L8c0dbb22:;
  R(6)=R(14);
  R(5)=R(13);
  R(6)+=0x8u;
  R(7)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c0dbb2eu; R(4)=0x4u; sh4_call(c,tg); }
L8c0dbb2e:;
  { R(4)=R(0); goto L8c0dbbc2; }
L8c0dbb32:;
  R(1)=0x8c0dfbe0u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0dbb3cu; R(4)=R(15); f_8c0dfbe0(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0dbba0;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0dbb58;
  R(6)=R(14);
  R(5)=R(13);
  R(6)+=0x8u;
  R(7)=0x1u;
  { uint32_t tg=R(9); c->pr=0x8c0dbb54u; R(4)=0x4u; sh4_call(c,tg); }
  {  goto L8c0dbb64; }
L8c0dbb58:;
  R(6)=R(14);
  R(5)=R(13);
  R(6)+=0x8u;
  R(7)=0x1u;
  { uint32_t tg=R(10); c->pr=0x8c0dbb64u; R(4)=0x4u; sh4_call(c,tg); }
L8c0dbb64:;
  { R(4)=R(0); goto L8c0dbbc2; }
L8c0dbba0:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0dbbb4;
  R(6)=R(14);
  R(5)=R(13);
  R(6)+=0x8u;
  R(7)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c0dbbb0u; R(4)=0x4u; sh4_call(c,tg); }
  {  goto L8c0dbbc0; }
L8c0dbbb4:;
  R(6)=R(14);
  R(5)=R(13);
  R(6)+=0x8u;
  R(7)=0x0u;
  { uint32_t tg=R(10); c->pr=0x8c0dbbc0u; R(4)=0x4u; sh4_call(c,tg); }
L8c0dbbc0:;
  R(4)=R(0);
L8c0dbbc2:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0dbbd0;
  R(3)=0x8c0dfb68u;
  { c->pr=0x8c0dbbccu; R(4)=R(14); f_8c0dfb68(c); }
L8c0dbbcc:;
  { R(0)=0x3u; goto L8c0dbbf6; }
L8c0dbbd0:;
  R(3)=LD32(R(12)+4);
  R(0)=LD32(R(14)+8);
  R(3)>>=2;
  R(2)=LD32(R(15)+8);
  c->macl=R(11)*R(3);
  R(11)<<=2;
  R(3)=c->macl;
  R(3)<<=2;
  R(3)+=R(0);
  ST32(R(2),R(3));
  R(3)=R(14);
  R(2)=LD32(R(15)+8);
  R(3)+=0xcu;
  R(11)+=R(3);
  ST32(R(11),R(2));
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)|=0x2u;
  ST16(R(14),R(0));
  R(0)=0x0u;
L8c0dbbf6:;
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
void f_8c0dbc0a(SH4Ctx *c) {
  R(4)=0x8c0f43dcu;
  R(5)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(5);
  R(14)=LD32(R(4)+12);
  R(7)=0x1u;
  c->t=R(3)>=R(14);
  { uint32_t k=c->t; R(6)=0x4cu; if(k) goto L8c0dbc46; }
L8c0dbc1c:;
  c->macl=R(5)*R(6);
  R(0)=0x48u;
  R(3)=LD32(R(4)+R(0));
  R(1)=c->macl;
  R(1)+=R(3);
  R(2)=(int32_t)(int16_t)LD16(R(1));
  R(2)=R(2)&0xFFFF;
  c->t=(R(2)&R(7))==0;
  if(!c->t) goto L8c0dbc40;
  c->macl=R(5)*R(6);
  R(2)=LD32(R(4)+R(0));
  R(14)=c->macl;
  R(2)+=R(14);
  ST16(R(2),R(7));
  R(0)=LD32(R(4)+R(0));
  R(0)+=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0dbc40:;
  R(5)+=0x1u;
  c->t=R(5)>=R(14);
  if(!c->t) goto L8c0dbc1c;
L8c0dbc46:;
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dbc4c(SH4Ctx *c) {
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0dbc56;
  { R(3)=0x0u; goto L8c0dbc58; }
L8c0dbc56:;
  R(3)=LD32(R(4));
L8c0dbc58:;
  ST32(R(5)+4,R(3));
  { ST32(R(4),R(5)); return; }
}
void f_8c0dbc80(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(7)=0x8c2ef304u;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(0)=R(4);
  R(2)=R(7);
  R(0)<<=2;
  R(3)=R(7);
  R(2)+=0x30u;
  R(0)<<=2;
  R(2)+=R(0);
  R(3)+=0x30u;
  ST32(R(2),R(5));
  R(2)=R(7);
  R(3)+=R(0);
  R(2)+=0x30u;
  ST32(R(3)+12,R(6));
  R(3)=0x0u;
  R(2)+=R(0);
  ST32(R(2)+4,R(3));
  R(2)=R(7);
  R(2)+=0x30u;
  R(0)+=R(2);
  R(2)=0xffffff0fu;
  ST32(R(0)+8,R(4));
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=0x0u;
  { R(15)+=0x4u; return; }
}
void f_8c0dbd00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  { c->pr=0x8c0dbd0eu; ST32(R(15),R(4)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dbd18;
  R(0)=0xeeeeu;
  {  goto L8c0dbd60; }
L8c0dbd18:;
  R(4)=LD32(R(15));
  R(14)=0x8c0db7e0u;
  R(3)=LD32(R(4)+16);
  R(13)=R(4);
  R(13)+=0x18u;
  R(3)+=0x1u;
  R(5)=R(3);
  R(5)<<=2;
  ST32(R(4)+16,R(3));
  c->t=R(5)>>31;R(5)<<=1;
  ST32(R(15)+4,R(3));
  R(3)=R(13);
  R(4)=0x140u;
  R(3)+=0x30u;
  ST32(R(15),R(5));
  R(5)+=R(3);
  { uint32_t tg=R(14); c->pr=0x8c0dbd3cu; R(5)=LD32(R(5)); sh4_call(c,tg); }
  R(5)=R(13);
  R(3)=LD32(R(15));
  R(4)=0x124u;
  R(5)+=0x30u;
  R(5)+=R(3);
  { uint32_t tg=R(14); c->pr=0x8c0dbd4au; R(5)=LD32(R(5)+4); sh4_call(c,tg); }
  R(4)=0x160u;
  R(5)=0x80000000u;
  { uint32_t tg=R(14); c->pr=0x8c0dbd52u;  sh4_call(c,tg); }
  R(4)=0x144u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0db7eau;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0db7ea(c); return; } }
L8c0dbd60:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dbda0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; ST32(R(15),R(4)); if(k) goto L8c0dbdb4; }
  R(0)=0xeeeeu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0dbdb4:;
  R(2)=0x8c0d1880u;
  R(4)=LD32(R(15));
  R(3)=0xa5000000u;
  { c->pr=0x8c0dbdbeu; R(4)+=R(3); f_8c0d1880(c); }
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0dbe00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=R(6);
  c->t=(R(12)&R(12))==0;
  R(9)=R(4);
  R(10)=R(5);
  { uint32_t k=!c->t; R(14)=R(7); if(k) goto L8c0dbe24; }
  R(0)=0xeeeeu;
  {  goto L8c0dbf3a; }
L8c0dbe24:;
  R(0)=sh4_getsr(c);
  R(3)=0x1fu;
  c->t=(R(3)&R(9))==0;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c0dbe38; }
  {  goto L8c0dbf24; }
L8c0dbe38:;
  R(1)=0x1fu;
  c->t=(R(1)&R(10))==0;
  if(c->t) goto L8c0dbe42;
  {  goto L8c0dbf24; }
L8c0dbe42:;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0dbe4a;
  {  goto L8c0dbf24; }
L8c0dbe4a:;
  R(3)=0x8c0ef1e0u;
  { c->pr=0x8c0dbe50u;  f_8c0ef1e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dbe58;
  {  goto L8c0dbf24; }
L8c0dbe58:;
  R(11)=0xffffffe0u;
  R(11)&=R(12);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0dbee4;
  R(2)=0x8c0dcb80u;
  R(8)=0x8c0dc7a0u;
  { c->pr=0x8c0dbe68u;  f_8c0dcb80(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dbe7a;
L8c0dbe6c:;
  { uint32_t tg=R(8); c->pr=0x8c0dbe70u; R(4)=0x1u; sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c0dbe6c; }
  {  goto L8c0dbec0; }
L8c0dbe7a:;
  { uint32_t tg=R(8); c->pr=0x8c0dbe7eu; R(4)=0x1u; sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c0dbec0; }
  R(4)=0xa4000000u;
  R(6)=R(12);
  R(2)=0x8c0d1880u;
  R(5)=R(10);
  { c->pr=0x8c0dbe90u; R(4)+=R(9); f_8c0d1880(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0dbf38;
  { uint32_t tg=R(14); c->pr=0x8c0dbe98u; R(4)=0x0u; sh4_call(c,tg); }
  {  goto L8c0dbf38; }
L8c0dbec0:;
  R(2)=0x8c0ef860u;
  R(5)=R(9);
  R(7)=R(11);
  R(6)=R(10);
  { c->pr=0x8c0dbeccu; R(4)=R(13); f_8c0ef860(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0dbed8;
  R(2)=0x8c0dde00u;
  R(5)=R(14);
  { c->pr=0x8c0dbed8u; R(4)=R(13); f_8c0dde00(c); }
L8c0dbed8:;
  R(3)=0x8c0dd9a0u;
  { c->pr=0x8c0dbedeu; R(4)=R(13); f_8c0dd9a0(c); }
  R(2)=0x8c2ef588u;
  R(13)=R(0);
  ST32(R(2),R(0));
L8c0dbee4:;
  R(6)=0x1fu;
  R(6)&=R(12);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0dbefc;
  R(3)=0xa4000000u;
  R(4)=R(9);
  R(2)=0x8c0d1880u;
  R(5)=R(10);
  R(5)+=R(11);
  R(4)+=R(11);
  { c->pr=0x8c0dbefcu; R(4)+=R(3); f_8c0d1880(c); }
L8c0dbefc:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0dbf38;
  R(2)=0x8c0dcb80u;
  { c->pr=0x8c0dbf06u;  f_8c0dcb80(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dbf38;
  R(2)=0x8c0ef1e0u;
  { c->pr=0x8c0dbf10u;  f_8c0ef1e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dbf38;
  R(14)=0x101u;
  R(12)=0x8c0dd400u;
L8c0dbf18:;
  { uint32_t tg=R(12); c->pr=0x8c0dbf1cu; R(4)=R(13); sh4_call(c,tg); }
  c->t=R(0)==R(14);
  if(!c->t) goto L8c0dbf18;
  {  goto L8c0dbf38; }
L8c0dbf24:;
  R(4)=0xa4000000u;
  R(6)=R(12);
  R(3)=0x8c0d1880u;
  R(5)=R(10);
  { c->pr=0x8c0dbf30u; R(4)+=R(9); f_8c0d1880(c); }
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0dbf38;
  { uint32_t tg=R(14); c->pr=0x8c0dbf38u; R(4)=0x0u; sh4_call(c,tg); }
L8c0dbf38:;
  R(0)=0x0u;
L8c0dbf3a:;
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
void f_8c0dbfa0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=0x10000000u;
  R(5)=R(15);
  ST32(R(15),R(4));
  R(6)=0x18u;
  R(4)=0x80000000u;
  R(5)+=0x4u;
  ST32(R(15)+4,R(3));
  R(3)=0x8c0dbda0u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+12,R(4));
  ST32(R(15)+16,R(4));
  ST32(R(15)+20,R(4));
  ST32(R(15)+24,R(4));
  { c->pr=0x8c0dbfc2u; R(4)=LD32(R(15)); f_8c0dbda0(c); }
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x18u; return; }
}
void f_8c0dbfca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffc58u;
  R(15)+=R(0);
  R(3)=R(4);
  R(3)+=0x18u;
  ST32(R(15),R(3));
  R(13)=R(4);
  R(2)=LD32(R(13)+4);
  R(12)=0x0u;
  R(3)=LD32(R(13)+8);
  R(7)=R(12);
  R(9)=0x108u;
  c->macl=R(2)*R(3);
  R(10)=0x80000000u;
  R(2)=R(12);
  R(9)+=R(15);
  R(1)=c->macl;
  ST32(R(15)+12,R(1));
  R(3)=LD32(R(13)+12);
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(11)=0x54u; if(k) goto L8c0dc0b6; }
L8c0dc004:;
  c->macl=R(7)*R(11);
  R(0)=LD32(R(15));
  R(3)=R(7);
  R(3)<<=2;
  R(6)=R(12);
  R(2)=R(0);
  R(2)+=0x30u;
  c->t=R(3)>>31;R(3)<<=1;
  R(14)=c->macl;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  R(3)=0x7f000000u;
  R(14)+=R(9);
  R(2)=R(1);
  R(4)=R(14);
  R(2)&=R(3);
  R(5)=R(4);
  ST32(R(15)+8,R(1));
  R(5)+=0x18u;
  ST32(R(4),R(2));
  R(2)=R(7);
  R(2)<<=2;
  ST32(R(15)+4,R(12));
  c->t=R(2)>>31;R(2)<<=1;
  ST32(R(15)+16,R(2));
L8c0dc036:;
  R(0)=LD32(R(15)+8);
  R(3)=0u-R(6);
  R(2)=LD32(R(15)+16);
  R(8)=0x3u;
  R(0)=sh4_shld(R(0),R(3));
  R(3)=LD32(R(15));
  R(8)&=R(0);
  R(0)=0x8c0f3b6cu;
  R(1)=R(3);
  R(1)+=0x30u;
  R(1)+=R(2);
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(1)+4);
  R(4)=R(5);
  c->t=(R(8)&R(8))==0;
  R(2)+=R(3);
  R(3)=R(8);
  ST32(R(4)+4,R(2));
  R(3)<<=2;
  R(2)=LD32(R(3)+R(0));
  R(2)<<=2;
  ST32(R(4)+8,R(2));
  R(3)=LD32(R(15)+12);
  R(1)=LD32(R(15)+4);
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(1)+=R(3);
  { uint32_t k=!c->t; ST32(R(15)+4,R(1)); if(k) goto L8c0dc0a0; }
  { ST32(R(4),R(10)); goto L8c0dc0a2; }
L8c0dc0a0:;
  ST32(R(4),R(12));
L8c0dc0a2:;
  R(3)=R(14);
  R(3)+=0x54u;
  R(5)+=0xcu;
  c->t=R(5)>=R(3);
  { uint32_t k=!c->t; R(6)+=0x4u; if(k) goto L8c0dc036; }
  R(3)=LD32(R(13)+12);
  R(7)+=0x1u;
  c->t=R(7)>=R(3);
  if(!c->t) goto L8c0dc004;
L8c0dc0b6:;
  R(1)=LD32(R(15));
  R(2)=0x8c2ef574u;
  R(3)=LD32(R(1)+12);
  ST32(R(15)+20,R(3));
  R(0)=LD32(R(2));
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0dc0d0;
  R(4)=LD32(R(15));
  { c->pr=0x8c0dc0cau; R(4)=LD32(R(4)+12); f_8c0dbfa0(c); }
  R(2)=LD32(R(15)+20);
  R(2)+=R(0);
  ST32(R(15)+20,R(2));
L8c0dc0d0:;
  R(3)=LD32(R(13)+4);
  R(1)=0x0u;
  R(8)=R(12);
  R(14)=R(15);
  ST32(R(15)+52,R(3));
  R(2)=LD32(R(13)+8);
  ST32(R(15)+56,R(2));
  R(3)=LD32(R(15)+12);
  R(3)+=0xffffffffu;
  ST32(R(15)+36,R(3));
  R(2)=LD32(R(15)+12);
  c->t=R(1)>=R(2);
  { uint32_t k=!c->t; R(14)+=0x48u; if(k) goto L8c0dc0f0; }
  {  goto L8c0dc2fc; }
L8c0dc0f0:;
  R(0)=0x40u;
  ST32(R(15)+40,R(8));
  ST32(R(15)+60,R(12));
  ST32(R(15)+R(0),R(12));
  R(3)=LD32(R(15)+36);
  c->t=R(8)==R(3);
  if(!c->t) goto L8c0dc10a;
  R(0)=0x40u;
  R(1)=R(15);
  R(0)=LD32(R(15)+R(0));
  R(1)+=0x40u;
  R(0)|=0x1u;
  ST32(R(1),R(0));
L8c0dc10a:;
  R(3)=LD32(R(13)+20);
  R(4)=R(15);
  { uint32_t tg=R(3); c->pr=0x8c0dc112u; R(4)+=0x28u; sh4_call(c,tg); }
  R(4)=LD32(R(15)+44);
  R(2)=0x3fu;
  R(5)=LD32(R(15)+48);
  R(3)=0x3fu;
  R(2)&=R(4);
  R(3)&=R(5);
  R(2)<<=2;
  R(3)<<=8;
  R(3)|=R(2);
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(15)+52);
  c->macl=R(2)*R(5);
  R(2)=0x0u;
  R(5)=c->macl;
  R(5)+=R(4);
  ST32(R(15)+8,R(5));
  R(3)=LD32(R(13)+12);
  c->t=R(2)>=R(3);
  { uint32_t k=!c->t; R(4)=R(12); if(k) goto L8c0dc13e; }
  {  goto L8c0dc2be; }
L8c0dc13e:;
  c->macl=R(4)*R(11);
  R(3)=R(4);
  c->t=R(3)>>31;R(3)<<=1;
  R(2)=R(4);
  R(3)+=R(2);
  R(2)=LD32(R(15)+16);
  R(3)<<=2;
  R(5)=c->macl;
  c->macl=R(4)*R(11);
  c->t=R(3)>>31;R(3)<<=1;
  R(7)=R(4);
  R(5)+=R(9);
  R(1)=LD32(R(5));
  R(3)+=R(14);
  c->t=R(7)>>31;R(7)<<=1;
  R(1)|=R(2);
  ST32(R(3),R(1));
  R(3)=R(4);
  R(6)=c->macl;
  R(7)+=R(3);
  ST32(R(15)+4,R(12));
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  R(6)+=R(9);
  R(7)+=R(14);
  R(6)+=0x18u;
  R(7)+=0x4u;
L8c0dc174:;
  R(0)=LD32(R(15)+60);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(5)=R(6); if(k) goto L8c0dc1c0; }
  R(2)=LD32(R(5));
  { ST32(R(15),R(2)); goto L8c0dc1c2; }
L8c0dc1c0:;
  ST32(R(15),R(10));
L8c0dc1c2:;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(5)+8);
  R(1)=LD32(R(5)+4);
  c->macl=R(2)*R(3);
  R(0)=LD32(R(15));
  R(3)=c->macl;
  R(3)+=R(1);
  R(3)|=R(0);
  ST32(R(7),R(3));
  R(3)=0x5u;
  R(2)=LD32(R(15)+4);
  R(7)+=0x4u;
  R(2)+=0x1u;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  ST32(R(15)+4,R(2));
  { uint32_t k=!c->t; R(6)+=0xcu; if(k) goto L8c0dc174; }
  R(5)=R(4);
  R(0)=R(13);
  R(5)<<=2;
  R(0)+=0x48u;
  c->t=R(5)>>31;R(5)<<=1;
  R(0)=LD32(R(5)+R(0));
  c->t=(R(0)&0x40)==0;
  { uint32_t k=c->t; R(2)=R(13); if(k) goto L8c0dc20c; }
  R(6)=R(4);
  c->t=R(6)>>31;R(6)<<=1;
  R(3)=R(4);
  R(6)+=R(3);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(14);
  ST32(R(15)+32,R(6));
  R(6)+=0x4u;
  R(3)=LD32(R(6)+12);
  ST32(R(6)+4,R(3));
L8c0dc20c:;
  R(2)+=0x48u;
  R(3)=0x4000u;
  R(2)+=R(5);
  R(1)=LD32(R(2));
  c->t=(R(1)&R(3))==0;
  { uint32_t k=c->t; R(3)=R(13); if(k) goto L8c0dc230; }
  R(6)=R(4);
  c->t=R(6)>>31;R(6)<<=1;
  R(2)=R(4);
  R(6)+=R(2);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(14);
  ST32(R(15)+28,R(6));
  R(6)+=0x4u;
  R(2)=LD32(R(6)+4);
  ST32(R(6)+12,R(2));
L8c0dc230:;
  R(3)+=0x48u;
  R(2)=0x40000u;
  R(3)+=R(5);
  R(1)=LD32(R(3));
  c->t=(R(1)&R(2))==0;
  if(c->t) goto L8c0dc252;
  R(6)=R(4);
  c->t=R(6)>>31;R(6)<<=1;
  R(3)=R(4);
  R(6)+=R(3);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(14);
  ST32(R(15)+24,R(6));
  R(6)+=0x4u;
  R(3)=LD32(R(6)+8);
  ST32(R(6)+16,R(3));
L8c0dc252:;
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c0dc2b2;
  R(0)=R(13);
  R(0)+=0x48u;
  R(0)=LD32(R(5)+R(0));
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0dc282;
  R(2)=R(4);
  R(1)=R(4);
  c->t=R(2)>>31;R(2)<<=1;
  R(3)=R(4);
  R(1)+=0xffffffffu;
  R(2)+=R(3);
  R(3)=R(1);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(14);
  R(0)=LD32(R(1)+8);
  R(2)+=R(14);
  ST32(R(2)+8,R(0));
L8c0dc282:;
  R(3)=R(13);
  R(3)+=0x48u;
  R(5)+=R(3);
  R(3)=0x8000u;
  R(2)=LD32(R(5));
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0dc2b2;
  R(0)=R(4);
  R(1)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=R(4);
  R(1)+=0xffffffffu;
  R(0)+=R(2);
  R(2)=R(1);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(2);
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(14);
  R(2)=LD32(R(1)+16);
  R(0)+=R(14);
  ST32(R(0)+16,R(2));
L8c0dc2b2:;
  R(3)=LD32(R(13)+12);
  R(4)+=0x1u;
  c->t=R(4)>=R(3);
  if(c->t) goto L8c0dc2be;
  {  goto L8c0dc13e; }
L8c0dc2be:;
  R(1)=R(15);
  R(1)+=0x40u;
  R(0)=LD32(R(1));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c0dc2fc;
  R(6)=LD32(R(13)+12);
  R(5)=R(14);
  ST32(R(15),R(6));
  R(3)=R(6);
  R(4)=LD32(R(15));
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(2)=LD32(R(15)+20);
  c->macl=R(8)*R(4);
  R(6)<<=2;
  c->t=R(6)>>31;R(6)<<=1;
  R(4)=c->macl;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(3);
  R(3)=0x8c0dbda0u;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c0dc2f0u; R(4)+=R(2); f_8c0dbda0(c); }
  R(2)=LD32(R(15)+12);
  R(8)+=0x1u;
  c->t=R(8)>=R(2);
  if(c->t) goto L8c0dc2fc;
  {  goto L8c0dc0f0; }
L8c0dc2fc:;
  R(3)=LD32(R(13)+12);
  R(3)+=0xffffffffu;
  R(0)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(0);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(14);
  R(2)=LD32(R(3));
  R(2)|=R(10);
  ST32(R(3),R(2));
  R(6)=LD32(R(13)+12);
  R(3)=R(6);
  ST32(R(15),R(6));
  c->t=R(6)>>31;R(6)<<=1;
  {  goto L8c0dc340; }
L8c0dc340:;
  R(6)+=R(3);
  R(2)=LD32(R(15)+40);
  R(3)=LD32(R(15));
  R(6)<<=2;
  R(1)=LD32(R(15)+20);
  c->t=R(6)>>31;R(6)<<=1;
  c->macl=R(2)*R(3);
  R(5)=R(14);
  R(4)=c->macl;
  R(2)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(2);
  R(2)=0x8c0dbda0u;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c0dc362u; R(4)+=R(1); f_8c0dbda0(c); }
  R(1)=0x3a8u;
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
void f_8c0dc3a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(3)=0x8c0ef940u;
  { c->pr=0x8c0dc3b8u; R(9)=R(4); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0dc46e;
  R(6)=R(9);
  R(4)=LD32(R(6)+12);
  R(5)=R(9);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)+=0x18u; if(k) goto L8c0dc46e; }
  R(2)=0x8u;
  c->t=R(4)>R(2);
  if(c->t) goto L8c0dc46e;
  R(3)=LD32(R(6)+8);
  R(10)=0x0u;
  R(2)=LD32(R(6)+4);
  R(13)=R(10);
  R(8)=LD32(R(6)+12);
  R(12)=R(15);
  c->macl=R(2)*R(3);
  R(7)=0x8c0f3b6cu;
  R(2)=R(13);
  R(11)=R(10);
  R(12)+=0x4u;
  R(4)=c->macl;
  c->macl=R(4)*R(8);
  R(4)<<=2;
  ST32(R(15),R(4));
  R(8)=c->macl;
  R(3)=R(8);
  c->t=R(8)>>31;R(8)<<=1;
  R(8)+=R(3);
  R(3)=LD32(R(6)+12);
  R(8)<<=2;
  c->t=R(8)>>31;R(8)<<=1;
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(4)=0x3u; if(k) goto L8c0dc464; }
L8c0dc400:;
  R(14)=R(13);
  R(3)=R(6);
  R(14)<<=2;
  R(3)+=0x48u;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  R(14)=LD32(R(14));
  R(0)=R(14);
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=R(4);
  R(0)<<=2;
  R(2)=LD32(R(7)+R(0));
  R(0)=R(14);
  R(0)>>=8;
  R(0)&=R(4);
  R(0)<<=2;
  R(1)=LD32(R(7)+R(0));
  R(0)=R(14);
  R(0)>>=8;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=R(4);
  R(0)<<=2;
  R(2)+=R(1);
  R(1)=LD32(R(7)+R(0));
  R(0)=R(14);
  R(0)>>=16;
  R(0)&=R(4);
  R(0)<<=2;
  R(2)+=R(1);
  R(1)=LD32(R(7)+R(0));
  R(0)=R(14);
  R(0)&=R(4);
  R(0)<<=2;
  R(2)+=R(1);
  R(3)=LD32(R(7)+R(0));
  R(14)=R(2);
  R(2)=LD32(R(15));
  R(14)+=R(3);
  R(0)=R(13);
  c->macl=R(14)*R(2);
  R(13)+=0x1u;
  R(0)<<=2;
  R(14)=c->macl;
  ST32(R(12)+R(0),R(14));
  R(3)=LD32(R(6)+12);
  c->t=R(13)>=R(3);
  { uint32_t k=!c->t; R(11)+=R(14); if(k) goto L8c0dc400; }
L8c0dc464:;
  R(3)=LD32(R(5)+4);
  R(1)=R(11);
  R(1)+=R(8);
  c->t=R(1)>R(3);
  if(!c->t) goto L8c0dc4a0;
L8c0dc46e:;
  R(0)=0xeeeeu;
  {  goto L8c0dc51a; }
L8c0dc4a0:;
  R(4)=LD32(R(5)+4);
  R(2)=LD32(R(5)+12);
  R(4)-=R(11);
  R(7)=0xffffff00u;
  R(4)-=R(8);
  R(4)>>=2;
  R(3)=R(4);
  c->t=R(4)>>31;R(4)<<=1;
  R(2)-=R(11);
  R(4)+=R(3);
  R(3)=0xffffff80u;
  R(2)+=R(7);
  R(2)&=R(3);
  R(3)=0xff000000u;
  ST32(R(5)+16,R(2));
  R(2)=0xffffffe0u;
  R(1)=LD32(R(5));
  R(4)+=R(1);
  R(4)&=R(2);
  ST32(R(5)+24,R(4));
  R(1)=LD32(R(5)+16);
  ST32(R(5)+28,R(1));
  R(0)=LD32(R(5)+24);
  R(7)+=R(0);
  R(0)=0x88u;
  ST32(R(5)+20,R(7));
  R(4)=LD32(R(6)+R(0));
  R(2)=LD32(R(5)+8);
  R(0)=LD32(R(5)+36);
  R(1)=LD32(R(4)+8);
  R(0)-=R(2);
  R(1)&=R(3);
  c->t=R(0)>>31;R(0)<<=1;
  R(7)=R(10);
  R(1)|=R(0);
  ST32(R(4)+8,R(1));
  R(1)=0x0u;
  R(2)=LD32(R(6)+12);
  c->t=R(1)>=R(2);
  { uint32_t k=c->t; R(4)=R(10); if(k) goto L8c0dc514; }
L8c0dc4f2:;
  R(3)=R(4);
  R(2)=R(5);
  R(1)=LD32(R(5)+16);
  R(3)<<=2;
  R(2)+=0x30u;
  R(0)=R(4);
  c->t=R(3)>>31;R(3)<<=1;
  R(1)+=R(7);
  R(3)+=R(2);
  R(0)<<=2;
  ST32(R(3)+4,R(1));
  R(2)=LD32(R(6)+12);
  R(4)+=0x1u;
  R(3)=LD32(R(12)+R(0));
  c->t=R(4)>=R(2);
  R(7)+=R(3);
  if(!c->t) goto L8c0dc4f2;
L8c0dc514:;
  { c->pr=0x8c0dc518u; R(4)=R(9); f_8c0dbfca(c); }
  R(0)=0x0u;
L8c0dc51a:;
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
void f_8c0dc560(SH4Ctx *c) {
  R(2)=LD32(R(4));
  R(3)=0xdfffffffu;
  R(2)&=R(3);
  { ST32(R(4),R(2)); return; }
}
void f_8c0dc5a0(SH4Ctx *c) {
  R(2)=LD32(R(4));
  R(3)=0x40000000u;
  R(2)|=R(3);
  { ST32(R(4),R(2)); return; }
}
void f_8c0dc5e0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0dc5eeu; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dc5fc;
  R(0)=0xeeeeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0dc5fc:;
  R(0)=0x88u;
  R(4)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  R(4)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0dc612;
  R(2)=LD32(R(4)+36);
  R(3)=0x10000u;
  R(2)|=R(3);
  { ST32(R(4)+36,R(2)); goto L8c0dc61a; }
L8c0dc612:;
  R(1)=LD32(R(4)+36);
  R(3)=0xfffeffffu;
  R(1)&=R(3);
  ST32(R(4)+36,R(1));
L8c0dc61a:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0dc660(SH4Ctx *c) {
  R(4)=0x8c2ef304u;
  R(5)=0xeeeeu;
  R(3)=LD32(R(4)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0dc67e;
  R(0)=LD32(R(4)+8);
  R(5)=0x0u;
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
L8c0dc67e:;
  { R(0)=R(5); return; }
}
void f_8c0dc6c0(SH4Ctx *c) {
  R(2)=LD32(R(4));
  R(3)=0x20000000u;
  R(2)|=R(3);
  { ST32(R(4),R(2)); return; }
}
void f_8c0dc700(SH4Ctx *c) {
  R(2)=LD32(R(4));
  R(3)=0xbfffffffu;
  R(2)&=R(3);
  { ST32(R(4),R(2)); return; }
}
void f_8c0dc740(SH4Ctx *c) {
  R(3)=LD32(R(15));
  R(1)=0x3u;
  R(6)&=R(1);
  R(3)&=R(1);
  R(3)<<=8;
  R(6)<<=2;
  R(7)&=R(1);
  R(3)<<=2;
  R(6)<<=2;
  R(7)<<=8;
  R(3)<<=2;
  R(6)|=R(7);
  R(6)|=R(3);
  R(3)=LD32(R(15)+4);
  R(5)&=R(1);
  R(3)&=R(1);
  R(3)<<=16;
  R(6)|=R(3);
  R(6)|=R(5);
  R(5)=0x100000u;
  R(5)|=R(6);
  ST32(R(4),R(5));
  { R(0)=0x0u; return; }
}
void f_8c0dc7a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c0ecc00u;
  ST32(R(15),R(4));
  R(4)=0x0u;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)=R(4); if(k) goto L8c0dc7ca; }
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(14)+12,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
L8c0dc7ca:;
  R(2)=LD32(R(14)+8);
  R(2)+=0x1u;
  ST32(R(14)+8,R(2));
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(5)=0x20u; if(k) goto L8c0dc7e4; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0dc840;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0dc86a;
  {  goto L8c0dc89c; }
L8c0dc7e4:;
  R(0)=0x30u;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(3)>=(int32_t)R(5);
  if(c->t) goto L8c0dc80a;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=R(14);
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x2cu;
  R(13)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(13)+=0x1u;
  ST16(R(14)+R(0),R(13));
  R(13)+=0xffffffffu;
  R(13)=(uint32_t)(int32_t)(int16_t)R(13);
  R(13)<<=2;
  R(13)<<=2;
  R(13)<<=2;
  { R(3)+=0x40u; goto L8c0dc88e; }
L8c0dc80a:;
  { R(13)=R(4); goto L8c0dc89c; }
L8c0dc840:;
  R(0)=0x36u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  if(c->t) goto L8c0dc866;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=0x840u;
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x32u;
  R(13)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(13)+=0x1u;
  ST16(R(14)+R(0),R(13));
  R(13)+=0xffffffffu;
  R(13)=(uint32_t)(int32_t)(int16_t)R(13);
  R(13)<<=2;
  R(13)<<=2;
  R(13)<<=2;
  { R(3)+=R(14); goto L8c0dc88e; }
L8c0dc866:;
  { R(13)=R(4); goto L8c0dc89c; }
L8c0dc86a:;
  R(0)=0x3cu;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  if(c->t) goto L8c0dc89a;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)=0x1040u;
  R(2)+=0x1u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x38u;
  R(13)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=R(14);
  R(13)+=0x1u;
  ST16(R(14)+R(0),R(13));
  R(13)+=0xffffffffu;
  R(13)=(uint32_t)(int32_t)(int16_t)R(13);
  R(13)<<=2;
  R(13)<<=2;
  R(13)<<=2;
L8c0dc88e:;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(13)+=R(3);
  R(3)=0x1fu;
  R(2)&=R(3);
  { ST16(R(14)+R(0),R(2)); goto L8c0dc89c; }
L8c0dc89a:;
  R(13)=R(4);
L8c0dc89c:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0dc900;
  R(3)=LD32(R(14)+8);
  R(3)+=0xffffffffu;
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(14)+8,R(3)); if(k) goto L8c0dc8be; }
  R(0)=LD32(R(14)+12);
  R(2)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(1);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
L8c0dc8be:;
  { R(0)=0x0u; goto L8c0dc926; }
L8c0dc900:;
  R(3)=0x8c0d18d4u;
  R(5)=0x40u;
  { c->pr=0x8c0dc908u; R(4)=R(13); f_8c0d18d4(c); }
  R(4)=0x1u;
  ST32(R(13)+40,R(4));
  R(3)=LD32(R(15));
  ST32(R(13)+32,R(3));
  R(2)=LD32(R(14)+4);
  R(3)=0x80000000u;
  R(2)+=0x1u;
  ST32(R(14)+4,R(2));
  R(2)+=0xffffffffu;
  ST32(R(13),R(2));
  R(1)=LD32(R(14)+4);
  c->t=R(1)>=R(3);
  { uint32_t k=!c->t; R(0)=R(13); if(k) goto L8c0dc926; }
  ST32(R(14)+4,R(4));
L8c0dc926:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dc960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=0x8c0f3b7cu;
  R(2)=R(15);
  R(2)+=0x8u;
  R(13)=R(5);
  R(0)=LD32(R(3)+4);
  R(5)=R(15);
  R(1)=LD32(R(3));
  R(14)=R(6);
  R(12)=0x8c0dcb40u;
  R(5)+=0x8u;
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  R(0)=LD32(R(3)+12);
  R(1)=LD32(R(3)+8);
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  R(0)=LD32(R(3)+20);
  R(1)=LD32(R(3)+16);
  ST32(R(2)+16,R(1));
  ST32(R(2)+20,R(0));
  R(0)=R(4);
  R(1)=0xcu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0dc99e;
  {  goto L8c0dcafe; }
L8c0dc99e:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0dc9b4u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0dc9aau+R(0));  switch(tg){ case 0x8c0dc9ccu: goto L8c0dc9cc; case 0x8c0dc9e0u: goto L8c0dc9e0; case 0x8c0dca2au: goto L8c0dca2a; case 0x8c0dca3cu: goto L8c0dca3c; case 0x8c0dca80u: goto L8c0dca80; case 0x8c0dcaaeu: goto L8c0dcaae; case 0x8c0dcab6u: goto L8c0dcab6; case 0x8c0dcabcu: goto L8c0dcabc; case 0x8c0dcac2u: goto L8c0dcac2; case 0x8c0dcaceu: goto L8c0dcace; case 0x8c0dcad6u: goto L8c0dcad6; case 0x8c0dcae6u: goto L8c0dcae6; default: sh4_bad_jump(c,0x8c0dc9a6u,tg); return; } }
L8c0dc9cc:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0dc9d8;
  R(4)=R(13);
  R(1)=LD32(R(4)+12);
  { ST32(R(14),R(1)); goto L8c0dcafe; }
L8c0dc9d8:;
  R(2)=0x8c2ef138u;
  R(0)=LD32(R(2));
  { ST32(R(14),R(0)); goto L8c0dcafe; }
L8c0dc9e0:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0dc9ea;
  R(4)=R(13);
  { R(2)=LD32(R(4)+16); goto L8c0dcaca; }
L8c0dc9ea:;
  R(1)=0x8c2ef180u;
  R(0)=LD32(R(1));
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dca22;
  R(2)=0x8c2ef0c8u;
  R(4)=0x1u;
  R(0)=LD32(R(2));
  R(0)&=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0dca1a;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=0x2cu;
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0dca1a;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0dca1a;
  R(1)=0x8c2ef13cu;
  R(3)=LD32(R(1));
  R(2)=0x0u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  {uint32_t a=R(3),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(3)=r;}
  { c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1); goto L8c0dcafc; }
L8c0dca1a:;
  R(2)=0x8c2ef13cu;
  R(1)=LD32(R(2));
  { ST32(R(14),R(1)); goto L8c0dcafe; }
L8c0dca22:;
  R(2)=0x8c2ef184u;
  R(0)=LD32(R(2));
  { ST32(R(14),R(0)); goto L8c0dcafe; }
L8c0dca2a:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0dca34;
  R(4)=R(13);
  { R(2)=LD32(R(4)+8); goto L8c0dcaca; }
L8c0dca34:;
  R(1)=0x8c2ef0ccu;
  R(0)=LD32(R(1));
  { ST32(R(14),R(0)); goto L8c0dcafe; }
L8c0dca3c:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0dca46;
  R(4)=R(13);
  { R(1)=LD32(R(4)+4); goto L8c0dca4e; }
L8c0dca46:;
  R(2)=0x8c2ef0ccu;
  R(0)=LD32(R(2));
  R(0)<<=2;
  R(1)=LD32(R(5)+R(0));
L8c0dca4e:;
  { ST32(R(14),R(1)); goto L8c0dcafe; }
L8c0dca80:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0dca8e;
  R(4)=R(13);
  R(1)=LD32(R(4)+44);
  R(1)<<=2;
  { c->t=R(1)>>31;R(1)<<=1; goto L8c0dcaaa; }
L8c0dca8e:;
  R(2)=0x8c2ef0ccu;
  R(0)=LD32(R(2));
  R(0)<<=2;
  R(1)=LD32(R(5)+R(0));
  c->t=(int32_t)R(1)>=0;
  if(c->t) goto L8c0dca9c;
  R(1)+=0x7u;
L8c0dca9c:;
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(3)=0x8c2ef138u;
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  R(0)=LD32(R(3));
  c->macl=R(0)*R(1);
  R(1)=c->macl;
L8c0dcaaa:;
  { ST32(R(14),R(1)); goto L8c0dcafe; }
L8c0dcaae:;
  R(2)=0x8c2ef138u;
  R(0)=LD32(R(2));
  { ST32(R(14),R(0)); goto L8c0dcafe; }
L8c0dcab6:;
  R(1)=0x8c2ef13cu;
  { R(2)=LD32(R(1)); goto L8c0dcaca; }
L8c0dcabc:;
  R(0)=0x8c2ef0ccu;
  { R(2)=LD32(R(0)); goto L8c0dcaca; }
L8c0dcac2:;
  R(1)=0x8c2ef0ccu;
  R(0)=LD32(R(1));
  R(0)<<=2;
  R(2)=LD32(R(5)+R(0));
L8c0dcaca:;
  { ST32(R(14),R(2)); goto L8c0dcafe; }
L8c0dcace:;
  R(6)=0x0u;
  R(7)=R(13);
  { R(5)=R(14); goto L8c0dcadc; }
L8c0dcad6:;
  R(5)=0x0u;
  R(6)=R(14);
  R(7)=R(13);
L8c0dcadc:;
  R(2)=0x8c2ef0c8u;
  { uint32_t tg=R(12); c->pr=0x8c0dcae2u; R(4)=LD32(R(2)); sh4_call(c,tg); }
  {  goto L8c0dcafe; }
L8c0dcae6:;
  R(6)=R(15);
  R(2)=0x8c2ef0c8u;
  R(5)=R(15);
  R(7)=R(13);
  R(6)+=0x4u;
  { uint32_t tg=R(12); c->pr=0x8c0dcaf4u; R(4)=LD32(R(2)); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  c->macl=R(2)*R(3);
  R(3)=c->macl;
L8c0dcafc:;
  ST32(R(14),R(3));
L8c0dcafe:;
  R(0)=0x0u;
  R(15)+=0x20u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dcb40(SH4Ctx *c) {
  c->t=(R(7)&R(7))==0;
  R(0)=0x10u;
  { uint32_t k=c->t; R(0)&=R(4); if(k) goto L8c0dcb56; }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0dcb50;
  { R(7)=0x28u; goto L8c0dcb66; }
L8c0dcb50:;
  R(7)=0x14u;
  {  goto L8c0dcb66; }
L8c0dcb56:;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0dcb5e;
  { R(7)=0x14u; goto L8c0dcb60; }
L8c0dcb5e:;
  R(7)=0xau;
L8c0dcb60:;
  R(2)=0x20u;
  c->t=(R(4)&R(2))==0;
  if(c->t) goto L8c0dcb6a;
L8c0dcb66:;
  { R(4)=0xfu; goto L8c0dcb6c; }
L8c0dcb6a:;
  R(4)=0x8u;
L8c0dcb6c:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0dcb72;
  ST32(R(5),R(7));
L8c0dcb72:;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(0)=0x0u; if(k) goto L8c0dcb7a; }
  ST32(R(6),R(4));
L8c0dcb7a:;
  {  return; }
}
void f_8c0dcb80(SH4Ctx *c) {
  R(4)=0x8c2ef304u;
  { R(0)=LD32(R(4)+4); return; }
}
void f_8c0dcbc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0ef940u;
  R(13)=0xeeeeu;
  ST32(R(15),R(4));
  { c->pr=0x8c0dcbd2u; R(14)=R(5); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0dcbf8;
  R(4)=LD32(R(15));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(4)+=0x18u; if(k) goto L8c0dcbf8; }
  R(2)=LD32(R(4));
  R(13)=0x0u;
  ST32(R(14),R(2));
  R(3)=LD32(R(4)+4);
  ST32(R(14)+4,R(3));
  R(2)=LD32(R(4)+20);
  ST32(R(14)+8,R(2));
  R(3)=LD32(R(4)+24);
  ST32(R(14)+12,R(3));
  R(2)=LD32(R(4)+40);
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(4)+44);
  ST32(R(14)+20,R(3));
L8c0dcbf8:;
  R(0)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dcc40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0ef940u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  { c->pr=0x8c0dcc50u; R(4)=LD32(R(15)+8); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0dcc7e;
  R(4)=LD32(R(15)+8);
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(4)+12);
  c->t=R(2)>=R(3);
  if(c->t) goto L8c0dcc7e;
  R(2)=LD32(R(15)+4);
  R(1)=R(4);
  R(1)+=0x48u;
  R(3)=LD32(R(15));
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(1);
  R(0)=LD32(R(2));
  R(2)=0xefffffffu;
  ST32(R(3),R(0));
  R(3)=LD32(R(15));
  R(1)=LD32(R(3));
  R(1)&=R(2);
  ST32(R(3),R(1));
  {  goto L8c0dcc88; }
L8c0dcc7e:;
  R(0)=0xeeeeu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0dcc88:;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0dccc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(1)=0x8c2ef260u;
  R(2)=0x8c0ecc00u;
  R(5)=0x1840u;
  R(3)=0x8c0d18d4u;
  ST32(R(1),R(2));
  { c->pr=0x8c0dcceau; R(4)=R(2); f_8c0d18d4(c); }
  R(13)=0x8c0ec880u;
  R(3)=0x1u;
  R(2)=0x1840u;
  R(6)=0x0u;
  R(4)=0x8c0ecc00u;
  R(5)=R(13);
  R(14)=0x8c0dbc80u;
  ST32(R(4),R(2));
  ST32(R(4)+4,R(3));
  { c->pr=0x8c0dcd00u; R(4)=0x11u; f_8c0dbc80(c); }
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd08u; R(4)=0x12u; sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd10u; R(4)=0x13u; sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd18u; R(4)=0x19u; sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd20u; R(4)=0x18u; sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd28u; R(4)=0x17u; sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd30u; R(4)=0x16u; sh4_call(c,tg); }
  R(5)=R(13);
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd38u; R(4)=0x15u; sh4_call(c,tg); }
  R(5)=0x8c0ecb28u;
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd40u; R(4)=0x1cu; sh4_call(c,tg); }
  R(5)=0x8c0ecb28u;
  R(6)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0dcd48u; R(4)=0x1bu; sh4_call(c,tg); }
  R(3)=0xa05f6884u;
  R(2)=0x0u;
  ST32(R(3),R(2));
  R(0)=0xa05f6888u;
  R(1)=0x1u;
  ST32(R(0),R(1));
  R(0)=LD32(R(15));
  R(2)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(1);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dcdc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x80800000u;
  R(13)=R(4);
  R(14)=0x8c2f9394u;
  R(0)=0x40u;
  R(4)=0xff000000u;
  ST32(R(14)+8,R(3));
  R(3)=0x0u;
  R(2)=0x20800000u;
  R(5)=0x3727c5acu;
  ST32(R(14)+12,R(2));
  ST32(R(14)+16,R(3));
  R(3)=0x440c0000u;
  R(2)=0x43160000u;
  R(6)=0x43820000u;
  R(7)=0x40000000u;
  ST32(R(14)+20,R(7));
  ST32(R(14)+24,R(6));
  ST32(R(14)+28,R(5));
  ST32(R(14)+32,R(4));
  ST32(R(14)+36,R(2));
  ST32(R(14)+40,R(7));
  ST32(R(14)+44,R(5));
  ST32(R(14)+48,R(4));
  ST32(R(14)+52,R(3));
  R(3)=0x3cu;
  ST32(R(14)+56,R(6));
  ST32(R(14)+60,R(5));
  ST32(R(14)+R(0),R(4));
  R(0)=0x1cu;
  ST32(R(14)+4,R(3));
  R(3)=0x8c0ef6a0u;
  fp_ld(c,4,R(0)+R(14));
  { c->pr=0x8c0dce0cu; R(4)=R(13); f_8c0ef6a0(c); }
  R(2)=0x8c0eef78u;
  R(5)=R(15);
  { c->pr=0x8c0dce14u; R(4)=R(13); f_8c0eef78(c); }
  R(3)=0x8c0dbda0u;
  R(5)=R(14);
  R(6)=LD32(R(14)+4);
  R(5)+=0x8u;
  { c->pr=0x8c0dce20u; R(4)=LD32(R(15)); f_8c0dbda0(c); }
  R(2)=0x8c0eef20u;
  R(5)=LD32(R(14)+8);
  { c->pr=0x8c0dce28u; R(4)=R(13); f_8c0eef20(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dce80(SH4Ctx *c) {
  {  return; }
}
void f_8c0dce84(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0x80u;
  R(5)=LD32(R(4)+8);
  R(4)=R(6);
L8c0dce8c:;
  R(3)=R(5);
  R(2)=LD32(R(5)+4);
  R(3)+=0x8u;
  R(3)+=R(4);
  ST32(R(3),R(2));
  R(3)=R(5);
  R(3)+=0x8u;
  R(3)+=R(4);
  R(4)+=0x8u;
  c->t=R(4)>=R(7);
  { uint32_t k=!c->t; ST32(R(3)+4,R(6)); if(k) goto L8c0dce8c; }
  {  return; }
}
void f_8c0dcea8(SH4Ctx *c) {
  R(3)=0x8c0dce84u;
  R(6)=0x0u;
  R(7)=0x80u;
  R(2)=0x10u;
  ST32(R(4)+20,R(3));
  R(3)=0x8c0dce80u;
  R(5)=LD32(R(4)+8);
  R(4)=R(6);
  ST32(R(5),R(2));
  ST32(R(5)+4,R(3));
L8c0dcebc:;
  R(2)=R(5);
  R(3)=LD32(R(5)+4);
  R(2)+=0x8u;
  R(2)+=R(4);
  ST32(R(2),R(3));
  R(2)=R(5);
  R(2)+=0x8u;
  R(2)+=R(4);
  R(4)+=0x8u;
  c->t=R(4)>=R(7);
  { uint32_t k=!c->t; ST32(R(2)+4,R(6)); if(k) goto L8c0dcebc; }
  {  return; }
}
void f_8c0dced8(SH4Ctx *c) {
  R(2)=0x8c2ef270u;
  R(3)=0x8c0dcea8u;
  ST32(R(2),R(3));
  R(1)=0x8c2f915cu;
  R(0)=LD32(R(1));
  R(4)=0x8c2f9148u;
  R(5)=0x8c2ef264u;
  R(6)=0x8c2ef27cu;
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0dcf40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=0x8c2ef304u;
  R(2)=0xfu;
  R(7)=0xa05f6908u;
  R(3)=LD32(R(14)+4);
  ST32(R(15)+8,R(3));
  ST32(R(14)+4,R(2));
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(7));
  R(2)&=R(3);
  R(13)=0x8c2ef554u;
  ST32(R(15)+4,R(2));
  R(4)=0x0u;
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0dcfa4; }
  R(11)=0x8c0f43ccu;
  R(12)=0x4u;
L8c0dcf74:;
  R(3)=LD32(R(15)+4);
  R(6)=R(5);
  R(6)=sh4_shad(R(6),R(4));
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c0dcf9a;
  R(0)=R(4);
  R(0)<<=2;
  R(4)=LD32(R(11)+R(0));
  ST32(R(14)+4,R(4));
  ST32(R(7),R(6));
  ST32(R(13),R(4));
  R(13)=R(4);
  R(3)=R(14);
  R(13)<<=2;
  R(3)+=0x30u;
  R(13)<<=2;
  R(13)+=R(3);
  {  goto L8c0dcff6; }
L8c0dcf9a:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(12);
  if(!c->t) goto L8c0dcf74;
  {  goto L8c0dd008; }
L8c0dcfa4:;
  R(3)=LD32(R(14)+24);
  R(12)=0xa05f6900u;
  R(2)=LD32(R(12));
  R(2)&=R(3);
  ST32(R(15),R(2));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0dd008;
  R(7)=0xffa0002cu;
  R(11)=0x3u;
  R(8)=0x8c0f4374u;
  R(1)=0x16u;
  R(10)=0xfffffffcu;
L8c0dcfbe:;
  R(3)=LD32(R(15));
  R(6)=R(5);
  R(6)=sh4_shad(R(6),R(4));
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c0dd002;
  R(0)=R(4);
  R(0)<<=2;
  R(4)=LD32(R(8)+R(0));
  R(0)=R(4);
  c->t=(int32_t)R(0)==18;
  { uint32_t k=!c->t; ST32(R(14)+4,R(4)); if(k) goto L8c0dcfde; }
  R(5)=LD32(R(7));
  R(5)&=R(10);
  { ST32(R(7),R(5)); goto L8c0dcfe6; }
L8c0dcfde:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==20;
  if(!c->t) goto L8c0dcfe6;
  R(6)|=R(11);
L8c0dcfe6:;
  ST32(R(12),R(6));
  ST32(R(13),R(4));
  R(13)=R(4);
  R(3)=R(14);
  R(13)<<=2;
  R(3)+=0x30u;
  R(13)<<=2;
  R(13)+=R(3);
L8c0dcff6:;
  R(4)=0x8c2ef554u;
  R(2)=LD32(R(13));
  { uint32_t tg=R(2); c->pr=0x8c0dcffeu; R(5)=LD32(R(13)+12); sh4_call(c,tg); }
  {  goto L8c0dd008; }
L8c0dd002:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(1);
  if(!c->t) goto L8c0dcfbe;
L8c0dd008:;
  R(3)=LD32(R(15)+8);
  R(0)=0x0u;
  ST32(R(14)+4,R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dd020(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=0x8c2ef304u;
  R(2)=0xfu;
  R(7)=0xa05f6908u;
  R(3)=LD32(R(14)+4);
  ST32(R(15)+8,R(3));
  ST32(R(14)+4,R(2));
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(7));
  R(2)&=R(3);
  R(13)=0x8c2ef554u;
  R(12)=0x8c0ec588u;
  R(4)=0x0u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0dd0a0; }
  R(10)=0x8c0f43ccu;
  R(11)=0x4u;
L8c0dd056:;
  R(3)=LD32(R(15)+4);
  R(6)=R(5);
  R(6)=sh4_shad(R(6),R(4));
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c0dd06c;
  R(0)=R(4);
  R(0)<<=2;
  R(4)=LD32(R(10)+R(0));
  ST32(R(14)+4,R(4));
  { ST32(R(7),R(6)); goto L8c0dd0e0; }
L8c0dd06c:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(11);
  if(!c->t) goto L8c0dd056;
  {  goto L8c0dd100; }
L8c0dd0a0:;
  R(3)=LD32(R(14)+24);
  R(11)=0xa05f6900u;
  R(2)=LD32(R(11));
  R(2)&=R(3);
  ST32(R(15),R(2));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0dd100;
  R(7)=0xffa0002cu;
  R(10)=0x3u;
  R(8)=0xfffffffcu;
  R(1)=0x16u;
L8c0dd0b8:;
  R(3)=LD32(R(15));
  R(6)=R(5);
  R(6)=sh4_shad(R(6),R(4));
  c->t=(R(3)&R(6))==0;
  if(c->t) goto L8c0dd0fa;
  R(0)=0x8c0f4374u;
  R(4)<<=2;
  R(4)=LD32(R(4)+R(0));
  R(0)=R(4);
  c->t=(int32_t)R(0)==18;
  { uint32_t k=!c->t; ST32(R(14)+4,R(4)); if(k) goto L8c0dd0d8; }
  R(5)=LD32(R(7));
  R(5)&=R(8);
  { ST32(R(7),R(5)); goto L8c0dd0de; }
L8c0dd0d8:;
  c->t=(int32_t)R(0)==20;
  if(!c->t) goto L8c0dd0de;
  R(6)|=R(10);
L8c0dd0de:;
  ST32(R(11),R(6));
L8c0dd0e0:;
  ST32(R(13),R(4));
  R(13)=R(4);
  R(3)=R(14);
  R(13)<<=2;
  R(3)+=0x30u;
  R(5)=0x8c2ef554u;
  R(13)<<=2;
  R(13)+=R(3);
  R(6)=LD32(R(13)+12);
  { uint32_t tg=R(12); c->pr=0x8c0dd0f6u; R(4)=LD32(R(13)); sh4_call(c,tg); }
  {  goto L8c0dd100; }
L8c0dd0fa:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(1);
  if(!c->t) goto L8c0dd0b8;
L8c0dd100:;
  R(2)=LD32(R(15)+8);
  R(0)=0x0u;
  ST32(R(14)+4,R(2));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dd118(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c0dd11c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0dd122u;  f_8c0dd2ae(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0dd160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(5)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0dd11cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(6)=0x238u;
  R(2)=0x8c0686b8u;
  ST32(R(4)+20,R(3));
  R(14)=LD32(R(4)+8);
  { c->pr=0x8c0dd176u; R(4)=R(14); f_8c0686b8(c); }
  R(3)=0x8c0dd118u;
  R(2)=0x20u;
  R(13)=0x0u;
  ST32(R(14)+36,R(3));
  R(3)=R(2);
  c->t=(int32_t)R(3)>0;
  ST32(R(14),R(2));
  { uint32_t k=!c->t; R(5)=R(13); if(k) goto L8c0dd1b8; }
L8c0dd188:;
  R(4)=R(5);
  R(3)=R(14);
  R(4)<<=2;
  R(2)=0x8c0dd118u;
  R(3)+=0x30u;
  R(4)<<=2;
  R(3)+=R(4);
  ST32(R(3),R(2));
  R(3)=R(14);
  R(2)=R(14);
  R(3)+=0x30u;
  R(2)+=0x30u;
  R(3)+=R(4);
  R(2)+=R(4);
  ST32(R(3)+4,R(13));
  R(3)=R(14);
  ST32(R(2)+8,R(13));
  R(3)+=0x30u;
  R(5)+=0x1u;
  R(4)+=R(3);
  ST32(R(4)+12,R(13));
  R(2)=LD32(R(14));
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(!c->t) goto L8c0dd188;
L8c0dd1b8:;
  R(0)=0x8c2ef580u;
  R(1)=0x10000u;
  R(3)=LD32(R(0));
  c->t=R(3)==R(1);
  if(!c->t) goto L8c0dd1c8;
  R(4)=0x8c0dd020u;
  {  goto L8c0dd1ca; }
L8c0dd1c8:;
  R(4)=0x8c0dcf40u;
L8c0dd1ca:;
  { c->pr=0x8c0dd1ceu;  f_8c0dd240(c); }
  R(0)=0x230u;
  R(2)=0xeu;
  ST32(R(14)+R(0),R(2));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dd1e2(SH4Ctx *c) {
  R(2)=0x8c2ef548u;
  R(3)=0x8c0dd160u;
  R(1)=0x8c2f915cu;
  ST32(R(2),R(3));
  R(0)=LD32(R(1));
  R(4)=0x8c2f9148u;
  R(5)=0x8c2ef53cu;
  R(6)=0x8c2ef304u;
  { uint32_t tg=R(0);  sh4_call(c,tg); return; }
}
void f_8c0dd240(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  R(5)=0x8c2ef304u;
  R(6)=0xa05f6930u;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(5)+8,R(0));
  R(3)=LD32(R(6));
  R(7)=0xa05f6938u;
  ST32(R(5)+12,R(3));
  R(2)=LD32(R(7));
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  ST32(R(5)+16,R(2));
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(1)=c->vbr;
  R(0)=0x224u;
  R(1)=LD32(R(1)+R(0));
  c->t=R(4)==R(1);
  if(c->t) goto L8c0dd278;
  R(2)=c->vbr;
  R(3)=R(0);
  ST32(R(5)+40,R(1));
  ST32(R(5)+44,R(4));
  R(2)+=R(3);
  ST32(R(2),R(4));
L8c0dd278:;
  R(4)=0x0u;
  ST32(R(6),R(4));
  ST32(R(7),R(4));
  R(2)=0xa05f6900u;
  R(4)=0xffffffffu;
  ST32(R(2),R(4));
  R(3)=0xa05f6908u;
  ST32(R(3),R(4));
  R(1)=0x280fecu;
  R(0)=0xeu;
  ST32(R(5)+24,R(1));
  ST32(R(5)+28,R(0));
  R(1)=LD32(R(5)+24);
  ST32(R(6),R(1));
  R(0)=LD32(R(5)+28);
  ST32(R(7),R(0));
  R(0)=LD32(R(5)+8);
  R(1)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(1)&=R(2);
  R(0)<<=2;
  R(0)|=R(1);
  sh4_setsr(c,R(0));
  {  return; }
}
void f_8c0dd2ae(SH4Ctx *c) {
  R(0)=sh4_getsr(c);
  R(4)=0x8c2ef304u;
  R(6)=0xa05f6930u;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(4)+8,R(0));
  R(3)=LD32(R(6));
  R(7)=0xa05f6938u;
  ST32(R(4)+12,R(3));
  R(2)=LD32(R(7));
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  ST32(R(4)+16,R(2));
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(5)=c->vbr;
  R(0)=0x224u;
  R(3)=LD32(R(4)+44);
  R(5)=LD32(R(5)+R(0));
  c->t=R(3)==R(5);
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c0dd2e8; }
  R(1)=c->vbr;
  R(2)=LD32(R(4)+40);
  R(3)=R(0);
  R(1)+=R(3);
  ST32(R(1),R(2));
L8c0dd2e8:;
  ST32(R(6),R(5));
  ST32(R(7),R(5));
  R(2)=0xa05f6900u;
  R(3)=0xffffffffu;
  ST32(R(2),R(3));
  R(0)=0xa05f6908u;
  ST32(R(0),R(3));
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(5));
  R(3)=LD32(R(4)+24);
  ST32(R(6),R(3));
  R(1)=LD32(R(4)+28);
  ST32(R(7),R(1));
  R(0)=LD32(R(4)+8);
  R(3)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(1);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  {  return; }
}
void f_8c0dd340(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=0x0u;
  R(3)=0x8c0ef940u;
  R(13)=R(14);
  ST32(R(15)+4,R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15),R(6));
  { c->pr=0x8c0dd358u; R(4)=LD32(R(15)+4); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0dd362;
  R(0)=0xeeeeu;
  {  goto L8c0dd3d2; }
L8c0dd362:;
  R(4)=LD32(R(15)+4);
  R(2)=0xffffffe0u;
  R(5)=LD32(R(15));
  R(4)+=0x18u;
  R(1)=LD32(R(15)+8);
  R(6)=LD32(R(4)+24);
  R(3)=0xffffff00u;
  c->t=(R(1)&R(1))==0;
  R(7)=LD32(R(15));
  R(5)+=R(6);
  R(5)+=R(3);
  { uint32_t k=c->t; R(7)&=R(2); if(k) goto L8c0dd38c; }
  R(1)=LD32(R(4)+16);
  c->t=R(5)>=R(1);
  if(c->t) goto L8c0dd386;
  { R(5)=R(7); goto L8c0dd3c4; }
L8c0dd386:;
  R(13)=0xeeeeu;
  { R(5)=R(14); goto L8c0dd3c4; }
L8c0dd38c:;
  R(1)=LD32(R(4)+40);
  c->t=R(5)>R(1);
  if(!c->t) goto L8c0dd3c0;
  { R(5)=0u-R(7); goto L8c0dd3c4; }
L8c0dd3c0:;
  R(13)=0xeeeeu;
  R(5)=R(14);
L8c0dd3c4:;
  R(3)=0xffffff00u;
  R(6)+=R(5);
  R(2)=R(6);
  R(0)=R(13);
  R(2)+=R(3);
  ST32(R(4)+24,R(6));
  ST32(R(4)+20,R(2));
L8c0dd3d2:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dd400(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(4)>=0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c0dd410;
  {  goto L8c0dd540; }
L8c0dd410:;
  R(0)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  R(7)=R(0);
  R(0)=sh4_getsr(c);
  R(0)&=R(2);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(5)=0x8c0ecc00u;
  R(0)=0x2eu;
  R(11)=0x0u;
  R(13)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(0)=0x30u;
  R(12)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(3)=R(11);
  R(14)=R(11);
  c->t=R(3)>=R(12);
  { uint32_t k=c->t; R(6)=0x1fu; if(k) goto L8c0dd46c; }
L8c0dd43a:;
  R(1)=R(13);
  R(1)<<=2;
  R(3)=R(5);
  R(1)<<=2;
  R(3)+=0x40u;
  R(1)<<=2;
  R(1)+=R(3);
  R(2)=LD32(R(1));
  c->t=R(2)==R(4);
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c0dd464; }
  R(1)=sh4_getsr(c);
  R(0)=R(7);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(1)&=R(3);
  R(0)<<=2;
  R(0)|=R(1);
  {  goto L8c0dd51e; }
L8c0dd464:;
  R(14)+=0x1u;
  c->t=R(14)>=R(12);
  { uint32_t k=!c->t; R(13)&=R(6); if(k) goto L8c0dd43a; }
L8c0dd46c:;
  R(0)=0x34u;
  R(14)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(0)=0x36u;
  R(12)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(3)=0x0u;
  c->t=R(3)>=R(12);
  { uint32_t k=c->t; R(13)=R(11); if(k) goto L8c0dd4e8; }
L8c0dd47c:;
  R(1)=R(14);
  R(3)=0x840u;
  R(1)<<=2;
  R(1)<<=2;
  R(3)+=R(5);
  R(1)<<=2;
  R(1)+=R(3);
  R(2)=LD32(R(1));
  c->t=R(2)==R(4);
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c0dd4e0; }
  R(1)=sh4_getsr(c);
  R(0)=R(7);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(1)&=R(3);
  R(0)<<=2;
  R(0)|=R(1);
  {  goto L8c0dd51e; }
L8c0dd4e0:;
  R(13)+=0x1u;
  c->t=R(13)>=R(12);
  { uint32_t k=!c->t; R(14)&=R(6); if(k) goto L8c0dd47c; }
L8c0dd4e8:;
  R(0)=0x3au;
  R(13)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(0)=0x3cu;
  R(12)=(int32_t)(int16_t)LD16(R(5)+R(0));
  R(3)=0x0u;
  c->t=R(3)>=R(12);
  { uint32_t k=c->t; R(14)=R(11); if(k) goto L8c0dd52e; }
L8c0dd4f8:;
  R(1)=R(13);
  R(3)=0x1040u;
  R(1)<<=2;
  R(1)<<=2;
  R(3)+=R(5);
  R(1)<<=2;
  R(1)+=R(3);
  R(2)=LD32(R(1));
  c->t=R(2)==R(4);
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c0dd526; }
  R(1)=sh4_getsr(c);
  R(0)=R(7);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(1)&=R(3);
  R(0)<<=2;
  R(0)|=R(1);
L8c0dd51e:;
  sh4_setsr(c,R(0));
  R(0)=0x100u;
  {  goto L8c0dd542; }
L8c0dd526:;
  R(14)+=0x1u;
  c->t=R(14)>=R(12);
  { uint32_t k=!c->t; R(13)&=R(6); if(k) goto L8c0dd4f8; }
L8c0dd52e:;
  R(3)=sh4_getsr(c);
  R(0)=R(7);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
L8c0dd540:;
  R(0)=0x101u;
L8c0dd542:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dd580(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0dd58a;
  R(2)=0x8c0ef8a0u;
  {  { f_8c0ef8a0(c); return; } }
L8c0dd58a:;
  R(7)=R(4);
  R(0)=0x8c2ef284u;
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=R(0);
  ST32(R(7)+R(0),R(5));
  R(7)+=R(3);
  ST32(R(7)+4,R(6));
  { R(0)=0x0u; return; }
}
void f_8c0dd5c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(7)=0xa05f7c18u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=0xa05f7c10u;
  R(6)=R(7);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+8);
  R(4)=R(5);
  R(9)=0xffa00020u;
  R(6)+=0xfffffffcu;
  R(10)=0xa05f6800u;
  c->t=(int32_t)R(0)==0;
  R(13)=0xffa0002cu;
  R(4)+=0x70u;
  R(8)=0x8201u;
  { uint32_t k=c->t; R(12)=0x1u; if(k) goto L8c0dd628; }
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0dd6a0;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0dd5fc;
  {  goto L8c0dd6f2; }
L8c0dd5fc:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0dd604;
  {  goto L8c0dd760; }
L8c0dd604:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0dd60c;
  {  goto L8c0dd792; }
L8c0dd60c:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0dd614;
  {  goto L8c0dd7dc; }
L8c0dd614:;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0dd61c;
  {  goto L8c0dd7dc; }
L8c0dd61c:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0dd624;
  {  goto L8c0dd7dc; }
L8c0dd624:;
  {  goto L8c0dd7fe; }
L8c0dd628:;
  R(2)=LD32(R(13));
  ST32(R(13),R(11));
  R(3)=LD32(R(14)+16);
  ST32(R(9),R(3));
  R(2)=LD32(R(14)+12);
  R(1)=0xffa00028u;
  R(2)>>=2;
  R(2)>>=2;
  c->t=R(2)&1;R(2)>>=1;
  ST32(R(1),R(2));
  R(3)=0x12c1u;
  ST32(R(13),R(3));
  R(2)=0xffa00040u;
  ST32(R(2),R(8));
  {  goto L8c0dd6c2; }
L8c0dd6a0:;
  R(0)=LD32(R(14)+4);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0dd6ce;
  R(2)=LD32(R(13));
  ST32(R(13),R(11));
  R(3)=LD32(R(14)+16);
  ST32(R(9),R(3));
  R(2)=LD32(R(14)+12);
  R(1)=0xffa00028u;
  R(2)>>=2;
  R(2)>>=2;
  c->t=R(2)&1;R(2)>>=1;
  ST32(R(1),R(2));
  R(3)=0x12c1u;
  ST32(R(13),R(3));
  R(2)=0xffa00040u;
  ST32(R(2),R(8));
L8c0dd6c2:;
  R(3)=LD32(R(14)+20);
  ST32(R(10),R(3));
  R(3)=0xa05f6804u;
  R(0)=LD32(R(14)+12);
  { ST32(R(3),R(0)); goto L8c0dd78c; }
L8c0dd6ce:;
  R(3)=0x6702007fu;
  ST32(R(4),R(3));
  R(1)=0xa05f7c00u;
  R(2)=LD32(R(14)+20);
  ST32(R(1),R(2));
  R(0)=0xa05f7c04u;
  R(3)=LD32(R(14)+16);
  ST32(R(0),R(3));
  R(3)=0xa05f7c08u;
  R(2)=LD32(R(14)+12);
  ST32(R(3),R(2));
  R(2)=0xa05f7c0cu;
  R(1)=LD32(R(14)+60);
  ST32(R(2),R(1));
  ST32(R(5),R(11));
  ST32(R(6),R(12));
  { ST32(R(7),R(12)); goto L8c0dd7fe; }
L8c0dd6f2:;
  R(2)=0x8c0de320u;
  { c->pr=0x8c0dd6f8u; R(4)=LD32(R(14)+48); f_8c0de320(c); }
  R(3)=LD32(R(13));
  ST32(R(13),R(11));
  R(2)=LD32(R(14)+16);
  ST32(R(9),R(2));
  R(3)=LD32(R(14)+12);
  R(1)=0xffa00028u;
  R(3)>>=2;
  R(3)>>=2;
  c->t=R(3)&1;R(3)>>=1;
  ST32(R(1),R(3));
  R(2)=0x12c1u;
  ST32(R(13),R(2));
  R(3)=0xffa00040u;
  ST32(R(3),R(8));
  R(2)=LD32(R(14)+20);
  ST32(R(10),R(2));
  R(2)=0xa05f6804u;
  R(0)=LD32(R(14)+12);
  { ST32(R(2),R(0)); goto L8c0dd78c; }
L8c0dd760:;
  R(2)=0x8c0dbd00u;
  { c->pr=0x8c0dd766u; R(4)=LD32(R(14)+48); f_8c0dbd00(c); }
  R(3)=LD32(R(13));
  ST32(R(13),R(11));
  R(2)=LD32(R(14)+16);
  ST32(R(9),R(2));
  R(3)=LD32(R(14)+12);
  R(1)=0xffa00028u;
  R(3)>>=2;
  R(3)>>=2;
  c->t=R(3)&1;R(3)>>=1;
  ST32(R(1),R(3));
  R(2)=0x12c1u;
  ST32(R(13),R(2));
  R(3)=0xffa00040u;
  ST32(R(3),R(8));
  R(2)=LD32(R(14)+20);
  ST32(R(10),R(2));
  R(2)=0xa05f6804u;
  R(0)=LD32(R(14)+12);
  ST32(R(2),R(0));
L8c0dd78c:;
  R(1)=0xa05f6808u;
  { ST32(R(1),R(12)); goto L8c0dd7fe; }
L8c0dd792:;
  R(12)=0x8c0db7e0u;
  R(5)=0x1u;
  { c->pr=0x8c0dd79au; R(4)=0x8u; f_8c0db7e0(c); }
  R(5)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c0dd7a0u; R(4)=0x8u; sh4_call(c,tg); }
  R(4)=0x14cu;
  { uint32_t tg=R(12); c->pr=0x8c0dd7a6u; R(5)=LD32(R(14)+52); sh4_call(c,tg); }
  R(4)=0x148u;
  { uint32_t tg=R(12); c->pr=0x8c0dd7acu; R(5)=LD32(R(14)+48); sh4_call(c,tg); }
  R(2)=LD32(R(13));
  R(3)=0x0u;
  ST32(R(13),R(3));
  R(2)=LD32(R(14)+16);
  ST32(R(9),R(2));
  R(3)=LD32(R(14)+12);
  R(1)=0xffa00028u;
  R(3)>>=2;
  R(3)>>=2;
  c->t=R(3)&1;R(3)>>=1;
  ST32(R(1),R(3));
  R(2)=0x12c1u;
  ST32(R(13),R(2));
  R(3)=0xffa00040u;
  ST32(R(3),R(8));
  R(2)=LD32(R(14)+20);
  ST32(R(10),R(2));
  R(2)=0xa05f6804u;
  R(0)=LD32(R(14)+12);
  ST32(R(2),R(0));
  R(0)=0xa05f6808u;
  R(1)=0x1u;
  { ST32(R(0),R(1)); goto L8c0dd7fe; }
L8c0dd7dc:;
  R(2)=0x6702007fu;
  ST32(R(4),R(2));
  R(1)=0xa05f7c00u;
  R(3)=LD32(R(14)+20);
  ST32(R(1),R(3));
  R(0)=0xa05f7c04u;
  R(2)=LD32(R(14)+16);
  ST32(R(0),R(2));
  R(2)=0xa05f7c08u;
  R(3)=LD32(R(14)+12);
  ST32(R(2),R(3));
  R(3)=0xa05f7c0cu;
  R(1)=LD32(R(14)+48);
  ST32(R(3),R(1));
  ST32(R(5),R(11));
  ST32(R(6),R(12));
  ST32(R(7),R(12));
L8c0dd7fe:;
  R(2)=0xffd8000cu;
  R(3)=LD32(R(2));
  R(1)=0x3u;
  ST32(R(14)+36,R(3));
  ST32(R(14)+40,R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dd860(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0ecc00u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0dd876;
  R(0)=0x102u;
  {  goto L8c0dd996; }
L8c0dd876:;
  R(0)=0x30u;
  R(6)=LD32(R(14)+28);
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(12)=0x8u;
  R(13)=0x0u;
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(5)=LD32(R(14)+24); if(k) goto L8c0dd8e0; }
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0dd8e0;
  R(0)=0x2eu;
  R(3)=R(14);
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=0x40u;
  R(4)<<=2;
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(12))==0;
  if(c->t) goto L8c0dd8aa;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0dd8ae;
  { ST32(R(14)+28,R(4)); goto L8c0dd8b4; }
L8c0dd8aa:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0dd8b2;
L8c0dd8ae:;
  { R(4)=R(13); goto L8c0dd8b4; }
L8c0dd8b2:;
  ST32(R(14)+24,R(4));
L8c0dd8b4:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0dd91e;
  { c->pr=0x8c0dd8bcu; ST32(R(14)+32,R(4)); f_8c0dd5c0(c); }
  {  goto L8c0dd91e; }
L8c0dd8e0:;
  R(0)=0x36u;
  R(2)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(2)>0;
  if(!c->t) goto L8c0dd91e;
  R(2)=LD32(R(14)+36);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0dd91e;
  R(0)=0x34u;
  R(3)=0x840u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=R(14);
  R(4)<<=2;
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(4)+4);
  c->t=(R(2)&R(12))==0;
  if(c->t) goto L8c0dd90c;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0dd910;
  { ST32(R(14)+28,R(4)); goto L8c0dd916; }
L8c0dd90c:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0dd914;
L8c0dd910:;
  { R(4)=R(13); goto L8c0dd916; }
L8c0dd914:;
  ST32(R(14)+24,R(4));
L8c0dd916:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0dd91e;
  { c->pr=0x8c0dd91eu; ST32(R(14)+36,R(4)); f_8c0dd5c0(c); }
L8c0dd91e:;
  R(0)=0x3cu;
  R(3)=(int32_t)(int16_t)LD16(R(14)+R(0));
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0dd994;
  R(2)=LD32(R(14)+40);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0dd994;
  R(0)=0x3au;
  R(3)=0x1040u;
  R(4)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(3)+=R(14);
  R(4)<<=2;
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(4)+4);
  c->t=(R(12)&R(2))==0;
  if(c->t) goto L8c0dd980;
  R(1)=LD32(R(14)+28);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0dd986;
  { ST32(R(14)+28,R(4)); goto L8c0dd98c; }
L8c0dd980:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0dd98a;
L8c0dd986:;
  { R(4)=R(13); goto L8c0dd98c; }
L8c0dd98a:;
  ST32(R(14)+24,R(4));
L8c0dd98c:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0dd994;
  { c->pr=0x8c0dd994u; ST32(R(14)+40,R(4)); f_8c0dd5c0(c); }
L8c0dd994:;
  R(0)=0x0u;
L8c0dd996:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dd9a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4));
  R(2)=0x2u;
  R(14)=0x8c0ecc00u;
  ST32(R(15),R(3));
  ST32(R(4)+40,R(2));
  R(3)=LD32(R(14)+8);
  R(3)+=0xffffffffu;
  { c->pr=0x8c0dd9b8u; ST32(R(14)+8,R(3)); f_8c0dd860(c); }
  R(1)=LD32(R(14)+8);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0dd9d0;
  R(0)=LD32(R(14)+12);
  R(2)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(1);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
L8c0dd9d0:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dda00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0db7e0u;
  R(5)=0x1u;
  { c->pr=0x8c0dda0au; R(4)=0x8u; f_8c0db7e0(c); }
  R(2)=0x8c0db7e0u;
  R(4)=0x8u;
  R(5)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0db7e0(c); return; } }
}
void f_8c0dda14(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0db7e0u;
  R(5)=0x2u;
  { c->pr=0x8c0dda1eu; R(4)=0x8u; f_8c0db7e0(c); }
  R(2)=0x8c0db7e0u;
  R(4)=0x8u;
  R(5)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0db7e0(c); return; } }
}
void f_8c0dda28(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0db7e0u;
  R(5)=0x7u;
  { c->pr=0x8c0dda32u; R(4)=0x8u; f_8c0db7e0(c); }
  R(2)=0x8c0db7e0u;
  R(4)=0x8u;
  R(5)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0db7e0(c); return; } }
}
void f_8c0dda60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0db7eau;
  R(4)=0x10cu;
  { c->pr=0x8c0dda6au;  f_8c0db7ea(c); }
  R(2)=0x400u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)&=R(2);
  R(0)>>=8;
  { R(0)>>=2; return; }
}
void f_8c0dda76(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2ef144u;
  R(3)=LD32(R(2));
  R(1)=0x8c2ef154u;
  R(14)=LD32(R(1));
  R(14)+=R(3);
  R(3)=0x8c2ef0c8u;
  R(5)=0x1u;
  R(0)=LD32(R(3));
  R(0)&=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ddaa6;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0ddaa6;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ddaa6;
  R(1)=0x8c2ef110u;
  R(6)=LD32(R(1));
  R(6)>>=16;
  { c->t=R(6)&1;R(6)>>=1; goto L8c0ddaac; }
L8c0ddaa6:;
  R(2)=0x8c2ef110u;
  R(6)=LD32(R(2));
  R(6)>>=16;
L8c0ddaac:;
  R(3)=0x8c2ef0c8u;
  R(7)=R(4);
  R(0)=LD32(R(3));
  R(0)&=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(7)+=R(14); if(k) goto L8c0ddb00; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ddb00;
  { R(5)=R(7); goto L8c0ddb18; }
L8c0ddb00:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0ddb16;
  R(2)=0x0u;
  c->t=(int32_t)R(2)>(int32_t)R(4);
  {uint32_t a=R(4),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(4)=r;}
  c->t=R(4)&1;R(4)=(uint32_t)((int32_t)R(4)>>1);
  R(5)=R(4);
  { R(5)+=R(14); goto L8c0ddb18; }
L8c0ddb16:;
  R(5)=R(7);
L8c0ddb18:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0ddb1e;
  R(5)+=R(6);
L8c0ddb1e:;
  c->t=(int32_t)R(5)>(int32_t)R(6);
  if(!c->t) goto L8c0ddb24;
  R(5)=R(6);
L8c0ddb24:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0ddb2a;
  R(5)=0x0u;
L8c0ddb2a:;
  R(4)=0x3ffu;
  R(3)=0x3ff0000u;
  R(2)=0x8c2ef104u;
  R(4)&=R(5);
  R(14)=LD32(R(2));
  R(14)&=R(3);
  R(1)=R(2);
  R(14)|=R(4);
  ST32(R(1),R(14));
  R(2)=0x8c0db7e0u;
  R(4)=0xc8u;
  { c->pr=0x8c0ddb44u; R(5)=R(14); f_8c0db7e0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ddb00(SH4Ctx *c) {
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0ddb16;
  R(2)=0x0u;
  c->t=(int32_t)R(2)>(int32_t)R(4);
  {uint32_t a=R(4),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(4)=r;}
  c->t=R(4)&1;R(4)=(uint32_t)((int32_t)R(4)>>1);
  R(5)=R(4);
  { R(5)+=R(14); goto L8c0ddb18; }
L8c0ddb16:;
  R(5)=R(7);
L8c0ddb18:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0ddb1e;
  R(5)+=R(6);
L8c0ddb1e:;
  c->t=(int32_t)R(5)>(int32_t)R(6);
  if(!c->t) goto L8c0ddb24;
  R(5)=R(6);
L8c0ddb24:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0ddb2a;
  R(5)=0x0u;
L8c0ddb2a:;
  R(4)=0x3ffu;
  R(3)=0x3ff0000u;
  R(2)=0x8c2ef104u;
  R(4)&=R(5);
  R(14)=LD32(R(2));
  R(14)&=R(3);
  R(1)=R(2);
  R(14)|=R(4);
  ST32(R(1),R(14));
  R(2)=0x8c0db7e0u;
  R(4)=0xc8u;
  { c->pr=0x8c0ddb44u; R(5)=R(14); f_8c0db7e0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ddb4c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2ef144u;
  R(3)=LD32(R(2));
  R(1)=0x8c2ef154u;
  R(14)=LD32(R(1));
  R(14)+=R(3);
  R(3)=0x8c2ef0c8u;
  R(5)=0x1u;
  R(0)=LD32(R(3));
  R(0)&=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ddba0;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0ddba0;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ddba0;
  R(1)=0x8c2ef110u;
  R(6)=LD32(R(1));
  R(6)>>=16;
  { c->t=R(6)&1;R(6)>>=1; goto L8c0ddba6; }
L8c0ddba0:;
  R(2)=0x8c2ef110u;
  R(6)=LD32(R(2));
  R(6)>>=16;
L8c0ddba6:;
  R(3)=0x8c2ef0c8u;
  R(7)=R(4);
  R(0)=LD32(R(3));
  R(0)&=R(5);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(7)+=R(14); if(k) goto L8c0ddbbc; }
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ddbbc;
  { R(5)=R(7); goto L8c0ddbd4; }
L8c0ddbbc:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0ddbd2;
  R(2)=0x0u;
  c->t=(int32_t)R(2)>(int32_t)R(4);
  {uint32_t a=R(4),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(4)=r;}
  c->t=R(4)&1;R(4)=(uint32_t)((int32_t)R(4)>>1);
  R(5)=R(4);
  { R(5)+=R(14); goto L8c0ddbd4; }
L8c0ddbd2:;
  R(5)=R(7);
L8c0ddbd4:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0ddbda;
  R(5)+=R(6);
L8c0ddbda:;
  c->t=(int32_t)R(5)>(int32_t)R(6);
  if(!c->t) goto L8c0ddbe0;
  R(5)=R(6);
L8c0ddbe0:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0ddbe6;
  R(5)=0x0u;
L8c0ddbe6:;
  R(4)=0x3ffu;
  R(3)=0x3ff0000u;
  R(2)=0x8c2ef104u;
  R(4)&=R(5);
  R(14)=LD32(R(2));
  R(14)&=R(3);
  R(1)=R(2);
  R(14)|=R(4);
  ST32(R(1),R(14));
  R(2)=0x8c0db7e0u;
  R(4)=0xc8u;
  { c->pr=0x8c0ddc00u; R(5)=R(14); f_8c0db7e0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ddc40(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(4));
  R(3)=0x8c0db7eau;
  R(4)=0x10cu;
  { c->pr=0x8c0ddc4eu;  f_8c0db7ea(c); }
  R(5)=0x3ffu;
  R(4)=R(0);
  R(2)=0x8c2ef144u;
  R(5)&=R(4);
  R(3)=LD32(R(2));
  R(1)=0x8c2ef154u;
  R(7)=LD32(R(1));
  R(7)+=R(3);
  R(3)=0x8c2ef13cu;
  R(0)=LD32(R(3));
  ST32(R(15)+8,R(0));
  R(0)=0x8c0ddcb4u;
  R(2)=0x8c2ef0c8u;
  R(6)=0x1u;
  fp_ld(c,5,R(0));
  R(0)=LD32(R(2));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; c->fr[6]=0x3F800000u; if(k) goto L8c0ddcc0; }
  R(1)=0x8c2ef0c8u;
  R(0)=LD32(R(1));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0ddcc0;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0ddcc0;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  c->t=(R(0)&0x20)==0;
  { uint32_t k=c->t; R(7)+=R(7); if(k) goto L8c0ddc90; }
  { fp_mov(c,4,6); goto L8c0ddcde; }
L8c0ddc90:;
  { fp_mov(c,4,5); goto L8c0ddcde; }
L8c0ddcc0:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  c->t=(R(0)&0x20)==0;
  { uint32_t k=c->t; fp_mov(c,4,6); if(k) goto L8c0ddcde; }
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ddcde;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0ddcde;
  fp_mov(c,4,5);
L8c0ddcde:;
  R(1)=0x8c2ef110u;
  R(2)=LD32(R(1));
  R(3)=0x8c2ef0c8u;
  R(2)>>=16;
  ST32(R(15)+4,R(2));
  R(0)=LD32(R(3));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ddd04;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0ddd04;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0ddd04;
  R(3)=0x40000u;
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c0ddd04;
  R(5)+=0x1u;
L8c0ddd04:;
  R(5)-=R(7);
  R(3)=LD32(R(15)+8);
  c->fpul=R(5);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(5)=c->fpul;
  c->t=(int32_t)R(5)>(int32_t)R(3);
  if(c->t) goto L8c0ddd1c;
  R(1)=LD32(R(15));
  { ST32(R(1),R(5)); goto L8c0ddd24; }
L8c0ddd1c:;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  R(5)-=R(3);
  ST32(R(2),R(5));
L8c0ddd24:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ddcc0(SH4Ctx *c) {
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  c->t=(R(0)&0x20)==0;
  { uint32_t k=c->t; fp_mov(c,4,6); if(k) goto L8c0ddcde; }
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ddcde;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0ddcde;
  fp_mov(c,4,5);
L8c0ddcde:;
  R(1)=0x8c2ef110u;
  R(2)=LD32(R(1));
  R(3)=0x8c2ef0c8u;
  R(2)>>=16;
  ST32(R(15)+4,R(2));
  R(0)=LD32(R(3));
  R(0)&=R(6);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ddd04;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x2c)==0;
  if(c->t) goto L8c0ddd04;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0ddd04;
  R(3)=0x40000u;
  c->t=(R(4)&R(3))==0;
  if(c->t) goto L8c0ddd04;
  R(5)+=0x1u;
L8c0ddd04:;
  R(5)-=R(7);
  R(3)=LD32(R(15)+8);
  c->fpul=R(5);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(5)=c->fpul;
  c->t=(int32_t)R(5)>(int32_t)R(3);
  if(c->t) goto L8c0ddd1c;
  R(1)=LD32(R(15));
  { ST32(R(1),R(5)); goto L8c0ddd24; }
L8c0ddd1c:;
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(15));
  R(5)-=R(3);
  ST32(R(2),R(5));
L8c0ddd24:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ddd60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  R(14)=0x3u;
  R(2)=R(4);
  R(3)&=R(14);
  R(1)=R(4);
  R(2)>>=2;
  ST32(R(5),R(3));
  R(3)=R(4);
  R(2)>>=2;
  R(3)>>=8;
  R(2)&=R(14);
  R(3)>>=2;
  ST32(R(6),R(2));
  R(3)>>=2;
  R(3)&=R(14);
  R(1)>>=8;
  R(4)>>=16;
  R(4)&=R(14);
  R(1)&=R(14);
  R(0)=0x0u;
  ST32(R(7),R(1));
  R(2)=LD32(R(15)+4);
  ST32(R(2),R(3));
  R(2)=LD32(R(15)+8);
  ST32(R(2),R(4));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ddda0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0eef78u;
  R(14)=0x8c2f9394u;
  ST32(R(15)+4,R(4));
  { c->pr=0x8c0dddb0u; R(5)=R(15); f_8c0eef78(c); }
  R(3)=0x8c0dbda0u;
  R(5)=R(14);
  R(6)=LD32(R(14)+4);
  R(5)+=0x8u;
  { c->pr=0x8c0dddbcu; R(4)=LD32(R(15)); f_8c0dbda0(c); }
  R(3)=0x8c0eef20u;
  R(5)=LD32(R(14)+8);
  { c->pr=0x8c0dddc4u; R(4)=LD32(R(15)+4); f_8c0eef20(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0dde00(SH4Ctx *c) {
  { ST32(R(4)+24,R(5)); return; }
}
void f_8c0dde20(SH4Ctx *c) {
  R(0)=R(4);
  R(6)=0x8c0ecc00u;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0dde30;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0dde34;
  {  goto L8c0dde38; }
L8c0dde30:;
  { ST32(R(6)+16,R(5)); goto L8c0dde3e; }
L8c0dde34:;
  { ST32(R(6)+20,R(5)); goto L8c0dde3e; }
L8c0dde38:;
  R(0)=0xeeeeu;
  {  return; }
L8c0dde3e:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0dde80(SH4Ctx *c) {
  { ST32(R(4)+44,R(5)); return; }
}
void f_8c0dde84(SH4Ctx *c) {
  { R(0)=LD32(R(4)+44); return; }
}
void f_8c0ddea0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0ddeaeu; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ddebc;
  R(0)=0xeeeeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0ddebc:;
  R(0)=0x88u;
  R(4)=LD32(R(15));
  R(3)=0xfff9ffffu;
  R(4)=LD32(R(4)+R(0));
  R(2)=LD32(R(4)+36);
  R(2)&=R(3);
  ST32(R(4)+36,R(2));
  R(1)=LD32(R(4)+36);
  R(2)=0x20000u;
  R(1)|=R(2);
  ST32(R(4)+36,R(1));
  R(0)=LD32(R(15)+4);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ddee0;
  R(0)=LD32(R(4)+36);
  R(1)=0x40000u;
  R(0)|=R(1);
  ST32(R(4)+36,R(0));
L8c0ddee0:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ddf20(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0ef940u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  ST32(R(15)+12,R(7));
  { c->pr=0x8c0ddf32u; R(4)=LD32(R(15)+8); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ddf40;
  R(0)=0xeeeeu;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0ddf40:;
  R(4)=LD32(R(15)+8);
  R(0)=0x88u;
  R(5)=R(4);
  R(5)+=0x18u;
  R(6)=LD32(R(4)+R(0));
  R(3)=0x8c2f945cu;
  R(3)=LD32(R(15)+12);
  ST32(R(4)+12,R(3));
  R(2)=LD32(R(15)+4);
  ST32(R(4)+4,R(2));
  R(3)=LD32(R(15));
  ST32(R(4)+8,R(3));
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  R(2)+=0xffffffffu;
  R(2)<<=16;
  R(3)+=0xffffffffu;
  R(2)|=R(3);
  ST32(R(4)+56,R(2));
  R(3)=LD32(R(5));
  ST32(R(5)+8,R(3));
  R(3)=LD32(R(5)+4);
  R(2)=LD32(R(5));
  R(1)=LD32(R(4)+4);
  R(2)+=R(3);
  R(3)=LD32(R(4)+8);
  c->macl=R(1)*R(3);
  R(3)=LD32(R(4)+12);
  R(0)=c->macl;
  c->macl=R(0)*R(3);
  R(0)=c->macl;
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=0x8c2ef574u;
  R(0)+=R(3);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(2)-=R(0);
  ST32(R(5)+12,R(2));
  R(0)=LD32(R(1));
  c->t=(R(0)&0x80)==0;
  if(c->t) goto L8c0ddf9a;
  R(2)=LD32(R(5)+12);
  R(2)+=0xffffffe8u;
  ST32(R(5)+12,R(2));
L8c0ddf9a:;
  R(1)=LD32(R(5)+12);
  R(3)=0xffffff00u;
  R(0)=0x8c2ef0d4u;
  R(1)+=R(3);
  ST32(R(5)+36,R(1));
  R(2)=LD32(R(0));
  ST32(R(6)+20,R(2));
  R(2)=0x8c2ef0d8u;
  R(1)=LD32(R(2));
  ST32(R(6)+24,R(1));
  R(1)=0x8c2ef0e4u;
  R(3)=LD32(R(1));
  ST32(R(6)+16,R(3));
  R(3)=0x8c2ef0ecu;
  R(0)=LD32(R(3));
  ST32(R(6)+4,R(0));
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0de020(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  R(14)=R(5);
  ST32(R(15),R(4));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0de032u; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0de062;
  R(4)=LD32(R(15));
  R(3)=LD32(R(4)+12);
  c->t=R(14)>=R(3);
  if(c->t) goto L8c0de062;
  R(2)=LD32(R(4)+12);
  R(3)=R(14);
  R(3)+=0x1u;
  c->t=R(3)==R(2);
  { uint32_t k=c->t; R(5)=LD32(R(15)+4); if(k) goto L8c0de050; }
  R(1)=0x10000000u;
  { R(5)|=R(1); goto L8c0de054; }
L8c0de050:;
  R(2)=0xefffffffu;
  R(5)&=R(2);
L8c0de054:;
  R(3)=R(4);
  R(14)<<=2;
  R(3)+=0x48u;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(3);
  { ST32(R(14),R(5)); goto L8c0de06c; }
L8c0de062:;
  R(0)=0xeeeeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0de06c:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0de0a0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  { c->pr=0x8c0de0aeu; R(4)=LD32(R(15)+4); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0de0b8;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0de0c2;
L8c0de0b8:;
  R(0)=0xeeeeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0de0c2:;
  R(3)=LD32(R(15));
  R(0)=0x0u;
  R(4)=LD32(R(15)+4);
  ST32(R(4)+20,R(3));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0de100(SH4Ctx *c) {
  R(3)=0x10000000u;
  R(1)=R(4);
  ST32(R(1)+48,R(5));
  ST32(R(1)+16,R(6));
  ST32(R(1)+20,R(3));
  R(3)=0x9u;
  ST32(R(1)+12,R(7));
  R(2)=LD32(R(15));
  ST32(R(1)+8,R(2));
  ST32(R(1)+4,R(3));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x8000u;
  R(0)|=R(3);
  ST16(R(1)+28,R(0));
  R(0)=0x0u;
  { ST16(R(1)+30,R(0)); return; }
}
void f_8c0de160(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0de16eu; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0de1a0;
  R(0)=0xeeeeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0de1a0:;
  R(0)=0x88u;
  R(4)=LD32(R(15));
  R(6)=0x400u;
  R(5)=LD32(R(4)+R(0));
  R(0)=LD32(R(15)+4);
  R(7)=0x800u;
  R(1)=0x23u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c0de1b6;
  {  goto L8c0de2d2; }
L8c0de1b6:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c0de1c8u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c0de1c2u+R(0));  switch(tg){ case 0x8c0de20eu: goto L8c0de20e; case 0x8c0de212u: goto L8c0de212; case 0x8c0de218u: goto L8c0de218; case 0x8c0de21cu: goto L8c0de21c; case 0x8c0de222u: goto L8c0de222; case 0x8c0de228u: goto L8c0de228; case 0x8c0de260u: goto L8c0de260; case 0x8c0de266u: goto L8c0de266; case 0x8c0de26cu: goto L8c0de26c; case 0x8c0de272u: goto L8c0de272; case 0x8c0de278u: goto L8c0de278; case 0x8c0de27eu: goto L8c0de27e; case 0x8c0de2c0u: goto L8c0de2c0; case 0x8c0de2c6u: goto L8c0de2c6; case 0x8c0de2ccu: goto L8c0de2cc; case 0x8c0de2d2u: goto L8c0de2d2; default: sh4_bad_jump(c,0x8c0de1beu,tg); return; } }
L8c0de20e:;
  {  goto L8c0de2d2; }
L8c0de212:;
  R(4)=0x401u;
  {  goto L8c0de2d4; }
L8c0de218:;
  { R(4)=R(7); goto L8c0de2d4; }
L8c0de21c:;
  R(4)=0x472u;
  {  goto L8c0de2d4; }
L8c0de222:;
  R(4)=0x8e3u;
  {  goto L8c0de2d4; }
L8c0de228:;
  R(4)=0x3deu;
  {  goto L8c0de2d4; }
L8c0de260:;
  R(4)=0x3bfu;
  {  goto L8c0de2d4; }
L8c0de266:;
  R(4)=0x3a2u;
  {  goto L8c0de2d4; }
L8c0de26c:;
  R(4)=0x387u;
  {  goto L8c0de2d4; }
L8c0de272:;
  R(4)=0x36du;
  {  goto L8c0de2d4; }
L8c0de278:;
  R(4)=0x7bdu;
  {  goto L8c0de2d4; }
L8c0de27e:;
  R(4)=0x780u;
  {  goto L8c0de2d4; }
L8c0de2c0:;
  R(4)=0x745u;
  {  goto L8c0de2d4; }
L8c0de2c6:;
  R(4)=0x70fu;
  {  goto L8c0de2d4; }
L8c0de2cc:;
  R(4)=0x6dbu;
  {  goto L8c0de2d4; }
L8c0de2d2:;
  R(4)=R(6);
L8c0de2d4:;
  R(2)=LD32(R(5)+36);
  R(0)=0x0u;
  R(3)=0xffff0000u;
  R(2)&=R(3);
  R(1)=R(2);
  R(1)|=R(4);
  ST32(R(5)+36,R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0de320(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0ef940u;
  { c->pr=0x8c0de32eu; ST32(R(15),R(4)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0de338;
  R(0)=0xeeeeu;
  {  goto L8c0de38c; }
L8c0de338:;
  R(4)=LD32(R(15));
  R(3)=0x0u;
  R(14)=0x8c0db7e0u;
  R(5)=0x1u;
  R(13)=R(4);
  R(13)+=0x18u;
  ST32(R(4)+16,R(3));
  { c->pr=0x8c0de34au; R(4)=0x8u; f_8c0db7e0(c); }
  R(5)=0x0u;
  { uint32_t tg=R(14); c->pr=0x8c0de350u; R(4)=0x8u; sh4_call(c,tg); }
  R(4)=0x13cu;
  { uint32_t tg=R(14); c->pr=0x8c0de356u; R(5)=LD32(R(13)+32); sh4_call(c,tg); }
  R(4)=0x140u;
  { uint32_t tg=R(14); c->pr=0x8c0de35cu; R(5)=LD32(R(13)+48); sh4_call(c,tg); }
  R(4)=0x124u;
  { uint32_t tg=R(14); c->pr=0x8c0de362u; R(5)=LD32(R(13)+16); sh4_call(c,tg); }
  R(4)=0x128u;
  { uint32_t tg=R(14); c->pr=0x8c0de368u; R(5)=LD32(R(13)+8); sh4_call(c,tg); }
  R(4)=0x12cu;
  { uint32_t tg=R(14); c->pr=0x8c0de36eu; R(5)=LD32(R(13)+24); sh4_call(c,tg); }
  R(4)=0x130u;
  { uint32_t tg=R(14); c->pr=0x8c0de374u; R(5)=LD32(R(13)+20); sh4_call(c,tg); }
  R(4)=0x164u;
  { uint32_t tg=R(14); c->pr=0x8c0de37au; R(5)=LD32(R(13)+28); sh4_call(c,tg); }
  R(4)=0x144u;
  R(5)=0x80000000u;
  { uint32_t tg=R(14); c->pr=0x8c0de382u;  sh4_call(c,tg); }
  R(2)=0x8c0db7eau;
  R(4)=0x144u;
  { c->pr=0x8c0de38au;  f_8c0db7ea(c); }
  R(0)=0x0u;
L8c0de38c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
