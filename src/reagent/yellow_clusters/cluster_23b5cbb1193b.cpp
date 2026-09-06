// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F97EC
uint32_t FUN_002e8fa4(uint32_t);
extern "C" uint32_t YellowAuto_002f97ec(uint8_t* arg0) __asm__("_ZN3app4tool8ItemIcon12IsModuleFreeEv");
extern "C" uint32_t YellowAuto_002f97ec(uint8_t* arg0) {
if (*(uint32_t *)(*(uint32_t *)(arg0 + 4) + 8) != 0) for (uint32_t arg1 = 0; arg1 < *(uint32_t *)(*(uint32_t *)(arg0 + 4) + 8); arg1++) if (FUN_002e8fa4(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(arg0 + 4) + 4) + arg1 * 4)) == 0) return 0u; return 1u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306850
extern "C" uint32_t YellowAuto_00306850(uint8_t* arg0) __asm__("_ZN3app4tool8ItemIcon10IsFileOpenEv");
extern "C" uint32_t YellowAuto_00306850(uint8_t* arg0) {
return 0x3d;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306874
extern "C" uint32_t YellowAuto_00306874(uint8_t* arg0) __asm__("_ZN3app4tool8ItemIcon11IsFileCloseEv");
extern "C" uint32_t YellowAuto_00306874(uint8_t* arg0) {
return 0x3d;
}
#endif
