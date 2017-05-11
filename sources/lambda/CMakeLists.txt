add_executable(functor main_functor.cpp)

target_compile_options(functor PUBLIC -std=c++98 -Wall -Wfloat-conversion)

add_executable(lambda main_lambda.cpp)

target_compile_options(lambda PUBLIC -std=c++1y -Wall -Wfloat-conversion)
