// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E5B88
extern "C" uint8_t* YellowAuto_003e5b88(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN6System17DeviceTurnWatcherC1EPN4gfl24heap11CtrHeapBaseEPNS1_2ui13DeviceManagerE");
extern "C" uint8_t* YellowAuto_003e5b88(uint8_t* arg0, void* arg1, void* arg2) {
*(void **)arg0 = arg2; *(uint8_t *)(arg0 + 4) = 0; *(uint32_t *)(arg0 + 8) = 0; *(uint8_t *)(arg0 + 12) = 2; ((void (*)(void *, void *, int32_t))((*(void ***)arg2)[3]))(arg2, arg1, 0); return arg0;
}
#endif
