// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E7818
extern "C" void YellowAuto_002e7818(uint8_t* arg0) __asm__("_ZN3app2ui6UIView20DeleteGraphicsSystemEv");
extern "C" void YellowAuto_002e7818(uint8_t* arg0) {
if (arg0[0x70] != 0) arg0[0x70] = 0; return;
}
#endif
