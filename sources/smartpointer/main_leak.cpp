#include <iostream>

void foo()
{
    int *i = new int;
    *i = 8;
    std::cout << "i: " << *i << "\n";
}

int main()
{
    foo();
    std::cout << "i was not destroyed -> memory leak!\n";
    return 0;
}