// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FBB80
void FUN_002fc970(uint8_t*);
void FUN_002fb9fc(uint32_t, uint8_t*, uint32_t);
extern "C" void YellowAuto_002fbb80(uint8_t* arg0) __asm__("_ZN3app4tool25AppToolHPGaugePartsLayout6UpdateEv");
extern "C" void YellowAuto_002fbb80(uint8_t* arg0) {
FUN_002fc970(*(uint8_t**)(arg0 + 0x34));
if (*(*(uint8_t**)(arg0 + 0x34) + 0x0D) == 1) {
FUN_002fb9fc(*(uint32_t*)(*(uint8_t**)(arg0 + 0x34) + 0x00), arg0, *(uint32_t*)(*(uint8_t**)(arg0 + 0x34) + 0x08));
if (*(*(uint8_t**)(arg0 + 0x34) + 0x0C) != 0) {
*(*(uint8_t**)(arg0 + 0x34) + 0x0C) = 0;
*(*(uint8_t**)(arg0 + 0x34) + 0x0D) = 2;
}
}
}
#endif
