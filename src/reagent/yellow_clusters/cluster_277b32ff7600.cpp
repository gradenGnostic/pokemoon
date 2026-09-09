// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00161094
void FUN_004b4aa4(uint8_t*);
void FUN_0031f2d4(uint8_t*, void*);
extern "C" void YellowAuto_00161094(uint8_t* arg0, void* arg1) __asm__("_ZN23RegulationScriptCheckerC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00161094(uint8_t* arg0, void* arg1) {
*((uint32_t*)(arg0 + 0x4)) = (uint32_t)arg1;
*((uint32_t*)(arg0 + 0x8)) = 0;
*((uint32_t*)(arg0 + 0xC)) = 0;
*((uint8_t*)(arg0 + 0x10)) = 1;
*((uint8_t*)(arg0 + 0x11)) = 1;
FUN_004b4aa4(arg0 + 0x12);
*((uint32_t*)(arg0 + 0x18)) = 0;
*((uint16_t*)(arg0 + 0x1C)) = 0;
FUN_0031f2d4(arg0 + 0x20, arg1);
*((uint8_t*)(arg0 + 0x3C)) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00161168
void FUN_00357cd8(uint32_t);
void FUN_0031f35c(uint8_t*);
extern "C" uint8_t* YellowAuto_00161168(uint8_t* arg0) __asm__("_ZN23RegulationScriptCheckerD1Ev");
extern "C" uint8_t* YellowAuto_00161168(uint8_t* arg0) {
if (*((uint32_t*)(arg0 + 0x8)) != 0)
((void (*)(uint32_t))*((uint32_t*)((*((uint32_t*)(*((uint32_t*)(arg0 + 0x8)))) + 4))))(*((uint32_t*)(arg0 + 0x8)));
if (*((uint32_t*)(arg0 + 0x8)) != 0)
*((uint32_t*)(arg0 + 0x8)) = 0;
if (*((uint32_t*)(arg0 + 0xC)) != 0)
FUN_00357cd8(*((uint32_t*)(arg0 + 0xC)));
if (*((uint32_t*)(arg0 + 0xC)) != 0)
*((uint32_t*)(arg0 + 0xC)) = 0;
FUN_0031f35c(arg0 + 0x20);
return arg0;
}
#endif
