// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EB9C8
void GflHeapFreeMemoryBlock(void*, void*);
void GFLassert();
extern "C" void YellowAuto_002eb9c8(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool12FingerCursor16DeleteLytBinDataEPv");
extern "C" void YellowAuto_002eb9c8(uint8_t* arg0, void* arg1) {
if (arg0 != 0) { GflHeapFreeMemoryBlock(arg0, arg1); } else { GFLassert(); }
}
#endif
