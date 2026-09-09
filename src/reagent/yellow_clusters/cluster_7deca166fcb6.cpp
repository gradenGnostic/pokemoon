// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497BAC
void sub_00341CD4(void*);
extern "C" void YellowAuto_00497bac(void* arg0, const uint8_t* arg1, uint32_t* arg2) __asm__("_ZNK4gfl22fs7ArcFile14GetMaxDataSizeEPj");
extern "C" void YellowAuto_00497bac(void* arg0, const uint8_t* arg1, uint32_t* arg2) {
sub_00341CD4(arg0); *(uint32_t*)arg2 = *(const uint32_t*)(arg1 + 32);
}
#endif
