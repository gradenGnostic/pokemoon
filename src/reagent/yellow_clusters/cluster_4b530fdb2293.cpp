// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B2E4
extern const uint8_t DAT_0045b2f0[];
extern "C" const uint8_t* YellowAuto_0045b2e4() __asm__("_ZN9NetAppLib4Util11BossUtility25GetFreeRagulationFileNameEv");
extern "C" const uint8_t* YellowAuto_0045b2e4() {
return *(const uint8_t **)(DAT_0045b2f0 + 8);
}
#endif
