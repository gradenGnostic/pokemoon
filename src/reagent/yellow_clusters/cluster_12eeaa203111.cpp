// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00304F04
extern "C" void IsFileOpen(uint32_t arg0);
extern "C" void YellowAuto_00304f04() __asm__("_ZN3app4tool8PokeIcon10IsFileOpenEv");
extern "C" void YellowAuto_00304f04() {
IsFileOpen(0x3e);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00304F0C
extern "C" void IsFileClose(uint32_t arg0);
extern "C" void YellowAuto_00304f0c() __asm__("_ZN3app4tool8PokeIcon11IsFileCloseEv");
extern "C" void YellowAuto_00304f0c() {
IsFileClose(0x3e);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030508C
extern "C" void FUN_002e9334(uint32_t arg0, uint32_t arg1);
extern "C" void YellowAuto_0030508c(void* arg0, uint32_t arg1) __asm__("_ZN3app4tool8PokeIcon14IsLoadFinishedEj");
extern "C" void YellowAuto_0030508c(void* arg0, uint32_t arg1) {
FUN_002e9334(*(uint32_t *)(arg0 + 4), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003051E0
extern "C" void FUN_002e9124(uint32_t arg0, uint32_t arg1);
extern "C" void YellowAuto_003051e0(void* arg0, uint32_t arg1) __asm__("_ZN3app4tool8PokeIcon18AllocTextureBufferEj");
extern "C" void YellowAuto_003051e0(void* arg0, uint32_t arg1) {
FUN_002e9124(*(uint32_t *)(arg0 + 4), arg1);
}
#endif
