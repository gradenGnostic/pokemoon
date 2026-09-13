// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D3744
void Func0035BE88(uint32_t, uint32_t, uint32_t, uint32_t);
void* Func00105500(uint32_t, void*);
uint8_t* Func00354600(uint8_t*, uint32_t, void*);
extern "C" void YellowAuto_002d3744(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3App4Tool8ListMenu7AddItemEjPN4gfl23str6StrBufE");
extern "C" void YellowAuto_002d3744(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (*(int32_t*)(arg0 + 0x354) >= (int32_t)*(uint8_t*)(arg0 + 0x95))
Func0035BE88(0, 0, 0, 0);
if (*(int32_t*)(arg0 + 0x354) >= (int32_t)*(uint8_t*)(arg0 + 0x95))
return;
uint32_t* slot = *(uint32_t**)(arg0 + *(int32_t*)(arg0 + 0x354) * 4 + 0x14C);
*slot = arg1;
void* heap = *(void**)(*(uint8_t**)(arg0 + 0x84) + 4);
void* mem = Func00105500(16, heap);
uint8_t* str = (uint8_t*)0;
if (mem != (void*)0)
str = Func00354600((uint8_t*)mem, arg2, heap);
*(uint8_t**)((uint8_t*)slot + 4) = str;
*(int32_t*)(arg0 + 0x354) = *(int32_t*)(arg0 + 0x354) + 1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D2764
extern "C" void YellowAuto_002d2764(uint8_t* arg0) __asm__("_ZN3App4Tool8ListMenu10DeleteMenuEv");
extern "C" void YellowAuto_002d2764(uint8_t* arg0) {
*(uint16_t*)(arg0 + 0x35C) = 4;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D397C
uint8_t* Func002E7FB8(uint8_t*, uint32_t, uint32_t, uint32_t);
extern uint32_t DAT_002D3B80;
void* Func00105500(uint32_t, void*);
void* Func003BFDE8(void*);
extern "C" uint8_t* YellowAuto_002d397c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3App4Tool8ListMenuC1EPKNS1_5PARAME");
extern "C" uint8_t* YellowAuto_002d397c(uint8_t* arg0, const uint8_t* arg1) {
Func002E7FB8(arg0, *(uint32_t*)arg1, *(uint32_t*)(*(uint8_t**)arg1 + 16), *(uint32_t*)(*(uint8_t**)arg1 + 20));
uint32_t vt = DAT_002D3B80;
*(uint32_t*)arg0 = vt;
*(uint32_t*)(arg0 + 0x80) = vt + 0x60;
*(uint32_t*)(arg0 + 0xB4) = 0;
*(int32_t*)(arg0 + 0xC8) = -1;
*(uint32_t*)(arg0 + 0xC4) = 0;
*(uint8_t*)(arg0 + 0xCC) = 16;
*(uint32_t*)(arg0 + 0xD0) = 0;
*(uint8_t*)(arg0 + 0xD4) = 255;
*(uint32_t*)(arg0 + 0xD8) = 0;
*(uint8_t*)(arg0 + 0xDC) = 0;
*(uint8_t*)(arg0 + 0xDD) = 0;
*(uint8_t*)(arg0 + 0xDE) = 1;
*(uint32_t*)(arg0 + 0xE0) = 0;
*(uint32_t*)(arg0 + 0xE4) = 0;
*(uint32_t*)(arg0 + 0xE8) = 0;
*(uint32_t*)(arg0 + 0xEC) = 0;
*(uint32_t*)(arg0 + 0xF0) = 0;
*(int32_t*)(arg0 + 0xF4) = -1;
*(int32_t*)(arg0 + 0xF8) = -1;
*(uint8_t*)(arg0 + 0xFC) = 255;
*(uint8_t*)(arg0 + 0xFD) = 16;
*(uint32_t*)(arg0 + 0x100) = 0;
*(uint32_t*)(arg0 + 0x104) = 0;
*(uint32_t*)(arg0 + 0x108) = 0;
*(uint32_t*)(arg0 + 0x10C) = 0;
*(uint32_t*)(arg0 + 0x110) = 4;
*(uint32_t*)(arg0 + 0x114) = 0;
*(uint32_t*)(arg0 + 0x118) = 0;
*(uint8_t*)(arg0 + 0x11C) = 0;
*(uint32_t*)(arg0 + 0x120) = 0;
*(uint32_t*)(arg0 + 0x124) = 0;
*(uint32_t*)(arg0 + 0x128) = 0;
*(uint32_t*)(arg0 + 0x12C) = 0;
*(int32_t*)(arg0 + 0x130) = -1;
*(uint8_t*)(arg0 + 0x134) = 16;
*(uint32_t*)(arg0 + 0x138) = 0;
*(uint8_t*)(arg0 + 0x13C) = 1;
*(uint32_t*)(arg0 + 0x140) = 0;
*(uint32_t*)(arg0 + 0x144) = 0;
*(uint32_t*)(arg0 + 0x34C) = 0;
*(uint32_t*)(arg0 + 0x350) = 0;
*(uint32_t*)(arg0 + 0x354) = 0;
*(uint32_t*)(arg0 + 0x358) = 0;
*(uint16_t*)(arg0 + 0x35C) = 0;
*(uint16_t*)(arg0 + 0x35E) = 0;
for (int32_t i = 0; i < 12; i = i + 1)
*(uint32_t*)(arg0 + 0x84 + i * 4) = *(uint32_t*)(arg1 + i * 4);
void* heap = *(void**)(*(uint8_t**)arg1 + 4);
uint8_t cap = *(uint8_t*)(arg0 + 0x95);
for (int32_t i = 0; i < (int32_t)cap; i = i + 1)
*(void**)(arg0 + 0x14C + i * 4) = Func00105500(8, heap);
for (int32_t i = (int32_t)cap; i < 128; i = i + 1)
*(void**)(arg0 + 0x14C + i * 4) = (void*)0;
*(void**)(arg0 + 0xBC) = Func003BFDE8(heap);
*(uint32_t*)(arg0 + 0x360) = 0;
*(uint32_t*)(arg0 + 0x148) = 4;
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D34C4
extern "C" void YellowAuto_002d34c4(uint8_t* arg0) __asm__("_ZN3App4Tool8ListMenu5StartEv");
extern "C" void YellowAuto_002d34c4(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x90) == 0) {
*(uint32_t*)(arg0 + 0xC8) = 0x47;
*(uint32_t*)(arg0 + 0xD0) = ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8)) + 0x34)))(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8));
*(uint32_t*)(arg0 + 0xD8) = ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8)) + 0x34)))(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8));
*(uint8_t**)(arg0 + 0x100) = (uint8_t*)(arg0 + 0xC0);
*(uint32_t*)(arg0 + 0xF4) = 0x47;
*(uint32_t*)(arg0 + 0xF8) = 0;
*(uint32_t*)(arg0 + 0x10C) = *(uint32_t*)(*(uint8_t**)(arg0 + 0x84) + 8);
*(uint32_t*)(arg0 + 0x114) = ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8)) + 0x34)))(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8));
*(uint32_t*)(arg0 + 0x118) = ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8)) + 0x34)))(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8));
*(uint32_t*)(arg0 + 0x110) = 0x80;
*(uint32_t*)(arg0 + 0x130) = 0x47;
*(uint32_t*)(arg0 + 0x138) = ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8)) + 0x34)))(*(uint8_t**)(*(uint8_t**)(arg0 + 0x84) + 8));
*(uint32_t*)(arg0 + 0x148) = 0;
} else {
*(uint32_t*)(arg0 + 0x148) = 4;
}
*(uint16_t*)(arg0 + 0x35C) = 1;
return;
}
#endif
