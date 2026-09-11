// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A9DC8
extern const int32_t DAT_004a9e50;
uint32_t GetPokeGetFlag(const uint8_t*, uint16_t);
uint32_t FUN_004a6990(const void*, uint32_t, int32_t);
extern "C" uint32_t YellowAuto_004a9dc8(const uint8_t* arg0, int32_t arg1, const void* arg2) __asm__("_ZNK8Savedata9ZukanData20GetLocalPokeGetCountEN8PokeTool10ExtendData9LocalAreaEPKS2_");
extern "C" uint32_t YellowAuto_004a9dc8(const uint8_t* arg0, int32_t arg1, const void* arg2) {
uint32_t count = 0;
for (uint32_t i = 1; (int32_t)i <= DAT_004a9e50; ++i) {
if (GetPokeGetFlag(arg0, (uint16_t)i) != 0) {
if (FUN_004a6990(arg2, i, arg1) != 0) {
count = (count + 1u) & 0xFFFFu;
}
}
}
return count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA2D0
extern const int32_t DAT_004aa36c;
uint32_t GetPokeGetFlag(const uint8_t*, uint16_t);
uint32_t IsExistLocalZukanStatic(uint32_t, int32_t);
extern "C" uint32_t YellowAuto_004aa2d0(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK8Savedata9ZukanData26GetLocalPokeGetCountStaticEN8PokeTool10ExtendData9LocalAreaE");
extern "C" uint32_t YellowAuto_004aa2d0(const uint8_t* arg0, int32_t arg1) {
uint32_t count = 0;
for (uint32_t i = 1; (int32_t)i <= DAT_004aa36c; ++i) {
if (GetPokeGetFlag(arg0, (uint16_t)i) != 0) {
if (IsExistLocalZukanStatic(i, arg1) != 0) {
count = (count + 1u) & 0xFFFFu;
}
}
}
return count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A9320
extern const int32_t DAT_004a9430;
uint32_t FUN_004a8c24(const uint8_t*, uint16_t, int32_t, bool, uint8_t);
void LoadPersonalData(uint16_t, uint8_t);
uint32_t GetPersonalParam(uint32_t);
extern "C" bool YellowAuto_004a9320(const uint8_t* arg0, uint16_t arg1, int32_t arg2, bool arg3, uint8_t arg4) __asm__("_ZNK8Savedata9ZukanData16CheckPokeSeeFormE6MonsNoN3pml3SexEbh");
extern "C" bool YellowAuto_004a9320(const uint8_t* arg0, uint16_t arg1, int32_t arg2, bool arg3, uint8_t arg4) {
if (arg1 == 0 || (int32_t)arg1 > DAT_004a9430) return false;
if (FUN_004a8c24(arg0, arg1, arg2, arg3, arg4) != 0) return true;
LoadPersonalData(arg1, arg4);
if (GetPersonalParam(20u) != 255u) return false;
if (FUN_004a8c24(arg0, arg1, 0, arg3, arg4) != 0) return true;
if (FUN_004a8c24(arg0, arg1, 1, arg3, arg4) != 0) return true;
return false;
}
#endif
