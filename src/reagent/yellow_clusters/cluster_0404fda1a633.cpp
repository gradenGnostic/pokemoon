// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CD5F8
void gfl_assert(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void* heap_alloc(uint32_t arg0, uint8_t* arg1);
void mem_copy(void* arg0, const void* arg1, uint32_t arg2);
void sign_binary(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, uint8_t* arg3);
void heap_free(void* arg0);
extern "C" void YellowAuto_003cd5f8(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN6NetApp2QR9QRUtility16SetUpZukanQRDataEPN4gfl24heap11CtrHeapBaseEPNS0_8QR_ZUKANE");
extern "C" void YellowAuto_003cd5f8(uint8_t* arg0, uint8_t* arg1) {
if (arg1 == (uint8_t*)0 || arg0 == (uint8_t*)0) { gfl_assert(0, 0, 0, 0); return; } *(uint32_t*)arg1 = 4294967295u; *(uint16_t*)(arg1 + 4) = 65535u; uint8_t* tmp = (uint8_t*)heap_alloc(108u, arg0); mem_copy((void*)tmp, (const void*)arg1, 108u); sign_binary(arg1, tmp, 88u, arg0); if (tmp != (uint8_t*)0) { heap_free((void*)tmp); } *(arg1 + 98) = 80; *(arg1 + 99) = 79; *(arg1 + 100) = 75; *(arg1 + 101) = 69; *(arg1 + 102) = 3;
}
#endif
