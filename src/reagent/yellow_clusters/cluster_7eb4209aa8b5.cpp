// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E2D64
void* operator_new(uint32_t, void*);
void* FUN_002daab0(void*, int32_t, void*, uint32_t, uint32_t, uint32_t);
void Setup(uint8_t*, uint8_t*, uint8_t*);
extern "C" void YellowAuto_002e2d64(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) __asm__("_ZN3App8PokeList17PokeListBaseFrame5SetupEPNS0_9APP_PARAMEPNS0_13CONTEXT_PARAME");
extern "C" void YellowAuto_002e2d64(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) {
uint8_t* v0 = (uint8_t*)operator_new(0x8c, *(void**)(*(uint8_t**)(arg0 + 0x24) + 8)); *(void**)(arg0 + 0x40) = v0 == 0 ? 0 : FUN_002daab0(v0, *(int32_t*)(*(uint8_t**)(arg0 + 0x2c) + 0xc), *(void**)(*(uint8_t**)(arg0 + 0x24) + 8), *(uint32_t*)(arg0 + 0x30), *(uint32_t*)(arg0 + 0x3c), *(uint32_t*)(*(uint8_t**)(arg0 + 0x2c) + 0x14)); *(uint8_t**)(arg0 + 0x2c) = arg1; *(uint8_t**)(arg0 + 0x30) = arg2; *(uint32_t*)(arg0 + 0x24) = *(uint32_t*)(arg1 + 8); *(uint32_t*)(arg0 + 0x28) = *(uint32_t*)(arg1 + 4); *(uint32_t*)(arg0 + 0x3c) = *(uint32_t*)(arg2 + 0xbc); (*(void (**)(uint8_t*))( *(uint8_t**)(arg0) + 0x1c))(arg0);
}
#endif
