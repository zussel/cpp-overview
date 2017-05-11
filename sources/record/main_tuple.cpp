#include <iostream>
#include <tuple>

int main()
{
    std::tuple<int,char> foo (10,'x');
    auto bar = std::make_tuple ("test", 3.1, 14, 'y');

    std::get<2>(bar) = 100; // access element

    int myint; char mychar;

    // unpack elements
    std::tie (myint, mychar) = foo;
    // unpack (with ignore)
    std::tie (std::ignore, std::ignore, myint, mychar) = bar;

    mychar = std::get<3>(bar);

    std::get<0>(foo) = std::get<2>(bar);
    std::get<1>(foo) = mychar;

    std::cout << "foo contains: ";
    std::cout << std::get<0>(foo) << ' ';
    std::cout << std::get<1>(foo) << '\n';
}