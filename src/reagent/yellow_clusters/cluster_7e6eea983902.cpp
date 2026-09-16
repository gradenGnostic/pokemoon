// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043072C
uint32_t FUN_00430888(uint8_t*, uint32_t, uint32_t, uint16_t*);
extern "C" uint8_t YellowAuto_0043072c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t* arg3) __asm__("_ZN8PokeTool29KawaigariParamCareCoreManager16TypeEnabled_DirtEiii");
extern "C" uint8_t YellowAuto_0043072c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t* arg3) {
uint32_t idx = FUN_00430888(arg0, arg1, arg2, arg3);
uint8_t en = *(arg0 + 12);
uint32_t cnt = 0;
if (en != 0) cnt = *(uint32_t*)(arg0 + 8);
if (en != 0 && cnt != 0 && idx < cnt) {
uint8_t* base = (uint8_t*)*(uint32_t*)(arg0 + 4);
int32_t rel = *(int32_t*)(base + (idx + 1) * 4);
uint8_t* e = base + rel;
if (e != (uint8_t*)0) return (uint8_t)(*(e + 5) & 1);
}
return (uint8_t)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00430774
uint32_t FUN_00430888(uint8_t*, uint32_t, uint32_t, uint16_t*);
extern "C" uint32_t YellowAuto_00430774(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t* arg3) __asm__("_ZN8PokeTool29KawaigariParamCareCoreManager16TypeEnabled_DustEiii");
extern "C" uint32_t YellowAuto_00430774(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t* arg3) {
uint32_t idx = FUN_00430888(arg0, arg1, arg2, arg3);
uint8_t en = *(arg0 + 12);
uint32_t cnt = 0;
if (en != 0) cnt = *(uint32_t*)(arg0 + 8);
if (en != 0 && cnt != 0 && idx < cnt) {
uint8_t* base = (uint8_t*)*(uint32_t*)(arg0 + 4);
int32_t rel = *(int32_t*)(base + (idx + 1) * 4);
uint8_t* e = base + rel;
if (e != (uint8_t*)0) return (uint32_t)((*(e + 5) & 2) >> 1);
}
return (uint32_t)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004307C4
uint32_t FUN_00430888(uint8_t*, uint32_t, uint32_t, uint16_t*);
extern "C" uint32_t YellowAuto_004307c4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t* arg3) __asm__("_ZN8PokeTool29KawaigariParamCareCoreManager16TypeEnabled_HairEiii");
extern "C" uint32_t YellowAuto_004307c4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t* arg3) {
uint32_t idx = FUN_00430888(arg0, arg1, arg2, arg3);
uint8_t en = *(arg0 + 12);
uint32_t cnt = 0;
if (en != 0) cnt = *(uint32_t*)(arg0 + 8);
if (en != 0 && cnt != 0 && idx < cnt) {
uint8_t* base = (uint8_t*)*(uint32_t*)(arg0 + 4);
int32_t rel = *(int32_t*)(base + (idx + 1) * 4);
uint8_t* e = base + rel;
if (e != (uint8_t*)0) return (uint32_t)((*(e + 5) & 4) >> 2);
}
return (uint32_t)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00430814
uint32_t FUN_00430888(uint8_t*, uint32_t, uint32_t, uint16_t*);
extern "C" uint32_t YellowAuto_00430814(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t* arg3) __asm__("_ZN8PokeTool29KawaigariParamCareCoreManager17TypeEnabled_WaterEiii");
extern "C" uint32_t YellowAuto_00430814(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t* arg3) {
uint32_t idx = FUN_00430888(arg0, arg1, arg2, arg3);
uint8_t en = *(arg0 + 12);
uint32_t cnt = 0;
if (en != 0) cnt = *(uint32_t*)(arg0 + 8);
if (en != 0 && cnt != 0 && idx < cnt) {
uint8_t* base = (uint8_t*)*(uint32_t*)(arg0 + 4);
int32_t rel = *(int32_t*)(base + (idx + 1) * 4);
uint8_t* e = base + rel;
if (e != (uint8_t*)0) return (uint32_t)((*(e + 5) & 8) >> 3);
}
return (uint32_t)0;
}
#endif
