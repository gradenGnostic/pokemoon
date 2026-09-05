// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FC4D4
void func_003FC4D4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5);
extern "C" void YellowAuto_003fc4d4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5) __asm__("_ZN7gflnet23nex18NexMatchMakingRuleC1EjjjjNS1_10VALUE_TYPEE");
extern "C" void YellowAuto_003fc4d4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint8_t arg5) {
*(uint32_t*)(arg0 + 0x14) = 0;
*(uint32_t*)(arg0 + 0x18) = 0;
*(uint32_t*)(arg0 + 0x00) = arg1;
*(uint32_t*)(arg0 + 0x04) = arg2;
*(uint32_t*)(arg0 + 0x08) = arg3;
*(uint32_t*)(arg0 + 0x0C) = arg4;
*(uint8_t*)(arg0 + 0x10) = arg5;
}
#endif
