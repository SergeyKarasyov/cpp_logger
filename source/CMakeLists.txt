set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_library(
    ${PROJECT_NAME}_lib
    Logger.cpp
    Logger.hpp
)
set(THREADS_PREFER_PTHREAD_FLAG ON)
set_target_properties(${PROJECT_NAME}_lib PROPERTIES LINKER_LANGUAGE CXX)
target_compile_features(${PROJECT_NAME}_lib PUBLIC cxx_std_14)
target_link_libraries(${PROJECT_NAME}_lib PRIVATE Threads::Threads)
target_compile_options(${PROJECT_NAME}_lib PRIVATE -Werror -Wall -Wextra)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ${PROJECT_NAME}_lib)