#include "recomp_decls.h"
void f_8c0e75c6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(3)=0x148u;
  R(14)=R(4);
  R(2)=0x8c2f2e3cu;
  R(11)=0x0u;
  c->macl=R(14)*R(3);
  ST32(R(15)+8,R(6));
  ST32(R(15)+4,R(7));
  R(3)=c->macl;
  ST32(R(15)+12,R(3));
  R(3)+=R(2);
  ST32(R(15),R(3));
  R(1)=LD32(R(15)+4);
  ST32(R(1),R(11));
  R(3)=LD32(R(15));
  R(0)=(int32_t)(int8_t)LD8(R(3)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(12)=R(5); if(k) goto L8c0e7620; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e75feu; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e760a;
  { c->pr=0x8c0e7606u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e7620; }
L8c0e760a:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e7610u; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7620;
  R(2)=LD32(R(15)+12);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7626;
L8c0e7620:;
  R(0)=0xffffff01u;
  {  goto L8c0e771a; }
L8c0e7626:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e762cu; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7636;
  R(0)=0xffffff03u;
  {  goto L8c0e771a; }
L8c0e7636:;
  R(3)=LD32(R(15));
  R(2)=LD32(R(3)+28);
  R(1)=LD32(R(2)+56);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e76bc;
  R(3)=0x8c0e9a6cu;
  R(5)=R(12);
  { c->pr=0x8c0e7648u; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e76bc;
  R(3)=0x8c0e94e6u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x10u;
  { c->pr=0x8c0e7658u; R(4)=R(14); f_8c0e94e6(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e768c;
  R(0)=0xffffff06u;
  {  goto L8c0e771a; }
L8c0e768c:;
  R(3)=0x8c0e9556u;
  R(5)=R(15);
  R(5)+=0x10u;
  { c->pr=0x8c0e7696u; R(4)=R(14); f_8c0e9556(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e76a0;
  R(0)=0xffffff09u;
  {  goto L8c0e771a; }
L8c0e76a0:;
  R(3)=0x8c0e9950u;
  R(5)=0x0u;
  { c->pr=0x8c0e76a8u; R(4)=R(14); f_8c0e9950(c); }
  R(2)=0xfffcu;
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0e76bc;
  R(3)=0x8c0e9594u;
  { c->pr=0x8c0e76b6u; R(4)=R(14); f_8c0e9594(c); }
  R(10)=R(0);
  c->t=(int32_t)R(10)>=0;
  if(c->t) goto L8c0e76c2;
L8c0e76bc:;
  R(0)=0xffffff08u;
  {  goto L8c0e771a; }
L8c0e76c2:;
  R(3)=0x8c0e9a04u;
  R(5)=R(10);
  { c->pr=0x8c0e76cau; R(4)=R(14); f_8c0e9a04(c); }
  R(2)=0x8c0e9a36u;
  { c->pr=0x8c0e76d0u; R(4)=R(14); f_8c0e9a36(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0e76dc;
  R(0)=0xffffff07u;
  {  goto L8c0e771a; }
L8c0e76dc:;
  R(4)=0x1u;
  R(3)=0xffffu;
  R(0)=R(4);
  R(2)=0x2u;
  ST32(R(13)+8,R(4));
  R(4)=R(13);
  ST32(R(13)+4,R(2));
  ST32(R(13)+44,R(10));
  ST32(R(13)+56,R(3));
  ST32(R(13)+48,R(11));
  ST32(R(13)+40,R(14));
  ST16(R(13)+2,R(0));
  R(0)=R(11);
  ST8(R(13)+1,R(0));
  { R(4)+=0x10u; goto L8c0e7702; }
L8c0e76fc:;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e7702:;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e76fc;
  R(3)=0x8c0e9b7cu;
  ST8(R(4),R(11));
  R(4)=R(13);
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0e7714u; R(4)+=0x20u; f_8c0e9b7c(c); }
  R(2)=LD32(R(15)+4);
  R(0)=0x0u;
  ST32(R(2),R(13));
L8c0e771a:;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e772a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(11)=0x0u;
  R(3)=R(7);
  R(14)=R(4);
  R(0)=0x8c2f2e3eu;
  ST32(R(15)+4,R(6));
  ST32(R(15),R(7));
  ST32(R(3),R(11));
  R(3)=0x148u;
  c->macl=R(14)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)=R(5); if(k) goto L8c0e777e; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e775au; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7766;
  { c->pr=0x8c0e7762u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e777e; }
L8c0e7766:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e776cu; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e777e;
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(14)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e77c0;
L8c0e777e:;
  R(0)=0xffffff01u;
  {  goto L8c0e7862; }
L8c0e77c0:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e77c6u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e77d0;
  R(0)=0xffffff03u;
  {  goto L8c0e7862; }
L8c0e77d0:;
  R(3)=0x8c0e9a6cu;
  R(5)=R(12);
  { c->pr=0x8c0e77d8u; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e7808;
  R(2)=0x8c0e94e6u;
  R(6)=R(15);
  R(5)=R(12);
  R(6)+=0x8u;
  { c->pr=0x8c0e77e8u; R(4)=R(14); f_8c0e94e6(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e77fc;
  R(5)=R(12);
  { c->pr=0x8c0e77f2u; R(4)=R(14); f_8c0e83f8(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0e77fc; }
  { R(0)=R(4); goto L8c0e7862; }
L8c0e77fc:;
  R(2)=0x8c0e9594u;
  { c->pr=0x8c0e7802u; R(4)=R(14); f_8c0e9594(c); }
  R(10)=R(0);
  c->t=(int32_t)R(10)>=0;
  if(c->t) goto L8c0e780e;
L8c0e7808:;
  R(0)=0xffffff08u;
  {  goto L8c0e7862; }
L8c0e780e:;
  R(2)=0x8c0e9a04u;
  R(5)=R(10);
  { c->pr=0x8c0e7816u; R(4)=R(14); f_8c0e9a04(c); }
  R(3)=0x8c0e9a36u;
  { c->pr=0x8c0e781cu; R(4)=R(14); f_8c0e9a36(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0e7828;
  R(0)=0xffffff07u;
  {  goto L8c0e7862; }
L8c0e7828:;
  R(2)=0xffffu;
  R(0)=R(11);
  R(3)=0x1u;
  R(4)=R(13);
  ST32(R(13)+8,R(11));
  ST32(R(13)+4,R(3));
  ST32(R(13)+44,R(10));
  ST32(R(13)+56,R(2));
  ST32(R(13)+48,R(11));
  ST32(R(13)+40,R(14));
  ST16(R(13)+2,R(0));
  ST8(R(13)+1,R(0));
  { R(4)+=0x10u; goto L8c0e784a; }
L8c0e7844:;
  {int32_t v=(int8_t)LD8(R(12));R(12)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e784a:;
  R(2)=(int32_t)(int8_t)LD8(R(12));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e7844;
  R(3)=0x8c0e9b7cu;
  ST8(R(4),R(11));
  R(4)=R(13);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0e785cu; R(4)+=0x20u; f_8c0e9b7c(c); }
  R(2)=LD32(R(15));
  R(0)=0x0u;
  ST32(R(2),R(13));
L8c0e7862:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7872(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  ST16(R(15)+4,R(0));
  { uint32_t k=!c->t; ST8(R(15),R(6)); if(k) goto L8c0e788e; }
  R(0)=0xffffff00u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e788e:;
  R(2)=LD32(R(14)+40);
  R(3)=0x148u;
  R(0)=0x8c2f2e3eu;
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e78fe;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e78a4u; R(4)=LD32(R(14)+40); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e78e4;
  { c->pr=0x8c0e78acu; R(4)=LD32(R(14)+40); f_8c0e6c9a(c); }
  {  goto L8c0e78fe; }
L8c0e78e4:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e78eau; R(4)=LD32(R(14)+40); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e78fe;
  R(2)=LD32(R(14)+40);
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0e7908;
L8c0e78fe:;
  R(0)=0xffffff01u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e7908:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e790eu; R(4)=LD32(R(14)+40); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e791c;
  R(0)=0xffffff03u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e791c:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  ST16(R(14)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15));
  ST8(R(14)+1,R(0));
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e792e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(4);
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; ST32(R(15),R(5)); if(k) goto L8c0e794a; }
  R(0)=0xffffff00u;
  {  goto L8c0e7a86; }
L8c0e794a:;
  R(2)=LD32(R(14)+40);
  R(11)=0x148u;
  R(10)=0x8c2f2e3cu;
  c->macl=R(2)*R(11);
  R(2)=c->macl;
  R(2)+=R(10);
  R(0)=(int32_t)(int8_t)LD8(R(2)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(13)=0x0u; if(k) goto L8c0e7962; }
  {  goto L8c0e7a7e; }
L8c0e7962:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e7968u; R(4)=LD32(R(14)+40); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7970;
  {  goto L8c0e7a7e; }
L8c0e7970:;
  R(3)=LD32(R(14)+40);
  c->macl=R(3)*R(11);
  R(3)=c->macl;
  R(3)+=R(10);
  R(0)=(int32_t)(int8_t)LD8(R(3)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7982;
  {  goto L8c0e7a7e; }
L8c0e7982:;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e7988u; R(4)=LD32(R(14)+40); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7994;
  { c->pr=0x8c0e7990u; R(4)=LD32(R(14)+40); f_8c0e6c9a(c); }
  {  goto L8c0e7a7e; }
L8c0e7994:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e799au; R(4)=LD32(R(14)+40); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e7a7e;
  R(2)=LD32(R(14)+4);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)=LD32(R(14)+40); if(k) goto L8c0e7a7c; }
  R(3)=LD32(R(15));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e79c8;
  c->macl=R(12)*R(11);
  R(3)=0x1u;
  R(0)=0x8c0f44f8u;
  R(4)=c->macl;
  R(4)+=R(10);
  ST32(R(4)+48,R(3));
  R(2)=LD32(R(4)+4);
  R(3)=R(2);
  R(2)<<=2;
  R(2)+=R(3);
  R(2)<<=2;
  R(2)<<=2;
  R(1)=LD32(R(2)+R(0));
  ST32(R(4)+52,R(1));
L8c0e79c8:;
  R(3)=0x8c0e9a04u;
  R(5)=LD32(R(14)+44);
  { c->pr=0x8c0e79d0u; R(4)=R(12); f_8c0e9a04(c); }
  R(13)=R(0);
  R(0)=LD32(R(14)+8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0e7a04;
  R(4)=0xccu;
  {  goto L8c0e7a06; }
L8c0e7a04:;
  R(4)=0x33u;
L8c0e7a06:;
  R(11)=0x8c2f2e38u;
  R(5)=0x2u;
  ST8(R(13),R(4));
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  ST8(R(13)+1,R(0));
  R(3)=LD32(R(11));
  R(6)=LD32(R(14)+56);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e7a1au; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(11));
  R(5)=0x18u;
  R(6)=LD32(R(14)+48);
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e7a26u; R(4)=R(13); sh4_call(c,tg); }
  R(3)=LD32(R(11));
  R(5)=0x1au;
  R(0)=(int32_t)(int16_t)LD16(R(14)+2);
  R(2)=LD32(R(3)+16);
  R(6)=R(0);
  { uint32_t tg=R(2); c->pr=0x8c0e7a34u; R(4)=R(13); sh4_call(c,tg); }
  R(4)=R(13);
  R(5)=R(14);
  R(11)=R(13);
  R(4)+=0x4u;
  R(5)+=0x10u;
  { R(11)+=0x10u; goto L8c0e7a48; }
L8c0e7a42:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e7a48:;
  c->t=R(4)>=R(11);
  if(!c->t) goto L8c0e7a42;
  R(5)=R(14);
  R(6)=R(13);
  R(4)=R(11);
  R(5)+=0x20u;
  { R(6)+=0x18u; goto L8c0e7a5e; }
L8c0e7a58:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e7a5e:;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0e7a58;
  R(3)=0x8c0e9a1cu;
  R(5)=LD32(R(14)+44);
  { c->pr=0x8c0e7a6au; R(4)=R(12); f_8c0e9a1c(c); }
  R(2)=0x8c0e92c6u;
  { c->pr=0x8c0e7a70u; R(4)=R(12); f_8c0e92c6(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(13)=R(0); if(k) goto L8c0e7a7e; }
  R(3)=0x8c0e9770u;
  { c->pr=0x8c0e7a7cu; R(4)=R(12); f_8c0e9770(c); }
L8c0e7a7c:;
  R(13)=0x0u;
L8c0e7a7e:;
  R(2)=0x8c0e9a64u;
  { c->pr=0x8c0e7a84u; R(4)=R(14); f_8c0e9a64(c); }
  R(0)=R(13);
L8c0e7a86:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7a96(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(11)=R(6); if(k) goto L8c0e7ab2; }
  R(0)=0xffffff00u;
  {  goto L8c0e7b46; }
L8c0e7ab2:;
  R(2)=LD32(R(14)+40);
  R(6)=0x148u;
  R(4)=0x8c2f2e3cu;
  c->macl=R(2)*R(6);
  R(2)=c->macl;
  R(2)+=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(2)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7aca;
  R(0)=0xffffff01u;
  {  goto L8c0e7b46; }
L8c0e7aca:;
  R(0)=LD32(R(14)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0e7ad8;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0e7ade;
  {  goto L8c0e7ae4; }
L8c0e7ad8:;
  R(10)=0x8c0e7b56u;
  {  goto L8c0e7b14; }
L8c0e7ade:;
  R(10)=0x8c0e7c72u;
  {  goto L8c0e7b14; }
L8c0e7ae4:;
  R(0)=0xffffff0bu;
  {  goto L8c0e7b46; }
L8c0e7b14:;
  R(3)=LD32(R(14)+40);
  R(2)=0x1u;
  R(9)=0x200u;
  R(13)=R(5);
  c->macl=R(3)*R(6);
  c->t=(int32_t)R(11)>0;
  R(6)=c->macl;
  R(4)+=R(6);
  ST32(R(4)+48,R(2));
  ST32(R(4)+52,R(11));
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0e7b44; }
L8c0e7b2c:;
  R(5)=R(13);
  { uint32_t tg=R(10); c->pr=0x8c0e7b32u; R(4)=R(14); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e7b3c;
  { R(0)=R(4); goto L8c0e7b46; }
L8c0e7b3c:;
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  { uint32_t k=!c->t; R(13)+=R(9); if(k) goto L8c0e7b2c; }
L8c0e7b44:;
  R(0)=0x0u;
L8c0e7b46:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7b56(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=R(5);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e7b70u; R(4)=LD32(R(13)+40); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7b7c;
  { c->pr=0x8c0e7b78u; R(4)=LD32(R(13)+40); f_8c0e6c9a(c); }
  {  goto L8c0e7b96; }
L8c0e7b7c:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e7b82u; R(4)=LD32(R(13)+40); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7b96;
  R(2)=LD32(R(13)+40);
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0e7b9c;
L8c0e7b96:;
  R(0)=0xffffff01u;
  {  goto L8c0e7c60; }
L8c0e7b9c:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e7ba2u; R(4)=LD32(R(13)+40); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7bac;
  R(0)=0xffffff03u;
  {  goto L8c0e7c60; }
L8c0e7bac:;
  R(3)=0x8c0e9874u;
  R(12)=LD32(R(13)+40);
  { c->pr=0x8c0e7bb4u; R(4)=R(12); f_8c0e9874(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0e7bf0;
  R(10)=0x8c0e5e78u;
  R(5)=R(14);
  R(6)=R(9);
  { c->pr=0x8c0e7bc4u; R(4)=R(12); f_8c0e5e78(c); }
  R(11)=0xffffu;
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e7c36;
  R(3)=0xffffff01u;
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0e7bd6;
  { R(0)=R(4); goto L8c0e7c60; }
L8c0e7bd6:;
  R(2)=0x8c0e991eu;
  R(5)=R(14);
  R(6)=R(11);
  { c->pr=0x8c0e7be0u; R(4)=R(12); f_8c0e991e(c); }
  R(8)=0xfffcu;
  R(3)=0x8c0e9810u;
  R(5)=R(8);
  { c->pr=0x8c0e7beau; R(4)=R(12); f_8c0e9810(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c0e7c28;
L8c0e7bf0:;
  R(0)=0xffffff04u;
  {  goto L8c0e7c60; }
L8c0e7c28:;
  R(5)=R(14);
  R(6)=R(9);
  { uint32_t tg=R(10); c->pr=0x8c0e7c30u; R(4)=R(12); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e7bd6;
L8c0e7c36:;
  R(3)=0x8c0e991eu;
  R(5)=R(14);
  R(6)=0xfffau;
  { c->pr=0x8c0e7c40u; R(4)=R(12); f_8c0e991e(c); }
  R(2)=LD32(R(13)+56);
  c->t=R(2)==R(11);
  { uint32_t k=!c->t; R(10)=(uint32_t)(int32_t)(int16_t)R(14); if(k) goto L8c0e7c4c; }
  { ST32(R(13)+56,R(10)); goto L8c0e7c56; }
L8c0e7c4c:;
  R(3)=0x8c0e991eu;
  R(6)=R(14);
  R(5)=LD32(R(13)+60);
  { c->pr=0x8c0e7c56u; R(4)=R(12); f_8c0e991e(c); }
L8c0e7c56:;
  R(0)=0x0u;
  ST32(R(13)+60,R(10));
  R(2)=LD32(R(13)+48);
  R(2)+=0x1u;
  ST32(R(13)+48,R(2));
L8c0e7c60:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7c72(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  R(3)=0x148u;
  R(2)=0x8c2f2e3cu;
  R(1)=0x8c0f1358u;
  ST32(R(15),R(5));
  R(4)=LD32(R(14)+40);
  c->macl=R(4)*R(3);
  R(3)=c->macl;
  R(3)+=R(2);
  { c->pr=0x8c0e7c94u; ST32(R(15)+4,R(3)); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7ca2;
  R(2)=0x8c0e6c9au;
  { c->pr=0x8c0e7c9eu; R(4)=LD32(R(14)+40); f_8c0e6c9a(c); }
  {  goto L8c0e7cbc; }
L8c0e7ca2:;
  R(3)=0x8c0f1398u;
  { c->pr=0x8c0e7ca8u; R(4)=LD32(R(14)+40); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7cbc;
  R(2)=LD32(R(14)+40);
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0e7cc2;
L8c0e7cbc:;
  R(0)=0xffffff01u;
  {  goto L8c0e7d6c; }
L8c0e7cc2:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e7cc8u; R(4)=LD32(R(14)+40); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7cd2;
  R(0)=0xffffff03u;
  {  goto L8c0e7d6c; }
L8c0e7cd2:;
  R(13)=LD32(R(14)+48);
  R(3)=0x8c0e9950u;
  R(12)=LD32(R(14)+40);
  R(5)=R(13);
  { c->pr=0x8c0e7cdeu; R(4)=R(12); f_8c0e9950(c); }
  R(2)=0xfffcu;
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0e7cf2;
  R(3)=LD32(R(15)+4);
  R(0)=LD32(R(14)+48);
  R(2)=LD32(R(3)+28);
  R(1)=LD32(R(2)+56);
  c->t=(int32_t)R(0)>=(int32_t)R(1);
  if(!c->t) goto L8c0e7cf8;
L8c0e7cf2:;
  R(0)=0xffffff04u;
  {  goto L8c0e7d6c; }
L8c0e7cf8:;
  R(3)=0x8c0e5e78u;
  R(5)=R(13);
  R(6)=LD32(R(15));
  { c->pr=0x8c0e7d02u; R(4)=R(12); f_8c0e5e78(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e7d40;
  { R(0)=R(4); goto L8c0e7d6c; }
L8c0e7d40:;
  R(3)=0x8c0e991eu;
  R(5)=R(13);
  R(6)=0xfffau;
  { c->pr=0x8c0e7d4au; R(4)=R(12); f_8c0e991e(c); }
  R(3)=LD32(R(14)+56);
  R(2)=0xffffu;
  c->t=R(3)==R(2);
  { uint32_t k=!c->t; R(11)=(uint32_t)(int32_t)(int16_t)R(13); if(k) goto L8c0e7d58; }
  { ST32(R(14)+56,R(11)); goto L8c0e7d62; }
L8c0e7d58:;
  R(1)=0x8c0e991eu;
  R(6)=R(13);
  R(5)=LD32(R(14)+60);
  { c->pr=0x8c0e7d62u; R(4)=R(12); f_8c0e991e(c); }
L8c0e7d62:;
  R(0)=0x0u;
  ST32(R(14)+60,R(11));
  R(3)=LD32(R(14)+48);
  R(3)+=0x1u;
  ST32(R(14)+48,R(3));
L8c0e7d6c:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7d7a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  c->t=(R(14)&R(14))==0;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(11)=R(6); if(k) goto L8c0e7d94; }
  R(0)=0xffffff00u;
  {  goto L8c0e7dde; }
L8c0e7d94:;
  R(2)=LD32(R(14)+40);
  R(6)=0x148u;
  R(4)=0x8c2f2e3cu;
  c->macl=R(2)*R(6);
  R(2)=c->macl;
  R(2)+=R(4);
  R(0)=(int32_t)(int8_t)LD8(R(2)+2);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7dac;
  R(0)=0xffffff01u;
  {  goto L8c0e7dde; }
L8c0e7dac:;
  R(3)=LD32(R(14)+40);
  R(2)=0x1u;
  R(10)=0x200u;
  R(13)=R(5);
  c->macl=R(3)*R(6);
  c->t=(int32_t)R(11)>0;
  R(6)=c->macl;
  R(4)+=R(6);
  ST32(R(4)+48,R(2));
  ST32(R(4)+52,R(11));
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0e7ddc; }
L8c0e7dc4:;
  R(5)=R(13);
  { c->pr=0x8c0e7dcau; R(4)=R(14); f_8c0e7dec(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e7dd4;
  { R(0)=R(4); goto L8c0e7dde; }
L8c0e7dd4:;
  R(12)+=0x1u;
  c->t=(int32_t)R(12)>=(int32_t)R(11);
  { uint32_t k=!c->t; R(13)+=R(10); if(k) goto L8c0e7dc4; }
L8c0e7ddc:;
  R(0)=0x0u;
L8c0e7dde:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7dec(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0f1358u;
  R(14)=R(4);
  ST32(R(15),R(5));
  { c->pr=0x8c0e7e00u; R(4)=LD32(R(14)+40); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7e0e;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e7e0au; R(4)=LD32(R(14)+40); f_8c0e6c9a(c); }
  {  goto L8c0e7e28; }
L8c0e7e0e:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e7e14u; R(4)=LD32(R(14)+40); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7e28;
  R(2)=LD32(R(14)+40);
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(1)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0e7e58;
L8c0e7e28:;
  R(0)=0xffffff01u;
  {  goto L8c0e7ece; }
L8c0e7e58:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e7e5eu; R(4)=LD32(R(14)+40); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7e68;
  R(0)=0xffffff03u;
  {  goto L8c0e7ece; }
L8c0e7e68:;
  R(0)=0x40u;
  R(3)=0xfffau;
  R(2)=LD32(R(14)+R(0));
  c->t=R(2)==R(3);
  { uint32_t k=!c->t; R(13)=LD32(R(14)+40); if(k) goto L8c0e7e80; }
  R(2)=LD32(R(14)+52);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e7e86;
  R(0)=0xffff0000u;
  {  goto L8c0e7ece; }
L8c0e7e80:;
  R(2)=LD32(R(14)+52);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e7e8a;
L8c0e7e86:;
  { R(0)=0x0u; goto L8c0e7ece; }
L8c0e7e8a:;
  R(2)=LD32(R(14)+R(0));
  R(3)=0xfffcu;
  c->t=R(2)==R(3);
  if(c->t) goto L8c0e7e9a;
  R(2)=LD32(R(14)+R(0));
  R(3)=0xffffu;
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0e7ea0;
L8c0e7e9a:;
  R(0)=0xffffff41u;
  {  goto L8c0e7ece; }
L8c0e7ea0:;
  R(12)=LD32(R(14)+R(0));
  R(3)=0x8c0e5da0u;
  R(6)=LD32(R(15));
  R(5)=R(12);
  { c->pr=0x8c0e7eacu; R(4)=R(13); f_8c0e5da0(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e7eb6;
  { R(0)=R(4); goto L8c0e7ece; }
L8c0e7eb6:;
  R(3)=0x8c0e9950u;
  R(5)=R(12);
  { c->pr=0x8c0e7ebeu; R(4)=R(13); f_8c0e9950(c); }
  R(1)=0x40u;
  R(1)+=R(14);
  R(0)=R(0)&0xFFFF;
  ST32(R(1),R(0));
  R(3)=LD32(R(14)+52);
  R(3)+=0xffffffffu;
  R(0)=R(3);
  ST32(R(14)+52,R(3));
L8c0e7ece:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7eda(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(3)=0x148u;
  R(14)=R(4);
  R(0)=0x8c2f2e3eu;
  c->macl=R(14)*R(3);
  ST32(R(15),R(5));
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e7f1e;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e7ef8u; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7f06;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e7f02u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e7f1e; }
L8c0e7f06:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e7f0cu; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7f1e;
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(14)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e7f60;
L8c0e7f1e:;
  R(0)=0xffffff01u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e7f60:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e7f66u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7f74;
  R(0)=0xffffff03u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e7f74:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(3)=0x8c0e94e6u;
  R(6)+=0x4u;
  { c->pr=0x8c0e7f80u; R(4)=R(14); f_8c0e94e6(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e7f8e;
  R(0)=0x0u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e7f8e:;
  R(0)=0xffffff05u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e7f98(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(13)*R(14);
  ST32(R(15),R(5));
  R(14)=c->macl;
  ST32(R(15)+4,R(14));
  R(14)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7fe2;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e7fbeu; R(4)=R(13); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7fcc;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e7fc8u; R(4)=R(13); f_8c0e6c9a(c); }
  {  goto L8c0e7fe2; }
L8c0e7fcc:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e7fd2u; R(4)=R(13); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e7fe2;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e7fe8;
L8c0e7fe2:;
  R(0)=0xffffff01u;
  {  goto L8c0e8084; }
L8c0e7fe8:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e7feeu; R(4)=R(13); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e7ff8;
  R(0)=0xffffff03u;
  {  goto L8c0e8084; }
L8c0e7ff8:;
  R(3)=0x8c0e9a04u;
  R(12)=0x0u;
  R(5)=R(12);
  ST32(R(14)+24,R(12));
  { c->pr=0x8c0e8004u; R(4)=R(13); f_8c0e9a04(c); }
  R(5)=R(12);
  R(7)=R(12);
  R(4)=R(0);
  { R(13)=0x1u; goto L8c0e802c; }
L8c0e800e:;
  R(1)=(int32_t)(int8_t)LD8(R(4));
  R(6)=R(1)&0xFF;
  R(0)=R(6);
  c->t=(int32_t)R(0)==51;
  if(c->t) goto L8c0e801e;
  R(2)=0xccu;
  c->t=R(6)==R(2);
  if(!c->t) goto L8c0e8022;
L8c0e801e:;
  { R(7)=R(13); goto L8c0e8034; }
L8c0e8022:;
  R(3)=LD32(R(14)+24);
  R(4)+=0x20u;
  R(5)+=0x1u;
  R(3)+=0x1u;
  ST32(R(14)+24,R(3));
L8c0e802c:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+48);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0e800e;
L8c0e8034:;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0e803e;
  R(0)=0xffffff05u;
  {  goto L8c0e8084; }
L8c0e803e:;
  R(5)=R(4);
  R(4)=LD32(R(15));
  R(5)+=0x4u;
  R(13)=R(4);
  { R(13)+=0xcu; goto L8c0e8076; }
L8c0e8070:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e8076:;
  c->t=R(4)>=R(13);
  if(!c->t) goto L8c0e8070;
  R(0)=0x0u;
  ST8(R(13),R(12));
  R(3)=LD32(R(14)+24);
  R(3)+=0x1u;
  ST32(R(14)+24,R(3));
L8c0e8084:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8090(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(13)*R(14);
  ST32(R(15),R(5));
  R(14)=c->macl;
  ST32(R(15)+4,R(14));
  R(14)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e80d8;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e80b4u; R(4)=R(13); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e80c2;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e80beu; R(4)=R(13); f_8c0e6c9a(c); }
  {  goto L8c0e80d8; }
L8c0e80c2:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e80c8u; R(4)=R(13); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e80d8;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e80de;
L8c0e80d8:;
  R(0)=0xffffff01u;
  {  goto L8c0e814c; }
L8c0e80de:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e80e4u; R(4)=R(13); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e80ee;
  R(0)=0xffffff03u;
  {  goto L8c0e814c; }
L8c0e80ee:;
  R(3)=0x8c0e9a04u;
  R(5)=LD32(R(14)+24);
  { c->pr=0x8c0e80f6u; R(4)=R(13); f_8c0e9a04(c); }
  R(5)=LD32(R(14)+24);
  R(7)=0x0u;
  R(4)=R(0);
  { R(1)=0x1u; goto L8c0e811e; }
L8c0e8100:;
  R(3)=LD32(R(14)+24);
  R(3)+=0x1u;
  ST32(R(14)+24,R(3));
  R(13)=(int32_t)(int8_t)LD8(R(4));
  R(6)=R(13)&0xFF;
  R(0)=R(6);
  c->t=(int32_t)R(0)==51;
  if(c->t) goto L8c0e8116;
  R(3)=0xccu;
  c->t=R(6)==R(3);
  if(!c->t) goto L8c0e811a;
L8c0e8116:;
  { R(7)=R(1); goto L8c0e8126; }
L8c0e811a:;
  R(4)+=0x20u;
  R(5)+=0x1u;
L8c0e811e:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+48);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0e8100;
L8c0e8126:;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0e8130;
  R(0)=0xffffff05u;
  {  goto L8c0e814c; }
L8c0e8130:;
  R(5)=R(4);
  R(4)=LD32(R(15));
  R(5)+=0x4u;
  R(14)=R(4);
  { R(14)+=0xcu; goto L8c0e8142; }
L8c0e813c:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e8142:;
  c->t=R(4)>=R(14);
  if(!c->t) goto L8c0e813c;
  R(3)=0x0u;
  R(0)=R(3);
  ST8(R(14),R(3));
L8c0e814c:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8178(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(14)=0x148u;
  R(12)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(12)*R(14);
  ST32(R(15),R(5));
  R(14)=c->macl;
  ST32(R(15)+4,R(14));
  R(14)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(13)=R(6); if(k) goto L8c0e81c6; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e81a2u; R(4)=R(12); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e81b0;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e81acu; R(4)=R(12); f_8c0e6c9a(c); }
  {  goto L8c0e81c6; }
L8c0e81b0:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e81b6u; R(4)=R(12); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e81c6;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e81cc;
L8c0e81c6:;
  R(0)=0xffffff01u;
  {  goto L8c0e82a8; }
L8c0e81cc:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e81d2u; R(4)=R(12); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e81dc;
  R(0)=0xffffff03u;
  {  goto L8c0e82a8; }
L8c0e81dc:;
  R(3)=0x8c0e9a04u;
  R(11)=0x0u;
  R(5)=R(11);
  ST32(R(14)+24,R(11));
  { c->pr=0x8c0e81e8u; R(4)=R(12); f_8c0e9a04(c); }
  R(5)=R(11);
  R(7)=R(11);
  R(4)=R(0);
  { R(12)=0x1u; goto L8c0e8210; }
L8c0e81f2:;
  R(6)=(int32_t)(int8_t)LD8(R(4));
  R(1)=R(6)&0xFF;
  R(0)=R(1);
  c->t=(int32_t)R(0)==51;
  if(c->t) goto L8c0e8202;
  R(2)=0xccu;
  c->t=R(1)==R(2);
  if(!c->t) goto L8c0e8206;
L8c0e8202:;
  { R(7)=R(12); goto L8c0e8218; }
L8c0e8206:;
  R(3)=LD32(R(14)+24);
  R(4)+=0x20u;
  R(5)+=0x1u;
  R(3)+=0x1u;
  ST32(R(14)+24,R(3));
L8c0e8210:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+48);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0e81f2;
L8c0e8218:;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0e8222;
  R(0)=0xffffff05u;
  {  goto L8c0e82a8; }
L8c0e8222:;
  R(5)=LD32(R(15));
  R(6)=R(4);
  R(6)+=0x4u;
  R(1)=R(5);
  { R(1)+=0xcu; goto L8c0e8256; }
L8c0e8250:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  ST8(R(5),R(3));
  R(5)+=0x1u;
L8c0e8256:;
  c->t=R(5)>=R(1);
  if(!c->t) goto L8c0e8250;
  R(2)=0x8c0e946au;
  R(5)=R(15);
  ST8(R(1),R(11));
  R(3)=LD32(R(14)+24);
  R(3)+=0x1u;
  ST32(R(14)+24,R(3));
  { c->pr=0x8c0e826au; R(5)+=0x8u; f_8c0e946a(c); }
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+44);
  R(3)=LD32(R(15)+48);
  R(2)+=0x1u;
  c->macl=R(3)*R(2);
  R(3)=0xccu;
  R(2)=c->macl;
  ST32(R(13),R(2));
  R(0)=LD32(R(15)+48);
  ST16(R(13)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  ST8(R(13)+6,R(0));
  R(0)=0x12u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(13)+7,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  ST16(R(13)+8,R(0));
  R(2)=LD32(R(15)+12);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0e8296;
  { R(0)=R(12); goto L8c0e8298; }
L8c0e8296:;
  R(0)=R(11);
L8c0e8298:;
  R(5)=R(15);
  R(3)=0x8c0e9c02u;
  R(4)=R(13);
  ST8(R(13)+6,R(0));
  R(5)+=0x28u;
  { c->pr=0x8c0e82a6u; R(4)+=0xau; f_8c0e9c02(c); }
  R(0)=0x0u;
L8c0e82a8:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e82b6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(13)=0x148u;
  R(12)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(12)*R(13);
  ST32(R(15),R(5));
  R(13)=c->macl;
  ST32(R(15)+4,R(13));
  R(13)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(14)=R(6); if(k) goto L8c0e8306; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e82e2u; R(4)=R(12); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e82f0;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e82ecu; R(4)=R(12); f_8c0e6c9a(c); }
  {  goto L8c0e8306; }
L8c0e82f0:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e82f6u; R(4)=R(12); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8306;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e830c;
L8c0e8306:;
  R(0)=0xffffff01u;
  {  goto L8c0e83e8; }
L8c0e830c:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8312u; R(4)=R(12); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e831c;
  R(0)=0xffffff03u;
  {  goto L8c0e83e8; }
L8c0e831c:;
  R(3)=0x8c0e9a04u;
  R(5)=LD32(R(13)+24);
  { c->pr=0x8c0e8324u; R(4)=R(12); f_8c0e9a04(c); }
  R(5)=LD32(R(13)+24);
  R(10)=0x0u;
  R(4)=R(0);
  R(11)=R(10);
  { R(12)=0x1u; goto L8c0e8378; }
L8c0e8330:;
  R(3)=LD32(R(13)+24);
  R(3)+=0x1u;
  ST32(R(13)+24,R(3));
  R(7)=(int32_t)(int8_t)LD8(R(4));
  R(6)=R(7)&0xFF;
  R(0)=R(6);
  c->t=(int32_t)R(0)==51;
  if(c->t) goto L8c0e8346;
  R(3)=0xccu;
  c->t=R(6)==R(3);
  if(!c->t) goto L8c0e8374;
L8c0e8346:;
  { R(11)=R(12); goto L8c0e8380; }
L8c0e8374:;
  R(4)+=0x20u;
  R(5)+=0x1u;
L8c0e8378:;
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2)+48);
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0e8330;
L8c0e8380:;
  c->t=(R(11)&R(11))==0;
  if(!c->t) goto L8c0e838a;
  R(0)=0xffffff05u;
  {  goto L8c0e83e8; }
L8c0e838a:;
  R(5)=LD32(R(15));
  R(6)=R(4);
  R(6)+=0x4u;
  R(11)=R(5);
  { R(11)+=0xcu; goto L8c0e839c; }
L8c0e8396:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  ST8(R(5),R(3));
  R(5)+=0x1u;
L8c0e839c:;
  c->t=R(5)>=R(11);
  if(!c->t) goto L8c0e8396;
  R(3)=0x8c0e946au;
  R(5)=R(15);
  ST8(R(11),R(10));
  { c->pr=0x8c0e83aau; R(5)+=0x8u; f_8c0e946a(c); }
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2)+44);
  R(2)=LD32(R(15)+48);
  R(3)+=0x1u;
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  ST32(R(14),R(3));
  R(0)=LD32(R(15)+48);
  R(3)=0xccu;
  ST16(R(14)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  ST8(R(14)+6,R(0));
  R(0)=0x12u;
  R(0)=(int32_t)(int8_t)LD8(R(15)+R(0));
  ST8(R(14)+7,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+16);
  ST16(R(14)+8,R(0));
  R(2)=LD32(R(15)+12);
  c->t=R(2)==R(3);
  if(!c->t) goto L8c0e83d6;
  { R(0)=R(12); goto L8c0e83d8; }
L8c0e83d6:;
  R(0)=R(10);
L8c0e83d8:;
  R(5)=R(15);
  R(3)=0x8c0e9c02u;
  R(4)=R(14);
  ST8(R(14)+6,R(0));
  R(5)+=0x28u;
  { c->pr=0x8c0e83e6u; R(4)+=0xau; f_8c0e9c02(c); }
  R(0)=0x0u;
L8c0e83e8:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e83f8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffccu;
  R(6)=R(15);
  R(3)=0x8c0e94e6u;
  R(14)=R(4);
  R(6)+=0x8u;
  ST32(R(15),R(5));
  { c->pr=0x8c0e8416u; R(4)=R(14); f_8c0e94e6(c); }
  R(11)=R(0);
  c->t=(int32_t)R(11)>=0;
  if(c->t) goto L8c0e8422;
  R(0)=0xffffff05u;
  {  goto L8c0e8472; }
L8c0e8422:;
  R(3)=0x8c0e9a04u;
  R(5)=R(11);
  { c->pr=0x8c0e842au; R(4)=R(14); f_8c0e9a04(c); }
  R(3)=0x8c0e9a90u;
  ST32(R(15)+4,R(0));
  R(5)=LD32(R(15));
  { c->pr=0x8c0e8434u; R(4)=R(14); f_8c0e9a90(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e845e;
  R(10)=0xfffcu;
  R(13)=LD32(R(15)+20);
  { R(12)=0x0u; goto L8c0e8458; }
L8c0e8440:;
  R(2)=0x8c0e9950u;
  R(5)=R(13);
  { c->pr=0x8c0e8448u; R(4)=R(14); f_8c0e9950(c); }
  R(3)=0x8c0e991eu;
  R(5)=R(13);
  R(9)=R(0)&0xFFFF;
  R(6)=R(10);
  { c->pr=0x8c0e8454u; R(4)=R(14); f_8c0e991e(c); }
  R(12)+=0x1u;
  R(13)=R(9);
L8c0e8458:;
  R(2)=LD32(R(15)+48);
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  if(!c->t) goto L8c0e8440;
L8c0e845e:;
  R(3)=0x8c0686b8u;
  R(5)=0x0u;
  R(6)=0x20u;
  { c->pr=0x8c0e8468u; R(4)=LD32(R(15)+4); f_8c0686b8(c); }
  R(2)=0x8c0e9a1cu;
  R(5)=R(11);
  { c->pr=0x8c0e8470u; R(4)=R(14); f_8c0e9a1c(c); }
  R(0)=0x0u;
L8c0e8472:;
  R(15)+=0x34u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e84b0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  R(2)=0x1u;
  c->macl=R(14)*R(13);
  R(0)=0x8c0f4504u;
  ST32(R(15),R(5));
  R(13)=c->macl;
  ST32(R(15)+4,R(13));
  R(13)+=R(3);
  ST32(R(13)+48,R(2));
  R(1)=LD32(R(13)+4);
  R(2)=R(1);
  R(1)<<=2;
  R(1)+=R(2);
  R(1)<<=2;
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  ST32(R(13)+52,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e850e;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e84eau; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e84f8;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e84f4u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e850e; }
L8c0e84f8:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e84feu; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e850e;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8514;
L8c0e850e:;
  R(0)=0xffffff01u;
  {  goto L8c0e855e; }
L8c0e8514:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e851au; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8524;
  R(0)=0xffffff03u;
  {  goto L8c0e855e; }
L8c0e8524:;
  R(3)=0x8c0e9a6cu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e852cu; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8536;
  R(0)=0xffffff0bu;
  {  goto L8c0e855e; }
L8c0e8536:;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e853cu; R(4)=R(14); f_8c0e83f8(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0e854c; }
  { c->pr=0x8c0e8546u; R(4)=R(14); f_8c0e92c6(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0e8550; }
L8c0e854c:;
  { R(0)=R(4); goto L8c0e855e; }
L8c0e8550:;
  R(4)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(2)=0x8c0e9770u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0e9770(c); return; } }
L8c0e855e:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8590(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  R(11)=0x1u;
  c->macl=R(14)*R(13);
  R(0)=0x8c0f452cu;
  ST32(R(15),R(5));
  R(13)=c->macl;
  ST32(R(15)+4,R(13));
  R(13)+=R(3);
  ST32(R(13)+48,R(11));
  R(2)=LD32(R(13)+4);
  R(1)=R(2);
  R(2)<<=2;
  R(2)+=R(1);
  R(2)<<=2;
  R(2)<<=2;
  R(0)=LD32(R(2)+R(0));
  ST32(R(13)+52,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(12)=R(6); if(k) goto L8c0e85fa; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e85d6u; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e85e4;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e85e0u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e85fa; }
L8c0e85e4:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e85eau; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e85fa;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8600;
L8c0e85fa:;
  R(0)=0xffffff01u;
  {  goto L8c0e869a; }
L8c0e8600:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8606u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8610;
  R(0)=0xffffff03u;
  {  goto L8c0e869a; }
L8c0e8610:;
  R(8)=0x0u;
  c->t=(int32_t)R(12)>0;
  R(10)=R(8);
  { uint32_t k=!c->t; R(13)=LD32(R(15)); if(k) goto L8c0e862e; }
L8c0e861a:;
  R(2)=0x8c0e9a6cu;
  R(5)=LD32(R(13));
  { c->pr=0x8c0e8622u; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e866a;
  R(10)+=0x1u;
  c->t=(int32_t)R(10)>=(int32_t)R(12);
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0e861a; }
L8c0e862e:;
  c->t=(int32_t)R(12)>0;
  R(10)=R(8);
  R(9)=R(8);
  { uint32_t k=!c->t; R(13)=LD32(R(15)); if(k) goto L8c0e864c; }
L8c0e8638:;
  R(5)=LD32(R(13));
  { c->pr=0x8c0e863eu; R(4)=R(14); f_8c0e83f8(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; R(10)+=0x1u; if(k) goto L8c0e8646; }
  R(9)=R(11);
L8c0e8646:;
  c->t=(int32_t)R(10)>=(int32_t)R(12);
  { uint32_t k=!c->t; R(13)+=0x4u; if(k) goto L8c0e8638; }
L8c0e864c:;
  { c->pr=0x8c0e8650u; R(4)=R(14); f_8c0e92c6(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0e8662; }
  R(2)=0x8c0e9770u;
  { c->pr=0x8c0e865cu; R(4)=R(14); f_8c0e9770(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0e8666; }
L8c0e8662:;
  { R(0)=R(4); goto L8c0e869a; }
L8c0e8666:;
  c->t=(R(9)&R(9))==0;
  if(c->t) goto L8c0e8698;
L8c0e866a:;
  R(0)=0xffffff0au;
  {  goto L8c0e869a; }
L8c0e8698:;
  R(0)=0x0u;
L8c0e869a:;
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
void f_8c0e86ae(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc8u;
  R(13)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  R(2)=0x1u;
  c->macl=R(14)*R(13);
  R(0)=0x8c0f4508u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(13)=c->macl;
  ST32(R(15)+8,R(13));
  R(13)+=R(3);
  ST32(R(13)+48,R(2));
  R(1)=LD32(R(13)+4);
  R(2)=R(1);
  R(1)<<=2;
  R(1)+=R(2);
  R(1)<<=2;
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  ST32(R(13)+52,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e870e;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e86eau; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e86f8;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e86f4u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e870e; }
L8c0e86f8:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e86feu; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e870e;
  R(2)=LD32(R(15)+8);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8714;
L8c0e870e:;
  R(0)=0xffffff01u;
  {  goto L8c0e87ba; }
L8c0e8714:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e871au; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8724;
  R(0)=0xffffff03u;
  {  goto L8c0e87ba; }
L8c0e8724:;
  R(3)=0x8c0e9a6cu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e872cu; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8736;
  R(0)=0xffffff0bu;
  {  goto L8c0e87ba; }
L8c0e8736:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(6)+=0xcu;
  { c->pr=0x8c0e8740u; R(4)=R(14); f_8c0e94e6(c); }
  R(13)=R(0);
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c0e874c;
  R(0)=0xffffff05u;
  {  goto L8c0e87ba; }
L8c0e874c:;
  R(5)=LD32(R(15)+4);
  R(6)=R(15);
  R(6)+=0xcu;
  { c->pr=0x8c0e8756u; R(4)=R(14); f_8c0e94e6(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e8760;
  R(0)=0xffffff06u;
  {  goto L8c0e87ba; }
L8c0e8760:;
  R(3)=0x8c0e9a04u;
  R(5)=R(13);
  { c->pr=0x8c0e8768u; R(4)=R(14); f_8c0e9a04(c); }
  R(5)=R(0);
  R(4)=R(5);
  R(7)=LD32(R(15)+4);
  R(6)=R(5);
  R(4)+=0x4u;
  { R(6)+=0x10u; goto L8c0e87aa; }
L8c0e87a4:;
  {int32_t v=(int8_t)LD8(R(7));R(7)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e87aa:;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0e87a4;
  R(3)=0x8c0e9a1cu;
  R(5)=R(13);
  { c->pr=0x8c0e87b6u; R(4)=R(14); f_8c0e9a1c(c); }
  { c->pr=0x8c0e87bau; R(4)=R(14); f_8c0e92c6(c); }
L8c0e87ba:;
  R(15)+=0x38u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e87c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc0u;
  R(13)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  R(2)=0x1u;
  c->macl=R(14)*R(13);
  R(0)=0x8c0f4510u;
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(13)=c->macl;
  ST32(R(15)+8,R(13));
  R(13)+=R(3);
  ST32(R(13)+48,R(2));
  R(1)=LD32(R(13)+4);
  R(2)=R(1);
  R(1)<<=2;
  R(1)+=R(2);
  R(1)<<=2;
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  ST32(R(13)+52,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8826;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e8802u; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8810;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e880cu; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e8826; }
L8c0e8810:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e8816u; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8826;
  R(2)=LD32(R(15)+8);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e882c;
L8c0e8826:;
  R(0)=0xffffff01u;
  {  goto L8c0e88ce; }
L8c0e882c:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8832u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e883c;
  R(0)=0xffffff03u;
  {  goto L8c0e88ce; }
L8c0e883c:;
  R(3)=0x8c0e9a6cu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e8844u; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e884e;
  R(0)=0xffffff0bu;
  {  goto L8c0e88ce; }
L8c0e884e:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(6)+=0xcu;
  { c->pr=0x8c0e8858u; R(4)=R(14); f_8c0e94e6(c); }
  R(13)=R(0);
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c0e8864;
  R(0)=0xffffff05u;
  {  goto L8c0e88ce; }
L8c0e8864:;
  R(3)=0x8c0e9a04u;
  R(5)=R(13);
  { c->pr=0x8c0e886cu; R(4)=R(14); f_8c0e9a04(c); }
  R(3)=0x8c0e9b7cu;
  R(12)=R(0);
  R(5)=LD32(R(15)+4);
  R(4)=R(15);
  { c->pr=0x8c0e8878u; R(4)+=0x38u; f_8c0e9b7c(c); }
  R(4)=R(12);
  R(5)=R(15);
  R(6)=R(12);
  R(4)+=0x10u;
  R(5)+=0x38u;
  { R(6)+=0x18u; goto L8c0e88be; }
L8c0e88b8:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e88be:;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0e88b8;
  R(3)=0x8c0e9a1cu;
  R(5)=R(13);
  { c->pr=0x8c0e88cau; R(4)=R(14); f_8c0e9a1c(c); }
  { c->pr=0x8c0e88ceu; R(4)=R(14); f_8c0e92c6(c); }
L8c0e88ce:;
  R(15)+=0x40u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e88da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(3)=0x148u;
  R(14)=R(4);
  R(0)=0x8c2f2e3eu;
  c->macl=R(14)*R(3);
  ST32(R(15),R(5));
  ST32(R(15)+4,R(6));
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e8920;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e88fau; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8908;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e8904u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e8920; }
L8c0e8908:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e890eu; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8920;
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(14)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e892a;
L8c0e8920:;
  R(0)=0xffffff01u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e892a:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8930u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e893e;
  R(0)=0xffffff03u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e893e:;
  R(3)=0x8c0e9a6cu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e8946u; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8954;
  R(0)=0xffffff0bu;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e8954:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(6)+=0x10u;
  { c->pr=0x8c0e895eu; R(4)=R(14); f_8c0e94e6(c); }
  R(5)=R(0);
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0e896e;
  R(0)=0xffffff05u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e896e:;
  R(3)=0x8c0e9a04u;
  { c->pr=0x8c0e8974u; R(4)=R(14); f_8c0e9a04(c); }
  R(14)=R(15);
  R(14)+=0x8u;
  R(6)=R(0);
  R(5)=R(14);
  R(4)=R(14);
  R(6)+=0x10u;
  { R(5)+=0x8u; goto L8c0e898a; }
L8c0e8984:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e898a:;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0e8984;
  R(3)=0x8c0e9c02u;
  R(5)=R(14);
  { c->pr=0x8c0e8996u; R(4)=LD32(R(15)+4); f_8c0e9c02(c); }
  R(0)=0x0u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e892a(SH4Ctx *c) {
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8930u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e893e;
  R(0)=0xffffff03u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e893e:;
  R(3)=0x8c0e9a6cu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e8946u; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8954;
  R(0)=0xffffff0bu;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e8954:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(6)+=0x10u;
  { c->pr=0x8c0e895eu; R(4)=R(14); f_8c0e94e6(c); }
  R(5)=R(0);
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0e896e;
  R(0)=0xffffff05u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e896e:;
  R(3)=0x8c0e9a04u;
  { c->pr=0x8c0e8974u; R(4)=R(14); f_8c0e9a04(c); }
  R(14)=R(15);
  R(14)+=0x8u;
  R(6)=R(0);
  R(5)=R(14);
  R(4)=R(14);
  R(6)+=0x10u;
  { R(5)+=0x8u; goto L8c0e898a; }
L8c0e8984:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e898a:;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0e8984;
  R(3)=0x8c0e9c02u;
  R(5)=R(14);
  { c->pr=0x8c0e8996u; R(4)=LD32(R(15)+4); f_8c0e9c02(c); }
  R(0)=0x0u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e893e(SH4Ctx *c) {
  R(3)=0x8c0e9a6cu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e8946u; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8954;
  R(0)=0xffffff0bu;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e8954:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(6)+=0x10u;
  { c->pr=0x8c0e895eu; R(4)=R(14); f_8c0e94e6(c); }
  R(5)=R(0);
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0e896e;
  R(0)=0xffffff05u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e896e:;
  R(3)=0x8c0e9a04u;
  { c->pr=0x8c0e8974u; R(4)=R(14); f_8c0e9a04(c); }
  R(14)=R(15);
  R(14)+=0x8u;
  R(6)=R(0);
  R(5)=R(14);
  R(4)=R(14);
  R(6)+=0x10u;
  { R(5)+=0x8u; goto L8c0e898a; }
L8c0e8984:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e898a:;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0e8984;
  R(3)=0x8c0e9c02u;
  R(5)=R(14);
  { c->pr=0x8c0e8996u; R(4)=LD32(R(15)+4); f_8c0e9c02(c); }
  R(0)=0x0u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8954(SH4Ctx *c) {
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(6)+=0x10u;
  { c->pr=0x8c0e895eu; R(4)=R(14); f_8c0e94e6(c); }
  R(5)=R(0);
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0e896e;
  R(0)=0xffffff05u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e896e:;
  R(3)=0x8c0e9a04u;
  { c->pr=0x8c0e8974u; R(4)=R(14); f_8c0e9a04(c); }
  R(14)=R(15);
  R(14)+=0x8u;
  R(6)=R(0);
  R(5)=R(14);
  R(4)=R(14);
  R(6)+=0x10u;
  { R(5)+=0x8u; goto L8c0e898a; }
L8c0e8984:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e898a:;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0e8984;
  R(3)=0x8c0e9c02u;
  R(5)=R(14);
  { c->pr=0x8c0e8996u; R(4)=LD32(R(15)+4); f_8c0e9c02(c); }
  R(0)=0x0u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e896e(SH4Ctx *c) {
  R(3)=0x8c0e9a04u;
  { c->pr=0x8c0e8974u; R(4)=R(14); f_8c0e9a04(c); }
  R(14)=R(15);
  R(14)+=0x8u;
  R(6)=R(0);
  R(5)=R(14);
  R(4)=R(14);
  R(6)+=0x10u;
  { R(5)+=0x8u; goto L8c0e898a; }
L8c0e8984:;
  {int32_t v=(int8_t)LD8(R(6));R(6)+=1;R(3)=(uint32_t)v;}
  ST8(R(4),R(3));
  R(4)+=0x1u;
L8c0e898a:;
  c->t=R(4)>=R(5);
  if(!c->t) goto L8c0e8984;
  R(3)=0x8c0e9c02u;
  R(5)=R(14);
  { c->pr=0x8c0e8996u; R(4)=LD32(R(15)+4); f_8c0e9c02(c); }
  R(0)=0x0u;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e89d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffc4u;
  R(13)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  R(2)=0x1u;
  c->macl=R(14)*R(13);
  R(0)=R(6);
  ST32(R(15),R(5));
  ST16(R(15)+8,R(0));
  R(0)=R(7);
  ST8(R(15)+4,R(0));
  R(13)=c->macl;
  R(0)=0x8c0f4510u;
  ST32(R(15)+12,R(13));
  R(13)+=R(3);
  ST32(R(13)+48,R(2));
  R(1)=LD32(R(13)+4);
  R(2)=R(1);
  R(1)<<=2;
  R(1)+=R(2);
  R(1)<<=2;
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  ST32(R(13)+52,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8a3c;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e8a18u; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8a26;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e8a22u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e8a3c; }
L8c0e8a26:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e8a2cu; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8a3c;
  R(2)=LD32(R(15)+12);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8a42;
L8c0e8a3c:;
  R(0)=0xffffff01u;
  {  goto L8c0e8aae; }
L8c0e8a42:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8a48u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8a52;
  R(0)=0xffffff03u;
  {  goto L8c0e8aae; }
L8c0e8a52:;
  R(3)=0x8c0e9a6cu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e8a5au; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8a64;
  R(0)=0xffffff0bu;
  {  goto L8c0e8aae; }
L8c0e8a64:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(6)+=0x10u;
  { c->pr=0x8c0e8a6eu; R(4)=R(14); f_8c0e94e6(c); }
  R(13)=R(0);
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c0e8a7a;
  R(0)=0xffffff05u;
  {  goto L8c0e8aae; }
L8c0e8a7a:;
  R(3)=0x8c0e9a04u;
  R(5)=R(13);
  { c->pr=0x8c0e8a82u; R(4)=R(14); f_8c0e9a04(c); }
  R(3)=0x8c0f4050u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(12)=R(0); if(k) goto L8c0e8a9e; }
  R(1)=0x8c2f2e38u;
  R(5)=0x1au;
  R(2)=LD32(R(1));
  R(0)=LD32(R(2)+16);
  R(2)=R(15);
  R(2)+=0x8u;
  R(6)=(int32_t)(int16_t)LD16(R(2));
  { uint32_t tg=R(0); c->pr=0x8c0e8a9eu; R(4)=R(12); sh4_call(c,tg); }
L8c0e8a9e:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(5)=R(13);
  R(3)=0x8c0e9a1cu;
  ST8(R(12)+1,R(0));
  { c->pr=0x8c0e8aaau; R(4)=R(14); f_8c0e9a1c(c); }
  { c->pr=0x8c0e8aaeu; R(4)=R(14); f_8c0e92c6(c); }
L8c0e8aae:;
  R(15)+=0x3cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8af0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd0u;
  R(3)=0x148u;
  R(14)=R(4);
  R(0)=0x8c2f2e3eu;
  c->macl=R(14)*R(3);
  ST32(R(15),R(5));
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e8b34;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e8b0eu; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8b1c;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e8b18u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e8b34; }
L8c0e8b1c:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e8b22u; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8b34;
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(14)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e8b3e;
L8c0e8b34:;
  R(0)=0xffffff01u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e8b3e:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8b44u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8b52;
  R(0)=0xffffff03u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e8b52:;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e8b58u; R(4)=R(14); f_8c0e9a6c(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8b66;
  R(0)=0xffffff0bu;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e8b66:;
  R(5)=LD32(R(15));
  R(6)=R(15);
  R(6)+=0x4u;
  { c->pr=0x8c0e8b70u; R(4)=R(14); f_8c0e94e6(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e8b80;
  R(0)=0xffffff05u;
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e8b80:;
  R(0)=LD32(R(15)+44);
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8b8a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(3)=0x148u;
  R(14)=R(4);
  R(0)=0x8c2f2e3eu;
  c->macl=R(14)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(13)=R(5); if(k) goto L8c0e8bd0; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e8baau; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8bb8;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e8bb4u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e8bd0; }
L8c0e8bb8:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e8bbeu; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8bd0;
  R(3)=0x148u;
  R(0)=0x8c2f2e44u;
  c->macl=R(14)*R(3);
  R(3)=c->macl;
  R(2)=(int32_t)(int8_t)LD8(R(3)+R(0));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e8bf8;
L8c0e8bd0:;
  R(0)=0xffffff01u;
  {  goto L8c0e8c38; }
L8c0e8bf8:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8bfeu; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8c08;
  R(0)=0xffffff03u;
  {  goto L8c0e8c38; }
L8c0e8c08:;
  R(5)=R(15);
  { c->pr=0x8c0e8c0eu; R(4)=R(14); f_8c0e9556(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e8c1a;
  R(0)=0xffffff05u;
  {  goto L8c0e8c38; }
L8c0e8c1a:;
  R(6)=0x0u;
  R(4)=R(6);
  { R(5)=0xcu; goto L8c0e8c2e; }
L8c0e8c22:;
  R(3)=R(15);
  R(3)+=0x10u;
  R(0)=R(4);
  R(3)=(int32_t)(int8_t)LD8(R(3)+R(0));
  R(4)+=0x1u;
  ST8(R(13)+R(0),R(3));
L8c0e8c2e:;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0e8c22;
  R(0)=R(6);
  ST8(R(13)+12,R(0));
  R(0)=0x0u;
L8c0e8c38:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8c42(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(13)*R(14);
  R(14)=c->macl;
  ST32(R(15),R(14));
  R(14)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8c88;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e8c64u; R(4)=R(13); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8c72;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e8c6eu; R(4)=R(13); f_8c0e6c9a(c); }
  {  goto L8c0e8c88; }
L8c0e8c72:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e8c78u; R(4)=R(13); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8c88;
  R(2)=LD32(R(15));
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8c8e;
L8c0e8c88:;
  R(0)=0xffffff01u;
  {  goto L8c0e8cc0; }
L8c0e8c8e:;
  R(5)=LD32(R(14)+32);
  R(4)=0x0u;
  R(7)=0x10u;
  R(6)=R(4);
L8c0e8c96:;
  R(0)=(int32_t)(int8_t)LD8(R(5));
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==85;
  if(c->t) goto L8c0e8ca6;
  R(0)=R(4);
  ST8(R(14)+11,R(0));
  { ST8(R(14)+12,R(0)); goto L8c0e8cb8; }
L8c0e8ca6:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(5)+=0x1u; if(k) goto L8c0e8c96; }
  R(0)=0x8c2f387cu;
  R(13)<<=2;
  R(3)=LD32(R(13)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e8cbe;
L8c0e8cb8:;
  R(0)=0xffffff03u;
  {  goto L8c0e8cc0; }
L8c0e8cbe:;
  R(0)=0x0u;
L8c0e8cc0:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8d40(SH4Ctx *c) {
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8d46u; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8d54;
  R(0)=0xffffff03u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e8d54:;
  R(4)=LD32(R(15));
  R(5)=0x0u;
  R(4)=LD32(R(4)+32);
  R(4)+=0x10u;
  { R(6)=0x20u; goto L8c0e8d6c; }
L8c0e8d60:;
  R(2)=LD32(R(15)+4);
  R(5)+=0x1u;
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  {uint32_t v=R(3);R(2)-=1;ST8(R(2),v);}
L8c0e8d6c:;
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c0e8d60;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8d54(SH4Ctx *c) {
  R(4)=LD32(R(15));
  R(5)=0x0u;
  R(4)=LD32(R(4)+32);
  R(4)+=0x10u;
  { R(6)=0x20u; goto L8c0e8d6c; }
L8c0e8d60:;
  R(2)=LD32(R(15)+4);
  R(5)+=0x1u;
  R(2)+=0x1u;
  ST32(R(15)+4,R(2));
  {int32_t v=(int8_t)LD8(R(4));R(4)+=1;R(3)=(uint32_t)v;}
  {uint32_t v=R(3);R(2)-=1;ST8(R(2),v);}
L8c0e8d6c:;
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  if(!c->t) goto L8c0e8d60;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8d7a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(14)*R(13);
  ST32(R(15),R(5));
  R(13)=c->macl;
  ST32(R(15)+4,R(13));
  R(13)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8dc2;
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e8d9eu; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8dac;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e8da8u; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e8dc2; }
L8c0e8dac:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e8db2u; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e8dc2;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e8dc8;
L8c0e8dc2:;
  R(0)=0xffffff01u;
  {  goto L8c0e8e30; }
L8c0e8dc8:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e8dceu; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e8df4;
  R(0)=0xffffff03u;
  {  goto L8c0e8e30; }
L8c0e8df4:;
  R(5)=LD32(R(13)+32);
  R(6)=0x0u;
  R(7)=R(6);
  R(5)+=0x10u;
  { R(4)=0x20u; goto L8c0e8e06; }
L8c0e8e00:;
  ST8(R(5),R(6));
  R(5)+=0x1u;
  R(7)+=0x1u;
L8c0e8e06:;
  c->t=(int32_t)R(7)>=(int32_t)R(4);
  if(!c->t) goto L8c0e8e00;
  R(5)=LD32(R(13)+32);
  { R(5)+=0x10u; goto L8c0e8e20; }
L8c0e8e10:;
  R(2)=LD32(R(15));
  R(6)+=0x1u;
  R(2)+=0x1u;
  ST32(R(15),R(2));
  R(2)+=0xffffffffu;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  ST8(R(5),R(3));
  R(5)+=0x1u;
L8c0e8e20:;
  c->t=(int32_t)R(6)>=(int32_t)R(4);
  if(!c->t) goto L8c0e8e10;
  R(4)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0e95da(c); return; } }
L8c0e8e30:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8e3a(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0e8e3e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x148u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  c->macl=R(4)*R(13);
  R(3)=0x8c2f2e3cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=0x8c2f2e38u;
  R(13)=c->macl;
  R(13)+=R(3);
  { R(14)=0x0u; goto L8c0e8e78; }
L8c0e8e56:;
  R(3)=LD32(R(12));
  R(5)=R(14);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(3)+12);
  { uint32_t tg=R(2); c->pr=0x8c0e8e62u; R(4)=LD32(R(13)+36); sh4_call(c,tg); }
  R(1)=0xfffcu;
  R(4)=R(0)&0xFFFF;
  R(0)=R(4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e8e76;
  R(1)=0xffffu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e8e76;
  { R(0)=R(14); goto L8c0e8e82; }
L8c0e8e76:;
  R(14)+=0x1u;
L8c0e8e78:;
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2)+48);
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c0e8e56;
  R(0)=0xffffffffu;
L8c0e8e82:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8e8c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(13);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(5);
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(13)=c->macl;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c2f2e38u;
  R(13)+=R(3);
  R(12)=0xfffcu;
  R(14)=LD32(R(13)+28);
  R(14)=LD32(R(14)+48);
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>=(int32_t)R(11);
  if(!c->t) goto L8c0e8ece;
L8c0e8eb2:;
  R(3)=LD32(R(10));
  R(5)=R(14);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(3)+12);
  { uint32_t tg=R(2); c->pr=0x8c0e8ebeu; R(4)=LD32(R(13)+36); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(12);
  if(!c->t) goto L8c0e8ec8;
  { R(0)=R(14); goto L8c0e8ed0; }
L8c0e8ec8:;
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>=(int32_t)R(11);
  if(c->t) goto L8c0e8eb2;
L8c0e8ece:;
  R(0)=0xffffffffu;
L8c0e8ed0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8ede(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(12)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(12);
  R(11)=0x8c2f2e38u;
  ST32(R(15),R(5));
  R(12)=c->macl;
  R(12)+=R(3);
  R(14)=LD32(R(12)+40);
  { R(13)=0x0u; goto L8c0e8f32; }
L8c0e8f10:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(4)=R(4)&0xFF;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0e8f2e;
  R(2)=LD32(R(11));
  R(5)=0x2u;
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0e8f22u; R(4)=R(14); sh4_call(c,tg); }
  R(2)=LD32(R(15));
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(2);
  if(!c->t) goto L8c0e8f2e;
  { R(0)=R(14); goto L8c0e8f3c; }
L8c0e8f2e:;
  R(14)+=0x20u;
  R(13)+=0x1u;
L8c0e8f32:;
  R(2)=LD32(R(12)+28);
  R(3)=LD32(R(2)+48);
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c0e8f10;
  R(0)=0x0u;
L8c0e8f3c:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8f4a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=0x148u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  c->macl=R(12)*R(14);
  R(3)=0x8c2f2e3cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=c->macl;
  R(14)+=R(3);
  { R(13)=0x0u; goto L8c0e8fa2; }
L8c0e8f62:;
  R(5)=R(13);
  { c->pr=0x8c0e8f68u; R(4)=R(12); f_8c0e9950(c); }
  R(1)=0xfffcu;
  R(4)=R(0)&0xFFFF;
  R(0)=R(4);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e8fa0;
  R(1)=0xffffu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e8fa0;
  R(1)=0xfffau;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e8fa0;
  R(3)=LD32(R(14)+28);
  R(2)=LD32(R(3)+48);
  c->t=(int32_t)R(13)>=(int32_t)R(2);
  if(c->t) goto L8c0e8f92;
  R(1)=LD32(R(14)+28);
  R(3)=LD32(R(1)+48);
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(c->t) goto L8c0e8f9c;
  {  goto L8c0e8fa0; }
L8c0e8f92:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c0e8fa0;
L8c0e8f9c:;
  { R(0)=0xffffffffu; goto L8c0e8fae; }
L8c0e8fa0:;
  R(13)+=0x1u;
L8c0e8fa2:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c0e8f62;
  R(0)=0x0u;
L8c0e8fae:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e8fb8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(11)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(14)*R(11);
  R(11)=c->macl;
  ST32(R(15),R(11));
  R(11)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(11)+2);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=c->t; R(10)=R(5); if(k) goto L8c0e9022; }
  R(3)=0x8c0f1358u;
  { c->pr=0x8c0e8fe4u; R(4)=R(14); f_8c0f1358(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e900c;
  R(3)=0x8c0e6c9au;
  { c->pr=0x8c0e8feeu; R(4)=R(14); f_8c0e6c9a(c); }
  {  goto L8c0e9022; }
L8c0e900c:;
  R(2)=0x8c0f1398u;
  { c->pr=0x8c0e9012u; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e9022;
  R(2)=LD32(R(15));
  R(3)=0x8c2f2e3cu;
  R(2)+=R(3);
  R(0)=(int32_t)(int8_t)LD8(R(2)+8);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e9028;
L8c0e9022:;
  R(0)=0xffffff01u;
  {  goto L8c0e9126; }
L8c0e9028:;
  R(3)=0x8c0d9c1au;
  { c->pr=0x8c0e902eu; R(4)=R(14); f_8c0d9c1a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e9038;
  R(0)=0xffffff03u;
  {  goto L8c0e9126; }
L8c0e9038:;
  R(3)=LD32(R(11)+28);
  R(2)=LD32(R(3)+56);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e9056;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0e9048u; R(4)=R(14); f_8c0e8b8a(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0e9056;
  { c->pr=0x8c0e9052u; R(4)=R(14); f_8c0e8f4a(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e905c;
L8c0e9056:;
  R(0)=0xffffff0bu;
  {  goto L8c0e9126; }
L8c0e905c:;
  { c->pr=0x8c0e9060u; R(4)=R(14); f_8c0e8e3e(c); }
  R(13)=R(0);
  c->t=(int32_t)R(13)>=0;
  if(!c->t) goto L8c0e90fc;
  R(5)=R(13);
  R(5)+=0x1u;
  { c->pr=0x8c0e906eu; R(4)=R(14); f_8c0e8e8c(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>=0;
  if(!c->t) goto L8c0e90fc;
  R(9)=0x8c0e5da0u;
  R(5)=R(13);
  R(6)=R(10);
  { c->pr=0x8c0e907eu; R(4)=R(14); f_8c0e5da0(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0e9124;
  R(9)=0x8c0e5e78u;
  R(5)=R(12);
  R(6)=R(10);
  { c->pr=0x8c0e908eu; R(4)=R(14); f_8c0e5e78(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0e9124;
  R(5)=R(13);
  { c->pr=0x8c0e909au; R(4)=R(14); f_8c0e9810(c); }
  R(5)=R(0);
  c->t=(int32_t)R(5)>0;
  if(!c->t) goto L8c0e90aa;
  R(6)=R(12);
  { c->pr=0x8c0e90a6u; R(4)=R(14); f_8c0e991e(c); }
  {  goto L8c0e90be; }
L8c0e90aa:;
  R(5)=R(13);
  { c->pr=0x8c0e90b0u; R(4)=R(14); f_8c0e8ede(c); }
  R(9)=0x8c2f2e38u;
  R(6)=R(12);
  R(4)=R(0);
  R(3)=LD32(R(9));
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e90beu; R(5)=0x2u; sh4_call(c,tg); }
L8c0e90be:;
  R(5)=R(13);
  { c->pr=0x8c0e90c4u; R(4)=R(14); f_8c0e9950(c); }
  R(5)=R(12);
  R(6)=R(0);
  { c->pr=0x8c0e90ccu; R(4)=R(14); f_8c0e991e(c); }
  R(12)=0xfffcu;
  R(5)=R(13);
  R(6)=R(12);
  { c->pr=0x8c0e90d6u; R(4)=R(14); f_8c0e991e(c); }
  {  goto L8c0e905c; }
L8c0e90fc:;
  R(5)=0x100u;
  R(4)=R(11);
  R(4)+=0x48u;
  { R(6)=0x1u; goto L8c0e910a; }
L8c0e9106:;
  ST8(R(4),R(6));
  R(4)+=0x1u;
L8c0e910a:;
  R(2)=R(11);
  R(2)+=0x48u;
  R(2)+=R(5);
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c0e9106;
  { c->pr=0x8c0e9118u; R(4)=R(14); f_8c0e92c6(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0e9124; }
  { c->pr=0x8c0e9122u; R(4)=R(14); f_8c0e9770(c); }
  R(4)=R(0);
L8c0e9124:;
  R(0)=R(4);
L8c0e9126:;
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9138(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  R(4)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(12)*R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(4)=c->macl;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)+=R(3);
  R(8)=0x200u;
  R(5)=LD32(R(4)+28);
  R(9)=0xfffau;
  R(10)=LD32(R(5)+24);
  R(13)=LD32(R(5)+20);
  c->t=(int32_t)R(10)>0;
  { uint32_t k=!c->t; R(14)=LD32(R(4)+40); if(k) goto L8c0e9192; }
L8c0e9166:;
  R(3)=0x8c0e5da0u;
  R(5)=R(13)&0xFFFF;
  R(6)=R(14);
  { c->pr=0x8c0e9170u; R(4)=R(12); f_8c0e5da0(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e917a;
  { R(0)=R(4); goto L8c0e9194; }
L8c0e917a:;
  R(5)=R(13)&0xFFFF;
  { c->pr=0x8c0e9180u; R(4)=R(12); f_8c0e9950(c); }
  R(4)=R(0);
  R(2)=R(4)&0xFFFF;
  c->t=R(2)==R(9);
  if(c->t) goto L8c0e9192;
  R(11)+=0x1u;
  R(13)=R(4);
  c->t=(int32_t)R(11)>=(int32_t)R(10);
  { uint32_t k=!c->t; R(14)+=R(8); if(k) goto L8c0e9166; }
L8c0e9192:;
  R(0)=0x0u;
L8c0e9194:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e91a6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(9)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  R(11)=0x0u;
  c->macl=R(14)*R(9);
  R(10)=0xfffau;
  R(13)=R(10);
  R(9)=c->macl;
  R(9)+=R(3);
  R(4)=LD32(R(9)+28);
  R(0)=(int32_t)(int16_t)LD16(R(4)+20);
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(8)=LD32(R(4)+24);
  R(12)=R(0);
  c->t=(int32_t)R(8)>0;
  { uint32_t k=!c->t; R(13)+=0x2u; if(k) goto L8c0e9200; }
L8c0e91dc:;
  R(5)=R(12)&0xFFFF;
  ST32(R(15),R(5));
  { c->pr=0x8c0e91e4u; R(4)=R(14); f_8c0e9950(c); }
  R(5)=LD32(R(15));
  R(6)=R(13);
  R(12)=R(0);
  { c->pr=0x8c0e91eeu; R(4)=R(14); f_8c0e991e(c); }
  R(2)=R(12)&0xFFFF;
  c->t=R(2)==R(10);
  if(c->t) goto L8c0e9200;
  R(3)=R(12)&0xFFFF;
  c->t=R(3)==R(13);
  if(c->t) goto L8c0e9200;
  R(11)+=0x1u;
  c->t=(int32_t)R(11)>=(int32_t)R(8);
  if(!c->t) goto L8c0e91dc;
L8c0e9200:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(3)=R(8);
  R(3)+=0xffffffffu;
  R(12)=R(0);
  R(11)=0x0u;
  { ST32(R(15)+8,R(3)); goto L8c0e9288; }
L8c0e9220:;
  R(1)=R(11);
  R(1)<<=8;
  c->t=R(1)>>31;R(1)<<=1;
  ST32(R(15),R(1));
L8c0e9228:;
  R(6)=LD32(R(9)+40);
  R(5)=R(12)&0xFFFF;
  R(3)=LD32(R(15));
  R(2)=0x8c0e5e78u;
  R(6)+=R(3);
  { c->pr=0x8c0e9236u; R(4)=R(14); f_8c0e5e78(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0e925a;
  R(3)=0xffffff01u;
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0e9246;
  { R(0)=R(4); goto L8c0e92b2; }
L8c0e9246:;
  R(6)=0xffffu;
  R(5)=R(12)&0xFFFF;
  { c->pr=0x8c0e924eu; R(4)=R(14); f_8c0e991e(c); }
  R(2)=0x8c0e70dau;
  R(5)=R(13);
  { c->pr=0x8c0e9256u; R(4)=R(14); f_8c0e70da(c); }
  { R(12)=R(0); goto L8c0e9228; }
L8c0e925a:;
  c->t=(R(11)&R(11))==0;
  { uint32_t k=!c->t; R(6)=R(10); if(k) goto L8c0e9264; }
  R(0)=R(12);
  ST16(R(15)+4,R(0));
L8c0e9264:;
  R(5)=R(12)&0xFFFF;
  ST32(R(15)+12,R(5));
  { c->pr=0x8c0e926cu; R(4)=R(14); f_8c0e991e(c); }
  R(2)=LD32(R(15)+8);
  c->t=R(11)==R(2);
  if(c->t) goto L8c0e9286;
  R(2)=0x8c0e70dau;
  R(5)=R(13);
  { c->pr=0x8c0e927au; R(4)=R(14); f_8c0e70da(c); }
  R(6)=R(0);
  ST16(R(15),R(0));
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c0e9284u; R(4)=R(14); f_8c0e991e(c); }
  R(12)=(int32_t)(int16_t)LD16(R(15));
L8c0e9286:;
  R(11)+=0x1u;
L8c0e9288:;
  c->t=(int32_t)R(11)>=(int32_t)R(8);
  if(!c->t) goto L8c0e9220;
  R(3)=LD32(R(9)+28);
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(2)=LD32(R(3)+20);
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(2);
  if(c->t) goto L8c0e92b0;
  R(3)=0x8c2f2e38u;
  R(5)=0x4au;
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(1)=LD32(R(3));
  R(6)=R(0);
  R(2)=LD32(R(1)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e92a8u; R(4)=LD32(R(9)+32); sh4_call(c,tg); }
  { c->pr=0x8c0e92acu; R(4)=R(14); f_8c0e9770(c); }
  { c->pr=0x8c0e92b0u; R(4)=R(14); f_8c0e95da(c); }
L8c0e92b0:;
  R(0)=0x0u;
L8c0e92b2:;
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
void f_8c0e92c6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(9)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(13)*R(9);
  R(9)=c->macl;
  R(9)+=R(3);
  R(5)=LD32(R(9)+28);
  R(2)=LD32(R(5)+24);
  R(4)=LD32(R(5)+20);
  ST32(R(15)+4,R(2));
  R(2)=0x0u;
  R(10)=R(2);
  ST32(R(15)+8,R(2));
  { R(14)=R(4)&0xFFFF; goto L8c0e93b8; }
L8c0e92f6:;
  R(3)=R(9);
  R(3)+=0x48u;
  R(3)+=R(10);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0e93aa;
  R(2)=R(10);
  R(2)<<=8;
  c->t=R(2)>>31;R(2)<<=1;
  ST32(R(15),R(2));
L8c0e930a:;
  R(6)=LD32(R(9)+40);
  R(5)=R(14);
  R(3)=LD32(R(15));
  R(2)=0x8c0e5e78u;
  R(6)+=R(3);
  { c->pr=0x8c0e9318u; R(4)=R(13); f_8c0e5e78(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0e9350;
  R(5)=R(14);
  { c->pr=0x8c0e9324u; R(4)=R(13); f_8c0e9950(c); }
  R(3)=R(9);
  R(3)+=0x48u;
  R(3)+=R(10);
  R(8)=R(14);
  R(2)=0x0u;
  ST8(R(3),R(2));
  R(11)=R(0)&0xFFFF;
  { R(14)=R(11); goto L8c0e93b6; }
L8c0e9350:;
  R(2)=0xffffff01u;
  c->t=R(4)==R(2);
  if(c->t) goto L8c0e93d8;
  R(2)=0x1u;
  R(5)=R(14);
  ST32(R(15)+8,R(2));
  { c->pr=0x8c0e9360u; R(4)=R(13); f_8c0e9950(c); }
  R(6)=0xffffu;
  R(5)=R(14);
  R(11)=R(0)&0xFFFF;
  { c->pr=0x8c0e936au; R(4)=R(13); f_8c0e991e(c); }
  R(3)=0x8c0e70dau;
  R(5)=0xfffcu;
  { c->pr=0x8c0e9372u; R(4)=R(13); f_8c0e70da(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>=0;
  if(c->t) goto L8c0e937e;
  R(0)=0xffffff04u;
  {  goto L8c0e93de; }
L8c0e937e:;
  R(5)=R(12);
  R(6)=R(11);
  { c->pr=0x8c0e9386u; R(4)=R(13); f_8c0e991e(c); }
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c0e939c;
  R(2)=0x8c2f2e38u;
  R(5)=0x4au;
  R(6)=R(12);
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+16);
  { uint32_t tg=R(1); c->pr=0x8c0e9398u; R(4)=LD32(R(9)+32); sh4_call(c,tg); }
  {  goto L8c0e93a4; }
L8c0e939c:;
  R(5)=R(8);
  R(6)=R(12);
  { c->pr=0x8c0e93a4u; R(4)=R(13); f_8c0e991e(c); }
L8c0e93a4:;
  R(8)=R(14);
  { R(14)=R(12); goto L8c0e930a; }
L8c0e93aa:;
  R(5)=R(14);
  { c->pr=0x8c0e93b0u; R(4)=R(13); f_8c0e9950(c); }
  R(8)=R(14);
  R(11)=R(0)&0xFFFF;
  R(14)=R(11);
L8c0e93b6:;
  R(10)+=0x1u;
L8c0e93b8:;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(10)>=(int32_t)R(3);
  if(!c->t) goto L8c0e92f6;
  R(1)=LD32(R(15)+8);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0e93dc;
  { c->pr=0x8c0e93c8u; R(4)=R(13); f_8c0e9770(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0e93d8;
  { c->pr=0x8c0e93d2u; R(4)=R(13); f_8c0e95da(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e93dc;
L8c0e93d8:;
  { R(0)=R(4); goto L8c0e93de; }
L8c0e93dc:;
  R(0)=0x0u;
L8c0e93de:;
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
void f_8c0e93f2(SH4Ctx *c) {
  R(6)=0x0u;
  R(7)=0xcu;
  R(5)=R(6);
L8c0e93f8:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0e9408;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  R(5)+=0x1u;
  { uint32_t k=!c->t; R(4)+=0x1u; if(k) goto L8c0e93f8; }
L8c0e9408:;
  { R(0)=R(5); return; }
}
void f_8c0e9420(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0e942eu; R(4)=LD32(R(15)); f_8c0e93f2(c); }
  R(14)=R(0);
  { c->pr=0x8c0e9434u; R(4)=LD32(R(15)+4); f_8c0e93f2(c); }
  R(4)=R(0);
  c->t=R(14)==R(4);
  if(!c->t) goto L8c0e944c;
  R(4)=LD32(R(15)+4);
  c->t=(int32_t)R(14)>0;
  R(6)=0x0u;
  { uint32_t k=!c->t; R(5)=LD32(R(15)); if(k) goto L8c0e9460; }
L8c0e9444:;
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(2)=(int32_t)(int8_t)LD8(R(5));
  c->t=R(2)==R(3);
  if(c->t) goto L8c0e9456;
L8c0e944c:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0e9456:;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(14);
  R(4)+=0x1u;
  { uint32_t k=!c->t; R(5)+=0x1u; if(k) goto L8c0e9444; }
L8c0e9460:;
  R(0)=0x1u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e946a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=R(13);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=(int32_t)(int8_t)LD8(R(13));
  R(4)=R(14);
  R(4)+=0x10u;
  R(3)=R(3)&0xFF;
  ST32(R(14)+4,R(3));
  R(5)+=0x4u;
L8c0e9484:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(2)=(uint32_t)v;}
  R(3)=R(14);
  R(3)+=0x1cu;
  ST8(R(4),R(2));
  R(4)+=0x1u;
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c0e9484;
  R(5)=R(13);
  R(4)=R(14);
  R(3)=0x0u;
  R(0)=0x1cu;
  R(4)+=0x20u;
  ST8(R(14)+R(0),R(3));
  R(5)+=0x10u;
L8c0e94a0:;
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(2)=R(14);
  R(2)+=0x28u;
  ST8(R(4),R(3));
  R(4)+=0x1u;
  c->t=R(4)>=R(2);
  if(!c->t) goto L8c0e94a0;
  R(12)=0x8c2f2e38u;
  R(5)=0x2u;
  R(2)=LD32(R(12));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0e94bau; R(4)=R(13); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0x18u;
  ST32(R(14)+12,R(0));
  R(2)=LD32(R(12));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0e94c8u; R(4)=R(13); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  ST32(R(14)+40,R(0));
  R(5)=0x1au;
  R(0)=(int32_t)(int8_t)LD8(R(13)+1);
  ST8(R(14)+10,R(0));
  R(0)=LD32(R(12));
  R(0)=LD32(R(0)+12);
  { uint32_t tg=R(0); c->pr=0x8c0e94dau; R(4)=R(13); sh4_call(c,tg); }
  ST16(R(14)+8,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e94e6(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(12)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(12);
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  R(12)=c->macl;
  R(12)+=R(3);
  R(14)=LD32(R(12)+40);
  { R(13)=0x0u; goto L8c0e9540; }
L8c0e9504:;
  R(4)=(int32_t)(int8_t)LD8(R(14));
  R(0)=R(4)&0xFF;
  c->t=(int32_t)R(0)==51;
  if(c->t) goto L8c0e951a;
  R(1)=0xccu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e951a;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e953c;
  {  goto L8c0e953c; }
L8c0e951a:;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0e9522u; R(4)=LD32(R(15)+4); f_8c0e9420(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0e953c;
  R(5)=LD32(R(15));
  { c->pr=0x8c0e952cu; R(4)=R(14); f_8c0e946a(c); }
  { R(0)=R(13); goto L8c0e954a; }
L8c0e953c:;
  R(14)+=0x20u;
  R(13)+=0x1u;
L8c0e9540:;
  R(3)=LD32(R(12)+28);
  R(2)=LD32(R(3)+48);
  c->t=(int32_t)R(13)>=(int32_t)R(2);
  if(!c->t) goto L8c0e9504;
  R(0)=0xffffffffu;
L8c0e954a:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9556(SH4Ctx *c) {
  R(6)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(6);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(6)=c->macl;
  R(4)=0xccu;
  R(6)+=R(3);
  R(13)=LD32(R(6)+40);
  { R(14)=0x0u; goto L8c0e9582; }
L8c0e956e:;
  R(7)=(int32_t)(int8_t)LD8(R(13));
  R(7)=R(7)&0xFF;
  c->t=R(7)==R(4);
  if(!c->t) goto L8c0e957e;
  { c->pr=0x8c0e957au; R(4)=R(13); f_8c0e946a(c); }
  { R(0)=R(14); goto L8c0e958c; }
L8c0e957e:;
  R(13)+=0x20u;
  R(14)+=0x1u;
L8c0e9582:;
  R(3)=LD32(R(6)+28);
  R(2)=LD32(R(3)+48);
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(!c->t) goto L8c0e956e;
  R(0)=0xffffffffu;
L8c0e958c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9594(SH4Ctx *c) {
  R(6)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(6);
  R(6)=c->macl;
  R(6)+=R(3);
  R(5)=LD32(R(6)+40);
  { R(4)=0x0u; goto L8c0e95b4; }
L8c0e95a4:;
  R(7)=(int32_t)(int8_t)LD8(R(5));
  R(7)=R(7)&0xFF;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0e95b0;
  { R(0)=R(4); return; }
L8c0e95b0:;
  R(5)+=0x20u;
  R(4)+=0x1u;
L8c0e95b4:;
  R(2)=LD32(R(6)+28);
  R(3)=LD32(R(2)+48);
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  if(!c->t) goto L8c0e95a4;
  R(0)=0xffffffffu;
  {  return; }
}
void f_8c0e95c2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(14);
  R(2)=0x8c0e5da0u;
  R(14)=c->macl;
  R(14)+=R(3);
  R(5)=LD32(R(14)+28);
  R(6)=LD32(R(14)+32);
  R(5)=LD32(R(5)+8);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0e5da0(c); return; } }
}
void f_8c0e95da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(14);
  R(2)=0x8c0e5e78u;
  R(14)=c->macl;
  R(14)+=R(3);
  R(5)=LD32(R(14)+28);
  R(6)=LD32(R(14)+32);
  R(5)=LD32(R(5)+8);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0e5e78(c); return; } }
}
void f_8c0e95f2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=0x148u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=R(4);
  c->macl=R(11)*R(13);
  R(3)=0x8c2f2e3cu;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=c->macl;
  R(10)=0x8c0e5da0u;
  R(13)+=R(3);
  R(12)=LD32(R(13)+28);
  R(12)=LD32(R(12)+16);
  c->t=(int32_t)R(12)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0e963a; }
L8c0e9616:;
  R(5)=LD32(R(13)+28);
  R(6)=R(14);
  R(3)=LD32(R(13)+36);
  R(6)<<=8;
  R(5)=LD32(R(5)+12);
  c->t=R(6)>>31;R(6)<<=1;
  R(6)+=R(3);
  R(5)+=R(14);
  { uint32_t tg=R(10); c->pr=0x8c0e962au; R(4)=R(11); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e9634;
  { R(0)=R(4); goto L8c0e963c; }
L8c0e9634:;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(12);
  if(!c->t) goto L8c0e9616;
L8c0e963a:;
  R(0)=0x0u;
L8c0e963c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e965c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x148u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  c->macl=R(12)*R(13);
  R(3)=0x8c2f2e3cu;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(13)=c->macl;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(13)+=R(3);
  R(8)=0xfffau;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=LD32(R(13)+28);
  R(9)=R(8);
  R(10)=LD32(R(10)+16);
  c->t=(int32_t)R(10)>0;
  { uint32_t k=!c->t; R(9)+=0x5u; if(k) goto L8c0e96c6; }
L8c0e9688:;
  R(6)=R(14);
  R(3)=LD32(R(13)+36);
  R(5)=LD32(R(13)+28);
  R(6)<<=8;
  c->t=R(6)>>31;R(6)<<=1;
  R(5)=LD32(R(5)+12);
  R(6)+=R(3);
  R(3)=0x8c0e5e78u;
  R(5)+=R(14);
  { c->pr=0x8c0e969eu; R(4)=R(12); f_8c0e5e78(c); }
  R(11)=R(0);
  c->t=(int32_t)R(11)>=0;
  if(c->t) goto L8c0e96b4;
  R(5)=LD32(R(13)+28);
  R(6)=R(9);
  R(5)=LD32(R(5)+12);
  R(5)+=R(14);
  { c->pr=0x8c0e96b0u; R(4)=R(12); f_8c0e991e(c); }
  { R(0)=R(11); goto L8c0e96c8; }
L8c0e96b4:;
  R(5)=LD32(R(13)+28);
  R(6)=R(8);
  R(5)=LD32(R(5)+12);
  R(5)+=R(14);
  { c->pr=0x8c0e96c0u; R(4)=R(12); f_8c0e991e(c); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  if(!c->t) goto L8c0e9688;
L8c0e96c6:;
  R(0)=0x0u;
L8c0e96c8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e96da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(5)=0x148u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  c->macl=R(10)*R(5);
  R(3)=0x8c2f2e3cu;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(5)=c->macl;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(11)=0xfffcu;
  R(5)+=R(3);
  R(4)=LD32(R(5)+28);
  R(9)=LD32(R(4)+32);
  R(8)=LD32(R(4)+28);
  R(12)=LD32(R(4)+16);
  R(9)+=R(8);
  R(9)+=0xffffffffu;
L8c0e9704:;
  R(3)=0x8c0e7164u;
  R(5)=R(11);
  R(7)=R(9);
  R(6)=R(8);
  { c->pr=0x8c0e9710u; R(4)=R(10); f_8c0e7164(c); }
  R(13)=R(0);
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c0e971a;
  { R(0)=0xffffffffu; goto L8c0e9746; }
L8c0e971a:;
  c->t=(int32_t)R(12)>0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0e973c; }
L8c0e9720:;
  R(5)=R(13);
  R(5)-=R(14);
  { c->pr=0x8c0e9728u; R(4)=R(10); f_8c0e9950(c); }
  R(0)=R(0)&0xFFFF;
  c->t=R(0)==R(11);
  if(c->t) goto L8c0e9736;
  R(9)=R(13);
  R(9)-=R(14);
  { R(9)+=0xffffffffu; goto L8c0e973c; }
L8c0e9736:;
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(12);
  if(!c->t) goto L8c0e9720;
L8c0e973c:;
  c->t=R(14)==R(12);
  if(!c->t) goto L8c0e9704;
  R(13)-=R(12);
  R(0)=R(13);
  R(0)+=0x1u;
L8c0e9746:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9770(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=0x148u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  c->macl=R(12)*R(14);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=0x0u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x1u;
  R(14)=c->macl;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(13)=R(10);
  R(3)=0x8c2f2e3cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(8)=0x8c2f2e38u;
  R(14)+=R(3);
  R(11)=0xfffau;
L8c0e9796:;
  { c->pr=0x8c0e979au; R(4)=R(12); f_8c0e965c(c); }
  R(1)=0xffffff01u;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0e97b0; }
  R(1)=0xffffff40u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e97b6;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0e97f4;
  {  goto L8c0e97f4; }
L8c0e97b0:;
  R(0)=0xffffff01u;
  {  goto L8c0e97fe; }
L8c0e97b6:;
  { c->pr=0x8c0e97bau; R(4)=R(12); f_8c0e96da(c); }
  R(13)=R(0);
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c0e97c6;
  R(0)=0xffffff40u;
  {  goto L8c0e97fe; }
L8c0e97c6:;
  R(2)=LD32(R(14)+28);
  R(5)=0x46u;
  R(6)=R(13);
  ST32(R(2)+12,R(13));
  R(3)=LD32(R(8));
  R(2)=LD32(R(3)+16);
  { uint32_t tg=R(2); c->pr=0x8c0e97d6u; R(4)=LD32(R(14)+32); sh4_call(c,tg); }
  { R(13)=R(10); goto L8c0e97e8; }
L8c0e97da:;
  R(5)=LD32(R(14)+28);
  R(6)=R(11);
  R(5)=LD32(R(5)+12);
  R(5)+=R(13);
  { c->pr=0x8c0e97e6u; R(4)=R(12); f_8c0e991e(c); }
  R(13)+=0x1u;
L8c0e97e8:;
  R(2)=LD32(R(14)+28);
  R(3)=LD32(R(2)+16);
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c0e97da;
  { R(13)=R(9); goto L8c0e9796; }
L8c0e97f4:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0e97fc;
  { c->pr=0x8c0e97fcu; R(4)=R(12); f_8c0e95da(c); }
L8c0e97fc:;
  R(0)=0x0u;
L8c0e97fe:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9810(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x148u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(13);
  R(12)=0x8c2f2e38u;
  ST16(R(15),R(5));
  R(13)=c->macl;
  R(13)+=R(3);
  R(4)=LD32(R(13)+28);
  R(4)=LD32(R(4)+48);
  R(14)=R(4);
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0e9854;
L8c0e9834:;
  R(3)=LD32(R(12));
  R(5)=R(14);
  c->t=R(5)>>31;R(5)<<=1;
  R(2)=LD32(R(3)+12);
  { uint32_t tg=R(2); c->pr=0x8c0e9840u; R(4)=LD32(R(13)+36); sh4_call(c,tg); }
  R(3)=(int32_t)(int16_t)LD16(R(15));
  R(0)=R(0)&0xFFFF;
  R(3)=R(3)&0xFFFF;
  c->t=R(0)==R(3);
  if(!c->t) goto L8c0e984e;
  { R(0)=R(14); goto L8c0e9856; }
L8c0e984e:;
  R(14)+=0xffffffffu;
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c0e9834;
L8c0e9854:;
  R(0)=0xffffffffu;
L8c0e9856:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9874(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0xfffcu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(12)=R(11);
  R(12)+=0xfffffffeu;
L8c0e9886:;
  R(5)=R(11);
  { c->pr=0x8c0e988cu; R(4)=R(13); f_8c0e9810(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(c->t) goto L8c0e9896;
  { R(0)=0xffffffffu; goto L8c0e98ae; }
L8c0e9896:;
  R(5)=R(14);
  { c->pr=0x8c0e989cu; R(4)=R(13); f_8c0e98ba(c); }
  c->t=(int32_t)R(0)>=0;
  if(c->t) goto L8c0e98ac;
  R(5)=R(14);
  R(6)=R(12);
  { c->pr=0x8c0e98a8u; R(4)=R(13); f_8c0e991e(c); }
  {  goto L8c0e9886; }
L8c0e98ac:;
  R(0)=R(14);
L8c0e98ae:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e98ba(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x148u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  c->macl=R(12)*R(11);
  R(3)=0x8c2f2e3cu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(10)=0x8c2f2e38u;
  R(11)=c->macl;
  R(11)+=R(3);
  { R(13)=R(5)&0xFFFF; goto L8c0e9906; }
L8c0e98da:;
  R(5)=R(14);
  { c->pr=0x8c0e98e0u; R(4)=R(12); f_8c0e9a04(c); }
  R(4)=R(0);
  R(5)=(int32_t)(int8_t)LD8(R(4));
  R(0)=R(5)&0xFF;
  c->t=(int32_t)R(0)==51;
  { uint32_t k=c->t; R(5)=R(0); if(k) goto L8c0e98f2; }
  R(3)=0xccu;
  c->t=R(5)==R(3);
  if(!c->t) goto L8c0e9904;
L8c0e98f2:;
  R(1)=LD32(R(10));
  R(3)=LD32(R(1)+12);
  { uint32_t tg=R(3); c->pr=0x8c0e98fau; R(5)=0x2u; sh4_call(c,tg); }
  R(4)=R(0)&0xFFFF;
  c->t=R(13)==R(4);
  if(!c->t) goto L8c0e9904;
  { R(0)=0xffffffffu; goto L8c0e9910; }
L8c0e9904:;
  R(14)+=0x1u;
L8c0e9906:;
  R(3)=LD32(R(11)+28);
  R(2)=LD32(R(3)+48);
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(!c->t) goto L8c0e98da;
  R(0)=R(13);
L8c0e9910:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e991e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x148u;
  R(0)=R(5);
  R(3)=0x8c2f2e3cu;
  c->macl=R(4)*R(14);
  ST32(R(15),R(5));
  R(14)=c->macl;
  R(14)+=R(3);
  R(2)=LD32(R(14)+28);
  R(1)=LD32(R(2));
  c->t=(int32_t)R(0)>(int32_t)R(1);
  if(c->t) goto L8c0e994a;
  R(2)=0x8c2f2e38u;
  R(5)=LD32(R(15));
  R(3)=LD32(R(2));
  R(4)=LD32(R(14)+36);
  c->t=R(5)>>31;R(5)<<=1;
  R(1)=LD32(R(3)+16);
  R(15)+=0x4u;
  { uint32_t tg=R(1); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0e994a:;
  R(15)+=0x4u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9950(SH4Ctx *c) {
  R(15)+=0xfffffff8u;
  R(3)=0x148u;
  R(1)=0x8c2f2e38u;
  c->macl=R(4)*R(3);
  R(2)=0x8c2f2e3cu;
  ST32(R(15),R(5));
  R(4)=c->macl;
  R(4)+=R(2);
  ST32(R(15)+4,R(4));
  R(0)=LD32(R(1));
  R(5)=LD32(R(15));
  R(4)=LD32(R(4)+36);
  R(0)=LD32(R(0)+12);
  c->t=R(5)>>31;R(5)<<=1;
  { uint32_t tg=R(0); R(15)+=0x8u; sh4_call(c,tg); return; }
}
void f_8c0e9980(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x148u;
  R(13)=R(4);
  R(3)=0x8c2f2e3cu;
  R(2)=R(4);
  c->macl=R(13)*R(14);
  R(0)=0x8c2f387cu;
  R(2)<<=2;
  ST32(R(15),R(2));
  R(14)=c->macl;
  R(14)+=R(3);
  R(3)=0x0u;
  ST32(R(2)+R(0),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(14)+10);
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(12)=0x1u; if(k) goto L8c0e99b4; }
  { c->pr=0x8c0e99aeu; R(4)=R(13); f_8c0e95c2(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0e99ea; }
L8c0e99b4:;
  { c->pr=0x8c0e99b8u; R(4)=R(13); f_8c0e8c42(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0e99f6;
  R(0)=(int32_t)(int8_t)LD8(R(14)+11);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e99cc;
  { c->pr=0x8c0e99c6u; R(4)=R(13); f_8c0e95f2(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0e99dc; }
L8c0e99cc:;
  R(0)=(int32_t)(int8_t)LD8(R(14)+12);
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0e99ee;
  { c->pr=0x8c0e99d6u; R(4)=R(13); f_8c0e9138(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=c->t; R(4)=R(0); if(k) goto L8c0e99ee; }
L8c0e99dc:;
  R(3)=0xffff0000u;
  c->t=R(4)==R(3);
  if(!c->t) goto L8c0e99ea;
  R(0)=0x8c2f387cu;
  R(1)=LD32(R(15));
  { ST32(R(1)+R(0),R(12)); goto L8c0e99f6; }
L8c0e99ea:;
  { R(0)=R(4); goto L8c0e99f8; }
L8c0e99ee:;
  R(0)=R(12);
  ST8(R(14)+10,R(0));
  ST8(R(14)+11,R(0));
  ST8(R(14)+12,R(0));
L8c0e99f6:;
  R(0)=0x0u;
L8c0e99f8:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9a04(SH4Ctx *c) {
  R(3)=0x148u;
  R(0)=R(5);
  R(2)=0x8c2f2e3cu;
  R(0)<<=2;
  c->macl=R(4)*R(3);
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(4)=c->macl;
  R(4)+=R(2);
  R(1)=LD32(R(4)+40);
  { R(0)+=R(1); return; }
}
void f_8c0e9a1c(SH4Ctx *c) {
  R(3)=0x148u;
  R(1)=0xfffffffcu;
  R(2)=0x8c2f2e3cu;
  R(5)=sh4_shad(R(5),R(1));
  c->macl=R(4)*R(3);
  R(1)=0x1u;
  R(4)=c->macl;
  R(4)+=R(2);
  R(0)=R(4);
  R(0)+=0x48u;
  R(5)+=R(0);
  { ST8(R(5),R(1)); return; }
}
void f_8c0e9a36(SH4Ctx *c) {
  R(7)=0x8c2f7d3cu;
  R(6)=0x1u;
  R(4)=0x8c2f7afcu;
  { R(5)=0x0u; goto L8c0e9a52; }
L8c0e9a40:;
  R(2)=(int32_t)(int8_t)LD8(R(4));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0e9a4e;
  ST8(R(4),R(6));
  ST32(R(4)+12,R(5));
  { R(0)=R(4); return; }
L8c0e9a4e:;
  R(4)+=0x48u;
  R(5)+=0x1u;
L8c0e9a52:;
  R(3)=LD32(R(7));
  c->t=(int32_t)R(5)>=(int32_t)R(3);
  if(!c->t) goto L8c0e9a40;
  R(2)=0x8c2f7d40u;
  R(0)=0x0u;
  R(1)=0xffffff07u;
  ST32(R(2),R(1));
  {  return; }
}
void f_8c0e9a64(SH4Ctx *c) {
  R(3)=0x8c0686b8u;
  R(6)=0x48u;
  { R(5)=0x0u; { f_8c0686b8(c); return; } }
}
void f_8c0e9a6c(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0e9a90(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffd4u;
  R(11)=0x148u;
  R(12)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(12)*R(11);
  R(11)=c->macl;
  R(11)+=R(3);
  { c->pr=0x8c0e9aacu; R(6)=R(15); f_8c0e94e6(c); }
  R(5)=R(0);
  c->t=(int32_t)R(5)>=0;
  if(c->t) goto L8c0e9ab8;
  R(0)=0xffffff05u;
  {  goto L8c0e9b12; }
L8c0e9ab8:;
  { c->pr=0x8c0e9abcu; R(4)=R(12); f_8c0e9a04(c); }
  R(3)=LD32(R(11)+28);
  R(13)=LD32(R(15)+12);
  R(2)=LD32(R(3)+48);
  c->t=(int32_t)R(13)>=(int32_t)R(2);
  if(c->t) goto L8c0e9b00;
  { R(14)=0x0u; goto L8c0e9b0a; }
L8c0e9aca:;
  R(5)=R(13);
  { c->pr=0x8c0e9ad0u; R(4)=R(12); f_8c0e9950(c); }
  R(2)=LD32(R(15)+40);
  R(4)=R(0)&0xFFFF;
  R(5)=0xfffau;
  R(2)+=0xffffffffu;
  c->t=R(14)==R(2);
  if(!c->t) goto L8c0e9ae4;
  c->t=R(4)==R(5);
  if(c->t) goto L8c0e9b06;
  {  goto L8c0e9b00; }
L8c0e9ae4:;
  c->t=R(4)==R(13);
  if(c->t) goto L8c0e9b00;
  c->t=R(4)==R(5);
  if(c->t) goto L8c0e9b00;
  R(5)=0xfffcu;
  c->t=R(4)==R(5);
  if(c->t) goto L8c0e9b00;
  R(5)=0xffffu;
  c->t=R(4)==R(5);
  if(c->t) goto L8c0e9b00;
  R(3)=LD32(R(11)+28);
  R(2)=LD32(R(3)+48);
  c->t=(int32_t)R(4)>=(int32_t)R(2);
  if(!c->t) goto L8c0e9b06;
L8c0e9b00:;
  R(0)=0xffffff41u;
  {  goto L8c0e9b12; }
L8c0e9b06:;
  R(14)+=0x1u;
  R(13)=R(4);
L8c0e9b0a:;
  R(2)=LD32(R(15)+40);
  c->t=(int32_t)R(14)>=(int32_t)R(2);
  if(!c->t) goto L8c0e9aca;
  R(0)=0x0u;
L8c0e9b12:;
  R(15)+=0x2cu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9b20(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0679f4u;
  R(1)=R(4);
  R(6)=0xau;
  { c->pr=0x8c0e9b2cu; R(0)=R(6); f_8c0679f4(c); }
  R(2)=0x8c09c280u;
  R(1)=R(4);
  R(5)=R(0);
  { c->pr=0x8c0e9b36u; R(0)=R(6); f_8c09c280(c); }
  R(4)=R(0);
  R(0)=R(5);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)<<=2;
  R(0)<<=2;
  { R(0)+=R(4); return; }
}
void f_8c0e9b44(SH4Ctx *c) {
  R(5)=R(4);
  R(5)>>=2;
  R(5)>>=2;
  R(0)=R(5);
  R(3)=R(5);
  R(0)<<=2;
  R(2)=0xfu;
  R(0)+=R(3);
  c->t=R(0)>>31;R(0)<<=1;
  R(4)&=R(2);
  { R(0)+=R(4); return; }
}
void f_8c0e9b7c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(5);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(8)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(1)=(int32_t)(int16_t)LD16(R(13));
  R(14)+=0x1u;
  R(3)=0x8c067940u;
  R(1)=R(1)&0xFFFF;
  { c->pr=0x8c0e9b96u; R(0)=0x64u; f_8c067940(c); }
  { c->pr=0x8c0e9b9au; R(4)=R(0); f_8c0e9b20(c); }
  ST8(R(8),R(0));
  R(8)=R(14);
  R(1)=(int32_t)(int16_t)LD16(R(13));
  R(14)+=0x1u;
  R(3)=0x8c067a9cu;
  R(1)=R(1)&0xFFFF;
  { c->pr=0x8c0e9baau; R(0)=0x64u; f_8c067a9c(c); }
  { c->pr=0x8c0e9baeu; R(4)=R(0); f_8c0e9b20(c); }
  ST8(R(8),R(0));
  R(8)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+2);
  R(14)+=0x1u;
  { c->pr=0x8c0e9bbau; R(4)=R(0)&0xFF; f_8c0e9b20(c); }
  ST8(R(8),R(0));
  R(8)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+3);
  R(14)+=0x1u;
  { c->pr=0x8c0e9bc6u; R(4)=R(0)&0xFF; f_8c0e9b20(c); }
  ST8(R(8),R(0));
  R(8)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  R(14)+=0x1u;
  { c->pr=0x8c0e9bd2u; R(4)=R(0)&0xFF; f_8c0e9b20(c); }
  ST8(R(8),R(0));
  R(8)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+5);
  R(14)+=0x1u;
  { c->pr=0x8c0e9bdeu; R(4)=R(0)&0xFF; f_8c0e9b20(c); }
  ST8(R(8),R(0));
  R(8)=R(14);
  R(0)=(int32_t)(int8_t)LD8(R(13)+6);
  R(14)+=0x1u;
  { c->pr=0x8c0e9beau; R(4)=R(0)&0xFF; f_8c0e9b20(c); }
  ST8(R(8),R(0));
  R(0)=(int32_t)(int8_t)LD8(R(13)+7);
  R(1)=0x8c0f4054u;
  R(0)=R(0)&0xFF;
  R(0)&=0x7u;
  R(3)=(int32_t)(int8_t)LD8(R(1)+R(0));
  ST8(R(14),R(3));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9c02(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=(int32_t)(int8_t)LD8(R(14));
  { c->pr=0x8c0e9c14u; R(4)=R(4)&0xFF; f_8c0e9b44(c); }
  R(2)=0x64u;
  c->macl=(uint32_t)(uint16_t)R(0)*(uint32_t)(uint16_t)R(2);
  R(0)=c->macl;
  R(8)=R(0);
  R(0)=(int32_t)(int8_t)LD8(R(14)+1);
  { c->pr=0x8c0e9c22u; R(4)=R(0)&0xFF; f_8c0e9b44(c); }
  R(8)+=R(0);
  ST16(R(13),R(8));
  R(0)=(int32_t)(int8_t)LD8(R(14)+2);
  { c->pr=0x8c0e9c2cu; R(4)=R(0)&0xFF; f_8c0e9b44(c); }
  ST8(R(13)+2,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+3);
  { c->pr=0x8c0e9c34u; R(4)=R(0)&0xFF; f_8c0e9b44(c); }
  ST8(R(13)+3,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+4);
  { c->pr=0x8c0e9c3cu; R(4)=R(0)&0xFF; f_8c0e9b44(c); }
  ST8(R(13)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+5);
  { c->pr=0x8c0e9c44u; R(4)=R(0)&0xFF; f_8c0e9b44(c); }
  ST8(R(13)+5,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+6);
  { c->pr=0x8c0e9c4cu; R(4)=R(0)&0xFF; f_8c0e9b44(c); }
  ST8(R(13)+6,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(14)+7);
  R(1)=0x8c0f405cu;
  R(0)=R(0)&0xFF;
  R(0)&=0x7u;
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  ST8(R(13)+7,R(0));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9c74(SH4Ctx *c) {
  R(5)=LD32(R(4)+28);
  R(6)=0x1u;
  R(7)=LD32(R(5));
  c->t=(int32_t)R(7)>=(int32_t)R(6);
  if(!c->t) goto L8c0e9d0a;
  R(2)=0x7ffu;
  c->t=(int32_t)R(7)>(int32_t)R(2);
  if(c->t) goto L8c0e9d0a;
  R(3)=LD32(R(5));
  R(2)=LD32(R(5)+8);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0e9d0a;
  R(7)=LD32(R(5)+12);
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c0e9d0a;
  R(2)=LD32(R(5));
  c->t=(int32_t)R(7)>=(int32_t)R(2);
  if(c->t) goto L8c0e9d0a;
  R(7)=LD32(R(5)+20);
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c0e9d0a;
  R(3)=LD32(R(5));
  c->t=(int32_t)R(7)>=(int32_t)R(3);
  if(c->t) goto L8c0e9d0a;
  R(7)=LD32(R(5)+52);
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c0e9d0a;
  R(2)=LD32(R(5));
  c->t=(int32_t)R(7)>(int32_t)R(2);
  if(c->t) goto L8c0e9d0a;
  R(7)=LD32(R(5)+56);
  c->t=(int32_t)R(7)>=0;
  if(!c->t) goto L8c0e9d0a;
  R(3)=LD32(R(5));
  c->t=(int32_t)R(7)>(int32_t)R(3);
  if(c->t) goto L8c0e9d0a;
  R(2)=0x8c2f2e38u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+8);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0e9cd6;
  R(3)=LD32(R(5)+16);
  R(0)=(int32_t)(int16_t)LD16(R(4)+16);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(!c->t) goto L8c0e9d0a;
  R(3)=LD32(R(5)+24);
  R(0)=(int32_t)(int16_t)LD16(R(4)+18);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  if(!c->t) goto L8c0e9d0a;
L8c0e9cd6:;
  R(1)=0xffu;
  R(0)=LD32(R(5));
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e9cf4;
  R(1)=0x1ffu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e9cfa;
  R(1)=0x3ffu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e9cfe;
  R(1)=0x7ffu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0e9d04;
  {  goto L8c0e9d0a; }
L8c0e9cf4:;
  R(3)=0x0u;
  { ST32(R(4)+4,R(3)); goto L8c0e9d0e; }
L8c0e9cfa:;
  { ST32(R(4)+4,R(6)); goto L8c0e9d0e; }
L8c0e9cfe:;
  R(2)=0x2u;
  { ST32(R(4)+4,R(2)); goto L8c0e9d0e; }
L8c0e9d04:;
  R(1)=0x3u;
  { ST32(R(4)+4,R(1)); goto L8c0e9d0e; }
L8c0e9d0a:;
  { R(0)=0xffffffffu; return; }
L8c0e9d0e:;
  R(0)=0x0u;
  {  return; }
}
void f_8c0e9d14(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x1u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=0x148u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  c->macl=R(10)*R(13);
  R(3)=0x8c2f2e3cu;
  R(0)=0x8c0f4524u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(13)=c->macl;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(9)=0x8c0e5da0u;
  R(13)+=R(3);
  R(11)=0x200u;
  ST32(R(13)+48,R(2));
  R(1)=LD32(R(13)+4);
  R(2)=R(1);
  R(1)<<=2;
  R(1)+=R(2);
  R(1)<<=2;
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  ST32(R(13)+52,R(0));
  { R(14)=0x0u; goto L8c0e9d82; }
L8c0e9d6c:;
  R(5)=R(14);
  R(6)=R(12);
  { uint32_t tg=R(9); c->pr=0x8c0e9d74u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e9d7e;
  { R(0)=R(4); goto L8c0e9d8e; }
L8c0e9d7e:;
  R(14)+=0x1u;
  R(12)+=R(11);
L8c0e9d82:;
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c0e9d6c;
  R(0)=0x0u;
L8c0e9d8e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9d9e(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x1u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(13)=0x148u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  c->macl=R(10)*R(13);
  R(3)=0x8c2f2e3cu;
  R(0)=0x8c0f4528u;
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(13)=c->macl;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(9)=0x8c0e5e78u;
  R(13)+=R(3);
  R(11)=0x200u;
  ST32(R(13)+48,R(2));
  R(1)=LD32(R(13)+4);
  R(2)=R(1);
  R(1)<<=2;
  R(1)+=R(2);
  R(1)<<=2;
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  ST32(R(13)+52,R(0));
  { R(14)=0x0u; goto L8c0e9dee; }
L8c0e9dd8:;
  R(5)=R(14);
  R(6)=R(12);
  { uint32_t tg=R(9); c->pr=0x8c0e9de0u; R(4)=R(10); sh4_call(c,tg); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e9dea;
  { R(0)=R(4); goto L8c0e9dfa; }
L8c0e9dea:;
  R(14)+=0x1u;
  R(12)+=R(11);
L8c0e9dee:;
  R(2)=LD32(R(13)+28);
  R(3)=LD32(R(2));
  R(3)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c0e9dd8;
  R(0)=0x0u;
L8c0e9dfa:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9e0a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(13)=R(7);
  c->t=(R(13)&R(13))==0;
  R(11)=R(4);
  ST32(R(15)+4,R(5));
  { uint32_t k=!c->t; ST32(R(15)+8,R(6)); if(k) goto L8c0e9e4e; }
  R(3)=0x8c0e8af0u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0e9e2cu; R(4)=R(11); f_8c0e8af0(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0e9e4c;
  { R(0)=R(4); goto L8c0e9e9c; }
L8c0e9e4c:;
  R(13)=R(4);
L8c0e9e4e:;
  R(3)=0x8c0e74b4u;
  R(6)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0e9e58u; R(4)=R(11); f_8c0e74b4(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0e9e9a;
  R(4)=0x148u;
  R(2)=0x1u;
  R(3)=0x8c2f2e3cu;
  c->macl=R(11)*R(4);
  R(11)=0x0u;
  R(12)=LD32(R(15)+8);
  R(1)=R(11);
  c->t=R(1)>=R(13);
  R(4)=c->macl;
  R(4)+=R(3);
  ST32(R(4)+48,R(2));
  { uint32_t k=c->t; ST32(R(4)+52,R(13)); if(k) goto L8c0e9e90; }
  R(10)=0x200u;
L8c0e9e7a:;
  R(3)=0x8c0e7decu;
  R(5)=R(12);
  { c->pr=0x8c0e9e82u; R(4)=LD32(R(15)); f_8c0e7dec(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0e9e92;
  R(11)+=0x1u;
  c->t=R(11)>=R(13);
  { uint32_t k=!c->t; R(12)+=R(10); if(k) goto L8c0e9e7a; }
L8c0e9e90:;
  R(14)=0x0u;
L8c0e9e92:;
  R(3)=0x8c0e792eu;
  R(5)=0x0u;
  { c->pr=0x8c0e9e9au; R(4)=LD32(R(15)); f_8c0e792e(c); }
L8c0e9e9a:;
  R(0)=R(14);
L8c0e9e9c:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9eac(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(11)=R(5);
  R(3)=0x8c0e72d0u;
  R(5)=0x0u;
  R(12)=R(4);
  ST32(R(15)+4,R(6));
  R(13)=R(7);
  R(10)=LD32(R(15)+36);
  { c->pr=0x8c0e9eccu; R(4)=R(12); f_8c0e72d0(c); }
  R(2)=0x8c0e8af0u;
  R(5)=R(11);
  R(14)=R(0);
  { c->pr=0x8c0e9ed6u; R(4)=R(12); f_8c0e8af0(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>0;
  if(!c->t) goto L8c0e9ede;
  R(14)+=R(4);
L8c0e9ede:;
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0e9f92;
  c->t=R(14)>=R(13);
  if(c->t) goto L8c0e9eec;
  R(0)=0xffffff04u;
  {  goto L8c0e9f94; }
L8c0e9eec:;
  R(4)=0x80000000u;
  R(4)&=R(10);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0e9f2c;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=R(11);
  R(3)=LD32(R(15)+36);
  R(7)=R(13);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0e9f04u; R(4)=R(12); f_8c0e9fbc(c); }
  { R(15)+=0x8u; goto L8c0e9f94; }
L8c0e9f2c:;
  R(3)=0x8c0e772au;
  R(7)=R(15);
  R(6)=LD32(R(15)+32);
  R(5)=R(11);
  { c->pr=0x8c0e9f38u; R(4)=R(12); f_8c0e772a(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0e9f92;
  R(4)=0x148u;
  R(0)=R(10);
  R(3)=0x8c2f2e3cu;
  c->macl=R(12)*R(4);
  R(2)=LD32(R(15));
  R(12)=0x0u;
  ST8(R(2)+1,R(0));
  R(2)=0x1u;
  R(4)=c->macl;
  R(0)=0x8c0f4518u;
  R(11)=LD32(R(15)+4);
  R(4)+=R(3);
  ST32(R(4)+48,R(2));
  R(1)=LD32(R(4)+4);
  R(2)=R(1);
  R(1)<<=2;
  R(1)+=R(2);
  R(2)=R(12);
  R(1)<<=2;
  c->t=R(2)>=R(13);
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  R(0)+=R(13);
  { uint32_t k=c->t; ST32(R(4)+52,R(0)); if(k) goto L8c0e9f88; }
  R(10)=0x200u;
L8c0e9f72:;
  R(3)=0x8c0e7b56u;
  R(5)=R(11);
  { c->pr=0x8c0e9f7au; R(4)=LD32(R(15)); f_8c0e7b56(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0e9f8a;
  R(12)+=0x1u;
  c->t=R(12)>=R(13);
  { uint32_t k=!c->t; R(11)+=R(10); if(k) goto L8c0e9f72; }
L8c0e9f88:;
  R(14)=0x0u;
L8c0e9f8a:;
  R(3)=0x8c0e792eu;
  R(5)=0x0u;
  { c->pr=0x8c0e9f92u; R(4)=LD32(R(15)); f_8c0e792e(c); }
L8c0e9f92:;
  R(0)=R(14);
L8c0e9f94:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0e9fbc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(5));
  R(12)=R(7);
  ST32(R(15)+8,R(6));
  R(9)=R(4);
  R(6)=LD32(R(15)+44);
  R(7)=R(15);
  R(5)=LD32(R(15)+4);
  R(3)=0x8c0e772au;
  { c->pr=0x8c0e9fe2u; R(4)=R(9); f_8c0e772a(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea096;
  R(4)=0x148u;
  R(2)=0x1u;
  R(3)=LD32(R(15));
  R(1)=R(12);
  c->macl=R(9)*R(4);
  R(0)=LD32(R(15)+48);
  c->t=R(1)>>31;R(1)<<=1;
  R(10)=0x0u;
  R(13)=0x200u;
  ST8(R(3)+1,R(0));
  R(4)=c->macl;
  R(3)=0x8c2f2e3cu;
  R(11)=LD32(R(15)+8);
  R(4)+=R(3);
  ST32(R(4)+48,R(2));
  R(2)=LD32(R(4)+4);
  R(0)=R(2);
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0x8c0f4518u;
  R(2)<<=2;
  R(2)<<=2;
  R(2)=LD32(R(2)+R(0));
  R(1)+=R(2);
  R(2)=R(10);
  c->t=R(2)>=R(12);
  { uint32_t k=c->t; ST32(R(4)+52,R(1)); if(k) goto L8c0ea036; }
L8c0ea020:;
  R(3)=0x8c0e7b56u;
  R(5)=R(11);
  { c->pr=0x8c0ea028u; R(4)=LD32(R(15)); f_8c0e7b56(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea08e;
  R(10)+=0x1u;
  c->t=R(10)>=R(12);
  { uint32_t k=!c->t; R(11)+=R(13); if(k) goto L8c0ea020; }
L8c0ea036:;
  R(3)=0x8c0e792eu;
  R(5)=0x0u;
  { c->pr=0x8c0ea03eu; R(4)=LD32(R(15)); f_8c0e792e(c); }
  R(3)=0x8c0e74b4u;
  R(6)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0ea048u; R(4)=R(9); f_8c0e74b4(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea096;
  R(8)=R(9);
  R(8)<<=8;
  R(11)=0x0u;
  R(3)=0x8c2f389cu;
  R(2)=R(11);
  R(10)=LD32(R(15)+8);
  R(8)<<=2;
  c->t=R(8)>>31;R(8)<<=1;
  c->t=R(2)>=R(12);
  { uint32_t k=c->t; R(8)+=R(3); if(k) goto L8c0ea08c; }
  R(9)=0xffffff10u;
L8c0ea066:;
  R(3)=0x8c0e7decu;
  R(5)=R(8);
  { c->pr=0x8c0ea06eu; R(4)=LD32(R(15)); f_8c0e7dec(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea08e;
  R(2)=0x8c0f1338u;
  R(5)=R(10);
  { c->pr=0x8c0ea07cu; R(4)=R(8); f_8c0f1338(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ea084;
  { R(14)=R(9); goto L8c0ea08e; }
L8c0ea084:;
  R(11)+=0x1u;
  c->t=R(11)>=R(12);
  { uint32_t k=!c->t; R(10)+=R(13); if(k) goto L8c0ea066; }
L8c0ea08c:;
  R(14)=0x0u;
L8c0ea08e:;
  R(3)=0x8c0e792eu;
  R(5)=0x0u;
  { c->pr=0x8c0ea096u; R(4)=LD32(R(15)); f_8c0e792e(c); }
L8c0ea096:;
  R(0)=R(14);
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
void f_8c0ea0ac(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+8,R(5));
  R(5)=0x1u;
  R(3)=0x8c0e72d0u;
  R(11)=R(4);
  ST32(R(15)+4,R(6));
  R(13)=R(7);
  R(12)=LD32(R(15)+40);
  { c->pr=0x8c0ea0ccu; R(4)=R(11); f_8c0e72d0(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0ea104;
  { R(0)=R(4); goto L8c0ea192; }
L8c0ea104:;
  c->t=R(4)>=R(13);
  if(c->t) goto L8c0ea10e;
  R(0)=0xffffff04u;
  {  goto L8c0ea192; }
L8c0ea10e:;
  R(4)=0x80000000u;
  R(4)&=R(12);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ea12a;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(7)=R(13);
  R(3)=LD32(R(15)+40);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+16);
  R(6)=LD32(R(15)+12);
  { c->pr=0x8c0ea126u; R(4)=R(11); f_8c0ea1c0(c); }
  { R(15)+=0x8u; goto L8c0ea192; }
L8c0ea12a:;
  R(5)=LD32(R(15)+8);
  R(7)=R(15);
  R(3)=0x8c0e75c6u;
  R(6)=LD32(R(15)+36);
  { c->pr=0x8c0ea136u; R(4)=R(11); f_8c0e75c6(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea190;
  R(4)=0x148u;
  R(0)=R(12);
  R(3)=0x8c2f2e3cu;
  c->macl=R(11)*R(4);
  R(2)=LD32(R(15));
  R(11)=0x0u;
  ST8(R(2)+1,R(0));
  R(2)=0x1u;
  R(4)=c->macl;
  R(0)=0x8c0f4518u;
  R(12)=LD32(R(15)+4);
  R(4)+=R(3);
  ST32(R(4)+48,R(2));
  R(1)=LD32(R(4)+4);
  R(2)=R(1);
  R(1)<<=2;
  R(1)+=R(2);
  R(2)=R(11);
  R(1)<<=2;
  c->t=R(2)>=R(13);
  R(1)<<=2;
  R(0)=LD32(R(1)+R(0));
  R(0)+=R(13);
  { uint32_t k=c->t; ST32(R(4)+52,R(0)); if(k) goto L8c0ea186; }
  R(10)=0x200u;
L8c0ea170:;
  R(3)=0x8c0e7c72u;
  R(5)=R(12);
  { c->pr=0x8c0ea178u; R(4)=LD32(R(15)); f_8c0e7c72(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea188;
  R(11)+=0x1u;
  c->t=R(11)>=R(13);
  { uint32_t k=!c->t; R(12)+=R(10); if(k) goto L8c0ea170; }
L8c0ea186:;
  R(14)=0x0u;
L8c0ea188:;
  R(3)=0x8c0e792eu;
  R(5)=0x0u;
  { c->pr=0x8c0ea190u; R(4)=LD32(R(15)); f_8c0e792e(c); }
L8c0ea190:;
  R(0)=R(14);
L8c0ea192:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ea1c0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  ST32(R(15)+4,R(5));
  R(12)=R(7);
  ST32(R(15)+8,R(6));
  R(9)=R(4);
  R(6)=LD32(R(15)+44);
  R(7)=R(15);
  R(5)=LD32(R(15)+4);
  R(3)=0x8c0e75c6u;
  { c->pr=0x8c0ea1e6u; R(4)=R(9); f_8c0e75c6(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea29a;
  R(4)=0x148u;
  R(2)=0x1u;
  R(3)=LD32(R(15));
  R(1)=R(12);
  c->macl=R(9)*R(4);
  R(0)=LD32(R(15)+48);
  c->t=R(1)>>31;R(1)<<=1;
  R(10)=0x0u;
  R(13)=0x200u;
  ST8(R(3)+1,R(0));
  R(4)=c->macl;
  R(3)=0x8c2f2e3cu;
  R(11)=LD32(R(15)+8);
  R(4)+=R(3);
  ST32(R(4)+48,R(2));
  R(2)=LD32(R(4)+4);
  R(0)=R(2);
  R(2)<<=2;
  R(2)+=R(0);
  R(0)=0x8c0f4518u;
  R(2)<<=2;
  R(2)<<=2;
  R(2)=LD32(R(2)+R(0));
  R(1)+=R(2);
  R(2)=R(10);
  c->t=R(2)>=R(12);
  { uint32_t k=c->t; ST32(R(4)+52,R(1)); if(k) goto L8c0ea23a; }
L8c0ea224:;
  R(3)=0x8c0e7c72u;
  R(5)=R(11);
  { c->pr=0x8c0ea22cu; R(4)=LD32(R(15)); f_8c0e7c72(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea292;
  R(10)+=0x1u;
  c->t=R(10)>=R(12);
  { uint32_t k=!c->t; R(11)+=R(13); if(k) goto L8c0ea224; }
L8c0ea23a:;
  R(3)=0x8c0e792eu;
  R(5)=0x0u;
  { c->pr=0x8c0ea242u; R(4)=LD32(R(15)); f_8c0e792e(c); }
  R(3)=0x8c0e74b4u;
  R(6)=R(15);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0ea24cu; R(4)=R(9); f_8c0e74b4(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea29a;
  R(8)=R(9);
  R(8)<<=8;
  R(11)=0x0u;
  R(3)=0x8c2f389cu;
  R(2)=R(11);
  R(10)=LD32(R(15)+8);
  R(8)<<=2;
  c->t=R(8)>>31;R(8)<<=1;
  c->t=R(2)>=R(12);
  { uint32_t k=c->t; R(8)+=R(3); if(k) goto L8c0ea290; }
  R(9)=0xffffff10u;
L8c0ea26a:;
  R(3)=0x8c0e7decu;
  R(5)=R(8);
  { c->pr=0x8c0ea272u; R(4)=LD32(R(15)); f_8c0e7dec(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea292;
  R(2)=0x8c0f1338u;
  R(5)=R(10);
  { c->pr=0x8c0ea280u; R(4)=R(8); f_8c0f1338(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0ea288;
  { R(14)=R(9); goto L8c0ea292; }
L8c0ea288:;
  R(11)+=0x1u;
  c->t=R(11)>=R(12);
  { uint32_t k=!c->t; R(10)+=R(13); if(k) goto L8c0ea26a; }
L8c0ea290:;
  R(14)=0x0u;
L8c0ea292:;
  R(3)=0x8c0e792eu;
  R(5)=0x0u;
  { c->pr=0x8c0ea29au; R(4)=LD32(R(15)); f_8c0e792e(c); }
L8c0ea29a:;
  R(0)=R(14);
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
void f_8c0ea2dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(4);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(0)=0x40u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14)+56);
  R(11)=LD32(R(14)+40);
  ST32(R(14)+R(0),R(3));
  R(3)=R(13);
  c->t=R(3)>=R(12);
  if(c->t) goto L8c0ea334;
L8c0ea2fa:;
  R(0)=0x40u;
  R(4)=0xfffau;
  R(3)=LD32(R(14)+R(0));
  c->t=R(3)==R(4);
  if(!c->t) goto L8c0ea30e;
  R(1)=LD32(R(14)+52);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0ea314;
  { R(0)=0x0u; goto L8c0ea336; }
L8c0ea30e:;
  R(3)=LD32(R(14)+52);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0ea31a;
L8c0ea314:;
  R(0)=0xffff0000u;
  {  goto L8c0ea336; }
L8c0ea31a:;
  R(5)=LD32(R(14)+R(0));
  { c->pr=0x8c0ea320u; R(4)=R(11); f_8c0e9950(c); }
  R(1)=0x40u;
  R(13)+=0x1u;
  R(0)=R(0)&0xFFFF;
  c->t=R(13)>=R(12);
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(3)=LD32(R(14)+52);
  R(3)+=0xffffffffu;
  { uint32_t k=!c->t; ST32(R(14)+52,R(3)); if(k) goto L8c0ea2fa; }
L8c0ea334:;
  R(0)=LD32(R(14)+52);
L8c0ea336:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ea342(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  ST32(R(15)+8,R(5));
  ST32(R(15)+12,R(6));
  ST32(R(15)+4,R(7));
  R(13)=LD32(R(15)+40);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(11)=R(4); if(k) goto L8c0ea376; }
  R(3)=0x8c0e8af0u;
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0ea366u; R(4)=R(11); f_8c0e8af0(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0ea370;
  { R(0)=R(4); goto L8c0ea3cc; }
L8c0ea370:;
  R(3)=LD32(R(15)+4);
  R(13)=R(4);
  R(13)-=R(3);
L8c0ea376:;
  R(3)=0x8c0e74b4u;
  R(6)=R(15);
  R(5)=LD32(R(15)+8);
  { c->pr=0x8c0ea380u; R(4)=R(11); f_8c0e74b4(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea3ca;
  R(4)=0x148u;
  R(2)=0x1u;
  R(3)=0x8c2f2e3cu;
  R(6)=0x0u;
  c->macl=R(11)*R(4);
  R(12)=LD32(R(15)+12);
  R(4)=c->macl;
  R(4)+=R(3);
  ST32(R(4)+48,R(2));
  ST32(R(4)+52,R(13));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0ea3a0u; R(4)=LD32(R(15)); f_8c0ea2dc(c); }
  R(11)=0x0u;
  R(3)=R(11);
  c->t=R(3)>=R(13);
  if(c->t) goto L8c0ea3c0;
  R(10)=0x200u;
L8c0ea3aa:;
  R(3)=0x8c0e7decu;
  R(5)=R(12);
  { c->pr=0x8c0ea3b2u; R(4)=LD32(R(15)); f_8c0e7dec(c); }
  R(14)=R(0);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0ea3c2;
  R(11)+=0x1u;
  c->t=R(11)>=R(13);
  { uint32_t k=!c->t; R(12)+=R(10); if(k) goto L8c0ea3aa; }
L8c0ea3c0:;
  R(14)=0x0u;
L8c0ea3c2:;
  R(3)=0x8c0e792eu;
  R(5)=0x0u;
  { c->pr=0x8c0ea3cau; R(4)=LD32(R(15)); f_8c0e792e(c); }
L8c0ea3ca:;
  R(0)=R(14);
L8c0ea3cc:;
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ea466(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe8u;
  R(13)=0x148u;
  R(12)=R(4);
  R(3)=0x8c2f2e3cu;
  R(2)=0x1u;
  c->macl=R(12)*R(13);
  ST32(R(15),R(5));
  R(11)=R(6);
  R(14)=LD32(R(15)+52);
  R(6)=R(15);
  R(9)=R(7);
  R(6)+=0x4u;
  R(13)=c->macl;
  R(13)+=R(3);
  ST32(R(13)+48,R(2));
  R(2)=0x8c0e6cc4u;
  ST32(R(13)+52,R(14));
  R(5)=LD32(R(15));
  { c->pr=0x8c0ea49cu; R(4)=R(12); f_8c0e6cc4(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0ea4f2;
  R(0)=(int32_t)(int8_t)LD8(R(15)+10);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ea4b0;
  R(0)=0xffffff0bu;
  {  goto L8c0ea51a; }
L8c0ea4b0:;
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(4)=R(0);
  R(4)=R(4)&0xFFFF;
  c->t=R(9)>=R(4);
  if(c->t) goto L8c0ea4c6;
  c->t=R(14)>R(4);
  if(c->t) goto L8c0ea4c6;
  R(2)=R(9);
  R(2)+=R(14);
  c->t=R(2)>R(4);
  if(!c->t) goto L8c0ea4cc;
L8c0ea4c6:;
  R(0)=0xffffff00u;
  {  goto L8c0ea51a; }
L8c0ea4cc:;
  R(5)=LD32(R(15));
  { c->pr=0x8c0ea4d2u; R(4)=R(12); f_8c0e9a90(c); }
  c->t=(int32_t)R(0)>=0;
  { uint32_t k=!c->t; R(4)=R(0); if(k) goto L8c0ea4f2; }
  R(10)=0x0u;
  R(2)=R(10);
  c->t=R(2)>=R(14);
  { uint32_t k=c->t; R(13)=R(9); if(k) goto L8c0ea518; }
L8c0ea4e2:;
  R(9)=0x8c0e5e78u;
  R(5)=R(13);
  R(6)=R(11);
  { c->pr=0x8c0ea4ecu; R(4)=R(12); f_8c0e5e78(c); }
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0ea50c;
L8c0ea4f2:;
  { R(0)=R(4); goto L8c0ea51a; }
L8c0ea50c:;
  R(4)=0x200u;
  R(10)+=0x1u;
  c->t=R(10)>=R(14);
  R(11)+=R(4);
  { uint32_t k=!c->t; R(13)+=0x1u; if(k) goto L8c0ea4e2; }
L8c0ea518:;
  R(0)=0x0u;
L8c0ea51a:;
  R(15)+=0x18u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ea530(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0f4064u;
  R(6)=0xffffu;
  {  goto L8c0ea554; }
L8c0ea53a:;
  R(7)=R(6)&0xFFFF;
  R(0)=R(7);
  R(3)=0xfffffff8u;
  R(0)=sh4_shad(R(0),R(3));
  {int32_t v=(int8_t)LD8(R(5));R(5)+=1;R(3)=(uint32_t)v;}
  R(2)=R(7);
  R(2)<<=8;
  R(3)=R(3)&0xFF;
  R(6)=R(2);
  R(0)^=R(3);
  c->t=R(0)>>31;R(0)<<=1;
  R(1)=(int32_t)(int16_t)LD16(R(14)+R(0));
  R(6)^=R(1);
L8c0ea554:;
  R(4)+=0xffffffffu;
  c->t=(int32_t)R(4)>=0;
  if(c->t) goto L8c0ea53a;
  R(0)=R(6)&0xFFFF;
  R(0)=~R(0);
  R(0)=R(0)&0xFFFF;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ec588(SH4Ctx *c) {
  R(0)=0x8c0ec584u;
  ST32(R(0),R(15));
  R(15)=0x8c0ec580u;
  R(0)=c->fpscr;
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(1)=0x18u;
  R(1)<<=16;
  R(1)=~R(1);
  R(0)&=R(1);
  sh4_setfpscr(c,R(0));
  R(15)-=fp_sz(c);fp_st(c,0,R(15));
  R(15)-=fp_sz(c);fp_st(c,1,R(15));
  R(15)-=fp_sz(c);fp_st(c,2,R(15));
  R(15)-=fp_sz(c);fp_st(c,3,R(15));
  R(15)-=fp_sz(c);fp_st(c,4,R(15));
  R(15)-=fp_sz(c);fp_st(c,5,R(15));
  R(15)-=fp_sz(c);fp_st(c,6,R(15));
  R(15)-=fp_sz(c);fp_st(c,7,R(15));
  R(15)-=fp_sz(c);fp_st(c,8,R(15));
  R(15)-=fp_sz(c);fp_st(c,9,R(15));
  R(15)-=fp_sz(c);fp_st(c,10,R(15));
  R(15)-=fp_sz(c);fp_st(c,11,R(15));
  R(15)-=fp_sz(c);fp_st(c,12,R(15));
  R(15)-=fp_sz(c);fp_st(c,13,R(15));
  R(15)-=fp_sz(c);fp_st(c,14,R(15));
  R(15)-=fp_sz(c);fp_st(c,15,R(15));
  {uint32_t v=c->macl;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->mach;R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=R(4);
  R(4)=R(5);
  { uint32_t tg=R(3); c->pr=0x8c0ec5cau; R(5)=R(6); sh4_call(c,tg); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->mach=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;c->macl=v;}
  fp_ld(c,15,R(15));R(15)+=fp_sz(c);
  fp_ld(c,14,R(15));R(15)+=fp_sz(c);
  fp_ld(c,13,R(15));R(15)+=fp_sz(c);
  fp_ld(c,12,R(15));R(15)+=fp_sz(c);
  fp_ld(c,11,R(15));R(15)+=fp_sz(c);
  fp_ld(c,10,R(15));R(15)+=fp_sz(c);
  fp_ld(c,9,R(15));R(15)+=fp_sz(c);
  fp_ld(c,8,R(15));R(15)+=fp_sz(c);
  fp_ld(c,7,R(15));R(15)+=fp_sz(c);
  fp_ld(c,6,R(15));R(15)+=fp_sz(c);
  fp_ld(c,5,R(15));R(15)+=fp_sz(c);
  fp_ld(c,4,R(15));R(15)+=fp_sz(c);
  fp_ld(c,3,R(15));R(15)+=fp_sz(c);
  fp_ld(c,2,R(15));R(15)+=fp_sz(c);
  fp_ld(c,1,R(15));R(15)+=fp_sz(c);
  fp_ld(c,0,R(15));R(15)+=fp_sz(c);
  {uint32_t v=LD32(R(15));R(15)+=4;R(0)=v;}
  sh4_setfpscr(c,R(0));
  R(0)=0x8c0ec584u;
  R(15)=LD32(R(0));
  {  return; }
}
void f_8c0ec620(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(1)=0xau;
  R(2)=0x8c2ef150u;
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  R(13)=0x8c0db7e0u;
  R(3)+=R(4);
  c->t=(int32_t)R(3)>(int32_t)R(1);
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0ec662; }
  R(3)=0x8c2ef140u;
  R(0)=LD32(R(3));
  c->t=R(0)==R(4);
  if(c->t) goto L8c0ec664;
  R(2)=0x8c2ef140u;
  ST32(R(2),R(4));
  R(0)=R(2);
  R(1)=LD32(R(0));
  R(3)=0x8c2ef150u;
  R(0)=LD32(R(3));
  R(0)+=R(1);
  R(1)=0x8c2ef128u;
  ST32(R(1),R(0));
  R(4)=0xecu;
  R(2)+=0xffffffe8u;
  { uint32_t tg=R(13); c->pr=0x8c0ec65eu; R(5)=LD32(R(2)); sh4_call(c,tg); }
  {  goto L8c0ec664; }
L8c0ec662:;
  R(12)=0x12u;
L8c0ec664:;
  R(3)=0x8c2ef154u;
  R(2)=LD32(R(3));
  R(2)+=R(14);
  c->t=(int32_t)R(2)>0;
  if(c->t) goto L8c0ec672;
  {  goto L8c0ec7fc; }
L8c0ec672:;
  R(2)=0x8c2ef158u;
  R(1)=LD32(R(2));
  R(1)+=R(14);
  c->t=(int32_t)R(1)>0;
  if(c->t) goto L8c0ec680;
  {  goto L8c0ec7fc; }
L8c0ec680:;
  R(2)=0x8c2ef144u;
  R(3)=LD32(R(2));
  c->t=R(3)==R(14);
  if(!c->t) goto L8c0ec68c;
  {  goto L8c0ec7fe; }
L8c0ec68c:;
  R(1)=0x8c2ef154u;
  R(0)=LD32(R(1));
  R(2)=0x8c2ef158u;
  R(0)+=R(14);
  R(3)=LD32(R(2));
  R(3)+=R(14);
  R(3)<<=16;
  R(0)|=R(3);
  R(3)=0x8c2ef12cu;
  ST32(R(3),R(0));
  R(11)=0xf0u;
  R(2)+=0xffffffd4u;
  R(5)=LD32(R(2));
  { uint32_t tg=R(13); c->pr=0x8c0ec6aau; R(4)=R(11); sh4_call(c,tg); }
  R(2)=0x8c2ef0e0u;
  R(3)=0xfff003ffu;
  R(6)=LD32(R(2));
  c->t=(int32_t)R(14)>0;
  R(6)&=R(3);
  { uint32_t k=!c->t; R(5)=0x3u; if(k) goto L8c0ec768; }
  R(0)=0x8c2ef16cu;
  R(2)=0x8c2ef14cu;
  R(1)=LD32(R(0));
  c->t=(int32_t)R(1)>=(int32_t)R(14);
  { uint32_t k=c->t; R(4)=LD32(R(2)); if(k) goto L8c0ec720; }
  { R(4)-=R(14); goto L8c0ec726; }
L8c0ec720:;
  R(1)=0x8c2ef16cu;
  R(3)=LD32(R(1));
  R(4)-=R(3);
L8c0ec726:;
  R(1)=0x8c2ef14cu;
  R(2)=R(14);
  R(2)+=R(4);
  R(3)=LD32(R(1));
  c->t=R(2)>R(3);
  if(!c->t) goto L8c0ec73c;
  R(2)=0x8c2ef16cu;
  R(3)=LD32(R(2));
  R(0)=0x8c2ef14cu;
  R(4)=LD32(R(0));
  R(4)-=R(3);
L8c0ec73c:;
  R(3)=0x8c2ef14cu;
  R(1)=LD32(R(3));
  c->t=R(1)>=R(4);
  if(c->t) goto L8c0ec748;
  R(0)=0x8c2ef14cu;
  ST32(R(0),R(4));
L8c0ec748:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ec7ca;
  R(1)=0x8c2ef0c8u;
  R(0)=LD32(R(1));
  c->t=(R(0)&0x20)==0;
  if(!c->t) goto L8c0ec7ca;
  R(3)=R(11);
  R(3)-=R(4);
  R(4)=R(11);
  c->t=R(3)&1;R(3)>>=1;
  R(4)-=R(3);
  {  goto L8c0ec7ca; }
L8c0ec768:;
  R(2)=0x8c2ef0c8u;
  R(0)=LD32(R(2));
  R(0)&=R(5);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0ec780;
  R(1)=0x8c2ef0c8u;
  R(0)=LD32(R(1));
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0ec780;
  R(4)=0x1deu;
  {  goto L8c0ec7ca; }
L8c0ec780:;
  R(3)=0x8c2ef0c8u;
  R(0)=LD32(R(3));
  R(0)&=0x42u;
  c->t=(int32_t)R(0)==66;
  if(!c->t) goto L8c0ec7c8;
  R(1)=0x8c2ef0c8u;
  R(0)=LD32(R(1));
  c->t=(R(0)&0x20)==0;
  if(c->t) goto L8c0ec7c0;
  R(2)=0x8c2ef13cu;
  R(4)=LD32(R(2));
  R(2)=0x0u;
  c->t=(int32_t)R(2)>(int32_t)R(4);
  {uint32_t a=R(4),b=R(2),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(4)=r;}
  { c->t=R(4)&1;R(4)=(uint32_t)((int32_t)R(4)>>1); goto L8c0ec7c4; }
L8c0ec7c0:;
  R(2)=0x8c2ef13cu;
  R(4)=LD32(R(2));
L8c0ec7c4:;
  { R(4)+=0xfffffffeu; goto L8c0ec7ca; }
L8c0ec7c8:;
  R(4)=0xeeu;
L8c0ec7ca:;
  R(2)=0x3ffu;
  R(3)=0x8c2ef0e0u;
  R(4)&=R(2);
  R(4)<<=8;
  R(4)<<=2;
  R(4)|=R(6);
  ST32(R(3),R(4));
  R(1)=0x8c2ef144u;
  ST32(R(1),R(14));
  R(2)=0x8c2ef0e8u;
  R(3)=0xfffffffeu;
  R(5)=LD32(R(2));
  R(5)&=R(3);
  { uint32_t tg=R(13); c->pr=0x8c0ec7e8u; R(4)=0x44u; sh4_call(c,tg); }
  R(3)=0x8c2ef0e0u;
  R(5)=LD32(R(3));
  { uint32_t tg=R(13); c->pr=0x8c0ec7f0u; R(4)=0x5cu; sh4_call(c,tg); }
  R(2)=0x8c2ef0e8u;
  R(5)=LD32(R(2));
  { uint32_t tg=R(13); c->pr=0x8c0ec7f8u; R(4)=0x44u; sh4_call(c,tg); }
  {  goto L8c0ec7fe; }
L8c0ec7fc:;
  R(12)=0x12u;
L8c0ec7fe:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ec840(SH4Ctx *c) {
  R(2)=0x8c0f43f4u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  R(7)=LD32(R(6));
  c->t=R(7)>=R(3);
  R(3)=0x8c0df3a0u;
  R(7)=c->t;
  { c->pr=0x8c0ec852u;  f_8c0df3a0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ec880(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4));
  R(13)=0x8c0ecc00u;
  c->t=(int32_t)R(0)==17;
  if(!c->t) goto L8c0ec894;
  { R(14)=LD32(R(13)+24); goto L8c0ec896; }
L8c0ec894:;
  R(14)=LD32(R(13)+28);
L8c0ec896:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0ec89e;
  {  goto L8c0ecb1c; }
L8c0ec89e:;
  R(0)=LD32(R(4));
  R(12)=0x8c0f1420u;
  c->t=(int32_t)R(0)==17;
  if(c->t) goto L8c0ec8c6;
  c->t=(int32_t)R(0)==18;
  if(c->t) goto L8c0ec900;
  c->t=(int32_t)R(0)==19;
  if(c->t) goto L8c0ec906;
  c->t=(int32_t)R(0)==25;
  if(c->t) goto L8c0ec910;
  c->t=(int32_t)R(0)==24;
  if(c->t) goto L8c0ec916;
  c->t=(int32_t)R(0)==23;
  if(c->t) goto L8c0ec91c;
  c->t=(int32_t)R(0)==22;
  if(c->t) goto L8c0ec922;
  c->t=(int32_t)R(0)==21;
  if(c->t) goto L8c0ec960;
  {  goto L8c0ec96a; }
L8c0ec8c6:;
  R(3)=0x4000u;
  {  goto L8c0ec908; }
L8c0ec900:;
  R(3)=0x8000u;
  {  goto L8c0ec908; }
L8c0ec906:;
  R(3)=0x100u;
L8c0ec908:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  R(0)|=R(3);
  { ST16(R(14)+30,R(0)); goto L8c0ec96a; }
L8c0ec910:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  { R(0)|=0x1u; goto L8c0ec964; }
L8c0ec916:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  { R(0)|=0x2u; goto L8c0ec964; }
L8c0ec91c:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  { R(0)|=0x4u; goto L8c0ec964; }
L8c0ec922:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  { R(0)|=0x8u; goto L8c0ec964; }
L8c0ec960:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  R(0)|=0x10u;
L8c0ec964:;
  ST16(R(14)+30,R(0));
  { uint32_t tg=R(12); c->pr=0x8c0ec96au; R(4)=LD32(R(14)+48); sh4_call(c,tg); }
L8c0ec96a:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(4)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  R(5)=R(4);
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)&=R(6);
  R(0)=R(0)&0xFFFF;
  R(5)=R(5)&0xFFFF;
  c->t=R(5)==R(0);
  if(c->t) goto L8c0ec984;
  {  goto L8c0ecb1c; }
L8c0ec984:;
  R(0)=LD32(R(14)+8);
  R(6)=0x8u;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0ec992; }
  {  goto L8c0eca80; }
L8c0ec992:;
  R(2)=LD32(R(14)+48);
  R(3)=0x0u;
  c->t=R(2)>R(3);
  if(c->t) goto L8c0ec99e;
  {  goto L8c0eca80; }
L8c0ec99e:;
  R(3)=LD32(R(14)+4);
  c->t=(R(6)&R(3))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0ec9f2; }
  R(1)=LD32(R(14)+48);
  R(0)=R(4);
  R(6)=0xffa0002cu;
  R(1)+=0xffffffffu;
  ST32(R(14)+48,R(1));
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(14)+52);
  R(2)+=R(3);
  ST32(R(14)+16,R(2));
  R(1)=LD32(R(14)+20);
  R(3)=LD32(R(14)+56);
  R(1)+=R(3);
  ST32(R(14)+20,R(1));
  ST16(R(14)+30,R(0));
  R(3)=LD32(R(6));
  ST32(R(6),R(4));
  R(3)=0xffa00020u;
  R(2)=LD32(R(14)+16);
  ST32(R(3),R(2));
  R(1)=LD32(R(14)+12);
  R(0)=0xffa00028u;
  R(1)>>=2;
  R(1)>>=2;
  c->t=R(1)&1;R(1)>>=1;
  ST32(R(0),R(1));
  R(2)=0x12c1u;
  ST32(R(6),R(2));
  R(2)=0xffa00040u;
  R(1)=0x8201u;
  ST32(R(2),R(1));
  R(1)=0xa05f6800u;
  R(3)=LD32(R(14)+20);
  ST32(R(1),R(3));
  R(2)=0xa05f6808u;
  R(3)=0xa05f6804u;
  R(0)=LD32(R(14)+12);
  { ST32(R(3),R(0)); goto L8c0eca34; }
L8c0ec9f2:;
  R(3)=LD32(R(14)+48);
  R(0)=R(4);
  R(3)+=0xffffffffu;
  ST32(R(14)+48,R(3));
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(14)+52);
  R(2)+=R(3);
  ST32(R(14)+16,R(2));
  R(1)=LD32(R(14)+20);
  R(3)=LD32(R(14)+56);
  R(2)=0xa05f7c80u;
  R(1)+=R(3);
  R(3)=0x6702007fu;
  ST32(R(14)+20,R(1));
  ST16(R(14)+30,R(0));
  ST32(R(2),R(3));
  R(0)=0xa05f7c00u;
  R(1)=LD32(R(14)+20);
  ST32(R(0),R(1));
  R(1)=0xa05f7c04u;
  R(3)=LD32(R(14)+16);
  ST32(R(1),R(3));
  R(3)=0xa05f7c08u;
  R(2)=LD32(R(14)+12);
  ST32(R(3),R(2));
  R(2)=0xa05f7c0cu;
  R(0)=LD32(R(14)+60);
  ST32(R(2),R(0));
  R(1)+=0xcu;
  ST32(R(1),R(4));
  R(3)+=0xcu;
  ST32(R(3),R(5));
  R(2)+=0xcu;
L8c0eca34:;
  { ST32(R(2),R(5)); goto L8c0ecb1c; }
L8c0eca80:;
  R(0)=LD32(R(14)+32);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0eca92;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ecaae;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ecaca;
  {  goto L8c0ecae4; }
L8c0eca92:;
  R(0)=0x30u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)+=0xffffffffu;
  ST16(R(13)+R(0),R(2));
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0x1u;
  ST16(R(13)+R(0),R(3));
  R(3)=0x1fu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  { ST32(R(13)+32,R(4)); goto L8c0ecae4; }
L8c0ecaae:;
  R(0)=0x36u;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0xffffffffu;
  ST16(R(13)+R(0),R(3));
  R(0)=0x34u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x1fu;
  R(2)+=0x1u;
  ST16(R(13)+R(0),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  { ST32(R(13)+36,R(4)); goto L8c0ecae4; }
L8c0ecaca:;
  R(0)=0x3cu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0xffffffffu;
  ST16(R(13)+R(0),R(3));
  R(0)=0x3au;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x1fu;
  R(2)+=0x1u;
  ST16(R(13)+R(0),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  ST32(R(13)+40,R(4));
L8c0ecae4:;
  R(3)=LD32(R(14)+4);
  c->t=(R(6)&R(3))==0;
  if(c->t) goto L8c0ecaee;
  { ST32(R(13)+28,R(4)); goto L8c0ecaf0; }
L8c0ecaee:;
  ST32(R(13)+24,R(4));
L8c0ecaf0:;
  R(2)=0xffd8000cu;
  R(3)=LD32(R(2));
  R(1)=LD32(R(14)+36);
  R(1)-=R(3);
  R(3)=0x8c0679f4u;
  R(1)<<=2;
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  { c->pr=0x8c0ecb06u; R(0)=0x64u; f_8c0679f4(c); }
  ST32(R(14)+36,R(0));
  ST32(R(14)+40,R(4));
  R(1)=LD32(R(14)+24);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ecb16;
  R(3)=LD32(R(14)+24);
  { uint32_t tg=R(3); c->pr=0x8c0ecb16u; R(4)=R(14); sh4_call(c,tg); }
L8c0ecb16:;
  R(2)=0x8c0dd860u;
  { c->pr=0x8c0ecb1cu;  f_8c0dd860(c); }
L8c0ecb1c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ec900(SH4Ctx *c) {
  R(3)=0x8000u;
  {  goto L8c0ec908; }
L8c0ec908:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  R(0)|=R(3);
  { ST16(R(14)+30,R(0)); goto L8c0ec96a; }
L8c0ec96a:;
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(4)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  R(5)=R(4);
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)&=R(6);
  R(0)=R(0)&0xFFFF;
  R(5)=R(5)&0xFFFF;
  c->t=R(5)==R(0);
  if(c->t) goto L8c0ec984;
  {  goto L8c0ecb1c; }
L8c0ec984:;
  R(0)=LD32(R(14)+8);
  R(6)=0x8u;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0ec992; }
  {  goto L8c0eca80; }
L8c0ec992:;
  R(2)=LD32(R(14)+48);
  R(3)=0x0u;
  c->t=R(2)>R(3);
  if(c->t) goto L8c0ec99e;
  {  goto L8c0eca80; }
L8c0ec99e:;
  R(3)=LD32(R(14)+4);
  c->t=(R(6)&R(3))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0ec9f2; }
  R(1)=LD32(R(14)+48);
  R(0)=R(4);
  R(6)=0xffa0002cu;
  R(1)+=0xffffffffu;
  ST32(R(14)+48,R(1));
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(14)+52);
  R(2)+=R(3);
  ST32(R(14)+16,R(2));
  R(1)=LD32(R(14)+20);
  R(3)=LD32(R(14)+56);
  R(1)+=R(3);
  ST32(R(14)+20,R(1));
  ST16(R(14)+30,R(0));
  R(3)=LD32(R(6));
  ST32(R(6),R(4));
  R(3)=0xffa00020u;
  R(2)=LD32(R(14)+16);
  ST32(R(3),R(2));
  R(1)=LD32(R(14)+12);
  R(0)=0xffa00028u;
  R(1)>>=2;
  R(1)>>=2;
  c->t=R(1)&1;R(1)>>=1;
  ST32(R(0),R(1));
  R(2)=0x12c1u;
  ST32(R(6),R(2));
  R(2)=0xffa00040u;
  R(1)=0x8201u;
  ST32(R(2),R(1));
  R(1)=0xa05f6800u;
  R(3)=LD32(R(14)+20);
  ST32(R(1),R(3));
  R(2)=0xa05f6808u;
  R(3)=0xa05f6804u;
  R(0)=LD32(R(14)+12);
  { ST32(R(3),R(0)); goto L8c0eca34; }
L8c0ec9f2:;
  R(3)=LD32(R(14)+48);
  R(0)=R(4);
  R(3)+=0xffffffffu;
  ST32(R(14)+48,R(3));
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(14)+52);
  R(2)+=R(3);
  ST32(R(14)+16,R(2));
  R(1)=LD32(R(14)+20);
  R(3)=LD32(R(14)+56);
  R(2)=0xa05f7c80u;
  R(1)+=R(3);
  R(3)=0x6702007fu;
  ST32(R(14)+20,R(1));
  ST16(R(14)+30,R(0));
  ST32(R(2),R(3));
  R(0)=0xa05f7c00u;
  R(1)=LD32(R(14)+20);
  ST32(R(0),R(1));
  R(1)=0xa05f7c04u;
  R(3)=LD32(R(14)+16);
  ST32(R(1),R(3));
  R(3)=0xa05f7c08u;
  R(2)=LD32(R(14)+12);
  ST32(R(3),R(2));
  R(2)=0xa05f7c0cu;
  R(0)=LD32(R(14)+60);
  ST32(R(2),R(0));
  R(1)+=0xcu;
  ST32(R(1),R(4));
  R(3)+=0xcu;
  ST32(R(3),R(5));
  R(2)+=0xcu;
L8c0eca34:;
  { ST32(R(2),R(5)); goto L8c0ecb1c; }
L8c0eca80:;
  R(0)=LD32(R(14)+32);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0eca92;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ecaae;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ecaca;
  {  goto L8c0ecae4; }
L8c0eca92:;
  R(0)=0x30u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)+=0xffffffffu;
  ST16(R(13)+R(0),R(2));
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0x1u;
  ST16(R(13)+R(0),R(3));
  R(3)=0x1fu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  { ST32(R(13)+32,R(4)); goto L8c0ecae4; }
L8c0ecaae:;
  R(0)=0x36u;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0xffffffffu;
  ST16(R(13)+R(0),R(3));
  R(0)=0x34u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x1fu;
  R(2)+=0x1u;
  ST16(R(13)+R(0),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  { ST32(R(13)+36,R(4)); goto L8c0ecae4; }
L8c0ecaca:;
  R(0)=0x3cu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0xffffffffu;
  ST16(R(13)+R(0),R(3));
  R(0)=0x3au;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x1fu;
  R(2)+=0x1u;
  ST16(R(13)+R(0),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  ST32(R(13)+40,R(4));
L8c0ecae4:;
  R(3)=LD32(R(14)+4);
  c->t=(R(6)&R(3))==0;
  if(c->t) goto L8c0ecaee;
  { ST32(R(13)+28,R(4)); goto L8c0ecaf0; }
L8c0ecaee:;
  ST32(R(13)+24,R(4));
L8c0ecaf0:;
  R(2)=0xffd8000cu;
  R(3)=LD32(R(2));
  R(1)=LD32(R(14)+36);
  R(1)-=R(3);
  R(3)=0x8c0679f4u;
  R(1)<<=2;
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  { c->pr=0x8c0ecb06u; R(0)=0x64u; f_8c0679f4(c); }
  ST32(R(14)+36,R(0));
  ST32(R(14)+40,R(4));
  R(1)=LD32(R(14)+24);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ecb16;
  R(3)=LD32(R(14)+24);
  { uint32_t tg=R(3); c->pr=0x8c0ecb16u; R(4)=R(14); sh4_call(c,tg); }
L8c0ecb16:;
  R(2)=0x8c0dd860u;
  { c->pr=0x8c0ecb1cu;  f_8c0dd860(c); }
L8c0ecb1c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ec960(SH4Ctx *c) {
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  R(0)|=0x10u;
  ST16(R(14)+30,R(0));
  { uint32_t tg=R(12); c->pr=0x8c0ec96au; R(4)=LD32(R(14)+48); sh4_call(c,tg); }
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(4)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(14)+30);
  R(5)=R(4);
  R(6)=R(0);
  R(0)=(int32_t)(int16_t)LD16(R(14)+28);
  R(5)&=R(6);
  R(0)=R(0)&0xFFFF;
  R(5)=R(5)&0xFFFF;
  c->t=R(5)==R(0);
  if(c->t) goto L8c0ec984;
  {  goto L8c0ecb1c; }
L8c0ec984:;
  R(0)=LD32(R(14)+8);
  R(6)=0x8u;
  c->t=(int32_t)R(0)==4;
  { uint32_t k=c->t; R(4)=0x0u; if(k) goto L8c0ec992; }
  {  goto L8c0eca80; }
L8c0ec992:;
  R(2)=LD32(R(14)+48);
  R(3)=0x0u;
  c->t=R(2)>R(3);
  if(c->t) goto L8c0ec99e;
  {  goto L8c0eca80; }
L8c0ec99e:;
  R(3)=LD32(R(14)+4);
  c->t=(R(6)&R(3))==0;
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0ec9f2; }
  R(1)=LD32(R(14)+48);
  R(0)=R(4);
  R(6)=0xffa0002cu;
  R(1)+=0xffffffffu;
  ST32(R(14)+48,R(1));
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(14)+52);
  R(2)+=R(3);
  ST32(R(14)+16,R(2));
  R(1)=LD32(R(14)+20);
  R(3)=LD32(R(14)+56);
  R(1)+=R(3);
  ST32(R(14)+20,R(1));
  ST16(R(14)+30,R(0));
  R(3)=LD32(R(6));
  ST32(R(6),R(4));
  R(3)=0xffa00020u;
  R(2)=LD32(R(14)+16);
  ST32(R(3),R(2));
  R(1)=LD32(R(14)+12);
  R(0)=0xffa00028u;
  R(1)>>=2;
  R(1)>>=2;
  c->t=R(1)&1;R(1)>>=1;
  ST32(R(0),R(1));
  R(2)=0x12c1u;
  ST32(R(6),R(2));
  R(2)=0xffa00040u;
  R(1)=0x8201u;
  ST32(R(2),R(1));
  R(1)=0xa05f6800u;
  R(3)=LD32(R(14)+20);
  ST32(R(1),R(3));
  R(2)=0xa05f6808u;
  R(3)=0xa05f6804u;
  R(0)=LD32(R(14)+12);
  { ST32(R(3),R(0)); goto L8c0eca34; }
L8c0ec9f2:;
  R(3)=LD32(R(14)+48);
  R(0)=R(4);
  R(3)+=0xffffffffu;
  ST32(R(14)+48,R(3));
  R(2)=LD32(R(14)+16);
  R(3)=LD32(R(14)+52);
  R(2)+=R(3);
  ST32(R(14)+16,R(2));
  R(1)=LD32(R(14)+20);
  R(3)=LD32(R(14)+56);
  R(2)=0xa05f7c80u;
  R(1)+=R(3);
  R(3)=0x6702007fu;
  ST32(R(14)+20,R(1));
  ST16(R(14)+30,R(0));
  ST32(R(2),R(3));
  R(0)=0xa05f7c00u;
  R(1)=LD32(R(14)+20);
  ST32(R(0),R(1));
  R(1)=0xa05f7c04u;
  R(3)=LD32(R(14)+16);
  ST32(R(1),R(3));
  R(3)=0xa05f7c08u;
  R(2)=LD32(R(14)+12);
  ST32(R(3),R(2));
  R(2)=0xa05f7c0cu;
  R(0)=LD32(R(14)+60);
  ST32(R(2),R(0));
  R(1)+=0xcu;
  ST32(R(1),R(4));
  R(3)+=0xcu;
  ST32(R(3),R(5));
  R(2)+=0xcu;
L8c0eca34:;
  { ST32(R(2),R(5)); goto L8c0ecb1c; }
L8c0eca80:;
  R(0)=LD32(R(14)+32);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0eca92;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ecaae;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ecaca;
  {  goto L8c0ecae4; }
L8c0eca92:;
  R(0)=0x30u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)+=0xffffffffu;
  ST16(R(13)+R(0),R(2));
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0x1u;
  ST16(R(13)+R(0),R(3));
  R(3)=0x1fu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  { ST32(R(13)+32,R(4)); goto L8c0ecae4; }
L8c0ecaae:;
  R(0)=0x36u;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0xffffffffu;
  ST16(R(13)+R(0),R(3));
  R(0)=0x34u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x1fu;
  R(2)+=0x1u;
  ST16(R(13)+R(0),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  { ST32(R(13)+36,R(4)); goto L8c0ecae4; }
L8c0ecaca:;
  R(0)=0x3cu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0xffffffffu;
  ST16(R(13)+R(0),R(3));
  R(0)=0x3au;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x1fu;
  R(2)+=0x1u;
  ST16(R(13)+R(0),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  ST32(R(13)+40,R(4));
L8c0ecae4:;
  R(3)=LD32(R(14)+4);
  c->t=(R(6)&R(3))==0;
  if(c->t) goto L8c0ecaee;
  { ST32(R(13)+28,R(4)); goto L8c0ecaf0; }
L8c0ecaee:;
  ST32(R(13)+24,R(4));
L8c0ecaf0:;
  R(2)=0xffd8000cu;
  R(3)=LD32(R(2));
  R(1)=LD32(R(14)+36);
  R(1)-=R(3);
  R(3)=0x8c0679f4u;
  R(1)<<=2;
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  { c->pr=0x8c0ecb06u; R(0)=0x64u; f_8c0679f4(c); }
  ST32(R(14)+36,R(0));
  ST32(R(14)+40,R(4));
  R(1)=LD32(R(14)+24);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ecb16;
  R(3)=LD32(R(14)+24);
  { uint32_t tg=R(3); c->pr=0x8c0ecb16u; R(4)=R(14); sh4_call(c,tg); }
L8c0ecb16:;
  R(2)=0x8c0dd860u;
  { c->pr=0x8c0ecb1cu;  f_8c0dd860(c); }
L8c0ecb1c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0eca80(SH4Ctx *c) {
  R(0)=LD32(R(14)+32);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0eca92;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0ecaae;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0ecaca;
  {  goto L8c0ecae4; }
L8c0eca92:;
  R(0)=0x30u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)+=0xffffffffu;
  ST16(R(13)+R(0),R(2));
  R(0)=0x2eu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0x1u;
  ST16(R(13)+R(0),R(3));
  R(3)=0x1fu;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  { ST32(R(13)+32,R(4)); goto L8c0ecae4; }
L8c0ecaae:;
  R(0)=0x36u;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0xffffffffu;
  ST16(R(13)+R(0),R(3));
  R(0)=0x34u;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x1fu;
  R(2)+=0x1u;
  ST16(R(13)+R(0),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  { ST32(R(13)+36,R(4)); goto L8c0ecae4; }
L8c0ecaca:;
  R(0)=0x3cu;
  R(3)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)+=0xffffffffu;
  ST16(R(13)+R(0),R(3));
  R(0)=0x3au;
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(3)=0x1fu;
  R(2)+=0x1u;
  ST16(R(13)+R(0),R(2));
  R(2)=(int32_t)(int16_t)LD16(R(13)+R(0));
  R(2)&=R(3);
  ST16(R(13)+R(0),R(2));
  ST32(R(13)+40,R(4));
L8c0ecae4:;
  R(3)=LD32(R(14)+4);
  c->t=(R(6)&R(3))==0;
  if(c->t) goto L8c0ecaee;
  { ST32(R(13)+28,R(4)); goto L8c0ecaf0; }
L8c0ecaee:;
  ST32(R(13)+24,R(4));
L8c0ecaf0:;
  R(2)=0xffd8000cu;
  R(3)=LD32(R(2));
  R(1)=LD32(R(14)+36);
  R(1)-=R(3);
  R(3)=0x8c0679f4u;
  R(1)<<=2;
  R(1)<<=2;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  { c->pr=0x8c0ecb06u; R(0)=0x64u; f_8c0679f4(c); }
  ST32(R(14)+36,R(0));
  ST32(R(14)+40,R(4));
  R(1)=LD32(R(14)+24);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0ecb16;
  R(3)=LD32(R(14)+24);
  { uint32_t tg=R(3); c->pr=0x8c0ecb16u; R(4)=R(14); sh4_call(c,tg); }
L8c0ecb16:;
  R(2)=0x8c0dd860u;
  { c->pr=0x8c0ecb1cu;  f_8c0dd860(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ecb28(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=LD32(R(4));
  R(5)=0x8c0ecc00u;
  c->t=(int32_t)R(0)==27;
  { uint32_t k=c->t; R(14)=LD32(R(5)+28); if(k) goto L8c0ecb40; }
  c->t=(int32_t)R(0)==28;
  if(c->t) goto L8c0ecb4e;
  {  goto L8c0ecb58; }
L8c0ecb40:;
  R(13)=LD32(R(5)+16);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ecb58;
  { uint32_t tg=R(13); c->pr=0x8c0ecb4au; R(4)=R(14); sh4_call(c,tg); }
  {  goto L8c0ecb58; }
L8c0ecb4e:;
  R(13)=LD32(R(5)+20);
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ecb58;
  { uint32_t tg=R(13); c->pr=0x8c0ecb58u; R(4)=R(14); sh4_call(c,tg); }
L8c0ecb58:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x1u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ecba0(SH4Ctx *c) {
  R(5)=0xfffffff8u;
  R(6)=0x400000u;
  R(2)=0x3u;
  R(5)&=R(4);
  R(3)=0x4u;
  c->t=R(5)&1;R(5)>>=1;
  R(2)&=R(4);
  c->t=(R(3)&R(4))==0;
  R(5)+=R(2);
  if(c->t) goto L8c0ecbb6;
  R(5)+=R(6);
L8c0ecbb6:;
  R(3)=0x800000u;
  c->t=R(4)>=R(3);
  if(!c->t) goto L8c0ecbbe;
  R(5)+=R(6);
L8c0ecbbe:;
  { R(0)=R(5); return; }
}
void f_8c0eec00(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  { c->pr=0x8c0eec0au; R(5)=R(15); f_8c0eec24(c); }
  R(5)=R(0);
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0eec18;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x7u; return; }
L8c0eec18:;
  { c->pr=0x8c0eec1cu; R(4)=(int32_t)(int16_t)LD16(R(15)); f_8c0eec5c(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0eec24(SH4Ctx *c) {
  R(2)=0x8c0f43f4u;
  R(3)=LD32(R(2));
  c->t=R(4)>=R(3);
  { uint32_t k=c->t; R(6)=0x0u; if(k) goto L8c0eec32; }
  { ST16(R(5),R(6)); goto L8c0eec36; }
L8c0eec32:;
  R(1)=0x1u;
  ST16(R(5),R(1));
L8c0eec36:;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(0)=0x8c0f4400u;
  R(3)<<=2;
  R(3)<<=2;
  R(5)=LD32(R(3)+R(0));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=c->t; R(7)=R(6); if(k) goto L8c0eec58; }
L8c0eec46:;
  R(1)=LD32(R(5)+12);
  c->t=R(1)==R(4);
  if(!c->t) goto L8c0eec52;
  R(7)=R(5);
  { R(5)=R(6); goto L8c0eec54; }
L8c0eec52:;
  R(5)=LD32(R(5)+8);
L8c0eec54:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0eec46;
L8c0eec58:;
  { R(0)=R(7); return; }
}
void f_8c0eec5c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(4);
  ST16(R(15)+4,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+4);
  R(6)=R(5);
  R(11)=0x8c0f43dcu;
  R(14)=R(5);
  R(10)=R(0);
  R(10)<<=2;
  R(5)=R(11);
  R(5)+=0x24u;
  R(10)<<=2;
  R(9)=0x8c0df9f0u;
  R(5)+=R(10);
  ST32(R(15),R(5));
  R(5)+=0x4u;
  { c->pr=0x8c0eec90u; R(4)=LD32(R(15)); f_8c0df9f0(c); }
  R(4)=R(11);
  R(4)+=0x24u;
  R(4)+=R(10);
  R(4)=LD32(R(4)+8);
  R(12)=0x0u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=R(12); if(k) goto L8c0eecc0; }
L8c0eeca0:;
  R(2)=LD32(R(14)+16);
  R(6)=LD32(R(14)+12);
  R(5)=LD32(R(4)+12);
  R(2)+=R(6);
  c->t=R(5)==R(2);
  if(c->t) goto L8c0eecb4;
  R(2)=LD32(R(4)+16);
  R(2)+=R(5);
  c->t=R(6)==R(2);
  if(!c->t) goto L8c0eecba;
L8c0eecb4:;
  R(13)=R(4);
  { R(4)=R(12); goto L8c0eecbc; }
L8c0eecba:;
  R(4)=LD32(R(4)+8);
L8c0eecbc:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0eeca0;
L8c0eecc0:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0eed54;
L8c0eecc4:;
  R(2)=LD32(R(14)+12);
  R(3)=LD32(R(14)+16);
  R(1)=LD32(R(13)+12);
  R(2)+=R(3);
  c->t=R(1)==R(2);
  { uint32_t k=!c->t; R(4)=R(14); if(k) goto L8c0eed00; }
  R(2)=LD32(R(14)+12);
  ST32(R(13)+12,R(2));
  R(3)=LD32(R(14)+16);
  R(1)=LD32(R(13)+16);
  R(1)+=R(3);
  { ST32(R(13)+16,R(1)); goto L8c0eed08; }
L8c0eed00:;
  R(2)=LD32(R(13)+16);
  R(3)=LD32(R(14)+16);
  R(2)+=R(3);
  ST32(R(13)+16,R(2));
L8c0eed08:;
  R(3)=0x8c0df96cu;
  { c->pr=0x8c0eed0eu;  f_8c0df96c(c); }
  R(8)=R(11);
  R(8)+=0x24u;
  R(8)+=R(10);
  R(6)=R(13);
  R(5)=R(8);
  R(4)=R(8);
  R(5)+=0xcu;
  { uint32_t tg=R(9); c->pr=0x8c0eed20u; R(4)+=0x8u; sh4_call(c,tg); }
  R(4)=R(11);
  R(4)+=0x24u;
  R(4)+=R(10);
  R(14)=R(13);
  R(4)=LD32(R(4)+8);
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(13)=R(12); if(k) goto L8c0eed50; }
L8c0eed30:;
  R(2)=LD32(R(14)+16);
  R(5)=LD32(R(14)+12);
  R(6)=LD32(R(4)+12);
  R(2)+=R(5);
  c->t=R(6)==R(2);
  if(c->t) goto L8c0eed44;
  R(2)=LD32(R(4)+16);
  R(2)+=R(6);
  c->t=R(5)==R(2);
  if(!c->t) goto L8c0eed4a;
L8c0eed44:;
  R(13)=R(4);
  { R(4)=R(12); goto L8c0eed4c; }
L8c0eed4a:;
  R(4)=LD32(R(4)+8);
L8c0eed4c:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0eed30;
L8c0eed50:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0eecc4;
L8c0eed54:;
  R(5)=R(11);
  R(5)+=0x24u;
  R(5)+=R(10);
  R(3)=0x8c0df9b0u;
  ST32(R(15),R(5));
  R(6)=R(14);
  R(4)=LD32(R(15));
  R(5)+=0xcu;
  { c->pr=0x8c0eed68u; R(4)+=0x8u; f_8c0df9b0(c); }
  R(0)=0x0u;
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
void f_8c0eeda0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe4u;
  R(3)=0x8c0dfa40u;
  ST32(R(15)+4,R(4));
  R(4)=R(15);
  ST32(R(15),R(5));
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0eedb2u; R(4)+=0x8u; f_8c0dfa40(c); }
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
  { c->pr=0x8c0eedd2u; R(4)=LD32(R(15)+20); f_8c0eedda(c); }
  R(15)+=0x30u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0eedda(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(7);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f4420u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  R(13)=R(15);
  c->t=(R(5)&R(5))==0;
  R(13)+=0x18u;
  { uint32_t k=c->t; R(12)=LD32(R(13)+16); if(k) goto L8c0eee48; }
  R(9)=0xf000u;
L8c0eedfa:;
  R(3)=(int32_t)(int16_t)LD16(R(5));
  R(2)=LD32(R(13));
  R(3)=R(3)&0xFFFF;
  R(3)&=R(9);
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0eee3e;
  R(2)=0x0u;
  c->t=R(2)>=R(12);
  { uint32_t k=c->t; R(6)=R(7); if(k) goto L8c0eee3e; }
L8c0eee0e:;
  R(3)=R(5);
  R(1)=R(6);
  R(3)+=0xcu;
  R(1)<<=2;
  R(1)+=R(3);
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0eee38;
  R(0)=LD32(R(13)+4);
  R(2)=LD32(R(5)+8);
  R(0)>>=2;
  c->macl=R(6)*R(0);
  R(0)=c->macl;
  R(0)<<=2;
  R(0)+=R(2);
  c->t=R(0)==R(4);
  if(!c->t) goto L8c0eee38;
  R(10)=R(6);
  R(14)=R(5);
  R(5)=R(7);
  R(6)=R(12);
L8c0eee38:;
  R(6)+=0x1u;
  c->t=R(6)>=R(12);
  if(!c->t) goto L8c0eee0e;
L8c0eee3e:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0eee44;
  R(5)=LD32(R(5)+4);
L8c0eee44:;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0eedfa;
L8c0eee48:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0eeea0;
  R(2)=R(14);
  R(2)+=0xcu;
  R(10)<<=2;
  R(12)=R(7);
  R(3)=0x0u;
  R(4)=R(7);
  R(10)+=R(2);
  ST32(R(10),R(7));
  R(6)=LD32(R(13)+16);
  c->t=R(3)>=R(6);
  { uint32_t k=c->t; R(5)=0x1u; if(k) goto L8c0eee7c; }
L8c0eee64:;
  R(3)=R(14);
  R(1)=R(4);
  R(3)+=0xcu;
  R(1)<<=2;
  R(1)+=R(3);
  R(2)=LD32(R(1));
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; R(4)+=0x1u; if(k) goto L8c0eee78; }
  R(12)=R(5);
L8c0eee78:;
  c->t=R(4)>=R(6);
  if(!c->t) goto L8c0eee64;
L8c0eee7c:;
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0eee9c;
  R(3)=0x8c0eec00u;
  { c->pr=0x8c0eee86u; R(4)=LD32(R(14)+8); f_8c0eec00(c); }
  R(4)=R(0);
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0eee90;
  { R(0)=R(4); goto L8c0eeea2; }
L8c0eee90:;
  R(4)=0x8c0f4420u;
  { c->pr=0x8c0eee96u; R(5)=R(14); f_8c0eeeb0(c); }
  R(2)=0x8c0dfb68u;
  { c->pr=0x8c0eee9cu; R(4)=R(14); f_8c0dfb68(c); }
L8c0eee9c:;
  { R(0)=0x0u; goto L8c0eeea2; }
L8c0eeea0:;
  R(0)=0x7u;
L8c0eeea2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0eeeb0(SH4Ctx *c) {
  R(6)=LD32(R(4));
  R(7)=0x0u;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(0)=R(7); if(k) goto L8c0eeecc; }
L8c0eeeba:;
  R(2)=LD32(R(6)+4);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0eeec6;
  R(0)=R(6);
  { R(6)=R(7); goto L8c0eeec8; }
L8c0eeec6:;
  R(6)=LD32(R(6)+4);
L8c0eeec8:;
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0eeeba;
L8c0eeecc:;
  R(2)=LD32(R(4));
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0eef00;
  R(1)=LD32(R(5)+4);
  { ST32(R(4),R(1)); goto L8c0eef04; }
L8c0eef00:;
  R(2)=LD32(R(5)+4);
  ST32(R(0)+4,R(2));
L8c0eef04:;
  {  return; }
}
void f_8c0eef20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0ef940u;
  R(13)=R(5);
  ST32(R(15),R(4));
  { c->pr=0x8c0eef32u; R(14)=0x1u; f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0eef3c;
  R(0)=0xeeeeu;
  {  goto L8c0eef6e; }
L8c0eef3c:;
  R(3)=0x2000000u;
  c->t=(R(3)&R(13))==0;
  { uint32_t k=c->t; R(5)=LD32(R(15)); if(k) goto L8c0eef56; }
  R(3)=0x1000000u;
  c->t=(R(3)&R(13))==0;
  { uint32_t k=c->t; R(14)+=0x1u; if(k) goto L8c0eef4e; }
  R(14)+=0x1u;
L8c0eef4e:;
  R(3)=0x400000u;
  c->t=(R(13)&R(3))==0;
  if(!c->t) goto L8c0eef56;
  R(14)+=0x1u;
L8c0eef56:;
  R(0)=0x88u;
  R(1)=0x7u;
  R(3)=0xffffffu;
  R(14)&=R(1);
  R(4)=LD32(R(5)+R(0));
  R(14)<<=16;
  R(14)<<=8;
  R(2)=LD32(R(4)+8);
  R(0)=0x0u;
  R(2)&=R(3);
  R(2)|=R(14);
  ST32(R(4)+8,R(2));
L8c0eef6e:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0eef78(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0ef940u;
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  { c->pr=0x8c0eef86u; R(4)=LD32(R(15)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0eefc0;
  R(0)=0xeeeeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0eefc0:;
  R(4)=LD32(R(15));
  R(0)=0x0u;
  R(3)=LD32(R(15)+4);
  R(4)+=0x18u;
  R(2)=LD32(R(4)+36);
  ST32(R(3),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0eefe0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(7)=0x8c0f43dcu;
  R(13)=0x0u;
  ST32(R(15)+4,R(13));
  R(9)=R(13);
  ST32(R(15)+8,R(13));
  ST32(R(15),R(13));
  R(6)=LD32(R(7)+44);
  c->t=(R(6)&R(6))==0;
  { uint32_t k=c->t; R(8)=R(13); if(k) goto L8c0ef01a; }
L8c0ef004:;
  R(2)=LD32(R(6)+16);
  c->t=R(2)>R(8);
  if(!c->t) goto L8c0ef00c;
  R(8)=LD32(R(6)+16);
L8c0ef00c:;
  R(2)=LD32(R(15)+8);
  R(3)=LD32(R(6)+16);
  R(2)+=R(3);
  ST32(R(15)+8,R(2));
  R(6)=LD32(R(6)+8);
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0ef004;
L8c0ef01a:;
  R(6)=LD32(R(7)+60);
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0ef036;
L8c0ef020:;
  R(3)=LD32(R(6)+16);
  c->t=R(3)>R(9);
  { uint32_t k=!c->t; R(3)=LD32(R(6)+16); if(k) goto L8c0ef02a; }
  R(9)=LD32(R(6)+16);
L8c0ef02a:;
  R(2)=LD32(R(15)+4);
  R(2)+=R(3);
  ST32(R(15)+4,R(2));
  R(6)=LD32(R(6)+8);
  c->t=(R(6)&R(6))==0;
  if(!c->t) goto L8c0ef020;
L8c0ef036:;
  R(0)=0x44u;
  R(12)=LD32(R(7)+R(0));
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0ef042;
  {  goto L8c0ef136; }
L8c0ef042:;
  R(14)=0x10u;
L8c0ef044:;
  R(0)=(int32_t)(int16_t)LD16(R(12));
  R(3)=0xf000u;
  R(1)=0x1000u;
  R(0)=R(0)&0xFFFF;
  R(0)&=R(3);
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ef0a0;
  R(1)=0x2000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ef0a6;
  R(1)=0x3000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ef0ac;
  R(1)=0x4000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ef0b2;
  R(1)=0x5000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ef0b8;
  R(1)=0x6000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ef0be;
  R(1)=0x7000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ef100;
  R(1)=0x8000u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0ef106;
  {  goto L8c0ef10c; }
L8c0ef0a0:;
  R(7)=0x90u;
  {  goto L8c0ef0b4; }
L8c0ef0a6:;
  R(7)=0xa0u;
  {  goto L8c0ef0b4; }
L8c0ef0ac:;
  R(7)=0xc0u;
  {  goto L8c0ef0b4; }
L8c0ef0b2:;
  R(7)=0xe0u;
L8c0ef0b4:;
  { R(6)=R(14); goto L8c0ef110; }
L8c0ef0b8:;
  R(7)=0x200u;
  { R(6)=0x8u; goto L8c0ef110; }
L8c0ef0be:;
  R(7)=0x360u;
  { R(6)=0x4u; goto L8c0ef110; }
L8c0ef100:;
  R(7)=0x800u;
  { R(6)=0x2u; goto L8c0ef110; }
L8c0ef106:;
  R(7)=0xd60u;
  { R(6)=0x1u; goto L8c0ef110; }
L8c0ef10c:;
  R(6)=R(13);
  R(7)=R(13);
L8c0ef110:;
  R(3)=0x0u;
  R(10)=R(13);
  c->t=R(3)>=R(6);
  R(11)=R(12);
  { uint32_t k=c->t; R(11)+=0xcu; if(k) goto L8c0ef130; }
L8c0ef11c:;
  R(1)=LD32(R(11));
  c->t=(R(1)&R(1))==0;
  { uint32_t k=!c->t; R(10)+=0x1u; if(k) goto L8c0ef12a; }
  R(2)=LD32(R(15));
  R(2)+=R(7);
  ST32(R(15),R(2));
L8c0ef12a:;
  c->t=R(10)>=R(6);
  { uint32_t k=!c->t; R(11)+=0x4u; if(k) goto L8c0ef11c; }
L8c0ef130:;
  R(12)=LD32(R(12)+4);
  c->t=(R(12)&R(12))==0;
  if(!c->t) goto L8c0ef044;
L8c0ef136:;
  R(2)=LD32(R(15)+8);
  c->t=R(8)>=R(9);
  R(3)=LD32(R(15)+4);
  R(1)=LD32(R(15));
  R(2)+=R(3);
  R(2)+=R(1);
  ST32(R(4),R(2));
  if(c->t) goto L8c0ef14a;
  { R(3)=R(9); goto L8c0ef14c; }
L8c0ef14a:;
  R(3)=R(8);
L8c0ef14c:;
  R(0)=0x0u;
  ST32(R(5),R(3));
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ef1a0(SH4Ctx *c) {
  R(3)=0x8c2ef588u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c0ef1e0(SH4Ctx *c) {
  R(3)=0x8c2ef584u;
  { R(0)=LD32(R(3)); return; }
}
void f_8c0ef220(SH4Ctx *c) {
  R(5)=LD32(R(4)+4);
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0ef230;
L8c0ef226:;
  R(3)=LD32(R(5)+12);
  R(5)=LD32(R(5)+4);
  c->t=(R(3)&R(3))==0;
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0ef226;
L8c0ef230:;
  { R(0)=0x0u; return; }
}
void f_8c0ef234(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(4)+4);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0ef250;
L8c0ef23e:;
  R(3)=LD32(R(14)+20);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ef24a;
  R(3)=LD32(R(14)+20);
  { uint32_t tg=R(3); c->pr=0x8c0ef24au; R(4)=R(14); sh4_call(c,tg); }
L8c0ef24a:;
  R(14)=LD32(R(14)+4);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0ef23e;
L8c0ef250:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=0x0u;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ef258(SH4Ctx *c) {
  R(4)=LD32(R(4)+4);
  R(7)=0x0u;
  c->t=(R(4)&R(4))==0;
  { uint32_t k=c->t; R(0)=0x1u; if(k) goto L8c0ef278; }
L8c0ef262:;
  c->t=R(4)==R(5);
  if(!c->t) goto L8c0ef272;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0ef272;
  R(2)=LD32(R(4)+8);
  c->t=R(2)==R(6);
  if(!c->t) goto L8c0ef272;
  R(7)=R(0);
L8c0ef272:;
  R(4)=LD32(R(4)+4);
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0ef262;
L8c0ef278:;
  { R(0)=R(7); return; }
}
void f_8c0ef27c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=R(5);
  R(5)=R(14);
  ST32(R(15),R(6));
  R(13)=R(4);
  { c->pr=0x8c0ef290u; R(4)=R(13); f_8c0ef258(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ef2b0;
  ST32(R(14),R(13));
  R(4)=LD32(R(13)+4);
  ST32(R(13)+4,R(14));
  ST32(R(14)+4,R(4));
  R(3)=LD32(R(15));
  ST32(R(14)+8,R(3));
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0ef2ac;
  R(2)=LD32(R(14)+12);
  { uint32_t tg=R(2); c->pr=0x8c0ef2acu; R(4)=R(14); sh4_call(c,tg); }
L8c0ef2ac:;
  { R(4)=0x0u; goto L8c0ef2b2; }
L8c0ef2b0:;
  R(4)=0xeeeeu;
L8c0ef2b2:;
  R(0)=R(4);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ef2be(SH4Ctx *c) {
  R(2)=0x8c0ef220u;
  R(6)=0x0u;
  R(3)=0x8c0ef234u;
  ST32(R(4),R(5));
  ST32(R(4)+8,R(2));
  R(2)=0x8c0ef27cu;
  ST32(R(4)+16,R(3));
  R(3)=0x8c0f4264u;
  ST32(R(4)+4,R(6));
  ST32(R(4)+20,R(2));
  R(2)=0x8c0f42c4u;
  ST32(R(5)+4,R(3));
  ST32(R(5)+8,R(2));
  { R(0)=R(6); return; }
}
void f_8c0ef300(SH4Ctx *c) {
  R(7)=R(4);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(2)=0x16u;
  R(0)=LD32(R(7));
  R(6)=0x0u;
  R(13)=LD32(R(7)+4);
  R(1)=R(6);
  R(3)=0xffc30000u;
  R(0)&=0xfu;
  R(0)=sh4_shld(R(0),R(2));
  R(5)=0x8c2f9394u;
  R(13)&=R(3);
  R(13)|=R(0);
  R(0)=R(5);
  R(0)+=0x8u;
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=R(5);
  ST32(R(1),R(13));
  R(6)+=0x1u;
  R(1)=R(6);
  R(0)+=0x8u;
  R(1)<<=2;
  R(1)+=R(0);
  R(0)=LD32(R(4)+8);
  R(6)+=0x1u;
  ST32(R(1),R(0));
  R(1)=R(6);
  R(0)=R(5);
  R(1)<<=2;
  R(6)+=0x1u;
  R(0)+=0x8u;
  R(14)=R(13);
  R(1)+=R(0);
  R(0)=LD32(R(4)+12);
  R(2)=0u-R(2);
  R(7)=R(13);
  R(14)>>=16;
  ST32(R(1),R(0));
  R(7)=sh4_shld(R(7),R(2));
  R(1)=R(6);
  R(14)>>=8;
  R(2)=R(5);
  R(13)>>=16;
  R(13)>>=8;
  c->t=R(14)&1;R(14)>>=1;
  R(0)=0x1u;
  R(1)<<=2;
  R(7)&=R(0);
  R(2)+=0x8u;
  R(13)&=R(0);
  R(14)&=R(0);
  R(0)=R(4);
  R(1)+=R(2);
  R(2)=LD32(R(0)+16);
  R(6)+=0x1u;
  ST32(R(1),R(2));
  R(2)=R(5);
  R(1)=R(6);
  R(2)+=0x8u;
  R(1)<<=2;
  R(1)+=R(2);
  R(6)+=0x1u;
  R(2)=LD32(R(0)+20);
  R(0)+=0x18u;
  c->t=(R(14)&R(14))==0;
  ST32(R(1),R(2));
  R(2)=R(5);
  R(1)=R(6);
  R(2)+=0x8u;
  R(1)<<=2;
  R(1)+=R(2);
  R(2)=LD32(R(0));
  ST32(R(1),R(2));
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c0ef3e4; }
  R(2)=R(5);
  R(0)=R(6);
  R(2)+=0x8u;
  R(1)=LD32(R(4)+28);
  R(0)<<=2;
  c->t=(R(7)&R(7))==0;
  R(6)+=0x1u;
  R(0)+=R(2);
  { uint32_t k=!c->t; ST32(R(0),R(1)); if(k) goto L8c0ef3be; }
  R(2)=R(5);
  R(0)=R(6);
  R(2)+=0x8u;
  R(1)=LD32(R(4)+32);
  R(0)<<=2;
  R(0)+=R(2);
  ST32(R(0),R(1));
  R(6)+=0x1u;
L8c0ef3be:;
  R(2)=R(5);
  R(3)=R(6);
  R(1)=LD32(R(4)+36);
  R(2)+=0x8u;
  R(3)<<=2;
  R(3)+=R(2);
  c->t=(R(13)&R(13))==0;
  ST32(R(3),R(1));
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c0ef3f4; }
  R(3)=R(5);
  R(2)=R(6);
  R(3)+=0x8u;
  R(1)=LD32(R(4)+40);
  R(2)<<=2;
  R(2)+=R(3);
  R(6)+=0x1u;
  { ST32(R(2),R(1)); goto L8c0ef3f4; }
L8c0ef3e4:;
  R(1)=R(5);
  R(2)=R(6);
  R(1)+=0x8u;
  R(0)=LD32(R(4)+36);
  R(2)<<=2;
  R(2)+=R(1);
  ST32(R(2),R(0));
  R(6)+=0x1u;
L8c0ef3f4:;
  R(2)=R(5);
  R(3)=R(6);
  R(2)+=0x8u;
  R(1)=R(4);
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=LD32(R(1)+44);
  R(6)+=0x1u;
  ST32(R(3),R(2));
  R(2)=R(5);
  R(3)=R(6);
  R(2)+=0x8u;
  R(3)<<=2;
  R(3)+=R(2);
  R(2)=LD32(R(1)+48);
  R(6)+=0x1u;
  ST32(R(3),R(2));
  R(2)=R(5);
  R(3)=R(6);
  R(2)+=0x8u;
  R(3)<<=2;
  R(1)+=0x34u;
  R(3)+=R(2);
  R(2)=LD32(R(1));
  c->t=(R(14)&R(14))==0;
  ST32(R(3),R(2));
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c0ef47a; }
  R(3)=R(5);
  R(1)=R(6);
  R(3)+=0x8u;
  R(2)=LD32(R(4)+56);
  R(1)<<=2;
  c->t=(R(7)&R(7))==0;
  R(6)+=0x1u;
  R(1)+=R(3);
  { uint32_t k=!c->t; ST32(R(1),R(2)); if(k) goto L8c0ef450; }
  R(3)=R(5);
  R(1)=R(6);
  R(3)+=0x8u;
  R(2)=LD32(R(4)+60);
  R(1)<<=2;
  R(1)+=R(3);
  ST32(R(1),R(2));
  R(6)+=0x1u;
L8c0ef450:;
  R(2)=R(5);
  R(0)=0x40u;
  R(3)=R(6);
  R(1)=LD32(R(4)+R(0));
  R(3)<<=2;
  R(2)+=0x8u;
  R(3)+=R(2);
  c->t=(R(13)&R(13))==0;
  ST32(R(3),R(1));
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c0ef48c; }
  R(3)=R(5);
  R(0)=0x44u;
  R(2)=R(6);
  R(1)=LD32(R(4)+R(0));
  R(3)+=0x8u;
  R(2)<<=2;
  R(6)+=0x1u;
  R(2)+=R(3);
  { ST32(R(2),R(1)); goto L8c0ef48c; }
L8c0ef47a:;
  R(0)=0x40u;
  R(3)=R(5);
  R(2)=R(6);
  R(1)=LD32(R(4)+R(0));
  R(3)+=0x8u;
  R(2)<<=2;
  R(2)+=R(3);
  ST32(R(2),R(1));
  R(6)+=0x1u;
L8c0ef48c:;
  R(2)=R(5);
  R(3)=R(6);
  R(2)+=0x8u;
  R(1)=R(4);
  R(3)<<=2;
  R(1)+=0x48u;
  R(3)+=R(2);
  R(2)=LD32(R(1));
  R(6)+=0x1u;
  R(1)=R(4);
  ST32(R(3),R(2));
  R(2)=R(5);
  R(3)=R(6);
  R(2)+=0x8u;
  R(3)<<=2;
  R(1)+=0x4cu;
  R(3)+=R(2);
  R(2)=LD32(R(1));
  R(6)+=0x1u;
  R(1)=R(4);
  ST32(R(3),R(2));
  R(2)=R(5);
  R(3)=R(6);
  R(2)+=0x8u;
  R(3)<<=2;
  R(1)+=0x50u;
  R(3)+=R(2);
  R(2)=LD32(R(1));
  c->t=(R(14)&R(14))==0;
  ST32(R(3),R(2));
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c0ef520; }
  R(3)=R(5);
  R(1)=R(6);
  R(3)+=0x8u;
  R(2)=R(4);
  R(1)<<=2;
  R(2)+=0x54u;
  R(1)+=R(3);
  R(3)=LD32(R(2));
  c->t=(R(7)&R(7))==0;
  R(6)+=0x1u;
  { uint32_t k=!c->t; ST32(R(1),R(3)); if(k) goto L8c0ef4f6; }
  R(0)=0x58u;
  R(3)=R(5);
  R(1)=R(6);
  R(2)=LD32(R(4)+R(0));
  R(3)+=0x8u;
  R(1)<<=2;
  R(1)+=R(3);
  ST32(R(1),R(2));
  R(6)+=0x1u;
L8c0ef4f6:;
  R(2)=R(5);
  R(0)=0x5cu;
  R(3)=R(6);
  R(1)=LD32(R(4)+R(0));
  R(3)<<=2;
  R(2)+=0x8u;
  R(3)+=R(2);
  c->t=(R(13)&R(13))==0;
  ST32(R(3),R(1));
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c0ef532; }
  R(3)=R(5);
  R(0)=0x60u;
  R(2)=R(6);
  R(1)=LD32(R(4)+R(0));
  R(3)+=0x8u;
  R(2)<<=2;
  R(6)+=0x1u;
  R(2)+=R(3);
  { ST32(R(2),R(1)); goto L8c0ef532; }
L8c0ef520:;
  R(0)=0x5cu;
  R(3)=R(5);
  R(2)=R(6);
  R(1)=LD32(R(4)+R(0));
  R(3)+=0x8u;
  R(2)<<=2;
  R(2)+=R(3);
  ST32(R(2),R(1));
  R(6)+=0x1u;
L8c0ef532:;
  R(6)<<=2;
  R(0)=0x0u;
  ST32(R(5)+4,R(6));
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ef560(SH4Ctx *c) {
  R(5)=0x254u;
  R(1)=0x0u;
  R(6)=0x8c2f945cu;
  R(0)=0x1u;
  R(7)=0x160u;
  R(5)+=R(6);
L8c0ef56c:;
  c->t=R(5)==R(4);
  { uint32_t k=!c->t; R(5)+=0x2cu; if(k) goto L8c0ef574; }
  R(1)=R(0);
L8c0ef574:;
  R(2)=0x254u;
  R(2)+=R(6);
  R(2)+=R(7);
  c->t=R(5)>=R(2);
  if(!c->t) goto L8c0ef56c;
  { R(0)=R(1); return; }
}
void f_8c0ef582(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  if(c->t) goto L8c0ef5d2;
  R(6)=R(4);
  R(14)=0x8u;
  R(7)=0x1u;
  R(4)=0x0u;
  R(13)=0x2cu;
L8c0ef594:;
  R(0)=0x248u;
  R(2)=R(7);
  R(2)=sh4_shad(R(2),R(4));
  R(3)=LD32(R(6)+R(0));
  c->t=(R(2)&R(3))==0;
  if(!c->t) goto L8c0ef5c8;
  c->macl=R(4)*R(13);
  R(2)=LD32(R(6)+R(0));
  R(3)=R(7);
  R(3)=sh4_shad(R(3),R(4));
  R(2)|=R(3);
  R(3)=0x254u;
  R(7)=c->macl;
  R(3)+=R(6);
  ST32(R(6)+R(0),R(2));
  R(0)+=0x4u;
  R(3)+=R(7);
  ST32(R(3),R(4));
  R(3)=0x254u;
  R(2)=LD32(R(6)+R(0));
  R(3)+=R(6);
  R(2)+=0x1u;
  R(7)+=R(3);
  ST32(R(6)+R(0),R(2));
  { ST32(R(5),R(7)); goto L8c0ef5ce; }
L8c0ef5c8:;
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(14);
  if(!c->t) goto L8c0ef594;
L8c0ef5ce:;
  { R(0)=0x0u; goto L8c0ef5d4; }
L8c0ef5d2:;
  R(0)=0xeeeeu;
L8c0ef5d4:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ef600(SH4Ctx *c) {
  R(4)=0x0u;
  R(5)=0x8u;
  R(6)=0x2cu;
L8c0ef606:;
  c->macl=R(4)*R(6);
  R(0)=0x8c2f96b0u;
  R(3)=c->macl;
  ST32(R(3)+R(0),R(4));
  R(4)+=0x1u;
  c->t=(int32_t)R(4)>=(int32_t)R(5);
  if(!c->t) goto L8c0ef606;
  { R(0)=0x0u; return; }
}
void f_8c0ef618(SH4Ctx *c) {
  { R(0)=0x0u; return; }
}
void f_8c0ef61c(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  { c->pr=0x8c0ef624u; ST32(R(15),R(4)); f_8c0ef560(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ef632;
  R(0)=0xeeeeu;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0ef632:;
  R(5)=LD32(R(15));
  R(2)=0x1u;
  R(4)=0x8c2f945cu;
  R(3)=LD32(R(5));
  R(0)=0x248u;
  R(2)=sh4_shad(R(2),R(3));
  R(3)=LD32(R(4)+R(0));
  R(2)=~R(2);
  R(3)&=R(2);
  ST32(R(4)+R(0),R(3));
  R(0)+=0x4u;
  R(2)=LD32(R(4)+R(0));
  R(2)+=0xffffffffu;
  ST32(R(4)+R(0),R(2));
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ef6a0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=R(15);
  R(3)+=0x4u;
  fp_st(c,4,R(3));
  R(3)=0x8c0ef940u;
  { c->pr=0x8c0ef6b0u; ST32(R(15),R(4)); f_8c0ef940(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0ef6be;
  R(0)=0xeeeeu;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
L8c0ef6be:;
  R(3)=R(15);
  R(0)=0x88u;
  R(4)=LD32(R(15));
  R(3)+=0x4u;
  R(2)=LD32(R(3));
  R(4)=LD32(R(4)+R(0));
  R(0)=0x0u;
  ST32(R(4)+12,R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {  return; }
}
void f_8c0ef700(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  ST32(R(15)+4,R(4));
  ST32(R(15),R(5));
  R(3)=LD32(R(15));
  R(5)=LD32(R(15)+4);
  R(3)=R(3)&0xFF;
  R(5)<<=8;
  R(5)|=R(3);
  R(3)=0x8c0db7e0u;
  { c->pr=0x8c0ef718u; R(4)=0x74u; f_8c0db7e0(c); }
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0ef740(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=R(15);
  R(3)=0x7fffffffu;
  R(2)=0x8c0db7e0u;
  fp_st(c,4,R(15));
  R(5)=LD32(R(5));
  R(5)&=R(3);
  { c->pr=0x8c0ef754u; R(4)=0x78u; f_8c0db7e0(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0ef780(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=0x1u;
  R(14)=R(4);
  R(3)=0x1e0u;
  R(2)=0x5f8200u;
  R(4)=0x0u;
  R(5)&=R(3);
  ST32(R(14)+48,R(4));
  R(1)=0x7u;
  ST32(R(14)+16,R(6));
  R(5)+=R(2);
  ST32(R(14)+20,R(5));
  ST32(R(14)+12,R(7));
  ST32(R(14)+8,R(1));
  ST32(R(14)+4,R(0));
  R(0)=0x4000u;
  ST16(R(14)+28,R(0));
  R(0)=R(4);
  ST16(R(14)+30,R(0));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ef7e0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=R(4)&0xFF;
  ST32(R(15),R(4));
  R(3)=0x8c0db7e0u;
  R(4)=0x11cu;
  { c->pr=0x8c0ef7f0u;  f_8c0db7e0(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0ef820(SH4Ctx *c) {
  R(5)=0x3e0u;
  R(3)=0xfffffffbu;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)&=R(4);
  R(4)=0xe4u;
  R(2)=0x8c0db7e0u;
  { c->pr=0x8c0ef830u; R(5)=sh4_shad(R(5),R(3)); f_8c0db7e0(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0ef860(SH4Ctx *c) {
  R(3)=0x11000000u;
  R(1)=R(4);
  R(0)=0x8000u;
  R(4)=0x0u;
  R(2)=0x8u;
  ST32(R(1)+16,R(6));
  R(5)|=R(3);
  ST32(R(1)+20,R(5));
  ST32(R(1)+12,R(7));
  ST32(R(1)+8,R(4));
  ST32(R(1)+4,R(2));
  ST16(R(1)+28,R(0));
  R(0)=R(4);
  { ST16(R(1)+30,R(0)); return; }
}
void f_8c0ef8a0(SH4Ctx *c) {
  R(5)=0x8c2ef27cu;
  R(6)=R(4);
  R(6)<<=2;
  R(2)=R(5);
  R(3)=LD32(R(5)+4);
  R(2)+=0x8u;
  c->t=R(6)>>31;R(6)<<=1;
  R(2)+=R(6);
  ST32(R(2),R(3));
  R(2)=R(5);
  R(2)+=0x8u;
  R(6)+=R(2);
  R(4)=0x0u;
  ST32(R(6)+4,R(4));
  { R(0)=R(4); return; }
}
void f_8c0ef8e0(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  ST32(R(15),R(4));
  R(3)=0x8c0db7e0u;
  R(4)=0xbcu;
  { c->pr=0x8c0ef8f0u;  f_8c0db7e0(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0ef8f8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(5)=R(4);
  ST32(R(15),R(4));
  R(3)=0x8c0db7e0u;
  R(4)=0xc0u;
  { c->pr=0x8c0ef908u;  f_8c0db7e0(c); }
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0ef940(SH4Ctx *c) {
  R(5)=0x8c2f945cu;
  R(6)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=R(6);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(14)=R(6);
  R(3)=LD32(R(5)+12);
  R(13)=0x8cu;
  c->t=R(2)>=R(3);
  { uint32_t k=c->t; R(7)=0x1u; if(k) goto L8c0ef970; }
L8c0ef956:;
  c->macl=R(6)*R(13);
  R(3)=R(5);
  R(3)+=0x18u;
  R(0)=c->macl;
  R(0)+=R(3);
  c->t=R(4)==R(0);
  if(!c->t) goto L8c0ef968;
  { R(14)=R(7); goto L8c0ef970; }
L8c0ef968:;
  R(2)=LD32(R(5)+12);
  R(6)+=0x1u;
  c->t=R(6)>=R(2);
  if(!c->t) goto L8c0ef956;
L8c0ef970:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ef9a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(14)=R(4); if(k) goto L8c0ef9b4; }
  R(13)=0x7000103u;
  {  goto L8c0ef9cc; }
L8c0ef9b4:;
  R(3)=LD32(R(14)+16);
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0ef9cc;
  R(0)=LD32(R(14)+16);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0ef9c6;
  R(2)=0x1u;
  { ST32(R(14)+24,R(2)); goto L8c0ef9cc; }
L8c0ef9c6:;
  R(1)=LD32(R(14)+16);
  { uint32_t tg=R(1); c->pr=0x8c0ef9ccu; R(4)=LD32(R(14)+20); sh4_call(c,tg); }
L8c0ef9cc:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0ef9d8;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0ef9a0u;
  { c->pr=0x8c0ef9d8u; R(5)=R(13); f_8c0d6fc8(c); }
L8c0ef9d8:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0ef9f0(SH4Ctx *c) {
  ST32(R(4)+8,R(5));
  { R(0)=0x0u; return; }
}
void f_8c0ef9f8(SH4Ctx *c) {
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(7)=0x0u; if(k) goto L8c0efa04; }
  R(7)=0x7000103u;
  {  goto L8c0efa08; }
L8c0efa04:;
  ST32(R(4)+16,R(5));
  ST32(R(4)+20,R(6));
L8c0efa08:;
  { R(0)=R(7); return; }
}
void f_8c0efa10(SH4Ctx *c) {
  ST32(R(4)+4,R(5));
  { R(0)=0x0u; return; }
}
void f_8c0efa18(SH4Ctx *c) {
  ST32(R(4)+12,R(5));
  { R(0)=0x0u; return; }
}
void f_8c0efa20(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(11)=0x0u;
  R(13)=R(4);
  R(12)=R(13);
  R(0)>>=2;
  ST32(R(15)+12,R(5));
  R(0)>>=2;
  R(14)=R(11);
  R(0)&=0xfu;
  ST32(R(15)+16,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(10)=0x8c0f4334u;
  R(2)=LD32(R(10));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0efa5a;
  R(14)=0xd000001u;
  {  goto L8c0efb26; }
L8c0efa5a:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0efa64;
  R(14)=0x7000103u;
  {  goto L8c0efb26; }
L8c0efa64:;
  R(3)=0x8c0e29f8u;
  R(5)=R(15);
  R(5)+=0x8u;
  { c->pr=0x8c0efa6eu; R(4)=R(13); f_8c0e29f8(c); }
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0efa7a;
  R(14)=0x6000001u;
  {  goto L8c0efb26; }
L8c0efa7a:;
  R(1)=0x1a8u;
  R(2)=0x8c2fd6c8u;
  ST32(R(2),R(11));
  ST32(R(12)+24,R(11));
  R(0)=LD32(R(10));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0efa92;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0efaa4;
  {  goto L8c0efb26; }
L8c0efa92:;
  R(3)=0x8c0f1500u;
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c0efa9au; R(4)=R(13); f_8c0f1500(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0efb32;
  {  goto L8c0efb26; }
L8c0efaa4:;
  R(3)=0x8c0f180cu;
  R(5)=LD32(R(15)+12);
  { c->pr=0x8c0efaacu; R(4)=R(13); f_8c0f180c(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0efb26;
  R(0)=0x190u;
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0efb26;
  R(2)=0x8c0f1724u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0efac6u; R(4)=R(15); f_8c0f1724(c); }
  R(3)=0x8c0f15e4u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0efaceu; R(4)=LD32(R(15)); f_8c0f15e4(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0efb26;
  R(0)=LD32(R(12)+16);
  c->t=(int32_t)R(0)==-1;
  if(!c->t) goto L8c0efb26;
  R(13)=0x8c0f16d6u;
  R(11)=0x8c0d6fdcu;
  {  goto L8c0efb20; }
L8c0efb18:;
  { uint32_t tg=R(11); c->pr=0x8c0efb1cu;  sh4_call(c,tg); }
  { uint32_t tg=R(13); c->pr=0x8c0efb20u;  sh4_call(c,tg); }
L8c0efb20:;
  R(0)=LD32(R(12)+24);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0efb18;
L8c0efb26:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0efb32;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0efa20u;
  { c->pr=0x8c0efb32u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0efb32:;
  R(0)=LD32(R(15)+16);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0efb60(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0efb72;
  R(14)=0xd000001u;
  {  goto L8c0efb8a; }
L8c0efb72:;
  R(3)=0x8c2fa854u;
  R(4)=(uint32_t)(int32_t)(int8_t)R(4);
  R(2)=0x81u;
  R(4)<<=2;
  R(1)=0x8c2fa858u;
  R(4)<<=2;
  ST32(R(3),R(2));
  R(2)=0x8c0d6dc8u;
  ST8(R(1),R(4));
  { c->pr=0x8c0efb88u; R(4)=R(3); f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0efb8a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0efb96;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0efb60u;
  { c->pr=0x8c0efb96u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0efb96:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0efbbc(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0efbce;
  R(14)=0xd000001u;
  {  goto L8c0efc04; }
L8c0efbce:;
  R(1)=0x4f4e4f4du;
  R(0)=R(4);
  R(5)=0x8c2fa86cu;
  R(2)=0x8au;
  c->t=R(0)==R(1);
  R(3)=0x8c2fa868u;
  { uint32_t k=c->t; ST32(R(3),R(2)); if(k) goto L8c0efbe8; }
  R(1)=0x4f525453u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0efbee;
  {  goto L8c0efbf4; }
L8c0efbe8:;
  R(2)=0xffu;
  { ST8(R(5),R(2)); goto L8c0efbfa; }
L8c0efbee:;
  R(0)=0x0u;
  { ST8(R(5),R(0)); goto L8c0efbfa; }
L8c0efbf4:;
  R(14)=0x3000001u;
  {  goto L8c0efc04; }
L8c0efbfa:;
  R(3)=0x8c0d6dc8u;
  R(4)=0x8c2fa868u;
  { c->pr=0x8c0efc02u;  f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0efc04:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0efc10;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0efbbcu;
  { c->pr=0x8c0efc10u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0efc10:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0efc44(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(0)=0x10u;
  R(3)=0x8c0efdc4u;
  R(7)=R(15);
  ST32(R(15)+8,R(4));
  ST32(R(15)+12,R(5));
  R(7)+=0x4u;
  ST8(R(15)+R(0),R(6));
  R(0)=0x10u;
  R(5)=(int32_t)(int8_t)LD8(R(15)+R(0));
  R(6)=R(15);
  { c->pr=0x8c0efc62u; R(4)=LD32(R(15)+12); f_8c0efdc4(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0efc86;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0efc74;
  R(3)=LD32(R(15)+4);
  c->t=(int32_t)R(3)>0;
  if(c->t) goto L8c0efc7a;
L8c0efc74:;
  R(14)=0x7fffffffu;
  {  goto L8c0efc86; }
L8c0efc7a:;
  R(3)=0x8c0efa20u;
  R(5)=LD32(R(15));
  { c->pr=0x8c0efc82u; R(4)=LD32(R(15)+8); f_8c0efa20(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
L8c0efc86:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0efc92;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0efc44u;
  { c->pr=0x8c0efc92u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0efc92:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0efcb0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(2)=0x8c0f4334u;
  R(11)=0x0u;
  ST32(R(15),R(11));
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(13)=R(11); if(k) goto L8c0efcd6; }
  R(13)=0xd000001u;
  {  goto L8c0efd62; }
L8c0efcd6:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0efce0;
  R(13)=0x7000103u;
  {  goto L8c0efd62; }
L8c0efce0:;
  R(12)=LD32(R(4)+8);
  R(3)=0x544c4d53u;
  R(2)=LD32(R(12));
  c->t=R(2)==R(3);
  if(c->t) goto L8c0efcf0;
  R(13)=0x9000001u;
  {  goto L8c0efd62; }
L8c0efcf0:;
  R(2)=0x8c0e2910u;
  { c->pr=0x8c0efcf6u; R(4)=R(15); f_8c0e2910(c); }
  R(0)=(int32_t)(int8_t)LD8(R(12)+4);
  R(3)=0x1u;
  R(9)=LD32(R(12)+8);
  R(14)=R(12);
  c->t=(int32_t)R(0)>=(int32_t)R(3);
  { uint32_t k=c->t; R(14)+=0x20u; if(k) goto L8c0efd0e; }
  R(0)=LD32(R(12)+16);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0efd0c;
  R(14)+=0xfffffff0u;
L8c0efd0c:;
  R(13)=0x9000002u;
L8c0efd0e:;
  c->t=(int32_t)R(9)>0;
  { uint32_t k=!c->t; R(10)=R(11); if(k) goto L8c0efd62; }
  R(8)=0x8c0efc44u;
L8c0efd16:;
  R(2)=LD32(R(14)+12);
  c->t=(int32_t)R(2)>=0;
  if(!c->t) goto L8c0efd2e;
  R(5)=LD32(R(14)+4);
  R(2)=0x8c0f18dcu;
  R(7)=LD32(R(14)+12);
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c0efd28u; R(4)=LD32(R(14)); f_8c0f18dc(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0efd62;
L8c0efd2e:;
  R(3)=LD32(R(14)+20);
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0efd5a;
  R(5)=LD32(R(14)+16);
  R(7)=0xffffffffu;
  R(3)=0x8c0e2af4u;
  R(6)=LD32(R(14)+20);
  R(5)+=R(12);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0efd44u; R(4)=LD32(R(15)+4); f_8c0e2af4(c); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(15)+=0x4u; if(k) goto L8c0efd62; }
  R(5)=LD32(R(14));
  R(6)=LD32(R(14)+4);
  { uint32_t tg=R(8); c->pr=0x8c0efd54u; R(4)=LD32(R(15)); sh4_call(c,tg); }
  R(13)=R(0);
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0efd62;
L8c0efd5a:;
  R(10)+=0x1u;
  c->t=(int32_t)R(10)>=(int32_t)R(9);
  { uint32_t k=!c->t; R(14)+=0x20u; if(k) goto L8c0efd16; }
L8c0efd62:;
  R(2)=LD32(R(15));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0efd6e;
  R(3)=0x8c0e2990u;
  { c->pr=0x8c0efd6eu; R(4)=LD32(R(15)); f_8c0e2990(c); }
L8c0efd6e:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0efd7a;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0efcb0u;
  { c->pr=0x8c0efd7au; R(5)=R(13); f_8c0d6fc8(c); }
L8c0efd7a:;
  R(0)=R(13);
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
void f_8c0efdc4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f4334u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  R(9)=0x0u;
  R(13)=LD32(R(3));
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(12)=R(9); if(k) goto L8c0efde2; }
  R(12)=0xd000001u;
  {  goto L8c0efece; }
L8c0efde2:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0efdea;
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0efdf0;
L8c0efdea:;
  R(12)=0x3000001u;
  {  goto L8c0efece; }
L8c0efdf0:;
  R(14)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0efea2;
  R(1)=0x42534d53u;
  R(11)=(uint32_t)(int32_t)(int8_t)R(5);
  R(0)=R(4);
  R(11)<<=2;
  c->t=R(11)>>31;R(11)<<=1;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(10)=0x10u; if(k) goto L8c0efe2e; }
  R(1)=0x42504d53u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0efe38;
  R(1)=0x42534f53u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0efe42;
  R(1)=0x52535053u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0efe4c;
  R(1)=0x42504653u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0efe58;
  R(1)=0x424f4653u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0efe94;
  R(1)=0x57504653u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0efe9e;
  {  goto L8c0efeae; }
L8c0efe2e:;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  if(c->t) goto L8c0efea2;
  R(4)=0x1e4u;
  {  goto L8c0efe52; }
L8c0efe38:;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  if(c->t) goto L8c0efea2;
  R(4)=0x264u;
  {  goto L8c0efe52; }
L8c0efe42:;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  if(c->t) goto L8c0efea2;
  R(4)=0x2e4u;
  {  goto L8c0efe52; }
L8c0efe4c:;
  c->t=(int32_t)R(14)>=(int32_t)R(10);
  if(c->t) goto L8c0efea2;
  R(4)=0x364u;
L8c0efe52:;
  R(4)+=R(13);
  { R(4)+=R(11); goto L8c0efeb2; }
L8c0efe58:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0efea2;
  R(4)=0x3e4u;
  {  goto L8c0efeaa; }
L8c0efe94:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0efea2;
  R(4)=0x464u;
  {  goto L8c0efeaa; }
L8c0efe9e:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0efea8;
L8c0efea2:;
  R(12)=0x8000003u;
  {  goto L8c0efece; }
L8c0efea8:;
  R(4)=0x46cu;
L8c0efeaa:;
  { R(4)+=R(13); goto L8c0efeb2; }
L8c0efeae:;
  R(12)=0x9000001u;
  R(4)=R(9);
L8c0efeb2:;
  c->t=(R(4)&R(4))==0;
  if(c->t) goto L8c0efec0;
  R(3)=LD32(R(4));
  ST32(R(6),R(3));
  R(2)=LD32(R(4)+4);
  { ST32(R(7),R(2)); goto L8c0efece; }
L8c0efec0:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0efec6;
  ST32(R(6),R(9));
L8c0efec6:;
  c->t=(R(7)&R(7))==0;
  if(c->t) goto L8c0efece;
  R(2)=0xffffffffu;
  ST32(R(7),R(2));
L8c0efece:;
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0efeec(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x200000u;
  R(2)=R(4);
  ST32(R(15)+4,R(5));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c0eff16; }
  R(2)=0x0u;
  R(1)=0xa0800000u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x4u;
  R(5)=LD32(R(15)+8);
  R(4)=R(15);
  R(5)+=R(1);
  R(1)=0x8c0d8220u;
  { c->pr=0x8c0eff14u; R(4)+=0xcu; f_8c0d8220(c); }
  R(15)+=0x8u;
L8c0eff16:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0eff2c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x200000u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  { uint32_t k=c->t; ST8(R(15),R(5)); if(k) goto L8c0eff62; }
  R(13)=R(15);
  R(1)=0x3u;
  R(14)=R(4);
  R(13)+=0x8u;
  R(3)=0x8c0e2c38u;
  R(2)=0xfffffffcu;
  R(1)&=R(14);
  R(5)=R(13);
  R(14)&=R(2);
  ST32(R(15)+4,R(1));
  { c->pr=0x8c0eff54u; R(4)=R(14); f_8c0e2c38(c); }
  R(3)=(int32_t)(int8_t)LD8(R(15));
  R(0)=LD32(R(15)+4);
  ST8(R(13)+R(0),R(3));
  R(3)=0x8c0efeecu;
  R(5)=LD32(R(13));
  { c->pr=0x8c0eff62u; R(4)=R(14); f_8c0efeec(c); }
L8c0eff62:;
  R(0)=0x0u;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0eff7c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(13)=0x8c0f4334u;
  R(0)=R(4);
  ST8(R(15)+4,R(0));
  ST8(R(15),R(5));
  R(4)=LD32(R(13));
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0eff98;
  R(14)=0xd000001u;
  {  goto L8c0efffe; }
L8c0eff98:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(7)=0x80u;
  R(5)=R(0);
  R(0)=0x1d0u;
  R(6)=(int32_t)(int8_t)LD8(R(15));
  R(5)+=R(7);
  R(0)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(6)+=R(7); if(k) goto L8c0effd2; }
  R(0)=0x1d1u;
  R(3)=0x1u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c0effd2;
  R(0)=0x1d2u;
  R(2)=0x11u;
  R(1)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(int32_t)R(1)>(int32_t)R(2);
  if(c->t) goto L8c0effd2;
  R(3)=0x0u;
  R(4)=R(6);
  c->t=(int32_t)R(3)>(int32_t)R(5);
  {uint32_t a=R(5),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(5)=r;}
  c->t=R(5)&1;R(5)=(uint32_t)((int32_t)R(5)>>1);
  c->t=(int32_t)R(3)>(int32_t)R(4);
  {uint32_t a=R(4),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(4)=r;}
  { c->t=R(4)&1;R(4)=(uint32_t)((int32_t)R(4)>>1); goto L8c0effd4; }
L8c0effd2:;
  R(4)=R(6);
L8c0effd4:;
  R(2)=0x8c2fa87cu;
  R(3)=0x36u;
  R(1)=0x8c2fa880u;
  ST32(R(2),R(3));
  R(3)=0x8c2fa881u;
  ST8(R(1),R(5));
  ST8(R(3),R(4));
  R(4)=R(2);
  R(2)=0x8c0d6dc8u;
  { c->pr=0x8c0effeau;  f_8c0d6dc8(c); }
  R(1)=0x1d8u;
  R(14)=0x0u;
  R(2)=LD32(R(13));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(1)+=R(2);
  ST8(R(1),R(0));
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(0)=0x1d9u;
  R(3)=LD32(R(13));
  ST8(R(3)+R(0),R(2));
L8c0efffe:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f000a;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0eff7cu;
  { c->pr=0x8c0f000au; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f000a:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0044(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x8c0f4334u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(11));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(13)=R(5); if(k) goto L8c0f0060; }
  R(14)=0xd000001u;
  {  goto L8c0f00b0; }
L8c0f0060:;
  R(5)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=(int32_t)R(5)>=0;
  if(!c->t) goto L8c0f006c;
  R(3)=(uint32_t)(int32_t)(int8_t)R(13);
  c->t=(int32_t)R(3)>=0;
  if(c->t) goto L8c0f0072;
L8c0f006c:;
  R(14)=0x3000001u;
  {  goto L8c0f00b0; }
L8c0f0072:;
  R(0)=0x1d2u;
  R(3)=0x19u;
  R(2)=(int32_t)(int8_t)LD8(R(4)+R(0));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=c->t; R(3)=0x35u; if(k) goto L8c0f0084; }
  R(4)=R(5);
  { R(5)=(uint32_t)(int32_t)(int8_t)R(13); goto L8c0f008c; }
L8c0f0084:;
  R(5)=(uint32_t)(int32_t)(int8_t)R(13);
  R(4)=(uint32_t)(int32_t)(int8_t)R(12);
  c->t=R(4)>>31;R(4)<<=1;
  c->t=R(5)>>31;R(5)<<=1;
L8c0f008c:;
  R(1)=0x8c2fa894u;
  R(2)=0x8c2fa890u;
  ST32(R(2),R(3));
  ST8(R(1),R(4));
  R(4)=R(2);
  R(2)=0x8c0d6dc8u;
  R(3)=0x8c2fa895u;
  { c->pr=0x8c0f009eu; ST8(R(3),R(5)); f_8c0d6dc8(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0f00b0;
  R(0)=0x1d6u;
  R(3)=LD32(R(11));
  ST8(R(3)+R(0),R(12));
  R(0)+=0x1u;
  R(3)=LD32(R(11));
  ST8(R(3)+R(0),R(13));
L8c0f00b0:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f00bc;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f0044u;
  { c->pr=0x8c0f00bcu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f00bc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f00f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0f1aacu;
  { c->pr=0x8c0f0100u; ST32(R(15),R(4)); f_8c0f1aac(c); }
  c->t=(R(0)&R(0))==0;
  { uint32_t k=!c->t; R(14)=R(0); if(k) goto L8c0f010c; }
  R(2)=LD32(R(15));
  R(3)=0x0u;
  ST32(R(2)+4,R(3));
L8c0f010c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f0118;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f00f4u;
  { c->pr=0x8c0f0118u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f0118:;
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0130(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(0)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f4334u;
  c->t=(int32_t)R(0)==1;
  R(14)=R(13);
  R(6)=0x8u;
  { uint32_t k=c->t; R(7)=LD32(R(3)); if(k) goto L8c0f0152; }
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0f0170;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0f018e;
  {  goto L8c0f01ae; }
L8c0f0152:;
  R(5)=R(7);
  R(7)=R(13);
  R(5)+=0x8u;
L8c0f0158:;
  R(0)=LD32(R(5)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f0166;
  R(7)+=0x1u;
  c->t=(int32_t)R(7)>=(int32_t)R(6);
  { uint32_t k=!c->t; R(5)+=0x8u; if(k) goto L8c0f0158; }
L8c0f0166:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==8;
  if(c->t) goto L8c0f01aa;
  {  goto L8c0f01b4; }
L8c0f0170:;
  R(5)=R(7);
  R(7)=R(13);
  R(5)+=0x48u;
L8c0f0176:;
  R(0)=LD32(R(5)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f0184;
  R(7)+=0x1u;
  c->t=(int32_t)R(7)>=(int32_t)R(6);
  { uint32_t k=!c->t; R(5)+=0x8u; if(k) goto L8c0f0176; }
L8c0f0184:;
  R(0)=R(7);
  c->t=(int32_t)R(0)==8;
  if(!c->t) goto L8c0f01b4;
  {  goto L8c0f01aa; }
L8c0f018e:;
  R(5)=0x88u;
  R(6)=R(13);
  R(5)+=R(7);
  R(7)=0x4u;
L8c0f0196:;
  R(0)=LD32(R(5)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f01a4;
  R(6)+=0x1u;
  c->t=(int32_t)R(6)>=(int32_t)R(7);
  { uint32_t k=!c->t; R(5)+=0x8u; if(k) goto L8c0f0196; }
L8c0f01a4:;
  R(0)=R(6);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0f01b4;
L8c0f01aa:;
  { R(5)=R(13); goto L8c0f01b4; }
L8c0f01ae:;
  R(14)=0x7fffffffu;
  {  goto L8c0f01c8; }
L8c0f01b4:;
  c->t=(R(5)&R(5))==0;
  if(c->t) goto L8c0f01c4;
  R(3)=0x1u;
  R(2)=R(5);
  ST32(R(4),R(5));
  ST32(R(2)+4,R(3));
  {  goto L8c0f01c8; }
L8c0f01c4:;
  R(14)=0x7000101u;
  ST32(R(4),R(13));
L8c0f01c8:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f01d4;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f0130u;
  { c->pr=0x8c0f01d4u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f01d4:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f01f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffecu;
  R(3)=0x8c0f4334u;
  R(0)=R(5);
  ST8(R(15)+4,R(0));
  ST32(R(15)+8,R(6));
  R(13)=LD32(R(3));
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f0216; }
  R(14)=0xd000001u;
  {  goto L8c0f02a6; }
L8c0f0216:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f0220;
  R(14)=0x7000103u;
  {  goto L8c0f02a6; }
L8c0f0220:;
  R(2)=LD32(R(15)+8);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f022c;
  R(14)=0x7000203u;
  {  goto L8c0f02a6; }
L8c0f022c:;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=0x2cu;
  R(2)=0xa8u;
  R(5)=R(15);
  R(11)=R(0);
  R(12)=(uint32_t)(int32_t)(int8_t)R(11);
  c->macl=(uint32_t)((int32_t)(int16_t)R(12)*(int32_t)(int16_t)R(3));
  R(0)=0x1b8u;
  R(2)+=R(13);
  R(11)=(uint32_t)(int32_t)(int8_t)R(11);
  R(3)=0x8c0f1a74u;
  R(4)=LD32(R(13)+R(0));
  R(11)<<=2;
  R(12)=c->macl;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(11)<<=2;
  R(11)<<=2;
  R(12)+=R(2);
  R(2)=0x400u;
  R(0)<<=2;
  R(0)<<=2;
  R(4)+=R(2);
  c->t=R(0)>>31;R(0)<<=1;
  R(4)+=R(11);
  R(4)+=R(0);
  { uint32_t tg=R(3); c->pr=0x8c0f0262u; R(4)+=0x18u; sh4_call(c,tg); }
  R(5)=R(12);
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(3)=0x8c0efdc4u;
  R(6)=R(15);
  R(4)=0x52535053u;
  R(7)=R(15);
  R(7)+=0x10u;
  R(6)+=0xcu;
  R(5)+=0x7u;
  { c->pr=0x8c0f0278u; R(5)=(int32_t)(int8_t)LD8(R(5)+R(0)); f_8c0efdc4(c); }
  R(0)=LD32(R(12));
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0f028a;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0f02a0;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0f0294;
  {  goto L8c0f02a0; }
L8c0f028a:;
  R(3)=LD32(R(15));
  R(2)=R(3);
  R(2)+=R(3);
  { ST32(R(15),R(2)); goto L8c0f02a0; }
L8c0f0294:;
  R(1)=LD32(R(15));
  R(3)=0x0u;
  c->t=(int32_t)R(3)>(int32_t)R(1);
  {uint32_t a=R(1),b=R(3),s=a+b,r=s+c->t;c->t=(a>s)|(s>r);R(1)=r;}
  c->t=R(1)&1;R(1)=(uint32_t)((int32_t)R(1)>>1);
  ST32(R(15),R(1));
L8c0f02a0:;
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+8);
  ST32(R(3),R(2));
L8c0f02a6:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f02b2;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f01f4u;
  { c->pr=0x8c0f02b2u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f02b2:;
  R(0)=R(14);
  R(15)+=0x14u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f02ec(SH4Ctx *c) {
  R(3)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(6)=LD32(R(3));
  R(7)=0xd000001u;
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f0300; }
  { R(14)=R(7); goto L8c0f033c; }
L8c0f0300:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f030a;
  R(14)=0x7000103u;
  {  goto L8c0f033c; }
L8c0f030a:;
  c->t=(R(6)&R(6))==0;
  if(c->t) goto L8c0f033a;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=0x2cu;
  R(7)=R(0);
  R(4)=(uint32_t)(int32_t)(int8_t)R(7);
  c->macl=(uint32_t)((int32_t)(int16_t)R(4)*(int32_t)(int16_t)R(3));
  R(0)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(int32_t)R(0)==127;
  { uint32_t k=!c->t; R(4)=c->macl; if(k) goto L8c0f032a; }
  R(1)=0xa8u;
  R(1)+=R(6);
  R(4)+=R(1);
  { R(0)=0x0u; goto L8c0f0336; }
L8c0f032a:;
  R(1)=0xa8u;
  c->t=R(5)>>31;R(5)<<=1;
  R(0)=0xffffffffu;
  R(1)+=R(6);
  R(0)-=R(5);
  R(4)+=R(1);
L8c0f0336:;
  { ST8(R(4)+6,R(0)); goto L8c0f033c; }
L8c0f033a:;
  R(14)=R(7);
L8c0f033c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f0348;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f02ecu;
  { c->pr=0x8c0f0348u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f0348:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0368(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f4334u;
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(10)=R(4);
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(3));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(13)=R(7); if(k) goto L8c0f038a; }
  R(13)=0xd000001u;
  {  goto L8c0f03ea; }
L8c0f038a:;
  c->t=(R(10)&R(10))==0;
  if(!c->t) goto L8c0f0394;
  R(13)=0x7000103u;
  {  goto L8c0f03ea; }
L8c0f0394:;
  R(2)=0x1u;
  R(12)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  if(!c->t) goto L8c0f03be;
  R(1)=0x2u;
  c->t=(int32_t)R(12)>(int32_t)R(1);
  if(c->t) goto L8c0f03be;
  R(0)=(int32_t)(int8_t)LD8(R(10)+1);
  R(3)=0x2cu;
  R(2)=0xa8u;
  c->t=(int32_t)R(12)>=0;
  R(6)=R(0);
  R(11)=(uint32_t)(int32_t)(int8_t)R(6);
  c->macl=(uint32_t)((int32_t)(int16_t)R(11)*(int32_t)(int16_t)R(3));
  R(2)+=R(4);
  R(11)=c->macl;
  { uint32_t k=!c->t; R(11)+=R(2); if(k) goto L8c0f03be; }
  R(0)=(int32_t)(int8_t)LD8(R(11)+4);
  c->t=(int32_t)R(0)>=(int32_t)R(12);
  if(c->t) goto L8c0f03c4;
L8c0f03be:;
  R(13)=0x3000001u;
  {  goto L8c0f03ea; }
L8c0f03c4:;
  R(0)=R(5);
  c->t=(int32_t)R(12)>0;
  ST8(R(11)+5,R(0));
  { uint32_t k=!c->t; R(14)=R(7); if(k) goto L8c0f03ea; }
  R(9)=0x8c0e30f8u;
L8c0f03d0:;
  R(3)=R(11);
  R(6)=R(14);
  R(3)+=0x1cu;
  R(5)=R(14);
  R(6)<<=2;
  R(6)+=R(3);
  R(6)=LD32(R(6));
  R(7)=0x0u;
  { uint32_t tg=R(9); c->pr=0x8c0f03e4u; R(4)=R(10); sh4_call(c,tg); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(12);
  if(!c->t) goto L8c0f03d0;
L8c0f03ea:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0f03f6;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f0368u;
  { c->pr=0x8c0f03f6u; R(5)=R(13); f_8c0d6fc8(c); }
L8c0f03f6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0428(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f043a;
  R(14)=0xd000001u;
  {  goto L8c0f044c; }
L8c0f043a:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f0444;
  R(14)=0x7000103u;
  {  goto L8c0f044c; }
L8c0f0444:;
  R(3)=0x8c0f00f4u;
  { c->pr=0x8c0f044au;  f_8c0f00f4(c); }
  R(14)=R(0);
L8c0f044c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f0458;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f0428u;
  { c->pr=0x8c0f0458u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f0458:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0478(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  R(6)=0x0u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=R(6); if(k) goto L8c0f0492; }
  R(14)=0xd000001u;
  {  goto L8c0f04c8; }
L8c0f0492:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f049c;
  R(14)=0x7000103u;
  {  goto L8c0f04c8; }
L8c0f049c:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f04a6;
  { R(14)=R(6); goto L8c0f04c8; }
L8c0f04a6:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0f1a74u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x18u;
  { c->pr=0x8c0f04c2u; R(5)=R(15); f_8c0f1a74(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(2));
L8c0f04c8:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f04d4;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f0478u;
  { c->pr=0x8c0f04d4u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f04d4:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f04fc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  R(2)=0x8c0f4334u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  R(11)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  { uint32_t k=!c->t; R(12)=R(11); if(k) goto L8c0f051c; }
  R(12)=0xd000001u;
  {  goto L8c0f059a; }
L8c0f051c:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0f0526;
  R(12)=0x7000103u;
  {  goto L8c0f059a; }
L8c0f0526:;
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0f0530;
  R(12)=0x7000203u;
  {  goto L8c0f059a; }
L8c0f0530:;
  R(3)=0x8c0f1b70u;
  R(5)=R(14);
  R(5)+=0x14u;
  { c->pr=0x8c0f053au; R(4)=R(13); f_8c0f1b70(c); }
  R(2)=0x8c0f1bf8u;
  R(5)=R(14);
  R(5)+=0x18u;
  { c->pr=0x8c0f0544u; R(4)=R(13); f_8c0f1bf8(c); }
  R(5)=R(14);
  R(0)=R(11);
  R(3)=0x8c0f1ea0u;
  R(5)+=0x2u;
  ST8(R(14),R(11));
  ST8(R(14)+1,R(0));
  { c->pr=0x8c0f0554u; R(4)=R(13); f_8c0f1ea0(c); }
  R(2)=0x8c0f1d08u;
  R(5)=R(14);
  R(5)+=0x3u;
  { c->pr=0x8c0f055eu; R(4)=R(13); f_8c0f1d08(c); }
  R(3)=0x8c0f1d90u;
  R(5)=R(14);
  R(5)+=0x6u;
  { c->pr=0x8c0f0568u; R(4)=R(13); f_8c0f1d90(c); }
  R(2)=0x8c0f1e18u;
  R(5)=R(14);
  R(5)+=0x8u;
  { c->pr=0x8c0f0572u; R(4)=R(13); f_8c0f1e18(c); }
  R(3)=0x8c0f1c80u;
  R(5)=R(14);
  R(5)+=0x4u;
  { c->pr=0x8c0f057cu; R(4)=R(13); f_8c0f1c80(c); }
  R(2)=0x8c0f1ae8u;
  R(5)=R(14);
  R(5)+=0x5u;
  { c->pr=0x8c0f0586u; R(4)=R(13); f_8c0f1ae8(c); }
  R(3)=0x8c0f0478u;
  R(5)=R(14);
  R(5)+=0x10u;
  { c->pr=0x8c0f0590u; R(4)=R(13); f_8c0f0478(c); }
  R(2)=0x8c0f05f4u;
  R(5)=R(14);
  R(5)+=0xcu;
  { c->pr=0x8c0f059au; R(4)=R(13); f_8c0f05f4(c); }
L8c0f059a:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0f05a6;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f04fcu;
  { c->pr=0x8c0f05a6u; R(5)=R(12); f_8c0d6fc8(c); }
L8c0f05a6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f05f4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f060c; }
  R(14)=0xd000001u;
  {  goto L8c0f0638; }
L8c0f060c:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f0616;
  R(14)=0x7000103u;
  {  goto L8c0f0638; }
L8c0f0616:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0e2c38u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x14u;
  { c->pr=0x8c0f0632u; R(5)=R(15); f_8c0e2c38(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  ST32(R(3),R(2));
L8c0f0638:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f0644;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f05f4u;
  { c->pr=0x8c0f0644u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f0644:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f066c(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f067e;
  R(14)=0xd000001u;
  {  goto L8c0f0690; }
L8c0f067e:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f0688;
  R(14)=0x7000103u;
  {  goto L8c0f0690; }
L8c0f0688:;
  R(3)=0x8c0f0130u;
  { c->pr=0x8c0f068eu; R(5)=0x2u; f_8c0f0130(c); }
  R(14)=R(0);
L8c0f0690:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f069c;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f066cu;
  { c->pr=0x8c0f069cu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f069c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f06bc(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f06ce;
  R(14)=0xd000001u;
  {  goto L8c0f0712; }
L8c0f06ce:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f06d8;
  R(14)=0x7000103u;
  {  goto L8c0f0712; }
L8c0f06d8:;
  R(14)=(uint32_t)(int32_t)(int8_t)R(7);
  c->t=(int32_t)R(14)>=0;
  if(!c->t) goto L8c0f06e4;
  R(2)=0x1fu;
  c->t=(int32_t)R(14)>(int32_t)R(2);
  if(!c->t) goto L8c0f06ea;
L8c0f06e4:;
  R(14)=0x3000001u;
  {  goto L8c0f0712; }
L8c0f06ea:;
  R(2)=0x8c2fa8a4u;
  R(3)=0x11u;
  R(1)=0x8c2fa8a8u;
  ST32(R(2),R(3));
  R(2)+=0x6u;
  R(3)=0x8c2fa8a9u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(4)=0x8c2fa8a4u;
  ST8(R(1),R(0));
  R(1)+=0x3u;
  ST8(R(3),R(5));
  R(3)=R(14);
  R(3)<<=2;
  ST8(R(2),R(6));
  c->t=R(3)>>31;R(3)<<=1;
  ST8(R(1),R(3));
  R(3)=0x8c0d6dc8u;
  { c->pr=0x8c0f0710u;  f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0f0712:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f071e;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f06bcu;
  { c->pr=0x8c0f071eu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f071e:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0750(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f0762;
  R(14)=0xd000001u;
  {  goto L8c0f0796; }
L8c0f0762:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f076c;
  R(14)=0x7000103u;
  {  goto L8c0f0796; }
L8c0f076c:;
  R(3)=0x80u;
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  R(1)=0x8c2fa8b8u;
  R(2)=0x16u;
  R(5)+=R(3);
  R(3)=0x8c2fa8bcu;
  ST32(R(1),R(2));
  R(1)+=0x7u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(2)=0x8c2fa8beu;
  ST8(R(3),R(0));
  R(3)+=0x1u;
  ST8(R(3),R(5));
  R(3)=0xfffffff8u;
  ST8(R(2),R(6));
  R(6)=sh4_shad(R(6),R(3));
  R(3)=0x8c0d6dc8u;
  R(4)=0x8c2fa8b8u;
  { c->pr=0x8c0f0794u; ST8(R(1),R(6)); f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0f0796:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f07a2;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f0750u;
  { c->pr=0x8c0f07a2u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f07a2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f07d0(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f07e2;
  R(14)=0xd000001u;
  {  goto L8c0f0830; }
L8c0f07e2:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f07ec;
  R(14)=0x7000103u;
  {  goto L8c0f0830; }
L8c0f07ec:;
  R(3)=0xffffe701u;
  R(14)=(uint32_t)(int32_t)(int16_t)R(5);
  c->t=(int32_t)R(14)>=(int32_t)R(3);
  if(!c->t) goto L8c0f07fa;
  R(1)=0x18ffu;
  c->t=(int32_t)R(14)>(int32_t)R(1);
  if(!c->t) goto L8c0f0800;
L8c0f07fa:;
  R(14)=0x3000001u;
  {  goto L8c0f0830; }
L8c0f0800:;
  R(3)=0x8c2fa8ccu;
  R(2)=0x18u;
  R(1)=0x8c2fa8d0u;
  ST32(R(3),R(2));
  R(3)+=0x7u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(5)=0x8000u;
  R(2)=0x8c2fa8d2u;
  R(5)+=R(14);
  ST8(R(1),R(0));
  R(1)=0xfffffff8u;
  ST8(R(2),R(5));
  R(5)=sh4_shad(R(5),R(1));
  R(0)=0x8c2fa8d4u;
  ST8(R(3),R(5));
  R(3)=R(1);
  R(4)=0x8c2fa8ccu;
  R(2)+=0x3u;
  ST8(R(0),R(6));
  R(6)=sh4_shad(R(6),R(3));
  R(1)=0x8c0d6dc8u;
  { c->pr=0x8c0f082eu; ST8(R(2),R(6)); f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0f0830:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f083c;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f07d0u;
  { c->pr=0x8c0f083cu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f083c:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0878(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  if(!c->t) goto L8c0f0886;
  R(14)=0x7000103u;
  {  goto L8c0f08b0; }
L8c0f0886:;
  R(3)=0x80u;
  R(5)=(uint32_t)(int32_t)(int8_t)R(5);
  R(1)=0x8c2fa8e0u;
  R(2)=0x15u;
  R(5)+=R(3);
  R(3)=0x8c2fa8e4u;
  ST32(R(1),R(2));
  R(1)+=0x7u;
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(2)=0x8c2fa8e6u;
  ST8(R(3),R(0));
  R(3)+=0x1u;
  ST8(R(3),R(5));
  R(3)=0xfffffff8u;
  ST8(R(2),R(6));
  R(6)=sh4_shad(R(6),R(3));
  R(3)=0x8c0d6dc8u;
  R(4)=0x8c2fa8e0u;
  { c->pr=0x8c0f08aeu; ST8(R(1),R(6)); f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0f08b0:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f08bc;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f0878u;
  { c->pr=0x8c0f08bcu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f08bc:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f08e4(SH4Ctx *c) {
  R(2)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f08f6;
  R(14)=0xd000001u;
  {  goto L8c0f0914; }
L8c0f08f6:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f0900;
  R(14)=0x7000103u;
  {  goto L8c0f0914; }
L8c0f0900:;
  R(2)=0x8c2fa8f4u;
  R(3)=0x12u;
  R(1)=0x8c2fa8f8u;
  ST32(R(2),R(3));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)=0x8c0d6dc8u;
  ST8(R(1),R(0));
  { c->pr=0x8c0f0912u; R(4)=R(2); f_8c0d6dc8(c); }
  R(14)=R(0);
L8c0f0914:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f0920;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f08e4u;
  { c->pr=0x8c0f0920u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f0920:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0948(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(R(12)&R(12))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f095e; }
  R(14)=0x7000103u;
  {  goto L8c0f09d8; }
L8c0f095e:;
  R(13)=LD32(R(12)+8);
  R(2)=0x56524453u;
  R(3)=LD32(R(13));
  c->t=R(3)==R(2);
  if(c->t) goto L8c0f096e;
  R(14)=0x9000001u;
  {  goto L8c0f09d8; }
L8c0f096e:;
  R(0)=(int32_t)(int8_t)LD8(R(13)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f097c;
  R(0)=(int32_t)(int8_t)LD8(R(13)+5);
  R(3)=0x1u;
  c->t=(int32_t)R(0)>(int32_t)R(3);
  if(!c->t) goto L8c0f0982;
L8c0f097c:;
  R(14)=0xb000002u;
  {  goto L8c0f09d8; }
L8c0f0982:;
  R(2)=0x8c0d6c60u;
  { c->pr=0x8c0f0988u;  f_8c0d6c60(c); }
  R(3)=0x8c0d6eccu;
  { c->pr=0x8c0f098eu;  f_8c0d6ecc(c); }
  R(2)=0x8c0e2910u;
  R(4)=0x8c0f4628u;
  { c->pr=0x8c0f0996u;  f_8c0e2910(c); }
  R(5)=R(13);
  R(2)=0x8c0f4628u;
  R(1)=0x8c0e2af4u;
  R(3)=0x0u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=0xffffffffu;
  R(6)=LD32(R(13)+8);
  R(5)+=0x20u;
  { c->pr=0x8c0f09aau; R(4)=LD32(R(2)); f_8c0e2af4(c); }
  R(15)+=0x4u;
  R(2)=0x8c0efa20u;
  R(5)=0x0u;
  R(3)=0x8c0f4628u;
  { c->pr=0x8c0f09b6u; R(4)=LD32(R(3)); f_8c0efa20(c); }
  R(1)=0x8c0f1480u;
  { c->pr=0x8c0f09bcu;  f_8c0f1480(c); }
  R(4)=0x200000u;
  {  goto L8c0f09c4; }
L8c0f09c2:;
  R(4)+=0xffffffffu;
L8c0f09c4:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f09c2;
  R(1)=0x8c0f1f18u;
  R(3)=0x1u;
  R(2)=0x8c0f4338u;
  { c->pr=0x8c0f09d2u; ST32(R(2),R(3)); f_8c0f1f18(c); }
  R(3)=0x8c0ef9a0u;
  { c->pr=0x8c0f09d8u; R(4)=R(12); f_8c0ef9a0(c); }
L8c0f09d8:;
  R(3)=0x8c0f4628u;
  R(2)=LD32(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0f09e6;
  R(2)=0x8c0e2990u;
  { c->pr=0x8c0f09e6u; R(4)=LD32(R(3)); f_8c0e2990(c); }
L8c0f09e6:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f09f2;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f0948u;
  { c->pr=0x8c0f09f2u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f09f2:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0a48(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f202cu;
  { c->pr=0x8c0f0a52u; R(4)=0x0u; f_8c0f202c(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f0a60;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f0a48u;
  { c->pr=0x8c0f0a60u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f0a60:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0a74(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  R(4)=0xffc00004u;
  R(0)=(int32_t)(int8_t)LD8(R(4));
  R(0)&=0xfeu;
  ST8(R(4),R(0));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  R(5)=0x50000u;
  R(3)=R(3)&0xFF;
  R(4)=0x0u;
  ST32(R(15),R(3));
  { ST32(R(15),R(4)); goto L8c0f0a92; }
L8c0f0a8c:;
  R(2)=LD32(R(15));
  R(2)+=0x1u;
  ST32(R(15),R(2));
L8c0f0a92:;
  R(3)=LD32(R(15));
  c->t=(int32_t)R(3)>=(int32_t)R(5);
  if(!c->t) goto L8c0f0a8c;
  R(6)=0x8c2fa908u;
  R(7)=0x8c2fa910u;
  R(0)=LD32(R(6));
  R(0)+=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  c->t=(R(0)&0x4)==0;
  if(c->t) goto L8c0f0aac;
  { ST32(R(7),R(4)); goto L8c0f0ab0; }
L8c0f0aac:;
  R(3)=0x1u;
  ST32(R(7),R(3));
L8c0f0ab0:;
  R(0)=LD32(R(7));
  R(5)=0x80000u;
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0f0ac0;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0f0b08;
  {  goto L8c0f0b08; }
L8c0f0ac0:;
  R(2)=0xffe80000u;
  R(6)=0x8c2fa90cu;
  R(3)=0xffe80008u;
  ST32(R(6),R(2));
  ST16(R(3),R(4));
  R(2)=LD32(R(6));
  R(1)=0x6u;
  R(2)+=0x18u;
  ST16(R(2),R(1));
  R(2)=LD32(R(6));
  R(2)+=0x8u;
  ST16(R(2),R(4));
  R(1)=LD32(R(6));
  ST16(R(1),R(4));
  R(2)=LD32(R(6));
  R(1)=0x28u;
  R(2)+=0x4u;
  ST8(R(2),R(1));
  { ST32(R(15)+8,R(4)); goto L8c0f0aee; }
L8c0f0ae8:;
  R(3)=LD32(R(15)+8);
  R(3)+=0x1u;
  ST32(R(15)+8,R(3));
L8c0f0aee:;
  R(2)=LD32(R(15)+8);
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  if(!c->t) goto L8c0f0ae8;
  R(1)=LD32(R(6));
  R(3)=0x308u;
  R(1)+=0x18u;
  ST16(R(1),R(3));
  R(2)=LD32(R(6));
  R(3)=0x30u;
  R(2)+=0x8u;
  ST16(R(2),R(3));
  {  goto L8c0f0b3a; }
L8c0f0b08:;
  R(1)=0xffe00000u;
  R(3)=0xffe00008u;
  ST32(R(6),R(1));
  ST8(R(3),R(4));
  R(2)=LD32(R(6));
  R(2)+=0x8u;
  ST8(R(2),R(4));
  R(1)=LD32(R(6));
  ST8(R(1),R(4));
  R(2)=LD32(R(6));
  R(1)=0x28u;
  R(2)+=0x4u;
  ST8(R(2),R(1));
  { ST32(R(15)+4,R(4)); goto L8c0f0b2c; }
L8c0f0b26:;
  R(3)=LD32(R(15)+4);
  R(3)+=0x1u;
  ST32(R(15)+4,R(3));
L8c0f0b2c:;
  R(2)=LD32(R(15)+4);
  c->t=(int32_t)R(2)>=(int32_t)R(5);
  if(!c->t) goto L8c0f0b26;
  R(1)=LD32(R(6));
  R(3)=0x30u;
  R(1)+=0x8u;
  ST8(R(1),R(3));
L8c0f0b3a:;
  R(0)=LD32(R(7));
  { R(15)+=0xcu; return; }
}
void f_8c0f0b40(SH4Ctx *c) {
  R(3)=0x8c2fa910u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==0;
  { uint32_t k=c->t; R(6)=R(4); if(k) goto L8c0f0b7c; }
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0f0bbc;
  {  goto L8c0f0bee; }
L8c0f0b7c:;
  R(4)=0x8c2fa90cu;
  R(5)=0x20u;
L8c0f0b80:;
  R(0)=LD32(R(4));
  R(0)=(int32_t)(int16_t)LD16(R(0)+16);
  R(0)=R(0)&0xFFFF;
  R(0)&=R(5);
  c->t=(int32_t)R(0)==32;
  if(!c->t) goto L8c0f0b80;
  R(2)=LD32(R(4));
  R(2)+=0xcu;
  ST8(R(2),R(6));
  R(3)=LD32(R(4));
  R(2)=0xffdfu;
  R(3)+=0x10u;
  R(1)=(int32_t)(int16_t)LD16(R(3));
  R(1)&=R(2);
  ST16(R(3),R(1));
  R(3)=LD32(R(4));
  R(1)=0xffbfu;
  R(3)+=0x10u;
  R(0)=(int32_t)(int16_t)LD16(R(3));
  R(0)&=R(1);
  ST16(R(3),R(0));
  R(5)=0x40u;
L8c0f0bac:;
  R(0)=LD32(R(4));
  R(0)=(int32_t)(int16_t)LD16(R(0)+16);
  R(0)=R(0)&0xFFFF;
  R(0)&=R(5);
  c->t=(int32_t)R(0)==64;
  if(!c->t) goto L8c0f0bac;
  {  goto L8c0f0bee; }
L8c0f0bbc:;
  R(4)=0x8c2fa908u;
  R(5)=0x80u;
L8c0f0bc0:;
  R(3)=LD32(R(4));
  R(3)+=0x10u;
  R(2)=(int32_t)(int8_t)LD8(R(3));
  R(2)=R(2)&0xFF;
  R(2)&=R(5);
  c->t=R(2)==R(5);
  if(!c->t) goto L8c0f0bc0;
  R(2)=LD32(R(4));
  R(2)+=0xcu;
  ST8(R(2),R(6));
  R(3)=LD32(R(4));
  R(3)+=0x10u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)&=0x7fu;
  ST8(R(3),R(0));
  R(5)=0x4u;
L8c0f0be0:;
  R(0)=LD32(R(4));
  R(0)+=0x10u;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  R(0)&=R(5);
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0f0be0;
L8c0f0bee:;
  {  return; }
}
void f_8c0f0bf2(SH4Ctx *c) {
  R(3)=0x8c2fa910u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0f0c02;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0f0c16;
  {  goto L8c0f0c28; }
L8c0f0c02:;
  R(2)=0x8c2fa90cu;
  R(4)=LD32(R(2));
L8c0f0c06:;
  R(0)=(int32_t)(int16_t)LD16(R(4)+28);
  R(3)=R(0)&0xFF;
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0f0c06;
  R(5)=R(4);
  R(5)+=0x14u;
  { R(5)=(int32_t)(int8_t)LD8(R(5)); goto L8c0f0c28; }
L8c0f0c16:;
  R(2)=0x8c2fa908u;
  R(0)=LD32(R(2));
  R(0)+=0x1cu;
  R(0)=(int32_t)(int8_t)LD8(R(0));
  R(0)=R(0)&0xFF;
  R(0)&=0x4u;
  c->t=(int32_t)R(0)==4;
  if(!c->t) goto L8c0f0c28;
  R(5)=0xdu;
L8c0f0c28:;
  { R(0)=R(5); return; }
}
void f_8c0f0c2c(SH4Ctx *c) {
  R(3)=0x8c2fa910u;
  R(0)=LD32(R(3));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0f0c3c;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0f0c78;
  {  goto L8c0f0c78; }
L8c0f0c3c:;
  R(4)=0x8c2fa90cu;
  R(5)=0x0u;
  R(2)=LD32(R(4));
  R(2)+=0x8u;
  ST16(R(2),R(5));
  R(1)=LD32(R(4));
  R(2)=0x6u;
  R(1)+=0x18u;
  ST16(R(1),R(2));
  R(1)=LD32(R(4));
  ST16(R(1),R(5));
  R(2)=LD32(R(4));
  R(1)=0xffu;
  R(2)+=0x4u;
  ST8(R(2),R(1));
  R(2)=LD32(R(4));
  R(2)+=0x8u;
  ST16(R(2),R(5));
  R(1)=LD32(R(4));
  R(1)+=0x10u;
  ST16(R(1),R(5));
  R(2)=LD32(R(4));
  R(2)+=0x18u;
  ST16(R(2),R(5));
  R(1)=LD32(R(4));
  R(1)+=0x20u;
  ST16(R(1),R(5));
  R(2)=LD32(R(4));
  R(2)+=0x24u;
  ST16(R(2),R(5));
L8c0f0c78:;
  R(3)=0xffc00004u;
  R(0)=(int32_t)(int8_t)LD8(R(3));
  R(0)|=0x1u;
  { ST8(R(3),R(0)); return; }
}
void f_8c0f0c82(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { R(14)=R(4); goto L8c0f0cac; }
L8c0f0ca8:;
  { c->pr=0x8c0f0cacu; {int32_t v=(int8_t)LD8(R(14));R(14)+=1;R(4)=(uint32_t)v;} f_8c0f0b40(c); }
L8c0f0cac:;
  R(2)=(int32_t)(int8_t)LD8(R(14));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f0ca8;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0cb8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(13)=0x1cu;
  ST32(R(15),R(4));
  R(12)=0xau;
L8c0f0cc8:;
  R(0)=LD32(R(15));
  R(3)=0u-R(13);
  R(14)=0xfu;
  R(0)=sh4_shld(R(0),R(3));
  R(14)&=R(0);
  R(3)=R(14)&0xFF;
  c->t=(int32_t)R(3)>=(int32_t)R(12);
  if(!c->t) goto L8c0f0cdc;
  { R(14)+=0x37u; goto L8c0f0cde; }
L8c0f0cdc:;
  R(14)+=0x30u;
L8c0f0cde:;
  { c->pr=0x8c0f0ce2u; R(4)=R(14); f_8c0f0b40(c); }
  R(13)+=0xfffffffcu;
  c->t=(int32_t)R(13)>=0;
  if(c->t) goto L8c0f0cc8;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0cf4(SH4Ctx *c) {
  R(2)=0xa05f688cu;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x1)==0;
  R(3)=c->t;
  ST32(R(4),R(3));
  { R(0)=0x0u; return; }
}
void f_8c0f0d08(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0e3e90u;
  ST32(R(15)+4,R(4));
  { c->pr=0x8c0f0d14u; R(5)=R(15); f_8c0e3e90(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f0d30;
  R(2)=LD32(R(15)+4);
  R(3)=0x8c0f44acu;
  R(1)=LD32(R(2));
  R(2)=0x0u;
  R(4)=LD32(R(3));
  R(1)<<=2;
  R(1)<<=2;
  R(4)=LD32(R(4));
  c->t=R(1)>>31;R(1)<<=1;
  R(4)+=R(1);
  ST32(R(4)+28,R(2));
L8c0f0d30:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0f0d40(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x8c0e3e90u;
  R(14)=R(4);
  { c->pr=0x8c0f0d4eu; R(5)=R(15); f_8c0e3e90(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(0)=0x0u; if(k) goto L8c0f0d6e; }
  R(3)=0x8c0f44acu;
  R(1)=0x2u;
  R(2)=LD32(R(14));
  R(4)=LD32(R(3));
  R(2)<<=2;
  R(2)<<=2;
  R(4)=LD32(R(4));
  c->t=R(2)>>31;R(2)<<=1;
  R(4)+=R(2);
  R(2)=0x1u;
  ST32(R(4)+28,R(2));
  ST32(R(14)+24,R(1));
L8c0f0d6e:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f0d80(SH4Ctx *c) {
  R(2)=0xa05f688cu;
  R(0)=LD32(R(2));
  c->t=(R(0)&0x10)==0;
  R(3)=c->t;
  ST32(R(4),R(3));
  { R(0)=0x0u; return; }
}
void f_8c0f0d94(SH4Ctx *c) {
L8c0f0d94:;
  R(0)=LD32(R(4));
  R(1)=(R(0)&0xFFFF0000u)|((R(0)&0xFF)<<8)|((R(0)>>8)&0xFF);
  R(0)=(R(1)<<16)|(R(1)>>16);
  R(1)=(R(0)&0xFFFF0000u)|((R(0)&0xFF)<<8)|((R(0)>>8)&0xFF);
  R(5)-=1;c->t=R(5)==0;
  ST32(R(4),R(1));
  { uint32_t k=!c->t; R(4)+=0x4u; if(k) goto L8c0f0d94; }
  { R(0)=0x0u; return; }
}
void f_8c0f0da8(SH4Ctx *c) {
  R(6)>>=2;
L8c0f0daa:;
  {uint32_t v=LD32(R(5));R(5)+=4;R(1)=v;}
  R(6)-=1;c->t=R(6)==0;
  ST32(R(4),R(1));
  { uint32_t k=!c->t; R(4)+=0x4u; if(k) goto L8c0f0daa; }
  {  return; }
}
void f_8c0f0db8(SH4Ctx *c) {
  R(4)+=R(5);
  R(1)=(int32_t)(int16_t)LD16(R(4));
  R(1)=(R(1)&0xFFFF0000u)|((R(1)&0xFF)<<8)|((R(1)>>8)&0xFF);
  { R(0)=R(1)&0xFFFF; return; }
}
void f_8c0f0dc2(SH4Ctx *c) {
  R(4)+=R(5);
  R(1)=(int32_t)(int16_t)LD16(R(4));
  { R(0)=R(1)&0xFFFF; return; }
}
void f_8c0f0dca(SH4Ctx *c) {
  R(6)=(R(6)&0xFFFF0000u)|((R(6)&0xFF)<<8)|((R(6)>>8)&0xFF);
  R(4)+=R(5);
  { ST16(R(4),R(6)); return; }
}
void f_8c0f0dd2(SH4Ctx *c) {
  R(4)+=R(5);
  { ST16(R(4),R(6)); return; }
}
void f_8c0f0dd8(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0f22f4u;
  { c->pr=0x8c0f0de0u;  f_8c0f22f4(c); }
  R(2)=0x8c0f2314u;
  { c->pr=0x8c0f0de6u; R(4)=0x8u; f_8c0f2314(c); }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(3)=0x8c2fa914u;
  { ST32(R(3),R(0)); return; }
}
void f_8c0f0dee(SH4Ctx *c) {
  R(15)+=0xfffffff4u;
  R(3)=0x8c2fa914u;
  R(7)=R(6);
  ST32(R(15),R(4));
  ST32(R(15)+4,R(5));
  ST32(R(15)+8,R(6));
  R(4)=LD32(R(3));
  R(2)=0x8c0f23aau;
  R(6)=LD32(R(15)+4);
  R(5)=LD32(R(15));
  { R(15)+=0xcu; { f_8c0f23aa(c); return; } }
}
void f_8c0f0e06(SH4Ctx *c) {
  R(3)=0x8c0f261cu;
  R(2)=0x8c2fa914u;
  { R(4)=LD32(R(2)); { f_8c0f261c(c); return; } }
}
void f_8c0f0e16(SH4Ctx *c) {
  R(2)=0x8c0f2618u;
  {  { f_8c0f2618(c); return; } }
}
void f_8c0f0e44(SH4Ctx *c) {
  R(2)=0x8c0f462cu;
  R(3)=0x0u;
  { ST32(R(2),R(3)); return; }
}
void f_8c0f0e4c(SH4Ctx *c) {
  {  return; }
}
void f_8c0f0e50(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
  R(13)=R(4);
  R(0)=0x8c0f42ccu;
  R(13)<<=2;
  R(10)=0x8c0d8bf4u;
  R(13)=LD32(R(13)+R(0));
  R(14)=R(5);
  { c->pr=0x8c0f0e72u; R(4)=R(13); f_8c0d8bf4(c); }
  R(3)=0x8c0d8c06u;
  ST32(R(15),R(0));
  { c->pr=0x8c0f0e7au; R(4)=R(13); f_8c0d8c06(c); }
  R(2)=LD32(R(15));
  R(4)=R(0);
  R(11)=0x8c0f0e16u;
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f0e8a;
  {  goto L8c0f1010; }
L8c0f0e8a:;
  R(0)=LD32(R(4));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0f0e94;
  {  goto L8c0f1010; }
L8c0f0e94:;
  R(2)=0x8c0d8ed4u;
  { c->pr=0x8c0f0e9au; R(4)=R(13); f_8c0d8ed4(c); }
L8c0f0e9a:;
  R(12)=0x8c0d8d1au;
L8c0f0e9c:;
  { uint32_t tg=R(10); c->pr=0x8c0f0ea0u; R(4)=R(13); sh4_call(c,tg); }
  R(5)=0x2u;
  R(6)=0x0u;
  { uint32_t tg=R(12); c->pr=0x8c0f0ea8u; R(4)=R(13); sh4_call(c,tg); }
  R(9)=R(0);
  c->t=(int32_t)R(9)>=0;
  if(c->t) goto L8c0f0eb6;
  { uint32_t tg=R(11); c->pr=0x8c0f0eb2u;  sh4_call(c,tg); }
  {  goto L8c0f0e9c; }
L8c0f0eb6:;
  R(12)=0x8c0d8c22u;
L8c0f0eb8:;
  R(5)=R(9);
  { uint32_t tg=R(12); c->pr=0x8c0f0ebeu; R(4)=R(13); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f0eca;
  { uint32_t tg=R(11); c->pr=0x8c0f0ec6u;  sh4_call(c,tg); }
  {  goto L8c0f0eb8; }
L8c0f0eca:;
  { uint32_t tg=R(10); c->pr=0x8c0f0eceu; R(4)=R(13); sh4_call(c,tg); }
  R(3)=0x8c0d8eceu;
  R(8)=R(0);
  { c->pr=0x8c0f0ed6u; R(4)=R(13); f_8c0d8ece(c); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0f0ee4;
  { uint32_t tg=R(11); c->pr=0x8c0f0edeu;  sh4_call(c,tg); }
  R(0)=0xffffff30u;
  {  goto L8c0f1016; }
L8c0f0ee4:;
  R(0)=(int32_t)(int8_t)LD8(R(8)+4);
  R(12)=LD32(R(8)+8);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  { uint32_t k=c->t; R(12)+=0x8u; if(k) goto L8c0f0f24; }
  R(1)=0xfcu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f0e9a;
  {  goto L8c0f1014; }
L8c0f0f24:;
  R(10)=0x8c2f2e38u;
  R(5)=0x0u;
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0f30u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0x2u;
  ST32(R(14),R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0f3eu; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0x4u;
  ST32(R(14)+4,R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0f4cu; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0x6u;
  ST32(R(14)+8,R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0f5au; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0x8u;
  ST32(R(14)+12,R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0f68u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0xau;
  ST32(R(14)+16,R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0f76u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0xcu;
  ST32(R(14)+20,R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0f84u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0x10u;
  ST32(R(14)+24,R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0f92u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0x12u;
  ST32(R(14)+28,R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0fa0u; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(5)=0x14u;
  ST32(R(14)+32,R(0));
  R(2)=LD32(R(10));
  R(3)=LD32(R(2)+12);
  { uint32_t tg=R(3); c->pr=0x8c0f0faeu; R(4)=R(12); sh4_call(c,tg); }
  R(0)=R(0)&0xFFFF;
  R(2)=0x80u;
  ST32(R(14)+52,R(0));
  R(3)=0x1ffu;
  ST32(R(14)+56,R(2));
  R(0)=(int32_t)(int8_t)LD8(R(12)+14);
  R(2)=0x8c0d8c06u;
  R(0)=R(0)&0xFF;
  ST32(R(14)+36,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(12)+15);
  R(0)=R(0)&0xFF;
  ST32(R(14)+40,R(0));
  ST32(R(14)+44,R(3));
  { c->pr=0x8c0f0fccu; R(4)=R(13); f_8c0d8c06(c); }
  R(3)=0x8c0d8f54u;
  R(4)=R(15);
  R(5)=R(0);
  { c->pr=0x8c0f0fd6u; R(4)+=0x4u; f_8c0d8f54(c); }
  c->t=(int32_t)R(0)>=0;
  if(!c->t) goto L8c0f1010;
  R(0)=(int32_t)(int16_t)LD16(R(15)+10);
  R(1)=0x40u;
  R(1)+=R(14);
  R(3)=0x8c067940u;
  R(0)=R(0)&0xFFFF;
  R(4)=0x200u;
  ST32(R(14)+60,R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(0)=R(0)&0xFFFF;
  ST32(R(1),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+10);
  R(0)=R(0)&0xFFFF;
  { c->pr=0x8c0f0ff6u; R(1)=R(4); f_8c067940(c); }
  R(1)=0x44u;
  R(3)=0x8c067940u;
  R(1)+=R(14);
  ST32(R(1),R(0));
  R(0)=(int32_t)(int16_t)LD16(R(15)+8);
  R(0)=R(0)&0xFFFF;
  { c->pr=0x8c0f1006u; R(1)=R(4); f_8c067940(c); }
  R(1)=0x48u;
  R(1)+=R(14);
  ST32(R(1),R(0));
  { R(0)=0x0u; goto L8c0f1016; }
L8c0f1010:;
  { uint32_t tg=R(11); c->pr=0x8c0f1014u;  sh4_call(c,tg); }
L8c0f1014:;
  R(0)=0xffffff01u;
L8c0f1016:;
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
void f_8c0f102a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(11)=0x148u;
  R(14)=R(4);
  R(3)=0x8c2f2e3cu;
  c->macl=R(14)*R(11);
  R(13)=0x8c0f0e16u;
  ST32(R(15)+8,R(5));
  ST32(R(15),R(6));
  R(11)=c->macl;
  R(11)+=R(3);
  { c->pr=0x8c0f1052u; R(4)=R(14); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f105e;
  { uint32_t tg=R(13); c->pr=0x8c0f105au;  sh4_call(c,tg); }
  {  goto L8c0f1114; }
L8c0f105e:;
  R(0)=0x8c0f42ccu;
  R(14)<<=2;
  R(3)=0x8c0d8bf4u;
  R(14)=LD32(R(14)+R(0));
  { c->pr=0x8c0f106au; R(4)=R(14); f_8c0d8bf4(c); }
  R(4)=0x0u;
  R(8)=LD32(R(15));
  ST32(R(15),R(4));
  { R(10)=R(4); goto L8c0f113a; }
L8c0f10a0:;
  { uint32_t tg=R(9); c->pr=0x8c0f10a4u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f10ee;
  R(3)=LD32(R(15)+8);
  R(6)=0x0u;
  R(12)=0x8c0d8d60u;
  R(5)=0x2u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=R(10);
  { c->pr=0x8c0f10b8u; R(4)=R(14); f_8c0d8d60(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>=0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c0f10ca; }
  { uint32_t tg=R(13); c->pr=0x8c0f10c4u;  sh4_call(c,tg); }
L8c0f10c4:;
  R(9)=0x8c0d8eceu;
  {  goto L8c0f10a0; }
L8c0f10ca:;
  R(2)=0x8c0d8c22u;
  R(5)=R(12);
  { c->pr=0x8c0f10d2u; R(4)=R(14); f_8c0d8c22(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f10de;
  { uint32_t tg=R(13); c->pr=0x8c0f10dau;  sh4_call(c,tg); }
  {  goto L8c0f10ca; }
L8c0f10de:;
  R(3)=0x8c0d8bf4u;
  { c->pr=0x8c0f10e4u; R(4)=R(14); f_8c0d8bf4(c); }
  ST32(R(15)+4,R(0));
  { uint32_t tg=R(9); c->pr=0x8c0f10eau; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0f10f4;
L8c0f10ee:;
  R(0)=0xffffff30u;
  {  goto L8c0f1146; }
L8c0f10f4:;
  R(0)=LD32(R(15)+4);
  R(9)=LD32(R(15)+4);
  R(0)=(int32_t)(int8_t)LD8(R(0)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==8;
  { uint32_t k=c->t; R(9)=LD32(R(9)+8); if(k) goto L8c0f111a; }
  R(1)=0xfcu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f10c4;
  R(1)=0xfbu;
  c->t=R(0)==R(1);
  if(!c->t) goto L8c0f1114;
  R(0)=0xffff0000u;
  {  goto L8c0f1146; }
L8c0f1114:;
  R(0)=0xffffff01u;
  {  goto L8c0f1146; }
L8c0f111a:;
  R(6)=LD32(R(11)+28);
  R(0)=0x44u;
  R(3)=0x8c0f0da8u;
  R(5)=R(9);
  R(6)=LD32(R(6)+R(0));
  R(5)+=0xcu;
  { c->pr=0x8c0f112au; R(4)=R(8); f_8c0f0da8(c); }
  R(2)=LD32(R(11)+28);
  R(0)=0x44u;
  R(10)+=0x1u;
  R(3)=LD32(R(2)+R(0));
  R(2)=LD32(R(15));
  R(8)+=R(3);
  R(2)+=0x1u;
  ST32(R(15),R(2));
L8c0f113a:;
  R(3)=LD32(R(11)+28);
  R(1)=LD32(R(15));
  R(2)=LD32(R(3)+60);
  c->t=(int32_t)R(1)>=(int32_t)R(2);
  if(!c->t) goto L8c0f10c4;
  R(0)=0x0u;
L8c0f1146:;
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
void f_8c0f115a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xffffffe0u;
  R(3)=0x148u;
  R(8)=R(5);
  R(1)=0x8c2f2e3cu;
  R(10)=0x8c0d8c22u;
  R(13)=0x8c0f0e16u;
  R(11)=0x8c0d8eceu;
  ST32(R(15)+8,R(4));
  ST32(R(15),R(6));
  R(2)=LD32(R(15)+8);
  c->macl=R(2)*R(3);
  R(3)=c->macl;
  R(3)+=R(1);
  ST32(R(15)+20,R(3));
  { c->pr=0x8c0f118au; R(4)=LD32(R(15)+8); f_8c0f1398(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f11c0;
  { uint32_t tg=R(13); c->pr=0x8c0f1192u;  sh4_call(c,tg); }
  {  goto L8c0f1322; }
L8c0f11c0:;
  R(14)=LD32(R(15)+8);
  R(0)=0x8c0f42ccu;
  R(14)<<=2;
  R(3)=0x8c0d8bf4u;
  R(14)=LD32(R(14)+R(0));
  { c->pr=0x8c0f11ceu; R(4)=R(14); f_8c0d8bf4(c); }
  R(2)=LD32(R(15));
  R(0)=0x48u;
  R(4)=0x0u;
  ST32(R(15)+4,R(2));
  R(3)=LD32(R(15)+20);
  R(2)=LD32(R(3)+28);
  R(1)=LD32(R(2)+R(0));
  ST32(R(15),R(1));
  ST32(R(15)+28,R(4));
  { R(9)=R(4); goto L8c0f1260; }
L8c0f11e4:;
  { uint32_t tg=R(11); c->pr=0x8c0f11e8u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f12b6;
  R(3)=0x8c067940u;
  R(12)=0x4u;
  R(1)=LD32(R(15));
  { c->pr=0x8c0f11f6u; R(0)=R(12); f_8c067940(c); }
  {uint32_t v=R(0);R(15)-=4;ST32(R(15),v);}
  R(5)=0x2u;
  R(3)=LD32(R(15)+8);
  R(6)=0x0u;
  R(7)=R(9);
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0d8d8cu;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0f120au; R(4)=R(14); f_8c0d8d8c(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>=0;
  { uint32_t k=c->t; R(15)+=0xcu; if(k) goto L8c0f121a; }
  { uint32_t tg=R(13); c->pr=0x8c0f1216u;  sh4_call(c,tg); }
  {  goto L8c0f11e4; }
L8c0f121a:;
  R(5)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c0f1220u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f122c;
  { uint32_t tg=R(13); c->pr=0x8c0f1228u;  sh4_call(c,tg); }
  {  goto L8c0f121a; }
L8c0f122c:;
  R(3)=0x8c0d8bf4u;
  { c->pr=0x8c0f1232u; R(4)=R(14); f_8c0d8bf4(c); }
  ST32(R(15)+24,R(0));
  { uint32_t tg=R(11); c->pr=0x8c0f1238u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f12b6;
  R(0)=LD32(R(15)+24);
  R(0)=(int32_t)(int8_t)LD8(R(0)+4);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0f1250;
  R(1)=0xfcu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f11e4;
  {  goto L8c0f1322; }
L8c0f1250:;
  R(2)=LD32(R(15)+4);
  R(9)+=0x1u;
  R(3)=LD32(R(15));
  R(2)+=R(3);
  ST32(R(15)+4,R(2));
  R(1)=LD32(R(15)+28);
  R(1)+=0x1u;
  ST32(R(15)+28,R(1));
L8c0f1260:;
  R(3)=LD32(R(15)+20);
  R(0)=0x40u;
  R(2)=LD32(R(3)+28);
  R(1)=LD32(R(2)+R(0));
  R(0)=LD32(R(15)+28);
  c->t=(int32_t)R(0)>=(int32_t)R(1);
  if(!c->t) goto L8c0f11e4;
L8c0f126e:;
  { uint32_t tg=R(11); c->pr=0x8c0f1272u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f12b6;
  R(12)=0x8c0d8dc0u;
  R(6)=0x0u;
  R(5)=0x2u;
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  R(7)=R(9);
  { c->pr=0x8c0f1284u; R(4)=R(14); f_8c0d8dc0(c); }
  R(12)=R(0);
  c->t=(int32_t)R(12)>=0;
  { uint32_t k=c->t; R(15)+=0x4u; if(k) goto L8c0f1294; }
  { uint32_t tg=R(13); c->pr=0x8c0f1290u;  sh4_call(c,tg); }
  {  goto L8c0f126e; }
L8c0f1294:;
  R(5)=R(12);
  { uint32_t tg=R(10); c->pr=0x8c0f129au; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f12a6;
  { uint32_t tg=R(13); c->pr=0x8c0f12a2u;  sh4_call(c,tg); }
  {  goto L8c0f1294; }
L8c0f12a6:;
  R(3)=0x8c0d8bf4u;
  { c->pr=0x8c0f12acu; R(4)=R(14); f_8c0d8bf4(c); }
  ST32(R(15)+4,R(0));
  { uint32_t tg=R(11); c->pr=0x8c0f12b2u; R(4)=R(14); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(c->t) goto L8c0f12d4;
L8c0f12b6:;
  R(0)=0xffffff30u;
  {  goto L8c0f1324; }
L8c0f12d4:;
  R(3)=0x8c0f462cu;
  R(2)=LD32(R(3));
  R(1)=R(2);
  c->t=(R(1)&R(1))==0;
  { uint32_t k=c->t; ST32(R(15),R(2)); if(k) goto L8c0f12f4; }
  R(6)=R(15);
  R(7)=R(15);
  R(1)=LD32(R(15));
  R(5)=R(8);
  R(6)+=0xcu;
  R(7)+=0x10u;
  { uint32_t tg=R(1); c->pr=0x8c0f12f0u; R(4)=LD32(R(15)+8); sh4_call(c,tg); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f1300;
L8c0f12f4:;
  R(0)=LD32(R(15)+4);
  R(0)=(int32_t)(int8_t)LD8(R(0)+4);
  ST8(R(15)+12,R(0));
  R(3)=LD32(R(15)+4);
  R(2)=LD32(R(3)+12);
  ST32(R(15)+16,R(2));
L8c0f1300:;
  R(0)=(int32_t)(int8_t)LD8(R(15)+12);
  R(0)=R(0)&0xFF;
  c->t=(int32_t)R(0)==7;
  if(c->t) goto L8c0f1318;
  R(1)=0xfcu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f126e;
  R(1)=0xfbu;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f131c;
  {  goto L8c0f1322; }
L8c0f1318:;
  { R(0)=0x0u; goto L8c0f1324; }
L8c0f131c:;
  R(0)=0xffffff40u;
  {  goto L8c0f1324; }
L8c0f1322:;
  R(0)=0xffffff01u;
L8c0f1324:;
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
void f_8c0f1338(SH4Ctx *c) {
  R(1)=0x200u;
  R(6)=0x0u;
  R(0)=0xffffffffu;
  R(7)=0x0u;
L8c0f1340:;
  R(2)=(int32_t)(int8_t)LD8(R(5));
  R(3)=(int32_t)(int8_t)LD8(R(4));
  c->t=R(3)==R(2);
  { uint32_t k=c->t; R(6)+=0x1u; if(k) goto L8c0f134c; }
  R(7)=R(0);
L8c0f134c:;
  c->t=(int32_t)R(6)>=(int32_t)R(1);
  R(4)+=0x1u;
  { uint32_t k=!c->t; R(5)+=0x1u; if(k) goto L8c0f1340; }
  { R(0)=R(7); return; }
}
void f_8c0f1358(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=0x8c0f42ccu;
  R(14)=R(4);
  R(14)<<=2;
  R(3)=0x8c0d8bf4u;
  R(14)=LD32(R(14)+R(0));
  { c->pr=0x8c0f136cu; R(4)=R(14); f_8c0d8bf4(c); }
  R(3)=0x8c0d8c06u;
  ST32(R(15),R(0));
  { c->pr=0x8c0f1374u; R(4)=R(14); f_8c0d8c06(c); }
  R(2)=LD32(R(15));
  R(4)=R(0);
  R(3)=(int32_t)(int8_t)LD8(R(2));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0f1384;
  R(0)=LD32(R(4));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0f138e;
L8c0f1384:;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0f138e:;
  R(0)=0x1u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1398(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=0x8c0f42ccu;
  R(14)=R(4);
  R(14)<<=2;
  R(3)=0x8c0d8bf4u;
  R(14)=LD32(R(14)+R(0));
  { c->pr=0x8c0f13acu; R(4)=R(14); f_8c0d8bf4(c); }
  R(3)=0x8c0d8c06u;
  ST32(R(15)+4,R(0));
  { c->pr=0x8c0f13b4u; R(4)=R(14); f_8c0d8c06(c); }
  ST32(R(15),R(0));
  R(3)=LD32(R(15)+4);
  R(2)=(int32_t)(int8_t)LD8(R(3));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0f13d0;
  R(3)=0x8c0d8eceu;
  { c->pr=0x8c0f13c4u; R(4)=R(14); f_8c0d8ece(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f13d0;
  R(0)=LD32(R(15));
  R(0)=LD32(R(0));
  c->t=(R(0)&0x2)==0;
  if(!c->t) goto L8c0f13f8;
L8c0f13d0:;
  R(0)=0x0u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0f13f8:;
  R(0)=0x1u;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1420(SH4Ctx *c) {
  {uint32_t v=R(8);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(8)=R(4);
  ST32(R(15),R(4));
  R(3)=0x8c0db7eau;
  R(4)=0x138u;
  { c->pr=0x8c0f1432u; R(8)+=0x40u; f_8c0db7ea(c); }
  ST32(R(8),R(0));
  R(3)=0x8c0db7eau;
  R(4)=0x134u;
  R(8)=LD32(R(15));
  { c->pr=0x8c0f143eu; R(8)+=0x44u; f_8c0db7ea(c); }
  ST32(R(8),R(0));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(8)=v;} return; }
}
void f_8c0f1480(SH4Ctx *c) {
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
  R(5)=0x8c0f4630u;
  R(7)=R(14);
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(2)=0x8c0d7f00u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0f14acu; R(6)=0x4u; f_8c0d7f00(c); }
  R(3)=0x8c0f4630u;
  R(2)=0xfffffffeu;
  R(5)=0xa0702c00u;
  R(7)=R(14);
  R(1)=LD32(R(3));
  R(4)=R(3);
  R(1)&=R(2);
  ST32(R(3),R(1));
  R(3)=0x8c0d8220u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  { c->pr=0x8c0f14c6u; R(6)=0x4u; f_8c0d8220(c); }
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
L8c0f14dc:;
  R(4)-=1;c->t=R(4)==0;
  if(!c->t) goto L8c0f14dc;
  R(0)=0x0u;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1500(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(13)=R(4);
  ST32(R(15)+4,R(5));
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+8,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(11)=0x8c0f4334u;
  R(2)=LD32(R(11));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1532;
  R(14)=0xd000001u;
  {  goto L8c0f1588; }
L8c0f1532:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0f153c;
  R(14)=0x7000103u;
  {  goto L8c0f1588; }
L8c0f153c:;
  R(3)=0x8c0e29f8u;
  R(5)=R(15);
  { c->pr=0x8c0f1544u; R(4)=R(13); f_8c0e29f8(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0f1550;
  R(14)=0x6000001u;
  {  goto L8c0f1588; }
L8c0f1550:;
  R(3)=0x8c0efa10u;
  R(2)=0x0u;
  R(12)=R(13);
  R(5)=0x2u;
  ST32(R(12)+24,R(2));
  { c->pr=0x8c0f155eu; R(4)=R(12); f_8c0efa10(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0f1588;
  R(0)=0x190u;
  R(2)=LD32(R(11));
  R(7)=0x8c0f2814u;
  ST32(R(2)+R(0),R(13));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(11));
  R(2)=LD32(R(3)+R(0));
  R(2)+=0x1u;
  ST32(R(3)+R(0),R(2));
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+8);
  R(3)=0x8c0f2a0cu;
  R(6)=LD32(R(12)+12);
  { c->pr=0x8c0f1582u; R(4)=LD32(R(12)+8); f_8c0f2a0c(c); }
  R(15)+=0x4u;
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
L8c0f1588:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1594;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f1500u;
  { c->pr=0x8c0f1594u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1594:;
  R(0)=LD32(R(15)+8);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f15e4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(13)=R(4);
  ST32(R(15)+8,R(5));
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15)+4,R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(12)=0x8c0f4334u;
  R(2)=LD32(R(12));
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1618;
  R(14)=0xd000001u;
  {  goto L8c0f16a6; }
L8c0f1618:;
  c->t=(R(13)&R(13))==0;
  if(!c->t) goto L8c0f1622;
  R(14)=0x7000103u;
  {  goto L8c0f16a6; }
L8c0f1622:;
  R(3)=0x8c0e29f8u;
  R(5)=R(15);
  { c->pr=0x8c0f162au; R(4)=R(13); f_8c0e29f8(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0f1636;
  R(14)=0x6000001u;
  {  goto L8c0f16a6; }
L8c0f1636:;
  R(14)=R(13);
  R(3)=0x8c0f2814u;
  R(2)=0x1u;
  R(1)=0xa0800000u;
  R(10)=0x0u;
  R(11)=0x8c2fd6c8u;
  R(0)=0x1acu;
  ST32(R(11),R(10));
  ST32(R(14)+24,R(10));
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(15)+28);
  R(4)=LD32(R(12));
  R(5)+=R(1);
  R(1)=0x8c0f21e0u;
  R(7)=LD32(R(14)+12);
  R(6)=LD32(R(14)+8);
  { c->pr=0x8c0f1662u; R(4)=LD32(R(4)+R(0)); f_8c0f21e0(c); }
  R(15)+=0x14u;
  R(3)=R(0);
  c->t=(R(3)&R(3))==0;
  { uint32_t k=c->t; ST32(R(11),R(0)); if(k) goto L8c0f1670; }
  { c->pr=0x8c0f1670u;  f_8c0f16da(c); }
L8c0f1670:;
  R(2)=0x8c0efa10u;
  R(5)=0x2u;
  { c->pr=0x8c0f1678u; R(4)=R(13); f_8c0efa10(c); }
  R(14)=R(0);
  c->t=(R(14)&R(14))==0;
  if(!c->t) goto L8c0f16a6;
  R(0)=0x190u;
  R(5)=0x0u;
  R(3)=LD32(R(12));
  ST32(R(3)+R(0),R(13));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(12));
  R(2)=LD32(R(3)+R(0));
  R(2)+=0x1u;
  ST32(R(3)+R(0),R(2));
  R(0)+=0x24u;
  R(4)=LD32(R(12));
  R(3)=0x8c0f2250u;
  { c->pr=0x8c0f169au; R(4)=LD32(R(4)+R(0)); f_8c0f2250(c); }
  R(2)=R(0);
  c->t=(R(2)&R(2))==0;
  { uint32_t k=c->t; ST32(R(11),R(0)); if(k) goto L8c0f16a6; }
  { c->pr=0x8c0f16a6u;  f_8c0f16da(c); }
L8c0f16a6:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f16b2;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f15e4u;
  { c->pr=0x8c0f16b2u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f16b2:;
  R(0)=LD32(R(15)+4);
  R(2)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=R(14);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f16d6(SH4Ctx *c) {
  {  return; }
}
void f_8c0f16da(SH4Ctx *c) {
  R(4)=0x8c0f4634u;
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  { ST32(R(4),R(3)); return; }
}
void f_8c0f1724(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(0)=sh4_getsr(c);
  R(3)=0xffffff0fu;
  R(13)=0x0u;
  R(14)=R(13);
  R(0)>>=2;
  R(0)>>=2;
  R(0)&=0xfu;
  ST32(R(15),R(0));
  R(0)=sh4_getsr(c);
  R(0)&=R(3);
  R(0)|=0xf0u;
  sh4_setsr(c,R(0));
  R(6)=0x8c0f4334u;
  R(7)=LD32(R(6));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0f1752;
  R(14)=0xd000001u;
  {  goto L8c0f17cc; }
L8c0f1752:;
  R(0)=0x1a0u;
  R(2)=LD32(R(7)+R(0));
  R(0)+=0xfffffff4u;
  R(3)=LD32(R(7)+R(0));
  R(0)+=0xcu;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  R(1)=LD32(R(2));
  ST32(R(4),R(1));
  R(3)=LD32(R(6));
  R(2)=R(3);
  R(1)=LD32(R(2)+R(0));
  R(0)+=0xfffffff4u;
  R(3)=LD32(R(3)+R(0));
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(2)=LD32(R(1)+4);
  R(0)+=0xcu;
  ST32(R(5),R(2));
  R(3)=LD32(R(6));
  R(2)=R(3);
  R(1)=LD32(R(2)+R(0));
  R(0)+=0xfffffff4u;
  R(3)=LD32(R(3)+R(0));
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  ST32(R(1),R(13));
  R(3)=LD32(R(6));
  R(2)=R(3);
  R(0)+=0xcu;
  R(1)=LD32(R(2)+R(0));
  R(0)+=0xfffffff4u;
  R(3)=LD32(R(3)+R(0));
  R(0)+=0xcu;
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  ST32(R(1)+4,R(13));
  R(3)=LD32(R(6));
  R(2)=LD32(R(3)+R(0));
  R(2)+=0x1u;
  ST32(R(3)+R(0),R(2));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(6));
  R(2)=R(3);
  R(1)=LD32(R(2)+R(0));
  R(0)+=0x8u;
  R(3)=LD32(R(3)+R(0));
  c->t=R(3)==R(1);
  if(!c->t) goto L8c0f17c2;
  R(0)=0x1a0u;
  R(3)=LD32(R(6));
  ST32(R(3)+R(0),R(13));
L8c0f17c2:;
  R(0)=0x1a4u;
  R(3)=LD32(R(6));
  R(2)=LD32(R(3)+R(0));
  R(2)+=0xffffffffu;
  ST32(R(3)+R(0),R(2));
L8c0f17cc:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f17d8;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1724u;
  { c->pr=0x8c0f17d8u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f17d8:;
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f180c(SH4Ctx *c) {
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
  R(6)=0x8c0f4334u;
  R(7)=LD32(R(6));
  c->t=(R(7)&R(7))==0;
  if(!c->t) goto L8c0f1836;
  R(14)=0xd000001u;
  {  goto L8c0f1898; }
L8c0f1836:;
  R(0)=0x1a4u;
  R(3)=LD32(R(7)+R(0));
  R(0)+=0xfffffff4u;
  R(2)=LD32(R(7)+R(0));
  c->t=(int32_t)R(2)>(int32_t)R(3);
  if(c->t) goto L8c0f1848;
  R(14)=0x5000101u;
  {  goto L8c0f1898; }
L8c0f1848:;
  R(0)=0x19cu;
  R(2)=LD32(R(7)+R(0));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(7)+R(0));
  R(0)+=0x8u;
  R(2)<<=2;
  c->t=R(2)>>31;R(2)<<=1;
  R(2)+=R(3);
  ST32(R(2),R(4));
  R(3)=LD32(R(6));
  R(2)=R(3);
  R(1)=LD32(R(2)+R(0));
  R(0)+=0xfffffff8u;
  R(3)=LD32(R(3)+R(0));
  R(1)<<=2;
  c->t=R(1)>>31;R(1)<<=1;
  R(1)+=R(3);
  R(0)+=0x8u;
  ST32(R(1)+4,R(5));
  R(3)=LD32(R(6));
  R(2)=LD32(R(3)+R(0));
  R(2)+=0x1u;
  ST32(R(3)+R(0),R(2));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(6));
  R(2)=R(3);
  R(1)=LD32(R(2)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(3)+R(0));
  c->t=R(3)==R(1);
  if(!c->t) goto L8c0f188e;
  R(0)=0x19cu;
  R(2)=0x0u;
  R(3)=LD32(R(6));
  ST32(R(3)+R(0),R(2));
L8c0f188e:;
  R(0)=0x1a4u;
  R(3)=LD32(R(6));
  R(2)=LD32(R(3)+R(0));
  R(2)+=0x1u;
  ST32(R(3)+R(0),R(2));
L8c0f1898:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f18a4;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f180cu;
  { c->pr=0x8c0f18a4u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f18a4:;
  R(0)=LD32(R(15));
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f18dc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15),R(6));
  ST32(R(15)+4,R(7));
  R(6)=LD32(R(3));
  c->t=(R(6)&R(6))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0f18fc; }
  R(12)=0xd000001u;
  {  goto L8c0f1a40; }
L8c0f18fc:;
  R(7)=(uint32_t)(int32_t)(int8_t)R(5);
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c0f1906;
  {  goto L8c0f1a0c; }
L8c0f1906:;
  R(1)=0x42534d53u;
  R(11)=(uint32_t)(int32_t)(int8_t)R(5);
  R(0)=R(4);
  R(11)<<=2;
  R(13)=0x1u;
  c->t=R(11)>>31;R(11)<<=1;
  c->t=R(0)==R(1);
  { uint32_t k=c->t; R(14)=0x10u; if(k) goto L8c0f195e; }
  R(1)=0x42504d53u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f196c;
  R(1)=0x42534f53u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f19c0;
  R(1)=0x52535053u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f19d2;
  R(1)=0x42504653u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f19e8;
  R(1)=0x424f4653u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f19f8;
  R(1)=0x57504653u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f1a08;
  R(1)=0x56524453u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f1a20;
  R(1)=0x544c4d53u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f1a20;
  R(1)=0x44534d53u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f1a20;
  R(1)=0x44534f53u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f1a20;
  R(1)=0x44535053u;
  c->t=R(0)==R(1);
  if(c->t) goto L8c0f1a20;
  {  goto L8c0f1a20; }
L8c0f195e:;
  c->t=(int32_t)R(7)>=(int32_t)R(14);
  if(c->t) goto L8c0f1a0c;
  R(0)=0x1c0u;
  R(14)=0x1e4u;
  R(13)=LD32(R(6)+R(0));
  { R(13)+=R(11); goto L8c0f19e2; }
L8c0f196c:;
  c->t=(int32_t)R(7)>=(int32_t)R(14);
  if(c->t) goto L8c0f1a0c;
  R(0)=0x1c0u;
  R(3)=0x80u;
  R(13)=LD32(R(6)+R(0));
  R(14)=0x264u;
  R(13)+=R(3);
  { R(13)+=R(11); goto L8c0f19e2; }
L8c0f19c0:;
  c->t=(int32_t)R(7)>=(int32_t)R(14);
  if(c->t) goto L8c0f1a0c;
  R(0)=0x1c0u;
  R(3)=0x100u;
  R(13)=LD32(R(6)+R(0));
  R(14)=0x2e4u;
  R(13)+=R(3);
  { R(13)+=R(11); goto L8c0f19e2; }
L8c0f19d2:;
  c->t=(int32_t)R(7)>=(int32_t)R(14);
  if(c->t) goto L8c0f1a0c;
  R(0)=0x1c0u;
  R(3)=0x180u;
  R(13)=LD32(R(6)+R(0));
  R(14)=0x364u;
  R(13)+=R(3);
  R(13)+=R(11);
L8c0f19e2:;
  R(14)+=R(6);
  { R(14)+=R(11); goto L8c0f1a26; }
L8c0f19e8:;
  c->t=(int32_t)R(7)>=(int32_t)R(13);
  if(c->t) goto L8c0f1a0c;
  R(0)=0x1c0u;
  R(14)=0x3e4u;
  R(3)=0x200u;
  R(13)=LD32(R(6)+R(0));
  { R(13)+=R(3); goto L8c0f1a1c; }
L8c0f19f8:;
  c->t=(int32_t)R(7)>=(int32_t)R(13);
  if(c->t) goto L8c0f1a0c;
  R(0)=0x1c0u;
  R(14)=0x464u;
  R(3)=0x280u;
  R(13)=LD32(R(6)+R(0));
  { R(13)+=R(3); goto L8c0f1a1c; }
L8c0f1a08:;
  c->t=(int32_t)R(7)>=(int32_t)R(13);
  if(!c->t) goto L8c0f1a12;
L8c0f1a0c:;
  R(12)=0x8000003u;
  {  goto L8c0f1a40; }
L8c0f1a12:;
  R(0)=0x1c0u;
  R(3)=0x288u;
  R(13)=LD32(R(6)+R(0));
  R(14)=0x46cu;
  R(13)+=R(3);
L8c0f1a1c:;
  { R(14)+=R(6); goto L8c0f1a26; }
L8c0f1a20:;
  R(12)=0x9000001u;
  {  goto L8c0f1a40; }
L8c0f1a26:;
  R(3)=0x8c0f2accu;
  R(5)=LD32(R(15));
  { c->pr=0x8c0f1a2eu; R(4)=R(13); f_8c0f2acc(c); }
  R(3)=0x8c0f2accu;
  R(4)=R(13);
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0f1a38u; R(4)+=0x4u; f_8c0f2acc(c); }
  R(2)=LD32(R(15));
  ST32(R(14),R(2));
  R(3)=LD32(R(15)+4);
  ST32(R(14)+4,R(3));
L8c0f1a40:;
  R(0)=R(12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1a74(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(3)=0x200000u;
  R(2)=R(4);
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c0f1a98; }
  R(2)=0x0u;
  R(1)=0xa0800000u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(15)+8);
  R(4)+=R(1);
  R(1)=0x8c0d7f00u;
  { c->pr=0x8c0f1a96u; R(6)=0x4u; f_8c0d7f00(c); }
  R(15)+=0x8u;
L8c0f1a98:;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0f1aac(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(R(4)&R(4))==0;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f1abc; }
  R(14)=0x7000103u;
  {  goto L8c0f1ac4; }
L8c0f1abc:;
  R(0)=LD32(R(4)+4);
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0f1ac4;
  R(14)=0x7000102u;
L8c0f1ac4:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1ad0;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f1aacu;
  { c->pr=0x8c0f1ad0u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1ad0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1ae8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f1b00; }
  R(14)=0xd000001u;
  {  goto L8c0f1b38; }
L8c0f1b00:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f1b0a;
  R(14)=0x7000103u;
  {  goto L8c0f1b38; }
L8c0f1b0a:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1b16;
  R(14)=0x7000203u;
  {  goto L8c0f1b38; }
L8c0f1b16:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0f2a90u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x11u;
  { c->pr=0x8c0f1b32u; R(5)=R(15); f_8c0f2a90(c); }
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(3)=LD32(R(15)+4);
  ST8(R(3),R(2));
L8c0f1b38:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1b44;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1ae8u;
  { c->pr=0x8c0f1b44u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1b44:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1b70(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f1b88; }
  R(14)=0xd000001u;
  {  goto L8c0f1bc2; }
L8c0f1b88:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f1b92;
  R(14)=0x7000103u;
  {  goto L8c0f1bc2; }
L8c0f1b92:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1b9e;
  R(14)=0x7000203u;
  {  goto L8c0f1bc2; }
L8c0f1b9e:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0d6f04u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x1cu;
  { c->pr=0x8c0f1bbau; R(5)=R(15); f_8c0d6f04(c); }
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(3)=LD32(R(15)+4);
  R(2)=R(2)&0xFF;
  ST32(R(3),R(2));
L8c0f1bc2:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1bce;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1b70u;
  { c->pr=0x8c0f1bceu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1bce:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1bf8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f1c10; }
  R(14)=0xd000001u;
  {  goto L8c0f1c48; }
L8c0f1c10:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f1c1a;
  R(14)=0x7000103u;
  {  goto L8c0f1c48; }
L8c0f1c1a:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1c26;
  R(14)=0x7000203u;
  {  goto L8c0f1c48; }
L8c0f1c26:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0d6f04u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  { c->pr=0x8c0f1c40u; R(5)=R(15); f_8c0d6f04(c); }
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(3)=LD32(R(15)+4);
  R(2)=R(2)&0xFF;
  ST32(R(3),R(2));
L8c0f1c48:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1c54;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1bf8u;
  { c->pr=0x8c0f1c54u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1c54:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1c80(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0f1c96;
  R(14)=0xd000001u;
  {  goto L8c0f1cd0; }
L8c0f1c96:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f1ca0;
  R(14)=0x7000103u;
  {  goto L8c0f1cd0; }
L8c0f1ca0:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1cac;
  R(14)=0x7000203u;
  {  goto L8c0f1cd0; }
L8c0f1cac:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0f2a90u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x10u;
  { c->pr=0x8c0f1cc8u; R(5)=R(15); f_8c0f2a90(c); }
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(14)=0x0u;
  R(3)=LD32(R(15)+4);
  ST8(R(3),R(2));
L8c0f1cd0:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1cdc;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1c80u;
  { c->pr=0x8c0f1cdcu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1cdc:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1d08(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f1d20; }
  R(14)=0xd000001u;
  {  goto L8c0f1d58; }
L8c0f1d20:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f1d2a;
  R(14)=0x7000103u;
  {  goto L8c0f1d58; }
L8c0f1d2a:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1d36;
  R(14)=0x7000203u;
  {  goto L8c0f1d58; }
L8c0f1d36:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0f2a90u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x2u;
  { c->pr=0x8c0f1d52u; R(5)=R(15); f_8c0f2a90(c); }
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(3)=LD32(R(15)+4);
  ST8(R(3),R(2));
L8c0f1d58:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1d64;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1d08u;
  { c->pr=0x8c0f1d64u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1d64:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1d90(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f1da8; }
  R(14)=0xd000001u;
  {  goto L8c0f1de0; }
L8c0f1da8:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f1db2;
  R(14)=0x7000103u;
  {  goto L8c0f1de0; }
L8c0f1db2:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1dbe;
  R(14)=0x7000203u;
  {  goto L8c0f1de0; }
L8c0f1dbe:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0f1a74u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x8u;
  { c->pr=0x8c0f1ddau; R(5)=R(15); f_8c0f1a74(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  ST16(R(3),R(2));
L8c0f1de0:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1dec;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1d90u;
  { c->pr=0x8c0f1decu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1dec:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1e18(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f1e30; }
  R(14)=0xd000001u;
  {  goto L8c0f1e68; }
L8c0f1e30:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f1e3a;
  R(14)=0x7000103u;
  {  goto L8c0f1e68; }
L8c0f1e3a:;
  R(2)=LD32(R(15)+4);
  c->t=(R(2)&R(2))==0;
  if(!c->t) goto L8c0f1e46;
  R(14)=0x7000203u;
  {  goto L8c0f1e68; }
L8c0f1e46:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0f1a74u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x4u;
  { c->pr=0x8c0f1e62u; R(5)=R(15); f_8c0f1a74(c); }
  R(2)=LD32(R(15));
  R(3)=LD32(R(15)+4);
  ST16(R(3),R(2));
L8c0f1e68:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1e74;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1e18u;
  { c->pr=0x8c0f1e74u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1e74:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1ea0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c0f4334u;
  ST32(R(15)+4,R(5));
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f1eb8; }
  R(14)=0xd000001u;
  {  goto L8c0f1ee4; }
L8c0f1eb8:;
  c->t=(R(4)&R(4))==0;
  if(!c->t) goto L8c0f1ec2;
  R(14)=0x7000103u;
  {  goto L8c0f1ee4; }
L8c0f1ec2:;
  R(0)=0x1b8u;
  R(3)=0x200u;
  R(2)=LD32(R(5)+R(0));
  R(0)=(int32_t)(int8_t)LD8(R(4)+1);
  R(3)+=R(2);
  R(2)=0x8c0f2a90u;
  R(0)<<=2;
  R(0)<<=2;
  c->t=R(0)>>31;R(0)<<=1;
  R(0)+=R(3);
  R(4)=R(0);
  R(4)+=0x1u;
  { c->pr=0x8c0f1edeu; R(5)=R(15); f_8c0f2a90(c); }
  R(2)=(int32_t)(int8_t)LD8(R(15));
  R(3)=LD32(R(15)+4);
  ST8(R(3),R(2));
L8c0f1ee4:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f1ef0;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f1ea0u;
  { c->pr=0x8c0f1ef0u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f1ef0:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f1f18(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c0f4334u;
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(4)=LD32(R(14));
  c->t=(R(4)&R(4))==0;
  { uint32_t k=!c->t; R(12)=0x0u; if(k) goto L8c0f1f34; }
  R(12)=0xd000001u;
  {  goto L8c0f1fd4; }
L8c0f1f34:;
  R(0)=0x1ccu;
  R(3)=0x1d0u;
  R(13)=LD32(R(4)+R(0));
  R(0)+=0xffffffe4u;
  R(11)=0x8c0f2a90u;
  R(13)+=0x20u;
  ST32(R(4)+R(0),R(13));
  R(5)=LD32(R(14));
  R(5)+=R(3);
  { c->pr=0x8c0f1f4au; R(4)=R(13); f_8c0f2a90(c); }
  R(3)=0x1d1u;
  R(4)=R(13);
  R(5)=LD32(R(14));
  R(5)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c0f1f56u; R(4)+=0x1u; sh4_call(c,tg); }
  R(10)=LD32(R(14));
  R(1)=0x1d0u;
  R(0)=R(10);
  R(0)=(int32_t)(int8_t)LD8(R(1)+R(0));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f1f76;
  R(0)=0x1d1u;
  R(2)=LD32(R(14));
  R(3)=(int32_t)(int8_t)LD8(R(2)+R(0));
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f1f76;
  R(5)=0x1d2u;
  R(4)=R(13);
  R(5)+=R(10);
  { R(4)+=0x3u; goto L8c0f1f7e; }
L8c0f1f76:;
  R(5)=0x1d2u;
  R(4)=R(13);
  R(4)+=0x2u;
  R(5)+=R(10);
L8c0f1f7e:;
  { uint32_t tg=R(11); c->pr=0x8c0f1f82u;  sh4_call(c,tg); }
  R(0)=0x1d3u;
  R(3)=0x0u;
  R(2)=LD32(R(14));
  R(4)=0xa0u;
  ST8(R(2)+R(0),R(3));
  R(3)=0x1b4u;
  R(5)=LD32(R(14));
  R(11)=0x8c0f1a74u;
  R(5)+=R(3);
  { c->pr=0x8c0f1f98u; R(4)+=R(13); f_8c0f1a74(c); }
  R(3)=0x1b8u;
  R(5)=LD32(R(14));
  R(4)=0xa4u;
  R(5)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c0f1fa4u; R(4)+=R(13); sh4_call(c,tg); }
  R(3)=0x1bcu;
  R(5)=LD32(R(14));
  R(4)=0xa8u;
  R(5)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c0f1fb0u; R(4)+=R(13); sh4_call(c,tg); }
  R(3)=0x1c0u;
  R(5)=LD32(R(14));
  R(4)=0xacu;
  R(5)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c0f1fbcu; R(4)+=R(13); sh4_call(c,tg); }
  R(3)=0x1c4u;
  R(5)=LD32(R(14));
  R(4)=0xb0u;
  R(5)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c0f1fc8u; R(4)+=R(13); sh4_call(c,tg); }
  R(3)=0x1c8u;
  R(5)=LD32(R(14));
  R(4)=0xb4u;
  R(5)+=R(3);
  { uint32_t tg=R(11); c->pr=0x8c0f1fd4u; R(4)+=R(13); sh4_call(c,tg); }
L8c0f1fd4:;
  c->t=(R(12)&R(12))==0;
  if(c->t) goto L8c0f1fe0;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f1f18u;
  { c->pr=0x8c0f1fe0u; R(5)=R(12); f_8c0d6fc8(c); }
L8c0f1fe0:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(12);
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f202c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x8c2fa93bu;
  R(4)=0xffffffe0u;
  R(14)=0x8c0f4334u;
  R(3)&=R(4);
  R(2)=0x100u;
  ST32(R(14),R(3));
  R(3)=0x8c2fb8c7u;
  ST32(R(15)+4,R(2));
  R(4)&=R(3);
  R(2)=0x8c0f28c4u;
  ST32(R(15),R(4));
  R(4)=0x8c2faea8u;
  { c->pr=0x8c0f204eu; R(5)=0x40u; f_8c0f28c4(c); }
  R(3)=0x8c0f2964u;
  R(4)=0x8c2fb6a8u;
  { c->pr=0x8c0f2056u; R(5)=0x40u; f_8c0f2964(c); }
  R(3)=0x8c0f27a0u;
  { c->pr=0x8c0f205cu; R(4)=LD32(R(15)); f_8c0f27a0(c); }
  R(3)=0x8c0f26fcu;
  R(4)=0x8c2fbac8u;
  { c->pr=0x8c0f2064u; R(5)=LD32(R(15)+4); f_8c0f26fc(c); }
  R(2)=0x8c0f2b0cu;
  { c->pr=0x8c0f206au;  f_8c0f2b0c(c); }
  R(0)=0x1a8u;
  R(2)=0x0u;
  R(3)=LD32(R(14));
  R(5)=R(2);
  ST32(R(3)+R(0),R(2));
  R(2)=0x8c0f20ccu;
  R(3)=0x1acu;
  R(4)=LD32(R(14));
  { c->pr=0x8c0f207eu; R(4)+=R(3); f_8c0f20cc(c); }
  R(0)=0x1acu;
  R(3)=LD32(R(14));
  R(1)=0x8c2fa918u;
  R(2)=LD32(R(3)+R(0));
  R(0)=0x0u;
  ST32(R(1),R(2));
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f20cc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(6)=0x34u;
  R(7)=0x8c0f44acu;
  c->macl=R(5)*R(6);
  R(3)=LD32(R(7));
  R(14)=0x0u;
  ST32(R(15)+8,R(3));
  R(3)+=0x4u;
  R(5)=c->macl;
  R(5)+=R(3);
  R(0)=LD32(R(5)+40);
  c->t=(int32_t)R(0)==1;
  { uint32_t k=!c->t; R(13)=R(14); if(k) goto L8c0f20f2; }
  R(13)=0x90101u;
  {  goto L8c0f21cc; }
L8c0f20f2:;
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
  R(3)=LD32(R(5));
  R(2)=LD32(R(15)+8);
  c->macl=R(3)*R(6);
  ST32(R(15),R(3));
  R(2)+=0x4u;
  R(1)=LD32(R(15));
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3),R(1));
  R(2)=LD32(R(5));
  R(3)=LD32(R(7));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+40,R(14));
  R(3)=LD32(R(5));
  R(2)=LD32(R(7));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+44,R(14));
  R(2)=LD32(R(5));
  R(3)=LD32(R(7));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+48,R(14));
  R(3)=LD32(R(5));
  R(2)=LD32(R(7));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+4,R(14));
  R(2)=LD32(R(5));
  R(3)=LD32(R(7));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+8,R(14));
  R(3)=LD32(R(5));
  R(2)=LD32(R(7));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+12,R(14));
  R(2)=LD32(R(5));
  R(3)=LD32(R(7));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+16,R(14));
  R(3)=LD32(R(5));
  R(2)=LD32(R(7));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=c->macl;
  R(3)+=R(2);
  ST32(R(3)+20,R(14));
  R(1)=0x3u;
  R(2)=LD32(R(5));
  R(3)=LD32(R(7));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+24,R(1));
  R(2)=LD32(R(5));
  R(3)=LD32(R(7));
  c->macl=R(2)*R(6);
  R(3)+=0x4u;
  R(2)=c->macl;
  R(2)+=R(3);
  ST32(R(2)+28,R(14));
  R(3)=LD32(R(5));
  R(2)=LD32(R(7));
  c->macl=R(3)*R(6);
  R(2)+=0x4u;
  R(3)=0x1u;
  R(6)=c->macl;
  R(6)+=R(2);
  R(2)=sh4_getsr(c);
  ST32(R(6)+32,R(14));
  ST32(R(5)+40,R(3));
  R(3)=0xffffff0fu;
  ST32(R(4),R(5));
  R(0)=LD32(R(15)+4);
  R(0)&=0xfu;
  R(0)<<=2;
  R(0)<<=2;
  R(2)&=R(3);
  R(0)|=R(2);
  sh4_setsr(c,R(0));
L8c0f21cc:;
  R(0)=R(13);
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f21e0(SH4Ctx *c) {
  R(3)=0x1fffffe0u;
  R(2)=0x1ffffe0u;
  R(6)&=R(3);
  R(1)=0x80000000u;
  R(5)&=R(3);
  ST32(R(4)+4,R(5));
  R(5)=0x1u;
  R(7)&=R(2);
  ST32(R(4)+8,R(6));
  R(7)|=R(1);
  ST32(R(4)+12,R(7));
  R(3)=LD32(R(15));
  R(3)&=R(5);
  ST32(R(4)+16,R(3));
  R(0)=LD32(R(15)+4);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f220a;
  R(3)=LD32(R(4)+20);
  R(3)|=R(5);
  { ST32(R(4)+20,R(3)); goto L8c0f2212; }
L8c0f220a:;
  R(0)=LD32(R(4)+20);
  R(3)=0xfffffffdu;
  R(0)&=R(3);
  ST32(R(4)+20,R(0));
L8c0f2212:;
  R(0)=LD32(R(15)+8);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f2220;
  R(0)=LD32(R(4)+20);
  R(0)|=0x4u;
  { ST32(R(4)+20,R(0)); goto L8c0f2228; }
L8c0f2220:;
  R(2)=LD32(R(4)+20);
  R(3)=0xfffffffeu;
  R(2)&=R(3);
  ST32(R(4)+20,R(2));
L8c0f2228:;
  R(0)=LD32(R(4)+20);
  R(0)&=0x7u;
  ST32(R(4)+20,R(0));
  R(3)=LD32(R(15)+12);
  ST32(R(4)+28,R(3));
  R(3)=0x0u;
  R(2)=LD32(R(15)+16);
  ST32(R(4)+32,R(2));
  ST32(R(4)+48,R(3));
  { R(0)=R(3); return; }
}
void f_8c0f2250(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(14)=R(4);
  R(3)=0x8c0f44acu;
  R(12)=0x0u;
  ST32(R(15)+4,R(5));
  R(2)=LD32(R(14));
  R(13)=LD32(R(3));
  R(2)<<=2;
  R(2)<<=2;
  R(13)=LD32(R(13));
  c->t=R(2)>>31;R(2)<<=1;
  R(13)+=R(2);
  R(2)=0x8c0e3e90u;
  { c->pr=0x8c0f2276u; R(5)=R(15); f_8c0e3e90(c); }
  R(0)=LD32(R(15));
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f2282;
  R(12)=0x90180u;
  {  goto L8c0f22d0; }
L8c0f2282:;
  R(5)=LD32(R(14)+12);
  R(3)=0x7fffffffu;
  R(2)=0x8c0cfd4eu;
  R(5)&=R(3);
  { c->pr=0x8c0f228eu; R(4)=LD32(R(14)+8); f_8c0cfd4e(c); }
  R(3)=0x0u;
  ST32(R(13)+20,R(3));
  R(2)=LD32(R(14)+4);
  ST32(R(13),R(2));
  R(3)=LD32(R(14)+8);
  ST32(R(13)+4,R(3));
  R(2)=LD32(R(14)+12);
  ST32(R(13)+8,R(2));
  R(3)=LD32(R(14)+16);
  ST32(R(13)+12,R(3));
  R(1)=LD32(R(15)+4);
  c->t=(R(1)&R(1))==0;
  if(!c->t) goto L8c0f22ac;
  { R(2)=0x0u; goto L8c0f22ae; }
L8c0f22ac:;
  R(2)=0x2u;
L8c0f22ae:;
  R(1)=LD32(R(14)+20);
  R(4)=0x1u;
  R(3)=0x8c0f44acu;
  R(2)|=R(1);
  R(1)=0xdcu;
  ST32(R(13)+16,R(2));
  ST32(R(13)+20,R(4));
  ST32(R(14)+44,R(4));
  R(0)=LD32(R(3));
  R(2)=LD32(R(14));
  R(1)+=R(0);
  R(2)<<=2;
  R(2)+=R(1);
  R(0)=LD32(R(2));
  R(0)+=0x1u;
  ST32(R(2),R(0));
  ST32(R(13)+24,R(4));
L8c0f22d0:;
  R(0)=R(12);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f22f4(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=0x8c0686b8u;
  R(4)=0x8c2fd6ccu;
  R(6)=0x1af8u;
  { c->pr=0x8c0f2300u; R(5)=0x0u; f_8c0686b8(c); }
  R(3)=0x8c2ff1c8u;
  R(4)=0x0u;
  R(2)=0x8c2ff1c4u;
  R(1)=R(4);
  R(0)=0x8c2ff1ccu;
  ST32(R(2),R(4));
  ST32(R(3),R(4));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { ST32(R(0),R(4)); return; }
}
void f_8c0f2314(SH4Ctx *c) {
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
  R(13)=0x0u;
  R(14)=0x8c2fd6ccu;
  R(6)=0x2u;
  R(5)=R(13);
L8c0f2338:;
  R(2)=LD32(R(14));
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0f2348;
  R(2)=0xd7cu;
  R(5)+=0x1u;
  c->t=(int32_t)R(5)>=(int32_t)R(6);
  { uint32_t k=!c->t; R(14)+=R(2); if(k) goto L8c0f2338; }
L8c0f2348:;
  R(0)=R(5);
  c->t=(int32_t)R(0)==2;
  if(!c->t) goto L8c0f2352;
  { R(14)=R(13); goto L8c0f238c; }
L8c0f2352:;
  R(0)=0x208u;
  R(5)=0x0u;
  R(3)=0x8c0686b8u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+R(0),R(13));
  R(0)+=0xfffffff8u;
  R(4)=0x210u;
  R(6)=0xb68u;
  ST32(R(14)+R(0),R(13));
  { c->pr=0x8c0f236au; R(4)+=R(14); f_8c0686b8(c); }
  R(6)=0x100u;
  R(5)=0x0u;
  R(2)=0x8c0686b8u;
  R(4)=R(6);
  R(4)+=0x4u;
  { c->pr=0x8c0f2378u; R(4)+=R(14); f_8c0686b8(c); }
  R(3)=0x8c0b6bd8u;
  R(4)=0x104u;
  { c->pr=0x8c0f2380u; R(4)+=R(14); f_8c0b6bd8(c); }
  R(4)=0x8c2ff1ccu;
  R(2)=0x1u;
  ST32(R(14),R(2));
  R(3)=LD32(R(4));
  R(3)+=0x1u;
  ST32(R(4),R(3));
L8c0f238c:;
  R(0)=LD32(R(15));
  R(2)=sh4_getsr(c);
  R(1)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(2)&=R(1);
  R(0)<<=2;
  R(0)|=R(2);
  sh4_setsr(c,R(0));
  R(0)=R(14);
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f23aa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(0)=0xffffff60u;
  R(15)+=R(0);
  R(10)=R(15);
  R(3)=0x8c0686b8u;
  ST32(R(15)+4,R(5));
  R(5)=0x0u;
  ST32(R(15),R(6));
  R(13)=R(4);
  R(6)=0x98u;
  R(10)+=0x8u;
  R(11)=R(7);
  { c->pr=0x8c0f23d0u; R(4)=R(10); f_8c0686b8(c); }
  R(0)=0x208u;
  R(2)=LD32(R(13)+R(0));
  R(0)+=0x4u;
  R(3)=LD32(R(13)+R(0));
  c->t=R(3)==R(2);
  if(!c->t) goto L8c0f23e0;
  { R(0)=0xffffffffu; goto L8c0f2474; }
L8c0f23e0:;
  R(14)=0x210u;
  R(4)=0x0u;
  R(12)=R(4);
  { R(14)+=R(13); goto L8c0f241e; }
L8c0f2418:;
  R(2)=0x124u;
  R(12)+=0x1u;
  R(14)+=R(2);
L8c0f241e:;
  R(3)=LD32(R(14)+12);
  c->t=(R(3)&R(3))==0;
  if(!c->t) goto L8c0f2418;
  R(0)=0x204u;
  R(2)=0x1u;
  R(6)=0x100u;
  R(11)>>=2;
  ST32(R(14)+8,R(4));
  ST32(R(14)+12,R(2));
  R(5)=R(6);
  R(3)=LD32(R(13)+R(0));
  R(5)+=0x4u;
  R(0)=0x118u;
  R(5)+=R(13);
  ST32(R(14)+20,R(3));
  R(2)=LD32(R(15));
  R(3)=0x8c0685b4u;
  ST32(R(14),R(2));
  ST32(R(14)+4,R(11));
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  ST32(R(14)+16,R(4));
  ST32(R(14)+R(0),R(4));
  R(4)=R(14);
  { c->pr=0x8c0f2452u; R(4)+=0x18u; f_8c0685b4(c); }
  R(2)=0x8c0b6bd8u;
  { c->pr=0x8c0f2458u; R(4)=R(10); f_8c0b6bd8(c); }
  R(3)=0x8c0685b4u;
  R(4)=R(14);
  R(6)=0x100u;
  R(5)=R(10);
  { c->pr=0x8c0f2464u; R(4)+=0x18u; f_8c0685b4(c); }
  R(2)=LD32(R(15));
  R(11)+=0xffffffffu;
  R(11)<<=2;
  R(0)=R(12);
  R(11)+=R(2);
  ST32(R(14)+24,R(11));
  R(3)=LD32(R(15)+4);
  ST32(R(14)+32,R(3));
L8c0f2474:;
  R(1)=0xa0u;
  R(15)+=R(1);
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2486(SH4Ctx *c) {
  R(0)=0x20cu;
  R(2)=0x0u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=R(5);
  R(3)=LD32(R(4)+R(0));
  R(3)+=0xffffffffu;
  ST32(R(4)+R(0),R(3));
  R(0)=0x118u;
  ST32(R(14)+12,R(2));
  R(3)=LD32(R(14)+R(0));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0f24a4;
  R(3)=LD32(R(14)+R(0));
  { uint32_t tg=R(3); {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} sh4_call(c,tg); return; }
L8c0f24a4:;
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f24a8(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x2u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x8c2fd6ccu;
L8c0f24b6:;
  R(3)=LD32(R(14));
  c->t=(R(3)&R(3))==0;
  if(c->t) goto L8c0f24c0;
  { c->pr=0x8c0f24c0u; R(4)=R(14); f_8c0f24d4(c); }
L8c0f24c0:;
  R(2)=0xd7cu;
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(12);
  { uint32_t k=!c->t; R(14)+=R(2); if(k) goto L8c0f24b6; }
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f24d4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=R(4);
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=0x0u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=0x210u;
  { R(14)+=R(13); goto L8c0f24f8; }
L8c0f24e6:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0f24f2;
  R(5)=R(14);
  { c->pr=0x8c0f24f2u; R(4)=R(13); f_8c0f2486(c); }
L8c0f24f2:;
  R(2)=0x124u;
  R(12)+=0x1u;
  R(14)+=R(2);
L8c0f24f8:;
  R(0)=0x208u;
  R(3)=LD32(R(13)+R(0));
  c->t=(int32_t)R(12)>=(int32_t)R(3);
  if(!c->t) goto L8c0f24e6;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(4)=R(13);
  R(3)=0x8c0686b8u;
  R(6)=0xd7cu;
  R(5)=0x0u;
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} { f_8c0686b8(c); return; } }
}
void f_8c0f2512(SH4Ctx *c) {
  R(2)=0x8c2ff1c4u;
  R(0)=0xd78u;
  R(3)=LD32(R(2));
  R(1)=LD32(R(3)+R(0));
  R(3)=0x3u;
  ST32(R(1)+12,R(3));
  { R(4)=0x0u; { f_8c0f25da(c); return; } }
}
void f_8c0f254c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(14)=0x124u;
  R(3)=0x210u;
  c->macl=R(5)*R(14);
  R(3)+=R(4);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=c->macl;
  R(14)+=R(3);
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==1;
  if(!c->t) goto L8c0f2572;
  { c->pr=0x8c0f2566u;  f_8c0f25be(c); }
  R(2)=0x2u;
  R(0)=0x0u;
  ST32(R(14)+12,R(2));
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
L8c0f2572:;
  R(0)=0xffffffffu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2572(SH4Ctx *c) {
  R(0)=0xffffffffu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f257a(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(14)=0x210u;
  R(13)=0x0u;
  R(12)=R(4);
  ST32(R(15),R(5));
  { R(14)+=R(12); goto L8c0f25aa; }
L8c0f2590:;
  R(2)=LD32(R(14)+12);
  c->t=(R(2)&R(2))==0;
  if(c->t) goto L8c0f25a4;
  R(3)=LD32(R(14)+16);
  R(2)=LD32(R(15));
  c->t=(int32_t)R(3)>(int32_t)R(2);
  if(c->t) goto L8c0f25a4;
  R(5)=R(13);
  { c->pr=0x8c0f25a4u; R(4)=R(12); f_8c0f254c(c); }
L8c0f25a4:;
  R(2)=0x124u;
  R(13)+=0x1u;
  R(14)+=R(2);
L8c0f25aa:;
  R(0)=0x208u;
  R(3)=LD32(R(12)+R(0));
  c->t=(int32_t)R(13)>=(int32_t)R(3);
  if(!c->t) goto L8c0f2590;
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f25be(SH4Ctx *c) {
  R(2)=0x124u;
  R(3)=0x210u;
  c->macl=R(5)*R(2);
  R(3)+=R(4);
  R(5)=c->macl;
  R(5)+=R(3);
  R(1)=LD32(R(5)+12);
  c->t=(R(1)&R(1))==0;
  if(c->t) goto L8c0f25d6;
  R(0)=0x204u;
  R(1)=LD32(R(4)+R(0));
  ST32(R(5)+20,R(1));
L8c0f25d6:;
  {  return; }
}
void f_8c0f25da(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(4)>=0;
  R(14)=0x8c2ff1c4u;
  R(0)=0xd78u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(3)=LD32(R(14));
  R(2)=LD32(R(3)+R(0));
  if(!c->t) goto L8c0f25f4;
  R(0)=0x204u;
  R(1)=LD32(R(14));
  R(1)=LD32(R(1)+R(0));
  { R(1)+=R(4); goto L8c0f25f6; }
L8c0f25f4:;
  R(1)=0x7fffffffu;
L8c0f25f6:;
  R(0)=0xd78u;
  R(3)=0x8c0b6bd8u;
  ST32(R(2)+20,R(1));
  R(4)=LD32(R(14));
  R(4)=LD32(R(4)+R(0));
  { c->pr=0x8c0f2604u; R(4)+=0x18u; f_8c0b6bd8(c); }
  c->t=(R(0)&R(0))==0;
  if(!c->t) goto L8c0f2612;
  R(3)=0x8c0b6b64u;
  R(5)=0x1u;
  R(4)=LD32(R(14));
  { c->pr=0x8c0f2612u; R(4)+=0x4u; f_8c0b6b64(c); }
L8c0f2612:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2618(SH4Ctx *c) {
  { R(4)=0x1u; { f_8c0f25da(c); return; } }
}
void f_8c0f261c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(10);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(9);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffffcu;
  R(9)=0x8c2ff1c4u;
  R(13)=R(4);
  R(2)=0x8c2ff1c8u;
  R(4)=R(13);
  R(3)=LD32(R(9));
  R(12)=0x0u;
  R(1)=0x40000u;
  ST32(R(2),R(3));
  R(3)=c->fpscr;
  sh4_setfpscr(c,R(1));
  R(14)=0x210u;
  ST32(R(9),R(13));
  ST32(R(15),R(3));
  R(14)+=R(13);
  R(3)=0x8c0b6bd8u;
  { c->pr=0x8c0f264eu; R(4)+=0x4u; f_8c0b6bd8(c); }
  R(10)=0x8c0b6b64u;
  { R(11)=0x3u; goto L8c0f26be; }
L8c0f2678:;
  R(0)=0xd78u;
  ST32(R(13)+R(0),R(14));
  R(0)=LD32(R(14)+12);
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0f26b8;
  c->t=(int32_t)R(0)==3;
  if(c->t) goto L8c0f2692;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0f269c;
  c->t=(int32_t)R(0)==2;
  if(c->t) goto L8c0f26b2;
  {  goto L8c0f26b8; }
L8c0f2692:;
  R(5)=R(14);
  { c->pr=0x8c0f2698u; R(4)=R(13); f_8c0f2486(c); }
  {  goto L8c0f26b8; }
L8c0f269c:;
  R(0)=0x204u;
  R(3)=LD32(R(14)+20);
  R(2)=LD32(R(13)+R(0));
  c->t=R(3)>R(2);
  if(c->t) goto L8c0f26b8;
  R(4)=R(14);
  R(5)=0x1u;
  { uint32_t tg=R(10); c->pr=0x8c0f26aeu; R(4)+=0x18u; sh4_call(c,tg); }
  {  goto L8c0f26b8; }
L8c0f26b2:;
  R(3)=0x8c0f2512u;
  ST32(R(14)+12,R(11));
  ST32(R(14)+32,R(3));
L8c0f26b8:;
  R(3)=0x124u;
  R(12)+=0x1u;
  R(14)+=R(3);
L8c0f26be:;
  R(0)=0x208u;
  R(2)=LD32(R(13)+R(0));
  c->t=(int32_t)R(12)>=(int32_t)R(2);
  if(!c->t) goto L8c0f2678;
  R(0)=0x204u;
  R(1)=0x8c2ff1c8u;
  R(2)=LD32(R(13)+R(0));
  R(2)+=0x1u;
  ST32(R(13)+R(0),R(2));
  R(3)=LD32(R(1));
  ST32(R(9),R(3));
  R(2)=LD32(R(15));
  sh4_setfpscr(c,R(2));
  R(15)+=0x4u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(9)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(10)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f26fc(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x0u;
  R(14)=0x8c0f4334u;
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  R(12)=R(5);
  {uint32_t v=R(11);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(14));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(11)=R(13); if(k) goto L8c0f271a; }
  R(11)=0xd000001u;
  {  goto L8c0f2764; }
L8c0f271a:;
  R(0)=0x164u;
  R(6)=0x1cu;
  c->macl=R(12)*R(6);
  ST32(R(5)+R(0),R(4));
  R(0)+=0x4u;
  R(3)=LD32(R(14));
  R(2)=0x8c0686b8u;
  ST32(R(3)+R(0),R(12));
  R(0)+=0xcu;
  R(3)=LD32(R(14));
  R(6)=c->macl;
  ST32(R(3)+R(0),R(13));
  R(0)+=0xfffffffcu;
  R(3)=LD32(R(14));
  ST32(R(3)+R(0),R(13));
  R(3)=0x8c2ff1d0u;
  ST32(R(3),R(4));
  { uint32_t tg=R(2); c->pr=0x8c0f2740u; R(5)=0x0u; sh4_call(c,tg); }
  R(3)=0x0u;
  R(6)=0x8c0f4638u;
  c->t=R(3)>=R(12);
  R(5)=R(13);
  { uint32_t k=c->t; R(4)=R(13); if(k) goto L8c0f2764; }
L8c0f274c:;
  R(0)=0x164u;
  R(2)=R(6);
  R(1)=LD32(R(14));
  R(3)=0x8c09c344u;
  R(1)=LD32(R(1)+R(0));
  R(1)+=R(4);
  { c->pr=0x8c0f275cu; R(0)=0x1cu; f_8c09c344(c); }
  R(5)+=0x1u;
  c->t=R(5)>=R(12);
  { uint32_t k=!c->t; R(4)+=0x1cu; if(k) goto L8c0f274c; }
L8c0f2764:;
  c->t=(R(11)&R(11))==0;
  if(c->t) goto L8c0f2770;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f26fcu;
  { c->pr=0x8c0f2770u; R(5)=R(11); f_8c0d6fc8(c); }
L8c0f2770:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(11);
  {uint32_t v=LD32(R(15));R(15)+=4;R(11)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f27a0(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  R(13)=0x8c0f4334u;
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(13));
  c->t=(R(5)&R(5))==0;
  if(!c->t) goto L8c0f27b4;
  R(14)=0xd000001u;
  {  goto L8c0f27da; }
L8c0f27b4:;
  R(3)=0x8c2ff1d4u;
  R(0)=0x158u;
  R(6)=0x200u;
  R(2)=0x8c0686b8u;
  ST32(R(5)+R(0),R(4));
  ST32(R(3),R(4));
  { c->pr=0x8c0f27c4u; R(5)=0x0u; f_8c0686b8(c); }
  R(0)=0x160u;
  R(2)=0x0u;
  R(3)=LD32(R(13));
  ST32(R(3)+R(0),R(2));
  R(2)=0x8c0e2910u;
  R(3)=0x178u;
  R(4)=LD32(R(13));
  { c->pr=0x8c0f27d6u; R(4)+=R(3); f_8c0e2910(c); }
  c->t=(R(0)&R(0))==0;
  R(14)=R(0);
L8c0f27da:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f27e6;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f27a0u;
  { c->pr=0x8c0f27e6u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f27e6:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2814(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff0u;
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
  R(3)=0x8c0ef9a0u;
  R(2)=0x1u;
  { c->pr=0x8c0f2836u; ST32(R(4)+4,R(2)); f_8c0ef9a0(c); }
  R(14)=0x8c0f4334u;
  R(3)=0x0u;
  R(0)=0x190u;
  R(4)=R(15);
  R(2)=LD32(R(14));
  ST32(R(2)+R(0),R(3));
  R(0)=0x18cu;
  R(2)=LD32(R(14));
  R(3)=LD32(R(2)+R(0));
  R(3)+=0x1u;
  ST32(R(2)+R(0),R(3));
  R(2)=0x8c0f2c3cu;
  { c->pr=0x8c0f2852u; R(4)+=0x8u; f_8c0f2c3c(c); }
  R(3)=LD32(R(15)+8);
  c->t=(int32_t)R(3)>0;
  if(!c->t) goto L8c0f2888;
  R(3)=0x8c0f1724u;
  R(5)=R(15);
  R(5)+=0x4u;
  { c->pr=0x8c0f2862u; R(4)=R(15); f_8c0f1724(c); }
  R(1)=0x1a8u;
  R(0)=LD32(R(14));
  R(0)=LD32(R(1)+R(0));
  c->t=(int32_t)R(0)==0;
  if(c->t) goto L8c0f2874;
  c->t=(int32_t)R(0)==1;
  if(c->t) goto L8c0f2880;
  {  goto L8c0f2888; }
L8c0f2874:;
  R(3)=0x8c0efa20u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0f287cu; R(4)=LD32(R(15)); f_8c0efa20(c); }
  {  goto L8c0f2888; }
L8c0f2880:;
  R(3)=0x8c0f15e4u;
  R(5)=LD32(R(15)+4);
  { c->pr=0x8c0f2888u; R(4)=LD32(R(15)); f_8c0f15e4(c); }
L8c0f2888:;
  R(0)=LD32(R(15)+12);
  R(3)=sh4_getsr(c);
  R(2)=0xffffff0fu;
  R(0)&=0xfu;
  R(0)<<=2;
  R(3)&=R(2);
  R(0)<<=2;
  R(0)|=R(3);
  sh4_setsr(c,R(0));
  R(15)+=0x10u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f28c4(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(6)=0x8c0f4334u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(13)=LD32(R(6));
  c->t=(R(13)&R(13))==0;
  { uint32_t k=!c->t; R(14)=R(7); if(k) goto L8c0f28de; }
  R(14)=0xd000001u;
  {  goto L8c0f292c; }
L8c0f28de:;
  R(0)=0x17cu;
  c->t=(int32_t)R(5)>0;
  R(2)=0x17cu;
  ST32(R(13)+R(0),R(4));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  R(13)=R(7);
  R(12)=0x8c0f4654u;
  ST32(R(3)+R(0),R(5));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  ST32(R(3)+R(0),R(7));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  ST32(R(3)+R(0),R(7));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  ST32(R(3)+R(0),R(7));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  ST32(R(3)+R(0),R(7));
  R(3)=LD32(R(6));
  R(2)+=R(3);
  R(3)=0x8c2ff1d8u;
  ST32(R(3),R(2));
  { uint32_t k=!c->t; R(4)=R(7); if(k) goto L8c0f292c; }
L8c0f2914:;
  R(0)=0x17cu;
  R(2)=R(12);
  R(1)=LD32(R(6));
  R(3)=0x8c09c338u;
  R(1)=LD32(R(1)+R(0));
  R(1)+=R(4);
  { c->pr=0x8c0f2924u; R(0)=0x20u; f_8c09c338(c); }
  R(13)+=0x1u;
  c->t=(int32_t)R(13)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(4)+=0x20u; if(k) goto L8c0f2914; }
L8c0f292c:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f2938;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f28c4u;
  { c->pr=0x8c0f2938u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f2938:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2964(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(7)=0x0u;
  R(6)=0x8c0f4334u;
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(12);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(14)=LD32(R(6));
  c->t=(R(14)&R(14))==0;
  { uint32_t k=!c->t; R(13)=R(7); if(k) goto L8c0f297e; }
  R(13)=0xd000001u;
  {  goto L8c0f29ce; }
L8c0f297e:;
  R(0)=0x194u;
  c->t=(int32_t)R(5)>0;
  R(2)=0x194u;
  ST32(R(14)+R(0),R(4));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  R(14)=R(7);
  R(1)=0x8c2ff1dcu;
  ST32(R(3)+R(0),R(5));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  R(12)=0x8c0f4674u;
  ST32(R(3)+R(0),R(7));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  ST32(R(3)+R(0),R(7));
  R(0)+=0x4u;
  R(3)=LD32(R(6));
  ST32(R(3)+R(0),R(7));
  R(3)=LD32(R(6));
  R(2)+=R(3);
  R(3)=0x8c2ff1e4u;
  ST32(R(3),R(2));
  R(3)=0x8c2ff1e0u;
  ST32(R(1),R(4));
  ST32(R(3),R(5));
  { uint32_t k=!c->t; R(4)=R(7); if(k) goto L8c0f29ce; }
L8c0f29b6:;
  R(0)=0x194u;
  R(2)=R(12);
  R(1)=LD32(R(6));
  R(3)=0x8c09c338u;
  R(1)=LD32(R(1)+R(0));
  R(1)+=R(4);
  { c->pr=0x8c0f29c6u; R(0)=0x8u; f_8c09c338(c); }
  R(14)+=0x1u;
  c->t=(int32_t)R(14)>=(int32_t)R(5);
  { uint32_t k=!c->t; R(4)+=0x8u; if(k) goto L8c0f29b6; }
L8c0f29ce:;
  c->t=(R(13)&R(13))==0;
  if(c->t) goto L8c0f29da;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f2964u;
  { c->pr=0x8c0f29dau; R(5)=R(13); f_8c0d6fc8(c); }
L8c0f29da:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(13);
  {uint32_t v=LD32(R(15));R(15)+=4;R(12)=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2a0c(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x3u;
  R(13)=R(7);
  c->t=(R(3)&R(4))==0;
  ST32(R(15)+4,R(5));
  ST32(R(15),R(6));
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f2a28; }
  R(0)=LD32(R(15));
  c->t=(R(0)&0x3)==0;
  if(c->t) goto L8c0f2a2e;
L8c0f2a28:;
  R(14)=0x7fffffffu;
  {  goto L8c0f2a60; }
L8c0f2a2e:;
  R(3)=0x1u;
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=R(3);R(15)-=4;ST32(R(15),v);}
  R(7)=LD32(R(15)+8);
  c->t=(int32_t)R(7)>=0;
  if(c->t) goto L8c0f2a3c;
  R(7)+=0x3u;
L8c0f2a3c:;
  R(2)=0xa0800000u;
  c->t=R(7)&1;R(7)=(uint32_t)((int32_t)R(7)>>1);
  R(5)=LD32(R(15)+12);
  c->t=R(7)&1;R(7)=(uint32_t)((int32_t)R(7)>>1);
  R(5)+=R(2);
  R(2)=0x8c0d8220u;
  { c->pr=0x8c0f2a4cu; R(6)=0x4u; f_8c0d8220(c); }
  R(15)+=0x8u;
  R(3)=0x8c2fd6c8u;
  c->t=(R(13)&R(13))==0;
  { uint32_t k=c->t; ST32(R(3),R(0)); if(k) goto L8c0f2a60; }
  R(0)=R(13);
  c->t=(int32_t)R(0)==-1;
  if(c->t) goto L8c0f2a60;
  { uint32_t tg=R(13); c->pr=0x8c0f2a60u; R(4)=LD32(R(15)+20); sh4_call(c,tg); }
L8c0f2a60:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f2a6c;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f2a0cu;
  { c->pr=0x8c0f2a6cu; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f2a6c:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2a90(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff4u;
  R(3)=0x200000u;
  c->t=(int32_t)R(4)>=(int32_t)R(3);
  { uint32_t k=c->t; ST32(R(15),R(5)); if(k) goto L8c0f2abc; }
  R(1)=0x3u;
  R(3)=0x8c0e2c38u;
  R(2)=0xfffffffcu;
  R(5)=R(15);
  R(1)&=R(4);
  ST32(R(15)+4,R(1));
  R(4)&=R(2);
  { c->pr=0x8c0f2aaeu; R(5)+=0x8u; f_8c0e2c38(c); }
  R(1)=R(15);
  R(3)=LD32(R(15)+4);
  R(1)+=0x8u;
  R(2)=LD32(R(15));
  R(1)+=R(3);
  R(1)=(int32_t)(int8_t)LD8(R(1));
  ST8(R(2),R(1));
L8c0f2abc:;
  R(15)+=0xcu;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0f2acc(SH4Ctx *c) {
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(3)=0x200000u;
  R(2)=R(4);
  ST32(R(15)+4,R(5));
  c->t=(int32_t)R(2)>=(int32_t)R(3);
  { uint32_t k=c->t; ST32(R(15),R(4)); if(k) goto L8c0f2af6; }
  R(2)=0x0u;
  R(1)=0xa0800000u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(7)=0x1u;
  {uint32_t v=R(2);R(15)-=4;ST32(R(15),v);}
  R(6)=0x4u;
  R(5)=LD32(R(15)+8);
  R(4)=R(15);
  R(5)+=R(1);
  R(1)=0x8c0d8220u;
  { c->pr=0x8c0f2af4u; R(4)+=0xcu; f_8c0d8220(c); }
  R(15)+=0x8u;
L8c0f2af6:;
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { R(0)=0x0u; return; }
}
void f_8c0f2b0c(SH4Ctx *c) {
  R(5)=0x0u;
  R(4)=0x8c0f4334u;
  R(7)=0xa8u;
  R(6)=R(5);
  {uint32_t v=R(13);R(15)-=4;ST32(R(15),v);}
L8c0f2b16:;
  R(2)=LD32(R(4));
  R(0)=R(5);
  R(2)+=R(6);
  ST8(R(2)+1,R(0));
  R(2)=LD32(R(4));
  R(2)+=R(6);
  R(6)+=0x8u;
  c->t=R(6)>=R(7);
  { uint32_t k=!c->t; ST32(R(2)+4,R(0)); if(k) goto L8c0f2b16; }
  R(7)=R(5);
  R(6)=0x8u;
  R(1)=0x1u;
L8c0f2b30:;
  R(13)=R(7);
  R(3)=LD32(R(4));
  R(13)<<=2;
  R(0)=R(7);
  c->t=R(13)>>31;R(13)<<=1;
  R(3)+=0x8u;
  R(7)+=0x1u;
  R(3)+=R(13);
  c->t=R(7)>=R(6);
  ST8(R(3)+1,R(0));
  R(2)=LD32(R(4));
  R(2)+=0x8u;
  R(13)+=R(2);
  { uint32_t k=!c->t; ST8(R(13),R(1)); if(k) goto L8c0f2b30; }
  R(7)=R(5);
  R(13)=0x2u;
L8c0f2b52:;
  R(1)=R(7);
  R(3)=LD32(R(4));
  R(1)<<=2;
  R(0)=R(7);
  c->t=R(1)>>31;R(1)<<=1;
  R(3)+=0x48u;
  R(7)+=0x1u;
  R(3)+=R(1);
  c->t=R(7)>=R(6);
  ST8(R(3)+1,R(0));
  R(2)=LD32(R(4));
  R(2)+=0x48u;
  R(1)+=R(2);
  { uint32_t k=!c->t; ST8(R(1),R(13)); if(k) goto L8c0f2b52; }
  R(6)=R(5);
  R(1)=0x3u;
  R(13)=0x4u;
L8c0f2b76:;
  R(3)=0x88u;
  R(7)=R(6);
  R(2)=LD32(R(4));
  R(7)<<=2;
  c->t=R(7)>>31;R(7)<<=1;
  R(0)=R(6);
  R(3)+=R(2);
  R(2)=0x88u;
  R(3)+=R(7);
  ST8(R(3)+1,R(0));
  R(6)+=0x1u;
  R(3)=LD32(R(4));
  c->t=R(6)>=R(13);
  R(2)+=R(3);
  R(7)+=R(2);
  { uint32_t k=!c->t; ST8(R(7),R(1)); if(k) goto L8c0f2b76; }
  R(2)=LD32(R(4));
  R(0)=R(5);
  ST8(R(2)+1,R(0));
  R(2)=0x9u;
  R(3)=LD32(R(4));
  R(0)=0x0u;
  ST8(R(3),R(2));
  { {uint32_t v=LD32(R(15));R(15)+=4;R(13)=v;} return; }
}
void f_8c0f2baa(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  R(4)=(uint32_t)(int32_t)(int8_t)R(5);
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  c->t=(int32_t)R(4)>=0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f2bbc; }
  R(2)=0x20u;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c0f2bbe;
L8c0f2bbc:;
  R(14)=0x3000001u;
L8c0f2bbe:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f2bca;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f2baau;
  { c->pr=0x8c0f2bcau; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f2bca:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2bd2(SH4Ctx *c) {
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(15)+=0xfffffff8u;
  R(0)=R(5);
  ST32(R(15),R(4));
  ST8(R(15)+4,R(0));
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(4)=R(0);
  c->t=(int32_t)R(4)>=0;
  if(!c->t) goto L8c0f2bec;
  R(2)=0x10u;
  c->t=(int32_t)R(4)>(int32_t)R(2);
  if(!c->t) goto L8c0f2bf2;
L8c0f2bec:;
  R(14)=0x3000001u;
  {  goto L8c0f2c0a; }
L8c0f2bf2:;
  R(3)=0x8c0f1aacu;
  { c->pr=0x8c0f2bf8u; R(4)=LD32(R(15)); f_8c0f1aac(c); }
  c->t=(R(0)&R(0))==0;
  R(14)=c->t;
  R(14)+=0xffffffffu;
  R(14)=0u-R(14);
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f2c16;
  R(0)=(int32_t)(int8_t)LD8(R(15)+4);
  R(3)=LD32(R(15));
  ST8(R(3)+2,R(0));
L8c0f2c0a:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f2c16;
  R(2)=0x8c0d6fc8u;
  R(4)=0x8c0f2bd2u;
  { c->pr=0x8c0f2c16u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f2c16:;
  R(0)=R(14);
  R(15)+=0x8u;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
void f_8c0f2c3c(SH4Ctx *c) {
  R(3)=0x8c0f4334u;
  {uint32_t v=R(14);R(15)-=4;ST32(R(15),v);}
  {uint32_t v=c->pr;R(15)-=4;ST32(R(15),v);}
  R(5)=LD32(R(3));
  c->t=(R(5)&R(5))==0;
  { uint32_t k=!c->t; R(14)=0x0u; if(k) goto L8c0f2c50; }
  R(14)=0xd000001u;
  {  goto L8c0f2c56; }
L8c0f2c50:;
  R(0)=0x1a4u;
  R(3)=LD32(R(5)+R(0));
  ST32(R(4),R(3));
L8c0f2c56:;
  c->t=(R(14)&R(14))==0;
  if(c->t) goto L8c0f2c62;
  R(3)=0x8c0d6fc8u;
  R(4)=0x8c0f2c3cu;
  { c->pr=0x8c0f2c62u; R(5)=R(14); f_8c0d6fc8(c); }
L8c0f2c62:;
  {uint32_t v=LD32(R(15));R(15)+=4;c->pr=v;}
  R(0)=R(14);
  { {uint32_t v=LD32(R(15));R(15)+=4;R(14)=v;} return; }
}
