// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311690
extern "C" void YellowAuto_00311690(uint8_t* arg0, uint8_t* arg1, const uint32_t* arg2) __asm__("_ZN3app4util7G2DUtil8SetScaleEPN2nw3lyt4PaneERN4gfl24math22ExtendedVectorTemplateINS7_33SpecializedExtendedVectorTemplateIN2nn4math4VEC2EEEEE");
extern "C" void YellowAuto_00311690(uint8_t* arg0, uint8_t* arg1, const uint32_t* arg2) {
(void)arg0;
*(uint32_t*)(arg1 + 0x34) = arg2[0];
*(uint32_t*)(arg1 + 0x38) = arg2[1];
arg1[0x44] = (uint8_t)((arg1[0x44] & 0xEF) | 0x10);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310764
void* GetMaterial(void*);
extern "C" void* YellowAuto_00310764(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN3app4util7G2DUtil16GetMaterialColorEPN2nw3lyt4PaneEj");
extern "C" void* YellowAuto_00310764(uint8_t* arg0, void* arg1, uint32_t arg2) {
(void)arg0;
return (void*)((uint8_t*)GetMaterial(arg1) + arg2 * 4 + 0x6C);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003107BC
void* GetMaterial(void*);
extern "C" void YellowAuto_003107bc(uint8_t* arg0, void* arg1, uint32_t arg2, const uint32_t* arg3) __asm__("_ZN3app4util7G2DUtil16SetMaterialColorEPN2nw3lyt4PaneEjNS2_2ut6Color8E");
extern "C" void YellowAuto_003107bc(uint8_t* arg0, void* arg1, uint32_t arg2, const uint32_t* arg3) {
(void)arg0;
void* m = GetMaterial(arg1);
*(uint32_t*)((uint8_t*)m + arg2 * 4 + 0x6C) = *arg3;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310D34
void GFLassert();
extern "C" void YellowAuto_00310d34(uint8_t* arg0, uint8_t* arg1, uint32_t* arg2, uint32_t* arg3) __asm__("_ZN3app4util7G2DUtil19GetTextBoxPaneColorEPN2nw3lyt7TextBoxEPNS2_2ut6Color8ES8_");
extern "C" void YellowAuto_00310d34(uint8_t* arg0, uint8_t* arg1, uint32_t* arg2, uint32_t* arg3) {
(void)arg0;
if (arg1 == (uint8_t*)0) { GFLassert(); return; }
if (arg2 != (uint32_t*)0) { *arg2 = *(uint32_t*)(arg1 + 0xAC); }
if (arg3 != (uint32_t*)0) { *arg3 = *(uint32_t*)(arg1 + 0xB0); }
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F874
void* GetPane(void*, uint32_t);
void GFLassert();
extern "C" void YellowAuto_0030f874(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) __asm__("_ZN3app4util7G2DUtil12SetPaneAlphaEjjh");
extern "C" void YellowAuto_0030f874(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) {
uint8_t* base = *(uint8_t**)(arg0 + 0x14);
void* lyt = *(void**)(base + arg1 * 8);
uint8_t* pane = (uint8_t*)GetPane(lyt, arg2);
if (pane == (uint8_t*)0) { GFLassert(); return; }
*(pane + 0x45) = arg3;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030FD78
void* GetPane(void*, uint32_t);
void GFLassert();
extern "C" void YellowAuto_0030fd78(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3) __asm__("_ZN3app4util7G2DUtil14SetPaneVisibleEjjb");
extern "C" void YellowAuto_0030fd78(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3) {
uint8_t* base = *(uint8_t**)(arg0 + 0x14);
void* lyt = *(void**)(base + arg1 * 8);
uint8_t* pane = (uint8_t*)GetPane(lyt, arg2);
if (pane == (uint8_t*)0) { GFLassert(); return; }
pane[0x44] = (uint8_t)((pane[0x44] & 0xFE) | (uint8_t)arg3);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003117D8
bool IsBindAnime(void*, uint32_t);
void BindAnime(void*, uint32_t, bool);
extern "C" void YellowAuto_003117d8(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3) __asm__("_ZN3app4util7G2DUtil9BindAnimeEjjb");
extern "C" void YellowAuto_003117d8(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3) {
uint8_t* base = *(uint8_t**)(arg0 + 0x14);
void* lyt = *(void**)(base + arg1 * 8);
if (!IsBindAnime(lyt, arg2)) { BindAnime(lyt, arg2, arg3); }
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003111CC
void SetVisible(void*, bool);
extern "C" void YellowAuto_003111cc(uint8_t* arg0, bool arg1, bool arg2) __asm__("_ZN3app4util7G2DUtil23SetMsgCursorUserVisibleEbb");
extern "C" void YellowAuto_003111cc(uint8_t* arg0, bool arg1, bool arg2) {
uint8_t* cur = *(uint8_t**)(arg0 + 0x38);
*(cur + 8) = (uint8_t)arg1;
SetVisible((void*)cur, arg2);
return;
}
#endif
