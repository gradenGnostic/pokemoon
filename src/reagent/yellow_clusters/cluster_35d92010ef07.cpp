// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE738
void* memset(void*, int32_t, uint32_t);
extern "C" void YellowAuto_002ee738(uint8_t* arg0, const void* arg1, uint32_t arg2, uint8_t arg3, bool arg4) __asm__("_ZN3app4tool13CursorManagerC1EPKNS1_9MOVE_DATAEjhb");
extern "C" void YellowAuto_002ee738(uint8_t* arg0, const void* arg1, uint32_t arg2, uint8_t arg3, bool arg4) {
*(uint32_t*)(arg0 + 0) = 0;
*(uint32_t*)(arg0 + 12) = 0;
*(const void**)(arg0 + 8) = arg1;
*(uint32_t*)(arg0 + 16) = arg2;
*(uint8_t*)(arg0 + 20) = arg3;
*(uint8_t*)(arg0 + 21) = arg3;
*(uint8_t*)(arg0 + 22) = 0;
*(uint8_t*)(arg0 + 23) = 3;
memset(arg0 + 24, 255, 32);
}
#endif
