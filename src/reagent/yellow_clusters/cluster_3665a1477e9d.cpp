// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103F6C
uint8_t* func_00103b64(uint8_t*, uint32_t);
uint8_t* func_003019d0(uint32_t, uint32_t, void*, void*);
void func_00302d84(uint8_t*, const uint8_t*);
void func_00301a78(void*, void*);
void func_003022a8(uint8_t*);
extern "C" uint8_t* YellowAuto_00103f6c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4__rw18__rw_locale_vectorISt18__rw_open_cat_dataE6resizeEj");
extern "C" uint8_t* YellowAuto_00103f6c(uint8_t* arg0, uint32_t arg1) {
uint8_t tmp[8];
uint8_t loc_tmp[4];
uint8_t* tmp_ptr = func_00103b64(tmp, arg1);
uint8_t* new_ptr = func_003019d0(8, arg1, *(void**)0x00103FE8, *(void**)0x00103FE4);
uint32_t old_size = *(uint32_t*)(arg0 + 4);
uint32_t copy_n = old_size;
if (arg1 <= old_size) copy_n = arg1;
uint8_t* old_ptr = *(uint8_t**)arg0;
uint8_t* dst = new_ptr;
uint8_t* src = old_ptr;
uint8_t* copy_end = old_ptr + (copy_n << 3);
while (src != copy_end) { func_00302d84(dst, src); dst = dst + 8; src = src + 8; }
uint32_t i = copy_n;
while (i < arg1) { func_00302d84(new_ptr + (i << 3), tmp_ptr); i = i + 1; }
func_00301a78(old_ptr, *(void**)0x00103FE4);
*(uint32_t*)(arg0 + 4) = arg1;
*(uint8_t**)arg0 = new_ptr;
func_003022a8(loc_tmp);
return new_ptr;
}
#endif
