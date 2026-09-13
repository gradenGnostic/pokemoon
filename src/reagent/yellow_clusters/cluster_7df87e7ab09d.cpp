// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00327714
void FUN_0034f154(uint8_t*);
void* FUN_0034f2a8(uint32_t);
uint8_t* FUN_0032c164(uint8_t*);
void FUN_0034f1c8();
extern "C" uint8_t* YellowAuto_00327714(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8instance15InstanceCreator15CreateLightNodeEPNS_3gfx12IGLAllocatorE");
extern "C" uint8_t* YellowAuto_00327714(uint8_t* arg0) {
FUN_0034f154(arg0); uint8_t* a = (uint8_t*)FUN_0034f2a8((uint32_t)0x138); uint8_t* b = (uint8_t*)0; if (a != (uint8_t*)0) b = FUN_0032c164(a); FUN_0034f1c8(); return b;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003286C0
void FUN_0034f154(uint8_t*);
void* FUN_0034f2a8(uint32_t);
uint8_t* FUN_0032b068(uint8_t*, uint8_t*);
void FUN_003283f4(uint8_t*, uint8_t*, uint8_t*);
void FUN_00323b7c(uint8_t*);
void FUN_0034f1c8();
extern "C" uint8_t* YellowAuto_003286c0(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) __asm__("_ZN4gfl215renderingengine10scenegraph8instance15InstanceCreator23CreateModelInstanceNodeEPNS_3gfx12IGLAllocatorEPNS1_8resource12ResourceNodeEPNS1_7DagNodeE");
extern "C" uint8_t* YellowAuto_003286c0(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) {
FUN_0034f154(arg0); uint8_t* a = (uint8_t*)FUN_0034f2a8((uint32_t)0x140); uint8_t* b = (uint8_t*)0; if (a != (uint8_t*)0) b = FUN_0032b068(a, (uint8_t*)0); FUN_003283f4(b, arg1, arg2); FUN_00323b7c(b); FUN_0034f1c8(); return b;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00328640
void FUN_0034f154(uint8_t*);
void* FUN_0034f2a8(uint32_t);
uint8_t* FUN_0032b068(uint8_t*, uint8_t*);
void FUN_003282b4(uint8_t*, uint8_t*);
void FUN_00323b7c(uint8_t*);
void FUN_0034f1c8();
extern "C" uint8_t* YellowAuto_00328640(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance15InstanceCreator23CreateModelInstanceNodeEPNS_3gfx12IGLAllocatorEPNS1_8resource12ResourceNodeE");
extern "C" uint8_t* YellowAuto_00328640(uint8_t* arg0, uint8_t* arg1) {
FUN_0034f154(arg0); uint8_t* a = (uint8_t*)FUN_0034f2a8((uint32_t)0x140); uint8_t* b = (uint8_t*)0; if (a != (uint8_t*)0) b = FUN_0032b068(a, (uint8_t*)0); FUN_003282b4(b, arg1); FUN_00323b7c(b); FUN_0034f1c8(); return b;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00327D5C
void lock_func(uint8_t*);
void unlock_func();
uint8_t* alloc_func(uint32_t);
uint8_t* init_func(uint8_t*);
void addchild_func(uint8_t*);
void link_func(uint8_t*, uint8_t*);
uint8_t* makelight_func(uint8_t*, uint8_t*);
uint8_t* makecamera_func(uint8_t*, uint8_t*);
void iter0_func(uint32_t, uint8_t*, uint32_t);
void iter1_func(uint32_t, uint8_t*, uint32_t);
void iter2_func(uint32_t, uint8_t*, uint32_t);
extern "C" uint8_t* YellowAuto_00327d5c(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance15InstanceCreator17CreateDrawEnvNodeEPNS_3gfx12IGLAllocatorEPNS1_8resource12ResourceNodeE");
extern "C" uint8_t* YellowAuto_00327d5c(uint8_t* arg0, uint8_t* arg1) {
lock_func(arg0);
if (arg1 == (uint8_t*)0) {
uint8_t* t0 = alloc_func(0x980);
uint8_t* d0 = (uint8_t*)0;
if (t0 != (uint8_t*)0) {
d0 = init_func(t0);
}
addchild_func(d0);
unlock_func();
return d0;
}
uint32_t w0 = *(uint32_t*)(*(uint32_t*)0x328104);
uint8_t* in0 = *(uint8_t**)(arg1 + 8);
uint8_t* (*gf0)(uint8_t*) = *(uint8_t* (**)(uint8_t*))(in0 + 8);
uint8_t* hd0 = gf0(arg1 + 8);
uint8_t* f0 = (uint8_t*)0;
uint8_t* cu0 = hd0;
while (cu0 != (uint8_t*)0) {
if (*(uint32_t*)cu0 == w0) {
f0 = arg1;
break;
}
cu0 = *(uint8_t**)(cu0 + 4);
}
uint8_t* keep = f0;
uint8_t sb0[8];
*(uint32_t*)sb0 = *(uint32_t*)0x328100;
*(uint32_t*)(sb0 + 4) = 0;
if (*(uint32_t*)(arg1 + 16) != 0) {
iter0_func(*(uint32_t*)(arg1 + 16), sb0, 63);
}
if (keep == (uint8_t*)0) {
unlock_func();
return (uint8_t*)0;
}
uint8_t* t1 = alloc_func(0x980);
uint8_t* d1 = (uint8_t*)0;
if (t1 != (uint8_t*)0) {
d1 = init_func(t1);
}
link_func(d1, keep);
uint32_t w1 = *(uint32_t*)(*(uint32_t*)0x32810c);
uint8_t* in1 = *(uint8_t**)(arg1 + 8);
uint8_t* (*gf1)(uint8_t*) = *(uint8_t* (**)(uint8_t*))(in1 + 8);
uint8_t* hd1 = gf1(arg1 + 8);
uint8_t* f1 = (uint8_t*)0;
uint8_t* cu1 = hd1;
while (cu1 != (uint8_t*)0) {
if (*(uint32_t*)cu1 == w1) {
f1 = arg1;
break;
}
cu1 = *(uint8_t**)(cu1 + 4);
}
uint8_t sb1[8];
*(uint32_t*)sb1 = *(uint32_t*)0x328108;
*(uint32_t*)(sb1 + 4) = (uint32_t)d1;
if (f1 != (uint8_t*)0) {
uint8_t* l = makelight_func(arg0, f1);
uint32_t off = *(uint32_t*)(l + 124);
*(uint8_t**)(d1 + off * 4 + 360) = l;
uint32_t v = *(uint32_t*)d1;
(*(void (**)(uint8_t*, uint8_t*))(v + 16))(d1, l);
}
if (*(uint32_t*)(arg1 + 16) != 0) {
iter1_func(*(uint32_t*)(arg1 + 16), sb1, 63);
}
uint32_t w2 = *(uint32_t*)(*(uint32_t*)0x328114);
uint8_t* in2 = *(uint8_t**)(arg1 + 8);
uint8_t* (*gf2)(uint8_t*) = *(uint8_t* (**)(uint8_t*))(in2 + 8);
uint8_t* hd2 = gf2(arg1 + 8);
uint8_t* f2 = (uint8_t*)0;
uint8_t* cu2 = hd2;
while (cu2 != (uint8_t*)0) {
if (*(uint32_t*)cu2 == w2) {
f2 = arg1;
break;
}
cu2 = *(uint8_t**)(cu2 + 4);
}
uint8_t sb2[8];
*(uint32_t*)sb2 = *(uint32_t*)0x328110;
*(uint32_t*)(sb2 + 4) = (uint32_t)d1;
if (f2 != (uint8_t*)0) {
uint8_t* c = makecamera_func(arg0, f2);
uint32_t* fr = *(uint32_t**)(d1 + 532);
uint32_t nx = *(fr + 2);
uint32_t fp = *fr;
if (fp != 0) {
*(uint32_t*)fp = 0;
}
*(uint32_t*)fp = (uint32_t)c;
*(fr + 1) = 0;
*(fr + 2) = 0;
*(fr + 3) = *(uint32_t*)(d1 + 540);
uint32_t cur = *(uint32_t*)(d1 + 536);
if (cur != 0) {
*(uint32_t**)(cur + 4) = fr;
*(fr + 2) = cur;
}
*(uint32_t**)(d1 + 536) = fr;
uint32_t base = *(uint32_t*)(d1 + 524);
uint32_t idx = *(uint32_t*)(d1 + 540);
*(uint32_t**)(base + idx * 4) = fr;
*(uint32_t*)(d1 + 532) = nx;
*(uint32_t*)(d1 + 540) = idx + 1;
if (nx != 0) {
*(uint32_t*)(nx + 4) = 0;
}
uint32_t v2 = *(uint32_t*)d1;
(*(void (**)(uint8_t*, uint8_t*))(v2 + 16))(d1, c);
}
if (*(uint32_t*)(arg1 + 16) != 0) {
iter2_func(*(uint32_t*)(arg1 + 16), sb2, 63);
}
addchild_func(d1);
unlock_func();
return d1;
}
#endif
