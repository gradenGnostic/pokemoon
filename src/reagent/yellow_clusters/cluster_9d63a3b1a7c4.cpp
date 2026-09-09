// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003935E4
extern "C" int32_t YellowAuto_003935e4(uint32_t arg0) __asm__("_ZN5Field20EventPokemonRideTool33GetCharactorId_to_RIDE_POKEMON_IDEj");
extern "C" int32_t YellowAuto_003935e4(uint32_t arg0) {
if (arg0 == 0x70) return 2; if (arg0 == 0x0) return -1; if (arg0 == 0x6e) return 0; if (arg0 == 0x6f) return 1; if (arg0 == 0x8b) return 3; if (arg0 == 0x91) return 4; if (arg0 == 0xae) return 6; return -1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00393660
extern "C" uint32_t YellowAuto_00393660(int32_t arg0) __asm__("_ZN5Field20EventPokemonRideTool33GetRIDE_POKEMON_ID_to_CharactorIdENS_15RIDE_POKEMON_IDE");
extern "C" uint32_t YellowAuto_00393660(int32_t arg0) {
switch (arg0) { case 0: return 0x6e; case 1: return 0x6f; case 2: return 0x70; case 3: return 0x8b; case 4: return 0x91; case 6: return 0xae; default: return 0x6e; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00393560
extern "C" uint32_t YellowAuto_00393560(int32_t arg0) __asm__("_ZN5Field20EventPokemonRideTool32GetRIDE_POKEMON_ID_to_PlayerFormENS_15RIDE_POKEMON_IDE");
extern "C" uint32_t YellowAuto_00393560(int32_t arg0) {
switch (arg0) { case 0: return 1; case 1: return 6; case 2: return 2; case 3: return 5; case 4: return 3; case 6: return 4; default: return 0; }
}
#endif
