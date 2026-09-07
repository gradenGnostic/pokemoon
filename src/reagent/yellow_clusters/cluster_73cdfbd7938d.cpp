// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00460F50
void* GetResourceBuffer(void*, int32_t);
void CreateGraphicsSystem(uint8_t*, void*, uint32_t);
void* GetData(uint8_t*, uint32_t);
void Create2D(uint8_t*, void*, uint32_t, uint32_t, void*, uint32_t, void*, uint32_t, void*, void*, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00460f50(uint8_t* arg0, uint8_t* arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint8_t* arg6, uint32_t arg7) __asm__("_ZN9NetAppLib6System22NetApplicationViewBase17Create2DOneLayoutEPNS0_19ApplicationWorkBaseEijjN3app4util7G2DUtil18SETUP_DISPLAY_TYPEEPNS_7Message14MessageUtilityEj");
extern "C" void YellowAuto_00460f50(uint8_t* arg0, uint8_t* arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint8_t* arg6, uint32_t arg7) {
void* _buf = GetResourceBuffer((void*)(*(uint32_t*)(arg1 + 0x28)), arg2);
void* _heap = (void*)(*(uint32_t*)(arg1 + 0x8));
*(uint32_t*)(arg0 + 0x74) = 0x10000;
CreateGraphicsSystem(arg0, _heap, 0);
*(uint32_t*)(arg0 + 0x80) = (uint32_t)_buf;
*(uint32_t*)(arg0 + 0x84) = 0;
*(uint32_t*)(arg0 + 0x88) = 0;
*(uint32_t*)(arg0 + 0x8c) = 0;
*(uint32_t*)(arg0 + 0x90) = arg3;
*(uint32_t*)(arg0 + 0x94) = arg4;
*(uint32_t*)(arg0 + 0x98) = (uint32_t)_buf;
*(uint8_t*)(arg0 + 0x9c) = 1;
*(uint8_t*)(arg0 + 0x9d) = (uint8_t)arg5;
*(uint8_t*)(arg0 + 0x9e) = 1;
void* _msg = GetData(arg6, arg7);
void* _word = (void*)(arg6 + 0x34);
Create2D(arg0, _heap, 0, 1, (void*)(arg0 + 0x80), 1, (void*)(arg0 + 0x8c), 1, _msg, _word, 0, 0, 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00461074
void base_init(uint8_t*, void*, void*, void*);
void* GetResourceBuffer(void*, int32_t);
void CreateGraphicsSystem(uint8_t*, void*, uint32_t);
void* GetData(uint8_t*, uint32_t);
void Create2D(uint8_t*, void*, uint32_t, uint32_t, void*, uint32_t, void*, uint32_t, void*, void*, uint32_t, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_00461074(uint8_t* arg0, uint8_t* arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint8_t* arg6, uint32_t arg7) __asm__("_ZN9NetAppLib6System22NetApplicationViewBaseC2EPNS0_19ApplicationWorkBaseEijjN3app4util7G2DUtil18SETUP_DISPLAY_TYPEEPNS_7Message14MessageUtilityEj");
extern "C" uint8_t* YellowAuto_00461074(uint8_t* arg0, uint8_t* arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint8_t* arg6, uint32_t arg7) {
void* _heap = (void*)(*(uint32_t*)(arg1 + 0x8));
void* _alloc = (void*)(*(uint32_t*)((uint8_t*)_heap + 0x14));
base_init(arg0, _heap, _alloc, _alloc);
*(uint32_t*)(arg0 + 0x80) = 0;
*(uint32_t*)(arg0 + 0x84) = 0;
*(uint32_t*)(arg0 + 0x88) = 0;
*(uint32_t*)(arg0 + 0x8c) = 0;
*(uint32_t*)(arg0 + 0x90) = 0;
*(uint32_t*)(arg0 + 0x94) = 0;
*(uint32_t*)(arg0 + 0x98) = 0;
*(uint32_t*)(arg0 + 0x9c) = 0;
void* _buf = GetResourceBuffer((void*)(*(uint32_t*)(arg1 + 0x28)), arg2);
*(uint32_t*)(arg0 + 0x74) = 0x10000;
CreateGraphicsSystem(arg0, _heap, 0);
*(uint32_t*)(arg0 + 0x80) = (uint32_t)_buf;
*(uint32_t*)(arg0 + 0x84) = 0;
*(uint32_t*)(arg0 + 0x88) = 0;
*(uint32_t*)(arg0 + 0x8c) = 0;
*(uint32_t*)(arg0 + 0x90) = arg3;
*(uint32_t*)(arg0 + 0x94) = arg4;
*(uint32_t*)(arg0 + 0x98) = (uint32_t)_buf;
*(uint8_t*)(arg0 + 0x9c) = 1;
*(uint8_t*)(arg0 + 0x9d) = (uint8_t)arg5;
*(uint8_t*)(arg0 + 0x9e) = 1;
void* _msg = GetData(arg6, arg7);
void* _word = (void*)(arg6 + 0x34);
Create2D(arg0, _heap, 0, 1, (void*)(arg0 + 0x80), 1, (void*)(arg0 + 0x8c), 1, _msg, _word, 0, 0, 8);
return arg0;
}
#endif
