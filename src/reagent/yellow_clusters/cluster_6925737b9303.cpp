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
