// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C458
extern "C" void YellowAuto_0045c458(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN9NetAppLib4Util22NetAppPokeModelUtility15SetEventHandlerEjPNS1_13IEventHandlerE");
extern "C" void YellowAuto_0045c458(uint8_t* arg0, uint32_t arg1, void* arg2) {
if (*(uint32_t*)(arg0+0x10)!=0) *(void**)(*(uint8_t**)(arg0+0x10)+arg1*0x40+0x28)=arg2;
}
#endif
