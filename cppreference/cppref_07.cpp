#include <optional>
#include <iostream>

int main()
{
    using namespace std;

    optional<int> opt{};

    try {
        [[maybe_unused]] int n = opt.value();
    }
    catch (const bad_optional_access& e) {
        cout << e.what() << '\n';
    }

    try {
        opt.value() = 42;
    }
    catch (const std::bad_optional_access& e) {
        cout << e.what() << '\n';
    }

    opt = 43;
    cout << *opt << '\n';

    opt.value() = 44;
    cout << opt.value() << '\n';
}
