#ifndef POKEMOON_SAVEDATA_SODATEYA_HPP
#define POKEMOON_SAVEDATA_SODATEYA_HPP

#include "gfl2/math/random.hpp"

namespace Savedata {

enum SodateyaID : int;

struct SodateyaRecord {
    unsigned char unknown_000[0x1e0];
    signed char egg_exists;
    unsigned char unknown_1e1[3];
    gfl2::math::Random::State random_state;
    unsigned char unknown_1f4[0x0c];
};

class Sodateya {
public:
    int IsEggExist(SodateyaID id) const;
    void EggClear(SodateyaID id);

private:
    SodateyaRecord records_[1];
};

static_assert(__builtin_offsetof(SodateyaRecord, egg_exists) == 0x1e0,
              "Sodateya egg flag offset mismatch");
static_assert(__builtin_offsetof(SodateyaRecord, random_state) == 0x1e4,
              "Sodateya RNG offset mismatch");
static_assert(sizeof(SodateyaRecord) == 0x200,
              "Sodateya record stride mismatch");

} // namespace Savedata

#endif
