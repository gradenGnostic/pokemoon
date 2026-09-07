// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E89FC
extern "C" void* YellowAuto_002e89fc(uint8_t* arg0) __asm__("_ZN3app4tool10IconObject14GetTexDataCtrlEv");
extern "C" void* YellowAuto_002e89fc(uint8_t* arg0) {
return *(void**)(arg0 + 28);
}
#endif
