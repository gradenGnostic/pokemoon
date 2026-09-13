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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FF8F4
void* func_00105500(uint32_t, void*);
void* func_002F9BDC(void*, void*, void*, uint32_t, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_002ff8f4(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3) __asm__("_ZN3app4tool8ItemIconC1EPN4gfl24heap11CtrHeapBaseES5_j");
extern "C" uint8_t* YellowAuto_002ff8f4(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3) {
*(void**)(arg0 + 0) = *(void**)0x2FF958U;
*(void**)(arg0 + 12) = arg2;
*(uint32_t*)(arg0 + 4) = 0U;
*(void**)(arg0 + 8) = arg1;
*(uint8_t*)(arg0 + 16) = 0U;
void* tmp = func_00105500(16U, arg1);
if (tmp != (void*)0)
tmp = func_002F9BDC(tmp, arg1, arg2, *(uint32_t*)0x2FF95CU, arg3, 0U);
*(void**)(arg0 + 4) = tmp;
return arg0;
}
#endif
