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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1AD0
void GetNickName(const uint8_t*, uint8_t*, uint32_t);
uint32_t GetSex(const uint8_t*);
int8_t GetLang();
void FUN_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t);
extern "C" void YellowAuto_003c1ad0(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util7G2DUtil23SetRegisterPokeNickNameEjPKN3pml8pokepara9CoreParamE");
extern "C" void YellowAuto_003c1ad0(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) {
uint32_t t0 = *(uint32_t*)(arg0 + 40);
uint8_t* a = (uint8_t*)t0;
uint32_t t1 = *(uint32_t*)a;
uint8_t* b = (uint8_t*)t1;
GetNickName(arg2, b, arg3);
uint32_t s = GetSex(arg2);
uint32_t f = s == 1U ? 1U : s != 0U && GetLang() == 5 ? 2U : 0U;
FUN_003c11f8(a, arg1, b, f);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1F08
uint16_t GetString(uint8_t*, uint32_t, uint8_t*);
void FUN_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t);
extern "C" void YellowAuto_003c1f08(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util7G2DUtil26SetRegisterMonsNameMsgDataEjPN4gfl23str7MsgDataEj");
extern "C" void YellowAuto_003c1f08(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, uint32_t arg3) {
uint32_t t0 = *(uint32_t*)(arg0 + 40);
uint8_t* a = (uint8_t*)t0;
uint32_t t1 = *(uint32_t*)a;
uint8_t* b = (uint8_t*)t1;
uint16_t c = GetString(arg2, arg3, b);
FUN_003c11f8(a, arg1, b, (uint32_t)(c & 255U | 512U));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1F68
uint32_t IsEgg(const uint8_t*, uint32_t);
uint16_t GetMonsNo(const uint8_t*);
uint16_t GetMonsName(uint8_t*, uint32_t);
void FUN_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t);
extern uint32_t DAT_003c1fec;
extern "C" void YellowAuto_003c1f68(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4util7G2DUtil27SetRegisterMonsNameOrTamagoEjPKN3pml8pokepara9CoreParamE");
extern "C" void YellowAuto_003c1f68(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) {
uint32_t t0 = *(uint32_t*)(arg0 + 40);
uint8_t* a = (uint8_t*)t0;
uint32_t t1 = *(uint32_t*)a;
uint8_t* b = (uint8_t*)t1;
uint32_t d = DAT_003c1fec;
if (IsEgg(arg2, 2U) == 0U)
d = (uint32_t)GetMonsNo(arg2);
uint16_t c = GetMonsName(b, d);
FUN_003c11f8(a, arg1, b, (uint32_t)(c & 255U | 512U));
}
#endif
