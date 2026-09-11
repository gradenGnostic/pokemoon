// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045424C
void SetInputEnabled(void* arg0, bool arg1);
extern "C" void YellowAuto_0045424c(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase10OnAddChildEv");
extern "C" void YellowAuto_0045424c(uint8_t* arg0) {
*(uint8_t*)(arg0 + 0x11D) = 0; void* v0 = *(void**)(arg0 + 0xFC); if (v0 != (void*)0) if (*(void**)((uint8_t*)v0 + 0x88) != (void*)0) SetInputEnabled(*(void**)((uint8_t*)v0 + 0x88), false);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00454818
void SetInputEnabled(void* arg0, bool arg1);
extern "C" void YellowAuto_00454818(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase13OnRemoveChildEv");
extern "C" void YellowAuto_00454818(uint8_t* arg0) {
*(uint8_t*)(arg0 + 0x11D) = 1; void* v0 = *(void**)(arg0 + 0xFC); if (v0 != (void*)0) if (*(void**)((uint8_t*)v0 + 0x88) != (void*)0) SetInputEnabled(*(void**)((uint8_t*)v0 + 0x88), true);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004550EC
void SetInputEnabled(void* arg0, bool arg1);
extern "C" void YellowAuto_004550ec(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase22setInputEnablePaneListEb");
extern "C" void YellowAuto_004550ec(uint8_t* arg0, bool arg1) {
*(uint8_t*)(arg0 + 0x11D) = (uint8_t)arg1; void* v0 = *(void**)(arg0 + 0xFC); if (v0 != (void*)0) if (*(void**)((uint8_t*)v0 + 0x88) != (void*)0) SetInputEnabled(*(void**)((uint8_t*)v0 + 0x88), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004550A0
extern "C" void* YellowAuto_004550a0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase22getJoinFestaPlayerDataEj");
extern "C" void* YellowAuto_004550a0(uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = *(uint32_t*)(arg0 + 0x118); if (v0 == 0) return (void*)0; uint32_t v1 = *(uint32_t*)v0; uint32_t v2 = *(uint32_t*)(v1 + 4); uint32_t v3 = 0; for (; v2 != v1; v2 = *(uint32_t*)(v2 + 4), v3 = v3 + 1) if (v3 == arg1) return (void*)(v2 + 8); return (void*)0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455158
void sub_0048e6fc(void*, void*, void*);
void* sub_004550a0(uint8_t*, uint32_t);
extern "C" void YellowAuto_00455158(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase26PaneListItemSelectListenerEj");
extern "C" void YellowAuto_00455158(uint8_t* arg0, uint32_t arg1) {
if (((int32_t (*)(uint8_t *))(*(uint32_t *)(*(uint32_t *)arg0 + 0x20)))(arg0) == 0 && *(uint8_t *)(arg0 + 0x11D) != 0) { if (*(uint32_t *)(arg0 + 0xFC) != 0) { uint32_t _v = *(uint32_t *)(*(uint32_t *)(arg0 + 0xFC) + 0x88); if (_v != 0) { uint32_t _n = *(uint8_t *)(arg0 + 0xF4); sub_0048e6fc((void *)_v, (void *)(arg0 + _n * 12 + 0xD0), (void *)(arg0 + _n * 12 + 0xD4)); } } void *_q = sub_004550a0(arg0, arg1); if (_q != 0 && *(uint32_t *)(arg0 + 0xF8) != 0) { uint32_t _s = *(uint32_t *)(arg0 + 0xF8); if (*(uint8_t *)((uint8_t *)_q + 0x2C2) == 0) { *(uint32_t *)(_s + 4) = 6; *(uint32_t *)(_s + 8) = (uint32_t)_q; } uint32_t _t = *(uint32_t *)(arg0 + 0xF8); *(uint32_t *)(_t + 12) = (uint32_t)_q; *(uint8_t *)(_t + 16) = 1; } }
}
#endif
