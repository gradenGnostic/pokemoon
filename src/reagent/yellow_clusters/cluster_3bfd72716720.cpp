// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037DC10
void FUN_003a2238(uint8_t* arg0);
bool CheckStateBit(uint8_t* arg0, int32_t arg1);
extern "C" void YellowAuto_0037dc10(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN5Field11FieldScript16FuncSetFieldInit25CheckPlayerFixedPointMoveEPNS0_17FieldScriptSystemEPNS_9MoveModel14FieldMoveModelE");
extern "C" void YellowAuto_0037dc10(uint8_t* arg0, uint8_t* arg1) {
if (*(int32_t *)(arg1 + 0x28) == -1 && ((void)FUN_003a2238(arg1), !CheckStateBit(arg1, 4))) *(uint8_t *)(arg0 + 0xC8) = 0;
}
#endif
