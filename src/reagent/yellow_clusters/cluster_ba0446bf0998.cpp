// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042A4EC
const uint16_t* GetLocalNumberStaticTable();
extern "C" uint16_t YellowAuto_0042a4ec(uint32_t arg0, int32_t arg1) __asm__("_ZN8PokeTool10ExtendData20GetLocalNumberStaticEjNS0_9LocalAreaE");
extern "C" uint16_t YellowAuto_0042a4ec(uint32_t arg0, int32_t arg1) {
if (arg1 != 1) return 0; if (arg0 >= 804) return 0; return GetLocalNumberStaticTable()[arg0];
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6818
extern "C" uint32_t YellowAuto_004a6818(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK8PokeTool10ExtendData13GetTableIndexE6MonsNoh");
extern "C" uint32_t YellowAuto_004a6818(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t v = arg1;
if (arg2 == 0) {
return v;
}
const uint16_t* base = *(const uint16_t* const*)(arg0 + 12);
uint32_t c = 0;
do {
v = (uint32_t)base[v];
if (v == 0) {
return arg1;
}
c = (c + 1u) & 65535u;
} while (c != arg2);
return v;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A68D4
extern "C" uint32_t YellowAuto_004a68d4(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK8PokeTool10ExtendData16GetZenkokuNumberEjNS0_9LocalAreaE");
extern "C" uint32_t YellowAuto_004a68d4(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t area = arg2;
if (area == 0 || area > 5) {
area = 1;
}
const uint16_t* tbl = *(const uint16_t* const*)(arg0 + area * 4 + 16);
uint32_t limit = *(const uint32_t*)0x4A6958u;
uint32_t i = 1;
while (true) {
if ((uint32_t)tbl[i] == arg1) {
return i;
}
if ((uint32_t)tbl[i + 1] == arg1) {
return i + 1;
}
i += 2;
if (i >= limit) {
return 0;
}
}
}
#endif
