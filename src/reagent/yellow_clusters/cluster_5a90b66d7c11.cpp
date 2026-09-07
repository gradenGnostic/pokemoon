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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00409788
const uint8_t* GetFgOnlyTaskName();
void* AllocateFromHeap(void*);
void* CreateFilelistDownloadThread(void*, void*, uint32_t, void*, uint32_t, const uint8_t*, const void*);
void StartThread(void*);
extern "C" bool YellowAuto_00409788(uint8_t* arg0, int32_t arg1, const uint8_t* arg2, const void* arg3) __asm__("_ZN7gflnet24boss11BossManager21StartDownloadFileListEiPKcPKNS1_22BOSS_SEARCH_ATTRIBUTESE");
extern "C" bool YellowAuto_00409788(uint8_t* arg0, int32_t arg1, const uint8_t* arg2, const void* arg3) {
if (*reinterpret_cast<void**>(arg0 + 4) == nullptr) {
return false;
}
if (*reinterpret_cast<void**>(arg0 + 0x18) != nullptr) {
return false;
}
const uint8_t* task = arg2;
if (task == nullptr) {
task = GetFgOnlyTaskName();
}
void* heap = *reinterpret_cast<void**>(arg0 + 4);
void* mem = AllocateFromHeap(heap);
void* thr = nullptr;
if (mem != nullptr) {
void* nsa = *reinterpret_cast<void**>(arg0 + 0x45C);
thr = CreateFilelistDownloadThread(mem, heap, 0x2000, nsa, 0x40, task, arg3);
}
*reinterpret_cast<void**>(arg0 + 0x18) = thr;
if (thr == nullptr) {
return false;
}
*reinterpret_cast<int32_t*>(arg0 + 0x458) = arg1;
StartThread(thr);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00409520
uint32_t GetDefaultResult();
void* AllocateFromHeap(void*);
void* CreateImmediateTaskThread(void*, void*, uint32_t, const uint8_t*, const uint8_t*, void*, const uint8_t*);
void StartThread(void*);
extern "C" uint32_t YellowAuto_00409520(uint8_t* arg0, int32_t arg1, const uint8_t* arg2, const uint8_t* arg3, const uint8_t* arg4) __asm__("_ZN7gflnet24boss11BossManager18StartImmidiateTaskEiPKcS3_S3_");
extern "C" uint32_t YellowAuto_00409520(uint8_t* arg0, int32_t arg1, const uint8_t* arg2, const uint8_t* arg3, const uint8_t* arg4) {
uint32_t ret = GetDefaultResult();
if (*reinterpret_cast<uint8_t*>(arg0 + 0x454) != 0) {
return ret;
}
if (*reinterpret_cast<void**>(arg0 + 4) == nullptr) {
return ret;
}
if (*reinterpret_cast<void**>(arg0 + 0x24) != nullptr) {
return ret;
}
void* heap = *reinterpret_cast<void**>(arg0 + 4);
void* mem = AllocateFromHeap(heap);
void* thr = nullptr;
if (mem != nullptr) {
void* code = reinterpret_cast<void*>(arg0 + 0x464);
thr = CreateImmediateTaskThread(mem, heap, 0x2000, arg2, arg3, code, arg4);
}
*reinterpret_cast<void**>(arg0 + 0x24) = thr;
if (thr == nullptr) {
return ret;
}
*reinterpret_cast<int32_t*>(arg0 + 0x458) = arg1;
StartThread(thr);
*reinterpret_cast<uint8_t*>(arg0 + 0x454) = 1;
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040939C
void* OperatorNew(uint32_t, void*);
void* CreateFileReadThread(void*, void*, uint32_t, uint32_t);
void StartThread(void*);
extern "C" bool YellowAuto_0040939c(uint8_t* arg0, uint32_t arg1, int32_t arg2) __asm__("_ZN7gflnet24boss11BossManager15RequestDataBodyEji");
extern "C" bool YellowAuto_0040939c(uint8_t* arg0, uint32_t arg1, int32_t arg2) {
if (*reinterpret_cast<void**>(arg0 + 4) == nullptr) {
return false;
}
if (*reinterpret_cast<void**>(arg0 + 0x1C) != nullptr) {
return false;
}
void* heap = *reinterpret_cast<void**>(arg0 + 4);
void* mem = OperatorNew(0x70, heap);
void* thr = nullptr;
if (mem != nullptr) {
thr = CreateFileReadThread(mem, heap, 0x2000, arg1);
}
*reinterpret_cast<void**>(arg0 + 0x1C) = thr;
if (thr == nullptr) {
return false;
}
*reinterpret_cast<int32_t*>(arg0 + 0x458) = arg2;
StartThread(thr);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00409410
extern "C" bool YellowAuto_00409410(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet24boss11BossManager16AddEventListenerEPNS0_17BossEventListenerE");
extern "C" bool YellowAuto_00409410(uint8_t* arg0, void* arg1) {
uint32_t i = 0;
for (i = 0; i < 16; ++i) {
if (*reinterpret_cast<void**>(arg0 + 0x4A4 + i * 4) == arg1) {
return false;
}
}
for (i = 0; i < 16; ++i) {
if (*reinterpret_cast<void**>(arg0 + 0x4A4 + i * 4) == nullptr) {
*reinterpret_cast<void**>(arg0 + 0x4A4 + i * 4) = arg1;
return true;
}
}
return false;
}
#endif
