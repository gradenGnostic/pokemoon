// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB6FC
extern "C" void YellowAuto_002fb6fc(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN3app4tool23AppToolGaugePartsLayout9SetNumberEii");
extern "C" void YellowAuto_002fb6fc(uint8_t* arg0, int32_t arg1, int32_t arg2) {
((void (*)(uint8_t*, float, int32_t))*(uint32_t*)(*(uint32_t*)arg0 + 8U))(arg0, (float)arg1, arg2);
*(uint8_t*)(*(uint32_t*)(arg0 + 24U) + 12U) = 0;
*(uint8_t*)(*(uint32_t*)(arg0 + 24U) + 13U) = 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB6A0
void helper_002fc970(uint8_t*);
extern "C" void YellowAuto_002fb6a0(uint8_t* arg0) __asm__("_ZN3app4tool23AppToolGaugePartsLayout6UpdateEv");
extern "C" void YellowAuto_002fb6a0(uint8_t* arg0) {
helper_002fc970(*(uint8_t**)(arg0 + 24U));
if (*(uint8_t*)(*(uint32_t*)(arg0 + 24U) + 13U) == 1U) {
((void (*)(uint8_t*, float, int32_t))*(uint32_t*)(*(uint32_t*)arg0 + 8U))(arg0, *(float*)(*(uint32_t*)(arg0 + 24U)), *(int32_t*)(*(uint32_t*)(arg0 + 24U) + 8U));
if (*(uint8_t*)(*(uint32_t*)(arg0 + 24U) + 12U) != 0U) {
*(uint8_t*)(*(uint32_t*)(arg0 + 24U) + 12U) = 0;
*(uint8_t*)(*(uint32_t*)(arg0 + 24U) + 13U) = 2;
}
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030FD30
extern "C" void YellowAuto_0030fd30(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool23AppToolGaugePartsLayout10SetVisibleEb");
extern "C" void YellowAuto_0030fd30(uint8_t* arg0, bool arg1) {
*(uint8_t*)(*(uint8_t**)(arg0 + 12) + 68) = (uint8_t)((*(uint8_t*)(*(uint8_t**)(arg0 + 12) + 68) & 254) | (uint8_t)arg1);
}
#endif
