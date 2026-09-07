// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045ECB8
extern "C" void YellowAuto_0045ecb8(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib6System15NetAppFrameBase9exitFrameEi");
extern "C" void YellowAuto_0045ecb8(uint8_t* arg0, int32_t arg1) {
(*(void (**)(uint8_t *))(*(uint32_t *)arg0 + 0x34))(arg0); *(uint32_t *)(*(uint32_t *)(arg0 + 0x18) + 0x20) = (uint32_t)arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045ECE0
bool IsWLANSwitchEnable();
extern "C" uint8_t* YellowAuto_0045ece0(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib6System15NetAppFrameBaseC1EPNS0_19ApplicationWorkBaseE");
extern "C" uint8_t* YellowAuto_0045ece0(uint8_t* arg0, void* arg1) {
*(uint32_t*)(arg0 + 4) = 0;
arg0[8] = 0;
*(void**)(arg0 + 24) = arg1;
arg0[28] = 0;
arg0[29] = 0;
arg0[30] = 0;
arg0[31] = !IsWLANSwitchEnable();
arg0[32] = 0;
return arg0;
}
#endif
