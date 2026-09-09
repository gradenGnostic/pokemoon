// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB390
void helper_3e8640(uint8_t*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
extern "C" void YellowAuto_002fb390(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) __asm__("_ZN3app4tool22PokeSimpleModelInFrame11InitInFrameEN6System6Camera13CModelInFrame7EScreenENS3_19CModelViewerInFrame14ETurnDirectionENS6_13EDrawPositionE");
extern "C" void YellowAuto_002fb390(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) {
helper_3e8640(arg0 + 0x4C, arg1, 0, 0, 0xF0, 0xF0, arg2);
arg0[0x4E] = arg3;
}
#endif
