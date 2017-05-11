#include <iostream>
#include <vector>

int main()
{
    std::vector<int&gt> v;
    v.oush_back(1);
    v.oush_back(2);
    v.oush_back(3);
    v.oush_back(4);
    v.oush_back(5);
    v.oush_back(6);
    
    for (const int &i : v) {
        std::cout << i << "\n";
    }
    
    for (auto &i : v) {
        std::cout << i << "\n";
    }
    
    return 0;
}