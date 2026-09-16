// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0016195C
void* GetBinData(void* p0, int32_t p1);
void SetInnerResources(void* p0, void* p1, void* p2, void* p3, int32_t p4, void* p5, int32_t p6);
extern "C" void YellowAuto_0016195c(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN26FullPowerEffectRenderPath111SetResourceEPN4gfl23gfx12IGLAllocatorEPv");
extern "C" void YellowAuto_0016195c(uint8_t* arg0, void* arg1, void* arg2) {
void* acc = arg2;
void* d0 = GetBinData(&acc, 4);
void* d1 = GetBinData(&acc, 5);
void* d2 = GetBinData(&acc, 6);
void* d3 = GetBinData(&acc, 7);
*reinterpret_cast<void**>(arg0 + 248) = arg1;
SetInnerResources(arg0 + 100, arg1, d0, &d1, 2, &d3, 1);
*reinterpret_cast<void**>(arg0 + 256) = arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00161A04
void FUN_00358090(void* arg0);
void FUN_00162814(uint8_t* arg0, uint8_t* arg1);
extern "C" void YellowAuto_00161a04(uint8_t* arg0, void* arg1) __asm__("_ZN26FullPowerEffectRenderPath118DeleteManagedModelEPN4gfl215renderingengine10scenegraph8instance12DrawableNodeE");
extern "C" void YellowAuto_00161a04(uint8_t* arg0, void* arg1) {
uint8_t* b = arg0 + 256;
for (int32_t i = 0; i < 32; ++i) {
uint8_t* e = b + (uint32_t)i * 60U;
if (*(uint32_t*)(e + 56) != (uint32_t)arg1) continue;
uint32_t n = *(uint32_t*)(e + 8);
if (n != 0U) {
uint8_t* a = (uint8_t*)(*(uint32_t*)(e + 4));
for (uint32_t j = 0U; j < n; ++j) {
uint8_t* f = a + j * 44U;
void* p0 = *(void**)(f + 0);
if (p0 != (void*)0) { FUN_00358090(p0); *(uint32_t*)(f + 0) = 0U; }
void* p1 = *(void**)(f + 8);
if (p1 != (void*)0) { FUN_00358090(p1); *(uint32_t*)(f + 8) = 0U; }
void* p2 = *(void**)(f + 16);
if (p2 != (void*)0) { FUN_00358090(p2); *(uint32_t*)(f + 16) = 0U; }
void* p3 = *(void**)(f + 28);
if (p3 != (void*)0) { FUN_00358090(p3); *(uint32_t*)(f + 28) = 0U; }
void* p4 = *(void**)(f + 32);
if (p4 != (void*)0) { FUN_00358090(p4); *(uint32_t*)(f + 32) = 0U; }
}
}
void* q = *(void**)(e + 4);
if (q != (void*)0) { FUN_00358090(q); *(uint32_t*)(e + 4) = 0U; }
FUN_00162814(b, e + 4);
return;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00161AFC
extern "C" void YellowAuto_00161afc(uint8_t* arg0, void* arg1) __asm__("_ZN26FullPowerEffectRenderPath121RemoveRenderingTargetEPN4gfl215renderingengine10scenegraph8instance12DrawableNodeE");
extern "C" void YellowAuto_00161afc(uint8_t* arg0, void* arg1) {
uint32_t c = *(uint32_t*)(arg0 + 80);
uint32_t k0 = c;
while (k0 != 0U) {
uint8_t* p = (uint8_t*)k0;
uint32_t nx = *(uint32_t*)(p + 8);
uint32_t w = *(uint32_t*)(p + 0);
uint32_t t = *(uint32_t*)((uint8_t*)w + 0);
if (t == (uint32_t)arg1) {
uint32_t pv = *(uint32_t*)(p + 4);
uint32_t nv = *(uint32_t*)(p + 8);
if (pv == 0U) {
*(uint32_t*)(arg0 + 80) = nv;
if (nv != 0U) *(uint32_t*)((uint8_t*)nv + 4) = 0U;
} else {
*(uint32_t*)((uint8_t*)pv + 8) = nv;
if (nv != 0U) *(uint32_t*)((uint8_t*)nv + 4) = pv;
}
*(uint32_t*)(p + 8) = 0U;
*(uint32_t*)(p + 4) = 0U;
uint32_t ix = *(uint32_t*)(p + 12);
uint32_t fr = *(uint32_t*)(arg0 + 76);
if (fr != 0U) {
*(uint32_t*)((uint8_t*)fr + 4) = k0;
*(uint32_t*)(p + 8) = fr;
}
*(uint32_t*)(arg0 + 76) = k0;
uint32_t cn = *(uint32_t*)(arg0 + 84);
if (!((cn - 1U) <= ix)) {
uint32_t* ar = (uint32_t*)(*(uint32_t*)(arg0 + 68));
uint32_t k = ix;
while (k < cn - 1U) {
uint32_t v = *(uint32_t*)((uint8_t*)ar + k * 4U + 4U);
*(uint32_t*)((uint8_t*)ar + k * 4U) = v;
*(uint32_t*)((uint8_t*)v + 12) = k;
k = k + 1U;
}
}
uint32_t* ar2 = (uint32_t*)(*(uint32_t*)(arg0 + 68));
uint32_t cn2 = *(uint32_t*)(arg0 + 84);
*(uint32_t*)((uint8_t*)ar2 + (cn2 - 1U) * 4U) = 0U;
*(uint32_t*)(arg0 + 84) = cn2 - 1U;
}
k0 = nx;
}
for (int32_t i = 0; i < 32; ++i) {
uint8_t* e = arg0 + 256 + (uint32_t)i * 60U;
if (*(uint32_t*)(e + 56) == (uint32_t)arg1) {
*(uint8_t*)(e + 60) = 0U;
return;
}
}
}
#endif
