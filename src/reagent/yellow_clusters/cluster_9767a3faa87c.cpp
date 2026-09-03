// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2AA0
extern "C" bool YellowAuto_004a2aa0(const uint8_t* arg0) __asm__("_ZNK6NetApp9Evolution9APP_PARAM12IsForgotWazaEv");
extern "C" bool YellowAuto_004a2aa0(const uint8_t* arg0) {
return *(uint16_t *)(arg0 + 0x20) != 0 && *(uint16_t *)(arg0 + 0x28) != 0;
}
#endif
