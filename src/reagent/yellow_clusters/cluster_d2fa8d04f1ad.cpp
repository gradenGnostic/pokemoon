// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045D5C0
void* GetInstance();
extern "C" void YellowAuto_0045d5c0(void* arg0, int32_t arg1, bool arg2, uint32_t arg3, uint32_t arg4, void* arg5, void* arg6, uint8_t* arg7, void* arg8, uint8_t* arg9, void* arg10) __asm__("_ZN9NetAppLib4Util24NetAppCommonTradeUtility14UpdateSaveDataEPN4gfl24heap11CtrHeapBaseENS0_7TradeIDEbjjPN3pml8pokepara9CoreParamESA_RbRN3app5event23ZukanRegisterEventParamESB_RN8NetEvent9Evolution19EvolutionEventParamE");
extern "C" void YellowAuto_0045d5c0(void* arg0, int32_t arg1, bool arg2, uint32_t arg3, uint32_t arg4, void* arg5, void* arg6, uint8_t* arg7, void* arg8, uint8_t* arg9, void* arg10) {
(void)arg0; (void)arg1; (void)arg2; (void)arg3; (void)arg4; (void)arg5; (void)arg6; (void)arg7; (void)arg8; (void)arg9; (void)arg10; GetInstance();
}
#endif
