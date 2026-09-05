// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030DAA4
extern "C" void YellowAuto_0030daa4(uint8_t* arg0) __asm__("_ZN3app4util25AppQRTextureCreateUtility6IsBusyEv");
extern "C" void YellowAuto_0030daa4(uint8_t* arg0) {
(*(void (**)(void))(*(uint32_t **)(*(uint32_t **)(arg0 + 0x20)) + 5))();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030DAB4
extern "C" void YellowAuto_0030dab4(uint8_t* arg0) __asm__("_ZN3app4util25AppQRTextureCreateUtility6UpdateEv");
extern "C" void YellowAuto_0030dab4(uint8_t* arg0) {
(*(void (**)(void))(*(uint32_t **)(*(uint32_t **)(arg0 + 0x20)) + 4))();
}
#endif
