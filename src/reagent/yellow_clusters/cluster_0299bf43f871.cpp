// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FBDCC
extern "C" void YellowAuto_003fbdcc(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet23nex18NexDataStoreClient31UnregistDataStoreClientListenerEPNS0_26NexDataStoreClientListenerE");
extern "C" void YellowAuto_003fbdcc(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)(arg0 + 0x14) == (uint32_t)arg1) *(uint32_t*)(arg0 + 0x14) = 0; else if (*(uint32_t*)(arg0 + 0x18) == (uint32_t)arg1) *(uint32_t*)(arg0 + 0x18) = 0; else if (*(uint32_t*)(arg0 + 0x1c) == (uint32_t)arg1) *(uint32_t*)(arg0 + 0x1c) = 0; else if (*(uint32_t*)(arg0 + 0x20) == (uint32_t)arg1) *(uint32_t*)(arg0 + 0x20) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FBD58
extern "C" bool YellowAuto_003fbd58(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet23nex18NexDataStoreClient29RegistDataStoreClientListenerEPNS0_26NexDataStoreClientListenerE");
extern "C" bool YellowAuto_003fbd58(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)(arg0 + 0x14) == (uint32_t)arg1) return false; if (*(uint32_t*)(arg0 + 0x18) == (uint32_t)arg1) return false; if (*(uint32_t*)(arg0 + 0x1c) == (uint32_t)arg1) return false; if (*(uint32_t*)(arg0 + 0x20) == (uint32_t)arg1) return false; if (*(uint32_t*)(arg0 + 0x14) == 0) { *(uint32_t*)(arg0 + 0x14) = (uint32_t)arg1; return true; } if (*(uint32_t*)(arg0 + 0x18) == 0) { *(uint32_t*)(arg0 + 0x18) = (uint32_t)arg1; return true; } if (*(uint32_t*)(arg0 + 0x1c) == 0) { *(uint32_t*)(arg0 + 0x1c) = (uint32_t)arg1; return true; } if (*(uint32_t*)(arg0 + 0x20) == 0) { *(uint32_t*)(arg0 + 0x20) = (uint32_t)arg1; return true; } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FB054
bool Cancel(void*, uint32_t);
extern "C" bool YellowAuto_003fb054(uint8_t* arg0) __asm__("_ZN7gflnet23nex18NexDataStoreClient16CancelConnectingEv");
extern "C" bool YellowAuto_003fb054(uint8_t* arg0) {
if (arg0[5] == 0) return false; uint32_t c = *(uint32_t*)(arg0 + 0x10); if (c == 0) return false; if (*(uint8_t*)(c + 0x10) != 1) return false; return Cancel((void*)c, 4);
}
#endif
