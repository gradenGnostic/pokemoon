// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00313CDC
void FUN_00313d7c(const void* arg0, uint16_t* arg1, uint32_t arg2, uint32_t arg3);
extern "C" uint16_t YellowAuto_00313cdc(const void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3pml4waza18ZenryokuWazaSystem17GetZenryokuWazaNoERKNS1_18ZenryokuWazaSourceE");
extern "C" uint16_t YellowAuto_00313cdc(const void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
uint32_t local_8 = arg3; FUN_00313d7c(arg0, (uint16_t*)&local_8, arg2, arg3); return (uint16_t)local_8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00313CF0
void FUN_00313d7c(const void* arg0, uint16_t* arg1, uint32_t arg2, uint32_t arg3);
extern "C" uint8_t YellowAuto_00313cf0(const void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3pml4waza18ZenryokuWazaSystem19GetZenryokuWazaKindERKNS1_18ZenryokuWazaSourceE");
extern "C" uint8_t YellowAuto_00313cf0(const void* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
uint32_t local_8 = arg3; FUN_00313d7c(arg0, (uint16_t*)&local_8, arg2, arg3); return (uint8_t)(local_8 >> 16);
}
#endif
