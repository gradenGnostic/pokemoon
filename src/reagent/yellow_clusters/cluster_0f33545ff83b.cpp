// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039FB3C
extern "C" bool YellowAuto_0039fb3c(int32_t arg0) __asm__("_ZN5Field9MoveModel20FieldMoveCodeManager13IsNpcMoveCodeENS0_18FIELD_MOVE_CODE_IDE");
extern "C" bool YellowAuto_0039fb3c(int32_t arg0) {
return arg0 == 0x2 || (arg0 >= 0x10 && arg0 <= 0x18);
}
#endif
