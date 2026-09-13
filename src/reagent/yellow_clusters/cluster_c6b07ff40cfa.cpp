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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00461584
uint8_t* func_003c23f4(uint8_t* arg0);
uint8_t* func_00354704(uint8_t* arg0);
void func_00357cd8(void* arg0);
void func_0030181c(void* arg0);
void invoke_addr(uint32_t arg0, void* arg1);
extern "C" uint8_t* YellowAuto_00461584(uint8_t* arg0) __asm__("_ZN9NetAppLib7Message14MessageUtilityD1Ev");
extern "C" uint8_t* YellowAuto_00461584(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x004616A0;
uint32_t* _n = *(uint32_t**)(arg0 + 0x10);
uint32_t* _head = *(uint32_t**)(arg0 + 0x0C);
if (_n == (uint32_t*)0) {
_n = _head;
} else {
uint32_t _v = *(uint32_t*)_n;
if (_v != 0) {
uint32_t* _c = (uint32_t*)_v;
while (*(uint32_t*)_c != 0) {
_c = *(uint32_t**)_c;
}
_n = _c;
}
}
while (_n != _head) {
uint8_t* _obj = *(uint8_t**)((uint8_t*)_n + 0x10);
if (_obj != (uint8_t*)0) {
uint8_t* _vt = *(uint8_t**)_obj;
uint32_t _fn = *(uint32_t*)(_vt + 4);
invoke_addr(_fn, _obj);
}
uint32_t* _l = *(uint32_t**)((uint8_t*)_n + 4);
if (_l == (uint32_t*)0) {
uint32_t* _p = *(uint32_t**)((uint8_t*)_n + 8);
if (*(uint32_t**)((uint8_t*)_p + 4) == _n) {
do {
_n = _p;
_p = *(uint32_t**)((uint8_t*)_n + 8);
} while (*(uint32_t**)((uint8_t*)_p + 4) == _n);
}
if (*(uint32_t**)((uint8_t*)_n + 4) != _p) {
_n = _p;
}
} else {
uint32_t _w = *_l;
while (1) {
_n = _l;
if (_w == 0) break;
_l = *(uint32_t**)_l;
_w = *_l;
}
}
}
uint8_t* _ws = func_003c23f4(arg0 + 0x34);
uint8_t* _sb = func_00354704(_ws - 0x10);
uint8_t* _base = _sb - 0x18;
uint32_t _d1 = *(uint32_t*)(_sb - 0x10);
if (_d1 != 0) {
func_00357cd8((void*)_d1);
*(uint32_t*)(_base + 8) = 0;
}
uint32_t _d0 = *(uint32_t*)_base;
if (_d0 != 0) {
func_0030181c((void*)_d0);
*(uint32_t*)_base = 0;
}
*(uint32_t*)(_base + 4) = 0;
*(uint32_t*)(_base + 12) = 0;
*(uint32_t*)(_base + 16) = 0;
*(uint32_t*)(_base + 20) = 0;
return arg0;
}
#endif
