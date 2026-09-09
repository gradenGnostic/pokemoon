// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047E298
extern "C" uint32_t YellowAuto_0047e298(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK2nn3nex19PersistentGathering12GetAttributeEj");
extern "C" uint32_t YellowAuto_0047e298(const uint8_t* arg0, uint32_t arg1) {
return arg1 < (uint32_t)((*(const uint32_t*)(arg0 + 0x44) - *(const uint32_t*)(arg0 + 0x40)) >> 2) ? *(const uint32_t*)(*(const uint32_t*)(arg0 + 0x40) + arg1 * 4) : 0;
}
#endif
