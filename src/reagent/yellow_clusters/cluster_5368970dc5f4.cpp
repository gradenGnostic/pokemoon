// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00279590
extern "C" uint32_t YellowAuto_00279590(const uint8_t* arg0) __asm__("_ZN2nn6aacdec3CTR16GetAdtsFrameSizeEPKh");
extern "C" uint32_t YellowAuto_00279590(const uint8_t* arg0) {
uint32_t b0 = arg0[0]; uint32_t b1 = arg0[1]; uint32_t b2 = arg0[2]; uint32_t b3 = arg0[3]; uint32_t b4 = arg0[4]; uint32_t b5 = arg0[5]; uint32_t b6 = arg0[6]; uint32_t sample_rate_index = (b2 >> 2) & 0x0f; uint32_t channel_config = ((b2 & 0x01) << 2) | (b3 >> 6); if (b0 == 0xff && (b1 & 0xf0) == 0xf0) if (((b1 >> 1) & 0x03) == 0 && (b2 >> 6) == 1 && sample_rate_index > 2 && sample_rate_index < 0x0c) if (channel_config == 2 || (channel_config < 3 && (b6 & 0x03) == 0)) return ((uint32_t)(b3 & 0x03) << 11) | (b4 << 3) | (b5 >> 5); return 0;
}
#endif
