#include <iostream>

int main()
{
    auto add42 = [](int i) { return i + 42; };

    std::cout << "8 + 42 = " << add42(8) << "\n";

    return 0;
}