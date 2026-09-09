// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001082D0
void FUN_001083cc(uint8_t*);
extern "C" int32_t YellowAuto_001082d0(uint8_t* arg0, bool arg1) __asm__("_ZN2nn2os10LightEvent10InitializeEb");
extern "C" int32_t YellowAuto_001082d0(uint8_t* arg0, bool arg1) {
FUN_001083cc(arg0 + 4);
int32_t v = *(int32_t*)arg0;
*(int32_t*)arg0 = arg1 ? -2 : -1;
return v;
}
#endif
