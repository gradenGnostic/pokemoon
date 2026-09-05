// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036019C
uint8_t* FUN_003627dc(uint8_t*);
uint8_t* FUN_00360e40(uint8_t*);
uint8_t* FUN_0035fbe8(uint8_t*);
extern "C" uint8_t* YellowAuto_0036019c(uint8_t* arg0) __asm__("_ZN4gfl29animation15JointControllerC1Ev");
extern "C" uint8_t* YellowAuto_0036019c(uint8_t* arg0) {
*(uint32_t*)arg0 = 0; *(uint32_t*)(arg0 + 4) = 0; return FUN_0035fbe8(FUN_00360e40(FUN_003627dc(arg0 + 8) + 0x30) + 0x1c) - 0x54;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003601CC
uint8_t* FUN_0035fc00(uint8_t*);
uint8_t* FUN_00360e64(uint8_t*);
uint8_t* FUN_0036282c(uint8_t*);
extern "C" uint8_t* YellowAuto_003601cc(uint8_t* arg0) __asm__("_ZN4gfl29animation15JointControllerD1Ev");
extern "C" uint8_t* YellowAuto_003601cc(uint8_t* arg0) {
return FUN_0036282c(FUN_00360e64(FUN_0035fc00(arg0 + 0x54) - 0x1c) - 0x30) - 0x8;
}
#endif
