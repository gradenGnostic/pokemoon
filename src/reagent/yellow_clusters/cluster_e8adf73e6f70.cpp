// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CC474
void func_0035BE88(uint32_t, uint32_t, uint32_t);
void* func_00105500(uint32_t, void*);
void* func_003120F4(void*, const uint8_t*);
void func_00311ECC(void*, uint32_t);
void func_00311F6C(void*, uint32_t);
void func_00305674(void*, uint32_t);
extern "C" void YellowAuto_002cc474(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3App4Tool11NewPaneList15CreateScrollBarEPKN3app4util9ScrollBar11SETUP_PARAME");
extern "C" void YellowAuto_002cc474(uint8_t* arg0, const uint8_t* arg1) {
if (*(uint32_t*)(arg0 + 308U) != 0U) { func_0035BE88(0U, 0U, 0U); return; } void* v0 = func_00105500(36U, *(void**)(*(uint32_t*)(arg0 + 132U) + 4U)); void* v1 = (void*)0; if (v0 != (void*)0) { v1 = func_003120F4(v0, arg1); } *(void**)(arg0 + 308U) = v1; func_00311ECC(v1, 0U); uint32_t v2 = *(const uint32_t*)(arg1 + 8U); if (*(void**)(arg0 + 308U) == (void*)0) { return; } func_00311F6C(*(void**)(arg0 + 308U), v2); if (v2 == 0U) { func_00305674(*(void**)(arg0 + 308U), 0U); return; } func_00305674(*(void**)(arg0 + 308U), 1U);
}
#endif
