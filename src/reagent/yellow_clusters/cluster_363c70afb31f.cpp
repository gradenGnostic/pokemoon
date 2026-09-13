// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493EDC
void Serialize_Core(const void*, void*);
extern "C" uint32_t YellowAuto_00493edc(const uint8_t* arg0, void* arg1) __asm__("_ZNK3pml9PokeParty22SerializeToShortStructEPv");
extern "C" uint32_t YellowAuto_00493edc(const uint8_t* arg0, void* arg1) {
for (uint32_t i = 0; i < 6; ++i) { const void* tmp0 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + i * 4)); void* tmp1 = reinterpret_cast<void*>(reinterpret_cast<uint8_t*>(arg1) + i * 260); Serialize_Core(tmp0, tmp1); } return 1560;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031F1E8
void CopyFrom(void*, const void*);
extern "C" void YellowAuto_0031f1e8(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3pml9PokeParty8CopyFromERKS0_");
extern "C" void YellowAuto_0031f1e8(uint8_t* arg0, const uint8_t* arg1) {
for (uint32_t i = 0; i < 6; ++i) { void* tmp0 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + i * 4)); const void* tmp1 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg1 + i * 4)); CopyFrom(tmp0, tmp1); } *(arg0 + 24) = *(arg1 + 24);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049399C
void Serialize_Core(const void*, void*);
extern "C" uint32_t YellowAuto_0049399c(const uint8_t* arg0, uint8_t* arg1) __asm__("_ZNK3pml9PokeParty13SerializeCoreEPNS0_14SERIALIZE_DATAE");
extern "C" uint32_t YellowAuto_0049399c(const uint8_t* arg0, uint8_t* arg1) {
for (uint32_t i = 0; i < 6; ++i) { const void* tmp0 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + i * 4)); void* tmp1 = reinterpret_cast<void*>(arg1 + i * 260); Serialize_Core(tmp0, tmp1); } *(arg1 + 1560) = *(arg0 + 24); *(arg1 + 1561) = *(arg0 + 25); *(arg1 + 1562) = 0; *(arg1 + 1563) = 0; return 1564;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493D74
bool HavePokerusUntilNow(const void*);
extern "C" bool YellowAuto_00493d74(const uint8_t* arg0) __asm__("_ZNK3pml9PokeParty17CheckPokerusExistEv");
extern "C" bool YellowAuto_00493d74(const uint8_t* arg0) {
uint32_t tmp0 = *(arg0 + 24); for (uint32_t i = 0; i < tmp0; ++i) { const void* tmp1 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + i * 4)); if (HavePokerusUntilNow(tmp1)) { return true; } } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493B34
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_00493b34(const uint8_t* arg0, const void* arg1) __asm__("_ZNK3pml9PokeParty14GetMemberIndexEPKNS_8pokepara12PokemonParamE");
extern "C" uint32_t YellowAuto_00493b34(const uint8_t* arg0, const void* arg1) {
uint32_t tmp0 = *(arg0 + 24); if (tmp0 == 0) { return 6; } for (uint32_t i = 0; i < tmp0; ++i) { if (i >= 6) { GFLassertStop(0, 0, 0); return 6; } const void* tmp1 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + i * 4)); if (tmp1 == arg1) { return i; } } return 6;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031F2D4
void* OperatorNew(uint32_t, void*);
void* PokemonParamCtor(void*, void*, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_0031f2d4(uint8_t* arg0, void* arg1) __asm__("_ZN3pml9PokePartyC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_0031f2d4(uint8_t* arg0, void* arg1) {
*(arg0 + 25) = 0; *(arg0 + 24) = 0; for (uint32_t i = 0; i < 6; ++i) { void* tmp0 = OperatorNew(16, arg1); if (tmp0 != 0) { tmp0 = PokemonParamCtor(tmp0, arg1, 0, 1, 0, 0); } *reinterpret_cast<uint32_t*>(arg0 + i * 4) = reinterpret_cast<uint32_t>(tmp0); } return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031F35C
void VirtualDelete(void*);
extern "C" uint8_t* YellowAuto_0031f35c(uint8_t* arg0) __asm__("_ZN3pml9PokePartyD1Ev");
extern "C" uint8_t* YellowAuto_0031f35c(uint8_t* arg0) {
for (uint32_t i = 0; i < 6; ++i) { uint32_t tmp0 = *reinterpret_cast<uint32_t*>(arg0 + i * 4); if (tmp0 != 0) { VirtualDelete(reinterpret_cast<void*>(tmp0)); *reinterpret_cast<uint32_t*>(arg0 + i * 4) = 0; } } return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031F0F4
void Deserialize_Core(void*, const void*);
bool IsNull(const void*);
extern "C" void YellowAuto_0031f0f4(uint8_t* arg0, const void* arg1) __asm__("_ZN3pml9PokeParty26DeserializeFromShortStructEPKv");
extern "C" void YellowAuto_0031f0f4(uint8_t* arg0, const void* arg1) {
*(arg0 + 24) = 0; for (uint32_t i = 0; i < 6; ++i) { void* tmp0 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + i * 4)); const void* tmp1 = reinterpret_cast<const void*>(reinterpret_cast<const uint8_t*>(arg1) + i * 260); Deserialize_Core(tmp0, tmp1); if (!IsNull(reinterpret_cast<const void*>(tmp0))) { *(arg0 + 24) = static_cast<uint8_t>(*(arg0 + 24) + 1); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031ECAC
void Deserialize_Core(void*, const void*);
bool IsNull(const void*);
extern "C" void YellowAuto_0031ecac(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3pml9PokeParty15DeserializeCoreEPKNS0_14SERIALIZE_DATAE");
extern "C" void YellowAuto_0031ecac(uint8_t* arg0, const uint8_t* arg1) {
uint32_t tmp0 = 0; for (uint32_t i = 0; i < 6; ++i) { void* tmp1 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + i * 4)); const void* tmp2 = reinterpret_cast<const void*>(arg1 + i * 260); Deserialize_Core(tmp1, tmp2); if (!IsNull(reinterpret_cast<const void*>(tmp1))) { tmp0 = tmp0 + 1; } } uint8_t tmp3 = *(arg1 + 1560); *(arg0 + 24) = tmp3; *(arg0 + 25) = *(arg1 + 1561); if (tmp3 != static_cast<uint8_t>(tmp0)) { *(arg0 + 24) = static_cast<uint8_t>(tmp0); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031F21C
bool IsNull(const void*);
void CopyFrom(void*, const void*);
bool IsEgg(const void*, uint32_t);
extern "C" bool YellowAuto_0031f21c(uint8_t* arg0, const void* arg1) __asm__("_ZN3pml9PokeParty9AddMemberERKNS_8pokepara12PokemonParamE");
extern "C" bool YellowAuto_0031f21c(uint8_t* arg0, const void* arg1) {
if (IsNull(arg1)) { return false; } uint32_t tmp0 = *(arg0 + 24); if (tmp0 >= 6) { return false; } void* tmp1 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + tmp0 * 4)); if (tmp1 == 0) { return false; } CopyFrom(tmp1, arg1); *(arg0 + 24) = static_cast<uint8_t>(tmp0 + 1); uint32_t tmp2 = *(arg0 + 25); const void* tmp3 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + tmp2 * 4)); if (!IsEgg(tmp3, 2)) { return true; } uint32_t tmp4 = *(arg0 + 24); for (uint32_t i = 0; i < tmp4; ++i) { const void* tmp5 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + i * 4)); if (!IsEgg(tmp5, 2)) { *(arg0 + 25) = static_cast<uint8_t>(i); return true; } } *(arg0 + 25) = 0; return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031EA74
bool IsNull(const void*);
void Clear(void*);
bool IsEgg(const void*, uint32_t);
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_0031ea74(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3pml9PokeParty12RemoveMemberEj");
extern "C" void YellowAuto_0031ea74(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 6) { GFLassert(0, 0, 0, 0); return; } uint32_t tmp0 = *(arg0 + 24); if (tmp0 == 0) { GFLassert(0, 0, 0, 0); return; } void* tmp1 = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + arg1 * 4)); if (tmp1 == 0) { return; } if (IsNull(reinterpret_cast<const void*>(tmp1))) { return; } Clear(tmp1); for (int32_t i = 4; i >= 0; --i) { const void* tmp2 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + static_cast<uint32_t>(i) * 4)); if (IsNull(tmp2)) { uint32_t tmp3 = *reinterpret_cast<uint32_t*>(arg0 + static_cast<uint32_t>(i) * 4); for (uint32_t j = static_cast<uint32_t>(i); j < 5; ++j) { *reinterpret_cast<uint32_t*>(arg0 + j * 4) = *reinterpret_cast<uint32_t*>(arg0 + (j + 1) * 4); } *reinterpret_cast<uint32_t*>(arg0 + 20) = tmp3; } } uint8_t tmp4 = static_cast<uint8_t>(*(arg0 + 24) - 1); uint8_t tmp5 = *(arg0 + 25); *(arg0 + 24) = tmp4; if (tmp5 > static_cast<uint8_t>(arg1)) { *(arg0 + 25) = static_cast<uint8_t>(tmp5 - 1); } if (tmp5 != static_cast<uint8_t>(arg1)) { return; } if (tmp4 == 0) { *(arg0 + 25) = 0; return; } for (uint32_t i = 0; i < tmp4; ++i) { const void* tmp6 = reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + i * 4)); if (!IsEgg(tmp6, 2)) { *(arg0 + 25) = static_cast<uint8_t>(i); return; } } *(arg0 + 25) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00493EB4
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" const void* YellowAuto_00493eb4(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3pml9PokeParty21GetMemberPointerConstEj");
extern "C" const void* YellowAuto_00493eb4(const uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 6) { GFLassertStop(0, 0, 0); return reinterpret_cast<const void*>(0); } return reinterpret_cast<const void*>(*reinterpret_cast<const uint32_t*>(arg0 + arg1 * 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031EF08
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" void* YellowAuto_0031ef08(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3pml9PokeParty16GetMemberPointerEj");
extern "C" void* YellowAuto_0031ef08(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 6) { GFLassertStop(0, 0, 0); return reinterpret_cast<void*>(0); } return reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + arg1 * 4));
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031EBDC
void GFLassert();
bool IsNull(const void*);
void CopyFrom(void*, const void*);
uint32_t IsEgg(const void*, uint32_t);
extern "C" void YellowAuto_0031ebdc(uint8_t* arg0, uint32_t arg1, const void* arg2) __asm__("_ZN3pml9PokeParty13ReplaceMemberEjRKNS_8pokepara12PokemonParamE");
extern "C" void YellowAuto_0031ebdc(uint8_t* arg0, uint32_t arg1, const void* arg2) {
if (arg1 > 5U) {
GFLassert();
return;
}
if (*(void**)(arg0 + arg1 * 4U) == (void*)0) {
return;
}
if (IsNull(arg2)) {
return;
}
bool b0 = IsNull((const void*)*(void**)(arg0 + arg1 * 4U));
CopyFrom(*(void**)(arg0 + arg1 * 4U), arg2);
if (b0) {
arg0[0x18] = (uint8_t)(arg0[0x18] + 1U);
}
if ((uint32_t)arg0[0x19] != arg1) {
return;
}
uint32_t i0 = 0U;
if (arg0[0x18] != 0U) {
while (i0 < (uint32_t)arg0[0x18]) {
if (IsEgg((const void*)*(void**)(arg0 + i0 * 4U), 2U) == 0U) {
arg0[0x19] = (uint8_t)i0;
return;
}
i0 = i0 + 1U;
}
}
arg0[0x19] = 0U;
}
#endif
