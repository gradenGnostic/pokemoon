// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CCF7C
void Set(uint32_t);
extern "C" void YellowAuto_003ccf7c(uint32_t arg0) __asm__("_ZN6NetApp2QR11QRDiaryFuncENS0_11QR_TYPE_APPE");
extern "C" void YellowAuto_003ccf7c(uint32_t arg0) {
if (arg0 == 8U) Set(5U); else if (arg0 == 2U) Set(3U);
if (arg0 == 1U || arg0 == 3U || arg0 == 7U) Set(4U);
return;
}
#endif
