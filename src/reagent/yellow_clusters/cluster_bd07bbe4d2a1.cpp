// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00383428
extern "C" bool YellowAuto_00383428(const uint8_t* arg0) __asm__("_ZN5Field11FieldScript4Work17IsTargetObjidNoneEv");
extern "C" bool YellowAuto_00383428(const uint8_t* arg0) {
return *(const uint32_t*)(arg0 + 0xb0) == 0xffffffffu;
}
#endif
