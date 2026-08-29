#include "gfl2/math/random.hpp"

namespace gfl2 {
namespace math {

namespace {
const unsigned int kMat1 = 0x8f7011ee;
const unsigned int kMat2 = 0xfc78ff1f;
const unsigned int kTmat = 0x3793fdff;
}

Random::Random() = default;

void Random::Initialize(State state) {
    state_ = state;
    mat1_ = kMat1;
    mat2_ = kMat2;
    tmat_ = kTmat;
}

unsigned int Random::Next() {
    unsigned int x = (state_.status[0] & 0x7fffffff) ^
                     state_.status[1] ^ state_.status[2];
    x ^= x << 1;

    unsigned int y = state_.status[3];
    y ^= (y >> 1) ^ x;
    const unsigned int mask = 0u - (y & 1u);

    state_.status[0] = state_.status[1];
    state_.status[1] = state_.status[2] ^ (mask & mat1_);
    state_.status[2] = x ^ (y << 10) ^ (mask & mat2_);
    state_.status[3] = y;

    const unsigned int t = state_.status[0] + (state_.status[2] >> 8);
    return t ^ state_.status[3] ^ ((0u - (t & 1u)) & tmat_);
}

unsigned int Random::Next(unsigned int limit) {
    return Next() % limit;
}

Random::State Random::SaveState() const {
    return state_;
}

} // namespace math
} // namespace gfl2
