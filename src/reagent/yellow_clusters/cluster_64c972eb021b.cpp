// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF5EC
extern "C" void YellowAuto_003df5ec(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager5ClearEv");
extern "C" void YellowAuto_003df5ec(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x8) = 0;
*(uint32_t*)(arg0 + 0xC) = 0;
*(arg0 + 0x4) = 0;
*(arg0 + 0x2C) = 0;
*(arg0 + 0x2D) = 0;
*(arg0 + 0x2E) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF358
extern "C" void YellowAuto_003df358(uint8_t* arg0, void* arg1) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager14RegistListenerEPNS0_24NijiNetworkErrorListenerE");
extern "C" void YellowAuto_003df358(uint8_t* arg0, void* arg1) {
uint32_t v0 = *(uint32_t*)(arg0 + 0x1C);
uint32_t v1 = *(uint32_t*)(arg0 + 0x20);
void* v2 = *(void**)(arg0 + 0x14);
uint8_t* v3 = *(uint8_t**)(arg0 + 0x18);
uint8_t* v4 = (uint8_t*)0;
if (v0 != 0) {
  uint32_t v5 = v1;
  uint32_t v6 = 0;
  while (v6 < v0) {
    if (*(v3 + v5 * 0x10 + 0xC) == 0) {
      uint32_t v7 = v5 + 1;
      if (v7 >= v0) { v7 = 0; }
      *(uint32_t*)(arg0 + 0x20) = v7;
      v4 = v3 + v5 * 0x10;
      break;
    }
    v5 = v5 + 1;
    if (v5 >= v0) { v5 = 0; }
    v6 = v6 + 1;
  }
}
*(v4 + 0xC) = 1;
*(void**)(v4 + 0x8) = arg1;
*(void**)(v4 + 0x4) = v2;
void* v8 = *(void**)v2;
*(void**)v4 = v8;
*(void**)((uint8_t*)v8 + 0x4) = v4;
*(void**)v2 = v4;
*(uint32_t*)(arg0 + 0x24) = *(uint32_t*)(arg0 + 0x24) + 1;
}
#endif
