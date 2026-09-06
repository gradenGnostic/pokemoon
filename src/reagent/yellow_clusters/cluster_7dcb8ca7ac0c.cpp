// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E65D0
extern "C" void YellowAuto_002e65d0(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, bool arg4) __asm__("_ZN3App9FieldMenu8PlayData15SetRotomMessageENS1_13RotomMsgIndexEjjb");
extern "C" void YellowAuto_002e65d0(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, bool arg4) {
uint32_t* data = reinterpret_cast<uint32_t*>(arg0 + arg1 * 8 + 8);
uint32_t cur = data[0];
if ((cur & 0x7FFFFFFFU) != arg2) {
uint32_t tmp = (cur & 0x80000000U) | (arg2 & 0x7FFFFFFFU);
data[0] = tmp;
data[1] = arg3;
if (arg4) tmp |= 0x80000000U;
else tmp &= 0x7FFFFFFFU;
data[0] = tmp;
}
}
#endif
