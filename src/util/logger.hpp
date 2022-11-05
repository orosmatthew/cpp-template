#pragma once

#include <string>

#include <spdlog/spdlog.h>

#define LOG spdlog::get("main")

namespace util {
    void init_logger();
}
