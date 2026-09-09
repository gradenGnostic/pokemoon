// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00105B38
uint8_t* GetThrowBuffer();
uint32_t GetThrowCode();
void ThrowTail();
extern "C" void YellowAuto_00105b38(uint32_t arg0, uint32_t arg1) __asm__("_ZN2nn3err3CTR16ThrowFatalErrAllENS_6ResultEj");
extern "C" void YellowAuto_00105b38(uint32_t arg0, uint32_t arg1) {
uint8_t* p = GetThrowBuffer();
p[1] = 0;
*(uint16_t*)(p + 2) = (uint16_t)GetThrowCode();
p[0] = 0;
*(uint32_t*)(p + 8) = arg1;
*(uint32_t*)(p + 4) = arg0;
ThrowTail();
}
#endif
