add_executable(thread main_thread.cpp)

find_package (Threads REQUIRED)

target_compile_options(thread PUBLIC -std=c++1y -Wall -Wfloat-conversion)

target_link_libraries (thread ${CMAKE_THREAD_LIBS_INIT})

add_executable(regex main_regex.cpp)

target_compile_options(regex PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(tuple main_tuple.cpp)

target_compile_options(tuple PUBLIC -std=c++1y -Wall -Wfloat-conversion)

add_executable(nonmove main_nonmove.cpp)

target_compile_options(nonmove PUBLIC -std=c++1y -Wall -Wfloat-conversion)
