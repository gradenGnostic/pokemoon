// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043AFAC
int32_t GetCountMax(void);
extern "C" int32_t YellowAuto_0043afac() __asm__("_ZN8Savedata14BattleInstSave11GetCountMaxEv");
extern "C" int32_t YellowAuto_0043afac() {
return *(int32_t*)0x43AFB4;
}
#endif
