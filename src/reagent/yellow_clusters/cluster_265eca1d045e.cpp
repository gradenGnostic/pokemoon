// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F1A8
extern "C" void YellowAuto_0035f1a8(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl26thread5EventC1EPNS_4heap11CtrHeapBaseE");
extern "C" void YellowAuto_0035f1a8(uint8_t* arg0, void* arg1) {
*reinterpret_cast<uint32_t*>(arg0) = reinterpret_cast<uint32_t>(arg1); *reinterpret_cast<uint32_t*>(arg0 + 4) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F16C
extern "C" bool YellowAuto_0035f16c(uint8_t* arg0) __asm__("_ZN4gfl26thread5Event7TryWaitEv");
extern "C" bool YellowAuto_0035f16c(uint8_t* arg0) {
uint32_t a = *reinterpret_cast<uint32_t*>(arg0 + 4); uint32_t v = *reinterpret_cast<uint32_t*>(a); uint32_t f = *reinterpret_cast<uint32_t*>(v + 16); return reinterpret_cast<bool(*)(void*)>(f)(reinterpret_cast<void*>(a));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F110
extern "C" bool YellowAuto_0035f110(uint8_t* arg0) __asm__("_ZN4gfl26thread5Event4WaitEv");
extern "C" bool YellowAuto_0035f110(uint8_t* arg0) {
uint32_t a = *reinterpret_cast<uint32_t*>(arg0 + 4); uint32_t v = *reinterpret_cast<uint32_t*>(a); uint32_t f = *reinterpret_cast<uint32_t*>(v + 12); return reinterpret_cast<bool(*)(void*)>(f)(reinterpret_cast<void*>(a));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F120
extern "C" void YellowAuto_0035f120(uint8_t* arg0) __asm__("_ZN4gfl26thread5Event5ClearEv");
extern "C" void YellowAuto_0035f120(uint8_t* arg0) {
uint32_t a = *reinterpret_cast<uint32_t*>(arg0 + 4); uint32_t v = *reinterpret_cast<uint32_t*>(a); uint32_t f = *reinterpret_cast<uint32_t*>(v + 20); reinterpret_cast<void(*)(void*)>(f)(reinterpret_cast<void*>(a));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F15C
extern "C" void YellowAuto_0035f15c(uint8_t* arg0) __asm__("_ZN4gfl26thread5Event6SignalEv");
extern "C" void YellowAuto_0035f15c(uint8_t* arg0) {
uint32_t a = *reinterpret_cast<uint32_t*>(arg0 + 4); uint32_t v = *reinterpret_cast<uint32_t*>(a); uint32_t f = *reinterpret_cast<uint32_t*>(v + 8); reinterpret_cast<void(*)(void*)>(f)(reinterpret_cast<void*>(a));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F17C
extern "C" void YellowAuto_0035f17c(uint8_t* arg0) __asm__("_ZN4gfl26thread5Event8FinalizeEv");
extern "C" void YellowAuto_0035f17c(uint8_t* arg0) {
uint32_t a = *reinterpret_cast<uint32_t*>(arg0 + 4); if (a == 0) return; uint32_t v = *reinterpret_cast<uint32_t*>(a); uint32_t f = *reinterpret_cast<uint32_t*>(v + 4); reinterpret_cast<void(*)(void*)>(f)(reinterpret_cast<void*>(a)); *reinterpret_cast<uint32_t*>(arg0 + 4) = 0;
}
#endif
