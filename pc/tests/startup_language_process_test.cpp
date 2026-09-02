#include "pokemoon/application.hpp"
#include "pokemoon/platform.hpp"
#include "pokemoon/startup_language.hpp"

#include <SDL.h>

#include <chrono>
#include <filesystem>
#include <stdexcept>

namespace {

void update(PokemonMoon::Application& application, Platform::Runtime& platform, int count = 1) {
    for (int frame = 0; frame < count; ++frame) {
        platform.poll_events();
        application.update();
    }
}

void key(PokemonMoon::Application& application,
         Platform::Runtime& platform,
         SDL_Keycode value,
         bool pressed) {
    SDL_Event event{};
    event.type = pressed ? SDL_KEYDOWN : SDL_KEYUP;
    event.key.repeat = 0;
    event.key.keysym.sym = value;
    if (SDL_PushEvent(&event) != 1) {
        throw std::runtime_error("could not inject startup language input");
    }
    update(application, platform);
}

} // namespace

int main() {
    const auto suffix = std::chrono::steady_clock::now().time_since_epoch().count();
    const auto root = std::filesystem::temp_directory_path() /
                      ("pokemoon-startup-language-process-" + std::to_string(suffix));
    try {
        Platform::Config config;
        config.data_root = root;
        config.sleep_enabled = false;
        config.graphics_enabled = false;

        Platform::Runtime platform;
        if (!platform.initialize(config)) {
            throw std::runtime_error("platform initialization failed");
        }
        PokemonMoon::Application application(platform);
        if (!application.initialize()) {
            throw std::runtime_error("application initialization failed");
        }

        key(application, platform, SDLK_DOWN, true);
        key(application, platform, SDLK_DOWN, false);
        key(application, platform, SDLK_a, true);
        key(application, platform, SDLK_a, false);
        update(application, platform, 14);
        key(application, platform, SDLK_b, true);
        if (PokemonMoon::load_startup_language_profile(platform.files())) {
            throw std::runtime_error("cancel persisted a startup language");
        }
        key(application, platform, SDLK_b, false);

        key(application, platform, SDLK_a, true);
        key(application, platform, SDLK_a, false);
        update(application, platform, 14);
        key(application, platform, SDLK_a, true);
        const auto profile = PokemonMoon::load_startup_language_profile(platform.files());
        if (!profile || profile->language != 2 || profile->kanji_mode) {
            throw std::runtime_error("confirmed startup language was not persisted");
        }
        key(application, platform, SDLK_a, false);
        update(application, platform, 4);

        application.shutdown();
        platform.shutdown();

        Platform::Runtime returning_platform;
        if (!returning_platform.initialize(config)) {
            throw std::runtime_error("returning platform initialization failed");
        }
        PokemonMoon::Application returning_application(returning_platform);
        if (!returning_application.initialize()) {
            throw std::runtime_error("returning application initialization failed");
        }
        update(returning_application, returning_platform, 3);
        returning_application.shutdown();
        returning_platform.shutdown();

        std::filesystem::remove_all(root);
        return 0;
    } catch (...) {
        std::filesystem::remove_all(root);
        throw;
    }
}
