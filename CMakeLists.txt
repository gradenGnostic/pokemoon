cmake_minimum_required(VERSION 3.20)

project(pokemoon_pc VERSION 0.1.0 LANGUAGES CXX)

find_package(SDL2 REQUIRED CONFIG)
find_package(OpenGL REQUIRED)

option(POKEMOON_ENABLE_SANITIZERS "Enable AddressSanitizer and UndefinedBehaviorSanitizer" OFF)
option(PC_STARTUP_LANGUAGE "Enable the reconstructed fresh-profile language selector" OFF)
if(PC_STARTUP_LANGUAGE)
    find_package(SDL2_ttf REQUIRED CONFIG)
endif()

add_library(pokemoon_portable_core STATIC
    src/gfl2/math/random.cpp
    src/savedata/box_accessors.cpp
    src/savedata/egg_clear.cpp
    src/savedata/is_egg_exist.cpp
    src/savedata/situation_accessors.cpp
)
target_include_directories(pokemoon_portable_core PUBLIC include)
target_compile_features(pokemoon_portable_core PUBLIC cxx_std_17)

add_library(pokemoon_platform STATIC
    pc/src/frame_manager.cpp
    pc/src/game_manager.cpp
    pc/src/platform.cpp
    pc/src/process_manager.cpp
)
target_include_directories(pokemoon_platform PUBLIC pc/include)
target_compile_features(pokemoon_platform PUBLIC cxx_std_17)
target_link_libraries(pokemoon_platform PUBLIC SDL2::SDL2 OpenGL::GL)

add_library(pokemoon_application STATIC
    pc/src/application.cpp
    pc/src/startup_language.cpp
    pc/src/title_resources.cpp
)
target_include_directories(pokemoon_application PUBLIC pc/include)
target_compile_features(pokemoon_application PUBLIC cxx_std_17)
target_link_libraries(pokemoon_application PUBLIC pokemoon_portable_core pokemoon_platform)
if(PC_STARTUP_LANGUAGE)
    target_compile_definitions(pokemoon_application PRIVATE PC_STARTUP_LANGUAGE=1)
    target_link_libraries(pokemoon_application PUBLIC SDL2_ttf::SDL2_ttf)
endif()

add_executable(pokemoon-pc
    pc/src/main.cpp
)
target_include_directories(pokemoon-pc PRIVATE pc/include)
target_compile_features(pokemoon-pc PRIVATE cxx_std_17)
target_link_libraries(pokemoon-pc PRIVATE pokemoon_application)

foreach(target pokemoon_portable_core pokemoon_platform pokemoon_application pokemoon-pc)
    target_compile_options(${target} PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion)
    if(POKEMOON_ENABLE_SANITIZERS AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(${target} PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
        target_link_options(${target} PRIVATE -fsanitize=address,undefined)
    endif()
endforeach()

include(CTest)
if(BUILD_TESTING)
    add_test(NAME native_bootstrap COMMAND pokemoon-pc --frames 3 --no-sleep --headless)
    add_executable(game_manager_test pc/tests/game_manager_test.cpp)
    target_include_directories(game_manager_test PRIVATE pc/include)
    target_compile_features(game_manager_test PRIVATE cxx_std_17)
    target_compile_options(game_manager_test PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion)
    if(POKEMOON_ENABLE_SANITIZERS AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(game_manager_test PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
        target_link_options(game_manager_test PRIVATE -fsanitize=address,undefined)
    endif()
    target_link_libraries(game_manager_test PRIVATE pokemoon_platform)
    add_test(NAME game_manager_lifecycle COMMAND game_manager_test)

    add_executable(scheduler_test pc/tests/scheduler_test.cpp)
    target_include_directories(scheduler_test PRIVATE pc/include)
    target_compile_features(scheduler_test PRIVATE cxx_std_17)
    target_compile_options(scheduler_test PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion)
    if(POKEMOON_ENABLE_SANITIZERS AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(scheduler_test PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
        target_link_options(scheduler_test PRIVATE -fsanitize=address,undefined)
    endif()
    target_link_libraries(scheduler_test PRIVATE pokemoon_platform)
    add_test(NAME scheduler_lifecycle COMMAND scheduler_test)

    add_executable(title_input_test pc/tests/title_input_test.cpp)
    target_include_directories(title_input_test PRIVATE pc/include)
    target_compile_features(title_input_test PRIVATE cxx_std_17)
    target_compile_options(title_input_test PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion)
    if(POKEMOON_ENABLE_SANITIZERS AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(title_input_test PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
        target_link_options(title_input_test PRIVATE -fsanitize=address,undefined)
    endif()
    target_link_libraries(title_input_test PRIVATE pokemoon_application SDL2::SDL2)
    if(NOT PC_STARTUP_LANGUAGE)
        add_test(NAME title_native_input_transition COMMAND title_input_test)
    endif()

    add_executable(title_resources_test pc/tests/title_resources_test.cpp)
    target_include_directories(title_resources_test PRIVATE pc/include)
    target_compile_features(title_resources_test PRIVATE cxx_std_17)
    target_compile_options(title_resources_test PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion)
    if(POKEMOON_ENABLE_SANITIZERS AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(title_resources_test PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
        target_link_options(title_resources_test PRIVATE -fsanitize=address,undefined)
    endif()
    target_link_libraries(title_resources_test PRIVATE pokemoon_application)
    add_test(NAME title_retail_resource_decode COMMAND title_resources_test)

    add_executable(startup_language_test pc/tests/startup_language_test.cpp)
    target_include_directories(startup_language_test PRIVATE pc/include)
    target_compile_features(startup_language_test PRIVATE cxx_std_17)
    target_compile_options(startup_language_test PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion)
    if(POKEMOON_ENABLE_SANITIZERS AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(startup_language_test PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
        target_link_options(startup_language_test PRIVATE -fsanitize=address,undefined)
    endif()
    target_link_libraries(startup_language_test PRIVATE pokemoon_application)
    add_test(NAME startup_language_profile COMMAND startup_language_test)

    if(PC_STARTUP_LANGUAGE)
        add_executable(startup_language_process_test pc/tests/startup_language_process_test.cpp)
        target_include_directories(startup_language_process_test PRIVATE pc/include)
        target_compile_features(startup_language_process_test PRIVATE cxx_std_17)
        target_compile_options(startup_language_process_test PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion)
        if(POKEMOON_ENABLE_SANITIZERS AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
            target_compile_options(startup_language_process_test PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
            target_link_options(startup_language_process_test PRIVATE -fsanitize=address,undefined)
        endif()
        target_link_libraries(startup_language_process_test PRIVATE pokemoon_application SDL2::SDL2)
        add_test(NAME startup_language_process_transition COMMAND startup_language_process_test)
    endif()

    if(NOT PC_STARTUP_LANGUAGE)
        add_test(
            NAME title_process_120_frames
            COMMAND ${CMAKE_COMMAND}
                -DPOKEMOON_PROGRAM=$<TARGET_FILE:pokemoon-pc>
                -P ${CMAKE_CURRENT_SOURCE_DIR}/pc/tests/title_process_smoke.cmake
        )
    endif()
endif()
