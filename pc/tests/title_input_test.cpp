#include "pokemoon/application.hpp"
#include "pokemoon/platform.hpp"

#include <SDL.h>

#include <chrono>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <stdexcept>

namespace {

void write_fixture(const Platform::FileSystem& files,
                   std::uint32_t archive_id,
                   std::uint32_t data_id) {
    const auto path = files.resolve_archive(archive_id, data_id);
    std::filesystem::create_directories(path.parent_path());
    std::ofstream stream(path, std::ios::binary);
    const char bytes[] = {'P', 'C'};
    stream.write(bytes, sizeof(bytes));
    if (!stream) {
        throw std::runtime_error("could not write title resource fixture");
    }
}

void verify_key_mapping(Platform::Runtime& platform,
                        SDL_Keycode key,
                        Platform::Button button) {
    SDL_Event event{};
    event.type = SDL_KEYDOWN;
    event.key.keysym.sym = key;
    if (SDL_PushEvent(&event) != 1) {
        throw std::runtime_error("could not inject SDL keyboard press");
    }
    platform.poll_events();
    if (!platform.input().button(button).pressed ||
            !platform.input().button(button).held) {
        throw std::runtime_error("SDL keyboard press mapping failed");
    }

    event.type = SDL_KEYUP;
    if (SDL_PushEvent(&event) != 1) {
        throw std::runtime_error("could not inject SDL keyboard release");
    }
    platform.poll_events();
    if (!platform.input().button(button).released ||
            platform.input().button(button).held) {
        throw std::runtime_error("SDL keyboard release mapping failed");
    }
}

void verify_controller_mapping(Platform::Runtime& platform,
                               SDL_GameControllerButton native_button,
                               Platform::Button button) {
    SDL_Event event{};
    event.type = SDL_CONTROLLERBUTTONDOWN;
    event.cbutton.button = static_cast<std::uint8_t>(native_button);
    if (SDL_PushEvent(&event) != 1) {
        throw std::runtime_error("could not inject SDL controller press");
    }
    platform.poll_events();
    if (!platform.input().button(button).pressed ||
            !platform.input().button(button).held) {
        throw std::runtime_error("SDL controller press mapping failed");
    }

    event.type = SDL_CONTROLLERBUTTONUP;
    if (SDL_PushEvent(&event) != 1) {
        throw std::runtime_error("could not inject SDL controller release");
    }
    platform.poll_events();
    if (!platform.input().button(button).released ||
            platform.input().button(button).held) {
        throw std::runtime_error("SDL controller release mapping failed");
    }
}

} // namespace

int main() {
    const auto suffix = std::chrono::steady_clock::now().time_since_epoch().count();
    const auto root = std::filesystem::temp_directory_path() /
                      ("pokemoon-title-input-" + std::to_string(suffix));
    try {
        Platform::Config config;
        config.data_root = root;
        config.sleep_enabled = false;
        config.graphics_enabled = false;

        Platform::Runtime platform;
        if (!platform.initialize(config)) {
            throw std::runtime_error("platform initialization failed");
        }
        verify_key_mapping(platform, SDLK_a, Platform::Button::A);
        verify_key_mapping(platform, SDLK_b, Platform::Button::B);
        verify_key_mapping(platform, SDLK_UP, Platform::Button::Up);
        verify_key_mapping(platform, SDLK_DOWN, Platform::Button::Down);
        verify_key_mapping(platform, SDLK_LEFT, Platform::Button::Left);
        verify_key_mapping(platform, SDLK_RIGHT, Platform::Button::Right);
        verify_controller_mapping(platform, SDL_CONTROLLER_BUTTON_A, Platform::Button::A);
        verify_controller_mapping(platform, SDL_CONTROLLER_BUTTON_B, Platform::Button::B);
        write_fixture(platform.files(), 0x5e, 4);
        write_fixture(platform.files(), 0x8a, 0);
        write_fixture(platform.files(), 0x4a, 0);
        const auto resource = platform.files().read_binary("romfs/arc/005e/0004.bin");
        if (resource.size() != 2 || resource[0] != 'P' || resource[1] != 'C') {
            throw std::runtime_error("external title resource read did not preserve bytes");
        }

        PokemonMoon::Application application(platform);
        if (!application.initialize()) {
            platform.shutdown();
            throw std::runtime_error("application initialization failed");
        }
        for (int frame = 0; frame < 6; ++frame) {
            platform.poll_events();
            application.update();
        }

        SDL_Event press{};
        press.type = SDL_KEYDOWN;
        press.key.repeat = 0;
        press.key.keysym.sym = SDLK_a;
        if (SDL_PushEvent(&press) != 1) {
            throw std::runtime_error("could not inject SDL keyboard event");
        }
        platform.poll_events();
        if (!platform.input().button(Platform::Button::A).pressed ||
                !platform.input().button(Platform::Button::A).held) {
            throw std::runtime_error("SDL A press did not reach Platform::Input");
        }
        application.update();

        SDL_Event release{};
        release.type = SDL_KEYUP;
        release.key.repeat = 0;
        release.key.keysym.sym = SDLK_a;
        if (SDL_PushEvent(&release) != 1) {
            throw std::runtime_error("could not inject SDL keyboard release");
        }
        platform.poll_events();
        if (!platform.input().button(Platform::Button::A).released ||
                platform.input().button(Platform::Button::A).held) {
            throw std::runtime_error("SDL A release did not reach Platform::Input");
        }

        for (int frame = 0; frame < 12 && !platform.quit_requested(); ++frame) {
            platform.poll_events();
            application.update();
        }
        if (!platform.quit_requested()) {
            throw std::runtime_error("title selection did not reach the completion boundary");
        }

        application.shutdown();
        platform.shutdown();
        std::filesystem::remove_all(root);
        return 0;
    } catch (const std::exception& error) {
        std::filesystem::remove_all(root);
        std::cerr << "title_input_test: " << error.what() << '\n';
        return 3;
    }
}
