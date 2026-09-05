// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039FB24
extern const int32_t* DAT_0039fb38;
extern "C" int32_t YellowAuto_0039fb24(int32_t arg0) __asm__("_ZN5Field9MoveModel20FieldMoveCodeManager11GetMoveCodeENS0_18FIELD_MOVE_CODE_IDE");
extern "C" int32_t YellowAuto_0039fb24(int32_t arg0) {
int32_t value = DAT_0039fb38[arg0];
if (value == 0)
  value = DAT_0039fb38[0];
return value;
}
#endif
