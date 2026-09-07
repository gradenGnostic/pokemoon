// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00313D04
uint16_t GetMonsNo(const uint8_t*);
uint8_t GetFormNo(const uint8_t*);
uint16_t GetWazaNo(const uint8_t*, uint32_t);
void FUN_00313D7C(const uint8_t*, uint8_t*);
extern "C" bool YellowAuto_00313d04(const uint8_t* arg0, uint16_t arg1) __asm__("_ZN3pml4waza18ZenryokuWazaSystem20IsZenryokuWazaEnableEPKNS_8pokepara12PokemonParamEt");
extern "C" bool YellowAuto_00313d04(const uint8_t* arg0, uint16_t arg1) {
uint8_t src[8];
uint8_t desc[4];
*(uint16_t*)&src[0] = GetMonsNo(arg0);
src[2] = GetFormNo(arg0);
*(uint16_t*)&src[4] = arg1;
for (uint32_t i = 0; i < 4; ++i) {
*(uint16_t*)&src[6] = GetWazaNo(arg0, i);
FUN_00313D7C(src, desc);
if (desc[2] != 0) return true;
}
return false;
}
#endif
