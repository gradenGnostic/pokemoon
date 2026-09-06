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
