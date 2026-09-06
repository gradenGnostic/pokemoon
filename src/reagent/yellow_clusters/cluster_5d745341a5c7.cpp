// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399F04
void __aeabi_vec_delete(void*, void*);
extern "C" void YellowAuto_00399f04(uint8_t* arg0) __asm__("_ZN5Field9EventList20EventListDataManager9TerminateEv");
extern "C" void YellowAuto_00399f04(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x18) != 0) { __aeabi_vec_delete((void*)(*(uint32_t*)(arg0 + 0x18)), (void*)(*(uint32_t*)0x00399F34)); *(uint32_t*)(arg0 + 0x18) = 0; } *(uint32_t*)(arg0 + 0x14) = 0; *(uint32_t*)(arg0 + 0x1C) = 0;
}
#endif
