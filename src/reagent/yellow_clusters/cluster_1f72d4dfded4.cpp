// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022507C
void func_002370ac(uint8_t*, const uint8_t*);
void func_00592d04(uint8_t*, const uint8_t*);
void func_00240bf8(uint8_t*, const uint8_t*);
void func_0058ff98(uint8_t*, const uint8_t*);
extern "C" uint8_t* YellowAuto_0022507c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex29_DDL_DataStoreChangeMetaParamaSERKS1_");
extern "C" uint8_t* YellowAuto_0022507c(uint8_t* arg0, const uint8_t* arg1) {
*(uint8_t*)(arg0 + 0x4) = *(const uint8_t*)(arg1 + 0x4);
*(uint32_t*)(arg0 + 0x8) = *(const uint32_t*)(arg1 + 0x8);
*(uint32_t*)(arg0 + 0xC) = *(const uint32_t*)(arg1 + 0xC);
*(uint32_t*)(arg0 + 0x10) = *(const uint32_t*)(arg1 + 0x10);
func_002370ac((uint8_t*)(arg0 + 0x14), (const uint8_t*)(arg1 + 0x14));
*(uint8_t*)(arg0 + 0x20) = *(const uint8_t*)(arg1 + 0x20);
*(uint8_t*)(arg0 + 0x21) = *(const uint8_t*)(arg1 + 0x21);
func_00592d04((uint8_t*)(arg0 + 0x24), (const uint8_t*)(arg1 + 0x24));
*(uint8_t*)(arg0 + 0x34) = *(const uint8_t*)(arg1 + 0x34);
*(uint8_t*)(arg0 + 0x35) = *(const uint8_t*)(arg1 + 0x35);
func_00592d04((uint8_t*)(arg0 + 0x38), (const uint8_t*)(arg1 + 0x38));
*(uint16_t*)(arg0 + 0x44) = *(const uint16_t*)(arg1 + 0x44);
func_00240bf8((uint8_t*)(arg0 + 0x48), (const uint8_t*)(arg1 + 0x48));
func_0058ff98((uint8_t*)(arg0 + 0x68), (const uint8_t*)(arg1 + 0x68));
*(uint32_t*)(arg0 + 0x78) = *(const uint32_t*)(arg1 + 0x78);
*(uint32_t*)(arg0 + 0x7C) = *(const uint32_t*)(arg1 + 0x7C);
*(uint32_t*)(arg0 + 0x80) = *(const uint32_t*)(arg1 + 0x80);
*(uint16_t*)(arg0 + 0x84) = *(const uint16_t*)(arg1 + 0x84);
*(uint8_t*)(arg0 + 0x86) = *(const uint8_t*)(arg1 + 0x86);
*(uint8_t*)(arg0 + 0x8C) = *(const uint8_t*)(arg1 + 0x8C);
*(uint32_t*)(arg0 + 0x90) = *(const uint32_t*)(arg1 + 0x90);
func_002370ac((uint8_t*)(arg0 + 0x94), (const uint8_t*)(arg1 + 0x94));
*(uint8_t*)(arg0 + 0xA0) = *(const uint8_t*)(arg1 + 0xA0);
*(uint8_t*)(arg0 + 0xA1) = *(const uint8_t*)(arg1 + 0xA1);
func_00592d04((uint8_t*)(arg0 + 0xA4), (const uint8_t*)(arg1 + 0xA4));
*(uint8_t*)(arg0 + 0xB4) = *(const uint8_t*)(arg1 + 0xB4);
*(uint8_t*)(arg0 + 0xB5) = *(const uint8_t*)(arg1 + 0xB5);
func_00592d04((uint8_t*)(arg0 + 0xB8), (const uint8_t*)(arg1 + 0xB8));
*(uint16_t*)(arg0 + 0xC4) = *(const uint16_t*)(arg1 + 0xC4);
func_00240bf8((uint8_t*)(arg0 + 0xC8), (const uint8_t*)(arg1 + 0xC8));
func_0058ff98((uint8_t*)(arg0 + 0xE8), (const uint8_t*)(arg1 + 0xE8));
*(uint32_t*)(arg0 + 0xF4) = *(const uint32_t*)(arg1 + 0xF4);
*(uint16_t*)(arg0 + 0xF8) = *(const uint16_t*)(arg1 + 0xF8);
*(uint8_t*)(arg0 + 0xFA) = *(const uint8_t*)(arg1 + 0xFA);
*(uint8_t*)(arg0 + 0x100) = *(const uint8_t*)(arg1 + 0x100);
*(uint32_t*)(arg0 + 0x104) = *(const uint32_t*)(arg1 + 0x104);
*(uint16_t*)(arg0 + 0x108) = *(const uint16_t*)(arg1 + 0x108);
return arg0;
}
#endif
