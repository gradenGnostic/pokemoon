// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032E5A4
uint8_t* FUN_0032c240(uint8_t*);
extern "C" void YellowAuto_0032e5a4(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8resource17ArrayResourceNodeC1Ev");
extern "C" void YellowAuto_0032e5a4(uint8_t* arg0) {
arg0 = FUN_0032c240(arg0);
*(uint32_t*)(arg0 + 0) = *(uint32_t*)0x32E5D8;
*(uint32_t*)(arg0 + 8) = *(uint32_t*)0x32E5D8 + 32;
*(uint32_t*)(arg0 + 44) = 0;
*(uint32_t*)(arg0 + 48) = 0;
*(uint32_t*)(arg0 + 52) = 0;
*(uint32_t*)(arg0 + 56) = 0;
*(uint8_t*)(arg0 + 60) = 0;
}
#endif
