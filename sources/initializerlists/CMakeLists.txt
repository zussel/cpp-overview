add_executable(old_init main_old_init.cpp)

target_compile_options(old_init PUBLIC -std=c++98 -Wall -Wfloat-conversion)

add_executable(new_init main_new_init.cpp)

target_compile_options(new_init PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(custom_init main_custom_init.cpp)

target_compile_options(custom_init PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(nested_init main_nested_init.cpp)

target_compile_options(nested_init PUBLIC -std=c++1y -Wall -Wfloat-conversion)