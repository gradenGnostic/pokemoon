// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6F94
extern "C" void YellowAuto_002e6f94(uint8_t* arg0) __asm__("_ZN3app2ui11UIResponder32CallBackFuncOnButtonTouchTriggerEj");
extern "C" void YellowAuto_002e6f94(uint8_t* arg0) {
if (*(uint8_t *)(arg0 + 0x2d) != 0 && (arg0 = *(uint8_t **)(arg0 + 0x14)) != 0) (*(void (**)())(*(uint32_t *)arg0 + 0x14))();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E6FC0
extern "C" void YellowAuto_002e6fc0(uint8_t* arg0) __asm__("_ZN3app2ui11UIResponder39CallbackFuncOnButtonSelectedBeforeAnimeEj");
extern "C" void YellowAuto_002e6fc0(uint8_t* arg0) {
if (*(uint8_t *)(arg0 + 0x2d) != 0 && (arg0 = *(uint8_t **)(arg0 + 0x14)) != 0) (*(void (**)())(*(uint32_t *)arg0 + 0x10))();
}
#endif
