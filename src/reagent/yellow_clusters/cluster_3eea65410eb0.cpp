// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FBB40
void SetPaneVisible(void*, int32_t, bool);
extern "C" void YellowAuto_002fbb40(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool25AppToolHPGaugePartsLayout14SetTextVisibleEb");
extern "C" void YellowAuto_002fbb40(uint8_t* arg0, bool arg1) {
SetPaneVisible(*(void**)(arg0 + 4), *(int32_t*)(arg0 + 0x18), arg1); SetPaneVisible(*(void**)(arg0 + 4), *(int32_t*)(arg0 + 0x14), arg1); SetPaneVisible(*(void**)(arg0 + 4), *(int32_t*)(arg0 + 0x1c), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FBBD4
void FUN_002fb9fc(float, int32_t, uint32_t);
extern "C" void YellowAuto_002fbbd4(uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZN3app4tool25AppToolHPGaugePartsLayout9SetNumberEii");
extern "C" void YellowAuto_002fbbd4(uint8_t* arg0, int32_t arg1, uint32_t arg2) {
FUN_002fb9fc((float)arg1, (int32_t)arg0, arg2); (*(uint8_t**)(arg0 + 0x34))[0xc] = 0; (*(uint8_t**)(arg0 + 0x34))[0xd] = 2;
}
#endif
