#include <iostream>

struct adder {
  adder(int x) : x(x) {}
  int operator()(int y) const { return x + y; }

  int x;
};

int main()
{
    // create an instance of the functor class
    adder add42(42);

    // and "call" it
    std::cout << "8 + 42 = " << add42(8) << "\n";
    return 0;
}