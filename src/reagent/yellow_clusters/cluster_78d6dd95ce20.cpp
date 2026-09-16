// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001049F8
uint32_t* FUN_001054dc(const uint8_t*);
extern "C" bool YellowAuto_001049f8(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK4gfl22ui6Button6IsHoldEjNS1_12InputStateIDE");
extern "C" bool YellowAuto_001049f8(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t* base = FUN_001054dc(arg0);
uint32_t* e = base;
if (arg2 < 2u) e = (uint32_t*)((uint8_t*)base + arg2 * 16u);
return (e[0] & arg1) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498FD8
uint32_t* FUN_001054dc(const uint8_t*);
extern "C" bool YellowAuto_00498fd8(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK4gfl22ui6Button9IsTriggerEjNS1_12InputStateIDE");
extern "C" bool YellowAuto_00498fd8(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t* base = FUN_001054dc(arg0);
uint32_t* e = base;
if (arg2 < 2u) e = (uint32_t*)((uint8_t*)base + arg2 * 16u);
return (e[1] & arg1) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498F90
uint32_t* FUN_001054dc(const uint8_t*);
extern "C" bool YellowAuto_00498f90(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK4gfl22ui6Button9IsReleaseEjNS1_12InputStateIDE");
extern "C" bool YellowAuto_00498f90(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t* base = FUN_001054dc(arg0);
uint32_t* e = base;
if (arg2 < 2u) e = (uint32_t*)((uint8_t*)base + arg2 * 16u);
return (e[2] & arg1) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498F40
uint32_t* FUN_001054dc(const uint8_t*);
extern "C" bool YellowAuto_00498f40(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK4gfl22ui6Button8IsRepeatEjNS1_12InputStateIDE");
extern "C" bool YellowAuto_00498f40(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t* base = FUN_001054dc(arg0);
uint32_t* e = base;
if (arg2 < 2u) e = (uint32_t*)((uint8_t*)base + arg2 * 16u);
return ((e[1] | e[3]) & arg1) != 0;
}
#endif
