// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003930CC
extern "C" void YellowAuto_003930cc(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN5Field20EventFieldQuickMatch7SetInitEPN3App9FieldMenu22FieldMenuSubWindowProcEPNS_18EventXMenuListenerE");
extern "C" void YellowAuto_003930cc(uint8_t* arg0, void* arg1, void* arg2) {
*(void**)((uint8_t*)arg0 + 0x24) = arg1;
*(void**)((uint8_t*)arg0 + 0x5c) = arg2;
return;
}
#endif
