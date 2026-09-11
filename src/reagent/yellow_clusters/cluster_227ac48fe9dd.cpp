// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D25CC
uint8_t* p;
extern "C" void YellowAuto_003d25cc() __asm__("_ZN6NetLib17NijiNetworkSystem18ResetLiveRecSenderEv");
extern "C" void YellowAuto_003d25cc() {
p = *reinterpret_cast<uint8_t**>(*reinterpret_cast<uint32_t*>(0x3D2600u) + 0x18u); if (p != nullptr) { if (*reinterpret_cast<int32_t*>(p) == 4) { *reinterpret_cast<int32_t*>(p) = 5; reinterpret_cast<int32_t*>(p)[1] = 3; } reinterpret_cast<int32_t*>(p)[1] = 1; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D1C7C
uint8_t* p;
extern "C" void YellowAuto_003d1c7c() __asm__("_ZN6NetLib17NijiNetworkSystem17StopLiveRecSenderEv");
extern "C" void YellowAuto_003d1c7c() {
p = *reinterpret_cast<uint8_t**>(*reinterpret_cast<uint32_t*>(0x3D1CC4u) + 0x18u); if (p != nullptr) { reinterpret_cast<int32_t*>(p)[4] = 0; reinterpret_cast<int32_t*>(p)[3] = 255; if (*reinterpret_cast<int32_t*>(p) == 4) { *reinterpret_cast<int32_t*>(p) = 5; reinterpret_cast<int32_t*>(p)[1] = 3; } reinterpret_cast<int32_t*>(p)[1] = 4; reinterpret_cast<int32_t*>(p)[12] = 0; }
}
#endif
