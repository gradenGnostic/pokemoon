// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D4808
extern "C" void YellowAuto_003d4808(uint8_t* arg0, void* arg1) __asm__("_ZN6NetLib3P2P15NexRatingClient28UnregistRatingClientListenerEPNS0_23NexRatingClientListenerE");
extern "C" void YellowAuto_003d4808(uint8_t* arg0, void* arg1) {
if (*reinterpret_cast<uint32_t*>(arg0 + 4) == reinterpret_cast<uint32_t>(arg1)) *reinterpret_cast<uint32_t*>(arg0 + 4) = 0; else if (*reinterpret_cast<uint32_t*>(arg0 + 8) == reinterpret_cast<uint32_t>(arg1)) *reinterpret_cast<uint32_t*>(arg0 + 8) = 0; else if (*reinterpret_cast<uint32_t*>(arg0 + 12) == reinterpret_cast<uint32_t>(arg1)) *reinterpret_cast<uint32_t*>(arg0 + 12) = 0; else if (*reinterpret_cast<uint32_t*>(arg0 + 16) == reinterpret_cast<uint32_t>(arg1)) *reinterpret_cast<uint32_t*>(arg0 + 16) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D4794
extern "C" uint32_t YellowAuto_003d4794(uint8_t* arg0, void* arg1) __asm__("_ZN6NetLib3P2P15NexRatingClient26RegistRatingClientListenerEPNS0_23NexRatingClientListenerE");
extern "C" uint32_t YellowAuto_003d4794(uint8_t* arg0, void* arg1) {
if (*reinterpret_cast<uint32_t*>(arg0 + 4) == reinterpret_cast<uint32_t>(arg1)) return 0; if (*reinterpret_cast<uint32_t*>(arg0 + 8) == reinterpret_cast<uint32_t>(arg1)) return 0; if (*reinterpret_cast<uint32_t*>(arg0 + 12) == reinterpret_cast<uint32_t>(arg1)) return 0; if (*reinterpret_cast<uint32_t*>(arg0 + 16) == reinterpret_cast<uint32_t>(arg1)) return 0; if (*reinterpret_cast<uint32_t*>(arg0 + 4) == 0) *reinterpret_cast<uint32_t*>(arg0 + 4) = reinterpret_cast<uint32_t>(arg1); else if (*reinterpret_cast<uint32_t*>(arg0 + 8) == 0) *reinterpret_cast<uint32_t*>(arg0 + 8) = reinterpret_cast<uint32_t>(arg1); else if (*reinterpret_cast<uint32_t*>(arg0 + 12) == 0) *reinterpret_cast<uint32_t*>(arg0 + 12) = reinterpret_cast<uint32_t>(arg1); else if (*reinterpret_cast<uint32_t*>(arg0 + 16) == 0) *reinterpret_cast<uint32_t*>(arg0 + 16) = reinterpret_cast<uint32_t>(arg1); else return 0; return 1;
}
#endif
