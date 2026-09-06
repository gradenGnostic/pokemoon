// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00451CA8
uint32_t JoinFestaAttractionData_GetAttractionID(void*);
void* GameManager_GetInstance(void);
extern "C" void YellowAuto_00451ca8(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI32JoinFestaAttractionInfoUpperView26SetJoinFestaAttractionDataEPNS0_23JoinFestaAttractionDataE");
extern "C" void YellowAuto_00451ca8(uint8_t* arg0, void* arg1) {
if ((arg1 == (void*)0) || (JoinFestaAttractionData_GetAttractionID(arg1) == 0x54))
  *(uint8_t*)(arg0 + 0xa8) = 0;
else
  *(uint8_t*)(arg0 + 0xa8) = 1;
*(void**)(arg0 + 0xa4) = arg1;
if ((arg1 != (void*)0) && (JoinFestaAttractionData_GetAttractionID(arg1) != 0x54))
  GameManager_GetInstance();
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004521A4
uint8_t* NetApplicationViewBase_ctor(uint8_t*, void*, int32_t, int32_t, int32_t, int32_t, void*, int32_t);
void NetApplicationViewBase_setupLayout(uint8_t*, int32_t, int32_t);
void* G2DUtil_GetLayoutWork(void*, int32_t);
void* LytWk_GetTextBoxPane(void*, const void*);
extern "C" uint8_t* YellowAuto_004521a4(uint8_t* arg0, void* arg1, int32_t arg2) __asm__("_ZN9NetAppLib11JoinFestaUI32JoinFestaAttractionInfoUpperViewC1EPNS_6System19ApplicationWorkBaseEi");
extern "C" uint8_t* YellowAuto_004521a4(uint8_t* arg0, void* arg1, int32_t arg2) {
arg0 = NetApplicationViewBase_ctor(arg0, arg1, arg2, 0x73, 0x0c, 0, *(void**)((uint8_t*)arg1 + 0x30), 0x2b);
*(void**)(arg0 + 0x0) = (void*)0x0045225c;
*(void**)(arg0 + 0xa0) = arg1;
*(void**)(arg0 + 0xa4) = (void*)0;
*(uint8_t*)(arg0 + 0xa8) = 0;
NetApplicationViewBase_setupLayout(arg0, 0, 10);
NetApplicationViewBase_setupLayout(arg0, 0, 11);
*(uint8_t*)((uint8_t*)LytWk_GetTextBoxPane(G2DUtil_GetLayoutWork(*(void**)(arg0 + 0x60), 0), (const void*)0x00452260) + 0x44) &= 0xfe;
*(uint8_t*)((uint8_t*)LytWk_GetTextBoxPane(G2DUtil_GetLayoutWork(*(void**)(arg0 + 0x60), 0), (const void*)0x00452264) + 0x44) &= 0xfe;
return arg0;
}
#endif
