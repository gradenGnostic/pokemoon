// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034497C
void FUN_00171f28(uint8_t*);
void FUN_00171c48(uint8_t*);
void GflHeapFreeMemoryBlock(uint8_t*);
extern "C" void YellowAuto_0034497c(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl22ro9RoManager13DisposeModuleEPN2nn2ro6ModuleE");
extern "C" void YellowAuto_0034497c(uint8_t* arg0, uint8_t* arg1) {
uint32_t count = *reinterpret_cast<uint32_t*>(arg0 + 0x24);
if (count == 0) {
return;
}
uint8_t* modBase = *reinterpret_cast<uint8_t**>(arg0 + 0x10);
uint32_t idx = count;
for (uint32_t i = 0; i < count; ++i) {
uint8_t* cur = *reinterpret_cast<uint8_t**>(modBase + i * 4);
if (cur == arg1) {
idx = i;
break;
}
}
if (idx >= count) {
return;
}
if (arg1 != nullptr) {
FUN_00171f28(arg1);
FUN_00171c48(arg1);
uint8_t* base18 = *reinterpret_cast<uint8_t**>(arg0 + 0x18);
if (base18 != nullptr) {
uint8_t* blk = *reinterpret_cast<uint8_t**>(base18 + idx * 4);
if (blk != nullptr) {
GflHeapFreeMemoryBlock(blk);
*reinterpret_cast<uint8_t**>(base18 + idx * 4) = nullptr;
}
}
}
uint8_t* base14 = *reinterpret_cast<uint8_t**>(arg0 + 0x14);
if (base14 != nullptr) {
uint8_t* blk2 = *reinterpret_cast<uint8_t**>(base14 + idx * 4);
if (blk2 != nullptr) {
GflHeapFreeMemoryBlock(blk2);
*reinterpret_cast<uint8_t**>(base14 + idx * 4) = nullptr;
}
}
if (idx < count - 1) {
for (uint32_t i = idx; i + 1 < count; ++i) {
uint8_t* b14 = *reinterpret_cast<uint8_t**>(arg0 + 0x14);
if (b14 != nullptr) {
*reinterpret_cast<uint8_t**>(b14 + i * 4) = *reinterpret_cast<uint8_t**>(b14 + i * 4 + 4);
}
uint8_t* b18 = *reinterpret_cast<uint8_t**>(arg0 + 0x18);
if (b18 != nullptr) {
*reinterpret_cast<uint8_t**>(b18 + i * 4) = *reinterpret_cast<uint8_t**>(b18 + i * 4 + 4);
}
uint8_t* b10 = *reinterpret_cast<uint8_t**>(arg0 + 0x10);
if (b10 != nullptr) {
*reinterpret_cast<uint8_t**>(b10 + i * 4) = *reinterpret_cast<uint8_t**>(b10 + i * 4 + 4);
}
}
}
uint8_t* f14 = *reinterpret_cast<uint8_t**>(arg0 + 0x14);
if (f14 != nullptr) {
*reinterpret_cast<uint8_t**>(f14 + count * 4 - 4) = nullptr;
}
uint8_t* f10 = *reinterpret_cast<uint8_t**>(arg0 + 0x10);
if (f10 != nullptr) {
*reinterpret_cast<uint8_t**>(f10 + count * 4 - 4) = nullptr;
}
uint8_t* f18 = *reinterpret_cast<uint8_t**>(arg0 + 0x18);
if (f18 != nullptr) {
*reinterpret_cast<uint8_t**>(f18 + count * 4 - 4) = nullptr;
}
*reinterpret_cast<uint32_t*>(arg0 + 0x24) = count - 1;
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00344C9C
void GFLassertStop(void);
int32_t FUN_00171e10(void*, void*);
void* GflHeapAllocMemoryBlockAlign(void*, uint32_t, uint32_t);
void* FUN_00171a98(void*, uint32_t, void*, uint32_t, int32_t, int32_t, int32_t);
extern "C" void* YellowAuto_00344c9c(uint8_t* arg0, void* arg1, uint32_t arg2, void* arg3, int32_t arg4) __asm__("_ZN4gfl22ro9RoManager19LoadModuleSetBufferEPvjPNS_4heap11CtrHeapBaseENS0_8FixLevelE");
extern "C" void* YellowAuto_00344c9c(uint8_t* arg0, void* arg1, uint32_t arg2, void* arg3, int32_t arg4) {
uint32_t cap = *(uint32_t*)(arg0 + 0x20); uint32_t cnt = *(uint32_t*)(arg0 + 0x24); if (cap <= cnt) { GFLassertStop(); return (void*)0; } void* heap = (void*)*(uint32_t*)(arg0 + 0x1C); if (arg3 != (void*)0) { heap = arg3; } if (arg1 == (void*)0) { GFLassertStop(); } uint8_t tmp[20]; int32_t r = FUN_00171e10((void*)tmp, arg1); if (r < 0) { GFLassertStop(); } uint32_t bssSize = *(uint32_t*)(tmp + 16); void* bss = GflHeapAllocMemoryBlockAlign(heap, bssSize, 8); void* mod = FUN_00171a98(arg1, arg2, bss, bssSize, 1, arg4, 0); if (mod == (void*)0) { GFLassertStop(); } uint32_t idx = *(uint32_t*)(arg0 + 0x24); uint32_t baseMod = *(uint32_t*)(arg0 + 0x10); uint32_t baseSrc = *(uint32_t*)(arg0 + 0x18); uint32_t baseBss = *(uint32_t*)(arg0 + 0x14); *(uint32_t*)(baseMod + idx * 4) = (uint32_t)mod; *(uint32_t*)(baseSrc + idx * 4) = (uint32_t)arg1; *(uint32_t*)(baseBss + idx * 4) = (uint32_t)bss; *(uint32_t*)(arg0 + 0x24) = idx + 1; return mod;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00344740
void GFLassertStop(void);
void* FUN_00344dc8(void*, void*, void*, const uint8_t*, uint32_t*);
int32_t FUN_00171e10(void*, void*);
void* GflHeapAllocMemoryBlockAlign(void*, uint32_t, uint32_t);
void* FUN_00171a98(void*, uint32_t, void*, uint32_t, int32_t, int32_t, int32_t);
extern "C" void* YellowAuto_00344740(uint8_t* arg0, void* arg1, const uint8_t* arg2, void* arg3, int32_t arg4) __asm__("_ZN4gfl22ro9RoManager10LoadModuleEPNS_2fs16AsyncFileManagerEPKcPNS_4heap11CtrHeapBaseENS0_8FixLevelE");
extern "C" void* YellowAuto_00344740(uint8_t* arg0, void* arg1, const uint8_t* arg2, void* arg3, int32_t arg4) {
uint32_t cap = *(uint32_t*)(arg0 + 0x20); uint32_t cnt = *(uint32_t*)(arg0 + 0x24); if (cap <= cnt) { GFLassertStop(); return (void*)0; } void* heap = (void*)*(uint32_t*)(arg0 + 0x1C); if (arg3 != (void*)0) { heap = arg3; } uint32_t fsize = 0; void* fbuf = FUN_00344dc8((void*)arg0, heap, arg1, arg2, &fsize); if (fbuf == (void*)0) { GFLassertStop(); } uint8_t tmp[20]; int32_t r = FUN_00171e10((void*)tmp, fbuf); if (r < 0) { GFLassertStop(); } uint32_t bssSize = *(uint32_t*)(tmp + 16); void* bss = GflHeapAllocMemoryBlockAlign(heap, bssSize, 8); void* mod = FUN_00171a98(fbuf, fsize, bss, bssSize, 1, arg4, 0); if (mod == (void*)0) { GFLassertStop(); } uint32_t idx = *(uint32_t*)(arg0 + 0x24); uint32_t baseMod = *(uint32_t*)(arg0 + 0x10); uint32_t baseSrc = *(uint32_t*)(arg0 + 0x18); uint32_t baseBss = *(uint32_t*)(arg0 + 0x14); *(uint32_t*)(baseMod + idx * 4) = (uint32_t)mod; *(uint32_t*)(baseSrc + idx * 4) = (uint32_t)fbuf; *(uint32_t*)(baseBss + idx * 4) = (uint32_t)bss; *(uint32_t*)(arg0 + 0x24) = idx + 1; return mod;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00344888
void GFLassertStop(void);
int32_t FUN_001725c0(void*);
void FUN_00171fbc(void*);
extern "C" void YellowAuto_00344888(uint8_t* arg0, void* arg1, bool arg2) __asm__("_ZN4gfl22ro9RoManager11StartModuleEPN2nn2ro6ModuleEb");
extern "C" void YellowAuto_00344888(uint8_t* arg0, void* arg1, bool arg2) {
if (arg1 == (void*)0) { GFLassertStop(); } uint32_t cnt = *(uint32_t*)(arg0 + 0x24); uint32_t base = *(uint32_t*)(arg0 + 0x10); uint32_t i = 0; uint32_t found = 0; for (i = 0; i < cnt; i = i + 1) { if (*(uint32_t*)(base + i * 4) == (uint32_t)arg1) { found = 1; break; } } if (found == 0) { GFLassertStop(); } if (arg2) { int32_t q = FUN_001725c0(arg1); if (q == 0) { GFLassertStop(); } } FUN_00171fbc(arg1); return;
}
#endif
