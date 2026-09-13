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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307444
void sub_00323B7C(uint8_t*);
void sub_00333ADC(uint8_t*, uint8_t*);
void sub_0041CE54(uint8_t*, uint8_t*);
void sub_0035BE88(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00307444(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager10AddDrawEnvENS1_15RenderPlaceType3TagEPN4gfl215renderingengine10scenegraph8instance11DrawEnvNodeEj");
extern "C" void YellowAuto_00307444(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
sub_00323B7C(arg2); if (arg1 >= 3 || *(uint32_t *)(arg0 + arg1 * 4 + 0xC0) <= arg3) { sub_0035BE88(0, 0, 0); return; } sub_00333ADC(*(uint8_t **)(*(uint8_t **)(*(uint8_t **)(arg0 + arg1 * 12 + arg3 * 4 + 0xD0) + 0x90) + 4), arg2); if (*(uint8_t **)(*(uint8_t **)(arg0 + arg1 * 12 + arg3 * 4 + 0xD0) + 0x98) != 0) { sub_0041CE54(*(uint8_t **)(*(uint8_t **)(arg0 + arg1 * 12 + arg3 * 4 + 0xD0) + 0x98), arg2); } if (arg1 != 0) { return; } if (*(uint8_t **)(arg0 + arg3 * 4 + 0xF4) == 0) { return; } sub_00333ADC(*(uint8_t **)(*(uint8_t **)(*(uint8_t **)(arg0 + arg3 * 4 + 0xF4) + 0x90) + 4), arg2); if (*(uint8_t **)(*(uint8_t **)(arg0 + arg3 * 4 + 0xF4) + 0x98) == 0) { return; } sub_0041CE54(*(uint8_t **)(*(uint8_t **)(arg0 + arg3 * 4 + 0xF4) + 0x98), arg2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307F3C
void sub_0032315C(uint8_t*);
void sub_00333BB8(uint8_t*, uint8_t*);
void sub_00333BB0(uint8_t*, uint8_t*);
void sub_0035BE88(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00307f3c(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager13RemoveDrawEnvENS1_15RenderPlaceType3TagEPN4gfl215renderingengine10scenegraph8instance11DrawEnvNodeEj");
extern "C" void YellowAuto_00307f3c(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
sub_0032315C(arg2); if (arg1 >= 3 || *(uint32_t *)(arg0 + arg1 * 4 + 0xC0) <= arg3) { sub_0035BE88(0, 0, 0); return; } sub_00333BB8(*(uint8_t **)(*(uint8_t **)(*(uint8_t **)(arg0 + arg1 * 12 + arg3 * 4 + 0xD0) + 0x90) + 4), arg2); if (*(uint8_t **)(*(uint8_t **)(arg0 + arg1 * 12 + arg3 * 4 + 0xD0) + 0x98) != 0) { sub_00333BB0(*(uint8_t **)(*(uint8_t **)(arg0 + arg1 * 12 + arg3 * 4 + 0xD0) + 0x98), arg2); } if (arg1 != 0) { return; } if (*(uint8_t **)(arg0 + arg3 * 4 + 0xF4) == 0) { return; } sub_00333BB8(*(uint8_t **)(*(uint8_t **)(*(uint8_t **)(arg0 + arg3 * 4 + 0xF4) + 0x90) + 4), arg2); if (*(uint8_t **)(*(uint8_t **)(arg0 + arg3 * 4 + 0xF4) + 0x98) == 0) { return; } sub_00333BB0(*(uint8_t **)(*(uint8_t **)(arg0 + arg3 * 4 + 0xF4) + 0x98), arg2);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003083E0
void nndbgPanic(uint32_t);
extern "C" void YellowAuto_003083e0(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4util19AppRenderingManager15UnsetRaderChartENS1_15RenderPlaceType3TagE");
extern "C" void YellowAuto_003083e0(uint8_t* arg0, int32_t arg1) {
if (arg1 == 0) { nndbgPanic(*(uint32_t*)(*(uint32_t*)(arg0 + 0x100) + 0x80)); if (*(uint32_t*)(arg0 + 0x104) != 0) nndbgPanic(*(uint32_t*)(*(uint32_t*)(arg0 + 0x104) + 0x80)); } else if (arg1 == 1) nndbgPanic(*(uint32_t*)(*(uint32_t*)(arg0 + 0x108) + 0x80));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00308020
void nndbgPanic(uint32_t, uint32_t);
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00308020(uint8_t* arg0, int32_t arg1, uint8_t* arg2) __asm__("_ZN3app4util19AppRenderingManager13SetRaderChartENS1_15RenderPlaceType3TagEPNS_4tool10RaderChartE");
extern "C" void YellowAuto_00308020(uint8_t* arg0, int32_t arg1, uint8_t* arg2) {
if (arg2 == 0) GFLassert(0, 0, 0, 0); else if (arg1 == 0) { nndbgPanic(*(uint32_t*)(*(uint32_t*)(arg0 + 0x100) + 0x80), (uint32_t)arg2); if (*(uint32_t*)(arg0 + 0x104) != 0) nndbgPanic(*(uint32_t*)(*(uint32_t*)(arg0 + 0x104) + 0x80), (uint32_t)arg2); } else if (arg1 == 1) nndbgPanic(*(uint32_t*)(*(uint32_t*)(arg0 + 0x108) + 0x80), (uint32_t)arg2);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00308094
bool IsCreated(const uint8_t*);
void AddNode(uint8_t*, uint8_t*);
void AddEdgeRenderingTarget(uint8_t*, uint8_t*);
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00308094(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager15AddDressUpModelENS1_15RenderPlaceType3TagEPN7poke_3d5model12DressUpModelEj");
extern "C" void YellowAuto_00308094(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
if (arg1 >= 3u) { GFLassert(0u, 0u, 0u, 0u); return; } if (arg3 >= *(uint32_t*)(arg0 + arg1 * 4u + 0xC0)) { GFLassert(0u, 0u, 0u, 0u); return; } uint8_t* c0 = *(uint8_t**)(arg0 + arg1 * 12u + arg3 * 4u + 0xD0); for (uint32_t i = 0u; i < 14u; ++i) { uint8_t* e = arg2 + (i & 255u) * 0xD8u; bool b = IsCreated(e + 0x114); uint8_t* n = *(uint8_t**)(e + 0x118); if (b && n != (uint8_t*)0) { AddNode(*(uint8_t**)(c0 + 0x90), n); AddEdgeRenderingTarget(*(uint8_t**)(c0 + 0x88), n); } } if (arg1 == 0u) { uint8_t* c1 = *(uint8_t**)(arg0 + arg3 * 4u + 0xF4); if (c1 != (uint8_t*)0) { for (uint32_t j = 0u; j < 14u; ++j) { uint8_t* e = arg2 + (j & 255u) * 0xD8u; bool b = IsCreated(e + 0x114); uint8_t* n = *(uint8_t**)(e + 0x118); if (b && n != (uint8_t*)0) { AddNode(*(uint8_t**)(c1 + 0x90), n); AddEdgeRenderingTarget(*(uint8_t**)(c1 + 0x88), n); } } } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003089C0
bool IsCreated(const uint8_t*);
void RemoveNode(uint8_t*, uint8_t*);
void RemoveEdgeRenderingTarget(uint8_t*, uint8_t*);
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_003089c0(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util19AppRenderingManager18RemoveDressUpModelENS1_15RenderPlaceType3TagEPN7poke_3d5model12DressUpModelEj");
extern "C" void YellowAuto_003089c0(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
if (arg1 >= 3u) { GFLassert(0u, 0u, 0u, 0u); return; } if (arg3 >= *(uint32_t*)(arg0 + arg1 * 4u + 0xC0)) { GFLassert(0u, 0u, 0u, 0u); return; } uint8_t* c0 = *(uint8_t**)(arg0 + arg1 * 12u + arg3 * 4u + 0xD0); for (uint32_t i = 0u; i < 14u; ++i) { uint8_t* e = arg2 + (i & 255u) * 0xD8u; bool b = IsCreated(e + 0x114); uint8_t* n = *(uint8_t**)(e + 0x118); if (b && n != (uint8_t*)0) { RemoveNode(*(uint8_t**)(c0 + 0x90), n); RemoveEdgeRenderingTarget(*(uint8_t**)(c0 + 0x88), n); } } if (arg1 == 0u) { uint8_t* c1 = *(uint8_t**)(arg0 + arg3 * 4u + 0xF4); if (c1 != (uint8_t*)0) { for (uint32_t j = 0u; j < 14u; ++j) { uint8_t* e = arg2 + (j & 255u) * 0xD8u; bool b = IsCreated(e + 0x114); uint8_t* n = *(uint8_t**)(e + 0x118); if (b && n != (uint8_t*)0) { RemoveNode(*(uint8_t**)(c1 + 0x90), n); RemoveEdgeRenderingTarget(*(uint8_t**)(c1 + 0x88), n); } } } }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030B844
void func_00308e3c(uint8_t*);
void func_0030e98c(uint32_t);
void func_00336f30(void*);
void func_003235b8();
extern "C" void YellowAuto_0030b844(uint8_t* arg0) __asm__("_ZN3app4util19AppRenderingManager6UpdateEv");
extern "C" void YellowAuto_0030b844(uint8_t* arg0) {
if (*(arg0 + 4u) == (uint8_t)1) func_00308e3c(arg0);
if (*(uint32_t*)(arg0 + 204u) != (uint32_t)0) func_0030e98c(*(uint32_t*)(arg0 + 204u));
for (uint32_t i = 0u; i < (uint32_t)3; ++i) {
uint32_t n = *(uint32_t*)(arg0 + 192u + i * 4u);
for (uint32_t j = 0u; j < n; ++j) {
void* p0 = *(void**)(arg0 + 208u + i * 12u + j * 4u);
if (p0 != (void*)0) func_00336f30(p0);
if (i == (uint32_t)0) {
void* p1 = *(void**)(arg0 + 244u + j * 4u);
if (p1 != (void*)0) func_00336f30(p1);
}
}
}
if (*(void**)(arg0 + 256u) != (void*)0) func_00336f30(*(void**)(arg0 + 256u));
if (*(void**)(arg0 + 260u) != (void*)0) func_00336f30(*(void**)(arg0 + 260u));
if (*(void**)(arg0 + 264u) != (void*)0) func_00336f30(*(void**)(arg0 + 264u));
uint8_t s0 = *(arg0 + 8u);
uint8_t s1 = *(arg0 + 36u);
uint8_t s2 = *(arg0 + 64u);
bool c0 = s0 == (uint8_t)2 || s0 == (uint8_t)3 || s0 == (uint8_t)4 || s0 == (uint8_t)5 || s0 == (uint8_t)6 || s0 == (uint8_t)7 || s0 == (uint8_t)9 || s0 == (uint8_t)10 || s0 == (uint8_t)11 || s0 == (uint8_t)12 || s0 == (uint8_t)13 || s0 == (uint8_t)14 || s0 == (uint8_t)15 || s0 == (uint8_t)16 || s0 == (uint8_t)19 || s0 == (uint8_t)20;
bool c1 = s1 == (uint8_t)2 || s1 == (uint8_t)3 || s1 == (uint8_t)4 || s1 == (uint8_t)5 || s1 == (uint8_t)6 || s1 == (uint8_t)7 || s1 == (uint8_t)9 || s1 == (uint8_t)10 || s1 == (uint8_t)11 || s1 == (uint8_t)12 || s1 == (uint8_t)13 || s1 == (uint8_t)14 || s1 == (uint8_t)15 || s1 == (uint8_t)16 || s1 == (uint8_t)19 || s1 == (uint8_t)20;
bool c2 = s2 == (uint8_t)2 || s2 == (uint8_t)3 || s2 == (uint8_t)4 || s2 == (uint8_t)5 || s2 == (uint8_t)6 || s2 == (uint8_t)7 || s2 == (uint8_t)9 || s2 == (uint8_t)10 || s2 == (uint8_t)11 || s2 == (uint8_t)12 || s2 == (uint8_t)13 || s2 == (uint8_t)14 || s2 == (uint8_t)15 || s2 == (uint8_t)16 || s2 == (uint8_t)19 || s2 == (uint8_t)20;
if ((c0 || c1 || c2) && (*(arg0 + 93u) != (uint8_t)0)) func_003235b8();
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030AC78
void h30a210(uint8_t*, void*, int32_t);
void h30a47c(uint8_t*, void*, uint32_t);
void h30a7f4(uint8_t*, void*, uint32_t);
void h309fc0(uint8_t*, void*, uint32_t);
void h30a954(uint8_t*, uint32_t);
void h30b6fc(uint8_t*, uint32_t);
void h30aa50(uint8_t*, uint32_t);
void h30b5d0(uint8_t*, uint32_t);
void h30a6f8(uint8_t*, uint32_t);
void h30a380(uint8_t*, uint32_t);
void h309e8c(uint8_t*, uint32_t);
void h30a284(uint8_t*, uint32_t);
void h30ab4c(uint8_t*, uint32_t);
void h34ffc8(uint32_t);
int32_t NngxIsStereoVisionAllowed();
extern "C" void YellowAuto_0030ac78(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util19AppRenderingManager4DrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_0030ac78(uint8_t* arg0, uint32_t arg1) {
uint32_t disp = (uint32_t)arg1 & 255u; uint32_t mode = 0u; if (disp < 2u) { mode = (uint32_t)*(uint8_t*)(arg0 + 8); } else if (disp == 2u) { mode = (uint32_t)*(uint8_t*)(arg0 + 36); } uint32_t d = (uint32_t)arg1 & 255u; if (mode == 1u) { if (d == 0u) { h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); } else if (d == 1u) { h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); } else if (d == 2u) { h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); } } else if (mode == 2u) { if (d == 0u) { h30a47c(arg0, *(void**)(arg0 + 0xD0), (uint32_t)arg1); } else if (d == 1u) { h30a47c(arg0, *(void**)(arg0 + 0xF4), (uint32_t)arg1); } else if (d == 2u) { h30a47c(arg0, *(void**)(arg0 + 0xDC), (uint32_t)arg1); } } else if (mode == 3u) { if (d == 0u) { h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); h30a47c(arg0, *(void**)(arg0 + 0xD0), (uint32_t)arg1); } else if (d == 1u) { h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); h30a47c(arg0, *(void**)(arg0 + 0xF4), (uint32_t)arg1); } else if (d == 2u) { h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); h30a47c(arg0, *(void**)(arg0 + 0xDC), (uint32_t)arg1); } } else if (mode == 4u) { if (d == 0u) { h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); h30a7f4(arg0, *(void**)(arg0 + 0x100), (uint32_t)arg1); } else if (d == 1u) { h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); h30a7f4(arg0, *(void**)(arg0 + 0x104), (uint32_t)arg1); } else if (d == 2u) { h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); h30a7f4(arg0, *(void**)(arg0 + 0x108), (uint32_t)arg1); } } else if (mode == 5u) { if (d == 0u) { h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); h30a7f4(arg0, *(void**)(arg0 + 0x100), (uint32_t)arg1); h30a47c(arg0, *(void**)(arg0 + 0xD0), (uint32_t)arg1); } else if (d == 1u) { h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); h30a7f4(arg0, *(void**)(arg0 + 0x104), (uint32_t)arg1); h30a47c(arg0, *(void**)(arg0 + 0xF4), (uint32_t)arg1); } else if (d == 2u) { h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); h30a7f4(arg0, *(void**)(arg0 + 0x108), (uint32_t)arg1); h30a47c(arg0, *(void**)(arg0 + 0xDC), (uint32_t)arg1); } } else if (mode == 6u) { h30a954(arg0, (uint32_t)arg1); } else if (mode == 7u) { h30b6fc(arg0, (uint32_t)arg1); } else if (mode == 8u) { if (d == 0u) { h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); h309fc0(arg0, *(void**)(arg0 + 0x118), (uint32_t)arg1); } else if (d == 1u) { h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); h309fc0(arg0, *(void**)(arg0 + 0x130), (uint32_t)arg1); } else if (d == 2u) { h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); h309fc0(arg0, *(void**)(arg0 + 0x120), (uint32_t)arg1); } } else if (mode == 9u) { if (d == 0u) { h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); h30a47c(arg0, *(void**)(arg0 + 0xD0), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x7C), *(int32_t*)(*(uint32_t*)0x0030B5C8)); } else if (d == 1u) { h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); h30a47c(arg0, *(void**)(arg0 + 0xF4), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x88), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); } else if (d == 2u) { h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); h30a47c(arg0, *(void**)(arg0 + 0xDC), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x94), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); } } else if (mode == 10u) { if (d == 0u) { h30a47c(arg0, *(void**)(arg0 + 0xD0), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); } else if (d == 1u) { h30a47c(arg0, *(void**)(arg0 + 0xF4), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); } else if (d == 2u) { h30a47c(arg0, *(void**)(arg0 + 0xDC), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); } } else if (mode == 11u) { h30aa50(arg0, (uint32_t)arg1); } else if (mode == 12u) { if (d == 0u) { h30a47c(arg0, *(void**)(arg0 + 0xD0), (uint32_t)arg1); h309fc0(arg0, *(void**)(arg0 + 0x118), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); } else if (d == 1u) { h30a47c(arg0, *(void**)(arg0 + 0xF4), (uint32_t)arg1); h309fc0(arg0, *(void**)(arg0 + 0x130), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); } else if (d == 2u) { h30a47c(arg0, *(void**)(arg0 + 0xDC), (uint32_t)arg1); h309fc0(arg0, *(void**)(arg0 + 0x120), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); } } else if (mode == 13u) { if (d == 0u) { h30a47c(arg0, *(void**)(arg0 + 0xD0), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); h30a47c(arg0, *(void**)(arg0 + 0xD4), (uint32_t)arg1); } else if (d == 1u) { h30a47c(arg0, *(void**)(arg0 + 0xF4), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); h30a47c(arg0, *(void**)(arg0 + 0xF8), (uint32_t)arg1); } else if (d == 2u) { h30a47c(arg0, *(void**)(arg0 + 0xDC), (uint32_t)arg1); h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); h30a47c(arg0, *(void**)(arg0 + 0xE0), (uint32_t)arg1); } } else if (mode == 14u) { h30a6f8(arg0, (uint32_t)arg1); } else if (mode == 15u) { h30b5d0(arg0, (uint32_t)arg1); } else if (mode == 16u) { h30a380(arg0, (uint32_t)arg1); } else if (mode == 17u) { if (d == 0u) { h30a210(arg0, *(void**)(arg0 + 0x78), *(int32_t*)(*(uint32_t*)0x0030B5C8)); h30a210(arg0, *(void**)(arg0 + 0x7C), *(int32_t*)(*(uint32_t*)0x0030B5C8)); } else if (d == 1u) { h30a210(arg0, *(void**)(arg0 + 0x84), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); h30a210(arg0, *(void**)(arg0 + 0x88), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 4u)); } else if (d == 2u) { h30a210(arg0, *(void**)(arg0 + 0x90), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); h30a210(arg0, *(void**)(arg0 + 0x94), *(int32_t*)(*(uint32_t*)0x0030B5C8 + 8u)); } } else if (mode == 18u) { h309e8c(arg0, (uint32_t)arg1); } else if (mode == 19u) { h30a284(arg0, (uint32_t)arg1); } else if (mode == 20u) { h30ab4c(arg0, (uint32_t)arg1); } if ((*(uint32_t*)(arg0 + 0x9C) & 1u) != 0u) { *(uint32_t*)(arg0 + 0x9C) |= 2u; } if ((*(uint32_t*)(arg0 + 0xA8) & 1u) != 0u) { *(uint32_t*)(arg0 + 0xA8) |= 2u; } if ((*(uint32_t*)(arg0 + 0xB4) & 1u) != 0u) { *(uint32_t*)(arg0 + 0xB4) |= 2u; } if ((*(uint32_t*)(arg0 + 0xA0) & 1u) != 0u) { *(uint32_t*)(arg0 + 0xA0) |= 2u; } if ((*(uint32_t*)(arg0 + 0xAC) & 1u) != 0u) { *(uint32_t*)(arg0 + 0xAC) |= 2u; } if ((*(uint32_t*)(arg0 + 0xB8) & 1u) != 0u) { *(uint32_t*)(arg0 + 0xB8) |= 2u; } if ((*(uint32_t*)(arg0 + 0xA4) & 1u) != 0u) { *(uint32_t*)(arg0 + 0xA4) |= 2u; } if ((*(uint32_t*)(arg0 + 0xB0) & 1u) != 0u) { *(uint32_t*)(arg0 + 0xB0) |= 2u; } if ((*(uint32_t*)(arg0 + 0xBC) & 1u) != 0u) { *(uint32_t*)(arg0 + 0xBC) |= 2u; } if (disp == 0u) { for (uint32_t i = 0u; i < 3u; ++i) { void* p = *(void**)(arg0 + i * 4u + 0x78); if (p != (void*)0) { h34ffc8(*(uint32_t*)((uint8_t*)p + 0x88)); } *(uint32_t*)(arg0 + i * 4u + 0x9C) = 0u; } int32_t s = NngxIsStereoVisionAllowed(); uint32_t v = *(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x0030B5CC) + 0x328); if (s == 0 || v == 0u) { for (uint32_t i = 0u; i < 3u; ++i) { void* p = *(void**)(arg0 + i * 4u + 0x84); if (p != (void*)0) { h34ffc8(*(uint32_t*)((uint8_t*)p + 0x88)); } *(uint32_t*)(arg0 + i * 4u + 0xA8) = 0u; } } } else if (disp == 1u) { for (uint32_t i = 0u; i < 3u; ++i) { void* p = *(void**)(arg0 + i * 4u + 0x84); if (p != (void*)0) { h34ffc8(*(uint32_t*)((uint8_t*)p + 0x88)); } *(uint32_t*)(arg0 + i * 4u + 0xA8) = 0u; } } else if (disp == 2u) { for (uint32_t i = 0u; i < 3u; ++i) { void* p = *(void**)(arg0 + i * 4u + 0x90); if (p != (void*)0) { h34ffc8(*(uint32_t*)((uint8_t*)p + 0x88)); } *(uint32_t*)(arg0 + i * 4u + 0xB4) = 0u; } }
}
#endif
