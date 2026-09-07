// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E2F8
bool FUN_0045e30c(uint8_t*, uint16_t, const uint8_t*, const uint8_t*, uint32_t);
extern "C" bool YellowAuto_0045e2f8(uint8_t* arg0, uint16_t arg1, const uint8_t* arg2, const uint8_t* arg3) __asm__("_ZN9NetAppLib4Util30NetAppPokemonValidationUtility6VerifyEN6NetLib10Validation17PokemonValidation8GameModeEPKN6NetApp3GTS12GtsIndexDataEPKN3pml8pokepara9CoreParamE");
extern "C" bool YellowAuto_0045e2f8(uint8_t* arg0, uint16_t arg1, const uint8_t* arg2, const uint8_t* arg3) {
return FUN_0045e30c(arg0, arg1, arg2, arg3, 1);
}
#endif
