#include <optional>
#include <iostream>

int main()
{
	using std::optional, std::cout, std::nullopt;

	optional<int> oe;
	optional<int> ox{ 10 };
	optional<int> oy{ 20 };

	cout.setf(std::ios::boolalpha);

	cout << (oe == ox) << '\n'; //false
	cout << (oe == nullopt) << '\n'; //true
	cout << (oe < ox) << '\n'; //true
	cout << (ox > oy) << '\n'; //false
	cout << (ox == 10) << '\n'; //true

	optional<unsigned> oz;
	optional<unsigned> omin{ 0 };
	cout << (oz < omin) << '\n'; //true
}
