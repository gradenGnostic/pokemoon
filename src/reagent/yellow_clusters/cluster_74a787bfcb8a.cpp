// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035B71C
void FUN_0035b2d4(uint8_t*);
extern "C" uint8_t* YellowAuto_0035b71c(uint8_t* arg0) __asm__("_ZN4gfl24util18UtilTextRenderPathD1Ev");
extern "C" uint8_t* YellowAuto_0035b71c(uint8_t* arg0) {
FUN_0035b2d4(arg0);
uint8_t* tmp = reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 0x794));
if (tmp != 0) {
uint32_t vtbl = *reinterpret_cast<uint32_t*>(tmp);
uint32_t fn = *reinterpret_cast<uint32_t*>(vtbl + 4);
reinterpret_cast<void (*)(uint8_t*)>(fn)(tmp);
*reinterpret_cast<uint32_t*>(arg0 + 0x794) = 0;
}
return arg0;
}
#endif
