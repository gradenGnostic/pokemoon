// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004488E4
void __aeabi_memcpy4(void*, const void*, uint32_t);
extern "C" uint8_t* YellowAuto_004488e4(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI19JoinFestaPlayerDataC1ERKS1_");
extern "C" uint8_t* YellowAuto_004488e4(uint8_t* arg0, const uint8_t* arg1) {
*(uint32_t*)arg0 = *(const uint32_t*)arg1;
__aeabi_memcpy4(arg0 + 8, arg1 + 8, 0x200);
*(uint32_t*)(arg0 + 0x208) = *(const uint32_t*)(arg1 + 0x208);
*(uint32_t*)(arg0 + 0x20C) = *(const uint32_t*)(arg1 + 0x20C);
*(uint32_t*)(arg0 + 0x210) = *(const uint32_t*)(arg1 + 0x210);
*(uint32_t*)(arg0 + 0x214) = *(const uint32_t*)(arg1 + 0x214);
*(uint32_t*)(arg0 + 0x218) = *(const uint32_t*)(arg1 + 0x218);
*(uint32_t*)(arg0 + 0x21C) = *(const uint32_t*)(arg1 + 0x21C);
*(uint32_t*)(arg0 + 0x220) = *(const uint32_t*)(arg1 + 0x220);
*(uint32_t*)(arg0 + 0x224) = *(const uint32_t*)(arg1 + 0x224);
*(uint32_t*)(arg0 + 0x228) = *(const uint32_t*)(arg1 + 0x228);
*(uint32_t*)(arg0 + 0x22C) = *(const uint32_t*)(arg1 + 0x22C);
*(uint32_t*)(arg0 + 0x230) = *(const uint32_t*)(arg1 + 0x230);
*(uint32_t*)(arg0 + 0x234) = *(const uint32_t*)(arg1 + 0x234);
*(uint32_t*)(arg0 + 0x238) = *(const uint32_t*)(arg1 + 0x238);
*(uint32_t*)(arg0 + 0x23C) = *(const uint32_t*)(arg1 + 0x23C);
*(uint32_t*)(arg0 + 0x240) = *(const uint32_t*)(arg1 + 0x240);
*(uint32_t*)(arg0 + 0x244) = *(const uint32_t*)(arg1 + 0x244);
__aeabi_memcpy4(arg0 + 0x248, arg1 + 0x248, 0x58);
*(uint32_t*)(arg0 + 0x2A0) = *(const uint32_t*)(arg1 + 0x2A0);
*(uint32_t*)(arg0 + 0x2A4) = *(const uint32_t*)(arg1 + 0x2A4);
*(uint32_t*)(arg0 + 0x2A8) = *(const uint32_t*)(arg1 + 0x2A8);
*(uint32_t*)(arg0 + 0x2AC) = *(const uint32_t*)(arg1 + 0x2AC);
*(uint32_t*)(arg0 + 0x2B0) = *(const uint32_t*)(arg1 + 0x2B0);
*(uint32_t*)(arg0 + 0x2B4) = *(const uint32_t*)(arg1 + 0x2B4);
*(uint32_t*)(arg0 + 0x2B8) = *(const uint32_t*)(arg1 + 0x2B8);
*(uint32_t*)(arg0 + 0x2BC) = *(const uint32_t*)(arg1 + 0x2BC);
*(arg0 + 0x2C0) = *(arg1 + 0x2C0);
*(arg0 + 0x2C1) = *(arg1 + 0x2C1);
*(arg0 + 0x2C2) = *(arg1 + 0x2C2);
return arg0;
}
#endif
