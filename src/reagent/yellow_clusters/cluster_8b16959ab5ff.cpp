// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046F4EC
uint32_t Next(uint8_t*, uint32_t);
extern "C" uint32_t YellowAuto_0046f4ec(uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZN9NetAppLib9JoinFesta23JoinFestaFacilitiesUtil14GetRandomColorEPN4gfl24math6RandomEN15JoinFestaScript14FacilitiesTypeEj");
extern "C" uint32_t YellowAuto_0046f4ec(uint8_t* arg0, int32_t arg1, uint32_t arg2) {
if (arg1 == 6) {
switch (arg2) {
case 101:
case 102:
case 103:
return 0;
case 104:
case 105:
case 106:
return 4;
case 107:
case 108:
case 109:
return 1;
case 110:
case 111:
case 112:
return 5;
case 113:
case 114:
case 115:
return 2;
case 116:
case 117:
case 118:
return 6;
case 119:
case 120:
case 121:
return 3;
case 122:
case 123:
case 124:
return 7;
default:
return 0;
}
}
uint32_t v = Next(arg0, 100);
if (v < 5) return 3;
if (v < 20) return 2;
if (v < 50) return 1;
return 0;
}
#endif
