// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00444A78
extern "C" int32_t YellowAuto_00444a78(const uint8_t* arg0, int32_t arg1) __asm__("_ZN8Savedata8Sodateya10PokeNumGetENS_10SodateyaIDE");
extern "C" int32_t YellowAuto_00444a78(const uint8_t* arg0, int32_t arg1) {
return (int32_t)(int8_t)arg0[arg1 * 0x200 + 0xF1] + (int32_t)(int8_t)arg0[arg1 * 0x200 + 0x8];
}
#endif
