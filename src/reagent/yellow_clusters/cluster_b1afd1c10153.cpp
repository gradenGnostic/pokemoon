// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004433C0
uint8_t* FUN_00442f5c(uint8_t* arg0, uint32_t arg1, int32_t arg2);
extern "C" uint32_t YellowAuto_004433c0(uint8_t* arg0, uint32_t arg1, int32_t arg2) __asm__("_ZN8Savedata7Fashion5IsNewEji");
extern "C" uint32_t YellowAuto_004433c0(uint8_t* arg0, uint32_t arg1, int32_t arg2) {
uint8_t* e = FUN_00442f5c(arg0, arg1, arg2);
if (e == 0) return 0;
return (uint32_t)((*e & 2) >> 1);
}
#endif
