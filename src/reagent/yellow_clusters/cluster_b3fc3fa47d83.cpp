// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043CF9C
uint16_t FUN_00277be0(const uint8_t*, uint32_t, uint32_t);
extern uint32_t DAT_0043cfdc;
extern "C" bool YellowAuto_0043cf9c(uint8_t* arg0, uint16_t* arg1) __asm__("_ZN8Savedata15MysteryGiftSave22MYSTERY_GIFT_RECV_DATA8CRCCheckEPt");
extern "C" bool YellowAuto_0043cf9c(uint8_t* arg0, uint16_t* arg1) {
uint16_t v0 = *(uint16_t*)(arg0 + 0x202); *(uint16_t*)(arg0 + 0x202) = 0; uint16_t v1 = FUN_00277be0(arg0, 0x310, DAT_0043cfdc); *(uint16_t*)(arg0 + 0x202) = v0; if (arg1) *arg1 = v1; return v0 == v1;
}
#endif
