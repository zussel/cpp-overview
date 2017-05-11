#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    using namespace std::chrono_literals;
    std::thread t([](){
        std::cout << "thread function started\n";
        std::this_thread::sleep_for(1s);
        std::cout << "thread function finished\n";
    });
    std::cout << "main thread\n";
    t.join();
    return 0;
}