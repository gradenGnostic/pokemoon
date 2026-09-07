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
