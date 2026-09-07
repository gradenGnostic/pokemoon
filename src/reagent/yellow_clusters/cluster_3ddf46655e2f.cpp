// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045D500
const uint16_t* GetPtrHelper(const uint8_t* arg0);
uint16_t NoAccentHelper(uint16_t arg0);
uint16_t ToUpperHelper(uint16_t arg0);
extern "C" bool YellowAuto_0045d500(const uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib4Util23NetAppLatinumStringTool27CompareBufferNoCaseNoAccentEPKN4gfl23str6StrBufES6_");
extern "C" bool YellowAuto_0045d500(const uint8_t* arg0, const uint8_t* arg1) {
const uint16_t* src = GetPtrHelper(arg0);
const uint16_t* dst = GetPtrHelper(arg1);
while (*src != (uint16_t)0) {
if (ToUpperHelper(NoAccentHelper(*src)) != ToUpperHelper(NoAccentHelper(*dst))) return false;
src++;
dst++;
}
if (*dst != (uint16_t)0) return false;
return true;
}
#endif
