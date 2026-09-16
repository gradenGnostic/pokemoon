// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497BAC
void sub_00341CD4(void*);
extern "C" void YellowAuto_00497bac(void* arg0, const uint8_t* arg1, uint32_t* arg2) __asm__("_ZNK4gfl22fs7ArcFile14GetMaxDataSizeEPj");
extern "C" void YellowAuto_00497bac(void* arg0, const uint8_t* arg1, uint32_t* arg2) {
sub_00341CD4(arg0); *(uint32_t*)arg2 = *(const uint32_t*)(arg1 + 32);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497AF0
extern "C" void YellowAuto_00497af0(uint8_t* arg0, const uint8_t* arg1, uint32_t* arg2, uint32_t arg3, void* arg4) __asm__("_ZNK4gfl22fs7ArcFile11GetDataSizeEPjjPNS_4heap11CtrHeapBaseE");
extern "C" void YellowAuto_00497af0(uint8_t* arg0, const uint8_t* arg1, uint32_t* arg2, uint32_t arg3, void* arg4) {
uint32_t lo = 0;
uint32_t hi = 0;
uint32_t cnt = *reinterpret_cast<const uint32_t*>(arg1 + 28);
uint8_t flag = *reinterpret_cast<const uint8_t*>(arg1 + 12);
if (arg3 < cnt) {
uint32_t v;
if (flag == 254) {
const uint8_t* inner = *reinterpret_cast<const uint8_t* const*>(arg1 + 16);
const uint32_t* vt = *reinterpret_cast<const uint32_t* const*>(inner);
uint32_t (*fn)(const uint8_t*, uint32_t, uint8_t) = reinterpret_cast<uint32_t (*)(const uint8_t*, uint32_t, uint8_t)>(*(vt + 4));
v = fn(inner, arg3, flag);
} else {
const uint32_t* tbl = *reinterpret_cast<const uint32_t* const*>(arg1 + 24);
v = *(tbl + arg3 * 3u);
}
*arg2 = v;
} else {
lo |= 131072u;
}
*reinterpret_cast<uint32_t*>(arg0) = lo;
*reinterpret_cast<uint32_t*>(arg0 + 4) = hi;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497BE0
extern "C" void YellowAuto_00497be0(uint8_t* arg0, const uint8_t* arg1, uint32_t* arg2, uint32_t arg3, void* arg4) __asm__("_ZNK4gfl22fs7ArcFile15GetRealDataSizeEPjjPNS_4heap11CtrHeapBaseE");
extern "C" void YellowAuto_00497be0(uint8_t* arg0, const uint8_t* arg1, uint32_t* arg2, uint32_t arg3, void* arg4) {
uint32_t lo = 0;
uint32_t hi = 0;
uint32_t cnt = *reinterpret_cast<const uint32_t*>(arg1 + 28);
uint8_t flag = *reinterpret_cast<const uint8_t*>(arg1 + 12);
if (arg3 < cnt) {
uint32_t v;
if (flag == 254) {
const uint8_t* inner = *reinterpret_cast<const uint8_t* const*>(arg1 + 16);
const uint32_t* vt = *reinterpret_cast<const uint32_t* const*>(inner);
uint32_t (*fn)(const uint8_t*, uint32_t, uint8_t) = reinterpret_cast<uint32_t (*)(const uint8_t*, uint32_t, uint8_t)>(*(vt + 5));
v = fn(inner, arg3, flag);
} else {
const uint32_t* tbl = *reinterpret_cast<const uint32_t* const*>(arg1 + 24);
v = *(tbl + arg3 * 3u + 1u);
}
*arg2 = v;
} else {
lo |= 131072u;
}
*reinterpret_cast<uint32_t*>(arg0) = lo;
*reinterpret_cast<uint32_t*>(arg0 + 4) = hi;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00497C70
extern "C" void YellowAuto_00497c70(uint8_t* arg0, const uint8_t* arg1, uint32_t* arg2, uint32_t arg3) __asm__("_ZNK4gfl22fs7ArcFile23GetOffsetFromArchiveTopEPjj");
extern "C" void YellowAuto_00497c70(uint8_t* arg0, const uint8_t* arg1, uint32_t* arg2, uint32_t arg3) {
uint32_t lo = 0;
uint32_t hi = 0;
uint32_t cnt = *reinterpret_cast<const uint32_t*>(arg1 + 28);
uint8_t flag = *reinterpret_cast<const uint8_t*>(arg1 + 12);
if (arg3 < cnt) {
uint32_t v;
if (flag == 254) {
const uint8_t* inner = *reinterpret_cast<const uint8_t* const*>(arg1 + 16);
const uint32_t* vt = *reinterpret_cast<const uint32_t* const*>(inner);
uint32_t (*fn)(const uint8_t*, uint32_t, uint8_t) = reinterpret_cast<uint32_t (*)(const uint8_t*, uint32_t, uint8_t)>(*(vt + 9));
v = fn(inner, arg3, flag);
} else {
const uint32_t* tbl = *reinterpret_cast<const uint32_t* const*>(arg1 + 24);
v = *(tbl + arg3 * 3u + 2u);
}
*arg2 = v;
} else {
lo |= 131072u;
}
*reinterpret_cast<uint32_t*>(arg0) = lo;
*reinterpret_cast<uint32_t*>(arg0 + 4) = hi;
}
#endif
