#include "util/logger.hpp"
#include "util/fs.hpp"

int main()
{
    util::init_logger();

    LOG->set_level(spdlog::level::debug);

    LOG->info(util::get_executable_path().string());

    LOG->info("Hello World!");

    return EXIT_SUCCESS;
}