// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D468
extern const uint16_t SecretWazaTable1[14];
extern const uint16_t SecretWazaTable2[47];
extern "C" bool YellowAuto_0048d468(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK3app4sort10StringWaza12IsSecretWazaE6WazaNo");
extern "C" bool YellowAuto_0048d468(const uint8_t* arg0, uint16_t arg1) {
(void)arg0; for (int32_t i = 0; i < 14; ++i) { if (SecretWazaTable1[i] == arg1) return true; } for (int32_t i = 0; i < 47; ++i) { if (SecretWazaTable2[i] == arg1) return true; } return false;
}
#endif
