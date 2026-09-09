// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D40
void operator_delete(void*);
extern "C" void YellowAuto_00103d40(uint8_t* arg0) __asm__("_ZNSt7collateIcED0Ev");
extern "C" void YellowAuto_00103d40(uint8_t* arg0) {
operator_delete(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D48
extern "C" void YellowAuto_00103d48(uint8_t* arg0) __asm__("_ZNSt7collateIcED2Ev");
extern "C" void YellowAuto_00103d48(uint8_t* arg0) {
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00104000
uint32_t _C_coll_order(const uint8_t *, uint32_t);
extern "C" int32_t YellowAuto_00104000(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3, const uint8_t* arg4) __asm__("_ZNKSt7collateIcE10do_compareEPKcS2_S2_S2_");
extern "C" int32_t YellowAuto_00104000(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3, const uint8_t* arg4) {
const uint8_t *d = arg0 + 16;
uint32_t len1 = (uint32_t)(arg2 - arg1);
uint32_t len2 = (uint32_t)(arg4 - arg3);
uint32_t n = len1 < len2 ? len1 : len2;
const uint8_t *p1 = arg1;
const uint8_t *p2 = arg3;
while (n != 0) {
uint32_t o1 = _C_coll_order(d, (uint32_t)*p1);
uint32_t o2 = _C_coll_order(d, (uint32_t)*p2);
int32_t diff = (int32_t)(o1 - o2);
if (diff != 0) {
if (diff > 0) return 1;
return -1;
}
p1 = p1 + 1;
p2 = p2 + 1;
n = n - 1;
}
if (len1 < len2) return -1;
if (len1 > len2) return 1;
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010405E
uint8_t* func_0030203c(uint8_t*, const uint8_t*, uint32_t, const void*);
uint8_t* func_0030209c(uint8_t*);
uint32_t func_00302d96(const uint8_t*, uint8_t);
extern "C" void YellowAuto_0010405e(uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3) __asm__("_ZNKSt7collateIcE12do_transformEPKcS2_");
extern "C" void YellowAuto_0010405e(uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2, const uint8_t* arg3) {
uint32_t len = (uint32_t)(arg3 - arg2);
uint32_t alloc = 0;
func_0030203c(arg0, (const uint8_t*)0, len, (const void*)&alloc);
uint8_t* dst = func_0030209c(arg0);
const uint8_t* src = arg2;
const uint8_t* cdata = arg1 + 16;
while (src != arg3) {
uint32_t v = func_00302d96(cdata, *src);
*dst = (uint8_t)v;
dst = dst + 1;
src = src + 1;
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010409E
void func_transform(uint8_t*, const uint8_t*, const uint8_t*, const uint8_t*);
void func_00301904(uint8_t*);
extern "C" uint32_t YellowAuto_0010409e(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2) __asm__("_ZNKSt7collateIcE7do_hashEPKcS2_");
extern "C" uint32_t YellowAuto_0010409e(const uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2) {
uint32_t vt = *(const uint32_t*)arg0;
uint32_t fn = *(uint32_t*)(vt + 16);
(void)fn;
uint8_t tmp[16];
func_transform(tmp, arg0, arg1, arg2);
uint32_t daddr = *(uint32_t*)tmp;
uint8_t* data = (uint8_t*)daddr;
uint32_t len = *(uint32_t*)(data - 4);
uint8_t* end = data + len;
uint32_t h = 0;
uint8_t* p = data;
while (p != end) {
uint32_t b = (uint32_t)*p;
uint32_t nh = h * 16 + b;
uint32_t top = (nh >> 28) << 28;
if (top != 0) {
int32_t sh = (int32_t)top >> 24;
nh = (((uint32_t)sh ^ nh) << 4) >> 4;
}
h = nh;
p = p + 1;
}
func_00301904(tmp);
return h;
}
#endif
