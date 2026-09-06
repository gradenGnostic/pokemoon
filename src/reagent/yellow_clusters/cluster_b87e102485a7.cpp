// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E91C
extern "C" bool YellowAuto_0048e91c(const uint8_t* arg0) __asm__("_ZNK3app4util19AppRenderingManager9IsCreatedEv");
extern "C" bool YellowAuto_0048e91c(const uint8_t* arg0) {
return arg0[4] == 2;
}
#endif
