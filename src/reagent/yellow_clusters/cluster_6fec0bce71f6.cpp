// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FC960
void* CreateCallContext(uint32_t, uint32_t);
uint32_t ProtoJoin(void*, void*, uint32_t, const void*, const void*);
void* OpNew(uint32_t);
void RegCb(void*, uint8_t*, uint32_t, uint32_t, void*);
uint32_t GetErr();
void MakeQr(void*, void*);
void CallErr(void*, void*, uint32_t, void*);
void ReleaseCtx(void*, void*);
extern "C" uint32_t YellowAuto_003fc960(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3) __asm__("_ZN7gflnet23nex20NexMatchMakingClient13JoinCommunityEjRKN2nn3nex6StringES6_");
extern "C" uint32_t YellowAuto_003fc960(uint8_t* arg0, uint32_t arg1, const void* arg2, const void* arg3) {
if (arg0[5] != 0) return 0;
if (*(uint32_t*)(arg0 + 0x2c) == 0) return 0;
arg0[5] = 1;
*(uint32_t*)(arg0 + 0x28) = 0;
void* _ctx = CreateCallContext(1, 0);
*(uint32_t*)(arg0 + 0xc) = arg1;
uint32_t _ok = ProtoJoin((void*)(*(uint32_t*)(arg0 + 0x2c)), _ctx, arg1, arg2, arg3);
if (_ok != 0) {
*(uint32_t*)(arg0 + 0x28) = (uint32_t)_ctx;
void* _p = OpNew(20);
if (_p != (void*)0) RegCb(_p, arg0, 0, 0, _ctx);
return 1;
}
void* _h = (void*)(*(uint32_t*)(arg0 + 0x1c));
if (_h != (void*)0) {
uint32_t _e = GetErr();
uint32_t _qr[5];
uint32_t _t[4];
MakeQr((void*)_qr, (void*)_t);
uint32_t _vt = *(uint32_t*)_h;
uint32_t _fn = *(uint32_t*)(_vt + 0x14);
CallErr((void*)_h, (void*)_qr, _e, (void*)_fn);
}
arg0[5] = 0;
*(uint32_t*)(arg0 + 0x28) = 0;
if (_ctx != (void*)0) {
uint32_t _vt2 = *(uint32_t*)_ctx;
uint32_t _fn2 = *(uint32_t*)(_vt2 + 0x4);
ReleaseCtx(_ctx, (void*)_fn2);
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FE808
void* CreateCallContext(uint32_t, uint32_t);
void ClearList(void*);
uint32_t ProtoFindPart(void*, void*, uint32_t, const void*, uint32_t);
void* OpNew(uint32_t);
void RegCb(void*, uint8_t*, uint32_t, uint32_t, void*);
uint32_t GetErr();
void MakeQr(void*, void*);
void CallErr(void*, void*, uint32_t, void*);
void ReleaseCtx(void*, void*);
extern "C" uint32_t YellowAuto_003fe808(uint8_t* arg0, uint32_t arg1, const void* arg2) __asm__("_ZN7gflnet23nex20NexMatchMakingClient26FindCommunityByParticipantEjRKN2nn3nex11ResultRangeE");
extern "C" uint32_t YellowAuto_003fe808(uint8_t* arg0, uint32_t arg1, const void* arg2) {
if (arg0[5] != 0) return 0;
if (*(uint32_t*)(arg0 + 0x2c) == 0) return 0;
arg0[5] = 1;
*(uint32_t*)(arg0 + 0x28) = 0;
void* _ctx = CreateCallContext(1, 0);
uint32_t _lst = *(uint32_t*)(arg0 + 0x48);
ClearList((void*)_lst);
uint32_t _lst2 = *(uint32_t*)(arg0 + 0x48);
uint32_t _ok = ProtoFindPart((void*)(*(uint32_t*)(arg0 + 0x2c)), _ctx, arg1, arg2, _lst2);
if (_ok != 0) {
*(uint32_t*)(arg0 + 0x28) = (uint32_t)_ctx;
void* _p = OpNew(20);
if (_p != (void*)0) RegCb(_p, arg0, 0, 0, _ctx);
return 1;
}
void* _h = (void*)(*(uint32_t*)(arg0 + 0x1c));
if (_h != (void*)0) {
uint32_t _e = GetErr();
uint32_t _qr[4];
uint32_t _t[4];
MakeQr((void*)_qr, (void*)_t);
uint32_t _vt = *(uint32_t*)_h;
uint32_t _fn = *(uint32_t*)(_vt + 0x14);
CallErr((void*)_h, (void*)_qr, _e, (void*)_fn);
}
arg0[5] = 0;
*(uint32_t*)(arg0 + 0x28) = 0;
if (_ctx != (void*)0) {
uint32_t _vt2 = *(uint32_t*)_ctx;
uint32_t _fn2 = *(uint32_t*)(_vt2 + 0x4);
ReleaseCtx(_ctx, (void*)_fn2);
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FDB70
void* CreateCallContext(uint32_t, uint32_t);
void ClearList(void*);
uint32_t ProtoFindOff(void*, void*, bool, const void*, uint32_t);
void* OpNew(uint32_t);
void RegCb(void*, uint8_t*, uint32_t, uint32_t, void*);
uint32_t GetErr();
void MakeQr(void*, void*);
void CallErr(void*, void*, uint32_t, void*);
void ReleaseCtx(void*, void*);
extern "C" uint32_t YellowAuto_003fdb70(uint8_t* arg0, bool arg1, const void* arg2) __asm__("_ZN7gflnet23nex20NexMatchMakingClient21FindOfficialCommunityEbRKN2nn3nex11ResultRangeE");
extern "C" uint32_t YellowAuto_003fdb70(uint8_t* arg0, bool arg1, const void* arg2) {
if (arg0[5] != 0) return 0;
if (*(uint32_t*)(arg0 + 0x2c) == 0) return 0;
arg0[5] = 1;
*(uint32_t*)(arg0 + 0x28) = 0;
void* _ctx = CreateCallContext(1, 0);
uint32_t _lst = *(uint32_t*)(arg0 + 0x48);
ClearList((void*)_lst);
uint32_t _lst2 = *(uint32_t*)(arg0 + 0x48);
uint32_t _ok = ProtoFindOff((void*)(*(uint32_t*)(arg0 + 0x2c)), _ctx, arg1, arg2, _lst2);
if (_ok != 0) {
*(uint32_t*)(arg0 + 0x28) = (uint32_t)_ctx;
void* _p = OpNew(20);
if (_p != (void*)0) RegCb(_p, arg0, 0, 0, _ctx);
return 1;
}
void* _h = (void*)(*(uint32_t*)(arg0 + 0x1c));
if (_h != (void*)0) {
uint32_t _e = GetErr();
uint32_t _qr[4];
uint32_t _t[4];
MakeQr((void*)_qr, (void*)_t);
uint32_t _vt = *(uint32_t*)_h;
uint32_t _fn = *(uint32_t*)(_vt + 0x14);
CallErr((void*)_h, (void*)_qr, _e, (void*)_fn);
}
arg0[5] = 0;
*(uint32_t*)(arg0 + 0x28) = 0;
if (_ctx != (void*)0) {
uint32_t _vt2 = *(uint32_t*)_ctx;
uint32_t _fn2 = *(uint32_t*)(_vt2 + 0x4);
ReleaseCtx(_ctx, (void*)_fn2);
}
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FD048
uint32_t helper_0017c8a0(void*, uint32_t);
extern "C" uint32_t YellowAuto_003fd048(uint8_t* arg0) __asm__("_ZN7gflnet23nex20NexMatchMakingClient16CancelConnectingEv");
extern "C" uint32_t YellowAuto_003fd048(uint8_t* arg0) {
if (arg0[5] == 0) return 0;
if (*reinterpret_cast<uint32_t*>(arg0 + 0x28) == 0) return 0;
if (*reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 0x28) + 0x10) != 1) return 0;
return helper_0017c8a0(*reinterpret_cast<void**>(arg0 + 0x28), 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FCF1C
void* helper_003f7e88(uint32_t, uint32_t);
void helper_00236ed4(void*, void*);
uint32_t helper_001d0a98(uint32_t, void*, uint32_t, void*);
void helper_00236f84(void*);
void* helper_0017a570(uint32_t);
void helper_00583990(void*, void*, uint32_t, uint32_t, void*);
uint32_t helper_003ffbdc();
void helper_00240c5c(void*, void*);
extern "C" uint32_t YellowAuto_003fcf1c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7gflnet23nex20NexMatchMakingClient14LeaveCommunityEj");
extern "C" uint32_t YellowAuto_003fcf1c(uint8_t* arg0, uint32_t arg1) {
if (arg0[5] != 0) return 0;
if (*reinterpret_cast<uint32_t*>(arg0 + 0x2c) == 0) return 0;
arg0[5] = 1;
*reinterpret_cast<uint32_t*>(arg0 + 0x28) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x0c) = arg1;
void* ctx = helper_003f7e88(1, *reinterpret_cast<uint32_t*>(0x003FD03C));
uint8_t sbuf[8];
helper_00236ed4(sbuf, reinterpret_cast<void*>(0x003FD040));
uint32_t ok = helper_001d0a98(*reinterpret_cast<uint32_t*>(arg0 + 0x2c), ctx, arg1, sbuf);
helper_00236f84(sbuf);
if (ok != 0) {
*reinterpret_cast<void**>(arg0 + 0x28) = ctx;
void* obj = helper_0017a570(20);
if (obj != 0) helper_00583990(obj, arg0, *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(0x003FD044) + 0x58), *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(0x003FD044) + 0x5c), ctx);
return 1;
}
if (*reinterpret_cast<uint32_t*>(arg0 + 0x1c) != 0) {
uint32_t ec = helper_003ffbdc();
uint8_t qbuf[12];
uint8_t z = 0;
helper_00240c5c(qbuf, &z);
uint32_t cb = *reinterpret_cast<uint32_t*>(arg0 + 0x1c);
uint32_t vt = *reinterpret_cast<uint32_t*>(cb);
uint32_t fn = *reinterpret_cast<uint32_t*>(vt + 0x14);
reinterpret_cast<void(*)(uint32_t, void*, uint32_t)>(fn)(cb, qbuf, ec);
}
arg0[5] = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x28) = 0;
if (ctx != 0) {
uint32_t vt2 = *reinterpret_cast<uint32_t*>(ctx);
uint32_t fn2 = *reinterpret_cast<uint32_t*>(vt2 + 0x04);
reinterpret_cast<void(*)(void*)>(fn2)(ctx);
}
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FC578
extern "C" bool YellowAuto_003fc578(void* arg0, void* arg1) __asm__("_ZN7gflnet23nex20NexMatchMakingClient10InitializeEPN2nn3nex9NgsFacadeE");
extern "C" bool YellowAuto_003fc578(void* arg0, void* arg1) {
if (*(uint8_t*)((uint8_t*)arg0 + 0x04) != 0) return 1; if (arg1 == 0) return 0; if (*(uint32_t*)((uint8_t*)arg1 + 0x78) == 0) return 0; *(uint32_t*)((uint8_t*)arg0 + 0x20) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x24) = (uint32_t)arg1; *(uint32_t*)((uint8_t*)arg0 + 0x40) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x10) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x08) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x0C) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x28) = 0; *((uint8_t*)arg0 + 0x06) = 1; *((uint8_t*)arg0 + 0x04) = 1; *((uint8_t*)arg0 + 0x05) = 0; return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FF048
extern "C" void YellowAuto_003ff048(void* arg0) __asm__("_ZN7gflnet23nex20NexMatchMakingClient8FinalizeEv");
extern "C" void YellowAuto_003ff048(void* arg0) {
if (*(uint8_t*)((uint8_t*)arg0 + 0x04) == 0) return; *(uint32_t*)((uint8_t*)arg0 + 0x58) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x50) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x44) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x40) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x3C) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x38) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x48) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x30) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x34) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x2C) = 0; *(uint32_t*)((uint8_t*)arg0 + 0x14) = 0; *((uint8_t*)arg0 + 0x04) = 0; return;
}
#endif
