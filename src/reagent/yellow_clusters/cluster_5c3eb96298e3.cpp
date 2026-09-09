// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FD580
extern "C" uint32_t YellowAuto_002fd580(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering25ConvTrainerIdToModelResIDEj");
extern "C" uint32_t YellowAuto_002fd580(uint8_t* arg0, uint32_t arg1) {
if ((uint32_t)arg0 == 0 || (uint32_t)arg0 == 1) return (uint32_t)arg0; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FD954
extern "C" uint32_t YellowAuto_002fd954(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering37ConvTrainerIdToModelWaitMotionAnimeIdEj");
extern "C" uint32_t YellowAuto_002fd954(uint8_t* arg0, uint32_t arg1) {
if ((uint32_t)arg0 == 0 || (uint32_t)arg0 == 1) return 4; return 0;
}
#endif
