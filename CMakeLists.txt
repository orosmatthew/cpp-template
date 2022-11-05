cmake_minimum_required(VERSION 3.20)

project(cpp_template)

set(CMAKE_CXX_STANDARD 20)

# find_package(Package REQUIRED OPTIONAL_COMPONENTS component)

# set(PACKAGE_OPTION OFF CACHE BOOL "")

# add_subdirectory(lib/my_lib-1.0.0)

set(LIB_SOURCE_FILES lib/whereami-master/src/whereami.c)

set(SOURCE_FILES src/util/logger.cpp src/util/fs.cpp src/main.cpp)

add_executable(${PROJECT_NAME} ${LIB_SOURCE_FILES} ${SOURCE_FILES})

# target_link_libraries(${PROJECT_NAME} Library)

target_include_directories(${PROJECT_NAME} PRIVATE lib/spdlog-1.11.0/include lib/whereami-master/include)