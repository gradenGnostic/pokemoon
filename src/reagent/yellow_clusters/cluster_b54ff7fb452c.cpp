// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00350C84
void FUN_00352ed0(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00350c84(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN4gfl23lyt5LytWk13SetAnimeFrameEjf");
extern "C" void YellowAuto_00350c84(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
FUN_00352ed0(*(uint32_t *)(arg0 + 4), arg1, arg2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004996F0
void* FUN_0049a1c0(uint32_t, uint32_t);
extern "C" void* YellowAuto_004996f0(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK4gfl23lyt5LytWk7GetPaneEj");
extern "C" void* YellowAuto_004996f0(const uint8_t* arg0, uint32_t arg1) {
return FUN_0049a1c0(*(const uint32_t *)(arg0 + 4), arg1);
}
#endif
