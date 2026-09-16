// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0029AE08
void FUN_0029d540(void*, void*, int32_t);
extern "C" void YellowAuto_0029ae08(uint8_t* arg0, void* arg1, int32_t arg2) __asm__("_ZN4gfl26Effect6System13ClearResourceEPN2nw3eft4HeapEi");
extern "C" void YellowAuto_0029ae08(uint8_t* arg0, void* arg1, int32_t arg2) {
uint8_t* v0 = *(uint8_t**)(arg0 + 4);
uint8_t* v1 = *(uint8_t**)(v0 + 12);
void* v2 = *(void**)(v1 + arg2 * 4);
void* v3 = arg1;
if (v3 == (void*)0) v3 = *(void**)((uint8_t*)v2 + 28);
FUN_0029d540(v2, v3, arg2);
void* v4 = *(void**)v3;
void (*v5)(void*, void*) = *(void (**)(void*, void*))((uint8_t*)v4 + 12);
v5(v3, v2);
*(uint32_t*)(v1 + arg2 * 4) = 0;
}
#endif
