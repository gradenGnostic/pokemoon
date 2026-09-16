// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00430288
extern "C" bool YellowAuto_00430288(const uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8PokeTool18CompareSimpleParamERKNS_11SimpleParamES2_");
extern "C" bool YellowAuto_00430288(const uint8_t* arg0, const uint8_t* arg1) {
return *(const uint16_t*)(arg0 + 0) == *(const uint16_t*)(arg1 + 0) && *(const uint8_t*)(arg0 + 2) == *(const uint8_t*)(arg1 + 2) && *(const uint8_t*)(arg0 + 3) == *(const uint8_t*)(arg1 + 3) && *(const int8_t*)(arg0 + 4) == *(const int8_t*)(arg1 + 4) && *(const int8_t*)(arg0 + 5) == *(const int8_t*)(arg1 + 5) && *(const uint32_t*)(arg0 + 8) == *(const uint32_t*)(arg1 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00430524
uint16_t GetMonsNo(const uint8_t*);
uint8_t GetFormNo(const uint8_t*);
extern "C" bool YellowAuto_00430524(const uint8_t* arg0) __asm__("_ZN8PokeTool24CheckUsingKawaigariInAppEPKN3pml8pokepara9CoreParamE");
extern "C" bool YellowAuto_00430524(const uint8_t* arg0) {
return GetMonsNo(arg0) == 0x2cc || (GetMonsNo(arg0) == 0x286 && (GetFormNo(arg0) == 1 || GetFormNo(arg0) == 2));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00432608
uint8_t GetCassetteVersion(const uint8_t*);
int32_t FUN_004365b4(int8_t);
uint32_t GetID(const uint8_t*);
extern "C" bool YellowAuto_00432608(const uint8_t* arg0, uint32_t* arg1) __asm__("_ZN8PokeTool9GetDrawIDEPKN3pml8pokepara9CoreParamEPj");
extern "C" bool YellowAuto_00432608(const uint8_t* arg0, uint32_t* arg1) {
return FUN_004365b4(GetCassetteVersion(arg0)) != 0 ? (*arg1 = GetID(arg0) + (GetID(arg0) / 100U) * 64U, true) : (*arg1 = (uint16_t)GetID(arg0), false);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042DF28
uint16_t GetMonsNo(const uint8_t*);
uint8_t GetFormNo(const uint8_t*);
uint8_t GetSex(const uint8_t*);
bool IsRare(const uint8_t*);
bool IsEgg(const uint8_t*, int32_t);
uint32_t GetPersonalRnd(const uint8_t*);
extern "C" void YellowAuto_0042df28(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8PokeTool14GetSimpleParamEPNS_11SimpleParamEPKN3pml8pokepara9CoreParamE");
extern "C" void YellowAuto_0042df28(uint8_t* arg0, const uint8_t* arg1) {
*(uint16_t*)(arg0 + 0) = GetMonsNo(arg1); *(arg0 + 2) = GetFormNo(arg1); *(arg0 + 3) = GetSex(arg1); *(arg0 + 4) = IsRare(arg1); *(arg0 + 5) = IsEgg(arg1, 2); *(uint32_t*)(arg0 + 8) = GetPersonalRnd(arg1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043038C
void FUN_004a8540(const uint8_t*, uint8_t*);
int32_t GetAlolaTimeZone(const uint8_t*);
extern "C" void YellowAuto_0043038c(uint8_t* arg0, uint8_t* arg1, bool arg2, int32_t arg3) __asm__("_ZN8PokeTool20SetupEvolveSituationEPN3pml8pokepara15EvolveSituationEPN7GameSys11GameManagerEbN5Field7weather11WeatherKindE");
extern "C" void YellowAuto_0043038c(uint8_t* arg0, uint8_t* arg1, bool arg2, int32_t arg3) {
arg0[0] = 0; arg0[1] = 0; arg0[2] = 0; arg0[3] = 0; arg0[4] = 0; arg0[5] = 0; arg0[6] = arg2; arg0[7] = 0; const uint8_t* v0 = *reinterpret_cast<const uint8_t* const*>(arg1 + 0x24); FUN_004a8540(reinterpret_cast<const uint8_t*>(*reinterpret_cast<const uint32_t*>(v0 + 4) + 0xEA0), arg0 + 8); int32_t v1 = GetAlolaTimeZone(v0); if (v1 == 0 || v1 == 1 || v1 == 2) arg0[4] = 1; else if (v1 == 3 || v1 == 4) arg0[5] = 1; uint16_t v2 = *reinterpret_cast<const uint16_t*>(v0 + 0x62); if (v2 == 0xF0) arg0[0] = 1; else if (v2 >= 0xF1 && v2 <= 0xF5) arg0[0] = 1; else if (v2 < 0xF0) { if (v2 == 0xB2) arg0[3] = 1; else if (v2 == 0xB0 || v2 == 0xB1) arg0[3] = 1; else if (v2 == 0xB3) arg0[3] = 1; else if (v2 == 0xB4) { arg0[1] = 1; arg0[3] = 1; } else if (v2 == 0x5D) arg0[2] = 1; } if (arg3 == 2 || arg3 == 3 || arg3 == 8 || arg3 == 9) arg0[7] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042A970
bool StartFastMode(const uint8_t*);
int16_t GetMonsNo(const uint8_t*);
uint32_t IsEgg(const uint8_t*, int32_t);
uint32_t HaveNickName(const uint8_t*);
uint32_t GetSex(const uint8_t*);
void EndFastMode(const uint8_t*, bool);
extern "C" uint32_t YellowAuto_0042a970(const uint8_t* arg0) __asm__("_ZN8PokeTool10GetDrawSexEPKN3pml8pokepara9CoreParamE");
extern "C" uint32_t YellowAuto_0042a970(const uint8_t* arg0) {
bool v0 = StartFastMode(arg0); int16_t v1 = GetMonsNo(arg0); uint32_t v2 = IsEgg(arg0, 2); uint32_t v3 = HaveNickName(arg0); uint32_t v4 = GetSex(arg0); EndFastMode(arg0, v0); if (v2 != 0) return 2; if (v3 != 0) return v4; if (v1 != 0x20 && v1 != 0x1D) return v4; return 2;
}
#endif
