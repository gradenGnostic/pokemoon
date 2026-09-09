// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00394BA8
void GFLassertStop();
extern "C" uint8_t* YellowAuto_00394ba8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field4Area11GetAccessorENS0_7DataIdxE");
extern "C" uint8_t* YellowAuto_00394ba8(uint8_t* arg0, uint32_t arg1) {
if (arg1 < 11) return arg0 + arg1 * 4 + 104; GFLassertStop(); return 0;
}
#endif
