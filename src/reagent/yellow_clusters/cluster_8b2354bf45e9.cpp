// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D6C7C
extern "C" bool YellowAuto_002d6c7c(uint16_t arg0) __asm__("_ZN3App5Event15PokeParureEvent17IsNoHungryPokemonE6MonsNo");
extern "C" bool YellowAuto_002d6c7c(uint16_t arg0) {
const uint16_t* t = *(const uint16_t* const*)0x2D6CB8u; for (uint32_t i = 0; i < 8; i += 2) if (arg0 == t[i] || arg0 == t[i + 1]) return true; return false;
}
#endif
