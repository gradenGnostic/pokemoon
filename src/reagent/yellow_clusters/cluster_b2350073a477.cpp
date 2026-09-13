// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7BE4
extern "C" bool YellowAuto_004a7be4(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata4Misc17IsEventFirstCheckEj");
extern "C" bool YellowAuto_004a7be4(const uint8_t* arg0, uint32_t arg1) {
return arg0[arg1 + 0x10] != 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00441988
extern uint32_t DAT_004419a0;
extern "C" uint32_t YellowAuto_00441988(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata4Misc7SetGoldEj");
extern "C" uint32_t YellowAuto_00441988(uint8_t* arg0, uint32_t arg1) {
if (DAT_004419a0 < arg1) arg1 = DAT_004419a0; *(uint32_t*)(arg0 + 8) = arg1; return arg1;
}
#endif
