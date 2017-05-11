#ifndef COLUMNS
#define COLUMNS

#include <vector>
#include <string>
#include <initializer_list>

struct columns {
    std::vector<std::string> column_vector;

    columns(std::initializer_list<std::string> names)
        : column_vector(names)
    { }

    columns& operator=(std::initializer_list<std::string> names)
    {
        column_vector.assign(names.begin(), names.end());
        return *this;
    }
};

#endif /* COLUMNS */
