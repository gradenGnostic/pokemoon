// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003967F4
void AlolaTime(uint8_t*);
void FUN_003965f4(const void*, uint8_t*);
uint32_t GetHour(uint8_t*);
uint32_t ConvertHourToTimeZone(uint32_t);
void AlolaTime_Dtor(uint8_t*);
extern "C" uint32_t YellowAuto_003967f4(const void* arg0) __asm__("_ZN5Field6EvTime16GetAlolaTimeZoneEPKN7GameSys8GameDataE");
extern "C" uint32_t YellowAuto_003967f4(const void* arg0) {
uint8_t temp[24];
AlolaTime(temp);
FUN_003965f4(arg0, temp);
uint32_t hour = GetHour(temp);
uint32_t result = ConvertHourToTimeZone(hour);
AlolaTime_Dtor(temp);
return result;
}
#endif
