// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ED688
void FUN_003ed4cc(uint32_t, bool, uint8_t*);
extern "C" void YellowAuto_003ed688(uint32_t arg0, bool arg1, uint8_t* arg2) __asm__("_ZN6System7DressUp25OverwrideDressUpParamRideEjbPN7poke_3d5model12DressUpParamE");
extern "C" void YellowAuto_003ed688(uint32_t arg0, bool arg1, uint8_t* arg2) {
uint8_t tmp[40];
for (int32_t i = 0; i < 19; ++i) ((uint16_t*)tmp)[i] = 0xFFFF;
tmp[38] = 0;
tmp[39] = 0;
FUN_003ed4cc(arg0, arg1, tmp);
for (int32_t i = 1; i < 14; ++i) {
if (i == 6) continue;
*(uint16_t*)(arg2 + 10 + i * 2) = *(uint16_t*)(tmp + 10 + i * 2);
}
}
#endif
