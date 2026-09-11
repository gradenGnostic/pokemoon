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
