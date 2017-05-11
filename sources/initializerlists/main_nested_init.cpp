#include "columns.hpp"

#include <iostream>

int main()
{
    std::vector<columns> columns_vector = {
        { "id", "name", "height", "width", "lenght" },
        { "id", "site", "from", "to"},
        { "id", "name", "weight", "mother", "father"}
    };

    for (auto &cols : columns_vector) {
        std::cout << "col:";
        for (auto &name : cols.column_vector) {
            std::cout << " " << name;
        }
        std::cout << "\n";
    }

    return 0;
}