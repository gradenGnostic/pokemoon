// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00395FC4
uint8_t* BinLinkerAccessor(uint8_t* arg0);
uint32_t CreateHeap(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
extern "C" uint8_t* YellowAuto_00395fc4(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN5Field5WorldC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_00395fc4(uint8_t* arg0, uint8_t* arg1) {
*(uint16_t*)arg0 = 0xffff;
*(uint32_t*)(arg0 + 4) = 0;
*(uint32_t*)(arg0 + 8) = 0;
*(uint32_t*)(arg0 + 12) = 0;
BinLinkerAccessor(arg0 + 0x10);
*(uint32_t*)(arg0 + 0x14) = 0;
*(uint32_t*)(arg0 + 0x18) = 0;
*(uint32_t*)(arg0 + 0x1c) = 0;
*(uint32_t*)(arg0 + 0x20) = 0;
*(uint32_t*)(arg0 + 0x24) = 0;
*(uint32_t*)(arg0 + 0x28) = 0;
*(uint32_t*)(arg0 + 0x2c) = 0;
*(uint32_t*)(arg0 + 0x30) = 0;
*(uint32_t*)(arg0 + 0x34) = 0;
*(uint32_t*)(arg0 + 0x38) = 0;
*(uint32_t*)(arg0 + 4) = CreateHeap(arg1, (int32_t)-2, 0x7000, 0, 0);
return arg0;
}
#endif
