// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015E12C
extern "C" void* YellowAuto_0015e12c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN13WordSetLoader10GetMsgDataEj");
extern "C" void* YellowAuto_0015e12c(uint8_t* arg0, uint32_t arg1) {
uint32_t idx = 0;
uint8_t* sbase = (uint8_t*)(*(uint32_t*)(uint32_t)0x0015E23C);
while (idx < (uint32_t)8) {
uint32_t id0 = (uint32_t)*(uint16_t*)(sbase + idx * (uint32_t)16 + (uint32_t)8);
if (id0 == arg1) {
void* p = (void*)(*(uint32_t*)(sbase + idx * (uint32_t)16 + (uint32_t)12));
if (p != (void*)0) return p;
break;
}
uint32_t id1 = (uint32_t)*(uint16_t*)(sbase + idx * (uint32_t)16 + (uint32_t)24);
if (id1 == arg1) {
void* p2 = (void*)(*(uint32_t*)(sbase + idx * (uint32_t)16 + (uint32_t)28));
if (p2 != (void*)0) return p2;
break;
}
idx += (uint32_t)2;
}
uint32_t cnt = *(uint32_t*)(arg0 + (uint32_t)8);
if (cnt == (uint32_t)0) return (void*)0;
uint32_t odd = cnt & (uint32_t)1;
if (odd != (uint32_t)0) {
uint8_t* base = (uint8_t*)(*(uint32_t*)(arg0 + (uint32_t)16));
uint32_t j = (uint32_t)0;
while (j < odd) {
if ((uint32_t)*(uint16_t*)(base + j * (uint32_t)16 + (uint32_t)8) == arg1) return (void*)(*(uint32_t*)(base + j * (uint32_t)16 + (uint32_t)12));
j += (uint32_t)1;
}
}
if (odd < cnt) {
uint8_t* base2 = (uint8_t*)(*(uint32_t*)(arg0 + (uint32_t)16));
uint32_t k = odd;
while (k < cnt) {
if ((uint32_t)*(uint16_t*)(base2 + k * (uint32_t)16 + (uint32_t)8) == arg1) return (void*)(*(uint32_t*)(base2 + k * (uint32_t)16 + (uint32_t)12));
if ((uint32_t)*(uint16_t*)(base2 + k * (uint32_t)16 + (uint32_t)24) == arg1) return (void*)(*(uint32_t*)(base2 + k * (uint32_t)16 + (uint32_t)28));
k += (uint32_t)2;
}
}
return (void*)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015E4D4
void* FUN_00341ebc();
uint32_t IsArcFileLoadDataFinished(void*, void*);
void* FUN_00105500(uint32_t, void*);
void* MsgData(void*, void*, void*);
extern "C" uint32_t YellowAuto_0015e4d4(uint8_t* arg0) __asm__("_ZN13WordSetLoader8WaitLoadEv");
extern "C" uint32_t YellowAuto_0015e4d4(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + (uint32_t)12) == (uint8_t)2) return (uint32_t)1;
void* mgr = FUN_00341ebc();
uint32_t cnt = *(uint32_t*)(arg0 + (uint32_t)8);
uint32_t i = (uint32_t)0;
if (cnt != (uint32_t)0) {
while (i < cnt) {
uint8_t* base = (uint8_t*)(*(uint32_t*)(arg0 + (uint32_t)16));
void* entry = (void*)(base + i * (uint32_t)16);
if (IsArcFileLoadDataFinished(mgr, entry) == (uint32_t)0) return (uint32_t)0;
cnt = *(uint32_t*)(arg0 + (uint32_t)8);
i += (uint32_t)1;
}
}
uint32_t j = (uint32_t)0;
if (cnt != (uint32_t)0) {
while (j < *(uint32_t*)(arg0 + (uint32_t)8)) {
void* heap = (void*)(*(uint32_t*)arg0);
void* mem = FUN_00105500((uint32_t)48, heap);
void* res = (void*)0;
if (mem != (void*)0) {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arg0 + (uint32_t)16));
void* buf = (void*)(*(uint32_t*)(b + j * (uint32_t)16));
res = MsgData(mem, buf, heap);
}
uint8_t* b2 = (uint8_t*)(*(uint32_t*)(arg0 + (uint32_t)16));
*(uint32_t*)(b2 + j * (uint32_t)16 + (uint32_t)12) = (uint32_t)res;
j += (uint32_t)1;
}
}
*(uint8_t*)(arg0 + (uint32_t)12) = (uint8_t)2;
return (uint32_t)1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015E414
void GFLassertStop(void*, void*, uint32_t);
void GflHeapFreeMemoryBlock(void*);
void FUN_00357cd8(void*);
extern "C" void YellowAuto_0015e414(uint8_t* arg0, int32_t arg1) __asm__("_ZN13WordSetLoader7ReleaseEv");
extern "C" void YellowAuto_0015e414(uint8_t* arg0, int32_t arg1) {
uint8_t st = *(uint8_t*)(arg0 + (uint32_t)12);
if (st == (uint8_t)0) return;
if (st == (uint8_t)1) GFLassertStop((void*)0, (void*)0, (uint32_t)0);
else if (st != (uint8_t)2) {
*(uint8_t*)(arg0 + (uint32_t)12) = (uint8_t)0;
return;
}
if (*(uint8_t*)(arg0 + (uint32_t)20) != (uint8_t)0) {
*(uint32_t*)(arg0 + (uint32_t)24) = (uint32_t)4294967295;
*(uint8_t*)(arg0 + (uint32_t)20) = (uint8_t)0;
}
uint32_t cnt = *(uint32_t*)(arg0 + (uint32_t)8);
uint32_t i = (uint32_t)0;
if (cnt != (uint32_t)0) {
while (i < *(uint32_t*)(arg0 + (uint32_t)8)) {
uint8_t* base = (uint8_t*)(*(uint32_t*)(arg0 + (uint32_t)16));
void* ptr = (void*)(*(uint32_t*)(base + i * (uint32_t)16));
GflHeapFreeMemoryBlock(ptr);
uint8_t* base2 = (uint8_t*)(*(uint32_t*)(arg0 + (uint32_t)16));
void* msg = (void*)(*(uint32_t*)(base2 + i * (uint32_t)16 + (uint32_t)12));
if (msg != (void*)0) {
uint32_t vtbl = *(uint32_t*)msg;
uint32_t fn = *(uint32_t*)((uint8_t*)vtbl + (uint32_t)4);
((void (*)(void*))fn)(msg);
}
i += (uint32_t)1;
}
}
if ((void*)(*(uint32_t*)(arg0 + (uint32_t)16)) != (void*)0) {
FUN_00357cd8((void*)(*(uint32_t*)(arg0 + (uint32_t)16)));
*(uint32_t*)(arg0 + (uint32_t)16) = (uint32_t)0;
}
*(uint8_t*)(arg0 + (uint32_t)12) = (uint8_t)0;
}
#endif
