add_executable(leak main_leak.cpp)

target_compile_options(leak PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(unique main_unique.cpp)

target_compile_options(unique PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(shared main_shared.cpp)

target_compile_options(shared PUBLIC -std=c++1y -Wall -Wfloat-conversion)
