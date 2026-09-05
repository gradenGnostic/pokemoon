// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307408
int32_t GetExp(const void*);
int32_t GetExpForCurrentLevel(const void*);
extern "C" int32_t YellowAuto_00307408(const void* arg0) __asm__("_ZN3app4util18GetPokeNowLvExpNumEPKN3pml8pokepara12PokemonParamE");
extern "C" int32_t YellowAuto_00307408(const void* arg0) {
return GetExp(arg0) - GetExpForCurrentLevel(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030C154
int32_t GetExpForNextLevel(const void*);
int32_t GetExpForCurrentLevel(const void*);
extern "C" int32_t YellowAuto_0030c154(const void* arg0) __asm__("_ZN3app4util19GetPokeNextLvExpNumEPKN3pml8pokepara12PokemonParamE");
extern "C" int32_t YellowAuto_0030c154(const void* arg0) {
return GetExpForNextLevel(arg0) - GetExpForCurrentLevel(arg0);
}
#endif
