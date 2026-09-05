// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043008C
void ITEM_DATA__ITEM_DATA(void* arg0, int32_t arg1);
void ITEM_MANAGER__GetData(void* arg0, uint16_t arg1, void* arg2);
uint32_t FUN_00431810(void* arg0, void* arg1, uint16_t arg2, uint16_t arg3);
extern "C" uint32_t YellowAuto_0043008c(void* arg0, uint16_t arg1, uint16_t arg2, uint16_t arg3, void* arg4) __asm__("_ZN8PokeTool16ITEM_RCV_RecoverEPN3pml8pokepara12PokemonParamEtttPN7itemman12ITEM_MANAGERE");
extern "C" uint32_t YellowAuto_0043008c(void* arg0, uint16_t arg1, uint16_t arg2, uint16_t arg3, void* arg4) {
uint8_t temp[40];
ITEM_DATA__ITEM_DATA(temp, 0);
ITEM_MANAGER__GetData(arg4, arg1, temp);
return FUN_00431810(arg0, temp, arg2, arg3);
}
#endif
