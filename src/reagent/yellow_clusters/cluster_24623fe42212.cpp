// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00396B60
void SyncArcFileOpen(void*, void*);
void SyncArcFileLoadData(void*, void*);
void SyncArcFileClose(void*, void*);
void GflHeapFreeMemoryBlock(void*);
void* memcpy(void*, const void*, uint32_t);
extern "C" void YellowAuto_00396b60(uint8_t* arg0, void* arg1, uint32_t arg2, void* arg3) __asm__("_ZN5Field7Encount11EncountUtil26SyncLoadSymbolEncountParamEPN4gfl24heap11CtrHeapBaseEPNS2_2fs16AsyncFileManagerEjPNS0_18SymbolEncountParamE");
extern "C" void YellowAuto_00396b60(uint8_t* arg0, void* arg1, uint32_t arg2, void* arg3) {
void* b = 0;
uint32_t s = 0;
uint32_t* v = *reinterpret_cast<uint32_t**>(arg0);
uint32_t h0 = reinterpret_cast<uint32_t(*)(uint8_t*)>(v[13])(arg0);
uint32_t h1 = reinterpret_cast<uint32_t(*)(uint8_t*)>(v[13])(arg0);
uint32_t h2 = reinterpret_cast<uint32_t(*)(uint8_t*)>(v[13])(arg0);
uint8_t q[48] = {0};
*reinterpret_cast<uint32_t*>(q+4) = 155;
*reinterpret_cast<uint32_t*>(q+12) = h0;
*reinterpret_cast<uint32_t*>(q+20) = h2;
*reinterpret_cast<uint32_t*>(q+36) = h1;
SyncArcFileOpen(arg1, q);
*reinterpret_cast<uint32_t*>(q+4) = 155;
*reinterpret_cast<uint32_t*>(q+8) = 1;
*reinterpret_cast<void**>(q+16) = &b;
*reinterpret_cast<uint32_t**>(q+20) = &s;
*reinterpret_cast<uint8_t**>(q+28) = arg0;
*reinterpret_cast<uint32_t*>(q+32) = 4;
SyncArcFileLoadData(arg1, q);
uint32_t n = s / 56;
uint32_t i = arg2;
if (i >= n) i = 0;
memcpy(arg3, reinterpret_cast<uint8_t*>(b) + i * 56u, 56u);
if (b != 0) GflHeapFreeMemoryBlock(b);
*reinterpret_cast<uint32_t*>(q+4) = 155;
*reinterpret_cast<uint8_t**>(q+12) = arg0;
SyncArcFileClose(arg1, q);
}
#endif
