// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D060C
void FUN_003d97dc(void*);
extern "C" void YellowAuto_003d060c(uint8_t* arg0) __asm__("_ZN6NetLib10Validation17PokemonValidation16CancelConnectingEv");
extern "C" void YellowAuto_003d060c(uint8_t* arg0) {
if (*(void**)(arg0 + 0x15fc) != (void*)0)
  FUN_003d97dc(*(void**)(arg0 + 0x15fc));
}
#endif
