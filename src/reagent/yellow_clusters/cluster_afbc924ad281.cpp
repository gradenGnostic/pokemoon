// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003991C8
extern "C" uint32_t YellowAuto_003991c8(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field7Encount7PokeSet27IsPokemonSearchEncountAvoidEj");
extern "C" uint32_t YellowAuto_003991c8(uint8_t* arg0, int32_t arg1) {
uint32_t u = *(uint32_t*)(arg0 + 0x20C);
if ((u & 8U) != 0U) return 0;
uint32_t f = *(uint32_t*)(arg0 + 0x210);
uint32_t lv = (uint32_t)*(arg0 + 0x1FB);
if (((f & 256U) != 0U) && ((int32_t)(arg1 + 5) <= (int32_t)lv)) return 1;
if (((u & 2U) != 0U) || ((u & 4U) == 0U)) return 0;
if ((int32_t)arg1 < (int32_t)lv) return 1;
return 0;
}
#endif
