// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474F24
extern "C" uint32_t YellowAuto_00474f24(const uint8_t* arg0) __asm__("_ZNK11ExtSavedata17NijiExtSaveSystem13GetBootResultEv");
extern "C" uint32_t YellowAuto_00474f24(const uint8_t* arg0) {
if (arg0[13] != 0) return arg0[13]; if (arg0[14] == 0) return 0; if (arg0[14] == 1) return 2; if (arg0[14] == 2) return 5; if (arg0[14] == 3) return 9; if (arg0[14] == 5) return 8; if (arg0[14] == 6) return 6; if (arg0[14] == 7) return 3; if (arg0[14] == 4) return 5; if (arg0[14] == 8) return 5; if (arg0[14] == 9) return 5; return 11;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015B1C8
extern "C" bool YellowAuto_0015b1c8(uint32_t arg0) __asm__("_ZN11ExtSavedata17NijiExtSaveSystem12IsFatalErrorEN4gfl22fs11ExtSaveFile6ResultE");
extern "C" bool YellowAuto_0015b1c8(uint32_t arg0) {
return arg0 == 4 || arg0 >= 6;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015B704
void FUN_0015b87c(uint8_t*, void*);
void FUN_003e6be8(uint32_t);
void* FUN_00105500(uint32_t, void*);
void* FUN_0035f274(void*, void*, void*, uint32_t, uint32_t);
void FUN_0035f234(void*, uint32_t);
extern uint32_t DAT_0015b7ac;
extern "C" bool YellowAuto_0015b704(uint8_t* arg0, void* arg1) __asm__("_ZN11ExtSavedata17NijiExtSaveSystem16StartBootProcessEPN4gfl24heap11CtrHeapBaseE");
extern "C" bool YellowAuto_0015b704(uint8_t* arg0, void* arg1) {
uint8_t _b[20];
FUN_0015b87c(arg0, arg1);
FUN_003e6be8(2);
arg0[6] = 1;
uint8_t* _o = (uint8_t*)FUN_00105500(0x14, arg1);
if (_o != (uint8_t*)0) {
*(uint32_t*)_o = DAT_0015b7ac;
*(uint8_t**)(_o + 4) = arg0;
*(uint8_t**)(_o + 8) = _b;
*(void**)(_o + 12) = arg1;
*(void**)(_o + 16) = (void*)0;
uint8_t* _t = (uint8_t*)FUN_00105500(8, arg1);
uint8_t* _th = (uint8_t*)0;
if (_t != (uint8_t*)0) {
_th = (uint8_t*)FUN_0035f274(_t, _o, arg1, 1, 0x1000);
}
*(uint8_t**)(_o + 16) = _th;
}
*(uint8_t**)(arg0 + 8) = _o;
FUN_0035f234(*(void**)(_o + 16), 15);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015B624
uint32_t FUN_0035f264(void*);
void FUN_003e6c40(uint32_t);
void FUN_00358090(void*);
extern "C" bool YellowAuto_0015b624(uint8_t* arg0) __asm__("_ZN11ExtSavedata17NijiExtSaveSystem15WaitBootProcessEv");
extern "C" bool YellowAuto_0015b624(uint8_t* arg0) {
uint8_t* _a = *(uint8_t**)(arg0 + 8);
if (_a != (uint8_t*)0) {
void* _th = *(void**)(_a + 16);
uint32_t _s = FUN_0035f264(_th);
if (_s != 0) {
return false;
}
FUN_003e6c40(2);
uint8_t* _b = *(uint8_t**)(arg0 + 8);
if (_b != (uint8_t*)0) {
void** _vt = *(void***)_b;
void (*_fn)(void*) = (void (*)(void*))_vt[1];
_fn(_b);
}
*(uint8_t**)(arg0 + 8) = (uint8_t*)0;
arg0[6] = 0;
}
void* _blk = *(void**)(arg0 + 0x424);
FUN_00358090(_blk);
*(uint32_t*)(arg0 + 0x428) = 0;
return true;
}
#endif
