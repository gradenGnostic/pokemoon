// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382FE0
bool IsModelLoaded(void*, int32_t);
extern "C" bool YellowAuto_00382fe0(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field11FieldScript22ScriptMoveModelManager16ResourceIsLoadedEi");
extern "C" bool YellowAuto_00382fe0(uint8_t* arg0, int32_t arg1) {
if (arg1 != -1 && *(uint32_t*)arg0 != (uint32_t)arg1) return true;
return IsModelLoaded((void*)(*(uint32_t*)(arg0 + 4) + 0x1a8), arg1);
}
#endif
