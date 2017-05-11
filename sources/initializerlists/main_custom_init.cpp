#include "columns.hpp"

#include <iostream>

int main()
{
    columns cols = { "id", "name", "height", "width", "lenght" };

    for (auto &name : cols.column_vector) {
        std::cout << "name: " << name << "\n";
    }

    return 0;
}