// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041E894
extern "C" void YellowAuto_0041e894(uint8_t* arg0) __asm__("_ZN7trainer15TrainerTypeDataC1Ev");
extern "C" void YellowAuto_0041e894(uint8_t* arg0) {
*((uint32_t*)arg0) = 4294967295U;
*((uint32_t*)(arg0 + 4)) = 0U;
*((uint32_t*)(arg0 + 8)) = 0U;
*((uint32_t*)(arg0 + 12)) = 0U;
*((uint32_t*)(arg0 + 16)) = 0U;
*((uint32_t*)(arg0 + 20)) = 0U;
}
#endif
