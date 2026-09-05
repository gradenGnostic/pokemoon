// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00485D48
extern "C" void YellowAuto_00485d48(const uint8_t* arg0, uint8_t* arg1) __asm__("_ZNK2nw3lyt6TexMap14GetTextureInfoEPNS0_11TextureInfoE");
extern "C" void YellowAuto_00485d48(const uint8_t* arg0, uint8_t* arg1) {
*(uint32_t *)(arg1 + 0x0) = *(const uint32_t *)(arg0 + 0x0);
*(uint32_t *)(arg1 + 0x4) = (uint32_t)(*(const uint16_t *)(arg0 + 0x4) | ((uint32_t)*(const uint16_t *)(arg0 + 0x6) << 16));
*(uint8_t *)(arg1 + 0x8) = (uint8_t)(*(const uint32_t *)(arg0 + 0x8) >> 16);
*(uint8_t *)(arg1 + 0x9) = (uint8_t)(*(const uint32_t *)(arg0 + 0x8) >> 30);
*(uint32_t *)(arg1 + 0xc) = (uint32_t)(*(const uint16_t *)(arg0 + 0x10) | ((uint32_t)*(const uint16_t *)(arg0 + 0x12) << 16));
*(uint32_t *)(arg1 + 0x10) = *(const uint32_t *)(arg0 + 0xc);
}
#endif
