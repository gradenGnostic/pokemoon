// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00443890
int32_t GetYear(const uint8_t *);
int32_t GetMonth(const uint8_t *);
int32_t GetDay(const uint8_t *);
int32_t GetHour(const uint8_t *);
int32_t GetMinute(const uint8_t *);
int32_t GetSecond(const uint8_t *);
int32_t GetMilliSecond(const uint8_t *);
extern "C" void YellowAuto_00443890(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8Savedata8GameTime7SetDateEPKN4gfl26system4DateE");
extern "C" void YellowAuto_00443890(uint8_t* arg0, const uint8_t* arg1) {
*(int32_t *)(arg0 + 12) = GetYear(arg1);
*(int32_t *)(arg0 + 16) = GetMonth(arg1);
*(int32_t *)(arg0 + 20) = GetDay(arg1);
*(int32_t *)(arg0 + 28) = GetHour(arg1);
*(int32_t *)(arg0 + 32) = GetMinute(arg1);
*(int32_t *)(arg0 + 36) = GetSecond(arg1);
*(int32_t *)(arg0 + 40) = GetMilliSecond(arg1);
}
#endif
