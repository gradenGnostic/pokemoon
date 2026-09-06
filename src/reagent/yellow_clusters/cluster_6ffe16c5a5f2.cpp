// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E90D0
void __aeabi_memcpy(void*, const void*, uint32_t);
void GFLassert();
extern "C" void YellowAuto_002e90d0(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3app4tool10LytTexData17CopyTextureBufferEPS1_");
extern "C" void YellowAuto_002e90d0(uint8_t* arg0, const uint8_t* arg1) {
if (*(uint32_t*)(arg0 + 0x20) != 0 && *(uint32_t*)(arg1 + 0x24) == *(uint32_t*)(arg0 + 0x24)) __aeabi_memcpy(*(void**)(arg0 + 0x20), *(const void**)(arg1 + 0x20), *(uint32_t*)(arg0 + 0x24)); if (*(uint32_t*)(arg0 + 0x20) != 0 && *(uint32_t*)(arg1 + 0x24) == *(uint32_t*)(arg0 + 0x24)) *(uint32_t*)(arg0 + 0x30) = *(uint32_t*)(arg1 + 0x30); if (*(uint32_t*)(arg0 + 0x20) != 0 && *(uint32_t*)(arg1 + 0x24) == *(uint32_t*)(arg0 + 0x24)) return; GFLassert(); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E8EFC
int32_t IsArcFileLoadDataFinished(void*, void*);
int32_t FUN_00497608(void*, uint32_t);
void DeleteTexture_helper(void*);
void LoadTexture_helper(void*, uint32_t, int32_t);
extern "C" int32_t YellowAuto_002e8efc(uint8_t* arg0) __asm__("_ZN3app4tool10LytTexData11LoadTextureEv");
extern "C" int32_t YellowAuto_002e8efc(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x20) == 0) *(uint8_t*)(arg0 + 4) = 0; else if (*(uint32_t*)(arg0 + 0x24) == 0) *(uint8_t*)(arg0 + 4) = IsArcFileLoadDataFinished(*(void**)(arg0 + 0x34), arg0 + 0x20) != 0; else *(uint8_t*)(arg0 + 4) = FUN_00497608(*(void**)(arg0 + 0x34), *(uint32_t*)(arg0 + 0x20)) != 0; if (*(uint8_t*)(arg0 + 4) == 1 && *(uint8_t*)(arg0 + 0x1c) == 1) DeleteTexture_helper(arg0 + 8); if (*(uint8_t*)(arg0 + 4) == 1 && *(uint8_t*)(arg0 + 0x1c) == 1) *(uint8_t*)(arg0 + 0x1c) = 0; if (*(uint8_t*)(arg0 + 4) == 1) LoadTexture_helper(arg0 + 8, *(uint32_t*)(arg0 + 0x20), *(int32_t*)(arg0 + 0x30)); if (*(uint8_t*)(arg0 + 4) == 1) *(uint8_t*)(arg0 + 0x1c) = 1; if (*(uint8_t*)(arg0 + 4) == 1) *(uint8_t*)(arg0 + 0x3c) = 0; return *(int8_t*)(arg0 + 4);
}
#endif
