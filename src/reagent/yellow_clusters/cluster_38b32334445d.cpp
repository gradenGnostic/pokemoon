// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044D71C
void ReleaseArray(void*);
void ReleaseObject(void*);
extern "C" uint8_t* YellowAuto_0044d71c(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI27JoinFestaRankingListManagerD1Ev");
extern "C" uint8_t* YellowAuto_0044d71c(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x0044d76c; if (*(uint8_t **)(arg0 + 8) != 0) ReleaseArray(*(void **)(arg0 + 8)), *(uint8_t **)(arg0 + 8) = 0; if (*(uint8_t **)(arg0 + 4) != 0) ReleaseObject(*(void **)(arg0 + 4)), *(uint8_t **)(arg0 + 4) = 0; *(uint32_t *)(arg0 + 0xc) = 0; *(uint32_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = 0; return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044D5FC
void* OperatorNew(uint32_t, void*);
void* OperatorNewArray(uint32_t, void*);
void* VecCtorNoCookie(void*, void*, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_0044d5fc(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI27JoinFestaRankingListManagerC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_0044d5fc(uint8_t* arg0, void* arg1) {
*(uint32_t*)arg0 = *(uint32_t*)0x0044D6B8;
*(uint32_t*)(arg0 + 4) = 0;
*(uint32_t*)(arg0 + 8) = 0;
*(uint32_t*)(arg0 + 12) = 0;
*(uint32_t*)(arg0 + 16) = 0;
*(uint32_t*)(arg0 + 20) = 0;
uint8_t* tmp = (uint8_t*)OperatorNew(48, arg1);
if (tmp != (uint8_t*)0) {
*(uint32_t*)(tmp + 0) = 0;
*(uint32_t*)(tmp + 4) = 0;
*(uint32_t*)(tmp + 8) = 0;
*(uint32_t*)(tmp + 12) = 0;
*(uint32_t*)(tmp + 16) = 0;
*(uint32_t*)(tmp + 20) = 0;
*(uint32_t*)(tmp + 24) = 0;
*(uint32_t*)(tmp + 28) = 0;
*(uint32_t*)(tmp + 32) = 0;
*(uint32_t*)(tmp + 36) = 0;
*(uint32_t*)(tmp + 40) = 0;
*(uint8_t*)(tmp + 44) = 0;
}
*(uint8_t**)(arg0 + 4) = tmp;
void* raw = OperatorNewArray(4800, arg1);
void* vec = (void*)0;
if (raw != (void*)0) {
vec = VecCtorNoCookie(raw, *(void**)0x0044D6BC, 48, 100);
}
*(void**)(arg0 + 8) = vec;
*(uint32_t*)(arg0 + 12) = 100;
uint8_t* head = *(uint8_t**)(arg0 + 4);
*(uint8_t**)head = head;
*(uint8_t**)(head + 4) = head;
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044D1E8
void* GetMgrA();
void* VecCtorNoCookie(void*, void*, uint32_t, uint32_t);
void MemClr(void*, uint32_t);
int32_t IsValidKey(const void*);
void SubD470(uint8_t*, uint8_t*, int32_t);
void* GetMgrB();
extern "C" void YellowAuto_0044d1e8(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI27JoinFestaRankingListManager20SetupRankingDataListEv");
extern "C" void YellowAuto_0044d1e8(uint8_t* arg0) {
void* mgr = GetMgrA();
uint8_t* base = (uint8_t*)mgr + 56;
uint8_t buf[5600];
VecCtorNoCookie(buf, *(void**)0x0044D468, 56, 100);
MemClr(buf, *(uint32_t*)0x0044D46C);
int32_t n = 0;
for (int32_t i = 0; i < 100; ++i) {
uint8_t* src = base + (uint32_t)i * 48;
if (IsValidKey(src + 24) != 0) {
uint8_t* dst = buf + (uint32_t)n * 56;
for (uint32_t k = 0; k < 12; ++k) {
((uint32_t*)dst)[k] = ((uint32_t*)(src + 24))[k];
}
n = n + 1;
}
}
SubD470(arg0, buf, n);
GetMgrB();
}
#endif
