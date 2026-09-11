// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00496FD8
void Enter(void*);
void Leave(void*);
extern "C" bool YellowAuto_00496fd8(const uint8_t* arg0) __asm__("_ZNK4gfl22fs16AsyncFileManager16IsAllReqFinishedEv");
extern "C" bool YellowAuto_00496fd8(const uint8_t* arg0) {
void* v0 = *(void* const*)(arg0 + 0x34); Enter(v0); void* v1 = *(void* const*)(arg0 + 0x38); Enter(v1); bool v2 = (*(int32_t*)(*(void* const*)(arg0 + 0x1c) + 4) == 0) && (*(int32_t*)(*(void* const*)(arg0 + 0x20) + 4) == 0); Leave(v1); Leave(v0); return v2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033FCC0
void Enter(void*);
void Leave(void*);
void FUN_0057de10(void*, int32_t, const void*, void*, uint32_t);
void Signal(void*);
extern "C" void YellowAuto_0033fcc0(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl22fs16AsyncFileManager21AddArcFileLoadDataReqERKNS1_18ArcFileLoadDataReqE");
extern "C" void YellowAuto_0033fcc0(uint8_t* arg0, const uint8_t* arg1) {
uint8_t local[0x40]; for (uint32_t i = 0; i < 0x40; ++i) local[i] = arg1[i]; if (local[0x0c] == 0xff) local[0x0c] = arg0[0x18]; void* v0 = *(void* const*)(arg0 + 0x34); Enter(v0); void* v1 = *(void* const*)(arg1 + 0x24); FUN_0057de10(arg0, *(int32_t*)(arg0 + 0x1c), local, v1, 0x80); Signal(*(void* const*)(arg0 + 0x44)); Leave(v0); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033F6E8
void EnterCs(void*);
void LeaveCs(void*);
void* AllocReq(uint32_t, void*);
void Enqueue(int32_t, void*);
void SignalEvent(void*);
extern "C" void YellowAuto_0033f6e8(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl22fs16AsyncFileManager18AddArcFileCloseReqERKNS1_15ArcFileCloseReqE");
extern "C" void YellowAuto_0033f6e8(uint8_t* arg0, const uint8_t* arg1) {
void* cs = *(void**)(arg0 + 0x34);
EnterCs(cs);
int32_t q = *(int32_t*)(arg0 + 0x1C);
void* heap = *(void**)(arg1 + 0x0C);
uint8_t* req = (uint8_t*)AllocReq(48U, heap);
*(uint32_t*)(req + 0x00) = *(uint32_t*)0x0033F7E0;
*(uint32_t*)(req + 0x04) = 0U;
*(uint32_t*)(req + 0x08) = 0U;
*(uint32_t*)(req + 0x10) = *(const uint32_t*)(arg1 + 0x00);
*(uint32_t*)(req + 0x14) = *(const uint32_t*)(arg1 + 0x04);
*(uint32_t*)(req + 0x18) = *(const uint32_t*)(arg1 + 0x08);
*(uint32_t*)(req + 0x1C) = *(const uint32_t*)(arg1 + 0x0C);
*(uint32_t*)(req + 0x20) = *(const uint32_t*)(arg1 + 0x10);
*(uint32_t*)(req + 0x24) = *(const uint32_t*)(arg1 + 0x14);
*(uint32_t*)(req + 0x28) = *(const uint32_t*)(arg1 + 0x18);
*(uint32_t*)(req + 0x0C) = (uint32_t)*(const uint8_t*)(arg1 + 0x08) + 128U;
*(uint32_t*)(req + 0x2C) = 0U;
*(req + 0x2C) = 1U;
Enqueue(q, req);
SignalEvent(*(void**)(arg0 + 0x44));
LeaveCs(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033F38C
void EnterCs(void*);
void LeaveCs(void*);
void* AllocReq(uint32_t, void*);
void Enqueue(int32_t, void*);
void SignalEvent(void*);
extern "C" void YellowAuto_0033f38c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl22fs16AsyncFileManager17AddArcFileOpenReqERKNS1_14ArcFileOpenReqE");
extern "C" void YellowAuto_0033f38c(uint8_t* arg0, const uint8_t* arg1) {
void* cs = *(void**)(arg0 + 0x34);
EnterCs(cs);
int32_t q = *(int32_t*)(arg0 + 0x1C);
void* heap = *(void**)(arg1 + 0x14);
uint8_t* req = (uint8_t*)AllocReq(64U, heap);
*(uint32_t*)(req + 0x00) = *(uint32_t*)0x0033F51C;
*(uint32_t*)(req + 0x04) = 0U;
*(uint32_t*)(req + 0x08) = 0U;
*(uint32_t*)(req + 0x10) = *(const uint32_t*)(arg1 + 0x00);
*(uint32_t*)(req + 0x14) = *(const uint32_t*)(arg1 + 0x04);
*(uint32_t*)(req + 0x18) = *(const uint32_t*)(arg1 + 0x08);
*(uint32_t*)(req + 0x1C) = *(const uint32_t*)(arg1 + 0x0C);
uint32_t w = *(const uint32_t*)(arg1 + 0x10);
uint32_t low = w & 0xFFU;
if (low == 0xFFU)
low = *(arg0 + 0x18);
*(uint32_t*)(req + 0x20) = (w & 0xFFFFFF00U) | (low & 0xFFU);
*(uint32_t*)(req + 0x24) = *(const uint32_t*)(arg1 + 0x14);
*(uint32_t*)(req + 0x28) = *(const uint32_t*)(arg1 + 0x18);
*(uint32_t*)(req + 0x2C) = *(const uint32_t*)(arg1 + 0x1C);
*(uint32_t*)(req + 0x30) = *(const uint32_t*)(arg1 + 0x20);
*(uint32_t*)(req + 0x34) = *(const uint32_t*)(arg1 + 0x24);
*(uint32_t*)(req + 0x38) = *(const uint32_t*)(arg1 + 0x28);
*(uint32_t*)(req + 0x0C) = ((uint32_t)*(const uint8_t*)(arg1 + 0x08) + 128U);
*(uint32_t*)(req + 0x3C) = 0U;
*(req + 0x3C) = 1U;
Enqueue(q, req);
SignalEvent(*(void**)(arg0 + 0x44));
LeaveCs(cs);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033F5D0
void EnterCs(void*);
void LeaveCs(void*);
void* AllocReq(uint32_t, void*);
void Enqueue(int32_t, void*);
void SignalEvent(void*);
void MemClear(void*, uint32_t);
extern "C" void YellowAuto_0033f5d0(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl22fs16AsyncFileManager18AddFileEasyReadReqERKNS1_15FileEasyReadReqE");
extern "C" void YellowAuto_0033f5d0(uint8_t* arg0, const uint8_t* arg1) {
void* cs = *(void**)(arg0 + 0x34);
EnterCs(cs);
int32_t q = *(int32_t*)(arg0 + 0x1C);
void* heap = *(void**)(arg1 + 0x1C);
uint8_t* req = (uint8_t*)AllocReq(72U, heap);
MemClear(req, 72U);
*(uint32_t*)(req + 0x00) = *(uint32_t*)0x0033F6DC;
*(uint32_t*)(req + 0x10) = *(const uint32_t*)(arg1 + 0x00);
*(uint32_t*)(req + 0x14) = *(const uint32_t*)(arg1 + 0x04);
*(uint32_t*)(req + 0x18) = *(const uint32_t*)(arg1 + 0x08);
*(uint32_t*)(req + 0x1C) = *(const uint32_t*)(arg1 + 0x0C);
*(uint32_t*)(req + 0x20) = *(const uint32_t*)(arg1 + 0x10);
*(uint32_t*)(req + 0x24) = *(const uint32_t*)(arg1 + 0x14);
*(uint32_t*)(req + 0x28) = *(const uint32_t*)(arg1 + 0x18);
*(uint32_t*)(req + 0x2C) = *(const uint32_t*)(arg1 + 0x1C);
*(uint32_t*)(req + 0x30) = *(const uint32_t*)(arg1 + 0x20);
*(uint32_t*)(req + 0x34) = *(const uint32_t*)(arg1 + 0x24);
*(uint32_t*)(req + 0x38) = *(const uint32_t*)(arg1 + 0x28);
*(uint32_t*)(req + 0x3C) = *(const uint32_t*)(arg1 + 0x2C);
*(uint32_t*)(req + 0x40) = *(const uint32_t*)(arg1 + 0x30);
*(uint32_t*)(req + 0x0C) = (uint32_t)*(const uint8_t*)(arg1 + 0x04) + 128U;
*(req + 0x44) = 1U;
Enqueue(q, req);
SignalEvent(*(void**)(arg0 + 0x44));
LeaveCs(cs);
}
#endif
