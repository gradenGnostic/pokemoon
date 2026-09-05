// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00498F08
void* FUN_001054dc(int arg0);
uint32_t GetHold(const void* arg0, uint32_t arg1);
extern "C" uint32_t YellowAuto_00498f08(const void* arg0, uint32_t arg1) __asm__("_ZNK4gfl22ui6Button7GetHoldENS1_12InputStateIDE");
extern "C" uint32_t YellowAuto_00498f08(const void* arg0, uint32_t arg1) {
return ((const uint32_t*)FUN_001054dc((int)arg0))[arg1 < 2 ? arg1 * 4 : 0];
}
#endif
