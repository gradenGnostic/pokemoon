// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004349A4
extern "C" int32_t YellowAuto_004349a4(const uint8_t* arg0) __asm__("_ZN8PokeTool9PokeModel16GetAnimationTypeEv");
extern "C" int32_t YellowAuto_004349a4(const uint8_t* arg0) {
return (int32_t)(int8_t)arg0[0x12B8];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004357A4
int32_t GetDataSize(const uint8_t *, uint32_t, uint32_t);
int32_t GetData(const uint8_t *, uint32_t);
extern "C" int32_t YellowAuto_004357a4(uint8_t* arg0, uint32_t* arg1, uint32_t arg2) __asm__("_ZN8PokeTool9PokeModel31GetFullPowerDisableMaterialDataEPi");
extern "C" int32_t YellowAuto_004357a4(uint8_t* arg0, uint32_t* arg1, uint32_t arg2) {
int32_t s = GetDataSize(arg0 + 0x1254, 4, arg2);
if (s < 1) return arg1 != 0 ? *arg1 = 0, 0 : 0;
if (arg1 != 0) *arg1 = (uint32_t)s;
return GetData(arg0 + 0x1254, 4);
}
#endif
