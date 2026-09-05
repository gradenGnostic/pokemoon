// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B014
uint8_t* NetApplicationViewBase(uint8_t* arg0, void* arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, void* arg5, void* arg6, uint32_t arg7);
void StartAnime(void* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4);
extern "C" uint8_t* YellowAuto_0045b014(uint8_t* arg0, void* arg1, int32_t arg2, void* arg3) __asm__("_ZN9NetAppLib2UI25NetAppRegulationUpperViewC1EPNS_6System19ApplicationWorkBaseEiPNS_7Message14MessageUtilityE");
extern "C" uint8_t* YellowAuto_0045b014(uint8_t* arg0, void* arg1, int32_t arg2, void* arg3) {
arg0 = NetApplicationViewBase(arg0, arg1, arg2, 0x45u, 1u, (void*)0, arg3, 0x4fu);
*(uint32_t*)arg0 = 0x0045b08cu;
*(uint32_t*)(arg0 + 0xa0) = *(uint32_t*)((uint8_t*)arg1 + 8);
*(uint32_t*)(arg0 + 0xa4) = *(uint32_t*)((uint8_t*)arg1 + 0x2c);
*(uint32_t*)(arg0 + 0xa8) = (uint32_t)arg3;
*(uint32_t*)(arg0 + 0xac) = 0u;
StartAnime((void*)(uint32_t)*(uint32_t*)(arg0 + 0x60), 0, 0, 1, 1);
return arg0;
}
#endif
