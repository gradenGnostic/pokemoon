// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00170CF8
void FUN_00171900(uint8_t *);
extern "C" void YellowAuto_00170cf8(uint8_t* arg0) __asm__("_ZN2nn2os16StackMemoryBlock8FinalizeEv");
extern "C" void YellowAuto_00170cf8(uint8_t* arg0) {
if (*((uint32_t *)(arg0 + 8)) != 0) FUN_00171900(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00170CA0
int32_t FUN_001718f0();
int32_t FUN_00171988(uint8_t *, uint32_t);
void HandleInternalError(uint32_t);
extern "C" void YellowAuto_00170ca0(uint8_t* arg0, int32_t arg1) __asm__("_ZN2nn2os16StackMemoryBlock10InitializeEj");
extern "C" void YellowAuto_00170ca0(uint8_t* arg0, int32_t arg1) {
if (FUN_001718f0() != 0) if (*((uint32_t *)(arg0 + 8)) == 0) if (FUN_00171988(arg0, (arg1 + 4095U) & 4294965248U) == 0) HandleInternalError(*((uint32_t *)0x00170CF4U));
}
#endif
