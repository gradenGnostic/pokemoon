// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305698
extern "C" void YellowAuto_00305698(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool9ScrollBar11SetMarkSizeEf");
extern "C" void YellowAuto_00305698(uint8_t* arg0, uint32_t arg1) {
*(float *)(arg0 + 0x0c) = (*(float *)&arg1 == 0.0f) ? *(float *)(arg0 + 0x2c) : (float)(((uint32_t)(*(float *)(arg0 + 0x2c) / *(float *)&arg1) < 0x14) ? 0x14 : (uint32_t)(*(float *)(arg0 + 0x2c) / *(float *)&arg1)); *(uint8_t *)(arg0 + 0x31) = 1;
}
#endif
