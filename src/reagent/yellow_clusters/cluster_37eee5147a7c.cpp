// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001040E4
const uint8_t* h_lookup(const uint8_t*, int32_t, int32_t, int32_t);
uint8_t* h_data(const uint8_t*, int32_t);
const int32_t* h_index_ptr();
const void* h_locale_ptr();
void h_load(uint8_t*, const int32_t*, int32_t, int32_t, const void*);
void h_str_from_cstr(uint8_t*, const uint8_t*);
void h_str_copy(uint8_t*, const uint8_t*);
void h_str_dtor(uint8_t*);
extern "C" void YellowAuto_001040e4(uint8_t* arg0, const uint8_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, const uint8_t* arg5) __asm__("_ZNKSt8messagesIcE6do_getEiiiRKSs");
extern "C" void YellowAuto_001040e4(uint8_t* arg0, const uint8_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, const uint8_t* arg5) {
const uint8_t* t0 = h_lookup(arg1 + 16, arg2, arg3, arg4);
if (t0 == (const uint8_t*)0) {
h_str_copy(arg0, arg5);
} else {
uint8_t* t1 = h_data(arg1 + 16, arg2);
const int32_t* t2 = h_index_ptr();
int32_t t3 = *t2;
uint32_t t4 = *(uint32_t*)(*(uint32_t*)t1 + 12);
int32_t t5 = 0;
if ((uint32_t)t3 < t4) {
t5 = *(int32_t*)(*(uint32_t*)t1 + 8 + (uint32_t)t3 * 4);
}
if (t5 == 0) {
h_load(t1, t2, 1, 32, h_locale_ptr());
}
uint8_t t6[8];
h_str_from_cstr(t6, t0);
h_str_copy(arg0, t6);
h_str_dtor(t6);
}
return;
}
#endif
