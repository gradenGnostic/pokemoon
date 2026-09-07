// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00464C14
extern "C" void YellowAuto_00464c14(uint8_t* arg0, const uint8_t* arg1, uint8_t arg2, uint8_t arg3) __asm__("_ZN9NetAppLib8P2PTrade21P2PTradeRequestClient20AddFirstTradeRequestERKN3pml8pokepara12PokemonParamEhh");
extern "C" void YellowAuto_00464c14(uint8_t* arg0, const uint8_t* arg1, uint8_t arg2, uint8_t arg3) {
if (*(uint32_t*)(arg0 + 0x2190)) ((void (*)(uint32_t, const uint8_t*, uint8_t, uint8_t))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x2190) + 0x10)))(*(uint32_t*)(arg0 + 0x2190), arg1, arg2, arg3);
}
#endif
