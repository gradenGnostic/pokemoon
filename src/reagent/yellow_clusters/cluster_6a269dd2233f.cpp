// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EEAF8
void GFLassert();
void* operator_new(uint32_t, void*);
void* FUN_002fb0ec(void*);
bool FUN_0048e634(void*);
void FUN_002fae64(void*, void*, int32_t);
extern "C" void YellowAuto_002eeaf8(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3, void* arg4) __asm__("_ZN3app4tool18InfoWindowBookType16StartAsyncCreateEPNS_4util4HeapEPNS2_19AppRenderingManagerEjPNS0_21InfoWindowDataManagerE");
extern "C" void YellowAuto_002eeaf8(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3, void* arg4) {
*(uint32_t*)(arg0 + 0xa0) = arg3; if (*(uint8_t*)(arg0 + 0x8c) != 0 || *(uint8_t*)(arg0 + 0x8d) != 0) { GFLassert(); return; } *(uint32_t*)(arg0 + 0x80) = (uint32_t)arg1; *(uint32_t*)(arg0 + 0x84) = (uint32_t)arg2; *(uint8_t*)(arg0 + 0x8d) = 1; if (arg4 == 0) { *(uint8_t*)(arg0 + 0x8e) = 1; *(uint32_t*)(arg0 + 0x88) = (uint32_t)operator_new(0x24, (void*)(*(uint32_t*)((uint8_t*)arg1 + 8))); if (*(uint32_t*)(arg0 + 0x88) != 0) { *(uint32_t*)(arg0 + 0x88) = (uint32_t)FUN_002fb0ec((void*)(*(uint32_t*)(arg0 + 0x88))); } FUN_002fae64((void*)(*(uint32_t*)(arg0 + 0x88)), arg1, (*(int32_t (**)(uint8_t*))((*(uint32_t*)arg0) + 0x70))(arg0)); } else { *(uint32_t*)(arg0 + 0x88) = (uint32_t)arg4; *(uint8_t*)(arg0 + 0x8e) = 0; FUN_0048e634(arg4); } if (FUN_0048e634((void*)(*(uint32_t*)(arg0 + 0x88)))) { *(uint8_t*)(arg0 + 0x8d) = 2; (*(void (**)(uint8_t*))((*(uint32_t*)arg0) + 0x78))(arg0); *(uint8_t*)(*(uint32_t*)((uint8_t*)arg0 + 0x98) + 0x44) = (uint8_t)((*(uint8_t*)(arg0 + 0x9c)) | (*(uint8_t*)(*(uint32_t*)((uint8_t*)arg0 + 0x98) + 0x44) & 0xfe)); *(uint32_t*)(arg0 + 0x80) = 0; *(uint8_t*)(arg0 + 0x8d) = 3; }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE994
void helper_sync_create(uint8_t*, void*, void*, void*);
extern "C" void YellowAuto_002ee994(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3, void* arg4) __asm__("_ZN3app4tool18InfoWindowBookType10SyncCreateEPNS_4util4HeapEPNS2_19AppRenderingManagerEjPNS0_21InfoWindowDataManagerE");
extern "C" void YellowAuto_002ee994(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3, void* arg4) {
*(uint32_t*)(arg0 + 0xA0) = arg3;
helper_sync_create(arg0, arg1, arg2, arg4);
}
#endif
