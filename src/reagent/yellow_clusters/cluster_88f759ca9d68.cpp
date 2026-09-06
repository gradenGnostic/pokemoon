// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038E868
uint8_t* GameEvent(uint8_t* arg0, void* arg1);
extern "C" void YellowAuto_0038e868(uint8_t* arg0, void* arg1) __asm__("_ZN5Field17EventRizaadonRideC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0038e868(uint8_t* arg0, void* arg1) {
GameEvent(arg0, arg1);
*(uint32_t *)(arg0 + 0x0) = *(uint32_t *)0x0038e8e4;
*(uint32_t *)(arg0 + 0x18) = *(uint32_t *)0x0038e8e4 + 0x28;
*(uint32_t *)(arg0 + 0x1c) = 0;
*(int32_t *)(arg0 + 0x20) = -1;
*(uint16_t *)(arg0 + 0x24) = 0xffff;
*(uint16_t *)(arg0 + 0x26) = 0xffff;
*(uint16_t *)(arg0 + 0x28) = 0xffff;
*(uint16_t *)(arg0 + 0x2a) = 0xffff;
*(uint16_t *)(arg0 + 0x2c) = 0xffff;
*(uint16_t *)(arg0 + 0x2e) = 0xffff;
*(uint16_t *)(arg0 + 0x30) = 0xffff;
*(uint16_t *)(arg0 + 0x32) = 0xffff;
*(uint16_t *)(arg0 + 0x34) = 0xffff;
*(uint16_t *)(arg0 + 0x36) = 0xffff;
*(uint16_t *)(arg0 + 0x38) = 0xffff;
*(uint16_t *)(arg0 + 0x3a) = 0xffff;
*(uint16_t *)(arg0 + 0x3c) = 0xffff;
*(uint16_t *)(arg0 + 0x3e) = 0xffff;
*(uint16_t *)(arg0 + 0x40) = 0xffff;
*(uint16_t *)(arg0 + 0x42) = 0xffff;
*(uint16_t *)(arg0 + 0x44) = 0xffff;
*(uint16_t *)(arg0 + 0x46) = 0xffff;
*(uint16_t *)(arg0 + 0x48) = 0xffff;
*(uint8_t *)(arg0 + 0x4a) = 0;
*(uint8_t *)(arg0 + 0x4b) = 0;
*(uint32_t *)(arg0 + 0x58) = 0;
}
#endif
