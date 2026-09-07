// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F467C
extern "C" void YellowAuto_003f467c(uint8_t* arg0, void* arg1) __asm__("_ZN7GameSys9GameEventC2EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_003f467c(uint8_t* arg0, void* arg1) {
*(void**)(arg0 + 4) = nullptr; *(uint32_t*)(arg0 + 8) = 0u; *(void**)(arg0 + 12) = arg1; *(uint32_t*)(arg0 + 16) = 0u; *(void**)(arg0 + 20) = nullptr;
}
#endif
