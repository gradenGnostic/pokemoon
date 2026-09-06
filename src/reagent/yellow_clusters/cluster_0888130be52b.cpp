// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9D4C
uint8_t* GetPane(uint8_t*, uint32_t);
extern "C" uint8_t YellowAuto_002e9d4c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool10MenuCursor9IsVisibleEj");
extern "C" uint8_t YellowAuto_002e9d4c(uint8_t* arg0, uint32_t arg1) {
if ((*(const uint8_t*)(GetPane(*(uint8_t**)(arg0 + 0x10), *(const uint32_t*)(*(const uint8_t**)(arg0 + 0x18) + 4)) + 0x44) & 1) == 0) return 0; if ((arg1 & 1) != 0 && ((*(const uint8_t*)(GetPane(*(uint8_t**)(arg0 + 0x10), *(const uint32_t*)(*(const uint8_t**)(arg0 + 0x18) + 8)) + 0x44) & 1) == 0)) return 0; return 1;
}
#endif
