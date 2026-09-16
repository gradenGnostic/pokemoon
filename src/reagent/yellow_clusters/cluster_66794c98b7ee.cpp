// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001041B0
const uint32_t* MaxUint32(const uint32_t* arg0, const uint32_t* arg1);
uint8_t* CGetRep(uint8_t* arg0, uint32_t arg1, uint32_t arg2);
extern "C" uint8_t* YellowAuto_001041b0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZNSs11_C_allocateEjjj");
extern "C" uint8_t* YellowAuto_001041b0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
uint32_t v = (arg1 >> 1) + arg1 + (arg1 >> 3);
uint32_t w = arg1 + 32;
if (w > v) {
v = w;
}
const uint32_t* p = MaxUint32(&v, &arg2);
uint32_t cap = *p;
uint8_t* rep = CGetRep(arg0, cap, arg3);
return rep + 12;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003018C8
uint8_t* CGetRep(uint8_t* arg0, uint32_t arg1, uint32_t arg2);
void CharCopy(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2);
void CIncRef(const void* arg0);
extern "C" uint8_t* YellowAuto_003018c8(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNSsC2ERKSs");
extern "C" uint8_t* YellowAuto_003018c8(uint8_t* arg0, const uint8_t* arg1) {
uint8_t* s = *(uint8_t**)arg1;
int32_t ref = *(int32_t*)(s - 12);
if (ref == -1) {
uint32_t n = *(uint32_t*)(s - 4);
uint8_t* rep = CGetRep(arg0, n, n);
uint8_t* d = rep + 12;
*(uint8_t**)arg0 = d;
CharCopy(d, s, n);
} else {
*(uint8_t**)arg0 = s;
CIncRef(s - 12);
}
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003019E4
void CIncRef(const void* arg0);
void CUnlink(uint8_t* arg0);
void StrReplace(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4);
extern "C" uint8_t* YellowAuto_003019e4(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNSsaSERKSs");
extern "C" uint8_t* YellowAuto_003019e4(uint8_t* arg0, const uint8_t* arg1) {
uint8_t* s = *(uint8_t**)arg1;
int32_t ref = *(int32_t*)(s - 12);
if (ref == -1) {
if (arg0 != arg1) {
uint8_t* d = *(uint8_t**)arg0;
uint32_t dn = *(uint32_t*)(d - 4);
uint32_t sn = *(uint32_t*)(s - 4);
StrReplace(arg0, 0, dn, s, sn);
}
} else {
CIncRef(s - 12);
CUnlink(arg0);
*(uint8_t**)arg0 = s;
}
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302E68
const uint8_t* GetEmptyData();
void RepFree(uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_00302e68(uint8_t* arg0) __asm__("_ZNSs9_C_unlinkEv");
extern "C" void YellowAuto_00302e68(uint8_t* arg0) {
uint8_t* a0 = *(uint8_t**)arg0;
const uint8_t* e = GetEmptyData();
if ((const uint8_t*)a0 != e) {
uint8_t* rep = (uint8_t*)(a0 - 12);
int32_t rc = *(int32_t*)rep;
if (rc == -1) {
uint32_t cap = *(uint32_t*)(rep + 4);
RepFree(rep, cap + 14, 0);
} else {
uint8_t* er = (uint8_t*)(e - 12);
if (rep != er) {
int32_t n = (int32_t)(rc - 1);
*(int32_t*)rep = n;
if (n == -1) {
uint32_t cap2 = *(uint32_t*)(rep + 4);
RepFree(rep, cap2 + 14, 0);
}
}
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302DDC
void ThrowFunc(uint32_t, uint32_t);
uint8_t* AllocFunc(uint32_t, uint32_t);
uint8_t* GetEmptyRep();
extern "C" uint8_t* YellowAuto_00302ddc(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNSs9_C_getRepEjj");
extern "C" uint8_t* YellowAuto_00302ddc(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
(void)arg0;
if (arg1 > 4294967281U) {
ThrowFunc(arg1, 4294967281U);
}
if (arg1 < arg2) {
ThrowFunc(arg2, arg1);
}
if (arg1 == 0) {
return GetEmptyRep();
}
uint8_t* r = AllocFunc(arg1 + 14, 0);
*(uint32_t*)r = 0;
*(uint32_t*)(r + 4) = 0;
*(uint32_t*)(r + 8) = 0;
*(uint32_t*)(r + 8) = arg2;
*(uint32_t*)r = 0;
*(uint32_t*)(r + 4) = arg1;
*(uint8_t*)(r + arg2 + 12) = 0;
return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00301890
uint32_t StrLen(const uint8_t*);
uint8_t* AllocData(uint8_t*, uint32_t, uint32_t, uint32_t);
void CopyChars(uint8_t*, const uint8_t*, uint32_t);
uint8_t* GetEmptyData2();
extern "C" uint8_t* YellowAuto_00301890(uint8_t* arg0, const uint8_t* arg1, const void* arg2) __asm__("_ZNSsC2EPKcRKSaIcE");
extern "C" uint8_t* YellowAuto_00301890(uint8_t* arg0, const uint8_t* arg1, const void* arg2) {
(void)arg2;
uint32_t l = StrLen(arg1);
uint8_t* d = GetEmptyData2();
if (l != 0) {
d = AllocData(arg0, 0, l, l);
}
*(uint8_t**)arg0 = d;
CopyChars(d, arg1, l);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030209C
uint8_t* GetRepFunc(uint8_t*, uint32_t, uint32_t);
void CopyFunc(uint8_t*, const uint8_t*, uint32_t);
void UnlinkFunc(uint8_t*);
uint8_t* GetEmptyRep3();
extern "C" uint8_t* YellowAuto_0030209c(uint8_t* arg0) __asm__("_ZNSs5beginEv");
extern "C" uint8_t* YellowAuto_0030209c(uint8_t* arg0) {
uint8_t* d = *(uint8_t**)arg0;
int32_t rc = *(int32_t*)(d - 12);
if ((uint32_t)(rc + 1) > 1U) {
uint32_t s = *(uint32_t*)(d - 4);
uint8_t* rep = GetRepFunc(arg0, s, s);
uint8_t* nd = (uint8_t*)(rep + 12);
CopyFunc(nd, (const uint8_t*)d, s);
UnlinkFunc(arg0);
*(uint8_t**)arg0 = nd;
d = nd;
}
uint8_t* rep2 = (uint8_t*)(*(uint8_t**)arg0 - 12);
uint8_t* er = GetEmptyRep3();
if (rep2 != er) {
*(int32_t*)rep2 = -1;
}
return *(uint8_t**)arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00104360
uint32_t StrLen2(const uint8_t*);
uint8_t* ReplaceFunc(uint8_t*, uint32_t, uint32_t, const uint8_t*, uint32_t);
void UnlinkFunc2(uint8_t*);
uint8_t* GetEmptyData3();
extern "C" uint8_t* YellowAuto_00104360(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNSsaSEPKc");
extern "C" uint8_t* YellowAuto_00104360(uint8_t* arg0, const uint8_t* arg1) {
uint32_t l = StrLen2(arg1);
if (l != 0) {
uint8_t* d = *(uint8_t**)arg0;
uint32_t s = *(uint32_t*)(d - 4);
ReplaceFunc(arg0, 0, s, arg1, l);
return arg0;
}
uint8_t* d2 = *(uint8_t**)arg0;
int32_t rc = *(int32_t*)(d2 - 12);
if ((uint32_t)(rc + 1) == 1U) {
*(uint32_t*)(d2 - 4) = 0;
*d2 = 0;
} else {
UnlinkFunc2(arg0);
*(uint8_t**)arg0 = GetEmptyData3();
}
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030203C
void __rw_throw(uint32_t, const void*, const void*, uint32_t);
uint32_t* max_unsigned_int(uint32_t*, uint32_t*);
uint32_t* _C_getRep(uint8_t*, uint32_t, uint32_t);
void copy(uint8_t*, const uint8_t*, uint32_t);
extern uint32_t* _DAT_00302098;
extern "C" uint8_t* YellowAuto_0030203c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, const void* arg3) __asm__("_ZNSsC2EPKcjRKSaIcE");
extern "C" uint8_t* YellowAuto_0030203c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, const void* arg3) {
if (arg2 > 4294967281U) __rw_throw(8U, (const void*)0, (const void*)0, arg2);
(void)arg3;
uint32_t cap = 32U;
uint32_t need = arg2;
uint32_t* rep = _DAT_00302098;
if (arg2 != 0U) rep = _C_getRep(arg0, *max_unsigned_int(&cap, &need), arg2);
uint8_t* dst = (uint8_t*)(rep + 3);
*(uint8_t**)arg0 = dst;
if (arg1 != (const uint8_t*)0) copy(dst, arg1, arg2);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001041E4
void __rw_throw(uint32_t, const void*, const void*, uint32_t);
void _C_unlink(uint8_t*);
uint32_t* max_unsigned_int(uint32_t*, uint32_t*);
uint32_t* _C_getRep(uint8_t*, uint32_t, uint32_t);
void copy(uint8_t*, const uint8_t*, uint32_t);
void FUN_00302eb0(uint8_t*, const uint8_t*, uint32_t);
extern uint8_t* _DAT_0010435c;
extern "C" uint8_t* YellowAuto_001041e4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6) __asm__("_ZNSs7replaceEjjPKcjjj");
extern "C" uint8_t* YellowAuto_001041e4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6) {
uint8_t* data = *(uint8_t**)arg0;
uint32_t size = *(uint32_t*)(data - 4U);
if (size < arg1 || arg4 < arg5) __rw_throw(9U, (const void*)0, (const void*)0, arg1);
uint32_t rem = size - arg1;
if (arg2 < rem) rem = arg2;
uint32_t avail = arg4 - arg5;
if (arg6 < avail) avail = arg6;
uint32_t kept = size - rem;
if (kept > 4294967281U - avail) __rw_throw(8U, (const void*)0, (const void*)0, kept);
uint32_t newsize = kept + avail;
if (newsize == 0U) _C_unlink(arg0);
if (newsize == 0U) *(uint8_t**)arg0 = _DAT_0010435c;
uint32_t tail = kept - arg1;
const uint8_t* src = arg3 + arg5;
uint32_t refs = *(uint32_t*)(data - 12U);
uint32_t cap = *(uint32_t*)(data - 8U);
bool inplace = refs + 1U < 2U && newsize <= cap && (arg3 == (const uint8_t*)0 || arg3 < data || data + size <= arg3);
if (newsize != 0U && inplace && tail != 0U) FUN_00302eb0(data + arg1 + avail, data + arg1 + arg2, tail);
if (newsize != 0U && inplace && avail != 0U) FUN_00302eb0(data + arg1, src, avail);
if (newsize != 0U && inplace) *(uint32_t*)(data - 4U) = newsize;
if (newsize != 0U && inplace) *(uint8_t*)(data + newsize) = 0U;
uint32_t grown = (size >> 1U) + size + (size >> 3U);
if (grown < size + 128U && newsize != 0U && !inplace) grown = size + 128U;
uint32_t need = newsize;
uint32_t* pmax;
uint32_t* rep;
uint8_t* nd;
if (newsize != 0U && !inplace) pmax = max_unsigned_int(&grown, &need);
if (newsize != 0U && !inplace) rep = _C_getRep(arg0, *pmax, newsize);
if (newsize != 0U && !inplace) nd = (uint8_t*)(rep + 3);
if (newsize != 0U && !inplace && arg1 != 0U) copy(nd, data, arg1);
if (newsize != 0U && !inplace && avail != 0U) copy(nd + arg1, src, avail);
if (newsize != 0U && !inplace && tail != 0U) copy(nd + arg1 + avail, data + arg1 + arg2, tail);
if (newsize != 0U && !inplace) _C_unlink(arg0);
if (newsize != 0U && !inplace) *(uint8_t**)arg0 = nd;
return *(uint8_t**)arg0 + arg1;
}
#endif
