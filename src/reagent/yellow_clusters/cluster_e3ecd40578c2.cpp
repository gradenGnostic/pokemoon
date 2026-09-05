// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6EA0
void FUN_002e6e40(int32_t);
extern "C" void YellowAuto_002e6ea0(uint8_t* arg0) __asm__("_ZN3app2ui11UIResponder20ReleaseButtonManagerEv");
extern "C" void YellowAuto_002e6ea0(uint8_t* arg0) {
FUN_002e6e40((int32_t)arg0); if (*(void **)(arg0 + 0x10) != 0) (*(void (**)(void *))(*(uint32_t **)(*(void **)(arg0 + 0x10)) + 1))(*(void **)(arg0 + 0x10)), *(void **)(arg0 + 0x10) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6ED0
uint32_t FUN_001049c8(void *, bool);
uint32_t FUN_00498930(void *, bool);
extern "C" void YellowAuto_002e6ed0(uint8_t* arg0, bool arg1) __asm__("_ZN3app2ui11UIResponder21SetStickEmulationModeEb");
extern "C" void YellowAuto_002e6ed0(uint8_t* arg0, bool arg1) {
if (arg1) *(uint32_t *)(arg0 + 0x24) = FUN_001049c8(*(void **)(arg0 + 0x18), 1), *(uint32_t *)(arg0 + 0x1c) = FUN_00498930(*(void **)(arg0 + 0x18), 1); else *(uint32_t *)(arg0 + 0x24) = FUN_001049c8(*(void **)(arg0 + 0x18), 0), *(uint32_t *)(arg0 + 0x1c) = FUN_00498930(*(void **)(arg0 + 0x18), 0);
}
#endif
