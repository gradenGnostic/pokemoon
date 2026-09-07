// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003577D8
void* memcpy(void*, const void*, uint32_t);
extern "C" void YellowAuto_003577d8(void* arg0, const void* arg1, uint32_t arg2) __asm__("_ZN4gfl24core7Utility6MemcpyEPvPKvj");
extern "C" void YellowAuto_003577d8(void* arg0, const void* arg1, uint32_t arg2) {
memcpy(arg0, arg1, arg2);
}
#endif
