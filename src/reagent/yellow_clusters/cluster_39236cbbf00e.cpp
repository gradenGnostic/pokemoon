// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E0594
extern "C" void YellowAuto_003e0594(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib8Delivery15DeliveryManager14ClearAttributeEi");
extern "C" void YellowAuto_003e0594(uint8_t* arg0, uint32_t arg1) {
if (*(uint8_t*)(arg0 + 0x4) != 0 && *(uint8_t*)(arg0 + 0x10) == 1 && arg1 < 3) if (arg1 == 0) *(uint32_t*)(arg0 + 0x78) = 0; else if (arg1 == 1) *(uint32_t*)(arg0 + 0x7c) = 0; else if (arg1 == 2) *(uint32_t*)(arg0 + 0x80) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E050C
void FUN_0040c954(void*, const uint32_t*, const uint32_t*);
extern "C" uint32_t YellowAuto_003e050c(uint8_t* arg0, const uint32_t* arg1, const uint32_t* arg2, uint8_t arg3) __asm__("_ZN6NetLib8Delivery15DeliveryManager10InitializeEPKN7gflnet213InitParameterEPKNS2_18InitParameterFixedENS1_13DELIVERY_TYPEE");
extern "C" uint32_t YellowAuto_003e050c(uint8_t* arg0, const uint32_t* arg1, const uint32_t* arg2, uint8_t arg3) {
if (*(uint8_t*)(arg0 + 0x4) == 0) *(uint8_t*)(arg0 + 0x4) = 1, *(uint8_t*)(arg0 + 0x10) = arg3, *(uint32_t*)(arg0 + 0x14) = arg1[2], *(uint32_t*)(arg0 + 0x58) = arg1[0], *(uint32_t*)(arg0 + 0x5c) = arg1[1], *(uint32_t*)(arg0 + 0x60) = arg1[2], *(uint32_t*)(arg0 + 0x64) = arg1[3], *(uint32_t*)(arg0 + 0x68) = arg1[4], *(uint32_t*)(arg0 + 0x6c) = arg1[5], *(uint32_t*)(arg0 + 0x70) = arg2[0], *(uint32_t*)(arg0 + 0x74) = arg2[1], FUN_0040c954(arg0 + 0x28, arg1, arg2), *(uint32_t*)(arg0 + 0x78) = 0, *(uint32_t*)(arg0 + 0x7c) = 0, *(uint32_t*)(arg0 + 0x80) = 0; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E05DC
uint32_t FUN_004a2da8(int32_t);
void Kill(void*);
extern "C" void YellowAuto_003e05dc(uint8_t* arg0) __asm__("_ZN6NetLib8Delivery15DeliveryManager15PrepareFinalizeEv");
extern "C" void YellowAuto_003e05dc(uint8_t* arg0) {
if (FUN_004a2da8((int32_t)arg0) != 0 && *(uint8_t*)(arg0 + 0x10) == 0 && *(uint32_t*)(arg0 + 0xc) != 0) Kill(*(void**)(*(uint32_t*)(arg0 + 0xc) + 0xe0)); if (FUN_004a2da8((int32_t)arg0) != 0 && *(uint8_t*)(arg0 + 0x10) == 0 && *(uint32_t*)(arg0 + 0x8) != 0) Kill(*(void**)(*(uint32_t*)(arg0 + 0x8) + 0xc8)); if (FUN_004a2da8((int32_t)arg0) != 0 && (*(uint8_t*)(arg0 + 0x10) == 1 || *(uint8_t*)(arg0 + 0x10) == 2) && *(uint32_t*)(arg0 + 0x20) != 0) (*(void (**)(void*))(*(uint32_t*)(*(uint32_t*)(arg0 + 0x20)) + 0x10))(*(void**)(arg0 + 0x20));
}
#endif
