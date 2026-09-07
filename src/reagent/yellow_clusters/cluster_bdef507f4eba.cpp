// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049F05C
bool CheckEventFlag(const uint8_t* arg0, uint16_t arg1);
extern "C" bool YellowAuto_0049f05c(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK5Field9EventWork14CheckEventFlagEt");
extern "C" bool YellowAuto_0049f05c(const uint8_t* arg0, uint16_t arg1) {
const uint8_t* arg0_;
if (arg1 == 0) return false;
if (arg1 < 0x3000) goto LAB_low;
if ((uint16_t)(arg1 - 0x3000) >= 0x40) return false;
arg0_ = *(const uint8_t**)(0x0049f0f0 + (((int32_t)((uint16_t)(arg1 - 0x3000)) + ((uint32_t)((int32_t)(uint16_t)(arg1 - 0x3000) >> 31) >> 29)) >> 3));
return arg0_ != 0 && ((*arg0_ & (uint8_t)(1u << (arg1 & 7))) != 0);
LAB_low:
if (arg1 >= 0x0f80) return false;
arg0_ = arg0 + 0x7d4 + (arg1 >> 3);
return arg0_ != 0 && ((*arg0_ & (uint8_t)(1u << (arg1 & 7))) != 0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A410
extern "C" bool YellowAuto_0039a410(uint8_t* arg0) __asm__("_ZN5Field9EventWork17DecMushiyokeCountEv");
extern "C" bool YellowAuto_0039a410(uint8_t* arg0) {
if (*(uint16_t*)(arg0 + 0x9E0) == 0) return false; *(uint16_t*)(arg0 + 0x9E0) = (uint16_t)(*(uint16_t*)(arg0 + 0x9E0) - 1); return *(uint16_t*)(arg0 + 0x9E0) == 0;
}
#endif
