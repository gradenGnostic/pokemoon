// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003898A8
extern "C" void YellowAuto_003898a8(uint8_t* arg0, uint8_t arg1, uint8_t arg2, const uint32_t* arg3, const uint32_t* arg4, uint32_t arg5, bool arg6) __asm__("_ZN5Field15EventAddPokemon12SetFadeParamEN4gfl24Fade4DISPENS2_9FADE_TYPEERKNS1_4math7Vector4ES8_jb");
extern "C" void YellowAuto_003898a8(uint8_t* arg0, uint8_t arg1, uint8_t arg2, const uint32_t* arg3, const uint32_t* arg4, uint32_t arg5, bool arg6) {
arg0[0x26] = arg1; arg0[0x27] = arg2; ((uint32_t*)arg0)[10] = arg3[0]; ((uint32_t*)arg0)[11] = arg3[1]; ((uint32_t*)arg0)[12] = arg3[2]; ((uint32_t*)arg0)[13] = arg3[3]; ((uint32_t*)arg0)[14] = arg4[0]; ((uint32_t*)arg0)[15] = arg4[1]; ((uint32_t*)arg0)[16] = arg4[2]; ((uint32_t*)arg0)[17] = arg4[3]; ((uint32_t*)arg0)[18] = arg5; arg0[0x4c] = arg6;
}
#endif
