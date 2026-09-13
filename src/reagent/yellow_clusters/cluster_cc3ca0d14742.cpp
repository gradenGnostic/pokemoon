// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030DC68
void CritEnter(void*);
void CritLeave(void*);
const uint16_t* LookupRegion(void*, const uint32_t*);
void Copy16(uint16_t*, const uint16_t*, uint32_t);
void ClearMem(void*, uint32_t);
extern "C" uint16_t* YellowAuto_0030dc68(uint8_t* arg0, uint8_t arg1, uint16_t arg2) __asm__("_ZN3app4util27AppCountryRegionNameUtility13GetRegionNameEtt");
extern "C" uint16_t* YellowAuto_0030dc68(uint8_t* arg0, uint8_t arg1, uint16_t arg2) {
uint32_t key = (static_cast<uint32_t>(arg1) << 24) | (static_cast<uint32_t>(arg2) << 16);
void* cs = static_cast<void*>(arg0 + 4);
CritEnter(cs);
uint32_t off = *reinterpret_cast<uint32_t*>(0x30DD24);
uint32_t headVal = *reinterpret_cast<uint32_t*>(arg0 + off);
uint32_t curVal = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(headVal) + 4);
uint32_t idx = 0;
while (reinterpret_cast<uint8_t*>(curVal) != reinterpret_cast<uint8_t*>(headVal)) {
if (static_cast<uint16_t>(idx) == static_cast<uint16_t>(key >> 24)) {
void* payload = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(curVal) + 8));
const uint16_t* src = LookupRegion(payload, &key);
uint16_t* dst = reinterpret_cast<uint16_t*>(arg0 + 0x813C);
Copy16(dst, src, 0x40);
CritLeave(cs);
return dst;
}
curVal = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(curVal) + 4);
idx = idx + 1;
}
CritLeave(cs);
uint16_t* out = reinterpret_cast<uint16_t*>(arg0 + 0x813C);
ClearMem(static_cast<void*>(out), 0x80);
return out;
}
#endif
