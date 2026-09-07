// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003053EC
bool Func_002f9ba0(void*, void*, uint32_t, uint32_t, uint32_t, bool);
void Func_0035be88();
extern "C" void YellowAuto_003053ec(uint8_t* arg0) __asm__("_ZN3app4tool8PokeIcon23LoadDummyTextureRequestEv");
extern "C" void YellowAuto_003053ec(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x14) == 0U) Func_0035be88(); if (*(uint32_t*)(arg0 + 0x14) == 0U) return; bool r = Func_002f9ba0(*(void**)(arg0 + 0x04), *(void**)(arg0 + 0x08), *(uint32_t*)(arg0 + 0x14), 0x3EU, 0U, true); if (r != false) return; Func_0035be88(); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305444
void Func_002e8ef0(void*, uint32_t);
void Func_002f983c(void*, uint32_t, void*, uint32_t, uint32_t);
void Func_0035be88();
extern "C" void YellowAuto_00305444(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3app4tool8PokeIcon23ReplaceReadDummyTextureEPN2nw3lyt7PictureEjj");
extern "C" void YellowAuto_00305444(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
uint32_t d = *(uint32_t*)(arg0 + 0x14); if (d == 0U) Func_0035be88(); if (d == 0U) return; void* s = *(void**)(arg0 + 0x04); Func_002e8ef0(s, d); Func_002f983c(s, d, arg1, arg2, arg3); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00304F14
uint16_t GetMonsNo(const void*);
uint8_t GetFormNo(const void*);
uint8_t GetSex(const void*);
bool IsEgg(const void*, uint32_t);
uint32_t Func_00305094(uint16_t, uint8_t, uint8_t, bool, bool);
bool Func_002f9ba0(void*, void*, uint32_t, uint32_t, uint32_t, bool);
extern "C" bool YellowAuto_00304f14(uint8_t* arg0, uint32_t arg1, const void* arg2, bool arg3) __asm__("_ZN3app4tool8PokeIcon11ReadRequestEjPKN3pml8pokepara9CoreParamEb");
extern "C" bool YellowAuto_00304f14(uint8_t* arg0, uint32_t arg1, const void* arg2, bool arg3) {
uint16_t a = GetMonsNo(arg2); uint8_t b = GetFormNo(arg2); uint8_t c = GetSex(arg2); bool d = IsEgg(arg2, 2U); uint32_t e = Func_00305094(a, b, c, d, arg3); bool r = Func_002f9ba0(*(void**)(arg0 + 0x04), *(void**)(arg0 + 0x08), arg1, 0x3EU, e, true); return r;
}
#endif
