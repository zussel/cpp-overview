#include <iostream>
#include <cstring>
#include <sstream>

struct string {
    char* data;

    string(const char* p) {
        std::cout << "new string '" << p << "'\n";
        std::size_t size = strlen(p) + 1;
        data = new char[size];
        memcpy(data, p, size);
    }
    ~string() {
        std::cout << "deleting string '" << data << "'\n";
        delete[] data;
    }
    // string(string &&that) {
    //     std::cout << "copy moving string '" << that.data << "'\n";
    //     data = that.data;
    //     that.data = nullptr;
    // }
    string(const string &that) {
        std::cout << "copying string '" << that.data << "'\n";
        size_t size = strlen(that.data) + 1;
        data = new char[size];
        memcpy(data, that.data, size);
    }

};

string operator+(const string &a, const string &b)
{
    std::ostringstream s;
    s << a.data << b.data;
    return string(s.str().c_str());
}

string foo() {
    return string("bar");
}

int main()
{
    string hallo("hallo");
    string welt(" welt");

    string a(hallo);
    string b(hallo + welt);
    string c(foo());
}