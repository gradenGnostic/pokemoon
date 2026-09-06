// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030DAC4
uint8_t* helper0(uint8_t* arg0, void* arg1, uint32_t arg2);
void* helper1(void* arg0, void* arg1, uint32_t arg2);
extern "C" uint8_t* YellowAuto_0030dac4(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN3app4util25AppQRTextureCreateUtilityC1EPN4gfl24heap11CtrHeapBaseEj");
extern "C" uint8_t* YellowAuto_0030dac4(uint8_t* arg0, void* arg1, uint32_t arg2) {
*(uint32_t*)arg0 = 0x0030db24;
helper0((uint8_t*)arg0 + 4, arg1, arg2);
*(uint32_t*)(arg0 + 0x20) = 0;
*(uint32_t*)(arg0 + 0x24) = 0;
*(uint16_t*)(arg0 + 0x28) = 0;
*(uint16_t*)(arg0 + 0x2a) = 0;
*(uint16_t*)(arg0 + 0x30) = 0;
*(uint16_t*)(arg0 + 0x32) = 0;
*(uint32_t*)(arg0 + 0x34) = 0;
arg0[0x38] = 0;
arg0[0x39] = 0;
*(void**)(arg0 + 0x20) = helper1(arg1, arg1, 0x11);
return arg0;
}
#endif
