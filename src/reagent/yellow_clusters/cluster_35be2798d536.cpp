// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038EE80
void* func_003F0BB8(uint8_t*);
void* func_00105500(uint32_t, void*);
uint8_t* func_003F467C(uint8_t*, void*);
uint8_t* func_003998F4(uint8_t*);
void func_003F0C08(uint8_t*, uint8_t*);
uint32_t func_003E9F3C(uint32_t);
extern const uint32_t DAT_0038ef68;
extern const float DAT_0038ef6c;
extern const float DAT_0038ef70;
extern const float DAT_0038ef74;
extern "C" uint8_t* YellowAuto_0038ee80(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN5Field18EventFishingAction4CallEPN7GameSys16GameEventManagerEPNS_21FieldFishingSpotActorE");
extern "C" uint8_t* YellowAuto_0038ee80(uint8_t* arg0, uint8_t* arg1) {
void* h0 = func_003F0BB8(arg0);
uint8_t* o0 = (uint8_t*)func_00105500(92U, h0);
uint8_t* ev = (uint8_t*)0;
if (o0 != (uint8_t*)0) {
void* h1 = func_003F0BB8(arg0);
uint8_t* b = func_003F467C(o0, h1);
*(uint32_t*)(b + 0x0) = DAT_0038ef68;
*(uint32_t*)(b + 0x18) = 0U;
*(uint32_t*)(b + 0x1C) = 0U;
*(uint32_t*)(b + 0x20) = 0U;
*(uint8_t*)(b + 0x24) = (uint8_t)0;
*(uint32_t*)(b + 0x28) = 1U;
*(uint32_t*)(b + 0x2C) = 0U;
*(uint32_t*)(b + 0x30) = 0U;
*(uint8_t*)(b + 0x34) = (uint8_t)0;
uint8_t* lr = func_003998F4(b + 0x38);
ev = lr - 0x38;
}
func_003F0C08(arg0, ev);
*(uint8_t**)(ev + 0x18) = arg1;
*(uint8_t*)(ev + 0x24) = (uint8_t)0;
uint32_t r0 = func_003E9F3C(60U);
*(uint32_t*)(ev + 0x28) = (uint32_t)((float)r0 + DAT_0038ef6c * DAT_0038ef70);
uint32_t r1 = func_003E9F3C(15U);
*(uint32_t*)(ev + 0x2C) = (uint32_t)((float)r1 + DAT_0038ef74 * DAT_0038ef70);
return ev;
}
#endif
