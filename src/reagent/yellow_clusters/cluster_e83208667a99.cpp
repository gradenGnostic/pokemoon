// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00356298
extern "C" void YellowAuto_00356298(uint8_t* arg0, const void* arg1, void* arg2) __asm__("_ZN4gfl23str7MsgDataC1EPKvPNS_4heap11CtrHeapBaseE");
extern "C" void YellowAuto_00356298(uint8_t* arg0, const void* arg1, void* arg2) {
*(uint32_t*)arg0 = *(uint32_t*)0x003562FC; *(uint32_t*)(arg0 + 0x4) = (uint32_t)arg2; *(uint8_t*)(arg0 + 0x8) = (uint8_t)1; *(uint32_t*)(arg0 + 0xC) = (uint32_t)0; *(uint32_t*)(arg0 + 0x14) = (uint32_t)arg1; *(uint32_t*)(arg0 + 0x24) = (uint32_t)0; *(uint32_t*)(arg0 + 0x28) = (uint32_t)0; *(uint32_t*)(arg0 + 0x2C) = (uint32_t)0xFFFFFFFF; uint32_t addr = *(uint32_t*)0x00356300; uint32_t lang = *(uint32_t*)addr; uint16_t cnt = *(const uint16_t*)arg1; if ((uint32_t)cnt <= lang) lang = (uint32_t)0; *(uint32_t*)(arg0 + 0x10) = lang; *(uint32_t*)(arg0 + 0x18) = (uint32_t)((const uint8_t*)arg1 + (int32_t)*(const uint32_t*)((const uint8_t*)arg1 + lang * (uint32_t)4 + (uint32_t)12));
}
#endif
