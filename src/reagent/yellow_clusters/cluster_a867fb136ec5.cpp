// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BEACC
void FUN_003558f8(uint8_t *arg0, const uint8_t *arg1);
int32_t GetStringWidth(float arg0, int32_t arg1, int32_t *arg2, int32_t *arg3);
extern "C" bool YellowAuto_003beacc(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN5print13MessageWindow16CheckStringWidthERKN4gfl23str6StrBufE");
extern "C" bool YellowAuto_003beacc(uint8_t* arg0, const uint8_t* arg1) {
FUN_003558f8(arg0, arg1);
return (float)GetStringWidth(*(float *)(arg0 + 0xcc), *(int32_t *)(arg0 + 8), (int32_t *)(*(uint32_t *)(arg0 + 0xc8)), (int32_t *)0) <= *(float *)((*(uint32_t *)(arg0 + 4)) + 0x3c);
}
#endif
