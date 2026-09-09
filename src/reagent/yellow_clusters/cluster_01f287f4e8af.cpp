// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3F04
extern "C" bool YellowAuto_004a3f04(const uint8_t* arg0) __asm__("_ZNK7poke_3d5model10BaseCamera15IsAnimationLoopEv");
extern "C" bool YellowAuto_004a3f04(const uint8_t* arg0) {
return *(arg0 + 0x34) != 0;
}
#endif
