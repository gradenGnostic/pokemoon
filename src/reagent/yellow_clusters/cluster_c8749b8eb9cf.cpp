// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305860
void EntryResource(void*, void*, void*, uint32_t, void*);
void GFLassert(void*, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_00305860(uint8_t* arg0, void* arg1, uint32_t arg2, void* arg3) __asm__("_ZN3app4util10EffectUtil25EffectSystemEntryResourceEPvjPN2nw3eft7EnvInfoE");
extern "C" void YellowAuto_00305860(uint8_t* arg0, void* arg1, uint32_t arg2, void* arg3) {
if (arg2 < *(uint32_t *)(arg0 + 8) && ((void **)*(uint32_t *)(arg0 + 28))[arg2] == (void *)0) { EntryResource(*(void **)(arg0 + 24), *(void **)(arg0 + 20), arg1, arg2, arg3); ((void **)*(uint32_t *)(arg0 + 28))[arg2] = arg1; return; } GFLassert((void *)0, (void *)0, 0, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003057EC
void ClearResource(void*, void*, uint32_t);
void GFLassert(void*, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_003057ec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util10EffectUtil25EffectSystemClearResourceEj");
extern "C" void YellowAuto_003057ec(uint8_t* arg0, uint32_t arg1) {
if (arg1 < *(uint32_t *)(arg0 + 8) && ((void **)*(uint32_t *)(arg0 + 28))[arg1] != (void *)0) { ClearResource(*(void **)(arg0 + 24), *(void **)(arg0 + 20), arg1); ((void **)*(uint32_t *)(arg0 + 28))[arg1] = (void *)0; return; } GFLassert((void *)0, (void *)0, 0, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305A3C
void CreateEmitterSetID(void*, void*, void*, uint32_t, uint32_t, uint32_t, uint32_t);
void GFLassert(void*, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_00305a3c(uint8_t* arg0) __asm__("_ZN3app4util10EffectUtil53CreateAllEffectEmitterSetForMode1Res1EmitterSet1GroupEv");
extern "C" void YellowAuto_00305a3c(uint8_t* arg0) {
if (*(uint8_t *)(arg0 + 12) != 1) { GFLassert((void *)0, (void *)0, 0, 0); return; } if (*(void **)(arg0 + 24) == (void *)0) return; for (uint32_t i = 0; i < *(uint32_t *)(arg0 + 8); ++i) { if (((void **)*(uint32_t *)(arg0 + 28))[i] != (void *)0) { uint32_t vals[3]; CreateEmitterSetID(*(void **)(arg0 + 24), (void *)(*(uint32_t *)(arg0 + 36) + i * 8), (void *)vals, 0, i, i & 255, 4294967295U); } } return;
}
#endif
