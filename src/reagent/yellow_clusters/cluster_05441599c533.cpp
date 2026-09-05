// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035DE34
extern uint32_t DAT_0035de48;
extern "C" void YellowAuto_0035de34(uint8_t* arg0) __asm__("_ZN4gfl26Effect16EffectRenderPathC1Ev");
extern "C" void YellowAuto_0035de34(uint8_t* arg0) {
*(uint32_t *)arg0 = DAT_0035de48;
*(uint32_t *)(arg0 + 4) = 0;
*(uint32_t *)(arg0 + 8) = 0;
}
#endif
