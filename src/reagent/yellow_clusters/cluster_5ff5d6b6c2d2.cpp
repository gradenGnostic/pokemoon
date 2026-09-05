// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5D1C
extern "C" bool YellowAuto_004a5d1c(const uint8_t* arg0) __asm__("_ZNK7poke_3d8renderer15BloomRenderPath9IsCreatedEv");
extern "C" bool YellowAuto_004a5d1c(const uint8_t* arg0) {
return *(int32_t *)(arg0 + 12) != 0 && *(uint8_t *)(*(int32_t *)(arg0 + 12) + 60) == 2;
}
#endif
