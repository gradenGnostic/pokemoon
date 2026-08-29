#include "savedata/sodateya.hpp"

namespace Savedata {

int Sodateya::IsEggExist(SodateyaID id) const {
    return records_[static_cast<int>(id)].egg_exists;
}

} // namespace Savedata
