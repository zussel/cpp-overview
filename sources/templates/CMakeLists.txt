add_executable(fibonacci main_fibonacci.cpp)

target_compile_options(fibonacci PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(variadic main_variadic.cpp)

target_compile_options(variadic PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(traits main_traits.cpp)

target_compile_options(traits PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(assert main_assert.cpp)

target_compile_options(assert PUBLIC -std=c++1y -Wall -Wfloat-conversion)
