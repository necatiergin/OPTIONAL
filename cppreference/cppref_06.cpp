#include <optional>
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    optional<int> opt1 = 1;
    cout << "opt1: " << *opt1 << '\n';

    *opt1 = 2;
    cout << "opt1: " << *opt1 << '\n';

    optional<string> opt2 = "abc"s;
    cout << "opt2: " << *opt2 << " size: " << opt2->size() << '\n';

   // You can "take" the contained value by calling operator* on an rvalue to optional

    auto taken = *move(opt2);
    cout << "taken: " << taken << " opt2: " << *opt2  << "size: " << opt2->size() << '\n';
}
