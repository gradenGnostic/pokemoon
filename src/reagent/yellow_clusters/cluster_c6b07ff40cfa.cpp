// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00461208
void* alloc_fn(uint32_t, void*);
void* msg_ctor(void*, const void*, void*);
void list_push(uint8_t*, uint32_t*);
extern "C" void YellowAuto_00461208(uint8_t* arg0, uint32_t arg1, const void* arg2) __asm__("_ZN9NetAppLib7Message14MessageUtility14LoadFromMemoryEjPKv");
extern "C" void YellowAuto_00461208(uint8_t* arg0, uint32_t arg1, const void* arg2) {
void* heap = *(void**)(arg0 + 4);
void* p = alloc_fn(48, heap);
void* q = p;
if (p != 0) {
q = msg_ctor(p, arg2, heap);
}
uint32_t pair[2];
pair[0] = arg1;
pair[1] = (uint32_t)q;
list_push(arg0 + 12, pair);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004613B4
void* alloc_fn(uint32_t, void*);
void* alloc_array_fn(uint32_t, void*);
void* vec_init(void*, uint32_t, uint32_t);
void* strbuf_ctor(uint8_t*, uint32_t, void*);
void* wordset_ctor(uint8_t*, void*);
extern "C" uint8_t* YellowAuto_004613b4(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN9NetAppLib7Message14MessageUtilityC1EPN4gfl24heap11CtrHeapBaseEj");
extern "C" uint8_t* YellowAuto_004613b4(uint8_t* arg0, void* arg1, uint32_t arg2) {
*(void**)(arg0 + 4) = arg1;
*(uint32_t*)(arg0 + 8) = arg2;
*(uint32_t*)(arg0 + 12) = 0;
*(uint32_t*)(arg0 + 16) = 0;
*(uint32_t*)(arg0 + 20) = 0;
*(uint32_t*)(arg0 + 24) = 0;
*(uint32_t*)(arg0 + 28) = 0;
*(uint32_t*)(arg0 + 32) = 0;
void* n = alloc_fn(24, arg1);
if (n != 0) {
*(uint32_t*)((uint8_t*)n + 0) = 0;
*(uint32_t*)((uint8_t*)n + 4) = 0;
*(uint32_t*)((uint8_t*)n + 8) = 0;
*(uint32_t*)((uint8_t*)n + 12) = 0;
*(uint32_t*)((uint8_t*)n + 16) = 0;
*(uint8_t*)((uint8_t*)n + 20) = 0;
}
*(void**)(arg0 + 12) = n;
void* a = alloc_array_fn(arg2 * 24, arg1);
void* b = 0;
if (a != 0) {
b = vec_init(a, 24, arg2);
}
*(void**)(arg0 + 20) = b;
*(uint32_t*)(arg0 + 24) = arg2;
*(void**)((uint8_t*)n + 0) = n;
*(void**)((uint8_t*)n + 4) = n;
void* s = strbuf_ctor(arg0 + 36, 1024, arg1);
void* w = wordset_ctor((uint8_t*)s + 16, arg1);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046148C
void* alloc_fn(uint32_t, void*);
void* alloc_array_fn(uint32_t, void*);
void* vec_init(void*, uint32_t, uint32_t);
void* strbuf_ctor(uint8_t*, uint32_t, void*);
void* wordset_ctor2(uint8_t*, uint32_t, uint32_t, void*);
extern "C" uint8_t* YellowAuto_0046148c(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN9NetAppLib7Message14MessageUtilityC1EPN4gfl24heap11CtrHeapBaseEjjj");
extern "C" uint8_t* YellowAuto_0046148c(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
*(void**)(arg0 + 4) = arg1;
*(uint32_t*)(arg0 + 8) = arg2;
*(uint32_t*)(arg0 + 12) = 0;
*(uint32_t*)(arg0 + 16) = 0;
*(uint32_t*)(arg0 + 20) = 0;
*(uint32_t*)(arg0 + 24) = 0;
*(uint32_t*)(arg0 + 28) = 0;
*(uint32_t*)(arg0 + 32) = 0;
void* n = alloc_fn(24, arg1);
if (n != 0) {
*(uint32_t*)((uint8_t*)n + 0) = 0;
*(uint32_t*)((uint8_t*)n + 4) = 0;
*(uint32_t*)((uint8_t*)n + 8) = 0;
*(uint32_t*)((uint8_t*)n + 12) = 0;
*(uint32_t*)((uint8_t*)n + 16) = 0;
*(uint8_t*)((uint8_t*)n + 20) = 0;
}
*(void**)(arg0 + 12) = n;
void* a = alloc_array_fn(arg2 * 24, arg1);
void* b = 0;
if (a != 0) {
b = vec_init(a, 24, arg2);
}
*(void**)(arg0 + 20) = b;
*(uint32_t*)(arg0 + 24) = arg2;
*(void**)((uint8_t*)n + 0) = n;
*(void**)((uint8_t*)n + 4) = n;
void* s = strbuf_ctor(arg0 + 36, 1024, arg1);
void* w = wordset_ctor2((uint8_t*)s + 16, arg3, arg4, arg1);
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00461300
extern "C" int32_t YellowAuto_00461300(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib7Message14MessageUtility7GetDataEj");
extern "C" int32_t YellowAuto_00461300(uint8_t* arg0, uint32_t arg1) {
uint8_t* _n = *(uint8_t**)(arg0 + 16);
uint8_t* _e = *(uint8_t**)(arg0 + 12);
uint32_t _k = 0;
while (true) {
if (_n == (uint8_t*)0) { _n = _e; break; }
_k = *(uint32_t*)(_n + 12);
if (_k < arg1) { _n = *(uint8_t**)(_n + 4); }
if (arg1 < _k) { _n = *(uint8_t**)(_n + 0); }
if (_k == arg1) { break; }
}
if (_n == _e) { return 0; }
return *(int32_t*)(_n + 16);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00461340
void func_00354314(uint8_t*);
void func_00355f6c(uint8_t*, uint32_t, uint8_t*);
extern "C" uint8_t* YellowAuto_00461340(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN9NetAppLib7Message14MessageUtility9GetStringEjj");
extern "C" uint8_t* YellowAuto_00461340(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint8_t* _n = *(uint8_t**)(arg0 + 16);
uint8_t* _e = *(uint8_t**)(arg0 + 12);
uint32_t _k = 0;
uint8_t* _f = (uint8_t*)0;
uint8_t* _b = arg0 + 36;
while (true) {
if (_n == (uint8_t*)0) { _n = _e; break; }
_k = *(uint32_t*)(_n + 12);
if (_k < arg1) { _n = *(uint8_t**)(_n + 4); }
if (arg1 < _k) { _n = *(uint8_t**)(_n + 0); }
if (_k == arg1) { break; }
}
if (_n == _e) { _f = (uint8_t*)0; } else { _f = *(uint8_t**)(_n + 16); }
func_00354314(_b);
if (_f != (uint8_t*)0) { func_00355f6c(_f, arg2, _b); }
return _b;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00461258
void func_00354314(uint8_t*);
void func_00355f6c(uint8_t*, uint32_t, uint8_t*);
void func_00354600(uint8_t*, uint8_t*, uint8_t*);
void func_003c234c(uint8_t*, uint8_t*, uint8_t*);
void func_00354704(uint8_t*);
extern "C" uint8_t* YellowAuto_00461258(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN9NetAppLib7Message14MessageUtility17GetExpandedStringEjj");
extern "C" uint8_t* YellowAuto_00461258(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint8_t* _n = *(uint8_t**)(arg0 + 16);
uint8_t* _e = *(uint8_t**)(arg0 + 12);
uint32_t _k = 0;
uint8_t* _f = (uint8_t*)0;
uint8_t* _b = arg0 + 36;
uint8_t* _w = arg0 + 52;
uint8_t _tmp[16];
uint8_t* _a = (uint8_t*)0;
while (true) {
if (_n == (uint8_t*)0) { _n = _e; break; }
_k = *(uint32_t*)(_n + 12);
if (_k < arg1) { _n = *(uint8_t**)(_n + 4); }
if (arg1 < _k) { _n = *(uint8_t**)(_n + 0); }
if (_k == arg1) { break; }
}
if (_n == _e) { _f = (uint8_t*)0; } else { _f = *(uint8_t**)(_n + 16); }
func_00354314(_b);
if (_f != (uint8_t*)0) { func_00355f6c(_f, arg2, _b); }
_a = *(uint8_t**)(arg0 + 4);
func_00354600(_tmp, _b, _a);
func_003c234c(_w, _b, _tmp);
func_00354704(_tmp);
return _b;
}
#endif
