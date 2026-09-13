// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A85CC
extern "C" void YellowAuto_004a85cc(const uint8_t* arg0, uint8_t* arg1, uint8_t* arg2, uint8_t* arg3) __asm__("_ZNK8Savedata8MyStatus17GetQuickMatchInfoEPbS1_S1_");
extern "C" void YellowAuto_004a85cc(const uint8_t* arg0, uint8_t* arg1, uint8_t* arg2, uint8_t* arg3) {
if (arg1 != 0 && arg2 != 0 && arg3 != 0) *arg1 = (uint8_t)((*(const uint16_t *)(arg0 + 0x80) & 4u) >> 2), *arg2 = (uint8_t)((*(const uint16_t *)(arg0 + 0x80) & 8u) >> 3), *arg3 = (uint8_t)((*(const uint16_t *)(arg0 + 0x80) & 0x10u) >> 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A847C
bool StartFastMode(void* arg0);
int32_t GetID(void* arg0);
uint8_t GetParentSex(void* arg0);
void FUN_0049099c(void* arg0, uint16_t* arg1, uint32_t arg2);
int32_t StrComp(const uint16_t* arg0, const uint16_t* arg1);
void EndFastMode(void* arg0, int32_t arg1);
extern "C" bool YellowAuto_004a847c(const uint8_t* arg0, void* arg1) __asm__("_ZNK8Savedata8MyStatus11IsMyPokemonERKN3pml8pokepara9CoreParamE");
extern "C" bool YellowAuto_004a847c(const uint8_t* arg0, void* arg1) {
uint16_t local[14]; bool result = false; bool fast = StartFastMode(arg1); if (GetID(arg1) == *(const int32_t *)(arg0 + 8) && GetParentSex(arg1) == *(const uint8_t *)(arg0 + 0x0d)) FUN_0049099c(arg1, local, 0x0d), result = StrComp(local, (const uint16_t *)(arg0 + 0x40)) != 0; EndFastMode(arg1, (int32_t)fast); return result;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A835C
void ConvertToDressUpParam(uint32_t* arg0, const uint32_t* arg1);
void __aeabi_memcpy(void* arg0, const void* arg1, uint32_t arg2);
extern "C" void YellowAuto_004a835c(void* arg0, const uint8_t* arg1) __asm__("_ZNK8Savedata8MyStatus10GetDressupEv");
extern "C" void YellowAuto_004a835c(void* arg0, const uint8_t* arg1) {
uint8_t local[0x28]; for (uint32_t i = 0; i < 0x26; ++i) local[i] = 0xff; local[0x26] = 0; local[0x27] = 0; ConvertToDressUpParam((uint32_t *)local, (const uint32_t *)(arg1 + 0x5c)); __aeabi_memcpy(arg0, local, 0x28);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004439AC
extern "C" void YellowAuto_004439ac(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata8MyStatus14SetNexUniqueIDEy");
extern "C" void YellowAuto_004439ac(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
*(uint32_t*)(arg0 + 24) = arg2; *(uint32_t*)(arg0 + 28) = arg3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443AD8
extern "C" void YellowAuto_00443ad8(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata8MyStatus25SetPssPersonalDataStoreIdEy");
extern "C" void YellowAuto_00443ad8(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
*(uint32_t*)(arg0 + 16) = arg2; *(uint32_t*)(arg0 + 20) = arg3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8408
extern "C" uint16_t YellowAuto_004a8408(const uint8_t* arg0) __asm__("_ZNK8Savedata8MyStatus11HasMegaRingEv");
extern "C" uint16_t YellowAuto_004a8408(const uint8_t* arg0) {
return (*(const uint16_t*)(arg0 + 128) & 1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443CCC
extern "C" void YellowAuto_00443ccc(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8Savedata8MyStatus7SetIconERKNS0_9ICON_DATAE");
extern "C" void YellowAuto_00443ccc(uint8_t* arg0, const uint8_t* arg1) {
((uint32_t*)(arg0 + 0x5C))[0] = ((const uint32_t*)arg1)[0]; ((uint32_t*)(arg0 + 0x5C))[1] = ((const uint32_t*)arg1)[1]; ((uint32_t*)(arg0 + 0x5C))[2] = ((const uint32_t*)arg1)[2]; ((uint32_t*)(arg0 + 0x5C))[3] = ((const uint32_t*)arg1)[3]; ((uint32_t*)(arg0 + 0x5C))[4] = ((const uint32_t*)arg1)[4]; ((uint32_t*)(arg0 + 0x5C))[5] = ((const uint32_t*)arg1)[5]; ((uint32_t*)(arg0 + 0x5C))[6] = ((const uint32_t*)arg1)[6]; ((uint32_t*)(arg0 + 0x5C))[7] = ((const uint32_t*)arg1)[7]; ((uint32_t*)(arg0 + 0x5C))[8] = ((const uint32_t*)arg1)[8];
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443CE4
extern "C" void YellowAuto_00443ce4(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8Savedata8MyStatus8CopyFromERKS0_");
extern "C" void YellowAuto_00443ce4(uint8_t* arg0, const uint8_t* arg1) {
for (int32_t i = 0; i < 192; ++i) arg0[8 + i] = arg1[8 + i];
}
#endif
