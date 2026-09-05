// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038C42C
void EventFieldReport_SetInit(uint8_t* arg0, void* arg1, void* arg2);
extern "C" void YellowAuto_0038c42c(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN5Field16EventFieldReport7SetInitEPN3App9FieldMenu22FieldMenuSubWindowProcEPNS_18EventXMenuListenerE");
extern "C" void YellowAuto_0038c42c(uint8_t* arg0, void* arg1, void* arg2) {
*(void **)(arg0 + 0x24) = arg1; *(void **)(arg0 + 0x5c) = arg2; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038C4DC
void EventFieldReport_EventFieldReport(uint8_t* arg0, void* arg1);
uint8_t* GameEvent_ctor(uint8_t* arg0, void* arg1);
uint8_t* Location_ctor(uint8_t* arg0);
extern "C" void YellowAuto_0038c4dc(uint8_t* arg0, void* arg1) __asm__("_ZN5Field16EventFieldReportC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0038c4dc(uint8_t* arg0, void* arg1) {
uint8_t* arg0_after_gameevent = GameEvent_ctor(arg0, arg1); *(void **)(arg0_after_gameevent + 0x0) = (void *)0x38c500; uint8_t* arg0_location = Location_ctor(arg0_after_gameevent + 0x38); *(void **)(arg0_location - 0x20) = arg1; return;
}
#endif
