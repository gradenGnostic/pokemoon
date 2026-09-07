// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D3010
uint32_t GetPublicRand(uint32_t);
extern "C" uint8_t* YellowAuto_003d3010(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN6NetLib3P2P11P2pSyncSaveC1EPNS1_5PARAMEb");
extern "C" uint8_t* YellowAuto_003d3010(uint8_t* arg0, const uint8_t* arg1) {
*(uint32_t*)(arg0 + 0) = *(const uint32_t*)(arg1 + 0);
*(uint32_t*)(arg0 + 4) = *(const uint32_t*)(arg1 + 4);
*(uint32_t*)(arg0 + 8) = *(const uint32_t*)(arg1 + 8);
*(uint32_t*)(arg0 + 12) = *(const uint32_t*)(arg1 + 12);
*(uint32_t*)(arg0 + 16) = *(const uint32_t*)(arg1 + 16);
*(uint32_t*)(arg0 + 20) = *(const uint32_t*)(arg1 + 20);
*(uint32_t*)(arg0 + 32) = *(const uint32_t*)(arg1 + 24);
*(uint16_t*)(arg0 + 36) = *(const uint16_t*)(arg1 + 28);
*(uint8_t*)(arg0 + 38) = *(const uint8_t*)(arg1 + 30);
*(uint16_t*)(arg0 + 40) = *(const uint16_t*)(arg1 + 32);
*(uint8_t*)(arg0 + 42) = *(const uint8_t*)(arg1 + 34);
*(uint32_t*)(arg0 + 28) = 0;
*(int32_t*)(arg0 + 24) = (int32_t)GetPublicRand(300) + 2;
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D2CD0
int32_t CheckLegend(uint16_t, uint8_t);
int32_t CheckSubLegend(uint16_t);
void TimingStart(void*, uint32_t);
int32_t IsTimingEnd(void*, uint32_t);
int32_t IsMaster(void);
void PushSaveTime(void*);
void GameTimeInit(void*);
void DateInit(void*);
void GetNow(void*);
void SetDate(void*, void*);
void SetSaveTime(void*, void*);
void FirstSaveStart(void*, void*);
int32_t FirstSaveMain(void*, void*);
void LastSaveStart(void*, void*);
int32_t LastSaveMain(void*, void*);
extern "C" int32_t YellowAuto_003d2cd0(uint8_t* arg0) __asm__("_ZN6NetLib3P2P11P2pSyncSave14UpdateSyncSaveEv");
extern "C" int32_t YellowAuto_003d2cd0(uint8_t* arg0) {
int32_t s = *(int32_t*)(arg0 + 28);
switch (s) {
case 0: {
uint16_t a = *(uint16_t*)(arg0 + 36);
uint8_t b = *(uint8_t*)(arg0 + 38);
uint16_t c = *(uint16_t*)(arg0 + 40);
uint8_t d = *(uint8_t*)(arg0 + 42);
int32_t e = (CheckLegend(a, b) != 0) || (CheckSubLegend(a) != 0);
int32_t f = (CheckLegend(c, d) != 0) || (CheckSubLegend(c) != 0);
if (e != 0 && f == 0) *(uint8_t*)(*(uint32_t*)0x3D3008) = 1;
else if (e == 0 && f != 0) *(uint8_t*)(*(uint32_t*)0x3D3008) = 0;
*(int32_t*)(arg0 + 28) = 1;
}
case 1: {
void* g = *(void**)(arg0 + 4);
uint32_t h = *(uint32_t*)(arg0 + 8);
TimingStart(g, h);
*(int32_t*)(arg0 + 28) = 2;
return 0;
}
case 2: {
void* i = *(void**)(arg0 + 4);
uint32_t j = *(uint32_t*)(arg0 + 8);
if (IsTimingEnd(i, j) == 0) return 0;
*(int32_t*)(arg0 + 28) = 3;
return 0;
}
case 3: {
void* k = *(void**)(arg0 + 0);
void* l = *(void**)(k + 48);
PushSaveTime(l);
uint8_t m[96];
uint8_t n[8];
GameTimeInit(m);
DateInit(n);
GetNow(n);
SetDate(m, n);
SetSaveTime(l, m);
void* o = *(void**)(arg0 + 20);
FirstSaveStart(k, o);
*(int32_t*)(arg0 + 28) = 4;
return 0;
}
case 4: {
void* p = *(void**)(arg0 + 0);
uint8_t q = 1;
if (FirstSaveMain(p, &q) == 0) return 0;
*(int32_t*)(arg0 + 28) = 5;
return 0;
}
case 5: {
if (IsMaster() != 0) {
*(int32_t*)(arg0 + 24) = 0;
*(int32_t*)(arg0 + 28) = *(int32_t*)(arg0 + 28) + 1;
}
*(int32_t*)(arg0 + 24) = *(int32_t*)(arg0 + 24) - 1;
if (*(int32_t*)(arg0 + 24) != 0) return 0;
*(int32_t*)(arg0 + 28) = *(int32_t*)(arg0 + 28) + 1;
return 0;
}
case 6: {
void* r = *(void**)(arg0 + 4);
uint32_t s2 = *(uint32_t*)(arg0 + 12);
TimingStart(r, s2);
*(int32_t*)(arg0 + 28) = 7;
}
case 7: {
void* t = *(void**)(arg0 + 4);
uint32_t u = *(uint32_t*)(arg0 + 12);
if (IsTimingEnd(t, u) == 0) return 0;
void* v = *(void**)(arg0 + 0);
void* w = *(void**)(arg0 + 20);
LastSaveStart(v, w);
*(int32_t*)(arg0 + 28) = 8;
return 0;
}
case 8: {
void* x = *(void**)(arg0 + 0);
uint8_t y = 1;
if (LastSaveMain(x, &y) == 0) return 0;
*(int32_t*)(arg0 + 28) = 9;
return 0;
}
case 9: {
void* z = *(void**)(arg0 + 4);
uint32_t a1 = *(uint32_t*)(arg0 + 16);
TimingStart(z, a1);
*(int32_t*)(arg0 + 28) = 10;
return 0;
}
case 10: {
void* b1 = *(void**)(arg0 + 4);
uint32_t c1 = *(uint32_t*)(arg0 + 16);
if (IsTimingEnd(b1, c1) == 0) return 0;
*(int32_t*)(arg0 + 28) = *(int32_t*)(arg0 + 28) + 1;
return 1;
}
default: return 0;
}
}
#endif
