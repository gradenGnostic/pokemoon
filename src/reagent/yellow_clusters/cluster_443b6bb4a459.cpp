// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017C98C
extern "C" void YellowAuto_0017c98c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN2nn3nex11CallContext7SetFlagEj");
extern "C" void YellowAuto_0017c98c(uint8_t* arg0, uint32_t arg1) {
*(uint32_t *)(arg0 + 0xc) = arg1 | *(uint32_t *)(arg0 + 0xc);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017C614
extern uint32_t DAT_0017c634;
extern uint32_t DAT_0017c638;
void FUN_0017c4a4(uint8_t* arg0, uint32_t arg1, uint32_t* arg2, bool arg3);
extern "C" void YellowAuto_0017c614(uint8_t* arg0, uint32_t arg1, bool arg2, bool arg3) __asm__("_ZN2nn3nex11CallContext26RegisterCompletionCallbackEPNS0_12CallbackRootEbb");
extern "C" void YellowAuto_0017c614(uint8_t* arg0, uint32_t arg1, bool arg2, bool arg3) {
FUN_0017c4a4(arg0, arg2 ? DAT_0017c634 : DAT_0017c638, &arg1, arg3);
return;
}
#endif
