// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E0CB8
const void* GetMemberPointerConst(const void*, uint8_t);
extern "C" const void* YellowAuto_002e0cb8(const uint8_t* arg0, uint8_t arg1) __asm__("_ZN3App8PokeList16IntermediateData12GetPokeConstEh");
extern "C" const void* YellowAuto_002e0cb8(const uint8_t* arg0, uint8_t arg1) {
const void* party = *reinterpret_cast<const void* const*>(arg0);
if (party == nullptr)
party = *reinterpret_cast<const void* const*>(arg0 + 4);
if (party != nullptr)
return GetMemberPointerConst(party, arg1);
if (*reinterpret_cast<const uint32_t*>(arg0 + 8) == 0)
return nullptr;
return *reinterpret_cast<const void* const*>(arg0 + 12 + static_cast<uint32_t>(arg1) * 4u);
}
#endif
