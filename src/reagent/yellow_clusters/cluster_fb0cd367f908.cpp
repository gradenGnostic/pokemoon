// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00397684
void* GetInstance();
void* GetColorBufferTexture(void*, uint32_t);
extern "C" void YellowAuto_00397684(uint8_t* arg0) __asm__("_ZN5Field7Encount13EncountEffect19RequestFieldCaptureEv");
extern "C" void YellowAuto_00397684(uint8_t* arg0) {
(void)*(uint8_t*)(arg0 + 0x1c); GetColorBufferTexture(GetInstance(), 0); GetInstance();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00397AD8
uint32_t FUN_00397504(uint8_t*);
bool FUN_005251b4(void*, uint8_t);
extern "C" bool YellowAuto_00397ad8(uint8_t* arg0, bool arg1) __asm__("_ZN5Field7Encount13EncountEffect7IsStartEb");
extern "C" bool YellowAuto_00397ad8(uint8_t* arg0, bool arg1) {
if (*(uint32_t*)(arg0 + 0x10) == 0) return true; if (arg1 != 0) { if (FUN_00397504(arg0) == 0) return false; } if (*(uint8_t*)(*(uint8_t**)(arg0 + 0x10) + 0xc) < 3) return false; return FUN_005251b4(*(void**)(*(uint8_t**)(arg0 + 0x10) + 0x4), *(uint8_t*)(*(uint8_t**)(arg0 + 0x10) + 0xc));
}
#endif
