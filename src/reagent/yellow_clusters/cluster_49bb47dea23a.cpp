// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F0BB8
void* GetHeapByHeapId(int32_t);
extern "C" void* YellowAuto_003f0bb8(uint8_t* arg0) __asm__("_ZN7GameSys16GameEventManager7GetHeapEv");
extern "C" void* YellowAuto_003f0bb8(uint8_t* arg0) {
(void)arg0; return GetHeapByHeapId(10);
}
#endif
