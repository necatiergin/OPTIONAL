#include <optional>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

int main()
{
    using namespace std;

    auto op1 = make_optional<vector<char>>({ 'a','b','c' });
    cout << "op1: ";
    for (char c : op1.value()) {
        cout << c << ",";
    }

    auto op2 = make_optional<vector<int>>(5, 2);
    cout << "\nop2: ";
    for (int i : *op2) {
        cout << i << ",";
    }

    string str{ "hello world" };
    auto op3 = make_optional<string>(move(str));
    cout << "\nop3: " << quoted(op3.value_or("empty value")) << '\n';
    cout << "str: " << quoted(str) << '\n';
}
