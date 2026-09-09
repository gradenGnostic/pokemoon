// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002A7CC8
extern uint32_t DAT_002a7d9c;
extern void* DAT_002a7da0;
void FUN_002a17b8(uint8_t*, const uint8_t*);
void* FUN_00100050(uint8_t*, void*, uint32_t, uint32_t);
uint8_t* FUN_002aab28(uint8_t*);
void FUN_002aa8e4(uint8_t*, uint32_t);
void FUN_002aa964(uint8_t*, uint32_t);
void FUN_002aaab0(uint8_t*, uint32_t, const uint8_t*);
void* FUN_002a5b88(uint32_t, uint32_t);
void* FUN_002aa544(void*, const void*);
extern "C" uint8_t* YellowAuto_002a7cc8(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nw3lyt7PictureC1ERKS1_");
extern "C" uint8_t* YellowAuto_002a7cc8(uint8_t* arg0, const uint8_t* arg1) {
FUN_002a17b8(arg0, arg1);
*(uint32_t*)arg0 = DAT_002a7d9c;
*(uint32_t*)(arg0 + 164) = 0;
uint8_t* p = (uint8_t*)FUN_00100050(arg0 + 168, DAT_002a7da0, 4, 4);
uint8_t* q = FUN_002aab28(p + 16);
*(uint32_t*)(q - 16) = *(const uint32_t*)(arg1 + 168);
*(uint32_t*)(q - 12) = *(const uint32_t*)(arg1 + 172);
*(uint32_t*)(q - 8) = *(const uint32_t*)(arg1 + 176);
*(uint32_t*)(q - 4) = *(const uint32_t*)(arg1 + 180);
uint32_t c = *(const uint8_t*)(arg1 + 185);
if (c != 0) {
FUN_002aa8e4(q, c);
FUN_002aa964(q, c);
uint32_t b = *(const uint32_t*)(arg1 + 188);
for (uint32_t i = 0; i < c; ++i) {
FUN_002aaab0(q, i, (const uint8_t*)(b + i * 32));
}
}
const void* s = (const void*)(*(const uint32_t*)(arg1 + 164));
void* m = FUN_002a5b88(132, 4);
void* n = (void*)0;
if (m != (void*)0) {
n = FUN_002aa544(m, s);
}
*(uint32_t*)(q - 20) = (uint32_t)n;
return q - 184;
}
#endif
