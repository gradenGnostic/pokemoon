// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FA968
extern uint32_t DAT_002fa980;
extern "C" void* YellowAuto_002fa968(void* arg0) __asm__("_ZN3app4tool19ModelViewerSequenceD1Ev");
extern "C" void* YellowAuto_002fa968(void* arg0) {
*(uint32_t *)arg0 = DAT_002fa980; return arg0;
}
#endif
