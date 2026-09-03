// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354EB4
extern "C" void YellowAuto_00354eb4(void* arg0) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator18SetFinishMode_NoneEv");
extern "C" void YellowAuto_00354eb4(void* arg0) {
*(uint8_t *)(*(int *)(*(int *)(*(int *)(arg0 + 8) + 0x60) + 0x34) + 0x18) = 0; *(uint8_t *)(*(int *)(*(int *)(*(int *)(arg0 + 8) + 0x60) + 0x34) + 0x29) = 0; *(uint8_t *)(*(int *)(*(int *)(*(int *)(arg0 + 8) + 0x60) + 0x34) + 0x28) = 0;
}
#endif
