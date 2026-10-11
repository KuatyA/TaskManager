cmake_minimum_required(VERSION 3.21)
project(ctaskmanager LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
  nlohmann_json
  URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz
)
FetchContent_Declare(
    Slint
    GIT_REPOSITORY https://github.com/slint-ui/slint.git
    GIT_TAG release/1
    SOURCE_SUBDIR api/cpp
)
FetchContent_MakeAvailable(nlohmann_json)
FetchContent_MakeAvailable(Slint)

add_executable(ctaskmanager src/main.cpp)

target_link_libraries(ctaskmanager PRIVATE
 Slint::Slint nlohmann_json::nlohmann_json)

slint_target_sources(ctaskmanager src/UI/main_window.slint)