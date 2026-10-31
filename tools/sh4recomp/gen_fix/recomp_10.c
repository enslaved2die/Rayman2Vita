#include "recomp_decls.h"
void f_8c0601c0(SH4Ctx *c) {
  R(3)=0x8c0685b4u;
  { R(6)=0x48u; { f_8c0685b4(c); return; } }
}
void f_8c0601ca(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(6)=0x8c2d4128u;
  R(7)=0x0u;
  R(5)=0x40u;
  R(4)=R(7);
L8c0601d4:;
  R(3)=R(4);
  R(3)<<=2;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(6);
  R(2)=LD32(R(3)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0601ea;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0601d4;
L8c0601ea:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c060200;
  R(3)=0x8c0633e4u;
  R(6)=0x3u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c0601fau; R(4)=0x14u; f_8c0633e4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c060200:;
  R(5)=R(4);
  R(5)<<=2;
  R(5)<<=2;
  c->t=R(5)>>31;R(5)<<=1;
  R(4)=0x1u;
  R(3)=0xffffffffu;
  R(5)+=R(6);
  R(0)=R(5);
  ST32(R(5)+8,R(7));
  ST32(R(5)+12,R(4));
  ST32(R(5)+20,R(4));
  ST32(R(5),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c060228(SH4Ctx *c) {
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(2)=0x1u; if(k) goto L8c060238; }
  R(3)=LD32(R(4)+24);
  R(5)=0x0u;
  ST32(R(3),R(5));
  ST32(R(4)+24,R(5));
L8c060238:;
  { ST32(R(4)+8,R(2)); return; }
}
void f_8c06023c(SH4Ctx *c) {
  R(3)=0x0u;
  { ST32(R(4)+24,R(3)); return; }
}
void f_8c060280(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(10)=0x0u;
  R(14)=0x8c2d4128u;
  R(12)=R(4);
  R(9)=0x40u;
  R(11)=R(10);
  ST32(R(15),R(7));
  R(13)=R(5);
L8c06029e:;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0602d2;
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0602b0;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0602ce;
L8c0602b0:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0602c8;
  R(2)=LD32(R(14));
  c->t=R(2)==R(13);
  if(!c->t) goto L8c0602c8;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(15)+32);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(1)+4);
  c->t=R(1)==R(2);
  if(c->t) goto L8c0602ce;
L8c0602c8:;
  R(0)=LD32(R(14)+20);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0602d2;
L8c0602ce:;
  { c->pr=0x8c0602d2u; R(4)=R(14); f_8c060228(c); }
L8c0602d2:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(11)+=0x1u; if(k) goto L8c06030a; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0602e8;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060306;
L8c0602e8:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c060300;
  R(2)=LD32(R(14));
  c->t=R(2)==R(13);
  if(!c->t) goto L8c060300;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(15)+32);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(1)+4);
  c->t=R(1)==R(2);
  if(c->t) goto L8c060306;
L8c060300:;
  R(0)=LD32(R(14)+20);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06030a;
L8c060306:;
  { c->pr=0x8c06030au; R(4)=R(14); f_8c060228(c); }
L8c06030a:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(11)+=0x1u; if(k) goto L8c060342; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c060320;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06033e;
L8c060320:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c060338;
  R(2)=LD32(R(14));
  c->t=R(2)==R(13);
  if(!c->t) goto L8c060338;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(15)+32);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(1)+4);
  c->t=R(1)==R(2);
  if(c->t) goto L8c06033e;
L8c060338:;
  R(0)=LD32(R(14)+20);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c060342;
L8c06033e:;
  { c->pr=0x8c060342u; R(4)=R(14); f_8c060228(c); }
L8c060342:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+8);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; R(11)+=0x1u; if(k) goto L8c06037a; }
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c060358;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060376;
L8c060358:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c060370;
  R(2)=LD32(R(14));
  c->t=R(2)==R(13);
  if(!c->t) goto L8c060370;
  R(3)=LD32(R(14)+4);
  R(1)=LD32(R(15)+32);
  R(2)=LD32(R(3)+4);
  R(1)=LD32(R(1)+4);
  c->t=R(1)==R(2);
  if(c->t) goto L8c060376;
L8c060370:;
  R(0)=LD32(R(14)+20);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06037a;
L8c060376:;
  { c->pr=0x8c06037au; R(4)=R(14); f_8c060228(c); }
L8c06037a:;
  R(11)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(9);
  { uint32_t k=!c->t; R(14)+=0x20u; if(k) goto L8c06029e; }
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0603ba; }
  R(4)=R(15);
  R(4)+=0x20u;
  ST32(R(12),R(13));
  R(2)=LD32(R(4));
  ST32(R(12)+4,R(2));
  ST32(R(12)+8,R(10));
  ST32(R(12)+12,R(10));
  ST32(R(12)+20,R(5));
  R(3)=LD32(R(15));
  ST32(R(12)+24,R(3));
  R(2)=LD32(R(15)+36);
  ST32(R(12)+16,R(2));
  ST32(R(12)+28,R(10));
  R(3)=LD32(R(12)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0603ae;
  R(3)=LD32(R(12)+24);
  ST32(R(3),R(5));
L8c0603ae:;
  R(1)=0x8c0c6ee0u;
  R(3)=LD32(R(4));
  R(2)=LD32(R(1));
  c->t=R(3)==R(2);
  { R(0)=R(12); goto L8c0603c0; }
L8c0603ba:;
  R(0)=0xffffffffu;
  ST32(R(12)+8,R(5));
  ST32(R(12)+24,R(10));
L8c0603c0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060400(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+4);
  ST32(R(5)+4,R(3));
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06042c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c060432;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c060438;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c06043e;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c060444;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c06044a;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c060450;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c060456;
  {  goto L8c06045c; }
L8c06042c:;
  R(2)=0x8c0970aeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0970ae(c); return; } }
L8c060432:;
  R(2)=0x8c097f80u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c097f80(c); return; } }
L8c060438:;
  R(2)=0x8c097ee2u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c097ee2(c); return; } }
L8c06043e:;
  R(2)=0x8c094fc2u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c094fc2(c); return; } }
L8c060444:;
  R(2)=0x8c095f6eu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c095f6e(c); return; } }
L8c06044a:;
  R(2)=0x8c095f20u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c095f20(c); return; } }
L8c060450:;
  R(2)=0x8c0963dcu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0963dc(c); return; } }
L8c060456:;
  R(2)=0x8c094ea0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c094ea0(c); return; } }
L8c06045c:;
  R(2)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c060464u; R(4)=0x15u; f_8c0633e0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0604c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=R(4);
  R(10)=0x8c2d4128u;
  R(4)=0x0u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=0x40u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)+=R(10);
  R(13)=R(4);
  R(12)=R(4);
  R(14)=R(4);
L8c0604e2:;
  R(4)=R(11);
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(10);
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060510;
  R(3)=LD32(R(4)+4);
  c->t=R(3)==R(9);
  if(!c->t) goto L8c060510;
  R(1)=LD32(R(4)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c060510;
  R(2)=LD32(R(13)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06050c;
  { c->pr=0x8c060508u; R(4)=R(12); f_8c060eb4(c); }
  {  goto L8c060510; }
L8c06050c:;
  { c->pr=0x8c060510u; R(4)=R(14); f_8c060912(c); }
L8c060510:;
  R(11)+=0x1u;
  R(4)=R(11);
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(10);
  R(3)=LD32(R(4)+8);
  R(12)+=0x20u;
  R(14)+=0x20u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)+=0x20u; if(k) goto L8c060546; }
  R(3)=LD32(R(4)+4);
  c->t=R(3)==R(9);
  if(!c->t) goto L8c060546;
  R(1)=LD32(R(4)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c060546;
  R(2)=LD32(R(13)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060542;
  { c->pr=0x8c06053eu; R(4)=R(12); f_8c060eb4(c); }
  {  goto L8c060546; }
L8c060542:;
  { c->pr=0x8c060546u; R(4)=R(14); f_8c060912(c); }
L8c060546:;
  R(11)+=0x1u;
  R(4)=R(11);
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(10);
  R(3)=LD32(R(4)+8);
  R(12)+=0x20u;
  R(14)+=0x20u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)+=0x20u; if(k) goto L8c06057c; }
  R(3)=LD32(R(4)+4);
  c->t=R(3)==R(9);
  if(!c->t) goto L8c06057c;
  R(1)=LD32(R(4)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c06057c;
  R(2)=LD32(R(13)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060578;
  { c->pr=0x8c060574u; R(4)=R(12); f_8c060eb4(c); }
  {  goto L8c06057c; }
L8c060578:;
  { c->pr=0x8c06057cu; R(4)=R(14); f_8c060912(c); }
L8c06057c:;
  R(11)+=0x1u;
  R(4)=R(11);
  R(4)<<=2;
  R(4)<<=2;
  c->t=R(4)>>31;R(4)<<=1;
  R(4)+=R(10);
  R(3)=LD32(R(4)+8);
  R(12)+=0x20u;
  R(14)+=0x20u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)+=0x20u; if(k) goto L8c0605b2; }
  R(3)=LD32(R(4)+4);
  c->t=R(3)==R(9);
  if(!c->t) goto L8c0605b2;
  R(1)=LD32(R(4)+20);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0605b2;
  R(2)=LD32(R(13)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0605ae;
  { c->pr=0x8c0605aau; R(4)=R(12); f_8c060eb4(c); }
  {  goto L8c0605b2; }
L8c0605ae:;
  { c->pr=0x8c0605b2u; R(4)=R(14); f_8c060912(c); }
L8c0605b2:;
  R(11)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(8);
  R(12)+=0x20u;
  R(14)+=0x20u;
  { uint32_t k=!c->t; R(13)+=0x20u; if(k) goto L8c0604e2; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0605d0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c060620;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c06062a;
  {  goto L8c060630; }
L8c060620:;
  R(3)=0x8c0970c0u;
  { c->pr=0x8c060626u; R(4)=R(14); f_8c0970c0(c); }
  {  goto L8c060630; }
L8c06062a:;
  R(3)=0x8c09647cu;
  { c->pr=0x8c060630u; R(4)=R(14); f_8c09647c(c); }
L8c060630:;
  R(3)=0x0u;
  ST32(R(14)+4,R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06063a(SH4Ctx *c) {
  R(6)=0x800u;
  R(5)=0x8c2d4128u;
  R(6)+=R(5);
  R(4)=R(5);
  c->t=R(4)>=R(6);
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c060654; }
L8c060648:;
  ST32(R(4)+8,R(5));
  R(4)+=0x20u;
  ST32(R(4)+8,R(5));
  R(4)+=0x20u;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c060648;
L8c060654:;
  {  return; }
}
void f_8c060658(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  { c->pr=0x8c060662u; R(14)=R(4); f_8c06063a(c); }
  R(2)=0x8c0971e0u;
  { c->pr=0x8c060668u; R(4)=R(14); f_8c0971e0(c); }
  R(3)=0x8c2d4928u;
  R(2)=0x8c095698u;
  ST32(R(3),R(0));
  { c->pr=0x8c060672u; R(4)=R(15); f_8c095698(c); }
  R(3)=0x8c09759cu;
  { c->pr=0x8c060678u; R(4)=R(15); f_8c09759c(c); }
  R(2)=0x8c097f94u;
  { c->pr=0x8c06067eu; R(4)=R(14); f_8c097f94(c); }
  R(3)=0x8c2d4930u;
  R(2)=0x8c097da4u;
  ST32(R(3),R(0));
  { c->pr=0x8c060688u; R(4)=R(14); f_8c097da4(c); }
  R(2)=0x8c095040u;
  R(3)=0x8c2d492cu;
  { c->pr=0x8c060690u; ST32(R(3),R(0)); f_8c095040(c); }
  R(1)=0x8c0963a0u;
  { c->pr=0x8c060696u;  f_8c0963a0(c); }
  R(0)=0x3u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0606e0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09565au;
  { c->pr=0x8c0606e8u; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c09565a(c); }
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  R(3)=0x8c09759cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c09759c(c); return; } }
}
void f_8c0606f2(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c095888u;
  { c->pr=0x8c0606fau; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c095888(c); }
  R(4)=LD32(R(15));
  R(15)+=0x4u;
  R(3)=0x8c09723eu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c09723e(c); return; } }
}
void f_8c060704(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(6);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c06071cu; R(12)=R(7); f_8c0601ca(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(9)=R(0); if(k) goto L8c060760; }
  { R(0)=0xffffffffu; goto L8c060850; }
L8c060760:;
  R(14)=R(15);
  R(14)+=0x1cu;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+4);
  R(1)=0xcu;
  c->t=R(0)>=R(1);
  if(c->t) goto L8c060834;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c06077cu;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c06077au+R(0));  switch(tg){ case 0x8c060794u: goto L8c060794; case 0x8c0607a8u: goto L8c0607a8; case 0x8c0607bcu: goto L8c0607bc; case 0x8c0607d0u: goto L8c0607d0; case 0x8c0607eau: goto L8c0607ea; case 0x8c060806u: goto L8c060806; case 0x8c06081au: goto L8c06081a; case 0x8c060830u: goto L8c060830; case 0x8c060834u: goto L8c060834; default: sh4_bad_jump(c,0x8c060776u,tg); return; } }
L8c060794:;
  R(3)=LD32(R(14));
  R(5)=R(13);
  R(2)=0x8c096eeau;
  R(6)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  { c->pr=0x8c0607a4u; R(4)=R(10); f_8c096eea(c); }
  {  goto L8c060816; }
L8c0607a8:;
  R(2)=LD32(R(14));
  R(5)=R(13);
  R(3)=0x8c097f98u;
  R(6)=R(11);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  { c->pr=0x8c0607b8u; R(4)=R(10); f_8c097f98(c); }
  {  goto L8c060816; }
L8c0607bc:;
  R(3)=LD32(R(14));
  R(5)=R(13);
  R(2)=0x8c097e00u;
  R(6)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  { c->pr=0x8c0607ccu; R(4)=R(10); f_8c097e00(c); }
  {  goto L8c060816; }
L8c0607d0:;
  R(2)=R(9);
  R(2)+=0x14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=R(13);
  R(3)=LD32(R(14));
  R(6)=R(11);
  R(2)=0x8c095110u;
  R(7)=R(12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0607e6u; R(4)=R(10); f_8c095110(c); }
  { R(15)+=0x8u; goto L8c06082c; }
L8c0607ea:;
  R(2)=R(9);
  R(2)+=0x14u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=R(10);
  R(2)=0x8c0965a0u;
  R(6)=R(13);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(11);
  R(3)=LD32(R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c060802u; R(4)=0xffffffffu; f_8c0965a0(c); }
  { R(15)+=0xcu; goto L8c06082c; }
L8c060806:;
  R(2)=LD32(R(14));
  R(5)=R(13);
  R(3)=0x8c094c60u;
  R(6)=R(11);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  { c->pr=0x8c060816u; R(4)=R(10); f_8c094c60(c); }
L8c060816:;
  { R(15)+=0x4u; goto L8c06082c; }
L8c06081a:;
  R(3)=LD32(R(14));
  R(5)=R(13);
  R(2)=0x8c095c20u;
  R(6)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(12);
  { c->pr=0x8c06082au; R(4)=R(10); f_8c095c20(c); }
  R(15)+=0x4u;
L8c06082c:;
  { R(5)=R(0); goto L8c06083e; }
L8c060830:;
  {  goto L8c06083c; }
L8c060834:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c06083cu; R(4)=0x15u; f_8c0633e0(c); }
L8c06083c:;
  R(5)=0xffffffffu;
L8c06083e:;
  R(2)=0x0u;
  R(6)=R(13);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+40);
  { c->pr=0x8c06084eu; R(4)=R(9); f_8c060280(c); }
  R(15)+=0x8u;
L8c060850:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060860(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c6dc8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(14)+4);
  R(13)=LD32(R(13)+4);
  R(3)=R(13);
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  R(13)=LD32(R(13)+R(0));
  { uint32_t tg=R(13); c->pr=0x8c06087eu; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c060888;
  { c->pr=0x8c060888u; R(4)=R(14); f_8c060228(c); }
L8c060888:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0608e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=0x8c0c6dd4u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(14)+4);
  R(13)=LD32(R(13)+4);
  R(3)=R(13);
  c->t=R(13)>>31;R(13)<<=1;
  R(13)+=R(3);
  R(13)<<=2;
  c->t=R(13)>>31;R(13)<<=1;
  R(13)=LD32(R(13)+R(0));
  { uint32_t tg=R(13); c->pr=0x8c0608feu; R(4)=LD32(R(14)); sh4_call(c,tg); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c060908;
  { c->pr=0x8c060908u; R(4)=R(14); f_8c060228(c); }
L8c060908:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060912(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060934;
  R(3)=LD32(R(14)+4);
  R(0)=0x8c0c6dccu;
  R(3)=LD32(R(3)+4);
  R(2)=R(3);
  c->t=R(3)>>31;R(3)<<=1;
  R(3)+=R(2);
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(1)=LD32(R(3)+R(0));
  { uint32_t tg=R(1); c->pr=0x8c060934u; R(4)=LD32(R(14)); sh4_call(c,tg); }
L8c060934:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060228(c); return; } }
}
void f_8c06093c(SH4Ctx *c) {
  R(3)=R(4);
  R(0)=0x8c0c6dc0u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(3)+4);
  R(4)=LD32(R(4));
  R(2)=LD32(R(2)+4);
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(1)=LD32(R(2)+R(0));
  { uint32_t tg=R(1); R(15)+=0x4u; sh4_call(c,tg); return; }
}
void f_8c060958(SH4Ctx *c) {
  R(3)=R(4);
  R(0)=0x8c0c6dc4u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(3)+4);
  R(4)=LD32(R(4));
  R(2)=LD32(R(2)+4);
  R(3)=R(2);
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(1)=LD32(R(2)+R(0));
  { uint32_t tg=R(1); R(15)+=0x4u; sh4_call(c,tg); return; }
}
void f_8c060974(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0609a0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0609a8;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0609b0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c0609b8;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c0609e0;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0609e8;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c0609f0;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c0609f8;
  {  goto L8c0609f8; }
L8c0609a0:;
  R(3)=0x8c096f6au;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c096f6a(c); return; } }
L8c0609a8:;
  R(3)=0x8c097fb0u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c097fb0(c); return; } }
L8c0609b0:;
  R(3)=0x8c097db0u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c097db0(c); return; } }
L8c0609b8:;
  R(3)=0x8c095544u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c095544(c); return; } }
L8c0609e0:;
  R(3)=0x8c096816u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c096816(c); return; } }
L8c0609e8:;
  R(3)=0x8c095e90u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c095e90(c); return; } }
L8c0609f0:;
  R(3)=0x8c094dfau;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c094dfa(c); return; } }
L8c0609f8:;
  R(3)=0x8c0633e0u;
  R(4)=0x15u;
  R(5)=0x8c0bada8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0633e0(c); return; } }
}
void f_8c060a02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x40u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c6ee4u;
  R(14)=0x8c2d4128u;
L8c060a14:;
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c060a3c;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060a3c;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060a3c;
  R(3)=LD32(R(13));
  ST32(R(14)+28,R(3));
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060a38;
  { c->pr=0x8c060a34u; R(4)=R(14); f_8c060f42(c); }
  {  goto L8c060a3c; }
L8c060a38:;
  { c->pr=0x8c060a3cu; R(4)=R(14); f_8c06093c(c); }
L8c060a3c:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)+=0x1u; if(k) goto L8c060a68; }
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060a68;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060a68;
  R(3)=LD32(R(13));
  ST32(R(14)+28,R(3));
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060a64;
  { c->pr=0x8c060a60u; R(4)=R(14); f_8c060f42(c); }
  {  goto L8c060a68; }
L8c060a64:;
  { c->pr=0x8c060a68u; R(4)=R(14); f_8c06093c(c); }
L8c060a68:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)+=0x1u; if(k) goto L8c060a94; }
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060a94;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060a94;
  R(3)=LD32(R(13));
  ST32(R(14)+28,R(3));
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060a90;
  { c->pr=0x8c060a8cu; R(4)=R(14); f_8c060f42(c); }
  {  goto L8c060a94; }
L8c060a90:;
  { c->pr=0x8c060a94u; R(4)=R(14); f_8c06093c(c); }
L8c060a94:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)+=0x1u; if(k) goto L8c060ae4; }
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060ae4;
  R(3)=LD32(R(14)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060ae4;
  R(3)=LD32(R(13));
  ST32(R(14)+28,R(3));
  R(2)=LD32(R(14)+16);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060ae0;
  { c->pr=0x8c060ab8u; R(4)=R(14); f_8c060f42(c); }
  {  goto L8c060ae4; }
L8c060ae0:;
  { c->pr=0x8c060ae4u; R(4)=R(14); f_8c06093c(c); }
L8c060ae4:;
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  { uint32_t k=!c->t; R(14)+=0x20u; if(k) goto L8c060a14; }
  R(3)=LD32(R(13));
  R(3)+=0x1u;
  ST32(R(13),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060afe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c0c6ee4u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(13);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x40u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4));
  R(14)=0x8c2d4128u;
  R(3)+=0xffffffffu;
  ST32(R(4),R(3));
L8c060b18:;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c060b42;
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060b42;
  R(1)=0x8c0c6ee4u;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(1));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c060b42;
  ST32(R(14)+28,R(13));
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c060b3e;
  { c->pr=0x8c060b3au; R(4)=R(14); f_8c060f20(c); }
  {  goto L8c060b42; }
L8c060b3e:;
  { c->pr=0x8c060b42u; R(4)=R(14); f_8c060958(c); }
L8c060b42:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)+=0x1u; if(k) goto L8c060b70; }
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060b70;
  R(1)=0x8c0c6ee4u;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(1));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c060b70;
  ST32(R(14)+28,R(13));
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c060b6c;
  { c->pr=0x8c060b68u; R(4)=R(14); f_8c060f20(c); }
  {  goto L8c060b70; }
L8c060b6c:;
  { c->pr=0x8c060b70u; R(4)=R(14); f_8c060958(c); }
L8c060b70:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)+=0x1u; if(k) goto L8c060b9e; }
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060b9e;
  R(1)=0x8c0c6ee4u;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(1));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c060b9e;
  ST32(R(14)+28,R(13));
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c060b9a;
  { c->pr=0x8c060b96u; R(4)=R(14); f_8c060f20(c); }
  {  goto L8c060b9e; }
L8c060b9a:;
  { c->pr=0x8c060b9eu; R(4)=R(14); f_8c060958(c); }
L8c060b9e:;
  R(14)+=0x20u;
  R(2)=LD32(R(14)+20);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)+=0x1u; if(k) goto L8c060bcc; }
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060bcc;
  R(1)=0x8c0c6ee4u;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(1));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c060bcc;
  ST32(R(14)+28,R(13));
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c060bc8;
  { c->pr=0x8c060bc4u; R(4)=R(14); f_8c060f20(c); }
  {  goto L8c060bcc; }
L8c060bc8:;
  { c->pr=0x8c060bccu; R(4)=R(14); f_8c060958(c); }
L8c060bcc:;
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  { uint32_t k=!c->t; R(14)+=0x20u; if(k) goto L8c060b18; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060be0(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  ST8(R(15),R(4));
  R(3)=0x8c09717au;
  R(4)=(int32_t)(int8_t)LD8(R(15));
  { R(15)+=0x4u; { f_8c09717a(c); return; } }
}
void f_8c060c20(SH4Ctx *c) {
  R(3)=0x8c097180u;
  {  { f_8c097180(c); return; } }
}
void f_8c060c26(SH4Ctx *c) {
  R(3)=0x8c097186u;
  {  { f_8c097186(c); return; } }
}
void f_8c060c2c(SH4Ctx *c) {
  R(3)=0x8c09718cu;
  {  { f_8c09718c(c); return; } }
}
void f_8c060c32(SH4Ctx *c) {
  R(3)=0x8c0967a8u;
  {  { f_8c0967a8(c); return; } }
}
void f_8c060c38(SH4Ctx *c) {
  R(3)=0x8c097192u;
  {  { f_8c097192(c); return; } }
}
void f_8c060c3e(SH4Ctx *c) {
  R(3)=0x8c097198u;
  {  { f_8c097198(c); return; } }
}
void f_8c060c44(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c097220u;
  { c->pr=0x8c060c4cu;  f_8c097220(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c060c6a;
  R(3)=0x8c097da8u;
  { c->pr=0x8c060c56u;  f_8c097da8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c060c6a;
  R(3)=0x8c097f8cu;
  { c->pr=0x8c060c60u;  f_8c097f8c(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c060c6a;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c060c6a:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c060c6a(SH4Ctx *c) {
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c060c72(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0963b0u;
  { c->pr=0x8c060c7au;  f_8c0963b0(c); }
  R(2)=0x8c09508au;
  { c->pr=0x8c060c80u;  f_8c09508a(c); }
  R(3)=0x8c2d492cu;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c060c8e;
  R(1)=0x8c097dacu;
  { c->pr=0x8c060c8eu;  f_8c097dac(c); }
L8c060c8e:;
  R(2)=0x8c2d4930u;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c060c9c;
  R(1)=0x8c097fa4u;
  { c->pr=0x8c060c9cu;  f_8c097fa4(c); }
L8c060c9c:;
  R(3)=0x8c2d4928u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c060caa;
  R(1)=0x8c097226u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c097226(c); return; } }
L8c060caa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c060d20(SH4Ctx *c) {
  { R(0)=0x1u; return; }
}
void f_8c060d24(SH4Ctx *c) {
  {  return; }
}
void f_8c060d28(SH4Ctx *c) {
  {  return; }
}
void f_8c060d2c(SH4Ctx *c) {
  R(3)=0x8c097238u;
  {  { f_8c097238(c); return; } }
}
void f_8c060d32(SH4Ctx *c) {
  R(3)=0x8c097244u;
  {  { f_8c097244(c); return; } }
}
void f_8c060d38(SH4Ctx *c) {
  R(3)=0x8c0973d2u;
  {  { f_8c0973d2(c); return; } }
}
void f_8c060d3e(SH4Ctx *c) {
  R(3)=0x8c09736au;
  {  { f_8c09736a(c); return; } }
}
void f_8c060d44(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  { c->pr=0x8c060d52u; ST32(R(15)+8,R(6)); f_8c0601ca(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; ST32(R(15)+12,R(0)); if(k) goto L8c060d62; }
  R(0)=0xffffffffu;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c060d62:;
  R(14)=R(15);
  R(14)+=0x18u;
  R(0)=LD32(R(14));
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c060d86;
  R(3)=LD32(R(15)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14));
  R(3)=0x8c097444u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+8);
  R(6)=LD32(R(15)+16);
  { c->pr=0x8c060d80u; R(4)=LD32(R(15)+12); f_8c097444(c); }
  R(15)+=0x8u;
  { R(5)=R(0); goto L8c060d90; }
L8c060d86:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c060d8eu; R(4)=0x15u; f_8c0633e0(c); }
  R(5)=0xffffffffu;
L8c060d90:;
  R(3)=0x1u;
  R(7)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(14));
  R(6)=R(7);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c060da0u; R(4)=LD32(R(15)+20); f_8c060280(c); }
  R(15)+=0x8u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060daa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(13)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c060e00;
  R(3)=0x8c0974c0u;
  { c->pr=0x8c060dc0u; R(4)=LD32(R(13)); f_8c0974c0(c); }
  { R(14)=R(0); goto L8c060e0a; }
L8c060e00:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c060e08u; R(4)=0x15u; f_8c0633e0(c); }
  R(14)=0x0u;
L8c060e0a:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c060e12;
  { c->pr=0x8c060e12u; R(4)=R(13); f_8c060228(c); }
L8c060e12:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060e1c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c060e3a;
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0974c6u;
  { c->pr=0x8c060e34u; R(4)=LD32(R(14)); f_8c0974c6(c); }
  R(15)+=0x4u;
  { R(4)=R(0); goto L8c060e44; }
L8c060e3a:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c060e42u; R(4)=0x15u; f_8c0633e0(c); }
  R(4)=0x0u;
L8c060e44:;
  R(3)=LD32(R(15)+8);
  R(0)=R(4);
  ST32(R(14)+4,R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060e50(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c060e6e;
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0974dau;
  { c->pr=0x8c060e68u; R(4)=LD32(R(14)); f_8c0974da(c); }
  R(15)+=0x4u;
  { R(4)=R(0); goto L8c060e78; }
L8c060e6e:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c060e76u; R(4)=0x15u; f_8c0633e0(c); }
  R(4)=0x0u;
L8c060e78:;
  R(3)=LD32(R(15)+8);
  R(0)=R(4);
  ST32(R(14)+4,R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060e84(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c060ea2;
  R(3)=LD32(R(15)+8);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0974eeu;
  { c->pr=0x8c060e9cu; R(4)=LD32(R(14)); f_8c0974ee(c); }
  R(15)+=0x4u;
  { R(4)=R(0); goto L8c060eac; }
L8c060ea2:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c060eaau; R(4)=0x15u; f_8c0633e0(c); }
  R(4)=0x0u;
L8c060eac:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c060eb4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c060eda;
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c060ed2;
  R(3)=0x8c097502u;
  { c->pr=0x8c060eceu; R(4)=LD32(R(14)); f_8c097502(c); }
  {  goto L8c060eda; }
L8c060ed2:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c060edau; R(4)=0x15u; f_8c0633e0(c); }
L8c060eda:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c060228(c); return; } }
}
void f_8c060f20(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=R(4);
  ST32(R(15),R(4));
  R(0)=LD32(R(0)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c060f38;
  R(4)=LD32(R(15));
  R(3)=0x8c09750eu;
  R(4)=LD32(R(4));
  { R(15)+=0x4u; { f_8c09750e(c); return; } }
L8c060f38:;
  R(3)=0x8c0633e0u;
  R(4)=0x15u;
  R(5)=0x8c0bada8u;
  { R(15)+=0x4u; { f_8c0633e0(c); return; } }
}
void f_8c060f42(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(0)=R(4);
  ST32(R(15),R(4));
  R(0)=LD32(R(0)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c060f5a;
  R(4)=LD32(R(15));
  R(3)=0x8c097508u;
  R(4)=LD32(R(4));
  { R(15)+=0x4u; { f_8c097508(c); return; } }
L8c060f5a:;
  R(3)=0x8c0633e0u;
  R(4)=0x15u;
  R(5)=0x8c0bada8u;
  { R(15)+=0x4u; { f_8c0633e0(c); return; } }
}
void f_8c060f64(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c097f1cu;
  { c->pr=0x8c060f6cu;  f_8c097f1c(c); }
  R(2)=0x8c097fccu;
  { c->pr=0x8c060f72u;  f_8c097fcc(c); }
  R(3)=0x8c097514u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c097514(c); return; } }
}
void f_8c060f78(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09751au;
  { c->pr=0x8c060f80u;  f_8c09751a(c); }
  R(2)=0x8c097fd0u;
  { c->pr=0x8c060f86u;  f_8c097fd0(c); }
  R(3)=0x8c097f20u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c097f20(c); return; } }
}
void f_8c060f8c(SH4Ctx *c) {
  R(3)=0x8c097520u;
  {  { f_8c097520(c); return; } }
}
void f_8c060f92(SH4Ctx *c) {
  R(3)=0x8c097526u;
  {  { f_8c097526(c); return; } }
}
void f_8c060f98(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c060fba;
  R(0)=LD32(R(14)+4);
  R(1)=0x8c0c6dd0u;
  R(0)=LD32(R(0)+4);
  R(4)=LD32(R(14));
  R(3)=R(0);
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)=LD32(R(1)+R(0));
  { uint32_t tg=R(0); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c060fba:;
  R(0)=0xfffffffeu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061000(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c061082;
  R(0)=LD32(R(14)+4);
  R(0)=LD32(R(0)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c061034;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06103e;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c061048;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c061052;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c06105c;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c061066;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c061070;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c06107a;
  {  goto L8c06107a; }
L8c061034:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c09715au;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09715a(c); return; } }
L8c06103e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c097fc4u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c097fc4(c); return; } }
L8c061048:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c097f28u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c097f28(c); return; } }
L8c061052:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0955e4u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0955e4(c); return; } }
L8c06105c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c09681eu;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c09681e(c); return; } }
L8c061066:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c094e2cu;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c094e2c(c); return; } }
L8c061070:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c095ee0u;
  R(4)=LD32(R(14));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c095ee0(c); return; } }
L8c06107a:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c061082u; R(4)=0x15u; f_8c0633e0(c); }
L8c061082:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xffffffffu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06108a(SH4Ctx *c) {
  R(3)=0x8c09752cu;
  {  { f_8c09752c(c); return; } }
}
void f_8c061090(SH4Ctx *c) {
  R(3)=0x8c097532u;
  {  { f_8c097532(c); return; } }
}
void f_8c0610e0(SH4Ctx *c) {
  R(3)=0x8c097580u;
  {  { f_8c097580(c); return; } }
}
void f_8c0610e6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c097586u;
  { c->pr=0x8c0610eeu;  f_8c097586(c); }
  R(2)=0x8c097f2cu;
  { c->pr=0x8c0610f4u;  f_8c097f2c(c); }
  R(3)=0x8c097fd4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c097fd4(c); return; } }
}
void f_8c061122(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=R(15);
  R(14)+=0xcu;
  R(6)=LD32(R(14));
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c06113c;
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(14));
  ST32(R(1),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c06113c:;
  R(0)=LD32(R(6)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c061166;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c061166;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c061166;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c061166;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c061166;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c0611a0;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0611b0;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c0611c4;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0611c4;
  {  goto L8c0611c4; }
L8c061166:;
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(14));
  ST32(R(1),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0611a0:;
  R(2)=LD32(R(14));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c094eeeu;
  R(3)=LD32(R(15)+12);
  { c->pr=0x8c0611acu; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c094eee(c); }
  {  goto L8c0611bc; }
L8c0611b0:;
  R(3)=LD32(R(14));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c095fb0u;
  R(2)=LD32(R(15)+12);
  { c->pr=0x8c0611bcu; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c095fb0(c); }
L8c0611bc:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0611c4:;
  R(2)=0x8c0633e0u;
  R(5)=0x8c0bada8u;
  { c->pr=0x8c0611ccu; R(4)=0x15u; f_8c0633e0(c); }
  R(2)=0x8c0c6ee0u;
  R(1)=LD32(R(15)+8);
  R(3)=LD32(R(2));
  ST32(R(1),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0611da(SH4Ctx *c) {
  R(3)=0x8c0975c6u;
  {  { f_8c0975c6(c); return; } }
}
void f_8c0611e0(SH4Ctx *c) {
  R(3)=0x8c0975c0u;
  {  { f_8c0975c0(c); return; } }
}
void f_8c0611e6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0975bcu;
  { c->pr=0x8c0611eeu; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c0975bc(c); }
  R(5)=LD32(R(15));
  R(4)=R(0);
  R(15)+=0x4u;
  R(3)=0x8c0975a6u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0975a6(c); return; } }
}
void f_8c0611fa(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=0x0u;
  R(4)=R(15);
  R(2)=R(3);
  ST32(R(4),R(3));
  R(1)=LD32(R(15)+4);
  ST32(R(1),R(3));
  { R(15)+=0x4u; return; }
}
void f_8c06120c(SH4Ctx *c) {
  {  return; }
}
void f_8c061210(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c061298;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c061232;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c061238;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c061280;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c061286;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c06128c;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c061292;
  {  goto L8c061298; }
L8c061232:;
  R(2)=0x8c097600u;
  {  { f_8c097600(c); return; } }
L8c061238:;
  R(2)=0x8c097f64u;
  {  { f_8c097f64(c); return; } }
L8c061280:;
  R(2)=0x8c0955e8u;
  {  { f_8c0955e8(c); return; } }
L8c061286:;
  R(2)=0x8c095ff8u;
  {  { f_8c095ff8(c); return; } }
L8c06128c:;
  R(2)=0x8c094f2eu;
  {  { f_8c094f2e(c); return; } }
L8c061292:;
  R(2)=0x8c096860u;
  {  { f_8c096860(c); return; } }
L8c061298:;
  { R(0)=0x0u; return; }
}
void f_8c061280(SH4Ctx *c) {
  R(2)=0x8c0955e8u;
  {  { f_8c0955e8(c); return; } }
}
void f_8c0612c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c09cf24u;
  R(13)=R(4);
  { c->pr=0x8c0612d2u; R(12)=R(5); f_8c09cf24(c); }
  R(2)=0x8c09cf24u;
  R(14)=R(0);
  { c->pr=0x8c0612dau; R(4)=R(12); f_8c09cf24(c); }
  R(7)=0x800u;
  R(3)=0xfffffff8u;
  R(5)=R(13);
  R(6)=R(12);
  c->t=R(14)>=R(7);
  R(4)=R(0);
  R(5)=sh4_shad(R(5),R(3));
  { uint32_t k=c->t; R(6)=sh4_shad(R(6),R(3)); if(k) goto L8c061300; }
  c->t=R(4)>=R(7);
  if(c->t) goto L8c061300;
  R(2)=0xffu;
  c->t=R(14)>R(2);
  if(!c->t) goto L8c061300;
  c->t=R(4)>R(2);
  if(!c->t) goto L8c061300;
  c->macl=R(5)*R(6);
  { R(0)=c->macl; goto L8c061388; }
L8c061300:;
  R(7)=0x7fu;
  c->t=R(14)>=R(7);
  if(c->t) goto L8c06130a;
  { c->macl=R(6)*R(13); goto L8c061310; }
L8c06130a:;
  c->t=R(4)>=R(7);
  if(c->t) goto L8c061340;
  c->macl=R(5)*R(12);
L8c061310:;
  R(0)=c->macl;
  R(3)=0xfffffff8u;
  { R(0)=sh4_shad(R(0),R(3)); goto L8c061388; }
L8c061340:;
  R(7)=R(4)&0xFFFF;
  c->t=(int32_t)R(13)>=0;
  R(5)=R(14)&0xFFFF;
  ST32(R(15),R(7));
  c->macl=R(5)*R(7);
  R(4)>>=16;
  ST32(R(15)+4,R(4));
  R(0)=c->t;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(12)>=0;
  R(7)=c->macl;
  c->macl=R(5)*R(4);
  R(4)=R(14);
  R(5)=LD32(R(15));
  R(4)>>=16;
  R(1)=c->t;
  R(6)=c->macl;
  c->macl=R(4)*R(5);
  R(7)>>=16;
  R(1)+=0xffffffffu;
  R(1)=0u-R(1);
  R(5)=c->macl;
  c->macl=R(4)*R(3);
  R(0)^=0x1u;
  R(0)^=R(1);
  c->t=(R(0)&R(0))==0;
  R(4)=c->macl;
  R(4)<<=16;
  R(7)+=R(4);
  R(7)+=R(6);
  R(4)=R(7);
  { uint32_t k=c->t; R(4)+=R(5); if(k) goto L8c061386; }
  { R(0)=0u-R(4); goto L8c061388; }
L8c061386:;
  R(0)=R(4);
L8c061388:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061394(SH4Ctx *c) {
  R(3)=0xfffffff8u;
  R(5)=sh4_shad(R(5),R(3));
  R(4)=sh4_shad(R(4),R(3));
  c->macl=R(4)*R(5);
  { R(0)=c->macl; return; }
}
void f_8c0613a0(SH4Ctx *c) {
  c->fpul=R(4);
  R(0)=0x8c061440u;
  fp_ld(c,2,R(0));
  fp_float(c,3);
  fp_arith(c,3,3,2);
  fp_unary(c,2,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  { R(0)=c->fpul; return; }
}
void f_8c0613b4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c09cf24u;
  { c->pr=0x8c0613c6u; R(13)=R(5); f_8c09cf24(c); }
  R(2)=0x8000u;
  R(5)=R(0);
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(c->t) goto L8c0613dc;
  R(3)=0x8c067940u;
  R(14)<<=16;
  R(1)=R(14);
  { c->pr=0x8c0613d8u; R(0)=R(13); f_8c067940(c); }
  {  goto L8c06141e; }
L8c0613dc:;
  { uint32_t tg=R(12); c->pr=0x8c0613e0u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=0x800000u;
  R(3)=0xfffffff8u;
  R(5)=R(0);
  R(11)=R(13);
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  R(11)=sh4_shad(R(11),R(3));
  if(c->t) goto L8c0613fc;
  R(3)=0x8c067940u;
  R(14)<<=8;
  R(1)=R(14);
  { c->pr=0x8c0613f8u; R(0)=R(11); f_8c067940(c); }
  {  goto L8c06141e; }
L8c0613fc:;
  { uint32_t tg=R(12); c->pr=0x8c061400u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8000u;
  R(5)=R(0);
  c->t=(int32_t)R(5)>(int32_t)R(3);
  if(!c->t) goto L8c061414;
  R(2)=0x8c067940u;
  R(1)=R(14);
  { c->pr=0x8c061410u; R(0)=R(11); f_8c067940(c); }
  { R(0)<<=8; goto L8c06141e; }
L8c061414:;
  R(3)=0x8c067940u;
  R(1)=R(14);
  { c->pr=0x8c06141cu; R(0)=R(13); f_8c067940(c); }
  R(0)<<=16;
L8c06141e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06142a(SH4Ctx *c) {
  c->fpul=R(4);
  R(0)=0x8c061440u;
  fp_float(c,3);
  c->fpul=R(5);
  fp_float(c,2);
  fp_arith(c,3,3,2);
  fp_ld(c,2,R(0));
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  { R(0)=c->fpul; return; }
}
void f_8c061460(SH4Ctx *c) {
  R(3)=0x8c09cf24u;
  {  { f_8c09cf24(c); return; } }
}
void f_8c061466(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0968dau;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  { c->pr=0x8c061476u; R(4)=R(15); f_8c0968da(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06147e(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c061496;
  R(2)=R(4);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c06148c;
  { R(2)>>=16; goto L8c061492; }
L8c06148c:;
  R(2)=~R(2);
  R(2)>>=16;
  R(2)=~R(2);
L8c061492:;
  R(2)<<=8;
  ST32(R(5),R(2));
L8c061496:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0614a2;
  R(3)=0xfffffff8u;
  R(4)<<=16;
  R(4)=sh4_shad(R(4),R(3));
  ST32(R(6),R(4));
L8c0614a2:;
  {  return; }
}
void f_8c0614e0(SH4Ctx *c) {
  {  return; }
}
void f_8c0614e4(SH4Ctx *c) {
  {  return; }
}
void f_8c06152e(SH4Ctx *c) {
  R(3)=0x8c2d494cu;
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c061546;
L8c061536:;
  R(1)=LD32(R(5));
  c->t=R(1)==R(4);
  if(!c->t) goto L8c061540;
  { R(0)=R(5); return; }
L8c061540:;
  R(5)=LD32(R(5)+40);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c061536;
L8c061546:;
  R(0)=0x0u;
  {  return; }
}
void f_8c061580(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffef4u;
  R(15)+=R(0);
  R(3)=0x8c063d46u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  R(5)=0x34u;
  { c->pr=0x8c061596u; R(4)=0x8u; f_8c063d46(c); }
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(14)=R(0);
  R(6)=0x34u;
  { c->pr=0x8c0615a2u; R(4)=R(0); f_8c0686b8(c); }
  R(3)=0x0u;
  R(2)=R(3);
  ST32(R(14)+40,R(3));
  ST32(R(14)+44,R(3));
  ST32(R(14)+48,R(2));
  R(2)=LD32(R(14)+40);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0615b8;
  R(3)=LD32(R(14)+44);
  R(2)=LD32(R(14)+40);
  ST32(R(2)+44,R(3));
L8c0615b8:;
  R(2)=LD32(R(14)+44);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0615c4;
  R(3)=LD32(R(14)+40);
  R(2)=LD32(R(14)+44);
  ST32(R(2)+40,R(3));
L8c0615c4:;
  R(2)=LD32(R(14)+48);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0615ee;
  R(2)=LD32(R(14)+48);
  R(3)=LD32(R(2)+8);
  R(3)+=0xffffffffu;
  ST32(R(2)+8,R(3));
  R(2)=LD32(R(14)+48);
  R(3)=LD32(R(2));
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0615e0;
  R(3)=LD32(R(14)+40);
  R(1)=LD32(R(14)+48);
  ST32(R(1),R(3));
L8c0615e0:;
  R(2)=LD32(R(14)+48);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0615ee;
  R(3)=LD32(R(14)+44);
  R(1)=LD32(R(14)+48);
  ST32(R(1)+4,R(3));
L8c0615ee:;
  R(4)=0x8c2d494cu;
  R(13)=0x0u;
  ST32(R(14)+40,R(13));
  ST32(R(14)+44,R(13));
  ST32(R(14)+48,R(13));
  ST32(R(14)+40,R(13));
  R(2)=LD32(R(4)+4);
  ST32(R(14)+44,R(2));
  ST32(R(14)+48,R(4));
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c06160a;
  { ST32(R(4),R(14)); goto L8c06160e; }
L8c06160a:;
  R(2)=LD32(R(4)+4);
  ST32(R(2)+40,R(14));
L8c06160e:;
  ST32(R(4)+4,R(14));
  R(3)=LD32(R(4)+8);
  R(3)+=0x1u;
  ST32(R(4)+8,R(3));
  R(3)=R(14);
  R(3)+=0x8u;
  R(2)=LD32(R(15));
  ST32(R(14),R(2));
  ST32(R(15)+8,R(3));
  R(4)=LD32(R(15));
  R(3)=0x8c0badacu;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c061630u; R(4)+=0x14u; f_8c06874c(c); }
  R(15)+=0x8u;
  R(3)=0x8c068788u;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0xcu;
  { c->pr=0x8c06163eu; R(4)=LD32(R(15)+8); f_8c068788(c); }
  ST32(R(14)+28,R(13));
  ST32(R(14)+32,R(13));
  ST32(R(14)+36,R(13));
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c061680;
  R(2)=0xffffffffu;
  { ST32(R(14)+4,R(2)); goto L8c061688; }
L8c061680:;
  R(3)=LD32(R(15)+4);
  R(1)=0x1u;
  R(1)=sh4_shad(R(1),R(3));
  ST32(R(14)+4,R(1));
L8c061688:;
  R(1)=0x10cu;
  R(0)=R(14);
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061696(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffee8u;
  R(15)+=R(0);
  R(5)=R(15);
  R(2)=0x8c063820u;
  R(3)=0x2u;
  R(14)=R(4);
  R(4)=R(14);
  ST32(R(14)+28,R(3));
  R(5)+=0x18u;
  { c->pr=0x8c0616b4u; R(4)+=0x8u; f_8c063820(c); }
  R(3)=0x8c0639a0u;
  R(4)=R(15);
  { c->pr=0x8c0616bcu; R(4)+=0x18u; f_8c0639a0(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c061742;
  R(3)=0x8c0639a8u;
  R(5)=0x18u;
  R(6)=R(15);
  { c->pr=0x8c0616ccu; R(4)=R(13); f_8c0639a8(c); }
  R(12)=LD32(R(15)+20);
  R(3)=0x8c063d46u;
  R(5)=R(12);
  { c->pr=0x8c0616d6u; R(4)=0x2u; f_8c063d46(c); }
  R(2)=0x8c0685b4u;
  R(5)=R(15);
  ST32(R(14)+32,R(0));
  R(6)=0x18u;
  { c->pr=0x8c0616e2u; R(4)=R(0); f_8c0685b4(c); }
  R(6)=LD32(R(14)+32);
  R(5)=R(12);
  R(3)=0x8c0639a8u;
  R(6)+=0x18u;
  { c->pr=0x8c0616eeu; R(4)=R(13); f_8c0639a8(c); }
  R(2)=0x8c03bdd6u;
  { c->pr=0x8c0616f4u; R(4)=R(13); f_8c03bdd6(c); }
  R(3)=0x7ffu;
  R(4)=0x8c2cbd94u;
  R(0)=R(3);
  R(0)+=0x39u;
  R(2)=LD32(R(13)+R(0));
  R(1)=0xfffff800u;
  R(0)=LD32(R(4));
  R(2)+=R(3);
  R(2)&=R(1);
  R(3)=0x8c058840u;
  R(0)+=R(2);
  R(2)=0x8c2cbd8cu;
  ST32(R(4),R(0));
  { c->pr=0x8c061712u; R(4)=LD32(R(2)); f_8c058840(c); }
  R(2)=0x8c0639c6u;
  { c->pr=0x8c061718u; R(4)=R(13); f_8c0639c6(c); }
  R(4)=LD32(R(14)+32);
  R(3)=0x64u;
  R(5)=LD32(R(4)+4);
  R(5)+=R(4);
  ST32(R(4)+4,R(5));
  R(4)=LD32(R(14)+32);
  R(5)=LD32(R(4)+12);
  R(5)+=R(4);
  ST32(R(4)+12,R(5));
  R(4)=LD32(R(14)+32);
  R(2)=LD32(R(4)+16);
  R(1)=LD32(R(4)+12);
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(3)+=R(1);
  ST32(R(14)+36,R(3));
  R(3)=0x8c0976c0u;
  { c->pr=0x8c06173eu; R(4)=LD32(R(14)); f_8c0976c0(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0617a0;
L8c061742:;
  { R(0)=0x0u; goto L8c0617a2; }
L8c0617a0:;
  R(0)=0x1u;
L8c0617a2:;
  R(1)=0x118u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0617b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff90u;
  R(13)=R(4);
  R(3)=0x1u;
  ST32(R(15)+8,R(3));
  R(14)=0x0u;
  R(11)=LD32(R(13)+32);
  R(3)=LD32(R(11)+8);
  R(12)=LD32(R(11)+4);
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(10)=R(14); if(k) goto L8c0617e4; }
L8c0617d6:;
  { c->pr=0x8c0617dau; R(4)=R(12); f_8c061940(c); }
  R(2)=LD32(R(11)+8);
  R(10)+=0x1u;
  c->t=(int32_t)R(10)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(12)+=0x20u; if(k) goto L8c0617d6; }
L8c0617e4:;
  R(3)=0x8c2e2ca4u;
  ST32(R(15)+4,R(14));
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c061826;
L8c0617ee:;
  R(2)=LD32(R(4)+8);
  R(1)=LD32(R(13));
  c->t=R(2)==R(1);
  if(!c->t) goto L8c061820;
  { ST32(R(15)+4,R(4)); goto L8c061826; }
L8c061820:;
  R(4)=LD32(R(4)+48);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0617ee;
L8c061826:;
  R(12)=LD32(R(13)+32);
  R(10)=0x8c0633e0u;
  R(12)=LD32(R(12)+12);
  R(8)=0x8c0badb8u;
  ST32(R(15),R(14));
  R(3)=LD32(R(13)+32);
  R(2)=LD32(R(3)+16);
  c->t=(int32_t)R(2)>0;
  if(!c->t) goto L8c0618c8;
L8c061838:;
  R(2)=0x8c0685b4u;
  R(4)=R(15);
  R(6)=0x64u;
  R(5)=R(12);
  { c->pr=0x8c061844u; R(4)+=0xcu; f_8c0685b4(c); }
  R(0)=LD32(R(15)+16);
  R(9)=0x1u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(11)=R(14); if(k) goto L8c061872; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0618a2;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c061892;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c061892;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c061892;
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c061892;
  c->t=(int32_t)R(0)==6;
  if(c->t) goto L8c061892;
  c->t=(int32_t)R(0)==11;
  if(c->t) goto L8c061892;
  c->t=(int32_t)R(0)==10;
  if(c->t) goto L8c061892;
  {  goto L8c061896; }
L8c061872:;
  R(3)=LD32(R(15)+56);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06187c;
  { R(11)=R(14); goto L8c0618a2; }
L8c06187c:;
  R(0)=0x50u;
  R(0)=LD32(R(15)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c061888;
  { R(11)=LD32(R(15)+4); goto L8c0618a2; }
L8c061888:;
  R(5)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c06188eu; R(4)=0x1bu; sh4_call(c,tg); }
  {  goto L8c0618a2; }
L8c061892:;
  { R(11)=LD32(R(13)+36); goto L8c0618a2; }
L8c061896:;
  R(5)=R(8);
  { uint32_t tg=R(10); c->pr=0x8c06189cu; R(4)=0x15u; sh4_call(c,tg); }
  R(9)=R(14);
  ST32(R(12)+4,R(14));
  ST32(R(15)+8,R(14));
L8c0618a2:;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0618b8;
  R(3)=0x8c060400u;
  R(4)=R(15);
  R(6)=R(11);
  R(5)=R(12);
  { c->pr=0x8c0618b2u; R(4)+=0xcu; f_8c060400(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0618b8;
  ST32(R(12)+4,R(14));
L8c0618b8:;
  R(3)=LD32(R(15));
  R(3)+=0x1u;
  ST32(R(15),R(3));
  R(2)=LD32(R(13)+32);
  R(1)=LD32(R(2)+16);
  c->t=(int32_t)R(3)>=(int32_t)R(1);
  { uint32_t k=!c->t; R(12)+=0x64u; if(k) goto L8c061838; }
L8c0618c8:;
  R(12)=LD32(R(13)+32);
  R(10)=0x8c096456u;
  R(12)=LD32(R(12)+12);
  { R(11)=R(14); goto L8c0618e6; }
L8c0618d2:;
  R(0)=LD32(R(12)+4);
  c->t=(int32_t)R(0)==11;
  if(!c->t) goto L8c0618e2;
  { uint32_t tg=R(10); c->pr=0x8c0618dcu; R(4)=R(12); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0618e2;
  ST32(R(12)+4,R(14));
L8c0618e2:;
  R(12)+=0x64u;
  R(11)+=0x1u;
L8c0618e6:;
  R(2)=LD32(R(13)+32);
  R(3)=LD32(R(2)+16);
  c->t=(int32_t)R(11)>=(int32_t)R(3);
  if(!c->t) goto L8c0618d2;
  R(0)=LD32(R(15)+8);
  R(15)+=0x70u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061940(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+4);
  R(0)+=0xffffffffu;
  R(1)=0xbu;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c061958;
  {  goto L8c061a1a; }
L8c061958:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c061964u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c061964u+R(0));  switch(tg){ case 0x8c06197au: goto L8c06197a; case 0x8c06197eu: goto L8c06197e; case 0x8c061988u: goto L8c061988; case 0x8c06199au: goto L8c06199a; case 0x8c0619bcu: goto L8c0619bc; case 0x8c0619deu: goto L8c0619de; case 0x8c061a04u: goto L8c061a04; case 0x8c061a16u: goto L8c061a16; default: sh4_bad_jump(c,0x8c061960u,tg); return; } }
L8c06197a:;
  {  goto L8c061a26; }
L8c06197e:;
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0619e4;
  { ST32(R(14)+8,R(13)); goto L8c061a26; }
L8c061988:;
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c061996;
  { c->pr=0x8c061992u; R(4)=LD32(R(14)+8); f_8c061b70(c); }
  {  goto L8c061a0e; }
L8c061996:;
  { ST32(R(14)+8,R(13)); goto L8c061a26; }
L8c06199a:;
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0619a8;
  { c->pr=0x8c0619a4u; R(4)=LD32(R(14)+8); f_8c061b70(c); }
  { ST32(R(14)+8,R(0)); goto L8c0619aa; }
L8c0619a8:;
  ST32(R(14)+8,R(13));
L8c0619aa:;
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0619b8;
  { c->pr=0x8c0619b4u; R(4)=LD32(R(14)+12); f_8c061b70(c); }
  {  goto L8c0619d6; }
L8c0619b8:;
  { ST32(R(14)+12,R(13)); goto L8c061a26; }
L8c0619bc:;
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0619ca;
  { c->pr=0x8c0619c6u; R(4)=LD32(R(14)+8); f_8c061b70(c); }
  { ST32(R(14)+8,R(0)); goto L8c0619cc; }
L8c0619ca:;
  ST32(R(14)+8,R(13));
L8c0619cc:;
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0619da;
  { c->pr=0x8c0619d6u; R(4)=LD32(R(14)+12); f_8c061b70(c); }
L8c0619d6:;
  { ST32(R(14)+12,R(0)); goto L8c061a26; }
L8c0619da:;
  { ST32(R(14)+12,R(13)); goto L8c061a26; }
L8c0619de:;
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c061a00;
L8c0619e4:;
  { c->pr=0x8c0619e8u; R(4)=LD32(R(14)+8); f_8c061bb8(c); }
  {  goto L8c061a0e; }
L8c061a00:;
  { ST32(R(14)+8,R(13)); goto L8c061a26; }
L8c061a04:;
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c061a12;
  { c->pr=0x8c061a0eu; R(4)=LD32(R(14)+8); f_8c061bb8(c); }
L8c061a0e:;
  { ST32(R(14)+8,R(0)); goto L8c061a26; }
L8c061a12:;
  { ST32(R(14)+8,R(13)); goto L8c061a26; }
L8c061a16:;
  {  goto L8c061a26; }
L8c061a1a:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0badb8u;
  { c->pr=0x8c061a22u; R(4)=0x13u; f_8c0633e0(c); }
  { R(0)=0x0u; goto L8c061a28; }
L8c061a26:;
  R(0)=0x1u;
L8c061a28:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061a30(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(c->t) { f_8c061a6c(c); return; }
  R(2)=0x8c2d494cu;
  R(5)=LD32(R(2));
  { R(7)=0x20u; { f_8c061a68(c); return; } }
}
void f_8c061a40(SH4Ctx *c) {
  R(14)=LD32(R(5)+32);
  R(1)=R(4);
  R(2)=0x8c067940u;
  R(3)=LD32(R(14)+4);
  R(1)-=R(3);
  { c->pr=0x8c061a4eu; R(0)=R(7); f_8c067940(c); }
  R(6)=R(0);
  c->t=(int32_t)R(6)>=0;
  { uint32_t k=!c->t; R(14)=LD32(R(14)+8); if(k) goto L8c061a66; }
  c->t=(int32_t)R(6)>=(int32_t)R(14);
  if(c->t) goto L8c061a66;
  R(4)=LD32(R(5));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)<<=16;
  R(0)=R(4);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c061a66:;
  R(5)=LD32(R(5)+40);
  { f_8c061a68(c); return; }
}
void f_8c061a66(SH4Ctx *c) {
  R(5)=LD32(R(5)+40);
  { f_8c061a68(c); return; }
}
void f_8c061a68(SH4Ctx *c) {
  c->t=(R(5)&R(5))==0;
  if(!c->t) { f_8c061a40(c); return; }
  { f_8c061a6c(c); return; }
}
void f_8c061a6c(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061a74(SH4Ctx *c) {
  R(3)=0x8c2d4954u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c061a7a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c061a80u;  f_8c06152e(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c061ac0;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=LD32(R(4)+32);
  { R(0)=LD32(R(0)+8); return; }
L8c061ac0:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c061ac0(SH4Ctx *c) {
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c061ac8(SH4Ctx *c) {
  R(5)=0x8c2d494cu;
  R(4)=0x0u;
  R(2)=0x8c2e2cb0u;
  R(3)=0x18000u;
  R(1)=0x8c0c9330u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  ST32(R(5),R(4));
  ST32(R(5)+4,R(4));
  ST32(R(5)+8,R(4));
  R(5)=0x8c2e2ca4u;
  ST32(R(5),R(4));
  ST32(R(5)+4,R(4));
  ST32(R(5)+8,R(4));
  R(4)=0xffffffffu;
  ST32(R(2),R(3));
  R(3)=0x8c0c932cu;
  R(2)=0x8c097b80u;
  ST32(R(3),R(4));
  ST32(R(1),R(4));
  R(4)=0x4000u;
  { c->pr=0x8c061af4u;  f_8c097b80(c); }
  R(3)=0x8c097b80u;
  R(4)=0x4000u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c097b80(c); return; } }
}
void f_8c061afc(SH4Ctx *c) {
  R(3)=0x8c2d494cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(3));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c061b0e;
  { R(13)=LD32(R(14)+40); goto L8c061b10; }
L8c061b0e:;
  R(13)=0x0u;
L8c061b10:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c061b66;
L8c061b14:;
  { c->pr=0x8c061b18u; R(4)=LD32(R(14)); f_8c061df4(c); }
  R(14)=R(13);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c061b60;
  { R(13)=LD32(R(14)+40); goto L8c061b62; }
L8c061b60:;
  R(13)=0x0u;
L8c061b62:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c061b14;
L8c061b66:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c097c80u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c097c80(c); return; } }
}
void f_8c061b70(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c061bae;
  R(2)=R(4);
  R(2)>>=16;
  R(14)=R(4)&0xFFFF;
  ST32(R(15),R(2));
  { c->pr=0x8c061b88u; R(4)=R(2); f_8c06152e(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c061bae;
  R(4)=LD32(R(4)+32);
  R(3)=LD32(R(4)+8);
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c061ba2;
  R(14)<<=2;
  R(4)=LD32(R(4)+4);
  R(14)<<=2;
  c->t=R(14)>>31;R(14)<<=1;
  { R(4)+=R(14); goto L8c061ba4; }
L8c061ba2:;
  R(4)=0x0u;
L8c061ba4:;
  R(0)=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c061bae:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061bb8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c061bf6;
  R(2)=R(4);
  R(2)>>=16;
  R(14)=R(4)&0xFFFF;
  ST32(R(15),R(2));
  { c->pr=0x8c061bd0u; R(4)=R(2); f_8c06152e(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c061bf6;
  R(4)=LD32(R(4)+32);
  R(3)=LD32(R(4)+16);
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(c->t) goto L8c061bea;
  R(1)=0x64u;
  R(4)=LD32(R(4)+12);
  c->macl=R(14)*R(1);
  R(14)=c->macl;
  { R(4)+=R(14); goto L8c061bec; }
L8c061bea:;
  R(4)=0x0u;
L8c061bec:;
  R(0)=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c061bf6:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061c00(SH4Ctx *c) {
  { R(4)=0xffffffffu; goto L8c061c04; }
L8c061c04:;
  R(3)=0x8c2d494cu;
  R(1)=0x1u;
  R(1)=sh4_shad(R(1),R(4));
  R(5)=LD32(R(3));
  R(7)=0x3u;
  R(1)=~R(1);
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c061c54; }
L8c061c16:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c061c40;
  { ST32(R(5)+4,R(6)); goto L8c061c46; }
L8c061c40:;
  R(3)=LD32(R(5)+4);
  R(3)&=R(1);
  ST32(R(5)+4,R(3));
L8c061c46:;
  R(2)=LD32(R(5)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c061c4e;
  ST32(R(5)+28,R(7));
L8c061c4e:;
  R(5)=LD32(R(5)+40);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c061c16;
L8c061c54:;
  { R(0)=0x1u; return; }
}
void f_8c061c58(SH4Ctx *c) {
  { R(5)=0xffffffffu; goto L8c061c5c; }
L8c061c5c:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  ST32(R(15),R(4));
  { c->pr=0x8c061c68u; R(14)=R(5); f_8c06152e(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c061c78;
  R(5)=R(14);
  { c->pr=0x8c061c74u; R(4)=LD32(R(15)); f_8c061580(c); }
  { R(4)=R(0); goto L8c061c8e; }
L8c061c78:;
  R(0)=R(14);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c061c84;
  R(2)=0xffffffffu;
  { ST32(R(4)+4,R(2)); goto L8c061c8e; }
L8c061c84:;
  R(3)=LD32(R(4)+4);
  R(1)=0x1u;
  R(1)=sh4_shad(R(1),R(14));
  R(3)&=R(1);
  ST32(R(4)+4,R(3));
L8c061c8e:;
  R(0)=LD32(R(4)+28);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c061ca4;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c061ca4;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c061cae;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c061caa;
  {  goto L8c061cae; }
L8c061ca4:;
  R(2)=0x1u;
  { ST32(R(4)+28,R(2)); goto L8c061cae; }
L8c061caa:;
  R(3)=0x4u;
  ST32(R(4)+28,R(3));
L8c061cae:;
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061cb8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c2d494cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(11));
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c061cce;
  { R(13)=LD32(R(14)+40); goto L8c061cd0; }
L8c061cce:;
  R(13)=0x0u;
L8c061cd0:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c061d34;
L8c061cd4:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c061d20;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c061d24;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c061d24;
  {  goto L8c061d24; }
L8c061d20:;
  { c->pr=0x8c061d24u; R(4)=LD32(R(14)); f_8c061df4(c); }
L8c061d24:;
  R(14)=R(13);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c061d2e;
  { R(13)=LD32(R(14)+40); goto L8c061d30; }
L8c061d2e:;
  R(13)=0x0u;
L8c061d30:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c061cd4;
L8c061d34:;
  R(14)=LD32(R(11));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(12)=0x2u; if(k) goto L8c061d40; }
  { R(13)=LD32(R(14)+40); goto L8c061d42; }
L8c061d40:;
  R(13)=0x0u;
L8c061d42:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c061d76;
L8c061d46:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c061d54;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c061d66;
  {  goto L8c061d66; }
L8c061d54:;
  { c->pr=0x8c061d58u; R(4)=R(14); f_8c061696(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c061d64;
  { c->pr=0x8c061d60u; R(4)=LD32(R(14)); f_8c061df4(c); }
  {  goto L8c061d66; }
L8c061d64:;
  ST32(R(14)+28,R(12));
L8c061d66:;
  R(14)=R(13);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c061d70;
  { R(13)=LD32(R(14)+40); goto L8c061d72; }
L8c061d70:;
  R(13)=0x0u;
L8c061d72:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c061d46;
L8c061d76:;
  R(14)=LD32(R(11));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=c->t; R(13)=0x1u; if(k) goto L8c061d98; }
L8c061d7e:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c061d8c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c061d92;
  {  goto L8c061d92; }
L8c061d8c:;
  { c->pr=0x8c061d90u; R(4)=R(14); f_8c0617b0(c); }
  ST32(R(14)+28,R(13));
L8c061d92:;
  R(14)=LD32(R(14)+40);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c061d7e;
L8c061d98:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061da6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c061db0u; R(13)=R(4); f_8c06152e(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c061dbe;
  R(5)=0xffffffffu;
  { c->pr=0x8c061dbcu; R(4)=R(13); f_8c061580(c); }
  R(14)=R(0);
L8c061dbe:;
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c061dea;
  R(3)=0x4u;
  ST32(R(14)+28,R(3));
  { c->pr=0x8c061dccu; R(4)=R(14); f_8c061696(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c061de2;
  R(2)=0x2u;
  ST32(R(14)+28,R(2));
  { c->pr=0x8c061dd8u; R(4)=R(14); f_8c0617b0(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c061de2;
  R(3)=0x1u;
  { ST32(R(14)+28,R(3)); goto L8c061dea; }
L8c061de2:;
  { c->pr=0x8c061de6u; R(4)=R(13); f_8c061df4(c); }
  { R(0)=0x0u; goto L8c061dec; }
L8c061dea:;
  R(0)=0x1u;
L8c061dec:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061df4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c061e08u; R(12)=R(4); f_8c06152e(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c061e12;
  { R(0)=0x0u; goto L8c061f5c; }
L8c061e12:;
  R(3)=LD32(R(14)+32);
  R(9)=0x8c064160u;
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c061e62; }
  R(3)=LD32(R(14)+32);
  R(11)=LD32(R(14)+32);
  R(2)=LD32(R(3)+16);
  R(11)=LD32(R(11)+12);
  R(8)=0x8c0604c0u;
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(10)=R(13); if(k) goto L8c061e3c; }
L8c061e2c:;
  { uint32_t tg=R(8); c->pr=0x8c061e30u; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(14)+32);
  R(10)+=0x1u;
  R(3)=LD32(R(2)+16);
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(11)+=0x64u; if(k) goto L8c061e2c; }
L8c061e3c:;
  R(3)=LD32(R(14)+32);
  R(11)=LD32(R(14)+32);
  R(2)=LD32(R(3)+16);
  R(11)=LD32(R(11)+12);
  R(8)=0x8c0605d0u;
  c->t=(int32_t)R(2)>0;
  { uint32_t k=!c->t; R(10)=R(13); if(k) goto L8c061e5c; }
L8c061e4c:;
  { uint32_t tg=R(8); c->pr=0x8c061e50u; R(4)=R(11); sh4_call(c,tg); }
  R(2)=LD32(R(14)+32);
  R(10)+=0x1u;
  R(3)=LD32(R(2)+16);
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(11)+=0x64u; if(k) goto L8c061e4c; }
L8c061e5c:;
  R(5)=LD32(R(14)+32);
  { uint32_t tg=R(9); c->pr=0x8c061e62u; R(4)=0x2u; sh4_call(c,tg); }
L8c061e62:;
  R(11)=0x8c2e2ca4u;
  R(5)=LD32(R(11)+4);
  R(3)=LD32(R(5)+8);
  c->t=R(3)==R(12);
  if(c->t) goto L8c061e80;
  R(1)=LD32(R(5)+52);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c061e80;
L8c061e72:;
  R(5)=LD32(R(5)+52);
  R(3)=LD32(R(5)+8);
  c->t=R(3)==R(12);
  if(c->t) goto L8c061e80;
  R(1)=LD32(R(5)+52);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c061e72;
L8c061e80:;
  R(3)=LD32(R(5)+8);
  R(10)=0x8c2e2cb0u;
  R(8)=0x8c0c932cu;
  c->t=R(3)==R(12);
  if(!c->t) goto L8c061ef8;
L8c061e8a:;
  R(1)=0x42534f53u;
  R(0)=LD32(R(5)+16);
  c->t=R(0)==R(1);
  if(!c->t) goto L8c061ea4;
  R(2)=LD32(R(5)+24);
  R(3)=LD32(R(10));
  c->t=R(2)>=R(3);
  if(c->t) goto L8c061e9e;
  R(0)=LD32(R(5)+24);
  ST32(R(10),R(0));
L8c061e9e:;
  R(3)=LD32(R(8));
  R(3)+=0xffffffffu;
  ST32(R(8),R(3));
L8c061ea4:;
  R(2)=LD32(R(5)+48);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c061eb0;
  R(3)=LD32(R(5)+52);
  R(2)=LD32(R(5)+48);
  ST32(R(2)+52,R(3));
L8c061eb0:;
  R(2)=LD32(R(5)+52);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c061ebc;
  R(3)=LD32(R(5)+48);
  R(2)=LD32(R(5)+52);
  ST32(R(2)+48,R(3));
L8c061ebc:;
  R(2)=LD32(R(5)+56);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c061ee6;
  R(2)=LD32(R(5)+56);
  R(3)=LD32(R(2)+8);
  R(3)+=0xffffffffu;
  ST32(R(2)+8,R(3));
  R(2)=LD32(R(5)+56);
  R(3)=LD32(R(2));
  c->t=R(3)==R(5);
  if(!c->t) goto L8c061ed8;
  R(3)=LD32(R(5)+48);
  R(1)=LD32(R(5)+56);
  ST32(R(1),R(3));
L8c061ed8:;
  R(2)=LD32(R(5)+56);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(5);
  if(!c->t) goto L8c061ee6;
  R(3)=LD32(R(5)+52);
  R(1)=LD32(R(5)+56);
  ST32(R(1)+4,R(3));
L8c061ee6:;
  ST32(R(5)+48,R(13));
  ST32(R(5)+52,R(13));
  ST32(R(5)+56,R(13));
  { uint32_t tg=R(9); c->pr=0x8c061ef0u; R(4)=0x2u; sh4_call(c,tg); }
  R(5)=LD32(R(11)+4);
  R(2)=LD32(R(5)+8);
  c->t=R(2)==R(12);
  if(c->t) goto L8c061e8a;
L8c061ef8:;
  R(4)=LD32(R(11));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c061f0c;
L8c061efe:;
  R(3)=LD32(R(4)+8);
  c->t=R(3)==R(12);
  if(!c->t) goto L8c061f06;
  ST32(R(4)+4,R(13));
L8c061f06:;
  R(4)=LD32(R(4)+48);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c061efe;
L8c061f0c:;
  R(2)=LD32(R(14)+40);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c061f18;
  R(2)=LD32(R(14)+44);
  R(3)=LD32(R(14)+40);
  ST32(R(3)+44,R(2));
L8c061f18:;
  R(3)=LD32(R(14)+44);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c061f24;
  R(2)=LD32(R(14)+40);
  R(3)=LD32(R(14)+44);
  ST32(R(3)+40,R(2));
L8c061f24:;
  R(3)=LD32(R(14)+48);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c061f4e;
  R(3)=LD32(R(14)+48);
  R(2)=LD32(R(3)+8);
  R(2)+=0xffffffffu;
  ST32(R(3)+8,R(2));
  R(3)=LD32(R(14)+48);
  R(2)=LD32(R(3));
  c->t=R(2)==R(14);
  if(!c->t) goto L8c061f40;
  R(3)=LD32(R(14)+40);
  R(1)=LD32(R(14)+48);
  ST32(R(1),R(3));
L8c061f40:;
  R(2)=LD32(R(14)+48);
  R(3)=LD32(R(2)+4);
  c->t=R(3)==R(14);
  if(!c->t) goto L8c061f4e;
  R(3)=LD32(R(14)+44);
  R(1)=LD32(R(14)+48);
  ST32(R(1)+4,R(3));
L8c061f4e:;
  R(5)=R(14);
  ST32(R(14)+40,R(13));
  ST32(R(14)+44,R(13));
  ST32(R(14)+48,R(13));
  { uint32_t tg=R(9); c->pr=0x8c061f5au; R(4)=0x8u; sh4_call(c,tg); }
  R(0)=0x1u;
L8c061f5c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c061fa0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0686d0u;
  { c->pr=0x8c061faau; ST32(R(15),R(4)); f_8c0686d0(c); }
  R(2)=0x8c06142au;
  R(5)=0x7fffu;
  { c->pr=0x8c061fb2u; R(4)=R(0); f_8c06142a(c); }
  R(5)=LD32(R(15));
  R(4)=R(0);
  R(15)+=0x4u;
  R(3)=0x8c061394u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c061394(c); return; } }
}
void f_8c061fea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c2d4968u;
  R(0)=0x4cu;
  R(5)=0x8c2d49dcu;
  R(6)=0xffffffffu;
  R(4)=LD32(R(14)+R(0));
  R(13)=R(4);
  R(13)<<=2;
  c->t=(R(4)&R(4))==0;
  R(3)=R(4);
  R(0)=c->t;
  R(13)+=R(3);
  R(3)=R(0);
  R(0)<<=2;
  R(0)+=R(3);
  R(3)=0x8c062f60u;
  R(13)<<=2;
  R(0)<<=2;
  R(13)+=R(5);
  R(5)+=R(0);
  ST32(R(15),R(5));
  R(4)=LD32(R(14)+24);
  R(5)=LD32(R(13)+16);
  R(4)<<=8;
  R(4)<<=2;
  { c->pr=0x8c062026u; c->t=R(4)>>31;R(4)<<=1; f_8c062f60(c); }
  R(2)=LD32(R(14)+24);
  R(7)=0x0u;
  R(3)=LD32(R(13)+12);
  R(2)<<=8;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(3)+=R(2);
  R(2)=0x8c0e2fecu;
  ST32(R(13)+12,R(3));
  R(5)=LD32(R(14)+28);
  R(6)=LD32(R(14)+32);
  { c->pr=0x8c062040u; R(4)=LD32(R(14)+4); f_8c0e2fec(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c062066;
  R(2)=0x8c080b60u;
  { c->pr=0x8c06204au; R(4)=LD32(R(14)+40); f_8c080b60(c); }
  R(3)=0x8c0e2c70u;
  { c->pr=0x8c062050u; R(4)=LD32(R(14)+4); f_8c0e2c70(c); }
  R(0)=0x6cu;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c062060;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c062060u; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
L8c062060:;
  R(3)=0x0u;
  { ST32(R(14),R(3)); goto L8c06207a; }
L8c062066:;
  R(3)=0x8c09803eu;
  { c->pr=0x8c06206cu; R(4)=LD32(R(15)); f_8c09803e(c); }
  R(2)=0x3u;
  ST32(R(14),R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c062742(c); return; } }
L8c06207a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062084(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0807c0u;
  { c->pr=0x8c062098u;  f_8c0807c0(c); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0620a0;
  {  goto L8c0622b0; }
L8c0620a0:;
  R(3)=0x8c080a20u;
  R(14)=0x8c2d4968u;
  { c->pr=0x8c0620a8u; R(4)=LD32(R(14)+40); f_8c080a20(c); }
  c->t=(int32_t)R(0)==3;
  R(4)=R(0);
  { uint32_t k=!c->t; R(11)=0x0u; if(k) goto L8c0620d0; }
  R(3)=0x8c080b60u;
  { c->pr=0x8c0620b6u; R(4)=LD32(R(14)+40); f_8c080b60(c); }
  R(2)=0x8c0e2c70u;
  { c->pr=0x8c0620bcu; R(4)=LD32(R(14)+4); f_8c0e2c70(c); }
  R(0)=0x6cu;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0620cc;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c0620ccu; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
L8c0620cc:;
  { ST32(R(14),R(11)); goto L8c0622b0; }
L8c0620d0:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0620d8;
  {  goto L8c0622b0; }
L8c0620d8:;
  R(13)=0x8c0c7030u;
  R(10)=0x8c0808bau;
  { c->pr=0x8c0620e0u;  f_8c0808ba(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0620ea;
  R(3)=LD32(R(13));
  R(3)+=0x1u;
  ST32(R(13),R(3));
L8c0620ea:;
  R(2)=LD32(R(14)+36);
  R(4)=R(14);
  R(3)=0x8c2e2cccu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0630a0u;
  R(5)=LD32(R(3));
  { c->pr=0x8c0620fau; R(4)+=0xcu; f_8c0630a0(c); }
  { uint32_t tg=R(10); c->pr=0x8c0620feu; R(15)+=0x4u; sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c062108;
  R(2)=LD32(R(13));
  R(2)+=0x1u;
  ST32(R(13),R(2));
L8c062108:;
  R(0)=LD32(R(14)+24);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c062116;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c062180;
  {  goto L8c062198; }
L8c062116:;
  R(3)=0x0u;
  R(1)=0x8c0e2e84u;
  R(2)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=R(14);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c062126u; R(4)+=0x4u; f_8c0e2e84(c); }
  { R(15)+=0x8u; goto L8c062196; }
L8c062180:;
  R(2)=0x1u;
  R(4)=R(14);
  R(3)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=0x2u;
  R(3)=0x8c0e2e84u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c062194u; R(4)+=0x4u; f_8c0e2e84(c); }
  R(15)+=0xcu;
L8c062196:;
  R(12)=R(0);
L8c062198:;
  { uint32_t tg=R(10); c->pr=0x8c06219cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0621a6;
  R(2)=LD32(R(13));
  R(2)+=0x1u;
  ST32(R(13),R(2));
L8c0621a6:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0621be;
  R(4)=LD32(R(14)+40);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c080b60u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c080b60(c); return; } }
L8c0621be:;
  R(0)=LD32(R(14)+24);
  R(12)=0x8c0e30f8u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=LD32(R(14)+4); if(k) goto L8c0621d0; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c062200;
  {  goto L8c06221a; }
L8c0621d0:;
  R(7)=0x0u;
  R(0)=0x50u;
  R(6)=R(7);
  { R(5)=LD32(R(14)+R(0)); goto L8c062216; }
L8c062200:;
  R(0)=0x50u;
  R(6)=0xffffff81u;
  R(7)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c06220au; R(5)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(4)=LD32(R(14)+4);
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(7)=0x0u;
  R(6)=0x7fu;
  R(5)+=0x1u;
L8c062216:;
  { uint32_t tg=R(12); c->pr=0x8c06221au;  sh4_call(c,tg); }
L8c06221a:;
  { c->pr=0x8c06221eu;  f_8c062742(c); }
  { uint32_t tg=R(10); c->pr=0x8c062222u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(0)=0x4cu; if(k) goto L8c06222e; }
  R(2)=LD32(R(13));
  R(2)+=0x1u;
  ST32(R(13),R(2));
L8c06222e:;
  ST32(R(14)+R(0),R(11));
  R(0)=0x50u;
  ST32(R(14)+R(0),R(11));
  R(0)=0x4cu;
  R(12)=LD32(R(14)+R(0));
  R(1)=0x8c2e2cccu;
  R(3)=R(12);
  R(12)<<=2;
  R(12)+=R(3);
  R(6)=LD32(R(14)+16);
  R(2)=0x8c2d49dcu;
  R(12)<<=2;
  ST32(R(15),R(6));
  R(6)=0u-R(6);
  R(3)=LD32(R(15));
  R(6)+=0x64u;
  R(5)=LD32(R(1));
  R(12)+=R(2);
  R(5)+=R(3);
  R(3)=0x8c0685b4u;
  { c->pr=0x8c06225au; R(4)=LD32(R(12)+16); f_8c0685b4(c); }
  R(2)=LD32(R(14)+16);
  R(2)=0u-R(2);
  R(2)+=0x64u;
  R(3)=R(2);
  ST32(R(12)+4,R(2));
  R(1)=LD32(R(14)+12);
  R(1)-=R(3);
  { uint32_t tg=R(10); c->pr=0x8c06226cu; ST32(R(14)+12,R(1)); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c062276;
  R(0)=LD32(R(13));
  R(0)+=0x1u;
  ST32(R(13),R(0));
L8c062276:;
  R(4)=LD32(R(12)+4);
  R(3)=0x4000u;
  ST32(R(15),R(4));
  R(4)=0u-R(4);
  R(5)=LD32(R(14)+12);
  R(4)+=R(3);
  c->t=R(4)>=R(5);
  if(c->t) goto L8c06228a;
  { R(13)=R(4); goto L8c06228c; }
L8c06228a:;
  R(13)=R(5);
L8c06228c:;
  R(6)=LD32(R(12)+16);
  R(5)=R(13);
  R(3)=LD32(R(15));
  R(6)+=R(3);
  R(3)=0x8c080b96u;
  { c->pr=0x8c06229au; R(4)=LD32(R(14)+40); f_8c080b96(c); }
  R(2)=LD32(R(12)+4);
  R(2)+=R(13);
  ST32(R(12)+4,R(2));
  R(2)=0xffffffffu;
  R(3)=LD32(R(14)+12);
  R(3)-=R(13);
  ST32(R(14)+12,R(3));
  R(3)=0x2u;
  ST32(R(12)+12,R(11));
  ST32(R(12)+8,R(2));
  ST32(R(14),R(3));
L8c0622b0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0622e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0807c0u;
  { c->pr=0x8c0622ecu;  f_8c0807c0(c); }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c062328;
  R(2)=0x8c080a20u;
  R(14)=0x8c2d4968u;
  { c->pr=0x8c0622f8u; R(4)=LD32(R(14)+40); f_8c080a20(c); }
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c062302; }
  { c->pr=0x8c062302u;  f_8c061fea(c); }
L8c062302:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c062328;
  R(2)=0x8c080b60u;
  { c->pr=0x8c06230eu; R(4)=LD32(R(14)+40); f_8c080b60(c); }
  R(3)=0x8c0e2c70u;
  { c->pr=0x8c062314u; R(4)=LD32(R(14)+4); f_8c0e2c70(c); }
  R(0)=0x6cu;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c062324;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c062324u; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
L8c062324:;
  R(3)=0x0u;
  ST32(R(14),R(3));
L8c062328:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062330(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c2d4968u;
  R(0)=0x50u;
  R(3)=0x8c0e2cc0u;
  R(6)=R(15);
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c062344u; R(4)=LD32(R(14)+4); f_8c0e2cc0(c); }
  R(3)=LD32(R(15));
  R(2)=LD32(R(14)+20);
  c->t=R(3)>R(2);
  if(!c->t) goto L8c062372;
  R(3)=0x8c0e3354u;
  { c->pr=0x8c062352u; R(4)=LD32(R(14)+4); f_8c0e3354(c); }
  R(2)=0x8c0e2c70u;
  { c->pr=0x8c062358u; R(4)=LD32(R(14)+4); f_8c0e2c70(c); }
  R(3)=0x8c080b60u;
  { c->pr=0x8c06235eu; R(4)=LD32(R(14)+40); f_8c080b60(c); }
  R(0)=0x6cu;
  R(2)=LD32(R(14)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06236e;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c06236eu; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
L8c06236e:;
  R(3)=0x0u;
  ST32(R(14),R(3));
L8c062372:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06237a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=0x8c2d4968u;
  R(0)=0x4cu;
  R(5)=0x8c2d49dcu;
  R(4)=LD32(R(14)+R(0));
  R(3)=R(4);
  R(3)<<=2;
  c->t=(R(4)&R(4))==0;
  R(2)=R(4);
  R(0)=c->t;
  R(3)+=R(2);
  R(2)=R(0);
  R(0)<<=2;
  R(0)+=R(2);
  R(2)=0x8c0807c0u;
  R(3)<<=2;
  R(0)<<=2;
  R(3)+=R(5);
  R(5)+=R(0);
  ST32(R(15)+8,R(3));
  { c->pr=0x8c0623aau; ST32(R(15)+4,R(5)); f_8c0807c0(c); }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06244a;
  R(3)=0x8c09815cu;
  { c->pr=0x8c0623b4u; R(4)=LD32(R(15)+8); f_8c09815c(c); }
  R(2)=0x8c080a20u;
  { c->pr=0x8c0623bau; R(4)=LD32(R(14)+40); f_8c080a20(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c062420;
  R(3)=0x8c09803eu;
  { c->pr=0x8c0623c4u; R(4)=LD32(R(15)+4); f_8c09803e(c); }
  R(2)=0x3u;
  ST32(R(14),R(2));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c062420:;
  R(0)=0x50u;
  R(3)=0x8c0e2d50u;
  R(5)=LD32(R(14)+R(0));
  R(7)=R(15);
  R(6)=0x800u;
  { c->pr=0x8c06242eu; R(4)=LD32(R(14)+4); f_8c0e2d50(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c06243c;
  R(4)=0x8c0c7030u;
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  ST32(R(4),R(3));
L8c06243c:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06244a;
  R(5)=0x0u;
  R(6)=0xffffffffu;
  { c->pr=0x8c06244au; R(4)=R(5); f_8c062f60(c); }
L8c06244a:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062452(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c2d4968u;
  R(0)=0x4cu;
  R(5)=0x8c2d49dcu;
  R(4)=LD32(R(14)+R(0));
  R(2)=0x8c0807c0u;
  R(13)=R(4);
  R(13)<<=2;
  c->t=(R(4)&R(4))==0;
  R(3)=R(4);
  R(12)=c->t;
  R(13)+=R(3);
  R(3)=R(12);
  R(12)<<=2;
  R(12)+=R(3);
  R(13)<<=2;
  R(12)<<=2;
  R(13)+=R(5);
  { uint32_t tg=R(2); c->pr=0x8c062482u; R(12)+=R(5); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06248a;
  {  goto L8c0625a8; }
L8c06248a:;
  R(2)=0x8c09815cu;
  { c->pr=0x8c062490u; R(4)=R(12); f_8c09815c(c); }
  R(0)=0x50u;
  R(3)=0x8c0e2d50u;
  R(5)=LD32(R(14)+R(0));
  R(7)=R(15);
  R(6)=0x800u;
  { c->pr=0x8c06249eu; R(4)=LD32(R(14)+4); f_8c0e2d50(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0624ac;
  R(4)=0x8c0c7030u;
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  ST32(R(4),R(3));
L8c0624ac:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0624b6;
  {  goto L8c0625a8; }
L8c0624b6:;
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c062500;
  R(5)=0x0u;
  R(6)=0xffffffffu;
  { c->pr=0x8c0624c4u; R(4)=R(5); f_8c062f60(c); }
  {  goto L8c0625a8; }
L8c062500:;
  R(4)=R(14);
  R(4)+=0x58u;
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06252c;
  R(1)=0x10u;
  R(2)=LD32(R(4)+8);
  R(0)=0xcu;
  R(1)+=R(4);
  R(2)+=0xffffffffu;
  ST32(R(4)+8,R(2));
  fp_ld(c,3,R(1));
  fp_ld(c,2,R(0)+R(4));
  fp_arith(c,1,2,3);
  fp_st(c,2,R(0)+R(4));
  R(3)=LD32(R(4)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c062528;
  R(3)=0x0u;
  ST32(R(4),R(3));
L8c062528:;
  { c->pr=0x8c06252cu;  f_8c062742(c); }
L8c06252c:;
  R(4)=LD32(R(14)+24);
  R(5)=LD32(R(13)+16);
  R(3)=LD32(R(13)+12);
  R(4)<<=8;
  R(6)=LD32(R(13)+8);
  R(4)<<=2;
  R(5)+=R(3);
  { c->pr=0x8c06253eu; c->t=R(4)>>31;R(4)<<=1; f_8c062f60(c); }
  R(3)=LD32(R(14)+24);
  R(2)=LD32(R(13)+12);
  R(3)<<=8;
  R(3)<<=2;
  c->t=R(3)>>31;R(3)<<=1;
  R(2)+=R(3);
  ST32(R(13)+12,R(2));
  R(0)=LD32(R(13)+8);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c06256a;
  R(2)=LD32(R(14)+24);
  R(3)=LD32(R(13)+8);
  R(2)<<=8;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(3)-=R(2);
  R(2)=R(3);
  c->t=(int32_t)R(2)>=0;
  ST32(R(13)+8,R(3));
  if(c->t) goto L8c06256a;
  R(1)=0xffffffffu;
  ST32(R(13)+8,R(1));
L8c06256a:;
  R(2)=LD32(R(13)+12);
  R(3)=LD32(R(13)+4);
  c->t=R(2)>=R(3);
  if(!c->t) goto L8c0625a8;
  R(0)=LD32(R(12)+4);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c062580;
  R(1)=0x5u;
  ST32(R(14),R(1));
  {  goto L8c0625a8; }
L8c062580:;
  R(0)=0x4cu;
  R(2)=0x8c080a20u;
  R(0)=LD32(R(14)+R(0));
  R(1)=0x4cu;
  R(3)=0x0u;
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  R(1)+=R(14);
  ST32(R(1),R(0));
  ST32(R(12)+12,R(3));
  { c->pr=0x8c062598u; R(4)=LD32(R(14)+40); f_8c080a20(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0625a2;
  R(2)=0x4u;
  { ST32(R(14),R(2)); goto L8c0625a8; }
L8c0625a2:;
  R(3)=0x8c09803eu;
  { c->pr=0x8c0625a8u; R(4)=R(13); f_8c09803e(c); }
L8c0625a8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0625b4(SH4Ctx *c) {
  {  return; }
}
void f_8c0625b8(SH4Ctx *c) {
  R(3)=0x8c2d4968u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c062628;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0625d8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0625dc;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0625e0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c062620;
  c->t=(int32_t)R(0)==5;
  if(c->t) goto L8c062624;
  {  goto L8c062628; }
L8c0625d8:;
  {  { f_8c062084(c); return; } }
L8c0625dc:;
  {  { f_8c0622e0(c); return; } }
L8c0625e0:;
  {  { f_8c062452(c); return; } }
L8c062620:;
  {  { f_8c06237a(c); return; } }
L8c062624:;
  {  { f_8c062330(c); return; } }
L8c062628:;
  {  return; }
}
void f_8c06262c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(14)=0x8c2d4968u;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c062650;
  R(3)=0x8c080920u;
  R(4)=LD32(R(15)+20);
  { c->pr=0x8c062648u; R(4)=LD32(R(4)+48); f_8c080920(c); }
  R(2)=R(0);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=!c->t; ST32(R(14)+40,R(0)); if(k) goto L8c06265a; }
L8c062650:;
  R(0)=0xffffffffu;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c06265a:;
  R(3)=LD32(R(15)+8);
  R(0)=0x6cu;
  R(1)=0x54u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x70u;
  R(2)=LD32(R(15)+4);
  R(1)+=R(14);
  R(4)=0x0u;
  ST32(R(14)+R(0),R(2));
  R(5)=0x64u;
  R(2)=0x8c080b96u;
  ST32(R(14)+8,R(4));
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(3)+4);
  ST8(R(1),R(0));
  R(0)=0x44u;
  R(3)=LD32(R(15)+20);
  ST32(R(14)+36,R(3));
  R(3)=0x8c2e2cccu;
  ST32(R(14)+R(0),R(4));
  R(6)=LD32(R(3));
  { uint32_t tg=R(2); c->pr=0x8c062688u; R(4)=LD32(R(14)+40); sh4_call(c,tg); }
  R(4)=0x1u;
  R(0)=R(4);
  ST32(R(14),R(4));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062696(SH4Ctx *c) {
  R(2)=0x8c2d49d4u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c06269e(SH4Ctx *c) {
  R(3)=0x5au;
  R(5)=R(4)&0xFF;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0626aa;
  { R(4)=0x7fu; goto L8c06273e; }
L8c0626aa:;
  R(2)=0x50u;
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(!c->t) goto L8c0626b4;
  { R(4)=0x75u; goto L8c06273e; }
L8c0626b4:;
  R(1)=0x46u;
  c->t=(int32_t)R(5)>=(int32_t)R(1);
  if(!c->t) goto L8c0626be;
  { R(4)=0x71u; goto L8c06273e; }
L8c0626be:;
  R(3)=0x3cu;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c062700;
  { R(4)=0x6eu; goto L8c06273e; }
L8c062700:;
  R(2)=0x32u;
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(!c->t) goto L8c06270a;
  { R(4)=0x6bu; goto L8c06273e; }
L8c06270a:;
  R(1)=0x28u;
  c->t=(int32_t)R(5)>=(int32_t)R(1);
  if(!c->t) goto L8c062714;
  { R(4)=0x68u; goto L8c06273e; }
L8c062714:;
  R(3)=0x1eu;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c06271e;
  { R(4)=0x64u; goto L8c06273e; }
L8c06271e:;
  R(2)=0x14u;
  c->t=(int32_t)R(5)>=(int32_t)R(2);
  if(!c->t) goto L8c062728;
  { R(4)=0x60u; goto L8c06273e; }
L8c062728:;
  R(1)=0xau;
  c->t=(int32_t)R(5)>=(int32_t)R(1);
  if(!c->t) goto L8c062732;
  { R(4)=0x5cu; goto L8c06273e; }
L8c062732:;
  R(3)=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c06273c;
  { R(4)=0x58u; goto L8c06273e; }
L8c06273c:;
  R(4)=0xffffff81u;
L8c06273e:;
  { R(0)=R(4); return; }
}
void f_8c062742(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2d4968u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c062758;
  {  goto L8c062864; }
L8c062758:;
  R(3)=LD32(R(14)+36);
  R(0)=0x54u;
  R(1)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(1)=R(1)&0xFF;
  R(3)=0x8c067940u;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(1)*(uint32_t)(uint16_t)R(0);
  R(1)=c->macl;
  { c->pr=0x8c06276eu; R(0)=0x7fu; f_8c067940(c); }
  R(4)=R(14);
  R(4)+=0x58u;
  R(13)=R(0);
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c062788;
  c->fpul=R(13);
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(13)=c->fpul;
L8c062788:;
  { c->pr=0x8c06278cu; R(4)=R(13); f_8c06269e(c); }
  R(11)=(uint32_t)(int32_t)(int8_t)R(0);
  R(0)=LD32(R(14)+24);
  R(13)=0x8c0e3288u;
  R(12)=0x8c0e30f8u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=LD32(R(14)+4); if(k) goto L8c0627a2; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c062800;
  {  goto L8c062864; }
L8c0627a2:;
  R(0)=0x50u;
  R(6)=0xffffff81u;
  R(7)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c0627acu; R(5)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(14)+R(0));
  R(7)=0x0u;
  R(6)=R(7);
  { uint32_t tg=R(12); c->pr=0x8c0627b8u; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  R(0)=0x50u;
  R(6)=R(11);
  R(7)=0x0u;
  { R(5)=LD32(R(14)+R(0)); goto L8c062860; }
L8c062800:;
  R(0)=0x50u;
  R(6)=0xffffff81u;
  R(7)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c06280au; R(5)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(6)=0xffffff81u;
  R(7)=0x0u;
  R(5)+=0x1u;
  { uint32_t tg=R(13); c->pr=0x8c062818u; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  R(2)=0x8c0c702cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(4)=LD32(R(14)+4); if(k) goto L8c062832; }
  R(0)=0x50u;
  R(6)=0xffffff81u;
  R(7)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c06282cu; R(5)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(7)=0x0u;
  { R(6)=0x7fu; goto L8c062840; }
L8c062832:;
  R(7)=0x0u;
  R(0)=0x50u;
  R(6)=R(7);
  { uint32_t tg=R(12); c->pr=0x8c06283cu; R(5)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(7)=0x0u;
  R(6)=R(7);
L8c062840:;
  R(0)=0x50u;
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(5)+=0x1u;
  { uint32_t tg=R(12); c->pr=0x8c06284au; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  R(0)=0x50u;
  R(6)=R(11);
  R(5)=LD32(R(14)+R(0));
  R(7)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c062856u; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
  R(0)=0x50u;
  R(6)=R(11);
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(7)=0x0u;
  R(5)+=0x1u;
L8c062860:;
  { uint32_t tg=R(13); c->pr=0x8c062864u; R(4)=LD32(R(14)+4); sh4_call(c,tg); }
L8c062864:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062870(SH4Ctx *c) {
  R(4)=0x8c2d4968u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c062880;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c062880:;
  R(0)=0x54u;
  R(3)=(int32_t)(int8_t)LD8(R(4)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(5)+4);
  c->t=R(3)==R(0);
  if(c->t) goto L8c062894;
  R(1)=0x54u;
  R(0)=(int32_t)(int8_t)LD8(R(5)+4);
  R(1)+=R(4);
  { c->pr=0x8c062894u; ST8(R(1),R(0)); f_8c062742(c); }
L8c062894:;
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06289c(SH4Ctx *c) {
  R(3)=0x8c2d4968u;
  R(0)=LD32(R(3));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  { R(0)^=0x1u; return; }
}
void f_8c0628a8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2d4968u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0628be; }
  { ST32(R(14)+8,R(12)); goto L8c06291c; }
L8c0628be:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0628ca;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0628ca;
  c->t=(int32_t)R(0)==5;
L8c0628ca:;
  R(0)=R(4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0628f6;
  R(2)=0x8c0e3354u;
  { c->pr=0x8c0628d6u; R(4)=LD32(R(14)+4); f_8c0e3354(c); }
  R(13)=0x8c0c7030u;
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0628e4;
  R(2)=LD32(R(13));
  R(2)+=0x1u;
  ST32(R(13),R(2));
L8c0628e4:;
  R(3)=0x8c0e2c70u;
  { c->pr=0x8c0628eau; R(4)=LD32(R(14)+4); f_8c0e2c70(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0628f6;
  R(3)=LD32(R(13));
  R(3)+=0x1u;
  ST32(R(13),R(3));
L8c0628f6:;
  R(2)=0x8c080b60u;
  { c->pr=0x8c0628fcu; R(4)=LD32(R(14)+40); f_8c080b60(c); }
  R(0)=0x6cu;
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06290c;
  R(3)=LD32(R(14)+R(0));
  R(0)=0x70u;
  { uint32_t tg=R(3); c->pr=0x8c06290cu; R(4)=LD32(R(14)+R(0)); sh4_call(c,tg); }
L8c06290c:;
  ST32(R(14),R(12));
  ST32(R(14)+8,R(12));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0cd1dcu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0cd1dc(c); return; } }
L8c06291c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2d4968u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0629a8;
  R(0)=LD32(R(14)+24);
  R(13)=0x8c0e3288u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=LD32(R(14)+4); if(k) goto L8c062980; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06298a;
  {  goto L8c0629a4; }
L8c062980:;
  R(0)=0x50u;
  R(6)=0xffffff81u;
  R(7)=0x0u;
  { R(5)=LD32(R(14)+R(0)); goto L8c0629a0; }
L8c06298a:;
  R(0)=0x50u;
  R(6)=0xffffff81u;
  R(7)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c062994u; R(5)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(4)=LD32(R(14)+4);
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(7)=0x0u;
  R(6)=0xffffff81u;
  R(5)+=0x1u;
L8c0629a0:;
  { uint32_t tg=R(13); c->pr=0x8c0629a4u;  sh4_call(c,tg); }
L8c0629a4:;
  R(2)=0x1u;
  ST32(R(14)+8,R(2));
L8c0629a8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0629b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2d4968u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c062a40;
  R(3)=LD32(R(14)+36);
  R(0)=0x54u;
  R(1)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(3)+12);
  R(1)=R(1)&0xFF;
  R(3)=0x8c067940u;
  R(0)=R(0)&0xFF;
  c->macl=(uint32_t)(uint16_t)R(1)*(uint32_t)(uint16_t)R(0);
  R(1)=c->macl;
  { c->pr=0x8c0629d8u; R(0)=0x7fu; f_8c067940(c); }
  R(4)=R(14);
  R(4)+=0x58u;
  R(13)=R(0);
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0629f2;
  c->fpul=R(13);
  R(0)=0xcu;
  fp_ld(c,2,R(0)+R(4));
  fp_float(c,3);
  fp_arith(c,2,3,2);
  fp_ftrc(c,3);
  R(13)=c->fpul;
L8c0629f2:;
  { c->pr=0x8c0629f6u; R(4)=R(13); f_8c06269e(c); }
  R(12)=(uint32_t)(int32_t)(int8_t)R(0);
  R(0)=LD32(R(14)+28);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c062a04;
  R(3)=0x8c0c7034u;
  { R(13)=LD32(R(3)); goto L8c062a06; }
L8c062a04:;
  R(13)=0x64u;
L8c062a06:;
  R(0)=LD32(R(14)+24);
  R(11)=0x8c0e3288u;
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=LD32(R(14)+4); if(k) goto L8c062a18; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c062a22;
  {  goto L8c062a3c; }
L8c062a18:;
  R(0)=0x50u;
  R(6)=R(12);
  R(7)=R(13);
  { R(5)=LD32(R(14)+R(0)); goto L8c062a38; }
L8c062a22:;
  R(0)=0x50u;
  R(6)=R(12);
  R(7)=R(13);
  { uint32_t tg=R(11); c->pr=0x8c062a2cu; R(5)=LD32(R(14)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(4)=LD32(R(14)+4);
  R(5)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(7)=R(13);
  R(6)=R(12);
  R(5)+=0x1u;
L8c062a38:;
  { uint32_t tg=R(11); c->pr=0x8c062a3cu;  sh4_call(c,tg); }
L8c062a3c:;
  R(2)=0x0u;
  ST32(R(14)+8,R(2));
L8c062a40:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062a4c(SH4Ctx *c) {
  R(3)=0xffffffe0u;
  R(5)=R(4);
  R(5)&=R(3);
  R(5)+=0x20u;
  R(2)=R(5);
  R(2)-=R(4);
  R(6)=R(5);
  {uint32_t v=R(2);R(6)-=1;ST8(R(6),v);}
  { R(0)=R(5); return; }
}
void f_8c062a60(SH4Ctx *c) {
  R(3)=R(4);
  R(3)+=0xffffffffu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(2)=R(2)&0xFF;
  R(4)-=R(2);
  { R(0)=R(4); return; }
}
void f_8c062aa0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x0u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2d4a04u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c063d46u;
  R(14)=R(4);
  R(11)=0x8c0c7030u;
  R(12)=R(4);
  R(13)=0x8c2d49dcu;
L8c062abe:;
  R(8)=R(9);
  R(8)<<=2;
  R(3)=R(9);
  R(2)=0x8c2d49dcu;
  R(8)+=R(3);
  R(5)=0x4020u;
  R(8)<<=2;
  R(8)+=R(2);
  { uint32_t tg=R(10); c->pr=0x8c062ad2u; R(4)=0x0u; sh4_call(c,tg); }
  R(5)=0x820u;
  ST32(R(8)+16,R(0));
  { uint32_t tg=R(10); c->pr=0x8c062adau; R(4)=0x0u; sh4_call(c,tg); }
  ST32(R(12)+8,R(0));
  R(3)=LD32(R(8)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c062ae8;
  R(3)=LD32(R(12)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c062af0;
L8c062ae8:;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0badbcu;
  { c->pr=0x8c062af0u; R(4)=0x8u; f_8c0633e0(c); }
L8c062af0:;
  { c->pr=0x8c062af4u; R(4)=LD32(R(13)+16); f_8c062a4c(c); }
  ST32(R(13)+16,R(0));
  { c->pr=0x8c062afau; R(4)=LD32(R(14)+8); f_8c062a4c(c); }
  R(2)=0x8c0e2910u;
  ST32(R(14)+8,R(0));
  { c->pr=0x8c062b02u; R(4)=R(14); f_8c0e2910(c); }
  R(8)=R(0);
  c->t=(R(8)&R(8))==0;
  { uint32_t k=c->t; R(9)+=0x1u; if(k) goto L8c062b10; }
  R(2)=LD32(R(11));
  R(2)+=0x1u;
  ST32(R(11),R(2));
L8c062b10:;
  R(3)=0x2u;
  c->t=(int32_t)R(9)>=(int32_t)R(3);
  R(14)+=0xcu;
  R(13)+=0x14u;
  { uint32_t k=!c->t; R(12)+=0xcu; if(k) goto L8c062abe; }
  R(5)=0x64u;
  { uint32_t tg=R(10); c->pr=0x8c062b22u; R(4)=0x0u; sh4_call(c,tg); }
  R(4)=0x8c2d4968u;
  R(2)=0x0u;
  R(3)=0x8c2e2cccu;
  c->t=(R(8)&R(8))==0;
  R(1)=R(2);
  ST32(R(3),R(0));
  ST32(R(4),R(2));
  ST32(R(4)+8,R(2));
  { uint32_t k=c->t; R(3)=0x1u; if(k) goto L8c062b3c; }
  R(0)=LD32(R(11));
  R(0)+=0x1u;
  ST32(R(11),R(0));
L8c062b3c:;
  R(2)=0x8c0c7028u;
  R(0)=0x3u;
  ST32(R(2),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062ba0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { R(14)=0x0u; goto L8c062c36; }
L8c062bb0:;
  R(10)=R(14);
  R(10)<<=2;
  R(3)=R(14);
  R(10)+=R(3);
  R(10)<<=2;
  R(13)=0x8c2d49dcu;
  R(4)=R(10);
  R(7)=R(14);
  R(4)+=R(13);
  R(12)=0x8c2d4a04u;
  R(4)=LD32(R(4)+16);
  c->t=R(7)>>31;R(7)<<=1;
  R(3)=R(4);
  R(3)+=0xffffffffu;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(3)=R(14);
  R(7)+=R(3);
  R(2)=R(2)&0xFF;
  R(4)-=R(2);
  R(2)=R(10);
  R(7)<<=2;
  R(6)=R(4);
  R(2)+=R(13);
  R(7)+=R(12);
  ST32(R(2)+16,R(4));
  R(4)=LD32(R(7)+8);
  R(2)=R(4);
  R(2)+=0xffffffffu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  R(4)-=R(3);
  ST32(R(7)+8,R(4));
  R(3)=LD32(R(5));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(6)=R(4); if(k) goto L8c062c14; }
  R(5)=R(14);
  c->t=R(5)>>31;R(5)<<=1;
  R(3)=R(14);
  R(5)+=R(3);
  R(5)<<=2;
  R(5)+=R(12);
  R(5)=LD32(R(5)+8);
  { uint32_t tg=R(11); c->pr=0x8c062c0au; R(4)=0x0u; sh4_call(c,tg); }
  R(5)=R(10);
  R(5)+=R(13);
  R(5)=LD32(R(5)+16);
  { uint32_t tg=R(11); c->pr=0x8c062c14u; R(4)=0x0u; sh4_call(c,tg); }
L8c062c14:;
  R(4)=R(14);
  c->t=R(4)>>31;R(4)<<=1;
  R(3)=R(14);
  R(4)+=R(3);
  R(4)<<=2;
  R(13)=0x8c0e2990u;
  R(4)+=R(12);
  { c->pr=0x8c062c26u; R(4)=LD32(R(4)); f_8c0e2990(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c062c36; }
  R(4)=0x8c0c7030u;
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  ST32(R(4),R(3));
L8c062c36:;
  R(11)=0x8c064160u;
  R(4)=0x2u;
  R(5)=0x8c0bdbf8u;
  c->t=(int32_t)R(14)>=(int32_t)R(4);
  if(!c->t) goto L8c062bb0;
  R(3)=LD32(R(5));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c062c4e;
  R(3)=0x8c2e2cccu;
  R(5)=LD32(R(3));
  { uint32_t tg=R(11); c->pr=0x8c062c4eu; R(4)=0x0u; sh4_call(c,tg); }
L8c062c4e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062c5c(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c062c60(SH4Ctx *c) {
  { R(0)=0xffffffffu; return; }
}
void f_8c062ca0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff00u;
  R(15)+=R(0);
  R(13)=R(4);
  R(3)=LD32(R(13));
  R(14)=R(5);
  R(0)=0x14u;
  ST32(R(14),R(3));
  R(2)=LD32(R(13)+4);
  ST32(R(14)+4,R(2));
  R(3)=LD32(R(13)+8);
  ST32(R(14)+8,R(3));
  R(3)=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(13)+R(0));
  ST8(R(14)+12,R(0));
  R(0)=0x4cu;
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(13)+24);
  ST32(R(14)+20,R(2));
  R(3)=LD32(R(13)+28);
  ST32(R(14)+24,R(3));
  R(2)=LD32(R(13)+32);
  ST32(R(14)+28,R(2));
  R(3)=LD32(R(13)+36);
  ST32(R(14)+32,R(3));
  R(2)=LD32(R(13)+40);
  ST32(R(14)+36,R(2));
  R(3)=LD32(R(13)+44);
  ST32(R(14)+40,R(3));
  R(2)=LD32(R(13)+48);
  ST32(R(14)+44,R(2));
  R(3)=LD32(R(13)+60);
  ST32(R(14)+R(0),R(3));
  R(0)=0x42u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(0)=0x52u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x40u;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(0)=0x50u;
  ST16(R(14)+R(0),R(3));
  R(0)=0x4cu;
  R(2)=LD32(R(13)+60);
  ST32(R(14)+R(0),R(2));
  R(0)=0x44u;
  R(3)=LD32(R(13)+R(0));
  R(0)=0x54u;
  ST32(R(14)+R(0),R(3));
  R(2)=LD32(R(13)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c062d30;
  R(3)=0x8c063820u;
  R(4)=R(13);
  R(5)=R(15);
  { c->pr=0x8c062d14u; R(4)+=0x48u; f_8c063820(c); }
  R(2)=0x8c042b96u;
  { c->pr=0x8c062d1au; R(4)=R(15); f_8c042b96(c); }
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; ST32(R(14)+48,R(0)); if(k) goto L8c062d26; }
  { R(0)=0x0u; goto L8c062d58; }
L8c062d26:;
  R(3)=LD32(R(13)+16);
  ST32(R(14)+52,R(3));
  R(2)=LD32(R(13)+12);
  { ST32(R(14)+60,R(2)); goto L8c062d56; }
L8c062d30:;
  R(5)=R(13);
  R(2)=0x8c068788u;
  R(4)=R(14);
  R(6)=0xdu;
  R(5)+=0x48u;
  { c->pr=0x8c062d3eu; R(4)+=0x30u; f_8c068788(c); }
  R(0)=0x58u;
  R(3)=LD32(R(13)+R(0));
  R(0)=0x40u;
  ST32(R(14)+R(0),R(3));
  R(0)=0x5cu;
  R(2)=LD32(R(13)+R(0));
  R(0)=0x44u;
  ST32(R(14)+R(0),R(2));
  R(0)=0x60u;
  R(3)=LD32(R(13)+R(0));
  R(0)=0x48u;
  ST32(R(14)+R(0),R(3));
L8c062d56:;
  R(0)=0x1u;
L8c062d58:;
  R(1)=0x100u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c062da0(SH4Ctx *c) {
  {  return; }
}
void f_8c062da4(SH4Ctx *c) {
  R(5)=0x8c0c702cu;
  R(3)=LD32(R(5));
  c->t=R(4)==R(3);
  if(c->t) goto L8c062dba;
  R(2)=0x8c2d4968u;
  ST32(R(5),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c062dba;
  {  { f_8c062742(c); return; } }
L8c062dba:;
  {  return; }
}
void f_8c062dbe(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c062dc6;
  { R(0)=0x0u; return; }
L8c062dc6:;
  R(0)=R(5);
  ST8(R(4)+12,R(0));
  R(0)=0x1u;
  {  return; }
}
void f_8c062dd0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=R(5);
  c->t=(int32_t)R(0)==1;
  ST32(R(15),R(5));
  R(13)=R(6);
  { uint32_t k=!c->t; R(10)=R(7); if(k) goto L8c062e20; }
  { R(5)=0x0u; goto L8c062e22; }
L8c062e20:;
  R(5)=0x80u;
L8c062e22:;
  R(0)=R(4);
  R(14)=0x800u;
  R(12)=0x8c2d4a04u;
  c->t=(int32_t)R(0)==1;
  R(8)=(uint32_t)(int32_t)(int8_t)R(5);
  { uint32_t k=c->t; R(9)=R(12); if(k) goto L8c062e38; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c062e62;
  {  goto L8c062f0c; }
L8c062e38:;
  c->t=(int32_t)R(13)>=(int32_t)R(14);
  if(c->t) goto L8c062e46;
  R(3)=0x8c0686b8u;
  R(5)=R(8);
  R(6)=R(14);
  { c->pr=0x8c062e46u; R(4)=LD32(R(9)+8); f_8c0686b8(c); }
L8c062e46:;
  R(4)=LD32(R(12)+8);
  R(5)=R(10);
  R(6)=R(13);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0685b4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c062e62:;
  R(3)=0x0u;
  R(11)=R(13);
  c->t=(int32_t)R(3)>(int32_t)R(11);
  {uint32_t a=R(11),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(11)=r;}
  c->t=R(11)&1;R(11)=(uint32_t)((int32_t)R(11)>>1);
  c->t=(int32_t)R(11)>=(int32_t)R(14);
  if(c->t) goto L8c062e84;
  R(3)=0x8c0686b8u;
  R(5)=R(8);
  R(6)=R(14);
  { c->pr=0x8c062e7au; R(4)=LD32(R(9)+8); f_8c0686b8(c); }
  R(2)=0x8c0686b8u;
  R(5)=R(8);
  R(6)=R(14);
  { c->pr=0x8c062e84u; R(4)=LD32(R(12)+20); f_8c0686b8(c); }
L8c062e84:;
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(4)=R(12); if(k) goto L8c062ec0; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c062eee;
  {  goto L8c062f0c; }
L8c062ec0:;
  R(6)=R(13);
  c->t=(int32_t)R(6)>=0;
  if(c->t) goto L8c062ec8;
  R(6)+=0x3u;
L8c062ec8:;
  c->t=R(6)&1;R(6)=(uint32_t)((int32_t)R(6)>>1);
  R(14)=LD32(R(4)+8);
  R(7)=LD32(R(4)+20);
  c->t=R(6)&1;R(6)=(uint32_t)((int32_t)R(6)>>1);
  c->t=(int32_t)R(6)>0;
  R(5)=R(10);
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c062f0c; }
L8c062ed8:;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(2)=(uint32_t)v;}
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  ST16(R(14),R(2));
  R(14)+=0x2u;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(2)=(uint32_t)v;}
  ST16(R(7),R(2));
  { uint32_t k=!c->t; R(7)+=0x2u; if(k) goto L8c062ed8; }
  {  goto L8c062f0c; }
L8c062eee:;
  R(6)=LD32(R(4)+20);
  c->t=(int32_t)R(11)>0;
  R(7)=LD32(R(4)+8);
  R(5)=R(10);
  { uint32_t k=!c->t; R(4)=0x0u; if(k) goto L8c062f0c; }
L8c062efa:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(11);
  ST8(R(7),R(3));
  R(7)+=0x1u;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(6),R(3));
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c062efa; }
L8c062f0c:;
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
void f_8c062f20(SH4Ctx *c) {
  R(4)=0x8c0c7040u;
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  { ST32(R(4),R(3)); return; }
}
void f_8c062f60(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(12)=0x8c2d4968u;
  R(3)=R(6);
  ST32(R(15)+4,R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15),R(6));
  {uint32_t v=R(6);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(12)+28);
  R(6)=LD32(R(15)+8);
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c062f88u; R(4)=LD32(R(12)+24); f_8c062dd0(c); }
  R(15)+=0x4u;
  R(3)=0x8c0c7038u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  R(2)=0x8c0e2bc8u;
  R(4)=c->t;
  { c->pr=0x8c062f98u;  f_8c0e2bc8(c); }
  R(3)=LD32(R(12)+24);
  R(9)=0x0u;
  R(14)=0x8c0c7030u;
  R(2)=R(9);
  R(8)=0x800u;
  c->t=R(2)>=R(3);
  R(10)=0x8c0c703cu;
  R(11)=0x8c2d4a04u;
  { uint32_t k=c->t; R(13)=R(9); if(k) goto L8c063030; }
L8c062fac:;
  R(4)=R(13);
  c->t=R(4)>>31;R(4)<<=1;
  R(3)=R(13);
  R(4)+=R(3);
  R(2)=0x8c0e29f8u;
  R(4)<<=2;
  R(5)=0x8c2d4a1cu;
  R(4)+=R(11);
  { c->pr=0x8c062fc0u; R(4)=LD32(R(4)); f_8c0e29f8(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c062fcc;
  R(2)=LD32(R(14));
  R(2)+=0x1u;
  ST32(R(14),R(2));
L8c062fcc:;
  R(3)=0x8c2d4a1cu;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c062fda;
  R(1)=LD32(R(10));
  R(1)+=0x1u;
  ST32(R(10),R(1));
L8c062fda:;
  R(5)=R(13);
  R(3)=R(13);
  c->t=R(5)>>31;R(5)<<=1;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(5)+=R(3);
  R(3)=0x8c0e2af4u;
  R(5)<<=2;
  R(6)=R(8);
  R(5)+=R(11);
  ST32(R(15)+4,R(5));
  R(7)=0xffffffffu;
  R(4)=LD32(R(15)+4);
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c062ff8u; R(4)=LD32(R(4)); f_8c0e2af4(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c063006; }
  R(3)=LD32(R(14));
  R(3)+=0x1u;
  ST32(R(14),R(3));
L8c063006:;
  R(6)=R(13);
  c->t=R(6)>>31;R(6)<<=1;
  R(3)=R(13);
  R(6)+=R(3);
  R(6)<<=2;
  R(2)=0x8c0e3404u;
  R(6)+=R(11);
  R(5)=R(13);
  R(6)=LD32(R(6));
  { c->pr=0x8c06301cu; R(4)=LD32(R(12)+4); f_8c0e3404(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)+=0x1u; if(k) goto L8c06302a; }
  R(2)=LD32(R(14));
  R(2)+=0x1u;
  ST32(R(14),R(2));
L8c06302a:;
  R(3)=LD32(R(12)+24);
  c->t=R(13)>=R(3);
  if(!c->t) goto L8c062fac;
L8c063030:;
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
void f_8c0630a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c098420u;
  R(13)=R(15);
  R(13)+=0xcu;
  R(3)=LD32(R(13));
  ST32(R(14)+24,R(3));
  { c->pr=0x8c0630b6u; R(4)=R(14); f_8c098420(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0630be;
  {  goto L8c06319c; }
L8c0630be:;
  R(0)=LD32(R(13));
  R(1)=0x54u;
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0630d0;
  c->t=(int32_t)R(0)==4;
  if(c->t) goto L8c063100;
  {  goto L8c063104; }
L8c0630d0:;
  R(3)=0x1u;
  { ST32(R(14)+16,R(3)); goto L8c063104; }
L8c063100:;
  R(1)=0x2u;
  ST32(R(14)+16,R(1));
L8c063104:;
  R(2)=LD32(R(13));
  R(0)=0x52u;
  R(1)=0x4cu;
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(3)=R(3)&0xFFFF;
  ST32(R(14)+12,R(3));
  R(2)=LD32(R(13));
  R(3)=LD32(R(2)+60);
  ST32(R(14),R(3));
  R(2)=LD32(R(13));
  R(3)=LD32(R(2)+52);
  ST32(R(14)+4,R(3));
  R(0)=LD32(R(13));
  R(0)=LD32(R(1)+R(0));
  R(1)=0x2b11u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06314e;
  R(1)=0x3e80u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c063154;
  R(1)=0x49d4u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c063180;
  R(1)=0x5622u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c063186;
  R(1)=0x5dc0u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c06318c;
  R(1)=0x7d00u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c063192;
  R(1)=0xac44u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c063198;
  {  goto L8c06319c; }
L8c06314e:;
  R(3)=0x7000u;
  { ST32(R(14)+20,R(3)); goto L8c06319c; }
L8c063154:;
  R(1)=0x71cdu;
  {  goto L8c063194; }
L8c063180:;
  R(2)=0x72dbu;
  {  goto L8c06319a; }
L8c063186:;
  R(1)=0x7800u;
  {  goto L8c063194; }
L8c06318c:;
  R(2)=0x785au;
  {  goto L8c06319a; }
L8c063192:;
  R(1)=0x79cdu;
L8c063194:;
  { ST32(R(14)+20,R(1)); goto L8c06319c; }
L8c063198:;
  R(2)=0x0u;
L8c06319a:;
  ST32(R(14)+20,R(2));
L8c06319c:;
  R(3)=LD32(R(14));
  R(2)=0x8c0679f4u;
  ST32(R(14)+8,R(3));
  R(0)=LD32(R(14)+12);
  { c->pr=0x8c0631a8u; R(1)=R(3); f_8c0679f4(c); }
  ST32(R(14)+8,R(0));
  R(0)=LD32(R(14)+16);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0631e0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0631e8;
  {  goto L8c0631ee; }
L8c0631e0:;
  R(3)=LD32(R(14)+8);
  c->t=R(3)&1;R(3)>>=1;
  { ST32(R(14)+8,R(3)); goto L8c0631ee; }
L8c0631e8:;
  R(0)=LD32(R(14)+8);
  c->t=R(0)>>31;R(0)<<=1;
  ST32(R(14)+8,R(0));
L8c0631ee:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0631f6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15),R(4));
  ST32(R(15)+8,R(5));
  R(5)=0x0u;
  ST32(R(15)+4,R(6));
  R(3)=LD32(R(15)+16);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c06320eu; R(4)=LD32(R(15)+8); f_8c06262c(c); }
  R(3)=0x8c2d49acu;
  R(4)=R(0);
  R(2)=LD32(R(15)+24);
  ST32(R(3),R(2));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(4); return; }
}
void f_8c06321e(SH4Ctx *c) {
  {  { f_8c062870(c); return; } }
}
void f_8c063222(SH4Ctx *c) {
  R(2)=0x8c2d49acu;
  R(3)=LD32(R(15));
  ST32(R(2),R(3));
  { R(0)=0x1u; return; }
}
void f_8c06322c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(15)+12);
  R(0)=0x44u;
  R(5)=0x8c2d4968u;
  R(2)=0x8c2d49dcu;
  ST32(R(5)+R(0),R(3));
  R(0)=0x4cu;
  R(7)=LD32(R(5)+R(0));
  R(4)=R(5);
  R(4)+=0x58u;
  R(6)=R(7);
  c->t=(R(7)&R(7))==0;
  R(6)<<=2;
  R(3)=R(7);
  R(6)+=R(3);
  R(7)=R(2);
  R(0)=c->t;
  R(3)=R(0);
  R(6)<<=2;
  R(0)<<=2;
  R(0)+=R(3);
  R(6)+=R(2);
  R(3)=LD32(R(6)+12);
  R(0)<<=2;
  R(6)=LD32(R(6)+4);
  R(7)+=R(0);
  R(1)=LD32(R(7)+4);
  R(7)=0x0u;
  R(0)=LD32(R(4));
  R(6)-=R(3);
  R(6)+=R(1);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; c->fr[4]=0x3F800000u; if(k) goto L8c0632a4; }
  R(1)=LD32(R(4)+4);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c06329a;
  R(3)=0x8c0679f4u;
  ST32(R(5)+12,R(7));
  R(0)=LD32(R(5)+24);
  R(0)<<=8;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { c->pr=0x8c06328au; R(1)=R(6); f_8c0679f4(c); }
  R(2)=R(0);
  c->fpul=R(2);
  ST32(R(4)+8,R(0));
  R(0)=0x10u;
  fp_float(c,3);
  fp_arith(c,3,4,3);
  fp_st(c,4,R(0)+R(4));
  ST32(R(4)+4,R(7));
L8c06329a:;
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0632a4:;
  R(14)=LD32(R(5)+12);
  R(3)=0x204ccu;
  R(14)+=R(6);
  c->t=R(14)>R(3);
  ST32(R(15),R(14));
  if(!c->t) goto L8c0632b6;
  R(14)=R(3);
  {  goto L8c0632b8; }
L8c0632b6:;
  R(14)=LD32(R(15));
L8c0632b8:;
  R(2)=R(14);
  R(3)=0x8c0679f4u;
  R(2)-=R(6);
  ST32(R(5)+12,R(2));
  R(0)=LD32(R(5)+24);
  R(0)<<=8;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  { c->pr=0x8c0632ccu; R(1)=R(14); f_8c0679f4(c); }
  R(1)=0x8c0c7044u;
  R(2)=R(0);
  ST32(R(4)+8,R(0));
  R(0)=0xcu;
  R(3)=LD32(R(1));
  R(2)+=R(3);
  ST32(R(4)+8,R(2));
  fp_st(c,4,R(0)+R(4));
  R(0)=0x10u;
  R(3)=LD32(R(4)+8);
  c->fpul=R(3);
  R(3)=0x1u;
  fp_float(c,3);
  fp_arith(c,3,4,3);
  c->fr[3]=0x3F800000u;
  fp_arith(c,0,3,3);
  fp_mov(c,2,4);
  fp_arith(c,3,2,3);
  fp_st(c,2,R(0)+R(4));
  ST32(R(4),R(3));
  ST32(R(4)+4,R(7));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0632fe(SH4Ctx *c) {
  R(2)=0x8c2d49acu;
  R(3)=LD32(R(15));
  ST32(R(2),R(3));
  { R(0)=0x1u; return; }
}
void f_8c063340(SH4Ctx *c) {
  {  { f_8c0628a8(c); return; } }
}
void f_8c063344(SH4Ctx *c) {
  {  { f_8c062960(c); return; } }
}
void f_8c063348(SH4Ctx *c) {
  {  { f_8c0629b0(c); return; } }
}
void f_8c06334c(SH4Ctx *c) {
  { R(0)=0x3u; return; }
}
void f_8c063360(SH4Ctx *c) {
  {  return; }
}
void f_8c063364(SH4Ctx *c) {
  {  return; }
}
void f_8c063368(SH4Ctx *c) {
  {  return; }
}
void f_8c06336c(SH4Ctx *c) {
  {  return; }
}
void f_8c063370(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c063374(SH4Ctx *c) {
  {  return; }
}
void f_8c063378(SH4Ctx *c) {
  {  return; }
}
void f_8c06337c(SH4Ctx *c) {
  {  return; }
}
void f_8c063380(SH4Ctx *c) {
  {  return; }
}
void f_8c063388(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0633a0(SH4Ctx *c) {
  R(4)=0x8c0c70c8u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4));
  R(2)=0x8c099742u;
  R(3)+=0x1u;
  { c->pr=0x8c0633aeu; ST32(R(4),R(3)); f_8c099742(c); }
  R(1)=0x8c0d6fdcu;
  { c->pr=0x8c0633b4u;  f_8c0d6fdc(c); }
  R(2)=0x8c0625b8u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0625b8(c); return; } }
}
void f_8c0633e0(SH4Ctx *c) {
  {  return; }
}
void f_8c0633e4(SH4Ctx *c) {
  {  return; }
}
void f_8c0633e8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffdf8u;
  R(15)+=R(0);
  R(3)=0x8c0badc0u;
  R(2)=0x108u;
  ST32(R(15)+4,R(5));
  R(2)+=R(15);
  R(4)=0x108u;
  ST32(R(15),R(6));
  {uint32_t v=LD32(R(3));R(3)+=4;R(1)=v;}
  {uint32_t v=LD32(R(3));R(3)+=4;R(0)=v;}
  ST32(R(2),R(1));
  ST32(R(2)+4,R(0));
  {uint32_t v=LD32(R(3));R(3)+=4;R(1)=v;}
  {uint32_t v=LD32(R(3));R(3)+=4;R(0)=v;}
  ST32(R(2)+8,R(1));
  ST32(R(2)+12,R(0));
  {uint32_t v=LD32(R(3));R(3)+=4;R(1)=v;}
  {uint32_t v=LD32(R(3));R(3)+=4;R(0)=v;}
  ST32(R(2)+16,R(1));
  ST32(R(2)+20,R(0));
  R(2)+=0x18u;
  {int32_t v=(int16_t)LD16(R(3));R(3)+=2;R(1)=(uint32_t)v;}
  ST16(R(2),R(1));
  R(2)+=0x2u;
  R(1)=0x0u;
  ST8(R(2),R(1));
  R(2)=0x8c09d1a0u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c063426u; R(4)+=R(15); f_8c09d1a0(c); }
  R(3)=LD32(R(15));
  R(2)=0x8c0baddcu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c06874cu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=R(15);
  { c->pr=0x8c063436u; R(4)+=0x10u; f_8c06874c(c); }
  R(4)=0x110u;
  R(5)=R(15);
  R(2)=0x8c09d1a0u;
  R(5)+=0x10u;
  { c->pr=0x8c063442u; R(4)+=R(15); f_8c09d1a0(c); }
  R(3)=0x110u;
  R(2)=0x8c0badecu;
  R(3)+=R(15);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0337c4u;
  { c->pr=0x8c063450u; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} f_8c0337c4(c); }
  R(1)=0x218u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06345e(SH4Ctx *c) {
  { R(0)=0x4u; return; }
}
void f_8c0634a0(SH4Ctx *c) {
  R(2)=0x8c0c710cu;
  R(1)=0xffu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(2));
  R(3)=R(3)&0xFF;
  c->t=R(3)==R(1);
  if(!c->t) goto L8c0634bc;
  R(3)=0x8c0124a6u;
  R(4)=0x8c0c7110u;
  R(5)=0x8c0c7120u;
  { c->pr=0x8c0634b8u;  f_8c0124a6(c); }
  R(2)=0x8c0c710cu;
  ST8(R(2),R(0));
L8c0634bc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0634c2(SH4Ctx *c) {
  {  return; }
}
void f_8c0635c0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c09c4d4u;
  R(0)=0x8c0c737cu;
  { c->pr=0x8c0635cau; R(1)=R(4); f_8c09c4d4(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0635d0(SH4Ctx *c) {
  R(0)=0x8c0c737cu;
  {  return; }
}
void f_8c0635d6(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c0635deu; ST32(R(15),R(4)); f_8c063780(c); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0635e6;
  { R(4)=0x1u; goto L8c0635e8; }
L8c0635e6:;
  R(4)=0x0u;
L8c0635e8:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c06364c;
  R(5)=0x8c0c7378u;
  R(3)=0x3u;
  R(4)=LD32(R(5));
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c063640;
  R(0)=0xc34u;
  R(2)=0x8c2d4da4u;
  c->macl=R(4)*R(0);
  R(0)=c->macl;
  R(0)+=R(2);
  R(2)=0x8c09c4d4u;
  { c->pr=0x8c063606u; R(1)=LD32(R(15)); f_8c09c4d4(c); }
  R(2)=LD32(R(5));
  R(2)+=0x1u;
  { ST32(R(5),R(2)); goto L8c06364c; }
L8c063640:;
  R(5)=0x8c0bb624u;
  R(4)=0x8u;
  R(15)+=0x4u;
  R(2)=0x8c0633e0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0633e0(c); return; } }
L8c06364c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c063654(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x8c0c7378u;
  R(12)=0xc34u;
  R(10)=0x8c0337f4u;
  R(11)=0x8c2d4da4u;
  ST32(R(15),R(4));
  R(3)=LD32(R(13));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c06368a; }
L8c063674:;
  c->macl=R(14)*R(12);
  R(5)=LD32(R(15));
  R(4)=c->macl;
  { uint32_t tg=R(10); c->pr=0x8c06367eu; R(4)+=R(11); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06368a;
  R(3)=LD32(R(13));
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c063674;
L8c06368a:;
  R(4)=LD32(R(13));
  c->t=R(14)==R(4);
  if(c->t) goto L8c0636bc;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0636bc;
  R(3)=LD32(R(13));
  R(6)=R(12);
  R(3)+=0xffffffffu;
  R(5)=R(3);
  ST32(R(13),R(3));
  c->macl=R(5)*R(12);
  R(5)=c->macl;
  c->macl=R(14)*R(12);
  R(5)+=R(11);
  R(4)=c->macl;
  R(4)+=R(11);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0685b4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0685b4(c); return; } }
L8c0636bc:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c063700(SH4Ctx *c) {
  R(2)=0x8c0c7378u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c063708(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(1)=0x8c0c7378u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  R(3)=LD32(R(1));
  R(2)=LD32(R(15));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c063738;
  R(0)=LD32(R(15));
  R(2)=0xc34u;
  R(3)=0x8c2d4da4u;
  c->macl=R(0)*R(2);
  R(1)=0x8c068788u;
  R(6)=LD32(R(15)+8);
  R(5)=c->macl;
  R(5)+=R(3);
  { c->pr=0x8c063730u; R(4)=LD32(R(15)+4); f_8c068788(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c063738:;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c063738(SH4Ctx *c) {
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c063780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=0x8c0c7378u;
  R(13)=0xc34u;
  R(10)=0x8c2d4da4u;
  R(11)=0x8c0337f4u;
  ST32(R(15),R(4));
  R(3)=LD32(R(12));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0637ba; }
L8c0637a0:;
  c->macl=R(14)*R(13);
  R(5)=LD32(R(15));
  R(4)=c->macl;
  { uint32_t tg=R(11); c->pr=0x8c0637aau; R(4)+=R(10); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0637b2;
  { R(0)=R(14); goto L8c0637bc; }
L8c0637b2:;
  R(2)=LD32(R(12));
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(!c->t) goto L8c0637a0;
L8c0637ba:;
  R(0)=0xffffffffu;
L8c0637bc:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0637cc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0637d2u;  f_8c063780(c); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0637dc;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x1u; return; }
L8c0637dc:;
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c063820(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xfffffdfcu;
  R(15)+=R(0);
  R(10)=R(5);
  ST32(R(15),R(4));
  { R(13)=0x0u; goto L8c06387e; }
L8c06383c:;
  R(3)=0xc34u;
  R(4)=0x8c2d4da4u;
  c->macl=R(13)*R(3);
  R(0)=0x104u;
  R(2)=0x8c09c4d4u;
  R(3)=c->macl;
  R(3)+=R(4);
  R(1)=R(3);
  { c->pr=0x8c063850u; R(0)+=R(15); f_8c09c4d4(c); }
  R(4)=0x104u;
  R(5)=LD32(R(15));
  R(14)=0x8c09d1a0u;
  { c->pr=0x8c06385au; R(4)+=R(15); f_8c09d1a0(c); }
  R(4)=0x104u;
  R(8)=0x8c0bb644u;
  R(9)=0x8c012840u;
  R(4)+=R(15);
  { c->pr=0x8c063866u; R(5)=R(8); f_8c012840(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c06387c;
  R(13)=0x8c012accu;
  { c->pr=0x8c063872u; R(4)=R(14); f_8c012acc(c); }
  R(14)=0x104u;
  R(6)=R(12);
  R(14)+=R(15);
  { R(5)=R(14); goto L8c06388e; }
L8c06387c:;
  R(13)+=0x1u;
L8c06387e:;
  R(4)=0x8c0c7378u;
  R(12)=0x100u;
  R(3)=LD32(R(4));
  R(11)=0x8c068788u;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c06383c;
  R(5)=LD32(R(15));
  R(6)=R(12);
L8c06388e:;
  { uint32_t tg=R(11); c->pr=0x8c063892u; R(4)=R(10); sh4_call(c,tg); }
  R(1)=0x204u;
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
void f_8c063900(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=R(5);
  R(3)=0x8c012840u;
  R(5)=0x8c0bb644u;
  ST32(R(15),R(4));
  { c->pr=0x8c063914u; R(4)=R(6); f_8c012840(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c063958;
  R(3)=0x8c012a38u;
  R(7)=R(14);
  R(4)=LD32(R(15));
  R(6)=R(13);
  { c->pr=0x8c063926u; R(5)=0x1u; f_8c012a38(c); }
  R(2)=0x8c012accu;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c06392eu; R(4)=R(14); f_8c012acc(c); }
  R(2)=LD32(R(15)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c063952;
  R(5)=R(13);
  c->t=R(5)&1;R(5)>>=1;
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(4)=LD32(R(15)); if(k) goto L8c063952; }
L8c06393e:;
  R(6)=R(4);
  R(6)+=0x1u;
  R(3)=(int32_t)(int8_t)LD8(R(6));
  R(5)+=0xffffffffu;
  R(7)=(int32_t)(int8_t)LD8(R(4));
  c->t=(int32_t)R(5)>0;
  ST8(R(4),R(3));
  ST8(R(6),R(7));
  { uint32_t k=c->t; R(4)+=0x2u; if(k) goto L8c06393e; }
L8c063952:;
  R(3)=LD32(R(15)+4);
  c->t=R(3)==R(13);
  if(c->t) goto L8c06395c;
L8c063958:;
  { R(0)=0x0u; goto L8c06395e; }
L8c06395c:;
  R(0)=0x1u;
L8c06395e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c063968(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  { c->pr=0x8c063970u; {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);} f_8c063900(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c063978(SH4Ctx *c) {
  R(0)=0x838u;
  { R(0)=LD32(R(4)+R(0)); return; }
}
void f_8c0639a0(SH4Ctx *c) {
  R(3)=0x8c012840u;
  R(5)=0x8c0bb644u;
  {  { f_8c012840(c); return; } }
}
void f_8c0639a8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c012a38u;
  ST32(R(15)+8,R(4));
  ST32(R(15)+4,R(5));
  R(5)=0x1u;
  ST32(R(15),R(6));
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15)+8);
  { c->pr=0x8c0639beu; R(4)=LD32(R(15)); f_8c012a38(c); }
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0639c6(SH4Ctx *c) {
  R(3)=0x8c012accu;
  {  { f_8c012acc(c); return; } }
}
void f_8c0639d0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c012a62u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  { c->pr=0x8c0639deu; R(5)=LD32(R(15)); f_8c012a62(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c063a20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(4)=0x8c2db2e0u;
  R(5)=0x8c2db2e4u;
  R(14)=0x8c0d0632u;
  { c->pr=0x8c063a32u;  f_8c0d0632(c); }
  R(3)=0x8c2db2d8u;
  R(7)=0x4u;
  R(2)=0x8c05a7feu;
  R(6)=0x0u;
  R(8)=R(3);
  ST32(R(15),R(3));
  R(3)=0x8c0bb648u;
  R(5)=LD32(R(3));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c063a48u; R(4)=R(5); f_8c05a7fe(c); }
  ST32(R(8),R(0));
  R(3)=LD32(R(15));
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c063a5a;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bb650u;
  { c->pr=0x8c063a5au; R(4)=0x8u; f_8c0633e0(c); }
L8c063a5a:;
  R(4)=0x8c2db2e0u;
  R(5)=0x8c2db2e4u;
  { uint32_t tg=R(14); c->pr=0x8c063a62u;  sh4_call(c,tg); }
  R(3)=0x8c0bb64cu;
  R(7)=0x4u;
  R(2)=0x8c2db2dcu;
  R(6)=0x0u;
  ST32(R(15)+4,R(2));
  R(8)=R(2);
  R(5)=LD32(R(3));
  R(2)=0x8c05a7feu;
  ST32(R(15),R(5));
  { c->pr=0x8c063a78u; R(4)=R(5); f_8c05a7fe(c); }
  ST32(R(8),R(0));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c063a8a;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bb650u;
  { c->pr=0x8c063a8au; R(4)=0x8u; f_8c0633e0(c); }
L8c063a8a:;
  R(4)=0x8c2db2e0u;
  R(5)=0x8c2db2e4u;
  { uint32_t tg=R(14); c->pr=0x8c063a92u;  sh4_call(c,tg); }
  R(6)=0x1a90u;
  R(4)=0x8c2d7248u;
  R(6)+=R(4);
  R(5)=R(4);
  c->t=R(5)>=R(6);
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c063aae; }
L8c063aa0:;
  R(0)=0x40u;
  ST32(R(5)+R(0),R(4));
  R(5)+=0x44u;
  ST32(R(5)+R(0),R(4));
  R(5)+=0x44u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063aa0;
L8c063aae:;
  R(6)=0xc80u;
  R(7)=0x8c2d8cd8u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063ac6;
L8c063aba:;
  ST32(R(5)+28,R(4));
  R(5)+=0x20u;
  ST32(R(5)+28,R(4));
  R(5)+=0x20u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063aba;
L8c063ac6:;
  R(6)=0xe10u;
  R(7)=0x8c2d9958u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063ade;
L8c063ad2:;
  ST32(R(5)+32,R(4));
  R(5)+=0x24u;
  ST32(R(5)+32,R(4));
  R(5)+=0x24u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063ad2;
L8c063ade:;
  R(6)=0x640u;
  R(7)=0x8c2da768u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063af6;
L8c063aea:;
  ST32(R(5)+12,R(4));
  R(5)+=0x10u;
  ST32(R(5)+12,R(4));
  R(5)+=0x10u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063aea;
L8c063af6:;
  R(6)=0x230u;
  R(7)=0x8c2dada8u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063b0e;
L8c063b02:;
  ST32(R(5)+52,R(4));
  R(5)+=0x38u;
  ST32(R(5)+52,R(4));
  R(5)+=0x38u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063b02;
L8c063b0e:;
  R(7)=0x8c2dafd8u;
  R(6)=0x2d0u;
  R(5)=R(7);
  {  goto L8c063b80; }
L8c063b80:;
  R(6)+=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063b94;
L8c063b86:;
  R(0)=0x44u;
  ST32(R(5)+R(0),R(4));
  R(5)+=0x48u;
  ST32(R(5)+R(0),R(4));
  R(5)+=0x48u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063b86;
L8c063b94:;
  R(3)=0x8c2db2a8u;
  R(2)=0x8c2db2acu;
  R(1)=0x8c2db2b4u;
  ST32(R(2),R(4));
  ST32(R(3),R(4));
  R(3)=0x8c2db2b0u;
  ST32(R(1),R(4));
  ST32(R(3),R(4));
  R(3)=0x8c2db2b8u;
  R(2)=0x8c2db2bcu;
  R(1)=0x8c2db2c4u;
  ST32(R(2),R(4));
  ST32(R(3),R(4));
  R(3)=0x8c2db2c0u;
  ST32(R(1),R(4));
  ST32(R(3),R(4));
  R(3)=0x8c2db2c8u;
  R(1)=0x8c2db2d4u;
  R(2)=0x8c2db2ccu;
  ST32(R(2),R(4));
  ST32(R(3),R(4));
  R(3)=0x8c2db2d0u;
  ST32(R(1),R(4));
  ST32(R(3),R(4));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c063c20(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c05a904u;
  R(4)=0x8c2db2d8u;
  { c->pr=0x8c063c2au; R(4)=LD32(R(4)); f_8c05a904(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c063c36;
  R(3)=0x8c0633e0u;
  R(5)=0x8c0bb664u;
  { c->pr=0x8c063c36u; R(4)=0x8u; f_8c0633e0(c); }
L8c063c36:;
  R(2)=0x8c05a904u;
  R(4)=0x8c2db2dcu;
  { c->pr=0x8c063c3eu; R(4)=LD32(R(4)); f_8c05a904(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c063c4a;
  R(2)=0x8c0633e0u;
  R(5)=0x8c0bb664u;
  { c->pr=0x8c063c4au; R(4)=0x8u; f_8c0633e0(c); }
L8c063c4a:;
  R(6)=0x1a90u;
  R(4)=0x8c2d7248u;
  R(6)+=R(4);
  R(5)=R(4);
  c->t=R(5)>=R(6);
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c063c66; }
L8c063c58:;
  R(0)=0x40u;
  ST32(R(5)+R(0),R(4));
  R(5)+=0x44u;
  ST32(R(5)+R(0),R(4));
  R(5)+=0x44u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063c58;
L8c063c66:;
  R(6)=0xc80u;
  R(7)=0x8c2d8cd8u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063c7e;
L8c063c72:;
  ST32(R(5)+28,R(4));
  R(5)+=0x20u;
  ST32(R(5)+28,R(4));
  R(5)+=0x20u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063c72;
L8c063c7e:;
  R(6)=0xe10u;
  R(7)=0x8c2d9958u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063c96;
L8c063c8a:;
  ST32(R(5)+32,R(4));
  R(5)+=0x24u;
  ST32(R(5)+32,R(4));
  R(5)+=0x24u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063c8a;
L8c063c96:;
  R(6)=0x640u;
  R(7)=0x8c2da768u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063cae;
L8c063ca2:;
  ST32(R(5)+12,R(4));
  R(5)+=0x10u;
  ST32(R(5)+12,R(4));
  R(5)+=0x10u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063ca2;
L8c063cae:;
  R(6)=0x230u;
  R(7)=0x8c2dada8u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063cc6;
L8c063cba:;
  ST32(R(5)+52,R(4));
  R(5)+=0x38u;
  ST32(R(5)+52,R(4));
  R(5)+=0x38u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063cba;
L8c063cc6:;
  R(6)=0x2d0u;
  R(7)=0x8c2dafd8u;
  R(6)+=R(7);
  R(5)=R(7);
  c->t=R(5)>=R(6);
  if(c->t) goto L8c063ce0;
L8c063cd2:;
  R(0)=0x44u;
  ST32(R(5)+R(0),R(4));
  R(5)+=0x48u;
  ST32(R(5)+R(0),R(4));
  R(5)+=0x48u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c063cd2;
L8c063ce0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c063d40(SH4Ctx *c) {
  R(3)=0x8c0c74c0u;
  { ST32(R(3),R(4)); return; }
}
void f_8c063d46(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=R(4)&0xFF;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(0)==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c2db2b8u;
  R(8)=0x8c2db2d8u;
  R(10)=0x8c0bb690u;
  R(9)=0x8c0633e0u;
  { uint32_t k=c->t; R(14)=0x1u; if(k) goto L8c063da6; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c063de0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c063e2c;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c063d7a;
  {  goto L8c063e80; }
L8c063d7a:;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c063d82;
  {  goto L8c063ed0; }
L8c063d82:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c063d8a;
  {  goto L8c063f4c; }
L8c063d8a:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c063d92;
  {  goto L8c063fce; }
L8c063d92:;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c063d9a;
  {  goto L8c064040; }
L8c063d9a:;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c063da2;
  {  goto L8c0640c0; }
L8c063da2:;
  {  goto L8c064106; }
L8c063da6:;
  R(5)=R(11);
  { R(4)=LD32(R(8)); goto L8c063e30; }
L8c063de0:;
  R(3)=0x8c064ed8u;
  { c->pr=0x8c063de6u;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c063e0e;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c063e00;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb684u;
  R(6)=0xbfu;
  { c->pr=0x8c063dfcu; R(4)=R(11); f_8c064e90(c); }
  {  goto L8c063e0a; }
L8c063e00:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bb684u;
  R(6)=0xbfu;
  { c->pr=0x8c063e0au; R(4)=R(11); f_8c0199c4(c); }
L8c063e0a:;
  { R(13)=R(0); goto L8c064106; }
L8c063e0e:;
  R(3)=0x8c0d0632u;
  R(4)=0x8c2db2e0u;
  R(5)=0x8c2db2e4u;
  { c->pr=0x8c063e18u;  f_8c0d0632(c); }
  R(2)=0x8c0d06a2u;
  { c->pr=0x8c063e1eu; R(4)=R(11); f_8c0d06a2(c); }
  R(3)=0x8c0d0632u;
  R(4)=0x8c2db2e0u;
  R(5)=0x8c2db2e4u;
  { c->pr=0x8c063e28u; R(13)=R(0); f_8c0d0632(c); }
  {  goto L8c064106; }
L8c063e2c:;
  R(4)=LD32(R(8)+4);
  R(5)=R(11);
L8c063e30:;
  R(3)=0x8c05a9b2u;
  { c->pr=0x8c063e36u;  f_8c05a9b2(c); }
  { R(13)=R(0); goto L8c064106; }
L8c063e80:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==64;
  if(c->t) goto L8c063e8c;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c063e8cu; R(4)=0x8u; sh4_call(c,tg); }
L8c063e8c:;
  R(11)=0x1a90u;
  R(4)=0x8c2d7248u;
  R(12)=0x8c2db2acu;
  R(11)+=R(4);
  R(6)=R(4);
  R(5)=R(4);
  R(7)=R(4);
  R(4)=0x8c2db2a8u;
  {  goto L8c063ec8; }
L8c063ea0:;
  R(0)=0x40u;
  R(0)=LD32(R(5)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c063ec2;
  R(0)=0x40u;
  ST32(R(6)+R(0),R(14));
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  R(5)=R(3);
  ST32(R(4),R(3));
  R(2)=LD32(R(12));
  c->t=(int32_t)R(5)>(int32_t)R(2);
  if(c->t) goto L8c063ebe;
  {  goto L8c06407e; }
L8c063ebe:;
  { ST32(R(12),R(5)); goto L8c06407e; }
L8c063ec2:;
  R(5)+=0x44u;
  R(6)+=0x44u;
  R(7)+=0x44u;
L8c063ec8:;
  c->t=R(5)>=R(11);
  if(!c->t) goto L8c063ea0;
  {  goto L8c064106; }
L8c063ed0:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==28;
  if(c->t) goto L8c063edc;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c063edcu; R(4)=0x8u; sh4_call(c,tg); }
L8c063edc:;
  R(11)=0xc80u;
  R(4)=0x8c2d8cd8u;
  R(12)=0x8c2db2b4u;
  R(11)+=R(4);
  R(7)=R(4);
  R(5)=R(4);
  R(6)=R(4);
  R(4)=0x8c2db2b0u;
  {  goto L8c063f44; }
L8c063f20:;
  R(0)=LD32(R(5)+28);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c063f3e;
  ST32(R(7)+28,R(14));
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  R(5)=R(3);
  ST32(R(4),R(3));
  R(2)=LD32(R(12));
  c->t=(int32_t)R(5)>(int32_t)R(2);
  if(c->t) goto L8c063f3a;
  {  goto L8c0640f8; }
L8c063f3a:;
  { ST32(R(12),R(5)); goto L8c0640f8; }
L8c063f3e:;
  R(5)+=0x20u;
  R(7)+=0x20u;
  R(6)+=0x20u;
L8c063f44:;
  c->t=R(5)>=R(11);
  if(!c->t) goto L8c063f20;
  {  goto L8c064106; }
L8c063f4c:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c063f58;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c063f58u; R(4)=0x8u; sh4_call(c,tg); }
L8c063f58:;
  R(11)=0xe10u;
  R(7)=0x8c2d9958u;
  R(11)+=R(7);
  R(6)=R(7);
  R(4)=R(7);
  R(5)=R(7);
  R(7)=0x8c2db2bcu;
  {  goto L8c063fc6; }
L8c063f6a:;
  R(0)=LD32(R(4)+32);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c063fc0;
  ST32(R(6)+32,R(14));
  R(3)=LD32(R(12));
  R(3)+=0x1u;
  R(4)=R(3);
  ST32(R(12),R(3));
  R(2)=LD32(R(7));
  c->t=(int32_t)R(4)>(int32_t)R(2);
  { uint32_t k=!c->t; R(13)=R(5); if(k) goto L8c063f84; }
  ST32(R(7),R(4));
L8c063f84:;
  {  goto L8c064106; }
L8c063fc0:;
  R(4)+=0x24u;
  R(6)+=0x24u;
  R(5)+=0x24u;
L8c063fc6:;
  c->t=R(4)>=R(11);
  if(!c->t) goto L8c063f6a;
  {  goto L8c064106; }
L8c063fce:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==12;
  if(c->t) goto L8c063fda;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c063fdau; R(4)=0x8u; sh4_call(c,tg); }
L8c063fda:;
  R(11)=0x640u;
  R(4)=0x8c2da768u;
  R(12)=0x8c2db2c4u;
  R(11)+=R(4);
  R(6)=R(4);
  R(5)=R(4);
  R(7)=R(4);
  R(4)=0x8c2db2c0u;
  {  goto L8c06400e; }
L8c063fee:;
  R(0)=LD32(R(5)+12);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c064008;
  ST32(R(6)+12,R(14));
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  R(5)=R(3);
  ST32(R(4),R(3));
  R(2)=LD32(R(12));
  c->t=(int32_t)R(5)>(int32_t)R(2);
  if(!c->t) goto L8c06407e;
  { ST32(R(12),R(5)); goto L8c06407e; }
L8c064008:;
  R(5)+=0x10u;
  R(6)+=0x10u;
  R(7)+=0x10u;
L8c06400e:;
  c->t=R(5)>=R(11);
  if(!c->t) goto L8c063fee;
  {  goto L8c064106; }
L8c064040:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==68;
  if(c->t) goto L8c06404c;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c06404cu; R(4)=0x8u; sh4_call(c,tg); }
L8c06404c:;
  R(8)=0x2d0u;
  R(5)=0x8c2dafd8u;
  R(11)=0x8c2db2ccu;
  R(8)+=R(5);
  R(6)=R(5);
  R(4)=R(5);
  R(7)=R(5);
  R(5)=0x8c2db2c8u;
  {  goto L8c064088; }
L8c064060:;
  R(0)=0x44u;
  R(0)=LD32(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c064082;
  R(0)=0x44u;
  ST32(R(6)+R(0),R(14));
  R(3)=LD32(R(5));
  R(3)+=0x1u;
  ST32(R(5),R(3));
  R(2)=LD32(R(11));
  R(1)=LD32(R(12));
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(!c->t) goto L8c06407e;
  R(3)=LD32(R(5));
  ST32(R(11),R(3));
L8c06407e:;
  { R(13)=R(7); goto L8c064106; }
L8c064082:;
  R(4)+=0x48u;
  R(6)+=0x48u;
  R(7)+=0x48u;
L8c064088:;
  c->t=R(4)>=R(8);
  if(!c->t) goto L8c064060;
  {  goto L8c064106; }
L8c0640c0:;
  R(0)=R(11);
  c->t=(int32_t)R(0)==52;
  if(c->t) goto L8c0640cc;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c0640ccu; R(4)=0x8u; sh4_call(c,tg); }
L8c0640cc:;
  R(11)=0x230u;
  R(4)=0x8c2dada8u;
  R(12)=0x8c2db2d4u;
  R(11)+=R(4);
  R(7)=R(4);
  R(5)=R(4);
  R(6)=R(4);
  R(4)=0x8c2db2d0u;
  {  goto L8c064102; }
L8c0640e0:;
  R(0)=LD32(R(5)+52);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0640fc;
  ST32(R(7)+52,R(14));
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  R(5)=R(3);
  ST32(R(4),R(3));
  R(2)=LD32(R(12));
  c->t=(int32_t)R(5)>(int32_t)R(2);
  if(!c->t) goto L8c0640f8;
  ST32(R(12),R(5));
L8c0640f8:;
  { R(13)=R(6); goto L8c064106; }
L8c0640fc:;
  R(5)+=0x38u;
  R(7)+=0x38u;
  R(6)+=0x38u;
L8c064102:;
  c->t=R(5)>=R(11);
  if(!c->t) goto L8c0640e0;
L8c064106:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c064110;
  R(5)=R(10);
  { uint32_t tg=R(9); c->pr=0x8c064110u; R(4)=0x8u; sh4_call(c,tg); }
L8c064110:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064160(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(11)=0x8c2db2d8u;
  R(0)=R(4)&0xFF;
  R(14)=0x8c0633e0u;
  c->t=(int32_t)R(0)==0;
  R(13)=0x8c0bb6a4u;
  ST32(R(15),R(5));
  { uint32_t k=c->t; R(12)=0x0u; if(k) goto L8c0641b4; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c064200;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c064236;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c06424c;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c064190;
  {  goto L8c0642c0; }
L8c064190:;
  c->t=(int32_t)R(0)==5;
  if(!c->t) goto L8c064198;
  {  goto L8c0642d4; }
L8c064198:;
  c->t=(int32_t)R(0)==6;
  if(!c->t) goto L8c0641a0;
  {  goto L8c0642e8; }
L8c0641a0:;
  c->t=(int32_t)R(0)==7;
  if(!c->t) goto L8c0641a8;
  {  goto L8c0642fc; }
L8c0641a8:;
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0641b0;
  {  goto L8c064314; }
L8c0641b0:;
  {  goto L8c06432c; }
L8c0641b4:;
  R(3)=0x8c05ae4au;
  R(5)=LD32(R(15));
  { c->pr=0x8c0641bcu; R(4)=LD32(R(11)); f_8c05ae4a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0641c4;
  {  goto L8c06432c; }
L8c0641c4:;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c0641cau; R(4)=0x8u; sh4_call(c,tg); }
  {  goto L8c06432c; }
L8c064200:;
  R(2)=0x8c064ed8u;
  { c->pr=0x8c064206u;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c064218;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb684u;
  R(6)=0x159u;
  { c->pr=0x8c064214u; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c06432c; }
L8c064218:;
  R(2)=0x8c0d0632u;
  R(4)=0x8c2db2e0u;
  R(5)=0x8c2db2e4u;
  { c->pr=0x8c064222u;  f_8c0d0632(c); }
  R(3)=0x8c0d0770u;
  { c->pr=0x8c064228u; R(4)=LD32(R(15)); f_8c0d0770(c); }
  R(2)=0x8c0d0632u;
  R(4)=0x8c2db2e0u;
  R(5)=0x8c2db2e4u;
  { c->pr=0x8c064232u;  f_8c0d0632(c); }
  {  goto L8c06432c; }
L8c064236:;
  R(3)=0x8c05ae4au;
  R(5)=LD32(R(15));
  { c->pr=0x8c06423eu; R(4)=LD32(R(11)+4); f_8c05ae4a(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c06432c;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c064248u; R(4)=0x8u; sh4_call(c,tg); }
  {  goto L8c06432c; }
L8c06424c:;
  R(11)=LD32(R(15));
  R(0)=0x40u;
  R(3)=LD32(R(11)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c06425c;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c06425cu; R(4)=0x8u; sh4_call(c,tg); }
L8c06425c:;
  R(4)=0x8c2db2a8u;
  R(0)=0x40u;
  { ST32(R(11)+R(0),R(12)); goto L8c064326; }
L8c0642c0:;
  R(11)=LD32(R(15));
  R(3)=LD32(R(11)+28);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0642ce;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c0642ceu; R(4)=0x8u; sh4_call(c,tg); }
L8c0642ce:;
  R(4)=0x8c2db2b0u;
  { ST32(R(11)+28,R(12)); goto L8c064326; }
L8c0642d4:;
  R(11)=LD32(R(15));
  R(3)=LD32(R(11)+32);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0642e2;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c0642e2u; R(4)=0x8u; sh4_call(c,tg); }
L8c0642e2:;
  R(4)=0x8c2db2b8u;
  { ST32(R(11)+32,R(12)); goto L8c064326; }
L8c0642e8:;
  R(11)=LD32(R(15));
  R(3)=LD32(R(11)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0642f6;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c0642f6u; R(4)=0x8u; sh4_call(c,tg); }
L8c0642f6:;
  R(4)=0x8c2db2c0u;
  { ST32(R(11)+12,R(12)); goto L8c064326; }
L8c0642fc:;
  R(11)=LD32(R(15));
  R(0)=0x44u;
  R(3)=LD32(R(11)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c06430c;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c06430cu; R(4)=0x8u; sh4_call(c,tg); }
L8c06430c:;
  R(4)=0x8c2db2c8u;
  R(0)=0x44u;
  { ST32(R(11)+R(0),R(12)); goto L8c064326; }
L8c064314:;
  R(11)=LD32(R(15));
  R(3)=LD32(R(11)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c064322;
  R(5)=R(13);
  { uint32_t tg=R(14); c->pr=0x8c064322u; R(4)=0x8u; sh4_call(c,tg); }
L8c064322:;
  R(4)=0x8c2db2d0u;
  ST32(R(11)+52,R(12));
L8c064326:;
  R(3)=LD32(R(4));
  R(3)+=0xffffffffu;
  ST32(R(4),R(3));
L8c06432c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06433a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=R(4)&0xFF;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(0)==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c2db2d8u;
  R(12)=0x8c0633e0u;
  R(13)=0x8c0bb6b8u;
  if(c->t) goto L8c06435c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c064366;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c06436a;
  {  goto L8c064372; }
L8c06435c:;
  R(3)=0x8c05aac6u;
  { c->pr=0x8c064362u; R(4)=LD32(R(11)); f_8c05aac6(c); }
  { R(14)=R(0); goto L8c064378; }
L8c064366:;
  {  goto L8c064372; }
L8c06436a:;
  R(2)=0x8c05aac6u;
  { c->pr=0x8c064370u; R(4)=LD32(R(11)+4); f_8c05aac6(c); }
  R(14)=R(0);
L8c064372:;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c064378u; R(4)=0x8u; sh4_call(c,tg); }
L8c064378:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c064382;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c064382u; R(4)=0x8u; sh4_call(c,tg); }
L8c064382:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0643e0(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0643fa;
  R(3)=0x8c064e90u;
  R(6)=0x19u;
  R(5)=0x8c0bb6d0u;
  { c->pr=0x8c0643f6u; R(4)=0x68u; f_8c064e90(c); }
  {  goto L8c064404; }
L8c0643fa:;
  R(1)=0x8c0199c4u;
  R(6)=0x19u;
  R(5)=0x8c0bb6d0u;
  { c->pr=0x8c064404u; R(4)=0x68u; f_8c0199c4(c); }
L8c064404:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c06443a;
  R(3)=0x8c0125ccu;
  R(6)=0x19u;
  R(5)=0x8c0bb6d0u;
  { c->pr=0x8c064414u; R(4)=0x0u; f_8c0125cc(c); }
  R(3)=0x8c0bb6d0u;
  R(2)=0x19u;
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
  { c->pr=0x8c064438u; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c06443a:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x68u;
  { c->pr=0x8c064444u; R(4)=R(14); f_8c0686b8(c); }
  R(2)=0x8c014ea0u;
  { c->pr=0x8c06444au; R(4)=R(14); f_8c014ea0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064452(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=R(4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c064468; }
  R(3)=0x8c064eb8u;
  R(6)=0x21u;
  R(5)=0x8c0bb6d0u;
  { c->pr=0x8c064468u; R(4)=R(15); f_8c064eb8(c); }
L8c064468:;
  R(2)=0x0u;
  ST32(R(15),R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0644c0(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(8)=0x8c2db2f0u;
  { c->pr=0x8c0644cau;  f_8c0643e0(c); }
  R(2)=0x8c0c7504u;
  R(3)=0x1u;
  ST32(R(8),R(0));
  ST32(R(2),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c0644d8(SH4Ctx *c) {
  R(4)=0x8c2db2f0u;
  { R(4)=LD32(R(4)); { f_8c064452(c); return; } }
}
void f_8c0644de(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=0x0u;
  R(14)=0x8c0c7504u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2db2f0u;
  R(2)=0x8c014ea0u;
  ST32(R(14),R(3));
  { c->pr=0x8c0644f0u; R(4)=LD32(R(4)); f_8c014ea0(c); }
  R(3)=LD32(R(14));
  R(0)=0x8c2db2f0u;
  R(3)+=0x1u;
  R(1)=0x8c141124u;
  R(2)=R(3);
  R(2)+=0xffffffffu;
  R(2)<<=2;
  ST32(R(14),R(3));
  R(3)=LD32(R(2)+R(0));
  ST32(R(1),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06450a(SH4Ctx *c) {
  R(4)=0x8c0c7504u;
  R(5)=0x8c2db2f0u;
  R(0)=LD32(R(4));
  R(3)=LD32(R(5));
  R(0)<<=2;
  ST32(R(5)+R(0),R(3));
  R(2)=LD32(R(4));
  R(2)+=0x1u;
  R(0)=R(2);
  R(0)+=0xffffffffu;
  R(0)<<=2;
  ST32(R(4),R(2));
  R(2)=0x8c141124u;
  R(3)=LD32(R(5)+R(0));
  ST32(R(2),R(3));
  { R(0)=0x1u; return; }
}
void f_8c06452c(SH4Ctx *c) {
  R(4)=0x8c0c7504u;
  R(0)=0x8c2db2f0u;
  R(3)=LD32(R(4));
  R(1)=0x8c141124u;
  R(3)+=0xffffffffu;
  R(2)=R(3);
  R(2)+=0xffffffffu;
  ST32(R(4),R(3));
  R(2)<<=2;
  R(3)=LD32(R(2)+R(0));
  ST32(R(1),R(3));
  { R(0)=0x1u; return; }
}
void f_8c064546(SH4Ctx *c) {
  R(5)=0x8c0c7504u;
  R(6)=0x8c2db2f0u;
  R(0)=LD32(R(5));
  R(2)=0x8c141124u;
  R(0)<<=2;
  ST32(R(6)+R(0),R(4));
  R(3)=LD32(R(5));
  R(3)+=0x1u;
  R(0)=R(3);
  R(0)+=0xffffffffu;
  R(0)<<=2;
  ST32(R(5),R(3));
  R(3)=LD32(R(6)+R(0));
  ST32(R(2),R(3));
  { R(0)=0x1u; return; }
}
void f_8c064566(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x8c2dc870u;
  R(3)=0x0u;
  ST32(R(15),R(4));
  R(6)=0x68u;
  ST32(R(14),R(3));
  R(4)=0x8c2db3b8u;
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(15));
  { c->pr=0x8c064580u; R(5)+=0x10u; f_8c0685b4(c); }
  R(2)=LD32(R(14));
  R(1)=0x8c2db3b8u;
  R(2)+=0x1u;
  R(0)=0x8c2e70a4u;
  R(3)=R(2);
  ST32(R(14),R(2));
  R(2)=0x68u;
  R(3)+=0xffffffffu;
  c->macl=R(3)*R(2);
  R(3)=c->macl;
  R(3)+=R(1);
  ST32(R(0),R(3));
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0645a2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(6)=R(4);
  R(14)=0x8c2dc870u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x68u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14));
  R(4)=LD32(R(14));
  R(5)+=0xffffffffu;
  R(12)=0x8c2db3b8u;
  c->macl=R(5)*R(13);
  R(3)=0x8c0156cau;
  R(5)=c->macl;
  c->macl=R(4)*R(13);
  R(5)+=R(12);
  R(4)=c->macl;
  { c->pr=0x8c0645c8u; R(4)+=R(12); f_8c0156ca(c); }
  R(2)=LD32(R(14));
  R(2)+=0x1u;
  R(3)=R(2);
  R(3)+=0xffffffffu;
  c->macl=R(3)*R(13);
  ST32(R(14),R(2));
  R(2)=0x8c2e70a4u;
  R(3)=c->macl;
  R(3)+=R(12);
  ST32(R(2),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064640(SH4Ctx *c) {
  R(4)=0x8c2dc870u;
  R(1)=0x8c2db3b8u;
  R(3)=LD32(R(4));
  R(0)=0x8c2e70a4u;
  R(3)+=0xffffffffu;
  R(2)=R(3);
  ST32(R(4),R(3));
  R(3)=0x68u;
  R(2)+=0xffffffffu;
  c->macl=R(2)*R(3);
  R(2)=c->macl;
  R(2)+=R(1);
  { ST32(R(0),R(2)); return; }
}
void f_8c064680(SH4Ctx *c) {
  R(6)=0x8c0c94d4u;
  R(7)=0x0u;
  R(4)=0x8c2e70a8u;
  R(5)=R(7);
  R(3)=(int32_t)(int16_t)LD16(R(6));
  c->t=(int32_t)R(3)>0;
  { uint32_t k=!c->t; R(0)=0xffffffdeu; if(k) goto L8c0646a2; }
L8c064690:;
  {uint32_t v=LD32(R(4));R(4)+=4;R(3)=v;}
  R(5)+=0x1u;
  R(2)=LD32(R(3)+48);
  R(2)&=R(0);
  ST32(R(3)+48,R(2));
  R(3)=(uint32_t)(int32_t)(int16_t)R(5);
  R(2)=(int32_t)(int16_t)LD16(R(6));
  c->t=(int32_t)R(3)>=(int32_t)R(2);
  if(!c->t) goto L8c064690;
L8c0646a2:;
  R(2)=0x8c0c7548u;
  R(3)=0x8c0c94d6u;
  ST16(R(6),R(7));
  ST8(R(2),R(7));
  { ST16(R(3),R(7)); return; }
}
void f_8c0646ae(SH4Ctx *c) {
  R(1)=0x8c0c94d4u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(4);
  R(3)=(int32_t)(int16_t)LD16(R(1));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(c->t) goto L8c0646c2;
  R(2)=0x8c2e70a8u;
  R(0)=(uint32_t)(int32_t)(int16_t)R(4);
  R(0)<<=2;
  { R(0)=LD32(R(2)+R(0)); return; }
L8c0646c2:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0646c8(SH4Ctx *c) {
  R(0)=LD32(R(4)+48);
  R(7)=0x20u;
  R(0)&=R(7);
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c0646f0;
  R(6)=0x8c0c94d4u;
  R(0)=LD32(R(4)+48);
  R(0)|=0x21u;
  ST32(R(4)+48,R(0));
  R(5)=(int32_t)(int16_t)LD16(R(6));
  R(2)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(2)>=(int32_t)R(7);
  if(c->t) goto L8c0646f0;
  R(0)=0x8c2e70a8u;
  R(5)=(uint32_t)(int32_t)(int16_t)R(5);
  R(5)<<=2;
  ST32(R(5)+R(0),R(4));
  R(2)=(int32_t)(int16_t)LD16(R(6));
  R(2)+=0x1u;
  ST16(R(6),R(2));
L8c0646f0:;
  {  return; }
}
void f_8c0646f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=LD32(R(4)+48);
  R(11)=0x20u;
  R(0)&=R(11);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c064752;
  R(5)=0x8c0c94d4u;
  R(3)=0xffffffdeu;
  R(2)=LD32(R(4)+48);
  R(2)&=R(3);
  ST32(R(4)+48,R(2));
  R(1)=(int32_t)(int16_t)LD16(R(5));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c064752;
  R(6)=0x8c2e70a8u;
  R(14)=0x0u;
  R(12)=0x0u;
  R(14)+=R(6);
  R(1)=R(12);
  R(7)=R(14);
  ST32(R(15),R(14));
L8c064724:;
  R(3)=LD32(R(7));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c064746;
  R(1)=(int32_t)(int16_t)LD16(R(5));
  R(1)+=0xffffffffu;
  ST16(R(5),R(1));
  R(3)=(int32_t)(int16_t)LD16(R(5));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06473e;
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  R(3)=LD32(R(6)+R(0));
  ST32(R(14),R(3));
L8c06473e:;
  R(0)=(int32_t)(int16_t)LD16(R(5));
  R(0)<<=2;
  { ST32(R(6)+R(0),R(12)); goto L8c064752; }
L8c064746:;
  R(1)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(1);
  c->t=(int32_t)R(2)>=(int32_t)R(11);
  R(14)+=0x4u;
  { uint32_t k=!c->t; R(7)+=0x4u; if(k) goto L8c064724; }
L8c064752:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06475c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0c94d4u;
  R(14)=0x8c0c94d6u;
  R(12)=0x8c2e7128u;
  R(11)=0x8c2e70a8u;
  R(5)=0x8c0c7548u;
  { uint32_t k=c->t; R(7)=0x0u; if(k) goto L8c0647e0; }
  R(10)=(int32_t)(int16_t)LD16(R(13));
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c0647ac;
  R(10)=(uint32_t)(int32_t)(int16_t)R(10);
  R(4)=0x8c2dc880u;
  c->t=(int32_t)R(10)>0;
  R(6)=R(7);
  R(1)=0x0u;
  { uint32_t k=!c->t; R(1)+=R(11); if(k) goto L8c0647aa; }
L8c06478c:;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(6)+=0x1u;
  R(0)+=0x1u;
  ST16(R(14),R(0));
  R(0)+=0xffffffffu;
  {uint32_t v=LD32(R(1));R(1)+=4;R(3)=v;}
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(0)<<=2;
  ST32(R(12)+R(0),R(3));
  R(2)=(int32_t)(int8_t)LD8(R(5));
  ST8(R(4),R(2));
  R(3)=(int32_t)(int16_t)LD16(R(13));
  c->t=(int32_t)R(6)>=(int32_t)R(3);
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c06478c; }
L8c0647aa:;
  ST16(R(13),R(7));
L8c0647ac:;
  R(3)=(int32_t)(int8_t)LD8(R(5));
  R(3)+=0x1u;
  { ST8(R(5),R(3)); goto L8c06483a; }
L8c0647e0:;
  R(1)=(int32_t)(int8_t)LD8(R(5));
  R(1)+=0xffffffffu;
  ST8(R(5),R(1));
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06483a;
  R(10)=0x8c05693au;
  { ST16(R(13),R(7)); goto L8c064820; }
L8c0647f2:;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)+=0xffffffffu;
  R(0)<<=2;
  { uint32_t tg=R(10); c->pr=0x8c0647fcu; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06481a;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)+=0x1u;
  ST16(R(13),R(0));
  R(0)+=0xffffffffu;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(0)<<=2;
  R(3)+=0xffffffffu;
  R(3)<<=2;
  R(3)+=R(12);
  R(2)=LD32(R(3));
  ST32(R(11)+R(0),R(2));
L8c06481a:;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(3)+=0xffffffffu;
  ST16(R(14),R(3));
L8c064820:;
  R(4)=(int32_t)(int16_t)LD16(R(14));
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c06483a;
  R(0)=0x8c2dc880u;
  R(3)=R(4);
  R(1)=0x8c0c7548u;
  R(3)+=0xffffffffu;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(3)=(int32_t)(int8_t)LD8(R(1));
  R(2)=R(2)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=R(2)==R(3);
  if(c->t) goto L8c0647f2;
L8c06483a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0647e0(SH4Ctx *c) {
  R(1)=(int32_t)(int8_t)LD8(R(5));
  R(1)+=0xffffffffu;
  ST8(R(5),R(1));
  R(3)=(int32_t)(int16_t)LD16(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06483a;
  R(10)=0x8c05693au;
  { ST16(R(13),R(7)); goto L8c064820; }
L8c0647f2:;
  R(0)=(int32_t)(int16_t)LD16(R(14));
  R(0)+=0xffffffffu;
  R(0)<<=2;
  { uint32_t tg=R(10); c->pr=0x8c0647fcu; R(4)=LD32(R(12)+R(0)); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06481a;
  R(0)=(int32_t)(int16_t)LD16(R(13));
  R(0)+=0x1u;
  ST16(R(13),R(0));
  R(0)+=0xffffffffu;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(0)=(uint32_t)(int32_t)(int16_t)R(0);
  R(0)<<=2;
  R(3)+=0xffffffffu;
  R(3)<<=2;
  R(3)+=R(12);
  R(2)=LD32(R(3));
  ST32(R(11)+R(0),R(2));
L8c06481a:;
  R(3)=(int32_t)(int16_t)LD16(R(14));
  R(3)+=0xffffffffu;
  ST16(R(14),R(3));
L8c064820:;
  R(4)=(int32_t)(int16_t)LD16(R(14));
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c06483a;
  R(0)=0x8c2dc880u;
  R(3)=R(4);
  R(1)=0x8c0c7548u;
  R(3)+=0xffffffffu;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(3)=(int32_t)(int8_t)LD8(R(1));
  R(2)=R(2)&0xFF;
  R(3)=R(3)&0xFF;
  c->t=R(2)==R(3);
  if(c->t) goto L8c0647f2;
L8c06483a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064848(SH4Ctx *c) {
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064854;
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c064854:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064860;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c064860:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06488a;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c06487c;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c06487c:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c06488a;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c06488a:;
  R(5)=0x0u;
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  { ST32(R(4)+28,R(5)); return; }
}
void f_8c064894(SH4Ctx *c) {
  R(15)+=0xfffffffcu;
  R(3)=LD32(R(4)+20);
  R(2)=R(3);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(15),R(3)); if(k) goto L8c0648a6; }
  R(3)=LD32(R(4)+24);
  R(2)=LD32(R(4)+20);
  ST32(R(2)+24,R(3));
L8c0648a6:;
  R(2)=LD32(R(4)+24);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0648b2;
  R(3)=LD32(R(4)+20);
  R(2)=LD32(R(4)+24);
  ST32(R(2)+20,R(3));
L8c0648b2:;
  R(2)=LD32(R(4)+28);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0648dc;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+16);
  R(3)+=0xffffffffu;
  ST32(R(2)+16,R(3));
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+8);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0648ce;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c0648ce:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0648dc;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c0648dc:;
  R(5)=0x0u;
  ST32(R(4)+20,R(5));
  ST32(R(4)+24,R(5));
  ST32(R(4)+28,R(5));
  R(2)=LD32(R(15));
  ST32(R(4)+20,R(2));
  { R(15)+=0x4u; return; }
}
void f_8c064920(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)<<=2;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  c->t=R(13)>>31;R(13)<<=1;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(13)+=R(3);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(13)<<=2;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  c->t=R(13)>>31;R(13)<<=1;
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  c->t=(R(13)&R(13))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=c->t; R(10)=R(4); if(k) goto L8c064968; }
  R(2)=0x8c0c758cu;
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c06495c;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb6dcu;
  R(6)=0xb5u;
  { c->pr=0x8c064958u; R(4)=R(13); f_8c064e90(c); }
  {  goto L8c064966; }
L8c06495c:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bb6dcu;
  R(6)=0xb5u;
  { c->pr=0x8c064966u; R(4)=R(13); f_8c0199c4(c); }
L8c064966:;
  R(11)=R(0);
L8c064968:;
  c->t=(R(11)&R(11))==0;
  R(12)=0xffffffffu;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c06499c; }
  R(3)=0x8c0125ccu;
  R(5)=0x8c0bb6dcu;
  R(6)=0xb5u;
  { c->pr=0x8c06497au; R(4)=0x0u; f_8c0125cc(c); }
  R(2)=0xb5u;
  R(7)=0x1u;
  R(3)=0x8c0bb6dcu;
  R(6)=0x0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0c65e0u;
  R(1)=0xffu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=(int32_t)(int8_t)LD8(R(3));
  R(3)=0x8c012658u;
  { c->pr=0x8c06499au; R(4)=0x4u; f_8c012658(c); }
  R(15)+=0x18u;
L8c06499c:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=R(13);
  { c->pr=0x8c0649a6u; R(4)=R(11); f_8c0686b8(c); }
  R(8)=0x20000u;
  c->t=(int32_t)R(10)>0;
  R(0)=0x8c064a24u;
  R(13)=R(11);
  R(9)=0x0u;
  { uint32_t k=!c->t; fp_ld(c,15,R(0)); if(k) goto L8c064a50; }
L8c0649b4:;
  R(2)=0x1u;
  R(5)=R(13);
  R(3)=0x8c0643e0u;
  R(4)=R(14);
  ST32(R(13)+8,R(14));
  R(4)=R(12);
  ST32(R(13)+12,R(14));
  ST32(R(13)+16,R(14));
  ST32(R(13)+20,R(14));
  ST32(R(13)+24,R(14));
  ST32(R(13)+28,R(14));
  ST32(R(13),R(2));
  ST32(R(13)+4,R(14));
  ST32(R(5)+52,R(14));
  { uint32_t tg=R(3); c->pr=0x8c0649d4u; ST32(R(5)+44,R(12)); sh4_call(c,tg); }
  R(2)=0x8c014ea0u;
  ST32(R(13)+36,R(0));
  { c->pr=0x8c0649dcu; R(4)=R(0); f_8c014ea0(c); }
  { c->pr=0x8c0649e0u; R(4)=R(13); f_8c064ac4(c); }
  c->t=(R(14)&R(14))==0;
  R(0)=0x38u;
  { uint32_t k=c->t; fp_st(c,15,R(0)+R(13)); if(k) goto L8c064a40; }
  R(2)=LD32(R(13)+48);
  R(2)|=R(8);
  { ST32(R(13)+48,R(2)); goto L8c064a48; }
L8c064a40:;
  R(1)=LD32(R(13)+48);
  R(3)=0xfffdffffu;
  R(1)&=R(3);
  ST32(R(13)+48,R(1));
L8c064a48:;
  R(9)+=0x1u;
  c->t=(int32_t)R(9)>=(int32_t)R(10);
  { uint32_t k=!c->t; R(13)+=0x48u; if(k) goto L8c0649b4; }
L8c064a50:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(11);
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064a66(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c064a6e;
  { R(0)=LD32(R(4)+20); return; }
L8c064a6e:;
  R(0)=R(4);
  {  return; }
}
void f_8c064a74(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c064a7c;
  { R(0)=LD32(R(4)+24); return; }
L8c064a7c:;
  R(0)=R(4);
  {  return; }
}
void f_8c064a82(SH4Ctx *c) {
  c->t=(int32_t)R(5)>0;
  R(7)=0x0u;
  { uint32_t k=!c->t; R(6)=LD32(R(4)+8); if(k) goto L8c064a94; }
L8c064a8a:;
  R(7)+=0x1u;
  R(2)=(uint32_t)(int32_t)(int16_t)R(7);
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(6)=LD32(R(6)+20); if(k) goto L8c064a8a; }
L8c064a94:;
  { R(0)=R(6); return; }
}
void f_8c064a98(SH4Ctx *c) {
  R(4)=R(5);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(6)=0xffffffffu; if(k) goto L8c064aa8; }
L8c064aa0:;
  R(4)=LD32(R(4)+24);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c064aa0; }
L8c064aa8:;
  { R(0)=R(6); return; }
}
void f_8c064aac(SH4Ctx *c) {
  R(4)=0x8c2dc87cu;
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  R(0)=R(3);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; ST32(R(4),R(3)); if(k) goto L8c064ac0; }
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  ST32(R(4),R(3));
L8c064ac0:;
  {  return; }
}
void f_8c064ac4(SH4Ctx *c) {
  R(0)=LD32(R(4)+40);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c064ada;
  R(2)=0x8c2dc87cu;
  R(5)=LD32(R(2));
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c064ad6;
  { R(5)+=0xffffffffu; goto L8c064ad8; }
L8c064ad6:;
  R(5)+=0xfffffffeu;
L8c064ad8:;
  ST32(R(4)+40,R(5));
L8c064ada:;
  {  return; }
}
void f_8c064b00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0685b4u;
  R(6)=0x68u;
  ST32(R(15),R(4));
  { c->pr=0x8c064b0eu; R(4)=LD32(R(4)+36); f_8c0685b4(c); }
  R(2)=LD32(R(15));
  R(3)=0xffffffffu;
  ST32(R(2)+40,R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c064b1c(SH4Ctx *c) {
  R(0)=R(4);
  R(5)=0x8c2dc87cu;
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c064b26;
  R(4)+=0x1u;
L8c064b26:;
  { ST32(R(5),R(4)); return; }
}
void f_8c064b2a(SH4Ctx *c) {
  R(2)=0x8c2dc87cu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  R(4)=LD32(R(14)+40);
  c->t=R(4)==R(3);
  if(c->t) goto L8c064b44;
  R(0)=R(4);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c064b44;
  { R(2)=0x0u; goto L8c064b46; }
L8c064b44:;
  R(2)=0x1u;
L8c064b46:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c064b56;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c064546u;
  R(4)=LD32(R(14)+36);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c064546(c); return; } }
L8c064b56:;
  R(3)=0x8c0c7504u;
  R(0)=0x8c2db2f0u;
  R(5)=LD32(R(3));
  R(2)=0x8c0156cau;
  R(5)+=0xffffffffu;
  R(6)=LD32(R(14)+32);
  R(5)<<=2;
  R(5)=LD32(R(5)+R(0));
  { c->pr=0x8c064b6au; R(4)=LD32(R(14)+36); f_8c0156ca(c); }
  R(3)=0x8c064546u;
  { c->pr=0x8c064b70u; R(4)=LD32(R(14)+36); f_8c064546(c); }
  R(3)=0x8c2dc87cu;
  R(4)=R(14);
  R(2)=LD32(R(3));
  ST32(R(4)+40,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064b7e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff98u;
  R(14)=R(4);
  R(5)=LD32(R(14)+28);
  R(3)=0x8c0153d8u;
  R(5)=LD32(R(5)+36);
  { c->pr=0x8c064b90u; R(4)=R(15); f_8c0153d8(c); }
  R(2)=0x8c0156cau;
  R(5)=R(15);
  R(6)=LD32(R(14)+36);
  { c->pr=0x8c064b9au; R(4)=LD32(R(14)+32); f_8c0156ca(c); }
  R(15)+=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064ba2(SH4Ctx *c) {
  {  { f_8c064b7e(c); return; } }
}
void f_8c064be0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064bee;
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c064bee:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064bfa;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c064bfa:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064c24;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c064c16;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c064c16:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c064c24;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c064c24:;
  R(6)=R(6)&0xFF;
  R(7)=0x0u;
  c->t=(R(6)&R(6))==0;
  ST32(R(4)+20,R(7));
  ST32(R(4)+24,R(7));
  { uint32_t k=c->t; ST32(R(4)+28,R(7)); if(k) goto L8c064c96; }
  R(6)=R(4);
  R(3)=LD32(R(6)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064c40;
  R(2)=LD32(R(6)+24);
  R(3)=LD32(R(6)+20);
  ST32(R(3)+24,R(2));
L8c064c40:;
  R(3)=LD32(R(6)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064c4c;
  R(2)=LD32(R(6)+20);
  R(3)=LD32(R(6)+24);
  ST32(R(3)+20,R(2));
L8c064c4c:;
  R(3)=LD32(R(6)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064c76;
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(6);
  if(!c->t) goto L8c064c68;
  R(3)=LD32(R(6)+20);
  R(1)=LD32(R(6)+28);
  ST32(R(1)+8,R(3));
L8c064c68:;
  R(2)=LD32(R(6)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c064c76;
  R(3)=LD32(R(6)+24);
  R(1)=LD32(R(6)+28);
  ST32(R(1)+12,R(3));
L8c064c76:;
  ST32(R(6)+20,R(7));
  ST32(R(6)+24,R(7));
  ST32(R(6)+28,R(7));
  ST32(R(6)+24,R(7));
  R(2)=LD32(R(5)+8);
  ST32(R(6)+20,R(2));
  ST32(R(6)+28,R(5));
  R(3)=LD32(R(5)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c064c8e;
  { ST32(R(5)+12,R(6)); goto L8c064c92; }
L8c064c8e:;
  R(2)=LD32(R(5)+8);
  ST32(R(2)+24,R(6));
L8c064c92:;
  { ST32(R(5)+8,R(6)); goto L8c064cf8; }
L8c064c96:;
  R(6)=R(4);
  R(3)=LD32(R(6)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064ca4;
  R(2)=LD32(R(6)+24);
  R(3)=LD32(R(6)+20);
  ST32(R(3)+24,R(2));
L8c064ca4:;
  R(3)=LD32(R(6)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064cb0;
  R(2)=LD32(R(6)+20);
  R(3)=LD32(R(6)+24);
  ST32(R(3)+20,R(2));
L8c064cb0:;
  R(3)=LD32(R(6)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064cda;
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(6);
  if(!c->t) goto L8c064ccc;
  R(3)=LD32(R(6)+20);
  R(1)=LD32(R(6)+28);
  ST32(R(1)+8,R(3));
L8c064ccc:;
  R(2)=LD32(R(6)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(6);
  if(!c->t) goto L8c064cda;
  R(3)=LD32(R(6)+24);
  R(1)=LD32(R(6)+28);
  ST32(R(1)+12,R(3));
L8c064cda:;
  ST32(R(6)+20,R(7));
  ST32(R(6)+24,R(7));
  ST32(R(6)+28,R(7));
  ST32(R(6)+20,R(7));
  R(2)=LD32(R(5)+12);
  ST32(R(6)+24,R(2));
  ST32(R(6)+28,R(5));
  R(3)=LD32(R(5)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c064cf2;
  { ST32(R(5)+8,R(6)); goto L8c064cf6; }
L8c064cf2:;
  R(2)=LD32(R(5)+12);
  ST32(R(2)+20,R(6));
L8c064cf6:;
  ST32(R(5)+12,R(6));
L8c064cf8:;
  R(3)=LD32(R(5)+16);
  R(3)+=0x1u;
  { c->pr=0x8c064d00u; ST32(R(5)+16,R(3)); f_8c064b7e(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c064d06(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(4)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064d14;
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c064d14:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064d20;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c064d20:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064d4a;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c064d3c;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c064d3c:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c064d4a;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c064d4a:;
  R(6)=0x0u;
  ST32(R(4)+20,R(6));
  ST32(R(4)+24,R(6));
  ST32(R(4)+28,R(6));
  R(2)=LD32(R(4)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c064d5e;
  R(2)=LD32(R(4)+24);
  R(3)=LD32(R(4)+20);
  ST32(R(3)+24,R(2));
L8c064d5e:;
  R(3)=LD32(R(4)+24);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064d6a;
  R(2)=LD32(R(4)+20);
  R(3)=LD32(R(4)+24);
  ST32(R(3)+20,R(2));
L8c064d6a:;
  R(3)=LD32(R(4)+28);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c064d94;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0xffffffffu;
  ST32(R(3)+16,R(2));
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+8);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c064d86;
  R(3)=LD32(R(4)+20);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+8,R(3));
L8c064d86:;
  R(2)=LD32(R(4)+28);
  R(3)=LD32(R(2)+12);
  c->t=R(3)==R(4);
  if(!c->t) goto L8c064d94;
  R(3)=LD32(R(4)+24);
  R(1)=LD32(R(4)+28);
  ST32(R(1)+12,R(3));
L8c064d94:;
  c->t=(R(5)&R(5))==0;
  ST32(R(4)+20,R(6));
  ST32(R(4)+24,R(6));
  ST32(R(4)+28,R(6));
  R(2)=LD32(R(5)+20);
  ST32(R(4)+20,R(2));
  { uint32_t k=c->t; ST32(R(4)+24,R(5)); if(k) goto L8c064dac; }
  ST32(R(5)+20,R(4));
  R(2)=LD32(R(5)+28);
  { ST32(R(4)+28,R(2)); goto L8c064db2; }
L8c064dac:;
  R(1)=LD32(R(5)+20);
  R(3)=LD32(R(1)+28);
  ST32(R(3)+8,R(4));
L8c064db2:;
  R(2)=LD32(R(5)+20);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c064dc4;
  R(3)=LD32(R(5)+20);
  ST32(R(3)+24,R(4));
  R(2)=LD32(R(5)+20);
  R(3)=LD32(R(2)+28);
  { ST32(R(4)+28,R(3)); goto L8c064dc8; }
L8c064dc4:;
  R(1)=LD32(R(5)+28);
  ST32(R(1)+12,R(4));
L8c064dc8:;
  R(3)=LD32(R(4)+28);
  R(2)=LD32(R(3)+16);
  R(2)+=0x1u;
  ST32(R(3)+16,R(2));
  { c->pr=0x8c064dd4u;  f_8c064b7e(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c064dda(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c064de2u; {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);} f_8c064b2a(c); }
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c064df4;
L8c064dea:;
  { c->pr=0x8c064deeu; R(4)=R(14); f_8c064dda(c); }
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c064dea;
L8c064df4:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c06452cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c06452c(c); return; } }
}
void f_8c064dfe(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c064e08u; ST32(R(15),R(4)); f_8c064ac4(c); }
  R(14)=LD32(R(15));
  R(14)=LD32(R(14)+8);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c064e1a;
L8c064e10:;
  { c->pr=0x8c064e14u; R(4)=R(14); f_8c064dfe(c); }
  R(14)=LD32(R(14)+20);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c064e10;
L8c064e1a:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064e60(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c05a7feu;
  R(6)=0x0u;
  ST32(R(15),R(4));
  R(7)=0x4u;
  { c->pr=0x8c064e70u; R(5)=R(4); f_8c05a7fe(c); }
  R(2)=0x8c0c758cu;
  ST32(R(2),R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c064e7c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c05a904u;
  R(3)=0x8c0c758cu;
  { c->pr=0x8c064e86u; R(4)=LD32(R(3)); f_8c05a904(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0c758cu;
  R(1)=0x0u;
  { ST32(R(2),R(1)); return; }
}
void f_8c064e90(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c758cu;
  R(5)=R(4);
  R(2)=0x8c05a9b2u;
  ST32(R(15),R(4));
  { c->pr=0x8c064ea2u; R(4)=LD32(R(3)); f_8c05a9b2(c); }
  R(3)=0x8c0686b8u;
  R(14)=R(0);
  R(6)=LD32(R(15));
  R(5)=0x0u;
  { c->pr=0x8c064eaeu; R(4)=R(14); f_8c0686b8(c); }
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064eb8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  R(3)=0x8c0c758cu;
  R(2)=0x8c05ae4au;
  ST32(R(15),R(4));
  R(5)=LD32(R(5));
  { c->pr=0x8c064ecau; R(4)=LD32(R(3)); f_8c05ae4a(c); }
  R(1)=LD32(R(15));
  R(3)=0x0u;
  ST32(R(1),R(3));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c064ed8(SH4Ctx *c) {
  R(2)=0x8c0c758cu;
  R(0)=LD32(R(2));
  c->t=(R(0)&R(0))==0;
  R(0)=c->t;
  { R(0)^=0x1u; return; }
}
void f_8c064f20(SH4Ctx *c) {
  R(3)=0x8c0c75dcu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c064f34;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c064f34:;
  R(3)=0x8c0199c4u;
  R(4)=0xf100u;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c064f3eu; R(6)=0x51u; f_8c0199c4(c); }
  R(2)=0x8c2dd0a4u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; ST32(R(2),R(0)); if(k) goto L8c064f4e; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0xffffff00u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c064f4e:;
  R(2)=0x8c2dd0a4u;
  R(5)=0xffu;
  R(3)=0x8c0d98d0u;
  R(7)=0x8c065d6au;
  R(6)=LD32(R(2));
  { c->pr=0x8c064f5cu; R(4)=0xfu; f_8c0d98d0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c064f7a; }
  R(3)=0x8c0686b8u;
  R(4)=0x8c2dcdc4u;
  R(6)=0x2e0u;
  { c->pr=0x8c064f6cu; R(5)=0x0u; f_8c0686b8(c); }
  R(3)=0x8c0c75dcu;
  R(2)=0x1u;
  R(1)=0x8c0bb6e8u;
  ST32(R(3),R(2));
  R(0)=0x8c0c75d8u;
  R(2)=LD32(R(1));
  ST32(R(0),R(2));
L8c064f7a:;
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c064fe0(SH4Ctx *c) {
  R(4)=0x8c0c75dcu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c065004;
  R(2)=0x0u;
  R(3)=0x8c064eb8u;
  ST32(R(4),R(2));
  R(4)=0x8c2dd0a4u;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c064ffau; R(6)=0x74u; f_8c064eb8(c); }
  R(14)=0x8c0d99b6u;
L8c064ffc:;
  { uint32_t tg=R(14); c->pr=0x8c065000u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c064ffc;
L8c065004:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06500a(SH4Ctx *c) {
  R(1)=0x8c0bb6e8u;
  R(0)=R(4);
  R(0)<<=2;
  R(3)=0x8c0c75d8u;
  R(0)=LD32(R(1)+R(0));
  { ST32(R(3),R(0)); return; }
}
void f_8c065018(SH4Ctx *c) {
  R(2)=0x8c0c75d8u;
  { R(0)=LD32(R(2)); return; }
}
void f_8c06501e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c064ed8u;
  { c->pr=0x8c065030u; R(13)=R(5); f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0650b0;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0650a0;
  R(3)=0x8c064e90u;
  R(4)=R(12);
  R(5)=0x8c0bb708u;
  R(6)=0xa4u;
  { c->pr=0x8c065048u; R(4)+=0x4u; f_8c064e90(c); }
  {  goto L8c0650ac; }
L8c0650a0:;
  R(1)=0x8c0199c4u;
  R(4)=R(12);
  R(5)=0x8c0bb708u;
  R(6)=0xa4u;
  { c->pr=0x8c0650acu; R(4)+=0x4u; f_8c0199c4(c); }
L8c0650ac:;
  { R(14)=R(0); goto L8c0650ba; }
L8c0650b0:;
  R(3)=0x8c0d06a2u;
  R(4)=R(12);
  { c->pr=0x8c0650b8u; R(4)+=0x4u; f_8c0d06a2(c); }
  R(14)=R(0);
L8c0650ba:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0650c8;
  R(4)=0x0u;
  ST32(R(13)+4,R(4));
  ST32(R(13),R(4));
  { R(0)=0xffffffffu; goto L8c0650de; }
L8c0650c8:;
  R(11)=0xfffffffcu;
  R(3)=0x8c0686b8u;
  R(11)&=R(14);
  R(6)=R(12);
  R(5)=0x0u;
  R(11)+=0x4u;
  { c->pr=0x8c0650d8u; R(4)=R(11); f_8c0686b8(c); }
  R(0)=0x0u;
  ST32(R(13)+4,R(11));
  ST32(R(13),R(14));
L8c0650de:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0650a0(SH4Ctx *c) {
  R(1)=0x8c0199c4u;
  R(4)=R(12);
  R(5)=0x8c0bb708u;
  R(6)=0xa4u;
  { c->pr=0x8c0650acu; R(4)+=0x4u; f_8c0199c4(c); }
  { R(14)=R(0); goto L8c0650ba; }
L8c0650ba:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0650c8;
  R(4)=0x0u;
  ST32(R(13)+4,R(4));
  ST32(R(13),R(4));
  { R(0)=0xffffffffu; goto L8c0650de; }
L8c0650c8:;
  R(11)=0xfffffffcu;
  R(3)=0x8c0686b8u;
  R(11)&=R(14);
  R(6)=R(12);
  R(5)=0x0u;
  R(11)+=0x4u;
  { c->pr=0x8c0650d8u; R(4)=R(11); f_8c0686b8(c); }
  R(0)=0x0u;
  ST32(R(13)+4,R(11));
  ST32(R(13),R(14));
L8c0650de:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0650ea(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06514a;
  R(3)=0x8c064ed8u;
  { c->pr=0x8c0650fcu;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c065140;
  R(3)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0xc3u;
  { c->pr=0x8c06510au; R(4)=R(14); f_8c064eb8(c); }
  {  goto L8c065146; }
L8c065140:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c065146u; R(4)=LD32(R(14)); f_8c0d0770(c); }
L8c065146:;
  R(2)=0x0u;
  ST32(R(14),R(2));
L8c06514a:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065140(SH4Ctx *c) {
  R(3)=0x8c0d0770u;
  { c->pr=0x8c065146u; R(4)=LD32(R(14)); f_8c0d0770(c); }
  R(2)=0x0u;
  ST32(R(14),R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065150(SH4Ctx *c) {
  R(4)=R(4)&0xFF;
  R(5)=0x8c0c75d4u;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c06515e;
  R(2)=0x0u;
  { ST32(R(5),R(2)); goto L8c065162; }
L8c06515e:;
  R(1)=0x1u;
  ST32(R(5),R(1));
L8c065162:;
  {  return; }
}
void f_8c065166(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c75dcu;
  ST32(R(15),R(4));
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06518e;
  R(13)=0x8c0da168u;
  R(14)=0x0u;
L8c06517c:;
  { uint32_t tg=R(13); c->pr=0x8c065180u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  R(4)=R(0);
  { uint32_t k=!c->t; R(14)+=0x1u; if(k) goto L8c06518e; }
  R(2)=0x2dc6c0u;
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(!c->t) goto L8c06517c;
L8c06518e:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065198(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0651e0;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0651e0:;
  R(2)=0x8c067940u;
  R(1)=R(4);
  R(6)=0x200u;
  { c->pr=0x8c0651eau; R(0)=R(6); f_8c067940(c); }
  R(3)=0x8c067a9cu;
  R(1)=R(4);
  R(5)=R(0);
  { c->pr=0x8c0651f4u; R(0)=R(6); f_8c067a9c(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0651fe;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=R(5); return; }
L8c0651fe:;
  R(0)=R(5);
  R(0)+=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c065208(SH4Ctx *c) {
  R(0)=0x4cu;
  R(0)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(0)=R(0)&0xFFFF;
  R(0)+=0xffffffffu;
  R(0)<<=8;
  c->t=R(0)>>31;R(0)<<=1;
  R(6)=R(0);
  R(0)=0x54u;
  R(5)=(int32_t)(int16_t)LD16(R(4)+R(0));
  R(0)=R(5)&0xFFFF;
  R(5)=R(0);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c065228;
  R(3)=0x1f80u;
  {  goto L8c06526c; }
L8c065228:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c065260;
  R(3)=0x11c0u;
  {  goto L8c06526c; }
L8c065260:;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c06526a;
  R(3)=0x800u;
  {  goto L8c06526c; }
L8c06526a:;
  R(3)=0x0u;
L8c06526c:;
  R(0)=R(6);
  R(0)+=R(3);
  R(3)=0x280u;
  { R(0)+=R(3); return; }
}
void f_8c065276(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c0652a6;
  R(1)=R(6);
  c->t=(int32_t)R(1)>=(int32_t)R(5);
  R(13)=0x0u;
  { uint32_t k=c->t; R(7)=R(13); if(k) goto L8c065298; }
L8c065286:;
  R(3)=R(1);
  R(3)+=R(4);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(1)+=0x1u;
  R(0)=R(7);
  c->t=(int32_t)R(1)>=(int32_t)R(5);
  R(7)+=0x1u;
  { uint32_t k=!c->t; ST8(R(4)+R(0),R(2)); if(k) goto L8c065286; }
L8c065298:;
  c->t=(int32_t)R(7)>=(int32_t)R(5);
  if(c->t) goto L8c0652a6;
L8c06529c:;
  R(0)=R(7);
  R(7)+=0x1u;
  c->t=(int32_t)R(7)>=(int32_t)R(5);
  { uint32_t k=!c->t; ST8(R(4)+R(0),R(13)); if(k) goto L8c06529c; }
L8c0652a6:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c0652e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c75dcu;
  R(14)=R(4);
  ST32(R(15),R(5));
  R(11)=R(6);
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=R(7); if(k) goto L8c065304; }
  c->t=(int32_t)R(13)>=0;
  if(!c->t) goto L8c065304;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c065308;
L8c065304:;
  { R(0)=0xffffffffu; goto L8c06535e; }
L8c065308:;
  R(3)=0x8c2d20d0u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c065318; }
  R(1)=0x8c0db69cu;
  { c->pr=0x8c065318u; R(4)=R(12); f_8c0db69c(c); }
L8c065318:;
  R(2)=0x8c0c75d4u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c065338;
  R(5)=LD32(R(15));
  R(4)=R(14);
  R(7)=R(13);
  R(6)=R(11);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0da28cu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0da28c(c); return; } }
L8c065338:;
  { c->pr=0x8c06533cu; R(4)=R(14); f_8c065166(c); }
  R(5)=LD32(R(15));
  R(7)=R(13);
  R(3)=0x8c0da28cu;
  R(6)=R(11);
  { c->pr=0x8c065348u; R(4)=R(14); f_8c0da28c(c); }
  { c->pr=0x8c06534cu; R(4)=R(14); f_8c065166(c); }
  R(3)=0x8c0da182u;
  { c->pr=0x8c065352u; R(4)=R(14); f_8c0da182(c); }
  ST32(R(15),R(0));
  { c->pr=0x8c065358u; R(4)=R(0); f_8c0659e0(c); }
  { c->pr=0x8c06535cu; R(4)=R(14); f_8c065166(c); }
  R(0)=LD32(R(15));
L8c06535e:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06536c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0c75dcu;
  R(14)=R(4);
  ST32(R(15),R(5));
  R(11)=R(6);
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=R(7); if(k) goto L8c065390; }
  c->t=(int32_t)R(13)>0;
  if(!c->t) goto L8c065390;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c065394;
L8c065390:;
  { R(0)=0xffffffffu; goto L8c065400; }
L8c065394:;
  R(3)=0x8c2d20d0u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c0653a4; }
  R(1)=0x8c0db69cu;
  { c->pr=0x8c0653a4u; R(4)=R(12); f_8c0db69c(c); }
L8c0653a4:;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0653acu; R(4)=R(14); f_8c065d36(c); }
  R(3)=0x8c0c75d4u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0653ce;
  R(2)=0x80000000u;
  R(7)=R(13);
  R(6)=R(11);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=R(15);
  R(1)+=0x8u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+8);
  R(1)=0x8c0da2e4u;
  { c->pr=0x8c0653cau; R(4)=R(14); f_8c0da2e4(c); }
  { R(15)+=0x8u; goto L8c065400; }
L8c0653ce:;
  { c->pr=0x8c0653d2u; R(4)=R(14); f_8c065166(c); }
  R(3)=0x80000000u;
  R(7)=R(13);
  R(6)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+8);
  R(2)=0x8c0da2e4u;
  { c->pr=0x8c0653e8u; R(4)=R(14); f_8c0da2e4(c); }
  R(15)+=0x8u;
  { c->pr=0x8c0653eeu; R(4)=R(14); f_8c065166(c); }
  R(2)=0x8c0da182u;
  { c->pr=0x8c0653f4u; R(4)=R(14); f_8c0da182(c); }
  ST32(R(15),R(0));
  { c->pr=0x8c0653fau; R(4)=R(0); f_8c0659e0(c); }
  { c->pr=0x8c0653feu; R(4)=R(14); f_8c065166(c); }
  R(0)=LD32(R(15));
L8c065400:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065440(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0c75dcu;
  R(14)=R(4);
  ST32(R(15),R(5));
  R(12)=R(6);
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=R(7); if(k) goto L8c065462; }
  c->t=(int32_t)R(13)>0;
  if(!c->t) goto L8c065462;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c065466;
L8c065462:;
  { R(0)=0xffffffffu; goto L8c0654c2; }
L8c065466:;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c06546eu; R(4)=R(14); f_8c065d36(c); }
  R(3)=0x8c0c75d4u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c065490;
  R(2)=0x80000000u;
  R(7)=R(13);
  R(6)=R(12);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=R(15);
  R(1)+=0x8u;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+8);
  R(1)=0x8c0da342u;
  { c->pr=0x8c06548cu; R(4)=R(14); f_8c0da342(c); }
  { R(15)+=0x8u; goto L8c0654c2; }
L8c065490:;
  { c->pr=0x8c065494u; R(4)=R(14); f_8c065166(c); }
  R(3)=0x80000000u;
  R(7)=R(13);
  R(6)=R(12);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x8u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+8);
  R(2)=0x8c0da342u;
  { c->pr=0x8c0654aau; R(4)=R(14); f_8c0da342(c); }
  R(15)+=0x8u;
  { c->pr=0x8c0654b0u; R(4)=R(14); f_8c065166(c); }
  R(2)=0x8c0da182u;
  { c->pr=0x8c0654b6u; R(4)=R(14); f_8c0da182(c); }
  ST32(R(15),R(0));
  { c->pr=0x8c0654bcu; R(4)=R(0); f_8c0659e0(c); }
  { c->pr=0x8c0654c0u; R(4)=R(14); f_8c065166(c); }
  R(0)=LD32(R(15));
L8c0654c2:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0654ce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0c75dcu;
  ST32(R(15),R(5));
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(14)=R(4); if(k) goto L8c0654ea; }
  R(0)=0xffffffffu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0654ea:;
  R(2)=0x8c0c75d4u;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c065500;
  R(5)=LD32(R(15));
  R(4)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0da016u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0da016(c); return; } }
L8c065500:;
  { c->pr=0x8c065504u; R(4)=R(14); f_8c065166(c); }
  R(3)=0x8c0da016u;
  R(5)=LD32(R(15));
  { c->pr=0x8c06550cu; R(4)=R(14); f_8c0da016(c); }
  { c->pr=0x8c065510u; R(4)=R(14); f_8c065166(c); }
  R(3)=0x8c0da182u;
  { c->pr=0x8c065516u; R(4)=R(14); f_8c0da182(c); }
  ST32(R(15),R(0));
  { c->pr=0x8c06551cu; R(4)=R(14); f_8c065166(c); }
  R(0)=LD32(R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065526(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(3)=0x8c0c75dcu;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(13)=R(4); if(k) goto L8c065560; }
  { R(0)=0xffffffffu; goto L8c0655d6; }
L8c065560:;
  R(5)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c065568u; R(4)=R(13); f_8c065d36(c); }
  R(2)=0x8c0686b8u;
  R(14)=R(15);
  R(5)=0x0u;
  R(14)+=0x4u;
  R(6)=0x20u;
  { c->pr=0x8c065576u; R(4)=R(14); f_8c0686b8(c); }
  R(0)=0xbfu;
  R(4)=0x0u;
  R(3)=0x1u;
  R(2)=0x8c0c75d4u;
  ST8(R(14),R(3));
  ST8(R(14)+1,R(0));
  R(0)=R(4);
  ST8(R(14)+2,R(0));
  ST8(R(14)+3,R(0));
  R(0)=0xffu;
  ST8(R(14)+4,R(0));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0655a8;
  R(3)=0x1u;
  R(1)=0x8c0d9c20u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x28u;
  R(6)=0x0u;
  { c->pr=0x8c0655a4u; R(4)=R(13); f_8c0d9c20(c); }
  { R(15)+=0x4u; goto L8c0655d6; }
L8c0655a8:;
  { c->pr=0x8c0655acu; R(4)=R(13); f_8c065166(c); }
  R(3)=0x1u;
  R(2)=0x8c0d9c20u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x28u;
  R(6)=0x0u;
  { c->pr=0x8c0655beu; R(4)=R(13); f_8c0d9c20(c); }
  R(15)+=0x4u;
  { c->pr=0x8c0655c4u; R(4)=R(13); f_8c065166(c); }
  R(2)=0x8c0da182u;
  { c->pr=0x8c0655cau; R(4)=R(13); f_8c0da182(c); }
  ST32(R(15),R(0));
  { c->pr=0x8c0655d0u; R(4)=R(0); f_8c0659e0(c); }
  { c->pr=0x8c0655d4u; R(4)=R(13); f_8c065166(c); }
  R(0)=LD32(R(15));
L8c0655d6:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065560(SH4Ctx *c) {
  R(5)=R(15);
  R(5)+=0x24u;
  { c->pr=0x8c065568u; R(4)=R(13); f_8c065d36(c); }
  R(2)=0x8c0686b8u;
  R(14)=R(15);
  R(5)=0x0u;
  R(14)+=0x4u;
  R(6)=0x20u;
  { c->pr=0x8c065576u; R(4)=R(14); f_8c0686b8(c); }
  R(0)=0xbfu;
  R(4)=0x0u;
  R(3)=0x1u;
  R(2)=0x8c0c75d4u;
  ST8(R(14),R(3));
  ST8(R(14)+1,R(0));
  R(0)=R(4);
  ST8(R(14)+2,R(0));
  ST8(R(14)+3,R(0));
  R(0)=0xffu;
  ST8(R(14)+4,R(0));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0655a8;
  R(3)=0x1u;
  R(1)=0x8c0d9c20u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x28u;
  R(6)=0x0u;
  { c->pr=0x8c0655a4u; R(4)=R(13); f_8c0d9c20(c); }
  { R(15)+=0x4u; goto L8c0655d6; }
L8c0655a8:;
  { c->pr=0x8c0655acu; R(4)=R(13); f_8c065166(c); }
  R(3)=0x1u;
  R(2)=0x8c0d9c20u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=R(14);
  R(7)=R(15);
  R(7)+=0x28u;
  R(6)=0x0u;
  { c->pr=0x8c0655beu; R(4)=R(13); f_8c0d9c20(c); }
  R(15)+=0x4u;
  { c->pr=0x8c0655c4u; R(4)=R(13); f_8c065166(c); }
  R(2)=0x8c0da182u;
  { c->pr=0x8c0655cau; R(4)=R(13); f_8c0da182(c); }
  ST32(R(15),R(0));
  { c->pr=0x8c0655d0u; R(4)=R(0); f_8c0659e0(c); }
  { c->pr=0x8c0655d4u; R(4)=R(13); f_8c065166(c); }
  R(0)=LD32(R(15));
L8c0655d6:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0655e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(3)=0x8c0c75dcu;
  R(13)=R(5);
  R(12)=R(4);
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c065620; }
  { R(0)=0xffffffffu; goto L8c06576c; }
L8c065620:;
  { c->pr=0x8c065624u; R(4)=R(14); f_8c065166(c); }
  R(2)=0x8c0da136u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x1cu;
  { c->pr=0x8c065630u; R(4)=R(14); f_8c0da136(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(11)=R(0); if(k) goto L8c06563e; }
  { c->pr=0x8c06563au; R(4)=R(11); f_8c0659e0(c); }
  { R(0)=R(11); goto L8c06576c; }
L8c06563e:;
  { c->pr=0x8c065642u; R(4)=R(14); f_8c065166(c); }
  R(0)=0x20u;
  R(2)=R(15);
  R(11)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x23u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(2)+=0x14u;
  R(11)=R(11)&0xFFFF;
  R(5)=R(15);
  ST8(R(15)+4,R(0));
  R(0)=0x24u;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x22u;
  R(4)=R(11);
  R(4)<<=8;
  ST16(R(15),R(3));
  R(3)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)+=0x26u;
  R(5)+=0xcu;
  ST8(R(15)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3));
  ST16(R(2),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  ST16(R(2)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  ST16(R(2)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+6);
  ST16(R(2)+6,R(0));
  { c->pr=0x8c06567eu; c->t=R(4)>>31;R(4)<<=1; f_8c06501e(c); }
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c065688;
  {  goto L8c06576a; }
L8c065688:;
  { c->pr=0x8c06568cu; R(4)=R(14); f_8c065166(c); }
  R(6)=LD32(R(15)+16);
  R(5)=R(12);
  R(7)=R(11);
  { c->pr=0x8c065696u; R(4)=R(14); f_8c0652e0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(10)=R(0); if(k) goto L8c0656ae; }
  R(4)=R(15);
  { c->pr=0x8c0656a2u; R(4)+=0xcu; f_8c0650ea(c); }
  { c->pr=0x8c0656a6u; R(4)=R(10); f_8c0659e0(c); }
  { c->pr=0x8c0656aau; R(4)=R(10); f_8c065c20(c); }
  { R(0)=R(10); goto L8c06576c; }
L8c0656ae:;
  { c->pr=0x8c0656b2u; R(4)=R(14); f_8c065166(c); }
  { c->pr=0x8c0656b6u; R(4)=R(13); f_8c065166(c); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(6)=LD32(R(15)+16);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0656c8;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0656da;
  {  goto L8c06576a; }
L8c0656c8:;
  R(5)=R(12);
  R(7)=R(11);
  { c->pr=0x8c0656d0u; R(4)=R(13); f_8c065440(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c065708; }
  {  goto L8c065720; }
L8c0656da:;
  R(3)=0x80000000u;
  R(5)=R(12);
  R(1)=0x8c0da2e4u;
  R(7)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x18u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0656eeu; R(4)=R(13); f_8c0da2e4(c); }
  R(15)+=0x8u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c065708; }
  R(4)=R(15);
  { c->pr=0x8c0656fcu; R(4)+=0xcu; f_8c0650ea(c); }
  { c->pr=0x8c065700u; R(4)=R(14); f_8c0659e0(c); }
  { c->pr=0x8c065704u; R(4)=R(14); f_8c065c20(c); }
  {  goto L8c06572e; }
L8c065708:;
  { c->pr=0x8c06570cu; R(4)=R(13); f_8c065166(c); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(12);
  R(3)=0x8c0da0a8u;
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(7)=R(0);
  { c->pr=0x8c06571au; R(4)=R(13); f_8c0da0a8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c065760; }
L8c065720:;
  R(4)=R(15);
  { c->pr=0x8c065726u; R(4)+=0xcu; f_8c0650ea(c); }
  { c->pr=0x8c06572au; R(4)=R(14); f_8c0659e0(c); }
  { c->pr=0x8c06572eu; R(4)=R(14); f_8c065c20(c); }
L8c06572e:;
  { R(0)=R(14); goto L8c06576c; }
L8c065760:;
  { c->pr=0x8c065764u; R(4)=R(13); f_8c065166(c); }
  R(4)=R(15);
  { c->pr=0x8c06576au; R(4)+=0xcu; f_8c0650ea(c); }
L8c06576a:;
  R(0)=0x0u;
L8c06576c:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065620(SH4Ctx *c) {
  { c->pr=0x8c065624u; R(4)=R(14); f_8c065166(c); }
  R(2)=0x8c0da136u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x1cu;
  { c->pr=0x8c065630u; R(4)=R(14); f_8c0da136(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(11)=R(0); if(k) goto L8c06563e; }
  { c->pr=0x8c06563au; R(4)=R(11); f_8c0659e0(c); }
  { R(0)=R(11); goto L8c06576c; }
L8c06563e:;
  { c->pr=0x8c065642u; R(4)=R(14); f_8c065166(c); }
  R(0)=0x20u;
  R(2)=R(15);
  R(11)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x23u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(2)+=0x14u;
  R(11)=R(11)&0xFFFF;
  R(5)=R(15);
  ST8(R(15)+4,R(0));
  R(0)=0x24u;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x22u;
  R(4)=R(11);
  R(4)<<=8;
  ST16(R(15),R(3));
  R(3)=R(15);
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)+=0x26u;
  R(5)+=0xcu;
  ST8(R(15)+8,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3));
  ST16(R(2),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+2);
  ST16(R(2)+2,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+4);
  ST16(R(2)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(3)+6);
  ST16(R(2)+6,R(0));
  { c->pr=0x8c06567eu; c->t=R(4)>>31;R(4)<<=1; f_8c06501e(c); }
  R(2)=LD32(R(15)+16);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c065688;
  {  goto L8c06576a; }
L8c065688:;
  { c->pr=0x8c06568cu; R(4)=R(14); f_8c065166(c); }
  R(6)=LD32(R(15)+16);
  R(5)=R(12);
  R(7)=R(11);
  { c->pr=0x8c065696u; R(4)=R(14); f_8c0652e0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(10)=R(0); if(k) goto L8c0656ae; }
  R(4)=R(15);
  { c->pr=0x8c0656a2u; R(4)+=0xcu; f_8c0650ea(c); }
  { c->pr=0x8c0656a6u; R(4)=R(10); f_8c0659e0(c); }
  { c->pr=0x8c0656aau; R(4)=R(10); f_8c065c20(c); }
  { R(0)=R(10); goto L8c06576c; }
L8c0656ae:;
  { c->pr=0x8c0656b2u; R(4)=R(14); f_8c065166(c); }
  { c->pr=0x8c0656b6u; R(4)=R(13); f_8c065166(c); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+8);
  R(6)=LD32(R(15)+16);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0656c8;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0656da;
  {  goto L8c06576a; }
L8c0656c8:;
  R(5)=R(12);
  R(7)=R(11);
  { c->pr=0x8c0656d0u; R(4)=R(13); f_8c065440(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c065708; }
  {  goto L8c065720; }
L8c0656da:;
  R(3)=0x80000000u;
  R(5)=R(12);
  R(1)=0x8c0da2e4u;
  R(7)=R(11);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=R(15);
  R(2)+=0x18u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0656eeu; R(4)=R(13); f_8c0da2e4(c); }
  R(15)+=0x8u;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c065708; }
  R(4)=R(15);
  { c->pr=0x8c0656fcu; R(4)+=0xcu; f_8c0650ea(c); }
  { c->pr=0x8c065700u; R(4)=R(14); f_8c0659e0(c); }
  { c->pr=0x8c065704u; R(4)=R(14); f_8c065c20(c); }
  {  goto L8c06572e; }
L8c065708:;
  { c->pr=0x8c06570cu; R(4)=R(13); f_8c065166(c); }
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(12);
  R(3)=0x8c0da0a8u;
  R(6)=(int32_t)(int16_t)LD16(R(15));
  R(7)=R(0);
  { c->pr=0x8c06571au; R(4)=R(13); f_8c0da0a8(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(0); if(k) goto L8c065760; }
L8c065720:;
  R(4)=R(15);
  { c->pr=0x8c065726u; R(4)+=0xcu; f_8c0650ea(c); }
  { c->pr=0x8c06572au; R(4)=R(14); f_8c0659e0(c); }
  { c->pr=0x8c06572eu; R(4)=R(14); f_8c065c20(c); }
L8c06572e:;
  { R(0)=R(14); goto L8c06576c; }
L8c065760:;
  { c->pr=0x8c065764u; R(4)=R(13); f_8c065166(c); }
  R(4)=R(15);
  { c->pr=0x8c06576au; R(4)+=0xcu; f_8c0650ea(c); }
L8c06576a:;
  R(0)=0x0u;
L8c06576c:;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065760(SH4Ctx *c) {
  { c->pr=0x8c065764u; R(4)=R(13); f_8c065166(c); }
  R(4)=R(15);
  { c->pr=0x8c06576au; R(4)+=0xcu; f_8c0650ea(c); }
  R(0)=0x0u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06577c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(14)=R(5);
  R(11)=R(4);
  { c->pr=0x8c065792u; R(4)=R(5); f_8c065166(c); }
  R(2)=0x8c0c75dcu;
  R(0)=LD32(R(2));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06579e;
  { R(0)=0xffffffffu; goto L8c065824; }
L8c06579e:;
  R(2)=0x8c0d9d3cu;
  R(13)=R(15);
  R(5)=R(13);
  { c->pr=0x8c0657a8u; R(4)=R(14); f_8c0d9d3c(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c06581a; }
  R(2)=0xffffff05u;
  c->t=R(4)==R(2);
  if(c->t) goto L8c0657ba;
  R(1)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0657e0;
L8c0657ba:;
  R(0)=0xffffff05u;
  {  goto L8c065824; }
L8c0657e0:;
  R(5)=R(11);
  R(6)=R(14);
  { c->pr=0x8c0657e8u; R(4)=R(13); f_8c0655e0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c06581a; }
  R(10)=0x8c0d9d6au;
L8c0657f0:;
  { c->pr=0x8c0657f4u; R(4)=R(14); f_8c065166(c); }
  R(5)=R(13);
  { uint32_t tg=R(10); c->pr=0x8c0657fau; R(4)=R(14); sh4_call(c,tg); }
  R(12)=R(0);
  { c->pr=0x8c065800u; R(4)=R(14); f_8c065166(c); }
  R(1)=0xffffff05u;
  R(0)=R(12);
  c->t=R(0)==R(1);
  if(c->t) goto L8c065822;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c06581e;
  R(5)=R(11);
  R(6)=R(14);
  { c->pr=0x8c065814u; R(4)=R(13); f_8c0655e0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0657f0; }
L8c06581a:;
  { R(0)=R(4); goto L8c065824; }
L8c06581e:;
  { R(0)=R(12); goto L8c065824; }
L8c065822:;
  R(0)=0x0u;
L8c065824:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0657e0(SH4Ctx *c) {
  R(5)=R(11);
  R(6)=R(14);
  { c->pr=0x8c0657e8u; R(4)=R(13); f_8c0655e0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c06581a; }
  R(10)=0x8c0d9d6au;
L8c0657f0:;
  { c->pr=0x8c0657f4u; R(4)=R(14); f_8c065166(c); }
  R(5)=R(13);
  { uint32_t tg=R(10); c->pr=0x8c0657fau; R(4)=R(14); sh4_call(c,tg); }
  R(12)=R(0);
  { c->pr=0x8c065800u; R(4)=R(14); f_8c065166(c); }
  R(1)=0xffffff05u;
  R(0)=R(12);
  c->t=R(0)==R(1);
  if(c->t) goto L8c065822;
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c06581e;
  R(5)=R(11);
  R(6)=R(14);
  { c->pr=0x8c065814u; R(4)=R(13); f_8c0655e0(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0657f0; }
L8c06581a:;
  { R(0)=R(4); goto L8c065824; }
L8c06581e:;
  { R(0)=R(12); goto L8c065824; }
L8c065822:;
  R(0)=0x0u;
L8c065824:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065834(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(3)=0x8c0c75dcu;
  R(12)=R(4);
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(8)=R(5); if(k) goto L8c065880; }
  { R(0)=0xffffffffu; goto L8c06595a; }
L8c065880:;
  R(14)=0x8c0c75e0u;
  R(3)=0x0u;
  R(11)=0x8c0c75d4u;
  R(2)=0xffffffffu;
  ST32(R(14),R(3));
  ST32(R(8),R(2));
  R(3)=LD32(R(11));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c065896;
  { c->pr=0x8c065896u; R(4)=R(12); f_8c065166(c); }
L8c065896:;
  R(2)=0x8c0d9d3cu;
  R(9)=R(15);
  R(5)=R(9);
  { c->pr=0x8c0658a0u; R(4)=R(12); f_8c0d9d3c(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c065958; }
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0658b0;
  { c->pr=0x8c0658b0u; R(4)=R(12); f_8c065166(c); }
L8c0658b0:;
  R(2)=0xffffff05u;
  c->t=R(13)==R(2);
  if(c->t) goto L8c065958;
  R(1)=(int32_t)(int8_t)LD8(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c065958;
  R(0)=LD32(R(14));
  R(3)=0xdu;
  R(10)=0x8c2dc8b0u;
  c->macl=R(0)*R(3);
  R(0)+=0x1u;
  R(2)=0x8c09c4d4u;
  ST32(R(14),R(0));
  R(0)=c->macl;
  R(0)+=R(10);
  { c->pr=0x8c0658d2u; R(1)=R(15); f_8c09c4d4(c); }
L8c0658d2:;
  R(3)=LD32(R(11));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0658dc;
  { c->pr=0x8c0658dcu; R(4)=R(12); f_8c065166(c); }
L8c0658dc:;
  R(2)=0x8c0d9d6au;
  R(5)=R(9);
  { c->pr=0x8c0658e4u; R(4)=R(12); f_8c0d9d6a(c); }
  R(3)=LD32(R(11));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c0658f0; }
  { c->pr=0x8c0658f0u; R(4)=R(12); f_8c065166(c); }
L8c0658f0:;
  R(1)=0xffffff05u;
  R(0)=R(13);
  c->t=R(0)==R(1);
  if(c->t) goto L8c065900;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c065940;
  {  goto L8c065958; }
L8c065900:;
  R(2)=LD32(R(14));
  ST32(R(8),R(2));
  { R(0)=0x0u; goto L8c06595a; }
L8c065940:;
  R(0)=LD32(R(14));
  R(3)=0xdu;
  R(2)=0x8c09c4d4u;
  c->macl=R(0)*R(3);
  R(0)+=0x1u;
  ST32(R(14),R(0));
  R(0)=c->macl;
  R(0)+=R(10);
  { c->pr=0x8c065954u; R(1)=R(15); f_8c09c4d4(c); }
  {  goto L8c0658d2; }
L8c065958:;
  R(0)=R(13);
L8c06595a:;
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
void f_8c06596e(SH4Ctx *c) {
  R(3)=0x8c0c75e0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(3));
  c->t=(int32_t)R(4)>=(int32_t)R(6);
  if(c->t) goto L8c06597c;
  c->t=(int32_t)R(6)>0;
  if(c->t) goto L8c06598a;
L8c06597c:;
  R(3)=0x8c0bb714u;
  R(2)=R(5);
  {int32_t v=(int8_t)LD8(R(3));R(3)+=1;R(1)=(uint32_t)v;}
  ST8(R(2),R(1));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0xffffffffu; return; }
L8c06598a:;
  R(3)=0xdu;
  R(1)=0x8c2dc8b0u;
  c->macl=R(4)*R(3);
  R(2)=0x8c09c4d4u;
  R(3)=c->macl;
  R(1)+=R(3);
  { c->pr=0x8c06599au; R(0)=R(5); f_8c09c4d4(c); }
  R(0)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0659e0(SH4Ctx *c) {
  R(0)=R(4);
  c->t=(int32_t)R(0)==0;
  if(!c->t) goto L8c0659ea;
  {  goto L8c065b00; }
L8c0659ea:;
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0659f2;
  {  goto L8c065b06; }
L8c0659f2:;
  R(1)=0xffffff00u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0659fc;
  {  goto L8c065b0c; }
L8c0659fc:;
  c->t=(int32_t)R(0)==-127;
  if(!c->t) goto L8c065a04;
  {  goto L8c065b12; }
L8c065a04:;
  c->t=(int32_t)R(0)==-125;
  if(!c->t) goto L8c065a0c;
  {  goto L8c065b18; }
L8c065a0c:;
  R(1)=0xffffff01u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a16;
  {  goto L8c065b1e; }
L8c065a16:;
  R(1)=0xffffff03u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a20;
  {  goto L8c065b24; }
L8c065a20:;
  R(1)=0xffffff04u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a2a;
  {  goto L8c065b2a; }
L8c065a2a:;
  R(1)=0xffffff05u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a34;
  {  goto L8c065b30; }
L8c065a34:;
  R(1)=0xffffff06u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a3e;
  {  goto L8c065b36; }
L8c065a3e:;
  R(1)=0xffffff07u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a48;
  {  goto L8c065b3c; }
L8c065a48:;
  R(1)=0xffffff08u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a52;
  {  goto L8c065b42; }
L8c065a52:;
  R(1)=0xffffff09u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a5c;
  {  goto L8c065b48; }
L8c065a5c:;
  R(1)=0xffffff0au;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a66;
  {  goto L8c065ba0; }
L8c065a66:;
  R(1)=0xffffff0bu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a70;
  {  goto L8c065ba6; }
L8c065a70:;
  R(1)=0xffffff10u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a7a;
  {  goto L8c065bac; }
L8c065a7a:;
  R(1)=0xffffff40u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a84;
  {  goto L8c065bb2; }
L8c065a84:;
  R(1)=0xffffff41u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a8e;
  {  goto L8c065bb8; }
L8c065a8e:;
  R(1)=0xffffff20u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065a98;
  {  goto L8c065bbe; }
L8c065a98:;
  R(1)=0xffffff21u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065aa2;
  {  goto L8c065bc4; }
L8c065aa2:;
  R(1)=0xffff0000u;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c065aac;
  {  goto L8c065bca; }
L8c065aac:;
  {  goto L8c065bd0; }
L8c065b00:;
  R(0)=0x8c0bb718u;
  {  return; }
L8c065b06:;
  R(0)=0x8c0bb71cu;
  {  return; }
L8c065b0c:;
  R(0)=0x8c0bb724u;
  {  return; }
L8c065b12:;
  R(0)=0x8c0bb738u;
  {  return; }
L8c065b18:;
  R(0)=0x8c0bb748u;
  {  return; }
L8c065b1e:;
  R(0)=0x8c0bb758u;
  {  return; }
L8c065b24:;
  R(0)=0x8c0bb764u;
  {  return; }
L8c065b2a:;
  R(0)=0x8c0bb770u;
  {  return; }
L8c065b30:;
  R(0)=0x8c0bb77cu;
  {  return; }
L8c065b36:;
  R(0)=0x8c0bb78cu;
  {  return; }
L8c065b3c:;
  R(0)=0x8c0bb798u;
  {  return; }
L8c065b42:;
  R(0)=0x8c0bb7a8u;
  {  return; }
L8c065b48:;
  R(0)=0x8c0bb7b8u;
  {  return; }
L8c065ba0:;
  R(0)=0x8c0bb7c8u;
  {  return; }
L8c065ba6:;
  R(0)=0x8c0bb7d8u;
  {  return; }
L8c065bac:;
  R(0)=0x8c0bb7e8u;
  {  return; }
L8c065bb2:;
  R(0)=0x8c0bb7f0u;
  {  return; }
L8c065bb8:;
  R(0)=0x8c0bb800u;
  {  return; }
L8c065bbe:;
  R(0)=0x8c0bb810u;
  {  return; }
L8c065bc4:;
  R(0)=0x8c0bb820u;
  {  return; }
L8c065bca:;
  R(0)=0x8c0bb834u;
  {  return; }
L8c065bd0:;
  R(0)=0x8c0bb840u;
  {  return; }
}
void f_8c065c20(SH4Ctx *c) {
  R(0)=R(4);
  R(1)=0x15u;
  c->t=R(0)>=R(1);
  if(!c->t) goto L8c065c2c;
  {  goto L8c065d30; }
L8c065c2c:;
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=R(0);
  R(0)=0x8c065c38u;
  R(0)=(int32_t)(int16_t)LD16(R(1)+R(0));
  { uint32_t tg=(0x8c065c38u+R(0));  switch(tg){ case 0x8c065c62u: goto L8c065c62; case 0x8c065c68u: goto L8c065c68; case 0x8c065c6eu: goto L8c065c6e; case 0x8c065c74u: goto L8c065c74; case 0x8c065c7au: goto L8c065c7a; case 0x8c065c80u: goto L8c065c80; case 0x8c065c86u: goto L8c065c86; case 0x8c065c8cu: goto L8c065c8c; case 0x8c065c92u: goto L8c065c92; case 0x8c065c98u: goto L8c065c98; case 0x8c065c9eu: goto L8c065c9e; case 0x8c065ca4u: goto L8c065ca4; case 0x8c065caau: goto L8c065caa; case 0x8c065d00u: goto L8c065d00; case 0x8c065d06u: goto L8c065d06; case 0x8c065d0cu: goto L8c065d0c; case 0x8c065d12u: goto L8c065d12; case 0x8c065d18u: goto L8c065d18; case 0x8c065d1eu: goto L8c065d1e; case 0x8c065d24u: goto L8c065d24; case 0x8c065d2au: goto L8c065d2a; default: sh4_bad_jump(c,0x8c065c34u,tg); return; } }
L8c065c62:;
  R(0)=0x8c0bb85cu;
  {  return; }
L8c065c68:;
  R(0)=0x8c0bb86cu;
  {  return; }
L8c065c6e:;
  R(0)=0x8c0bb878u;
  {  return; }
L8c065c74:;
  R(0)=0x8c0bb888u;
  {  return; }
L8c065c7a:;
  R(0)=0x8c0bb894u;
  {  return; }
L8c065c80:;
  R(0)=0x8c0bb8a0u;
  {  return; }
L8c065c86:;
  R(0)=0x8c0bb8acu;
  {  return; }
L8c065c8c:;
  R(0)=0x8c0bb8b8u;
  {  return; }
L8c065c92:;
  R(0)=0x8c0bb8c4u;
  {  return; }
L8c065c98:;
  R(0)=0x8c0bb8d0u;
  {  return; }
L8c065c9e:;
  R(0)=0x8c0bb8dcu;
  {  return; }
L8c065ca4:;
  R(0)=0x8c0bb8ecu;
  {  return; }
L8c065caa:;
  R(0)=0x8c0bb8f8u;
  {  return; }
L8c065d00:;
  R(0)=0x8c0bb904u;
  {  return; }
L8c065d06:;
  R(0)=0x8c0bb914u;
  {  return; }
L8c065d0c:;
  R(0)=0x8c0bb920u;
  {  return; }
L8c065d12:;
  R(0)=0x8c0bb92cu;
  {  return; }
L8c065d18:;
  R(0)=0x8c0bb938u;
  {  return; }
L8c065d1e:;
  R(0)=0x8c0bb948u;
  {  return; }
L8c065d24:;
  R(0)=0x8c0bb954u;
  {  return; }
L8c065d2a:;
  R(0)=0x8c0bb95cu;
  {  return; }
L8c065d30:;
  R(0)=0x8c0bb970u;
  {  return; }
}
void f_8c065d00(SH4Ctx *c) {
  R(0)=0x8c0bb904u;
  {  return; }
}
void f_8c065d36(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x8c0d0a40u;
  { c->pr=0x8c065d42u; R(14)=R(5); f_8c0d0a40(c); }
  R(2)=0x8c0d0a6au;
  { c->pr=0x8c065d48u; R(4)=R(15); f_8c0d0a6a(c); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  ST16(R(14),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(15)+2);
  ST8(R(14)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+3);
  ST8(R(14)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  ST8(R(14)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+5);
  ST8(R(14)+5,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+6);
  ST8(R(14)+6,R(0));
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065d6a(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d9b58u;
  R(4)=0x8c065dc0u;
  { c->pr=0x8c065d74u;  f_8c0d9b58(c); }
  R(2)=0x8c0d9b5eu;
  R(4)=0x8c065e1cu;
  { {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;} { f_8c0d9b5e(c); return; } }
}
void f_8c065dc0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x5cu;
  c->macl=R(4)*R(14);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=R(5);
  R(3)=0x8c2dcdc4u;
  c->t=(int32_t)R(0)==1;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=c->macl;
  R(14)+=R(3);
  { uint32_t k=c->t; R(13)=0x0u; if(k) goto L8c065de0; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c065df0;
  {  goto L8c065e06; }
L8c065de0:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c065e10;
  R(1)=0x8c0d9ce0u;
  R(5)=R(14);
  { c->pr=0x8c065decu; R(5)+=0x20u; f_8c0d9ce0(c); }
  { ST32(R(14)+16,R(13)); goto L8c065e10; }
L8c065df0:;
  R(2)=0x8c0686b8u;
  R(5)=0x0u;
  R(4)=R(14);
  R(6)=0x38u;
  ST32(R(14)+20,R(13));
  ST32(R(14)+24,R(13));
  ST32(R(14)+28,R(13));
  { c->pr=0x8c065e02u; R(4)+=0x20u; f_8c0686b8(c); }
  {  goto L8c065e10; }
L8c065e06:;
  R(2)=0x8c0d9ce0u;
  R(5)=R(14);
  ST32(R(14)+16,R(6));
  { c->pr=0x8c065e10u; R(5)+=0x20u; f_8c0d9ce0(c); }
L8c065e10:;
  R(0)=R(13);
  ST32(R(14)+28,R(13));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065e1c(SH4Ctx *c) {
  R(3)=0x5cu;
  R(2)=0x8c2dcdc4u;
  c->macl=R(4)*R(3);
  R(4)=c->macl;
  R(4)+=R(2);
  ST32(R(4)+20,R(6));
  ST32(R(4)+24,R(7));
  ST32(R(4)+28,R(5));
  { R(0)=0x0u; return; }
}
void f_8c065e30(SH4Ctx *c) {
  R(6)=0x0u;
  R(1)=0x224896ebu;
  R(6)+=R(4);
  R(4)=0x3a41c471u;
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c065e56; }
L8c065e3e:;
  c->macl=R(1)*R(4);
  R(2)=(int32_t)(int8_t)LD8(R(6));
  R(0)=R(1);
  R(3)=0xfffffff4u;
  R(0)=sh4_shad(R(0),R(3));
  R(1)=c->macl;
  R(7)+=0x1u;
  R(2)^=R(0);
  c->t=(int32_t)R(7)>=(int32_t)R(5);
  ST8(R(6),R(2));
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c065e3e; }
L8c065e56:;
  {  return; }
}
void f_8c065e5a(SH4Ctx *c) {
  R(6)=0x0u;
  R(1)=0x224896ebu;
  R(6)+=R(4);
  R(4)=0x3a41c471u;
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c065e80; }
L8c065e68:;
  c->macl=R(1)*R(4);
  R(2)=(int32_t)(int8_t)LD8(R(6));
  R(0)=R(1);
  R(3)=0xfffffff4u;
  R(0)=sh4_shad(R(0),R(3));
  R(1)=c->macl;
  R(7)+=0x1u;
  R(2)^=R(0);
  c->t=(int32_t)R(7)>=(int32_t)R(5);
  ST8(R(6),R(2));
  { uint32_t k=!c->t; R(6)+=0x1u; if(k) goto L8c065e68; }
L8c065e80:;
  {  return; }
}
void f_8c065e84(SH4Ctx *c) {
  R(6)=0x0u;
  c->t=(int32_t)R(5)>0;
  R(0)=0x0u;
  R(7)=R(6);
  { uint32_t k=!c->t; R(0)+=R(4); if(k) goto L8c065e9c; }
L8c065e90:;
  {int32_t v=(int8_t)LD8(R(0));R(0)+=1;R(3)=(uint32_t)v;}
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(5);
  R(3)=R(3)&0xFF;
  { uint32_t k=!c->t; R(7)+=R(3); if(k) goto L8c065e90; }
L8c065e9c:;
  { R(0)=R(7); return; }
}
void f_8c065ec0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c75dcu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c065f20;
  R(11)=0x5cu;
  R(12)=0x8c2dcdc4u;
  c->macl=R(4)*R(11);
  R(13)=R(4);
  R(0)=0x8c0bb6e8u;
  R(13)<<=2;
  R(13)=LD32(R(13)+R(0));
  R(0)=0x58u;
  R(11)=c->macl;
  R(4)=0x0u;
  R(14)=R(11);
  R(14)+=R(12);
  R(3)=LD32(R(14)+8);
  R(5)=R(14);
  R(5)+=0x20u;
  ST32(R(14)+R(0),R(3));
  R(3)=0x8c0d9ce0u;
  ST32(R(14),R(13));
  ST32(R(14)+4,R(4));
  ST32(R(14)+8,R(4));
  ST32(R(14)+12,R(4));
  { c->pr=0x8c065f04u; R(4)=R(13); f_8c0d9ce0(c); }
  R(2)=0x8c0d9b70u;
  { c->pr=0x8c065f0au; R(4)=R(13); f_8c0d9b70(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c065f20;
  R(2)=R(11);
  R(3)=0x1u;
  R(2)+=R(12);
  ST32(R(2)+8,R(3));
  R(2)=0x8c0d9c1au;
  { c->pr=0x8c065f1cu; R(4)=R(13); f_8c0d9c1a(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c065f24;
L8c065f20:;
  { R(0)=0xffffffffu; goto L8c065f3c; }
L8c065f24:;
  R(3)=0x1u;
  R(11)+=R(12);
  R(5)=0x0u;
  ST32(R(15),R(11));
  ST32(R(11)+12,R(3));
  R(8)=LD32(R(15));
  R(3)=0x8c0d9d0eu;
  R(8)+=0x4u;
  { c->pr=0x8c065f38u; R(4)=R(13); f_8c0d9d0e(c); }
  ST32(R(8),R(0));
  R(0)=0x0u;
L8c065f3c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065f4c(SH4Ctx *c) {
  R(2)=0x8c0c75dcu;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c065f76;
  R(4)=0x8c0c75d4u;
  R(2)=0x1u;
  R(5)=0x0u;
  R(13)=0x8u;
  R(14)=R(5);
  ST32(R(4),R(2));
L8c065f66:;
  { c->pr=0x8c065f6au; R(4)=R(14); f_8c065ec0(c); }
  R(14)+=0x1u;
  { c->pr=0x8c065f70u; R(4)=R(14); f_8c065ec0(c); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(13);
  if(!c->t) goto L8c065f66;
L8c065f76:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065f7e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0c75dcu;
  ST32(R(15),R(4));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c065fc0;
  R(2)=LD32(R(15));
  R(3)=0x5cu;
  R(13)=0x8c2dcdc4u;
  R(0)=0x58u;
  c->macl=R(2)*R(3);
  R(14)=c->macl;
  R(4)=R(14);
  R(4)+=R(13);
  R(2)=LD32(R(4)+8);
  ST32(R(4)+R(0),R(2));
  R(4)=LD32(R(15));
  R(2)=0x8c0d9b70u;
  R(0)=0x8c0bb6e8u;
  R(4)<<=2;
  { c->pr=0x8c065fb0u; R(4)=LD32(R(4)+R(0)); f_8c0d9b70(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c065fba;
  R(14)+=R(13);
  { R(2)=0x1u; goto L8c065fbe; }
L8c065fba:;
  R(2)=0x0u;
  R(14)+=R(13);
L8c065fbe:;
  ST32(R(14)+8,R(2));
L8c065fc0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c065fca(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(1)=0x8c0c75dcu;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c065fe6;
  {  goto L8c0660c0; }
L8c065fe6:;
  R(4)=0x8c0c75d4u;
  R(9)=0x1u;
  R(13)=0x8c0bb6e8u;
  R(11)=0x0u;
  ST32(R(4),R(9));
  R(8)=0x5cu;
  R(4)=0x8c2dcdc4u;
  R(10)=R(11);
  R(12)=R(4);
  R(14)=R(4);
L8c065ffa:;
  c->macl=R(10)*R(8);
  R(3)=0x8c2dcdc4u;
  R(0)=0x58u;
  R(4)=c->macl;
  R(4)+=R(3);
  R(2)=LD32(R(4)+8);
  ST32(R(4)+R(0),R(2));
  R(2)=0x8c0d9b70u;
  { c->pr=0x8c06600eu; R(4)=LD32(R(13)); f_8c0d9b70(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(10)+=0x1u; if(k) goto L8c066040; }
  { ST32(R(12)+8,R(9)); goto L8c066042; }
L8c066040:;
  ST32(R(14)+8,R(11));
L8c066042:;
  c->macl=R(10)*R(8);
  R(3)=0x8c2dcdc4u;
  R(0)=0x58u;
  R(14)+=0x5cu;
  R(13)+=0x4u;
  R(4)=c->macl;
  R(12)+=0x5cu;
  R(4)+=R(3);
  R(2)=LD32(R(4)+8);
  ST32(R(4)+R(0),R(2));
  R(2)=0x8c0d9b70u;
  { c->pr=0x8c06605cu; R(4)=LD32(R(13)); f_8c0d9b70(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(10)+=0x1u; if(k) goto L8c066066; }
  { ST32(R(12)+8,R(9)); goto L8c066068; }
L8c066066:;
  ST32(R(14)+8,R(11));
L8c066068:;
  c->macl=R(10)*R(8);
  R(3)=0x8c2dcdc4u;
  R(0)=0x58u;
  R(14)+=0x5cu;
  R(13)+=0x4u;
  R(4)=c->macl;
  R(12)+=0x5cu;
  R(4)+=R(3);
  R(2)=LD32(R(4)+8);
  ST32(R(4)+R(0),R(2));
  R(2)=0x8c0d9b70u;
  { c->pr=0x8c066082u; R(4)=LD32(R(13)); f_8c0d9b70(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(10)+=0x1u; if(k) goto L8c06608c; }
  { ST32(R(12)+8,R(9)); goto L8c06608e; }
L8c06608c:;
  ST32(R(14)+8,R(11));
L8c06608e:;
  c->macl=R(10)*R(8);
  R(3)=0x8c2dcdc4u;
  R(0)=0x58u;
  R(14)+=0x5cu;
  R(13)+=0x4u;
  R(4)=c->macl;
  R(12)+=0x5cu;
  R(4)+=R(3);
  R(2)=LD32(R(4)+8);
  ST32(R(4)+R(0),R(2));
  R(2)=0x8c0d9b70u;
  { c->pr=0x8c0660a8u; R(4)=LD32(R(13)); f_8c0d9b70(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(10)+=0x1u; if(k) goto L8c0660b2; }
  { ST32(R(12)+8,R(9)); goto L8c0660b4; }
L8c0660b2:;
  ST32(R(14)+8,R(11));
L8c0660b4:;
  R(3)=0x8u;
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  R(14)+=0x5cu;
  R(12)+=0x5cu;
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c065ffa; }
L8c0660c0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0660d2(SH4Ctx *c) {
  R(0)=0x5cu;
  R(3)=0x8c2dcdc4u;
  c->macl=R(4)*R(0);
  R(0)=c->macl;
  { R(0)+=R(3); return; }
}
void f_8c0660de(SH4Ctx *c) {
  R(0)=0x5cu;
  R(1)=0x8c2dcdccu;
  c->macl=R(4)*R(0);
  R(0)=c->macl;
  { R(0)=LD32(R(1)+R(0)); return; }
}
void f_8c0660ea(SH4Ctx *c) {
  R(5)=0x5cu;
  R(3)=0x8c2dcdc4u;
  c->macl=R(4)*R(5);
  R(5)=c->macl;
  R(5)+=R(3);
  R(2)=LD32(R(5)+8);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c066106;
  R(0)=0x58u;
  R(2)=LD32(R(5)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c066106;
  { R(0)=0x1u; return; }
L8c066106:;
  R(0)=0x0u;
  {  return; }
}
void f_8c066106(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c066160(SH4Ctx *c) {
  R(0)=0x0u;
  {  return; }
}
void f_8c066166(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=R(6);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15),R(7)); if(k) goto L8c066186; }
  R(2)=0x8c0da136u;
  R(6)=R(15);
  { c->pr=0x8c066180u; R(6)+=0x4u; f_8c0da136(c); }
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c06618a;
L8c066186:;
  { R(0)=0xffffffffu; goto L8c06623a; }
L8c06618a:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0661f4;
  R(0)=0x12u;
  R(14)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=0xcu;
  R(14)=R(14)&0xFF;
  c->t=(int32_t)R(14)>(int32_t)R(3);
  if(!c->t) goto L8c0661a2;
  R(1)=0x8c0bb99cu;
  { {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} goto L8c0661a6; }
L8c0661a2:;
  R(2)=0x8c0bb9a0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
L8c0661a6:;
  R(0)=0x17u;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=0x9u;
  R(1)=R(1)&0xFF;
  c->t=(int32_t)R(1)>(int32_t)R(3);
  ST32(R(15)+4,R(1));
  { uint32_t k=!c->t; {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);} if(k) goto L8c0661bc; }
  R(0)=0x8c0bb714u;
  { {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} goto L8c0661c0; }
L8c0661bc:;
  R(3)=0x8c0bb998u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
L8c0661c0:;
  R(1)=0xcu;
  c->t=(int32_t)R(14)>(int32_t)R(1);
  if(!c->t) goto L8c0661ce;
  R(2)=R(14);
  R(2)+=0xfffffff4u;
  { {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} goto L8c0661d0; }
L8c0661ce:;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
L8c0661d0:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+30);
  R(0)=R(0)&0xFFFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=0x25u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x28u;
  R(3)=R(3)&0xFF;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=0x8c0bb984u;
  R(2)=R(2)&0xFF;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0661f0u; R(4)=R(13); f_8c06874c(c); }
  { R(15)+=0x20u; goto L8c066238; }
L8c0661f4:;
  R(0)=0x13u;
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=0x9u;
  R(2)=R(2)&0xFF;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  ST32(R(15),R(2));
  { uint32_t k=!c->t; {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);} if(k) goto L8c06620a; }
  R(0)=0x8c0bb714u;
  { {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);} goto L8c06620e; }
L8c06620a:;
  R(3)=0x8c0bb998u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
L8c06620e:;
  R(0)=0x1au;
  R(1)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(1)=R(1)&0xFF;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+26);
  R(0)=R(0)&0xFFFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=0x20u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x25u;
  R(3)=R(3)&0xFF;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=0x8c0bb9a4u;
  R(2)=R(2)&0xFF;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c066236u; R(4)=R(13); f_8c06874c(c); }
  R(15)+=0x1cu;
L8c066238:;
  R(0)=R(12);
L8c06623a:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0661ce(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int16_t)LD16(R(15)+30);
  R(0)=R(0)&0xFFFF;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(0)=0x25u;
  R(3)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(0)=0x28u;
  R(3)=R(3)&0xFF;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(3)=0x8c0bb984u;
  R(2)=R(2)&0xFF;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c06874cu;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0661f0u; R(4)=R(13); f_8c06874c(c); }
  { R(15)+=0x20u; goto L8c066238; }
L8c066238:;
  R(0)=R(12);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066280(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=R(6);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(15),R(6)); if(k) goto L8c06629c; }
  R(3)=0x8c0da136u;
  R(6)=R(15);
  { c->pr=0x8c066296u; R(6)+=0x4u; f_8c0da136(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0662a6;
L8c06629c:;
  R(0)=0xffffffffu;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0662a6:;
  R(3)=0x8c0685b4u;
  R(5)=R(15);
  R(6)=0x8u;
  R(5)+=0xeu;
  { c->pr=0x8c0662b2u; R(4)=LD32(R(15)); f_8c0685b4(c); }
  R(0)=R(14);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0662bc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0662c2u;  f_8c065f4c(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c0c75d0u;
  R(2)=0x1u;
  { ST32(R(3),R(2)); return; }
}
void f_8c0662cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0c75d0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c0662ec; }
  R(1)=0x8c0c75dcu;
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0662f0;
L8c0662ec:;
  { R(0)=0x0u; goto L8c066350; }
L8c0662f0:;
  R(4)=0x8c0bb6e8u;
  R(12)=0x8c0d9b70u;
  R(9)=R(4);
  R(9)+=0x20u;
  R(11)=R(4);
  R(14)=0x8c2dcdc4u;
  c->t=R(11)>=R(9);
  { uint32_t k=c->t; R(13)=0x1u; if(k) goto L8c066346; }
L8c066302:;
  { uint32_t tg=R(12); c->pr=0x8c066306u; {uint32_t v=LD32(R(11));R(11)+=4;R(4)=v;} sh4_call(c,tg); }
  R(3)=LD32(R(14)+8);
  R(4)=R(0);
  c->t=R(4)==R(3);
  { uint32_t k=c->t; R(14)+=0x5cu; if(k) goto L8c066312; }
  R(10)=R(13);
L8c066312:;
  { uint32_t tg=R(12); c->pr=0x8c066316u; {uint32_t v=LD32(R(11));R(11)+=4;R(4)=v;} sh4_call(c,tg); }
  R(3)=LD32(R(14)+8);
  R(4)=R(0);
  c->t=R(4)==R(3);
  { uint32_t k=c->t; R(14)+=0x5cu; if(k) goto L8c066322; }
  R(10)=R(13);
L8c066322:;
  { uint32_t tg=R(12); c->pr=0x8c066326u; {uint32_t v=LD32(R(11));R(11)+=4;R(4)=v;} sh4_call(c,tg); }
  R(3)=LD32(R(14)+8);
  R(4)=R(0);
  c->t=R(4)==R(3);
  { uint32_t k=c->t; R(14)+=0x5cu; if(k) goto L8c066332; }
  R(10)=R(13);
L8c066332:;
  { uint32_t tg=R(12); c->pr=0x8c066336u; {uint32_t v=LD32(R(11));R(11)+=4;R(4)=v;} sh4_call(c,tg); }
  R(3)=LD32(R(14)+8);
  R(4)=R(0);
  c->t=R(4)==R(3);
  { uint32_t k=c->t; R(14)+=0x5cu; if(k) goto L8c066342; }
  R(10)=R(13);
L8c066342:;
  c->t=R(11)>=R(9);
  if(!c->t) goto L8c066302;
L8c066346:;
  c->t=(R(10)&R(10))==0;
  if(c->t) goto L8c06634e;
  { c->pr=0x8c06634eu;  f_8c065f4c(c); }
L8c06634e:;
  R(0)=R(10);
L8c066350:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066360(SH4Ctx *c) {
  R(2)=0x8c0c75d0u;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c0663a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff8cu;
  R(3)=0x8c0c75dcu;
  ST32(R(15)+8,R(4));
  ST32(R(15)+12,R(5));
  ST32(R(15)+16,R(6));
  ST32(R(15)+4,R(7));
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0663bc;
  {  goto L8c066516; }
L8c0663bc:;
  R(0)=0xa0u;
  R(1)=0x0u;
  R(2)=LD32(R(15)+R(0));
  c->t=R(2)>R(1);
  if(c->t) goto L8c0663ca;
  {  goto L8c066516; }
L8c0663ca:;
  R(0)=0x9cu;
  R(2)=LD32(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0663d6;
  {  goto L8c066516; }
L8c0663d6:;
  R(3)=0x8c0686b8u;
  R(4)=R(15);
  R(6)=0x60u;
  R(5)=0x0u;
  { c->pr=0x8c0663e2u; R(4)+=0x14u; f_8c0686b8(c); }
  R(2)=0x8c09c4d4u;
  R(0)=R(15);
  R(1)=LD32(R(15)+16);
  { c->pr=0x8c0663ecu; R(0)+=0x14u; f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(0)=R(15);
  R(1)=LD32(R(15)+4);
  { c->pr=0x8c0663f6u; R(0)+=0x26u; f_8c09c4d4(c); }
  R(0)=0x80u;
  R(6)=0x10u;
  R(3)=0x8c0685b4u;
  R(4)=R(15);
  R(5)=LD32(R(15)+R(0));
  { c->pr=0x8c066404u; R(4)+=0x48u; f_8c0685b4(c); }
  R(0)=0x84u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x58u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x88u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  ST32(R(15)+R(0),R(3));
  R(0)=0x8cu;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x60u;
  ST16(R(15)+R(0),R(2));
  R(0)=0x90u;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x62u;
  ST16(R(15)+R(0),R(3));
  R(0)=0x94u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x64u;
  ST32(R(15)+R(0),R(2));
  R(0)=0x98u;
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(15)+R(0),R(3));
  R(0)=0x9cu;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x6cu;
  ST32(R(15)+R(0),R(2));
  R(0)=0xa0u;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x70u;
  ST32(R(15)+R(0),R(3));
  R(0)=0x68u;
  R(6)=R(3);
  R(5)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x60u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(3)=0x8c0da71cu;
  R(5)=R(5)&0xFFFF;
  { c->pr=0x8c066456u; R(4)=R(4)&0xFFFF; f_8c0da71c(c); }
  R(13)=0x8c064ed8u;
  { c->pr=0x8c06645cu; R(14)=R(0); f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0664d4;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0664c0;
  R(4)=R(14);
  R(2)=0x8c064e90u;
  R(6)=0x641u;
  R(4)<<=8;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c066476u; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c0664ce; }
L8c0664c0:;
  R(4)=R(14);
  R(1)=0x8c0199c4u;
  R(6)=0x641u;
  R(4)<<=8;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c0664ceu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c0664ce:;
  R(3)=R(0);
  { ST32(R(15),R(3)); goto L8c0664e0; }
L8c0664d4:;
  R(3)=0x8c0d06a2u;
  R(4)=R(14);
  R(4)<<=8;
  { c->pr=0x8c0664deu; c->t=R(4)>>31;R(4)<<=1; f_8c0d06a2(c); }
  ST32(R(15),R(0));
L8c0664e0:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c066516;
  R(3)=0x8c0da524u;
  R(5)=R(15);
  R(5)+=0x14u;
  { c->pr=0x8c0664f0u; R(4)=LD32(R(15)); f_8c0da524(c); }
  R(7)=R(0);
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c066540;
  { uint32_t tg=R(13); c->pr=0x8c0664fau;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06650c;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x645u;
  { c->pr=0x8c066508u; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c066512; }
L8c06650c:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c066512u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c066512:;
  R(2)=0x0u;
  ST32(R(15),R(2));
L8c066516:;
  { R(0)=0xffffffffu; goto L8c06656c; }
L8c066540:;
  R(3)=0x8c06536cu;
  R(5)=LD32(R(15)+12);
  R(6)=LD32(R(15));
  { c->pr=0x8c06654au; R(4)=LD32(R(15)+8); f_8c06536c(c); }
  { uint32_t tg=R(13); c->pr=0x8c06654eu; ST32(R(15)+4,R(0)); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066560;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x64bu;
  { c->pr=0x8c06655cu; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c066566; }
L8c066560:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c066566u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c066566:;
  R(2)=0x0u;
  ST32(R(15),R(2));
  R(0)=LD32(R(15)+4);
L8c06656c:;
  R(15)+=0x74u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066576(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(3)=0x8c064ed8u;
  ST32(R(15)+20,R(4));
  ST32(R(15)+8,R(5));
  ST32(R(15)+16,R(6));
  { c->pr=0x8c066588u; ST32(R(15)+12,R(7)); f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066600;
  R(3)=0x8c0c758cu;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0665a4;
  R(4)=0x400u;
  R(2)=0x8c064e90u;
  R(6)=0x66du;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c0665a0u;  f_8c064e90(c); }
  {  goto L8c0665b0; }
L8c0665a4:;
  R(4)=0x400u;
  R(1)=0x8c0199c4u;
  R(6)=0x66du;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c0665b0u;  f_8c0199c4(c); }
L8c0665b0:;
  R(3)=R(0);
  { ST32(R(15),R(3)); goto L8c06660a; }
L8c066600:;
  R(3)=0x8c0d06a2u;
  R(4)=0x400u;
  { c->pr=0x8c066608u;  f_8c0d06a2(c); }
  ST32(R(15),R(0));
L8c06660a:;
  R(3)=0x8c0c75dcu;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c066618;
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c066622;
L8c066618:;
  R(0)=0xffffffffu;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c066622:;
  R(3)=0x8c09c4d4u;
  R(1)=LD32(R(15)+8);
  { c->pr=0x8c06662au; R(0)=LD32(R(15)); f_8c09c4d4(c); }
  R(14)=0x8c0685b4u;
  R(5)=R(15);
  R(2)=0x20u;
  R(5)+=0x4u;
  ST32(R(15)+4,R(2));
  R(4)=LD32(R(15));
  R(6)=0x4u;
  { c->pr=0x8c06663cu; R(4)+=0x10u; f_8c0685b4(c); }
  R(3)=0xa0u;
  R(5)=R(15);
  R(5)+=0x4u;
  ST32(R(15)+4,R(3));
  R(6)=0x4u;
  R(4)=LD32(R(15));
  { uint32_t tg=R(14); c->pr=0x8c06664cu; R(4)+=0x14u; sh4_call(c,tg); }
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+16);
  R(6)=0x80u;
  { uint32_t tg=R(14); c->pr=0x8c066656u; R(4)+=0x20u; sh4_call(c,tg); }
  R(3)=0xa0u;
  R(6)=0x20u;
  R(4)=LD32(R(15));
  R(5)=LD32(R(15)+12);
  { uint32_t tg=R(14); c->pr=0x8c066662u; R(4)+=R(3); sh4_call(c,tg); }
  R(3)=0xc0u;
  R(4)=LD32(R(15));
  R(6)=0x200u;
  R(5)=LD32(R(15)+32);
  { uint32_t tg=R(14); c->pr=0x8c06666eu; R(4)+=R(3); sh4_call(c,tg); }
  R(5)=0x8c0bb9b8u;
  R(7)=0x2u;
  R(3)=0x8c06536cu;
  R(6)=LD32(R(15));
  { c->pr=0x8c06667au; R(4)=LD32(R(15)+20); f_8c06536c(c); }
  R(3)=0x8c064ed8u;
  { c->pr=0x8c066680u; ST32(R(15)+8,R(0)); f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066692;
  R(3)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x67cu;
  { c->pr=0x8c06668eu; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c066698; }
L8c066692:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c066698u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c066698:;
  R(2)=0x0u;
  ST32(R(15),R(2));
  R(0)=LD32(R(15)+8);
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066700(SH4Ctx *c) {
  R(3)=0x8c0654ceu;
  R(5)=0x8c0bb9b8u;
  {  { f_8c0654ce(c); return; } }
}
void f_8c066708(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff90u;
  R(3)=0x8c0c75dcu;
  R(14)=R(4);
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(8)=R(7); if(k) goto L8c06672e; }
  {  goto L8c0668c6; }
L8c06672e:;
  R(1)=LD32(R(15)+8);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c066738;
  {  goto L8c0668c6; }
L8c066738:;
  R(3)=0x8c0da1f8u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c066740u; R(4)=R(14); f_8c0da1f8(c); }
  R(13)=R(0);
  c->t=(int32_t)R(13)>0;
  if(c->t) goto L8c06674a;
  {  goto L8c0668c6; }
L8c06674a:;
  R(9)=0x8c064ed8u;
  { c->pr=0x8c066750u;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0667e0;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c06676e;
  R(4)=R(13);
  R(3)=0x8c064e90u;
  R(6)=0x6a7u;
  R(4)<<=8;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c06676au; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c06677c; }
L8c06676e:;
  R(4)=R(13);
  R(1)=0x8c0199c4u;
  R(6)=0x6a7u;
  R(4)<<=8;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c06677cu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c06677c:;
  R(2)=R(0);
  { ST32(R(15),R(2)); goto L8c0667ec; }
L8c0667e0:;
  R(2)=0x8c0d06a2u;
  R(4)=R(13);
  R(4)<<=8;
  { c->pr=0x8c0667eau; c->t=R(4)>>31;R(4)<<=1; f_8c0d06a2(c); }
  ST32(R(15),R(0));
L8c0667ec:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0668c6;
  R(3)=0x8c065166u;
  { c->pr=0x8c0667f8u; R(4)=R(14); f_8c065166(c); }
  R(5)=LD32(R(15)+4);
  R(7)=R(13);
  R(3)=0x8c0da28cu;
  R(6)=LD32(R(15));
  { c->pr=0x8c066804u; R(4)=R(14); f_8c0da28c(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c06680au; R(4)=R(14); f_8c065166(c); }
  R(3)=0x8c0da182u;
  { c->pr=0x8c066810u; R(4)=R(14); f_8c0da182(c); }
  ST32(R(15)+4,R(0));
  { c->pr=0x8c066816u; R(4)=R(0); f_8c0659e0(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c06681cu; R(4)=R(14); f_8c065166(c); }
  R(3)=LD32(R(15)+4);
  R(14)=0x8c0bb708u;
  R(12)=0x8c064eb8u;
  c->t=(R(3)&R(3))==0;
  R(13)=0x8c0d0770u;
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c066846; }
  { uint32_t tg=R(9); c->pr=0x8c06682eu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06683e;
  R(6)=0x6b2u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c06683au; R(4)=R(15); sh4_call(c,tg); }
  {  goto L8c066842; }
L8c06683e:;
  { uint32_t tg=R(13); c->pr=0x8c066842u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c066842:;
  { ST32(R(15),R(10)); goto L8c0668c6; }
L8c066846:;
  R(3)=0x8c0da770u;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c066850u; R(4)+=0x10u; f_8c0da770(c); }
  R(11)=R(0);
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0668ca;
  { uint32_t tg=R(9); c->pr=0x8c06685au;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0668c0;
  R(6)=0x6b8u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c066866u; R(4)=R(15); sh4_call(c,tg); }
  {  goto L8c0668c4; }
L8c0668c0:;
  { uint32_t tg=R(13); c->pr=0x8c0668c4u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c0668c4:;
  ST32(R(15),R(10));
L8c0668c6:;
  { R(0)=0xffffffffu; goto L8c066912; }
L8c0668ca:;
  R(3)=0x8c065208u;
  R(4)=R(15);
  { c->pr=0x8c0668d2u; R(4)+=0x10u; f_8c065208(c); }
  ST32(R(15)+4,R(0));
  R(0)=0x6cu;
  R(4)=LD32(R(15)+R(0));
  c->t=R(8)>=R(4);
  if(c->t) goto L8c0668e4;
  c->t=(R(8)&R(8))==0;
  if(c->t) goto L8c0668e4;
  { R(3)=R(8); goto L8c0668e6; }
L8c0668e4:;
  R(3)=R(4);
L8c0668e6:;
  R(6)=R(3);
  ST32(R(15)+12,R(3));
  R(2)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(5)+=R(2);
  R(2)=0x8c0685b4u;
  { c->pr=0x8c0668f6u; R(4)=LD32(R(15)+8); f_8c0685b4(c); }
  { uint32_t tg=R(9); c->pr=0x8c0668fau;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06690a;
  R(6)=0x6c4u;
  R(5)=R(14);
  { uint32_t tg=R(12); c->pr=0x8c066906u; R(4)=R(15); sh4_call(c,tg); }
  {  goto L8c06690e; }
L8c06690a:;
  { uint32_t tg=R(13); c->pr=0x8c06690eu; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c06690e:;
  R(0)=R(11);
  ST32(R(15),R(10));
L8c066912:;
  R(15)+=0x70u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066960(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff98u;
  R(3)=0x8c0c75dcu;
  R(13)=R(4);
  ST32(R(15)+4,R(5));
  R(10)=R(6);
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(11)=R(7); if(k) goto L8c066986; }
  {  goto L8c066b86; }
L8c066986:;
  R(3)=0x8c0da1f8u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c06698eu; R(4)=R(13); f_8c0da1f8(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>0;
  if(c->t) goto L8c066998;
  {  goto L8c066b86; }
L8c066998:;
  R(14)=0x8c064ed8u;
  { c->pr=0x8c06699eu;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066a00;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0669bc;
  R(4)=R(12);
  R(3)=0x8c064e90u;
  R(6)=0x6e8u;
  R(4)<<=8;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c0669b8u; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c0669ca; }
L8c0669bc:;
  R(4)=R(12);
  R(1)=0x8c0199c4u;
  R(6)=0x6e8u;
  R(4)<<=8;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c0669cau; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c0669ca:;
  R(2)=R(0);
  { ST32(R(15),R(2)); goto L8c066a0c; }
L8c066a00:;
  R(2)=0x8c0d06a2u;
  R(4)=R(12);
  R(4)<<=8;
  { c->pr=0x8c066a0au; c->t=R(4)>>31;R(4)<<=1; f_8c0d06a2(c); }
  ST32(R(15),R(0));
L8c066a0c:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c066a16;
  {  goto L8c066b86; }
L8c066a16:;
  R(3)=0x8c065166u;
  { c->pr=0x8c066a1cu; R(4)=R(13); f_8c065166(c); }
  R(5)=LD32(R(15)+4);
  R(7)=R(12);
  R(3)=0x8c0da28cu;
  R(6)=LD32(R(15));
  { c->pr=0x8c066a28u; R(4)=R(13); f_8c0da28c(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c066a2eu; R(4)=R(13); f_8c065166(c); }
  R(3)=0x8c0da182u;
  { c->pr=0x8c066a34u; R(4)=R(13); f_8c0da182(c); }
  R(3)=0x8c0659e0u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c066a3cu; R(4)=R(0); f_8c0659e0(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c066a42u; R(4)=R(13); f_8c065166(c); }
  R(3)=LD32(R(15)+4);
  R(13)=0x8c0bb708u;
  R(8)=0x8c0d0770u;
  c->t=(R(3)&R(3))==0;
  R(12)=0x8c064eb8u;
  { uint32_t k=c->t; R(9)=0x0u; if(k) goto L8c066a6c; }
  { uint32_t tg=R(14); c->pr=0x8c066a54u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066a64;
  R(6)=0x6f3u;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c066a60u; R(4)=R(15); sh4_call(c,tg); }
  {  goto L8c066a68; }
L8c066a64:;
  { uint32_t tg=R(8); c->pr=0x8c066a68u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c066a68:;
  { ST32(R(15),R(9)); goto L8c066b86; }
L8c066a6c:;
  R(3)=0x8c0da770u;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c066a76u; R(4)+=0x8u; f_8c0da770(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c066ae8; }
  { uint32_t tg=R(14); c->pr=0x8c066a80u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066ae0;
  R(6)=0x6fau;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c066a8cu; R(4)=R(15); sh4_call(c,tg); }
  {  goto L8c066ae4; }
L8c066ae0:;
  { uint32_t tg=R(8); c->pr=0x8c066ae4u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c066ae4:;
  { ST32(R(15),R(9)); goto L8c066b86; }
L8c066ae8:;
  R(3)=0x8c065208u;
  R(4)=R(15);
  { c->pr=0x8c066af0u; R(4)+=0x8u; f_8c065208(c); }
  R(0)=0x64u;
  R(2)=LD32(R(15)+R(0));
  { uint32_t tg=R(14); c->pr=0x8c066af8u; ST32(R(11),R(2)); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066b22;
  R(1)=0x8c0c758cu;
  R(3)=LD32(R(1));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c066b12;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x705u;
  { c->pr=0x8c066b0eu; R(4)=LD32(R(11)); f_8c064e90(c); }
  {  goto L8c066b1c; }
L8c066b12:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x705u;
  { c->pr=0x8c066b1cu; R(4)=LD32(R(11)); f_8c0199c4(c); }
L8c066b1c:;
  R(1)=R(0);
  { ST32(R(10),R(0)); goto L8c066b2a; }
L8c066b22:;
  R(3)=0x8c0d06a2u;
  { c->pr=0x8c066b28u; R(4)=LD32(R(11)); f_8c0d06a2(c); }
  ST32(R(10),R(0));
L8c066b2a:;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c066b8a;
  { uint32_t tg=R(14); c->pr=0x8c066b34u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066b80;
  R(6)=0x707u;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c066b40u; R(4)=R(15); sh4_call(c,tg); }
  {  goto L8c066b84; }
L8c066b80:;
  { uint32_t tg=R(8); c->pr=0x8c066b84u; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c066b84:;
  ST32(R(15),R(9));
L8c066b86:;
  { R(0)=0xffffffffu; goto L8c066bb2; }
L8c066b8a:;
  R(0)=0x60u;
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(15)+R(0));
  R(6)=LD32(R(11));
  { c->pr=0x8c066b96u; R(4)=LD32(R(10)); f_8c0685b4(c); }
  { uint32_t tg=R(14); c->pr=0x8c066b9au;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066baa;
  R(6)=0x70eu;
  R(5)=R(13);
  { uint32_t tg=R(12); c->pr=0x8c066ba6u; R(4)=R(15); sh4_call(c,tg); }
  {  goto L8c066bae; }
L8c066baa:;
  { uint32_t tg=R(8); c->pr=0x8c066baeu; R(4)=LD32(R(15)); sh4_call(c,tg); }
L8c066bae:;
  ST32(R(15),R(9));
  R(0)=LD32(R(15)+4);
L8c066bb2:;
  R(15)+=0x68u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066c00(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffff94u;
  R(0)=0xa0u;
  R(11)=R(4);
  R(3)=0x8c0c75dcu;
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(7));
  R(9)=LD32(R(15)+R(0));
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=c->t; R(8)=R(6); if(k) goto L8c066c2a; }
  {  goto L8c066da8; }
L8c066c2a:;
  R(3)=0x8c0da1f8u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c066c32u; R(4)=R(11); f_8c0da1f8(c); }
  R(10)=R(0);
  c->t=(int32_t)R(10)>0;
  if(c->t) goto L8c066c3c;
  {  goto L8c066da8; }
L8c066c3c:;
  R(14)=0x8c064ed8u;
  R(13)=0x8c0d06a2u;
  R(12)=0x8c0c758cu;
  { c->pr=0x8c066c46u;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066cc0;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c066c62;
  R(4)=R(10);
  R(3)=0x8c064e90u;
  R(6)=0x741u;
  R(4)<<=8;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c066c5eu; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c066c70; }
L8c066c62:;
  R(4)=R(10);
  R(2)=0x8c0199c4u;
  R(6)=0x741u;
  R(4)<<=8;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c066c70u; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c066c70:;
  R(2)=R(0);
  { ST32(R(15),R(2)); goto L8c066cca; }
L8c066cc0:;
  R(4)=R(10);
  R(4)<<=8;
  { uint32_t tg=R(13); c->pr=0x8c066cc8u; c->t=R(4)>>31;R(4)<<=1; sh4_call(c,tg); }
  ST32(R(15),R(0));
L8c066cca:;
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c066da8;
  R(3)=0x8c065166u;
  { c->pr=0x8c066cd6u; R(4)=R(11); f_8c065166(c); }
  R(5)=LD32(R(15)+4);
  R(7)=R(10);
  R(3)=0x8c0da28cu;
  R(6)=LD32(R(15));
  { c->pr=0x8c066ce2u; R(4)=R(11); f_8c0da28c(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c066ce8u; R(4)=R(11); f_8c065166(c); }
  R(3)=0x8c0da182u;
  { c->pr=0x8c066ceeu; R(4)=R(11); f_8c0da182(c); }
  R(3)=0x8c0659e0u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c066cf6u; R(4)=R(0); f_8c0659e0(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c066cfcu; R(4)=R(11); f_8c065166(c); }
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c066d24; }
  { uint32_t tg=R(14); c->pr=0x8c066d08u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066d1a;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x74cu;
  { c->pr=0x8c066d16u; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c066d20; }
L8c066d1a:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c066d20u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c066d20:;
  { ST32(R(15),R(10)); goto L8c066da8; }
L8c066d24:;
  R(3)=0x8c0da770u;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c066d2eu; R(4)+=0xcu; f_8c0da770(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c066dac; }
  { uint32_t tg=R(14); c->pr=0x8c066d38u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066da0;
  R(3)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x753u;
  { c->pr=0x8c066d46u; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c066da6; }
L8c066da0:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c066da6u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c066da6:;
  ST32(R(15),R(10));
L8c066da8:;
  { R(0)=0xffffffffu; goto L8c067268; }
L8c066dac:;
  { uint32_t tg=R(14); c->pr=0x8c066db0u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066de4;
  R(0)=0xa8u;
  R(2)=LD32(R(15)+R(0));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066dd0;
  R(3)=0x8c064e90u;
  R(0)=0x6cu;
  R(5)=0x8c0bb708u;
  R(6)=0x75bu;
  { c->pr=0x8c066dccu; R(4)=LD32(R(15)+R(0)); f_8c064e90(c); }
  {  goto L8c066ddc; }
L8c066dd0:;
  R(3)=0x8c0199c4u;
  R(0)=0x6cu;
  R(5)=0x8c0bb708u;
  R(6)=0x75bu;
  { c->pr=0x8c066ddcu; R(4)=LD32(R(15)+R(0)); f_8c0199c4(c); }
L8c066ddc:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(3)); goto L8c066df4; }
L8c066de4:;
  R(0)=0xa8u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x6cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066df0u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066df4:;
  { uint32_t tg=R(14); c->pr=0x8c066df8u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066e50;
  R(2)=LD32(R(12));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c066e40;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75cu;
  { c->pr=0x8c066e0cu; R(4)=0x12u; f_8c064e90(c); }
  {  goto L8c066e4a; }
L8c066e40:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75cu;
  { c->pr=0x8c066e4au; R(4)=0x12u; f_8c0199c4(c); }
L8c066e4a:;
  R(3)=R(0);
  { ST32(R(8),R(0)); goto L8c066e56; }
L8c066e50:;
  { uint32_t tg=R(13); c->pr=0x8c066e54u; R(4)=0x12u; sh4_call(c,tg); }
  ST32(R(8),R(0));
L8c066e56:;
  { uint32_t tg=R(14); c->pr=0x8c066e5au;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066ec0;
  R(2)=LD32(R(15)+8);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066e76;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75du;
  { c->pr=0x8c066e72u; R(4)=0x22u; f_8c064e90(c); }
  {  goto L8c066e80; }
L8c066e76:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75du;
  { c->pr=0x8c066e80u; R(4)=0x22u; f_8c0199c4(c); }
L8c066e80:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(3)); goto L8c066ecc; }
L8c066ec0:;
  R(1)=LD32(R(15)+8);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066ec8u; R(4)=0x22u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066ecc:;
  { uint32_t tg=R(14); c->pr=0x8c066ed0u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066f00;
  R(0)=0x8cu;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066eee;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75eu;
  { c->pr=0x8c066eeau; R(4)=0xdu; f_8c064e90(c); }
  {  goto L8c066ef8; }
L8c066eee:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75eu;
  { c->pr=0x8c066ef8u; R(4)=0xdu; f_8c0199c4(c); }
L8c066ef8:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f0e; }
L8c066f00:;
  R(0)=0x8cu;
  R(1)=LD32(R(15)+R(0));
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066f0au; R(4)=0xdu; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066f0e:;
  { uint32_t tg=R(14); c->pr=0x8c066f12u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066f72;
  R(0)=0x90u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066f60;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f2cu; R(4)=0x20u; f_8c064e90(c); }
  {  goto L8c066f6a; }
L8c066f60:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f6au; R(4)=0x20u; f_8c0199c4(c); }
L8c066f6a:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f80; }
L8c066f72:;
  R(0)=0x90u;
  R(1)=LD32(R(15)+R(0));
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066f7cu; R(4)=0x20u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066f80:;
  { uint32_t tg=R(14); c->pr=0x8c066f84u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067000;
  R(0)=0x94u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066faa;
  R(0)=0x5cu;
  R(3)=0x8c064e90u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fa6u; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c066fbc; }
L8c066faa:;
  R(0)=0x5cu;
  R(3)=0x8c0199c4u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fbcu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c066fbc:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c067016; }
L8c067000:;
  R(0)=0x94u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=R(4)&0xFFFF;
  R(4)<<=8;
  { uint32_t tg=R(13); c->pr=0x8c067012u; c->t=R(4)>>31;R(4)<<=1; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c067016:;
  R(0)=0x60u;
  R(11)=0x8c0685b4u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c067024;
  { ST32(R(9),R(10)); goto L8c0671ca; }
L8c067024:;
  { uint32_t tg=R(14); c->pr=0x8c067028u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c067030;
  {  goto L8c06710e; }
L8c067030:;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0670ac;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06704a;
  R(4)=0x1f80u;
  {  goto L8c0670a2; }
L8c06704a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06705a;
  R(4)=0x11c0u;
  {  goto L8c0670a2; }
L8c06705a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0670a0;
  R(4)=0x800u;
  {  goto L8c0670a2; }
L8c0670a0:;
  R(4)=0x0u;
L8c0670a2:;
  R(2)=0x8c064e90u;
  { c->pr=0x8c0670a8u;  f_8c064e90(c); }
  {  goto L8c067108; }
L8c0670ac:;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0670c0;
  R(4)=0x1f80u;
  {  goto L8c067102; }
L8c0670c0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0670d0;
  R(4)=0x11c0u;
  {  goto L8c067102; }
L8c0670d0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067100;
  R(4)=0x800u;
  {  goto L8c067102; }
L8c067100:;
  R(4)=0x0u;
L8c067102:;
  R(2)=0x8c0199c4u;
  { c->pr=0x8c067108u;  f_8c0199c4(c); }
L8c067108:;
  R(2)=R(0);
  { ST32(R(9),R(0)); goto L8c067168; }
L8c06710e:;
  R(0)=0x60u;
  R(12)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(12)=R(12)&0xFFFF;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c067120;
  R(4)=0x1f80u;
  {  goto L8c067162; }
L8c067120:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06712a;
  R(4)=0x11c0u;
  {  goto L8c067162; }
L8c06712a:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067160;
  R(4)=0x800u;
  {  goto L8c067162; }
L8c067160:;
  R(4)=0x0u;
L8c067162:;
  { uint32_t tg=R(13); c->pr=0x8c067166u;  sh4_call(c,tg); }
  ST32(R(9),R(0));
L8c067168:;
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
L8c0671ca:;
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
L8c067268:;
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066cc0(SH4Ctx *c) {
  R(4)=R(10);
  R(4)<<=8;
  { uint32_t tg=R(13); c->pr=0x8c066cc8u; c->t=R(4)>>31;R(4)<<=1; sh4_call(c,tg); }
  ST32(R(15),R(0));
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c066da8;
  R(3)=0x8c065166u;
  { c->pr=0x8c066cd6u; R(4)=R(11); f_8c065166(c); }
  R(5)=LD32(R(15)+4);
  R(7)=R(10);
  R(3)=0x8c0da28cu;
  R(6)=LD32(R(15));
  { c->pr=0x8c066ce2u; R(4)=R(11); f_8c0da28c(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c066ce8u; R(4)=R(11); f_8c065166(c); }
  R(3)=0x8c0da182u;
  { c->pr=0x8c066ceeu; R(4)=R(11); f_8c0da182(c); }
  R(3)=0x8c0659e0u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c066cf6u; R(4)=R(0); f_8c0659e0(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c066cfcu; R(4)=R(11); f_8c065166(c); }
  R(3)=LD32(R(15)+4);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(10)=0x0u; if(k) goto L8c066d24; }
  { uint32_t tg=R(14); c->pr=0x8c066d08u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066d1a;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x74cu;
  { c->pr=0x8c066d16u; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c066d20; }
L8c066d1a:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c066d20u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c066d20:;
  { ST32(R(15),R(10)); goto L8c066da8; }
L8c066d24:;
  R(3)=0x8c0da770u;
  R(4)=R(15);
  R(5)=LD32(R(15));
  { c->pr=0x8c066d2eu; R(4)+=0xcu; f_8c0da770(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; ST32(R(15)+4,R(0)); if(k) goto L8c066dac; }
  { uint32_t tg=R(14); c->pr=0x8c066d38u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066da0;
  R(3)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x753u;
  { c->pr=0x8c066d46u; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c066da6; }
L8c066da0:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c066da6u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c066da6:;
  ST32(R(15),R(10));
L8c066da8:;
  { R(0)=0xffffffffu; goto L8c067268; }
L8c066dac:;
  { uint32_t tg=R(14); c->pr=0x8c066db0u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066de4;
  R(0)=0xa8u;
  R(2)=LD32(R(15)+R(0));
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066dd0;
  R(3)=0x8c064e90u;
  R(0)=0x6cu;
  R(5)=0x8c0bb708u;
  R(6)=0x75bu;
  { c->pr=0x8c066dccu; R(4)=LD32(R(15)+R(0)); f_8c064e90(c); }
  {  goto L8c066ddc; }
L8c066dd0:;
  R(3)=0x8c0199c4u;
  R(0)=0x6cu;
  R(5)=0x8c0bb708u;
  R(6)=0x75bu;
  { c->pr=0x8c066ddcu; R(4)=LD32(R(15)+R(0)); f_8c0199c4(c); }
L8c066ddc:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(3)); goto L8c066df4; }
L8c066de4:;
  R(0)=0xa8u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x6cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066df0u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066df4:;
  { uint32_t tg=R(14); c->pr=0x8c066df8u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066e50;
  R(2)=LD32(R(12));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c066e40;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75cu;
  { c->pr=0x8c066e0cu; R(4)=0x12u; f_8c064e90(c); }
  {  goto L8c066e4a; }
L8c066e40:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75cu;
  { c->pr=0x8c066e4au; R(4)=0x12u; f_8c0199c4(c); }
L8c066e4a:;
  R(3)=R(0);
  { ST32(R(8),R(0)); goto L8c066e56; }
L8c066e50:;
  { uint32_t tg=R(13); c->pr=0x8c066e54u; R(4)=0x12u; sh4_call(c,tg); }
  ST32(R(8),R(0));
L8c066e56:;
  { uint32_t tg=R(14); c->pr=0x8c066e5au;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066ec0;
  R(2)=LD32(R(15)+8);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066e76;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75du;
  { c->pr=0x8c066e72u; R(4)=0x22u; f_8c064e90(c); }
  {  goto L8c066e80; }
L8c066e76:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75du;
  { c->pr=0x8c066e80u; R(4)=0x22u; f_8c0199c4(c); }
L8c066e80:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(3)); goto L8c066ecc; }
L8c066ec0:;
  R(1)=LD32(R(15)+8);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066ec8u; R(4)=0x22u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066ecc:;
  { uint32_t tg=R(14); c->pr=0x8c066ed0u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066f00;
  R(0)=0x8cu;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066eee;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75eu;
  { c->pr=0x8c066eeau; R(4)=0xdu; f_8c064e90(c); }
  {  goto L8c066ef8; }
L8c066eee:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75eu;
  { c->pr=0x8c066ef8u; R(4)=0xdu; f_8c0199c4(c); }
L8c066ef8:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f0e; }
L8c066f00:;
  R(0)=0x8cu;
  R(1)=LD32(R(15)+R(0));
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066f0au; R(4)=0xdu; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066f0e:;
  { uint32_t tg=R(14); c->pr=0x8c066f12u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066f72;
  R(0)=0x90u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066f60;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f2cu; R(4)=0x20u; f_8c064e90(c); }
  {  goto L8c066f6a; }
L8c066f60:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f6au; R(4)=0x20u; f_8c0199c4(c); }
L8c066f6a:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f80; }
L8c066f72:;
  R(0)=0x90u;
  R(1)=LD32(R(15)+R(0));
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066f7cu; R(4)=0x20u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066f80:;
  { uint32_t tg=R(14); c->pr=0x8c066f84u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067000;
  R(0)=0x94u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066faa;
  R(0)=0x5cu;
  R(3)=0x8c064e90u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fa6u; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c066fbc; }
L8c066faa:;
  R(0)=0x5cu;
  R(3)=0x8c0199c4u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fbcu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c066fbc:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c067016; }
L8c067000:;
  R(0)=0x94u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=R(4)&0xFFFF;
  R(4)<<=8;
  { uint32_t tg=R(13); c->pr=0x8c067012u; c->t=R(4)>>31;R(4)<<=1; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c067016:;
  R(0)=0x60u;
  R(11)=0x8c0685b4u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c067024;
  { ST32(R(9),R(10)); goto L8c0671ca; }
L8c067024:;
  { uint32_t tg=R(14); c->pr=0x8c067028u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c067030;
  {  goto L8c06710e; }
L8c067030:;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0670ac;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06704a;
  R(4)=0x1f80u;
  {  goto L8c0670a2; }
L8c06704a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06705a;
  R(4)=0x11c0u;
  {  goto L8c0670a2; }
L8c06705a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0670a0;
  R(4)=0x800u;
  {  goto L8c0670a2; }
L8c0670a0:;
  R(4)=0x0u;
L8c0670a2:;
  R(2)=0x8c064e90u;
  { c->pr=0x8c0670a8u;  f_8c064e90(c); }
  {  goto L8c067108; }
L8c0670ac:;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0670c0;
  R(4)=0x1f80u;
  {  goto L8c067102; }
L8c0670c0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0670d0;
  R(4)=0x11c0u;
  {  goto L8c067102; }
L8c0670d0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067100;
  R(4)=0x800u;
  {  goto L8c067102; }
L8c067100:;
  R(4)=0x0u;
L8c067102:;
  R(2)=0x8c0199c4u;
  { c->pr=0x8c067108u;  f_8c0199c4(c); }
L8c067108:;
  R(2)=R(0);
  { ST32(R(9),R(0)); goto L8c067168; }
L8c06710e:;
  R(0)=0x60u;
  R(12)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(12)=R(12)&0xFFFF;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c067120;
  R(4)=0x1f80u;
  {  goto L8c067162; }
L8c067120:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06712a;
  R(4)=0x11c0u;
  {  goto L8c067162; }
L8c06712a:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067160;
  R(4)=0x800u;
  {  goto L8c067162; }
L8c067160:;
  R(4)=0x0u;
L8c067162:;
  { uint32_t tg=R(13); c->pr=0x8c067166u;  sh4_call(c,tg); }
  ST32(R(9),R(0));
L8c067168:;
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
L8c0671ca:;
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
L8c067268:;
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066da0(SH4Ctx *c) {
  R(3)=0x8c0d0770u;
  { c->pr=0x8c066da6u; R(4)=LD32(R(15)); f_8c0d0770(c); }
  ST32(R(15),R(10));
  { R(0)=0xffffffffu; goto L8c067268; }
L8c067268:;
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066e40(SH4Ctx *c) {
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75cu;
  { c->pr=0x8c066e4au; R(4)=0x12u; f_8c0199c4(c); }
  R(3)=R(0);
  { ST32(R(8),R(0)); goto L8c066e56; }
L8c066e56:;
  { uint32_t tg=R(14); c->pr=0x8c066e5au;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066ec0;
  R(2)=LD32(R(15)+8);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066e76;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75du;
  { c->pr=0x8c066e72u; R(4)=0x22u; f_8c064e90(c); }
  {  goto L8c066e80; }
L8c066e76:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75du;
  { c->pr=0x8c066e80u; R(4)=0x22u; f_8c0199c4(c); }
L8c066e80:;
  R(3)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(3)); goto L8c066ecc; }
L8c066ec0:;
  R(1)=LD32(R(15)+8);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066ec8u; R(4)=0x22u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066ecc:;
  { uint32_t tg=R(14); c->pr=0x8c066ed0u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066f00;
  R(0)=0x8cu;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066eee;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75eu;
  { c->pr=0x8c066eeau; R(4)=0xdu; f_8c064e90(c); }
  {  goto L8c066ef8; }
L8c066eee:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75eu;
  { c->pr=0x8c066ef8u; R(4)=0xdu; f_8c0199c4(c); }
L8c066ef8:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f0e; }
L8c066f00:;
  R(0)=0x8cu;
  R(1)=LD32(R(15)+R(0));
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066f0au; R(4)=0xdu; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066f0e:;
  { uint32_t tg=R(14); c->pr=0x8c066f12u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066f72;
  R(0)=0x90u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066f60;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f2cu; R(4)=0x20u; f_8c064e90(c); }
  {  goto L8c066f6a; }
L8c066f60:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f6au; R(4)=0x20u; f_8c0199c4(c); }
L8c066f6a:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f80; }
L8c066f72:;
  R(0)=0x90u;
  R(1)=LD32(R(15)+R(0));
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066f7cu; R(4)=0x20u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066f80:;
  { uint32_t tg=R(14); c->pr=0x8c066f84u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067000;
  R(0)=0x94u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066faa;
  R(0)=0x5cu;
  R(3)=0x8c064e90u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fa6u; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c066fbc; }
L8c066faa:;
  R(0)=0x5cu;
  R(3)=0x8c0199c4u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fbcu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c066fbc:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c067016; }
L8c067000:;
  R(0)=0x94u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=R(4)&0xFFFF;
  R(4)<<=8;
  { uint32_t tg=R(13); c->pr=0x8c067012u; c->t=R(4)>>31;R(4)<<=1; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c067016:;
  R(0)=0x60u;
  R(11)=0x8c0685b4u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c067024;
  { ST32(R(9),R(10)); goto L8c0671ca; }
L8c067024:;
  { uint32_t tg=R(14); c->pr=0x8c067028u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c067030;
  {  goto L8c06710e; }
L8c067030:;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0670ac;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06704a;
  R(4)=0x1f80u;
  {  goto L8c0670a2; }
L8c06704a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06705a;
  R(4)=0x11c0u;
  {  goto L8c0670a2; }
L8c06705a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0670a0;
  R(4)=0x800u;
  {  goto L8c0670a2; }
L8c0670a0:;
  R(4)=0x0u;
L8c0670a2:;
  R(2)=0x8c064e90u;
  { c->pr=0x8c0670a8u;  f_8c064e90(c); }
  {  goto L8c067108; }
L8c0670ac:;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0670c0;
  R(4)=0x1f80u;
  {  goto L8c067102; }
L8c0670c0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0670d0;
  R(4)=0x11c0u;
  {  goto L8c067102; }
L8c0670d0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067100;
  R(4)=0x800u;
  {  goto L8c067102; }
L8c067100:;
  R(4)=0x0u;
L8c067102:;
  R(2)=0x8c0199c4u;
  { c->pr=0x8c067108u;  f_8c0199c4(c); }
L8c067108:;
  R(2)=R(0);
  { ST32(R(9),R(0)); goto L8c067168; }
L8c06710e:;
  R(0)=0x60u;
  R(12)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(12)=R(12)&0xFFFF;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c067120;
  R(4)=0x1f80u;
  {  goto L8c067162; }
L8c067120:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06712a;
  R(4)=0x11c0u;
  {  goto L8c067162; }
L8c06712a:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067160;
  R(4)=0x800u;
  {  goto L8c067162; }
L8c067160:;
  R(4)=0x0u;
L8c067162:;
  { uint32_t tg=R(13); c->pr=0x8c067166u;  sh4_call(c,tg); }
  ST32(R(9),R(0));
L8c067168:;
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
L8c0671ca:;
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066ec0(SH4Ctx *c) {
  R(1)=LD32(R(15)+8);
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066ec8u; R(4)=0x22u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
  { uint32_t tg=R(14); c->pr=0x8c066ed0u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066f00;
  R(0)=0x8cu;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066eee;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75eu;
  { c->pr=0x8c066eeau; R(4)=0xdu; f_8c064e90(c); }
  {  goto L8c066ef8; }
L8c066eee:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75eu;
  { c->pr=0x8c066ef8u; R(4)=0xdu; f_8c0199c4(c); }
L8c066ef8:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f0e; }
L8c066f00:;
  R(0)=0x8cu;
  R(1)=LD32(R(15)+R(0));
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066f0au; R(4)=0xdu; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066f0e:;
  { uint32_t tg=R(14); c->pr=0x8c066f12u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c066f72;
  R(0)=0x90u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066f60;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f2cu; R(4)=0x20u; f_8c064e90(c); }
  {  goto L8c066f6a; }
L8c066f60:;
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f6au; R(4)=0x20u; f_8c0199c4(c); }
L8c066f6a:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f80; }
L8c066f72:;
  R(0)=0x90u;
  R(1)=LD32(R(15)+R(0));
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c066f7cu; R(4)=0x20u; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c066f80:;
  { uint32_t tg=R(14); c->pr=0x8c066f84u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067000;
  R(0)=0x94u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066faa;
  R(0)=0x5cu;
  R(3)=0x8c064e90u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fa6u; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c066fbc; }
L8c066faa:;
  R(0)=0x5cu;
  R(3)=0x8c0199c4u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fbcu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c066fbc:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c067016; }
L8c067000:;
  R(0)=0x94u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=R(4)&0xFFFF;
  R(4)<<=8;
  { uint32_t tg=R(13); c->pr=0x8c067012u; c->t=R(4)>>31;R(4)<<=1; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c067016:;
  R(0)=0x60u;
  R(11)=0x8c0685b4u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c067024;
  { ST32(R(9),R(10)); goto L8c0671ca; }
L8c067024:;
  { uint32_t tg=R(14); c->pr=0x8c067028u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c067030;
  {  goto L8c06710e; }
L8c067030:;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0670ac;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06704a;
  R(4)=0x1f80u;
  {  goto L8c0670a2; }
L8c06704a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06705a;
  R(4)=0x11c0u;
  {  goto L8c0670a2; }
L8c06705a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0670a0;
  R(4)=0x800u;
  {  goto L8c0670a2; }
L8c0670a0:;
  R(4)=0x0u;
L8c0670a2:;
  R(2)=0x8c064e90u;
  { c->pr=0x8c0670a8u;  f_8c064e90(c); }
  {  goto L8c067108; }
L8c0670ac:;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0670c0;
  R(4)=0x1f80u;
  {  goto L8c067102; }
L8c0670c0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0670d0;
  R(4)=0x11c0u;
  {  goto L8c067102; }
L8c0670d0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067100;
  R(4)=0x800u;
  {  goto L8c067102; }
L8c067100:;
  R(4)=0x0u;
L8c067102:;
  R(2)=0x8c0199c4u;
  { c->pr=0x8c067108u;  f_8c0199c4(c); }
L8c067108:;
  R(2)=R(0);
  { ST32(R(9),R(0)); goto L8c067168; }
L8c06710e:;
  R(0)=0x60u;
  R(12)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(12)=R(12)&0xFFFF;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c067120;
  R(4)=0x1f80u;
  {  goto L8c067162; }
L8c067120:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06712a;
  R(4)=0x11c0u;
  {  goto L8c067162; }
L8c06712a:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067160;
  R(4)=0x800u;
  {  goto L8c067162; }
L8c067160:;
  R(4)=0x0u;
L8c067162:;
  { uint32_t tg=R(13); c->pr=0x8c067166u;  sh4_call(c,tg); }
  ST32(R(9),R(0));
L8c067168:;
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
L8c0671ca:;
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c066f60(SH4Ctx *c) {
  R(2)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x75fu;
  { c->pr=0x8c066f6au; R(4)=0x20u; f_8c0199c4(c); }
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c066f80; }
L8c066f80:;
  { uint32_t tg=R(14); c->pr=0x8c066f84u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067000;
  R(0)=0x94u;
  R(3)=LD32(R(15)+R(0));
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(12));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c066faa;
  R(0)=0x5cu;
  R(3)=0x8c064e90u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fa6u; c->t=R(4)>>31;R(4)<<=1; f_8c064e90(c); }
  {  goto L8c066fbc; }
L8c066faa:;
  R(0)=0x5cu;
  R(3)=0x8c0199c4u;
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(5)=0x8c0bb708u;
  R(4)=R(4)&0xFFFF;
  R(6)=0x760u;
  R(4)<<=8;
  { c->pr=0x8c066fbcu; c->t=R(4)>>31;R(4)<<=1; f_8c0199c4(c); }
L8c066fbc:;
  R(2)=R(0);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  { ST32(R(0),R(2)); goto L8c067016; }
L8c067000:;
  R(0)=0x94u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=R(4)&0xFFFF;
  R(4)<<=8;
  { uint32_t tg=R(13); c->pr=0x8c067012u; c->t=R(4)>>31;R(4)<<=1; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
L8c067016:;
  R(0)=0x60u;
  R(11)=0x8c0685b4u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c067024;
  { ST32(R(9),R(10)); goto L8c0671ca; }
L8c067024:;
  { uint32_t tg=R(14); c->pr=0x8c067028u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c067030;
  {  goto L8c06710e; }
L8c067030:;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0670ac;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06704a;
  R(4)=0x1f80u;
  {  goto L8c0670a2; }
L8c06704a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06705a;
  R(4)=0x11c0u;
  {  goto L8c0670a2; }
L8c06705a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0670a0;
  R(4)=0x800u;
  {  goto L8c0670a2; }
L8c0670a0:;
  R(4)=0x0u;
L8c0670a2:;
  R(2)=0x8c064e90u;
  { c->pr=0x8c0670a8u;  f_8c064e90(c); }
  {  goto L8c067108; }
L8c0670ac:;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0670c0;
  R(4)=0x1f80u;
  {  goto L8c067102; }
L8c0670c0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0670d0;
  R(4)=0x11c0u;
  {  goto L8c067102; }
L8c0670d0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067100;
  R(4)=0x800u;
  {  goto L8c067102; }
L8c067100:;
  R(4)=0x0u;
L8c067102:;
  R(2)=0x8c0199c4u;
  { c->pr=0x8c067108u;  f_8c0199c4(c); }
L8c067108:;
  R(2)=R(0);
  { ST32(R(9),R(0)); goto L8c067168; }
L8c06710e:;
  R(0)=0x60u;
  R(12)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(12)=R(12)&0xFFFF;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c067120;
  R(4)=0x1f80u;
  {  goto L8c067162; }
L8c067120:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06712a;
  R(4)=0x11c0u;
  {  goto L8c067162; }
L8c06712a:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067160;
  R(4)=0x800u;
  {  goto L8c067162; }
L8c067160:;
  R(4)=0x0u;
L8c067162:;
  { uint32_t tg=R(13); c->pr=0x8c067166u;  sh4_call(c,tg); }
  ST32(R(9),R(0));
L8c067168:;
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
L8c0671ca:;
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c067000(SH4Ctx *c) {
  R(0)=0x94u;
  R(1)=LD32(R(15)+R(0));
  R(0)=0x5cu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(4)=R(4)&0xFFFF;
  R(4)<<=8;
  { uint32_t tg=R(13); c->pr=0x8c067012u; c->t=R(4)>>31;R(4)<<=1; sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  ST32(R(3),R(0));
  R(0)=0x60u;
  R(11)=0x8c0685b4u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c067024;
  { ST32(R(9),R(10)); goto L8c0671ca; }
L8c067024:;
  { uint32_t tg=R(14); c->pr=0x8c067028u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c067030;
  {  goto L8c06710e; }
L8c067030:;
  R(3)=LD32(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0670ac;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06704a;
  R(4)=0x1f80u;
  {  goto L8c0670a2; }
L8c06704a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06705a;
  R(4)=0x11c0u;
  {  goto L8c0670a2; }
L8c06705a:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0670a0;
  R(4)=0x800u;
  {  goto L8c0670a2; }
L8c0670a0:;
  R(4)=0x0u;
L8c0670a2:;
  R(2)=0x8c064e90u;
  { c->pr=0x8c0670a8u;  f_8c064e90(c); }
  {  goto L8c067108; }
L8c0670ac:;
  R(0)=0x60u;
  R(5)=0x8c0bb708u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(6)=0x765u;
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0670c0;
  R(4)=0x1f80u;
  {  goto L8c067102; }
L8c0670c0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0670d0;
  R(4)=0x11c0u;
  {  goto L8c067102; }
L8c0670d0:;
  R(0)=0x60u;
  R(0)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=R(0)&0xFFFF;
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067100;
  R(4)=0x800u;
  {  goto L8c067102; }
L8c067100:;
  R(4)=0x0u;
L8c067102:;
  R(2)=0x8c0199c4u;
  { c->pr=0x8c067108u;  f_8c0199c4(c); }
L8c067108:;
  R(2)=R(0);
  { ST32(R(9),R(0)); goto L8c067168; }
L8c06710e:;
  R(0)=0x60u;
  R(12)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(12)=R(12)&0xFFFF;
  R(0)=R(12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c067120;
  R(4)=0x1f80u;
  {  goto L8c067162; }
L8c067120:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c06712a;
  R(4)=0x11c0u;
  {  goto L8c067162; }
L8c06712a:;
  R(0)=R(12);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c067160;
  R(4)=0x800u;
  {  goto L8c067162; }
L8c067160:;
  R(4)=0x0u;
L8c067162:;
  { uint32_t tg=R(13); c->pr=0x8c067166u;  sh4_call(c,tg); }
  ST32(R(9),R(0));
L8c067168:;
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
L8c0671ca:;
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0670a0(SH4Ctx *c) {
  R(4)=0x0u;
  R(2)=0x8c064e90u;
  { c->pr=0x8c0670a8u;  f_8c064e90(c); }
  {  goto L8c067108; }
L8c067108:;
  R(2)=R(0);
  { ST32(R(9),R(0)); goto L8c067168; }
L8c067168:;
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c067100(SH4Ctx *c) {
  R(4)=0x0u;
  R(2)=0x8c0199c4u;
  { c->pr=0x8c067108u;  f_8c0199c4(c); }
  R(2)=R(0);
  { ST32(R(9),R(0)); goto L8c067168; }
L8c067168:;
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c067160(SH4Ctx *c) {
  R(4)=0x0u;
  { uint32_t tg=R(13); c->pr=0x8c067166u;  sh4_call(c,tg); }
  ST32(R(9),R(0));
  R(0)=0x60u;
  R(13)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(13)=R(13)&0xFFFF;
  R(0)=R(13);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06717a;
  R(6)=0x1f80u;
  {  goto L8c0671c2; }
L8c06717a:;
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c067184;
  R(6)=0x11c0u;
  {  goto L8c0671c2; }
L8c067184:;
  R(0)=R(13);
  c->t=(int32_t)R(0)==3;
  if(!c->t) goto L8c0671c0;
  R(6)=0x800u;
  {  goto L8c0671c2; }
L8c0671c0:;
  R(6)=0x0u;
L8c0671c2:;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0671c0(SH4Ctx *c) {
  R(6)=0x0u;
  R(0)=0x5cu;
  R(5)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c0671cau; R(4)=LD32(R(9)); sh4_call(c,tg); }
  R(0)=0xacu;
  R(3)=LD32(R(15)+R(0));
  R(0)=0x68u;
  R(2)=LD32(R(15)+R(0));
  R(0)=0x98u;
  ST32(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x58u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x9cu;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x5au;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0xa4u;
  ST16(R(3),R(2));
  R(3)=LD32(R(15)+R(0));
  R(0)=0x60u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x68u;
  ST16(R(3),R(2));
  R(6)=LD32(R(15)+R(0));
  R(0)=0x64u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0xa8u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067202u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(1)+=0xcu;
  { c->pr=0x8c06720cu; R(0)=LD32(R(8)); f_8c09c4d4(c); }
  R(3)=0x8c09c4d4u;
  R(1)=R(15);
  R(0)=LD32(R(15)+8);
  R(1)+=0x1eu;
  { c->pr=0x8c067218u; R(0)=LD32(R(0)); f_8c09c4d4(c); }
  R(0)=0x8cu;
  R(5)=R(15);
  R(6)=0xdu;
  R(5)+=0x40u;
  { uint32_t tg=R(11); c->pr=0x8c067224u; R(4)=LD32(R(15)+R(0)); sh4_call(c,tg); }
  R(0)=0x50u;
  R(5)=LD32(R(15)+R(0));
  R(6)=0x20u;
  R(0)=0x90u;
  R(4)=LD32(R(15)+R(0));
  { uint32_t tg=R(11); c->pr=0x8c067232u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  R(0)=0x58u;
  R(6)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x54u;
  R(5)=LD32(R(15)+R(0));
  R(0)=0x94u;
  R(6)=R(6)&0xFFFF;
  R(6)<<=8;
  R(4)=LD32(R(15)+R(0));
  c->t=R(6)>>31;R(6)<<=1;
  { uint32_t tg=R(11); c->pr=0x8c067248u; R(4)=LD32(R(4)); sh4_call(c,tg); }
  { uint32_t tg=R(14); c->pr=0x8c06724cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06725e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x77au;
  { c->pr=0x8c06725au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067264; }
L8c06725e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067264u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067264:;
  ST32(R(15),R(10));
  R(0)=LD32(R(15)+4);
  R(15)+=0x6cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0672c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=0x8c064ed8u;
  R(14)=R(4);
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0672d4u; ST32(R(15)+8,R(6)); f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067340;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0672f0;
  R(4)=0x200u;
  R(3)=0x8c064e90u;
  R(6)=0x792u;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c0672ecu;  f_8c064e90(c); }
  {  goto L8c0672fc; }
L8c0672f0:;
  R(4)=0x200u;
  R(1)=0x8c0199c4u;
  R(6)=0x792u;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c0672fcu;  f_8c0199c4(c); }
L8c0672fc:;
  R(2)=R(0);
  { ST32(R(15),R(2)); goto L8c06734a; }
L8c067340:;
  R(2)=0x8c0d06a2u;
  R(4)=0x200u;
  { c->pr=0x8c067348u;  f_8c0d06a2(c); }
  ST32(R(15),R(0));
L8c06734a:;
  R(3)=0x8c0c75dcu;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0673a8;
  R(1)=LD32(R(15));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0673a8;
  R(3)=0x8c065166u;
  { c->pr=0x8c06735eu; R(4)=R(14); f_8c065166(c); }
  R(5)=LD32(R(15)+4);
  R(7)=0x1u;
  R(3)=0x8c0da28cu;
  R(6)=LD32(R(15));
  { c->pr=0x8c06736au; R(4)=R(14); f_8c0da28c(c); }
  R(2)=0x8c065166u;
  { c->pr=0x8c067370u; R(4)=R(14); f_8c065166(c); }
  R(3)=0x8c0da182u;
  { c->pr=0x8c067376u; R(4)=R(14); f_8c0da182(c); }
  R(2)=0x8c0659e0u;
  R(12)=R(0);
  { c->pr=0x8c06737eu; R(4)=R(0); f_8c0659e0(c); }
  R(3)=0x8c065166u;
  { c->pr=0x8c067384u; R(4)=R(14); f_8c065166(c); }
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0673ac;
  { uint32_t tg=R(13); c->pr=0x8c06738cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06739e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x79eu;
  { c->pr=0x8c06739au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c0673a4; }
L8c06739e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c0673a4u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c0673a4:;
  R(2)=0x0u;
  ST32(R(15),R(2));
L8c0673a8:;
  { R(0)=0xffffffffu; goto L8c06742c; }
L8c0673ac:;
  R(3)=0x8c0685b4u;
  R(6)=0x10u;
  R(5)=LD32(R(15));
  { c->pr=0x8c0673b6u; R(4)=LD32(R(15)+8); f_8c0685b4(c); }
  { uint32_t tg=R(13); c->pr=0x8c0673bau;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067420;
  R(3)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x7a4u;
  { c->pr=0x8c0673c8u; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c067426; }
L8c067420:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067426u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c067426:;
  R(2)=0x0u;
  R(0)=R(12);
  ST32(R(15),R(2));
L8c06742c:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c067438(SH4Ctx *c) {
  R(6)=R(5);
  R(5)=0x8c0bb9b8u;
  {  { f_8c0672c0(c); return; } }
}
void f_8c067440(SH4Ctx *c) {
  R(3)=0x8c0c75dcu;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c06744c;
  { R(0)=0xffffffffu; return; }
L8c06744c:;
  R(3)=0x8c0da108u;
  {  { f_8c0da108(c); return; } }
}
void f_8c067480(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(2)=0x8c0c758cu;
  ST32(R(15)+12,R(4));
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  ST32(R(15)+8,R(7));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0674a4;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x7eeu;
  { c->pr=0x8c0674a0u; R(4)=0x38u; f_8c064e90(c); }
  {  goto L8c0674ae; }
L8c0674a4:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x7eeu;
  { c->pr=0x8c0674aeu; R(4)=0x38u; f_8c0199c4(c); }
L8c0674ae:;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c067524;
  R(3)=0x32u;
  ST32(R(14)+4,R(3));
  R(2)=0x0u;
  ST32(R(14),R(2));
  R(0)=0x20u;
  R(3)=LD32(R(15)+12);
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(15));
  ST32(R(14)+12,R(2));
  R(3)=LD32(R(15)+4);
  ST32(R(14)+16,R(3));
  R(2)=LD32(R(15)+8);
  ST32(R(14)+20,R(2));
  R(3)=LD32(R(15)+24);
  ST32(R(14)+24,R(3));
  R(2)=LD32(R(15)+28);
  ST32(R(14)+28,R(2));
  R(3)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x20u;
  ST16(R(14)+R(0),R(3));
  R(0)=0x24u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x22u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x2cu;
  R(3)=LD32(R(15)+40);
  ST32(R(14)+36,R(3));
  R(3)=0x77u;
  R(2)=(int32_t)(int16_t)LD16(R(15)+R(0));
  R(0)=0x28u;
  ST16(R(14)+R(0),R(2));
  R(0)=0x34u;
  R(2)=0x8c0c758cu;
  ST8(R(14)+R(0),R(3));
  R(1)=LD32(R(2));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c06750e;
  R(4)=LD32(R(14)+4);
  R(3)=0x8c064e90u;
  R(6)=0x802u;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c06750au; R(4)+=0x4u; f_8c064e90(c); }
  {  goto L8c06751a; }
L8c06750e:;
  R(4)=LD32(R(14)+4);
  R(1)=0x8c0199c4u;
  R(6)=0x802u;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c06751au; R(4)+=0x4u; f_8c0199c4(c); }
L8c06751a:;
  R(2)=R(0);
  R(1)=R(2);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=!c->t; ST32(R(14)+48,R(0)); if(k) goto L8c067560; }
L8c067524:;
  R(0)=0x0u;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c067560:;
  R(0)=R(14);
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06756a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c05cdf8u;
  { c->pr=0x8c067578u; ST32(R(15)+4,R(4)); f_8c05cdf8(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c067582; }
  {  goto L8c0676a6; }
L8c067582:;
  R(13)=0x8c064ed8u;
  { c->pr=0x8c067588u;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0675e0;
  R(2)=0x8c0c758cu;
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0675a2;
  R(3)=0x8c064e90u;
  R(5)=0x8c0bb708u;
  R(6)=0x81du;
  { c->pr=0x8c06759eu; R(4)=0x38u; f_8c064e90(c); }
  {  goto L8c0675ac; }
L8c0675a2:;
  R(1)=0x8c0199c4u;
  R(5)=0x8c0bb708u;
  R(6)=0x81du;
  { c->pr=0x8c0675acu; R(4)=0x38u; f_8c0199c4(c); }
L8c0675ac:;
  R(2)=R(0);
  { ST32(R(15),R(2)); goto L8c0675e8; }
L8c0675e0:;
  R(2)=0x8c0d06a2u;
  { c->pr=0x8c0675e6u; R(4)=0x38u; f_8c0d06a2(c); }
  ST32(R(15),R(0));
L8c0675e8:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x38u;
  { c->pr=0x8c0675f2u; R(4)=LD32(R(15)); f_8c0686b8(c); }
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0676a6;
  R(2)=LD32(R(15)+4);
  R(0)=0x34u;
  R(3)=LD32(R(15));
  R(4)=R(14);
  R(4)<<=2;
  ST32(R(3)+8,R(2));
  R(2)=0x0u;
  R(3)=LD32(R(15));
  ST32(R(3),R(2));
  R(2)=0x72u;
  R(3)=LD32(R(15));
  ST8(R(3)+R(0),R(2));
  R(5)=LD32(R(15));
  R(6)=LD32(R(15));
  R(7)=LD32(R(15));
  R(3)=0x8c04d4d4u;
  R(6)+=0x30u;
  R(0)=0x8c0bb6e8u;
  R(7)+=0x4u;
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c067624u; R(4)=LD32(R(4)+R(0)); f_8c04d4d4(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c067648;
  { uint32_t tg=R(13); c->pr=0x8c06762cu;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c06763e;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x831u;
  { c->pr=0x8c06763au; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c0676a6; }
L8c06763e:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c067644u; R(4)=LD32(R(15)); f_8c0d0770(c); }
  {  goto L8c0676a6; }
L8c067648:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+48);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0676aa;
  { uint32_t tg=R(13); c->pr=0x8c067654u;  sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0676a0;
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x83eu;
  { c->pr=0x8c067662u; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c0676a6; }
L8c0676a0:;
  R(3)=0x8c0d0770u;
  { c->pr=0x8c0676a6u; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c0676a6:;
  { R(0)=0x0u; goto L8c0676ac; }
L8c0676aa:;
  R(0)=LD32(R(15));
L8c0676ac:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0676b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x34u;
  R(14)=R(7);
  ST32(R(15),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(int32_t)R(0)==114;
  if(c->t) goto L8c06771a;
  c->macl=R(5)*R(6);
  R(2)=LD32(R(14));
  R(3)=LD32(R(14)+4);
  R(13)=c->macl;
  R(2)+=R(13);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c06775a;
  R(1)=LD32(R(14));
  R(4)=0x32u;
  R(3)=0x8c067940u;
  R(1)+=R(13);
  { c->pr=0x8c0676e8u; R(0)=R(4); f_8c067940(c); }
  R(11)=R(0);
  R(2)=0x8c0c758cu;
  R(11)+=0x1u;
  c->macl=R(11)*R(4);
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; R(11)=c->macl; if(k) goto L8c067708; }
  R(3)=0x8c064e90u;
  R(4)=R(11);
  R(5)=0x8c0bb708u;
  R(6)=0x857u;
  { c->pr=0x8c067704u; R(4)+=0x4u; f_8c064e90(c); }
  {  goto L8c067714; }
L8c067708:;
  R(1)=0x8c0199c4u;
  R(4)=R(11);
  R(5)=0x8c0bb708u;
  R(6)=0x857u;
  { c->pr=0x8c067714u; R(4)+=0x4u; f_8c0199c4(c); }
L8c067714:;
  R(12)=R(0);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c067740;
L8c06771a:;
  { R(0)=0x0u; goto L8c067770; }
L8c067740:;
  R(3)=0x8c0685b4u;
  R(5)=LD32(R(14)+48);
  R(6)=LD32(R(14)+4);
  { c->pr=0x8c06774au; R(4)=R(12); f_8c0685b4(c); }
  R(2)=0x8c064eb8u;
  R(4)=R(14);
  R(5)=0x8c0bb708u;
  R(6)=0x85bu;
  { c->pr=0x8c067756u; R(4)+=0x30u; f_8c064eb8(c); }
  ST32(R(14)+48,R(12));
  ST32(R(14)+4,R(11));
L8c06775a:;
  R(4)=LD32(R(14)+48);
  R(6)=R(13);
  R(2)=0x8c0685b4u;
  R(3)=LD32(R(14));
  R(5)=LD32(R(15));
  { c->pr=0x8c067768u; R(4)+=R(3); f_8c0685b4(c); }
  R(3)=LD32(R(14));
  R(0)=0x1u;
  R(3)+=R(13);
  ST32(R(14),R(3));
L8c067770:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c06777e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(7);
  R(0)=0x34u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=(int32_t)(int8_t)LD8(R(14)+R(0));
  c->t=(int32_t)R(0)==119;
  if(c->t) goto L8c06779c;
  c->macl=R(5)*R(6);
  R(2)=LD32(R(14));
  R(3)=LD32(R(14)+4);
  R(13)=c->macl;
  R(2)+=R(13);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  if(!c->t) goto L8c0677a0;
L8c06779c:;
  { R(0)=0x0u; goto L8c0677b4; }
L8c0677a0:;
  R(5)=LD32(R(14)+48);
  R(6)=R(13);
  R(2)=0x8c0685b4u;
  R(3)=LD32(R(14));
  { c->pr=0x8c0677acu; R(5)+=R(3); f_8c0685b4(c); }
  R(3)=LD32(R(14));
  R(0)=0x1u;
  R(3)+=R(13);
  ST32(R(14),R(3));
L8c0677b4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0677e0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c05cdf8u;
  ST32(R(15),R(4));
  { c->pr=0x8c0677f0u; R(14)=0x1u; f_8c05cdf8(c); }
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c0677f8; }
  R(14)=0x0u;
L8c0677f8:;
  R(0)=LD32(R(15));
  R(1)=0x34u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(int32_t)R(0)==119;
  if(!c->t) goto L8c06786c;
  R(0)=R(14);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c06786c;
  R(3)=LD32(R(15));
  R(0)=0x28u;
  R(2)=LD32(R(3));
  R(2)+=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(3)+48);
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+8);
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x22u;
  R(3)=R(3)&0xFFFF;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+12);
  R(3)=LD32(R(2)+36);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+16);
  R(3)=(int32_t)(int16_t)LD16(R(1)+R(0));
  R(0)=0x20u;
  R(3)=R(3)&0xFFFF;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+20);
  R(3)=(int32_t)(int16_t)LD16(R(2)+R(0));
  R(3)=R(3)&0xFFFF;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+24);
  R(3)=LD32(R(2)+28);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(1)=LD32(R(15)+28);
  R(3)=LD32(R(1)+24);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(15)+32);
  R(3)=LD32(R(2)+20);
  R(4)=R(13);
  R(0)=0x8c0bb6e8u;
  R(4)<<=2;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+36);
  R(5)=LD32(R(15)+36);
  R(7)=LD32(R(15)+36);
  R(3)=0x8c04d36cu;
  R(6)=LD32(R(6)+12);
  R(7)=LD32(R(7)+16);
  R(5)=LD32(R(5)+8);
  { c->pr=0x8c067864u; R(4)=LD32(R(4)+R(0)); f_8c04d36c(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(15)+=0x24u; if(k) goto L8c06786c; }
  R(14)=0x0u;
L8c06786c:;
  R(3)=0x8c064ed8u;
  { c->pr=0x8c067872u;  f_8c064ed8(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067890;
  R(4)=LD32(R(15));
  R(3)=0x8c064eb8u;
  R(6)=0x899u;
  R(5)=0x8c0bb708u;
  { c->pr=0x8c067882u; R(4)+=0x30u; f_8c064eb8(c); }
  R(2)=0x8c064eb8u;
  R(5)=0x8c0bb708u;
  R(6)=0x89au;
  { c->pr=0x8c06788cu; R(4)=R(15); f_8c064eb8(c); }
  {  goto L8c06789e; }
L8c067890:;
  R(3)=0x8c0d0770u;
  R(4)=LD32(R(15));
  { c->pr=0x8c067898u; R(4)=LD32(R(4)+48); f_8c0d0770(c); }
  R(3)=0x8c0d0770u;
  { c->pr=0x8c06789eu; R(4)=LD32(R(15)); f_8c0d0770(c); }
L8c06789e:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0678e0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c065ec0u;
  { c->pr=0x8c0678eau; ST32(R(15),R(4)); f_8c065ec0(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0678f8;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
L8c0678f8:;
  R(4)=LD32(R(15));
  R(3)=0x5cu;
  R(2)=0x8c2dcdc4u;
  c->macl=R(4)*R(3);
  R(4)=c->macl;
  R(4)+=R(2);
  R(0)=R(4);
  ST32(R(15),R(4));
  R(0)=LD32(R(0)+4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c067940(SH4Ctx *c) {
  c->t=(R(0)&R(0))==0;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c0679de;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  c->q=R(1)>>31;c->m=R(2)>>31;c->t=c->q^c->m;
  {uint32_t a=R(3),b=R(3),s=a-b,r=s-c->t;c->t=(a<s)|(s<r);R(3)=r;}
  {uint32_t a=R(1),b=R(2),s=a-b,r=s-c->t;c->t=(a<s)|(s<r);R(1)=r;}
  c->q=R(3)>>31;c->m=R(0)>>31;c->t=c->q^c->m;
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  {uint32_t a=R(1),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  R(0)=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
L8c0679de:;
  R(1)=0x8c129ae4u;
  R(2)=0x44eu;
  R(0)=0x0u;
  ST32(R(1),R(2));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
}
void f_8c0679f4(SH4Ctx *c) {
  c->t=(R(0)&R(0))==0;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c067a86;
  R(2)=0x0u;
  c->m=0;c->q=0;c->t=0;
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(2)=sh4_div1(c,R(2),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(0)=R(1);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
L8c067a86:;
  R(2)=0x8c129ae4u;
  R(1)=0x44eu;
  R(0)=0x0u;
  ST32(R(2),R(1));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
}
void f_8c067a9c(SH4Ctx *c) {
  c->t=(R(0)&R(0))==0;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c067b4e;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(2)=0x0u;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  c->q=R(1)>>31;c->m=R(2)>>31;c->t=c->q^c->m;
  R(4)=c->t;
  {uint32_t a=R(3),b=R(3),s=a-b,r=s-c->t;c->t=(a<s)|(s<r);R(3)=r;}
  {uint32_t a=R(1),b=R(2),s=a-b,r=s-c->t;c->t=(a<s)|(s<r);R(1)=r;}
  c->q=R(3)>>31;c->m=R(0)>>31;c->t=c->q^c->m;
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  {uint32_t o=R(1)>>31;R(1)=(R(1)<<1)|c->t;c->t=o;}
  R(3)=sh4_div1(c,R(3),R(0));
  c->q=R(3)>>31;c->m=R(2)>>31;c->t=c->q^c->m;
  R(2)=c->t;
  R(2)^=R(4);
  {uint32_t o=R(2)&1;R(2)=(R(2)>>1)|(c->t<<31);c->t=o;}
  if(!c->t) goto L8c067b42;
  c->q=R(3)>>31;c->m=R(0)>>31;c->t=c->q^c->m;
  c->t=R(3)&1;R(3)=(uint32_t)((int32_t)R(3)>>1);
  R(3)=sh4_div1(c,R(3),R(0));
L8c067b42:;
  R(3)+=R(4);
  R(0)=R(3);
  {uint32_t v=LD32(R(15));R(15)+=4;R(4)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(3)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
L8c067b4e:;
  R(1)=0x8c129ae4u;
  R(2)=0x44eu;
  R(0)=0x0u;
  ST32(R(1),R(2));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(2)=v;} return; }
}
void f_8c067b64(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff30u;
  R(15)+=R(0);
  R(14)=0x94u;
  R(11)=0x0u;
  R(10)=0xc0u;
  R(0)=R(11);
  R(14)+=R(15);
  R(12)=R(7);
  R(10)+=R(15);
  c->t=(R(4)&R(4))==0;
  ST32(R(10),R(11));
  ST32(R(10)+4,R(11));
  ST32(R(10)+8,R(11));
  ST8(R(14),R(11));
  ST8(R(14)+1,R(0));
  ST16(R(14)+2,R(0));
  ST32(R(14)+4,R(0));
  ST32(R(14)+8,R(0));
  ST32(R(14)+16,R(0));
  ST32(R(14)+20,R(0));
  ST32(R(14)+24,R(0));
  ST32(R(14)+28,R(0));
  ST32(R(14)+32,R(0));
  ST32(R(14)+36,R(0));
  { uint32_t k=!c->t; ST32(R(14)+40,R(0)); if(k) goto L8c067bde; }
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c067bb4;
  R(2)=0x8c129ae4u;
  R(3)=0x452u;
  { ST32(R(2),R(3)); goto L8c067bf2; }
L8c067bb4:;
  R(0)=0x10u;
  R(0)=(int32_t)(int8_t)LD8(R(6)+R(0));
  c->t=(R(0)&0x7)==0;
  if(!c->t) goto L8c067bc4;
  R(3)=0x8c129ae4u;
  R(2)=0x514u;
  { ST32(R(3),R(2)); goto L8c067bf2; }
L8c067bc4:;
  R(0)=0x10u;
  R(7)=(int32_t)(int8_t)LD8(R(6)+R(0));
  R(3)=0x4u;
  c->t=(R(3)&R(7))==0;
  if(!c->t) goto L8c067bdc;
  R(1)=0x1u;
  c->t=(R(1)&R(7))==0;
  if(c->t) goto L8c067bdc;
  R(3)=0x8c129ae4u;
  R(2)=0x516u;
  { ST32(R(3),R(2)); goto L8c067bf2; }
L8c067bdc:;
  ST32(R(10)+12,R(5));
L8c067bde:;
  R(0)=0x30u;
  ST32(R(10),R(4));
  ST32(R(10)+4,R(6));
  ST32(R(10)+8,R(11));
  ST8(R(14),R(11));
  ST8(R(15)+8,R(0));
  { c->pr=0x8c067beeu; R(4)=R(10); f_8c068516(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c067bf6;
L8c067bf2:;
  { R(0)=0xffffffffu; goto L8c06828c; }
L8c067bf6:;
  R(9)=R(15);
  R(9)+=0x14u;
  R(8)=0x518u;
  R(3)=R(9);
  ST32(R(15)+16,R(3));
  { R(13)=0x3u; goto L8c06826e; }
L8c067c04:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==37;
  if(c->t) goto L8c067c0e;
  {  goto L8c06824a; }
L8c067c0e:;
  ST8(R(14),R(11));
  R(12)+=0x1u;
  ST32(R(14)+16,R(9));
  ST32(R(14)+20,R(9));
  ST32(R(14)+24,R(11));
  ST32(R(14)+28,R(11));
  ST32(R(14)+32,R(11));
  ST32(R(14)+36,R(11));
  { ST32(R(14)+40,R(11)); goto L8c067c6e; }
L8c067c22:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c067c38;
  c->t=(int32_t)R(0)==43;
  if(c->t) goto L8c067c3e;
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c067c58;
  c->t=(int32_t)R(0)==35;
  if(c->t) goto L8c067c66;
  {  goto L8c067c6c; }
L8c067c38:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  { R(0)|=0x2u; goto L8c067c6a; }
L8c067c3e:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  { R(0)|=0x8u; goto L8c067c6a; }
L8c067c58:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(0)&0x8)==0;
  if(!c->t) goto L8c067c6c;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)|=0x10u;
  { ST8(R(14),R(0)); goto L8c067c6c; }
L8c067c66:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)|=0x4u;
L8c067c6a:;
  ST8(R(14),R(0));
L8c067c6c:;
  R(12)+=0x1u;
L8c067c6e:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==45;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c067c22; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==43;
  if(c->t) goto L8c067c22;
  R(0)=R(4);
  c->t=(int32_t)R(0)==32;
  if(c->t) goto L8c067c22;
  R(0)=R(4);
  c->t=(int32_t)R(0)==35;
  if(c->t) goto L8c067c22;
  R(0)=0x20u;
  ST8(R(14)+1,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c067c98;
  R(0)=0x30u;
  R(12)+=0x1u;
  ST8(R(14)+1,R(0));
L8c067c98:;
  ST32(R(14)+4,R(11));
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c067cf6;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x4u;
  R(3)=R(4);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c067cb4;
  R(0)=0xf0u;
  R(2)=LD32(R(15)+R(0));
  { R(2)+=0x8u; goto L8c067cb6; }
L8c067cb4:;
  R(2)=R(4);
L8c067cb6:;
  R(5)=R(2);
  R(5)+=0xfffffffcu;
  R(1)=R(5);
  R(0)=0xf0u;
  c->t=(R(1)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(2)); if(k) goto L8c067cca; }
  R(3)=R(2);
  { R(3)+=0xfffffff8u; goto L8c067ccc; }
L8c067cca:;
  R(3)=R(5);
L8c067ccc:;
  R(1)=LD32(R(3));
  R(3)=R(1);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; ST32(R(14)+4,R(1)); if(k) goto L8c067ce2; }
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)|=0x2u;
  ST8(R(14),R(0));
  R(3)=LD32(R(14)+4);
  R(3)=0u-R(3);
  ST32(R(14)+4,R(3));
L8c067ce2:;
  R(1)=LD32(R(14)+4);
  R(2)=0x200u;
  c->t=(int32_t)R(1)>(int32_t)R(2);
  { uint32_t k=!c->t; R(12)+=0x1u; if(k) goto L8c067cf6; }
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(1)=0x8c129ae4u;
  R(0)|=0x1u;
  ST8(R(14),R(0));
  ST32(R(1),R(8));
L8c067cf6:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  R(1)=0x8c0bb9c8u;
  R(0)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c067d58;
  { ST32(R(14)+4,R(11)); goto L8c067d4a; }
L8c067d08:;
  R(4)=(int32_t)(int8_t)LD8(R(12));
  R(1)=0x200u;
  R(3)=0x8c067940u;
  R(4)+=0xffffffd0u;
  R(1)-=R(4);
  { c->pr=0x8c067d16u; R(0)=0xau; f_8c067940(c); }
  R(2)=LD32(R(14)+4);
  c->t=(int32_t)R(0)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(12)+=0x1u; if(k) goto L8c067d40; }
  R(1)=LD32(R(14)+4);
  R(3)=R(1);
  R(1)<<=2;
  R(1)+=R(3);
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(4);
  { ST32(R(14)+4,R(1)); goto L8c067d4a; }
L8c067d40:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(3)=0x8c129ae4u;
  R(0)|=0x1u;
  ST8(R(14),R(0));
  ST32(R(3),R(8));
L8c067d4a:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  R(1)=0x8c0bb9c8u;
  R(0)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c067d08;
L8c067d58:;
  R(2)=0xffffffffu;
  ST32(R(14)+8,R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==46;
  if(!c->t) goto L8c067e18;
  R(12)+=0x1u;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==42;
  if(!c->t) goto L8c067db8;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x4u;
  R(3)=R(4);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c067d7e;
  R(0)=0xf0u;
  R(2)=LD32(R(15)+R(0));
  { R(2)+=0x8u; goto L8c067d80; }
L8c067d7e:;
  R(2)=R(4);
L8c067d80:;
  R(5)=R(2);
  R(5)+=0xfffffffcu;
  R(1)=R(5);
  R(0)=0xf0u;
  c->t=(R(1)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(2)); if(k) goto L8c067d94; }
  R(3)=R(2);
  { R(3)+=0xfffffff8u; goto L8c067d96; }
L8c067d94:;
  R(3)=R(5);
L8c067d96:;
  R(1)=LD32(R(3));
  R(3)=R(1);
  c->t=(int32_t)R(3)>=0;
  { uint32_t k=c->t; ST32(R(14)+8,R(1)); if(k) goto L8c067da4; }
  R(1)=0xffffffffu;
  ST32(R(14)+8,R(1));
L8c067da4:;
  R(2)=LD32(R(14)+8);
  R(3)=0x200u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  { uint32_t k=!c->t; R(12)+=0x1u; if(k) goto L8c067db8; }
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(2)=0x8c129ae4u;
  R(0)|=0x1u;
  ST8(R(14),R(0));
  ST32(R(2),R(8));
L8c067db8:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  R(1)=0x8c0bb9c8u;
  R(0)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c067e18;
  { ST32(R(14)+8,R(11)); goto L8c067e0a; }
L8c067dca:;
  R(4)=(int32_t)(int8_t)LD8(R(12));
  R(1)=0x200u;
  R(3)=0x8c067940u;
  R(4)+=0xffffffd0u;
  R(1)-=R(4);
  { c->pr=0x8c067dd8u; R(0)=0xau; f_8c067940(c); }
  R(2)=LD32(R(14)+8);
  c->t=(int32_t)R(0)>=(int32_t)R(2);
  { uint32_t k=!c->t; R(12)+=0x1u; if(k) goto L8c067e00; }
  R(1)=LD32(R(14)+8);
  R(3)=R(1);
  R(1)<<=2;
  R(1)+=R(3);
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(4);
  { ST32(R(14)+8,R(1)); goto L8c067e0a; }
L8c067e00:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(3)=0x8c129ae4u;
  R(0)|=0x1u;
  ST8(R(14),R(0));
  ST32(R(3),R(8));
L8c067e0a:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  R(1)=0x8c0bb9c8u;
  R(0)=R(0)&0xFF;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(!c->t) goto L8c067dca;
L8c067e18:;
  R(2)=0x20u;
  ST32(R(14)+12,R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==104;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c067e30; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==108;
  if(c->t) goto L8c067e30;
  R(0)=R(4);
  c->t=(int32_t)R(0)==76;
  if(!c->t) goto L8c067e34;
L8c067e30:;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(2)=(uint32_t)v;}
  ST32(R(14)+12,R(2));
L8c067e34:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c067ea2;
  c->t=(int32_t)R(0)==105;
  if(c->t) goto L8c067ea2;
  c->t=(int32_t)R(0)==111;
  if(c->t) goto L8c067ea2;
  c->t=(int32_t)R(0)==117;
  if(c->t) goto L8c067ea2;
  c->t=(int32_t)R(0)==120;
  if(c->t) goto L8c067ea2;
  c->t=(int32_t)R(0)==88;
  if(c->t) goto L8c067ea2;
  c->t=(int32_t)R(0)==102;
  if(!c->t) goto L8c067e56;
  {  goto L8c067fe0; }
L8c067e56:;
  c->t=(int32_t)R(0)==101;
  if(!c->t) goto L8c067e5e;
  {  goto L8c067fe0; }
L8c067e5e:;
  c->t=(int32_t)R(0)==69;
  if(!c->t) goto L8c067e66;
  {  goto L8c067fe0; }
L8c067e66:;
  c->t=(int32_t)R(0)==103;
  if(!c->t) goto L8c067e6e;
  {  goto L8c067fe0; }
L8c067e6e:;
  c->t=(int32_t)R(0)==71;
  if(!c->t) goto L8c067e76;
  {  goto L8c067fe0; }
L8c067e76:;
  c->t=(int32_t)R(0)==99;
  if(!c->t) goto L8c067e7e;
  {  goto L8c068002; }
L8c067e7e:;
  c->t=(int32_t)R(0)==115;
  if(!c->t) goto L8c067e86;
  {  goto L8c068034; }
L8c067e86:;
  c->t=(int32_t)R(0)==112;
  if(!c->t) goto L8c067e8e;
  {  goto L8c06808c; }
L8c067e8e:;
  c->t=(int32_t)R(0)==110;
  if(!c->t) goto L8c067e96;
  {  goto L8c0680e8; }
L8c067e96:;
  c->t=(int32_t)R(0)==37;
  if(!c->t) goto L8c067e9e;
  {  goto L8c06811c; }
L8c067e9e:;
  {  goto L8c068134; }
L8c067ea2:;
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==108;
  if(!c->t) goto L8c067edc;
  R(0)=0xf0u;
  R(6)=LD32(R(15)+R(0));
  R(6)+=0x4u;
  R(4)=R(6);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067eba;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x8u;
L8c067eba:;
  R(0)=0xf0u;
  R(5)=R(4);
  R(5)+=0xfffffffcu;
  ST32(R(15)+R(0),R(4));
  R(4)=R(5);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067ece;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0xfffffff8u;
L8c067ece:;
  { R(4)=LD32(R(4)); goto L8c067fc2; }
L8c067edc:;
  c->t=(int32_t)R(0)==104;
  if(!c->t) goto L8c067f52;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==117;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c067efa; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==88;
  if(c->t) goto L8c067efa;
  R(0)=R(4);
  c->t=(int32_t)R(0)==120;
  if(c->t) goto L8c067efa;
  R(0)=R(4);
  c->t=(int32_t)R(0)==111;
  if(!c->t) goto L8c067f26;
L8c067efa:;
  R(0)=0xf0u;
  R(5)=LD32(R(15)+R(0));
  R(5)+=0x4u;
  R(4)=R(5);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067f0c;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x8u;
L8c067f0c:;
  R(0)=0xf0u;
  R(6)=R(4);
  R(6)+=0xfffffffcu;
  ST32(R(15)+R(0),R(4));
  R(4)=R(6);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067f20;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0xfffffff8u;
L8c067f20:;
  R(4)=LD32(R(4));
  { R(4)=R(4)&0xFFFF; goto L8c067fc2; }
L8c067f26:;
  R(0)=0xf0u;
  R(5)=LD32(R(15)+R(0));
  R(5)+=0x4u;
  R(4)=R(5);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067f38;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x8u;
L8c067f38:;
  R(0)=0xf0u;
  R(6)=R(4);
  R(6)+=0xfffffffcu;
  ST32(R(15)+R(0),R(4));
  R(4)=R(6);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067f4c;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0xfffffff8u;
L8c067f4c:;
  R(4)=LD32(R(4));
  { R(4)=(uint32_t)(int32_t)(int16_t)R(4); goto L8c067fc2; }
L8c067f52:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==117;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c067f6c; }
  R(0)=R(4);
  c->t=(int32_t)R(0)==88;
  if(c->t) goto L8c067f6c;
  R(0)=R(4);
  c->t=(int32_t)R(0)==120;
  if(c->t) goto L8c067f6c;
  R(0)=R(4);
  c->t=(int32_t)R(0)==111;
  if(!c->t) goto L8c067f9a;
L8c067f6c:;
  R(0)=0xf0u;
  R(5)=LD32(R(15)+R(0));
  R(5)+=0x4u;
  R(4)=R(5);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067f7e;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x8u;
L8c067f7e:;
  R(0)=0xf0u;
  R(6)=R(4);
  R(6)+=0xfffffffcu;
  ST32(R(15)+R(0),R(4));
  R(4)=R(6);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067fc0;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  { R(4)+=0xfffffff8u; goto L8c067fc0; }
L8c067f9a:;
  R(0)=0xf0u;
  R(5)=LD32(R(15)+R(0));
  R(5)+=0x4u;
  R(4)=R(5);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067fac;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x8u;
L8c067fac:;
  R(0)=0xf0u;
  R(6)=R(4);
  R(6)+=0xfffffffcu;
  ST32(R(15)+R(0),R(4));
  R(4)=R(6);
  c->t=(R(4)&R(13))==0;
  if(c->t) goto L8c067fc0;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0xfffffff8u;
L8c067fc0:;
  R(4)=LD32(R(4));
L8c067fc2:;
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(7)=R(14); if(k) goto L8c067fce; }
  R(3)=0x1u;
  ST32(R(14)+8,R(3));
L8c067fce:;
  R(6)=(int32_t)(int8_t)LD8(R(12));
  { c->pr=0x8c067fd4u; R(5)=R(9); f_8c0682a4(c); }
  R(3)=0x8c019e40u;
  ST32(R(15)+4,R(9));
  { c->pr=0x8c067fdcu; R(4)=R(9); f_8c019e40(c); }
  {  goto L8c0680e4; }
L8c067fe0:;
  R(4)=0xf0u;
  R(7)=R(14);
  R(6)=(int32_t)(int8_t)LD8(R(12));
  R(5)=R(9);
  R(2)=0x8c09c7bcu;
  { c->pr=0x8c067feeu; R(4)+=R(15); f_8c09c7bc(c); }
  R(4)=c->fpscr;
  R(3)=0xfff7ffffu;
  R(2)=0x8c019e40u;
  R(4)&=R(3);
  ST32(R(15)+4,R(9));
  sh4_setfpscr(c,R(4));
  { c->pr=0x8c067ffeu; R(4)=R(9); f_8c019e40(c); }
  {  goto L8c0680e4; }
L8c068002:;
  R(0)=0xf0u;
  R(2)=LD32(R(15)+16);
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x4u;
  R(3)=R(4);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c068016;
  R(0)=0xf0u;
  R(3)=LD32(R(15)+R(0));
  R(3)+=0x8u;
L8c068016:;
  R(0)=0xf0u;
  R(5)=R(3);
  R(5)+=0xfffffffcu;
  ST32(R(15)+R(0),R(3));
  R(0)=R(5);
  c->t=(R(0)&R(13))==0;
  if(c->t) goto L8c06802a;
  R(1)=R(3);
  { R(1)+=0xfffffff8u; goto L8c06802c; }
L8c06802a:;
  R(1)=R(5);
L8c06802c:;
  R(0)=LD32(R(1));
  ST8(R(2),R(0));
  {  goto L8c068122; }
L8c068034:;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x4u;
  R(3)=R(4);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c068048;
  R(0)=0xf0u;
  R(1)=LD32(R(15)+R(0));
  { R(1)+=0x8u; goto L8c06804a; }
L8c068048:;
  R(1)=R(4);
L8c06804a:;
  R(5)=R(1);
  R(5)+=0xfffffffcu;
  R(2)=R(5);
  R(0)=0xf0u;
  c->t=(R(2)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(1)); if(k) goto L8c06805e; }
  R(3)=R(1);
  { R(3)+=0xfffffff8u; goto L8c068060; }
L8c06805e:;
  R(3)=R(5);
L8c068060:;
  R(1)=LD32(R(3));
  R(3)=0x8c019e40u;
  ST32(R(15)+4,R(1));
  { c->pr=0x8c06806au; R(4)=R(1); f_8c019e40(c); }
  ST32(R(15)+12,R(0));
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c06807e; }
  R(2)=LD32(R(15)+12);
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(c->t) goto L8c06807e;
  R(1)=LD32(R(14)+8);
  ST32(R(15)+12,R(1));
L8c06807e:;
  ST32(R(14)+20,R(9));
  ST32(R(14)+32,R(11));
  R(3)=LD32(R(15)+12);
  R(2)=LD32(R(14)+4);
  R(2)-=R(3);
  { ST32(R(14)+40,R(2)); goto L8c06813e; }
L8c06808c:;
  R(0)=0xf0u;
  R(5)=LD32(R(15)+R(0));
  R(5)+=0x4u;
  R(3)=R(5);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0680b0;
  R(0)=0xf0u;
  R(1)=LD32(R(15)+R(0));
  { R(1)+=0x8u; goto L8c0680b2; }
L8c0680b0:;
  R(1)=R(5);
L8c0680b2:;
  R(4)=R(1);
  R(4)+=0xfffffffcu;
  R(2)=R(4);
  R(0)=0xf0u;
  c->t=(R(2)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(1)); if(k) goto L8c0680c6; }
  R(3)=R(1);
  { R(3)+=0xfffffff8u; goto L8c0680c8; }
L8c0680c6:;
  R(3)=R(4);
L8c0680c8:;
  R(0)=LD32(R(14)+8);
  R(4)=LD32(R(3));
  c->t=(int32_t)R(0)==-1;
  { uint32_t k=!c->t; R(7)=R(14); if(k) goto L8c0680d6; }
  R(2)=0x1u;
  ST32(R(14)+8,R(2));
L8c0680d6:;
  R(6)=0x78u;
  { c->pr=0x8c0680dcu; R(5)=R(9); f_8c0682a4(c); }
  R(3)=0x8c019e40u;
  ST32(R(15)+4,R(9));
  { c->pr=0x8c0680e4u; R(4)=R(9); f_8c019e40(c); }
L8c0680e4:;
  { ST32(R(15)+12,R(0)); goto L8c06813e; }
L8c0680e8:;
  R(0)=0xf0u;
  R(4)=LD32(R(15)+R(0));
  R(4)+=0x4u;
  R(3)=R(4);
  c->t=(R(3)&R(13))==0;
  if(c->t) goto L8c0680fc;
  R(0)=0xf0u;
  R(2)=LD32(R(15)+R(0));
  { R(2)+=0x8u; goto L8c0680fe; }
L8c0680fc:;
  R(2)=R(4);
L8c0680fe:;
  R(5)=R(2);
  R(5)+=0xfffffffcu;
  R(1)=R(5);
  R(0)=0xf0u;
  c->t=(R(1)&R(13))==0;
  { uint32_t k=c->t; ST32(R(15)+R(0),R(2)); if(k) goto L8c068112; }
  R(3)=R(2);
  { R(3)+=0xfffffff8u; goto L8c068114; }
L8c068112:;
  R(3)=R(5);
L8c068114:;
  R(1)=LD32(R(10)+8);
  R(4)=LD32(R(3));
  { ST32(R(4),R(1)); goto L8c06813e; }
L8c06811c:;
  R(2)=LD32(R(15)+16);
  R(3)=0x25u;
  ST8(R(2),R(3));
L8c068122:;
  R(3)=0x1u;
  ST32(R(15)+4,R(9));
  ST32(R(15)+12,R(3));
  ST32(R(14)+20,R(9));
  ST32(R(14)+32,R(11));
  R(3)=LD32(R(14)+4);
  R(3)+=0xffffffffu;
  { ST32(R(14)+40,R(3)); goto L8c06813e; }
L8c068134:;
  R(1)=0x8c129ae4u;
  ST32(R(1),R(8));
  R(0)=(int32_t)(int8_t)LD8(R(14));
  R(0)|=0x1u;
  ST8(R(14),R(0));
L8c06813e:;
  R(0)=(int32_t)(int8_t)LD8(R(12));
  c->t=(int32_t)R(0)==110;
  if(!c->t) goto L8c068148;
  {  goto L8c068246; }
L8c068148:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c068246;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c068174;
  R(2)=LD32(R(14)+40);
  c->t=(int32_t)R(2)>0;
  if(!c->t) goto L8c068174;
  {  goto L8c06816e; }
L8c06815e:;
  R(4)=R(14);
  R(5)=0x1u;
  R(6)=R(10);
  { c->pr=0x8c068168u; R(4)+=0x1u; f_8c0684ae(c); }
  R(2)=LD32(R(14)+40);
  R(2)+=0xffffffffu;
  ST32(R(14)+40,R(2));
L8c06816e:;
  R(3)=LD32(R(14)+40);
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c06815e;
L8c068174:;
  R(1)=LD32(R(14)+28);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c068192;
  R(2)=LD32(R(14)+32);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c068192;
  R(2)=LD32(R(14)+36);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c068192;
  R(5)=LD32(R(15)+12);
  R(6)=R(10);
  { c->pr=0x8c06818eu; R(4)=LD32(R(15)+4); f_8c0684ae(c); }
  {  goto L8c068220; }
L8c068192:;
  R(5)=LD32(R(14)+16);
  R(3)=LD32(R(15)+4);
  R(5)-=R(3);
  c->t=(int32_t)R(5)>0;
  { uint32_t k=!c->t; ST32(R(15),R(5)); if(k) goto L8c0681c4; }
  R(6)=R(10);
  { c->pr=0x8c0681a4u; R(4)=R(3); f_8c0684ae(c); }
  {  goto L8c0681c4; }
L8c0681b4:;
  R(4)=R(15);
  R(5)=0x1u;
  R(6)=R(10);
  { c->pr=0x8c0681beu; R(4)+=0x8u; f_8c0684ae(c); }
  R(2)=LD32(R(14)+28);
  R(2)+=0xffffffffu;
  ST32(R(14)+28,R(2));
L8c0681c4:;
  R(3)=LD32(R(14)+28);
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c0681b4;
  R(5)=LD32(R(14)+20);
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(15));
  R(5)-=R(3);
  c->t=(int32_t)R(5)>0;
  R(2)+=R(5);
  { uint32_t k=!c->t; ST32(R(15),R(2)); if(k) goto L8c0681f4; }
  R(6)=R(10);
  { c->pr=0x8c0681e0u; R(4)=LD32(R(14)+16); f_8c0684ae(c); }
  {  goto L8c0681f4; }
L8c0681e4:;
  R(4)=R(15);
  R(5)=0x1u;
  R(6)=R(10);
  { c->pr=0x8c0681eeu; R(4)+=0x8u; f_8c0684ae(c); }
  R(3)=LD32(R(14)+32);
  R(3)+=0xffffffffu;
  ST32(R(14)+32,R(3));
L8c0681f4:;
  R(2)=LD32(R(14)+32);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c0681e4;
  R(5)=LD32(R(15)+12);
  R(6)=R(10);
  R(3)=LD32(R(15));
  R(5)-=R(3);
  { c->pr=0x8c068206u; R(4)=LD32(R(14)+20); f_8c0684ae(c); }
  {  goto L8c06821a; }
L8c06820a:;
  R(4)=R(15);
  R(5)=0x1u;
  R(6)=R(10);
  { c->pr=0x8c068214u; R(4)+=0x8u; f_8c0684ae(c); }
  R(2)=LD32(R(14)+36);
  R(2)+=0xffffffffu;
  ST32(R(14)+36,R(2));
L8c06821a:;
  R(3)=LD32(R(14)+36);
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c06820a;
L8c068220:;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(0)&0x2)==0;
  if(c->t) goto L8c068246;
  R(2)=LD32(R(14)+40);
  c->t=(int32_t)R(2)>0;
  if(!c->t) goto L8c068246;
  {  goto L8c068240; }
L8c068230:;
  R(4)=R(14);
  R(5)=0x1u;
  R(6)=R(10);
  { c->pr=0x8c06823au; R(4)+=0x1u; f_8c0684ae(c); }
  R(2)=LD32(R(14)+40);
  R(2)+=0xffffffffu;
  ST32(R(14)+40,R(2));
L8c068240:;
  R(3)=LD32(R(14)+40);
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c068230;
L8c068246:;
  { R(12)+=0x1u; goto L8c06826e; }
L8c06824a:;
  { ST32(R(15),R(12)); goto L8c068254; }
L8c06824e:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
L8c068254:;
  R(4)=LD32(R(15));
  R(4)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c068262;
  R(0)=R(4);
  c->t=(int32_t)R(0)==37;
  if(!c->t) goto L8c06824e;
L8c068262:;
  R(5)=LD32(R(15));
  R(6)=R(10);
  R(5)-=R(12);
  { c->pr=0x8c06826cu; R(4)=R(12); f_8c0684ae(c); }
  R(12)=LD32(R(15));
L8c06826e:;
  R(3)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c068286;
  { c->pr=0x8c068278u; R(4)=R(10); f_8c068516(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c068286;
  R(0)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(0)&0x1)==0;
  if(!c->t) goto L8c068286;
  {  goto L8c067c04; }
L8c068286:;
  { c->pr=0x8c06828au; R(4)=R(10); f_8c068506(c); }
  R(0)=LD32(R(10)+8);
L8c06828c:;
  R(1)=0xd0u;
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
void f_8c0682a4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(0)=R(6);
  c->t=(int32_t)R(0)==100;
  R(10)=R(5);
  R(9)=0x0u;
  { uint32_t k=c->t; ST8(R(10),R(9)); if(k) goto L8c0682da; }
  c->t=(int32_t)R(0)==105;
  if(c->t) goto L8c0682da;
  c->t=(int32_t)R(0)==117;
  if(c->t) goto L8c0682da;
  c->t=(int32_t)R(0)==111;
  if(c->t) goto L8c0682de;
  c->t=(int32_t)R(0)==120;
  if(c->t) goto L8c0682e2;
  c->t=(int32_t)R(0)==88;
  if(c->t) goto L8c0682e2;
  {  goto L8c0682e4; }
L8c0682da:;
  { R(8)=0xau; goto L8c0682e4; }
L8c0682de:;
  { R(8)=0x8u; goto L8c0682e4; }
L8c0682e2:;
  R(8)=0x10u;
L8c0682e4:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==100;
  if(c->t) goto L8c0682f0;
  R(0)=R(6);
  c->t=(int32_t)R(0)==105;
  if(!c->t) goto L8c0682f8;
L8c0682f0:;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0682f8;
  { R(12)=0u-R(4); goto L8c0682fa; }
L8c0682f8:;
  R(12)=R(4);
L8c0682fa:;
  R(14)=R(15);
  c->t=(R(12)&R(12))==0;
  R(13)=R(9);
  R(11)=R(9);
  { uint32_t k=!c->t; R(14)+=0x4u; if(k) goto L8c068314; }
  R(3)=LD32(R(7)+8);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c068314;
  R(3)=0x30u;
  ST8(R(14),R(3));
  { R(13)=0x1u; goto L8c06836e; }
L8c068314:;
  R(3)=0x0u;
  c->t=R(12)>R(3);
  if(!c->t) goto L8c06836e;
L8c06831a:;
  R(1)=R(13);
  R(1)+=R(14);
  R(3)=0x8c09c280u;
  R(2)=R(1);
  ST32(R(15),R(1));
  R(1)=R(12);
  { c->pr=0x8c06832au; R(0)=R(8); f_8c09c280(c); }
  ST8(R(2),R(0));
  R(3)=LD32(R(15));
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(3)=0x9u;
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c068342;
  R(0)=R(13);
  R(2)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(2)+=0x30u;
  ST8(R(14)+R(0),R(2));
  {  goto L8c06835c; }
L8c068342:;
  R(1)=R(13);
  R(0)=R(6);
  R(1)+=R(14);
  c->t=(int32_t)R(0)==120;
  ST32(R(15),R(1));
  if(!c->t) goto L8c068356;
  R(0)=(int32_t)(int8_t)LD8(R(1));
  R(0)+=0x57u;
  { ST8(R(1),R(0)); goto L8c06835c; }
L8c068356:;
  R(2)=(int32_t)(int8_t)LD8(R(1));
  R(2)+=0x37u;
  ST8(R(1),R(2));
L8c06835c:;
  R(3)=0x8c0679f4u;
  R(1)=R(12);
  { c->pr=0x8c068364u; R(0)=R(8); f_8c0679f4(c); }
  R(2)=0x0u;
  R(12)=R(0);
  c->t=R(12)>R(2);
  { uint32_t k=c->t; R(13)+=0x1u; if(k) goto L8c06831a; }
L8c06836e:;
  R(0)=(int32_t)(int8_t)LD8(R(7));
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0683a4;
  R(0)=R(6);
  c->t=(int32_t)R(0)==111;
  if(c->t) goto L8c068386;
  c->t=(int32_t)R(0)==120;
  if(c->t) goto L8c068394;
  c->t=(int32_t)R(0)==88;
  if(c->t) goto L8c068394;
  {  goto L8c0683a4; }
L8c068386:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0683a4;
  R(0)=R(13);
  R(3)=0x30u;
  R(13)+=0x1u;
  { ST8(R(14)+R(0),R(3)); goto L8c0683a4; }
L8c068394:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0683a4;
  R(3)=0x30u;
  ST8(R(5),R(3));
  R(5)+=0x1u;
  ST8(R(5),R(6));
  R(11)=0x2u;
  R(5)+=0x1u;
L8c0683a4:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==100;
  ST32(R(15),R(13));
  { uint32_t k=c->t; R(11)+=R(13); if(k) goto L8c0683b4; }
  R(0)=R(6);
  c->t=(int32_t)R(0)==105;
  if(!c->t) goto L8c0683e6;
L8c0683b4:;
  R(3)=LD32(R(7)+8);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0683be;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0683e6;
L8c0683be:;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0683de;
  R(0)=(int32_t)(int8_t)LD8(R(7));
  c->t=(R(0)&0x8)==0;
  if(c->t) goto L8c0683d0;
  R(3)=0x2bu;
  R(11)+=0x1u;
  { ST8(R(5),R(3)); goto L8c0683e4; }
L8c0683d0:;
  c->t=(R(0)&0x10)==0;
  if(c->t) goto L8c0683e6;
  R(3)=0x20u;
  ST8(R(5),R(3));
  R(11)+=0x1u;
  { R(5)+=0x1u; goto L8c0683e6; }
L8c0683de:;
  R(2)=0x2du;
  ST8(R(5),R(2));
  R(11)+=0x1u;
L8c0683e4:;
  R(5)+=0x1u;
L8c0683e6:;
  R(0)=(int32_t)(int8_t)LD8(R(10));
  R(4)=R(10);
  R(4)+=0x1u;
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(13)=R(0); if(k) goto L8c0683fe; }
  R(0)=R(13);
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c0683fe;
  R(0)=R(13);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c068402;
L8c0683fe:;
  { ST32(R(7)+20,R(4)); goto L8c068428; }
L8c068402:;
  R(0)=(int32_t)(int8_t)LD8(R(7));
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c068426;
  R(0)=R(6);
  c->t=(int32_t)R(0)==88;
  if(c->t) goto L8c06841a;
  c->t=(int32_t)R(0)==120;
  if(c->t) goto L8c06841a;
  c->t=(int32_t)R(0)==111;
  if(c->t) goto L8c068422;
  {  goto L8c068428; }
L8c06841a:;
  R(2)=R(10);
  R(2)+=0x2u;
  { ST32(R(7)+20,R(2)); goto L8c068428; }
L8c068422:;
  { ST32(R(7)+20,R(4)); goto L8c068428; }
L8c068426:;
  ST32(R(7)+20,R(10));
L8c068428:;
  R(3)=LD32(R(7)+8);
  c->t=(int32_t)R(3)>(int32_t)R(11);
  if(!c->t) goto L8c068440;
  R(6)=LD32(R(7)+8);
  R(4)=R(6);
  R(6)-=R(11);
  { ST32(R(7)+32,R(6)); goto L8c068444; }
L8c068440:;
  ST32(R(7)+32,R(9));
  R(4)=R(11);
L8c068444:;
  R(0)=(int32_t)(int8_t)LD8(R(10));
  c->t=(int32_t)R(0)==43;
  { uint32_t k=c->t; R(6)=R(0); if(k) goto L8c068458; }
  R(0)=R(6);
  c->t=(int32_t)R(0)==45;
  if(c->t) goto L8c068458;
  R(0)=R(6);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c068472;
L8c068458:;
  R(3)=LD32(R(7)+4);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(!c->t) goto L8c068480;
  R(0)=(int32_t)(int8_t)LD8(R(7)+1);
  c->t=(int32_t)R(0)==48;
  if(!c->t) goto L8c068472;
  R(2)=LD32(R(7)+4);
  R(3)=LD32(R(7)+32);
  R(2)-=R(4);
  R(3)+=R(2);
  ST32(R(7)+32,R(3));
  { ST32(R(7)+40,R(9)); goto L8c068482; }
L8c068472:;
  R(3)=LD32(R(7)+4);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  if(!c->t) goto L8c068480;
  R(1)=LD32(R(7)+4);
  R(1)-=R(4);
  { ST32(R(7)+40,R(1)); goto L8c068482; }
L8c068480:;
  ST32(R(7)+40,R(9));
L8c068482:;
  R(4)=LD32(R(15));
  R(4)+=0xffffffffu;
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c068498;
L8c06848a:;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(14)+R(0));
  R(4)+=0xffffffffu;
  c->t=(int32_t)R(4)>=0;
  ST8(R(5),R(3));
  { uint32_t k=c->t; R(5)+=0x1u; if(k) goto L8c06848a; }
L8c068498:;
  ST8(R(5),R(9));
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
void f_8c0684ae(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(14));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=R(5); if(k) goto L8c0684dc; }
  R(2)=0x8c0685b4u;
  R(5)=R(11);
  R(6)=R(13);
  { c->pr=0x8c0684ceu; R(4)=LD32(R(14)+4); f_8c0685b4(c); }
  R(3)=LD32(R(14)+4);
  R(3)+=R(13);
  ST32(R(14)+4,R(3));
  R(2)=LD32(R(14)+8);
  R(2)+=R(13);
  { ST32(R(14)+8,R(2)); goto L8c0684fa; }
L8c0684dc:;
  c->t=(int32_t)R(13)>0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0684fa; }
L8c0684e2:;
  R(5)=LD32(R(14)+4);
  R(0)=LD32(R(14)+12);
  { uint32_t tg=R(0); c->pr=0x8c0684eau; {int32_t v=(int8_t)LD8(R(11));R(11)+=1;R(4)=(uint32_t)v;} sh4_call(c,tg); }
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0684fa;
  R(2)=LD32(R(14)+8);
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(13);
  R(2)+=0x1u;
  { uint32_t k=!c->t; ST32(R(14)+8,R(2)); if(k) goto L8c0684e2; }
L8c0684fa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c068506(SH4Ctx *c) {
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c068512;
  R(2)=LD32(R(4)+4);
  R(3)=0x0u;
  ST8(R(2),R(3));
L8c068512:;
  {  return; }
}
void f_8c068516(SH4Ctx *c) {
  R(0)=LD32(R(4));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c068520;
  { R(0)=0x0u; return; }
L8c068520:;
  R(0)=LD32(R(4)+4);
  R(1)=0x10u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)&=0x40u;
  {  return; }
}
void f_8c068530(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c09c5ccu;
  { c->pr=0x8c06853au;  f_8c09c5cc(c); }
  R(3)=R(15);
  R(4)=0x7f800000u;
  fp_st(c,0,R(15));
  R(2)=LD32(R(3));
  R(2)&=R(4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c068560;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7fffffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c06855a;
  R(2)=0x8c129ae4u;
  R(0)=0x44du;
  { ST32(R(2),R(0)); goto L8c068560; }
L8c06855a:;
  R(1)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(1),R(2));
L8c068560:;
  fp_ld(c,0,R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c068580(SH4Ctx *c) {
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(7)=R(5); if(k) goto L8c06858a; }
  { R(0)=0x0u; return; }
L8c06858a:;
  R(5)=0x0u;
  R(2)=R(5);
  c->t=R(2)>=R(6);
  if(c->t) goto L8c0685a0;
L8c068592:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(2)=(uint32_t)v;}
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0685a0;
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  if(!c->t) goto L8c068592;
L8c0685a0:;
  R(0)=R(4);
  R(7)+=0xffffffffu;
  R(0)+=0xffffffffu;
  R(3)=(int32_t)(int8_t)LD8(R(7));
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(3)=R(3)&0xFF;
  R(0)=R(0)&0xFF;
  R(0)-=R(3);
  {  return; }
}
void f_8c0685b4(SH4Ctx *c) {
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=R(4)==R(5);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c068668;
  R(2)=0x0u;
  c->t=R(6)>R(2);
  if(!c->t) goto L8c068668;
  R(7)=R(4);
  R(11)=R(6);
  R(7)|=R(5);
  R(12)=R(6);
  c->t=R(11)&1;R(11)>>=1;
  c->t=R(4)>=R(5);
  R(7)|=R(6);
  { uint32_t k=c->t; R(12)>>=2; if(k) goto L8c06861e; }
  R(3)=0x1u;
  c->t=(R(3)&R(7))==0;
  if(!c->t) goto L8c06860a;
  R(1)=0x3u;
  c->t=(R(7)&R(1))==0;
  if(!c->t) goto L8c0685f6;
  R(6)=R(12);
  R(7)=R(4);
L8c0685e6:;
  {uint32_t v=LD32(R(5));R(5)+=4;R(3)=v;}
  R(6)+=0xffffffffu;
  c->t=(R(6)&R(6))==0;
  ST32(R(7),R(3));
  { uint32_t k=!c->t; R(7)+=0x4u; if(k) goto L8c0685e6; }
  {  goto L8c068668; }
L8c0685f6:;
  R(6)=R(11);
  R(7)=R(4);
L8c0685fa:;
  {int32_t v=(int16_t)LD16(R(5));R(5)+=2;R(3)=(uint32_t)v;}
  R(6)+=0xffffffffu;
  c->t=(R(6)&R(6))==0;
  ST16(R(7),R(3));
  { uint32_t k=!c->t; R(7)+=0x2u; if(k) goto L8c0685fa; }
  {  goto L8c068668; }
L8c06860a:;
  R(0)=R(5);
  R(7)=R(4);
L8c06860e:;
  {int32_t v=(int8_t)LD8(R(0));R(0)+=1;R(3)=(uint32_t)v;}
  R(6)+=0xffffffffu;
  c->t=(R(6)&R(6))==0;
  ST8(R(7),R(3));
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c06860e; }
  {  goto L8c068668; }
L8c06861e:;
  R(2)=0x1u;
  R(0)=R(4);
  c->t=(R(2)&R(7))==0;
  R(13)=R(5);
  R(0)+=R(6);
  { uint32_t k=!c->t; R(13)+=R(6); if(k) goto L8c06865a; }
  R(1)=0x3u;
  c->t=(R(7)&R(1))==0;
  if(!c->t) goto L8c068646;
  R(6)=R(12);
  R(7)=R(13);
  R(5)=R(0);
L8c068638:;
  R(7)+=0xfffffffcu;
  R(3)=LD32(R(7));
  R(6)-=1;c->t=R(6)==0;
  { uint32_t k=!c->t; {uint32_t v=R(3);R(5)-=4;ST32(R(5),v);} if(k) goto L8c068638; }
  {  goto L8c068668; }
L8c068646:;
  R(6)=R(11);
  R(5)=R(13);
  R(7)=R(0);
L8c06864c:;
  R(5)+=0xfffffffeu;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(6)-=1;c->t=R(6)==0;
  { uint32_t k=!c->t; {uint32_t v=R(3);R(7)-=2;ST16(R(7),v);} if(k) goto L8c06864c; }
  {  goto L8c068668; }
L8c06865a:;
  R(7)=R(13);
  R(5)=R(0);
L8c06865e:;
  R(7)+=0xffffffffu;
  R(3)=(int32_t)(int8_t)LD8(R(7));
  R(6)-=1;c->t=R(6)==0;
  { uint32_t k=!c->t; {uint32_t v=R(3);R(5)-=1;ST8(R(5),v);} if(k) goto L8c06865e; }
L8c068668:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  R(0)=R(4);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c068674(SH4Ctx *c) {
  c->t=R(4)==R(5);
  if(c->t) goto L8c0686b4;
  c->t=R(4)>=R(5);
  if(c->t) goto L8c068698;
  R(0)=R(5);
  R(5)=0x0u;
  R(3)=R(5);
  c->t=R(3)>=R(6);
  { uint32_t k=c->t; R(7)=R(4); if(k) goto L8c0686b4; }
L8c068688:;
  {int32_t v=(int8_t)LD8(R(0));R(0)+=1;R(3)=(uint32_t)v;}
  R(5)+=0x1u;
  c->t=R(5)>=R(6);
  ST8(R(7),R(3));
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c068688; }
  {  goto L8c0686b4; }
L8c068698:;
  R(0)=R(5);
  R(5)=0x0u;
  R(2)=R(5);
  R(7)=R(4);
  c->t=R(2)>=R(6);
  R(7)+=R(6);
  { uint32_t k=c->t; R(0)+=R(6); if(k) goto L8c0686b4; }
L8c0686a8:;
  R(0)+=0xffffffffu;
  R(5)+=0x1u;
  R(3)=(int32_t)(int8_t)LD8(R(0));
  c->t=R(5)>=R(6);
  { uint32_t k=!c->t; {uint32_t v=R(3);R(7)-=1;ST8(R(7),v);} if(k) goto L8c0686a8; }
L8c0686b4:;
  { R(0)=R(4); return; }
}
void f_8c0686b8(SH4Ctx *c) {
  R(7)=0x0u;
  R(3)=R(7);
  c->t=R(3)>=R(6);
  { uint32_t k=c->t; R(0)=R(4); if(k) goto L8c0686cc; }
L8c0686c2:;
  R(7)+=0x1u;
  ST8(R(0),R(5));
  c->t=R(7)>=R(6);
  { uint32_t k=!c->t; R(0)+=0x1u; if(k) goto L8c0686c2; }
L8c0686cc:;
  { R(0)=R(4); return; }
}
void f_8c0686d0(SH4Ctx *c) {
  R(4)=0x8c0c95d0u;
  R(3)=0x41c64e6du;
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  R(2)=LD32(R(4));
  R(1)=0x3039u;
  c->macl=R(2)*R(3);
  R(2)=0x7fffu;
  R(3)=c->macl;
  R(3)+=R(1);
  R(0)=R(3);
  R(0)>>=16;
  R(0)&=R(2);
  ST32(R(4),R(3));
  { {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;} return; }
}
void f_8c0686fc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c09c6bcu;
  { c->pr=0x8c068706u;  f_8c09c6bc(c); }
  R(3)=R(15);
  R(4)=0x7f800000u;
  fp_st(c,0,R(15));
  R(2)=LD32(R(3));
  R(2)&=R(4);
  c->t=R(2)==R(4);
  if(!c->t) goto L8c06872c;
  R(2)=R(15);
  R(1)=LD32(R(2));
  R(3)=0x7fffffu;
  c->t=(R(1)&R(3))==0;
  if(c->t) goto L8c068726;
  R(2)=0x8c129ae4u;
  R(0)=0x44du;
  { ST32(R(2),R(0)); goto L8c06872c; }
L8c068726:;
  R(1)=0x8c129ae4u;
  R(2)=0x44cu;
  ST32(R(1),R(2));
L8c06872c:;
  fp_ld(c,0,R(15));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c06874c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=R(15);
  R(0)+=0x8u;
  ST32(R(15),R(4));
  R(4)=0x3u;
  R(0)+=0x4u;
  c->t=(R(4)&R(0))==0;
  if(c->t) goto L8c068766;
  R(4)=R(15);
  R(4)+=0x8u;
  { R(4)+=0x8u; goto L8c06876c; }
L8c068766:;
  R(4)=R(15);
  R(4)+=0x8u;
  R(4)+=0x4u;
L8c06876c:;
  {uint32_t v=R(4);R(15)-=4;ST32(R(15),v);}
  R(5)=0x0u;
  R(3)=0x8c067b64u;
  R(6)=LD32(R(15)+4);
  R(7)=LD32(R(15)+12);
  { c->pr=0x8c06877au; R(4)=0x1u; f_8c067b64(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c068788(SH4Ctx *c) {
  R(1)=0x0u;
  R(0)=R(5);
  R(7)=R(4);
  { R(5)=R(1); goto L8c06879a; }
L8c068792:;
  {int32_t v=(int8_t)LD8(R(0));R(0)+=1;R(3)=(uint32_t)v;}
  R(5)+=0x1u;
  ST8(R(7),R(3));
  R(7)+=0x1u;
L8c06879a:;
  c->t=R(5)>=R(6);
  if(c->t) goto L8c0687b2;
  R(3)=(int32_t)(int8_t)LD8(R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c068792;
  c->t=R(5)>=R(6);
  if(c->t) goto L8c0687b2;
L8c0687a8:;
  R(5)+=0x1u;
  ST8(R(7),R(1));
  c->t=R(5)>=R(6);
  { uint32_t k=!c->t; R(7)+=0x1u; if(k) goto L8c0687a8; }
L8c0687b2:;
  { R(0)=R(4); return; }
}
void f_8c0687c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffdcu;
  R(0)=0xcu;
  c->fr[15]=0x00000000u;
  ST32(R(15)+8,R(4));
  R(8)=0x0u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x10u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x14u;
  R(4)=0x8c2dd0c8u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x4u;
  fp_st(c,15,R(4));
  fp_st(c,15,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(4));
  R(0)=0x4u;
  R(4)=0x8c2dd0d4u;
  R(10)=0x8c2dd0e0u;
  R(2)=0x8c09458cu;
  R(5)=0x8c2dd0b0u;
  R(3)=0x8c2d03b4u;
  fp_st(c,15,R(4));
  fp_st(c,15,R(0)+R(4));
  R(0)=0x8u;
  fp_st(c,15,R(0)+R(4));
  ST32(R(10),R(8));
  ST32(R(15),R(8));
  { c->pr=0x8c06880eu; R(4)=LD32(R(3)); f_8c09458c(c); }
  R(12)=R(0);
  R(0)=0x18u;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x1cu;
  fp_st(c,15,R(0)+R(15));
  R(0)=0x20u;
  R(3)=0x8c0c7624u;
  fp_st(c,15,R(0)+R(15));
  R(0)=LD32(R(3));
  R(13)=0x8c09ade0u;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0688b2;
  R(2)=0x8c0c762cu;
  c->t=(R(12)&R(12))==0;
  R(0)=0x8c0c9518u;
  R(1)=LD32(R(2));
  { uint32_t k=!c->t; ST32(R(0),R(1)); if(k) goto L8c06884a; }
  R(3)=0x8c2dd0e0u;
  R(2)=0x8c2dd0d4u;
  R(1)=0x8c2d03b4u;
  R(5)=0x8c2dd0bcu;
  R(7)=0x8c2dd0c8u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2dd0b0u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c068846u; R(6)=LD32(R(1)); sh4_call(c,tg); }
  { R(15)+=0x8u; goto L8c0688a6; }
L8c06884a:;
  R(1)=0x8c2dd0e0u;
  R(3)=0x8c2dd0d4u;
  R(7)=0x8c2dd0c8u;
  R(5)=0x8c2dd0bcu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2dd0b0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c06885cu; R(6)=R(12); sh4_call(c,tg); }
  R(15)+=0x8u;
  R(4)=LD32(R(12)+4);
  R(9)=LD32(R(4)+36);
  R(4)=LD32(R(4)+32);
  { R(14)=R(4); goto L8c0688a2; }
L8c068868:;
  R(4)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(4)+2);
  R(5)=R(0);
  R(0)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0688a6;
  R(4)=R(14);
  R(2)=0x8c094a6eu;
  R(11)=LD32(R(4)+4);
  { c->pr=0x8c06887eu; R(4)=R(11); f_8c094a6e(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c068898;
  R(2)=0x8c2dd0e0u;
  R(3)=0x8c2dd0d4u;
  R(7)=0x8c2dd0c8u;
  R(5)=0x8c2dd0bcu;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2dd0b0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c068896u; R(6)=R(11); sh4_call(c,tg); }
  R(15)+=0x8u;
L8c068898:;
  R(5)=R(14);
  R(5)+=0x8u;
  R(4)=R(14);
  R(14)=R(5);
  R(9)+=0xffffffffu;
L8c0688a2:;
  c->t=(int32_t)R(9)>0;
  if(c->t) goto L8c068868;
L8c0688a6:;
  R(3)=0x8c0c7624u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0688b2;
  {  { f_8c068a40(c); return; } }
L8c0688b2:;
  R(2)=0x8c0c9518u;
  ST32(R(2),R(8));
  R(4)=LD32(R(12)+4);
  R(4)=LD32(R(4));
  { R(9)=R(4); { f_8c068980(c); return; } }
}
void f_8c0688be(SH4Ctx *c) {
  R(4)=R(9);
  R(2)=LD32(R(15)+8);
  R(14)=LD32(R(4));
  c->t=R(14)==R(2);
  if(c->t) goto L8c06897e;
  R(2)=0x8c05689eu;
  { c->pr=0x8c0688ceu; R(4)=R(14); f_8c05689e(c); }
  c->t=(R(0)&R(11))==0;
  if(c->t) goto L8c06897e;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0688e4;
  { R(2)=0x1u; goto L8c0688e6; }
L8c0688e4:;
  R(2)=0x0u;
L8c0688e6:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06897e;
  R(3)=0x8c2dd0d4u;
  R(1)=R(15);
  R(7)=0x8c2dd0c8u;
  R(5)=0x8c2dd0bcu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2dd0b0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0688feu; R(6)=R(14); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c06897e; }
  {  goto L8c068966; }
L8c068960:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+28);
  ST32(R(15),R(3));
L8c068966:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06897e;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c068960;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06897e;
  R(3)=LD32(R(15));
  ST32(R(10),R(3));
L8c06897e:;
  R(9)=LD32(R(9)+4);
  { f_8c068980(c); return; }
}
void f_8c068960(SH4Ctx *c) {
L8c068960:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+28);
  ST32(R(15),R(3));
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06897e;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c068960;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c06897e;
  R(3)=LD32(R(15));
  ST32(R(10),R(3));
L8c06897e:;
  R(9)=LD32(R(9)+4);
  { f_8c068980(c); return; }
}
void f_8c068980(SH4Ctx *c) {
  c->t=(R(9)&R(9))==0;
  { uint32_t k=!c->t; R(11)=0x10u; if(k) { f_8c0688be(c); return; } }
  R(4)=LD32(R(12)+4);
  R(4)=LD32(R(4)+52);
  ST32(R(15)+4,R(4));
  R(4)=LD32(R(12)+4);
  R(4)=LD32(R(4)+48);
  { R(9)=R(4); goto L8c068a3a; }
L8c068994:;
  R(4)=R(9);
  R(14)=LD32(R(4));
  R(4)=0x8c2dd0b0u;
  R(5)=LD32(R(14)+4);
  R(12)=0x8c07773au;
  R(5)+=0x48u;
  R(7)=R(5);
  R(6)=R(5);
  R(5)=0x8c2dd0bcu;
  R(7)+=0xcu;
  { c->pr=0x8c0689acu; {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);} f_8c07773a(c); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c068a2c; }
  R(4)=LD32(R(14)+4);
  R(4)=LD32(R(4));
  { R(12)=R(4); goto L8c068a28; }
L8c0689bc:;
  R(4)=R(12);
  R(2)=LD32(R(15)+8);
  R(14)=LD32(R(4));
  c->t=R(14)==R(2);
  if(c->t) goto L8c068a26;
  R(2)=0x8c05689eu;
  { c->pr=0x8c0689ccu; R(4)=R(14); f_8c05689e(c); }
  c->t=(R(0)&R(11))==0;
  if(c->t) goto L8c068a26;
  R(0)=LD32(R(14)+4);
  R(1)=0x25u;
  R(0)=LD32(R(0)+4);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0689e2;
  { R(2)=0x1u; goto L8c0689e4; }
L8c0689e2:;
  R(2)=0x0u;
L8c0689e4:;
  R(2)=R(2)&0xFF;
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c068a26;
  R(3)=0x8c2dd0d4u;
  R(1)=R(15);
  R(7)=0x8c2dd0c8u;
  R(5)=0x8c2dd0bcu;
  {uint32_t v=R(1);R(15)-=4;ST32(R(15),v);}
  R(4)=0x8c2dd0b0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  { uint32_t tg=R(13); c->pr=0x8c0689fcu; R(6)=R(14); sh4_call(c,tg); }
  R(0)=R(0)&0xFF;
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(15)+=0x8u; if(k) goto L8c068a26; }
  {  goto L8c068a0e; }
L8c068a08:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(2)+28);
  ST32(R(15),R(3));
L8c068a0e:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c068a26;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c068a08;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c068a26;
  R(3)=LD32(R(15));
  ST32(R(10),R(3));
L8c068a26:;
  R(12)=LD32(R(12)+4);
L8c068a28:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0689bc;
L8c068a2c:;
  R(2)=LD32(R(15)+4);
  R(5)=R(9);
  R(5)+=0x4u;
  R(4)=R(9);
  R(2)+=0xffffffffu;
  R(9)=R(5);
  ST32(R(15)+4,R(2));
L8c068a3a:;
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c068994;
  { f_8c068a40(c); return; }
}
void f_8c068a40(SH4Ctx *c) {
  R(15)+=0x24u;
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
