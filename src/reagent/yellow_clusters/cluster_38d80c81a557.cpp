// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F3B30
extern "C" uint32_t YellowAuto_003f3b30(uint8_t* arg0) __asm__("_ZN7GameSys8GameProc14GetGameManagerEv");
extern "C" uint32_t YellowAuto_003f3b30(uint8_t* arg0) {
return *(uint32_t *)(*(uint32_t *)(arg0 + 0x1c) + 0x14);
}
#endif
