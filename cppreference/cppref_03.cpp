#include <iostream>
#include <optional>
#include <string>

int main()
{
    using namespace std;

    optional<int> o1, // empty
                  o2 = 1, // init from rvalue
                  o3 = o2; // copy-constructor

    // calls std::string( initializer_list<CharT> ) constructor
    optional<string> o4(in_place, { 'a', 'b', 'c' });

    // calls std::string( size_type count, CharT ch ) constructor
    optional<string> o5(in_place, 3, 'A');

    // Move-constructed from std::string using deduction guide to pick the type

    optional o6(string{ "deduction" });

    cout << *o2 << ' ' << *o3 << ' ' << *o4 << ' ' << *o5 << ' ' << *o6 << '\n';
}
