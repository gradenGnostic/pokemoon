// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F459C
extern "C" uint8_t* YellowAuto_003f459c(uint8_t* arg0) __asm__("_ZN7GameSys9AlolaTimeD1Ev");
extern "C" uint8_t* YellowAuto_003f459c(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x003F45B4; return arg0;
}
#endif
