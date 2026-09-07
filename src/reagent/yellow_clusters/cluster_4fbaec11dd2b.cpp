// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F3B58
extern "C" void YellowAuto_003f3b58(uint8_t* arg0) __asm__("_ZN7GameSys8GameProcC1Ev");
extern "C" void YellowAuto_003f3b58(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x0) = *(uint32_t*)0x003F3B84; *(uint32_t*)(arg0 + 0x4) = 0; *(uint8_t*)(arg0 + 0x8) = 0; *(uint32_t*)(arg0 + 0xC) = 0; *(uint32_t*)(arg0 + 0x10) = 0; *(uint32_t*)(arg0 + 0x14) = 0; *(uint32_t*)(arg0 + 0x18) = 0; *(uint32_t*)(arg0 + 0x1C) = 0;
}
#endif
