#include <vector>
#include <iostream>

int main()
{
    std::vector<int> int_vec;

    int_vec.push_back(1);
    int_vec.push_back(2);
    int_vec.push_back(3);
    int_vec.push_back(4);
    int_vec.push_back(5);
    int_vec.push_back(6);

    for (std::vector<int>::iterator i = int_vec.begin(); i != int_vec.end(); ++i) {
        std::cout << "i: " << *i << "\n";
    }
    return 0;
}