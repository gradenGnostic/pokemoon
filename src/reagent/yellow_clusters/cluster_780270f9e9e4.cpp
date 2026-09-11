// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030894C
void GFLassert(uint32_t, uint32_t, uint32_t);
void FUN_0030e434(uint8_t*);
extern "C" void YellowAuto_0030894c(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util19AppRenderingManager17UnsetEffectCameraENS1_15RenderPlaceType3TagEj");
extern "C" void YellowAuto_0030894c(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0x10C) <= arg2) { GFLassert(0, 0, 0); return; } FUN_0030e434((uint8_t*)(*(uint32_t*)(arg0 + arg2 * 4 + arg1 * 8 + 0x118))); if (arg1 == 0 && *(uint32_t*)(arg0 + arg2 * 4 + 0x130) != 0) { FUN_0030e434((uint8_t*)(*(uint32_t*)(arg0 + arg2 * 4 + 0x130))); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00309620
void GFLassert(uint32_t, uint32_t, uint32_t);
void FUN_0030e494(uint8_t*);
extern "C" void YellowAuto_00309620(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util19AppRenderingManager20UnsetEffectAppCameraENS1_15RenderPlaceType3TagEj");
extern "C" void YellowAuto_00309620(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0x10C) <= arg2) { GFLassert(0, 0, 0); return; } FUN_0030e494((uint8_t*)(*(uint32_t*)(arg0 + arg2 * 4 + arg1 * 8 + 0x118))); if (arg1 == 0 && *(uint32_t*)(arg0 + arg2 * 4 + 0x130) != 0) { FUN_0030e494((uint8_t*)(*(uint32_t*)(arg0 + arg2 * 4 + 0x130))); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00309E18
void GFLassert(uint32_t, uint32_t, uint32_t);
void FUN_0030e4d8(uint8_t*);
extern "C" void YellowAuto_00309e18(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util19AppRenderingManager27UnsetEffectRenderPathConfigENS1_15RenderPlaceType3TagEj");
extern "C" void YellowAuto_00309e18(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0x10C) <= arg2) { GFLassert(0, 0, 0); return; } FUN_0030e4d8((uint8_t*)(*(uint32_t*)(arg0 + arg2 * 4 + arg1 * 8 + 0x118))); if (arg1 == 0 && *(uint32_t*)(arg0 + arg2 * 4 + 0x130) != 0) { FUN_0030e4d8((uint8_t*)(*(uint32_t*)(arg0 + arg2 * 4 + 0x130))); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307C68
void GFLassert(uint32_t, uint32_t, uint32_t);
void FUN_0030eb04(uint8_t*);
extern "C" void YellowAuto_00307c68(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util19AppRenderingManager11UnsetCameraENS1_15RenderPlaceType3TagEj");
extern "C" void YellowAuto_00307c68(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg2) { GFLassert(0, 0, 0); return; } FUN_0030eb04((uint8_t*)(*(uint32_t*)(arg0 + arg2 * 4 + arg1 * 12 + 0xD0))); if (arg1 == 0 && *(uint32_t*)(arg0 + arg2 * 4 + 0xF4) != 0) { FUN_0030eb04((uint8_t*)(*(uint32_t*)(arg0 + arg2 * 4 + 0xF4))); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003096F4
void GFLassert(uint32_t, uint32_t, uint32_t);
void FUN_0030e4b0(uint8_t*, const uint8_t*);
extern "C" void YellowAuto_003096f4(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager25SetEffectRenderPathConfigENS1_15RenderPlaceType3TagERKN4gfl26Effect16EffectRenderPath6ConfigEj");
extern "C" void YellowAuto_003096f4(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0x10C) <= arg3) { GFLassert(0, 0, 0); return; } FUN_0030e4b0((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 8 + 0x118)), arg2); if (arg1 == 0 && *(uint32_t*)(arg0 + arg3 * 4 + 0x130) != 0) { FUN_0030e4b0((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0x130)), arg2); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030835C
void GFLassert(uint32_t, uint32_t, uint32_t);
void FUN_0030e4ec(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0030835c(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager15SetEffectCameraENS1_15RenderPlaceType3TagEPN7poke_3d5model10BaseCameraEj");
extern "C" void YellowAuto_0030835c(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
if (arg2 == (uint8_t*)0) { return; } if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0x10C) <= arg3) { GFLassert(0, 0, 0); return; } FUN_0030e4ec((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 8 + 0x118)), arg2); if (arg1 == 0 && *(uint32_t*)(arg0 + arg3 * 4 + 0x130) != 0) { FUN_0030e4ec((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0x130)), arg2); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00308AF8
void GFLassert(uint32_t, uint32_t, uint32_t);
void FUN_0030e440(uint8_t*, uint8_t*);
extern "C" void YellowAuto_00308af8(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager18SetEffectAppCameraENS1_15RenderPlaceType3TagEPNS0_9AppCameraEj");
extern "C" void YellowAuto_00308af8(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
if (arg2 == (uint8_t*)0) { return; } if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0x10C) <= arg3) { GFLassert(0, 0, 0); return; } FUN_0030e440((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 8 + 0x118)), arg2); if (arg1 == 0 && *(uint32_t*)(arg0 + arg3 * 4 + 0x130) != 0) { FUN_0030e440((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0x130)), arg2); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030BB68
void GFLassert(uint32_t, uint32_t, uint32_t);
void FUN_0030ec44(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0030bb68(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager9SetCameraENS1_15RenderPlaceType3TagEPN7poke_3d5model10BaseCameraEj");
extern "C" void YellowAuto_0030bb68(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
if (arg2 == (uint8_t*)0) { return; } if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg3) { GFLassert(0, 0, 0); return; } FUN_0030ec44((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)), arg2); if (arg1 == 0 && *(uint32_t*)(arg0 + arg3 * 4 + 0xF4) != 0) { FUN_0030ec44((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)), arg2); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307BBC
void GFLassert(uint32_t, uint32_t, uint32_t);
void RemoveNode(uint8_t*, uint8_t*);
void RemoveEdgeRenderingTarget(uint8_t*, uint8_t*);
extern "C" void YellowAuto_00307bbc(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager11RemoveModelENS1_15RenderPlaceType3TagEPN7poke_3d5model9BaseModelEj");
extern "C" void YellowAuto_00307bbc(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg3) { GFLassert(0, 0, 0); return; } RemoveNode((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)) + 0x90)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); RemoveEdgeRenderingTarget((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)) + 0x88)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); if (arg1 == 0 && *(uint32_t*)(arg0 + arg3 * 4 + 0xF4) != 0) { RemoveNode((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)) + 0x90)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); RemoveEdgeRenderingTarget((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)) + 0x88)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307E90
void GFLassert(uint32_t, uint32_t, uint32_t);
void AddNode(uint8_t*, uint8_t*);
void AddEdgeRenderingTarget(uint8_t*, uint8_t*);
extern "C" void YellowAuto_00307e90(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager13AddCharaModelENS1_15RenderPlaceType3TagEPN7poke_3d5model10CharaModelEj");
extern "C" void YellowAuto_00307e90(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg3) { GFLassert(0, 0, 0); return; } AddNode((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)) + 0x90)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); AddEdgeRenderingTarget((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)) + 0x88)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); if (arg1 == 0 && *(uint32_t*)(arg0 + arg3 * 4 + 0xF4) != 0) { AddNode((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)) + 0x90)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); AddEdgeRenderingTarget((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)) + 0x88)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030843C
void GFLassert(uint32_t, uint32_t, uint32_t);
void RemoveNode(uint8_t*, uint8_t*);
void RemoveEdgeRenderingTarget(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0030843c(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager16RemoveCharaModelENS1_15RenderPlaceType3TagEPN7poke_3d5model10CharaModelEj");
extern "C" void YellowAuto_0030843c(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg3) { GFLassert(0, 0, 0); return; } RemoveNode((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)) + 0x90)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); RemoveEdgeRenderingTarget((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)) + 0x88)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); if (arg1 == 0 && *(uint32_t*)(arg0 + arg3 * 4 + 0xF4) != 0) { RemoveNode((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)) + 0x90)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); RemoveEdgeRenderingTarget((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)) + 0x88)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030BA50
void GFLassert(uint32_t, uint32_t, uint32_t);
void AddNode(uint8_t*, uint8_t*);
void AddEdgeRenderingTarget(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0030ba50(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3, bool arg4) __asm__("_ZN3app4util19AppRenderingManager8AddModelENS1_15RenderPlaceType3TagEPN7poke_3d5model9BaseModelEjb");
extern "C" void YellowAuto_0030ba50(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3, bool arg4) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg3) { GFLassert(0, 0, 0); return; } AddNode((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)) + 0x90)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); if (arg4) { AddEdgeRenderingTarget((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + arg1 * 12 + 0xD0)) + 0x88)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); } if (arg1 == 0 && *(uint32_t*)(arg0 + arg3 * 4 + 0xF4) != 0) { AddNode((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)) + 0x90)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); if (arg4) { AddEdgeRenderingTarget((uint8_t*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4)) + 0x88)), (uint8_t*)(*(uint32_t*)(arg2 + 4))); } }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307CE0
uint32_t GFLassert(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void AddNode(void* arg0, void* arg1);
void AddEdgeRenderingTarget(void* arg0, void* arg1);
void* GetDistortionModel(void* arg0);
uint32_t AddDistortionRenderingTarget(void* arg0, void* arg1);
extern "C" uint32_t YellowAuto_00307ce0(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager12AddPokeModelENS1_15RenderPlaceType3TagEPN8PokeTool9PokeModelEj");
extern "C" uint32_t YellowAuto_00307ce0(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg3) return GFLassert(0, 0, 0, 0);
uint8_t* base = (uint8_t*)(*(uint32_t*)(arg0 + arg1 * 12 + arg3 * 4 + 0xD0));
AddNode((void*)(*(uint32_t*)(base + 0x90)), (void*)(*(uint32_t*)((uint8_t*)arg2 + 4)));
if (*(uint32_t*)((uint8_t*)arg2 + 0x129C) != 0) AddNode((void*)(*(uint32_t*)(base + 0x90)), (void*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)((uint8_t*)arg2 + 0x129C)) + 4)));
AddEdgeRenderingTarget((void*)(*(uint32_t*)(base + 0x88)), (void*)(*(uint32_t*)((uint8_t*)arg2 + 4)));
uint32_t ret = 0;
void* d0 = GetDistortionModel(arg2);
if (d0 != (void*)0) if (*(uint32_t*)(base + 0x98) == 0) ret = 0;
if (d0 != (void*)0) if (*(uint32_t*)(base + 0x98) != 0) ret = AddDistortionRenderingTarget((void*)(*(uint32_t*)(base + 0x98)), (void*)(*(uint32_t*)((uint8_t*)GetDistortionModel(arg2) + 4)));
if (arg1 != 0) return ret;
uint8_t* base2 = (uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4));
if (base2 == (uint8_t*)0) return ret;
AddNode((void*)(*(uint32_t*)(base2 + 0x90)), (void*)(*(uint32_t*)((uint8_t*)arg2 + 4)));
if (*(uint32_t*)((uint8_t*)arg2 + 0x129C) != 0) AddNode((void*)(*(uint32_t*)(base2 + 0x90)), (void*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)((uint8_t*)arg2 + 0x129C)) + 4)));
AddEdgeRenderingTarget((void*)(*(uint32_t*)(base2 + 0x88)), (void*)(*(uint32_t*)((uint8_t*)arg2 + 4)));
void* e0 = GetDistortionModel(arg2);
if (e0 == (void*)0) return 0;
if (*(uint32_t*)(base2 + 0x98) == 0) return GFLassert(0, 0, 0, 0);
return AddDistortionRenderingTarget((void*)(*(uint32_t*)(base2 + 0x98)), (void*)(*(uint32_t*)((uint8_t*)GetDistortionModel(arg2) + 4)));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003081CC
uint32_t GFLassert(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void RemoveNode(void* arg0, void* arg1);
void RemoveEdgeRenderingTarget(void* arg0, void* arg1);
void* GetDistortionModel(void* arg0);
void RemoveDistortionRenderingTarget(void* arg0, void* arg1);
uint32_t AddDistortionRenderingTarget(void* arg0, void* arg1);
extern "C" void YellowAuto_003081cc(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager15RemovePokeModelENS1_15RenderPlaceType3TagEPN8PokeTool9PokeModelEj");
extern "C" void YellowAuto_003081cc(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3) {
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg3) GFLassert(0, 0, 0, 0);
if (arg1 > 2 || *(uint32_t*)(arg0 + arg1 * 4 + 0xC0) <= arg3) return;
uint8_t* base = (uint8_t*)(*(uint32_t*)(arg0 + arg1 * 12 + arg3 * 4 + 0xD0));
RemoveNode((void*)(*(uint32_t*)(base + 0x90)), (void*)(*(uint32_t*)((uint8_t*)arg2 + 4)));
if (*(uint32_t*)((uint8_t*)arg2 + 0x129C) != 0) RemoveNode((void*)(*(uint32_t*)(base + 0x90)), (void*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)((uint8_t*)arg2 + 0x129C)) + 4)));
RemoveEdgeRenderingTarget((void*)(*(uint32_t*)(base + 0x88)), (void*)(*(uint32_t*)((uint8_t*)arg2 + 4)));
void* d0 = GetDistortionModel(arg2);
if (d0 != (void*)0) if (*(uint32_t*)(base + 0x98) != 0) RemoveDistortionRenderingTarget((void*)(*(uint32_t*)(base + 0x98)), (void*)(*(uint32_t*)((uint8_t*)GetDistortionModel(arg2) + 4)));
if (arg1 != 0) return;
uint8_t* base2 = (uint8_t*)(*(uint32_t*)(arg0 + arg3 * 4 + 0xF4));
if (base2 == (uint8_t*)0) return;
RemoveNode((void*)(*(uint32_t*)(base2 + 0x90)), (void*)(*(uint32_t*)((uint8_t*)arg2 + 4)));
if (*(uint32_t*)((uint8_t*)arg2 + 0x129C) != 0) RemoveNode((void*)(*(uint32_t*)(base2 + 0x90)), (void*)(*(uint32_t*)((uint8_t*)(*(uint32_t*)((uint8_t*)arg2 + 0x129C)) + 4)));
RemoveEdgeRenderingTarget((void*)(*(uint32_t*)(base2 + 0x88)), (void*)(*(uint32_t*)((uint8_t*)arg2 + 4)));
void* e0 = GetDistortionModel(arg2);
if (e0 != (void*)0) if (*(uint32_t*)(base2 + 0x98) != 0) AddDistortionRenderingTarget((void*)(*(uint32_t*)(base2 + 0x98)), (void*)(*(uint32_t*)((uint8_t*)GetDistortionModel(arg2) + 4)));
return;
}
#endif
