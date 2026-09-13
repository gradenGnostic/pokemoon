// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA7D4
void SetVisible(uint8_t *arg0, bool arg1, uint32_t arg2);
extern "C" void YellowAuto_002ea7d4(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool10MenuWindow7EndMenuEb");
extern "C" void YellowAuto_002ea7d4(uint8_t* arg0, bool arg1) {
if (*(uint8_t *)(arg0 + 0xc2u) != 0u) SetVisible(*(uint8_t **)(arg0 + 0xccu), false, 3u); *(uint32_t *)(arg0 + 0x14u) = 0u; *(uint8_t *)(arg0 + 0xc2u) = 0u; uint32_t i = 0; while (i < *(uint8_t *)(arg0 + 0x158u)) *(uint8_t *)(*(uint8_t **)(arg0 + 0xd4u + i * 0x10u) + 0x44u) &= 0xfeu, ++i; if (arg1 != 0) *(uint8_t *)(arg0 + 0x158u) = 0u;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA2E0
void StartMenu(float, float, uint8_t *, uint32_t, int32_t);
extern "C" void YellowAuto_002ea2e0(uint8_t* arg0, uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __asm__("_ZN3app4tool10MenuWindow16StartMenuDisplayEjNS1_7PutTypeEii");
extern "C" void YellowAuto_002ea2e0(uint8_t* arg0, uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
if (*(arg0 + 0x84) == 0)
StartMenu((float)(arg3 - 0xC8), (float)(0x78 - arg4), arg0, arg1, arg2);
else
StartMenu((float)(arg3 - 0xA0), (float)(0x78 - arg4), arg0, arg1, arg2);
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA750
void SetStr(void*, const void*);
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002ea750(uint8_t* arg0, const void* arg1, bool arg2, bool arg3, uint32_t arg4) __asm__("_ZN3app4tool10MenuWindow7AddItemERKN4gfl23str6StrBufEbbj");
extern "C" void YellowAuto_002ea750(uint8_t* arg0, const void* arg1, bool arg2, bool arg3, uint32_t arg4) {
if (*(arg0 + 0x158) != 8) { SetStr(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + *(arg0 + 0x158) * 0x10 + 0xD8)), arg1); *(arg0 + *(arg0 + 0x158) * 0x10 + 0xDD) = arg2; *(arg0 + *(arg0 + 0x158) * 0x10 + 0xDC) = arg3; *reinterpret_cast<uint32_t*>(arg0 + *(arg0 + 0x158) * 0x10 + 0xE0) = arg4; *(arg0 + 0x158) = static_cast<uint8_t>(*(arg0 + 0x158) + 1); return; } GFLassert(0, 0, 0, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA6C0
void GetString(void*, uint32_t, void*);
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002ea6c0(uint8_t* arg0, void* arg1, uint32_t arg2, bool arg3, bool arg4, uint32_t arg5) __asm__("_ZN3app4tool10MenuWindow7AddItemEPN4gfl23str7MsgDataEjbbj");
extern "C" void YellowAuto_002ea6c0(uint8_t* arg0, void* arg1, uint32_t arg2, bool arg3, bool arg4, uint32_t arg5) {
if (*(arg0 + 0x158) != 8) { GetString(arg1, arg2, reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + *(arg0 + 0x158) * 0x10 + 0xD8))); *(arg0 + *(arg0 + 0x158) * 0x10 + 0xDD) = arg3; *(arg0 + *(arg0 + 0x158) * 0x10 + 0xDC) = arg4; *reinterpret_cast<uint32_t*>(arg0 + *(arg0 + 0x158) * 0x10 + 0xE0) = arg5; *(arg0 + 0x158) = static_cast<uint8_t>(*(arg0 + 0x158) + 1); return; } GFLassert(0, 0, 0, 0); return;
}
#endif
