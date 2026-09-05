// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040DD5C
void SetAutoBlinkMode(uint8_t* arg0, uint8_t arg1);
extern "C" void YellowAuto_0040dd5c(uint8_t* arg0, uint8_t arg1) __asm__("_ZN7poke_3d5model10CharaModel16SetAutoBlinkModeENS1_13AutoBlinkModeE");
extern "C" void YellowAuto_0040dd5c(uint8_t* arg0, uint8_t arg1) {
arg0[0xde] = arg1;
arg0[0xdf] = 0;
arg0[0xe0] = 0;
arg0[0xdc] = 0;
}
#endif
