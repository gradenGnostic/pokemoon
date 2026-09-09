// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048FDDC
void LoadMegaEvolveTable(uint32_t);
uint32_t GetMegaEvolveRouteNum();
bool FUN_003163e0(uint8_t);
uint16_t FUN_00315d0c(uint8_t);
extern "C" bool YellowAuto_0048fddc(uint32_t arg0, uint32_t arg1) __asm__("_ZNK3pml8pokepara13EvolveManager16IsMegaEvolveItemE6MonsNot");
extern "C" bool YellowAuto_0048fddc(uint32_t arg0, uint32_t arg1) {
LoadMegaEvolveTable(arg0);
for (uint32_t i = 0; i < GetMegaEvolveRouteNum(); ++i)
    if (FUN_003163e0((uint8_t)i) && arg1 == FUN_00315d0c((uint8_t)i))
        return true;
return false;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004902BC
uint16_t GetMonsNo(const uint8_t* arg0);
uint8_t GetFormNo(const uint8_t* arg0);
uint16_t GetItem(const uint8_t* arg0);
void LoadEvolutionTable(uint32_t arg0, uint32_t arg1);
uint32_t GetEvolutionRouteNum();
uint8_t GetEvolutionCondition(uint32_t arg0);
uint16_t GetEvolutionParam(uint32_t arg0);
uint16_t FUN_00315868(uint32_t arg0);
uint8_t GetEvolveEnableLevel(uint32_t arg0);
int32_t FUN_004903b4(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3, const uint8_t* arg4);
extern "C" uint32_t YellowAuto_004902bc(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3, uint32_t* arg4) __asm__("_ZNK3pml8pokepara13EvolveManager26GetEvolvedMonsNo_byLevelUpEPKNS0_9CoreParamEPKNS_9PokePartyEPKNS0_15EvolveSituationEPj");
extern "C" uint32_t YellowAuto_004902bc(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3, uint32_t* arg4) {
uint16_t v0 = GetMonsNo(arg1);
uint8_t v1 = GetFormNo(arg1);
uint16_t v2 = GetItem(arg1);
int32_t v3 = ((int32_t(*)(const uint8_t*, uint16_t))*(uint32_t*)(*(const uint32_t*)arg0 + 8))(arg0, v2);
if (v3 != 0) return (uint32_t)v0;
LoadEvolutionTable((uint32_t)v0, (uint32_t)v1);
uint32_t v4 = GetEvolutionRouteNum();
uint32_t v5 = 0;
uint8_t v6[8];
for (; v5 < v4; ++v5) {
uint32_t v7 = v5 & 255;
uint8_t v8 = GetEvolutionCondition(v7);
v6[0] = v8;
uint16_t v9 = GetEvolutionParam(v7);
*(uint16_t*)(v6 + 2) = v9;
uint16_t v10 = FUN_00315868(v7);
*(uint16_t*)(v6 + 4) = v10;
uint8_t v11 = GetEvolveEnableLevel(v7);
v6[6] = v11;
int32_t v12 = FUN_004903b4(arg0, arg1, arg2, arg3, v6);
if (v12 != 0) {
if (arg4 != (uint32_t*)0) *arg4 = v5;
return (uint32_t)v10;
}
}
return (uint32_t)v0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00318034
extern "C" void YellowAuto_00318034(uint8_t* arg0) __asm__("_ZN3pml8pokepara13EvolveManagerC1Ev");
extern "C" void YellowAuto_00318034(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x00318040;
}
#endif
