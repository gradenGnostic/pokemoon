// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025BF88
extern "C" void YellowAuto_0025bf88(uint8_t* arg0) __asm__("_ZN2nn3snd3CTR20InitializeWaveBufferEPNS1_10WaveBufferE");
extern "C" void YellowAuto_0025bf88(uint8_t* arg0) {
*(uint32_t*)arg0 = 0; *(uint32_t*)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; *(arg0 + 17) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025E5C4
void FUN_0025a3b8(void* arg0, void* arg1);
extern "C" void YellowAuto_0025e5c4(void* arg0) __asm__("_ZN2nn3snd3CTR9FreeVoiceEPNS1_5VoiceE");
extern "C" void YellowAuto_0025e5c4(void* arg0) {
extern void* DAT_0025e5d0; FUN_0025a3b8(DAT_0025e5d0, arg0); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0025B408
extern "C" int32_t YellowAuto_0025b408(int32_t arg0, int32_t arg1, int32_t arg2) __asm__("_ZN2nn3snd3CTR15GetSampleLengthEiNS1_12SampleFormatEi");
extern "C" int32_t YellowAuto_0025b408(int32_t arg0, int32_t arg1, int32_t arg2) {
if (arg1 == 0) return arg0 / arg2;
if (arg1 == 1) return arg0 / (arg2 << 1);
if (arg1 != 2) return 0;
uint32_t t = (uint32_t)arg0 << 1;
uint32_t q = t >> 4;
uint32_t r = t & 15U;
uint32_t base = q * 14U;
if (r < 2U) return (int32_t)base;
return (int32_t)(base + r - 2U);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002593F4
uint32_t FUN_00277320(uint32_t);
void FUN_0025a3b8(void*, void*);
void FUN_0025c030(void*);
void FUN_0025f23c(void*, uint32_t);
void Enter(void*);
void Leave(void*);
extern "C" uint32_t* YellowAuto_002593f4(int32_t arg0, void* arg1, uint32_t arg2) __asm__("_ZN2nn3snd3CTR10AllocVoiceEiPFvPNS1_5VoiceEjEj");
extern "C" uint32_t* YellowAuto_002593f4(int32_t arg0, void* arg1, uint32_t arg2) {
if ((uint32_t)arg0 > 32767U) return (uint32_t*)0; uint8_t* s = *(uint8_t**)0x259408U; Enter((void*)(s + 16)); uint32_t c = FUN_00277320(*(uint32_t*)s); if (c == 24U) { uint8_t* t = *(uint8_t**)(s + 8); int32_t tp = *(int32_t*)(t + 32); if (tp == 32767 || arg0 < tp) { Leave((void*)(s + 16)); return (uint32_t*)0; } void* cb = *(void**)(t + 44); uint32_t ud = *(uint32_t*)(t + 48); FUN_0025a3b8((void*)s, (void*)t); if (cb != (void*)0) ((void(*)(void*, uint32_t))cb)((void*)t, ud); } uint32_t m = *(uint32_t*)s; int32_t idx = -1; for (int32_t i = 0; i < 24; i++) { if (((m >> (uint32_t)i) & 1U) == 0U) { idx = i; break; } } uint8_t* v = (uint8_t*)0; if (idx != -1) { *(uint32_t*)s = m | (1U << (uint32_t)idx); uint16_t cc = *(uint16_t*)(s + 12); *(uint16_t*)(s + 12) = (uint16_t)(cc + 1U); v = *(uint8_t**)(s + 5596 + (uint32_t)idx * 4U); FUN_0025c030((void*)v); } *(int32_t*)(v + 32) = arg0; uint8_t* h = *(uint8_t**)(s + 4); if (h == (uint8_t*)0) { *(uint8_t**)(v + 36) = (uint8_t*)0; *(uint8_t**)(s + 4) = v; *(uint8_t**)(v + 40) = (uint8_t*)0; *(uint8_t**)(s + 8) = v; } else { uint8_t* cur = h; while (1) { int32_t cp = *(int32_t*)(cur + 32); if (cp <= arg0) { uint8_t* pr = *(uint8_t**)(cur + 36); *(uint8_t**)(v + 40) = cur; *(uint8_t**)(v + 36) = pr; if (pr == (uint8_t*)0) *(uint8_t**)(s + 4) = v; else *(uint8_t**)(pr + 40) = v; *(uint8_t**)(cur + 36) = v; break; } uint8_t* nx = *(uint8_t**)(cur + 40); if (nx == (uint8_t*)0) { *(uint8_t**)(cur + 40) = v; *(uint8_t**)(v + 36) = cur; *(uint8_t**)(v + 40) = (uint8_t*)0; *(uint8_t**)(s + 8) = v; break; } cur = nx; } } Leave((void*)(s + 16)); void* q = *(void**)(v + 104); FUN_0025f23c(q, 2U); uint16_t qc = *(uint16_t*)((uint8_t*)q + 4); *(uint16_t*)((uint8_t*)q + 4) = (uint16_t)(qc + 1U); *(void**)(v + 44) = arg1; *(uint32_t*)(v + 48) = arg2; return (uint32_t*)v;
}
#endif
