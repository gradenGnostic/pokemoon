// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048DA4C
void FUN_0048d820(uint32_t* arg0, int32_t arg1, int32_t arg2);
extern "C" void YellowAuto_0048da4c(uint32_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZNK3app4tool13ButtonManager20GetButtonPosByGfVec3Ej");
extern "C" void YellowAuto_0048da4c(uint32_t* arg0, int32_t arg1, int32_t arg2) {
uint32_t local_18; uint32_t local_14; uint32_t local_10; FUN_0048d820(&local_18, arg1, arg2); arg0[0] = local_18; arg0[1] = local_14; arg0[2] = local_10;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC3AC
extern "C" void YellowAuto_002ec3ac(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool13ButtonManager16StartSelectedActEj");
extern "C" void YellowAuto_002ec3ac(uint8_t* arg0, uint32_t arg1) {
(*(void (**)())(*(uint32_t **)(*(uint32_t **)(arg0 + 0x28)) + 12))();
}
#endif
