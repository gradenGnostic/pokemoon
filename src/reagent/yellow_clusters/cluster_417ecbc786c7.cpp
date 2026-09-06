// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D5B4
extern "C" bool YellowAuto_0048d5b4(uint32_t arg0) __asm__("_ZNK3app4sort13StringTokusei15IsSecretTokuseiE9TokuseiNo");
extern "C" bool YellowAuto_0048d5b4(uint32_t arg0) {
const uint8_t *table = *(const uint8_t * const *)0x0048D600; if (table[0] == arg0) return 1; for (uint32_t i = 1; i < 7; i += 2) if (table[i] == arg0 || table[i + 1] == arg0) return 1; return 0;
}
#endif
