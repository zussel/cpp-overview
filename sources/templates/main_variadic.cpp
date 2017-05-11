#include <iostream>

template<typename T>
T adder(T v) {
  return v;
}

template<typename T, typename... Args>
T adder(T first, Args... args) {
  return first + adder(args...);
}

int main()
{
    std::cout << "1 + 2 + 3 + 8 + 7 = " << adder(1, 2, 3, 8, 7) << "\n";
    return 0;
}
