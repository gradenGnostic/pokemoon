// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004920C4
void f00319100(const uint8_t *, bool);
extern "C" bool YellowAuto_004920c4(const uint8_t* arg0, bool arg1) __asm__("_ZNK3pml8pokepara9CoreParam11EndFastModeEb");
extern "C" bool YellowAuto_004920c4(const uint8_t* arg0, bool arg1) {
const uint8_t *inner = *(const uint8_t * const *)(arg0 + 12); int8_t v = *(const int8_t *)(inner + 13); bool hit = (v & (int8_t)arg1) != 0; if (hit) f00319100(inner, arg1); return hit;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00319CFC
void f00319d18(uint8_t *, uint8_t, uint8_t);
extern "C" void YellowAuto_00319cfc(uint8_t* arg0, uint8_t arg1, uint8_t arg2) __asm__("_ZN3pml8pokepara9CoreParam16SetWazaPPUpCountEhh");
extern "C" void YellowAuto_00319cfc(uint8_t* arg0, uint8_t arg1, uint8_t arg2) {
uint8_t *inner = *(uint8_t **)(arg0 + 12); uint8_t c = arg2; if (c > 3u) c = 3u; f00319d18(inner, arg1, c); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004918FC
void f0031a3b0(const uint8_t *);
const uint8_t *f00491584(const uint8_t *, uint32_t);
void f0031a338(const uint8_t *);
extern "C" uint8_t YellowAuto_004918fc(const uint8_t* arg0) __asm__("_ZNK3pml8pokepara9CoreParam20GetResortEventStatusEv");
extern "C" uint8_t YellowAuto_004918fc(const uint8_t* arg0) {
const uint8_t *inner = *(const uint8_t * const *)(arg0 + 12); f0031a3b0(inner); const uint8_t *p = f00491584(inner, 0u); uint8_t v = *(p + 34u); f0031a338(inner); return v;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031A1B8
void f0031a3b0(uint8_t *);
uint8_t *f00491584(uint8_t *, uint32_t);
void f0031a338(uint8_t *);
extern "C" void YellowAuto_0031a1b8(uint8_t* arg0, uint8_t arg1) __asm__("_ZN3pml8pokepara9CoreParam20SetResortEventStatusEh");
extern "C" void YellowAuto_0031a1b8(uint8_t* arg0, uint8_t arg1) {
uint8_t *inner = *(uint8_t **)(arg0 + 12); f0031a3b0(inner); uint8_t *p = f00491584(inner, 1u); *(p + 34u) = arg1; f0031a338(inner); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031AF30
void f0031a3b0(uint8_t *);
uint8_t *f0049170c(uint8_t *, uint32_t);
void f0031a338(uint8_t *);
extern "C" void YellowAuto_0031af30(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3pml8pokepara9CoreParam12SetParentSexENS_3SexE");
extern "C" void YellowAuto_0031af30(uint8_t* arg0, uint32_t arg1) {
uint8_t *inner = *(uint8_t **)(arg0 + 12); f0031a3b0(inner); uint8_t *p = f0049170c(inner, 1u); uint8_t v = *(p + 45u); v = (uint8_t)((v & 127u) | ((arg1 & 1u) << 7)); *(p + 45u) = v; f0031a338(inner); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031D984
void FUN_0031a9f4(uint8_t* arg0, uint32_t arg1);
extern "C" void YellowAuto_0031d984(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3pml8pokepara9CoreParam7SetFeedEj");
extern "C" void YellowAuto_0031d984(uint8_t* arg0, uint32_t arg1) {
uint8_t* inner = (uint8_t*)(*(uint32_t*)(arg0 + 12)); uint32_t clamped = arg1; if (clamped >= 255) clamped = 255; else clamped = clamped & 255; FUN_0031a9f4(inner, clamped); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492730
uint16_t FUN_00491f88(const uint8_t* arg0);
void* FUN_00492730_manager();
uint32_t FUN_0048ff74(void* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t* arg3);
extern "C" bool YellowAuto_00492730(const uint8_t* arg0, uint32_t arg1, uint16_t* arg2, uint32_t* arg3) __asm__("_ZNK3pml8pokepara9CoreParam15CanEvolveByItemEtP6MonsNoPj");
extern "C" bool YellowAuto_00492730(const uint8_t* arg0, uint32_t arg1, uint16_t* arg2, uint32_t* arg3) {
const uint8_t* inner = (const uint8_t*)(*(uint32_t*)(arg0 + 12)); uint16_t cur = FUN_00491f88(inner); void* mgr = FUN_00492730_manager(); uint32_t evo = FUN_0048ff74(mgr, arg0, arg1, arg3); *arg2 = (uint16_t)evo; return evo != cur;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004934A0
uint16_t FUN_00491f88(const uint8_t* arg0);
void* FUN_004934a0_manager();
uint32_t FUN_004902bc(void* arg0, const uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3, uint32_t* arg4);
extern "C" bool YellowAuto_004934a0(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, uint16_t* arg3, uint32_t* arg4) __asm__("_ZNK3pml8pokepara9CoreParam9CanEvolveEPKNS0_15EvolveSituationEPKNS_9PokePartyEP6MonsNoPj");
extern "C" bool YellowAuto_004934a0(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, uint16_t* arg3, uint32_t* arg4) {
const uint8_t* inner = (const uint8_t*)(*(uint32_t*)(arg0 + 12)); uint16_t cur = FUN_00491f88(inner); void* mgr = FUN_004934a0_manager(); uint32_t evo = FUN_004902bc(mgr, arg0, arg2, arg1, arg4); *arg3 = (uint16_t)evo; return evo != cur;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031AD14
void FUN_00108a70(void* arg0, uint32_t arg1);
void FUN_0031a338(uint8_t* arg0, uint32_t arg1);
extern "C" void YellowAuto_0031ad14(uint8_t* arg0) __asm__("_ZN3pml8pokepara9CoreParam5ClearEv");
extern "C" void YellowAuto_0031ad14(uint8_t* arg0) {
uint8_t* inner = (uint8_t*)(*(uint32_t*)(arg0 + 12)); uint8_t* p1 = (uint8_t*)(*(uint32_t*)(inner + 8)); if (p1 != (uint8_t*)0) FUN_00108a70(p1, 232); uint8_t* p2 = (uint8_t*)(*(uint32_t*)(inner + 4)); if (p2 != (uint8_t*)0) FUN_00108a70(p2, 28); *(inner + 12) = 0; *(inner + 13) = 0; FUN_0031a338(inner, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492BC4
uint16_t FUN_00491f88(const uint8_t* arg0);
uint32_t FUN_0031b430(uint32_t arg0, uint32_t arg1, uint8_t* arg2);
uint8_t FUN_00491ef8(const uint8_t* arg0);
extern "C" uint8_t YellowAuto_00492bc4(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK3pml8pokepara9CoreParam25GetNextFormNoFromHoldItemEt");
extern "C" uint8_t YellowAuto_00492bc4(const uint8_t* arg0, uint16_t arg1) {
const uint8_t* inner = (const uint8_t*)(*(uint32_t*)(arg0 + 12)); uint16_t mons = FUN_00491f88(inner); uint8_t out; uint32_t ok = FUN_0031b430(mons, arg1, &out); if (ok == 0) return FUN_00491ef8(inner); return out;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031CE0C
uint16_t FUN_00491f88(const uint8_t* arg0);
void FUN_003147d4(uint16_t* arg0, uint16_t arg1);
void FUN_00319288(uint8_t* arg0, uint16_t* arg1);
void FUN_00319a4c(uint8_t* arg0, uint32_t arg1);
extern "C" void YellowAuto_0031ce0c(uint8_t* arg0) __asm__("_ZN3pml8pokepara9CoreParam18SetDefaultNickNameEv");
extern "C" void YellowAuto_0031ce0c(uint8_t* arg0) {
uint8_t* inner = (uint8_t*)(*(uint32_t*)(arg0 + 12)); uint16_t mons = FUN_00491f88(inner); uint16_t buf[16]; FUN_003147d4(buf, mons); FUN_00319288(inner, buf); FUN_00319a4c(inner, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031DDC0
uint32_t FUN_00492010(uint8_t* arg0, uint32_t arg1);
uint32_t FUN_00491528(uint8_t* arg0, uint32_t arg1);
uint32_t FUN_0031e5bc(uint32_t arg0, uint32_t arg1);
void FUN_0031a53c(uint8_t* arg0, uint32_t arg1, uint8_t arg2);
extern "C" void YellowAuto_0031ddc0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3pml8pokepara9CoreParam9SetWazaPPEhh");
extern "C" void YellowAuto_0031ddc0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint8_t* inner = (uint8_t*)(*(uint32_t*)(arg0 + 12)); uint32_t waza = FUN_00492010(inner, arg1); uint32_t pup = FUN_00491528(inner, arg1); uint32_t max = FUN_0031e5bc(waza, pup); uint32_t pp = arg2; if (max < pp) pp = max; uint8_t pp8 = (uint8_t)(pp & 255); FUN_0031a53c(inner, arg1, pp8); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00318050
uint16_t FUN_004908b4(const void*);
extern "C" uint32_t YellowAuto_00318050(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK3pml8pokepara9CoreParam10GetBoxMarkENS0_7BoxMarkE");
extern "C" uint32_t YellowAuto_00318050(const uint8_t* arg0, int32_t arg1) {
const void* v0 = *(const void* const*)(arg0 + 12); uint16_t v1 = FUN_004908b4(v0); uint32_t s = ((uint32_t)arg1 << 1) & 255U; return (uint32_t)(((uint32_t)v1 >> s) & 3U);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031B0BC
uint8_t FUN_00490a14(const void*);
extern const uint8_t DAT_0031b0f0[];
extern "C" uint8_t YellowAuto_0031b0bc(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK3pml8pokepara9CoreParam10JudgeTasteENS0_5TasteE");
extern "C" uint8_t YellowAuto_0031b0bc(const uint8_t* arg0, int32_t arg1) {
const void* v0 = *(const void* const*)(arg0 + 12); uint8_t v1 = FUN_00490a14(v0); return DAT_0031b0f0[(uint32_t)v1 * 5U + (uint32_t)arg1];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031DA7C
void FUN_0031ad5c(void*, uint32_t, uint32_t, uint8_t);
extern const uint32_t DAT_0031daac;
extern "C" void YellowAuto_0031da7c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint8_t arg3) __asm__("_ZN3pml8pokepara9CoreParam8CopyFromERKS1_");
extern "C" void YellowAuto_0031da7c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint8_t arg3) {
void* v0 = *(void* const*)(arg1 + 12); FUN_0031ad5c(v0, DAT_0031daac, arg2, arg3); void** v1 = *(void***)(arg0); ((void (*)(uint8_t*, uint32_t))v1[0])(arg0, DAT_0031daac);
}
#endif
