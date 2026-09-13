// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042A4EC
const uint16_t* GetLocalNumberStaticTable();
extern "C" uint16_t YellowAuto_0042a4ec(uint32_t arg0, int32_t arg1) __asm__("_ZN8PokeTool10ExtendData20GetLocalNumberStaticEjNS0_9LocalAreaE");
extern "C" uint16_t YellowAuto_0042a4ec(uint32_t arg0, int32_t arg1) {
if (arg1 != 1) return 0; if (arg0 >= 804) return 0; return GetLocalNumberStaticTable()[arg0];
}
#endif
