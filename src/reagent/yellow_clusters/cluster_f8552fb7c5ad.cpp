// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044F774
void func_00359000(uint8_t*);
void func_0044fd40(uint8_t*);
void func_0044f7d0(uint8_t*, uint8_t*);
void func_0044f9f4(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0044f774(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib11JoinFestaUI30JoinFestaAttractionListManager10UpdateListEb");
extern "C" void YellowAuto_0044f774(uint8_t* arg0, bool arg1) {
if (arg1) { if (*(arg0 + 0x75) != 0) { return; } } func_00359000(arg0 + 8); func_0044fd40(arg0); if (*(arg0 + 0x74) == 0) { func_0044f7d0(arg0, arg0 + 0x38); *(arg0 + 0x74) = 1; } func_0044f9f4(arg0, arg0 + 0x4C); *(arg0 + 0x75) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044FC78
uint8_t* func_00357788();
void func_004aaedc(uint8_t*, uint8_t*);
uint8_t* func_00472550(uint8_t*, uint8_t*);
bool func_004aabac(uint8_t*);
bool func_004aabc0(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0044fc78(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI30JoinFestaAttractionListManager20UpdateEntryTimeLimitEv");
extern "C" void YellowAuto_0044fc78(uint8_t* arg0) {
uint8_t* mgr = func_00357788(); uint32_t* sentinel = (uint32_t*)*(uint32_t*)(arg0 + 0x4C); uint8_t* node = (uint8_t*)*(sentinel + 1); while (node != (uint8_t*)sentinel) { uint8_t key[16]; func_004aaedc(key, node + 8); uint8_t* personal = func_00472550(mgr, key); if (personal != (uint8_t*)0) { uint8_t* pkt = node + 0x210; if (func_004aabac(personal) && func_004aabc0(personal, pkt)) { *(uint32_t*)(pkt + 8) = *(uint32_t*)(personal + 0x210); } else { *(uint32_t*)(pkt + 8) = 0; } } node = (uint8_t*)*(uint32_t*)(node + 4); }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00450770
uint32_t helper_vtable_004508a4();
void* helper_table_004508a8();
void __aeabi_vec_delete(void*, void*);
uint8_t* helper_00469354(uint8_t*);
void helper_0030181c(void*);
void helper_00357cd8(void*);
extern "C" uint8_t* YellowAuto_00450770(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI30JoinFestaAttractionListManagerD1Ev");
extern "C" uint8_t* YellowAuto_00450770(uint8_t* arg0) {
*(uint32_t*)arg0 = helper_vtable_004508a4();
if (*(uint32_t*)(arg0 + 100) != (uint32_t)0) { __aeabi_vec_delete(*(void**)(arg0 + 100), helper_table_004508a8()); *(uint32_t*)(arg0 + 100) = (uint32_t)0; }
if (*(uint32_t*)(arg0 + 96) != (uint32_t)0) { helper_0030181c((void*)(helper_00469354(*(uint8_t**)(arg0 + 96) + 8) - 8)); *(uint32_t*)(arg0 + 96) = (uint32_t)0; }
*(uint32_t*)(arg0 + 104) = (uint32_t)0;
*(uint32_t*)(arg0 + 108) = (uint32_t)0;
*(uint32_t*)(arg0 + 112) = (uint32_t)0;
if (*(uint32_t*)(arg0 + 80) != (uint32_t)0) { __aeabi_vec_delete(*(void**)(arg0 + 80), helper_table_004508a8()); *(uint32_t*)(arg0 + 80) = (uint32_t)0; }
if (*(uint32_t*)(arg0 + 76) != (uint32_t)0) { helper_0030181c((void*)(helper_00469354(*(uint8_t**)(arg0 + 76) + 8) - 8)); *(uint32_t*)(arg0 + 76) = (uint32_t)0; }
*(uint32_t*)(arg0 + 84) = (uint32_t)0;
*(uint32_t*)(arg0 + 88) = (uint32_t)0;
*(uint32_t*)(arg0 + 92) = (uint32_t)0;
if (*(uint32_t*)(arg0 + 60) != (uint32_t)0) { __aeabi_vec_delete(*(void**)(arg0 + 60), helper_table_004508a8()); *(uint32_t*)(arg0 + 60) = (uint32_t)0; }
if (*(uint32_t*)(arg0 + 56) != (uint32_t)0) { helper_0030181c((void*)(helper_00469354(*(uint8_t**)(arg0 + 56) + 8) - 8)); *(uint32_t*)(arg0 + 56) = (uint32_t)0; }
*(uint32_t*)(arg0 + 64) = (uint32_t)0;
*(uint32_t*)(arg0 + 68) = (uint32_t)0;
*(uint32_t*)(arg0 + 72) = (uint32_t)0;
if (*(uint32_t*)(arg0 + 40) != (uint32_t)0) { helper_00357cd8(*(void**)(arg0 + 40)); *(uint32_t*)(arg0 + 40) = (uint32_t)0; }
if (*(uint32_t*)(arg0 + 36) != (uint32_t)0) { helper_0030181c(*(void**)(arg0 + 36)); *(uint32_t*)(arg0 + 36) = (uint32_t)0; }
*(uint32_t*)(arg0 + 44) = (uint32_t)0;
*(uint32_t*)(arg0 + 48) = (uint32_t)0;
*(uint32_t*)(arg0 + 52) = (uint32_t)0;
return arg0;
}
#endif
