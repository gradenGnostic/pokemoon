// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493F14
bool IsFull(const uint8_t* arg0);
extern "C" bool YellowAuto_00493f14(const uint8_t* arg0) __asm__("_ZNK3pml9PokeParty6IsFullEv");
extern "C" bool YellowAuto_00493f14(const uint8_t* arg0) {
return arg0[0x18] == 6;
}
#endif
