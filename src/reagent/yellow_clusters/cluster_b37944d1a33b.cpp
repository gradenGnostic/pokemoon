// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00381B90
extern "C" void YellowAuto_00381b90(uint8_t* arg0) __asm__("_ZN5Field11FieldScript18MotionCommandParam5ClearEv");
extern "C" void YellowAuto_00381b90(uint8_t* arg0) {
for (int32_t i = 0; i < 8; ++i) *(uint32_t *)(arg0 + i * 4) = 0xffffffffu, *(uint16_t *)(arg0 + i * 2 + 0x20) = 0, *(uint16_t *)(arg0 + i * 2 + 0x30) = 0, *(uint16_t *)(arg0 + i * 2 + 0x40) = 0; *(uint32_t *)(arg0 + 0x50) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00381BD0
extern "C" void YellowAuto_00381bd0(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __asm__("_ZN5Field11FieldScript18MotionCommandParam5EntryEiiii");
extern "C" void YellowAuto_00381bd0(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
if (*(uint32_t *)(arg0 + 0x50) < 8u) *(uint32_t *)(arg0 + *(uint32_t *)(arg0 + 0x50) * 4) = (uint32_t)arg1, *(uint16_t *)(arg0 + *(uint32_t *)(arg0 + 0x50) * 2 + 0x20) = (uint16_t)arg2, *(uint16_t *)(arg0 + *(uint32_t *)(arg0 + 0x50) * 2 + 0x30) = (uint16_t)arg3, *(uint16_t *)(arg0 + *(uint32_t *)(arg0 + 0x50) * 2 + 0x40) = (uint16_t)arg4, *(uint32_t *)(arg0 + 0x50) = *(uint32_t *)(arg0 + 0x50) + 1;
}
#endif
