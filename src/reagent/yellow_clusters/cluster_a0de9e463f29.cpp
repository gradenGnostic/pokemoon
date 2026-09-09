// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A1B34
extern "C" uint16_t YellowAuto_004a1b34(const uint8_t* arg0) __asm__("_ZNK5print14HangulComposer18GetCompositionCharEv");
extern "C" uint16_t YellowAuto_004a1b34(const uint8_t* arg0) {
uint16_t v = *(const uint16_t *)(arg0 + 28); if (v == 0) return 0; return *(const uint16_t *)(arg0 + (uint32_t)v * 2u + 2u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BF9FC
extern "C" uint16_t YellowAuto_003bf9fc(uint8_t* arg0) __asm__("_ZN5print14HangulComposer14FixCompositionEv");
extern "C" uint16_t YellowAuto_003bf9fc(uint8_t* arg0) {
uint16_t v = *(uint16_t *)(arg0 + 28); if (v != 0) v = *(uint16_t *)(arg0 + (uint32_t)v * 2u + 2u); *(uint16_t *)(arg0 + 28) = 0; return v;
}
#endif
