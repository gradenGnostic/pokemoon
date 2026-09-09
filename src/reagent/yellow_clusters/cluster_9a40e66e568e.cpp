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
