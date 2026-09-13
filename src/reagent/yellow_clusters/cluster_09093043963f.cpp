// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6668
extern "C" uint32_t YellowAuto_002e6668(void* arg0) __asm__("_ZN3App9FieldMenu8PlayData23GetEnableRottomMsgIndexEv");
extern "C" uint32_t YellowAuto_002e6668(void* arg0) {
if ((~*(const uint32_t*)((const uint8_t*)arg0 + 8) & 0x7fffffff) != 0) return 0;
if ((~*(const uint32_t*)((const uint8_t*)arg0 + 0x10) & 0x7fffffff) != 0) return 1;
if ((~*(const uint32_t*)((const uint8_t*)arg0 + 0x18) & 0x7fffffff) != 0) return 2;
if ((~*(const uint32_t*)((const uint8_t*)arg0 + 0x20) & 0x7fffffff) != 0) return 3;
return 4;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6644
extern "C" void YellowAuto_002e6644(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App9FieldMenu8PlayData16SetRideCursorPosEj");
extern "C" void YellowAuto_002e6644(uint8_t* arg0, uint32_t arg1) {
arg0[6] = (uint8_t)arg1;
}
#endif
