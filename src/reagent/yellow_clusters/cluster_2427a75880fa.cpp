// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F4A68
extern "C" void* YellowAuto_003f4a68(uint8_t* arg0) __asm__("_ZN7gflnet212ServerClient26ServerClientRequestManager15GetHeapInternalEv");
extern "C" void* YellowAuto_003f4a68(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x10) == 0) return 0; return *(void**)(arg0 + 0x10);
}
#endif
