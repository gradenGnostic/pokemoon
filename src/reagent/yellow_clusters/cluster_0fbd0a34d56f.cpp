// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ED99C
extern "C" uint8_t YellowAuto_003ed99c(uint8_t arg0) __asm__("_ZN6System8Language13ConvertPM2CTREh");
extern "C" uint8_t YellowAuto_003ed99c(uint8_t arg0) {
switch (arg0) { case 1: return 0; case 3: return 2; case 4: return 4; case 5: return 3; case 7: return 5; case 8: return 7; case 9: return 6; case 10: return 11; default: return 1; }
}
#endif
