// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498930
extern "C" void* YellowAuto_00498930(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK4gfl22ui13DeviceManager11GetCrossKeyEh");
extern "C" void* YellowAuto_00498930(const uint8_t* arg0, uint8_t arg1) {
if (arg1 >= 3) return 0; return (void*)*(const void* const*)(arg0 + 12 + (uint32_t)arg1 * 4u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004989E4
extern "C" void* YellowAuto_004989e4(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK4gfl22ui13DeviceManager8GetStickEh");
extern "C" void* YellowAuto_004989e4(const uint8_t* arg0, uint8_t arg1) {
if (arg1 >= 3) return 0; return (void*)*(const void* const*)(arg0 + 24 + (uint32_t)arg1 * 4u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001049C8
extern "C" void* YellowAuto_001049c8(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK4gfl22ui13DeviceManager9GetButtonEh");
extern "C" void* YellowAuto_001049c8(const uint8_t* arg0, uint8_t arg1) {
if (arg1 >= 3) return 0; return (void*)*(const void* const*)(arg0 + 36 + (uint32_t)arg1 * 4u);
}
#endif
