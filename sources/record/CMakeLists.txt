add_executable(thread main_thread.cpp)

find_package (Threads REQUIRED)

target_compile_options(thread PUBLIC -std=c++1y -Wall -Wfloat-conversion)

target_link_libraries (thread ${CMAKE_THREAD_LIBS_INIT})