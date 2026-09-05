// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E7FF8
float FUN_003e90d8(float);
extern "C" void YellowAuto_003e7ff8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6System6Camera19CModelViewerInFrame12AddCameraYawEf");
extern "C" void YellowAuto_003e7ff8(uint8_t* arg0, uint32_t arg1) {
float fVar1;
fVar1 = FUN_003e90d8(*(float *)(arg0 + 0x28) + *(float *)&arg1);
*(float *)(arg0 + 0x28) = fVar1;
return;
}
#endif
