// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B958
void __aeabi_memcpy4(void*, const void*, uint32_t);
extern "C" void YellowAuto_0043b958(uint8_t* arg0, void* arg1) __asm__("_ZN8Savedata15MysteryGiftSave10SetupCloneERNS0_9CORE_DATAE");
extern "C" void YellowAuto_0043b958(uint8_t* arg0, void* arg1) {
__aeabi_memcpy4(arg1, arg0 + 4, *(const uint32_t*)0x43B96C);
}
#endif
