// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040CA94
uint32_t GetItemParam(const uint8_t*, uint32_t);
uint32_t GetLoaderArg();
void LoadItemEntry(uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_0040ca94(uint8_t* arg0, uint32_t arg1, uint32_t* arg2) __asm__("_ZN7itemman12ITEM_MANAGER7GetDataEiRN4item9ITEM_DATAE");
extern "C" void YellowAuto_0040ca94(uint8_t* arg0, uint32_t arg1, uint32_t* arg2) {
int32_t count = *(int32_t*)(arg0 + 8);
uint8_t* base = (uint8_t*)(*(uint32_t*)(arg0 + 4));
for (int32_t i = 0; i < count; ++i) {
uint8_t* e = base + i * 40;
uint32_t v = GetItemParam(e, 0);
if (v == arg1) {
uint32_t* s = (uint32_t*)e;
for (int32_t k = 0; k < 10; ++k) arg2[k] = s[k];
return;
}
if (v == 0) {
if (e != (uint8_t*)0) {
LoadItemEntry(e, arg1, GetLoaderArg());
uint32_t* s = (uint32_t*)e;
for (int32_t k = 0; k < 10; ++k) arg2[k] = s[k];
return;
}
break;
}
}
if (count > 1) {
for (int32_t i = 0; i < count - 1; ++i) {
uint32_t* s = (uint32_t*)(base + (i + 1) * 40);
uint32_t* d = (uint32_t*)(base + i * 40);
for (int32_t k = 0; k < 10; ++k) d[k] = s[k];
}
}
uint8_t* last = base + (count - 1) * 40;
LoadItemEntry(last, arg1, GetLoaderArg());
uint32_t* ls = (uint32_t*)last;
for (int32_t k = 0; k < 10; ++k) arg2[k] = ls[k];
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040C9F4
bool FallbackIsOpen();
extern "C" bool YellowAuto_0040c9f4(const uint8_t* arg0) __asm__("_ZN7itemman12ITEM_MANAGER10IsFileOpenEv");
extern "C" bool YellowAuto_0040c9f4(const uint8_t* arg0) {
if (*(arg0 + 12) != 0) return true;
return FallbackIsOpen();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040CA44
bool FallbackIsClose();
extern "C" bool YellowAuto_0040ca44(const uint8_t* arg0) __asm__("_ZN7itemman12ITEM_MANAGER11IsFileCloseEv");
extern "C" bool YellowAuto_0040ca44(const uint8_t* arg0) {
if (*(arg0 + 12) != 0) return true;
return FallbackIsClose();
}
#endif
