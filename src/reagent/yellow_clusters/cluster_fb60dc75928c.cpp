// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E8A64
uint32_t FUN_002e8fa4(uint32_t);
extern "C" uint32_t YellowAuto_002e8a64(uint8_t* arg0) __asm__("_ZN3app4tool10IconObject7EndFuncEv");
extern "C" uint32_t YellowAuto_002e8a64(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 0x30) != 0)
  return 1;
if (FUN_002e8fa4(*(uint32_t *)(arg0 + 0x1c)) != 0)
  *(uint32_t *)(arg0 + 0x30) = *(uint32_t *)(arg0 + 0x30) + 1;
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E8840
void FUN_002f9adc(void*, void*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_002e8840(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN3app4tool10IconObject10ReplaceTexEPN2nw3lyt7PictureEj");
extern "C" uint32_t YellowAuto_002e8840(uint8_t* arg0, void* arg1, uint32_t arg2) {
*(void **)(arg0 + 0x14) = arg1;
if (*(uint32_t *)(arg0 + 0x34) == arg2)
  return (FUN_002f9adc((void *)(*(uint32_t *)(arg0 + 0x1c) + 8), *(void **)(arg0 + 0x14), 0, 0), *(uint8_t *)((uint8_t *)*(void **)(arg0 + 0x14) + 0x44) = *(uint8_t *)((uint8_t *)*(void **)(arg0 + 0x14) + 0x44) | 1, 1);
*(uint32_t *)(arg0 + 0x18) = arg2;
*(uint32_t *)(arg0 + 0x28) = 1;
*(uint32_t *)(arg0 + 0x34) = 0xffffffff;
*(uint8_t *)((uint8_t *)arg1 + 0x44) = *(uint8_t *)((uint8_t *)arg1 + 0x44) & 0xfe;
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E88F0
int32_t func_002e9340(void*);
void func_002e9008(void*, void*, uint32_t, uint32_t, int32_t);
int32_t func_002e8efc(void*);
void func_002f9adc(void*, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_002e88f0(uint8_t* arg0) __asm__("_ZN3app4tool10IconObject10UpdateFuncEv");
extern "C" void YellowAuto_002e88f0(uint8_t* arg0) {
uint32_t s = *(uint32_t*)(arg0 + 0x28);
if (s == 1) {
void* v0 = *(void**)(arg0 + 0x1c);
uint8_t f = *(uint8_t*)((uint8_t*)v0 + 0x3c);
if (f != 0) {
int32_t r0 = func_002e9340(v0);
if (r0 == 0) return;
}
void* a0 = *(void**)(arg0 + 0x1c);
void* a1 = *(void**)(arg0 + 0x24);
uint32_t a2 = *(uint32_t*)(arg0 + 0x04);
uint32_t a3 = *(uint32_t*)(arg0 + 0x18);
int32_t a4 = (int32_t)*(int8_t*)(arg0 + 0x10);
func_002e9008(a0, a1, a2, a3, a4);
uint32_t n = *(uint32_t*)(arg0 + 0x28);
*(uint32_t*)(arg0 + 0x28) = n + 1;
} else if (s == 2) {
void* v1 = *(void**)(arg0 + 0x1c);
int32_t r1 = func_002e8efc(v1);
if (r1 == 0) return;
uint8_t fl = *(uint8_t*)(arg0 + 0x38);
if (fl == 1) {
void* b0 = *(void**)(arg0 + 0x1c);
void* b1 = *(void**)(arg0 + 0x14);
func_002f9adc((uint8_t*)b0 + 8, b1, 0, 0);
uint8_t cur = *(uint8_t*)((uint8_t*)b1 + 0x44);
*(uint8_t*)((uint8_t*)b1 + 0x44) = (uint8_t)((cur & 0xFE) | 0x01);
}
uint32_t c28 = *(uint32_t*)(arg0 + 0x28);
*(uint32_t*)(arg0 + 0x28) = c28 + 1;
uint32_t v18 = *(uint32_t*)(arg0 + 0x18);
*(uint32_t*)(arg0 + 0x34) = v18;
} else {
*(uint32_t*)(arg0 + 0x28) = 0;
}
}
#endif
