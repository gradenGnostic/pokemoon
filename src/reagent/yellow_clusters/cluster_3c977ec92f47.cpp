// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CD0D4
void FUN_00445784(uint8_t);
extern "C" void YellowAuto_003cd0d4() __asm__("_ZN6NetApp2QR14GetQRScanCountEv");
extern "C" void YellowAuto_003cd0d4() {
FUN_00445784((uint8_t)(*(const uint32_t *)(*(const uint32_t *)0x003cd0e4)));
}
#endif
