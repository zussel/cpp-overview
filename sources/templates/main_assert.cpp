#include <iostream>

struct version
{
    static const int major = 3;
};

// uncomment to raise a compiler asseetion
// static_assert(version::major > 4, "major is too small :(");

int main()
{ 
    return version::major;
}