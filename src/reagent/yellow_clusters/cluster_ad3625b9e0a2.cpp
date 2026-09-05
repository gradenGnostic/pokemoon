// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001639F0
uint32_t GetDecodeBufferSize(uint16_t arg0, uint16_t arg1);
extern "C" uint32_t YellowAuto_001639f0(uint16_t arg0, uint16_t arg1) __asm__("_ZN2mw3qrd9QRDecoder19GetDecodeBufferSizeEtt");
extern "C" uint32_t YellowAuto_001639f0(uint16_t arg0, uint16_t arg1) {
return ((arg0 > 0x280u) || (arg1 > 0x1e0u)) ? 0u : ((0x40000u + ((uint32_t)arg0 * (uint32_t)arg1) * 5u + (((uint32_t)arg0 * (uint32_t)arg1) >> 3) + 0x1fu) & 0xffffffe0u);
}
#endif
