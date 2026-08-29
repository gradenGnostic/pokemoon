#include "savedata/sodateya.hpp"

namespace Savedata {

void Sodateya::EggClear(SodateyaID id) {
    SodateyaRecord& record = records_[static_cast<int>(id)];
    gfl2::math::Random random;
    random.Initialize(record.random_state);
    random.Next();
    record.random_state = random.SaveState();
    record.egg_exists = 0;
}

} // namespace Savedata
