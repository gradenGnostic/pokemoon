// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443DA4
void PopSaveTime(uint8_t* arg0);
extern "C" void YellowAuto_00443da4(uint8_t* arg0) __asm__("_ZN8Savedata8PlayTime11PopSaveTimeEv");
extern "C" void YellowAuto_00443da4(uint8_t* arg0) {
*(uint32_t*)(arg0 + 8) = *(uint32_t*)(arg0 + 12);
}
#endif
