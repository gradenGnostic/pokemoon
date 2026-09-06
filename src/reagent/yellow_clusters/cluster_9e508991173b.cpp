// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004455E0
extern "C" uint32_t YellowAuto_004455e0(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9FieldMenu18GetRideShortcutKeyENS0_6RideIDE");
extern "C" uint32_t YellowAuto_004455e0(const uint8_t* arg0, uint32_t arg1) {
if (((const uint8_t*)arg0)[0x16] == arg1) return 0;
if (((const uint8_t*)arg0)[0x17] == arg1) return 1;
if (((const uint8_t*)arg0)[0x18] == arg1) return 2;
if (((const uint8_t*)arg0)[0x19] == arg1) return 3;
return 4;
}
#endif
