// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FBDCC
extern "C" void YellowAuto_003fbdcc(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet23nex18NexDataStoreClient31UnregistDataStoreClientListenerEPNS0_26NexDataStoreClientListenerE");
extern "C" void YellowAuto_003fbdcc(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)(arg0 + 0x14) == (uint32_t)arg1) *(uint32_t*)(arg0 + 0x14) = 0; else if (*(uint32_t*)(arg0 + 0x18) == (uint32_t)arg1) *(uint32_t*)(arg0 + 0x18) = 0; else if (*(uint32_t*)(arg0 + 0x1c) == (uint32_t)arg1) *(uint32_t*)(arg0 + 0x1c) = 0; else if (*(uint32_t*)(arg0 + 0x20) == (uint32_t)arg1) *(uint32_t*)(arg0 + 0x20) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FBD58
extern "C" bool YellowAuto_003fbd58(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet23nex18NexDataStoreClient29RegistDataStoreClientListenerEPNS0_26NexDataStoreClientListenerE");
extern "C" bool YellowAuto_003fbd58(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)(arg0 + 0x14) == (uint32_t)arg1) return false; if (*(uint32_t*)(arg0 + 0x18) == (uint32_t)arg1) return false; if (*(uint32_t*)(arg0 + 0x1c) == (uint32_t)arg1) return false; if (*(uint32_t*)(arg0 + 0x20) == (uint32_t)arg1) return false; if (*(uint32_t*)(arg0 + 0x14) == 0) { *(uint32_t*)(arg0 + 0x14) = (uint32_t)arg1; return true; } if (*(uint32_t*)(arg0 + 0x18) == 0) { *(uint32_t*)(arg0 + 0x18) = (uint32_t)arg1; return true; } if (*(uint32_t*)(arg0 + 0x1c) == 0) { *(uint32_t*)(arg0 + 0x1c) = (uint32_t)arg1; return true; } if (*(uint32_t*)(arg0 + 0x20) == 0) { *(uint32_t*)(arg0 + 0x20) = (uint32_t)arg1; return true; } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FB054
bool Cancel(void*, uint32_t);
extern "C" bool YellowAuto_003fb054(uint8_t* arg0) __asm__("_ZN7gflnet23nex18NexDataStoreClient16CancelConnectingEv");
extern "C" bool YellowAuto_003fb054(uint8_t* arg0) {
if (arg0[5] == 0) return false; uint32_t c = *(uint32_t*)(arg0 + 0x10); if (c == 0) return false; if (*(uint8_t*)(c + 0x10) != 1) return false; return Cancel((void*)c, 4);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FB084
void InvokeDownload(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2);
extern "C" void YellowAuto_003fb084(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN7gflnet23nex18NexDataStoreClient16DownloadMetaDataERKN2nn3nex7qVectorIyEEj");
extern "C" void YellowAuto_003fb084(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
InvokeDownload(arg0, arg1, arg2);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FAF84
void* CreateProtocolCallContext(uint32_t arg0, uint32_t arg1);
void* OperatorNew(uint32_t arg0);
void InstallCallback(void* arg0, uint8_t* arg1, uint32_t arg2, uint32_t arg3, void* arg4);
void Cleanup(uint8_t* arg0);
extern "C" uint32_t YellowAuto_003faf84(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN7gflnet23nex18NexDataStoreClient14UploadMetaDataERKN2nn3nex25DataStorePreparePostParamE");
extern "C" uint32_t YellowAuto_003faf84(uint8_t* arg0, const uint8_t* arg1) {
if (arg0[5] != 0) return 0;
if (arg0[4] == 0) return 0;
arg0[5] = 1;
*(uint32_t*)(arg0 + 0x10) = 0;
void* _ctx = CreateProtocolCallContext(1, 0);
uint32_t _proto = *(uint32_t*)(arg0 + 0x0C);
uint32_t _vt = *(uint32_t*)_proto;
uint32_t _fn = *(uint32_t*)(_vt + 0x148);
uint32_t _ok = ((uint32_t(*)(uint32_t, void*, const uint8_t*, uint8_t*))_fn)(_proto, _ctx, arg1, arg0 + 0x28);
if (_ok == 0) Cleanup(arg0);
if (_ok == 0) arg0[5] = 0;
if (_ok == 0) *(uint32_t*)(arg0 + 0x10) = 0;
if (_ok == 0) if (_ctx != 0) ((void(*)(void*))*(uint32_t*)(*(uint32_t*)_ctx + 4))(_ctx);
if (_ok == 0) return 0;
*(void**)(arg0 + 0x10) = _ctx;
void* _n = OperatorNew(20);
if (_n != 0) InstallCallback(_n, arg0, 0, 0, _ctx);
return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FAEA4
void PreCall(void* arg0);
void* CreateProtocolCallContext(uint32_t arg0, uint32_t arg1);
void* OperatorNew(uint32_t arg0);
void InstallCallback(void* arg0, uint8_t* arg1, uint32_t arg2, uint32_t arg3, void* arg4);
void Cleanup(uint8_t* arg0);
extern "C" uint32_t YellowAuto_003faea4(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN7gflnet23nex18NexDataStoreClient14CheageMetaDataERKN2nn3nex7qVectorINS3_24DataStoreChangeMetaParamEEE");
extern "C" uint32_t YellowAuto_003faea4(uint8_t* arg0, const uint8_t* arg1) {
if (arg0[5] != 0) return 0;
if (arg0[4] == 0) return 0;
arg0[5] = 1;
*(uint32_t*)(arg0 + 0x10) = 0;
PreCall(*(void**)(arg0 + 0x30));
void* _ctx = CreateProtocolCallContext(1, 0);
uint32_t _proto = *(uint32_t*)(arg0 + 0x0C);
uint32_t _vt = *(uint32_t*)_proto;
uint32_t _fn = *(uint32_t*)(_vt + 0x84);
uint32_t _extra = *(uint32_t*)(arg0 + 0x30);
uint32_t _ok = ((uint32_t(*)(uint32_t, void*, const uint8_t*, uint32_t, uint32_t))_fn)(_proto, _ctx, arg1, 0, _extra);
if (_ok == 0) Cleanup(arg0);
if (_ok == 0) arg0[5] = 0;
if (_ok == 0) *(uint32_t*)(arg0 + 0x10) = 0;
if (_ok == 0) if (_ctx != 0) ((void(*)(void*))*(uint32_t*)(*(uint32_t*)_ctx + 4))(_ctx);
if (_ok == 0) return 0;
*(void**)(arg0 + 0x10) = _ctx;
void* _n = OperatorNew(20);
if (_n != 0) InstallCallback(_n, arg0, 0, 0, _ctx);
return 1;
}
#endif
