// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E521C
uint8_t* GLHeapAllocator(uint8_t*, void*);
void FUN_003e4fe4(void*);
extern "C" uint8_t* YellowAuto_003e521c(uint8_t* arg0, void* arg1) __asm__("_ZN6System13nijiAllocatorC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_003e521c(uint8_t* arg0, void* arg1) {
arg0 = GLHeapAllocator(arg0, arg1); *(uint32_t*)arg0 = *(uint32_t*)0x3E5250u; *(uint8_t*)(arg0 + 41) = 2; *(uint8_t*)(arg0 + 40) = 1; FUN_003e4fe4((void*)(arg0 + 8)); return arg0;
}
#endif
