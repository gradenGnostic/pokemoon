// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003960D0
void Terminate(uint8_t*);
void DeleteHeap(void*);
extern "C" uint8_t* YellowAuto_003960d0(uint8_t* arg0) __asm__("_ZN5Field5WorldD1Ev");
extern "C" uint8_t* YellowAuto_003960d0(uint8_t* arg0) {
Terminate(arg0);
DeleteHeap(*(void**)(arg0 + 4));
return arg0;
}
#endif
