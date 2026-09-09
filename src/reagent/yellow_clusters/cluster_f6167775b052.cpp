// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E65B8
void FUN_00108a0c(uint8_t*, void*);
extern "C" void YellowAuto_002e65b8(uint8_t* arg0, void* arg1) __asm__("_ZN3App9FieldMenu8PlayData12SetRideParamEPNS0_10RIDE_PARAME");
extern "C" void YellowAuto_002e65b8(uint8_t* arg0, void* arg1) {
FUN_00108a0c(arg0 + 0x2A, arg1);
}
#endif
