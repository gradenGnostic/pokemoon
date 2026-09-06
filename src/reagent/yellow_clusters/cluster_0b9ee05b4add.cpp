// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00430D04
extern "C" int32_t YellowAuto_00430d04(uint16_t arg0, uint8_t arg1) __asm__("_ZN8PokeTool4Mega12GetMegaIndexE6MonsNoh");
extern "C" int32_t YellowAuto_00430d04(uint16_t arg0, uint8_t arg1) {
const uint8_t *base = *(const uint8_t * const *)0x430d74; for (int32_t arg2 = 0; arg2 < 0x30; arg2 += 2) if (*(const uint16_t *)(base + arg2 * 6 + 2) == arg0 && *(const uint8_t *)(base + arg2 * 6 + 4) == arg1) return arg2; else if (*(const uint16_t *)(base + arg2 * 6 + 8) == arg0 && *(const uint8_t *)(base + arg2 * 6 + 10) == arg1) return arg2 + 1; return -1;
}
#endif
