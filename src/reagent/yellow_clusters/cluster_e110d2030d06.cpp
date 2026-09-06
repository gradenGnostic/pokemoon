// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E10B0
extern "C" void YellowAuto_002e10b0(uint8_t* arg0) __asm__("_ZN3App8PokeList16IntermediateDataC1Ev");
extern "C" void YellowAuto_002e10b0(uint8_t* arg0) {
*(uint32_t *)arg0 = 0; *(uint32_t *)(arg0 + 8) = 0; *(uint8_t *)(arg0 + 36) = 0; *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; *(uint32_t *)(arg0 + 20) = 0; *(uint32_t *)(arg0 + 24) = 0; *(uint32_t *)(arg0 + 28) = 0; *(uint32_t *)(arg0 + 32) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E1020
extern "C" void YellowAuto_002e1020(uint8_t* arg0) __asm__("_ZN3App8PokeList16IntermediateData16DeleteBattleDataEv");
extern "C" void YellowAuto_002e1020(uint8_t* arg0) {
if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 12) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 12)) + 8U))(*(void **)(arg0 + 12)), *(void **)(arg0 + 12) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 16) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 16)) + 8U))(*(void **)(arg0 + 16)), *(void **)(arg0 + 16) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 20) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 20)) + 8U))(*(void **)(arg0 + 20)), *(void **)(arg0 + 20) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 24) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 24)) + 8U))(*(void **)(arg0 + 24)), *(void **)(arg0 + 24) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 28) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 28)) + 8U))(*(void **)(arg0 + 28)), *(void **)(arg0 + 28) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 32) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 32)) + 8U))(*(void **)(arg0 + 32)), *(void **)(arg0 + 32) = 0; if (*(uint8_t *)(arg0 + 36) != 0) *(uint8_t *)(arg0 + 36) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E10F8
extern "C" uint8_t* YellowAuto_002e10f8(uint8_t* arg0) __asm__("_ZN3App8PokeList16IntermediateDataD1Ev");
extern "C" uint8_t* YellowAuto_002e10f8(uint8_t* arg0) {
if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 12) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 12)) + 8U))(*(void **)(arg0 + 12)), *(void **)(arg0 + 12) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 16) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 16)) + 8U))(*(void **)(arg0 + 16)), *(void **)(arg0 + 16) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 20) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 20)) + 8U))(*(void **)(arg0 + 20)), *(void **)(arg0 + 20) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 24) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 24)) + 8U))(*(void **)(arg0 + 24)), *(void **)(arg0 + 24) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 28) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 28)) + 8U))(*(void **)(arg0 + 28)), *(void **)(arg0 + 28) = 0; if (*(uint8_t *)(arg0 + 36) != 0 && *(void **)(arg0 + 32) != 0) ((void (*)(void *))(*(uint32_t *)(*(void **)(arg0 + 32)) + 8U))(*(void **)(arg0 + 32)), *(void **)(arg0 + 32) = 0; if (*(uint8_t *)(arg0 + 36) != 0) *(uint8_t *)(arg0 + 36) = 0; return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E0FA0
uint8_t PokeParty_GetMemberCount(void* arg0);
uint32_t nndbgPanic(uint32_t arg0, uint32_t arg1);
extern "C" uint32_t YellowAuto_002e0fa0(uint8_t* arg0) __asm__("_ZN3App8PokeList16IntermediateData14GetMemberCountEv");
extern "C" uint32_t YellowAuto_002e0fa0(uint8_t* arg0) {
if (*(void **)(arg0) != 0) return (uint32_t)PokeParty_GetMemberCount(*(void **)(arg0)); if (*(void **)(arg0 + 4) != 0) return (uint32_t)PokeParty_GetMemberCount(*(void **)(arg0 + 4)); if (*(uint32_t *)(arg0 + 8) == 0) return 0; return nndbgPanic(*(uint32_t *)(arg0 + 8), 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E1074
void* PokeParty_GetMemberPointer(void* arg0, uint8_t arg1);
extern "C" void* YellowAuto_002e1074(uint8_t* arg0, uint8_t arg1) __asm__("_ZN3App8PokeList16IntermediateData7GetPokeEh");
extern "C" void* YellowAuto_002e1074(uint8_t* arg0, uint8_t arg1) {
if (*(void **)(arg0) != 0) return PokeParty_GetMemberPointer(*(void **)(arg0), arg1); if (*(void **)(arg0 + 4) == 0 && *(uint32_t *)(arg0 + 8) != 0) return *(void **)(arg0 + arg1 * 4 + 12); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E0F48
void nndbgPanic(uint32_t arg0, uint32_t arg1);
extern "C" void YellowAuto_002e0f48(uint8_t* arg0, uint8_t arg1) __asm__("_ZN3App8PokeList16IntermediateData13IsSickMoudokuEh");
extern "C" void YellowAuto_002e0f48(uint8_t* arg0, uint8_t arg1) {
if (*(uint32_t *)(arg0 + 8) != 0) nndbgPanic(*(uint32_t *)(arg0 + 8), arg1);
}
#endif
