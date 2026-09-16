// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003274B4
extern uint32_t* dat_0032752c;
void sub_00324B48(uint8_t*, uint8_t*);
void sub_0035BE88(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_003274b4(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance13TransformNode8AddChildEPNS1_7DagNodeE");
extern "C" void YellowAuto_003274b4(uint8_t* arg0, uint8_t* arg1) {
uint32_t expected = *dat_0032752c;
uint8_t* subobj = arg1 + 8;
uint32_t* vptr = *(uint32_t**)subobj;
void* fnaddr = *(void**)((uint8_t*)vptr + 8);
uint32_t* cur = ((uint32_t* (*)(uint8_t*))fnaddr)(subobj);
uint8_t* kept = arg1;
if (cur == (uint32_t*)0)
kept = (uint8_t*)0;
while (cur != (uint32_t*)0 && *(uint32_t*)cur != expected)
cur = *(uint32_t**)((uint8_t*)cur + 4);
if (cur == (uint32_t*)0)
sub_0035BE88(0, 0, 0, 0);
if (cur == (uint32_t*)0)
return;
if (kept == (uint8_t*)0)
sub_0035BE88(0, 0, 0, 0);
if (kept == (uint8_t*)0)
return;
sub_00324B48(arg0, kept);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00327530
uint8_t* FUN_003270e0(uint8_t*);
void* FUN_00100050(uint8_t*, void*, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_00327530(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8instance13TransformNodeC1Ev");
extern "C" uint8_t* YellowAuto_00327530(uint8_t* arg0) {
uint32_t arg1[12];
arg0 = FUN_003270e0(arg0);
*(uint32_t*)(arg0 + 0) = *(uint32_t*)0x003276A0;
*(uint32_t*)(arg0 + 8) = *(uint32_t*)0x003276A0 + 32;
*(uint32_t*)(arg0 + 32) = 0;
*(uint32_t*)(arg0 + 36) = 0;
*(uint32_t*)(arg0 + 40) = 0;
*(uint32_t*)(arg0 + 44) = 0x3F800000;
*(uint32_t*)(arg0 + 48) = 0x3F800000;
*(uint32_t*)(arg0 + 52) = 0x3F800000;
*(uint32_t*)(arg0 + 56) = 0;
*(uint32_t*)(arg0 + 60) = 0;
*(uint32_t*)(arg0 + 64) = 0;
*(uint32_t*)(arg0 + 68) = 0x3F800000;
FUN_00100050(arg0 + 72, (void*)(*(uint32_t*)0x003276AC), 16, 3);
*(uint32_t*)(arg0 + 72) = 0;
*(uint32_t*)(arg0 + 76) = 0;
*(uint32_t*)(arg0 + 80) = 0;
*(uint32_t*)(arg0 + 84) = 0;
*(uint32_t*)(arg0 + 88) = 0;
*(uint32_t*)(arg0 + 92) = 0;
*(uint32_t*)(arg0 + 96) = 0;
*(uint32_t*)(arg0 + 100) = 0;
*(uint32_t*)(arg0 + 104) = 0;
*(uint32_t*)(arg0 + 108) = 0;
*(uint32_t*)(arg0 + 112) = 0;
*(uint32_t*)(arg0 + 116) = 0;
*(uint32_t*)(arg0 + 120) = 3;
FUN_00100050((uint8_t*)arg1, (void*)(*(uint32_t*)0x003276AC), 16, 3);
arg1[0] = 0x3F800000;
arg1[1] = 0;
arg1[2] = 0;
arg1[3] = 0;
arg1[4] = 0;
arg1[5] = 0x3F800000;
arg1[6] = 0;
arg1[7] = 0;
arg1[8] = 0;
arg1[9] = 0;
arg1[10] = 0x3F800000;
arg1[11] = 0;
*(uint32_t*)(arg0 + 72) = arg1[0];
*(uint32_t*)(arg0 + 76) = arg1[1];
*(uint32_t*)(arg0 + 80) = arg1[2];
*(uint32_t*)(arg0 + 84) = arg1[3];
*(uint32_t*)(arg0 + 88) = arg1[4];
*(uint32_t*)(arg0 + 92) = arg1[5];
*(uint32_t*)(arg0 + 96) = arg1[6];
*(uint32_t*)(arg0 + 100) = arg1[7];
*(uint32_t*)(arg0 + 104) = arg1[8];
*(uint32_t*)(arg0 + 108) = arg1[9];
*(uint32_t*)(arg0 + 112) = arg1[10];
*(uint32_t*)(arg0 + 116) = arg1[11];
return arg0;
}
#endif
