// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497798
extern "C" uint16_t YellowAuto_00497798(const uint8_t* arg0) __asm__("_ZNK4gfl22fs17BinLinkerAccessor10GetDataMaxEv");
extern "C" uint16_t YellowAuto_00497798(const uint8_t* arg0) {
uint16_t result = 0; if (*(const uint32_t*)arg0 != 0) result = *(const uint16_t*)(*(const uint32_t*)arg0 + 2); return result;
}
#endif
