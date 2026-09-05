// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042DF84
void FUN_0042e0bc(void* arg0, uint16_t arg1, uint32_t arg2);
extern const uint32_t DAT_0042df8c;
extern "C" void YellowAuto_0042df84(void* arg0, uint16_t arg1) __asm__("_ZN8PokeTool14NatsukiManager12CalcWhenWalkEPN3pml8pokepara9CoreParamEt");
extern "C" void YellowAuto_0042df84(void* arg0, uint16_t arg1) {
FUN_0042e0bc(arg0, arg1, DAT_0042df8c);
return;
}
#endif
