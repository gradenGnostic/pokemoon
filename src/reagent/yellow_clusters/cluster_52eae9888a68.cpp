// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00286DF4
void* helper_00286e58(void);
void helper_001076a8(void* arg0);
void helper_00107730(void* arg0);
uint8_t* helper_00286e5c(void);
bool helper_00286ecc(void);
uint32_t helper_0028754c(uint32_t* arg0);
extern "C" uint32_t YellowAuto_00286df4() __asm__("_ZN2nn7friends3CTR6detail16GetMyPrincipalIdEv");
extern "C" uint32_t YellowAuto_00286df4() {
void* l = helper_00286e58();
helper_001076a8(l);
int32_t f = *(int32_t*)(helper_00286e5c() + 4);
helper_00107730(l);
if (f == 0 && !helper_00286ecc()) return 0;
uint32_t tmp[5];
uint32_t rc = helper_0028754c(tmp);
if ((rc & 0x80000000U) != 0U) return 0;
return tmp[0];
}
#endif
