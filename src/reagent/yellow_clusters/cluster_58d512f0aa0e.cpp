// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D8A48
extern uint32_t DAT_002d8a7c;
extern const void *DAT_002d8a80;
void Destroy(uint8_t *, int32_t);
void __aeabi_vec_dtor(uint8_t *, const void *, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_002d8a48(uint8_t* arg0, int32_t arg1) __asm__("_ZN3App6Resort17ResortDataManagerD1Ev");
extern "C" uint8_t* YellowAuto_002d8a48(uint8_t* arg0, int32_t arg1) {
*(uint32_t *)arg0 = DAT_002d8a7c;
Destroy(arg0, arg1);
__aeabi_vec_dtor(arg0 + 0x28, DAT_002d8a80, 4u, 4u);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D82FC
extern uint32_t *DAT_002d834c;
extern "C" uint32_t YellowAuto_002d82fc(uint8_t* arg0) __asm__("_ZN3App6Resort17ResortDataManager17SetStaticInstanceEPS1_");
extern "C" uint32_t YellowAuto_002d82fc(uint8_t* arg0) {
*DAT_002d834c = (uint32_t)arg0;
return 0;
}
#endif
