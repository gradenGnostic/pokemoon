// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004417F4
extern "C" void YellowAuto_004417f4(uint8_t* arg0) __asm__("_ZN8Savedata4Misc22ResetKawaigariPastDaysEv");
extern "C" void YellowAuto_004417f4(uint8_t* arg0) {
arg0[0x127] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7B88
extern "C" void YellowAuto_004a7b88(const uint8_t* arg0, uint32_t* arg1) __asm__("_ZNK8Savedata4Misc16GetStrInputParamEPj");
extern "C" void YellowAuto_004a7b88(const uint8_t* arg0, uint32_t* arg1) {
*arg1 = (*(const uint32_t*)(arg0 + 0xc) & 3) >> 1;
}
#endif
