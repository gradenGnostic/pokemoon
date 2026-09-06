// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038575C
void* operator_new(uint32_t, void*);
void* FUN_00317db8(void*, void*);
void FUN_00444ae4(uint32_t, int32_t, uint32_t, void*);
void FUN_0031f21c(void*, void*);
void FUN_0043143c(void*);
void FUN_00445dcc(void*, void*);
extern "C" void YellowAuto_0038575c(uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZN5Field13FieldSodateya12PokeTakeBackEN8Savedata10SodateyaIDEj");
extern "C" void YellowAuto_0038575c(uint8_t* arg0, int32_t arg1, uint32_t arg2) {
void* tmp = operator_new(16u, *(void **)(arg0 + 4));
if (tmp != 0) tmp = FUN_00317db8(tmp, *(void **)(arg0 + 4));
FUN_00444ae4(*(uint32_t *)(arg0 + 16), arg1, arg2, tmp);
FUN_0031f21c(*(void **)((uint8_t *)*(void **)(arg0 + 12) + 12), tmp);
FUN_0043143c(*(void **)(arg0 + 12));
FUN_00445dcc((void *)((uint8_t *)*(void **)((uint8_t *)*(void **)(arg0 + 12) + 4) + 0x2394), tmp);
if (tmp != 0) ((void (*)(void *))(*(void ***)tmp)[2])(tmp);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00385964
void* operator_new(uint32_t, void*);
void* FUN_00317db8(void*, void*);
uint32_t FUN_00444ac0(uint32_t, int32_t, uint32_t, void*);
void FUN_003c1ad8(void*, uint32_t, void*, uint32_t);
extern "C" void YellowAuto_00385964(uint8_t* arg0, void* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4) __asm__("_ZN5Field13FieldSodateya15PokeNameWordsetEPN5print7WordSetEjN8Savedata10SodateyaIDEj");
extern "C" void YellowAuto_00385964(uint8_t* arg0, void* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4) {
void* tmp = operator_new(16u, *(void **)(arg0 + 4));
if (tmp != 0) tmp = FUN_00317db8(tmp, *(void **)(arg0 + 4));
uint32_t extraout_r3 = FUN_00444ac0(*(uint32_t *)(arg0 + 16), arg3, arg4, tmp);
FUN_003c1ad8(arg1, arg2, tmp, extraout_r3);
if (tmp != 0) ((void (*)(void *))(*(void ***)tmp)[2])(tmp);
}
#endif
