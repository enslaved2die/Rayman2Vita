#include "recomp_decls.h"
void f_8c010000(SH4Ctx *c) {
  
  
  
  
  
  
  { f_8c01000c(c); return; }
}
void f_8c01000c(SH4Ctx *c) {
  R(0)=0xff00001cu;
  R(1)=LD32(R(0));
  R(2)=0x89afu;
  R(1)&=R(2);
  R(2)=0x800u;
  R(1)|=R(2);
  ST32(R(0),R(1));
  R(0)=0x8c0cc540u;
  {  { f_8c0cc540(c); return; } }
}
void f_8c010080(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0bdb20u;
  R(4)=LD32(R(3));
  R(4)+=0x8u;
  R(2)=0x8c01029cu;
  { c->pr=0x8c01008eu;  f_8c01029c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010094(SH4Ctx *c) {
  R(2)=0x8c0bdb20u;
  R(3)=LD32(R(2));
  R(1)=0x0u;
  ST32(R(3)+8,R(1));
  {  return; }
}
void f_8c0100a8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x0u;
  ST32(R(15),R(3));
  R(1)=0x8c0bdb24u;
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c010106;
  R(6)=0x8c0bdb20u;
  R(5)=0x4u;
  R(4)=0x1u;
  R(3)=0x8c010334u;
  { c->pr=0x8c0100c4u;  f_8c010334(c); }
  ST32(R(15),R(0));
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c010100;
  { c->pr=0x8c0100ceu;  f_8c010080(c); }
  R(2)=0x8c0bdb20u;
  R(3)=LD32(R(2));
  R(1)=0xdead0000u;
  ST32(R(3)+4,R(1));
  R(3)=LD32(R(2));
  R(1)=0x0u;
  ST32(R(3)+24,R(1));
  R(3)=0x8c0102a4u;
  { c->pr=0x8c0100e2u;  f_8c0102a4(c); }
  R(3)=0x8c0bdb20u;
  R(2)=LD32(R(3));
  R(1)=0xbed00000u;
  R(0)=LD32(R(2)+24);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0100ee;
L8c0100ee:;
  R(2)=0x8c0bdb20u;
  R(3)=LD32(R(2));
  R(1)=0xffffffffu;
  ST32(R(3)+4,R(1));
  R(3)=LD32(R(2));
  R(1)=0x0u;
  ST32(R(3)+24,R(1));
  { c->pr=0x8c010100u;  f_8c010094(c); }
L8c010100:;
  R(2)=0x1u;
  R(3)=0x8c0bdb24u;
  ST32(R(3),R(2));
L8c010106:;
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010130(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  ST32(R(15)+16,R(4));
  ST32(R(15)+12,R(5));
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  R(3)=0x0u;
  ST32(R(15),R(3));
  { c->pr=0x8c010144u;  f_8c0100a8(c); }
  R(2)=0x8c0bdb20u;
  R(1)=LD32(R(2));
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c01015c;
  R(0)=0xffffffffu;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c01015c:;
  { c->pr=0x8c010160u;  f_8c010080(c); }
  R(0)=LD32(R(15)+16);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0101ae;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0101b2;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0101b2;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0101b2;
  c->t=(int32_t)R(0)==16;
  if(c->t) goto L8c0101b2;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0101b2;
  R(1)=0x100u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0101b2;
  R(1)=0x200u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0101b2;
  R(1)=0x400u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0101b2;
  R(1)=0x800u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0101b2;
  R(1)=0x1000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0101b2;
  R(1)=0x2000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0101b2;
  R(1)=0x4000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0101b2;
  R(1)=0x10000000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0101b2;
  {  goto L8c010234; }
L8c0101ae:;
  {  goto L8c010238; }
L8c0101b2:;
  R(3)=0x8c0bdb20u;
  R(2)=LD32(R(3));
  R(1)=LD32(R(15)+16);
  ST32(R(2)+4,R(1));
  R(2)=LD32(R(3));
  R(1)=LD32(R(15)+12);
  ST32(R(2)+12,R(1));
  R(2)=LD32(R(3));
  R(1)=LD32(R(15)+8);
  ST32(R(2)+16,R(1));
  R(2)=LD32(R(3));
  R(1)=LD32(R(15)+4);
  ST32(R(2)+20,R(1));
  R(2)=LD32(R(3));
  R(1)=0x0u;
  ST32(R(2)+24,R(1));
  R(2)=LD32(R(3));
  R(1)=0x0u;
  ST32(R(2)+28,R(1));
  R(2)=LD32(R(3));
  R(1)=0x10000u;
  R(0)=LD32(R(2)+8);
  R(0)|=R(1);
  ST32(R(2)+8,R(0));
  R(2)=0x8c0102a4u;
  { c->pr=0x8c0101e8u;  f_8c0102a4(c); }
  {  goto L8c01020c; }
L8c01020c:;
  R(3)=0x8c0bdb20u;
  R(2)=LD32(R(3));
  R(1)=0x10000u;
  R(0)=LD32(R(2)+8);
  c->t=(R(0)&R(1))==0;
  if(!c->t) goto L8c01020c;
  R(2)=0x8c0bdb20u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+24);
  ST32(R(15),R(1));
  R(3)=0x10000000u;
  R(1)=LD32(R(15)+16);
  c->t=R(1)==R(3);
  if(c->t) goto L8c010230;
  R(1)=LD32(R(2));
  R(0)=LD32(R(1)+28);
  R(1)=0x8c129ae4u;
  ST32(R(1),R(0));
L8c010230:;
  {  goto L8c010238; }
L8c010234:;
  {  goto L8c010238; }
L8c010238:;
  { c->pr=0x8c01023cu;  f_8c010094(c); }
  R(0)=LD32(R(15));
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c01028c(SH4Ctx *c) {
  
  
  
  
  
  
  
  
  { f_8c01029c(c); return; }
}
void f_8c01029c(SH4Ctx *c) {
  {uint8_t v=LD8(R(4));c->t=v==0;ST8(R(4),v|0x80);}
  if(!c->t) { f_8c01028c(c); return; }
  {  return; }
}
void f_8c0102a4(SH4Ctx *c) {
  sh4_undef(c,0x8c0102a4u,0x3bu); return;
}
void f_8c0102ac(SH4Ctx *c) {
  { R(0)=R(15); return; }
}
void f_8c0102b0(SH4Ctx *c) {
  sh4_hook_misc(c,3,2);
  {  return; }
}
void f_8c0102b8(SH4Ctx *c) {
  R(0)=0x8c010320u;
  R(0)=LD32(R(0));
  R(1)=sh4_getsr(c);
  c->t=(R(1)&R(0))==0;
  if(c->t) goto L8c010310;
  R(0)=0x8c010324u;
  R(3)=LD32(R(0));
  R(2)=0x8c01032cu;
  R(0)=LD32(R(3));
  {uint32_t v=LD32(R(2));R(2)+=4;R(1)=v;}
  c->t=R(1)==R(0);
  if(!c->t) goto L8c0102e8;
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  R(1)=(int32_t)(int16_t)LD16(R(2));
  c->t=R(1)==R(0);
  if(!c->t) goto L8c0102e8;
  { R(0)=R(3); return; }
L8c0102e8:;
  R(0)=0x8c010328u;
  R(3)=LD32(R(0));
  R(2)=0x8c01032cu;
  R(0)=LD32(R(3));
  {uint32_t v=LD32(R(2));R(2)+=4;R(1)=v;}
  c->t=R(1)==R(0);
  if(!c->t) goto L8c01030c;
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  R(1)=(int32_t)(int16_t)LD16(R(2));
  c->t=R(1)==R(0);
  if(!c->t) goto L8c01030c;
  { R(0)=R(3); return; }
L8c01030c:;
  { R(0)=0x0u; return; }
L8c010310:;
  R(0)=0x8c01031cu;
  { R(0)=LD32(R(0)); return; }
}
void f_8c010334(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=R(4);
  R(0)=0x8c010390u;
  R(0)=LD32(R(0));
  { uint32_t tg=R(0); c->pr=0x8c010342u;  sh4_call(c,tg); }
  R(2)=R(0);
  R(0)=0x8c010394u;
  R(4)=LD32(R(0));
  R(4)+=R(8);
  R(0)=0x8c0103a0u;
  R(7)=R(0);
  { uint32_t tg=R(2); c->pr=0x8c010352u;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c010388;
  R(0)=LD32(R(7)+4);
  c->t=(int32_t)R(0)>=(int32_t)R(5);
  if(!c->t) goto L8c010388;
  R(0)=0x8c01039cu;
  R(4)=LD32(R(0));
  R(4)+=R(8);
  R(0)=0x8c0103acu;
  R(7)=R(0);
  { uint32_t tg=R(2); c->pr=0x8c01036au;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c010388;
  R(0)=LD32(R(7));
  c->t=R(5)==R(0);
  if(!c->t) goto L8c010388;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c010388:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0103b0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(7)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  R(5)=LD32(R(15)+8);
  R(4)=0x4u;
  R(3)=0x8c010130u;
  { c->pr=0x8c0103c8u;  f_8c010130(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0103dc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(7)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  R(5)=LD32(R(15)+8);
  R(4)=0x10u;
  R(3)=0x8c010130u;
  { c->pr=0x8c0103f4u;  f_8c010130(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010408(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(7)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  R(5)=LD32(R(15)+8);
  R(4)=0x20u;
  R(3)=0x8c010130u;
  { c->pr=0x8c010420u;  f_8c010130(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010434(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(7)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  R(5)=0x0u;
  R(4)=0x1u;
  R(3)=0x8c010130u;
  { c->pr=0x8c01044au;  f_8c010130(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c01045a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(7)=0x0u;
  R(6)=0x0u;
  R(5)=LD32(R(15));
  R(4)=0x2u;
  R(3)=0x8c010130u;
  { c->pr=0x8c01046eu;  f_8c010130(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010484(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(7)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  R(5)=0x0u;
  R(4)=0x100u;
  R(3)=0x8c010130u;
  { c->pr=0x8c01049au;  f_8c010130(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0104d4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(7)=0x0u;
  R(6)=LD32(R(15));
  R(5)=0x0u;
  R(4)=0x400u;
  R(3)=0x8c010130u;
  { c->pr=0x8c0104e8u;  f_8c010130(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010500(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(7)=0x0u;
  R(6)=LD32(R(15));
  R(5)=0x0u;
  R(4)=0x800u;
  R(3)=0x8c010130u;
  { c->pr=0x8c010514u;  f_8c010130(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c01057e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(7)=0x0u;
  R(6)=0x0u;
  R(5)=LD32(R(15));
  R(4)=0x4000u;
  R(3)=0x8c010130u;
  { c->pr=0x8c010592u;  f_8c010130(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0105ac(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff7fcu;
  R(15)+=R(0);
  R(0)=0x808u;
  R(0)+=R(15);
  R(0)+=0x4u;
  c->t=(R(0)&0x3)==0;
  if(c->t) goto L8c0105c8;
  R(2)=0x808u;
  R(2)+=R(15);
  R(3)=R(2);
  R(3)+=0x8u;
  {  goto L8c0105d0; }
L8c0105c8:;
  R(1)=0x808u;
  R(1)+=R(15);
  R(3)=R(1);
  R(3)+=0x4u;
L8c0105d0:;
  ST32(R(15),R(3));
  R(6)=R(3);
  R(0)=0x808u;
  R(5)=LD32(R(15)+R(0));
  R(4)=R(15);
  R(4)+=0x4u;
  R(2)=0x8c019e6cu;
  { c->pr=0x8c0105e2u;  f_8c019e6c(c); }
  R(4)=R(15);
  R(4)+=0x4u;
  R(3)=0x8c019e40u;
  { c->pr=0x8c0105ecu;  f_8c019e40(c); }
  R(6)=R(0);
  R(5)=R(15);
  R(5)+=0x4u;
  R(4)=0x1u;
  { c->pr=0x8c0105f8u;  f_8c0103dc(c); }
  R(1)=0x804u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010658(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  {  goto L8c010690; }
L8c010666:;
  R(4)=LD32(R(15)+4);
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(3)=0x8c019e50u;
  { c->pr=0x8c010670u;  f_8c019e50(c); }
  R(8)=R(0);
  R(4)=LD32(R(15));
  R(4)=(int32_t)(int8_t)LD8(R(4));
  R(3)=0x8c019e50u;
  { c->pr=0x8c01067cu;  f_8c019e50(c); }
  c->t=R(8)==R(0);
  if(c->t) goto L8c010684;
  {  goto L8c0106a0; }
L8c010684:;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
L8c010690:;
  R(3)=LD32(R(15)+4);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0106a0;
  R(2)=LD32(R(15));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c010666;
L8c0106a0:;
  R(0)=LD32(R(15)+4);
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(3)=LD32(R(15));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(0)-=R(2);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {  return; }
}
void f_8c0106c2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  R(3)=0x0u;
  ST32(R(15),R(3));
  R(5)=0x8c0b6c88u;
  R(4)=LD32(R(15)+8);
  { c->pr=0x8c0106d6u;  f_8c010658(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c010704;
  R(0)=LD32(R(15)+4);
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c0106ea;
  R(0)=0xffffffffu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0106ea:;
  R(2)=0x8c0f46e0u;
  R(3)=LD32(R(15)+4);
  ST8(R(2),R(3));
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c010704:;
  R(5)=0x8c0b6c90u;
  R(4)=LD32(R(15)+8);
  { c->pr=0x8c01070cu;  f_8c010658(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c010730;
  R(0)=LD32(R(15)+4);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c010720;
  R(0)=0xffffffffu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c010720:;
  R(2)=0x8c0f46e1u;
  R(3)=LD32(R(15)+4);
  ST8(R(2),R(3));
  R(0)=0x1u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c010730:;
  R(5)=0x8c0b6c98u;
  R(4)=LD32(R(15)+8);
  { c->pr=0x8c010738u;  f_8c010658(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c01075c;
  R(0)=LD32(R(15)+4);
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c01074c;
  R(0)=0xffffffffu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c01074c:;
  R(2)=0x8c0f46e2u;
  R(3)=LD32(R(15)+4);
  ST8(R(2),R(3));
  R(0)=0x2u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c01075c:;
  R(0)=LD32(R(15)+4);
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c010768;
  R(3)=0x0u;
  {  goto L8c01076a; }
L8c010768:;
  R(3)=0x0u;
L8c01076a:;
  R(1)=LD32(R(15));
  R(1)|=R(3);
  ST32(R(15),R(1));
  R(0)=LD32(R(15)+4);
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c01078c;
  R(3)=0x1u;
  {  goto L8c01078e; }
L8c01078c:;
  R(3)=0x0u;
L8c01078e:;
  R(1)=LD32(R(15));
  R(1)|=R(3);
  ST32(R(15),R(1));
  R(0)=LD32(R(15)+4);
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0107a0;
  R(3)=0x2u;
  {  goto L8c0107a2; }
L8c0107a0:;
  R(3)=0x0u;
L8c0107a2:;
  R(1)=LD32(R(15));
  R(1)|=R(3);
  ST32(R(15),R(1));
  R(3)=0xfffffff8u;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(3))==0;
  if(c->t) goto L8c0107b0;
L8c0107b0:;
  R(5)=LD32(R(15));
  R(4)=LD32(R(15)+8);
  R(3)=0x8c010434u;
  { c->pr=0x8c0107bau;  f_8c010434(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010860(SH4Ctx *c) {
  {  return; }
}
void f_8c010864(SH4Ctx *c) {
  R(2)=0x8c0bdee8u;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c010880;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0bdeecu;
  R(5)=0x8c0bdef8u;
  { c->pr=0x8c01087cu;  f_8c0124a6(c); }
  R(2)=0x8c0bdee8u;
  ST8(R(2),R(0));
L8c010880:;
  R(1)=0x8c0bdf60u;
  R(2)=0xffu;
  R(3)=(int32_t)(int8_t)LD8(R(1));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(2);
  if(!c->t) goto L8c01089a;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0bdf64u;
  R(5)=0x8c0bdf74u;
  { c->pr=0x8c010896u;  f_8c0124a6(c); }
  R(2)=0x8c0bdf60u;
  ST8(R(2),R(0));
L8c01089a:;
  R(3)=0x8c014d20u;
  { c->pr=0x8c0108a0u;  f_8c014d20(c); }
  R(1)=0x8c0143b2u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0143b2(c); return; } }
}
void f_8c0108a6(SH4Ctx *c) {
  {  return; }
}
void f_8c0108ae(SH4Ctx *c) {
  {  return; }
}
void f_8c010900(SH4Ctx *c) {
  R(1)=0x8c0f46ecu;
  R(3)=0x8c010860u;
  R(0)=0x8c0f46f0u;
  ST32(R(1),R(3));
  R(2)=R(3);
  R(1)=0x8c0f46f4u;
  ST32(R(0),R(3));
  ST32(R(1),R(3));
  R(3)=0x8c0135b6u;
  R(0)=0x8c0f46f8u;
  { ST32(R(0),R(2)); { f_8c0135b6(c); return; } }
}
void f_8c01091e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c013584u;
  { c->pr=0x8c010926u;  f_8c013584(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(0)&0xFF; return; }
}
void f_8c01092c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c013596u;
  { c->pr=0x8c010934u;  f_8c013596(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(0)&0xFF; return; }
}
void f_8c01093a(SH4Ctx *c) {
  R(3)=0x8c0138e0u;
  {  { f_8c0138e0(c); return; } }
}
void f_8c010940(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  {  goto L8c01097a; }
L8c010948:;
  R(3)=0x8c010860u;
  R(4)=0x8c0f46ecu;
  R(14)=0x8c0135b6u;
  R(2)=R(3);
  ST32(R(4),R(3));
  R(4)=0x8c0f46f0u;
  R(2)=0x8c010860u;
  ST32(R(4),R(3));
  R(4)=0x8c0f46f4u;
  ST32(R(4),R(3));
  R(4)=0x8c0f46f8u;
  { ST32(R(4),R(2)); goto L8c010964; }
L8c010962:;
  R(14)=0x8c0138e0u;
L8c010964:;
  { uint32_t tg=R(14); c->pr=0x8c010968u;  sh4_call(c,tg); }
  R(14)=0x8c013596u;
  { c->pr=0x8c01096eu;  f_8c013596(c); }
  R(4)=R(0)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c010962;
  R(14)=0x8c013790u;
  { c->pr=0x8c01097au;  f_8c013790(c); }
L8c01097a:;
  R(14)=0x8c013584u;
  { c->pr=0x8c010980u;  f_8c013584(c); }
  R(4)=R(0)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c010948;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0109ec(SH4Ctx *c) {
  R(0)=0x8c0f4706u;
  {  return; }
}
void f_8c0109f8(SH4Ctx *c) {
  R(0)=0x8c0f4710u;
  {  return; }
}
void f_8c010a08(SH4Ctx *c) {
  R(3)=0x8c0f4810u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c010a0e(SH4Ctx *c) {
  R(2)=0x8c0f4814u;
  { R(0)=LD32(R(2)); return; }
}
void f_8c010a14(SH4Ctx *c) {
  R(3)=0x8c0f4818u;
  { ST32(R(3),R(4)); return; }
}
void f_8c010a1a(SH4Ctx *c) {
  R(2)=0x8c0f4818u;
  { R(0)=LD32(R(2)); return; }
}
void f_8c010a20(SH4Ctx *c) {
  {  return; }
}
void f_8c010a24(SH4Ctx *c) {
  {  return; }
}
void f_8c010a28(SH4Ctx *c) {
  {  return; }
}
void f_8c010a2c(SH4Ctx *c) {
  {  return; }
}
void f_8c010a60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cc992u;
  { c->pr=0x8c010a68u;  f_8c0cc992(c); }
  R(6)=R(0);
  R(0)=0x8c010b44u;
  fp_ld(c,4,R(0));
  R(0)=R(6);
  R(4)=0x8c0bdbf4u;
  c->t=(int32_t)R(0)==1;
  R(5)=0x8c0bde94u;
  if(c->t) goto L8c010a84;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c010a90;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c010a9c;
  {  goto L8c010aac; }
L8c010a84:;
  R(3)=0x0u;
  ST32(R(4),R(3));
  fp_st(c,4,R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x31u; return; }
L8c010a90:;
  R(3)=0x1u;
  ST32(R(4),R(3));
  fp_st(c,4,R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x38u; return; }
L8c010a9c:;
  R(0)=0x8c010b50u;
  R(3)=0x2u;
  ST32(R(4),R(3));
  fp_ld(c,3,R(0));
  fp_st(c,3,R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x7au; return; }
L8c010aac:;
  R(2)=0x8c0ccc2cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0ccc2c(c); return; } }
}
void f_8c010ab8(SH4Ctx *c) {
  R(4)=0x8c0bdbf4u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c010ada;
  R(7)=0x0u;
  R(3)=0x8c0ccca0u;
  R(2)=0x2u;
  R(5)=R(7);
  ST32(R(4),R(2));
  R(6)=0x1u;
  { c->pr=0x8c010ad2u; R(4)=0x7au; f_8c0ccca0(c); }
  R(0)=0x8c010b50u;
  R(3)=0x8c0bde94u;
  fp_ld(c,3,R(0));
  fp_st(c,3,R(3));
L8c010ada:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010ae0(SH4Ctx *c) {
  R(4)=0x8c0bdbf4u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c010b02;
  R(7)=0x0u;
  R(3)=0x8c0ccca0u;
  R(2)=0x3u;
  R(5)=R(7);
  ST32(R(4),R(2));
  R(6)=0x1u;
  { c->pr=0x8c010afau; R(4)=0x38u; f_8c0ccca0(c); }
  R(0)=0x8c010b44u;
  R(3)=0x8c0bde94u;
  fp_ld(c,3,R(0));
  fp_st(c,3,R(3));
L8c010b02:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010b08(SH4Ctx *c) {
  R(2)=0x8c0bdbf4u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==3;
  R(0)=c->t;
  {  return; }
}
void f_8c010b14(SH4Ctx *c) {
  R(3)=0x8c0bdbf4u;
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c010b28;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c010b28;
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c010b60;
L8c010b28:;
  { R(0)=0x1u; return; }
L8c010b60:;
  R(0)=0x0u;
  {  return; }
}
void f_8c010b66(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffbff8u;
  R(15)+=R(0);
  { c->pr=0x8c010b74u;  f_8c010a60(c); }
  R(2)=0x8c010e86u;
  R(5)=0x0u;
  R(4)=R(0);
  { c->pr=0x8c010b7eu; R(6)=0x1u; f_8c010e86(c); }
  R(3)=0x8c019a40u;
  { c->pr=0x8c010b84u;  f_8c019a40(c); }
  R(2)=0x8c0199a0u;
  R(4)=0x200000u;
  { c->pr=0x8c010b8cu;  f_8c0199a0(c); }
  R(3)=0x8c0fa84cu;
  R(13)=0x8c0f4824u;
  R(0)=0x4004u;
  R(2)=0x8c0fa86cu;
  ST32(R(13),R(3));
  R(3)=0x0u;
  ST32(R(13)+4,R(2));
  R(2)=R(3);
  ST32(R(15)+R(0),R(3));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cd020u;
  { c->pr=0x8c010ba6u;  f_8c0cd020(c); }
  R(15)+=0x4u;
  R(2)=0x1f8u;
  R(3)=0x31u;
  R(14)=0x8c0fa88cu;
  R(6)=0xd1u;
  ST32(R(14),R(2));
  ST32(R(14)+4,R(3));
  R(2)=0x580000u;
  R(3)=0x400u;
  ST32(R(14)+8,R(13));
  R(13)=0x2u;
  R(5)=0x8c0b6ce8u;
  R(4)=0xea600u;
  ST32(R(14)+12,R(13));
  ST32(R(14)+20,R(2));
  R(2)=0x0u;
  ST32(R(14)+24,R(3));
  R(3)=0x8c0f482cu;
  ST32(R(14)+28,R(2));
  ST32(R(14)+32,R(3));
  R(2)=0x8c0fa82cu;
  R(3)=0x8c0199c4u;
  ST32(R(14)+36,R(2));
  { c->pr=0x8c010bd8u; ST32(R(14)+40,R(13)); f_8c0199c4(c); }
  R(2)=0x3fffffe0u;
  R(3)=0xa0000000u;
  R(0)&=R(2);
  R(1)=0xea5e0u;
  R(0)|=R(3);
  c->fr[5]=0x00000000u;
  R(0)+=0x20u;
  ST32(R(14)+44,R(0));
  R(0)=0x1u;
  ST32(R(14)+48,R(1));
  R(1)=0x0u;
  ST32(R(14)+52,R(0));
  R(0)=R(1);
  ST32(R(14)+56,R(1));
  R(1)=0x44u;
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(0)=R(14);
  R(0)+=0x48u;
  fp_st(c,5,R(0));
  R(0)=0x8c010cb4u;
  fp_ld(c,4,R(0));
  R(0)=0x4cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x8c010cb8u;
  fp_ld(c,3,R(0));
  R(0)=0x50u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,5,R(0)+R(14));
  R(1)=0x8c0cce00u;
  { c->pr=0x8c010c1eu; R(4)=R(14); f_8c0cce00(c); }
  R(3)=0x8c0cc9e4u;
  R(4)=R(15);
  { c->pr=0x8c010c26u; R(4)+=0x4u; f_8c0cc9e4(c); }
  R(2)=0x8c0ccab4u;
  { c->pr=0x8c010c2cu; R(4)=R(15); f_8c0ccab4(c); }
  R(0)=LD32(R(15));
  R(4)=0x8c123b08u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c010cfa; }
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c010ce0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c010ce4;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c010cea;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c010cf2;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c010cfa;
  {  goto L8c010cfa; }
L8c010ce0:;
  { R(2)=0x1u; goto L8c010cec; }
L8c010ce4:;
  R(0)=0xc34u;
  { ST8(R(4)+R(0),R(13)); goto L8c010cfe; }
L8c010cea:;
  R(2)=0x3u;
L8c010cec:;
  R(0)=0xc34u;
  { ST8(R(4)+R(0),R(2)); goto L8c010cfe; }
L8c010cf2:;
  R(0)=0xc34u;
  R(1)=0x4u;
  { ST8(R(4)+R(0),R(1)); goto L8c010cfe; }
L8c010cfa:;
  R(0)=0xc34u;
  ST8(R(4)+R(0),R(5));
L8c010cfe:;
  R(2)=0x8c0cca36u;
  { c->pr=0x8c010d04u; R(4)=R(15); f_8c0cca36(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c010d14;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  R(2)=0x8c01917au;
  R(4)=c->t;
  { c->pr=0x8c010d14u;  f_8c01917a(c); }
L8c010d14:;
  R(3)=0x8c0cc9f6u;
  { c->pr=0x8c010d1au;  f_8c0cc9f6(c); }
  R(1)=0x4008u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c010d60(SH4Ctx *c) {
  R(2)=0x8c0bdbf8u;
  R(3)=0x1u;
  { ST32(R(2),R(3)); return; }
}
void f_8c010d68(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff7cu;
  R(15)+=R(0);
  R(3)=0x8c011392u;
  R(4)=R(15);
  R(5)=0x8c0faa84u;
  { c->pr=0x8c010d78u; R(4)+=0x68u; f_8c011392(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c010d86;
  R(1)=0x84u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c010d86:;
  R(0)=0x1u;
  R(1)=0x84u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010d86(SH4Ctx *c) {
  R(0)=0x1u;
  R(1)=0x84u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010d92(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  { c->pr=0x8c010d9au;  f_8c010b66(c); }
  R(4)=0x400u;
  R(2)=0x8c0199c4u;
  R(6)=0x157u;
  R(5)=0x8c0b6ce8u;
  { c->pr=0x8c010da6u;  f_8c0199c4(c); }
  R(3)=0x8c010864u;
  { c->pr=0x8c010dacu; c->gbr=R(0); f_8c010864(c); }
  R(2)=0x8c011392u;
  R(5)=0x8c0faa84u;
  { c->pr=0x8c010db4u; R(4)=R(15); f_8c011392(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c010de0;
  { R(4)=0x0u; goto L8c010de2; }
L8c010de0:;
  R(4)=0x1u;
L8c010de2:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c010e2a;
  R(3)=0x8c0108a6u;
  { c->pr=0x8c010decu;  f_8c0108a6(c); }
  R(2)=0x8c014d94u;
  { c->pr=0x8c010df2u;  f_8c014d94(c); }
  R(3)=0x8c010940u;
  { c->pr=0x8c010df8u;  f_8c010940(c); }
  R(2)=0x8c0bdbf8u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c010e06;
  R(1)=0x8c0cd272u;
  { c->pr=0x8c010e06u;  f_8c0cd272(c); }
L8c010e06:;
  R(3)=0x8c019e06u;
  { c->pr=0x8c010e0cu;  f_8c019e06(c); }
  R(1)=0x8c0cd060u;
  { c->pr=0x8c010e12u;  f_8c0cd060(c); }
  R(3)=0x8c0cd1dcu;
  { c->pr=0x8c010e18u;  f_8c0cd1dc(c); }
  R(1)=0x8c0cd0d8u;
  { c->pr=0x8c010e1eu;  f_8c0cd0d8(c); }
  R(3)=0x8c010fa0u;
  { c->pr=0x8c010e24u;  f_8c010fa0(c); }
  R(1)=0x8c0ccc2cu;
  { c->pr=0x8c010e2au;  f_8c0ccc2c(c); }
L8c010e2a:;
  R(15)+=0x1cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c010e80(SH4Ctx *c) {
  R(3)=0x4u;
  { ST32(R(4)+4,R(3)); return; }
}
void f_8c010e86(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  ST32(R(15),R(4));
  R(0)&=R(3);
  ST32(R(15)+8,R(5));
  R(0)|=0xf0u;
  ST32(R(15)+4,R(6));
  sh4_setsr(c,R(0));
  R(2)=0x8c0d1020u;
  { c->pr=0x8c010ea8u;  f_8c0d1020(c); }
  R(2)=0x8c0f2cb0u;
  R(14)=0xffffffe0u;
  R(3)=0xe0000000u;
  R(5)=LD32(R(2));
  R(2)=0x80000000u;
  R(5)&=R(3);
  R(3)=0x8c0f2cb0u;
  R(1)=0xd000000u;
  R(0)=LD32(R(3));
  R(5)|=R(1);
  R(0)|=R(2);
  R(2)=0x8c0d05d4u;
  R(0)&=R(14);
  R(5)-=R(0);
  R(4)=R(0);
  ST32(R(15)+12,R(0));
  R(5)+=0xffffffe0u;
  { c->pr=0x8c010eceu; R(4)+=0x20u; f_8c0d05d4(c); }
  R(3)=0x8c0d104au;
  { c->pr=0x8c010ed4u;  f_8c0d104a(c); }
  R(2)=0x8c0d394eu;
  { c->pr=0x8c010edau; R(4)=0x0u; f_8c0d394e(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==122;
  if(!c->t) goto L8c010ee8;
  R(2)=0x8c0d38e0u;
  R(4)=0x8c010e80u;
  { c->pr=0x8c010ee8u; R(5)=0x0u; f_8c0d38e0(c); }
L8c010ee8:;
  R(5)=LD32(R(15)+8);
  R(7)=0x0u;
  R(3)=0x8c0ccca0u;
  R(6)=0x1u;
  { c->pr=0x8c010ef4u; R(4)=LD32(R(15)); f_8c0ccca0(c); }
  R(3)=0x8c0d6c20u;
  { c->pr=0x8c010efau; R(4)=LD32(R(15)+4); f_8c0d6c20(c); }
  R(2)=0x8c0cf158u;
  R(5)=0x8c0faa90u;
  R(6)=0x8c106ab0u;
  { c->pr=0x8c010f04u; R(4)=0x0u; f_8c0cf158(c); }
  R(3)=0x8c0d0a08u;
  { c->pr=0x8c010f0au;  f_8c0d0a08(c); }
  R(0)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=R(2);
  sh4_setsr(c,R(0));
  R(11)=0x8c113e64u;
  R(12)=0x8c112ad0u;
  R(11)&=R(14);
  R(13)=0x8c0cd916u;
  R(12)&=R(14);
  R(14)=0x400u;
  R(12)+=0x20u;
  R(11)+=0x20u;
L8c010f22:;
  R(5)=R(12);
  R(6)=R(14);
  R(7)=R(11);
  { uint32_t tg=R(13); c->pr=0x8c010f2cu; R(4)=0x8u; sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c010f22;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c010fa0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cef2eu;
  { c->pr=0x8c010fa8u;  f_8c0cef2e(c); }
  R(2)=0x8c0d0a32u;
  { c->pr=0x8c010faeu;  f_8c0d0a32(c); }
  R(3)=0x8c0cf678u;
  { c->pr=0x8c010fb4u;  f_8c0cf678(c); }
  R(2)=0x8c0d3aa0u;
  { c->pr=0x8c010fbau;  f_8c0d3aa0(c); }
  R(3)=0x8c0d062eu;
  { c->pr=0x8c010fc0u;  f_8c0d062e(c); }
  R(2)=0x8c0d105au;
  { c->pr=0x8c010fc6u;  f_8c0d105a(c); }
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c011000(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c011006u; R(4)=0x0u; f_8c0116ce(c); }
  { c->pr=0x8c01100au; R(4)=0x0u; f_8c0117a0(c); }
  R(2)=0x8c010fa0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c010fa0(c); return; } }
}
void f_8c011010(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0124a0u;
  R(4)=0x8c011000u;
  { c->pr=0x8c01101au;  f_8c0124a0(c); }
  R(3)=0x8c0bdc7cu;
  R(1)=0xffu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(1);
  if(!c->t) goto L8c011034;
  R(2)=0x8c0124a6u;
  R(4)=0x8c0bdc80u;
  R(5)=0x8c0bdc8cu;
  { c->pr=0x8c011030u;  f_8c0124a6(c); }
  R(3)=0x8c0bdc7cu;
  ST8(R(3),R(0));
L8c011034:;
  R(1)=0x8c0bde44u;
  R(2)=0xc0de0005u;
  ST32(R(1),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c011040(SH4Ctx *c) {
  R(3)=0x8c0bdbf4u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0110a0;
  R(5)=0x117u;
  {  goto L8c0110a2; }
L8c0110a0:;
  R(5)=0xf0u;
L8c0110a2:;
  c->fpul=R(5);
  R(0)=0x8c011168u;
  R(3)=0x8c0c462cu;
  R(4)-=R(5);
  fp_float(c,3);
  fp_ld(c,0,R(3));
  fp_mov(c,4,3);
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0));
  fp_arith(c,2,3,0);
  fp_ftrc(c,3);
  R(2)=c->fpul;
  c->fpul=R(2);
  R(2)=0x8c0c4628u;
  fp_float(c,3);
  c->fpul=R(4);
  fp_ld(c,0,R(2));
  fp_float(c,2);
  fp_fmac(c,3,2);
  fp_arith(c,0,3,4);
  fp_ftrc(c,3);
  { R(0)=c->fpul; return; }
}
void f_8c0110d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(7)=0x64u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(4)+4);
  R(3)=LD32(R(14)+40);
  R(1)+=0xffffffffu;
  R(2)=0x8c0679f4u;
  c->macl=R(3)*R(1);
  R(1)=c->macl;
  { c->pr=0x8c0110f2u; R(0)=R(7); f_8c0679f4(c); }
  R(1)=LD32(R(4));
  R(12)=R(0);
  R(3)=LD32(R(14)+44);
  R(12)+=0x1u;
  R(1)+=0xffffffffu;
  R(2)=0x8c0679f4u;
  c->macl=R(3)*R(1);
  R(1)=c->macl;
  { c->pr=0x8c011106u; R(0)=R(7); f_8c0679f4(c); }
  R(10)=R(0);
  R(10)+=0x1u;
  R(3)=R(10);
  R(3)+=0xffffffffu;
  R(0)=0x50u;
  R(2)=R(12);
  R(2)+=0xffffffffu;
  ST32(R(14)+4,R(12));
  R(9)=R(2);
  R(13)=0x0u;
  ST32(R(14),R(10));
  ST32(R(14)+24,R(13));
  ST32(R(14)+32,R(13));
  ST32(R(14)+28,R(3));
  ST32(R(14)+36,R(2));
  R(3)=LD32(R(14)+R(0));
  R(0)=0x54u;
  R(6)=LD32(R(14)+32);
  R(9)+=R(3);
  R(11)=LD32(R(14)+28);
  R(6)+=R(3);
  R(3)=LD32(R(14)+R(0));
  R(5)=LD32(R(14)+24);
  c->t=(int32_t)R(9)>=0;
  R(11)+=R(3);
  R(5)+=R(3);
  if(!c->t) goto L8c011144;
  R(2)=LD32(R(4)+4);
  R(2)+=0xffffffffu;
  c->t=(int32_t)R(6)>(int32_t)R(2);
  if(!c->t) goto L8c01114a;
L8c011144:;
  ST32(R(14)+36,R(13));
  { ST32(R(14)+32,R(13)); goto L8c0111c0; }
L8c01114a:;
  c->t=(int32_t)R(11)>=0;
  if(!c->t) goto L8c011156;
  R(2)=LD32(R(4));
  R(2)+=0xffffffffu;
  c->t=(int32_t)R(5)>(int32_t)R(2);
  if(!c->t) goto L8c011180;
L8c011156:;
  ST32(R(14)+28,R(13));
  { ST32(R(14)+24,R(13)); goto L8c0111c0; }
L8c011180:;
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c01118a;
  ST32(R(14)+32,R(13));
  { ST32(R(14)+36,R(9)); goto L8c0111a0; }
L8c01118a:;
  R(3)=LD32(R(4)+4);
  R(3)+=0xffffffffu;
  c->t=(int32_t)R(9)>(int32_t)R(3);
  if(!c->t) goto L8c01119c;
  ST32(R(14)+32,R(6));
  R(3)=LD32(R(4)+4);
  R(3)+=0xffffffffu;
  { ST32(R(14)+36,R(3)); goto L8c0111a0; }
L8c01119c:;
  ST32(R(14)+32,R(6));
  ST32(R(14)+36,R(9));
L8c0111a0:;
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0111aa;
  ST32(R(14)+24,R(13));
  { ST32(R(14)+28,R(11)); goto L8c0111c0; }
L8c0111aa:;
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  c->t=(int32_t)R(11)>(int32_t)R(3);
  if(!c->t) goto L8c0111bc;
  ST32(R(14)+24,R(5));
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  { ST32(R(14)+28,R(3)); goto L8c0111c0; }
L8c0111bc:;
  ST32(R(14)+24,R(5));
  ST32(R(14)+28,R(11));
L8c0111c0:;
  R(0)=0x40u;
  R(3)=0x8c0679f4u;
  R(1)=LD32(R(14)+R(0));
  c->macl=R(10)*R(1);
  R(1)=c->macl;
  { c->pr=0x8c0111ceu; R(0)=R(7); f_8c0679f4(c); }
  R(11)=R(0);
  R(0)=0x44u;
  R(1)=LD32(R(14)+R(0));
  R(3)=0x8c0679f4u;
  c->macl=R(10)*R(1);
  R(1)=c->macl;
  { c->pr=0x8c0111deu; R(0)=R(7); f_8c0679f4(c); }
  R(10)=R(0);
  R(0)=0x48u;
  R(1)=LD32(R(14)+R(0));
  R(3)=0x8c0679f4u;
  c->macl=R(12)*R(1);
  R(1)=c->macl;
  { c->pr=0x8c0111eeu; R(0)=R(7); f_8c0679f4(c); }
  R(9)=R(0);
  R(0)=0x4cu;
  R(1)=LD32(R(14)+R(0));
  R(3)=0x8c0679f4u;
  c->macl=R(12)*R(1);
  R(1)=c->macl;
  { c->pr=0x8c0111feu; R(0)=R(7); f_8c0679f4(c); }
  R(9)+=R(6);
  R(7)=R(0);
  c->t=(int32_t)R(9)>=0;
  R(10)+=R(5);
  R(11)+=R(5);
  { uint32_t k=c->t; R(7)+=R(6); if(k) goto L8c01120e; }
  R(9)=R(13);
L8c01120e:;
  c->t=(int32_t)R(11)>=0;
  { uint32_t k=c->t; R(2)=LD32(R(4)+4); if(k) goto L8c011216; }
  R(11)=R(13);
L8c011216:;
  c->t=(int32_t)R(7)>(int32_t)R(2);
  { uint32_t k=!c->t; R(2)=LD32(R(4)); if(k) goto L8c01121e; }
  R(7)=LD32(R(4)+4);
L8c01121e:;
  c->t=(int32_t)R(10)>(int32_t)R(2);
  if(!c->t) goto L8c011224;
  R(10)=LD32(R(4));
L8c011224:;
  R(0)=0x68u;
  ST32(R(14)+48,R(11));
  ST32(R(14)+52,R(10));
  ST32(R(14)+56,R(9));
  ST32(R(14)+60,R(7));
  ST32(R(14)+R(0),R(13));
  ST32(R(14)+8,R(13));
  ST32(R(14)+16,R(13));
  R(3)=LD32(R(14)+4);
  ST32(R(14)+20,R(3));
  R(3)=0x8c037d80u;
  R(2)=LD32(R(14));
  { c->pr=0x8c011240u; ST32(R(14)+12,R(2)); f_8c037d80(c); }
  R(3)=LD32(R(14)+48);
  R(2)=0x0u;
  R(12)=0x8c037d0eu;
  c->t=R(3)>R(2);
  if(!c->t) goto L8c011254;
  R(6)=LD32(R(14)+4);
  R(5)=R(2);
  R(7)=LD32(R(14)+48);
  { uint32_t tg=R(12); c->pr=0x8c011254u; R(4)=R(2); sh4_call(c,tg); }
L8c011254:;
  R(1)=LD32(R(14)+52);
  R(3)=LD32(R(14));
  c->t=R(1)>=R(3);
  if(c->t) goto L8c011272;
  R(7)=LD32(R(14));
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+4);
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c011268u; R(4)=LD32(R(14)+52); f_8c011040(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;}
  R(4)=0x0u;
  R(5)=R(0);
  { uint32_t tg=R(12); c->pr=0x8c011272u; {uint32_t v=LD32(R(15));R(15)+=4;R(7)=v;} sh4_call(c,tg); }
L8c011272:;
  R(3)=LD32(R(14)+56);
  R(2)=0x0u;
  c->t=R(3)>R(2);
  if(!c->t) goto L8c011284;
  R(6)=LD32(R(14)+56);
  R(5)=R(2);
  R(7)=LD32(R(14));
  { uint32_t tg=R(12); c->pr=0x8c011284u; R(4)=R(2); sh4_call(c,tg); }
L8c011284:;
  R(1)=LD32(R(14)+60);
  R(3)=LD32(R(14)+4);
  c->t=R(1)>=R(3);
  if(c->t) goto L8c011296;
  R(6)=LD32(R(14)+4);
  R(5)=0x0u;
  R(7)=LD32(R(14));
  { uint32_t tg=R(12); c->pr=0x8c011296u; R(4)=LD32(R(14)+60); sh4_call(c,tg); }
L8c011296:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0112a6(SH4Ctx *c) {
  R(1)=0x8c0bde44u;
  R(3)=0xc0de0005u;
  R(2)=LD32(R(1));
  c->t=R(2)==R(3);
  R(0)=c->t;
  { R(0)^=0x1u; return; }
}
void f_8c0112b4(SH4Ctx *c) {
  R(0)=0x8c0bde44u;
  R(6)=0x10u;
  R(4)=0x0u;
  R(7)=LD32(R(0));
L8c0112bc:;
  R(2)=R(7);
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  R(2)+=0x1cu;
  R(3)<<=2;
  R(3)+=R(2);
  R(1)=LD32(R(3));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c011300;
  ST16(R(5),R(4));
  { R(0)=0x1u; return; }
L8c011300:;
  R(4)+=0x1u;
  R(3)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(3)>=(int32_t)R(6);
  if(!c->t) goto L8c0112bc;
  R(3)=0xffffffffu;
  R(0)=0x0u;
  ST16(R(5),R(3));
  {  return; }
}
void f_8c011320(SH4Ctx *c) {
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  R(4)=R(5);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c01132a;
  R(4)+=0xfu;
L8c01132a:;
  R(3)=0xfffffffcu;
  R(4)=sh4_shad(R(4),R(3));
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01135a;
  R(0)=R(5);
  R(2)=0x8c0bde44u;
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(6)=LD32(R(2)); if(k) goto L8c011342; }
  { R(0)&=0xfu; goto L8c01134c; }
L8c011342:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0xfu;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c01134c:;
  R(4)=R(0);
  R(5)=(uint32_t)(int32_t)(int16_t)R(4);
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c01135a;
  R(3)=0x10u;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c01135e;
L8c01135a:;
  { R(0)=0x0u; return; }
L8c01135e:;
  R(3)=R(6);
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)+=0x1cu;
  R(0)<<=2;
  R(0)=LD32(R(3)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  {  return; }
}
void f_8c01135e(SH4Ctx *c) {
  R(3)=R(6);
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)+=0x1cu;
  R(0)<<=2;
  R(0)=LD32(R(3)+R(0));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  {  return; }
}
void f_8c011372(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c038780u;
  R(3)=0x8c0bde4cu;
  { c->pr=0x8c01137cu; R(4)=LD32(R(3)); f_8c038780(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c011382(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c038780u;
  R(3)=0x8c0bde4cu;
  { c->pr=0x8c01138cu; R(4)=LD32(R(3)); f_8c038780(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c011392(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0bde50u;
  ST32(R(15),R(5));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c0113e6; }
  { c->pr=0x8c0113aau;  f_8c011010(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0113e0;
  { R(0)=0x0u; goto L8c011452; }
L8c0113e0:;
  R(2)=0x8c0bde50u;
  R(3)=0x0u;
  ST32(R(2),R(3));
L8c0113e6:;
  R(3)=0x8c0c758cu;
  R(13)=0x8c0bde44u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0113fe;
  R(2)=0x8c064e90u;
  R(5)=0x8c0b6cf4u;
  R(6)=0x182u;
  { c->pr=0x8c0113fau; R(4)=0x64u; f_8c064e90(c); }
  {  goto L8c011408; }
L8c0113fe:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0b6cf4u;
  R(6)=0x182u;
  { c->pr=0x8c011408u; R(4)=0x64u; f_8c0199c4(c); }
L8c011408:;
  R(3)=R(0);
  R(4)=R(3);
  R(3)=0x8c0686b8u;
  R(6)=0x64u;
  ST32(R(13),R(0));
  { c->pr=0x8c011416u; R(5)=0x0u; f_8c0686b8(c); }
  R(3)=0x1e0u;
  R(0)=0x8c0114a4u;
  R(2)=0x280u;
  R(5)=R(14);
  R(6)=0x1cu;
  ST32(R(14)+4,R(2));
  R(2)=0xffffffffu;
  ST32(R(14),R(3));
  R(3)=0x0u;
  fp_ld(c,4,R(0));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(14));
  ST32(R(14)+16,R(3));
  R(3)=0x8c0685b4u;
  ST32(R(14)+20,R(2));
  { c->pr=0x8c01143cu; R(4)=LD32(R(13)); f_8c0685b4(c); }
  R(2)=LD32(R(13));
  R(0)=0x5cu;
  R(3)=0x0u;
  ST32(R(2)+R(0),R(3));
  R(0)=0x60u;
  R(2)=LD32(R(13));
  ST32(R(2)+R(0),R(3));
  R(3)=0x1u;
  R(2)=LD32(R(15));
  R(0)=R(3);
  ST16(R(2),R(3));
L8c011452:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01145c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0bde44u;
  R(6)=0x1cu;
  ST32(R(15),R(5));
  R(2)=0x8c0685b4u;
  R(5)=LD32(R(3));
  { c->pr=0x8c01146eu; R(4)=LD32(R(15)); f_8c0685b4(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0114c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0bde44u;
  R(0)=R(4);
  ST16(R(15)+4,R(0));
  R(12)=R(5);
  R(9)=0x8c0686b8u;
  R(5)=R(15);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(11)=R(6);
  R(10)=LD32(R(3));
  R(13)=0xffffffffu;
  { c->pr=0x8c0114e8u; R(4)=R(0); f_8c0112b4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c01151e;
  R(6)=0x68u;
  ST16(R(11),R(13));
  R(5)=R(6);
  R(5)+=0x64u;
  { uint32_t tg=R(9); c->pr=0x8c0114f8u; R(4)=R(12); sh4_call(c,tg); }
  R(2)=0x1c8u;
  R(7)=0x20u;
  R(3)=0x8c0b6cf4u;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0b6d04u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0bdc7cu;
  R(3)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(2));
  R(2)=0x8c012658u;
  { c->pr=0x8c01151au; R(4)=0x34u; f_8c012658(c); }
  { R(15)+=0x18u; goto L8c011550; }
L8c01151e:;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c011534;
  R(3)=0x8c064e90u;
  R(5)=0x8c0b6cf4u;
  R(6)=0x1cdu;
  { c->pr=0x8c011530u; R(4)=0x6cu; f_8c064e90(c); }
  {  goto L8c01153e; }
L8c011534:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0b6cf4u;
  R(6)=0x1cdu;
  { c->pr=0x8c01153eu; R(4)=0x6cu; f_8c0199c4(c); }
L8c01153e:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0115a0;
  R(6)=0x68u;
  ST16(R(11),R(13));
  R(5)=R(6);
  R(5)+=0x64u;
  { uint32_t tg=R(9); c->pr=0x8c011550u; R(4)=R(12); sh4_call(c,tg); }
L8c011550:;
  { R(0)=0x0u; goto L8c0115f0; }
L8c0115a0:;
  R(5)=0x0u;
  R(6)=0x6cu;
  { uint32_t tg=R(9); c->pr=0x8c0115a8u; R(4)=R(14); sh4_call(c,tg); }
  R(3)=0x8c0685b4u;
  R(5)=R(12);
  R(6)=0x68u;
  { c->pr=0x8c0115b2u; R(4)=R(14); f_8c0685b4(c); }
  R(5)=R(14);
  { c->pr=0x8c0115b8u; R(4)=R(10); f_8c0110d0(c); }
  R(0)=0x60u;
  R(5)=R(14);
  R(3)=0x0u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x58u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x5cu;
  ST32(R(14)+R(0),R(13));
  R(2)=R(3);
  R(3)=0x8c0685b4u;
  R(0)=0x68u;
  ST32(R(14)+R(0),R(2));
  R(6)=R(0);
  { c->pr=0x8c0115d6u; R(4)=R(12); f_8c0685b4(c); }
  R(2)=(int32_t)(int16_t)LD16(R(15));
  R(3)=R(10);
  R(3)+=0x1cu;
  R(2)<<=2;
  R(2)+=R(3);
  ST32(R(2),R(14));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)<<=2;
  R(0)<<=2;
  R(0)+=R(3);
  ST16(R(11),R(0));
  R(0)=0x1u;
L8c0115f0:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c011602(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  ST32(R(15)+4,R(5));
  R(0)=R(4);
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c011616;
  { R(0)&=0xfu; goto L8c011620; }
L8c011616:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0xfu;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c011620:;
  R(3)=0x8c0bde44u;
  R(6)=0x68u;
  ST16(R(15),R(0));
  R(0)=0x5cu;
  R(14)=(int32_t)(int16_t)LD16(R(15));
  R(2)=LD32(R(3));
  R(3)=0xffffffffu;
  R(14)<<=2;
  R(2)+=0x1cu;
  R(14)+=R(2);
  R(14)=LD32(R(14));
  R(2)=0x0u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x58u;
  R(3)=0x8c0685b4u;
  R(5)=R(14);
  ST32(R(14)+R(0),R(2));
  { c->pr=0x8c011646u; R(4)=LD32(R(15)+4); f_8c0685b4(c); }
  R(0)=0x1u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c011650(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d3c80u;
  R(4)=0x8c0fa88cu;
  { c->pr=0x8c01165au;  f_8c0d3c80(c); }
  R(2)=0x8c0d3ae0u;
  R(4)=0x8c0fa82cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0d3ae0(c); return; } }
}
void f_8c011662(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(2)=0x8c0bde44u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=R(4);
  c->t=(int32_t)R(0)>=0;
  ST32(R(15)+8,R(5));
  R(3)=LD32(R(2));
  ST32(R(15)+4,R(3));
  if(!c->t) goto L8c01167c;
  { R(0)&=0xfu; goto L8c011686; }
L8c01167c:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0xfu;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c011686:;
  ST16(R(15),R(0));
  R(5)=0x0u;
  R(14)=(int32_t)(int16_t)LD16(R(15));
  R(6)=0x6cu;
  R(3)=LD32(R(15)+4);
  R(14)<<=2;
  R(3)+=0x1cu;
  R(14)+=R(3);
  R(3)=0x8c0686b8u;
  R(14)=LD32(R(14));
  { c->pr=0x8c01169eu; R(4)=R(14); f_8c0686b8(c); }
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0116a8u; R(4)=R(14); f_8c0685b4(c); }
  R(5)=R(14);
  { c->pr=0x8c0116aeu; R(4)=LD32(R(15)+4); f_8c0110d0(c); }
  R(0)=0x58u;
  R(5)=R(14);
  R(2)=0x0u;
  ST32(R(14)+R(0),R(2));
  R(0)=0x5cu;
  R(3)=0xffffffffu;
  ST32(R(14)+R(0),R(3));
  R(6)=0x68u;
  R(3)=0x8c0685b4u;
  { c->pr=0x8c0116c4u; R(4)=LD32(R(15)+8); f_8c0685b4(c); }
  R(0)=0x1u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0116ce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c0bde44u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=R(4);
  c->t=(int32_t)R(0)>=0;
  R(3)=LD32(R(2));
  ST32(R(15)+4,R(3));
  if(!c->t) goto L8c011720;
  { R(0)&=0xfu; goto L8c01172a; }
L8c011720:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0xfu;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c01172a:;
  R(14)=R(0);
  R(0)=LD32(R(15)+4);
  R(4)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)=R(0);
  R(3)+=0x1cu;
  R(4)<<=2;
  R(4)+=R(3);
  R(3)=0x8c0686b8u;
  R(4)=LD32(R(4));
  R(6)=0x6cu;
  R(5)=R(6);
  ST32(R(15),R(4));
  { c->pr=0x8c011746u; R(5)+=0x60u; f_8c0686b8(c); }
  R(2)=0x8c064eb8u;
  R(5)=0x8c0b6cf4u;
  R(6)=0x25du;
  { c->pr=0x8c011750u; R(4)=R(15); f_8c064eb8(c); }
  R(2)=LD32(R(15)+4);
  R(3)=(uint32_t)(int32_t)(int16_t)R(14);
  R(3)<<=2;
  R(2)+=0x1cu;
  R(1)=0x0u;
  R(3)+=R(2);
  R(0)=0x1u;
  ST32(R(3),R(1));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0117a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(2)=0x8c0bde44u;
  R(12)=0x0u;
  R(9)=0x8c0b6cf4u;
  R(0)=R(12);
  R(3)=LD32(R(2));
  R(13)=R(12);
  R(8)=0x8c0686b8u;
  R(14)=R(12);
  R(10)=0x280u;
  R(11)=0xccu;
  ST32(R(15),R(3));
  ST16(R(15)+4,R(0));
L8c0117ca:;
  R(0)=LD32(R(15));
  R(3)=R(0);
  R(3)+=0x1cu;
  R(3)+=R(13);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0117fe;
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0x6cu;
  R(4)+=0x1cu;
  R(4)+=R(14);
  { uint32_t tg=R(8); c->pr=0x8c0117e6u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(5)=R(9);
  R(3)=0x8c064eb8u;
  R(6)=R(10);
  R(4)+=0x1cu;
  { c->pr=0x8c0117f4u; R(4)+=R(14); f_8c064eb8(c); }
  R(0)=LD32(R(15));
  R(3)=R(0);
  R(3)+=0x1cu;
  R(3)+=R(14);
  ST32(R(3),R(12));
L8c0117fe:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(13)+=0x4u;
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  R(0)=LD32(R(15));
  R(3)=R(0);
  R(3)+=0x1cu;
  R(3)+=R(13);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)+=0x4u; if(k) goto L8c01183c; }
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0x6cu;
  R(4)+=0x1cu;
  R(4)+=R(14);
  { uint32_t tg=R(8); c->pr=0x8c011824u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(5)=R(9);
  R(3)=0x8c064eb8u;
  R(6)=R(10);
  R(4)+=0x1cu;
  { c->pr=0x8c011832u; R(4)+=R(14); f_8c064eb8(c); }
  R(0)=LD32(R(15));
  R(3)=R(0);
  R(3)+=0x1cu;
  R(3)+=R(14);
  ST32(R(3),R(12));
L8c01183c:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(13)+=0x4u;
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  R(0)=LD32(R(15));
  R(3)=R(0);
  R(3)+=0x1cu;
  R(3)+=R(13);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)+=0x4u; if(k) goto L8c01187a; }
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0x6cu;
  R(4)+=0x1cu;
  R(4)+=R(14);
  { uint32_t tg=R(8); c->pr=0x8c011862u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(5)=R(9);
  R(3)=0x8c064eb8u;
  R(6)=R(10);
  R(4)+=0x1cu;
  { c->pr=0x8c011870u; R(4)+=R(14); f_8c064eb8(c); }
  R(0)=LD32(R(15));
  R(3)=R(0);
  R(3)+=0x1cu;
  R(3)+=R(14);
  ST32(R(3),R(12));
L8c01187a:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(13)+=0x4u;
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  R(0)=LD32(R(15));
  R(3)=R(0);
  R(3)+=0x1cu;
  R(3)+=R(13);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)+=0x4u; if(k) goto L8c0118b8; }
  R(4)=LD32(R(15));
  R(5)=R(11);
  R(6)=0x6cu;
  R(4)+=0x1cu;
  R(4)+=R(14);
  { uint32_t tg=R(8); c->pr=0x8c0118a0u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(5)=R(9);
  R(3)=0x8c064eb8u;
  R(6)=R(10);
  R(4)+=0x1cu;
  { c->pr=0x8c0118aeu; R(4)+=R(14); f_8c064eb8(c); }
  R(0)=LD32(R(15));
  R(3)=R(0);
  R(3)+=0x1cu;
  R(3)+=R(14);
  ST32(R(3),R(12));
L8c0118b8:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=0x10u;
  R(14)+=0x4u;
  R(0)+=0x1u;
  ST16(R(15)+4,R(0));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0117ca; }
  R(5)=R(11);
  R(6)=0x64u;
  { uint32_t tg=R(8); c->pr=0x8c0118d2u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x8c064eb8u;
  R(5)=R(9);
  R(6)=0x28au;
  { c->pr=0x8c0118dcu; R(4)=R(15); f_8c064eb8(c); }
  R(3)=0x8c0bde44u;
  R(0)=0x1u;
  R(2)=0xc0de0005u;
  ST32(R(3),R(2));
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
void f_8c011920(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(4)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)=R(4);
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c01192e;
  { R(0)&=0xfu; goto L8c011938; }
L8c01192e:;
  R(0)=~R(0);
  R(0)+=0x1u;
  R(0)&=0xfu;
  R(0)=~R(0);
  R(0)+=0x1u;
L8c011938:;
  R(3)=0x8c0bde44u;
  ST16(R(15)+4,R(0));
  R(0)=LD32(R(3));
  R(2)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(2)+=0x1cu;
  R(0)<<=2;
  R(1)=LD32(R(2)+R(0));
  R(0)=0x60u;
  R(3)=R(1);
  ST32(R(15),R(1));
  ST32(R(3)+R(0),R(5));
  R(0)=0x1u;
  { R(15)+=0x8u; return; }
}
void f_8c011956(SH4Ctx *c) {
  R(3)=0x8c0bde4cu;
  ST32(R(3),R(4));
  { R(0)=0x1u; return; }
}
void f_8c01195e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST16(R(15),R(4));
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  { c->pr=0x8c01196eu; R(4)=R(0); f_8c0116ce(c); }
  { c->pr=0x8c011972u; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0117a0(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
}
void f_8c0119a0(SH4Ctx *c) {
  R(3)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c0119e0; }
  R(2)=0x8c064e90u;
  R(4)=0x14cu;
  R(5)=0x8c0b7800u;
  { c->pr=0x8c0119bau; R(6)=0x48u; f_8c064e90(c); }
  {  goto L8c0119ea; }
L8c0119e0:;
  R(1)=0x8c0199c4u;
  R(4)=0x14cu;
  R(5)=0x8c0b7800u;
  { c->pr=0x8c0119eau; R(6)=0x48u; f_8c0199c4(c); }
L8c0119ea:;
  R(1)=R(0);
  c->t=(R(1)&R(1))==0;
  R(3)=R(0);
  { uint32_t k=!c->t; ST32(R(14),R(0)); if(k) goto L8c011a24; }
  R(3)=0x8c0125ccu;
  R(6)=0x48u;
  R(5)=0x8c0b7800u;
  { c->pr=0x8c0119feu; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0b7800u;
  R(2)=0x48u;
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
  { c->pr=0x8c011a22u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c011a24:;
  R(6)=0x14cu;
  R(5)=0x0u;
  R(13)=0x8c0686b8u;
  { c->pr=0x8c011a2eu; R(4)=LD32(R(14)); f_8c0686b8(c); }
  R(3)=LD32(R(14));
  R(0)=0x8u;
  c->fr[5]=0x00000000u;
  fp_st(c,5,R(0)+R(3));
  R(0)=0x8c011b04u;
  R(3)=LD32(R(14));
  fp_ld(c,4,R(0));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(3));
  R(0)=0x10u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)=0x8c011b08u;
  R(3)=LD32(R(14));
  fp_ld(c,4,R(0));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(3));
  R(0)=0x1cu;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)=0x20u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)=0x38u;
  R(3)=LD32(R(14));
  c->fr[4]=0x3F800000u;
  fp_st(c,4,R(0)+R(3));
  R(0)=0x3cu;
  R(3)=LD32(R(14));
  fp_st(c,5,R(0)+R(3));
  R(0)=0x40u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(2)=0x0u;
  R(3)=LD32(R(14));
  R(0)=0x4cu;
  R(6)=0x90u;
  R(5)=R(2);
  ST32(R(3)+R(0),R(2));
  R(4)=LD32(R(14));
  { uint32_t tg=R(13); c->pr=0x8c011a82u; R(4)+=0x50u; sh4_call(c,tg); }
  R(4)=LD32(R(14));
  R(6)=0x40u;
  R(3)=0xe0u;
  R(5)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c011a8eu; R(4)+=R(3); sh4_call(c,tg); }
  R(2)=LD32(R(14));
  R(3)=0xffffffffu;
  R(0)=0x130u;
  ST32(R(2),R(3));
  R(3)=0x0u;
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(3));
  R(0)+=0x8u;
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(3));
  R(0)+=0x4u;
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(3));
  R(0)+=0x4u;
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(3));
  R(0)+=0x4u;
  R(3)=0x8c0bde98u;
  R(2)=LD32(R(14));
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x8c0bde9cu;
  R(2)=LD32(R(14));
  R(1)=LD32(R(0));
  R(0)=0x134u;
  ST32(R(2)+R(0),R(1));
  R(2)=0x0u;
  R(4)=LD32(R(14));
  R(0)+=0x14u;
  ST8(R(4)+R(0),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c011b20(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(1)=R(4);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c011b36; }
  R(3)=0x8c064eb8u;
  R(6)=0x6du;
  R(5)=0x8c0b7800u;
  { c->pr=0x8c011b36u; R(4)=R(15); f_8c064eb8(c); }
L8c011b36:;
  R(2)=0x0u;
  ST32(R(15),R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c011b42(SH4Ctx *c) {
  R(3)=LD32(R(5));
  R(1)=LD32(R(5)+4);
  ST32(R(4)+8,R(3));
  ST32(R(4)+12,R(1));
  R(3)=LD32(R(5)+8);
  R(1)=LD32(R(5)+12);
  ST32(R(4)+16,R(3));
  { ST32(R(4)+20,R(1)); return; }
}
void f_8c011b54(SH4Ctx *c) {
  R(2)=LD32(R(4)+8);
  R(0)=LD32(R(4)+12);
  ST32(R(5),R(2));
  ST32(R(5)+4,R(0));
  R(2)=LD32(R(4)+16);
  R(0)=LD32(R(4)+20);
  ST32(R(5)+8,R(2));
  { ST32(R(5)+12,R(0)); return; }
}
void f_8c011b66(SH4Ctx *c) {
  R(1)=LD32(R(5));
  R(3)=R(4);
  R(2)=LD32(R(5)+4);
  R(3)+=0x38u;
  ST32(R(3),R(1));
  ST32(R(3)+4,R(2));
  R(1)=LD32(R(5)+8);
  R(2)=LD32(R(5)+12);
  ST32(R(3)+8,R(1));
  { ST32(R(3)+12,R(2)); return; }
}
void f_8c011b7c(SH4Ctx *c) {
  R(0)=R(4);
  R(0)+=0x38u;
  R(3)=LD32(R(0));
  R(2)=LD32(R(0)+4);
  ST32(R(5),R(3));
  ST32(R(5)+4,R(2));
  R(3)=LD32(R(0)+8);
  R(2)=LD32(R(0)+12);
  ST32(R(5)+8,R(3));
  { ST32(R(5)+12,R(2)); return; }
}
void f_8c011b92(SH4Ctx *c) {
  R(1)=LD32(R(5));
  R(3)=LD32(R(5)+4);
  ST32(R(4)+24,R(1));
  ST32(R(4)+28,R(3));
  R(1)=LD32(R(5)+8);
  R(3)=LD32(R(5)+12);
  ST32(R(4)+32,R(1));
  { ST32(R(4)+36,R(3)); return; }
}
void f_8c011ba4(SH4Ctx *c) {
  R(2)=LD32(R(4)+24);
  R(0)=LD32(R(4)+28);
  ST32(R(5),R(2));
  ST32(R(5)+4,R(0));
  R(2)=LD32(R(4)+32);
  R(0)=LD32(R(4)+36);
  ST32(R(5)+8,R(2));
  { ST32(R(5)+12,R(0)); return; }
}
void f_8c011bb6(SH4Ctx *c) {
  R(1)=LD32(R(6)+4);
  R(0)=0x48u;
  R(3)=LD32(R(6));
  ST32(R(4)+40,R(3));
  ST32(R(4)+44,R(1));
  R(1)=LD32(R(6)+12);
  R(3)=LD32(R(6)+8);
  ST32(R(4)+48,R(3));
  ST32(R(4)+52,R(1));
  { ST32(R(4)+R(0),R(5)); return; }
}
void f_8c011bcc(SH4Ctx *c) {
  R(2)=LD32(R(4)+44);
  R(0)=0x48u;
  R(3)=LD32(R(4)+40);
  ST32(R(6),R(3));
  ST32(R(6)+4,R(2));
  R(2)=LD32(R(4)+52);
  R(3)=LD32(R(4)+48);
  ST32(R(6)+8,R(3));
  ST32(R(6)+12,R(2));
  R(1)=LD32(R(4)+R(0));
  { ST32(R(5),R(1)); return; }
}
void f_8c011be4(SH4Ctx *c) {
  { ST32(R(4),R(5)); return; }
}
void f_8c011be8(SH4Ctx *c) {
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c011bf6;
  R(1)=0x8c2d0050u;
  ST32(R(1),R(4));
L8c011bf6:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c011c40;
  R(2)=LD32(R(4));
  R(3)=0xffbfffffu;
  R(2)&=R(3);
  { ST32(R(4),R(2)); goto L8c011c48; }
L8c011c40:;
  R(1)=LD32(R(4));
  R(3)=0x400000u;
  R(1)|=R(3);
  ST32(R(4),R(1));
L8c011c48:;
  {  return; }
}
void f_8c011c58(SH4Ctx *c) {
  R(0)=LD32(R(4));
  R(3)=0x400u;
  R(0)&=R(3);
  c->t=(R(0)&R(0))==0;
  { R(0)=c->t; return; }
}
void f_8c011c64(SH4Ctx *c) {
  R(0)=LD32(R(4));
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c011c7a;
  R(0)=0x4cu;
  R(2)=LD32(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c011c7e;
  R(0)=LD32(R(4)+R(0));
  R(0)=LD32(R(0)+4);
  c->t=(R(0)&0xa)==0;
  if(c->t) goto L8c011c7e;
L8c011c7a:;
  { R(0)=0x1u; return; }
L8c011c7e:;
  R(0)=0x0u;
  {  return; }
}
void f_8c011c7e(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c011cc0(SH4Ctx *c) {
  R(0)=0x4cu;
  R(3)=LD32(R(4)+R(0));
  c->t=R(3)==R(5);
  if(c->t) goto L8c011cd2;
  R(3)=0x1000u;
  ST32(R(4)+R(0),R(5));
  R(2)=LD32(R(4)+4);
  R(2)|=R(3);
  ST32(R(4)+4,R(2));
L8c011cd2:;
  R(6)=0x8000000u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c011cfc;
  R(0)=LD32(R(5)+4);
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c011ce6;
  R(2)=LD32(R(4));
  R(3)=0xfffffbffu;
  R(2)&=R(3);
  ST32(R(4),R(2));
L8c011ce6:;
  R(0)=LD32(R(5)+4);
  c->t=(R(0)&0x40)==0;
  if(c->t) goto L8c011cf4;
  R(2)=LD32(R(4));
  R(3)=0xf7ffffffu;
  { R(2)&=R(3); goto L8c011d00; }
L8c011cf4:;
  R(0)=LD32(R(4));
  R(0)|=R(6);
  { ST32(R(4),R(0)); goto L8c011d02; }
L8c011cfc:;
  R(2)=LD32(R(4));
  R(2)|=R(6);
L8c011d00:;
  ST32(R(4),R(2));
L8c011d02:;
  {  return; }
}
void f_8c011d40(SH4Ctx *c) {
  R(0)=0x128u;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  fp_st(c,4,R(0)+R(4));
  R(0)+=0xfffffff8u;
  fp_st(c,4,R(0)+R(4));
  R(0)+=0xcu;
  fp_st(c,5,R(0)+R(4));
  R(0)+=0xfffffff8u;
  fp_st(c,5,R(0)+R(4));
  R(0)+=0xcu;
  { uint32_t k=!c->t; ST32(R(4)+R(0),R(6)); if(k) goto L8c011d64; }
  fp_cmp(c,0,5,3);
  if(!c->t) goto L8c011d64;
  R(0)=0x130u;
  R(3)=0x0u;
  ST32(R(4)+R(0),R(3));
L8c011d64:;
  {  return; }
}
void f_8c011d68(SH4Ctx *c) {
  R(0)=0x120u;
  c->fr[3]=0x00000000u;
  fp_cmp(c,0,4,3);
  fp_st(c,4,R(0)+R(4));
  R(0)+=0x4u;
  fp_st(c,5,R(0)+R(4));
  R(0)+=0xcu;
  { uint32_t k=!c->t; ST32(R(4)+R(0),R(6)); if(k) goto L8c011d84; }
  fp_cmp(c,0,5,3);
  if(!c->t) goto L8c011d84;
  R(0)=0x130u;
  R(3)=0x0u;
  ST32(R(4)+R(0),R(3));
L8c011d84:;
  {  return; }
}
void f_8c011d88(SH4Ctx *c) {
  R(0)=0x128u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x12cu;
  fp_st(c,3,R(7));
  fp_ld(c,3,R(0)+R(4));
  R(0)+=0x4u;
  R(3)=LD32(R(15));
  fp_st(c,3,R(3));
  R(3)=LD32(R(4)+R(0));
  { ST32(R(6),R(3)); return; }
}
void f_8c011d9e(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c011db4;
  R(0)=0x128u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(!c->t) goto L8c011db4;
  R(0)=0x12cu;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,0,2,3);
  if(c->t) goto L8c011db8;
L8c011db4:;
  R(0)=0x130u;
  ST32(R(4)+R(0),R(5));
L8c011db8:;
  {  return; }
}
void f_8c011de0(SH4Ctx *c) {
  R(3)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c011dfc; }
  R(2)=0x8c064e90u;
  R(5)=0x8c0b7800u;
  R(6)=0x143u;
  { c->pr=0x8c011df8u; R(4)=0xcu; f_8c064e90(c); }
  {  goto L8c011e06; }
L8c011dfc:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0b7800u;
  R(6)=0x143u;
  { c->pr=0x8c011e06u; R(4)=0xcu; f_8c0199c4(c); }
L8c011e06:;
  R(1)=R(0);
  c->t=(R(1)&R(1))==0;
  R(3)=R(0);
  { uint32_t k=!c->t; ST32(R(14),R(0)); if(k) goto L8c011e40; }
  R(3)=0x8c0125ccu;
  R(5)=0x8c0b7800u;
  R(6)=0x143u;
  { c->pr=0x8c011e1au; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0x143u;
  R(1)=0x0u;
  R(3)=0x8c0b7800u;
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
  { c->pr=0x8c011e3eu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c011e40:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0xcu;
  { c->pr=0x8c011e4au; R(4)=LD32(R(14)); f_8c0686b8(c); }
  R(2)=LD32(R(14));
  R(3)=0x0u;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  ST32(R(2),R(3));
  R(2)=LD32(R(14));
  fp_st(c,3,R(0)+R(2));
  R(2)=0x0u;
  R(3)=LD32(R(14));
  ST32(R(3)+8,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c011ec0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=0xcu;
  R(14)=R(4);
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  fp_st(c,4,R(0)+R(15));
  R(0)=0x140u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=0x1u;
  ST32(R(14)+R(0),R(3));
  { c->pr=0x8c011edcu; R(4)=R(15); f_8c011de0(c); }
  R(2)=LD32(R(15)+8);
  R(0)=0xcu;
  R(3)=LD32(R(15));
  ST32(R(3),R(2));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  fp_st(c,3,R(0)+R(3));
  R(0)=0x140u;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c011efa;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c011f16;
L8c011efa:;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c011f00u; R(4)=R(14); f_8c011cc0(c); }
  R(0)=0x138u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(14)+R(0));
  R(0)=0x138u;
  ST32(R(2)+8,R(3));
  R(2)=LD32(R(15));
  ST32(R(14)+R(0),R(2));
  R(0)=0x13cu;
  R(3)=LD32(R(15));
  { ST32(R(14)+R(0),R(3)); goto L8c011f48; }
L8c011f16:;
  R(0)=0x138u;
  R(4)=LD32(R(14)+R(0));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=R(4); if(k) goto L8c011f40; }
  R(2)=LD32(R(15)+4);
  R(2)+=0xffffffffu;
  ST32(R(15)+4,R(2));
  R(2)+=0x1u;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c011f40;
L8c011f2c:;
  R(5)=R(4);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c011f40;
  R(3)=LD32(R(15)+4);
  R(3)+=0xffffffffu;
  ST32(R(15)+4,R(3));
  R(3)+=0x1u;
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c011f2c;
L8c011f40:;
  R(1)=LD32(R(15));
  ST32(R(1)+8,R(4));
  R(3)=LD32(R(15));
  ST32(R(5)+8,R(3));
L8c011f48:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c011f50(SH4Ctx *c) {
  R(0)=0x140u;
  { R(0)=LD32(R(4)+R(0)); return; }
}
void f_8c011f80(SH4Ctx *c) {
  R(0)=0x138u;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(1)=LD32(R(4)+R(0)); if(k) goto L8c011f90; }
L8c011f88:;
  R(5)+=0xffffffffu;
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(1)=LD32(R(1)+8); if(k) goto L8c011f88; }
L8c011f90:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(7));
  R(3)=LD32(R(1));
  { ST32(R(6),R(3)); return; }
}
void f_8c011f9c(SH4Ctx *c) {
  R(0)=0x138u;
  R(5)=LD32(R(4)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(4)+R(0));
  c->t=R(5)==R(3);
  { uint32_t k=c->t; R(6)=0x1u; if(k) goto L8c011fb6; }
L8c011faa:;
  R(0)=0x13cu;
  R(5)=LD32(R(5)+8);
  R(3)=LD32(R(4)+R(0));
  c->t=R(5)==R(3);
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c011faa; }
L8c011fb6:;
  R(0)=0x13cu;
  R(1)=LD32(R(4)+R(0));
  c->t=R(5)==R(1);
  if(!c->t) goto L8c011fc2;
  { R(0)=R(6); return; }
L8c011fc2:;
  R(0)=0x0u;
  {  return; }
}
void f_8c011fc2(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c012000(SH4Ctx *c) {
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(7)=0x1u; if(k) goto L8c012018; }
  R(0)=0x13cu;
  R(3)=0x8c2d004cu;
  R(1)=0x8c2d0048u;
  ST32(R(1),R(4));
  R(2)=LD32(R(4)+R(0));
  ST32(R(3),R(2));
L8c012018:;
  R(0)=0x138u;
  R(6)=LD32(R(4)+R(0));
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c012032;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c01202e;
L8c012026:;
  R(7)+=0x1u;
  c->t=R(7)==R(5);
  { uint32_t k=!c->t; R(6)=LD32(R(6)+8); if(k) goto L8c012026; }
L8c01202e:;
  R(0)=0x13cu;
  ST32(R(4)+R(0),R(6));
L8c012032:;
  {  return; }
}
void f_8c012054(SH4Ctx *c) {
  R(0)=0x140u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0120c6;
  R(0)=LD32(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0120a0;
  R(0)=0x140u;
  R(5)=0x0u;
  ST32(R(4)+R(0),R(5));
  R(0)+=0xfffffff8u;
  ST32(R(4)+R(0),R(5));
  R(0)+=0x4u;
  { ST32(R(4)+R(0),R(5)); goto L8c0120c6; }
L8c0120a0:;
  R(0)=0x138u;
  c->t=(R(5)&R(5))==0;
  R(6)=LD32(R(4)+R(0));
  { uint32_t k=c->t; R(7)=R(6); if(k) goto L8c0120bc; }
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0120bc;
L8c0120ae:;
  R(5)+=0xffffffffu;
  R(7)=R(6);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)+8); if(k) goto L8c0120bc; }
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0120ae;
L8c0120bc:;
  R(0)=0x140u;
  ST32(R(7)+8,R(6));
  R(3)=LD32(R(4)+R(0));
  R(3)+=0xffffffffu;
  ST32(R(4)+R(0),R(3));
L8c0120c6:;
  {  return; }
}
void f_8c0120a0(SH4Ctx *c) {
  R(0)=0x138u;
  c->t=(R(5)&R(5))==0;
  R(6)=LD32(R(4)+R(0));
  { uint32_t k=c->t; R(7)=R(6); if(k) goto L8c0120bc; }
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0120bc;
L8c0120ae:;
  R(5)+=0xffffffffu;
  R(7)=R(6);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=LD32(R(6)+8); if(k) goto L8c0120bc; }
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0120ae;
L8c0120bc:;
  R(0)=0x140u;
  ST32(R(7)+8,R(6));
  R(3)=LD32(R(4)+R(0));
  R(3)+=0xffffffffu;
  ST32(R(4)+R(0),R(3));
  {  return; }
}
void f_8c0120ca(SH4Ctx *c) {
  R(0)=0x148u;
  R(2)=0x1u;
  { ST8(R(4)+R(0),R(2)); return; }
}
void f_8c0120d2(SH4Ctx *c) {
  R(0)=0x148u;
  R(3)=0x0u;
  { ST8(R(4)+R(0),R(3)); return; }
}
void f_8c0120da(SH4Ctx *c) {
  R(2)=0x8c0bdea4u;
  R(5)=LD32(R(2));
  R(5)=LD32(R(5));
  R(5)=LD32(R(5)+16);
  R(0)=(int32_t)(int16_t)LD16(R(5)+8);
  R(0)=R(0)&0xFFFF;
  c->t=R(4)>R(0);
  if(c->t) goto L8c012140;
  R(2)=LD32(R(5));
  R(4)<<=2;
  R(4)<<=2;
  R(4)+=R(2);
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c012140;
  R(2)=LD32(R(4));
  R(4)=LD32(R(2)+4);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c012140;
  R(0)=0x2eu;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c012140;
  R(0)=LD32(R(4)+16);
  R(0)=(int32_t)(int16_t)LD16(R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c012140;
  R(4)=LD32(R(4)+20);
  R(4)=LD32(R(4));
  R(0)=LD32(R(4));
  { R(0)=LD32(R(0)); return; }
L8c012140:;
  R(0)=0x0u;
  {  return; }
}
void f_8c012146(SH4Ctx *c) {
  R(4)=0x8c0bde98u;
  R(3)=0x8c11eea4u;
  fp_st(c,4,R(3));
  fp_ld(c,3,R(4));
  fp_arith(c,0,3,4);
  fp_st(c,3,R(4));
  R(4)=0x8c0bde9cu;
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  { ST32(R(4),R(2)); return; }
}
void f_8c01215c(SH4Ctx *c) {
  R(0)=0x4cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c012170;
  {  goto L8c012460; }
L8c012170:;
  R(0)=0x130u;
  R(5)=0x0u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(6)=0x1u; if(k) goto L8c012180; }
  {  goto L8c012280; }
L8c012180:;
  R(0)=0x4cu;
  R(3)=LD32(R(4)+R(0));
  R(0)<<=2;
  ST32(R(3)+16,R(6));
  R(0)=LD32(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c012244;
  R(0)=0x134u;
  R(1)=0x8c0bde9cu;
  R(3)=LD32(R(4)+R(0));
  R(2)=LD32(R(1));
  c->t=R(3)==R(2);
  if(c->t) goto L8c012244;
  R(0)=0x120u;
  R(7)=0x8c11eea4u;
  R(1)=R(0);
  R(1)+=0x8u;
  R(1)+=R(4);
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(1));
  fp_ld(c,0,R(7));
  R(1)=0x12cu;
  fp_fmac(c,2,3);
  R(1)+=R(4);
  fp_st(c,2,R(0)+R(4));
  R(0)+=0x4u;
  fp_ld(c,2,R(0)+R(4));
  fp_ld(c,3,R(1));
  fp_ld(c,0,R(7));
  fp_fmac(c,2,3);
  c->fr[3]=0x00000000u;
  fp_st(c,2,R(0)+R(4));
  R(0)+=0xfffffffcu;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c012200;
  R(0)=0x120u;
  fp_ld(c,4,R(0)+R(4));
  fp_ftrc(c,4);
  fp_mov(c,1,4);
  R(3)=c->fpul;
  c->fpul=R(3);
  fp_float(c,2);
  { fp_arith(c,1,1,2); goto L8c012214; }
L8c012200:;
  R(0)=0x120u;
  fp_ld(c,4,R(0)+R(4));
  fp_mov(c,2,4);
  fp_unary(c,0,2);
  fp_ftrc(c,2);
  fp_mov(c,1,4);
  R(3)=c->fpul;
  c->fpul=R(3);
  fp_float(c,2);
  fp_arith(c,0,1,2);
L8c012214:;
  fp_st(c,1,R(0)+R(4));
  R(0)=0x124u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(4));
  fp_cmp(c,1,3,2);
  if(c->t) goto L8c012230;
  fp_ld(c,4,R(0)+R(4));
  fp_ftrc(c,4);
  fp_mov(c,1,4);
  R(3)=c->fpul;
  c->fpul=R(3);
  fp_float(c,2);
  { fp_arith(c,1,1,2); goto L8c012242; }
L8c012230:;
  fp_ld(c,4,R(0)+R(4));
  fp_mov(c,2,4);
  fp_unary(c,0,2);
  fp_ftrc(c,2);
  fp_mov(c,1,4);
  R(3)=c->fpul;
  c->fpul=R(3);
  fp_float(c,2);
  fp_arith(c,0,1,2);
L8c012242:;
  fp_st(c,1,R(0)+R(4));
L8c012244:;
  R(0)=0x4cu;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x120u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(3));
  R(0)=0x4cu;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x124u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(3));
  {  goto L8c012286; }
L8c012280:;
  R(0)=0x4cu;
  R(2)=LD32(R(4)+R(0));
  ST32(R(2)+16,R(5));
L8c012286:;
  R(0)=0x140u;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c012292;
  {  goto L8c012460; }
L8c012292:;
  R(0)=0x148u;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01229e;
  {  goto L8c012460; }
L8c01229e:;
  R(0)=0x134u;
  R(3)=0x8c0bde9cu;
  R(2)=LD32(R(4)+R(0));
  R(1)=LD32(R(3));
  c->t=R(2)==R(1);
  if(!c->t) goto L8c0122ae;
  {  goto L8c012460; }
L8c0122ae:;
  R(2)=0x8c0bdea1u;
  R(13)=0x8c0bdea0u;
  R(7)=0x8c0bde94u;
  R(14)=0x8c0bde98u;
  ST8(R(13),R(5));
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01237e;
  R(0)=0x138u;
  R(12)=0x8c129af0u;
  R(3)=LD32(R(4)+R(0));
  R(0)+=0x4u;
  R(5)=0x8c11eea8u;
  ST32(R(4)+R(0),R(3));
  R(3)=LD32(R(4)+R(0));
  R(0)=0x4u;
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(0)+R(3));
  R(11)=0x8c0bdea2u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(12));
  fp_mov(c,4,2);
  fp_arith(c,2,4,3);
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(5));
  fp_arith(c,1,2,3);
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c0122ea;
  {  goto L8c012400; }
L8c0122ea:;
  R(0)=0x13cu;
  fp_ld(c,3,R(5));
  fp_arith(c,0,3,4);
  fp_st(c,3,R(5));
  R(3)=LD32(R(4)+R(0));
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c012302;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(2)+8);
  { ST32(R(4)+R(0),R(3)); goto L8c012360; }
L8c012302:;
  R(1)=(int32_t)(int8_t)LD8(R(11));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c01230c;
  { ST8(R(13),R(6)); goto L8c012400; }
L8c01230c:;
  R(0)=0x138u;
  R(2)=LD32(R(4)+R(0));
  R(0)+=0x4u;
  { ST32(R(4)+R(0),R(2)); goto L8c012400; }
L8c012360:;
  R(1)=LD32(R(4)+R(0));
  R(0)=0x4u;
  fp_ld(c,3,R(7));
  fp_ld(c,2,R(0)+R(1));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(12));
  fp_mov(c,4,2);
  fp_arith(c,2,4,3);
  fp_ld(c,2,R(14));
  fp_ld(c,3,R(5));
  fp_arith(c,1,2,3);
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c0122ea;
  {  goto L8c012400; }
L8c01237e:;
  R(0)=0x13cu;
  c->fr[3]=0x00000000u;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(3));
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c012400;
  R(0)=0x13cu;
  fp_ld(c,2,R(7));
  R(1)=LD32(R(4)+R(0));
  R(0)=0x4u;
  fp_ld(c,1,R(14));
  fp_ld(c,4,R(0)+R(1));
  R(0)=0x144u;
  fp_arith(c,2,4,2);
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,1,1,2);
  fp_cmp(c,1,1,4);
  if(!c->t) goto L8c012400;
L8c0123a4:;
  R(0)=0x144u;
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,0,3,4);
  fp_st(c,3,R(0)+R(4));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(4)+R(0));
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0123e0;
  R(0)=0x13cu;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(2)+8);
  { ST32(R(4)+R(0),R(3)); goto L8c0123e8; }
L8c0123e0:;
  R(0)=0x138u;
  R(1)=LD32(R(4)+R(0));
  R(0)+=0x4u;
  ST32(R(4)+R(0),R(1));
L8c0123e8:;
  R(0)=0x13cu;
  fp_ld(c,3,R(7));
  R(3)=LD32(R(4)+R(0));
  R(0)=0x4u;
  fp_ld(c,2,R(14));
  fp_ld(c,4,R(0)+R(3));
  R(0)=0x144u;
  fp_arith(c,2,4,3);
  fp_ld(c,3,R(0)+R(4));
  fp_arith(c,1,2,3);
  fp_cmp(c,1,2,4);
  if(c->t) goto L8c0123a4;
L8c012400:;
  R(0)=0x13cu;
  R(2)=LD32(R(4)+R(0));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c012440;
  R(0)=0x4cu;
  R(3)=LD32(R(4)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c012440;
  R(0)=0x13cu;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x4cu;
  R(1)=LD32(R(4)+R(0));
  R(0)=0x8u;
  R(2)=LD32(R(3));
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x13cu;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x4cu;
  R(1)=LD32(R(4)+R(0));
  R(0)=0xcu;
  R(2)=LD32(R(3));
  fp_ld(c,3,R(0)+R(1));
  fp_st(c,3,R(0)+R(2));
  R(0)=0x13cu;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x4cu;
  R(1)=LD32(R(4)+R(0));
  R(2)=LD32(R(3));
  R(3)=LD32(R(1)+16);
  ST32(R(2)+16,R(3));
L8c012440:;
  R(0)=0x13cu;
  R(2)=LD32(R(4)+R(0));
  R(0)=0x4cu;
  R(1)=LD32(R(4)+R(0));
  R(3)=LD32(R(2));
  c->t=R(1)==R(3);
  if(c->t) goto L8c012460;
  R(0)=0x13cu;
  R(3)=LD32(R(4)+R(0));
  R(0)=0x4cu;
  R(2)=LD32(R(3));
  R(3)=0x1000u;
  ST32(R(4)+R(0),R(2));
  R(1)=LD32(R(4)+4);
  R(1)|=R(3);
  ST32(R(4)+4,R(1));
L8c012460:;
  R(0)=0x8c0bdea1u;
  R(2)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c012470;
  R(3)=0x8c0bde9cu;
  R(0)=0x134u;
  R(2)=LD32(R(3));
  ST32(R(4)+R(0),R(2));
L8c012470:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0124a0(SH4Ctx *c) {
  R(3)=0x8c0bdf1cu;
  { ST32(R(3),R(4)); return; }
}
void f_8c0124a6(SH4Ctx *c) {
  R(6)=0x8c0bdf18u;
  R(0)=0x8c11eeb4u;
  R(3)=(int32_t)(int8_t)LD8(R(6));
  R(3)=R(3)&0xFF;
  R(3)<<=2;
  ST32(R(3)+R(0),R(4));
  R(2)=(int32_t)(int8_t)LD8(R(6));
  R(0)=0x8c11f2b0u;
  R(2)=R(2)&0xFF;
  R(2)<<=2;
  ST32(R(2)+R(0),R(5));
  R(3)=(int32_t)(int8_t)LD8(R(6));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0124c8;
  R(2)=0x8c11f6acu;
  R(1)=0x0u;
  ST16(R(2),R(1));
L8c0124c8:;
  R(0)=(int32_t)(int8_t)LD8(R(6));
  R(0)+=0x1u;
  ST8(R(6),R(0));
  { R(0)+=0xffffffffu; return; }
}
void f_8c0124d2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(12)=0x8c11f2b0u;
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(3)=LD32(R(12)+R(0));
  R(2)=(int32_t)(int16_t)LD16(R(3));
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=R(2)==R(3);
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c01250c; }
L8c0124f2:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(13)+=0x1u;
  R(2)=R(13)&0xFFFF;
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  R(2)<<=2;
  R(3)=LD32(R(12)+R(0));
  c->t=R(2)>>31;R(2)<<=1;
  R(3)+=R(2);
  R(1)=(int32_t)(int16_t)LD16(R(3));
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=R(1)==R(3);
  if(!c->t) goto L8c0124f2;
L8c01250c:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  R(13)=R(13)&0xFFFF;
  R(13)<<=2;
  R(4)=0x8c11f6bcu;
  R(0)=R(0)&0xFF;
  R(0)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  ST32(R(15),R(0));
  R(3)=LD32(R(12)+R(0));
  R(3)+=R(13);
  R(2)=LD32(R(3)+4);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(14)+12);
  R(0)=R(0)&0xFFFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+8);
  R(0)=0x8c11eeb4u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(2)+R(0));
  R(2)=0x8c06874cu;
  R(1)=LD32(R(3));
  R(3)=0x8c0b7810u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c012540u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c06874c(c); }
  R(0)=0x8c11f6bcu;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0125cc(SH4Ctx *c) {
  R(4)=0x8c11f6acu;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0125e4;
  R(2)=(int32_t)(int16_t)LD16(R(4));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0125e4;
  R(1)=0x0u;
  R(5)=0x8c0b78b4u;
  ST16(R(4),R(1));
  R(4)=0x8c0b78b8u;
  {  goto L8c0125e8; }
L8c0125e4:;
  R(4)=0x8c0b78e8u;
  R(5)=0x8c0b78b4u;
L8c0125e8:;
  R(3)=0x8c03d4bcu;
  {  { f_8c03d4bc(c); return; } }
}
void f_8c012640(SH4Ctx *c) {
  R(3)=0x8c0bdf18u;
  R(5)=(int32_t)(int8_t)LD8(R(3));
  R(5)=R(5)&0xFF;
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c012654; }
L8c01264c:;
  R(4)+=0x1u;
  R(3)=R(4)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(5);
  if(!c->t) goto L8c01264c;
L8c012654:;
  {  return; }
}
void f_8c012658(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=R(4);
  R(14)=0x8c11f6acu;
  ST16(R(15)+4,R(0));
  R(0)=R(7);
  R(11)=0x8c0bdf1cu;
  c->t=(R(14)&R(14))==0;
  R(13)=0x8c03d4bcu;
  ST8(R(15),R(5));
  ST16(R(15)+8,R(0));
  { uint32_t k=!c->t; R(12)=LD32(R(15)+44); if(k) goto L8c012698; }
  R(4)=0x8c0b7930u;
  R(5)=0x8c0b7944u;
  { uint32_t tg=R(13); c->pr=0x8c012682u;  sh4_call(c,tg); }
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c012724;
  R(3)=LD32(R(11));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { uint32_t tg=R(3); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c012698:;
  R(1)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0126a6;
  R(4)=0x8c0b79b4u;
  R(5)=0x8c0b78b4u;
  { uint32_t tg=R(13); c->pr=0x8c0126a6u;  sh4_call(c,tg); }
L8c0126a6:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  ST16(R(14),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(14)+2,R(0));
  R(0)=0x34u;
  R(3)=LD32(R(15)+32);
  ST32(R(14)+4,R(3));
  R(2)=LD32(R(15)+48);
  ST32(R(14)+8,R(2));
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  ST16(R(14)+12,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=R(3)>=R(0);
  if(c->t) goto L8c0126f2;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0126d6;
  { c->pr=0x8c0126ccu; R(4)=R(14); f_8c0124d2(c); }
  R(4)=0x8c0b79e0u;
  { uint32_t tg=R(13); c->pr=0x8c0126d2u; R(5)=R(0); sh4_call(c,tg); }
  {  goto L8c0126e4; }
L8c0126d6:;
  { c->pr=0x8c0126dau; R(4)=R(14); f_8c0124d2(c); }
  R(2)=0x8c03d4c0u;
  R(5)=R(0);
  R(4)=0x8c0b79e0u;
  { c->pr=0x8c0126e4u; R(6)=R(12); f_8c03d4c0(c); }
L8c0126e4:;
  R(14)=LD32(R(11));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c012724;
  { uint32_t tg=R(14); c->pr=0x8c0126eeu;  sh4_call(c,tg); }
  {  goto L8c012724; }
L8c0126f2:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01270a;
  { c->pr=0x8c0126fau; R(4)=R(14); f_8c0124d2(c); }
  R(4)=0x8c0b79e8u;
  { uint32_t tg=R(13); c->pr=0x8c012700u; R(5)=R(0); sh4_call(c,tg); }
  R(0)=0x24u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  {  goto L8c01271e; }
L8c01270a:;
  { c->pr=0x8c01270eu; R(4)=R(14); f_8c0124d2(c); }
  R(3)=0x8c03d4c0u;
  R(5)=R(0);
  R(4)=0x8c0b79e8u;
  { c->pr=0x8c012718u; R(6)=R(12); f_8c03d4c0(c); }
  R(0)=0x24u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
L8c01271e:;
  R(0)=0x28u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
L8c012724:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c012780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c0bb6e8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c065166u;
  R(12)+=0x20u;
  R(14)=R(4);
  c->t=R(14)>=R(12);
  if(c->t) goto L8c0127a2;
L8c012796:;
  { uint32_t tg=R(13); c->pr=0x8c01279au; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c01279eu; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c012796;
L8c0127a2:;
  R(3)=0x8c010fa0u;
  { c->pr=0x8c0127a8u;  f_8c010fa0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0ccc2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ccc2c(c); return; } }
}
void f_8c0127b4(SH4Ctx *c) {
  R(4)=0x8c0bdfe0u;
  R(6)=0x8c123ac4u;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(5)=0x0u; if(k) goto L8c0127d8; }
  R(7)=R(6);
  ST8(R(4),R(5));
  R(7)+=0x20u;
  R(4)=R(6);
  c->t=R(4)>=R(7);
  if(c->t) goto L8c0127d8;
L8c0127cc:;
  ST32(R(4),R(5));
  R(4)+=0x4u;
  ST32(R(4),R(5));
  R(4)+=0x4u;
  c->t=R(4)>=R(7);
  if(!c->t) goto L8c0127cc;
L8c0127d8:;
  R(4)=R(5);
  R(5)=0x8u;
  R(7)=0xffffffffu;
L8c0127de:;
  R(0)=R(4);
  R(0)<<=2;
  R(3)=LD32(R(6)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0127ec;
  { R(7)=R(4); goto L8c0127f2; }
L8c0127ec:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0127de;
L8c0127f2:;
  { R(0)=R(7); return; }
}
void f_8c0127f6(SH4Ctx *c) {
  R(0)=R(4);
  R(0)<<=2;
  R(0)<<=2;
  R(3)=R(4);
  c->t=R(0)>>31;R(0)<<=1;
  R(2)=0x8c11f8c4u;
  R(0)+=R(3);
  R(0)<<=2;
  R(0)<<=2;
  R(0)<<=2;
  { R(0)+=R(2); return; }
}
void f_8c012840(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(5));
  c->t=(int32_t)R(0)==114;
  if(!c->t) goto L8c0128b2;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c01287c;
  R(3)=0x1a4u;
  R(1)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0x8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  R(3)=0xffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0bdf60u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c01287au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c01287c:;
  { c->pr=0x8c012880u;  f_8c0127b4(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c0128b2; }
  R(13)=R(14);
  R(13)<<=2;
  R(13)<<=2;
  R(3)=R(14);
  c->t=R(13)>>31;R(13)<<=1;
  R(5)=0x8c11f8c4u;
  R(13)+=R(3);
  R(13)<<=2;
  R(13)<<=2;
  R(13)<<=2;
  R(5)+=R(13);
  { c->pr=0x8c0128a0u; R(4)=LD32(R(15)); f_8c01297c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0128b2;
  R(0)=0x8c123ac4u;
  R(3)=0x1u;
  R(14)<<=2;
  ST32(R(14)+R(0),R(3));
  R(0)=0x8c11f8c4u;
  { R(0)+=R(13); goto L8c0128b4; }
L8c0128b2:;
  R(0)=0x0u;
L8c0128b4:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0128be(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0429d2u;
  { c->pr=0x8c0128cau; R(14)=R(6); f_8c0429d2(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c012900;
  { R(0)=0xffffffffu; goto L8c012974; }
L8c012900:;
  { c->pr=0x8c012904u;  f_8c01342a(c); }
  R(5)=LD32(R(13)+4);
  R(2)=0xfffffff5u;
  R(3)=0x7ffu;
  R(1)=0x8c0cefe8u;
  R(5)+=R(3);
  R(4)=LD32(R(13));
  R(5)=sh4_shad(R(5),R(2));
  R(2)=0x96u;
  { c->pr=0x8c012918u; R(4)+=R(2); f_8c0cefe8(c); }
  R(1)=0x830u;
  R(4)=R(14);
  R(2)=0x800u;
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(0)=0x838u;
  R(3)=LD32(R(13)+4);
  R(13)=0x0u;
  ST32(R(14)+R(0),R(3));
  R(0)+=0xffffffecu;
  ST32(R(14)+R(0),R(2));
  R(0)+=0x8u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0xfffffffcu;
  R(3)=0xffffffffu;
  ST32(R(14)+R(0),R(3));
  R(3)=0xffffffe0u;
  R(4)&=R(3);
  R(0)+=0xfffffff8u;
  R(4)+=0x20u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x10u;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c01296e;
  R(2)=0x20cu;
  R(7)=0x9u;
  R(3)=0x8c0b7adcu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0xffu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffffffffu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0bdf60u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(3)=0x8c012658u;
  { c->pr=0x8c01296cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c01296e:;
  R(0)=0x834u;
  ST32(R(14)+R(0),R(13));
  R(0)=R(13);
L8c012974:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01297c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffefcu;
  R(15)+=R(0);
  R(3)=0x8c019e40u;
  R(13)=R(4);
  ST32(R(15),R(5));
  { c->pr=0x8c012992u; R(4)=R(13); f_8c019e40(c); }
  R(14)=R(0);
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c012a20;
  R(0)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(int32_t)R(0)==92;
  if(c->t) goto L8c0129b0;
L8c0129a2:;
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c012a20;
  R(0)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  c->t=(int32_t)R(0)==92;
  if(!c->t) goto L8c0129a2;
L8c0129b0:;
  c->t=(int32_t)R(14)>0;
  if(!c->t) goto L8c012a20;
  R(6)=R(14);
  R(3)=0x8c0685b4u;
  R(12)=R(15);
  R(5)=R(13);
  R(12)+=0x4u;
  R(6)+=0x1u;
  { c->pr=0x8c0129c4u; R(4)=R(12); f_8c0685b4(c); }
  R(2)=R(14);
  R(2)+=0x1u;
  R(4)=R(14);
  R(2)+=R(12);
  R(3)=0x0u;
  R(5)=R(12);
  R(4)+=R(13);
  ST8(R(2),R(3));
  R(6)=LD32(R(15));
  { R(4)+=0x1u; goto L8c012a26; }
L8c012a20:;
  R(5)=0x8c0b7ae8u;
  R(4)=R(13);
  R(6)=LD32(R(15));
L8c012a26:;
  { c->pr=0x8c012a2au;  f_8c0128be(c); }
  R(1)=0x104u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c012a38(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+12,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+8);
  R(6)=LD32(R(15)+12);
  c->macl=R(2)*R(3);
  R(5)=c->macl;
  { c->pr=0x8c012a52u; R(4)=R(7); f_8c012b78(c); }
  R(3)=0x8c0679f4u;
  R(1)=R(0);
  { c->pr=0x8c012a5au; R(0)=LD32(R(15)); f_8c0679f4(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c012a62(SH4Ctx *c) {
  {  { f_8c012f2a(c); return; } }
}
void f_8c012a66(SH4Ctx *c) {
  R(7)=0x8c11f8c4u;
  R(6)=0x8u;
  R(5)=0x0u;
L8c012a6c:;
  R(3)=R(5);
  R(3)<<=2;
  R(3)<<=2;
  R(2)=R(5);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  R(3)<<=2;
  R(3)<<=2;
  R(3)+=R(7);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c012ac0;
  { R(0)=R(5); return; }
L8c012ac0:;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c012a6c;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c012acc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c012ad4u; R(14)=R(4); f_8c012a66(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c012ae2; }
  R(0)=0x8c123ac4u;
  R(2)=0x0u;
  R(4)<<=2;
  ST32(R(4)+R(0),R(2));
L8c012ae2:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c012aee;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c012aee:;
  { c->pr=0x8c012af2u;  f_8c01342a(c); }
  R(3)=0x8c0ce6d8u;
  R(0)=0x830u;
  { c->pr=0x8c012afau; R(4)=LD32(R(14)+R(0)); f_8c0ce6d8(c); }
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c012b02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(5);
  c->t=(int32_t)R(14)>=0;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(6));
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c012b1a; }
  R(3)=0x7ffu;
  R(14)+=R(3);
L8c012b1a:;
  R(13)=0x8c0ce968u;
  R(3)=0xfffffff5u;
  R(14)=sh4_shad(R(14),R(3));
L8c012b20:;
  R(4)=LD32(R(15)+4);
  R(5)=R(14);
  R(0)=0x830u;
  R(6)=LD32(R(15));
  { uint32_t tg=R(13); c->pr=0x8c012b2cu; R(4)=LD32(R(4)+R(0)); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c012b20;
  R(0)=R(4);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c012b60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0cec88u;
  R(0)=0x830u;
  ST32(R(15),R(4));
  { c->pr=0x8c012b6eu; R(4)=LD32(R(4)+R(0)); f_8c0cec88(c); }
  c->t=(int32_t)R(0)==1;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=c->t; return; }
}
void f_8c012b78(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=0x838u;
  R(14)=R(4);
  R(12)=R(6);
  R(10)=0x0u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffffcu;
  R(2)=LD32(R(14)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=c->t; R(9)=R(10); if(k) goto L8c012ba2; }
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c012ba6;
L8c012ba2:;
  { R(0)=0x0u; goto L8c012f16; }
L8c012ba6:;
  R(0)=0x834u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  R(4)=LD32(R(14)+R(0));
  R(4)-=R(3);
  c->t=(int32_t)R(4)>(int32_t)R(5);
  if(!c->t) goto L8c012be0;
  { R(13)=R(5); goto L8c012be2; }
L8c012be0:;
  R(13)=R(4);
L8c012be2:;
  R(0)=0x828u;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c012c64;
  R(0)=0x82cu;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffff8u;
  R(11)=LD32(R(14)+R(0));
  R(11)-=R(3);
  c->t=(int32_t)R(11)>=(int32_t)R(13);
  if(!c->t) goto L8c012c40;
  R(0)=0x82cu;
  R(6)=R(13);
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffff4u;
  R(5)=LD32(R(14)+R(0));
  R(5)+=R(3);
  { c->pr=0x8c012c08u; R(4)=R(12); f_8c013560(c); }
  R(0)=0x82cu;
  R(2)=LD32(R(14)+R(0));
  R(2)+=R(13);
  ST32(R(14)+R(0),R(2));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=R(13);
  ST32(R(14)+R(0),R(3));
  { R(0)=R(13); goto L8c012f16; }
L8c012c40:;
  R(0)=0x82cu;
  R(6)=R(11);
  R(3)=LD32(R(14)+R(0));
  R(0)+=0xfffffff4u;
  R(5)=LD32(R(14)+R(0));
  R(5)+=R(3);
  R(3)=0x8c0685b4u;
  { c->pr=0x8c012c52u; R(4)=R(12); f_8c0685b4(c); }
  R(0)=0x82cu;
  R(12)+=R(11);
  R(9)+=R(11);
  ST32(R(14)+R(0),R(10));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(13)-=R(11);
  R(3)+=R(11);
  ST32(R(14)+R(0),R(3));
L8c012c64:;
  R(2)=0x8c067940u;
  R(1)=R(13);
  R(0)=0x824u;
  { c->pr=0x8c012c6eu; R(0)=LD32(R(14)+R(0)); f_8c067940(c); }
  R(3)=0x1u;
  R(11)=0xffu;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  ST32(R(15),R(0));
  { uint32_t k=c->t; R(8)=0xffffffffu; if(k) goto L8c012c7e; }
  {  goto L8c012de8; }
L8c012c7e:;
  R(0)=R(12);
  R(0)&=0x1fu;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c012c8e; }
  R(2)=0x20u;
  R(2)-=R(0);
  ST32(R(15)+4,R(2));
L8c012c8e:;
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c012c98;
  {  goto L8c012d80; }
L8c012c98:;
  R(3)=0x8c067a9cu;
  R(1)=R(13);
  R(0)=0x824u;
  { c->pr=0x8c012ca2u; R(0)=LD32(R(14)+R(0)); f_8c067a9c(c); }
  R(3)=LD32(R(15)+4);
  R(4)=R(0);
  c->t=R(4)>=R(3);
  if(c->t) goto L8c012cb0;
  R(1)=LD32(R(15));
  R(1)+=0xffffffffu;
  ST32(R(15),R(1));
L8c012cb0:;
  R(0)=0x824u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(14)+R(0));
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  { c->pr=0x8c012cbeu; ST32(R(15)+8,R(3)); f_8c01342a(c); }
  R(6)=LD32(R(15)+4);
  R(0)=0x830u;
  R(6)+=R(12);
  R(3)=0x8c0ce802u;
  ST32(R(15)+12,R(6));
  R(5)=LD32(R(15));
  { c->pr=0x8c012cceu; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-23;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c012cde; }
  c->t=(int32_t)R(0)==-5;
  if(c->t) goto L8c012cde;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==-25;
  if(!c->t) goto L8c012ce2;
L8c012cde:;
  { c->pr=0x8c012ce2u;  f_8c012780(c); }
L8c012ce2:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c012d08;
  R(3)=0x2f6u;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c012d06u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c012d08:;
  R(3)=0x8c068674u;
  R(5)=LD32(R(15)+12);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c012d12u; R(4)=R(12); f_8c068674(c); }
  R(0)=0x834u;
  R(3)=LD32(R(15)+8);
  R(2)=LD32(R(14)+R(0));
  R(2)+=R(3);
  ST32(R(14)+R(0),R(2));
  R(0)=LD32(R(15)+8);
  R(9)+=R(0);
  R(12)+=R(0);
  R(13)-=R(0);
  R(0)=0x828u;
  {  goto L8c012de6; }
L8c012d80:;
  R(0)=0x824u;
  R(2)=LD32(R(15));
  R(3)=LD32(R(14)+R(0));
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  { c->pr=0x8c012d8eu; ST32(R(15)+4,R(3)); f_8c01342a(c); }
  R(0)=0x830u;
  R(6)=R(12);
  R(3)=0x8c0ce802u;
  R(5)=LD32(R(15));
  { c->pr=0x8c012d9au; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-23;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c012daa; }
  c->t=(int32_t)R(0)==-5;
  if(c->t) goto L8c012daa;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==-25;
  if(!c->t) goto L8c012dae;
L8c012daa:;
  { c->pr=0x8c012daeu;  f_8c012780(c); }
L8c012dae:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c012dd4;
  R(3)=0x318u;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c012dd2u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c012dd4:;
  R(0)=0x834u;
  R(4)=LD32(R(15)+4);
  R(3)=LD32(R(14)+R(0));
  R(9)+=R(4);
  R(3)+=R(4);
  ST32(R(14)+R(0),R(3));
  R(0)+=0xfffffff4u;
  R(13)-=R(4);
  R(12)+=R(4);
L8c012de6:;
  ST32(R(14)+R(0),R(8));
L8c012de8:;
  R(0)=0x824u;
  R(3)=LD32(R(14)+R(0));
  c->t=(int32_t)R(13)>(int32_t)R(3);
  if(!c->t) goto L8c012e6e;
L8c012df0:;
  { c->pr=0x8c012df4u;  f_8c01342a(c); }
  R(0)=0x820u;
  R(5)=0x1u;
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { c->pr=0x8c012e02u; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-23;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c012e12; }
  c->t=(int32_t)R(0)==-5;
  if(c->t) goto L8c012e12;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==-25;
  if(!c->t) goto L8c012e16;
L8c012e12:;
  { c->pr=0x8c012e16u;  f_8c012780(c); }
L8c012e16:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c012e3c;
  R(3)=0x33au;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c012e3au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c012e3c:;
  R(0)=0x824u;
  R(3)=0x8c0685b4u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0xfffffffcu;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c012e4au; R(4)=R(12); f_8c0685b4(c); }
  R(0)=0x834u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0xfffffff4u;
  ST32(R(14)+R(0),R(2));
  R(0)+=0xfffffffcu;
  R(4)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  R(3)=LD32(R(14)+R(0));
  R(13)-=R(4);
  R(3)+=R(4);
  ST32(R(14)+R(0),R(3));
  R(0)+=0xfffffff0u;
  R(3)=LD32(R(14)+R(0));
  R(2)=LD32(R(14)+R(0));
  c->t=(int32_t)R(13)>(int32_t)R(3);
  R(9)+=R(2);
  { uint32_t k=c->t; R(12)+=R(4); if(k) goto L8c012df0; }
L8c012e6e:;
  c->t=(int32_t)R(13)>0;
  if(!c->t) goto L8c012f10;
  { c->pr=0x8c012e76u;  f_8c01342a(c); }
  R(0)=0x820u;
  R(5)=0x1u;
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { c->pr=0x8c012e84u; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-23;
  { uint32_t k=c->t; ST32(R(15),R(0)); if(k) goto L8c012ec2; }
  c->t=(int32_t)R(0)==-5;
  if(c->t) goto L8c012ec2;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==-25;
  {  goto L8c012ec0; }
L8c012ec0:;
  if(!c->t) goto L8c012ec6;
L8c012ec2:;
  { c->pr=0x8c012ec6u;  f_8c012780(c); }
L8c012ec6:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c012eec;
  R(3)=0x354u;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c012eeau; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c012eec:;
  R(0)=0x820u;
  R(6)=R(13);
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c012ef8u; R(4)=R(12); f_8c0685b4(c); }
  R(0)=0x834u;
  R(2)=LD32(R(14)+R(0));
  R(0)+=0xfffffff4u;
  ST32(R(14)+R(0),R(2));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0x8u;
  R(3)=LD32(R(14)+R(0));
  R(3)+=R(13);
  ST32(R(14)+R(0),R(3));
  { R(9)+=R(13); goto L8c012f14; }
L8c012f10:;
  R(0)=0x82cu;
  ST32(R(14)+R(0),R(10));
L8c012f14:;
  R(0)=R(9);
L8c012f16:;
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
void f_8c012f2a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffff7e0u;
  R(15)+=R(0);
  R(13)=0xffu;
  c->t=(int32_t)R(5)>=0;
  R(3)=0x8c0bdf60u;
  R(14)=R(4);
  R(11)=0xffffffffu;
  R(12)=0x0u;
  { uint32_t k=c->t; R(10)=(int32_t)(int8_t)LD8(R(3)); if(k) goto L8c012f52; }
  {  goto L8c013120; }
L8c012f52:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c012fa0;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c012fa8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c012fac;
  {  goto L8c012fe0; }
L8c012fa0:;
  R(0)=0x834u;
  R(10)=LD32(R(14)+R(0));
  { R(10)+=R(5); goto L8c012ffe; }
L8c012fa8:;
  { R(10)=R(5); goto L8c012ffe; }
L8c012fac:;
  R(0)=0x838u;
  R(10)=LD32(R(14)+R(0));
  { R(10)-=R(5); goto L8c012ffe; }
L8c012fe0:;
  R(2)=0x38bu;
  R(5)=R(10);
  R(3)=0x8c0b7adcu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xbu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c012ffcu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c012ffe:;
  R(0)=0x824u;
  R(1)=R(10);
  R(3)=0x8c067940u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c01300au; R(0)=R(4); f_8c067940(c); }
  R(9)=R(0);
  R(0)=0x834u;
  R(2)=0x8c067940u;
  R(1)=LD32(R(14)+R(0));
  { c->pr=0x8c013016u; R(0)=R(4); f_8c067940(c); }
  c->t=R(9)==R(0);
  if(c->t) goto L8c013050;
  R(0)=0x828u;
  { c->pr=0x8c013020u; ST32(R(14)+R(0),R(11)); f_8c01342a(c); }
  R(0)=0x830u;
  R(6)=0x0u;
  R(3)=0x8c0ce75eu;
  R(5)=R(9);
  { c->pr=0x8c01302cu; R(4)=LD32(R(14)+R(0)); f_8c0ce75e(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c013050;
  R(3)=0x39cu;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xbu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c01304eu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c013050:;
  R(0)=0x828u;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0130a4;
  { c->pr=0x8c01305cu;  f_8c01342a(c); }
  R(0)=0x820u;
  R(5)=0x1u;
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { c->pr=0x8c01306au; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-23;
  { uint32_t k=c->t; R(8)=R(0); if(k) goto L8c01307c; }
  R(0)=R(8);
  c->t=(int32_t)R(0)==-5;
  if(c->t) goto L8c01307c;
  R(0)=R(8);
  c->t=(int32_t)R(0)==-25;
  if(!c->t) goto L8c013080;
L8c01307c:;
  { c->pr=0x8c013080u;  f_8c012780(c); }
L8c013080:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0130a4;
  R(3)=0x3abu;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xbu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c0130a2u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0130a4:;
  R(0)=0x824u;
  R(4)=R(15);
  R(5)=R(10);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  c->macl=R(9)*R(2);
  R(2)=c->macl;
  ST32(R(14)+R(0),R(2));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  c->macl=R(9)*R(3);
  R(3)=0xffffffe0u;
  R(4)&=R(3);
  R(4)+=0x20u;
  R(9)=c->macl;
  R(6)=R(4);
  ST32(R(14)+R(0),R(9));
  R(2)=LD32(R(14)+R(0));
  R(5)-=R(2);
  { c->pr=0x8c0130d4u; R(4)=R(14); f_8c012b78(c); }
  {  goto L8c01313e; }
L8c013120:;
  R(2)=0x3bau;
  R(5)=R(10);
  R(1)=0x8c0b7adcu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xbu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c01313cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c01313e:;
  R(1)=0x820u;
  R(0)=0x0u;
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
void f_8c012fa0(SH4Ctx *c) {
  R(0)=0x834u;
  R(10)=LD32(R(14)+R(0));
  { R(10)+=R(5); goto L8c012ffe; }
L8c012ffe:;
  R(0)=0x824u;
  R(1)=R(10);
  R(3)=0x8c067940u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c01300au; R(0)=R(4); f_8c067940(c); }
  R(9)=R(0);
  R(0)=0x834u;
  R(2)=0x8c067940u;
  R(1)=LD32(R(14)+R(0));
  { c->pr=0x8c013016u; R(0)=R(4); f_8c067940(c); }
  c->t=R(9)==R(0);
  if(c->t) goto L8c013050;
  R(0)=0x828u;
  { c->pr=0x8c013020u; ST32(R(14)+R(0),R(11)); f_8c01342a(c); }
  R(0)=0x830u;
  R(6)=0x0u;
  R(3)=0x8c0ce75eu;
  R(5)=R(9);
  { c->pr=0x8c01302cu; R(4)=LD32(R(14)+R(0)); f_8c0ce75e(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c013050;
  R(3)=0x39cu;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xbu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c01304eu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c013050:;
  R(0)=0x828u;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0130a4;
  { c->pr=0x8c01305cu;  f_8c01342a(c); }
  R(0)=0x820u;
  R(5)=0x1u;
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { c->pr=0x8c01306au; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-23;
  { uint32_t k=c->t; R(8)=R(0); if(k) goto L8c01307c; }
  R(0)=R(8);
  c->t=(int32_t)R(0)==-5;
  if(c->t) goto L8c01307c;
  R(0)=R(8);
  c->t=(int32_t)R(0)==-25;
  if(!c->t) goto L8c013080;
L8c01307c:;
  { c->pr=0x8c013080u;  f_8c012780(c); }
L8c013080:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0130a4;
  R(3)=0x3abu;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xbu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c0130a2u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0130a4:;
  R(0)=0x824u;
  R(4)=R(15);
  R(5)=R(10);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  c->macl=R(9)*R(2);
  R(2)=c->macl;
  ST32(R(14)+R(0),R(2));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  c->macl=R(9)*R(3);
  R(3)=0xffffffe0u;
  R(4)&=R(3);
  R(4)+=0x20u;
  R(9)=c->macl;
  R(6)=R(4);
  ST32(R(14)+R(0),R(9));
  R(2)=LD32(R(14)+R(0));
  R(5)-=R(2);
  { c->pr=0x8c0130d4u; R(4)=R(14); f_8c012b78(c); }
  {  goto L8c01313e; }
L8c01313e:;
  R(1)=0x820u;
  R(0)=0x0u;
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
void f_8c012fe0(SH4Ctx *c) {
  R(2)=0x38bu;
  R(5)=R(10);
  R(3)=0x8c0b7adcu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xbu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c012ffcu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
  R(0)=0x824u;
  R(1)=R(10);
  R(3)=0x8c067940u;
  R(4)=LD32(R(14)+R(0));
  { c->pr=0x8c01300au; R(0)=R(4); f_8c067940(c); }
  R(9)=R(0);
  R(0)=0x834u;
  R(2)=0x8c067940u;
  R(1)=LD32(R(14)+R(0));
  { c->pr=0x8c013016u; R(0)=R(4); f_8c067940(c); }
  c->t=R(9)==R(0);
  if(c->t) goto L8c013050;
  R(0)=0x828u;
  { c->pr=0x8c013020u; ST32(R(14)+R(0),R(11)); f_8c01342a(c); }
  R(0)=0x830u;
  R(6)=0x0u;
  R(3)=0x8c0ce75eu;
  R(5)=R(9);
  { c->pr=0x8c01302cu; R(4)=LD32(R(14)+R(0)); f_8c0ce75e(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c013050;
  R(3)=0x39cu;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xbu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c01304eu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c013050:;
  R(0)=0x828u;
  R(0)=LD32(R(14)+R(0));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0130a4;
  { c->pr=0x8c01305cu;  f_8c01342a(c); }
  R(0)=0x820u;
  R(5)=0x1u;
  R(3)=0x8c0ce802u;
  R(6)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  { c->pr=0x8c01306au; R(4)=LD32(R(14)+R(0)); f_8c0ce802(c); }
  c->t=(int32_t)R(0)==-23;
  { uint32_t k=c->t; R(8)=R(0); if(k) goto L8c01307c; }
  R(0)=R(8);
  c->t=(int32_t)R(0)==-5;
  if(c->t) goto L8c01307c;
  R(0)=R(8);
  c->t=(int32_t)R(0)==-25;
  if(!c->t) goto L8c013080;
L8c01307c:;
  { c->pr=0x8c013080u;  f_8c012780(c); }
L8c013080:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0130a4;
  R(3)=0x3abu;
  R(6)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xbu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0bdf60u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  { c->pr=0x8c0130a2u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c0130a4:;
  R(0)=0x824u;
  R(4)=R(15);
  R(5)=R(10);
  R(2)=LD32(R(14)+R(0));
  R(0)+=0x4u;
  c->macl=R(9)*R(2);
  R(2)=c->macl;
  ST32(R(14)+R(0),R(2));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(12));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(14)+R(0));
  R(0)+=0x10u;
  c->macl=R(9)*R(3);
  R(3)=0xffffffe0u;
  R(4)&=R(3);
  R(4)+=0x20u;
  R(9)=c->macl;
  R(6)=R(4);
  ST32(R(14)+R(0),R(9));
  R(2)=LD32(R(14)+R(0));
  R(5)-=R(2);
  { c->pr=0x8c0130d4u; R(4)=R(14); f_8c012b78(c); }
  {  goto L8c01313e; }
L8c01313e:;
  R(1)=0x820u;
  R(0)=0x0u;
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
void f_8c013120(SH4Ctx *c) {
  R(2)=0x3bau;
  R(5)=R(10);
  R(1)=0x8c0b7adcu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0xbu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c012658u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c01313cu; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
  R(1)=0x820u;
  R(0)=0x0u;
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
void f_8c013156(SH4Ctx *c) {
  R(0)=0x834u;
  { R(0)=LD32(R(4)+R(0)); return; }
}
void f_8c01315c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c0bb6e8u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c065166u;
  R(12)+=0x20u;
  R(14)=R(4);
  c->t=R(14)>=R(12);
  if(c->t) goto L8c01317e;
L8c013172:;
  { uint32_t tg=R(13); c->pr=0x8c013176u; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c01317au; {uint32_t v=LD32(R(14));R(14)+=4;R(4)=v;} sh4_call(c,tg); }
  c->t=R(14)>=R(12);
  if(!c->t) goto L8c013172;
L8c01317e:;
  R(3)=0x8c123b08u;
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==9;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c013200; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c013200;
  R(3)=0x8c010fa0u;
  { c->pr=0x8c013196u;  f_8c010fa0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0ccc2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0ccc2c(c); return; } }
L8c013200:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c044fc0u;
  R(4)=0x2u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044fc0(c); return; } }
}
void f_8c013240(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cede4u;
  { c->pr=0x8c01324au;  f_8c0cede4(c); }
  R(14)=R(0);
  R(0)+=0x25u;
  R(1)=0x26u;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c0132bc;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c013264u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c013260u+R(0));  switch(tg){ case 0x8c0132b0u: goto L8c0132b0; case 0x8c0132b4u: goto L8c0132b4; case 0x8c0132b8u: goto L8c0132b8; default: sh4_bad_jump(c,0x8c01325cu,tg); return; } }
L8c0132b0:;
  {  goto L8c0132bc; }
L8c0132b4:;
  {  goto L8c0132bc; }
L8c0132b8:;
  { c->pr=0x8c0132bcu;  f_8c01315c(c); }
L8c0132bc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0132c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0cec88u;
  { c->pr=0x8c0132d0u; ST32(R(15),R(4)); f_8c0cec88(c); }
  c->t=(int32_t)R(0)==3;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c0132ee; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0132ee;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0132ee;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0132ee;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0132ee;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c0132ee;
  { c->pr=0x8c0132eeu; R(4)=LD32(R(15)); f_8c013240(c); }
L8c0132ee:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0132f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c06289cu;
  { c->pr=0x8c013306u; R(4)=0x0u; f_8c06289c(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01330e;
  {  goto L8c013420; }
L8c01330e:;
  R(12)=0x8c0bdfe4u;
  R(13)=0x8c123aecu;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c013320;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0133a0;
  {  goto L8c013420; }
L8c013320:;
  R(4)=0x8c0bdfe8u;
  R(3)=LD32(R(4));
  c->t=(int32_t)R(3)>0;
  R(3)+=0xffffffffu;
  { uint32_t k=!c->t; ST32(R(4),R(3)); if(k) goto L8c013330; }
  {  goto L8c013420; }
L8c013330:;
  R(3)=0xau;
  ST32(R(4),R(3));
  R(2)=LD32(R(13));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c013374;
  R(2)=0x8c0cf016u;
  { c->pr=0x8c013340u;  f_8c0cf016(c); }
  R(3)=0x8c0cec88u;
  R(14)=R(0);
  { c->pr=0x8c013348u; R(4)=R(0); f_8c0cec88(c); }
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c013366; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c013366;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c013374;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c013370;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c013370;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c013370;
  {  goto L8c013374; }
L8c013366:;
  R(2)=0x8c0cf088u;
  { c->pr=0x8c01336cu;  f_8c0cf088(c); }
  {  goto L8c013374; }
L8c013370:;
  { c->pr=0x8c013374u; R(4)=R(14); f_8c013240(c); }
L8c013374:;
  R(3)=0x2u;
  { ST32(R(12),R(3)); goto L8c013420; }
L8c0133a0:;
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0133de;
  R(2)=0x8c0cebdcu;
  R(14)=0x8c0bdfdcu;
  { c->pr=0x8c0133aeu; R(4)=LD32(R(14)); f_8c0cebdc(c); }
  R(3)=0x8c123ae8u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; ST32(R(3),R(0)); if(k) goto L8c0133c6; }
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0133c6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0133ce;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0133d6;
  {  goto L8c01341c; }
L8c0133c6:;
  { c->pr=0x8c0133cau; R(4)=LD32(R(14)); f_8c0132c4(c); }
  {  goto L8c01341c; }
L8c0133ce:;
  R(4)=0x0u;
  ST32(R(13),R(4));
  { ST32(R(14),R(4)); goto L8c013420; }
L8c0133d6:;
  { c->pr=0x8c0133dau;  f_8c01315c(c); }
  {  goto L8c01341c; }
L8c0133de:;
  R(3)=0x8c0cf016u;
  { c->pr=0x8c0133e4u;  f_8c0cf016(c); }
  R(2)=0x8c0cec88u;
  R(14)=R(0);
  { c->pr=0x8c0133ecu; R(4)=R(0); f_8c0cec88(c); }
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c013420; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c013404;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c013240(c); return; } }
L8c013404:;
  R(2)=0x8c0cf070u;
  R(14)=0x8c123af4u;
  { c->pr=0x8c01340cu;  f_8c0cf070(c); }
  c->t=(int32_t)R(0)==6;
  { uint32_t k=c->t; ST32(R(14),R(0)); if(k) goto L8c013418; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c01341c;
L8c013418:;
  { c->pr=0x8c01341cu;  f_8c01315c(c); }
L8c01341c:;
  R(2)=0x1u;
  ST32(R(12),R(2));
L8c013420:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0133a0(SH4Ctx *c) {
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0133de;
  R(2)=0x8c0cebdcu;
  R(14)=0x8c0bdfdcu;
  { c->pr=0x8c0133aeu; R(4)=LD32(R(14)); f_8c0cebdc(c); }
  R(3)=0x8c123ae8u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; ST32(R(3),R(0)); if(k) goto L8c0133c6; }
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0133c6;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0133ce;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0133d6;
  {  goto L8c01341c; }
L8c0133c6:;
  { c->pr=0x8c0133cau; R(4)=LD32(R(14)); f_8c0132c4(c); }
  {  goto L8c01341c; }
L8c0133ce:;
  R(4)=0x0u;
  ST32(R(13),R(4));
  { ST32(R(14),R(4)); goto L8c013420; }
L8c0133d6:;
  { c->pr=0x8c0133dau;  f_8c01315c(c); }
  {  goto L8c01341c; }
L8c0133de:;
  R(3)=0x8c0cf016u;
  { c->pr=0x8c0133e4u;  f_8c0cf016(c); }
  R(2)=0x8c0cec88u;
  R(14)=R(0);
  { c->pr=0x8c0133ecu; R(4)=R(0); f_8c0cec88(c); }
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c013420; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c013404;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c013240(c); return; } }
L8c013404:;
  R(2)=0x8c0cf070u;
  R(14)=0x8c123af4u;
  { c->pr=0x8c01340cu;  f_8c0cf070(c); }
  c->t=(int32_t)R(0)==6;
  { uint32_t k=c->t; ST32(R(14),R(0)); if(k) goto L8c013418; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c01341c;
L8c013418:;
  { c->pr=0x8c01341cu;  f_8c01315c(c); }
L8c01341c:;
  R(2)=0x1u;
  ST32(R(12),R(2));
L8c013420:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01342a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0cf070u;
  { c->pr=0x8c013432u;  f_8c0cf070(c); }
  c->t=(int32_t)R(0)==6;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c01343e; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0134c0;
L8c01343e:;
  R(2)=0x8c123b08u;
  R(4)=(int32_t)(int8_t)LD8(R(2));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==9;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c01345c; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c01345c;
  R(3)=0x8c010fa0u;
  { c->pr=0x8c013456u;  f_8c010fa0(c); }
  R(2)=0x8c0ccc2cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0ccc2c(c); return; } }
L8c01345c:;
  R(2)=0x8c044fc0u;
  R(4)=0x2u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c044fc0(c); return; } }
L8c0134c0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0134c6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x8c0ce968u;
  R(12)=R(4);
  R(14)=0x8c123af0u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
L8c0134da:;
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+4);
  { uint32_t tg=R(13); c->pr=0x8c0134e2u; R(4)=R(12); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-13;
  ST32(R(14),R(0));
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0134da; }
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c013514;
  R(3)=0x4e8u;
  R(1)=0x0u;
  R(2)=0x8c0b7adcu;
  R(7)=0xau;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(1);
  R(3)=0xffu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0bdf60u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c013512u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c013514:;
  R(1)=0x8c0bdfdcu;
  R(3)=0x1u;
  R(2)=0x8c123aecu;
  ST32(R(2),R(3));
  ST32(R(1),R(12));
  R(0)=LD32(R(14));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01352c(SH4Ctx *c) {
  R(3)=0x8c123aecu;
  R(4)=0x0u;
  R(2)=0x8c0bdfdcu;
  ST32(R(3),R(4));
  { ST32(R(2),R(4)); return; }
}
void f_8c013560(SH4Ctx *c) {
  c->t=(int32_t)R(6)>0;
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c013572; }
L8c013566:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(2)=(uint32_t)v;}
  R(7)+=0x1u;
  c->t=(int32_t)R(7)>=(int32_t)R(6);
  ST8(R(4),R(2));
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c013566; }
L8c013572:;
  {  return; }
}
void f_8c013580(SH4Ctx *c) {
  {  return; }
}
void f_8c013584(SH4Ctx *c) {
  R(3)=0x8c123b08u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c013592; }
  R(4)=0x1u;
L8c013592:;
  { R(0)=R(4); return; }
}
void f_8c013596(SH4Ctx *c) {
  R(3)=0x8c123b08u;
  R(5)=0x0u;
  R(4)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0135b0; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0135b0;
  R(0)=R(4);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0135b2;
L8c0135b0:;
  R(5)=0x1u;
L8c0135b2:;
  { R(0)=R(5); return; }
}
void f_8c0135b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c123b08u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(11)=0x8c04c300u;
  R(0)=R(0)&0xFF;
  R(12)=0x8c044fc0u;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c013620;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c013630;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0136a4;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0135de;
  {  goto L8c013740; }
L8c0135de:;
  {  goto L8c013752; }
L8c013620:;
  R(2)=0x8c013b52u;
  { c->pr=0x8c013626u;  f_8c013b52(c); }
  R(1)=0x8c045286u;
  { c->pr=0x8c01362cu;  f_8c045286(c); }
  { uint32_t tg=R(12); c->pr=0x8c013630u; R(4)=0x3u; sh4_call(c,tg); }
L8c013630:;
  R(3)=0x8c045700u;
  { c->pr=0x8c013636u;  f_8c045700(c); }
  R(2)=0x8c04e66eu;
  { c->pr=0x8c01363cu;  f_8c04e66e(c); }
  R(14)=0x8c0bf244u;
  R(5)=0x1u;
  R(13)=0x8c05b4bcu;
  { c->pr=0x8c013646u; R(4)=R(14); f_8c05b4bc(c); }
  R(4)=0x600u;
  R(5)=0x2u;
  { uint32_t tg=R(13); c->pr=0x8c01364eu; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=0xc00u;
  R(5)=0x3u;
  { uint32_t tg=R(13); c->pr=0x8c013656u; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=0x1200u;
  R(5)=0x4u;
  { uint32_t tg=R(13); c->pr=0x8c01365eu; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=0x1800u;
  R(5)=0x5u;
  { uint32_t tg=R(13); c->pr=0x8c013666u; R(4)+=R(14); sh4_call(c,tg); }
  R(4)=0x1e00u;
  R(5)=0x6u;
  { uint32_t tg=R(13); c->pr=0x8c01366eu; R(4)+=R(14); sh4_call(c,tg); }
  R(3)=0x8c05b4d4u;
  R(4)=0x8c0c3444u;
  { c->pr=0x8c013676u;  f_8c05b4d4(c); }
  R(2)=0x8c05b2c0u;
  { c->pr=0x8c01367cu;  f_8c05b2c0(c); }
  R(0)=0x8c0be03cu;
  R(1)=0x8c04b7e0u;
  R(3)=0x8c04b4e0u;
  R(2)=0x8c0be038u;
  ST32(R(2),R(3));
  ST32(R(0),R(1));
  { uint32_t tg=R(12); c->pr=0x8c01368cu; R(4)=0x9u; sh4_call(c,tg); }
  { uint32_t tg=R(11); c->pr=0x8c013690u;  sh4_call(c,tg); }
  R(3)=0x8c045286u;
  { c->pr=0x8c013696u;  f_8c045286(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c04755au;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04755a(c); return; } }
L8c0136a4:;
  R(2)=0x8c045700u;
  { c->pr=0x8c0136aau;  f_8c045700(c); }
  R(2)=0x8c0be038u;
  R(3)=0x8c04b4e0u;
  R(0)=0x8c0be03cu;
  ST32(R(2),R(3));
  R(3)=0x8c0148e0u;
  R(1)=0x8c04b7e0u;
  { c->pr=0x8c0136bau; ST32(R(0),R(1)); f_8c0148e0(c); }
  { uint32_t tg=R(12); c->pr=0x8c0136beu; R(4)=0x9u; sh4_call(c,tg); }
  { uint32_t tg=R(11); c->pr=0x8c0136c2u;  sh4_call(c,tg); }
  {  goto L8c013784; }
L8c013740:;
  R(1)=0x8c04e780u;
  { c->pr=0x8c013746u;  f_8c04e780(c); }
  { uint32_t tg=R(11); c->pr=0x8c01374au;  sh4_call(c,tg); }
  { uint32_t tg=R(12); c->pr=0x8c01374eu; R(4)=0x9u; sh4_call(c,tg); }
  {  goto L8c013784; }
L8c013752:;
  R(12)=0xf9u;
  R(14)=0x8c0b7c54u;
  R(13)=R(12);
  R(2)=0x8c0125ccu;
  R(5)=R(14);
  R(13)+=0x6u;
  R(6)=R(12);
  { c->pr=0x8c013764u; R(4)=0x0u; f_8c0125cc(c); }
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  R(1)=0x8c0c3fa8u;
  R(2)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x11u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(3);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x8c012658u;
  { c->pr=0x8c013782u; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
L8c013784:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c013790(SH4Ctx *c) {
  R(3)=0x8c123b08u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0137ae;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c013800;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c013836;
  {  goto L8c01384a; }
L8c0137ae:;
  R(2)=0x8c014c20u;
  { c->pr=0x8c0137b4u;  f_8c014c20(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(1)=0x8c04e640u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c04e640(c); return; } }
L8c013800:;
  R(4)=0x8c0c603au;
  R(1)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c013812;
  R(2)=0x8c04cb28u;
  { c->pr=0x8c01380eu;  f_8c04cb28(c); }
  {  goto L8c013816; }
L8c013812:;
  R(2)=0x1u;
  ST8(R(4),R(2));
L8c013816:;
  R(3)=0x8c014c20u;
  { c->pr=0x8c01381cu;  f_8c014c20(c); }
  R(1)=0x8c045280u;
  { c->pr=0x8c013822u;  f_8c045280(c); }
  R(3)=0x8c045196u;
  { c->pr=0x8c013828u; R(4)=R(0); f_8c045196(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c044fc0u;
  R(4)=0x5u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044fc0(c); return; } }
L8c013836:;
  R(2)=0x8c04e8a0u;
  { c->pr=0x8c01383cu;  f_8c04e8a0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c044fc0u;
  R(4)=0x7u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c044fc0(c); return; } }
L8c01384a:;
  R(12)=0x139u;
  R(14)=0x8c0b7c54u;
  R(13)=R(12);
  R(1)=0x8c0125ccu;
  R(5)=R(14);
  R(13)+=0xffffffc6u;
  R(6)=R(12);
  { c->pr=0x8c01385cu; R(4)=0x0u; f_8c0125cc(c); }
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  R(1)=0x8c0c3fa8u;
  R(2)=0xffffffffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x12u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(3);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(1));
  R(1)=0x8c012658u;
  { c->pr=0x8c01387au; R(4)=0x30u; f_8c012658(c); }
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0138e0(SH4Ctx *c) {
  R(4)=0x8c0c3e44u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c013924;
  R(13)=0x8c05b4f0u;
  R(3)=0x0u;
  R(14)=0xcu;
  ST32(R(4),R(3));
L8c0138f6:;
  { uint32_t tg=R(13); c->pr=0x8c0138fau;  sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c0138feu;  sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c013902u;  sh4_call(c,tg); }
  R(14)+=0xfffffffdu;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0138f6;
  R(3)=0x8c05c4bau;
  { c->pr=0x8c01390eu;  f_8c05c4ba(c); }
  R(2)=0x8c04d91au;
  { c->pr=0x8c013914u; R(4)=0x1u; f_8c04d91a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c013924;
  R(2)=0x8c045f2cu;
  { c->pr=0x8c01391eu;  f_8c045f2c(c); }
  R(2)=0x8c0c61a8u;
  R(3)=0x2u;
  ST8(R(2),R(3));
L8c013924:;
  R(2)=0x8c0faa84u;
  R(0)=0xd4u;
  R(3)=(int32_t)(int16_t)LD16(R(2));
  R(14)=0x8c123b08u;
  ST16(R(14)+R(0),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c01393a; }
  R(4)=0x1u;
L8c01393a:;
  R(5)=R(4)&0xFF;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c013964;
  R(3)=0x8c0be038u;
  R(2)=LD32(R(3));
  { uint32_t tg=R(2); c->pr=0x8c013948u;  sh4_call(c,tg); }
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c013964;
  R(3)=0x8c0be03cu;
  R(2)=LD32(R(3));
  { uint32_t tg=R(2); c->pr=0x8c013958u;  sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x8c0be030u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(1)=LD32(R(0));
  { uint32_t tg=R(1); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c013964:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0139c0(SH4Ctx *c) {
  R(3)=0x8c0633a0u;
  {  { f_8c0633a0(c); return; } }
}
void f_8c0139c6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff70u;
  R(15)+=R(0);
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x90u;
  { c->pr=0x8c0139d6u; R(4)=R(15); f_8c0686b8(c); }
  R(2)=0x90u;
  R(0)=0x58u;
  R(3)=0x0u;
  ST32(R(15),R(2));
  R(2)=0x4u;
  ST32(R(15)+8,R(3));
  R(4)=0x1u;
  ST32(R(15)+4,R(4));
  ST32(R(15)+20,R(3));
  ST32(R(15)+24,R(4));
  ST32(R(15)+12,R(3));
  ST32(R(15)+28,R(2));
  R(2)=R(3);
  ST32(R(15)+32,R(3));
  ST32(R(15)+36,R(2));
  ST32(R(15)+40,R(3));
  ST32(R(15)+44,R(2));
  ST32(R(15)+R(0),R(3));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(2));
  R(0)=0x60u;
  R(3)=0x2u;
  ST32(R(15)+R(0),R(3));
  R(2)=0x0u;
  R(0)=0x64u;
  R(3)=R(2);
  ST32(R(15)+R(0),R(2));
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(3));
  R(0)=0x78u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x7cu;
  ST32(R(15)+R(0),R(3));
  R(3)=0xau;
  R(0)=0x80u;
  R(2)=0xbu;
  ST32(R(15)+R(0),R(4));
  R(0)=0x50u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x54u;
  ST32(R(15)+R(0),R(2));
  R(3)=0x3u;
  R(0)=0x84u;
  R(2)=0x0u;
  R(4)=0x8c1247f0u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x68u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x70u;
  R(3)=R(2);
  ST32(R(15)+R(0),R(3));
  R(0)=0x8cu;
  R(3)=0x8c0d6980u;
  ST32(R(15)+R(0),R(2));
  { c->pr=0x8c013a46u; R(5)=R(15); f_8c0d6980(c); }
  R(4)=0x8c124830u;
  R(2)=0x3u;
  R(3)=0x8c0d6980u;
  ST32(R(15)+4,R(2));
  { c->pr=0x8c013a52u; R(5)=R(15); f_8c0d6980(c); }
  R(1)=0x90u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c013a80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(12)=R(4);
  c->t=R(12)&1;R(12)=(uint32_t)((int32_t)R(12)>>1);
  c->t=R(12)&1;R(12)=(uint32_t)((int32_t)R(12)>>1);
  ST32(R(15)+8,R(5));
  R(2)=R(12);
  ST32(R(15)+12,R(6));
  R(6)=R(4);
  R(2)<<=2;
  R(6)-=R(2);
  R(0)=R(6);
  c->t=(int32_t)R(0)==0;
  R(5)=0x1u;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c013ab6; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c013aba;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c013abe;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c013ac4;
  {  goto L8c013ac8; }
L8c013ab6:;
  { R(13)=R(4); goto L8c013ac0; }
L8c013aba:;
  { R(13)=R(4); goto L8c013ac6; }
L8c013abe:;
  R(13)=R(5);
L8c013ac0:;
  { R(14)=R(4); goto L8c013ac8; }
L8c013ac4:;
  R(13)=R(5);
L8c013ac6:;
  R(14)=R(5);
L8c013ac8:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c013ad8;
  R(2)=LD32(R(15)+8);
  ST32(R(2),R(13));
  R(3)=LD32(R(15)+12);
  ST32(R(3),R(14));
  {  goto L8c013af6; }
L8c013ad8:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c013ae2u; R(4)=R(12); f_8c013a80(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+8);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(13);
  ST32(R(3),R(2));
  R(2)=LD32(R(15)+4);
  R(3)=LD32(R(15)+12);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(14);
  ST32(R(3),R(2));
L8c013af6:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c013b02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(12)=R(6);
  ST32(R(15)+8,R(4));
  c->macl=R(12)*R(7);
  ST32(R(15)+12,R(5));
  R(13)=c->macl;
  c->t=(int32_t)R(13)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c013b46; }
L8c013b1c:;
  R(6)=R(15);
  R(5)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c013b26u; R(4)=R(14); f_8c013a80(c); }
  R(2)=LD32(R(15)+4);
  R(3)=R(14);
  R(0)=LD32(R(15)+8);
  c->t=R(3)>>31;R(3)<<=1;
  c->macl=R(12)*R(2);
  R(1)=LD32(R(15));
  R(3)+=R(0);
  R(0)=LD32(R(15)+12);
  R(14)+=0x1u;
  R(2)=c->macl;
  R(2)+=R(1);
  c->t=R(2)>>31;R(2)<<=1;
  c->t=(int32_t)R(14)>=(int32_t)R(13);
  R(2)=(int32_t)(int16_t)LD16(R(2)+R(0));
  ST16(R(3),R(2));
  if(!c->t) goto L8c013b1c;
L8c013b46:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c013b52(SH4Ctx *c) {
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
  R(0)=0xffffd34cu;
  R(15)+=R(0);
  R(3)=R(15);
  R(1)=0x8c0faa84u;
  R(3)+=0x10u;
  R(0)=0xd4u;
  ST32(R(15)+4,R(3));
  R(14)=0x0u;
  R(13)=0x8c123b08u;
  R(2)=0x8c2cbd9cu;
  ST32(R(2),R(14));
  R(3)=(int32_t)(int16_t)LD16(R(1));
  ST16(R(13)+R(0),R(3));
  R(0)=0x5bu;
  R(3)=0xffu;
  ST8(R(13)+R(0),R(14));
  R(0)=0x5cu;
  ST8(R(13)+R(0),R(3));
  R(0)=0x1c4u;
  ST32(R(13)+R(0),R(14));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(14));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(14));
  R(0)+=0x1cu;
  ST32(R(13)+R(0),R(14));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(14));
  R(0)+=0xfffffff0u;
  ST32(R(13)+R(0),R(14));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(14));
  R(0)+=0x4u;
  ST32(R(13)+R(0),R(14));
  R(0)=0xc30u;
  R(3)=0x8c0427c0u;
  ST8(R(13)+R(0),R(14));
  R(0)+=0x1u;
  ST8(R(13)+R(0),R(14));
  R(0)+=0x1u;
  { c->pr=0x8c013bbcu; ST8(R(13)+R(0),R(14)); f_8c0427c0(c); }
  R(2)=0x8c047480u;
  { c->pr=0x8c013bc2u;  f_8c047480(c); }
  R(3)=0x8c04ea20u;
  { c->pr=0x8c013bc8u;  f_8c04ea20(c); }
  R(2)=0x8c0382dcu;
  { c->pr=0x8c013bceu;  f_8c0382dc(c); }
  R(3)=0x8c0360f6u;
  { c->pr=0x8c013bd4u;  f_8c0360f6(c); }
  R(2)=0x8c064f20u;
  { c->pr=0x8c013bdau;  f_8c064f20(c); }
  R(3)=0x8c019e00u;
  { c->pr=0x8c013be0u;  f_8c019e00(c); }
  R(3)=0x8c05b4bcu;
  R(5)=0x1u;
  R(4)=0x8c0c1644u;
  { c->pr=0x8c013beau; ST32(R(15),R(4)); f_8c05b4bc(c); }
  R(3)=0x8c05b4d4u;
  { c->pr=0x8c013bf0u; R(4)=LD32(R(15)); f_8c05b4d4(c); }
  R(2)=0x8c05b2c0u;
  { c->pr=0x8c013bf6u;  f_8c05b2c0(c); }
  R(11)=0x8c05b2c8u;
  R(12)=0x7u;
L8c013bfa:;
  R(6)=0xffffffffu;
  R(5)=R(6);
  { uint32_t tg=R(11); c->pr=0x8c013c02u; R(4)=R(12); sh4_call(c,tg); }
  R(6)=0xffffffffu;
  R(5)=R(6);
  R(12)+=0xffffffffu;
  { uint32_t tg=R(11); c->pr=0x8c013c0cu; R(4)=R(12); sh4_call(c,tg); }
  R(12)+=0xffffffffu;
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c013bfa;
  R(2)=0x8c065150u;
  { c->pr=0x8c013c18u; R(4)=0x1u; f_8c065150(c); }
  R(3)=0x8c05b25cu;
  { c->pr=0x8c013c1eu;  f_8c05b25c(c); }
  R(2)=0x8c0474aau;
  { c->pr=0x8c013c24u;  f_8c0474aa(c); }
  R(3)=0x8c045754u;
  { c->pr=0x8c013c2au;  f_8c045754(c); }
  R(2)=0x8c043bd8u;
  { c->pr=0x8c013c30u;  f_8c043bd8(c); }
  R(3)=0x8c0635c0u;
  R(4)=0x8c0b8cf0u;
  { c->pr=0x8c013c38u;  f_8c0635c0(c); }
  R(2)=0x8c017ae8u;
  R(4)=0x2cb0u;
  { c->pr=0x8c013c40u; R(4)+=R(15); f_8c017ae8(c); }
  R(4)=0x900u;
  R(7)=0x0u;
  R(3)=0x8c0d0160u;
  R(5)=0x8c0139c0u;
  { c->pr=0x8c013c4cu; R(6)=0x70u; f_8c0d0160(c); }
  R(4)=0x8c0b8d08u;
  R(12)=0x8c0635d6u;
  R(2)=0x8c0c42a8u;
  { c->pr=0x8c013c56u; ST32(R(2),R(0)); f_8c0635d6(c); }
  R(4)=0x8c0b8d1cu;
  { uint32_t tg=R(12); c->pr=0x8c013c5cu;  sh4_call(c,tg); }
  R(0)=0xc34u;
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c013d2e;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c013d34;
  c->t=(int32_t)R(0)==2;
  {  goto L8c013d20; }
L8c013d20:;
  if(c->t) goto L8c013d3a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c013d40;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c013d80;
  {  goto L8c013d86; }
L8c013d2e:;
  R(4)=0x8c0b8d30u;
  {  goto L8c013d82; }
L8c013d34:;
  R(4)=0x8c0b8d4cu;
  {  goto L8c013d82; }
L8c013d3a:;
  R(4)=0x8c0b8d68u;
  {  goto L8c013d82; }
L8c013d40:;
  R(4)=0x8c0b8d84u;
  {  goto L8c013d82; }
L8c013d80:;
  R(4)=0x8c0b8da0u;
L8c013d82:;
  { uint32_t tg=R(12); c->pr=0x8c013d86u;  sh4_call(c,tg); }
L8c013d86:;
  R(2)=0x8c017bdcu;
  { c->pr=0x8c013d8cu; R(4)=0x0u; f_8c017bdc(c); }
  R(3)=0x8c04f540u;
  { c->pr=0x8c013d92u;  f_8c04f540(c); }
  R(2)=0x8c050272u;
  { c->pr=0x8c013d98u;  f_8c050272(c); }
  R(3)=0x8c052be0u;
  { c->pr=0x8c013d9eu;  f_8c052be0(c); }
  R(2)=0x8c043b4cu;
  { c->pr=0x8c013da4u;  f_8c043b4c(c); }
  R(2)=0x8c011650u;
  R(9)=0x1u;
  R(3)=0x8c0c429cu;
  { c->pr=0x8c013daeu; ST32(R(3),R(9)); f_8c011650(c); }
  R(1)=0x8c0386e0u;
  { c->pr=0x8c013db4u;  f_8c0386e0(c); }
  R(4)=0x8c0b8dbcu;
  R(12)=0x8c03a782u;
  { c->pr=0x8c013dbcu; R(5)=R(9); f_8c03a782(c); }
  R(10)=0x8c0d115eu;
  { c->pr=0x8c013dc2u;  f_8c0d115e(c); }
  R(3)=0x8c03af20u;
  { c->pr=0x8c013dc8u; R(8)=R(0); f_8c03af20(c); }
  R(4)=0x2370u;
  R(5)=R(15);
  R(2)=0x8c03b128u;
  R(5)+=0xcu;
  { c->pr=0x8c013dd4u; R(4)+=R(15); f_8c03b128(c); }
L8c013dd4:;
  R(3)=0x8c03b6a0u;
  R(4)=0x2370u;
  { c->pr=0x8c013ddcu; R(4)+=R(15); f_8c03b6a0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c013dd4;
  R(3)=0x8c03b1e0u;
  R(4)=0x2370u;
  { c->pr=0x8c013de8u; R(4)+=R(15); f_8c03b1e0(c); }
L8c013de8:;
  { uint32_t tg=R(10); c->pr=0x8c013decu;  sh4_call(c,tg); }
  R(3)=0x8c0d1168u;
  R(5)=R(0);
  { c->pr=0x8c013df4u; R(4)=R(8); f_8c0d1168(c); }
  R(2)=0x8c0d116eu;
  { c->pr=0x8c013dfau; R(4)=R(0); f_8c0d116e(c); }
  R(3)=0x2dc6c0u;
  c->t=R(0)>=R(3);
  if(!c->t) goto L8c013de8;
  R(3)=0x8c0c512cu;
  R(5)=0x0u;
  R(1)=0x8c0c509cu;
  R(2)=0x8c01a00cu;
  ST32(R(1),R(14));
  ST32(R(3),R(9));
  { c->pr=0x8c013e10u; R(4)=R(5); f_8c01a00c(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c013e56;
  R(2)=0x8c01a122u;
  R(4)=R(15);
  { c->pr=0x8c013e1eu; R(4)+=0x4u; f_8c01a122(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c013e50;
  R(2)=LD32(R(15)+4);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c013e36;
  R(2)=LD32(R(15)+4);
  R(3)=0x41474553u;
  R(1)=LD32(R(2)+4);
  c->t=R(1)==R(3);
  if(c->t) goto L8c013e4c;
L8c013e36:;
  R(1)=0x16cu;
  R(0)=LD32(R(15)+4);
  R(3)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c013e50;
  R(2)=0x168u;
  R(0)=LD32(R(15)+4);
  R(3)=0x41474553u;
  R(2)=LD32(R(2)+R(0));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c013e50;
L8c013e4c:;
  R(1)=0x8c0c509cu;
  ST32(R(1),R(9));
L8c013e50:;
  R(3)=0x8c01a0b8u;
  { c->pr=0x8c013e56u;  f_8c01a0b8(c); }
L8c013e56:;
  R(3)=0x8c010b14u;
  R(2)=0x8c0c512cu;
  { c->pr=0x8c013e5eu; ST32(R(2),R(14)); f_8c010b14(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c013f00;
  R(4)=0x8c0b8dc8u;
  { R(5)=0x1u; goto L8c013f04; }
L8c013f00:;
  R(4)=0x8c0b8ddcu;
  R(5)=0x1u;
L8c013f04:;
  { uint32_t tg=R(12); c->pr=0x8c013f08u;  sh4_call(c,tg); }
  R(8)=0x600u;
  R(4)=0x8c0c1644u;
  R(2)=0x2400u;
  R(8)+=R(4);
  R(4)+=R(2);
  R(3)=R(4);
  c->t=R(8)>=R(3);
  { uint32_t k=c->t; ST32(R(15)+8,R(4)); if(k) goto L8c013f64; }
L8c013f1a:;
  R(3)=0x8c05b4d4u;
  { c->pr=0x8c013f20u; R(4)=R(8); f_8c05b4d4(c); }
  R(12)=0x7u;
L8c013f22:;
  R(6)=0xffffffffu;
  R(5)=R(6);
  { uint32_t tg=R(11); c->pr=0x8c013f2au; R(4)=R(12); sh4_call(c,tg); }
  R(6)=0xffffffffu;
  R(5)=R(6);
  R(12)+=0xffffffffu;
  { uint32_t tg=R(11); c->pr=0x8c013f34u; R(4)=R(12); sh4_call(c,tg); }
  R(12)+=0xffffffffu;
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c013f22;
  { uint32_t tg=R(10); c->pr=0x8c013f3eu;  sh4_call(c,tg); }
  ST32(R(15),R(0));
L8c013f40:;
  { uint32_t tg=R(10); c->pr=0x8c013f44u;  sh4_call(c,tg); }
  R(3)=0x8c0d1168u;
  R(5)=R(0);
  R(12)=R(0);
  { c->pr=0x8c013f4eu; R(4)=LD32(R(15)); f_8c0d1168(c); }
  R(2)=0x8c0d116eu;
  { c->pr=0x8c013f54u; R(4)=R(0); f_8c0d116e(c); }
  R(3)=0x186a0u;
  c->t=R(0)>=R(3);
  if(!c->t) goto L8c013f40;
  R(1)=0x600u;
  R(3)=LD32(R(15)+8);
  R(8)+=R(1);
  c->t=R(8)>=R(3);
  if(!c->t) goto L8c013f1a;
L8c013f64:;
  R(0)=0x8c014008u;
  R(8)=0x2000u;
  fp_ld(c,14,R(0));
  R(0)=0x8c014010u;
  fp_ld(c,15,R(0));
  R(11)=R(8);
  R(12)=0x8c0686d0u;
  R(10)=0x8c12531au;
L8c013f74:;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c013f7au; R(10)+=0x1u; sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(2),R(3));
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(12); c->pr=0x8c013f90u; R(10)+=0x1u; sh4_call(c,tg); }
  c->fpul=R(0);
  R(11)+=0xfffffffeu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  c->t=(R(11)&R(11))==0;
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(2),R(3));
  if(!c->t) goto L8c013f74;
  R(6)=0x8c124870u;
  R(0)=0x8c014018u;
  R(2)=0xaaau;
  R(4)=R(9);
  R(5)=R(6);
  R(6)+=R(2);
  ST32(R(15),R(6));
  fp_ld(c,4,R(0));
L8c013fb6:;
  c->macl=R(4)*R(4);
  R(3)=0x8c067940u;
  R(1)=R(8);
  R(6)=LD32(R(15));
  R(11)=c->macl;
  { c->pr=0x8c013fc4u; R(0)=R(11); f_8c067940(c); }
  c->t=(int32_t)R(11)>0;
  R(10)=R(0);
  { uint32_t k=!c->t; R(7)=R(14); if(k) goto L8c01404c; }
L8c013fcc:;
  R(3)=0x10u;
  c->t=(int32_t)R(4)>(int32_t)R(3);
  if(c->t) goto L8c014020;
  R(2)=0x87u;
  ST8(R(5),R(2));
  R(5)+=0x1u;
  { R(2)=0x78u; goto L8c014040; }
L8c014020:;
  R(2)=(int32_t)(int8_t)LD8(R(6));
  R(2)=R(2)&0xFF;
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST8(R(5),R(2));
  R(5)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(6)+1);
  R(2)=R(0)&0xFF;
  c->fpul=R(2);
  fp_float(c,3);
  fp_arith(c,2,3,4);
  fp_ftrc(c,3);
  R(2)=c->fpul;
L8c014040:;
  R(7)+=0x1u;
  ST8(R(5),R(2));
  c->t=(int32_t)R(7)>=(int32_t)R(11);
  R(5)+=0x1u;
  { uint32_t k=!c->t; R(6)+=R(10); if(k) goto L8c013fcc; }
L8c01404c:;
  R(2)=0x40u;
  R(4)+=R(4);
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c013fb6;
  R(4)=0x8c12931cu;
  R(6)=0x40u;
  R(2)=0x8c0d6a00u;
  R(7)=0x204u;
  { c->pr=0x8c014060u; R(5)=R(6); f_8c0d6a00(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c014070;
  R(2)=0x8c0d6ac0u;
  R(4)=0x8c12931cu;
  R(5)=0x8c124870u;
  { c->pr=0x8c014070u;  f_8c0d6ac0(c); }
L8c014070:;
  R(0)=0x8c014178u;
  R(3)=0x2e0u;
  R(11)=0x80u;
  R(10)=R(14);
  R(3)+=R(15);
  ST32(R(15),R(3));
  fp_ld(c,14,R(0));
  R(0)=0x8c01417cu;
  fp_ld(c,13,R(0));
L8c014082:;
  R(3)=0x8c067a9cu;
  R(1)=R(10);
  { c->pr=0x8c01408au; R(0)=R(11); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c014096;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c014096;
  fp_arith(c,1,14,13);
L8c014096:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
  R(2)+=0xffffffffu;
  { uint32_t tg=R(12); c->pr=0x8c0140a2u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(10)+=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(1),R(3));
  R(1)=R(10);
  R(3)=0x8c067a9cu;
  { c->pr=0x8c0140bcu; R(0)=R(11); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0140c8;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0140c8;
  fp_arith(c,1,14,13);
L8c0140c8:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
  R(2)+=0xffffffffu;
  { uint32_t tg=R(12); c->pr=0x8c0140d4u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(10)+=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(1),R(3));
  R(1)=R(10);
  R(3)=0x8c067a9cu;
  { c->pr=0x8c0140eeu; R(0)=R(11); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0140fa;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c0140fa;
  fp_arith(c,1,14,13);
L8c0140fa:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
  R(2)+=0xffffffffu;
  { uint32_t tg=R(12); c->pr=0x8c014106u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(10)+=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(1),R(3));
  R(1)=R(10);
  R(3)=0x8c067a9cu;
  { c->pr=0x8c014120u; R(0)=R(11); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c01412c;
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,14,3);
  if(!c->t) goto L8c01412c;
  fp_arith(c,1,14,13);
L8c01412c:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
  R(2)+=0xffffffffu;
  { uint32_t tg=R(12); c->pr=0x8c014138u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  R(10)+=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(1)=v;}
  c->t=(int32_t)R(10)>=(int32_t)R(8);
  fp_float(c,3);
  fp_arith(c,3,3,15);
  fp_arith(c,2,3,14);
  fp_ftrc(c,3);
  R(3)=c->fpul;
  ST8(R(1),R(3));
  if(!c->t) goto L8c014082;
  {  goto L8c0141a0; }
L8c0141a0:;
  R(5)=0x2e0u;
  R(7)=0x40u;
  R(4)=0x8c12731au;
  R(6)=R(7);
  { c->pr=0x8c0141acu; R(5)+=R(15); f_8c013b02(c); }
  R(4)=0x8c12933cu;
  R(6)=0x40u;
  R(3)=0x8c0d6a00u;
  R(7)=0x104u;
  { c->pr=0x8c0141b8u; R(5)=R(6); f_8c0d6a00(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0141c8;
  R(3)=0x8c0d6ac0u;
  R(4)=0x8c12933cu;
  R(5)=0x8c12731au;
  { c->pr=0x8c0141c8u;  f_8c0d6ac0(c); }
L8c0141c8:;
  R(4)=0x22e0u;
  R(5)=0x0u;
  R(2)=0x8c0686b8u;
  R(6)=0x90u;
  { c->pr=0x8c0141d4u; R(4)+=R(15); f_8c0686b8(c); }
  R(0)=0x22e0u;
  R(2)=0x0u;
  R(3)=0x90u;
  R(4)=0x2u;
  ST32(R(15)+R(0),R(3));
  R(3)=R(2);
  R(0)=0x22e8u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x22e4u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x22f4u;
  ST32(R(15)+R(0),R(9));
  R(0)=0x22f8u;
  ST32(R(15)+R(0),R(3));
  R(3)=0x4u;
  R(0)=0x22ecu;
  ST32(R(15)+R(0),R(2));
  R(0)=0x22fcu;
  ST32(R(15)+R(0),R(3));
  R(3)=R(2);
  R(0)=0x2300u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x2304u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x2308u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x2338u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x233cu;
  ST32(R(15)+R(0),R(2));
  R(0)=0x2340u;
  ST32(R(15)+R(0),R(4));
  R(0)=0x2344u;
  R(10)=0x8c12935cu;
  ST32(R(15)+R(0),R(3));
  R(0)=0x234cu;
  R(12)=0x8c0d6700u;
  ST32(R(15)+R(0),R(2));
  R(2)=0x6u;
  R(0)=0x2358u;
  ST32(R(15)+R(0),R(9));
  R(0)=0x235cu;
  ST32(R(15)+R(0),R(3));
  R(3)=0x8u;
  R(0)=0x2360u;
  ST32(R(15)+R(0),R(9));
  R(0)=0x2330u;
  ST32(R(15)+R(0),R(3));
  R(3)=0x3u;
  R(0)=0x2334u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x2364u;
  ST32(R(15)+R(0),R(3));
  R(3)=0x0u;
  R(0)=0x2348u;
  R(2)=R(3);
  ST32(R(15)+R(0),R(9));
  R(0)=0x2350u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x2354u;
  R(3)=0x8c12931cu;
  ST32(R(15)+R(0),R(2));
  R(0)=0x236cu;
  ST32(R(15)+R(0),R(3));
  R(5)=0x22e0u;
  R(5)+=R(15);
  { uint32_t tg=R(12); c->pr=0x8c01425cu; R(4)=R(10); sh4_call(c,tg); }
  R(0)=0x2354u;
  R(4)=R(10);
  R(5)=0x22e0u;
  ST32(R(15)+R(0),R(9));
  R(0)=0x236cu;
  R(5)+=R(15);
  R(3)=0x8c12933cu;
  ST32(R(15),R(3));
  ST32(R(15)+R(0),R(3));
  { uint32_t tg=R(12); c->pr=0x8c014272u; R(4)+=0x40u; sh4_call(c,tg); }
  R(0)=0x2354u;
  R(4)=R(10);
  R(5)=0x22e0u;
  ST32(R(15)+R(0),R(9));
  R(0)=0x236cu;
  R(5)+=R(15);
  R(3)=LD32(R(15));
  ST32(R(15)+R(0),R(3));
  { uint32_t tg=R(12); c->pr=0x8c014286u; R(4)+=R(11); sh4_call(c,tg); }
  { c->pr=0x8c01428au;  f_8c0139c6(c); }
  R(3)=0x8c0c55ecu;
  R(7)=0x1u;
  R(0)=0x94u;
  R(5)=LD32(R(3));
  R(2)=0x8c03a1c0u;
  R(5)=LD32(R(5)+R(0));
  R(0)=0x98u;
  R(4)=LD32(R(3));
  R(6)=0x8c2cbd40u;
  { c->pr=0x8c0142a0u; R(4)=LD32(R(4)+R(0)); f_8c03a1c0(c); }
  R(2)=0x8c049d48u;
  { c->pr=0x8c0142a6u; c->t=(R(0)&R(0))==0; f_8c049d48(c); }
  R(2)=0x8c049e60u;
  R(3)=0x8c0c59ccu;
  { c->pr=0x8c0142aeu; ST16(R(3),R(14)); f_8c049e60(c); }
  R(0)=0xc34u;
  R(4)=(int32_t)(int8_t)LD8(R(13)+R(0));
  R(0)=0x1f4u;
  R(4)=R(4)&0xFF;
  R(3)=R(4);
  R(4)<<=2;
  R(4)+=R(3);
  R(2)=LD32(R(13)+R(0));
  R(3)=0x8c03b2a0u;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  { c->pr=0x8c0142c8u; R(4)+=R(2); f_8c03b2a0(c); }
  R(2)=0x8c05ce20u;
  { c->pr=0x8c0142ceu;  f_8c05ce20(c); }
  {  goto L8c014360; }
L8c014360:;
  R(3)=0x8c04c3c0u;
  { c->pr=0x8c014366u;  f_8c04c3c0(c); }
  R(2)=0x8c05425cu;
  { c->pr=0x8c01436cu;  f_8c05425c(c); }
  R(3)=0x8c05a100u;
  { c->pr=0x8c014372u;  f_8c05a100(c); }
  R(2)=0x8c014ea0u;
  R(4)=0x1f8u;
  { c->pr=0x8c01437au; R(4)+=R(13); f_8c014ea0(c); }
  R(3)=0x8c014ea0u;
  R(4)=0x260u;
  { c->pr=0x8c014382u; R(4)+=R(13); f_8c014ea0(c); }
  R(3)=0x8c0644c0u;
  R(0)=0xc37u;
  { c->pr=0x8c01438au; ST8(R(13)+R(0),R(14)); f_8c0644c0(c); }
  c->fr[5]=0x3F800000u;
  fp_arith(c,0,5,5);
  R(3)=0x8c056960u;
  c->fr[6]=0x00000000u;
  { c->pr=0x8c014396u; c->fr[4]=0x3F800000u; f_8c056960(c); }
  R(1)=0x2cb4u;
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
void f_8c0143b2(SH4Ctx *c) {
  R(2)=0x8c0c3fa8u;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c0143ce;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0c3facu;
  R(5)=0x8c0c3fbcu;
  { c->pr=0x8c0143cau;  f_8c0124a6(c); }
  R(2)=0x8c0c3fa8u;
  ST8(R(2),R(0));
L8c0143ce:;
  R(2)=0x8c05a2e0u;
  R(3)=0x1u;
  R(1)=0x8c123b08u;
  { c->pr=0x8c0143d8u; ST8(R(1),R(3)); f_8c05a2e0(c); }
  R(3)=0x8c05c080u;
  { c->pr=0x8c0143deu;  f_8c05c080(c); }
  R(2)=0x8c05e920u;
  { c->pr=0x8c0143e4u;  f_8c05e920(c); }
  R(3)=0x8c05ea20u;
  { c->pr=0x8c0143eau;  f_8c05ea20(c); }
  R(2)=0x8c032e60u;
  { c->pr=0x8c0143f0u;  f_8c032e60(c); }
  R(3)=0x8c014e20u;
  { c->pr=0x8c0143f6u;  f_8c014e20(c); }
  R(2)=0x8c045f20u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c045f20(c); return; } }
}
void f_8c014460(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffe5e4u;
  R(15)+=R(0);
  R(14)=0x0u;
  R(3)=0x8c0382c0u;
  R(13)=0x1u;
  R(8)=R(14);
  ST32(R(15)+36,R(13));
  ST32(R(15)+40,R(14));
  { c->pr=0x8c014484u; ST32(R(15)+28,R(14)); f_8c0382c0(c); }
  R(4)=0x134u;
  R(6)=0x28u;
  R(2)=0x8c0686b8u;
  R(5)=R(8);
  { c->pr=0x8c014490u; R(4)+=R(15); f_8c0686b8(c); }
  R(6)=R(15);
  R(11)=0x8c045234u;
  R(6)+=0x1cu;
  { c->pr=0x8c01449au; {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);} f_8c045234(c); }
  R(5)=0x138u;
  R(4)=R(0);
  R(3)=0x8c03bb60u;
  R(5)+=R(15);
  { c->pr=0x8c0144a6u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c03bb60(c); }
  R(3)=0x8c039cf8u;
  R(2)=0x8c2cbd90u;
  { c->pr=0x8c0144aeu; ST32(R(2),R(0)); f_8c039cf8(c); }
  R(6)=R(15);
  R(5)=0x11e0u;
  R(6)+=0x30u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(5)+=R(15);
  { uint32_t tg=R(11); c->pr=0x8c0144bcu; {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(2)=0x8c03b3e0u;
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  { c->pr=0x8c0144c6u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c03b3e0(c); }
  R(12)=0x8c0c42a5u;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0144d6;
  R(3)=0x8c04c31eu;
  { c->pr=0x8c0144d4u; R(4)=0x1u; f_8c04c31e(c); }
  ST8(R(12),R(14));
L8c0144d6:;
  R(3)=0x8c0c52dcu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0144fa;
  R(2)=0x8c045234u;
  { c->pr=0x8c0144e4u;  f_8c045234(c); }
  R(3)=0x8c0337f4u;
  R(5)=0x8c0b8df4u;
  { c->pr=0x8c0144ecu; R(4)=R(0); f_8c0337f4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0144fa;
  R(3)=0x8c04c31eu;
  { c->pr=0x8c0144f6u; R(4)=0x0u; f_8c04c31e(c); }
  { ST8(R(12),R(13)); goto L8c0144fc; }
L8c0144fa:;
  ST8(R(12),R(14));
L8c0144fc:;
  R(12)=0x8c0337f4u;
  { uint32_t tg=R(11); c->pr=0x8c014502u;  sh4_call(c,tg); }
  R(5)=0x8c0b8dfcu;
  { uint32_t tg=R(12); c->pr=0x8c014508u; R(4)=R(0); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c01451a;
  { uint32_t tg=R(11); c->pr=0x8c014510u;  sh4_call(c,tg); }
  R(5)=0x8c0b8e08u;
  { uint32_t tg=R(12); c->pr=0x8c014516u; R(4)=R(0); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c014580;
L8c01451a:;
  R(3)=0x8c0c42acu;
  { ST8(R(3),R(13)); goto L8c014584; }
L8c014580:;
  R(1)=0x8c0c42acu;
  ST8(R(1),R(14));
L8c014584:;
  R(10)=0x8c0d6c20u;
  R(3)=0x8c0c3e44u;
  { uint32_t tg=R(11); c->pr=0x8c01458cu; ST32(R(3),R(13)); sh4_call(c,tg); }
  R(5)=0x8c0b8e10u;
  { uint32_t tg=R(12); c->pr=0x8c014592u; R(4)=R(0); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0145a2;
  R(3)=0x8c0c42a4u;
  ST8(R(3),R(13));
  { uint32_t tg=R(10); c->pr=0x8c01459eu; R(4)=0x2u; sh4_call(c,tg); }
  {  goto L8c0145ca; }
L8c0145a2:;
  R(3)=0x8c0c42a4u;
  { uint32_t tg=R(11); c->pr=0x8c0145a8u; ST8(R(3),R(14)); sh4_call(c,tg); }
  R(5)=0x8c0b8e18u;
  { uint32_t tg=R(12); c->pr=0x8c0145aeu; R(4)=R(0); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0145c0;
  { uint32_t tg=R(11); c->pr=0x8c0145b6u;  sh4_call(c,tg); }
  R(5)=0x8c0b8e20u;
  { uint32_t tg=R(12); c->pr=0x8c0145bcu; R(4)=R(0); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0145c4;
L8c0145c0:;
  { R(4)=0x2u; goto L8c0145c6; }
L8c0145c4:;
  R(4)=0x1u;
L8c0145c6:;
  { uint32_t tg=R(10); c->pr=0x8c0145cau;  sh4_call(c,tg); }
L8c0145ca:;
  { uint32_t tg=R(11); c->pr=0x8c0145ceu;  sh4_call(c,tg); }
  R(5)=0x8c0b8e2cu;
  { uint32_t tg=R(12); c->pr=0x8c0145d4u; R(4)=R(0); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0145e2;
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c014640;
L8c0145e2:;
  R(2)=0x8c0d115eu;
  R(3)=0x8c0c6824u;
  { c->pr=0x8c0145eau; ST32(R(3),R(13)); f_8c0d115e(c); }
  R(1)=0x8c2d1050u;
  { ST32(R(1),R(0)); goto L8c014644; }
L8c014640:;
  R(2)=0x8c0c6824u;
  ST32(R(2),R(14));
L8c014644:;
  R(3)=0x8c0d0632u;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c014650u; R(4)+=0x2cu; f_8c0d0632(c); }
  R(2)=LD32(R(15)+24);
  R(3)=0xffffb000u;
  R(4)=R(2);
  ST32(R(15)+16,R(2));
  R(2)=0x8c064e60u;
  { c->pr=0x8c01465eu; R(4)+=R(3); f_8c064e60(c); }
  R(3)=0x8c0385d8u;
  { c->pr=0x8c014664u;  f_8c0385d8(c); }
  R(3)=0x8c0388c0u;
  R(0)=0x8c01471cu;
  { c->pr=0x8c01466cu; fp_ld(c,4,R(0)); f_8c0388c0(c); }
  R(2)=0x8c011956u;
  { c->pr=0x8c014672u; R(4)=0x0u; f_8c011956(c); }
  R(3)=0x8c011372u;
  { c->pr=0x8c014678u;  f_8c011372(c); }
  R(3)=0x134u;
  R(1)=0x138u;
  R(2)=0x8c2cbd9cu;
  R(3)+=R(15);
  R(9)=0x8c03b6a0u;
  R(1)+=R(15);
  R(12)=0x8c2cbd94u;
  R(10)=0x8c03bdd6u;
  ST32(R(2),R(13));
  ST32(R(15)+32,R(3));
  ST32(R(15)+16,R(1));
L8c01468e:;
  R(2)=0x8c058840u;
  R(3)=0x8c2cbd8cu;
  { c->pr=0x8c014696u; R(4)=LD32(R(3)); f_8c058840(c); }
  R(1)=LD32(R(15)+36);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0146cc;
  R(4)=0x11dcu;
  { uint32_t tg=R(10); c->pr=0x8c0146a2u; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0x8c03b6a6u;
  R(4)=0x11dcu;
  { c->pr=0x8c0146aau; R(4)+=R(15); f_8c03b6a6(c); }
  R(4)=0x11dcu;
  { uint32_t tg=R(9); c->pr=0x8c0146b0u; R(4)+=R(15); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c01468e;
  R(3)=LD32(R(15)+32);
  R(2)=LD32(R(12));
  R(3)=LD32(R(3));
  R(4)=0x11dcu;
  R(2)+=R(3);
  R(3)=0x8c03b6e0u;
  ST32(R(12),R(2));
  { c->pr=0x8c0146c6u; R(4)+=R(15); f_8c03b6e0(c); }
  ST32(R(15)+36,R(14));
  { ST32(R(15)+40,R(13)); goto L8c01468e; }
L8c0146cc:;
  R(2)=LD32(R(15)+40);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c014760;
  R(3)=0x8c03be60u;
  { c->pr=0x8c0146d8u;  f_8c03be60(c); }
  R(6)=R(15);
  R(5)=0x160u;
  R(6)+=0x14u;
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(5)+=R(15);
  { uint32_t tg=R(11); c->pr=0x8c0146e6u; {uint32_t v=R(5);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  R(2)=0x8c03b5a0u;
  R(4)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(5)=v;}
  { c->pr=0x8c0146f0u; {uint32_t v=LD32(R(15));R(15)+=4;R(6)=v;} f_8c03b5a0(c); }
  ST32(R(15)+40,R(14));
  { R(8)=R(13); goto L8c01468e; }
L8c014760:;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0147e0;
  R(4)=0x15cu;
  { uint32_t tg=R(10); c->pr=0x8c01476au; R(4)+=R(15); sh4_call(c,tg); }
  R(4)=0x15cu;
  { uint32_t tg=R(9); c->pr=0x8c014770u; R(4)+=R(15); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c01468e;
  R(2)=LD32(R(15)+16);
  R(1)=LD32(R(12));
  R(3)=LD32(R(2));
  R(4)=0x15cu;
  R(1)+=R(3);
  R(3)=0x8c03ba60u;
  ST32(R(12),R(1));
  { c->pr=0x8c014786u; R(4)+=R(15); f_8c03ba60(c); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x10u;
  R(1)=0x8c0c55f0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=R(15);
  R(0)=0x8cu;
  R(3)+=0x10u;
  R(4)=0x8c2cbd40u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(1));
  R(5)=0x9acu;
  R(3)=LD32(R(2)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(7)=R(15);
  R(3)=0x8c039e00u;
  R(7)+=0x14u;
  R(6)+=0x10u;
  { c->pr=0x8c0147b0u; R(5)+=R(15); f_8c039e00(c); }
  R(15)+=0x10u;
  { R(8)=R(14); goto L8c01468e; }
L8c0147e0:;
  R(4)=0x99cu;
  { uint32_t tg=R(10); c->pr=0x8c0147e6u; R(4)+=R(15); sh4_call(c,tg); }
  R(3)=0x8c03b6a6u;
  R(4)=0x99cu;
  { c->pr=0x8c0147eeu; R(4)+=R(15); f_8c03b6a6(c); }
  R(4)=0x99cu;
  { uint32_t tg=R(9); c->pr=0x8c0147f4u; R(4)+=R(15); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0147fc;
  {  goto L8c01468e; }
L8c0147fc:;
  R(0)=0x13cu;
  R(2)=LD32(R(12));
  R(3)=LD32(R(15)+R(0));
  R(1)=0x8c0385d8u;
  R(2)+=R(3);
  { c->pr=0x8c01480au; ST32(R(12),R(2)); f_8c0385d8(c); }
  R(3)=0x8c04ee76u;
  { c->pr=0x8c014810u;  f_8c04ee76(c); }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(15);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+12);
  R(0)=0x8cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+24);
  R(4)=0x9b0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c55f0u;
  R(2)=LD32(R(15)+24);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(3));
  R(5)=LD32(R(3));
  R(6)=LD32(R(6)+R(0));
  R(0)+=0x4u;
  R(2)=0x8c039f80u;
  R(7)=LD32(R(15)+20);
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c014838u; R(4)+=R(15); f_8c039f80(c); }
  R(3)=0x8c0c59ccu;
  c->t=(R(0)&R(0))==0;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=!c->t; R(15)+=0x14u; if(k) goto L8c01486e; }
  R(2)=0x8c124737u;
  R(0)=0x1eu;
  R(3)=0x8c123dd6u;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  R(2)=0x8c06874cu;
  R(1)=R(1)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(1)*(uint32_t)(uint16_t)R(0);
  R(1)=c->macl;
  R(3)+=R(1);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0b8e38u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c014864u; R(4)+=0x3cu; f_8c06874c(c); }
  R(15)+=0x8u;
  R(3)=0x8c048820u;
  R(4)=R(15);
  { c->pr=0x8c01486eu; R(4)+=0x34u; f_8c048820(c); }
L8c01486e:;
  R(2)=0x8c0c6518u;
  R(1)=0x1a1cu;
  ST32(R(2),R(14));
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
void f_8c0148e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffdfcu;
  R(15)+=R(0);
  R(2)=0x8c05ee40u;
  R(12)=0x1u;
  R(3)=0x8c0c429cu;
  { c->pr=0x8c0148f8u; ST32(R(3),R(12)); f_8c05ee40(c); }
  R(3)=0x8c043b70u;
  { c->pr=0x8c0148feu; R(4)=0x0u; f_8c043b70(c); }
  { c->pr=0x8c014902u;  f_8c014460(c); }
  R(3)=0x8c0c59ccu;
  R(13)=0x8c123b08u;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c014944; }
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=0x64u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=0x2u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(6)=R(7);
  R(2)=0x8c0454feu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c01492au; R(4)=0x1u; f_8c0454fe(c); }
  R(15)+=0x18u;
  R(3)=0x8c2d0060u;
  R(2)=0x8c048980u;
  ST32(R(3),R(14));
  { c->pr=0x8c014936u; R(4)=0x1u; f_8c048980(c); }
  R(3)=0x8c048986u;
  R(4)=0x2ceu;
  { c->pr=0x8c01493eu; R(4)+=R(13); f_8c048986(c); }
  R(2)=0x8c048780u;
  { c->pr=0x8c014944u; R(4)=0x0u; f_8c048780(c); }
L8c014944:;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0149c0;
  R(2)=0x8c0c55f0u;
  R(0)=0xacu;
  R(4)=LD32(R(2));
  R(3)=0x8c064e90u;
  R(4)=LD32(R(4)+R(0));
  R(5)=0x8c0b8e54u;
  R(6)=0x4c9u;
  { c->pr=0x8c01495eu; R(4)<<=2; f_8c064e90(c); }
  {  goto L8c0149d2; }
L8c0149c0:;
  R(2)=0x8c0c55f0u;
  R(0)=0xacu;
  R(4)=LD32(R(2));
  R(3)=0x8c0199c4u;
  R(4)=LD32(R(4)+R(0));
  R(5)=0x8c0b8e54u;
  R(6)=0x4c9u;
  { c->pr=0x8c0149d2u; R(4)<<=2; f_8c0199c4(c); }
L8c0149d2:;
  R(1)=0x8c140ce4u;
  R(3)=R(0);
  R(2)=0x8c0c55f0u;
  R(5)=0x0u;
  ST32(R(1),R(0));
  R(3)=R(1);
  R(0)=0xacu;
  R(6)=LD32(R(2));
  R(2)=0x8c0686b8u;
  R(6)=LD32(R(6)+R(0));
  R(6)<<=2;
  { c->pr=0x8c0149ecu; R(4)=LD32(R(3)); f_8c0686b8(c); }
  R(4)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==5;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0149fc; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c014a2e;
L8c0149fc:;
  R(3)=0x8c0c59ccu;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c014a2e;
  R(2)=0x8c0c60d0u;
  R(1)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c014a2e;
  R(3)=0x8c04f64eu;
  R(5)=0x0u;
  R(1)=0x8c1247d8u;
  { c->pr=0x8c014a18u; R(4)=LD32(R(1)); f_8c04f64e(c); }
  R(3)=0x8c1247d8u;
  R(7)=0x0u;
  R(1)=0x8c017f2cu;
  R(6)=R(7);
  R(2)=LD32(R(3));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c2d1064u;
  R(5)=LD32(R(2));
  { c->pr=0x8c014a2cu; R(4)=0xffffffffu; f_8c017f2c(c); }
  R(15)+=0x4u;
L8c014a2e:;
  R(3)=0x8c05f644u;
  R(0)=0xd4u;
  { c->pr=0x8c014a36u; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c05f644(c); }
  R(2)=0x8c043c00u;
  { c->pr=0x8c014a3cu;  f_8c043c00(c); }
  R(3)=0x8c05ebc8u;
  R(5)=0x32u;
  R(4)=0x1e8u;
  { c->pr=0x8c014a46u; R(4)+=R(13); f_8c05ebc8(c); }
  R(2)=0x8c043efeu;
  { c->pr=0x8c014a4cu;  f_8c043efe(c); }
  R(3)=0x8c052520u;
  { c->pr=0x8c014a52u;  f_8c052520(c); }
  R(2)=0x8c058540u;
  { c->pr=0x8c014a58u;  f_8c058540(c); }
  R(3)=0x8c04e780u;
  { c->pr=0x8c014a5eu;  f_8c04e780(c); }
  R(0)=(int32_t)(int8_t)LD8(R(13));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c014a9a;
  R(2)=0x8c04cbaau;
  { c->pr=0x8c014a6cu; R(11)=R(14); f_8c04cbaa(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c014a7a;
  R(2)=0x8c05ed92u;
  { c->pr=0x8c014a78u; R(4)=0x8u; f_8c05ed92(c); }
  R(11)=R(12);
L8c014a7a:;
  R(3)=0x8c04cb80u;
  { c->pr=0x8c014a80u;  f_8c04cb80(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c014a8e;
  R(3)=0x8c05ed92u;
  { c->pr=0x8c014a8cu; R(4)=0x4u; f_8c05ed92(c); }
  R(11)=R(12);
L8c014a8e:;
  R(11)=(uint32_t)(int32_t)(int8_t)R(11);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c014a9a;
  R(3)=0x8c05254eu;
  { c->pr=0x8c014a9au;  f_8c05254e(c); }
L8c014a9a:;
  R(2)=0x8c04e280u;
  R(4)=0x8c1247dcu;
  { c->pr=0x8c014aa2u;  f_8c04e280(c); }
  R(3)=0x8c054252u;
  { c->pr=0x8c014aa8u;  f_8c054252(c); }
  R(3)=0x8c03a960u;
  R(2)=0x8c0c5374u;
  { c->pr=0x8c014ab0u; ST8(R(2),R(14)); f_8c03a960(c); }
  R(1)=0x8c0c5198u;
  R(5)=0x1u;
  R(3)=0x8c04539eu;
  ST8(R(1),R(14));
  { c->pr=0x8c014abcu; R(4)=0x0u; f_8c04539e(c); }
  {  goto L8c014b40; }
L8c014b40:;
  R(2)=0x8c05c1c0u;
  { c->pr=0x8c014b46u;  f_8c05c1c0(c); }
  R(3)=0x8c05bdc0u;
  { c->pr=0x8c014b4cu;  f_8c05bdc0(c); }
  R(2)=0x8c05bdc0u;
  { c->pr=0x8c014b52u;  f_8c05bdc0(c); }
  R(3)=0x8c05bd8au;
  { c->pr=0x8c014b58u;  f_8c05bd8a(c); }
  R(2)=0x8c05b2c0u;
  { c->pr=0x8c014b5eu;  f_8c05b2c0(c); }
  R(3)=0x8c2d03c0u;
  R(2)=0x8c2d03c4u;
  R(1)=0x8c01a5e0u;
  ST32(R(3),R(14));
  { c->pr=0x8c014b6au; ST32(R(2),R(14)); f_8c01a5e0(c); }
  R(3)=0x8c011956u;
  { c->pr=0x8c014b70u; R(4)=0x0u; f_8c011956(c); }
  R(0)=0x1f0u;
  R(2)=LD32(R(13)+R(0));
  R(3)=LD32(R(2)+4);
  R(1)=LD32(R(3)+32);
  R(3)=0x8c055c1au;
  ST32(R(15),R(1));
  { c->pr=0x8c014b80u; R(4)=R(1); f_8c055c1a(c); }
  R(2)=0x8c04b38cu;
  { c->pr=0x8c014b86u; R(4)=R(0); f_8c04b38c(c); }
  R(3)=0x8c011382u;
  R(0)=0x148u;
  { c->pr=0x8c014b8eu; R(4)=(int32_t)(int16_t)LD16(R(13)+R(0)); f_8c011382(c); }
  R(2)=0x8c05d8a0u;
  { c->pr=0x8c014b94u;  f_8c05d8a0(c); }
  R(2)=0x8c0554a0u;
  R(3)=0x8c2d03b0u;
  { c->pr=0x8c014b9cu; R(4)=LD32(R(3)); f_8c0554a0(c); }
  R(3)=0x8c0554a0u;
  R(1)=0x8c2d03b8u;
  { c->pr=0x8c014ba4u; R(4)=LD32(R(1)); f_8c0554a0(c); }
  R(3)=0x8c0c429cu;
  R(2)=0x8c141100u;
  R(1)=0x204u;
  ST8(R(2),R(14));
  ST32(R(3),R(14));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c014c20(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c04e8a0u;
  { c->pr=0x8c014c28u;  f_8c04e8a0(c); }
  R(1)=0x8c0475deu;
  { c->pr=0x8c014c2eu;  f_8c0475de(c); }
  R(2)=0x8c064680u;
  { c->pr=0x8c014c34u;  f_8c064680(c); }
  R(1)=0x8c044140u;
  { c->pr=0x8c014c3au;  f_8c044140(c); }
  R(2)=0x8c043f38u;
  { c->pr=0x8c014c40u;  f_8c043f38(c); }
  R(1)=0x8c2d1064u;
  R(3)=0x8c018400u;
  R(5)=LD32(R(1));
  { c->pr=0x8c014c4au; R(4)=0xffffffffu; f_8c018400(c); }
  R(2)=0x8c017bdcu;
  { c->pr=0x8c014c50u; R(4)=0x0u; f_8c017bdc(c); }
  R(2)=0x8c055560u;
  R(3)=0x8c2d03b0u;
  { c->pr=0x8c014c58u; R(4)=LD32(R(3)); f_8c055560(c); }
  R(3)=0x8c055560u;
  R(1)=0x8c2d03b8u;
  { c->pr=0x8c014c60u; R(4)=LD32(R(1)); f_8c055560(c); }
  R(3)=0x8c051c80u;
  R(2)=0x8c2d03acu;
  { c->pr=0x8c014c68u; R(4)=LD32(R(2)); f_8c051c80(c); }
  R(1)=0x8c05d6b4u;
  { c->pr=0x8c014c6eu;  f_8c05d6b4(c); }
  R(2)=0x8c0184c0u;
  R(3)=0x0u;
  R(1)=0x8c0c4298u;
  { c->pr=0x8c014c78u; ST32(R(1),R(3)); f_8c0184c0(c); }
  R(3)=0x8c0501e0u;
  { c->pr=0x8c014c7eu;  f_8c0501e0(c); }
  R(2)=0x8c05a284u;
  { c->pr=0x8c014c84u;  f_8c05a284(c); }
  R(0)=0x1c4u;
  R(3)=0x0u;
  R(4)=0x8c123b08u;
  R(2)=R(3);
  ST32(R(4)+R(0),R(3));
  R(0)=0x1c8u;
  ST32(R(4)+R(0),R(3));
  R(0)=0x1ccu;
  R(3)=0x8c045990u;
  ST32(R(4)+R(0),R(2));
  R(0)=0x1e8u;
  ST32(R(4)+R(0),R(2));
  R(0)+=0x4u;
  ST32(R(4)+R(0),R(2));
  R(0)+=0xfffffff0u;
  ST32(R(4)+R(0),R(2));
  R(0)+=0x4u;
  ST32(R(4)+R(0),R(2));
  R(0)+=0x4u;
  ST32(R(4)+R(0),R(2));
  { uint32_t tg=R(3); {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} sh4_call(c,tg); return; }
}
void f_8c014d20(SH4Ctx *c) {
  R(2)=0x8c0c42f4u;
  R(3)=0x8c05a520u;
  R(0)=0x8c0c42f8u;
  ST32(R(2),R(3));
  R(3)=0x8c05a36eu;
  R(1)=0x8c05a5a0u;
  { ST32(R(0),R(1)); { f_8c05a36e(c); return; } }
}
void f_8c014d8a(SH4Ctx *c) {
  R(2)=0x8c129430u;
  R(3)=0x8c05e686u;
  R(5)=LD32(R(2));
  { R(5)+=0x58u; { f_8c05e686(c); return; } }
}
void f_8c014d94(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x4u;
  R(3)=0x8c129438u;
  R(14)=0x8c129430u;
  R(2)=R(3);
  c->fr[5]=0x3F800000u;
  c->fr[4]=0x00000000u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(14),R(3));
  fp_st(c,5,R(0)+R(2));
  R(0)=0x8u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)=0xcu;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)=0x10u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)=0x14u;
  R(3)=LD32(R(14));
  fp_st(c,5,R(0)+R(3));
  R(0)=0x18u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)=0x1cu;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(0)=0x20u;
  R(3)=LD32(R(14));
  fp_st(c,4,R(0)+R(3));
  R(3)=LD32(R(14));
  R(0)=0x24u;
  fp_st(c,5,R(0)+R(3));
  R(3)=0x8c05e630u;
  R(4)=LD32(R(14));
  { c->pr=0x8c014de0u; R(4)+=0x28u; f_8c05e630(c); }
  R(2)=LD32(R(14));
  R(3)=0x1u;
  ST32(R(2),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c014e20(SH4Ctx *c) {
  R(1)=0x8c0c433cu;
  R(3)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(2)=R(2)&0xFF;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c014e3c;
  R(2)=0x8c0124a6u;
  R(4)=0x8c0c4340u;
  R(5)=0x8c0c4350u;
  { c->pr=0x8c014e38u;  f_8c0124a6(c); }
  R(3)=0x8c0c433cu;
  ST8(R(3),R(0));
L8c014e3c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c014e58(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14));
  R(3)=0x3u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(!c->t) goto L8c014e76;
  R(2)=0x8c05e698u;
  R(5)=R(14);
  R(4)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c014e72u; R(4)+=0x28u; f_8c05e698(c); }
  R(3)=0x3u;
  ST32(R(14),R(3));
L8c014e76:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c014ea0(SH4Ctx *c) {
  R(2)=0x8c0685b4u;
  R(6)=0x68u;
  R(3)=0x8c129430u;
  { R(5)=LD32(R(3)); { f_8c0685b4(c); return; } }
}
void f_8c014eaa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c014ec8; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c014ed6;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c014ee4;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c014ef6;
  {  goto L8c014f04; }
L8c014ec8:;
  c->t=R(4)==R(13);
  if(c->t) goto L8c014f0a;
  R(5)=R(13);
  R(2)=0x8c05e6eau;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e6ea(c); return; } }
L8c014ed6:;
  R(6)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(2)=0x8c05e5f4u;
  R(5)=R(14);
  R(5)+=0x58u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e5f4(c); return; } }
L8c014ee4:;
  R(7)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(2)=0x8c05e86cu;
  R(5)=R(14);
  R(6)=R(14);
  R(6)+=0x58u;
  R(5)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e86c(c); return; } }
L8c014ef6:;
  R(6)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(2)=0x8c05e7aeu;
  R(5)=R(14);
  R(5)+=0x28u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e7ae(c); return; } }
L8c014f04:;
  R(3)=0x0u;
  R(2)=0x5u;
  ST32(R(3),R(2));
L8c014f0a:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c014f10(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(5);
  R(0)=LD32(R(14));
  R(12)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c014f3a; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c014f3a;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c014f80;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c014f36;
  {  goto L8c01503e; }
L8c014f36:;
  {  goto L8c01504e; }
L8c014f3a:;
  c->t=R(12)==R(13);
  if(!c->t) goto L8c014f42;
  {  goto L8c015054; }
L8c014f42:;
  R(2)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c014f4au; R(4)=R(12); f_8c05e6ea(c); }
  {  goto L8c015054; }
L8c014f80:;
  c->t=R(13)==R(12);
  if(!c->t) goto L8c014fe2;
  R(3)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c014f8cu; R(4)=R(15); f_8c05e6ea(c); }
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(12));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c015032; }
L8c014fe2:;
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(12));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
L8c015032:;
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(12)); goto L8c015054; }
L8c01503e:;
  R(2)=0x8c05e774u;
  R(5)=R(14);
  R(6)=R(13);
  R(5)+=0x28u;
  { c->pr=0x8c01504au; R(4)=R(12); f_8c05e774(c); }
  {  goto L8c015054; }
L8c01504e:;
  R(3)=0x0u;
  R(2)=0x5u;
  ST32(R(3),R(2));
L8c015054:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c015060(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(5);
  R(0)=LD32(R(14));
  R(12)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c015086; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c015086;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c01509a;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c01509a;
  {  goto L8c01517c; }
L8c015086:;
  c->t=R(12)==R(13);
  if(!c->t) goto L8c01508e;
  {  goto L8c015182; }
L8c01508e:;
  R(2)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c015096u; R(4)=R(12); f_8c05e6ea(c); }
  {  goto L8c015182; }
L8c01509a:;
  c->t=R(13)==R(12);
  if(!c->t) goto L8c015120;
  R(3)=0x8c05e6eau;
  R(5)=R(13);
  { c->pr=0x8c0150a6u; R(4)=R(15); f_8c05e6ea(c); }
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(12));
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(15));
  fp_fmac(c,3,2);
  { fp_ld(c,0,R(0)+R(15)); goto L8c015170; }
L8c015120:;
  R(0)=0x4u;
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(12));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(12));
  fp_ld(c,0,R(0)+R(13));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(13));
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(13));
L8c015170:;
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  { fp_st(c,3,R(0)+R(12)); goto L8c015182; }
L8c01517c:;
  R(3)=0x0u;
  R(2)=0x5u;
  ST32(R(3),R(2));
L8c015182:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01518e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff98u;
  R(0)=LD32(R(5));
  R(13)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(14)=R(6); if(k) goto L8c0151b2; }
  c->t=R(13)==R(14);
  if(c->t) goto L8c0151be;
  R(3)=0x8c0685b4u;
  R(5)=R(14);
  R(6)=0x68u;
  { c->pr=0x8c0151aeu; R(4)=R(13); f_8c0685b4(c); }
  {  goto L8c0151be; }
L8c0151b2:;
  { c->pr=0x8c0151b6u; R(4)=R(15); f_8c0153d8(c); }
  R(5)=R(15);
  R(6)=R(14);
  { c->pr=0x8c0151beu; R(4)=R(13); f_8c0156ca(c); }
L8c0151be:;
  R(15)+=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0151c8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb0u;
  R(13)=R(5);
  R(0)=LD32(R(13));
  R(14)=R(4);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; c->fr[15]=0x3F800000u; if(k) goto L8c0151e6; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0151fe;
  {  goto L8c015280; }
L8c0151e6:;
  c->t=R(14)==R(13);
  if(!c->t) goto L8c0151ee;
  {  goto L8c0153cc; }
L8c0151ee:;
  R(2)=0x8c129430u;
  R(4)=R(14);
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  { c->pr=0x8c0151fau; R(5)=LD32(R(2)); f_8c0685b4(c); }
  {  goto L8c0153cc; }
L8c0151fe:;
  R(0)=0x58u;
  c->t=R(14)==R(13);
  fp_ld(c,3,R(0)+R(13));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(13));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(13));
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x64u;
  { uint32_t k=!c->t; fp_st(c,15,R(0)+R(14)); if(k) goto L8c015222; }
  {  goto L8c0153cc; }
L8c015222:;
  R(3)=0x8c129430u;
  R(4)=R(14);
  R(4)+=0x4u;
  R(5)=R(14);
  R(2)=LD32(R(3));
  R(5)+=0x4u;
  R(1)=LD32(R(2)+4);
  R(0)=LD32(R(2)+8);
  ST32(R(4),R(1));
  ST32(R(4)+4,R(0));
  R(1)=LD32(R(2)+12);
  R(0)=LD32(R(2)+16);
  ST32(R(4)+8,R(1));
  ST32(R(4)+12,R(0));
  R(1)=LD32(R(2)+20);
  R(0)=LD32(R(2)+24);
  ST32(R(4)+16,R(1));
  ST32(R(4)+20,R(0));
  R(1)=LD32(R(2)+28);
  R(0)=LD32(R(2)+32);
  ST32(R(4)+24,R(1));
  ST32(R(4)+28,R(0));
  R(1)=LD32(R(2)+36);
  R(2)=0x8c05e698u;
  ST32(R(4)+32,R(1));
  R(4)=R(14);
  { c->pr=0x8c01525au; R(4)+=0x28u; f_8c05e698(c); }
  R(3)=0x2u;
  { ST32(R(14),R(3)); goto L8c0153cc; }
L8c015280:;
  c->t=R(14)==R(13);
  if(c->t) goto L8c0152c8;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(13));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(13));
  { fp_st(c,3,R(0)+R(14)); goto L8c01536c; }
L8c0152c8:;
  R(3)=R(13);
  R(2)=R(14);
  R(3)+=0x4u;
  R(2)+=0x4u;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c01532a;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_st(c,3,R(15));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x20u;
  R(3)=0x8c0685b4u;
  R(4)=R(14);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(6)=0x24u;
  { c->pr=0x8c015326u; R(4)+=0x4u; f_8c0685b4(c); }
  {  goto L8c01536c; }
L8c01532a:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(13));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(13));
  fp_st(c,3,R(0)+R(14));
L8c01536c:;
  R(0)=0x58u;
  R(5)=R(14);
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x40u;
  R(3)=0x8c05e698u;
  R(4)=R(14);
  fp_unary(c,0,3);
  R(5)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x44u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x48u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_st(c,15,R(0)+R(15));
  { uint32_t tg=R(3); c->pr=0x8c01539au; R(4)+=0x28u; sh4_call(c,tg); }
  R(0)=0x34u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x60u;
  fp_st(c,4,R(0)+R(14));
  R(5)=R(14);
  R(3)=0x8c05e738u;
  R(6)=R(15);
  R(0)=0x64u;
  R(4)=R(14);
  R(5)+=0x28u;
  fp_st(c,15,R(0)+R(14));
  R(6)+=0x40u;
  { c->pr=0x8c0153c8u; R(4)+=0x58u; f_8c05e738(c); }
  R(2)=0x3u;
  ST32(R(14),R(2));
L8c0153cc:;
  R(15)+=0x50u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0153d8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(14)=R(5);
  R(2)=LD32(R(14));
  R(3)=0x3u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c0153f6; }
  R(5)=R(14);
  { c->pr=0x8c0153f2u; R(4)=R(13); f_8c0151c8(c); }
  {  goto L8c015566; }
L8c0153f6:;
  c->t=R(13)==R(14);
  if(c->t) goto L8c015460;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  fp_st(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  fp_st(c,3,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  { fp_st(c,3,R(0)+R(13)); goto L8c015504; }
L8c015460:;
  R(2)=R(14);
  R(1)=R(13);
  R(2)+=0x4u;
  R(1)+=0x4u;
  c->t=R(1)==R(2);
  if(!c->t) goto L8c0154c2;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_st(c,3,R(15));
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  R(2)=0x8c0685b4u;
  R(4)=R(13);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(6)=0x24u;
  { c->pr=0x8c0154beu; R(4)+=0x4u; f_8c0685b4(c); }
  {  goto L8c015504; }
L8c0154c2:;
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(14));
  fp_st(c,3,R(0)+R(13));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  fp_st(c,3,R(0)+R(13));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(13));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  fp_st(c,3,R(0)+R(13));
L8c015504:;
  R(0)=0x58u;
  c->fr[5]=0x3F800000u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x30u;
  c->fr[4]=0x00000000u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x34u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x38u;
  fp_unary(c,0,3);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x60u;
  fp_st(c,4,R(0)+R(13));
  R(0)=0x64u;
  R(5)=R(14);
  R(3)=0x8c05e2eau;
  R(4)=R(13);
  fp_st(c,5,R(0)+R(13));
  R(5)+=0x28u;
  { c->pr=0x8c015552u; R(4)+=0x28u; f_8c05e2ea(c); }
  R(5)=R(13);
  R(2)=0x8c05e738u;
  R(6)=R(15);
  R(4)=R(13);
  R(6)+=0x30u;
  R(5)+=0x28u;
  { c->pr=0x8c015562u; R(4)+=0x58u; f_8c05e738(c); }
  R(3)=0x4u;
  ST32(R(13),R(3));
L8c015566:;
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c015570(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=R(4);
  R(2)=LD32(R(14));
  R(3)=0x3u;
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c015584;
  {  goto L8c0156c2; }
L8c015584:;
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0x4u;
  R(7)+=0x8u;
  { c->pr=0x8c015592u; R(4)=R(14); f_8c015ea8(c); }
  R(1)=LD32(R(15));
  R(0)=0x8u;
  R(2)=LD32(R(15)+8);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(2));
  R(3)=LD32(R(15)+4);
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(0)=0x8u;
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(3));
  R(2)=LD32(R(15)+8);
  R(1)=LD32(R(15));
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,3,R(1));
  fp_ld(c,1,R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(3)=LD32(R(15)+4);
  R(0)=0x4u;
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(1)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  fp_ld(c,3,R(0)+R(1));
  R(2)=LD32(R(15)+8);
  fp_ld(c,2,R(2));
  fp_ld(c,1,R(0)+R(2));
  R(0)=0x8u;
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(1));
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,6,R(0)+R(2));
  fp_ld(c,4,R(3));
  R(0)=0x8u;
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_mov(c,0,4);
  fp_ld(c,5,R(0)+R(3));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(2));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15));
  fp_mov(c,2,4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15));
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(0)=0x4u;
  R(3)=LD32(R(15)+4);
  R(2)=R(3);
  fp_ld(c,5,R(0)+R(2));
  fp_ld(c,4,R(3));
  R(0)=0x8u;
  fp_mov(c,3,5);
  fp_arith(c,2,3,5);
  fp_mov(c,0,4);
  fp_ld(c,6,R(0)+R(3));
  R(0)=0x4u;
  fp_fmac(c,3,4);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_fsrra(c,3);
  fp_mov(c,4,3);
  fp_ld(c,3,R(2));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(3));
  R(3)=LD32(R(15)+4);
  fp_mov(c,2,4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(3));
  R(0)=0x8u;
  R(3)=LD32(R(15)+4);
  R(2)=R(3);
  fp_ld(c,3,R(0)+R(2));
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(3));
  R(0)=0x8u;
  R(1)=LD32(R(15)+4);
  R(2)=LD32(R(15));
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
  R(2)=LD32(R(15));
  R(1)=LD32(R(15)+4);
  fp_ld(c,2,R(0)+R(2));
  fp_ld(c,3,R(1));
  fp_ld(c,1,R(2));
  fp_arith(c,2,2,3);
  fp_ld(c,3,R(0)+R(1));
  R(3)=LD32(R(15)+8);
  fp_arith(c,2,1,3);
  fp_arith(c,1,2,1);
  R(0)=0x4u;
  R(5)=R(14);
  R(4)=R(14);
  R(5)+=0x4u;
  fp_st(c,2,R(0)+R(3));
  R(0)=0x4u;
  R(2)=LD32(R(15));
  R(1)=LD32(R(15)+4);
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
  R(3)=0x8c05e698u;
  { c->pr=0x8c0156beu; R(4)+=0x28u; f_8c05e698(c); }
  R(2)=0x3u;
  ST32(R(14),R(2));
L8c0156c2:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0156ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(12)=R(6); if(k) goto L8c015720; }
  c->t=R(12)==R(14);
  if(!c->t) goto L8c0156e4;
  {  goto L8c01580e; }
L8c0156e4:;
  R(5)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c015720:;
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01573a;
  c->t=R(13)==R(14);
  if(c->t) goto L8c01580e;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  R(5)=R(13);
  R(2)=0x8c0685b4u;
  R(6)=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c01573a:;
  R(4)=R(13);
  R(4)+=0x28u;
  sh4_frchg(c);
  R(6)=R(12);
  fp_ld(c,0,R(4));R(4)+=fp_sz(c);
  R(6)+=0x28u;
  R(5)=R(14);
  R(5)+=0x38u;
  fp_ld(c,1,R(4));R(4)+=fp_sz(c);
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
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(5)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(5)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(5)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
  R(4)=LD32(R(13));
  R(5)=LD32(R(12));
  c->t=(int32_t)R(4)>(int32_t)R(5);
  if(c->t) goto L8c0157c2;
  R(4)=R(5);
L8c0157c2:;
  R(3)=0x3u;
  c->t=R(4)>R(3);
  { uint32_t k=c->t; ST32(R(14),R(4)); if(k) goto L8c0157f8; }
  R(2)=LD32(R(14)+44);
  R(0)=R(14);
  R(0)+=0x38u;
  R(1)=LD32(R(14)+40);
  ST32(R(14)+4,R(1));
  ST32(R(14)+8,R(2));
  R(1)=LD32(R(14)+48);
  ST32(R(14)+12,R(1));
  R(2)=LD32(R(0));
  R(1)=LD32(R(0)+4);
  ST32(R(14)+16,R(2));
  ST32(R(14)+20,R(1));
  R(2)=LD32(R(0)+8);
  ST32(R(14)+24,R(2));
  R(2)=R(14);
  R(2)+=0x48u;
  R(1)=LD32(R(2));
  R(0)=LD32(R(2)+4);
  ST32(R(14)+28,R(1));
  ST32(R(14)+32,R(0));
  R(1)=LD32(R(2)+8);
  { ST32(R(14)+36,R(1)); goto L8c01580e; }
L8c0157f8:;
  R(6)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  R(5)=R(13);
  R(1)=0x8c05e8c4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(4)=R(14);
  R(6)+=0x4u;
  R(5)+=0x4u;
  R(4)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e8c4(c); return; } }
L8c01580e:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c015816(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff90u;
  R(0)=0x8c0158c8u;
  fp_mov(c,14,4);
  fp_ld(c,3,R(0));
  R(13)=R(5);
  R(3)=0x8c0686fcu;
  R(14)=R(4);
  fp_arith(c,2,14,3);
  { c->pr=0x8c015834u; fp_mov(c,4,14); f_8c0686fc(c); }
  R(2)=0x8c068530u;
  fp_mov(c,15,0);
  { c->pr=0x8c01583cu; fp_mov(c,4,14); f_8c068530(c); }
  fp_ld(c,3,R(13));
  R(0)=0x40u;
  fp_mov(c,2,15);
  R(4)=R(15);
  fp_arith(c,2,2,3);
  fp_mov(c,14,0);
  fp_mov(c,7,14);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x44u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x48u;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x44u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x40u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,6,15);
  { c->pr=0x8c015870u; R(4)+=0x4cu; f_8c016454(c); }
  R(3)=LD32(R(14));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c01588a;
  R(5)=R(15);
  R(3)=0x8c0685b4u;
  R(4)=R(14);
  R(6)=0x24u;
  R(5)+=0x4cu;
  { c->pr=0x8c015886u; R(4)+=0x4u; f_8c0685b4(c); }
  {  goto L8c01589a; }
L8c01588a:;
  R(5)=R(14);
  R(3)=0x8c05e8c4u;
  R(6)=R(15);
  R(4)=R(14);
  R(6)+=0x4cu;
  R(5)+=0x4u;
  { c->pr=0x8c01589au; R(4)+=0x4u; f_8c05e8c4(c); }
L8c01589a:;
  R(2)=LD32(R(14));
  R(13)=0x3u;
  c->t=(int32_t)R(2)>(int32_t)R(13);
  if(c->t) goto L8c0158e0;
  R(2)=0x8c05e698u;
  R(5)=R(14);
  R(4)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0158aeu; R(4)+=0x28u; f_8c05e698(c); }
  {  goto L8c015986; }
L8c0158e0:;
  R(0)=0xcu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x30u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x34u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x38u;
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c05e698u;
  R(0)=0x3cu;
  c->fr[3]=0x3F800000u;
  R(5)+=0x4cu;
  fp_st(c,3,R(0)+R(15));
  { c->pr=0x8c01590au; R(4)=R(15); f_8c05e698(c); }
  R(4)=R(14);
  sh4_frchg(c);
  R(4)+=0x28u;
  R(6)=R(15);
  fp_ld(c,0,R(4));R(4)+=fp_sz(c);
  R(5)=R(14);
  R(5)+=0x38u;
  fp_ld(c,1,R(4));R(4)+=fp_sz(c);
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
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(5)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(5)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(5)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(5)-=fp_sz(c);fp_st(c,3,R(5));
  R(5)-=fp_sz(c);fp_st(c,2,R(5));
  R(5)-=fp_sz(c);fp_st(c,1,R(5));
  R(5)-=fp_sz(c);fp_st(c,0,R(5));
L8c015986:;
  R(4)=LD32(R(14));
  c->t=(int32_t)R(4)>(int32_t)R(13);
  if(!c->t) goto L8c015990;
  { R(2)=R(4); goto L8c015992; }
L8c015990:;
  R(2)=R(13);
L8c015992:;
  ST32(R(14),R(2));
  R(15)+=0x70u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0159a2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff80u;
  R(0)=0x8c015a44u;
  fp_mov(c,14,4);
  fp_ld(c,3,R(0));
  R(13)=R(5);
  R(3)=0x8c0686fcu;
  R(14)=R(4);
  fp_arith(c,2,14,3);
  { c->pr=0x8c0159c0u; fp_mov(c,4,14); f_8c0686fc(c); }
  R(2)=0x8c068530u;
  fp_mov(c,15,0);
  { c->pr=0x8c0159c8u; fp_mov(c,4,14); f_8c068530(c); }
  fp_ld(c,3,R(13));
  R(0)=0x50u;
  fp_mov(c,2,15);
  R(4)=R(15);
  fp_arith(c,2,2,3);
  fp_mov(c,14,0);
  fp_mov(c,7,14);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x54u;
  fp_mov(c,2,15);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x58u;
  fp_arith(c,2,15,3);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x54u;
  fp_ld(c,5,R(0)+R(15));
  R(0)=0x50u;
  fp_ld(c,4,R(0)+R(15));
  fp_mov(c,6,15);
  { c->pr=0x8c0159fcu; R(4)+=0x5cu; f_8c016454(c); }
  R(3)=LD32(R(14));
  R(2)=0x2u;
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c015a16;
  R(5)=R(15);
  R(3)=0x8c0685b4u;
  R(4)=R(14);
  R(6)=0x24u;
  R(5)+=0x5cu;
  { c->pr=0x8c015a12u; R(4)+=0x4u; f_8c0685b4(c); }
  {  goto L8c015a26; }
L8c015a16:;
  R(5)=R(14);
  R(3)=0x8c05e8c4u;
  R(6)=R(15);
  R(4)=R(14);
  R(6)+=0x5cu;
  R(5)+=0x4u;
  { c->pr=0x8c015a26u; R(4)+=0x4u; f_8c05e8c4(c); }
L8c015a26:;
  R(2)=LD32(R(14));
  R(13)=0x3u;
  c->t=(int32_t)R(2)>(int32_t)R(13);
  if(c->t) goto L8c015a60;
  R(2)=0x8c05e698u;
  R(5)=R(14);
  R(4)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c015a3au; R(4)+=0x28u; f_8c05e698(c); }
  {  goto L8c015b2e; }
L8c015a60:;
  R(2)=0x8c05e502u;
  R(5)=R(14);
  R(5)+=0x58u;
  { c->pr=0x8c015a6au; R(4)=R(15); f_8c05e502(c); }
  R(0)=0x1cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c05e698u;
  R(0)=0x4cu;
  c->fr[15]=0x3F800000u;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x5cu;
  { c->pr=0x8c015a96u; R(4)+=0x10u; f_8c05e698(c); }
  R(6)=R(14);
  R(6)+=0x28u;
  sh4_frchg(c);
  R(5)=R(15);
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(5)+=0x10u;
  R(4)=R(14);
  R(4)+=0x38u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_ld(c,6,R(6));R(6)+=fp_sz(c);
  fp_ld(c,7,R(6));R(6)+=fp_sz(c);
  fp_ld(c,8,R(6));R(6)+=fp_sz(c);
  fp_ld(c,9,R(6));R(6)+=fp_sz(c);
  fp_ld(c,10,R(6));R(6)+=fp_sz(c);
  fp_ld(c,11,R(6));R(6)+=fp_sz(c);
  fp_ld(c,12,R(6));R(6)+=fp_sz(c);
  fp_ld(c,13,R(6));R(6)+=fp_sz(c);
  fp_ld(c,14,R(6));R(6)+=fp_sz(c);
  fp_ld(c,15,R(6));R(6)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,3,R(15));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x64u;
  fp_st(c,15,R(0)+R(14));
L8c015b2e:;
  R(4)=LD32(R(14));
  c->t=(int32_t)R(4)>(int32_t)R(13);
  if(!c->t) goto L8c015b38;
  { R(3)=R(4); goto L8c015b3a; }
L8c015b38:;
  R(3)=R(13);
L8c015b3a:;
  R(1)=0x80u;
  ST32(R(14),R(3));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c015a60(SH4Ctx *c) {
  R(2)=0x8c05e502u;
  R(5)=R(14);
  R(5)+=0x58u;
  { c->pr=0x8c015a6au; R(4)=R(15); f_8c05e502(c); }
  R(0)=0x1cu;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x2cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x3cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x48u;
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(3)=0x8c05e698u;
  R(0)=0x4cu;
  c->fr[15]=0x3F800000u;
  R(4)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(5)+=0x5cu;
  { c->pr=0x8c015a96u; R(4)+=0x10u; f_8c05e698(c); }
  R(6)=R(14);
  R(6)+=0x28u;
  sh4_frchg(c);
  R(5)=R(15);
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(5)+=0x10u;
  R(4)=R(14);
  R(4)+=0x38u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ld(c,4,R(6));R(6)+=fp_sz(c);
  fp_ld(c,5,R(6));R(6)+=fp_sz(c);
  fp_ld(c,6,R(6));R(6)+=fp_sz(c);
  fp_ld(c,7,R(6));R(6)+=fp_sz(c);
  fp_ld(c,8,R(6));R(6)+=fp_sz(c);
  fp_ld(c,9,R(6));R(6)+=fp_sz(c);
  fp_ld(c,10,R(6));R(6)+=fp_sz(c);
  fp_ld(c,11,R(6));R(6)+=fp_sz(c);
  fp_ld(c,12,R(6));R(6)+=fp_sz(c);
  fp_ld(c,13,R(6));R(6)+=fp_sz(c);
  fp_ld(c,14,R(6));R(6)+=fp_sz(c);
  fp_ld(c,15,R(6));R(6)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(5));R(5)+=fp_sz(c);
  fp_ld(c,2,R(5));R(5)+=fp_sz(c);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,3,R(15));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x64u;
  fp_st(c,15,R(0)+R(14));
  R(4)=LD32(R(14));
  c->t=(int32_t)R(4)>(int32_t)R(13);
  if(!c->t) goto L8c015b38;
  { R(3)=R(4); goto L8c015b3a; }
L8c015b38:;
  R(3)=R(13);
L8c015b3a:;
  R(1)=0x80u;
  ST32(R(14),R(3));
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c015b80(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=0x8c0686fcu;
  ST32(R(15),R(4));
  { c->pr=0x8c015b90u; fp_mov(c,14,4); f_8c0686fc(c); }
  R(2)=0x8c068530u;
  fp_mov(c,15,0);
  { c->pr=0x8c015b98u; fp_mov(c,4,14); f_8c068530(c); }
  R(0)=0x1cu;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x20u;
  c->fr[4]=0x00000000u;
  R(6)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  fp_mov(c,5,0);
  R(5)=R(15);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_unary(c,0,15);
  R(7)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0xcu;
  R(5)+=0x1cu;
  fp_st(c,5,R(0)+R(15));
  R(6)+=0x10u;
  R(7)+=0x4u;
  { c->pr=0x8c015bd4u; R(4)=LD32(R(15)); f_8c015c9c(c); }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c015bde(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=0x8c0686fcu;
  ST32(R(15),R(4));
  { c->pr=0x8c015beeu; fp_mov(c,14,4); f_8c0686fc(c); }
  R(2)=0x8c068530u;
  fp_mov(c,15,0);
  { c->pr=0x8c015bf6u; fp_mov(c,4,14); f_8c068530(c); }
  R(0)=0x1cu;
  fp_mov(c,5,0);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x20u;
  c->fr[4]=0x00000000u;
  R(6)=R(15);
  fp_mov(c,3,15);
  R(5)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x24u;
  fp_unary(c,0,3);
  R(7)=R(15);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x14u;
  c->fr[3]=0x3F800000u;
  R(5)+=0x1cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0xcu;
  R(6)+=0x10u;
  fp_st(c,5,R(0)+R(15));
  R(7)+=0x4u;
  { c->pr=0x8c015c34u; R(4)=LD32(R(15)); f_8c015c9c(c); }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c015c3e(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd8u;
  R(3)=0x8c0686fcu;
  ST32(R(15),R(4));
  { c->pr=0x8c015c4eu; fp_mov(c,14,4); f_8c0686fc(c); }
  R(2)=0x8c068530u;
  fp_mov(c,15,0);
  { c->pr=0x8c015c56u; fp_mov(c,4,14); f_8c068530(c); }
  R(0)=0x1cu;
  fp_mov(c,5,0);
  fp_st(c,5,R(0)+R(15));
  R(0)=0x20u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x24u;
  c->fr[4]=0x00000000u;
  R(7)=R(15);
  fp_st(c,4,R(0)+R(15));
  R(0)=0x10u;
  fp_unary(c,0,15);
  R(6)=R(15);
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  fp_st(c,5,R(0)+R(15));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(15));
  R(5)=R(15);
  R(0)=0xcu;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(15));
  R(5)+=0x1cu;
  R(7)+=0x4u;
  R(6)+=0x10u;
  { c->pr=0x8c015c92u; R(4)=LD32(R(15)); f_8c015c9c(c); }
  R(15)+=0x28u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c015c9c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff9cu;
  R(14)=R(4);
  R(0)=LD32(R(14));
  R(10)=0x8c05e698u;
  R(13)=R(5);
  c->t=(int32_t)R(0)==1;
  R(11)=R(6);
  { uint32_t k=c->t; R(12)=R(7); if(k) goto L8c015cc6; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c015cc6;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c015cc6;
  {  goto L8c015d40; }
L8c015cc6:;
  fp_ld(c,3,R(13));
  R(0)=0x4u;
  R(5)=R(14);
  fp_st(c,3,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(11));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,3,R(12));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(14));
  R(4)=R(14);
  R(5)+=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c015d0eu; R(4)+=0x28u; sh4_call(c,tg); }
  R(3)=0x3u;
  { ST32(R(14),R(3)); goto L8c015e3c; }
L8c015d40:;
  R(6)=R(15);
  R(7)=R(15);
  R(5)=R(15);
  R(6)+=0xcu;
  R(7)+=0x18u;
  { c->pr=0x8c015d4eu; R(4)=R(14); f_8c0160c0(c); }
  fp_ld(c,3,R(13));
  R(0)=0x4u;
  R(5)=R(14);
  fp_st(c,3,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(14));
  fp_ld(c,3,R(0)+R(13));
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(11));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x14u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,3,R(12));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x20u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(14));
  R(4)=R(14);
  R(5)+=0x4u;
  { uint32_t tg=R(10); c->pr=0x8c015d96u; R(4)+=0x28u; sh4_call(c,tg); }
  R(0)=0x30u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x40u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x50u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x54u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(15));
  R(0)=0x60u;
  c->fr[3]=0x3F800000u;
  R(4)=R(15);
  R(5)=R(15);
  fp_st(c,3,R(0)+R(15));
  { uint32_t tg=R(10); c->pr=0x8c015dbeu; R(4)+=0x24u; sh4_call(c,tg); }
  R(5)=R(14);
  R(5)+=0x28u;
  sh4_frchg(c);
  R(6)=R(15);
  fp_ld(c,0,R(5));R(5)+=fp_sz(c);
  R(6)+=0x24u;
  R(4)=R(14);
  R(4)+=0x38u;
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
  fp_ld(c,15,R(5));R(5)+=fp_sz(c);
  sh4_frchg(c);
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
  fp_ld(c,0,R(6));R(6)+=fp_sz(c);
  R(4)+=0x20u;
  fp_ld(c,1,R(6));R(6)+=fp_sz(c);
  fp_ld(c,2,R(6));R(6)+=fp_sz(c);
  fp_ld(c,3,R(6));R(6)+=fp_sz(c);
  fp_ftrv(c,0);
  R(4)-=fp_sz(c);fp_st(c,3,R(4));
  R(4)-=fp_sz(c);fp_st(c,2,R(4));
  R(4)-=fp_sz(c);fp_st(c,1,R(4));
  R(4)-=fp_sz(c);fp_st(c,0,R(4));
L8c015e3c:;
  R(15)+=0x64u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c015e4c(SH4Ctx *c) {
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x20u;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,3,R(0)+R(5)); return; }
}
void f_8c015e64(SH4Ctx *c) {
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x14u;
  fp_st(c,3,R(6));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(6));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x20u;
  fp_st(c,3,R(7));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(7));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,3,R(0)+R(7)); return; }
}
void f_8c015ea8(SH4Ctx *c) {
  R(3)=R(4);
  R(3)+=0x4u;
  R(2)=R(4);
  ST32(R(5),R(3));
  R(3)=R(4);
  R(2)+=0x10u;
  R(3)+=0x1cu;
  ST32(R(6),R(2));
  { ST32(R(7),R(3)); return; }
}
void f_8c015ebc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb8u;
  fp_ld(c,6,R(5));
  R(14)=R(4);
  c->fr[4]=0x3F800000u;
  R(0)=0x8c015f20u;
  fp_unary(c,0,4);
  R(12)=R(7);
  fp_mov(c,7,6);
  fp_arith(c,0,7,4);
  c->fr[2]=0x00000000u;
  R(13)=R(6);
  fp_cmp(c,1,7,2);
  { uint32_t k=!c->t; fp_ld(c,5,R(0)); if(k) goto L8c015ee6; }
  { fp_mov(c,3,7); goto L8c015eee; }
L8c015ee6:;
  fp_mov(c,3,6);
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,3);
  fp_arith(c,0,3,1);
L8c015eee:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c015f80;
  R(0)=0x4u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(13));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c015f40;
  fp_ld(c,3,R(0)+R(13));
  { fp_arith(c,0,3,4); goto L8c015f4a; }
L8c015f40:;
  fp_ld(c,2,R(0)+R(13));
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c015f4a:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c015f80;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(12));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c015f60;
  fp_ld(c,3,R(0)+R(12));
  { fp_arith(c,0,3,4); goto L8c015f6a; }
L8c015f60:;
  fp_ld(c,2,R(0)+R(12));
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c015f6a:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c015f80;
  R(3)=0x8c05e698u;
  R(5)=R(14);
  R(4)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c015f7au; R(4)+=0x28u; f_8c05e698(c); }
  R(2)=0x3u;
  { ST32(R(14),R(2)); goto L8c016008; }
L8c015f80:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c015f8e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c015f8e;
  {  goto L8c015faa; }
L8c015f8e:;
  R(11)=0x8c05e670u;
  R(4)=R(14);
  { c->pr=0x8c015f96u; R(4)+=0x28u; f_8c05e670(c); }
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c015f9eu; R(4)+=0x38u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(12);
  { uint32_t tg=R(11); c->pr=0x8c015fa6u; R(4)+=0x48u; sh4_call(c,tg); }
  {  goto L8c016004; }
L8c015faa:;
  fp_ld(c,3,R(5));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x2cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(13));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x34u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(12));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x44u;
  R(5)=R(14);
  R(6)=R(15);
  R(3)=0x8c05e8c4u;
  R(5)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x24u;
  { c->pr=0x8c015ffau; R(4)=R(15); f_8c05e8c4(c); }
  R(2)=0x8c05e698u;
  R(4)=R(14);
  R(5)=R(15);
  { c->pr=0x8c016004u; R(4)+=0x28u; f_8c05e698(c); }
L8c016004:;
  R(3)=0x4u;
  ST32(R(14),R(3));
L8c016008:;
  R(15)+=0x48u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c015f20(SH4Ctx *c) {
  R(7)=0xe0088b18u;
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  fp_ld(c,2,R(0)+R(13));
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c015f80;
  R(0)=0x8u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(12));
  fp_arith(c,0,2,4);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c015f60;
  fp_ld(c,3,R(0)+R(12));
  { fp_arith(c,0,3,4); goto L8c015f6a; }
L8c015f60:;
  fp_ld(c,2,R(0)+R(12));
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c015f6a:;
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c015f80;
  R(3)=0x8c05e698u;
  R(5)=R(14);
  R(4)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c015f7au; R(4)+=0x28u; f_8c05e698(c); }
  R(2)=0x3u;
  { ST32(R(14),R(2)); goto L8c016008; }
L8c015f80:;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c015f8e;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c015f8e;
  {  goto L8c015faa; }
L8c015f8e:;
  R(11)=0x8c05e670u;
  R(4)=R(14);
  { c->pr=0x8c015f96u; R(4)+=0x28u; f_8c05e670(c); }
  R(4)=R(14);
  R(5)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c015f9eu; R(4)+=0x38u; sh4_call(c,tg); }
  R(4)=R(14);
  R(5)=R(12);
  { uint32_t tg=R(11); c->pr=0x8c015fa6u; R(4)+=0x48u; sh4_call(c,tg); }
  {  goto L8c016004; }
L8c015faa:;
  fp_ld(c,3,R(5));
  R(0)=0x24u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x2cu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x30u;
  fp_ld(c,3,R(13));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x34u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(13));
  R(0)=0x38u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,3,R(12));
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(12));
  R(0)=0x44u;
  R(5)=R(14);
  R(6)=R(15);
  R(3)=0x8c05e8c4u;
  R(5)+=0x4u;
  fp_st(c,3,R(0)+R(15));
  R(6)+=0x24u;
  { c->pr=0x8c015ffau; R(4)=R(15); f_8c05e8c4(c); }
  R(2)=0x8c05e698u;
  R(4)=R(14);
  R(5)=R(15);
  { c->pr=0x8c016004u; R(4)+=0x28u; f_8c05e698(c); }
L8c016004:;
  R(3)=0x4u;
  ST32(R(14),R(3));
L8c016008:;
  R(15)+=0x48u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016016(SH4Ctx *c) {
  R(2)=LD32(R(4));
  R(3)=0x3u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  { uint32_t k=!c->t; c->fr[4]=0x3F800000u; if(k) goto L8c01603c; }
  R(0)=0x28u;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(4));
  R(0)=0x48u;
  fp_mov(c,0,5);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_ld(c,6,R(0)+R(4));
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
L8c01603c:;
  { fp_mov(c,0,4); return; }
}
void f_8c016040(SH4Ctx *c) {
  R(2)=LD32(R(4));
  R(3)=0x3u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  { uint32_t k=!c->t; c->fr[4]=0x3F800000u; if(k) goto L8c016066; }
  R(0)=0x2cu;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x3cu;
  fp_ld(c,7,R(0)+R(4));
  R(0)=0x4cu;
  fp_mov(c,0,5);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_ld(c,6,R(0)+R(4));
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
L8c016066:;
  { fp_mov(c,0,4); return; }
}
void f_8c01606a(SH4Ctx *c) {
  R(2)=LD32(R(4));
  R(3)=0x3u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  { uint32_t k=!c->t; c->fr[4]=0x3F800000u; if(k) goto L8c016090; }
  R(0)=0x30u;
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x40u;
  fp_ld(c,7,R(0)+R(4));
  R(0)=0x50u;
  fp_mov(c,0,5);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_ld(c,6,R(0)+R(4));
  fp_fmac(c,3,5);
  fp_mov(c,0,6);
  fp_fmac(c,3,6);
  fp_unary(c,2,3);
  fp_mov(c,4,3);
L8c016090:;
  { fp_mov(c,0,4); return; }
}
void f_8c0160c0(SH4Ctx *c) {
  R(15)+=0xffffffdcu;
  c->fr[4]=0x00000000u;
  R(0)=0x4u;
  c->fr[5]=0x3F800000u;
  R(3)=0x3u;
  fp_st(c,5,R(5));
  fp_st(c,4,R(0)+R(5));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(5));
  R(0)=0x4u;
  fp_st(c,4,R(6));
  fp_st(c,5,R(0)+R(6));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(6));
  R(0)=0x4u;
  fp_st(c,4,R(7));
  fp_st(c,4,R(0)+R(7));
  R(0)=0x8u;
  fp_st(c,5,R(0)+R(7));
  R(2)=LD32(R(4));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c0160f0;
  {  goto L8c016260; }
L8c0160f0:;
  R(0)=0x2cu;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x28u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x30u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x2cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(15));
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x28u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x30u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x4u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x2cu;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x28u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x30u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x38u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x40u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  fp_fmac(c,3,2);
  R(0)=0xcu;
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x38u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x40u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x3cu;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x38u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x40u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x48u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x50u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x18u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x48u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(4));
  fp_fmac(c,3,2);
  R(0)=0x50u;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4cu;
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x48u;
  fp_arith(c,2,3,0);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x50u;
  fp_fmac(c,3,2);
  fp_ld(c,0,R(0)+R(4));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,3,R(6));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(6));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(6));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,3,R(7));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(7));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(7));
L8c016260:;
  { R(15)+=0x24u; return; }
}
void f_8c016264(SH4Ctx *c) {
  R(0)=0x4u;
  fp_mov(c,2,4);
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x28u;
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x2cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x30u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x38u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x3cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(4));
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  R(0)=0x40u;
  R(3)=0x4u;
  fp_st(c,2,R(0)+R(4));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x48u;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4cu;
  fp_mov(c,2,4);
  fp_arith(c,2,2,3);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x50u;
  fp_arith(c,2,4,3);
  fp_st(c,4,R(0)+R(4));
  { ST32(R(4),R(3)); return; }
}
void f_8c0162d4(SH4Ctx *c) {
  R(0)=0x28u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x2cu;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x3cu;
  fp_st(c,3,R(6));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(6));
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,3,R(0)+R(6));
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4cu;
  fp_st(c,3,R(7));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(7));
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,3,R(0)+R(7)); return; }
}
void f_8c016318(SH4Ctx *c) {
  fp_ld(c,3,R(5));
  R(0)=0x28u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x2cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x30u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x38u;
  fp_ld(c,3,R(6));
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x3cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(6));
  R(0)=0x40u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x48u;
  fp_ld(c,3,R(7));
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x4cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(7));
  R(0)=0x50u;
  R(3)=0x4u;
  fp_st(c,3,R(0)+R(4));
  { ST32(R(4),R(3)); return; }
}
void f_8c016360(SH4Ctx *c) {
  fp_ld(c,3,R(5));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(4));
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c016386;
  R(2)=0x2u;
  ST32(R(4),R(2));
L8c016386:;
  {  return; }
}
void f_8c01638a(SH4Ctx *c) {
  fp_ld(c,3,R(5));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x5cu;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(5));
  R(0)=0x60u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x64u;
  c->fr[3]=0x3F800000u;
  fp_st(c,3,R(0)+R(4));
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0163b0;
  R(2)=0x2u;
  ST32(R(4),R(2));
L8c0163b0:;
  {  return; }
}
void f_8c0163ce(SH4Ctx *c) {
  R(0)=0x58u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x5cu;
  fp_st(c,3,R(5));
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_st(c,3,R(0)+R(5));
  R(0)=0x60u;
  fp_ld(c,3,R(0)+R(4));
  R(0)=0x8u;
  { fp_st(c,3,R(0)+R(5)); return; }
}
void f_8c0163e6(SH4Ctx *c) {
  R(2)=LD32(R(4));
  R(3)=0x3u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c0163f2;
  { c->fr[0]=0x3F800000u; return; }
L8c0163f2:;
  R(0)=0x28u;
  fp_ld(c,4,R(0)+R(4));
  R(0)=0x2cu;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x30u;
  fp_mov(c,0,4);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x38u;
  fp_ld(c,7,R(0)+R(4));
  R(0)=0x3cu;
  fp_ld(c,6,R(0)+R(4));
  R(0)=0x40u;
  fp_fmac(c,3,4);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_mov(c,0,7);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x48u;
  fp_mov(c,4,3);
  fp_mov(c,3,6);
  fp_arith(c,2,3,6);
  fp_fmac(c,3,7);
  fp_mov(c,0,5);
  fp_fmac(c,3,5);
  fp_ld(c,5,R(0)+R(4));
  R(0)=0x4cu;
  fp_ld(c,7,R(0)+R(4));
  fp_mov(c,6,3);
  fp_mov(c,3,7);
  fp_arith(c,2,3,7);
  fp_mov(c,0,5);
  R(0)=0x50u;
  fp_fmac(c,3,5);
  fp_ld(c,8,R(0)+R(4));
  fp_cmp(c,1,4,6);
  fp_mov(c,0,8);
  fp_fmac(c,3,8);
  { uint32_t k=c->t; fp_mov(c,5,3); if(k) goto L8c016446; }
  fp_mov(c,4,6);
L8c016446:;
  fp_cmp(c,1,4,5);
  if(c->t) goto L8c01644c;
  fp_mov(c,4,5);
L8c01644c:;
  fp_unary(c,2,4);
  fp_mov(c,0,4);
  {  return; }
}
void f_8c016454(SH4Ctx *c) {
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  fp_mov(c,15,4);
  fp_arith(c,0,15,4);
  fp_mov(c,9,5);
  fp_arith(c,0,9,5);
  fp_mov(c,1,4);
  fp_mov(c,10,7);
  fp_mov(c,8,6);
  fp_arith(c,2,1,15);
  fp_arith(c,2,10,15);
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  fp_arith(c,0,8,6);
  fp_mov(c,15,4);
  fp_mov(c,13,7);
  fp_arith(c,2,13,9);
  fp_mov(c,0,4);
  fp_arith(c,2,15,9);
  fp_mov(c,11,7);
  fp_mov(c,4,5);
  fp_arith(c,2,4,8);
  fp_mov(c,7,5);
  fp_arith(c,2,7,9);
  fp_mov(c,5,6);
  fp_arith(c,2,5,8);
  fp_arith(c,2,11,8);
  fp_arith(c,2,0,8);
  c->fr[8]=0x3F800000u;
  fp_mov(c,3,8);
  fp_arith(c,1,3,7);
  fp_mov(c,2,11);
  fp_arith(c,1,3,5);
  fp_st(c,3,R(4));
  fp_arith(c,0,2,15);
  fp_mov(c,3,0);
  fp_arith(c,1,3,13);
  fp_mov(c,6,8);
  fp_arith(c,1,6,1);
  R(0)=0xcu;
  fp_arith(c,1,15,11);
  fp_st(c,2,R(0)+R(4));
  R(0)=0x18u;
  fp_st(c,3,R(0)+R(4));
  R(0)=0x4u;
  fp_mov(c,3,6);
  fp_arith(c,1,3,5);
  fp_st(c,15,R(0)+R(4));
  R(0)=0x10u;
  fp_arith(c,0,13,0);
  fp_arith(c,1,6,7);
  fp_st(c,3,R(0)+R(4));
  R(0)=0x1cu;
  fp_mov(c,3,10);
  fp_arith(c,0,3,4);
  fp_arith(c,1,4,10);
  fp_st(c,3,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,13,R(0)+R(4));
  R(0)=0x14u;
  fp_st(c,4,R(0)+R(4));
  R(0)=0x20u;
  fp_st(c,6,R(0)+R(4));
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  { fp_ld(c,15,R(15));R(15)+=fp_sz(c); return; }
}
void f_8c0164d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0164e2;
  {  goto L8c0167f8; }
L8c0164e2:;
  R(0)=0x8c016620u;
  c->fr[3]=0x00000000u;
  fp_ld(c,4,R(0));
  R(0)=0x4u;
  fp_ld(c,6,R(0)+R(14));
  R(0)=0x28u;
  fp_ld(c,7,R(0)+R(14));
  fp_mov(c,5,6);
  fp_arith(c,1,5,7);
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0164fc;
  { fp_mov(c,3,5); goto L8c016504; }
L8c0164fc:;
  fp_mov(c,2,6);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,7);
L8c016504:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c01650c;
  {  goto L8c0166a8; }
L8c01650c:;
  R(0)=0x2cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c016528;
  R(0)=0x2cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c016534; }
L8c016528:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x2cu;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c016534:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c01653c;
  {  goto L8c0166a8; }
L8c01653c:;
  R(0)=0x30u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c016558;
  R(0)=0x30u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c016564; }
L8c016558:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x30u;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c016564:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c01656c;
  {  goto L8c0166a8; }
L8c01656c:;
  R(0)=0x38u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c016588;
  R(0)=0x38u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x10u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c016594; }
L8c016588:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x38u;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c016594:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c01659c;
  {  goto L8c0166a8; }
L8c01659c:;
  R(0)=0x3cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0165b8;
  R(0)=0x3cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x14u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c0165c4; }
L8c0165b8:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x3cu;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0165c4:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0165cc;
  {  goto L8c0166a8; }
L8c0165cc:;
  R(0)=0x40u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c0165e8;
  R(0)=0x40u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x18u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c0165f4; }
L8c0165e8:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x40u;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0165f4:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0166a8;
  R(0)=0x48u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c016640;
  R(0)=0x48u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x1cu;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c01664c; }
L8c016640:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x48u;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c01664c:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0166a8;
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01666c;
  R(0)=0x4cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c016678; }
L8c01666c:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4cu;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c016678:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0166a8;
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c016698;
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c0166a4; }
L8c016698:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0166a4:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0166ac;
L8c0166a8:;
  { R(3)=0x4u; goto L8c0167f0; }
L8c0166ac:;
  R(0)=0x4u;
  c->fr[5]=0x3F800000u;
  fp_ld(c,7,R(0)+R(14));
  fp_unary(c,0,5);
  fp_mov(c,6,7);
  fp_arith(c,0,6,5);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c0166c2;
  { fp_mov(c,3,6); goto L8c0166cc; }
L8c0166c2:;
  fp_mov(c,2,7);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c0166cc:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0166d4;
  {  goto L8c0167aa; }
L8c0166d4:;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0166e2;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0166e4; }
L8c0166e2:;
  fp_unary(c,0,3);
L8c0166e4:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0166ec;
  {  goto L8c0167aa; }
L8c0166ec:;
  R(0)=0xcu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0166fa;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0166fc; }
L8c0166fa:;
  fp_unary(c,0,3);
L8c0166fc:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x10u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c01670e;
  { fp_ld(c,3,R(0)+R(14)); goto L8c016710; }
L8c01670e:;
  fp_unary(c,0,3);
L8c016710:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,5);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c016740;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,5); goto L8c01674a; }
L8c016740:;
  fp_ld(c,2,R(0)+R(14));
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c01674a:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x18u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c01675c;
  { fp_ld(c,3,R(0)+R(14)); goto L8c01675e; }
L8c01675c:;
  fp_unary(c,0,3);
L8c01675e:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x1cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c016770;
  { fp_ld(c,3,R(0)+R(14)); goto L8c016772; }
L8c016770:;
  fp_unary(c,0,3);
L8c016772:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x20u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c016784;
  { fp_ld(c,3,R(0)+R(14)); goto L8c016786; }
L8c016784:;
  fp_unary(c,0,3);
L8c016786:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,5);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01679c;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,5); goto L8c0167a6; }
L8c01679c:;
  fp_ld(c,2,R(0)+R(14));
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0167a6:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0167b0;
L8c0167aa:;
  R(3)=0x3u;
  {  goto L8c0167f0; }
L8c0167b0:;
  R(0)=0x58u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(14));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0167be;
  { fp_mov(c,3,5); goto L8c0167c2; }
L8c0167be:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c0167c2:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167ee;
  R(0)=0x5cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0167d4;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0167d6; }
L8c0167d4:;
  fp_unary(c,0,3);
L8c0167d6:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167ee;
  R(0)=0x60u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0167e8;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0167ea; }
L8c0167e8:;
  fp_unary(c,0,3);
L8c0167ea:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0167f4;
L8c0167ee:;
  R(3)=0x2u;
L8c0167f0:;
  { ST32(R(14),R(3)); goto L8c0167f8; }
L8c0167f4:;
  R(1)=0x1u;
  ST32(R(14),R(1));
L8c0167f8:;
  R(0)=LD32(R(14));
  c->fr[5]=0x3F800000u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c01680e; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c01681e;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c016842;
  {  goto L8c016850; }
L8c01680e:;
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x60u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x64u;
  fp_st(c,5,R(0)+R(14));
L8c01681e:;
  R(0)=0x4u;
  fp_st(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x14u;
  fp_st(c,5,R(0)+R(14));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x24u;
  fp_st(c,5,R(0)+R(14));
L8c016842:;
  R(4)=R(14);
  R(3)=0x8c05e698u;
  R(5)=R(14);
  R(4)+=0x28u;
  R(5)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e698(c); return; } }
L8c016850:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016620(SH4Ctx *c) {
  R(7)=0x8b2bf435u;
  c->t=(int32_t)R(11)>=(int32_t)R(10);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x48u;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0166a8;
  R(0)=0x4cu;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01666c;
  R(0)=0x4cu;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x20u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c016678; }
L8c01666c:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x4cu;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c016678:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0166a8;
  R(0)=0x50u;
  fp_ld(c,3,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,1,2,3);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c016698;
  R(0)=0x50u;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x24u;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,1,3,2); goto L8c0166a4; }
L8c016698:;
  fp_ld(c,2,R(0)+R(14));
  R(0)=0x50u;
  fp_ld(c,1,R(0)+R(14));
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0166a4:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0166ac;
L8c0166a8:;
  { R(3)=0x4u; goto L8c0167f0; }
L8c0166ac:;
  R(0)=0x4u;
  c->fr[5]=0x3F800000u;
  fp_ld(c,7,R(0)+R(14));
  fp_unary(c,0,5);
  fp_mov(c,6,7);
  fp_arith(c,0,6,5);
  c->fr[3]=0x00000000u;
  fp_cmp(c,1,6,3);
  if(!c->t) goto L8c0166c2;
  { fp_mov(c,3,6); goto L8c0166cc; }
L8c0166c2:;
  fp_mov(c,2,7);
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  c->fr[1]=0x3F800000u;
  fp_arith(c,0,3,1);
L8c0166cc:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0166d4;
  {  goto L8c0167aa; }
L8c0166d4:;
  R(0)=0x8u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0166e2;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0166e4; }
L8c0166e2:;
  fp_unary(c,0,3);
L8c0166e4:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0166ec;
  {  goto L8c0167aa; }
L8c0166ec:;
  R(0)=0xcu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0166fa;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0166fc; }
L8c0166fa:;
  fp_unary(c,0,3);
L8c0166fc:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x10u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c01670e;
  { fp_ld(c,3,R(0)+R(14)); goto L8c016710; }
L8c01670e:;
  fp_unary(c,0,3);
L8c016710:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x14u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,5);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c016740;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,5); goto L8c01674a; }
L8c016740:;
  fp_ld(c,2,R(0)+R(14));
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c01674a:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x18u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c01675c;
  { fp_ld(c,3,R(0)+R(14)); goto L8c01675e; }
L8c01675c:;
  fp_unary(c,0,3);
L8c01675e:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x1cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c016770;
  { fp_ld(c,3,R(0)+R(14)); goto L8c016772; }
L8c016770:;
  fp_unary(c,0,3);
L8c016772:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x20u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c016784;
  { fp_ld(c,3,R(0)+R(14)); goto L8c016786; }
L8c016784:;
  fp_unary(c,0,3);
L8c016786:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167aa;
  R(0)=0x24u;
  c->fr[3]=0x00000000u;
  fp_ld(c,2,R(0)+R(14));
  fp_arith(c,0,2,5);
  fp_cmp(c,1,2,3);
  if(!c->t) goto L8c01679c;
  fp_ld(c,3,R(0)+R(14));
  { fp_arith(c,0,3,5); goto L8c0167a6; }
L8c01679c:;
  fp_ld(c,2,R(0)+R(14));
  c->fr[1]=0x3F800000u;
  fp_unary(c,0,2);
  fp_mov(c,3,2);
  fp_arith(c,0,3,1);
L8c0167a6:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0167b0;
L8c0167aa:;
  R(3)=0x3u;
  {  goto L8c0167f0; }
L8c0167b0:;
  R(0)=0x58u;
  c->fr[3]=0x00000000u;
  fp_ld(c,5,R(0)+R(14));
  fp_cmp(c,1,5,3);
  if(!c->t) goto L8c0167be;
  { fp_mov(c,3,5); goto L8c0167c2; }
L8c0167be:;
  fp_mov(c,3,5);
  fp_unary(c,0,3);
L8c0167c2:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167ee;
  R(0)=0x5cu;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0167d4;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0167d6; }
L8c0167d4:;
  fp_unary(c,0,3);
L8c0167d6:;
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c0167ee;
  R(0)=0x60u;
  c->fr[2]=0x00000000u;
  fp_ld(c,3,R(0)+R(14));
  fp_cmp(c,1,3,2);
  if(!c->t) goto L8c0167e8;
  { fp_ld(c,3,R(0)+R(14)); goto L8c0167ea; }
L8c0167e8:;
  fp_unary(c,0,3);
L8c0167ea:;
  fp_cmp(c,1,4,3);
  if(c->t) goto L8c0167f4;
L8c0167ee:;
  R(3)=0x2u;
L8c0167f0:;
  { ST32(R(14),R(3)); goto L8c0167f8; }
L8c0167f4:;
  R(1)=0x1u;
  ST32(R(14),R(1));
L8c0167f8:;
  R(0)=LD32(R(14));
  c->fr[5]=0x3F800000u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; c->fr[4]=0x00000000u; if(k) goto L8c01680e; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c01681e;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c016842;
  {  goto L8c016850; }
L8c01680e:;
  R(0)=0x58u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x5cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x60u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x64u;
  fp_st(c,5,R(0)+R(14));
L8c01681e:;
  R(0)=0x4u;
  fp_st(c,5,R(0)+R(14));
  R(0)=0x8u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0xcu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x10u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x14u;
  fp_st(c,5,R(0)+R(14));
  R(0)=0x18u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x1cu;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x20u;
  fp_st(c,4,R(0)+R(14));
  R(0)=0x24u;
  fp_st(c,5,R(0)+R(14));
L8c016842:;
  R(4)=R(14);
  R(3)=0x8c05e698u;
  R(5)=R(14);
  R(4)+=0x28u;
  R(5)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c05e698(c); return; } }
L8c016850:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016880(SH4Ctx *c) {
  R(2)=0x8c0c4458u;
  R(3)=LD32(R(2));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c01689c;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c01689c;
  R(2)=0x74u;
  R(1)=0x8c1294d0u;
  c->macl=R(4)*R(2);
  R(3)=LD32(R(1));
  R(0)=0x60u;
  R(4)=c->macl;
  R(4)+=R(3);
  ST32(R(4)+R(0),R(5));
L8c01689c:;
  {  return; }
}
void f_8c0168a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x74u;
  c->macl=R(5)*R(14);
  R(2)=0x8c1294d0u;
  R(0)=0x68u;
  R(7)=0x0u;
  R(3)=LD32(R(2));
  R(6)=R(7);
  R(14)=c->macl;
  R(14)+=R(3);
  R(14)=LD32(R(14)+R(0));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0168cc; }
L8c0168bc:;
  R(2)=LD32(R(14)+4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c0168c6;
  { R(6)=R(5); goto L8c0168cc; }
L8c0168c6:;
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0168bc;
L8c0168cc:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c016922;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0168dc;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(14)+8);
  ST32(R(3)+12,R(2));
L8c0168dc:;
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0168e8;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(14)+12);
  ST32(R(3)+8,R(2));
L8c0168e8:;
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016912;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c016904;
  R(3)=LD32(R(14)+8);
  R(1)=LD32(R(14)+16);
  ST32(R(1),R(3));
L8c016904:;
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c016912;
  R(3)=LD32(R(14)+12);
  R(1)=LD32(R(14)+16);
  ST32(R(1)+4,R(3));
L8c016912:;
  R(2)=0x8c064160u;
  R(5)=R(14);
  R(4)=0x0u;
  ST32(R(14)+8,R(7));
  ST32(R(14)+12,R(7));
  ST32(R(14)+16,R(7));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064160(c); return; } }
L8c016922:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016926(SH4Ctx *c) {
  R(3)=0x74u;
  R(1)=0x8c1294d0u;
  c->macl=R(4)*R(3);
  R(2)=LD32(R(1));
  R(0)=0x64u;
  R(4)=c->macl;
  R(4)+=R(2);
  { ST32(R(4)+R(0),R(5)); return; }
}
void f_8c016938(SH4Ctx *c) {
  R(3)=0x74u;
  R(1)=0x8c1294d0u;
  c->macl=R(4)*R(3);
  R(2)=LD32(R(1));
  R(0)=0x64u;
  R(3)=0x7fu;
  R(4)=c->macl;
  R(4)+=R(2);
  { ST32(R(4)+R(0),R(3)); return; }
}
void f_8c01694c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x0u;
  R(11)=R(4);
  ST32(R(15),R(6));
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==127;
  { uint32_t k=!c->t; R(6)=R(14); if(k) goto L8c016976; }
  R(4)=R(11);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0168a0(c); return; } }
L8c016976:;
  R(12)=0x74u;
  R(13)=0x8c1294d0u;
  c->macl=R(5)*R(12);
  R(4)=LD32(R(13));
  R(0)=0x68u;
  R(12)=c->macl;
  R(4)+=R(12);
  R(4)=LD32(R(4)+R(0));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0169c6; }
L8c01698c:;
  R(2)=LD32(R(4)+4);
  c->t=R(2)==R(11);
  if(!c->t) goto L8c0169c0;
  { R(6)=R(5); goto L8c0169c6; }
L8c0169c0:;
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c01698c;
L8c0169c6:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c016a6a;
  R(3)=0x8c063d46u;
  R(5)=0x14u;
  { c->pr=0x8c0169d2u; R(4)=0x0u; f_8c063d46(c); }
  R(4)=R(0);
  ST32(R(4)+8,R(14));
  ST32(R(4)+12,R(14));
  ST32(R(4)+16,R(14));
  R(2)=LD32(R(4)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0169e6;
  R(2)=LD32(R(4)+12);
  R(3)=LD32(R(4)+8);
  ST32(R(3)+12,R(2));
L8c0169e6:;
  R(3)=LD32(R(4)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0169f2;
  R(2)=LD32(R(4)+8);
  R(3)=LD32(R(4)+12);
  ST32(R(3)+8,R(2));
L8c0169f2:;
  R(3)=LD32(R(4)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016a1c;
  R(3)=LD32(R(4)+16);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(4)+16);
  R(2)=LD32(R(3));
  c->t=R(2)==R(4);
  if(!c->t) goto L8c016a0e;
  R(3)=LD32(R(4)+8);
  R(1)=LD32(R(4)+16);
  ST32(R(1),R(3));
L8c016a0e:;
  R(2)=LD32(R(4)+16);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c016a1c;
  R(3)=LD32(R(4)+12);
  R(1)=LD32(R(4)+16);
  ST32(R(1)+4,R(3));
L8c016a1c:;
  R(0)=0x6cu;
  ST32(R(4)+8,R(14));
  ST32(R(4)+12,R(14));
  ST32(R(4)+16,R(14));
  ST32(R(4)+8,R(14));
  R(2)=LD32(R(13));
  R(2)+=R(12);
  R(3)=LD32(R(2)+R(0));
  R(0)=0x68u;
  ST32(R(4)+12,R(3));
  R(2)=LD32(R(13));
  R(2)+=R(12);
  R(3)=R(2);
  R(3)+=0x68u;
  ST32(R(4)+16,R(3));
  R(5)=LD32(R(13));
  R(2)=R(5);
  R(2)+=R(12);
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c016a4c;
  R(5)+=R(12);
  { ST32(R(5)+R(0),R(4)); goto L8c016a54; }
L8c016a4c:;
  R(0)=0x6cu;
  R(5)+=R(12);
  R(2)=LD32(R(5)+R(0));
  ST32(R(2)+8,R(4));
L8c016a54:;
  R(3)=LD32(R(13));
  R(0)=0x6cu;
  R(3)+=R(12);
  ST32(R(3)+R(0),R(4));
  R(0)=0x70u;
  R(3)=LD32(R(13));
  R(3)+=R(12);
  R(2)=LD32(R(3)+R(0));
  R(2)+=0x1u;
  ST32(R(3)+R(0),R(2));
  ST32(R(4)+4,R(11));
L8c016a6a:;
  R(3)=LD32(R(15));
  ST32(R(4),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016a7c(SH4Ctx *c) {
  R(0)=0x74u;
  R(2)=0x8c1294d0u;
  c->macl=R(4)*R(0);
  R(3)=LD32(R(2));
  R(1)=0x64u;
  R(0)=c->macl;
  R(0)+=R(3);
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c016a8e(SH4Ctx *c) {
  R(6)=0x74u;
  R(2)=0x8c1294d0u;
  c->macl=R(5)*R(6);
  R(3)=LD32(R(2));
  R(0)=0x68u;
  R(7)=0x0u;
  R(6)=c->macl;
  R(6)+=R(3);
  R(6)=LD32(R(6)+R(0));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c016ab6; }
L8c016aa6:;
  R(2)=LD32(R(6)+4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c016ab0;
  { R(7)=R(5); goto L8c016ab6; }
L8c016ab0:;
  R(6)=LD32(R(6)+8);
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c016aa6;
L8c016ab6:;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c016abe;
  { R(0)=LD32(R(6)); return; }
L8c016abe:;
  R(0)=0x7fu;
  {  return; }
}
void f_8c016b00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c0c445cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(12));
  { uint32_t tg=R(3); c->pr=0x8c016b12u; R(14)=R(5); sh4_call(c,tg); }
  ST32(R(14),R(0));
  R(2)=LD32(R(12)+4);
  { uint32_t tg=R(2); c->pr=0x8c016b1au; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+4,R(0));
  R(3)=LD32(R(12)+8);
  { uint32_t tg=R(3); c->pr=0x8c016b22u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+8,R(0));
  R(2)=LD32(R(12)+12);
  { uint32_t tg=R(2); c->pr=0x8c016b2au; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+12,R(0));
  R(3)=LD32(R(12)+16);
  { uint32_t tg=R(3); c->pr=0x8c016b32u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+16,R(0));
  R(2)=LD32(R(12)+20);
  { uint32_t tg=R(2); c->pr=0x8c016b3au; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+20,R(0));
  R(3)=LD32(R(12)+24);
  { uint32_t tg=R(3); c->pr=0x8c016b42u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+24,R(0));
  R(2)=LD32(R(12)+28);
  { uint32_t tg=R(2); c->pr=0x8c016b4au; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+28,R(0));
  R(3)=LD32(R(12)+32);
  { uint32_t tg=R(3); c->pr=0x8c016b52u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+32,R(0));
  R(2)=LD32(R(12)+36);
  { uint32_t tg=R(2); c->pr=0x8c016b5au; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+36,R(0));
  R(3)=LD32(R(12)+40);
  { uint32_t tg=R(3); c->pr=0x8c016b62u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+40,R(0));
  R(2)=LD32(R(12)+44);
  { uint32_t tg=R(2); c->pr=0x8c016b6au; R(4)=R(13); sh4_call(c,tg); }
  R(4)=0x10000u;
  ST32(R(14)+44,R(0));
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c016b82;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c016b82;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c016b82;
  ST32(R(14)+24,R(4));
L8c016b82:;
  R(3)=LD32(R(14)+36);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c016b96;
  R(3)=LD32(R(14)+40);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c016b96;
  R(3)=LD32(R(14)+44);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c016b96;
  ST32(R(14)+40,R(4));
L8c016b96:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016ba0(SH4Ctx *c) {
  R(3)=0x8c1294b4u;
  R(2)=0x41u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(3));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c016bbc;
  R(1)=0x8c0633e4u;
  R(6)=0x3u;
  R(5)=0x8c0b8f18u;
  { c->pr=0x8c016bb6u; R(4)=0x12u; f_8c0633e4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c016bbc:;
  R(3)=0x8c063d46u;
  R(5)=0x40u;
  { c->pr=0x8c016bc4u; R(4)=0x0u; f_8c063d46(c); }
  R(5)=0x0u;
  R(4)=R(0);
  R(0)=R(4);
  ST32(R(4)+52,R(5));
  ST32(R(4)+56,R(5));
  ST32(R(4)+60,R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c016bd6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+52);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016be6;
  R(2)=LD32(R(14)+56);
  R(3)=LD32(R(14)+52);
  ST32(R(3)+56,R(2));
L8c016be6:;
  R(3)=LD32(R(14)+56);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016bf2;
  R(2)=LD32(R(14)+52);
  R(3)=LD32(R(14)+56);
  ST32(R(3)+52,R(2));
L8c016bf2:;
  R(3)=LD32(R(14)+60);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016c1c;
  R(3)=LD32(R(14)+60);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+60);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c016c0e;
  R(3)=LD32(R(14)+52);
  R(1)=LD32(R(14)+60);
  ST32(R(1),R(3));
L8c016c0e:;
  R(2)=LD32(R(14)+60);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c016c1c;
  R(3)=LD32(R(14)+56);
  R(1)=LD32(R(14)+60);
  ST32(R(1)+4,R(3));
L8c016c1c:;
  R(2)=0x8c064160u;
  R(4)=0x0u;
  R(5)=R(14);
  ST32(R(14)+52,R(4));
  ST32(R(14)+56,R(4));
  ST32(R(14)+60,R(4));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064160(c); return; } }
}
void f_8c016c2c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c1294acu;
  R(14)=R(4);
  ST32(R(15),R(5));
  R(11)=R(6);
  R(4)=LD32(R(13));
  R(9)=R(7);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(10)=LD32(R(15)+36); if(k) goto L8c016c52; }
  { R(12)=LD32(R(4)+52); goto L8c016c54; }
L8c016c52:;
  R(12)=0x0u;
L8c016c54:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c016ca6;
L8c016c58:;
  R(2)=LD32(R(4)+32);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c016c64;
  R(3)=LD32(R(4)+24);
  c->t=R(3)==R(10);
  if(!c->t) goto L8c016c68;
L8c016c64:;
  { c->pr=0x8c016c68u;  f_8c016bd6(c); }
L8c016c68:;
  R(4)=R(12);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c016ca0;
  { R(12)=LD32(R(4)+52); goto L8c016ca2; }
L8c016ca0:;
  R(12)=0x0u;
L8c016ca2:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c016c58;
L8c016ca6:;
  R(4)=LD32(R(13));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c016cbe;
L8c016cac:;
  R(2)=LD32(R(4)+8);
  c->t=R(2)==R(11);
  if(!c->t) goto L8c016cb8;
  R(1)=LD32(R(4)+12);
  c->t=R(1)==R(9);
  if(c->t) goto L8c016cbe;
L8c016cb8:;
  R(4)=LD32(R(4)+52);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c016cac;
L8c016cbe:;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c016d3e; }
  R(3)=LD32(R(14)+52);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(6)=LD32(R(4)+52); if(k) goto L8c016cd2; }
  R(2)=LD32(R(14)+56);
  R(3)=LD32(R(14)+52);
  ST32(R(3)+56,R(2));
L8c016cd2:;
  R(3)=LD32(R(14)+56);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016cde;
  R(2)=LD32(R(14)+52);
  R(3)=LD32(R(14)+56);
  ST32(R(3)+52,R(2));
L8c016cde:;
  R(3)=LD32(R(14)+60);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016d08;
  R(3)=LD32(R(14)+60);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+60);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c016cfa;
  R(3)=LD32(R(14)+52);
  R(1)=LD32(R(14)+60);
  ST32(R(1),R(3));
L8c016cfa:;
  R(2)=LD32(R(14)+60);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c016d08;
  R(3)=LD32(R(14)+56);
  R(1)=LD32(R(14)+60);
  ST32(R(1)+4,R(3));
L8c016d08:;
  c->t=(R(4)&R(4))==0;
  ST32(R(14)+52,R(5));
  ST32(R(14)+56,R(5));
  ST32(R(14)+60,R(5));
  ST32(R(14)+52,R(6));
  { uint32_t k=c->t; ST32(R(14)+56,R(4)); if(k) goto L8c016d1e; }
  ST32(R(4)+52,R(14));
  R(3)=LD32(R(4)+60);
  { ST32(R(14)+60,R(3)); goto L8c016d22; }
L8c016d1e:;
  R(1)=LD32(R(6)+60);
  ST32(R(1),R(14));
L8c016d22:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c016d2e;
  ST32(R(6)+56,R(14));
  R(2)=LD32(R(6)+60);
  { ST32(R(14)+60,R(2)); goto L8c016d32; }
L8c016d2e:;
  R(1)=LD32(R(4)+60);
  ST32(R(1)+4,R(14));
L8c016d32:;
  R(3)=LD32(R(14)+60);
  R(2)=LD32(R(3)+8);
  R(2)+=0x1u;
  ST32(R(3)+8,R(2));
  {  goto L8c016da4; }
L8c016d3e:;
  R(1)=LD32(R(14)+52);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c016d4a;
  R(2)=LD32(R(14)+56);
  R(3)=LD32(R(14)+52);
  ST32(R(3)+56,R(2));
L8c016d4a:;
  R(3)=LD32(R(14)+56);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016d56;
  R(2)=LD32(R(14)+52);
  R(3)=LD32(R(14)+56);
  ST32(R(3)+52,R(2));
L8c016d56:;
  R(3)=LD32(R(14)+60);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016d80;
  R(3)=LD32(R(14)+60);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+60);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c016d72;
  R(3)=LD32(R(14)+52);
  R(1)=LD32(R(14)+60);
  ST32(R(1),R(3));
L8c016d72:;
  R(2)=LD32(R(14)+60);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c016d80;
  R(3)=LD32(R(14)+56);
  R(1)=LD32(R(14)+60);
  ST32(R(1)+4,R(3));
L8c016d80:;
  ST32(R(14)+52,R(5));
  ST32(R(14)+56,R(5));
  ST32(R(14)+60,R(5));
  ST32(R(14)+52,R(5));
  R(2)=LD32(R(13)+4);
  ST32(R(14)+56,R(2));
  ST32(R(14)+60,R(13));
  R(3)=LD32(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c016d98;
  { ST32(R(13),R(14)); goto L8c016d9c; }
L8c016d98:;
  R(2)=LD32(R(13)+4);
  ST32(R(2)+52,R(14));
L8c016d9c:;
  ST32(R(13)+4,R(14));
  R(3)=LD32(R(13)+8);
  R(3)+=0x1u;
  ST32(R(13)+8,R(3));
L8c016da4:;
  R(4)=0x1u;
  ST32(R(14),R(4));
  R(2)=LD32(R(15));
  ST32(R(14)+4,R(2));
  ST32(R(14)+8,R(11));
  ST32(R(14)+12,R(9));
  R(3)=LD32(R(15)+32);
  ST32(R(14)+20,R(3));
  ST32(R(14)+24,R(10));
  R(3)=LD32(R(15)+40);
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(15)+44);
  ST32(R(14)+28,R(2));
  ST32(R(14)+32,R(4));
  R(3)=LD32(R(15)+48);
  ST32(R(14)+36,R(3));
  R(2)=LD32(R(15)+52);
  ST32(R(14)+40,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016dda(SH4Ctx *c) {
  R(3)=0x8c1294acu;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(0)=LD32(R(3)); if(k) goto L8c016e04; }
  R(7)=R(0);
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c016e28;
L8c016de8:;
  R(3)=LD32(R(7)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016dfa;
  R(3)=LD32(R(7)+8);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c016dfa;
  R(1)=LD32(R(7)+12);
  c->t=R(1)==R(5);
  if(c->t) goto L8c016e28;
L8c016dfa:;
  R(7)=LD32(R(7)+52);
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c016de8;
  {  goto L8c016e28; }
L8c016e04:;
  R(7)=R(0);
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c016e28;
L8c016e0a:;
  R(3)=LD32(R(7)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016e22;
  R(3)=LD32(R(7)+8);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c016e22;
  R(1)=LD32(R(7)+16);
  c->t=R(1)==R(6);
  if(!c->t) goto L8c016e22;
  R(2)=LD32(R(7)+12);
  c->t=R(2)==R(5);
  if(c->t) goto L8c016e28;
L8c016e22:;
  R(7)=LD32(R(7)+52);
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c016e0a;
L8c016e28:;
  { R(0)=R(7); return; }
}
void f_8c016e2c(SH4Ctx *c) {
  R(3)=0x8c1294acu;
  c->t=(R(7)&R(7))==0;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(0)=LD32(R(3)); if(k) goto L8c016e5e; }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c016e88;
L8c016e3c:;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016e54;
  R(3)=LD32(R(14)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c016e54;
  R(1)=LD32(R(14)+8);
  c->t=R(1)==R(5);
  if(!c->t) goto L8c016e54;
  R(2)=LD32(R(14)+12);
  c->t=R(2)==R(6);
  if(c->t) goto L8c016e88;
L8c016e54:;
  R(14)=LD32(R(14)+52);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c016e3c;
  {  goto L8c016e88; }
L8c016e5e:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c016e88;
L8c016e64:;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016e82;
  R(3)=LD32(R(14)+4);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c016e82;
  R(1)=LD32(R(14)+8);
  c->t=R(1)==R(5);
  if(!c->t) goto L8c016e82;
  R(2)=LD32(R(14)+16);
  c->t=R(2)==R(7);
  if(!c->t) goto L8c016e82;
  R(1)=LD32(R(14)+12);
  c->t=R(1)==R(6);
  if(c->t) goto L8c016e88;
L8c016e82:;
  R(14)=LD32(R(14)+52);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c016e64;
L8c016e88:;
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016e8e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x8c060912u;
  R(12)=0x8c06023cu;
  ST32(R(15),R(4));
  { ST32(R(15)+4,R(5)); goto L8c016ee8; }
L8c016ea2:;
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(2)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016ee0;
  { uint32_t tg=R(13); c->pr=0x8c016eaeu; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
  {  goto L8c016ee4; }
L8c016ee0:;
  { uint32_t tg=R(12); c->pr=0x8c016ee4u; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
L8c016ee4:;
  { c->pr=0x8c016ee8u; R(4)=R(14); f_8c016bd6(c); }
L8c016ee8:;
  R(5)=LD32(R(15)+4);
  R(6)=0x0u;
  { c->pr=0x8c016ef0u; R(4)=LD32(R(15)); f_8c016dda(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c016ea2; }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016f02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(11)=0x8c060912u;
  R(12)=R(15);
  R(13)=0x8c06023cu;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { R(12)+=0x1cu; goto L8c016f34; }
L8c016f1c:;
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(2)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016f2c;
  { uint32_t tg=R(11); c->pr=0x8c016f28u; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
  {  goto L8c016f30; }
L8c016f2c:;
  { uint32_t tg=R(13); c->pr=0x8c016f30u; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
L8c016f30:;
  { c->pr=0x8c016f34u; R(4)=R(14); f_8c016bd6(c); }
L8c016f34:;
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(12));
  { c->pr=0x8c016f3cu; R(4)=LD32(R(15)); f_8c016dda(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c016f1c; }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016f50(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c1294acu;
  ST32(R(15),R(4));
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c016f68;
  { R(13)=LD32(R(14)+52); goto L8c016f6a; }
L8c016f68:;
  R(13)=0x0u;
L8c016f6a:;
  R(12)=0x8c060912u;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c016f96;
L8c016f70:;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016f86;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(15));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c016f86;
  { uint32_t tg=R(12); c->pr=0x8c016f82u; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
  { c->pr=0x8c016f86u; R(4)=R(14); f_8c016bd6(c); }
L8c016f86:;
  R(14)=R(13);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c016f90;
  { R(13)=LD32(R(14)+52); goto L8c016f92; }
L8c016f90:;
  R(13)=0x0u;
L8c016f92:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c016f70;
L8c016f96:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c016fa2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c1294acu;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c016fe0;
  { R(13)=LD32(R(14)+52); goto L8c016fe2; }
L8c016fe0:;
  R(13)=0x0u;
L8c016fe2:;
  R(12)=0x8c060912u;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017006;
L8c016fe8:;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c016ff2;
  { uint32_t tg=R(12); c->pr=0x8c016ff2u; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
L8c016ff2:;
  { c->pr=0x8c016ff6u; R(4)=R(14); f_8c016bd6(c); }
  R(14)=R(13);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017000;
  { R(13)=LD32(R(14)+52); goto L8c017002; }
L8c017000:;
  R(13)=0x0u;
L8c017002:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c016fe8;
L8c017006:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c017010(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c1294acu;
  ST32(R(15),R(4));
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017028;
  { R(13)=LD32(R(14)+52); goto L8c01702a; }
L8c017028:;
  R(13)=0x0u;
L8c01702a:;
  R(12)=0x8c060912u;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017056;
L8c017030:;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c017046;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(15));
  c->t=R(2)==R(3);
  if(c->t) goto L8c017046;
  { uint32_t tg=R(12); c->pr=0x8c017042u; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
  { c->pr=0x8c017046u; R(4)=R(14); f_8c016bd6(c); }
L8c017046:;
  R(14)=R(13);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017050;
  { R(13)=LD32(R(14)+52); goto L8c017052; }
L8c017050:;
  R(13)=0x0u;
L8c017052:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c017030;
L8c017056:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c017062(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(6);
  R(3)=LD32(R(14)+36);
  R(13)=0x74u;
  R(3)+=0xfffffffeu;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(14);
  R(2)=R(3);
  R(3)=0xffffffefu;
  c->macl=R(5)*R(13);
  R(2)+=0x38u;
  ST32(R(15),R(2));
  R(0)=0x5cu;
  R(1)=LD32(R(14)+32);
  R(13)=c->macl;
  R(1)&=R(3);
  ST32(R(14)+32,R(1));
  R(1)=0x8c1294d0u;
  R(2)=LD32(R(1));
  R(13)+=R(2);
  R(3)=LD32(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0170a8;
  R(3)=LD32(R(13)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c01709eu; R(5)=LD32(R(15)); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0170a8;
  R(0)=LD32(R(14)+32);
  R(0)|=0x10u;
  ST32(R(14)+32,R(0));
L8c0170a8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0170b2(SH4Ctx *c) {
  R(7)=LD32(R(6)+36);
  R(0)=LD32(R(6)+32);
  R(7)+=0xfffffffeu;
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  R(7)+=R(6);
  R(0)|=0x20u;
  R(7)+=0x40u;
  ST32(R(6)+32,R(0));
  ST32(R(7),R(5));
  { ST32(R(7)+4,R(4)); return; }
}
void f_8c0170ca(SH4Ctx *c) {
  {  return; }
}
void f_8c017100(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(2)=R(6);
  R(3)=0x74u;
  c->macl=R(2)*R(3);
  R(2)=0x8c1294d0u;
  R(3)=0x4cu;
  ST32(R(15),R(6));
  R(1)=LD32(R(2));
  R(0)=c->macl;
  R(0)+=R(1);
  R(0)=LD32(R(3)+R(0));
  { uint32_t tg=R(0); R(15)+=0x4u; sh4_call(c,tg); return; }
}
void f_8c01711a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(11)=R(15);
  R(11)+=0x48u;
  R(9)=R(15);
  R(14)=R(15);
  R(13)=0x8c0612c0u;
  R(10)=R(15);
  R(5)=LD32(R(11));
  R(14)+=0x3cu;
  R(10)+=0x54u;
  R(12)=R(15);
  R(9)+=0x60u;
  { c->pr=0x8c017146u; R(4)=LD32(R(14)); f_8c0612c0(c); }
  R(5)=LD32(R(10));
  R(8)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c01714eu; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  R(5)=LD32(R(9));
  R(8)+=R(0);
  { uint32_t tg=R(13); c->pr=0x8c017156u; R(4)=LD32(R(14)+8); sh4_call(c,tg); }
  R(8)+=R(0);
  ST32(R(12),R(8));
  R(5)=LD32(R(11)+4);
  { uint32_t tg=R(13); c->pr=0x8c017160u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(5)=LD32(R(10)+4);
  R(8)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c017168u; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  R(5)=LD32(R(9)+4);
  R(8)+=R(0);
  { uint32_t tg=R(13); c->pr=0x8c017170u; R(4)=LD32(R(14)+8); sh4_call(c,tg); }
  R(8)+=R(0);
  ST32(R(12)+4,R(8));
  R(5)=LD32(R(11)+8);
  { uint32_t tg=R(13); c->pr=0x8c01717au; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(5)=LD32(R(10)+8);
  R(8)=R(0);
  { uint32_t tg=R(13); c->pr=0x8c017182u; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  R(5)=LD32(R(9)+8);
  R(8)+=R(0);
  { uint32_t tg=R(13); c->pr=0x8c01718au; R(4)=LD32(R(14)+8); sh4_call(c,tg); }
  R(4)=R(15);
  R(4)+=0x30u;
  R(8)+=R(0);
  ST32(R(12)+8,R(8));
  R(2)=LD32(R(12));
  R(3)=LD32(R(4));
  R(2)+=R(3);
  ST32(R(12),R(2));
  R(1)=LD32(R(12)+4);
  R(3)=LD32(R(4)+4);
  R(1)+=R(3);
  ST32(R(12)+4,R(1));
  R(2)=LD32(R(12)+8);
  R(3)=LD32(R(4)+8);
  R(2)+=R(3);
  ST32(R(12)+8,R(2));
  R(0)=LD32(R(12));
  R(1)=LD32(R(15)+44);
  R(3)=LD32(R(12)+4);
  ST32(R(1),R(0));
  ST32(R(1)+4,R(3));
  R(0)=LD32(R(12)+8);
  ST32(R(1)+8,R(0));
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
void f_8c0171cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(12)=0x8c1294d0u;
  R(3)=0x74u;
  R(10)=R(4);
  R(0)=R(10);
  R(9)=0x0u;
  R(14)=R(7);
  c->t=(int32_t)R(0)==-1;
  R(8)=0x40u;
  R(13)=R(5);
  ST32(R(15)+4,R(6));
  ST32(R(14)+32,R(9));
  R(2)=LD32(R(15)+4);
  R(1)=LD32(R(12));
  c->macl=R(2)*R(3);
  ST32(R(15),R(1));
  { uint32_t k=!c->t; R(11)=c->macl; if(k) goto L8c017288; }
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c017276;
  R(2)=LD32(R(15));
  R(2)+=R(11);
  R(1)=LD32(R(2));
  { uint32_t tg=R(1); c->pr=0x8c017210u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+8,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c01721cu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+12,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+8);
  { uint32_t tg=R(2); c->pr=0x8c017228u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+16,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+12);
  { uint32_t tg=R(2); c->pr=0x8c017234u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+20,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c017240u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+24,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+20);
  { uint32_t tg=R(2); c->pr=0x8c01724cu; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(14)+28,R(0));
  R(0)=LD32(R(12));
  R(0)+=R(11);
  R(0)=LD32(R(0)+24);
  { uint32_t tg=R(0); c->pr=0x8c017258u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0x8c0c44ecu;
  ST8(R(14)+7,R(0));
  R(0)=R(8);
  ST8(R(14)+5,R(0));
  R(0)=R(9);
  ST8(R(14)+6,R(0));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01726e;
  {  goto L8c01754c; }
L8c01726e:;
  R(0)=LD32(R(14)+32);
  R(0)|=0x2u;
  { ST32(R(14)+32,R(0)); goto L8c01754c; }
L8c017276:;
  R(0)=R(8);
  ST8(R(14)+5,R(0));
  R(0)=R(9);
  ST8(R(14)+7,R(0));
  ST8(R(14)+6,R(0));
  R(0)=LD32(R(14)+32);
  R(0)|=0x3u;
  { ST32(R(14)+32,R(0)); goto L8c01754c; }
L8c017288:;
  R(2)=LD32(R(15));
  R(0)=0x50u;
  R(2)+=R(11);
  R(1)=LD32(R(2)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c017320;
  R(1)=LD32(R(15));
  R(5)=R(13);
  R(1)+=R(11);
  R(2)=LD32(R(1)+52);
  { uint32_t tg=R(2); c->pr=0x8c0172a0u; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(13);
  ST32(R(14)+8,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+56);
  { uint32_t tg=R(2); c->pr=0x8c0172aeu; R(4)=R(10); sh4_call(c,tg); }
  R(5)=R(13);
  ST32(R(14)+12,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+60);
  { uint32_t tg=R(2); c->pr=0x8c0172bcu; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(14)+16,R(0));
  R(0)=0x40u;
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c0172ccu; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(14)+20,R(0));
  R(0)=0x44u;
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c0172dcu; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(14)+24,R(0));
  R(0)=0x48u;
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c0172ecu; R(4)=R(10); sh4_call(c,tg); }
  { ST32(R(14)+28,R(0)); goto L8c017538; }
L8c017320:;
  R(2)=LD32(R(15));
  R(5)=R(15);
  R(5)+=0x68u;
  R(2)+=R(11);
  R(1)=LD32(R(2)+40);
  { uint32_t tg=R(1); c->pr=0x8c01732eu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(12));
  R(5)=R(15);
  R(5)+=0x5cu;
  R(3)+=R(11);
  R(2)=LD32(R(3)+44);
  { uint32_t tg=R(2); c->pr=0x8c01733cu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(12));
  R(5)=R(15);
  R(5)+=0x50u;
  R(3)+=R(11);
  R(2)=LD32(R(3)+48);
  { uint32_t tg=R(2); c->pr=0x8c01734au; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+52);
  { uint32_t tg=R(2); c->pr=0x8c017356u; R(4)=R(10); sh4_call(c,tg); }
  R(1)=R(15);
  R(1)+=0x44u;
  R(5)=R(13);
  ST32(R(1),R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+56);
  { uint32_t tg=R(2); c->pr=0x8c017368u; R(4)=R(10); sh4_call(c,tg); }
  R(1)=R(15);
  R(1)+=0x48u;
  R(5)=R(13);
  ST32(R(1),R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+60);
  { uint32_t tg=R(2); c->pr=0x8c01737au; R(4)=R(10); sh4_call(c,tg); }
  R(1)=R(15);
  R(1)+=0x4cu;
  ST32(R(1),R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3));
  { uint32_t tg=R(2); c->pr=0x8c01738au; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+56,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+4);
  { uint32_t tg=R(2); c->pr=0x8c017396u; R(4)=R(13); sh4_call(c,tg); }
  ST32(R(15)+60,R(0));
  R(3)=LD32(R(12));
  R(3)+=R(11);
  R(2)=LD32(R(3)+8);
  { uint32_t tg=R(2); c->pr=0x8c0173a2u; R(4)=R(13); sh4_call(c,tg); }
  R(2)=0xcu;
  R(3)=R(15);
  R(1)=R(15);
  R(15)-=R(2);
  R(3)+=0x50u;
  R(1)+=0x40u;
  ST32(R(1),R(0));
  R(0)=R(15);
  R(2)=LD32(R(3));
  R(0)+=0x68u;
  R(1)=LD32(R(3)+4);
  ST32(R(15),R(2));
  ST32(R(15)+4,R(1));
  R(2)=LD32(R(3)+8);
  R(3)=0xcu;
  R(1)=0x80u;
  ST32(R(15)+8,R(2));
  R(15)-=R(3);
  R(3)=LD32(R(0));
  R(1)+=R(15);
  R(2)=LD32(R(0)+4);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(0)+8);
  ST32(R(15)+8,R(3));
  R(3)=0xcu;
  R(15)-=R(3);
  R(3)=LD32(R(1));
  R(2)=LD32(R(1)+4);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(1)+8);
  ST32(R(15)+8,R(3));
  R(3)=0xcu;
  R(0)=R(15);
  R(15)-=R(3);
  R(0)+=0x68u;
  R(1)=R(15);
  R(3)=LD32(R(0));
  R(1)+=0x68u;
  R(2)=LD32(R(0)+4);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(0)+8);
  ST32(R(15)+8,R(3));
  R(3)=0xcu;
  R(15)-=R(3);
  R(3)=LD32(R(1));
  R(2)=LD32(R(1)+4);
  R(0)=R(15);
  ST32(R(15),R(3));
  R(0)+=0x50u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(1)+8);
  ST32(R(15)+8,R(3));
  { c->pr=0x8c017414u; {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} f_8c01711a(c); }
  R(15)+=0x40u;
  R(0)=LD32(R(12));
  R(1)=0x40u;
  R(5)=R(13);
  R(0)+=R(11);
  R(3)=LD32(R(1)+R(0));
  { uint32_t tg=R(3); c->pr=0x8c017424u; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(15)+44,R(0));
  R(0)=0x44u;
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c017434u; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(15)+48,R(0));
  R(0)=0x48u;
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c017444u; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(15)+52,R(0));
  R(0)=0x40u;
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c017454u; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(15)+32,R(0));
  R(0)=0x44u;
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c017464u; R(4)=R(10); sh4_call(c,tg); }
  ST32(R(15)+36,R(0));
  R(0)=0x48u;
  R(3)=LD32(R(12));
  R(5)=R(13);
  R(3)+=R(11);
  R(2)=LD32(R(3)+R(0));
  { uint32_t tg=R(2); c->pr=0x8c017474u; R(4)=R(10); sh4_call(c,tg); }
  R(3)=R(15);
  R(2)=0xcu;
  ST32(R(15)+40,R(0));
  R(10)=R(15);
  R(15)-=R(2);
  R(3)+=0x50u;
  R(0)=R(15);
  R(2)=LD32(R(3));
  R(0)+=0x68u;
  R(1)=LD32(R(3)+4);
  R(10)+=0x8u;
  ST32(R(15),R(2));
  ST32(R(15)+4,R(1));
  R(2)=LD32(R(3)+8);
  R(3)=0xcu;
  R(1)=0x80u;
  ST32(R(15)+8,R(2));
  R(15)-=R(3);
  R(3)=LD32(R(0));
  R(1)+=R(15);
  R(2)=LD32(R(0)+4);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(0)+8);
  ST32(R(15)+8,R(3));
  R(3)=0xcu;
  R(15)-=R(3);
  R(3)=LD32(R(1));
  R(2)=LD32(R(1)+4);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(1)+8);
  ST32(R(15)+8,R(3));
  R(3)=0xcu;
  R(0)=R(15);
  R(15)-=R(3);
  R(0)+=0x50u;
  R(1)=R(15);
  R(3)=LD32(R(0));
  R(1)+=0x50u;
  R(2)=LD32(R(0)+4);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(0)+8);
  ST32(R(15)+8,R(3));
  R(3)=0xcu;
  R(15)-=R(3);
  R(3)=LD32(R(1));
  R(2)=LD32(R(1)+4);
  ST32(R(15),R(3));
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(1)+8);
  ST32(R(15)+8,R(3));
  { c->pr=0x8c0174e2u; {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);} f_8c01711a(c); }
  R(15)+=0x40u;
  {  goto L8c017520; }
L8c017520:;
  R(0)=LD32(R(15)+20);
  ST32(R(14)+8,R(0));
  R(3)=LD32(R(15)+24);
  ST32(R(14)+12,R(3));
  R(2)=LD32(R(15)+28);
  ST32(R(14)+16,R(2));
  R(3)=LD32(R(10));
  ST32(R(14)+20,R(3));
  R(2)=LD32(R(10)+4);
  ST32(R(14)+24,R(2));
  R(3)=LD32(R(10)+8);
  ST32(R(14)+28,R(3));
L8c017538:;
  R(0)=LD32(R(12));
  R(0)+=R(11);
  R(0)=LD32(R(0)+24);
  { uint32_t tg=R(0); c->pr=0x8c017542u; R(4)=R(13); sh4_call(c,tg); }
  ST8(R(14)+7,R(0));
  R(0)=R(8);
  ST8(R(14)+5,R(0));
  R(0)=R(9);
  ST8(R(14)+6,R(0));
L8c01754c:;
  R(3)=0x8c1294b8u;
  R(8)=R(9);
  R(10)=LD32(R(3));
  c->t=(R(10)&R(10))==0;
  { uint32_t k=c->t; R(9)=0x1u; if(k) goto L8c0175a8; }
L8c017558:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c017582;
  R(2)=R(8);
  R(3)=R(14);
  R(2)<<=2;
  R(5)=R(10);
  R(3)+=0x28u;
  c->t=R(2)>>31;R(2)<<=1;
  R(1)=0x4u;
  R(2)+=R(3);
  R(1)+=R(2);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  R(1)+=R(11);
  R(3)=LD32(R(1)+36);
  { uint32_t tg=R(3); c->pr=0x8c01757cu; R(4)=R(13); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  { ST32(R(3),R(0)); goto L8c017590; }
L8c017582:;
  R(3)=R(8);
  R(2)=R(14);
  R(3)<<=2;
  R(2)+=0x28u;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  ST32(R(3)+4,R(9));
L8c017590:;
  R(3)=R(8);
  R(2)=R(14);
  R(1)=LD32(R(10));
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(2)+=0x28u;
  R(3)+=R(2);
  ST32(R(3),R(1));
  R(10)=LD32(R(10)+4);
  c->t=(R(10)&R(10))==0;
  { uint32_t k=!c->t; R(8)+=0x1u; if(k) goto L8c017558; }
L8c0175a8:;
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0175b0u; R(4)=R(13); f_8c017062(c); }
  R(5)=LD32(R(15)+4);
  R(6)=R(14);
  { c->pr=0x8c0175b8u; R(4)=R(13); f_8c0170b2(c); }
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
void f_8c0175cc(SH4Ctx *c) {
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
  R(3)=0x8c0601c0u;
  ST32(R(15)+16,R(4));
  R(14)=R(6);
  ST32(R(15),R(7));
  R(5)=LD32(R(15)+56);
  { c->pr=0x8c0175eeu; R(4)=R(14); f_8c0601c0(c); }
  R(11)=0x74u;
  R(9)=0x8c1294d0u;
  c->macl=R(12)*R(11);
  R(3)=LD32(R(9));
  R(0)=0x54u;
  R(8)=0x7fu;
  R(4)=c->macl;
  R(4)+=R(3);
  R(2)=LD32(R(4)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(10)=0x4u; if(k) goto L8c017614; }
  R(0)=LD32(R(4)+R(0));
  R(0)=LD32(R(0));
  ST8(R(14)+4,R(0));
  R(3)=LD32(R(14)+32);
  R(3)|=R(10);
  { ST32(R(14)+32,R(3)); goto L8c017618; }
L8c017614:;
  R(0)=R(8);
  ST8(R(14)+4,R(0));
L8c017618:;
  R(4)=R(12);
  R(3)=LD32(R(9));
  c->macl=R(4)*R(11);
  R(0)=0x64u;
  R(5)=R(12);
  R(13)=c->macl;
  R(13)+=R(3);
  R(13)=LD32(R(13)+R(0));
  { c->pr=0x8c01762cu; R(4)=LD32(R(15)+16); f_8c016a8e(c); }
  R(4)=R(0);
  R(0)=R(13);
  c->t=(int32_t)R(0)==127;
  if(!c->t) goto L8c01763a;
  R(0)=R(4);
  c->t=(int32_t)R(0)==127;
  if(c->t) goto L8c017652;
L8c01763a:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(3)=0xfffffff2u;
  R(0)=R(0)&0xFF;
  c->macl=R(0)*R(13);
  R(0)=c->macl;
  c->macl=R(0)*R(4);
  R(0)=c->macl;
  R(0)=sh4_shad(R(0),R(3));
  ST8(R(14)+4,R(0));
  R(2)=LD32(R(14)+32);
  R(2)|=R(10);
  ST32(R(14)+32,R(2));
L8c017652:;
  R(3)=LD32(R(15));
  R(13)=R(15);
  R(13)+=0x34u;
  ST32(R(14),R(3));
  R(3)=LD32(R(13));
  R(4)=R(3);
  ST32(R(15),R(3));
  R(4)=LD32(R(4)+4);
  R(0)=R(4);
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c017676;
  R(0)=R(4);
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c017704;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c017704;
L8c017676:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0176c0;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+12);
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(13));
  R(3)=LD32(R(2)+16);
  { ST32(R(15)+4,R(3)); goto L8c0176d0; }
L8c0176c0:;
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x8c06147eu;
  R(6)=R(15);
  R(6)+=0x4u;
  R(5)+=0x8u;
  { c->pr=0x8c0176d0u; R(4)=LD32(R(4)+12); f_8c06147e(c); }
L8c0176d0:;
  c->macl=R(12)*R(11);
  R(3)=LD32(R(9));
  R(7)=0x0u;
  R(6)=R(7);
  R(2)=c->macl;
  R(2)+=R(3);
  R(3)=LD32(R(13));
  R(1)=LD32(R(2)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(15);
  R(5)+=0x10u;
  { uint32_t tg=R(1); c->pr=0x8c0176eau; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
  R(15)+=0x4u;
  R(3)=0x8c0612c0u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0176f4u; R(4)=LD32(R(15)+12); f_8c0612c0(c); }
  R(2)=LD32(R(15)+4);
  R(3)=0x8c0612c0u;
  R(0)+=R(2);
  ST32(R(15)+12,R(0));
  R(5)=LD32(R(14));
  { c->pr=0x8c017702u; R(4)=R(0); f_8c0612c0(c); }
  ST32(R(14),R(0));
L8c017704:;
  R(2)=LD32(R(13));
  R(4)=R(2);
  ST32(R(15),R(2));
  R(4)=LD32(R(4)+4);
  R(0)=R(4);
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c017720;
  R(0)=R(4);
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c0177b6;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0177b6;
L8c017720:;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c017736;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+12);
  ST32(R(15)+8,R(3));
  R(2)=LD32(R(13));
  R(3)=LD32(R(2)+16);
  { ST32(R(15)+4,R(3)); goto L8c017746; }
L8c017736:;
  R(4)=LD32(R(15));
  R(5)=R(15);
  R(3)=0x8c06147eu;
  R(6)=R(15);
  R(6)+=0x4u;
  R(5)+=0x8u;
  { c->pr=0x8c017746u; R(4)=LD32(R(4)+16); f_8c06147e(c); }
L8c017746:;
  c->macl=R(12)*R(11);
  R(3)=LD32(R(9));
  R(6)=0x0u;
  R(5)=R(6);
  R(2)=c->macl;
  R(2)+=R(3);
  R(3)=LD32(R(13));
  R(1)=LD32(R(2)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(15);
  R(7)+=0x10u;
  { uint32_t tg=R(1); c->pr=0x8c017760u; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
  R(15)+=0x4u;
  R(3)=0x8c0612c0u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c01776au; R(4)=LD32(R(15)+12); f_8c0612c0(c); }
  R(2)=LD32(R(15)+4);
  R(0)+=R(2);
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c017778;
  { R(4)>>=16; goto L8c01777e; }
L8c017778:;
  R(4)=~R(4);
  R(4)>>=16;
  R(4)=~R(4);
L8c01777e:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c017788;
  R(0)=0x0u;
  { ST8(R(14)+4,R(0)); goto L8c0177b0; }
L8c017788:;
  c->t=(int32_t)R(4)>(int32_t)R(8);
  if(c->t) goto L8c0177a6;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(10))==0;
  if(c->t) goto L8c0177a0;
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  R(3)=0xfffffff9u;
  R(0)=R(0)&0xFF;
  c->macl=R(4)*R(0);
  R(0)=c->macl;
  { R(0)=sh4_shad(R(0),R(3)); goto L8c0177a2; }
L8c0177a0:;
  R(0)=R(4);
L8c0177a2:;
  { ST8(R(14)+4,R(0)); goto L8c0177b0; }
L8c0177a6:;
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(10))==0;
  if(!c->t) goto L8c0177b0;
  R(0)=R(8);
  ST8(R(14)+4,R(0));
L8c0177b0:;
  R(3)=LD32(R(14)+32);
  R(3)|=R(10);
  ST32(R(14)+32,R(3));
L8c0177b6:;
  R(10)=LD32(R(13));
  R(0)=LD32(R(10)+4);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0177cc; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c017862;
  R(2)=LD32(R(10)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c017862;
L8c0177cc:;
  R(0)=LD32(R(10)+4);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c017800;
  R(2)=LD32(R(10)+12);
  ST32(R(15)+8,R(2));
  R(3)=LD32(R(13));
  R(2)=LD32(R(3)+16);
  { ST32(R(15)+4,R(2)); goto L8c01780e; }
L8c017800:;
  R(5)=R(15);
  R(2)=0x8c06147eu;
  R(6)=R(15);
  R(5)+=0x8u;
  R(6)+=0x4u;
  { c->pr=0x8c01780eu; R(4)=LD32(R(10)+20); f_8c06147e(c); }
L8c01780e:;
  c->macl=R(12)*R(11);
  R(3)=LD32(R(9));
  R(7)=0x0u;
  R(5)=R(7);
  R(12)=c->macl;
  R(12)+=R(3);
  R(3)=LD32(R(13));
  R(2)=LD32(R(12)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=R(15);
  R(6)+=0x10u;
  { uint32_t tg=R(2); c->pr=0x8c017828u; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
  R(15)+=0x4u;
  R(3)=0x8c0612c0u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c017832u; R(4)=LD32(R(15)+12); f_8c0612c0(c); }
  R(2)=LD32(R(15)+4);
  R(0)+=R(2);
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c017840;
  { R(4)>>=16; goto L8c017846; }
L8c017840:;
  R(4)=~R(4);
  R(4)>>=16;
  R(4)=~R(4);
L8c017846:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c017850;
  R(0)=0x0u;
  { ST8(R(14)+5,R(0)); goto L8c01785c; }
L8c017850:;
  c->t=(int32_t)R(4)>(int32_t)R(8);
  if(!c->t) goto L8c017858;
  { R(0)=R(8); goto L8c01785a; }
L8c017858:;
  R(0)=R(4);
L8c01785a:;
  ST8(R(14)+5,R(0));
L8c01785c:;
  R(0)=LD32(R(14)+32);
  R(0)|=0x1u;
  ST32(R(14)+32,R(0));
L8c017862:;
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
void f_8c017876(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffacu;
  R(2)=0x8c0c4450u;
  R(14)=R(15);
  R(14)+=0xcu;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(7));
  R(7)=R(14);
  R(3)=LD32(R(2));
  ST32(R(15)+48,R(3));
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c017894u; R(5)=LD32(R(15)); f_8c0171cc(c); }
  R(0)=0x60u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+R(0));
  R(0)=0x68u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+12);
  R(6)=LD32(R(15)+16);
  R(7)=LD32(R(15)+R(0));
  { c->pr=0x8c0178a8u; R(4)=LD32(R(15)+8); f_8c0175cc(c); }
  R(15)+=0x5cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0178b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+8);
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0178cc;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0178d0;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0178d0;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0178d0;
  {  goto L8c0178d4; }
L8c0178cc:;
  { R(14)=LD32(R(4)+12); goto L8c0178d6; }
L8c0178d0:;
  { R(14)=LD32(R(4)+20); goto L8c0178d6; }
L8c0178d4:;
  R(14)=0x0u;
L8c0178d6:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017920;
  R(3)=0x8c061fa0u;
  R(4)=R(14);
  { c->pr=0x8c0178e2u; c->t=R(4)>>31;R(4)<<=1; f_8c061fa0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x10000u;
  R(0)-=R(14);
  R(0)+=R(2);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c017920:;
  R(0)=0x10000u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c017928(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c01792c(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c017930(SH4Ctx *c) {
  R(4)=0x10000u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c017938;
  ST32(R(5),R(4));
L8c017938:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c01793e;
  ST32(R(6),R(4));
L8c01793e:;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c017944;
  ST32(R(7),R(4));
L8c017944:;
  {  return; }
}
void f_8c017948(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c01794c(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c017950(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c01795e;
  R(2)=0x10000u;
  R(4)=0x0u;
  ST32(R(5),R(2));
  ST32(R(5)+4,R(4));
  ST32(R(5)+8,R(4));
L8c01795e:;
  {  return; }
}
void f_8c017962(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c017970;
  R(2)=0x10000u;
  R(4)=0x0u;
  ST32(R(5),R(4));
  ST32(R(5)+4,R(2));
  ST32(R(5)+8,R(4));
L8c017970:;
  {  return; }
}
void f_8c017974(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c017982;
  R(2)=0x10000u;
  R(4)=0x0u;
  ST32(R(5),R(4));
  ST32(R(5)+4,R(4));
  ST32(R(5)+8,R(2));
L8c017982:;
  {  return; }
}
void f_8c017986(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c01798a(SH4Ctx *c) {
  R(0)=0x10000u;
  {  return; }
}
void f_8c017990(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0179c0(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0179c4(SH4Ctx *c) {
  R(0)=0x10000u;
  {  return; }
}
void f_8c0179ca(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c0179ce(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c0179d2(SH4Ctx *c) {
  R(3)=0x8c0c4450u;
  R(4)=0x0u;
  R(5)=0x8c1294b8u;
  R(2)=0x8c017986u;
  ST32(R(5),R(4));
  ST32(R(5)+4,R(4));
  R(1)=R(2);
  ST32(R(5)+8,R(4));
  ST32(R(3),R(4));
  R(4)=0x8c0c445cu;
  ST32(R(4),R(2));
  ST32(R(4)+4,R(2));
  R(2)=0x8c01798au;
  ST32(R(4)+8,R(1));
  ST32(R(4)+12,R(1));
  ST32(R(4)+16,R(1));
  ST32(R(4)+20,R(1));
  ST32(R(4)+36,R(2));
  R(2)=0x8c017986u;
  ST32(R(4)+40,R(1));
  ST32(R(4)+44,R(2));
  ST32(R(4)+24,R(1));
  R(1)=0x8c01798au;
  ST32(R(4)+28,R(2));
  R(2)=0x8c017990u;
  ST32(R(4)+32,R(1));
  { ST32(R(4)+48,R(2)); return; }
}
void f_8c017a0a(SH4Ctx *c) {
  R(1)=0x8c0c4458u;
  R(3)=0x0u;
  R(5)=R(3);
  R(4)=0x8c0c4490u;
  ST32(R(1),R(3));
  R(3)=0x8c018a9eu;
  {  { f_8c018a9e(c); return; } }
}
void f_8c017a24(SH4Ctx *c) {
  R(3)=0x8c1294c4u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c017a36;
  { R(14)=LD32(R(5)+4); goto L8c017a38; }
L8c017a36:;
  R(14)=0x0u;
L8c017a38:;
  R(13)=0x8c064160u;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c017a52;
L8c017a3e:;
  { uint32_t tg=R(13); c->pr=0x8c017a42u; R(4)=0x0u; sh4_call(c,tg); }
  R(5)=R(14);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c017a4c;
  { R(14)=LD32(R(5)+4); goto L8c017a4e; }
L8c017a4c:;
  R(14)=0x0u;
L8c017a4e:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c017a3e;
L8c017a52:;
  R(3)=0x8c0c4454u;
  R(2)=0x0u;
  ST32(R(3),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c017a60(SH4Ctx *c) {
  R(5)=0x8c1294acu;
  R(4)=0x0u;
  ST32(R(5),R(4));
  ST32(R(5)+4,R(4));
  { ST32(R(5)+8,R(4)); return; }
}
void f_8c017ac0(SH4Ctx *c) {
  {  return; }
}
void f_8c017ac4(SH4Ctx *c) {
  R(2)=0x8c0c4458u;
  R(3)=LD32(R(2));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c017ae2;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c017ae2;
  R(0)=0x74u;
  R(2)=0x8c1294d0u;
  c->macl=R(4)*R(0);
  R(3)=LD32(R(2));
  R(1)=0x60u;
  R(0)=c->macl;
  R(0)+=R(3);
  { R(0)=LD32(R(1)+R(0)); return; }
L8c017ae2:;
  R(0)=0x0u;
  {  return; }
}
void f_8c017ae2(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c017ae8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c063360u;
  { c->pr=0x8c017af4u; R(14)=R(4); f_8c063360(c); }
  R(2)=0x8c0634a0u;
  { c->pr=0x8c017afau; R(4)=R(14); f_8c0634a0(c); }
  R(3)=0x8c063a20u;
  { c->pr=0x8c017b00u;  f_8c063a20(c); }
  R(2)=0x8c0614e0u;
  { c->pr=0x8c017b06u; R(4)=R(14); f_8c0614e0(c); }
  { c->pr=0x8c017b0au;  f_8c0179d2(c); }
  { c->pr=0x8c017b0eu;  f_8c017a60(c); }
  R(3)=0x8c060658u;
  { c->pr=0x8c017b14u; R(4)=R(14); f_8c060658(c); }
  R(3)=0x8c061ac8u;
  ST32(R(15),R(0));
  { c->pr=0x8c017b1cu; R(4)=0x0u; f_8c061ac8(c); }
  R(2)=0x8c063374u;
  { c->pr=0x8c017b22u;  f_8c063374(c); }
  R(2)=0x8c0c44e8u;
  R(3)=0x1u;
  ST32(R(2),R(3));
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c017b80(SH4Ctx *c) {
  R(4)=0x8c0c44e8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c017bd6;
  R(3)=0x0u;
  { c->pr=0x8c017b90u; ST32(R(4),R(3)); f_8c0186fc(c); }
  R(1)=0x8c063368u;
  { c->pr=0x8c017b96u;  f_8c063368(c); }
  R(3)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x638u;
  { c->pr=0x8c017ba0u;  f_8c063378(c); }
  { c->pr=0x8c017ba4u;  f_8c016fa2(c); }
  R(3)=0x8c1294d0u;
  R(2)=0x8c064160u;
  R(5)=LD32(R(3));
  { c->pr=0x8c017baeu; R(4)=0x0u; f_8c064160(c); }
  { c->pr=0x8c017bb2u;  f_8c017a24(c); }
  R(2)=0x8c061afcu;
  { c->pr=0x8c017bb8u;  f_8c061afc(c); }
  R(3)=0x8c060c72u;
  { c->pr=0x8c017bbeu;  f_8c060c72(c); }
  R(2)=0x8c063364u;
  { c->pr=0x8c017bc4u;  f_8c063364(c); }
  R(3)=0x8c063c20u;
  { c->pr=0x8c017bcau;  f_8c063c20(c); }
  R(2)=0x8c0634c2u;
  { c->pr=0x8c017bd0u;  f_8c0634c2(c); }
  R(3)=0x8c0614e4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0614e4(c); return; } }
L8c017bd6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c017bdc(SH4Ctx *c) {
  R(5)=0x8c0c44ecu;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c017be8;
  R(2)=0x0u;
  { ST32(R(5),R(2)); goto L8c017bec; }
L8c017be8:;
  R(1)=0x1u;
  ST32(R(5),R(1));
L8c017bec:;
  R(3)=0x8c0606f2u;
  {  { f_8c0606f2(c); return; } }
}
void f_8c017c40(SH4Ctx *c) {
  R(3)=0x8c0606e0u;
  {  { f_8c0606e0(c); return; } }
}
void f_8c017c46(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffb4u;
  R(3)=0x8c063368u;
  { c->pr=0x8c017c5cu; ST32(R(15),R(4)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x6a0u;
  { c->pr=0x8c017c66u;  f_8c063378(c); }
  R(2)=0x8c0c4450u;
  R(12)=R(15);
  R(1)=0x8c1294acu;
  R(3)=LD32(R(2));
  ST32(R(15)+40,R(3));
  R(14)=LD32(R(1));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)+=0x4u; if(k) goto L8c017c7c; }
  { R(13)=LD32(R(14)+52); goto L8c017c7e; }
L8c017c7c:;
  R(13)=0x0u;
L8c017c7e:;
  R(10)=0x8c1294d0u;
  c->t=(R(14)&R(14))==0;
  R(9)=0x8c060860u;
  { uint32_t k=c->t; R(11)=0x74u; if(k) goto L8c017d36; }
L8c017c88:;
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c017d20;
  R(3)=LD32(R(14)+12);
  R(0)=0x54u;
  R(2)=LD32(R(10));
  c->macl=R(3)*R(11);
  R(1)=LD32(R(15));
  R(3)=c->macl;
  R(3)+=R(2);
  R(0)=LD32(R(3)+R(0));
  c->t=R(0)==R(1);
  if(!c->t) goto L8c017d26;
  R(2)=LD32(R(14)+36);
  R(7)=R(12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(14)+12);
  R(5)=LD32(R(14)+8);
  { c->pr=0x8c017cb4u; R(4)=LD32(R(14)+4); f_8c017876(c); }
  R(15)+=0x8u;
  R(5)=R(12);
  { uint32_t tg=R(9); c->pr=0x8c017cbcu; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c017d26;
  R(2)=0x8c016bd6u;
  { c->pr=0x8c017cc6u; R(4)=R(14); f_8c016bd6(c); }
  {  goto L8c017d26; }
L8c017d20:;
  R(2)=0x8c016bd6u;
  { c->pr=0x8c017d26u; R(4)=R(14); f_8c016bd6(c); }
L8c017d26:;
  R(14)=R(13);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017d30;
  { R(13)=LD32(R(14)+52); goto L8c017d32; }
L8c017d30:;
  R(13)=0x0u;
L8c017d32:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c017c88;
L8c017d36:;
  R(2)=0x8c063374u;
  { c->pr=0x8c017d3cu;  f_8c063374(c); }
  R(15)+=0x4cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c017d4e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff3cu;
  R(15)+=R(0);
  R(4)=0xffffffffu;
  R(3)=0x8c063368u;
  R(12)=R(4);
  R(11)=0x0u;
  R(13)=R(4);
  { c->pr=0x8c017d70u; R(10)=R(4); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x6edu;
  { c->pr=0x8c017d7au;  f_8c063378(c); }
  R(3)=0x8c1294b8u;
  R(9)=0x8c060d3eu;
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017d9c;
L8c017d84:;
  R(5)=0x94u;
  R(3)=0x8c016b00u;
  R(5)+=R(15);
  { c->pr=0x8c017d8eu; R(4)=R(14); f_8c016b00(c); }
  R(5)=0x94u;
  R(5)+=R(15);
  { uint32_t tg=R(9); c->pr=0x8c017d96u; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(14)=LD32(R(14)+4);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c017d84;
L8c017d9c:;
  R(1)=0x8c1294acu;
  R(0)=0x70u;
  R(2)=0x8c0c4450u;
  R(8)=R(15);
  R(3)=LD32(R(2));
  ST32(R(15)+R(0),R(3));
  R(14)=LD32(R(1));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(8)+=0x4cu; if(k) goto L8c017db4; }
  {  goto L8c017ec4; }
L8c017db4:;
  { R(9)=0x0u; goto L8c017f02; }
L8c017e00:;
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c017eb8;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(3)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c017e32;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c017ea4;
  R(2)=LD32(R(14)+12);
  R(3)=0x74u;
  R(0)=0x4cu;
  c->macl=R(2)*R(3);
  ST32(R(15),R(2));
  R(2)=0x8c1294d0u;
  R(5)=LD32(R(14)+8);
  R(3)=c->macl;
  R(1)=LD32(R(2));
  R(3)+=R(1);
  R(0)=LD32(R(3)+R(0));
  { uint32_t tg=R(0); c->pr=0x8c017e2eu; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  ST32(R(14),R(0));
  R(6)=R(0);
L8c017e32:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c017ea4;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c017e5a;
  R(3)=0x8c0c4450u;
  R(11)=R(15);
  R(11)+=0x4u;
  R(2)=LD32(R(3));
  R(7)=R(11);
  ST32(R(15)+40,R(2));
  R(12)=LD32(R(14)+8);
  R(10)=LD32(R(14)+12);
  R(13)=LD32(R(14)+4);
  R(5)=R(12);
  R(6)=R(10);
  { c->pr=0x8c017e56u; R(4)=R(13); f_8c0171cc(c); }
  {  goto L8c017e7c; }
L8c017e5a:;
  R(2)=LD32(R(14)+4);
  c->t=R(2)==R(13);
  if(!c->t) goto L8c017e6c;
  R(1)=LD32(R(14)+8);
  c->t=R(1)==R(12);
  if(!c->t) goto L8c017e6c;
  R(2)=LD32(R(14)+12);
  c->t=R(2)==R(10);
  if(c->t) goto L8c017e7c;
L8c017e6c:;
  R(10)=LD32(R(14)+12);
  R(7)=R(11);
  R(12)=LD32(R(14)+8);
  R(13)=LD32(R(14)+4);
  R(6)=R(10);
  R(5)=R(12);
  { c->pr=0x8c017e7cu; R(4)=R(13); f_8c0171cc(c); }
L8c017e7c:;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(6)=R(8);
  R(3)=LD32(R(14)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(14)+36);
  R(5)=LD32(R(14)+12);
  { c->pr=0x8c017e8cu; R(4)=LD32(R(14)+8); f_8c0175cc(c); }
  R(15)+=0x8u;
  R(3)=0x8c060860u;
  R(5)=R(8);
  { c->pr=0x8c017e96u; R(4)=LD32(R(14)+24); f_8c060860(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c017ebe;
  R(3)=0x8c016bd6u;
  { c->pr=0x8c017ea0u; R(4)=R(14); f_8c016bd6(c); }
  {  goto L8c017ebe; }
L8c017ea4:;
  R(3)=0x8c0608e0u;
  { c->pr=0x8c017eaau; R(4)=LD32(R(14)+24); f_8c0608e0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c017ebe;
  R(3)=0x8c016bd6u;
  { c->pr=0x8c017eb4u; R(4)=R(14); f_8c016bd6(c); }
  {  goto L8c017ebe; }
L8c017eb8:;
  R(3)=0x8c016bd6u;
  { c->pr=0x8c017ebeu; R(4)=R(14); f_8c016bd6(c); }
L8c017ebe:;
  R(14)=R(9);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017f00;
L8c017ec4:;
  { R(9)=LD32(R(14)+52); goto L8c017f02; }
L8c017f00:;
  R(9)=0x0u;
L8c017f02:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c017f0a;
  {  goto L8c017e00; }
L8c017f0a:;
  R(3)=0x8c0610e6u;
  { c->pr=0x8c017f10u;  f_8c0610e6(c); }
  R(2)=0x8c063374u;
  { c->pr=0x8c017f16u;  f_8c063374(c); }
  R(1)=0xc4u;
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
void f_8c017f2c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15),R(4));
  R(3)=R(7);
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  ST32(R(15)+12,R(7));
  {uint32_t v=R(7);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+24);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+8);
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(15)+16);
  { c->pr=0x8c017f4au; R(4)=0xffffffffu; f_8c017f80(c); }
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c017f80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff9cu;
  R(14)=0x84u;
  R(9)=R(15);
  R(9)+=0x18u;
  ST32(R(15)+4,R(4));
  R(14)+=R(15);
  R(10)=R(5);
  R(8)=0x0u;
  ST32(R(15),R(7));
  ST32(R(9),R(8));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)=R(6); if(k) goto L8c017fb0; }
  {  goto L8c01821c; }
L8c017fb0:;
  R(3)=0x8c063368u;
  { c->pr=0x8c017fb6u;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x7a3u;
  { c->pr=0x8c017fc0u;  f_8c063378(c); }
  R(1)=0x8c0c4450u;
  R(0)=0x40u;
  R(4)=0x8c0c44e4u;
  R(3)=R(15);
  R(3)+=0x1cu;
  ST32(R(15)+16,R(3));
  R(2)=LD32(R(1));
  ST32(R(15)+R(0),R(2));
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  ST32(R(4),R(2));
  R(2)+=0xffffffffu;
  ST32(R(15)+8,R(2));
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c017fe6;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==-2;
  if(!c->t) goto L8c017fea;
L8c017fe6:;
  R(3)=0x1u;
  ST32(R(4),R(3));
L8c017fea:;
  ST32(R(15)+20,R(8));
  R(11)=0x1u;
  R(12)=LD32(R(14));
  R(0)=LD32(R(12)+4);
  R(0)+=0xffffffffu;
  R(1)=0xbu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c017ffe;
  {  goto L8c018200; }
L8c017ffe:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c018024u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c01800au+R(0));  switch(tg){ case 0x8c01803au: goto L8c01803a; case 0x8c018114u: goto L8c018114; case 0x8c018124u: goto L8c018124; case 0x8c018160u: goto L8c018160; case 0x8c018192u: goto L8c018192; case 0x8c01819cu: goto L8c01819c; case 0x8c018200u: goto L8c018200; default: sh4_bad_jump(c,0x8c018006u,tg); return; } }
L8c01803a:;
  R(3)=0x8c016ba0u;
  { c->pr=0x8c018040u;  f_8c016ba0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(12)=R(0); if(k) goto L8c01804a; }
  {  goto L8c018208; }
L8c01804a:;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01805a;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+8);
  { ST32(R(9),R(3)); goto L8c01806c; }
L8c01805a:;
  c->t=(int32_t)R(0)==10;
  if(!c->t) goto L8c018066;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+8);
  {  goto L8c01806a; }
L8c018066:;
  R(1)=LD32(R(14));
  R(3)=LD32(R(1)+8);
L8c01806a:;
  ST32(R(9),R(3));
L8c01806c:;
  R(2)=LD32(R(9));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c01810a;
  R(2)=LD32(R(14));
  { c->pr=0x8c018078u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c0178b0(c); }
  ST32(R(15)+16,R(0));
  R(5)=R(10);
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(6)=R(13);
  R(3)=LD32(R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+28);
  { c->pr=0x8c01808au; R(4)=LD32(R(15)+16); f_8c017876(c); }
  R(2)=R(12);
  R(2)+=0x20u;
  R(0)=0x9cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(9));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+20);
  R(3)=0x8c060704u;
  R(7)=LD32(R(15)+28);
  R(6)=LD32(R(15)+R(0));
  { c->pr=0x8c0180a2u; R(4)=LD32(R(15)+36); f_8c060704(c); }
  R(15)+=0x14u;
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c018100; }
  R(3)=LD32(R(15)+8);
  R(7)=R(13);
  R(6)=R(10);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+16);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(9));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+20);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+28);
  R(3)=0x8c016c2cu;
  { c->pr=0x8c0180ccu; R(4)=R(12); f_8c016c2c(c); }
  R(15)+=0x18u;
  R(0)=0x88u;
  R(2)=LD32(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0180da;
  {  goto L8c01820a; }
L8c0180da:;
  R(3)=0x1u;
  { ST32(R(15)+20,R(3)); goto L8c01820a; }
L8c018100:;
  R(3)=0x8c016bd6u;
  { c->pr=0x8c018106u; R(4)=R(12); f_8c016bd6(c); }
  { R(11)=R(8); goto L8c01820a; }
L8c01810a:;
  R(3)=0x8c016bd6u;
  { c->pr=0x8c018110u; R(4)=R(12); f_8c016bd6(c); }
  { R(11)=R(8); goto L8c01820a; }
L8c018114:;
  R(3)=LD32(R(12)+8);
  R(5)=R(13);
  R(2)=0x8c016f02u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c018120u; R(4)=R(10); f_8c016f02(c); }
  { R(15)+=0x4u; goto L8c01820a; }
L8c018124:;
  R(2)=0x8c016e8eu;
  R(5)=R(13);
  { c->pr=0x8c01812cu; R(4)=R(10); f_8c016e8e(c); }
  {  goto L8c01820a; }
L8c018160:;
  R(2)=LD32(R(12)+8);
  R(5)=R(13);
  R(3)=0x8c016f02u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c01816cu; R(4)=R(10); f_8c016f02(c); }
  R(0)=0x8cu;
  R(5)=R(10);
  R(6)=R(13);
  R(2)=LD32(R(15)+R(0));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c018182u; R(4)=LD32(R(15)+16); f_8c017f80(c); }
  R(15)+=0xcu;
  c->t=(int32_t)R(0)==-2;
  { uint32_t k=!c->t; ST32(R(15)+8,R(0)); if(k) goto L8c01818c; }
  R(11)=R(8);
L8c01818c:;
  R(2)=0x1u;
  { ST32(R(15)+20,R(2)); goto L8c01820a; }
L8c018192:;
  R(2)=0x8c060d2cu;
  { c->pr=0x8c018198u; R(4)=LD32(R(12)+8); f_8c060d2c(c); }
  {  goto L8c01820a; }
L8c01819c:;
  R(2)=LD32(R(12)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0181bc;
  R(3)=0x74u;
  R(5)=R(13);
  c->macl=R(5)*R(3);
  R(1)=0x8c1294d0u;
  R(0)=0x64u;
  R(4)=LD32(R(12)+12);
  R(2)=LD32(R(1));
  R(5)=c->macl;
  R(5)+=R(2);
  { c->pr=0x8c0181b8u; ST32(R(5)+R(0),R(4)); f_8c017d4e(c); }
  {  goto L8c01820a; }
L8c0181bc:;
  R(3)=0x8c01694cu;
  R(5)=R(13);
  R(6)=LD32(R(12)+12);
  { c->pr=0x8c0181c6u; R(4)=R(10); f_8c01694c(c); }
  { c->pr=0x8c0181cau;  f_8c017d4e(c); }
  {  goto L8c01820a; }
L8c018200:;
  R(2)=0x8c0633e0u;
  R(5)=0x8c0b8f18u;
  { c->pr=0x8c018208u; R(4)=0x13u; f_8c0633e0(c); }
L8c018208:;
  R(11)=R(8);
L8c01820a:;
  R(2)=0x8c016880u;
  R(5)=LD32(R(14));
  { c->pr=0x8c018212u; R(4)=R(13); f_8c016880(c); }
  R(3)=0x8c063374u;
  { c->pr=0x8c018218u;  f_8c063374(c); }
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c018220;
L8c01821c:;
  { R(0)=0xfffffffeu; goto L8c018234; }
L8c018220:;
  R(0)=0x88u;
  R(3)=LD32(R(15)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c018232;
  R(3)=LD32(R(15)+20);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c018232;
  { R(0)=0xffffffffu; goto L8c018234; }
L8c018232:;
  R(0)=LD32(R(15)+8);
L8c018234:;
  R(15)+=0x64u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c018248(SH4Ctx *c) {
  R(3)=0x8c060d2cu;
  {  { f_8c060d2c(c); return; } }
}
void f_8c018280(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c063368u;
  ST32(R(15),R(4));
  { c->pr=0x8c018290u; R(13)=0x0u; f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x849u;
  { c->pr=0x8c01829au;  f_8c063378(c); }
  R(3)=0x8c1294acu;
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(4)=0x1u; if(k) goto L8c0182b6; }
L8c0182a4:;
  R(2)=LD32(R(14)+40);
  R(3)=LD32(R(15));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0182b0;
  { R(13)=R(4); goto L8c0182b6; }
L8c0182b0:;
  R(14)=LD32(R(14)+52);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0182a4;
L8c0182b6:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0182c4;
  R(3)=0x8c060f98u;
  { c->pr=0x8c0182c0u; R(4)=LD32(R(14)+24); f_8c060f98(c); }
  { R(13)=R(0); goto L8c0182c6; }
L8c0182c4:;
  R(13)=0xfffffffeu;
L8c0182c6:;
  R(3)=0x8c063374u;
  { c->pr=0x8c0182ccu;  f_8c063374(c); }
  R(0)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0182d8(SH4Ctx *c) {
  R(3)=0x8c1294acu;
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) { f_8c018326(c); return; } }
  { f_8c0182e6(c); return; }
}
void f_8c0182e6(SH4Ctx *c) {
L8c0182e6:;
  R(3)=LD32(R(14)+40);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c018320;
  { R(6)=R(5); { f_8c018326(c); return; } }
L8c018320:;
  R(14)=LD32(R(14)+52);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0182e6;
  { f_8c018326(c); return; }
}
void f_8c018320(SH4Ctx *c) {
  R(14)=LD32(R(14)+52);
  c->t=(R(14)&R(14))==0;
  if(!c->t) { f_8c0182e6(c); return; }
  { f_8c018326(c); return; }
}
void f_8c018326(SH4Ctx *c) {
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c018332;
  R(2)=0x8c061000u;
  R(4)=LD32(R(14)+24);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c061000(c); return; } }
L8c018332:;
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c018338(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c063368u;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  { c->pr=0x8c018346u; ST32(R(15)+4,R(6)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x89bu;
  { c->pr=0x8c018350u;  f_8c063378(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c018368;
  R(5)=LD32(R(15)+8);
  R(7)=0x0u;
  R(3)=0x8c016e2cu;
  R(6)=LD32(R(15)+4);
  { c->pr=0x8c018362u; R(4)=LD32(R(15)); f_8c016e2c(c); }
  R(2)=0x0u;
  R(4)=R(0);
  ST32(R(4),R(2));
L8c018368:;
  R(15)+=0xcu;
  R(3)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c018370(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c063368u;
  ST32(R(15),R(4));
  { c->pr=0x8c01837cu; ST32(R(15)+4,R(5)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x8c1u;
  { c->pr=0x8c018386u;  f_8c063378(c); }
  R(2)=LD32(R(15));
  R(3)=0x74u;
  R(5)=LD32(R(15)+4);
  R(6)=0x20u;
  c->macl=R(2)*R(3);
  R(2)=0x8c1294d0u;
  R(3)=0x8c0685b4u;
  R(1)=LD32(R(2));
  R(4)=c->macl;
  R(4)+=R(1);
  { c->pr=0x8c01839eu; R(4)+=0x34u; f_8c0685b4(c); }
  R(15)+=0x8u;
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c018400(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c063368u;
  ST32(R(15),R(4));
  { c->pr=0x8c01840cu; ST32(R(15)+4,R(5)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x8d6u;
  { c->pr=0x8c018416u;  f_8c063378(c); }
  R(3)=0x8c016e8eu;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c01841eu; R(4)=LD32(R(15)); f_8c016e8e(c); }
  R(3)=0x8c0168a0u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c018426u; R(4)=LD32(R(15)); f_8c0168a0(c); }
  R(15)+=0x8u;
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c01842e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c018436u;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x8eeu;
  { c->pr=0x8c018440u;  f_8c063378(c); }
  R(3)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c018446(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c01844eu; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x904u;
  { c->pr=0x8c018458u;  f_8c063378(c); }
  R(3)=0x8c016f50u;
  { c->pr=0x8c01845eu; R(4)=LD32(R(15)); f_8c016f50(c); }
  R(4)=LD32(R(15));
  R(3)=0x74u;
  R(1)=0x8c1294d0u;
  R(0)=0x64u;
  c->macl=R(4)*R(3);
  R(2)=LD32(R(1));
  R(5)=0x7fu;
  R(4)=c->macl;
  R(4)+=R(2);
  ST32(R(4)+R(0),R(5));
  R(15)+=0x4u;
  R(3)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c0184c0(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c0184ccu;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x918u;
  { c->pr=0x8c0184d6u;  f_8c063378(c); }
  R(3)=0x8c016fa2u;
  { c->pr=0x8c0184dcu;  f_8c016fa2(c); }
  R(1)=0x8c0c4458u;
  R(4)=0x0u;
  R(12)=0x8c1294d0u;
  R(13)=0x74u;
  R(2)=LD32(R(1));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(7)=0x7fu; if(k) goto L8c018504; }
L8c0184ec:;
  R(5)=R(4);
  R(2)=LD32(R(12));
  c->macl=R(5)*R(13);
  R(4)+=0x1u;
  R(0)=0x64u;
  R(5)=c->macl;
  R(5)+=R(2);
  ST32(R(5)+R(0),R(7));
  R(3)=LD32(R(1));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(6)=R(7); if(k) goto L8c0184ec; }
L8c018504:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(1)=0x8c063374u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} { f_8c063374(c); return; } }
}
void f_8c01850e(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c018516u; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x92bu;
  { c->pr=0x8c018520u;  f_8c063378(c); }
  R(3)=0x8c017010u;
  { c->pr=0x8c018526u; R(4)=LD32(R(15)); f_8c017010(c); }
  R(15)+=0x4u;
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c01852e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c063368u;
  { c->pr=0x8c01853au;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x93fu;
  { c->pr=0x8c018544u;  f_8c063378(c); }
  R(4)=0x8c0c4450u;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0185c0;
  R(2)=0x8c0633e0u;
  R(5)=0x8c0b8f2cu;
  { c->pr=0x8c018554u; R(4)=0x1du; f_8c0633e0(c); }
  R(3)=0x8c063374u;
  { c->pr=0x8c01855au;  f_8c063374(c); }
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0185c0:;
  R(2)=LD32(R(4));
  R(5)=0x10u;
  R(3)=0x8c063d46u;
  R(2)+=0x1u;
  ST32(R(4),R(2));
  { c->pr=0x8c0185ceu; R(4)=0x0u; f_8c063d46(c); }
  R(14)=R(0);
  R(4)=0x0u;
  ST32(R(14)+4,R(4));
  ST32(R(14)+8,R(4));
  ST32(R(14)+12,R(4));
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0185e4;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(14)+4);
  ST32(R(3)+8,R(2));
L8c0185e4:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0185f0;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(14)+8);
  ST32(R(3)+4,R(2));
L8c0185f0:;
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01861a;
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c01860c;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+12);
  ST32(R(1),R(3));
L8c01860c:;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c01861a;
  R(3)=LD32(R(14)+8);
  R(1)=LD32(R(14)+12);
  ST32(R(1)+4,R(3));
L8c01861a:;
  ST32(R(14)+4,R(4));
  ST32(R(14)+8,R(4));
  ST32(R(14)+12,R(4));
  ST32(R(14)+4,R(4));
  R(4)=0x8c1294b8u;
  R(2)=LD32(R(4)+4);
  ST32(R(14)+8,R(2));
  ST32(R(14)+12,R(4));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c018634;
  { ST32(R(4),R(14)); goto L8c018638; }
L8c018634:;
  R(2)=LD32(R(4)+4);
  ST32(R(2)+4,R(14));
L8c018638:;
  R(2)=0x8c060d32u;
  ST32(R(4)+4,R(14));
  R(3)=LD32(R(4)+8);
  R(3)+=0x1u;
  ST32(R(4)+8,R(3));
  { c->pr=0x8c018646u; R(4)=0x0u; f_8c060d32(c); }
  R(3)=0x8c063374u;
  ST32(R(14),R(0));
  { c->pr=0x8c01864eu; ST32(R(15),R(14)); f_8c063374(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c018680(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c01868au; R(14)=R(4); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x965u;
  { c->pr=0x8c018694u;  f_8c063378(c); }
  R(4)=0x8c0c4450u;
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  ST32(R(4),R(3));
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0186a8;
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(14)+4);
  ST32(R(2)+8,R(3));
L8c0186a8:;
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0186b4;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(14)+8);
  ST32(R(2)+4,R(3));
L8c0186b4:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0186de;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(2)+8);
  R(3)+=0xffffffffu;
  ST32(R(2)+8,R(3));
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(2));
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0186d0;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+12);
  ST32(R(1),R(3));
L8c0186d0:;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0186de;
  R(3)=LD32(R(14)+8);
  R(1)=LD32(R(14)+12);
  ST32(R(1)+4,R(3));
L8c0186de:;
  R(2)=0x8c060d38u;
  R(4)=0x0u;
  ST32(R(14)+4,R(4));
  ST32(R(14)+8,R(4));
  ST32(R(14)+12,R(4));
  { c->pr=0x8c0186ecu; R(4)=LD32(R(14)); f_8c060d38(c); }
  R(3)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c0186f4u; R(4)=0x0u; f_8c064160(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c063374(c); return; } }
}
void f_8c0186fc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c01870eu;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x980u;
  { c->pr=0x8c018718u;  f_8c063378(c); }
  R(2)=0x8c1294b8u;
  R(13)=0x0u;
  R(3)=0x8c0c4450u;
  ST32(R(3),R(13));
  R(14)=LD32(R(2));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c018780;
  { R(12)=LD32(R(14)+4); goto L8c018782; }
L8c018780:;
  R(12)=R(13);
L8c018782:;
  R(11)=0x8c060d38u;
  c->t=(R(14)&R(14))==0;
  R(10)=0x8c064160u;
  if(c->t) goto L8c0187ec;
L8c01878a:;
  { uint32_t tg=R(11); c->pr=0x8c01878eu; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(3)=LD32(R(14)+4);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c01879a;
  R(2)=LD32(R(14)+8);
  R(3)=LD32(R(14)+4);
  ST32(R(3)+8,R(2));
L8c01879a:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0187a6;
  R(2)=LD32(R(14)+4);
  R(3)=LD32(R(14)+8);
  ST32(R(3)+4,R(2));
L8c0187a6:;
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0187d0;
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+12);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c0187c2;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+12);
  ST32(R(1),R(3));
L8c0187c2:;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0187d0;
  R(3)=LD32(R(14)+8);
  R(1)=LD32(R(14)+12);
  ST32(R(1)+4,R(3));
L8c0187d0:;
  R(5)=R(14);
  ST32(R(14)+4,R(13));
  ST32(R(14)+8,R(13));
  ST32(R(14)+12,R(13));
  { uint32_t tg=R(10); c->pr=0x8c0187dcu; R(4)=0x0u; sh4_call(c,tg); }
  R(14)=R(12);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0187e6;
  { R(12)=LD32(R(14)+4); goto L8c0187e8; }
L8c0187e6:;
  R(12)=R(13);
L8c0187e8:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c01878a;
L8c0187ec:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c063374u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c063374(c); return; } }
}
void f_8c018820(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c018828u; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x999u;
  { c->pr=0x8c018832u;  f_8c063378(c); }
  R(3)=0x8c0685b4u;
  R(6)=0x34u;
  R(4)=0x8c0c445cu;
  { c->pr=0x8c01883cu; R(5)=LD32(R(15)); f_8c0685b4(c); }
  R(15)+=0x4u;
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c018844(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c018854u;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0x9abu;
  { c->pr=0x8c01885eu;  f_8c063378(c); }
  R(11)=0x8c0c4454u;
  R(13)=0x8c1294c4u;
  R(3)=LD32(R(11));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c018870; }
  ST32(R(13),R(12));
  ST32(R(13)+4,R(12));
  ST32(R(13)+8,R(12));
L8c018870:;
  R(3)=0x8c063d46u;
  R(5)=0x10u;
  { c->pr=0x8c018878u; R(4)=0x0u; f_8c063d46(c); }
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(14)=R(0);
  R(6)=0x10u;
  { c->pr=0x8c018884u; R(4)=R(0); f_8c0686b8(c); }
  R(3)=0x0u;
  R(2)=R(3);
  ST32(R(14)+4,R(3));
  ST32(R(14)+8,R(3));
  ST32(R(14)+12,R(2));
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c01889a;
  R(3)=LD32(R(14)+8);
  R(2)=LD32(R(14)+4);
  ST32(R(2)+8,R(3));
L8c01889a:;
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0188a6;
  R(3)=LD32(R(14)+4);
  R(2)=LD32(R(14)+8);
  ST32(R(2)+4,R(3));
L8c0188a6:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0188d0;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(2)+8);
  R(3)+=0xffffffffu;
  ST32(R(2)+8,R(3));
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(2));
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0188c2;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(14)+12);
  ST32(R(1),R(3));
L8c0188c2:;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0188d0;
  R(3)=LD32(R(14)+8);
  R(1)=LD32(R(14)+12);
  ST32(R(1)+4,R(3));
L8c0188d0:;
  ST32(R(14)+4,R(12));
  ST32(R(14)+8,R(12));
  ST32(R(14)+12,R(12));
  ST32(R(14)+4,R(12));
  R(2)=LD32(R(13)+4);
  ST32(R(14)+8,R(2));
  ST32(R(14)+12,R(13));
  R(3)=LD32(R(13));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c018940;
  { ST32(R(13),R(14)); goto L8c018944; }
L8c018940:;
  R(2)=LD32(R(13)+4);
  ST32(R(2)+4,R(14));
L8c018944:;
  R(2)=0x7fu;
  ST32(R(13)+4,R(14));
  R(3)=LD32(R(13)+8);
  R(3)+=0x1u;
  ST32(R(13)+8,R(3));
  ST32(R(14),R(2));
  R(3)=LD32(R(11));
  R(2)=0x8c063374u;
  R(3)+=0x1u;
  { c->pr=0x8c01895au; ST32(R(11),R(3)); f_8c063374(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c018968(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=0x8c0c4490u;
  R(3)=0x8c0685b4u;
  { c->pr=0x8c01897au; R(6)=0x34u; f_8c0685b4(c); }
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c018984;
  R(3)=LD32(R(14));
  ST32(R(13),R(3));
L8c018984:;
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c01898e;
  R(2)=LD32(R(14)+4);
  ST32(R(13)+4,R(2));
L8c01898e:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c018998;
  R(3)=LD32(R(14)+8);
  ST32(R(13)+8,R(3));
L8c018998:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0189a2;
  R(2)=LD32(R(14)+12);
  ST32(R(13)+12,R(2));
L8c0189a2:;
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0189ac;
  R(3)=LD32(R(14)+16);
  ST32(R(13)+16,R(3));
L8c0189ac:;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0189b6;
  R(2)=LD32(R(14)+20);
  ST32(R(13)+20,R(2));
L8c0189b6:;
  R(3)=LD32(R(14)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0189c0;
  R(3)=LD32(R(14)+24);
  ST32(R(13)+24,R(3));
L8c0189c0:;
  R(2)=LD32(R(14)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0189ca;
  R(2)=LD32(R(14)+28);
  ST32(R(13)+28,R(2));
L8c0189ca:;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0189d4;
  R(3)=LD32(R(14)+32);
  ST32(R(13)+32,R(3));
L8c0189d4:;
  R(2)=LD32(R(14)+36);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0189de;
  R(2)=LD32(R(14)+36);
  ST32(R(13)+36,R(2));
L8c0189de:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0189e6(SH4Ctx *c) {
  R(3)=0x74u;
  R(2)=R(4);
  c->macl=R(2)*R(3);
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(6)=0x20u;
  R(2)=0x8c1294d0u;
  R(3)=0x8c0685b4u;
  R(4)=c->macl;
  R(1)=LD32(R(2));
  R(5)=0x8c0c44c4u;
  R(4)+=R(1);
  R(4)+=0x34u;
  { R(15)+=0x4u; { f_8c0685b4(c); return; } }
}
void f_8c018a40(SH4Ctx *c) {
  R(4)+=0x1u;
  R(3)=0x8c0c44f0u;
  R(2)=0x74u;
  R(1)=R(4);
  c->macl=R(1)*R(2);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c063d46u;
  ST32(R(3),R(4));
  R(5)=c->macl;
  { c->pr=0x8c018a56u; R(4)=0x0u; f_8c063d46(c); }
  R(3)=0x8c1294d0u;
  R(1)=R(3);
  ST32(R(3),R(0));
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c018a92;
  R(3)=0x8c0125ccu;
  R(5)=0x8c0b8f1cu;
  R(6)=0xa14u;
  { c->pr=0x8c018a6cu; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0xa15u;
  R(7)=0x8u;
  R(3)=0x8c0b8f1cu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0xffffffffu;
  R(1)=0x8c0b8f40u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0xffu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c710cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(0));
  R(2)=0x8c012658u;
  { c->pr=0x8c018a90u; R(4)=0x7u; f_8c012658(c); }
  R(15)+=0x18u;
L8c018a92:;
  R(2)=0x8c0c4458u;
  R(3)=0x0u;
  R(4)=0x8c0c4490u;
  R(5)=R(3);
  ST32(R(2),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { f_8c018a9e(c); return; }
}
void f_8c018a9e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c063368u;
  ST32(R(15)+4,R(4));
  { c->pr=0x8c018ab2u; ST32(R(15),R(5)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xa38u;
  { c->pr=0x8c018abcu;  f_8c063378(c); }
  R(11)=0x8c0c4458u;
  R(6)=0x74u;
  R(13)=R(6);
  R(14)=0x8c1294d0u;
  R(12)=LD32(R(11));
  R(5)=0x0u;
  R(4)=LD32(R(14));
  c->macl=R(12)*R(13);
  R(3)=0x8c0686b8u;
  R(13)=c->macl;
  { c->pr=0x8c018ad4u; R(4)+=R(13); f_8c0686b8(c); }
  R(2)=LD32(R(14));
  R(0)=0x60u;
  R(3)=0x0u;
  R(2)+=R(13);
  ST32(R(2)+R(0),R(3));
  R(0)=0x68u;
  R(2)=LD32(R(14));
  R(2)+=R(13);
  ST32(R(2)+R(0),R(3));
  R(0)=0x6cu;
  R(2)=LD32(R(14));
  R(2)+=R(13);
  ST32(R(2)+R(0),R(3));
  R(0)=0x70u;
  R(2)=LD32(R(14));
  R(2)+=R(13);
  ST32(R(2)+R(0),R(3));
  R(0)=0x64u;
  R(2)=LD32(R(14));
  R(3)=0x7fu;
  R(2)+=R(13);
  ST32(R(2)+R(0),R(3));
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c018b60;
  R(3)=LD32(R(14));
  R(0)=0x54u;
  R(4)=LD32(R(15));
  R(3)+=R(13);
  ST32(R(3)+R(0),R(4));
  {  goto L8c018b6a; }
L8c018b60:;
  R(2)=LD32(R(14));
  R(0)=0x54u;
  R(3)=0x0u;
  R(2)+=R(13);
  ST32(R(2)+R(0),R(3));
L8c018b6a:;
  R(2)=LD32(R(11));
  R(2)+=0x1u;
  ST32(R(11),R(2));
  R(5)=LD32(R(15)+4);
  R(4)=LD32(R(14));
  { c->pr=0x8c018b78u; R(4)+=R(13); f_8c018968(c); }
  R(4)=0x74u;
  R(3)=LD32(R(14));
  c->macl=R(12)*R(4);
  R(2)=0x8c0685b4u;
  R(6)=0x20u;
  R(5)=0x8c0c44c4u;
  R(4)=c->macl;
  R(4)+=R(3);
  { c->pr=0x8c018b8cu; R(4)+=0x34u; f_8c0685b4(c); }
  R(3)=0x8c063374u;
  { c->pr=0x8c018b92u;  f_8c063374(c); }
  R(0)=R(12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c018ba2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c063368u;
  R(14)=R(4);
  { c->pr=0x8c018bb0u; ST32(R(15),R(5)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xa76u;
  { c->pr=0x8c018bbau;  f_8c063378(c); }
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c018bc6;
  R(3)=0x8c0c4458u;
  R(2)=LD32(R(3));
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(!c->t) goto L8c018bd2;
L8c018bc6:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0b8f54u;
  { c->pr=0x8c018bceu; R(4)=0x1du; f_8c0633e0(c); }
  {  goto L8c018be2; }
L8c018bd2:;
  R(4)=0x74u;
  R(2)=0x8c1294d0u;
  c->macl=R(14)*R(4);
  R(3)=LD32(R(2));
  R(4)=c->macl;
  R(4)+=R(3);
  { c->pr=0x8c018be2u; R(5)=LD32(R(15)); f_8c018968(c); }
L8c018be2:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c063374(c); return; } }
}
void f_8c018c40(SH4Ctx *c) {
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c018c5c;
  R(3)=0x8c0c4458u;
  R(2)=LD32(R(3));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(c->t) goto L8c018c5c;
  R(0)=0x74u;
  R(2)=0x8c1294d0u;
  c->macl=R(4)*R(0);
  R(3)=LD32(R(2));
  R(0)=0x58u;
  R(4)=c->macl;
  R(4)+=R(3);
  ST32(R(4)+R(0),R(5));
L8c018c5c:;
  {  return; }
}
void f_8c018c60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x74u;
  R(2)=0x8c1294d0u;
  c->macl=R(5)*R(14);
  R(0)=0x58u;
  ST32(R(15)+4,R(6));
  ST32(R(15),R(7));
  R(3)=LD32(R(2));
  R(14)=c->macl;
  R(14)+=R(3);
  R(1)=LD32(R(14)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c018c88;
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(15));
  R(1)=LD32(R(14)+R(0));
  R(15)+=0x8u;
  { uint32_t tg=R(1); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c018c88:;
  R(4)=LD32(R(15)+4);
  R(5)=0x8c0b8f70u;
  R(6)=LD32(R(15));
  R(15)+=0x8u;
  R(3)=0x8c068788u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c068788(c); return; } }
}
void f_8c018c96(SH4Ctx *c) {
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c018cb2;
  R(3)=0x8c0c4458u;
  R(2)=LD32(R(3));
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(c->t) goto L8c018cb2;
  R(0)=0x74u;
  R(2)=0x8c1294d0u;
  c->macl=R(4)*R(0);
  R(3)=LD32(R(2));
  R(0)=0x5cu;
  R(4)=c->macl;
  R(4)+=R(3);
  ST32(R(4)+R(0),R(5));
L8c018cb2:;
  {  return; }
}
void f_8c018cb6(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c018cbe;
  { R(0)=LD32(R(4)); return; }
L8c018cbe:;
  R(0)=0x7fu;
  {  return; }
}
void f_8c018cbe(SH4Ctx *c) {
  R(0)=0x7fu;
  {  return; }
}
void f_8c018cc4(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c018cd6;
  R(2)=0x8c017c46u;
  R(14)=R(4);
  R(4)=R(14);
  ST32(R(14),R(5));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c017c46(c); return; } }
L8c018cd6:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c018d00(SH4Ctx *c) {
  R(2)=0x8c0c44e8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c018d26;
  R(3)=0x8c063368u;
  { c->pr=0x8c018d10u;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xadbu;
  { c->pr=0x8c018d1au;  f_8c063378(c); }
  R(3)=0x8c060a02u;
  { c->pr=0x8c018d20u;  f_8c060a02(c); }
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
L8c018d26:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c018d2c(SH4Ctx *c) {
  R(2)=0x8c0c44e8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c018d52;
  R(3)=0x8c063368u;
  { c->pr=0x8c018d3cu;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xae9u;
  { c->pr=0x8c018d46u;  f_8c063378(c); }
  R(3)=0x8c060afeu;
  { c->pr=0x8c018d4cu;  f_8c060afe(c); }
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
L8c018d52:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c018fc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c44e8u;
  ST32(R(15),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c019010;
  R(3)=0x8c063368u;
  { c->pr=0x8c018fd8u;  f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xb6bu;
  { c->pr=0x8c018fe2u;  f_8c063378(c); }
  R(3)=0x8c1294acu;
  R(13)=0x8c06093cu;
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c019004;
L8c018fec:;
  R(3)=LD32(R(14)+32);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c018ffe;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(15));
  c->t=R(2)==R(3);
  if(c->t) goto L8c018ffe;
  { uint32_t tg=R(13); c->pr=0x8c018ffeu; R(4)=LD32(R(14)+24); sh4_call(c,tg); }
L8c018ffe:;
  R(14)=LD32(R(14)+52);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c018fec;
L8c019004:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c063374u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c063374(c); return; } }
L8c019010:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01909a(SH4Ctx *c) {
  R(3)=0x8c060f8cu;
  {  { f_8c060f8c(c); return; } }
}
void f_8c019100(SH4Ctx *c) {
  R(2)=0x8c0c44e8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c019126;
  R(3)=0x8c063388u;
  { c->pr=0x8c019110u;  f_8c063388(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c019126;
  R(3)=0x8c060f64u;
  { c->pr=0x8c01911au;  f_8c060f64(c); }
  R(2)=0x8c063374u;
  { c->pr=0x8c019120u;  f_8c063374(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c019126:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c019126(SH4Ctx *c) {
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c01912e(SH4Ctx *c) {
  R(2)=0x8c0c44e8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c019154;
  R(3)=0x8c063388u;
  { c->pr=0x8c01913eu;  f_8c063388(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c019154;
  R(3)=0x8c060f78u;
  { c->pr=0x8c019148u;  f_8c060f78(c); }
  R(2)=0x8c063374u;
  { c->pr=0x8c01914eu;  f_8c063374(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c019154:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c019154(SH4Ctx *c) {
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c019160(SH4Ctx *c) {
  {  { f_8c01912e(c); return; } }
}
void f_8c019164(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c060c20u;
  { c->pr=0x8c01916cu;  f_8c060c20(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(0)&0xFF; return; }
}
void f_8c019172(SH4Ctx *c) {
  R(3)=0x8c060be0u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  { R(15)+=0x4u; { f_8c060be0(c); return; } }
}
void f_8c01917a(SH4Ctx *c) {
  R(3)=0x8c060c26u;
  {  { f_8c060c26(c); return; } }
}
void f_8c019180(SH4Ctx *c) {
  R(3)=0x8c060c2cu;
  {  { f_8c060c2c(c); return; } }
}
void f_8c019186(SH4Ctx *c) {
  R(3)=0x8c060c32u;
  {  { f_8c060c32(c); return; } }
}
void f_8c0191e0(SH4Ctx *c) {
  R(3)=0x8c060c38u;
  {  { f_8c060c38(c); return; } }
}
void f_8c019202(SH4Ctx *c) {
  {  return; }
}
void f_8c019206(SH4Ctx *c) {
  {  return; }
}
void f_8c01920a(SH4Ctx *c) {
  {  return; }
}
void f_8c01920e(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c019212(SH4Ctx *c) {
  { R(0)=0xfffffffeu; return; }
}
void f_8c019216(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c01921a(SH4Ctx *c) {
  { R(0)=0xfffffffeu; return; }
}
void f_8c01921e(SH4Ctx *c) {
  {  return; }
}
void f_8c019260(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x74u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(2)=LD32(R(15)+4);
  R(5)=LD32(R(15)+12);
  c->macl=R(2)*R(3);
  R(2)=0x8c1294d0u;
  R(5)=LD32(R(5)+32);
  R(1)=LD32(R(2));
  R(0)=c->macl;
  R(0)+=R(1);
  R(0)=LD32(R(0)+32);
  { uint32_t tg=R(0); c->pr=0x8c019280u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c01929a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c063368u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0192a8u; ST32(R(15)+8,R(6)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xcc3u;
  { c->pr=0x8c0192b2u;  f_8c063378(c); }
  R(3)=0x8c01694cu;
  R(5)=LD32(R(15)+4);
  R(6)=LD32(R(15)+8);
  { c->pr=0x8c0192bcu; R(4)=LD32(R(15)); f_8c01694c(c); }
  R(2)=0x8c017d4eu;
  { c->pr=0x8c0192c2u;  f_8c017d4e(c); }
  R(15)+=0xcu;
  R(3)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c019320(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c063368u;
  ST32(R(15),R(4));
  { c->pr=0x8c01932cu; ST32(R(15)+4,R(5)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xcd0u;
  { c->pr=0x8c019336u;  f_8c063378(c); }
  R(3)=0x8c0168a0u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c01933eu; R(4)=LD32(R(15)); f_8c0168a0(c); }
  R(2)=0x8c017d4eu;
  { c->pr=0x8c019344u;  f_8c017d4e(c); }
  R(15)+=0x8u;
  R(3)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c01934c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c063368u;
  ST32(R(15)+4,R(4));
  { c->pr=0x8c019358u; ST32(R(15),R(5)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xcdfu;
  { c->pr=0x8c019362u;  f_8c063378(c); }
  R(3)=0x8c016a8eu;
  R(5)=LD32(R(15));
  { c->pr=0x8c01936au; R(4)=LD32(R(15)+4); f_8c016a8e(c); }
  R(3)=0x8c063374u;
  { c->pr=0x8c019370u; ST32(R(15),R(0)); f_8c063374(c); }
  R(0)=LD32(R(15));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0193f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c063368u;
  ST32(R(15)+4,R(4));
  { c->pr=0x8c019406u; ST32(R(15),R(5)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xd0bu;
  { c->pr=0x8c019410u;  f_8c063378(c); }
  R(3)=0x8c1294acu;
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c01943c;
L8c019418:;
  R(1)=LD32(R(14)+32);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c019436;
  R(1)=LD32(R(14)+8);
  R(2)=LD32(R(15)+4);
  c->t=R(1)==R(2);
  if(c->t) goto L8c019436;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(15));
  c->t=R(2)==R(3);
  if(c->t) goto L8c019436;
  R(3)=0x8c0168a0u;
  R(5)=LD32(R(14)+12);
  { c->pr=0x8c019436u; R(4)=LD32(R(14)+8); f_8c0168a0(c); }
L8c019436:;
  R(14)=LD32(R(14)+52);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c019418;
L8c01943c:;
  R(3)=0x8c017d4eu;
  { c->pr=0x8c019442u;  f_8c017d4e(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c063374(c); return; } }
}
void f_8c0194a0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c063368u;
  ST32(R(15),R(4));
  { c->pr=0x8c0194acu; ST32(R(15)+4,R(5)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xd23u;
  { c->pr=0x8c0194b6u;  f_8c063378(c); }
  R(5)=LD32(R(15));
  R(3)=0x74u;
  R(1)=0x8c1294d0u;
  R(0)=0x64u;
  c->macl=R(5)*R(3);
  R(2)=LD32(R(1));
  R(3)=0x8c017d4eu;
  R(4)=LD32(R(15)+4);
  R(5)=c->macl;
  R(5)+=R(2);
  { c->pr=0x8c0194ceu; ST32(R(5)+R(0),R(4)); f_8c017d4e(c); }
  R(15)+=0x8u;
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c0194d6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c0194deu; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xd30u;
  { c->pr=0x8c0194e8u;  f_8c063378(c); }
  R(5)=LD32(R(15));
  R(3)=0x74u;
  R(1)=0x8c1294d0u;
  R(0)=0x64u;
  c->macl=R(5)*R(3);
  R(2)=LD32(R(1));
  R(4)=0x7fu;
  R(3)=0x8c017d4eu;
  R(5)=c->macl;
  R(5)+=R(2);
  { c->pr=0x8c019500u; ST32(R(5)+R(0),R(4)); f_8c017d4e(c); }
  R(15)+=0x4u;
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c063374(c); return; } }
}
void f_8c019508(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c063368u;
  { c->pr=0x8c019512u; ST32(R(15),R(4)); f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xd3fu;
  { c->pr=0x8c01951cu;  f_8c063378(c); }
  R(4)=LD32(R(15));
  R(3)=0x74u;
  R(1)=0x8c1294d0u;
  R(0)=0x64u;
  c->macl=R(4)*R(3);
  R(2)=LD32(R(1));
  R(1)=0x8c063374u;
  R(4)=c->macl;
  R(4)+=R(2);
  R(3)=LD32(R(4)+R(0));
  { c->pr=0x8c019534u; ST32(R(15),R(3)); f_8c063374(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0195b4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c0195c0u; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xd65u;
  { c->pr=0x8c0195cau;  f_8c063378(c); }
  R(14)=0x8c0c4458u;
  R(4)=0x0u;
  R(13)=0x8c1294d0u;
  R(7)=0x74u;
  R(3)=LD32(R(14));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(5)=0x7fu; if(k) goto L8c0195f6; }
L8c0195da:;
  R(1)=LD32(R(15));
  c->t=R(4)==R(1);
  if(c->t) goto L8c0195ee;
  R(6)=R(4);
  R(2)=LD32(R(13));
  c->macl=R(6)*R(7);
  R(0)=0x64u;
  R(6)=c->macl;
  R(6)+=R(2);
  ST32(R(6)+R(0),R(5));
L8c0195ee:;
  R(3)=LD32(R(14));
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c0195da;
L8c0195f6:;
  R(1)=0x8c017d4eu;
  { c->pr=0x8c0195fcu;  f_8c017d4e(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c063374u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c063374(c); return; } }
}
void f_8c01968e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c019698u; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xd92u;
  { c->pr=0x8c0196a2u;  f_8c063378(c); }
  R(3)=0x8c1294acu;
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0196c6;
L8c0196aa:;
  R(1)=LD32(R(14)+32);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0196c0;
  R(1)=LD32(R(14)+12);
  R(2)=LD32(R(15));
  c->t=R(1)==R(2);
  if(!c->t) goto L8c0196c0;
  R(2)=0x8c0168a0u;
  R(5)=LD32(R(14)+12);
  { c->pr=0x8c0196c0u; R(4)=LD32(R(14)+8); f_8c0168a0(c); }
L8c0196c0:;
  R(14)=LD32(R(14)+52);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0196aa;
L8c0196c6:;
  R(2)=0x8c017d4eu;
  { c->pr=0x8c0196ccu;  f_8c017d4e(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c063374(c); return; } }
}
void f_8c019720(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c063368u;
  { c->pr=0x8c01972au; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c063368(c); }
  R(2)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xdacu;
  { c->pr=0x8c019734u;  f_8c063378(c); }
  R(1)=0x8c0c4458u;
  R(4)=0x0u;
  R(13)=0x8c1294d0u;
  R(3)=LD32(R(1));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(5)=0x74u; if(k) goto L8c01975a; }
L8c019742:;
  R(6)=R(4);
  R(3)=LD32(R(13));
  c->macl=R(6)*R(5);
  R(7)=LD32(R(15));
  R(4)+=0x1u;
  R(0)=0x64u;
  R(6)=c->macl;
  R(6)+=R(3);
  ST32(R(6)+R(0),R(7));
  R(3)=LD32(R(1));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c019742;
L8c01975a:;
  R(1)=0x8c017d4eu;
  { c->pr=0x8c019760u;  f_8c017d4e(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} { f_8c063374(c); return; } }
}
void f_8c01976a(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c063368u;
  { c->pr=0x8c019774u;  f_8c063368(c); }
  R(3)=0x8c063378u;
  R(4)=0x8c0b8f1cu;
  R(5)=0xdbcu;
  { c->pr=0x8c01977eu;  f_8c063378(c); }
  R(7)=0x8c0c4458u;
  R(4)=0x0u;
  R(13)=0x8c1294d0u;
  R(1)=0x74u;
  R(2)=LD32(R(7));
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(6)=0x7fu; if(k) goto L8c0197a4; }
L8c01978e:;
  R(5)=R(4);
  R(2)=LD32(R(13));
  c->macl=R(5)*R(1);
  R(4)+=0x1u;
  R(0)=0x64u;
  R(5)=c->macl;
  R(5)+=R(2);
  ST32(R(5)+R(0),R(6));
  R(3)=LD32(R(7));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c01978e;
L8c0197a4:;
  R(1)=0x8c017d4eu;
  { c->pr=0x8c0197aau;  f_8c017d4e(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c063374u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} { f_8c063374(c); return; } }
}
void f_8c01983c(SH4Ctx *c) {
  R(3)=0x8c0c440cu;
  R(1)=LD32(R(15)+24);
  R(0)=LD32(R(3));
  ST32(R(1),R(0));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01984c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c44e8u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c019894;
  R(2)=0x8c063d46u;
  R(5)=0x20u;
  R(14)=R(15);
  { c->pr=0x8c019864u; R(4)=0x0u; f_8c063d46(c); }
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  ST32(R(14),R(0));
  R(6)=0x20u;
  { c->pr=0x8c019870u; R(4)=R(0); f_8c0686b8(c); }
  R(2)=LD32(R(14));
  R(3)=0x2u;
  R(4)=0x1u;
  ST32(R(2)+4,R(3));
  R(3)=LD32(R(15)+16);
  R(2)=LD32(R(14));
  ST32(R(2)+8,R(3));
  R(3)=LD32(R(14));
  ST32(R(3)+24,R(4));
  R(2)=LD32(R(14));
  ST32(R(2)+28,R(4));
  R(1)=LD32(R(15)+12);
  R(3)=LD32(R(14));
  ST32(R(1),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c019894:;
  R(0)=0x8c0c440cu;
  R(1)=LD32(R(15)+12);
  R(2)=LD32(R(0));
  ST32(R(1),R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c019894(SH4Ctx *c) {
  R(0)=0x8c0c440cu;
  R(1)=LD32(R(15)+12);
  R(2)=LD32(R(0));
  ST32(R(1),R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0198a4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(15)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0198e6;
  R(0)=LD32(R(14)+4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0198bc;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0198c8;
  {  goto L8c0198de; }
L8c0198bc:;
  R(2)=0x8c064160u;
  R(5)=R(14);
  { c->pr=0x8c0198c4u; R(4)=0x0u; f_8c064160(c); }
  {  goto L8c0198e6; }
L8c0198c8:;
  R(3)=0x8c06120cu;
  R(2)=LD32(R(14)+8);
  { c->pr=0x8c0198d0u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c06120c(c); }
  R(15)+=0x4u;
  R(3)=0x8c064160u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0198dau; R(4)=0x0u; f_8c064160(c); }
  {  goto L8c0198e6; }
L8c0198de:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0b8f18u;
  { c->pr=0x8c0198e6u; R(4)=0x13u; f_8c0633e0(c); }
L8c0198e6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0198ec(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c019940(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c019944(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c019948(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c01994c(SH4Ctx *c) {
  {  return; }
}
void f_8c019950(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c019954(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c019958(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c01995c(SH4Ctx *c) {
  R(0)=0x8c019984u;
  R(2)=0x8c0c4410u;
  R(3)=0x0u;
  R(1)=0x8c0c4414u;
  ST32(R(2),R(3));
  fp_ld(c,3,R(0));
  fp_arith(c,2,4,3);
  fp_ftrc(c,4);
  R(3)=c->fpul;
  { ST32(R(1),R(3)); return; }
}
void f_8c0199a0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c05a7feu;
  R(6)=0x0u;
  ST32(R(15),R(4));
  R(7)=0x4u;
  { c->pr=0x8c0199b0u; R(5)=R(4); f_8c05a7fe(c); }
  R(2)=0x8c0c4534u;
  ST32(R(2),R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0199c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c4534u;
  R(5)=R(4);
  R(2)=0x8c05a9b2u;
  ST32(R(15),R(4));
  { c->pr=0x8c0199d6u; R(4)=LD32(R(3)); f_8c05a9b2(c); }
  R(3)=0x8c0686b8u;
  R(14)=R(0);
  R(6)=LD32(R(15));
  R(5)=0x0u;
  { c->pr=0x8c0199e2u; R(4)=R(14); f_8c0686b8(c); }
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0199ec(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  R(3)=0x8c0c4534u;
  R(2)=0x8c05ae4au;
  ST32(R(15),R(4));
  R(5)=LD32(R(5));
  { c->pr=0x8c0199feu; R(4)=LD32(R(3)); f_8c05ae4a(c); }
  R(1)=LD32(R(15));
  R(3)=0x0u;
  ST32(R(1),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c019a40(SH4Ctx *c) {
  R(2)=0x8c0c4578u;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c019a5c;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0c457cu;
  R(5)=0x8c0c458cu;
  { c->pr=0x8c019a58u;  f_8c0124a6(c); }
  R(2)=0x8c0c4578u;
  ST8(R(2),R(0));
L8c019a5c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c019aa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(6);
  R(3)-=R(4);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; ST32(R(15),R(3)); if(k) goto L8c019abc; }
  { R(11)=0x1u; goto L8c019abe; }
L8c019abc:;
  R(11)=0xffffffffu;
L8c019abe:;
  R(3)=R(7);
  R(3)-=R(5);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; ST32(R(15)+4,R(3)); if(k) goto L8c019acc; }
  { R(12)=0x1u; goto L8c019ace; }
L8c019acc:;
  R(12)=0xffffffffu;
L8c019ace:;
  R(10)=LD32(R(15));
  R(14)=LD32(R(15)+4);
  c->macl=R(10)*R(11);
  R(9)=0x8c1294e4u;
  R(10)=c->macl;
  c->macl=R(14)*R(12);
  c->t=R(10)>>31;R(10)<<=1;
  R(14)=c->macl;
  c->t=R(14)>>31;R(14)<<=1;
  c->t=(int32_t)R(10)>(int32_t)R(14);
  { uint32_t k=!c->t; R(13)=0x8u; if(k) goto L8c019b30; }
  R(3)=0x0u;
  R(2)=R(10);
  c->t=(int32_t)R(3)>(int32_t)R(2);
  R(7)=R(14);
  {uint32_t a=R(2),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(2)=r;}
  c->t=R(2)&1;R(2)=(uint32_t)((int32_t)R(2)>>1);
  c->t=R(4)==R(6);
  R(7)-=R(2);
  if(c->t) goto L8c019b76;
L8c019af8:;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c019b1c;
  R(2)=0x30u;
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(c->t) goto L8c019b1c;
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c019b1c;
  R(3)=0x20u;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(c->t) goto L8c019b1c;
  R(0)=R(5);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(5);
  R(0)+=R(3);
  R(0)<<=2;
  R(0)<<=2;
  R(0)+=R(4);
  ST8(R(9)+R(0),R(13));
L8c019b1c:;
  c->t=(int32_t)R(7)>=0;
  { uint32_t k=!c->t; R(4)+=R(11); if(k) goto L8c019b26; }
  R(7)-=R(10);
  R(5)+=R(12);
L8c019b26:;
  c->t=R(4)==R(6);
  { uint32_t k=!c->t; R(7)+=R(14); if(k) goto L8c019af8; }
  {  goto L8c019b76; }
L8c019b30:;
  R(2)=0x0u;
  R(3)=R(14);
  c->t=(int32_t)R(2)>(int32_t)R(3);
  R(6)=R(10);
  {uint32_t a=R(3),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(3)=r;}
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  c->t=R(5)==R(7);
  R(6)-=R(3);
  if(c->t) goto L8c019b76;
L8c019b42:;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c019b66;
  R(3)=0x30u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c019b66;
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c019b66;
  R(2)=0x20u;
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(c->t) goto L8c019b66;
  R(0)=R(5);
  c->t=R(0)>>31;R(0)<<=1;
  R(3)=R(5);
  R(0)+=R(3);
  R(0)<<=2;
  R(0)<<=2;
  R(0)+=R(4);
  ST8(R(9)+R(0),R(13));
L8c019b66:;
  c->t=(int32_t)R(6)>=0;
  { uint32_t k=!c->t; R(5)+=R(12); if(k) goto L8c019b70; }
  R(6)-=R(14);
  R(4)+=R(11);
L8c019b70:;
  c->t=R(5)==R(7);
  { uint32_t k=!c->t; R(6)+=R(10); if(k) goto L8c019b42; }
L8c019b76:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c019bc0(SH4Ctx *c) {
  R(3)=0x8c0686b8u;
  R(4)=0x8c1294e4u;
  R(6)=0x600u;
  { R(5)=0x0u; { f_8c0686b8(c); return; } }
}
void f_8c019bca(SH4Ctx *c) {
  R(3)=LD32(R(4));
  R(0)=0x8c019c8cu;
  fp_ld(c,4,R(0));
  R(0)=0x8c019c90u;
  c->fpul=R(3);
  fp_ld(c,2,R(0));
  R(0)=0x8c019c94u;
  fp_mov(c,1,4);
  fp_float(c,3);
  fp_arith(c,3,3,2);
  fp_arith(c,2,3,4);
  fp_arith(c,1,1,3);
  fp_ftrc(c,1);
  R(3)=c->fpul;
  ST32(R(4),R(3));
  R(3)=LD32(R(5));
  fp_ld(c,4,R(0));
  R(0)=0x8c019c98u;
  c->fpul=R(3);
  fp_ld(c,1,R(0));
  fp_mov(c,0,4);
  fp_float(c,3);
  fp_arith(c,3,3,1);
  fp_arith(c,2,3,4);
  fp_arith(c,1,0,3);
  fp_ftrc(c,0);
  R(3)=c->fpul;
  { ST32(R(5),R(3)); return; }
}
void f_8c019c04(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(2)=0x8c0c45ccu;
  ST32(R(15)+12,R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15)+4,R(6));
  ST32(R(15),R(7));
  fp_ld(c,4,R(2));
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c019c24;
  fp_cmp(c,1,4,5);
  if(!c->t) goto L8c019c24;
  fp_cmp(c,1,4,6);
  if(!c->t) goto L8c019c24;
  fp_cmp(c,1,4,7);
  if(c->t) goto L8c019c72;
L8c019c24:;
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c019c2eu; R(4)+=0xcu; f_8c019bca(c); }
  R(4)=R(15);
  R(5)=R(15);
  { c->pr=0x8c019c36u; R(4)+=0x4u; f_8c019bca(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x18u;
  { c->pr=0x8c019c40u; R(4)+=0x14u; f_8c019bca(c); }
  R(5)=R(15);
  R(4)=R(15);
  R(5)+=0x20u;
  { c->pr=0x8c019c4au; R(4)+=0x1cu; f_8c019bca(c); }
  R(5)=LD32(R(15)+8);
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15));
  { c->pr=0x8c019c54u; R(4)=LD32(R(15)+12); f_8c019aa0(c); }
  R(5)=LD32(R(15));
  R(6)=LD32(R(15)+20);
  R(7)=LD32(R(15)+24);
  { c->pr=0x8c019c5eu; R(4)=LD32(R(15)+4); f_8c019aa0(c); }
  R(5)=LD32(R(15)+24);
  R(6)=LD32(R(15)+28);
  R(7)=LD32(R(15)+32);
  { c->pr=0x8c019c68u; R(4)=LD32(R(15)+20); f_8c019aa0(c); }
  R(5)=LD32(R(15)+32);
  R(6)=LD32(R(15)+12);
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c019c72u; R(4)=LD32(R(15)+28); f_8c019aa0(c); }
L8c019c72:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c019cfe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d14e8u;
  R(13)=0x8c0c45d0u;
  R(12)=0x8c1294e4u;
  { c->pr=0x8c019d10u; R(14)=R(4); f_8c0d14e8(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c019d22;
  R(3)=0x8c0d1554u;
  R(5)=R(12);
  R(6)=0x3u;
  { c->pr=0x8c019d1eu; R(4)=R(14); f_8c0d1554(c); }
  {  goto L8c019d2c; }
L8c019d22:;
  R(2)=0x8c0d1554u;
  R(5)=R(12);
  R(6)=0x0u;
  { c->pr=0x8c019d2cu; R(4)=R(14); f_8c0d1554(c); }
L8c019d2c:;
  c->t=(R(0)&R(0))==0;
  R(6)=0x600u;
  R(3)=0x8c0686b8u;
  R(0)=c->t;
  R(5)=0x0u;
  ST32(R(13),R(0));
  { c->pr=0x8c019d3cu; R(4)=R(12); f_8c0686b8(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=LD32(R(13));
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c019d80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0c45d0u;
  R(14)=R(4);
  R(3)=0x8c0d14e8u;
  ST32(R(15),R(5));
  { c->pr=0x8c019d94u; R(4)=R(14); f_8c0d14e8(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c019da6;
  R(3)=0x8c0d1554u;
  R(6)=0x0u;
  R(5)=LD32(R(15));
  { c->pr=0x8c019da2u; R(4)=R(14); f_8c0d1554(c); }
  {  goto L8c019db0; }
L8c019da6:;
  R(3)=0x8c0d1554u;
  R(6)=0x3u;
  R(5)=LD32(R(15));
  { c->pr=0x8c019db0u; R(4)=R(14); f_8c0d1554(c); }
L8c019db0:;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  ST32(R(13),R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c019dc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0c45d0u;
  R(14)=R(4);
  R(3)=0x8c0d14e8u;
  ST32(R(15),R(5));
  { c->pr=0x8c019dd4u; R(4)=R(14); f_8c0d14e8(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c019de6;
  R(3)=0x8c0d1554u;
  R(6)=0x3u;
  R(5)=LD32(R(15));
  { c->pr=0x8c019de2u; R(4)=R(14); f_8c0d1554(c); }
  {  goto L8c019df0; }
L8c019de6:;
  R(3)=0x8c0d1554u;
  R(6)=0x0u;
  R(5)=LD32(R(15));
  { c->pr=0x8c019df0u; R(4)=R(14); f_8c0d1554(c); }
L8c019df0:;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  ST32(R(13),R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c019e00(SH4Ctx *c) {
  R(3)=0x8c0d14e4u;
  {  { f_8c0d14e4(c); return; } }
}
void f_8c019e06(SH4Ctx *c) {
  R(3)=0x8c0d1542u;
  {  { f_8c0d1542(c); return; } }
}
void f_8c019e40(SH4Ctx *c) {
  { R(5)=0x0u; goto L8c019e46; }
L8c019e44:;
  R(5)+=0x1u;
L8c019e46:;
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c019e44;
  { R(0)=R(5); return; }
}
void f_8c019e50(SH4Ctx *c) {
  R(1)=0x8c0bb9c8u;
  R(0)=R(4)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c019e62;
  R(0)=R(4);
  { R(0)+=0x20u; return; }
L8c019e62:;
  R(0)=R(4);
  {  return; }
}
void f_8c019e6c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(4));
  R(3)=R(6);
  ST32(R(15)+4,R(5));
  R(5)=0x0u;
  ST32(R(15)+8,R(6));
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c067b64u;
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c019e86u; R(4)=0x1u; f_8c067b64(c); }
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c019e94(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0db0c0u;
L8c019e9a:;
  { uint32_t tg=R(14); c->pr=0x8c019e9eu;  sh4_call(c,tg); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c019eaa; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c019e9a;
L8c019eaa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c019eb2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0xc0u;
L8c019ec2:;
  R(12)=0xffffff40u;
  R(5)=R(14);
  R(13)=0x3cu;
  R(10)=0x8c0db044u;
  R(5)+=R(12);
  c->macl=R(5)*R(13);
  R(5)=c->macl;
  R(5)+=R(11);
  { c->pr=0x8c019ed6u; R(4)=R(14); f_8c0db044(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c019ee6;
  { c->pr=0x8c019ee0u;  f_8c019e94(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c019eea; }
L8c019ee6:;
  { R(0)=R(4); goto L8c019ef4; }
L8c019eea:;
  R(4)=0xcbu;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>(int32_t)R(4);
  if(!c->t) goto L8c019ec2;
  R(0)=0x0u;
L8c019ef4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c019f02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d06acu;
  R(4)=0x2d0u;
  { c->pr=0x8c019f1cu;  f_8c0d06ac(c); }
  R(9)=R(0);
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c019f76;
  { c->pr=0x8c019f26u; R(4)=R(9); f_8c019eb2(c); }
  R(10)=0x0u;
  R(13)=0xc0u;
  R(11)=0x0u;
  R(11)+=R(9);
  R(12)=0x0u;
  R(10)+=R(8);
L8c019f32:;
  R(6)=0x3cu;
  R(3)=0x8c068580u;
  R(5)=R(6);
  c->macl=R(12)*R(5);
  R(5)=c->macl;
  R(5)+=R(8);
  { c->pr=0x8c019f42u; R(4)=R(11); f_8c068580(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c019f5e;
  R(14)=0x8c0db080u;
  R(5)=R(10);
  { c->pr=0x8c019f4eu; R(4)=R(13); f_8c0db080(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c019f72;
  { c->pr=0x8c019f58u;  f_8c019e94(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c019f72; }
L8c019f5e:;
  R(4)=0xcu;
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(4);
  R(13)+=0x1u;
  R(10)+=0x3cu;
  { uint32_t k=!c->t; R(11)+=0x3cu; if(k) goto L8c019f32; }
  R(3)=0x8c0d077au;
  { c->pr=0x8c019f72u; R(4)=R(9); f_8c0d077a(c); }
L8c019f72:;
  { R(0)=R(14); goto L8c019f78; }
L8c019f76:;
  R(0)=0xfffffffeu;
L8c019f78:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c019fac(SH4Ctx *c) {
  R(3)=0x8c0c45dcu;
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c019fe2;
  R(6)=0x41474553u;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c019fc0;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c019fca;
L8c019fc0:;
  R(3)=LD32(R(5)+4);
  c->t=R(3)==R(6);
  if(c->t) goto L8c019fd6;
  {  goto L8c019fda; }
L8c019fca:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c019fde;
  R(0)=0x168u;
  R(3)=LD32(R(5)+R(0));
  c->t=R(3)==R(6);
  if(!c->t) goto L8c019fda;
L8c019fd6:;
  { R(0)=0x0u; return; }
L8c019fda:;
  { R(0)=0xfffffffdu; return; }
L8c019fde:;
  { R(0)=0xfffffffeu; return; }
L8c019fe2:;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c019fe8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0daeb4u;
  R(5)=R(4);
  ST32(R(15),R(4));
  { c->pr=0x8c019ff6u; R(4)=0x2u; f_8c0daeb4(c); }
  c->t=(int32_t)R(0)==-8;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c01a004; }
  R(3)=0x8c0dafb8u;
  { c->pr=0x8c01a002u; R(4)=0x0u; f_8c0dafb8(c); }
  R(4)=R(0);
L8c01a004:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c01a00c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c0c45dcu;
  ST32(R(15),R(4));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c01a0aa;
  R(13)=0x8c0c45d8u;
  c->t=(R(5)&R(5))==0;
  R(12)=0x8c0c45e0u;
  if(!c->t) goto L8c01a03c;
  R(2)=0x8c0d06acu;
  R(4)=0x4000u;
  { c->pr=0x8c01a030u;  f_8c0d06ac(c); }
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(13),R(0)); if(k) goto L8c01a062; }
  {  goto L8c01a044; }
L8c01a03c:;
  ST32(R(13),R(5));
  R(0)=LD32(R(12));
  R(0)|=0x1u;
  ST32(R(12),R(0));
L8c01a044:;
  { c->pr=0x8c01a048u; R(4)=LD32(R(13)); f_8c019fe8(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c01a0a6;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c01a088;
  R(3)=0x8c0d06acu;
  R(4)=0x2d0u;
  { c->pr=0x8c01a05au;  f_8c0d06ac(c); }
  R(2)=R(0);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(14),R(0)); if(k) goto L8c01a092; }
L8c01a062:;
  { R(0)=0xfffffffeu; goto L8c01a0ac; }
L8c01a088:;
  R(2)=LD32(R(15));
  ST32(R(14),R(2));
  R(0)=LD32(R(12));
  R(0)|=0x2u;
  ST32(R(12),R(0));
L8c01a092:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x2d0u;
  { c->pr=0x8c01a09cu; R(4)=LD32(R(14)); f_8c0686b8(c); }
  { c->pr=0x8c01a0a0u; R(4)=LD32(R(14)); f_8c019eb2(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c01a0aa;
L8c01a0a6:;
  { R(0)=0xffffffffu; goto L8c01a0ac; }
L8c01a0aa:;
  R(0)=0x0u;
L8c01a0ac:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a0b8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c45d8u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(13));
  R(12)=0x8c0c45e0u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(14)=0x0u; if(k) goto L8c01a0e0; }
  R(3)=0x8c0db154u;
  { c->pr=0x8c01a0d2u;  f_8c0db154(c); }
  R(0)=LD32(R(12));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c01a0de;
  R(3)=0x8c0d077au;
  { c->pr=0x8c01a0deu; R(4)=LD32(R(13)); f_8c0d077a(c); }
L8c01a0de:;
  ST32(R(13),R(14));
L8c01a0e0:;
  R(2)=0x8c0c45dcu;
  R(4)=LD32(R(2));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c01a0f8;
  R(0)=LD32(R(12));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c01a0f4;
  R(3)=0x8c0d077au;
  { c->pr=0x8c01a0f4u;  f_8c0d077a(c); }
L8c01a0f4:;
  R(2)=0x8c0c45dcu;
  ST32(R(2),R(14));
L8c01a0f8:;
  ST32(R(12),R(14));
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a106(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=0x0u;
  { c->pr=0x8c01a110u; R(4)=R(5); f_8c01a00c(c); }
  { c->pr=0x8c01a114u; R(4)=0x0u; f_8c019fac(c); }
  { c->pr=0x8c01a118u; ST32(R(15),R(0)); f_8c01a0b8(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c01a122(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  { c->pr=0x8c01a12cu; R(4)=0x0u; f_8c019fac(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c01a13a;
  R(1)=0x8c0c45dcu;
  R(3)=LD32(R(15));
  R(2)=LD32(R(1));
  ST32(R(3),R(2));
L8c01a13a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c01a142(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a14eu; R(14)=R(4); f_8c019fac(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c01a182;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(4)=LD32(R(3)); if(k) goto L8c01a168; }
  R(0)=LD32(R(4));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a166;
  { R(14)=0x2u; goto L8c01a168; }
L8c01a166:;
  R(14)=0x1u;
L8c01a168:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a17a;
  R(2)=R(4);
  R(3)=LD32(R(15));
  R(2)+=0x4u;
  ST32(R(3),R(2));
  {  goto L8c01a182; }
L8c01a17a:;
  R(3)=0x168u;
  R(1)=LD32(R(15));
  R(3)+=R(4);
  ST32(R(1),R(3));
L8c01a182:;
  R(0)=R(5);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a1ca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a1dau; R(14)=R(4); f_8c019fac(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01a20e;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=LD32(R(3)); if(k) goto L8c01a1f4; }
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a1f2;
  { R(14)=0x2u; goto L8c01a1f4; }
L8c01a1f2:;
  R(14)=0x1u;
L8c01a1f4:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a202;
  R(5)=R(13);
  R(6)=0x1cu;
  { R(5)+=0x8u; goto L8c01a208; }
L8c01a202:;
  R(5)=0x16cu;
  R(6)=0x1cu;
  R(5)+=R(13);
L8c01a208:;
  R(3)=0x8c068788u;
  { c->pr=0x8c01a20eu; R(4)=LD32(R(15)); f_8c068788(c); }
L8c01a20e:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a21c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a22cu; R(14)=R(4); f_8c019fac(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01a260;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=LD32(R(3)); if(k) goto L8c01a246; }
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a244;
  { R(14)=0x2u; goto L8c01a246; }
L8c01a244:;
  R(14)=0x1u;
L8c01a246:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a254;
  R(5)=R(13);
  R(6)=0x10u;
  { R(5)+=0x24u; goto L8c01a25a; }
L8c01a254:;
  R(5)=0x188u;
  R(6)=0x10u;
  R(5)+=R(13);
L8c01a25a:;
  R(3)=0x8c068788u;
  { c->pr=0x8c01a260u; R(4)=LD32(R(15)); f_8c068788(c); }
L8c01a260:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a26e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a27eu; R(14)=R(4); f_8c019fac(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01a2c0;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=LD32(R(3)); if(k) goto L8c01a2a6; }
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a2a4;
  { R(14)=0x2u; goto L8c01a2a6; }
L8c01a2a4:;
  R(14)=0x1u;
L8c01a2a6:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a2b4;
  R(5)=R(13);
  R(6)=0x78u;
  { R(5)+=0x34u; goto L8c01a2ba; }
L8c01a2b4:;
  R(5)=0x198u;
  R(6)=0x78u;
  R(5)+=R(13);
L8c01a2ba:;
  R(3)=0x8c0685b4u;
  { c->pr=0x8c01a2c0u; R(4)=LD32(R(15)); f_8c0685b4(c); }
L8c01a2c0:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a2ce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c01a2e4u; R(14)=R(4); f_8c019fac(c); }
  R(10)=R(0);
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c01a330;
  R(11)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=LD32(R(11)); if(k) goto L8c01a2fe; }
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a2fc;
  { R(14)=0x2u; goto L8c01a2fe; }
L8c01a2fc:;
  R(14)=0x1u;
L8c01a2fe:;
  R(0)=R(14);
  R(12)=0x8c0685b4u;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a31a;
  R(5)=0xacu;
  R(6)=0x4u;
  R(5)+=R(13);
  { uint32_t tg=R(12); c->pr=0x8c01a310u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0xb0u;
  R(5)=LD32(R(11));
  R(5)+=R(3);
  { R(6)=0x4u; goto L8c01a32c; }
L8c01a31a:;
  R(5)=0x210u;
  R(6)=0x4u;
  R(5)+=R(13);
  { uint32_t tg=R(12); c->pr=0x8c01a324u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(3)=0x214u;
  R(6)=0x4u;
  R(5)=LD32(R(11));
  R(5)+=R(3);
L8c01a32c:;
  { uint32_t tg=R(12); c->pr=0x8c01a330u; R(4)=LD32(R(15)+4); sh4_call(c,tg); }
L8c01a330:;
  R(0)=R(10);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a342(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a352u; R(14)=R(4); f_8c019fac(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01a384;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=LD32(R(3)); if(k) goto L8c01a36c; }
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a36a;
  { R(14)=0x2u; goto L8c01a36c; }
L8c01a36a:;
  R(14)=0x1u;
L8c01a36c:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a378;
  R(5)=0xb4u;
  { R(6)=0x30u; goto L8c01a37c; }
L8c01a378:;
  R(5)=0x218u;
  R(6)=0x30u;
L8c01a37c:;
  R(3)=0x8c068788u;
  R(5)+=R(13);
  { c->pr=0x8c01a384u; R(4)=LD32(R(15)); f_8c068788(c); }
L8c01a384:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a3fc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a40cu; R(14)=R(4); f_8c019fac(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01a43e;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=LD32(R(3)); if(k) goto L8c01a426; }
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a424;
  { R(14)=0x2u; goto L8c01a426; }
L8c01a424:;
  R(14)=0x1u;
L8c01a426:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a432;
  R(5)=0x104u;
  { R(6)=0x20u; goto L8c01a436; }
L8c01a432:;
  R(5)=0x268u;
  R(6)=0x20u;
L8c01a436:;
  R(3)=0x8c068788u;
  R(5)+=R(13);
  { c->pr=0x8c01a43eu; R(4)=LD32(R(15)); f_8c068788(c); }
L8c01a43e:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a44c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a45cu; R(14)=R(4); f_8c019fac(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01a48e;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=LD32(R(3)); if(k) goto L8c01a476; }
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a474;
  { R(14)=0x2u; goto L8c01a476; }
L8c01a474:;
  R(14)=0x1u;
L8c01a476:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a482;
  R(5)=0x124u;
  { R(6)=0x10u; goto L8c01a486; }
L8c01a482:;
  R(5)=0x288u;
  R(6)=0x10u;
L8c01a486:;
  R(3)=0x8c068788u;
  R(5)+=R(13);
  { c->pr=0x8c01a48eu; R(4)=LD32(R(15)); f_8c068788(c); }
L8c01a48e:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a500(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a510u; R(14)=R(4); f_8c019fac(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c01a542;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=LD32(R(3)); if(k) goto L8c01a52a; }
  R(0)=LD32(R(13));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a528;
  { R(14)=0x2u; goto L8c01a52a; }
L8c01a528:;
  R(14)=0x1u;
L8c01a52a:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a536;
  R(5)=0x144u;
  { R(6)=0x20u; goto L8c01a53a; }
L8c01a536:;
  R(5)=0x2a8u;
  R(6)=0x20u;
L8c01a53a:;
  R(3)=0x8c068788u;
  R(5)+=R(13);
  { c->pr=0x8c01a542u; R(4)=LD32(R(15)); f_8c068788(c); }
L8c01a542:;
  R(0)=R(12);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a550(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(5));
  { c->pr=0x8c01a55cu; R(14)=R(4); f_8c019fac(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c01a590;
  R(3)=0x8c0c45dcu;
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(4)=LD32(R(3)); if(k) goto L8c01a576; }
  R(0)=LD32(R(4));
  c->t=(R(0)&0x1)==0;
  if(c->t) goto L8c01a574;
  { R(14)=0x2u; goto L8c01a576; }
L8c01a574:;
  R(14)=0x1u;
L8c01a576:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c01a588;
  R(0)=0x164u;
  R(3)=LD32(R(15));
  R(2)=(int32_t)(int16_t)LD16(R(4)+R(0));
  ST16(R(3),R(2));
  {  goto L8c01a590; }
L8c01a588:;
  R(0)=0x2c8u;
  R(1)=LD32(R(15));
  R(3)=(int32_t)(int16_t)LD16(R(4)+R(0));
  ST16(R(1),R(3));
L8c01a590:;
  R(0)=R(5);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a5c0(SH4Ctx *c) {
  R(0)=0x8c01a6a0u;
  R(3)=0x8c0c4628u;
  fp_ld(c,0,R(0));
  R(0)=0x8c01a6a4u;
  fp_ld(c,3,R(0));
  fp_arith(c,0,4,0);
  fp_ld(c,0,R(3));
  fp_fmac(c,3,4);
  { fp_mov(c,0,3); return; }
}
void f_8c01a5d4(SH4Ctx *c) {
  R(3)=0x8c0c4670u;
  R(2)=0x8c0c4674u;
  c->fr[4]=0x00000000u;
  fp_st(c,4,R(3));
  { fp_st(c,4,R(2)); return; }
}
void f_8c01a5e0(SH4Ctx *c) {
  R(3)=0x8c0c4630u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  R(2)=0x8c0c465cu;
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  R(1)=0x8c0c4680u;
  c->fr[15]=0x00000000u;
  R(0)=0x8c0c4634u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(3),R(14));
  R(3)=0x8c0c4688u;
  ST8(R(2),R(14));
  R(2)=0x1u;
  fp_st(c,15,R(1));
  R(1)=0x8c0c463cu;
  ST32(R(3),R(14));
  ST32(R(0),R(2));
  R(3)=0x8c0c4644u;
  R(2)=0x8c0c464cu;
  ST32(R(1),R(14));
  R(1)=0x8c0c4648u;
  ST32(R(3),R(14));
  ST32(R(2),R(14));
  R(3)=0x8c0c468cu;
  R(2)=0x8c0c466cu;
  ST32(R(1),R(14));
  R(1)=0x8c0c4690u;
  fp_st(c,15,R(3));
  ST8(R(2),R(14));
  { c->pr=0x8c01a61eu; fp_st(c,15,R(1)); f_8c01acf0(c); }
  { c->pr=0x8c01a622u;  f_8c01ad16(c); }
  R(3)=0x8c025520u;
  { c->pr=0x8c01a628u;  f_8c025520(c); }
  R(2)=0x8c0268a0u;
  { c->pr=0x8c01a62eu;  f_8c0268a0(c); }
  R(3)=0x8c0c4670u;
  R(2)=0x8c0c4674u;
  fp_st(c,15,R(3));
  R(3)=0x8c0c806du;
  R(1)=0x8c0c5480u;
  fp_st(c,15,R(2));
  R(2)=0x8c07c8c0u;
  ST8(R(1),R(14));
  ST8(R(3),R(14));
  { c->pr=0x8c01a644u; R(4)=R(14); f_8c07c8c0(c); }
  R(2)=0x8c07c914u;
  R(3)=0x8c0c806cu;
  { c->pr=0x8c01a64cu; ST8(R(3),R(14)); f_8c07c914(c); }
  R(3)=0x8c0c4bf4u;
  R(1)=0x8c0c4bf8u;
  R(2)=0x8c0c5050u;
  ST32(R(1),R(14));
  ST32(R(3),R(14));
  R(3)=0x8c0c4658u;
  R(1)=0x8c0c4654u;
  ST32(R(2),R(14));
  ST8(R(1),R(14));
  fp_st(c,15,R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c01a668(SH4Ctx *c) {
  R(1)=0x8c123b74u;
  R(2)=LD32(R(1));
  c->fpul=R(2);
  c->t=(int32_t)R(2)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c01a67c; }
  R(1)=0x4f800000u;
  c->fpul=R(1);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c01a67c:;
  R(0)=0x8c01a71cu;
  fp_mov(c,0,3);
  fp_ld(c,2,R(0));
  { fp_arith(c,2,0,2); return; }
}
void f_8c01a720(SH4Ctx *c) {
  R(6)=0x8c129af4u;
  R(3)=0xcu;
  R(4)=R(6);
  R(0)=LD32(R(4));
  R(3)+=R(6);
  R(6)=0x60000000u;
  c->t=(R(0)&R(0))==0;
  R(3)=LD32(R(3));
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)|=R(6);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)=0x0u; if(k) goto L8c01a754; }
L8c01a73c:;
  R(4)+=0x60u;
  R(0)=LD32(R(4));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)|=R(6);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(5)+=0x1u; if(k) goto L8c01a754; }
  R(2)=0x12cu;
  c->t=R(5)>=R(2);
  if(!c->t) goto L8c01a73c;
L8c01a754:;
  R(1)=0x12bu;
  c->t=R(5)>=R(1);
  if(!c->t) goto L8c01a75e;
  { R(0)=0xffffffffu; return; }
L8c01a75e:;
  R(7)=0x12cu;
  R(6)=R(5);
  R(1)=0x1000000u;
  R(5)+=0x1u;
  c->t=R(5)>=R(7);
  R(0)=0xcu;
  { uint32_t k=c->t; fp_ld(c,4,R(0)+R(4)); if(k) goto L8c01a7a6; }
L8c01a76e:;
  R(2)=LD32(R(4));
  c->t=(R(2)&R(1))==0;
  if(c->t) goto L8c01a778;
  { R(0)=R(5); return; }
L8c01a778:;
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(4));
  fp_cmp(c,1,4,3);
  if(!c->t) goto L8c01a79e;
  R(0)=LD32(R(4));
  R(3)=0x60000000u;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(0)^=0x1u;
  R(0)|=R(3);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c01a79e;
  R(0)=LD32(R(4));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==19;
  if(c->t) goto L8c01a79e;
  R(0)=0xcu;
  R(6)=R(5);
  fp_ld(c,4,R(0)+R(4));
L8c01a79e:;
  R(5)+=0x1u;
  c->t=R(5)>=R(7);
  { uint32_t k=!c->t; R(4)+=0x60u; if(k) goto L8c01a76e; }
L8c01a7a6:;
  R(0)=R(6);
  {  return; }
}
void f_8c01a7e0(SH4Ctx *c) {
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
  R(0)=0xcu;
  R(10)=0x80000u;
  R(8)=R(4);
  fp_st(c,4,R(15));
  fp_st(c,5,R(0)+R(15));
  R(0)=0x4u;
  R(10)&=R(8);
  R(9)=R(6);
  c->t=(R(10)&R(10))==0;
  R(11)=R(5);
  fp_st(c,6,R(0)+R(15));
  { uint32_t k=c->t; ST32(R(15)+8,R(7)); if(k) goto L8c01a82c; }
  R(1)=0x8c0c4630u;
  R(2)=0x12cu;
  R(3)=LD32(R(1));
  c->t=R(3)==R(2);
  if(c->t) goto L8c01a82c;
  R(4)=0x8c0c4688u;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==65;
  if(c->t) goto L8c01a840;
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  ST32(R(4),R(2));
L8c01a82c:;
  R(4)=0x8c0c4630u;
  R(3)=0x12cu;
  R(2)=LD32(R(4));
  c->t=R(2)==R(3);
  if(!c->t) goto L8c01a880;
  { c->pr=0x8c01a83au;  f_8c01a720(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c01a844; }
L8c01a840:;
  { R(0)=0x0u; goto L8c01abee; }
L8c01a844:;
  R(14)=R(4);
  c->t=R(14)>>31;R(14)<<=1;
  R(3)=R(4);
  R(14)+=R(3);
  R(14)<<=2;
  R(2)=0x8c129af4u;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  { R(14)+=R(2); goto L8c01a898; }
L8c01a880:;
  R(14)=LD32(R(4));
  R(1)=0x8c129af4u;
  R(14)+=0x1u;
  ST32(R(4),R(14));
  R(14)+=0xffffffffu;
  R(2)=R(14);
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(2);
  R(14)<<=2;
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  R(14)+=R(1);
L8c01a898:;
  R(4)=R(11);
  R(5)=R(14);
  R(5)+=0x1cu;
  ST32(R(14),R(8));
  R(3)=0x0u;
  c->t=(R(9)&R(9))==0;
  ST32(R(14)+4,R(3));
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  R(4)=R(14);
  R(4)+=0x10u;
  fp_st(c,2,R(5));
  R(5)=R(11);
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,3,R(5));R(5)+=fp_sz(c);
  fp_st(c,3,R(4));
  R(4)+=0x4u;
  fp_ld(c,2,R(5));
  { uint32_t k=c->t; fp_st(c,2,R(4)); if(k) goto L8c01a8e4; }
  R(4)=R(9);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(5)=R(14);
  R(5)+=0x28u;
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  fp_st(c,2,R(5));
L8c01a8e4:;
  R(2)=0x8c123b74u;
  R(3)=LD32(R(2));
  c->fpul=R(3);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; fp_float(c,3); if(k) goto L8c01a8f8; }
  R(2)=0x4f800000u;
  c->fpul=R(2);
  c->fr[2]=c->fpul;
  fp_arith(c,0,3,2);
L8c01a8f8:;
  R(0)=0x8c01a9f0u;
  fp_mov(c,4,3);
  fp_ld(c,2,R(0));
  R(0)=0xcu;
  R(3)=R(14);
  R(3)+=0x40u;
  fp_arith(c,2,4,2);
  R(1)=0x8c0bde98u;
  R(4)=0x8c0c467cu;
  fp_mov(c,3,4);
  fp_st(c,4,R(4));
  fp_st(c,3,R(0)+R(14));
  R(0)=0xcu;
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,3,R(3));
  fp_ld(c,3,R(0)+R(15));
  R(0)=0x44u;
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4cu;
  fp_ld(c,3,R(15));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x50u;
  R(3)=LD32(R(15)+8);
  ST32(R(14)+R(0),R(3));
  R(0)=0x48u;
  fp_ld(c,3,R(1));
  R(3)=0x8c129af0u;
  fp_ftrc(c,3);
  R(2)=c->fpul;
  ST32(R(14)+8,R(2));
  fp_ld(c,3,R(3));
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01aa00u;
  R(2)=0x10003300u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  c->t=R(8)==R(2);
  { uint32_t k=!c->t; fp_st(c,3,R(0)+R(14)); if(k) goto L8c01a952; }
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c01a952;
  fp_ld(c,3,R(9));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
L8c01a952:;
  R(3)=0xf000u;
  R(0)=0x8c01aa08u;
  R(2)=0x7000u;
  R(3)&=R(8);
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; fp_ld(c,15,R(0)); if(k) goto L8c01a964; }
  R(0)=0x58u;
  fp_st(c,15,R(0)+R(14));
L8c01a964:;
  R(0)=0x8c01aa10u;
  R(12)=0x8c0686d0u;
  R(13)=R(8)&0xFF;
  fp_ld(c,12,R(0));
  R(0)=R(13);
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c01a9b2;
  R(0)=0x8c01aa18u;
  { uint32_t tg=R(12); c->pr=0x8c01a978u; fp_ld(c,14,R(0)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01aa1cu;
  fp_ld(c,2,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,14);
  { uint32_t tg=R(12); c->pr=0x8c01a98cu; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01aa1cu;
  fp_ld(c,2,R(0));
  R(0)=0x14u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,14);
  { uint32_t tg=R(12); c->pr=0x8c01a9a0u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01aa1cu;
  fp_ld(c,2,R(0));
  R(0)=0x18u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,14);
  fp_st(c,3,R(0)+R(14));
L8c01a9b2:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==7;
  { uint32_t k=c->t; c->fr[14]=0x3F800000u; if(k) goto L8c01aa22; }
  R(0)=R(13);
  c->t=(int32_t)R(0)==11;
  {  goto L8c01aa20; }
L8c01aa20:;
  if(!c->t) goto L8c01aa6e;
L8c01aa22:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c01aa48;
  R(0)=0x8c01ac60u;
  { uint32_t tg=R(12); c->pr=0x8c01aa2cu; fp_ld(c,13,R(0)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ac64u;
  fp_ld(c,2,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,2,3,13);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(12); c->pr=0x8c01aa40u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  { fp_arith(c,2,3,13); goto L8c01aa66; }
L8c01aa48:;
  { uint32_t tg=R(12); c->pr=0x8c01aa4cu;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ac68u;
  fp_ld(c,2,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,2);
  { uint32_t tg=R(12); c->pr=0x8c01aa60u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  fp_float(c,3);
  fp_arith(c,2,3,14);
L8c01aa66:;
  fp_arith(c,3,3,12);
  R(0)=0x18u;
  fp_arith(c,0,3,14);
  fp_st(c,3,R(0)+R(14));
L8c01aa6e:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==8;
  { uint32_t k=!c->t; c->fr[13]=0x00000000u; if(k) goto L8c01aabc; }
  { uint32_t tg=R(12); c->pr=0x8c01aa7au;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ac6cu;
  fp_ld(c,2,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,13);
  { uint32_t tg=R(12); c->pr=0x8c01aa8eu; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ac70u;
  fp_ld(c,2,R(0));
  R(0)=0x8c01ac74u;
  fp_ld(c,1,R(0));
  R(0)=0x14u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,1);
  { uint32_t tg=R(12); c->pr=0x8c01aaa6u; fp_st(c,3,R(0)+R(14)); sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x18u;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,15);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8c01ac78u;
  fp_ld(c,3,R(0));
  R(0)=0x58u;
  fp_st(c,3,R(0)+R(14));
L8c01aabc:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==18;
  if(!c->t) goto L8c01ab2c;
  R(0)=0x4cu;
  fp_st(c,13,R(0)+R(14));
  R(0)=0x8c01ac7cu;
  fp_ld(c,4,R(0));
  R(4)=0x0u;
  R(5)=0xcu;
L8c01aace:;
  R(2)=R(14);
  R(1)=R(14);
  R(1)+=0x1cu;
  R(3)=R(14);
  R(2)+=0x28u;
  R(1)+=R(4);
  R(2)+=R(4);
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(2));
  R(3)+=0x10u;
  R(1)=R(14);
  R(2)=R(14);
  fp_arith(c,1,2,3);
  R(3)+=R(4);
  R(1)+=0x1cu;
  R(2)+=0x28u;
  R(4)+=0x4u;
  fp_arith(c,2,2,4);
  R(2)+=R(4);
  R(1)+=R(4);
  fp_st(c,2,R(3));
  R(3)=R(14);
  fp_ld(c,3,R(1));
  R(3)+=0x10u;
  fp_ld(c,2,R(2));
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_arith(c,1,2,3);
  fp_arith(c,2,2,4);
  fp_st(c,2,R(3));
  R(3)=R(14);
  R(3)+=0x10u;
  R(2)=R(14);
  R(1)=R(14);
  R(1)+=0x1cu;
  R(2)+=0x28u;
  R(1)+=R(4);
  R(2)+=R(4);
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(2));
  R(3)+=R(4);
  R(4)+=0x4u;
  fp_arith(c,1,2,3);
  c->t=R(4)>=R(5);
  fp_arith(c,2,2,4);
  fp_st(c,2,R(3));
  if(!c->t) goto L8c01aace;
L8c01ab2c:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==12;
  if(!c->t) goto L8c01abec;
  R(4)=R(11);
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(5)=R(14);
  R(5)+=0x10u;
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,3,R(4));R(4)+=fp_sz(c);
  R(6)=R(15);
  R(3)=0x8c02520au;
  R(6)+=0x10u;
  fp_st(c,3,R(5));
  R(5)+=0x4u;
  fp_ld(c,2,R(4));
  fp_st(c,2,R(5));
  R(5)=R(15);
  R(5)+=0x1cu;
  { c->pr=0x8c01ab56u; R(4)=R(9); f_8c02520a(c); }
  { uint32_t tg=R(12); c->pr=0x8c01ab5au;  sh4_call(c,tg); }
  c->fpul=R(0);
  R(0)=0x8c01ac84u;
  fp_ld(c,2,R(0));
  R(0)=0x48u;
  R(3)=R(14);
  R(3)+=0x8u;
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_arith(c,3,3,12);
  fp_mov(c,15,3);
  fp_arith(c,0,15,13);
  fp_st(c,15,R(0)+R(14));
  R(0)=0x8c01ac88u;
  fp_ld(c,14,R(0));
  { uint32_t tg=R(12); c->pr=0x8c01ab7au; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} sh4_call(c,tg); }
  c->fpul=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;}
  R(3)=0x8c03aedau;
  fp_float(c,3);
  fp_arith(c,2,3,14);
  fp_arith(c,3,3,12);
  fp_arith(c,0,3,14);
  fp_st(c,3,R(2));
  { c->pr=0x8c01ab8eu; fp_mov(c,4,15); f_8c03aeda(c); }
  fp_ld(c,3,R(15));
  R(0)=0x8c01ac90u;
  fp_mov(c,14,0);
  fp_arith(c,2,14,3);
  R(3)=0x8c03aedau;
  fp_ld(c,2,R(0));
  fp_mov(c,4,15);
  { c->pr=0x8c01aba0u; fp_arith(c,0,4,2); f_8c03aeda(c); }
  fp_ld(c,3,R(15));
  R(0)=0x1cu;
  fp_mov(c,4,0);
  fp_arith(c,2,4,3);
  fp_ld(c,2,R(0)+R(15));
  fp_ld(c,3,R(11));
  R(0)=0x10u;
  fp_mov(c,0,14);
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,0,4);
  R(0)=0x1cu;
  fp_fmac(c,3,2);
  fp_mov(c,0,14);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x4u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x20u;
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x14u;
  fp_fmac(c,3,2);
  fp_ld(c,2,R(0)+R(15));
  fp_mov(c,0,4);
  R(0)=0x20u;
  fp_fmac(c,3,2);
  fp_mov(c,0,14);
  fp_st(c,3,R(0)+R(14));
  R(0)=0x8u;
  fp_ld(c,3,R(0)+R(11));
  R(0)=0x24u;
  fp_ld(c,2,R(0)+R(15));
  fp_fmac(c,3,2);
  R(0)=0x18u;
  fp_mov(c,0,4);
  fp_ld(c,2,R(0)+R(15));
  R(0)=0x24u;
  fp_fmac(c,3,2);
  fp_st(c,3,R(0)+R(14));
L8c01abec:;
  R(0)=R(14);
L8c01abee:;
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
