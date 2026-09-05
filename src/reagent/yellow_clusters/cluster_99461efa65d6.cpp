// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C87BC
int32_t FUN_0029af08(int32_t, uint8_t);
extern "C" bool YellowAuto_002c87bc(void* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10ItemEffect5IsEndEj");
extern "C" bool YellowAuto_002c87bc(void* arg0, uint32_t arg1) {
return FUN_0029af08(*(int32_t *)(*(int32_t *)(*(int32_t *)((uint8_t *)arg0 + 0xc) + 0x18) + 0x4), (uint8_t)(arg1 & 0xff)) == 0;
}
#endif
