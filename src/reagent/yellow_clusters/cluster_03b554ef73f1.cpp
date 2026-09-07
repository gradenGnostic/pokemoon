// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038AF64
void* func_0053d9c4(void* arg0, void* arg1);
void func_0038a8dc(void* arg0, void* arg1, void* arg2, uint32_t arg3, const void* arg4);
extern "C" void* YellowAuto_0038af64(void* arg0, void* arg1, void* arg2, uint32_t arg3, const void* arg4) __asm__("_ZN5Field15EventBattleCall8CallWildEPN7GameSys16GameEventManagerEPNS1_11GameManagerERNS_7Encount7PokeSetEjPKN3pml9PokePartyE");
extern "C" void* YellowAuto_0038af64(void* arg0, void* arg1, void* arg2, uint32_t arg3, const void* arg4) {
void* _tmp = func_0053d9c4(arg0, arg1);
func_0038a8dc(_tmp, arg1, arg2, arg3, arg4);
return _tmp;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038A3E4
void* func_0053d9c4(void* arg0, void* arg1);
void func_0038a8dc(void* arg0, void* arg1, void* arg2, uint32_t arg3, const void* arg4);
extern "C" void* YellowAuto_0038a3e4(void* arg0, void* arg1, void* arg2, uint32_t arg3, uint32_t arg4, const void* arg5) __asm__("_ZN5Field15EventBattleCall10CallWildExEPN7GameSys16GameEventManagerEPNS1_11GameManagerERNS_7Encount7PokeSetEjjPKN3pml9PokePartyE");
extern "C" void* YellowAuto_0038a3e4(void* arg0, void* arg1, void* arg2, uint32_t arg3, uint32_t arg4, const void* arg5) {
void* _tmp = func_0053d9c4(arg0, arg1);
func_0038a8dc(_tmp, arg1, arg2, arg3, arg5);
if (arg4 != -1 && arg4 != 0) *(uint32_t*)((uint8_t*)_tmp + 0x598) = (uint32_t)arg4;
return _tmp;
}
#endif
