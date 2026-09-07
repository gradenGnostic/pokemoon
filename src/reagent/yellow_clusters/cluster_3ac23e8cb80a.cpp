// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436380
extern "C" uint32_t YellowAuto_00436380(uint8_t arg0) __asm__("_ZN8PokeTool9PokePlace14GetPlaceMarkIDEh");
extern "C" uint32_t YellowAuto_00436380(uint8_t arg0) {
if (arg0 >= 24 && arg0 <= 29) return 0; if (arg0 == 30 || arg0 == 31 || arg0 == 32 || arg0 == 33) return 1; if (arg0 == 34) return 4; if (arg0 >= 35 && arg0 <= 41) return 3; return 2;
}
#endif
