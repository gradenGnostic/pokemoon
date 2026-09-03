// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CBE28
extern "C" void YellowAuto_002cbe28(uint8_t* arg0) __asm__("_ZN3App4Tool11NewPaneList11SetupNoLoopEv");
extern "C" void YellowAuto_002cbe28(uint8_t* arg0) {
*(uint8_t *)(arg0 + 0xd8) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CD9DC
extern "C" void YellowAuto_002cd9dc(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3App4Tool11NewPaneList7SetupSEEjj");
extern "C" void YellowAuto_002cd9dc(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint32_t *)(arg0 + 0xd0) = arg1; *(uint32_t *)(arg0 + 0xd4) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC50C
extern "C" void YellowAuto_002cc50c(uint8_t* arg0) __asm__("_ZN3App4Tool11NewPaneList15DeleteScrollBarEv");
extern "C" void YellowAuto_002cc50c(uint8_t* arg0) {
uint32_t p = *(uint32_t *)(arg0 + 0x134); if (p != 0) p = ((uint32_t (*)(uint32_t))0x0031222c)(p), ((void (*)(uint32_t))0x0030181c)(p), *(uint32_t *)(arg0 + 0x134) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC1CC
extern "C" void YellowAuto_002cc1cc(uint8_t* arg0, uint16_t arg1, uint16_t arg2, uint16_t arg3, uint16_t arg4) __asm__("_ZN3App4Tool11NewPaneList14SetupTouchAreaEssss");
extern "C" void YellowAuto_002cc1cc(uint8_t* arg0, uint16_t arg1, uint16_t arg2, uint16_t arg3, uint16_t arg4) {
*(uint16_t *)(arg0 + 0xc8) = arg1; *(uint16_t *)(arg0 + 0xca) = arg2; *(uint16_t *)(arg0 + 0xcc) = arg3; *(uint16_t *)(arg0 + 0xce) = arg4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CBDC0
extern "C" void YellowAuto_002cbdc0(uint8_t* arg0, int32_t arg1) __asm__("_ZN3App4Tool11NewPaneList11SetExScrollENS1_10ScrollModeE");
extern "C" void YellowAuto_002cbdc0(uint8_t* arg0, int32_t arg1) {
uint16_t sVar1 = *(uint16_t *)(arg0 + 0x138); if (sVar1 == 0) (*(uint8_t *)(*(uint32_t *)(arg0 + 0x10) + 0x25) = 0, *(uint8_t *)(arg0 + 0x12c) = 0, *(uint8_t *)(arg0 + 0x12d) = 0, *(uint16_t *)(arg0 + 0x138) = arg1 == 0 ? 9 : 10, *(uint16_t *)(arg0 + 0x13a) = 0); else if (sVar1 == 9 || sVar1 == 10) *(uint8_t *)(arg0 + 0x130) = 1;
}
#endif
