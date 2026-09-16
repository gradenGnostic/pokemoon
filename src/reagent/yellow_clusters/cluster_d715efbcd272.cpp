// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001089D0
void FUN_00108898(void*, int32_t, uint32_t, int32_t);
extern "C" void YellowAuto_001089d0(void* arg0, int32_t arg1) __asm__("_ZN4gfl24heap23GflHeapAllocMemoryBlockEPNS0_11CtrHeapBaseEi");
extern "C" void YellowAuto_001089d0(void* arg0, int32_t arg1) {
FUN_00108898(arg0, arg1, ((uint32_t (*)(void*))((*(uint32_t**)arg0)[7]))(arg0), 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00358090
void* GetHeapByHeapId(int32_t);
extern "C" void YellowAuto_00358090(void* arg0) __asm__("_ZN4gfl24heap22GflHeapFreeMemoryBlockEPv");
extern "C" void YellowAuto_00358090(void* arg0) {
if (arg0 == 0) return; int32_t hid = *(int32_t*)((uint8_t*)arg0 - 32); void* heap = GetHeapByHeapId(hid); int32_t id2 = ((int32_t (*)(void*))((*(uint32_t**)heap)[8]))(heap); uint16_t off = *(uint16_t*)((uint8_t*)arg0 - 28); void* base = (uint8_t*)arg0 - off; if (id2 != hid) { void* heap2 = GetHeapByHeapId(hid); ((void (*)(void*, void*))((*(uint32_t**)heap2)[25]))(heap2, base); ((void (*)(void*))((*(uint32_t**)heap2)[21]))(heap2); } else { ((void (*)(void*))((*(uint32_t**)heap)[21]))(heap); ((void (*)(void*, void*))((*(uint32_t**)heap)[25]))(heap, base); }
}
#endif
