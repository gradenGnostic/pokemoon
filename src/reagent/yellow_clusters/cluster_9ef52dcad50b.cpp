// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EEAB4
void GFLassert();
extern "C" void YellowAuto_002eeab4(void* arg0, bool arg1) __asm__("_ZN3app4tool14InfoWindowBase12SetBgVisibleEb");
extern "C" void YellowAuto_002eeab4(void* arg0, bool arg1) {
if (*(uint8_t *)((uint8_t *)arg0 + 0x8c) != 0) GFLassert(); if (*(uint8_t *)((uint8_t *)arg0 + 0x8c) != 0) return; void *iVar1 = *(void **)((uint8_t *)arg0 + 0x98); *(uint8_t *)((uint8_t *)arg0 + 0x9c) = (uint8_t)arg1; if (iVar1 != 0) *(uint8_t *)((uint8_t *)iVar1 + 0x44) = (uint8_t)((*(uint8_t *)((uint8_t *)iVar1 + 0x44) & 0xfe) | (uint8_t)arg1);
}
#endif
