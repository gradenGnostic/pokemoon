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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CE008
uint32_t func_003cd1b4(const uint8_t*, uint32_t);
uint32_t func_default_qr_alloc_size(void);
uint8_t* func_get_heap_for_alloc(uint8_t*);
void* func_new_array(uint32_t, uint8_t*);
uint32_t func_003cd558(const uint8_t*, uint32_t, uint8_t*, uint8_t*, uint32_t);
uint32_t func_00173e9c(void);
void* func_new(uint32_t, uint8_t*);
uint8_t* func_dressup_ctor(uint8_t*);
void func_0027fa9c(uint8_t*, uint8_t*, const uint8_t*, const uint8_t*);
const uint8_t* func_qr_const_ptr(void);
const uint8_t* func_qr_const_block(void);
void func_get_gamemanager(void);
void func_delete_array(void*);
extern "C" uint32_t YellowAuto_003ce008(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint8_t* arg3) __asm__("_ZN6NetApp2QR9QRUtility28AnalyzeQRBinaryForBattleTeamEPN4gfl24heap11CtrHeapBaseEPKvjPN3pml9PokePartyE");
extern "C" uint32_t YellowAuto_003ce008(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint8_t* arg3) {
uint32_t t = func_003cd1b4(arg1, arg2);
if (t == 13u) return 3u;
uint32_t n = func_default_qr_alloc_size();
if (t >= 3u && t <= 12u) n = 96u;
uint8_t* h = func_get_heap_for_alloc(arg0);
uint8_t* b = (uint8_t*)func_new_array(n, h);
uint32_t ok = func_003cd558(arg1, n, b, arg0, t);
uint32_t r = 3u;
if (ok != 0u && b != (uint8_t*)0) {
if ((((const uint32_t*)b)[0] & 2u) == 0u) r = 4u;
else {
uint32_t v = func_00173e9c();
uint16_t w = ((const uint16_t*)b)[2];
if ((uint16_t)(w & (uint16_t)(1u << (v & 255u))) == 0u) r = 5u;
else if (t == 0u) r = 1u;
else if (t == 1u) r = 2u;
else if (t == 2u) {
uint8_t* h2 = func_get_heap_for_alloc(arg0);
uint8_t* d = (uint8_t*)func_new(512u, h2);
uint8_t* o = (uint8_t*)0;
if (d != (uint8_t*)0) o = func_dressup_ctor(d + 380u) - 380u;
func_0027fa9c(o + 24u, b + 8u, func_qr_const_ptr(), func_qr_const_block());
func_get_gamemanager();
r = 3u;
}
}
}
if (b != (uint8_t*)0) func_delete_array((void*)b);
return r;
}
#endif
