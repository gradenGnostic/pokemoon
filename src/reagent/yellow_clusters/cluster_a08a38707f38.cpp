// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004457E0
void* GetMemberPointer(void*, uint32_t);
extern "C" void YellowAuto_004457e0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN5Field13FieldSodateya9PokeLeaveEN8Savedata10SodateyaIDEj");
extern "C" void YellowAuto_004457e0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
(void)arg1; GetMemberPointer(*(void**)(*(uint8_t**)(arg0 + 12) + 12), arg2);
}
#endif
