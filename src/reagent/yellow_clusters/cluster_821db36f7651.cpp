// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CD038
void sub_00445928(int32_t);
void sub_0047431c(void*, int32_t, int32_t);
extern "C" void YellowAuto_003cd038(int32_t arg0) __asm__("_ZN6NetApp2QR11QRDiaryFuncENS0_19QR_TYPE_BATTLE_TEAME");
extern "C" void YellowAuto_003cd038(int32_t arg0) {
if (arg0 != 0) return; sub_00445928(0x3e); sub_0047431c(*(void **)0x003cd064, 0, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CCFF4
void sub_0047431c(void*, int32_t, int32_t);
extern "C" void YellowAuto_003ccff4(int32_t arg0) __asm__("_ZN6NetApp2QR11QRDiaryFuncENS0_16QR_TYPE_LIVE_CUPE");
extern "C" void YellowAuto_003ccff4(int32_t arg0) {
if (arg0 == 0) sub_0047431c(*(void **)0x003cd014, 2, 0); return;
}
#endif
