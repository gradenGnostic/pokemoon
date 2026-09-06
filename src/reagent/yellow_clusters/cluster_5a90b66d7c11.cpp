// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004092C8
void SetAppHeap(uint8_t* arg0, void* arg1);
void* operator_new(uint32_t arg0, void* arg1);
extern "C" void YellowAuto_004092c8(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet24boss11BossManager10SetAppHeapEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_004092c8(uint8_t* arg0, void* arg1) {
if (arg1 == 0) return; if (*(void**)(arg0 + 4) == 0) *(void**)(arg0 + 4) = arg1, *(void**)(arg0 + 0x45c) = operator_new(0x3700, arg1), *(void**)(arg0 + 0x460) = operator_new((uint32_t)(*(uint16_t*)(arg0 + 0x34) << 2), *(void**)(arg0 + 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040930C
void RemoveAppHeap(uint8_t* arg0);
void operator_delete(void* arg0);
void GFLassert(void);
extern "C" void YellowAuto_0040930c(uint8_t* arg0) __asm__("_ZN7gflnet24boss11BossManager13RemoveAppHeapEv");
extern "C" void YellowAuto_0040930c(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x1c) != 0 || *(uint32_t*)(arg0 + 0x18) != 0 || *(uint8_t*)(arg0 + 0x454) != 0 || *(void**)(arg0 + 0x24) != 0 || *(uint32_t*)(arg0 + 0x28) != 0) GFLassert(); if (*(void**)(arg0 + 0x45c) != 0) operator_delete(*(void**)(arg0 + 0x45c)), *(void**)(arg0 + 0x45c) = 0; if (*(void**)(arg0 + 0x460) != 0) operator_delete(*(void**)(arg0 + 0x460)), *(void**)(arg0 + 0x460) = 0; *(void**)(arg0 + 4) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004095E0
uint32_t CancelImmidiateTask(uint8_t* arg0);
void Signal(void* arg0);
extern "C" uint32_t YellowAuto_004095e0(uint8_t* arg0) __asm__("_ZN7gflnet24boss11BossManager19CancelImmidiateTaskEv");
extern "C" uint32_t YellowAuto_004095e0(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 0x454) != 0 && *(void**)(arg0 + 0x24) != 0) Signal((void*)((uint8_t*)*(void**)(arg0 + 0x24) + 0x830)); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00409754
void RemoveEventListener(uint8_t* arg0, void* arg1);
extern "C" void YellowAuto_00409754(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet24boss11BossManager19RemoveEventListenerEPNS0_17BossEventListenerE");
extern "C" void YellowAuto_00409754(uint8_t* arg0, void* arg1) {
for (uint32_t i = 0; i < 16; ++i) if (*(void**)(arg0 + 0x4a4 + i * 4) == arg1) *(void**)(arg0 + 0x4a4 + i * 4) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00409824
void CancelDownloadFileList(uint8_t* arg0);
void FUN_0040ac64(void* arg0);
extern "C" void YellowAuto_00409824(uint8_t* arg0) __asm__("_ZN7gflnet24boss11BossManager22CancelDownloadFileListEv");
extern "C" void YellowAuto_00409824(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x18) != 0) FUN_0040ac64(*(void**)(arg0 + 0x18));
}
#endif
