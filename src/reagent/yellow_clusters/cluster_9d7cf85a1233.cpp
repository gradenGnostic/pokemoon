// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042AE78
extern "C" bool YellowAuto_0042ae78(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil11DoesSetFlagEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042ae78(const uint8_t* arg0, uint32_t arg1) {
(void)arg0;
switch (arg1) {
case 0:
case 1:
case 2:
case 4:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
return true;
default:
return false;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B478
extern "C" bool YellowAuto_0042b478(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil18DoesPut_NotSetFlagEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042b478(const uint8_t* arg0, uint32_t arg1) {
(void)arg0;
switch (arg1) {
case 0:
case 1:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
return true;
default:
return false;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B684
extern "C" bool YellowAuto_0042b684(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil21DoesGoToPokeNameInputEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042b684(const uint8_t* arg0, uint32_t arg1) {
(void)arg0;
switch (arg1) {
case 0:
case 1:
case 6:
case 7:
case 10:
case 11:
case 13:
return true;
default:
return false;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B6D4
void* GetInstance();
extern "C" bool YellowAuto_0042b6d4(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil21DoesGoToPokePutSelectEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042b6d4(const uint8_t* arg0, uint32_t arg1) {
(void)arg0; switch (arg1) { case 0: case 1: case 8: case 9: case 10: case 12: case 13: case 14: GetInstance(); break; default: break; } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B398
uint16_t GetMonsNo(const uint8_t*);
int32_t GetLocalNumberStatic(uint32_t, uint32_t);
void* GetInstance();
extern "C" bool YellowAuto_0042b398(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokeGetUtil16DoesGoToInfoShowEPKN3pml8pokepara12PokemonParamENS0_10CallerType3TagE");
extern "C" bool YellowAuto_0042b398(const uint8_t* arg0, uint32_t arg1) {
switch (arg1) { case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 10: case 11: case 12: case 13: if (GetLocalNumberStatic(GetMonsNo(arg0), 1) != 0) { GetInstance(); } break; default: break; } return false;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B4CC
void FUN_0042aed0(uint8_t*);
int32_t Check(uint8_t*, uint32_t);
int32_t DoesDecidePlaceSpaceIfPut(uint8_t*, uint32_t, uint8_t*, uint8_t*);
void Put_NotSetFlag(uint8_t*, uint8_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*);
void* GetInstance();
extern "C" bool YellowAuto_0042b4cc(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, uint32_t* arg3, void* arg4) __asm__("_ZN8PokeTool11PokeGetUtil19UpdatePokeAtPokeGetEPN4gfl24heap11CtrHeapBaseEPN3pml8pokepara12PokemonParamENS0_10CallerType3TagEPNS0_11ReturnParamEPNS0_6ExDataE");
extern "C" bool YellowAuto_0042b4cc(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, uint32_t* arg3, void* arg4) {
uint32_t tmp[3];
tmp[0] = tmp[0] & 0xffff0000;
tmp[1] = 0;
tmp[2] = 0;
uint8_t box = 0;
uint8_t kind = 0;
(void)arg4;
FUN_0042aed0(arg0);
int32_t chk = Check(arg1, arg2);
bool ok = (chk == 0);
if (chk == 0) {
switch (arg2) {
case 0:
case 1:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
box = 0;
kind = 0;
if (DoesDecidePlaceSpaceIfPut(arg1, arg2, &box, &kind) != 0) {
if (kind == 2) {
Put_NotSetFlag(arg0, arg1, (uint32_t)box, 0, 0, 0, tmp);
}
}
break;
default:
break;
}
switch (arg2) {
case 0:
case 1:
case 2:
case 4:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
GetInstance();
break;
default:
break;
}
}
if (arg3 != (uint32_t*)0) {
arg3[0] = tmp[0];
arg3[1] = tmp[1];
arg3[2] = tmp[2];
}
return ok;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042B11C
void* GetInstance();
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_0042b11c(void* arg0, const void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t* arg6) __asm__("_ZN8PokeTool11PokeGetUtil14Put_NotSetFlagEPN4gfl24heap11CtrHeapBaseEPKN3pml8pokepara12PokemonParamENS0_8PutPlace3TagENS0_8PutSpace3TagEjjPNS0_11ReturnParamE");
extern "C" void YellowAuto_0042b11c(void* arg0, const void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t* arg6) {
arg6[0] = (uint32_t)arg0 & 0xFFFF0000U;
arg6[1] = 0U;
arg6[2] = 0U;
if (arg2 == 1U) GetInstance();
if (arg2 == 2U) GetInstance();
GFLassert(0U, 0U, 0U, 0U);
}
#endif
