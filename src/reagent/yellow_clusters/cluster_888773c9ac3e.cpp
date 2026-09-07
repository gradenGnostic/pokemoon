// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045F6D4
void DeleteHeap(void*);
extern "C" uint8_t* YellowAuto_0045f6d4(uint8_t* arg0) __asm__("_ZN9NetAppLib6System19ApplicationWorkBaseD1Ev");
extern "C" uint8_t* YellowAuto_0045f6d4(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x0045F76C;
if (*(uint32_t*)(arg0 + 0x14) != (uint32_t)0) { ((void(**)(void*))*(uint32_t*)(uint32_t*)*(uint32_t*)(arg0 + 0x14))[1]((void*)*(uint32_t*)(arg0 + 0x14)); *(uint32_t*)(arg0 + 0x14) = (uint32_t)0; }
if (*(uint32_t*)(arg0 + 0x10) != (uint32_t)0) { ((void(**)(void*))*(uint32_t*)(uint32_t*)*(uint32_t*)(arg0 + 0x10))[1]((void*)*(uint32_t*)(arg0 + 0x10)); *(uint32_t*)(arg0 + 0x10) = (uint32_t)0; }
if (*(uint32_t*)(arg0 + 0x0C) != (uint32_t)0) { DeleteHeap((void*)*(uint32_t*)(arg0 + 0x0C)); *(uint32_t*)(arg0 + 0x0C) = (uint32_t)0; }
if (*(uint32_t*)(arg0 + 0x08) != (uint32_t)0) { ((void(**)(void*))*(uint32_t*)(uint32_t*)*(uint32_t*)(arg0 + 0x08))[1]((void*)*(uint32_t*)(arg0 + 0x08)); *(uint32_t*)(arg0 + 0x08) = (uint32_t)0; }
if (*(uint32_t*)(arg0 + 0x04) != (uint32_t)0) { DeleteHeap((void*)*(uint32_t*)(arg0 + 0x04)); *(uint32_t*)(arg0 + 0x04) = (uint32_t)0; }
return arg0;
}
#endif
