// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003270E0
uint8_t* FUN_00324be8(uint8_t*);
extern uint32_t DAT_003270fc;
extern "C" void YellowAuto_003270e0(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8instance12InstanceNodeC1Ev");
extern "C" void YellowAuto_003270e0(uint8_t* arg0) {
arg0 = FUN_00324be8(arg0); *(uint32_t*)arg0 = DAT_003270fc; *(uint32_t*)(arg0 + 8) = DAT_003270fc + 28u;
}
#endif
