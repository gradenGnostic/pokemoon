// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E548
extern "C" bool YellowAuto_0043e548(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata17JoinFestaDataSave15IsFacilitiesBuyEj");
extern "C" bool YellowAuto_0043e548(uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = (uint32_t)*(arg0 + 14752U);
if (v0 >= 7U) return true;
uint32_t v1 = *(uint32_t*)(arg0 + v0 * 72U + 832U);
if ((v1 & (1U << (arg1 & 255U))) != 0U) return true;
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E748
int32_t IsOpenMessageId(uint32_t);
void GFLassert();
extern "C" void YellowAuto_0043e748(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata17JoinFestaDataSave16SetUseSelectWordEj");
extern "C" void YellowAuto_0043e748(uint8_t* arg0, uint32_t arg1) {
int32_t v0 = IsOpenMessageId(arg1);
if (v0 == -1) return;
if ((uint32_t)v0 >= 107U) { GFLassert(); return; }
*(arg0 + v0 + 10840U) = 1U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7260
extern "C" uint16_t YellowAuto_004a7260(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata17JoinFestaDataSave10GetPatternEN15JoinFestaScript11PatternTypeE");
extern "C" uint16_t YellowAuto_004a7260(const uint8_t* arg0, uint32_t arg1) {
if (arg1 == 0U) return *(const uint16_t*)(arg0 + 8U);
if (arg1 == 1U) return *(const uint16_t*)(arg0 + 10U);
if (arg1 == 2U) return *(const uint16_t*)(arg0 + 12U);
if (arg1 == 3U) return *(const uint16_t*)(arg0 + 14U);
if (arg1 == 4U) return *(const uint16_t*)(arg0 + 16U);
return 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7568
extern "C" uint16_t YellowAuto_004a7568(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata17JoinFestaDataSave18GetPatternCateogryEN15JoinFestaScript11PatternTypeE");
extern "C" uint16_t YellowAuto_004a7568(const uint8_t* arg0, uint32_t arg1) {
if (arg1 == 0U) return *(const uint16_t*)(arg0 + 18U);
if (arg1 == 1U) return *(const uint16_t*)(arg0 + 20U);
if (arg1 == 2U) return *(const uint16_t*)(arg0 + 22U);
if (arg1 == 3U) return *(const uint16_t*)(arg0 + 24U);
if (arg1 == 4U) return *(const uint16_t*)(arg0 + 26U);
return 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E174
void GFLassert();
extern "C" void YellowAuto_0043e174(uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint16_t arg3) __asm__("_ZN8Savedata17JoinFestaDataSave10SetPatternEN15JoinFestaScript11PatternTypeEtt");
extern "C" void YellowAuto_0043e174(uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint16_t arg3) {
if (arg1 == 0U) { *(uint16_t*)(arg0 + 8U) = arg2; *(uint16_t*)(arg0 + 18U) = arg3; return; }
if (arg1 == 1U) { *(uint16_t*)(arg0 + 10U) = arg2; *(uint16_t*)(arg0 + 20U) = arg3; return; }
if (arg1 == 2U) { *(uint16_t*)(arg0 + 12U) = arg2; *(uint16_t*)(arg0 + 22U) = arg3; return; }
if (arg1 == 3U) { *(uint16_t*)(arg0 + 14U) = arg2; *(uint16_t*)(arg0 + 24U) = arg3; return; }
if (arg1 == 4U) { *(uint16_t*)(arg0 + 16U) = arg2; *(uint16_t*)(arg0 + 26U) = arg3; return; }
GFLassert();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7784
extern "C" uint8_t YellowAuto_004a7784(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata17JoinFestaDataSave27GetFortuneResultHitByActionEN15JoinFestaScript19FortuneResultActionE");
extern "C" uint8_t YellowAuto_004a7784(const uint8_t* arg0, uint32_t arg1) {
uint8_t v0 = 0U;
uint32_t v1 = 0U;
while (v1 < 7U) { uint8_t v2 = *(arg0 + v1 * 72U + 831U); uint8_t v3 = *(arg0 + v1 * 72U + 830U); if ((uint32_t)v2 == arg1 && v0 < v3) v0 = v3; v1 = v1 + 1U; }
return v0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A74C0
int32_t IsOpenMessageId(uint32_t);
extern "C" bool YellowAuto_004a74c0(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata17JoinFestaDataSave15IsUseSelectWordEj");
extern "C" bool YellowAuto_004a74c0(const uint8_t* arg0, uint32_t arg1) {
int32_t v0 = IsOpenMessageId(arg1);
if (v0 == -1) return true;
if ((uint32_t)v0 >= 107U) return false;
if (*(arg0 + v0 + 10840U) == 0U) return false;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EFD4
extern "C" void YellowAuto_0043efd4(uint8_t* arg0, bool arg1) __asm__("_ZN8Savedata17JoinFestaDataSave27SetIsSkipMessageHorrorHouseEb");
extern "C" void YellowAuto_0043efd4(uint8_t* arg0, bool arg1) {
*(arg0 + 14836U) = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7628
extern "C" bool YellowAuto_004a7628(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave21GetIsSkipMessageStallEv");
extern "C" bool YellowAuto_004a7628(const uint8_t* arg0) {
return *(arg0 + 14835U) != 0U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A743C
extern "C" uint8_t YellowAuto_004a743c(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata17JoinFestaDataSave14GetRewardStateEN15JoinFestaScript10RewardTypeE");
extern "C" uint8_t YellowAuto_004a743c(const uint8_t* arg0, uint32_t arg1) {
if (arg1 < 11U) return *(arg0 + arg1 + 1348U);
return 0U;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EE2C
uint32_t FUN_0046f6bc(uint32_t arg0);
extern "C" int32_t YellowAuto_0043ee2c(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave27GetCoinNecessaryForNextRankEv");
extern "C" int32_t YellowAuto_0043ee2c(uint8_t* arg0) {
uint16_t rank = *(uint16_t*)(arg0 + 0x542);
if (rank == 999) {
uint16_t v = *(uint16_t*)(arg0 + 0x550);
if (v >= 300) { *(uint16_t*)(arg0 + 0x550) = (uint16_t)(v - 300); return 0; }
return (int32_t)(300 - v);
}
uint32_t total = 0;
uint16_t cur = 1;
if ((uint16_t)(rank + 1) > 1) { do { total += FUN_0046f6bc((uint32_t)cur); cur = (uint16_t)(cur + 1); } while (cur < (uint16_t)(rank + 1)); }
uint32_t have = *(uint32_t*)(arg0 + 0x514);
if (have > total) return 0;
return (int32_t)(total - have);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A72C8
bool IsValidFriendKey(const void* arg0);
bool IsSameFriendKey(const void* arg0, const void* arg1);
extern "C" bool YellowAuto_004a72c8(const uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZNK8Savedata17JoinFestaDataSave11IsBlackListE18nnfriendsFriendKey");
extern "C" bool YellowAuto_004a72c8(const uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
for (uint32_t i = 0; i < 100; i++) {
uint32_t base = i * 88;
if (*(const uint8_t*)(arg0 + base + 0x84F) != 1) continue;
const void* stored = (const void*)(arg0 + base + 0x814);
if (!IsValidFriendKey(stored)) continue;
uint32_t q[3];
q[0] = arg1; q[1] = arg2; q[2] = arg3;
if (IsSameFriendKey(stored, (const void*)q)) return true;
}
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E43C
bool IsSameFriendKey(const void* arg0, const void* arg1);
void* __aeabi_memcpy4(void* arg0, const void* arg1, uint32_t arg2);
void* FUN_004491cc(void* arg0);
extern "C" bool YellowAuto_0043e43c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata17JoinFestaDataSave15DeleteBlackListE18nnfriendsFriendKey");
extern "C" bool YellowAuto_0043e43c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
for (uint32_t i = 0; i < 100; i++) {
if (*(uint8_t*)(arg0 + i * 88 + 0x84F) != 1) continue;
const void* stored = (const void*)(arg0 + i * 88 + 0x814);
uint32_t q[3];
q[0] = arg1; q[1] = arg2; q[2] = arg3;
if (!IsSameFriendKey(stored, (const void*)q)) continue;
uint32_t j = i + 1;
while (j < 100) {
if (*(uint8_t*)(arg0 + j * 88 + 0x84F) != 1) break;
__aeabi_memcpy4((void*)(arg0 + j * 88 + 0x7A0), (const void*)(arg0 + j * 88 + 0x7F8), 88);
j++;
}
uint8_t tmp[88];
void* def = FUN_004491cc((void*)tmp);
__aeabi_memcpy4((void*)(arg0 + j * 88 + 0x7A0), (const void*)def, 88);
*(uint8_t*)(arg0 + j * 88 + 0x7F7) = 0;
return true;
}
return false;
}
#endif
