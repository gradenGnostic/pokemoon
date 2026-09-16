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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305FC4
void operator_delete(void*);
void operator_delete_array(void*);
extern "C" void YellowAuto_00305fc4(uint8_t* arg0) __asm__("_ZN3app4util10EffectUtil7DestroyEv");
extern "C" void YellowAuto_00305fc4(uint8_t* arg0) {
if (*reinterpret_cast<uint32_t*>(arg0 + 0x24) != 0) { operator_delete_array(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x24))); *reinterpret_cast<uint32_t*>(arg0 + 0x24) = 0; } if (*reinterpret_cast<uint32_t*>(arg0 + 0x04) != 0) { uint32_t i = 0; do { uint32_t off = i * 12 + 8; uint32_t base = *reinterpret_cast<uint32_t*>(arg0 + 0x20); uint32_t e = *reinterpret_cast<uint32_t*>(base + off); if (e != 0) { if (*reinterpret_cast<uint32_t*>(e + 4) != 0) { operator_delete_array(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(e + 4))); *reinterpret_cast<uint32_t*>(e + 4) = 0; } if (*reinterpret_cast<uint32_t*>(e) != 0) { operator_delete(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(e))); *reinterpret_cast<uint32_t*>(e) = 0; } *reinterpret_cast<uint32_t*>(e + 8) = 0; *reinterpret_cast<uint32_t*>(e + 12) = 0; *reinterpret_cast<uint32_t*>(e + 16) = 0; operator_delete(reinterpret_cast<void*>(e)); *reinterpret_cast<uint32_t*>(base + off) = 0; } i = i + 1; } while (i < *reinterpret_cast<uint32_t*>(arg0 + 0x04)); } if (*reinterpret_cast<uint32_t*>(arg0 + 0x20) != 0) { operator_delete_array(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x20))); *reinterpret_cast<uint32_t*>(arg0 + 0x20) = 0; } if (*reinterpret_cast<uint32_t*>(arg0 + 0x1C) != 0) { operator_delete_array(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x1C))); *reinterpret_cast<uint32_t*>(arg0 + 0x1C) = 0; } if (*reinterpret_cast<uint32_t*>(arg0 + 0x18) != 0) { uint32_t o0 = *reinterpret_cast<uint32_t*>(arg0 + 0x18); uint32_t vt0 = *reinterpret_cast<uint32_t*>(o0); uint32_t fn0 = *reinterpret_cast<uint32_t*>(vt0 + 4); reinterpret_cast<void(*)(uint32_t)>(reinterpret_cast<void*>(fn0))(o0); *reinterpret_cast<uint32_t*>(arg0 + 0x18) = 0; } if (*reinterpret_cast<uint32_t*>(arg0 + 0x14) != 0) { uint32_t o1 = *reinterpret_cast<uint32_t*>(arg0 + 0x14); uint32_t vt1 = *reinterpret_cast<uint32_t*>(o1); uint32_t fn1 = *reinterpret_cast<uint32_t*>(vt1 + 4); reinterpret_cast<void(*)(uint32_t)>(reinterpret_cast<void*>(fn1))(o1); *reinterpret_cast<uint32_t*>(arg0 + 0x14) = 0; } if (*reinterpret_cast<uint32_t*>(arg0 + 0x10) != 0) { operator_delete_array(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x10))); *reinterpret_cast<uint32_t*>(arg0 + 0x10) = 0; } *reinterpret_cast<uint32_t*>(arg0 + 0x04) = 0; *reinterpret_cast<uint32_t*>(arg0 + 0x08) = 0;
}
#endif
