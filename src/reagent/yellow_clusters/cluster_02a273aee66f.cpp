// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443DB0
void Func0035EB28(uint8_t*);
void Func004A82F0(uint8_t*, uint8_t*);
uint32_t Func00478BD4(const uint8_t*);
uint32_t Func00478C30(const uint8_t*);
uint32_t Func00478A78(const uint8_t*);
uint32_t Func00478AD4(const uint8_t*);
uint32_t Func00478C8C(const uint8_t*);
extern "C" void YellowAuto_00443db0(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN8Savedata8PlayTime11SetSaveTimeEPNS_8GameTimeE");
extern "C" void YellowAuto_00443db0(uint8_t* arg0, uint8_t* arg1) {
uint8_t date[12];
Func0035EB28(date);
Func004A82F0(arg1, date);
uint32_t y = Func00478BD4(date);
uint32_t c0 = *(uint32_t*)(arg0 + 8);
*(uint32_t*)(arg0 + 8) = (y & 0xFFFU) | (c0 & 0xFFFFF000U);
uint32_t mo = Func00478C30(date);
uint32_t c1 = *(uint32_t*)(arg0 + 8);
*(uint32_t*)(arg0 + 8) = ((mo << 12) & 0xF000U) | (c1 & 0xFFFF0FFFU);
uint32_t d = Func00478A78(date);
uint32_t c2 = *(uint32_t*)(arg0 + 8);
*(uint32_t*)(arg0 + 8) = ((d << 16) & 0x1F0000U) | (c2 & 0xFFE0FFFFU);
uint32_t h = Func00478AD4(date);
uint32_t c3 = *(uint32_t*)(arg0 + 8);
*(uint32_t*)(arg0 + 8) = ((h << 21) & 0x3E00000U) | (c3 & 0xFC1FFFFFU);
uint32_t mi = Func00478C8C(date);
uint32_t c4 = *(uint32_t*)(arg0 + 8);
*(uint32_t*)(arg0 + 8) = ((mi << 26) & 0xFC000000U) | (c4 & 0x3FFFFFFU);
}
#endif
