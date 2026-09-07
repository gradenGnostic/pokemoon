// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00314264
extern "C" uint32_t YellowAuto_00314264(uint32_t arg0) __asm__("_ZN3pml6battle12TypeAffinity17ConvAboutAffinityENS1_10AffinityIDE");
extern "C" uint32_t YellowAuto_00314264(uint32_t arg0) {
if (arg0 > 7U) return 2U; if (arg0 == 7U) return 1U; if (arg0 != 0U) return 3U; return 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031423C
uint32_t FUN_00314110(uint8_t, uint8_t, uint8_t, bool);
extern "C" uint32_t YellowAuto_0031423c(uint8_t arg0, uint8_t arg1, uint8_t arg2, bool arg3) __asm__("_ZN3pml6battle12TypeAffinity17CalcAffinityAboutEhhhb");
extern "C" uint32_t YellowAuto_0031423c(uint8_t arg0, uint8_t arg1, uint8_t arg2, bool arg3) {
uint32_t aff = FUN_00314110(arg0, arg1, arg2, arg3); if (aff > 7U) return 2U; if (aff == 7U) return 1U; if (aff != 0U) return 3U; return 0U;
}
#endif
