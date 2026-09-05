// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040F9B4
extern "C" void YellowAuto_0040f9b4(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN7poke_3d5model12PokemonModel15SetAmbientColorERKN4gfl24math7Vector4E");
extern "C" void YellowAuto_0040f9b4(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t*)(arg0 + 0x2d0) = arg1[0];
*(uint32_t*)(arg0 + 0x2d4) = arg1[1];
*(uint32_t*)(arg0 + 0x2d8) = arg1[2];
*(uint32_t*)(arg0 + 0x2dc) = arg1[3];
}
#endif
