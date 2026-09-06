// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037D7BC
void FUN_003a2224(void*);
extern "C" void YellowAuto_0037d7bc(void* arg0, void* arg1, bool arg2) __asm__("_ZN5Field11FieldScript16FuncSetFieldInit24CheckPlayerFreePointMoveEPNS0_17FieldScriptSystemEPNS_9MoveModel14FieldMoveModelEb");
extern "C" void YellowAuto_0037d7bc(void* arg0, void* arg1, bool arg2) {
if ((*(int32_t *)(arg1 + 0x28) == -1) && (arg2 == 0 || (*(uint8_t *)(arg0 + 0xc8) != 0))) FUN_003a2224(arg1);
return;
}
#endif
