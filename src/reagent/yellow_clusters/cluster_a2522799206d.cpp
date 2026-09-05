// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00458F40
extern "C" void YellowAuto_00458f40(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib2UI15NetAppQRTextureC1EPNS_6System19ApplicationWorkBaseE");
extern "C" void YellowAuto_00458f40(uint8_t* arg0, void* arg1) {
*(uint32_t *)arg0 = *(uint32_t *)0x00458f70;
*(void **)(arg0 + 4) = arg1;
*(uint32_t *)(arg0 + 8) = 0;
*(uint32_t *)(arg0 + 12) = 0;
*(uint16_t *)(arg0 + 16) = 0;
*(uint16_t *)(arg0 + 18) = 0;
*(uint16_t *)(arg0 + 24) = 0;
*(uint16_t *)(arg0 + 26) = 0;
*(uint32_t *)(arg0 + 28) = 0;
}
#endif
