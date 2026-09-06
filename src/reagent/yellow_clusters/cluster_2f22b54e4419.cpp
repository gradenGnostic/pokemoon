// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A31A8
extern "C" bool YellowAuto_004a31a8(const uint8_t* arg0) __asm__("_ZNK6applib5frame7Manager25GetBaseProcessInitializedEv");
extern "C" bool YellowAuto_004a31a8(const uint8_t* arg0) {
if (arg0[0xA] != 0) return false;
if (arg0[0x9] != 0) return false;
return *(const uint8_t * const *)(arg0 + 0x10) != 0 && *(*(const uint8_t * const *)(arg0 + 0x10)) == 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EDCA0
int32_t Main(uint8_t*);
extern "C" bool YellowAuto_003edca0(uint8_t* arg0) __asm__("_ZN6applib5frame7Manager3EndEv");
extern "C" bool YellowAuto_003edca0(uint8_t* arg0) {
if (*(uint8_t **)(arg0 + 0x10) == 0) if (*(int32_t *)(arg0 + 0x0c) == 0) return false;
if (*(uint8_t **)(arg0 + 0x10) != 0 && *(*(uint8_t **)(arg0 + 0x10)) == 2) **(uint8_t **)(arg0 + 0x10) = 3, *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(arg0 + 0x10) + 0x10) + 4) = 0;
return Main(arg0) != 0;
}
#endif
