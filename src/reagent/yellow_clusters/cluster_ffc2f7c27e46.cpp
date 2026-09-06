// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045DFAC
uint32_t IsConnecting(void*);
void CancelConnecting(void*);
extern "C" uint32_t YellowAuto_0045dfac(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util30NetAppPokemonValidationUtility10CanDestroyEv");
extern "C" uint32_t YellowAuto_0045dfac(uint8_t* arg0) {
uint32_t result = 1;
void* validation = *(void**)(arg0 + 8);
if (validation != 0 && IsConnecting(validation) != 0)
  CancelConnecting(validation), result = 0;
return result;
}
#endif
