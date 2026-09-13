// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF78C
void aeabi_memcpy4(uint8_t*, const uint8_t*, uint32_t);
void sub_003CF724(uint8_t*, uint32_t);
void* new_helper(uint32_t, void*);
uint32_t virt_34(void*);
void* ctor_003D5DBC(void*, uint32_t, uint8_t*);
void send_003D4D88(void*, uint8_t*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_003cf78c(uint8_t* arg0) __asm__("_ZN6NetApp4Live7LiveNet18ExchangeBattleInfoEv");
extern "C" uint32_t YellowAuto_003cf78c(uint8_t* arg0) {
uint32_t sz = *(uint32_t*)0x003CF878;
aeabi_memcpy4(arg0 + 0x1C, arg0 + 0x6C54, sz);
sub_003CF724(arg0, 1);
uint8_t* p = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (p == (uint8_t*)0) {
void* heap = (void*)(*(uint32_t*)(arg0 + 0x4));
uint32_t nsz = *(uint32_t*)0x003CF87C;
void* mem = new_helper(nsz, heap);
uint8_t* obj = (uint8_t*)0;
if (mem != (void*)0) {
void* mgr = (void*)(*(uint32_t*)(arg0 + 0x4));
uint32_t v = virt_34(mgr);
obj = (uint8_t*)ctor_003D5DBC(mem, v, arg0);
*(uint32_t*)obj = *(uint32_t*)0x003CF880;
*(uint8_t*)(obj + 0x826) = (uint8_t)0;
}
*(uint32_t*)(arg0 + 0x10) = (uint32_t)obj;
p = obj;
if (p == (uint8_t*)0) {
p = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
if (p == (uint8_t*)0) {
return (uint32_t)0;
}
}
}
send_003D4D88(p, arg0 + 0x1C, sz, 1);
return (uint32_t)1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CFC6C
void* sub_00357668();
void sub_003D5F1C(void*, uint32_t);
void sub_003D62B4(void*, uint32_t, uint32_t, uint32_t);
void* sub_00105500(uint32_t, void*);
void* sub_00407DF8(void*);
extern "C" void YellowAuto_003cfc6c(uint8_t* arg0) __asm__("_ZN6NetApp4Live7LiveNet7ConnectEv");
extern "C" void YellowAuto_003cfc6c(uint8_t* arg0) {
uint32_t s = *(uint32_t*)(arg0 + 0x18u);
if (s == 0u) {
void* m = sub_00357668();
sub_003D5F1C(m, 0x73u);
sub_003D62B4(m, 2u, 0u, 0u);
void* al = *(void**)(arg0 + 0x4u);
void* p = sub_00105500(0x420u, al);
void* q = (void*)0;
if (p != (void*)0) {
q = sub_00407DF8(p);
}
*(void**)(arg0 + 0x8u) = q;
*(uint32_t*)(arg0 + 0x18u) = 1u;
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF688
void sub_003CF724(uint8_t*, uint32_t);
void sub_00407A74(void*);
void* sub_00357668();
void sub_003D66D4(void*, uint32_t);
extern "C" void YellowAuto_003cf688(uint8_t* arg0) __asm__("_ZN6NetApp4Live7LiveNet10DisconnectEv");
extern "C" void YellowAuto_003cf688(uint8_t* arg0) {
uint32_t s = *(uint32_t*)(arg0 + 0x18u);
if (s != 0u && s != 4u) {
sub_003CF724(arg0, 2u);
void* p = *(void**)(arg0 + 0x8u);
if (p != (void*)0) {
sub_00407A74(p);
void* q = *(void**)(arg0 + 0x8u);
if (q != (void*)0) {
void* vt = *(void**)(q);
void* fn = *(void**)((uint8_t*)vt + 0x4u);
((void(*)(void*))fn)(q);
*(void**)(arg0 + 0x8u) = (void*)0;
}
}
void* m = sub_00357668();
sub_003D66D4(m, 1u);
*(uint32_t*)(arg0 + 0x18u) = 4u;
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF884
void sub_00108A70(void*, uint32_t);
void sub_003CF724(uint8_t*, uint32_t);
void* sub_00105500(uint32_t, void*);
void* sub_003D5DBC(void*, uint32_t, uint8_t*);
void sub_003D4D88(void*, void*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_003cf884(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN6NetApp4Live7LiveNet18ExchangeRegulationEPK10Regulation");
extern "C" uint32_t YellowAuto_003cf884(uint8_t* arg0, const uint8_t* arg1) {
(void)arg1;
sub_00108A70((void*)(arg0 + 0x1Cu), 0x2000u);
sub_003CF724(arg0, 0u);
void* p = *(void**)(arg0 + 0xCu);
if (p == (void*)0) {
void* al = *(void**)(arg0 + 0x4u);
uint32_t sz = *(uint32_t*)(0x003CF968u);
void* nm = sub_00105500(sz, al);
void* obj = (void*)0;
if (nm != (void*)0) {
void* avt = *(void**)(al);
void* afn = *(void**)((uint8_t*)avt + 0x34u);
uint32_t av = ((uint32_t(*)(void*))afn)(al);
void* cr = sub_003D5DBC(nm, av, arg0);
*(uint32_t*)(cr) = *(uint32_t*)(0x003CF96Cu);
*(uint8_t*)((uint8_t*)cr + 0x826u) = 0u;
obj = cr;
}
*(void**)(arg0 + 0xCu) = obj;
p = obj;
}
uint32_t r = 0u;
if (p != (void*)0) {
sub_003D4D88(p, (void*)(arg0 + 0x1Cu), 0x2000u, 0u);
r = 1u;
}
return r;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2B20
void* GetInstance();
int32_t GetNetID(void*);
extern "C" uint32_t YellowAuto_004a2b20(const uint8_t* arg0) __asm__("_ZNK6NetApp4Live7LiveNet16GetMyStatus_MineEv");
extern "C" uint32_t YellowAuto_004a2b20(const uint8_t* arg0) {
(void)arg0;
void* v0 = GetInstance();
int32_t v1 = GetNetID(v0);
void* v2 = GetInstance();
uint32_t* v3 = *(uint32_t**)((uint8_t*)v2 + 128);
if (v3 == (uint32_t*)0) return 0;
return *(uint32_t*)((uint8_t*)v3 + v1 * 8 + 12);
}
#endif
