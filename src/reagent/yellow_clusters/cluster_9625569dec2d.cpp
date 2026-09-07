// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399A94
extern "C" bool YellowAuto_00399a94(uint32_t arg0) __asm__("_ZN5Field9Attribute7IsGrassEj");
extern "C" bool YellowAuto_00399a94(uint32_t arg0) {
if (arg0 > 0x25) return false; switch (arg0) { case 0x0: case 0x4: case 0x16: case 0x1E: case 0x1F: case 0x20: return true; default: return false; }
}
#endif
