// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00426A3C
void GameEvent(void* arg0, void* arg1);
extern "C" void YellowAuto_00426a3c(void* arg0, void* arg1) __asm__("_ZN8NetEvent30JoinFestaAttractionRetireEventC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00426a3c(void* arg0, void* arg1) {
GameEvent(arg0, arg1);
*(uint32_t*)arg0 = *(const uint32_t*)0x00426a50;
}
#endif
