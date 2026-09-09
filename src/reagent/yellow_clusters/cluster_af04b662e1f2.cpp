// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002348B8
extern "C" uint32_t YellowAuto_002348b8() __asm__("_ZN2nn3nex6Buffer20GetDefaultBufferSizeEv");
extern "C" uint32_t YellowAuto_002348b8() {
return *(uint32_t *)(*(uint32_t *)0x002348c4 + 0x148);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0023448C
uint32_t FUN_002347cc(uint8_t* arg0, uint32_t arg1);
extern "C" void YellowAuto_0023448c(uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZN2nn3nex6Buffer10InitializeEjh");
extern "C" void YellowAuto_0023448c(uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
arg0[0x1c] = arg2; *(uint32_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = arg1; *(uint32_t *)(arg0 + 0x18) = 0; *(uint32_t *)(arg0 + 0xc) = FUN_002347cc(arg0, arg1); arg0[0x1d] = 0; arg0[0x1e] = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00234408
uint32_t FUN_00234628(uint32_t, uint32_t);
void FUN_00234740(uint8_t*, uint32_t);
void __aeabi_memcpy(void*, const void*, uint32_t);
extern "C" bool YellowAuto_00234408(uint8_t* arg0, const void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN2nn3nex6Buffer10AppendDataEPKvjj");
extern "C" bool YellowAuto_00234408(uint8_t* arg0, const void* arg1, uint32_t arg2, uint32_t arg3) {
if (arg2 == 0) return true;
uint32_t cur = *(uint32_t*)(arg0 + 16);
uint32_t pos = arg3;
if (pos == 0xFFFFFFFFU) pos = cur;
uint32_t newSize = cur;
if (pos > cur) newSize = pos + arg2;
else if (pos + arg2 > cur) newSize = pos + arg2;
uint32_t a = *(uint32_t*)(arg0 + 20);
uint32_t b = *(uint32_t*)(arg0 + 24);
uint32_t tmp = FUN_00234628(a, b + newSize);
FUN_00234740(arg0, tmp);
*(uint32_t*)(arg0 + 16) = newSize;
uint32_t base = *(uint32_t*)(arg0 + 12);
uint32_t off = *(uint32_t*)(arg0 + 24);
__aeabi_memcpy((void*)(base + off + pos), arg1, arg2);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00234B88
extern uint32_t DAT_00234BD8;
extern uint32_t DAT_00234BDC;
void FUN_002feaa8(uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_00234b88(uint8_t* arg0) __asm__("_ZN2nn3nex6BufferD1Ev");
extern "C" uint8_t* YellowAuto_00234b88(uint8_t* arg0) {
*(uint32_t*)arg0 = DAT_00234BD8;
uint32_t buf = *(uint32_t*)(arg0 + 12);
if (buf != 0) {
uint32_t hdr = buf - 8U;
uint32_t fn = *(uint32_t*)hdr;
if (fn == 0) FUN_002feaa8(hdr, 0);
else ((void(*)(uint32_t))fn)(hdr);
}
*(uint32_t*)arg0 = DAT_00234BDC;
*(uint32_t*)(arg0 + 4) = 0;
return arg0;
}
#endif
