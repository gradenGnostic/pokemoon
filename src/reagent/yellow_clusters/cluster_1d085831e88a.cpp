// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046D924
extern "C" uint32_t YellowAuto_0046d924(uint32_t arg0) __asm__("_ZN9NetAppLib9JoinFesta23JoinFestaAttractionUtil34GetQuestionnaireIdFromAttractionIdEN15JoinFestaScript12AttractionIdE");
extern "C" uint32_t YellowAuto_0046d924(uint32_t arg0) {
if (arg0 == 0x3a || arg0 == 0x3b) return 0xf; if (arg0 == 0x3c || arg0 == 0x3d) return 0; if (arg0 == 0x3e || arg0 == 0x3f) return 2; if (arg0 == 0x40 || arg0 == 0x41 || arg0 == 0x42 || arg0 == 0x43) return 1; if (arg0 == 0x44 || arg0 == 0x45) return 0xb; if (arg0 == 0x46 || arg0 == 0x47) return 6; if (arg0 == 0x48 || arg0 == 0x49) return 4; return 0;
}
#endif
