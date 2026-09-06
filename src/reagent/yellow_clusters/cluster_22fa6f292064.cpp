// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002A7120
void FUN_002a6f04(void *arg0);
extern "C" void YellowAuto_002a7120(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nw3lyt6TexMap3SetEPKNS0_11TextureInfoE");
extern "C" void YellowAuto_002a7120(uint8_t* arg0, const uint8_t* arg1) {
if (arg1 == (const uint8_t *)0) return;
*(uint32_t *)(arg0 + 0) = *(const uint32_t *)(arg1 + 0);
*(uint16_t *)(arg0 + 4) = *(const uint16_t *)(arg1 + 4);
*(uint16_t *)(arg0 + 6) = *(const uint16_t *)(arg1 + 6);
*(uint8_t *)(arg0 + 9) = *(const uint8_t *)(arg1 + 8);
*(uint32_t *)(arg0 + 8) = ((uint32_t)(*(const uint8_t *)(arg1 + 9) & 3U) << 16) | (*(uint32_t *)(arg0 + 8) & 0xfffcffffU);
*(uint32_t *)(arg0 + 0xc) = *(const uint32_t *)(arg1 + 0x10);
*(uint16_t *)(arg0 + 0x10) = *(const uint16_t *)(arg1 + 0xc);
*(uint16_t *)(arg0 + 0x12) = *(const uint16_t *)(arg1 + 0xe);
FUN_002a6f04(arg0);
}
#endif
