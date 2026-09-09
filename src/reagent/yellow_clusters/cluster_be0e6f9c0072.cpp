// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034497C
void FUN_00171f28(uint8_t*);
void FUN_00171c48(uint8_t*);
void GflHeapFreeMemoryBlock(uint8_t*);
extern "C" void YellowAuto_0034497c(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl22ro9RoManager13DisposeModuleEPN2nn2ro6ModuleE");
extern "C" void YellowAuto_0034497c(uint8_t* arg0, uint8_t* arg1) {
uint32_t count = *reinterpret_cast<uint32_t*>(arg0 + 0x24);
if (count == 0) {
return;
}
uint8_t* modBase = *reinterpret_cast<uint8_t**>(arg0 + 0x10);
uint32_t idx = count;
for (uint32_t i = 0; i < count; ++i) {
uint8_t* cur = *reinterpret_cast<uint8_t**>(modBase + i * 4);
if (cur == arg1) {
idx = i;
break;
}
}
if (idx >= count) {
return;
}
if (arg1 != nullptr) {
FUN_00171f28(arg1);
FUN_00171c48(arg1);
uint8_t* base18 = *reinterpret_cast<uint8_t**>(arg0 + 0x18);
if (base18 != nullptr) {
uint8_t* blk = *reinterpret_cast<uint8_t**>(base18 + idx * 4);
if (blk != nullptr) {
GflHeapFreeMemoryBlock(blk);
*reinterpret_cast<uint8_t**>(base18 + idx * 4) = nullptr;
}
}
}
uint8_t* base14 = *reinterpret_cast<uint8_t**>(arg0 + 0x14);
if (base14 != nullptr) {
uint8_t* blk2 = *reinterpret_cast<uint8_t**>(base14 + idx * 4);
if (blk2 != nullptr) {
GflHeapFreeMemoryBlock(blk2);
*reinterpret_cast<uint8_t**>(base14 + idx * 4) = nullptr;
}
}
if (idx < count - 1) {
for (uint32_t i = idx; i + 1 < count; ++i) {
uint8_t* b14 = *reinterpret_cast<uint8_t**>(arg0 + 0x14);
if (b14 != nullptr) {
*reinterpret_cast<uint8_t**>(b14 + i * 4) = *reinterpret_cast<uint8_t**>(b14 + i * 4 + 4);
}
uint8_t* b18 = *reinterpret_cast<uint8_t**>(arg0 + 0x18);
if (b18 != nullptr) {
*reinterpret_cast<uint8_t**>(b18 + i * 4) = *reinterpret_cast<uint8_t**>(b18 + i * 4 + 4);
}
uint8_t* b10 = *reinterpret_cast<uint8_t**>(arg0 + 0x10);
if (b10 != nullptr) {
*reinterpret_cast<uint8_t**>(b10 + i * 4) = *reinterpret_cast<uint8_t**>(b10 + i * 4 + 4);
}
}
}
uint8_t* f14 = *reinterpret_cast<uint8_t**>(arg0 + 0x14);
if (f14 != nullptr) {
*reinterpret_cast<uint8_t**>(f14 + count * 4 - 4) = nullptr;
}
uint8_t* f10 = *reinterpret_cast<uint8_t**>(arg0 + 0x10);
if (f10 != nullptr) {
*reinterpret_cast<uint8_t**>(f10 + count * 4 - 4) = nullptr;
}
uint8_t* f18 = *reinterpret_cast<uint8_t**>(arg0 + 0x18);
if (f18 != nullptr) {
*reinterpret_cast<uint8_t**>(f18 + count * 4 - 4) = nullptr;
}
*reinterpret_cast<uint32_t*>(arg0 + 0x24) = count - 1;
return;
}
#endif
