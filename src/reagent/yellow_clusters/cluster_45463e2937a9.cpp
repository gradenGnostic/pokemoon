// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049396C
void Regulation_Serialize(const uint8_t*, uint8_t*);
uint32_t PokeParty_Serialize(const uint8_t*, uint8_t*);
extern "C" uint32_t YellowAuto_0049396c(uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2) __asm__("_ZN6NetApp4Live7LiveNet17SetupMyBattleInfoERK10RegulationRKN3pml9PokePartyE");
extern "C" uint32_t YellowAuto_0049396c(uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2) {
Regulation_Serialize(arg1, arg0 + 0x6C54); return PokeParty_Serialize(arg2, arg0 + 0x8C54);
}
#endif
