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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00441920
extern uint32_t DAT_0044193c;
extern "C" void YellowAuto_00441920(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata4Misc5SetBPEj");
extern "C" void YellowAuto_00441920(uint8_t* arg0, uint32_t arg1) {
uint32_t v = arg1; uint32_t m = DAT_0044193c; if (v > m) v = m; *reinterpret_cast<uint32_t*>(arg0 + 288) = v;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00441940
extern uint32_t DAT_00441970;
extern "C" void YellowAuto_00441940(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata4Misc7AddGoldEj");
extern "C" void YellowAuto_00441940(uint8_t* arg0, uint32_t arg1) {
uint32_t m = DAT_00441970; uint32_t v; if (arg1 > m) v = m; else { uint32_t cur = *reinterpret_cast<uint32_t*>(arg0 + 8); v = arg1 + cur; if (v > m) v = m; } *reinterpret_cast<uint32_t*>(arg0 + 8) = v;
}
#endif
