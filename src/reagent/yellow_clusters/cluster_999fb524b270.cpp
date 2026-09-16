// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00450A94
void func_004509d0(uint8_t*, uint32_t, uint32_t, int8_t, int8_t);
void func_00450d4c(uint8_t*, uint32_t, uint32_t, int8_t, int8_t);
extern "C" void YellowAuto_00450a94(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI30JoinFestaRecordDetailLowerView13SetRecordDataERNS0_19JoinFestaRecordDataE");
extern "C" void YellowAuto_00450a94(uint8_t* arg0, const uint8_t* arg1) {
func_004509d0(arg0, *(uint32_t*)0x450C80, *(const uint32_t*)(arg1 + 0x0), 1, 1);
func_004509d0(arg0, *(uint32_t*)0x450C84, *(const uint32_t*)(arg1 + 0xC), (int8_t)arg1[0x4C], (int8_t)arg1[0x54]);
func_004509d0(arg0, *(uint32_t*)0x450C88, *(const uint32_t*)(arg1 + 0x10), (int8_t)arg1[0x4D], (int8_t)arg1[0x55]);
func_004509d0(arg0, *(uint32_t*)0x450C8C, *(const uint32_t*)(arg1 + 0x14), (int8_t)arg1[0x4E], (int8_t)arg1[0x56]);
func_004509d0(arg0, *(uint32_t*)0x450C90, *(const uint32_t*)(arg1 + 0x18), (int8_t)arg1[0x4F], (int8_t)arg1[0x57]);
func_004509d0(arg0, *(uint32_t*)0x450C94, *(const uint32_t*)(arg1 + 0x1C), (int8_t)arg1[0x50], (int8_t)arg1[0x58]);
func_004509d0(arg0, *(uint32_t*)0x450C98, *(const uint32_t*)(arg1 + 0x20), (int8_t)arg1[0x51], (int8_t)arg1[0x59]);
func_004509d0(arg0, *(uint32_t*)0x450C9C, *(const uint32_t*)(arg1 + 0x24), (int8_t)arg1[0x52], (int8_t)arg1[0x5A]);
func_004509d0(arg0, *(uint32_t*)0x450CA0, *(const uint32_t*)(arg1 + 0x28), (int8_t)arg1[0x53], (int8_t)arg1[0x5B]);
func_00450d4c(arg0, *(uint32_t*)0x450CA4, *(const uint32_t*)(arg1 + 0x2C), (int8_t)arg1[0x4C], (int8_t)arg1[0x54]);
func_00450d4c(arg0, *(uint32_t*)0x450CA8, *(const uint32_t*)(arg1 + 0x30), (int8_t)arg1[0x4D], (int8_t)arg1[0x55]);
func_00450d4c(arg0, *(uint32_t*)0x450CAC, *(const uint32_t*)(arg1 + 0x34), (int8_t)arg1[0x4E], (int8_t)arg1[0x56]);
func_00450d4c(arg0, *(uint32_t*)0x450CB0, *(const uint32_t*)(arg1 + 0x38), (int8_t)arg1[0x4F], (int8_t)arg1[0x57]);
func_00450d4c(arg0, *(uint32_t*)0x450CB4, *(const uint32_t*)(arg1 + 0x3C), (int8_t)arg1[0x50], (int8_t)arg1[0x58]);
func_00450d4c(arg0, *(uint32_t*)0x450CB8, *(const uint32_t*)(arg1 + 0x40), (int8_t)arg1[0x51], (int8_t)arg1[0x59]);
func_00450d4c(arg0, *(uint32_t*)0x450CBC, *(const uint32_t*)(arg1 + 0x44), (int8_t)arg1[0x52], (int8_t)arg1[0x5A]);
func_00450d4c(arg0, *(uint32_t*)0x450CC0, *(const uint32_t*)(arg1 + 0x48), (int8_t)arg1[0x53], (int8_t)arg1[0x5B]);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00450E10
extern uint32_t const_00450f1c;
extern const uint32_t* const_00450f20;
extern uint32_t const_00450f24;
uint8_t* NetApplicationViewBase(uint8_t*, uint8_t*, int32_t, int32_t, int32_t, int32_t, void*, int32_t);
const uint32_t* GetLayoutResourceID(void*, int32_t);
void* GetLayoutWork(void*, int32_t);
void* GetPartsPane(void*, int32_t);
int32_t GetBoundingPane(void*, void*, int32_t, uint32_t*);
void CreateButtonManager(uint8_t*, void*, void*, void*, int32_t);
void SetButtonSelectSE(void*, int32_t, uint32_t);
extern "C" uint8_t* YellowAuto_00450e10(uint8_t* arg0, uint8_t* arg1, int32_t arg2, int32_t arg3) __asm__("_ZN9NetAppLib11JoinFestaUI30JoinFestaRecordDetailLowerViewC1EPNS_6System19ApplicationWorkBaseEii");
extern "C" uint8_t* YellowAuto_00450e10(uint8_t* arg0, uint8_t* arg1, int32_t arg2, int32_t arg3) {
NetApplicationViewBase(arg0, arg1, arg2, 110, 6, 1, *(void**)(arg1 + 48), 43);
*(uint32_t*)arg0 = const_00450f1c;
*(uint32_t*)(arg0 + 160) = const_00450f1c + 104;
*(uint32_t*)(arg0 + 164) = 0;
*(uint8_t**)(arg0 + 168) = arg1;
void* _g = *(void**)(arg0 + 96);
const uint32_t* _r = GetLayoutResourceID(_g, 0);
uint32_t _id = *_r;
void* _w = GetLayoutWork(_g, 0);
void* _p = GetPartsPane(_w, 165);
uint32_t _cfg[9];
for (int32_t _i = 0; _i < 9; ++_i) _cfg[_i] = const_00450f20[_i];
_cfg[1] = (uint32_t)_p;
uint32_t _b = (uint32_t)GetBoundingPane(_w, _p, 1, &_id);
_cfg[2] = _b;
CreateButtonManager(arg0, *(void**)(arg1 + 8), _w, (void*)_cfg, 1);
SetButtonSelectSE(*(void**)(arg0 + 16), 0, const_00450f24);
*(uint8_t**)(arg0 + 20) = arg0 + 160;
return arg0;
}
#endif
