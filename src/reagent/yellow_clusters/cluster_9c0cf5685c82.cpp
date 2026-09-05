// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00458F9C
void GflHeapFreeMemoryBlock(int32_t, int32_t);
extern "C" uint8_t* YellowAuto_00458f9c(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib2UI15NetAppQRTextureD1Ev");
extern "C" uint8_t* YellowAuto_00458f9c(uint8_t* arg0, int32_t arg1) {
GflHeapFreeMemoryBlock(*(int32_t *)(arg0 + 8), arg1);
return arg0;
}
#endif
