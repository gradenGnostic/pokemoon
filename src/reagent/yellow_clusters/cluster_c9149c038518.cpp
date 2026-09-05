// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F33E8
void Update(void*);
extern "C" void YellowAuto_002f33e8(uint8_t* arg0) __asm__("_ZN3app4tool16CursorController8OnUpdateEv");
extern "C" void YellowAuto_002f33e8(uint8_t* arg0) {
if (*(uint8_t *)(arg0 + 0x5c) == 0) return; if (*(void **)(arg0 + 0x54) == 0) return; Update(*(void **)(arg0 + 0x54));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F3404
void* __aeabi_vec_ctor_nocookie_nodtor(void*, const void*, uint32_t, uint32_t);
extern "C" void YellowAuto_002f3404(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN3app4tool16CursorControllerC1EPNS_4util4HeapEPNS2_19AppRenderingManagerE");
extern "C" void YellowAuto_002f3404(uint8_t* arg0, void* arg1, void* arg2) {
*(uint32_t *)(arg0 + 0x0) = *(uint32_t *)0x002F3450; *(void **)(arg0 + 0x4) = arg1; *(void **)(arg0 + 0x8) = arg2; *(uint32_t *)(arg0 + 0x0C) = 0; *(uint32_t *)(arg0 + 0x10) = 0; arg0 = (uint8_t *)__aeabi_vec_ctor_nocookie_nodtor(arg0 + 0x14, (const void *)*(uint32_t *)0x002F3454, 8, 8); arg0 -= 0x14; *(uint32_t *)(arg0 + 0x40) = 0; *(uint32_t *)(arg0 + 0x44) = 0; *(uint8_t *)(arg0 + 0x48) = 1; *(uint8_t *)(arg0 + 0x49) = 0;
}
#endif
