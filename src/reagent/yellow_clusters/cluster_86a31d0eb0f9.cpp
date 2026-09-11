// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436B88
void GFLassertStop();
void Deserialize_Core(void*, void*);
extern "C" void YellowAuto_00436b88(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata10BoxPokemon10GetPokemonEPN3pml8pokepara9CoreParamEjj");
extern "C" void YellowAuto_00436b88(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
if (arg2 >= 32 || arg3 >= 30) { GFLassertStop(); return; } Deserialize_Core(arg1, (void*)(arg0 + 4 + arg2 * 30 * 232 + arg3 * 232));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436F74
void GFLassertStop();
void Deserialize_Core(void*, void*);
bool IsNull(void*);
bool IsEgg(void*, uint32_t);
extern "C" bool YellowAuto_00436f74(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, bool arg4) __asm__("_ZN8Savedata10BoxPokemon12CheckPokemonEjjPN3pml8pokepara9CoreParamEb");
extern "C" bool YellowAuto_00436f74(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, bool arg4) {
if (arg1 >= 32 || arg2 >= 30) { GFLassertStop(); } else { Deserialize_Core(arg3, (void*)(arg0 + 4 + arg1 * 30 * 232 + arg2 * 232)); } if (!IsNull(arg3)) { if (arg4 || !IsEgg(arg3, 2)) { return true; } } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437718
bool CheckPokemon(uint8_t*, uint32_t, uint32_t, void*, bool);
extern "C" int32_t YellowAuto_00437718(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN8Savedata10BoxPokemon22CheckPokemonTrayRetPosEjPN3pml8pokepara9CoreParamE");
extern "C" int32_t YellowAuto_00437718(uint8_t* arg0, uint32_t arg1, void* arg2) {
for (uint32_t _i = 0; _i < 30; ++_i) { if (!CheckPokemon(arg0, arg1, _i, arg2, true)) { return _i; } } return -1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437460
bool CheckPokemon(uint8_t*, uint32_t, uint32_t, void*, bool);
extern "C" int32_t YellowAuto_00437460(uint8_t* arg0, void* arg1, bool arg2) __asm__("_ZN8Savedata10BoxPokemon18GetPokemonCountAllEPN3pml8pokepara9CoreParamEb");
extern "C" int32_t YellowAuto_00437460(uint8_t* arg0, void* arg1, bool arg2) {
int32_t _c = 0; for (uint32_t _t = 0; _t < 32; ++_t) { for (uint32_t _p = 0; _p < 30; ++_p) { if (CheckPokemon(arg0, _t, _p, arg1, arg2)) { _c += 1; } } } return _c;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436AFC
uint32_t GetHeapAlign(void*);
void* HeapAllocAlign(void*, uint32_t, uint32_t);
void MemCpy(void*, void*, uint32_t);
void HeapFree(void*);
extern "C" void YellowAuto_00436afc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) __asm__("_ZN8Savedata10BoxPokemon10ChangeTrayEjjPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00436afc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) {
uint32_t mult = *(uint32_t*)0x00436B80;
uint32_t sz = *(uint32_t*)0x00436B84;
uint8_t* p1 = arg0 + arg1 * mult * 16 + 4;
uint8_t* p2 = arg0 + arg2 * mult * 16 + 4;
uint32_t al = GetHeapAlign(arg3);
void* tmp = HeapAllocAlign(arg3, sz, 0 - al);
MemCpy(tmp, p1, sz);
MemCpy(p1, p2, sz);
MemCpy(p2, tmp, sz);
HeapFree(tmp);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436F00
void* AllocNew(uint32_t, void*);
void* InitCore(void*, void*);
uint32_t FindSpace(uint8_t*, uint32_t*, uint32_t*, void*);
void DeleteCore(void*);
extern "C" uint32_t YellowAuto_00436f00(uint8_t* arg0, uint32_t* arg1, uint32_t* arg2, void* arg3) __asm__("_ZN8Savedata10BoxPokemon11GetSpacePosERjS1_PN4gfl24heap11CtrHeapBaseE");
extern "C" uint32_t YellowAuto_00436f00(uint8_t* arg0, uint32_t* arg1, uint32_t* arg2, void* arg3) {
void* tmp = AllocNew(16, arg3);
void* core = tmp == (void*)0 ? (void*)0 : InitCore(tmp, arg3);
uint32_t res = FindSpace(arg0, arg1, arg2, core);
if (core != (void*)0) DeleteCore(core);
return res;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437018
void* AllocNew(uint32_t, void*);
void* InitCore(void*, void*);
void ClearCore(void*);
uint32_t SerializeCore(void*, uint8_t*);
uint32_t DeleteCore(void*);
extern "C" uint32_t YellowAuto_00437018(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) __asm__("_ZN8Savedata10BoxPokemon12ClearPokemonEjjPN4gfl24heap11CtrHeapBaseE");
extern "C" uint32_t YellowAuto_00437018(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) {
void* tmp = AllocNew(16, arg3);
void* core = tmp == (void*)0 ? (void*)0 : InitCore(tmp, arg3);
uint32_t res = 0;
if (arg1 < 32 && arg2 < 30) ClearCore(core);
if (arg1 < 32 && arg2 < 30) res = SerializeCore(core, arg0 + arg1 * *(uint32_t*)0x004370CC * 16 + arg2 * 232 + 4);
if (core != (void*)0) return DeleteCore(core);
return res;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436BE4
void* AllocObject(uint32_t, void*);
void* InitObject(void*, void*);
void DeserializeObject(void*, const void*);
void AssertStop();
extern "C" void* YellowAuto_00436be4(const uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) __asm__("_ZN8Savedata10BoxPokemon10GetPokemonEjjPN4gfl24heap11CtrHeapBaseE");
extern "C" void* YellowAuto_00436be4(const uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) {
void* a = AllocObject(16, arg3);
if (a != (void*)0) {
 a = InitObject(a, arg3);
}
if (arg1 < 32 && arg2 < 30) {
 const uint8_t* s = arg0 + arg2 * 232 + arg1 * 6960 + 4;
 DeserializeObject(a, (const void*)s);
} else {
 AssertStop();
}
return a;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004370D0
void AssertFail();
int32_t GetAlign(void*);
void* AllocAligned(void*, uint32_t, uint32_t);
void* CopyMemory(void*, const void*, uint32_t);
void FreeMemory(void*);
extern "C" void YellowAuto_004370d0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, void* arg5) __asm__("_ZN8Savedata10BoxPokemon13ChangePokemonEjjjjPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_004370d0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, void* arg5) {
uint32_t base = *(uint32_t*)(arg0 + 0x36604);
uint32_t maxb = (uint32_t)(*(uint8_t*)(base + 0x5E5));
if (arg1 >= maxb || arg2 >= 30 || arg3 >= maxb || arg4 >= 30) {
 AssertFail();
 return;
}
uint8_t* s1 = arg0 + arg2 * 232 + arg1 * 6960 + 4;
uint8_t* s2 = arg0 + arg4 * 232 + arg3 * 6960 + 4;
int32_t al = GetAlign(arg5);
void* t = AllocAligned(arg5, 232, (uint32_t)(0 - al));
CopyMemory(t, (const void*)s1, 232);
CopyMemory((void*)s1, (const void*)s2, 232);
CopyMemory((void*)s2, (const void*)t, 232);
FreeMemory(t);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436C7C
void* AllocObject(uint32_t, void*);
void* InitObject(void*, void*);
int32_t CheckSlot(uint8_t*, uint32_t, uint32_t, void*, uint32_t);
void SerializeSlot(const void*, void*);
void DeleteObject(void*);
extern "C" uint32_t YellowAuto_00436c7c(uint8_t* arg0, const void* arg1, uint32_t arg2, uint32_t arg3, void* arg4) __asm__("_ZN8Savedata10BoxPokemon10PutPokemonEPKN3pml8pokepara9CoreParamEjjPN4gfl24heap11CtrHeapBaseE");
extern "C" uint32_t YellowAuto_00436c7c(uint8_t* arg0, const void* arg1, uint32_t arg2, uint32_t arg3, void* arg4) {
void* t = AllocObject(16, arg4);
if (t != (void*)0) {
 t = InitObject(t, arg4);
}
uint32_t r = 0;
if (CheckSlot(arg0, arg2, arg3, t, 1) == 0) {
 if (arg2 < 32 && arg3 < 30) {
  uint8_t* d = arg0 + arg3 * 232 + arg2 * 6960 + 4;
  SerializeSlot(arg1, (void*)d);
  r = 1;
 }
}
if (t != (void*)0) {
 DeleteObject(t);
}
return r;
}
#endif
