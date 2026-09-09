// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030D06C
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_0030d06c(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3) __asm__("_ZN3app4util23OutputPokemonTypeManualEPhS1_RKhS3_");
extern "C" void YellowAuto_0030d06c(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3) {
if (arg0 == (uint8_t*)0 || arg1 == (uint8_t*)0) { GFLassert(0, 0, 0, 0); return; } uint8_t v0 = *arg2; *arg0 = v0; uint8_t v1 = *arg3; if (v1 == (uint8_t)0x12 || v0 == v1) { v1 = (uint8_t)0x12; } *arg1 = v1;
}
#endif
