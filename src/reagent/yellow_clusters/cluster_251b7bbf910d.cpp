// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C8C3C
bool IsFileLoad(void*);
void EffectSystemEntryResource(void*, void*, uint32_t, void*);
void FUN_002c86ac(uint8_t*, uint32_t);
extern "C" bool YellowAuto_002c8c3c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10ItemEffect8IsCreateEj");
extern "C" bool YellowAuto_002c8c3c(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 2U) return true; if ((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) == 0U && !IsFileLoad((void*)(arg0 + arg1 * 0x18 + 0x14))) return false; if ((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) == 0U) *(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) = (uint16_t)((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x8000U) | (((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) + 1U) & 0x7FFFU)); if ((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) != 1U) return true; EffectSystemEntryResource((void*)(*(uint32_t*)(arg0 + 0xC)), (void*)(*(uint32_t*)(arg0 + arg1 * 0x18 + 0x14)), arg1, (void*)0); FUN_002c86ac(arg0, arg1); *(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) = (uint16_t)((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x8000U) | (((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) + 1U) & 0x7FFFU)); return true;
}
#endif
