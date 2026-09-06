// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F19C
void Delete(void*);
uint32_t CreateHeap(void*, int32_t, uint32_t, uint32_t, uint32_t);
uint32_t operator_new(uint32_t, uint32_t);
uint32_t NwAllocator(uint32_t, uint32_t);
uint32_t GLHeapAllocator(uint32_t, uint32_t);
extern "C" void YellowAuto_0030f19c(void* arg0, void* arg1, void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4util4Heap15LocalHeapCreateEPN4gfl24heap11CtrHeapBaseES5_jj");
extern "C" void YellowAuto_0030f19c(void* arg0, void* arg1, void* arg2, uint32_t arg3, uint32_t arg4) {
Delete(arg0); *(uint32_t *)(arg0 + 4) = CreateHeap(arg1, -2, arg3, 0, 0); *(uint32_t *)(arg0 + 8) = CreateHeap(arg2, -2, arg4, 0, 0); *(uint32_t *)(arg0 + 0x10) = operator_new(0xc, *(uint32_t *)(arg0 + 4)); if (*(uint32_t *)(arg0 + 0x10) != 0) *(uint32_t *)(arg0 + 0x10) = NwAllocator(*(uint32_t *)(arg0 + 0x10), *(uint32_t *)(arg0 + 4)); *(uint32_t *)(arg0 + 0x14) = operator_new(0xc, *(uint32_t *)(arg0 + 8)); if (*(uint32_t *)(arg0 + 0x14) != 0) *(uint32_t *)(arg0 + 0x14) = NwAllocator(*(uint32_t *)(arg0 + 0x14), *(uint32_t *)(arg0 + 8)); *(uint32_t *)(arg0 + 0x18) = operator_new(8, *(uint32_t *)(arg0 + 4)); if (*(uint32_t *)(arg0 + 0x18) != 0) *(uint32_t *)(arg0 + 0x18) = GLHeapAllocator(*(uint32_t *)(arg0 + 0x18), *(uint32_t *)(arg0 + 4)); *(uint32_t *)(arg0 + 0x1c) = operator_new(8, *(uint32_t *)(arg0 + 8)); if (*(uint32_t *)(arg0 + 0x1c) != 0) *(uint32_t *)(arg0 + 0x1c) = GLHeapAllocator(*(uint32_t *)(arg0 + 0x1c), *(uint32_t *)(arg0 + 8)); *(uint8_t *)(arg0 + 0x20) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F29C
void Delete(void*);
uint32_t CreateHeap(void*, int32_t, uint32_t, uint32_t, uint32_t);
uint32_t operator_new(uint32_t, uint32_t);
uint32_t NwAllocator(uint32_t, uint32_t);
uint32_t GLHeapAllocator(uint32_t, uint32_t);
extern "C" void YellowAuto_0030f29c(void* arg0, void* arg1, void* arg2, int32_t arg3, uint32_t arg4, int32_t arg5, uint32_t arg6) __asm__("_ZN3app4util4Heap6CreateEPN4gfl24heap11CtrHeapBaseES5_ijij");
extern "C" void YellowAuto_0030f29c(void* arg0, void* arg1, void* arg2, int32_t arg3, uint32_t arg4, int32_t arg5, uint32_t arg6) {
Delete(arg0); *(uint32_t *)(arg0 + 4) = CreateHeap(arg1, arg3, arg4, 0, 0); *(uint32_t *)(arg0 + 8) = CreateHeap(arg2, arg5, arg6, 0, 0); *(uint32_t *)(arg0 + 0x10) = operator_new(0xc, *(uint32_t *)(arg0 + 4)); if (*(uint32_t *)(arg0 + 0x10) != 0) *(uint32_t *)(arg0 + 0x10) = NwAllocator(*(uint32_t *)(arg0 + 0x10), *(uint32_t *)(arg0 + 4)); *(uint32_t *)(arg0 + 0x14) = operator_new(0xc, *(uint32_t *)(arg0 + 8)); if (*(uint32_t *)(arg0 + 0x14) != 0) *(uint32_t *)(arg0 + 0x14) = NwAllocator(*(uint32_t *)(arg0 + 0x14), *(uint32_t *)(arg0 + 8)); *(uint32_t *)(arg0 + 0x18) = operator_new(8, *(uint32_t *)(arg0 + 4)); if (*(uint32_t *)(arg0 + 0x18) != 0) *(uint32_t *)(arg0 + 0x18) = GLHeapAllocator(*(uint32_t *)(arg0 + 0x18), *(uint32_t *)(arg0 + 4)); *(uint32_t *)(arg0 + 0x1c) = operator_new(8, *(uint32_t *)(arg0 + 8)); if (*(uint32_t *)(arg0 + 0x1c) != 0) *(uint32_t *)(arg0 + 0x1c) = GLHeapAllocator(*(uint32_t *)(arg0 + 0x1c), *(uint32_t *)(arg0 + 8)); *(uint8_t *)(arg0 + 0x20) = 1;
}
#endif
