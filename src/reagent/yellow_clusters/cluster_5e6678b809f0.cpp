// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F114C
bool PokeTool_PokeModel_IsAvailableAnimation(void*, int32_t);
extern "C" bool YellowAuto_002f114c(const uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool15PokeSimpleModel20IsAvailableAnimationEN8PokeTool11MODEL_ANIMEE");
extern "C" bool YellowAuto_002f114c(const uint8_t* arg0, int32_t arg1) {
if (*(const uint8_t *)(arg0 + 0x30) == 2) return PokeTool_PokeModel_IsAvailableAnimation(*(void * const *)(arg0 + 0x48), arg1); return false;
}
#endif
