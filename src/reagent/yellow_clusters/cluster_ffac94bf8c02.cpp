// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459580
extern "C" void YellowAuto_00459580(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView19SetCursorControllerEPN3app4tool16CursorControllerE");
extern "C" void YellowAuto_00459580(uint8_t* arg0, uint8_t* arg1) {
if (arg1 == (uint8_t*)0) arg1 = arg0 + 0xac; *(uint8_t**)(arg0 + 0x10c) = arg1; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459400
void operator delete(void*);
extern "C" void YellowAuto_00459400(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI16NetAppCursorView13ReleaseCursorEv");
extern "C" void YellowAuto_00459400(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x118) != 0) operator delete((void*)*(uint32_t*)(arg0 + 0x118)); *(uint32_t*)(arg0 + 0x118) = 0; *(uint32_t*)(arg0 + 0x124) = **(uint32_t**)0x459450; *(uint32_t*)(arg0 + 0x128) = **(uint32_t**)0x459450; *(uint32_t*)(arg0 + 0x12c) = **(uint32_t**)0x459450; *(uint32_t*)(arg0 + 0x130) = **(uint32_t**)0x459450; *(uint32_t*)(arg0 + 0x134) = **(uint32_t**)0x459450; return;
}
#endif
