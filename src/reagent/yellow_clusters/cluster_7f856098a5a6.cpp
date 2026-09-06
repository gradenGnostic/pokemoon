// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163BA0
extern const uint32_t DAT_00163bc0;
extern const void *DAT_00163bc4;
void FUN_00447cc0(const void *);
extern "C" void* YellowAuto_00163ba0(void* arg0) __asm__("_ZN2mw3qre9QREncoderD1Ev");
extern "C" void* YellowAuto_00163ba0(void* arg0) {
*(uint32_t *)arg0 = DAT_00163bc0; FUN_00447cc0(DAT_00163bc4); return arg0;
}
#endif
