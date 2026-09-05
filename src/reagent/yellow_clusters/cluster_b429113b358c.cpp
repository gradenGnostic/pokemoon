// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004977AC
extern "C" int32_t YellowAuto_004977ac(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK4gfl22fs17BinLinkerAccessor11GetDataSizeEj");
extern "C" int32_t YellowAuto_004977ac(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
return !*(const uint8_t* const*)arg0 || (uint32_t)*(const uint16_t*)(*(const uint8_t* const*)arg0 + 2) <= arg1 ? 0 : *(const int32_t*)(*(const uint8_t* const*)arg0 + arg1 * 4 + 8) - *(const int32_t*)(*(const uint8_t* const*)arg0 + arg1 * 4 + 4);
}
#endif
