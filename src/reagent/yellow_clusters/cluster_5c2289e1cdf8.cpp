// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00471DB8
void Copy(uint8_t*, const uint8_t*);
void GetJoinFestaFriendKey(uint8_t*, const uint8_t*);
uint8_t* GetInstance();
uint8_t* GetPersonalData(uint8_t*, const uint8_t*);
bool CheckAttractionJoinEnable(const uint8_t*);
extern "C" bool YellowAuto_00471db8(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib9JoinFesta27JoinFestaInformationMessage10PopMessageERNS0_22InformationMessageDataE");
extern "C" bool YellowAuto_00471db8(uint8_t* arg0, uint8_t* arg1) {
bool r = false;
if (*reinterpret_cast<uint32_t*>(arg0 + 0x14) != 0) {
uint8_t* p0 = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 0x4));
uint8_t* p1 = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(p0 + 0x4));
*reinterpret_cast<uint32_t*>(arg1 + 0x4) = *reinterpret_cast<uint32_t*>(p1 + 0xC);
Copy(arg1 + 0x8, p1 + 0x10);
uint8_t* p2 = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(p0 + 0x4));
if (p2 != p0) {
uint8_t* p3 = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(p2 + 0x0));
uint32_t v0 = *reinterpret_cast<uint32_t*>(p2 + 0x4);
*reinterpret_cast<uint32_t*>(p3 + 0x4) = v0;
uint32_t v1 = *reinterpret_cast<uint32_t*>(p2 + 0x0);
uint8_t* p4 = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(p2 + 0x4));
*reinterpret_cast<uint32_t*>(p4 + 0x0) = v1;
*(p2 + 0x258) = 0;
*reinterpret_cast<uint32_t*>(p2 + 0x0) = 0;
*reinterpret_cast<uint32_t*>(p2 + 0x4) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x14) = *reinterpret_cast<uint32_t*>(arg0 + 0x14) - 1;
}
uint8_t k[16];
GetJoinFestaFriendKey(k, arg1 + 0x8);
uint8_t* p5 = GetInstance();
uint8_t* p6 = GetPersonalData(p5, k);
if (CheckAttractionJoinEnable(p6) != false) {
r = true;
}
}
return r;
}
#endif
