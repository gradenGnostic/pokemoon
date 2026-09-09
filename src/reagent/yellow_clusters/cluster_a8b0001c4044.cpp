// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00190D74
void FUN_002feaa8(void*, int32_t);
extern "C" void YellowAuto_00190d74(void* arg0) __asm__("_ZN2nn3nex13MemoryManager4FreeEPv");
extern "C" void YellowAuto_00190d74(void* arg0) {
if (arg0 == 0) return; uint8_t* hdr = (uint8_t*)arg0 - 8; void* fn = *(void**)hdr; if (fn != 0) ((void (*)(void*))fn)(hdr); else FUN_002feaa8(hdr, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00190D9C
void* FUN_002fdfc0(uint32_t, int32_t);
extern "C" void* YellowAuto_00190d9c(uint32_t arg0) __asm__("_ZN2nn3nex13MemoryManager8AllocateEj");
extern "C" void* YellowAuto_00190d9c(uint32_t arg0) {
uint32_t n = ((arg0 + 3u) & 0xFFFFFFFCu) + 8u; uint8_t* mgr = *(uint8_t**)0x00190DE0; void* mem = 0; void* fn = *(void**)(mgr + 0x3C); if (fn == 0) mem = FUN_002fdfc0(n, 0); else mem = ((void* (*)(uint32_t))fn)(n); *(uint32_t*)mem = *(uint32_t*)(mgr + 0x40); return (void*)((uint8_t*)mem + 8);
}
#endif
