// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003028E4
void sub_00357cd8(void*);
uint8_t* sub_00103f48(uint8_t*);
void sub_00301910(uint8_t*);
extern "C" void YellowAuto_003028e4(uint8_t* arg0) __asm__("_ZN4__rw15__rw_locale_impD2Ev");
extern "C" void YellowAuto_003028e4(uint8_t* arg0) {
sub_00357cd8((void *)(*(uint32_t *)(arg0 + 0x18)));
sub_00301910(sub_00103f48(arg0 + 8) - 8);
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001031CC
void* array_new(uint32_t, uint32_t);
void* alloc_mem(uint32_t);
void string_assign(uint8_t*, const uint8_t*);
uint32_t str_len(const uint8_t*);
void* mem_copy(void*, const void*, uint32_t);
extern "C" uint8_t* YellowAuto_001031cc(uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN4__rw15__rw_locale_impC2ERKS0_PKcj");
extern "C" uint8_t* YellowAuto_001031cc(uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, uint32_t arg3) {
uint32_t n = *(const uint32_t*)(arg1 + 4);
uint8_t* a = (uint8_t*)0;
if (n != 0) {
a = (uint8_t*)array_new(4, n);
}
*(uint8_t**)(arg0 + 0) = a;
*(uint32_t*)(arg0 + 4) = n;
while (n != 0) {
n = n - 1;
string_assign(a + n * 4, *(const uint8_t**)(arg1 + 0) + n * 4);
}
uint32_t m = *(const uint32_t*)(arg1 + 12);
uint8_t* b = (uint8_t*)0;
if (m != 0) {
b = (uint8_t*)alloc_mem(m * 4);
}
*(uint8_t**)(arg0 + 8) = b;
*(uint32_t*)(arg0 + 12) = m;
while (m != 0) {
m = m - 1;
*(uint32_t*)(b + m * 4) = *(const uint32_t*)(*(const uint8_t**)(arg1 + 8) + m * 4);
}
*(uint32_t*)(arg0 + 16) = *(const uint32_t*)(arg1 + 16);
*(uint32_t*)(arg0 + 20) = *(const uint32_t*)(arg1 + 20);
*(uint8_t**)(arg0 + 24) = (uint8_t*)0;
*(uint32_t*)(arg0 + 28) = arg3;
if (arg2 != (const uint8_t*)0) {
uint32_t l = str_len(arg2);
uint8_t* p = (uint8_t*)alloc_mem(l + 1);
mem_copy(p, arg2, l + 1);
*(uint8_t**)(arg0 + 24) = p;
}
uint32_t k = *(uint32_t*)(arg0 + 12);
while (k != 0) {
k = k - 1;
uint8_t* f = *(uint8_t**)(*(uint8_t**)(arg0 + 8) + k * 4);
if (f != (uint8_t*)0) {
*(uint32_t*)(f + 12) = *(uint32_t*)(f + 12) + 1;
}
}
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003027FC
void* alloc_mem(uint32_t);
void* array_new(uint32_t, uint32_t);
void string_assign(uint8_t*, const uint8_t*);
void string_init(uint8_t*);
void string_fini(uint8_t*);
void array_delete(void*);
uint32_t str_len(const uint8_t*);
void* mem_copy(void*, const void*, uint32_t);
extern "C" uint8_t* YellowAuto_003027fc(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN4__rw15__rw_locale_impC2EPKcjj");
extern "C" uint8_t* YellowAuto_003027fc(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t arg3) {
*(uint8_t**)(arg0 + 0) = (uint8_t*)0;
*(uint32_t*)(arg0 + 4) = 0;
uint32_t n = arg2;
uint8_t* b = (uint8_t*)0;
if (n != 0) {
b = (uint8_t*)alloc_mem(n * 4);
}
*(uint8_t**)(arg0 + 8) = b;
*(uint32_t*)(arg0 + 12) = n;
while (n != 0) {
n = n - 1;
*(uint32_t*)(b + n * 4) = 0;
}
*(uint32_t*)(arg0 + 16) = 0;
*(uint32_t*)(arg0 + 20) = 0;
*(uint8_t**)(arg0 + 24) = (uint8_t*)0;
*(uint32_t*)(arg0 + 28) = arg3;
if (arg1 != (const uint8_t*)0) {
uint32_t l = str_len(arg1);
uint8_t* p = (uint8_t*)alloc_mem(l + 1);
mem_copy(p, arg1, l + 1);
*(uint8_t**)(arg0 + 24) = p;
}
uint8_t tmp[4];
string_init(tmp);
uint8_t* na = (uint8_t*)array_new(4, 6);
uint32_t c = *(uint32_t*)(arg0 + 4);
uint32_t u = c;
if (u > 5) {
u = 6;
}
uint8_t* src = *(uint8_t**)(arg0 + 0);
uint8_t* dst = na;
while (src != *(uint8_t**)(arg0 + 0) + u * 4) {
string_assign(dst, src);
dst = dst + 4;
src = src + 4;
}
while (u < 6) {
string_assign(na + u * 4, tmp);
u = u + 1;
}
array_delete(*(void**)(arg0 + 0));
*(uint8_t**)(arg0 + 0) = na;
*(uint32_t*)(arg0 + 4) = 6;
string_fini(tmp);
return arg0;
}
#endif
