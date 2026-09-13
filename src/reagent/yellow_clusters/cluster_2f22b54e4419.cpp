// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A31A8
extern "C" bool YellowAuto_004a31a8(const uint8_t* arg0) __asm__("_ZNK6applib5frame7Manager25GetBaseProcessInitializedEv");
extern "C" bool YellowAuto_004a31a8(const uint8_t* arg0) {
if (arg0[0xA] != 0) return false;
if (arg0[0x9] != 0) return false;
return *(const uint8_t * const *)(arg0 + 0x10) != 0 && *(*(const uint8_t * const *)(arg0 + 0x10)) == 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EDCA0
int32_t Main(uint8_t*);
extern "C" bool YellowAuto_003edca0(uint8_t* arg0) __asm__("_ZN6applib5frame7Manager3EndEv");
extern "C" bool YellowAuto_003edca0(uint8_t* arg0) {
if (*(uint8_t **)(arg0 + 0x10) == 0) if (*(int32_t *)(arg0 + 0x0c) == 0) return false;
if (*(uint8_t **)(arg0 + 0x10) != 0 && *(*(uint8_t **)(arg0 + 0x10)) == 2) **(uint8_t **)(arg0 + 0x10) = 3, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(arg0 + 0x10) + 0x10) + 4) = 0;
return Main(arg0) != 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EDD04
extern "C" void YellowAuto_003edd04(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6applib5frame7Manager4DrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_003edd04(uint8_t* arg0, uint32_t arg1) {
uint8_t* cur = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (cur == (uint8_t*)0) return;
while ((uint8_t*)(*(uint32_t*)(cur + 0x04)) != (uint8_t*)0) {
cur = (uint8_t*)(*(uint32_t*)(cur + 0x04));
}
uint8_t* it = cur;
while (it != (uint8_t*)0) {
if (*(uint8_t*)(it + 0x00) == (uint8_t)2) {
uint8_t* app = (uint8_t*)(*(uint32_t*)(it + 0x10));
uint32_t vtbl = *(uint32_t*)(app + 0x00);
void* fn = (void*)(*(uint32_t*)(vtbl + 0x10));
((void(*)(void*, uint32_t))fn)((void*)app, arg1);
}
it = (uint8_t*)(*(uint32_t*)(it + 0x08));
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EDD58
void* operator_new(uint32_t, void*);
void operator_delete(void*);
void GFLassertStop();
extern "C" int32_t YellowAuto_003edd58(uint8_t* arg0) __asm__("_ZN6applib5frame7Manager4MainEv");
extern "C" int32_t YellowAuto_003edd58(uint8_t* arg0) {
int32_t rv = (int32_t)1;
uint8_t* hd0 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (hd0 == (uint8_t*)0) {
if ((uint8_t*)(*(uint32_t*)(arg0 + 0x0c)) == (uint8_t*)0) return (int32_t)0;
}
if (*(uint8_t*)(arg0 + 0x09) != (uint8_t)0) {
void* al1 = (void*)(*(uint32_t*)(arg0 + 0x04));
uint8_t* nn1 = (uint8_t*)operator_new((uint32_t)0x14, al1);
uint8_t* hh1 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (hh1 == (uint8_t*)0) {
*(uint32_t*)(arg0 + 0x10) = (uint32_t)nn1;
} else {
*(uint32_t*)(nn1 + 0x04) = (uint32_t)hh1;
*(uint32_t*)(hh1 + 0x08) = (uint32_t)nn1;
*(uint32_t*)(arg0 + 0x10) = (uint32_t)nn1;
}
uint8_t* nh1 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
*(uint32_t*)(nh1 + 0x10) = *(uint32_t*)(arg0 + 0x0c);
rv = (int32_t)3;
*(uint8_t*)(arg0 + 0x09) = (uint8_t)0;
*(uint32_t*)(arg0 + 0x0c) = (uint32_t)0;
}
if (*(uint8_t*)(arg0 + 0x08) != (uint8_t)0) {
void* al2 = (void*)(*(uint32_t*)(arg0 + 0x04));
uint8_t* nn2 = (uint8_t*)operator_new((uint32_t)0x14, al2);
uint8_t* hh2 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (hh2 == (uint8_t*)0) {
*(uint32_t*)(arg0 + 0x10) = (uint32_t)nn2;
} else {
*(uint32_t*)(nn2 + 0x0c) = (uint32_t)hh2;
*(uint32_t*)(nn2 + 0x04) = (uint32_t)hh2;
*(uint32_t*)(hh2 + 0x08) = (uint32_t)nn2;
*(uint32_t*)(arg0 + 0x10) = (uint32_t)nn2;
}
uint8_t* nh2 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
*(uint32_t*)(nh2 + 0x10) = *(uint32_t*)(arg0 + 0x0c);
rv = (int32_t)3;
*(uint8_t*)(arg0 + 0x08) = (uint8_t)0;
*(uint32_t*)(arg0 + 0x0c) = (uint32_t)0;
}
uint8_t* h = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
uint8_t st = *(uint8_t*)(h + 0x00);
if (st == (uint8_t)0) {
*(uint8_t*)(h + 0x00) = (uint8_t)1;
}
if (st == (uint8_t)0 || st == (uint8_t)1) {
uint8_t* ap1 = (uint8_t*)(*(uint32_t*)(h + 0x10));
uint32_t vt1 = *(uint32_t*)(ap1 + 0x00);
void* fn1 = (void*)(*(uint32_t*)(vt1 + 0x08));
int32_t r1 = ((int32_t(*)(void*))fn1)((void*)ap1);
if (r1 != (int32_t)2 && r1 != (int32_t)1) {
uint8_t* ex1 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (ex1 == (uint8_t*)0) {
if ((uint8_t*)(*(uint32_t*)(arg0 + 0x0c)) == (uint8_t*)0) return (int32_t)0;
}
return rv;
}
*(uint8_t*)(h + 0x00) = (uint8_t)2;
*(uint32_t*)(ap1 + 0x04) = (uint32_t)0;
if (r1 != (int32_t)1) {
uint8_t* ex2 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (ex2 == (uint8_t*)0) {
if ((uint8_t*)(*(uint32_t*)(arg0 + 0x0c)) == (uint8_t*)0) return (int32_t)0;
}
return rv;
}
}
if (*(uint8_t*)(h + 0x00) == (uint8_t)2) {
uint8_t* cu = h;
if (cu == (uint8_t*)0) {
uint8_t* ex3 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (ex3 == (uint8_t*)0) {
if ((uint8_t*)(*(uint32_t*)(arg0 + 0x0c)) == (uint8_t*)0) return (int32_t)0;
}
return rv;
}
while ((uint8_t*)(*(uint32_t*)(cu + 0x0c)) != (uint8_t*)0) {
cu = (uint8_t*)(*(uint32_t*)(cu + 0x0c));
}
int32_t lr = (int32_t)0;
uint8_t* lc = cu;
while ((uint8_t)1 != (uint8_t)0) {
uint8_t* ca = (uint8_t*)(*(uint32_t*)(lc + 0x10));
uint32_t cv = *(uint32_t*)(ca + 0x00);
void* cf = (void*)(*(uint32_t*)(cv + 0x0c));
lr = ((int32_t(*)(void*))cf)((void*)ca);
uint8_t* nx = (uint8_t*)(*(uint32_t*)(lc + 0x08));
if (nx == (uint8_t*)0) break;
lc = nx;
}
if (lr != (int32_t)2 && lr != (int32_t)1) {
uint8_t* ex4 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (ex4 == (uint8_t*)0) {
if ((uint8_t*)(*(uint32_t*)(arg0 + 0x0c)) == (uint8_t*)0) return (int32_t)0;
}
return rv;
}
*(uint8_t*)(lc + 0x00) = (uint8_t)3;
uint8_t* la = (uint8_t*)(*(uint32_t*)(lc + 0x10));
*(uint32_t*)(la + 0x04) = (uint32_t)0;
if (lr != (int32_t)1) {
uint8_t* ex5 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (ex5 == (uint8_t*)0) {
if ((uint8_t*)(*(uint32_t*)(arg0 + 0x0c)) == (uint8_t*)0) return (int32_t)0;
}
return rv;
}
}
if (st != (uint8_t)0 && st != (uint8_t)1 && st != (uint8_t)2 && st != (uint8_t)3) {
uint8_t* ex6 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (ex6 == (uint8_t*)0) {
if ((uint8_t*)(*(uint32_t*)(arg0 + 0x0c)) == (uint8_t*)0) return (int32_t)0;
}
return rv;
}
uint8_t* ha = (uint8_t*)(*(uint32_t*)(h + 0x10));
uint32_t hv = *(uint32_t*)(ha + 0x00);
void* hf = (void*)(*(uint32_t*)(hv + 0x14));
int32_t hr = ((int32_t(*)(void*))hf)((void*)ha);
uint8_t ns = (uint8_t)0;
if (hr == (int32_t)2) ns = (uint8_t)4;
else if (hr == (int32_t)1) ns = (uint8_t)5;
else {
uint8_t* ex7 = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (ex7 == (uint8_t*)0) {
if ((uint8_t*)(*(uint32_t*)(arg0 + 0x0c)) == (uint8_t*)0) return (int32_t)0;
}
return rv;
}
uint8_t* li = (uint8_t*)(*(uint32_t*)(arg0 + 0x14));
if (li != (uint8_t*)0) {
uint32_t lv = *(uint32_t*)(li + 0x00);
void* lf = (void*)(*(uint32_t*)(lv + 0x00));
((void(*)(void*, void*))lf)((void*)li, (void*)ha);
}
*(uint8_t*)(h + 0x00) = ns;
uint8_t* old = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
uint8_t ispop = (uint8_t)0;
if (*(uint8_t*)(old + 0x00) == (uint8_t)5) ispop = (uint8_t)1;
if (*(uint8_t*)(arg0 + 0x0a) == (uint8_t)0) {
uint8_t* nxt = (uint8_t*)(*(uint32_t*)(old + 0x04));
if (nxt == (uint8_t*)0) {
uint8_t* oa = (uint8_t*)(*(uint32_t*)(old + 0x10));
if (oa != (uint8_t*)0) {
uint32_t ov = *(uint32_t*)(oa + 0x00);
void* of = (void*)(*(uint32_t*)(ov + 0x04));
((void(*)(void*))of)((void*)oa);
*(uint32_t*)(old + 0x10) = (uint32_t)0;
}
*(uint32_t*)(arg0 + 0x10) = (uint32_t)0;
} else {
*(uint32_t*)(nxt + 0x08) = (uint32_t)0;
*(uint32_t*)(arg0 + 0x10) = (uint32_t)nxt;
uint8_t* oa2 = (uint8_t*)(*(uint32_t*)(old + 0x10));
if (oa2 != (uint8_t*)0) {
uint32_t ov2 = *(uint32_t*)(oa2 + 0x00);
void* of2 = (void*)(*(uint32_t*)(ov2 + 0x04));
((void(*)(void*))of2)((void*)oa2);
*(uint32_t*)(old + 0x10) = (uint32_t)0;
}
ispop = (uint8_t)1;
}
} else {
void* al3 = (void*)(*(uint32_t*)(arg0 + 0x04));
uint8_t* nn3 = (uint8_t*)operator_new((uint32_t)0x14, al3);
if (*(uint8_t*)(old + 0x00) != (uint8_t)4) GFLassertStop();
uint8_t* onx = (uint8_t*)(*(uint32_t*)(old + 0x04));
if (onx != (uint8_t*)0) {
*(uint32_t*)(nn3 + 0x04) = (uint32_t)onx;
*(uint32_t*)(onx + 0x08) = (uint32_t)nn3;
}
uint8_t* oa3 = (uint8_t*)(*(uint32_t*)(old + 0x10));
if (oa3 != (uint8_t*)0) {
uint32_t ov3 = *(uint32_t*)(oa3 + 0x00);
void* of3 = (void*)(*(uint32_t*)(ov3 + 0x04));
((void(*)(void*))of3)((void*)oa3);
*(uint32_t*)(old + 0x10) = (uint32_t)0;
}
*(uint32_t*)(arg0 + 0x10) = (uint32_t)nn3;
*(uint32_t*)(nn3 + 0x10) = *(uint32_t*)(arg0 + 0x0c);
*(uint8_t*)(arg0 + 0x0a) = (uint8_t)0;
*(uint32_t*)(arg0 + 0x0c) = (uint32_t)0;
}
operator_delete((void*)old);
if (ispop == (uint8_t)0) return (int32_t)0;
return (int32_t)2;
}
#endif
