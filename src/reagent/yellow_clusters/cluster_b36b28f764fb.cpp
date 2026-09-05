// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2ABC
extern "C" bool YellowAuto_004a2abc(const uint8_t* arg0) __asm__("_ZNK6NetApp9Evolution9APP_PARAM14IsForgetCancelEv");
extern "C" bool YellowAuto_004a2abc(const uint8_t* arg0) {
return (*(uint16_t *)(arg0 + 0x20) == 0) && (*(uint16_t *)(arg0 + 0x28) != 0);
}
#endif
