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
