// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049AA94
extern "C" uint32_t YellowAuto_0049aa94(const void* arg0, int32_t arg1) __asm__("_ZNK4gfl24heap11GflHeapBase22CalcAllocateAdjustSizeEi");
extern "C" uint32_t YellowAuto_0049aa94(const void* arg0, int32_t arg1) {
return ((arg1 < 0 ? (uint32_t)(0u - (uint32_t)arg1) : (uint32_t)arg1) < 0x21u) ? 0x20u : (arg1 < 0 ? (uint32_t)(0u - (uint32_t)arg1) : (uint32_t)arg1);
}
#endif
