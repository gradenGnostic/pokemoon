// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D4D88
extern "C" void YellowAuto_003d4d88(uint8_t* arg0, void* arg1, uint32_t arg2, uint8_t arg3) __asm__("_ZN6NetLib3P2P17P2pPacketTransfer15SendDataCommandEPvjh");
extern "C" void YellowAuto_003d4d88(uint8_t* arg0, void* arg1, uint32_t arg2, uint8_t arg3) {
if (*(arg0 + 0x824) != 0) return;
*(arg0 + 0x19) = 0;
*(arg0 + 0x1A) = 1;
*reinterpret_cast<void**>(arg0 + 0x10) = arg1;
*reinterpret_cast<uint32_t*>(arg0 + 0x14) = arg2;
*(arg0 + 0x18) = arg3;
if (arg2 > 2000) {
*reinterpret_cast<uint8_t*>(arg0 + 0x1A) = (uint8_t)(arg2 / 2000);
if ((arg2 % 2000) != 0) *(arg0 + 0x1A) = (uint8_t)(*(arg0 + 0x1A) + 1);
}
*(arg0 + 0x824) = 1;
return;
}
#endif
