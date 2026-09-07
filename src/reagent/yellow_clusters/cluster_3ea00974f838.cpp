// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474788
void SetStr(void*, const uint16_t*);
void GFLassert();
extern "C" void YellowAuto_00474788(const uint8_t* arg0, int32_t arg1, void* arg2) __asm__("_ZNK10Regulation12GetTextParamENS_11TextParamIdEPN4gfl23str6StrBufE");
extern "C" void YellowAuto_00474788(const uint8_t* arg0, int32_t arg1, void* arg2) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0 || arg2 == (void*)0) { GFLassert(); return; }
if (arg1 == 0) { SetStr(arg2, (const uint16_t*)(core + 0x21C)); return; }
if (arg1 == 1) { SetStr(arg2, (const uint16_t*)(core + 0x266)); return; }
if (arg1 == 2) { SetStr(arg2, (const uint16_t*)(core + 0x3FC)); return; }
if (arg1 == 3) { SetStr(arg2, (const uint16_t*)(core + 0x446)); return; }
GFLassert(); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015A900
void GflHeapFreeMemoryBlock(void*);
void* GflHeapAllocMemoryBlock(void*, uint32_t);
void MemClear(void*, uint32_t);
void MemCopy(void*, const void*, uint32_t);
extern "C" void YellowAuto_0015a900(uint8_t* arg0, const void* arg1, uint32_t arg2) __asm__("_ZN10Regulation11DeserializeEPKvj");
extern "C" void YellowAuto_0015a900(uint8_t* arg0, const void* arg1, uint32_t arg2) {
void* old = *(void**)(arg0 + 8);
if (old != (void*)0) { GflHeapFreeMemoryBlock(old); *(void**)(arg0 + 8) = (void*)0; }
*(uint32_t*)(arg0 + 12) = arg2;
void* heap = *(void**)(arg0 + 4);
void* mem = GflHeapAllocMemoryBlock(heap, arg2);
*(void**)(arg0 + 8) = mem;
MemClear(mem, arg2);
void* dst = *(void**)(arg0 + 8);
uint32_t sz = *(uint32_t*)(arg0 + 12);
MemCopy(dst, arg1, sz);
*(void**)(arg0 + 16) = *(void**)(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015AE50
void GflHeapFreeMemoryBlock(void*);
void* GflHeapAllocMemoryBlock(void*, uint32_t);
void MemClear(void*, uint32_t);
void MemCopy(void*, const void*, uint32_t);
extern "C" void YellowAuto_0015ae50(uint8_t* arg0, const void* arg1, uint32_t arg2) __asm__("_ZN10Regulation7SetDataEPKvj");
extern "C" void YellowAuto_0015ae50(uint8_t* arg0, const void* arg1, uint32_t arg2) {
void* old = *(void**)(arg0 + 8);
if (old != (void*)0) { GflHeapFreeMemoryBlock(old); *(void**)(arg0 + 8) = (void*)0; }
*(uint32_t*)(arg0 + 12) = arg2;
void* heap = *(void**)(arg0 + 4);
void* mem = GflHeapAllocMemoryBlock(heap, arg2);
*(void**)(arg0 + 8) = mem;
MemClear(mem, arg2);
void* dst = *(void**)(arg0 + 8);
uint32_t sz = *(uint32_t*)(arg0 + 12);
MemCopy(dst, arg1, sz);
*(void**)(arg0 + 16) = *(void**)(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474564
extern "C" bool YellowAuto_00474564(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK10Regulation12GetBoolParamENS_11BoolParamIdE");
extern "C" bool YellowAuto_00474564(const uint8_t* arg0, int32_t arg1) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return false; }
if (arg1 == 0) { return (*(core + 0x0D) != (uint8_t)0); }
if (arg1 == 1) { return (*(core + 0x0E) != (uint8_t)0); }
if (arg1 == 2) { return (*(core + 0x0F) != (uint8_t)0); }
if (arg1 == 3) { return (*(core + 0x1FC) != (uint8_t)0); }
if (arg1 == 4) { return (*(core + 0x205) != (uint8_t)0); }
if (arg1 == 5) { return (*(core + 0x209) != (uint8_t)0); }
if (arg1 == 6) { return (*(core + 0x20B) != (uint8_t)0); }
if (arg1 == 7) { return (*(core + 0x3FA) != (uint8_t)0); }
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004749A4
extern "C" uint32_t YellowAuto_004749a4(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK10Regulation13GetValueParamENS_12ValueParamIdE");
extern "C" uint32_t YellowAuto_004749a4(const uint8_t* arg0, int32_t arg1) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return (uint32_t)0; }
if (arg1 == 0) { return (uint32_t)*(core + 6); }
if (arg1 == 1) { return (uint32_t)*(core + 7); }
if (arg1 == 2) { return (uint32_t)*(core + 8); }
if (arg1 == 3) { return (uint32_t)*(core + 9); }
if (arg1 == 4) { return (uint32_t)*(core + 10); }
if (arg1 == 5) { return (uint32_t)*(core + 11); }
if (arg1 == 6) { return (uint32_t)*(core + 0x207); }
if (arg1 == 7) { return (uint32_t)*(core + 0x208); }
if (arg1 == 8) { return (uint32_t)*(core + 0x20C); }
if (arg1 == 9) { return *(const uint32_t*)(core + 0x218); }
if (arg1 == 10) { return *(const uint32_t*)(core + 0x3F4); }
if (arg1 == 11) { return (uint32_t)*(const uint16_t*)(core + 0x3F8); }
if (arg1 == 12) { return (uint32_t)*(core + 0x490); }
if (arg1 == 13) { return (uint32_t)*(core + 0x491); }
if (arg1 == 14) { return (uint32_t)*(core + 0x492); }
if (arg1 == 15) { return (uint32_t)*(core + 0x493); }
if (arg1 == 16) { return (uint32_t)*(const uint16_t*)(core + 0x494); }
if (arg1 == 17) { return (uint32_t)*(core + 0x496); }
if (arg1 == 18) { return (uint32_t)*(core + 0x497); }
if (arg1 == 19) { return (uint32_t)*(const uint16_t*)(core + 0x498); }
if (arg1 == 20) { return (uint32_t)*(core + 0x49A); }
if (arg1 == 21) { return (uint32_t)*(core + 0x49B); }
return (uint32_t)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474868
extern "C" bool YellowAuto_00474868(const uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZNK10Regulation13CheckParamBitENS_10BitParamIdEj");
extern "C" bool YellowAuto_00474868(const uint8_t* arg0, int32_t arg1, uint32_t arg2) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return false; }
uint32_t buff = arg2 >> 3;
uint32_t bit = arg2 & 7U;
uint32_t base = 0U;
if (arg1 == 0) { base = 0x7CU; }
else { if (arg1 == 1) { base = 0xFCU; } else { if (arg1 == 2) { base = 0x17CU; } else { return false; } } }
uint8_t v = *(core + base + buff);
uint8_t m = (uint8_t)((uint32_t)1U << bit);
return ((v & m) != (uint8_t)0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474668
void* OperatorNew(uint32_t, void*);
void* GetLowerHandle(void*);
void* StrBufInit(void*, uint32_t, void*);
void SetStr(void*, const uint16_t*);
extern "C" void* YellowAuto_00474668(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK10Regulation12GetTextParamENS_11TextParamIdE");
extern "C" void* YellowAuto_00474668(const uint8_t* arg0, int32_t arg1) {
const uint8_t* chk = *(const uint8_t* const*)(arg0 + 16);
if (chk == (const uint8_t*)0) { return (void*)0; }
uint32_t sz = 0U;
if (arg1 == 1) { sz = 199U; }
else { if (arg1 == 0 || arg1 == 2 || arg1 == 3) { sz = 37U; } else { sz = 0U; } }
void* heap = *(void**)(arg0 + 4);
void* mem = OperatorNew(16U, heap);
void* buf = (void*)0;
if (mem != (void*)0) { void* h = GetLowerHandle(heap); buf = StrBufInit(mem, sz, h); }
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0 || buf == (void*)0) { return buf; }
if (arg1 == 0) { SetStr(buf, (const uint16_t*)(core + 0x21C)); return buf; }
if (arg1 == 1) { SetStr(buf, (const uint16_t*)(core + 0x266)); return buf; }
if (arg1 == 2) { SetStr(buf, (const uint16_t*)(core + 0x3FC)); return buf; }
if (arg1 == 3) { SetStr(buf, (const uint16_t*)(core + 0x446)); return buf; }
return buf;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474B28
extern "C" uint32_t YellowAuto_00474b28(const uint8_t* arg0) __asm__("_ZNK10Regulation16GetTimeLimitTypeEv");
extern "C" uint32_t YellowAuto_00474b28(const uint8_t* arg0) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return (uint32_t)0; }
return (uint32_t)*(core + 0x206);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474B58
extern "C" uint32_t YellowAuto_00474b58(const uint8_t* arg0) __asm__("_ZNK10Regulation17GetBackGroundTypeEv");
extern "C" uint32_t YellowAuto_00474b58(const uint8_t* arg0) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return (uint32_t)0; }
return (uint32_t)*(core + 0x20A);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474BB8
extern "C" uint32_t YellowAuto_00474bb8(const uint8_t* arg0) __asm__("_ZNK10Regulation17GetLevelRangeTypeEv");
extern "C" uint32_t YellowAuto_00474bb8(const uint8_t* arg0) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return (uint32_t)0; }
return (uint32_t)*(core + 0x0C);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474B88
extern "C" uint32_t YellowAuto_00474b88(const uint8_t* arg0) __asm__("_ZNK10Regulation17GetBattleCategoryEv");
extern "C" uint32_t YellowAuto_00474b88(const uint8_t* arg0) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return (uint32_t)0; }
return (uint32_t)*(core + 0x04);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474974
extern "C" uint32_t YellowAuto_00474974(const uint8_t* arg0) __asm__("_ZNK10Regulation13GetBattleRuleEv");
extern "C" uint32_t YellowAuto_00474974(const uint8_t* arg0) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return (uint32_t)0; }
return (uint32_t)*(core + 0x05);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474BE8
extern "C" bool YellowAuto_00474be8(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK10Regulation18CheckParamLanguageEi");
extern "C" bool YellowAuto_00474be8(const uint8_t* arg0, int32_t arg1) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return false; }
int32_t buff = arg1 / 8;
int32_t bit = arg1 % 8;
uint8_t v = *(core + 0x214 + buff);
uint8_t m = (uint8_t)((uint32_t)1U << (uint32_t)bit);
return ((v & m) != (uint8_t)0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474918
extern "C" bool YellowAuto_00474918(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK10Regulation13CheckParamRomEi");
extern "C" bool YellowAuto_00474918(const uint8_t* arg0, int32_t arg1) {
const uint8_t* core = *(const uint8_t* const*)(arg0 + 16);
if (core == (const uint8_t*)0) { return false; }
int32_t adj = arg1 - 30;
int32_t buff = adj / 8;
int32_t bit = adj % 8;
uint8_t v = *(core + 0x210 + buff);
uint8_t m = (uint8_t)((uint32_t)1U << (uint32_t)bit);
return ((v & m) != (uint8_t)0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474EB4
uint16_t Crc16(const void*, const uint8_t*, uint32_t);
extern const uint32_t DAT_00474f0c;
extern "C" bool YellowAuto_00474eb4(const uint8_t* arg0) __asm__("_ZNK10Regulation8CheckCrcEv");
extern "C" bool YellowAuto_00474eb4(const uint8_t* arg0) {
if (*(const uint32_t*)(arg0 + 16) == 0) return false; return Crc16((const void*)0, (const uint8_t*)(*(const uint32_t*)(arg0 + 16)), DAT_00474f0c) == *(const uint16_t*)((const uint8_t*)(*(const uint32_t*)(arg0 + 16)) + 0x4A4);
}
#endif
