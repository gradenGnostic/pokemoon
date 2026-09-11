// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004120A0
void GFLassert();
extern "C" void YellowAuto_004120a0(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN7poke_3d5model17CharaModelFactory8SetModelEjPv");
extern "C" void YellowAuto_004120a0(uint8_t* arg0, uint32_t arg1, void* arg2) {
if (*(uint32_t*)(*(uint8_t**)(arg0 + 20)) <= arg1) { GFLassert(); return; } uint8_t* a = *(uint8_t**)(arg0 + 12) + arg1 * 44; if (a != (uint8_t*)0) { *(void**)(a + 4) = arg2; *(uint32_t*)(a + 8) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041163C
void GFLassert();
void FUN_00412bb4(uint8_t*, uint32_t, uint32_t, uint32_t, void*, void*);
extern "C" void YellowAuto_0041163c(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model17CharaModelFactory14LoadModelAsyncEPN4gfl24heap11CtrHeapBaseEj");
extern "C" void YellowAuto_0041163c(uint8_t* arg0, void* arg1, uint32_t arg2) {
if (*(uint32_t*)(*(uint8_t**)(arg0 + 20)) <= arg2) { GFLassert(); return; } uint8_t* a = *(uint8_t**)(arg0 + 12) + arg2 * 44; if (a != (uint8_t*)0) { FUN_00412bb4(a, 1, *(uint32_t*)arg0, arg2, arg1, *(void**)(arg0 + 4)); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004116B0
void GFLassert();
void FUN_00412bb4(uint8_t*, uint32_t, uint32_t, uint32_t, void*, void*);
extern "C" void YellowAuto_004116b0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model17CharaModelFactory14LoadModelAsyncEj");
extern "C" void YellowAuto_004116b0(uint8_t* arg0, uint32_t arg1) {
if (*(uint32_t*)(*(uint8_t**)(arg0 + 20)) <= arg1) { GFLassert(); return; } uint8_t* a = *(uint8_t**)(arg0 + 12) + arg1 * 44; if (a != (uint8_t*)0) { FUN_00412bb4(a, 1, *(uint32_t*)arg0, arg1, *(void**)(arg0 + 8), *(void**)(arg0 + 4)); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411E44
void FUN_00413148(uint8_t*, uint32_t, uint32_t, uint32_t, void*, void*);
extern "C" void YellowAuto_00411e44(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model17CharaModelFactory24LoadDynamicAnimationSyncEPN4gfl24heap11CtrHeapBaseEj");
extern "C" void YellowAuto_00411e44(uint8_t* arg0, void* arg1, uint32_t arg2) {
uint32_t c = arg2 & 65535; uint32_t p = arg2 >> 16; uint8_t* u = (uint8_t*)0; if (c < *(uint32_t*)(*(uint8_t**)(arg0 + 20))) { u = *(uint8_t**)(arg0 + 12) + c * 44; } uint32_t o = *(*(uint32_t**)(arg0 + 16) + c); uint32_t d = p + o - 1; FUN_00413148(u, *(uint32_t*)arg0, d, p, arg1, *(void**)(arg0 + 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411EC8
void FUN_004131ec(uint8_t*, uint32_t, uint32_t, uint32_t, void*, void*);
extern "C" void YellowAuto_00411ec8(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model17CharaModelFactory25LoadDynamicAnimationAsyncEPN4gfl24heap11CtrHeapBaseEj");
extern "C" void YellowAuto_00411ec8(uint8_t* arg0, void* arg1, uint32_t arg2) {
uint32_t c = arg2 & 65535; uint32_t p = arg2 >> 16; uint8_t* u = (uint8_t*)0; if (c < *(uint32_t*)(*(uint8_t**)(arg0 + 20))) { u = *(uint8_t**)(arg0 + 12) + c * 44; } uint32_t o = *(*(uint32_t**)(arg0 + 16) + c); uint32_t d = p + o - 1; FUN_004131ec(u, *(uint32_t*)arg0, d, p, arg1, *(void**)(arg0 + 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411F4C
void FUN_004131ec(uint8_t*, uint32_t, uint32_t, uint32_t, void*, void*);
extern "C" void YellowAuto_00411f4c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model17CharaModelFactory25LoadDynamicAnimationAsyncEj");
extern "C" void YellowAuto_00411f4c(uint8_t* arg0, uint32_t arg1) {
uint32_t c = arg1 & 65535; uint32_t p = arg1 >> 16; uint8_t* u = (uint8_t*)0; if (c < *(uint32_t*)(*(uint8_t**)(arg0 + 20))) { u = *(uint8_t**)(arg0 + 12) + c * 44; } uint32_t o = *(*(uint32_t**)(arg0 + 16) + c); uint32_t d = p + o - 1; FUN_004131ec(u, *(uint32_t*)arg0, d, p, *(void**)(arg0 + 8), *(void**)(arg0 + 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411720
void FUN_00412cac(uint8_t*);
extern "C" void YellowAuto_00411720(uint8_t* arg0) __asm__("_ZN7poke_3d5model17CharaModelFactory14UnloadModelAllEv");
extern "C" void YellowAuto_00411720(uint8_t* arg0) {
uint32_t n = *(uint32_t*)(*(uint8_t**)(arg0 + 20)); for (uint32_t i = 0; i < n; i++) { uint8_t* a = (uint8_t*)0; if (i < *(uint32_t*)(*(uint8_t**)(arg0 + 20))) { a = *(uint8_t**)(arg0 + 12) + i * 44; } FUN_00412cac(a); }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411520
uint32_t func_00418458(uint8_t*, void*, void*, void*, uint32_t);
void func_0040da2c(uint8_t*);
void func_0040dc80(uint8_t*);
extern "C" uint32_t YellowAuto_00411520(uint8_t* arg0, void* arg1, void* arg2, uint8_t* arg3, uint32_t arg4) __asm__("_ZN7poke_3d5model17CharaModelFactory11CreateModelEPN4gfl23gfx12IGLAllocatorEPNS2_4heap11CtrHeapBaseEPNS0_10CharaModelEj");
extern "C" uint32_t YellowAuto_00411520(uint8_t* arg0, void* arg1, void* arg2, uint8_t* arg3, uint32_t arg4) {
uint32_t count = **reinterpret_cast<uint32_t* const*>(arg0 + 0x14);
if (arg4 >= count)
  return 0;
uint8_t* entry = *reinterpret_cast<uint8_t**>(arg0 + 0x0c) + arg4 * 0x2c;
if (*reinterpret_cast<uint8_t**>(entry + 0x14) == (uint8_t*)0)
  return 0;
if (*reinterpret_cast<uint32_t*>(entry + 0x20) == 0u)
  return 0;
uint8_t* info = entry + 0x18;
if (info == (uint8_t*)0)
  return 0;
void* data = *reinterpret_cast<void**>(entry + 0x14);
uint32_t size = *reinterpret_cast<uint32_t*>(entry + 0x20);
if (func_00418458(arg3, arg1, arg2, data, size) == 0u)
  return 0;
*reinterpret_cast<uint32_t*>(arg3 + 0x110) = *reinterpret_cast<uint32_t*>(arg0 + 0x18);
*reinterpret_cast<uint8_t**>(arg3 + 0x24) = info;
*reinterpret_cast<uint32_t*>(arg3 + 0xd8) = *reinterpret_cast<uint32_t*>(entry + 0x24);
*reinterpret_cast<uint32_t*>(arg3 + 0xe8) = *reinterpret_cast<uint32_t*>(entry + 0x28);
func_0040da2c(arg3);
func_0040dc80(arg3);
return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004113F4
uint32_t func_004a4cf4(uint8_t*, void*);
uint32_t func_00412e74(uint8_t*, void*, void*);
uint32_t func_0041369c(uint8_t*, void*, void*);
uint32_t func_00412dac(uint8_t*, void*, void*, void*);
uint32_t func_00413404(uint8_t*, void*, void*);
uint32_t func_00413550(uint8_t*, void*, void*);
extern "C" uint32_t YellowAuto_004113f4(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN7poke_3d5model17CharaModelFactory10SetupModelEPN4gfl23gfx12IGLAllocatorEj");
extern "C" uint32_t YellowAuto_004113f4(uint8_t* arg0, void* arg1, uint32_t arg2) {
uint32_t count0 = **reinterpret_cast<uint32_t* const*>(arg0 + 0x14);
if (arg2 >= count0)
  return 0;
uint8_t* entry0 = *reinterpret_cast<uint8_t**>(arg0 + 0x0c) + arg2 * 0x2c;
if (entry0 == (uint8_t*)0)
  return 0;
void* mgr = *reinterpret_cast<void**>(arg0 + 0x04);
if (func_004a4cf4(entry0, mgr) == 0u)
  return 0;
uint32_t count1 = **reinterpret_cast<uint32_t* const*>(arg0 + 0x14);
uint8_t* entry = (uint8_t*)0;
if (arg2 < count1)
  entry = *reinterpret_cast<uint8_t**>(arg0 + 0x0c) + arg2 * 0x2c;
if (func_00412e74(entry, mgr, arg1) == 0u)
  return 0;
if (func_0041369c(entry, mgr, arg1) == 0u)
  return 0;
void* extra = *reinterpret_cast<void**>(arg0 + 0x08);
if (func_00412dac(entry, mgr, arg1, extra) == 0u)
  return 0;
if (func_00413404(entry, mgr, arg1) == 0u)
  return 0;
if (func_00413550(entry, mgr, arg1) == 0u)
  return 0;
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411FDC
void FUN_00412cac(uint8_t*);
void FUN_003616fc(uint8_t*);
void __aeabi_vec_delete(void*, void*);
void* DAT_0041209c;
extern "C" void YellowAuto_00411fdc(uint8_t* arg0) __asm__("_ZN7poke_3d5model17CharaModelFactory8FinalizeEv");
extern "C" void YellowAuto_00411fdc(uint8_t* arg0) {
if (*(uint8_t**)(arg0 + 12) != (uint8_t*)0) {
uint32_t i = 0;
while (i < *(uint32_t*)(*(uint32_t*)(arg0 + 20))) {
FUN_00412cac(*(uint8_t**)(arg0 + 12) + i * 44u);
i = i + 1u;
}
uint32_t j = 0;
while (j < *(uint32_t*)(*(uint32_t*)(arg0 + 20))) {
FUN_003616fc(*(uint8_t**)(arg0 + 12) + j * 44u);
j = j + 1u;
}
if (*(uint8_t**)(arg0 + 12) != (uint8_t*)0) {
__aeabi_vec_delete(*(void**)(arg0 + 12), DAT_0041209c);
*(uint8_t**)(arg0 + 12) = (uint8_t*)0;
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00412108
void FUN_00412cac(uint8_t*);
void FUN_003616fc(uint8_t*);
void __aeabi_vec_delete(void*, void*);
void* DAT_004121cc;
extern "C" uint8_t* YellowAuto_00412108(uint8_t* arg0) __asm__("_ZN7poke_3d5model17CharaModelFactoryD1Ev");
extern "C" uint8_t* YellowAuto_00412108(uint8_t* arg0) {
if (*(uint8_t**)(arg0 + 12) != (uint8_t*)0) {
uint32_t i = 0;
while (i < *(uint32_t*)(*(uint32_t*)(arg0 + 20))) {
FUN_00412cac(*(uint8_t**)(arg0 + 12) + i * 44u);
i = i + 1u;
}
uint32_t j = 0;
while (j < *(uint32_t*)(*(uint32_t*)(arg0 + 20))) {
FUN_003616fc(*(uint8_t**)(arg0 + 12) + j * 44u);
j = j + 1u;
}
if (*(uint8_t**)(arg0 + 12) != (uint8_t*)0) {
__aeabi_vec_delete(*(void**)(arg0 + 12), DAT_004121cc);
*(uint8_t**)(arg0 + 12) = (uint8_t*)0;
}
}
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A4CA0
bool IsArcFileLoadDataFinished(void* arg0, void* arg1);
extern "C" bool YellowAuto_004a4ca0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model17CharaModelFactory13IsModelLoadedEj");
extern "C" bool YellowAuto_004a4ca0(uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = *(uint32_t*)*(uint32_t**)(arg0 + 0x14);
if (arg1 >= v0) return false;
uint8_t* v1 = *(uint8_t**)(arg0 + 0x0C) + arg1 * 0x2CU;
if (v1 == (uint8_t*)0) return false;
if (*(uint32_t*)(v1 + 8) == 0) return true;
if (*(uint32_t*)(v1 + 4) == 0) return false;
return IsArcFileLoadDataFinished(*(void**)(arg0 + 0x04), (void*)(v1 + 4));
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00411270
void* callee_004b4968(uint32_t, void*);
void* callee_00100050(void*, void*, uint32_t, uint32_t);
void callee_00412b10(void*, void*, uint32_t);
void callee_0035be88(void*, void*, void*);
extern "C" void YellowAuto_00411270(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3) __asm__("_ZN7poke_3d5model17CharaModelFactory10InitializeEPN4gfl22fs16AsyncFileManagerEPNS2_4heap11CtrHeapBaseEj");
extern "C" void YellowAuto_00411270(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3) {
*(uint32_t*)arg0 = arg3;
*(uint32_t*)(arg0 + 4) = (uint32_t)arg1;
*(uint32_t*)(arg0 + 8) = (uint32_t)arg2;
uint32_t cb_cell = *(uint32_t*)0x00411394;
uint32_t cb = *(uint32_t*)cb_cell;
if (cb != 0) {
((void(*)())cb)();
*(uint32_t*)cb_cell = 0;
}
uint32_t tbl = *(uint32_t*)0x00411398;
if (*(uint32_t*)tbl != arg3) {
if (*(uint32_t*)(tbl + 28) != arg3) {
callee_0035be88((void*)0, (void*)0, (void*)0);
return;
}
tbl += 28;
}
if (tbl == 0) {
callee_0035be88((void*)0, (void*)0, (void*)0);
return;
}
uint32_t off_tbl = *(uint32_t*)(tbl + 12);
uint32_t cnt_ptr = *(uint32_t*)(tbl + 16);
*(uint32_t*)(arg0 + 16) = off_tbl;
*(uint32_t*)(arg0 + 20) = cnt_ptr;
uint32_t n = *(uint32_t*)cnt_ptr;
void* raw = callee_004b4968(n * 44 + 8, arg2);
void* arr = (void*)0;
if (raw != (void*)0) {
*(uint32_t*)raw = 44;
*(uint32_t*)((uint8_t*)raw + 4) = n;
uint32_t ctor = *(uint32_t*)0x0041139c;
arr = callee_00100050((uint8_t*)raw + 8, (void*)ctor, 44, n);
}
*(uint32_t*)(arg0 + 12) = (uint32_t)arr;
for (uint32_t i = 0; i < *(uint32_t*)cnt_ptr; ++i) {
uint32_t* b = (uint32_t*)off_tbl;
uint32_t sz = b[i + 1] - b[i] + 1;
callee_00412b10((void*)((uint8_t*)arr + i * 44), arg2, sz);
}
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A4EE0
void FUN_004a4c2c(uint8_t*, uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_004a4ee0(const uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZNK7poke_3d5model17CharaModelFactory18GetApplicationDataEj");
extern "C" void YellowAuto_004a4ee0(const uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
uint32_t tbl = *(uint32_t*)(arg0 + 20);
uint32_t cnt = *(uint32_t*)tbl;
uint32_t base = *(uint32_t*)(arg0 + 12);
uint8_t* entry = arg1 < cnt ? (uint8_t*)(base + arg1 * 44) : (uint8_t*)0;
uint32_t last = arg1 < cnt ? arg3 : 0;
uint32_t mgr = *(uint32_t*)(arg0 + 4);
FUN_004a4c2c(entry, (uint8_t*)mgr, 3, last);
}
#endif
