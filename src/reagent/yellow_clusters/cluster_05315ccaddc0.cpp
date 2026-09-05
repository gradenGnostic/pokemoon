// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004531F8
void* GetLayoutWork(void*, int32_t);
void* GetPartsPane(void*, int32_t);
extern "C" void YellowAuto_004531f8(uint8_t* arg0, uint8_t arg1) __asm__("_ZN9NetAppLib11JoinFestaUI34JoinFestaAttractionSelectLowerView19SetVisibleArrowIconEb");
extern "C" void YellowAuto_004531f8(uint8_t* arg0, uint8_t arg1) {
void* v0 = GetLayoutWork(*(void**)(arg0 + 0x60), 0);
void* v1 = GetPartsPane(v0, 0xcd);
void* v2 = GetPartsPane(v0, 0xce);
*(uint8_t *)((uint8_t *)v1 + 0x44) = (uint8_t)((*(uint8_t *)((uint8_t *)v1 + 0x44) & 0xfe) | (uint8_t)arg1);
*(uint8_t *)((uint8_t *)v2 + 0x44) = (uint8_t)((*(uint8_t *)((uint8_t *)v2 + 0x44) & 0xfe) | (uint8_t)arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00453250
extern "C" void YellowAuto_00453250(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI34JoinFestaAttractionSelectLowerView23ResetPaneListCursorInfoEv");
extern "C" void YellowAuto_00453250(uint8_t* arg0) {
*(uint32_t *)(arg0 + 0xd0) = 0;
*(uint32_t *)(arg0 + 0xd4) = 0;
*(uint32_t *)(arg0 + 0xd8) = 0;
*(uint32_t *)(arg0 + 0xdc) = 0;
*(uint32_t *)(arg0 + 0xe0) = 0;
*(uint32_t *)(arg0 + 0xe4) = 0;
*(uint8_t *)(arg0 + 0xfd) = 1;
}
#endif
