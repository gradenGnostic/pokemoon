// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00356304
void* func_00341EBC(void);
void func_0033EA04(void* arg0, void* arg1);
void func_00355D34(uint8_t* arg0, uint32_t arg1, uint32_t arg2);
uint32_t func_heap_off52(void* arg0);
extern "C" uint8_t* YellowAuto_00356304(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, uint8_t arg4) __asm__("_ZN4gfl23str7MsgDataC1EjjPNS_4heap11CtrHeapBaseENS1_8LoadTypeE");
extern "C" uint8_t* YellowAuto_00356304(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, uint8_t arg4) {
*(uint32_t*)(arg0 + 4) = (uint32_t)arg3;
*(uint8_t*)(arg0 + 8) = arg4;
*(uint32_t*)(arg0 + 12) = 0;
*(uint32_t*)(arg0 + 16) = 0;
*(uint32_t*)(arg0 + 20) = 0;
*(uint32_t*)(arg0 + 24) = 0;
*(uint32_t*)(arg0 + 36) = 0;
*(uint32_t*)(arg0 + 44) = arg1;
*(uint32_t*)(arg0 + 40) = 0;
*(uint32_t*)(arg0 + 36) = (uint32_t)func_00341EBC();
uint8_t buf[44];
*(uint32_t*)(buf + 0) = *(uint32_t*)(arg0 + 40);
*(uint32_t*)(buf + 4) = *(uint32_t*)(arg0 + 44);
buf[8] = 16;
*(uint32_t*)(buf + 12) = *(uint32_t*)(arg0 + 4);
buf[16] = 255;
buf[24] = 0;
buf[25] = 0;
buf[26] = 1;
*(uint32_t*)(buf + 28) = 0;
*(uint32_t*)(buf + 32) = 0;
*(uint32_t*)(buf + 36) = 0;
*(uint32_t*)(buf + 40) = 0;
*(uint32_t*)(buf + 20) = func_heap_off52((void*)*(uint32_t*)(arg0 + 4));
buf[26] = 0;
func_0033EA04((void*)*(uint32_t*)(arg0 + 36), (void*)buf);
func_00355D34(arg0, arg2, (uint32_t)arg4);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003564A0
void func_00358090(void* arg0);
void func_0033EFB0(void* arg0, void* arg1);
extern "C" uint8_t* YellowAuto_003564a0(uint8_t* arg0) __asm__("_ZN4gfl23str7MsgDataD1Ev");
extern "C" uint8_t* YellowAuto_003564a0(uint8_t* arg0) {
uint32_t v36 = *(uint32_t*)(arg0 + 36);
if (v36 != 0) {
uint32_t v24 = *(uint32_t*)(arg0 + 24);
if (v24 != 0) {
func_00358090((void*)v24);
}
uint32_t v20 = *(uint32_t*)(arg0 + 20);
if (v20 != 0) {
func_00358090((void*)v20);
}
uint32_t m = *(uint32_t*)(arg0 + 36);
if (m != 0) {
uint8_t buf[32];
*(uint32_t*)(buf + 0) = *(uint32_t*)(arg0 + 40);
*(uint32_t*)(buf + 4) = *(uint32_t*)(arg0 + 44);
buf[8] = 16;
*(uint32_t*)(buf + 12) = *(uint32_t*)(arg0 + 4);
buf[16] = 0;
*(uint32_t*)(buf + 20) = 0;
*(uint32_t*)(buf + 24) = 0;
func_0033EFB0((void*)m, (void*)buf);
}
}
uint32_t v40 = *(uint32_t*)(arg0 + 40);
if (v40 != 0) {
func_00358090((void*)v40);
}
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00355F6C
void func_00354314(uint8_t* arg0);
void func_00355EA0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4);
void func_0049A984(uint8_t* arg0, uint16_t* arg1, uint32_t arg2, uint32_t arg3, void* arg4);
void* func_00358160(void* arg0, uint32_t arg1, int32_t arg2);
void func_00358090(void* arg0);
int32_t func_heap_off28(void* arg0);
extern "C" uint16_t YellowAuto_00355f6c(uint8_t* arg0, uint32_t arg1, uint8_t* arg2) __asm__("_ZN4gfl23str7MsgData9GetStringEjRNS0_6StrBufE");
extern "C" uint16_t YellowAuto_00355f6c(uint8_t* arg0, uint32_t arg1, uint8_t* arg2) {
uint32_t hdr = *(uint32_t*)(arg0 + 20);
uint16_t cnt = *(uint16_t*)(hdr + 2);
if (arg1 >= (uint32_t)cnt) {
func_00354314(arg2);
return (uint16_t)0;
}
uint32_t gptr = *(uint32_t*)0x00356184;
uint32_t gval = *(uint32_t*)gptr;
uint16_t nlang = *(uint16_t*)hdr;
uint32_t lang = gval;
if ((uint32_t)nlang <= gval) {
lang = 0;
}
lang = lang & 255;
uint32_t cur = *(uint32_t*)(arg0 + 16);
if (cur != lang) {
*(uint32_t*)(arg0 + 16) = lang;
uint8_t lt = *(uint8_t*)(arg0 + 8);
if (lt != 0) {
uint32_t base = *(uint32_t*)(arg0 + 20);
uint32_t off = *(uint32_t*)(base + lang * 4 + 12);
uint32_t mgr = *(uint32_t*)(arg0 + 36);
uint32_t foff = *(uint32_t*)(arg0 + 12);
if (mgr == 0) {
*(uint32_t*)(arg0 + 24) = base + off;
} else {
uint32_t dst = *(uint32_t*)(arg0 + 24);
func_00355EA0(arg0, foff, off, (void*)dst, 4);
uint32_t sz = *(uint32_t*)dst;
func_00355EA0(arg0, foff, off, (void*)dst, sz);
}
}
}
uint32_t eoff = arg1 * 8 + 4;
uint8_t lt2 = *(uint8_t*)(arg0 + 8);
uint32_t entry = 0;
if (lt2 != 0) {
uint32_t blk = *(uint32_t*)(arg0 + 24);
entry = blk + eoff;
} else {
uint32_t cidx = *(uint32_t*)(arg0 + 16);
uint32_t h2 = *(uint32_t*)(arg0 + 20);
uint32_t loff = *(uint32_t*)(h2 + cidx * 4 + 12);
uint32_t foff2 = *(uint32_t*)(arg0 + 12);
func_00355EA0(arg0, foff2, loff + eoff, (void*)(arg0 + 28), 8);
entry = (uint32_t)(arg0 + 28);
}
if (lt2 == 0) {
uint16_t slen = *(uint16_t*)(entry + 4);
int32_t al = func_heap_off28((void*)*(uint32_t*)(arg0 + 4));
int32_t neg = (int32_t)0 - al;
void* tmp = func_00358160((void*)*(uint32_t*)(arg0 + 4), (uint32_t)slen * 2, neg);
if (tmp != (void*)0) {
uint32_t soff = *(uint32_t*)entry;
uint32_t c2 = *(uint32_t*)(arg0 + 16);
uint32_t h3 = *(uint32_t*)(arg0 + 20);
uint32_t lb2 = *(uint32_t*)(h3 + c2 * 4 + 12);
uint32_t fo3 = *(uint32_t*)(arg0 + 12);
func_00355EA0(arg0, fo3, soff + lb2, tmp, (uint32_t)slen * 2);
func_0049A984(arg0, (uint16_t*)tmp, (uint32_t)slen, arg1, (void*)arg2);
func_00358090(tmp);
}
} else {
uint32_t blk2 = *(uint32_t*)(arg0 + 24);
uint32_t soff2 = *(uint32_t*)entry;
uint16_t* sptr = (uint16_t*)(soff2 + blk2);
uint16_t slen2 = *(uint16_t*)(entry + 4);
func_0049A984(arg0, sptr, (uint32_t)slen2, arg1, (void*)arg2);
}
return *(uint16_t*)(entry + 6);
}
#endif
