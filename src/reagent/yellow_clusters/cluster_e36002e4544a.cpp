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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497320
void Enter(const void*);
void Leave(const void*);
extern "C" bool YellowAuto_00497320(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK4gfl22fs16AsyncFileManager22IsArcFileCloseFinishedEj");
extern "C" bool YellowAuto_00497320(const uint8_t* arg0, uint32_t arg1) {
const void* cs = *reinterpret_cast<const void* const*>(arg0 + 0x34);
Enter(cs);
const uint8_t* list = *reinterpret_cast<const uint8_t* const*>(arg0 + 0x1C);
const uint8_t* node = *reinterpret_cast<const uint8_t* const*>(list + 0x04);
while (node != nullptr) {
const uint32_t* vtbl = *reinterpret_cast<const uint32_t* const*>(node);
uint32_t (*fn)(const void*) = *reinterpret_cast<uint32_t (*const*)(const void*)>(reinterpret_cast<const uint8_t*>(vtbl) + 8);
uint32_t kind = fn(node);
if (kind == 4) {
uint32_t id = *reinterpret_cast<const uint32_t*>(node + 0x14);
if (id == arg1) {
Leave(cs);
return false;
}
}
node = *reinterpret_cast<const uint8_t* const*>(node + 0x08);
}
Leave(cs);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049739C
void Enter(const void*);
void Leave(const void*);
extern "C" bool YellowAuto_0049739c(const uint8_t* arg0, void* arg1) __asm__("_ZNK4gfl22fs16AsyncFileManager22IsFileEasyReadFinishedEPPv");
extern "C" bool YellowAuto_0049739c(const uint8_t* arg0, void* arg1) {
const void* cs0 = *reinterpret_cast<const void* const*>(arg0 + 0x34);
Enter(cs0);
const void* cs1 = *reinterpret_cast<const void* const*>(arg0 + 0x38);
Enter(cs1);
const uint8_t* list0 = *reinterpret_cast<const uint8_t* const*>(arg0 + 0x1C);
const uint8_t* node = *reinterpret_cast<const uint8_t* const*>(list0 + 0x04);
while (node != nullptr) {
const uint32_t* vtbl = *reinterpret_cast<const uint32_t* const*>(node);
uint32_t (*fn)(const void*) = *reinterpret_cast<uint32_t (*const*)(const void*)>(reinterpret_cast<const uint8_t*>(vtbl) + 8);
uint32_t kind = fn(node);
if (kind == 1) {
const void* key = *reinterpret_cast<const void* const*>(node + 0x18);
if (key == arg1) {
Leave(cs1);
Leave(cs0);
return false;
}
}
node = *reinterpret_cast<const uint8_t* const*>(node + 0x08);
}
const uint8_t* list1 = *reinterpret_cast<const uint8_t* const*>(arg0 + 0x20);
node = *reinterpret_cast<const uint8_t* const*>(list1 + 0x04);
while (node != nullptr) {
const uint32_t* vtbl = *reinterpret_cast<const uint32_t* const*>(node);
uint32_t (*fn)(const void*) = *reinterpret_cast<uint32_t (*const*)(const void*)>(reinterpret_cast<const uint8_t*>(vtbl) + 8);
uint32_t kind = fn(node);
if (kind == 1) {
const void* key = *reinterpret_cast<const void* const*>(node + 0x18);
if (key == arg1) {
Leave(cs1);
Leave(cs0);
return false;
}
}
node = *reinterpret_cast<const uint8_t* const*>(node + 0x08);
}
Leave(cs1);
Leave(cs0);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497524
void Enter(const void*);
void Leave(const void*);
extern "C" bool YellowAuto_00497524(const uint8_t* arg0, void* arg1) __asm__("_ZNK4gfl22fs16AsyncFileManager25IsArcFileLoadDataFinishedEPPv");
extern "C" bool YellowAuto_00497524(const uint8_t* arg0, void* arg1) {
const void* cs0 = *reinterpret_cast<const void* const*>(arg0 + 0x34);
Enter(cs0);
const void* cs1 = *reinterpret_cast<const void* const*>(arg0 + 0x38);
Enter(cs1);
const uint8_t* list0 = *reinterpret_cast<const uint8_t* const*>(arg0 + 0x1C);
const uint8_t* node = *reinterpret_cast<const uint8_t* const*>(list0 + 0x04);
while (node != nullptr) {
const uint32_t* vtbl = *reinterpret_cast<const uint32_t* const*>(node);
uint32_t (*fn)(const void*) = *reinterpret_cast<uint32_t (*const*)(const void*)>(reinterpret_cast<const uint8_t*>(vtbl) + 8);
uint32_t kind = fn(node);
if (kind == 5) {
const void* key = *reinterpret_cast<const void* const*>(node + 0x20);
if (key == arg1) {
Leave(cs1);
Leave(cs0);
return false;
}
}
node = *reinterpret_cast<const uint8_t* const*>(node + 0x08);
}
const uint8_t* list1 = *reinterpret_cast<const uint8_t* const*>(arg0 + 0x20);
node = *reinterpret_cast<const uint8_t* const*>(list1 + 0x04);
while (node != nullptr) {
const uint32_t* vtbl = *reinterpret_cast<const uint32_t* const*>(node);
uint32_t (*fn)(const void*) = *reinterpret_cast<uint32_t (*const*)(const void*)>(reinterpret_cast<const uint8_t*>(vtbl) + 8);
uint32_t kind = fn(node);
if (kind == 5) {
const void* key = *reinterpret_cast<const void* const*>(node + 0x20);
if (key == arg1) {
Leave(cs1);
Leave(cs0);
return false;
}
}
node = *reinterpret_cast<const uint8_t* const*>(node + 0x08);
}
Leave(cs1);
Leave(cs0);
return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00340680
void CsEnter(uint32_t);
void CsLeave(uint32_t);
void* OpNew(uint32_t, uint32_t);
void MemClr(void*, uint32_t);
void InitReq(void*);
int32_t EnqReq(int32_t, void*);
void EvtSignal(uint32_t);
extern "C" void YellowAuto_00340680(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl22fs16AsyncFileManager29AddArcFileLoadDataPieceBufReqERKNS1_26ArcFileLoadDataPieceBufReqE");
extern "C" void YellowAuto_00340680(uint8_t* arg0, const uint8_t* arg1) {
uint32_t rf = *reinterpret_cast<const uint32_t*>(arg1 + 12); uint32_t r18 = *reinterpret_cast<const uint32_t*>(arg1 + 24); uint32_t a0 = *reinterpret_cast<const uint32_t*>(arg1 + 0); uint32_t a4 = *reinterpret_cast<const uint32_t*>(arg1 + 4); uint32_t a8 = *reinterpret_cast<const uint32_t*>(arg1 + 8); uint32_t a10 = *reinterpret_cast<const uint32_t*>(arg1 + 16); uint32_t a14 = *reinterpret_cast<const uint32_t*>(arg1 + 20); uint32_t a1c = *reinterpret_cast<const uint32_t*>(arg1 + 28); uint32_t a20 = *reinterpret_cast<const uint32_t*>(arg1 + 32); uint32_t a24 = *reinterpret_cast<const uint32_t*>(arg1 + 36); uint32_t a28 = *reinterpret_cast<const uint32_t*>(arg1 + 40); uint32_t a2c = *reinterpret_cast<const uint32_t*>(arg1 + 44); uint32_t a30 = *reinterpret_cast<const uint32_t*>(arg1 + 48); uint32_t drv = rf & 255u; if (drv == 255u) { drv = static_cast<uint32_t>(*(arg0 + 24)); drv &= 255u; } uint32_t merged = (rf & 4294967040u) | drv; uint32_t cs = *reinterpret_cast<const uint32_t*>(arg0 + 52); CsEnter(cs); int32_t q = *reinterpret_cast<const int32_t*>(arg0 + 28); void* obj = OpNew(72u, a28); MemClr(obj, 72u); InitReq(obj); uint8_t* o = static_cast<uint8_t*>(obj); *reinterpret_cast<uint32_t*>(o + 16) = a0; *reinterpret_cast<uint32_t*>(o + 20) = a4; *reinterpret_cast<uint32_t*>(o + 24) = a8; *reinterpret_cast<uint32_t*>(o + 28) = merged; *reinterpret_cast<uint32_t*>(o + 32) = a10; *reinterpret_cast<uint32_t*>(o + 36) = a14; *reinterpret_cast<uint32_t*>(o + 40) = r18; *reinterpret_cast<uint32_t*>(o + 44) = a1c; *reinterpret_cast<uint32_t*>(o + 48) = a20; *reinterpret_cast<uint32_t*>(o + 52) = a24; *reinterpret_cast<uint32_t*>(o + 56) = a28; *reinterpret_cast<uint32_t*>(o + 60) = a2c; *reinterpret_cast<uint32_t*>(o + 64) = a30; *(o + 68) = 1; *reinterpret_cast<uint32_t*>(o + 12) = (r18 & 255u) + 128u; EnqReq(q, obj); uint32_t ev = *reinterpret_cast<const uint32_t*>(arg0 + 68); EvtSignal(ev); CsLeave(cs); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033F960
void CsEnter(uint32_t);
void CsLeave(uint32_t);
void MemClr(void*, uint32_t);
void InitSyncData(void*);
int32_t EnqReq(int32_t, void*);
void EvtSignal(uint32_t);
void EvtWait(uint32_t);
void EvtClear(uint32_t);
void ThrYield(void);
int32_t PollDataFin(void*, uint32_t);
extern "C" int32_t YellowAuto_0033f960(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl22fs16AsyncFileManager19SyncArcFileLoadDataERKNS1_18ArcFileLoadDataReqE");
extern "C" int32_t YellowAuto_0033f960(uint8_t* arg0, const uint8_t* arg1) {
uint32_t rf = *reinterpret_cast<const uint32_t*>(arg1 + 12); uint32_t key = *reinterpret_cast<const uint32_t*>(arg1 + 16); uint32_t a0 = *reinterpret_cast<const uint32_t*>(arg1 + 0); uint32_t a4 = *reinterpret_cast<const uint32_t*>(arg1 + 4); uint32_t a8 = *reinterpret_cast<const uint32_t*>(arg1 + 8); uint32_t a20 = *reinterpret_cast<const uint32_t*>(arg1 + 20); uint32_t a24 = *reinterpret_cast<const uint32_t*>(arg1 + 24); uint32_t a28 = *reinterpret_cast<const uint32_t*>(arg1 + 28); uint32_t a32 = *reinterpret_cast<const uint32_t*>(arg1 + 32); uint32_t a36 = *reinterpret_cast<const uint32_t*>(arg1 + 36); uint32_t a40 = *reinterpret_cast<const uint32_t*>(arg1 + 40); uint32_t a44 = *reinterpret_cast<const uint32_t*>(arg1 + 44); uint32_t a48 = *reinterpret_cast<const uint32_t*>(arg1 + 48); uint32_t a52 = *reinterpret_cast<const uint32_t*>(arg1 + 52); uint32_t a56 = *reinterpret_cast<const uint32_t*>(arg1 + 56); uint32_t drv = rf & 255u; if (drv == 255u) { drv = static_cast<uint32_t>(*(arg0 + 24)); drv &= 255u; } uint32_t merged = (rf & 4294967040u) | drv; uint8_t buf[80]; MemClr(static_cast<void*>(buf), 80u); InitSyncData(static_cast<void*>(buf)); uint8_t* o = buf; *reinterpret_cast<uint32_t*>(o + 16) = a0; *reinterpret_cast<uint32_t*>(o + 20) = a4; *reinterpret_cast<uint32_t*>(o + 24) = a8; *reinterpret_cast<uint32_t*>(o + 28) = merged; *reinterpret_cast<uint32_t*>(o + 32) = key; *reinterpret_cast<uint32_t*>(o + 36) = a20; *reinterpret_cast<uint32_t*>(o + 40) = a24; *reinterpret_cast<uint32_t*>(o + 44) = a28; *reinterpret_cast<uint32_t*>(o + 48) = a32; *reinterpret_cast<uint32_t*>(o + 52) = a36; *reinterpret_cast<uint32_t*>(o + 56) = a40; *reinterpret_cast<uint32_t*>(o + 60) = a44; *reinterpret_cast<uint32_t*>(o + 64) = a48; *reinterpret_cast<uint32_t*>(o + 68) = a52; *reinterpret_cast<uint32_t*>(o + 72) = a56; *reinterpret_cast<uint32_t*>(o + 12) = ((merged >> 8) & 255u) + 64u; uint32_t cs40 = *reinterpret_cast<const uint32_t*>(arg0 + 64); CsEnter(cs40); uint8_t fl = *(arg0 + 48); uint32_t wev = 0u; if (fl == 0u) { *(arg0 + 48) = 1; wev = *reinterpret_cast<const uint32_t*>(arg0 + 76); *reinterpret_cast<uint32_t*>(o + 72) = wev; } CsLeave(cs40); uint32_t cs34 = *reinterpret_cast<const uint32_t*>(arg0 + 52); CsEnter(cs34); int32_t q = *reinterpret_cast<const int32_t*>(arg0 + 28); EnqReq(q, static_cast<void*>(o)); uint32_t ev = *reinterpret_cast<const uint32_t*>(arg0 + 68); EvtSignal(ev); CsLeave(cs34); if (wev != 0u) { EvtWait(wev); EvtClear(wev); CsEnter(cs40); *(arg0 + 48) = 0; CsLeave(cs40); } uint32_t n = 0u; int32_t r = 0; while (true) { r = PollDataFin(arg0, key); if (r != 0) { break; } ThrYield(); n = n + 1u; if (n > 2147483645u) { return 0; } } return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033FE48
void CsEnter(uint32_t);
void CsLeave(uint32_t);
void MemClr(void*, uint32_t);
void InitSyncBuf(void*);
int32_t EnqReq(int32_t, void*);
void EvtSignal(uint32_t);
void EvtWait(uint32_t);
void EvtClear(uint32_t);
void ThrYield(void);
int32_t PollBufFin(void*, uint32_t);
extern "C" int32_t YellowAuto_0033fe48(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl22fs16AsyncFileManager22SyncArcFileLoadDataBufERKNS1_21ArcFileLoadDataBufReqE");
extern "C" int32_t YellowAuto_0033fe48(uint8_t* arg0, const uint8_t* arg1) {
uint32_t rf = *reinterpret_cast<const uint32_t*>(arg1 + 12); uint32_t key = *reinterpret_cast<const uint32_t*>(arg1 + 16); uint32_t a0 = *reinterpret_cast<const uint32_t*>(arg1 + 0); uint32_t a4 = *reinterpret_cast<const uint32_t*>(arg1 + 4); uint32_t a8 = *reinterpret_cast<const uint32_t*>(arg1 + 8); uint32_t a20 = *reinterpret_cast<const uint32_t*>(arg1 + 20); uint32_t a24 = *reinterpret_cast<const uint32_t*>(arg1 + 24); uint32_t a28 = *reinterpret_cast<const uint32_t*>(arg1 + 28); uint32_t a32 = *reinterpret_cast<const uint32_t*>(arg1 + 32); uint32_t a36 = *reinterpret_cast<const uint32_t*>(arg1 + 36); uint32_t a40 = *reinterpret_cast<const uint32_t*>(arg1 + 40); uint32_t a44 = *reinterpret_cast<const uint32_t*>(arg1 + 44); uint32_t a48 = *reinterpret_cast<const uint32_t*>(arg1 + 48); uint32_t a52 = *reinterpret_cast<const uint32_t*>(arg1 + 52); uint32_t a56 = *reinterpret_cast<const uint32_t*>(arg1 + 56); uint32_t drv = rf & 255u; if (drv == 255u) { drv = static_cast<uint32_t>(*(arg0 + 24)); drv &= 255u; } uint32_t merged = (rf & 4294967040u) | drv; uint8_t buf[80]; MemClr(static_cast<void*>(buf), 80u); InitSyncBuf(static_cast<void*>(buf)); uint8_t* o = buf; *reinterpret_cast<uint32_t*>(o + 16) = a0; *reinterpret_cast<uint32_t*>(o + 20) = a4; *reinterpret_cast<uint32_t*>(o + 24) = a8; *reinterpret_cast<uint32_t*>(o + 28) = merged; *reinterpret_cast<uint32_t*>(o + 32) = key; *reinterpret_cast<uint32_t*>(o + 36) = a20; *reinterpret_cast<uint32_t*>(o + 40) = a24; *reinterpret_cast<uint32_t*>(o + 44) = a28; *reinterpret_cast<uint32_t*>(o + 48) = a32; *reinterpret_cast<uint32_t*>(o + 52) = a36; *reinterpret_cast<uint32_t*>(o + 56) = a40; *reinterpret_cast<uint32_t*>(o + 60) = a44; *reinterpret_cast<uint32_t*>(o + 64) = a48; *reinterpret_cast<uint32_t*>(o + 68) = a52; *reinterpret_cast<uint32_t*>(o + 72) = a56; *reinterpret_cast<uint32_t*>(o + 12) = ((merged >> 8) & 255u) + 64u; uint32_t cs40 = *reinterpret_cast<const uint32_t*>(arg0 + 64); CsEnter(cs40); uint8_t fl = *(arg0 + 48); uint32_t wev = 0u; if (fl == 0u) { *(arg0 + 48) = 1; wev = *reinterpret_cast<const uint32_t*>(arg0 + 76); *reinterpret_cast<uint32_t*>(o + 72) = wev; } CsLeave(cs40); uint32_t cs34 = *reinterpret_cast<const uint32_t*>(arg0 + 52); CsEnter(cs34); int32_t q = *reinterpret_cast<const int32_t*>(arg0 + 28); EnqReq(q, static_cast<void*>(o)); uint32_t ev = *reinterpret_cast<const uint32_t*>(arg0 + 68); EvtSignal(ev); CsLeave(cs34); if (wev != 0u) { EvtWait(wev); EvtClear(wev); CsEnter(cs40); *(arg0 + 48) = 0; CsLeave(cs40); } uint32_t n = 0u; int32_t r = 0; while (true) { r = PollBufFin(arg0, key); if (r != 0) { break; } ThrYield(); n = n + 1u; if (n > 2147483645u) { return 0; } } return r;
}
#endif
