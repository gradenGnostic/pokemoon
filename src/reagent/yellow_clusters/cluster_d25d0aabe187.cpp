// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00392CF8
void HelperA(uint8_t*, void*);
void HelperB(uint8_t*);
extern "C" void YellowAuto_00392cf8(uint8_t* arg0, void* arg1) __asm__("_ZN5Field19EventGimmickEncountC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00392cf8(uint8_t* arg0, void* arg1) {
HelperA(arg0, arg1); HelperB(arg0 + 36); *reinterpret_cast<uint32_t*>(arg0 + 72) = 0; *reinterpret_cast<uint32_t*>(arg0 + 76) = 0; *reinterpret_cast<uint32_t*>(arg0 + 80) = 4294967295u; *reinterpret_cast<uint32_t*>(arg0 + 84) = 0; *reinterpret_cast<uint32_t*>(arg0 + 88) = 5; *reinterpret_cast<uint8_t*>(arg0 + 92) = 0; *reinterpret_cast<uint32_t*>(arg0 + 96) = 0; *reinterpret_cast<uint32_t*>(arg0 + 100) = 0; *reinterpret_cast<uint32_t*>(arg0 + 104) = 0; *reinterpret_cast<uint32_t*>(arg0 + 108) = 0; *reinterpret_cast<uint8_t*>(arg0 + 112) = 0; *reinterpret_cast<uint32_t*>(arg0 + 116) = 0; *reinterpret_cast<uint32_t*>(arg0 + 120) = 0; *reinterpret_cast<uint32_t*>(arg0 + 124) = 0; *reinterpret_cast<uint32_t*>(arg0 + 128) = 0; *reinterpret_cast<uint32_t*>(arg0 + 132) = 0; *reinterpret_cast<uint32_t*>(arg0 + 136) = 0; *reinterpret_cast<uint32_t*>(arg0 + 140) = 0; *reinterpret_cast<uint32_t*>(arg0 + 144) = 0; *reinterpret_cast<uint32_t*>(arg0 + 148) = 0; *reinterpret_cast<uint8_t*>(arg0 + 152) = 0; *reinterpret_cast<uint32_t*>(arg0 + 156) = 0; *reinterpret_cast<uint8_t*>(arg0 + 160) = 0; *reinterpret_cast<uint32_t*>(arg0 + 164) = 0; *reinterpret_cast<uint32_t*>(arg0 + 168) = 0; *reinterpret_cast<uint32_t*>(arg0 + 172) = 0; *reinterpret_cast<uint32_t*>(arg0 + 176) = 0; *reinterpret_cast<uint16_t*>(arg0 + 180) = 73; *reinterpret_cast<uint32_t*>(arg0 + 24) = 0; *reinterpret_cast<uint32_t*>(arg0 + 28) = 0; *reinterpret_cast<uint32_t*>(arg0 + 32) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00392708
extern "C" void YellowAuto_00392708(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN5Field19EventGimmickEncount5SetupERKNS0_11DescriptionE");
extern "C" void YellowAuto_00392708(uint8_t* arg0, const uint32_t* arg1) {
*reinterpret_cast<uint32_t*>(arg0 + 32) = arg1[2]; *reinterpret_cast<uint32_t*>(arg0 + 24) = arg1[0]; *reinterpret_cast<uint32_t*>(arg0 + 28) = arg1[1];
}
#endif
