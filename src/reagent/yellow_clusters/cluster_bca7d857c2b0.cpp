// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00350360
void* h_34b6bc(void);
void* h_34ae5c(void);
extern "C" uint8_t* YellowAuto_00350360(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl23lyt16LayoutRenderPathC1EPNS_3gfx12IGLAllocatorE");
extern "C" uint8_t* YellowAuto_00350360(uint8_t* arg0, void* arg1) {
*(void**)(arg0 + 0x4) = (void*)0;
*(void**)(arg0 + 0x8) = (void*)0;
*(void**)(arg0 + 0xC) = (void*)0;
*(void**)(arg0 + 0x10) = (void*)0;
*(uint32_t*)(arg0 + 0x354) = 0U;
*(uint32_t*)(arg0 + 0x358) = 0U;
if (arg1 != (void*)0) {
*(void**)(arg0 + 0x4) = h_34b6bc();
}
((uint8_t*)(*(void**)(arg0 + 0x4)))[8] = (uint8_t)0;
((uint8_t*)(*(void**)(arg0 + 0x4)))[9] = (uint8_t)1;
((void(*)(void*))((*(void***)(*(void**)(arg0 + 0x4)))[2]))(*(void**)(arg0 + 0x4));
if (arg1 != (void*)0) {
*(void**)(arg0 + 0x8) = h_34ae5c();
}
((void(*)(void*, uint32_t))((*(void***)(*(void**)(arg0 + 0x8)))[7]))(*(void**)(arg0 + 0x8), 1U);
((void(*)(void*, uint32_t))((*(void***)(*(void**)(arg0 + 0x8)))[9]))(*(void**)(arg0 + 0x8), 0U);
((void(*)(void*, uint32_t, uint32_t))((*(void***)(*(void**)(arg0 + 0x8)))[11]))(*(void**)(arg0 + 0x8), 6U, 7U);
((void(*)(void*))((*(void***)(*(void**)(arg0 + 0x8)))[13]))(*(void**)(arg0 + 0x8));
for (int32_t i = 0; i < 64; ++i) {
*(uint32_t*)(arg0 + 0x114 + i * 4) = 4U;
*(uint32_t*)(arg0 + 0x14 + i * 4) = 0U;
*(uint32_t*)(arg0 + 0x214 + i * 4) = 0U;
*(uint8_t*)(arg0 + 0x314 + i) = (uint8_t)0x80;
}
*(uint32_t*)(arg0 + 0x358) = 64U;
return arg0;
}
#endif
