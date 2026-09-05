// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004072D4
void FUN_004070e4(void* arg0, uint32_t arg1, uint8_t arg2, uint8_t arg3, uint32_t arg4, uint32_t arg5);
extern "C" void YellowAuto_004072d4(void* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) __asm__("_ZN7gflnet23p2p7NetGame15SendDataCommandEPcih");
extern "C" void YellowAuto_004072d4(void* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) {
FUN_004070e4(arg0, 1, 0, arg3, arg1, arg2);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407440
void FUN_004070e4(void* arg0, uint32_t arg1, uint8_t arg2, uint8_t arg3, uint32_t arg4, uint32_t arg5);
extern "C" void YellowAuto_00407440(void* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3, uint8_t arg4) __asm__("_ZN7gflnet23p2p7NetGame22SendDataCommandSendBitEPcihh");
extern "C" void YellowAuto_00407440(void* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3, uint8_t arg4) {
FUN_004070e4(arg0, 1, arg4, arg3, arg1, arg2);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407C30
void FUN_004070e4(void* arg0, uint32_t arg1, uint8_t arg2, uint8_t arg3, uint32_t arg4, uint32_t arg5);
extern "C" void YellowAuto_00407c30(void* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN7gflnet23p2p7NetGame8SendDataEPci");
extern "C" void YellowAuto_00407c30(void* arg0, uint32_t arg1, uint32_t arg2) {
FUN_004070e4(arg0, 1, 0, 0, arg1, arg2);
return;
}
#endif
