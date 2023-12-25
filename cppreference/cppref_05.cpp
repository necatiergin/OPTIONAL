#include <optional>
#include <iostream>

int main()
{
    using namespace std;

    cout << boolalpha;

    optional<int> opt;
    cout << "has value ? " << opt.has_value() << '\n';

    opt = 43;
    if (opt)
        cout << "value set to " << opt.value() << '\n';
    else
        cout << "value not set\n";

    opt.reset();
    if (opt.has_value())
        cout << "value still set to " << opt.value() << '\n';
    else
        cout << "value no longer set\n";
}
