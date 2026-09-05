// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2AA0
extern "C" bool YellowAuto_004a2aa0(const uint8_t* arg0) __asm__("_ZNK6NetApp9Evolution9APP_PARAM12IsForgotWazaEv");
extern "C" bool YellowAuto_004a2aa0(const uint8_t* arg0) {
return *(uint16_t *)(arg0 + 0x20) != 0 && *(uint16_t *)(arg0 + 0x28) != 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2AE0
uint32_t GetWazaCount(const void*);
bool IsAbandonedForget(const uint8_t* arg0);
extern "C" bool YellowAuto_004a2ae0(const uint8_t* arg0) __asm__("_ZNK6NetApp9Evolution9APP_PARAM17IsAbandonedForgetEv");
extern "C" bool YellowAuto_004a2ae0(const uint8_t* arg0) {
return GetWazaCount(*(const void **)(arg0 + 4)) <= *(const uint32_t *)(arg0 + 0x24);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D00E0
uint8_t GetFormNo(const void*);
uint16_t GetMonsNo(const void*);
void LoadPersonalData(uint16_t, uint8_t);
uint32_t GetPersonalParam(uint32_t);
bool IsAlolaSpecies(const void* arg0);
extern "C" bool YellowAuto_003d00e0(const void* arg0) __asm__("_ZN6NetApp9Evolution9APP_PARAM14IsAlolaSpeciesERKN3pml8pokepara9CoreParamE");
extern "C" bool YellowAuto_003d00e0(const void* arg0) {
LoadPersonalData((uint16_t)GetMonsNo(arg0), (uint8_t)GetFormNo(arg0)); return GetPersonalParam(0x2d) == 1u;
}
#endif
