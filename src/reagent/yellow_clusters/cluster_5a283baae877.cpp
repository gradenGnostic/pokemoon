// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004618B8
void* GetInstance();
void* GetHeapInternal(void*);
void* OperatorNew(uint32_t, void*);
void* CtorConfirm(void*);
uint32_t AddRequestSequenceInternal(void*, void*);
extern "C" uint32_t YellowAuto_004618b8(void* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib8GameSync21GameSyncRequestFacade27AddConfirmPlayStatusRequestEPNS0_41GameSyncConfirmPlayStatusResponseListenerEPNS0_19GETPLAYSTATUS_PARAME");
extern "C" uint32_t YellowAuto_004618b8(void* arg0, const uint8_t* arg1) {
void* _mgr = GetInstance(); if (!_mgr) return 0; void* _heap = GetHeapInternal(_mgr); if (!_heap) return 0; void* _raw = OperatorNew(48, _heap); uint8_t* _req = (uint8_t*)_raw; if (_raw) _req = (uint8_t*)CtorConfirm(_raw); *(uint32_t*)(_req + 32) = (uint32_t)arg0; *(uint32_t*)(_req + 28) = *(const uint32_t*)(arg1 + 0); *(uint32_t*)(_req + 40) = *(const uint32_t*)(arg1 + 4); *(_req + 44) = *(arg1 + 8); return AddRequestSequenceInternal(_mgr, (void*)_req);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00461830
void* GetInstance();
void* GetHeapInternal(void*);
void* OperatorNew(uint32_t, void*);
void* CtorCreate(void*);
uint32_t AddRequestSequenceInternal(void*, void*);
extern "C" uint32_t YellowAuto_00461830(void* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib8GameSync21GameSyncRequestFacade24AddCreateSaveDataRequestEPNS0_38GameSyncCreateSaveDataResponseListenerEPNS0_14GAMESYNC_PARAME");
extern "C" uint32_t YellowAuto_00461830(void* arg0, const uint8_t* arg1) {
void* _mgr = GetInstance(); if (!_mgr) return 0; void* _heap = GetHeapInternal(_mgr); if (!_heap) return 0; void* _raw = OperatorNew(72, _heap); uint8_t* _req = (uint8_t*)_raw; if (_raw) _req = (uint8_t*)CtorCreate(_raw); *(uint32_t*)(_req + 32) = (uint32_t)arg0; *(uint32_t*)(_req + 28) = *(const uint32_t*)(arg1 + 0); *(uint32_t*)(_req + 56) = *(const uint32_t*)(arg1 + 4); *(uint32_t*)(_req + 52) = *(const uint32_t*)(arg1 + 8); *(_req + 60) = *(arg1 + 12); return AddRequestSequenceInternal(_mgr, (void*)_req);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004617A4
void* GetInstance();
void* GetHeapInternal(void*);
void* NewRequest(void*);
void* InitRequest(void*);
uint32_t AddRequestSequenceInternal(void*, void*);
extern "C" uint32_t YellowAuto_004617a4(void* arg0, const void* arg1) __asm__("_ZN9NetAppLib8GameSync21GameSyncRequestFacade22AddSaveDataSyncRequestEPNS0_36GameSyncSaveDataSyncResponseListenerEPNS0_14GAMESYNC_PARAME");
extern "C" uint32_t YellowAuto_004617a4(void* arg0, const void* arg1) {
void* v0 = GetInstance();
if (!v0) return 0;
void* v1 = GetHeapInternal(v0);
if (!v1) return 0;
void* v2 = NewRequest(v1);
if (v2) v2 = InitRequest(v2);
*(void**)((uint8_t*)v2 + 32) = arg0;
*(uint32_t*)((uint8_t*)v2 + 28) = *(const uint32_t*)((const uint8_t*)arg1 + 0);
*(uint32_t*)((uint8_t*)v2 + 56) = *(const uint32_t*)((const uint8_t*)arg1 + 4);
*(uint32_t*)((uint8_t*)v2 + 52) = *(const uint32_t*)((const uint8_t*)arg1 + 8);
*((uint8_t*)v2 + 60) = *((const uint8_t*)arg1 + 12);
return AddRequestSequenceInternal(v0, v2);
}
#endif
