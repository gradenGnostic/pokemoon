// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041FD00
void callee_003f467c(uint8_t*, void*);
extern "C" void YellowAuto_0041fd00(uint8_t* arg0, void* arg1) __asm__("_ZN8NetEvent10FatalError15FatalErrorEventC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0041fd00(uint8_t* arg0, void* arg1) {
callee_003f467c(arg0, arg1); *(uint8_t*)(arg0 + 24) = 0; *(uint32_t*)(arg0 + 0) = *(uint32_t*)0x41fd1c;
}
#endif
