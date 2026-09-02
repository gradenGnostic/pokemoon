#ifndef POKEMOON_PC_APPLICATION_HPP
#define POKEMOON_PC_APPLICATION_HPP

#include "gfl2/math/random.hpp"
#include "pokemoon/game_manager.hpp"
#include "pokemoon/process_manager.hpp"
#include "pokemoon/startup_language.hpp"
#include "savedata/box.hpp"
#include "savedata/situation.hpp"
#include "pokemoon/platform.hpp"

#include <cstdint>
#include <memory>

namespace PokemonMoon {

enum class StartupPoint {
    HostEntry,
    PlatformReady,
    ReconstructedCoreReady,
    GameManagerReady,
    NativeSchedulerReady,
};

class Application {
public:
    explicit Application(Platform::Runtime& platform);

    bool initialize();
    void shutdown();
    void update();
    StartupPoint startup_point() const;
    std::uint64_t frame_count() const;

private:
    class TitleMenuFrameCell;
    class TitleMenuProcess;
    class StartupLanguageProcess;

    void run_native_frame();
    void apply_startup_language_profile(StartupLanguageProfile profile);

    Platform::Runtime& platform_;
    gfl2::math::Random random_{};
    Savedata::Situation situation_{};
    Savedata::BOX box_{};
    std::unique_ptr<GameSys::GameManager> game_manager_;
    gfl2::proc::Manager process_manager_;
    StartupPoint startup_point_ = StartupPoint::HostEntry;
    std::uint64_t frame_count_ = 0;
    StartupLanguageProfile startup_language_profile_{};
};

const char* startup_point_name(StartupPoint point);

} // namespace PokemonMoon

#endif
