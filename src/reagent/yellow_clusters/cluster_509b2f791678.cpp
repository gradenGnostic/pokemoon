// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038C128
void* FUN_0053dab4(void*, uint8_t*);
void FUN_0037f5fc(uint8_t*, uint32_t, void*, void*, void*);
void FUN_0037fce8(uint8_t*, uint16_t, uint16_t, uint16_t, uint16_t);
extern "C" void* YellowAuto_0038c128(uint8_t* arg0, uint32_t arg1, void* arg2, void* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7) __asm__("_ZN5Field15EventScriptCall10CallScriptEPN7GameSys11GameManagerEjPNS_15IFieldActorBaseEPNS_9MoveModel14FieldMoveModelEjjjj");
extern "C" void* YellowAuto_0038c128(uint8_t* arg0, uint32_t arg1, void* arg2, void* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7) {
uint8_t* _s = (uint8_t*)(*(uint32_t*)(arg0 + 0x34));
void* _m = (void*)(*(uint32_t*)(arg0 + 0x20));
void* _e = FUN_0053dab4(_m, _s);
FUN_0037f5fc(_s, arg1, _e, arg2, arg3);
FUN_0037fce8(_s, (uint16_t)arg4, (uint16_t)arg5, (uint16_t)arg6, (uint16_t)arg7);
*(uint32_t*)((uint8_t*)_e + 0x1c) = arg1;
*(uint32_t*)((uint8_t*)_e + 0x28) = (uint32_t)arg3;
*(uint32_t*)((uint8_t*)_e + 0x2c) = (uint32_t)arg2;
return _e;
}
#endif
