#include "fs.hpp"

#include <whereami.h>

std::filesystem::path util::get_executable_path() noexcept
{
    int length = wai_getExecutablePath(nullptr, 0, nullptr);
    if (length > 0) {
        char *path_str = (char *)malloc(length + 1);
        wai_getExecutablePath(path_str, length, nullptr);
        path_str[length] = '\0';
        auto path = std::filesystem::path(path_str);
        return path;
    }
    else {
        return {};
    }
}
