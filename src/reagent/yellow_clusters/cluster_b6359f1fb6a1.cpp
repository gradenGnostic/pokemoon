// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163AA8
extern uint8_t *g_obj;
extern "C" uint32_t YellowAuto_00163aa8() __asm__("_ZN2mw3qre9QREncoder11GetDivCountEv");
extern "C" uint32_t YellowAuto_00163aa8() {
if (*(g_obj + 0x28C) == 0) return 0; return *(uint32_t*)(g_obj + 0x280);
}
#endif
