// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8500
void SetStr(void*, const uint16_t*);
extern "C" void YellowAuto_004a8500(const uint8_t* arg0, void* arg1) __asm__("_ZNK8Savedata8MyStatus13GetNameStringEPN4gfl23str6StrBufE");
extern "C" void YellowAuto_004a8500(const uint8_t* arg0, void* arg1) {
SetStr(arg1, (const uint16_t*)(arg0 + 0x40));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003566F0
uint16_t* StrNCopy(uint16_t*, const uint16_t*, uint32_t);
extern "C" void YellowAuto_003566f0(const uint8_t* arg0, uint16_t* arg1) __asm__("_ZNK8Savedata8MyStatus13GetNameStringEPw");
extern "C" void YellowAuto_003566f0(const uint8_t* arg0, uint16_t* arg1) {
StrNCopy(arg1, (const uint16_t*)(arg0 + 0x40), 0xd);
}
#endif
