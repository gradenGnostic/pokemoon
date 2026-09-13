// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CF644
uint32_t CreateHeap(void*, int32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_002cf644(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN3App4Tool15PokeIconTexPoolC1EPN4gfl24heap11CtrHeapBaseEPNS2_2fs16AsyncFileManagerE");
extern "C" uint8_t* YellowAuto_002cf644(uint8_t* arg0, void* arg1, void* arg2) {
*(uint32_t*)arg0 = *(const uint32_t*)0x002cf6f4; *(uint8_t*)(arg0 + 4) = 0; *(uint8_t*)(arg0 + 6) = 0; *(uint32_t*)(arg0 + 0x14) = 0xffffffffu; *(uint8_t*)(arg0 + 5) = 0; *(uint8_t*)(arg0 + 7) = 0; *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 0x10) = 0; *(uint32_t*)(arg0 + 0xc) = 0; *(uint32_t*)(arg0 + 0x14) = 0x3eu; *(uint32_t*)(arg0 + 8) = CreateHeap(arg1, -2, *(const uint32_t*)0x002cf6f8, 0, 0); *(uint32_t*)(arg0 + 0xc) = (uint32_t)arg2; return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CF304
uint32_t HeapVirt34(void* arg0);
void AddArcFileCloseReq(void* arg0, void* arg1);
int32_t IsArcFileCloseFinished(void* arg0, int32_t arg1);
void GflHeapFreeMemoryBlock(void* arg0);
extern "C" bool YellowAuto_002cf304(uint8_t* arg0) __asm__("_ZN3App4Tool15PokeIconTexPool7EndFuncEv");
extern "C" bool YellowAuto_002cf304(uint8_t* arg0) {
uint8_t cur = *(arg0 + 6);
if (cur == 0) {
void* heap = (void*)(*(uint32_t*)(arg0 + 8));
void* mgr = (void*)(*(uint32_t*)(arg0 + 12));
int32_t arc = *(int32_t*)(arg0 + 20);
uint32_t hv = HeapVirt34(heap);
uint8_t req[32];
*(int32_t*)(req + 0) = 0;
*(int32_t*)(req + 4) = arc;
*(req + 8) = (uint8_t)16;
*(uint32_t*)(req + 12) = hv;
*(req + 16) = (uint8_t)1;
*(int32_t*)(req + 20) = 0;
*(int32_t*)(req + 24) = 0;
AddArcFileCloseReq(mgr, (void*)req);
*(arg0 + 6) = (uint8_t)(cur + 1);
cur = *(arg0 + 6);
}
if (cur == 1) {
void* mgr2 = (void*)(*(uint32_t*)(arg0 + 12));
int32_t arc2 = *(int32_t*)(arg0 + 20);
if (IsArcFileCloseFinished(mgr2, arc2) != 0) {
*(arg0 + 6) = (uint8_t)(cur + 1);
}
cur = *(arg0 + 6);
}
if (cur == 2) {
uint32_t buf = *(uint32_t*)(arg0 + 16);
if (buf != 0) {
GflHeapFreeMemoryBlock((void*)buf);
*(uint32_t*)(arg0 + 16) = 0;
}
cur = (uint8_t)(*(arg0 + 6) + 1);
*(arg0 + 6) = cur;
}
if (cur == 3) {
*(arg0 + 7) = (uint8_t)1;
*(arg0 + 5) = (uint8_t)0;
}
return cur == 3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CF3F8
uint32_t HeapVirt34(void* arg0);
void AddArcFileOpenReq(void* arg0, void* arg1);
int32_t IsArcFileOpenFinished(void* arg0, int32_t arg1);
int32_t GetArcFile(void* arg0, int32_t arg1);
void GetOffsetFromArchiveTop(void* arg0, int32_t arg1, uint32_t* arg2, uint32_t arg3);
void GetDataSize(void* arg0, int32_t arg1, uint32_t* arg2, uint32_t arg3);
void* GflHeapAllocMemoryBlockAlign(void* arg0, uint32_t arg1, uint32_t arg2);
void AddArcFileLoadDataPieceBufReq(void* arg0, void* arg1);
int32_t IsArcFileLoadDataPieceBufFinished(void* arg0, void* arg1);
extern "C" bool YellowAuto_002cf3f8(uint8_t* arg0) __asm__("_ZN3App4Tool15PokeIconTexPool8InitFuncEv");
extern "C" bool YellowAuto_002cf3f8(uint8_t* arg0) {
uint8_t cur = *(arg0 + 4);
if (cur == 0) {
void* heap = (void*)(*(uint32_t*)(arg0 + 8));
void* mgr = (void*)(*(uint32_t*)(arg0 + 12));
int32_t arc = *(int32_t*)(arg0 + 20);
uint32_t hv = HeapVirt34(heap);
uint8_t req[48];
*(int32_t*)(req + 0) = 0;
*(int32_t*)(req + 4) = arc;
*(req + 8) = (uint8_t)16;
*(uint32_t*)(req + 12) = (uint32_t)heap;
*(req + 16) = (uint8_t)255;
*(uint32_t*)(req + 20) = hv;
AddArcFileOpenReq(mgr, (void*)req);
*(arg0 + 4) = (uint8_t)(cur + 1);
cur = *(arg0 + 4);
}
if (cur == 1) {
void* mgr2 = (void*)(*(uint32_t*)(arg0 + 12));
int32_t arc2 = *(int32_t*)(arg0 + 20);
if (IsArcFileOpenFinished(mgr2, arc2) != 0) {
*(arg0 + 4) = (uint8_t)(cur + 1);
}
cur = *(arg0 + 4);
}
if (cur == 2) {
void* mgr3 = (void*)(*(uint32_t*)(arg0 + 12));
int32_t arc3 = *(int32_t*)(arg0 + 20);
void* heap3 = (void*)(*(uint32_t*)(arg0 + 8));
int32_t h = GetArcFile(mgr3, arc3);
uint8_t arcObj[16];
uint32_t off0 = 0;
uint32_t off1 = 0;
uint32_t sz = 0;
uint32_t endIdx = *(uint32_t*)0x002CF640;
GetOffsetFromArchiveTop((void*)arcObj, h, (uint32_t*)&off0, 0);
GetOffsetFromArchiveTop((void*)arcObj, h, (uint32_t*)&off1, endIdx);
uint32_t hv2 = HeapVirt34(heap3);
(void)hv2;
GetDataSize((void*)arcObj, h, (uint32_t*)&sz, endIdx);
uint32_t total = (off1 + sz) - off0;
void* mem = GflHeapAllocMemoryBlockAlign(heap3, total, 128);
*(uint32_t*)(arg0 + 16) = (uint32_t)mem;
uint8_t req2[48];
*(int32_t*)(req2 + 0) = 0;
AddArcFileLoadDataPieceBufReq(mgr3, (void*)req2);
cur = (uint8_t)(*(arg0 + 4) + 1);
*(arg0 + 4) = cur;
}
if (cur == 3) {
void* mgr4 = (void*)(*(uint32_t*)(arg0 + 12));
void* buf = (void*)(*(uint32_t*)(arg0 + 16));
if (IsArcFileLoadDataPieceBufFinished(mgr4, buf) != 0) {
*(arg0 + 4) = (uint8_t)(cur + 1);
}
}
if (*(arg0 + 4) == 4) {
*(arg0 + 5) = (uint8_t)1;
}
return *(arg0 + 4) == 4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CF158
uint32_t GetResourceIndex(const void* arg0, bool arg1);
int32_t GetArcFile(void* arg0, int32_t arg1);
void GetOffsetFromArchiveTop(void* arg0, int32_t arg1, uint32_t* arg2, uint32_t arg3);
void GetRealDataSize(void* arg0, int32_t arg1, uint32_t* arg2, uint32_t arg3);
uint32_t GetUncompressedSize(void* arg0);
int32_t SecureUncompress(void* arg0, uint32_t arg1, void* arg2, void* arg3);
extern "C" bool YellowAuto_002cf158(uint8_t* arg0, uint8_t* arg1, void* arg2, const uint8_t* arg3, bool arg4) __asm__("_ZN3App4Tool15PokeIconTexPool14CreatePokeDataEPNS0_15PokeIconTexDataEPN4gfl24heap11CtrHeapBaseERKN8PokeTool11SimpleParamEb");
extern "C" bool YellowAuto_002cf158(uint8_t* arg0, uint8_t* arg1, void* arg2, const uint8_t* arg3, bool arg4) {
if (arg1 == (uint8_t*)0) {
return false;
}
int32_t slot0 = *(int32_t*)(arg1 + 68);
void* dst0 = (void*)(*(uint32_t*)(arg1 + slot0 * 32 + 24));
if (dst0 == (void*)0) {
return false;
}
if (arg2 == (void*)0) {
return false;
}
if (*(arg0 + 5) == (uint8_t)0) {
return false;
}
uint32_t ridx = GetResourceIndex((const void*)arg3, arg4);
void* mgr = (void*)(*(uint32_t*)(arg0 + 12));
int32_t arc = *(int32_t*)(arg0 + 20);
uint32_t base = *(uint32_t*)(arg0 + 16);
int32_t h = GetArcFile(mgr, arc);
uint8_t arcObj[16];
uint32_t off0 = 0;
uint32_t off1 = 0;
uint32_t realSize = 0;
GetOffsetFromArchiveTop((void*)arcObj, h, (uint32_t*)&off0, 0);
GetOffsetFromArchiveTop((void*)arcObj, h, (uint32_t*)&off1, ridx);
uint32_t diff = off1 - off0;
GetRealDataSize((void*)arcObj, h, (uint32_t*)&realSize, ridx);
void* src = (void*)(base + diff);
uint32_t uncomp = GetUncompressedSize(src);
int32_t slot = *(int32_t*)(arg1 + 68);
void* dst = (void*)(*(uint32_t*)(arg1 + slot * 32 + 24));
int32_t rc = SecureUncompress(src, realSize, dst, arg2);
if (rc != 0) {
return false;
}
*(uint32_t*)(arg1 + slot * 32 + 28) = uncomp;
return true;
}
#endif
