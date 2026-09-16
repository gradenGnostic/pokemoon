// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D4A0
void SetAnimationResource(uint8_t*, void*);
extern "C" void YellowAuto_0040d4a0(uint8_t* arg0, void* arg1) __asm__("_ZN7poke_3d5model10BaseCamera34ChangeAnimationLocalByResourceNodeEPN4gfl215renderingengine10scenegraph8resource12ResourceNodeE");
extern "C" void YellowAuto_0040d4a0(uint8_t* arg0, void* arg1) {
arg0[104] = 1;
*(uint32_t*)(arg0 + 100) = 0;
*(uint32_t*)(arg0 + 96) = 0;
arg0[105] = 0;
SetAnimationResource(arg0 + 32, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D4C0
void SetAnimationResource(uint8_t*, void*);
extern "C" void YellowAuto_0040d4c0(uint8_t* arg0, void* arg1) __asm__("_ZN7poke_3d5model10BaseCamera35ChangeAnimationGlobalByResourceNodeEPN4gfl215renderingengine10scenegraph8resource12ResourceNodeE");
extern "C" void YellowAuto_0040d4c0(uint8_t* arg0, void* arg1) {
arg0[104] = 2;
*(uint32_t*)(arg0 + 100) = 0;
*(uint32_t*)(arg0 + 96) = 0;
arg0[105] = 0;
SetAnimationResource(arg0 + 32, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D4E0
void SetAnimationResource(uint8_t*, void*);
extern "C" void YellowAuto_0040d4e0(uint8_t* arg0, void* arg1, uint32_t arg2, uint8_t arg3) __asm__("_ZN7poke_3d5model10BaseCamera40ChangeAnimationLocalSmoothByResourceNodeEPN4gfl215renderingengine10scenegraph8resource12ResourceNodeEjNS2_4math6Easing8EaseFuncE");
extern "C" void YellowAuto_0040d4e0(uint8_t* arg0, void* arg1, uint32_t arg2, uint8_t arg3) {
arg0[104] = 1;
*(uint32_t*)(arg0 + 96) = arg2;
*(uint32_t*)(arg0 + 100) = 0;
arg0[105] = arg3;
SetAnimationResource(arg0 + 32, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00361C50
extern "C" void YellowAuto_00361c50(uint8_t* arg0) __asm__("_ZN7poke_3d5model10BaseCamera7DestroyEv");
extern "C" void YellowAuto_00361c50(uint8_t* arg0) {
((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)(arg0 + 32) + 16)))(arg0 + 32);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040D530
void func_0040d5d4(uint8_t*);
void func_00361920(uint8_t*, void*, void*);
extern "C" uint32_t YellowAuto_0040d530(uint8_t* arg0, void* arg1, void* arg2, void* arg3, uint32_t arg4) __asm__("_ZN7poke_3d5model10BaseCamera6CreateEPN4gfl23gfx12IGLAllocatorEPNS2_4heap11CtrHeapBaseEPNS2_15renderingengine10scenegraph8instance11DrawEnvNodeEj");
extern "C" uint32_t YellowAuto_0040d530(uint8_t* arg0, void* arg1, void* arg2, void* arg3, uint32_t arg4) {
if (arg3 == (void*)0) return 0;
*(void**)(arg0 + 0x5c) = arg2;
void* tbl = *(void**)((uint8_t*)arg3 + 0x20c);
void* elem = *(void**)((uint8_t*)tbl + arg4 * 4);
void* v0 = *(void**)elem;
void* v1 = *(void**)v0;
*(void**)(arg0 + 0x8) = v1;
*(uint32_t*)(arg0 + 0xc) = arg4;
func_0040d5d4(arg0);
func_00361920(arg0 + 0x20, *(void**)(arg0 + 0x5c), arg3);
*(arg0 + 0x68) = 0;
*(uint32_t*)(arg0 + 0x64) = 0;
*(uint32_t*)(arg0 + 0x60) = 0;
return 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3C28
float Easing(uint8_t, float);
extern "C" uint32_t YellowAuto_004a3c28(const uint8_t* arg0, bool arg1) __asm__("_ZNK7poke_3d5model10BaseCamera14GetAspectRatioEb");
extern "C" uint32_t YellowAuto_004a3c28(const uint8_t* arg0, bool arg1) {
if (arg1 == 0) return *(const uint32_t*)(arg0 + 0xB0);
uint8_t mode = *(const uint8_t*)(arg0 + 0x68);
if (mode == 0 || (mode != 1 && mode != 2)) return *(const uint32_t*)(arg0 + 0xB0);
uint32_t total = *(const uint32_t*)(arg0 + 0x60);
uint32_t cur = arg1;
if (total != 0) cur = *(const uint32_t*)(arg0 + 0x64);
float t = 1.0f;
if (total != 0 && cur < total) t = (float)cur / (float)total;
uint8_t idx = *(const uint8_t*)(arg0 + 0x69);
float e = Easing(idx, t);
float self = *(const float*)(arg0 + 0xB0);
float parent = *(const float*)(*(const uint8_t* const*)(arg0 + 0x08) + 0xCC);
const uint8_t* ov = *(const uint8_t* const*)(arg0 + 0x50);
uint32_t flag = 0;
if (ov != 0) flag = *(const uint32_t*)(ov + 0x0C);
float r;
if (ov == 0 || flag == 0) r = parent + (self - parent) * e;
else r = self + (parent - self) * e;
return *(uint32_t*)&r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A4100
float Easing(uint8_t, float);
extern "C" uint32_t YellowAuto_004a4100(const uint8_t* arg0, bool arg1) __asm__("_ZNK7poke_3d5model10BaseCamera6GetFarEb");
extern "C" uint32_t YellowAuto_004a4100(const uint8_t* arg0, bool arg1) {
if (arg1 == 0) return *(const uint32_t*)(arg0 + 0xA8);
uint8_t mode = *(const uint8_t*)(arg0 + 0x68);
if (mode == 0 || (mode != 1 && mode != 2)) return *(const uint32_t*)(arg0 + 0xA8);
uint32_t total = *(const uint32_t*)(arg0 + 0x60);
uint32_t cur = arg1;
if (total != 0) cur = *(const uint32_t*)(arg0 + 0x64);
float t = 1.0f;
if (total != 0 && cur < total) t = (float)cur / (float)total;
uint8_t idx = *(const uint8_t*)(arg0 + 0x69);
float e = Easing(idx, t);
float self = *(const float*)(arg0 + 0xA8);
float parent = *(const float*)(*(const uint8_t* const*)(arg0 + 0x08) + 0xC4);
const uint8_t* ov = *(const uint8_t* const*)(arg0 + 0x50);
uint32_t flag = 0;
if (ov != 0) flag = *(const uint32_t*)(ov + 0x0C);
float r;
if (ov == 0 || flag == 0) r = parent + (self - parent) * e;
else r = self + (parent - self) * e;
return *(uint32_t*)&r;
}
#endif
