#include "pokemoon/application.hpp"
#include "pokemoon/platform.hpp"

#include <cstdlib>
#include <exception>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>

namespace {

struct Options {
    Platform::Config platform;
    std::uint64_t frame_limit = 0;
};

std::uint64_t parse_count(const std::string& value, const char* option) {
    std::size_t consumed = 0;
    const auto parsed = std::stoull(value, &consumed, 10);
    if (consumed != value.size()) {
        throw std::invalid_argument(std::string(option) + " requires an integer");
    }
    return parsed;
}

Options parse_options(int argc, char** argv) {
    Options options;
    if (const char* data_root = std::getenv("POKEMOON_DATA_DIR")) {
        options.platform.data_root = data_root;
    } else if (const char* data_root = std::getenv("POKEMOON_DATA_ROOT")) {
        options.platform.data_root = data_root;
    } else {
        options.platform.data_root = "game-data";
    }

    for (int index = 1; index < argc; ++index) {
        const std::string argument = argv[index];
        if (argument == "--data-root" && index + 1 < argc) {
            options.platform.data_root = argv[++index];
        } else if (argument == "--frames" && index + 1 < argc) {
            options.frame_limit = parse_count(argv[++index], "--frames");
        } else if (argument == "--update-hz" && index + 1 < argc) {
            const auto rate = parse_count(argv[++index], "--update-hz");
            if (rate == 0 || rate > std::numeric_limits<std::uint32_t>::max()) {
                throw std::invalid_argument("--update-hz is out of range");
            }
            options.platform.update_hz = static_cast<std::uint32_t>(rate);
        } else if (argument == "--no-sleep") {
            options.platform.sleep_enabled = false;
        } else if (argument == "--headless") {
            options.platform.graphics_enabled = false;
        } else {
            throw std::invalid_argument("unknown or incomplete option: " + argument);
        }
    }
    return options;
}

} // namespace

int main(int argc, char** argv) {
    try {
        const auto options = parse_options(argc, argv);
        Platform::Runtime platform;
        if (!platform.initialize(options.platform)) {
            return 1;
        }

        PokemonMoon::Application application(platform);
        if (!application.initialize()) {
            platform.shutdown();
            return 1;
        }

        while (!platform.quit_requested()) {
            platform.poll_events();
            if (platform.quit_requested()) {
                break;
            }
            application.update();
            if (options.frame_limit != 0 && application.frame_count() >= options.frame_limit) {
                platform.request_quit();
            }
            platform.wait_for_next_frame();
        }

        platform.log(std::string("furthest startup point: ") +
                     PokemonMoon::startup_point_name(application.startup_point()));
        platform.log("host update frames: " + std::to_string(application.frame_count()));
        application.shutdown();
        platform.shutdown();
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "pokemoon-pc: " << error.what() << '\n';
        return 2;
    }
}
