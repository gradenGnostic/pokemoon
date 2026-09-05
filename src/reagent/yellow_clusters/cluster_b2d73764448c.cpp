// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045DDB0
void FUN_0045d968(int32_t, int32_t);
void FUN_002fd9e0(void *);
extern "C" void YellowAuto_0045ddb0(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib4Util24NetAppTrainerIconUtility6UpdateEv");
extern "C" void YellowAuto_0045ddb0(uint8_t* arg0, int32_t arg1) {
FUN_0045d968((int32_t)arg0, arg1);
if (*(void **)(arg0 + 8) != (void *)0)
  FUN_002fd9e0(*(void **)(arg0 + 8));
}
#endif
