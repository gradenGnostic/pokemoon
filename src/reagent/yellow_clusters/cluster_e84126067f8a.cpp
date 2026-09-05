// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C6D9C
uint32_t* FUN_002c5dbc(uint32_t*);
extern "C" void YellowAuto_002c6d9c(uint8_t* arg0) __asm__("_ZN2nw4font7ResFontC1Ev");
extern "C" void YellowAuto_002c6d9c(uint8_t* arg0) {
*FUN_002c5dbc((uint32_t*)arg0) = *(const uint32_t*)0x002c6db0;
}
#endif
