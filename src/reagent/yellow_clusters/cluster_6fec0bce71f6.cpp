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
