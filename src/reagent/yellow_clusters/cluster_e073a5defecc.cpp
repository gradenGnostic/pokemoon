// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C458
extern "C" void YellowAuto_0045c458(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility15SetEventHandlerEjPNS1_13IEventHandlerE");
extern "C" void YellowAuto_0045c458(uint8_t* arg0, uint32_t arg1, void* arg2) {
if (*(uint32_t*)(arg0+0x10)!=0) *(void**)(*(uint8_t**)(arg0+0x10)+arg1*0x40+0x28)=arg2;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045CE34
extern "C" void YellowAuto_0045ce34(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtilityC1EPNS_6System19ApplicationWorkBaseE");
extern "C" void YellowAuto_0045ce34(uint8_t* arg0, void* arg1) {
*(uint32_t *)arg0 = *(uint32_t *)0x45CE8Cu;
*(uint32_t *)(arg0 + 4) = (uint32_t)arg1;
*(uint32_t *)(arg0 + 8) = 0;
*(uint32_t *)(arg0 + 12) = 0;
*(uint32_t *)(arg0 + 16) = 0;
*(arg0 + 20) = 0;
*(uint32_t *)(arg0 + 24) = 0;
*(arg0 + 28) = 0;
*(arg0 + 32) = 4;
*(arg0 + 33) = 0;
*(arg0 + 34) = 0;
*(arg0 + 35) = 1;
*(uint32_t *)(arg0 + 36) = 0;
*(arg0 + 40) = 0;
*(uint32_t *)(arg0 + 44) = 0;
*(uint32_t *)(arg0 + 48) = 0;
*(uint32_t *)(arg0 + 52) = 0;
}
#endif
