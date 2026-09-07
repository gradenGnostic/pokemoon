// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00442CC4
uint8_t* FUN_00442f5c(uint8_t*, uint32_t, int32_t);
extern "C" void YellowAuto_00442cc4(uint8_t* arg0, uint32_t arg1, int32_t arg2) __asm__("_ZN8Savedata7Fashion12ClearNewFlagEji");
extern "C" void YellowAuto_00442cc4(uint8_t* arg0, uint32_t arg1, int32_t arg2) {
uint8_t* p = FUN_00442f5c(arg0, arg1, arg2);
if (p != (uint8_t*)0)
*p = (uint8_t)(*p & 0xFD);
}
#endif
