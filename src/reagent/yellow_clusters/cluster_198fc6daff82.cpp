// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015A760
extern uint32_t D0015A77C;
extern "C" uint8_t* YellowAuto_0015a760(uint8_t* arg0, int32_t arg1) __asm__("_ZN10BattleInst17BattleInstManager12GetModelDataEi");
extern "C" uint8_t* YellowAuto_0015a760(uint8_t* arg0, int32_t arg1) {
return *(uint8_t**)arg0 + D0015A77C + arg1 * (int32_t)44;
}
#endif
