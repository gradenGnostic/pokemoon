// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EFF84
void StartAnime(uint8_t*, int32_t, uint32_t, bool, bool);
extern "C" void YellowAuto_002eff84(uint8_t* arg0, uint32_t arg1, bool arg2, bool arg3) __asm__("_ZN3app4tool14PokeIconToolEx9StartAnimEjbb");
extern "C" void YellowAuto_002eff84(uint8_t* arg0, uint32_t arg1, bool arg2, bool arg3) {
StartAnime(*reinterpret_cast<uint8_t**>(arg0 + 8), *reinterpret_cast<int32_t*>(arg0 + 0x18), arg1, arg2, arg3);
}
#endif
