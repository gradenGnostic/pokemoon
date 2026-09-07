// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036A85C
extern "C" void YellowAuto_0036a85c(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN4gfl29animation26DrawEnvAnimationController10InitializeEPNS_4heap11CtrHeapBaseEPNS_15renderingengine10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_0036a85c(uint8_t* arg0, void* arg1, void* arg2) {
*(uint32_t*)arg0 = (uint32_t)arg1; *(uint32_t*)(arg0 + 4) = (uint32_t)arg2; for (uint32_t s = 0; s < 2; ++s) { for (uint32_t i = 0; i < 12; ++i) *(uint32_t*)(arg0 + 8 + s * 0x34 + i * 4) = 0; *(uint32_t*)(arg0 + 0x38 + s * 0x34) = 0; } for (uint32_t s = 0; s < 2; ++s) { for (uint32_t i = 0; i < 12; ++i) *(uint32_t*)(arg0 + 0x80 + s * 0x34 + i * 4) = 0; *(uint32_t*)(arg0 + 0xB0 + s * 0x34) = 0; } for (uint32_t s = 0; s < 2; ++s) { for (uint32_t i = 0; i < 12; ++i) *(uint32_t*)(arg0 + 0xF8 + s * 0x34 + i * 4) = 0; *(uint32_t*)(arg0 + 0x128 + s * 0x34) = 0; } for (uint32_t s = 0; s < 2; ++s) { for (uint32_t i = 0; i < 12; ++i) *(uint32_t*)(arg0 + 0x170 + s * 0x34 + i * 4) = 0; *(uint32_t*)(arg0 + 0x1A0 + s * 0x34) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036AA5C
void* AllocSlot(uint32_t, void*);
void* ConstructLightSlot(void*);
void AttachSlot(void*, void*, void*);
extern "C" void* YellowAuto_0036aa5c(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN4gfl29animation26DrawEnvAnimationController12GetLightSlotEjNS1_8SlotTypeE");
extern "C" void* YellowAuto_0036aa5c(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t h = *(uint32_t*)arg0; uint32_t n = *(uint32_t*)(arg0 + 4); uint32_t sel = *(uint32_t*)(arg0 + 0x70); uint32_t g = (sel ^ arg2) * 0x34; uint32_t base = g + 8; uint32_t cnt = *(uint32_t*)(arg0 + g + 0x38); if (cnt <= arg1) { if (h == 0) return (void*)0; *(uint32_t*)(arg0 + g + 0x38) = arg1 + 1; } uint32_t cur = *(uint32_t*)(arg0 + base + arg1 * 4); if (cur == 0) { if (h == 0) return (void*)0; void* m = AllocSlot(0xB4, (void*)h); void* s = (void*)0; if (m != (void*)0) s = ConstructLightSlot(m); AttachSlot(s, (void*)h, (void*)n); *(uint32_t*)(arg0 + base + arg1 * 4) = (uint32_t)s; } return (void*)*(uint32_t*)(arg0 + base + arg1 * 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036A784
void* AllocSlot(uint32_t, void*);
void* ConstructFogSlot(void*);
void AttachSlot(void*, void*, void*);
extern "C" void* YellowAuto_0036a784(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN4gfl29animation26DrawEnvAnimationController10GetFogSlotEjNS1_8SlotTypeE");
extern "C" void* YellowAuto_0036a784(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t h = *(uint32_t*)arg0; uint32_t n = *(uint32_t*)(arg0 + 4); uint32_t sel = *(uint32_t*)(arg0 + 0x160); uint32_t g = (sel ^ arg2) * 0x34; uint32_t base = g + 0xF8; uint32_t cnt = *(uint32_t*)(arg0 + g + 0x128); if (cnt <= arg1) { if (h == 0) return (void*)0; *(uint32_t*)(arg0 + g + 0x128) = arg1 + 1; } uint32_t cur = *(uint32_t*)(arg0 + base + arg1 * 4); if (cur == 0) { if (h == 0) return (void*)0; void* m = AllocSlot(0x44, (void*)h); void* s = (void*)0; if (m != (void*)0) s = ConstructFogSlot(m); AttachSlot(s, (void*)h, (void*)n); *(uint32_t*)(arg0 + base + arg1 * 4) = (uint32_t)s; } return (void*)*(uint32_t*)(arg0 + base + arg1 * 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036BBE4
void SlotCleanup(void*);
void SlotDelete(void*);
extern "C" void YellowAuto_0036bbe4(uint8_t* arg0) __asm__("_ZN4gfl29animation26DrawEnvAnimationController8FinalizeEv");
extern "C" void YellowAuto_0036bbe4(uint8_t* arg0) {
for (uint32_t s = 0; s < 2; ++s) { for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 0x1A0 + s * 0x34); ++i) { uint32_t v = *(uint32_t*)(arg0 + 0x170 + s * 0x34 + i * 4); if (v != 0) { SlotCleanup((void*)v); v = *(uint32_t*)(arg0 + 0x170 + s * 0x34 + i * 4); if (v != 0) { SlotDelete((void*)v); *(uint32_t*)(arg0 + 0x170 + s * 0x34 + i * 4) = 0; } } } *(uint32_t*)(arg0 + 0x1A0 + s * 0x34) = 0; } for (uint32_t s = 0; s < 2; ++s) { for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 0x128 + s * 0x34); ++i) { uint32_t v = *(uint32_t*)(arg0 + 0xF8 + s * 0x34 + i * 4); if (v != 0) { SlotCleanup((void*)v); v = *(uint32_t*)(arg0 + 0xF8 + s * 0x34 + i * 4); if (v != 0) { SlotDelete((void*)v); *(uint32_t*)(arg0 + 0xF8 + s * 0x34 + i * 4) = 0; } } } *(uint32_t*)(arg0 + 0x128 + s * 0x34) = 0; } for (uint32_t s = 0; s < 2; ++s) { for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 0xB0 + s * 0x34); ++i) { uint32_t v = *(uint32_t*)(arg0 + 0x80 + s * 0x34 + i * 4); if (v != 0) { SlotCleanup((void*)v); v = *(uint32_t*)(arg0 + 0x80 + s * 0x34 + i * 4); if (v != 0) { SlotDelete((void*)v); *(uint32_t*)(arg0 + 0x80 + s * 0x34 + i * 4) = 0; } } } *(uint32_t*)(arg0 + 0xB0 + s * 0x34) = 0; } for (uint32_t s = 0; s < 2; ++s) { for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 0x38 + s * 0x34); ++i) { uint32_t v = *(uint32_t*)(arg0 + 8 + s * 0x34 + i * 4); if (v != 0) { SlotCleanup((void*)v); v = *(uint32_t*)(arg0 + 8 + s * 0x34 + i * 4); if (v != 0) { SlotDelete((void*)v); *(uint32_t*)(arg0 + 8 + s * 0x34 + i * 4) = 0; } } } *(uint32_t*)(arg0 + 0x38 + s * 0x34) = 0; }
}
#endif
