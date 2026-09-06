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
