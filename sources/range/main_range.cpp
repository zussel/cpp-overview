#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    for (const int &i : v) {
        std::cout << i << "\n";
    }
    
    for (auto &i : v) {
        std::cout << i << "\n";
    }
    
    return 0;
}