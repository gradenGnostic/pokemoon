// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E8274
uint32_t* FUN_002e8654(uint32_t*);
extern const uint32_t DAT_002E8288;
extern "C" void YellowAuto_002e8274(uint8_t* arg0) __asm__("_ZN3app4sort10StringItemC1Ev");
extern "C" void YellowAuto_002e8274(uint8_t* arg0) {
*FUN_002e8654((uint32_t*)arg0) = DAT_002E8288;
}
#endif
