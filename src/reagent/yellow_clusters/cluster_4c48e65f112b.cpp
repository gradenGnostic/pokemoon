// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438AC0
extern "C" bool YellowAuto_00438ac0(const uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave17GetUseBeansBottleEv");
extern "C" bool YellowAuto_00438ac0(const uint8_t* arg0) {
return arg0[0x5673] != 0;
}
#endif
