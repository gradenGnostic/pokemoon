// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C9040
void* GetInstance();
void Initialize(void*, void*);
void* GetHeapInternal(void*);
void* OperatorNew(uint32_t, void*);
void* UploadSequenceCtor(void*);
void UploadSequenceInit(void*, void*);
unsigned long long AddRequestSequenceInternal(void*, void*);
extern "C" void YellowAuto_003c9040(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN6NetApp11BattleVideo24BattleVideoRequestClient37UploadBattleVideoRequestForBattleSpotERNS1_27UPLOAD_REQUEST_PARAM_FOR_BSE");
extern "C" void YellowAuto_003c9040(uint8_t* arg0, uint8_t* arg1) {
void* _c1 = GetInstance();
if (_c1 != (void*)0)
Initialize(GetInstance(), reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x18)));
uint32_t _up0 = *reinterpret_cast<uint32_t*>(arg1 + 0x0);
uint32_t _bs = *reinterpret_cast<uint32_t*>(arg1 + 0x08);
uint32_t _br = *reinterpret_cast<uint32_t*>(arg1 + 0x0C);
*reinterpret_cast<uint32_t*>(arg0 + 0x7C) = _bs;
uint32_t _lis = *reinterpret_cast<uint32_t*>(arg0 + 0x10);
uint32_t _up[4];
_up[0] = _br;
_up[1] = 0;
_up[2] = _up0;
_up[3] = reinterpret_cast<uint32_t>(arg0);
void* _m1 = GetInstance();
void* _heap = (void*)0;
if (_m1 != (void*)0)
_heap = GetHeapInternal(_m1);
void* _mem = (void*)0;
if (_heap != (void*)0)
_mem = OperatorNew(64, _heap);
void* _seq = (void*)0;
if (_mem != (void*)0)
_seq = UploadSequenceCtor(_mem);
if (_heap != (void*)0)
*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(_seq) + 0x20) = _lis;
if (_heap != (void*)0)
UploadSequenceInit(_seq, reinterpret_cast<void*>(&_up[0]));
unsigned long long _h = 0;
if (_heap != (void*)0)
_h = AddRequestSequenceInternal(_m1, _seq);
*reinterpret_cast<uint32_t*>(arg0 + 0x08) = (uint32_t)_h;
*reinterpret_cast<uint32_t*>(arg0 + 0x0C) = (uint32_t)(_h >> 32);
return;
}
#endif
