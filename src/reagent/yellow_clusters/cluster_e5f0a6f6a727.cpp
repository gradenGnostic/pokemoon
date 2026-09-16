// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414418
void FUN_00414c3c(uint8_t*, void*, void*, uint32_t*, uint32_t);
extern "C" void YellowAuto_00414418(uint8_t* arg0, void* arg1, void* arg2, uint32_t* arg3) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager15InitializeAsyncEPN4gfl22fs16AsyncFileManagerEPNS2_4heap11CtrHeapBaseEPi");
extern "C" void YellowAuto_00414418(uint8_t* arg0, void* arg1, void* arg2, uint32_t* arg3) {
for (uint32_t i = 0; i < 2; ++i) {
FUN_00414c3c(arg0 + i * 64, arg1, arg2, arg3 + i * 15, 0);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414460
void FUN_00412cac(uint8_t*);
extern "C" void YellowAuto_00414460(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager18UnloadDressUpPartsERKNS0_12DressUpParamE");
extern "C" void YellowAuto_00414460(uint8_t* arg0, const uint8_t* arg1) {
int16_t sex = *(const int16_t*)arg1;
uint8_t* inner = arg0 + sex * 64;
uint8_t* arr = *(uint8_t**)(inner + 36);
for (uint32_t i = 0; i < 14; ++i) {
uint8_t* e = arr + i * 180;
FUN_00412cac(e);
*(int16_t*)(e + 176) = (int16_t)-1;
}
*(uint32_t*)(inner + 40) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A4F4C
uint32_t FUN_004a4d70(const uint8_t*);
extern "C" bool YellowAuto_004a4f4c(const uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNK7poke_3d5model27DressUpModelResourceManager21CanUnloadDressUpPartsERKNS0_12DressUpParamE");
extern "C" bool YellowAuto_004a4f4c(const uint8_t* arg0, const uint8_t* arg1) {
int16_t sex = *(const int16_t*)arg1;
const uint8_t* inner = arg0 + sex * 64;
const uint8_t* arr = *(const uint8_t* const*)(inner + 36);
for (uint32_t i = 0; i < 14; ++i) {
const uint8_t* e = arr + i * 180;
if (FUN_004a4d70(e) == 0) return false;
}
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004146C8
void FUN_00412cac(uint8_t*);
extern "C" void YellowAuto_004146c8(uint8_t* arg0) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager21UnloadDressUpPartsAllEv");
extern "C" void YellowAuto_004146c8(uint8_t* arg0) {
for (uint32_t j = 0; j < 2; ++j) {
uint8_t* inner = arg0 + j * 64;
uint8_t* arr = *(uint8_t**)(inner + 36);
for (uint32_t i = 0; i < 14; ++i) {
uint8_t* e = arr + i * 180;
FUN_00412cac(e);
*(int16_t*)(e + 176) = (int16_t)-1;
}
*(uint32_t*)(inner + 40) = 0;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414810
void FUN_00413108(uint8_t*, uint32_t);
extern "C" void YellowAuto_00414810(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager29UnloadDressUpDynamicAnimationERKNS0_12DressUpParamEj");
extern "C" void YellowAuto_00414810(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
int16_t sex = *(const int16_t*)arg1;
uint8_t* inner = arg0 + sex * 64;
uint8_t* arcBase = *(uint8_t**)(inner + 4);
uint8_t* extraBase = *(uint8_t**)(inner + 16);
uint8_t* arr = *(uint8_t**)(inner + 36);
uint32_t hi = arg2 >> 16;
for (uint32_t i = 0; i < 14; ++i) {
int32_t arc = *(int32_t*)(arcBase + i * 4);
uint32_t ex = *(uint32_t*)(extraBase + i * 4);
int16_t did = *(const int16_t*)(arg1 + 10 + i * 2);
if (arc >= 0 && ex != 0 && did >= 0) {
uint8_t* e = arr + i * 180;
FUN_00413108(e, hi);
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414750
void FUN_00413064(uint8_t*, uint32_t, void*, void*);
extern "C" void YellowAuto_00414750(uint8_t* arg0, void* arg1, void* arg2, const uint8_t* arg3, uint32_t arg4) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager28SetupDressUpDynamicAnimationEPN4gfl23gfx12IGLAllocatorEPNS2_4heap11CtrHeapBaseERKNS0_12DressUpParamEj");
extern "C" void YellowAuto_00414750(uint8_t* arg0, void* arg1, void* arg2, const uint8_t* arg3, uint32_t arg4) {
int16_t sex = *(const int16_t*)arg3;
uint8_t* inner = arg0 + sex * 64;
uint8_t* arcBase = *(uint8_t**)(inner + 4);
uint8_t* extraBase = *(uint8_t**)(inner + 16);
uint8_t* arr = *(uint8_t**)(inner + 36);
uint32_t hi = arg4 >> 16;
for (uint32_t i = 0; i < 14; ++i) {
int32_t arc = *(int32_t*)(arcBase + i * 4);
uint32_t ex = *(uint32_t*)(extraBase + i * 4);
int16_t did = *(const int16_t*)(arg3 + 10 + i * 2);
if (arc >= 0 && ex != 0 && did >= 0) {
uint8_t* e = arr + i * 180;
FUN_00413064(e, hi, arg1, arg2);
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004148C4
uint32_t FUN_004a4ec8(uint8_t*, uint32_t, void*);
extern "C" bool YellowAuto_004148c4(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager31IsDressUpDynamicAnimationLoadedERKNS0_12DressUpParamEj");
extern "C" bool YellowAuto_004148c4(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
int16_t sex = *(const int16_t*)arg1;
uint8_t* inner = arg0 + sex * 64;
uint8_t* arcBase = *(uint8_t**)(inner + 4);
uint8_t* extraBase = *(uint8_t**)(inner + 16);
uint8_t* arr = *(uint8_t**)(inner + 36);
void* fm = *(void**)(inner + 28);
uint32_t hi = arg2 >> 16;
for (uint32_t i = 0; i < 14; ++i) {
int32_t arc = *(int32_t*)(arcBase + i * 4);
uint32_t ex = *(uint32_t*)(extraBase + i * 4);
int16_t did = *(const int16_t*)(arg1 + 10 + i * 2);
if (arc < 0 || ex == 0 || did < 0) continue;
uint8_t* e = arr + i * 180;
if (FUN_004a4ec8(e, hi, fm) == 0) return false;
}
return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041460C
void FUN_00415b24(uint8_t*, uint16_t*, const uint16_t*);
void FUN_00412bb4(uint8_t*, uint32_t, uint32_t, int32_t, void*, void*);
extern "C" void YellowAuto_0041460c(uint8_t* arg0, const uint16_t* arg1) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager21LoadDressUpPartsAsyncERKNS0_12DressUpParamE");
extern "C" void YellowAuto_0041460c(uint8_t* arg0, const uint16_t* arg1) {
uint8_t* base = arg0 + (int32_t)(int16_t)arg1[0] * 0x40;
uint16_t tmp[14];
FUN_00415b24(base, tmp, arg1);
for (int32_t i = 0; i < 14; ++i) {
if ((int16_t)tmp[i] >= 0) {
uint8_t* e = (uint8_t*)(*(uint32_t*)(base + 0x24)) + i * 0xB4;
uint32_t tbl = *((uint32_t*)(*(uint32_t*)(base + 0x04)) + i);
int32_t fidx = (int32_t)(int16_t)tmp[i];
void* v20 = (void*)(*(uint32_t*)(base + 0x20));
void* v1c = (void*)(*(uint32_t*)(base + 0x1C));
FUN_00412bb4(e, 1, tbl, fidx, v20, v1c);
*(uint16_t*)(e + 0xB0) = arg1[i + 5];
}
}
*(base + 0x3C) = *((const uint8_t*)arg1 + 0x27);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004144AC
void FUN_00415b24(uint8_t*, uint16_t*, const uint16_t*);
uint32_t FUN_004a4cf4(uint8_t*, void*);
extern "C" bool YellowAuto_004144ac(uint8_t* arg0, const uint16_t* arg1) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager19IsSetupDressUpPartsERKNS0_12DressUpParamE");
extern "C" bool YellowAuto_004144ac(uint8_t* arg0, const uint16_t* arg1) {
uint8_t* base = arg0 + (int32_t)(int16_t)arg1[0] * 0x40;
uint16_t tmp[16];
FUN_00415b24(base, tmp, arg1);
for (int32_t i = 0; i < 14; ++i) {
uint8_t* e = (uint8_t*)(*(uint32_t*)(base + 0x24)) + i * 0xB4;
if ((int16_t)(*(uint16_t*)(e + 0xB0)) != (int16_t)arg1[i + 5]) return false;
if ((int16_t)tmp[i] >= 0) {
void* mgr = (void*)(*(uint32_t*)(base + 0x1C));
if (FUN_004a4cf4(e, mgr) == 0) return false;
}
}
if (*(uint32_t*)(base + 0x28) < 2) return false;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414568
void FUN_00415b24(uint8_t*, uint16_t*, const uint16_t*);
uint32_t FUN_004a4cf4(uint8_t*, void*);
extern "C" bool YellowAuto_00414568(uint8_t* arg0, const uint16_t* arg1) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager20IsDressUpPartsLoadedERKNS0_12DressUpParamE");
extern "C" bool YellowAuto_00414568(uint8_t* arg0, const uint16_t* arg1) {
uint8_t* base = arg0 + (int32_t)(int16_t)arg1[0] * 0x40;
uint16_t tmp[14];
FUN_00415b24(base, tmp, arg1);
for (int32_t i = 0; i < 14; ++i) {
uint8_t* e = (uint8_t*)(*(uint32_t*)(base + 0x24)) + i * 0xB4;
if ((int16_t)(*(uint16_t*)(e + 0xB0)) != (int16_t)arg1[i + 5]) return false;
if ((int16_t)tmp[i] >= 0) {
void* mgr = (void*)(*(uint32_t*)(base + 0x1C));
if (FUN_004a4cf4(e, mgr) == 0) return false;
}
}
return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00415D8C
int32_t FUN_004a4b4c(void* arg0, uint32_t arg1);
void FUN_00413148(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, void* arg4, void* arg5);
extern "C" void YellowAuto_00415d8c(uint8_t* arg0, void* arg1, const uint16_t* arg2, uint32_t arg3) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager31LoadDressUpDynamicAnimationSyncEPN4gfl24heap11CtrHeapBaseERKNS0_12DressUpParamEj");
extern "C" void YellowAuto_00415d8c(uint8_t* arg0, void* arg1, const uint16_t* arg2, uint32_t arg3) {
int32_t s = (int32_t)(int16_t)arg2[0];
uint8_t* b = arg0 + s * 64;
uint32_t hi = arg3 >> 16;
void* hp = arg1;
uint32_t stk[2];
stk[0] = *(uint32_t*)(b + 8);
stk[1] = (uint32_t)(const void*)arg2;
uint32_t i = 0;
while (1) {
int32_t arc = (int32_t)*(uint32_t*)((uint8_t*)(*(uint32_t*)(b + 4)) + i * 4);
uint32_t tab = *(uint32_t*)((uint8_t*)(*(uint32_t*)(b + 16)) + i * 4);
int32_t sel = (int32_t)(int16_t)arg2[i + 5];
if (arc >= 0 && tab != 0 && sel >= 0) {
if (i != 12) {
uint32_t idx = i & 255;
int32_t q = FUN_004a4b4c((void*)stk, idx);
int32_t mi = -1;
if (q >= 0) {
uint32_t inner = *(uint32_t*)((uint8_t*)stk[0] + idx * 4);
uint32_t cnt = *(uint32_t*)((uint8_t*)inner);
uint8_t* slot = (uint8_t*)0;
if ((uint32_t)q < cnt) slot = (uint8_t*)inner + 4 + (uint32_t)q * 8;
mi = (int32_t)(int16_t)*(uint16_t*)slot;
}
uint8_t* dst = (uint8_t*)(*(uint32_t*)(b + 36)) + i * 180;
uint32_t tval = *(uint32_t*)((uint8_t*)tab + mi * 4);
uint32_t f = hi + tval - 1;
uint32_t aid = *(uint32_t*)((uint8_t*)(*(uint32_t*)(b + 4)) + i * 4);
void* am = (void*)(*(uint32_t*)(b + 28));
FUN_00413148(dst, aid, f, hi, hp, am);
}
}
i = i + 1;
if (i > 13) break;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00415F14
int32_t FUN_004a4b4c(void* arg0, uint32_t arg1);
void FUN_004131ec(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, void* arg4, void* arg5);
extern "C" void YellowAuto_00415f14(uint8_t* arg0, void* arg1, const uint16_t* arg2, uint32_t arg3) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager32LoadDressUpDynamicAnimationAsyncEPN4gfl24heap11CtrHeapBaseERKNS0_12DressUpParamEj");
extern "C" void YellowAuto_00415f14(uint8_t* arg0, void* arg1, const uint16_t* arg2, uint32_t arg3) {
int32_t s = (int32_t)(int16_t)arg2[0];
uint8_t* b = arg0 + s * 64;
uint32_t hi = arg3 >> 16;
void* hp = arg1;
uint32_t stk[2];
stk[0] = *(uint32_t*)(b + 8);
stk[1] = (uint32_t)(const void*)arg2;
uint32_t i = 0;
while (1) {
int32_t arc = (int32_t)*(uint32_t*)((uint8_t*)(*(uint32_t*)(b + 4)) + i * 4);
uint32_t tab = *(uint32_t*)((uint8_t*)(*(uint32_t*)(b + 16)) + i * 4);
int32_t sel = (int32_t)(int16_t)arg2[i + 5];
if (arc >= 0 && tab != 0 && sel >= 0) {
if (i != 12) {
uint32_t idx = i & 255;
int32_t q = FUN_004a4b4c((void*)stk, idx);
int32_t mi = -1;
if (q >= 0) {
uint32_t inner = *(uint32_t*)((uint8_t*)stk[0] + idx * 4);
uint32_t cnt = *(uint32_t*)((uint8_t*)inner);
uint8_t* slot = (uint8_t*)0;
if ((uint32_t)q < cnt) slot = (uint8_t*)inner + 4 + (uint32_t)q * 8;
mi = (int32_t)(int16_t)*(uint16_t*)slot;
}
uint8_t* dst = (uint8_t*)(*(uint32_t*)(b + 36)) + i * 180;
uint32_t tval = *(uint32_t*)((uint8_t*)tab + mi * 4);
uint32_t f = hi + tval - 1;
uint32_t aid = *(uint32_t*)((uint8_t*)(*(uint32_t*)(b + 4)) + i * 4);
void* am = (void*)(*(uint32_t*)(b + 28));
FUN_004131ec(dst, aid, f, hi, hp, am);
}
}
i = i + 1;
if (i > 13) break;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414AAC
void FUN_00412cac(uint8_t* arg0);
void FUN_003616fc(uint8_t* arg0);
void FUN_00301a78(void* arg0, void* arg1);
extern void* DAT_00414b50;
extern "C" void YellowAuto_00414aac(uint8_t* arg0) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager8FinalizeEv");
extern "C" void YellowAuto_00414aac(uint8_t* arg0) {
uint32_t i = 0; do { uint8_t* s = arg0 + i * 0x40; uint8_t* arr = *(uint8_t**)(s + 0x24); if (arr != (uint8_t*)0) { uint32_t j = 0; do { uint8_t* e = arr + j * 0xb4; FUN_00412cac(e); *(uint16_t*)(e + 0xb0) = 0xffff; j = j + 1; } while (j < 0xe); *(uint32_t*)(s + 0x28) = 0; j = 0; do { uint8_t* e2 = arr + j * 0xb4; FUN_003616fc(e2); j = j + 1; } while (j < 0xe); uint8_t* arr2 = *(uint8_t**)(s + 0x24); if (arr2 != (uint8_t*)0) { FUN_00301a78(arr2, DAT_00414b50); *(uint32_t*)(s + 0x24) = 0; } } i = i + 1; } while (i < 2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00415C2C
uint32_t FUN_004157c8(uint8_t* arg0, void* arg1, const uint8_t* arg2, uint32_t arg3);
uint32_t FUN_0041609c(uint8_t* arg0, void* arg1, const uint8_t* arg2, uint32_t arg3, uint32_t* arg4, uint32_t* arg5, uint32_t* arg6);
extern "C" uint32_t YellowAuto_00415c2c(uint8_t* arg0, void* arg1, const uint8_t* arg2) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager26WaitSetupDressUpPartsAsyncEPN4gfl23gfx12IGLAllocatorERKNS0_12DressUpParamE");
extern "C" uint32_t YellowAuto_00415c2c(uint8_t* arg0, void* arg1, const uint8_t* arg2) {
int16_t idx = *(const int16_t*)arg2; uint8_t* s = arg0 + idx * 0x40; uint32_t st = *(uint32_t*)(s + 0x28); if (st == 0) { FUN_004157c8(s, arg1, arg2, 0); *(uint32_t*)(s + 0x28) = *(uint32_t*)(s + 0x28) + 1; return 0; } if (st == 1) { int32_t cur = *(int32_t*)(*(uint32_t*)(s + 0x4) + *(uint32_t*)(s + 0x2c) * 4); while (cur < 0) { uint32_t n = *(uint32_t*)(s + 0x2c) + 1; *(uint32_t*)(s + 0x2c) = n; cur = *(int32_t*)(*(uint32_t*)(s + 0x4) + n * 4); } uint32_t r = 0; do { r = FUN_0041609c(s, arg1, arg2, *(uint32_t*)(s + 0x2c), (uint32_t*)(s + 0x30), (uint32_t*)(s + 0x34), (uint32_t*)(s + 0x38)); if (*(uint32_t*)(s + 0x30) > 5) { *(uint32_t*)(s + 0x30) = 0; *(uint32_t*)(s + 0x34) = 0; uint32_t nx = *(uint32_t*)(s + 0x2c) + 1; *(uint32_t*)(s + 0x2c) = nx; *(uint32_t*)(s + 0x38) = 0; if (nx > 0xd) { *(uint32_t*)(s + 0x28) = *(uint32_t*)(s + 0x28) + 1; return 1; } int32_t cur2 = *(int32_t*)(*(uint32_t*)(s + 0x4) + nx * 4); while (cur2 < 0) { uint32_t n2 = *(uint32_t*)(s + 0x2c) + 1; *(uint32_t*)(s + 0x2c) = n2; cur2 = *(int32_t*)(*(uint32_t*)(s + 0x4) + n2 * 4); } } } while (r == 0); return 0; } if (st == 2) { return 1; } return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004142C0
void FUN_004164cc(uint8_t* arg0);
void* FUN_004b4968(uint32_t arg0, void* arg1);
void* FUN_00100050(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3);
extern void* DAT_00414414;
int32_t FUN_00496d88(void* arg0, int32_t arg1);
void FUN_00497b78(void* arg0, int32_t arg1, uint32_t* arg2);
void FUN_00412b10(uint8_t* arg0, void* arg1, uint32_t arg2);
extern "C" void YellowAuto_004142c0(uint8_t* arg0, void* arg1, void* arg2, uint32_t* arg3) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager10InitializeEPN4gfl22fs16AsyncFileManagerEPNS2_4heap11CtrHeapBaseEPi");
extern "C" void YellowAuto_004142c0(uint8_t* arg0, void* arg1, void* arg2, uint32_t* arg3) {
uint32_t i = 0; do { uint8_t* s = arg0 + i * 0x40; *(uint32_t*)(s + 0x4) = 0; *(uint32_t*)(s + 0x8) = 0; *(uint32_t*)(s + 0xc) = 0; *(uint32_t*)(s + 0x10) = 0; *(uint32_t*)(s + 0x14) = 0; *(uint32_t*)(s + 0x18) = 0; *(void**)(s + 0x1c) = arg1; *(void**)(s + 0x20) = arg2; *(uint32_t*)(s + 0x0) = *(arg3 + i * 15); FUN_004164cc(s); void* blk = FUN_004b4968(0x9e0, *(void**)(s + 0x20)); uint8_t* vec = (uint8_t*)0; if (blk != (void*)0) { *(uint32_t*)blk = 0xb4; *(uint32_t*)((uint8_t*)blk + 4) = 0xe; vec = (uint8_t*)FUN_00100050((uint8_t*)blk + 8, DAT_00414414, 0xb4, 0xe); } *(uint8_t**)(s + 0x24) = vec; uint32_t j = 0; do { int32_t id = (int32_t)*(uint32_t*)(*(uint32_t*)(s + 0x4) + j * 4); if (id >= 0) { int32_t h = FUN_00496d88(*(void**)(s + 0x1c), id); uint32_t tmp[3]; uint32_t out[2]; out[0] = 0; FUN_00497b78((void*)tmp, h, out); uint32_t base = *(uint32_t*)(*(uint32_t*)(*(uint32_t*)(s + 0xc) + j * 4)); uint32_t jj = j & 0xff; if (jj < 2 || jj == 10) { base = base << 1; } uint32_t cnt = out[0]; uint32_t q = (cnt - base - 3) / base; FUN_00412b10(*(uint8_t**)(s + 0x24) + j * 0xb4, *(void**)(s + 0x20), q + 1); } j = j + 1; } while (j < 0xe); i = i + 1; } while (i < 2);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414B78
void FUN_00412cac(uint8_t*);
void FUN_003616fc(uint8_t*);
void __aeabi_vec_delete(uint8_t*, void*);
void __aeabi_vec_dtor(uint8_t*, void*, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_00414b78(uint8_t* arg0) __asm__("_ZN7poke_3d5model27DressUpModelResourceManagerD1Ev");
extern "C" uint8_t* YellowAuto_00414b78(uint8_t* arg0) {
uint32_t i = 0;
do {
uint32_t b = i * 0x40;
uint32_t a = *(uint32_t*)(arg0 + b + 0x24);
if (a != 0) {
for (uint32_t j = 0; j < 14; ++j) {
uint8_t* e = (uint8_t*)(a + j * 0xB4);
FUN_00412cac(e);
*(uint16_t*)(e + 0xB0) = 0xFFFF;
}
*(uint32_t*)(arg0 + b + 0x28) = 0;
for (uint32_t j = 0; j < 14; ++j) {
FUN_003616fc((uint8_t*)(a + j * 0xB4));
}
uint32_t a2 = *(uint32_t*)(arg0 + b + 0x24);
if (a2 != 0) {
__aeabi_vec_delete((uint8_t*)a2, (void*)0);
*(uint32_t*)(arg0 + b + 0x24) = 0;
}
}
i = i + 1;
} while (i < 2);
__aeabi_vec_dtor(arg0, (void*)0, 64, 2);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00414F8C
uint32_t FUN_004157c8(uint8_t*, void*, const uint8_t*, uint32_t);
uint32_t FUN_0041609c(uint8_t*, void*, const uint8_t*, uint32_t, uint32_t*, uint32_t*, uint32_t*);
void CurrentSleep(uint32_t);
extern "C" uint32_t YellowAuto_00414f8c(uint8_t* arg0, void* arg1, const uint8_t* arg2) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager17SetupDressUpPartsEPN4gfl23gfx12IGLAllocatorERKNS0_12DressUpParamE");
extern "C" uint32_t YellowAuto_00414f8c(uint8_t* arg0, void* arg1, const uint8_t* arg2) {
int16_t idx0 = *(int16_t*)arg2;
*(int32_t*)(arg0 + 0x80) = (int32_t)idx0;
uint8_t* b = arg0 + (int32_t)idx0 * 0x40;
*(uint32_t*)(b + 0x28) = 0;
*(uint32_t*)(b + 0x2C) = 0;
*(uint32_t*)(b + 0x30) = 0;
*(uint32_t*)(b + 0x34) = 0;
*(uint32_t*)(b + 0x38) = 0;
while (1) {
uint32_t st = *(uint32_t*)(b + 0x28);
if (st == 0) {
FUN_004157c8(b, arg1, arg2, 0);
*(uint32_t*)(b + 0x28) = st + 1;
} else if (st == 1) {
uint32_t tbl = *(uint32_t*)(b + 0x04);
uint32_t ci = *(uint32_t*)(b + 0x2C);
while (*(int32_t*)(tbl + ci * 4) < 0) {
ci = ci + 1;
*(uint32_t*)(b + 0x2C) = ci;
}
while (1) {
uint32_t cur = *(uint32_t*)(b + 0x2C);
uint32_t r = FUN_0041609c(b, arg1, arg2, cur, (uint32_t*)(b + 0x30), (uint32_t*)(b + 0x34), (uint32_t*)(b + 0x38));
uint32_t c = *(uint32_t*)(b + 0x30);
if (c > 5) {
*(uint32_t*)(b + 0x30) = 0;
*(uint32_t*)(b + 0x34) = 0;
*(uint32_t*)(b + 0x38) = 0;
uint32_t nx = *(uint32_t*)(b + 0x2C) + 1;
*(uint32_t*)(b + 0x2C) = nx;
if (nx > 13) {
*(uint32_t*)(b + 0x28) = *(uint32_t*)(b + 0x28) + 1;
return 1;
}
uint32_t tbl2 = *(uint32_t*)(b + 0x04);
while (*(int32_t*)(tbl2 + nx * 4) < 0) {
nx = nx + 1;
*(uint32_t*)(b + 0x2C) = nx;
}
}
if (r != 0) {
break;
}
}
} else if (st == 2) {
return 1;
}
CurrentSleep(1);
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041498C
int32_t func_004A4B4C(void*, uint32_t);
void func_004131EC(void*, uint32_t, int32_t, uint32_t, void*, void*);
extern "C" void YellowAuto_0041498c(uint8_t* arg0, const uint16_t* arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model27DressUpModelResourceManager32LoadDressUpDynamicAnimationAsyncERKNS0_12DressUpParamEj");
extern "C" void YellowAuto_0041498c(uint8_t* arg0, const uint16_t* arg1, uint32_t arg2) {
int32_t v0 = (int16_t)arg1[0];
uint8_t* v1 = arg0 + v0 * 64;
void* v2 = *(void**)(v1 + 32);
uint32_t v3 = *(uint32_t*)(v1 + 8);
uint32_t* v4 = *(uint32_t**)(v1 + 4);
uint32_t* v5 = *(uint32_t**)(v1 + 16);
uint8_t* v6 = *(uint8_t**)(v1 + 36);
void* v7 = *(void**)(v1 + 28);
uint32_t v8 = arg2 >> 16;
for (uint32_t v9 = 0; v9 < 14; ++v9) {
if (v9 == 12) continue;
if ((int32_t)v4[v9] < 0) continue;
if (v5[v9] == 0) continue;
if ((int16_t)arg1[v9 + 5] < 0) continue;
int32_t v10 = func_004A4B4C((void*)&v3, v9 & 255);
int32_t v11 = -1;
if (v10 >= 0) {
uint32_t v12a = v3 + (v9 & 255) * 4;
uint32_t v12b = *(uint32_t*)(v12a);
uint32_t* v12c = (uint32_t*)(v12b);
uint32_t* v13 = (uint32_t*)0;
if ((uint32_t)v10 < v12c[0]) v13 = v12c + v10 * 2 + 1;
v11 = (int32_t)(int16_t)v13[0];
}
uint32_t v14a = v5[v9];
int32_t v14b = (int32_t)(*(uint32_t*)(v14a + (uint32_t)(v11 * 4)));
func_004131EC((void*)(v6 + v9 * 180), v4[v9], (int32_t)(v8 + v14b - 1), v8, v2, v7);
}
}
#endif
