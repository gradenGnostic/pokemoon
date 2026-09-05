// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2E50
extern "C" uint32_t YellowAuto_004a2e50(const uint8_t* arg0) __asm__("_ZNK6System10MotionBlur16IsEndColorFilterEv");
extern "C" uint32_t YellowAuto_004a2e50(const uint8_t* arg0) {
if (arg0[0xc1] == 0 || *(const int32_t*)(arg0 + 0x148) <= *(const int32_t*)(arg0 + 0x164)) return 1; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2E78
extern "C" uint32_t YellowAuto_004a2e78(const uint8_t* arg0) __asm__("_ZNK6System10MotionBlur17IsEndBlendControlEv");
extern "C" uint32_t YellowAuto_004a2e78(const uint8_t* arg0) {
if (arg0[0xc1] == 0 || *(const int32_t*)(arg0 + 0x128) <= *(const int32_t*)(arg0 + 0x134)) return 1; return 0;
}
#endif
