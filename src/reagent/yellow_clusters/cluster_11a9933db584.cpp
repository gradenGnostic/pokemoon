// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043DE1C
extern "C" void YellowAuto_0043de1c(uint8_t* arg0, uint16_t* arg1, uint16_t* arg2, uint16_t* arg3, uint8_t* arg4, uint8_t* arg5) __asm__("_ZN8Savedata16QRReaderSaveData22GetFieldScanTargetInfoEPtS1_P6MonsNoPhPN3pml3SexE");
extern "C" void YellowAuto_0043de1c(uint8_t* arg0, uint16_t* arg1, uint16_t* arg2, uint16_t* arg3, uint8_t* arg4, uint8_t* arg5) {
if (arg1 != 0) *arg1 = *(uint16_t*)(arg0 + 0x15C);
if (arg2 != 0) *arg2 = *(uint16_t*)(arg0 + 0x15E);
if (arg3 != 0) *arg3 = *(uint16_t*)(arg0 + 0x160);
if (arg4 != 0) *arg4 = (uint8_t)*(uint16_t*)(arg0 + 0x162);
if (arg5 != 0) *arg5 = (uint8_t)*(uint16_t*)(arg0 + 0x164);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043DE70
extern "C" void YellowAuto_0043de70(uint8_t* arg0, uint16_t arg1, uint16_t arg2, uint16_t arg3, uint8_t arg4, uint8_t arg5) __asm__("_ZN8Savedata16QRReaderSaveData22SetFieldScanTargetInfoEtt6MonsNohN3pml3SexE");
extern "C" void YellowAuto_0043de70(uint8_t* arg0, uint16_t arg1, uint16_t arg2, uint16_t arg3, uint8_t arg4, uint8_t arg5) {
*(uint16_t*)(arg0 + 0x15C) = arg1;
*(uint16_t*)(arg0 + 0x15E) = arg2;
*(uint16_t*)(arg0 + 0x160) = arg3;
*(uint16_t*)(arg0 + 0x162) = arg4;
*(uint16_t*)(arg0 + 0x164) = arg5;
return;
}
#endif
