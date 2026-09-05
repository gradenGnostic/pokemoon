// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038D50C
extern "C" void YellowAuto_0038d50c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field16FieldItemManager26UnregistDropItemModelActorEj");
extern "C" void YellowAuto_0038d50c(uint8_t* arg0, uint32_t arg1) {
if (*(void **)(arg0 + arg1 * 4u + 0x260u) != 0) (*(void (**)(void))(*(void **)((uint8_t *)(*(void **)(arg0 + arg1 * 4u + 0x260u)) + 0x10u)))();
}
#endif
