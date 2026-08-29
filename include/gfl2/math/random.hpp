#ifndef POKEMOON_GFL2_MATH_RANDOM_HPP
#define POKEMOON_GFL2_MATH_RANDOM_HPP

namespace gfl2 {
namespace math {

class Random {
public:
    struct State {
        unsigned int status[4];
    };

    Random();

    void Initialize(State state);
    unsigned int Next();
    unsigned int Next(unsigned int limit);
    State SaveState() const;

private:
    State state_;
    unsigned int mat1_;
    unsigned int mat2_;
    unsigned int tmat_;
};

static_assert(sizeof(unsigned int) == 4, "32-bit unsigned int required");
static_assert(sizeof(Random::State) == 0x10, "Random::State layout mismatch");
static_assert(sizeof(Random) == 0x1c, "Random layout mismatch");

} // namespace math
} // namespace gfl2

#endif
