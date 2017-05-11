#include <iostream>
#include <memory>

void foo()
{
    auto iptr = std::make_unique<int>(8);
    std::cout << "i: " << *iptr << "\n";
}

int main()
{
    foo();
    std::cout << "i was destroyed -> NO memory leak!\n";
    return 0;
}