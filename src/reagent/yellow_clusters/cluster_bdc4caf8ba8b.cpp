// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039994C
uint32_t IsRoba2Ground(uint32_t arg0);
extern "C" uint32_t YellowAuto_0039994c(uint32_t arg0) __asm__("_ZN5Field9Attribute13IsRoba2GroundEj");
extern "C" uint32_t YellowAuto_0039994c(uint32_t arg0) {
return arg0 < 0x26 && arg0 == 0x14;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399AD4
uint32_t IsWater(uint32_t arg0);
extern "C" uint32_t YellowAuto_00399ad4(uint32_t arg0) __asm__("_ZN5Field9Attribute7IsWaterEj");
extern "C" uint32_t YellowAuto_00399ad4(uint32_t arg0) {
return arg0 < 0x26 && (arg0 == 8 || arg0 == 0x15);
}
#endif
