// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00374650
int32_t FUN_003ae140(void);
extern "C" bool YellowAuto_00374650(uint8_t* arg0) __asm__("_ZN5Field10FieldSound21IsLoadedFootSoundDataEv");
extern "C" bool YellowAuto_00374650(uint8_t* arg0) {
return FUN_003ae140() != 0 ? true : ((*(int32_t *)(arg0 + 0x24)) = *(int32_t *)(arg0 + 0x24) + 1, false);
}
#endif
