// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497B78
void sub_341cd4(void*);
extern "C" void YellowAuto_00497b78(uint32_t* arg0, const uint8_t* arg1, uint32_t* arg2) __asm__("_ZNK4gfl22fs7ArcFile12GetDataCountEPj");
extern "C" void YellowAuto_00497b78(uint32_t* arg0, const uint8_t* arg1, uint32_t* arg2) {
sub_341cd4(arg0); *reinterpret_cast<uint32_t*>(arg2) = *reinterpret_cast<const uint32_t*>(arg1 + 28); return;
}
#endif
