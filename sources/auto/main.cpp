#include <map>
#include <string>
#include <iostream>

int main()
{
    std::map<std::string, int> string_int_map;
    string_int_map.insert(std::make_pair("hallo", 4711));

    std::map<std::string, int>::iterator i1 = string_int_map.begin();

    auto i2 = string_int_map.begin();

    std::cout << "first item with i1: " << i1->first << " -> " << i1->second << "\n";
    std::cout << "first item with i2: " << i2->first << " -> " << i2->second << "\n";
    return 0;
}