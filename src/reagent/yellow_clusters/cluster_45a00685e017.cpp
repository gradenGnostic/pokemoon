// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA7D4
void SetVisible(uint8_t *arg0, bool arg1, uint32_t arg2);
extern "C" void YellowAuto_002ea7d4(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool10MenuWindow7EndMenuEb");
extern "C" void YellowAuto_002ea7d4(uint8_t* arg0, bool arg1) {
if (*(uint8_t *)(arg0 + 0xc2u) != 0u) SetVisible(*(uint8_t **)(arg0 + 0xccu), false, 3u); *(uint32_t *)(arg0 + 0x14u) = 0u; *(uint8_t *)(arg0 + 0xc2u) = 0u; uint32_t i = 0; while (i < *(uint8_t *)(arg0 + 0x158u)) *(uint8_t *)(*(uint8_t **)(arg0 + 0xd4u + i * 0x10u) + 0x44u) &= 0xfeu, ++i; if (arg1 != 0) *(uint8_t *)(arg0 + 0x158u) = 0u;
}
#endif
