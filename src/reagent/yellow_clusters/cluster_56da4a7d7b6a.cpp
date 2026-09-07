// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045EBB4
void* h_sc_get(void);
void h_sc_init(void*, void*);
void* h_fade_get(void);
void h_fade_req_in(void*, uint32_t, uint32_t, uint32_t);
uint32_t h_fade_isend(void*, uint32_t);
extern "C" uint32_t YellowAuto_0045ebb4(uint8_t* arg0) __asm__("_ZN9NetAppLib6System15NetAppFrameBase8InitFuncEv");
extern "C" uint32_t YellowAuto_0045ebb4(uint8_t* arg0) {
uint32_t st = *(uint32_t*)(arg0 + 4);
uint32_t ret = 0;
if (st == 0) {
void* q = h_sc_get();
if (q != (void*)0) {
void* m = h_sc_get();
uint8_t* w = *(uint8_t**)(arg0 + 0x18);
uint8_t* p1 = *(uint8_t**)(w + 8);
void* heap = *(void**)(p1 + 8);
h_sc_init(m, heap);
}
*(uint32_t*)(arg0 + 4) = 1;
return ret;
}
if (st == 1) {
uint8_t* vt = *(uint8_t**)arg0;
void* fn = *(void**)(vt + 0x28);
uint32_t r = ((uint32_t(*)(uint8_t*))fn)(arg0);
if (r == 0) {
return 0;
}
*(uint32_t*)(arg0 + 4) = 2;
return ret;
}
if (st == 2) {
uint8_t a = *(arg0 + 0x1c);
uint8_t b = *(arg0 + 0x20);
if (a != 0 && b == 0) {
void* f = h_fade_get();
h_fade_req_in(f, 4, 1, 2);
*(uint32_t*)(arg0 + 4) = 3;
return ret;
}
uint8_t* vt2 = *(uint8_t**)arg0;
void* fn2 = *(void**)(vt2 + 0x30);
((void(*)(uint8_t*))fn2)(arg0);
ret = 2;
return ret;
}
if (st == 3) {
void* f2 = h_fade_get();
uint32_t e = h_fade_isend(f2, 4);
if (e == 0) {
return 0;
}
uint8_t* vt3 = *(uint8_t**)arg0;
void* fn3 = *(void**)(vt3 + 0x30);
((void(*)(uint8_t*))fn3)(arg0);
ret = 2;
return ret;
}
return ret;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E7DC
bool h_wlan(void);
extern "C" uint32_t YellowAuto_0045e7dc(uint8_t* arg0) __asm__("_ZN9NetAppLib6System15NetAppFrameBase10UpdateFuncEv");
extern "C" uint32_t YellowAuto_0045e7dc(uint8_t* arg0) {
uint8_t* vt = *(uint8_t**)arg0;
void* fn = *(void**)(vt + 0x38);
((void(*)(uint8_t*))fn)(arg0);
uint8_t s = *(arg0 + 0x1f);
if (s == 0) {
bool e = h_wlan();
if (!e) {
uint8_t* vt2 = *(uint8_t**)arg0;
void* fn2 = *(void**)(vt2 + 0x40);
((void(*)(uint8_t*))fn2)(arg0);
*(arg0 + 0x1f) = 1;
}
} else {
if (s == 1) {
bool e2 = h_wlan();
if (e2) {
uint8_t* vt3 = *(uint8_t**)arg0;
void* fn3 = *(void**)(vt3 + 0x3c);
((void(*)(uint8_t*))fn3)(arg0);
*(arg0 + 0x1f) = 0;
}
}
}
uint8_t* work = *(uint8_t**)(arg0 + 0x18);
int32_t fr = *(int32_t*)(work + 0x20);
if (fr == -1) {
return 0;
}
return 2;
}
#endif
