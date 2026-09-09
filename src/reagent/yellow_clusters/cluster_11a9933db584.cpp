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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043DBB0
void Date(void*);
void GetNow(void*);
unsigned long long FUN_003f46b0(const void*);
uint8_t GetFieldScanStatus(const uint8_t*, void*, void*);
extern "C" uint8_t YellowAuto_0043dbb0(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN8Savedata16QRReaderSaveData14FieldScanQueryEPNS0_22IFieldScanQueryHandlerEPNS0_18FieldScanQueryInfoE");
extern "C" uint8_t YellowAuto_0043dbb0(uint8_t* arg0, void* arg1, void* arg2) {
uint32_t date[2];
Date((void*)date);
GetNow((void*)date);
unsigned long long now = FUN_003f46b0((const void*)date);
uint32_t base_lo = *(uint32_t*)(arg0 + 0x10);
uint32_t base_hi = *(uint32_t*)(arg0 + 0x14);
unsigned long long target = ((unsigned long long)base_hi << 32 | (unsigned long long)base_lo) + (unsigned long long)0xE10;
unsigned long long rem = (unsigned long long)0;
if (now < target) rem = target - now;
if (*(arg0 + 0x9) == (uint8_t)2 && rem == (unsigned long long)0) *(arg0 + 0x9) = (uint8_t)1;
return GetFieldScanStatus((const uint8_t*)arg0, arg1, arg2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7168
void Date(void*);
void GetNow(void*);
unsigned long long FUN_003f46b0(const void*);
void __aeabi_memcpy4(void*, const void*, uint32_t);
extern "C" uint8_t YellowAuto_004a7168(const uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZNK8Savedata16QRReaderSaveData18GetFieldScanStatusEPNS0_22IFieldScanQueryHandlerEPNS0_18FieldScanQueryInfoE");
extern "C" uint8_t YellowAuto_004a7168(const uint8_t* arg0, void* arg1, void* arg2) {
uint32_t date[2];
Date((void*)date);
GetNow((void*)date);
unsigned long long now = FUN_003f46b0((const void*)date);
uint32_t base_lo = *(uint32_t*)(arg0 + 0x10);
uint32_t base_hi = *(uint32_t*)(arg0 + 0x14);
unsigned long long target = ((unsigned long long)base_hi << 32 | (unsigned long long)base_lo) + (unsigned long long)0xE10;
unsigned long long rem = (unsigned long long)0;
if (now < target) rem = target - now;
uint8_t status = *(arg0 + 0x9);
uint8_t info[0x19];
*(uint32_t*)(info + 0x0) = (uint32_t)now;
*(uint32_t*)(info + 0x4) = (uint32_t)(now >> 32);
*(uint32_t*)(info + 0x8) = (uint32_t)target;
*(uint32_t*)(info + 0xC) = (uint32_t)(target >> 32);
*(uint32_t*)(info + 0x10) = (uint32_t)rem;
*(uint32_t*)(info + 0x14) = (uint32_t)(rem >> 32);
*(info + 0x18) = status;
if (arg1 != (void*)0) (*(void (***)(void*, uint32_t, void*))arg1)[0](arg1, (uint32_t)status, (void*)info);
if (arg2 != (void*)0) __aeabi_memcpy4(arg2, (const void*)info, (uint32_t)0x19);
return status;
}
#endif
