// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00318FBC
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_0049170c(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" void YellowAuto_00318fbc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3pml8pokepara9CoreParam10SetGetBallEj");
extern "C" void YellowAuto_00318fbc(uint8_t* arg0, uint32_t arg1) {
uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_0049170c(a, 1); *(b + 0x2c) = (uint8_t)arg1; FUN_0031a338(a); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004927BC
uint32_t FUN_004909e8(uint32_t);
extern "C" bool YellowAuto_004927bc(const uint8_t* arg0) __asm__("_ZNK3pml8pokepara9CoreParam15HavePokerusPastEv");
extern "C" bool YellowAuto_004927bc(const uint8_t* arg0) {
uint32_t a = *(uint32_t*)(arg0 + 12); uint32_t v1 = FUN_004909e8(a); if (v1 == 0) return false; uint32_t v2 = FUN_004909e8(a); if ((v2 & 15) != 0) return false; return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004924D8
uint32_t GetNativeTalentPower(const uint8_t*, uint32_t);
uint8_t FUN_0031b2bc(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint8_t YellowAuto_004924d8(const uint8_t* arg0) __asm__("_ZNK3pml8pokepara9CoreParam13GetMezapaTypeEv");
extern "C" uint8_t YellowAuto_004924d8(const uint8_t* arg0) {
uint32_t v0 = GetNativeTalentPower(arg0, 0); uint32_t v1 = GetNativeTalentPower(arg0, 1); uint32_t v2 = GetNativeTalentPower(arg0, 2); uint32_t v5 = GetNativeTalentPower(arg0, 5); uint32_t v3 = GetNativeTalentPower(arg0, 3); uint32_t v4 = GetNativeTalentPower(arg0, 4); return FUN_0031b2bc(v0 & 255, v1 & 255, v2 & 255, v5 & 255, v3 & 255, v4 & 255);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492D4C
uint32_t FUN_00491e90(uint32_t);
uint32_t FUN_00491110(uint32_t);
extern "C" bool YellowAuto_00492d4c(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3pml8pokepara9CoreParam5IsEggENS0_12EggCheckTypeE");
extern "C" bool YellowAuto_00492d4c(const uint8_t* arg0, uint32_t arg1) {
uint32_t a = *(uint32_t*)(arg0 + 12); uint32_t legal = FUN_00491e90(a); uint32_t illegal = FUN_00491110(a); uint32_t r = illegal; if (arg1 == 0) r = legal & (uint32_t)(~illegal); if (arg1 == 2) r = legal | illegal; if (arg1 > 2) r = 0; return r != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00492614
uint32_t FUN_004913d8(uint32_t);
uint32_t GetNativeTalentPower(const uint8_t*, uint32_t);
extern "C" uint32_t YellowAuto_00492614(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3pml8pokepara9CoreParam14GetTalentPowerENS0_7PowerIDE");
extern "C" uint32_t YellowAuto_00492614(const uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 6) return GetNativeTalentPower(arg0, arg1); uint32_t a = *(uint32_t*)(arg0 + 12); uint32_t f = FUN_004913d8(a); if (((f & (uint32_t)(1u << arg1)) & 255) != 0) return 31; return GetNativeTalentPower(arg0, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00491C3C
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_00491584(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" uint32_t YellowAuto_00491c3c(const uint8_t* arg0) __asm__("_ZNK3pml8pokepara9CoreParam6GetSexEv");
extern "C" uint32_t YellowAuto_00491c3c(const uint8_t* arg0) {
uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_00491584(a, 0); uint8_t v = *(b + 0x15); FUN_0031a338(a); return (uint32_t)((v & 7) >> 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00491EF0
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_00491584(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" uint8_t YellowAuto_00491ef0(const uint8_t* arg0) __asm__("_ZNK3pml8pokepara9CoreParam9GetFormNoEv");
extern "C" uint8_t YellowAuto_00491ef0(const uint8_t* arg0) {
uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_00491584(a, 0); uint8_t v = *(b + 0x15); FUN_0031a338(a); return (uint8_t)(v >> 3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00491A60
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_00491584(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" uint32_t YellowAuto_00491a60(const uint8_t* arg0) __asm__("_ZNK3pml8pokepara9CoreParam5GetIDEv");
extern "C" uint32_t YellowAuto_00491a60(const uint8_t* arg0) {
uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_00491584(a, 0); uint32_t r = *(uint32_t*)(b + 4); FUN_0031a338(a); return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031A4AC
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_00491584(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" void YellowAuto_0031a4ac(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3pml8pokepara9CoreParam5SetIDEj");
extern "C" void YellowAuto_0031a4ac(uint8_t* arg0, uint32_t arg1) {
uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_00491584(a, 1); *(uint32_t*)(b + 4) = arg1; FUN_0031a338(a); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00491A94
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_00491604(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" uint32_t YellowAuto_00491a94(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3pml8pokepara9CoreParam9GetWazaPPEh");
extern "C" uint32_t YellowAuto_00491a94(const uint8_t* arg0, uint32_t arg1) {
if (arg1 > 3) return 0; uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_00491604(a, 0); uint8_t v = *(b + arg1 + 0x22); FUN_0031a338(a); return (uint32_t)v;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00491520
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_00491604(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" uint32_t YellowAuto_00491520(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3pml8pokepara9CoreParam16GetWazaPPUpCountEh");
extern "C" uint32_t YellowAuto_00491520(const uint8_t* arg0, uint32_t arg1) {
if (arg1 > 3) return 0; uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_00491604(a, 0); uint8_t v = *(b + arg1 + 0x26); FUN_0031a338(a); return (uint32_t)v;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004911B4
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_00491688(uint32_t, uint32_t);
uint8_t* FUN_0049170c(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" uint8_t YellowAuto_004911b4(const uint8_t* arg0) __asm__("_ZNK3pml8pokepara9CoreParam14GetFamiliarityEv");
extern "C" uint8_t YellowAuto_004911b4(const uint8_t* arg0) {
uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_00491688(a, 0); uint8_t* c = b; uint8_t r = 0; if (*(int8_t*)(b + 0x1b) == 0) c = FUN_0049170c(a, 0); if (*(int8_t*)(b + 0x1b) == 0) r = *(c + 0x1a); if (*(int8_t*)(b + 0x1b) != 0) c = FUN_00491688(a, 0); if (*(int8_t*)(b + 0x1b) != 0) r = *(c + 0x2a); FUN_0031a338(a); return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004919B4
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_0049170c(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" uint8_t YellowAuto_004919b4(const uint8_t* arg0) __asm__("_ZNK3pml8pokepara9CoreParam22GetOriginalFamiliarityEv");
extern "C" uint8_t YellowAuto_004919b4(const uint8_t* arg0) {
uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_0049170c(a, 0); uint8_t r = *(b + 0x1a); FUN_0031a338(a); return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00319E6C
void FUN_0031a3b0(uint32_t);
uint8_t* FUN_0049170c(uint32_t, uint32_t);
void FUN_0031a338(uint32_t);
extern "C" void YellowAuto_00319e6c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3pml8pokepara9CoreParam18SetCassetteVersionEj");
extern "C" void YellowAuto_00319e6c(uint8_t* arg0, uint32_t arg1) {
uint32_t a = *(uint32_t*)(arg0 + 12); FUN_0031a3b0(a); uint8_t* b = FUN_0049170c(a, 1); *(b + 0x2f) = (uint8_t)arg1; FUN_0031a338(a); return;
}
#endif
