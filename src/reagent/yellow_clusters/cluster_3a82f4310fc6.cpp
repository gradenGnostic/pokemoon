// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F04C4
extern uint32_t DAT_002f04f4;
extern "C" void YellowAuto_002f04c4(uint8_t* arg0) __asm__("_ZN3app4tool14ResourceLoaderC1Ev");
extern "C" void YellowAuto_002f04c4(uint8_t* arg0) {
*(uint32_t *)(arg0 + 4) = 0; *(uint32_t *)arg0 = DAT_002f04f4; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 0xC) = 0xFFFFFFFFu; *(uint32_t *)(arg0 + 0x14) = 0; *(uint32_t *)(arg0 + 0x10) = 0xFFFFFFFFu; *(uint8_t *)(arg0 + 0x18) = 0; *(uint8_t *)(arg0 + 0x19) = 0;
}
#endif
