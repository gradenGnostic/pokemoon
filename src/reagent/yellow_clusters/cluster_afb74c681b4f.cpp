// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048FDC4
void FUN_00319e64(int32_t, int32_t);
extern "C" void YellowAuto_0048fdc4(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8Savedata12UnionPokemon10SetPokemonEPN3pml8pokepara12PokemonParamE");
extern "C" void YellowAuto_0048fdc4(uint8_t* arg0, const uint8_t* arg1) {
FUN_00319e64(*(const int32_t *)(arg1 + 0xc), (int32_t)(arg0 + 4));
}
#endif
