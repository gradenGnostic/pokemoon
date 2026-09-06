// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455C4C
void* sub_461030(void*, void*);
void* sub_354664(void*, uint32_t, void*);
void sub_2e7314(void*, void*);
extern "C" void* YellowAuto_00455c4c(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerViewC1EPNS_6System19ApplicationWorkBaseERNS_2UI17NetAppMessageMenuE");
extern "C" void* YellowAuto_00455c4c(uint8_t* arg0, void* arg1, void* arg2) {
arg0 = (uint8_t*)sub_461030(arg0, *(void**)((uint8_t*)arg1 + 8)); *(uint32_t*)arg0 = *(uint32_t*)0x00455d28; *(uint32_t*)(arg0 + 0xa0) = *(uint32_t*)0x00455d28 + 0x68; *(uint32_t*)(arg0 + 0xa4) = *(uint32_t*)0x00455d28 + 0x7c; *(void**)(arg0 + 0xa8) = arg1; *(uint32_t*)(arg0 + 0xac) = 0; *(void**)(arg0 + 0xb0) = arg2; *(uint32_t*)(arg0 + 0xb4) = 0xffffffffu; *(uint32_t*)(arg0 + 0xb8) = 0; *(uint32_t*)(arg0 + 0xbc) = 0; *(uint32_t*)(arg0 + 0xc0) = 0; *(uint32_t*)(arg0 + 0xc4) = 0; sub_354664(arg0 + 0xc8, 0x40, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); sub_354664(arg0 + 0xd8, 0x400, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); sub_354664(arg0 + 0xe8, 0x40, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); sub_354664(arg0 + 0xf8, 0x40, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); sub_354664(arg0 + 0x108, 0x40, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); *(void**)(*(void**)(arg0 + 0xb0) + 0x90) = arg0 + 0xa0; sub_2e7314(arg0, *(void**)(arg0 + 0xb0)); return arg0;
}
#endif
