// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048FDDC
void LoadMegaEvolveTable(uint32_t);
uint32_t GetMegaEvolveRouteNum();
bool FUN_003163e0(uint8_t);
uint16_t FUN_00315d0c(uint8_t);
extern "C" bool YellowAuto_0048fddc(uint32_t arg0, uint32_t arg1) __asm__("_ZNK3pml8pokepara13EvolveManager16IsMegaEvolveItemE6MonsNot");
extern "C" bool YellowAuto_0048fddc(uint32_t arg0, uint32_t arg1) {
LoadMegaEvolveTable(arg0);
for (uint32_t i = 0; i < GetMegaEvolveRouteNum(); ++i)
    if (FUN_003163e0((uint8_t)i) && arg1 == FUN_00315d0c((uint8_t)i))
        return true;
return false;
}
#endif
