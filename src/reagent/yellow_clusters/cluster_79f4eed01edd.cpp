// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00333ADC
extern "C" void YellowAuto_00333adc(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl215renderingengine8renderer11DrawManager10AddDrawEnvEPNS0_10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_00333adc(uint8_t* arg0, void* arg1) {
uint8_t* e = *reinterpret_cast<uint8_t**>(arg0 + 0x54);
uint8_t* n = *reinterpret_cast<uint8_t**>(e + 8);
uint8_t* c = *reinterpret_cast<uint8_t**>(e);
if (c != 0) {
*reinterpret_cast<uint8_t**>(c) = 0;
}
uint8_t* d = *reinterpret_cast<uint8_t**>(e);
*reinterpret_cast<void**>(d) = arg1;
*reinterpret_cast<uint8_t**>(e + 8) = 0;
*reinterpret_cast<uint8_t**>(e + 4) = 0;
uint32_t s = *reinterpret_cast<uint32_t*>(arg0 + 0x5C);
*reinterpret_cast<uint32_t*>(e + 12) = s;
uint8_t* t = *reinterpret_cast<uint8_t**>(arg0 + 0x58);
if (t != 0) {
*reinterpret_cast<uint8_t**>(t + 4) = e;
*reinterpret_cast<uint8_t**>(e + 8) = t;
}
*reinterpret_cast<uint8_t**>(arg0 + 0x58) = e;
uint8_t* b = *reinterpret_cast<uint8_t**>(arg0 + 0x4C);
*reinterpret_cast<uint8_t**>(b + s * 4) = e;
*reinterpret_cast<uint8_t**>(arg0 + 0x54) = n;
*reinterpret_cast<uint32_t*>(arg0 + 0x5C) = s + 1;
if (n != 0) {
*reinterpret_cast<uint8_t**>(n + 4) = 0;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00333BB8
extern "C" void YellowAuto_00333bb8(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl215renderingengine8renderer11DrawManager13RemoveDrawEnvEPNS0_10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_00333bb8(uint8_t* arg0, void* arg1) {
uint8_t* cur = *reinterpret_cast<uint8_t**>(arg0 + 0x58);
while (cur != 0) {
uint8_t* nxt = *reinterpret_cast<uint8_t**>(cur + 8);
uint8_t* cell = *reinterpret_cast<uint8_t**>(cur);
void* val = *reinterpret_cast<void**>(cell);
if (val == arg1) {
uint8_t* head = *reinterpret_cast<uint8_t**>(arg0 + 0x58);
uint8_t* prv = *reinterpret_cast<uint8_t**>(cur + 4);
if (head == cur && prv == 0) {
*reinterpret_cast<uint8_t**>(arg0 + 0x58) = nxt;
if (nxt != 0) {
*reinterpret_cast<uint8_t**>(nxt + 4) = 0;
}
} else {
uint8_t* nx = *reinterpret_cast<uint8_t**>(cur + 8);
*reinterpret_cast<uint8_t**>(prv + 8) = nx;
if (nx != 0) {
*reinterpret_cast<uint8_t**>(nx + 4) = prv;
}
}
*reinterpret_cast<uint8_t**>(cur + 8) = 0;
*reinterpret_cast<uint8_t**>(cur + 4) = 0;
uint32_t idx = *reinterpret_cast<uint32_t*>(cur + 12);
uint8_t* fh = *reinterpret_cast<uint8_t**>(arg0 + 0x54);
if (fh != 0) {
*reinterpret_cast<uint8_t**>(fh + 4) = cur;
*reinterpret_cast<uint8_t**>(cur + 8) = fh;
}
*reinterpret_cast<uint8_t**>(arg0 + 0x54) = cur;
uint32_t sz = *reinterpret_cast<uint32_t*>(arg0 + 0x5C);
uint8_t* base = *reinterpret_cast<uint8_t**>(arg0 + 0x4C);
if (idx < sz - 1) {
uint32_t i = idx;
do {
uint8_t* mv = *reinterpret_cast<uint8_t**>(base + i * 4 + 4);
*reinterpret_cast<uint8_t**>(base + i * 4) = mv;
*reinterpret_cast<uint32_t*>(mv + 12) = i;
i = i + 1;
} while (i < sz - 1);
}
*reinterpret_cast<uint8_t**>(base + sz * 4 - 4) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x5C) = sz - 1;
}
cur = nxt;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033443C
void* Update(uint8_t*);
uint32_t FUN_00333e28(uint8_t*, void*, void*);
void FUN_00333f5c(uint8_t*, uint32_t*, void*, void*, uint32_t);
extern "C" void YellowAuto_0033443c(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer11DrawManager4DrawEi");
extern "C" void YellowAuto_0033443c(uint8_t* arg0, int32_t arg1) {
if (arg1 != 0) {
Update(arg0);
}
uint32_t tIdx = 0;
uint8_t* tBase = arg0 + 108;
if (*(uint32_t*)(arg0 + 116) != 0) {
tBase = (uint8_t*)*(uint32_t*)(arg0 + 116);
}
uint32_t tCount = *(uint32_t*)(tBase + 4);
if (tCount != 0) {
uint32_t tArr = *(uint32_t*)(tBase + 0);
while (tIdx < tCount) {
uint32_t tItem = *(uint32_t*)(tArr + tIdx * 4);
void* tVis = (void*)*(uint32_t*)((uint8_t*)tItem + 20);
uint32_t tEnvN = *(uint32_t*)(arg0 + 92);
uint32_t tEnvVal = 0;
uint32_t tEnvI = 0;
if (tEnvN != 0) {
uint32_t tEnvBase = *(uint32_t*)(arg0 + 76);
while (tEnvI < tEnvN) {
uint32_t tE0 = *(uint32_t*)(tEnvBase + tEnvI * 4);
uint32_t tE1 = *(uint32_t*)(tE0);
uint32_t tE2 = *(uint32_t*)(tE1);
void* tCand = (void*)tE2;
uint32_t tOk = FUN_00333e28(arg0, tVis, tCand);
if (tOk != 0) {
tEnvVal = tE2;
int32_t tFlag = (int32_t)*(uint32_t*)((uint8_t*)tItem + 12);
if (tFlag >= 0) {
uint32_t tLocal[32];
for (uint32_t tJ = 0; tJ < 32; tJ = tJ + 1) {
tLocal[tJ] = 0;
}
FUN_00333f5c(arg0, tLocal, tVis, tCand, (uint32_t)tFlag);
for (uint32_t tK = 0; tK < 32; tK = tK + 1) {
*(uint32_t*)(arg0 + 176 + tK * 4) = 0;
}
for (uint32_t tM = 0; tM < 32; tM = tM + 1) {
uint32_t tV = tLocal[tM];
if (tV == 0) {
break;
}
*(uint32_t*)(arg0 + 176 + tM * 4) = tV;
}
}
break;
}
tEnvI = tEnvI + 1;
tEnvVal = 0;
}
}
if (*(uint32_t*)(arg0 + 324) != tEnvVal) {
*(uint32_t*)(arg0 + 324) = tEnvVal;
*(uint8_t*)(arg0 + 328) = 0;
}
uint32_t tAux = *(uint32_t*)((uint8_t*)tItem + 32);
if (tAux != 0) {
uint32_t tVt0 = *(uint32_t*)(tAux);
uint32_t tFn0 = *(uint32_t*)(tVt0);
((void(*)(void*, uint8_t*))tFn0)((void*)tAux, arg0 + 120);
}
uint32_t tVt = *(uint32_t*)(tItem);
uint32_t tFn1 = *(uint32_t*)(tVt + 8);
((void(*)(void*, uint8_t*))tFn1)((void*)tItem, arg0 + 120);
uint32_t tAux2 = *(uint32_t*)((uint8_t*)tItem + 32);
if (tAux2 != 0) {
uint32_t tVt2 = *(uint32_t*)(tAux2);
uint32_t tFn2 = *(uint32_t*)(tVt2 + 4);
((void(*)(void*, uint8_t*))tFn2)((void*)tAux2, arg0 + 120);
}
tIdx = tIdx + 1;
}
}
}
#endif
