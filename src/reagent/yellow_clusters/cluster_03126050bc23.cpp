// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015A888
extern "C" void YellowAuto_0015a888(uint8_t* arg0) __asm__("_ZN10BattleInst17BattleInstManagerC1Ev");
extern "C" void YellowAuto_0015a888(uint8_t* arg0) {
*((uint32_t*)arg0) = 0; *((uint32_t*)(arg0 + 4)) = 0;
}
#endif
