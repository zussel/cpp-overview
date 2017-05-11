#include <vector>
#include <iostream>

int main()
{
    std::vector<int> int_vec = { 1, 2, 3, 4, 5, 6 };

    for (auto &i : int_vec) {
        std::cout << "i: " << i << "\n";
    }
    return 0;
}