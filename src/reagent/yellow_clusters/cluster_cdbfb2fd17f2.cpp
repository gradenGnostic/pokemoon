// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E81E0
void GFLassert();
extern "C" void YellowAuto_002e81e0(uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint16_t arg3) __asm__("_ZN3app3bag8PlayData13SetPocketDataEjjj");
extern "C" void YellowAuto_002e81e0(uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint16_t arg3) {
if (arg1 >= 7) { GFLassert(); return; } *reinterpret_cast<uint16_t*>(arg0 + arg1 * 4 + 4) = arg2; *reinterpret_cast<uint16_t*>(arg0 + arg1 * 4 + 6) = arg3;
}
#endif
