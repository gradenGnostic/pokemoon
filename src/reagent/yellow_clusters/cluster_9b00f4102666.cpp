// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E81EC
uint32_t FUN_003e90d8(uint32_t);
extern "C" void YellowAuto_003e81ec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6System6Camera19CModelViewerInFrame12SetCameraYawEf");
extern "C" void YellowAuto_003e81ec(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(arg0 + 0x28) = FUN_003e90d8(arg1);
}
#endif
