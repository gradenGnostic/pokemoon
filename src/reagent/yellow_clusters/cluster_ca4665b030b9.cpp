// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045DBD4
bool AppToolTrainerIconRendering_IsReady(uint8_t* arg0);
void AppToolTrainerIconRendering_SetIconObjectData(uint8_t* arg0, uint32_t arg1, const void* arg2, bool arg3);
extern "C" void YellowAuto_0045dbd4(uint8_t* arg0, uint32_t arg1, const void* arg2, bool arg3) __asm__("_ZN9NetAppLib4Util24NetAppTrainerIconUtility17SetIconObjectDataEjRKN3app4tool27AppToolTrainerIconRendering16ICON_OBJECT_DATAEb");
extern "C" void YellowAuto_0045dbd4(uint8_t* arg0, uint32_t arg1, const void* arg2, bool arg3) {
if ((*(uint8_t **)(arg0 + 8) != 0) && AppToolTrainerIconRendering_IsReady(*(uint8_t **)(arg0 + 8))) AppToolTrainerIconRendering_SetIconObjectData(*(uint8_t **)(arg0 + 8), arg1, arg2, arg3);
}
#endif
