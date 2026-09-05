// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9130
void *GflHeapAllocMemoryBlockAlign(void *arg0, int32_t arg1, uint32_t arg2);
void GFLassert(void);
extern "C" void YellowAuto_002e9130(uint8_t* arg0) __asm__("_ZN3app4tool10LytTexData18AllocTextureBufferEv");
extern "C" void YellowAuto_002e9130(uint8_t* arg0) {
if (*(int32_t *)(arg0 + 0x24) != 0) *(void **)(arg0 + 0x20) = (void *)GflHeapAllocMemoryBlockAlign(*(void **)(arg0 + 0x2c), *(int32_t *)(arg0 + 0x24), *(uint32_t *)(arg0 + 0x28)); else GFLassert();
}
#endif
