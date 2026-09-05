// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F9020
void GFLassert();
void* operator_new(uint32_t, void*);
void* FUN_002fb0ec(void*);
void FUN_002faba4(void*, void*, int32_t);
void FUN_0048e634(void*);
extern "C" void YellowAuto_002f9020(uint8_t* arg0, void* arg1, void* arg2, void* arg3) __asm__("_ZN3app4tool19InfoWindowSheetType10SyncCreateEPNS_4util4HeapEPNS2_19AppRenderingManagerEPNS0_21InfoWindowDataManagerE");
extern "C" void YellowAuto_002f9020(uint8_t* arg0, void* arg1, void* arg2, void* arg3) {
if (*(uint8_t *)(arg0 + 0x8c) != 0 || *(uint8_t *)(arg0 + 0x8d) != 0) GFLassert(); else *(void **)(arg0 + 0x80) = arg1, *(void **)(arg0 + 0x84) = arg2, *(uint8_t *)(arg0 + 0x8d) = 1, (arg3 == 0 ? (*(uint8_t *)(arg0 + 0x8e) = 1, *(void **)(arg0 + 0x88) = FUN_002fb0ec(operator_new(0x24, *(void **)((uint8_t *)arg1 + 8))), FUN_002faba4(*(void **)(arg0 + 0x88), *(void **)(arg0 + 0x80), ((int32_t (*)(uint8_t *))(*(void **)((uint8_t *)*(void **)arg0 + 0x70)))(arg0))) : (*(void **)(arg0 + 0x88) = arg3, *(uint8_t *)(arg0 + 0x8e) = 0, FUN_0048e634(arg3))), *(uint8_t *)(arg0 + 0x8d) = 2, ((void (*)(uint8_t *))(*(void **)((uint8_t *)*(void **)arg0 + 0x78)))(arg0), *(uint8_t *)((uint8_t *)*(void **)(arg0 + 0x98) + 0x44) = *(uint8_t *)(arg0 + 0x9c) | (*(uint8_t *)((uint8_t *)*(void **)(arg0 + 0x98) + 0x44) & 0xfe), *(void **)(arg0 + 0x80) = 0, *(uint8_t *)(arg0 + 0x8d) = 3;
}
#endif
