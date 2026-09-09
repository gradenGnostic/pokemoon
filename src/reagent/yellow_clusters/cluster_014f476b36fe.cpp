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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003859E8
void* H_New(uint32_t size, void* heap);
void* H_Ctor(void* mem, void* heap);
void H_Load(void* s, uint32_t id, uint32_t slot, void* out);
uint32_t H_Level(void* p);
uint32_t H_Sex(void* p);
void H_RegNick(void* w, uint32_t idx, void* p);
void H_RegNum(void* w, uint32_t idx, uint32_t val, uint32_t d, uint32_t e, uint32_t f);
uint32_t H_Draw(void* p);
void H_Del(void* p);
extern "C" uint32_t YellowAuto_003859e8(uint8_t* arg0, void* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4) __asm__("_ZN5Field13FieldSodateya23PokeTakeBackMenuWordsetEPN5print7WordSetEjN8Savedata10SodateyaIDEj");
extern "C" uint32_t YellowAuto_003859e8(uint8_t* arg0, void* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4) {
void* h = *(void**)(arg0 + 4);
void* s = *(void**)(arg0 + 16);
void* m = H_New(16u, h);
void* p = (void*)0;
if (m != (void*)0) {
p = H_Ctor(m, h);
}
H_Load(s, (uint32_t)arg3, (uint32_t)arg4, p);
uint32_t l = H_Level(p);
H_Sex(p);
H_RegNick(arg1, arg2, p);
H_RegNum(arg1, arg2 + 1u, l & 255u, 3u, 0u, 1u);
uint32_t d = H_Draw(p);
if (p != (void*)0) {
H_Del(p);
}
return d;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00385D08
uint32_t H_Num(void* s, uint32_t id);
void* H_New(uint32_t size, void* heap);
void* H_Ctor(void* mem, void* heap);
void H_Load(void* s, uint32_t id, uint32_t slot, void* out);
int8_t H_Compat(uint8_t* self, void* a, void* b);
void H_Del(void* p);
extern "C" int32_t YellowAuto_00385d08(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field13FieldSodateya9LoveCheckEN8Savedata10SodateyaIDE");
extern "C" int32_t YellowAuto_00385d08(uint8_t* arg0, int32_t arg1) {
uint32_t n = H_Num(*(void**)(arg0 + 16), (uint32_t)arg1);
if (n < 2u) {
return 3;
}
void* h = *(void**)(arg0 + 4);
void* s = *(void**)(arg0 + 16);
void* m0 = H_New(16u, h);
void* p0 = (void*)0;
if (m0 != (void*)0) {
p0 = H_Ctor(m0, h);
}
void* m1 = H_New(16u, h);
void* p1 = (void*)0;
if (m1 != (void*)0) {
p1 = H_Ctor(m1, h);
}
H_Load(s, (uint32_t)arg1, 0u, p0);
H_Load(s, (uint32_t)arg1, 1u, p1);
int8_t c = H_Compat(arg0, p0, p1);
if (p1 != (void*)0) {
H_Del(p1);
}
if (p0 != (void*)0) {
H_Del(p0);
}
return (int32_t)c;
}
#endif
