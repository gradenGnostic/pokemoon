// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035EB28
extern "C" void YellowAuto_0035eb28(uint8_t* arg0) __asm__("_ZN4gfl26system4DateC1Ev");
extern "C" void YellowAuto_0035eb28(uint8_t* arg0) {
*(uint32_t*)arg0 = 0;
*(uint32_t*)(arg0 + 4) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035E92C
void FUN_004782b0(uint8_t*, const uint8_t*, int32_t);
extern "C" void YellowAuto_0035e92c(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl26system4Date6SetDayEi");
extern "C" void YellowAuto_0035e92c(uint8_t* arg0, int32_t arg1) {
uint32_t tmp[2]; FUN_004782b0((uint8_t*)tmp, arg0, arg1); ((uint32_t*)arg0)[0] = tmp[0]; ((uint32_t*)arg0)[1] = tmp[1];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035E9F8
void FUN_004784a0(uint8_t*, const uint8_t*, int32_t);
extern "C" void YellowAuto_0035e9f8(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl26system4Date7SetYearEi");
extern "C" void YellowAuto_0035e9f8(uint8_t* arg0, int32_t arg1) {
uint32_t tmp[2]; FUN_004784a0((uint8_t*)tmp, arg0, arg1); ((uint32_t*)arg0)[0] = tmp[0]; ((uint32_t*)arg0)[1] = tmp[1];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035EA24
void FUN_004785cc(uint8_t*, const uint8_t*, int32_t);
extern "C" void YellowAuto_0035ea24(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl26system4Date8SetMonthEi");
extern "C" void YellowAuto_0035ea24(uint8_t* arg0, int32_t arg1) {
uint32_t tmp[2]; FUN_004785cc((uint8_t*)tmp, arg0, arg1); ((uint32_t*)arg0)[0] = tmp[0]; ((uint32_t*)arg0)[1] = tmp[1];
}
#endif
