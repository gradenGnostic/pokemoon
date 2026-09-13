// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E7F18
void* __aeabi_vec_ctor_nocookie_nodtor(void*, void*, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_003e7f18(uint8_t* arg0) __asm__("_ZN6System6Camera13InFrameCameraC1Ev");
extern "C" uint8_t* YellowAuto_003e7f18(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x003E7FE0; __aeabi_vec_ctor_nocookie_nodtor((void*)(arg0 + 4), (void*)(*(uint32_t*)0x003E7FEC), 16U, 4U); *(uint32_t*)(arg0 + 4) = *(uint32_t*)0x003E7FE4; *(uint32_t*)(arg0 + 8) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 12) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 16) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 20) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 24) = *(uint32_t*)0x003E7FE4; *(uint32_t*)(arg0 + 28) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 32) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 36) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 40) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 44) = *(uint32_t*)0x003E7FE4; *(uint32_t*)(arg0 + 48) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 52) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 56) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 60) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 64) = *(uint32_t*)0x003E7FE4; __aeabi_vec_ctor_nocookie_nodtor((void*)(arg0 + 68), (void*)(*(uint32_t*)0x003E7FEC), 16U, 3U); *(uint32_t*)(arg0 + 68) = *(uint32_t*)0x003E7FE4; *(uint32_t*)(arg0 + 72) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 76) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 80) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 84) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 88) = *(uint32_t*)0x003E7FE4; *(uint32_t*)(arg0 + 92) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 96) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 100) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 104) = *(uint32_t*)0x003E7FE8; *(uint32_t*)(arg0 + 108) = *(uint32_t*)0x003E7FE4; *(uint32_t*)(arg0 + 112) = *(uint32_t*)0x003E7FE8; return arg0;
}
#endif
