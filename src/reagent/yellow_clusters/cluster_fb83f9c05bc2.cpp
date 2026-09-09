// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE594
extern "C" bool YellowAuto_002ee594(uint8_t* arg0, uint8_t arg1) __asm__("_ZN3app4tool13CursorManager6SetPosEh");
extern "C" bool YellowAuto_002ee594(uint8_t* arg0, uint8_t arg1) {
uint8_t cur = arg0[0x14]; bool changed = cur != arg1; if (changed) { arg0[0x15] = cur; arg0[0x14] = arg1; } return changed;
}
#endif
