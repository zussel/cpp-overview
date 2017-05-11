#include <iostream>
#include <memory>

int main()
{
    auto i1 = std::make_shared<int>(7);
    std::cout << "use count: " << i1.use_count() << "\n";

    // $ use count: 1

    auto i2 = i1;
    std::cout << "use count: " << i1.use_count() << "\n";

    // $ use count: 2

    i2.reset();
    i1.reset();
    // last reset destroys pointer    return 0;

    std::cout << "use count: " << i1.use_count() << "\n";
}